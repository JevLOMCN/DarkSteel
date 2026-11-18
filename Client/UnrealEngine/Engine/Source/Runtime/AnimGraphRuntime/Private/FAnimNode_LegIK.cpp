// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 11

// StaticStruct @ 1463d7070

UScriptStruct * __cdecl FAnimNode_LegIK::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_LegIK.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_LegIK.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LegIK,(UObject *)pUVar1,
                         L"AnimNode_LegIK");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_LegIK.OuterSingleton;
}

// FAnimNode_LegIK @ 146403ee0

FAnimNode_LegIK * __thiscall FAnimNode_LegIK::FAnimNode_LegIK(FAnimNode_LegIK *this)

{
  FAnimNode_SkeletalControlBase::FAnimNode_SkeletalControlBase
            ((FAnimNode_SkeletalControlBase *)this);
  this->ReachPrecision = 0.01;
  this->_padding_ = (longlong)&___7FAnimNode_LegIK__6B_;
  (this->LegsDefinition).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LegsDefinition).ArrayNum = 0;
  (this->LegsDefinition).ArrayMax = 0;
  (this->LegsData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LegsData).ArrayNum = 0;
  (this->LegsData).ArrayMax = 0;
  this->MyAnimInstanceProxy = (FAnimInstanceProxy *)0x0;
  this->MaxIterations = 0xc;
  this->SoftPercentLength = 1.0;
  this->SoftAlpha = 1.0;
  return this;
}

// ~FAnimNode_LegIK @ 146408a40

void __thiscall FAnimNode_LegIK::~FAnimNode_LegIK(FAnimNode_LegIK *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FAnimLegIKData,int>
            ((FAnimLegIKData *)(this->LegsData).AllocatorInstance.Data,(this->LegsData).ArrayNum);
  pFVar1 = (this->LegsData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LegsDefinition).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FAnimNode_SkeletalControlBase__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  return;
}

// AdjustKneeTwist @ 1464152e0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall FAnimNode_LegIK::AdjustKneeTwist(FAnimNode_LegIK *this,FAnimLegIKData *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FAnimLegIKDefinition *pFVar4;
  code *pcVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  TConsoleVariableData<int> *pTVar10;
  bool bVar11;
  undefined1 uVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  uint uVar19;
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_100;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  TQuat<double> local_98 [4];
  
  lVar15 = 0;
  if (((param_1->FKLegBoneTransforms).ArrayNum < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar5 = (code *)swi(3);
    uVar12 = (*pcVar5)();
    return (bool)uVar12;
  }
  pFVar2 = (param_1->FKLegBoneTransforms).AllocatorInstance.Data;
  iVar1 = (param_1->FKLegBoneTransforms).ArrayNum;
  local_d0 = *(undefined8 *)(pFVar2 + 0x20);
  uStack_c8 = *(undefined8 *)(pFVar2 + 0x28);
  local_c0 = *(undefined8 *)(pFVar2 + 0x30);
  uVar14 = iVar1 - 1;
  local_d8 = (param_1->IKFootTransform).Translation.ZW.m128d_f64[0];
  uVar19 = 0;
  if ((int)uVar14 < iVar1) {
    uVar19 = ~uVar14 >> 0x1f;
  }
  local_e8 = (param_1->IKFootTransform).Translation.XY.m128d_f64[0];
  dStack_e0 = (param_1->IKFootTransform).Translation.XY.m128d_f64[1];
  if ((uVar19 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar5 = (code *)swi(3);
    uVar12 = (*pcVar5)();
    return (bool)uVar12;
  }
  pFVar3 = (param_1->FKLegBoneTransforms).AllocatorInstance.Data;
  iVar1 = (param_1->FKLegBoneTransforms).ArrayNum;
  lVar13 = (longlong)iVar1 * 0x60;
  pFVar2 = pFVar3 + lVar13 + -0x40;
  local_b8 = *(double *)pFVar2;
  dStack_b0 = *(double *)(pFVar2 + 8);
  local_a8 = *(double *)(pFVar3 + lVar13 + -0x30);
  dVar6 = local_e8 - local_b8;
  dVar18 = local_d8 - local_a8;
  dVar17 = dStack_e0 - dStack_b0;
  dVar16 = dVar17 * dVar17 + dVar6 * dVar6 + dVar18 * dVar18;
  uVar7 = dVar6;
  uVar8 = dVar18;
  uVar9 = dVar17;
  if ((dVar16 != __real_3ff0000000000000) &&
     (uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     __real_3e45798ee0000000 <= dVar16)) {
    dVar16 = __real_3ff0000000000000 / SQRT(dVar16);
    uVar7 = dVar6 * dVar16;
    uVar8 = dVar18 * dVar16;
    uVar9 = dVar17 * dVar16;
  }
  if ((iVar1 < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar5 = (code *)swi(3);
    uVar12 = (*pcVar5)();
    return (bool)uVar12;
  }
  pFVar4 = param_1->LegDefPtr;
  UE::Math::TTransform<double>::GetUnitAxis
            ((TTransform<double> *)(param_1->FKLegBoneTransforms).AllocatorInstance.Data,
             (TVector<double> *)&local_100._s_0,(uint)(pFVar4->FootBoneForwardAxis).Value);
  UE::Math::TTransform<double>::GetUnitAxis
            (&param_1->IKFootTransform,(TVector<double> *)&local_118._s_0,
             (uint)(pFVar4->FootBoneForwardAxis).Value);
  dVar18 = (double)uVar9 * local_100._s_0.Z - (double)uVar8 * local_100._s_0.Y;
  dVar17 = (double)uVar8 * local_100._s_0.X - (double)uVar7 * local_100._s_0.Z;
  dVar6 = (double)uVar7 * local_100._s_0.Y - (double)uVar9 * local_100._s_0.X;
  local_100._s_0.X = dVar17 * (double)uVar8 - dVar6 * (double)uVar9;
  local_100._s_0.Y = dVar6 * (double)uVar7 - dVar18 * (double)uVar8;
  local_100._s_0.Z = dVar18 * (double)uVar9 - dVar17 * (double)uVar7;
  dVar6 = (double)uVar9 * local_118._s_0.Z - (double)uVar8 * local_118._s_0.Y;
  dVar18 = (double)uVar8 * local_118._s_0.X - (double)uVar7 * local_118._s_0.Z;
  dVar17 = (double)uVar7 * local_118._s_0.Y - (double)uVar9 * local_118._s_0.X;
  local_118._s_0.X = dVar18 * (double)uVar8 - dVar17 * (double)uVar9;
  local_118._s_0.Y = dVar17 * (double)uVar7 - dVar6 * (double)uVar8;
  local_118._s_0.Z = dVar6 * (double)uVar9 - dVar18 * (double)uVar7;
  if ((((local_100._s_0.X != 0.0) || (local_100._s_0.Y != 0.0)) || (local_100._s_0.Z != 0.0)) &&
     (((uVar19 = SUB84(local_100._s_0.X - local_118._s_0.X,0) &
                 (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar14 = (uint)((ulonglong)(local_100._s_0.X - local_118._s_0.X) >> 0x20) &
                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar14,uVar19) &&
       (double)CONCAT44(uVar14,uVar19) != __real_3f1a36e2e0000000 ||
       (uVar19 = SUB84(local_100._s_0.Y - local_118._s_0.Y,0) &
                 (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar14 = (uint)((ulonglong)(local_100._s_0.Y - local_118._s_0.Y) >> 0x20) &
                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar14,uVar19) &&
       (double)CONCAT44(uVar14,uVar19) != __real_3f1a36e2e0000000)) ||
      (__real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)(local_100._s_0.Z - local_118._s_0.Z) >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(local_100._s_0.Z - local_118._s_0.Z,0) &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff))))) {
    UE::Math::TQuat<double>::FindBetweenNormals
              (local_98,(TVector<double> *)&local_100._s_0,(TVector<double> *)&local_118._s_0);
    bVar11 = RotateLegByQuat(local_98,param_1);
    pTVar10 = CVarAnimNodeLegIKDebug.Ref;
    if (bVar11) {
      bVar11 = IsInParallelGameThread();
      if ((!bVar11) && (bVar11 = IsInGameThread(), !bVar11)) {
        lVar15 = 4;
      }
      if (*(int *)((longlong)pTVar10->ShadowedValue + lVar15) == 1) {
        DrawDebugLeg(param_1,this->MyAnimInstanceProxy,&FColor::Magenta);
      }
      return true;
    }
  }
  return false;
}

