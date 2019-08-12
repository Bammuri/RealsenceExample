#pragma once
#include<stdio.h>
#include<opencv2\opencv.hpp>

using namespace std;
using namespace cv;

void SpatioTemporal(Mat &src1, Mat &src2, Mat &src3, Mat &dst);
Mat TemporalInterpolation(Mat &image1, Mat &image2, Mat &image3);
Mat SpatioInterpolation(Mat &image);

#define undefined 200
#define sample_size 2
Vec3b Color[50] = { { 239, 196, 85 },{ 236, 236, 129 },{ 185, 255, 116 },{ 155, 254, 162 },{ 230, 233, 223 },{ 184, 148, 0 },{ 206, 201, 0 },{ 132, 227, 9 },{ 92, 231, 108 },{ 190, 195, 178 },{ 234, 167, 255 },{ 177, 160, 250 },{ 118, 117, 255 },{ 121, 168, 253 },{ 110, 114, 99 },{ 203, 110, 253 },{ 112, 85, 225 },{ 48, 49, 214 },{ 67, 147, 232 },{ 52, 54, 45 },{ 188, 156, 26 },{ 204, 113, 46 },{ 152, 219, 52 },{ 89, 182, 155 },{ 73, 94, 52 },{ 160, 133, 22 },{ 174, 96, 39 },{ 128, 185, 41 },{ 68, 173, 142 },{ 62, 80, 44 },{ 196, 15, 241 },{ 126, 34, 230 },{ 76, 60, 231 },{ 240, 241, 236 },{ 165, 166, 149 },{ 156, 18, 243 },{ 84, 0, 211 },{ 57, 43, 192 },{ 195, 199, 189 },{ 140, 14, 127 } };
char DepthPath[191][40] = {
	"2018-08-17-18-28-07-Depth_Video_0.avi",
	"2018-08-17-18-41-29-Depth_Video_1.avi",
	"2018-08-17-18-54-39-Depth_Video_2.avi",
	"2018-08-17-19-07-51-Depth_Video_3.avi",
	"2018-08-17-19-21-07-Depth_Video_4.avi",
	"2018-08-17-19-34-27-Depth_Video_5.avi",
	"2018-08-17-19-47-54-Depth_Video_6.avi",
	"2018-08-17-20-01-08-Depth_Video_7.avi",
	"2018-08-17-20-14-30-Depth_Video_8.avi",
	"2018-08-17-20-28-31-Depth_Video_9.avi",
	"2018-08-17-20-43-56-Depth_Video_10.avi",
	"2018-08-17-20-59-27-Depth_Video_11.avi",
	"2018-08-17-21-14-21-Depth_Video_12.avi",
	"2018-08-17-21-29-35-Depth_Video_13.avi",
	"2018-08-17-21-44-59-Depth_Video_14.avi",
	"2018-08-17-22-00-22-Depth_Video_15.avi",
	"2018-08-17-22-15-09-Depth_Video_16.avi",
	"2018-08-17-22-30-16-Depth_Video_17.avi",
	"2018-08-17-22-45-35-Depth_Video_18.avi",
	"2018-08-17-23-01-18-Depth_Video_19.avi",
	"2018-08-17-23-16-26-Depth_Video_20.avi",
	"2018-08-17-23-31-26-Depth_Video_21.avi",
	"2018-08-17-23-46-21-Depth_Video_22.avi",
	"2018-08-18-00-01-14-Depth_Video_23.avi",
	"2018-08-18-00-16-24-Depth_Video_24.avi",
	"2018-08-18-00-31-01-Depth_Video_25.avi",
	"2018-08-18-00-45-49-Depth_Video_26.avi",
	"2018-08-18-01-00-40-Depth_Video_27.avi",
	"2018-08-18-01-15-33-Depth_Video_28.avi",
	"2018-08-18-01-30-49-Depth_Video_29.avi",
	"2018-08-18-01-46-20-Depth_Video_30.avi",
	"2018-08-18-02-01-23-Depth_Video_31.avi",
	"2018-08-18-02-16-05-Depth_Video_32.avi",
	"2018-08-18-02-30-49-Depth_Video_33.avi",
	"2018-08-18-02-45-29-Depth_Video_34.avi",
	"2018-08-18-03-00-39-Depth_Video_35.avi",
	"2018-08-18-03-15-46-Depth_Video_36.avi",
	"2018-08-18-03-30-23-Depth_Video_37.avi",
	"2018-08-18-03-44-46-Depth_Video_38.avi",
	"2018-08-18-03-59-40-Depth_Video_39.avi",
	"2018-08-18-04-13-59-Depth_Video_40.avi",
	"2018-08-18-04-28-58-Depth_Video_41.avi",
	"2018-08-18-04-43-34-Depth_Video_42.avi",
	"2018-08-18-04-58-24-Depth_Video_43.avi",
	"2018-08-18-05-13-12-Depth_Video_44.avi",
	"2018-08-18-05-28-12-Depth_Video_45.avi",
	"2018-08-18-05-43-15-Depth_Video_46.avi",
	"2018-08-18-05-58-43-Depth_Video_47.avi",
	"2018-08-18-06-13-49-Depth_Video_48.avi",
	"2018-08-18-06-29-02-Depth_Video_49.avi",
	"2018-08-18-06-43-58-Depth_Video_50.avi",
	"2018-08-18-06-59-02-Depth_Video_51.avi",
	"2018-08-18-07-14-09-Depth_Video_52.avi",
	"2018-08-18-07-29-58-Depth_Video_53.avi",
	"2018-08-18-07-45-52-Depth_Video_54.avi",
	"2018-08-18-08-01-36-Depth_Video_55.avi",
	"2018-08-18-08-18-04-Depth_Video_56.avi",
	"2018-08-18-08-33-42-Depth_Video_57.avi",
	"2018-08-18-08-49-44-Depth_Video_58.avi",
	"2018-08-18-09-05-22-Depth_Video_59.avi",
	"2018-08-18-09-20-42-Depth_Video_60.avi",
	"2018-08-18-09-36-39-Depth_Video_61.avi",
	"2018-08-18-09-53-00-Depth_Video_62.avi",
	"2018-08-18-10-09-05-Depth_Video_63.avi",
	"2018-08-18-10-25-17-Depth_Video_64.avi",
	"2018-08-18-10-41-14-Depth_Video_65.avi",
	"2018-08-18-10-56-34-Depth_Video_66.avi",
	"2018-08-18-11-11-40-Depth_Video_67.avi",
	"2018-08-18-11-26-51-Depth_Video_68.avi",
	"2018-08-18-11-41-44-Depth_Video_69.avi",
	"2018-08-18-11-56-22-Depth_Video_70.avi",
	"2018-08-18-12-11-16-Depth_Video_71.avi",
	"2018-08-18-12-26-03-Depth_Video_72.avi",
	"2018-08-18-12-41-07-Depth_Video_73.avi",
	"2018-08-18-12-55-35-Depth_Video_74.avi",
	"2018-08-18-13-10-14-Depth_Video_75.avi",
	"2018-08-18-13-24-40-Depth_Video_76.avi",
	"2018-08-18-13-39-08-Depth_Video_77.avi",
	"2018-08-18-13-53-57-Depth_Video_78.avi",
	"2018-08-18-14-08-34-Depth_Video_79.avi",
	"2018-08-18-14-23-10-Depth_Video_80.avi",
	"2018-08-18-14-37-53-Depth_Video_81.avi",
	"2018-08-18-14-52-39-Depth_Video_82.avi",
	"2018-08-18-15-07-36-Depth_Video_83.avi",
	"2018-08-18-15-22-37-Depth_Video_84.avi",
	"2018-08-18-15-36-59-Depth_Video_85.avi",
	"2018-08-18-15-51-33-Depth_Video_86.avi",
	"2018-08-18-16-06-04-Depth_Video_87.avi",
	"2018-08-18-16-20-39-Depth_Video_88.avi",
	"2018-08-18-16-35-09-Depth_Video_89.avi",
	"2018-08-18-16-49-42-Depth_Video_90.avi",
	"2018-08-18-17-04-10-Depth_Video_91.avi",
	"2018-08-18-17-18-39-Depth_Video_92.avi",
	"2018-08-18-17-33-26-Depth_Video_93.avi",
	"2018-08-18-17-48-04-Depth_Video_94.avi",
	"2018-08-18-18-03-03-Depth_Video_95.avi",
	"2018-08-18-18-17-24-Depth_Video_96.avi",
	"2018-08-18-18-32-09-Depth_Video_97.avi",
	"2018-08-18-18-47-13-Depth_Video_98.avi",
	"2018-08-18-19-01-51-Depth_Video_99.avi",
	"2018-08-18-19-16-10-Depth_Video_100.avi",
	"2018-08-18-19-30-59-Depth_Video_101.avi",
	"2018-08-18-19-45-48-Depth_Video_102.avi",
	"2018-08-18-20-00-41-Depth_Video_103.avi",
	"2018-08-18-20-15-18-Depth_Video_104.avi",
	"2018-08-18-20-29-53-Depth_Video_105.avi",
	"2018-08-18-20-44-59-Depth_Video_106.avi",
	"2018-08-18-20-59-13-Depth_Video_107.avi",
	"2018-08-18-21-13-38-Depth_Video_108.avi",
	"2018-08-18-21-27-57-Depth_Video_109.avi",
	"2018-08-18-21-42-34-Depth_Video_110.avi",
	"2018-08-18-21-56-51-Depth_Video_111.avi",
	"2018-08-18-22-11-30-Depth_Video_112.avi",
	"2018-08-18-22-26-07-Depth_Video_113.avi",
	"2018-08-18-22-40-52-Depth_Video_114.avi",
	"2018-08-18-22-55-22-Depth_Video_115.avi",
	"2018-08-18-23-09-36-Depth_Video_116.avi",
	"2018-08-18-23-24-38-Depth_Video_117.avi",
	"2018-08-18-23-39-27-Depth_Video_118.avi",
	"2018-08-18-23-54-18-Depth_Video_119.avi",
	"2018-08-19-00-08-59-Depth_Video_120.avi",
	"2018-08-19-00-23-24-Depth_Video_121.avi",
	"2018-08-19-00-38-06-Depth_Video_122.avi",
	"2018-08-19-00-52-37-Depth_Video_123.avi",
	"2018-08-19-01-07-25-Depth_Video_124.avi",
	"2018-08-19-01-21-49-Depth_Video_125.avi",
	"2018-08-19-01-36-12-Depth_Video_126.avi",
	"2018-08-19-01-50-48-Depth_Video_127.avi",
	"2018-08-19-02-05-15-Depth_Video_128.avi",
	"2018-08-19-02-19-23-Depth_Video_129.avi",
	"2018-08-19-02-33-52-Depth_Video_130.avi",
	"2018-08-19-02-48-00-Depth_Video_131.avi",
	"2018-08-19-03-02-35-Depth_Video_132.avi",
	"2018-08-19-03-17-17-Depth_Video_133.avi",
	"2018-08-19-03-31-49-Depth_Video_134.avi",
	"2018-08-19-03-46-12-Depth_Video_135.avi",
	"2018-08-19-04-00-34-Depth_Video_136.avi",
	"2018-08-19-04-15-02-Depth_Video_137.avi",
	"2018-08-19-04-29-30-Depth_Video_138.avi",
	"2018-08-19-04-44-02-Depth_Video_139.avi",
	"2018-08-19-04-58-35-Depth_Video_140.avi",
	"2018-08-19-05-12-46-Depth_Video_141.avi",
	"2018-08-19-05-27-20-Depth_Video_142.avi",
	"2018-08-19-05-41-42-Depth_Video_143.avi",
	"2018-08-19-05-56-17-Depth_Video_144.avi",
	"2018-08-19-06-10-59-Depth_Video_145.avi",
	"2018-08-19-06-25-41-Depth_Video_146.avi",
	"2018-08-19-06-40-41-Depth_Video_147.avi",
	"2018-08-19-06-55-16-Depth_Video_148.avi",
	"2018-08-19-07-09-33-Depth_Video_149.avi",
	"2018-08-19-07-23-51-Depth_Video_150.avi",
	"2018-08-19-07-38-23-Depth_Video_151.avi",
	"2018-08-19-07-53-36-Depth_Video_152.avi",
	"2018-08-19-08-09-13-Depth_Video_153.avi",
	"2018-08-19-08-24-42-Depth_Video_154.avi",
	"2018-08-19-08-39-53-Depth_Video_155.avi",
	"2018-08-19-08-54-54-Depth_Video_156.avi",
	"2018-08-19-09-09-36-Depth_Video_157.avi",
	"2018-08-19-09-25-11-Depth_Video_158.avi",
	"2018-08-19-09-40-10-Depth_Video_159.avi",
	"2018-08-19-09-55-10-Depth_Video_160.avi",
	"2018-08-19-10-09-59-Depth_Video_161.avi",
	"2018-08-19-10-24-38-Depth_Video_162.avi",
	"2018-08-19-10-39-52-Depth_Video_163.avi",
	"2018-08-19-10-54-47-Depth_Video_164.avi",
	"2018-08-19-11-10-18-Depth_Video_165.avi",
	"2018-08-19-11-25-09-Depth_Video_166.avi",
	"2018-08-19-11-39-55-Depth_Video_167.avi",
	"2018-08-19-11-54-14-Depth_Video_168.avi",
	"2018-08-19-12-08-44-Depth_Video_169.avi",
	"2018-08-19-12-22-57-Depth_Video_170.avi",
	"2018-08-19-12-37-18-Depth_Video_171.avi",
	"2018-08-19-12-52-05-Depth_Video_172.avi",
	"2018-08-19-13-06-59-Depth_Video_173.avi",
	"2018-08-19-13-21-36-Depth_Video_174.avi",
	"2018-08-19-13-36-39-Depth_Video_175.avi",
	"2018-08-19-13-51-04-Depth_Video_176.avi",
	"2018-08-19-14-06-15-Depth_Video_177.avi",
	"2018-08-19-14-20-43-Depth_Video_178.avi",
	"2018-08-19-14-35-31-Depth_Video_179.avi",
	"2018-08-19-14-49-57-Depth_Video_180.avi",
	"2018-08-19-15-04-34-Depth_Video_181.avi",
	"2018-08-19-15-19-10-Depth_Video_182.avi",
	"2018-08-19-15-33-38-Depth_Video_183.avi",
	"2018-08-19-15-48-04-Depth_Video_184.avi",
	"2018-08-19-16-02-56-Depth_Video_185.avi",
	"2018-08-19-16-17-37-Depth_Video_186.avi",
	"2018-08-19-16-32-19-Depth_Video_187.avi",
	"2018-08-19-16-46-43-Depth_Video_188.avi",
	"2018-08-19-17-01-28-Depth_Video_189.avi",
	"2018-08-19-17-16-10-Depth_Video_190.avi"
};

