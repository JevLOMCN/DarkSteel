// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 21

// StaticClass @ 14a784d70

UClass * __cdecl UCommonDateTimeTextBlock::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonDateTimeTextBlock.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonDateTimeTextBlock",
               &Z_Registration_Info_UClass_UCommonDateTimeTextBlock.InnerSingleton,
               StaticRegisterNativesUCommonDateTimeTextBlock,0x430,0x10,
               CLASS_Intrinsic|CLASS_DefaultConfig,CASTCLASS_None,L"CommonUI",
               InternalConstructor<UCommonDateTimeTextBlock>,
               InternalVTableHelperCtorCaller<UCommonDateTimeTextBlock>,local_res8,
               UCommonTextBlock::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonDateTimeTextBlock.InnerSingleton;
}

// UCommonDateTimeTextBlock @ 14a7ad680

UCommonDateTimeTextBlock * __thiscall
UCommonDateTimeTextBlock::UCommonDateTimeTextBlock
          (UCommonDateTimeTextBlock *this,FVTableHelper *param_1)

{
  UCommonTextBlock::UCommonTextBlock((UCommonTextBlock *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  FText::FText(&this->CustomTimespanFormat);
  this->bCustomTimespanLeadingZeros = false;
  (this->TimerTickHandle).Handle = 0;
  (this->DateTime).Ticks = 0;
  FText::FText(&this->CountdownCompletionText);
  *(undefined8 *)&this->OnTimeCountDownCompletionEvent = 0;
  *(undefined8 *)&(this->OnTimeCountDownCompletionEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnTimeCountDownCompletionEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnTimeCountDownCompletionEvent).field_0x18 = 2;
  return this;
}

// UCommonDateTimeTextBlock @ 14a7ad710

UCommonDateTimeTextBlock * __thiscall
UCommonDateTimeTextBlock::UCommonDateTimeTextBlock
          (UCommonDateTimeTextBlock *this,FObjectInitializer *param_1)

{
  UCommonTextBlock::UCommonTextBlock((UCommonTextBlock *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  FText::FText(&this->CustomTimespanFormat);
  this->bCustomTimespanLeadingZeros = false;
  (this->TimerTickHandle).Handle = 0;
  (this->DateTime).Ticks = 0;
  this->bUseCountdownCompletionText = false;
  this->LastDaysCount = -1;
  this->LastHoursCount = -1;
  FText::FText(&this->CountdownCompletionText);
  *(undefined8 *)&this->OnTimeCountDownCompletionEvent = 0;
  *(undefined8 *)&(this->OnTimeCountDownCompletionEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnTimeCountDownCompletionEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnTimeCountDownCompletionEvent).field_0x18 = 2;
  return this;
}

// ~UCommonDateTimeTextBlock @ 14a7b2b10

void __thiscall UCommonDateTimeTextBlock::~UCommonDateTimeTextBlock(UCommonDateTimeTextBlock *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnTimeCountDownCompletionEvent).field_0x8,
             *(int *)&(this->OnTimeCountDownCompletionEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnTimeCountDownCompletionEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTimeCountDownCompletionEvent);
  pIVar2 = (this->CountdownCompletionText).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (this->CustomTimespanFormat).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  this->_padding_ = (longlong)&UCommonTextBlock::_vftable__for__UVisual__;
  this->_padding_ = (longlong)&UCommonTextBlock::_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  UTextBlock::~UTextBlock((UTextBlock *)this);
  return;
}

// FormatDateTime @ 14a7ddec0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TOptional<FText> * __thiscall
UCommonDateTimeTextBlock::FormatDateTime
          (UCommonDateTimeTextBlock *this,TOptional<FText> *__return_storage_ptr__,
          FDateTime *param_1)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  TOptional<FText> *pTVar4;
  FString local_38;
  TSharedPtr<FCulture,1> local_28;
  FText local_18;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_28.Object = (FCulture *)0x0;
  local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar3 = FText::AsDateTime(&local_18,param_1,Default,Default,&local_38,&local_28);
  FText::FText((FText *)__return_storage_ptr__,pFVar3);
  if ((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TOptional<FText> *)(*pcVar1)();
      return pTVar4;
    }
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// FormatTimespan @ 14a7de2b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TOptional<FText> * __thiscall
UCommonDateTimeTextBlock::FormatTimespan
          (UCommonDateTimeTextBlock *this,TOptional<FText> *__return_storage_ptr__,
          FTimespan *param_1)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  TOptional<FText> *pTVar4;
  FTextFormat *pFVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  double dVar9;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_2c8
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_2b8
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_2a8
  ;
  FNumberFormattingOptions local_298;
  TSharedPtr<FCulture,1> local_280;
  FString local_270;
  FText local_260;
  FString local_250;
  FText local_240;
  TSharedPtr<FCulture,1> local_230;
  FString local_220;
  TSharedPtr<FCulture,1> local_210;
  FString local_200;
  TSharedPtr<FCulture,1> local_1f0;
  FString local_1e0;
  TSharedPtr<FCulture,1> local_1d0;
  FString local_1c0;
  TSharedPtr<FCulture,1> local_1b0;
  FFormatArgumentValue local_1a0;
  FFormatArgumentValue local_180;
  FFormatArgumentValue local_160;
  FFormatArgumentValue local_140;
  FFormatArgumentValue local_120;
  FFormatArgumentValue local_100;
  FText local_e0;
  FText local_d0;
  FText local_c0;
  FText local_b0;
  FText local_a0;
  FText local_90;
  FText local_80;
  FText local_70;
  FText local_60;
  FTextFormat local_50;
  FTextFormat local_40;
  FTextFormat local_30;
  
  (__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
  (__return_storage_ptr__->field0_0x0).TypedValue.Flags = 0;
  bVar2 = FText::IsEmpty(&this->CustomTimespanFormat);
  if (bVar2) {
    dVar9 = (double)param_1->Ticks;
    if (__real_3ff0000000000000 <= dVar9 * __real_3e7ad7f29abcaf48) {
      iVar8 = (int)(param_1->Ticks / 864000000000);
      if (iVar8 < 3) {
        iVar8 = (int)(dVar9 * ___real_3dbe8abfd59a6108);
        if (iVar8 < 0xd) {
          local_230.Object = (FCulture *)0x0;
          local_230.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pFVar3 = FText::AsTimespan(&local_a0,param_1,&local_230);
          if (pFVar3 != (FText *)__return_storage_ptr__) {
            if (*(longlong **)&__return_storage_ptr__->field0_0x0 != (longlong *)0x0) {
              (**(code **)(**(longlong **)&__return_storage_ptr__->field0_0x0 + 0x10))();
            }
            FText::FText((FText *)__return_storage_ptr__,pFVar3);
            if ((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference ==
                (ITextData *)0x0) {
              bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x171,
                                 L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                );
              if (bVar2) {
                pcVar1 = (code *)swi(3);
                pTVar4 = (TOptional<FText> *)(*pcVar1)();
                return pTVar4;
              }
            }
          }
          if (local_a0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_a0.TextData.Reference + 0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_230.SharedReferenceCount.ReferenceController);
        }
        else if (iVar8 != this->LastHoursCount) {
          FText::AsLocalizable_Advanced_LocText
                    (&local_240,L"CommonDateTimeTextBlock",L"HoursFormatText",
                     L"{Hours} {Hours}|plural(one=Hour, other=Hours)");
          local_180.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)iVar8;
          local_2a8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2a8.Pairs.ArrayNum = 0;
          local_2a8.Pairs.ArrayMax = 0;
          local_180.Type = Int;
          local_180.TextValue.field0_0x0.TypedValue.TextData.Reference =
               (TRefCountPtr<ITextData>)(ITextData *)0x0;
          local_180.TextValue.field0_0x0.TypedValue.Flags = 0;
          ::FString::FString(&local_250,L"Hours");
          TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
          Emplace<FString,FFormatArgumentValue>(&local_2a8,&local_250,&local_180);
          if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_250.Data.AllocatorInstance.Data);
          }
          if (local_180.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)
                         *(ITextData *)local_180.TextValue.field0_0x0.TypedValue.TextData.Reference
                        + 0x10))();
          }
          pFVar5 = FTextFormat::FTextFormat(&local_40,&local_240,Default);
          pFVar3 = FText::Format(&local_b0,pFVar5,&local_2a8);
          if (pFVar3 != (FText *)__return_storage_ptr__) {
            if (*(longlong **)&__return_storage_ptr__->field0_0x0 != (longlong *)0x0) {
              (**(code **)(**(longlong **)&__return_storage_ptr__->field0_0x0 + 0x10))();
            }
            FText::FText((FText *)__return_storage_ptr__,pFVar3);
            if ((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference ==
                (ITextData *)0x0) {
              bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x171,
                                 L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                );
              if (bVar2) {
                pcVar1 = (code *)swi(3);
                pTVar4 = (TOptional<FText> *)(*pcVar1)();
                return pTVar4;
              }
            }
          }
          if (local_b0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
          }
          DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                    ((TTuple<FString,FFormatArgumentValue> *)local_2a8.Pairs.AllocatorInstance.Data,
                     local_2a8.Pairs.ArrayNum);
          if ((TTuple<FString,FFormatArgumentValue> *)local_2a8.Pairs.AllocatorInstance.Data !=
              (TTuple<FString,FFormatArgumentValue> *)0x0) {
            FMemory::Free(local_2a8.Pairs.AllocatorInstance.Data);
          }
          if (local_240.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_240.TextData.Reference + 0x10))();
          }
        }
      }
      else if (iVar8 != this->LastDaysCount) {
        FText::AsLocalizable_Advanced_LocText
                  (&local_260,L"CommonDateTimeTextBlock",L"DaysFormatText",
                   L"{Days} {Days}|plural(one=Day, other=Days)");
        local_1a0.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)iVar8;
        local_2b8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2b8.Pairs.ArrayNum = 0;
        local_2b8.Pairs.ArrayMax = 0;
        local_1a0.Type = Int;
        local_1a0.TextValue.field0_0x0.TypedValue.TextData.Reference =
             (TRefCountPtr<ITextData>)(ITextData *)0x0;
        local_1a0.TextValue.field0_0x0.TypedValue.Flags = 0;
        ::FString::FString(&local_270,L"Days");
        TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
        Emplace<FString,FFormatArgumentValue>(&local_2b8,&local_270,&local_1a0);
        if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_270.Data.AllocatorInstance.Data);
        }
        if (local_1a0.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_1a0.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        pFVar5 = FTextFormat::FTextFormat(&local_50,&local_260,Default);
        pFVar3 = FText::Format(&local_60,pFVar5,&local_2b8);
        if (pFVar3 != (FText *)__return_storage_ptr__) {
          if (*(longlong **)&__return_storage_ptr__->field0_0x0 != (longlong *)0x0) {
            (**(code **)(**(longlong **)&__return_storage_ptr__->field0_0x0 + 0x10))();
          }
          FText::FText((FText *)__return_storage_ptr__,pFVar3);
          if ((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0
             ) {
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x171,
                               L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                              );
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              pTVar4 = (TOptional<FText> *)(*pcVar1)();
              return pTVar4;
            }
          }
        }
        if (local_60.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
        }
        DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                  ((TTuple<FString,FFormatArgumentValue> *)local_2b8.Pairs.AllocatorInstance.Data,
                   local_2b8.Pairs.ArrayNum);
        if ((TTuple<FString,FFormatArgumentValue> *)local_2b8.Pairs.AllocatorInstance.Data !=
            (TTuple<FString,FFormatArgumentValue> *)0x0) {
          FMemory::Free(local_2b8.Pairs.AllocatorInstance.Data);
        }
        if (local_260.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_260.TextData.Reference + 0x10))();
        }
      }
    }
    else {
      local_280.Object = (FCulture *)0x0;
      local_280.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar3 = FText::AsTimespan(&local_c0,param_1,&local_280);
      if (pFVar3 != (FText *)__return_storage_ptr__) {
        if (*(longlong **)&__return_storage_ptr__->field0_0x0 != (longlong *)0x0) {
          (**(code **)(**(longlong **)&__return_storage_ptr__->field0_0x0 + 0x10))();
        }
        FText::FText((FText *)__return_storage_ptr__,pFVar3);
        if ((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0)
        {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x171,
                             L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                            );
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            pTVar4 = (TOptional<FText> *)(*pcVar1)();
            return pTVar4;
          }
        }
      }
      if (local_c0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c0.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_280.SharedReferenceCount.ReferenceController);
    }
  }
  else {
    FNumberFormattingOptions::FNumberFormattingOptions(&local_298);
    local_2c8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2c8.Pairs.ArrayNum = 0;
    local_2c8.Pairs.ArrayMax = 0;
    local_298.MinimumIntegralDigits = (this->bCustomTimespanLeadingZeros != false) + 1;
    local_210.Object = (FCulture *)0x0;
    local_210.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar3 = FText::AsNumber(&local_90,(int)(param_1->Ticks / 864000000000),&local_298,&local_210);
    local_140.Type = Text;
    FText::FText((FText *)&local_140.TextValue,pFVar3);
    if (local_140.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FText> *)(*pcVar1)();
        return pTVar4;
      }
    }
    ::FString::FString(&local_220,L"Days");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_2c8,&local_220,&local_140);
    if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_220.Data.AllocatorInstance.Data);
    }
    if (local_140.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_140.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_90.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_210.SharedReferenceCount.ReferenceController);
    lVar6 = param_1->Ticks / 36000000000;
    local_1f0.Object = (FCulture *)0x0;
    local_1f0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar3 = FText::AsNumber(&local_80,(int)lVar6 + (int)(lVar6 / 0x18) * -0x18,&local_298,
                             &local_1f0);
    local_120.Type = Text;
    FText::FText((FText *)&local_120.TextValue,pFVar3);
    if (local_120.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FText> *)(*pcVar1)();
        return pTVar4;
      }
    }
    ::FString::FString(&local_200,L"Hours");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_2c8,&local_200,&local_120);
    if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200.Data.AllocatorInstance.Data);
    }
    if (local_120.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_120.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_80.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1f0.SharedReferenceCount.ReferenceController);
    local_1d0.Object = (FCulture *)0x0;
    local_1d0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    lVar6 = param_1->Ticks / 600000000;
    lVar7 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar6),8) + lVar6;
    pFVar3 = FText::AsNumber(&local_70,
                             (int)lVar6 + ((int)(lVar7 >> 5) - (int)(lVar7 >> 0x3f)) * -0x3c,
                             &local_298,&local_1d0);
    local_100.Type = Text;
    FText::FText((FText *)&local_100.TextValue,pFVar3);
    if (local_100.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FText> *)(*pcVar1)();
        return pTVar4;
      }
    }
    ::FString::FString(&local_1e0,L"Minutes");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_2c8,&local_1e0,&local_100);
    if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
    }
    if (local_100.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_100.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_70.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1d0.SharedReferenceCount.ReferenceController);
    local_1b0.Object = (FCulture *)0x0;
    local_1b0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    lVar6 = param_1->Ticks + SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(param_1->Ticks),8);
    lVar7 = (lVar6 >> 0x17) - (lVar6 >> 0x3f);
    lVar6 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar7),8) + lVar7;
    pFVar3 = FText::AsNumber(&local_e0,
                             (int)lVar7 + ((int)(lVar6 >> 5) - (int)(lVar6 >> 0x3f)) * -0x3c,
                             &local_298,&local_1b0);
    local_160.Type = Text;
    FText::FText((FText *)&local_160.TextValue,pFVar3);
    if (local_160.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FText> *)(*pcVar1)();
        return pTVar4;
      }
    }
    ::FString::FString(&local_1c0,L"Seconds");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_2c8,&local_1c0,&local_160);
    if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
    }
    if (local_160.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_160.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_e0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b0.SharedReferenceCount.ReferenceController);
    pFVar5 = FTextFormat::FTextFormat(&local_30,&this->CustomTimespanFormat,Default);
    pFVar3 = FText::Format(&local_d0,pFVar5,&local_2c8);
    if (pFVar3 != (FText *)__return_storage_ptr__) {
      if (*(longlong **)&__return_storage_ptr__->field0_0x0 != (longlong *)0x0) {
        (**(code **)(**(longlong **)&__return_storage_ptr__->field0_0x0 + 0x10))();
      }
      FText::FText((FText *)__return_storage_ptr__,pFVar3);
      if ((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x171,
                           L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pTVar4 = (TOptional<FText> *)(*pcVar1)();
          return pTVar4;
        }
      }
    }
    if (local_d0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))();
    }
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>
              ((TTuple<FString,FFormatArgumentValue> *)local_2c8.Pairs.AllocatorInstance.Data,
               local_2c8.Pairs.ArrayNum);
    if ((TTuple<FString,FFormatArgumentValue> *)local_2c8.Pairs.AllocatorInstance.Data !=
        (TTuple<FString,FFormatArgumentValue> *)0x0) {
      FMemory::Free(local_2c8.Pairs.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetDateTime @ 14a7e1920

FDateTime __thiscall UCommonDateTimeTextBlock::GetDateTime(UCommonDateTimeTextBlock *this)

{
  long64 *in_RDX;
  
  *in_RDX = (this->DateTime).Ticks;
  return (FDateTime)(long64)in_RDX;
}

// GetPrivateStaticClass @ 14a7e5460

UClass * __cdecl UCommonDateTimeTextBlock::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonDateTimeTextBlock.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonDateTimeTextBlock",
               &Z_Registration_Info_UClass_UCommonDateTimeTextBlock.InnerSingleton,
               StaticRegisterNativesUCommonDateTimeTextBlock,0x430,0x10,
               CLASS_Intrinsic|CLASS_DefaultConfig,CASTCLASS_None,L"CommonUI",
               InternalConstructor<UCommonDateTimeTextBlock>,
               InternalVTableHelperCtorCaller<UCommonDateTimeTextBlock>,local_res8,
               UCommonTextBlock::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonDateTimeTextBlock.InnerSingleton;
}

// GetTimespanStartingTime @ 14a7e8ec0

FDateTime __thiscall
UCommonDateTimeTextBlock::GetTimespanStartingTime(UCommonDateTimeTextBlock *this)

{
  long64 in_RDX;
  
  FDateTime::Now();
  return (FDateTime)in_RDX;
}

// SetCountDownCompletionText @ 14a817ce0

void __thiscall
UCommonDateTimeTextBlock::SetCountDownCompletionText(UCommonDateTimeTextBlock *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  
  this->bUseCountdownCompletionText = true;
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->CountdownCompletionText).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->CountdownCompletionText).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->CountdownCompletionText).Flags = param_1->Flags;
  UpdateUnderlyingText(this);
  pIVar1 = (param_1->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return;
}

