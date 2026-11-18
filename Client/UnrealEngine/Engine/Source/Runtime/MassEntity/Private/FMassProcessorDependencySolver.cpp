// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 12

// FMassProcessorDependencySolver @ 1471db290

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

FMassProcessorDependencySolver * __thiscall
FMassProcessorDependencySolver::FMassProcessorDependencySolver
          (FMassProcessorDependencySolver *this,TArrayView<UMassProcessor_*_const,int> *param_1,
          bool param_2)

{
  UMassProcessor **ppUVar1;
  int iVar2;
  undefined4 uVar3;
  
  ppUVar1 = param_1->DataPtr;
  iVar2 = param_1->ArrayNum;
  uVar3 = *(undefined4 *)&param_1->field_0xc;
  this->bSingleThreadTarget = false;
  this->bGameRuntime = param_2;
  (this->Processors).DataPtr = ppUVar1;
  (this->Processors).ArrayNum = iVar2;
  *(undefined4 *)&(this->Processors).field_0xc = uVar3;
  (this->DependencyGraphFileName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DependencyGraphFileName).Data.ArrayNum = 0;
  (this->DependencyGraphFileName).Data.ArrayMax = 0;
  (this->AllNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllNodes).ArrayNum = 0;
  (this->AllNodes).ArrayMax = 0;
  *(undefined8 *)&this->NodeIndexMap = 0;
  *(undefined8 *)&(this->NodeIndexMap).field_0x8 = 0;
  *(undefined8 *)&(this->NodeIndexMap).field_0x20 = 0;
  *(undefined4 *)&(this->NodeIndexMap).field_0x28 = 0;
  *(undefined4 *)&(this->NodeIndexMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->NodeIndexMap).field_0x34 = 0;
  *(undefined4 *)&(this->NodeIndexMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NodeIndexMap).field_0x40 = 0;
  *(undefined4 *)&(this->NodeIndexMap).field_0x48 = 0;
  *(undefined8 *)&(this->MultiThreadedSystemsBitSet).field_0x10 = 0;
  *(undefined4 *)&(this->MultiThreadedSystemsBitSet).field_0x18 = 0;
  *(undefined4 *)&(this->MultiThreadedSystemsBitSet).field_0x1c = 0x80;
  return this;
}

// operator() @ 1471e4610

bool __thiscall
`FMassProcessorDependencySolver::Solve'::__l12::<lambda_1>::operator()
          (void *this,int param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar1 = *(longlong *)this;
  uVar7 = (uint)~param_2 >> 0x1f;
  uVar6 = 0;
  if (param_2 < *(int *)(lVar1 + 0x30)) {
    uVar6 = uVar7;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  lVar2 = *(longlong *)(lVar1 + 0x28);
  uVar8 = (uint)~param_1 >> 0x1f;
  uVar6 = 0;
  if (param_1 < *(int *)(lVar1 + 0x30)) {
    uVar6 = uVar8;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  lVar9 = (longlong)param_2 * 0x208;
  lVar10 = (longlong)param_1 * 0x208;
  if (*(int *)(lVar2 + 0x1e0 + lVar9) < *(int *)(*(longlong *)(lVar1 + 0x28) + 0x1e0 + lVar10)) {
LAB_1471e4857:
    bVar4 = true;
  }
  else {
    lVar1 = *(longlong *)this;
    uVar6 = 0;
    if (param_2 < *(int *)(lVar1 + 0x30)) {
      uVar6 = uVar7;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    lVar2 = *(longlong *)(lVar1 + 0x28);
    uVar6 = 0;
    if (param_1 < *(int *)(lVar1 + 0x30)) {
      uVar6 = uVar8;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if (*(int *)(*(longlong *)(lVar1 + 0x28) + 0x1e0 + lVar10) == *(int *)(lVar9 + lVar2 + 0x1e0)) {
      lVar1 = *(longlong *)this;
      uVar6 = 0;
      if (param_2 < *(int *)(lVar1 + 0x30)) {
        uVar6 = uVar7;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      lVar2 = *(longlong *)(lVar1 + 0x28);
      uVar6 = 0;
      if (param_1 < *(int *)(lVar1 + 0x30)) {
        uVar6 = uVar8;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if (*(int *)(lVar9 + lVar2 + 0x1dc) < *(int *)(lVar10 + 0x1dc + *(longlong *)(lVar1 + 0x28)))
      goto LAB_1471e4857;
    }
    bVar4 = false;
  }
  return bVar4;
}

// operator() @ 1471e5030

bool __thiscall
`FMassProcessorDependencySolver::Solve'::__l22::<lambda_2>::operator()
          (void *this,int param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  lVar2 = *(longlong *)this;
  uVar6 = 0;
  if (param_1 < *(int *)(lVar2 + 0x30)) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar1 = *(int *)((longlong)param_1 * 0x208 + 0x1dc + *(longlong *)(lVar2 + 0x28));
  uVar6 = 0;
  if (param_2 < *(int *)(lVar2 + 0x30)) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  return *(int *)((longlong)param_2 * 0x208 + 0x1dc + *(longlong *)(lVar2 + 0x28)) < iVar1;
}

// BuildDependencies @ 1471fc470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMassProcessorDependencySolver::BuildDependencies(FMassProcessorDependencySolver *this)

