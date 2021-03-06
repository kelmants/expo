/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#include "ABI38_0_0YogaStylableProps.h"

#include <ABI38_0_0React/components/view/conversions.h>
#include <ABI38_0_0React/components/view/propsConversions.h>
#include <ABI38_0_0React/core/propsConversions.h>
#include <ABI38_0_0React/debug/debugStringConvertibleUtils.h>
#include <ABI38_0_0yoga/ABI38_0_0YGNode.h>
#include <ABI38_0_0yoga/ABI38_0_0Yoga.h>

#include "ABI38_0_0conversions.h"

namespace ABI38_0_0facebook {
namespace ABI38_0_0React {

YogaStylableProps::YogaStylableProps(ABI38_0_0YGStyle const &yogaStyle)
    : yogaStyle(yogaStyle) {}

YogaStylableProps::YogaStylableProps(
    YogaStylableProps const &sourceProps,
    RawProps const &rawProps)
    : yogaStyle(convertRawProp(rawProps, sourceProps.yogaStyle)){};

#pragma mark - DebugStringConvertible

#if RN_DEBUG_STRING_CONVERTIBLE
SharedDebugStringConvertibleList YogaStylableProps::getDebugProps() const {
  auto const defaultYogaStyle = ABI38_0_0YGStyle{};
  return {
      debugStringConvertibleItem(
          "direction", yogaStyle.direction(), defaultYogaStyle.direction()),
      debugStringConvertibleItem(
          "flexDirection",
          yogaStyle.flexDirection(),
          defaultYogaStyle.flexDirection()),
      debugStringConvertibleItem(
          "justifyContent",
          yogaStyle.justifyContent(),
          defaultYogaStyle.justifyContent()),
      debugStringConvertibleItem(
          "alignContent",
          yogaStyle.alignContent(),
          defaultYogaStyle.alignContent()),
      debugStringConvertibleItem(
          "alignItems", yogaStyle.alignItems(), defaultYogaStyle.alignItems()),
      debugStringConvertibleItem(
          "alignSelf", yogaStyle.alignSelf(), defaultYogaStyle.alignSelf()),
      debugStringConvertibleItem(
          "positionType",
          yogaStyle.positionType(),
          defaultYogaStyle.positionType()),
      debugStringConvertibleItem(
          "flexWrap", yogaStyle.flexWrap(), defaultYogaStyle.flexWrap()),
      debugStringConvertibleItem(
          "overflow", yogaStyle.overflow(), defaultYogaStyle.overflow()),
      debugStringConvertibleItem(
          "display", yogaStyle.display(), defaultYogaStyle.display()),
      debugStringConvertibleItem(
          "flex", yogaStyle.flex(), defaultYogaStyle.flex()),
      debugStringConvertibleItem(
          "flexGrow", yogaStyle.flexGrow(), defaultYogaStyle.flexGrow()),
      debugStringConvertibleItem(
          "flexShrink", yogaStyle.flexShrink(), defaultYogaStyle.flexShrink()),
      debugStringConvertibleItem(
          "flexBasis", yogaStyle.flexBasis(), defaultYogaStyle.flexBasis()),
      debugStringConvertibleItem(
          "margin", yogaStyle.margin(), defaultYogaStyle.margin()),
      debugStringConvertibleItem(
          "position", yogaStyle.position(), defaultYogaStyle.position()),
      debugStringConvertibleItem(
          "padding", yogaStyle.padding(), defaultYogaStyle.padding()),
      debugStringConvertibleItem(
          "border", yogaStyle.border(), defaultYogaStyle.border()),
      debugStringConvertibleItem(
          "dimensions", yogaStyle.dimensions(), defaultYogaStyle.dimensions()),
      debugStringConvertibleItem(
          "minDimensions",
          yogaStyle.minDimensions(),
          defaultYogaStyle.minDimensions()),
      debugStringConvertibleItem(
          "maxDimensions",
          yogaStyle.maxDimensions(),
          defaultYogaStyle.maxDimensions()),
      debugStringConvertibleItem(
          "aspectRatio",
          yogaStyle.aspectRatio(),
          defaultYogaStyle.aspectRatio()),
  };
}
#endif

} // namespace ABI38_0_0React
} // namespace ABI38_0_0facebook
