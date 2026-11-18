// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 7

// StaticStruct @ 1463ead40

UScriptStruct * __cdecl FAnimNode_TwoWayBlend::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_TwoWayBlend.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_TwoWayBlend.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend,(UObject *)pUVar1,
                         L"AnimNode_TwoWayBlend");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_TwoWayBlend.OuterSingleton;
}

// Initialize_AnyThread @ 1463eadc0

void __thiscall
FAnimNode_TwoWayBlend::Initialize_AnyThread
          (FAnimNode_TwoWayBlend *this,FAnimationInitializeContext *param_1)

{
  undefined1 *puVar1;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_TwoWayBlend::Initialize_AnyThread");
  FAnimNode_Base::Initialize_AnyThread((FAnimNode_Base *)this,param_1);
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->A,param_1);
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->B,param_1);
  this->bAIsRelevant = '\0';
  this->bBIsRelevant = '\0';
  (this->AlphaBoolBlend).bInitialized = false;
  (this->AlphaScaleBiasClamp).bInitialized = false;
  FStatsHierarchical::EndMeasurement();
  return;
}

// CacheBones_AnyThread @ 1463eae30

void __thiscall
FAnimNode_TwoWayBlend::CacheBones_AnyThread
          (FAnimNode_TwoWayBlend *this,FAnimationCacheBonesContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_TwoWayBlend::CacheBones_AnyThread");
  FPoseLinkBase::CacheBones((FPoseLinkBase *)&this->A,param_1);
  FPoseLinkBase::CacheBones((FPoseLinkBase *)&this->B,param_1);
  FStatsHierarchical::EndMeasurement();
  return;
}

// Update_AnyThread @ 1463eae80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_TwoWayBlend::Update_AnyThread
          (FAnimNode_TwoWayBlend *this,FAnimationUpdateContext *param_1)

