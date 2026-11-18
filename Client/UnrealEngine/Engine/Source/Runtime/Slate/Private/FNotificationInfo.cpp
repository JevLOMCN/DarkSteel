// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 5

// FNotificationInfo @ 1426a8700

/* WARNING: Enum "Type": Some values do not have unique names */

FNotificationInfo * __thiscall
FNotificationInfo::FNotificationInfo(FNotificationInfo *this,FText *param_1)

{
  ITextData *pIVar1;
  FText *pFVar2;
  undefined1 local_res8 [8];
  FText local_18;
  
  (this->ContentWidget).Object = (INotificationWidget *)0x0;
  (this->ContentWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Text).Value.TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_1->TextData).Reference;
  (this->Text).Value.TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->Text).Value.Flags = param_1->Flags;
  (this->Text).bIsSet = true;
  *(undefined8 *)&(this->Text).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->Text).Getter = 0;
  *(undefined8 *)&(this->Text).Getter.field_0x8 = 0;
  FText::FText(&(this->SubText).Value);
  (this->SubText).bIsSet = false;
  *(undefined8 *)&(this->SubText).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->SubText).Getter = 0;
  *(undefined8 *)&(this->SubText).Getter.field_0x8 = 0;
  (this->ButtonDetails).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ButtonDetails).ArrayNum = 0;
  (this->ButtonDetails).ArrayMax = 0;
  this->Image = (FSlateBrush *)0x0;
  this->FadeInDuration = 0.5;
  this->FadeOutDuration = 2.0;
  this->ExpireDuration = 1.0;
  this->bUseThrobber = true;
  this->bUseSuccessFailIcons = true;
  this->bUseLargeFont = true;
  this->bUseCopyToClipboard = false;
  this->bFireAndForget = true;
  (this->CheckBoxState).Value = Unchecked;
  (this->CheckBoxState).bIsSet = true;
  (this->WidthOverride).Size = 320.0;
  *(undefined8 *)&(this->CheckBoxState).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->CheckBoxState).Getter = 0;
  *(undefined8 *)&(this->CheckBoxState).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->CheckBoxStateChanged).field_0x10 = 0;
  *(undefined8 *)&this->CheckBoxStateChanged = 0;
  *(undefined8 *)&(this->CheckBoxStateChanged).field_0x8 = 0;
  FText::FText(&(this->CheckBoxText).Value);
  (this->CheckBoxText).bIsSet = false;
  *(undefined8 *)&(this->CheckBoxText).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->CheckBoxText).Getter = 0;
  *(undefined8 *)&(this->CheckBoxText).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->Hyperlink).field_0x10 = 0;
  *(undefined8 *)&this->Hyperlink = 0;
  *(undefined8 *)&(this->Hyperlink).field_0x8 = 0;
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"EditorNotification",L"DefaultHyperlinkText",L"Show Log");
  FText::FText(&(this->HyperlinkText).Value,pFVar2);
  (this->HyperlinkText).bIsSet = true;
  *(undefined8 *)&(this->HyperlinkText).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->HyperlinkText).Getter = 0;
  *(undefined8 *)&(this->HyperlinkText).Getter.field_0x8 = 0;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  (this->ForWindow).Object = (SWindow *)0x0;
  (this->ForWindow).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->bAllowThrottleWhenFrameRateIsLow = true;
  return this;
}