// DoLegReachIK @ 146423180

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FAnimNode_LegIK::DoLegReachIK(FAnimNode_LegIK *this,FAnimLegIKData *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  bool bVar20;
  bool bVar21;
  float fVar22;
  double dVar23;
  TConsoleVariableData<int> *pTVar24;
  TConsoleVariableData<int> *pTVar25;
  longlong lVar26;
  bool bVar27;
  bool bVar28;
  undefined1 uVar29;
  bool bVar30;
  uint uVar31;
  FName *pFVar32;
  FThreadSafeStaticStat<FStat_STAT_LegIK_FABRIK_Eval> FVar33;
  FName FVar34;
  int iVar35;
  longlong lVar36;
  FIKChain *pFVar37;
  float fVar38;
  uint uVar39;
  uint uVar40;
  FColor_u_0 local_res18 [2];
  FScriptContainerElement *local_res20;
  FName local_1b0;
  longlong local_1a8;
  FName local_1a0;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_180;
  FName local_168;
  FScriptContainerElement *local_158;
  TVector<double>_u_0 local_150;
  FName local_138;
  double local_130;
  double local_128;
  double local_120;
  double dStack_118;
  double local_110;
  TQuat<double> local_108;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  
  FVar33 = StatPtr_STAT_LegIK_FABRIK_Eval;
  if (StatPtr_STAT_LegIK_FABRIK_Eval == (FThreadSafeStaticStat<FStat_STAT_LegIK_FABRIK_Eval>)0x0) {
    pFVar32 = ::FName::FName(&local_138,"STAT_LegIK_FABRIK_Eval");
    FVar33 = (FThreadSafeStaticStat<FStat_STAT_LegIK_FABRIK_Eval>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LegIK_FABRIK_Eval,*pFVar32,
                        L"LegIK FABRIK Eval","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar34 = *(FName *)FVar33;
  bVar21 = false;
  bVar20 = false;
  local_168.ComparisonIndex.Value = 0;
  local_168.Number = 0;
  bVar28 = false;
  bVar27 = false;
  if ((FVar34.ComparisonIndex.Value.Value == 0) && (FVar34.Number == 0)) {
LAB_1464232fc:
    bVar21 = bVar28;
    bVar20 = bVar27;
    bVar27 = false;
    local_1a0 = local_168;
    FVar34 = local_168;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar33 + 0x10));
      bVar21 = false;
      bVar20 = true;
      bVar28 = false;
      bVar27 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1b0.ComparisonIndex.Value = FVar34.ComparisonIndex.Value.Value;
        local_1b0.Number = FVar34.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1b0,(wchar_t *)*(FName *)((longlong)FVar33 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_LegIK.cpp"
                   ,0x195);
        bVar21 = true;
        bVar20 = true;
        bVar28 = true;
        bVar27 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1464232fc;
    local_1a0 = FVar34;
    FThreadStats::AddMessage(FVar34,CycleScopeStart);
    bVar27 = true;
  }
  if (((param_1->FKLegBoneTransforms).ArrayNum < 1) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar28)) {
    pcVar6 = (code *)swi(3);
    uVar29 = (*pcVar6)();
    return (bool)uVar29;
  }
  pTVar24 = CVarAnimLegIKForceAlwaysSolve.Ref;
  fVar22 = __real_322bcc77;
  pFVar4 = (param_1->FKLegBoneTransforms).AllocatorInstance.Data;
  local_150._s_0.X = (param_1->IKFootTransform).Translation.XY.m128d_f64[0];
  local_150._s_0.Y = (param_1->IKFootTransform).Translation.XY.m128d_f64[1];
  local_110 = *(double *)(pFVar4 + 0x30);
  local_120 = *(double *)(pFVar4 + 0x20);
  dStack_118 = *(double *)(pFVar4 + 0x28);
  local_150._s_0.Z = (param_1->IKFootTransform).Translation.ZW.m128d_f64[0];
  fVar38 = (float)((uint)param_1->TwistOffsetDegrees & __xmm_7fffffff7fffffff7fffffff7fffffff);
  bVar28 = __real_322bcc77 < fVar38;
  if ((__real_3f800000 < this->SoftPercentLength || __real_3f800000 == this->SoftPercentLength) ||
     (this->SoftAlpha <= 0.0)) {
    bVar30 = false;
  }
  else {
    bVar30 = true;
  }
  dVar13 = (double)this->ReachPrecision;
  uVar39 = SUB84(local_120 - local_150._s_0.X,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar40 = (uint)((ulonglong)(local_120 - local_150._s_0.X) >> 0x20) &
           __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((((dVar13 <= (double)CONCAT44(uVar40,uVar39) && (double)CONCAT44(uVar40,uVar39) != dVar13) ||
       (uVar39 = SUB84(dStack_118 - local_150._s_0.Y,0) &
                 (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar40 = (uint)((ulonglong)(dStack_118 - local_150._s_0.Y) >> 0x20) &
                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       dVar13 <= (double)CONCAT44(uVar40,uVar39) && (double)CONCAT44(uVar40,uVar39) != dVar13)) ||
      (uVar39 = SUB84(local_110 - local_150._s_0.Z,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
      , uVar40 = (uint)((ulonglong)(local_110 - local_150._s_0.Z) >> 0x20) &
                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      dVar13 <= (double)CONCAT44(uVar40,uVar39) && (double)CONCAT44(uVar40,uVar39) != dVar13)) ||
     ((param_1->LegDefPtr->bEnableRotationLimit != false || (bVar30)))) {
LAB_14642345a:
    FIKChain::InitializeFromLegData(&param_1->IKChain,param_1,this->MyAnimInstanceProxy);
    pTVar24 = CVarAnimLegIKMaxIterations.Ref;
    bVar30 = IsInParallelGameThread();
    if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
      lVar36 = 0;
    }
    else {
      lVar36 = 4;
    }
    pTVar25 = CVarAnimLegIKMaxIterations.Ref;
    if (*(int *)((longlong)pTVar24->ShadowedValue + lVar36) < 1) {
      iVar35 = this->MaxIterations;
    }
    else {
      bVar30 = IsInParallelGameThread();
      if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
        iVar35 = pTVar25->ShadowedValue[0];
      }
      else {
        iVar35 = pTVar25->ShadowedValue[1];
      }
    }
    FIKChain::ReachTarget
              (&param_1->IKChain,(TVector<double> *)&local_150._s_0,(double)this->ReachPrecision,
               iVar35,this->SoftPercentLength,this->SoftAlpha);
    if (bVar28) goto LAB_146423506;
  }
  else {
    bVar30 = IsInParallelGameThread();
    if (bVar30) {
LAB_146423425:
      lVar36 = 0;
    }
    else {
      bVar30 = IsInGameThread();
      lVar36 = 4;
      if (bVar30) goto LAB_146423425;
    }
    if (*(int *)((longlong)pTVar24->ShadowedValue + lVar36) == 1) goto LAB_14642345a;
    if (fVar38 <= fVar22) {
      bVar28 = false;
      goto LAB_146423af7;
    }
    FIKChain::InitializeFromLegData(&param_1->IKChain,param_1,this->MyAnimInstanceProxy);
LAB_146423506:
    FIKChain::ApplyTwistOffset(&param_1->IKChain,param_1->TwistOffsetDegrees);
  }
  dVar23 = __real_3e45798ee0000000;
  dVar13 = __real_3ff0000000000000;
  pFVar37 = &param_1->IKChain;
  uVar39 = param_1->NumBones;
  uVar40 = uVar39 - 2;
  if (-1 < (int)uVar40) {
    local_res20 = (FScriptContainerElement *)(longlong)(int)uVar40;
    local_1a8 = (longlong)local_res20 * 0x60;
    lVar36 = (longlong)local_res20 * 0x70;
    do {
      uVar39 = uVar39 - 1;
      uVar31 = 0;
      if ((int)uVar39 < (param_1->IKChain).Links.ArrayNum) {
        uVar31 = ~uVar39 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar6 = (code *)swi(3);
        uVar29 = (*pcVar6)();
        return (bool)uVar29;
      }
      pFVar4 = (pFVar37->Links).AllocatorInstance.Data;
      uVar31 = 0;
      if ((int)uVar40 < (param_1->IKChain).Links.ArrayNum) {
        uVar31 = ~uVar40 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar6 = (code *)swi(3);
        uVar29 = (*pcVar6)();
        return (bool)uVar29;
      }
      pFVar1 = local_res20;
      local_158 = (pFVar37->Links).AllocatorInstance.Data;
      uVar31 = 0;
      if ((int)uVar39 < (param_1->FKLegBoneTransforms).ArrayNum) {
        uVar31 = ~uVar39 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar6 = (code *)swi(3);
        uVar29 = (*pcVar6)();
        return (bool)uVar29;
      }
      local_res20 = (param_1->FKLegBoneTransforms).AllocatorInstance.Data;
      uVar31 = 0;
      if ((int)uVar40 < (param_1->FKLegBoneTransforms).ArrayNum) {
        uVar31 = ~uVar40 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar6 = (code *)swi(3);
        uVar29 = (*pcVar6)();
        return (bool)uVar29;
      }
      lVar26 = local_1a8;
      pFVar5 = (param_1->FKLegBoneTransforms).AllocatorInstance.Data;
      pFVar2 = pFVar5 + local_1a8 + 0x20;
      local_e8 = *(double *)pFVar2;
      dStack_e0 = *(double *)(pFVar2 + 8);
      local_d8 = *(double *)(pFVar5 + local_1a8 + 0x30);
      local_d0 = *(double *)(local_res20 + local_1a8 + 0x80);
      dStack_c8 = *(double *)(local_res20 + local_1a8 + 0x80 + 8);
      local_c0 = *(double *)(local_res20 + local_1a8 + 0x90);
      local_180._s_0.X = local_e8 - local_d0;
      local_180._s_0.Y = dStack_e0 - dStack_c8;
      local_180._s_0.Z = local_d8 - local_c0;
      dVar10 = local_180._s_0.Y * local_180._s_0.Y + local_180._s_0.X * local_180._s_0.X +
               local_180._s_0.Z * local_180._s_0.Z;
      if (dVar10 != dVar13) {
        if (dVar23 <= dVar10) {
          local_130 = dVar13 / SQRT(dVar10);
          local_180._s_0.X = local_180._s_0.X * local_130;
          local_180._s_0.Y = local_180._s_0.Y * local_130;
          local_180._s_0.Z = local_180._s_0.Z * local_130;
        }
        else {
          local_180._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          local_180._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_180._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        }
      }
      local_198._s_0.X = *(double *)(local_158 + lVar36) - *(double *)(pFVar4 + lVar36 + 0x70);
      local_198._s_0.Y = *(double *)(local_158 + lVar36 + 8) - *(double *)(pFVar4 + lVar36 + 0x78);
      local_198._s_0.Z =
           *(double *)(local_158 + lVar36 + 0x10) - *(double *)(pFVar4 + lVar36 + 0x80);
      dVar10 = local_198._s_0.Y * local_198._s_0.Y + local_198._s_0.X * local_198._s_0.X +
               local_198._s_0.Z * local_198._s_0.Z;
      if (dVar10 != dVar13) {
        if (dVar23 <= dVar10) {
          local_128 = dVar13 / SQRT(dVar10);
          local_198._s_0.X = local_198._s_0.X * local_128;
          local_198._s_0.Y = local_198._s_0.Y * local_128;
          local_198._s_0.Z = local_198._s_0.Z * local_128;
        }
        else {
          local_198._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          local_198._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_198._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        }
      }
      UE::Math::TQuat<double>::FindBetweenNormals
                (&local_108,(TVector<double> *)&local_180._s_0,(TVector<double> *)&local_198._s_0);
      dVar15 = *(double *)(local_res20 + lVar26 + 0x60);
      dVar16 = *(double *)(local_res20 + lVar26 + 0x60 + 8);
      dVar17 = *(double *)(local_res20 + lVar26 + 0x70);
      dVar18 = *(double *)(local_res20 + lVar26 + 0x70 + 8);
      lVar36 = lVar36 + -0x70;
      dVar10 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
      dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
      dVar14 = dVar17 * local_108.X *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               dVar16 * local_108.W +
               dVar18 * local_108.Y *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               local_108.Z * dVar15 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      dVar11 = local_108.X * dVar15 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
               dVar18 * local_108.W +
               dVar16 * local_108.Y *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
               dVar17 * local_108.Z *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      auVar12._8_4_ = SUB84(dVar14,0);
      auVar12._0_8_ =
           dVar18 * local_108.X * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar15 * local_108.W +
           dVar17 * local_108.Y * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           local_108.Z * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      auVar12._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
      *(undefined1 (*) [16])(local_res20 + lVar26 + 0x60) = auVar12;
      auVar9._8_4_ = SUB84(dVar11,0);
      auVar9._0_8_ = local_108.X * dVar16 * dVar10 + dVar17 * local_108.W +
                     dVar15 * local_108.Y * dVar8 + dVar18 * local_108.Z * dVar7;
      auVar9._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      *(undefined1 (*) [16])(local_res20 + lVar26 + 0x70) = auVar9;
      local_1a8 = lVar26 + -0x60;
      uVar40 = uVar40 - 1;
      FVar34 = local_1a0;
      local_res20 = (FScriptContainerElement *)((longlong)pFVar1 + -1);
    } while (-1 < (int)uVar40);
  }
  uVar39 = param_1->NumBones - 2;
  if (-1 < (int)uVar39) {
    lVar36 = (longlong)(int)uVar39 * 0x60;
    local_res20 = (FScriptContainerElement *)((longlong)(int)uVar39 * 0x70);
    do {
      uVar40 = 0;
      if ((int)uVar39 < (param_1->IKChain).Links.ArrayNum) {
        uVar40 = ~uVar39 >> 0x1f;
      }
      if ((uVar40 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar6 = (code *)swi(3);
        uVar29 = (*pcVar6)();
        return (bool)uVar29;
      }
      pFVar4 = (pFVar37->Links).AllocatorInstance.Data;
      uVar40 = 0;
      if ((int)uVar39 < (param_1->FKLegBoneTransforms).ArrayNum) {
        uVar40 = ~uVar39 >> 0x1f;
      }
      if ((uVar40 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar6 = (code *)swi(3);
        uVar29 = (*pcVar6)();
        return (bool)uVar29;
      }
      pFVar2 = (param_1->FKLegBoneTransforms).AllocatorInstance.Data;
      pFVar1 = pFVar4 + (longlong)local_res20;
      uVar19 = *(undefined8 *)(pFVar1 + 8);
      uVar3 = *(undefined8 *)(pFVar4 + (longlong)local_res20 + 0x10);
      local_res20 = (FScriptContainerElement *)((longlong)local_res20 + -0x70);
      pFVar4 = pFVar2 + lVar36 + 0x20;
      *(undefined8 *)pFVar4 = *(undefined8 *)pFVar1;
      *(undefined8 *)(pFVar4 + 8) = uVar19;
      pFVar2 = pFVar2 + lVar36 + 0x30;
      *(undefined8 *)pFVar2 = uVar3;
      *(undefined8 *)(pFVar2 + 8) = 0;
      lVar36 = lVar36 + -0x60;
      uVar39 = uVar39 - 1;
    } while (-1 < (int)uVar39);
  }
  pTVar24 = CVarAnimNodeLegIKDebug.Ref;
  bVar28 = IsInParallelGameThread();
  if ((bVar28) || (bVar28 = IsInGameThread(), bVar28)) {
    lVar36 = 0;
  }
  else {
    lVar36 = 4;
  }
  if (*(int *)((longlong)pTVar24->ShadowedValue + lVar36) == 1) {
    DrawDebugLeg(param_1,this->MyAnimInstanceProxy,&FColor::Yellow);
  }
  bVar28 = true;
LAB_146423af7:
  if (bVar20) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar27) {
    FThreadStats::AddMessage(FVar34,CycleScopeEnd);
  }
  return bVar28;
}

// EvaluateSkeletalControl_AnyThread @ 14642e940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_LegIK::EvaluateSkeletalControl_AnyThread
          (FAnimNode_LegIK *this,FComponentSpacePoseContext *param_1,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  double dVar18;
  TConsoleVariableData<int> *pTVar19;
  TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *this_00;
  FCSPose<FCompactPose> *pFVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  uint uVar25;
  uint uVar26;
  FName *pFVar27;
  FThreadSafeStaticStat<FStat_STAT_LegIK_Eval> FVar28;
  FCurveElement *pFVar29;
  undefined4 uVar30;
  int iVar31;
  uint uVar32;
  FAnimNode_LegIK *pFVar33;
  longlong lVar34;
  FName FVar35;
  FAnimLegIKData *this_01;
  longlong lVar36;
  float fVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined1 auStackY_1f8 [32];
  FIdentityFunctor local_193 [3];
  FName local_190;
  undefined4 local_188;
  uint local_184;
  FColor_u_0 local_180 [2];
  FName local_178;
  FAnimNode_LegIK *local_170;
  longlong local_168;
  FName local_160;
  FName local_158;
  TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *local_148;
  FCSPose<FCompactPose> *local_140;
  FString local_138;
  FName local_128;
  double local_120;
  FString local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_170 = this;
  FStatsHierarchical::BeginMeasurement("FAnimNode_LegIK::EvaluateSkeletalControl_AnyThread");
  FVar28 = StatPtr_STAT_LegIK_Eval;
  if (StatPtr_STAT_LegIK_Eval == (FThreadSafeStaticStat<FStat_STAT_LegIK_Eval>)0x0) {
    pFVar27 = ::FName::FName(&local_128,"STAT_LegIK_Eval");
    FVar28 = (FThreadSafeStaticStat<FStat_STAT_LegIK_Eval>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LegIK_Eval,*pFVar27,L"LegIK Eval"
                        ,"STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar35 = *(FName *)FVar28;
  bVar12 = false;
  bVar13 = false;
  local_158.ComparisonIndex.Value = 0;
  local_158.Number = 0;
  bVar21 = false;
  bVar22 = false;
  if ((FVar35.ComparisonIndex.Value.Value != 0) || (FVar35.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_180[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_180[0]._s_0,(char *)*(FName *)((longlong)FVar28 + 0x10));
      bVar12 = false;
      bVar13 = true;
      bVar21 = false;
      bVar22 = true;
      if (-1 < CpuChannel->Enabled) {
        local_178.ComparisonIndex.Value = FVar35.ComparisonIndex.Value.Value;
        local_178.Number = FVar35.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_178,(wchar_t *)*(FName *)((longlong)FVar28 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_LegIK.cpp"
                   ,0x67);
        bVar12 = true;
        bVar13 = true;
        bVar21 = true;
        bVar22 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_190 = FVar35;
      local_160 = FVar35;
      FThreadStats::AddMessage(FVar35,CycleScopeStart);
      bVar21 = true;
      goto LAB_14642eace;
    }
  }
  bVar13 = bVar22;
  bVar12 = bVar21;
  bVar21 = false;
  local_160 = local_158;
  FVar35 = local_158;
LAB_14642eace:
  if ((param_2->ArrayNum != 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("OutBoneTransforms.Num() == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_LegIK.cpp"
                          ,0x69,L""), bVar22)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  dVar18 = __real_3f1a36e2e0000000;
  uVar17 = _UNK_15061cc8c;
  uVar16 = _UNK_15061cc88;
  uVar15 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar14 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_184 = 0;
  if (0 < (this->LegsData).ArrayNum) {
    local_140 = &param_1->Pose;
    local_148 = (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)&param_1->Curve;
    local_168 = 0;
    do {
      pFVar20 = local_140;
      this_00 = local_148;
      lVar36 = local_168;
      uVar26 = local_184;
      uVar25 = 0;
      if ((int)local_184 < (this->LegsData).ArrayNum) {
        uVar25 = ~local_184 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_01 = (FAnimLegIKData *)((this->LegsData).AllocatorInstance.Data + lVar36);
      FAnimLegIKData::InitializeTransforms(this_01,this->MyAnimInstanceProxy,pFVar20);
      uVar25 = UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::IndexOf
                         (this_00,this_01->LegDefPtr->TwistOffsetCurveName);
      if (uVar25 == 0xffffffff) {
LAB_14642ec4b:
        fVar37 = 0.0;
      }
      else {
        uVar32 = 0;
        if ((int)uVar25 < (this_00->Elements).ArrayNum) {
          uVar32 = ~uVar25 >> 0x1f;
        }
        if ((uVar32 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar29 = (this_00->Elements).AllocatorInstance.Data + (int)uVar25;
        if (pFVar29 == (FCurveElement *)0x0) goto LAB_14642ec4b;
        fVar37 = pFVar29->Value;
      }
      this_01->TwistOffsetDegrees = fVar37;
      bVar22 = OrientLegTowardsIK(this,this_01);
      bVar23 = DoLegReachIK(this,this_01);
      pFVar33 = (FAnimNode_LegIK *)this_01->LegDefPtr;
      if (*(bool *)((TEnumAsByte<EAxis::Type> *)&pFVar33->_padding_ + 3) == false) {
        bVar24 = false;
      }
      else {
        pFVar33 = this;
        bVar24 = AdjustKneeTwist(this,this_01);
      }
      uVar30 = SUB84(pFVar33,0);
      if (((bVar22) || (bVar23)) || (bVar24 != false)) {
        bVar22 = true;
      }
      else {
        bVar22 = false;
      }
      dVar8 = (this_01->IKFootTransform).Rotation.XY.m128d_f64[0];
      dVar9 = (this_01->IKFootTransform).Rotation.XY.m128d_f64[1];
      dVar10 = (this_01->IKFootTransform).Rotation.ZW.m128d_f64[0];
      dVar11 = (this_01->IKFootTransform).Rotation.ZW.m128d_f64[1];
      if (bVar22) {
LAB_14642ed82:
        if (((this_01->FKLegBoneTransforms).ArrayNum < 1) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar1 = (this_01->FKLegBoneTransforms).AllocatorInstance.Data;
        uVar25 = 0;
        local_190.ComparisonIndex.Value = 0;
        local_190.Number = 0;
        *(double *)pFVar1 = dVar8;
        *(double *)(pFVar1 + 8) = dVar9;
        *(double *)(pFVar1 + 0x10) = dVar10;
        *(double *)(pFVar1 + 0x18) = dVar11;
        this = local_170;
        if (0 < this_01->NumBones) {
          lVar36 = 0;
          local_188 = 1;
          do {
            uVar26 = 0;
            if ((int)uVar25 < (this_01->FKLegBoneTransforms).ArrayNum) {
              uVar26 = ~uVar25 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar1 = (this_01->FKLegBoneTransforms).AllocatorInstance.Data;
            uVar26 = 0;
            if ((int)uVar25 < (this_01->FKLegBoneIndices).ArrayNum) {
              uVar26 = ~uVar25 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            local_108 = *(undefined4 *)
                         ((this_01->FKLegBoneIndices).AllocatorInstance.Data +
                         (longlong)local_190 * 4);
            local_f8 = *(undefined8 *)(pFVar1 + lVar36);
            uStack_f0 = *(undefined8 *)(pFVar1 + lVar36 + 8);
            pFVar2 = (param_2->AllocatorInstance).Data;
            local_e8 = *(undefined8 *)(pFVar1 + lVar36 + 0x10);
            uStack_e0 = *(undefined8 *)(pFVar1 + lVar36 + 0x10 + 8);
            local_d8 = *(undefined8 *)(pFVar1 + lVar36 + 0x20);
            uStack_d0 = *(undefined8 *)(pFVar1 + lVar36 + 0x20 + 8);
            local_c8 = *(undefined8 *)(pFVar1 + lVar36 + 0x30);
            uStack_c0 = *(undefined8 *)(pFVar1 + lVar36 + 0x30 + 8);
            local_b8 = *(undefined8 *)(pFVar1 + lVar36 + 0x40);
            uStack_b0 = *(undefined8 *)(pFVar1 + lVar36 + 0x40 + 8);
            local_a8 = *(undefined8 *)(pFVar1 + lVar36 + 0x50);
            uStack_a0 = *(undefined8 *)(pFVar1 + lVar36 + 0x50 + 8);
            if (((pFVar2 <= (FScriptContainerElement *)&local_108) &&
                ((FScriptContainerElement *)&local_108 < pFVar2 + (longlong)param_2->ArrayMax * 0x70
                )) && (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar22)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar31 = param_2->ArrayNum;
            if (iVar31 == param_2->ArrayMax) {
              iVar31 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x1070,&param_2->AllocatorInstance,&param_2->ArrayMax);
            }
            uVar25 = uVar25 + 1;
            param_2->ArrayNum = iVar31 + 1;
            local_190 = (FName)((longlong)local_190 + 1);
            lVar36 = lVar36 + 0x60;
            lVar34 = (longlong)iVar31 * 0x70;
            pFVar1 = (param_2->AllocatorInstance).Data;
            *(ulonglong *)(pFVar1 + lVar34) = CONCAT44(uStack_104,local_108);
            *(undefined8 *)(pFVar1 + lVar34 + 8) = uStack_100;
            *(undefined8 *)(pFVar1 + lVar34 + 0x10) = local_f8;
            *(undefined8 *)(pFVar1 + lVar34 + 0x10 + 8) = uStack_f0;
            *(undefined8 *)(pFVar1 + lVar34 + 0x20) = local_e8;
            *(undefined8 *)(pFVar1 + lVar34 + 0x20 + 8) = uStack_e0;
            *(undefined8 *)(pFVar1 + lVar34 + 0x30) = local_d8;
            *(undefined8 *)(pFVar1 + lVar34 + 0x30 + 8) = uStack_d0;
            *(undefined8 *)(pFVar1 + lVar34 + 0x40) = local_c8;
            *(undefined8 *)(pFVar1 + lVar34 + 0x40 + 8) = uStack_c0;
            *(undefined8 *)(pFVar1 + lVar34 + 0x50) = local_b8;
            *(undefined8 *)(pFVar1 + lVar34 + 0x50 + 8) = uStack_b0;
            *(undefined8 *)(pFVar1 + lVar34 + 0x60) = local_a8;
            *(undefined8 *)(pFVar1 + lVar34 + 0x60 + 8) = uStack_a0;
            this = local_170;
            uVar26 = local_184;
          } while ((int)uVar25 < this_01->NumBones);
        }
      }
      else {
        if ((this_01->FKLegBoneTransforms).ArrayNum < 1) {
          uVar30 = 0x506106c8;
          bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar22) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        pFVar1 = (this_01->FKLegBoneTransforms).AllocatorInstance.Data;
        local_120 = dVar18;
        dVar40 = *(double *)(pFVar1 + 0x10) - dVar10;
        dVar41 = *(double *)(pFVar1 + 0x18) - dVar11;
        dVar38 = *(double *)pFVar1 - dVar8;
        dVar39 = *(double *)(pFVar1 + 8) - dVar9;
        lVar36 = -(ulonglong)
                  (dVar18 < (double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) & uVar17,
                                             SUB84(dVar41,0) & uVar16));
        auVar4._8_4_ = (int)lVar36;
        auVar4._0_8_ = -(ulonglong)
                        (dVar18 < (double)CONCAT44((uint)((ulonglong)dVar40 >> 0x20) & uVar15,
                                                   SUB84(dVar40,0) & uVar14));
        auVar4._12_4_ = (int)((ulonglong)lVar36 >> 0x20);
        iVar31 = movmskpd(uVar30,auVar4);
        lVar36 = -(ulonglong)
                  (dVar18 < (double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) & uVar17,
                                             SUB84(dVar39,0) & uVar16));
        dVar40 = *(double *)pFVar1 + dVar8;
        dVar41 = *(double *)(pFVar1 + 8) + dVar9;
        dVar39 = *(double *)(pFVar1 + 0x10) + dVar10;
        dVar42 = *(double *)(pFVar1 + 0x18) + dVar11;
        auVar5._8_4_ = (int)lVar36;
        auVar5._0_8_ = -(ulonglong)
                        (dVar18 < (double)CONCAT44((uint)((ulonglong)dVar38 >> 0x20) & uVar15,
                                                   SUB84(dVar38,0) & uVar14));
        auVar5._12_4_ = (int)((ulonglong)lVar36 >> 0x20);
        uVar25 = movmskpd((int)pFVar1,auVar5);
        uVar32 = iVar31 << 2 | uVar25;
        if (uVar32 != 0) {
          lVar36 = -(ulonglong)
                    (dVar18 < (double)CONCAT44((uint)((ulonglong)dVar42 >> 0x20) & uVar17,
                                               SUB84(dVar42,0) & uVar16));
          auVar6._8_4_ = (int)lVar36;
          auVar6._0_8_ = -(ulonglong)
                          (dVar18 < (double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) & uVar15,
                                                     SUB84(dVar39,0) & uVar14));
          auVar6._12_4_ = (int)((ulonglong)lVar36 >> 0x20);
          uVar32 = movmskpd(uVar32,auVar6);
          lVar36 = -(ulonglong)
                    (dVar18 < (double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) & uVar17,
                                               SUB84(dVar41,0) & uVar16));
          auVar7._8_4_ = (int)lVar36;
          auVar7._0_8_ = -(ulonglong)
                          (dVar18 < (double)CONCAT44((uint)((ulonglong)dVar40 >> 0x20) & uVar15,
                                                     SUB84(dVar40,0) & uVar14));
          auVar7._12_4_ = (int)((ulonglong)lVar36 >> 0x20);
          iVar31 = movmskpd(uVar25,auVar7);
          if ((uVar32 & 0x3fffffff) != 0 || iVar31 != 0) goto LAB_14642ed82;
        }
      }
      pTVar19 = CVarAnimNodeLegIKDebug.Ref;
      bVar22 = IsInParallelGameThread();
      if ((bVar22) || (bVar22 = IsInGameThread(), bVar22)) {
        lVar36 = 0;
      }
      else {
        lVar36 = 4;
      }
      if (*(int *)((longlong)pTVar19->ShadowedValue + lVar36) == 1) {
        ::FName::ToString(&(this_01->LegDefPtr->FKFootBone).BoneName,&local_118);
        ::FString::PrintfImpl
                  (&local_138,
                   L"Limb[%d/%d] (%s) bModifiedLimb(%d) bOrientedLegTowardsIK(%d) bDidLegReachIK(%d) bAdjustedKneeTwist(%d) bOverrideFootFKRotation(%d)"
                  );
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
        }
        FAnimInstanceProxy::AnimDrawDebugOnScreenMessage
                  (this->MyAnimInstanceProxy,&local_138,&FColor::Red,
                   &UE::Math::TVector2<double>::UnitVector,SDPG_World);
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
      }
      local_184 = uVar26 + 1;
      local_168 = local_168 + 0xf0;
      FVar35 = local_160;
    } while ((int)local_184 < (this->LegsData).ArrayNum);
  }
  AlgoImpl::
  IntroSortInternal<FBoneTransform,int,FIdentityFunctor,TDereferenceWrapper<FBoneTransform,FCompareBoneTransformIndex>_>
            ((FBoneTransform *)(param_2->AllocatorInstance).Data,param_2->ArrayNum,local_193[0],
             (FCompareBoneTransformIndex *)local_193);
  if (bVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar21) {
    FThreadStats::AddMessage(FVar35,CycleScopeEnd);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// GatherDebugData @ 146443d50

void __thiscall FAnimNode_LegIK::GatherDebugData(FAnimNode_LegIK *this,FNodeDebugData *param_1)

{
  ForAnyElementType _Src;
  UPackage *pUVar1;
  FName local_res8;
  FString local_48;
  FString local_38 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_LegIK::GatherDebugData");
  if (Z_Registration_Info_UScriptStruct_FAnimNode_LegIK.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_LegIK.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LegIK,(UObject *)pUVar1,
                         L"AnimNode_LegIK");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_LegIK.OuterSingleton)->_padding_;
  ::FName::ToString(&local_res8,&local_48);
  ::FString::PrintfImpl(local_38,L"%s<W:%.1f%%> %s");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  _Src.Data = local_38[0].Data.AllocatorInstance.Data;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_38[0].Data.ArrayNum == 0) {
    local_48.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38[0].Data.ArrayNum,0,(ForAnyElementType *)&local_48,
               local_38[0].Data.ArrayNum,&local_48.Data.ArrayMax);
    memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38[0].Data.ArrayNum * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_48,false);
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->_padding_,param_1);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// InitializeBoneReferences @ 146456a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAnimNode_LegIK::InitializeBoneReferences(FAnimNode_LegIK *this,FBoneContainer *param_1)

{
  TArray<FAnimLegIKData,TSizedDefaultAllocator<32>_> *pTVar1;
  FAnimLegIKData *pFVar2;
  FName FVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  FCompactPoseBoneIndex FVar7;
  uint uVar8;
  int iVar9;
  undefined4 extraout_var;
  FName *pFVar10;
  ulonglong uVar11;
  ForElementType<FSetElementId> FVar12;
  FScriptContainerElement *pFVar13;
  FName *pFVar14;
  longlong lVar15;
  FBoneReference *this_00;
  longlong lVar16;
  FIKChain *pFVar17;
  FScriptContainerElement *pFVar18;
  int *piVar19;
  FIKChain *this_01;
  FAnimNode_LegIK *pFVar20;
  undefined1 auStackY_238 [32];
  undefined1 local_1e8;
  undefined1 local_1e7 [3];
  undefined1 local_1e4 [20];
  undefined1 local_1d0 [8];
  FIKChain *local_1c8;
  FAnimNode_LegIK *local_1c0;
  FBoneContainer *local_1b8;
  longlong local_1b0;
  FScriptContainerElement *local_1a8;
  FAnimLegIKData local_198;
  TSet<TTuple<FName,FIKChain>,TDefaultMapHashableKeyFuncs<FName,FIKChain,0>,FDefaultSetAllocator>
  local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_1c0 = this;
  local_1b8 = param_1;
  FStatsHierarchical::BeginMeasurement("FAnimNode_LegIK::InitializeBoneReferences");
  local_a8.Elements._44_4_ = 0x80;
  pTVar1 = &this->LegsData;
  local_a8.Elements._0_8_ = 0;
  iVar9 = (this->LegsData).ArrayNum;
  pFVar13 = (pTVar1->AllocatorInstance).Data;
  local_a8.Elements._8_8_ = 0;
  pFVar18 = pFVar13 + (longlong)iVar9 * 0xf0;
  local_a8.Elements._32_8_ = 0;
  local_a8.Elements._40_4_ = 0;
  local_a8.Elements._48_4_ = 0xffffffff;
  local_a8.Elements._52_4_ = 0;
  local_a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_a8.HashSize = 0;
  while( true ) {
    if ((this->LegsData).ArrayNum != iVar9) {
      local_1e8 = 0;
      `TCheckedPointerIterator<FAnimLegIKData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_1e8);
    }
    if (pFVar13 == pFVar18) break;
    if (*(longlong *)(pFVar13 + 0x60) != 0) {
      local_1b0 = *(longlong *)(pFVar13 + 0x60) + 0x10;
      local_1a8 = pFVar13 + 0x98;
      TSet<TTuple<FName,FIKChain>,TDefaultMapHashableKeyFuncs<FName,FIKChain,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,FIKChain_const_&>_>
                (&local_a8,(TPairInitializer<FName_const_&,FIKChain_const_&> *)local_1d0,
                 (bool *)&local_1b0);
    }
    pFVar13 = pFVar13 + 0xf0;
  }
  piVar19 = &(this->LegsData).ArrayMax;
  pFVar2 = (FAnimLegIKData *)(pTVar1->AllocatorInstance).Data;
  iVar9 = (this->LegsData).ArrayNum;
  if (*piVar19 < 0) {
    DestructItems<FAnimLegIKData,int>(pFVar2,iVar9);
    (this->LegsData).ArrayNum = 0;
    if (*piVar19 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xf0,0x10,0,&pTVar1->AllocatorInstance,0,piVar19);
    }
  }
  else {
    DestructItems<FAnimLegIKData,int>(pFVar2,iVar9);
    (this->LegsData).ArrayNum = 0;
  }
  local_1e4._8_4_ = (this->LegsDefinition).ArrayNum;
  uVar11 = (ulonglong)(int)local_1e4._8_4_;
  this_01 = (FIKChain *)(this->LegsDefinition).AllocatorInstance.Data;
  this_00 = (FBoneReference *)&this_01->MinRotationAngleRadians;
  pFVar17 = (FIKChain *)((longlong)&this_01->Links + uVar11 * 0x34);
  pFVar20 = this;
  local_1c8 = pFVar17;
  do {
    local_1e4._12_8_ = this_00;
    if ((pFVar20->LegsDefinition).ArrayNum != (int)uVar11) {
      local_1e7[0] = 0;
      `TCheckedPointerIterator<FAnimLegIKDefinition,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_1e7);
    }
    if (this_01 == pFVar17) {
      local_a8.HashSize = 0;
      if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FIKChain>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FIKChain>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_a8.Elements);
      FStatsHierarchical::EndMeasurement();
      return;
    }
    FBoneReference::Initialize((FBoneReference *)this_01,param_1);
    FBoneReference::Initialize(this_00,param_1);
    local_198.IKFootTransform.Rotation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_198.IKFootTransform.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_198.IKFootTransform.Scale3D.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_198.LegDefPtr = (FAnimLegIKDefinition *)0x0;
    local_198.IKFootTransform.Rotation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_198.IKChain.HingeRotationAxis.field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_198.IKChain.HingeRotationAxis.field0_0x0._s_0.Y =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_198.IKFootBoneIndex = (FCompactPoseBoneIndex)0xffffffff;
    local_198.IKFootTransform.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_198.IKChain.HingeRotationAxis.field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_198.IKChain.TotalChainLength = 0.0;
    local_198.IKFootTransform.Scale3D.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    local_198.TwistOffsetDegrees = 0.0;
    local_198.NumBones = -1;
    local_198.FKLegBoneIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_198.FKLegBoneIndices.ArrayNum = 0;
    local_198.FKLegBoneIndices.ArrayMax = 0;
    local_198.FKLegBoneTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_198.FKLegBoneTransforms.ArrayNum = 0;
    local_198.FKLegBoneTransforms.ArrayMax = 0;
    local_198.IKChain.Links.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_198.IKChain.Links._8_8_ = 0;
    local_198.IKChain.MyAnimInstanceProxy = (FAnimInstanceProxy *)0x0;
    local_198.IKChain.NumLinks = 0xffffffff;
    local_198.IKChain.bEnableRotationLimit = false;
    local_198.IKChain.bInitialized = false;
    FVar7 = FBoneReference::GetCompactPoseIndex
                      ((FBoneReference *)this_01,(FBoneContainer *)(local_1d0 + 4));
    local_198.IKFootBoneIndex = *(FCompactPoseBoneIndex *)CONCAT44(extraout_var,FVar7);
    FBoneReference::GetCompactPoseIndex(this_00,(FBoneContainer *)local_1e4);
    if ((local_198.IKFootBoneIndex != (FCompactPoseBoneIndex)0xffffffff) &&
       ((FCompactPoseBoneIndex)local_1e4._0_4_ != (FCompactPoseBoneIndex)0xffffffff)) {
      local_1e4._4_4_ = 1;
      if (1 < (int)this_00[1].BoneName.ComparisonIndex.Value) {
        local_1e4._4_4_ = this_00[1].BoneName.ComparisonIndex.Value;
      }
      PopulateLegBoneIndices
                (&local_198,(FCompactPoseBoneIndex *)local_1e4,(int *)(local_1e4 + 4),param_1);
      if (2 < local_198.FKLegBoneIndices.ArrayNum) {
        FVar3 = this_00->BoneName;
        local_198.NumBones = local_198.FKLegBoneIndices.ArrayNum;
        uVar8 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
        if (local_a8.Elements._8_4_ != local_a8.Elements._52_4_) {
          FVar12 = (ForElementType<FSetElementId>)&local_a8.Hash;
          if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar12 = local_a8.Hash.SecondaryData;
          }
          uVar8 = *(uint *)((longlong)FVar12 +
                           (ulonglong)(local_a8.HashSize - 1U & FVar3.Number + uVar8) * 4);
          while (uVar8 != 0xffffffff) {
            pFVar10 = (FName *)((longlong)(int)uVar8 * 0x60 + local_a8.Elements._0_8_);
            if (*pFVar10 == FVar3) {
              pFVar14 = pFVar10 + 1;
              if (pFVar10 == (FName *)0x0) {
                pFVar14 = (FName *)0x0;
              }
              if (pFVar14 != (FName *)0x0) {
                if (&local_198.IKChain != (FIKChain *)pFVar14) {
                  uVar8 = pFVar14[1].ComparisonIndex.Value;
                  FVar3 = *pFVar14;
                  local_198.IKChain.Links.ArrayNum = uVar8;
                  if ((uVar8 == 0) && (local_198.IKChain.Links.ArrayMax == 0)) {
                    local_198.IKChain.Links._8_8_ = 0;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x70,8,uVar8,local_198.IKChain.Links.ArrayMax,
                               (ForAnyElementType *)&local_198.IKChain,uVar8,
                               &local_198.IKChain.Links.ArrayMax);
                    if (uVar8 != 0) {
                      memcpy(local_198.IKChain.Links.AllocatorInstance.Data,(void *)FVar3,
                             (longlong)(int)uVar8 * 0x70);
                    }
                  }
                }
                local_198.IKChain.MinRotationAngleRadians = (float)pFVar14[2].ComparisonIndex.Value;
                local_198.IKChain.MyAnimInstanceProxy = *(FAnimInstanceProxy **)(pFVar14 + 3);
                local_198.IKChain.TotalChainLength = *(double *)(pFVar14 + 4);
                local_198.IKChain.NumLinks = pFVar14[5].ComparisonIndex.Value;
                local_198.IKChain.HingeRotationAxis.field0_0x0._s_0.X = (double)pFVar14[6];
                local_198.IKChain.HingeRotationAxis.field0_0x0._s_0.Y = (double)pFVar14[7];
                local_198.IKChain.HingeRotationAxis.field0_0x0._s_0.Z = (double)pFVar14[8];
                local_198.IKChain._72_2_ = *(undefined2 *)&pFVar14[9].ComparisonIndex.Value;
              }
              break;
            }
            uVar8 = pFVar10[0xb].ComparisonIndex.Value;
          }
        }
        piVar19 = &(this->LegsData).ArrayMax;
        pFVar2 = (FAnimLegIKData *)(pTVar1->AllocatorInstance).Data;
        local_198.LegDefPtr = (FAnimLegIKDefinition *)this_01;
        if (((pFVar2 <= &local_198) && (&local_198 < pFVar2 + *piVar19)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar9 = (this->LegsData).ArrayNum;
        if (iVar9 == *piVar19) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10f0,&pTVar1->AllocatorInstance,piVar19);
        }
        FVar5.Data = local_198.FKLegBoneIndices.AllocatorInstance.Data;
        pFVar13 = (pTVar1->AllocatorInstance).Data;
        (this->LegsData).ArrayNum = iVar9 + 1;
        lVar15 = (longlong)iVar9 * 0xf0;
        pFVar18 = pFVar13 + lVar15 + 0x78;
        *(double *)(pFVar13 + lVar15) = local_198.IKFootTransform.Rotation.XY.m128d_f64[0];
        *(double *)(pFVar13 + lVar15 + 8) = local_198.IKFootTransform.Rotation.XY.m128d_f64[1];
        *(double *)(pFVar13 + lVar15 + 0x10) = local_198.IKFootTransform.Rotation.ZW.m128d_f64[0];
        *(double *)(pFVar13 + lVar15 + 0x10 + 8) =
             local_198.IKFootTransform.Rotation.ZW.m128d_f64[1];
        *(double *)(pFVar13 + lVar15 + 0x20) = local_198.IKFootTransform.Translation.XY.m128d_f64[0]
        ;
        *(double *)(pFVar13 + lVar15 + 0x20 + 8) =
             local_198.IKFootTransform.Translation.XY.m128d_f64[1];
        *(double *)(pFVar13 + lVar15 + 0x30) = local_198.IKFootTransform.Translation.ZW.m128d_f64[0]
        ;
        *(double *)(pFVar13 + lVar15 + 0x30 + 8) =
             local_198.IKFootTransform.Translation.ZW.m128d_f64[1];
        *(double *)(pFVar13 + lVar15 + 0x40) = local_198.IKFootTransform.Scale3D.XY.m128d_f64[0];
        *(double *)(pFVar13 + lVar15 + 0x40 + 8) = local_198.IKFootTransform.Scale3D.XY.m128d_f64[1]
        ;
        *(double *)(pFVar13 + lVar15 + 0x50) = local_198.IKFootTransform.Scale3D.ZW.m128d_f64[0];
        *(double *)(pFVar13 + lVar15 + 0x50 + 8) = local_198.IKFootTransform.Scale3D.ZW.m128d_f64[1]
        ;
        *(FAnimLegIKDefinition **)(pFVar13 + lVar15 + 0x60) = local_198.LegDefPtr;
        *(FCompactPoseBoneIndex *)(pFVar13 + lVar15 + 0x68) = local_198.IKFootBoneIndex;
        *(float *)(pFVar13 + lVar15 + 0x6c) = local_198.TwistOffsetDegrees;
        *(int *)(pFVar13 + lVar15 + 0x70) = local_198.NumBones;
        *(undefined8 *)pFVar18 = 0;
        lVar16 = (longlong)local_198.FKLegBoneIndices.ArrayNum;
        *(int *)(pFVar18 + 8) = local_198.FKLegBoneIndices.ArrayNum;
        if (local_198.FKLegBoneIndices.ArrayNum == 0) {
          *(int *)(pFVar13 + lVar15 + 0x84) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_198.FKLegBoneIndices.ArrayNum,0,(ForAnyElementType *)pFVar18,
                     local_198.FKLegBoneIndices.ArrayNum,(int *)(pFVar13 + lVar15 + 0x84));
          memcpy(*(void **)pFVar18,FVar5.Data,lVar16 << 2);
        }
        FVar5.Data = local_198.FKLegBoneTransforms.AllocatorInstance.Data;
        pFVar18 = pFVar13 + lVar15 + 0x88;
        *(undefined8 *)pFVar18 = 0;
        lVar16 = (longlong)local_198.FKLegBoneTransforms.ArrayNum;
        *(int *)(pFVar18 + 8) = local_198.FKLegBoneTransforms.ArrayNum;
        if (local_198.FKLegBoneTransforms.ArrayNum == 0) {
          *(int *)(pFVar13 + lVar15 + 0x94) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x60,0x10,local_198.FKLegBoneTransforms.ArrayNum,0,(ForAnyElementType *)pFVar18
                     ,local_198.FKLegBoneTransforms.ArrayNum,(int *)(pFVar13 + lVar15 + 0x94));
          memcpy(*(void **)pFVar18,FVar5.Data,lVar16 * 0x60);
        }
        FVar5.Data = local_198.IKChain.Links.AllocatorInstance.Data;
        pFVar18 = pFVar13 + lVar15 + 0x98;
        *(undefined8 *)pFVar18 = 0;
        lVar16 = (longlong)local_198.IKChain.Links.ArrayNum;
        *(int *)(pFVar18 + 8) = local_198.IKChain.Links.ArrayNum;
        if (local_198.IKChain.Links.ArrayNum == 0) {
          *(int *)(pFVar13 + lVar15 + 0xa4) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x70,8,local_198.IKChain.Links.ArrayNum,0,(ForAnyElementType *)pFVar18,
                     local_198.IKChain.Links.ArrayNum,(int *)(pFVar13 + lVar15 + 0xa4));
          memcpy(*(void **)pFVar18,FVar5.Data,lVar16 * 0x70);
        }
        *(float *)(pFVar13 + lVar15 + 0xa8) = local_198.IKChain.MinRotationAngleRadians;
        *(FAnimInstanceProxy **)(pFVar13 + lVar15 + 0xb0) = local_198.IKChain.MyAnimInstanceProxy;
        *(double *)(pFVar13 + lVar15 + 0xb8) = local_198.IKChain.TotalChainLength;
        *(int *)(pFVar13 + lVar15 + 0xc0) = local_198.IKChain.NumLinks;
        *(FName *)(pFVar13 + lVar15 + 200) =
             (FName)local_198.IKChain.HingeRotationAxis.field0_0x0._s_0.X;
        ((FName *)(pFVar13 + lVar15 + 200))[1] =
             (FName)local_198.IKChain.HingeRotationAxis.field0_0x0._s_0.Y;
        *(double *)(pFVar13 + lVar15 + 0xd8) = local_198.IKChain.HingeRotationAxis.field0_0x0._s_0.Z
        ;
        pFVar13[lVar15 + 0xe0] = (FScriptContainerElement)local_198.IKChain.bEnableRotationLimit;
        pFVar13[lVar15 + 0xe1] = (FScriptContainerElement)local_198.IKChain.bInitialized;
        this_00 = (FBoneReference *)local_1e4._12_8_;
        pFVar17 = local_1c8;
        param_1 = local_1b8;
        pFVar20 = local_1c0;
      }
    }
    if (local_198.IKChain.Links.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.IKChain.Links.AllocatorInstance.Data);
    }
    if (local_198.FKLegBoneTransforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.FKLegBoneTransforms.AllocatorInstance.Data);
    }
    if (local_198.FKLegBoneIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.FKLegBoneIndices.AllocatorInstance.Data);
    }
    uVar11 = (ulonglong)(uint)local_1e4._8_4_;
    this_01 = (FIKChain *)((longlong)&(this_01->HingeRotationAxis).field0_0x0 + 4);
    this_00 = (FBoneReference *)&this_00[3].BoneName.Number;
  } while( true );
}