char IntDepthPath[191][60] = {
	"2018-08-17-18-28-07-Depth_Video_0_intpl_depth.avi",
	"2018-08-17-18-41-29-Depth_Video_1_intpl_depth.avi",
	"2018-08-17-18-54-39-Depth_Video_2_intpl_depth.avi",
	"2018-08-17-19-07-51-Depth_Video_3_intpl_depth.avi",
	"2018-08-17-19-21-07-Depth_Video_4_intpl_depth.avi",
	"2018-08-17-19-34-27-Depth_Video_5_intpl_depth.avi",
	"2018-08-17-19-47-54-Depth_Video_6_intpl_depth.avi",
	"2018-08-17-20-01-08-Depth_Video_7_intpl_depth.avi",
	"2018-08-17-20-14-30-Depth_Video_8_intpl_depth.avi",
	"2018-08-17-20-28-31-Depth_Video_9_intpl_depth.avi",
	"2018-08-17-20-43-56-Depth_Video_10_intpl_depth.avi",
	"2018-08-17-20-59-27-Depth_Video_11_intpl_depth.avi",
	"2018-08-17-21-14-21-Depth_Video_12_intpl_depth.avi",
	"2018-08-17-21-29-35-Depth_Video_13_intpl_depth.avi",
	"2018-08-17-21-44-59-Depth_Video_14_intpl_depth.avi",
	"2018-08-17-22-00-22-Depth_Video_15_intpl_depth.avi",
	"2018-08-17-22-15-09-Depth_Video_16_intpl_depth.avi",
	"2018-08-17-22-30-16-Depth_Video_17_intpl_depth.avi",
	"2018-08-17-22-45-35-Depth_Video_18_intpl_depth.avi",
	"2018-08-17-23-01-18-Depth_Video_19_intpl_depth.avi",
	"2018-08-17-23-16-26-Depth_Video_20_intpl_depth.avi",
	"2018-08-17-23-31-26-Depth_Video_21_intpl_depth.avi",
	"2018-08-17-23-46-21-Depth_Video_22_intpl_depth.avi",
	"2018-08-18-00-01-14-Depth_Video_23_intpl_depth.avi",
	"2018-08-18-00-16-24-Depth_Video_24_intpl_depth.avi",
	"2018-08-18-00-31-01-Depth_Video_25_intpl_depth.avi",
	"2018-08-18-00-45-49-Depth_Video_26_intpl_depth.avi",
	"2018-08-18-01-00-40-Depth_Video_27_intpl_depth.avi",
	"2018-08-18-01-15-33-Depth_Video_28_intpl_depth.avi",
	"2018-08-18-01-30-49-Depth_Video_29_intpl_depth.avi",
	"2018-08-18-01-46-20-Depth_Video_30_intpl_depth.avi",
	"2018-08-18-02-01-23-Depth_Video_31_intpl_depth.avi",
	"2018-08-18-02-16-05-Depth_Video_32_intpl_depth.avi",
	"2018-08-18-02-30-49-Depth_Video_33_intpl_depth.avi",
	"2018-08-18-02-45-29-Depth_Video_34_intpl_depth.avi",
	"2018-08-18-03-00-39-Depth_Video_35_intpl_depth.avi",
	"2018-08-18-03-15-46-Depth_Video_36_intpl_depth.avi",
	"2018-08-18-03-30-23-Depth_Video_37_intpl_depth.avi",
	"2018-08-18-03-44-46-Depth_Video_38_intpl_depth.avi",
	"2018-08-18-03-59-40-Depth_Video_39_intpl_depth.avi",
	"2018-08-18-04-13-59-Depth_Video_40_intpl_depth.avi",
	"2018-08-18-04-28-58-Depth_Video_41_intpl_depth.avi",
	"2018-08-18-04-43-34-Depth_Video_42_intpl_depth.avi",
	"2018-08-18-04-58-24-Depth_Video_43_intpl_depth.avi",
	"2018-08-18-05-13-12-Depth_Video_44_intpl_depth.avi",
	"2018-08-18-05-28-12-Depth_Video_45_intpl_depth.avi",
	"2018-08-18-05-43-15-Depth_Video_46_intpl_depth.avi",
	"2018-08-18-05-58-43-Depth_Video_47_intpl_depth.avi",
	"2018-08-18-06-13-49-Depth_Video_48_intpl_depth.avi",
	"2018-08-18-06-29-02-Depth_Video_49_intpl_depth.avi",
	"2018-08-18-06-43-58-Depth_Video_50_intpl_depth.avi",
	"2018-08-18-06-59-02-Depth_Video_51_intpl_depth.avi",
	"2018-08-18-07-14-09-Depth_Video_52_intpl_depth.avi",
	"2018-08-18-07-29-58-Depth_Video_53_intpl_depth.avi",
	"2018-08-18-07-45-52-Depth_Video_54_intpl_depth.avi",
	"2018-08-18-08-01-36-Depth_Video_55_intpl_depth.avi",
	"2018-08-18-08-18-04-Depth_Video_56_intpl_depth.avi",
	"2018-08-18-08-33-42-Depth_Video_57_intpl_depth.avi",
	"2018-08-18-08-49-44-Depth_Video_58_intpl_depth.avi",
	"2018-08-18-09-05-22-Depth_Video_59_intpl_depth.avi",
	"2018-08-18-09-20-42-Depth_Video_60_intpl_depth.avi",
	"2018-08-18-09-36-39-Depth_Video_61_intpl_depth.avi",
	"2018-08-18-09-53-00-Depth_Video_62_intpl_depth.avi",
	"2018-08-18-10-09-05-Depth_Video_63_intpl_depth.avi",
	"2018-08-18-10-25-17-Depth_Video_64_intpl_depth.avi",
	"2018-08-18-10-41-14-Depth_Video_65_intpl_depth.avi",
	"2018-08-18-10-56-34-Depth_Video_66_intpl_depth.avi",
	"2018-08-18-11-11-40-Depth_Video_67_intpl_depth.avi",
	"2018-08-18-11-26-51-Depth_Video_68_intpl_depth.avi",
	"2018-08-18-11-41-44-Depth_Video_69_intpl_depth.avi",
	"2018-08-18-11-56-22-Depth_Video_70_intpl_depth.avi",
	"2018-08-18-12-11-16-Depth_Video_71_intpl_depth.avi",
	"2018-08-18-12-26-03-Depth_Video_72_intpl_depth.avi",
	"2018-08-18-12-41-07-Depth_Video_73_intpl_depth.avi",
	"2018-08-18-12-55-35-Depth_Video_74_intpl_depth.avi",
	"2018-08-18-13-10-14-Depth_Video_75_intpl_depth.avi",
	"2018-08-18-13-24-40-Depth_Video_76_intpl_depth.avi",
	"2018-08-18-13-39-08-Depth_Video_77_intpl_depth.avi",
	"2018-08-18-13-53-57-Depth_Video_78_intpl_depth.avi",
	"2018-08-18-14-08-34-Depth_Video_79_intpl_depth.avi",
	"2018-08-18-14-23-10-Depth_Video_80_intpl_depth.avi",
	"2018-08-18-14-37-53-Depth_Video_81_intpl_depth.avi",
	"2018-08-18-14-52-39-Depth_Video_82_intpl_depth.avi",
	"2018-08-18-15-07-36-Depth_Video_83_intpl_depth.avi",
	"2018-08-18-15-22-37-Depth_Video_84_intpl_depth.avi",
	"2018-08-18-15-36-59-Depth_Video_85_intpl_depth.avi",
	"2018-08-18-15-51-33-Depth_Video_86_intpl_depth.avi",
	"2018-08-18-16-06-04-Depth_Video_87_intpl_depth.avi",
	"2018-08-18-16-20-39-Depth_Video_88_intpl_depth.avi",
	"2018-08-18-16-35-09-Depth_Video_89_intpl_depth.avi",
	"2018-08-18-16-49-42-Depth_Video_90_intpl_depth.avi",
	"2018-08-18-17-04-10-Depth_Video_91_intpl_depth.avi",
	"2018-08-18-17-18-39-Depth_Video_92_intpl_depth.avi",
	"2018-08-18-17-33-26-Depth_Video_93_intpl_depth.avi",
	"2018-08-18-17-48-04-Depth_Video_94_intpl_depth.avi",
	"2018-08-18-18-03-03-Depth_Video_95_intpl_depth.avi",
	"2018-08-18-18-17-24-Depth_Video_96_intpl_depth.avi",
	"2018-08-18-18-32-09-Depth_Video_97_intpl_depth.avi",
	"2018-08-18-18-47-13-Depth_Video_98_intpl_depth.avi",
	"2018-08-18-19-01-51-Depth_Video_99_intpl_depth.avi",
	"2018-08-18-19-16-10-Depth_Video_100_intpl_depth.avi",
	"2018-08-18-19-30-59-Depth_Video_101_intpl_depth.avi",
	"2018-08-18-19-45-48-Depth_Video_102_intpl_depth.avi",
	"2018-08-18-20-00-41-Depth_Video_103_intpl_depth.avi",
	"2018-08-18-20-15-18-Depth_Video_104_intpl_depth.avi",
	"2018-08-18-20-29-53-Depth_Video_105_intpl_depth.avi",
	"2018-08-18-20-44-59-Depth_Video_106_intpl_depth.avi",
	"2018-08-18-20-59-13-Depth_Video_107_intpl_depth.avi",
	"2018-08-18-21-13-38-Depth_Video_108_intpl_depth.avi",
	"2018-08-18-21-27-57-Depth_Video_109_intpl_depth.avi",
	"2018-08-18-21-42-34-Depth_Video_110_intpl_depth.avi",
	"2018-08-18-21-56-51-Depth_Video_111_intpl_depth.avi",
	"2018-08-18-22-11-30-Depth_Video_112_intpl_depth.avi",
	"2018-08-18-22-26-07-Depth_Video_113_intpl_depth.avi",
	"2018-08-18-22-40-52-Depth_Video_114_intpl_depth.avi",
	"2018-08-18-22-55-22-Depth_Video_115_intpl_depth.avi",
	"2018-08-18-23-09-36-Depth_Video_116_intpl_depth.avi",
	"2018-08-18-23-24-38-Depth_Video_117_intpl_depth.avi",
	"2018-08-18-23-39-27-Depth_Video_118_intpl_depth.avi",
	"2018-08-18-23-54-18-Depth_Video_119_intpl_depth.avi",
	"2018-08-19-00-08-59-Depth_Video_120_intpl_depth.avi",
	"2018-08-19-00-23-24-Depth_Video_121_intpl_depth.avi",
	"2018-08-19-00-38-06-Depth_Video_122_intpl_depth.avi",
	"2018-08-19-00-52-37-Depth_Video_123_intpl_depth.avi",
	"2018-08-19-01-07-25-Depth_Video_124_intpl_depth.avi",
	"2018-08-19-01-21-49-Depth_Video_125_intpl_depth.avi",
	"2018-08-19-01-36-12-Depth_Video_126_intpl_depth.avi",
	"2018-08-19-01-50-48-Depth_Video_127_intpl_depth.avi",
	"2018-08-19-02-05-15-Depth_Video_128_intpl_depth.avi",
	"2018-08-19-02-19-23-Depth_Video_129_intpl_depth.avi",
	"2018-08-19-02-33-52-Depth_Video_130_intpl_depth.avi",
	"2018-08-19-02-48-00-Depth_Video_131_intpl_depth.avi",
	"2018-08-19-03-02-35-Depth_Video_132_intpl_depth.avi",
	"2018-08-19-03-17-17-Depth_Video_133_intpl_depth.avi",
	"2018-08-19-03-31-49-Depth_Video_134_intpl_depth.avi",
	"2018-08-19-03-46-12-Depth_Video_135_intpl_depth.avi",
	"2018-08-19-04-00-34-Depth_Video_136_intpl_depth.avi",
	"2018-08-19-04-15-02-Depth_Video_137_intpl_depth.avi",
	"2018-08-19-04-29-30-Depth_Video_138_intpl_depth.avi",
	"2018-08-19-04-44-02-Depth_Video_139_intpl_depth.avi",
	"2018-08-19-04-58-35-Depth_Video_140_intpl_depth.avi",
	"2018-08-19-05-12-46-Depth_Video_141_intpl_depth.avi",
	"2018-08-19-05-27-20-Depth_Video_142_intpl_depth.avi",
	"2018-08-19-05-41-42-Depth_Video_143_intpl_depth.avi",
	"2018-08-19-05-56-17-Depth_Video_144_intpl_depth.avi",
	"2018-08-19-06-10-59-Depth_Video_145_intpl_depth.avi",
	"2018-08-19-06-25-41-Depth_Video_146_intpl_depth.avi",
	"2018-08-19-06-40-41-Depth_Video_147_intpl_depth.avi",
	"2018-08-19-06-55-16-Depth_Video_148_intpl_depth.avi",
	"2018-08-19-07-09-33-Depth_Video_149_intpl_depth.avi",
	"2018-08-19-07-23-51-Depth_Video_150_intpl_depth.avi",
	"2018-08-19-07-38-23-Depth_Video_151_intpl_depth.avi",
	"2018-08-19-07-53-36-Depth_Video_152_intpl_depth.avi",
	"2018-08-19-08-09-13-Depth_Video_153_intpl_depth.avi",
	"2018-08-19-08-24-42-Depth_Video_154_intpl_depth.avi",
	"2018-08-19-08-39-53-Depth_Video_155_intpl_depth.avi",
	"2018-08-19-08-54-54-Depth_Video_156_intpl_depth.avi",
	"2018-08-19-09-09-36-Depth_Video_157_intpl_depth.avi",
	"2018-08-19-09-25-11-Depth_Video_158_intpl_depth.avi",
	"2018-08-19-09-40-10-Depth_Video_159_intpl_depth.avi",
	"2018-08-19-09-55-10-Depth_Video_160_intpl_depth.avi",
	"2018-08-19-10-09-59-Depth_Video_161_intpl_depth.avi",
	"2018-08-19-10-24-38-Depth_Video_162_intpl_depth.avi",
	"2018-08-19-10-39-52-Depth_Video_163_intpl_depth.avi",
	"2018-08-19-10-54-47-Depth_Video_164_intpl_depth.avi",
	"2018-08-19-11-10-18-Depth_Video_165_intpl_depth.avi",
	"2018-08-19-11-25-09-Depth_Video_166_intpl_depth.avi",
	"2018-08-19-11-39-55-Depth_Video_167_intpl_depth.avi",
	"2018-08-19-11-54-14-Depth_Video_168_intpl_depth.avi",
	"2018-08-19-12-08-44-Depth_Video_169_intpl_depth.avi",
	"2018-08-19-12-22-57-Depth_Video_170_intpl_depth.avi",
	"2018-08-19-12-37-18-Depth_Video_171_intpl_depth.avi",
	"2018-08-19-12-52-05-Depth_Video_172_intpl_depth.avi",
	"2018-08-19-13-06-59-Depth_Video_173_intpl_depth.avi",
	"2018-08-19-13-21-36-Depth_Video_174_intpl_depth.avi",
	"2018-08-19-13-36-39-Depth_Video_175_intpl_depth.avi",
	"2018-08-19-13-51-04-Depth_Video_176_intpl_depth.avi",
	"2018-08-19-14-06-15-Depth_Video_177_intpl_depth.avi",
	"2018-08-19-14-20-43-Depth_Video_178_intpl_depth.avi",
	"2018-08-19-14-35-31-Depth_Video_179_intpl_depth.avi",
	"2018-08-19-14-49-57-Depth_Video_180_intpl_depth.avi",
	"2018-08-19-15-04-34-Depth_Video_181_intpl_depth.avi",
	"2018-08-19-15-19-10-Depth_Video_182_intpl_depth.avi",
	"2018-08-19-15-33-38-Depth_Video_183_intpl_depth.avi",
	"2018-08-19-15-48-04-Depth_Video_184_intpl_depth.avi",
	"2018-08-19-16-02-56-Depth_Video_185_intpl_depth.avi",
	"2018-08-19-16-17-37-Depth_Video_186_intpl_depth.avi",
	"2018-08-19-16-32-19-Depth_Video_187_intpl_depth.avi",
	"2018-08-19-16-46-43-Depth_Video_188_intpl_depth.avi",
	"2018-08-19-17-01-28-Depth_Video_189_intpl_depth.avi",
	"2018-08-19-17-16-10-Depth_Video_190_intpl_depth.avi"
};

