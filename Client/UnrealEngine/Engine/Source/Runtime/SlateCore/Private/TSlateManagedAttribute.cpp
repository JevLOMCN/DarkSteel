// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 19

// TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,1,TSlateAttributeComparePredicate<TEqualTo<void>_>_> @ 142541980

TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,1,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
* __thiscall
SWidget::
TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,1,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
::
TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,1,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
          (TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,1,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
           *this,TSharedRef<SWidget,1> *param_1,
          TAttribute<UE::Slate::Private::FConstructionCounter> *param_2,
          FConstructionCounter *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
  ::
  TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
            ((TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
              *)this,pSVar2,param_2,param_3);
  *(SWidget **)&this->field_0x8 = pSVar2;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,1,TSlateAttributeComparePredicate<TEqualTo<void>_>_> @ 142541a00

TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,1,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
* __thiscall
SWidget::
TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,1,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
::
TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,1,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
          (TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,1,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
           *this,TSharedRef<SWidget,1> *param_1,
          TDelegate<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>
          *param_2,FConstructionCounter *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  char cVar3;
  FReadAccessScope local_28;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(int *)this = param_3->Value;
  UE::Slate::Private::FConstructionCounter::MoveConstructionCounter =
       UE::Slate::Private::FConstructionCounter::MoveConstructionCounter + 1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_28);
  if ((*(int *)&param_2->field_0x10 != 0) && (*(longlong **)&param_2->field_0x8 != (longlong *)0x0))
  {
    cVar3 = (**(code **)(**(longlong **)&param_2->field_0x8 + 0x38))();
    if (cVar3 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      SlateAttributePrivate::
      TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
      ::ConstructWrapper((TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
                          *)this,pSVar2,param_2,None);
      goto LAB_142541a8b;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
LAB_142541a8b:
  *(SWidget **)&this->field_0x8 = pSVar2;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,1,TSlateAttributeComparePredicate<TEqualTo<void>_>_> @ 142541ae0

TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,1,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
* __thiscall
SWidget::
TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,1,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
::
TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,1,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
          (TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,1,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
           *this,TSharedRef<SWidget,1> *param_1)

{
  SWidget *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  pSVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    *(undefined4 *)this = 0;
    UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter =
         UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter + 1;
    *(SWidget **)&this->field_0x8 = pSVar1;
    *(undefined8 *)&this->field_0x10 = 0;
  }
  else {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    *(undefined4 *)this = 0;
    UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter =
         UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter + 1;
    *(SWidget **)&this->field_0x8 = pSVar1;
    *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar2;
    LOCK();
    pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,1,TSlateAttributeComparePredicate<TEqualTo<void>_>_> @ 142541b50

TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,1,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
* __thiscall
SWidget::
TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,1,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
::
TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,1,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
          (TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,1,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
           *this,TSharedRef<SWidget,1> *param_1,
          TAttribute<UE::Slate::Private::FConstructionCounter> *param_2,
          FConstructionCounter *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  FReadAccessScope local_38;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (param_2->bIsSet != false) {
    bVar4 = TAttribute<UE::Slate::Private::FConstructionCounter>::IsBound(param_2);
    if (!bVar4) {
      param_3 = TAttribute<UE::Slate::Private::FConstructionCounter>::Get(param_2);
    }
  }
  *(int *)this = param_3->Value;
  UE::Slate::Private::FConstructionCounter::CopyConstructionCounter =
       UE::Slate::Private::FConstructionCounter::CopyConstructionCounter + 1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,&local_38);
  if ((*(int *)&(param_2->Getter).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(param_2->Getter).field_0x8, plVar3 != (longlong *)0x0)) {
    cVar5 = (**(code **)(*plVar3 + 0x38))();
    if (cVar5 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      SlateAttributePrivate::
      TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
      ::ConstructWrapper((TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
                          *)this,pSVar2,&param_2->Getter,None);
      goto LAB_142541bfc;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
LAB_142541bfc:
  *(SWidget **)&this->field_0x8 = pSVar2;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>_> @ 142541c40

TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
* __thiscall
SlateAttributePrivate::
TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
::
TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
          (TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
           *this,TSharedRef<SWidget,1> *param_1,
          TDelegate<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>
          *param_2,FConstructionCounter *param_3)

{
  SWidget *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  char cVar3;
  FReadAccessScope local_28;
  
  pSVar1 = param_1->Object;
  *(int *)&this->_padding_ = param_3->Value;
  UE::Slate::Private::FConstructionCounter::CopyConstructionCounter =
       UE::Slate::Private::FConstructionCounter::CopyConstructionCounter + 1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_28);
  if ((*(int *)&param_2->field_0x10 != 0) && (*(longlong **)&param_2->field_0x8 != (longlong *)0x0))
  {
    cVar3 = (**(code **)(**(longlong **)&param_2->field_0x8 + 0x38))();
    if (cVar3 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
      ::ConstructWrapper((TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
                          *)this,pSVar1,param_2,None);
      goto LAB_142541cb8;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
LAB_142541cb8:
  (this->ManagedWidget).Object = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  (this->ManagedWidget).WeakReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// ~TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>_> @ 14254a270

void __thiscall
SlateAttributePrivate::
TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
::
~TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
          (TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
           *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  SWidget *pSVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar5 = (this->ManagedWidget).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14254a2a0;
      }
      LOCK();
      aVar4 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar4;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar6);
    pSVar3 = (this->ManagedWidget).Object;
    if (pSVar3 != (SWidget *)0x0) {
      FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,pSVar3,Managed);
    }
  }
LAB_14254a2a0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pTVar5 = (this->ManagedWidget).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  return;
}

// Assign @ 142567ba0

void __thiscall
SlateAttributePrivate::
TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
::Assign(TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
         *this,TAttribute<UE::Slate::Private::FConstructionCounter> *param_1,
        FConstructionCounter *param_2)

{
  SWidget *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = (this->ManagedWidget).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142567bd0;
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
    pSVar1 = (this->ManagedWidget).Object;
    if (pSVar1 != (SWidget *)0x0) {
      TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
      ::Assign((TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
                *)this,pSVar1,param_1,param_2,None);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return;
    }
  }
LAB_142567bd0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Assign @ 142567c10

void __thiscall
SlateAttributePrivate::
TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
::Assign(TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
         *this,TAttribute<UE::Slate::Private::FConstructionCounter> *param_1)

{
  SWidget *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = (this->ManagedWidget).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142567c40;
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
    pSVar1 = (this->ManagedWidget).Object;
    if (pSVar1 != (SWidget *)0x0) {
      TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
      ::Assign((TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
                *)this,pSVar1,param_1,None);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return;
    }
  }
LAB_142567c40:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Assign @ 142567c80

void __thiscall
SlateAttributePrivate::
TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
::Assign(TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
         *this,TAttribute<UE::Slate::Private::FConstructionCounter> *param_1,
        FConstructionCounter *param_2)

{
  SWidget *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = (this->ManagedWidget).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142567cb0;
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
    pSVar1 = (this->ManagedWidget).Object;
    if (pSVar1 != (SWidget *)0x0) {
      TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
      ::Assign((TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
                *)this,pSVar1,param_1,param_2,None);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return;
    }
  }
LAB_142567cb0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Assign @ 142567cf0

void __thiscall
SlateAttributePrivate::
TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
::Assign(TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
         *this,TAttribute<UE::Slate::Private::FConstructionCounter> *param_1,
        FConstructionCounter *param_2)

{
  SWidget *pSVar1;
  longlong *plVar2;
  atomic<int> aVar3;
  char cVar4;
  atomic<int> aVar5;
  FConstructionCounter *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  FReadAccessScope local_38;
  
  pTVar7 = (this->ManagedWidget).WeakReferenceCount.ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar7->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142567d31;
      }
      LOCK();
      aVar5 = pTVar7->SharedReferenceCount;
      bVar8 = aVar3 == aVar5;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar8);
    pSVar1 = (this->ManagedWidget).Object;
    if (pSVar1 != (SWidget *)0x0) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,
                 &local_38);
      if (((*(int *)&(param_1->Getter).field_0x10 == 0) ||
          (plVar2 = *(longlong **)&(param_1->Getter).field_0x8, plVar2 == (longlong *)0x0)) ||
         (cVar4 = (**(code **)(*plVar2 + 0x38))(), cVar4 == '\0')) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_38);
        if (param_1->bIsSet == false) {
          TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
          ::Set((TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
                 *)this,pSVar1,param_2);
        }
        else {
          pFVar6 = TAttribute<UE::Slate::Private::FConstructionCounter>::Get(param_1);
          TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
          ::Set((TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
                 *)this,pSVar1,pFVar6);
        }
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_38);
        TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
        ::AssignBinding((TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
                         *)this,pSVar1,&param_1->Getter,None);
      }
    }
  }
