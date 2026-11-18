// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// ToAutomationEvent @ 141837c00

FAutomationEvent * __thiscall
FAutomationScreenshotCompareResults::ToAutomationEvent
          (FAutomationScreenshotCompareResults *this,FAutomationEvent *__return_storage_ptr__)

{
  FString *pFVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ForAnyElementType FVar7;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  ::FString::FString(&local_38,L"");
  FVar7.Data = local_38.Data.AllocatorInstance.Data;
  pFVar1 = &__return_storage_ptr__->Message;
  piVar2 = &(__return_storage_ptr__->Message).Data.ArrayMax;
  __return_storage_ptr__->Type = Info;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Message).Data.ArrayNum = local_38.Data.ArrayNum;
  if (local_38.Data.ArrayNum == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)pFVar1,local_38.Data.ArrayNum,
               piVar2);
    memcpy((pFVar1->Data).AllocatorInstance.Data,FVar7.Data,(longlong)local_38.Data.ArrayNum * 2);
  }
  (__return_storage_ptr__->Context).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Context).Data.ArrayNum = 0;
  (__return_storage_ptr__->Context).Data.ArrayMax = 0;
  (__return_storage_ptr__->Artifact).A = 0;
  (__return_storage_ptr__->Artifact).B = 0;
  (__return_storage_ptr__->Artifact).C = 0;
  (__return_storage_ptr__->Artifact).D = 0;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (this->bWasNew == false) {
    if (this->bWasSimilar == false) {
      __return_storage_ptr__->Type = Error;
      if ((this->ErrorMessage).Data.ArrayNum < 2) {
        ::FString::PrintfImpl
                  (&local_58,
                   L"Screenshot \'%s\' test failed, Screenshots were different!  Global Difference = %f, Max Local Difference = %f"
                  );
        FVar7.Data = local_58.Data.AllocatorInstance.Data;
        if (pFVar1 != &local_58) {
          pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          (pFVar1->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
          (__return_storage_ptr__->Message).Data.ArrayNum = local_58.Data.ArrayNum;
          *piVar2 = local_58.Data.ArrayMax;
          local_58.Data.ArrayNum = 0;
          local_58.Data.ArrayMax = 0;
          local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FVar7.Data = (FScriptContainerElement *)0x0;
        }
      }
      else {
        ::FString::PrintfImpl(&local_48,L"Screenshot \'%s\' test failed; Error = %s");
        FVar7.Data = local_48.Data.AllocatorInstance.Data;
        if (pFVar1 != &local_48) {
          pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          (pFVar1->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
          (__return_storage_ptr__->Message).Data.ArrayNum = local_48.Data.ArrayNum;
          *piVar2 = local_48.Data.ArrayMax;
          local_48.Data.ArrayNum = 0;
          local_48.Data.ArrayMax = 0;
          local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FVar7.Data = (FScriptContainerElement *)0x0;
        }
      }
    }
    else {
      __return_storage_ptr__->Type = Info;
      ::FString::PrintfImpl
                (&local_68,
                 L"Screenshot \'%s\' was similar!  Global Difference = %f, Max Local Difference = %f"
                );
      FVar7.Data = local_68.Data.AllocatorInstance.Data;
      if (pFVar1 != &local_68) {
        pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (pFVar1->Data).AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
        (__return_storage_ptr__->Message).Data.ArrayNum = local_68.Data.ArrayNum;
        *piVar2 = local_68.Data.ArrayMax;
        local_68.Data.ArrayNum = 0;
        local_68.Data.ArrayMax = 0;
        local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FVar7.Data = (FScriptContainerElement *)0x0;
      }
    }
  }
  else {
    __return_storage_ptr__->Type = Warning;
    ::FString::PrintfImpl
              (&local_78,
               L"New Screenshot \'%s\' was discovered!  Please add a ground truth version of it.");
    FVar7.Data = local_78.Data.AllocatorInstance.Data;
    if (pFVar1 != &local_78) {
      pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Message).Data.ArrayNum = local_78.Data.ArrayNum;
      *piVar2 = local_78.Data.ArrayMax;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar7.Data = (FScriptContainerElement *)0x0;
    }
  }
  if (FVar7.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar7.Data);
  }
  uVar4 = (this->UniqueId).B;
  uVar5 = (this->UniqueId).C;
  uVar6 = (this->UniqueId).D;
  (__return_storage_ptr__->Artifact).A = (this->UniqueId).A;
  (__return_storage_ptr__->Artifact).B = uVar4;
  (__return_storage_ptr__->Artifact).C = uVar5;
  (__return_storage_ptr__->Artifact).D = uVar6;
  return __return_storage_ptr__;
}

