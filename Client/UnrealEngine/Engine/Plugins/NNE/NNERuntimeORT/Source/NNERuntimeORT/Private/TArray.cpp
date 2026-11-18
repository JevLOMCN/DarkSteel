// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNERuntimeORT
// Functions: 6

// operator=<UE::NNE::FTensorShape_const_,int> @ 14eb02390

TArray<UE::NNE::FTensorShape,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::NNE::FTensorShape,TSizedDefaultAllocator<32>_>::
operator=<UE::NNE::FTensorShape_const_,int>
          (TArray<UE::NNE::FTensorShape,TSizedDefaultAllocator<32>_> *this,
          TArrayView<UE::NNE::FTensorShape_const_,int> *param_1)

{
  int *piVar1;
  int iVar2;
  FTensorShape *pFVar3;
  
  DestructItems<UE::NNE::FTensorShape,int>
            ((FTensorShape *)(this->AllocatorInstance).Data,this->ArrayNum);
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  pFVar3 = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  ConstructItems<UE::NNE::FTensorShape,UE::NNE::FTensorShape,int>
            ((this->AllocatorInstance).Data,pFVar3,iVar2);
  return this;
}

// operator= @ 14eb07510

TArray<UE::NNE::FTensorDesc,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::NNE::FTensorDesc,TSizedDefaultAllocator<32>_>::operator=
          (TArray<UE::NNE::FTensorDesc,TSizedDefaultAllocator<32>_> *this,
          TArray<UE::NNE::FTensorDesc,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FTensorDesc *pFVar3;
  
  if (this != param_1) {
    DestructItems<UE::NNE::FTensorDesc,int>
              ((FTensorDesc *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FTensorDesc *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<UE::NNE::FTensorDesc,UE::NNE::FTensorDesc,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// Empty @ 14eb138c0

void __thiscall
TArray<UE::NNERuntimeORT::Private::FOnnxAdditionalDataDescriptor,TSizedDefaultAllocator<32>_>::Empty
          (TArray<UE::NNERuntimeORT::Private::FOnnxAdditionalDataDescriptor,TSizedDefaultAllocator<32>_>
           *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<UE::NNERuntimeORT::Private::FOnnxAdditionalDataDescriptor,int>
              ((FOnnxAdditionalDataDescriptor *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// RemoveAtImpl @ 14eb19250

void __thiscall
TArray<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  int iVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *_Dst;
  
  _Dst = (TArray<FString,TSizedDefaultAllocator<32>_> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TArray<FString,TSizedDefaultAllocator<32>_>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// Reset @ 14eb192d0

void __thiscall
TArray<UE::NNERuntimeORT::Private::FTensor,TSizedDefaultAllocator<32>_>::Reset
          (TArray<UE::NNERuntimeORT::Private::FTensor,TSizedDefaultAllocator<32>_> *this,int param_1
          )

{
  int *piVar1;
  FTensor *pFVar2;
  
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar1 = &this->ArrayMax;
  pFVar2 = (FTensor *)(this->AllocatorInstance).Data;
  if (param_1 <= *piVar1) {
    DestructItems<UE::NNERuntimeORT::Private::FTensor,int>(pFVar2,this->ArrayNum);
    this->ArrayNum = 0;
    return;
  }
  DestructItems<UE::NNERuntimeORT::Private::FTensor,int>(pFVar2,this->ArrayNum);
  this->ArrayNum = 0;
  if (*piVar1 != param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,param_1,&this->AllocatorInstance,0,piVar1);
  }
  return;
}

// Reset @ 14eb19360

void __thiscall
TArray<UE::NNE::FTensorShape,TSizedDefaultAllocator<32>_>::Reset
          (TArray<UE::NNE::FTensorShape,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar1 = &this->ArrayMax;
  pFVar2 = (this->AllocatorInstance).Data;
  if (param_1 <= *piVar1) {
    DestructItems<UE::NNE::FTensorShape,int>((FTensorShape *)pFVar2,this->ArrayNum);
    this->ArrayNum = 0;
    return;
  }
  DestructItems<UE::NNE::FTensorShape,int>((FTensorShape *)pFVar2,this->ArrayNum);
  this->ArrayNum = 0;
  if (*piVar1 != param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,param_1,&this->AllocatorInstance,0,piVar1);
  }
  return;
}

