// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Sockets
// Functions: 1

// Append<unsigned_char,TSizedDefaultAllocator<32>_> @ 1431093d0

void __thiscall
TArray<unsigned_char,TSizedDefaultAllocator<32>_>::Append<unsigned_char,TSizedDefaultAllocator<32>_>
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this == param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    memcpy((this->AllocatorInstance).Data + iVar4,(param_1->AllocatorInstance).Data,(longlong)iVar1)
    ;
  }
  return;
}

