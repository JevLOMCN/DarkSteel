// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 7

// ApplyAfter<FText_(__cdecl*const_&)(TAttribute<FText>,TSharedPtr<FUICommandInfo_const_,1>)> @ 142797cc0

FText * __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1>,TAttribute<FText>,TSharedPtr<FUICommandInfo_const_,1>_>
::ApplyAfter<FText_(__cdecl*const_&)(TAttribute<FText>,TSharedPtr<FUICommandInfo_const_,1>)>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1>,TAttribute<FText>,TSharedPtr<FUICommandInfo_const_,1>_>
           *this,FText *__return_storage_ptr__,
          _func___cdecl_FText_TAttribute<FText>_TSharedPtr<FUICommandInfo_const_,1> **param_1)

{
  _func___cdecl_FText_TAttribute<FText>_TSharedPtr<FUICommandInfo_const_,1> *p_Var1;
  undefined1 local_res8 [8];
  TSharedPtr<FUICommandInfo_const_,1> local_48;
  TAttribute<FText> local_38;
  
  local_48.Object = *(FUICommandInfo **)&this->field_0x30;
  p_Var1 = *param_1;
  local_48.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x38;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Value.TextData.Reference = *(ITextData **)this;
  if (local_38.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.Value.TextData.Reference + 8))
              (local_38.Value.TextData.Reference,local_res8);
  }
  local_38.Value.Flags = *(uint *)&this->field_0x8;
  local_38.bIsSet = (bool)this->field_0x10;
  local_38.Getter._0_8_ = 0;
  local_38.Getter._8_8_ = 0;
  local_38.Getter._16_4_ = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_38.Getter,
             (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)&this->field_0x18);
  (*p_Var1)(__return_storage_ptr__,&local_38,&local_48);
  return __return_storage_ptr__;
}

// ApplyAfter<bool_(__cdecl*const_&)(float,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText),float> @ 142797d70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
::
ApplyAfter<bool_(__cdecl*const_&)(float,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText),float>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
           *this,_func___cdecl_bool_float_TWeakPtr<FSlateAsyncTaskNotificationImpl,1>_TSharedPtr<SNotificationItem,1>_FText_FText_FText_TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_FText
                 **param_1,float *param_2)

{
  _func___cdecl_bool_float_TWeakPtr<FSlateAsyncTaskNotificationImpl,1>_TSharedPtr<SNotificationItem,1>_FText_FText_FText_TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_FText
  *p_Var1;
  bool bVar2;
  undefined1 local_res8 [8];
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  TSharedPtr<SNotificationItem,1> local_48;
  TWeakPtr<FSlateAsyncTaskNotificationImpl,1> local_38;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_28;
  
  p_Var1 = *param_1;
  local_88.TextData.Reference = *(ITextData **)&this->field_0x68;
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 8))
              (local_88.TextData.Reference,local_res8);
  }
  local_88.Flags = *(uint *)&this->field_0x70;
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_28,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->field_0x50
            );
  local_78.TextData.Reference = *(ITextData **)&this->field_0x40;
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 8))
              (local_78.TextData.Reference,local_res8);
  }
  local_68.TextData.Reference = *(ITextData **)&this->field_0x30;
  local_78.Flags = *(uint *)&this->field_0x48;
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 8))
              (local_68.TextData.Reference,local_res8);
  }
  local_58.TextData.Reference = *(ITextData **)&this->field_0x20;
  local_68.Flags = *(uint *)&this->field_0x38;
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 8))
              (local_58.TextData.Reference,local_res8);
  }
  local_58.Flags = *(uint *)&this->field_0x28;
  local_48.Object = *(SNotificationItem **)&this->field_0x10;
  local_48.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x18;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Object = *(FSlateAsyncTaskNotificationImpl **)this;
  local_38.WeakReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x8;
  if (local_38.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  bVar2 = (*p_Var1)(*param_2,&local_38,&local_48,&local_58,&local_68,&local_78,&local_28,&local_88);
  return bVar2;
}

// ApplyAfter<FText_(__cdecl_SMenuEntryBlock::*const_&)(TAttribute<FText>)const_,SMenuEntryBlock_*_&> @ 142797eb0

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int,0>,TAttribute<FText>_>::
ApplyAfter<FText_(__cdecl_SMenuEntryBlock::*const_&)(TAttribute<FText>)const_,SMenuEntryBlock_*_&>
          (TTupleBase<TIntegerSequence<unsigned_int,0>,TAttribute<FText>_> *this,
          FText *__return_storage_ptr__,pmf_bc9b75de *param_1,SMenuEntryBlock **param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  SMenuEntryBlock *pSVar3;
  undefined1 local_res8 [8];
  longlong *local_48;
  undefined4 local_40;
  undefined1 local_38;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> local_30;
  
  pcVar1 = *(code **)param_1;
  uVar2 = *(undefined8 *)&param_1->field_0x8;
  pSVar3 = DereferenceIfNecessary<SMenuEntryBlock,SMenuEntryBlock_*_&>(param_2);
  local_48 = *(longlong **)this;
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 8))(local_48,local_res8);
  }
  local_40 = *(undefined4 *)&this->field_0x8;
  local_38 = this->field_0x10;
  local_30._0_8_ = 0;
  local_30._8_8_ = 0;
  local_30._16_4_ = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_30,
             (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)&this->field_0x18);
  (*pcVar1)((longlong)&pSVar3->_padding_ + (longlong)(int)uVar2,__return_storage_ptr__,&local_48);
  return __return_storage_ptr__;
}

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText> @ 1427b7540

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
::
~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
           *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(longlong **)&this->field_0x68 != (longlong *)0x0) {
    (**(code **)(**(longlong **)&this->field_0x68 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x50);
  if (*(void **)&this->field_0x58 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x58);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x50);
  if (*(longlong **)&this->field_0x40 != (longlong *)0x0) {
    (**(code **)(**(longlong **)&this->field_0x40 + 0x10))();
  }
  if (*(longlong **)&this->field_0x30 != (longlong *)0x0) {
    (**(code **)(**(longlong **)&this->field_0x30 + 0x10))();
  }
  if (*(longlong **)&this->field_0x20 != (longlong *)0x0) {
    (**(code **)(**(longlong **)&this->field_0x20 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x18);
  plVar3 = *(longlong **)&this->field_0x8;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_> @ 1427b75f0

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1>,SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>
::
~TTupleBase<TIntegerSequence<unsigned_int,0,1>,SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1>,SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>
           *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  
  pTVar6 = *(TReferenceControllerBase<1> **)&this->field_0x38;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar6->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1427b7626;
      }
      LOCK();
      aVar5 = pTVar6->SharedReferenceCount;
      bVar7 = aVar4 == aVar5;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar7);
    if (*(SWidget **)&this->field_0x30 != (SWidget *)0x0) {
      SlateAttributePrivate::FSlateAttributeImpl::ProtectedUnregisterAttribute
                ((FSlateAttributeImpl *)&this->field_0x18,*(SWidget **)&this->field_0x30,Managed);
    }
  }
