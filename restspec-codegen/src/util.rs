use std::env;
use std::fs;
use std::fs::OpenOptions;
use std::io::prelude::Write;
use std::path::{Path, PathBuf};

use crate::generator::GeneratedCode;

pub(crate) fn absolute_path(path: impl AsRef<Path>) -> PathBuf {
    let path = path.as_ref();
    let absolute_path = if path.is_absolute() {
        path.to_path_buf()
    } else {
        env::current_dir().unwrap().join(path)
    };
    absolute_path
}

pub(crate) fn ensure_parent_directory_exists(
    file_path: impl AsRef<Path>,
) -> Result<(), std::io::Error> {
    if let Some(parent_dir) = file_path.as_ref().parent() {
        fs::create_dir_all(parent_dir)?;
    }
    Ok(())
}

pub(crate) fn write_to_file(output_dir: &PathBuf, codes: &Vec<GeneratedCode>) {
    for item in codes {
        let path = output_dir.clone().join(item.get_name());
        ensure_parent_directory_exists(&path).expect(&format!(
            "Unable to create directory {:?}",
            &path.parent().unwrap()
        ));
        let mut file = OpenOptions::new()
            .create(true)
            .truncate(true)
            .write(true)
            .open(&path)
            .expect(&format!("Unable to create file {:?}", &path));
        file.write_all(item.get_code().as_bytes()).unwrap();
    }
}
