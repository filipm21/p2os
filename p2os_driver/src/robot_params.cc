/*
 *  P2OS for ROS
 *  Copyright (C) 2009
 *     David Feil-Seifer, Brian Gerkey, Kasper Stoy, 
 *      Richard Vaughan, & Andrew Howard
 *
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

/*
 * robot_params.cc
 *
 * ActivMedia robot parameters, automatically generated by saphconv.tcl from
 * Saphira parameter files:
 *    amigo.p
 *    amigo-sh.p
 *    p2at.p
 *    p2at8+.p
 *    p2at8.p
 *    p2ce.p
 *    p2d8+.p
 *    p2d8.p
 *    p2de.p
 *    p2df.p
 *    p2dx.p
 *    p2it.p
 *    p2pb.p
 *    p2pp.p
 *    p3at-sh.p
 *    p3at.p
 *    p3atiw.p
 *    p3dx-sh.p
 *    p3dx.p
 *    peoplebot-sh.p
 *    perfpb+.p
 *    perfpb.p
 *    pion1m.p
 *    pion1x.p
 *    pionat.p
 *    powerbot-sh.p
 *    powerbot.p
 *    psos1m.p
 *    psos1x.p
*/
#include "../include/p2os_driver/robot_params.h"


RobotParams_t amigo_params =
{
  0.001534,
  "Pioneer",
  0.011,
  0.5083,
  0,
  1.626,
  1,
  1,
  0,
  0,
  0,
  "",
  "",
  0,
  1,
  0,
  0,
  0,
  300,
  1000,
  0,
  5,
  5,
  1,
  0,
  0,
  0,
  120,
  330,
  180,
  279,
  0,
  0,
  0,
  1,
  1,
  8,
  "amigo",
  38400,
  0,
  0,
  0,
  0,
  20,
  0.6154,
  {
    { 73, 105, 90 },
    { 130, 78, 41 },
    { 154, 30, 15 },
    { 154, -30, -15 },
    { 130, -78, -41 },
    { 73, -105, -90 },
    { -146, -60, -145 },
    { -146, 60, 145 },
  }
};

RobotParams_t amigo_sh_params =
{
  0.001534,
  "Pioneer",
  0.011,
  1.0,
  0,
  1.626,
  1,
  1,
  0,
  0,
  0,
  "",
  "",
  0,
  1,
  0,
  0,
  0,
  300,
  1000,
  0,
  5,
  5,
  1,
  0,
  0,
  0,
  120,
  330,
  180,
  279,
  0,
  0,
  0,
  1,
  1,
  8,
  "amigo-sh",
  38400,
  0,
  0,
  0,
  0,
  20,
  1.3746,
  {
    { 73, 105, 90 },
    { 130, 78, 41 },
    { 154, 30, 15 },
    { 154, -30, -15 },
    { 130, -78, -41 },
    { 73, -105, -90 },
    { -146, -60, -145 },
    { -146, 60, 145 },
  }
};

RobotParams_t p2at_params =
{
  0.001534,
  "Pioneer",
  0.0034,
  1.32,
  0,
  1.626,
  1,
  1,
  0,
  0,
  0,
  "",
  "COM3",
  0,
  1,
  0,
  160,
  7,
  300,
  1200,
  0,
  5,
  5,
  0.268,
  0,
  0,
  0,
  120,
  626,
  500,
  505,
  0,
  0,
  0,
  1,
  1,
  16,
  "p2at",
  38400,
  0,
  0,
  0,
  0,
  20,
  1,
  {
    { 145, 130, 90 },
    { 185, 115, 50 },
    { 220, 80, 30 },
    { 240, 25, 10 },
    { 240, -25, -10 },
    { 220, -80, -30 },
    { 185, -115, -50 },
    { 145, -130, -90 },
    { -145, -130, -90 },
    { -185, -115, -130 },
    { -220, -80, -150 },
    { -240, -25, -170 },
    { -240, 25, 170 },
    { -220, 80, 150 },
    { -185, 115, 130 },
    { -145, 130, 90 },
  }
};

RobotParams_t p2at8plus_params =
{
  0.001534,
  "Pioneer",
  0.0034,
  0.465,
  0,
  1.626,
  1,
  1,
  0,
  0,
  0,
  "",
  "COM3",
  0,
  1,
  0,
  160,
  7,
  300,
  1200,
  0,
  5,
  5,
  1,
  0,
  0,
  0,
  120,
  626,
  500,
  505,
  0,
  0,
  0,
  1,
  1,
  16,
  "p2at8+",
  38400,
  0,
  0,
  0,
  0,
  20,
  1,
  {
    { 145, 130, 90 },
    { 185, 115, 50 },
    { 220, 80, 30 },
    { 240, 25, 10 },
    { 240, -25, -10 },
    { 220, -80, -30 },
    { 185, -115, -50 },
    { 145, -130, -90 },
    { -145, -130, -90 },
    { -185, -115, -130 },
    { -220, -80, -150 },
    { -240, -25, -170 },
    { -240, 25, 170 },
    { -220, 80, 150 },
    { -185, 115, 130 },
    { -145, 130, 90 },
  }
};

