// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// operator() @ 149befac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`FPCGResetPointCenterElement::ExecuteInternal'::__l2::<lambda_1>::operator()
          (void *this,UPCGBasePointData *param_1,UPCGBasePointData *param_2,int param_3,int param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined1 (*pauVar11) [16];
  uint uVar12;
  uint uVar13;
  uint uVar14;
  double *pdVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar19;
  double *pdVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  undefined1 auVar28 [16];
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined4 uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auStack_238 [32];
  ulonglong local_218;
  longlong local_210;
  longlong local_208;
  int local_200;
  int local_1fc;
  int local_1f8;
  double local_1f0 [3];
  longlong local_1d8;
  int local_1d0;
  int local_1cc;
  int local_1c8;
  double local_1c0 [3];
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double local_190;
  double dStack_188;
  double local_180;
  undefined1 local_178 [16];
  double local_168;
  double local_160;
  double dStack_158;
  double local_150;
  undefined1 local_148 [16];
  longlong local_128;
  int local_120;
  int local_11c;
  int local_118;
  undefined1 local_108 [96];
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_238;
  uVar17 = (ulonglong)param_3;
  (**(code **)(param_2->_padding_ + 0x4c0))(param_2,&local_128,1);
  (**(code **)(param_2->_padding_ + 0x4d0))(param_2,&local_1d8,1);
  (**(code **)(param_2->_padding_ + 0x4d8))(param_2,&local_208,1);
  iVar19 = param_4 + param_3;
  uVar18 = uVar17;
  while( true ) {
    if (iVar19 <= param_3) {
      return true;
    }
    local_210 = (longlong)local_1f8;
    uVar16 = (uint)uVar18;
    uVar14 = ~uVar16 >> 0x1f;
    uVar12 = 0;
    if ((int)uVar16 < local_1f8) {
      uVar12 = uVar14;
    }
    if ((uVar12 == 0) &&
       (local_218 = uVar17,
       bVar9 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < NumElements)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                          ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return (bool)uVar10;
    }
    uVar12 = (int)uVar16 >> 0x1f;
    uVar13 = (uint)((longlong)((ulonglong)uVar12 << 0x20 | uVar18 & 0xffffffff) %
                   (longlong)local_1fc);
    if (uVar16 == uVar13) {
      pdVar15 = (double *)((longlong)local_200 * (longlong)(int)uVar13 + local_208);
    }
    else {
      pdVar15 = local_1f0;
    }
    local_210 = (longlong)local_1c8;
    uVar13 = 0;
    if ((int)uVar16 < local_1c8) {
      uVar13 = uVar14;
    }
    if ((uVar13 == 0) &&
       (local_218 = uVar17,
       bVar9 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < NumElements)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                          ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return (bool)uVar10;
    }
    uVar13 = (uint)((longlong)((ulonglong)uVar12 << 0x20 | uVar18 & 0xffffffff) %
                   (longlong)local_1cc);
    if (uVar16 == uVar13) {
      pdVar20 = (double *)((longlong)local_1d0 * (longlong)(int)uVar13 + local_1d8);
    }
    else {
      pdVar20 = local_1c0;
    }
    local_210 = (longlong)local_118;
    uVar13 = 0;
    if ((int)uVar16 < local_118) {
      uVar13 = uVar14;
    }
    if ((uVar13 == 0) &&
       (local_218 = uVar17,
       bVar9 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < NumElements)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                          ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar9)) break;
    uVar12 = (uint)((longlong)((ulonglong)uVar12 << 0x20 | uVar18 & 0xffffffff) %
                   (longlong)local_11c);
    if (uVar16 == uVar12) {
      pauVar11 = (undefined1 (*) [16])((longlong)local_120 * (longlong)(int)uVar12 + local_128);
    }
    else {
      pauVar11 = (undefined1 (*) [16])local_108;
    }
    pdVar4 = *(double **)this;
    dVar1 = *pdVar20;
    dVar2 = pdVar20[1];
    dVar3 = pdVar20[2];
    dVar6 = (*pdVar15 - dVar1) * *pdVar4 + dVar1;
    dVar29 = (pdVar15[2] - dVar3) * pdVar4[2] + dVar3;
    dVar27 = (pdVar15[1] - dVar2) * pdVar4[1] + dVar2;
    local_198 = dVar29;
    *pdVar20 = dVar1 - dVar6;
    pdVar20[2] = dVar3 - dVar29;
    pdVar20[1] = dVar2 - dVar27;
    *pdVar15 = *pdVar15 - dVar6;
    pdVar15[1] = pdVar15[1] - dVar27;
    pdVar15[2] = pdVar15[2] - dVar29;
    auVar23 = pauVar11[1];
    dVar24 = auVar23._0_8_;
    dVar29 = dVar29 * *(double *)pauVar11[5];
    dVar1 = *(double *)(pauVar11[5] + 8) * 0.0;
    dVar8 = *(double *)(pauVar11[1] + 8);
    auVar32 = *pauVar11;
    dVar3 = *(double *)pauVar11[4] * dVar6;
    dVar7 = *(double *)(pauVar11[4] + 8) * dVar27;
    uVar33 = (undefined4)((ulonglong)dVar7 >> 0x20);
    local_1a8 = dVar6;
    dStack_1a0 = dVar27;
    local_148 = *pauVar11;
    auVar34._8_4_ = SUB84(dVar7,0);
    auVar34._0_8_ = dVar3;
    auVar34._12_4_ = uVar33;
    auVar26 = blendpd(local_148,auVar23,2);
    auVar35._0_8_ = auVar34._8_8_ * local_148._0_8_ - local_148._8_8_ * dVar3;
    auVar35._8_8_ = dVar29 * local_148._8_8_ - dVar24 * dVar7;
    auVar28._8_4_ = SUB84(dVar7,0);
    auVar28._0_8_ = dVar3;
    auVar28._12_4_ = uVar33;
    auVar21._8_4_ = SUB84(dVar1,0);
    auVar21._0_8_ = dVar29;
    auVar21._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    auVar21 = blendpd(auVar28,auVar21,2);
    auVar22._0_8_ = auVar21._0_8_ * dVar24 - auVar26._0_8_ * dVar29;
    auVar22._8_8_ = auVar21._8_8_ * auVar23._8_8_ - auVar26._8_8_ * dVar1;
    dVar1 = auVar35._8_8_ + auVar35._8_8_;
    dVar2 = auVar22._0_8_ + auVar22._0_8_;
    uVar33 = (undefined4)((ulonglong)dVar2 >> 0x20);
    auVar21 = blendpd(auVar35,auVar22,2);
    auVar36._0_8_ = auVar21._0_8_ + auVar21._0_8_;
    auVar36._8_8_ = auVar21._8_8_ + auVar21._8_8_;
    auVar30._8_4_ = SUB84(dVar2,0);
    auVar30._0_8_ = dVar1;
    auVar30._12_4_ = uVar33;
    auVar26._8_4_ = SUB84(dVar2,0);
    auVar26._0_8_ = dVar1;
    auVar26._12_4_ = uVar33;
    auVar21 = blendpd(auVar26,auVar36,2);
    auVar28 = blendpd(auVar32,auVar23,2);
    local_190 = *(double *)pauVar11[2];
    dStack_188 = *(double *)(pauVar11[2] + 8);
    auVar25._0_8_ = auVar21._0_8_ * dVar24 - auVar28._0_8_ * auVar36._0_8_;
    auVar25._8_8_ = auVar21._8_8_ * auVar23._8_8_ - auVar28._8_8_ * auVar36._8_8_;
    auVar31._0_8_ = auVar30._8_8_ * auVar32._0_8_ - auVar32._8_8_ * dVar1;
    auVar31._8_8_ = auVar36._0_8_ * auVar32._8_8_ - dVar24 * dVar2;
    local_180 = *(double *)pauVar11[3];
    auVar23._8_4_ = SUB84(auVar31._8_8_,0);
    auVar23._0_8_ = auVar31._0_8_;
    auVar23._12_4_ = (int)((ulonglong)auVar31._8_8_ >> 0x20);
    param_3 = uVar16 + 1;
    uVar18 = (ulonglong)(uint)param_3;
    auVar32 = blendpd(auVar31,auVar25,2);
    uVar17 = uVar17 + 1;
    dVar1 = dVar1 * dVar8 + dVar3 + auVar23._8_8_;
    dStack_158 = dVar2 * dVar8 + dVar7 + auVar25._0_8_;
    local_160 = *(double *)pauVar11[2] + dVar1;
    local_178._8_4_ = SUB84(dStack_158,0);
    local_178._0_8_ = dVar1;
    local_178._12_4_ = (int)((ulonglong)dStack_158 >> 0x20);
    dStack_158 = *(double *)(pauVar11[2] + 8) + dStack_158;
    local_168 = auVar36._0_8_ * dVar8 + dVar29 + auVar32._0_8_;
    local_150 = *(double *)pauVar11[3] + local_168;
    *(double *)pauVar11[2] = local_160;
    *(double *)(pauVar11[2] + 8) = dStack_158;
    *(double *)pauVar11[3] = local_150;
    *(undefined8 *)(pauVar11[3] + 8) = 0;
  }
  pcVar5 = (code *)swi(3);
  uVar10 = (*pcVar5)();
  return (bool)uVar10;
}

