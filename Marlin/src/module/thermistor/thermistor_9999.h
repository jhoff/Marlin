/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

// Custom thermistor values pulled directly
const temp_entry_t temptable_9999[] PROGMEM = {
  { OV( 355), 120}, // 140
  { OV( 381), 117}, // 135
  { OV( 409), 113}, // 130
  { OV( 439), 109}, // 125
  { OV( 471), 105}, // 120
  { OV( 504), 101}, // 115
  { OV( 538), 97}, // 110
  { OV( 571), 94}, // 105
  { OV( 611), 89}, // 100
  { OV( 641), 86}, // 95
  { OV( 681), 81}, // 90
  { OV( 711), 77}, // 85
  { OV( 744), 73}, // 80
  { OV( 774), 70}, // 75
  { OV( 804), 65}, // 70
  { OV( 831), 61}, // 65
  { OV( 856), 57}, // 60
  { OV( 881), 52}, // 55
  { OV( 901), 48}, // 51
  { OV( 921), 43}, // 45
  { OV( 940), 38}, // 39
  { OV( 971), 28}, // 28
};
