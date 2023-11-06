use std::collections::{HashMap, HashSet};

pub(crate) struct DependencyGraph {
    graph: HashMap<String, HashSet<String>>,
}

impl DependencyGraph {
    pub(crate) fn new() -> Self {
        DependencyGraph {
            graph: HashMap::new(),
        }
    }

    pub(crate) fn add_dependency(&mut self, source: &str, target: &str) {
        println!("add_dependency: {source} -> {target}");
        self.graph
            .entry(source.to_string())
            .or_insert(HashSet::new())
            .insert(target.to_string());
    }

    pub(crate) fn topological_sort(&self) -> Option<Vec<String>> {
        let mut visited = HashSet::new();
        let mut result = Vec::new();
        let mut in_current_path = HashSet::new();

        for node in self.graph.keys() {
            if !visited.contains(node) {
                if self.visit(node, &mut visited, &mut result, &mut in_current_path) {
                    return None; // 发现循环依赖
                }
            }
        }

        Some(result)
    }

    fn visit(
        &self,
        node: &str,
        visited: &mut HashSet<String>,
        result: &mut Vec<String>,
        in_current_path: &mut HashSet<String>,
    ) -> bool {
        visited.insert(node.to_string());
        in_current_path.insert(node.to_string());

        if let Some(dependencies) = self.graph.get(node) {
            for dep in dependencies {
                if !visited.contains(dep) {
                    if self.visit(dep, visited, result, in_current_path) {
                        return true; // 发现循环依赖
                    }
                } else if in_current_path.contains(dep) {
                    return true; // 发现循环依赖
                }
            }
        }

        in_current_path.remove(node);
        result.push(node.to_string());
        false
    }
}