// ~FNotificationInfo @ 1426aadb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNotificationInfo::~FNotificationInfo(FNotificationInfo *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  FScriptContainerElement *pFVar3;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ForWindow).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->HyperlinkText).Getter);
  pvVar1 = *(void **)&(this->HyperlinkText).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->HyperlinkText).Getter);
  pIVar2 = (this->HyperlinkText).Value.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Hyperlink);
  pvVar1 = *(void **)&(this->Hyperlink).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Hyperlink);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->CheckBoxText).Getter);
  pvVar1 = *(void **)&(this->CheckBoxText).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->CheckBoxText).Getter);
  pIVar2 = (this->CheckBoxText).Value.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CheckBoxStateChanged);
  pvVar1 = *(void **)&(this->CheckBoxStateChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->CheckBoxStateChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->CheckBoxState).Getter);
  pvVar1 = *(void **)&(this->CheckBoxState).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->CheckBoxState).Getter);
  DestructItems<FNotificationButtonInfo,int>
            ((FNotificationButtonInfo *)(this->ButtonDetails).AllocatorInstance.Data,
             (this->ButtonDetails).ArrayNum);
  pFVar3 = (this->ButtonDetails).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SubText).Getter);
  pvVar1 = *(void **)&(this->SubText).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->SubText).Getter);
  pIVar2 = (this->SubText).Value.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Text).Getter);
  pvVar1 = *(void **)&(this->Text).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Text).Getter);
  pIVar2 = (this->Text).Value.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ContentWidget).SharedReferenceCount.ReferenceController);
  return;
}

// ~<lambda_1> @ 1429bdc50