// SetDateTimeValue @ 14a817db0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UCommonDateTimeTextBlock::SetDateTimeValue
          (UCommonDateTimeTextBlock *this,FDateTime param_1,bool param_2,float param_3)

{
  code *pcVar1;
  bool bVar2;
  UWorld *this_00;
  FTimerManager *pFVar3;
  FTimerData *pFVar4;
  code *local_38;
  ulonglong uStack_30;
  
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  if (this_00 == (UWorld *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3294785217964802091>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonDateTimeTextBlock.cpp"
                       ,0x2b,"World");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    if ((this->TimerTickHandle).Handle != 0) {
      pFVar3 = UWorld::GetTimerManager(this_00);
      pFVar4 = FTimerManager::FindTimer(pFVar3,&this->TimerTickHandle);
      if (pFVar4 != (FTimerData *)0x0) {
        FTimerManager::InternalClearTimer(pFVar3,(FTimerHandle)(this->TimerTickHandle).Handle);
      }
      (this->TimerTickHandle).Handle = 0;
    }
    (this->DateTime).Ticks = param_1.Ticks;
    this->bShowAsCountdown = param_2;
    if (param_2) {
      this->LastTimerTickTime = (float)this_00->TimeSeconds;
      pFVar3 = UWorld::GetTimerManager(this_00);
      uStack_30 = uStack_30 & 0xffffffff00000000;
      local_38 = TimerTick;
      FTimerManager::SetTimer<UCommonDateTimeTextBlock>
                (pFVar3,&this->TimerTickHandle,this,(pmf_be703357 *)&local_38,param_3,true,
                 __real_bf800000);
    }
    UpdateUnderlyingText(this);
  }
  return;
}

