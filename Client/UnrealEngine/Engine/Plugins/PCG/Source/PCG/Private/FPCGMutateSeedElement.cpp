// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// operator() @ 149beedc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`FPCGMutateSeedElement::ExecuteInternal'::__l2::<lambda_1>::operator()
          (void *this,UPCGBasePointData *param_1,UPCGBasePointData *param_2,int param_3,int param_4)

{
  double *pdVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  undefined1 auStack_128 [32];
  ulonglong local_108;
  longlong local_100;
  longlong local_f8;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  TVector<double>_u_0 local_e0;
  longlong local_c8;
  int local_c0;
  int local_bc;
  int local_b8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  uVar13 = (ulonglong)param_3;
  (**(code **)(param_2->_padding_ + 0x500))(param_2,&local_c8);
  (**(code **)(param_2->_padding_ + 0x4f0))(param_2,&local_f8,1);
  iVar16 = param_4 + param_3;
  uVar14 = uVar13;
  lVar9 = local_100;
  while( true ) {
    if (iVar16 <= param_3) {
      return true;
    }
    local_100 = (longlong)local_e8;
    uVar12 = (uint)uVar14;
    uVar15 = ~uVar12 >> 0x1f;
    uVar10 = 0;
    if ((int)uVar12 < local_e8) {
      uVar10 = uVar15;
    }
    if ((uVar10 == 0) &&
       (local_108 = uVar13,
       bVar4 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < NumElements)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                          ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
       lVar9 = local_100, bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    local_100 = lVar9;
    uVar10 = (int)uVar12 >> 0x1f;
    uVar11 = (uint)((longlong)((ulonglong)uVar10 << 0x20 | uVar14 & 0xffffffff) % (longlong)local_ec
                   );
    if (uVar12 == uVar11) {
      piVar8 = (int *)((longlong)local_f0 * (longlong)(int)uVar11 + local_f8);
    }
    else {
      piVar8 = &local_e4;
    }
    iVar7 = *piVar8;
    iVar2 = *(int *)this;
    uVar11 = 0;
    if ((int)uVar12 < local_b8) {
      uVar11 = uVar15;
    }
    if ((uVar11 == 0) &&
       (local_108 = uVar13, local_100 = (longlong)local_b8,
       bVar4 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < NumElements)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                          ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    lVar9 = (longlong)
            (int)((longlong)((ulonglong)uVar10 << 0x20 | uVar14 & 0xffffffff) % (longlong)local_bc)
            * (longlong)local_c0;
    pdVar1 = (double *)(lVar9 + 0x20 + local_c8);
    local_e0._s_0.X = *pdVar1;
    local_e0._s_0.Y = pdVar1[1];
    local_e0._s_0.Z = *(double *)(lVar9 + 0x30 + local_c8);
    iVar6 = PCGHelpers::ComputeSeedFromPosition((TVector<double> *)&local_e0._s_0);
    iVar7 = PCGHelpers::ComputeSeed(iVar6,iVar2,iVar7);
    uVar11 = 0;
    if ((int)uVar12 < local_e8) {
      uVar11 = uVar15;
    }
    if ((uVar11 == 0) &&
       (local_108 = uVar13, local_100 = (longlong)local_e8,
       bVar4 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < NumElements)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                          ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar4)) break;
    uVar10 = (uint)((longlong)((ulonglong)uVar10 << 0x20 | uVar14 & 0xffffffff) % (longlong)local_ec
                   );
    if (uVar12 == uVar10) {
      piVar8 = (int *)((longlong)local_f0 * (longlong)(int)uVar10 + local_f8);
    }
    else {
      piVar8 = &local_e4;
    }
    param_3 = uVar12 + 1;
    uVar14 = (ulonglong)(uint)param_3;
    *piVar8 = iVar7;
    uVar13 = uVar13 + 1;
    lVar9 = local_100;
  }
  pcVar3 = (code *)swi(3);
  uVar5 = (*pcVar3)();
  return (bool)uVar5;
}

// ExecuteInternal @ 149c133e0

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
FPCGMutateSeedElement::ExecuteInternal(FPCGMutateSeedElement *this,FPCGContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  int local_res10 [2];
  code *local_18;
  int *local_10;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId32,"FPCGMutateSeedElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGMutateSeed.cpp"
               ,0x20);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId32);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGMutateSeed.cpp"
                         ,0x22,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  local_res10[0] = FPCGContext::GetSeed(param_1);
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FPCGMutateSeedElement::ExecuteInternal'::__l2::<lambda_1>,bool,UPCGBasePointData_const_*,UPCGBasePointData_*,int,int>
             ::Call;
  bVar2 = FPCGPointOperationElementBase::ExecutePointOperationWithIndices
                    ((FPCGPointOperationElementBase *)this,
                     (TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>
                      *)param_1,
                     (TFunctionRef<bool___cdecl(UPCGBasePointData_const_*,UPCGBasePointData_*,int,int)>
                      *)&local_18,0x18000);
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar2;
}

// GetPropertiesToAllocate @ 149c27350

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
FPCGMutateSeedElement::GetPropertiesToAllocate(FPCGMutateSeedElement *this,FPCGContext *param_1)

{
  return Seed;
}

// ShouldCopyPoints @ 149c34350

bool __thiscall FPCGMutateSeedElement::ShouldCopyPoints(FPCGMutateSeedElement *this)

{
  return true;
}

// SupportsBasePointDataInputs @ 149c357a0

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
FPCGMutateSeedElement::SupportsBasePointDataInputs(FPCGMutateSeedElement *this,FPCGContext *param_1)

{
  return true;
}

