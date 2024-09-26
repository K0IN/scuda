#define RPC_nvmlInit_v2 0
#define RPC_nvmlInitWithFlags 1
#define RPC_nvmlShutdown 2
#define RPC_nvmlSystemGetDriverVersion 3
#define RPC_nvmlSystemGetNVMLVersion 4
#define RPC_nvmlSystemGetCudaDriverVersion 5
#define RPC_nvmlSystemGetCudaDriverVersion_v2 6
#define RPC_nvmlSystemGetProcessName 7
#define RPC_nvmlUnitGetCount 8
#define RPC_nvmlUnitGetHandleByIndex 9
#define RPC_nvmlUnitGetUnitInfo 10
#define RPC_nvmlUnitGetLedState 11
#define RPC_nvmlUnitGetPsuInfo 12
#define RPC_nvmlUnitGetTemperature 13
#define RPC_nvmlUnitGetFanSpeedInfo 14
#define RPC_nvmlUnitGetDevices 15
#define RPC_nvmlSystemGetHicVersion 16
#define RPC_nvmlDeviceGetCount_v2 17
#define RPC_nvmlDeviceGetAttributes_v2 18
#define RPC_nvmlDeviceGetHandleByIndex_v2 19
#define RPC_nvmlDeviceGetHandleBySerial 20
#define RPC_nvmlDeviceGetHandleByUUID 21
#define RPC_nvmlDeviceGetHandleByPciBusId_v2 22
#define RPC_nvmlDeviceGetName 23
#define RPC_nvmlDeviceGetBrand 24
#define RPC_nvmlDeviceGetIndex 25
#define RPC_nvmlDeviceGetSerial 26
#define RPC_nvmlDeviceGetMemoryAffinity 27
#define RPC_nvmlDeviceGetCpuAffinityWithinScope 28
#define RPC_nvmlDeviceGetCpuAffinity 29
#define RPC_nvmlDeviceSetCpuAffinity 30
#define RPC_nvmlDeviceClearCpuAffinity 31
#define RPC_nvmlDeviceGetTopologyCommonAncestor 32
#define RPC_nvmlDeviceGetTopologyNearestGpus 33
#define RPC_nvmlSystemGetTopologyGpuSet 34
#define RPC_nvmlDeviceGetP2PStatus 35
#define RPC_nvmlDeviceGetUUID 36
#define RPC_nvmlVgpuInstanceGetMdevUUID 37
#define RPC_nvmlDeviceGetMinorNumber 38
#define RPC_nvmlDeviceGetBoardPartNumber 39
#define RPC_nvmlDeviceGetInforomVersion 40
#define RPC_nvmlDeviceGetInforomImageVersion 41
#define RPC_nvmlDeviceGetInforomConfigurationChecksum 42
#define RPC_nvmlDeviceValidateInforom 43
#define RPC_nvmlDeviceGetDisplayMode 44
#define RPC_nvmlDeviceGetDisplayActive 45
#define RPC_nvmlDeviceGetPersistenceMode 46
#define RPC_nvmlDeviceGetPciInfo_v3 47
#define RPC_nvmlDeviceGetMaxPcieLinkGeneration 48
#define RPC_nvmlDeviceGetGpuMaxPcieLinkGeneration 49
#define RPC_nvmlDeviceGetMaxPcieLinkWidth 50
#define RPC_nvmlDeviceGetCurrPcieLinkGeneration 51
#define RPC_nvmlDeviceGetCurrPcieLinkWidth 52
#define RPC_nvmlDeviceGetPcieThroughput 53
#define RPC_nvmlDeviceGetPcieReplayCounter 54
#define RPC_nvmlDeviceGetClockInfo 55
#define RPC_nvmlDeviceGetMaxClockInfo 56
#define RPC_nvmlDeviceGetApplicationsClock 57
#define RPC_nvmlDeviceGetDefaultApplicationsClock 58
#define RPC_nvmlDeviceResetApplicationsClocks 59
#define RPC_nvmlDeviceGetClock 60
#define RPC_nvmlDeviceGetMaxCustomerBoostClock 61
#define RPC_nvmlDeviceGetSupportedMemoryClocks 62
#define RPC_nvmlDeviceGetSupportedGraphicsClocks 63
#define RPC_nvmlDeviceGetAutoBoostedClocksEnabled 64
#define RPC_nvmlDeviceSetAutoBoostedClocksEnabled 65
#define RPC_nvmlDeviceSetDefaultAutoBoostedClocksEnabled 66
#define RPC_nvmlDeviceGetFanSpeed 67
#define RPC_nvmlDeviceGetFanSpeed_v2 68
#define RPC_nvmlDeviceGetTargetFanSpeed 69
#define RPC_nvmlDeviceSetDefaultFanSpeed_v2 70
#define RPC_nvmlDeviceGetMinMaxFanSpeed 71
#define RPC_nvmlDeviceGetFanControlPolicy_v2 72
#define RPC_nvmlDeviceSetFanControlPolicy 73
#define RPC_nvmlDeviceGetNumFans 74
#define RPC_nvmlDeviceGetTemperature 75
#define RPC_nvmlDeviceGetTemperatureThreshold 76
#define RPC_nvmlDeviceSetTemperatureThreshold 77
#define RPC_nvmlDeviceGetThermalSettings 78
#define RPC_nvmlDeviceGetPerformanceState 79
#define RPC_nvmlDeviceGetCurrentClocksThrottleReasons 80
#define RPC_nvmlDeviceGetSupportedClocksThrottleReasons 81
#define RPC_nvmlDeviceGetPowerState 82
#define RPC_nvmlDeviceGetPowerManagementMode 83
#define RPC_nvmlDeviceGetPowerManagementLimit 84
#define RPC_nvmlDeviceGetPowerManagementLimitConstraints 85
#define RPC_nvmlDeviceGetPowerManagementDefaultLimit 86
#define RPC_nvmlDeviceGetPowerUsage 87
#define RPC_nvmlDeviceGetTotalEnergyConsumption 88
#define RPC_nvmlDeviceGetEnforcedPowerLimit 89
#define RPC_nvmlDeviceGetGpuOperationMode 90
#define RPC_nvmlDeviceGetMemoryInfo 91
#define RPC_nvmlDeviceGetMemoryInfo_v2 92
#define RPC_nvmlDeviceGetComputeMode 93
#define RPC_nvmlDeviceGetCudaComputeCapability 94
#define RPC_nvmlDeviceGetEccMode 95
#define RPC_nvmlDeviceGetDefaultEccMode 96
#define RPC_nvmlDeviceGetBoardId 97
#define RPC_nvmlDeviceGetMultiGpuBoard 98
#define RPC_nvmlDeviceGetTotalEccErrors 99
#define RPC_nvmlDeviceGetDetailedEccErrors 100
#define RPC_nvmlDeviceGetMemoryErrorCounter 101
#define RPC_nvmlDeviceGetUtilizationRates 102
#define RPC_nvmlDeviceGetEncoderUtilization 103
#define RPC_nvmlDeviceGetEncoderCapacity 104
#define RPC_nvmlDeviceGetEncoderStats 105
#define RPC_nvmlDeviceGetEncoderSessions 106
#define RPC_nvmlDeviceGetDecoderUtilization 107
#define RPC_nvmlDeviceGetFBCStats 108
#define RPC_nvmlDeviceGetFBCSessions 109
#define RPC_nvmlDeviceGetDriverModel 110
#define RPC_nvmlDeviceGetVbiosVersion 111
#define RPC_nvmlDeviceGetBridgeChipInfo 112
#define RPC_nvmlDeviceGetComputeRunningProcesses_v3 113
#define RPC_nvmlDeviceGetGraphicsRunningProcesses_v3 114
#define RPC_nvmlDeviceGetMPSComputeRunningProcesses_v3 115
#define RPC_nvmlDeviceOnSameBoard 116
#define RPC_nvmlDeviceGetAPIRestriction 117
#define RPC_nvmlDeviceGetSamples 118
#define RPC_nvmlDeviceGetBAR1MemoryInfo 119
#define RPC_nvmlDeviceGetViolationStatus 120
#define RPC_nvmlDeviceGetIrqNum 121
#define RPC_nvmlDeviceGetNumGpuCores 122
#define RPC_nvmlDeviceGetPowerSource 123
#define RPC_nvmlDeviceGetMemoryBusWidth 124
#define RPC_nvmlDeviceGetPcieLinkMaxSpeed 125
#define RPC_nvmlDeviceGetPcieSpeed 126
#define RPC_nvmlDeviceGetAdaptiveClockInfoStatus 127
#define RPC_nvmlDeviceGetAccountingMode 128
#define RPC_nvmlDeviceGetAccountingStats 129
#define RPC_nvmlDeviceGetAccountingPids 130
#define RPC_nvmlDeviceGetAccountingBufferSize 131
#define RPC_nvmlDeviceGetRetiredPages 132
#define RPC_nvmlDeviceGetRetiredPages_v2 133
#define RPC_nvmlDeviceGetRetiredPagesPendingStatus 134
#define RPC_nvmlDeviceGetRemappedRows 135
#define RPC_nvmlDeviceGetRowRemapperHistogram 136
#define RPC_nvmlDeviceGetArchitecture 137
#define RPC_nvmlUnitSetLedState 138
#define RPC_nvmlDeviceSetPersistenceMode 139
#define RPC_nvmlDeviceSetComputeMode 140
#define RPC_nvmlDeviceSetEccMode 141
#define RPC_nvmlDeviceClearEccErrorCounts 142
#define RPC_nvmlDeviceSetDriverModel 143
#define RPC_nvmlDeviceSetGpuLockedClocks 144
#define RPC_nvmlDeviceResetGpuLockedClocks 145
#define RPC_nvmlDeviceSetMemoryLockedClocks 146
#define RPC_nvmlDeviceResetMemoryLockedClocks 147
#define RPC_nvmlDeviceSetApplicationsClocks 148
#define RPC_nvmlDeviceGetClkMonStatus 149
#define RPC_nvmlDeviceSetPowerManagementLimit 150
#define RPC_nvmlDeviceSetGpuOperationMode 151
#define RPC_nvmlDeviceSetAPIRestriction 152
#define RPC_nvmlDeviceSetAccountingMode 153
#define RPC_nvmlDeviceClearAccountingPids 154
#define RPC_nvmlDeviceGetNvLinkState 155
#define RPC_nvmlDeviceGetNvLinkVersion 156
#define RPC_nvmlDeviceGetNvLinkCapability 157
#define RPC_nvmlDeviceGetNvLinkRemotePciInfo_v2 158
#define RPC_nvmlDeviceGetNvLinkErrorCounter 159
#define RPC_nvmlDeviceResetNvLinkErrorCounters 160
#define RPC_nvmlDeviceSetNvLinkUtilizationControl 161
#define RPC_nvmlDeviceGetNvLinkUtilizationControl 162
#define RPC_nvmlDeviceGetNvLinkUtilizationCounter 163
#define RPC_nvmlDeviceFreezeNvLinkUtilizationCounter 164
#define RPC_nvmlDeviceResetNvLinkUtilizationCounter 165
#define RPC_nvmlDeviceGetNvLinkRemoteDeviceType 166
#define RPC_nvmlEventSetCreate 167
#define RPC_nvmlDeviceRegisterEvents 168
#define RPC_nvmlDeviceGetSupportedEventTypes 169
#define RPC_nvmlEventSetWait_v2 170
#define RPC_nvmlEventSetFree 171
#define RPC_nvmlDeviceModifyDrainState 172
#define RPC_nvmlDeviceQueryDrainState 173
#define RPC_nvmlDeviceRemoveGpu_v2 174
#define RPC_nvmlDeviceDiscoverGpus 175
#define RPC_nvmlDeviceGetFieldValues 176
#define RPC_nvmlDeviceClearFieldValues 177
#define RPC_nvmlDeviceGetVirtualizationMode 178
#define RPC_nvmlDeviceGetHostVgpuMode 179
#define RPC_nvmlDeviceSetVirtualizationMode 180
#define RPC_nvmlDeviceGetGridLicensableFeatures_v4 181
#define RPC_nvmlDeviceGetProcessUtilization 182
#define RPC_nvmlDeviceGetGspFirmwareVersion 183
#define RPC_nvmlDeviceGetGspFirmwareMode 184
#define RPC_nvmlGetVgpuDriverCapabilities 185
#define RPC_nvmlDeviceGetVgpuCapabilities 186
#define RPC_nvmlDeviceGetSupportedVgpus 187
#define RPC_nvmlDeviceGetCreatableVgpus 188
#define RPC_nvmlVgpuTypeGetClass 189
#define RPC_nvmlVgpuTypeGetName 190
#define RPC_nvmlVgpuTypeGetGpuInstanceProfileId 191
#define RPC_nvmlVgpuTypeGetDeviceID 192
#define RPC_nvmlVgpuTypeGetFramebufferSize 193
#define RPC_nvmlVgpuTypeGetNumDisplayHeads 194
#define RPC_nvmlVgpuTypeGetResolution 195
#define RPC_nvmlVgpuTypeGetLicense 196
#define RPC_nvmlVgpuTypeGetFrameRateLimit 197
#define RPC_nvmlVgpuTypeGetMaxInstances 198
#define RPC_nvmlVgpuTypeGetMaxInstancesPerVm 199
#define RPC_nvmlDeviceGetActiveVgpus 200
#define RPC_nvmlVgpuInstanceGetVmID 201
#define RPC_nvmlVgpuInstanceGetUUID 202
#define RPC_nvmlVgpuInstanceGetVmDriverVersion 203
#define RPC_nvmlVgpuInstanceGetFbUsage 204
#define RPC_nvmlVgpuInstanceGetLicenseStatus 205
#define RPC_nvmlVgpuInstanceGetType 206
#define RPC_nvmlVgpuInstanceGetFrameRateLimit 207
#define RPC_nvmlVgpuInstanceGetEccMode 208
#define RPC_nvmlVgpuInstanceGetEncoderCapacity 209
#define RPC_nvmlVgpuInstanceSetEncoderCapacity 210
#define RPC_nvmlVgpuInstanceGetEncoderStats 211
#define RPC_nvmlVgpuInstanceGetEncoderSessions 212
#define RPC_nvmlVgpuInstanceGetFBCStats 213
#define RPC_nvmlVgpuInstanceGetFBCSessions 214
#define RPC_nvmlVgpuInstanceGetGpuInstanceId 215
#define RPC_nvmlVgpuInstanceGetGpuPciId 216
#define RPC_nvmlVgpuTypeGetCapabilities 217
#define RPC_nvmlVgpuInstanceGetMetadata 218
#define RPC_nvmlDeviceGetVgpuMetadata 219
#define RPC_nvmlGetVgpuCompatibility 220
#define RPC_nvmlDeviceGetPgpuMetadataString 221
#define RPC_nvmlDeviceGetVgpuSchedulerLog 222
#define RPC_nvmlDeviceGetVgpuSchedulerState 223
#define RPC_nvmlDeviceGetVgpuSchedulerCapabilities 224
#define RPC_nvmlGetVgpuVersion 225
#define RPC_nvmlSetVgpuVersion 226
#define RPC_nvmlDeviceGetVgpuUtilization 227
#define RPC_nvmlDeviceGetVgpuProcessUtilization 228
#define RPC_nvmlVgpuInstanceGetAccountingMode 229
#define RPC_nvmlVgpuInstanceGetAccountingPids 230
#define RPC_nvmlVgpuInstanceGetAccountingStats 231
#define RPC_nvmlVgpuInstanceClearAccountingPids 232
#define RPC_nvmlVgpuInstanceGetLicenseInfo_v2 233
#define RPC_nvmlGetExcludedDeviceCount 234
#define RPC_nvmlGetExcludedDeviceInfoByIndex 235
#define RPC_nvmlDeviceSetMigMode 236
#define RPC_nvmlDeviceGetMigMode 237
#define RPC_nvmlDeviceGetGpuInstanceProfileInfo 238
#define RPC_nvmlDeviceGetGpuInstanceProfileInfoV 239
#define RPC_nvmlDeviceGetGpuInstancePossiblePlacements_v2 240
#define RPC_nvmlDeviceGetGpuInstanceRemainingCapacity 241
#define RPC_nvmlDeviceCreateGpuInstance 242
#define RPC_nvmlDeviceCreateGpuInstanceWithPlacement 243
#define RPC_nvmlGpuInstanceDestroy 244
#define RPC_nvmlDeviceGetGpuInstances 245
#define RPC_nvmlDeviceGetGpuInstanceById 246
#define RPC_nvmlGpuInstanceGetInfo 247
#define RPC_nvmlGpuInstanceGetComputeInstanceProfileInfo 248
#define RPC_nvmlGpuInstanceGetComputeInstanceProfileInfoV 249
#define RPC_nvmlGpuInstanceGetComputeInstanceRemainingCapacity 250
#define RPC_nvmlGpuInstanceGetComputeInstancePossiblePlacements 251
#define RPC_nvmlGpuInstanceCreateComputeInstance 252
#define RPC_nvmlGpuInstanceCreateComputeInstanceWithPlacement 253
#define RPC_nvmlComputeInstanceDestroy 254
#define RPC_nvmlGpuInstanceGetComputeInstances 255
#define RPC_nvmlGpuInstanceGetComputeInstanceById 256
#define RPC_nvmlComputeInstanceGetInfo_v2 257
#define RPC_nvmlDeviceIsMigDeviceHandle 258
#define RPC_nvmlDeviceGetGpuInstanceId 259
#define RPC_nvmlDeviceGetComputeInstanceId 260
#define RPC_nvmlDeviceGetMaxMigDeviceCount 261
#define RPC_nvmlDeviceGetMigDeviceHandleByIndex 262
#define RPC_nvmlDeviceGetDeviceHandleFromMigDeviceHandle 263
#define RPC_nvmlDeviceGetBusType 264
#define RPC_nvmlDeviceGetDynamicPstatesInfo 265
#define RPC_nvmlDeviceSetFanSpeed_v2 266
#define RPC_nvmlDeviceGetGpcClkVfOffset 267
#define RPC_nvmlDeviceSetGpcClkVfOffset 268
#define RPC_nvmlDeviceGetMemClkVfOffset 269
#define RPC_nvmlDeviceSetMemClkVfOffset 270
#define RPC_nvmlDeviceGetMinMaxClockOfPState 271
#define RPC_nvmlDeviceGetSupportedPerformanceStates 272
#define RPC_nvmlDeviceGetGpcClkMinMaxVfOffset 273
#define RPC_nvmlDeviceGetMemClkMinMaxVfOffset 274
#define RPC_nvmlDeviceGetGpuFabricInfo 275
#define RPC_nvmlGpmMetricsGet 276
#define RPC_nvmlGpmSampleFree 277
#define RPC_nvmlGpmSampleAlloc 278
#define RPC_nvmlGpmSampleGet 279
#define RPC_nvmlGpmMigSampleGet 280
#define RPC_nvmlGpmQueryDeviceSupport 281
#define RPC_nvmlDeviceCcuGetStreamState 282
#define RPC_nvmlDeviceCcuSetStreamState 283
#define RPC_nvmlDeviceSetNvLinkDeviceLowPowerThreshold 284
#define RPC_cuGetErrorString 285
#define RPC_cuGetErrorName 286
#define RPC_cuInit 287
#define RPC_cuDriverGetVersion 288
#define RPC_cuDeviceGet 289
#define RPC_cuDeviceGetCount 290
#define RPC_cuDeviceGetName 291
#define RPC_cuDeviceGetUuid 292
#define RPC_cuDeviceGetUuid_v2 293
#define RPC_cuDeviceGetLuid 294
#define RPC_cuDeviceTotalMem_v2 295
#define RPC_cuDeviceGetTexture1DLinearMaxWidth 296
#define RPC_cuDeviceGetAttribute 297
#define RPC_cuDeviceGetNvSciSyncAttributes 298
#define RPC_cuDeviceSetMemPool 299
#define RPC_cuDeviceGetMemPool 300
#define RPC_cuDeviceGetDefaultMemPool 301
#define RPC_cuDeviceGetExecAffinitySupport 302
#define RPC_cuFlushGPUDirectRDMAWrites 303
#define RPC_cuDeviceGetProperties 304
#define RPC_cuDeviceComputeCapability 305
#define RPC_cuDevicePrimaryCtxRetain 306
#define RPC_cuDevicePrimaryCtxRelease_v2 307
#define RPC_cuDevicePrimaryCtxSetFlags_v2 308
#define RPC_cuDevicePrimaryCtxGetState 309
#define RPC_cuDevicePrimaryCtxReset_v2 310
#define RPC_cuCtxCreate_v2 311
#define RPC_cuCtxCreate_v3 312
#define RPC_cuCtxDestroy_v2 313
#define RPC_cuCtxPushCurrent_v2 314
#define RPC_cuCtxPopCurrent_v2 315
#define RPC_cuCtxSetCurrent 316
#define RPC_cuCtxGetCurrent 317
#define RPC_cuCtxGetDevice 318
#define RPC_cuCtxGetFlags 319
#define RPC_cuCtxGetId 320
#define RPC_cuCtxSynchronize 321
#define RPC_cuCtxSetLimit 322
#define RPC_cuCtxGetLimit 323
#define RPC_cuCtxGetCacheConfig 324
#define RPC_cuCtxSetCacheConfig 325
#define RPC_cuCtxGetSharedMemConfig 326
#define RPC_cuCtxSetSharedMemConfig 327
#define RPC_cuCtxGetApiVersion 328
#define RPC_cuCtxGetStreamPriorityRange 329
#define RPC_cuCtxResetPersistingL2Cache 330
#define RPC_cuCtxGetExecAffinity 331
#define RPC_cuCtxAttach 332
#define RPC_cuCtxDetach 333
#define RPC_cuModuleLoad 334
#define RPC_cuModuleLoadData 335
#define RPC_cuModuleLoadDataEx 336
#define RPC_cuModuleLoadFatBinary 337
#define RPC_cuModuleUnload 338
#define RPC_cuModuleGetLoadingMode 339
#define RPC_cuModuleGetFunction 340
#define RPC_cuModuleGetGlobal_v2 341
#define RPC_cuLinkCreate_v2 342
#define RPC_cuLinkAddData_v2 343
#define RPC_cuLinkAddFile_v2 344
#define RPC_cuLinkComplete 345
#define RPC_cuLinkDestroy 346
#define RPC_cuModuleGetTexRef 347
#define RPC_cuModuleGetSurfRef 348
#define RPC_cuLibraryLoadData 349
#define RPC_cuLibraryLoadFromFile 350
#define RPC_cuLibraryUnload 351
#define RPC_cuLibraryGetKernel 352
#define RPC_cuLibraryGetModule 353
#define RPC_cuKernelGetFunction 354
#define RPC_cuLibraryGetGlobal 355
#define RPC_cuLibraryGetManaged 356
#define RPC_cuLibraryGetUnifiedFunction 357
#define RPC_cuKernelGetAttribute 358
#define RPC_cuKernelSetAttribute 359
#define RPC_cuKernelSetCacheConfig 360
#define RPC_cuMemGetInfo_v2 361
#define RPC_cuMemAlloc_v2 362
#define RPC_cuMemAllocPitch_v2 363
#define RPC_cuMemFree_v2 364
#define RPC_cuMemGetAddressRange_v2 365
#define RPC_cuMemAllocHost_v2 366
#define RPC_cuMemFreeHost 367
#define RPC_cuMemHostAlloc 368
#define RPC_cuMemHostGetDevicePointer_v2 369
#define RPC_cuMemHostGetFlags 370
#define RPC_cuMemAllocManaged 371
#define RPC_cuDeviceGetByPCIBusId 372
#define RPC_cuDeviceGetPCIBusId 373
#define RPC_cuIpcGetEventHandle 374
#define RPC_cuIpcOpenEventHandle 375
#define RPC_cuIpcGetMemHandle 376
#define RPC_cuIpcOpenMemHandle_v2 377
#define RPC_cuIpcCloseMemHandle 378
#define RPC_cuMemHostRegister_v2 379
#define RPC_cuMemHostUnregister 380
#define RPC_cuMemcpy 381
#define RPC_cuMemcpyPeer 382
#define RPC_cuMemcpyHtoD_v2 383
#define RPC_cuMemcpyDtoH_v2 384
#define RPC_cuMemcpyDtoD_v2 385
#define RPC_cuMemcpyDtoA_v2 386
#define RPC_cuMemcpyAtoD_v2 387
#define RPC_cuMemcpyHtoA_v2 388
#define RPC_cuMemcpyAtoH_v2 389
#define RPC_cuMemcpyAtoA_v2 390
#define RPC_cuMemcpy2D_v2 391
#define RPC_cuMemcpy2DUnaligned_v2 392
#define RPC_cuMemcpy3D_v2 393
#define RPC_cuMemcpy3DPeer 394
#define RPC_cuMemcpyAsync 395
#define RPC_cuMemcpyPeerAsync 396
#define RPC_cuMemcpyHtoDAsync_v2 397
#define RPC_cuMemcpyDtoHAsync_v2 398
#define RPC_cuMemcpyDtoDAsync_v2 399
#define RPC_cuMemcpyHtoAAsync_v2 400
#define RPC_cuMemcpyAtoHAsync_v2 401
#define RPC_cuMemcpy2DAsync_v2 402
#define RPC_cuMemcpy3DAsync_v2 403
#define RPC_cuMemcpy3DPeerAsync 404
#define RPC_cuMemsetD8_v2 405
#define RPC_cuMemsetD16_v2 406
#define RPC_cuMemsetD32_v2 407
#define RPC_cuMemsetD2D8_v2 408
#define RPC_cuMemsetD2D16_v2 409
#define RPC_cuMemsetD2D32_v2 410
#define RPC_cuMemsetD8Async 411
#define RPC_cuMemsetD16Async 412
#define RPC_cuMemsetD32Async 413
#define RPC_cuMemsetD2D8Async 414
#define RPC_cuMemsetD2D16Async 415
#define RPC_cuMemsetD2D32Async 416
#define RPC_cuArrayCreate_v2 417
#define RPC_cuArrayGetDescriptor_v2 418
#define RPC_cuArrayGetSparseProperties 419
#define RPC_cuMipmappedArrayGetSparseProperties 420
#define RPC_cuArrayGetMemoryRequirements 421
#define RPC_cuMipmappedArrayGetMemoryRequirements 422
#define RPC_cuArrayGetPlane 423
#define RPC_cuArrayDestroy 424
#define RPC_cuArray3DCreate_v2 425
#define RPC_cuArray3DGetDescriptor_v2 426
#define RPC_cuMipmappedArrayCreate 427
#define RPC_cuMipmappedArrayGetLevel 428
#define RPC_cuMipmappedArrayDestroy 429
#define RPC_cuMemGetHandleForAddressRange 430
#define RPC_cuMemAddressReserve 431
#define RPC_cuMemAddressFree 432
#define RPC_cuMemCreate 433
#define RPC_cuMemRelease 434
#define RPC_cuMemMap 435
#define RPC_cuMemMapArrayAsync 436
#define RPC_cuMemUnmap 437
#define RPC_cuMemSetAccess 438
#define RPC_cuMemGetAccess 439
#define RPC_cuMemExportToShareableHandle 440
#define RPC_cuMemImportFromShareableHandle 441
#define RPC_cuMemGetAllocationGranularity 442
#define RPC_cuMemGetAllocationPropertiesFromHandle 443
#define RPC_cuMemRetainAllocationHandle 444
#define RPC_cuMemFreeAsync 445
#define RPC_cuMemAllocAsync 446
#define RPC_cuMemPoolTrimTo 447
#define RPC_cuMemPoolSetAttribute 448
#define RPC_cuMemPoolGetAttribute 449
#define RPC_cuMemPoolSetAccess 450
#define RPC_cuMemPoolGetAccess 451
#define RPC_cuMemPoolCreate 452
#define RPC_cuMemPoolDestroy 453
#define RPC_cuMemAllocFromPoolAsync 454
#define RPC_cuMemPoolExportToShareableHandle 455
#define RPC_cuMemPoolImportFromShareableHandle 456
#define RPC_cuMemPoolExportPointer 457
#define RPC_cuMemPoolImportPointer 458
#define RPC_cuPointerGetAttribute 459
#define RPC_cuMemPrefetchAsync 460
#define RPC_cuMemAdvise 461
#define RPC_cuMemRangeGetAttribute 462
#define RPC_cuMemRangeGetAttributes 463
#define RPC_cuPointerSetAttribute 464
#define RPC_cuPointerGetAttributes 465
#define RPC_cuStreamCreate 466
#define RPC_cuStreamCreateWithPriority 467
#define RPC_cuStreamGetPriority 468
#define RPC_cuStreamGetFlags 469
#define RPC_cuStreamGetId 470
#define RPC_cuStreamGetCtx 471
#define RPC_cuStreamWaitEvent 472
#define RPC_cuStreamAddCallback 473
#define RPC_cuStreamBeginCapture_v2 474
#define RPC_cuThreadExchangeStreamCaptureMode 475
#define RPC_cuStreamEndCapture 476
#define RPC_cuStreamIsCapturing 477
#define RPC_cuStreamGetCaptureInfo_v2 478
#define RPC_cuStreamUpdateCaptureDependencies 479
#define RPC_cuStreamAttachMemAsync 480
#define RPC_cuStreamQuery 481
#define RPC_cuStreamSynchronize 482
#define RPC_cuStreamDestroy_v2 483
#define RPC_cuStreamCopyAttributes 484
#define RPC_cuStreamGetAttribute 485
#define RPC_cuStreamSetAttribute 486
#define RPC_cuEventCreate 487
#define RPC_cuEventRecord 488
#define RPC_cuEventRecordWithFlags 489
#define RPC_cuEventQuery 490
#define RPC_cuEventSynchronize 491
#define RPC_cuEventDestroy_v2 492
#define RPC_cuEventElapsedTime 493
#define RPC_cuImportExternalMemory 494
#define RPC_cuExternalMemoryGetMappedBuffer 495
#define RPC_cuExternalMemoryGetMappedMipmappedArray 496
#define RPC_cuDestroyExternalMemory 497
#define RPC_cuImportExternalSemaphore 498
#define RPC_cuSignalExternalSemaphoresAsync 499
#define RPC_cuWaitExternalSemaphoresAsync 500
#define RPC_cuDestroyExternalSemaphore 501
#define RPC_cuStreamWaitValue32_v2 502
#define RPC_cuStreamWaitValue64_v2 503
#define RPC_cuStreamWriteValue32_v2 504
#define RPC_cuStreamWriteValue64_v2 505
#define RPC_cuStreamBatchMemOp_v2 506
#define RPC_cuFuncGetAttribute 507
#define RPC_cuFuncSetAttribute 508
#define RPC_cuFuncSetCacheConfig 509
#define RPC_cuFuncSetSharedMemConfig 510
#define RPC_cuFuncGetModule 511
#define RPC_cuLaunchKernel 512
#define RPC_cuLaunchKernelEx 513
#define RPC_cuLaunchCooperativeKernel 514
#define RPC_cuLaunchCooperativeKernelMultiDevice 515
#define RPC_cuLaunchHostFunc 516
#define RPC_cuFuncSetBlockShape 517
#define RPC_cuFuncSetSharedSize 518
#define RPC_cuParamSetSize 519
#define RPC_cuParamSeti 520
#define RPC_cuParamSetf 521
#define RPC_cuParamSetv 522
#define RPC_cuLaunch 523
#define RPC_cuLaunchGrid 524
#define RPC_cuLaunchGridAsync 525
#define RPC_cuParamSetTexRef 526
#define RPC_cuGraphCreate 527
#define RPC_cuGraphAddKernelNode_v2 528
#define RPC_cuGraphKernelNodeGetParams_v2 529
#define RPC_cuGraphKernelNodeSetParams_v2 530
#define RPC_cuGraphAddMemcpyNode 531
#define RPC_cuGraphMemcpyNodeGetParams 532
#define RPC_cuGraphMemcpyNodeSetParams 533
#define RPC_cuGraphAddMemsetNode 534
#define RPC_cuGraphMemsetNodeGetParams 535
#define RPC_cuGraphMemsetNodeSetParams 536
#define RPC_cuGraphAddHostNode 537
#define RPC_cuGraphHostNodeGetParams 538
#define RPC_cuGraphHostNodeSetParams 539
#define RPC_cuGraphAddChildGraphNode 540
#define RPC_cuGraphChildGraphNodeGetGraph 541
#define RPC_cuGraphAddEmptyNode 542
#define RPC_cuGraphAddEventRecordNode 543
#define RPC_cuGraphEventRecordNodeGetEvent 544
#define RPC_cuGraphEventRecordNodeSetEvent 545
#define RPC_cuGraphAddEventWaitNode 546
#define RPC_cuGraphEventWaitNodeGetEvent 547
#define RPC_cuGraphEventWaitNodeSetEvent 548
#define RPC_cuGraphAddExternalSemaphoresSignalNode 549
#define RPC_cuGraphExternalSemaphoresSignalNodeGetParams 550
#define RPC_cuGraphExternalSemaphoresSignalNodeSetParams 551
#define RPC_cuGraphAddExternalSemaphoresWaitNode 552
#define RPC_cuGraphExternalSemaphoresWaitNodeGetParams 553
#define RPC_cuGraphExternalSemaphoresWaitNodeSetParams 554
#define RPC_cuGraphAddBatchMemOpNode 555
#define RPC_cuGraphBatchMemOpNodeGetParams 556
#define RPC_cuGraphBatchMemOpNodeSetParams 557
#define RPC_cuGraphExecBatchMemOpNodeSetParams 558
#define RPC_cuGraphAddMemAllocNode 559
#define RPC_cuGraphMemAllocNodeGetParams 560
#define RPC_cuGraphAddMemFreeNode 561
#define RPC_cuGraphMemFreeNodeGetParams 562
#define RPC_cuDeviceGraphMemTrim 563
#define RPC_cuDeviceGetGraphMemAttribute 564
#define RPC_cuDeviceSetGraphMemAttribute 565
#define RPC_cuGraphClone 566
#define RPC_cuGraphNodeFindInClone 567
#define RPC_cuGraphNodeGetType 568
#define RPC_cuGraphGetNodes 569
#define RPC_cuGraphGetRootNodes 570
#define RPC_cuGraphGetEdges 571
#define RPC_cuGraphNodeGetDependencies 572
#define RPC_cuGraphNodeGetDependentNodes 573
#define RPC_cuGraphAddDependencies 574
#define RPC_cuGraphRemoveDependencies 575
#define RPC_cuGraphDestroyNode 576
#define RPC_cuGraphInstantiateWithFlags 577
#define RPC_cuGraphInstantiateWithParams 578
#define RPC_cuGraphExecGetFlags 579
#define RPC_cuGraphExecKernelNodeSetParams_v2 580
#define RPC_cuGraphExecMemcpyNodeSetParams 581
#define RPC_cuGraphExecMemsetNodeSetParams 582
#define RPC_cuGraphExecHostNodeSetParams 583
#define RPC_cuGraphExecChildGraphNodeSetParams 584
#define RPC_cuGraphExecEventRecordNodeSetEvent 585
#define RPC_cuGraphExecEventWaitNodeSetEvent 586
#define RPC_cuGraphExecExternalSemaphoresSignalNodeSetParams 587
#define RPC_cuGraphExecExternalSemaphoresWaitNodeSetParams 588
#define RPC_cuGraphNodeSetEnabled 589
#define RPC_cuGraphNodeGetEnabled 590
#define RPC_cuGraphUpload 591
#define RPC_cuGraphLaunch 592
#define RPC_cuGraphExecDestroy 593
#define RPC_cuGraphDestroy 594
#define RPC_cuGraphExecUpdate_v2 595
#define RPC_cuGraphKernelNodeCopyAttributes 596
#define RPC_cuGraphKernelNodeGetAttribute 597
#define RPC_cuGraphKernelNodeSetAttribute 598
#define RPC_cuGraphDebugDotPrint 599
#define RPC_cuUserObjectCreate 600
#define RPC_cuUserObjectRetain 601
#define RPC_cuUserObjectRelease 602
#define RPC_cuGraphRetainUserObject 603
#define RPC_cuGraphReleaseUserObject 604
#define RPC_cuOccupancyMaxActiveBlocksPerMultiprocessor 605
#define RPC_cuOccupancyMaxActiveBlocksPerMultiprocessorWithFlags 606
#define RPC_cuOccupancyAvailableDynamicSMemPerBlock 607
#define RPC_cuOccupancyMaxPotentialClusterSize 608
#define RPC_cuOccupancyMaxActiveClusters 609
#define RPC_cuTexRefSetArray 610
#define RPC_cuTexRefSetMipmappedArray 611
#define RPC_cuTexRefSetAddress_v2 612
#define RPC_cuTexRefSetAddress2D_v3 613
#define RPC_cuTexRefSetFormat 614
#define RPC_cuTexRefSetAddressMode 615
#define RPC_cuTexRefSetFilterMode 616
#define RPC_cuTexRefSetMipmapFilterMode 617
#define RPC_cuTexRefSetMipmapLevelBias 618
#define RPC_cuTexRefSetMipmapLevelClamp 619
#define RPC_cuTexRefSetMaxAnisotropy 620
#define RPC_cuTexRefSetBorderColor 621
#define RPC_cuTexRefSetFlags 622
#define RPC_cuTexRefGetAddress_v2 623
#define RPC_cuTexRefGetArray 624
#define RPC_cuTexRefGetMipmappedArray 625
#define RPC_cuTexRefGetAddressMode 626
#define RPC_cuTexRefGetFilterMode 627
#define RPC_cuTexRefGetFormat 628
#define RPC_cuTexRefGetMipmapFilterMode 629
#define RPC_cuTexRefGetMipmapLevelBias 630
#define RPC_cuTexRefGetMipmapLevelClamp 631
#define RPC_cuTexRefGetMaxAnisotropy 632
#define RPC_cuTexRefGetBorderColor 633
#define RPC_cuTexRefGetFlags 634
#define RPC_cuTexRefCreate 635
#define RPC_cuTexRefDestroy 636
#define RPC_cuSurfRefSetArray 637
#define RPC_cuSurfRefGetArray 638
#define RPC_cuTexObjectCreate 639
#define RPC_cuTexObjectDestroy 640
#define RPC_cuTexObjectGetResourceDesc 641
#define RPC_cuTexObjectGetTextureDesc 642
#define RPC_cuTexObjectGetResourceViewDesc 643
#define RPC_cuSurfObjectCreate 644
#define RPC_cuSurfObjectDestroy 645
#define RPC_cuSurfObjectGetResourceDesc 646
#define RPC_cuTensorMapEncodeTiled 647
#define RPC_cuTensorMapEncodeIm2col 648
#define RPC_cuTensorMapReplaceAddress 649
#define RPC_cuDeviceCanAccessPeer 650
#define RPC_cuCtxEnablePeerAccess 651
#define RPC_cuCtxDisablePeerAccess 652
#define RPC_cuDeviceGetP2PAttribute 653
#define RPC_cuGraphicsUnregisterResource 654
#define RPC_cuGraphicsSubResourceGetMappedArray 655
#define RPC_cuGraphicsResourceGetMappedMipmappedArray 656
#define RPC_cuGraphicsResourceGetMappedPointer_v2 657
#define RPC_cuGraphicsResourceSetMapFlags_v2 658
#define RPC_cuGraphicsMapResources 659
#define RPC_cuGraphicsUnmapResources 660
#define RPC_cuGetProcAddress_v2 661
#define RPC_cuGetExportTable 662
#define RPC_cudaDeviceReset 663
#define RPC_cudaDeviceSynchronize 664
#define RPC_cudaDeviceSetLimit 665
#define RPC_cudaDeviceGetLimit 666
#define RPC_cudaDeviceGetTexture1DLinearMaxWidth 667
#define RPC_cudaDeviceGetCacheConfig 668
#define RPC_cudaDeviceGetStreamPriorityRange 669
#define RPC_cudaDeviceSetCacheConfig 670
#define RPC_cudaDeviceGetSharedMemConfig 671
#define RPC_cudaDeviceSetSharedMemConfig 672
#define RPC_cudaDeviceGetByPCIBusId 673
#define RPC_cudaDeviceGetPCIBusId 674
#define RPC_cudaIpcGetEventHandle 675
#define RPC_cudaIpcOpenEventHandle 676
#define RPC_cudaIpcGetMemHandle 677
#define RPC_cudaIpcOpenMemHandle 678
#define RPC_cudaIpcCloseMemHandle 679
#define RPC_cudaDeviceFlushGPUDirectRDMAWrites 680
#define RPC_cudaThreadExit 681
#define RPC_cudaThreadSynchronize 682
#define RPC_cudaThreadSetLimit 683
#define RPC_cudaThreadGetLimit 684
#define RPC_cudaThreadGetCacheConfig 685
#define RPC_cudaThreadSetCacheConfig 686
#define RPC_cudaGetLastError 687
#define RPC_cudaPeekAtLastError 688
#define RPC_cudaGetDeviceCount 689
#define RPC_cudaGetDeviceProperties_v2 690
#define RPC_cudaDeviceGetAttribute 691
#define RPC_cudaDeviceGetDefaultMemPool 692
#define RPC_cudaDeviceSetMemPool 693
#define RPC_cudaDeviceGetMemPool 694
#define RPC_cudaDeviceGetNvSciSyncAttributes 695
#define RPC_cudaDeviceGetP2PAttribute 696
#define RPC_cudaChooseDevice 697
#define RPC_cudaInitDevice 698
#define RPC_cudaSetDevice 699
#define RPC_cudaGetDevice 700
#define RPC_cudaSetValidDevices 701
#define RPC_cudaSetDeviceFlags 702
#define RPC_cudaGetDeviceFlags 703
#define RPC_cudaStreamCreate 704
#define RPC_cudaStreamCreateWithFlags 705
#define RPC_cudaStreamCreateWithPriority 706
#define RPC_cudaStreamGetPriority 707
#define RPC_cudaStreamGetFlags 708
#define RPC_cudaStreamGetId 709
#define RPC_cudaCtxResetPersistingL2Cache 710
#define RPC_cudaStreamCopyAttributes 711
#define RPC_cudaStreamGetAttribute 712
#define RPC_cudaStreamSetAttribute 713
#define RPC_cudaStreamDestroy 714
#define RPC_cudaStreamWaitEvent 715
#define RPC_cudaStreamAddCallback 716
#define RPC_cudaStreamSynchronize 717
#define RPC_cudaStreamQuery 718
#define RPC_cudaStreamAttachMemAsync 719
#define RPC_cudaStreamBeginCapture 720
#define RPC_cudaThreadExchangeStreamCaptureMode 721
#define RPC_cudaStreamEndCapture 722
#define RPC_cudaStreamIsCapturing 723
#define RPC_cudaStreamGetCaptureInfo_v2 724
#define RPC_cudaStreamUpdateCaptureDependencies 725
#define RPC_cudaEventCreate 726
#define RPC_cudaEventCreateWithFlags 727
#define RPC_cudaEventRecord 728
#define RPC_cudaEventRecordWithFlags 729
#define RPC_cudaEventQuery 730
#define RPC_cudaEventSynchronize 731
#define RPC_cudaEventDestroy 732
#define RPC_cudaEventElapsedTime 733
#define RPC_cudaImportExternalMemory 734
#define RPC_cudaExternalMemoryGetMappedBuffer 735
#define RPC_cudaExternalMemoryGetMappedMipmappedArray 736
#define RPC_cudaDestroyExternalMemory 737
#define RPC_cudaImportExternalSemaphore 738
#define RPC_cudaSignalExternalSemaphoresAsync_v2 739
#define RPC_cudaWaitExternalSemaphoresAsync_v2 740
#define RPC_cudaDestroyExternalSemaphore 741
#define RPC_cudaLaunchKernel 742
#define RPC_cudaLaunchKernelExC 743
#define RPC_cudaLaunchCooperativeKernel 744
#define RPC_cudaLaunchCooperativeKernelMultiDevice 745
#define RPC_cudaFuncSetCacheConfig 746
#define RPC_cudaFuncSetSharedMemConfig 747
#define RPC_cudaFuncGetAttributes 748
#define RPC_cudaFuncSetAttribute 749
#define RPC_cudaSetDoubleForDevice 750
#define RPC_cudaSetDoubleForHost 751
#define RPC_cudaLaunchHostFunc 752
#define RPC_cudaOccupancyMaxActiveBlocksPerMultiprocessor 753
#define RPC_cudaOccupancyAvailableDynamicSMemPerBlock 754
#define RPC_cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags 755
#define RPC_cudaOccupancyMaxPotentialClusterSize 756
#define RPC_cudaOccupancyMaxActiveClusters 757
#define RPC_cudaMallocManaged 758
#define RPC_cudaMalloc 759
#define RPC_cudaMallocHost 760
#define RPC_cudaMallocPitch 761
#define RPC_cudaMallocArray 762
#define RPC_cudaFree 763
#define RPC_cudaFreeHost 764
#define RPC_cudaFreeArray 765
#define RPC_cudaFreeMipmappedArray 766
#define RPC_cudaHostAlloc 767
#define RPC_cudaHostRegister 768
#define RPC_cudaHostUnregister 769
#define RPC_cudaHostGetDevicePointer 770
#define RPC_cudaHostGetFlags 771
#define RPC_cudaMalloc3D 772
#define RPC_cudaMalloc3DArray 773
#define RPC_cudaMallocMipmappedArray 774
#define RPC_cudaGetMipmappedArrayLevel 775
#define RPC_cudaMemcpy3D 776
#define RPC_cudaMemcpy3DPeer 777
#define RPC_cudaMemcpy3DAsync 778
#define RPC_cudaMemcpy3DPeerAsync 779
#define RPC_cudaMemGetInfo 780
#define RPC_cudaArrayGetInfo 781
#define RPC_cudaArrayGetPlane 782
#define RPC_cudaArrayGetMemoryRequirements 783
#define RPC_cudaMipmappedArrayGetMemoryRequirements 784
#define RPC_cudaArrayGetSparseProperties 785
#define RPC_cudaMipmappedArrayGetSparseProperties 786
#define RPC_cudaMemcpy 787
#define RPC_cudaMemcpyPeer 788
#define RPC_cudaMemcpy2D 789
#define RPC_cudaMemcpy2DToArray 790
#define RPC_cudaMemcpy2DFromArray 791
#define RPC_cudaMemcpy2DArrayToArray 792
#define RPC_cudaMemcpyToSymbol 793
#define RPC_cudaMemcpyFromSymbol 794
#define RPC_cudaMemcpyAsync 795
#define RPC_cudaMemcpyPeerAsync 796
#define RPC_cudaMemcpy2DAsync 797
#define RPC_cudaMemcpy2DToArrayAsync 798
#define RPC_cudaMemcpy2DFromArrayAsync 799
#define RPC_cudaMemcpyToSymbolAsync 800
#define RPC_cudaMemcpyFromSymbolAsync 801
#define RPC_cudaMemset 802
#define RPC_cudaMemset2D 803
#define RPC_cudaMemset3D 804
#define RPC_cudaMemsetAsync 805
#define RPC_cudaMemset2DAsync 806
#define RPC_cudaMemset3DAsync 807
#define RPC_cudaGetSymbolAddress 808
#define RPC_cudaGetSymbolSize 809
#define RPC_cudaMemPrefetchAsync 810
#define RPC_cudaMemAdvise 811
#define RPC_cudaMemRangeGetAttribute 812
#define RPC_cudaMemRangeGetAttributes 813
#define RPC_cudaMemcpyToArray 814
#define RPC_cudaMemcpyFromArray 815
#define RPC_cudaMemcpyArrayToArray 816
#define RPC_cudaMemcpyToArrayAsync 817
#define RPC_cudaMemcpyFromArrayAsync 818
#define RPC_cudaMallocAsync 819
#define RPC_cudaFreeAsync 820
#define RPC_cudaMemPoolTrimTo 821
#define RPC_cudaMemPoolSetAttribute 822
#define RPC_cudaMemPoolGetAttribute 823
#define RPC_cudaMemPoolSetAccess 824
#define RPC_cudaMemPoolGetAccess 825
#define RPC_cudaMemPoolCreate 826
#define RPC_cudaMemPoolDestroy 827
#define RPC_cudaMallocFromPoolAsync 828
#define RPC_cudaMemPoolExportToShareableHandle 829
#define RPC_cudaMemPoolImportFromShareableHandle 830
#define RPC_cudaMemPoolExportPointer 831
#define RPC_cudaMemPoolImportPointer 832
#define RPC_cudaPointerGetAttributes 833
#define RPC_cudaDeviceCanAccessPeer 834
#define RPC_cudaDeviceEnablePeerAccess 835
#define RPC_cudaDeviceDisablePeerAccess 836
#define RPC_cudaGraphicsUnregisterResource 837
#define RPC_cudaGraphicsResourceSetMapFlags 838
#define RPC_cudaGraphicsMapResources 839
#define RPC_cudaGraphicsUnmapResources 840
#define RPC_cudaGraphicsResourceGetMappedPointer 841
#define RPC_cudaGraphicsSubResourceGetMappedArray 842
#define RPC_cudaGraphicsResourceGetMappedMipmappedArray 843
#define RPC_cudaGetChannelDesc 844
#define RPC_cudaCreateTextureObject 845
#define RPC_cudaDestroyTextureObject 846
#define RPC_cudaGetTextureObjectResourceDesc 847
#define RPC_cudaGetTextureObjectTextureDesc 848
#define RPC_cudaGetTextureObjectResourceViewDesc 849
#define RPC_cudaCreateSurfaceObject 850
#define RPC_cudaDestroySurfaceObject 851
#define RPC_cudaGetSurfaceObjectResourceDesc 852
#define RPC_cudaDriverGetVersion 853
#define RPC_cudaRuntimeGetVersion 854
#define RPC_cudaGraphCreate 855
#define RPC_cudaGraphAddKernelNode 856
#define RPC_cudaGraphKernelNodeGetParams 857
#define RPC_cudaGraphKernelNodeSetParams 858
#define RPC_cudaGraphKernelNodeCopyAttributes 859
#define RPC_cudaGraphKernelNodeGetAttribute 860
#define RPC_cudaGraphKernelNodeSetAttribute 861
#define RPC_cudaGraphAddMemcpyNode 862
#define RPC_cudaGraphAddMemcpyNodeToSymbol 863
#define RPC_cudaGraphAddMemcpyNodeFromSymbol 864
#define RPC_cudaGraphAddMemcpyNode1D 865
#define RPC_cudaGraphMemcpyNodeGetParams 866
#define RPC_cudaGraphMemcpyNodeSetParams 867
#define RPC_cudaGraphMemcpyNodeSetParamsToSymbol 868
#define RPC_cudaGraphMemcpyNodeSetParamsFromSymbol 869
#define RPC_cudaGraphMemcpyNodeSetParams1D 870
#define RPC_cudaGraphAddMemsetNode 871
#define RPC_cudaGraphMemsetNodeGetParams 872
#define RPC_cudaGraphMemsetNodeSetParams 873
#define RPC_cudaGraphAddHostNode 874
#define RPC_cudaGraphHostNodeGetParams 875
#define RPC_cudaGraphHostNodeSetParams 876
#define RPC_cudaGraphAddChildGraphNode 877
#define RPC_cudaGraphChildGraphNodeGetGraph 878
#define RPC_cudaGraphAddEmptyNode 879
#define RPC_cudaGraphAddEventRecordNode 880
#define RPC_cudaGraphEventRecordNodeGetEvent 881
#define RPC_cudaGraphEventRecordNodeSetEvent 882
#define RPC_cudaGraphAddEventWaitNode 883
#define RPC_cudaGraphEventWaitNodeGetEvent 884
#define RPC_cudaGraphEventWaitNodeSetEvent 885
#define RPC_cudaGraphAddExternalSemaphoresSignalNode 886
#define RPC_cudaGraphExternalSemaphoresSignalNodeGetParams 887
#define RPC_cudaGraphExternalSemaphoresSignalNodeSetParams 888
#define RPC_cudaGraphAddExternalSemaphoresWaitNode 889
#define RPC_cudaGraphExternalSemaphoresWaitNodeGetParams 890
#define RPC_cudaGraphExternalSemaphoresWaitNodeSetParams 891
#define RPC_cudaGraphAddMemAllocNode 892
#define RPC_cudaGraphMemAllocNodeGetParams 893
#define RPC_cudaGraphAddMemFreeNode 894
#define RPC_cudaGraphMemFreeNodeGetParams 895
#define RPC_cudaDeviceGraphMemTrim 896
#define RPC_cudaDeviceGetGraphMemAttribute 897
#define RPC_cudaDeviceSetGraphMemAttribute 898
#define RPC_cudaGraphClone 899
#define RPC_cudaGraphNodeFindInClone 900
#define RPC_cudaGraphNodeGetType 901
#define RPC_cudaGraphGetNodes 902
#define RPC_cudaGraphGetRootNodes 903
#define RPC_cudaGraphGetEdges 904
#define RPC_cudaGraphNodeGetDependencies 905
#define RPC_cudaGraphNodeGetDependentNodes 906
#define RPC_cudaGraphAddDependencies 907
#define RPC_cudaGraphRemoveDependencies 908
#define RPC_cudaGraphDestroyNode 909
#define RPC_cudaGraphInstantiate 910
#define RPC_cudaGraphInstantiateWithFlags 911
#define RPC_cudaGraphInstantiateWithParams 912
#define RPC_cudaGraphExecGetFlags 913
#define RPC_cudaGraphExecKernelNodeSetParams 914
#define RPC_cudaGraphExecMemcpyNodeSetParams 915
#define RPC_cudaGraphExecMemcpyNodeSetParamsToSymbol 916
#define RPC_cudaGraphExecMemcpyNodeSetParamsFromSymbol 917
#define RPC_cudaGraphExecMemcpyNodeSetParams1D 918
#define RPC_cudaGraphExecMemsetNodeSetParams 919
#define RPC_cudaGraphExecHostNodeSetParams 920
#define RPC_cudaGraphExecChildGraphNodeSetParams 921
#define RPC_cudaGraphExecEventRecordNodeSetEvent 922
#define RPC_cudaGraphExecEventWaitNodeSetEvent 923
#define RPC_cudaGraphExecExternalSemaphoresSignalNodeSetParams 924
#define RPC_cudaGraphExecExternalSemaphoresWaitNodeSetParams 925
#define RPC_cudaGraphNodeSetEnabled 926
#define RPC_cudaGraphNodeGetEnabled 927
#define RPC_cudaGraphExecUpdate 928
#define RPC_cudaGraphUpload 929
#define RPC_cudaGraphLaunch 930
#define RPC_cudaGraphExecDestroy 931
#define RPC_cudaGraphDestroy 932
#define RPC_cudaGraphDebugDotPrint 933
#define RPC_cudaUserObjectCreate 934
#define RPC_cudaUserObjectRetain 935
#define RPC_cudaUserObjectRelease 936
#define RPC_cudaGraphRetainUserObject 937
#define RPC_cudaGraphReleaseUserObject 938
#define RPC_cudaGetDriverEntryPoint 939
#define RPC_cudaGetExportTable 940
#define RPC_cudaGetFuncBySymbol 941