LAB_142567d31:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// Assign @ 142567df0

void __thiscall
SlateAttributePrivate::
TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
::Assign(TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
         *this,TAttribute<UE::Slate::Private::FConstructionCounter> *param_1)

{
  SWidget *pSVar1;
  longlong *plVar2;
  atomic<int> aVar3;
  char cVar4;
  atomic<int> aVar5;
  FConstructionCounter *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  FReadAccessScope local_28;
  
  pTVar7 = (this->ManagedWidget).WeakReferenceCount.ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar7->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142567e30;
      }
      LOCK();
      aVar5 = pTVar7->SharedReferenceCount;
      bVar8 = aVar3 == aVar5;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar8);
    pSVar1 = (this->ManagedWidget).Object;
    if (pSVar1 != (SWidget *)0x0) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,
                 &local_28);
      if (((*(int *)&(param_1->Getter).field_0x10 == 0) ||
          (plVar2 = *(longlong **)&(param_1->Getter).field_0x8, plVar2 == (longlong *)0x0)) ||
         (cVar4 = (**(code **)(*plVar2 + 0x38))(), cVar4 == '\0')) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_28);
        if (param_1->bIsSet == false) {
          FSlateAttributeImpl::ProtectedUnregisterAttribute
                    ((FSlateAttributeImpl *)this,pSVar1,Managed);
        }
        else {
          pFVar6 = TAttribute<UE::Slate::Private::FConstructionCounter>::Get(param_1);
          TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
          ::Set((TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
                 *)this,pSVar1,pFVar6);
        }
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_28);
        TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
        ::AssignBinding((TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
                         *)this,pSVar1,&param_1->Getter,None);
      }
    }
  }
