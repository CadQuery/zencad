#include <zencad/wire.h>
#include <zencad/face.h>

std::shared_ptr<ZenFace> ZenWire::make_face() {
	return std::shared_ptr<ZenFace>(new ZenWireFace(this->get_spointer()));
}

std::shared_ptr<ZenFace> ZenEdge::make_face() {
	return std::shared_ptr<ZenFace>(new ZenEdgeFace(this->get_spointer()));
}