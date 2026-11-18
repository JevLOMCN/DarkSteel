// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 16

// Call @ 142d74690

EVisibility __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SCheckBoxList::Construct'::__l2::<lambda_1>,EVisibility>::Call(void *param_1)

{
  EVisibility EVar1;
  char *in_RDX;
  
  EVar1.Value.Value = EVisibility::Hidden.Value.Value;
  if (*in_RDX != '\0') {
    EVar1.Value.Value = EVisibility::Visible.Value.Value;
  }
  *(TEnumAsByte<EVisibility::Private> *)param_1 = EVar1.Value.Value;
  return (EVisibility)SUB81(param_1,0);
}

// Call @ 142d746c0

FText * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SCustomTextFilterDialog::Construct'::__l2::<lambda_1>,FText>::Call
          (FText *__return_storage_ptr__,void *param_1)

{
  longlong lVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  
  lVar1 = *(longlong *)param_1;
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar2 = *(ITextData **)(lVar1 + 0x2b0);
  (__return_storage_ptr__->TextData).Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  __return_storage_ptr__->Flags = *(uint *)(lVar1 + 0x2b8);
  return __return_storage_ptr__;
}

// Call @ 142d74710

EVisibility __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SFilterSearchBoxImpl::Construct'::__l2::<lambda_1>,EVisibility>::Call
          (void *param_1)