void __thiscall
`FNotificationInfo::ShowCopyToClipboadHyperlink'::__l2::<lambda_1>::~<lambda_1>(void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x48));
  if (*(void **)((longlong)this + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x50));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x48));
  if (*(longlong **)((longlong)this + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)this + 0x30) + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x18));
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x18));
  if (*(longlong **)this != (longlong *)0x0) {
    (**(code **)(**(longlong **)this + 0x10))();
  }
  return;
}

// operator() @ 1429c13c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FNotificationInfo::ShowCopyToClipboadHyperlink'::__l2::<lambda_1>::operator()(void *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FText *pFVar3;
  FString *pFVar4;
  void *pvVar5;
  ulong64 uVar6;
  int iVar7;
  undefined1 auStack_868 [32];
  TStringBuilderBase<wchar_t> local_848;
  wchar_t local_828 [1024];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_868;
  local_848.Base = local_828;
  local_848.CurPos = local_828;
  local_848.End = (wchar_t *)local_28;
  local_848.bIsDynamic = false;
  local_848.bIsExternal = false;
  if (*(char *)((longlong)this + 0x10) != '\0') {
    pFVar3 = TAttribute<FText>::Get(this);
    pFVar4 = FText::ToString(pFVar3);
    iVar1 = (pFVar4->Data).ArrayNum;
    pFVar2 = (pFVar4->Data).AllocatorInstance.Data;
    iVar7 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar7 = 0;
    }
    uVar6 = (ulong64)iVar7;
    if (local_848.End < local_848.CurPos + uVar6) {
      TStringBuilderBase<wchar_t>::Extend(&local_848,uVar6);
    }
    if (iVar7 != 0) {
      pvVar5 = FGenericPlatformString::Memcpy(local_848.CurPos,pFVar2,uVar6 * 2);
      local_848.CurPos = (wchar_t *)((longlong)pvVar5 + uVar6 * 2);
    }
  }
  if (*(char *)((longlong)this + 0x40) != '\0') {
    if (0 < (int)((longlong)local_848.CurPos - (longlong)local_848.Base >> 1)) {
      if (local_848.End < local_848.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_848,1);
      }
      pvVar5 = FGenericPlatformString::Memcpy(local_848.CurPos,L"\n",2);
      local_848.CurPos = (wchar_t *)((longlong)pvVar5 + 2);
    }
    pFVar3 = TAttribute<FText>::Get((TAttribute<FText> *)((longlong)this + 0x30));
    pFVar4 = FText::ToString(pFVar3);
    iVar1 = (pFVar4->Data).ArrayNum;
    pFVar2 = (pFVar4->Data).AllocatorInstance.Data;
    iVar7 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar7 = 0;
    }
    uVar6 = (ulong64)iVar7;
    if (local_848.End < local_848.CurPos + uVar6) {
      TStringBuilderBase<wchar_t>::Extend(&local_848,uVar6);
    }
    if (iVar7 != 0) {
      pvVar5 = FGenericPlatformString::Memcpy(local_848.CurPos,pFVar2,uVar6 * 2);
      local_848.CurPos = (wchar_t *)((longlong)pvVar5 + uVar6 * 2);
    }
  }
  if (local_848.End < local_848.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_848,1);
  }
  *local_848.CurPos = L'\0';
  FWindowsPlatformApplicationMisc::ClipboardCopy(local_848.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_848);
  return;
}

// ShowCopyToClipboadHyperlink @ 142a0dff0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNotificationInfo::ShowCopyToClipboadHyperlink(FNotificationInfo *this)

{
  FText *pFVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  undefined1 local_res8 [8];
  undefined1 local_a8 [8];
  FDelegateAllocation local_a0;
  FDestructionSentinel local_90;
  FDelegateAllocation *local_78;
  FText local_70;
  bool local_60;
  undefined1 local_58 [8];
  ForAnyElementType FStack_50;
  ulonglong local_48;
  FText local_40;
  undefined1 local_30;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  int local_18;
  
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)local_a8,L"SNotificationList",L"CopyToClipboard",L"Copy to Clipboard"
                     );
  FText::FText(&local_70,pFVar1);
  local_60 = true;
  local_48 = 0;
  local_58 = (undefined1  [8])0x0;
  FStack_50.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(this->HyperlinkText).Value,&local_70);
  (this->HyperlinkText).bIsSet = local_60;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->HyperlinkText).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_90);
  if (((int)local_48 != 0) && (FStack_50.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_50.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_50,0,0,0x10);
    local_48 = local_48 & 0xffffffff00000000;
  }
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  if (FStack_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_50.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  if (local_70.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
  }
  if ((atomic<unsigned___int64>)local_a8 != (atomic<unsigned___int64>)0x0) {
    (**(code **)((longlong)*(ITextData *)local_a8 + 0x10))();
  }
  local_70.TextData.Reference = (this->Text).Value.TextData.Reference;
  if (local_70.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_70.TextData.Reference + 8))
              (local_70.TextData.Reference,local_res8);
  }
  local_70.Flags = (this->Text).Value.Flags;
  local_60 = (this->Text).bIsSet;
  local_58 = (undefined1  [8])0x0;
  FStack_50.Data = (FScriptContainerElement *)0x0;
  local_48 = local_48 & 0xffffffff00000000;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_58,
             &(this->Text).Getter);
  local_40.TextData.Reference = (this->SubText).Value.TextData.Reference;
  if (local_40.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_40.TextData.Reference + 8))
              (local_40.TextData.Reference,local_res8);
  }
  local_40.Flags = (this->SubText).Value.Flags;
  local_30 = (this->SubText).bIsSet;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  local_18 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_28,
             &(this->SubText).Getter);
  local_a8 = (undefined1  [8])0x0;
  local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_a0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
             (FWriteAccessScope *)&local_90);
  local_78 = &local_a0;
  puVar2 = UE::Core::Private::DelegateAllocate(0x78,&local_a0);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FNotificationInfo::ShowCopyToClipboadHyperlink'::`2'::<lambda_1>_>
               ::_vftable_;
    FText::FText((FText *)(puVar2 + 3),&local_70);
    *(bool *)(puVar2 + 5) = local_60;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar2 + 6),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    FText::FText((FText *)(puVar2 + 9),&local_40);
    *(undefined1 *)(puVar2 + 0xb) = local_30;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar2 + 0xc),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  }
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Hyperlink,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
             (FWriteAccessScope *)&local_90);
  if ((local_a0.DelegateSize != 0) &&
     (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_a0,0,0,0x10);
    local_a0.DelegateSize = 0;
  }
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_a0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_90);
  if ((local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = 0;
  }
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  if (local_40.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_90);
  if (((int)local_48 != 0) && (FStack_50.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_50.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_50,0,0,0x10);
    local_48 = local_48 & 0xffffffff00000000;
  }
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  if (FStack_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_50.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  if (local_70.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
  }
  return;
}

