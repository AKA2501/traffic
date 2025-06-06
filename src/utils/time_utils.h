#pragma once
#include "structures/typedefs.h"

namespace vroom::utils {

// Convert an absolute timestamp (Unix seconds **or** already-day-seconds)
// to “seconds since midnight” for the given time-zone offset.
inline Duration day_seconds(Duration unix_ts, int tz_offset) {
  constexpr Duration DAY = 24 * 3600;
  return static_cast<Duration>((unix_ts + tz_offset) % DAY);
}

}  // namespace vroom::utils