{
  int *piVar1;
  EAnimAlphaInputType EVar2;
  byte bVar3;
  int iVar4;
  FName FVar5;
  UAnimInstance *this_00;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  uchar uVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_TwoWayBlend::Update_AnyThread(FAnimationUpdateContext_const_&)_::_2_::FStat_STAT_FAnimationNode_TwoWayBlend_Update>
  FVar14;
  FExposedValueHandler *this_01;
  UClass *pUVar15;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  byte bVar16;
  FAnimationUpdateContext *pFVar17;
  uint uVar18;
  float *pfVar19;
  FColor_u_0 FVar20;
  byte *pbVar21;
  float fVar22;
  float fVar23;
  bool local_res8 [8];
  FName local_res10;
  byte *local_res18;
  FName local_98;
  FAnimationUpdateContext local_88;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_TwoWayBlend::Update_AnyThread");
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FAnimationNode_TwoWayBlend_Update ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_TwoWayBlend::Update_AnyThread(FAnimationUpdateContext_const_&)_::_2_::FStat_STAT_FAnimationNode_TwoWayBlend_Update>
         )0x0) {
      pFVar13 = ::FName::FName((FName *)local_res8,"STAT_FAnimationNode_TwoWayBlend_Update");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAnimationNode_TwoWayBlend_Update,
                 *pFVar13,L"STAT_FAnimationNode_TwoWayBlend_Update","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar14 = StatPtr_STAT_FAnimationNode_TwoWayBlend_Update;
  if (StatPtr_STAT_FAnimationNode_TwoWayBlend_Update ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_TwoWayBlend::Update_AnyThread(FAnimationUpdateContext_const_&)_::_2_::FStat_STAT_FAnimationNode_TwoWayBlend_Update>
       )0x0) {
    pFVar13 = ::FName::FName(&local_res10,"STAT_FAnimationNode_TwoWayBlend_Update");
    FVar14 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_TwoWayBlend::Update_AnyThread(FAnimationUpdateContext_const_&)_::_2_::FStat_STAT_FAnimationNode_TwoWayBlend_Update>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FAnimationNode_TwoWayBlend_Update,*pFVar13,
                          L"STAT_FAnimationNode_TwoWayBlend_Update","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar5 = *(FName *)FVar14;
  bVar9 = false;
  bVar11 = false;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  FVar20.Bits = (uint)FVar5.ComparisonIndex.Value;
  uVar18 = FVar5.Number;
  if ((FVar20.Bits == 0) && (uVar18 == 0)) {
LAB_1463eafe7:
    bVar10 = false;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0] = false;
      local_res8[1] = false;
      local_res8[2] = false;
      local_res8[3] = false;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)local_res8,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar9 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8._0_4_ = FVar20.Bits;
        local_res8._4_4_ = uVar18;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)local_res8,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\AnimNodes\\AnimNode_TwoWayBlend.cpp"
                   ,0x28);
        bVar9 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1463eafe7;
    local_res8._0_4_ = FVar20.Bits;
    local_res8._4_4_ = uVar18;
    FThreadStats::AddMessage(FVar5,CycleScopeStart);
    bVar10 = true;
    local_98 = FVar5;
  }
  this_01 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
  FExposedValueHandler::Execute(this_01,(FAnimationBaseContext *)param_1);
  EVar2 = this->AlphaInputType;
  this->InternalBlendAlpha = 0.0;
  if (EVar2 == Float) {
    fVar23 = FInputScaleBiasClamp::ApplyTo
                       (&this->AlphaScaleBiasClamp,this->Alpha,param_1->DeltaTime);
    fVar23 = FInputScaleBias::ApplyTo(&this->AlphaScaleBias,fVar23);
LAB_1463eb0cc:
    this->InternalBlendAlpha = fVar23;
  }
  else {
    if (EVar2 == Bool) {
      fVar23 = FInputAlphaBoolBlend::ApplyTo
                         (&this->AlphaBoolBlend,this->bAlphaBoolEnabled,param_1->DeltaTime);
      goto LAB_1463eb0cc;
    }
    if ((EVar2 == Curve) &&
       (this_00 = *(UAnimInstance **)(param_1->_padding_ + 0x140), this_00 != (UAnimInstance *)0x0))
    {
      pUVar15 = Z_Construct_UClass_UAnimInstance_NoRegister();
      iVar4 = (int)pUVar15->_padding_;
      if ((iVar4 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar4 * 8) ==
          &pUVar15->_padding_)) {
        fVar23 = param_1->DeltaTime;
        fVar22 = UAnimInstance::GetCurveValue(this_00,this->AlphaCurveName);
        fVar23 = FInputScaleBiasClamp::ApplyTo(&this->AlphaScaleBiasClamp,fVar22,fVar23);
        goto LAB_1463eb0cc;
      }
    }
  }
  fVar22 = __real_3f800000;
  fVar23 = this->InternalBlendAlpha;
  pbVar21 = &this->field_0x31;
  if (__real_3f800000 <= fVar23) {
    fVar23 = __real_3f800000;
  }
  if (fVar23 <= 0.0) {
    fVar23 = 0.0;
  }
  uVar12 = fVar23 < __real_3f7fff58;
  this->InternalBlendAlpha = fVar23;
  local_res8[0] = (bool)uVar12;
  local_res10.ComparisonIndex.Value._0_1_ = __real_3727c5ac < fVar23;
  if (this->bResetChildOnActivation != '\0') {
    if (((bool)uVar12) && (this->bAIsRelevant == '\0')) {
      local_res18 = pbVar21;
      FAnimationBaseContext::FAnimationBaseContext
                ((FAnimationBaseContext *)&local_88,(FAnimInstanceProxy *)param_1->_padding_,
                 (FAnimationUpdateSharedContext *)param_1->_padding_);
      FPoseLinkBase::Initialize((FPoseLinkBase *)&this->A,(FAnimationInitializeContext *)&local_88);
    }
    local_res18 = &this->field_0x31;
    if (((char)local_res10.ComparisonIndex.Value != '\0') && (this->bBIsRelevant == '\0')) {
      FAnimationBaseContext::FAnimationBaseContext
                ((FAnimationBaseContext *)&local_88,(FAnimInstanceProxy *)param_1->_padding_,
                 (FAnimationUpdateSharedContext *)param_1->_padding_);
      FPoseLinkBase::Initialize((FPoseLinkBase *)&this->B,(FAnimationInitializeContext *)&local_88);
    }
    pbVar21 = local_res18;
    uVar12 = local_res8[0];
  }
  pfVar19 = &this->InternalBlendAlpha;
  *pbVar21 = *pbVar21 & 0xfd;
  *pbVar21 = *pbVar21 | uVar12 * '\x02';
  bVar3 = *pbVar21;
  bVar16 = bVar3 & 0xfb | (char)local_res10.ComparisonIndex.Value << 2;
  *pbVar21 = bVar16;
  if ((char)local_res10.ComparisonIndex.Value == '\0') {
    FPoseLinkBase::Update((FPoseLinkBase *)&this->A,param_1);
    if ((*pbVar21 & 0x10) == 0) goto LAB_1463eb280;
    local_88._padding_ = param_1->_padding_;
    local_88._padding_ = param_1->_padding_;
    local_88.CurrentWeight = param_1->CurrentWeight * __real_37a7c5ac;
LAB_1463eb25f:
    local_88._padding_ = param_1->_padding_;
    local_88._padding_ = param_1->_padding_;
    uVar8 = param_1->RootMotionWeightModifier;
    local_88.DeltaTime = param_1->DeltaTime;
    local_88._44_4_ = *(undefined4 *)&param_1->field_0x2c;
    local_88.RootMotionWeightModifier = (float)uVar8;
    pFVar17 = &local_88;
  }
  else {
    if ((bVar3 & 2) != 0) {
      local_88._padding_ = param_1->_padding_;
      local_88._padding_ = param_1->_padding_;
      local_88._padding_ = param_1->_padding_;
      local_88._padding_ = param_1->_padding_;
      uVar6 = param_1->RootMotionWeightModifier;
      local_88.DeltaTime = param_1->DeltaTime;
      local_88._44_4_ = *(undefined4 *)&param_1->field_0x2c;
      local_88.RootMotionWeightModifier = (float)uVar6;
      local_88.CurrentWeight = (fVar22 - *pfVar19) * param_1->CurrentWeight;
      FPoseLinkBase::Update((FPoseLinkBase *)&this->A,&local_88);
      local_88._padding_ = param_1->_padding_;
      local_88._padding_ = param_1->_padding_;
      local_88.CurrentWeight = *pfVar19 * param_1->CurrentWeight;
      goto LAB_1463eb25f;
    }
    pFVar17 = param_1;
    if ((bVar16 & 0x10) != 0) {
      local_88._padding_ = param_1->_padding_;
      local_88._padding_ = param_1->_padding_;
      local_88._padding_ = param_1->_padding_;
      local_88._padding_ = param_1->_padding_;
      uVar7 = param_1->RootMotionWeightModifier;
      local_88.DeltaTime = param_1->DeltaTime;
      local_88._44_4_ = *(undefined4 *)&param_1->field_0x2c;
      local_88.RootMotionWeightModifier = (float)uVar7;
      local_88.CurrentWeight = param_1->CurrentWeight * __real_37a7c5ac;
      FPoseLinkBase::Update((FPoseLinkBase *)&this->A,&local_88);
    }
  }
  FPoseLinkBase::Update((FPoseLinkBase *)&this->B,pFVar17);
