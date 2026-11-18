// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticStruct @ 147499b60

UScriptStruct * __cdecl FAnimNode_ApplyMeshSpaceAdditive::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive,
                         (UObject *)pUVar1,L"AnimNode_ApplyMeshSpaceAdditive");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive.OuterSingleton;
}

// FAnimNode_ApplyMeshSpaceAdditive @ 1474b0ea0

FAnimNode_ApplyMeshSpaceAdditive * __thiscall
FAnimNode_ApplyMeshSpaceAdditive::FAnimNode_ApplyMeshSpaceAdditive
          (FAnimNode_ApplyMeshSpaceAdditive *this)

{
  float fVar1;
  
  this->bRootSpaceAdditive = '\0';
  this->bAlphaBoolEnabled = '\x01';
  fVar1 = __real_3e4ccccd;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FAnimNode_ApplyMeshSpaceAdditive__6B_;
  *(undefined8 *)&this->Base = 0;
  (this->Base).field_0xc = 0;
  *(undefined8 *)&this->Additive = 0;
  (this->Additive).field_0xc = 0;
  this->AlphaInputType = Float;
  (this->AlphaBoolBlend).BlendInTime = 0.0;
  (this->AlphaBoolBlend).BlendOutTime = 0.0;
  (this->AlphaBoolBlend).CustomCurve.field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  *(undefined4 *)&(this->Base).field_0x8 = 0xffffffff;
  *(undefined4 *)&(this->Additive).field_0x8 = 0xffffffff;
  this->Alpha = 1.0;
  (this->AlphaBoolBlend).BlendOption = HermiteCubic;
  (this->AlphaBoolBlend).bInitialized = false;
  FAlphaBlend::FAlphaBlend(&(this->AlphaBoolBlend).AlphaBlend,fVar1);
  (this->AlphaCurveName).ComparisonIndex = 0;
  (this->AlphaCurveName).Number = 0;
  (this->AlphaScaleBias).Scale = 1.0;
  (this->AlphaScaleBias).Bias = 0.0;
  (this->AlphaScaleBiasClamp).bMapRange = false;
  (this->AlphaScaleBiasClamp).bClampResult = false;
  (this->AlphaScaleBiasClamp).bInterpResult = false;
  (this->AlphaScaleBiasClamp).bInitialized = false;
  (this->AlphaScaleBiasClamp).InRange.Min = 0.0;
  *(undefined8 *)&(this->AlphaScaleBiasClamp).InRange.Max = 0x3f800000;
  (this->AlphaScaleBiasClamp).OutRange.Max = 1.0;
  (this->AlphaScaleBiasClamp).Scale = 1.0;
  (this->AlphaScaleBiasClamp).Bias = 0.0;
  (this->AlphaScaleBiasClamp).ClampMin = 0.0;
  (this->AlphaScaleBiasClamp).ClampMax = 1.0;
  (this->AlphaScaleBiasClamp).InterpSpeedIncreasing = 10.0;
  (this->AlphaScaleBiasClamp).InterpSpeedDecreasing = 10.0;
  (this->AlphaScaleBiasClamp).InterpolatedResult = 0.0;
  this->LODThreshold = -1;
  this->ActualAlpha = 0.0;
  return this;
}

// CacheBones_AnyThread @ 1474c1ab0

void __thiscall
FAnimNode_ApplyMeshSpaceAdditive::CacheBones_AnyThread
          (FAnimNode_ApplyMeshSpaceAdditive *this,FAnimationCacheBonesContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_ApplyMeshSpaceAdditive::CacheBones_AnyThread");
  FPoseLinkBase::CacheBones((FPoseLinkBase *)&this->Base,param_1);
  FPoseLinkBase::CacheBones((FPoseLinkBase *)&this->Additive,param_1);
  FStatsHierarchical::EndMeasurement();
  return;
}

// Evaluate_AnyThread @ 1474cf990

void __thiscall
FAnimNode_ApplyMeshSpaceAdditive::Evaluate_AnyThread
          (FAnimNode_ApplyMeshSpaceAdditive *this,FPoseContext *param_1)

