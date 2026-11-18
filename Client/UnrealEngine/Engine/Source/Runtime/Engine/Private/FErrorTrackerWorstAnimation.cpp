// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ToText @ 14741a420

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
FErrorTrackerWorstAnimation::ToText(FErrorTrackerWorstAnimation *this,FText *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  FTextFormat *pFVar4;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_e8;
  FString local_d8;
  TSharedPtr<FCulture,1> local_c8;
  FString local_b8;
  FNumberFormattingOptions local_a8;
  FFormatArgumentValue local_90;
  FFormatArgumentValue local_70;
  FText local_50;
  FText local_40;
  FText local_30;
  FTextFormat local_20;
  
  FNumberFormattingOptions::FNumberFormattingOptions(&local_a8);
  local_a8.MinimumIntegralDigits = 1;
  local_e8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.Pairs.ArrayNum = 0;
  local_e8.Pairs.ArrayMax = 0;
  local_a8.MinimumFractionalDigits = 3;
  local_c8.Object = (FCulture *)0x0;
  local_c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar3 = FText::AsNumber(&local_50,this->AvgError,&local_a8,&local_c8);
  local_90.Type = Text;
  FText::FText((FText *)&local_90.TextValue,pFVar3);
  if (local_90.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FText *)(*pcVar1)();
      return pFVar3;
    }
  }
  ::FString::FString(&local_d8,L"AvgError");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_e8,&local_d8,&local_90);
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (local_90.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_90.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  if (local_50.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.SharedReferenceCount.ReferenceController);
  pFVar3 = FText::FromName(&local_40,&this->AnimName);
  local_70.Type = Text;
  FText::FText((FText *)&local_70.TextValue,pFVar3);
  if (local_70.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FText *)(*pcVar1)();
      return pFVar3;
    }
  }
  ::FString::FString(&local_b8,L"AnimName");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_e8,&local_b8,&local_70);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_70.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_70.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  if (local_40.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
  }
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_30,L"Engine",L"CompressionWorstAnimationSummary",
                      L"{AvgError} in Animation {AnimName}");
  pFVar4 = FTextFormat::FTextFormat(&local_20,pFVar3,Default);
  FText::Format(__return_storage_ptr__,pFVar4,&local_e8);
  if (local_30.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_30.TextData.Reference + 0x10))();
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