RobotParams_t p2at8_params =
{
  0.001534,
  "Pioneer",
  0.0034,
  1.32,
  0,
  1.626,
  1,
  1,
  0,
  0,
  0,
  "",
  "COM3",
  0,
  1,
  0,
  160,
  7,
  300,
  1200,
  0,
  5,
  5,
  1,
  0,
  0,
  0,
  120,
  626,
  500,
  505,
  0,
  0,
  0,
  1,
  1,
  16,
  "p2at8",
  38400,
  0,
  0,
  0,
  0,
  20,
  1,
  {
    { 145, 130, 90 },
    { 185, 115, 50 },
    { 220, 80, 30 },
    { 240, 25, 10 },
    { 240, -25, -10 },
    { 220, -80, -30 },
    { 185, -115, -50 },
    { 145, -130, -90 },
    { -145, -130, -90 },
    { -185, -115, -130 },
    { -220, -80, -150 },
    { -240, -25, -170 },
    { -240, 25, 170 },
    { -220, 80, 150 },
    { -185, 115, 130 },
    { -145, 130, 90 },
  }
};

RobotParams_t p2ce_params =
{
  0.001534,
  "Pioneer",
  0.0057,
  0.826,
  0,
  1.626,
  1,
  1,
  0,
  0,
  0,
  "",
  "",
  0,
  1,
  0,
  0,
  0,
  500,
  2200,
  0,
  5,
  5,
  0.268,
  0,
  0,
  0,
  120,
  511,
  250,
  425,
  0,
  0,
  0,
  1,
  1,
  16,
  "p2ce",
  38400,
  0,
  0,
  0,
  0,
  20,
  1,
  {
    { 115, 130, 90 },
    { 155, 115, 50 },
    { 190, 80, 30 },
    { 210, 25, 10 },
    { 210, -25, -10 },
    { 190, -80, -30 },
    { 155, -115, -50 },
    { 115, -130, -90 },
    { -115, -130, -90 },
    { -155, -115, -130 },
    { -190, -80, -150 },
    { -210, -25, -170 },
    { -210, 25, 170 },
    { -190, 80, 150 },
    { -155, 115, 130 },
    { -115, 130, 90 },
  }
};

RobotParams_t p2d8plus_params =
{
  0.001534,
  "Pioneer",
  0.0056,
  0.485,
  0,
  1.626,
  1,
  1,
  0,
  0,
  0,
  "",
  "COM3",
  0,
  1,
  0,
  18,
  0,
  500,
  2200,
  0,
  5,
  5,
  1,
  0,
  0,
  0,
  120,
  511,
  250,
  425,
  0,
  0,
  0,
  1,
  1,
  16,
  "p2d8+",
  38400,
  0,
  0,
  0,
  0,
  20,
  1,
  {
    { 115, 130, 90 },
    { 155, 115, 50 },
    { 190, 80, 30 },
    { 210, 25, 10 },
    { 210, -25, -10 },
    { 190, -80, -30 },
    { 155, -115, -50 },
    { 115, -130, -90 },
    { -115, -130, -90 },
    { -155, -115, -130 },
    { -190, -80, -150 },
    { -210, -25, -170 },
    { -210, 25, 170 },
    { -190, 80, 150 },
    { -155, 115, 130 },
    { -115, 130, 90 },
  }
};

RobotParams_t p2d8_params =
{
  0.001534,
  "Pioneer",
  0.0056,
  0.485,
  0,
  1.626,
  1,
  1,
  0,
  0,
  0,
  "",
  "COM3",
  0,
  1,
  0,
  18,
  0,
  500,
  2200,
  0,
  5,
  5,
  1,
  0,
  0,
  0,
  120,
  511,
  250,
  425,
  0,
  0,
  0,
  1,
  1,
  16,
  "p2d8",
  38400,
  0,
  0,
  0,
  0,
  20,
  1,
  {
    { 115, 130, 90 },
    { 155, 115, 50 },
    { 190, 80, 30 },
    { 210, 25, 10 },
    { 210, -25, -10 },
    { 190, -80, -30 },
    { 155, -115, -50 },
    { 115, -130, -90 },
    { -115, -130, -90 },
    { -155, -115, -130 },
    { -190, -80, -150 },
    { -210, -25, -170 },
    { -210, 25, 170 },
    { -190, 80, 150 },
    { -155, 115, 130 },
    { -115, 130, 90 },
  }
};