LAB_1463eb280:
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),L"Alpha",
             *pfVar19);
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar10) && (local_98 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_02 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_02 == (FThreadStats *)0x0) {
      this_03 = FThreadStatsPool::Get();
      this_02 = FThreadStatsPool::GetFromPool(this_03);
    }
    if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
      local_88._padding_ = (ulonglong)local_98 & 0xffff6fffffffffff | 0x600000000000;
      QueryPerformanceCounter((LARGE_INTEGER *)local_res8);
      local_88._padding_ = (longlong)(uint)local_res8._0_4_;
      FThreadStats::AddStatMessage(this_02,(FStatMessage *)&local_88);
      piVar1 = &this_02->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_02,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// Evaluate_AnyThread @ 1463eb420

void __thiscall
FAnimNode_TwoWayBlend::Evaluate_AnyThread(FAnimNode_TwoWayBlend *this,FPoseContext *param_1)

{
  FPoseLink *this_00;
  undefined1 local_198 [88];
  TArray<int,TSizedDefaultAllocator<32>_> *pTStack_140;
  undefined8 local_138;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_130;
  undefined8 local_128;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *local_120
  ;
  undefined8 local_118;
  void *local_110;
  undefined8 local_108;
  bool local_100;
  undefined1 local_f8 [88];
  TArray<int,TSizedDefaultAllocator<32>_> *pTStack_a0;
  undefined8 local_98;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_90;
  undefined8 local_88;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *local_80;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  bool local_60;
  FAnimationPoseData local_58;
  FAnimationPoseData local_40;
  FAnimationPoseData local_28;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_TwoWayBlend::Evaluate_AnyThread");
  if (this->bBIsRelevant == '\0') {
    this_00 = &this->A;
  }
  else {
    if (this->bAIsRelevant != '\0') {
      FAnimationBaseContext::FAnimationBaseContext
                ((FAnimationBaseContext *)local_f8,(FAnimInstanceProxy *)param_1->_padding_,
                 (FAnimationUpdateSharedContext *)0x0);
      local_60 = param_1->bExpectsAdditivePose != false;
      local_f8._32_8_ = 0;
      local_f8._40_8_ = 0;
      local_f8._48_8_ = 0;
      local_f8._56_8_ = 0;
      local_f8._64_8_ = 0;
      local_f8[0x48] = 0;
      local_f8._80_8_ = 0;
      pTStack_a0 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
      local_98 = 0;
      local_90 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
      local_88 = 0;
      local_80 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                  *)0x0;
      local_78 = 0;
      local_70 = (void *)0x0;
      local_68 = 0;
      FPoseContext::InitializeImpl
                ((FPoseContext *)local_f8,(FAnimInstanceProxy *)param_1->_padding_);
      local_f8._20_4_ = *(int *)((longlong)&param_1->_padding_ + 4);
      local_f8._24_4_ = (undefined4)param_1->_padding_;
      FAnimationBaseContext::FAnimationBaseContext
                ((FAnimationBaseContext *)local_198,(FAnimInstanceProxy *)param_1->_padding_,
                 (FAnimationUpdateSharedContext *)0x0);
      local_100 = param_1->bExpectsAdditivePose != false;
      local_198._32_8_ = 0;
      local_198._40_8_ = 0;
      local_198._48_8_ = 0;
      local_198._56_8_ = 0;
      local_198._64_8_ = 0;
      local_198[0x48] = 0;
      local_198._80_8_ = 0;
      pTStack_140 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
      local_138 = 0;
      local_130 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
      local_128 = 0;
      local_120 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                   *)0x0;
      local_118 = 0;
      local_110 = (void *)0x0;
      local_108 = 0;
      FPoseContext::InitializeImpl
                ((FPoseContext *)local_198,(FAnimInstanceProxy *)param_1->_padding_);
      local_198._20_4_ = *(int *)((longlong)&param_1->_padding_ + 4);
      local_198._24_4_ = (undefined4)param_1->_padding_;
      FPoseLink::Evaluate(&this->A,(FPoseContext *)local_f8);
      FPoseLink::Evaluate(&this->B,(FPoseContext *)local_198);
      FAnimationPoseData::FAnimationPoseData(&local_58,param_1);
      FAnimationPoseData::FAnimationPoseData(&local_28,(FPoseContext *)local_f8);
      FAnimationPoseData::FAnimationPoseData(&local_40,(FPoseContext *)local_198);
      FAnimationRuntime::BlendTwoPosesTogether
                (&local_28,&local_40,__real_3f800000 - this->InternalBlendAlpha,&local_58);
      if (local_110 != (void *)0x0) {
        FMemory::Free(local_110);
      }
      DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
                (local_120,(int)local_118);
      if (local_120 !=
          (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *
          )0x0) {
        FMemory::Free(local_120);
      }
      DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
                (local_130,(int)local_128);
      if (local_130 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_130);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTStack_140,(int)local_138);
      if (pTStack_140 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(pTStack_140);
      }
      if (local_70 != (void *)0x0) {
        FMemory::Free(local_70);
      }
      DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
                (local_80,(int)local_78);
      if (local_80 !=
          (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *
          )0x0) {
        FMemory::Free(local_80);
      }
      DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
                (local_90,(int)local_88);
      if (local_90 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_90);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTStack_a0,(int)local_98);
      if (pTStack_a0 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(pTStack_a0);
      }
      goto LAB_1463eb689;
    }
    this_00 = &this->B;
  }
  FPoseLink::Evaluate(this_00,param_1);
