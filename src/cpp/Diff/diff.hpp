#ifndef diff_hpp
#define diff_hpp

#include "../VNode/VNode.hpp"

namespace asmdom {

	void diff(VNode* __restrict__ const oldVnode, VNode* __restrict__ const vnode);

}

#endif