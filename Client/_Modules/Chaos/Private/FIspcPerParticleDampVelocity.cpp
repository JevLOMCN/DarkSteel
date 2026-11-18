// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 8

// GetTestFlags @ 143b809e0

EAutomationTestFlags __thiscall
FIspcPerParticleDampVelocity::GetTestFlags(FIspcPerParticleDampVelocity *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 143b809f0

bool __thiscall FIspcPerParticleDampVelocity::IsStressTest(FIspcPerParticleDampVelocity *this)

{
  return false;
}

// GetRequiredDeviceNum @ 143b80a00

uint __thiscall
FIspcPerParticleDampVelocity::GetRequiredDeviceNum(FIspcPerParticleDampVelocity *this)

{
  return 1;
}

// GetTestSourceFileName @ 143b80a10

FString * __thiscall
FIspcPerParticleDampVelocity::GetTestSourceFileName
          (FIspcPerParticleDampVelocity *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\IspcTestPerParticleDampVelocity.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 143b80a40

int __thiscall
FIspcPerParticleDampVelocity::GetTestSourceFileLine(FIspcPerParticleDampVelocity *this)

{
  return 9;
}

// GetTests @ 143b80a50

/* WARNING: Removing unreachable block (ram,0x000143b80b3d) */
/* WARNING: Removing unreachable block (ram,0x000143b80c08) */

void __thiscall
FIspcPerParticleDampVelocity::GetTests
          (FIspcPerParticleDampVelocity *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Ispc.Physics.PerParticleDampVelocity");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 143b80c30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FIspcPerParticleDampVelocity::RunTest(FIspcPerParticleDampVelocity *this,FString *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  ForAnyElementType FVar7;
  ForAnyElementType FVar8;
  int iVar9;
  undefined4 uVar10;
  void *pvVar11;
  void *pvVar12;
  bool bVar13;
  undefined1 uVar14;
  bool bVar15;
  uint uVar16;
  ForAnyElementType FVar17;
  int iVar18;
  FScriptContainerElement *pFVar19;
  ulonglong uVar20;
  uint uVar21;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_2f0;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_2e0;
  int local_2d0;
  FString local_2c8;
  FString local_2b8;
  undefined1 local_2a8 [168];
  void *local_200;
  int local_1f8;
  undefined1 local_1e8 [168];
  void *local_140;
  int local_138;
  FStringFormatArg local_128;
  FStringFormatArg local_108;
  FPerParticleDampVelocity local_e8;
  FPerParticleDampVelocity local_a8;
  ulonglong uVar22;
  
  bVar15 = bChaos_DampVelocity_ISPC_Enabled;
  local_2c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c8.Data.ArrayNum = 0;
  local_2f0.AllocatorInstance.Data = (FScriptContainerElement *)&DAT_400000003f800000;
  local_2f0.ArrayNum = 0x40400000;
  local_2e0.AllocatorInstance.Data = (FScriptContainerElement *)&DAT_400000003f800000;
  local_2e0.ArrayNum = 0x40400000;
  bChaos_DampVelocity_ISPC_Enabled = true;
  Chaos::Softs::FSolverParticles::FSolverParticles((FSolverParticles *)local_2a8);
  uVar10 = local_2a8._16_4_;
  lVar23 = (longlong)(int)local_2a8._16_4_;
  local_2a8._24_4_ = 0x65;
  pFVar19 = (FScriptContainerElement *)local_2a8._8_8_;
  while( true ) {
    if (local_2a8._16_4_ != uVar10) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<Chaos::TArrayCollectionArrayBase_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    iVar9 = local_2c8.Data.ArrayNum;
    FVar8.Data = local_2c8.Data.AllocatorInstance.Data;
    FVar7.Data = local_2e0.AllocatorInstance.Data;
    iVar6 = local_2f0.ArrayNum;
    FVar17.Data = local_2f0.AllocatorInstance.Data;
    if (pFVar19 == (FScriptContainerElement *)(local_2a8._8_8_ + lVar23 * 8)) break;
    plVar1 = *(longlong **)pFVar19;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1,0x65);
    }
    pFVar19 = pFVar19 + 8;
  }
  local_2a8._60_4_ = local_2a8._60_4_ + 1;
  iVar18 = 0;
  lVar25 = 0;
  lVar23 = 0;
  lVar24 = 0;
  local_2d0 = local_2e0.ArrayNum;
  do {
    if (((int)local_2a8._152_4_ <= iVar18) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar2 = (code *)swi(3);
      uVar14 = (*pcVar2)();
      return (bool)uVar14;
    }
    *(undefined4 *)(local_2a8._144_8_ + lVar25) = 0x3f800000;
    if ((local_1f8 <= iVar18) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar2 = (code *)swi(3);
      uVar14 = (*pcVar2)();
      return (bool)uVar14;
    }
    *(FScriptContainerElement **)((longlong)local_200 + lVar24) = FVar8.Data;
    *(int *)((longlong)local_200 + lVar24 + 8) = iVar9;
    if ((local_1f8 <= iVar18) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar2 = (code *)swi(3);
      uVar14 = (*pcVar2)();
      return (bool)uVar14;
    }
    *(undefined4 *)((longlong)local_200 + lVar24 + 0xc) = 0x3f800000;
    if (((int)local_2a8._48_4_ <= iVar18) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar2 = (code *)swi(3);
      uVar14 = (*pcVar2)();
      return (bool)uVar14;
    }
    *(FScriptContainerElement **)(local_2a8._40_8_ + lVar23) = FVar17.Data;
    *(int *)(local_2a8._40_8_ + lVar23 + 8) = iVar6;
    if (((int)local_2a8._80_4_ <= iVar18) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar2 = (code *)swi(3);
      uVar14 = (*pcVar2)();
      return (bool)uVar14;
    }
    *(FScriptContainerElement **)(local_2a8._72_8_ + lVar23) = FVar7.Data;
    *(int *)(local_2a8._72_8_ + lVar23 + 8) = local_2d0;
    if (((int)local_2a8._128_4_ <= iVar18) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar2 = (code *)swi(3);
      uVar14 = (*pcVar2)();
      return (bool)uVar14;
    }
    iVar18 = iVar18 + 1;
    lVar24 = lVar24 + 0x10;
    lVar23 = lVar23 + 0xc;
    *(undefined4 *)(local_2a8._120_8_ + lVar25) = 0x3f800000;
    lVar25 = lVar25 + 4;
  } while (iVar18 < 0x65);
  local_e8.LocalDampingCoefficientIndex.Index = ___xmm_ffffffffffffffffffffffffffffffff;
  local_e8.LocalDampingLinearCoefficientIndex.Index = _UNK_15060db24;
  local_e8.LocalDampingAngularCoefficientIndex.Index = _UNK_15060db28;
  local_e8.LocalDampingSpaceIndex.Index = _UNK_15060db2c;
  local_e8.LocalDampingSpace = CenterOfMass;
  local_e8.bPropertyIndicesInitialized = false;
  local_e8.LinearCoefficient = 0.01;
  local_e8.AngularCoefficient = 0.01;
  Chaos::Softs::FPerParticleDampVelocity::UpdatePositionBasedState
            (&local_e8,(FSolverParticles *)local_2a8,0,0x65);
  bChaos_DampVelocity_ISPC_Enabled = false;
  Chaos::Softs::FSolverParticles::FSolverParticles((FSolverParticles *)local_1e8);
  uVar10 = local_1e8._16_4_;
  lVar23 = (longlong)(int)local_1e8._16_4_;
  local_1e8._24_4_ = 0x65;
  pFVar19 = (FScriptContainerElement *)local_1e8._8_8_;
  while( true ) {
    if (local_1e8._16_4_ != uVar10) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<Chaos::TArrayCollectionArrayBase_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (pFVar19 == (FScriptContainerElement *)(local_1e8._8_8_ + lVar23 * 8)) break;
    plVar1 = *(longlong **)pFVar19;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1,0x65);
    }
    pFVar19 = pFVar19 + 8;
  }
  local_1e8._60_4_ = local_1e8._60_4_ + 1;
  iVar18 = 0;
  lVar25 = 0;
  lVar23 = 0;
  lVar24 = 0;
  while( true ) {
    if (((int)local_1e8._152_4_ <= iVar18) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar2 = (code *)swi(3);
      uVar14 = (*pcVar2)();
      return (bool)uVar14;
    }
    *(undefined4 *)(local_1e8._144_8_ + lVar25) = 0x3f800000;
    if ((local_138 <= iVar18) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar2 = (code *)swi(3);
      uVar14 = (*pcVar2)();
      return (bool)uVar14;
    }
    *(FScriptContainerElement **)((longlong)local_140 + lVar24) = FVar8.Data;
    *(int *)((longlong)local_140 + lVar24 + 8) = iVar9;
    if ((local_138 <= iVar18) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar2 = (code *)swi(3);
      uVar14 = (*pcVar2)();
      return (bool)uVar14;
    }
    *(undefined4 *)((longlong)local_140 + lVar24 + 0xc) = 0x3f800000;
    if (((int)local_1e8._48_4_ <= iVar18) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) break;
    *(FScriptContainerElement **)(local_1e8._40_8_ + lVar23) = FVar17.Data;
    *(int *)(local_1e8._40_8_ + lVar23 + 8) = iVar6;
    if (((int)local_1e8._80_4_ <= iVar18) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar2 = (code *)swi(3);
      uVar14 = (*pcVar2)();
      return (bool)uVar14;
    }
    *(FScriptContainerElement **)(local_1e8._72_8_ + lVar23) = FVar7.Data;
    *(int *)(local_1e8._72_8_ + lVar23 + 8) = local_2d0;
    if (((int)local_1e8._128_4_ <= iVar18) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar2 = (code *)swi(3);
      uVar14 = (*pcVar2)();
      return (bool)uVar14;
    }
    iVar18 = iVar18 + 1;
    lVar24 = lVar24 + 0x10;
    lVar23 = lVar23 + 0xc;
    *(undefined4 *)(local_1e8._120_8_ + lVar25) = 0x3f800000;
    lVar25 = lVar25 + 4;
    if (100 < iVar18) {
      local_a8.LocalDampingCoefficientIndex.Index = ___xmm_ffffffffffffffffffffffffffffffff;
      local_a8.LocalDampingLinearCoefficientIndex.Index = _UNK_15060db24;
      local_a8.LocalDampingAngularCoefficientIndex.Index = _UNK_15060db28;
      local_a8.LocalDampingSpaceIndex.Index = _UNK_15060db2c;
      local_a8.LocalDampingSpace = CenterOfMass;
      local_a8.bPropertyIndicesInitialized = false;
      local_a8.LinearCoefficient = 0.01;
      local_a8.AngularCoefficient = 0.01;
      Chaos::Softs::FPerParticleDampVelocity::UpdatePositionBasedState
                (&local_a8,(FSolverParticles *)local_1e8,0,0x65);
      uVar5 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      fVar4 = __real_38d1b717;
      fVar3 = __real_322bcc77;
      uVar20 = 0;
      uVar22 = uVar20;
      bChaos_DampVelocity_ISPC_Enabled = bVar15;
      if (0 < local_1f8) {
        do {
          uVar21 = (uint)uVar22;
          uVar16 = 0;
          if ((int)uVar21 < local_1f8) {
            uVar16 = ~uVar21 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar2 = (code *)swi(3);
            uVar14 = (*pcVar2)();
            return (bool)uVar14;
          }
          pvVar11 = local_200;
          uVar16 = 0;
          if ((int)uVar21 < local_138) {
            uVar16 = ~uVar21 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar2 = (code *)swi(3);
            uVar14 = (*pcVar2)();
            return (bool)uVar14;
          }
          pvVar12 = local_140;
          FStringFormatArg::FStringFormatArg(&local_128,uVar21);
          local_2e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2e0.ArrayNum = 1;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,1,0,&local_2e0.AllocatorInstance,1,&local_2e0.ArrayMax);
          ConstructItems<FStringFormatArg,FStringFormatArg,int>
                    (local_2e0.AllocatorInstance.Data,&local_128,1);
          ::FString::FormatImpl(&local_2b8,L"P Vec {0}",&local_2e0);
          DestructItems<FStringFormatArg,int>
                    ((FStringFormatArg *)local_2e0.AllocatorInstance.Data,local_2e0.ArrayNum);
          if ((FStringFormatArg *)local_2e0.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
            FMemory::Free(local_2e0.AllocatorInstance.Data);
          }
          if (local_128.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.StringValue.Data.AllocatorInstance.Data);
          }
          FStringFormatArg::FStringFormatArg(&local_108,uVar21);
          local_2f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2f0.ArrayNum = 1;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,1,0,&local_2f0.AllocatorInstance,1,&local_2f0.ArrayMax);
          ConstructItems<FStringFormatArg,FStringFormatArg,int>
                    (local_2f0.AllocatorInstance.Data,&local_108,1);
          ::FString::FormatImpl(&local_2c8,L"InvM {0}",&local_2f0);
          DestructItems<FStringFormatArg,int>
                    ((FStringFormatArg *)local_2f0.AllocatorInstance.Data,local_2f0.ArrayNum);
          if ((FStringFormatArg *)local_2f0.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
            FMemory::Free(local_2f0.AllocatorInstance.Data);
          }
          if (local_108.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.StringValue.Data.AllocatorInstance.Data);
          }
          if (((fVar4 < (float)((uint)(*(float *)((longlong)pvVar11 + uVar20) -
                                      *(float *)((longlong)pvVar12 + uVar20)) & uVar5)) ||
              (fVar4 < (float)((uint)(*(float *)((longlong)pvVar11 + uVar20 + 4) -
                                     *(float *)((longlong)pvVar12 + uVar20 + 4)) & uVar5))) ||
             (fVar4 < (float)((uint)(*(float *)((longlong)pvVar11 + uVar20 + 8) -
                                    *(float *)((longlong)pvVar12 + uVar20 + 8)) & uVar5))) {
            bVar15 = false;
          }
          else {
            bVar15 = true;
          }
          FVar17.Data = (FScriptContainerElement *)L"";
          if (local_2b8.Data.ArrayNum != 0) {
            FVar17.Data = local_2b8.Data.AllocatorInstance.Data;
          }
          FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar17.Data,bVar15);
          FVar17.Data = (FScriptContainerElement *)L"";
          if (local_2c8.Data.ArrayNum != 0) {
            FVar17.Data = local_2c8.Data.AllocatorInstance.Data;
          }
          FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,(wchar_t *)FVar17.Data,
                     *(float *)((longlong)pvVar11 + uVar20 + 0xc),
                     *(float *)((longlong)pvVar12 + uVar20 + 0xc),fVar3);
          if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
          }
          if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
          }
          uVar20 = uVar20 + 0x10;
          uVar22 = (ulonglong)(uVar21 + 1);
        } while ((int)(uVar21 + 1) < local_1f8);
      }
      local_1e8._160_8_ = &___7__TArrayCollectionArray_UFPAndInvM_Softs_Chaos___Chaos__6B_;
      if (local_140 != (void *)0x0) {
        FMemory::Free(local_140);
      }
      local_1e8._136_8_ = &___7__TArrayCollectionArray_M_Chaos__6B_;
      if ((void *)local_1e8._144_8_ != (void *)0x0) {
        FMemory::Free((void *)local_1e8._144_8_);
      }
      local_1e8._112_8_ = &___7__TArrayCollectionArray_M_Chaos__6B_;
      if ((void *)local_1e8._120_8_ != (void *)0x0) {
        FMemory::Free((void *)local_1e8._120_8_);
      }
      local_1e8._88_8_ = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
      if ((void *)local_1e8._96_8_ != (void *)0x0) {
        FMemory::Free((void *)local_1e8._96_8_);
      }
      local_1e8._64_8_ = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
      if ((void *)local_1e8._72_8_ != (void *)0x0) {
        FMemory::Free((void *)local_1e8._72_8_);
      }
      local_1e8._0_8_ = &___7__TParticles_M_02_Chaos__6B_;
      local_1e8._32_8_ = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
      if ((void *)local_1e8._40_8_ != (void *)0x0) {
        FMemory::Free((void *)local_1e8._40_8_);
      }
      Chaos::TArrayCollection::~TArrayCollection((TArrayCollection *)local_1e8);
      local_2a8._160_8_ = &___7__TArrayCollectionArray_UFPAndInvM_Softs_Chaos___Chaos__6B_;
      if (local_200 != (void *)0x0) {
        FMemory::Free(local_200);
      }
      local_2a8._136_8_ = &___7__TArrayCollectionArray_M_Chaos__6B_;
      if ((void *)local_2a8._144_8_ != (void *)0x0) {
        FMemory::Free((void *)local_2a8._144_8_);
      }
      local_2a8._112_8_ = &___7__TArrayCollectionArray_M_Chaos__6B_;
      if ((void *)local_2a8._120_8_ != (void *)0x0) {
        FMemory::Free((void *)local_2a8._120_8_);
      }
      local_2a8._88_8_ = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
      if ((void *)local_2a8._96_8_ != (void *)0x0) {
        FMemory::Free((void *)local_2a8._96_8_);
      }
      local_2a8._64_8_ = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
      if ((void *)local_2a8._72_8_ != (void *)0x0) {
        FMemory::Free((void *)local_2a8._72_8_);
      }
      local_2a8._0_8_ = &___7__TParticles_M_02_Chaos__6B_;
      local_2a8._32_8_ = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
      if ((void *)local_2a8._40_8_ != (void *)0x0) {
        FMemory::Free((void *)local_2a8._40_8_);
      }
      Chaos::TArrayCollection::~TArrayCollection((TArrayCollection *)local_2a8);
      return true;
    }
  }
  pcVar2 = (code *)swi(3);
  uVar14 = (*pcVar2)();
  return (bool)uVar14;
}

// GetBeautifiedTestName @ 143b81630

FString * __thiscall
FIspcPerParticleDampVelocity::GetBeautifiedTestName
          (FIspcPerParticleDampVelocity *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Ispc.Physics.PerParticleDampVelocity");
  return __return_storage_ptr__;
}

