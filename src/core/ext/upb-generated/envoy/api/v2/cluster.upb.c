/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/api/v2/cluster.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg.h"
#include "envoy/api/v2/cluster.upb.h"
#include "envoy/api/v2/auth/cert.upb.h"
#include "envoy/api/v2/cluster/circuit_breaker.upb.h"
#include "envoy/api/v2/cluster/filter.upb.h"
#include "envoy/api/v2/cluster/outlier_detection.upb.h"
#include "envoy/api/v2/core/address.upb.h"
#include "envoy/api/v2/core/base.upb.h"
#include "envoy/api/v2/core/config_source.upb.h"
#include "envoy/api/v2/core/health_check.upb.h"
#include "envoy/api/v2/core/protocol.upb.h"
#include "envoy/api/v2/endpoint.upb.h"
#include "envoy/type/percent.upb.h"
#include "google/protobuf/any.upb.h"
#include "google/protobuf/duration.upb.h"
#include "google/protobuf/struct.upb.h"
#include "google/protobuf/wrappers.upb.h"
#include "envoy/annotations/deprecation.upb.h"
#include "udpa/annotations/migrate.upb.h"
#include "validate/validate.upb.h"

#include "upb/port_def.inc"

static const upb_msglayout *const envoy_api_v2_Cluster_submsgs[34] = {
  &envoy_api_v2_Cluster_CommonLbConfig_msginit,
  &envoy_api_v2_Cluster_CustomClusterType_msginit,
  &envoy_api_v2_Cluster_EdsClusterConfig_msginit,
  &envoy_api_v2_Cluster_ExtensionProtocolOptionsEntry_msginit,
  &envoy_api_v2_Cluster_LbSubsetConfig_msginit,
  &envoy_api_v2_Cluster_LeastRequestLbConfig_msginit,
  &envoy_api_v2_Cluster_OriginalDstLbConfig_msginit,
  &envoy_api_v2_Cluster_RefreshRate_msginit,
  &envoy_api_v2_Cluster_RingHashLbConfig_msginit,
  &envoy_api_v2_Cluster_TransportSocketMatch_msginit,
  &envoy_api_v2_Cluster_TypedExtensionProtocolOptionsEntry_msginit,
  &envoy_api_v2_ClusterLoadAssignment_msginit,
  &envoy_api_v2_LoadBalancingPolicy_msginit,
  &envoy_api_v2_UpstreamConnectionOptions_msginit,
  &envoy_api_v2_auth_UpstreamTlsContext_msginit,
  &envoy_api_v2_cluster_CircuitBreakers_msginit,
  &envoy_api_v2_cluster_Filter_msginit,
  &envoy_api_v2_cluster_OutlierDetection_msginit,
  &envoy_api_v2_core_Address_msginit,
  &envoy_api_v2_core_BindConfig_msginit,
  &envoy_api_v2_core_ConfigSource_msginit,
  &envoy_api_v2_core_HealthCheck_msginit,
  &envoy_api_v2_core_Http1ProtocolOptions_msginit,
  &envoy_api_v2_core_Http2ProtocolOptions_msginit,
  &envoy_api_v2_core_HttpProtocolOptions_msginit,
  &envoy_api_v2_core_Metadata_msginit,
  &envoy_api_v2_core_TransportSocket_msginit,
  &envoy_api_v2_core_UpstreamHttpProtocolOptions_msginit,
  &google_protobuf_Duration_msginit,
  &google_protobuf_UInt32Value_msginit,
};