LAB_142567e30:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// Assign @ 142567ef0

void __thiscall
SlateAttributePrivate::
TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
::Assign(TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
         *this,TAttribute<UE::Slate::Private::FConstructionCounter> *param_1,
        FConstructionCounter *param_2)

{
  SWidget *pSVar1;
  longlong *plVar2;
  atomic<int> aVar3;
  char cVar4;
  atomic<int> aVar5;
  FConstructionCounter *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  FReadAccessScope local_38;
  
  pTVar7 = (this->ManagedWidget).WeakReferenceCount.ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar7->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142567f31;
      }
      LOCK();
      aVar5 = pTVar7->SharedReferenceCount;
      bVar8 = aVar3 == aVar5;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar8);
    pSVar1 = (this->ManagedWidget).Object;
    if (pSVar1 != (SWidget *)0x0) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,
                 &local_38);
      if (((*(int *)&(param_1->Getter).field_0x10 == 0) ||
          (plVar2 = *(longlong **)&(param_1->Getter).field_0x8, plVar2 == (longlong *)0x0)) ||
         (cVar4 = (**(code **)(*plVar2 + 0x38))(), cVar4 == '\0')) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_38);
        if (param_1->bIsSet == false) {
          TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
          ::Set((TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
                 *)this,pSVar1,param_2);
        }
        else {
          pFVar6 = TAttribute<UE::Slate::Private::FConstructionCounter>::Get(param_1);
          TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
          ::Set((TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
                 *)this,pSVar1,pFVar6);
        }
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_38);
        TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
        ::AssignBinding((TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
                         *)this,pSVar1,&param_1->Getter,None);
      }
    }
  }
LAB_142567f31:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// Bind @ 142568330

void __thiscall
SlateAttributePrivate::
TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
::Bind(TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
       *this,TDelegate<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>
             *param_1)

{
  SWidget *pSVar1;
  atomic<int> aVar2;
  char cVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  FReadAccessScope local_28;
  
  pTVar5 = (this->ManagedWidget).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142568370;
      }
      LOCK();
      aVar4 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar4;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar6);
    pSVar1 = (this->ManagedWidget).Object;
    if (pSVar1 != (SWidget *)0x0) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_28);
      if (((*(int *)&param_1->field_0x10 == 0) ||
          (*(longlong **)&param_1->field_0x8 == (longlong *)0x0)) ||
         (cVar3 = (**(code **)(**(longlong **)&param_1->field_0x8 + 0x38))(), cVar3 == '\0')) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_28);
        FSlateAttributeImpl::ProtectedUnregisterAttribute
                  ((FSlateAttributeImpl *)this,pSVar1,Managed);
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_28);
        TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
        ::AssignBinding((TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
                         *)this,pSVar1,param_1,None);
      }
    }
  }
