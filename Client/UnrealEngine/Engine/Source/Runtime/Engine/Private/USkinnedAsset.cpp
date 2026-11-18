// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 74

// GetDetailedInfoInternal @ 1485c4d20

FString * __thiscall
USkinnedAsset::GetDetailedInfoInternal(USkinnedAsset *this,FString *__return_storage_ptr__)

{
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,__return_storage_ptr__,(UObject *)0x0);
  return __return_storage_ptr__;
}

// IsCompiling @ 1485cde30

bool __thiscall USkinnedAsset::IsCompiling(USkinnedAsset *this)

{
  return false;
}

// StaticClass @ 1485dc190

UClass * __cdecl USkinnedAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USkinnedAsset.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SkinnedAsset",
               &Z_Registration_Info_UClass_USkinnedAsset.InnerSingleton,
               StaticRegisterNativesUSkinnedAsset,0xe8,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<USkinnedAsset>,
               InternalVTableHelperCtorCaller<USkinnedAsset>,aFStackX_8,
               UStreamableRenderAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USkinnedAsset.InnerSingleton;
}

// USkinnedAsset @ 1486966a0

USkinnedAsset * __thiscall USkinnedAsset::USkinnedAsset(USkinnedAsset *this,FVTableHelper *param_1)

{
  UStreamableRenderAsset::UStreamableRenderAsset((UStreamableRenderAsset *)this,param_1);
  *(undefined ***)this = &_vftable__for__UStreamableRenderAsset__;
  *(undefined ***)&this->field_0xe0 = &_vftable__for__IInterface_AsyncCompilation__;
  return this;
}

// USkinnedAsset @ 1486966e0

USkinnedAsset * __thiscall
USkinnedAsset::USkinnedAsset(USkinnedAsset *this,FObjectInitializer *param_1)

{
  UStreamableRenderAsset::UStreamableRenderAsset((UStreamableRenderAsset *)this,param_1);
  *(undefined ***)this = &_vftable__for__UStreamableRenderAsset__;
  *(undefined ***)&this->field_0xe0 = &_vftable__for__IInterface_AsyncCompilation__;
  return this;
}

// ~USkinnedAsset @ 14869b370

void __thiscall USkinnedAsset::~USkinnedAsset(USkinnedAsset *this)

{
  *(undefined ***)this = &_vftable__for__UStreamableRenderAsset__;
  *(undefined ***)&this->field_0xe0 = &___7IInterface_AsyncCompilation__6B_;
  UStreamableRenderAsset::~UStreamableRenderAsset((UStreamableRenderAsset *)this);
  return;
}

// AcquireAsyncProperty @ 1486a3e80

void __thiscall
USkinnedAsset::AcquireAsyncProperty
          (USkinnedAsset *this,ulong64 param_1,ESkinnedAssetAsyncPropertyLockType param_2)

{
  return;
}

// BeginPostLoadInternal @ 1486a6d20

void __thiscall
USkinnedAsset::BeginPostLoadInternal(USkinnedAsset *this,FSkinnedAssetPostLoadContext *param_1)

{
  return;
}

// ExecutePostLoadInternal @ 1486b40e0

void __thiscall
USkinnedAsset::ExecutePostLoadInternal(USkinnedAsset *this,FSkinnedAssetPostLoadContext *param_1)

{
  return;
}