static const upb_msglayout_field envoy_api_v2_Cluster__fields[45] = {
  {1, UPB_SIZE(32, 32), 0, 0, 9, 1},
  {2, UPB_SIZE(168, 304), UPB_SIZE(-177, -313), 0, 14, 1},
  {3, UPB_SIZE(48, 64), 0, 2, 11, 1},
  {4, UPB_SIZE(52, 72), 0, 28, 11, 1},
  {5, UPB_SIZE(56, 80), 0, 29, 11, 1},
  {6, UPB_SIZE(0, 0), 0, 0, 14, 1},
  {7, UPB_SIZE(140, 248), 0, 18, 11, 3},
  {8, UPB_SIZE(144, 256), 0, 21, 11, 3},
  {9, UPB_SIZE(60, 88), 0, 29, 11, 1},
  {10, UPB_SIZE(64, 96), 0, 15, 11, 1},
  {11, UPB_SIZE(68, 104), 0, 14, 11, 1},
  {13, UPB_SIZE(72, 112), 0, 22, 11, 1},
  {14, UPB_SIZE(76, 120), 0, 23, 11, 1},
  {16, UPB_SIZE(80, 128), 0, 28, 11, 1},
  {17, UPB_SIZE(8, 8), 0, 0, 14, 1},
  {18, UPB_SIZE(148, 264), 0, 18, 11, 3},
  {19, UPB_SIZE(84, 136), 0, 17, 11, 1},
  {20, UPB_SIZE(88, 144), 0, 28, 11, 1},
  {21, UPB_SIZE(92, 152), 0, 19, 11, 1},
  {22, UPB_SIZE(96, 160), 0, 4, 11, 1},
  {23, UPB_SIZE(180, 320), UPB_SIZE(-185, -329), 8, 11, 1},
  {24, UPB_SIZE(100, 168), 0, 26, 11, 1},
  {25, UPB_SIZE(104, 176), 0, 25, 11, 1},
  {26, UPB_SIZE(16, 16), 0, 0, 14, 1},
  {27, UPB_SIZE(108, 184), 0, 0, 11, 1},
  {28, UPB_SIZE(40, 48), 0, 0, 9, 1},
  {29, UPB_SIZE(112, 192), 0, 24, 11, 1},
  {30, UPB_SIZE(116, 200), 0, 13, 11, 1},
  {31, UPB_SIZE(24, 24), 0, 0, 8, 1},
  {32, UPB_SIZE(25, 25), 0, 0, 8, 1},
  {33, UPB_SIZE(120, 208), 0, 11, 11, 1},
  {34, UPB_SIZE(180, 320), UPB_SIZE(-185, -329), 6, 11, 1},
  {35, UPB_SIZE(152, 272), 0, 3, 11, 3},
  {36, UPB_SIZE(156, 280), 0, 10, 11, 3},
  {37, UPB_SIZE(180, 320), UPB_SIZE(-185, -329), 5, 11, 1},
  {38, UPB_SIZE(168, 304), UPB_SIZE(-177, -313), 1, 11, 1},
  {39, UPB_SIZE(26, 26), 0, 0, 8, 1},
  {40, UPB_SIZE(160, 288), 0, 16, 11, 3},
  {41, UPB_SIZE(124, 216), 0, 12, 11, 1},
  {42, UPB_SIZE(128, 224), 0, 20, 11, 1},
  {43, UPB_SIZE(164, 296), 0, 9, 11, 3},
  {44, UPB_SIZE(132, 232), 0, 7, 11, 1},
  {45, UPB_SIZE(27, 27), 0, 0, 8, 1},
  {46, UPB_SIZE(136, 240), 0, 27, 11, 1},
  {47, UPB_SIZE(28, 28), 0, 0, 8, 1},
};

const upb_msglayout envoy_api_v2_Cluster_msginit = {
  &envoy_api_v2_Cluster_submsgs[0],
  &envoy_api_v2_Cluster__fields[0],
  UPB_SIZE(192, 336), 45, false,
};

static const upb_msglayout *const envoy_api_v2_Cluster_TransportSocketMatch_submsgs[2] = {
  &envoy_api_v2_core_TransportSocket_msginit,
  &google_protobuf_Struct_msginit,
};

static const upb_msglayout_field envoy_api_v2_Cluster_TransportSocketMatch__fields[3] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, 1},
  {2, UPB_SIZE(8, 16), 0, 1, 11, 1},
  {3, UPB_SIZE(12, 24), 0, 0, 11, 1},
};

const upb_msglayout envoy_api_v2_Cluster_TransportSocketMatch_msginit = {
  &envoy_api_v2_Cluster_TransportSocketMatch_submsgs[0],
  &envoy_api_v2_Cluster_TransportSocketMatch__fields[0],
  UPB_SIZE(16, 32), 3, false,
};

static const upb_msglayout *const envoy_api_v2_Cluster_CustomClusterType_submsgs[1] = {
  &google_protobuf_Any_msginit,
};

