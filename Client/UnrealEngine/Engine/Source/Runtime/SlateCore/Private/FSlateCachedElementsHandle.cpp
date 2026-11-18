// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 4

// ClearCachedElements @ 142504190

void __thiscall FSlateCachedElementsHandle::ClearCachedElements(FSlateCachedElementsHandle *this)

{
  FSlateCachedElementList *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = (this->Ptr).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1425041c0;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    this_00 = (this->Ptr).Object;
    if (this_00 != (FSlateCachedElementList *)0x0) {
      FSlateCachedElementList::ClearCachedElements(this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_1425041c0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// HasCachedElements @ 142510330

bool __thiscall FSlateCachedElementsHandle::HasCachedElements(FSlateCachedElementsHandle *this)

{
  FSlateCachedElementList *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  bool local_res8 [8];
  <lambda_1> local_res10 [3];
  
  pTVar4 = (this->Ptr).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142510362;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    pFVar1 = (this->Ptr).Object;
    if (pFVar1 != (FSlateCachedElementList *)0x0) {
      local_res10[0].bElementsFound = local_res8;
      local_res8[0] = false;
      UE::Core::Private::Tuple::
      TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>_>::
      Do<_FSlateCachedElementsHandle::HasCachedElements_::__l5::<lambda_1>_&,TTuple<TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>_&>
                (local_res10,&pFVar1->DrawElements);
      bVar5 = local_res8[0];
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return bVar5;
    }
  }
LAB_142510362:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// IsOwnedByWidget @ 1425113d0

bool __thiscall
FSlateCachedElementsHandle::IsOwnedByWidget(FSlateCachedElementsHandle *this,SWidget *param_1)

{
  FSlateCachedElementList *pFVar1;
  SWidget *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar5 = (this->Ptr).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar5->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142511402;
      }
      LOCK();
      aVar4 = pTVar5->SharedReferenceCount;
      bVar6 = aVar3 == aVar4;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar6);
    pFVar1 = (this->Ptr).Object;
    if (pFVar1 != (FSlateCachedElementList *)0x0) {
      pSVar2 = pFVar1->OwningWidget;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      return pSVar2 == param_1;
    }
  }
LAB_142511402:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return false;
}

// RemoveFromCache @ 14251b960

void __thiscall FSlateCachedElementsHandle::RemoveFromCache(FSlateCachedElementsHandle *this)

{
  FSlateCachedElementList *pFVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar5 = (this->Ptr).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar5->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14251b990;
      }
      LOCK();
      aVar4 = pTVar5->SharedReferenceCount;
      bVar6 = aVar3 == aVar4;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar6);
    pFVar1 = (this->Ptr).Object;
    if (((pFVar1 != (FSlateCachedElementList *)0x0) &&
        (FSlateCachedElementData::RemoveList(pFVar1->ParentData,this),
        pTVar5->SharedReferenceCount != (atomic<int>)0x1)) &&
       (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<5271874907603468936>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\DrawElements.cpp"
                           ,0x288,"List.IsUnique()"), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
LAB_14251b990:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  if ((((this->Ptr).Object != (FSlateCachedElementList *)0x0) &&
      (pTVar5 = (this->Ptr).WeakReferenceCount.ReferenceController,
      pTVar5 != (TReferenceControllerBase<1> *)0x0)) &&
     ((0 < (int)pTVar5->SharedReferenceCount &&
      (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                         ("!Ptr.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\DrawElements.cpp"
                          ,0x28b,L""), bVar6)))) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

