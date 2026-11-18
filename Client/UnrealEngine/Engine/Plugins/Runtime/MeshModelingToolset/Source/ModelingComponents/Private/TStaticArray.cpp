// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 2

// TStaticArray<FString,3,4294967295> @ 14cb60c80

TStaticArray<FString,3,4294967295> * __thiscall
TStaticArray<FString,3,4294967295>::TStaticArray<FString,3,4294967295>
          (TStaticArray<FString,3,4294967295> *this,TStaticArray<FString,3,4294967295> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  piVar1 = &this->Elements[0].Data.ArrayMax;
  this->Elements[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = param_1->Elements[0].Data.ArrayNum;
  pFVar3 = param_1->Elements[0].Data.AllocatorInstance.Data;
  this->Elements[0].Data.ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
    memcpy(this->Elements[0].Data.AllocatorInstance.Data,pFVar3,(longlong)iVar2 * 2);
  }
  this->Elements[1].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = param_1->Elements[1].Data.ArrayNum;
  piVar1 = &this->Elements[1].Data.ArrayMax;
  pFVar3 = param_1->Elements[1].Data.AllocatorInstance.Data;
  this->Elements[1].Data.ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar2,0,(ForAnyElementType *)(this->Elements + 1),iVar2,piVar1);
    memcpy(this->Elements[1].Data.AllocatorInstance.Data,pFVar3,(longlong)iVar2 * 2);
  }
  this->Elements[2].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = param_1->Elements[2].Data.ArrayNum;
  piVar1 = &this->Elements[2].Data.ArrayMax;
  pFVar3 = param_1->Elements[2].Data.AllocatorInstance.Data;
  this->Elements[2].Data.ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar2,0,(ForAnyElementType *)(this->Elements + 2),iVar2,piVar1);
    memcpy(this->Elements[2].Data.AllocatorInstance.Data,pFVar3,(longlong)iVar2 * 2);
  }
  return this;
}

// operator= @ 14cb65480

TStaticArray<FString,3,4294967295> * __thiscall
TStaticArray<FString,3,4294967295>::operator=
          (TStaticArray<FString,3,4294967295> *this,TStaticArray<FString,3,4294967295> *param_1)

{
  int *piVar1;
  FString *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  if (this != param_1) {
    iVar3 = param_1->Elements[0].Data.ArrayNum;
    piVar1 = &this->Elements[0].Data.ArrayMax;
    pFVar5 = param_1->Elements[0].Data.AllocatorInstance.Data;
    iVar4 = *piVar1;
    this->Elements[0].Data.ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar4 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar3,iVar4,(ForAnyElementType *)this,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy(this->Elements[0].Data.AllocatorInstance.Data,pFVar5,(longlong)iVar3 * 2);
      }
    }
  }
  pFVar2 = this->Elements + 1;
  if (pFVar2 != param_1->Elements + 1) {
    iVar3 = param_1->Elements[1].Data.ArrayNum;
    piVar1 = &this->Elements[1].Data.ArrayMax;
    iVar4 = *piVar1;
    pFVar5 = param_1->Elements[1].Data.AllocatorInstance.Data;
    this->Elements[1].Data.ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar4 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar3,iVar4,(ForAnyElementType *)pFVar2,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((pFVar2->Data).AllocatorInstance.Data,pFVar5,(longlong)iVar3 * 2);
      }
    }
  }
  pFVar2 = this->Elements + 2;
  if (pFVar2 != param_1->Elements + 2) {
    iVar3 = param_1->Elements[2].Data.ArrayNum;
    piVar1 = &this->Elements[2].Data.ArrayMax;
    iVar4 = *piVar1;
    pFVar5 = param_1->Elements[2].Data.AllocatorInstance.Data;
    this->Elements[2].Data.ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar4 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar3,iVar4,(ForAnyElementType *)pFVar2,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((pFVar2->Data).AllocatorInstance.Data,pFVar5,(longlong)iVar3 * 2);
      }
    }
  }
  return this;
}

