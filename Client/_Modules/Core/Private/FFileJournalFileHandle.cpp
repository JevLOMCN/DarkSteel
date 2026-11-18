// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// ToString @ 141664330

FString * __thiscall
FFileJournalFileHandle::ToString(FFileJournalFileHandle *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FString *pFVar7;
  uint uVar8;
  undefined4 uStack_1c;
  TArrayView<unsigned_char_const_,int> local_18;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayNum;
  piVar2 = &(__return_storage_ptr__->Data).ArrayMax;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x2b,(ForAnyElementType *)__return_storage_ptr__,piVar1,piVar2);
  pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = 0x14;
  *(undefined4 *)pFVar3 = 0x780030;
  local_18.DataPtr = this->Bytes;
  UE::String::BytesToHexLower(&local_18,(wchar_t *)(pFVar3 + 4));
  uVar8 = *piVar1 - 1;
  uVar6 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FString *)(*pcVar4)();
      return pFVar7;
    }
  }
  *(undefined2 *)
   ((__return_storage_ptr__->Data).AllocatorInstance.Data + (longlong)*piVar1 * 2 + -2) = 0;
  return __return_storage_ptr__;
}

