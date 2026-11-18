// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 8

// AsProperty @ 142853b20

IAccessibleProperty * __thiscall
FSlateAccessibleEditableTextBox::AsProperty(FSlateAccessibleEditableTextBox *this)

{
  IAccessibleProperty *pIVar1;
  
  pIVar1 = (IAccessibleProperty *)&this->field_0x70;
  if (this == (FSlateAccessibleEditableTextBox *)0x0) {
    pIVar1 = (IAccessibleProperty *)0x0;
  }
  return pIVar1;
}

// AsText @ 1428540b0

IAccessibleText * __thiscall
FSlateAccessibleEditableTextBox::AsText(FSlateAccessibleEditableTextBox *this)

{
  IAccessibleText *pIVar1;
  
  pIVar1 = (IAccessibleText *)&this->field_0x68;
  if (this == (FSlateAccessibleEditableTextBox *)0x0) {
    pIVar1 = (IAccessibleText *)0x0;
  }
  return pIVar1;
}

// GetText @ 14287bac0

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall FSlateAccessibleEditableTextBox::GetText(FSlateAccessibleEditableTextBox *this)

{
  longlong lVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  FString *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  FText local_18;
  
  if (((*(longlong *)&this[-1].field_0x28 == 0) || (*(longlong *)&this[-1].field_0x30 == 0)) ||
     (*(int *)(*(longlong *)&this[-1].field_0x30 + 8) < 1)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`FSlateAccessibleEditableTextBox::GetText'::__l2::
             _dynamic_atexit_destructor_for__EmptyString__);
      _Init_thread_footer(&::_TSS0);
      return &::EmptyString;
    }
    return &::EmptyString;
  }
  pTVar7 = *(TReferenceControllerBase<1> **)&this[-1].field_0x30;
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar7->SharedReferenceCount;
    do {
      pTVar6 = pTVar8;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14287bb25;
      LOCK();
      aVar4 = pTVar7->SharedReferenceCount;
      bVar9 = aVar3 == aVar4;
      if (bVar9) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar9);
    pTVar8 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    pTVar6 = pTVar7;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) goto LAB_14287bb4b;
  }
LAB_14287bb25:
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pTVar7 = pTVar6;
  if (bVar9) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar2)();
    return pFVar5;
  }
LAB_14287bb4b:
  lVar1._0_4_ = pTVar8[0x2f].SharedReferenceCount;
  lVar1._4_4_ = pTVar8[0x2f].WeakReferenceCount;
  if ((lVar1 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar2)();
    return pFVar5;
  }
  FSlateEditableTextLayout::GetText
            (*(FSlateEditableTextLayout **)(*(longlong *)&pTVar8[0x2f].SharedReferenceCount + 0x230)
             ,&local_18);
  pFVar5 = FText::ToString(&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return pFVar5;
}

// GetValue @ 14287d680

FString * __thiscall
FSlateAccessibleEditableTextBox::GetValue
          (FSlateAccessibleEditableTextBox *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  
  pFVar1 = (FString *)(*(code *)**(undefined8 **)&this[-1].field_0x70)(&this[-1].field_0x70);
  ::FString::FString(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetValueAsVariant @ 14287d820

FVariant * __thiscall
FSlateAccessibleEditableTextBox::GetValueAsVariant
          (FSlateAccessibleEditableTextBox *this,FVariant *__return_storage_ptr__)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = (FString *)(*(code *)**(undefined8 **)&this[-1].field_0x70)(&this[-1].field_0x70);
  pFVar1 = ::FString::FString(&local_18,pFVar1);
  FVariant::FVariant<FString>(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// IsPassword @ 142882030

bool __thiscall FSlateAccessibleEditableTextBox::IsPassword(FSlateAccessibleEditableTextBox *this)

{
  longlong lVar1;
  code *pcVar2;
  atomic<int> aVar3;
  undefined1 uVar4;
  atomic<int> aVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  
  if (((*(longlong *)&this[-1].field_0x20 == 0) || (*(longlong *)&this[-1].field_0x28 == 0)) ||
     (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1)) {
    return true;
  }
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  pTVar8 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  pTVar7 = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar8->SharedReferenceCount;
    do {
      pTVar7 = pTVar6;
      if (aVar3 == (atomic<int>)0x0) goto LAB_142882095;
      LOCK();
      aVar5 = pTVar8->SharedReferenceCount;
      bVar9 = aVar3 == aVar5;
      if (bVar9) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar9);
    pTVar6 = *(TReferenceControllerBase<1> **)&this[-1].field_0x20;
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    pTVar7 = pTVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) goto LAB_1428820bb;
  }
LAB_142882095:
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pTVar8 = pTVar7;
  if (bVar9) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
LAB_1428820bb:
  lVar1._0_4_ = pTVar6[0x2f].SharedReferenceCount;
  lVar1._4_4_ = pTVar6[0x2f].WeakReferenceCount;
  if ((lVar1 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  uVar4 = (**(code **)(*(longlong *)(*(longlong *)&pTVar6[0x2f].SharedReferenceCount + 0x218) + 8))
                    ();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return (bool)uVar4;
}

// IsReadOnly @ 1428822d0

bool __thiscall FSlateAccessibleEditableTextBox::IsReadOnly(FSlateAccessibleEditableTextBox *this)

{
  longlong lVar1;
  code *pcVar2;
  atomic<int> aVar3;
  undefined1 uVar4;
  atomic<int> aVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  
  if (((*(longlong *)&this[-1].field_0x20 == 0) || (*(longlong *)&this[-1].field_0x28 == 0)) ||
     (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1)) {
    return true;
  }
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  pTVar8 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  pTVar7 = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar8->SharedReferenceCount;
    do {
      pTVar7 = pTVar6;
      if (aVar3 == (atomic<int>)0x0) goto LAB_142882335;
      LOCK();
      aVar5 = pTVar8->SharedReferenceCount;
      bVar9 = aVar3 == aVar5;
      if (bVar9) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar9);
    pTVar6 = *(TReferenceControllerBase<1> **)&this[-1].field_0x20;
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    pTVar7 = pTVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) goto LAB_14288235b;
  }
LAB_142882335:
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pTVar8 = pTVar7;
  if (bVar9) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
LAB_14288235b:
  lVar1._0_4_ = pTVar6[0x2f].SharedReferenceCount;
  lVar1._4_4_ = pTVar6[0x2f].WeakReferenceCount;
  if ((lVar1 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  uVar4 = (*(code *)**(undefined8 **)(*(longlong *)&pTVar6[0x2f].SharedReferenceCount + 0x218))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return (bool)uVar4;
}

// SetValue @ 14289b4b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateAccessibleEditableTextBox::SetValue(FSlateAccessibleEditableTextBox *this,FString *param_1)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FText *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong lVar6;
  bool bVar7;
  FText local_68;
  FDestructionSentinel local_58;
  undefined1 local_40 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  if (*(longlong *)&this[-1].field_0x20 == 0) {
    return;
  }
  if (*(longlong *)&this[-1].field_0x28 == 0) {
    return;
  }
  if (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1) {
    return;
  }
  pTVar5 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  lVar6 = 0;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14289b514;
      }
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar7 = aVar2 == aVar3;
      if (bVar7) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar7);
    lVar6 = *(longlong *)&this[-1].field_0x20;
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    if (lVar6 != 0) goto LAB_14289b53a;
  }
LAB_14289b514:
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar7) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14289b53a:
  pFVar4 = FText::FromString(&local_68,param_1);
  FText::FText((FText *)local_40,pFVar4);
  local_40[0x10] = true;
  local_18 = 0;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  if ((*(longlong *)(lVar6 + 0x2f8) == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FSlateEditableTextLayout::SetText
            (*(FSlateEditableTextLayout **)(*(longlong *)(lVar6 + 0x2f8) + 0x230),
             (TAttribute<FText> *)local_40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_28,(FWriteAccessScope *)&local_58);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  if ((ITextData *)local_40._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_40._0_8_ + 0x10))();
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return;
}