char InfraredPath[191][50] = {
	"2018-08-17-18-28-07-Infrared_Video_0.avi",
	"2018-08-17-18-41-29-Infrared_Video_1.avi",
	"2018-08-17-18-54-39-Infrared_Video_2.avi",
	"2018-08-17-19-07-51-Infrared_Video_3.avi",
	"2018-08-17-19-21-07-Infrared_Video_4.avi",
	"2018-08-17-19-34-27-Infrared_Video_5.avi",
	"2018-08-17-19-47-54-Infrared_Video_6.avi",
	"2018-08-17-20-01-08-Infrared_Video_7.avi",
	"2018-08-17-20-14-30-Infrared_Video_8.avi",
	"2018-08-17-20-28-31-Infrared_Video_9.avi",
	"2018-08-17-20-43-56-Infrared_Video_10.avi",
	"2018-08-17-20-59-27-Infrared_Video_11.avi",
	"2018-08-17-21-14-21-Infrared_Video_12.avi",
	"2018-08-17-21-29-35-Infrared_Video_13.avi",
	"2018-08-17-21-44-59-Infrared_Video_14.avi",
	"2018-08-17-22-00-22-Infrared_Video_15.avi",
	"2018-08-17-22-15-09-Infrared_Video_16.avi",
	"2018-08-17-22-30-16-Infrared_Video_17.avi",
	"2018-08-17-22-45-35-Infrared_Video_18.avi",
	"2018-08-17-23-01-18-Infrared_Video_19.avi",
	"2018-08-17-23-16-26-Infrared_Video_20.avi",
	"2018-08-17-23-31-26-Infrared_Video_21.avi",
	"2018-08-17-23-46-21-Infrared_Video_22.avi",
	"2018-08-18-00-01-14-Infrared_Video_23.avi",
	"2018-08-18-00-16-24-Infrared_Video_24.avi",
	"2018-08-18-00-31-01-Infrared_Video_25.avi",
	"2018-08-18-00-45-49-Infrared_Video_26.avi",
	"2018-08-18-01-00-40-Infrared_Video_27.avi",
	"2018-08-18-01-15-33-Infrared_Video_28.avi",
	"2018-08-18-01-30-49-Infrared_Video_29.avi",
	"2018-08-18-01-46-20-Infrared_Video_30.avi",
	"2018-08-18-02-01-23-Infrared_Video_31.avi",
	"2018-08-18-02-16-05-Infrared_Video_32.avi",
	"2018-08-18-02-30-49-Infrared_Video_33.avi",
	"2018-08-18-02-45-29-Infrared_Video_34.avi",
	"2018-08-18-03-00-39-Infrared_Video_35.avi",
	"2018-08-18-03-15-46-Infrared_Video_36.avi",
	"2018-08-18-03-30-23-Infrared_Video_37.avi",
	"2018-08-18-03-44-46-Infrared_Video_38.avi",
	"2018-08-18-03-59-40-Infrared_Video_39.avi",
	"2018-08-18-04-13-59-Infrared_Video_40.avi",
	"2018-08-18-04-28-58-Infrared_Video_41.avi",
	"2018-08-18-04-43-34-Infrared_Video_42.avi",
	"2018-08-18-04-58-24-Infrared_Video_43.avi",
	"2018-08-18-05-13-12-Infrared_Video_44.avi",
	"2018-08-18-05-28-12-Infrared_Video_45.avi",
	"2018-08-18-05-43-15-Infrared_Video_46.avi",
	"2018-08-18-05-58-43-Infrared_Video_47.avi",
	"2018-08-18-06-13-49-Infrared_Video_48.avi",
	"2018-08-18-06-29-02-Infrared_Video_49.avi",
	"2018-08-18-06-43-58-Infrared_Video_50.avi",
	"2018-08-18-06-59-02-Infrared_Video_51.avi",
	"2018-08-18-07-14-09-Infrared_Video_52.avi",
	"2018-08-18-07-29-58-Infrared_Video_53.avi",
	"2018-08-18-07-45-52-Infrared_Video_54.avi",
	"2018-08-18-08-01-36-Infrared_Video_55.avi",
	"2018-08-18-08-18-04-Infrared_Video_56.avi",
	"2018-08-18-08-33-42-Infrared_Video_57.avi",
	"2018-08-18-08-49-44-Infrared_Video_58.avi",
	"2018-08-18-09-05-22-Infrared_Video_59.avi",
	"2018-08-18-09-20-42-Infrared_Video_60.avi",
	"2018-08-18-09-36-39-Infrared_Video_61.avi",
	"2018-08-18-09-53-00-Infrared_Video_62.avi",
	"2018-08-18-10-09-05-Infrared_Video_63.avi",
	"2018-08-18-10-25-17-Infrared_Video_64.avi",
	"2018-08-18-10-41-14-Infrared_Video_65.avi",
	"2018-08-18-10-56-34-Infrared_Video_66.avi",
	"2018-08-18-11-11-40-Infrared_Video_67.avi",
	"2018-08-18-11-26-51-Infrared_Video_68.avi",
	"2018-08-18-11-41-44-Infrared_Video_69.avi",
	"2018-08-18-11-56-22-Infrared_Video_70.avi",
	"2018-08-18-12-11-16-Infrared_Video_71.avi",
	"2018-08-18-12-26-03-Infrared_Video_72.avi",
	"2018-08-18-12-41-07-Infrared_Video_73.avi",
	"2018-08-18-12-55-35-Infrared_Video_74.avi",
	"2018-08-18-13-10-14-Infrared_Video_75.avi",
	"2018-08-18-13-24-40-Infrared_Video_76.avi",
	"2018-08-18-13-39-08-Infrared_Video_77.avi",
	"2018-08-18-13-53-57-Infrared_Video_78.avi",
	"2018-08-18-14-08-34-Infrared_Video_79.avi",
	"2018-08-18-14-23-10-Infrared_Video_80.avi",
	"2018-08-18-14-37-53-Infrared_Video_81.avi",
	"2018-08-18-14-52-39-Infrared_Video_82.avi",
	"2018-08-18-15-07-36-Infrared_Video_83.avi",
	"2018-08-18-15-22-37-Infrared_Video_84.avi",
	"2018-08-18-15-36-59-Infrared_Video_85.avi",
	"2018-08-18-15-51-33-Infrared_Video_86.avi",
	"2018-08-18-16-06-04-Infrared_Video_87.avi",
	"2018-08-18-16-20-39-Infrared_Video_88.avi",
	"2018-08-18-16-35-09-Infrared_Video_89.avi",
	"2018-08-18-16-49-42-Infrared_Video_90.avi",
	"2018-08-18-17-04-10-Infrared_Video_91.avi",
	"2018-08-18-17-18-39-Infrared_Video_92.avi",
	"2018-08-18-17-33-26-Infrared_Video_93.avi",
	"2018-08-18-17-48-04-Infrared_Video_94.avi",
	"2018-08-18-18-03-03-Infrared_Video_95.avi",
	"2018-08-18-18-17-24-Infrared_Video_96.avi",
	"2018-08-18-18-32-09-Infrared_Video_97.avi",
	"2018-08-18-18-47-13-Infrared_Video_98.avi",
	"2018-08-18-19-01-51-Infrared_Video_99.avi",
	"2018-08-18-19-16-10-Infrared_Video_100.avi",
	"2018-08-18-19-30-59-Infrared_Video_101.avi",
	"2018-08-18-19-45-48-Infrared_Video_102.avi",
	"2018-08-18-20-00-41-Infrared_Video_103.avi",
	"2018-08-18-20-15-18-Infrared_Video_104.avi",
	"2018-08-18-20-29-53-Infrared_Video_105.avi",
	"2018-08-18-20-44-59-Infrared_Video_106.avi",
	"2018-08-18-20-59-13-Infrared_Video_107.avi",
	"2018-08-18-21-13-38-Infrared_Video_108.avi",
	"2018-08-18-21-27-57-Infrared_Video_109.avi",
	"2018-08-18-21-42-34-Infrared_Video_110.avi",
	"2018-08-18-21-56-51-Infrared_Video_111.avi",
	"2018-08-18-22-11-30-Infrared_Video_112.avi",
	"2018-08-18-22-26-07-Infrared_Video_113.avi",
	"2018-08-18-22-40-52-Infrared_Video_114.avi",
	"2018-08-18-22-55-22-Infrared_Video_115.avi",
	"2018-08-18-23-09-36-Infrared_Video_116.avi",
	"2018-08-18-23-24-38-Infrared_Video_117.avi",
	"2018-08-18-23-39-27-Infrared_Video_118.avi",
	"2018-08-18-23-54-18-Infrared_Video_119.avi",
	"2018-08-19-00-08-59-Infrared_Video_120.avi",
	"2018-08-19-00-23-24-Infrared_Video_121.avi",
	"2018-08-19-00-38-06-Infrared_Video_122.avi",
	"2018-08-19-00-52-37-Infrared_Video_123.avi",
	"2018-08-19-01-07-25-Infrared_Video_124.avi",
	"2018-08-19-01-21-49-Infrared_Video_125.avi",
	"2018-08-19-01-36-12-Infrared_Video_126.avi",
	"2018-08-19-01-50-48-Infrared_Video_127.avi",
	"2018-08-19-02-05-15-Infrared_Video_128.avi",
	"2018-08-19-02-19-23-Infrared_Video_129.avi",
	"2018-08-19-02-33-52-Infrared_Video_130.avi",
	"2018-08-19-02-48-00-Infrared_Video_131.avi",
	"2018-08-19-03-02-35-Infrared_Video_132.avi",
	"2018-08-19-03-17-17-Infrared_Video_133.avi",
	"2018-08-19-03-31-49-Infrared_Video_134.avi",
	"2018-08-19-03-46-12-Infrared_Video_135.avi",
	"2018-08-19-04-00-34-Infrared_Video_136.avi",
	"2018-08-19-04-15-02-Infrared_Video_137.avi",
	"2018-08-19-04-29-30-Infrared_Video_138.avi",
	"2018-08-19-04-44-02-Infrared_Video_139.avi",
	"2018-08-19-04-58-35-Infrared_Video_140.avi",
	"2018-08-19-05-12-46-Infrared_Video_141.avi",
	"2018-08-19-05-27-20-Infrared_Video_142.avi",
	"2018-08-19-05-41-42-Infrared_Video_143.avi",
	"2018-08-19-05-56-17-Infrared_Video_144.avi",
	"2018-08-19-06-10-59-Infrared_Video_145.avi",
	"2018-08-19-06-25-41-Infrared_Video_146.avi",
	"2018-08-19-06-40-41-Infrared_Video_147.avi",
	"2018-08-19-06-55-16-Infrared_Video_148.avi",
	"2018-08-19-07-09-33-Infrared_Video_149.avi",
	"2018-08-19-07-23-51-Infrared_Video_150.avi",
	"2018-08-19-07-38-23-Infrared_Video_151.avi",
	"2018-08-19-07-53-36-Infrared_Video_152.avi",
	"2018-08-19-08-09-13-Infrared_Video_153.avi",
	"2018-08-19-08-24-42-Infrared_Video_154.avi",
	"2018-08-19-08-39-53-Infrared_Video_155.avi",
	"2018-08-19-08-54-54-Infrared_Video_156.avi",
	"2018-08-19-09-09-36-Infrared_Video_157.avi",
	"2018-08-19-09-25-11-Infrared_Video_158.avi",
	"2018-08-19-09-40-10-Infrared_Video_159.avi",
	"2018-08-19-09-55-10-Infrared_Video_160.avi",
	"2018-08-19-10-09-59-Infrared_Video_161.avi",
	"2018-08-19-10-24-38-Infrared_Video_162.avi",
	"2018-08-19-10-39-52-Infrared_Video_163.avi",
	"2018-08-19-10-54-47-Infrared_Video_164.avi",
	"2018-08-19-11-10-18-Infrared_Video_165.avi",
	"2018-08-19-11-25-09-Infrared_Video_166.avi",
	"2018-08-19-11-39-55-Infrared_Video_167.avi",
	"2018-08-19-11-54-14-Infrared_Video_168.avi",
	"2018-08-19-12-08-44-Infrared_Video_169.avi",
	"2018-08-19-12-22-57-Infrared_Video_170.avi",
	"2018-08-19-12-37-18-Infrared_Video_171.avi",
	"2018-08-19-12-52-05-Infrared_Video_172.avi",
	"2018-08-19-13-06-59-Infrared_Video_173.avi",
	"2018-08-19-13-21-36-Infrared_Video_174.avi",
	"2018-08-19-13-36-39-Infrared_Video_175.avi",
	"2018-08-19-13-51-04-Infrared_Video_176.avi",
	"2018-08-19-14-06-15-Infrared_Video_177.avi",
	"2018-08-19-14-20-43-Infrared_Video_178.avi",
	"2018-08-19-14-35-31-Infrared_Video_179.avi",
	"2018-08-19-14-49-57-Infrared_Video_180.avi",
	"2018-08-19-15-04-34-Infrared_Video_181.avi",
	"2018-08-19-15-19-10-Infrared_Video_182.avi",
	"2018-08-19-15-33-38-Infrared_Video_183.avi",
	"2018-08-19-15-48-04-Infrared_Video_184.avi",
	"2018-08-19-16-02-56-Infrared_Video_185.avi",
	"2018-08-19-16-17-37-Infrared_Video_186.avi",
	"2018-08-19-16-32-19-Infrared_Video_187.avi",
	"2018-08-19-16-46-43-Infrared_Video_188.avi",
	"2018-08-19-17-01-28-Infrared_Video_189.avi",
	"2018-08-19-17-16-10-Infrared_Video_190.avi"
};