RobotParams_t p2de_params =
{
  0.001534,
  "Pioneer",
  0.0056,
  0.969,
  0,
  1.626,
  1,
  1,
  0,
  0,
  0,
  "",
  "COM3",
  0,
  1,
  0,
  17,
  8,
  500,
  2200,
  0,
  5,
  5,
  0.268,
  0,
  0,
  0,
  120,
  511,
  250,
  425,
  0,
  0,
  0,
  1,
  1,
  16,
  "p2de",
  38400,
  0,
  0,
  0,
  0,
  20,
  1,
  {
    { 115, 130, 90 },
    { 155, 115, 50 },
    { 190, 80, 30 },
    { 210, 25, 10 },
    { 210, -25, -10 },
    { 190, -80, -30 },
    { 155, -115, -50 },
    { 115, -130, -90 },
    { -115, -130, -90 },
    { -155, -115, -130 },
    { -190, -80, -150 },
    { -210, -25, -170 },
    { -210, 25, 170 },
    { -190, 80, 150 },
    { -155, 115, 130 },
    { -115, 130, 90 },
  }
};

RobotParams_t p2df_params =
{
  0.001534,
  "Pioneer",
  0.006,
  0.485,
  0,
  1.626,
  1,
  1,
  0,
  0,
  0,
  "",
  "COM3",
  0,
  1,
  0,
  17,
  8,
  500,
  2200,
  0,
  5,
  5,
  0.268,
  0,
  0,
  0,
  120,
  511,
  250,
  425,
  0,
  0,
  0,
  1,
  1,
  16,
  "p2df",
  38400,
  0,
  0,
  0,
  0,
  20,
  1,
  {
    { 115, 130, 90 },
    { 155, 115, 50 },
    { 190, 80, 30 },
    { 210, 25, 10 },
    { 210, -25, -10 },
    { 190, -80, -30 },
    { 155, -115, -50 },
    { 115, -130, -90 },
    { -115, -130, -90 },
    { -155, -115, -130 },
    { -190, -80, -150 },
    { -210, -25, -170 },
    { -210, 25, 170 },
    { -190, 80, 150 },
    { -155, 115, 130 },
    { -115, 130, 90 },
  }
};

RobotParams_t p2dx_params =
{
  0.001534,
  "Pioneer",
  0.0056,
  0.84,
  0,
  1.626,
  1,
  1,
  0,
  0,
  0,
  "",
  "COM3",
  0,
  1,
  0,
  17,
  8,
  500,
  2200,
  0,
  5,
  5,
  0.268,
  0,
  0,
  0,
  120,
  511,
  250,
  425,
  0,
  0,
  0,
  1,
  1,
  16,
  "p2dx",
  38400,
  0,
  0,
  0,
  0,
  20,
  1,
  {
    { 115, 130, 90 },
    { 155, 115, 50 },
    { 190, 80, 30 },
    { 210, 25, 10 },
    { 210, -25, -10 },
    { 190, -80, -30 },
    { 155, -115, -50 },
    { 115, -130, -90 },
    { -115, -130, -90 },
    { -155, -115, -130 },
    { -190, -80, -150 },
    { -210, -25, -170 },
    { -210, 25, 170 },
    { -190, 80, 150 },
    { -155, 115, 130 },
    { -115, 130, 90 },
  }
};

RobotParams_t p2it_params =
{
  0.001534,
  "Pioneer",
  0.0032,
  1.136,
  0,
  1.626,
  1,
  1,
  0,
  0,
  0,
  "",
  "COM3",
  0,
  1,
  0,
  160,
  7,
  300,
  1200,
  0,
  5,
  5,
  0.268,
  0,
  0,
  0,
  120,
  626,
  500,
  505,
  0,
  0,
  0,
  1,
  1,
  16,
  "p2it",
  38400,
  0,
  0,
  0,
  0,
  20,
  1,
  {
    { 145, 130, 90 },
    { 185, 115, 50 },
    { 220, 80, 30 },
    { 240, 25, 10 },
    { 240, -25, -10 },
    { 220, -80, -30 },
    { 185, -115, -50 },
    { 145, -130, -90 },
    { -145, -130, -90 },
    { -185, -115, -130 },
    { -220, -80, -150 },
    { -240, -25, -170 },
    { -240, 25, 170 },
    { -220, 80, 150 },
    { -185, 115, 130 },
    { -145, 130, 90 },
  }
};