{
  longlong lVar1;
  FBoneContainer *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 local_d8 [88];
  TArray<int,TSizedDefaultAllocator<32>_> *pTStack_80;
  undefined8 local_78;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_70;
  undefined8 local_68;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  bool local_40;
  FAnimationPoseData local_38;
  FAnimationPoseData local_20;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_ApplyMeshSpaceAdditive::Evaluate_AnyThread");
  if (this->ActualAlpha <= __real_3727c5ac) {
    FPoseLink::Evaluate(&this->Base,param_1);
  }
  else {
    lVar1 = param_1->_padding_;
    local_d8._8_8_ = 0;
    local_d8[0x10] = 1;
    local_d8._20_8_ = 0xffffffffffffffff;
    local_d8._32_8_ = 0;
    local_d8._40_8_ = 0;
    local_d8._48_8_ = 0;
    local_d8._56_8_ = 0;
    local_d8._64_8_ = 0;
    local_d8[0x48] = 0;
    local_d8._80_8_ = 0;
    pTStack_80 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
    local_78 = 0;
    local_70 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
    local_68 = 0;
    local_60 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                *)0x0;
    local_58 = 0;
    local_50 = (void *)0x0;
    local_48 = 0;
    local_40 = true;
    local_d8._0_8_ = lVar1;
    if (*(longlong *)(lVar1 + 0x660) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = *(FBoneContainer **)(lVar1 + 0x660);
    FBaseCompactPose<TMemStackAllocator<0>_>::SetBoneContainer
              ((FBaseCompactPose<TMemStackAllocator<0>_> *)(local_d8 + 0x20),pFVar2);
    FBlendedCurve::InitFrom((FBlendedCurve *)(local_d8 + 0x38),pFVar2);
    local_d8._20_8_ = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
    FPoseLink::Evaluate(&this->Base,param_1);
    FPoseLink::Evaluate(&this->Additive,(FPoseContext *)local_d8);
    FAnimationPoseData::FAnimationPoseData(&local_20,param_1);
    FAnimationPoseData::FAnimationPoseData(&local_38,(FPoseContext *)local_d8);
    if (this->bRootSpaceAdditive == 0) {
      FAnimationRuntime::AccumulateAdditivePose
                (&local_20,&local_38,this->ActualAlpha,AAT_RotationOffsetMeshSpace);
    }
    else {
      FAnimationRuntime::AccumulateRootSpaceRotationAdditiveToLocalPose
                (&local_20,&local_38,this->ActualAlpha);
    }
    FCompactPose::NormalizeRotations(&param_1->Pose);
    if (local_50 != (void *)0x0) {
      FMemory::Free(local_50);
    }
    DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
              (local_60,(int)local_58);
    if (local_60 !=
        (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *)
        0x0) {
      FMemory::Free(local_60);
    }
    DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
              (local_70,(int)local_68);
    if (local_70 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_70);
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTStack_80,(int)local_78);
    if (pTStack_80 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(pTStack_80);
    }
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// GatherDebugData @ 1474d4bb0

void __thiscall
FAnimNode_ApplyMeshSpaceAdditive::GatherDebugData
          (FAnimNode_ApplyMeshSpaceAdditive *this,FNodeDebugData *param_1)

{
  longlong *plVar1;
  ForAnyElementType _Src;
  UPackage *pUVar2;
  FNodeDebugData *pFVar3;
  int iVar4;
  FName local_res8;
  FString local_48;
  FString local_38 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive,
                         (UObject *)pUVar2,L"AnimNode_ApplyMeshSpaceAdditive");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive.
                      OuterSingleton)->_padding_;
  ::FName::ToString(&local_res8,&local_48);
  ::FString::PrintfImpl(local_38,L"%s<W:%.1f%%> %s");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  ::FString::PrintfImpl(&local_48,L"(Alpha: %.1f%%)");
  iVar4 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  ::FString::AppendChars(local_38,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar4);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  _Src.Data = local_38[0].Data.AllocatorInstance.Data;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar4 = (int)local_38[0].Data._8_8_;
  local_48.Data.ArrayNum = iVar4;
  if (iVar4 == 0) {
    local_48.Data._8_8_ = local_38[0].Data._8_8_ & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar4,0,(ForAnyElementType *)&local_48,iVar4,&local_48.Data.ArrayMax);
    memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar4 * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_48,false);
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pFVar3 = FNodeDebugData::BranchFlow(param_1,__real_3f800000,&local_48);
  plVar1 = *(longlong **)&this->Base;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,pFVar3);
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pFVar3 = FNodeDebugData::BranchFlow(param_1,this->ActualAlpha,&local_48);
  plVar1 = *(longlong **)&this->Additive;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,pFVar3);
  }
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  return;
}

