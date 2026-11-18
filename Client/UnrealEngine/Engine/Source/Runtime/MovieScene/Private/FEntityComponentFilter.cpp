// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// FEntityComponentFilter @ 1461184d0

FEntityComponentFilter * __thiscall
UE::MovieScene::FEntityComponentFilter::FEntityComponentFilter
          (FEntityComponentFilter *this,FEntityComponentFilter *param_1)

{
  TArray<UE::MovieScene::FEntityComponentFilter::FComplexMask,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FComplexMask *pFVar4;
  
  (this->AllMask).Bits.NumBits = 0;
  (this->AllMask).Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            ((TBitArray<TFixedAllocator<12>_> *)this,(TBitArray<TFixedAllocator<12>_> *)param_1);
  (this->NoneMask).Bits.NumBits = 0;
  (this->NoneMask).Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->NoneMask).Bits,&(param_1->NoneMask).Bits);
  pTVar1 = &this->ComplexMasks;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ComplexMasks).ArrayMax;
  iVar3 = (param_1->ComplexMasks).ArrayNum;
  pFVar4 = (FComplexMask *)(param_1->ComplexMasks).AllocatorInstance.Data;
  (this->ComplexMasks).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x3c,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<UE::MovieScene::FEntityComponentFilter::FComplexMask,UE::MovieScene::FEntityComponentFilter::FComplexMask,int>
              ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
  }
  return this;
}

// Any @ 1461250a0

FEntityComponentFilter * __thiscall
UE::MovieScene::FEntityComponentFilter::Any(FEntityComponentFilter *this,FComponentMask *param_1)

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
    this_00[1].AllocatorInstance.InlineData[0].Pad[0] = '\x02';
  }
  return this;
}

