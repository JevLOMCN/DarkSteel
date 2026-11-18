// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 9

// AttachWidget @ 1425ce230

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
TWeakChild<SWidget>::AttachWidget(TWeakChild<SWidget> *this,TSharedPtr<SWidget,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  FSlateAccessibleMessageHandler *pFVar5;
  code *pcVar6;
  atomic<int> aVar7;
  SWidget *pSVar8;
  TSharedRef<SWidget,1> *pTVar9;
  SWidget *pSVar10;
  SWidget *pSVar11;
  bool bVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  TSharedRef<SWidget,1> local_38;
  
  pSVar8 = (SWidget *)(this->WidgetPtr).WeakReferenceCount.ReferenceController;
  pSVar10 = (SWidget *)0x0;
  pSVar11 = pSVar8;
  if (pSVar8 != (SWidget *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar8->_padding_;
    do {
      pSVar11 = pSVar10;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1425ce276;
      LOCK();
      aVar7 = *(atomic<int> *)&pSVar8->_padding_;
      bVar12 = aVar2 == aVar7;
      if (bVar12) {
        *(atomic<int> *)&pSVar8->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar7 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar7;
    } while (!bVar12);
    pSVar10 = (this->WidgetPtr).Object;
    pSVar11 = pSVar8;
  }
LAB_1425ce276:
  pSVar8 = param_1->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar11);
  if (pSVar8 != pSVar10) {
    (this->WidgetPtr).Object = param_1->Object;
    pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (this->WidgetPtr).WeakReferenceCount.ReferenceController) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar4 = (this->WidgetPtr).WeakReferenceCount.ReferenceController;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
      (this->WidgetPtr).WeakReferenceCount.ReferenceController = pTVar3;
    }
    if (*(char *)((longlong)&this->_padding_ + 1) != -0x24) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3
                  ::LOG_Static,(FLogCategoryBase *)&LogSlate);
    }
    SWidget::Invalidate((SWidget *)this->_padding_,ChildOrder);
    if ((param_1->Object != (SWidget *)0x0) && (param_1->Object != SNullWidget::NullWidget.Object))
    {
      pSVar8 = TSharedPtr<SWidget,1>::operator->(param_1);
      if (*(char *)((longlong)&this->_padding_ + 1) != -0x24) {
        UE::Logging::Private::BasicFatalLog
                  ((FStaticBasicLogRecord *)
                   &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::
                    __l3::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
      pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)(this->_padding_ + 8),&local_38);
      pTVar3 = (pTVar9->SharedReferenceCount).ReferenceController;
      pSVar10 = pTVar9->Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pSVar10 != (SWidget *)0x0) && (pSVar10 == SNullWidget::NullWidget.Object)) {
        local_res8[0] = 0;
        `SWidget::AssignParentWidget'::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pSVar8 == SNullWidget::NullWidget.Object) {
        local_res10[0] = 0;
        `SWidget::AssignParentWidget'::__l2::<lambda_2>::operator()(local_res10);
      }
      if (pSVar10 == (SWidget *)0x0) {
        local_res18[0] = 0;
        `SWidget::AssignParentWidget'::__l2::<lambda_3>::operator()(local_res18);
      }
      (pSVar8->ParentWidgetPtr).Object = pSVar10;
      if (pTVar3 != (pSVar8->ParentWidgetPtr).WeakReferenceCount.ReferenceController) {
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
          UNLOCK();
        }
        pTVar4 = (pSVar8->ParentWidgetPtr).WeakReferenceCount.ReferenceController;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar4->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          }
        }
        (pSVar8->ParentWidgetPtr).WeakReferenceCount.ReferenceController = pTVar3;
      }
      if (FSlateApplicationBase::CurrentBaseApplication.Object != (FSlateApplicationBase *)0x0) {
        if ((FSlateApplicationBase::CurrentBaseApplication.Object == (FSlateApplicationBase *)0x0)
           && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                  ("CurrentBaseApplication.IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Application\\SlateApplicationBase.h"
                                   ,0x22a,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((FSlateApplicationBase::CurrentBaseApplication.Object == (FSlateApplicationBase *)0x0)
           && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x44d,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar4 = ((FSlateApplicationBase::CurrentBaseApplication.Object)->AccessibleMessageHandler).
                 SharedReferenceCount.ReferenceController;
        pFVar5 = ((FSlateApplicationBase::CurrentBaseApplication.Object)->AccessibleMessageHandler).
                 Object;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar5->bDirty = true;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      }
      if (pSVar10 != (SWidget *)0x0) {
        SWidget::Invalidate(pSVar10,ChildOrder);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// GetChildAt @ 1425dead0

TSharedRef<SWidget,1> * __thiscall
TWeakChild<SWidget>::GetChildAt
          (TWeakChild<SWidget> *this,TSharedRef<SWidget,1> *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<SWidget,1> *pTVar3;
  
  if (param_1 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChildIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                       ,0xdf,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedRef<SWidget,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  GetWidget(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetChildAt @ 1425deb30

TSharedRef<SWidget_const_,1> * __thiscall
TWeakChild<SWidget>::GetChildAt
          (TWeakChild<SWidget> *this,TSharedRef<SWidget_const_,1> *__return_storage_ptr__,
          int param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SWidget_const_,1> *pTVar4;
  TSharedRef<SWidget,1> *pTVar5;
  TSharedRef<SWidget,1> local_18;
  
  if (param_1 != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChildIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                       ,0xe5,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SWidget_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pTVar5 = GetWidget(this,&local_18);
  __return_storage_ptr__->Object = pTVar5->Object;
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetChildRefAt @ 1425df8d0

FWidgetRef * __thiscall
TWeakChild<SWidget>::GetChildRefAt
          (TWeakChild<SWidget> *this,FWidgetRef *__return_storage_ptr__,int param_1)

{
  SWidget *pSVar1;
  code *pcVar2;
  bool bVar3;
  atomic<int> aVar4;
  bool bVar5;
  atomic<int> aVar6;
  FWidgetRef *pFVar7;
  TOptional<TSharedRef<SWidget,1>_>_u_0 *pTVar8;
  SWidget *pSVar9;
  SWidget *pSVar10;
  SWidget *local_48;
  SWidget *local_40;
  TOptional<TSharedRef<SWidget,1>_>_u_0 local_38;
  TReferenceControllerBase<1> *pTStack_28;
  undefined8 local_20;
  
  pSVar10 = (SWidget *)0x0;
  if ((param_1 != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChildIndex == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                         ,0xf8,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FWidgetRef *)(*pcVar2)();
    return pFVar7;
  }
  pSVar1 = (SWidget *)(this->WidgetPtr).WeakReferenceCount.ReferenceController;
  pSVar9 = pSVar1;
  if (pSVar1 != (SWidget *)0x0) {
    aVar4 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar9 = pSVar10;
      if (aVar4 == (atomic<int>)0x0) goto LAB_1425df955;
      LOCK();
      aVar6 = *(atomic<int> *)&pSVar1->_padding_;
      bVar5 = aVar4 == aVar6;
      if (bVar5) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar5);
    pSVar10 = (this->WidgetPtr).Object;
    pSVar9 = pSVar1;
  }
LAB_1425df955:
  if (pSVar10 == (SWidget *)0x0) {
    bVar3 = false;
    bVar5 = true;
    local_20 = SNullWidget::NullWidget.Object;
    pTVar8 = (TOptional<TSharedRef<SWidget,1>_>_u_0 *)&stack0xffffffffffffffe0;
    local_38.TypedValue.SharedReferenceCount.ReferenceController =
         (FSharedReferencer<1>)(TReferenceControllerBase<1> *)0x0;
    pTStack_28 = (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
    (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
    ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    if (pSVar9 != (SWidget *)0x0) {
      LOCK();
      *(int *)&pSVar9->_padding_ = (int)pSVar9->_padding_ + 1;
      UNLOCK();
      LOCK();
      *(int *)&pSVar9->_padding_ = (int)pSVar9->_padding_ + 1;
      UNLOCK();
    }
    if ((pSVar10 == (SWidget *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FWidgetRef *)(*pcVar2)();
      return pFVar7;
    }
    local_38.TypedValue.Object = pSVar10;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar9);
    (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
    pTVar8 = &local_38;
    (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
    ReferenceController = (TReferenceControllerBase<1> *)0x0;
    bVar3 = true;
    bVar5 = false;
    local_40 = pSVar9;
    local_48 = pSVar10;
    if (pSVar10 != (SWidget *)0x0) {
      (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = pSVar10;
      *(SWidget **)((longlong)&(__return_storage_ptr__->WidgetCopy).field0_0x0 + 8) = pSVar9;
      if (pSVar9 != (SWidget *)0x0) {
        LOCK();
        *(int *)&pSVar9->_padding_ = (int)pSVar9->_padding_ + 1;
        UNLOCK();
      }
    }
  }
  if ((__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object != (SWidget *)0x0) {
    pTVar8 = (TOptional<TSharedRef<SWidget,1>_>_u_0 *)__return_storage_ptr__;
  }
  __return_storage_ptr__->WidgetReference =
       (((TOptional<TSharedRef<SWidget,1>_> *)&(pTVar8->TypedValue).Object)->field0_0x0).TypedValue.
       Object;
  if ((bVar5) &&
     (local_38.TypedValue.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_28);
  }
  if ((bVar3) && (local_48 != (SWidget *)0x0)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar9);
  return __return_storage_ptr__;
}

// GetChildRefAt @ 1425dfa90

FConstWidgetRef * __thiscall
TWeakChild<SWidget>::GetChildRefAt
          (TWeakChild<SWidget> *this,FConstWidgetRef *__return_storage_ptr__,int param_1)

{
  SWidget *pSVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  atomic<int> aVar5;
  bool bVar6;
  atomic<int> aVar7;
  FConstWidgetRef *pFVar8;
  TOptional<TSharedRef<SWidget_const_,1>_>_u_0 *pTVar9;
  SWidget *pSVar10;
  SWidget *pSVar11;
  SWidget *local_res8;
  SWidget *local_58;
  SWidget *local_50;
  TOptional<TSharedRef<SWidget_const_,1>_>_u_0 local_48;
  TReferenceControllerBase<1> *pTStack_38;
  undefined8 local_30;
  
  pSVar11 = (SWidget *)0x0;
  if ((param_1 != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChildIndex == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                         ,0xfe,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    pFVar8 = (FConstWidgetRef *)(*pcVar2)();
    return pFVar8;
  }
  pSVar1 = (SWidget *)(this->WidgetPtr).WeakReferenceCount.ReferenceController;
  pSVar10 = pSVar1;
  if (pSVar1 != (SWidget *)0x0) {
    aVar5 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar10 = pSVar11;
      if (aVar5 == (atomic<int>)0x0) goto LAB_1425dfb15;
      LOCK();
      aVar7 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar5 == aVar7;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar5 + 1);
        aVar7 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar7;
    } while (!bVar6);
    pSVar11 = (this->WidgetPtr).Object;
    pSVar10 = pSVar1;
  }
LAB_1425dfb15:
  if (pSVar11 == (SWidget *)0x0) {
    bVar4 = false;
    bVar3 = false;
    bVar6 = true;
    local_30 = SNullWidget::NullWidget.Object;
    pTVar9 = (TOptional<TSharedRef<SWidget_const_,1>_>_u_0 *)&stack0xffffffffffffffd0;
    (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
    (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
    ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_48.TypedValue.SharedReferenceCount.ReferenceController =
         (FSharedReferencer<1>)(TReferenceControllerBase<1> *)0x0;
    pTStack_38 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    if (pSVar10 != (SWidget *)0x0) {
      LOCK();
      *(int *)&pSVar10->_padding_ = (int)pSVar10->_padding_ + 1;
      UNLOCK();
      LOCK();
      *(int *)&pSVar10->_padding_ = (int)pSVar10->_padding_ + 1;
      UNLOCK();
      LOCK();
      *(int *)&pSVar10->_padding_ = (int)pSVar10->_padding_ + 1;
      UNLOCK();
    }
    if ((pSVar11 == (SWidget *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar6)) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FConstWidgetRef *)(*pcVar2)();
      return pFVar8;
    }
    local_48.TypedValue.Object = pSVar11;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar10);
    (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
    pTVar9 = &local_48;
    (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
    ReferenceController = (TReferenceControllerBase<1> *)0x0;
    bVar4 = true;
    bVar3 = true;
    bVar6 = false;
    local_50 = pSVar10;
    local_58 = pSVar11;
    local_res8 = pSVar10;
    if (pSVar11 != (SWidget *)0x0) {
      (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = pSVar11;
      *(SWidget **)((longlong)&(__return_storage_ptr__->WidgetCopy).field0_0x0 + 8) = pSVar10;
      if (pSVar10 != (SWidget *)0x0) {
        LOCK();
        *(int *)&pSVar10->_padding_ = (int)pSVar10->_padding_ + 1;
        UNLOCK();
      }
    }
  }
  if ((__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object != (SWidget *)0x0) {
    pTVar9 = (TOptional<TSharedRef<SWidget_const_,1>_>_u_0 *)__return_storage_ptr__;
  }
  __return_storage_ptr__->WidgetReference =
       (((TOptional<TSharedRef<SWidget_const_,1>_> *)&(pTVar9->TypedValue).Object)->field0_0x0).
       TypedValue.Object;
  if ((bVar6) &&
     (local_48.TypedValue.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_38);
  }
  if ((bVar3) && (local_58 != (SWidget *)0x0)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_50);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_res8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar10);
  return __return_storage_ptr__;
}

// GetSlotAt @ 1425e3740

FSlotBase * __thiscall TWeakChild<SWidget>::GetSlotAt(TWeakChild<SWidget> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FSlotBase *pFVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_virtual_class_FSlotBase_const&___ptr64___cdecl_TWeakChild<SWidget>::GetSlotAt(int)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_virtual_class_FSlotBase_const&___ptr64___cdecl_TWeakChild<SWidget>::GetSlotAt(int)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_virtual_class_FSlotBase_const&___ptr64___cdecl_TWeakChild<SWidget>::GetSlotAt(int)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FSlotBase::FSlotBase
                ((FSlotBase *)
                 &`private:_virtual_class_FSlotBase_const&___ptr64___cdecl_TWeakChild<SWidget>::GetSlotAt(int)const___ptr64'
                  ::__l2::NullSlot);
      atexit(`TWeakChild<SWidget>::GetSlotAt'::__l2::_dynamic_atexit_destructor_for__NullSlot__);
      _Init_thread_footer(&`private:_virtual_class_FSlotBase_const&___ptr64___cdecl_TWeakChild<SWidget>::GetSlotAt(int)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (param_1 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChildIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                       ,0xf2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSlotBase *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FSlotBase *)
         &`private:_virtual_class_FSlotBase_const&___ptr64___cdecl_TWeakChild<SWidget>::GetSlotAt(int)const___ptr64'
          ::__l2::NullSlot;
}

// GetWidget @ 1425e4480

TSharedRef<SWidget,1> * __thiscall
TWeakChild<SWidget>::GetWidget
          (TWeakChild<SWidget> *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  SWidget *pSVar1;
  code *pcVar2;
  bool bVar3;
  atomic<int> aVar4;
  bool bVar5;
  atomic<int> aVar6;
  TSharedRef<SWidget,1> *pTVar7;
  FSharedReferencer<1> FVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *local_20;
  TReferenceControllerBase<1> *local_10;
  
  if (((((this->WidgetPtr).Object == (SWidget *)0x0) ||
       (pTVar9 = (this->WidgetPtr).WeakReferenceCount.ReferenceController,
       pTVar9 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar9->SharedReferenceCount < 1)) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4236951345917066975>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                         ,0x121,"Num() > 0"), bVar5)) {
    pcVar2 = (code *)swi(3);
    pTVar7 = (TSharedRef<SWidget,1> *)(*pcVar2)();
    return pTVar7;
  }
  FVar8.ReferenceController = (this->WidgetPtr).WeakReferenceCount.ReferenceController;
  pTVar9 = FVar8.ReferenceController;
  if (FVar8.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
LAB_1425e4500:
    FVar8.ReferenceController = SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    pSVar1 = SNullWidget::NullWidget.Object;
    if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar3 = false;
    __return_storage_ptr__->Object = pSVar1;
    bVar5 = true;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar8.ReferenceController;
    local_10 = FVar8.ReferenceController;
    if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) goto LAB_1425e4532;
  }
  else {
    aVar4 = (FVar8.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1425e4500;
      }
      LOCK();
      aVar6 = (FVar8.ReferenceController)->SharedReferenceCount;
      bVar5 = aVar4 == aVar6;
      if (bVar5) {
        (FVar8.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar5);
    pSVar1 = (this->WidgetPtr).Object;
    if (pSVar1 == (SWidget *)0x0) goto LAB_1425e4500;
    LOCK();
    (FVar8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    bVar3 = true;
    __return_storage_ptr__->Object = pSVar1;
    bVar5 = false;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar8.ReferenceController;
    local_20 = FVar8.ReferenceController;
LAB_1425e4532:
    LOCK();
    (FVar8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    if (!bVar5) goto LAB_1425e453f;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
LAB_1425e453f:
  if (bVar3) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// Num @ 1425eb8b0

int __thiscall TWeakChild<SWidget>::Num(TWeakChild<SWidget> *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->WidgetPtr).Object != (SWidget *)0x0) &&
      (pTVar1 = (this->WidgetPtr).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return 1;
  }
  return 0;
}

// NumSlot @ 1425eb8e0

int __thiscall TWeakChild<SWidget>::NumSlot(TWeakChild<SWidget> *this)

{
  return 0;
}

