// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 28

// FRigHierarchyModulePath<FRigHierarchyModulePath,FString> @ 14a206020

FRigHierarchyModulePath * __thiscall
FRigHierarchyModulePath::FRigHierarchyModulePath<FRigHierarchyModulePath,FString>
          (FRigHierarchyModulePath *this,FRigHierarchyModulePath *param_1,FString *param_2)

{
  TOptional<FString> *pTVar1;
  TOptional<FString> *pTVar2;
  TOptional<FName> *pTVar3;
  TOptional<FName> *pTVar4;
  TOptional<FString> *pTVar5;
  TOptional<FName> *pTVar6;
  FScriptContainerElement *pFVar7;
  FName FVar8;
  code *pcVar9;
  bool bVar10;
  FRigHierarchyModulePath *pFVar11;
  FRigHierarchyModulePath local_68;
  
  *(undefined4 *)((longlong)&(this->CachedModuleNameString).field0_0x0 + 0xc) = 0xffffffff;
  pTVar1 = &this->CachedModuleNameString;
  (this->ModulePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar2 = &this->CachedElementNameString;
  (this->ModulePath).Data.ArrayNum = 0;
  (this->ModulePath).Data.ArrayMax = 0;
  pTVar3 = &this->CachedModuleFName;
  (pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar4 = &this->CachedElementFName;
  *(undefined4 *)((longlong)&(this->CachedModuleNameString).field0_0x0 + 8) = 0;
  (pTVar2->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)&(this->CachedElementNameString).field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->CachedElementNameString).field0_0x0 + 0xc) = 0xffffffff;
  (pTVar3->field0_0x0).TypedValue.ComparisonIndex.Value = 0xffffffff;
  (this->CachedModuleFName).field0_0x0.TypedValue.Number = 0;
  (pTVar4->field0_0x0).TypedValue.ComparisonIndex.Value = 0xffffffff;
  (this->CachedElementFName).field0_0x0.TypedValue.Number = 0;
  pFVar11 = Join(&local_68,&param_1->ModulePath,param_2);
  if (this != pFVar11) {
    pFVar7 = (this->ModulePath).Data.AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (this->ModulePath).Data.AllocatorInstance.Data =
         (pFVar11->ModulePath).Data.AllocatorInstance.Data;
    (pFVar11->ModulePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ModulePath).Data.ArrayNum = (pFVar11->ModulePath).Data.ArrayNum;
    (this->ModulePath).Data.ArrayMax = (pFVar11->ModulePath).Data.ArrayMax;
    (pFVar11->ModulePath).Data.ArrayNum = 0;
    (pFVar11->ModulePath).Data.ArrayMax = 0;
  }
  pTVar5 = &pFVar11->CachedModuleNameString;
  if (pTVar5 != pTVar1) {
    if (*(int *)((longlong)&(pFVar11->CachedModuleNameString).field0_0x0 + 0xc) == -1) {
      if (*(int *)((longlong)&(this->CachedModuleNameString).field0_0x0 + 0xc) != -1) {
        pFVar7 = (pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
        if (pFVar7 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar7);
        }
        (pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
        ;
        *(undefined4 *)((longlong)&(this->CachedModuleNameString).field0_0x0 + 8) = 0;
        *(undefined4 *)((longlong)&(this->CachedModuleNameString).field0_0x0 + 0xc) = 0xffffffff;
      }
    }
    else {
      pFVar7 = (pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      (pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
           (pTVar5->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
      (pTVar5->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)((longlong)&(this->CachedModuleNameString).field0_0x0 + 8) =
           *(undefined4 *)((longlong)&(pFVar11->CachedModuleNameString).field0_0x0 + 8);
      *(undefined4 *)((longlong)&(this->CachedModuleNameString).field0_0x0 + 0xc) =
           *(undefined4 *)((longlong)&(pFVar11->CachedModuleNameString).field0_0x0 + 0xc);
      *(int *)((longlong)&(pFVar11->CachedModuleNameString).field0_0x0 + 8) = 0;
      *(int *)((longlong)&(pFVar11->CachedModuleNameString).field0_0x0 + 0xc) = 0;
      if (*(int *)((longlong)&(this->CachedModuleNameString).field0_0x0 + 0xc) == -1) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x171,
                            L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                           );
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          pFVar11 = (FRigHierarchyModulePath *)(*pcVar9)();
          return pFVar11;
        }
      }
    }
  }
  pTVar1 = &pFVar11->CachedElementNameString;
  if (pTVar1 != pTVar2) {
    if (*(int *)((longlong)&(pFVar11->CachedElementNameString).field0_0x0 + 0xc) == -1) {
      if (*(int *)((longlong)&(this->CachedElementNameString).field0_0x0 + 0xc) != -1) {
        pFVar7 = (pTVar2->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
        if (pFVar7 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar7);
        }
        (pTVar2->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
        ;
        *(undefined4 *)((longlong)&(this->CachedElementNameString).field0_0x0 + 8) = 0;
        *(undefined4 *)((longlong)&(this->CachedElementNameString).field0_0x0 + 0xc) = 0xffffffff;
      }
    }
    else {
      pFVar7 = (pTVar2->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      (pTVar2->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar2->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
           (pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
      (pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)((longlong)&(this->CachedElementNameString).field0_0x0 + 8) =
           *(undefined4 *)((longlong)&(pFVar11->CachedElementNameString).field0_0x0 + 8);
      *(undefined4 *)((longlong)&(this->CachedElementNameString).field0_0x0 + 0xc) =
           *(undefined4 *)((longlong)&(pFVar11->CachedElementNameString).field0_0x0 + 0xc);
      *(int *)((longlong)&(pFVar11->CachedElementNameString).field0_0x0 + 8) = 0;
      *(int *)((longlong)&(pFVar11->CachedElementNameString).field0_0x0 + 0xc) = 0;
      if (*(int *)((longlong)&(this->CachedElementNameString).field0_0x0 + 0xc) == -1) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x171,
                            L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                           );
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          pFVar11 = (FRigHierarchyModulePath *)(*pcVar9)();
          return pFVar11;
        }
      }
    }
  }
  pTVar6 = &pFVar11->CachedModuleFName;
  if (pTVar6 != pTVar3) {
    if ((pTVar6->field0_0x0).TypedValue.ComparisonIndex.Value == 0xffffffff) {
      if ((pTVar3->field0_0x0).TypedValue.ComparisonIndex.Value != 0xffffffff) {
        (pTVar3->field0_0x0).TypedValue.ComparisonIndex.Value = 0xffffffff;
        (this->CachedModuleFName).field0_0x0.TypedValue.Number = 0;
      }
    }
    else {
      FVar8 = (pTVar6->field0_0x0).TypedValue;
      (pTVar3->field0_0x0).TypedValue = FVar8;
      if (FVar8.ComparisonIndex.Value.Value == 0xffffffff) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x171,
                            L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                           );
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          pFVar11 = (FRigHierarchyModulePath *)(*pcVar9)();
          return pFVar11;
        }
      }
    }
  }
  pTVar3 = &pFVar11->CachedElementFName;
  if (pTVar3 != pTVar4) {
    if ((pTVar3->field0_0x0).TypedValue.ComparisonIndex.Value == 0xffffffff) {
      if ((pTVar4->field0_0x0).TypedValue.ComparisonIndex.Value != 0xffffffff) {
        (pTVar4->field0_0x0).TypedValue.ComparisonIndex.Value = 0xffffffff;
        (this->CachedElementFName).field0_0x0.TypedValue.Number = 0;
      }
    }
    else {
      FVar8 = (pTVar3->field0_0x0).TypedValue;
      (pTVar4->field0_0x0).TypedValue = FVar8;
      if (FVar8.ComparisonIndex.Value.Value == 0xffffffff) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x171,
                            L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                           );
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          pFVar11 = (FRigHierarchyModulePath *)(*pcVar9)();
          return pFVar11;
        }
      }
    }
  }
  if ((local_68.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
     (local_68.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_68.CachedElementNameString.field0_0x0.TypedValue.Data.
                          AllocatorInstance.Data);
  }
  if ((local_68.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
     (local_68.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_68.CachedModuleNameString.field0_0x0.TypedValue.Data.
                          AllocatorInstance.Data);
  }
  if (local_68.ModulePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.ModulePath.Data.AllocatorInstance.Data);
  }
  return this;
}

// FRigHierarchyModulePath<FName,FName> @ 14a2062f0

FRigHierarchyModulePath * __thiscall
FRigHierarchyModulePath::FRigHierarchyModulePath<FName,FName>
          (FRigHierarchyModulePath *this,FName *param_1,FName *param_2)

{
  TOptional<FString> *pTVar1;
  TOptional<FString> *pTVar2;
  TOptional<FName> *pTVar3;
  TOptional<FName> *pTVar4;
  TOptional<FString> *pTVar5;
  TOptional<FName> *pTVar6;
  FScriptContainerElement *pFVar7;
  FName FVar8;
  code *pcVar9;
  bool bVar10;
  FRigHierarchyModulePath *pFVar11;
  FRigHierarchyModulePath local_68;
  
  *(undefined4 *)((longlong)&(this->CachedModuleNameString).field0_0x0 + 0xc) = 0xffffffff;
  pTVar1 = &this->CachedModuleNameString;
  (this->ModulePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar2 = &this->CachedElementNameString;
  (this->ModulePath).Data.ArrayNum = 0;
  (this->ModulePath).Data.ArrayMax = 0;
  pTVar3 = &this->CachedModuleFName;
  (pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar4 = &this->CachedElementFName;
  *(undefined4 *)((longlong)&(this->CachedModuleNameString).field0_0x0 + 8) = 0;
  (pTVar2->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)&(this->CachedElementNameString).field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->CachedElementNameString).field0_0x0 + 0xc) = 0xffffffff;
  (pTVar3->field0_0x0).TypedValue.ComparisonIndex.Value = 0xffffffff;
  (this->CachedModuleFName).field0_0x0.TypedValue.Number = 0;
  (pTVar4->field0_0x0).TypedValue.ComparisonIndex.Value = 0xffffffff;
  (this->CachedElementFName).field0_0x0.TypedValue.Number = 0;
  pFVar11 = Join(&local_68,param_1,param_2);
  if (this != pFVar11) {
    pFVar7 = (this->ModulePath).Data.AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (this->ModulePath).Data.AllocatorInstance.Data =
         (pFVar11->ModulePath).Data.AllocatorInstance.Data;
    (pFVar11->ModulePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ModulePath).Data.ArrayNum = (pFVar11->ModulePath).Data.ArrayNum;
    (this->ModulePath).Data.ArrayMax = (pFVar11->ModulePath).Data.ArrayMax;
    (pFVar11->ModulePath).Data.ArrayNum = 0;
    (pFVar11->ModulePath).Data.ArrayMax = 0;
  }
  pTVar5 = &pFVar11->CachedModuleNameString;
  if (pTVar5 != pTVar1) {
    if (*(int *)((longlong)&(pFVar11->CachedModuleNameString).field0_0x0 + 0xc) == -1) {
      if (*(int *)((longlong)&(this->CachedModuleNameString).field0_0x0 + 0xc) != -1) {
        pFVar7 = (pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
        if (pFVar7 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar7);
        }
        (pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
        ;
        *(undefined4 *)((longlong)&(this->CachedModuleNameString).field0_0x0 + 8) = 0;
        *(undefined4 *)((longlong)&(this->CachedModuleNameString).field0_0x0 + 0xc) = 0xffffffff;
      }
    }
    else {
      pFVar7 = (pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      (pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
           (pTVar5->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
      (pTVar5->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)((longlong)&(this->CachedModuleNameString).field0_0x0 + 8) =
           *(undefined4 *)((longlong)&(pFVar11->CachedModuleNameString).field0_0x0 + 8);
      *(undefined4 *)((longlong)&(this->CachedModuleNameString).field0_0x0 + 0xc) =
           *(undefined4 *)((longlong)&(pFVar11->CachedModuleNameString).field0_0x0 + 0xc);
      *(int *)((longlong)&(pFVar11->CachedModuleNameString).field0_0x0 + 8) = 0;
      *(int *)((longlong)&(pFVar11->CachedModuleNameString).field0_0x0 + 0xc) = 0;
      if (*(int *)((longlong)&(this->CachedModuleNameString).field0_0x0 + 0xc) == -1) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x171,
                            L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                           );
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          pFVar11 = (FRigHierarchyModulePath *)(*pcVar9)();
          return pFVar11;
        }
      }
    }
  }
  pTVar1 = &pFVar11->CachedElementNameString;
  if (pTVar1 != pTVar2) {
    if (*(int *)((longlong)&(pFVar11->CachedElementNameString).field0_0x0 + 0xc) == -1) {
      if (*(int *)((longlong)&(this->CachedElementNameString).field0_0x0 + 0xc) != -1) {
        pFVar7 = (pTVar2->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
        if (pFVar7 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar7);
        }
        (pTVar2->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
        ;
        *(undefined4 *)((longlong)&(this->CachedElementNameString).field0_0x0 + 8) = 0;
        *(undefined4 *)((longlong)&(this->CachedElementNameString).field0_0x0 + 0xc) = 0xffffffff;
      }
    }
    else {
      pFVar7 = (pTVar2->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      (pTVar2->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar2->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
           (pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
      (pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)((longlong)&(this->CachedElementNameString).field0_0x0 + 8) =
           *(undefined4 *)((longlong)&(pFVar11->CachedElementNameString).field0_0x0 + 8);
      *(undefined4 *)((longlong)&(this->CachedElementNameString).field0_0x0 + 0xc) =
           *(undefined4 *)((longlong)&(pFVar11->CachedElementNameString).field0_0x0 + 0xc);
      *(int *)((longlong)&(pFVar11->CachedElementNameString).field0_0x0 + 8) = 0;
      *(int *)((longlong)&(pFVar11->CachedElementNameString).field0_0x0 + 0xc) = 0;
      if (*(int *)((longlong)&(this->CachedElementNameString).field0_0x0 + 0xc) == -1) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x171,
                            L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                           );
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          pFVar11 = (FRigHierarchyModulePath *)(*pcVar9)();
          return pFVar11;
        }
      }
    }
  }
  pTVar6 = &pFVar11->CachedModuleFName;
  if (pTVar6 != pTVar3) {
    if ((pTVar6->field0_0x0).TypedValue.ComparisonIndex.Value == 0xffffffff) {
      if ((pTVar3->field0_0x0).TypedValue.ComparisonIndex.Value != 0xffffffff) {
        (pTVar3->field0_0x0).TypedValue.ComparisonIndex.Value = 0xffffffff;
        (this->CachedModuleFName).field0_0x0.TypedValue.Number = 0;
      }
    }
    else {
      FVar8 = (pTVar6->field0_0x0).TypedValue;
      (pTVar3->field0_0x0).TypedValue = FVar8;
      if (FVar8.ComparisonIndex.Value.Value == 0xffffffff) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x171,
                            L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                           );
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          pFVar11 = (FRigHierarchyModulePath *)(*pcVar9)();
          return pFVar11;
        }
      }
    }
  }
  pTVar3 = &pFVar11->CachedElementFName;
  if (pTVar3 != pTVar4) {
    if ((pTVar3->field0_0x0).TypedValue.ComparisonIndex.Value == 0xffffffff) {
      if ((pTVar4->field0_0x0).TypedValue.ComparisonIndex.Value != 0xffffffff) {
        (pTVar4->field0_0x0).TypedValue.ComparisonIndex.Value = 0xffffffff;
        (this->CachedElementFName).field0_0x0.TypedValue.Number = 0;
      }
    }
    else {
      FVar8 = (pTVar3->field0_0x0).TypedValue;
      (pTVar4->field0_0x0).TypedValue = FVar8;
      if (FVar8.ComparisonIndex.Value.Value == 0xffffffff) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x171,
                            L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                           );
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          pFVar11 = (FRigHierarchyModulePath *)(*pcVar9)();
          return pFVar11;
        }
      }
    }
  }
  if ((local_68.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
     (local_68.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_68.CachedElementNameString.field0_0x0.TypedValue.Data.
                          AllocatorInstance.Data);
  }
  if ((local_68.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
     (local_68.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_68.CachedModuleNameString.field0_0x0.TypedValue.Data.
                          AllocatorInstance.Data);
  }
  if (local_68.ModulePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.ModulePath.Data.AllocatorInstance.Data);
  }
  return this;
}

