#ifndef HELPERS_READ_TEST_ENTRIES_H_
#define HELPERS_READ_TEST_ENTRIES_H_

#include <string>
#include <vector>

struct TestEntry {
  std::string description;
	std::string input;
	std::string tree_string;
};

std::vector<TestEntry> read_corpus_entries(std::string directory);

#endif
