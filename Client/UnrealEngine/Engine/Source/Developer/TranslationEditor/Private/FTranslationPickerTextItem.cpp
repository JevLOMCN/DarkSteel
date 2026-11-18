// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TranslationEditor
// Functions: 5

// ~FTranslationPickerTextItem @ 146b990c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTranslationPickerTextItem::~FTranslationPickerTextItem(FTranslationPickerTextItem *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TextBox).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->CleanNamespace).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LocResCultureName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LocTargetName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TranslationString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SourceString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->PickedText).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)this);
  return;
}

// AddReferencedObjects @ 146b9c9d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTranslationPickerTextItem::AddReferencedObjects
          (FTranslationPickerTextItem *this,FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146b9c9e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->TranslationUnit,0,0);
  return;
}

// BuildTextItem @ 146b9cb70

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FTranslationPickerTextItem,1> * __cdecl
FTranslationPickerTextItem::BuildTextItem
          (TSharedPtr<FTranslationPickerTextItem,1> *__return_storage_ptr__,FText *param_1,
          bool param_2)

{
  int iVar1;
  ITextData *pIVar2;
  FTranslationPickerTextItem *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedPtr<FTranslationPickerTextItem,1> *pTVar8;
  FString *pFVar9;
  FTextId FVar10;
  UObject *pUVar11;
  UTranslationUnit *pUVar12;
  int iVar13;
  FString *pFVar14;
  FTextKey local_res8 [2];
  FTextKey local_res20 [2];
  undefined1 local_68 [4];
  undefined1 local_64 [12];
  FString local_58;
  FString local_48;
  FString local_38;
  
  pTVar7 = ::operator_new(0xa8);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (FTranslationPickerTextItem *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFTranslationPickerTextItem___00_SharedPointerInternals__6B_
    ;
    pTVar7[1]._padding_ = (longlong)&___7FGCObject__6B_;
    *(undefined2 *)&pTVar7[1].SharedReferenceCount = 0;
    FGCObject::RegisterGCObject((FGCObject *)(pTVar7 + 1));
    pTVar7[1]._padding_ = (longlong)&___7FTranslationPickerTextItem__6B_;
    pTVar7[2]._padding_ = 0;
    pIVar2 = (param_1->TextData).Reference;
    pTVar7[2]._padding_ = (longlong)pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_68);
    }
    pTVar7[2].SharedReferenceCount = (atomic<int>)param_1->Flags;
    *(bool *)&pTVar7[3]._padding_ = param_2;
    *(undefined1 *)((longlong)&pTVar7[3]._padding_ + 1) = 1;
    *(undefined8 *)((longlong)&pTVar7[3]._padding_ + 4) = 0xffffffffffffffff;
    pTVar7[4]._padding_ = 0;
    pTVar7[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[5]._padding_ = 0;
    pTVar7[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[6]._padding_ = 0;
    pTVar7[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[7]._padding_ = 0;
    pTVar7[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[8]._padding_ = 0;
    pTVar7[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[9]._padding_ = 0;
    pTVar7[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[9].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[10]._padding_ = 0;
    if ((FTranslationPickerTextItem *)(pTVar7 + 1) == (FTranslationPickerTextItem *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSharedPtr<FTranslationPickerTextItem,1> *)(*pcVar5)();
        return pTVar8;
      }
    }
    __return_storage_ptr__->Object = (FTranslationPickerTextItem *)(pTVar7 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  pFVar9 = FTextInspector::GetSourceString(param_1);
  if (pFVar9 != (FString *)0x0) {
    if (__return_storage_ptr__->Object == (FTranslationPickerTextItem *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSharedPtr<FTranslationPickerTextItem,1> *)(*pcVar5)();
        return pTVar8;
      }
    }
    ::FString::operator=(&__return_storage_ptr__->Object->SourceString,pFVar9);
  }
  pFVar9 = FTextInspector::GetDisplayString(param_1);
  if (__return_storage_ptr__->Object == (FTranslationPickerTextItem *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedPtr<FTranslationPickerTextItem,1> *)(*pcVar5)();
      return pTVar8;
    }
  }
  ::FString::operator=(&__return_storage_ptr__->Object->TranslationString,pFVar9);
  FVar10 = FTextInspector::GetTextId((FText *)local_64);
  FVar10 = *(FTextId *)FVar10;
  if (__return_storage_ptr__->Object == (FTranslationPickerTextItem *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedPtr<FTranslationPickerTextItem,1> *)(*pcVar5)();
      return pTVar8;
    }
  }
  __return_storage_ptr__->Object->TextId = FVar10;
  if (__return_storage_ptr__->Object == (FTranslationPickerTextItem *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedPtr<FTranslationPickerTextItem,1> *)(*pcVar5)();
      return pTVar8;
    }
  }
  local_res8[0].Index = (__return_storage_ptr__->Object->TextId).Namespace.Index;
  pFVar9 = FTextKey::ToString(local_res8,&local_48);
  pFVar9 = TextNamespaceUtil::StripPackageNamespace(&local_58,pFVar9);
  if (__return_storage_ptr__->Object == (FTranslationPickerTextItem *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedPtr<FTranslationPickerTextItem,1> *)(*pcVar5)();
      return pTVar8;
    }
  }
  pFVar3 = __return_storage_ptr__->Object;
  pFVar14 = &pFVar3->CleanNamespace;
  if (pFVar14 != pFVar9) {
    pFVar4 = (pFVar14->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar14->Data).AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->CleanNamespace).Data.ArrayNum = (pFVar9->Data).ArrayNum;
    (pFVar3->CleanNamespace).Data.ArrayMax = (pFVar9->Data).ArrayMax;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pUVar11 = GetTransientPackageAsObject();
  pUVar12 = NewObject<UTranslationUnit>(pUVar11);
  if (__return_storage_ptr__->Object == (FTranslationPickerTextItem *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedPtr<FTranslationPickerTextItem,1> *)(*pcVar5)();
      return pTVar8;
    }
  }
  pFVar3 = __return_storage_ptr__->Object;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UTranslationUnit *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar12);
  }
  (pFVar3->TranslationUnit).field0_0x0.DebugPtr = pUVar12;
  if (__return_storage_ptr__->Object == (FTranslationPickerTextItem *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedPtr<FTranslationPickerTextItem,1> *)(*pcVar5)();
      return pTVar8;
    }
  }
  pFVar3 = __return_storage_ptr__->Object;
  if (pFVar3 == (FTranslationPickerTextItem *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedPtr<FTranslationPickerTextItem,1> *)(*pcVar5)();
      return pTVar8;
    }
  }
  iVar1 = (pFVar3->CleanNamespace).Data.ArrayNum;
  iVar13 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar13 = 0;
  }
  ::FString::AssignRange
            (&((__return_storage_ptr__->Object->TranslationUnit).field0_0x0.DebugPtr)->Namespace,
             (wchar_t *)(pFVar3->CleanNamespace).Data.AllocatorInstance.Data,iVar13);
  if (__return_storage_ptr__->Object == (FTranslationPickerTextItem *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedPtr<FTranslationPickerTextItem,1> *)(*pcVar5)();
      return pTVar8;
    }
  }
  local_res20[0].Index = (__return_storage_ptr__->Object->TextId).Key.Index;
  pFVar9 = FTextKey::ToString(local_res20,&local_38);
  if (__return_storage_ptr__->Object == (FTranslationPickerTextItem *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedPtr<FTranslationPickerTextItem,1> *)(*pcVar5)();
      return pTVar8;
    }
  }
  pUVar12 = (__return_storage_ptr__->Object->TranslationUnit).field0_0x0.DebugPtr;
  pFVar14 = &pUVar12->Key;
  if (pFVar14 != pFVar9) {
    pFVar4 = (pFVar14->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar14->Data).AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pUVar12->Key).Data.ArrayNum = (pFVar9->Data).ArrayNum;
    (pUVar12->Key).Data.ArrayMax = (pFVar9->Data).ArrayMax;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (__return_storage_ptr__->Object == (FTranslationPickerTextItem *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedPtr<FTranslationPickerTextItem,1> *)(*pcVar5)();
      return pTVar8;
    }
  }
  pFVar3 = __return_storage_ptr__->Object;
  if (pFVar3 == (FTranslationPickerTextItem *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedPtr<FTranslationPickerTextItem,1> *)(*pcVar5)();
      return pTVar8;
    }
  }
  iVar1 = (pFVar3->SourceString).Data.ArrayNum;
  iVar13 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar13 = 0;
  }
  ::FString::AssignRange
            (&((__return_storage_ptr__->Object->TranslationUnit).field0_0x0.DebugPtr)->Source,
             (wchar_t *)(pFVar3->SourceString).Data.AllocatorInstance.Data,iVar13);
  if (__return_storage_ptr__->Object == (FTranslationPickerTextItem *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedPtr<FTranslationPickerTextItem,1> *)(*pcVar5)();
      return pTVar8;
    }
  }
  pFVar3 = __return_storage_ptr__->Object;
  if (pFVar3 == (FTranslationPickerTextItem *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedPtr<FTranslationPickerTextItem,1> *)(*pcVar5)();
      return pTVar8;
    }
  }
  iVar1 = (pFVar3->TranslationString).Data.ArrayNum;
  iVar13 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar13 = 0;
  }
  ::FString::AssignRange
            (&((__return_storage_ptr__->Object->TranslationUnit).field0_0x0.DebugPtr)->Translation,
             (wchar_t *)(pFVar3->TranslationString).Data.AllocatorInstance.Data,iVar13);
  if (__return_storage_ptr__->Object == (FTranslationPickerTextItem *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedPtr<FTranslationPickerTextItem,1> *)(*pcVar5)();
      return pTVar8;
    }
  }
  ::FString::AssignRange
            (&((__return_storage_ptr__->Object->TranslationUnit).field0_0x0.DebugPtr)->LocresPath,
             (wchar_t *)0x0,0);
  return __return_storage_ptr__;
}