// FillComponentSpaceTransforms @ 1486b5910

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
USkinnedAsset::FillComponentSpaceTransforms
          (USkinnedAsset *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  ushort uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  uint uVar33;
  int iVar34;
  FName *pFVar35;
  FThreadSafeStaticStat<FStat_STAT_FillComponentSpaceTransforms> FVar36;
  longlong lVar37;
  FReferenceSkeleton *this_00;
  FThreadSafeStaticStat<FStat_STAT_FillComponentSpaceTransforms_WorkerThread> *this_01;
  FName FVar38;
  TTransform<double> *pTVar39;
  longlong lVar40;
  wchar_t *pwVar41;
  uint uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  FColor_u_0 local_res10 [2];
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *local_res18;
  FScriptContainerElement *local_res20;
  undefined8 in_stack_fffffffffffffed8;
  undefined4 uVar54;
  undefined8 in_stack_fffffffffffffee0;
  FName local_e8;
  FScriptContainerElement *local_e0;
  FName local_d8;
  FName local_d0;
  FName local_c8;
  FName local_c0;
  
  uVar54 = (undefined4)((ulonglong)in_stack_fffffffffffffed8 >> 0x20);
  iVar34 = (int)((ulonglong)in_stack_fffffffffffffee0 >> 0x20);
  local_res18 = param_2;
  bVar30 = IsInGameThread();
  if (bVar30) {
    FVar36 = StatPtr_STAT_FillComponentSpaceTransforms;
    if (StatPtr_STAT_FillComponentSpaceTransforms ==
        (FThreadSafeStaticStat<FStat_STAT_FillComponentSpaceTransforms>)0x0) {
      pFVar35 = ::FName::FName(&local_c8,"STAT_FillComponentSpaceTransforms");
      pwVar41 = L"FillComponentSpaceTransforms";
      this_01 = (FThreadSafeStaticStat<FStat_STAT_FillComponentSpaceTransforms_WorkerThread> *)
                &StatPtr_STAT_FillComponentSpaceTransforms;
      goto LAB_1486b5a24;
    }
  }
  else {
    FVar36 = (FThreadSafeStaticStat<FStat_STAT_FillComponentSpaceTransforms>)
             StatPtr_STAT_FillComponentSpaceTransforms_WorkerThread;
    if (StatPtr_STAT_FillComponentSpaceTransforms_WorkerThread ==
        (FThreadSafeStaticStat<FStat_STAT_FillComponentSpaceTransforms_WorkerThread>)0x0) {
      pFVar35 = ::FName::FName(&local_d0,"STAT_FillComponentSpaceTransforms_WorkerThread");
      pwVar41 = L"FillComponentSpaceTransforms_WorkerThread";
      this_01 = &StatPtr_STAT_FillComponentSpaceTransforms_WorkerThread;
LAB_1486b5a24:
      iVar34 = 1;
      uVar54 = 1;
      FVar36 = (FThreadSafeStaticStat<FStat_STAT_FillComponentSpaceTransforms>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)this_01,*pFVar35,pwVar41,"STATGROUP_Anim",
                          "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
    }
  }
  FVar38 = *(FName *)FVar36;
  bVar30 = false;
  bVar28 = false;
  local_c0.ComparisonIndex.Value = 0;
  local_c0.Number = 0;
  bVar32 = false;
  bVar26 = false;
  if ((FVar38.ComparisonIndex.Value.Value == 0) &&
     (bVar25 = bVar30, bVar27 = bVar28, FVar38.Number == 0)) {
LAB_1486b5b19:
    bVar28 = bVar26;
    bVar30 = bVar32;
    bVar32 = false;
    bVar26 = false;
    local_d8 = local_c0;
    FVar38 = local_c0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar36 + 0x10));
      bVar30 = false;
      bVar28 = true;
      bVar32 = false;
      bVar26 = true;
      if (-1 < CpuChannel->Enabled) {
        local_e8.ComparisonIndex.Value = FVar38.ComparisonIndex.Value.Value;
        local_e8.Number = FVar38.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_e8,(wchar_t *)*(FName *)((longlong)FVar36 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkinnedAsset.cpp"
                   ,0x1ca);
        bVar30 = true;
        bVar28 = true;
        bVar32 = true;
        bVar26 = true;
      }
    }
    bVar25 = bVar30;
    bVar27 = bVar28;
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1486b5b19;
    local_d8 = FVar38;
    FThreadStats::AddMessage(FVar38,CycleScopeStart);
    bVar32 = true;
    bVar26 = true;
  }
  lVar37 = (**(code **)(*(longlong *)this + 0x318))(this);
  if ((*(int *)(lVar37 + 0x28) != param_1->ArrayNum) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("GetRefSkeleton().GetNum() == InBoneSpaceTransforms.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkinnedAsset.cpp"
                          ,0x1cd,L""), bVar31)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar37 = (**(code **)(*(longlong *)this + 0x318))(this);
  if ((*(int *)(lVar37 + 0x28) != param_3->ArrayNum) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("GetRefSkeleton().GetNum() == OutComponentSpaceTransforms.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkinnedAsset.cpp"
                          ,0x1ce,L""), bVar31)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (param_1->ArrayNum != 0) {
    local_e0 = (param_1->AllocatorInstance).Data;
    local_res20 = (param_3->AllocatorInstance).Data;
    iVar2 = param_2->ArrayNum;
    if (iVar2 != 0) {
      if (iVar2 < 1) {
        uVar54 = 0;
        iVar34 = iVar2 >> 0x1f;
        bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar31) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if ((*(short *)(param_2->AllocatorInstance).Data != 0) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("InFillComponentSpaceTransformsRequiredBones.Num() == 0 || InFillComponentSpaceTransformsRequiredBones[0] == 0"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkinnedAsset.cpp"
                              ,0x1e2,L""), bVar31)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (param_1->ArrayNum < 1) {
      uVar54 = 0;
      iVar34 = param_1->ArrayNum >> 0x1f;
      bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar31) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = (param_1->AllocatorInstance).Data;
    uVar13 = *(undefined8 *)pFVar3;
    uVar14 = *(undefined8 *)(pFVar3 + 8);
    uVar15 = *(undefined8 *)(pFVar3 + 0x10);
    uVar16 = *(undefined8 *)(pFVar3 + 0x18);
    uVar17 = *(undefined8 *)(pFVar3 + 0x20);
    uVar18 = *(undefined8 *)(pFVar3 + 0x28);
    uVar19 = *(undefined8 *)(pFVar3 + 0x30);
    uVar20 = *(undefined8 *)(pFVar3 + 0x38);
    uVar21 = *(undefined8 *)(pFVar3 + 0x40);
    uVar22 = *(undefined8 *)(pFVar3 + 0x48);
    uVar23 = *(undefined8 *)(pFVar3 + 0x50);
    uVar24 = *(undefined8 *)(pFVar3 + 0x58);
    if (param_3->ArrayNum < 1) {
      uVar54 = 0;
      iVar34 = param_3->ArrayNum >> 0x1f;
      bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar31) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = (param_3->AllocatorInstance).Data;
    *(undefined8 *)pFVar3 = uVar13;
    *(undefined8 *)(pFVar3 + 8) = uVar14;
    *(undefined8 *)(pFVar3 + 0x10) = uVar15;
    *(undefined8 *)(pFVar3 + 0x18) = uVar16;
    *(undefined8 *)(pFVar3 + 0x20) = uVar17;
    *(undefined8 *)(pFVar3 + 0x28) = uVar18;
    *(undefined8 *)(pFVar3 + 0x30) = uVar19;
    *(undefined8 *)(pFVar3 + 0x38) = uVar20;
    *(undefined8 *)(pFVar3 + 0x40) = uVar21;
    *(undefined8 *)(pFVar3 + 0x48) = uVar22;
    *(undefined8 *)(pFVar3 + 0x50) = uVar23;
    *(undefined8 *)(pFVar3 + 0x58) = uVar24;
    if (bAnim_SkeletalMesh_ISPC_Enabled == false) {
      if (bWarningLogged == false) {
        if (2 < (byte)LogSkinnedAsset._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    ((FStaticBasicLogRecord *)&PTR_u_ANIM_SKELETAL_M_151b42d58,
                     (FLogCategoryBase *)&LogSkinnedAsset);
        }
        bWarningLogged = true;
      }
    }
    else if (bAnim_SkinnedAsset_ISPC_Enabled != false) {
      iVar2 = param_2->ArrayNum;
      lVar37 = (**(code **)(*(longlong *)this + 0x318))(this);
      ::FillComponentSpaceTransforms
                (local_res20,local_e0,(param_2->AllocatorInstance).Data,
                 *(undefined8 *)(lVar37 + 0x20),CONCAT44(uVar54,0xc),CONCAT44(iVar34,8),iVar2);
      goto LAB_1486b5ee7;
    }
    pTVar29 = local_res18;
    iVar34 = param_2->ArrayNum;
    uVar42 = 1;
    if (1 < iVar34) {
      lVar37 = 2;
      do {
        uVar33 = 0;
        if ((int)uVar42 < iVar34) {
          uVar33 = ~uVar42 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar32)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar1 = *(ushort *)((pTVar29->AllocatorInstance).Data + lVar37);
        lVar40 = (ulonglong)uVar1 * 0x60;
        pTVar39 = (TTransform<double> *)(local_res20 + lVar40);
        this_00 = (FReferenceSkeleton *)(**(code **)(*(longlong *)this + 0x318))(this);
        iVar34 = FReferenceSkeleton::GetParentIndexInternal
                           (this_00,(uint)uVar1,&this_00->FinalRefBoneInfo);
        UE::Math::TTransform<double>::Multiply
                  (pTVar39,(TTransform<double> *)(local_e0 + lVar40),
                   (TTransform<double> *)(local_res20 + (longlong)iVar34 * 0x60));
        dVar9 = (pTVar39->Rotation).ZW.m128d_f64[0];
        dVar10 = (pTVar39->Rotation).ZW.m128d_f64[1];
        uVar42 = uVar42 + 1;
        dVar11 = (pTVar39->Rotation).XY.m128d_f64[0];
        dVar12 = (pTVar39->Rotation).XY.m128d_f64[1];
        lVar37 = lVar37 + 2;
        auVar51._0_8_ = dVar9 * dVar9 + dVar11 * dVar11;
        auVar51._8_8_ = dVar10 * dVar10 + dVar12 * dVar12;
        auVar47._8_4_ = SUB84(auVar51._8_8_,0);
        auVar47._0_8_ = auVar51._0_8_;
        auVar47._12_4_ = (int)((ulonglong)auVar51._8_8_ >> 0x20);
        auVar48._0_8_ = auVar47._8_8_ + auVar51._0_8_;
        auVar48._8_8_ = auVar51._0_8_ + auVar51._8_8_;
        auVar52 = sqrtpd(auVar51,auVar48);
        uVar43 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                  auVar48._0_8_);
        uVar45 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                  auVar48._8_8_);
        uVar44 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                  auVar48._0_8_);
        uVar46 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                  auVar48._8_8_);
        auVar49 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar52);
        auVar52 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar52);
        auVar50._0_8_ = uVar44 & (ulonglong)(auVar49._0_8_ * dVar11);
        uVar8 = uVar46 & (ulonglong)(auVar49._8_8_ * dVar12);
        auVar50._8_4_ = (undefined4)uVar8;
        auVar50._12_4_ = (undefined4)(uVar8 >> 0x20);
        auVar53._0_8_ = uVar43 & (ulonglong)(auVar52._0_8_ * dVar9);
        uVar8 = uVar45 & (ulonglong)(auVar52._8_8_ * dVar10);
        auVar53._8_4_ = (undefined4)uVar8;
        auVar53._12_4_ = (undefined4)(uVar8 >> 0x20);
        auVar52._4_4_ =
             ~(uint)(uVar44 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
        auVar52._0_4_ = ~(uint)uVar44 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
        auVar52._8_4_ = ~(uint)uVar46 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
        auVar52._12_4_ =
             ~(uint)(uVar46 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
        uVar33 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
        uVar5 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
        uVar6 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
        uVar7 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
        *(undefined1 (*) [16])(pTVar39->Rotation).XY.m128d_f64 = auVar50 | auVar52;
        auVar49._4_4_ = ~(uint)(uVar43 >> 0x20) & uVar5;
        auVar49._0_4_ = ~(uint)uVar43 & uVar33;
        auVar49._8_4_ = ~(uint)uVar45 & uVar6;
        auVar49._12_4_ = ~(uint)(uVar45 >> 0x20) & uVar7;
        *(undefined1 (*) [16])(pTVar39->Rotation).ZW.m128d_f64 = auVar53 | auVar49;
        iVar34 = pTVar29->ArrayNum;
        FVar38 = local_d8;
        bVar25 = bVar30;
        bVar32 = bVar26;
        bVar27 = bVar28;
      } while ((int)uVar42 < iVar34);
    }
  }