{
  TArray<FMassProcessorDependencySolver::FNode,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FNode *pFVar3;
  code *pcVar4;
  FMassProcessorDependencySolver *pFVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  TTuple<FName,int> *pTVar11;
  uint *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  uint *puVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  undefined1 auStackY_588 [32];
  undefined1 local_538;
  undefined1 local_537;
  undefined1 local_536;
  undefined1 local_535;
  uint local_534;
  uint local_530;
  uint local_52c;
  uint local_528;
  longlong local_520;
  ulonglong local_518;
  uint local_510 [2];
  FMassProcessorDependencySolver *local_508;
  longlong local_500;
  FName local_4f8;
  FName local_4f0;
  longlong local_4e8;
  longlong local_4e0;
  uint *local_4d8;
  undefined1 local_4d0 [8];
  FScriptContainerElement *local_4c8;
  uint *local_4c0;
  FName *local_4b8;
  uint *local_4b0;
  FName *local_4a8;
  uint *local_4a0;
  FString local_498;
  FString local_488;
  FString local_478;
  FString local_468;
  FNode local_458;
  FNode local_248;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_588;
  uVar20 = 0;
  pTVar1 = &this->AllNodes;
  if (0 < (this->AllNodes).ArrayNum) {
    local_518 = 0;
    local_508 = this;
    do {
      uVar18 = 0;
      local_520 = 0;
      uVar21 = ~uVar20 >> 0x1f;
      while( true ) {
        uVar13 = local_518;
        uVar8 = 0;
        if ((int)uVar20 < (this->AllNodes).ArrayNum) {
          uVar8 = uVar21;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar9 = (this->AllNodes).ArrayNum;
        if (*(int *)((pTVar1->AllocatorInstance).Data + uVar13 + 0x38) <= (int)uVar18) break;
        uVar8 = 0;
        if ((int)uVar20 < iVar9) {
          uVar8 = uVar21;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar17 = (pTVar1->AllocatorInstance).Data;
        lVar14 = (longlong)(int)uVar20 * 0x208;
        uVar8 = 0;
        if ((int)uVar18 < *(int *)(pFVar17 + lVar14 + 0x38)) {
          uVar8 = ~uVar18 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar5 = local_508;
        local_4f8 = *(FName *)(local_520 + *(longlong *)(pFVar17 + lVar14 + 0x30));
        local_534 = 0xffffffff;
        pTVar11 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                          *)&local_508->NodeIndexMap,local_4f8);
        puVar12 = (uint *)&pTVar11->field_0x8;
        if (pTVar11 == (TTuple<FName,int> *)0x0) {
          puVar12 = (uint *)0x0;
        }
        if (puVar12 == (uint *)0x0) {
          local_534 = (pFVar5->AllNodes).ArrayNum;
          local_4b8 = &local_4f8;
          local_4b0 = &local_534;
          TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<FName_const_&,int_const_&>_>
                    ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                      *)&pFVar5->NodeIndexMap,
                     (TPairInitializer<FName_const_&,int_const_&> *)local_4d0,(bool *)&local_4b8);
          uVar8 = local_534;
          local_458.Name = local_4f8;
          local_458.Processor = (UMassProcessor *)0x0;
          local_458.OriginalDependencies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_458.OriginalDependencies.ArrayNum = 0;
          local_458.OriginalDependencies.ArrayMax = 0;
          local_458.TransientDependencies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_458.TransientDependencies.ArrayNum = 0;
          local_458.TransientDependencies.ArrayMax = 0;
          local_458.ExecuteBefore.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_458.ExecuteBefore.ArrayNum = 0;
          local_458.ExecuteBefore.ArrayMax = 0;
          local_458.ExecuteAfter.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_458.ExecuteAfter.ArrayNum = 0;
          local_458.ExecuteAfter.ArrayMax = 0;
          FMassExecutionRequirements::FMassExecutionRequirements(&local_458.Requirements);
          pFVar3 = (FNode *)(pTVar1->AllocatorInstance).Data;
          local_458.NodeIndex = uVar8;
          local_458.TotalWaitingNodes = 0;
          local_458.MaxExecutionPriority = 0;
          local_458.SequencePositionIndex = 0;
          local_458.SubNodeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_458.SubNodeIndices.ArrayNum = 0;
          local_458.SubNodeIndices.ArrayMax = 0;
          local_458.ValidArchetypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_458.ValidArchetypes.ArrayNum = 0;
          local_458.ValidArchetypes.ArrayMax = 0;
          if (((pFVar3 <= &local_458) && (&local_458 < pFVar3 + (this->AllNodes).ArrayMax)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar9 = (this->AllNodes).ArrayNum;
          piVar2 = &(this->AllNodes).ArrayMax;
          if (iVar9 == *piVar2) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x208,8,&pTVar1->AllocatorInstance,piVar2);
          }
          (this->AllNodes).ArrayNum = iVar9 + 1;
          FNode::FNode((FNode *)((pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 0x208),
                       &local_458);
          DestructItems<FMassArchetypeHandle,int>
                    ((FMassArchetypeHandle *)local_458.ValidArchetypes.AllocatorInstance.Data,
                     local_458.ValidArchetypes.ArrayNum);
          if (local_458.ValidArchetypes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_458.ValidArchetypes.AllocatorInstance.Data);
          }
          if (local_458.SubNodeIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_458.SubNodeIndices.AllocatorInstance.Data);
          }
          FMassExecutionRequirements::~FMassExecutionRequirements(&local_458.Requirements);
          if (local_458.ExecuteAfter.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_458.ExecuteAfter.AllocatorInstance.Data);
          }
          if (local_458.ExecuteBefore.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_458.ExecuteBefore.AllocatorInstance.Data);
          }
          if (local_458.TransientDependencies.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_458.TransientDependencies.AllocatorInstance.Data);
          }
          if (local_458.OriginalDependencies.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_458.OriginalDependencies.AllocatorInstance.Data);
          }
          if (4 < (byte)LogMassDependencies._0_1_) {
            uVar8 = 0;
            if ((int)uVar20 < (this->AllNodes).ArrayNum) {
              uVar8 = uVar21;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            ::FName::ToString((FName *)((pTVar1->AllocatorInstance).Data + lVar14),&local_488);
            ::FName::ToString(&local_4f8,&local_498);
            UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&LogMassDependencies);
            if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_498.Data.AllocatorInstance.Data);
            }
            if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_488.Data.AllocatorInstance.Data);
            }
          }
        }
        else {
          local_534 = *puVar12;
        }
        if ((((int)local_534 < 0) || ((local_508->AllNodes).ArrayNum <= (int)local_534)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("AllNodes.IsValidIndex(DependentNodeIndex)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessorDependencySolver.cpp"
                               ,0x26a,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar8 = local_534;
        uVar10 = 0;
        if ((int)local_534 < (this->AllNodes).ArrayNum) {
          uVar10 = ~local_534 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar17 = (pTVar1->AllocatorInstance).Data;
        uVar10 = 0;
        if ((int)uVar20 < (this->AllNodes).ArrayNum) {
          uVar10 = uVar21;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar15 = (pTVar1->AllocatorInstance).Data + local_518;
        if (((*(FScriptContainerElement **)(pFVar17 + (longlong)(int)uVar8 * 0x208 + 0x40) <=
              pFVar15) &&
            (pFVar15 < *(FScriptContainerElement **)(pFVar17 + (longlong)(int)uVar8 * 0x208 + 0x40)
                       + (longlong)*(int *)(pFVar17 + (longlong)(int)uVar8 * 0x208 + 0x4c) * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar9 = *(int *)(pFVar17 + (longlong)(int)uVar8 * 0x208 + 0x48);
        if (iVar9 == *(int *)(pFVar17 + (longlong)(int)uVar8 * 0x208 + 0x4c)) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,(ForAnyElementType *)
                                   (pFVar17 + (longlong)(int)uVar8 * 0x208 + 0x40),
                             (int *)(pFVar17 + (longlong)(int)uVar8 * 0x208 + 0x4c));
        }
        local_520 = local_520 + 8;
        *(int *)(pFVar17 + (longlong)(int)uVar8 * 0x208 + 0x48) = iVar9 + 1;
        uVar18 = uVar18 + 1;
        *(undefined8 *)
         (*(longlong *)(pFVar17 + (longlong)(int)uVar8 * 0x208 + 0x40) + (longlong)iVar9 * 8) =
             *(undefined8 *)pFVar15;
      }
      uVar18 = 0;
      if ((int)uVar20 < iVar9) {
        uVar18 = uVar21;
      }
      if ((uVar18 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar17 = (pTVar1->AllocatorInstance).Data + uVar13 + 0x30;
      *(undefined4 *)(pFVar17 + 8) = 0;
      if (*(int *)(pFVar17 + 0xc) < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0,(ForAnyElementType *)pFVar17,0,(int *)(pFVar17 + 0xc));
      }
      local_518 = uVar13 + 0x208;
      uVar20 = uVar20 + 1;
      iVar9 = (local_508->AllNodes).ArrayNum;
    } while ((int)uVar20 < iVar9);
    local_52c = 0;
    if (0 < iVar9) {
      local_4e8 = 0;
      local_4e0 = 0;
      do {
        lVar14 = 0;
        lVar19 = (longlong)(int)local_52c;
        local_518 = local_518 & 0xffffffff00000000;
        uVar18 = ~local_52c >> 0x1f;
        uVar21 = 0;
        uVar20 = local_52c;
        local_528 = uVar18;
        local_520 = lVar19;
        while( true ) {
          lVar6 = local_4e0;
          uVar8 = 0;
          if ((int)uVar20 < (this->AllNodes).ArrayNum) {
            uVar8 = uVar18;
          }
          local_500 = lVar14;
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar9 = (this->AllNodes).ArrayNum;
          if (*(int *)((pTVar1->AllocatorInstance).Data + lVar6 + 0x48) <= (int)uVar21) break;
          uVar8 = 0;
          if ((int)uVar20 < iVar9) {
            uVar8 = uVar18;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar17 = (pTVar1->AllocatorInstance).Data;
          uVar8 = 0;
          if ((int)uVar21 < *(int *)(pFVar17 + lVar6 + 0x48)) {
            uVar8 = ~uVar21 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar5 = local_508;
          local_4f0 = *(FName *)(lVar14 + *(longlong *)(pFVar17 + lVar6 + 0x40));
          pTVar11 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                            *)&local_508->NodeIndexMap,local_4f0);
          puVar12 = (uint *)&pTVar11->field_0x8;
          if (pTVar11 == (TTuple<FName,int> *)0x0) {
            puVar12 = (uint *)0x0;
          }
          if (puVar12 == (uint *)0x0) {
            local_530 = (pFVar5->AllNodes).ArrayNum;
            local_4a8 = &local_4f0;
            local_4a0 = &local_530;
            TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
            Emplace<TPairInitializer<FName_const_&,int_const_&>_>
                      ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                        *)&pFVar5->NodeIndexMap,
                       (TPairInitializer<FName_const_&,int_const_&> *)(local_4d0 + 4),
                       (bool *)&local_4a8);
            uVar8 = local_530;
            local_248.Name = local_4f0;
            local_248.Processor = (UMassProcessor *)0x0;
            local_248.OriginalDependencies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_248.OriginalDependencies.ArrayNum = 0;
            local_248.OriginalDependencies.ArrayMax = 0;
            local_248.TransientDependencies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_248.TransientDependencies.ArrayNum = 0;
            local_248.TransientDependencies.ArrayMax = 0;
            local_248.ExecuteBefore.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_248.ExecuteBefore.ArrayNum = 0;
            local_248.ExecuteBefore.ArrayMax = 0;
            local_248.ExecuteAfter.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_248.ExecuteAfter.ArrayNum = 0;
            local_248.ExecuteAfter.ArrayMax = 0;
            FMassExecutionRequirements::FMassExecutionRequirements(&local_248.Requirements);
            pFVar3 = (FNode *)(pTVar1->AllocatorInstance).Data;
            local_248.NodeIndex = uVar8;
            local_248.TotalWaitingNodes = 0;
            local_248.MaxExecutionPriority = 0;
            local_248.SequencePositionIndex = 0;
            local_248.SubNodeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_248.SubNodeIndices.ArrayNum = 0;
            local_248.SubNodeIndices.ArrayMax = 0;
            local_248.ValidArchetypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_248.ValidArchetypes.ArrayNum = 0;
            local_248.ValidArchetypes.ArrayMax = 0;
            if (((pFVar3 <= &local_248) && (&local_248 < pFVar3 + (this->AllNodes).ArrayMax)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar9 = (this->AllNodes).ArrayNum;
            piVar2 = &(this->AllNodes).ArrayMax;
            if (iVar9 == *piVar2) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x208,8,&pTVar1->AllocatorInstance,piVar2);
              (this->AllNodes).ArrayNum = iVar9;
            }
            (this->AllNodes).ArrayNum = iVar9 + 1;
            FNode::FNode((FNode *)((pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 0x208),
                         &local_248);
            DestructItems<FMassArchetypeHandle,int>
                      ((FMassArchetypeHandle *)local_248.ValidArchetypes.AllocatorInstance.Data,
                       local_248.ValidArchetypes.ArrayNum);
            if (local_248.ValidArchetypes.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_248.ValidArchetypes.AllocatorInstance.Data);
            }
            if (local_248.SubNodeIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_248.SubNodeIndices.AllocatorInstance.Data);
            }
            FMassExecutionRequirements::~FMassExecutionRequirements(&local_248.Requirements);
            if (local_248.ExecuteAfter.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_248.ExecuteAfter.AllocatorInstance.Data);
            }
            if (local_248.ExecuteBefore.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_248.ExecuteBefore.AllocatorInstance.Data);
            }
            if (local_248.TransientDependencies.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_248.TransientDependencies.AllocatorInstance.Data);
            }
            if (local_248.OriginalDependencies.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_248.OriginalDependencies.AllocatorInstance.Data);
            }
            if (4 < (byte)LogMassDependencies._0_1_) {
              uVar8 = 0;
              if ((int)uVar20 < (this->AllNodes).ArrayNum) {
                uVar8 = uVar18;
              }
              if ((uVar8 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              ::FName::ToString((FName *)((pTVar1->AllocatorInstance).Data + lVar19 * 0x208),
                                &local_468);
              ::FName::ToString(&local_4f0,&local_478);
              UE::Logging::Private::BasicLog<5>
                        (&::LOG_Static,(FLogCategoryBase *)&LogMassDependencies);
              if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_478.Data.AllocatorInstance.Data);
              }
              if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_468.Data.AllocatorInstance.Data);
              }
            }
          }
          else {
            local_530 = *puVar12;
          }
          uVar8 = local_530;
          uVar20 = 0;
          if ((int)local_530 < (this->AllNodes).ArrayNum) {
            uVar20 = ~local_530 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar20 = local_52c;
          pFVar17 = (pTVar1->AllocatorInstance).Data;
          if (*(longlong *)(pFVar17 + (longlong)(int)uVar8 * 0x208 + 8) == 0) {
            puVar16 = *(uint **)(pFVar17 + (longlong)(int)uVar8 * 0x208 + 0x1e8);
            iVar9 = *(int *)(pFVar17 + (longlong)(int)uVar8 * 0x208 + 0x1f0);
            puVar12 = puVar16 + iVar9;
            while( true ) {
              if (*(int *)(pFVar17 + (longlong)(int)uVar8 * 0x208 + 0x1f0) != iVar9) {
                local_538 = 0;
                `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&local_538);
              }
              if (puVar16 == puVar12) break;
              uVar20 = *puVar16;
              uVar18 = 0;
              if ((int)local_52c < (this->AllNodes).ArrayNum) {
                uVar18 = local_528;
              }
              if ((uVar18 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              lVar14 = local_520 * 0x208;
              pFVar15 = (pTVar1->AllocatorInstance).Data;
              uVar18 = 0;
              if ((int)uVar20 < (this->AllNodes).ArrayNum) {
                uVar18 = ~uVar20 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
                        ((TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar15 + lVar14 + 0x40),
                         (FName *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar20 * 0x208)
                        );
              puVar16 = puVar16 + 1;
            }
            lVar14 = local_500;
            lVar19 = local_520;
            uVar18 = local_528;
            uVar21 = (uint)local_518;
            uVar20 = local_52c;
          }
          else {
            uVar8 = 0;
            if ((int)local_52c < (this->AllNodes).ArrayNum) {
              uVar8 = uVar18;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                      ((TArray<int,TSizedDefaultAllocator<32>_> *)
                       ((pTVar1->AllocatorInstance).Data + lVar19 * 0x208 + 0x10),(int *)&local_530)
            ;
          }
          uVar21 = uVar21 + 1;
          lVar14 = lVar14 + 8;
          local_518 = CONCAT44(local_518._4_4_,uVar21);
        }
        uVar21 = 0;
        if ((int)uVar20 < iVar9) {
          uVar21 = uVar18;
        }
        if ((uVar21 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar14 = local_4e8;
        lVar19 = local_4e8 * 0x208;
        if (*(longlong *)((pTVar1->AllocatorInstance).Data + lVar19 + 8) == 0) {
          uVar21 = 0;
          if ((int)uVar20 < (this->AllNodes).ArrayNum) {
            uVar21 = uVar18;
          }
          if ((uVar21 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (*(int *)((pTVar1->AllocatorInstance).Data + lVar19 + 0x1f0) != 0) {
            uVar21 = 0;
            if ((int)uVar20 < (this->AllNodes).ArrayNum) {
              uVar21 = uVar18;
            }
            if ((uVar21 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            local_4c8 = (pTVar1->AllocatorInstance).Data + lVar14 * 0x208 + 0x10;
            local_500 = lVar14 * 0x208;
            uVar13 = (ulonglong)*(int *)(local_4c8 + 8);
            puVar12 = *(uint **)local_4c8;
            local_518 = CONCAT44(local_518._4_4_,*(int *)(local_4c8 + 8));
            local_4c0 = puVar12 + uVar13;
            lVar19 = local_500;
            while( true ) {
              puVar16 = local_4c0;
              local_4d8 = puVar12;
              if (*(int *)(local_4c8 + 8) != (int)uVar13) {
                local_537 = 0;
                `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (&local_537);
              }
              lVar14 = local_4e8;
              if (puVar12 == puVar16) break;
              local_510[0] = *puVar12;
              lVar14 = (longlong)(int)local_510[0];
              uVar21 = 0;
              if ((int)local_510[0] < (this->AllNodes).ArrayNum) {
                uVar21 = ~local_510[0] >> 0x1f;
              }
              if ((uVar21 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              uVar21 = local_510[0];
              if (*(longlong *)((pTVar1->AllocatorInstance).Data + lVar14 * 0x208 + 8) == 0) {
                lVar14 = lVar19;
                if ((int)uVar20 < (int)local_510[0]) {
                  uVar18 = 0;
                  if ((int)local_510[0] < (this->AllNodes).ArrayNum) {
                    uVar18 = ~local_510[0] >> 0x1f;
                  }
                  if ((uVar18 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  pFVar17 = (pTVar1->AllocatorInstance).Data;
                  uVar18 = 0;
                  if ((int)uVar20 < (this->AllNodes).ArrayNum) {
                    uVar18 = local_528;
                  }
                  if ((uVar18 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  pFVar15 = (pTVar1->AllocatorInstance).Data;
                  puVar16 = *(uint **)(pFVar15 + lVar19 + 0x1e8);
                  iVar9 = *(int *)(pFVar15 + lVar19 + 0x1f0);
                  puVar12 = puVar16 + iVar9;
                  while( true ) {
                    if (*(int *)(pFVar15 + lVar19 + 0x1f0) != iVar9) {
                      local_535 = 0;
                      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                                (&local_535);
                    }
                    lVar14 = local_500;
                    uVar18 = local_528;
                    uVar20 = local_52c;
                    if (puVar16 == puVar12) break;
                    uVar20 = *puVar16;
                    uVar18 = 0;
                    if ((int)uVar20 < (this->AllNodes).ArrayNum) {
                      uVar18 = ~uVar20 >> 0x1f;
                    }
                    if ((uVar18 == 0) &&
                       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar7)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
                              ((TArray<FName,TSizedDefaultAllocator<32>_> *)
                               ((pTVar1->AllocatorInstance).Data +
                               (longlong)(int)uVar20 * 0x208 + 0x40),
                               (FName *)(pFVar17 + (longlong)(int)uVar21 * 0x208));
                    puVar16 = puVar16 + 1;
                  }
                }
              }
              else {
                uVar21 = 0;
                if ((int)uVar20 < (this->AllNodes).ArrayNum) {
                  uVar21 = uVar18;
                }
                if ((uVar21 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pFVar17 = (pTVar1->AllocatorInstance).Data;
                puVar16 = *(uint **)(pFVar17 + lVar19 + 0x1e8);
                iVar9 = *(int *)(pFVar17 + lVar19 + 0x1f0);
                puVar12 = puVar16 + iVar9;
                while( true ) {
                  if (*(int *)(pFVar17 + lVar19 + 0x1f0) != iVar9) {
                    local_536 = 0;
                    `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                              (&local_536);
                  }
                  lVar14 = local_500;
                  uVar20 = local_52c;
                  if (puVar16 == puVar12) break;
                  uVar20 = *puVar16;
                  uVar21 = 0;
                  if ((int)uVar20 < (this->AllNodes).ArrayNum) {
                    uVar21 = ~uVar20 >> 0x1f;
                  }
                  if ((uVar21 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                            ((TArray<int,TSizedDefaultAllocator<32>_> *)
                             ((pTVar1->AllocatorInstance).Data +
                             (longlong)(int)uVar20 * 0x208 + 0x10),(int *)local_510);
                  puVar16 = puVar16 + 1;
                }
              }
              puVar12 = local_4d8 + 1;
              uVar13 = local_518 & 0xffffffff;
              lVar19 = lVar14;
            }
          }
        }
        local_52c = uVar20 + 1;
        local_4e8 = lVar14 + 1;
        local_4e0 = local_4e0 + 0x208;
      } while ((int)local_52c < (local_508->AllNodes).ArrayNum);
    }
  }
  return;
}

// CreateNodes @ 14720b420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FMassProcessorDependencySolver::CreateNodes
          (FMassProcessorDependencySolver *this,UMassProcessor *param_1)

{
  int *piVar1;
  ForAnyElementType FVar2;
  FNode *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  TTuple<FName,int> *pTVar12;
  FString *pFVar13;
  FName *pFVar14;
  FNode *pFVar15;
  uint *puVar16;
  UMassProcessor *pUVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  ForAnyElementType *pFVar20;
  wchar_t *pwVar21;
  FScriptContainerElement *pFVar22;
  ForAnyElementType FVar23;
  FScriptContainerElement *pFVar24;
  undefined1 auStack_568 [32];
  FNode *local_548;
  FNode *local_540;
  longlong local_538;
  longlong local_530;
  undefined8 local_528;
  undefined1 local_518 [8];
  undefined1 local_510 [8];
  undefined1 local_508 [16];
  ForAnyElementType local_4f8;
  FName local_4f0;
  ForAnyElementType local_4e8;
  FName local_4e0;
  undefined1 local_4d8 [8];
  ForAnyElementType local_4d0;
  FName *local_4c8;
  undefined1 *local_4c0;
  FName *local_4b8;
  undefined1 *local_4b0;
  FName local_4a8;
  FString local_4a0;
  FString local_490;
  FString local_480;
  undefined1 local_468 [48];
  ForAnyElementType local_438;
  undefined8 local_430;
  ForAnyElementType local_428;
  undefined1 local_420 [400];
  uint local_290;
  undefined8 local_28c;
  int local_284;
  ForAnyElementType local_280;
  undefined8 local_278;
  ForAnyElementType local_270;
  undefined8 local_268;
  FNode local_258;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_568;
  local_4f8.Data = (FScriptContainerElement *)this;
  local_4d0.Data = (FScriptContainerElement *)param_1;
  if ((param_1->_padding_ == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Processor.GetClass()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessorDependencySolver.cpp"
                         ,0x1f8,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return iVar9;
  }
  pUVar17 = param_1;
  if (param_1->bAllowMultipleInstances == '\0') {
    pUVar17 = (UMassProcessor *)param_1->_padding_;
  }
  local_4f0 = (FName)pUVar17->_padding_;
  FVar23.Data = local_4f8.Data + 0x38;
  local_4e8.Data = FVar23.Data;
  pTVar12 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
            Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                  *)FVar23.Data,local_4f0);
  puVar16 = (uint *)&pTVar12->field_0x8;
  if (pTVar12 == (TTuple<FName,int> *)0x0) {
    puVar16 = (uint *)0x0;
  }
  iVar9 = 0;
  if (puVar16 == (uint *)0x0) {
    local_518._0_4_ = 0xffffffff;
    if ((param_1->ExecutionOrder).ExecuteInGroup != (FName)0x0) {
      local_508._0_8_ = (FScriptContainerElement *)0x0;
      local_508._8_8_ = (FScriptContainerElement *)0x0;
      CreateSubGroupNames((param_1->ExecutionOrder).ExecuteInGroup,
                          (TArray<FString,TSizedDefaultAllocator<32>_> *)local_508);
      if (((int)local_508._8_4_ < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllGroupNames.Num() > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessorDependencySolver.cpp"
                             ,0x218,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        iVar9 = (*pcVar4)();
        return iVar9;
      }
      FVar23.Data = local_4e8.Data;
      uVar6 = local_508._8_4_;
      pFVar24 = (FScriptContainerElement *)(local_508._0_8_ + (longlong)(int)local_508._8_4_ * 0x10)
      ;
      pFVar22 = (FScriptContainerElement *)local_508._0_8_;
      while( true ) {
        if (local_508._8_4_ != uVar6) {
          local_518[4] = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_518 + 4);
        }
        if (pFVar22 == pFVar24) break;
        iVar10 = *(int *)(pFVar22 + 8) + -1;
        if (*(int *)(pFVar22 + 8) == 0) {
          iVar10 = iVar9;
        }
        pFVar14 = ::FName::FName(&local_4a8,iVar10,*(wchar_t **)pFVar22,FNAME_Add);
        local_4e0 = *pFVar14;
        pTVar12 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                          *)FVar23.Data,local_4e0);
        FVar7.Data = local_4f8.Data;
        puVar16 = (uint *)&pTVar12->field_0x8;
        if (pTVar12 == (TTuple<FName,int> *)0x0) {
          puVar16 = (uint *)0x0;
        }
        if (puVar16 == (uint *)0x0) {
          local_510._0_4_ = *(undefined4 *)(local_4f8.Data + 0x30);
          local_4c8 = &local_4e0;
          local_4c0 = local_510;
          TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<FName_const_&,int_const_&>_>
                    ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                      *)FVar23.Data,(TPairInitializer<FName_const_&,int_const_&> *)local_4d8,
                     (bool *)&local_4c8);
          uVar5 = local_510._0_4_;
          pFVar19 = FVar7.Data + 0x28;
          local_468._0_4_ = local_4e0.ComparisonIndex.Value;
          local_468._4_4_ = local_4e0.Number;
          local_468._8_8_ = (UMassProcessor *)0x0;
          local_468._16_8_ = (FScriptContainerElement *)0x0;
          local_468._24_4_ = 0;
          local_468._28_4_ = 0;
          local_468._32_8_ = (FScriptContainerElement *)0x0;
          local_468._40_8_ = 0;
          local_438.Data = (FScriptContainerElement *)0x0;
          local_430._0_4_ = 0;
          local_430._4_4_ = 0;
          local_428.Data = (FScriptContainerElement *)0x0;
          local_420._0_8_ = 0;
          FMassExecutionRequirements::FMassExecutionRequirements
                    ((FMassExecutionRequirements *)(local_420 + 8));
                    /* WARNING: Load size is inaccurate */
          FVar2.Data = *pFVar19;
          local_290 = uVar5;
          local_28c._0_4_ = 0;
          local_28c._4_4_ = 0;
          local_284 = 0;
          local_280.Data = (FScriptContainerElement *)0x0;
          local_278._0_4_ = 0;
          local_278._4_4_ = 0;
          local_270.Data = (FScriptContainerElement *)0x0;
          local_268._0_4_ = 0;
          local_268._4_4_ = 0;
          if ((FVar2.Data <= (FNode *)local_468) &&
             ((FNode *)local_468 <
              (FNode *)(FVar2.Data + (longlong)*(int *)(FVar7.Data + 0x34) * 0x208))) {
            local_530 = (longlong)*(int *)(FVar7.Data + 0x30);
            local_528 = 0x208;
            local_548 = (FNode *)local_468;
            local_540 = (FNode *)FVar2.Data;
            local_538 = (longlong)*(int *)(FVar7.Data + 0x34);
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar8) {
              pcVar4 = (code *)swi(3);
              iVar9 = (*pcVar4)();
              return iVar9;
            }
          }
          iVar10 = *(int *)(FVar7.Data + 0x30);
          if (iVar10 == *(int *)(FVar7.Data + 0x34)) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x208,8,(ForAnyElementType *)pFVar19,(int *)(FVar7.Data + 0x34));
          }
          *(int *)(FVar7.Data + 0x30) = iVar10 + 1;
                    /* WARNING: Load size is inaccurate */
          pFVar15 = FNode::FNode((FNode *)(*pFVar19 + (longlong)iVar10 * 0x208),(FNode *)local_468);
          DestructItems<FMassArchetypeHandle,int>
                    ((FMassArchetypeHandle *)local_270.Data,(int)local_268);
          if (local_270.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_270.Data);
          }
          if (local_280.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_280.Data);
          }
          FMassExecutionRequirements::~FMassExecutionRequirements
                    ((FMassExecutionRequirements *)(local_420 + 8));
          if (local_428.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_428.Data);
          }
          if (local_438.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_438.Data);
          }
          if ((FScriptContainerElement *)local_468._32_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_468._32_8_);
          }
          if ((FScriptContainerElement *)local_468._16_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_468._16_8_);
          }
          if (local_518._0_4_ != 0xffffffff) {
            pFVar3 = (FNode *)(pFVar15->OriginalDependencies).AllocatorInstance.Data;
            if ((pFVar3 <= (FNode *)local_518) &&
               (lVar18 = (longlong)(pFVar15->OriginalDependencies).ArrayMax,
               local_518 < &(pFVar3->Name).ComparisonIndex + lVar18)) {
              local_530 = (longlong)(pFVar15->OriginalDependencies).ArrayNum;
              local_528 = 4;
              local_548 = (FNode *)local_518;
              local_540 = pFVar3;
              local_538 = lVar18;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar8) {
                pcVar4 = (code *)swi(3);
                iVar9 = (*pcVar4)();
                return iVar9;
              }
            }
            iVar10 = (pFVar15->OriginalDependencies).ArrayNum;
            piVar1 = &(pFVar15->OriginalDependencies).ArrayMax;
            if (iVar10 == *piVar1) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&(pFVar15->OriginalDependencies).AllocatorInstance,piVar1);
            }
            (pFVar15->OriginalDependencies).ArrayNum = iVar10 + 1;
            *(undefined4 *)
             ((pFVar15->OriginalDependencies).AllocatorInstance.Data + (longlong)iVar10 * 4) =
                 local_518._0_4_;
            pFVar15 = (FNode *)(longlong)(int)local_518._0_4_;
            uVar11 = 0;
            if ((int)local_518._0_4_ < *(int *)(FVar7.Data + 0x30)) {
              uVar11 = (uint)~local_518._0_4_ >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (local_548 = pFVar15, local_540 = (FNode *)(longlong)*(int *)(FVar7.Data + 0x30),
               bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              iVar9 = (*pcVar4)();
              return iVar9;
            }
                    /* WARNING: Load size is inaccurate */
            pFVar19 = *pFVar19 + (longlong)pFVar15 * 0x208 + 0x1e8;
            pFVar15 = *(FNode **)pFVar19;
            if ((pFVar15 <= (FNode *)local_510) &&
               (local_510 < &(pFVar15->Name).ComparisonIndex + *(int *)(pFVar19 + 0xc))) {
              local_530 = (longlong)*(int *)(pFVar19 + 8);
              local_528 = 4;
              local_548 = (FNode *)local_510;
              local_540 = pFVar15;
              local_538 = (longlong)*(int *)(pFVar19 + 0xc);
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar8) {
                pcVar4 = (code *)swi(3);
                iVar9 = (*pcVar4)();
                return iVar9;
              }
            }
            iVar10 = *(int *)(pFVar19 + 8);
            if (iVar10 == *(int *)(pFVar19 + 0xc)) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,(ForAnyElementType *)pFVar19,(int *)(pFVar19 + 0xc));
            }
            *(int *)(pFVar19 + 8) = iVar10 + 1;
            *(undefined4 *)(*(longlong *)pFVar19 + (longlong)iVar10 * 4) = local_510._0_4_;
          }
          local_518._0_4_ = local_510._0_4_;
          pFVar22 = pFVar22 + 0x10;
        }
        else {
          local_518._0_4_ = *puVar16;
          pFVar22 = pFVar22 + 0x10;
        }
      }
      DestructItems<FString,int>((FString *)local_508._0_8_,local_508._8_4_);
      param_1 = (UMassProcessor *)local_4d0.Data;
      FVar23.Data = local_4e8.Data;
      if ((FScriptContainerElement *)local_508._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_508._0_8_);
        FVar23.Data = local_4e8.Data;
      }
    }
    FVar7.Data = local_4f8.Data;
    local_510._4_4_ = *(undefined4 *)(local_4f8.Data + 0x30);
    local_4b8 = &local_4f0;
    local_4b0 = local_510 + 4;
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FName_const_&,int_const_&>_>
              ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                *)FVar23.Data,(TPairInitializer<FName_const_&,int_const_&> *)(local_4d8 + 4),
               (bool *)&local_4b8);
    uVar6 = local_510._4_4_;
    local_258.Name = local_4f0;
    local_258.OriginalDependencies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.OriginalDependencies.ArrayNum = 0;
    local_258.OriginalDependencies.ArrayMax = 0;
    local_258.TransientDependencies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.TransientDependencies.ArrayNum = 0;
    local_258.TransientDependencies.ArrayMax = 0;
    local_258.ExecuteBefore.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.ExecuteBefore.ArrayNum = 0;
    local_258.ExecuteBefore.ArrayMax = 0;
    local_258.ExecuteAfter.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.ExecuteAfter.ArrayNum = 0;
    local_258.ExecuteAfter.ArrayMax = 0;
    local_258.Processor = param_1;
    FMassExecutionRequirements::FMassExecutionRequirements(&local_258.Requirements);
    pFVar15 = *(FNode **)(FVar7.Data + 0x28);
    local_258.NodeIndex = uVar6;
    local_258.TotalWaitingNodes = 0;
    local_258.MaxExecutionPriority = 0;
    local_258.SequencePositionIndex = 0;
    local_258.SubNodeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.SubNodeIndices.ArrayNum = 0;
    local_258.SubNodeIndices.ArrayMax = 0;
    local_258.ValidArchetypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.ValidArchetypes.ArrayNum = 0;
    local_258.ValidArchetypes.ArrayMax = 0;
    if ((pFVar15 <= &local_258) && (&local_258 < pFVar15 + *(int *)(FVar7.Data + 0x34))) {
      local_530 = (longlong)*(int *)(FVar7.Data + 0x30);
      local_528 = 0x208;
      local_548 = &local_258;
      local_540 = pFVar15;
      local_538 = (longlong)*(int *)(FVar7.Data + 0x34);
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        iVar9 = (*pcVar4)();
        return iVar9;
      }
    }
    iVar10 = *(int *)(FVar7.Data + 0x30);
    if (iVar10 == *(int *)(FVar7.Data + 0x34)) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x208,8,(ForAnyElementType *)(FVar7.Data + 0x28),
                          (int *)(FVar7.Data + 0x34));
    }
    *(int *)(FVar7.Data + 0x30) = iVar10 + 1;
    pFVar15 = FNode::FNode((FNode *)((longlong)iVar10 * 0x208 + *(longlong *)(FVar7.Data + 0x28)),
                           &local_258);
    DestructItems<FMassArchetypeHandle,int>
              ((FMassArchetypeHandle *)local_258.ValidArchetypes.AllocatorInstance.Data,
               local_258.ValidArchetypes.ArrayNum);
    if (local_258.ValidArchetypes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.ValidArchetypes.AllocatorInstance.Data);
    }
    if (local_258.SubNodeIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.SubNodeIndices.AllocatorInstance.Data);
    }
    FMassExecutionRequirements::~FMassExecutionRequirements(&local_258.Requirements);
    if (local_258.ExecuteAfter.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.ExecuteAfter.AllocatorInstance.Data);
    }
    if (local_258.ExecuteBefore.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.ExecuteBefore.AllocatorInstance.Data);
    }
    if (local_258.TransientDependencies.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.TransientDependencies.AllocatorInstance.Data);
    }
    if (local_258.OriginalDependencies.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.OriginalDependencies.AllocatorInstance.Data);
    }
    TArray<FName,TSizedDefaultAllocator<32>_>::Append<FName,TSizedDefaultAllocator<32>_>
              (&pFVar15->ExecuteAfter,&(param_1->ExecutionOrder).ExecuteAfter);
    TArray<FName,TSizedDefaultAllocator<32>_>::Append<FName,TSizedDefaultAllocator<32>_>
              (&pFVar15->ExecuteBefore,&(param_1->ExecutionOrder).ExecuteBefore);
    (**(code **)(param_1->_padding_ + 0x2e0))(param_1,&pFVar15->Requirements);
    FStructTypeBitSet::FBitSetContainer::operator-=
              ((FBitSetContainer *)&(pFVar15->Requirements).RequiredSubsystems.Write,
               (TBitArray<FDefaultBitArrayAllocator> *)(FVar7.Data + 0x88));
    FStructTypeBitSet::FBitSetContainer::operator-=
              ((FBitSetContainer *)&(pFVar15->Requirements).RequiredSubsystems,
               (TBitArray<FDefaultBitArrayAllocator> *)(FVar7.Data + 0x88));
    FMassExecutionRequirements::CountResourcesUsed(&pFVar15->Requirements);
    if (UE::Mass::Private::bProcessorExecutionPriorityEnabled != false) {
      iVar9 = (int)param_1->ExecutionPriority;
    }
    pFVar15->MaxExecutionPriority = iVar9;
    pFVar15 = (FNode *)(longlong)(int)local_518._0_4_;
    if ((int)local_518._0_4_ < 1) {
      return local_510._4_4_;
    }
    uVar11 = 0;
    if ((int)local_518._0_4_ < *(int *)(FVar7.Data + 0x30)) {
      uVar11 = (uint)~local_518._0_4_ >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (local_548 = pFVar15, local_540 = (FNode *)(longlong)*(int *)(FVar7.Data + 0x30),
       bVar8 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      iVar9 = (*pcVar4)();
      return iVar9;
    }
    pFVar20 = (ForAnyElementType *)
              (*(longlong *)(FVar7.Data + 0x28) + 0x1e8 + (longlong)pFVar15 * 0x208);
    pFVar15 = (FNode *)pFVar20->Data;
    if ((pFVar15 <= (FNode *)(local_510 + 4)) &&
       (lVar18 = (longlong)*(int *)((longlong)&pFVar20[1].Data + 4),
       local_510 + 4 < &(pFVar15->Name).ComparisonIndex + lVar18)) {
      local_530 = (longlong)*(int *)&pFVar20[1].Data;
      local_528 = 4;
      local_548 = (FNode *)(local_510 + 4);
      local_540 = pFVar15;
      local_538 = lVar18;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        iVar9 = (*pcVar4)();
        return iVar9;
      }
    }
    iVar9 = *(int *)&pFVar20[1].Data;
    piVar1 = (int *)((longlong)&pFVar20[1].Data + 4);
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,pFVar20,piVar1);
    }
    *(int *)&pFVar20[1].Data = iVar9 + 1;
    *(undefined4 *)(pFVar20->Data + (longlong)iVar9 * 4) = local_510._4_4_;
    return local_510._4_4_;
  }
  if (param_1->bAllowMultipleInstances == '\0') {
    if ((byte)LogMassDependencies._0_1_ < 3) goto LAB_14720b59a;
    ::FName::ToString(&local_4f0,&local_480);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMassDependencies);
  }
  else {
    if ((byte)LogMassDependencies._0_1_ < 3) goto LAB_14720b59a;
    pFVar13 = ::FName::ToString(&local_4f0,&local_490);
    if ((pFVar13->Data).ArrayNum == 0) {
      pwVar21 = L"";
    }
    else {
      pwVar21 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
    }
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_4a0,(UObject *)0x0,None);
    local_548 = (FNode *)pwVar21;
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMassDependencies);
    local_480.Data.AllocatorInstance.Data = local_490.Data.AllocatorInstance.Data;
    if (local_4a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4a0.Data.AllocatorInstance.Data);
      local_480.Data.AllocatorInstance.Data = local_490.Data.AllocatorInstance.Data;
    }
  }
  if (local_480.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_480.Data.AllocatorInstance.Data);
  }
LAB_14720b59a:
  return *puVar16;
}

// CreateSubGroupNames @ 14720d2f0

void __cdecl
FMassProcessorDependencySolver::CreateSubGroupNames
          (FName param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  FName local_res8;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  pFVar8 = (param_2->AllocatorInstance).Data;
  piVar1 = &param_2->ArrayMax;
  lVar9 = 0x10;
  local_res8 = param_1;
  if (param_2->ArrayMax < 0) {
    DestructItems<FString,int>((FString *)pFVar8,param_2->ArrayNum);
    param_2->ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar8,param_2->ArrayNum);
    param_2->ArrayNum = 0;
  }
  ::FName::ToString(&local_res8,&local_48);
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  while( true ) {
    ::FString::FString(&local_38,L".");
    bVar4 = ::FString::Split(&local_48,&local_38,&local_68,&local_48);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar8 = (param_2->AllocatorInstance).Data;
    uVar10 = 0;
    if (!bVar4) break;
    if (((pFVar8 <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 < pFVar8 + (longlong)*piVar1 * 0x10)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,piVar1);
    }
    FVar3.Data = local_68.Data.AllocatorInstance.Data;
    pFVar8 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    param_2->ArrayNum = iVar5 + 1;
    *(undefined8 *)&pFVar8->field_0x0 = 0;
    lVar11 = (longlong)local_68.Data.ArrayNum;
    *(int *)&pFVar8[8].field_0x0 = local_68.Data.ArrayNum;
    if (local_68.Data.ArrayNum == 0) {
      *(int *)(pFVar8 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar8,local_68.Data.ArrayNum,
                 (int *)(pFVar8 + 0xc));
      memcpy(*(void **)&pFVar8->field_0x0,FVar3.Data,lVar11 * 2);
    }
  }
  if (((pFVar8 <= (FScriptContainerElement *)&local_48) &&
      ((FScriptContainerElement *)&local_48 < pFVar8 + (longlong)*piVar1 * 0x10)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = param_2->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,piVar1);
  }
  FVar3.Data = local_48.Data.AllocatorInstance.Data;
  pFVar8 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  param_2->ArrayNum = iVar5 + 1;
  *(undefined8 *)&pFVar8->field_0x0 = 0;
  *(int *)&pFVar8[8].field_0x0 = local_48.Data.ArrayNum;
  if (local_48.Data.ArrayNum == 0) {
    *(int *)(pFVar8 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)pFVar8,local_48.Data.ArrayNum,
               (int *)(pFVar8 + 0xc));
    memcpy(*(void **)&pFVar8->field_0x0,FVar3.Data,(longlong)local_48.Data.ArrayNum * 2);
  }
  iVar5 = param_2->ArrayNum;
  uVar7 = 1;
  if (1 < iVar5) {
    do {
      uVar6 = uVar10;
      if ((int)uVar7 < iVar5) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar6 = uVar10;
      if ((int)(uVar7 - 1) < param_2->ArrayNum) {
        uVar6 = -uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      ::FString::PrintfImpl(&local_58,L"%s.%s");
      uVar6 = uVar10;
      if ((int)uVar7 < param_2->ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar8 = (param_2->AllocatorInstance).Data + lVar9;
      if (pFVar8 != (FScriptContainerElement *)&local_58) {
        if (*(void **)pFVar8 != (void *)0x0) {
          FMemory::Free(*(void **)pFVar8);
        }
        *(FScriptContainerElement **)pFVar8 = local_58.Data.AllocatorInstance.Data;
        local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar8 + 8) = local_58.Data.ArrayNum;
        *(int *)(pFVar8 + 0xc) = local_58.Data.ArrayMax;
        local_58.Data.ArrayNum = 0;
        local_58.Data.ArrayMax = 0;
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      iVar5 = param_2->ArrayNum;
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 0x10;
    } while ((int)uVar7 < iVar5);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// GatherSubsystemInformation @ 14721dc60

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassProcessorDependencySolver::GatherSubsystemInformation
          (FMassProcessorDependencySolver *this,FTypeManager *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  TSet<UE::Mass::FTypeHandle,DefaultKeyFuncs<UE::Mass::FTypeHandle,0>,FDefaultSetAllocator> *pTVar5;
  bool bVar6;
  int iVar7;
  FTypeInfo *pFVar8;
  UStruct *pUVar9;
  UClass *pUVar10;
  UStruct *pUVar11;
  int *piVar12;
  TVariant<UE::Mass::FEmptyTypeTraits,UE::Mass::FSubsystemTypeTraits,UE::Mass::FSharedFragmentTypeTraits,UE::Mass::Relations::FRelationTypeTraits>
  *pTVar13;
  uint *puVar14;
  FWeakObjectPtr local_res18;
  FObjectKey local_res20;
  UStruct *local_98 [2];
  TSet<UE::Mass::FTypeHandle,DefaultKeyFuncs<UE::Mass::FTypeHandle,0>,FDefaultSetAllocator>
  *local_88;
  int iStack_80;
  uint uStack_7c;
  undefined1 *local_78;
  undefined4 uStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  TSet<UE::Mass::FTypeHandle,DefaultKeyFuncs<UE::Mass::FTypeHandle,0>,FDefaultSetAllocator>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  if (*(int *)&(param_1->TypeDataMap).field_0x8 != *(int *)&(param_1->TypeDataMap).field_0x34) {
    iStack_80 = 0;
    local_88 = &param_1->SubsystemTypes;
    iVar7 = *(int *)&(param_1->SubsystemTypes).Elements.field_0x28;
    local_78 = &(param_1->SubsystemTypes).Elements.field_0x10;
    local_68 = 0;
    uStack_7c = 1;
    iStack_6c = 0;
    if (iVar7 != 0) {
      puVar14 = *(uint **)&(param_1->SubsystemTypes).Elements.field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)local_78;
      }
      uVar2 = *puVar14;
      while (uVar2 == 0) {
        iStack_80 = iStack_80 + 1;
        local_68 = local_68 + 0x20;
        iStack_6c = iVar7;
        if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_80) goto LAB_14721dd0c;
        uVar2 = puVar14[iStack_80];
      }
      uStack_7c = ~(uVar2 - 1) & uVar2;
      uVar1 = (ulonglong)uStack_7c * 2 + 1;
      lVar3 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iStack_6c = (int)lVar3 + -1 + local_68;
      if (iVar7 < iStack_6c) {
        iStack_6c = iVar7;
      }
    }
LAB_14721dd0c:
    uStack_70 = 0xffffffff;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50._padding_ = CONCAT44(uStack_7c,iStack_80);
    TStack_50._28_4_ = iStack_6c;
    TStack_50.BaseBitIndex = local_68;
    iStack_64 = iStack_6c;
    local_58 = local_88;
    TStack_50.CurrentBitIndex = iStack_6c;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_78;
    if (iStack_6c < *(int *)&(param_1->SubsystemTypes).Elements.field_0x28) {
      do {
        iVar7 = TStack_50.CurrentBitIndex;
        pTVar5 = local_58;
        local_res20 = *(FObjectKey *)
                       (*(longlong *)&local_58->Elements +
                       (longlong)TStack_50.CurrentBitIndex * 0x10);
        pFVar8 = TMapBase<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,0>_>
                 ::Find((TMapBase<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,0>_>
                         *)&param_1->TypeDataMap,(FTypeHandle *)&local_res20);
        if (pFVar8 != (FTypeInfo *)0x0) {
          pTVar13 = &pFVar8->Traits;
          if ((pFVar8->Traits).TypeIndex == '\x01') {
            if (pTVar13 ==
                (TVariant<UE::Mass::FEmptyTypeTraits,UE::Mass::FSubsystemTypeTraits,UE::Mass::FSharedFragmentTypeTraits,UE::Mass::Relations::FRelationTypeTraits>
                 *)0x0) goto LAB_14721ddb0;
          }
          else {
            pTVar13 = (TVariant<UE::Mass::FEmptyTypeTraits,UE::Mass::FSubsystemTypeTraits,UE::Mass::FSharedFragmentTypeTraits,UE::Mass::Relations::FRelationTypeTraits>
                       *)0x0;
LAB_14721ddb0:
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("SubsystemTraits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessorDependencySolver.cpp"
                               ,0x3f8,L"");
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          if (pTVar13->field_0x1 != '\0') {
            piVar12 = (int *)((longlong)iVar7 * 0x10 + *(longlong *)&pTVar5->Elements);
            local_res18.ObjectIndex = *piVar12;
            local_res18.ObjectSerialNumber = piVar12[1];
            pUVar9 = (UStruct *)FWeakObjectPtr::Get(&local_res18);
            if (pUVar9 == (UStruct *)0x0) {
LAB_14721de30:
              pUVar9 = (UStruct *)0x0;
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("SubsystemClass",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessorDependencySolver.cpp"
                                 ,0x3fc,L"");
              if (bVar6) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            else {
              pUVar10 = Z_Construct_UClass_UClass_NoRegister();
              iVar7 = (int)pUVar10->_padding_;
              if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar7) ||
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar7 * 8) !=
                  &pUVar10->_padding_)) goto LAB_14721de30;
            }
            pUVar11 = TTypeBitSetBase<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>,USubsystem,UClass,FStructTypeBitSet::FBitSetContainer,1>
                      ::GetBaseUStruct();
            if (pUVar11 == (UStruct *)0x0) {
LAB_14721de86:
              local_98[0] = pUVar9;
              bVar6 = `TTypeBitSetBase<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>,USubsystem,UClass,FStructTypeBitSet::FBitSetContainer,1>
                      ::Add'::__l6::<lambda_1>::operator()(local_98);
              if (!bVar6) goto LAB_14721deb4;
            }
            else {
              iVar7 = (int)pUVar11->_padding_;
              if (((int)pUVar9->_padding_ < iVar7) ||
                 ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar7 * 8) !=
                  &pUVar11->_padding_)) {
                bVar6 = false;
              }
              else {
                bVar6 = true;
              }
              if (!bVar6) goto LAB_14721de86;
            }
            iVar7 = FStructTracker::FindOrAddStructTypeIndex
                              (&FMassExternalSubsystemBitSetStructTrackerWrapper::StructTracker,
                               pUVar9);
            FStructTypeBitSet::FBitSetContainer::AddAtIndex
                      ((FBitSetContainer *)&this->MultiThreadedSystemsBitSet,iVar7);
          }
        }
LAB_14721deb4:
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return;
}

// IsResultUpToDate @ 147232ca0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __cdecl
FMassProcessorDependencySolver::IsResultUpToDate
          (FResult *param_1,TSharedPtr<FMassEntityManager,1> *param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  FMassEntityQuery *this;
  ulonglong uVar6;
  undefined8 *puVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  if ((((param_1->PrunedProcessors).ArrayNum != 0) && (param_2->Object != (FMassEntityManager *)0x0)
      ) && (param_1->ArchetypeDataVersion != param_2->Object->ArchetypeDataVersion)) {
    pFVar8 = (param_1->PrunedProcessors).AllocatorInstance.Data;
    uVar3 = (param_1->PrunedProcessors).ArrayNum;
    uVar6 = (ulonglong)(int)uVar3;
    pFVar1 = pFVar8 + uVar6 * 8;
    while( true ) {
      if ((param_1->PrunedProcessors).ArrayNum != (int)uVar6) {
        `TCheckedPointerIterator<TObjectPtr<UMassProcessor>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar8 == pFVar1) break;
      lVar5 = *(longlong *)pFVar8;
      if (lVar5 != 0) {
        puVar7 = *(undefined8 **)(lVar5 + 0xc0);
        iVar4 = *(int *)(lVar5 + 200);
        puVar2 = puVar7 + iVar4;
        while( true ) {
          if (*(int *)(lVar5 + 200) != iVar4) {
            `TCheckedPointerIterator<FMassEntityQuery_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          if (puVar7 == puVar2) break;
          this = (FMassEntityQuery *)*puVar7;
          FMassEntityQuery::CacheArchetypes(this);
          if (0 < (this->ValidArchetypes).ArrayNum) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((param_2->SharedReferenceCount).ReferenceController);
            return false;
          }
          puVar7 = puVar7 + 1;
        }
      }
      uVar6 = (ulonglong)uVar3;
      pFVar8 = pFVar8 + 8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->SharedReferenceCount).ReferenceController);
    return true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return true;
}

// LogNode @ 1472348b0

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMassProcessorDependencySolver::LogNode
          (FMassProcessorDependencySolver *this,FNode *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TArrayView<FName_const_,int> *pTVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  TArrayView<FName_const_,int> local_108;
  TArrayView<FName_const_,int> local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  TArrayView<FName_const_,int> local_b8;
  TArrayView<FName_const_,int> local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  TArrayView<FName_const_,int> local_68;
  TArrayView<FName_const_,int> local_58;
  TArrayView<FName_const_,int> local_48;
  TArrayView<FName_const_,int> local_38;
  
  if (param_1->Processor == (UMassProcessor *)0x0) {
    if (4 < (byte)LogMassDependencies._0_1_) {
      pTVar7 = TArrayView<FName_const_,int>::
               TArrayView<FName_const_,int><TArray<FName,TSizedDefaultAllocator<32>_>_const_&,TArray<FName,TSizedDefaultAllocator<32>_>_>
                         (&local_68,&param_1->ExecuteAfter);
      local_108.DataPtr = pTVar7->DataPtr;
      local_108.ArrayNum = pTVar7->ArrayNum;
      local_108._12_4_ = *(undefined4 *)&pTVar7->field_0xc;
      UE::Mass::Private::NameViewToString(&local_c8,&local_108);
      pTVar7 = TArrayView<FName_const_,int>::
               TArrayView<FName_const_,int><TArray<FName,TSizedDefaultAllocator<32>_>_const_&,TArray<FName,TSizedDefaultAllocator<32>_>_>
                         (&local_58,&param_1->ExecuteBefore);
      local_f8.DataPtr = pTVar7->DataPtr;
      local_f8.ArrayNum = pTVar7->ArrayNum;
      local_f8._12_4_ = *(undefined4 *)&pTVar7->field_0xc;
      UE::Mass::Private::NameViewToString(&local_d8,&local_f8);
      ::FName::ToString(&param_1->Name,&local_e8);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMassDependencies);
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
    }
    pFVar8 = (param_1->SubNodeIndices).AllocatorInstance.Data;
    iVar2 = (param_1->SubNodeIndices).ArrayNum;
    pFVar1 = pFVar8 + (longlong)iVar2 * 4;
    while( true ) {
      if ((param_1->SubNodeIndices).ArrayNum != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar8 == pFVar1) break;
      uVar3 = *(uint *)pFVar8;
      uVar6 = 0;
      if ((int)uVar3 < (this->AllNodes).ArrayNum) {
        uVar6 = ~uVar3 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      LogNode(this,(FNode *)((this->AllNodes).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x208)
              ,param_2 + 4);
      pFVar8 = pFVar8 + 4;
    }
  }
  else if (4 < (byte)LogMassDependencies._0_1_) {
    pTVar7 = TArrayView<FName_const_,int>::
             TArrayView<FName_const_,int><TArray<FName,TSizedDefaultAllocator<32>_>_const_&,TArray<FName,TSizedDefaultAllocator<32>_>_>
                       (&local_48,&(param_1->Processor->ExecutionOrder).ExecuteAfter);
    local_b8.DataPtr = pTVar7->DataPtr;
    local_b8.ArrayNum = pTVar7->ArrayNum;
    local_b8._12_4_ = *(undefined4 *)&pTVar7->field_0xc;
    UE::Mass::Private::NameViewToString(&local_78,&local_b8);
    pTVar7 = TArrayView<FName_const_,int>::
             TArrayView<FName_const_,int><TArray<FName,TSizedDefaultAllocator<32>_>_const_&,TArray<FName,TSizedDefaultAllocator<32>_>_>
                       (&local_38,&(param_1->Processor->ExecutionOrder).ExecuteBefore);
    local_a8.DataPtr = pTVar7->DataPtr;
    local_a8.ArrayNum = pTVar7->ArrayNum;
    local_a8._12_4_ = *(undefined4 *)&pTVar7->field_0xc;
    UE::Mass::Private::NameViewToString(&local_88,&local_a8);
    ::FName::ToString(&param_1->Name,&local_98);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMassDependencies);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// PerformSolverStep @ 14723c0e0

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMassProcessorDependencySolver::PerformSolverStep
          (FMassProcessorDependencySolver *this,FResourceUsage *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  uint *puVar3;
  code *pcVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  FNode *this_00;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  longlong lVar18;
  undefined1 local_res8 [8];
  FResourceUsage *local_res10;
  TArray<int,TSizedDefaultAllocator<32>_> *local_res18;
  TArray<int,TSizedDefaultAllocator<32>_> *local_res20;
  undefined1 local_78 [4];
  uint local_74;
  int local_70;
  longlong local_68;
  FString local_60 [2];
  
  uVar17 = 0xffffffff;
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  if ((param_2->ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  uVar12 = *(uint *)(param_2->AllocatorInstance).Data;
  uVar14 = 0;
  if ((int)uVar12 < (this->AllNodes).ArrayNum) {
    uVar14 = ~uVar12 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  uVar14 = 0;
  iVar10 = param_2->ArrayNum;
  local_70 = *(int *)((this->AllNodes).AllocatorInstance.Data +
                     (longlong)(int)uVar12 * 0x208 + 0x1e0);
  if (iVar10 < 1) {
    return false;
  }
  local_68 = 0;
LAB_14723c1d0:
  lVar18 = local_68;
  uVar12 = 0;
  if ((int)uVar14 < iVar10) {
    uVar12 = ~uVar14 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  uVar12 = *(uint *)((param_2->AllocatorInstance).Data + lVar18);
  uVar15 = ~uVar12 >> 0x1f;
  uVar9 = 0;
  if ((int)uVar12 < (this->AllNodes).ArrayNum) {
    uVar9 = uVar15;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  lVar18 = (longlong)(int)uVar12 * 0x208;
  uVar9 = uVar17;
  if (*(int *)((this->AllNodes).AllocatorInstance.Data + lVar18 + 0x28) == 0) {
    if (this->bSingleThreadTarget == false) {
      uVar9 = 0;
      if ((int)uVar12 < (this->AllNodes).ArrayNum) {
        uVar9 = uVar15;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      pFVar1 = (this->AllNodes).AllocatorInstance.Data;
      uVar9 = 0;
      if ((int)uVar12 < (this->AllNodes).ArrayNum) {
        uVar9 = uVar15;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      param_1 = local_res10;
      bVar7 = FResourceUsage::CanAccessRequirements
                        (local_res10,
                         (FMassExecutionRequirements *)
                         ((this->AllNodes).AllocatorInstance.Data + lVar18 + 0x50),
                         (TArray<FMassArchetypeHandle,TSizedDefaultAllocator<32>_> *)
                         (pFVar1 + lVar18 + 0x1f8));
      if (!bVar7) {
        uVar9 = uVar12;
        if ((uVar17 != 0xffffffff) &&
           (uVar9 = uVar17,
           UE::Mass::Private::bPickHigherPriorityNodesRegardlessOfRequirements != false)) {
          uVar9 = 0;
          if ((int)uVar12 < (this->AllNodes).ArrayNum) {
            uVar9 = uVar15;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          uVar9 = uVar17;
          if (local_70 <= *(int *)((this->AllNodes).AllocatorInstance.Data + lVar18 + 0x1e0))
          goto LAB_14723c39b;
          if ((UE::Mass::Private::bProcessorExecutionPriorityEnabled != true) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("UE::Mass::Private::bProcessorExecutionPriorityEnabled == true",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessorDependencySolver.cpp"
                                 ,0x1b9,
                                 L"We never expect to hit this case when execution priorities are disabled - all nodes should have the same priority."
                                ), bVar7)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          uVar12 = 0xffffffff;
          goto LAB_14723c41f;
        }
        goto LAB_14723c39b;
      }
    }
    if (uVar12 != 0xffffffff) goto LAB_14723c41f;
    goto LAB_14723c3c3;
  }
LAB_14723c39b:
  uVar17 = uVar9;
  uVar14 = uVar14 + 1;
  local_68 = local_68 + 4;
  iVar10 = local_res18->ArrayNum;
  param_2 = local_res18;
  if (iVar10 <= (int)uVar14) goto code_r0x00014723c3be;
  goto LAB_14723c1d0;
code_r0x00014723c3be:
  uVar12 = 0xffffffff;
LAB_14723c3c3:
  if (uVar17 == 0xffffffff) {
    return false;
  }
LAB_14723c41f:
  if (uVar12 != 0xffffffff) {
    uVar17 = uVar12;
  }
  uVar14 = 0;
  if ((int)uVar17 < (this->AllNodes).ArrayNum) {
    uVar14 = ~uVar17 >> 0x1f;
  }
  local_74 = uVar17;
  if ((uVar14 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  this_00 = (FNode *)((this->AllNodes).AllocatorInstance.Data + (longlong)(int)uVar17 * 0x208);
  if ((5 < (byte)LogMassDependencies._0_1_) && (uVar12 == 0xffffffff)) {
    ::FName::ToString((FName *)this_00,local_60);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMassDependencies);
    if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
    }
  }
  uVar17 = local_74;
  FResourceUsage::
  HandleElementType<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
            (param_1,&param_1->FragmentsAccess,&(this_00->Requirements).Fragments,this_00,local_74);
  FResourceUsage::
  HandleElementType<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
            (param_1,&param_1->ChunkFragmentsAccess,&(this_00->Requirements).ChunkFragments,this_00,
             uVar17);
  FResourceUsage::
  HandleElementType<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
            (param_1,&param_1->SharedFragmentsAccess,&(this_00->Requirements).SharedFragments,
             this_00,uVar17);
  FResourceUsage::
  HandleElementType<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>_>
            (param_1,&param_1->RequiredSubsystemsAccess,&(this_00->Requirements).RequiredSubsystems,
             this_00,uVar17);
  FMassExecutionRequirements::Append(&param_1->Requirements,&this_00->Requirements);
  pTVar5 = local_res18;
  pFVar1 = (local_res18->AllocatorInstance).Data;
  pFVar16 = pFVar1;
  do {
    if (pFVar16 == pFVar1 + (longlong)local_res18->ArrayNum * 4) {
LAB_14723c5c4:
      pTVar6 = local_res20;
      pFVar1 = (local_res20->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)&local_74) &&
          ((FScriptContainerElement *)&local_74 < pFVar1 + (longlong)local_res20->ArrayMax * 4)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      iVar10 = pTVar6->ArrayNum;
      if (iVar10 == pTVar6->ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
      }
      pTVar6->ArrayNum = iVar10 + 1;
      *(uint *)((pTVar6->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_74;
      pFVar16 = (this_00->OriginalDependencies).AllocatorInstance.Data;
      iVar10 = (this_00->OriginalDependencies).ArrayNum;
      pFVar1 = pFVar16 + (longlong)iVar10 * 4;
      while( true ) {
        if ((this_00->OriginalDependencies).ArrayNum != iVar10) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
          ;
        }
        if (pFVar16 == pFVar1) break;
        uVar17 = *(uint *)pFVar16;
        uVar12 = 0;
        if ((int)uVar17 < (this->AllNodes).ArrayNum) {
          uVar12 = ~uVar17 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        iVar11 = *(int *)((this->AllNodes).AllocatorInstance.Data +
                         (longlong)(int)uVar17 * 0x208 + 0x1e4);
        if (iVar11 < this_00->SequencePositionIndex) {
          iVar11 = this_00->SequencePositionIndex;
        }
        pFVar16 = pFVar16 + 4;
        this_00->SequencePositionIndex = iVar11;
      }
      this_00->SequencePositionIndex = this_00->SequencePositionIndex + 1;
      pFVar16 = (pTVar5->AllocatorInstance).Data;
      iVar10 = pTVar5->ArrayNum;
      pFVar1 = pFVar16 + (longlong)iVar10 * 4;
      do {
        while( true ) {
          if (pTVar5->ArrayNum != iVar10) {
            local_78[0] = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_78)
            ;
          }
          if (pFVar16 == pFVar1) {
            return true;
          }
          uVar17 = *(uint *)pFVar16;
          uVar12 = 0;
          if ((int)uVar17 < (this->AllNodes).ArrayNum) {
            uVar12 = ~uVar17 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          pFVar2 = (this->AllNodes).AllocatorInstance.Data;
          puVar3 = *(uint **)(pFVar2 + (longlong)(int)uVar17 * 0x208 + 0x20);
          puVar13 = puVar3;
          if (puVar3 != puVar3 + *(int *)(pFVar2 + (longlong)(int)uVar17 * 0x208 + 0x28)) break;
LAB_14723c85c:
          pFVar16 = pFVar16 + 4;
        }
        do {
          if (*puVar13 == local_74) {
            uVar12 = (uint)((longlong)puVar13 - (longlong)puVar3 >> 2);
            if (uVar12 != 0xffffffff) {
              uVar14 = 0;
              if ((int)(uVar12 + 1) <= *(int *)(pFVar2 + (longlong)(int)uVar17 * 0x208 + 0x28)) {
                uVar14 = ~uVar12 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x458,
                                     L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                    ), bVar7)) {
                pcVar4 = (code *)swi(3);
                uVar8 = (*pcVar4)();
                return (bool)uVar8;
              }
              iVar11 = *(int *)(pFVar2 + (longlong)(int)uVar17 * 0x208 + 0x28) + ~uVar12;
              if (1 < iVar11) {
                iVar11 = 1;
              }
              if (iVar11 != 0) {
                memmove((void *)(*(longlong *)(pFVar2 + (longlong)(int)uVar17 * 0x208 + 0x20) +
                                (longlong)(int)uVar12 * 4),
                        (void *)(*(longlong *)(pFVar2 + (longlong)(int)uVar17 * 0x208 + 0x20) +
                                (longlong)
                                (*(int *)(pFVar2 + (longlong)(int)uVar17 * 0x208 + 0x28) - iVar11) *
                                4),(longlong)iVar11 << 2);
              }
              *(int *)(pFVar2 + (longlong)(int)uVar17 * 0x208 + 0x28) =
                   *(int *)(pFVar2 + (longlong)(int)uVar17 * 0x208 + 0x28) + -1;
            }
            goto LAB_14723c85c;
          }
          puVar13 = puVar13 + 1;
        } while (puVar13 != puVar3 + *(int *)(pFVar2 + (longlong)(int)uVar17 * 0x208 + 0x28));
        pFVar16 = pFVar16 + 4;
      } while( true );
    }
    if (*(uint *)pFVar16 == local_74) {
      iVar10 = (int)((longlong)pFVar16 - (longlong)pFVar1 >> 2);
      if (iVar10 != -1) {
        memmove(pFVar1 + (longlong)iVar10 * 4,pFVar1 + (longlong)iVar10 * 4 + 4,
                (longlong)((local_res18->ArrayNum - iVar10) + -1) << 2);
        pTVar5->ArrayNum = pTVar5->ArrayNum + -1;
      }
      goto LAB_14723c5c4;
    }
    pFVar16 = pFVar16 + 4;
  } while( true );
}

// ResolveDependencies @ 1472493d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMassProcessorDependencySolver::ResolveDependencies
          (FMassProcessorDependencySolver *this,
          TArray<FMassProcessorOrderInfo,TSizedDefaultAllocator<32>_> *param_1,
          TSharedPtr<FMassEntityManager,1> *param_2,FResult *param_3)

{
  int *piVar1;
  TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_> *pTVar2;
  UMassProcessor **ppUVar3;
  FNode *pFVar4;
  FMassEntityManager *pFVar5;
  longlong *plVar6;
  FMassEntityQuery *this_00;
  code *pcVar7;
  TSharedPtr<FMassEntityManager,1> *pTVar8;
  FResult *pFVar9;
  undefined8 *puVar10;
  TArray<FMassProcessorOrderInfo,TSizedDefaultAllocator<32>_> *pTVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  FName *pFVar17;
  FMassEntityManager *pFVar18;
  TSharedPtr<FMassEntityManager,1> *pTVar19;
  FMassArchetypeCompositionDescriptor *pFVar20;
  TArray<FMassProcessorDependencySolver::FNode,TSizedDefaultAllocator<32>_> *pTVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  int iVar24;
  UMassProcessor **ppUVar25;
  FScriptContainerElement *pFVar26;
  FName *pFVar27;
  FScriptContainerElement *pFVar28;
  undefined8 *puVar29;
  FScriptContainerElement *pFVar30;
  FMassProcessorDependencySolver *pFVar31;
  bool bVar32;
  undefined1 auStackY_588 [32];
  undefined1 local_537;
  undefined1 local_536;
  undefined1 local_535;
  char local_534;
  undefined1 local_533;
  undefined1 local_532 [2];
  int local_530;
  UObject *local_528;
  FMassProcessorDependencySolver *local_520;
  TSharedPtr<FMassEntityManager,1> *local_518;
  undefined4 local_510 [2];
  ulonglong local_508;
  uint local_500;
  FResult *local_4f8;
  undefined8 local_4f0;
  FMassArchetypeCreationParams local_4e8;
  TRawPtrProxy<FMassEntityManager> local_4d8;
  FName local_4d0;
  undefined8 *local_4c8;
  FName local_4c0;
  FScriptContainerElement *local_4b8;
  TArray<FMassProcessorOrderInfo,TSizedDefaultAllocator<32>_> *local_4b0;
  undefined1 local_4a8 [24];
  FString local_490;
  undefined8 *local_480;
  undefined4 *local_478;
  FLogScopedCategoryAndVerbosityOverride local_470;
  FName local_460;
  TSharedPtr<FMassEntityManager,1> local_458;
  FMassArchetypeHandle local_448;
  FString local_438;
  FNode local_428;
  undefined1 local_218 [48];
  void *local_1e8;
  void *local_1c8;
  void *local_1a8;
  void *local_188;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_588;
  bVar32 = -1 < CpuChannel->Enabled;
  local_520 = this;
  local_518 = param_2;
  local_4f8 = param_3;
  local_4b0 = param_1;
  if (bVar32) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId850,"Mass ResolveDependencies",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessorDependencySolver.cpp"
               ,0x352);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId850);
  }
  if ((this->Processors).ArrayNum != 0) {
    pFVar17 = ::FName::FName(&local_460,L"LogMass");
    FLogScopedCategoryAndVerbosityOverride::FLogScopedCategoryAndVerbosityOverride
              (&local_470,*pFVar17,Log);
    iVar24 = 0;
    if (param_3 != (FResult *)0x0) {
      iVar13 = (param_3->DependencyGraphFileName).Data.ArrayNum;
      iVar16 = iVar13 + -1;
      if (iVar13 == 0) {
        iVar16 = 0;
      }
      ::FString::AssignRange
                (&this->DependencyGraphFileName,
                 (wchar_t *)(param_3->DependencyGraphFileName).Data.AllocatorInstance.Data,iVar16);
    }
    if (4 < (byte)LogMassDependencies._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMassDependencies);
    }
    piVar1 = &(this->AllNodes).ArrayMax;
    pFVar4 = (FNode *)(this->AllNodes).AllocatorInstance.Data;
    iVar13 = (this->AllNodes).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<FMassProcessorDependencySolver::FNode,int>(pFVar4,iVar13);
      (this->AllNodes).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x208,8,0,&(this->AllNodes).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FMassProcessorDependencySolver::FNode,int>(pFVar4,iVar13);
      (this->AllNodes).ArrayNum = 0;
    }
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::Reset
              ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                *)&this->NodeIndexMap);
    local_428.Name.ComparisonIndex.Value = 0;
    local_428.Name.Number = 0;
    local_428.Processor = (UMassProcessor *)0x0;
    local_428.OriginalDependencies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_428.OriginalDependencies.ArrayNum = 0;
    local_428.OriginalDependencies.ArrayMax = 0;
    local_428.TransientDependencies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_428.TransientDependencies.ArrayNum = 0;
    local_428.TransientDependencies.ArrayMax = 0;
    local_428.ExecuteBefore.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_428.ExecuteBefore.ArrayNum = 0;
    local_428.ExecuteBefore.ArrayMax = 0;
    local_428.ExecuteAfter.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_428.ExecuteAfter.ArrayNum = 0;
    local_428.ExecuteAfter.ArrayMax = 0;
    FMassExecutionRequirements::FMassExecutionRequirements(&local_428.Requirements);
    pFVar4 = (FNode *)(this->AllNodes).AllocatorInstance.Data;
    local_428.NodeIndex = 0;
    local_428.TotalWaitingNodes = 0;
    local_428.MaxExecutionPriority = 0;
    local_428.SequencePositionIndex = 0;
    local_428.SubNodeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_428.SubNodeIndices.ArrayNum = 0;
    local_428.SubNodeIndices.ArrayMax = 0;
    local_428.ValidArchetypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_428.ValidArchetypes.ArrayNum = 0;
    local_428.ValidArchetypes.ArrayMax = 0;
    if (((pFVar4 <= &local_428) && (&local_428 < pFVar4 + *piVar1)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar13 = (this->AllNodes).ArrayNum;
    if (iVar13 == *piVar1) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x208,8,&(this->AllNodes).AllocatorInstance,piVar1);
    }
    (this->AllNodes).ArrayNum = iVar13 + 1;
    FNode::FNode((FNode *)((this->AllNodes).AllocatorInstance.Data + (longlong)iVar13 * 0x208),
                 &local_428);
    DestructItems<FMassArchetypeHandle,int>
              ((FMassArchetypeHandle *)local_428.ValidArchetypes.AllocatorInstance.Data,
               local_428.ValidArchetypes.ArrayNum);
    if (local_428.ValidArchetypes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_428.ValidArchetypes.AllocatorInstance.Data);
    }
    if (local_428.SubNodeIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_428.SubNodeIndices.AllocatorInstance.Data);
    }
    FMassExecutionRequirements::~FMassExecutionRequirements(&local_428.Requirements);
    if (local_428.ExecuteAfter.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_428.ExecuteAfter.AllocatorInstance.Data);
    }
    if (local_428.ExecuteBefore.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_428.ExecuteBefore.AllocatorInstance.Data);
    }
    if (local_428.TransientDependencies.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_428.TransientDependencies.AllocatorInstance.Data);
    }
    if (local_428.OriginalDependencies.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_428.OriginalDependencies.AllocatorInstance.Data);
    }
    local_480 = &local_4f0;
    local_510[0] = 0;
    local_478 = local_510;
    local_4f0 = 0;
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FName_&&,int_&&>_>
              ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                *)&this->NodeIndexMap,(TPairInitializer<FName_&&,int_&&> *)local_4a8,
               (bool *)&local_480);
    pTVar8 = local_518;
    pFVar5 = local_518->Object;
    if (pFVar5 == (FMassEntityManager *)0x0) {
      pFVar18 = ::operator_new(0x7d8);
      if (pFVar18 == (FMassEntityManager *)0x0) {
        local_4d8.Object = (FMassEntityManager *)0x0;
      }
      else {
        local_4d8.Object = FMassEntityManager::FMassEntityManager(pFVar18,(UObject *)0x0);
        if (((local_4d8.Object != (FMassEntityManager *)0x0) && ((local_4d8.Object)->_padding_ != 0)
            ) && (((local_4d8.Object)->_padding_ != 0 &&
                  ((0 < *(int *)((local_4d8.Object)->_padding_ + 8) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("!InObject || !InObject->DoesSharedInstanceExist()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x7a5,L"Trying to share an already-shared object"), bVar12)
                   ))))) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      pTVar19 = TSharedPtr<FMassEntityManager,1>::
                TSharedPtr<FMassEntityManager,1><FMassEntityManager>(&local_458,&local_4d8);
      if (pTVar8 != pTVar19) {
        pTVar8->Object = pTVar19->Object;
        pTVar19->Object = (FMassEntityManager *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&pTVar8->SharedReferenceCount,&pTVar19->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_458.SharedReferenceCount.ReferenceController);
    }
    if ((pTVar8->Object == (FMassEntityManager *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    GatherSubsystemInformation(this,(pTVar8->Object->TypeManager).Object);
    ppUVar25 = (this->Processors).DataPtr;
    ppUVar3 = ppUVar25 + (this->Processors).ArrayNum;
    pFVar31 = this;
    if (ppUVar25 != ppUVar3) {
      do {
        if (*ppUVar25 == (UMassProcessor *)0x0) {
          if (2 < (byte)LogMassDependencies._0_1_) {
            local_178._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_178,"FMassProcessorDependencySolver::ResolveDependencies",0x33,Yes);
            UE::Logging::Private::BasicLog<3>
                      (&::LOG_Static,(FLogCategoryBase *)&LogMassDependencies);
            if ((void *)local_178._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_178._padding_);
            }
          }
        }
        else {
          uVar14 = CreateNodes(pFVar31,*ppUVar25);
          pTVar8 = local_518;
          if (pFVar5 == (FMassEntityManager *)0x0) {
            if ((local_518->Object == (FMassEntityManager *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar18 = pTVar8->Object;
            local_4e8.ChunkMemorySize = 0;
            local_4e8.DebugName.ComparisonIndex.Value = 0;
            local_4e8.DebugName.Number = 0;
            local_4e8.DebugColor.field0_0x0 = (FColor_u_0)0x0;
            uVar15 = 0;
            if ((int)uVar14 < (this->AllNodes).ArrayNum) {
              uVar15 = ~uVar14 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar20 = FMassExecutionRequirements::AsCompositionDescriptor
                                ((FMassExecutionRequirements *)
                                 ((this->AllNodes).AllocatorInstance.Data +
                                 (longlong)(int)uVar14 * 0x208 + 0x50),
                                 (FMassArchetypeCompositionDescriptor *)local_218);
            FMassEntityManager::CreateArchetype(pFVar18,&local_448,pFVar20,&local_4e8);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_448.DataPtr.SharedReferenceCount.ReferenceController);
            if (local_188 != (void *)0x0) {
              FMemory::Free(local_188);
            }
            if (local_1a8 != (void *)0x0) {
              FMemory::Free(local_1a8);
            }
            if (local_1c8 != (void *)0x0) {
              FMemory::Free(local_1c8);
            }
            if (local_1e8 != (void *)0x0) {
              FMemory::Free(local_1e8);
            }
            pFVar31 = local_520;
            if ((void *)local_218._16_8_ != (void *)0x0) {
              FMemory::Free((void *)local_218._16_8_);
              pFVar31 = local_520;
            }
          }
        }
        ppUVar25 = ppUVar25 + 1;
      } while (ppUVar25 != ppUVar3);
    }
    if (5 < (byte)LogMassDependencies._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMassDependencies);
    }
    local_500 = (pFVar31->AllNodes).ArrayNum;
    uVar23 = (ulonglong)(int)local_500;
    pTVar21 = &pFVar31->AllNodes;
    local_530 = 0;
    pFVar30 = (pTVar21->AllocatorInstance).Data;
    local_4b8 = pFVar30 + uVar23 * 0x208;
    while( true ) {
      pFVar28 = local_4b8;
      if (pTVar21->ArrayNum != (int)uVar23) {
        local_537 = 0;
        `TCheckedPointerIterator<FMassProcessorDependencySolver::FNode,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_537);
      }
      if (pFVar30 == pFVar28) break;
      plVar6 = *(longlong **)(pFVar30 + 8);
      if (plVar6 != (longlong *)0x0) {
        local_534 = (**(code **)(*plVar6 + 0x2c8))(plVar6,pFVar31->bGameRuntime);
        if ((local_534 != '\0') || (*(int *)(*(longlong *)(pFVar30 + 8) + 200) != 0)) {
          local_508 = *(ulonglong *)(pFVar30 + 8);
          if ((2 < (byte)LogMass._0_1_) && (*(int *)(local_508 + 200) == 0)) {
            local_4d0 = *(FName *)(local_508 + 0x18);
            ::FName::ToString(&local_4d0,(FString *)(local_4a8 + 8));
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
            if ((int *)local_4a8._8_8_ != (int *)0x0) {
              FMemory::Free((void *)local_4a8._8_8_);
            }
          }
          uVar23 = local_508;
          uVar22 = (ulonglong)*(int *)(local_508 + 200);
          puVar29 = *(undefined8 **)(local_508 + 0xc0);
          local_508 = CONCAT44(local_508._4_4_,*(int *)(local_508 + 200));
          local_4c8 = puVar29 + uVar22;
          while( true ) {
            puVar10 = local_4c8;
            if (*(int *)(uVar23 + 200) != (int)uVar22) {
              local_536 = 0;
              `TCheckedPointerIterator<FMassEntityQuery_*,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_536);
            }
            pFVar31 = local_520;
            iVar24 = local_530;
            if (puVar29 == puVar10) break;
            this_00 = (FMassEntityQuery *)*puVar29;
            FMassEntityQuery::CacheArchetypes(this_00);
            iVar24 = (this_00->ValidArchetypes).ArrayNum;
            pFVar28 = (this_00->ValidArchetypes).AllocatorInstance.Data;
            pFVar26 = pFVar28 + (longlong)iVar24 * 0x10;
            while( true ) {
              if ((this_00->ValidArchetypes).ArrayNum != iVar24) {
                local_535 = 0;
                `TCheckedPointerIterator<FMassArchetypeHandle_const_,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_535);
              }
              if (pFVar28 == pFVar26) break;
              TArray<FMassArchetypeHandle,TSizedDefaultAllocator<32>_>::
              AddUniqueImpl<FMassArchetypeHandle_const_&>
                        ((TArray<FMassArchetypeHandle,TSizedDefaultAllocator<32>_> *)
                         (pFVar30 + 0x1f8),(FMassArchetypeHandle *)pFVar28);
              pFVar28 = pFVar28 + 0x10;
            }
            uVar22 = local_508 & 0xffffffff;
            puVar29 = puVar29 + 1;
          }
        }
        if ((*(int *)(pFVar30 + 0x200) == 0) && (local_534 != '\0')) {
          if (5 < (byte)LogMassDependencies._0_1_) {
            local_4c0 = *(FName *)(*(longlong *)(pFVar30 + 8) + 0x18);
            ::FName::ToString(&local_4c0,&local_490);
            UE::Logging::Private::BasicLog<6>
                      (&::LOG_Static,(FLogCategoryBase *)&LogMassDependencies);
            if (local_490.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_490.Data.AllocatorInstance.Data);
            }
          }
          pFVar9 = local_4f8;
          if (local_4f8 != (FResult *)0x0) {
            pTVar2 = &local_4f8->PrunedProcessors;
            local_528 = *(UObject **)(pFVar30 + 8);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_528 != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(local_528);
            }
            pFVar28 = (pTVar2->AllocatorInstance).Data;
            if (((pFVar28 <= (FScriptContainerElement *)&local_528) &&
                ((FScriptContainerElement *)&local_528 <
                 pFVar28 + (longlong)(pFVar9->PrunedProcessors).ArrayMax * 8)) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar13 = (pFVar9->PrunedProcessors).ArrayNum;
            piVar1 = &(pFVar9->PrunedProcessors).ArrayMax;
            if (iVar13 == *piVar1) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&pTVar2->AllocatorInstance,piVar1);
            }
            (pFVar9->PrunedProcessors).ArrayNum = iVar13 + 1;
            *(UObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 8) = local_528;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_528 != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(local_528);
            }
          }
          iVar24 = iVar24 + 1;
          *(undefined8 *)(pFVar30 + 8) = 0;
          local_530 = iVar24;
        }
      }
      pTVar21 = &pFVar31->AllNodes;
      uVar23 = (ulonglong)local_500;
      pFVar30 = pFVar30 + 0x208;
    }
    if (5 < (byte)LogMassDependencies._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMassDependencies);
    }
    if (((pFVar31->AllNodes).ArrayNum == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("AllNodes.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessorDependencySolver.cpp"
                            ,0x3b6,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (((pFVar31->AllNodes).ArrayNum < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    LogNode(pFVar31,(FNode *)(pFVar31->AllNodes).AllocatorInstance.Data,0);
    BuildDependencies(pFVar31);
    pTVar11 = local_4b0;
    Solve(pFVar31,local_4b0);
    if (5 < (byte)LogMassDependencies._0_1_) {
      UE::Logging::Private::BasicLog<6>
                ((FStaticBasicLogRecord *)&PTR_u_Dependency_orde_15157de70,
                 (FLogCategoryBase *)&LogMassDependencies);
    }
    iVar24 = pTVar11->ArrayNum;
    pFVar17 = (FName *)(pTVar11->AllocatorInstance).Data;
    pFVar27 = pFVar17 + (longlong)iVar24 * 6;
    while( true ) {
      if (pTVar11->ArrayNum != iVar24) {
        local_533 = 0;
        `TCheckedPointerIterator<FMassProcessorOrderInfo,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_533);
      }
      pFVar31 = local_520;
      if (pFVar17 == pFVar27) break;
      if (5 < (byte)LogMassDependencies._0_1_) {
        ::FName::ToString(pFVar17,&local_438);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMassDependencies);
        if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_438.Data.AllocatorInstance.Data);
        }
      }
      pFVar17 = pFVar17 + 6;
    }
    iVar24 = (local_520->AllNodes).ArrayNum;
    pFVar30 = (local_520->AllNodes).AllocatorInstance.Data;
    pFVar28 = pFVar30 + (longlong)iVar24 * 0x208;
    iVar13 = 0;
    while( true ) {
      if ((pFVar31->AllNodes).ArrayNum != iVar24) {
        local_532[0] = 0;
        `TCheckedPointerIterator<FMassProcessorDependencySolver::FNode,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_532);
      }
      if (pFVar30 == pFVar28) break;
      iVar16 = *(int *)(pFVar30 + 0x1e4);
      if (*(int *)(pFVar30 + 0x1e4) < iVar13) {
        iVar16 = iVar13;
      }
      pFVar30 = pFVar30 + 0x208;
      iVar13 = iVar16;
    }
    if (5 < (byte)LogMassDependencies._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMassDependencies);
    }
    pFVar9 = local_4f8;
    param_2 = local_518;
    if (local_4f8 != (FResult *)0x0) {
      local_4f8->MaxSequenceLength = iVar13;
      if ((local_518->Object == (FMassEntityManager *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar9->ArchetypeDataVersion = param_2->Object->ArchetypeDataVersion;
    }
    FLogScopedCategoryAndVerbosityOverride::~FLogScopedCategoryAndVerbosityOverride(&local_470);
  }
  if (bVar32) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// Solve @ 14724e3d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014724f49d) */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMassProcessorDependencySolver::Solve
          (FMassProcessorDependencySolver *this,
          TArray<FMassProcessorOrderInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  uint *puVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  FNode *pFVar4;
  int *piVar5;
  code *pcVar6;
  FMassProcessorDependencySolver *pFVar7;
  undefined8 uVar8;
  ForAnyElementType _Src_00;
  TArray<FMassProcessorOrderInfo,TSizedDefaultAllocator<32>_> *pTVar9;
  bool bVar10;
  int iVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  ulonglong uVar21;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  TArray<FMassProcessorDependencySolver::FNode,TSizedDefaultAllocator<32>_> *pTVar24;
  undefined1 auStackY_438 [32];
  FIdentityFunctor local_3e8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_3e0;
  uint local_3d0;
  undefined1 local_3cc [4];
  uint local_3c8;
  uint local_3c4;
  int local_3c0 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_3b8;
  TArray<FMassProcessorDependencySolver::FNode,TSizedDefaultAllocator<32>_> *local_3a8;
  TArray<int,TSizedDefaultAllocator<32>_> local_3a0;
  FScriptContainerElement *local_390;
  uint local_388;
  FMassProcessorDependencySolver *local_380;
  undefined8 local_378;
  undefined8 local_370;
  FScriptContainerElement local_368;
  ForAnyElementType local_360;
  undefined8 local_358;
  undefined4 local_350;
  TArray<FMassProcessorDependencySolver::FNode,TSizedDefaultAllocator<32>_> local_348;
  TArray<FMassProcessorDependencySolver::FNode,TSizedDefaultAllocator<32>_> local_338;
  TArray<FName,TSizedDefaultAllocator<32>_> local_328;
  longlong local_318;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_310;
  FMassProcessorDependencySolver *local_300;
  FMassProcessorDependencySolver *local_2f8;
  TArray<FMassProcessorOrderInfo,TSizedDefaultAllocator<32>_> *local_2f0;
  FNode *local_2e8;
  int iStack_2e0;
  undefined4 uStack_2dc;
  FScriptContainerElement *local_2d8;
  int iStack_2d0;
  undefined4 uStack_2cc;
  FNode *local_2c8;
  int iStack_2c0;
  undefined4 uStack_2bc;
  FScriptContainerElement *local_2b8;
  int iStack_2b0;
  undefined4 uStack_2ac;
  TArrayView<FMassProcessorDependencySolver::FNode,int> local_2a8;
  TArrayView<int_const_,int> local_298;
  TArrayView<FMassProcessorDependencySolver::FNode,int> local_288;
  TArrayView<int_const_,int> local_278;
  FResourceUsage local_268;
  ulonglong local_48;
  ulonglong uVar17;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_438;
  iVar11 = (this->AllNodes).ArrayNum;
  if (iVar11 != 0) {
    local_3d0 = 0;
    pFVar23 = (this->AllNodes).AllocatorInstance.Data;
    pTVar24 = &this->AllNodes;
    pFVar13 = pFVar23 + 0x2c;
    pFVar20 = pFVar23 + (longlong)iVar11 * 0x208;
    local_3a8 = pTVar24;
    local_380 = this;
    local_2f0 = param_1;
    while( true ) {
      if (pTVar24->ArrayNum != iVar11) {
        local_3cc[0] = 0;
        `TCheckedPointerIterator<FMassProcessorDependencySolver::FNode,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_3cc);
      }
      pFVar7 = local_380;
      if (pFVar23 == pFVar20) break;
      pFVar1 = pFVar13 + -0xc;
      if (pFVar1 != pFVar13 + -0x1c) {
        iVar3 = *(int *)(pFVar13 + -0x14);
        _Src = *(FScriptContainerElement **)&pFVar13[-0x1c].field_0x0;
        *(int *)(pFVar13 + -4) = iVar3;
        if ((iVar3 == 0) && (*(int *)pFVar13 == 0)) {
          *(undefined4 *)pFVar13 = 0;
          pTVar24 = local_3a8;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar3,*(int *)pFVar13,(ForAnyElementType *)pFVar1,iVar3,(int *)pFVar13);
          pTVar24 = local_3a8;
          if (iVar3 != 0) {
            memcpy(*(FScriptContainerElement **)&pFVar1->field_0x0,_Src,(longlong)iVar3 << 2);
            pTVar24 = local_3a8;
          }
        }
      }
      *(undefined4 *)(pFVar13 + 0x1b0) = 0;
      pFVar23 = pFVar23 + 0x208;
      local_3d0 = local_3d0 + (0 < *(int *)(pFVar13 + -0x14));
      pFVar13 = pFVar13 + 0x208;
    }
    local_3b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3b8.ArrayNum = 0;
    local_3b8.ArrayMax = 0;
    local_310.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar16 = (local_380->AllNodes).ArrayNum;
    local_310.ArrayNum = 0;
    local_310.ArrayMax = 0;
    local_3e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3e0.ArrayNum = 0;
    local_3e0.ArrayMax = 0;
    if (UE::Mass::Private::bProcessorExecutionPriorityEnabled == false) {
      if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
      }
      if (0 < (int)uVar16) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar16,&local_3e0.AllocatorInstance,0,&local_3e0.ArrayMax);
      }
      uVar16 = local_3d0;
      local_3c4 = 0;
      if (0 < (pFVar7->AllNodes).ArrayNum) {
        do {
          uVar15 = local_3c4;
          uVar19 = 0;
          if ((int)local_3c4 < pTVar24->ArrayNum) {
            uVar19 = ~local_3c4 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (*(longlong *)((pTVar24->AllocatorInstance).Data + (longlong)(int)uVar15 * 0x208 + 8)
              != 0) {
            if (((local_3e0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_3c4) &&
                ((FScriptContainerElement *)&local_3c4 <
                 local_3e0.AllocatorInstance.Data + (longlong)local_3e0.ArrayMax * 4)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (local_3e0.ArrayNum == local_3e0.ArrayMax) {
              local_3e0.ArrayNum =
                   UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_3e0.AllocatorInstance,&local_3e0.ArrayMax);
            }
            lVar12 = (longlong)local_3e0.ArrayNum;
            local_3e0.ArrayNum = local_3e0.ArrayNum + 1;
            *(uint *)(local_3e0.AllocatorInstance.Data + lVar12 * 4) = local_3c4;
            lVar12 = (longlong)(int)local_3c4;
            uVar15 = 0;
            if ((int)local_3c4 < pTVar24->ArrayNum) {
              uVar15 = ~local_3c4 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar4 = (FNode *)(pTVar24->AllocatorInstance).Data;
            iVar11 = (pFVar7->AllNodes).ArrayNum;
            local_2c8 = pFVar4;
            if ((iVar11 < 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_288._12_4_ = uStack_2bc;
            local_288.ArrayNum = iVar11;
            local_288.DataPtr = local_2c8;
            iStack_2c0 = iVar11;
            bVar10 = FNode::IncreaseWaitingNodesCount(pFVar4 + lVar12,&local_288,uVar16,&local_3b8);
            if (!bVar10) {
              iVar11 = local_3b8.ArrayNum;
              local_2b8 = local_3b8.AllocatorInstance.Data;
              if ((local_3b8.ArrayNum < 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar10)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pFVar4 = (FNode *)(pTVar24->AllocatorInstance).Data;
              iStack_2b0 = iVar11;
              iVar11 = pTVar24->ArrayNum;
              local_338.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_338.ArrayNum = iVar11;
              if (iVar11 == 0) {
                local_338.ArrayMax = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x208,8,iVar11,0,&local_338.AllocatorInstance,iVar11,&local_338.ArrayMax)
                ;
                ConstructItems<FMassProcessorDependencySolver::FNode,FMassProcessorDependencySolver::FNode,int>
                          (local_338.AllocatorInstance.Data,pFVar4,iVar11);
              }
              local_278._12_4_ = uStack_2ac;
              local_278.ArrayNum = iStack_2b0;
              local_278.DataPtr = (int *)local_2b8;
              UE::Mass::Private::LogCycle(&local_338,&local_278,&local_310);
              uVar8 = local_3b8._8_8_;
              iVar11 = local_3b8.ArrayMax;
              local_3b8._8_8_ = (ulonglong)(uint)local_3b8.ArrayMax << 0x20;
              if (((longlong)uVar8 < 0) && (iVar11 != 0)) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,0,&local_3b8.AllocatorInstance,0,&local_3b8.ArrayMax);
              }
            }
          }
          local_3c4 = local_3c4 + 1;
        } while ((int)local_3c4 < (pFVar7->AllNodes).ArrayNum);
      }
      local_2f8 = pFVar7;
      AlgoImpl::
      IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FMassProcessorDependencySolver::Solve_::__l22::<lambda_2>_>_>
                ((int *)local_3e0.AllocatorInstance.Data,local_3e0.ArrayNum,local_3e8[0],
                 (<lambda_2> *)&local_2f8);
    }
    else {
      if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
      }
      if (0 < (int)uVar16) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar16,&local_3e0.AllocatorInstance,0,&local_3e0.ArrayMax);
      }
      uVar16 = local_3d0;
      local_3c8 = 0;
      if (0 < (pFVar7->AllNodes).ArrayNum) {
        do {
          uVar15 = local_3c8;
          uVar19 = 0;
          if ((int)local_3c8 < pTVar24->ArrayNum) {
            uVar19 = ~local_3c8 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (*(longlong *)((pTVar24->AllocatorInstance).Data + (longlong)(int)uVar15 * 0x208 + 8)
              != 0) {
            if (((local_3e0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_3c8) &&
                ((FScriptContainerElement *)&local_3c8 <
                 local_3e0.AllocatorInstance.Data + (longlong)local_3e0.ArrayMax * 4)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (local_3e0.ArrayNum == local_3e0.ArrayMax) {
              local_3e0.ArrayNum =
                   UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_3e0.AllocatorInstance,&local_3e0.ArrayMax);
            }
            lVar12 = (longlong)local_3e0.ArrayNum;
            local_3e0.ArrayNum = local_3e0.ArrayNum + 1;
            *(uint *)(local_3e0.AllocatorInstance.Data + lVar12 * 4) = local_3c8;
            lVar12 = (longlong)(int)local_3c8;
            uVar15 = 0;
            if ((int)local_3c8 < pTVar24->ArrayNum) {
              uVar15 = ~local_3c8 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar4 = (FNode *)(pTVar24->AllocatorInstance).Data;
            iVar11 = (pFVar7->AllNodes).ArrayNum;
            local_2e8 = pFVar4;
            if ((iVar11 < 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_2a8._12_4_ = uStack_2dc;
            local_2a8.ArrayNum = iVar11;
            local_2a8.DataPtr = local_2e8;
            iStack_2e0 = iVar11;
            bVar10 = FNode::IncreaseWaitingNodesCountAndPriority
                               (pFVar4 + lVar12,&local_2a8,uVar16,&local_3b8,-0x80000000);
            if (!bVar10) {
              iVar11 = local_3b8.ArrayNum;
              local_2d8 = local_3b8.AllocatorInstance.Data;
              if ((local_3b8.ArrayNum < 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar10)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pFVar4 = (FNode *)(pTVar24->AllocatorInstance).Data;
              iStack_2d0 = iVar11;
              iVar11 = pTVar24->ArrayNum;
              local_348.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_348.ArrayNum = iVar11;
              if (iVar11 == 0) {
                local_348.ArrayMax = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x208,8,iVar11,0,&local_348.AllocatorInstance,iVar11,&local_348.ArrayMax)
                ;
                ConstructItems<FMassProcessorDependencySolver::FNode,FMassProcessorDependencySolver::FNode,int>
                          (local_348.AllocatorInstance.Data,pFVar4,iVar11);
              }
              local_298._12_4_ = uStack_2cc;
              local_298.ArrayNum = iStack_2d0;
              local_298.DataPtr = (int *)local_2d8;
              UE::Mass::Private::LogCycle(&local_348,&local_298,&local_310);
              uVar8 = local_3b8._8_8_;
              iVar11 = local_3b8.ArrayMax;
              local_3b8._8_8_ = (ulonglong)(uint)local_3b8.ArrayMax << 0x20;
              if (((longlong)uVar8 < 0) && (iVar11 != 0)) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,0,&local_3b8.AllocatorInstance,0,&local_3b8.ArrayMax);
              }
            }
          }
          local_3c8 = local_3c8 + 1;
        } while ((int)local_3c8 < (pFVar7->AllNodes).ArrayNum);
      }
      local_300 = pFVar7;
      AlgoImpl::
      IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FMassProcessorDependencySolver::Solve_::__l12::<lambda_1>_>_>
                ((int *)local_3e0.AllocatorInstance.Data,local_3e0.ArrayNum,local_3e8[0],
                 (<lambda_1> *)&local_300);
    }
    FResourceUsage::FResourceUsage(&local_268,pTVar24);
    uVar16 = (pFVar7->AllNodes).ArrayNum;
    local_3a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3a0.ArrayNum = 0;
    local_3a0.ArrayMax = 0;
    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
    }
    if (0 < (int)uVar16) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar16,&local_3a0.AllocatorInstance,0,&local_3a0.ArrayMax);
    }
    while (local_3e0.ArrayNum != 0) {
      uVar14 = 0;
      bVar10 = PerformSolverStep(pFVar7,&local_268,&local_3e0,&local_3a0);
      if (!bVar10) {
        if (1 < (byte)LogMassDependencies._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMassDependencies);
        }
        if ((local_3e0.ArrayNum < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar16 = *(uint *)local_3e0.AllocatorInstance.Data;
        uVar15 = 0;
        if ((int)uVar16 < pTVar24->ArrayNum) {
          uVar15 = ~uVar16 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar13 = (pTVar24->AllocatorInstance).Data;
        if ((*(int *)(pFVar13 + (longlong)(int)uVar16 * 0x208 + 0x28) < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_3c0[0] = *(int *)(*(longlong *)(pFVar13 + (longlong)(int)uVar16 * 0x208 + 0x20) + -4 +
                               (longlong)*(int *)(pFVar13 + (longlong)(int)uVar16 * 0x208 + 0x28) *
                               4);
        *(int *)(pFVar13 + (longlong)(int)uVar16 * 0x208 + 0x28) =
             *(int *)(pFVar13 + (longlong)(int)uVar16 * 0x208 + 0x28) + -1;
        if ((local_3e0.ArrayNum < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar16 = *(uint *)local_3e0.AllocatorInstance.Data;
        uVar15 = 0;
        if ((int)uVar16 < pTVar24->ArrayNum) {
          uVar15 = ~uVar16 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar13 = (pTVar24->AllocatorInstance).Data + (longlong)(int)uVar16 * 0x208 + 0x10;
        local_390 = pFVar13;
        if (((*(int **)pFVar13 <= local_3c0) &&
            (local_3c0 < *(int **)pFVar13 + *(int *)(pFVar13 + 0xc))) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar11 = *(int *)(pFVar13 + 8);
        if (iVar11 != 0) {
          piVar5 = *(int **)pFVar13;
          bVar10 = *piVar5 != local_3c0[0];
          uVar17 = uVar14;
          uVar21 = uVar14;
          do {
            uVar15 = (uint)uVar17;
            uVar16 = uVar15;
            do {
              uVar14 = uVar14 + 1;
              uVar16 = uVar16 + 1;
              uVar17 = (ulonglong)uVar16;
              if ((longlong)iVar11 <= (longlong)uVar14) break;
            } while (bVar10 == (piVar5[uVar14] != local_3c0[0]));
            if (bVar10 != false) {
              uVar19 = (uint)uVar21;
              if (uVar19 != uVar15) {
                memmove(piVar5 + (int)uVar19,piVar5 + (int)uVar15,
                        (longlong)(int)(uVar16 - uVar15) << 2);
              }
              uVar21 = (ulonglong)(uVar19 + (uVar16 - uVar15));
            }
            bVar10 = (bool)(bVar10 ^ 1);
          } while ((longlong)uVar14 < (longlong)iVar11);
          *(int *)(local_390 + 8) = (int)uVar21;
          pTVar24 = local_3a8;
          pFVar7 = local_380;
        }
      }
    }
    local_3d0 = 0;
    local_3e0.ArrayNum = 0;
    if (0 < local_3a0.ArrayNum) {
      local_390 = (FScriptContainerElement *)0x0;
      do {
        pFVar13 = local_390;
        uVar16 = 0;
        if ((int)local_3d0 < local_3a0.ArrayNum) {
          uVar16 = ~local_3d0 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar16 = *(uint *)(pFVar13 + local_3a0.AllocatorInstance.Data);
        local_328.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_328.ArrayNum = 0;
        local_328.ArrayMax = 0;
        local_388 = ~uVar16 >> 0x1f;
        uVar15 = 0;
        if ((int)uVar16 < pTVar24->ArrayNum) {
          uVar15 = local_388;
        }
        if ((uVar15 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar7 = local_380;
        pFVar13 = (pTVar24->AllocatorInstance).Data;
        lVar12 = (longlong)(int)uVar16 * 0x208;
        puVar18 = *(uint **)(pFVar13 + lVar12 + 0x10);
        iVar11 = *(int *)(pFVar13 + lVar12 + 0x18);
        puVar2 = puVar18 + iVar11;
        local_318 = lVar12;
        while( true ) {
          if (*(int *)(pFVar13 + lVar12 + 0x18) != iVar11) {
            local_3e8[0] = (FIdentityFunctor)0x0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_3e8);
          }
          uVar15 = local_388;
          pTVar24 = local_3a8;
          if (puVar18 == puVar2) break;
          uVar15 = *puVar18;
          uVar19 = 0;
          if ((int)uVar15 < (pFVar7->AllNodes).ArrayNum) {
            uVar19 = ~uVar15 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
                    (&local_328,
                     (FName *)((pFVar7->AllNodes).AllocatorInstance.Data +
                              (longlong)(int)uVar15 * 0x208));
          puVar18 = puVar18 + 1;
        }
        uVar22 = 0;
        uVar19 = uVar22;
        if ((int)uVar16 < local_3a8->ArrayNum) {
          uVar19 = local_388;
        }
        if ((uVar19 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar12 = local_318;
        if (*(longlong *)((pTVar24->AllocatorInstance).Data + local_318 + 8) == 0) {
          bVar10 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<5746213535315133257>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessorDependencySolver.cpp"
                              ,0x349,"AllNodes[NodeIndex].Processor != nullptr");
          if (bVar10) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        else {
          uVar19 = uVar22;
          if ((int)uVar16 < pTVar24->ArrayNum) {
            uVar19 = uVar15;
          }
          if ((uVar19 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_378 = *(undefined8 *)((pTVar24->AllocatorInstance).Data + lVar12);
          uVar19 = uVar22;
          if ((int)uVar16 < pTVar24->ArrayNum) {
            uVar19 = uVar15;
          }
          if ((uVar19 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          _Src_00.Data = local_328.AllocatorInstance.Data;
          local_370 = *(undefined8 *)((pTVar24->AllocatorInstance).Data + lVar12 + 8);
          lVar12 = (longlong)local_328.ArrayNum;
          local_368 = (FScriptContainerElement)0x1;
          local_360.Data = (FScriptContainerElement *)0x0;
          local_358 = CONCAT44(local_358._4_4_,local_328.ArrayNum);
          if (local_328.ArrayNum == 0) {
            local_358 = local_328._8_8_ & 0xffffffff;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,local_328.ArrayNum,0,&local_360,local_328.ArrayNum,
                       (int *)((longlong)&local_358 + 4));
            memcpy(local_360.Data,_Src_00.Data,lVar12 << 3);
          }
          if ((int)uVar16 < pTVar24->ArrayNum) {
            uVar22 = uVar15;
          }
          if ((uVar22 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pTVar9 = local_2f0;
          local_350 = *(undefined4 *)((pTVar24->AllocatorInstance).Data + local_318 + 0x1e4);
          pFVar13 = (local_2f0->AllocatorInstance).Data;
          if (((pFVar13 <= (FScriptContainerElement *)&local_378) &&
              ((FScriptContainerElement *)&local_378 <
               pFVar13 + (longlong)local_2f0->ArrayMax * 0x30)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar11 = pTVar9->ArrayNum;
          if (iVar11 == pTVar9->ArrayMax) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x830,&pTVar9->AllocatorInstance,&pTVar9->ArrayMax);
          }
          pTVar9->ArrayNum = iVar11 + 1;
          pFVar13 = (pTVar9->AllocatorInstance).Data + (longlong)iVar11 * 0x30;
          *(undefined8 *)pFVar13 = local_378;
          *(undefined8 *)(pFVar13 + 8) = local_370;
          *(undefined8 *)(pFVar13 + 0x18) = 0;
          pFVar13[0x10] = local_368;
          *(FScriptContainerElement **)(pFVar13 + 0x18) = local_360.Data;
          local_360.Data = (FScriptContainerElement *)0x0;
          *(undefined4 *)(pFVar13 + 0x20) = (undefined4)local_358;
          *(undefined4 *)(pFVar13 + 0x24) = local_358._4_4_;
          local_358 = 0;
          *(undefined4 *)(pFVar13 + 0x28) = local_350;
        }
        if (local_328.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_328.AllocatorInstance.Data);
        }
        local_3d0 = local_3d0 + 1;
        local_390 = local_390 + 4;
      } while ((int)local_3d0 < local_3a0.ArrayNum);
    }
    if (local_3a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a0.AllocatorInstance.Data);
    }
    DestructItems<FMassProcessorDependencySolver::FResourceUsage::FResourceUsers,int>
              ((FResourceUsers *)
               local_268.RequiredSubsystemsAccess.Write.Access.AllocatorInstance.Data,
               local_268.RequiredSubsystemsAccess.Write.Access.ArrayNum);
    if (local_268.RequiredSubsystemsAccess.Write.Access.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.RequiredSubsystemsAccess.Write.Access.AllocatorInstance.Data);
    }
    DestructItems<FMassProcessorDependencySolver::FResourceUsage::FResourceUsers,int>
              ((FResourceUsers *)
               local_268.RequiredSubsystemsAccess.Read.Access.AllocatorInstance.Data,
               local_268.RequiredSubsystemsAccess.Read.Access.ArrayNum);
    if (local_268.RequiredSubsystemsAccess.Read.Access.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.RequiredSubsystemsAccess.Read.Access.AllocatorInstance.Data);
    }
    DestructItems<FMassProcessorDependencySolver::FResourceUsage::FResourceUsers,int>
              ((FResourceUsers *)local_268.SharedFragmentsAccess.Write.Access.AllocatorInstance.Data
               ,local_268.SharedFragmentsAccess.Write.Access.ArrayNum);
    if (local_268.SharedFragmentsAccess.Write.Access.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.SharedFragmentsAccess.Write.Access.AllocatorInstance.Data);
    }
    DestructItems<FMassProcessorDependencySolver::FResourceUsage::FResourceUsers,int>
              ((FResourceUsers *)local_268.SharedFragmentsAccess.Read.Access.AllocatorInstance.Data,
               local_268.SharedFragmentsAccess.Read.Access.ArrayNum);
    if (local_268.SharedFragmentsAccess.Read.Access.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.SharedFragmentsAccess.Read.Access.AllocatorInstance.Data);
    }
    DestructItems<FMassProcessorDependencySolver::FResourceUsage::FResourceUsers,int>
              ((FResourceUsers *)local_268.ChunkFragmentsAccess.Write.Access.AllocatorInstance.Data,
               local_268.ChunkFragmentsAccess.Write.Access.ArrayNum);
    if (local_268.ChunkFragmentsAccess.Write.Access.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.ChunkFragmentsAccess.Write.Access.AllocatorInstance.Data);
    }
    DestructItems<FMassProcessorDependencySolver::FResourceUsage::FResourceUsers,int>
              ((FResourceUsers *)local_268.ChunkFragmentsAccess.Read.Access.AllocatorInstance.Data,
               local_268.ChunkFragmentsAccess.Read.Access.ArrayNum);
    if (local_268.ChunkFragmentsAccess.Read.Access.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.ChunkFragmentsAccess.Read.Access.AllocatorInstance.Data);
    }
    DestructItems<FMassProcessorDependencySolver::FResourceUsage::FResourceUsers,int>
              ((FResourceUsers *)local_268.FragmentsAccess.Write.Access.AllocatorInstance.Data,
               local_268.FragmentsAccess.Write.Access.ArrayNum);
    if (local_268.FragmentsAccess.Write.Access.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.FragmentsAccess.Write.Access.AllocatorInstance.Data);
    }
    DestructItems<FMassProcessorDependencySolver::FResourceUsage::FResourceUsers,int>
              ((FResourceUsers *)local_268.FragmentsAccess.Read.Access.AllocatorInstance.Data,
               local_268.FragmentsAccess.Read.Access.ArrayNum);
    if (local_268.FragmentsAccess.Read.Access.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.FragmentsAccess.Read.Access.AllocatorInstance.Data);
    }
    FMassExecutionRequirements::~FMassExecutionRequirements(&local_268.Requirements);
    if (local_3e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e0.AllocatorInstance.Data);
    }
    if (local_310.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_310.AllocatorInstance.Data);
    }
    if (local_3b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b8.AllocatorInstance.Data);
    }
  }
  return;
}