// SetTimespanValue @ 14a81c9c0

void __thiscall
UCommonDateTimeTextBlock::SetTimespanValue(UCommonDateTimeTextBlock *this,FTimespan param_1)

{
  longlong *plVar1;
  undefined1 local_res8 [8];
  
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0x378))(this,local_res8);
  SetDateTimeValue(this,(FDateTime)(*plVar1 + param_1.Ticks),true,__real_3f800000);
  return;
}

// ShouldClearTimer @ 14a81d6b0

bool __thiscall
UCommonDateTimeTextBlock::ShouldClearTimer(UCommonDateTimeTextBlock *this,FTimespan *param_1)

{
  return (double)param_1->Ticks * __real_3e7ad7f29abcaf48 < __real_3ff0000000000000;
}

// StaticRegisterNativesUCommonDateTimeTextBlock @ 14a81e540

void __cdecl UCommonDateTimeTextBlock::StaticRegisterNativesUCommonDateTimeTextBlock(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UCommonDateTimeTextBlock_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 14a81ff70

void __thiscall UCommonDateTimeTextBlock::SynchronizeProperties(UCommonDateTimeTextBlock *this)

{
  UpdateUnderlyingText(this);
  UCommonTextBlock::SynchronizeProperties((UCommonTextBlock *)this);
  return;
}

// TimerTick @ 14a822f40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCommonDateTimeTextBlock::TimerTick(UCommonDateTimeTextBlock *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_CommonDateTimeTextBlock_UpdateUnderlyingText> FVar9;
  longlong *plVar10;
  UWorld *this_00;
  FTimerManager *this_01;
  FText *pFVar11;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  uint uVar12;
  FNameEntryId FVar13;
  FName FVar14;
  FColor_u_0 aFStackX_8 [2];
  uint uStackX_10;
  uint uStackX_14;
  undefined1 auStackX_18 [8];
  longlong lStackX_20;
  FText FStack_b8;
  FName FStack_a8;
  FName FStack_a0;
  LARGE_INTEGER LStack_90;
  FStatMessage FStack_88;
  ITextData *pIStack_78;
  uint uStack_70;
  FName FStack_68;
  undefined1 auStack_60 [8];
  longlong *aplStack_58 [2];
  longlong *aplStack_48 [3];
  
  FVar9 = StatPtr_STAT_CommonDateTimeTextBlock_UpdateUnderlyingText;
  if (StatPtr_STAT_CommonDateTimeTextBlock_UpdateUnderlyingText ==
      (FThreadSafeStaticStat<FStat_STAT_CommonDateTimeTextBlock_UpdateUnderlyingText>)0x0) {
    pFVar8 = ::FName::FName(&FStack_68,"STAT_CommonDateTimeTextBlock_UpdateUnderlyingText");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_CommonDateTimeTextBlock_UpdateUnderlyingText>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_STAT_CommonDateTimeTextBlock_UpdateUnderlyingText,*pFVar8,
                       L"CommonDateTimeTextBlock UpdateUnderlyingText","STATGROUP_UI",
                       "STATCAT_Advanced",L"UI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar9;
  bVar3 = false;
  bVar5 = false;
  FStack_a0.ComparisonIndex.Value = 0;
  FStack_a0.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      aFStackX_8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&aFStackX_8[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        FStack_a8.ComparisonIndex.Value = FVar13.Value;
        FStack_a8.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&FStack_a8,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonDateTimeTextBlock.cpp"
                   ,0x52);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      uStackX_10 = FVar13.Value;
      uStackX_14 = uVar12;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar4 = true;
      goto LAB_14a8286e3;
    }
  }
  bVar4 = false;
  FVar14 = FStack_a0;
