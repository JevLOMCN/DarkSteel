// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 11

// FSlotBase @ 142547430

FSlotBase * __thiscall FSlotBase::FSlotBase(FSlotBase *this,TSharedRef<SWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Owner = (FChildren *)0x0;
  this->_padding_ = (longlong)&___7FSlotBase__6B_;
  (this->Widget).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->Widget).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// FSlotBase @ 142547470

FSlotBase * __thiscall FSlotBase::FSlotBase(FSlotBase *this,FChildren *param_1)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  
  this->Owner = param_1;
  this->_padding_ = (longlong)&___7FSlotBase__6B_;
  (this->Widget).Object = SNullWidget::NullWidget.Object;
  FVar2 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->Widget).SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return this;
}

// FSlotBase @ 1425474b0

FSlotBase * __thiscall FSlotBase::FSlotBase(FSlotBase *this)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  
  this->Owner = (FChildren *)0x0;
  this->_padding_ = (longlong)&___7FSlotBase__6B_;
  (this->Widget).Object = SNullWidget::NullWidget.Object;
  FVar2 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->Widget).SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return this;
}

// ~FSlotBase @ 14254be90

void __thiscall FSlotBase::~FSlotBase(FSlotBase *this)

{
  this->_padding_ = (longlong)&___7FSlotBase__6B_;
  DetatchParentFromContent(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Widget).SharedReferenceCount.ReferenceController);
  return;
}

// AfterContentOrOwnerAssigned @ 142566410

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlotBase::AfterContentOrOwnerAssigned(FSlotBase *this)

{
  FChildren *pFVar1;
  SWidget *pSVar2;
  SWidget *this_00;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  SWidget *pSVar6;
  SWidget *pSVar7;
  SWidget *pSVar8;
  SWidget *pSVar9;
  bool bVar10;
  TSharedPtr<SWidget,1> local_18;
  
  pFVar1 = this->Owner;
  if (pFVar1 != (FChildren *)0x0) {
    if (pFVar1->Debug_DestroyedTag != 0xdc) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3
                  ::LOG_Static,(FLogCategoryBase *)&LogSlate);
    }
    pSVar2 = pFVar1->Owner;
    if ((pSVar2 != (SWidget *)0x0) &&
       (this_00 = (this->Widget).Object, this_00 != SNullWidget::NullWidget.Object)) {
      pSVar6 = (SWidget *)pSVar2->_padding_;
      pSVar9 = (SWidget *)0x0;
      pSVar7 = pSVar6;
      pSVar8 = pSVar9;
      if (pSVar6 != (SWidget *)0x0) {
        aVar4 = *(atomic<int> *)&pSVar6->_padding_;
        do {
          pSVar7 = pSVar9;
          pSVar8 = (SWidget *)0x0;
          if (aVar4 == (atomic<int>)0x0) goto LAB_142566495;
          LOCK();
          aVar5 = *(atomic<int> *)&pSVar6->_padding_;
          bVar10 = aVar4 == aVar5;
          if (bVar10) {
            *(atomic<int> *)&pSVar6->_padding_ = (atomic<int>)((int)aVar4 + 1);
            aVar5 = aVar4;
          }
          UNLOCK();
          aVar4 = aVar5;
        } while (!bVar10);
        pSVar7 = pSVar6;
        pSVar8 = (SWidget *)pSVar2->_padding_;
      }
LAB_142566495:
      pSVar6 = (SWidget *)&pSVar8->_padding_;
      if (pSVar8 == (SWidget *)0x0) {
        pSVar6 = pSVar9;
      }
      if ((pSVar6 != (SWidget *)&pSVar2->_padding_) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("SharedThis.Get() == this",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x67f,L""), bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (pSVar8 == (SWidget *)0x0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x416,L"");
        if (bVar10) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L"");
        if (bVar10) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (pSVar7 != (SWidget *)0x0) {
        LOCK();
        *(atomic<int> *)&pSVar7->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&pSVar7->_padding_ + 1);
        UNLOCK();
      }
      local_18.Object = pSVar8;
      local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pSVar7;
      SWidget::AssignParentWidget(this_00,&local_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar7);
    }
  }
  return;
}