LAB_1463eb689:
  FStatsHierarchical::EndMeasurement();
  return;
}

// GatherDebugData @ 1463eb6b0

void __thiscall
FAnimNode_TwoWayBlend::GatherDebugData(FAnimNode_TwoWayBlend *this,FNodeDebugData *param_1)

{
  ForAnyElementType _Src;
  UPackage *pUVar1;
  FNodeDebugData *pFVar2;
  int iVar3;
  FName local_res8;
  FString local_48;
  FString local_38 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_TwoWayBlend::GatherDebugData");
  if (Z_Registration_Info_UScriptStruct_FAnimNode_TwoWayBlend.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_TwoWayBlend.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend,(UObject *)pUVar1,
                         L"AnimNode_TwoWayBlend");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_TwoWayBlend.OuterSingleton)->
                      _padding_;
  ::FName::ToString(&local_res8,&local_48);
  ::FString::PrintfImpl(local_38,L"%s<W:%.1f%%> %s");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  ::FString::PrintfImpl(&local_48,L"(Alpha: %.1f%%)");
  iVar3 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars(local_38,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar3);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  _Src.Data = local_38[0].Data.AllocatorInstance.Data;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (int)local_38[0].Data._8_8_;
  local_48.Data.ArrayNum = iVar3;
  if (iVar3 == 0) {
    local_48.Data._8_8_ = local_38[0].Data._8_8_ & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar3,0,(ForAnyElementType *)&local_48,iVar3,&local_48.Data.ArrayMax);
    memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar3 * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_48,false);
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pFVar2 = FNodeDebugData::BranchFlow(param_1,__real_3f800000 - this->InternalBlendAlpha,&local_48);
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->A,pFVar2);
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pFVar2 = FNodeDebugData::BranchFlow(param_1,this->InternalBlendAlpha,&local_48);
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->B,pFVar2);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// FAnimNode_TwoWayBlend @ 146406320