LAB_14a8286e3:
  FStack_b8.TextData.Reference = (ITextData *)0x0;
  FStack_b8.Flags = 0;
  if (this->bShowAsCountdown == false) {
    pFVar11 = (FText *)(**(code **)(this->_padding_ + 0x390))(this,aplStack_48);
    if (pFVar11 != &FStack_b8) {
      if ((pFVar11->TextData).Reference == (ITextData *)0x0) {
        if (FStack_b8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*FStack_b8.TextData.Reference + 0x10))
                    (FStack_b8.TextData.Reference);
          FStack_b8.TextData.Reference = (ITextData *)0x0;
          FStack_b8.Flags = 0;
        }
      }
      else {
        if (FStack_b8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*FStack_b8.TextData.Reference + 0x10))();
        }
        FText::FText(&FStack_b8,pFVar11);
        if ((FStack_b8.TextData.Reference == (ITextData *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x171,
                               L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                              ), bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    if (aplStack_48[0] != (longlong *)0x0) {
      (**(code **)(*aplStack_48[0] + 0x10))();
    }
  }
  else {
    plVar10 = (longlong *)(**(code **)(this->_padding_ + 0x378))(this,auStack_60);
    lStackX_20 = (this->DateTime).Ticks - *plVar10;
    if ((((this->TimerTickHandle).Handle != 0) &&
        (cVar6 = (**(code **)(this->_padding_ + 0x380))(this,&lStackX_20), cVar6 != '\0')) &&
       (this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this), this_00 != (UWorld *)0x0))
    {
      this_01 = UWorld::GetTimerManager(this_00);
      FTimerManager::ClearTimer(this_01,&this->TimerTickHandle);
    }
    if (__real_3ff0000000000000 <= (double)lStackX_20 * __real_3e7ad7f29abcaf48) {
      pFVar11 = (FText *)(**(code **)(this->_padding_ + 0x388))(this,aplStack_58,&lStackX_20);
      if (pFVar11 != &FStack_b8) {
        if ((pFVar11->TextData).Reference == (ITextData *)0x0) {
          if (FStack_b8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*FStack_b8.TextData.Reference + 0x10))
                      (FStack_b8.TextData.Reference);
            FStack_b8.TextData.Reference = (ITextData *)0x0;
            FStack_b8.Flags = 0;
          }
        }
        else {
          if (FStack_b8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*FStack_b8.TextData.Reference + 0x10))();
          }
          FText::FText(&FStack_b8,pFVar11);
          if ((FStack_b8.TextData.Reference == (ITextData *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x171,
                                 L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                ), bVar7)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
      }
      if (aplStack_58[0] != (longlong *)0x0) {
        (**(code **)(*aplStack_58[0] + 0x10))();
      }
    }
    else {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &this->OnTimeCountDownCompletionEvent);
      if ((this->bUseCountdownCompletionText != false) &&
         (&this->CountdownCompletionText != &FStack_b8)) {
        if (FStack_b8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*FStack_b8.TextData.Reference + 0x10))();
        }
        FStack_b8.TextData.Reference = (this->CountdownCompletionText).TextData.Reference;
        if (FStack_b8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*FStack_b8.TextData.Reference + 8))
                    (FStack_b8.TextData.Reference,&uStackX_10);
        }
        FStack_b8.Flags = (this->CountdownCompletionText).Flags;
        if ((FStack_b8.TextData.Reference == (ITextData *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x171,
                               L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                              ), bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    this->LastDaysCount = (int)(lStackX_20 / 864000000000);
    this->LastHoursCount =
         (int)(lStackX_20 / 36000000000) + (int)((lStackX_20 / 36000000000) / 0x18) * -0x18;
  }
  if (FStack_b8.TextData.Reference != (ITextData *)0x0) {
    pcVar2 = *(code **)(this->_padding_ + 0x358);
    pIStack_78 = FStack_b8.TextData.Reference;
    (**(code **)((longlong)*FStack_b8.TextData.Reference + 8))
              (FStack_b8.TextData.Reference,auStackX_18);
    uStack_70 = FStack_b8.Flags;
    (*pcVar2)(this,&pIStack_78);
    if (FStack_b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*FStack_b8.TextData.Reference + 0x10))(FStack_b8.TextData.Reference);
    }
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_02 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_02 == (FThreadStats *)0x0) {
      this_03 = FThreadStatsPool::Get();
      this_02 = FThreadStatsPool::GetFromPool(this_03);
    }
    if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
      FStack_88.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      FStack_88.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&LStack_90);
      FStack_88.StatData.Pad[4] = '\0';
      FStack_88.StatData.Pad[5] = '\0';
      FStack_88.StatData.Pad[6] = '\0';
      FStack_88.StatData.Pad[7] = '\0';
      FStack_88.StatData.Pad[0] = LStack_90.s.LowPart._0_1_;
      FStack_88.StatData.Pad[1] = LStack_90.s.LowPart._1_1_;
      FStack_88.StatData.Pad[2] = LStack_90.s.LowPart._2_1_;
      FStack_88.StatData.Pad[3] = LStack_90.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_02,&FStack_88);
      piVar1 = &this_02->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_02,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
  }
  return;
}