// ExecuteInternal @ 149c19e80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGResetPointCenterElement::ExecuteInternal(FPCGResetPointCenterElement *this,FPCGContext *param_1)

{
  int iVar1;
  UPCGNode *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UClass *pUVar5;
  UPCGSettings *pUVar6;
  FObjectPtr_u_0 FVar7;
  FPCGTaggedData *pFVar8;
  bool bVar9;
  FObjectPtr_u_0 local_res10;
  UPCGSettings *local_res18;
  code *local_28;
  UPCGSettings **local_20;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId25,"FPCGResetPointCenterElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGResetPointCenter.cpp"
               ,0x19);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId25);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGResetPointCenter.cpp"
                         ,0x1a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr != (UPCGSettings *)0x0) {
    pUVar5 = UPCGResetPointCenterSettings::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar5);
    if (bVar3) {
      FVar7 = (FObjectPtr_u_0)(param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
    else {
      FVar7.Handle = (UObject *)0x0;
    }
    goto LAB_149c19fa2;
  }
  this_00 = param_1->Node;
  if ((this_00 == (UPCGNode *)0x0) ||
     (pUVar6 = UPCGNode::GetSettings(this_00), pUVar6 == (UPCGSettings *)0x0)) {
    pFVar8 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGResetPointCenterSettings>_::__l2::<lambda_1>_>
                       (&(param_1->InputData).TaggedData,(<lambda_1>)local_res10._0_1_);
    if (pFVar8 != (FPCGTaggedData *)0x0) {
      local_res10 = (FObjectPtr_u_0)(pFVar8->Data).Data.field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGSettings *)local_res10.Handle == (UPCGSettings *)0x0) goto LAB_149c19f9b;
        UE::GC::MarkAsReachable(local_res10.Handle);
      }
      if ((UPCGSettings *)local_res10.Handle != (UPCGSettings *)0x0) {
        pUVar5 = UPCGResetPointCenterSettings::StaticClass();
        bVar3 = FObjectPtr::IsA((FObjectPtr *)&local_res10,pUVar5);
        FVar7 = local_res10;
        if (bVar3) goto LAB_149c19fa2;
      }
    }
  }
  else {
    pUVar6 = UPCGNode::GetSettings(this_00);
    FVar7.Handle = (UObject *)FPCGDataCollection::GetSettings(&param_1->InputData,pUVar6);
    if ((UPCGSettings *)FVar7.Handle != (UPCGSettings *)0x0) {
      pUVar5 = UPCGResetPointCenterSettings::StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&(FVar7.Handle)->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&(FVar7.Handle)->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) goto LAB_149c19fa2;
    }
  }
