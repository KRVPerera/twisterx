/*
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TWISTERX_SRC_TWISTERX_PYTHON_NET_DISTRIBUTED_H_
#define TWISTERX_SRC_TWISTERX_PYTHON_NET_DISTRIBUTED_H_
#include <iostream>
#include "../../net/ops/all_to_all.hpp"
#include "../../arrow/arrow_all_to_all.hpp"

namespace twisterx {
namespace net {
void cdist_init();
int cget_rank();
int cget_size();
void call_to_all(void *buffer, int length);
void cdist_finalize();
}
}

#endif //TWISTERX_SRC_TWISTERX_PYTHON_NET_DISTRIBUTED_H_