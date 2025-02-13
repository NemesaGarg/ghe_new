#include "ghe.h"
#include "stdio.h"

uint64_t lut_data[32] = {45, 65, 78, 34, 67, 22, 52, 99, 77, 43, 81, 90, 30, 70, 98, 60,
	              90, 89, 23, 51, 78, 11, 63, 100, 88, 12, 69, 16, 23, 38, 29, 69
};

#define DRM_MODE_HISTOGRAM_HSV_MAX_RGB                  (1 << 0)

struct globalhist_args user;

int main()
{
	user.histogram = lut_data;
	user.binscount = 32;
	user.histogrammode = DRM_MODE_HISTOGRAM_HSV_MAX_RGB;

	histogram_compute_generate_data_bin(&user);

	return 0;
}