{
  void *in_RDX;
  
  `SFilterSearchBoxImpl::Construct'::__l2::<lambda_1>::operator()(in_RDX);
  return (EVisibility)SUB81(param_1,0);
}

// Call @ 142d74740

FSlateBrush * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SRichTextWarningOrErrorBox::Construct'::__l2::<lambda_1>,FSlateBrush_const_*>::
Call(void *param_1)

{
  EMessageStyle *pEVar1;
  ISlateStyle *pIVar2;
  FName *pFVar3;
  FSlateBrush *pFVar4;
  char *pcVar5;
  code *pcVar6;
  FName FStackX_8;
  FName FStackX_10;
  
  pEVar1 = TAttribute<enum_EMessageStyle>::Get((void *)(*(longlong *)param_1 + 0x300));
  if (*pEVar1 == Warning) {
    pIVar2 = FAppStyle::Get();
    pcVar5 = "RoundedWarning";
    pcVar6 = *(code **)((longlong)*pIVar2 + 0x50);
    pFVar3 = &FStackX_8;
  }
  else {
    pIVar2 = FAppStyle::Get();
    pcVar5 = "RoundedError";
    pcVar6 = *(code **)((longlong)*pIVar2 + 0x50);
    pFVar3 = &FStackX_10;
  }
  pFVar3 = ::FName::FName(pFVar3,pcVar5);
  pFVar4 = (FSlateBrush *)(*pcVar6)(pIVar2,*pFVar3,0,0);
  return pFVar4;
}

// Call @ 142d74750

EVisibility __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SSidebarDrawerContent::Construct'::__l2::<lambda_1>,EVisibility>::Call
          (void *param_1)

{
  EVisibility EVar1;
  TArray<TSharedRef<ISidebarDrawerContent,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined8 *in_RDX;
  TArray<TSharedRef<ISidebarDrawerContent,1>,TSizedDefaultAllocator<32>_> local_18;
  
  pTVar2 = SSidebarDrawerContent::GetOrderedSections((SSidebarDrawerContent *)*in_RDX,&local_18);
  EVar1 = EVisibility::Collapsed;
  if (1 < pTVar2->ArrayNum) {
    EVar1 = EVisibility::Visible;
  }
  *(TEnumAsByte<EVisibility::Private> *)param_1 = EVar1.Value.Value;
  DestructItems<TSharedRef<ISidebarDrawerContent,1>,int>
            ((TSharedRef<ISidebarDrawerContent,1> *)local_18.AllocatorInstance.Data,
             local_18.ArrayNum);
  if ((TSharedRef<ISidebarDrawerContent,1> *)local_18.AllocatorInstance.Data !=
      (TSharedRef<ISidebarDrawerContent,1> *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return (EVisibility)SUB81(param_1,0);
}

// Call @ 142d747b0

FSlateBrush * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SWarningOrErrorBox::Construct'::__l2::<lambda_1>,FSlateBrush_const_*>::Call
          (void *param_1)

{
  EMessageStyle *pEVar1;
  ISlateStyle *pIVar2;
  FName *pFVar3;
  FSlateBrush *pFVar4;
  char *pcVar5;
  code *pcVar6;
  FName FStackX_8;
  FName FStackX_10;
  
  pEVar1 = TAttribute<enum_EMessageStyle>::Get((void *)(*(longlong *)param_1 + 0x2e0));
  if (*pEVar1 == Warning) {
    pIVar2 = FAppStyle::Get();
    pcVar5 = "RoundedWarning";
    pcVar6 = *(code **)((longlong)*pIVar2 + 0x50);
    pFVar3 = &FStackX_8;
  }
  else {
    pIVar2 = FAppStyle::Get();
    pcVar5 = "RoundedError";
    pcVar6 = *(code **)((longlong)*pIVar2 + 0x50);
    pFVar3 = &FStackX_10;
  }
  pFVar3 = ::FName::FName(pFVar3,pcVar5);
  pFVar4 = (FSlateBrush *)(*pcVar6)(pIVar2,*pFVar3,0,0);
  return pFVar4;
}

// Call @ 142d747c0

EVisibility __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SCustomDialog::CreateContentBox'::__l2::<lambda_1>,EVisibility>::Call
          (void *param_1)

{
  EVisibility EVar1;
  FSlateBrush **ppFVar2;
  TAttribute<FSlateBrush_const_*> *in_RDX;
  FSlateBrush *pFVar3;
  
  if (in_RDX->bIsSet == false) {
    pFVar3 = (FSlateBrush *)0x0;
  }
  else {
    ppFVar2 = TAttribute<FSlateBrush_const_*>::Get(in_RDX);
    pFVar3 = *ppFVar2;
  }
  EVar1.Value.Value = EVisibility::Collapsed.Value.Value;
  if (pFVar3 != (FSlateBrush *)0x0) {
    EVar1.Value.Value = EVisibility::Visible.Value.Value;
  }
  *(TEnumAsByte<EVisibility::Private> *)param_1 = EVar1.Value.Value;
  return (EVisibility)SUB81(param_1,0);
}

// Call @ 142d74810

float __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SSidebarContainer::AddContentDockSlot'::__l5::<lambda_1>,float>::Call
          (void *param_1)

{
  return *(float *)(*(longlong *)param_1 + 800);
}

// Call @ 142d74830

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SSearchableComboBox::OnMenuOpenChanged'::__l5::<lambda_1>,void,FSlateUser_&>::
Call(void *param_1,FSlateUser *param_2)

{
  bool bVar1;
  TSharedPtr<SWidget_const_,1> TStack_28;
  TSharedRef<SWidget,1> TStack_18;
  
  TSharedFromThis<SWidget,1>::AsShared
            ((TSharedFromThis<SWidget,1> *)(*(longlong *)param_1 + 8),&TStack_18);
  TStack_28.Object = *(SWidget **)(*(longlong *)param_1 + 0x440);
  TStack_28.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)(*(longlong *)param_1 + 0x448);
  if (TStack_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (TStack_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(TStack_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar1 = FSlateUser::IsWidgetInFocusPath(param_2,&TStack_28);
  if (bVar1) {
    FSlateUser::SetFocus(param_2,&TStack_18,SetDirectly);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_18.SharedReferenceCount.ReferenceController);
  return;
}

// Call @ 142d74840

float __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SSidebarContainer::AddSidebarDockSlot'::__l8::<lambda_1>,float>::Call
          (void *param_1)

{
  return *(float *)(*(longlong *)param_1 + 0x324);
}

// Call @ 142d74860

FSlateBrush * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SRichTextWarningOrErrorBox::Construct'::__l2::<lambda_2>,FSlateBrush_const_*>::
Call(void *param_1)

{
  EMessageStyle *pEVar1;
  ISlateStyle *pIVar2;
  FName *pFVar3;
  FSlateBrush *pFVar4;
  char *pcVar5;
  code *pcVar6;
  FName FStackX_8;
  FName FStackX_10;
  
  pEVar1 = TAttribute<enum_EMessageStyle>::Get((void *)(*(longlong *)param_1 + 0x300));
  if (*pEVar1 == Warning) {
    pIVar2 = FAppStyle::Get();
    pcVar5 = "Icons.WarningWithColor";
    pcVar6 = *(code **)((longlong)*pIVar2 + 0x50);
    pFVar3 = &FStackX_8;
  }
  else {
    pIVar2 = FAppStyle::Get();
    pcVar5 = "Icons.ErrorWithColor";
    pcVar6 = *(code **)((longlong)*pIVar2 + 0x50);
    pFVar3 = &FStackX_10;
  }
  pFVar3 = ::FName::FName(pFVar3,pcVar5);
  pFVar4 = (FSlateBrush *)(*pcVar6)(pIVar2,*pFVar3,0,0);
  return pFVar4;
}

// Call @ 142d74870

FSlateBrush * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SWarningOrErrorBox::Construct'::__l2::<lambda_2>,FSlateBrush_const_*>::Call
          (void *param_1)

{
  EMessageStyle *pEVar1;
  ISlateStyle *pIVar2;
  FName *pFVar3;
  FSlateBrush *pFVar4;
  char *pcVar5;
  code *pcVar6;
  FName FStackX_8;
  FName FStackX_10;
  
  pEVar1 = TAttribute<enum_EMessageStyle>::Get((void *)(*(longlong *)param_1 + 0x2e0));
  if (*pEVar1 == Warning) {
    pIVar2 = FAppStyle::Get();
    pcVar5 = "Icons.WarningWithColor";
    pcVar6 = *(code **)((longlong)*pIVar2 + 0x50);
    pFVar3 = &FStackX_8;
  }
  else {
    pIVar2 = FAppStyle::Get();
    pcVar5 = "Icons.ErrorWithColor";
    pcVar6 = *(code **)((longlong)*pIVar2 + 0x50);
    pFVar3 = &FStackX_10;
  }
  pFVar3 = ::FName::FName(pFVar3,pcVar5);
  pFVar4 = (FSlateBrush *)(*pcVar6)(pIVar2,*pFVar3,0,0);
  return pFVar4;
}

// Call @ 142d74880

EVisibility __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::ToolWidgets::Private::ActionButton::MakeButtonContent'::__l2::<lambda_2>,EVisibility>
::Call(void *param_1)

{
  bool bVar1;
  FText *this;
  EVisibility EVar2;
  TAttribute<FText> *in_RDX;
  
  this = FText::GetEmpty();
  if (in_RDX->bIsSet != false) {
    this = TAttribute<FText>::Get(in_RDX);
  }
  bVar1 = FText::IsEmpty(this);
  EVar2 = EVisibility::Visible;
  if (bVar1) {
    EVar2 = EVisibility::Collapsed;
  }
  *(TEnumAsByte<EVisibility::Private> *)param_1 = EVar2.Value.Value;
  return (EVisibility)SUB81(param_1,0);
}

// Call @ 142d748e0

FLinearColor * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SCustomTextFilterDialog::Construct'::__l2::<lambda_3>,FLinearColor>::Call
          (FLinearColor *__return_storage_ptr__,void *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(longlong *)param_1 + 0x2d8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)(*(longlong *)param_1 + 0x2d0)
  ;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
  return __return_storage_ptr__;
}

// Call @ 142d74900

EVisibility __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SFilterSearchBoxImpl::Construct'::__l2::<lambda_3>,EVisibility>::Call
          (void *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *in_RDX;
  FReadAccessScope local_28;
  
  lVar1 = *in_RDX;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x6d8),&local_28);
  if (*(int *)(lVar1 + 0x6e8) == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = *(longlong **)(lVar1 + 0x6e0);
  }
  (**(code **)(*plVar2 + 0x60))(plVar2,param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (EVisibility)SUB81(param_1,0);
}

// Call @ 142d74960

FText * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SCustomTextFilterDialog::Construct'::__l2::<lambda_4>,FText>::Call
          (FText *__return_storage_ptr__,void *param_1)

{
  longlong lVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  
  lVar1 = *(longlong *)param_1;
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar2 = *(ITextData **)(lVar1 + 0x2c0);
  (__return_storage_ptr__->TextData).Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  __return_storage_ptr__->Flags = *(uint *)(lVar1 + 0x2c8);
  return __return_storage_ptr__;
}