// FRigHierarchyModulePath<FString,FString> @ 14a2065c0

FRigHierarchyModulePath * __thiscall
FRigHierarchyModulePath::FRigHierarchyModulePath<FString,FString>
          (FRigHierarchyModulePath *this,FString *param_1,FString *param_2)

{
  TOptional<FString> *pTVar1;
  TOptional<FString> *pTVar2;
  TOptional<FName> *pTVar3;
  TOptional<FName> *pTVar4;
  TOptional<FString> *pTVar5;
  TOptional<FName> *pTVar6;
  FScriptContainerElement *pFVar7;
  FName FVar8;
  code *pcVar9;
  bool bVar10;
  FRigHierarchyModulePath *pFVar11;
  FRigHierarchyModulePath local_68;
  
  *(undefined4 *)((longlong)&(this->CachedModuleNameString).field0_0x0 + 0xc) = 0xffffffff;
  pTVar1 = &this->CachedModuleNameString;
  (this->ModulePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar2 = &this->CachedElementNameString;
  (this->ModulePath).Data.ArrayNum = 0;
  (this->ModulePath).Data.ArrayMax = 0;
  pTVar3 = &this->CachedModuleFName;
  (pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar4 = &this->CachedElementFName;
  *(undefined4 *)((longlong)&(this->CachedModuleNameString).field0_0x0 + 8) = 0;
  (pTVar2->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)&(this->CachedElementNameString).field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->CachedElementNameString).field0_0x0 + 0xc) = 0xffffffff;
  (pTVar3->field0_0x0).TypedValue.ComparisonIndex.Value = 0xffffffff;
  (this->CachedModuleFName).field0_0x0.TypedValue.Number = 0;
  (pTVar4->field0_0x0).TypedValue.ComparisonIndex.Value = 0xffffffff;
  (this->CachedElementFName).field0_0x0.TypedValue.Number = 0;
  pFVar11 = Join(&local_68,param_1,param_2);
  if (this != pFVar11) {
    pFVar7 = (this->ModulePath).Data.AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (this->ModulePath).Data.AllocatorInstance.Data =
         (pFVar11->ModulePath).Data.AllocatorInstance.Data;
    (pFVar11->ModulePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ModulePath).Data.ArrayNum = (pFVar11->ModulePath).Data.ArrayNum;
    (this->ModulePath).Data.ArrayMax = (pFVar11->ModulePath).Data.ArrayMax;
    (pFVar11->ModulePath).Data.ArrayNum = 0;
    (pFVar11->ModulePath).Data.ArrayMax = 0;
  }
  pTVar5 = &pFVar11->CachedModuleNameString;
  if (pTVar5 != pTVar1) {
    if (*(int *)((longlong)&(pFVar11->CachedModuleNameString).field0_0x0 + 0xc) == -1) {
      if (*(int *)((longlong)&(this->CachedModuleNameString).field0_0x0 + 0xc) != -1) {
        pFVar7 = (pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
        if (pFVar7 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar7);
        }
        (pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
        ;
        *(undefined4 *)((longlong)&(this->CachedModuleNameString).field0_0x0 + 8) = 0;
        *(undefined4 *)((longlong)&(this->CachedModuleNameString).field0_0x0 + 0xc) = 0xffffffff;
      }
    }
    else {
      pFVar7 = (pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      (pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
           (pTVar5->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
      (pTVar5->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)((longlong)&(this->CachedModuleNameString).field0_0x0 + 8) =
           *(undefined4 *)((longlong)&(pFVar11->CachedModuleNameString).field0_0x0 + 8);
      *(undefined4 *)((longlong)&(this->CachedModuleNameString).field0_0x0 + 0xc) =
           *(undefined4 *)((longlong)&(pFVar11->CachedModuleNameString).field0_0x0 + 0xc);
      *(int *)((longlong)&(pFVar11->CachedModuleNameString).field0_0x0 + 8) = 0;
      *(int *)((longlong)&(pFVar11->CachedModuleNameString).field0_0x0 + 0xc) = 0;
      if (*(int *)((longlong)&(this->CachedModuleNameString).field0_0x0 + 0xc) == -1) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x171,
                            L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                           );
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          pFVar11 = (FRigHierarchyModulePath *)(*pcVar9)();
          return pFVar11;
        }
      }
    }
  }
  pTVar1 = &pFVar11->CachedElementNameString;
  if (pTVar1 != pTVar2) {
    if (*(int *)((longlong)&(pFVar11->CachedElementNameString).field0_0x0 + 0xc) == -1) {
      if (*(int *)((longlong)&(this->CachedElementNameString).field0_0x0 + 0xc) != -1) {
        pFVar7 = (pTVar2->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
        if (pFVar7 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar7);
        }
        (pTVar2->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
        ;
        *(undefined4 *)((longlong)&(this->CachedElementNameString).field0_0x0 + 8) = 0;
        *(undefined4 *)((longlong)&(this->CachedElementNameString).field0_0x0 + 0xc) = 0xffffffff;
      }
    }
    else {
      pFVar7 = (pTVar2->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      (pTVar2->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar2->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
           (pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
      (pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)((longlong)&(this->CachedElementNameString).field0_0x0 + 8) =
           *(undefined4 *)((longlong)&(pFVar11->CachedElementNameString).field0_0x0 + 8);
      *(undefined4 *)((longlong)&(this->CachedElementNameString).field0_0x0 + 0xc) =
           *(undefined4 *)((longlong)&(pFVar11->CachedElementNameString).field0_0x0 + 0xc);
      *(int *)((longlong)&(pFVar11->CachedElementNameString).field0_0x0 + 8) = 0;
      *(int *)((longlong)&(pFVar11->CachedElementNameString).field0_0x0 + 0xc) = 0;
      if (*(int *)((longlong)&(this->CachedElementNameString).field0_0x0 + 0xc) == -1) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x171,
                            L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                           );
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          pFVar11 = (FRigHierarchyModulePath *)(*pcVar9)();
          return pFVar11;
        }
      }
    }
  }
  pTVar6 = &pFVar11->CachedModuleFName;
  if (pTVar6 != pTVar3) {
    if ((pTVar6->field0_0x0).TypedValue.ComparisonIndex.Value == 0xffffffff) {
      if ((pTVar3->field0_0x0).TypedValue.ComparisonIndex.Value != 0xffffffff) {
        (pTVar3->field0_0x0).TypedValue.ComparisonIndex.Value = 0xffffffff;
        (this->CachedModuleFName).field0_0x0.TypedValue.Number = 0;
      }
    }
    else {
      FVar8 = (pTVar6->field0_0x0).TypedValue;
      (pTVar3->field0_0x0).TypedValue = FVar8;
      if (FVar8.ComparisonIndex.Value.Value == 0xffffffff) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x171,
                            L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                           );
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          pFVar11 = (FRigHierarchyModulePath *)(*pcVar9)();
          return pFVar11;
        }
      }
    }
  }
  pTVar3 = &pFVar11->CachedElementFName;
  if (pTVar3 != pTVar4) {
    if ((pTVar3->field0_0x0).TypedValue.ComparisonIndex.Value == 0xffffffff) {
      if ((pTVar4->field0_0x0).TypedValue.ComparisonIndex.Value != 0xffffffff) {
        (pTVar4->field0_0x0).TypedValue.ComparisonIndex.Value = 0xffffffff;
        (this->CachedElementFName).field0_0x0.TypedValue.Number = 0;
      }
    }
    else {
      FVar8 = (pTVar3->field0_0x0).TypedValue;
      (pTVar4->field0_0x0).TypedValue = FVar8;
      if (FVar8.ComparisonIndex.Value.Value == 0xffffffff) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x171,
                            L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                           );
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          pFVar11 = (FRigHierarchyModulePath *)(*pcVar9)();
          return pFVar11;
        }
      }
    }
  }
  if ((local_68.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
     (local_68.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_68.CachedElementNameString.field0_0x0.TypedValue.Data.
                          AllocatorInstance.Data);
  }
  if ((local_68.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
     (local_68.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_68.CachedModuleNameString.field0_0x0.TypedValue.Data.
                          AllocatorInstance.Data);
  }
  if (local_68.ModulePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.ModulePath.Data.AllocatorInstance.Data);
  }
  return this;
}

// FRigHierarchyModulePath @ 14a220570

FRigHierarchyModulePath * __thiscall
FRigHierarchyModulePath::FRigHierarchyModulePath
          (FRigHierarchyModulePath *this,FRigHierarchyModulePath *param_1)