// UpdateUnderlyingText @ 14a8285b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCommonDateTimeTextBlock::UpdateUnderlyingText(UCommonDateTimeTextBlock *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_CommonDateTimeTextBlock_UpdateUnderlyingText> FVar9;
  longlong *plVar10;
  UWorld *this_00;
  FTimerManager *this_01;
  FText *pFVar11;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  uint uVar12;
  FNameEntryId FVar13;
  FName FVar14;
  FColor_u_0 local_res8 [2];
  uint local_res10;
  uint uStackX_14;
  undefined1 local_res18 [8];
  longlong local_res20;
  FText local_b8;
  FName local_a8;
  FName local_a0;
  LARGE_INTEGER local_90;
  FStatMessage local_88;
  ITextData *local_78;
  uint local_70;
  FName local_68;
  undefined1 local_60 [8];
  longlong *local_58 [2];
  longlong *local_48 [3];
  
  FVar9 = StatPtr_STAT_CommonDateTimeTextBlock_UpdateUnderlyingText;
  if (StatPtr_STAT_CommonDateTimeTextBlock_UpdateUnderlyingText ==
      (FThreadSafeStaticStat<FStat_STAT_CommonDateTimeTextBlock_UpdateUnderlyingText>)0x0) {
    pFVar8 = ::FName::FName(&local_68,"STAT_CommonDateTimeTextBlock_UpdateUnderlyingText");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_CommonDateTimeTextBlock_UpdateUnderlyingText>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_STAT_CommonDateTimeTextBlock_UpdateUnderlyingText,*pFVar8,
                       L"CommonDateTimeTextBlock UpdateUnderlyingText","STATGROUP_UI",
                       "STATCAT_Advanced",L"UI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar9;
  bVar3 = false;
  bVar5 = false;
  local_a0.ComparisonIndex.Value = 0;
  local_a0.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a8.ComparisonIndex.Value = FVar13.Value;
        local_a8.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a8,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonDateTimeTextBlock.cpp"
                   ,0x52);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10 = FVar13.Value;
      uStackX_14 = uVar12;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar4 = true;
      goto LAB_14a8286e3;
    }
  }
  bVar4 = false;
  FVar14 = local_a0;
