#if defined(__aarch64__) && !defined(__arm64__)
#define __arm64__ 1
#endif
#include <stddef.h>
#include <sys/statvfs.h>
#include <sys/time.h>
#include <nfsc/libnfs.h>
#include <nfsc/libnfs-raw-nfs.h>
#include <nfsc/libnfs-raw.h>
#include <nfsc/libnfs-raw-mount.h>
