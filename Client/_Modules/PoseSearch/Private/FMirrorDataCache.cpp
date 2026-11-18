// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 8

// FMirrorDataCache @ 14a918f60

FMirrorDataCache * __thiscall
UE::PoseSearch::FMirrorDataCache::FMirrorDataCache(FMirrorDataCache *this,UMirrorDataTable *param_1)

{
  (this->MirrorDataTable).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&this->CompactPoseMirrorBones = 0;
  *(undefined8 *)&(this->CompactPoseMirrorBones).field_0x8 = 0;
  *(undefined8 *)&this->ComponentSpaceRefRotations = 0;
  *(undefined8 *)&(this->ComponentSpaceRefRotations).field_0x8 = 0;
  Init(this,param_1);
  return this;
}

// FMirrorDataCache @ 14a918fa0

/* WARNING: Enum "Type": Some values do not have unique names */

FMirrorDataCache * __thiscall
UE::PoseSearch::FMirrorDataCache::FMirrorDataCache
          (FMirrorDataCache *this,UMirrorDataTable *param_1,FBoneContainer *param_2)

{
  code *pcVar1;
  bool bVar2;
  FMirrorDataCache *pFVar3;
  UMirrorDataTable *this_00;
  UMirrorDataTable *local_res8;
  FName local_res10;
  FString local_28;
  
  (this->MirrorDataTable).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&this->CompactPoseMirrorBones = 0;
  *(undefined8 *)&(this->CompactPoseMirrorBones).field_0x8 = 0;
  *(undefined8 *)&this->ComponentSpaceRefRotations = 0;
  *(undefined8 *)&(this->ComponentSpaceRefRotations).field_0x8 = 0;
  if (param_1 != (UMirrorDataTable *)0x0) {
    if ((param_1->Skeleton).field0_0x0.DebugPtr != (USkeleton *)0x0) {
      bVar2 = FWeakObjectPtr::IsValid(&(param_2->Asset).WeakPtr);
      if ((((!bVar2) || (param_2->RefSkeleton == (FReferenceSkeleton *)0x0)) ||
          ((param_2->BoneIndicesArray).ArrayNum < 1)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("BoneContainer.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchMirrorDataCache.cpp"
                             ,0x3c,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FMirrorDataCache *)(*pcVar1)();
        return pFVar3;
      }
      local_res8 = param_1;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
      this_00 = (UMirrorDataTable *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
      UMirrorDataTable::FillCompactPoseAndComponentRefRotations
                (this_00,param_2,&this->CompactPoseMirrorBones,&this->ComponentSpaceRefRotations);
      return this;
    }
    if (1 < (byte)LogPoseSearch._0_1_) {
      local_res10 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res10,&local_28);
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  Reset(this);
  return this;
}

// FMirrorDataCache @ 14a9190f0

FMirrorDataCache * __thiscall
UE::PoseSearch::FMirrorDataCache::FMirrorDataCache(FMirrorDataCache *this)

{
  (this->MirrorDataTable).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&this->CompactPoseMirrorBones = 0;
  *(undefined8 *)&(this->CompactPoseMirrorBones).field_0x8 = 0;
  *(undefined8 *)&this->ComponentSpaceRefRotations = 0;
  *(undefined8 *)&(this->ComponentSpaceRefRotations).field_0x8 = 0;
  return this;
}

// Init @ 14a92e420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::PoseSearch::FMirrorDataCache::Init(FMirrorDataCache *this,UMirrorDataTable *param_1)

{
  USkeleton *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UMirrorDataTable *this_00;
  ForElementType<unsigned_short> FVar5;
  undefined1 auStackY_218 [32];
  UMirrorDataTable *local_1e8;
  FName local_1e0;
  FCurveFilterSettings local_1d8;
  FString local_1c8;
  TArrayView<unsigned_short_const_,int> local_1b8;
  ForElementType<unsigned_short> local_1a8;
  int local_198 [4];
  FBoneContainer local_188;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_218;
  if (param_1 != (UMirrorDataTable *)0x0) {
    if ((param_1->Skeleton).field0_0x0.DebugPtr != (USkeleton *)0x0) {
      local_1e8 = param_1;
      if (GC::GIsIncrementalReachabilityPending) {
        GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_1e8);
      local_198[1] = 1;
      local_1a8.SecondaryData = (ForElementType<unsigned_short>)0x0;
      local_198[0] = 0;
      iVar4 = Core::Private::
              ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>_>
                        (2,2,1,&local_1a8,local_198,local_198 + 1);
      FVar5 = (ForElementType<unsigned_short>)&local_1a8;
      if (local_1a8.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar5 = local_1a8.SecondaryData;
      }
      *(undefined2 *)((longlong)FVar5 + (longlong)iVar4 * 2) = 0;
      FBoneContainer::FBoneContainer(&local_188);
      local_1b8.ArrayNum = local_198[0];
      pUVar1 = (param_1->Skeleton).field0_0x0.DebugPtr;
      local_1b8.DataPtr = (ushort *)&local_1a8;
      if (local_1a8.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        local_1b8.DataPtr = (ushort *)local_1a8.SecondaryData;
      }
      local_1d8.FilterCurves = (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0;
      local_1d8.LODIndex = 0;
      local_1d8.FilterMode = DisallowAll;
      if ((local_198[0] < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FBoneContainer::InitializeTo(&local_188,&local_1b8,&local_1d8,(UObject *)pUVar1);
      this_00 = (UMirrorDataTable *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
      UMirrorDataTable::FillCompactPoseAndComponentRefRotations
                (this_00,&local_188,&this->CompactPoseMirrorBones,&this->ComponentSpaceRefRotations)
      ;
      FBoneContainer::~FBoneContainer(&local_188);
      if (local_1a8.SecondaryData == (ForElementType<unsigned_short>)0x0) {
        return;
      }
      FMemory::Free((void *)local_1a8.SecondaryData);
      return;
    }
    if (1 < (byte)LogPoseSearch._0_1_) {
      local_1e0 = (FName)param_1->_padding_;
      ::FName::ToString(&local_1e0,&local_1c8);
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
      if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
      }
    }
  }
  Reset(this);
  return;
}

// Init @ 14a92e630

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::PoseSearch::FMirrorDataCache::Init
          (FMirrorDataCache *this,UMirrorDataTable *param_1,FBoneContainer *param_2)

{
  code *pcVar1;
  bool bVar2;
  UMirrorDataTable *this_00;
  UMirrorDataTable *local_res10;
  FName local_res20;
  FString local_18;
  
  if (param_1 != (UMirrorDataTable *)0x0) {
    if ((param_1->Skeleton).field0_0x0.DebugPtr != (USkeleton *)0x0) {
      bVar2 = FWeakObjectPtr::IsValid(&(param_2->Asset).WeakPtr);
      if ((((!bVar2) || (param_2->RefSkeleton == (FReferenceSkeleton *)0x0)) ||
          ((param_2->BoneIndicesArray).ArrayNum < 1)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("BoneContainer.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchMirrorDataCache.cpp"
                             ,0x3c,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_res10 = param_1;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res10);
      this_00 = (UMirrorDataTable *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
      UMirrorDataTable::FillCompactPoseAndComponentRefRotations
                (this_00,param_2,&this->CompactPoseMirrorBones,&this->ComponentSpaceRefRotations);
      return;
    }
    if (1 < (byte)LogPoseSearch._0_1_) {
      local_res20 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res20,&local_18);
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  Reset(this);
  return;
}

// MirrorPose @ 14a930090

void __thiscall
UE::PoseSearch::FMirrorDataCache::MirrorPose(FMirrorDataCache *this,FCompactPose *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = TWeakObjectPtr<UMirrorDataTable_const_,FWeakObjectPtr>::UEOpEquals
                    (&this->MirrorDataTable,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    FAnimationRuntime::MirrorPose
              (param_1,(uint)*(byte *)(pUVar2 + 5),
               (TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> *)
               &this->CompactPoseMirrorBones,&this->ComponentSpaceRefRotations);
  }
  return;
}

// MirrorTransform @ 14a9300e0

TTransform<double> * __thiscall
UE::PoseSearch::FMirrorDataCache::MirrorTransform
          (FMirrorDataCache *this,TTransform<double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  byte bVar1;
  TQuat<double> *pTVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  bool bVar25;
  UObject *pUVar26;
  TTransform<double> *pTVar27;
  TQuat<double> *pTVar28;
  double dStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_140;
  TQuat<double> local_128;
  TQuat<double> local_108 [2];
  TQuat<double> local_c8 [6];
  
  bVar25 = TWeakObjectPtr<UMirrorDataTable_const_,FWeakObjectPtr>::UEOpEquals
                     (&this->MirrorDataTable,(void *)0x0);
  if (bVar25) {
    dVar6 = (param_1->Rotation).XY.m128d_f64[1];
    dVar7 = (param_1->Rotation).ZW.m128d_f64[0];
    dVar8 = (param_1->Rotation).ZW.m128d_f64[1];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar6;
    dVar6 = (param_1->Translation).XY.m128d_f64[0];
    dVar9 = (param_1->Translation).XY.m128d_f64[1];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar7;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar8;
    dVar7 = (param_1->Translation).ZW.m128d_f64[0];
    dVar8 = (param_1->Translation).ZW.m128d_f64[1];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar6;
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar9;
    dVar6 = (param_1->Scale3D).XY.m128d_f64[0];
    dVar9 = (param_1->Scale3D).XY.m128d_f64[1];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar7;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar8;
    dVar7 = (param_1->Scale3D).ZW.m128d_f64[0];
    dVar8 = (param_1->Scale3D).ZW.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar6;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar9;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar7;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar8;
  }
  else {
    pUVar26 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    bVar1 = *(byte *)(pUVar26 + 5);
    if (*(int *)&(this->ComponentSpaceRefRotations).field_0x8 < 1) {
      bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar25) {
        pcVar3 = (code *)swi(3);
        pTVar27 = (TTransform<double> *)(*pcVar3)();
        return pTVar27;
      }
    }
    local_140._s_0.X = (param_1->Translation).XY.m128d_f64[0];
    local_140._s_0.Y = (param_1->Translation).XY.m128d_f64[1];
    local_140._s_0.Z = (param_1->Translation).ZW.m128d_f64[0];
    pTVar2 = *(TQuat<double> **)&this->ComponentSpaceRefRotations;
    FAnimationRuntime::MirrorVector
              ((TVector<double> *)&local_158._s_0,(TVector<double> *)&local_140._s_0,(uint)bVar1);
    local_128.X = (param_1->Rotation).XY.m128d_f64[0];
    local_128.Y = (param_1->Rotation).XY.m128d_f64[1];
    local_128.Z = (param_1->Rotation).ZW.m128d_f64[0];
    local_128.W = (param_1->Rotation).ZW.m128d_f64[1];
    FAnimationRuntime::MirrorQuat(local_108,&local_128,(uint)bVar1);
    pTVar28 = FAnimationRuntime::MirrorQuat(local_c8,pTVar2,(uint)bVar1);
    dVar6 = pTVar28->Z * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar7 = pTVar28->W * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    dVar8 = pTVar28->X * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar9 = pTVar28->Y * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar20 = pTVar2->X;
    dVar21 = pTVar2->Y;
    dVar22 = pTVar2->Z;
    dVar23 = pTVar2->W;
    dVar18 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
    dVar19 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
    dVar16 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
    dVar17 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
    dVar12 = local_108[0].X * dVar7 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
             local_108[0].W * dVar8 +
             dVar6 * local_108[0].Y *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             dVar9 * local_108[0].Z *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar13 = local_108[0].X * dVar6 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             local_108[0].W * dVar9 +
             dVar7 * local_108[0].Y *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             dVar8 * local_108[0].Z *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    auVar4._8_4_ = SUB84(dVar13,0);
    auVar4._0_8_ = dVar13;
    auVar4._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    dVar14 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar15 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    dVar10 = local_108[0].X * dVar9 * dVar18 + local_108[0].W * dVar6 +
             dVar8 * local_108[0].Y * dVar16 + dVar7 * local_108[0].Z * dVar14;
    dVar7 = local_108[0].X * dVar8 * dVar19 + local_108[0].W * dVar7 +
            dVar9 * local_108[0].Y * dVar17 + dVar6 * local_108[0].Z * dVar15;
    local_168._0_4_ = SUB84(dVar10,0);
    local_168._4_4_ = (undefined4)((ulonglong)dVar10 >> 0x20);
    uStack_160._4_4_ = local_168._4_4_;
    uStack_160._0_4_ = (undefined4)local_168;
    local_168 = dVar10;
    dVar9 = (param_1->Scale3D).XY.m128d_f64[0];
    dVar24 = (param_1->Scale3D).XY.m128d_f64[1];
    dVar8 = (param_1->Scale3D).ZW.m128d_f64[0];
    dStack_170 = auVar4._8_8_;
    dVar6 = dVar12 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
            dVar21 * dVar7 +
            dVar23 * dStack_170 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
            uStack_160 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = dVar12 * dVar23 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]
                   + dVar20 * dVar7 +
                   dVar22 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]
                   + dVar10 * dVar21 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar5;
    dVar6 = dVar12 * dVar20 * dVar19 + dVar23 * dVar7 + dVar21 * dStack_170 * dVar17 +
            uStack_160 * dVar22 * dVar15;
    auVar11._8_4_ = SUB84(dVar6,0);
    auVar11._0_8_ =
         dVar12 * dVar21 * dVar18 + dVar22 * dVar7 + dVar20 * dVar13 * dVar16 +
         dVar10 * dVar23 * dVar14;
    auVar11._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar11;
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_158._s_0.X;
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_158._s_0.Y;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_158._s_0.Z;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar9;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar24;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar8;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = 0.0;
  }
  return __return_storage_ptr__;
}

// Reset @ 14a93aa40

void __thiscall UE::PoseSearch::FMirrorDataCache::Reset(FMirrorDataCache *this)

{
  undefined1 *puVar1;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->MirrorDataTable).WeakPtr = local_res8;
  puVar1 = &(this->CompactPoseMirrorBones).field_0xc;
  *(undefined4 *)&(this->CompactPoseMirrorBones).field_0x8 = 0;
  if (*(int *)puVar1 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&this->CompactPoseMirrorBones,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ComponentSpaceRefRotations).field_0x8 = 0;
  if (*(int *)&(this->ComponentSpaceRefRotations).field_0xc < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,0,(ForAnyElementType *)&this->ComponentSpaceRefRotations,0,
               (int *)&(this->ComponentSpaceRefRotations).field_0xc);
  }
  return;
}

