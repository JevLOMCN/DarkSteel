// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 1

// operator-> @ 14422bb20

TArray<unsigned_char,TSizedDefaultAllocator<64>_> * __thiscall
TSharedPtr<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,1>::operator->
          (TSharedPtr<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,1> *this)

{
  code *pcVar1;
  bool bVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> *pTVar3;
  
  if (this->Object != (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)(*pcVar1)();
    return pTVar3;
  }
  return this->Object;
}

