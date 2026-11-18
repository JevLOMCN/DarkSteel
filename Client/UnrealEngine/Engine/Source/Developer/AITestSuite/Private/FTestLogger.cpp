// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 1

// Log @ 1470572e0

void __thiscall FTestLogger<int>::Log(FTestLogger<int> *this,int *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FAutomationTestBase *this_00;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  uint uVar10;
  FString local_28;
  FString local_18;
  
  pTVar1 = &this->LoggedValues;
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar4 <= param_1) && (param_1 < pFVar4 + (longlong)(this->LoggedValues).ArrayMax * 4)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (this->LoggedValues).ArrayNum;
  piVar2 = &(this->LoggedValues).ArrayMax;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->LoggedValues).ArrayNum = iVar7 + 1;
  *(int *)((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 4) = *param_1;
  iVar7 = (this->ExpectedValues).ArrayNum;
  if ((0 < iVar7) && (this_00 = this->TestRunner, this_00 != (FAutomationTestBase *)0x0)) {
    iVar3 = (this->LoggedValues).ArrayNum;
    if (iVar7 < iVar3) {
      ::FString::FString(&local_18,"Logged more values than expected!");
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar8.Data = local_18.Data.AllocatorInstance.Data;
      }
      FAutomationTestBase::TestTrue(this_00,(wchar_t *)FVar8.Data,false);
      local_28.Data.AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    }
    else {
      uVar10 = iVar3 - 1;
      uVar9 = 0;
      if ((int)uVar10 < iVar7) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar7 = (this->LoggedValues).ArrayNum;
      uVar9 = iVar7 - 1;
      iVar3 = *(int *)((this->ExpectedValues).AllocatorInstance.Data + (longlong)(int)uVar10 * 4);
      uVar10 = 0;
      if ((int)uVar9 < iVar7) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar7 = *(int *)((pTVar1->AllocatorInstance).Data +
                      (longlong)(this->LoggedValues).ArrayNum * 4 + -4);
      ::FString::FString(&local_28,"Logged value different then expected!");
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        FVar8.Data = local_28.Data.AllocatorInstance.Data;
      }
      FAutomationTestBase::TestEqual(this_00,(wchar_t *)FVar8.Data,iVar7,iVar3);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