static const upb_msglayout_field envoy_api_v2_Cluster_CustomClusterType__fields[2] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, 1},
  {2, UPB_SIZE(8, 16), 0, 0, 11, 1},
};

const upb_msglayout envoy_api_v2_Cluster_CustomClusterType_msginit = {
  &envoy_api_v2_Cluster_CustomClusterType_submsgs[0],
  &envoy_api_v2_Cluster_CustomClusterType__fields[0],
  UPB_SIZE(16, 32), 2, false,
};

static const upb_msglayout *const envoy_api_v2_Cluster_EdsClusterConfig_submsgs[1] = {
  &envoy_api_v2_core_ConfigSource_msginit,
};

static const upb_msglayout_field envoy_api_v2_Cluster_EdsClusterConfig__fields[2] = {
  {1, UPB_SIZE(8, 16), 0, 0, 11, 1},
  {2, UPB_SIZE(0, 0), 0, 0, 9, 1},
};

const upb_msglayout envoy_api_v2_Cluster_EdsClusterConfig_msginit = {
  &envoy_api_v2_Cluster_EdsClusterConfig_submsgs[0],
  &envoy_api_v2_Cluster_EdsClusterConfig__fields[0],
  UPB_SIZE(16, 32), 2, false,
};

static const upb_msglayout *const envoy_api_v2_Cluster_LbSubsetConfig_submsgs[2] = {
  &envoy_api_v2_Cluster_LbSubsetConfig_LbSubsetSelector_msginit,
  &google_protobuf_Struct_msginit,
};

static const upb_msglayout_field envoy_api_v2_Cluster_LbSubsetConfig__fields[7] = {
  {1, UPB_SIZE(0, 0), 0, 0, 14, 1},
  {2, UPB_SIZE(12, 16), 0, 1, 11, 1},
  {3, UPB_SIZE(16, 24), 0, 0, 11, 3},
  {4, UPB_SIZE(8, 8), 0, 0, 8, 1},
  {5, UPB_SIZE(9, 9), 0, 0, 8, 1},
  {6, UPB_SIZE(10, 10), 0, 0, 8, 1},
  {7, UPB_SIZE(11, 11), 0, 0, 8, 1},
};

const upb_msglayout envoy_api_v2_Cluster_LbSubsetConfig_msginit = {
  &envoy_api_v2_Cluster_LbSubsetConfig_submsgs[0],
  &envoy_api_v2_Cluster_LbSubsetConfig__fields[0],
  UPB_SIZE(24, 32), 7, false,
};

static const upb_msglayout_field envoy_api_v2_Cluster_LbSubsetConfig_LbSubsetSelector__fields[3] = {
  {1, UPB_SIZE(8, 8), 0, 0, 9, 3},
  {2, UPB_SIZE(0, 0), 0, 0, 14, 1},
  {3, UPB_SIZE(12, 16), 0, 0, 9, 3},
};

const upb_msglayout envoy_api_v2_Cluster_LbSubsetConfig_LbSubsetSelector_msginit = {
  NULL,
  &envoy_api_v2_Cluster_LbSubsetConfig_LbSubsetSelector__fields[0],
  UPB_SIZE(16, 24), 3, false,
};

static const upb_msglayout *const envoy_api_v2_Cluster_LeastRequestLbConfig_submsgs[1] = {
  &google_protobuf_UInt32Value_msginit,
};

static const upb_msglayout_field envoy_api_v2_Cluster_LeastRequestLbConfig__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 11, 1},
};

const upb_msglayout envoy_api_v2_Cluster_LeastRequestLbConfig_msginit = {
  &envoy_api_v2_Cluster_LeastRequestLbConfig_submsgs[0],
  &envoy_api_v2_Cluster_LeastRequestLbConfig__fields[0],
  UPB_SIZE(4, 8), 1, false,
};

static const upb_msglayout *const envoy_api_v2_Cluster_RingHashLbConfig_submsgs[2] = {
  &google_protobuf_UInt64Value_msginit,
};

