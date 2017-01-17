//
// THIS HEADER FILE CONTAINS THE CAMERA CALIBRATION PARAMETERS THAT ARE USED
// TO INITIALIZE THE CAMERA PUBLISHER CLASS OBJECTS
//
// COPYRIGHT BELONGS TO THE AUTHOR OF THIS CODE
//
// AUTHOR : LAKSHMAN KUMAR
// AFFILIATION : UNIVERSITY OF MARYLAND, MARYLAND ROBOTICS CENTER
// EMAIL : LKUMAR93@TERPMAIL.UMD.EDU
// LINKEDIN : WWW.LINKEDIN.COM/IN/LAKSHMANKUMAR1993
//
// THE WORK (AS DEFINED BELOW) IS PROVIDED UNDER THE TERMS OF THE GPLv3 LICENSE
// THE WORK IS PROTECTED BY COPYRIGHT AND/OR OTHER APPLICABLE LAW. ANY USE OF
// THE WORK OTHER THAN AS AUTHORIZED UNDER THIS LICENSE OR COPYRIGHT LAW IS 
// PROHIBITED.
// 
// BY EXERCISING ANY RIGHTS TO THE WORK PROVIDED HERE, YOU ACCEPT AND AGREE TO
// BE BOUND BY THE TERMS OF THIS LICENSE. THE LICENSOR GRANTS YOU THE RIGHTS
// CONTAINED HERE IN CONSIDERATION OF YOUR ACCEPTANCE OF SUCH TERMS AND
// CONDITIONS.
//

#ifndef TERPCOPTER_CAMERA_PARAMETERS_H_
#define TERPCOPTER_CAMERA_PARAMETERS_H_

double FOCAL_LENGTH_X = 379.0506;
double FOCAL_LENGTH_Y = 366.6033;
double PRINCIPAL_POINT_X = 363.9286;
double PRINCIPAL_POINT_Y = 290.6407;
double DISTORTION_PARAMS[5] = { 0.1718, 0.1043, 0.0029, 0.0064, -0.3638 };

#endif // TERPCOPTER_CAMERA_PARAMETERS_H_