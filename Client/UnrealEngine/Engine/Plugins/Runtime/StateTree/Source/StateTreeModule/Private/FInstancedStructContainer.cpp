// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 1

// operator[] @ 14d4b4570

FStructView * __thiscall
FInstancedStructContainer::operator[]
          (FInstancedStructContainer *this,FStructView *__return_storage_ptr__,int param_1)

{
  uchar *puVar1;
  code *pcVar2;
  bool bVar3;
  FStructView *pFVar4;
  longlong lVar5;
  
  if (((this->NumItems < 1) || (param_1 < 0)) || (this->NumItems <= param_1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid() && IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                       ,0x84,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FStructView *)(*pcVar2)();
      return pFVar4;
    }
  }
  if ((this->NumItems < 1) || (this->NumItems <= param_1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumItems > 0 && Index < NumItems",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                       ,0x100,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FStructView *)(*pcVar2)();
      return pFVar4;
    }
  }
  puVar1 = this->Memory;
  lVar5 = (longlong)(this->AllocatedSize + param_1 * -0x10);
  __return_storage_ptr__->ScriptStruct = *(UScriptStruct **)(puVar1 + lVar5 + -0x10);
  __return_storage_ptr__->StructMemory = puVar1 + *(int *)(puVar1 + lVar5 + -8);
  return __return_storage_ptr__;
}