RobotParams_t p2pb_params =
{
  0.001534,
  "Pioneer",
  0.0056,
  0.424,
  1,
  1.626,
  1,
  1,
  0,
  0,
  0,
  "",
  "COM3",
  0,
  1,
  0,
  17,
  8,
  500,
  2200,
  0,
  5,
  5,
  0.268,
  1,
  0,
  0,
  120,
  513,
  300,
  425,
  0,
  0,
  0,
  1,
  1,
  24,
  "p2pb",
  38400,
  0,
  0,
  0,
  0,
  20,
  1,
  {
    { 115, 130, 90 },
    { 155, 115, 50 },
    { 190, 80, 30 },
    { 210, 25, 10 },
    { 210, -25, -10 },
    { 190, -80, -30 },
    { 155, -115, -50 },
    { 115, -130, -90 },
    { 50, 130, 90 },
    { 90, 115, 50 },
    { 125, 80, 30 },
    { 145, 25, 10 },
    { 145, -25, -10 },
    { 125, -80, -30 },
    { 90, -115, -50 },
    { 50, -130, -90 },
    { -115, -130, -90 },
    { -155, -115, -130 },
    { -190, -80, -150 },
    { -210, -25, -170 },
    { -210, 25, 170 },
    { -190, 80, 150 },
    { -155, 115, 130 },
    { -115, 130, 90 },
  }
};

RobotParams_t p2pp_params =
{
  0.001534,
  "Pioneer",
  0.006,
  0.485,
  1,
  1.626,
  1,
  1,
  0,
  0,
  0,
  "",
  "COM3",
  0,
  1,
  0,
  16,
  1,
  500,
  2200,
  0,
  5,
  5,
  0.268,
  1,
  0,
  0,
  120,
  513,
  300,
  425,
  0,
  0,
  0,
  1,
  1,
  24,
  "p2pp",
  38400,
  1,
  0,
  0,
  0,
  20,
  1,
  {
    { 115, 130, 90 },
    { 155, 115, 50 },
    { 190, 80, 30 },
    { 210, 25, 10 },
    { 210, -25, -10 },
    { 190, -80, -30 },
    { 155, -115, -50 },
    { 115, -130, -90 },
    { 50, 130, 90 },
    { 90, 115, 50 },
    { 125, 80, 30 },
    { 145, 25, 10 },
    { 145, -25, -10 },
    { 125, -80, -30 },
    { 90, -115, -50 },
    { 50, -130, -90 },
    { -115, -130, -90 },
    { -155, -115, -130 },
    { -190, -80, -150 },
    { -210, -25, -170 },
    { -210, 25, 170 },
    { -190, 80, 150 },
    { -155, 115, 130 },
    { -115, 130, 90 },
  }
};

RobotParams_t p3at_sh_params =
{
  0.001534,
  "Pioneer",
  0.0034,
  1,
  0,
  1.626,
  1,
  1,
  0,
  0,
  0,
  "",
  "COM3",
  0,
  1,
  0,
  125,
  0,
  300,
  1200,
  0,
  5,
  5,
  1,
  0,
  0,
  0,
  120,
  626,
  500,
  505,
  0,
  0,
  0,
  1,
  1,
  16,
  "p3at-sh",
  38400,
  0,
  0,
  0,
  0,
  20,
  1,
  {
    { 145, 130, 90 },
    { 185, 115, 50 },
    { 220, 80, 30 },
    { 240, 25, 10 },
    { 240, -25, -10 },
    { 220, -80, -30 },
    { 185, -115, -50 },
    { 145, -130, -90 },
    { -145, -130, -90 },
    { -185, -115, -130 },
    { -220, -80, -150 },
    { -240, -25, -170 },
    { -240, 25, 170 },
    { -220, 80, 150 },
    { -185, 115, 130 },
    { -145, 130, 90 },
  }
};

RobotParams_t p3at_params =
{
  0.001534,
  "Pioneer",
  0.0034,
  0.465,
  0,
  1.626,
  1,
  1,
  0,
  0,
  0,
  "",
  "COM3",
  0,
  1,
  0,
  160,
  7,
  300,
  1200,
  0,
  5,
  5,
  1,
  0,
  0,
  0,
  120,
  626,
  500,
  505,
  0,
  0,
  0,
  1,
  1,
  16,
  "p3at",
  38400,
  0,
  0,
  0,
  0,
  20,
  1,
  {
    { 145, 130, 90 },
    { 185, 115, 50 },
    { 220, 80, 30 },
    { 240, 25, 10 },
    { 240, -25, -10 },
    { 220, -80, -30 },
    { 185, -115, -50 },
    { 145, -130, -90 },
    { -145, -130, -90 },
    { -185, -115, -130 },
    { -220, -80, -150 },
    { -240, -25, -170 },
    { -240, 25, 170 },
    { -220, 80, 150 },
    { -185, 115, 130 },
    { -145, 130, 90 },
  }
};