static const upb_msglayout_field envoy_api_v2_Cluster_RingHashLbConfig__fields[3] = {
  {1, UPB_SIZE(8, 8), 0, 0, 11, 1},
  {3, UPB_SIZE(0, 0), 0, 0, 14, 1},
  {4, UPB_SIZE(12, 16), 0, 0, 11, 1},
};

const upb_msglayout envoy_api_v2_Cluster_RingHashLbConfig_msginit = {
  &envoy_api_v2_Cluster_RingHashLbConfig_submsgs[0],
  &envoy_api_v2_Cluster_RingHashLbConfig__fields[0],
  UPB_SIZE(16, 24), 3, false,
};

static const upb_msglayout_field envoy_api_v2_Cluster_OriginalDstLbConfig__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 8, 1},
};

const upb_msglayout envoy_api_v2_Cluster_OriginalDstLbConfig_msginit = {
  NULL,
  &envoy_api_v2_Cluster_OriginalDstLbConfig__fields[0],
  UPB_SIZE(1, 1), 1, false,
};

static const upb_msglayout *const envoy_api_v2_Cluster_CommonLbConfig_submsgs[4] = {
  &envoy_api_v2_Cluster_CommonLbConfig_LocalityWeightedLbConfig_msginit,
  &envoy_api_v2_Cluster_CommonLbConfig_ZoneAwareLbConfig_msginit,
  &envoy_type_Percent_msginit,
  &google_protobuf_Duration_msginit,
};

static const upb_msglayout_field envoy_api_v2_Cluster_CommonLbConfig__fields[6] = {
  {1, UPB_SIZE(4, 8), 0, 2, 11, 1},
  {2, UPB_SIZE(12, 24), UPB_SIZE(-17, -33), 1, 11, 1},
  {3, UPB_SIZE(12, 24), UPB_SIZE(-17, -33), 0, 11, 1},
  {4, UPB_SIZE(8, 16), 0, 3, 11, 1},
  {5, UPB_SIZE(0, 0), 0, 0, 8, 1},
  {6, UPB_SIZE(1, 1), 0, 0, 8, 1},
};

const upb_msglayout envoy_api_v2_Cluster_CommonLbConfig_msginit = {
  &envoy_api_v2_Cluster_CommonLbConfig_submsgs[0],
  &envoy_api_v2_Cluster_CommonLbConfig__fields[0],
  UPB_SIZE(20, 40), 6, false,
};

static const upb_msglayout *const envoy_api_v2_Cluster_CommonLbConfig_ZoneAwareLbConfig_submsgs[2] = {
  &envoy_type_Percent_msginit,
  &google_protobuf_UInt64Value_msginit,
};

static const upb_msglayout_field envoy_api_v2_Cluster_CommonLbConfig_ZoneAwareLbConfig__fields[3] = {
  {1, UPB_SIZE(4, 8), 0, 0, 11, 1},
  {2, UPB_SIZE(8, 16), 0, 1, 11, 1},
  {3, UPB_SIZE(0, 0), 0, 0, 8, 1},
};

const upb_msglayout envoy_api_v2_Cluster_CommonLbConfig_ZoneAwareLbConfig_msginit = {
  &envoy_api_v2_Cluster_CommonLbConfig_ZoneAwareLbConfig_submsgs[0],
  &envoy_api_v2_Cluster_CommonLbConfig_ZoneAwareLbConfig__fields[0],
  UPB_SIZE(12, 24), 3, false,
};

const upb_msglayout envoy_api_v2_Cluster_CommonLbConfig_LocalityWeightedLbConfig_msginit = {
  NULL,
  NULL,
  UPB_SIZE(0, 0), 0, false,
};

static const upb_msglayout *const envoy_api_v2_Cluster_RefreshRate_submsgs[2] = {
  &google_protobuf_Duration_msginit,
};

static const upb_msglayout_field envoy_api_v2_Cluster_RefreshRate__fields[2] = {
  {1, UPB_SIZE(0, 0), 0, 0, 11, 1},
  {2, UPB_SIZE(4, 8), 0, 0, 11, 1},
};

const upb_msglayout envoy_api_v2_Cluster_RefreshRate_msginit = {
  &envoy_api_v2_Cluster_RefreshRate_submsgs[0],
  &envoy_api_v2_Cluster_RefreshRate__fields[0],
  UPB_SIZE(8, 16), 2, false,
};

