// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// LogErrorStat @ 14740a7d0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMaxErrorStatTracker<FErrorTrackerWorstAnimation,float,10>::LogErrorStat
          (FMaxErrorStatTracker<FErrorTrackerWorstAnimation,float,10> *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FText *pFVar5;
  FTextFormat *pFVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_108
  ;
  FString local_f8;
  TSharedPtr<FCulture,1> local_e8;
  FString local_d8;
  FText local_c8;
  FNumberFormattingOptions local_b8;
  FFormatArgumentValue local_a0;
  FFormatArgumentValue local_80;
  FText local_60;
  FText local_50;
  FText local_40;
  FTextFormat local_30;
  
  iVar7 = (this->Items).ArrayNum;
  uVar9 = 0;
  uVar10 = uVar9;
  if (0 < iVar7) {
    do {
      uVar8 = (uint)uVar9;
      if (3 < (byte)LogAnimationCompression._0_1_) {
        uVar4 = 0;
        if ((int)uVar8 < iVar7) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (this->Items).AllocatorInstance.Data;
        FNumberFormattingOptions::FNumberFormattingOptions(&local_b8);
        local_b8.MinimumIntegralDigits = 1;
        local_b8.MinimumFractionalDigits = 3;
        local_108.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e8.Object = (FCulture *)0x0;
        local_e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_108.Pairs.ArrayNum = 0;
        local_108.Pairs.ArrayMax = 0;
        pFVar5 = FText::AsNumber(&local_60,*(float *)(pFVar1 + uVar10),&local_b8,&local_e8);
        local_a0.Type = Text;
        FText::FText((FText *)&local_a0.TextValue,pFVar5);
        if ((local_a0.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        ::FString::FString(&local_f8,L"AvgError");
        TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
        Emplace<FString,FFormatArgumentValue>(&local_108,&local_f8,&local_a0);
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        if (local_a0.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_a0.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        if (local_60.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_e8.SharedReferenceCount.ReferenceController);
        pFVar5 = FText::FromName(&local_50,(FName *)(pFVar1 + uVar10 + 4));
        local_80.Type = Text;
        FText::FText((FText *)&local_80.TextValue,pFVar5);
        if ((local_80.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        ::FString::FString(&local_d8,L"AnimName");
        TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
        Emplace<FString,FFormatArgumentValue>(&local_108,&local_d8,&local_80);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        if (local_80.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_80.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        if (local_50.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
        }
        pFVar5 = FText::AsLocalizable_Advanced_LocText
                           (&local_40,L"Engine",L"CompressionWorstAnimationSummary",
                            L"{AvgError} in Animation {AnimName}");
        pFVar6 = FTextFormat::FTextFormat(&local_30,pFVar5,Default);
        FText::Format(&local_c8,pFVar6,&local_108);
        if (local_40.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
        }
        DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                  ((TTuple<FString,FFormatArgumentValue> *)local_108.Pairs.AllocatorInstance.Data,
                   local_108.Pairs.ArrayNum);
        if ((TTuple<FString,FFormatArgumentValue> *)local_108.Pairs.AllocatorInstance.Data !=
            (TTuple<FString,FFormatArgumentValue> *)0x0) {
          FMemory::Free(local_108.Pairs.AllocatorInstance.Data);
        }
        FText::ToString(&local_c8);
        UE::Logging::Private::BasicLog<4>
                  (&`public:_void___cdecl_FMaxErrorStatTracker<FErrorTrackerWorstAnimation,float,10>::LogErrorStat(void)___ptr64'
                    ::__l5::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
        if (local_c8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
        }
      }
      iVar7 = (this->Items).ArrayNum;
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar10 = uVar10 + 0xc;
    } while ((int)(uVar8 + 1) < iVar7);
  }
  return;
}