RobotParams_t p3atiw_params =
{
  0.001534,
  "Pioneer",
  0.0034,
  0.3768,
  0,
  0,
  1,
  1,
  0,
  0,
  0,
  "0",
  "COM3",
  0,
  1,
  0,
  160,
  7,
  300,
  1200,
  0,
  5,
  5,
  1,
  0,
  0,
  0,
  120,
  0,
  500,
  0,
  0,
  0,
  0,
  1,
  1,
  16,
  "p3at",
  38400,
  0,
  0,
  0,
  0,
  20,
  1,
  {
    { 145, 130, 90 },
    { 185, 115, 50 },
    { 220, 80, 30 },
    { 240, 25, 10 },
    { 240, -25, -10 },
    { 220, -80, -30 },
    { 185, -115, -50 },
    { 145, -130, -90 },
    { -145, -130, -90 },
    { -185, -115, -130 },
    { -220, -80, -150 },
    { -240, -25, -170 },
    { -240, 25, 170 },
    { -220, 80, 150 },
    { -185, 115, 130 },
    { -145, 130, 90 },
  }
};

RobotParams_t p3dx_sh_params =
{
  0.001534,
  "Pioneer",
  0.0056,
  1,
  5,
  1.626,
  1,
  1,
  0,
  0,
  0,
  "",
  "COM3",
  0,
  1,
  0,
  18,
  0,
  500,
  2200,
  0,
  5,
  5,
  1,
  5,
  0,
  0,
  120,
  511,
  250,
  425,
  0,
  0,
  0,
  1,
  1,
  16,
  "p3dx-sh",
  38400,
  0,
  0,
  0,
  0,
  20,
  1,
  {
    { 115, 130, 90 },
    { 155, 115, 50 },
    { 190, 80, 30 },
    { 210, 25, 10 },
    { 210, -25, -10 },
    { 190, -80, -30 },
    { 155, -115, -50 },
    { 115, -130, -90 },
    { -115, -130, -90 },
    { -155, -115, -130 },
    { -190, -80, -150 },
    { -210, -25, -170 },
    { -210, 25, 170 },
    { -190, 80, 150 },
    { -155, 115, 130 },
    { -115, 130, 90 },
  },
/*  {
    { 0.14, -0.181, 308, 0.098, 0 },
    { 0.196, -0.099, 341, 0.098, 0 },
    { 0.212, 0, 0, 0.098, 0 },
    { 0.196, 0.099, 19, 0.098, 0 },
    { 0.14, 0.181, 52, 0.098, 0 },
    { -0.203, 0.17, 116, 0.098, 0 },
    { -0.275, 0.098, 155.5, 0.098, 0 },
    { -0.2985, 0, 0, 0.098, 0 },
    { -0.275, -0.098, 204.5, 0.098, 0 },
    { -0.203, -0.17, 244, 0.098, 0 },
  }*/
};

RobotParams_t p3dx_params =
{
  0.001534,
  "Pioneer",
  0.0056,
  0.485,
  0,
  1.626,
  1,
  1,
  0,
  0,
  0,
  "",
  "COM3",
  0,
  1,
  0,
  18,
  0,
  500,
  2200,
  0,
  5,
  5,
  1,
  0,
  0,
  0,
  120,
  511,
  250,
  425,
  0,
  0,
  0,
  1,
  1,
  16,
  "p3dx",
  38400,
  0,
  0,
  0,
  0,
  20,
  1,
  {
    { 115, 130, 90 },
    { 155, 115, 50 },
    { 190, 80, 30 },
    { 210, 25, 10 },
    { 210, -25, -10 },
    { 190, -80, -30 },
    { 155, -115, -50 },
    { 115, -130, -90 },
    { -115, -130, -90 },
    { -155, -115, -130 },
    { -190, -80, -150 },
    { -210, -25, -170 },
    { -210, 25, 170 },
    { -190, 80, 150 },
    { -155, 115, 130 },
    { -115, 130, 90 },
  }
};

