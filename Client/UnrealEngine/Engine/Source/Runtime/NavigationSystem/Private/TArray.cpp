// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 31

// AddUniqueImpl<TObjectPtr<ANavigationData>_> @ 146d669c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall
TArray<TObjectPtr<ANavigationData>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TObjectPtr<ANavigationData>_>
          (TArray<TObjectPtr<ANavigationData>,TSizedDefaultAllocator<32>_> *this,
          TObjectPtr<ANavigationData> *param_1)

{
  FScriptContainerElement *pFVar1;
  ANavigationData *pAVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar6 = pFVar1;
    do {
      if (*(ANavigationData **)pFVar6 == (param_1->field0_0x0).DebugPtr) {
        iVar5 = (int)((longlong)pFVar6 - (longlong)pFVar1 >> 3);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pFVar6 = pFVar6 + 8;
    } while (pFVar6 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
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
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar5;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar5 + 1;
  pAVar2 = (param_1->field0_0x0).DebugPtr;
  *(ANavigationData **)(pFVar1 + (longlong)iVar5 * 8) = pAVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar2 != (ANavigationData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar2);
  }
  return iVar5;
}

// AddUniqueImpl<FNavPathRecalculationRequest> @ 146d66ad0

int __thiscall
TArray<FNavPathRecalculationRequest,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<FNavPathRecalculationRequest>
          (TArray<FNavPathRecalculationRequest,TSizedDefaultAllocator<32>_> *this,
          FNavPathRecalculationRequest *param_1)

{
  FScriptContainerElement *pFVar1;
  FNavPathRecalculationRequest *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = Find(this,param_1);
  if (iVar5 == -1) {
    pFVar2 = (FNavPathRecalculationRequest *)(this->AllocatorInstance).Data;
    if ((pFVar2 <= param_1) && (param_1 < pFVar2 + this->ArrayMax)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    iVar5 = this->ArrayNum;
    if (iVar5 == this->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar5 + 1;
    pFVar1 = (this->AllocatorInstance).Data + (longlong)iVar5 * 0x18;
    *(FNavigationPath **)pFVar1 = (param_1->Path).Object;
    *(TReferenceControllerBase<1> **)(pFVar1 + 8) =
         (param_1->Path).WeakReferenceCount.ReferenceController;
    (param_1->Path).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    (param_1->Path).Object = (FNavigationPath *)0x0;
    *(Type *)(pFVar1 + 0x10) = param_1->Reason;
  }
  return iVar5;
}

// operator= @ 146d792a0

TArray<FNavDataConfig,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FNavDataConfig,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FNavDataConfig,TSizedDefaultAllocator<32>_> *this,
          TArray<FNavDataConfig,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FNavDataConfig *pFVar3;
  
  if (this != param_1) {
    DestructItems<FNavDataConfig,int>
              ((FNavDataConfig *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FNavDataConfig *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x88,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FNavDataConfig,FNavDataConfig,int>((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 146d79340

TArray<FNavigationDirtyArea,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FNavigationDirtyArea,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FNavigationDirtyArea,TSizedDefaultAllocator<32>_> *this,
          TArray<FNavigationDirtyArea,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FNavigationDirtyArea *pFVar3;
  
  if (this != param_1) {
    DestructItems<FNavigationDirtyArea,int>
              ((FNavigationDirtyArea *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FNavigationDirtyArea *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FNavigationDirtyArea,FNavigationDirtyArea,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 146d793e0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

TArray<FNavigationOctreeElement,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *
__thiscall
TArray<FNavigationOctreeElement,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>::
operator=(TArray<FNavigationOctreeElement,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
          *this,TArray<FNavigationOctreeElement,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                *param_1)

{
  ForElementType<FNavigationOctreeElement> FVar1;
  ForElementType<FNavigationOctreeElement> FVar2;
  
  if (this != param_1) {
    FVar1 = (this->AllocatorInstance).SecondaryData;
    FVar2 = (ForElementType<FNavigationOctreeElement>)this;
    if (FVar1 != (ForElementType<FNavigationOctreeElement>)0x0) {
      FVar2 = FVar1;
    }
    DestructItems<FNavigationOctreeElement,int>((FNavigationOctreeElement *)FVar2,this->ArrayNum);
    if ((param_1->AllocatorInstance).SecondaryData == (ForElementType<FNavigationOctreeElement>)0x0)
    {
      memmove(this,param_1,0x480);
    }
    FVar1 = (this->AllocatorInstance).SecondaryData;
    if (FVar1 != (ForElementType<FNavigationOctreeElement>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    (this->AllocatorInstance).SecondaryData = (param_1->AllocatorInstance).SecondaryData;
    (param_1->AllocatorInstance).SecondaryData = (ForElementType<FNavigationOctreeElement>)0x0;
    this->ArrayNum = param_1->ArrayNum;
    this->ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0x10;
  }
  return this;
}

// Empty @ 146d928b0

void __thiscall
TArray<UE::Math::TVector<double>,NavMeshMemory::FNavigationMemoryStat>::Empty
          (TArray<UE::Math::TVector<double>,NavMeshMemory::FNavigationMemoryStat> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                (0x18,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Find @ 146d951d0

int __thiscall
TArray<FNavPathRecalculationRequest,TSizedDefaultAllocator<32>_>::Find
          (TArray<FNavPathRecalculationRequest,TSizedDefaultAllocator<32>_> *this,
          FNavPathRecalculationRequest *param_1)

{
  int iVar1;
  TWeakPtr<FNavigationPath,1> *pTVar2;
  bool bVar3;
  TWeakPtr<FNavigationPath,1> *this_00;
  
  pTVar2 = (TWeakPtr<FNavigationPath,1> *)(this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  this_00 = pTVar2;
  while( true ) {
    if (this_00 == (TWeakPtr<FNavigationPath,1> *)((longlong)pTVar2 + (longlong)iVar1 * 0x18)) {
      return -1;
    }
    bVar3 = TWeakPtr<FNavigationPath,1>::UEOpEquals<FNavigationPath>(this_00,&param_1->Path);
    if (bVar3) break;
    this_00 = (TWeakPtr<FNavigationPath,1> *)&this_00[1].WeakReferenceCount;
  }
  return (int)(((longlong)this_00 - (longlong)pTVar2) / 0x18);
}

// RemoveAtImpl @ 146db3d30

void __thiscall
TArray<TArray<double,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<TArray<double,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  int iVar1;
  TArray<double,TSizedDefaultAllocator<32>_> *_Dst;
  
  _Dst = (TArray<double,TSizedDefaultAllocator<32>_> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TArray<double,TSizedDefaultAllocator<32>_>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 146db3db0

void __thiscall
TArray<TArray<FTileHistoryData,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
RemoveAtImpl(TArray<TArray<FTileHistoryData,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
             *this,int param_1,int param_2)

{
  int iVar1;
  TArray<FTileHistoryData,TSizedDefaultAllocator<32>_> *_Dst;
  
  _Dst = (TArray<FTileHistoryData,TSizedDefaultAllocator<32>_> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TArray<FTileHistoryData,TSizedDefaultAllocator<32>_>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtSwapImpl @ 146db3e30

void __thiscall
TArray<FAsyncPathFindingQuery,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FAsyncPathFindingQuery,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0xe8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(_Dst + 0xd8));
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(_Dst + 0xb0));
  if (*(void **)(_Dst + 0x98) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x98));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(_Dst + 0x68));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(_Dst + 0x40));
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0xe8,(longlong)iVar2 * 0xe8);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 146db3ef0

void __thiscall
TArray<FNavigationOctreeElement,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>::
RemoveAtSwapImpl(TArray<FNavigationOctreeElement,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                 *this,int param_1)

{
  ForElementType<FNavigationOctreeElement> FVar1;
  ForElementType<FNavigationOctreeElement> FVar2;
  int iVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar2 = (ForElementType<FNavigationOctreeElement>)this;
  if (FVar1 != (ForElementType<FNavigationOctreeElement>)0x0) {
    FVar2 = FVar1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)
              ((uchar *)((longlong)FVar2 + 0x40) + (longlong)param_1 * 0x48));
  iVar3 = ~param_1 + this->ArrayNum;
  if (1 < iVar3) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    memmove((void *)((longlong)FVar2 + (longlong)param_1 * 0x48),
            (void *)((longlong)FVar2 + (longlong)(this->ArrayNum - iVar3) * 0x48),
            (longlong)iVar3 * 0x48);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 146db3f90

void __thiscall
TArray<TWeakPtr<FNavigationPath,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<TWeakPtr<FNavigationPath,1>,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  
  pFVar2 = (this->AllocatorInstance).Data;
  _Dst = pFVar2 + (longlong)param_1 * 0x10;
  plVar3 = *(longlong **)(_Dst + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  iVar4 = ~param_1 + this->ArrayNum;
  if (1 < iVar4) {
    iVar4 = 1;
  }
  if (iVar4 != 0) {
    memmove(_Dst,pFVar2 + (longlong)(this->ArrayNum - iVar4) * 0x10,(longlong)iVar4 << 4);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// SetNumZeroed @ 146db91a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::SetNumZeroed
          (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<int> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<int> FVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                      (4,4,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<int>)0x0) {
      this = (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
    }
    memset((void *)((longlong)this + (longlong)iVar5 * 4),0,(longlong)(param_1 - iVar6) << 2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar6) {
      uVar8 = iVar6 - param_1;
      if (((int)(uVar8 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar8 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<int>)this;
        if (FVar2 != (ForElementType<int>)0x0) {
          FVar7 = FVar2;
        }
        _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 4);
        iVar6 = (*piVar1 - uVar8) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar8 * 4),(longlong)iVar6 << 2);
        }
        iVar6 = *piVar1;
        *piVar1 = iVar6 - uVar8;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                    (4,4,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// operator= @ 146dda300

TArray<FDebugRenderSceneProxy::FDebugLine,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FDebugRenderSceneProxy::FDebugLine,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FDebugRenderSceneProxy::FDebugLine,TSizedDefaultAllocator<32>_> *this,
          TArray<FDebugRenderSceneProxy::FDebugLine,TSizedDefaultAllocator<32>_> *param_1)

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
              (0x38,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x38);
    }
  }
  return this;
}

// operator= @ 146dda3a0

TArray<FNavPathPoint,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FNavPathPoint,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FNavPathPoint,TSizedDefaultAllocator<32>_> *this,
          TArray<FNavPathPoint,TSizedDefaultAllocator<32>_> *param_1)

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
              (0x30,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x30);
    }
  }
  return this;
}

// operator= @ 146dda440

TArray<FNavigationPortalEdge,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FNavigationPortalEdge,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FNavigationPortalEdge,TSizedDefaultAllocator<32>_> *this,
          TArray<FNavigationPortalEdge,TSizedDefaultAllocator<32>_> *param_1)

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
              (0x38,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x38);
    }
  }
  return this;
}

// operator= @ 146dda4e0

TArray<unsigned___int64,TSizedDefaultAllocator<32>_> * __thiscall
TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::operator=
          (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *this,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_1)

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
              (8,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
    }
  }
  return this;
}

// AddZeroed @ 146ddf470

int __thiscall
TArray<FNavPoly,TSizedDefaultAllocator<32>_>::AddZeroed
          (TArray<FNavPoly,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memset((this->AllocatorInstance).Data + (longlong)iVar1 * 0x20,0,(longlong)param_1 << 5);
  return iVar1;
}

// RemoveAtImpl @ 146e20450

void __thiscall
TArray<FNavMeshSceneProxyData::FDebugMeshData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FNavMeshSceneProxyData::FDebugMeshData,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  FDebugMeshData *_Dst;
  int iVar1;
  
  _Dst = (FDebugMeshData *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x28);
  DestructItems<FNavMeshSceneProxyData::FDebugMeshData,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x28);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 146e204d0

void __thiscall
TArray<FNavMeshSceneProxyData::FDebugText,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FNavMeshSceneProxyData::FDebugText,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  FDebugText *_Dst;
  int iVar1;
  
  _Dst = (FDebugText *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x28);
  DestructItems<FNavMeshSceneProxyData::FDebugText,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x28);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 146e20550