LAB_142568370:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return;
}

// Bind @ 142568400

void __thiscall
SlateAttributePrivate::
TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
::Bind(TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
       *this,TDelegate<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>
             *param_1)

{
  SWidget *pSVar1;
  atomic<int> aVar2;
  char cVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  FReadAccessScope local_28;
  
  pTVar5 = (this->ManagedWidget).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142568440;
      }
      LOCK();
      aVar4 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar4;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar6);
    pSVar1 = (this->ManagedWidget).Object;
    if (pSVar1 != (SWidget *)0x0) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_28);
      if (((*(int *)&param_1->field_0x10 == 0) ||
          (*(longlong **)&param_1->field_0x8 == (longlong *)0x0)) ||
         (cVar3 = (**(code **)(**(longlong **)&param_1->field_0x8 + 0x38))(), cVar3 == '\0')) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_28);
        FSlateAttributeImpl::ProtectedUnregisterAttribute
                  ((FSlateAttributeImpl *)this,pSVar1,Managed);
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_28);
        TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
        ::AssignBinding((TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
                         *)this,pSVar1,param_1,None);
      }
    }
  }
LAB_142568440:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return;
}

// Set @ 142590280

void __thiscall
SlateAttributePrivate::
TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
::Set(TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
      *this,FConstructionCounter *param_1)

{
  SWidget *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = (this->ManagedWidget).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1425902b0;
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
    pSVar1 = (this->ManagedWidget).Object;
    if (pSVar1 != (SWidget *)0x0) {
      TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
      ::Set((TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
             *)this,pSVar1,param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return;
    }
  }
LAB_1425902b0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Set @ 1425902f0

void __thiscall
SlateAttributePrivate::
TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
::Set(TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
      *this,FConstructionCounter *param_1)

{
  SWidget *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = (this->ManagedWidget).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142590320;
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
    pSVar1 = (this->ManagedWidget).Object;
    if (pSVar1 != (SWidget *)0x0) {
      TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
      ::Set((TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
             *)this,pSVar1,param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return;
    }
  }
LAB_142590320:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// UpdateNow @ 1425ab630

void __thiscall
SlateAttributePrivate::
TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
::UpdateNow(TSlateManagedAttribute<UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
            *this)

{
  SWidget *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = (this->ManagedWidget).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1425ab660;
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
    pSVar1 = (this->ManagedWidget).Object;
    if (pSVar1 != (SWidget *)0x0) {
      FSlateAttributeImpl::ProtectedUpdateNow((FSlateAttributeImpl *)this,pSVar1,Managed);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return;
    }
  }
LAB_1425ab660:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// ~TSlateManagedAttribute<FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>_> @ 1425c0340

void __thiscall
SlateAttributePrivate::
TSlateManagedAttribute<FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
::
~TSlateManagedAttribute<FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
          (TSlateManagedAttribute<FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
           *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  SWidget *pSVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar5 = (this->ManagedWidget).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1425c0370;
      }
      LOCK();
      aVar4 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar4;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar6);
    pSVar3 = (this->ManagedWidget).Object;
    if (pSVar3 != (SWidget *)0x0) {
      FSlateAttributeMetaData::UnregisterAttribute(pSVar3,(FSlateAttributeBase *)this);
    }
  }
LAB_1425c0370:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pTVar5 = (this->ManagedWidget).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  return;
}

// ~TSlateManagedAttribute<FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>_> @ 1425c03c0

void __thiscall
SlateAttributePrivate::
TSlateManagedAttribute<FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
::
~TSlateManagedAttribute<FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
          (TSlateManagedAttribute<FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
           *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  SWidget *pSVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar5 = (this->ManagedWidget).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1425c03f0;
      }
      LOCK();
      aVar4 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar4;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar6);
    pSVar3 = (this->ManagedWidget).Object;
    if (pSVar3 != (SWidget *)0x0) {
      FSlateAttributeMetaData::UnregisterAttribute(pSVar3,(FSlateAttributeBase *)this);
    }
  }
LAB_1425c03f0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pTVar5 = (this->ManagedWidget).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  return;
}

