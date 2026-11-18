// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationWarpingRuntime
// Functions: 8

// StaticStruct @ 14a70db50

UScriptStruct * __cdecl FAnimNode_OverrideRootMotion::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_OverrideRootMotion.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_OverrideRootMotion.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_OverrideRootMotion,(UObject *)pUVar1,
                         L"AnimNode_OverrideRootMotion");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_OverrideRootMotion.OuterSingleton;
}

// Update_AnyThread @ 14a70db90

void __thiscall
FAnimNode_OverrideRootMotion::Update_AnyThread
          (FAnimNode_OverrideRootMotion *this,FAnimationUpdateContext *param_1)

{
  FExposedValueHandler *this_00;
  
  FAnimNode_Base::Update_AnyThread((FAnimNode_Base *)this,param_1);
  this_00 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
  FExposedValueHandler::Execute(this_00,(FAnimationBaseContext *)param_1);
  this->DeltaTime = param_1->DeltaTime;
  FPoseLinkBase::Update((FPoseLinkBase *)&this->Source,param_1);
  return;
}

// Evaluate_AnyThread @ 14a70dbe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_OverrideRootMotion::Evaluate_AnyThread
          (FAnimNode_OverrideRootMotion *this,FPoseContext *param_1)

{
  int *piVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [12];
  bool bVar8;
  bool bVar9;
  bool bVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_OverrideRootMotion_Eval> FVar12;
  IAnimRootMotionProvider *pIVar13;
  TVector<double> *pTVar14;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar15;
  FNameEntryId FVar16;
  FName FVar17;
  FNameEntryId FVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  float fVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined4 uVar41;
  undefined4 uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auStackY_228 [32];
  LARGE_INTEGER local_1c8;
  FName local_1c0;
  FStatMessage local_1b0;
  double local_1a0;
  TTransform<double> local_198;
  TTransform<double> local_138;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_228;
  FVar18.Value = 0;
  FVar12 = StatPtr_STAT_OverrideRootMotion_Eval;
  if (StatPtr_STAT_OverrideRootMotion_Eval ==
      (FThreadSafeStaticStat<FStat_STAT_OverrideRootMotion_Eval>)0x0) {
    pFVar11 = ::FName::FName((FName *)&local_1b0,"STAT_OverrideRootMotion_Eval");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_OverrideRootMotion_Eval>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OverrideRootMotion_Eval,*pFVar11,
                        L"OverrideRootMotion Eval","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar12;
  bVar8 = false;
  bVar10 = false;
  local_1c0.ComparisonIndex.Value = 0;
  local_1c0.Number = 0;
  FVar16 = FVar17.ComparisonIndex.Value;
  uVar15 = FVar17.Number;
  if ((FVar16.Value != 0) || (uVar15 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1c8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1c8.s,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1c8.s.LowPart = FVar16.Value;
        local_1c8.s.HighPart = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_1c8.s,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\AnimationWarping\\Source\\Runtime\\Private\\BoneControllers\\AnimNode_OverrideRootMotion.cpp"
                   ,0x3a);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1c8.s.LowPart = FVar16.Value;
      local_1c8.s.HighPart = uVar15;
      local_1c0 = FVar17;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar9 = true;
      FVar18.Value = local_1c0.ComparisonIndex.Value;
      goto LAB_14a70dd7e;
    }
  }
  bVar9 = false;
  FVar17 = local_1c0;
LAB_14a70dd7e:
  FAnimNode_Base::Evaluate_AnyThread((FAnimNode_Base *)this,param_1);
  FPoseLink::Evaluate(&this->Source,param_1);
  pIVar13 = UE::Anim::IAnimRootMotionProvider::Get();
  local_138.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_138.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_138.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_138.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_138.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_138.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (**(code **)((longlong)*pIVar13 + 0x20))(pIVar13,&param_1->CustomAttributes,&local_138);
  pTVar14 = GetOverrideVelocity(this);
  dVar23 = (double)this->DeltaTime;
  lVar2 = param_1->_padding_;
  dVar28 = (pTVar14->field0_0x0)._s_0.Z * dVar23;
  dVar37 = *(double *)(lVar2 + 0x20) * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar38 = *(double *)(lVar2 + 0x28) * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar34 = *(double *)(lVar2 + 0x30) * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar3 = *(double *)(lVar2 + 0x38) * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar6 = (pTVar14->field0_0x0)._s_0.X * dVar23;
  auVar35._8_4_ = SUB84(dVar38,0);
  auVar35._0_8_ = dVar37;
  auVar35._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
  dVar23 = (pTVar14->field0_0x0)._s_0.Y * dVar23;
  auVar30._8_4_ = SUB84(dVar3,0);
  auVar30._0_8_ = dVar34;
  auVar30._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  auVar36 = blendpd(auVar35,auVar30,2);
  uVar41 = SUB84(dVar23,0);
  uVar42 = (undefined4)((ulonglong)dVar23 >> 0x20);
  auVar45._8_4_ = uVar41;
  auVar45._0_8_ = dVar6;
  auVar45._12_4_ = uVar42;
  auVar24._8_4_ = uVar41;
  auVar24._0_8_ = dVar6;
  auVar24._12_4_ = uVar42;
  auVar29._8_4_ = uVar41;
  auVar29._0_8_ = dVar6;
  auVar29._12_4_ = uVar42;
  auVar46._0_8_ = auVar45._8_8_ * dVar37 - dVar6 * dVar38;
  auVar46._8_8_ = dVar28 * dVar38 - auVar24._8_8_ * dVar34;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = dVar28;
  auVar30 = blendpd(auVar29,auVar32,2);
  auVar31._0_8_ = auVar30._0_8_ * dVar34 - auVar36._0_8_ * dVar28;
  auVar31._8_8_ = auVar30._8_8_ * dVar3 - auVar36._8_8_ * 0.0;
  dVar4 = auVar46._8_8_ + auVar46._8_8_;
  dVar5 = auVar31._0_8_ + auVar31._0_8_;
  uVar41 = SUB84(dVar5,0);
  uVar42 = (undefined4)((ulonglong)dVar5 >> 0x20);
  auVar30 = blendpd(auVar46,auVar31,2);
  auVar47._0_8_ = auVar30._0_8_ + auVar30._0_8_;
  auVar47._8_8_ = auVar30._8_8_ + auVar30._8_8_;
  auVar43._8_4_ = uVar41;
  auVar43._0_8_ = dVar4;
  auVar43._12_4_ = uVar42;
  auVar25._8_4_ = uVar41;
  auVar25._0_8_ = dVar4;
  auVar25._12_4_ = uVar42;
  auVar39._8_4_ = uVar41;
  auVar39._0_8_ = dVar4;
  auVar39._12_4_ = uVar42;
  auVar30 = blendpd(auVar39,auVar47,2);
  auVar44._0_8_ = auVar43._8_8_ * dVar37 - dVar4 * dVar38;
  auVar44._8_8_ = auVar47._0_8_ * dVar38 - auVar25._8_8_ * dVar34;
  auVar26._8_4_ = SUB84(auVar47._8_8_,0);
  auVar26._0_8_ = auVar47._0_8_;
  auVar26._12_4_ = (int)((ulonglong)auVar47._8_8_ >> 0x20);
  auVar40._0_8_ = auVar30._0_8_ * dVar34 - auVar47._0_8_ * auVar36._0_8_;
  auVar40._8_8_ = auVar30._8_8_ * dVar3 - auVar26._8_8_ * auVar36._8_8_;
  auVar30 = *(undefined1 (*) [16])(lVar2 + 0x70);
  lVar19 = -(ulonglong)
            ((double)CONCAT44(*(uint *)(lVar2 + 100) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              *(uint *)(lVar2 + 0x60) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                             ) <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
  lVar21 = -(ulonglong)
            ((double)CONCAT44(*(uint *)(lVar2 + 0x6c) & _UNK_15061cc8c,
                              *(uint *)(lVar2 + 0x68) & _UNK_15061cc88) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
  lVar20 = -(ulonglong)
            ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar30._4_4_,
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar30._0_4_) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  auVar27._8_4_ = SUB84(auVar44._8_8_,0);
  auVar27._0_8_ = auVar44._0_8_;
  auVar27._12_4_ = (int)((ulonglong)auVar44._8_8_ >> 0x20);
  auVar32 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                  *(undefined1 (*) [16])(lVar2 + 0x60));
  auVar36._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar36._0_8_ = auVar30._0_8_;
  auVar36._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar36);
  local_198.Translation.XY.m128d_f64[0] =
       (double)CONCAT44(~(uint)((ulonglong)lVar19 >> 0x20) & auVar32._4_4_,
                        ~(uint)lVar19 & auVar32._0_4_) * (dVar4 * dVar3 + dVar6 + auVar27._8_8_);
  dVar34 = (double)CONCAT44(~(uint)((ulonglong)lVar21 >> 0x20) & auVar32._12_4_,
                            ~(uint)lVar21 & auVar32._8_4_) *
           (dVar5 * dVar3 + dVar23 + auVar40._0_8_);
  local_198.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_198.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_198.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_198.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  auVar7._4_8_ = GlobalVectorConstants::Float0001.m128_u64[1];
  auVar7._0_4_ = (int)((ulonglong)local_198.Translation.XY.m128d_f64[0] >> 0x20);
  auVar33._0_8_ = auVar7._0_8_ << 0x20;
  auVar33._8_4_ = SUB84(dVar34,0);
  auVar33._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
  local_198.Translation.XY.m128d_f64[1] = auVar33._8_8_;
  auVar36 = blendpd(auVar44,auVar40,2);
  local_1a0 = (double)CONCAT44(~(uint)((ulonglong)lVar20 >> 0x20) & auVar30._4_4_,
                               ~(uint)lVar20 & auVar30._0_4_) *
              (auVar47._0_8_ * dVar3 + dVar28 + auVar36._0_8_);
  local_198.Translation.ZW.m128d_f64[1] = 0.0;
  local_198.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_198.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_198.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_198.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_198.Translation.ZW.m128d_f64[0] = local_1a0;
  fVar22 = GetAlpha(this);
  UE::Math::TTransform<double>::BlendWith(&local_138,&local_198,fVar22);
  (**(code **)((longlong)*pIVar13 + 0x18))(pIVar13,&local_138);
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_1b0.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      local_1b0.NameAndInfo.Index.Value = FVar18.Value;
      QueryPerformanceCounter(&local_1c8);
      local_1b0.StatData.Pad[4] = '\0';
      local_1b0.StatData.Pad[5] = '\0';
      local_1b0.StatData.Pad[6] = '\0';
      local_1b0.StatData.Pad[7] = '\0';
      local_1b0.StatData.Pad[0] = local_1c8.s.LowPart._0_1_;
      local_1b0.StatData.Pad[1] = local_1c8.s.LowPart._1_1_;
      local_1b0.StatData.Pad[2] = local_1c8.s.LowPart._2_1_;
      local_1b0.StatData.Pad[3] = local_1c8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_1b0);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// Initialize_AnyThread @ 14a70e150