{
  (this->ModulePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModulePath).Data.AllocatorInstance.Data = (param_1->ModulePath).Data.AllocatorInstance.Data
  ;
  (param_1->ModulePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModulePath).Data.ArrayNum = (param_1->ModulePath).Data.ArrayNum;
  (this->ModulePath).Data.ArrayMax = (param_1->ModulePath).Data.ArrayMax;
  (param_1->ModulePath).Data.ArrayNum = 0;
  (param_1->ModulePath).Data.ArrayMax = 0;
  (this->CachedModuleNameString).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)&(this->CachedModuleNameString).field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->CachedModuleNameString).field0_0x0 + 0xc) = 0xffffffff;
  if (*(int *)((longlong)&(param_1->CachedModuleNameString).field0_0x0 + 0xc) != -1) {
    (this->CachedModuleNameString).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
         (param_1->CachedModuleNameString).field0_0x0.TypedValue.Data.AllocatorInstance.Data;
    (param_1->CachedModuleNameString).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&(this->CachedModuleNameString).field0_0x0 + 8) =
         *(undefined4 *)((longlong)&(param_1->CachedModuleNameString).field0_0x0 + 8);
    *(undefined4 *)((longlong)&(this->CachedModuleNameString).field0_0x0 + 0xc) =
         *(undefined4 *)((longlong)&(param_1->CachedModuleNameString).field0_0x0 + 0xc);
    *(int *)((longlong)&(param_1->CachedModuleNameString).field0_0x0 + 8) = 0;
    *(int *)((longlong)&(param_1->CachedModuleNameString).field0_0x0 + 0xc) = 0;
  }
  (this->CachedElementNameString).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)&(this->CachedElementNameString).field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->CachedElementNameString).field0_0x0 + 0xc) = 0xffffffff;
  if (*(int *)((longlong)&(param_1->CachedElementNameString).field0_0x0 + 0xc) != -1) {
    (this->CachedElementNameString).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
         (param_1->CachedElementNameString).field0_0x0.TypedValue.Data.AllocatorInstance.Data;
    (param_1->CachedElementNameString).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&(this->CachedElementNameString).field0_0x0 + 8) =
         *(undefined4 *)((longlong)&(param_1->CachedElementNameString).field0_0x0 + 8);
    *(undefined4 *)((longlong)&(this->CachedElementNameString).field0_0x0 + 0xc) =
         *(undefined4 *)((longlong)&(param_1->CachedElementNameString).field0_0x0 + 0xc);
    *(int *)((longlong)&(param_1->CachedElementNameString).field0_0x0 + 8) = 0;
    *(int *)((longlong)&(param_1->CachedElementNameString).field0_0x0 + 0xc) = 0;
  }
  (this->CachedModuleFName).field0_0x0.TypedValue.ComparisonIndex.Value = 0xffffffff;
  (this->CachedModuleFName).field0_0x0.TypedValue.Number = 0;
  if ((param_1->CachedModuleFName).field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) {
    (this->CachedModuleFName).field0_0x0 = (param_1->CachedModuleFName).field0_0x0;
  }
  (this->CachedElementFName).field0_0x0.TypedValue.ComparisonIndex.Value = 0xffffffff;
  (this->CachedElementFName).field0_0x0.TypedValue.Number = 0;
  if ((param_1->CachedElementFName).field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) {
    (this->CachedElementFName).field0_0x0 = (param_1->CachedElementFName).field0_0x0;
  }
  return this;
}

// FRigHierarchyModulePath @ 14a220630

FRigHierarchyModulePath * __thiscall
FRigHierarchyModulePath::FRigHierarchyModulePath
          (FRigHierarchyModulePath *this,FRigHierarchyModulePath *param_1)

{
  ::FString::FString(&this->ModulePath,&param_1->ModulePath);
  *(undefined4 *)((longlong)&(this->CachedModuleNameString).field0_0x0 + 0xc) = 0xffffffff;
  (this->CachedModuleNameString).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)&(this->CachedModuleNameString).field0_0x0 + 8) = 0;
  if (*(int *)((longlong)&(param_1->CachedModuleNameString).field0_0x0 + 0xc) != -1) {
    ::FString::FString((FString *)&this->CachedModuleNameString,
                       (FString *)&param_1->CachedModuleNameString);
  }
  (this->CachedElementNameString).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)&(this->CachedElementNameString).field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->CachedElementNameString).field0_0x0 + 0xc) = 0xffffffff;
  if (*(int *)((longlong)&(param_1->CachedElementNameString).field0_0x0 + 0xc) != -1) {
    ::FString::FString((FString *)&this->CachedElementNameString,
                       (FString *)&param_1->CachedElementNameString);
  }
  (this->CachedModuleFName).field0_0x0.TypedValue.ComparisonIndex.Value = 0xffffffff;
  (this->CachedModuleFName).field0_0x0.TypedValue.Number = 0;
  if ((param_1->CachedModuleFName).field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) {
    (this->CachedModuleFName).field0_0x0 = (param_1->CachedModuleFName).field0_0x0;
  }
  (this->CachedElementFName).field0_0x0.TypedValue.ComparisonIndex.Value = 0xffffffff;
  (this->CachedElementFName).field0_0x0.TypedValue.Number = 0;
  if ((param_1->CachedElementFName).field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) {
    (this->CachedElementFName).field0_0x0 = (param_1->CachedElementFName).field0_0x0;
  }
  return this;
}

// FRigHierarchyModulePath @ 14a2206e0

FRigHierarchyModulePath * __thiscall
FRigHierarchyModulePath::FRigHierarchyModulePath(FRigHierarchyModulePath *this,FName *param_1)

{
  FString *pFVar1;
  bool bVar2;
  FString local_28;
  FString local_18;
  
  bVar2 = *param_1 != (FName)0x0;
  if (bVar2) {
    pFVar1 = ::FName::ToString(param_1,&local_18);
  }
  else {
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar1 = &local_28;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
  }
  (this->ModulePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModulePath).Data.AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModulePath).Data.ArrayNum = (pFVar1->Data).ArrayNum;
  (this->ModulePath).Data.ArrayMax = (pFVar1->Data).ArrayMax;
  (pFVar1->Data).ArrayNum = 0;
  (pFVar1->Data).ArrayMax = 0;
  if (bVar2) {
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  (this->CachedModuleNameString).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)&(this->CachedModuleNameString).field0_0x0 + 8) = 0;
  (this->CachedElementNameString).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)&(this->CachedElementNameString).field0_0x0 + 8) = 0;
  (this->CachedModuleFName).field0_0x0.TypedValue.Number = 0;
  (this->CachedElementFName).field0_0x0.TypedValue.Number = 0;
  *(undefined4 *)((longlong)&(this->CachedModuleNameString).field0_0x0 + 0xc) = 0xffffffff;
  *(undefined8 *)&(this->CachedElementNameString).field0_0x0.TypedValue.Data.ArrayMax =
       0xffffffffffffffff;
  (this->CachedElementFName).field0_0x0.TypedValue.ComparisonIndex.Value = 0xffffffff;
  return this;
}

// operator= @ 14a229d90

FRigHierarchyModulePath * __thiscall
FRigHierarchyModulePath::operator=(FRigHierarchyModulePath *this,FRigHierarchyModulePath *param_1)

{
  FScriptContainerElement *pFVar1;
  
  if (this != param_1) {
    pFVar1 = (this->ModulePath).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->ModulePath).Data.AllocatorInstance.Data =
         (param_1->ModulePath).Data.AllocatorInstance.Data;
    (param_1->ModulePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ModulePath).Data.ArrayNum = (param_1->ModulePath).Data.ArrayNum;
    (this->ModulePath).Data.ArrayMax = (param_1->ModulePath).Data.ArrayMax;
    (param_1->ModulePath).Data.ArrayNum = 0;
    (param_1->ModulePath).Data.ArrayMax = 0;
  }
  TOptional<FString>::operator=(&this->CachedModuleNameString,&param_1->CachedModuleNameString);
  TOptional<FString>::operator=(&this->CachedElementNameString,&param_1->CachedElementNameString);
  TOptional<FName>::operator=(&this->CachedModuleFName,&param_1->CachedModuleFName);
  TOptional<FName>::operator=(&this->CachedElementFName,&param_1->CachedElementFName);
  return this;
}

// operator== @ 14a22a200

bool __thiscall
FRigHierarchyModulePath::operator==(FRigHierarchyModulePath *this,FRigHierarchyModulePath *param_1)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  FString *pFVar4;
  bool bVar5;
  FString local_28;
  FString local_18;
  
  pFVar3 = ::FString::ToLower(&param_1->ModulePath,&local_18);
  pFVar4 = ::FString::ToLower(&this->ModulePath,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar1 == iVar2) {
    if (iVar1 < 2) {
      bVar5 = true;
    }
    else {
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar4->Data).AllocatorInstance.Data,
                         (wchar_t *)(pFVar3->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
    }
  }
  else {
    bVar5 = iVar2 + iVar1 == 1;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// StaticStruct @ 14a2c8f90

UScriptStruct * __cdecl FRigHierarchyModulePath::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigHierarchyModulePath.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigHierarchyModulePath.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigHierarchyModulePath,(UObject *)pUVar1,
                         L"RigHierarchyModulePath");
  }
  return Z_Registration_Info_UScriptStruct_FRigHierarchyModulePath.OuterSingleton;
}

// ~FRigHierarchyModulePath @ 14a2decb0

void __thiscall FRigHierarchyModulePath::~FRigHierarchyModulePath(FRigHierarchyModulePath *this)

