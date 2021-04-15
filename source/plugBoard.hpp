#ifndef plugBoard
#define plugBoard

#include <string>
#include <unordered_map>

#include "typeDefinitions.hpp"
#include "tl/expected.hpp"


class PlugBoard {
public: 
	PlugBoard() { createBoard(); }
	~PlugBoard() {}

	auto encode(const MessageElement &text) -> tl::expected<MessageElement, ENIGERR>;
	auto plug(const MessageElement& from, const MessageElement& to)->tl::expected<void, ENIGERR>;

private:
	std::unordered_map<MessageElement, MessageElement> board;
	void constexpr createBoard();
	bool checkElement(const MessageElement& element);

};

#endif