use std::cell::RefCell;
use std::collections::HashMap;
pub(crate) struct Cache {
    inner: RefCell<HashMap<String, String>>,
}

impl Cache {
    pub(crate) fn new() -> Self {
        Cache {
            inner: RefCell::new(HashMap::new()),
        }
    }

    pub(crate) fn set(&self, k: &str, v: &str) {
        self.inner.borrow_mut().insert(k.to_string(), v.to_string());
    }

    pub(crate) fn get(&self, k: &str) -> Option<String> {
        self.inner.borrow().get(k).map(|v| v.clone())
    }
}