LAB_1427b7626:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  plVar3 = *(longlong **)&this->field_0x38;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  pTVar6 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar6->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1427b7673;
      }
      LOCK();
      aVar5 = pTVar6->SharedReferenceCount;
      bVar7 = aVar4 == aVar5;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar7);
    if (*(SWidget **)&this->field_0x8 != (SWidget *)0x0) {
      SlateAttributePrivate::FSlateAttributeImpl::ProtectedUnregisterAttribute
                ((FSlateAttributeImpl *)this,*(SWidget **)&this->field_0x8,Managed);
    }
  }
LAB_1427b7673:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}

// ApplyAfter<FText_(__cdecl_SComboButton::*const_&)(TAttribute<FText>)const_,SComboButton_*_&> @ 14283e0c0

FText * __thiscall
UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int,0>,TAttribute<FText>_>::
ApplyAfter<FText_(__cdecl_SComboButton::*const_&)(TAttribute<FText>)const_,SComboButton_*_&>
          (TTupleBase<TIntegerSequence<unsigned_int,0>,TAttribute<FText>_> *this,
          FText *__return_storage_ptr__,pmf_9e2b6382 *param_1,SComboButton **param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  SComboButton *pSVar3;
  undefined1 local_res8 [8];
  longlong *local_48;
  undefined4 local_40;
  undefined1 local_38;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> local_30;
  
  pcVar1 = *(code **)param_1;
  uVar2 = *(undefined8 *)&param_1->field_0x8;
  pSVar3 = DereferenceIfNecessary<SComboButton,SComboButton_*_&>(param_2);
  local_48 = *(longlong **)this;
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 8))(local_48,local_res8);
  }
  local_40 = *(undefined4 *)&this->field_0x8;
  local_38 = this->field_0x10;
  local_30._0_8_ = 0;
  local_30._8_8_ = 0;
  local_30._16_4_ = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_30,
             (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)&this->field_0x18);
  (*pcVar1)((longlong)&pSVar3->_padding_ + (longlong)(int)uVar2,__return_storage_ptr__,&local_48);
  return __return_storage_ptr__;
}

// ApplyAfter<EVisibility_(__cdecl_SNotificationItemImpl::*const_&)(TDelegate<EVisibility___cdecl(enum_SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>,EVisibility,EVisibility,EVisibility,EVisibility)const_,SNotificationItemImpl_*_&> @ 1429b2190

EVisibility __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4>,TDelegate<EVisibility___cdecl(enum_SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>,EVisibility,EVisibility,EVisibility,EVisibility>
::
ApplyAfter<EVisibility_(__cdecl_SNotificationItemImpl::*const_&)(TDelegate<EVisibility___cdecl(enum_SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>,EVisibility,EVisibility,EVisibility,EVisibility)const_,SNotificationItemImpl_*_&>
          (void *this,pmf_953563f3 *param_1,SNotificationItemImpl **param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  SNotificationItemImpl *pSVar5;
  SNotificationItemImpl *pSVar6;
  SNotificationItemImpl *pSVar7;
  TDelegate<EVisibility___cdecl(SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>
  *pTVar8;
  SNotificationItemImpl **in_R9;
  int iStack_40;
  undefined1 local_38 [32];
  
  pSVar5 = *param_2;
  pSVar6 = param_2[1];
  pSVar7 = DereferenceIfNecessary<SNotificationItemImpl,SNotificationItemImpl_*_&>(in_R9);
  iStack_40 = (int)pSVar6;
  uVar1 = *(undefined1 *)((longlong)this + 0x1b);
  uVar2 = *(undefined1 *)((longlong)this + 0x1a);
  uVar3 = *(undefined1 *)((longlong)this + 0x19);
  uVar4 = *(undefined1 *)((longlong)this + 0x18);
  pTVar8 = TDelegate<EVisibility___cdecl(enum_SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>
           ::
           TDelegate<EVisibility___cdecl(enum_SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>
                     (local_38,this);
  (*(code *)pSVar5)((longlong)&pSVar7->_padding_ + (longlong)iStack_40,param_1,pTVar8,uVar4,uVar3,
                    uVar2,uVar1);
  return (EVisibility)SUB81(param_1,0);
}

