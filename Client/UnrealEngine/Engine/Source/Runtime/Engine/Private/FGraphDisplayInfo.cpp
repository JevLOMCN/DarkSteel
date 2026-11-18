// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// GetNotesAsString @ 147b693b0

FString * __thiscall
FGraphDisplayInfo::GetNotesAsString(FGraphDisplayInfo *this,FString *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FString *pFVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar10;
  ulonglong uVar9;
  
  uVar7 = 0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if (0 < (this->Notes).ArrayNum) {
    ::FString::operator=(__return_storage_ptr__,L"(");
    uVar9 = uVar7;
    if (0 < (this->Notes).ArrayNum) {
      do {
        uVar8 = (uint)uVar9;
        if (0 < (int)uVar8) {
          ::FString::AppendChars(__return_storage_ptr__,L", ",2);
        }
        uVar5 = 0;
        if ((int)uVar8 < (this->Notes).ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar6 = (FString *)(*pcVar3)();
          return pFVar6;
        }
        pFVar2 = (this->Notes).AllocatorInstance.Data;
        iVar1 = *(int *)(pFVar2 + uVar7 + 8);
        iVar10 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar10 = 0;
        }
        ::FString::AppendChars(__return_storage_ptr__,*(wchar_t **)(pFVar2 + uVar7),iVar10);
        uVar7 = uVar7 + 0x10;
        uVar9 = (ulonglong)(uVar8 + 1);
      } while ((int)(uVar8 + 1) < (this->Notes).ArrayNum);
    }
    ::FString::AppendChars(__return_storage_ptr__,L")",1);
  }
  return __return_storage_ptr__;
}