// Initialize_AnyThread @ 146459860

void __thiscall
FAnimNode_LegIK::Initialize_AnyThread(FAnimNode_LegIK *this,FAnimationInitializeContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_LegIK::Initialize_AnyThread");
  FStatsHierarchical::BeginMeasurement("FAnimNode_SkeletalControlBase::Initialize_AnyThread");
  FAnimNode_Base::Initialize_AnyThread((FAnimNode_Base *)this,param_1);
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->_padding_,param_1);
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 3) = 0;
  FStatsHierarchical::EndMeasurement();
  this->MyAnimInstanceProxy = *(FAnimInstanceProxy **)param_1;
  FStatsHierarchical::EndMeasurement();
  return;
}

// IsValidToEvaluate @ 14645baf0

bool __thiscall
FAnimNode_LegIK::IsValidToEvaluate(FAnimNode_LegIK *this,USkeleton *param_1,FBoneContainer *param_2)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  longlong lVar3;
  
  pTVar1 = CVarAnimLegIKEnable.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      lVar3 = 4;
      goto LAB_14645bb1f;
    }
  }
  lVar3 = 0;
LAB_14645bb1f:
  if ((*(int *)((longlong)pTVar1->ShadowedValue + lVar3) == 1) && (0 < (this->LegsData).ArrayNum)) {
    return true;
  }
  return false;
}