{
  FScriptContainerElement *pFVar1;
  
  if ((*(int *)((longlong)&(this->CachedElementNameString).field0_0x0 + 0xc) != -1) &&
     (pFVar1 = (this->CachedElementNameString).field0_0x0.TypedValue.Data.AllocatorInstance.Data,
     pFVar1 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar1);
  }
  if ((*(int *)((longlong)&(this->CachedModuleNameString).field0_0x0 + 0xc) != -1) &&
     (pFVar1 = (this->CachedModuleNameString).field0_0x0.TypedValue.Data.AllocatorInstance.Data,
     pFVar1 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ModulePath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ConvertToModuleNameFormat @ 14a2f7670

FRigHierarchyModulePath * __thiscall
FRigHierarchyModulePath::ConvertToModuleNameFormat
          (FRigHierarchyModulePath *this,FRigHierarchyModulePath *__return_storage_ptr__,
          TMap<FRigHierarchyModulePath,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigHierarchyModulePath,FName,0>_>
          *param_1)

{
  FRigHierarchyModulePath(__return_storage_ptr__,this);
  ConvertToModuleNameFormatInline(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// ConvertToModuleNameFormatInline @ 14a2f77c0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
FRigHierarchyModulePath::ConvertToModuleNameFormatInline
          (FRigHierarchyModulePath *this,
          TMap<FRigHierarchyModulePath,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigHierarchyModulePath,FName,0>_>
          *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ulonglong uVar3;
  wchar_t *pwVar4;
  ulonglong uVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  FName *this_00;
  FRigHierarchyModulePath *pFVar9;
  size_t sVar10;
  TStringView<wchar_t> *pTVar11;
  FString *pFVar12;
  int iVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  ForAnyElementType FVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  FString local_2b8;
  FString local_2a8;
  ForAnyElementType local_298;
  undefined8 local_290;
  FString local_288;
  ForAnyElementType local_278;
  int local_270;
  int iStack_26c;
  FNameEntryId FStack_268;
  uint uStack_264;
  int local_260;
  undefined4 uStack_25c;
  FString local_258;
  FRigHierarchyModulePath local_248;
  FRigHierarchyModulePath local_208;
  ForAnyElementType local_1c8;
  undefined8 local_1c0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_1b8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_1a8;
  FNameEntryId FStack_198;
  uint local_194;
  int local_190;
  undefined4 uStack_18c;
  FString local_188;
  FRigHierarchyModulePath local_178;
  FRigHierarchyModulePath local_138;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  TStringView<wchar_t> local_78;
  wchar_t *local_68;
  undefined8 uStack_60;
  FRigHierarchyModulePath local_58;
  
  iVar13 = (this->ModulePath).Data.ArrayNum;
  iVar17 = 0;
  iVar19 = iVar13 + -1;
  if (iVar13 == 0) {
    iVar19 = iVar17;
  }
  if (iVar19 < 3) {
    return false;
  }
  pFVar1 = (this->ModulePath).Data.AllocatorInstance.Data;
  pFVar15 = pFVar1 + (longlong)iVar13 * 2;
  do {
    if (pFVar15 == pFVar1) {
      return false;
    }
    pFVar15 = pFVar15 + -2;
  } while (*(short *)pFVar15 != 0x3a);
  iVar13 = (int)((longlong)pFVar15 - (longlong)pFVar1 >> 1);
  if (iVar13 < 1) {
    return false;
  }
  if (iVar19 + -1 <= iVar13) {
    return false;
  }
  local_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2a8.Data.ArrayNum = 0;
  local_2a8.Data.ArrayMax = 0;
  local_2b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b8.Data.ArrayNum = 0;
  local_2b8.Data.ArrayMax = 0;
  bVar6 = Split(this,&local_2a8,&local_2b8);
  FVar16.Data = local_2a8.Data.AllocatorInstance.Data;
  if (!bVar6) {
    if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
    }
    if (local_2a8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return false;
    }
    FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
    return false;
  }
  if (param_1 !=
      (TMap<FRigHierarchyModulePath,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigHierarchyModulePath,FName,0>_>
       *)0x0) {
    lVar18 = (longlong)local_2a8.Data.ArrayNum;
    local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_188.Data.ArrayNum = local_2a8.Data.ArrayNum;
    if (local_2a8.Data.ArrayNum == 0) {
      local_188.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_2a8.Data.ArrayNum,0,(ForAnyElementType *)&local_188,
                 local_2a8.Data.ArrayNum,&local_188.Data.ArrayMax);
      memcpy(local_188.Data.AllocatorInstance.Data,FVar16.Data,lVar18 * 2);
    }
    ::FString::FString(&local_138.ModulePath,&local_188);
    local_138.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
         (ForAnyElementType)(FScriptContainerElement *)0x0;
    local_138.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
    local_138.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax = -1;
    local_138.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
         (ForAnyElementType)(FScriptContainerElement *)0x0;
    local_138.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
    local_138._44_8_ = 0xffffffffffffffff;
    local_138.CachedModuleFName.field0_0x0.TypedValue.Number = 0;
    local_138.CachedElementFName.field0_0x0.TypedValue.ComparisonIndex.Value =
         (FNameEntryId)0xffffffff;
    local_138.CachedElementFName.field0_0x0.TypedValue.Number = 0;
    this_00 = TMapBase<FRigHierarchyModulePath,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigHierarchyModulePath,FName,0>_>
              ::Find((TMapBase<FRigHierarchyModulePath,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigHierarchyModulePath,FName,0>_>
                      *)param_1,&local_138);
    if ((local_138.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
       (local_138.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_138.CachedElementNameString.field0_0x0.TypedValue.Data.
                            AllocatorInstance.Data);
    }
    if ((local_138.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
       (local_138.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_138.CachedModuleNameString.field0_0x0.TypedValue.Data.
                            AllocatorInstance.Data);
    }
    if (local_138.ModulePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.ModulePath.Data.AllocatorInstance.Data);
    }
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
    if (this_00 != (FName *)0x0) {
      ::FName::ToString(this_00,&local_b8);
      pFVar9 = Join(&local_58,&local_b8,&local_2b8);
      operator=(this,pFVar9);
      ~FRigHierarchyModulePath(&local_58);
      goto LAB_14a2f83fa;
    }
  }
  FVar16.Data = local_2a8.Data.AllocatorInstance.Data;
  lVar18 = (longlong)local_2a8.Data.ArrayNum;
  local_178.ModulePath.Data.ArrayNum = local_2a8.Data.ArrayNum;
  local_178.ModulePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_2a8.Data.ArrayNum == 0) {
    local_178.ModulePath.Data.ArrayMax = 0;
    iVar13 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_2a8.Data.ArrayNum,0,(ForAnyElementType *)&local_178,local_2a8.Data.ArrayNum
               ,&local_178.ModulePath.Data.ArrayMax);
    memcpy(local_178.ModulePath.Data.AllocatorInstance.Data,FVar16.Data,lVar18 * 2);
    iVar13 = local_2a8.Data.ArrayNum;
  }
  pwVar4 = ModuleNameSuffix;
  local_178.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_178.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
  iVar19 = local_178.ModulePath.Data.ArrayNum + -1;
  if (local_178.ModulePath.Data.ArrayNum == 0) {
    iVar19 = iVar17;
  }
  local_178.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax = -1;
  local_178.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_178.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
  local_178._44_8_ = 0xffffffffffffffff;
  local_178.CachedModuleFName.field0_0x0.TypedValue.Number = 0;
  local_178.CachedElementFName.field0_0x0.TypedValue.ComparisonIndex.Value =
       (FNameEntryId)0xffffffff;
  local_178.CachedElementFName.field0_0x0.TypedValue.Number = 0;
  iVar8 = 0;
  if (iVar19 < 3) {
LAB_14a2f7adf:
    if ((iVar13 < 2) || (local_2b8.Data.ArrayNum < 2)) {
      local_208.ModulePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_208.ModulePath.Data.ArrayNum = 0;
      local_208.ModulePath.Data.ArrayMax = 0;
      local_208.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
           (ForAnyElementType)(FScriptContainerElement *)0x0;
      local_208.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
      local_208.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax = -1;
      local_208.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
           (ForAnyElementType)(FScriptContainerElement *)0x0;
      local_208.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
      local_208.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax = -1;
      local_208.CachedModuleFName.field0_0x0.TypedValue.ComparisonIndex.Value =
           (FNameEntryId)0xffffffff;
      local_208.CachedModuleFName.field0_0x0.TypedValue.Number = 0;
      local_208.CachedElementFName.field0_0x0 = (TOptional<FName>_u_0)0xffffffff;
    }
    else {
      if (ModuleNameSuffix != (wchar_t *)0x0) {
        sVar10 = wcslen(ModuleNameSuffix);
        iVar8 = (int)sVar10;
      }
      bVar6 = ::FString::EndsWith(&local_2a8,pwVar4,iVar8,IgnoreCase);
      if (bVar6) {
        ::FString::ConcatFF(&local_d8,&local_2a8,&local_2b8);
        FVar16.Data = local_d8.Data.AllocatorInstance.Data;
        local_208.ModulePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar13 = local_d8.Data.ArrayNum;
        local_208.ModulePath.Data.ArrayNum = iVar13;
        if (iVar13 == 0) {
          local_208.ModulePath.Data._8_8_ = local_d8.Data._8_8_ & 0xffffffff;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar13,0,(ForAnyElementType *)&local_208,iVar13,
                     &local_208.ModulePath.Data.ArrayMax);
          memcpy(local_208.ModulePath.Data.AllocatorInstance.Data,FVar16.Data,(longlong)iVar13 * 2);
        }
        local_208.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
             (ForAnyElementType)(FScriptContainerElement *)0x0;
        local_208.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
        local_208.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax = -1;
        local_208.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
             (ForAnyElementType)(FScriptContainerElement *)0x0;
        local_208.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
        local_208.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax = -1;
        local_208.CachedModuleFName.field0_0x0.TypedValue.ComparisonIndex.Value =
             (FNameEntryId)0xffffffff;
        local_208.CachedModuleFName.field0_0x0.TypedValue.Number = 0;
        local_208.CachedElementFName.field0_0x0 = (TOptional<FName>_u_0)0xffffffff;
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
      }
      else {
        ::FString::ConcatFC(&local_98,&local_2a8,ModuleNameSuffix);
        ::FString::ConcatFF(&local_c8,&local_98,&local_2b8);
        FVar16.Data = local_c8.Data.AllocatorInstance.Data;
        local_1c8.Data = (FScriptContainerElement *)0x0;
        iVar13 = local_c8.Data.ArrayNum;
        local_1c0 = CONCAT44(local_1c0._4_4_,iVar13);
        if (iVar13 == 0) {
          local_1c0 = local_c8.Data._8_8_ & 0xffffffff;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar13,0,&local_1c8,iVar13,(int *)((longlong)&local_1c0 + 4));
          memcpy(local_1c8.Data,FVar16.Data,(longlong)iVar13 * 2);
        }
        local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1b8.ArrayNum = 0;
        local_1b8.ArrayMax = -1;
        local_1a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1a8.ArrayNum = 0;
        local_1a8.ArrayMax = -1;
        FStack_198.Value = 0xffffffff;
        local_194 = 0;
        local_190 = -1;
        uStack_18c = 0;
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b8.AllocatorInstance.Data);
        }
        local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
                  (&local_1b8,(wchar_t *)local_2a8.Data.AllocatorInstance.Data,
                   local_2a8.Data.ArrayNum,0);
        if ((local_1b8.ArrayMax == -1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x171,
                               L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                              ), bVar6)) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
        if (local_1a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.AllocatorInstance.Data);
        }
        local_1a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
                  (&local_1a8,(wchar_t *)local_2b8.Data.AllocatorInstance.Data,
                   local_2b8.Data.ArrayNum,0);
        if ((local_1a8.ArrayMax == -1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x171,
                               L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                              ), bVar6)) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
        local_208.ModulePath.Data.AllocatorInstance.Data = local_1c8.Data;
        uVar3 = local_1c0;
        local_208.ModulePath.Data.ArrayNum = (undefined4)local_1c0;
        local_208.ModulePath.Data.ArrayMax = local_1c0._4_4_;
        local_1c0 = 0;
        local_1c8.Data = (FScriptContainerElement *)0x0;
        local_208.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
             (ForAnyElementType)(FScriptContainerElement *)0x0;
        local_208.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
        local_208.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax = -1;
        if (local_1b8.ArrayMax == -1) {
          iVar17 = -1;
        }
        else {
          local_208.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(ForAnyElementType)local_1b8.AllocatorInstance.Data;
          local_208.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax = local_1b8.ArrayMax;
          local_208.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayNum = local_1b8.ArrayNum;
          local_1b8.ArrayNum = 0;
          local_1b8.ArrayMax = 0;
          local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        local_208.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
             (ForAnyElementType)(FScriptContainerElement *)0x0;
        local_208.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
        local_208.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax = -1;
        if (local_1a8.ArrayMax != -1) {
          local_208.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(ForAnyElementType)local_1a8.AllocatorInstance.Data;
          local_208.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax = local_1a8.ArrayMax
          ;
          local_208.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayNum = local_1a8.ArrayNum
          ;
          local_1a8.ArrayNum = 0;
          local_1a8.ArrayMax = 0;
          local_1a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        local_208.CachedModuleFName.field0_0x0.TypedValue.ComparisonIndex.Value =
             (FNameEntryId)0xffffffff;
        local_208.CachedModuleFName.field0_0x0.TypedValue.Number = 0;
        if (FStack_198.Value != 0xffffffff) {
          local_208.CachedModuleFName.field0_0x0.TypedValue.ComparisonIndex.Value =
               (FNameEntryId)(FNameEntryId)FStack_198.Value;
          local_208.CachedModuleFName.field0_0x0.TypedValue.Number = local_194;
        }
        local_208.CachedElementFName.field0_0x0 = (TOptional<FName>_u_0)0xffffffff;
        if (local_190 != -1) {
          local_208.CachedElementFName.field0_0x0.TypedValue.Number = uStack_18c;
          local_208.CachedElementFName.field0_0x0.TypedValue.ComparisonIndex.Value =
               (FNameEntryId)(FNameEntryId)local_190;
        }
        uVar5 = uVar3;
        if ((local_1a8.ArrayMax != -1) &&
           (uVar5 = local_208.ModulePath.Data._8_8_,
           local_1a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          local_208.ModulePath.Data._8_8_ = uVar3;
          FMemory::Free(local_1a8.AllocatorInstance.Data);
          iVar17 = local_1b8.ArrayMax;
          uVar5 = local_208.ModulePath.Data._8_8_;
        }
        local_208.ModulePath.Data._8_8_ = uVar5;
        if ((iVar17 != -1) && (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_1b8.AllocatorInstance.Data);
        }
        if (local_1c8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.Data);
        }
      }
    }
    operator=(this,&local_208);
    if ((local_208.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
       (local_208.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_208.CachedElementNameString.field0_0x0.TypedValue.Data.
                            AllocatorInstance.Data);
    }
    FVar16.Data = local_208.ModulePath.Data.AllocatorInstance.Data;
    if ((local_208.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
       (local_208.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_208.CachedModuleNameString.field0_0x0.TypedValue.Data.
                            AllocatorInstance.Data);
      FVar16.Data = local_208.ModulePath.Data.AllocatorInstance.Data;
    }
  }
  else {
    pFVar15 = local_178.ModulePath.Data.AllocatorInstance.Data +
              (longlong)local_178.ModulePath.Data.ArrayNum * 2;
    do {
      if (pFVar15 == local_178.ModulePath.Data.AllocatorInstance.Data) goto LAB_14a2f7adf;
      pFVar15 = pFVar15 + -2;
    } while (*(short *)pFVar15 != 0x3a);
    iVar14 = (int)((longlong)pFVar15 - (longlong)local_178.ModulePath.Data.AllocatorInstance.Data >>
                  1);
    if ((iVar14 < 1) || (iVar19 + -1 <= iVar14)) goto LAB_14a2f7adf;
    pTVar11 = GetElementName(&local_178,&local_78);
    local_258.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.Data.ArrayNum = 0;
    local_258.Data.ArrayMax = 0;
    local_68 = pTVar11->DataPtr;
    uStack_60 = *(undefined8 *)&pTVar11->Size;
    pFVar12 = ::FString::ConstructFromPtrSize
                        (&local_88,pTVar11->DataPtr,(int)*(undefined8 *)&pTVar11->Size);
    if (&local_258 != pFVar12) {
      if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_258.Data.AllocatorInstance.Data);
      }
      local_258.Data.AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
      (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_258.Data.ArrayNum = (pFVar12->Data).ArrayNum;
      local_258.Data.ArrayMax = (pFVar12->Data).ArrayMax;
      (pFVar12->Data).ArrayNum = 0;
      (pFVar12->Data).ArrayMax = 0;
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    pwVar4 = ModuleNameSuffix;
    if ((local_258.Data.ArrayNum < 2) || (local_2b8.Data.ArrayNum < 2)) {
      local_248.ModulePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_248.ModulePath.Data.ArrayNum = 0;
      local_248.ModulePath.Data.ArrayMax = 0;
      local_248.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
           (ForAnyElementType)(FScriptContainerElement *)0x0;
      local_248.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
      local_248.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax = -1;
      local_248.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
           (ForAnyElementType)(FScriptContainerElement *)0x0;
      local_248.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
      local_248.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax = -1;
      local_248.CachedModuleFName.field0_0x0.TypedValue.ComparisonIndex.Value =
           (FNameEntryId)0xffffffff;
      local_248.CachedModuleFName.field0_0x0.TypedValue.Number = 0;
      local_248.CachedElementFName.field0_0x0 = (TOptional<FName>_u_0)0xffffffff;
    }
    else {
      if (ModuleNameSuffix != (wchar_t *)0x0) {
        sVar10 = wcslen(ModuleNameSuffix);
        iVar8 = (int)sVar10;
      }
      bVar6 = ::FString::EndsWith(&local_258,pwVar4,iVar8,IgnoreCase);
      if (bVar6) {
        ::FString::ConcatFF(&local_f8,&local_258,&local_2b8);
        FVar16.Data = local_f8.Data.AllocatorInstance.Data;
        local_248.ModulePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar13 = local_f8.Data.ArrayNum;
        local_248.ModulePath.Data.ArrayNum = iVar13;
        if (iVar13 == 0) {
          local_248.ModulePath.Data._8_8_ = local_f8.Data._8_8_ & 0xffffffff;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar13,0,(ForAnyElementType *)&local_248,iVar13,
                     &local_248.ModulePath.Data.ArrayMax);
          memcpy(local_248.ModulePath.Data.AllocatorInstance.Data,FVar16.Data,(longlong)iVar13 * 2);
        }
        local_248.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
             (ForAnyElementType)(FScriptContainerElement *)0x0;
        local_248.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
        local_248.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax = -1;
        local_248.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
             (ForAnyElementType)(FScriptContainerElement *)0x0;
        local_248.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
        local_248.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax = -1;
        local_248.CachedModuleFName.field0_0x0.TypedValue.ComparisonIndex.Value =
             (FNameEntryId)0xffffffff;
        local_248.CachedModuleFName.field0_0x0.TypedValue.Number = 0;
        local_248.CachedElementFName.field0_0x0 = (TOptional<FName>_u_0)0xffffffff;
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
      }
      else {
        ::FString::ConcatFC(&local_a8,&local_258,ModuleNameSuffix);
        ::FString::ConcatFF(&local_e8,&local_a8,&local_2b8);
        FVar16.Data = local_e8.Data.AllocatorInstance.Data;
        local_298.Data = (FScriptContainerElement *)0x0;
        iVar13 = local_e8.Data.ArrayNum;
        local_290 = CONCAT44(local_290._4_4_,iVar13);
        if (iVar13 == 0) {
          local_290 = local_e8.Data._8_8_ & 0xffffffff;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar13,0,&local_298,iVar13,(int *)((longlong)&local_290 + 4));
          memcpy(local_298.Data,FVar16.Data,(longlong)iVar13 * 2);
        }
        local_288.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_288.Data.ArrayNum = 0;
        local_288.Data.ArrayMax = -1;
        local_278.Data = (FScriptContainerElement *)0x0;
        local_270 = 0;
        iStack_26c = -1;
        FStack_268.Value = 0xffffffff;
        uStack_264 = 0;
        local_260 = -1;
        uStack_25c = 0;
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_288.Data.AllocatorInstance.Data);
        }
        ::FString::FString(&local_288,&local_258);
        if ((local_288.Data.ArrayMax == -1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x171,
                               L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                              ), bVar6)) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
        if (local_278.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_278.Data);
        }
        FVar16.Data = local_2b8.Data.AllocatorInstance.Data;
        lVar18 = (longlong)local_2b8.Data.ArrayNum;
        local_278.Data = (FScriptContainerElement *)0x0;
        local_270 = local_2b8.Data.ArrayNum;
        if (local_2b8.Data.ArrayNum == 0) {
          iStack_26c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_2b8.Data.ArrayNum,0,&local_278,local_2b8.Data.ArrayNum,&iStack_26c);
          memcpy(local_278.Data,FVar16.Data,lVar18 * 2);
        }
        if ((iStack_26c == -1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x171,
                               L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                              ), bVar6)) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
        iVar17 = iStack_26c;
        FVar16.Data = local_278.Data;
        iVar13 = local_288.Data.ArrayMax;
        local_248.ModulePath.Data.AllocatorInstance.Data = local_298.Data;
        uVar3 = local_290;
        local_248.ModulePath.Data.ArrayNum = (undefined4)local_290;
        local_248.ModulePath.Data.ArrayMax = local_290._4_4_;
        local_290 = 0;
        local_298.Data = (FScriptContainerElement *)0x0;
        local_248.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
             (ForAnyElementType)(FScriptContainerElement *)0x0;
        local_248.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
        local_248.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax = -1;
        if (local_288.Data.ArrayMax != -1) {
          local_248.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(ForAnyElementType)local_288.Data.AllocatorInstance.Data;
          local_248.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayNum =
               local_288.Data.ArrayNum;
          local_288.Data.ArrayNum = 0;
          local_288.Data.ArrayMax = 0;
          local_288.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_248.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax = iVar13;
        }
        local_248.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
             (ForAnyElementType)(FScriptContainerElement *)0x0;
        local_248.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
        local_248.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax = -1;
        if (iStack_26c != -1) {
          local_248.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayNum = local_270;
          local_270 = 0;
          iStack_26c = 0;
          local_278.Data = (FScriptContainerElement *)0x0;
          local_248.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)FVar16.Data;
          local_248.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax = iVar17;
        }
        local_248.CachedModuleFName.field0_0x0.TypedValue.ComparisonIndex.Value =
             (FNameEntryId)0xffffffff;
        local_248.CachedModuleFName.field0_0x0.TypedValue.Number = 0;
        if (FStack_268.Value != 0xffffffff) {
          local_248.CachedModuleFName.field0_0x0.TypedValue.ComparisonIndex.Value =
               (FNameEntryId)(FNameEntryId)FStack_268.Value;
          local_248.CachedModuleFName.field0_0x0.TypedValue.Number = uStack_264;
        }
        local_248.CachedElementFName.field0_0x0 = (TOptional<FName>_u_0)0xffffffff;
        if (local_260 != -1) {
          local_248.CachedElementFName.field0_0x0.TypedValue.Number = uStack_25c;
          local_248.CachedElementFName.field0_0x0.TypedValue.ComparisonIndex.Value =
               (FNameEntryId)(FNameEntryId)local_260;
        }
        uVar5 = uVar3;
        if ((iStack_26c != -1) &&
           (uVar5 = local_248.ModulePath.Data._8_8_,
           local_278.Data != (FScriptContainerElement *)0x0)) {
          local_248.ModulePath.Data._8_8_ = uVar3;
          FMemory::Free(local_278.Data);
          uVar5 = local_248.ModulePath.Data._8_8_;
        }
        local_248.ModulePath.Data._8_8_ = uVar5;
        if ((local_288.Data.ArrayMax != -1) &&
           (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_288.Data.AllocatorInstance.Data);
        }
        if (local_298.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_298.Data);
        }
      }
    }
    operator=(this,&local_248);
    if ((local_248.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
       (local_248.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_248.CachedElementNameString.field0_0x0.TypedValue.Data.
                            AllocatorInstance.Data);
    }
    if ((local_248.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
       (local_248.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_248.CachedModuleNameString.field0_0x0.TypedValue.Data.
                            AllocatorInstance.Data);
    }
    FVar16.Data = local_258.Data.AllocatorInstance.Data;
    if (local_248.ModulePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.ModulePath.Data.AllocatorInstance.Data);
      FVar16.Data = local_258.Data.AllocatorInstance.Data;
    }
  }
  if (FVar16.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar16.Data);
  }
  if ((local_178.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
     (local_178.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_178.CachedElementNameString.field0_0x0.TypedValue.Data.
                          AllocatorInstance.Data);
  }
  local_b8.Data.AllocatorInstance.Data = local_178.ModulePath.Data.AllocatorInstance.Data;
  if ((local_178.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
     (local_178.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_178.CachedModuleNameString.field0_0x0.TypedValue.Data.
                          AllocatorInstance.Data);
    local_b8.Data.AllocatorInstance.Data = local_178.ModulePath.Data.AllocatorInstance.Data;
  }
LAB_14a2f83fa:
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
  }
  if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetElementFName @ 14a30e650

FName * __thiscall FRigHierarchyModulePath::GetElementFName(FRigHierarchyModulePath *this)

{
  TOptional<FName> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TStringView<wchar_t> *pTVar4;
  FString *pFVar5;
  FName *pFVar6;
  FName local_58;
  TOptional<FName>_u_0 local_50;
  FString local_48;
  FString local_38;
  TStringView<wchar_t> local_28;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  pTVar1 = &this->CachedElementFName;
  if ((this->CachedElementFName).field0_0x0.TypedValue.ComparisonIndex.Value == 0xffffffff) {
    if (*(int *)((longlong)&(this->CachedElementNameString).field0_0x0 + 0xc) == -1) {
      pTVar4 = GetElementName(this,&local_28);
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      local_18 = pTVar4->DataPtr;
      uStack_10 = *(undefined8 *)&pTVar4->Size;
      pFVar5 = ::FString::ConstructFromPtrSize
                         (&local_38,pTVar4->DataPtr,(int)*(undefined8 *)&pTVar4->Size);
      if (&local_48 != pFVar5) {
        local_48.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
        (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_48.Data.ArrayNum = (pFVar5->Data).ArrayNum;
        local_48.Data.ArrayMax = (pFVar5->Data).ArrayMax;
        (pFVar5->Data).ArrayNum = 0;
        (pFVar5->Data).ArrayMax = 0;
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      TOptional<FString>::operator=(&this->CachedElementNameString,&local_48);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&(this->CachedElementNameString).field0_0x0 + 0xc) == -1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FName *)(*pcVar2)();
          return pFVar6;
        }
      }
    }
    if (*(int *)((longlong)&(this->CachedElementNameString).field0_0x0 + 8) < 2) {
      local_58.ComparisonIndex.Value = 0;
      local_58.Number = 0;
      if (&local_58 != (FName *)pTVar1) {
        pTVar1->field0_0x0 = (TOptional<FName>_u_0)0x0;
      }
    }
    else {
      ::FName::FName(&local_50.TypedValue,
                     (wchar_t *)
                     (this->CachedElementNameString).field0_0x0.TypedValue.Data.AllocatorInstance.
                     Data);
      if ((&local_50 != &pTVar1->field0_0x0) &&
         ((pTVar1->field0_0x0).TypedValue = (FName)local_50,
         local_50.TypedValue.ComparisonIndex.Value.Value == 0xffffffff)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x171,
                           L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FName *)(*pcVar2)();
          return pFVar6;
        }
      }
    }
    if ((pTVar1->field0_0x0).TypedValue.ComparisonIndex.Value == 0xffffffff) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FName *)(*pcVar2)();
        return pFVar6;
      }
    }
  }
  return (FName *)pTVar1;
}