LAB_1486b5ee7:
  if (bVar27) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar25) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar32) {
    FThreadStats::AddMessage(FVar38,CycleScopeEnd);
  }
  return;
}

// FindMorphTarget @ 1486b6e90

UMorphTarget * __thiscall USkinnedAsset::FindMorphTarget(USkinnedAsset *this,FName param_1)

{
  return (UMorphTarget *)0x0;
}

// FindSocket @ 1486b7ad0

USkeletalMeshSocket * __thiscall USkinnedAsset::FindSocket(USkinnedAsset *this,FName param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h"
             ,0x9f,L"Pure virtual not implemented (%s)");
  return (USkeletalMeshSocket *)0x0;
}

// FindSocketInfo @ 1486b7b00

USkeletalMeshSocket * __thiscall
USkinnedAsset::FindSocketInfo
          (USkinnedAsset *this,FName param_1,TTransform<double> *param_2,int *param_3,int *param_4)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h"
             ,0xa9,L"Pure virtual not implemented (%s)");
  return (USkeletalMeshSocket *)0x0;
}

// FinishPostLoadInternal @ 1486b7eb0

void __thiscall
USkinnedAsset::FinishPostLoadInternal(USkinnedAsset *this,FSkinnedAssetPostLoadContext *param_1)

{
  return;
}

// GetActiveSocketList @ 1486ba8f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<USkeletalMeshSocket_*,TSizedDefaultAllocator<32>_> * __thiscall
USkinnedAsset::GetActiveSocketList
          (USkinnedAsset *this,
          TArray<USkeletalMeshSocket_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h"
             ,0x97,L"Pure virtual not implemented (%s)");
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_TArray<USkeletalMeshSocket*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_USkinnedAsset::GetActiveSocketList(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_TArray<USkeletalMeshSocket*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_USkinnedAsset::GetActiveSocketList(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_TArray<USkeletalMeshSocket*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_USkinnedAsset::GetActiveSocketList(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`USkinnedAsset::GetActiveSocketList'::__l2::_dynamic_atexit_destructor_for__Dummy__);
      _Init_thread_footer(&`public:_virtual_class_TArray<USkeletalMeshSocket*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_USkinnedAsset::GetActiveSocketList(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = DAT_155247540;
  _Src = _Dummy;
  lVar2 = (longlong)DAT_155247540;
  __return_storage_ptr__->ArrayNum = DAT_155247540;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,lVar2 << 3);
  return __return_storage_ptr__;
}

// GetAsyncPropertyName @ 1486bb1c0

FString * __thiscall
USkinnedAsset::GetAsyncPropertyName
          (USkinnedAsset *this,FString *__return_storage_ptr__,ulong64 param_1)

{
  ::FString::FString(__return_storage_ptr__,L"");
  return __return_storage_ptr__;
}

// GetBounds @ 1486bb3d0

TBoxSphereBounds<double,double> * __thiscall
USkinnedAsset::GetBounds
          (USkinnedAsset *this,TBoxSphereBounds<double,double> *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h"
             ,0x90,L"Pure virtual not implemented (%s)");
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->SphereRadius = 0.0;
  return __return_storage_ptr__;
}

// GetComposedRefPoseMatrix @ 1486bbf70

TMatrix<double> * __thiscall
USkinnedAsset::GetComposedRefPoseMatrix
          (USkinnedAsset *this,TMatrix<double> *__return_storage_ptr__,int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h"
             ,0x52,L"Pure virtual not implemented (%s)");
  dVar3 = UE::Math::TMatrix<double>::Identity.M[0][3];
  dVar2 = UE::Math::TMatrix<double>::Identity.M[0][2];
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][1];
  __return_storage_ptr__->M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  __return_storage_ptr__->M[0][1] = dVar1;
  dVar4 = UE::Math::TMatrix<double>::Identity.M[1][1];
  dVar1 = UE::Math::TMatrix<double>::Identity.M[1][0];
  __return_storage_ptr__->M[0][2] = dVar2;
  __return_storage_ptr__->M[0][3] = dVar3;
  dVar3 = UE::Math::TMatrix<double>::Identity.M[1][3];
  dVar2 = UE::Math::TMatrix<double>::Identity.M[1][2];
  __return_storage_ptr__->M[1][0] = dVar1;
  __return_storage_ptr__->M[1][1] = dVar4;
  dVar4 = UE::Math::TMatrix<double>::Identity.M[2][1];
  dVar1 = UE::Math::TMatrix<double>::Identity.M[2][0];
  __return_storage_ptr__->M[1][2] = dVar2;
  __return_storage_ptr__->M[1][3] = dVar3;
  dVar3 = UE::Math::TMatrix<double>::Identity.M[2][3];
  dVar2 = UE::Math::TMatrix<double>::Identity.M[2][2];
  __return_storage_ptr__->M[2][0] = dVar1;
  __return_storage_ptr__->M[2][1] = dVar4;
  dVar4 = UE::Math::TMatrix<double>::Identity.M[3][1];
  dVar1 = UE::Math::TMatrix<double>::Identity.M[3][0];
  __return_storage_ptr__->M[2][2] = dVar2;
  __return_storage_ptr__->M[2][3] = dVar3;
  dVar3 = UE::Math::TMatrix<double>::Identity.M[3][3];
  dVar2 = UE::Math::TMatrix<double>::Identity.M[3][2];
  __return_storage_ptr__->M[3][0] = dVar1;
  __return_storage_ptr__->M[3][1] = dVar4;
  __return_storage_ptr__->M[3][2] = dVar2;
  __return_storage_ptr__->M[3][3] = dVar3;
  return __return_storage_ptr__;
}

// GetComposedRefPoseMatrix @ 1486bc000

TMatrix<double> * __thiscall
USkinnedAsset::GetComposedRefPoseMatrix
          (USkinnedAsset *this,TMatrix<double> *__return_storage_ptr__,FName param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h"
             ,0x4e,L"Pure virtual not implemented (%s)");
  dVar3 = UE::Math::TMatrix<double>::Identity.M[0][3];
  dVar2 = UE::Math::TMatrix<double>::Identity.M[0][2];
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][1];
  __return_storage_ptr__->M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  __return_storage_ptr__->M[0][1] = dVar1;
  dVar4 = UE::Math::TMatrix<double>::Identity.M[1][1];
  dVar1 = UE::Math::TMatrix<double>::Identity.M[1][0];
  __return_storage_ptr__->M[0][2] = dVar2;
  __return_storage_ptr__->M[0][3] = dVar3;
  dVar3 = UE::Math::TMatrix<double>::Identity.M[1][3];
  dVar2 = UE::Math::TMatrix<double>::Identity.M[1][2];
  __return_storage_ptr__->M[1][0] = dVar1;
  __return_storage_ptr__->M[1][1] = dVar4;
  dVar4 = UE::Math::TMatrix<double>::Identity.M[2][1];
  dVar1 = UE::Math::TMatrix<double>::Identity.M[2][0];
  __return_storage_ptr__->M[1][2] = dVar2;
  __return_storage_ptr__->M[1][3] = dVar3;
  dVar3 = UE::Math::TMatrix<double>::Identity.M[2][3];
  dVar2 = UE::Math::TMatrix<double>::Identity.M[2][2];
  __return_storage_ptr__->M[2][0] = dVar1;
  __return_storage_ptr__->M[2][1] = dVar4;
  dVar4 = UE::Math::TMatrix<double>::Identity.M[3][1];
  dVar1 = UE::Math::TMatrix<double>::Identity.M[3][0];
  __return_storage_ptr__->M[2][2] = dVar2;
  __return_storage_ptr__->M[2][3] = dVar3;
  dVar3 = UE::Math::TMatrix<double>::Identity.M[3][3];
  dVar2 = UE::Math::TMatrix<double>::Identity.M[3][2];
  __return_storage_ptr__->M[3][0] = dVar1;
  __return_storage_ptr__->M[3][1] = dVar4;
  __return_storage_ptr__->M[3][2] = dVar2;
  __return_storage_ptr__->M[3][3] = dVar3;
  return __return_storage_ptr__;
}

