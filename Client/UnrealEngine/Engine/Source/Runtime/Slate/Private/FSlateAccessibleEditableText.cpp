// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 8

// AsProperty @ 142853b00

IAccessibleProperty * __thiscall
FSlateAccessibleEditableText::AsProperty(FSlateAccessibleEditableText *this)

{
  IAccessibleProperty *pIVar1;
  
  pIVar1 = (IAccessibleProperty *)&this->field_0x70;
  if (this == (FSlateAccessibleEditableText *)0x0) {
    pIVar1 = (IAccessibleProperty *)0x0;
  }
  return pIVar1;
}

// AsText @ 142854090

IAccessibleText * __thiscall
FSlateAccessibleEditableText::AsText(FSlateAccessibleEditableText *this)

{
  IAccessibleText *pIVar1;
  
  pIVar1 = (IAccessibleText *)&this->field_0x68;
  if (this == (FSlateAccessibleEditableText *)0x0) {
    pIVar1 = (IAccessibleText *)0x0;
  }
  return pIVar1;
}

// GetText @ 14287b960

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall FSlateAccessibleEditableText::GetText(FSlateAccessibleEditableText *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FString *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  FText local_18;
  
  if (((*(longlong *)&this[-1].field_0x28 == 0) || (*(longlong *)&this[-1].field_0x30 == 0)) ||
     (*(int *)(*(longlong *)&this[-1].field_0x30 + 8) < 1)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`FSlateAccessibleEditableText::GetText'::__l2::
             _dynamic_atexit_destructor_for__EmptyString__);
      _Init_thread_footer(&::_TSS0);
      return &::EmptyString;
    }
    return &::EmptyString;
  }
  pTVar6 = *(TReferenceControllerBase<1> **)&this[-1].field_0x30;
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      pTVar5 = pTVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14287b9c5;
      LOCK();
      aVar3 = pTVar6->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    pTVar7 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    pTVar5 = pTVar6;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) goto LAB_14287b9eb;
  }
LAB_14287b9c5:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pTVar6 = pTVar5;
  if (bVar8) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar1)();
    return pFVar4;
  }
LAB_14287b9eb:
  FSlateEditableTextLayout::GetText((FSlateEditableTextLayout *)pTVar7[0x23]._padding_,&local_18);
  pFVar4 = FText::ToString(&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return pFVar4;
}

// GetValue @ 14287d650

FString * __thiscall
FSlateAccessibleEditableText::GetValue
          (FSlateAccessibleEditableText *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  
  pFVar1 = (FString *)(*(code *)**(undefined8 **)&this[-1].field_0x70)(&this[-1].field_0x70);
  ::FString::FString(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetValueAsVariant @ 14287d7e0

FVariant * __thiscall
FSlateAccessibleEditableText::GetValueAsVariant
          (FSlateAccessibleEditableText *this,FVariant *__return_storage_ptr__)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = (FString *)(*(code *)**(undefined8 **)&this[-1].field_0x70)(&this[-1].field_0x70);
  pFVar1 = ::FString::FString(&local_18,pFVar1);
  FVariant::FVariant<FString>(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// IsPassword @ 142881f60

bool __thiscall FSlateAccessibleEditableText::IsPassword(FSlateAccessibleEditableText *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  undefined1 uVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  
  if (((*(longlong *)&this[-1].field_0x20 == 0) || (*(longlong *)&this[-1].field_0x28 == 0)) ||
     (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1)) {
    return true;
  }
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  pTVar7 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  pTVar6 = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar7->SharedReferenceCount;
    do {
      pTVar6 = pTVar5;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142881fb7;
      LOCK();
      aVar4 = pTVar7->SharedReferenceCount;
      bVar8 = aVar2 == aVar4;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar8);
    pTVar5 = *(TReferenceControllerBase<1> **)&this[-1].field_0x20;
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    pTVar6 = pTVar7;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) goto LAB_142881fdd;
  }
LAB_142881fb7:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pTVar7 = pTVar6;
  if (bVar8) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
LAB_142881fdd:
  uVar3 = (**(code **)(*(longlong *)&pTVar5[0x21].SharedReferenceCount + 8))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return (bool)uVar3;
}

// IsReadOnly @ 142882200

bool __thiscall FSlateAccessibleEditableText::IsReadOnly(FSlateAccessibleEditableText *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  undefined1 uVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  
  if (((*(longlong *)&this[-1].field_0x20 == 0) || (*(longlong *)&this[-1].field_0x28 == 0)) ||
     (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1)) {
    return true;
  }
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  pTVar7 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  pTVar6 = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar7->SharedReferenceCount;
    do {
      pTVar6 = pTVar5;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142882257;
      LOCK();
      aVar4 = pTVar7->SharedReferenceCount;
      bVar8 = aVar2 == aVar4;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar8);
    pTVar5 = *(TReferenceControllerBase<1> **)&this[-1].field_0x20;
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    pTVar6 = pTVar7;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) goto LAB_14288227d;
  }
LAB_142882257:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pTVar7 = pTVar6;
  if (bVar8) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
LAB_14288227d:
  uVar3 = (*(code *)**(undefined8 **)&pTVar5[0x21].SharedReferenceCount)();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return (bool)uVar3;
}

// SetValue @ 14289b300

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateAccessibleEditableText::SetValue(FSlateAccessibleEditableText *this,FString *param_1)

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
        goto LAB_14289b364;
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
    if (lVar6 != 0) goto LAB_14289b38a;
  }
LAB_14289b364:
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar7) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14289b38a:
  pFVar4 = FText::FromString(&local_68,param_1);
  FText::FText((FText *)local_40,pFVar4);
  local_40[0x10] = true;
  local_18 = 0;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  FSlateEditableTextLayout::SetText
            (*(FSlateEditableTextLayout **)(lVar6 + 0x230),(TAttribute<FText> *)local_40);
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