RobotParams_t peoplebot_sh_params =
{
  0.001534,
  "Pioneer",
  0.006,
  1,
  1,
  1.626,
  1,
  1,
  4,
  3,
  0,
  "",
  "COM3",
  0,
  1,
  0,
  21,
  0,
  500,
  2200,
  1,
  5,
  5,
  1,
  1,
  0,
  1,
  120,
  513,
  340,
  425,
  0,
  0,
  0,
  1,
  1,
  32,
  "peoplebot-sh",
  38400,
  1,
  0,
  0,
  0,
  20,
  1,
  {
    { 115, 130, 90 },
    { 155, 115, 50 },
    { 190, 80, 30 },
    { 210, 25, 10 },
    { 210, -25, -10 },
    { 190, -80, -30 },
    { 155, -115, -50 },
    { 115, -130, -90 },
    { -115, -130, -90 },
    { -155, -115, -130 },
    { -190, -80, -150 },
    { -210, -25, -170 },
    { -210, 25, 170 },
    { -190, 80, 150 },
    { -155, 115, 130 },
    { -115, 130, 90 },
    { 50, 130, 90 },
    { 90, 115, 50 },
    { 125, 80, 30 },
    { 145, 25, 10 },
    { 145, -25, -10 },
    { 125, -80, -30 },
    { 90, -115, -50 },
    { 50, -130, -90 },
    { -195, -130, -90 },
    { -235, -115, -130 },
    { -270, -80, -150 },
    { -290, -25, -170 },
    { -290, 25, 170 },
    { -270, 80, 150 },
    { -235, 115, 130 },
    { -195, 130, 90 },
  }
};

RobotParams_t perfpbplus_params =
{
  0.001534,
  "Pioneer",
  0.006,
  0.485,
  1,
  1.626,
  1,
  1,
  4,
  3,
  0,
  "",
  "COM3",
  0,
  1,
  0,
  21,
  0,
  500,
  2200,
  1,
  5,
  5,
  1,
  1,
  0,
  1,
  120,
  513,
  340,
  425,
  0,
  0,
  0,
  1,
  1,
  32,
  "perfpb+",
  38400,
  1,
  0,
  0,
  0,
  20,
  1,
  {
    { 115, 130, 90 },
    { 155, 115, 50 },
    { 190, 80, 30 },
    { 210, 25, 10 },
    { 210, -25, -10 },
    { 190, -80, -30 },
    { 155, -115, -50 },
    { 115, -130, -90 },
    { 50, 130, 90 },
    { 90, 115, 50 },
    { 125, 80, 30 },
    { 145, 25, 10 },
    { 145, -25, -10 },
    { 125, -80, -30 },
    { 90, -115, -50 },
    { 50, -130, -90 },
    { -115, -130, -90 },
    { -155, -115, -130 },
    { -190, -80, -150 },
    { -210, -25, -170 },
    { -210, 25, 170 },
    { -190, 80, 150 },
    { -155, 115, 130 },
    { -115, 130, 90 },
    { -195, -130, -90 },
    { -235, -115, -130 },
    { -270, -80, -150 },
    { -290, -25, -170 },
    { -290, 25, 170 },
    { -270, 80, 150 },
    { -235, 115, 130 },
    { -195, 130, 90 },
  }
};

RobotParams_t perfpb_params =
{
  0.001534,
  "Pioneer",
  0.006,
  0.485,
  1,
  1.626,
  1,
  1,
  4,
  3,
  0,
  "",
  "COM3",
  0,
  1,
  0,
  21,
  0,
  500,
  2200,
  1,
  5,
  5,
  1,
  1,
  0,
  1,
  120,
  513,
  340,
  425,
  0,
  0,
  0,
  1,
  1,
  32,
  "perfpb",
  38400,
  1,
  0,
  0,
  0,
  20,
  1,
  {
    { 115, 130, 90 },
    { 155, 115, 50 },
    { 190, 80, 30 },
    { 210, 25, 10 },
    { 210, -25, -10 },
    { 190, -80, -30 },
    { 155, -115, -50 },
    { 115, -130, -90 },
    { 50, 130, 90 },
    { 90, 115, 50 },
    { 125, 80, 30 },
    { 145, 25, 10 },
    { 145, -25, -10 },
    { 125, -80, -30 },
    { 90, -115, -50 },
    { 50, -130, -90 },
    { -115, -130, -90 },
    { -155, -115, -130 },
    { -190, -80, -150 },
    { -210, -25, -170 },
    { -210, 25, 170 },
    { -190, 80, 150 },
    { -155, 115, 130 },
    { -115, 130, 90 },
    { -195, -130, -90 },
    { -235, -115, -130 },
    { -270, -80, -150 },
    { -290, -25, -170 },
    { -290, 25, 170 },
    { -270, 80, 150 },
    { -235, 115, 130 },
    { -195, 130, 90 },
  }
};