FAnimNode_TwoWayBlend * __thiscall
FAnimNode_TwoWayBlend::FAnimNode_TwoWayBlend(FAnimNode_TwoWayBlend *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  float fVar3;
  
  fVar3 = __real_3e4ccccd;
  this->_padding_ = (longlong)&___7FAnimNode_TwoWayBlend__6B_;
  this->_padding_ = 0;
  *(undefined8 *)&this->A = 0;
  puVar2 = &this->field_0x31;
  this->bAlphaBoolEnabled = '\x01';
  this->bAlwaysUpdateChildren = '\0';
  this->bResetChildOnActivation = '\0';
  this->bBIsRelevant = '\0';
  this->bAIsRelevant = '\0';
  *(undefined4 *)&(this->A).field_0x8 = 0xffffffff;
  (this->A).field_0xc = 0;
  *(undefined8 *)&this->B = 0;
  *(undefined4 *)&(this->B).field_0x8 = 0xffffffff;
  (this->B).field_0xc = 0;
  this->AlphaInputType = Float;
  this->Alpha = 0.0;
  (this->AlphaScaleBias).Scale = 1.0;
  (this->AlphaScaleBias).Bias = 0.0;
  (this->AlphaBoolBlend).BlendInTime = 0.0;
  (this->AlphaBoolBlend).BlendOutTime = 0.0;
  (this->AlphaBoolBlend).BlendOption = HermiteCubic;
  (this->AlphaBoolBlend).bInitialized = false;
  (this->AlphaBoolBlend).CustomCurve.field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  FAlphaBlend::FAlphaBlend(&(this->AlphaBoolBlend).AlphaBlend,fVar3);
  (this->AlphaCurveName).ComparisonIndex = 0;
  (this->AlphaCurveName).Number = 0;
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
  this->InternalBlendAlpha = 0.0;
  return this;
}