// DetachWidget @ 14257ca70

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWidget,1> * __thiscall
FSlotBase::DetachWidget(FSlotBase *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  SWidget *pSVar1;
  FChildren *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  FSharedReferencer<1> FVar5;
  SWidget *pSVar6;
  
  pSVar1 = (this->Widget).Object;
  if (pSVar1 != SNullWidget::NullWidget.Object) {
    pFVar2 = this->Owner;
    if (pFVar2 == (FChildren *)0x0) {
      pSVar6 = (SWidget *)0x0;
    }
    else {
      if (pFVar2->Debug_DestroyedTag != 0xdc) {
        UE::Logging::Private::BasicFatalLog
                  ((FStaticBasicLogRecord *)
                   &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::
                    __l3::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
      pSVar6 = pFVar2->Owner;
    }
    SWidget::ConditionallyDetatchParentWidget(pSVar1,pSVar6);
    pTVar3 = (this->Widget).SharedReferenceCount.ReferenceController;
    pSVar1 = (this->Widget).Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    FVar5.ReferenceController = SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    pSVar6 = SNullWidget::NullWidget.Object;
    if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->Widget).SharedReferenceCount.ReferenceController;
    (this->Widget).Object = pSVar6;
    (this->Widget).SharedReferenceCount.ReferenceController = FVar5.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    __return_storage_ptr__->Object = pSVar1;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (SWidget *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// DetatchParentFromContent @ 14257cb70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlotBase::DetatchParentFromContent(FSlotBase *this)

{
  SWidget *this_00;
  FChildren *pFVar1;
  
  this_00 = (this->Widget).Object;
  if (this_00 != SNullWidget::NullWidget.Object) {
    pFVar1 = this->Owner;
    if (pFVar1 != (FChildren *)0x0) {
      if (pFVar1->Debug_DestroyedTag != 0xdc) {
        UE::Logging::Private::BasicFatalLog
                  ((FStaticBasicLogRecord *)
                   &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::
                    __l3::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
      SWidget::ConditionallyDetatchParentWidget(this_00,pFVar1->Owner);
      return;
    }
    SWidget::ConditionallyDetatchParentWidget(this_00,(SWidget *)0x0);
  }
  return;
}

// GetOwnerWidget @ 142582410

/* WARNING: Enum "Type": Some values do not have unique names */

SWidget * __thiscall FSlotBase::GetOwnerWidget(FSlotBase *this)

{
  FChildren *pFVar1;
  
  pFVar1 = this->Owner;
  if (pFVar1 != (FChildren *)0x0) {
    if (pFVar1->Debug_DestroyedTag != 0xdc) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3
                  ::LOG_Static,(FLogCategoryBase *)&LogSlate);
    }
    return pFVar1->Owner;
  }
  return (SWidget *)0x0;
}

// Invalidate @ 14258bae0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlotBase::Invalidate(FSlotBase *this,EInvalidateWidgetReason param_1)

{
  FChildren *pFVar1;
  
  pFVar1 = this->Owner;
  if (pFVar1 != (FChildren *)0x0) {
    if (pFVar1->Debug_DestroyedTag != 0xdc) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3
                  ::LOG_Static,(FLogCategoryBase *)&LogSlate);
    }
    if (pFVar1->Owner != (SWidget *)0x0) {
      SWidget::Invalidate(pFVar1->Owner,param_1);
    }
  }
  return;
}

// SetOwner @ 142591a70

void __thiscall FSlotBase::SetOwner(FSlotBase *this,FChildren *param_1)

{
  bool bVar1;
  undefined1 local_res8 [8];
  
  if (this->Owner != param_1) {
    if ((this->Owner != (FChildren *)0x0) &&
       (bVar1 = `FSlotBase::SetOwner'::__l6::<lambda_1>::operator()(local_res8), !bVar1)) {
      return;
    }
    this->Owner = param_1;
    AfterContentOrOwnerAssigned(this);
  }
  return;
}

// operator() @ 15048fd00

bool __thiscall `FSlotBase::SetOwner'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4518038568685273126>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4518038568685273126>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