RobotParams_t pion1m_params =
{
  0.0061359,
  "Pioneer",
  0.00333333,
  0.05066,
  0,
  1.626,
  0,
  1,
  0,
  0,
  0,
  "",
  "",
  0,
  1,
  0,
  0,
  0,
  100,
  400,
  0,
  0,
  0,
  0.1734,
  0,
  0,
  0,
  90,
  500,
  220,
  400,
  0,
  0,
  100,
  0,
  1,
  7,
  "pion1m",
  0,
  0,
  0,
  0,
  400,
  4,
  2.5332,
  {
    { 100, 100, 90 },
    { 120, 80, 30 },
    { 130, 40, 15 },
    { 130, 0, 0 },
    { 130, -40, -15 },
    { 120, -80, -30 },
    { 100, -100, -90 },
  }
};

RobotParams_t pion1x_params =
{
  0.0061359,
  "Pioneer",
  0.00333333,
  0.05066,
  0,
  1.626,
  0,
  1,
  0,
  0,
  0,
  "",
  "",
  0,
  1,
  0,
  0,
  0,
  100,
  400,
  0,
  0,
  0,
  0.1734,
  0,
  0,
  0,
  90,
  500,
  220,
  400,
  0,
  0,
  100,
  0,
  1,
  7,
  "pion1x",
  0,
  0,
  0,
  0,
  400,
  4,
  2.5332,
  {
    { 100, 100, 90 },
    { 120, 80, 30 },
    { 130, 40, 15 },
    { 130, 0, 0 },
    { 130, -40, -15 },
    { 120, -80, -30 },
    { 100, -100, -90 },
  }
};

RobotParams_t pionat_params =
{
  0.0061359,
  "Pioneer",
  0.00333333,
  0.07,
  0,
  1.626,
  0,
  1,
  0,
  0,
  0,
  "",
  "",
  0,
  1,
  0,
  0,
  0,
  100,
  500,
  0,
  0,
  0,
  0.1734,
  0,
  0,
  0,
  120,
  500,
  330,
  400,
  0,
  0,
  100,
  0,
  1,
  7,
  "pionat",
  0,
  0,
  0,
  0,
  400,
  4,
  2.5332,
  {
    { 100, 100, 90 },
    { 120, 80, 30 },
    { 130, 40, 15 },
    { 130, 0, 0 },
    { 130, -40, -15 },
    { 120, -80, -30 },
    { 100, -100, -90 },
  }
};

RobotParams_t powerbot_sh_params =
{
  0.001534,
  "Pioneer",
  0.00373,
  1,
  1,
  1.626,
  1,
  1,
  0,
  0,
  1,
  "",
  "COM2",
  0,
  1,
  0,
  251,
  0,
  360,
  2000,
  0,
  7,
  5,
  1,
  1,
  0,
  0,
  400,
  911,
  550,
  680,
  0,
  0,
  0,
  1,
  1,
  32,
  "powerbot-sh",
  38400,
  0,
  0,
  0,
  0,
  20,
  1,
  {
    { 152, 278, 90 },
    { 200, 267, 65 },
    { 241, 238, 45 },
    { 274, 200, 35 },
    { 300, 153, 25 },
    { 320, 96, 15 },
    { 332, 33, 5 },
    { 0, 0, -180 },
    { 332, -33, -5 },
    { 320, -96, -15 },
    { 300, -153, -25 },
    { 274, -200, -35 },
    { 241, -238, -45 },
    { 200, -267, -65 },
    { 152, -278, -90 },
    { 0, 0, -180 },
    { -298, -278, -90 },
    { -347, -267, -115 },
    { -388, -238, -135 },
    { -420, -200, -145 },
    { -447, -153, -155 },
    { -467, -96, -165 },
    { -478, -33, -175 },
    { 0, 0, -180 },
    { -478, 33, 175 },
    { -467, 96, 165 },
    { -447, 153, 155 },
    { -420, 200, 145 },
    { -388, 238, 135 },
    { -347, 267, 115 },
    { -298, 278, 90 },
    { 0, 0, -180 },
  }
};

