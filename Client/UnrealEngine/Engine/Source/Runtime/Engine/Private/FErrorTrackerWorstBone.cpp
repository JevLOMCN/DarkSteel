// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ToText @ 14741a640

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
FErrorTrackerWorstBone::ToText(FErrorTrackerWorstBone *this,FText *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  FTextFormat *pFVar4;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_1a8
  ;
  FNumberFormattingOptions local_198;
  FString local_180;
  TSharedPtr<FCulture,1> local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  TSharedPtr<FCulture,1> local_120;
  FFormatArgumentValue local_110;
  FFormatArgumentValue local_f0;
  FFormatArgumentValue local_d0;
  FFormatArgumentValue local_b0;
  FFormatArgumentValue local_90;
  FText local_70;
  FText local_60;
  FText local_50;
  FText local_40;
  FText local_30;
  FTextFormat local_20;
  
  FNumberFormattingOptions::FNumberFormattingOptions(&local_198);
  local_198.MinimumIntegralDigits = 1;
  local_198.MinimumFractionalDigits = 3;
  local_1a8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.Pairs.ArrayNum = 0;
  local_1a8.Pairs.ArrayMax = 0;
  local_170.Object = (FCulture *)0x0;
  local_170.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar3 = FText::AsNumber(&local_70,this->BoneError,&local_198,&local_170);
  local_f0.Type = Text;
  FText::FText((FText *)&local_f0.TextValue,pFVar3);
  if (local_f0.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
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
  ::FString::FString(&local_180,L"BoneError");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_1a8,&local_180,&local_f0);
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  if (local_f0.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_f0.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  if (local_70.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_170.SharedReferenceCount.ReferenceController);
  pFVar3 = FText::FromName(&local_60,&this->BoneErrorAnimName);
  local_d0.Type = Text;
  FText::FText((FText *)&local_d0.TextValue,pFVar3);
  if (local_d0.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
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
  ::FString::FString(&local_160,L"BoneErrorAnimName");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_1a8,&local_160,&local_d0);
  if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data.AllocatorInstance.Data);
  }
  if (local_d0.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_d0.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  if (local_60.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
  }
  pFVar3 = FText::FromName(&local_50,&this->BoneErrorBoneName);
  local_b0.Type = Text;
  FText::FText((FText *)&local_b0.TextValue,pFVar3);
  if (local_b0.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
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
  ::FString::FString(&local_150,L"BoneErrorBoneName");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_1a8,&local_150,&local_b0);
  if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.Data.AllocatorInstance.Data);
  }
  if (local_b0.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_b0.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  if (local_50.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
  }
  local_110.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)this->BoneErrorBone;
  local_110.Type = Int;
  local_110.TextValue.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(ITextData *)0x0;
  local_110.TextValue.field0_0x0.TypedValue.Flags = 0;
  ::FString::FString(&local_140,L"BoneErrorBone");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_1a8,&local_140,&local_110);
  if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
  }
  if (local_110.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_110.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
              ();
  }
  local_120.Object = (FCulture *)0x0;
  local_120.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar3 = FText::AsNumber(&local_40,this->BoneErrorTime,&local_198,&local_120);
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
  ::FString::FString(&local_130,L"BoneErrorTime");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_1a8,&local_130,&local_90);
  if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data.AllocatorInstance.Data);
  }
  if (local_90.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_90.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  if (local_40.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_120.SharedReferenceCount.ReferenceController);
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_30,L"Engine",L"CompressionWorstBoneSummary",
                      L"{BoneError} in Animation {BoneErrorAnimName}, Bone : {BoneErrorBoneName}(#{BoneErrorBone}), at Time {BoneErrorTime}"
                     );
  pFVar4 = FTextFormat::FTextFormat(&local_20,pFVar3,Default);
  FText::Format(__return_storage_ptr__,pFVar4,&local_1a8);
  if (local_30.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_30.TextData.Reference + 0x10))();
  }
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_1a8.Pairs.AllocatorInstance.Data,
             local_1a8.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_1a8.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_1a8.Pairs.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