LAB_149c19f9b:
  FVar7.Handle = (UObject *)0x0;
LAB_149c19fa2:
  if (((UPCGSettings *)FVar7.Handle == (UPCGSettings *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGResetPointCenter.cpp"
                         ,0x1f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  local_res18 = (UPCGSettings *)(FVar7.Handle + 5);
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`FPCGResetPointCenterElement::ExecuteInternal'::__l2::<lambda_1>,bool,UPCGBasePointData_const_*,UPCGBasePointData_*,int,int>
             ::Call;
  bVar3 = FPCGPointOperationElementBase::ExecutePointOperationWithIndices
                    ((FPCGPointOperationElementBase *)this,
                     (TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>
                      *)param_1,
                     (TFunctionRef<bool___cdecl(UPCGBasePointData_const_*,UPCGBasePointData_*,int,int)>
                      *)&local_28,0x1000);
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar3;
}

// GetPropertiesToAllocate @ 149c27380

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EPCGPointNativeProperties __thiscall
FPCGResetPointCenterElement::GetPropertiesToAllocate
          (FPCGResetPointCenterElement *this,FPCGContext *param_1)

{
  return BoundsMax|BoundsMin|Transform;
}

// ShouldCopyPoints @ 149c34380

bool __thiscall FPCGResetPointCenterElement::ShouldCopyPoints(FPCGResetPointCenterElement *this)

{
  return true;
}

// SupportsBasePointDataInputs @ 149c35870

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGResetPointCenterElement::SupportsBasePointDataInputs
          (FPCGResetPointCenterElement *this,FPCGContext *param_1)

{
  return true;
}

