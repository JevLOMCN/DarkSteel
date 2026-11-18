// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 4

// Combine @ 146650660

FEntityComponentFilter * __thiscall
UE::MovieScene::FEntityComponentFilter::Combine
          (FEntityComponentFilter *this,FEntityComponentFilter *param_1)

{
  TArray<UE::MovieScene::FEntityComponentFilter::FComplexMask,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityComponentFilter *pFVar6;
  <lambda_1> local_res8 [8];
  <lambda_1> local_res10 [8];
  
  if (0 < (param_1->AllMask).Bits.NumBits) {
    Core::Private::
    BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseOR<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
              ((TBitArray<TFixedAllocator<12>_> *)param_1,(TBitArray<TFixedAllocator<12>_> *)this,
               MaxSize,local_res8);
  }
  if (0 < (param_1->NoneMask).Bits.NumBits) {
    Core::Private::
    BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseOR<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
              (&(param_1->NoneMask).Bits,&(this->NoneMask).Bits,MaxSize,local_res10);
  }
  if (0 < (param_1->ComplexMasks).ArrayNum) {
    pTVar1 = &this->ComplexMasks;
    if (pTVar1 == &param_1->ComplexMasks) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FEntityComponentFilter *)(*pcVar3)();
        return pFVar6;
      }
    }
    iVar2 = (param_1->ComplexMasks).ArrayNum;
    if (iVar2 != 0) {
      iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x3c,4,iVar2,&pTVar1->AllocatorInstance,&(this->ComplexMasks).ArrayNum,
                         &(this->ComplexMasks).ArrayMax);
      ConstructItems<UE::MovieScene::FEntityComponentFilter::FComplexMask,UE::MovieScene::FEntityComponentFilter::FComplexMask,int>
                ((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x3c,
                 (FComplexMask *)(param_1->ComplexMasks).AllocatorInstance.Data,iVar2);
    }
    return this;
  }
  return this;
}

// operator= @ 14676af00

FEntityComponentFilter * __thiscall
UE::MovieScene::FEntityComponentFilter::operator=
          (FEntityComponentFilter *this,FEntityComponentFilter *param_1)

{
  TArray<UE::MovieScene::FEntityComponentFilter::FComplexMask,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  TArray<UE::MovieScene::FEntityComponentFilter::FComplexMask,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if (this != param_1) {
    memmove(this,param_1,0x30);
    (this->AllMask).Bits.NumBits = (param_1->AllMask).Bits.NumBits;
    (this->AllMask).Bits.MaxBits = (param_1->AllMask).Bits.MaxBits;
    (param_1->AllMask).Bits.NumBits = 0;
    (param_1->AllMask).Bits.MaxBits = 0;
  }
  if (&this->NoneMask != &param_1->NoneMask) {
    memmove(&this->NoneMask,&param_1->NoneMask,0x30);
    (this->NoneMask).Bits.NumBits = (param_1->NoneMask).Bits.NumBits;
    (this->NoneMask).Bits.MaxBits = (param_1->NoneMask).Bits.MaxBits;
    (param_1->NoneMask).Bits.NumBits = 0;
    (param_1->NoneMask).Bits.MaxBits = 0;
  }
  pTVar3 = &param_1->ComplexMasks;
  pTVar1 = &this->ComplexMasks;
  if (pTVar1 != pTVar3) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ComplexMasks).ArrayNum = (param_1->ComplexMasks).ArrayNum;
    (this->ComplexMasks).ArrayMax = (param_1->ComplexMasks).ArrayMax;
    (param_1->ComplexMasks).ArrayNum = 0;
    (param_1->ComplexMasks).ArrayMax = 0;
  }
  return this;
}

// operator= @ 14676afd0

FEntityComponentFilter * __thiscall
UE::MovieScene::FEntityComponentFilter::operator=
          (FEntityComponentFilter *this,FEntityComponentFilter *param_1)

{
  TArray<UE::MovieScene::FEntityComponentFilter::FComplexMask,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FComplexMask *pFVar5;
  
  if (this != param_1) {
    TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
              ((TBitArray<TFixedAllocator<12>_> *)this,(TBitArray<TFixedAllocator<12>_> *)param_1);
  }
  if (&this->NoneMask != &param_1->NoneMask) {
    TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
              (&(this->NoneMask).Bits,&(param_1->NoneMask).Bits);
  }
  pTVar1 = &this->ComplexMasks;
  if (pTVar1 != &param_1->ComplexMasks) {
    iVar3 = (this->ComplexMasks).ArrayMax;
    piVar2 = &(this->ComplexMasks).ArrayMax;
    pFVar5 = (FComplexMask *)(param_1->ComplexMasks).AllocatorInstance.Data;
    iVar4 = (param_1->ComplexMasks).ArrayNum;
    (this->ComplexMasks).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x3c,4,iVar4,iVar3,&pTVar1->AllocatorInstance,iVar4,piVar2);
      ConstructItems<UE::MovieScene::FEntityComponentFilter::FComplexMask,UE::MovieScene::FEntityComponentFilter::FComplexMask,int>
                ((pTVar1->AllocatorInstance).Data,pFVar5,iVar4);
    }
  }
  return this;
}

// Complex @ 1468219e0

FEntityComponentFilter * __thiscall
UE::MovieScene::FEntityComponentFilter::Complex
          (FEntityComponentFilter *this,FComponentMask *param_1,EComplexFilterMode param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  TBitArray<TFixedAllocator<12>_> *this_00;
  
  if (0 < (param_1->Bits).NumBits) {
    iVar3 = (this->ComplexMasks).ArrayNum;
    piVar1 = &(this->ComplexMasks).ArrayMax;
    if (iVar3 == *piVar1) {
      iVar3 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x43c,&(this->ComplexMasks).AllocatorInstance,piVar1);
    }
    pFVar2 = (this->ComplexMasks).AllocatorInstance.Data;
    (this->ComplexMasks).ArrayNum = iVar3 + 1;
    this_00 = (TBitArray<TFixedAllocator<12>_> *)(pFVar2 + (longlong)iVar3 * 0x3c);
    this_00->NumBits = 0;
    this_00->MaxBits = 0;
    TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>(this_00,&param_1->Bits);
    this_00[1].AllocatorInstance.InlineData[0].Pad[0] = param_2;
  }
  return this;
}