void __thiscall
TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Dst;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x58;
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 0x58,(longlong)iVar1 * 0x58);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 146e205a0

void __thiscall
TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FNavMeshTileData *_Dst;
  
  _Dst = (FNavMeshTileData *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x58);
  DestructItems<FNavMeshTileData,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x58);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// Reset @ 146e21ab0

void __thiscall
TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::Reset
          (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// SetNum @ 146e28f80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x58,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FNavMeshTileData,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0x58,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x58,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNum @ 146e290b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FNavigationPortalEdge,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FNavigationPortalEdge,TSizedDefaultAllocator<32>_> *this,int param_1,
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
                      (0x38,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FNavigationPortalEdge,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x38,param_1 - iVar5);
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
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x38;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x38,(longlong)iVar5 * 0x38);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x38,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// AddUniqueImpl<FNavTileRef> @ 146e31ed0

int __thiscall
TArray<FNavTileRef,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FNavTileRef>
          (TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *this,FNavTileRef *param_1)

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
      if (*(ulong64 *)&pFVar5->field_0x0 == param_1->TileRef) {
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
  *(ulong64 *)(pFVar1 + (longlong)iVar4 * 8) = param_1->TileRef;
  return iVar4;
}

// Append<FSimpleLinkNavModifier,TSizedDefaultAllocator<32>_> @ 146e31fd0

