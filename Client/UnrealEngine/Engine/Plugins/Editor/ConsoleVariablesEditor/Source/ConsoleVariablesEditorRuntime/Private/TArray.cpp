// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ConsoleVariablesEditorRuntime
// Functions: 1

// operator= @ 14de36e30

TArray<FConsoleVariablesEditorAssetSaveData,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FConsoleVariablesEditorAssetSaveData,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FConsoleVariablesEditorAssetSaveData,TSizedDefaultAllocator<32>_> *this,
          TArray<FConsoleVariablesEditorAssetSaveData,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FConsoleVariablesEditorAssetSaveData *pFVar3;
  
  if (this != param_1) {
    DestructItems<FConsoleVariablesEditorAssetSaveData,int>
              ((FConsoleVariablesEditorAssetSaveData *)(this->AllocatorInstance).Data,this->ArrayNum
              );
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FConsoleVariablesEditorAssetSaveData *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FConsoleVariablesEditorAssetSaveData,FConsoleVariablesEditorAssetSaveData,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