// GetElementName @ 14a30e7e0

TStringView<wchar_t> * __thiscall
FRigHierarchyModulePath::GetElementName
          (FRigHierarchyModulePath *this,TStringView<wchar_t> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  bool bVar8;
  
  iVar3 = (this->ModulePath).Data.ArrayNum;
  iVar7 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar7 = 0;
  }
  if (2 < iVar7) {
    pFVar1 = (this->ModulePath).Data.AllocatorInstance.Data;
    pFVar2 = pFVar1 + (longlong)iVar3 * 2;
    pFVar6 = pFVar2;
    do {
      if (pFVar6 == pFVar1) goto joined_r0x00014a30e827;
      pFVar6 = pFVar6 + -2;
    } while (*(short *)pFVar6 != 0x2f);
    iVar3 = (int)((longlong)pFVar6 - (longlong)pFVar1 >> 1);
    if (iVar3 != -1) {
      iVar4 = iVar3 + 1;
      bVar8 = iVar4 < 0;
      if (bVar8) {
        iVar4 = 0;
      }
      iVar5 = 0x7fffffff;
      if (bVar8) {
        iVar5 = iVar3 + -0x80000000;
      }
      if (iVar7 < iVar4) {
        iVar4 = iVar7;
      }
      iVar3 = iVar7 - iVar4;
      if (iVar5 < iVar7 - iVar4) {
        iVar3 = iVar5;
      }
      __return_storage_ptr__->DataPtr = (wchar_t *)(pFVar1 + (longlong)iVar4 * 2);
      iVar7 = 0;
      if (0 < iVar3) {
        iVar7 = iVar3;
      }
      __return_storage_ptr__->Size = iVar7;
      return __return_storage_ptr__;
    }
joined_r0x00014a30e827:
    do {
      if (pFVar2 == pFVar1) goto LAB_14a30e843;
      pFVar2 = pFVar2 + -2;
    } while (*(short *)pFVar2 != 0x3a);
    iVar3 = (int)((longlong)pFVar2 - (longlong)pFVar1 >> 1);
    if (iVar3 != -1) {
      iVar4 = iVar3 + 1;
      bVar8 = iVar4 < 0;
      if (bVar8) {
        iVar4 = 0;
      }
      iVar5 = 0x7fffffff;
      if (bVar8) {
        iVar5 = iVar3 + -0x80000000;
      }
      if (iVar7 < iVar4) {
        iVar4 = iVar7;
      }
      iVar3 = iVar7 - iVar4;
      if (iVar5 < iVar7 - iVar4) {
        iVar3 = iVar5;
      }
      __return_storage_ptr__->DataPtr = (wchar_t *)(pFVar1 + (longlong)iVar4 * 2);
      iVar7 = 0;
      if (0 < iVar3) {
        iVar7 = iVar3;
      }
      __return_storage_ptr__->Size = iVar7;
      return __return_storage_ptr__;
    }
  }
