// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 3

// IsTraceEnabled @ 14d5b4b60

bool __cdecl UE::Cameras::FCameraSystemTrace::IsTraceEnabled(void)

{
  if ((!GGameplayCamerasDebugTrace) && (CameraSystemChannel->Enabled < 0)) {
    return false;
  }
  return true;
}

// ReadEvaluationTrace @ 14d5c9040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FCameraDebugBlock * __cdecl
UE::Cameras::FCameraSystemTrace::ReadEvaluationTrace
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,
          FCameraDebugBlockStorage *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ulonglong uVar3;
  FCameraDebugBlock *pFVar4;
  undefined1 auStackY_198 [32];
  FArchiveState local_168;
  undefined8 local_d8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_d0;
  undefined8 local_c8;
  undefined1 local_b8 [24];
  ForAnyElementType local_a0;
  undefined8 local_98;
  TBitArray<FDefaultBitArrayAllocator> local_90;
  undefined8 uStack_70;
  undefined1 local_68 [32];
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  void *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_168._padding_ = 0;
  local_168.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_168.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_168.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_168.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_168._40_8_ = 0;
  local_168.ArSerializingDefaults = 0;
  local_168.ArPortFlags = 0;
  local_168.ArMaxSerializeSize = 0;
  local_168.ArUEVer.FileVersionUE4 = 0;
  local_168.ArUEVer.FileVersionUE5 = 0;
  local_168.ArLicenseeUEVer = 0;
  local_168.ArEngineVer.Major = 0;
  local_168.ArEngineVer.Minor = 0;
  local_168.ArEngineVer.Patch = 0;
  local_168.ArEngineVer._6_2_ = 0;
  local_168.ArEngineVer.Changelist = 0;
  local_168.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_168.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_168.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_168.SerializedProperty = (FProperty *)0x0;
  local_168.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_168.bCustomVersionsAreReset = false;
  local_168._129_7_ = 0;
  local_168.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_168);
  local_168._padding_ = (longlong)&___7FMemoryReader__6B_;
  local_c8 = 0x7fffffffffffffff;
  local_d8 = 0;
  local_d0 = param_1;
  FArchiveState::SetIsLoading(&local_168,true);
  (**(code **)(local_168._padding_ + 0x108))(&local_168);
  local_b8._0_8_ = &local_168;
  local_b8._8_8_ = param_2;
  local_b8._16_8_ = FCameraObjectTypeRegistry::Get();
  local_90.NumBits = ___xmm_00000000ffffffff0000008000000000;
  local_90.MaxBits = _UNK_150631d94;
  uStack_70 = _UNK_150631d98;
  local_a0.Data = (FScriptContainerElement *)0x0;
  local_98 = 0;
  local_90.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = (void *)0x0;
  local_20 = 0;
  pFVar4 = FCameraDebugBlockReader::Read((FCameraDebugBlockReader *)local_b8);
  local_20 = 0;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Cameras::FCameraDebugBlock_*,UE::Cameras::FCameraDebugBlockReader::FRelatedIndices>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UE::Cameras::FCameraDebugBlock_*,UE::Cameras::FCameraDebugBlockReader::FRelatedIndices>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_68,0,local_68._8_4_);
  iVar2 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  uVar3 = local_98 >> 0x20;
  local_98 = local_98 & 0xffffffff00000000;
  if ((int)uVar3 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&local_a0,0,(int *)((longlong)&local_98 + 4));
  }
  iVar2 = local_90.MaxBits;
  uStack_70 = 0xffffffff;
  local_90._24_8_ = (ulonglong)(uint)local_90.MaxBits << 0x20;
  if (0x80 < (uint)iVar2) {
    local_90.NumBits = 0;
    local_90.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_90,0);
  }
  if (local_90.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_90.AllocatorInstance.SecondaryData);
  }
  if (local_a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data);
  }
  FArchive::~FArchive((FArchive *)&local_168);
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return pFVar4;
}

// TraceEvaluation @ 14d5d1040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Cameras::FCameraSystemTrace::TraceEvaluation
          (UWorld *param_1,FCameraSystemEvaluationResult *param_2,FRootCameraDebugBlock *param_3)

