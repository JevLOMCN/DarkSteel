// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// ToText @ 14278da10

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall FTabId::ToText(FTabId *this,FText *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  FTextFormat *pFVar4;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_e8;
  FString local_d8;
  FString local_c8;
  TSharedPtr<FCulture,1> local_b8;
  FFormatArgumentValue local_a8;
  FFormatArgumentValue local_88;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  local_e8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.Pairs.ArrayNum = 0;
  local_e8.Pairs.ArrayMax = 0;
  pFVar3 = FText::FromName(&local_68,&this->TabType);
  local_a8.Type = Text;
  FText::FText((FText *)&local_a8.TextValue,pFVar3);
  if ((local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FText *)(*pcVar1)();
    return pFVar3;
  }
  ::FString::FString(&local_d8,L"TabType");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_e8,&local_d8,&local_a8);
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  local_b8.Object = (FCulture *)0x0;
  local_b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar3 = FText::AsNumber(&local_58,this->InstanceId,(FNumberFormattingOptions *)0x0,&local_b8);
  local_88.Type = Text;
  FText::FText((FText *)&local_88.TextValue,pFVar3);
  if ((local_88.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FText *)(*pcVar1)();
    return pFVar3;
  }
  ::FString::FString(&local_c8,L"InstanceIdNumber");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_e8,&local_c8,&local_88);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_88.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_88.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  if (this->InstanceId == -1) {
    pFVar3 = FText::FromName(&local_28,&this->TabType);
    FText::FText(__return_storage_ptr__,pFVar3);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
  }
  else {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"TabManager",L"TabIdFormat",L"{TabType} : {InstanceIdNumber}");
    pFVar4 = FTextFormat::FTextFormat(&local_18,pFVar3,Default);
    pFVar3 = FText::Format(&local_48,pFVar4,&local_e8);
    FText::FText(__return_storage_ptr__,pFVar3);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
  }
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_e8.Pairs.AllocatorInstance.Data,
             local_e8.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_e8.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_e8.Pairs.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