LAB_14a30e843:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`FRigHierarchyModulePath::GetElementName'::__l2::
           _dynamic_atexit_destructor_for__EmptyString__);
    _Init_thread_footer(&::_TSS0);
  }
  __return_storage_ptr__->DataPtr = (wchar_t *)::EmptyString.Data.AllocatorInstance.Data;
  iVar3 = ::EmptyString.Data.ArrayNum + -1;
  if (::EmptyString.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  __return_storage_ptr__->Size = iVar3;
  return __return_storage_ptr__;
}

// GetElementNameString @ 14a30e980

FString * __thiscall FRigHierarchyModulePath::GetElementNameString(FRigHierarchyModulePath *this)

{
  code *pcVar1;
  bool bVar2;
  TStringView<wchar_t> *pTVar3;
  FString *pFVar4;
  FString local_48;
  FString local_38;
  TStringView<wchar_t> local_28;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  if (*(int *)((longlong)&(this->CachedElementNameString).field0_0x0 + 0xc) == -1) {
    pTVar3 = GetElementName(this,&local_28);
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_18 = pTVar3->DataPtr;
    uStack_10 = *(undefined8 *)&pTVar3->Size;
    pFVar4 = ::FString::ConstructFromPtrSize
                       (&local_38,pTVar3->DataPtr,(int)*(undefined8 *)&pTVar3->Size);
    if (&local_48 != pFVar4) {
      local_48.Data.AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = (pFVar4->Data).ArrayNum;
      local_48.Data.ArrayMax = (pFVar4->Data).ArrayMax;
      (pFVar4->Data).ArrayNum = 0;
      (pFVar4->Data).ArrayMax = 0;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    TOptional<FString>::operator=(&this->CachedElementNameString,&local_48);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (*(int *)((longlong)&(this->CachedElementNameString).field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  return (FString *)&this->CachedElementNameString;
}

// GetModuleFName @ 14a310ac0

FName * __thiscall FRigHierarchyModulePath::GetModuleFName(FRigHierarchyModulePath *this)

{
  TOptional<FName> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  FName *pFVar5;
  FName local_18;
  TOptional<FName>_u_0 local_10;
  
  pTVar1 = &this->CachedModuleFName;
  if ((this->CachedModuleFName).field0_0x0.TypedValue.ComparisonIndex.Value == 0xffffffff) {
    pFVar4 = GetModuleNameString(this);
    if ((pFVar4->Data).ArrayNum < 2) {
      local_18.ComparisonIndex.Value = 0;
      local_18.Number = 0;
      if (&local_18 != (FName *)pTVar1) {
        pTVar1->field0_0x0 = (TOptional<FName>_u_0)0x0;
      }
    }
    else {
      ::FName::FName(&local_10.TypedValue,(wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      if ((&local_10 != &pTVar1->field0_0x0) &&
         ((pTVar1->field0_0x0).TypedValue = (FName)local_10,
         local_10.TypedValue.ComparisonIndex.Value.Value == 0xffffffff)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x171,
                           L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FName *)(*pcVar2)();
          return pFVar5;
        }
      }
    }
    if ((pTVar1->field0_0x0).TypedValue.ComparisonIndex.Value == 0xffffffff) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FName *)(*pcVar2)();
        return pFVar5;
      }
    }
  }
  return (FName *)pTVar1;
}

// GetModuleName @ 14a310d10

TStringView<wchar_t> * __thiscall
FRigHierarchyModulePath::GetModuleName
          (FRigHierarchyModulePath *this,TStringView<wchar_t> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  
  iVar3 = (this->ModulePath).Data.ArrayNum;
  iVar5 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar5 = 0;
  }
  if (2 < iVar5) {
    pFVar1 = (this->ModulePath).Data.AllocatorInstance.Data;
    pFVar4 = pFVar1 + (longlong)iVar3 * 2;
    pFVar2 = pFVar4;
    do {
      if (pFVar2 == pFVar1) goto joined_r0x00014a310d57;
      pFVar2 = pFVar2 + -2;
    } while (*(short *)pFVar2 != 0x2f);
    iVar3 = (int)((longlong)pFVar2 - (longlong)pFVar1 >> 1);
    if (iVar3 != -1) {
      __return_storage_ptr__->DataPtr = (wchar_t *)pFVar1;
      if (iVar3 < iVar5) {
        iVar5 = iVar3;
      }
      iVar3 = 0;
      if (0 < iVar5) {
        iVar3 = iVar5;
      }
      __return_storage_ptr__->Size = iVar3;
      return __return_storage_ptr__;
    }
joined_r0x00014a310d57:
    do {
      if (pFVar4 == pFVar1) goto LAB_14a310d73;
      pFVar4 = pFVar4 + -2;
    } while (*(short *)pFVar4 != 0x3a);
    iVar3 = (int)((longlong)pFVar4 - (longlong)pFVar1 >> 1);
    if (iVar3 != -1) {
      __return_storage_ptr__->DataPtr = (wchar_t *)pFVar1;
      if (iVar3 < iVar5) {
        iVar5 = iVar3;
      }
      iVar3 = 0;
      if (0 < iVar5) {
        iVar3 = iVar5;
      }
      __return_storage_ptr__->Size = iVar3;
      return __return_storage_ptr__;
    }
  }
LAB_14a310d73:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`FRigHierarchyModulePath::GetModuleName'::__l2::
           _dynamic_atexit_destructor_for__EmptyString__);
    _Init_thread_footer(&::_TSS0);
  }
  __return_storage_ptr__->DataPtr = (wchar_t *)::EmptyString.Data.AllocatorInstance.Data;
  iVar3 = ::EmptyString.Data.ArrayNum + -1;
  if (::EmptyString.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  __return_storage_ptr__->Size = iVar3;
  return __return_storage_ptr__;
}

// GetModuleNameString @ 14a310ee0

FString * __thiscall FRigHierarchyModulePath::GetModuleNameString(FRigHierarchyModulePath *this)

{
  TOptional<FString> *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FString *pFVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FString local_28;
  FString local_18;
  
  this_00 = &this->CachedModuleNameString;
  if (*(int *)((longlong)&(this->CachedModuleNameString).field0_0x0 + 0xc) != -1) {
    return (FString *)this_00;
  }
  iVar3 = (this->ModulePath).Data.ArrayNum;
  iVar8 = 0;
  iVar10 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar10 = iVar8;
  }
  iVar9 = iVar8;
  if (2 < iVar10) {
    FVar7.Data = (this->ModulePath).Data.AllocatorInstance.Data;
    pFVar6 = FVar7.Data + (longlong)iVar3 * 2;
    pFVar4 = pFVar6;
    do {
      if (pFVar4 == FVar7.Data) goto joined_r0x00014a310f39;
      pFVar4 = pFVar4 + -2;
    } while (*(short *)pFVar4 != 0x2f);
    iVar3 = (int)((longlong)pFVar4 - (longlong)FVar7.Data >> 1);
    if (iVar3 != -1) {
      if (iVar3 < iVar10) {
        iVar10 = iVar3;
      }
      if (0 < iVar10) {
        iVar9 = iVar10;
      }
      goto LAB_14a310f92;
    }
joined_r0x00014a310f39:
    do {
      if (pFVar6 == FVar7.Data) goto LAB_14a310f53;
      pFVar6 = pFVar6 + -2;
    } while (*(short *)pFVar6 != 0x3a);
    iVar3 = (int)((longlong)pFVar6 - (longlong)FVar7.Data >> 1);
    if (iVar3 != -1) {
      if (iVar3 < iVar10) {
        iVar10 = iVar3;
      }
      if (0 < iVar10) {
        iVar9 = iVar10;
      }
      goto LAB_14a310f92;
    }
  }
LAB_14a310f53:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`FRigHierarchyModulePath::GetModuleName'::__l2::
           _dynamic_atexit_destructor_for__EmptyString__);
    _Init_thread_footer(&::_TSS0);
  }
  FVar7.Data = ::EmptyString.Data.AllocatorInstance.Data;
  iVar9 = ::EmptyString.Data.ArrayNum + -1;
  if (::EmptyString.Data.ArrayNum == 0) {
    iVar9 = iVar8;
  }
LAB_14a310f92:
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  pFVar5 = ::FString::ConstructFromPtrSize(&local_18,(wchar_t *)FVar7.Data,iVar9);
  if (&local_28 != pFVar5) {
    local_28.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = (pFVar5->Data).ArrayNum;
    local_28.Data.ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  TOptional<FString>::operator=(this_00,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((*(int *)((longlong)&(this->CachedModuleNameString).field0_0x0 + 0xc) == -1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar1)();
    return pFVar5;
  }
  return (FString *)this_00;
}

// GetModulePrefix @ 14a311170

TStringView<wchar_t> * __thiscall
FRigHierarchyModulePath::GetModulePrefix
          (FRigHierarchyModulePath *this,TStringView<wchar_t> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  
  iVar3 = (this->ModulePath).Data.ArrayNum;
  iVar5 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar5 = 0;
  }
  if (2 < iVar5) {
    pFVar1 = (this->ModulePath).Data.AllocatorInstance.Data;
    pFVar2 = pFVar1 + (longlong)iVar3 * 2;
    pFVar4 = pFVar2;
    do {
      if (pFVar4 == pFVar1) goto joined_r0x00014a3111b7;
      pFVar4 = pFVar4 + -2;
    } while (*(short *)pFVar4 != 0x2f);
    iVar3 = (int)((longlong)pFVar4 - (longlong)pFVar1 >> 1);
    if (iVar3 != -1) {
      iVar3 = iVar3 + 1;
      __return_storage_ptr__->DataPtr = (wchar_t *)pFVar1;
      if (iVar3 < iVar5) {
        iVar5 = iVar3;
      }
      iVar3 = 0;
      if (0 < iVar5) {
        iVar3 = iVar5;
      }
      __return_storage_ptr__->Size = iVar3;
      return __return_storage_ptr__;
    }
joined_r0x00014a3111b7:
    do {
      if (pFVar2 == pFVar1) goto LAB_14a3111d3;
      pFVar2 = pFVar2 + -2;
    } while (*(short *)pFVar2 != 0x3a);
    iVar3 = (int)((longlong)pFVar2 - (longlong)pFVar1 >> 1);
    if (iVar3 != -1) {
      iVar3 = iVar3 + 1;
      __return_storage_ptr__->DataPtr = (wchar_t *)pFVar1;
      if (iVar3 < iVar5) {
        iVar5 = iVar3;
      }
      iVar3 = 0;
      if (0 < iVar5) {
        iVar3 = iVar5;
      }
      __return_storage_ptr__->Size = iVar3;
      return __return_storage_ptr__;
    }
  }
LAB_14a3111d3:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`FRigHierarchyModulePath::GetModulePrefix'::__l2::
           _dynamic_atexit_destructor_for__EmptyString__);
    _Init_thread_footer(&::_TSS0);
  }
  __return_storage_ptr__->DataPtr = (wchar_t *)::EmptyString.Data.AllocatorInstance.Data;
  iVar3 = ::EmptyString.Data.ArrayNum + -1;
  if (::EmptyString.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  __return_storage_ptr__->Size = iVar3;
  return __return_storage_ptr__;
}

// GetModulePrefixString @ 14a311360

FString * __thiscall
FRigHierarchyModulePath::GetModulePrefixString
          (FRigHierarchyModulePath *this,FString *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  ForAnyElementType FVar6;
  int iVar7;
  int iVar8;
  FString local_18;
  
  iVar1 = (this->ModulePath).Data.ArrayNum;
  iVar7 = 0;
  iVar8 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar8 = iVar7;
  }
  iVar4 = iVar7;
  if (2 < iVar8) {
    FVar6.Data = (this->ModulePath).Data.AllocatorInstance.Data;
    pFVar2 = FVar6.Data + (longlong)iVar1 * 2;
    pFVar5 = pFVar2;
    do {
      if (pFVar5 == FVar6.Data) goto joined_r0x00014a3113b9;
      pFVar5 = pFVar5 + -2;
    } while (*(short *)pFVar5 != 0x2f);
    iVar1 = (int)((longlong)pFVar5 - (longlong)FVar6.Data >> 1);
    if (iVar1 != -1) {
      iVar1 = iVar1 + 1;
      if (iVar1 < iVar8) {
        iVar8 = iVar1;
      }
      if (0 < iVar8) {
        iVar4 = iVar8;
      }
      goto LAB_14a311410;
    }
joined_r0x00014a3113b9:
    do {
      if (pFVar2 == FVar6.Data) goto LAB_14a3113d3;
      pFVar2 = pFVar2 + -2;
    } while (*(short *)pFVar2 != 0x3a);
    iVar1 = (int)((longlong)pFVar2 - (longlong)FVar6.Data >> 1);
    if (iVar1 != -1) {
      iVar1 = iVar1 + 1;
      if (iVar1 < iVar8) {
        iVar8 = iVar1;
      }
      if (0 < iVar8) {
        iVar4 = iVar8;
      }
      goto LAB_14a311410;
    }
  }
