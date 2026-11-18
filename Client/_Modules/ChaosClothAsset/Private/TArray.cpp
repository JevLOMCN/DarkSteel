// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAsset
// Functions: 9

// TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_><UE::Math::TIntVector2<int>_const_,int> @ 14db230d0

TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>::
TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_><UE::Math::TIntVector2<int>_const_,int>
          (TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_> *this,
          TArrayView<UE::Math::TIntVector2<int>_const_,int> *param_1)

{
  int iVar1;
  TIntVector2<int> *_Src;
  
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayNum;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
  return this;
}

// operator=<int_const_,int> @ 14db259e0

TArray<unsigned_int,TSizedDefaultAllocator<32>_> * __thiscall
TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=<int_const_,int>
          (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *this,
          TArrayView<int_const_,int> *param_1)

{
  int *piVar1;
  int iVar2;
  int *_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 2);
  }
  return this;
}

// operator=<UE::Math::TVector2<float>_const_,int> @ 14db25a70

TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::
operator=<UE::Math::TVector2<float>_const_,int>
          (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *this,
          TArrayView<UE::Math::TVector2<float>_const_,int> *param_1)

{
  int *piVar1;
  int iVar2;
  TVector2<float> *_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 3);
  }
  return this;
}

// operator=<UE::Math::TVector<float>_const_,int> @ 14db25b00

TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::
operator=<UE::Math::TVector<float>_const_,int>
          (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *this,
          TArrayView<UE::Math::TVector<float>_const_,int> *param_1)

{
  int *piVar1;
  int iVar2;
  TVector<float> *_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 * 0xc);
  }
  return this;
}

// operator=<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> @ 14db25ba0

TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
operator=<TArray<int,TSizedDefaultAllocator<32>_>_const_,int>
          (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *this,
          TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *param_1)

{
  int *piVar1;
  int iVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(this->AllocatorInstance).Data,
             this->ArrayNum);
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  pTVar3 = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  ConstructItems<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((this->AllocatorInstance).Data,pTVar3,iVar2);
  return this;
}

// RemoveAtSwapImpl @ 14db67d80

void __thiscall
TArray<float,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<float,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  
  pFVar1 = (this->AllocatorInstance).Data;
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(pFVar1 + (longlong)param_1 * 4,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 4,
            (longlong)iVar2 << 2);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 14db67de0

void __thiscall
TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>::
RemoveAtSwapImpl(TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>
                 *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0xa8;
  *(undefined4 *)(_Dst + 0xa0) = 0;
  if (*(void **)(_Dst + 0x98) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x98));
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(_Dst + 0x58));
  *(undefined4 *)(_Dst + 0x50) = 0;
  if (*(void **)(_Dst + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x48));
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(_Dst + 8));
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0xa8,(longlong)iVar2 * 0xa8);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 14db67eb0

void __thiscall
TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>::
RemoveAtSwapImpl(TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
                 *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  this_00 = (TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)(pFVar1 + (longlong)param_1 * 0x50);
  *(undefined4 *)&this_00[1].field_0x10 = 0;
  if (*(void **)&this_00[1].field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this_00[1].field_0x8);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (this_00);
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(this_00,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x50,(longlong)iVar2 * 0x50);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// Reset @ 14db6a3c0

void __thiscall
TArray<UE::Chaos::ClothAsset::Private::SimMeshBuilder::FIsland,TSizedDefaultAllocator<32>_>::Reset
          (TArray<UE::Chaos::ClothAsset::Private::SimMeshBuilder::FIsland,TSizedDefaultAllocator<32>_>
           *this,int param_1)

{
  int *piVar1;
  FIsland *pFVar2;
  
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar1 = &this->ArrayMax;
  pFVar2 = (FIsland *)(this->AllocatorInstance).Data;
  if (param_1 <= *piVar1) {
    DestructItems<UE::Chaos::ClothAsset::Private::SimMeshBuilder::FIsland,int>
              (pFVar2,this->ArrayNum);
    this->ArrayNum = 0;
    return;
  }
  DestructItems<UE::Chaos::ClothAsset::Private::SimMeshBuilder::FIsland,int>(pFVar2,this->ArrayNum);
  this->ArrayNum = 0;
  if (*piVar1 != param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,param_1,&this->AllocatorInstance,0,piVar1);
  }
  return;
}

