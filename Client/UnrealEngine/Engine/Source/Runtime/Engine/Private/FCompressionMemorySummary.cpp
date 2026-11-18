// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FCompressionMemorySummary @ 1473d5630

FCompressionMemorySummary * __thiscall
FCompressionMemorySummary::FCompressionMemorySummary(FCompressionMemorySummary *this,bool param_1)

{
  int *piVar1;
  
  this->bEnabled = param_1;
  this->bUsed = false;
  this->bPerformedCompression = false;
  piVar1 = &(this->WorstBoneError).Items.ArrayMax;
  this->TotalRaw = 0;
  this->TotalBeforeCompressed = 0;
  this->TotalAfterCompressed = 0;
  this->NumberOfAnimations = 0;
  this->TotalCompressionExecutionTime = 0.0;
  this->ErrorTotal = 0.0;
  this->ErrorCount = 0.0;
  this->AverageError = 0.0;
  (this->WorstBoneError).Items.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorstBoneError).Items.ArrayNum = 0;
  *piVar1 = 0;
  (this->WorstBoneError).CurrentLowestError = 0.0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x1c,4,10,(ForAnyElementType *)&this->WorstBoneError,0,piVar1);
  piVar1 = &(this->WorstAnimationError).Items.ArrayMax;
  (this->WorstAnimationError).Items.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorstAnimationError).Items.ArrayNum = 0;
  *piVar1 = 0;
  (this->WorstAnimationError).CurrentLowestError = 0.0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,10,(ForAnyElementType *)&this->WorstAnimationError,0,piVar1);
  return this;
}