{
  longlong lVar1;
  LARGE_INTEGER LVar2;
  double dVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStackY_1b8 [32];
  LARGE_INTEGER local_188 [4];
  undefined1 local_168 [16];
  uchar *local_158;
  uchar *puStack_150;
  uchar *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  long64 lStack_130;
  FPackageFileVersion local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  FCustomVersionContainer *pFStack_110;
  FCustomPropertyListNode *local_108;
  FArchiveSavePackageData *pFStack_100;
  FProperty *local_f8;
  FArchiveSerializedPropertyChain *pFStack_f0;
  undefined8 local_e8;
  FArchiveState *pFStack_e0;
  undefined8 local_d8;
  uchar **local_d0;
  undefined8 local_c8;
  uchar *local_c0;
  undefined8 local_b8;
  undefined1 local_a8 [16];
  ForAnyElementType local_98;
  undefined8 local_90;
  TBitArray<FDefaultBitArrayAllocator> local_88;
  undefined4 local_68;
  undefined4 local_64;
  void *local_58;
  undefined4 local_50;
  LARGE_INTEGER *local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if ((GGameplayCamerasDebugTrace) || (-1 < CameraSystemChannel->Enabled)) {
    local_188[0].QuadPart = 0;
    local_168._0_8_ = 0;
    local_168._8_8_ = (FFastPathLoadBuffer *)0x0;
    local_158 = (uchar *)0x0;
    puStack_150 = (uchar *)0x0;
    local_148 = (uchar *)0x0;
    uStack_140 = 0;
    local_138._0_4_ = 0;
    local_138._4_4_ = 0;
    lStack_130 = 0;
    local_128.FileVersionUE4 = 0;
    local_128.FileVersionUE5 = 0;
    uStack_120._0_4_ = 0;
    uStack_120._4_2_ = 0;
    uStack_120._6_2_ = 0;
    local_118._0_2_ = 0;
    local_118._2_2_ = 0;
    local_118._4_4_ = 0;
    pFStack_110 = (FCustomVersionContainer *)0x0;
    local_108 = (FCustomPropertyListNode *)0x0;
    pFStack_100 = (FArchiveSavePackageData *)0x0;
    local_f8 = (FProperty *)0x0;
    pFStack_f0 = (FArchiveSerializedPropertyChain *)0x0;
    local_e8._0_1_ = false;
    local_e8._1_7_ = 0;
    pFStack_e0 = (FArchiveState *)0x0;
    FArchiveState::FArchiveState((FArchiveState *)local_168);
    local_d8 = 0;
    local_168._0_8_ = &___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_d0 = &local_c0;
    local_c8 = 0;
    FArchiveState::SetIsSaving((FArchiveState *)local_168,true);
    (**(code **)(local_168._0_8_ + 0x108))(local_168,0);
    local_c0 = (uchar *)0x0;
    local_168._0_8_ = &___7FBufferArchive__6B_;
    local_a8._0_8_ = local_168;
    local_b8 = 0;
    local_a8._8_8_ = FCameraObjectTypeRegistry::Get();
    local_98.Data = (FScriptContainerElement *)0x0;
    local_90 = 0;
    local_88.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_88.NumBits = 0;
    local_88.MaxBits = 0x80;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = (void *)0x0;
    local_50 = 0;
    FCameraDebugBlockWriter::Write((FCameraDebugBlockWriter *)local_a8,(FCameraDebugBlock *)param_3)
    ;
    if (-1 < CameraSystemChannel->Enabled) {
      Trace::Private::FLogScope::Enter<UE::Cameras::FCameraSystemCameraSystemEvaluationFields>
                ((TLogScope<1> *)&local_38);
      QueryPerformanceCounter(local_188);
      *local_38 = local_188[0];
      LVar2 = (LARGE_INTEGER)FObjectTrace::GetWorldElapsedTime(param_1);
      local_38[1] = LVar2;
      local_38[2].s.LowPart = (param_3->DebugID).Value;
      *(double *)((longlong)local_38 + 0x14) = (param_2->CameraPose).Location.field0_0x0._s_0.X;
      *(double *)((longlong)local_38 + 0x1c) = (param_2->CameraPose).Location.field0_0x0._s_0.Y;
      *(double *)((longlong)local_38 + 0x24) = (param_2->CameraPose).Location.field0_0x0._s_0.Z;
      *(double *)((longlong)local_38 + 0x34) = (param_2->CameraPose).Rotation.Yaw;
      *(double *)((longlong)local_38 + 0x2c) = (param_2->CameraPose).Rotation.Pitch;
      local_188[0] = (LARGE_INTEGER)(param_2->CameraPose).Rotation.Roll;
      ((LARGE_INTEGER *)((longlong)local_38 + 0x3c))->s = (_struct_19)local_188[0];
      dVar3 = FCameraPose::GetEffectiveFieldOfView
                        ((param_2->CameraPose).FocalLength,(param_2->CameraPose).FieldOfView,
                         (param_2->CameraPose).SensorWidth,(param_2->CameraPose).SensorHeight,
                         (param_2->CameraPose).SqueezeFactor,(param_2->CameraPose).Overscan);
      local_188[0].s.LowPart = (float)dVar3;
      *(float *)((longlong)local_38 + 0x44) = (float)dVar3;
      Trace::Private::Field_WriteAuxData(10,local_c0,(uint)local_b8 & 0x7ffff);
      lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar1 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar1 = *(longlong *)(lVar1 + 0x20);
      **(undefined1 **)(lVar1 + 0x20) = 6;
      lVar5 = *(longlong *)(lVar1 + 0x20) + 1;
      *(longlong *)(lVar1 + 0x20) = lVar5;
      if (lVar1 != local_30) {
        *(longlong *)(lVar1 + 0x28) = lVar5;
      }
      *(undefined8 *)(local_30 + 0x28) = *(undefined8 *)(local_30 + 0x20);
    }
    local_50 = 0;
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    uVar4 = local_90 >> 0x20;
    local_90 = local_90 & 0xffffffff00000000;
    if ((int)uVar4 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&local_98,0,(int *)((longlong)&local_90 + 4));
    }
    local_64 = 0;
    local_88.NumBits = 0;
    local_68 = 0xffffffff;
    if (0x80 < (uint)local_88.MaxBits) {
      local_88.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_88,0);
    }
    if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
    }
    if (local_98.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data);
    }
    if (local_c0 != (uchar *)0x0) {
      FMemory::Free(local_c0);
    }
    FArchive::~FArchive((FArchive *)local_168);
  }
  return;
}