LAB_14a8286e3:
  local_b8.TextData.Reference = (ITextData *)0x0;
  local_b8.Flags = 0;
  if (this->bShowAsCountdown == false) {
    pFVar11 = (FText *)(**(code **)(this->_padding_ + 0x390))(this,local_48);
    if (pFVar11 != &local_b8) {
      if ((pFVar11->TextData).Reference == (ITextData *)0x0) {
        if (local_b8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))(local_b8.TextData.Reference);
          local_b8.TextData.Reference = (ITextData *)0x0;
          local_b8.Flags = 0;
        }
      }
      else {
        if (local_b8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
        }
        FText::FText(&local_b8,pFVar11);
        if ((local_b8.TextData.Reference == (ITextData *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x171,
                               L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                              ), bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    if (local_48[0] != (longlong *)0x0) {
      (**(code **)(*local_48[0] + 0x10))();
    }
  }
  else {
    plVar10 = (longlong *)(**(code **)(this->_padding_ + 0x378))(this,local_60);
    local_res20 = (this->DateTime).Ticks - *plVar10;
    if ((((this->TimerTickHandle).Handle != 0) &&
        (cVar6 = (**(code **)(this->_padding_ + 0x380))(this,&local_res20), cVar6 != '\0')) &&
       (this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this), this_00 != (UWorld *)0x0))
    {
      this_01 = UWorld::GetTimerManager(this_00);
      FTimerManager::ClearTimer(this_01,&this->TimerTickHandle);
    }
    if (__real_3ff0000000000000 <= (double)local_res20 * __real_3e7ad7f29abcaf48) {
      pFVar11 = (FText *)(**(code **)(this->_padding_ + 0x388))(this,local_58,&local_res20);
      if (pFVar11 != &local_b8) {
        if ((pFVar11->TextData).Reference == (ITextData *)0x0) {
          if (local_b8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))
                      (local_b8.TextData.Reference);
            local_b8.TextData.Reference = (ITextData *)0x0;
            local_b8.Flags = 0;
          }
        }
        else {
          if (local_b8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
          }
          FText::FText(&local_b8,pFVar11);
          if ((local_b8.TextData.Reference == (ITextData *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x171,
                                 L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                ), bVar7)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
      }
      if (local_58[0] != (longlong *)0x0) {
        (**(code **)(*local_58[0] + 0x10))();
      }
    }
    else {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &this->OnTimeCountDownCompletionEvent);
      if ((this->bUseCountdownCompletionText != false) &&
         (&this->CountdownCompletionText != &local_b8)) {
        if (local_b8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
        }
        local_b8.TextData.Reference = (this->CountdownCompletionText).TextData.Reference;
        if (local_b8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_b8.TextData.Reference + 8))
                    (local_b8.TextData.Reference,&local_res10);
        }
        local_b8.Flags = (this->CountdownCompletionText).Flags;
        if ((local_b8.TextData.Reference == (ITextData *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x171,
                               L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                              ), bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    this->LastDaysCount = (int)(local_res20 / 864000000000);
    this->LastHoursCount =
         (int)(local_res20 / 36000000000) + (int)((local_res20 / 36000000000) / 0x18) * -0x18;
  }
  if (local_b8.TextData.Reference != (ITextData *)0x0) {
    pcVar2 = *(code **)(this->_padding_ + 0x358);
    local_78 = local_b8.TextData.Reference;
    (**(code **)((longlong)*local_b8.TextData.Reference + 8))
              (local_b8.TextData.Reference,local_res18);
    local_70 = local_b8.Flags;
    (*pcVar2)(this,&local_78);
    if (local_b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))(local_b8.TextData.Reference);
    }
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_02 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_02 == (FThreadStats *)0x0) {
      this_03 = FThreadStatsPool::Get();
      this_02 = FThreadStatsPool::GetFromPool(this_03);
    }
    if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
      local_88.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_88.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_90);
      local_88.StatData.Pad[4] = '\0';
      local_88.StatData.Pad[5] = '\0';
      local_88.StatData.Pad[6] = '\0';
      local_88.StatData.Pad[7] = '\0';
      local_88.StatData.Pad[0] = local_90.s.LowPart._0_1_;
      local_88.StatData.Pad[1] = local_90.s.LowPart._1_1_;
      local_88.StatData.Pad[2] = local_90.s.LowPart._2_1_;
      local_88.StatData.Pad[3] = local_90.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_02,&local_88);
      piVar1 = &this_02->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_02,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
  }
  return;
}