// IsValid @ 1461416a0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall UE::MovieScene::FEntityComponentFilter::IsValid(FEntityComponentFilter *this)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  int iVar2;
  int iVar3;
  FEntityComponentFilter *pFVar4;
  FComponentMask *pFVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  bool bVar14;
  undefined1 local_res8 [8];
  
  iVar2 = (this->AllMask).Bits.NumBits;
  uVar11 = 0;
  uVar6 = iVar2 + 0x1f;
  pFVar4 = this;
  if (uVar6 >> 5 != 0) {
LAB_1461416d0:
    if (*(int *)(pFVar4->AllMask).Bits.AllocatorInstance.InlineData[0].Pad == 0)
    goto code_r0x0001461416d5;
    pTVar1 = (this->AllMask).Bits.AllocatorInstance.InlineData + uVar11;
    iVar3 = 0;
    bVar14 = *(int *)pTVar1->Pad != 0;
    if (bVar14) {
      for (; (*(uint *)pTVar1->Pad >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
      }
    }
    iVar7 = 0x20;
    if (bVar14) {
      iVar7 = iVar3;
    }
    iVar7 = iVar7 + (int)uVar11 * 0x20;
    if ((iVar7 < iVar2) && (iVar7 != -1)) {
      return true;
    }
  }
LAB_146141702:
  iVar2 = (this->NoneMask).Bits.NumBits;
  uVar11 = 0;
  uVar6 = iVar2 + 0x1fU >> 5;
  if (uVar6 != 0) {
    pFVar5 = &this->NoneMask;
LAB_146141717:
    if (*(int *)(pFVar5->Bits).AllocatorInstance.InlineData[0].Pad == 0) goto code_r0x00014614171c;
    pTVar1 = (this->NoneMask).Bits.AllocatorInstance.InlineData + uVar11;
    iVar3 = 0;
    bVar14 = *(int *)pTVar1->Pad != 0;
    if (bVar14) {
      for (; (*(uint *)pTVar1->Pad >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
      }
    }
    iVar7 = 0x20;
    if (bVar14) {
      iVar7 = iVar3;
    }
    iVar7 = iVar7 + (int)uVar11 * 0x20;
    if ((iVar7 < iVar2) && (iVar7 != -1)) {
      return true;
    }
  }
LAB_146141745:
  iVar2 = (this->ComplexMasks).ArrayNum;
  pFVar12 = (this->ComplexMasks).AllocatorInstance.Data;
  pFVar13 = pFVar12 + (longlong)iVar2 * 0x3c;
LAB_146141754:
  while( true ) {
    if ((this->ComplexMasks).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::MovieScene::FEntityComponentFilter::FComplexMask_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar12 == pFVar13) {
      return false;
    }
    iVar3 = 0;
    lVar9 = 0;
    uVar6 = *(int *)(pFVar12 + 0x30) + 0x1f;
    if (uVar6 >> 5 != 0) break;
LAB_1461417b2:
    pFVar12 = pFVar12 + 0x3c;
  }
LAB_146141780:
  uVar10 = *(uint *)(pFVar12 + lVar9 * 4);
  if (uVar10 == 0) goto code_r0x000146141787;
  iVar7 = 0;
  if (uVar10 != 0) {
    for (; (uVar10 >> iVar7 & 1) == 0; iVar7 = iVar7 + 1) {
    }
  }
  iVar8 = 0x20;
  if (uVar10 != 0) {
    iVar8 = iVar7;
  }
  iVar8 = iVar8 + iVar3 * 0x20;
  if ((iVar8 < *(int *)(pFVar12 + 0x30)) && (iVar8 != -1)) {
    return true;
  }
  goto LAB_1461417b2;
code_r0x0001461416d5:
  uVar10 = (int)uVar11 + 1;
  uVar11 = (ulonglong)uVar10;
  pFVar4 = (FEntityComponentFilter *)((pFVar4->AllMask).Bits.AllocatorInstance.InlineData + 1);
  if ((int)(uVar6 >> 5) <= (int)uVar10) goto LAB_146141702;
  goto LAB_1461416d0;
code_r0x00014614171c:
  uVar10 = (int)uVar11 + 1;
  uVar11 = (ulonglong)uVar10;
  pFVar5 = (FComponentMask *)((pFVar5->Bits).AllocatorInstance.InlineData + 1);
  if ((int)uVar6 <= (int)uVar10) goto LAB_146141745;
  goto LAB_146141717;
code_r0x000146141787:
  iVar3 = iVar3 + 1;
  lVar9 = lVar9 + 1;
  if ((int)(uVar6 >> 5) <= iVar3) goto code_r0x000146141791;
  goto LAB_146141780;
code_r0x000146141791:
  pFVar12 = pFVar12 + 0x3c;
  goto LAB_146141754;
}

// Match @ 146142ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::MovieScene::FEntityComponentFilter::Match(FEntityComponentFilter *this,FComponentMask *param_1)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  bool bVar5;
  TBitArray<TFixedAllocator<12>_> *pTVar6;
  TBitArray<TFixedAllocator<12>_> *pTVar7;
  undefined1 auStack_98 [32];
  <lambda_1> local_78 [4];
  TBitArray<TFixedAllocator<12>_> local_74;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  if ((((this->AllMask).Bits.NumBits < 1) ||
      (bVar3 = InputMatchesAll(param_1,&this->AllMask), bVar3)) &&
     (((this->NoneMask).Bits.NumBits < 1 ||
      (bVar3 = InputMatchesAny(param_1,&this->NoneMask), !bVar3)))) {
    iVar2 = (this->ComplexMasks).ArrayNum;
    pTVar6 = (TBitArray<TFixedAllocator<12>_> *)(this->ComplexMasks).AllocatorInstance.Data;
    pTVar7 = (TBitArray<TFixedAllocator<12>_> *)((longlong)pTVar6 + (longlong)iVar2 * 0x3c);
    while( true ) {
      if ((this->ComplexMasks).ArrayNum != iVar2) {
        `TCheckedPointerIterator<UE::MovieScene::FEntityComponentFilter::FComplexMask_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_78);
      }
      if (pTVar6 == pTVar7) {
        return true;
      }
      bVar1 = pTVar6[1].AllocatorInstance.InlineData[0].Pad[0];
      bVar3 = false;
      if ((bVar1 & 1) == 0) {
        if ((bVar1 & 2) == 0) {
          if ((bVar1 & 4) != 0) {
            bVar3 = InputMatchesAll(param_1,(FComponentMask *)pTVar6);
          }
        }
        else {
          bVar3 = InputMatchesAny(param_1,(FComponentMask *)pTVar6);
        }
      }
      else {
        local_74.NumBits = 0;
        local_74.MaxBits = 0;
        TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>(&local_74,pTVar6);
        Core::Private::
        BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseAND<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
                  (&param_1->Bits,&local_74,MaintainSize,local_78);
        iVar4 = FComponentMask::NumComponents((FComponentMask *)&local_74);
        bVar3 = iVar4 == 1;
      }
      bVar5 = (bool)(bVar3 ^ 1);
      if ((pTVar6[1].AllocatorInstance.InlineData[0].Pad[0] & 0x80) == 0) {
        bVar5 = bVar3;
      }
      if (bVar5 == false) break;
      pTVar6 = (TBitArray<TFixedAllocator<12>_> *)(pTVar6[1].AllocatorInstance.InlineData + 1);
    }
  }
  return false;
}

// FEntityComponentFilter @ 1462993a0

FEntityComponentFilter * __thiscall
UE::MovieScene::FEntityComponentFilter::FEntityComponentFilter(FEntityComponentFilter *this)

{
  (this->AllMask).Bits.MaxBits = 0x180;
  (this->AllMask).Bits.NumBits = 0;
  (this->NoneMask).Bits.NumBits = 0;
  (this->ComplexMasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComplexMasks).ArrayNum = 0;
  (this->ComplexMasks).ArrayMax = 0;
  (this->NoneMask).Bits.MaxBits = 0x180;
  return this;
}

// ~FEntityComponentFilter @ 14629b840

void __thiscall
UE::MovieScene::FEntityComponentFilter::~FEntityComponentFilter(FEntityComponentFilter *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ComplexMasks).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