LAB_14a3113d3:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`FRigHierarchyModulePath::GetModulePrefix'::__l2::
           _dynamic_atexit_destructor_for__EmptyString__);
    _Init_thread_footer(&::_TSS0);
  }
  FVar6.Data = ::EmptyString.Data.AllocatorInstance.Data;
  iVar4 = ::EmptyString.Data.ArrayNum + -1;
  if (::EmptyString.Data.ArrayNum == 0) {
    iVar4 = iVar7;
  }
LAB_14a311410:
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar3 = ::FString::ConstructFromPtrSize(&local_18,(wchar_t *)FVar6.Data,iVar4);
  if (__return_storage_ptr__ != pFVar3) {
    pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPathFName @ 14a3138c0

FName __thiscall FRigHierarchyModulePath::GetPathFName(FRigHierarchyModulePath *this)

{
  FName in_RDX;
  
  if ((this->ModulePath).Data.ArrayNum < 2) {
    *(undefined8 *)in_RDX = 0;
    return in_RDX;
  }
  ::FName::FName((FName *)in_RDX,(wchar_t *)(this->ModulePath).Data.AllocatorInstance.Data);
  return in_RDX;
}

// IsValid @ 14a328f30

bool __thiscall FRigHierarchyModulePath::IsValid(FRigHierarchyModulePath *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  iVar1 = (this->ModulePath).Data.ArrayNum;
  if (1 < iVar1) {
    if (2 < iVar1 + -1) {
      pFVar2 = (this->ModulePath).Data.AllocatorInstance.Data;
      pFVar5 = pFVar2 + (longlong)iVar1 * 2;
      do {
        if (pFVar5 == pFVar2) goto LAB_14a328f77;
        pFVar5 = pFVar5 + -2;
      } while (*(short *)pFVar5 != 0x3a);
      iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar2 >> 1);
      if ((0 < iVar4) && (iVar4 < iVar1 + -2)) {
        return true;
      }
    }
LAB_14a328f77:
    bVar3 = UsesModuleNameFormat(this);
    if (bVar3) {
      return true;
    }
  }
  return false;
}

// Join @ 14a329020

FRigHierarchyModulePath * __cdecl
FRigHierarchyModulePath::Join
          (FRigHierarchyModulePath *__return_storage_ptr__,FName *param_1,FName *param_2)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  FString *pFVar4;
  FRigHierarchyModulePath *pFVar5;
  FString local_68;
  FString local_58;
  FRigHierarchyModulePath local_48;
  
  if ((*param_1 == (FName)0x0) || (*param_2 == (FName)0x0)) {
    *(undefined4 *)((longlong)&(__return_storage_ptr__->CachedModuleNameString).field0_0x0 + 0xc) =
         0xffffffff;
    (__return_storage_ptr__->ModulePath).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->ModulePath).Data.ArrayNum = 0;
    (__return_storage_ptr__->ModulePath).Data.ArrayMax = 0;
    (__return_storage_ptr__->CachedModuleNameString).field0_0x0.TypedValue.Data.AllocatorInstance.
    Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->CachedModuleNameString).field0_0x0 + 8) = 0;
    (__return_storage_ptr__->CachedElementNameString).field0_0x0.TypedValue.Data.AllocatorInstance.
    Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->CachedElementNameString).field0_0x0 + 8) = 0
    ;
    (__return_storage_ptr__->CachedModuleFName).field0_0x0.TypedValue.Number = 0;
    (__return_storage_ptr__->CachedElementFName).field0_0x0.TypedValue.Number = 0;
    *(undefined8 *)
     &(__return_storage_ptr__->CachedElementNameString).field0_0x0.TypedValue.Data.ArrayMax =
         0xffffffffffffffff;
    (__return_storage_ptr__->CachedElementFName).field0_0x0.TypedValue.ComparisonIndex.Value =
         0xffffffff;
  }
  else {
    pFVar3 = ::FName::ToString(param_2,&local_58);
    pFVar4 = ::FName::ToString(param_1,&local_68);
    Join(&local_48,pFVar4,pFVar3);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if ((param_1 != (FName *)&local_48.CachedModuleFName) &&
       (local_48.CachedModuleFName.field0_0x0 = *(TOptional<FName>_u_0 *)param_1,
       local_48.CachedModuleFName.field0_0x0._0_4_ == 0xffffffff)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x171,
                         L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FRigHierarchyModulePath *)(*pcVar1)();
        return pFVar5;
      }
    }
    if ((param_2 != (FName *)&local_48.CachedElementFName) &&
       (local_48.CachedElementFName.field0_0x0 = *(TOptional<FName>_u_0 *)param_2,
       local_48.CachedElementFName.field0_0x0._0_4_ == 0xffffffff)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x171,
                         L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FRigHierarchyModulePath *)(*pcVar1)();
        return pFVar5;
      }
    }
    FRigHierarchyModulePath(__return_storage_ptr__,&local_48);
    if ((local_48.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
       (local_48.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_48.CachedElementNameString.field0_0x0.TypedValue.Data.
                            AllocatorInstance.Data);
    }
    if ((local_48.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
       (local_48.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_48.CachedModuleNameString.field0_0x0.TypedValue.Data.
                            AllocatorInstance.Data);
    }
    if (local_48.ModulePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.ModulePath.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// Join @ 14a3291c0

FRigHierarchyModulePath * __cdecl
FRigHierarchyModulePath::Join
          (FRigHierarchyModulePath *__return_storage_ptr__,FString *param_1,FString *param_2)

{
  int *piVar1;
  code *pcVar2;
  TOptional<FName>_u_0 TVar3;
  TOptional<FName>_u_0 TVar4;
  wchar_t *pwVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  size_t sVar8;
  FRigHierarchyModulePath *pFVar9;
  int iVar10;
  FString local_88;
  FString local_78;
  FString local_68;
  ForAnyElementType local_58;
  undefined8 local_50;
  FString local_48;
  FString local_38;
  int iStack_28;
  undefined4 local_24;
  int local_20;
  undefined4 uStack_1c;
  
  pwVar5 = ModuleNameSuffix;
  if (((param_1->Data).ArrayNum < 2) || ((param_2->Data).ArrayNum < 2)) {
    *(undefined4 *)((longlong)&(__return_storage_ptr__->CachedModuleNameString).field0_0x0 + 0xc) =
         0xffffffff;
    (__return_storage_ptr__->ModulePath).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->ModulePath).Data.ArrayNum = 0;
    (__return_storage_ptr__->ModulePath).Data.ArrayMax = 0;
    (__return_storage_ptr__->CachedModuleNameString).field0_0x0.TypedValue.Data.AllocatorInstance.
    Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->CachedModuleNameString).field0_0x0 + 8) = 0;
    (__return_storage_ptr__->CachedElementNameString).field0_0x0.TypedValue.Data.AllocatorInstance.
    Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->CachedElementNameString).field0_0x0 + 8) = 0
    ;
    (__return_storage_ptr__->CachedModuleFName).field0_0x0.TypedValue.Number = 0;
    (__return_storage_ptr__->CachedElementFName).field0_0x0.TypedValue.Number = 0;
    *(undefined8 *)
     &(__return_storage_ptr__->CachedElementNameString).field0_0x0.TypedValue.Data.ArrayMax =
         0xffffffffffffffff;
    (__return_storage_ptr__->CachedElementFName).field0_0x0.TypedValue.ComparisonIndex.Value =
         0xffffffff;
  }
  else {
    iVar10 = 0;
    if (ModuleNameSuffix != (wchar_t *)0x0) {
      sVar8 = wcslen(ModuleNameSuffix);
      iVar10 = (int)sVar8;
    }
    bVar7 = ::FString::EndsWith(param_1,pwVar5,iVar10,IgnoreCase);
    if (bVar7) {
      ::FString::ConcatFF(&local_88,param_1,param_2);
      FVar6.Data = local_88.Data.AllocatorInstance.Data;
      piVar1 = &(__return_storage_ptr__->ModulePath).Data.ArrayMax;
      (__return_storage_ptr__->ModulePath).Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->ModulePath).Data.ArrayNum = local_88.Data.ArrayNum;
      if (local_88.Data.ArrayNum == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_88.Data.ArrayNum,0,(ForAnyElementType *)__return_storage_ptr__,
                   local_88.Data.ArrayNum,piVar1);
        memcpy((__return_storage_ptr__->ModulePath).Data.AllocatorInstance.Data,FVar6.Data,
               (longlong)local_88.Data.ArrayNum * 2);
      }
      (__return_storage_ptr__->CachedModuleNameString).field0_0x0.TypedValue.Data.AllocatorInstance.
      Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)((longlong)&(__return_storage_ptr__->CachedModuleNameString).field0_0x0 + 8) =
           0;
      *(undefined4 *)((longlong)&(__return_storage_ptr__->CachedModuleNameString).field0_0x0 + 0xc)
           = 0xffffffff;
      (__return_storage_ptr__->CachedElementNameString).field0_0x0.TypedValue.Data.AllocatorInstance
      .Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)((longlong)&(__return_storage_ptr__->CachedElementNameString).field0_0x0 + 8) =
           0;
      *(undefined8 *)
       &(__return_storage_ptr__->CachedElementNameString).field0_0x0.TypedValue.Data.ArrayMax =
           0xffffffffffffffff;
      (__return_storage_ptr__->CachedModuleFName).field0_0x0.TypedValue.Number = 0;
      (__return_storage_ptr__->CachedElementFName).field0_0x0.TypedValue.ComparisonIndex.Value =
           0xffffffff;
      (__return_storage_ptr__->CachedElementFName).field0_0x0.TypedValue.Number = 0;
    }
    else {
      ::FString::ConcatFC(&local_68,param_1,ModuleNameSuffix);
      ::FString::ConcatFF(&local_78,&local_68,param_2);
      FVar6.Data = local_78.Data.AllocatorInstance.Data;
      local_58.Data = (FScriptContainerElement *)0x0;
      iVar10 = local_78.Data.ArrayNum;
      local_50 = CONCAT44(local_50._4_4_,iVar10);
      if (iVar10 == 0) {
        local_50 = local_78.Data._8_8_ & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar10,0,&local_58,iVar10,(int *)((longlong)&local_50 + 4));
        memcpy(local_58.Data,FVar6.Data,(longlong)iVar10 * 2);
      }
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = -1;
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = -1;
      iStack_28 = -1;
      local_24 = 0;
      local_20 = -1;
      uStack_1c = 0;
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (param_1 != &local_48) {
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        ::FString::FString(&local_48,param_1);
        if ((local_48.Data.ArrayMax == -1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x171,
                               L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                              ), bVar7)) {
          pcVar2 = (code *)swi(3);
          pFVar9 = (FRigHierarchyModulePath *)(*pcVar2)();
          return pFVar9;
        }
      }
      if (param_2 != &local_38) {
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        ::FString::FString(&local_38,param_2);
        if ((local_38.Data.ArrayMax == -1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x171,
                               L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                              ), bVar7)) {
          pcVar2 = (code *)swi(3);
          pFVar9 = (FRigHierarchyModulePath *)(*pcVar2)();
          return pFVar9;
        }
      }
      iVar10 = local_48.Data.ArrayMax;
      (__return_storage_ptr__->ModulePath).Data.AllocatorInstance.Data = local_58.Data;
      (__return_storage_ptr__->ModulePath).Data.ArrayNum = (int)local_50;
      (__return_storage_ptr__->ModulePath).Data.ArrayMax = local_50._4_4_;
      (__return_storage_ptr__->CachedModuleNameString).field0_0x0.TypedValue.Data.AllocatorInstance.
      Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)((longlong)&(__return_storage_ptr__->CachedModuleNameString).field0_0x0 + 8) =
           0;
      *(undefined4 *)((longlong)&(__return_storage_ptr__->CachedModuleNameString).field0_0x0 + 0xc)
           = 0xffffffff;
      local_58.Data = (FScriptContainerElement *)0x0;
      local_50 = 0;
      if (local_48.Data.ArrayMax != -1) {
        *(FScriptContainerElement **)&(__return_storage_ptr__->CachedModuleNameString).field0_0x0 =
             local_48.Data.AllocatorInstance.Data;
        *(int *)((longlong)&(__return_storage_ptr__->CachedModuleNameString).field0_0x0 + 8) =
             local_48.Data.ArrayNum;
        local_48.Data.ArrayNum = 0;
        local_48.Data.ArrayMax = 0;
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)((longlong)&(__return_storage_ptr__->CachedModuleNameString).field0_0x0 + 0xc) =
             iVar10;
      }
      (__return_storage_ptr__->CachedElementNameString).field0_0x0.TypedValue.Data.AllocatorInstance
      .Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)((longlong)&(__return_storage_ptr__->CachedElementNameString).field0_0x0 + 8) =
           0;
      *(undefined4 *)((longlong)&(__return_storage_ptr__->CachedElementNameString).field0_0x0 + 0xc)
           = 0xffffffff;
      if (local_38.Data.ArrayMax != -1) {
        *(FScriptContainerElement **)&(__return_storage_ptr__->CachedElementNameString).field0_0x0 =
             local_38.Data.AllocatorInstance.Data;
        *(int *)((longlong)&(__return_storage_ptr__->CachedElementNameString).field0_0x0 + 0xc) =
             local_38.Data.ArrayMax;
        *(int *)((longlong)&(__return_storage_ptr__->CachedElementNameString).field0_0x0 + 8) =
             local_38.Data.ArrayNum;
        local_38.Data.ArrayNum = 0;
        local_38.Data.ArrayMax = 0;
        local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      (__return_storage_ptr__->CachedModuleFName).field0_0x0.TypedValue.ComparisonIndex.Value =
           0xffffffff;
      (__return_storage_ptr__->CachedModuleFName).field0_0x0.TypedValue.Number = 0;
      if (iStack_28 != -1) {
        TVar3.TypedValue.Number = local_24;
        TVar3.TypedValue.ComparisonIndex.Value = (FNameEntryId)(FNameEntryId)iStack_28;
        (__return_storage_ptr__->CachedModuleFName).field0_0x0 = TVar3;
      }
      (__return_storage_ptr__->CachedElementFName).field0_0x0.TypedValue.ComparisonIndex.Value =
           0xffffffff;
      (__return_storage_ptr__->CachedElementFName).field0_0x0.TypedValue.Number = 0;
      if (local_20 != -1) {
        TVar4.TypedValue.Number = uStack_1c;
        TVar4.TypedValue.ComparisonIndex.Value = (FNameEntryId)(FNameEntryId)local_20;
        (__return_storage_ptr__->CachedElementFName).field0_0x0 = TVar4;
      }
      if ((local_38.Data.ArrayMax != -1) &&
         (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      local_88.Data.AllocatorInstance.Data = local_58.Data;
      if ((local_48.Data.ArrayMax != -1) &&
         (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
        local_88.Data.AllocatorInstance.Data = local_58.Data;
      }
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// Split @ 14a3583a0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
FRigHierarchyModulePath::Split
          (FRigHierarchyModulePath *this,TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2
          )

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FString *pFVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  undefined4 uStack_c;
  
  if ((*(int *)((longlong)&(this->CachedModuleNameString).field0_0x0 + 0xc) != -1) &&
     (*(int *)((longlong)&(this->CachedElementNameString).field0_0x0 + 0xc) != -1)) {
    if (param_1 != (TStringView<wchar_t> *)0x0) {
      pFVar3 = TOptional<FString>::GetValue(&this->CachedModuleNameString);
      iVar6 = (pFVar3->Data).ArrayNum;
      iVar2 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar2 = 0;
      }
      param_1->DataPtr = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      *(ulonglong *)&param_1->Size = CONCAT44(uStack_c,iVar2);
    }
    if (param_2 == (TStringView<wchar_t> *)0x0) {
      return true;
    }
    pFVar3 = TOptional<FString>::GetValue(&this->CachedElementNameString);
    iVar6 = (pFVar3->Data).ArrayNum;
    iVar2 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar2 = 0;
    }
    param_2->DataPtr = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    *(ulonglong *)&param_2->Size = CONCAT44(uStack_c,iVar2);
    return true;
  }
  iVar2 = (this->ModulePath).Data.ArrayNum;
  iVar6 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar6 = 0;
  }
  if (2 < iVar6) {
    pFVar1 = (this->ModulePath).Data.AllocatorInstance.Data;
    pFVar4 = pFVar1 + (longlong)iVar2 * 2;
    pFVar8 = pFVar4;
    if (pFVar4 == pFVar1) {
LAB_14a3584c6:
      if (pFVar4 == pFVar1) {
        return false;
      }
    }
    else {
      do {
        pFVar8 = pFVar8 + -2;
        if (*(short *)pFVar8 == 0x2f) {
          iVar2 = (int)((longlong)pFVar8 - (longlong)pFVar1 >> 1);
          if (iVar2 == -1) goto LAB_14a3584c6;
          if (param_1 != (TStringView<wchar_t> *)0x0) {
            if (iVar2 < iVar6) {
              iVar6 = iVar2;
            }
            iVar5 = 0;
            if (0 < iVar6) {
              iVar5 = iVar6;
            }
            param_1->DataPtr = (wchar_t *)pFVar1;
            *(ulonglong *)&param_1->Size = CONCAT44(uStack_c,iVar5);
          }
          if (param_2 == (TStringView<wchar_t> *)0x0) {
            return true;
          }
          iVar5 = (this->ModulePath).Data.ArrayNum;
          iVar6 = iVar5 + -1;
          if (iVar5 == 0) {
            iVar6 = 0;
          }
          goto LAB_14a35853b;
        }
      } while (pFVar8 != pFVar1);
    }
    do {
      pFVar4 = pFVar4 + -2;
      if (*(short *)pFVar4 == 0x3a) {
        iVar2 = (int)((longlong)pFVar4 - (longlong)pFVar1 >> 1);
        if (iVar2 == -1) {
          return false;
        }
        if (param_1 != (TStringView<wchar_t> *)0x0) {
          if (iVar2 < iVar6) {
            iVar6 = iVar2;
          }
          iVar5 = 0;
          if (0 < iVar6) {
            iVar5 = iVar6;
          }
          param_1->DataPtr = (wchar_t *)pFVar1;
          *(ulonglong *)&param_1->Size = CONCAT44(uStack_c,iVar5);
        }
        if (param_2 == (TStringView<wchar_t> *)0x0) {
          return true;
        }
        iVar5 = (this->ModulePath).Data.ArrayNum;
        iVar6 = iVar5 + -1;
        if (iVar5 == 0) {
          iVar6 = 0;
        }
LAB_14a35853b:
        iVar5 = iVar2 + 1;
        bVar9 = iVar5 < 0;
        if (bVar9) {
          iVar5 = 0;
        }
        iVar7 = 0x7fffffff;
        if (bVar9) {
          iVar7 = iVar2 + -0x80000000;
        }
        if (iVar6 < iVar5) {
          iVar5 = iVar6;
        }
        iVar2 = iVar6 - iVar5;
        if (iVar7 < iVar6 - iVar5) {
          iVar2 = iVar7;
        }
        iVar6 = 0;
        if (0 < iVar2) {
          iVar6 = iVar2;
        }
        param_2->DataPtr =
             (wchar_t *)((this->ModulePath).Data.AllocatorInstance.Data + (longlong)iVar5 * 2);
        *(ulonglong *)&param_2->Size = CONCAT44(uStack_c,iVar6);
        return true;
      }
    } while (pFVar4 != pFVar1);
  }
  return false;
}

// Split @ 14a358590

bool __thiscall
FRigHierarchyModulePath::Split(FRigHierarchyModulePath *this,FString *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FString *pFVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iStack_30;
  
  if ((*(int *)((longlong)&(this->CachedModuleNameString).field0_0x0 + 0xc) == -1) ||
     (*(int *)((longlong)&(this->CachedElementNameString).field0_0x0 + 0xc) == -1)) {
    iVar8 = (this->ModulePath).Data.ArrayNum;
    iVar7 = 0;
    iVar5 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar5 = iVar7;
    }
    if (iVar5 < 3) {
      return false;
    }
    pFVar1 = (this->ModulePath).Data.AllocatorInstance.Data;
    pFVar4 = pFVar1 + (longlong)iVar8 * 2;
    iVar5 = 0;
    do {
      if (pFVar4 == pFVar1) goto LAB_14a358642;
      pFVar4 = pFVar4 + -2;
    } while (*(wchar_t *)pFVar4 != L'/');
    iVar2 = (int)((longlong)pFVar4 - (longlong)pFVar1 >> 1);
    if (iVar2 == -1) {
LAB_14a358642:
      pFVar4 = pFVar1 + (longlong)(this->ModulePath).Data.ArrayNum * 2;
      do {
        if (pFVar4 == pFVar1) {
          return false;
        }
        pFVar4 = pFVar4 + -2;
      } while (*(wchar_t *)pFVar4 != L':');
      iVar2 = (int)((longlong)pFVar4 - (longlong)pFVar1 >> 1);
      if (iVar2 == -1) {
        return false;
      }
      iVar6 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar6 = iVar5;
      }
      if (iVar2 < iVar6) {
        iVar6 = iVar2;
      }
      iStack_30 = iVar5;
      if (0 < iVar6) {
        iStack_30 = iVar6;
      }
      iVar6 = iVar2 + 1;
      iVar5 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar5 = iVar7;
      }
      iVar8 = iVar6;
      if (iVar6 < 0) {
        iVar8 = iVar7;
      }
      iVar9 = 0x7fffffff;
      if (iVar6 < 0) {
        iVar9 = iVar2 + -0x80000000;
      }
      if (iVar5 < iVar8) {
        iVar8 = iVar5;
      }
      iVar2 = iVar5 - iVar8;
      if (iVar9 < iVar5 - iVar8) {
        iVar2 = iVar9;
      }
      if (0 < iVar2) {
        iVar7 = iVar2;
      }
    }
    else {
      iVar6 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar6 = iVar7;
      }
      if (iVar2 < iVar6) {
        iVar6 = iVar2;
      }
      iStack_30 = iVar7;
      if (0 < iVar6) {
        iStack_30 = iVar6;
      }
      iVar6 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar6 = iVar5;
      }
      iVar5 = iVar2 + 1;
      iVar8 = iVar5;
      if (iVar5 < 0) {
        iVar8 = iVar7;
      }
      iVar7 = 0x7fffffff;
      if (iVar5 < 0) {
        iVar7 = iVar2 + -0x80000000;
      }
      if (iVar6 < iVar8) {
        iVar8 = iVar6;
      }
      iVar5 = iVar6 - iVar8;
      if (iVar7 < iVar6 - iVar8) {
        iVar5 = iVar7;
      }
      iVar7 = 0;
      if (0 < iVar5) {
        iVar7 = iVar5;
      }
    }
    if (param_1 != (FString *)0x0) {
      ::FString::AssignRange(param_1,(wchar_t *)pFVar1,iStack_30);
    }
    if (param_2 != (FString *)0x0) {
      ::FString::AssignRange(param_2,(wchar_t *)(pFVar1 + (longlong)iVar8 * 2),iVar7);
    }
  }
  else {
    if (param_1 != (FString *)0x0) {
      iVar7 = *(int *)((longlong)&(this->CachedModuleNameString).field0_0x0 + 8);
      iVar8 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar8 = 0;
      }
      ::FString::AssignRange
                (param_1,(wchar_t *)
                         (this->CachedModuleNameString).field0_0x0.TypedValue.Data.AllocatorInstance
                         .Data,iVar8);
    }
    if (param_2 != (FString *)0x0) {
      pFVar3 = TOptional<FString>::GetValue(&this->CachedElementNameString);
      iVar7 = (pFVar3->Data).ArrayNum;
      iVar8 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar8 = 0;
      }
      ::FString::AssignRange(param_2,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,iVar8);
      return true;
    }
  }
  return true;
}

// UsesModuleNameFormat @ 14a35e950

bool __thiscall FRigHierarchyModulePath::UsesModuleNameFormat(FRigHierarchyModulePath *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  
  iVar2 = (this->ModulePath).Data.ArrayNum;
  iVar4 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  if (2 < iVar4) {
    pFVar1 = (this->ModulePath).Data.AllocatorInstance.Data;
    pFVar3 = pFVar1 + (longlong)iVar2 * 2;
    do {
      if (pFVar3 == pFVar1) {
        return false;
      }
      pFVar3 = pFVar3 + -2;
    } while (*(short *)pFVar3 != 0x2f);
    iVar2 = (int)((longlong)pFVar3 - (longlong)pFVar1 >> 1);
    if (((iVar2 != -1) && (0 < iVar2)) && (iVar2 < iVar4 + -1)) {
      return true;
    }
  }
  return false;
}

// UsesNameSpaceFormat @ 14a35e9b0

bool __thiscall FRigHierarchyModulePath::UsesNameSpaceFormat(FRigHierarchyModulePath *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  
  iVar2 = (this->ModulePath).Data.ArrayNum;
  iVar4 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  if (2 < iVar4) {
    pFVar1 = (this->ModulePath).Data.AllocatorInstance.Data;
    pFVar3 = pFVar1 + (longlong)iVar2 * 2;
    do {
      if (pFVar3 == pFVar1) {
        return false;
      }
      pFVar3 = pFVar3 + -2;
    } while (*(short *)pFVar3 != 0x3a);
    iVar2 = (int)((longlong)pFVar3 - (longlong)pFVar1 >> 1);
    if (((iVar2 != -1) && (0 < iVar2)) && (iVar2 < iVar4 + -1)) {
      return true;
    }
  }
  return false;
}