// GetReferencerName @ 146bafb80

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
FTranslationPickerTextItem::GetReferencerName
          (FTranslationPickerTextItem *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FTranslationPickerTextItem");
  return __return_storage_ptr__;
}

// GetTranslationUnitWithAnyChanges @ 146bb03c0

/* WARNING: Enum "Type": Some values do not have unique names */

UTranslationUnit * __thiscall
FTranslationPickerTextItem::GetTranslationUnitWithAnyChanges(FTranslationPickerTextItem *this)

{
  SMultiLineEditableTextBox *pSVar1;
  code *pcVar2;
  bool bVar3;
  UTranslationUnit *pUVar4;
  FString *pFVar5;
  FText local_18;
  
  if ((this->TranslationUnit).field0_0x0.DebugPtr == (UTranslationUnit *)0x0) {
    return (UTranslationUnit *)0x0;
  }
  if ((this->TextBox).Object == (SMultiLineEditableTextBox *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UTranslationUnit *)(*pcVar2)();
      return pUVar4;
    }
  }
  pSVar1 = (this->TextBox).Object;
  if ((pSVar1->EditableText).Object == (SMultiLineEditableText *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UTranslationUnit *)(*pcVar2)();
      return pUVar4;
    }
  }
  SMultiLineEditableText::GetText((pSVar1->EditableText).Object,&local_18);
  pFVar5 = FText::ToString(&local_18);
  ::FString::operator=(&((this->TranslationUnit).field0_0x0.DebugPtr)->Translation,pFVar5);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return (this->TranslationUnit).field0_0x0.DebugPtr;
}

