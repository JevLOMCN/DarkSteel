// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 1

// operator= @ 1423c7e00

FDragDropOLEData * __thiscall
FDragDropOLEData::operator=(FDragDropOLEData *this,FDragDropOLEData *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    iVar2 = (this->OperationText).Data.ArrayMax;
    piVar1 = &(this->OperationText).Data.ArrayMax;
    _Src = (param_1->OperationText).Data.AllocatorInstance.Data;
    iVar3 = (param_1->OperationText).Data.ArrayNum;
    (this->OperationText).Data.ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar3,iVar2,(ForAnyElementType *)this,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((this->OperationText).Data.AllocatorInstance.Data,_Src,(longlong)iVar3 * 2);
      }
    }
  }
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            (&this->OperationFilenames,&param_1->OperationFilenames);
  this->Type = param_1->Type;
  return this;
}