// GetDefaultMeshDeformer @ 1486bd550

UMeshDeformer * __thiscall USkinnedAsset::GetDefaultMeshDeformer(USkinnedAsset *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h"
             ,0xb3,L"Pure virtual not implemented (%s)");
  return (UMeshDeformer *)0x0;
}

// GetDefaultMinLod @ 1486bd580

int __thiscall USkinnedAsset::GetDefaultMinLod(USkinnedAsset *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h"
             ,0x79,L"Pure virtual not implemented (%s)");
  return 0;
}

// GetDisableBelowMinLodStripping @ 1486bd8d0

FPerPlatformBool * __thiscall USkinnedAsset::GetDisableBelowMinLodStripping(USkinnedAsset *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h"
             ,0xdd,L"Pure virtual not implemented (%s)");
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_struct_FPerPlatformBool_const&___ptr64___cdecl_USkinnedAsset::GetDisableBelowMinLodStripping(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_struct_FPerPlatformBool_const&___ptr64___cdecl_USkinnedAsset::GetDisableBelowMinLodStripping(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_struct_FPerPlatformBool_const&___ptr64___cdecl_USkinnedAsset::GetDisableBelowMinLodStripping(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_virtual_struct_FPerPlatformBool_const&___ptr64___cdecl_USkinnedAsset::GetDisableBelowMinLodStripping(void)const___ptr64'
      ::__l2::Dummy.Default = false;
      _Init_thread_footer(&`public:_virtual_struct_FPerPlatformBool_const&___ptr64___cdecl_USkinnedAsset::GetDisableBelowMinLodStripping(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_virtual_struct_FPerPlatformBool_const&___ptr64___cdecl_USkinnedAsset::GetDisableBelowMinLodStripping(void)const___ptr64'
          ::__l2::Dummy;
}

// GetHasVertexColors @ 1486bf0a0

bool __thiscall USkinnedAsset::GetHasVertexColors(USkinnedAsset *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h"
             ,0xd7,L"Pure virtual not implemented (%s)");
  return false;
}

// GetLODInfo @ 1486c0830

FSkeletalMeshLODInfo * __thiscall USkinnedAsset::GetLODInfo(USkinnedAsset *this,int param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h"
             ,0x3e,L"Pure virtual not implemented (%s)");
  return (FSkeletalMeshLODInfo *)0x0;
}

// GetLODInfo @ 1486c0860

FSkeletalMeshLODInfo * __thiscall USkinnedAsset::GetLODInfo(USkinnedAsset *this,int param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h"
             ,0x40,L"Pure virtual not implemented (%s)");
  return (FSkeletalMeshLODInfo *)0x0;
}

// GetLODInfoArray @ 1486c0890

TArray<FSkeletalMeshLODInfo,TSizedDefaultAllocator<32>_> * __thiscall
USkinnedAsset::GetLODInfoArray(USkinnedAsset *this)

{
  TArray<FSkeletalMeshLODInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h"
             ,0x6f,L"Pure virtual not implemented (%s)");
  pTVar1 = GetMeshLodInfoDummyArray();
  return pTVar1;
}

// GetLODInfoArray @ 1486c08d0

TArray<FSkeletalMeshLODInfo,TSizedDefaultAllocator<32>_> * __thiscall
USkinnedAsset::GetLODInfoArray(USkinnedAsset *this)

{
  TArray<FSkeletalMeshLODInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h"
             ,0x72,L"Pure virtual not implemented (%s)");
  pTVar1 = GetMeshLodInfoDummyArray();
  return pTVar1;
}

// GetLODNum @ 1486c0910

int __thiscall USkinnedAsset::GetLODNum(USkinnedAsset *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h"
             ,0x8a,L"Pure virtual not implemented (%s)");
  return 0;
}

// GetLODPathName @ 1486c0940

FString * __cdecl
USkinnedAsset::GetLODPathName(FString *__return_storage_ptr__,USkinnedAsset *param_1,int param_2)

{
  FString *pFVar1;
  bool bVar2;
  FString local_18;
  
  bVar2 = false;
  if (param_1 != (USkinnedAsset *)0x0) {
    pFVar1 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_18,(UObject *)0x0)
    ;
    if ((pFVar1->Data).ArrayNum == 0) {
      bVar2 = true;
    }
    else {
      bVar2 = true;
    }
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s [LOD%d]");
  if ((bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetMaterials @ 1486c1060

TArray<FSkeletalMaterial,TSizedDefaultAllocator<32>_> * __thiscall
USkinnedAsset::GetMaterials(USkinnedAsset *this)

{
  TArray<FSkeletalMaterial,TSizedDefaultAllocator<32>_> *pTVar1;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h"
             ,0x85,L"Pure virtual not implemented (%s)");
  pTVar1 = GetSkeletalMaterialDummyArray();
  return pTVar1;
}

// GetMaterials @ 1486c10a0

TArray<FSkeletalMaterial,TSizedDefaultAllocator<32>_> * __thiscall
USkinnedAsset::GetMaterials(USkinnedAsset *this)

{
  TArray<FSkeletalMaterial,TSizedDefaultAllocator<32>_> *pTVar1;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h"
             ,0x87,L"Pure virtual not implemented (%s)");
  pTVar1 = GetSkeletalMaterialDummyArray();
  return pTVar1;
}

// GetMeshLodInfoDummyArray @ 1486c1a10

TArray<FSkeletalMeshLODInfo,TSizedDefaultAllocator<32>_> * __cdecl
USkinnedAsset::GetMeshLodInfoDummyArray(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`USkinnedAsset::GetMeshLodInfoDummyArray'::__l2::
             _dynamic_atexit_destructor_for__Dummy__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Dummy;
}

// GetMinLod @ 1486c1b00

FPerPlatformInt * __thiscall USkinnedAsset::GetMinLod(USkinnedAsset *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h"
             ,0x7c,L"Pure virtual not implemented (%s)");
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_struct_FPerPlatformInt_const&___ptr64___cdecl_USkinnedAsset::GetMinLod(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_struct_FPerPlatformInt_const&___ptr64___cdecl_USkinnedAsset::GetMinLod(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_struct_FPerPlatformInt_const&___ptr64___cdecl_USkinnedAsset::GetMinLod(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_virtual_struct_FPerPlatformInt_const&___ptr64___cdecl_USkinnedAsset::GetMinLod(void)const___ptr64'
      ::__l2::Dummy.Default = 0;
      _Init_thread_footer(&`public:_virtual_struct_FPerPlatformInt_const&___ptr64___cdecl_USkinnedAsset::GetMinLod(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_virtual_struct_FPerPlatformInt_const&___ptr64___cdecl_USkinnedAsset::GetMinLod(void)const___ptr64'
          ::__l2::Dummy;
}

// GetMinLodIdx @ 1486c1b90

int __thiscall USkinnedAsset::GetMinLodIdx(USkinnedAsset *this,bool param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h"
             ,0xc5,L"Pure virtual not implemented (%s)");
  return 0;
}

// GetMorphTargets @ 1486c1c00

TArray<TObjectPtr<UMorphTarget>,TSizedDefaultAllocator<32>_> * __thiscall
USkinnedAsset::GetMorphTargets(USkinnedAsset *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_TArray<TObjectPtr<UMorphTarget>,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_USkinnedAsset::GetMorphTargets(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_TArray<TObjectPtr<UMorphTarget>,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_USkinnedAsset::GetMorphTargets(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_TArray<TObjectPtr<UMorphTarget>,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_USkinnedAsset::GetMorphTargets(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`USkinnedAsset::GetMorphTargets'::__l2::_dynamic_atexit_destructor_for__Dummy__);
      _Init_thread_footer(&`public:_virtual_class_TArray<TObjectPtr<UMorphTarget>,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_USkinnedAsset::GetMorphTargets(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return (TArray<TObjectPtr<UMorphTarget>,TSizedDefaultAllocator<32>_> *)
         &`public:_virtual_class_TArray<TObjectPtr<UMorphTarget>,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_USkinnedAsset::GetMorphTargets(void)___ptr64'
          ::__l2::Dummy;
}

// GetMorphTargets @ 1486c1c70

TArray<TObjectPtr<UMorphTarget>,TSizedDefaultAllocator<32>_> * __thiscall
USkinnedAsset::GetMorphTargets(USkinnedAsset *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_TArray<TObjectPtr<UMorphTarget>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_USkinnedAsset::GetMorphTargets(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_TArray<TObjectPtr<UMorphTarget>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_USkinnedAsset::GetMorphTargets(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_TArray<TObjectPtr<UMorphTarget>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_USkinnedAsset::GetMorphTargets(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`USkinnedAsset::GetMorphTargets'::__l2::_dynamic_atexit_destructor_for__Dummy__);
      _Init_thread_footer(&`public:_virtual_class_TArray<TObjectPtr<UMorphTarget>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_USkinnedAsset::GetMorphTargets(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return (TArray<TObjectPtr<UMorphTarget>,TSizedDefaultAllocator<32>_> *)
         &`public:_virtual_class_TArray<TObjectPtr<UMorphTarget>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_USkinnedAsset::GetMorphTargets(void)const___ptr64'
          ::__l2::Dummy;
}

// GetNumMaterials @ 1486c2bc0

int __thiscall USkinnedAsset::GetNumMaterials(USkinnedAsset *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)this + 0x3c0))();
  return *(int *)(lVar1 + 8);
}

// GetOverlayMaterial @ 1486c3520

UMaterialInterface * __thiscall USkinnedAsset::GetOverlayMaterial(USkinnedAsset *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h"
             ,0xbc,L"Pure virtual not implemented (%s)");
  return (UMaterialInterface *)0x0;
}

// GetOverlayMaterialMaxDrawDistance @ 1486c3560

float __thiscall USkinnedAsset::GetOverlayMaterialMaxDrawDistance(USkinnedAsset *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h"
             ,0xbe,L"Pure virtual not implemented (%s)");
  return 0.0;
}

// GetPhysicsAsset @ 1486c3700

UPhysicsAsset * __thiscall USkinnedAsset::GetPhysicsAsset(USkinnedAsset *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h"
             ,0x82,L"Pure virtual not implemented (%s)");
  return (UPhysicsAsset *)0x0;
}

// GetPlatformMinLODIdx @ 1486c3760

int __thiscall USkinnedAsset::GetPlatformMinLODIdx(USkinnedAsset *this,ITargetPlatform *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h"
             ,0xda,L"Pure virtual not implemented (%s)");
  return 0;
}

// GetPrivateStaticClass @ 1486c3dc0

UClass * __cdecl USkinnedAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USkinnedAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SkinnedAsset",
               &Z_Registration_Info_UClass_USkinnedAsset.InnerSingleton,
               StaticRegisterNativesUSkinnedAsset,0xe8,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<USkinnedAsset>,
               InternalVTableHelperCtorCaller<USkinnedAsset>,local_res8,
               UStreamableRenderAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USkinnedAsset.InnerSingleton;
}

// GetRayTracingMinLOD @ 1486c5e20

int __thiscall USkinnedAsset::GetRayTracingMinLOD(USkinnedAsset *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h"
             ,100,L"Pure virtual not implemented (%s)");
  return 0;
}

// GetRefBasesInvMatrix @ 1486c5e50

TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> * __thiscall
USkinnedAsset::GetRefBasesInvMatrix(USkinnedAsset *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h"
             ,0x68,L"Pure virtual not implemented (%s)");
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_USkinnedAsset::GetRefBasesInvMatrix(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_USkinnedAsset::GetRefBasesInvMatrix(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_USkinnedAsset::GetRefBasesInvMatrix(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`USkinnedAsset::GetRefBasesInvMatrix'::__l2::_dynamic_atexit_destructor_for__Dummy__);
      _Init_thread_footer(&`public:_virtual_class_TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_USkinnedAsset::GetRefBasesInvMatrix(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return (TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *)
         &`public:_virtual_class_TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_USkinnedAsset::GetRefBasesInvMatrix(void)___ptr64'
          ::__l2::Dummy;
}

// GetRefBasesInvMatrix @ 1486c5ee0

TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> * __thiscall
USkinnedAsset::GetRefBasesInvMatrix(USkinnedAsset *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h"
             ,0x6a,L"Pure virtual not implemented (%s)");
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_USkinnedAsset::GetRefBasesInvMatrix(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_USkinnedAsset::GetRefBasesInvMatrix(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_USkinnedAsset::GetRefBasesInvMatrix(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`USkinnedAsset::GetRefBasesInvMatrix'::__l2::_dynamic_atexit_destructor_for__Dummy__);
      _Init_thread_footer(&`public:_virtual_class_TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_USkinnedAsset::GetRefBasesInvMatrix(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return (TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *)
         &`public:_virtual_class_TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_USkinnedAsset::GetRefBasesInvMatrix(void)const___ptr64'
          ::__l2::Dummy;
}

// GetRefSkeleton @ 1486c5f70

FReferenceSkeleton * __thiscall USkinnedAsset::GetRefSkeleton(USkinnedAsset *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h"
             ,0x38,L"Pure virtual not implemented (%s)");
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_struct_FReferenceSkeleton&___ptr64___cdecl_USkinnedAsset::GetRefSkeleton(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_struct_FReferenceSkeleton&___ptr64___cdecl_USkinnedAsset::GetRefSkeleton(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_struct_FReferenceSkeleton&___ptr64___cdecl_USkinnedAsset::GetRefSkeleton(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FReferenceSkeleton::FReferenceSkeleton
                (&`public:_virtual_struct_FReferenceSkeleton&___ptr64___cdecl_USkinnedAsset::GetRefSkeleton(void)___ptr64'
                  ::__l2::Dummy,true);
      atexit(`USkinnedAsset::GetRefSkeleton'::__l2::_dynamic_atexit_destructor_for__Dummy__);
      _Init_thread_footer(&`public:_virtual_struct_FReferenceSkeleton&___ptr64___cdecl_USkinnedAsset::GetRefSkeleton(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_virtual_struct_FReferenceSkeleton&___ptr64___cdecl_USkinnedAsset::GetRefSkeleton(void)___ptr64'
              ::__l2::Dummy;
    }
  }
  return &`public:_virtual_struct_FReferenceSkeleton&___ptr64___cdecl_USkinnedAsset::GetRefSkeleton(void)___ptr64'
          ::__l2::Dummy;
}

// GetRefSkeleton @ 1486c6020

FReferenceSkeleton * __thiscall USkinnedAsset::GetRefSkeleton(USkinnedAsset *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h"
             ,0x3a,L"Pure virtual not implemented (%s)");
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_struct_FReferenceSkeleton_const&___ptr64___cdecl_USkinnedAsset::GetRefSkeleton(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_struct_FReferenceSkeleton_const&___ptr64___cdecl_USkinnedAsset::GetRefSkeleton(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_struct_FReferenceSkeleton_const&___ptr64___cdecl_USkinnedAsset::GetRefSkeleton(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FReferenceSkeleton::FReferenceSkeleton
                (&`public:_virtual_struct_FReferenceSkeleton_const&___ptr64___cdecl_USkinnedAsset::GetRefSkeleton(void)const___ptr64'
                  ::__l2::Dummy,true);
      atexit(`USkinnedAsset::GetRefSkeleton'::__l2::_dynamic_atexit_destructor_for__Dummy__);
      _Init_thread_footer(&`public:_virtual_struct_FReferenceSkeleton_const&___ptr64___cdecl_USkinnedAsset::GetRefSkeleton(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_virtual_struct_FReferenceSkeleton_const&___ptr64___cdecl_USkinnedAsset::GetRefSkeleton(void)const___ptr64'
              ::__l2::Dummy;
    }
  }
  return &`public:_virtual_struct_FReferenceSkeleton_const&___ptr64___cdecl_USkinnedAsset::GetRefSkeleton(void)const___ptr64'
          ::__l2::Dummy;
}

// GetResourceForRendering @ 1486c6500

FSkeletalMeshRenderData * __thiscall USkinnedAsset::GetResourceForRendering(USkinnedAsset *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h"
             ,0x76,L"Pure virtual not implemented (%s)");
  return (FSkeletalMeshRenderData *)0x0;
}

// GetShadowPhysicsAsset @ 1486c73c0

UPhysicsAsset * __thiscall USkinnedAsset::GetShadowPhysicsAsset(USkinnedAsset *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h"
             ,0x4a,L"Pure virtual not implemented (%s)");
  return (UPhysicsAsset *)0x0;
}

// GetSkeletalMaterialDummyArray @ 1486c7830

TArray<FSkeletalMaterial,TSizedDefaultAllocator<32>_> * __cdecl
USkinnedAsset::GetSkeletalMaterialDummyArray(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`USkinnedAsset::GetSkeletalMaterialDummyArray'::__l2::
             _dynamic_atexit_destructor_for__Dummy__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Dummy;
}

// GetSkeleton @ 1486c78a0

USkeleton * __thiscall USkinnedAsset::GetSkeleton(USkinnedAsset *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h"
             ,0xac,L"Pure virtual not implemented (%s)");
  return (USkeleton *)0x0;
}

// GetSkeleton @ 1486c78d0

USkeleton * __thiscall USkinnedAsset::GetSkeleton(USkinnedAsset *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h"
             ,0xae,L"Pure virtual not implemented (%s)");
  return (USkeleton *)0x0;
}

// GetSkinWeightProfilesData @ 1486c7b00

FSkinWeightProfilesData * __thiscall
USkinnedAsset::GetSkinWeightProfilesData(USkinnedAsset *this,int param_1)

{
  return (FSkinWeightProfilesData *)0x0;
}

// GetSupportRayTracing @ 1486c8b80

bool __thiscall USkinnedAsset::GetSupportRayTracing(USkinnedAsset *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h"
             ,0x60,L"Pure virtual not implemented (%s)");
  return false;
}

// GetTargetMeshDeformers @ 1486c8c50

UMeshDeformerCollection * __thiscall USkinnedAsset::GetTargetMeshDeformers(USkinnedAsset *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h"
             ,0xb6,L"Pure virtual not implemented (%s)");
  return (UMeshDeformerCollection *)0x0;
}

// GetUVChannelData @ 1486c8e20

FMeshUVChannelInfo * __thiscall USkinnedAsset::GetUVChannelData(USkinnedAsset *this,int param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h"
             ,0x5c,L"Pure virtual not implemented (%s)");
  return (FMeshUVChannelInfo *)0x0;
}

// GetVertexBufferFlags @ 1486c92e0

ESkeletalMeshVertexFlags __thiscall USkinnedAsset::GetVertexBufferFlags(USkinnedAsset *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(longlong *)this + 0x470))();
  return -(cVar1 != '\0') & HasVertexColors;
}

// GetVertexFactoryTypesPerMaterialIndex @ 1486c9300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ESkinVertexColorChannel": Some values do not have unique names */

void __thiscall
USkinnedAsset::GetVertexFactoryTypesPerMaterialIndex
          (USkinnedAsset *this,
          TArray<FPSOPrecacheVertexFactoryDataPerMaterialIndex,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_1,USkinnedMeshComponent *param_2,int param_3,bool param_4,Type param_5)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  FSkeletalMeshRenderData *this_00;
  longlong lVar7;
  FPSOPrecacheVertexFactoryData *pFVar8;
  ForElementType<FPSOPrecacheVertexFactoryDataPerMaterialIndex> FVar9;
  uint uVar10;
  ForElementType<FPSOPrecacheVertexFactoryDataPerMaterialIndex> FVar11;
  uint uVar12;
  longlong lVar13;
  FSkelMeshRenderSection *pFVar14;
  uint uVar15;
  ulonglong uVar16;
  ushort uVar17;
  undefined1 auStackY_258 [32];
  longlong local_228;
  longlong local_208;
  FPSOPrecacheVertexFactoryData local_1e8;
  FPSOPrecacheVertexFactoryData local_1d8;
  FDataType local_1c8;
  TArray<FVertexElement,TFixedAllocator<17>_> local_e8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_258;
  uVar16 = (ulonglong)param_3;
  this_00 = (FSkeletalMeshRenderData *)(**(code **)(*(longlong *)this + 0x398))();
  iVar6 = (this_00->LODRenderData).Array.ArrayNum;
  if (param_3 < iVar6) {
    lVar13 = uVar16 * 8;
    do {
      uVar12 = 0;
      uVar15 = (uint)uVar16;
      uVar5 = 0;
      if ((int)uVar15 < iVar6) {
        uVar5 = ~uVar15 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)((this_00->LODRenderData).Array.AllocatorInstance.Data + lVar13);
      lVar7 = (**(code **)(*(longlong *)this + 0x330))(this,uVar16 & 0xffffffff);
      local_228 = 0;
      if (0 < *(int *)(lVar1 + 0x18)) {
        local_208 = 0;
        do {
          uVar5 = 0;
          if ((int)uVar12 < *(int *)(lVar1 + 0x18)) {
            uVar5 = ~uVar12 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar14 = (FSkelMeshRenderSection *)(*(longlong *)(lVar1 + 0x10) + local_208);
          uVar17 = pFVar14->MaterialIndex;
          if ((int)uVar12 < *(int *)(lVar7 + 0x10)) {
            pcVar2 = *(code **)(*(longlong *)this + 0x338);
            if (((int)uVar12 < 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            cVar4 = (*pcVar2)(this,*(undefined4 *)(*(longlong *)(lVar7 + 8) + local_228 * 4));
            if (cVar4 != '\0') {
              uVar5 = 0;
              if ((int)uVar12 < *(int *)(lVar7 + 0x10)) {
                uVar5 = ~uVar12 >> 0x1f;
              }
              if ((uVar5 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              uVar10 = (uint)*(ushort *)(*(longlong *)(lVar7 + 8) + local_228 * 4);
              uVar5 = (**(code **)(*(longlong *)this + 0x340))();
              if ((int)uVar10 < (int)uVar5) {
                uVar5 = uVar10;
              }
              uVar17 = 0;
              if (0 < (int)uVar5) {
                uVar17 = (ushort)uVar5;
              }
            }
          }
          FVar9 = (param_1->AllocatorInstance).SecondaryData;
          FVar11 = (ForElementType<FPSOPrecacheVertexFactoryDataPerMaterialIndex>)param_1;
          if (FVar9 != (ForElementType<FPSOPrecacheVertexFactoryDataPerMaterialIndex>)0x0) {
            FVar11 = FVar9;
          }
          FVar9 = (ForElementType<FPSOPrecacheVertexFactoryDataPerMaterialIndex>)
                  ((longlong)param_1->ArrayNum * 0x38 + (longlong)FVar11);
          for (; FVar11 != FVar9;
              FVar11 = (ForElementType<FPSOPrecacheVertexFactoryDataPerMaterialIndex>)
                       ((longlong)FVar11 + 0x38)) {
            if ((int)*(short *)FVar11 == (uint)uVar17) {
              if (FVar11 != (ForElementType<FPSOPrecacheVertexFactoryDataPerMaterialIndex>)0x0)
              goto LAB_1486c95f6;
              break;
            }
          }
          if (param_1->ArrayNum == param_1->ArrayMax) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FPSOPrecacheVertexFactoryDataPerMaterialIndex>_>
                              (0x838,&param_1->AllocatorInstance,&param_1->ArrayMax);
            param_1->ArrayNum = iVar6;
          }
          iVar6 = param_1->ArrayNum;
          param_1->ArrayNum = iVar6 + 1;
          FVar9 = (param_1->AllocatorInstance).SecondaryData;
          FVar11 = (ForElementType<FPSOPrecacheVertexFactoryDataPerMaterialIndex>)param_1;
          if (FVar9 != (ForElementType<FPSOPrecacheVertexFactoryDataPerMaterialIndex>)0x0) {
            FVar11 = FVar9;
          }
          FVar11 = (ForElementType<FPSOPrecacheVertexFactoryDataPerMaterialIndex>)
                   ((longlong)iVar6 * 0x38 + (longlong)FVar11);
          DefaultConstructItems<FPSOPrecacheVertexFactoryDataPerMaterialIndex,int>((void *)FVar11,1)
          ;
          *(ushort *)FVar11 = uVar17;
LAB_1486c95f6:
          if (param_4) {
            if (((FLocalVertexFactory::StaticType.Flags & SupportsManualVertexFetch) == None) ||
               (bVar3 = FVertexFactoryType::CheckManualVertexFetchSupport(GMaxRHIFeatureLevel),
               !bVar3)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              local_1e8.CustomDefaultVertexDeclaration = (FRHIVertexDeclaration *)0x0;
              local_1e8.VertexFactoryType = &FLocalVertexFactory::StaticType;
              TArray<FPSOPrecacheVertexFactoryData,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
              ::AddUniqueImpl<FPSOPrecacheVertexFactoryData>
                        ((TArray<FPSOPrecacheVertexFactoryData,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                          *)((longlong)FVar11 + 8),&local_1e8);
            }
            else {
              local_e8.ArrayNum = 0;
              local_e8.ArrayMax = 0x11;
              local_1c8._padding_ = 0;
              local_1c8._padding_ = 0;
              local_1c8._padding_ = 0;
              local_1c8._padding_ = 0;
              local_1c8._padding_ = 0;
              local_1c8._padding_ = 0;
              local_1c8._padding_ = 0;
              local_1c8._padding_ = 0;
              local_1c8._padding_ = 0;
              local_1c8._padding_ = 0;
              local_1c8._padding_._0_4_ = 0;
              local_1c8._padding_._4_4_ = 4;
              local_1c8._padding_ = 0;
              local_1c8._padding_ = 0;
              local_1c8._padding_ = 0;
              local_1c8._padding_ = 0;
              local_1c8._padding_._0_4_ = 0xffffffff;
              local_1c8._padding_._4_2_ = 0xff;
              local_1c8._padding_._6_1_ = 0;
              local_1c8.PreSkinPositionComponent.VertexBuffer = (FVertexBuffer *)0x0;
              local_1c8.PreSkinPositionComponent.StreamOffset = 0;
              local_1c8.PreSkinPositionComponent.Offset = '\0';
              local_1c8.PreSkinPositionComponent.Stride = '\0';
              local_1c8.PreSkinPositionComponent.Type.Value = '\0';
              local_1c8.PreSkinPositionComponent.VertexStreamUsage = Default;
              local_1c8.PreSkinPositionComponentSRV = (FRHIShaderResourceView *)0x0;
              FStaticMeshVertexBuffers::InitComponentVF
                        ((FStaticMeshVertexBuffers *)(lVar1 + 0x30),(FLocalVertexFactory *)0x0,0,
                         false,&local_1c8);
              FLocalVertexFactory::GetVertexElements
                        (GMaxRHIFeatureLevel,Default,false,&local_1c8,&local_e8);
              pFVar8 = FPSOPrecacheVertexFactoryData::FPSOPrecacheVertexFactoryData
                                 (&local_1d8,&FLocalVertexFactory::StaticType,&local_e8);
              TArray<FPSOPrecacheVertexFactoryData,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
              ::AddUniqueImpl<FPSOPrecacheVertexFactoryData>
                        ((TArray<FPSOPrecacheVertexFactoryData,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                          *)((longlong)FVar11 + 8),pFVar8);
            }
          }
          else {
            bVar3 = FSkeletalMeshRenderData::RequiresCPUSkinning(this_00,param_5,uVar15);
            if (!bVar3) {
              FSkeletalMeshObjectGPUSkin::GetUsedVertexFactoryData
                        (this_00,uVar15,param_2,pFVar14,param_5,
                         (TArray<FPSOPrecacheVertexFactoryData,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                          *)((longlong)FVar11 + 8));
            }
          }
          uVar12 = uVar12 + 1;
          local_228 = local_228 + 1;
          local_208 = local_208 + 0x118;
        } while ((int)uVar12 < *(int *)(lVar1 + 0x18));
      }
      uVar16 = (ulonglong)(uVar15 + 1);
      iVar6 = (this_00->LODRenderData).Array.ArrayNum;
      lVar13 = lVar13 + 8;
    } while ((int)(uVar15 + 1) < iVar6);
  }
  return;
}

// HasHalfEdgeBuffer @ 1486cb370

bool __thiscall USkinnedAsset::HasHalfEdgeBuffer(USkinnedAsset *this,int param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h"
             ,0xb9,L"Pure virtual not implemented (%s)");
  return false;
}

// IsMaterialUsed @ 1486d13c0

bool __thiscall USkinnedAsset::IsMaterialUsed(USkinnedAsset *this,int param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h"
             ,0x8d,L"Pure virtual not implemented (%s)");
  return false;
}

// IsMinLodQualityLevelEnable @ 1486d13f0

bool __thiscall USkinnedAsset::IsMinLodQualityLevelEnable(USkinnedAsset *this)

{
  return false;
}

// IsValidLODIndex @ 1486d24f0

bool __thiscall USkinnedAsset::IsValidLODIndex(USkinnedAsset *this,int param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h"
             ,0xc2,L"Pure virtual not implemented (%s)");
  return false;
}

// IsValidMaterialIndex @ 1486d2520

bool __thiscall USkinnedAsset::IsValidMaterialIndex(USkinnedAsset *this,int param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)this + 0x3c0))();
  if ((-1 < param_1) && (param_1 < *(int *)(lVar1 + 8))) {
    return true;
  }
  return false;
}

// NeedCPUData @ 1486d3160

bool __thiscall USkinnedAsset::NeedCPUData(USkinnedAsset *this,int param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h"
             ,0xd3,L"Pure virtual not implemented (%s)");
  return false;
}

// PostLoad @ 1486e01b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall USkinnedAsset::PostLoad(USkinnedAsset *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  FSkeletalMeshRenderData *this_00;
  longlong *plVar7;
  ForElementType<FPSOPrecacheVertexFactoryData> _Dst;
  TRefCountPtr<FBaseGraphTask> *pTVar8;
  ForElementType<FPSOPrecacheVertexFactoryDataPerMaterialIndex> FVar9;
  ForElementType<FPSOPrecacheVertexFactoryData> *pFVar10;
  Type TVar11;
  ForElementType<FPSOPrecacheVertexFactoryData> _Src;
  longlong lVar12;
  undefined1 auStackY_1e8 [32];
  undefined2 local_1a8 [2];
  undefined1 local_1a4 [4];
  ulonglong local_1a0;
  void *local_198;
  undefined8 local_190;
  short local_188;
  ForElementType<FPSOPrecacheVertexFactoryData> local_180;
  int local_158;
  int local_154;
  TRefCountPtr<FBaseGraphTask> local_150 [4];
  TRefCountPtr<FBaseGraphTask> *local_130;
  int local_128;
  TArray<FPSOPrecacheVertexFactoryDataPerMaterialIndex,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_120;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  UObject::PostLoad((UObject *)this);
  local_1a8[0] = 0;
  (**(code **)(*(longlong *)this + 0x4a0))(this,local_1a8);
  (**(code **)(*(longlong *)this + 0x4a8))(this,local_1a8);
  (**(code **)(*(longlong *)this + 0x4b0))(this,local_1a8);
  bVar3 = IsResourcePSOPrecachingEnabled();
  if ((bVar3) && (lVar6 = (**(code **)(*(longlong *)this + 0x398))(this), lVar6 != 0)) {
    lVar6 = (**(code **)(*(longlong *)this + 0x180))(this);
    TVar11 = GMaxRHIFeatureLevel;
    if (lVar6 != 0) {
      lVar6 = (**(code **)(*(longlong *)this + 0x180))(this);
      TVar11 = (uint)*(byte *)(lVar6 + 0x188);
    }
    iVar4 = (**(code **)(*(longlong *)this + 0x448))(this,0);
    local_120.AllocatorInstance.SecondaryData =
         (ForElementType<FPSOPrecacheVertexFactoryDataPerMaterialIndex>)0x0;
    local_120.ArrayNum = 0;
    local_120.ArrayMax = 4;
    GetVertexFactoryTypesPerMaterialIndex
              (this,&local_120,(USkinnedMeshComponent *)0x0,iVar4,false,TVar11);
    this_00 = (FSkeletalMeshRenderData *)(**(code **)(*(longlong *)this + 0x398))(this);
    bVar3 = FSkeletalMeshRenderData::AnyRenderSectionCastsShadows(this_00,iVar4);
    plVar7 = (longlong *)(**(code **)(*(longlong *)this + 0x3c8))(this);
    iVar4 = local_120.ArrayNum;
    lVar6 = (longlong)local_120.ArrayNum;
    local_198 = (void *)0x0;
    local_1a0 = (ulonglong)bVar3 << 0xd | (ulonglong)((uint)local_1a0 & 0x8000) | 0x411c00;
    local_190 = 0;
    FVar9 = (ForElementType<FPSOPrecacheVertexFactoryDataPerMaterialIndex>)&local_120;
    if (local_120.AllocatorInstance.SecondaryData !=
        (ForElementType<FPSOPrecacheVertexFactoryDataPerMaterialIndex>)0x0) {
      FVar9 = local_120.AllocatorInstance.SecondaryData;
    }
    pFVar10 = (ForElementType<FPSOPrecacheVertexFactoryData> *)((longlong)FVar9 + 0x28);
    while( true ) {
      if (local_120.ArrayNum != iVar4) {
        local_1a4[0] = 0;
        `TCheckedPointerIterator<FPSOPrecacheVertexFactoryDataPerMaterialIndex,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_1a4);
      }
      if ((FPSOPrecacheVertexFactoryDataPerMaterialIndex *)(pFVar10 + -5) ==
          (FPSOPrecacheVertexFactoryDataPerMaterialIndex *)(lVar6 * 0x38 + (longlong)FVar9)) break;
      local_158 = *(int *)(pFVar10 + 1);
      lVar12 = (longlong)local_158;
      local_188 = ((FPSOPrecacheVertexFactoryDataPerMaterialIndex *)(pFVar10 + -5))->MaterialIndex;
      _Src = *pFVar10;
      if (*pFVar10 == (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
        _Src = (ForElementType<FPSOPrecacheVertexFactoryData>)(pFVar10 + -4);
      }
      local_180.SecondaryData = (ForElementType<FPSOPrecacheVertexFactoryData>)0x0;
      if (local_158 == 0) {
        local_154 = 2;
      }
      else {
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPSOPrecacheVertexFactoryData>_>
                  (0x10,8,local_158,0,&local_180,local_158,&local_154);
        _Dst = (ForElementType<FPSOPrecacheVertexFactoryData>)&local_180;
        if (local_180.SecondaryData != (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
          _Dst = local_180.SecondaryData;
        }
        memcpy((void *)_Dst,(void *)_Src,lVar12 << 4);
      }
      lVar12 = (longlong)local_188;
      uVar5 = 0;
      if ((int)local_188 < (int)plVar7[1]) {
        uVar5 = (uint)~(int)local_188 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)(*plVar7 + lVar12 * 0x30);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x3b0))(plVar1,local_150,&local_180);
        pTVar8 = local_150;
        if (local_130 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
          pTVar8 = local_130;
        }
        DestructItems<TRefCountPtr<FBaseGraphTask>,int>(pTVar8,local_128);
        if (local_130 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
          FMemory::Free(local_130);
        }
      }
      if (local_180.SecondaryData != (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
        FMemory::Free((void *)local_180.SecondaryData);
      }
      pFVar10 = pFVar10 + 7;
    }
    if (local_198 != (void *)0x0) {
      FMemory::Free(local_198);
    }
    FVar9 = (ForElementType<FPSOPrecacheVertexFactoryDataPerMaterialIndex>)&local_120;
    if (local_120.AllocatorInstance.SecondaryData !=
        (ForElementType<FPSOPrecacheVertexFactoryDataPerMaterialIndex>)0x0) {
      FVar9 = local_120.AllocatorInstance.SecondaryData;
    }
    DestructItems<FPSOPrecacheVertexFactoryDataPerMaterialIndex,int>
              ((FPSOPrecacheVertexFactoryDataPerMaterialIndex *)FVar9,local_120.ArrayNum);
    if (local_120.AllocatorInstance.SecondaryData !=
        (ForElementType<FPSOPrecacheVertexFactoryDataPerMaterialIndex>)0x0) {
      FMemory::Free((void *)local_120.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// ReleaseAsyncProperty @ 1486e5fd0

void __thiscall
USkinnedAsset::ReleaseAsyncProperty
          (USkinnedAsset *this,ulong64 param_1,ESkinnedAssetAsyncPropertyLockType param_2)

{
  return;
}

// SetSkeleton @ 1486efa10

void __thiscall USkinnedAsset::SetSkeleton(USkinnedAsset *this,USkeleton *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h"
             ,0xb0,L"Pure virtual not implemented (%s)");
  return;
}

// SetSkinWeightProfilesData @ 1486efa40

void __thiscall
USkinnedAsset::SetSkinWeightProfilesData
          (USkinnedAsset *this,int param_1,FSkinWeightProfilesData *param_2)

{
  return;
}

// StaticRegisterNativesUSkinnedAsset @ 1486f1760

void __cdecl USkinnedAsset::StaticRegisterNativesUSkinnedAsset(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_USkinnedAsset_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateUVChannelData @ 1486f6ef0

void __thiscall USkinnedAsset::UpdateUVChannelData(USkinnedAsset *this,bool param_1)

{
  return;
}

// WaitUntilAsyncPropertyReleasedInternal @ 1486f8040

void __thiscall
USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal
          (USkinnedAsset *this,ulong64 param_1,ESkinnedAssetAsyncPropertyLockType param_2)

{
  return;
}

// _getUObject @ 1486fa230

UObject * __thiscall USkinnedAsset::_getUObject(USkinnedAsset *this)

{
  return (UObject *)&this[-1].field_0x8;
}

// execFindSocket @ 1486fa9b0

void __cdecl USkinnedAsset::execFindSocket(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x3f0))(param_1,local_res8);
  *(undefined8 *)param_3 = uVar2;
  return;
}

// execFindSocketInfo @ 1486faa60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl USkinnedAsset::execFindSocketInfo(UObject *param_1,FFrame *param_2,void *param_3)

{
  double *pdVar1;
  uchar *puVar2;
  FProperty *pFVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  double *pdVar15;
  uchar *puVar16;
  undefined1 auStack_d8 [32];
  uchar *local_b8;
  uchar local_a8 [4];
  undefined4 local_a4;
  undefined8 local_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  undefined1 local_78 [16];
  double local_68;
  double dStack_60;
  undefined1 local_58 [16];
  double local_48;
  double dStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_a0 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar9 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar12 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar13 = GlobalVectorConstants::Float1110.m128_f32[3];
  local_98 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_90 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_88 = (double)fVar8;
  dStack_80 = (double)fVar11;
  local_68 = (double)fVar9;
  dStack_60 = (double)fVar12;
  local_78._8_4_ = SUB84((double)fVar6,0);
  local_78._0_8_ = (double)fVar4;
  local_78._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  local_48 = (double)fVar10;
  dStack_40 = (double)fVar13;
  local_58._8_4_ = SUB84((double)fVar7,0);
  local_58._0_8_ = (double)fVar5;
  local_58._12_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  pdVar1 = (double *)param_2->MostRecentPropertyAddress;
  local_a8[0] = '\0';
  local_a8[1] = '\0';
  local_a8[2] = '\0';
  local_a8[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pdVar15 = &local_98;
  if (pdVar1 != (double *)0x0) {
    pdVar15 = pdVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  puVar2 = param_2->MostRecentPropertyAddress;
  local_a4 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar16 = local_a8;
  if (puVar2 != (uchar *)0x0) {
    puVar16 = puVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a4,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a4);
  }
  local_b8 = (uchar *)&local_a4;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    local_b8 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar14 = (**(code **)(*(longlong *)param_1 + 0x3f8))(param_1,local_a0,pdVar15,puVar16);
  *(undefined8 *)param_3 = uVar14;
  return;
}

