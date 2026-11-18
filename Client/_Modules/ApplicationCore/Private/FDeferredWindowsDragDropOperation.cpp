// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 1

// FDeferredWindowsDragDropOperation @ 1423c1960

FDeferredWindowsDragDropOperation * __thiscall
FDeferredWindowsDragDropOperation::FDeferredWindowsDragDropOperation
          (FDeferredWindowsDragDropOperation *this,FDeferredWindowsDragDropOperation *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  this->OperationType = param_1->OperationType;
  this->HWnd = param_1->HWnd;
  ::FString::FString(&(this->OLEData).OperationText,&(param_1->OLEData).OperationText);
  pTVar1 = &(this->OLEData).OperationFilenames;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->OLEData).OperationFilenames.ArrayMax;
  iVar3 = (param_1->OLEData).OperationFilenames.ArrayNum;
  pFVar4 = (param_1->OLEData).OperationFilenames.AllocatorInstance.Data;
  (this->OLEData).OperationFilenames.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,(FString *)pFVar4,iVar3);
  }
  (this->OLEData).Type = (param_1->OLEData).Type;
  this->KeyState = param_1->KeyState;
  this->CursorPosition = param_1->CursorPosition;
  return this;
}