void __thiscall
FAnimNode_OverrideRootMotion::Initialize_AnyThread
          (FAnimNode_OverrideRootMotion *this,FAnimationInitializeContext *param_1)

{
  FAnimNode_Base::Initialize_AnyThread((FAnimNode_Base *)this,param_1);
  this->AnimInstanceProxy = *(FAnimInstanceProxy **)param_1;
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->Source,param_1);
  return;
}

// CacheBones_AnyThread @ 14a70e190

void __thiscall
FAnimNode_OverrideRootMotion::CacheBones_AnyThread
          (FAnimNode_OverrideRootMotion *this,FAnimationCacheBonesContext *param_1)

{
  FAnimNode_Base::CacheBones_AnyThread((FAnimNode_Base *)this,param_1);
  FPoseLinkBase::CacheBones((FPoseLinkBase *)&this->Source,param_1);
  return;
}

// GatherDebugData @ 14a70e1e0

void __thiscall
FAnimNode_OverrideRootMotion::GatherDebugData
          (FAnimNode_OverrideRootMotion *this,FNodeDebugData *param_1)

{
  TVector<double> *pTVar1;
  UPackage *pUVar2;
  int iVar3;
  FName local_res8;
  FString local_88;
  FString local_78;
  double local_68;
  FString local_60 [4];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_OverrideRootMotion::GatherDebugData");
  pTVar1 = GetOverrideVelocity(this);
  local_68 = (pTVar1->field0_0x0)._s_0.Z;
  GetAlpha(this);
  if (Z_Registration_Info_UScriptStruct_FAnimNode_OverrideRootMotion.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_OverrideRootMotion.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_OverrideRootMotion,(UObject *)pUVar2,
                         L"AnimNode_OverrideRootMotion");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_OverrideRootMotion.OuterSingleton
                      )->_padding_;
  ::FName::ToString(&local_res8,&local_88);
  ::FString::PrintfImpl(local_60,L"%s<W:%.1f%%> %s");
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  ::FString::PrintfImpl(&local_78,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(&local_88,L"(Override Velocity: %s, Alpha: %.3f");
  iVar3 = local_88.Data.ArrayNum + -1;
  if (local_88.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars(local_60,(wchar_t *)local_88.Data.AllocatorInstance.Data,iVar3);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->Source,param_1);
  if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// GetAlpha @ 14a728950

float __thiscall FAnimNode_OverrideRootMotion::GetAlpha(FAnimNode_OverrideRootMotion *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UPackage *pUVar5;
  FNodeDataId *pFVar6;
  float *pfVar7;
  float fVar8;
  FNodeDataId local_38;
  FNodeDataId local_28 [2];
  
  if (CachedId_Alpha.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_Alpha,"Alpha");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_OverrideRootMotion.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_OverrideRootMotion.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_OverrideRootMotion,(UObject *)pUVar5,
                           L"AnimNode_OverrideRootMotion");
    }
    pFVar6 = UE::Anim::FNodeDataId::FNodeDataId
                       (local_28,AnimName_Alpha,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_OverrideRootMotion.
                        OuterSingleton);
    CachedId_Alpha.Id = pFVar6->Id;
    CachedId_Alpha.Index = pFVar6->Index;
  }
  iVar3 = CachedId_Alpha.Index;
  FVar2 = CachedId_Alpha.Id;
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    fVar8 = (float)(*pcVar1)();
    return fVar8;
  }
  local_38.Id = FVar2;
  local_38.Index = iVar3;
  pfVar7 = FAnimNodeData::GetData
                     ((FAnimNodeData *)this->_padding_,&local_38,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return *pfVar7;
}

// GetOverrideVelocity @ 14a72a1f0

TVector<double> * __thiscall
FAnimNode_OverrideRootMotion::GetOverrideVelocity(FAnimNode_OverrideRootMotion *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UPackage *pUVar5;
  FNodeDataId *pFVar6;
  TVector<double> *pTVar7;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_OverrideVelocity.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_OverrideVelocity,"OverrideVelocity");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_OverrideRootMotion.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_OverrideRootMotion.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_OverrideRootMotion,(UObject *)pUVar5,
                           L"AnimNode_OverrideRootMotion");
    }
    pFVar6 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_OverrideVelocity,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_OverrideRootMotion.
                        OuterSingleton);
    CachedId_OverrideVelocity.Id = pFVar6->Id;
    CachedId_OverrideVelocity.Index = pFVar6->Index;
  }
  iVar3 = CachedId_OverrideVelocity.Index;
  FVar2 = CachedId_OverrideVelocity.Id;
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar7 = (TVector<double> *)(*pcVar1)();
    return pTVar7;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  pTVar7 = FAnimNodeData::GetData
                     ((FAnimNodeData *)this->_padding_,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return pTVar7;
}

