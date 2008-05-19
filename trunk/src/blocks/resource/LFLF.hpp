#ifndef _LFLF_BLOCK_HPP_
#define _LFLF_BLOCK_HPP_

#include <fstream>
#include <stdint.h>
#include <string>
#include <vector>
using namespace std;

class Room;
class ROOM;
class SCRP;
class COST;
class CHAR;

class LFLF
{
private:
	uint32_t _size;
	ROOM *_room;
	vector<SCRP *> _scrps;
	vector<COST *> _costs;
	vector<CHAR *> _chars;
	vector<uint32_t> _scrpOffsets;
	vector<uint32_t> _costOffsets;
	vector<uint32_t> _charOffsets;
public:
	LFLF(Room *room);
	uint32_t getSize();
	uint32_t getSCRPOffset(uint32_t index) { return _scrpOffsets[index]; }
	uint32_t getCOSTOffset(uint32_t index) { return _costOffsets[index]; }
	uint32_t getCHAROffset(uint32_t index) { return _charOffsets[index]; }
	void write(ofstream &f);
	~LFLF();
};

#endif

