/*
 * Copyright (C) 2020 Swift Navigation Inc.
 * Contact: Swift Navigation <dev@swiftnav.com>
 *
 * This source is subject to the license found in the file 'LICENSE' which must
 * be distributed together with this source. All other rights reserved.
 *
 * THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
 * EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A PARTICULAR PURPOSE.
 */

#ifndef CSV_OPTIONAL_SUPPORT_H
#define CSV_OPTIONAL_SUPPORT_H

namespace io {

namespace detail {

template <class overflow_policy, class T>
bool parse(char *col, optional<T> &x) {
  T x_value;
  if (parse(col, x_value)) {
    x = x_value;
  } else {
    x = {};
  }
  return true;
}

}  // namespace detail
}  // namespace io



#endif /* CSV_OPTIONAL_SUPPORT_H_ */