RobotParams_t powerbot_params =
{
  0.001534,
  "Pioneer",
  0.00373,
  0.5813,
  1,
  1.626,
  1,
  1,
  0,
  0,
  1,
  "",
  "COM2",
  0,
  1,
  0,
  251,
  0,
  360,
  2000,
  0,
  7,
  5,
  1,
  1,
  0,
  0,
  400,
  911,
  550,
  680,
  0,
  0,
  0,
  1,
  1,
  32,
  "powerbot",
  38400,
  0,
  0,
  0,
  0,
  20,
  1,
  {
    { 152, 278, 90 },
    { 200, 267, 65 },
    { 241, 238, 45 },
    { 274, 200, 35 },
    { 300, 153, 25 },
    { 320, 96, 15 },
    { 332, 33, 5 },
    { 0, 0, -180 },
    { 332, -33, -5 },
    { 320, -96, -15 },
    { 300, -153, -25 },
    { 274, -200, -35 },
    { 241, -238, -45 },
    { 200, -267, -65 },
    { 152, -278, -90 },
    { 0, 0, -180 },
    { -298, -278, -90 },
    { -347, -267, -115 },
    { -388, -238, -135 },
    { -420, -200, -145 },
    { -447, -153, -155 },
    { -467, -96, -165 },
    { -478, -33, -175 },
    { 0, 0, -180 },
    { -478, 33, 175 },
    { -467, 96, 165 },
    { -447, 153, 155 },
    { -420, 200, 145 },
    { -388, 238, 135 },
    { -347, 267, 115 },
    { -298, 278, 90 },
  }
};

RobotParams_t psos1m_params =
{
  0.0061359,
  "Pioneer",
  0.00333333,
  0.05066,
  0,
  1.626,
  0,
  1,
  0,
  0,
  0,
  "",
  "",
  0,
  1,
  0,
  0,
  0,
  100,
  400,
  0,
  0,
  0,
  0.1734,
  0,
  0,
  0,
  90,
  500,
  220,
  400,
  0,
  0,
  100,
  0,
  1,
  7,
  "psos1m",
  0,
  0,
  0,
  0,
  400,
  4,
  2.5332,
  {
    { 100, 100, 90 },
    { 120, 80, 30 },
    { 130, 40, 15 },
    { 130, 0, 0 },
    { 130, -40, -15 },
    { 120, -80, -30 },
    { 100, -100, -90 },
  }
};

RobotParams_t psos1x_params =
{
  0.0061359,
  "Pioneer",
  0.00333333,
  0.05066,
  0,
  1.626,
  0,
  1,
  0,
  0,
  0,
  "",
  "",
  0,
  1,
  0,
  0,
  0,
  100,
  400,
  0,
  0,
  0,
  0.1734,
  0,
  0,
  0,
  90,
  500,
  220,
  400,
  0,
  0,
  100,
  0,
  1,
  7,
  "psos1x",
  0,
  0,
  0,
  0,
  400,
  4,
  2.5332,
  {
    { 100, 100, 90 },
    { 120, 80, 30 },
    { 130, 40, 15 },
    { 130, 0, 0 },
    { 130, -40, -15 },
    { 120, -80, -30 },
    { 100, -100, -90 },
  }
};

RobotParams_t PlayerRobotParams[PLAYER_NUM_ROBOT_TYPES];

void
initialize_robot_params(void)
{
  PlayerRobotParams[0] =  amigo_params;
  PlayerRobotParams[1] =  p2at_params;
  PlayerRobotParams[2] =  p2at8plus_params;
  PlayerRobotParams[3] =  p2at8_params;
  PlayerRobotParams[4] =  p2ce_params;
  PlayerRobotParams[5] =  p2d8plus_params;
  PlayerRobotParams[6] =  p2d8_params;
  PlayerRobotParams[7] =  p2de_params;
  PlayerRobotParams[8] =  p2df_params;
  PlayerRobotParams[9] =  p2dx_params;
  PlayerRobotParams[10] =  p2it_params;
  PlayerRobotParams[11] =  p2pb_params;
  PlayerRobotParams[12] =  p2pp_params;
  PlayerRobotParams[13] =  p3at_sh_params;
  PlayerRobotParams[14] =  p3at_params;
  PlayerRobotParams[15] =  p3atiw_params;
  PlayerRobotParams[16] =  p3dx_sh_params;
  PlayerRobotParams[17] =  p3dx_params;
  PlayerRobotParams[18] =  peoplebot_sh_params;
  PlayerRobotParams[19] =  perfpbplus_params;
  PlayerRobotParams[20] =  perfpb_params;
  PlayerRobotParams[21] =  pion1m_params;
  PlayerRobotParams[22] =  pion1x_params;
  PlayerRobotParams[23] =  pionat_params;
  PlayerRobotParams[24] =  powerbot_sh_params;
  PlayerRobotParams[25] =  powerbot_params;
  PlayerRobotParams[26] =  psos1m_params;
  PlayerRobotParams[27] =  psos1x_params;
  PlayerRobotParams[28] =  amigo_sh_params;
}
