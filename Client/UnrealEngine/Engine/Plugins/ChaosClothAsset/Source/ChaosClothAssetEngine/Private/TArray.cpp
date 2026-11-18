// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAssetEngine
// Functions: 13

// TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_><UE::Math::TVector<float>,int> @ 14dc2a700

TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::
TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_><UE::Math::TVector<float>,int>
          (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *this,
          TArrayView<UE::Math::TVector<float>,int> *param_1)

{
  int iVar1;
  TVector<float> *_Src;
  
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayNum;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0xc);
  return this;
}

// TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_><TArray<int,TSizedDefaultAllocator<32>_>,int> @ 14dc2a790

TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_><TArray<int,TSizedDefaultAllocator<32>_>,int>
          (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *this,
          TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *param_1)

{
  int iVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayNum;
  pTVar2 = param_1->DataPtr;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  ConstructItems<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((this->AllocatorInstance).Data,pTVar2,iVar1);
  return this;
}

// TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_><TArray<float,TSizedDefaultAllocator<32>_>,int> @ 14dc2a820

TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_><TArray<float,TSizedDefaultAllocator<32>_>,int>
          (TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *this,
          TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *param_1)

{
  int iVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayNum;
  pTVar2 = param_1->DataPtr;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  ConstructItems<TArray<float,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,int>
            ((this->AllocatorInstance).Data,pTVar2,iVar1);
  return this;
}

// AddUniqueImpl<UChaosClothAssetBase_const_*_const_&> @ 14dc2b7f0

int __thiscall
TArray<UChaosClothAssetBase_const_*,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<UChaosClothAssetBase_const_*_const_&>
          (TArray<UChaosClothAssetBase_const_*,TSizedDefaultAllocator<32>_> *this,
          UChaosClothAssetBase **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(UChaosClothAssetBase **)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(UChaosClothAssetBase **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// AddUniqueImpl<int> @ 14dc2b8f0

int __thiscall
TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>::AddUniqueImpl<int>
          (TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *this,int *param_1)

{
  ForElementType<int> FVar1;
  ForElementType<int> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<int> FVar6;
  ForElementType<int> FVar7;
  
  FVar2 = (this->AllocatorInstance).SecondaryData;
  FVar7 = (ForElementType<int>)this;
  if (FVar2 != (ForElementType<int>)0x0) {
    FVar7 = FVar2;
  }
  FVar1 = (ForElementType<int>)((longlong)FVar7 + (longlong)this->ArrayNum * 4);
  if (FVar7 != FVar1) {
    FVar6 = FVar7;
    do {
      if (*(int *)FVar6 == *param_1) {
        iVar5 = (int)((longlong)FVar6 - (longlong)FVar7 >> 2);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      FVar6 = (ForElementType<int>)((longlong)FVar6 + 4);
    } while (FVar6 != FVar1);
  }
  FVar7 = (ForElementType<int>)this;
  if (FVar2 != (ForElementType<int>)0x0) {
    FVar7 = FVar2;
  }
  if ((ulonglong)FVar7 <= param_1) {
    FVar7 = (ForElementType<int>)this;
    if (FVar2 != (ForElementType<int>)0x0) {
      FVar7 = FVar2;
    }
    if ((param_1 < (int *)((longlong)FVar7 + (longlong)this->ArrayMax * 4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                      (0x404,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar5 + 1;
  FVar2 = (this->AllocatorInstance).SecondaryData;
  if (FVar2 != (ForElementType<int>)0x0) {
    this = (TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
  }
  *(int *)((longlong)this + (longlong)iVar5 * 4) = *param_1;
  return iVar5;
}

// AddUniqueImpl<UActorComponent_*> @ 14dc2ba00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall
TArray<UActorComponent_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UActorComponent_*>
          (TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *this,UActorComponent **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(UActorComponent **)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(UActorComponent **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// CopyToEmpty<FChaosClothSimulationLodModel,int> @ 14dc2bbd0

void __thiscall
TArray<FChaosClothSimulationLodModel,TSizedDefaultAllocator<32>_>::
CopyToEmpty<FChaosClothSimulationLodModel,int>
          (TArray<FChaosClothSimulationLodModel,TSizedDefaultAllocator<32>_> *this,
          FChaosClothSimulationLodModel *param_1,int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x1f0,8,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  ConstructItems<FChaosClothSimulationLodModel,FChaosClothSimulationLodModel,int>
            ((this->AllocatorInstance).Data,param_1,param_2);
  return;
}

// operator= @ 14dc367f0

TArray<UE::Math::TVector<float>,TAlignedHeapAllocator<16>_> * __thiscall
TArray<UE::Math::TVector<float>,TAlignedHeapAllocator<16>_>::operator=
          (TArray<UE::Math::TVector<float>,TAlignedHeapAllocator<16>_> *this,
          TArray<UE::Math::TVector<float>,TAlignedHeapAllocator<16>_> *param_1)

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
    UE::Core::Private::ReallocForCopy<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (0xc,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0xc);
    }
  }
  return this;
}

// Empty @ 14dc455f0

void __thiscall
TArray<TSharedRef<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_>::Empty
          (TArray<TSharedRef<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  if (-1 < param_1) {
    DestructItems<TSharedRef<FManagedArrayCollection_const_,1>,int>
              ((TSharedRef<FManagedArrayCollection_const_,1> *)(this->AllocatorInstance).Data,
               this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// RemoveAtImpl @ 14dc552f0

void __thiscall
TArray<FChaosClothAssetLodTransitionDataCache,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FChaosClothAssetLodTransitionDataCache,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  int iVar1;
  FChaosClothAssetLodTransitionDataCache *_Dst;
  
  _Dst = (FChaosClothAssetLodTransitionDataCache *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x38);
  DestructItems<FChaosClothAssetLodTransitionDataCache,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x38);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14dc55360

void __thiscall
TArray<FChaosClothSimulationProperties,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FChaosClothSimulationProperties,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  FChaosClothSimulationProperties *_Dst;
  int iVar1;
  
  _Dst = (FChaosClothSimulationProperties *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x28);
  DestructItems<FChaosClothSimulationProperties,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x28);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// Reset @ 14dc559d0

void __thiscall
TArray<TWeakPtr<Chaos::Softs::FCollectionPropertyFacade,1>,TSizedDefaultAllocator<32>_>::Reset
          (TArray<TWeakPtr<Chaos::Softs::FCollectionPropertyFacade,1>,TSizedDefaultAllocator<32>_>
           *this,int param_1)

{
  int *piVar1;
  TWeakPtr<Chaos::Softs::FCollectionPropertyFacade,1> *pTVar2;
  
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar1 = &this->ArrayMax;
  pTVar2 = (TWeakPtr<Chaos::Softs::FCollectionPropertyFacade,1> *)(this->AllocatorInstance).Data;
  if (param_1 <= *piVar1) {
    DestructItems<TWeakPtr<Chaos::Softs::FCollectionPropertyFacade,1>,int>(pTVar2,this->ArrayNum);
    this->ArrayNum = 0;
    return;
  }
  DestructItems<TWeakPtr<Chaos::Softs::FCollectionPropertyFacade,1>,int>(pTVar2,this->ArrayNum);
  this->ArrayNum = 0;
  if (*piVar1 != param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,param_1,&this->AllocatorInstance,0,piVar1);
  }
  return;
}

// SetNum @ 14dc588c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FClothVertBoneData,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FClothVertBoneData,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x4c,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FClothVertBoneData,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x4c,param_1 - iVar5);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x4c;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x4c,(longlong)iVar5 * 0x4c);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x4c,4,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

