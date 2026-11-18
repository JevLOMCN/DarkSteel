// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 1

// Append<FText,TSizedDefaultAllocator<32>_> @ 146af6930

void __thiscall
TArray<FText,TSizedDefaultAllocator<32>_>::Append<FText,TSizedDefaultAllocator<32>_>
          (TArray<FText,TSizedDefaultAllocator<32>_> *this,
          TArray<FText,TSizedDefaultAllocator<32>_> *param_1)

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
                      (0x10,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    ConstructItems<FText,FText,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x10,
               (FText *)(param_1->AllocatorInstance).Data,iVar1);
  }
  return;
}