// ~FCompressionMemorySummary @ 1473d9e00

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCompressionMemorySummary::~FCompressionMemorySummary(FCompressionMemorySummary *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  long64 lVar3;
  long64 lVar4;
  bool bVar5;
  uint uVar6;
  FText *pFVar7;
  FString *pFVar8;
  FTextFormat *pFVar9;
  int iVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  FName local_res8;
  FName local_res10;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_548
  ;
  FNumberFormattingOptions local_538;
  FText local_520;
  FErrorTrackerWorstAnimation local_510;
  FString local_500;
  TSharedPtr<FCulture,1> local_4f0;
  FString local_4e0;
  TSharedPtr<FCulture,1> local_4d0;
  FString local_4c0;
  TSharedPtr<FCulture,1> local_4b0;
  FString local_4a0;
  TSharedPtr<FCulture,1> local_490;
  FString local_480;
  FString local_470;
  TSharedPtr<FCulture,1> local_460;
  FString local_450;
  TSharedPtr<FCulture,1> local_440;
  FString local_430;
  FString local_420;
  FString local_410;
  TSharedPtr<FCulture,1> local_400;
  FString local_3f0;
  TSharedPtr<FCulture,1> local_3e0;
  FString local_3d0;
  FString local_3c0;
  FString local_3b0;
  FString local_3a0;
  FFormatArgumentValue local_390;
  FFormatArgumentValue local_370;
  FFormatArgumentValue local_350;
  FFormatArgumentValue local_330;
  FFormatArgumentValue local_310;
  FFormatArgumentValue local_2f0;
  FFormatArgumentValue local_2d0;
  FFormatArgumentValue local_2b0;
  FFormatArgumentValue local_290;
  FFormatArgumentValue local_270;
  FFormatArgumentValue local_250;
  FFormatArgumentValue local_230;
  FFormatArgumentValue local_210;
  FFormatArgumentValue local_1f0;
  FFormatArgumentValue local_1d0;
  FErrorTrackerWorstBone local_1b0;
  FText local_190;
  FText local_180;
  FText local_170;
  FText local_160;
  FText local_150;
  FText local_140;
  FString local_130;
  FText local_120;
  FText local_110;
  FText local_100;
  FText local_f0;
  FText local_e0;
  FText local_d0;
  FText local_c0;
  FText local_b0;
  FText local_a0;
  FText local_90;
  FText local_80;
  FText local_70;
  FTextFormat local_60;
  FTextFormat local_50 [3];
  
  if ((this->bEnabled != false) && (this->bUsed != false)) {
    iVar10 = (int)this->TotalRaw;
    lVar3 = this->TotalBeforeCompressed;
    lVar4 = this->TotalAfterCompressed;
    fVar12 = 0.0;
    fVar13 = 0.0;
    if (0.0 < (float)this->TotalBeforeCompressed) {
      fVar13 = (float)this->TotalRaw / (float)this->TotalBeforeCompressed;
    }
    if (0.0 < (float)this->TotalAfterCompressed) {
      fVar12 = (float)this->TotalRaw / (float)this->TotalAfterCompressed;
    }
    FNumberFormattingOptions::FNumberFormattingOptions(&local_538);
    uVar11 = 0;
    local_538.MinimumIntegralDigits = 7;
    local_538.MinimumFractionalDigits = 2;
    local_548.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_548.Pairs.ArrayNum = 0;
    local_548.Pairs.ArrayMax = 0;
    local_4f0.Object = (FCulture *)0x0;
    local_4f0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar7 = FText::AsMemory(&local_190,this->TotalRaw,&local_538,&local_4f0,IEC);
    local_2d0.Type = Text;
    FText::FText((FText *)&local_2d0.TextValue,pFVar7);
    if ((local_2d0.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    ::FString::FString(&local_500,L"TotalRaw");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_548,&local_500,&local_2d0);
    if (local_500.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_500.Data.AllocatorInstance.Data);
    }
    if (local_2d0.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_2d0.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_190.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_190.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4f0.SharedReferenceCount.ReferenceController);
    local_4d0.Object = (FCulture *)0x0;
    local_4d0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar7 = FText::AsMemory(&local_180,this->TotalBeforeCompressed,&local_538,&local_4d0,IEC);
    local_2b0.Type = Text;
    FText::FText((FText *)&local_2b0.TextValue,pFVar7);
    if ((local_2b0.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    ::FString::FString(&local_4e0,L"TotalBeforeCompressed");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_548,&local_4e0,&local_2b0);
    if (local_4e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4e0.Data.AllocatorInstance.Data);
    }
    if (local_2b0.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_2b0.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_180.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_180.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4d0.SharedReferenceCount.ReferenceController);
    local_4b0.Object = (FCulture *)0x0;
    local_4b0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar7 = FText::AsMemory(&local_170,(longlong)(iVar10 - (int)lVar3),&local_538,&local_4b0,IEC);
    local_290.Type = Text;
    FText::FText((FText *)&local_290.TextValue,pFVar7);
    if ((local_290.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    ::FString::FString(&local_4c0,L"TotalBeforeSaving");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_548,&local_4c0,&local_290);
    if (local_4c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4c0.Data.AllocatorInstance.Data);
    }
    if (local_290.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_290.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_170.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_170.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4b0.SharedReferenceCount.ReferenceController);
    local_490.Object = (FCulture *)0x0;
    local_490.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar7 = FText::AsNumber(&local_140,this->NumberOfAnimations,(FNumberFormattingOptions *)0x0,
                             &local_490);
    local_270.Type = Text;
    FText::FText((FText *)&local_270.TextValue,pFVar7);
    if ((local_270.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    ::FString::FString(&local_4a0,L"NumberOfAnimations");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_548,&local_4a0,&local_270);
    if (local_4a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4a0.Data.AllocatorInstance.Data);
    }
    if (local_270.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_270.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_140.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_140.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_490.SharedReferenceCount.ReferenceController);
    local_370.Type = Float;
    local_370.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(ITextData *)0x0;
    local_370.TextValue.field0_0x0.TypedValue.Flags = 0;
    local_370.field1_0x8.FloatValue = fVar13;
    ::FString::FString(&local_480,L"OldCompressionRatio");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_548,&local_480,&local_370);
    if (local_480.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_480.Data.AllocatorInstance.Data);
    }
    if (local_370.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_370.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    local_460.Object = (FCulture *)0x0;
    local_460.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar7 = FText::AsMemory(&local_150,this->TotalAfterCompressed,&local_538,&local_460,IEC);
    local_2f0.Type = Text;
    FText::FText((FText *)&local_2f0.TextValue,pFVar7);
    if ((local_2f0.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    ::FString::FString(&local_470,L"TotalAfterCompressed");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_548,&local_470,&local_2f0);
    if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_470.Data.AllocatorInstance.Data);
    }
    if (local_2f0.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_2f0.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_150.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_150.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_460.SharedReferenceCount.ReferenceController);
    local_440.Object = (FCulture *)0x0;
    local_440.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar7 = FText::AsMemory(&local_160,(longlong)(iVar10 - (int)lVar4),&local_538,&local_440,IEC);
    local_250.Type = Text;
    FText::FText((FText *)&local_250.TextValue,pFVar7);
    if ((local_250.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    ::FString::FString(&local_450,L"TotalAfterSaving");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_548,&local_450,&local_250);
    if (local_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_450.Data.AllocatorInstance.Data);
    }
    if (local_250.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_250.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_160.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_160.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_440.SharedReferenceCount.ReferenceController);
    local_390.Type = Float;
    local_390.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(ITextData *)0x0;
    local_390.TextValue.field0_0x0.TypedValue.Flags = 0;
    local_390.field1_0x8.FloatValue = fVar12;
    ::FString::FString(&local_430,L"NewCompressionRatio");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_548,&local_430,&local_390);
    if (local_430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_430.Data.AllocatorInstance.Data);
    }
    if (local_390.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_390.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    pFVar8 = FGenericPlatformTime::PrettyTime(&local_130,this->TotalCompressionExecutionTime);
    pFVar7 = FText::FromString(&local_f0,pFVar8);
    local_230.Type = Text;
    FText::FText((FText *)&local_230.TextValue,pFVar7);
    if ((local_230.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    ::FString::FString(&local_420,L"TotalTimeSpentCompressingPretty");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_548,&local_420,&local_230);
    if (local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_420.Data.AllocatorInstance.Data);
    }
    if (local_230.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_230.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_f0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
    }
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
    local_400.Object = (FCulture *)0x0;
    local_400.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar7 = FText::AsNumber(&local_120,(float)this->TotalCompressionExecutionTime,&local_538,
                             &local_400);
    local_210.Type = Text;
    FText::FText((FText *)&local_210.TextValue,pFVar7);
    if ((local_210.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    ::FString::FString(&local_410,L"TotalTimeSpentCompressingRawSeconds");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_548,&local_410,&local_210);
    if (local_410.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_410.Data.AllocatorInstance.Data);
    }
    if (local_210.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_210.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_120.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_120.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_400.SharedReferenceCount.ReferenceController);
    local_3e0.Object = (FCulture *)0x0;
    local_3e0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar7 = FText::AsNumber(&local_110,this->AverageError,&local_538,&local_3e0);
    local_1f0.Type = Text;
    FText::FText((FText *)&local_1f0.TextValue,pFVar7);
    if ((local_1f0.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    ::FString::FString(&local_3f0,L"AverageError");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_548,&local_3f0,&local_1f0);
    if (local_3f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3f0.Data.AllocatorInstance.Data);
    }
    if (local_1f0.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_1f0.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_110.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_110.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3e0.SharedReferenceCount.ReferenceController);
    if ((this->WorstBoneError).Items.ArrayNum < 1) {
      local_res8.ComparisonIndex.Value = 0;
      local_res8.Number = 0;
      pFVar7 = FText::FromName(&local_d0,&local_res8);
      local_330.Type = Text;
      FText::FText((FText *)&local_330.TextValue,pFVar7);
      if ((local_330.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      ::FString::FString(&local_3b0,L"WorstBoneError");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_548,&local_3b0,&local_330);
      if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
      }
      if (local_330.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_330.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_d0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))();
      }
      local_res10.ComparisonIndex.Value = 0;
      local_res10.Number = 0;
      pFVar7 = FText::FromName(&local_c0,&local_res10);
      local_310.Type = Text;
      FText::FText((FText *)&local_310.TextValue,pFVar7);
      if ((local_310.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      ::FString::FString(&local_3a0,L"WorstAnimationError");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_548,&local_3a0,&local_310);
      if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
      }
      if (local_310.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_310.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
    }
    else {
      pFVar1 = (this->WorstBoneError).Items.AllocatorInstance.Data;
      local_1b0._0_8_ = *(undefined8 *)pFVar1;
      local_1b0._8_8_ = *(undefined8 *)(pFVar1 + 8);
      local_1b0._16_8_ = *(undefined8 *)(pFVar1 + 0x10);
      local_1b0.BoneErrorAnimName.Number = *(uint *)(pFVar1 + 0x18);
      if (((this->WorstAnimationError).Items.ArrayNum < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->WorstAnimationError).Items.AllocatorInstance.Data;
      local_510._0_8_ = *(undefined8 *)pFVar1;
      local_510.AnimName.Number = *(uint *)(pFVar1 + 8);
      pFVar7 = FErrorTrackerWorstBone::ToText(&local_1b0,&local_100);
      local_1d0.Type = Text;
      FText::FText((FText *)&local_1d0.TextValue,pFVar7);
      if ((local_1d0.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      ::FString::FString(&local_3d0,L"WorstBoneError");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_548,&local_3d0,&local_1d0);
      if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
      }
      if (local_1d0.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_1d0.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_100.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
      }
      pFVar7 = FErrorTrackerWorstAnimation::ToText(&local_510,&local_e0);
      local_350.Type = Text;
      FText::FText((FText *)&local_350.TextValue,pFVar7);
      if ((local_350.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      ::FString::FString(&local_3c0,L"WorstAnimationError");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_548,&local_3c0,&local_350);
      if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
      }
      local_c0.TextData.Reference = local_e0.TextData.Reference;
      if (local_350.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_350.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
        local_c0.TextData.Reference = local_e0.TextData.Reference;
      }
    }
    if (local_c0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_c0.TextData.Reference + 0x10))();
    }
    FText::FText(&local_520);
    if (this->bPerformedCompression == false) {
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_a0,L"Engine",L"CompressionMemorySummaryNoChange",
                          L"Fetched compressed data for {NumberOfAnimations} Animation(s)\n\nRaw: {TotalRaw} - Compressed: {TotalAfterCompressed}\nSaving: {TotalAfterSaving} ({NewCompressionRatio})\n\nEnd Effector Translation Added By Compression:\n Average: {AverageError} Max:\n{WorstBoneError}\n\nWorst Animation Error Seen:\n{WorstAnimationError}"
                         );
      pFVar9 = FTextFormat::FTextFormat(&local_60,pFVar7,Default);
      pFVar7 = FText::Format(&local_b0,pFVar9,&local_548);
      FText::operator=(&local_520,pFVar7);
      local_80.TextData.Reference = local_a0.TextData.Reference;
      if (local_b0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
        local_80.TextData.Reference = local_a0.TextData.Reference;
      }
    }
    else {
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_80,L"Engine",L"CompressionMemorySummary",
                          L"Compressed {NumberOfAnimations} Animation(s)\n\nPre Compression:\n\nRaw: {TotalRaw} - Compressed: {TotalBeforeCompressed}\nSaving: {TotalBeforeSaving} ({OldCompressionRatio})\n\nPost Compression:\n\nRaw: {TotalRaw} - Compressed: {TotalAfterCompressed}\nSaving: {TotalAfterSaving} ({NewCompressionRatio})\n\nTotal Compression Time: {TotalTimeSpentCompressingPretty} (Seconds: {TotalTimeSpentCompressingRawSeconds})\n\nEnd Effector Translation Added By Compression:\n Average: {AverageError} Max:\n{WorstBoneError}\n\nWorst Animation Error Seen:\n{WorstAnimationError}"
                         );
      pFVar9 = FTextFormat::FTextFormat(local_50,pFVar7,Default);
      pFVar7 = FText::Format(&local_90,pFVar9,&local_548);
      FText::operator=(&local_520,pFVar7);
      if (local_90.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
      }
    }
    if (local_80.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
    }
    if (3 < (byte)LogAnimationCompression._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
    }
    iVar10 = (this->WorstBoneError).Items.ArrayNum;
    if (0 < iVar10) {
      do {
        if (3 < (byte)LogAnimationCompression._0_1_) {
          uVar6 = 0;
          if ((int)uVar11 < iVar10) {
            uVar6 = ~uVar11 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar7 = FErrorTrackerWorstBone::ToText
                             ((FErrorTrackerWorstBone *)
                              ((this->WorstBoneError).Items.AllocatorInstance.Data +
                              (longlong)(int)uVar11 * 0x1c),&local_70);
          FText::ToString(pFVar7);
          UE::Logging::Private::BasicLog<4>
                    ((FStaticBasicLogRecord *)
                     &`public:_void___cdecl_FMaxErrorStatTracker<FErrorTrackerWorstBone,float,10>::LogErrorStat(void)___ptr64'
                      ::__l5::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
          if (local_70.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
          }
        }
        iVar10 = (this->WorstBoneError).Items.ArrayNum;
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < iVar10);
    }
    if (3 < (byte)LogAnimationCompression._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
    }
    FMaxErrorStatTracker<FErrorTrackerWorstAnimation,float,10>::LogErrorStat
              (&this->WorstAnimationError);
    FMessageDialog::Open(Ok,&local_520);
    if (local_520.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_520.TextData.Reference + 0x10))();
    }
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>
              ((TTuple<FString,FFormatArgumentValue> *)local_548.Pairs.AllocatorInstance.Data,
               local_548.Pairs.ArrayNum);
    if ((TTuple<FString,FFormatArgumentValue> *)local_548.Pairs.AllocatorInstance.Data !=
        (TTuple<FString,FFormatArgumentValue> *)0x0) {
      FMemory::Free(local_548.Pairs.AllocatorInstance.Data);
    }
  }
  pFVar1 = (this->WorstAnimationError).Items.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WorstBoneError).Items.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// GatherPostCompressionStats @ 1473fe030

void __thiscall
FCompressionMemorySummary::GatherPostCompressionStats
          (FCompressionMemorySummary *this,FCompressedAnimSequence *param_1,
          TArray<FBoneData,TSizedDefaultAllocator<32>_> *param_2,FName param_3,double param_4,
          bool param_5)

{
  return;
}