static const upb_msglayout *const envoy_api_v2_Cluster_ExtensionProtocolOptionsEntry_submsgs[1] = {
  &google_protobuf_Struct_msginit,
};

static const upb_msglayout_field envoy_api_v2_Cluster_ExtensionProtocolOptionsEntry__fields[2] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, 1},
  {2, UPB_SIZE(8, 16), 0, 0, 11, 1},
};

const upb_msglayout envoy_api_v2_Cluster_ExtensionProtocolOptionsEntry_msginit = {
  &envoy_api_v2_Cluster_ExtensionProtocolOptionsEntry_submsgs[0],
  &envoy_api_v2_Cluster_ExtensionProtocolOptionsEntry__fields[0],
  UPB_SIZE(16, 32), 2, false,
};

static const upb_msglayout *const envoy_api_v2_Cluster_TypedExtensionProtocolOptionsEntry_submsgs[1] = {
  &google_protobuf_Any_msginit,
};

static const upb_msglayout_field envoy_api_v2_Cluster_TypedExtensionProtocolOptionsEntry__fields[2] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, 1},
  {2, UPB_SIZE(8, 16), 0, 0, 11, 1},
};

const upb_msglayout envoy_api_v2_Cluster_TypedExtensionProtocolOptionsEntry_msginit = {
  &envoy_api_v2_Cluster_TypedExtensionProtocolOptionsEntry_submsgs[0],
  &envoy_api_v2_Cluster_TypedExtensionProtocolOptionsEntry__fields[0],
  UPB_SIZE(16, 32), 2, false,
};

static const upb_msglayout *const envoy_api_v2_LoadBalancingPolicy_submsgs[1] = {
  &envoy_api_v2_LoadBalancingPolicy_Policy_msginit,
};

static const upb_msglayout_field envoy_api_v2_LoadBalancingPolicy__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 11, 3},
};

const upb_msglayout envoy_api_v2_LoadBalancingPolicy_msginit = {
  &envoy_api_v2_LoadBalancingPolicy_submsgs[0],
  &envoy_api_v2_LoadBalancingPolicy__fields[0],
  UPB_SIZE(4, 8), 1, false,
};

static const upb_msglayout *const envoy_api_v2_LoadBalancingPolicy_Policy_submsgs[2] = {
  &google_protobuf_Any_msginit,
  &google_protobuf_Struct_msginit,
};

static const upb_msglayout_field envoy_api_v2_LoadBalancingPolicy_Policy__fields[3] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, 1},
  {2, UPB_SIZE(8, 16), 0, 1, 11, 1},
  {3, UPB_SIZE(12, 24), 0, 0, 11, 1},
};

const upb_msglayout envoy_api_v2_LoadBalancingPolicy_Policy_msginit = {
  &envoy_api_v2_LoadBalancingPolicy_Policy_submsgs[0],
  &envoy_api_v2_LoadBalancingPolicy_Policy__fields[0],
  UPB_SIZE(16, 32), 3, false,
};

static const upb_msglayout *const envoy_api_v2_UpstreamBindConfig_submsgs[1] = {
  &envoy_api_v2_core_Address_msginit,
};

static const upb_msglayout_field envoy_api_v2_UpstreamBindConfig__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 11, 1},
};

const upb_msglayout envoy_api_v2_UpstreamBindConfig_msginit = {
  &envoy_api_v2_UpstreamBindConfig_submsgs[0],
  &envoy_api_v2_UpstreamBindConfig__fields[0],
  UPB_SIZE(4, 8), 1, false,
};

static const upb_msglayout *const envoy_api_v2_UpstreamConnectionOptions_submsgs[1] = {
  &envoy_api_v2_core_TcpKeepalive_msginit,
};

static const upb_msglayout_field envoy_api_v2_UpstreamConnectionOptions__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 11, 1},
};

const upb_msglayout envoy_api_v2_UpstreamConnectionOptions_msginit = {
  &envoy_api_v2_UpstreamConnectionOptions_submsgs[0],
  &envoy_api_v2_UpstreamConnectionOptions__fields[0],
  UPB_SIZE(4, 8), 1, false,
};

#include "upb/port_undef.inc"

