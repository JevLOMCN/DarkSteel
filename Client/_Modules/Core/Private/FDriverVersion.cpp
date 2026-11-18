// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// operator== @ 141bed310

bool __thiscall FDriverVersion::operator==(FDriverVersion *this,FDriverVersion *param_1)

{
  bool bVar1;
  
  bVar1 = operator>(this,param_1);
  if (!bVar1) {
    bVar1 = operator>(param_1,this);
    if (!bVar1) {
      return true;
    }
  }
  return false;
}

// operator> @ 141bed6a0

bool __thiscall FDriverVersion::operator>(FDriverVersion *this,FDriverVersion *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  
  uVar6 = 0;
  if (0 < (this->Values).ArrayNum) {
    lVar7 = 0;
    do {
      uVar8 = ~uVar6 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar6 < (param_1->Values).ArrayNum) {
        uVar5 = uVar8;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar1 = (param_1->Values).AllocatorInstance.Data;
      uVar5 = 0;
      if ((int)uVar6 < (this->Values).ArrayNum) {
        uVar5 = uVar8;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (*(uint *)(pFVar1 + lVar7 * 4) <
          *(uint *)((this->Values).AllocatorInstance.Data + lVar7 * 4)) {
        return true;
      }
      uVar5 = 0;
      if ((int)uVar6 < (param_1->Values).ArrayNum) {
        uVar5 = uVar8;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar1 = (param_1->Values).AllocatorInstance.Data;
      uVar5 = 0;
      if ((int)uVar6 < (this->Values).ArrayNum) {
        uVar5 = uVar8;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (*(uint *)((this->Values).AllocatorInstance.Data + lVar7 * 4) <
          *(uint *)(pFVar1 + lVar7 * 4)) {
        return false;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 1;
    } while ((int)uVar6 < (this->Values).ArrayNum);
  }
  return false;
}

// GetVersionValue @ 141c021e0

uint __thiscall FDriverVersion::GetVersionValue(FDriverVersion *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if ((int)param_1 < (this->Values).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return *(uint *)((this->Values).AllocatorInstance.Data + (longlong)(int)param_1 * 4);
}

// Parse @ 141c09290

void __thiscall FDriverVersion::Parse(FDriverVersion *this,FString *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForAnyElementType FVar6;
  longlong lVar7;
  int local_58;
  int local_54;
  FString local_50;
  FString local_40;
  FString local_30;
  
  piVar1 = &(this->Values).ArrayMax;
  (this->Values).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)this,0,piVar1);
  }
  local_50.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar7 = (longlong)local_50.Data.ArrayNum;
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_50.Data.ArrayNum == 0) {
    local_50.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_50.Data.ArrayNum,0,(ForAnyElementType *)&local_50,local_50.Data.ArrayNum,
               &local_50.Data.ArrayMax);
    memcpy(local_50.Data.AllocatorInstance.Data,pFVar2,lVar7 * 2);
  }
  local_40.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.Data.ArrayNum = 0;
  local_40.Data.ArrayMax = 0;
  while( true ) {
    ::FString::FString(&local_30,L".");
    bVar4 = ::FString::Split(&local_50,&local_30,&local_40,&local_50);
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    if (!bVar4) break;
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_40.Data.ArrayNum != 0) {
      FVar6.Data = local_40.Data.AllocatorInstance.Data;
    }
    local_58 = _wtoi((wchar_t *)FVar6.Data);
    pFVar2 = (this->Values).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)&local_58) &&
       ((FScriptContainerElement *)&local_58 < pFVar2 + (longlong)*piVar1 * 4)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (this->Values).ArrayNum;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)this,piVar1);
    }
    (this->Values).ArrayNum = iVar5 + 1;
    *(int *)((this->Values).AllocatorInstance.Data + (longlong)iVar5 * 4) = local_58;
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_50.Data.ArrayNum != 0) {
    FVar6.Data = local_50.Data.AllocatorInstance.Data;
  }
  local_54 = _wtoi((wchar_t *)FVar6.Data);
  pFVar2 = (this->Values).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_54) &&
     ((FScriptContainerElement *)&local_54 < pFVar2 + (longlong)*piVar1 * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->Values).ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)this,piVar1);
  }
  (this->Values).ArrayNum = iVar5 + 1;
  *(int *)((this->Values).AllocatorInstance.Data + (longlong)iVar5 * 4) = local_54;
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  return;
}

