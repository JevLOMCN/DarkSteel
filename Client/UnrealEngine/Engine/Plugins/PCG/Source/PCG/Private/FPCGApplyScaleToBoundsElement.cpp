// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// operator() @ 149ad74b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`FPCGApplyScaleToBoundsElement::ExecuteInternal'::__l2::<lambda_1>::operator()
          (void *this,UPCGBasePointData *param_1,UPCGBasePointData *param_2,int param_3,int param_4)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  double *pdVar14;
  uint uVar15;
  ulonglong uVar16;
  double *pdVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auStack_1b8 [32];
  ulonglong local_198;
  longlong local_190;
  double local_188;
  double dStack_180;
  double local_178;
  longlong local_170;
  int local_168;
  int local_164;
  int local_160;
  double local_158 [3];
  longlong local_140;
  int local_138;
  int local_134;
  int local_130;
  double local_128 [3];
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  longlong local_f8;
  int local_f0;
  int local_ec;
  int local_e8;
  undefined1 local_d8 [96];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  uVar16 = (ulonglong)param_3;
  (**(code **)(param_2->_padding_ + 0x4d0))(param_2,&local_170,1);
  (**(code **)(param_2->_padding_ + 0x4d8))(param_2,&local_140,1);
  (**(code **)(param_2->_padding_ + 0x4c0))(param_2,&local_f8,1);
  uVar8 = __real_bff0000000000000;
  uVar7 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar6 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar5 = __real_3ff0000000000000;
  if (param_3 < param_4 + param_3) {
    uVar23 = (undefined4)__real_3ff0000000000000;
    uVar24 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    uVar25 = (undefined4)__real_bff0000000000000;
    uVar26 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
    uVar18 = uVar16;
    do {
      local_190 = (longlong)local_160;
      uVar15 = (uint)uVar16;
      uVar13 = ~uVar15 >> 0x1f;
      uVar12 = 0;
      if ((int)uVar15 < local_160) {
        uVar12 = uVar13;
      }
      if ((uVar12 == 0) &&
         (local_198 = uVar18,
         bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < NumElements)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                            ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar1 = (code *)swi(3);
        uVar10 = (*pcVar1)();
        return (bool)uVar10;
      }
      uVar12 = (int)uVar15 >> 0x1f;
      uVar19 = (uint)((longlong)((ulonglong)uVar12 << 0x20 | uVar16 & 0xffffffff) %
                     (longlong)local_164);
      if (uVar15 == uVar19) {
        pdVar17 = (double *)((longlong)local_168 * (longlong)(int)uVar19 + local_170);
      }
      else {
        pdVar17 = local_158;
      }
      local_190 = (longlong)local_130;
      uVar19 = 0;
      if ((int)uVar15 < local_130) {
        uVar19 = uVar13;
      }
      if ((uVar19 == 0) &&
         (local_198 = uVar18,
         bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < NumElements)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                            ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar1 = (code *)swi(3);
        uVar10 = (*pcVar1)();
        return (bool)uVar10;
      }
      uVar19 = (uint)((longlong)((ulonglong)uVar12 << 0x20 | uVar16 & 0xffffffff) %
                     (longlong)local_134);
      if (uVar15 == uVar19) {
        pdVar14 = (double *)((longlong)local_138 * (longlong)(int)uVar19 + local_140);
      }
      else {
        pdVar14 = local_128;
      }
      local_190 = (longlong)local_e8;
      uVar19 = 0;
      if ((int)uVar15 < local_e8) {
        uVar19 = uVar13;
      }
      if ((uVar19 == 0) &&
         (local_198 = uVar18,
         bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < NumElements)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                            ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar1 = (code *)swi(3);
        uVar10 = (*pcVar1)();
        return (bool)uVar10;
      }
      uVar12 = (uint)((longlong)((ulonglong)uVar12 << 0x20 | uVar16 & 0xffffffff) %
                     (longlong)local_ec);
      if (uVar15 == uVar12) {
        puVar11 = (undefined1 *)((longlong)local_f0 * (longlong)(int)uVar12 + local_f8);
      }
      else {
        puVar11 = local_d8;
      }
      local_178 = *(double *)(puVar11 + 0x50);
      local_188 = *(double *)(puVar11 + 0x40);
      dStack_180 = *(double *)(puVar11 + 0x48);
      local_100 = uVar8;
      if (0.0 <= local_178) {
        local_100 = uVar5;
      }
      uStack_108 = uVar25;
      uStack_104 = uVar26;
      if (0.0 <= dStack_180) {
        uStack_108 = uVar23;
        uStack_104 = uVar24;
      }
      local_110 = uVar25;
      uStack_10c = uVar26;
      if (0.0 <= local_188) {
        local_110 = uVar23;
        uStack_10c = uVar24;
      }
      uVar16 = (ulonglong)(uVar15 + 1);
      uVar18 = uVar18 + 1;
      *(undefined4 *)(puVar11 + 0x40) = local_110;
      *(undefined4 *)(puVar11 + 0x44) = uStack_10c;
      *(undefined4 *)(puVar11 + 0x48) = uStack_108;
      *(undefined4 *)(puVar11 + 0x4c) = uStack_104;
      *(undefined8 *)(puVar11 + 0x50) = local_100;
      *(undefined8 *)(puVar11 + 0x58) = 0;
      uVar21 = SUB84(local_188,0) & uVar6;
      uVar22 = (uint)((ulonglong)local_188 >> 0x20) & uVar7;
      uVar19 = SUB84(dStack_180,0) & uVar6;
      uVar20 = (uint)((ulonglong)dStack_180 >> 0x20) & uVar7;
      uVar12 = SUB84(local_178,0) & uVar6;
      uVar13 = (uint)((ulonglong)local_178 >> 0x20) & uVar7;
      *pdVar17 = (double)CONCAT44(uVar22,uVar21) * *pdVar17;
      dVar3 = pdVar17[2] * (double)CONCAT44(uVar13,uVar12);
      auVar2._8_4_ = SUB84(dVar3,0);
      auVar2._0_8_ = pdVar17[1] * (double)CONCAT44(uVar20,uVar19);
      auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      *(undefined1 (*) [16])(pdVar17 + 1) = auVar2;
      *pdVar14 = (double)CONCAT44(uVar22,uVar21) * *pdVar14;
      dVar3 = (double)CONCAT44(uVar13,uVar12) * pdVar14[2];
      auVar4._8_4_ = SUB84(dVar3,0);
      auVar4._0_8_ = (double)CONCAT44(uVar20,uVar19) * pdVar14[1];
      auVar4._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      *(undefined1 (*) [16])(pdVar14 + 1) = auVar4;
    } while ((int)(uVar15 + 1) < param_4 + param_3);
  }
  return true;
}