// OrientLegTowardsIK @ 14645f370

/* WARNING: Type propagation algorithm not settling */

bool __thiscall FAnimNode_LegIK::OrientLegTowardsIK(FAnimNode_LegIK *this,FAnimLegIKData *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  TConsoleVariableData<int> *pTVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  uint uVar15;
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_100;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_c0;
  TQuat<double> local_b8 [5];
  
  if ((param_1->NumBones < 2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InLegData.NumBones > 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_LegIK.cpp"
                         ,0xc3,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  iVar2 = (param_1->FKLegBoneTransforms).ArrayNum;
  lVar11 = 0;
  uVar10 = iVar2 - 1;
  uVar15 = 0;
  if ((int)uVar10 < iVar2) {
    uVar15 = ~uVar10 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  iVar2 = (param_1->FKLegBoneTransforms).ArrayNum;
  pFVar3 = (param_1->FKLegBoneTransforms).AllocatorInstance.Data;
  lVar12 = (longlong)iVar2 * 0x60;
  pFVar1 = pFVar3 + lVar12 + -0x40;
  local_e8 = *(double *)pFVar1;
  dStack_e0 = *(double *)(pFVar1 + 8);
  local_d8 = *(double *)(pFVar3 + lVar12 + -0x30);
  if ((iVar2 < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  pFVar1 = (param_1->FKLegBoneTransforms).AllocatorInstance.Data;
  local_c0 = (param_1->IKFootTransform).Translation.ZW.m128d_f64[0];
  local_100._s_0.Z = *(double *)(pFVar1 + 0x30) - local_d8;
  local_100._s_0.X = *(double *)(pFVar1 + 0x20) - local_e8;
  local_100._s_0.Y = *(double *)(pFVar1 + 0x28) - dStack_e0;
  dVar13 = local_100._s_0.Y * local_100._s_0.Y + local_100._s_0.X * local_100._s_0.X +
           local_100._s_0.Z * local_100._s_0.Z;
  if (dVar13 != __real_3ff0000000000000) {
    if (__real_3e45798ee0000000 <= dVar13) {
      dVar13 = __real_3ff0000000000000 / SQRT(dVar13);
      local_100._s_0.X = local_100._s_0.X * dVar13;
      local_100._s_0.Y = local_100._s_0.Y * dVar13;
      local_100._s_0.Z = dVar13 * local_100._s_0.Z;
    }
    else {
      local_100._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_100._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_100._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    }
  }
  dVar13 = (param_1->IKFootTransform).Translation.XY.m128d_f64[1] - dStack_e0;
  dVar6 = (param_1->IKFootTransform).Translation.XY.m128d_f64[0] - local_e8;
  dVar5 = local_c0 - local_d8;
  dVar14 = dVar13 * dVar13 + dVar6 * dVar6 + dVar5 * dVar5;
  local_118._s_0.Y = dVar13;
  local_118._s_0.Z = dVar5;
  local_118._s_0.X = dVar6;
  if ((dVar14 != __real_3ff0000000000000) &&
     (local_118._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     local_118._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     local_118._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     __real_3e45798ee0000000 <= dVar14)) {
    dVar14 = __real_3ff0000000000000 / SQRT(dVar14);
    local_118._s_0.Y = dVar13 * dVar14;
    local_118._s_0.Z = dVar5 * dVar14;
    local_118._s_0.X = dVar6 * dVar14;
  }
  if ((((local_100._s_0.X != 0.0) || (local_100._s_0.Y != 0.0)) || (local_100._s_0.Z != 0.0)) &&
     (((__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)(local_100._s_0.X - local_118._s_0.X) >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(local_100._s_0.X - local_118._s_0.X,0) &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff) ||
       (__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)(local_100._s_0.Y - local_118._s_0.Y) >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(local_100._s_0.Y - local_118._s_0.Y,0) &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
      (uVar15 = SUB84(local_100._s_0.Z - local_118._s_0.Z,0) &
                (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar10 = (uint)((ulonglong)(local_100._s_0.Z - local_118._s_0.Z) >> 0x20) &
               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar10,uVar15) &&
      (double)CONCAT44(uVar10,uVar15) != __real_3f1a36e2e0000000)))) {
    UE::Math::TQuat<double>::FindBetweenNormals
              (local_b8,(TVector<double> *)&local_100._s_0,(TVector<double> *)&local_118._s_0);
    bVar8 = RotateLegByQuat(local_b8,param_1);
    pTVar7 = CVarAnimNodeLegIKDebug.Ref;
    if (bVar8) {
      bVar8 = IsInParallelGameThread();
      if ((!bVar8) && (bVar8 = IsInGameThread(), !bVar8)) {
        lVar11 = 4;
      }
      if (*(int *)((longlong)pTVar7->ShadowedValue + lVar11) == 1) {
        DrawDebugLeg(param_1,this->MyAnimInstanceProxy,&FColor::Green);
      }
      return true;
    }
  }
  return false;
}

