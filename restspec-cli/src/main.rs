use clap::{Parser, ValueEnum};
use restspec_codegen;
use std::fs;
use std::{env, path::Path, path::PathBuf};

#[derive(Parser)]
#[command(author, version, about, long_about = None)]
struct Cli {
    /// language
    #[arg(short, long, value_enum)]
    language: Language,
    /// include dir
    #[arg(short, long, value_hint = clap::ValueHint::DirPath, default_value = ".")]
    include_dir: PathBuf,

    /// output dir
    #[arg(short, long, value_hint = clap::ValueHint::DirPath, default_value = ".")]
    output_dir: PathBuf,

    /// input files
    #[arg(value_hint = clap::ValueHint::DirPath)]
    files: Vec<PathBuf>,
}

#[derive(Debug, Copy, Clone, PartialEq, Eq, PartialOrd, Ord, ValueEnum)]
enum Language {
    /// ObjectiveC
    ObjectiveC,
    /// Java
    Java,
}

pub fn absolute_path(path: impl AsRef<Path>) -> PathBuf {
    let path = path.as_ref();
    let absolute_path = if path.is_absolute() {
        path.to_path_buf()
    } else {
        env::current_dir().unwrap().join(path)
    };
    absolute_path
}

fn main() {
    let cli = Cli::parse();

    let include_dir = absolute_path(cli.include_dir);
    let output_dir = absolute_path(cli.output_dir);

    let gen_language = match &cli.language {
        Language::ObjectiveC => restspec_codegen::language::Language::ObjectiveC,
        Language::Java => restspec_codegen::language::Language::Java,
    };

    let ctx =
        restspec_codegen::Context::new(gen_language, (&cli.files).clone(), include_dir, output_dir);
    ctx.gen_code();
}