void __thiscall
TArray<FSimpleLinkNavModifier,TSizedDefaultAllocator<32>_>::
Append<FSimpleLinkNavModifier,TSizedDefaultAllocator<32>_>
          (TArray<FSimpleLinkNavModifier,TSizedDefaultAllocator<32>_> *this,
          TArray<FSimpleLinkNavModifier,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this == param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xb0,0x10,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    ConstructItems<FSimpleLinkNavModifier,FSimpleLinkNavModifier,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 0xb0,
               (FSimpleLinkNavModifier *)(param_1->AllocatorInstance).Data,iVar1);
  }
  return;
}

// operator= @ 146e37c70

TArray<dtNavLinkBuilderJumpConfig,TSizedDefaultAllocator<32>_> * __thiscall
TArray<dtNavLinkBuilderJumpConfig,TSizedDefaultAllocator<32>_>::operator=
          (TArray<dtNavLinkBuilderJumpConfig,TSizedDefaultAllocator<32>_> *this,
          TArray<dtNavLinkBuilderJumpConfig,TSizedDefaultAllocator<32>_> *param_1)

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
              (0x40,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 6);
    }
  }
  return this;
}

// AddZeroed @ 146e3feb0

int __thiscall
TArray<unsigned_char,NavMeshMemory::FNavigationMemoryStat>::AddZeroed
          (TArray<unsigned_char,NavMeshMemory::FNavigationMemoryStat> *this,int param_1)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                    (1,1,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memset((void *)((longlong)iVar1 + (this->AllocatorInstance)._padding_),0,(longlong)param_1);
  return iVar1;
}

// Reset @ 146e70ae0

void __thiscall
TArray<UE::Math::TBox<double>,NavMeshMemory::FNavigationMemoryStat>::Reset
          (TArray<UE::Math::TBox<double>,NavMeshMemory::FNavigationMemoryStat> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                (0x38,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Reset @ 146e70b30

void __thiscall
TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>::Reset
          (TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int *piVar1;
  FNavMeshTileData *pFVar2;
  
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar1 = &this->ArrayMax;
  pFVar2 = (FNavMeshTileData *)(this->AllocatorInstance).Data;
  if (param_1 <= *piVar1) {
    DestructItems<FNavMeshTileData,int>(pFVar2,this->ArrayNum);
    this->ArrayNum = 0;
    return;
  }
  DestructItems<FNavMeshTileData,int>(pFVar2,this->ArrayNum);
  this->ArrayNum = 0;
  if (*piVar1 != param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,param_1,&this->AllocatorInstance,0,piVar1);
  }
  return;
}