// GetLODThreshold @ 1474da400

int __thiscall
FAnimNode_ApplyMeshSpaceAdditive::GetLODThreshold(FAnimNode_ApplyMeshSpaceAdditive *this)

{
  return this->LODThreshold;
}

// Initialize_AnyThread @ 1474e93c0

void __thiscall
FAnimNode_ApplyMeshSpaceAdditive::Initialize_AnyThread
          (FAnimNode_ApplyMeshSpaceAdditive *this,FAnimationInitializeContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_ApplyMeshSpaceAdditive::Initialize_AnyThread");
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->Base,param_1);
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->Additive,param_1);
  (this->AlphaBoolBlend).bInitialized = false;
  (this->AlphaScaleBiasClamp).bInitialized = false;
  FStatsHierarchical::EndMeasurement();
  return;
}

// Update_AnyThread @ 147501730

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_ApplyMeshSpaceAdditive::Update_AnyThread
          (FAnimNode_ApplyMeshSpaceAdditive *this,FAnimationUpdateContext *param_1)

{
  int *piVar1;
  EAnimAlphaInputType EVar2;
  longlong lVar3;
  UAnimInstance *this_00;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_ApplyMeshSpaceAdditive::Update_AnyThread(FAnimationUpdateContext_const_&)_::_2_::FStat_STAT_FAnimNode_ApplyMeshSpaceAdditive_Update>
  FVar10;
  FExposedValueHandler *this_01;
  UClass *pUVar11;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  uint uVar12;
  FName FVar13;
  float *pfVar14;
  FNameEntryId FVar15;
  FNameEntryId FVar16;
  float fVar17;
  float fVar18;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_88;
  FAnimationUpdateContext local_78;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_ApplyMeshSpaceAdditive::Update_AnyThread");
  FVar15.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FAnimNode_ApplyMeshSpaceAdditive_Update ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_ApplyMeshSpaceAdditive::Update_AnyThread(FAnimationUpdateContext_const_&)_::_2_::FStat_STAT_FAnimNode_ApplyMeshSpaceAdditive_Update>
         )0x0) {
      pFVar9 = ::FName::FName((FName *)&local_res8.s,"STAT_FAnimNode_ApplyMeshSpaceAdditive_Update")
      ;
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAnimNode_ApplyMeshSpaceAdditive_Update,
                 *pFVar9,L"STAT_FAnimNode_ApplyMeshSpaceAdditive_Update","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar10 = StatPtr_STAT_FAnimNode_ApplyMeshSpaceAdditive_Update;
  if (StatPtr_STAT_FAnimNode_ApplyMeshSpaceAdditive_Update ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_ApplyMeshSpaceAdditive::Update_AnyThread(FAnimationUpdateContext_const_&)_::_2_::FStat_STAT_FAnimNode_ApplyMeshSpaceAdditive_Update>
       )0x0) {
    pFVar9 = ::FName::FName(&local_res10,"STAT_FAnimNode_ApplyMeshSpaceAdditive_Update");
    FVar10 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_ApplyMeshSpaceAdditive::Update_AnyThread(FAnimationUpdateContext_const_&)_::_2_::FStat_STAT_FAnimNode_ApplyMeshSpaceAdditive_Update>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FAnimNode_ApplyMeshSpaceAdditive_Update,*pFVar9,
                          L"STAT_FAnimNode_ApplyMeshSpaceAdditive_Update","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar10;
  bVar5 = false;
  bVar7 = false;
  FVar16 = FVar13.ComparisonIndex.Value;
  uVar12 = FVar13.Number;
  if ((FVar16.Value == 0) && (uVar12 == 0)) {
LAB_1475018ca:
    bVar6 = false;
    FVar13.ComparisonIndex.Value = 0;
    FVar13.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar16.Value;
        local_res8.s.HighPart = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_ApplyMeshSpaceAdditive.cpp"
                   ,0x27);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1475018ca;
    local_res8.s.LowPart = FVar16.Value;
    local_res8.s.HighPart = uVar12;
    FThreadStats::AddMessage(FVar13,CycleScopeStart);
    bVar6 = true;
    FVar15.Value = FVar16.Value;
  }
  FPoseLinkBase::Update((FPoseLinkBase *)&this->Base,param_1);
  lVar3 = param_1->_padding_;
  iVar8 = (**(code **)(this->_padding_ + 0x90))(this);
  if ((iVar8 != -1) && (iVar8 < *(int *)(lVar3 + 0x670))) goto LAB_147501a61;
  this_01 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
  FExposedValueHandler::Execute(this_01,(FAnimationBaseContext *)param_1);
  EVar2 = this->AlphaInputType;
  this->ActualAlpha = 0.0;
  if (EVar2 == Float) {
    fVar18 = param_1->DeltaTime;
    fVar17 = FInputScaleBias::ApplyTo(&this->AlphaScaleBias,this->Alpha);
LAB_1475019c6:
    fVar18 = FInputScaleBiasClamp::ApplyTo(&this->AlphaScaleBiasClamp,fVar17,fVar18);
LAB_1475019d8:
    this->ActualAlpha = fVar18;
  }
  else {
    if (EVar2 == Bool) {
      fVar18 = FInputAlphaBoolBlend::ApplyTo
                         (&this->AlphaBoolBlend,this->bAlphaBoolEnabled,param_1->DeltaTime);
      goto LAB_1475019d8;
    }
    if ((EVar2 == Curve) &&
       (this_00 = *(UAnimInstance **)(param_1->_padding_ + 0x140), this_00 != (UAnimInstance *)0x0))
    {
      pUVar11 = Z_Construct_UClass_UAnimInstance_NoRegister();
      iVar8 = (int)pUVar11->_padding_;
      if ((iVar8 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar8 * 8) ==
          &pUVar11->_padding_)) {
        fVar18 = param_1->DeltaTime;
        fVar17 = UAnimInstance::GetCurveValue(this_00,this->AlphaCurveName);
        goto LAB_1475019c6;
      }
    }
  }
  fVar18 = __real_3727c5ac;
  pfVar14 = &this->ActualAlpha;
  fVar17 = *pfVar14;
  if (__real_3f800000 <= *pfVar14) {
    fVar17 = __real_3f800000;
  }
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  *pfVar14 = fVar17;
  if (fVar18 < fVar17) {
    local_78._padding_ = param_1->_padding_;
    local_78._padding_ = param_1->_padding_;
    local_78._padding_ = param_1->_padding_;
    local_78._padding_ = param_1->_padding_;
    uVar4 = param_1->RootMotionWeightModifier;
    local_78.DeltaTime = param_1->DeltaTime;
    local_78._44_4_ = *(undefined4 *)&param_1->field_0x2c;
    local_78.RootMotionWeightModifier = (float)uVar4;
    local_78.CurrentWeight = fVar17 * param_1->CurrentWeight;
    FPoseLinkBase::Update((FPoseLinkBase *)&this->Additive,&local_78);
  }
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),L"Alpha",
             *pfVar14);
LAB_147501a61:
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_02 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_02 == (FThreadStats *)0x0) {
      this_03 = FThreadStatsPool::Get();
      this_02 = FThreadStatsPool::GetFromPool(this_03);
    }
    if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
      local_88.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      local_88.NameAndInfo.Index.Value = FVar15.Value;
      QueryPerformanceCounter(&local_res8);
      local_88.StatData.Pad[4] = '\0';
      local_88.StatData.Pad[5] = '\0';
      local_88.StatData.Pad[6] = '\0';
      local_88.StatData.Pad[7] = '\0';
      local_88.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_88.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_88.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_88.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_02,&local_88);
      piVar1 = &this_02->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_02,false,false);
        FStatsHierarchical::EndMeasurement();
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

