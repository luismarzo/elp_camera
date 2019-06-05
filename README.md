## elp_camera

Both folders are a modification of others repos.

First steps
----------------

Change the calibration path in side_x_side_stereo_node.cpp
	left_cinfo_->loadCameraInfo("YOUR PATH WITH YOUR CALIBRATION");
	
Maybe you have to change the camera path in usb_cam-test.launch   (dev/video1 or dev/video0)

If you want to change the resolution, you have to change the args in usb_cam-test.launch

In order to use it:
-----------------

roslaunch usb_cam usb_cam-test.launch
