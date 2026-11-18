// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 4

// operator= @ 14a87eb20

TArray<FChooserEnumRowData,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FChooserEnumRowData,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FChooserEnumRowData,TSizedDefaultAllocator<32>_> *this,
          TArray<FChooserEnumRowData,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
    }
  }
  return this;
}

// operator= @ 14a87ebc0

TArray<FChooserFloatRangeRowData,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FChooserFloatRangeRowData,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FChooserFloatRangeRowData,TSizedDefaultAllocator<32>_> *this,
          TArray<FChooserFloatRangeRowData,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0xc);
    }
  }
  return this;
}

// operator= @ 14a87ec60

TArray<FGameplayTagContainer,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FGameplayTagContainer,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FGameplayTagContainer,TSizedDefaultAllocator<32>_> *this,
          TArray<FGameplayTagContainer,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FGameplayTagContainer *pFVar3;
  
  if (this != param_1) {
    DestructItems<FGameplayTagContainer,int>
              ((FGameplayTagContainer *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FGameplayTagContainer *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FGameplayTagContainer,FGameplayTagContainer,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 14a87ed00

TArray<FGameplayTagQuery,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FGameplayTagQuery,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FGameplayTagQuery,TSizedDefaultAllocator<32>_> *this,
          TArray<FGameplayTagQuery,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FGameplayTagQuery *pFVar3;
  
  if (this != param_1) {
    DestructItems<FGameplayTagQuery,int>
              ((FGameplayTagQuery *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FGameplayTagQuery *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FGameplayTagQuery,FGameplayTagQuery,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