// execGetDateTime @ 14a82db40

void __cdecl
UCommonDateTimeTextBlock::execGetDateTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 0x19);
  return;
}

// execSetCountDownCompletionText @ 14a832ad0

void __cdecl
UCommonDateTimeTextBlock::execSetCountDownCompletionText
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ITextData *pIVar2;
  TRefCountPtr<ITextData> TVar3;
  undefined1 local_res8 [8];
  FText local_18;
  
  FText::FText(&local_18);
  FTextProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  TVar3.Reference = local_18.TextData.Reference;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 8))
              (local_18.TextData.Reference,local_res8);
  }
  param_1[0x19].field_0x14 = 1;
  pIVar2 = *(ITextData **)&param_1[0x19].field_0x18;
  if (pIVar2 != TVar3.Reference) {
    *(ITextData **)&param_1[0x19].field_0x18 = TVar3.Reference;
    if (TVar3.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  *(uint *)&param_1[0x19].field_0x20 = local_18.Flags;
  UpdateUnderlyingText((UCommonDateTimeTextBlock *)param_1);
  if (TVar3.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar3.Reference + 0x10))(TVar3.Reference);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execSetDateTimeValue @ 14a832c80

void __cdecl
UCommonDateTimeTextBlock::execSetDateTimeValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [4];
  float local_res20 [2];
  FDateTime local_28 [2];
  
  local_28[0].Ticks = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetDateTimeValue((UCommonDateTimeTextBlock *)param_1,local_28[0],bVar2,local_res20[0]);
  return;
}

// execSetTimespanValue @ 14a836220

void __cdecl
UCommonDateTimeTextBlock::execSetTimespanValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong local_res8;
  undefined1 local_res10 [8];
  
  local_res8 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  lVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar3 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x378))(param_1,local_res10);
  SetDateTimeValue((UCommonDateTimeTextBlock *)param_1,(FDateTime)(*plVar3 + lVar2),true,
                   __real_3f800000);
  return;
}

