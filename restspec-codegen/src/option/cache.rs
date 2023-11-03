use std::cell::RefCell;
use std::collections::HashMap;
pub struct Cache {
    inner: RefCell<HashMap<String, String>>,
}

impl Cache {
    pub fn new() -> Self {
        Cache {
            inner: RefCell::new(HashMap::new()),
        }
    }

    pub fn set(&self, k: &str, v: &str) {
        self.inner.borrow_mut().insert(k.to_string(), v.to_string());
    }

    pub fn get(&self, k: &str) -> Option<String> {
        self.inner.borrow().get(k).map(|v| v.clone())
    }
}