// ExecuteInternal @ 149b04410

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
FPCGApplyScaleToBoundsElement::ExecuteInternal
          (FPCGApplyScaleToBoundsElement *this,FPCGContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  undefined1 local_res10 [8];
  code *local_18;
  undefined1 *local_10;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId25,"FPCGApplyScaleToBoundsElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGApplyScaleToBounds.cpp"
               ,0x19);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId25);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGApplyScaleToBounds.cpp"
                         ,0x1a,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FPCGApplyScaleToBoundsElement::ExecuteInternal'::__l2::<lambda_1>,bool,UPCGBasePointData_const_*,UPCGBasePointData_*,int,int>
             ::Call;
  bVar2 = FPCGPointOperationElementBase::ExecutePointOperationWithIndices
                    ((FPCGPointOperationElementBase *)this,
                     (TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>
                      *)param_1,
                     (TFunctionRef<bool___cdecl(UPCGBasePointData_const_*,UPCGBasePointData_*,int,int)>
                      *)&local_18,0x1000);
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar2;
}

// GetPropertiesToAllocate @ 149b18870

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
FPCGApplyScaleToBoundsElement::GetPropertiesToAllocate
          (FPCGApplyScaleToBoundsElement *this,FPCGContext *param_1)

{
  return BoundsMax|BoundsMin|Transform;
}

// ShouldCopyPoints @ 149b2cdd0

bool __thiscall FPCGApplyScaleToBoundsElement::ShouldCopyPoints(FPCGApplyScaleToBoundsElement *this)

{
  return true;
}

// SupportsBasePointDataInputs @ 149b2d110

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
FPCGApplyScaleToBoundsElement::SupportsBasePointDataInputs
          (FPCGApplyScaleToBoundsElement *this,FPCGContext *param_1)

{
  return true;
}

