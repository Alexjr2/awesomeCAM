extern "C" const char *av_version_info(void);

extern "C" const char *awesomecam_ffmpeg_packager_version() {
  return av_version_info();
}