void SpatioTemporal(Mat &src1, Mat &src2, Mat &src3, Mat &dst) {
	Mat GraySrc[3];
	Mat ResultTemp;

	if (src1.channels() == 3) {
		printf("===SpatioTemporal===\n");
		printf("The input image's channel is not grayscale\n");
		return;
	}

	GraySrc[0] = src1.clone();
	GraySrc[1] = src2.clone();
	GraySrc[2] = src3.clone();

	ResultTemp = TemporalInterpolation(GraySrc[0], GraySrc[1], GraySrc[2]);
	ResultTemp = SpatioInterpolation(ResultTemp);

	dst = ResultTemp;
}

Mat TemporalInterpolation(Mat &image1, Mat &image2, Mat &image3) {
	Mat Result(image1.rows, image1.cols, CV_8UC1);
	int cnt;
	int sum;

	for (int i = 0; i < Result.rows; i++) {
		for (int j = 0; j < Result.cols; j++) {
			cnt = 0;
			sum = 0;

			if (image1.data[j + i * Result.cols] < undefined) {
				cnt++;
				sum += image1.data[j + i * Result.cols];
			}
			if (image2.data[j + i * Result.cols] < undefined) {
				cnt++;
				sum += image2.data[j + i * Result.cols];
			}
			if (image3.data[j + i * Result.cols] < undefined) {
				cnt++;
				sum += image3.data[j + i * Result.cols];
			}
			if (cnt == 0) {
				sum = image1.data[j + i * image1.cols] + image2.data[j + i * image2.cols] + image3.data[j + i * image3.cols];
				cnt = 3;
			}
			Result.data[j + i * Result.cols] = (float)sum / cnt;
		}
	}

	return Result;
}

Mat SpatioInterpolation(Mat &image) {
	Mat Result(image.rows / sample_size, image.cols / sample_size, CV_8UC1);
	int cnt;
	int sum;

	for (int i = 0; i < Result.rows; i++) {
		for (int j = 0; j < Result.cols; j++) {
			cnt = 0;
			sum = 0;

			for (int m = 0; m < sample_size; m++) {
				for (int n = 0; n < sample_size; n++) {
					if (image.data[(j * sample_size + n) + (i * sample_size + m) *image.cols] < undefined) {          //undefined -> 255
						cnt++;
						sum += image.data[(j * sample_size + n) + (i * sample_size + m)*image.cols];
					}
				}
			}

			if (cnt == 0) {
				for (int m = 0; m < sample_size; m++) {
					for (int n = 0; n < sample_size; n++) {
						sum += image.data[(j * sample_size + n) + (i * sample_size + m)*image.cols];          // �����ؾ� �ϴ� �κ� -> ��� undefined �϶�
																											  //sum = 255;
					}
				}
				cnt = (int)pow((double)sample_size, 2);
			}

			Result.data[j + i * Result.cols] = (float)sum / cnt;
		}
	}
	return Result;
}