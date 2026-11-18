// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 143

// Format<FText> @ 14150ca90

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::Format<FText>(FText *__return_storage_ptr__,FTextFormat *param_1,FText *param_2)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_48;
  FTextFormat local_38;
  FFormatArgumentValue local_28;
  
  local_28.Type = Text;
  FText((FText *)&local_28.TextValue,param_2);
  if (local_28.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_48.AllocatorInstance,1,&local_48.ArrayMax);
  ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
            (local_48.AllocatorInstance.Data,&local_28,1);
  local_38.TextFormatData.Object = (param_1->TextFormatData).Object;
  local_38.TextFormatData.SharedReferenceCount.ReferenceController =
       (param_1->TextFormatData).SharedReferenceCount.ReferenceController;
  if (local_38.TextFormatData.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.TextFormatData.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  Format(__return_storage_ptr__,&local_38,&local_48);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if ((FFormatArgumentValue *)local_48.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (local_28.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_28.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->TextFormatData).SharedReferenceCount.ReferenceController);
  pIVar1 = (param_2->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return __return_storage_ptr__;
}

// Format<FText,FText> @ 14150cbe0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::Format<FText,FText>
          (FText *__return_storage_ptr__,FTextFormat *param_1,FText *param_2,FText *param_3)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_68;
  FTextFormat local_58;
  FFormatArgumentValue local_48;
  undefined4 local_28;
  FText local_18;
  
  local_48.Type = Text;
  FText((FText *)&local_48.TextValue,param_2);
  if (local_48.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  local_28 = 4;
  FText(&local_18,param_3);
  if (local_18.TextData.Reference == (ITextData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,0,&local_68.AllocatorInstance,2,&local_68.ArrayMax);
  ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
            (local_68.AllocatorInstance.Data,&local_48,2);
  local_58.TextFormatData.Object = (param_1->TextFormatData).Object;
  local_58.TextFormatData.SharedReferenceCount.ReferenceController =
       (param_1->TextFormatData).SharedReferenceCount.ReferenceController;
  if (local_58.TextFormatData.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.TextFormatData.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  Format(__return_storage_ptr__,&local_58,&local_68);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
  if ((FFormatArgumentValue *)local_68.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  if (local_48.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_48.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->TextFormatData).SharedReferenceCount.ReferenceController);
  pIVar1 = (param_2->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (param_3->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return __return_storage_ptr__;
}

// Join<FText,FText> @ 141515030

FText * __cdecl
FText::Join<FText,FText>(FText *__return_storage_ptr__,FText *param_1,FText *param_2,FText *param_3)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_58;
  FFormatArgumentValue local_48;
  undefined4 local_28;
  FText local_18;
  
  local_48.Type = Text;
  FText((FText *)&local_48.TextValue,param_2);
  if (local_48.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  local_28 = 4;
  FText(&local_18,param_3);
  if (local_18.TextData.Reference == (ITextData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,0,&local_58.AllocatorInstance,2,&local_58.ArrayMax);
  ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
            (local_58.AllocatorInstance.Data,&local_48,2);
  Join(__return_storage_ptr__,param_1,&local_58);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
  if ((FFormatArgumentValue *)local_58.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  if (local_48.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_48.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  pIVar1 = (param_2->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (param_3->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return __return_storage_ptr__;
}

// FText @ 141585a60

FText * __thiscall FText::FText(FText *this,FText *param_1)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  (this->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (param_1->TextData).Reference;
  (this->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  this->Flags = param_1->Flags;
  return this;
}

// AsCurrencyTemplate<signed_char,signed_char> @ 141724b70

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FText::AsCurrencyTemplate<signed_char,signed_char>
          (FText *__return_storage_ptr__,schar param_1,FString *param_2,
          FNumberFormattingOptions *param_3,TSharedPtr<FCulture,1> *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FInternationalization *pFVar4;
  FText *pFVar5;
  FDecimalNumberFormattingRules *pFVar6;
  FTextHistory_AsCurrency *pFVar7;
  FString *pFVar8;
  FNumberFormattingOptions *pFVar9;
  FFormatArgumentValue_u_8 FVar10;
  FTextHistory_AsCurrency *pFVar11;
  FCulture *this;
  FFormatArgumentValue_u_8 FVar12;
  FString local_98;
  TSharedPtr<FCulture,1> local_88;
  FString local_78;
  FNumberFormattingOptions local_68;
  FFormatArgumentValue local_48;
  
  FVar12 = (FFormatArgumentValue_u_8)(longlong)param_1;
  pFVar4 = FInternationalization::Get();
  if (pFVar4->bIsInitialized != true) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("I18N.IsInitialized() == true",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\Text.cpp"
                       ,0x281,
                       L"FInternationalization is not initialized. An FText formatting method was likely used in static object initialization - this is not supported."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar2)();
      return pFVar5;
    }
  }
  this = param_4->Object;
  if (this == (FCulture *)0x0) {
    if ((pFVar4->CurrentLocale).Object == (FCulture *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FText *)(*pcVar2)();
        return pFVar5;
      }
    }
    this = (pFVar4->CurrentLocale).Object;
    pTVar1 = (pFVar4->CurrentLocale).SharedReferenceCount.ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this == (FCulture *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FText *)(*pcVar2)();
        return pFVar5;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  pFVar6 = FCulture::GetCurrencyFormattingRules(this,param_2);
  pFVar9 = param_3;
  if (param_3 == (FNumberFormattingOptions *)0x0) {
    pFVar9 = &pFVar6->CultureDefaultFormattingOptions;
  }
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  local_68.AlwaysSign = pFVar9->AlwaysSign;
  local_68.UseGrouping = pFVar9->UseGrouping;
  local_68.IndicateNearlyInteger = pFVar9->IndicateNearlyInteger;
  local_68._3_1_ = pFVar9->field_0x3;
  local_68.RoundingMode = pFVar9->RoundingMode;
  local_68.MinimumIntegralDigits = pFVar9->MinimumIntegralDigits;
  local_68.MaximumIntegralDigits = pFVar9->MaximumIntegralDigits;
  local_68.MinimumFractionalDigits = pFVar9->MinimumFractionalDigits;
  local_68.MaximumFractionalDigits = pFVar9->MaximumFractionalDigits;
  FVar10.IntValue = -FVar12.IntValue;
  if (-1 < param_1) {
    FVar10 = FVar12;
  }
  FastDecimalFormat::Internal::IntegralToString
            ((bool)((byte)param_1 >> 7),FVar10.UIntValue,pFVar6,&local_68,&local_98);
  pFVar7 = ::operator_new(0x88);
  pFVar11 = (FTextHistory_AsCurrency *)0x0;
  if (pFVar7 != (FTextHistory_AsCurrency *)0x0) {
    local_88.Object = param_4->Object;
    local_88.SharedReferenceCount.ReferenceController =
         (param_4->SharedReferenceCount).ReferenceController;
    if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar8 = ::FString::FString(&local_78,param_2);
    local_48.Type = Int;
    local_48.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(ITextData *)0x0;
    local_48.TextValue.field0_0x0.TypedValue.Flags = 0;
    local_48.field1_0x8 = FVar12;
    pFVar7 = FTextHistory_AsCurrency::FTextHistory_AsCurrency
                       (pFVar7,&local_98,&local_48,pFVar8,param_3,&local_88);
    if (pFVar7 != (FTextHistory_AsCurrency *)0x0) {
      LOCK();
      *(int *)&pFVar7->_padding_ = (int)pFVar7->_padding_ + 1;
      UNLOCK();
      pFVar11 = pFVar7;
    }
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)pFVar11;
  __return_storage_ptr__->Flags = 1;
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// AsCurrencyTemplate<unsigned_char,unsigned_char> @ 141724d90

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FText::AsCurrencyTemplate<unsigned_char,unsigned_char>
          (FText *__return_storage_ptr__,uchar param_1,FString *param_2,
          FNumberFormattingOptions *param_3,TSharedPtr<FCulture,1> *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FInternationalization *pFVar4;
  FText *pFVar5;
  FDecimalNumberFormattingRules *pFVar6;
  FTextHistory_AsCurrency *pFVar7;
  FString *pFVar8;
  FNumberFormattingOptions *pFVar9;
  FTextHistory_AsCurrency *pFVar10;
  FCulture *this;
  FFormatArgumentValue_u_8 FVar11;
  FString local_98;
  TSharedPtr<FCulture,1> local_88;
  FString local_78;
  FNumberFormattingOptions local_68;
  FFormatArgumentValue local_48;
  
  FVar11.IntValue._1_7_ = 0;
  FVar11.UIntValue._0_1_ = param_1;
  pFVar4 = FInternationalization::Get();
  if (pFVar4->bIsInitialized != true) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("I18N.IsInitialized() == true",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\Text.cpp"
                       ,0x281,
                       L"FInternationalization is not initialized. An FText formatting method was likely used in static object initialization - this is not supported."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar2)();
      return pFVar5;
    }
  }
  this = param_4->Object;
  if (this == (FCulture *)0x0) {
    if ((pFVar4->CurrentLocale).Object == (FCulture *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FText *)(*pcVar2)();
        return pFVar5;
      }
    }
    this = (pFVar4->CurrentLocale).Object;
    pTVar1 = (pFVar4->CurrentLocale).SharedReferenceCount.ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this == (FCulture *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FText *)(*pcVar2)();
        return pFVar5;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  pFVar6 = FCulture::GetCurrencyFormattingRules(this,param_2);
  pFVar9 = param_3;
  if (param_3 == (FNumberFormattingOptions *)0x0) {
    pFVar9 = &pFVar6->CultureDefaultFormattingOptions;
  }
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  local_68.AlwaysSign = pFVar9->AlwaysSign;
  local_68.UseGrouping = pFVar9->UseGrouping;
  local_68.IndicateNearlyInteger = pFVar9->IndicateNearlyInteger;
  local_68._3_1_ = pFVar9->field_0x3;
  local_68.RoundingMode = pFVar9->RoundingMode;
  local_68.MinimumIntegralDigits = pFVar9->MinimumIntegralDigits;
  local_68.MaximumIntegralDigits = pFVar9->MaximumIntegralDigits;
  local_68.MinimumFractionalDigits = pFVar9->MinimumFractionalDigits;
  local_68.MaximumFractionalDigits = pFVar9->MaximumFractionalDigits;
  FastDecimalFormat::Internal::IntegralToString(false,FVar11.UIntValue,pFVar6,&local_68,&local_98);
  pFVar7 = ::operator_new(0x88);
  pFVar10 = (FTextHistory_AsCurrency *)0x0;
  if (pFVar7 != (FTextHistory_AsCurrency *)0x0) {
    local_88.Object = param_4->Object;
    local_88.SharedReferenceCount.ReferenceController =
         (param_4->SharedReferenceCount).ReferenceController;
    if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar8 = ::FString::FString(&local_78,param_2);
    local_48.Type = Int;
    local_48.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(ITextData *)0x0;
    local_48.TextValue.field0_0x0.TypedValue.Flags = 0;
    local_48.field1_0x8 = FVar11;
    pFVar7 = FTextHistory_AsCurrency::FTextHistory_AsCurrency
                       (pFVar7,&local_98,&local_48,pFVar8,param_3,&local_88);
    if (pFVar7 != (FTextHistory_AsCurrency *)0x0) {
      LOCK();
      *(int *)&pFVar7->_padding_ = (int)pFVar7->_padding_ + 1;
      UNLOCK();
      pFVar10 = pFVar7;
    }
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)pFVar10;
  __return_storage_ptr__->Flags = 1;
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// AsCurrencyTemplate<short,short> @ 141724fa0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FText::AsCurrencyTemplate<short,short>
          (FText *__return_storage_ptr__,short param_1,FString *param_2,
          FNumberFormattingOptions *param_3,TSharedPtr<FCulture,1> *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FInternationalization *pFVar4;
  FText *pFVar5;
  FDecimalNumberFormattingRules *pFVar6;
  FTextHistory_AsCurrency *pFVar7;
  FString *pFVar8;
  FNumberFormattingOptions *pFVar9;
  FFormatArgumentValue_u_8 FVar10;
  FTextHistory_AsCurrency *pFVar11;
  FCulture *this;
  FFormatArgumentValue_u_8 FVar12;
  FString local_98;
  TSharedPtr<FCulture,1> local_88;
  FString local_78;
  FNumberFormattingOptions local_68;
  FFormatArgumentValue local_48;
  
  FVar12 = (FFormatArgumentValue_u_8)(longlong)param_1;
  pFVar4 = FInternationalization::Get();
  if (pFVar4->bIsInitialized != true) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("I18N.IsInitialized() == true",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\Text.cpp"
                       ,0x281,
                       L"FInternationalization is not initialized. An FText formatting method was likely used in static object initialization - this is not supported."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar2)();
      return pFVar5;
    }
  }
  this = param_4->Object;
  if (this == (FCulture *)0x0) {
    if ((pFVar4->CurrentLocale).Object == (FCulture *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FText *)(*pcVar2)();
        return pFVar5;
      }
    }
    this = (pFVar4->CurrentLocale).Object;
    pTVar1 = (pFVar4->CurrentLocale).SharedReferenceCount.ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this == (FCulture *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FText *)(*pcVar2)();
        return pFVar5;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  pFVar6 = FCulture::GetCurrencyFormattingRules(this,param_2);
  pFVar9 = param_3;
  if (param_3 == (FNumberFormattingOptions *)0x0) {
    pFVar9 = &pFVar6->CultureDefaultFormattingOptions;
  }
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  local_68.AlwaysSign = pFVar9->AlwaysSign;
  local_68.UseGrouping = pFVar9->UseGrouping;
  local_68.IndicateNearlyInteger = pFVar9->IndicateNearlyInteger;
  local_68._3_1_ = pFVar9->field_0x3;
  local_68.RoundingMode = pFVar9->RoundingMode;
  local_68.MinimumIntegralDigits = pFVar9->MinimumIntegralDigits;
  local_68.MaximumIntegralDigits = pFVar9->MaximumIntegralDigits;
  local_68.MinimumFractionalDigits = pFVar9->MinimumFractionalDigits;
  local_68.MaximumFractionalDigits = pFVar9->MaximumFractionalDigits;
  bVar3 = (bool)-(char)(param_1 >> 0xf);
  FVar10.IntValue = -FVar12.IntValue;
  if (bVar3 == false) {
    FVar10 = FVar12;
  }
  FastDecimalFormat::Internal::IntegralToString(bVar3,FVar10.UIntValue,pFVar6,&local_68,&local_98);
  pFVar7 = ::operator_new(0x88);
  pFVar11 = (FTextHistory_AsCurrency *)0x0;
  if (pFVar7 != (FTextHistory_AsCurrency *)0x0) {
    local_88.Object = param_4->Object;
    local_88.SharedReferenceCount.ReferenceController =
         (param_4->SharedReferenceCount).ReferenceController;
    if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar8 = ::FString::FString(&local_78,param_2);
    local_48.Type = Int;
    local_48.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(ITextData *)0x0;
    local_48.TextValue.field0_0x0.TypedValue.Flags = 0;
    local_48.field1_0x8 = FVar12;
    pFVar7 = FTextHistory_AsCurrency::FTextHistory_AsCurrency
                       (pFVar7,&local_98,&local_48,pFVar8,param_3,&local_88);
    if (pFVar7 != (FTextHistory_AsCurrency *)0x0) {
      LOCK();
      *(int *)&pFVar7->_padding_ = (int)pFVar7->_padding_ + 1;
      UNLOCK();
      pFVar11 = pFVar7;
    }
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)pFVar11;
  __return_storage_ptr__->Flags = 1;
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// AsCurrencyTemplate<unsigned_short,unsigned_short> @ 1417251c0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FText::AsCurrencyTemplate<unsigned_short,unsigned_short>
          (FText *__return_storage_ptr__,ushort param_1,FString *param_2,
          FNumberFormattingOptions *param_3,TSharedPtr<FCulture,1> *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FInternationalization *pFVar4;
  FText *pFVar5;
  FDecimalNumberFormattingRules *pFVar6;
  FTextHistory_AsCurrency *pFVar7;
  FString *pFVar8;
  FNumberFormattingOptions *pFVar9;
  FTextHistory_AsCurrency *pFVar10;
  FCulture *this;
  FFormatArgumentValue_u_8 FVar11;
  FString local_98;
  TSharedPtr<FCulture,1> local_88;
  FString local_78;
  FNumberFormattingOptions local_68;
  FFormatArgumentValue local_48;
  
  FVar11.IntValue._2_6_ = 0;
  FVar11.UIntValue._0_2_ = param_1;
  pFVar4 = FInternationalization::Get();
  if (pFVar4->bIsInitialized != true) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("I18N.IsInitialized() == true",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\Text.cpp"
                       ,0x281,
                       L"FInternationalization is not initialized. An FText formatting method was likely used in static object initialization - this is not supported."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar2)();
      return pFVar5;
    }
  }
  this = param_4->Object;
  if (this == (FCulture *)0x0) {
    if ((pFVar4->CurrentLocale).Object == (FCulture *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FText *)(*pcVar2)();
        return pFVar5;
      }
    }
    this = (pFVar4->CurrentLocale).Object;
    pTVar1 = (pFVar4->CurrentLocale).SharedReferenceCount.ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this == (FCulture *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FText *)(*pcVar2)();
        return pFVar5;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  pFVar6 = FCulture::GetCurrencyFormattingRules(this,param_2);
  pFVar9 = param_3;
  if (param_3 == (FNumberFormattingOptions *)0x0) {
    pFVar9 = &pFVar6->CultureDefaultFormattingOptions;
  }
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  local_68.AlwaysSign = pFVar9->AlwaysSign;
  local_68.UseGrouping = pFVar9->UseGrouping;
  local_68.IndicateNearlyInteger = pFVar9->IndicateNearlyInteger;
  local_68._3_1_ = pFVar9->field_0x3;
  local_68.RoundingMode = pFVar9->RoundingMode;
  local_68.MinimumIntegralDigits = pFVar9->MinimumIntegralDigits;
  local_68.MaximumIntegralDigits = pFVar9->MaximumIntegralDigits;
  local_68.MinimumFractionalDigits = pFVar9->MinimumFractionalDigits;
  local_68.MaximumFractionalDigits = pFVar9->MaximumFractionalDigits;
  FastDecimalFormat::Internal::IntegralToString(false,FVar11.UIntValue,pFVar6,&local_68,&local_98);
  pFVar7 = ::operator_new(0x88);
  pFVar10 = (FTextHistory_AsCurrency *)0x0;
  if (pFVar7 != (FTextHistory_AsCurrency *)0x0) {
    local_88.Object = param_4->Object;
    local_88.SharedReferenceCount.ReferenceController =
         (param_4->SharedReferenceCount).ReferenceController;
    if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar8 = ::FString::FString(&local_78,param_2);
    local_48.Type = Int;
    local_48.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(ITextData *)0x0;
    local_48.TextValue.field0_0x0.TypedValue.Flags = 0;
    local_48.field1_0x8 = FVar11;
    pFVar7 = FTextHistory_AsCurrency::FTextHistory_AsCurrency
                       (pFVar7,&local_98,&local_48,pFVar8,param_3,&local_88);
    if (pFVar7 != (FTextHistory_AsCurrency *)0x0) {
      LOCK();
      *(int *)&pFVar7->_padding_ = (int)pFVar7->_padding_ + 1;
      UNLOCK();
      pFVar10 = pFVar7;
    }
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)pFVar10;
  __return_storage_ptr__->Flags = 1;
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// AsCurrencyTemplate<int,int> @ 1417253d0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FText::AsCurrencyTemplate<int,int>
          (FText *__return_storage_ptr__,int param_1,FString *param_2,
          FNumberFormattingOptions *param_3,TSharedPtr<FCulture,1> *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FInternationalization *pFVar4;
  FText *pFVar5;
  FDecimalNumberFormattingRules *pFVar6;
  FTextHistory_AsCurrency *pFVar7;
  FString *pFVar8;
  FNumberFormattingOptions *pFVar9;
  FFormatArgumentValue_u_8 FVar10;
  FTextHistory_AsCurrency *pFVar11;
  FCulture *this;
  FFormatArgumentValue_u_8 FVar12;
  FString local_98;
  TSharedPtr<FCulture,1> local_88;
  FString local_78;
  FNumberFormattingOptions local_68;
  FFormatArgumentValue local_48;
  
  FVar12 = (FFormatArgumentValue_u_8)(longlong)param_1;
  pFVar4 = FInternationalization::Get();
  if (pFVar4->bIsInitialized != true) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("I18N.IsInitialized() == true",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\Text.cpp"
                       ,0x281,
                       L"FInternationalization is not initialized. An FText formatting method was likely used in static object initialization - this is not supported."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar2)();
      return pFVar5;
    }
  }
  this = param_4->Object;
  if (this == (FCulture *)0x0) {
    if ((pFVar4->CurrentLocale).Object == (FCulture *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FText *)(*pcVar2)();
        return pFVar5;
      }
    }
    this = (pFVar4->CurrentLocale).Object;
    pTVar1 = (pFVar4->CurrentLocale).SharedReferenceCount.ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this == (FCulture *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FText *)(*pcVar2)();
        return pFVar5;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  pFVar6 = FCulture::GetCurrencyFormattingRules(this,param_2);
  pFVar9 = param_3;
  if (param_3 == (FNumberFormattingOptions *)0x0) {
    pFVar9 = &pFVar6->CultureDefaultFormattingOptions;
  }
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  local_68.AlwaysSign = pFVar9->AlwaysSign;
  local_68.UseGrouping = pFVar9->UseGrouping;
  local_68.IndicateNearlyInteger = pFVar9->IndicateNearlyInteger;
  local_68._3_1_ = pFVar9->field_0x3;
  local_68.RoundingMode = pFVar9->RoundingMode;
  local_68.MinimumIntegralDigits = pFVar9->MinimumIntegralDigits;
  local_68.MaximumIntegralDigits = pFVar9->MaximumIntegralDigits;
  local_68.MinimumFractionalDigits = pFVar9->MinimumFractionalDigits;
  local_68.MaximumFractionalDigits = pFVar9->MaximumFractionalDigits;
  bVar3 = (bool)-(char)(param_1 >> 0x1f);
  FVar10.IntValue = -FVar12.IntValue;
  if (bVar3 == false) {
    FVar10 = FVar12;
  }
  FastDecimalFormat::Internal::IntegralToString(bVar3,FVar10.UIntValue,pFVar6,&local_68,&local_98);
  pFVar7 = ::operator_new(0x88);
  pFVar11 = (FTextHistory_AsCurrency *)0x0;
  if (pFVar7 != (FTextHistory_AsCurrency *)0x0) {
    local_88.Object = param_4->Object;
    local_88.SharedReferenceCount.ReferenceController =
         (param_4->SharedReferenceCount).ReferenceController;
    if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar8 = ::FString::FString(&local_78,param_2);
    local_48.Type = Int;
    local_48.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(ITextData *)0x0;
    local_48.TextValue.field0_0x0.TypedValue.Flags = 0;
    local_48.field1_0x8 = FVar12;
    pFVar7 = FTextHistory_AsCurrency::FTextHistory_AsCurrency
                       (pFVar7,&local_98,&local_48,pFVar8,param_3,&local_88);
    if (pFVar7 != (FTextHistory_AsCurrency *)0x0) {
      LOCK();
      *(int *)&pFVar7->_padding_ = (int)pFVar7->_padding_ + 1;
      UNLOCK();
      pFVar11 = pFVar7;
    }
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)pFVar11;
  __return_storage_ptr__->Flags = 1;
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// AsCurrencyTemplate<unsigned_int,__int64> @ 1417255f0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FText::AsCurrencyTemplate<unsigned_int,__int64>
          (FText *__return_storage_ptr__,uint param_1,FString *param_2,
          FNumberFormattingOptions *param_3,TSharedPtr<FCulture,1> *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FInternationalization *pFVar4;
  FText *pFVar5;
  FDecimalNumberFormattingRules *pFVar6;
  FTextHistory_AsCurrency *pFVar7;
  FString *pFVar8;
  FNumberFormattingOptions *pFVar9;
  FTextHistory_AsCurrency *pFVar10;
  FCulture *this;
  FFormatArgumentValue_u_8 FVar11;
  FString local_98;
  TSharedPtr<FCulture,1> local_88;
  FString local_78;
  FNumberFormattingOptions local_68;
  FFormatArgumentValue local_48;
  
  FVar11.IntValue._4_4_ = 0;
  FVar11.FloatValue = (float)param_1;
  pFVar4 = FInternationalization::Get();
  if (pFVar4->bIsInitialized != true) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("I18N.IsInitialized() == true",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\Text.cpp"
                       ,0x281,
                       L"FInternationalization is not initialized. An FText formatting method was likely used in static object initialization - this is not supported."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar2)();
      return pFVar5;
    }
  }
  this = param_4->Object;
  if (this == (FCulture *)0x0) {
    if ((pFVar4->CurrentLocale).Object == (FCulture *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FText *)(*pcVar2)();
        return pFVar5;
      }
    }
    this = (pFVar4->CurrentLocale).Object;
    pTVar1 = (pFVar4->CurrentLocale).SharedReferenceCount.ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this == (FCulture *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FText *)(*pcVar2)();
        return pFVar5;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  pFVar6 = FCulture::GetCurrencyFormattingRules(this,param_2);
  pFVar9 = param_3;
  if (param_3 == (FNumberFormattingOptions *)0x0) {
    pFVar9 = &pFVar6->CultureDefaultFormattingOptions;
  }
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  local_68.AlwaysSign = pFVar9->AlwaysSign;
  local_68.UseGrouping = pFVar9->UseGrouping;
  local_68.IndicateNearlyInteger = pFVar9->IndicateNearlyInteger;
  local_68._3_1_ = pFVar9->field_0x3;
  local_68.RoundingMode = pFVar9->RoundingMode;
  local_68.MinimumIntegralDigits = pFVar9->MinimumIntegralDigits;
  local_68.MaximumIntegralDigits = pFVar9->MaximumIntegralDigits;
  local_68.MinimumFractionalDigits = pFVar9->MinimumFractionalDigits;
  local_68.MaximumFractionalDigits = pFVar9->MaximumFractionalDigits;
  FastDecimalFormat::Internal::IntegralToString(false,FVar11.UIntValue,pFVar6,&local_68,&local_98);
  pFVar7 = ::operator_new(0x88);
  pFVar10 = (FTextHistory_AsCurrency *)0x0;
  if (pFVar7 != (FTextHistory_AsCurrency *)0x0) {
    local_88.Object = param_4->Object;
    local_88.SharedReferenceCount.ReferenceController =
         (param_4->SharedReferenceCount).ReferenceController;
    if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar8 = ::FString::FString(&local_78,param_2);
    local_48.Type = UInt;
    local_48.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(ITextData *)0x0;
    local_48.TextValue.field0_0x0.TypedValue.Flags = 0;
    local_48.field1_0x8 = FVar11;
    pFVar7 = FTextHistory_AsCurrency::FTextHistory_AsCurrency
                       (pFVar7,&local_98,&local_48,pFVar8,param_3,&local_88);
    if (pFVar7 != (FTextHistory_AsCurrency *)0x0) {
      LOCK();
      *(int *)&pFVar7->_padding_ = (int)pFVar7->_padding_ + 1;
      UNLOCK();
      pFVar10 = pFVar7;
    }
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)pFVar10;
  __return_storage_ptr__->Flags = 1;
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// AsCurrencyTemplate<float,float> @ 141725800

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FText::AsCurrencyTemplate<float,float>
          (FText *__return_storage_ptr__,float param_1,FString *param_2,
          FNumberFormattingOptions *param_3,TSharedPtr<FCulture,1> *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FInternationalization *pFVar4;
  FText *pFVar5;
  FDecimalNumberFormattingRules *pFVar6;
  FTextHistory_AsCurrency *pFVar7;
  FString *pFVar8;
  FNumberFormattingOptions *pFVar9;
  FTextHistory_AsCurrency *pFVar10;
  FCulture *this;
  FString local_a8;
  TSharedPtr<FCulture,1> local_98;
  FString local_88;
  FNumberFormattingOptions local_78;
  FFormatArgumentValue local_58;
  
  pFVar4 = FInternationalization::Get();
  if (pFVar4->bIsInitialized != true) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("I18N.IsInitialized() == true",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\Text.cpp"
                       ,0x281,
                       L"FInternationalization is not initialized. An FText formatting method was likely used in static object initialization - this is not supported."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar2)();
      return pFVar5;
    }
  }
  this = param_4->Object;
  if (this == (FCulture *)0x0) {
    if ((pFVar4->CurrentLocale).Object == (FCulture *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FText *)(*pcVar2)();
        return pFVar5;
      }
    }
    this = (pFVar4->CurrentLocale).Object;
    pTVar1 = (pFVar4->CurrentLocale).SharedReferenceCount.ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this == (FCulture *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FText *)(*pcVar2)();
        return pFVar5;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  pFVar6 = FCulture::GetCurrencyFormattingRules(this,param_2);
  pFVar9 = param_3;
  if (param_3 == (FNumberFormattingOptions *)0x0) {
    pFVar9 = &pFVar6->CultureDefaultFormattingOptions;
  }
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  local_78.AlwaysSign = pFVar9->AlwaysSign;
  local_78.UseGrouping = pFVar9->UseGrouping;
  local_78.IndicateNearlyInteger = pFVar9->IndicateNearlyInteger;
  local_78._3_1_ = pFVar9->field_0x3;
  local_78.RoundingMode = pFVar9->RoundingMode;
  local_78.MinimumIntegralDigits = pFVar9->MinimumIntegralDigits;
  local_78.MaximumIntegralDigits = pFVar9->MaximumIntegralDigits;
  local_78.MinimumFractionalDigits = pFVar9->MinimumFractionalDigits;
  local_78.MaximumFractionalDigits = pFVar9->MaximumFractionalDigits;
  FastDecimalFormat::Internal::FractionalToString((double)param_1,pFVar6,&local_78,&local_a8);
  pFVar7 = ::operator_new(0x88);
  pFVar10 = (FTextHistory_AsCurrency *)0x0;
  if (pFVar7 != (FTextHistory_AsCurrency *)0x0) {
    local_98.Object = param_4->Object;
    local_98.SharedReferenceCount.ReferenceController =
         (param_4->SharedReferenceCount).ReferenceController;
    if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar8 = ::FString::FString(&local_88,param_2);
    local_58.Type = Float;
    local_58.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(ITextData *)0x0;
    local_58.TextValue.field0_0x0.TypedValue.Flags = 0;
    local_58.field1_0x8.FloatValue = param_1;
    pFVar7 = FTextHistory_AsCurrency::FTextHistory_AsCurrency
                       (pFVar7,&local_a8,&local_58,pFVar8,param_3,&local_98);
    if (pFVar7 != (FTextHistory_AsCurrency *)0x0) {
      LOCK();
      *(int *)&pFVar7->_padding_ = (int)pFVar7->_padding_ + 1;
      UNLOCK();
      pFVar10 = pFVar7;
    }
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)pFVar10;
  __return_storage_ptr__->Flags = 1;
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// AsCurrencyTemplate<double,double> @ 141725a10

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FText::AsCurrencyTemplate<double,double>
          (FText *__return_storage_ptr__,double param_1,FString *param_2,
          FNumberFormattingOptions *param_3,TSharedPtr<FCulture,1> *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FInternationalization *pFVar4;
  FText *pFVar5;
  FDecimalNumberFormattingRules *pFVar6;
  FTextHistory_AsCurrency *pFVar7;
  FString *pFVar8;
  FNumberFormattingOptions *pFVar9;
  FTextHistory_AsCurrency *pFVar10;
  FCulture *this;
  FString local_a8;
  TSharedPtr<FCulture,1> local_98;
  FString local_88;
  FNumberFormattingOptions local_78;
  FFormatArgumentValue local_58;
  
  pFVar4 = FInternationalization::Get();
  if (pFVar4->bIsInitialized != true) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("I18N.IsInitialized() == true",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\Text.cpp"
                       ,0x281,
                       L"FInternationalization is not initialized. An FText formatting method was likely used in static object initialization - this is not supported."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar2)();
      return pFVar5;
    }
  }
  this = param_4->Object;
  if (this == (FCulture *)0x0) {
    if ((pFVar4->CurrentLocale).Object == (FCulture *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FText *)(*pcVar2)();
        return pFVar5;
      }
    }
    this = (pFVar4->CurrentLocale).Object;
    pTVar1 = (pFVar4->CurrentLocale).SharedReferenceCount.ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this == (FCulture *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FText *)(*pcVar2)();
        return pFVar5;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  pFVar6 = FCulture::GetCurrencyFormattingRules(this,param_2);
  pFVar9 = param_3;
  if (param_3 == (FNumberFormattingOptions *)0x0) {
    pFVar9 = &pFVar6->CultureDefaultFormattingOptions;
  }
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  local_78.AlwaysSign = pFVar9->AlwaysSign;
  local_78.UseGrouping = pFVar9->UseGrouping;
  local_78.IndicateNearlyInteger = pFVar9->IndicateNearlyInteger;
  local_78._3_1_ = pFVar9->field_0x3;
  local_78.RoundingMode = pFVar9->RoundingMode;
  local_78.MinimumIntegralDigits = pFVar9->MinimumIntegralDigits;
  local_78.MaximumIntegralDigits = pFVar9->MaximumIntegralDigits;
  local_78.MinimumFractionalDigits = pFVar9->MinimumFractionalDigits;
  local_78.MaximumFractionalDigits = pFVar9->MaximumFractionalDigits;
  FastDecimalFormat::Internal::FractionalToString(param_1,pFVar6,&local_78,&local_a8);
  pFVar7 = ::operator_new(0x88);
  pFVar10 = (FTextHistory_AsCurrency *)0x0;
  if (pFVar7 != (FTextHistory_AsCurrency *)0x0) {
    local_98.Object = param_4->Object;
    local_98.SharedReferenceCount.ReferenceController =
         (param_4->SharedReferenceCount).ReferenceController;
    if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar8 = ::FString::FString(&local_88,param_2);
    local_58.Type = Double;
    local_58.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(ITextData *)0x0;
    local_58.TextValue.field0_0x0.TypedValue.Flags = 0;
    local_58.field1_0x8.DoubleValue = param_1;
    pFVar7 = FTextHistory_AsCurrency::FTextHistory_AsCurrency
                       (pFVar7,&local_a8,&local_58,pFVar8,param_3,&local_98);
    if (pFVar7 != (FTextHistory_AsCurrency *)0x0) {
      LOCK();
      *(int *)&pFVar7->_padding_ = (int)pFVar7->_padding_ + 1;
      UNLOCK();
      pFVar10 = pFVar7;
    }
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)pFVar10;
  __return_storage_ptr__->Flags = 1;
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// AsCurrencyTemplate<__int64,__int64> @ 141725c20

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FText::AsCurrencyTemplate<__int64,__int64>
          (FText *__return_storage_ptr__,long64 param_1,FString *param_2,
          FNumberFormattingOptions *param_3,TSharedPtr<FCulture,1> *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FInternationalization *pFVar4;
  FText *pFVar5;
  FDecimalNumberFormattingRules *pFVar6;
  FTextHistory_AsCurrency *pFVar7;
  FString *pFVar8;
  FNumberFormattingOptions *pFVar9;
  ulong64 uVar10;
  FTextHistory_AsCurrency *pFVar11;
  FCulture *this;
  FString local_98;
  TSharedPtr<FCulture,1> local_88;
  FString local_78;
  FNumberFormattingOptions local_68;
  FFormatArgumentValue local_48;
  
  pFVar4 = FInternationalization::Get();
  if (pFVar4->bIsInitialized != true) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("I18N.IsInitialized() == true",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\Text.cpp"
                       ,0x281,
                       L"FInternationalization is not initialized. An FText formatting method was likely used in static object initialization - this is not supported."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar2)();
      return pFVar5;
    }
  }
  this = param_4->Object;
  if (this == (FCulture *)0x0) {
    if ((pFVar4->CurrentLocale).Object == (FCulture *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FText *)(*pcVar2)();
        return pFVar5;
      }
    }
    this = (pFVar4->CurrentLocale).Object;
    pTVar1 = (pFVar4->CurrentLocale).SharedReferenceCount.ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this == (FCulture *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FText *)(*pcVar2)();
        return pFVar5;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  pFVar6 = FCulture::GetCurrencyFormattingRules(this,param_2);
  pFVar9 = param_3;
  if (param_3 == (FNumberFormattingOptions *)0x0) {
    pFVar9 = &pFVar6->CultureDefaultFormattingOptions;
  }
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  local_68.AlwaysSign = pFVar9->AlwaysSign;
  local_68.UseGrouping = pFVar9->UseGrouping;
  local_68.IndicateNearlyInteger = pFVar9->IndicateNearlyInteger;
  local_68._3_1_ = pFVar9->field_0x3;
  local_68.RoundingMode = pFVar9->RoundingMode;
  local_68.MinimumIntegralDigits = pFVar9->MinimumIntegralDigits;
  local_68.MaximumIntegralDigits = pFVar9->MaximumIntegralDigits;
  local_68.MinimumFractionalDigits = pFVar9->MinimumFractionalDigits;
  local_68.MaximumFractionalDigits = pFVar9->MaximumFractionalDigits;
  bVar3 = (bool)-(char)(param_1 >> 0x3f);
  uVar10 = -param_1;
  if (bVar3 == false) {
    uVar10 = param_1;
  }
  FastDecimalFormat::Internal::IntegralToString(bVar3,uVar10,pFVar6,&local_68,&local_98);
  pFVar7 = ::operator_new(0x88);
  pFVar11 = (FTextHistory_AsCurrency *)0x0;
  if (pFVar7 != (FTextHistory_AsCurrency *)0x0) {
    local_88.Object = param_4->Object;
    local_88.SharedReferenceCount.ReferenceController =
         (param_4->SharedReferenceCount).ReferenceController;
    if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar8 = ::FString::FString(&local_78,param_2);
    local_48.Type = Int;
    local_48.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(ITextData *)0x0;
    local_48.TextValue.field0_0x0.TypedValue.Flags = 0;
    local_48.field1_0x8.IntValue = param_1;
    pFVar7 = FTextHistory_AsCurrency::FTextHistory_AsCurrency
                       (pFVar7,&local_98,&local_48,pFVar8,param_3,&local_88);
    if (pFVar7 != (FTextHistory_AsCurrency *)0x0) {
      LOCK();
      *(int *)&pFVar7->_padding_ = (int)pFVar7->_padding_ + 1;
      UNLOCK();
      pFVar11 = pFVar7;
    }
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)pFVar11;
  __return_storage_ptr__->Flags = 1;
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// AsCurrencyTemplate<unsigned___int64,__int64> @ 141725e40

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FText::AsCurrencyTemplate<unsigned___int64,__int64>
          (FText *__return_storage_ptr__,ulong64 param_1,FString *param_2,
          FNumberFormattingOptions *param_3,TSharedPtr<FCulture,1> *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FInternationalization *pFVar4;
  FText *pFVar5;
  FDecimalNumberFormattingRules *pFVar6;
  FTextHistory_AsCurrency *pFVar7;
  FString *pFVar8;
  FNumberFormattingOptions *pFVar9;
  FTextHistory_AsCurrency *pFVar10;
  FCulture *this;
  FString local_98;
  TSharedPtr<FCulture,1> local_88;
  FString local_78;
  FNumberFormattingOptions local_68;
  FFormatArgumentValue local_48;
  
  pFVar4 = FInternationalization::Get();
  if (pFVar4->bIsInitialized != true) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("I18N.IsInitialized() == true",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\Text.cpp"
                       ,0x281,
                       L"FInternationalization is not initialized. An FText formatting method was likely used in static object initialization - this is not supported."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar2)();
      return pFVar5;
    }
  }
  this = param_4->Object;
  if (this == (FCulture *)0x0) {
    if ((pFVar4->CurrentLocale).Object == (FCulture *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FText *)(*pcVar2)();
        return pFVar5;
      }
    }
    this = (pFVar4->CurrentLocale).Object;
    pTVar1 = (pFVar4->CurrentLocale).SharedReferenceCount.ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this == (FCulture *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FText *)(*pcVar2)();
        return pFVar5;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  pFVar6 = FCulture::GetCurrencyFormattingRules(this,param_2);
  pFVar9 = param_3;
  if (param_3 == (FNumberFormattingOptions *)0x0) {
    pFVar9 = &pFVar6->CultureDefaultFormattingOptions;
  }
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  local_68.AlwaysSign = pFVar9->AlwaysSign;
  local_68.UseGrouping = pFVar9->UseGrouping;
  local_68.IndicateNearlyInteger = pFVar9->IndicateNearlyInteger;
  local_68._3_1_ = pFVar9->field_0x3;
  local_68.RoundingMode = pFVar9->RoundingMode;
  local_68.MinimumIntegralDigits = pFVar9->MinimumIntegralDigits;
  local_68.MaximumIntegralDigits = pFVar9->MaximumIntegralDigits;
  local_68.MinimumFractionalDigits = pFVar9->MinimumFractionalDigits;
  local_68.MaximumFractionalDigits = pFVar9->MaximumFractionalDigits;
  FastDecimalFormat::Internal::IntegralToString(false,param_1,pFVar6,&local_68,&local_98);
  pFVar7 = ::operator_new(0x88);
  pFVar10 = (FTextHistory_AsCurrency *)0x0;
  if (pFVar7 != (FTextHistory_AsCurrency *)0x0) {
    local_88.Object = param_4->Object;
    local_88.SharedReferenceCount.ReferenceController =
         (param_4->SharedReferenceCount).ReferenceController;
    if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar8 = ::FString::FString(&local_78,param_2);
    local_48.Type = UInt;
    local_48.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(ITextData *)0x0;
    local_48.TextValue.field0_0x0.TypedValue.Flags = 0;
    local_48.field1_0x8.UIntValue = param_1;
    pFVar7 = FTextHistory_AsCurrency::FTextHistory_AsCurrency
                       (pFVar7,&local_98,&local_48,pFVar8,param_3,&local_88);
    if (pFVar7 != (FTextHistory_AsCurrency *)0x0) {
      LOCK();
      *(int *)&pFVar7->_padding_ = (int)pFVar7->_padding_ + 1;
      UNLOCK();
      pFVar10 = pFVar7;
    }
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)pFVar10;
  __return_storage_ptr__->Flags = 1;
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// AsNumberTemplate<signed_char,signed_char> @ 141726050

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FText::AsNumberTemplate<signed_char,signed_char>
          (FText *__return_storage_ptr__,schar param_1,FNumberFormattingOptions *param_2,
          TSharedPtr<FCulture,1> *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 uVar5;
  ERoundingMode EVar6;
  bool bVar7;
  FInternationalization *pFVar8;
  FText *pFVar9;
  FDecimalNumberFormattingRules *pFVar10;
  FTextHistory *this;
  FNumberFormattingOptions *pFVar11;
  ulong64 uVar12;
  FCulture *pFVar13;
  FTextHistory *pFVar14;
  ulong64 uVar15;
  FString local_68;
  FNumberFormattingOptions local_58;
  
  pFVar14 = (FTextHistory *)0x0;
  uVar15 = (ulong64)param_1;
  pFVar8 = FInternationalization::Get();
  if ((pFVar8->bIsInitialized != true) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("I18N.IsInitialized() == true",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\Text.cpp"
                         ,0x25c,
                         L"FInternationalization is not initialized. An FText formatting method was likely used in static object initialization - this is not supported."
                        ), bVar7)) {
    pcVar2 = (code *)swi(3);
    pFVar9 = (FText *)(*pcVar2)();
    return pFVar9;
  }
  pFVar13 = param_3->Object;
  if (pFVar13 == (FCulture *)0x0) {
    if (((pFVar8->CurrentLocale).Object == (FCulture *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FText *)(*pcVar2)();
      return pFVar9;
    }
    pFVar13 = (pFVar8->CurrentLocale).Object;
    pTVar1 = (pFVar8->CurrentLocale).SharedReferenceCount.ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar13 == (FCulture *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FText *)(*pcVar2)();
      return pFVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  pFVar10 = FCulture::GetDecimalNumberFormattingRules(pFVar13);
  pFVar11 = param_2;
  if (param_2 == (FNumberFormattingOptions *)0x0) {
    pFVar11 = &pFVar10->CultureDefaultFormattingOptions;
  }
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_58.AlwaysSign = pFVar11->AlwaysSign;
  local_58.UseGrouping = pFVar11->UseGrouping;
  local_58.IndicateNearlyInteger = pFVar11->IndicateNearlyInteger;
  local_58._3_1_ = pFVar11->field_0x3;
  local_58.RoundingMode = pFVar11->RoundingMode;
  local_58.MinimumIntegralDigits = pFVar11->MinimumIntegralDigits;
  local_58.MaximumIntegralDigits = pFVar11->MaximumIntegralDigits;
  local_58.MinimumFractionalDigits = pFVar11->MinimumFractionalDigits;
  local_58.MaximumFractionalDigits = pFVar11->MaximumFractionalDigits;
  uVar12 = -uVar15;
  if (-1 < param_1) {
    uVar12 = uVar15;
  }
  FastDecimalFormat::Internal::IntegralToString
            ((bool)((byte)param_1 >> 7),uVar12,pFVar10,&local_58,&local_68);
  this = ::operator_new(0x78);
  if (this != (FTextHistory *)0x0) {
    pTVar1 = (param_3->SharedReferenceCount).ReferenceController;
    pFVar13 = param_3->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    this->_padding_ = 0;
    this->GlobalRevision = 0;
    this->LocalRevision = 0;
    (this->Mutex).State = (atomic<unsigned_char>)0x0;
    this->_padding_ = (longlong)&___7FTextHistory_Generated__6B_;
    this[1]._padding_ = (longlong)local_68.Data.AllocatorInstance.Data;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1]._padding_ = local_68.Data.ArrayNum;
    this[1].GlobalRevision = (undefined2)local_68.Data.ArrayMax;
    this[1].LocalRevision = local_68.Data.ArrayMax._2_2_;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    FTextHistory::MarkDisplayStringUpToDate(this);
    this->_padding_ = (longlong)&___7FTextHistory_FormatNumber__6B_;
    *(undefined4 *)&this[1].Mutex = 0;
    this[2]._padding_ = uVar15;
    this[2]._padding_ = 0;
    this[2].GlobalRevision = 0;
    this[2].LocalRevision = 0;
    *(undefined4 *)&this[2].Mutex = 0;
    *(undefined1 *)&this[4]._padding_ = 0;
    *(FCulture **)&this[4]._padding_ = pFVar13;
    *(TReferenceControllerBase<1> **)&this[4].Mutex = pTVar1;
    if ((param_2 != (FNumberFormattingOptions *)0x0) &&
       (pFVar11 = (FNumberFormattingOptions *)(this + 3), param_2 != pFVar11)) {
      bVar7 = param_2->UseGrouping;
      bVar4 = param_2->IndicateNearlyInteger;
      uVar5 = param_2->field_0x3;
      EVar6 = param_2->RoundingMode;
      uVar3._0_4_ = param_2->MinimumIntegralDigits;
      uVar3._4_4_ = param_2->MaximumIntegralDigits;
      pFVar11->AlwaysSign = param_2->AlwaysSign;
      pFVar11->UseGrouping = bVar7;
      pFVar11->IndicateNearlyInteger = bVar4;
      pFVar11->field_0x3 = uVar5;
      pFVar11->RoundingMode = EVar6;
      this[3]._padding_ = (undefined4)uVar3;
      this[3].GlobalRevision = (short)((ulonglong)uVar3 >> 0x20);
      this[3].LocalRevision = (short)((ulonglong)uVar3 >> 0x30);
      *(undefined8 *)&this[3].Mutex = *(undefined8 *)&param_2->MinimumFractionalDigits;
      *(undefined1 *)&this[4]._padding_ = 1;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    this->_padding_ = (longlong)&___7FTextHistory_AsNumber__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    LOCK();
    this->_padding_ = this->_padding_ + 1;
    UNLOCK();
    pFVar14 = this;
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)pFVar14;
  __return_storage_ptr__->Flags = 1;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// AsNumberTemplate<unsigned_char,unsigned_char> @ 141726290

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FText::AsNumberTemplate<unsigned_char,unsigned_char>
          (FText *__return_storage_ptr__,uchar param_1,FNumberFormattingOptions *param_2,
          TSharedPtr<FCulture,1> *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 uVar5;
  ERoundingMode EVar6;
  bool bVar7;
  FInternationalization *pFVar8;
  FText *pFVar9;
  FDecimalNumberFormattingRules *pFVar10;
  FTextHistory *this;
  FNumberFormattingOptions *pFVar11;
  FCulture *pFVar12;
  FTextHistory *pFVar13;
  FString local_68;
  FNumberFormattingOptions local_58;
  
  pFVar13 = (FTextHistory *)0x0;
  pFVar8 = FInternationalization::Get();
  if ((pFVar8->bIsInitialized != true) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("I18N.IsInitialized() == true",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\Text.cpp"
                         ,0x25c,
                         L"FInternationalization is not initialized. An FText formatting method was likely used in static object initialization - this is not supported."
                        ), bVar7)) {
    pcVar2 = (code *)swi(3);
    pFVar9 = (FText *)(*pcVar2)();
    return pFVar9;
  }
  pFVar12 = param_3->Object;
  if (pFVar12 == (FCulture *)0x0) {
    if (((pFVar8->CurrentLocale).Object == (FCulture *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FText *)(*pcVar2)();
      return pFVar9;
    }
    pFVar12 = (pFVar8->CurrentLocale).Object;
    pTVar1 = (pFVar8->CurrentLocale).SharedReferenceCount.ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar12 == (FCulture *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FText *)(*pcVar2)();
      return pFVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  pFVar10 = FCulture::GetDecimalNumberFormattingRules(pFVar12);
  pFVar11 = param_2;
  if (param_2 == (FNumberFormattingOptions *)0x0) {
    pFVar11 = &pFVar10->CultureDefaultFormattingOptions;
  }
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_58.AlwaysSign = pFVar11->AlwaysSign;
  local_58.UseGrouping = pFVar11->UseGrouping;
  local_58.IndicateNearlyInteger = pFVar11->IndicateNearlyInteger;
  local_58._3_1_ = pFVar11->field_0x3;
  local_58.RoundingMode = pFVar11->RoundingMode;
  local_58.MinimumIntegralDigits = pFVar11->MinimumIntegralDigits;
  local_58.MaximumIntegralDigits = pFVar11->MaximumIntegralDigits;
  local_58.MinimumFractionalDigits = pFVar11->MinimumFractionalDigits;
  local_58.MaximumFractionalDigits = pFVar11->MaximumFractionalDigits;
  FastDecimalFormat::Internal::IntegralToString
            (false,(ulonglong)param_1,pFVar10,&local_58,&local_68);
  this = ::operator_new(0x78);
  if (this != (FTextHistory *)0x0) {
    pTVar1 = (param_3->SharedReferenceCount).ReferenceController;
    pFVar12 = param_3->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    this->_padding_ = 0;
    this->GlobalRevision = 0;
    this->LocalRevision = 0;
    (this->Mutex).State = (atomic<unsigned_char>)0x0;
    this->_padding_ = (longlong)&___7FTextHistory_Generated__6B_;
    this[1]._padding_ = (longlong)local_68.Data.AllocatorInstance.Data;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1]._padding_ = local_68.Data.ArrayNum;
    this[1].GlobalRevision = (undefined2)local_68.Data.ArrayMax;
    this[1].LocalRevision = local_68.Data.ArrayMax._2_2_;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    FTextHistory::MarkDisplayStringUpToDate(this);
    this->_padding_ = (longlong)&___7FTextHistory_FormatNumber__6B_;
    *(undefined4 *)&this[1].Mutex = 0;
    this[2]._padding_ = (ulonglong)param_1;
    this[2]._padding_ = 0;
    this[2].GlobalRevision = 0;
    this[2].LocalRevision = 0;
    *(undefined4 *)&this[2].Mutex = 0;
    *(undefined1 *)&this[4]._padding_ = 0;
    *(FCulture **)&this[4]._padding_ = pFVar12;
    *(TReferenceControllerBase<1> **)&this[4].Mutex = pTVar1;
    if ((param_2 != (FNumberFormattingOptions *)0x0) &&
       (pFVar11 = (FNumberFormattingOptions *)(this + 3), param_2 != pFVar11)) {
      bVar7 = param_2->UseGrouping;
      bVar4 = param_2->IndicateNearlyInteger;
      uVar5 = param_2->field_0x3;
      EVar6 = param_2->RoundingMode;
      uVar3._0_4_ = param_2->MinimumIntegralDigits;
      uVar3._4_4_ = param_2->MaximumIntegralDigits;
      pFVar11->AlwaysSign = param_2->AlwaysSign;
      pFVar11->UseGrouping = bVar7;
      pFVar11->IndicateNearlyInteger = bVar4;
      pFVar11->field_0x3 = uVar5;
      pFVar11->RoundingMode = EVar6;
      this[3]._padding_ = (undefined4)uVar3;
      this[3].GlobalRevision = (short)((ulonglong)uVar3 >> 0x20);
      this[3].LocalRevision = (short)((ulonglong)uVar3 >> 0x30);
      *(undefined8 *)&this[3].Mutex = *(undefined8 *)&param_2->MinimumFractionalDigits;
      *(undefined1 *)&this[4]._padding_ = 1;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    this->_padding_ = (longlong)&___7FTextHistory_AsNumber__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    LOCK();
    this->_padding_ = this->_padding_ + 1;
    UNLOCK();
    pFVar13 = this;
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)pFVar13;
  __return_storage_ptr__->Flags = 1;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// AsNumberTemplate<short,short> @ 1417264c0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FText::AsNumberTemplate<short,short>
          (FText *__return_storage_ptr__,short param_1,FNumberFormattingOptions *param_2,
          TSharedPtr<FCulture,1> *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 uVar5;
  ERoundingMode EVar6;
  bool bVar7;
  FInternationalization *pFVar8;
  FText *pFVar9;
  FDecimalNumberFormattingRules *pFVar10;
  FTextHistory *this;
  FNumberFormattingOptions *pFVar11;
  ulong64 uVar12;
  FCulture *pFVar13;
  FTextHistory *pFVar14;
  ulong64 uVar15;
  FString local_68;
  FNumberFormattingOptions local_58;
  
  pFVar14 = (FTextHistory *)0x0;
  uVar15 = (ulong64)param_1;
  pFVar8 = FInternationalization::Get();
  if ((pFVar8->bIsInitialized != true) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("I18N.IsInitialized() == true",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\Text.cpp"
                         ,0x25c,
                         L"FInternationalization is not initialized. An FText formatting method was likely used in static object initialization - this is not supported."
                        ), bVar7)) {
    pcVar2 = (code *)swi(3);
    pFVar9 = (FText *)(*pcVar2)();
    return pFVar9;
  }
  pFVar13 = param_3->Object;
  if (pFVar13 == (FCulture *)0x0) {
    if (((pFVar8->CurrentLocale).Object == (FCulture *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FText *)(*pcVar2)();
      return pFVar9;
    }
    pFVar13 = (pFVar8->CurrentLocale).Object;
    pTVar1 = (pFVar8->CurrentLocale).SharedReferenceCount.ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar13 == (FCulture *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FText *)(*pcVar2)();
      return pFVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  pFVar10 = FCulture::GetDecimalNumberFormattingRules(pFVar13);
  pFVar11 = param_2;
  if (param_2 == (FNumberFormattingOptions *)0x0) {
    pFVar11 = &pFVar10->CultureDefaultFormattingOptions;
  }
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_58.AlwaysSign = pFVar11->AlwaysSign;
  local_58.UseGrouping = pFVar11->UseGrouping;
  local_58.IndicateNearlyInteger = pFVar11->IndicateNearlyInteger;
  local_58._3_1_ = pFVar11->field_0x3;
  local_58.RoundingMode = pFVar11->RoundingMode;
  local_58.MinimumIntegralDigits = pFVar11->MinimumIntegralDigits;
  local_58.MaximumIntegralDigits = pFVar11->MaximumIntegralDigits;
  local_58.MinimumFractionalDigits = pFVar11->MinimumFractionalDigits;
  local_58.MaximumFractionalDigits = pFVar11->MaximumFractionalDigits;
  bVar7 = (bool)-(char)(param_1 >> 0xf);
  uVar12 = -uVar15;
  if (bVar7 == false) {
    uVar12 = uVar15;
  }
  FastDecimalFormat::Internal::IntegralToString(bVar7,uVar12,pFVar10,&local_58,&local_68);
  this = ::operator_new(0x78);
  if (this != (FTextHistory *)0x0) {
    pTVar1 = (param_3->SharedReferenceCount).ReferenceController;
    pFVar13 = param_3->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    this->_padding_ = 0;
    this->GlobalRevision = 0;
    this->LocalRevision = 0;
    (this->Mutex).State = (atomic<unsigned_char>)0x0;
    this->_padding_ = (longlong)&___7FTextHistory_Generated__6B_;
    this[1]._padding_ = (longlong)local_68.Data.AllocatorInstance.Data;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1]._padding_ = local_68.Data.ArrayNum;
    this[1].GlobalRevision = (undefined2)local_68.Data.ArrayMax;
    this[1].LocalRevision = local_68.Data.ArrayMax._2_2_;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    FTextHistory::MarkDisplayStringUpToDate(this);
    this->_padding_ = (longlong)&___7FTextHistory_FormatNumber__6B_;
    *(undefined4 *)&this[1].Mutex = 0;
    this[2]._padding_ = uVar15;
    this[2]._padding_ = 0;
    this[2].GlobalRevision = 0;
    this[2].LocalRevision = 0;
    *(undefined4 *)&this[2].Mutex = 0;
    *(undefined1 *)&this[4]._padding_ = 0;
    *(FCulture **)&this[4]._padding_ = pFVar13;
    *(TReferenceControllerBase<1> **)&this[4].Mutex = pTVar1;
    if ((param_2 != (FNumberFormattingOptions *)0x0) &&
       (pFVar11 = (FNumberFormattingOptions *)(this + 3), param_2 != pFVar11)) {
      bVar7 = param_2->UseGrouping;
      bVar4 = param_2->IndicateNearlyInteger;
      uVar5 = param_2->field_0x3;
      EVar6 = param_2->RoundingMode;
      uVar3._0_4_ = param_2->MinimumIntegralDigits;
      uVar3._4_4_ = param_2->MaximumIntegralDigits;
      pFVar11->AlwaysSign = param_2->AlwaysSign;
      pFVar11->UseGrouping = bVar7;
      pFVar11->IndicateNearlyInteger = bVar4;
      pFVar11->field_0x3 = uVar5;
      pFVar11->RoundingMode = EVar6;
      this[3]._padding_ = (undefined4)uVar3;
      this[3].GlobalRevision = (short)((ulonglong)uVar3 >> 0x20);
      this[3].LocalRevision = (short)((ulonglong)uVar3 >> 0x30);
      *(undefined8 *)&this[3].Mutex = *(undefined8 *)&param_2->MinimumFractionalDigits;
      *(undefined1 *)&this[4]._padding_ = 1;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    this->_padding_ = (longlong)&___7FTextHistory_AsNumber__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    LOCK();
    this->_padding_ = this->_padding_ + 1;
    UNLOCK();
    pFVar14 = this;
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)pFVar14;
  __return_storage_ptr__->Flags = 1;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// AsNumberTemplate<unsigned_short,unsigned_short> @ 141726700

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FText::AsNumberTemplate<unsigned_short,unsigned_short>
          (FText *__return_storage_ptr__,ushort param_1,FNumberFormattingOptions *param_2,
          TSharedPtr<FCulture,1> *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 uVar5;
  ERoundingMode EVar6;
  bool bVar7;
  FInternationalization *pFVar8;
  FText *pFVar9;
  FDecimalNumberFormattingRules *pFVar10;
  FTextHistory *this;
  FNumberFormattingOptions *pFVar11;
  FCulture *pFVar12;
  FTextHistory *pFVar13;
  FString local_68;
  FNumberFormattingOptions local_58;
  
  pFVar13 = (FTextHistory *)0x0;
  pFVar8 = FInternationalization::Get();
  if ((pFVar8->bIsInitialized != true) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("I18N.IsInitialized() == true",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\Text.cpp"
                         ,0x25c,
                         L"FInternationalization is not initialized. An FText formatting method was likely used in static object initialization - this is not supported."
                        ), bVar7)) {
    pcVar2 = (code *)swi(3);
    pFVar9 = (FText *)(*pcVar2)();
    return pFVar9;
  }
  pFVar12 = param_3->Object;
  if (pFVar12 == (FCulture *)0x0) {
    if (((pFVar8->CurrentLocale).Object == (FCulture *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FText *)(*pcVar2)();
      return pFVar9;
    }
    pFVar12 = (pFVar8->CurrentLocale).Object;
    pTVar1 = (pFVar8->CurrentLocale).SharedReferenceCount.ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar12 == (FCulture *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FText *)(*pcVar2)();
      return pFVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  pFVar10 = FCulture::GetDecimalNumberFormattingRules(pFVar12);
  pFVar11 = param_2;
  if (param_2 == (FNumberFormattingOptions *)0x0) {
    pFVar11 = &pFVar10->CultureDefaultFormattingOptions;
  }
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_58.AlwaysSign = pFVar11->AlwaysSign;
  local_58.UseGrouping = pFVar11->UseGrouping;
  local_58.IndicateNearlyInteger = pFVar11->IndicateNearlyInteger;
  local_58._3_1_ = pFVar11->field_0x3;
  local_58.RoundingMode = pFVar11->RoundingMode;
  local_58.MinimumIntegralDigits = pFVar11->MinimumIntegralDigits;
  local_58.MaximumIntegralDigits = pFVar11->MaximumIntegralDigits;
  local_58.MinimumFractionalDigits = pFVar11->MinimumFractionalDigits;
  local_58.MaximumFractionalDigits = pFVar11->MaximumFractionalDigits;
  FastDecimalFormat::Internal::IntegralToString
            (false,(ulonglong)param_1,pFVar10,&local_58,&local_68);
  this = ::operator_new(0x78);
  if (this != (FTextHistory *)0x0) {
    pTVar1 = (param_3->SharedReferenceCount).ReferenceController;
    pFVar12 = param_3->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    this->_padding_ = 0;
    this->GlobalRevision = 0;
    this->LocalRevision = 0;
    (this->Mutex).State = (atomic<unsigned_char>)0x0;
    this->_padding_ = (longlong)&___7FTextHistory_Generated__6B_;
    this[1]._padding_ = (longlong)local_68.Data.AllocatorInstance.Data;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1]._padding_ = local_68.Data.ArrayNum;
    this[1].GlobalRevision = (undefined2)local_68.Data.ArrayMax;
    this[1].LocalRevision = local_68.Data.ArrayMax._2_2_;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    FTextHistory::MarkDisplayStringUpToDate(this);
    this->_padding_ = (longlong)&___7FTextHistory_FormatNumber__6B_;
    *(undefined4 *)&this[1].Mutex = 0;
    this[2]._padding_ = (ulonglong)param_1;
    this[2]._padding_ = 0;
    this[2].GlobalRevision = 0;
    this[2].LocalRevision = 0;
    *(undefined4 *)&this[2].Mutex = 0;
    *(undefined1 *)&this[4]._padding_ = 0;
    *(FCulture **)&this[4]._padding_ = pFVar12;
    *(TReferenceControllerBase<1> **)&this[4].Mutex = pTVar1;
    if ((param_2 != (FNumberFormattingOptions *)0x0) &&
       (pFVar11 = (FNumberFormattingOptions *)(this + 3), param_2 != pFVar11)) {
      bVar7 = param_2->UseGrouping;
      bVar4 = param_2->IndicateNearlyInteger;
      uVar5 = param_2->field_0x3;
      EVar6 = param_2->RoundingMode;
      uVar3._0_4_ = param_2->MinimumIntegralDigits;
      uVar3._4_4_ = param_2->MaximumIntegralDigits;
      pFVar11->AlwaysSign = param_2->AlwaysSign;
      pFVar11->UseGrouping = bVar7;
      pFVar11->IndicateNearlyInteger = bVar4;
      pFVar11->field_0x3 = uVar5;
      pFVar11->RoundingMode = EVar6;
      this[3]._padding_ = (undefined4)uVar3;
      this[3].GlobalRevision = (short)((ulonglong)uVar3 >> 0x20);
      this[3].LocalRevision = (short)((ulonglong)uVar3 >> 0x30);
      *(undefined8 *)&this[3].Mutex = *(undefined8 *)&param_2->MinimumFractionalDigits;
      *(undefined1 *)&this[4]._padding_ = 1;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    this->_padding_ = (longlong)&___7FTextHistory_AsNumber__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    LOCK();
    this->_padding_ = this->_padding_ + 1;
    UNLOCK();
    pFVar13 = this;
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)pFVar13;
  __return_storage_ptr__->Flags = 1;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// AsNumberTemplate<int,int> @ 141726930

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FText::AsNumberTemplate<int,int>
          (FText *__return_storage_ptr__,int param_1,FNumberFormattingOptions *param_2,
          TSharedPtr<FCulture,1> *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 uVar5;
  ERoundingMode EVar6;
  bool bVar7;
  FInternationalization *pFVar8;
  FText *pFVar9;
  FDecimalNumberFormattingRules *pFVar10;
  FTextHistory *this;
  FNumberFormattingOptions *pFVar11;
  ulong64 uVar12;
  FCulture *pFVar13;
  FTextHistory *pFVar14;
  ulong64 uVar15;
  FString local_68;
  FNumberFormattingOptions local_58;
  
  pFVar14 = (FTextHistory *)0x0;
  uVar15 = (ulong64)param_1;
  pFVar8 = FInternationalization::Get();
  if ((pFVar8->bIsInitialized != true) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("I18N.IsInitialized() == true",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\Text.cpp"
                         ,0x25c,
                         L"FInternationalization is not initialized. An FText formatting method was likely used in static object initialization - this is not supported."
                        ), bVar7)) {
    pcVar2 = (code *)swi(3);
    pFVar9 = (FText *)(*pcVar2)();
    return pFVar9;
  }
  pFVar13 = param_3->Object;
  if (pFVar13 == (FCulture *)0x0) {
    if (((pFVar8->CurrentLocale).Object == (FCulture *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FText *)(*pcVar2)();
      return pFVar9;
    }
    pFVar13 = (pFVar8->CurrentLocale).Object;
    pTVar1 = (pFVar8->CurrentLocale).SharedReferenceCount.ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar13 == (FCulture *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FText *)(*pcVar2)();
      return pFVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  pFVar10 = FCulture::GetDecimalNumberFormattingRules(pFVar13);
  pFVar11 = param_2;
  if (param_2 == (FNumberFormattingOptions *)0x0) {
    pFVar11 = &pFVar10->CultureDefaultFormattingOptions;
  }
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_58.AlwaysSign = pFVar11->AlwaysSign;
  local_58.UseGrouping = pFVar11->UseGrouping;
  local_58.IndicateNearlyInteger = pFVar11->IndicateNearlyInteger;
  local_58._3_1_ = pFVar11->field_0x3;
  local_58.RoundingMode = pFVar11->RoundingMode;
  local_58.MinimumIntegralDigits = pFVar11->MinimumIntegralDigits;
  local_58.MaximumIntegralDigits = pFVar11->MaximumIntegralDigits;
  local_58.MinimumFractionalDigits = pFVar11->MinimumFractionalDigits;
  local_58.MaximumFractionalDigits = pFVar11->MaximumFractionalDigits;
  bVar7 = (bool)-(char)(param_1 >> 0x1f);
  uVar12 = -uVar15;
  if (bVar7 == false) {
    uVar12 = uVar15;
  }
  FastDecimalFormat::Internal::IntegralToString(bVar7,uVar12,pFVar10,&local_58,&local_68);
  this = ::operator_new(0x78);
  if (this != (FTextHistory *)0x0) {
    pTVar1 = (param_3->SharedReferenceCount).ReferenceController;
    pFVar13 = param_3->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    this->_padding_ = 0;
    this->GlobalRevision = 0;
    this->LocalRevision = 0;
    (this->Mutex).State = (atomic<unsigned_char>)0x0;
    this->_padding_ = (longlong)&___7FTextHistory_Generated__6B_;
    this[1]._padding_ = (longlong)local_68.Data.AllocatorInstance.Data;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1]._padding_ = local_68.Data.ArrayNum;
    this[1].GlobalRevision = (undefined2)local_68.Data.ArrayMax;
    this[1].LocalRevision = local_68.Data.ArrayMax._2_2_;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    FTextHistory::MarkDisplayStringUpToDate(this);
    this->_padding_ = (longlong)&___7FTextHistory_FormatNumber__6B_;
    *(undefined4 *)&this[1].Mutex = 0;
    this[2]._padding_ = uVar15;
    this[2]._padding_ = 0;
    this[2].GlobalRevision = 0;
    this[2].LocalRevision = 0;
    *(undefined4 *)&this[2].Mutex = 0;
    *(undefined1 *)&this[4]._padding_ = 0;
    *(FCulture **)&this[4]._padding_ = pFVar13;
    *(TReferenceControllerBase<1> **)&this[4].Mutex = pTVar1;
    if ((param_2 != (FNumberFormattingOptions *)0x0) &&
       (pFVar11 = (FNumberFormattingOptions *)(this + 3), param_2 != pFVar11)) {
      bVar7 = param_2->UseGrouping;
      bVar4 = param_2->IndicateNearlyInteger;
      uVar5 = param_2->field_0x3;
      EVar6 = param_2->RoundingMode;
      uVar3._0_4_ = param_2->MinimumIntegralDigits;
      uVar3._4_4_ = param_2->MaximumIntegralDigits;
      pFVar11->AlwaysSign = param_2->AlwaysSign;
      pFVar11->UseGrouping = bVar7;
      pFVar11->IndicateNearlyInteger = bVar4;
      pFVar11->field_0x3 = uVar5;
      pFVar11->RoundingMode = EVar6;
      this[3]._padding_ = (undefined4)uVar3;
      this[3].GlobalRevision = (short)((ulonglong)uVar3 >> 0x20);
      this[3].LocalRevision = (short)((ulonglong)uVar3 >> 0x30);
      *(undefined8 *)&this[3].Mutex = *(undefined8 *)&param_2->MinimumFractionalDigits;
      *(undefined1 *)&this[4]._padding_ = 1;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    this->_padding_ = (longlong)&___7FTextHistory_AsNumber__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    LOCK();
    this->_padding_ = this->_padding_ + 1;
    UNLOCK();
    pFVar14 = this;
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)pFVar14;
  __return_storage_ptr__->Flags = 1;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// AsNumberTemplate<unsigned_int,__int64> @ 141726b70

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FText::AsNumberTemplate<unsigned_int,__int64>
          (FText *__return_storage_ptr__,uint param_1,FNumberFormattingOptions *param_2,
          TSharedPtr<FCulture,1> *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 uVar5;
  ERoundingMode EVar6;
  bool bVar7;
  FInternationalization *pFVar8;
  FText *pFVar9;
  FDecimalNumberFormattingRules *pFVar10;
  FTextHistory *this;
  FNumberFormattingOptions *pFVar11;
  FCulture *pFVar12;
  FTextHistory *pFVar13;
  FString local_68;
  FNumberFormattingOptions local_58;
  
  pFVar13 = (FTextHistory *)0x0;
  pFVar8 = FInternationalization::Get();
  if ((pFVar8->bIsInitialized != true) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("I18N.IsInitialized() == true",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\Text.cpp"
                         ,0x25c,
                         L"FInternationalization is not initialized. An FText formatting method was likely used in static object initialization - this is not supported."
                        ), bVar7)) {
    pcVar2 = (code *)swi(3);
    pFVar9 = (FText *)(*pcVar2)();
    return pFVar9;
  }
  pFVar12 = param_3->Object;
  if (pFVar12 == (FCulture *)0x0) {
    if (((pFVar8->CurrentLocale).Object == (FCulture *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FText *)(*pcVar2)();
      return pFVar9;
    }
    pFVar12 = (pFVar8->CurrentLocale).Object;
    pTVar1 = (pFVar8->CurrentLocale).SharedReferenceCount.ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar12 == (FCulture *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FText *)(*pcVar2)();
      return pFVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  pFVar10 = FCulture::GetDecimalNumberFormattingRules(pFVar12);
  pFVar11 = param_2;
  if (param_2 == (FNumberFormattingOptions *)0x0) {
    pFVar11 = &pFVar10->CultureDefaultFormattingOptions;
  }
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_58.AlwaysSign = pFVar11->AlwaysSign;
  local_58.UseGrouping = pFVar11->UseGrouping;
  local_58.IndicateNearlyInteger = pFVar11->IndicateNearlyInteger;
  local_58._3_1_ = pFVar11->field_0x3;
  local_58.RoundingMode = pFVar11->RoundingMode;
  local_58.MinimumIntegralDigits = pFVar11->MinimumIntegralDigits;
  local_58.MaximumIntegralDigits = pFVar11->MaximumIntegralDigits;
  local_58.MinimumFractionalDigits = pFVar11->MinimumFractionalDigits;
  local_58.MaximumFractionalDigits = pFVar11->MaximumFractionalDigits;
  FastDecimalFormat::Internal::IntegralToString
            (false,(ulonglong)param_1,pFVar10,&local_58,&local_68);
  this = ::operator_new(0x78);
  if (this != (FTextHistory *)0x0) {
    pTVar1 = (param_3->SharedReferenceCount).ReferenceController;
    pFVar12 = param_3->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    this->_padding_ = 0;
    this->GlobalRevision = 0;
    this->LocalRevision = 0;
    (this->Mutex).State = (atomic<unsigned_char>)0x0;
    this->_padding_ = (longlong)&___7FTextHistory_Generated__6B_;
    this[1]._padding_ = (longlong)local_68.Data.AllocatorInstance.Data;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1]._padding_ = local_68.Data.ArrayNum;
    this[1].GlobalRevision = (undefined2)local_68.Data.ArrayMax;
    this[1].LocalRevision = local_68.Data.ArrayMax._2_2_;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    FTextHistory::MarkDisplayStringUpToDate(this);
    this->_padding_ = (longlong)&___7FTextHistory_FormatNumber__6B_;
    *(undefined4 *)&this[1].Mutex = 1;
    this[2]._padding_ = (ulonglong)param_1;
    this[2]._padding_ = 0;
    this[2].GlobalRevision = 0;
    this[2].LocalRevision = 0;
    *(undefined4 *)&this[2].Mutex = 0;
    *(undefined1 *)&this[4]._padding_ = 0;
    *(FCulture **)&this[4]._padding_ = pFVar12;
    *(TReferenceControllerBase<1> **)&this[4].Mutex = pTVar1;
    if ((param_2 != (FNumberFormattingOptions *)0x0) &&
       (pFVar11 = (FNumberFormattingOptions *)(this + 3), param_2 != pFVar11)) {
      bVar7 = param_2->UseGrouping;
      bVar4 = param_2->IndicateNearlyInteger;
      uVar5 = param_2->field_0x3;
      EVar6 = param_2->RoundingMode;
      uVar3._0_4_ = param_2->MinimumIntegralDigits;
      uVar3._4_4_ = param_2->MaximumIntegralDigits;
      pFVar11->AlwaysSign = param_2->AlwaysSign;
      pFVar11->UseGrouping = bVar7;
      pFVar11->IndicateNearlyInteger = bVar4;
      pFVar11->field_0x3 = uVar5;
      pFVar11->RoundingMode = EVar6;
      this[3]._padding_ = (undefined4)uVar3;
      this[3].GlobalRevision = (short)((ulonglong)uVar3 >> 0x20);
      this[3].LocalRevision = (short)((ulonglong)uVar3 >> 0x30);
      *(undefined8 *)&this[3].Mutex = *(undefined8 *)&param_2->MinimumFractionalDigits;
      *(undefined1 *)&this[4]._padding_ = 1;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    this->_padding_ = (longlong)&___7FTextHistory_AsNumber__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    LOCK();
    this->_padding_ = this->_padding_ + 1;
    UNLOCK();
    pFVar13 = this;
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)pFVar13;
  __return_storage_ptr__->Flags = 1;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// AsNumberTemplate<float,float> @ 141726da0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FText::AsNumberTemplate<float,float>
          (FText *__return_storage_ptr__,float param_1,FNumberFormattingOptions *param_2,
          TSharedPtr<FCulture,1> *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 uVar5;
  ERoundingMode EVar6;
  bool bVar7;
  FInternationalization *pFVar8;
  FText *pFVar9;
  FDecimalNumberFormattingRules *pFVar10;
  FTextHistory *this;
  FNumberFormattingOptions *pFVar11;
  FCulture *pFVar12;
  FTextHistory *pFVar13;
  FString local_88;
  FNumberFormattingOptions local_78;
  undefined8 local_50;
  undefined4 uStack_4c;
  
  pFVar13 = (FTextHistory *)0x0;
  pFVar8 = FInternationalization::Get();
  if ((pFVar8->bIsInitialized != true) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("I18N.IsInitialized() == true",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\Text.cpp"
                         ,0x25c,
                         L"FInternationalization is not initialized. An FText formatting method was likely used in static object initialization - this is not supported."
                        ), bVar7)) {
    pcVar2 = (code *)swi(3);
    pFVar9 = (FText *)(*pcVar2)();
    return pFVar9;
  }
  pFVar12 = param_3->Object;
  if (pFVar12 == (FCulture *)0x0) {
    if (((pFVar8->CurrentLocale).Object == (FCulture *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FText *)(*pcVar2)();
      return pFVar9;
    }
    pFVar12 = (pFVar8->CurrentLocale).Object;
    pTVar1 = (pFVar8->CurrentLocale).SharedReferenceCount.ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar12 == (FCulture *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FText *)(*pcVar2)();
      return pFVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  pFVar10 = FCulture::GetDecimalNumberFormattingRules(pFVar12);
  pFVar11 = param_2;
  if (param_2 == (FNumberFormattingOptions *)0x0) {
    pFVar11 = &pFVar10->CultureDefaultFormattingOptions;
  }
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  local_78.AlwaysSign = pFVar11->AlwaysSign;
  local_78.UseGrouping = pFVar11->UseGrouping;
  local_78.IndicateNearlyInteger = pFVar11->IndicateNearlyInteger;
  local_78._3_1_ = pFVar11->field_0x3;
  local_78.RoundingMode = pFVar11->RoundingMode;
  local_78.MinimumIntegralDigits = pFVar11->MinimumIntegralDigits;
  local_78.MaximumIntegralDigits = pFVar11->MaximumIntegralDigits;
  local_78.MinimumFractionalDigits = pFVar11->MinimumFractionalDigits;
  local_78.MaximumFractionalDigits = pFVar11->MaximumFractionalDigits;
  FastDecimalFormat::Internal::FractionalToString((double)param_1,pFVar10,&local_78,&local_88);
  this = ::operator_new(0x78);
  if (this != (FTextHistory *)0x0) {
    pTVar1 = (param_3->SharedReferenceCount).ReferenceController;
    pFVar12 = param_3->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    this->_padding_ = 0;
    this->GlobalRevision = 0;
    this->LocalRevision = 0;
    (this->Mutex).State = (atomic<unsigned_char>)0x0;
    this->_padding_ = (longlong)&___7FTextHistory_Generated__6B_;
    this[1]._padding_ = (longlong)local_88.Data.AllocatorInstance.Data;
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1]._padding_ = local_88.Data.ArrayNum;
    this[1].GlobalRevision = (undefined2)local_88.Data.ArrayMax;
    this[1].LocalRevision = local_88.Data.ArrayMax._2_2_;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
    FTextHistory::MarkDisplayStringUpToDate(this);
    this->_padding_ = (longlong)&___7FTextHistory_FormatNumber__6B_;
    this[2]._padding_ = CONCAT44(uStack_4c,param_1);
    *(undefined4 *)&this[1].Mutex = 2;
    this[2]._padding_ = 0;
    this[2].GlobalRevision = 0;
    this[2].LocalRevision = 0;
    *(undefined4 *)&this[2].Mutex = 0;
    *(FCulture **)&this[4]._padding_ = pFVar12;
    *(undefined1 *)&this[4]._padding_ = 0;
    *(TReferenceControllerBase<1> **)&this[4].Mutex = pTVar1;
    if ((param_2 != (FNumberFormattingOptions *)0x0) &&
       (pFVar11 = (FNumberFormattingOptions *)(this + 3), param_2 != pFVar11)) {
      bVar7 = param_2->UseGrouping;
      bVar4 = param_2->IndicateNearlyInteger;
      uVar5 = param_2->field_0x3;
      EVar6 = param_2->RoundingMode;
      uVar3._0_4_ = param_2->MinimumIntegralDigits;
      uVar3._4_4_ = param_2->MaximumIntegralDigits;
      pFVar11->AlwaysSign = param_2->AlwaysSign;
      pFVar11->UseGrouping = bVar7;
      pFVar11->IndicateNearlyInteger = bVar4;
      pFVar11->field_0x3 = uVar5;
      pFVar11->RoundingMode = EVar6;
      this[3]._padding_ = (undefined4)uVar3;
      this[3].GlobalRevision = (short)((ulonglong)uVar3 >> 0x20);
      this[3].LocalRevision = (short)((ulonglong)uVar3 >> 0x30);
      *(undefined8 *)&this[3].Mutex = *(undefined8 *)&param_2->MinimumFractionalDigits;
      *(undefined1 *)&this[4]._padding_ = 1;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    this->_padding_ = (longlong)&___7FTextHistory_AsNumber__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    LOCK();
    this->_padding_ = this->_padding_ + 1;
    UNLOCK();
    pFVar13 = this;
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)pFVar13;
  __return_storage_ptr__->Flags = 1;
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// AsNumberTemplate<double,double> @ 141727020

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FText::AsNumberTemplate<double,double>
          (FText *__return_storage_ptr__,double param_1,FNumberFormattingOptions *param_2,
          TSharedPtr<FCulture,1> *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 uVar5;
  ERoundingMode EVar6;
  bool bVar7;
  FInternationalization *pFVar8;
  FText *pFVar9;
  FDecimalNumberFormattingRules *pFVar10;
  FTextHistory *this;
  FNumberFormattingOptions *pFVar11;
  FCulture *pFVar12;
  FTextHistory *pFVar13;
  FString local_68;
  FNumberFormattingOptions local_58 [2];
  
  pFVar13 = (FTextHistory *)0x0;
  pFVar8 = FInternationalization::Get();
  if ((pFVar8->bIsInitialized != true) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("I18N.IsInitialized() == true",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\Text.cpp"
                         ,0x25c,
                         L"FInternationalization is not initialized. An FText formatting method was likely used in static object initialization - this is not supported."
                        ), bVar7)) {
    pcVar2 = (code *)swi(3);
    pFVar9 = (FText *)(*pcVar2)();
    return pFVar9;
  }
  pFVar12 = param_3->Object;
  if (pFVar12 == (FCulture *)0x0) {
    if (((pFVar8->CurrentLocale).Object == (FCulture *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FText *)(*pcVar2)();
      return pFVar9;
    }
    pFVar12 = (pFVar8->CurrentLocale).Object;
    pTVar1 = (pFVar8->CurrentLocale).SharedReferenceCount.ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar12 == (FCulture *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FText *)(*pcVar2)();
      return pFVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  pFVar10 = FCulture::GetDecimalNumberFormattingRules(pFVar12);
  pFVar11 = param_2;
  if (param_2 == (FNumberFormattingOptions *)0x0) {
    pFVar11 = &pFVar10->CultureDefaultFormattingOptions;
  }
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_58[0].AlwaysSign = pFVar11->AlwaysSign;
  local_58[0].UseGrouping = pFVar11->UseGrouping;
  local_58[0].IndicateNearlyInteger = pFVar11->IndicateNearlyInteger;
  local_58[0]._3_1_ = pFVar11->field_0x3;
  local_58[0].RoundingMode = pFVar11->RoundingMode;
  local_58[0].MinimumIntegralDigits = pFVar11->MinimumIntegralDigits;
  local_58[0].MaximumIntegralDigits = pFVar11->MaximumIntegralDigits;
  local_58[0].MinimumFractionalDigits = pFVar11->MinimumFractionalDigits;
  local_58[0].MaximumFractionalDigits = pFVar11->MaximumFractionalDigits;
  FastDecimalFormat::Internal::FractionalToString(param_1,pFVar10,local_58,&local_68);
  this = ::operator_new(0x78);
  if (this != (FTextHistory *)0x0) {
    pTVar1 = (param_3->SharedReferenceCount).ReferenceController;
    pFVar12 = param_3->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    this->_padding_ = 0;
    this->GlobalRevision = 0;
    this->LocalRevision = 0;
    (this->Mutex).State = (atomic<unsigned_char>)0x0;
    this->_padding_ = (longlong)&___7FTextHistory_Generated__6B_;
    this[1]._padding_ = (longlong)local_68.Data.AllocatorInstance.Data;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1]._padding_ = local_68.Data.ArrayNum;
    this[1].GlobalRevision = (undefined2)local_68.Data.ArrayMax;
    this[1].LocalRevision = local_68.Data.ArrayMax._2_2_;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    FTextHistory::MarkDisplayStringUpToDate(this);
    this->_padding_ = (longlong)&___7FTextHistory_FormatNumber__6B_;
    this[2]._padding_ = (longlong)param_1;
    *(undefined4 *)&this[1].Mutex = 3;
    this[2]._padding_ = 0;
    this[2].GlobalRevision = 0;
    this[2].LocalRevision = 0;
    *(undefined4 *)&this[2].Mutex = 0;
    *(FCulture **)&this[4]._padding_ = pFVar12;
    *(undefined1 *)&this[4]._padding_ = 0;
    *(TReferenceControllerBase<1> **)&this[4].Mutex = pTVar1;
    if ((param_2 != (FNumberFormattingOptions *)0x0) &&
       (pFVar11 = (FNumberFormattingOptions *)(this + 3), param_2 != pFVar11)) {
      bVar7 = param_2->UseGrouping;
      bVar4 = param_2->IndicateNearlyInteger;
      uVar5 = param_2->field_0x3;
      EVar6 = param_2->RoundingMode;
      uVar3._0_4_ = param_2->MinimumIntegralDigits;
      uVar3._4_4_ = param_2->MaximumIntegralDigits;
      pFVar11->AlwaysSign = param_2->AlwaysSign;
      pFVar11->UseGrouping = bVar7;
      pFVar11->IndicateNearlyInteger = bVar4;
      pFVar11->field_0x3 = uVar5;
      pFVar11->RoundingMode = EVar6;
      this[3]._padding_ = (undefined4)uVar3;
      this[3].GlobalRevision = (short)((ulonglong)uVar3 >> 0x20);
      this[3].LocalRevision = (short)((ulonglong)uVar3 >> 0x30);
      *(undefined8 *)&this[3].Mutex = *(undefined8 *)&param_2->MinimumFractionalDigits;
      *(undefined1 *)&this[4]._padding_ = 1;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    this->_padding_ = (longlong)&___7FTextHistory_AsNumber__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    LOCK();
    this->_padding_ = this->_padding_ + 1;
    UNLOCK();
    pFVar13 = this;
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)pFVar13;
  __return_storage_ptr__->Flags = 1;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// AsNumberTemplate<__int64,__int64> @ 141727280

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FText::AsNumberTemplate<__int64,__int64>
          (FText *__return_storage_ptr__,long64 param_1,FNumberFormattingOptions *param_2,
          TSharedPtr<FCulture,1> *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 uVar5;
  ERoundingMode EVar6;
  bool bVar7;
  FInternationalization *pFVar8;
  FText *pFVar9;
  FDecimalNumberFormattingRules *pFVar10;
  FTextHistory *this;
  FNumberFormattingOptions *pFVar11;
  ulong64 uVar12;
  FCulture *pFVar13;
  FTextHistory *pFVar14;
  FString local_58;
  FNumberFormattingOptions local_48;
  
  pFVar14 = (FTextHistory *)0x0;
  pFVar8 = FInternationalization::Get();
  if ((pFVar8->bIsInitialized != true) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("I18N.IsInitialized() == true",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\Text.cpp"
                         ,0x25c,
                         L"FInternationalization is not initialized. An FText formatting method was likely used in static object initialization - this is not supported."
                        ), bVar7)) {
    pcVar2 = (code *)swi(3);
    pFVar9 = (FText *)(*pcVar2)();
    return pFVar9;
  }
  pFVar13 = param_3->Object;
  if (pFVar13 == (FCulture *)0x0) {
    if (((pFVar8->CurrentLocale).Object == (FCulture *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FText *)(*pcVar2)();
      return pFVar9;
    }
    pFVar13 = (pFVar8->CurrentLocale).Object;
    pTVar1 = (pFVar8->CurrentLocale).SharedReferenceCount.ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar13 == (FCulture *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FText *)(*pcVar2)();
      return pFVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  pFVar10 = FCulture::GetDecimalNumberFormattingRules(pFVar13);
  pFVar11 = param_2;
  if (param_2 == (FNumberFormattingOptions *)0x0) {
    pFVar11 = &pFVar10->CultureDefaultFormattingOptions;
  }
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_48.AlwaysSign = pFVar11->AlwaysSign;
  local_48.UseGrouping = pFVar11->UseGrouping;
  local_48.IndicateNearlyInteger = pFVar11->IndicateNearlyInteger;
  local_48._3_1_ = pFVar11->field_0x3;
  local_48.RoundingMode = pFVar11->RoundingMode;
  local_48.MinimumIntegralDigits = pFVar11->MinimumIntegralDigits;
  local_48.MaximumIntegralDigits = pFVar11->MaximumIntegralDigits;
  local_48.MinimumFractionalDigits = pFVar11->MinimumFractionalDigits;
  local_48.MaximumFractionalDigits = pFVar11->MaximumFractionalDigits;
  bVar7 = (bool)-(char)(param_1 >> 0x3f);
  uVar12 = -param_1;
  if (bVar7 == false) {
    uVar12 = param_1;
  }
  FastDecimalFormat::Internal::IntegralToString(bVar7,uVar12,pFVar10,&local_48,&local_58);
  this = ::operator_new(0x78);
  if (this != (FTextHistory *)0x0) {
    pTVar1 = (param_3->SharedReferenceCount).ReferenceController;
    pFVar13 = param_3->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    this->_padding_ = 0;
    this->GlobalRevision = 0;
    this->LocalRevision = 0;
    (this->Mutex).State = (atomic<unsigned_char>)0x0;
    this->_padding_ = (longlong)&___7FTextHistory_Generated__6B_;
    this[1]._padding_ = (longlong)local_58.Data.AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1]._padding_ = local_58.Data.ArrayNum;
    this[1].GlobalRevision = (undefined2)local_58.Data.ArrayMax;
    this[1].LocalRevision = local_58.Data.ArrayMax._2_2_;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    FTextHistory::MarkDisplayStringUpToDate(this);
    this->_padding_ = (longlong)&___7FTextHistory_FormatNumber__6B_;
    *(undefined4 *)&this[1].Mutex = 0;
    this[2]._padding_ = param_1;
    this[2]._padding_ = 0;
    this[2].GlobalRevision = 0;
    this[2].LocalRevision = 0;
    *(undefined4 *)&this[2].Mutex = 0;
    *(FCulture **)&this[4]._padding_ = pFVar13;
    *(undefined1 *)&this[4]._padding_ = 0;
    *(TReferenceControllerBase<1> **)&this[4].Mutex = pTVar1;
    if ((param_2 != (FNumberFormattingOptions *)0x0) &&
       (pFVar11 = (FNumberFormattingOptions *)(this + 3), param_2 != pFVar11)) {
      bVar7 = param_2->UseGrouping;
      bVar4 = param_2->IndicateNearlyInteger;
      uVar5 = param_2->field_0x3;
      EVar6 = param_2->RoundingMode;
      uVar3._0_4_ = param_2->MinimumIntegralDigits;
      uVar3._4_4_ = param_2->MaximumIntegralDigits;
      pFVar11->AlwaysSign = param_2->AlwaysSign;
      pFVar11->UseGrouping = bVar7;
      pFVar11->IndicateNearlyInteger = bVar4;
      pFVar11->field_0x3 = uVar5;
      pFVar11->RoundingMode = EVar6;
      this[3]._padding_ = (undefined4)uVar3;
      this[3].GlobalRevision = (short)((ulonglong)uVar3 >> 0x20);
      this[3].LocalRevision = (short)((ulonglong)uVar3 >> 0x30);
      *(undefined8 *)&this[3].Mutex = *(undefined8 *)&param_2->MinimumFractionalDigits;
      *(undefined1 *)&this[4]._padding_ = 1;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    this->_padding_ = (longlong)&___7FTextHistory_AsNumber__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    LOCK();
    this->_padding_ = this->_padding_ + 1;
    UNLOCK();
    pFVar14 = this;
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)pFVar14;
  __return_storage_ptr__->Flags = 1;
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// AsNumberTemplate<unsigned___int64,__int64> @ 1417274f0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FText::AsNumberTemplate<unsigned___int64,__int64>
          (FText *__return_storage_ptr__,ulong64 param_1,FNumberFormattingOptions *param_2,
          TSharedPtr<FCulture,1> *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 uVar5;
  ERoundingMode EVar6;
  bool bVar7;
  FInternationalization *pFVar8;
  FText *pFVar9;
  FDecimalNumberFormattingRules *pFVar10;
  FTextHistory *this;
  FNumberFormattingOptions *pFVar11;
  FCulture *pFVar12;
  FTextHistory *pFVar13;
  FString local_58;
  FNumberFormattingOptions local_48;
  
  pFVar13 = (FTextHistory *)0x0;
  pFVar8 = FInternationalization::Get();
  if ((pFVar8->bIsInitialized != true) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("I18N.IsInitialized() == true",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\Text.cpp"
                         ,0x25c,
                         L"FInternationalization is not initialized. An FText formatting method was likely used in static object initialization - this is not supported."
                        ), bVar7)) {
    pcVar2 = (code *)swi(3);
    pFVar9 = (FText *)(*pcVar2)();
    return pFVar9;
  }
  pFVar12 = param_3->Object;
  if (pFVar12 == (FCulture *)0x0) {
    if (((pFVar8->CurrentLocale).Object == (FCulture *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FText *)(*pcVar2)();
      return pFVar9;
    }
    pFVar12 = (pFVar8->CurrentLocale).Object;
    pTVar1 = (pFVar8->CurrentLocale).SharedReferenceCount.ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar12 == (FCulture *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FText *)(*pcVar2)();
      return pFVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  pFVar10 = FCulture::GetDecimalNumberFormattingRules(pFVar12);
  pFVar11 = param_2;
  if (param_2 == (FNumberFormattingOptions *)0x0) {
    pFVar11 = &pFVar10->CultureDefaultFormattingOptions;
  }
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_48.AlwaysSign = pFVar11->AlwaysSign;
  local_48.UseGrouping = pFVar11->UseGrouping;
  local_48.IndicateNearlyInteger = pFVar11->IndicateNearlyInteger;
  local_48._3_1_ = pFVar11->field_0x3;
  local_48.RoundingMode = pFVar11->RoundingMode;
  local_48.MinimumIntegralDigits = pFVar11->MinimumIntegralDigits;
  local_48.MaximumIntegralDigits = pFVar11->MaximumIntegralDigits;
  local_48.MinimumFractionalDigits = pFVar11->MinimumFractionalDigits;
  local_48.MaximumFractionalDigits = pFVar11->MaximumFractionalDigits;
  FastDecimalFormat::Internal::IntegralToString(false,param_1,pFVar10,&local_48,&local_58);
  this = ::operator_new(0x78);
  if (this != (FTextHistory *)0x0) {
    pTVar1 = (param_3->SharedReferenceCount).ReferenceController;
    pFVar12 = param_3->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    this->_padding_ = 0;
    this->GlobalRevision = 0;
    this->LocalRevision = 0;
    (this->Mutex).State = (atomic<unsigned_char>)0x0;
    this->_padding_ = (longlong)&___7FTextHistory_Generated__6B_;
    this[1]._padding_ = (longlong)local_58.Data.AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1]._padding_ = local_58.Data.ArrayNum;
    this[1].GlobalRevision = (undefined2)local_58.Data.ArrayMax;
    this[1].LocalRevision = local_58.Data.ArrayMax._2_2_;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    FTextHistory::MarkDisplayStringUpToDate(this);
    this->_padding_ = (longlong)&___7FTextHistory_FormatNumber__6B_;
    *(undefined4 *)&this[1].Mutex = 1;
    this[2]._padding_ = param_1;
    this[2]._padding_ = 0;
    this[2].GlobalRevision = 0;
    this[2].LocalRevision = 0;
    *(undefined4 *)&this[2].Mutex = 0;
    *(FCulture **)&this[4]._padding_ = pFVar12;
    *(undefined1 *)&this[4]._padding_ = 0;
    *(TReferenceControllerBase<1> **)&this[4].Mutex = pTVar1;
    if ((param_2 != (FNumberFormattingOptions *)0x0) &&
       (pFVar11 = (FNumberFormattingOptions *)(this + 3), param_2 != pFVar11)) {
      bVar7 = param_2->UseGrouping;
      bVar4 = param_2->IndicateNearlyInteger;
      uVar5 = param_2->field_0x3;
      EVar6 = param_2->RoundingMode;
      uVar3._0_4_ = param_2->MinimumIntegralDigits;
      uVar3._4_4_ = param_2->MaximumIntegralDigits;
      pFVar11->AlwaysSign = param_2->AlwaysSign;
      pFVar11->UseGrouping = bVar7;
      pFVar11->IndicateNearlyInteger = bVar4;
      pFVar11->field_0x3 = uVar5;
      pFVar11->RoundingMode = EVar6;
      this[3]._padding_ = (undefined4)uVar3;
      this[3].GlobalRevision = (short)((ulonglong)uVar3 >> 0x20);
      this[3].LocalRevision = (short)((ulonglong)uVar3 >> 0x30);
      *(undefined8 *)&this[3].Mutex = *(undefined8 *)&param_2->MinimumFractionalDigits;
      *(undefined1 *)&this[4]._padding_ = 1;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    this->_padding_ = (longlong)&___7FTextHistory_AsNumber__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    LOCK();
    this->_padding_ = this->_padding_ + 1;
    UNLOCK();
    pFVar13 = this;
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)pFVar13;
  __return_storage_ptr__->Flags = 1;
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// AsPercentTemplate<float,float> @ 141727760

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FText::AsPercentTemplate<float,float>
          (FText *__return_storage_ptr__,float param_1,FNumberFormattingOptions *param_2,
          TSharedPtr<FCulture,1> *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 uVar5;
  ERoundingMode EVar6;
  bool bVar7;
  FInternationalization *pFVar8;
  FText *pFVar9;
  FDecimalNumberFormattingRules *pFVar10;
  FTextHistory *this;
  FNumberFormattingOptions *pFVar11;
  FCulture *pFVar12;
  FTextHistory *pFVar13;
  FString local_88;
  FNumberFormattingOptions local_78;
  undefined8 local_50;
  undefined4 uStack_4c;
  
  pFVar13 = (FTextHistory *)0x0;
  pFVar8 = FInternationalization::Get();
  if ((pFVar8->bIsInitialized != true) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("I18N.IsInitialized() == true",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\Text.cpp"
                         ,0x2b3,
                         L"FInternationalization is not initialized. An FText formatting method was likely used in static object initialization - this is not supported."
                        ), bVar7)) {
    pcVar2 = (code *)swi(3);
    pFVar9 = (FText *)(*pcVar2)();
    return pFVar9;
  }
  pFVar12 = param_3->Object;
  if (pFVar12 == (FCulture *)0x0) {
    if (((pFVar8->CurrentLocale).Object == (FCulture *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FText *)(*pcVar2)();
      return pFVar9;
    }
    pFVar12 = (pFVar8->CurrentLocale).Object;
    pTVar1 = (pFVar8->CurrentLocale).SharedReferenceCount.ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar12 == (FCulture *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FText *)(*pcVar2)();
      return pFVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  pFVar10 = FCulture::GetPercentFormattingRules(pFVar12);
  pFVar11 = param_2;
  if (param_2 == (FNumberFormattingOptions *)0x0) {
    pFVar11 = &pFVar10->CultureDefaultFormattingOptions;
  }
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  local_78.AlwaysSign = pFVar11->AlwaysSign;
  local_78.UseGrouping = pFVar11->UseGrouping;
  local_78.IndicateNearlyInteger = pFVar11->IndicateNearlyInteger;
  local_78._3_1_ = pFVar11->field_0x3;
  local_78.RoundingMode = pFVar11->RoundingMode;
  local_78.MinimumIntegralDigits = pFVar11->MinimumIntegralDigits;
  local_78.MaximumIntegralDigits = pFVar11->MaximumIntegralDigits;
  local_78.MinimumFractionalDigits = pFVar11->MinimumFractionalDigits;
  local_78.MaximumFractionalDigits = pFVar11->MaximumFractionalDigits;
  FastDecimalFormat::Internal::FractionalToString
            ((double)(param_1 * __real_42c80000),pFVar10,&local_78,&local_88);
  this = ::operator_new(0x78);
  if (this != (FTextHistory *)0x0) {
    pTVar1 = (param_3->SharedReferenceCount).ReferenceController;
    pFVar12 = param_3->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    this->_padding_ = 0;
    this->GlobalRevision = 0;
    this->LocalRevision = 0;
    (this->Mutex).State = (atomic<unsigned_char>)0x0;
    this->_padding_ = (longlong)&___7FTextHistory_Generated__6B_;
    this[1]._padding_ = (longlong)local_88.Data.AllocatorInstance.Data;
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1]._padding_ = local_88.Data.ArrayNum;
    this[1].GlobalRevision = (undefined2)local_88.Data.ArrayMax;
    this[1].LocalRevision = local_88.Data.ArrayMax._2_2_;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
    FTextHistory::MarkDisplayStringUpToDate(this);
    this->_padding_ = (longlong)&___7FTextHistory_FormatNumber__6B_;
    this[2]._padding_ = CONCAT44(uStack_4c,param_1);
    *(undefined4 *)&this[1].Mutex = 2;
    this[2]._padding_ = 0;
    this[2].GlobalRevision = 0;
    this[2].LocalRevision = 0;
    *(undefined4 *)&this[2].Mutex = 0;
    *(FCulture **)&this[4]._padding_ = pFVar12;
    *(undefined1 *)&this[4]._padding_ = 0;
    *(TReferenceControllerBase<1> **)&this[4].Mutex = pTVar1;
    if ((param_2 != (FNumberFormattingOptions *)0x0) &&
       (pFVar11 = (FNumberFormattingOptions *)(this + 3), param_2 != pFVar11)) {
      bVar7 = param_2->UseGrouping;
      bVar4 = param_2->IndicateNearlyInteger;
      uVar5 = param_2->field_0x3;
      EVar6 = param_2->RoundingMode;
      uVar3._0_4_ = param_2->MinimumIntegralDigits;
      uVar3._4_4_ = param_2->MaximumIntegralDigits;
      pFVar11->AlwaysSign = param_2->AlwaysSign;
      pFVar11->UseGrouping = bVar7;
      pFVar11->IndicateNearlyInteger = bVar4;
      pFVar11->field_0x3 = uVar5;
      pFVar11->RoundingMode = EVar6;
      this[3]._padding_ = (undefined4)uVar3;
      this[3].GlobalRevision = (short)((ulonglong)uVar3 >> 0x20);
      this[3].LocalRevision = (short)((ulonglong)uVar3 >> 0x30);
      *(undefined8 *)&this[3].Mutex = *(undefined8 *)&param_2->MinimumFractionalDigits;
      *(undefined1 *)&this[4]._padding_ = 1;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    this->_padding_ = (longlong)&___7FTextHistory_AsPercent__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    LOCK();
    this->_padding_ = this->_padding_ + 1;
    UNLOCK();
    pFVar13 = this;
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)pFVar13;
  __return_storage_ptr__->Flags = 1;
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// AsPercentTemplate<double,double> @ 1417279e0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FText::AsPercentTemplate<double,double>
          (FText *__return_storage_ptr__,double param_1,FNumberFormattingOptions *param_2,
          TSharedPtr<FCulture,1> *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 uVar5;
  ERoundingMode EVar6;
  bool bVar7;
  FInternationalization *pFVar8;
  FText *pFVar9;
  FDecimalNumberFormattingRules *pFVar10;
  FTextHistory *this;
  FNumberFormattingOptions *pFVar11;
  FCulture *pFVar12;
  FTextHistory *pFVar13;
  FString local_68;
  FNumberFormattingOptions local_58 [2];
  
  pFVar13 = (FTextHistory *)0x0;
  pFVar8 = FInternationalization::Get();
  if ((pFVar8->bIsInitialized != true) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("I18N.IsInitialized() == true",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\Text.cpp"
                         ,0x2b3,
                         L"FInternationalization is not initialized. An FText formatting method was likely used in static object initialization - this is not supported."
                        ), bVar7)) {
    pcVar2 = (code *)swi(3);
    pFVar9 = (FText *)(*pcVar2)();
    return pFVar9;
  }
  pFVar12 = param_3->Object;
  if (pFVar12 == (FCulture *)0x0) {
    if (((pFVar8->CurrentLocale).Object == (FCulture *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FText *)(*pcVar2)();
      return pFVar9;
    }
    pFVar12 = (pFVar8->CurrentLocale).Object;
    pTVar1 = (pFVar8->CurrentLocale).SharedReferenceCount.ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar12 == (FCulture *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FText *)(*pcVar2)();
      return pFVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  pFVar10 = FCulture::GetPercentFormattingRules(pFVar12);
  pFVar11 = param_2;
  if (param_2 == (FNumberFormattingOptions *)0x0) {
    pFVar11 = &pFVar10->CultureDefaultFormattingOptions;
  }
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_58[0].AlwaysSign = pFVar11->AlwaysSign;
  local_58[0].UseGrouping = pFVar11->UseGrouping;
  local_58[0].IndicateNearlyInteger = pFVar11->IndicateNearlyInteger;
  local_58[0]._3_1_ = pFVar11->field_0x3;
  local_58[0].RoundingMode = pFVar11->RoundingMode;
  local_58[0].MinimumIntegralDigits = pFVar11->MinimumIntegralDigits;
  local_58[0].MaximumIntegralDigits = pFVar11->MaximumIntegralDigits;
  local_58[0].MinimumFractionalDigits = pFVar11->MinimumFractionalDigits;
  local_58[0].MaximumFractionalDigits = pFVar11->MaximumFractionalDigits;
  FastDecimalFormat::Internal::FractionalToString
            (param_1 * __real_4059000000000000,pFVar10,local_58,&local_68);
  this = ::operator_new(0x78);
  if (this != (FTextHistory *)0x0) {
    pTVar1 = (param_3->SharedReferenceCount).ReferenceController;
    pFVar12 = param_3->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    this->_padding_ = 0;
    this->GlobalRevision = 0;
    this->LocalRevision = 0;
    (this->Mutex).State = (atomic<unsigned_char>)0x0;
    this->_padding_ = (longlong)&___7FTextHistory_Generated__6B_;
    this[1]._padding_ = (longlong)local_68.Data.AllocatorInstance.Data;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1]._padding_ = local_68.Data.ArrayNum;
    this[1].GlobalRevision = (undefined2)local_68.Data.ArrayMax;
    this[1].LocalRevision = local_68.Data.ArrayMax._2_2_;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    FTextHistory::MarkDisplayStringUpToDate(this);
    this->_padding_ = (longlong)&___7FTextHistory_FormatNumber__6B_;
    this[2]._padding_ = (longlong)param_1;
    *(undefined4 *)&this[1].Mutex = 3;
    this[2]._padding_ = 0;
    this[2].GlobalRevision = 0;
    this[2].LocalRevision = 0;
    *(undefined4 *)&this[2].Mutex = 0;
    *(FCulture **)&this[4]._padding_ = pFVar12;
    *(undefined1 *)&this[4]._padding_ = 0;
    *(TReferenceControllerBase<1> **)&this[4].Mutex = pTVar1;
    if ((param_2 != (FNumberFormattingOptions *)0x0) &&
       (pFVar11 = (FNumberFormattingOptions *)(this + 3), param_2 != pFVar11)) {
      bVar7 = param_2->UseGrouping;
      bVar4 = param_2->IndicateNearlyInteger;
      uVar5 = param_2->field_0x3;
      EVar6 = param_2->RoundingMode;
      uVar3._0_4_ = param_2->MinimumIntegralDigits;
      uVar3._4_4_ = param_2->MaximumIntegralDigits;
      pFVar11->AlwaysSign = param_2->AlwaysSign;
      pFVar11->UseGrouping = bVar7;
      pFVar11->IndicateNearlyInteger = bVar4;
      pFVar11->field_0x3 = uVar5;
      pFVar11->RoundingMode = EVar6;
      this[3]._padding_ = (undefined4)uVar3;
      this[3].GlobalRevision = (short)((ulonglong)uVar3 >> 0x20);
      this[3].LocalRevision = (short)((ulonglong)uVar3 >> 0x30);
      *(undefined8 *)&this[3].Mutex = *(undefined8 *)&param_2->MinimumFractionalDigits;
      *(undefined1 *)&this[4]._padding_ = 1;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    this->_padding_ = (longlong)&___7FTextHistory_AsPercent__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    LOCK();
    this->_padding_ = this->_padding_ + 1;
    UNLOCK();
    pFVar13 = this;
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)pFVar13;
  __return_storage_ptr__->Flags = 1;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// <lambda_1> @ 1417330e0

<lambda_1> * __thiscall
`FText::AutoRTFMAssignFromOpenToClosed'::__l2::<lambda_1>::<lambda_1>
          (void *this,FText *param_1,FText *param_2)

{
  *(FText **)this = param_1;
  *(FText **)((longlong)this + 8) = param_2;
  return this;
}

// FText @ 141735000

FText * __thiscall FText::FText(FText *this,FString *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  
  pIVar1 = ::operator_new(0x38);
  pIVar2 = (ITextData *)0x0;
  if (pIVar1 != (ITextData *)0x0) {
    pIVar1[1] = (ITextData)0x0;
    *pIVar1 = (ITextData)&___7FTextHistory_Base__6B_;
    *(undefined1 *)(pIVar1 + 2) = 0;
    pIVar1[3] = (ITextData)0xffffffffffffffff;
    pIVar1[4] = (ITextData)0x0;
    pIVar1[4] = (ITextData)(param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pIVar1 + 5) = (param_1->Data).ArrayNum;
    *(int *)&pIVar1[5].field_0x4 = (param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
    pIVar1[6] = (ITextData)0x0;
    LOCK();
    *(int *)(pIVar1 + 1) = *(int *)(pIVar1 + 1) + 1;
    UNLOCK();
    pIVar2 = pIVar1;
  }
  (this->TextData).Reference = pIVar2;
  this->Flags = 0;
  return this;
}

// FText @ 141735090

FText * __thiscall
FText::FText(FText *this,FString *param_1,FTextKey *param_2,FTextKey *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  ITextData IVar3;
  ITextData *pIVar4;
  ITextData *pIVar5;
  
  iVar1 = param_2->Index;
  iVar2 = param_3->Index;
  pIVar4 = ::operator_new(0x38);
  pIVar5 = (ITextData *)0x0;
  if (pIVar4 != (ITextData *)0x0) {
    pIVar4[1] = (ITextData)0x0;
    *pIVar4 = (ITextData)&___7FTextHistory_Base__6B_;
    IVar3._4_4_ = iVar2;
    IVar3._0_4_ = iVar1;
    *(undefined1 *)(pIVar4 + 2) = 0;
    pIVar4[3] = IVar3;
    pIVar4[4] = (ITextData)0x0;
    pIVar4[4] = (ITextData)(param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pIVar4 + 5) = (param_1->Data).ArrayNum;
    *(int *)&pIVar4[5].field_0x4 = (param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
    pIVar4[6] = (ITextData)0x0;
    LOCK();
    *(int *)(pIVar4 + 1) = *(int *)(pIVar4 + 1) + 1;
    UNLOCK();
    pIVar5 = pIVar4;
  }
  (this->TextData).Reference = pIVar5;
  this->Flags = param_4;
  return this;
}

// FText @ 141735130

FText * __thiscall
FText::FText(FText *this,FName param_1,FTextKey *param_2,EStringTableLoadingPolicy param_3)

{
  FTextHistory_StringTableEntry *pFVar1;
  FTextHistory_StringTableEntry *pFVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 == (FTextHistory_StringTableEntry *)0x0) {
    pFVar1 = (FTextHistory_StringTableEntry *)0x0;
  }
  else {
    pFVar2 = FTextHistory_StringTableEntry::FTextHistory_StringTableEntry
                       (pFVar1,param_1,param_2,param_3);
    pFVar1 = (FTextHistory_StringTableEntry *)0x0;
    if (pFVar2 != (FTextHistory_StringTableEntry *)0x0) {
      LOCK();
      *(int *)&pFVar2->_padding_ = (int)pFVar2->_padding_ + 1;
      UNLOCK();
      pFVar1 = pFVar2;
    }
  }
  (this->TextData).Reference = (ITextData *)pFVar1;
  this->Flags = 0;
  return this;
}

// FText @ 1417351b0

FText * __thiscall FText::FText(FText *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FText *pFVar3;
  undefined1 local_res8 [8];
  
  (this->TextData).Reference = (ITextData *)0x0;
  (this->TextData).Reference = (param_1->TextData).Reference;
  (param_1->TextData).Reference = (ITextData *)0x0;
  this->Flags = param_1->Flags;
  pFVar3 = GetEmpty();
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (pFVar3->TextData).Reference;
  if (pIVar1 != pIVar2) {
    (param_1->TextData).Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  param_1->Flags = 0;
  return this;
}

// FText @ 141735230

FText * __thiscall FText::FText(FText *this)

{
  ITextData *pIVar1;
  FText *pFVar2;
  undefined1 local_res8 [32];
  
  pFVar2 = GetEmpty();
  (this->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar2->TextData).Reference;
  (this->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  this->Flags = 0;
  return this;
}

// operator= @ 141739f50

FText * __thiscall FText::operator=(FText *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FText *pFVar3;
  undefined1 local_res8 [8];
  
  if (this != param_1) {
    pIVar1 = (this->TextData).Reference;
    (this->TextData).Reference = (param_1->TextData).Reference;
    (param_1->TextData).Reference = (ITextData *)0x0;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
    this->Flags = param_1->Flags;
    pFVar3 = GetEmpty();
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (pFVar3->TextData).Reference;
    if (pIVar1 != pIVar2) {
      (param_1->TextData).Reference = pIVar2;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
      }
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
      }
    }
    param_1->Flags = 0;
  }
  return this;
}

// operator= @ 141739fe0

FText * __thiscall FText::operator=(FText *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->TextData).Reference;
  if (pIVar2 != pIVar1) {
    (this->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  this->Flags = param_1->Flags;
  return this;
}

// AsCultureInvariant @ 141745880

FText * __cdecl FText::AsCultureInvariant(FText *__return_storage_ptr__,FString *param_1)

{
  bool bVar1;
  bool bVar2;
  FText *pFVar3;
  ITextData *pIVar4;
  ITextData *pIVar5;
  uint uVar6;
  ITextData local_res8;
  ITextData *local_28;
  
  pIVar5 = (ITextData *)0x0;
  uVar6 = 0;
  local_res8 = (ITextData)((ulonglong)local_res8 & 0xffffffff00000000);
  if ((param_1->Data).ArrayNum < 2) {
    pFVar3 = GetEmpty();
    pIVar5 = (pFVar3->TextData).Reference;
    if (pIVar5 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar5 + 8))(pIVar5,&local_res8);
    }
    uVar6 = pFVar3->Flags;
    bVar2 = true;
    bVar1 = false;
    pIVar4 = pIVar5;
  }
  else {
    local_res8 = (ITextData)0xffffffffffffffff;
    pIVar4 = ::operator_new(0x38);
    if (pIVar4 != (ITextData *)0x0) {
      pIVar4[1] = (ITextData)0x0;
      *(undefined1 *)(pIVar4 + 2) = 0;
      *pIVar4 = (ITextData)&___7FTextHistory_Base__6B_;
      pIVar4[3] = local_res8;
      pIVar4[4] = (ITextData)0x0;
      pIVar4[4] = (ITextData)(param_1->Data).AllocatorInstance.Data;
      (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pIVar4 + 5) = (param_1->Data).ArrayNum;
      *(int *)&pIVar4[5].field_0x4 = (param_1->Data).ArrayMax;
      (param_1->Data).ArrayNum = 0;
      (param_1->Data).ArrayMax = 0;
      pIVar4[6] = (ITextData)0x0;
      LOCK();
      *(int *)(pIVar4 + 1) = *(int *)(pIVar4 + 1) + 1;
      UNLOCK();
      pIVar5 = pIVar4;
    }
    bVar2 = false;
    bVar1 = true;
    pIVar4 = local_28;
    local_28 = pIVar5;
  }
  (__return_storage_ptr__->TextData).Reference = pIVar5;
  if (pIVar5 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar5 + 8))(pIVar5,&local_res8);
  }
  __return_storage_ptr__->Flags = uVar6;
  if ((bVar1) && (local_28 != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_28 + 0x10))(local_28);
  }
  if ((bVar2) && (pIVar4 != (ITextData *)0x0)) {
    (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
  }
  __return_storage_ptr__->Flags = __return_storage_ptr__->Flags | 2;
  return __return_storage_ptr__;
}

// AsCultureInvariant @ 1417459b0

FText * __cdecl FText::AsCultureInvariant(FText *__return_storage_ptr__,char *param_1)

{
  size_t sVar1;
  TStringView<char> local_18;
  
  local_18.Size = 0;
  local_18.DataPtr = param_1;
  if (param_1 != (char *)0x0) {
    sVar1 = strlen(param_1);
    local_18.Size = (int)sVar1;
  }
  AsCultureInvariant(__return_storage_ptr__,&local_18);
  return __return_storage_ptr__;
}

// AsCultureInvariant @ 141745a00

FText * __cdecl FText::AsCultureInvariant(FText *__return_storage_ptr__,uchar *param_1)

{
  size_t sVar1;
  TStringView<char8_t> local_18;
  
  local_18.Size = 0;
  local_18.DataPtr = param_1;
  if (param_1 != (uchar *)0x0) {
    sVar1 = strlen((char *)param_1);
    local_18.Size = (int)sVar1;
  }
  AsCultureInvariant(__return_storage_ptr__,&local_18);
  return __return_storage_ptr__;
}

// AsCultureInvariant @ 141745a50

FText * __cdecl FText::AsCultureInvariant(FText *__return_storage_ptr__,wchar_t *param_1)

{
  size_t sVar1;
  TStringView<wchar_t> local_18;
  
  local_18.Size = 0;
  local_18.DataPtr = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar1 = wcslen(param_1);
    local_18.Size = (int)sVar1;
  }
  AsCultureInvariant(__return_storage_ptr__,&local_18);
  return __return_storage_ptr__;
}

// AsCultureInvariant @ 141745aa0

FText * __cdecl FText::AsCultureInvariant(FText *__return_storage_ptr__,FText *param_1)

{
  ITextData *pIVar1;
  
  FText(__return_storage_ptr__,param_1);
  __return_storage_ptr__->Flags = __return_storage_ptr__->Flags | 2;
  pIVar1 = (param_1->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return __return_storage_ptr__;
}

// AsCultureInvariant @ 141745ae0

FText * __cdecl FText::AsCultureInvariant(FText *__return_storage_ptr__,TStringView<char> *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  FText *pFVar4;
  FString *pFVar5;
  ITextData IVar6;
  ITextData IVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  ITextData IVar10;
  uint uVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  ForAnyElementType FVar14;
  ITextData local_res8;
  FString local_38;
  FString local_28;
  
  IVar10 = (ITextData)0x0;
  uVar9 = 0;
  local_res8 = (ITextData)((ulonglong)local_res8 & 0xffffffff00000000);
  if (param_1->Size == 0) {
    pFVar4 = GetEmpty();
    IVar7 = (ITextData)(pFVar4->TextData).Reference;
    if (IVar7 != (ITextData)0x0) {
      (**(code **)((longlong)*(ITextData *)IVar7 + 8))(IVar7,&local_res8);
    }
    uVar9 = pFVar4->Flags;
    bVar3 = true;
    bVar2 = false;
    bVar1 = false;
    FVar8.Data = local_38.Data.AllocatorInstance.Data;
    FVar12.Data = (FScriptContainerElement *)IVar7;
    FVar14.Data = local_28.Data.AllocatorInstance.Data;
  }
  else {
    pFVar5 = ::FString::ConstructFromPtrSize
                       (&local_28,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
    FVar8.Data = (FScriptContainerElement *)IVar10;
    uVar11 = uVar9;
    uVar13 = uVar9;
    if (&local_38 != pFVar5) {
      FVar8.Data = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar11 = (pFVar5->Data).ArrayNum;
      uVar13 = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if ((ITextData)local_28.Data.AllocatorInstance.Data != (ITextData)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    local_res8 = (ITextData)0xffffffffffffffff;
    IVar6 = (ITextData)::operator_new(0x38);
    IVar7 = IVar10;
    if (IVar6 != (ITextData)0x0) {
      *(ITextData *)((longlong)IVar6 + 8) = (ITextData)0x0;
      *(undefined1 *)((longlong)IVar6 + 0x10) = 0;
      *(undefined ***)IVar6 = &___7FTextHistory_Base__6B_;
      *(ITextData *)((longlong)IVar6 + 0x18) = local_res8;
      *(FScriptContainerElement **)((longlong)IVar6 + 0x20) = FVar8.Data;
      *(uint *)((longlong)IVar6 + 0x28) = uVar11;
      *(uint *)((longlong)IVar6 + 0x2c) = uVar13;
      *(ITextData *)((longlong)IVar6 + 0x30) = (ITextData)0x0;
      LOCK();
      *(int *)((longlong)IVar6 + 8) = *(int *)((longlong)IVar6 + 8) + 1;
      UNLOCK();
      IVar7 = IVar6;
      FVar8.Data = (FScriptContainerElement *)IVar10;
    }
    bVar3 = false;
    bVar2 = true;
    bVar1 = true;
    FVar12.Data = local_28.Data.AllocatorInstance.Data;
    FVar14.Data = (FScriptContainerElement *)IVar7;
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)IVar7;
  if (IVar7 != (ITextData)0x0) {
    (**(code **)((longlong)*(ITextData *)IVar7 + 8))(IVar7,&local_res8);
  }
  __return_storage_ptr__->Flags = uVar9;
  if ((bVar1) && ((ITextData)FVar14.Data != (ITextData)0x0)) {
    (**(code **)((longlong)*(ITextData *)FVar14.Data + 0x10))(FVar14.Data);
  }
  if ((bVar2) && ((ITextData)FVar8.Data != (ITextData)0x0)) {
    FMemory::Free(FVar8.Data);
  }
  if ((bVar3) && ((ITextData)FVar12.Data != (ITextData)0x0)) {
    (**(code **)((longlong)*(ITextData *)FVar12.Data + 0x10))(FVar12.Data);
  }
  __return_storage_ptr__->Flags = __return_storage_ptr__->Flags | 2;
  return __return_storage_ptr__;
}

// AsCultureInvariant @ 141745c70

FText * __cdecl
FText::AsCultureInvariant(FText *__return_storage_ptr__,TStringView<char8_t> *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  FText *pFVar4;
  FString *pFVar5;
  ITextData IVar6;
  ITextData IVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  ITextData IVar10;
  uint uVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  ForAnyElementType FVar14;
  ITextData local_res8;
  FString local_38;
  FString local_28;
  
  IVar10 = (ITextData)0x0;
  uVar9 = 0;
  local_res8 = (ITextData)((ulonglong)local_res8 & 0xffffffff00000000);
  if (param_1->Size == 0) {
    pFVar4 = GetEmpty();
    IVar7 = (ITextData)(pFVar4->TextData).Reference;
    if (IVar7 != (ITextData)0x0) {
      (**(code **)((longlong)*(ITextData *)IVar7 + 8))(IVar7,&local_res8);
    }
    uVar9 = pFVar4->Flags;
    bVar3 = true;
    bVar2 = false;
    bVar1 = false;
    FVar8.Data = local_38.Data.AllocatorInstance.Data;
    FVar12.Data = (FScriptContainerElement *)IVar7;
    FVar14.Data = local_28.Data.AllocatorInstance.Data;
  }
  else {
    pFVar5 = ::FString::ConstructFromPtrSize
                       (&local_28,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
    FVar8.Data = (FScriptContainerElement *)IVar10;
    uVar11 = uVar9;
    uVar13 = uVar9;
    if (&local_38 != pFVar5) {
      FVar8.Data = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar11 = (pFVar5->Data).ArrayNum;
      uVar13 = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if ((ITextData)local_28.Data.AllocatorInstance.Data != (ITextData)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    local_res8 = (ITextData)0xffffffffffffffff;
    IVar6 = (ITextData)::operator_new(0x38);
    IVar7 = IVar10;
    if (IVar6 != (ITextData)0x0) {
      *(ITextData *)((longlong)IVar6 + 8) = (ITextData)0x0;
      *(undefined1 *)((longlong)IVar6 + 0x10) = 0;
      *(undefined ***)IVar6 = &___7FTextHistory_Base__6B_;
      *(ITextData *)((longlong)IVar6 + 0x18) = local_res8;
      *(FScriptContainerElement **)((longlong)IVar6 + 0x20) = FVar8.Data;
      *(uint *)((longlong)IVar6 + 0x28) = uVar11;
      *(uint *)((longlong)IVar6 + 0x2c) = uVar13;
      *(ITextData *)((longlong)IVar6 + 0x30) = (ITextData)0x0;
      LOCK();
      *(int *)((longlong)IVar6 + 8) = *(int *)((longlong)IVar6 + 8) + 1;
      UNLOCK();
      IVar7 = IVar6;
      FVar8.Data = (FScriptContainerElement *)IVar10;
    }
    bVar3 = false;
    bVar2 = true;
    bVar1 = true;
    FVar12.Data = local_28.Data.AllocatorInstance.Data;
    FVar14.Data = (FScriptContainerElement *)IVar7;
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)IVar7;
  if (IVar7 != (ITextData)0x0) {
    (**(code **)((longlong)*(ITextData *)IVar7 + 8))(IVar7,&local_res8);
  }
  __return_storage_ptr__->Flags = uVar9;
  if ((bVar1) && ((ITextData)FVar14.Data != (ITextData)0x0)) {
    (**(code **)((longlong)*(ITextData *)FVar14.Data + 0x10))(FVar14.Data);
  }
  if ((bVar2) && ((ITextData)FVar8.Data != (ITextData)0x0)) {
    FMemory::Free(FVar8.Data);
  }
  if ((bVar3) && ((ITextData)FVar12.Data != (ITextData)0x0)) {
    (**(code **)((longlong)*(ITextData *)FVar12.Data + 0x10))(FVar12.Data);
  }
  __return_storage_ptr__->Flags = __return_storage_ptr__->Flags | 2;
  return __return_storage_ptr__;
}

// AsCultureInvariant @ 141745e00

FText * __cdecl
FText::AsCultureInvariant(FText *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  FText *pFVar4;
  FString *pFVar5;
  ITextData IVar6;
  ITextData IVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  ITextData IVar10;
  uint uVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  ForAnyElementType FVar14;
  ITextData local_res8;
  FString local_38;
  FString local_28;
  
  IVar10 = (ITextData)0x0;
  uVar9 = 0;
  local_res8 = (ITextData)((ulonglong)local_res8 & 0xffffffff00000000);
  if (param_1->Size == 0) {
    pFVar4 = GetEmpty();
    IVar7 = (ITextData)(pFVar4->TextData).Reference;
    if (IVar7 != (ITextData)0x0) {
      (**(code **)((longlong)*(ITextData *)IVar7 + 8))(IVar7,&local_res8);
    }
    uVar9 = pFVar4->Flags;
    bVar3 = true;
    bVar2 = false;
    bVar1 = false;
    FVar8.Data = local_38.Data.AllocatorInstance.Data;
    FVar12.Data = (FScriptContainerElement *)IVar7;
    FVar14.Data = local_28.Data.AllocatorInstance.Data;
  }
  else {
    pFVar5 = ::FString::ConstructFromPtrSize
                       (&local_28,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
    FVar8.Data = (FScriptContainerElement *)IVar10;
    uVar11 = uVar9;
    uVar13 = uVar9;
    if (&local_38 != pFVar5) {
      FVar8.Data = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar11 = (pFVar5->Data).ArrayNum;
      uVar13 = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if ((ITextData)local_28.Data.AllocatorInstance.Data != (ITextData)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    local_res8 = (ITextData)0xffffffffffffffff;
    IVar6 = (ITextData)::operator_new(0x38);
    IVar7 = IVar10;
    if (IVar6 != (ITextData)0x0) {
      *(ITextData *)((longlong)IVar6 + 8) = (ITextData)0x0;
      *(undefined1 *)((longlong)IVar6 + 0x10) = 0;
      *(undefined ***)IVar6 = &___7FTextHistory_Base__6B_;
      *(ITextData *)((longlong)IVar6 + 0x18) = local_res8;
      *(FScriptContainerElement **)((longlong)IVar6 + 0x20) = FVar8.Data;
      *(uint *)((longlong)IVar6 + 0x28) = uVar11;
      *(uint *)((longlong)IVar6 + 0x2c) = uVar13;
      *(ITextData *)((longlong)IVar6 + 0x30) = (ITextData)0x0;
      LOCK();
      *(int *)((longlong)IVar6 + 8) = *(int *)((longlong)IVar6 + 8) + 1;
      UNLOCK();
      IVar7 = IVar6;
      FVar8.Data = (FScriptContainerElement *)IVar10;
    }
    bVar3 = false;
    bVar2 = true;
    bVar1 = true;
    FVar12.Data = local_28.Data.AllocatorInstance.Data;
    FVar14.Data = (FScriptContainerElement *)IVar7;
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)IVar7;
  if (IVar7 != (ITextData)0x0) {
    (**(code **)((longlong)*(ITextData *)IVar7 + 8))(IVar7,&local_res8);
  }
  __return_storage_ptr__->Flags = uVar9;
  if ((bVar1) && ((ITextData)FVar14.Data != (ITextData)0x0)) {
    (**(code **)((longlong)*(ITextData *)FVar14.Data + 0x10))(FVar14.Data);
  }
  if ((bVar2) && ((ITextData)FVar8.Data != (ITextData)0x0)) {
    FMemory::Free(FVar8.Data);
  }
  if ((bVar3) && ((ITextData)FVar12.Data != (ITextData)0x0)) {
    (**(code **)((longlong)*(ITextData *)FVar12.Data + 0x10))(FVar12.Data);
  }
  __return_storage_ptr__->Flags = __return_storage_ptr__->Flags | 2;
  return __return_storage_ptr__;
}

// AsCurrency @ 141745f90

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FText::AsCurrency(FText *__return_storage_ptr__,schar param_1,FString *param_2,
                 FNumberFormattingOptions *param_3,TSharedPtr<FCulture,1> *param_4)

{
  AsCurrencyTemplate<signed_char,signed_char>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  return __return_storage_ptr__;
}

// AsCurrency @ 141745fc0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FText::AsCurrency(FText *__return_storage_ptr__,uchar param_1,FString *param_2,
                 FNumberFormattingOptions *param_3,TSharedPtr<FCulture,1> *param_4)

{
  AsCurrencyTemplate<unsigned_char,unsigned_char>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  return __return_storage_ptr__;
}

// AsCurrency @ 141745ff0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FText::AsCurrency(FText *__return_storage_ptr__,short param_1,FString *param_2,
                 FNumberFormattingOptions *param_3,TSharedPtr<FCulture,1> *param_4)

{
  AsCurrencyTemplate<short,short>(__return_storage_ptr__,param_1,param_2,param_3,param_4);
  return __return_storage_ptr__;
}

// AsCurrency @ 141746020

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FText::AsCurrency(FText *__return_storage_ptr__,ushort param_1,FString *param_2,
                 FNumberFormattingOptions *param_3,TSharedPtr<FCulture,1> *param_4)

{
  AsCurrencyTemplate<unsigned_short,unsigned_short>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  return __return_storage_ptr__;
}

// AsCurrency @ 141746050

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FText::AsCurrency(FText *__return_storage_ptr__,int param_1,FString *param_2,
                 FNumberFormattingOptions *param_3,TSharedPtr<FCulture,1> *param_4)

{
  AsCurrencyTemplate<int,int>(__return_storage_ptr__,param_1,param_2,param_3,param_4);
  return __return_storage_ptr__;
}

// AsCurrency @ 141746080

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FText::AsCurrency(FText *__return_storage_ptr__,uint param_1,FString *param_2,
                 FNumberFormattingOptions *param_3,TSharedPtr<FCulture,1> *param_4)

{
  AsCurrencyTemplate<unsigned_int,__int64>(__return_storage_ptr__,param_1,param_2,param_3,param_4);
  return __return_storage_ptr__;
}

// AsCurrency @ 1417460b0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FText::AsCurrency(FText *__return_storage_ptr__,float param_1,FString *param_2,
                 FNumberFormattingOptions *param_3,TSharedPtr<FCulture,1> *param_4)

{
  AsCurrencyTemplate<float,float>(__return_storage_ptr__,param_1,param_2,param_3,param_4);
  return __return_storage_ptr__;
}

// AsCurrency @ 1417460e0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FText::AsCurrency(FText *__return_storage_ptr__,double param_1,FString *param_2,
                 FNumberFormattingOptions *param_3,TSharedPtr<FCulture,1> *param_4)

{
  AsCurrencyTemplate<double,double>(__return_storage_ptr__,param_1,param_2,param_3,param_4);
  return __return_storage_ptr__;
}

// AsCurrency @ 141746110

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FText::AsCurrency(FText *__return_storage_ptr__,long64 param_1,FString *param_2,
                 FNumberFormattingOptions *param_3,TSharedPtr<FCulture,1> *param_4)

{
  AsCurrencyTemplate<__int64,__int64>(__return_storage_ptr__,param_1,param_2,param_3,param_4);
  return __return_storage_ptr__;
}

// AsCurrency @ 141746140

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FText::AsCurrency(FText *__return_storage_ptr__,ulong64 param_1,FString *param_2,
                 FNumberFormattingOptions *param_3,TSharedPtr<FCulture,1> *param_4)

{
  AsCurrencyTemplate<unsigned___int64,__int64>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  return __return_storage_ptr__;
}

// AsCurrencyBase @ 141746170

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FText::AsCurrencyBase
          (FText *__return_storage_ptr__,long64 param_1,FString *param_2,
          TSharedPtr<FCulture,1> *param_3,int param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FInternationalization *pFVar4;
  FText *pFVar5;
  FDecimalNumberFormattingRules *pFVar6;
  ulong64 uVar7;
  FTextHistory_AsCurrency *pFVar8;
  FString *pFVar9;
  FTextHistory_AsCurrency *pFVar10;
  FCulture *this;
  FString local_a8;
  TSharedPtr<FCulture,1> local_98;
  FString local_88;
  FNumberFormattingOptions local_78;
  FFormatArgumentValue local_58;
  
  pFVar4 = FInternationalization::Get();
  if ((pFVar4->bIsInitialized != true) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("I18N.IsInitialized() == true",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\Text.cpp"
                         ,0x293,
                         L"FInternationalization is not initialized. An FText formatting method was likely used in static object initialization - this is not supported."
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FText *)(*pcVar2)();
    return pFVar5;
  }
  this = param_3->Object;
  if (this == (FCulture *)0x0) {
    if (((pFVar4->CurrentLocale).Object == (FCulture *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar2)();
      return pFVar5;
    }
    this = (pFVar4->CurrentLocale).Object;
    pTVar1 = (pFVar4->CurrentLocale).SharedReferenceCount.ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((this == (FCulture *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar2)();
      return pFVar5;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  pFVar6 = FCulture::GetCurrencyFormattingRules(this,param_2);
  if (param_4 < 0) {
    param_4 = (pFVar6->CultureDefaultFormattingOptions).MaximumFractionalDigits;
  }
  uVar7 = FastDecimalFormat::Pow10(param_4);
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  local_78.AlwaysSign = (pFVar6->CultureDefaultFormattingOptions).AlwaysSign;
  local_78.UseGrouping = (pFVar6->CultureDefaultFormattingOptions).UseGrouping;
  local_78.IndicateNearlyInteger = (pFVar6->CultureDefaultFormattingOptions).IndicateNearlyInteger;
  local_78._3_1_ = (pFVar6->CultureDefaultFormattingOptions).field_0x3;
  local_78.RoundingMode = (pFVar6->CultureDefaultFormattingOptions).RoundingMode;
  local_78.MinimumIntegralDigits = (pFVar6->CultureDefaultFormattingOptions).MinimumIntegralDigits;
  local_78.MaximumIntegralDigits = (pFVar6->CultureDefaultFormattingOptions).MaximumIntegralDigits;
  local_78.MinimumFractionalDigits =
       (pFVar6->CultureDefaultFormattingOptions).MinimumFractionalDigits;
  local_78.MaximumFractionalDigits =
       (pFVar6->CultureDefaultFormattingOptions).MaximumFractionalDigits;
  FastDecimalFormat::Internal::FractionalToString
            ((double)param_1 / (double)uVar7,pFVar6,&local_78,&local_a8);
  pFVar8 = ::operator_new(0x88);
  pFVar10 = (FTextHistory_AsCurrency *)0x0;
  if (pFVar8 != (FTextHistory_AsCurrency *)0x0) {
    local_98.Object = param_3->Object;
    local_98.SharedReferenceCount.ReferenceController =
         (param_3->SharedReferenceCount).ReferenceController;
    if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar9 = ::FString::FString(&local_88,param_2);
    local_58.Type = Double;
    local_58.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(ITextData *)0x0;
    local_58.TextValue.field0_0x0.TypedValue.Flags = 0;
    local_58.field1_0x8.DoubleValue = (double)param_1 / (double)uVar7;
    pFVar8 = FTextHistory_AsCurrency::FTextHistory_AsCurrency
                       (pFVar8,&local_a8,&local_58,pFVar9,(FNumberFormattingOptions *)0x0,&local_98)
    ;
    if (pFVar8 != (FTextHistory_AsCurrency *)0x0) {
      LOCK();
      *(int *)&pFVar8->_padding_ = (int)pFVar8->_padding_ + 1;
      UNLOCK();
      pFVar10 = pFVar8;
    }
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)pFVar10;
  __return_storage_ptr__->Flags = 1;
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// AsDate @ 1417463c0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FText::AsDate(FText *__return_storage_ptr__,FDateTime *param_1,Type param_2,FString *param_3,
             TSharedPtr<FCulture,1> *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  long64 lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FInternationalization *pFVar6;
  FText *pFVar7;
  FTextHistory *this;
  FString *pFVar8;
  FCulture *pFVar9;
  FTextHistory *pFVar10;
  FString local_48;
  FString local_38;
  
  pFVar10 = (FTextHistory *)0x0;
  pFVar6 = FInternationalization::Get();
  if ((pFVar6->bIsInitialized != true) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("I18N.IsInitialized() == true",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\Text.cpp"
                         ,0x2c5,
                         L"FInternationalization is not initialized. An FText formatting method was likely used in static object initialization - this is not supported."
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FText *)(*pcVar4)();
    return pFVar7;
  }
  pFVar9 = param_4->Object;
  if (pFVar9 == (FCulture *)0x0) {
    if (((pFVar6->CurrentLocale).Object == (FCulture *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FText *)(*pcVar4)();
      return pFVar7;
    }
    pFVar9 = (pFVar6->CurrentLocale).Object;
    pTVar1 = (pFVar6->CurrentLocale).SharedReferenceCount.ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar9 == (FCulture *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FText *)(*pcVar4)();
      return pFVar7;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  FTextChronoFormatter::AsDate(&local_48,param_1,param_2,param_3,pFVar9);
  this = ::operator_new(0x58);
  if (this != (FTextHistory *)0x0) {
    pFVar9 = param_4->Object;
    pTVar1 = (param_4->SharedReferenceCount).ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar8 = ::FString::FString(&local_38,param_3);
    lVar2 = param_1->Ticks;
    this->_padding_ = 0;
    this->GlobalRevision = 0;
    this->LocalRevision = 0;
    (this->Mutex).State = (atomic<unsigned_char>)0x0;
    this->_padding_ = (longlong)&___7FTextHistory_Generated__6B_;
    this[1]._padding_ = (longlong)local_48.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1]._padding_ = local_48.Data.ArrayNum;
    this[1].GlobalRevision = (undefined2)local_48.Data.ArrayMax;
    this[1].LocalRevision = local_48.Data.ArrayMax._2_2_;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    FTextHistory::MarkDisplayStringUpToDate(this);
    *(Type *)&this[2]._padding_ = param_2;
    this->_padding_ = (longlong)&___7FTextHistory_AsDate__6B_;
    *(long64 *)&this[1].Mutex = lVar2;
    this[2]._padding_ = 0;
    this[2].GlobalRevision = 0;
    this[2].LocalRevision = 0;
    *(FScriptContainerElement **)&this[2]._padding_ = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&this[2].Mutex = (pFVar8->Data).ArrayNum;
    *(int *)&this[2].field_0x14 = (pFVar8->Data).ArrayMax;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
    this[3]._padding_ = (longlong)pFVar9;
    *(TReferenceControllerBase<1> **)&this[3]._padding_ = pTVar1;
    if ((int)this[2]._padding_ == 5) {
      *(undefined4 *)&this[2]._padding_ = 0;
    }
    pFVar3 = (pFVar8->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    LOCK();
    this->_padding_ = this->_padding_ + 1;
    UNLOCK();
    pFVar10 = this;
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)pFVar10;
  __return_storage_ptr__->Flags = 1;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// AsDateTime @ 1417465e0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FText::AsDateTime(FText *__return_storage_ptr__,FDateTime *param_1,FString *param_2,FString *param_3
                 ,TSharedPtr<FCulture,1> *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  long64 lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined2 uVar5;
  bool bVar6;
  FInternationalization *pFVar7;
  FText *pFVar8;
  FTextHistory *this;
  FString *pFVar9;
  FString *pFVar10;
  FCulture *pFVar11;
  FTextHistory *pFVar12;
  FString local_58;
  FString local_48;
  FString local_38;
  
  pFVar12 = (FTextHistory *)0x0;
  pFVar7 = FInternationalization::Get();
  if ((pFVar7->bIsInitialized != true) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("I18N.IsInitialized() == true",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\Text.cpp"
                         ,0x2e3,
                         L"FInternationalization is not initialized. An FText formatting method was likely used in static object initialization - this is not supported."
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FText *)(*pcVar4)();
    return pFVar8;
  }
  pFVar11 = param_4->Object;
  if (pFVar11 == (FCulture *)0x0) {
    if (((pFVar7->CurrentLocale).Object == (FCulture *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FText *)(*pcVar4)();
      return pFVar8;
    }
    pFVar11 = (pFVar7->CurrentLocale).Object;
    pTVar1 = (pFVar7->CurrentLocale).SharedReferenceCount.ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar11 == (FCulture *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FText *)(*pcVar4)();
      return pFVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  FTextChronoFormatter::AsDateTime(&local_58,param_1,param_2,param_3,pFVar11);
  this = ::operator_new(0x68);
  if (this != (FTextHistory *)0x0) {
    pFVar11 = param_4->Object;
    pTVar1 = (param_4->SharedReferenceCount).ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar9 = ::FString::FString(&local_48,param_3);
    pFVar10 = ::FString::FString(&local_38,param_2);
    lVar2 = param_1->Ticks;
    this->_padding_ = 0;
    this->GlobalRevision = 0;
    this->LocalRevision = 0;
    (this->Mutex).State = (atomic<unsigned_char>)0x0;
    this->_padding_ = (longlong)&___7FTextHistory_Generated__6B_;
    this[1]._padding_ = (longlong)local_58.Data.AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1]._padding_ = local_58.Data.ArrayNum;
    this[1].GlobalRevision = (undefined2)local_58.Data.ArrayMax;
    this[1].LocalRevision = local_58.Data.ArrayMax._2_2_;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    FTextHistory::MarkDisplayStringUpToDate(this);
    *(long64 *)&this[1].Mutex = lVar2;
    this->_padding_ = (longlong)&___7FTextHistory_AsDateTime__6B_;
    this[2]._padding_ = 0;
    this[2].GlobalRevision = 0;
    this[2].LocalRevision = 0;
    *(undefined4 *)&this[2]._padding_ = 5;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 5;
    *(FScriptContainerElement **)&this[2]._padding_ = (pFVar10->Data).AllocatorInstance.Data;
    (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&this[2].Mutex = (pFVar10->Data).ArrayNum;
    *(int *)&this[2].field_0x14 = (pFVar10->Data).ArrayMax;
    (pFVar10->Data).ArrayNum = 0;
    (pFVar10->Data).ArrayMax = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = (longlong)(pFVar9->Data).AllocatorInstance.Data;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[3]._padding_ = (pFVar9->Data).ArrayNum;
    uVar5 = *(undefined2 *)((longlong)&(pFVar9->Data).ArrayMax + 2);
    this[3].GlobalRevision = *(undefined2 *)&(pFVar9->Data).ArrayMax;
    this[3].LocalRevision = uVar5;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
    *(FCulture **)&this[3].Mutex = pFVar11;
    this[4]._padding_ = (longlong)pTVar1;
    pFVar3 = (pFVar10->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    pFVar3 = (pFVar9->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    LOCK();
    this->_padding_ = this->_padding_ + 1;
    UNLOCK();
    pFVar12 = this;
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)pFVar12;
  __return_storage_ptr__->Flags = 1;
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// AsDateTime @ 141746850

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FText::AsDateTime(FText *__return_storage_ptr__,FDateTime *param_1,Type param_2,Type param_3,
                 FString *param_4,TSharedPtr<FCulture,1> *param_5)

{
  TReferenceControllerBase<1> *pTVar1;
  long64 lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined2 uVar5;
  bool bVar6;
  FInternationalization *pFVar7;
  FText *pFVar8;
  FTextHistory *this;
  FString *pFVar9;
  FCulture *pFVar10;
  FTextHistory *pFVar11;
  FString local_48;
  FString local_38;
  
  pFVar11 = (FTextHistory *)0x0;
  pFVar7 = FInternationalization::Get();
  if ((pFVar7->bIsInitialized != true) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("I18N.IsInitialized() == true",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\Text.cpp"
                         ,0x2d4,
                         L"FInternationalization is not initialized. An FText formatting method was likely used in static object initialization - this is not supported."
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FText *)(*pcVar4)();
    return pFVar8;
  }
  pFVar10 = param_5->Object;
  if (pFVar10 == (FCulture *)0x0) {
    if (((pFVar7->CurrentLocale).Object == (FCulture *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FText *)(*pcVar4)();
      return pFVar8;
    }
    pFVar10 = (pFVar7->CurrentLocale).Object;
    pTVar1 = (pFVar7->CurrentLocale).SharedReferenceCount.ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar10 == (FCulture *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FText *)(*pcVar4)();
      return pFVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  FTextChronoFormatter::AsDateTime(&local_48,param_1,param_2,param_3,param_4,pFVar10);
  this = ::operator_new(0x68);
  if (this != (FTextHistory *)0x0) {
    pFVar10 = param_5->Object;
    pTVar1 = (param_5->SharedReferenceCount).ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar9 = ::FString::FString(&local_38,param_4);
    lVar2 = param_1->Ticks;
    this->_padding_ = 0;
    this->GlobalRevision = 0;
    this->LocalRevision = 0;
    (this->Mutex).State = (atomic<unsigned_char>)0x0;
    this->_padding_ = (longlong)&___7FTextHistory_Generated__6B_;
    this[1]._padding_ = (longlong)local_48.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1]._padding_ = local_48.Data.ArrayNum;
    this[1].GlobalRevision = (undefined2)local_48.Data.ArrayMax;
    this[1].LocalRevision = local_48.Data.ArrayMax._2_2_;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    FTextHistory::MarkDisplayStringUpToDate(this);
    *(Type *)&this[2]._padding_ = param_2;
    this->_padding_ = (longlong)&___7FTextHistory_AsDateTime__6B_;
    *(long64 *)&this[1].Mutex = lVar2;
    *(Type *)((longlong)&this[2]._padding_ + 4) = param_3;
    this[3]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].GlobalRevision = 0;
    this[2].LocalRevision = 0;
    *(undefined8 *)&this[2].Mutex = 0;
    this[3]._padding_ = (longlong)(pFVar9->Data).AllocatorInstance.Data;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[3]._padding_ = (pFVar9->Data).ArrayNum;
    uVar5 = *(undefined2 *)((longlong)&(pFVar9->Data).ArrayMax + 2);
    this[3].GlobalRevision = *(undefined2 *)&(pFVar9->Data).ArrayMax;
    this[3].LocalRevision = uVar5;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
    *(FCulture **)&this[3].Mutex = pFVar10;
    this[4]._padding_ = (longlong)pTVar1;
    if ((int)this[2]._padding_ == 5) {
      *(undefined4 *)&this[2]._padding_ = 0;
    }
    if (*(int *)((longlong)&this[2]._padding_ + 4) == 5) {
      *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0;
    }
    pFVar3 = (pFVar9->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    LOCK();
    this->_padding_ = this->_padding_ + 1;
    UNLOCK();
    pFVar11 = this;
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)pFVar11;
  __return_storage_ptr__->Flags = 1;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// AsLocalizable_Advanced @ 141746b40

FText * __cdecl
FText::AsLocalizable_Advanced
          (FText *__return_storage_ptr__,FTextKey *param_1,FTextKey *param_2,FString *param_3)

{
  ITextData *pIVar1;
  bool bVar2;
  bool bVar3;
  FText *pFVar4;
  FTextCache *this;
  FText *pFVar5;
  TRefCountPtr<ITextData> TVar6;
  undefined4 local_res8 [2];
  FTextId local_res20;
  FText local_38;
  FText local_28;
  
  local_res8[0] = 0;
  if ((param_3->Data).ArrayNum < 2) {
    pFVar4 = GetEmpty();
    TVar6.Reference = (pFVar4->TextData).Reference;
    local_38.TextData.Reference = TVar6.Reference;
    if (TVar6.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar6.Reference + 8))(TVar6.Reference,local_res8);
    }
    pFVar5 = &local_38;
    local_38.Flags = pFVar4->Flags;
    bVar3 = true;
    bVar2 = false;
  }
  else {
    this = FTextCache::Get();
    local_res20.Namespace = (FTextKey)param_1->Index;
    local_res20.Key = (FTextKey)param_2->Index;
    pFVar5 = FTextCache::FindOrCache(this,&local_28,param_3,&local_res20);
    bVar3 = false;
    bVar2 = true;
    TVar6.Reference = local_38.TextData.Reference;
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar5->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar5->Flags;
  if (bVar2) {
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
  }
  if ((bVar3) && (TVar6.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*TVar6.Reference + 0x10))(TVar6.Reference);
  }
  return __return_storage_ptr__;
}

// AsLocalizable_Advanced @ 141746c50

FText * __cdecl
FText::AsLocalizable_Advanced
          (FText *__return_storage_ptr__,FTextKey *param_1,FTextKey *param_2,wchar_t *param_3)

{
  size_t sVar1;
  TStringView<wchar_t> local_18;
  
  local_18.Size = 0;
  local_18.DataPtr = param_3;
  if (param_3 != (wchar_t *)0x0) {
    sVar1 = wcslen(param_3);
    local_18.Size = (int)sVar1;
  }
  AsLocalizable_Advanced(__return_storage_ptr__,param_1,param_2,&local_18);
  return __return_storage_ptr__;
}

// AsLocalizable_Advanced @ 141746cc0

FText * __cdecl
FText::AsLocalizable_Advanced
          (FText *__return_storage_ptr__,FTextKey *param_1,FTextKey *param_2,
          TStringView<wchar_t> *param_3)

{
  ITextData *pIVar1;
  bool bVar2;
  bool bVar3;
  FText *pFVar4;
  FTextCache *this;
  FText *pFVar5;
  TRefCountPtr<ITextData> TVar6;
  undefined4 local_res8 [2];
  FTextId local_res20;
  FText local_48;
  TStringView<wchar_t> local_38;
  FText local_28;
  
  local_res8[0] = 0;
  if (param_3->Size == 0) {
    pFVar4 = GetEmpty();
    TVar6.Reference = (pFVar4->TextData).Reference;
    local_48.TextData.Reference = TVar6.Reference;
    if (TVar6.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar6.Reference + 8))(TVar6.Reference,local_res8);
    }
    pFVar5 = &local_48;
    local_48.Flags = pFVar4->Flags;
    bVar3 = true;
    bVar2 = false;
  }
  else {
    this = FTextCache::Get();
    local_res20.Namespace = (FTextKey)param_1->Index;
    local_38.DataPtr = param_3->DataPtr;
    local_38.Size = param_3->Size;
    local_38._12_4_ = *(undefined4 *)&param_3->field_0xc;
    local_res20.Key = (FTextKey)param_2->Index;
    pFVar5 = FTextCache::FindOrCache(this,&local_28,&local_38,&local_res20);
    bVar3 = false;
    bVar2 = true;
    TVar6.Reference = local_48.TextData.Reference;
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar5->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar5->Flags;
  if (bVar2) {
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
  }
  if ((bVar3) && (TVar6.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*TVar6.Reference + 0x10))(TVar6.Reference);
  }
  return __return_storage_ptr__;
}

// AsLocalizable_Advanced_LocText @ 141746de0

FText * __cdecl
FText::AsLocalizable_Advanced_LocText
          (FText *__return_storage_ptr__,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  ITextData *pIVar1;
  bool bVar2;
  bool bVar3;
  FTextKey FVar4;
  FTextKey FVar5;
  int iVar6;
  size_t sVar7;
  FTextKeyState *pFVar8;
  ulong64 uVar9;
  FText *pFVar10;
  FTextCache *this;
  TStringView<wchar_t> *pTVar11;
  ITextData *pIVar12;
  int iVar13;
  FTextId local_res8;
  ITextData *local_res20;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  FText local_48;
  
  iVar13 = 0;
  local_res8.Namespace.Index = 0;
  local_res20 = (ITextData *)param_3;
  if (param_3 != (wchar_t *)0x0) {
    sVar7 = wcslen(param_3);
    iVar13 = (int)sVar7;
  }
  iVar6 = 0;
  if (param_2 != (wchar_t *)0x0) {
    sVar7 = wcslen(param_2);
    iVar6 = (int)sVar7;
  }
  local_res8.Namespace.Index = -1;
  local_68._12_4_ = local_48._12_4_;
  local_68.Size = iVar6;
  local_68.DataPtr = param_2;
  if (iVar6 != 0) {
    pFVar8 = FTextKeyState::GetState();
    if (param_2 == (wchar_t *)0x0) {
      iVar6 = 0;
    }
    else {
      if (0 < iVar6) {
        if (param_2[(longlong)iVar6 + -1] == L'\0') {
          iVar6 = iVar6 + -1;
        }
      }
      if (iVar6 == -1) {
        sVar7 = wcslen(param_2);
        iVar6 = (int)sVar7;
      }
    }
    uVar9 = CityHash64((char *)param_2,iVar6 * 2);
    FTextKeyState::FindOrAddImpl
              (pFVar8,&local_68,(int)(uVar9 >> 0x20) * 0x17 + (int)uVar9,&local_res8.Namespace);
  }
  FVar4.Index = local_res8.Namespace.Index;
  iVar6 = 0;
  if (param_1 != (wchar_t *)0x0) {
    sVar7 = wcslen(param_1);
    iVar6 = (int)sVar7;
  }
  local_68._12_4_ = local_48._12_4_;
  local_68.Size = iVar6;
  local_res8.Namespace.Index = -1;
  if (iVar6 != 0) {
    local_68.DataPtr = param_1;
    pFVar8 = FTextKeyState::GetState();
    if (param_1 == (wchar_t *)0x0) {
      iVar6 = 0;
    }
    else {
      if (0 < iVar6) {
        if (param_1[(longlong)iVar6 + -1] == L'\0') {
          iVar6 = iVar6 + -1;
        }
      }
      if (iVar6 == -1) {
        sVar7 = wcslen(param_1);
        iVar6 = (int)sVar7;
      }
    }
    uVar9 = CityHash64((char *)param_1,iVar6 * 2);
    FTextKeyState::FindOrAddImpl
              (pFVar8,&local_68,(int)(uVar9 >> 0x20) * 0x17 + (int)uVar9,&local_res8.Namespace);
  }
  FVar5.Index = local_res8.Namespace.Index;
  local_68.DataPtr = (wchar_t *)local_res20;
  local_68._12_4_ = local_48._12_4_;
  local_68.Size = iVar13;
  if (iVar13 == 0) {
    pFVar10 = GetEmpty();
    pIVar12 = (pFVar10->TextData).Reference;
    local_68.DataPtr = (wchar_t *)pIVar12;
    if (pIVar12 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar12 + 8))(pIVar12,&local_res20);
    }
    pTVar11 = &local_68;
    local_68.Size = pFVar10->Flags;
    bVar3 = true;
    bVar2 = false;
  }
  else {
    this = FTextCache::Get();
    local_58.DataPtr = local_68.DataPtr;
    local_58.Size = local_68.Size;
    local_58._12_4_ = local_68._12_4_;
    local_res8.Namespace.Index = FVar5.Index;
    local_res8.Key.Index = FVar4.Index;
    pTVar11 = (TStringView<wchar_t> *)FTextCache::FindOrCache(this,&local_48,&local_58,&local_res8);
    bVar3 = false;
    bVar2 = true;
    pIVar12 = (ITextData *)local_68.DataPtr;
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = ((TRefCountPtr<ITextData> *)&pTVar11->DataPtr)->Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,&local_res20);
  }
  __return_storage_ptr__->Flags = pTVar11->Size;
  if (bVar2) {
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
  }
  if ((bVar3) && (pIVar12 != (ITextData *)0x0)) {
    (**(code **)((longlong)*pIVar12 + 0x10))(pIVar12);
  }
  return __return_storage_ptr__;
}

// AsMemory @ 141747040

/* WARNING: Removing unreachable block (ram,0x000141747438) */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::AsMemory(FText *__return_storage_ptr__,ulong64 param_1,FNumberFormattingOptions *param_2,
               TSharedPtr<FCulture,1> *param_3,EMemoryUnitStandard param_4)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  int iVar3;
  bool bVar4;
  FInternationalization *pFVar5;
  FText *pFVar6;
  TTuple<FString,FFormatArgumentValue> *pTVar7;
  FString *pFVar8;
  FTextFormat *pFVar9;
  ulonglong uVar10;
  ITextData *pIVar11;
  uint uVar12;
  ITextData *pIVar13;
  undefined1 local_res10 [8];
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_1e8
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_1d8
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_1c8
  ;
  FString local_1b8;
  FString local_1a8;
  FText local_198;
  FText local_188;
  undefined4 local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  FText local_168;
  undefined4 local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  FText local_148;
  FString local_138;
  undefined1 local_128 [8];
  FString local_120;
  FString local_110;
  FString local_100;
  FFormatArgumentValue local_f0;
  FFormatArgumentValue local_d0;
  FText local_b0;
  FString local_a0;
  FText local_90;
  FText local_80;
  FString local_70;
  FText local_60;
  FTextFormat local_50;
  FTextFormat local_40;
  
  pFVar5 = FInternationalization::Get();
  if ((pFVar5->bIsInitialized != true) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("FInternationalization::Get().IsInitialized() == true",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\Text.cpp"
                         ,0x322,
                         L"FInternationalization is not initialized. An FText formatting method was likely used in static object initialization - this is not supported."
                        ), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FText *)(*pcVar1)();
    return pFVar6;
  }
  pIVar11 = (ITextData *)0x0;
  local_1e8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.Pairs.ArrayNum = 0;
  local_1e8.Pairs.ArrayMax = 0;
  ::FString::FString(&local_138,L"iB");
  uVar10 = 0x400;
  pIVar13 = pIVar11;
  if (param_4 == SI) {
    pIVar13 = (ITextData *)&DAT_00000008;
    ::FString::operator=(&local_138,L"B");
    uVar10 = 1000;
  }
  uVar12 = (uint)pIVar13;
  if (param_1 < 1000) {
    AsNumberTemplate<unsigned___int64,__int64>(&local_198,param_1,param_2,param_3);
    local_168.TextData.Reference = local_198.TextData.Reference;
    local_168.Flags = local_198.Flags;
    local_178 = 4;
    local_198.TextData.Reference = (ITextData *)0x0;
    pFVar6 = GetEmpty();
    pIVar13 = (pFVar6->TextData).Reference;
    if (pIVar13 != (ITextData *)0x0) {
      local_198.TextData.Reference = pIVar13;
      (**(code **)((longlong)*pIVar13 + 8))(pIVar13,local_res10);
      pIVar11 = pIVar13;
    }
    local_198.Flags = 0;
    if ((local_168.TextData.Reference == (ITextData *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar4)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FText *)(*pcVar1)();
      return pFVar6;
    }
    ::FString::FString(&local_1b8,L"Number");
    pTVar7 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
             ::AllocateMemoryForEmplace<FString_&>(&local_1e8,&local_1b8);
    *(undefined8 *)pTVar7 = 0;
    *(FScriptContainerElement **)pTVar7 = local_1b8.Data.AllocatorInstance.Data;
    local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&pTVar7->field_0x8 = local_1b8.Data.ArrayNum;
    *(int *)&pTVar7->field_0xc = local_1b8.Data.ArrayMax;
    local_1b8.Data.ArrayNum = 0;
    local_1b8.Data.ArrayMax = 0;
    *(undefined4 *)&pTVar7->field_0x10 = local_178;
    *(ulonglong *)&pTVar7->field_0x18 = CONCAT44(uStack_16c,local_170);
    *(ulonglong *)&pTVar7->field_0x18 = CONCAT44(uStack_16c,local_170);
    *(undefined4 *)&pTVar7->field_0x18 = local_170;
    *(ulonglong *)&pTVar7->field_0x18 = CONCAT44(uStack_16c,local_170);
    *(undefined8 *)&pTVar7->field_0x20 = 0;
    *(undefined4 *)&pTVar7->field_0x28 = 0;
    if (local_168.TextData.Reference != (ITextData *)0x0) {
      FText((FText *)&pTVar7->field_0x20,&local_168);
    }
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    if (local_168.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
    }
    if (pIVar11 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar11 + 0x10))(pIVar11);
    }
    pFVar8 = ::FString::FString(&local_a0,L"B");
    pFVar6 = FromString(&local_b0,pFVar8);
    local_f0.Type = Text;
    FText((FText *)&local_f0.TextValue,pFVar6);
    if ((local_f0.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar4)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FText *)(*pcVar1)();
      return pFVar6;
    }
    ::FString::FString(&local_120,L"Unit");
    pTVar7 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
             ::AllocateMemoryForEmplace<FString_&>(&local_1e8,&local_120);
    TTuple<FString,FFormatArgumentValue>::
    TTuple<FString,FFormatArgumentValue><FString,FFormatArgumentValue>(pTVar7,&local_120,&local_f0);
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
    if (local_f0.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_f0.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
      )();
    }
    if (local_b0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
    }
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    pFVar6 = AsLocalizable_Advanced_LocText
                       (&local_90,L"Internationalization",L"ComputerMemoryFormatting",
                        L"{Number} {Unit}");
    pFVar9 = FTextFormat::FTextFormat(&local_50,pFVar6,Default);
    FVar2.Data = local_1e8.Pairs.AllocatorInstance.Data;
    iVar3 = local_1e8.Pairs.ArrayNum;
    local_1d8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d8.Pairs.ArrayNum = local_1e8.Pairs.ArrayNum;
    if (local_1e8.Pairs.ArrayNum == 0) {
      local_1d8.Pairs.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,local_1e8.Pairs.ArrayNum,0,(ForAnyElementType *)&local_1d8,
                 local_1e8.Pairs.ArrayNum,&local_1d8.Pairs.ArrayMax);
      ConstructItems<TTuple<FString,FFormatArgumentValue>,TTuple<FString,FFormatArgumentValue>,int>
                (local_1d8.Pairs.AllocatorInstance.Data,
                 (TTuple<FString,FFormatArgumentValue> *)FVar2.Data,iVar3);
    }
    FTextFormatter::Format(__return_storage_ptr__,pFVar9,&local_1d8,false,false);
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>
              ((TTuple<FString,FFormatArgumentValue> *)local_1d8.Pairs.AllocatorInstance.Data,
               local_1d8.Pairs.ArrayNum);
    if ((TTuple<FString,FFormatArgumentValue> *)local_1d8.Pairs.AllocatorInstance.Data !=
        (TTuple<FString,FFormatArgumentValue> *)0x0) {
      FMemory::Free(local_1d8.Pairs.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar9->TextFormatData).SharedReferenceCount.ReferenceController);
  }
  else {
    for (; 999999 < param_1; param_1 = param_1 / uVar10) {
      uVar12 = (int)pIVar13 + 1;
      pIVar13 = (ITextData *)(ulonglong)uVar12;
    }
    AsNumberTemplate<double,double>(&local_188,(double)param_1 / (double)uVar10,param_2,param_3);
    local_148.TextData.Reference = local_188.TextData.Reference;
    local_148.Flags = local_188.Flags;
    local_158 = 4;
    local_188.TextData.Reference = (ITextData *)0x0;
    pFVar6 = GetEmpty();
    pIVar13 = (pFVar6->TextData).Reference;
    if (pIVar13 != (ITextData *)0x0) {
      local_188.TextData.Reference = pIVar13;
      (**(code **)((longlong)*pIVar13 + 8))(pIVar13,local_128);
      pIVar11 = pIVar13;
    }
    local_188.Flags = 0;
    if ((local_148.TextData.Reference == (ITextData *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar4)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FText *)(*pcVar1)();
      return pFVar6;
    }
    ::FString::FString(&local_1a8,L"Number");
    pTVar7 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
             ::AllocateMemoryForEmplace<FString_&>(&local_1e8,&local_1a8);
    *(undefined8 *)pTVar7 = 0;
    *(FScriptContainerElement **)pTVar7 = local_1a8.Data.AllocatorInstance.Data;
    local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&pTVar7->field_0x8 = local_1a8.Data.ArrayNum;
    *(int *)&pTVar7->field_0xc = local_1a8.Data.ArrayMax;
    local_1a8.Data.ArrayNum = 0;
    local_1a8.Data.ArrayMax = 0;
    *(undefined4 *)&pTVar7->field_0x10 = local_158;
    *(ulonglong *)&pTVar7->field_0x18 = CONCAT44(uStack_14c,local_150);
    *(ulonglong *)&pTVar7->field_0x18 = CONCAT44(uStack_14c,local_150);
    *(undefined4 *)&pTVar7->field_0x18 = local_150;
    *(ulonglong *)&pTVar7->field_0x18 = CONCAT44(uStack_14c,local_150);
    *(undefined8 *)&pTVar7->field_0x20 = 0;
    *(undefined4 *)&pTVar7->field_0x28 = 0;
    if (local_148.TextData.Reference != (ITextData *)0x0) {
      FText((FText *)&pTVar7->field_0x20,&local_148);
    }
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
    if (local_148.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
    }
    if (pIVar11 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar11 + 0x10))(pIVar11);
    }
    pFVar8 = ::FString::ConstructFromPtrSize(&local_70,Prefixes + (int)uVar12,1);
    ::FString::ConcatFF(&local_100,pFVar8,&local_138);
    pFVar6 = FromString(&local_80,&local_100);
    local_d0.Type = Text;
    FText((FText *)&local_d0.TextValue,pFVar6);
    if ((local_d0.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar4)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FText *)(*pcVar1)();
      return pFVar6;
    }
    ::FString::FString(&local_110,L"Unit");
    pTVar7 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
             ::AllocateMemoryForEmplace<FString_&>(&local_1e8,&local_110);
    TTuple<FString,FFormatArgumentValue>::
    TTuple<FString,FFormatArgumentValue><FString,FFormatArgumentValue>(pTVar7,&local_110,&local_d0);
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
    if (local_d0.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_d0.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
      )();
    }
    if (local_80.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
    }
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    pFVar6 = AsLocalizable_Advanced_LocText
                       (&local_60,L"Internationalization",L"ComputerMemoryFormatting",
                        L"{Number} {Unit}");
    pFVar9 = FTextFormat::FTextFormat(&local_40,pFVar6,Default);
    FVar2.Data = local_1e8.Pairs.AllocatorInstance.Data;
    iVar3 = local_1e8.Pairs.ArrayNum;
    local_1c8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c8.Pairs.ArrayNum = local_1e8.Pairs.ArrayNum;
    if (local_1e8.Pairs.ArrayNum == 0) {
      local_1c8.Pairs.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,local_1e8.Pairs.ArrayNum,0,(ForAnyElementType *)&local_1c8,
                 local_1e8.Pairs.ArrayNum,&local_1c8.Pairs.ArrayMax);
      ConstructItems<TTuple<FString,FFormatArgumentValue>,TTuple<FString,FFormatArgumentValue>,int>
                (local_1c8.Pairs.AllocatorInstance.Data,
                 (TTuple<FString,FFormatArgumentValue> *)FVar2.Data,iVar3);
    }
    FTextFormatter::Format(__return_storage_ptr__,pFVar9,&local_1c8,false,false);
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>
              ((TTuple<FString,FFormatArgumentValue> *)local_1c8.Pairs.AllocatorInstance.Data,
               local_1c8.Pairs.ArrayNum);
    if ((TTuple<FString,FFormatArgumentValue> *)local_1c8.Pairs.AllocatorInstance.Data !=
        (TTuple<FString,FFormatArgumentValue> *)0x0) {
      FMemory::Free(local_1c8.Pairs.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar9->TextFormatData).SharedReferenceCount.ReferenceController);
    local_90.TextData.Reference = local_60.TextData.Reference;
  }
  if (local_90.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
  }
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_1e8.Pairs.AllocatorInstance.Data,
             local_1e8.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_1e8.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_1e8.Pairs.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// AsMemory @ 1417477c0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FText::AsMemory(FText *__return_storage_ptr__,ulong64 param_1,EMemoryUnitStandard param_2)

{
  TSharedPtr<FCulture,1> local_18;
  
  local_18.Object = (FCulture *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  AsMemory(__return_storage_ptr__,param_1,(FNumberFormattingOptions *)0x0,&local_18,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsNumber @ 141747800

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FText::AsNumber(FText *__return_storage_ptr__,schar param_1,FNumberFormattingOptions *param_2,
               TSharedPtr<FCulture,1> *param_3)

{
  AsNumberTemplate<signed_char,signed_char>(__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// AsNumber @ 141747820

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FText::AsNumber(FText *__return_storage_ptr__,uchar param_1,FNumberFormattingOptions *param_2,
               TSharedPtr<FCulture,1> *param_3)

{
  AsNumberTemplate<unsigned_char,unsigned_char>(__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// AsNumber @ 141747840

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FText::AsNumber(FText *__return_storage_ptr__,short param_1,FNumberFormattingOptions *param_2,
               TSharedPtr<FCulture,1> *param_3)

{
  AsNumberTemplate<short,short>(__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// AsNumber @ 141747860

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FText::AsNumber(FText *__return_storage_ptr__,ushort param_1,FNumberFormattingOptions *param_2,
               TSharedPtr<FCulture,1> *param_3)

{
  AsNumberTemplate<unsigned_short,unsigned_short>(__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// AsNumber @ 141747880

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FText::AsNumber(FText *__return_storage_ptr__,int param_1,FNumberFormattingOptions *param_2,
               TSharedPtr<FCulture,1> *param_3)

{
  AsNumberTemplate<int,int>(__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// AsNumber @ 1417478a0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FText::AsNumber(FText *__return_storage_ptr__,uint param_1,FNumberFormattingOptions *param_2,
               TSharedPtr<FCulture,1> *param_3)

{
  AsNumberTemplate<unsigned_int,__int64>(__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// AsNumber @ 1417478c0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FText::AsNumber(FText *__return_storage_ptr__,float param_1,FNumberFormattingOptions *param_2,
               TSharedPtr<FCulture,1> *param_3)

{
  AsNumberTemplate<float,float>(__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// AsNumber @ 1417478e0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FText::AsNumber(FText *__return_storage_ptr__,double param_1,FNumberFormattingOptions *param_2,
               TSharedPtr<FCulture,1> *param_3)

{
  AsNumberTemplate<double,double>(__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// AsNumber @ 141747900

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FText::AsNumber(FText *__return_storage_ptr__,long64 param_1,FNumberFormattingOptions *param_2,
               TSharedPtr<FCulture,1> *param_3)

{
  AsNumberTemplate<__int64,__int64>(__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// AsNumber @ 141747920

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FText::AsNumber(FText *__return_storage_ptr__,ulong64 param_1,FNumberFormattingOptions *param_2,
               TSharedPtr<FCulture,1> *param_3)

{
  AsNumberTemplate<unsigned___int64,__int64>(__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// AsPercent @ 141747940

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FText::AsPercent(FText *__return_storage_ptr__,float param_1,FNumberFormattingOptions *param_2,
                TSharedPtr<FCulture,1> *param_3)

{
  AsPercentTemplate<float,float>(__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// AsPercent @ 141747960

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FText::AsPercent(FText *__return_storage_ptr__,double param_1,FNumberFormattingOptions *param_2,
                TSharedPtr<FCulture,1> *param_3)

{
  AsPercentTemplate<double,double>(__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// AsTime @ 141747a80

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FText::AsTime(FText *__return_storage_ptr__,FDateTime *param_1,Type param_2,FString *param_3,
             TSharedPtr<FCulture,1> *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  long64 lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FInternationalization *pFVar6;
  FText *pFVar7;
  FTextHistory *this;
  FString *pFVar8;
  FCulture *pFVar9;
  FTextHistory *pFVar10;
  FString local_48;
  FString local_38;
  
  pFVar10 = (FTextHistory *)0x0;
  pFVar6 = FInternationalization::Get();
  if ((pFVar6->bIsInitialized != true) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("I18N.IsInitialized() == true",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\Text.cpp"
                         ,0x2f2,
                         L"FInternationalization is not initialized. An FText formatting method was likely used in static object initialization - this is not supported."
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FText *)(*pcVar4)();
    return pFVar7;
  }
  pFVar9 = param_4->Object;
  if (pFVar9 == (FCulture *)0x0) {
    if (((pFVar6->CurrentLocale).Object == (FCulture *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FText *)(*pcVar4)();
      return pFVar7;
    }
    pFVar9 = (pFVar6->CurrentLocale).Object;
    pTVar1 = (pFVar6->CurrentLocale).SharedReferenceCount.ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar9 == (FCulture *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FText *)(*pcVar4)();
      return pFVar7;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  FTextChronoFormatter::AsTime(&local_48,param_1,param_2,param_3,pFVar9);
  this = ::operator_new(0x58);
  if (this != (FTextHistory *)0x0) {
    pFVar9 = param_4->Object;
    pTVar1 = (param_4->SharedReferenceCount).ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar8 = ::FString::FString(&local_38,param_3);
    lVar2 = param_1->Ticks;
    this->_padding_ = 0;
    this->GlobalRevision = 0;
    this->LocalRevision = 0;
    (this->Mutex).State = (atomic<unsigned_char>)0x0;
    this->_padding_ = (longlong)&___7FTextHistory_Generated__6B_;
    this[1]._padding_ = (longlong)local_48.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1]._padding_ = local_48.Data.ArrayNum;
    this[1].GlobalRevision = (undefined2)local_48.Data.ArrayMax;
    this[1].LocalRevision = local_48.Data.ArrayMax._2_2_;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    FTextHistory::MarkDisplayStringUpToDate(this);
    *(Type *)&this[2]._padding_ = param_2;
    this->_padding_ = (longlong)&___7FTextHistory_AsTime__6B_;
    *(long64 *)&this[1].Mutex = lVar2;
    this[2]._padding_ = 0;
    this[2].GlobalRevision = 0;
    this[2].LocalRevision = 0;
    *(FScriptContainerElement **)&this[2]._padding_ = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&this[2].Mutex = (pFVar8->Data).ArrayNum;
    *(int *)&this[2].field_0x14 = (pFVar8->Data).ArrayMax;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
    this[3]._padding_ = (longlong)pFVar9;
    *(TReferenceControllerBase<1> **)&this[3]._padding_ = pTVar1;
    if ((int)this[2]._padding_ == 5) {
      *(undefined4 *)&this[2]._padding_ = 0;
    }
    pFVar3 = (pFVar8->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    LOCK();
    this->_padding_ = this->_padding_ + 1;
    UNLOCK();
    pFVar10 = this;
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)pFVar10;
  __return_storage_ptr__->Flags = 1;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// AsTimespan @ 141747ca0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::AsTimespan(FText *__return_storage_ptr__,FTimespan *param_1,TSharedPtr<FCulture,1> *param_2)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  ForAnyElementType FVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  FInternationalization *pFVar7;
  FText *pFVar8;
  TTuple<FString,FFormatArgumentValue> *pTVar9;
  TSharedRef<FTextFormatPatternDefinition_const_,1> *pTVar10;
  FTextFormat *pFVar11;
  ITextData IVar12;
  longlong lVar13;
  longlong lVar14;
  TReferenceControllerBase<1> *pTVar15;
  int iVar16;
  TReferenceControllerBase<1> *pTVar17;
  ITextData *pIVar18;
  FCulture *pFVar19;
  int iVar20;
  longlong lVar21;
  double dVar22;
  ETextFormatFlags local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_258
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_248
  ;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_1f8
  ;
  FNumberFormattingOptions local_1e8;
  FText local_1d0;
  FText local_1c0;
  undefined4 local_1b0;
  longlong local_1a8;
  FText local_1a0;
  undefined4 local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  FText local_180;
  undefined4 local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  FText local_160;
  undefined4 local_150;
  longlong local_148;
  FText local_140;
  FCulture *local_130;
  TReferenceControllerBase<1> *local_128;
  undefined1 local_120 [8];
  TSharedPtr<FCulture,1> local_118;
  TSharedPtr<FCulture,1> local_108;
  FText local_f8;
  TSharedPtr<FCulture,1> local_e8;
  FString local_d8;
  FCulture *local_c8;
  TReferenceControllerBase<1> *local_c0;
  FText local_b8;
  TSharedRef<FTextFormatData,1> local_a8;
  FText local_98;
  FText local_88;
  FFormatArgumentValue local_78;
  TSharedRef<FTextFormatPatternDefinition_const_,1> local_58;
  FTextFormat local_48;
  
  pFVar7 = FInternationalization::Get();
  if (pFVar7->bIsInitialized != true) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("I18N.IsInitialized() == true",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\Text.cpp"
                       ,0x301,
                       L"FInternationalization is not initialized. An FText formatting method was likely used in static object initialization - this is not supported."
                      );
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FText *)(*pcVar2)();
      return pFVar8;
    }
  }
  pFVar19 = param_2->Object;
  if (pFVar19 == (FCulture *)0x0) {
    if ((pFVar7->CurrentLocale).Object == (FCulture *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        pFVar8 = (FText *)(*pcVar2)();
        return pFVar8;
      }
    }
    pFVar19 = (pFVar7->CurrentLocale).Object;
    pTVar15 = (pFVar7->CurrentLocale).SharedReferenceCount.ReferenceController;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_130 = pFVar19;
    local_128 = pTVar15;
    if (pFVar19 == (FCulture *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        pFVar8 = (FText *)(*pcVar2)();
        return pFVar8;
      }
    }
    bVar3 = false;
    bVar6 = true;
    pTVar17 = pTVar15;
  }
  else {
    pTVar15 = (param_2->SharedReferenceCount).ReferenceController;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = false;
    bVar3 = true;
    pTVar17 = local_128;
    local_c8 = pFVar19;
    local_c0 = pTVar15;
  }
  pTVar5 = local_c0;
  if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  }
  if (bVar3) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  lVar14 = param_1->Ticks;
  local_1e8.AlwaysSign = false;
  local_1e8.UseGrouping = true;
  local_1e8.IndicateNearlyInteger = false;
  local_1e8.RoundingMode = HalfToEven;
  lVar21 = lVar14 / 600000000;
  dVar22 = (double)lVar14 * ___real_3dbe8abfd59a6108;
  local_1e8.MinimumFractionalDigits = 0;
  local_1e8.MaximumFractionalDigits = 3;
  local_1e8.MinimumIntegralDigits = 2;
  lVar13 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar21),8) + lVar21;
  local_1e8.MaximumIntegralDigits = 2;
  iVar16 = (int)lVar21 + ((int)(lVar13 >> 5) - (int)(lVar13 >> 0x3f)) * -0x3c;
  lVar14 = lVar14 + SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(lVar14),8);
  lVar21 = (lVar14 >> 0x17) - (lVar14 >> 0x3f);
  lVar14 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar21),8) + lVar21;
  iVar20 = (int)lVar21 + ((int)(lVar14 >> 5) - (int)(lVar14 >> 0x3f)) * -0x3c;
  if ((int)dVar22 < 1) {
    AsLocalizable_Advanced_LocText
              (&local_88,L"Timespan",L"Format_MinutesSeconds",L"{Minutes}:{Seconds}");
    local_148 = (longlong)iVar16;
    local_1f8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f8.Pairs.ArrayNum = 0;
    local_1f8.Pairs.ArrayMax = 0;
    local_150 = 0;
    local_140.TextData.Reference = (ITextData *)0x0;
    local_140.Flags = 0;
    ::FString::FString(&local_208,L"Minutes");
    pTVar9 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
             ::AllocateMemoryForEmplace<FString_&>(&local_1f8,&local_208);
    *(undefined8 *)pTVar9 = 0;
    *(FScriptContainerElement **)pTVar9 = local_208.Data.AllocatorInstance.Data;
    local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&pTVar9->field_0x8 = local_208.Data.ArrayNum;
    *(int *)&pTVar9->field_0xc = local_208.Data.ArrayMax;
    local_208.Data.ArrayNum = 0;
    local_208.Data.ArrayMax = 0;
    *(undefined4 *)&pTVar9->field_0x10 = local_150;
    *(longlong *)&pTVar9->field_0x18 = local_148;
    *(longlong *)&pTVar9->field_0x18 = local_148;
    *(undefined4 *)&pTVar9->field_0x18 = (undefined4)local_148;
    *(longlong *)&pTVar9->field_0x18 = local_148;
    *(undefined8 *)&pTVar9->field_0x20 = 0;
    *(undefined4 *)&pTVar9->field_0x28 = 0;
    if (local_140.TextData.Reference != (ITextData *)0x0) {
      FText((FText *)&pTVar9->field_0x20,&local_140);
    }
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
    }
    if (local_140.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_140.TextData.Reference + 0x10))();
    }
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_e8.Object = pFVar19;
    local_e8.SharedReferenceCount.ReferenceController = pTVar15;
    AsNumberTemplate<int,int>(&local_98,iVar20,&local_1e8,&local_e8);
    local_78.Type = Text;
    FText((FText *)&local_78.TextValue,&local_98);
    if (local_78.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        pFVar8 = (FText *)(*pcVar2)();
        return pFVar8;
      }
    }
    ::FString::FString(&local_d8,L"Seconds");
    pTVar9 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
             ::AllocateMemoryForEmplace<FString_&>(&local_1f8,&local_d8);
    TTuple<FString,FFormatArgumentValue>::
    TTuple<FString,FFormatArgumentValue><FString,FFormatArgumentValue>(pTVar9,&local_d8,&local_78);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (local_78.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_78.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
      )();
    }
    if (local_98.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
    pFVar11 = FTextFormat::FTextFormat(&local_48,&local_88,Default);
    Format(__return_storage_ptr__,pFVar11,&local_1f8);
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>
              ((TTuple<FString,FFormatArgumentValue> *)local_1f8.Pairs.AllocatorInstance.Data,
               local_1f8.Pairs.ArrayNum);
    if ((TTuple<FString,FFormatArgumentValue> *)local_1f8.Pairs.AllocatorInstance.Data !=
        (TTuple<FString,FFormatArgumentValue> *)0x0) {
      FMemory::Free(local_1f8.Pairs.AllocatorInstance.Data);
    }
    if (local_88.TextData.Reference == (ITextData *)0x0) goto LAB_141748601;
    IVar12 = *local_88.TextData.Reference;
    local_b8.TextData.Reference = local_88.TextData.Reference;
  }
  else {
    AsLocalizable_Advanced_LocText
              (&local_b8,L"Timespan",L"Format_HoursMinutesSeconds",L"{Hours}:{Minutes}:{Seconds}");
    local_1a8 = (longlong)(int)dVar22;
    local_258.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.Pairs.ArrayNum = 0;
    local_258.Pairs.ArrayMax = 0;
    local_1b0 = 0;
    local_1a0.TextData.Reference = (ITextData *)0x0;
    local_1a0.Flags = 0;
    ::FString::FString(&local_238,L"Hours");
    pTVar9 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
             ::AllocateMemoryForEmplace<FString_&>(&local_258,&local_238);
    *(undefined8 *)pTVar9 = 0;
    *(FScriptContainerElement **)pTVar9 = local_238.Data.AllocatorInstance.Data;
    local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&pTVar9->field_0x8 = local_238.Data.ArrayNum;
    *(int *)&pTVar9->field_0xc = local_238.Data.ArrayMax;
    local_238.Data.ArrayNum = 0;
    local_238.Data.ArrayMax = 0;
    *(undefined4 *)&pTVar9->field_0x10 = local_1b0;
    *(longlong *)&pTVar9->field_0x18 = local_1a8;
    *(longlong *)&pTVar9->field_0x18 = local_1a8;
    *(undefined4 *)&pTVar9->field_0x18 = (undefined4)local_1a8;
    *(longlong *)&pTVar9->field_0x18 = local_1a8;
    *(undefined8 *)&pTVar9->field_0x20 = 0;
    *(undefined4 *)&pTVar9->field_0x28 = 0;
    if (local_1a0.TextData.Reference != (ITextData *)0x0) {
      FText((FText *)&pTVar9->field_0x20,&local_1a0);
    }
    if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Data.AllocatorInstance.Data);
    }
    if (local_1a0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1a0.TextData.Reference + 0x10))();
    }
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_118.Object = pFVar19;
    local_118.SharedReferenceCount.ReferenceController = pTVar15;
    AsNumberTemplate<int,int>(&local_1d0,iVar16,&local_1e8,&local_118);
    local_180.TextData.Reference = local_1d0.TextData.Reference;
    local_180.Flags = local_1d0.Flags;
    local_190 = 4;
    local_1d0.TextData.Reference = (ITextData *)0x0;
    pFVar8 = GetEmpty();
    pIVar1 = (pFVar8->TextData).Reference;
    pIVar18 = (ITextData *)0x0;
    if (pIVar1 != (ITextData *)0x0) {
      local_1d0.TextData.Reference = pIVar1;
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
      pIVar18 = pIVar1;
    }
    local_1d0.Flags = 0;
    if (local_180.TextData.Reference == (ITextData *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        pFVar8 = (FText *)(*pcVar2)();
        return pFVar8;
      }
    }
    ::FString::FString(&local_228,L"Minutes");
    pTVar9 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
             ::AllocateMemoryForEmplace<FString_&>(&local_258,&local_228);
    *(undefined8 *)pTVar9 = 0;
    *(FScriptContainerElement **)pTVar9 = local_228.Data.AllocatorInstance.Data;
    local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&pTVar9->field_0x8 = local_228.Data.ArrayNum;
    *(int *)&pTVar9->field_0xc = local_228.Data.ArrayMax;
    local_228.Data.ArrayNum = 0;
    local_228.Data.ArrayMax = 0;
    *(undefined4 *)&pTVar9->field_0x10 = local_190;
    *(ulonglong *)&pTVar9->field_0x18 = CONCAT44(uStack_184,local_188);
    *(ulonglong *)&pTVar9->field_0x18 = CONCAT44(uStack_184,local_188);
    *(undefined4 *)&pTVar9->field_0x18 = local_188;
    *(ulonglong *)&pTVar9->field_0x18 = CONCAT44(uStack_184,local_188);
    *(undefined8 *)&pTVar9->field_0x20 = 0;
    *(undefined4 *)&pTVar9->field_0x28 = 0;
    if (local_180.TextData.Reference != (ITextData *)0x0) {
      FText((FText *)&pTVar9->field_0x20,&local_180);
    }
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
    if (local_180.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_180.TextData.Reference + 0x10))();
    }
    if (pIVar18 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar18 + 0x10))(pIVar18);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_108.Object = pFVar19;
    local_108.SharedReferenceCount.ReferenceController = pTVar15;
    AsNumberTemplate<int,int>(&local_1c0,iVar20,&local_1e8,&local_108);
    local_160.TextData.Reference = local_1c0.TextData.Reference;
    local_160.Flags = local_1c0.Flags;
    local_170 = 4;
    local_1c0.TextData.Reference = (ITextData *)0x0;
    pFVar8 = GetEmpty();
    pIVar1 = (pFVar8->TextData).Reference;
    pIVar18 = (ITextData *)0x0;
    if (pIVar1 != (ITextData *)0x0) {
      local_1c0.TextData.Reference = pIVar1;
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res20);
      pIVar18 = pIVar1;
    }
    local_1c0.Flags = 0;
    if (local_160.TextData.Reference == (ITextData *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        pFVar8 = (FText *)(*pcVar2)();
        return pFVar8;
      }
    }
    ::FString::FString(&local_218,L"Seconds");
    pTVar9 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
             ::AllocateMemoryForEmplace<FString_&>(&local_258,&local_218);
    *(undefined8 *)pTVar9 = 0;
    *(FScriptContainerElement **)pTVar9 = local_218.Data.AllocatorInstance.Data;
    local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&pTVar9->field_0x8 = local_218.Data.ArrayNum;
    *(int *)&pTVar9->field_0xc = local_218.Data.ArrayMax;
    local_218.Data.ArrayNum = 0;
    local_218.Data.ArrayMax = 0;
    *(undefined4 *)&pTVar9->field_0x10 = local_170;
    *(ulonglong *)&pTVar9->field_0x18 = CONCAT44(uStack_164,local_168);
    *(ulonglong *)&pTVar9->field_0x18 = CONCAT44(uStack_164,local_168);
    *(undefined4 *)&pTVar9->field_0x18 = local_168;
    *(ulonglong *)&pTVar9->field_0x18 = CONCAT44(uStack_164,local_168);
    *(undefined8 *)&pTVar9->field_0x20 = 0;
    *(undefined4 *)&pTVar9->field_0x28 = 0;
    if (local_160.TextData.Reference != (ITextData *)0x0) {
      FText((FText *)&pTVar9->field_0x20,&local_160);
    }
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    if (local_160.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_160.TextData.Reference + 0x10))();
    }
    if (pIVar18 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar18 + 0x10))(pIVar18);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
    local_res10[0] = Default;
    pTVar10 = FTextFormatPatternDefinition::GetDefault(&local_58);
    local_f8.TextData.Reference = local_b8.TextData.Reference;
    if (local_b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b8.TextData.Reference + 8))
                (local_b8.TextData.Reference,local_120);
    }
    local_f8.Flags = local_b8.Flags;
    MakeShared<FTextFormatData,1,FText,enum_ETextFormatFlags_&,TSharedRef<FTextFormatPatternDefinition_const_,1>_>
              (&local_a8,&local_f8,local_res10,pTVar10);
    if (local_f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    FVar4.Data = local_258.Pairs.AllocatorInstance.Data;
    iVar16 = local_258.Pairs.ArrayNum;
    local_248.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_248.Pairs.ArrayNum = local_258.Pairs.ArrayNum;
    if (local_258.Pairs.ArrayNum == 0) {
      local_248.Pairs.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,local_258.Pairs.ArrayNum,0,(ForAnyElementType *)&local_248,
                 local_258.Pairs.ArrayNum,&local_248.Pairs.ArrayMax);
      ConstructItems<TTuple<FString,FFormatArgumentValue>,TTuple<FString,FFormatArgumentValue>,int>
                (local_248.Pairs.AllocatorInstance.Data,
                 (TTuple<FString,FFormatArgumentValue> *)FVar4.Data,iVar16);
    }
    FTextFormatter::Format(__return_storage_ptr__,(FTextFormat *)&local_a8,&local_248,false,false);
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>
              ((TTuple<FString,FFormatArgumentValue> *)local_248.Pairs.AllocatorInstance.Data,
               local_248.Pairs.ArrayNum);
    if ((TTuple<FString,FFormatArgumentValue> *)local_248.Pairs.AllocatorInstance.Data !=
        (TTuple<FString,FFormatArgumentValue> *)0x0) {
      FMemory::Free(local_248.Pairs.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>
              ((TTuple<FString,FFormatArgumentValue> *)local_258.Pairs.AllocatorInstance.Data,
               local_258.Pairs.ArrayNum);
    if ((TTuple<FString,FFormatArgumentValue> *)local_258.Pairs.AllocatorInstance.Data !=
        (TTuple<FString,FFormatArgumentValue> *)0x0) {
      FMemory::Free(local_258.Pairs.AllocatorInstance.Data);
    }
    if (local_b8.TextData.Reference == (ITextData *)0x0) goto LAB_141748601;
    IVar12 = *local_b8.TextData.Reference;
  }
  (**(code **)((longlong)IVar12 + 0x10))(local_b8.TextData.Reference);
LAB_141748601:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  return __return_storage_ptr__;
}

// AutoRTFMAssignFromOpenToClosed @ 141748630

void __cdecl FText::AutoRTFMAssignFromOpenToClosed(FText *param_1,FText *param_2)

{
  undefined1 local_18 [24];
  
  `FText::AutoRTFMAssignFromOpenToClosed'::__l2::<lambda_1>::<lambda_1>(local_18,param_1,param_2);
                    /* WARNING: Subroutine does not return */
  abort();
}

// BuildSourceString @ 14174ac20

FString * __thiscall FText::BuildSourceString(FText *this,FString *__return_storage_ptr__)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)((longlong)*(this->TextData).Reference + 0x48))();
  (**(code **)(*plVar1 + 0x68))(plVar1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// CompareTo @ 14174c790

int __thiscall FText::CompareTo(FText *this,FText *param_1,Type param_2)

{
  int iVar1;
  FString *pFVar2;
  FString *pFVar3;
  
  Rebuild(param_1);
  pFVar2 = (FString *)(**(code **)((longlong)*(param_1->TextData).Reference + 0x28))();
  Rebuild(this);
  pFVar3 = (FString *)(**(code **)((longlong)*(this->TextData).Reference + 0x28))();
  iVar1 = FTextComparison::CompareTo(pFVar3,pFVar2,param_2);
  return iVar1;
}

// CompareToCaseIgnored @ 14174c7f0

int __thiscall FText::CompareToCaseIgnored(FText *this,FText *param_1)

{
  int iVar1;
  FString *pFVar2;
  FString *pFVar3;
  
  Rebuild(param_1);
  pFVar2 = (FString *)(**(code **)((longlong)*(param_1->TextData).Reference + 0x28))();
  Rebuild(this);
  pFVar3 = (FString *)(**(code **)((longlong)*(this->TextData).Reference + 0x28))();
  iVar1 = FTextComparison::CompareToCaseIgnored(pFVar3,pFVar2);
  return iVar1;
}

// EqualTo @ 141754460

bool __thiscall FText::EqualTo(FText *this,FText *param_1,Type param_2)

{
  bool bVar1;
  FString *pFVar2;
  FString *pFVar3;
  
  Rebuild(param_1);
  pFVar2 = (FString *)(**(code **)((longlong)*(param_1->TextData).Reference + 0x28))();
  Rebuild(this);
  pFVar3 = (FString *)(**(code **)((longlong)*(this->TextData).Reference + 0x28))();
  bVar1 = FTextComparison::EqualTo(pFVar3,pFVar2,param_2);
  return bVar1;
}

// EqualToCaseIgnored @ 1417544c0

bool __thiscall FText::EqualToCaseIgnored(FText *this,FText *param_1)

{
  bool bVar1;
  FString *pFVar2;
  FString *pFVar3;
  
  Rebuild(param_1);
  pFVar2 = (FString *)(**(code **)((longlong)*(param_1->TextData).Reference + 0x28))();
  Rebuild(this);
  pFVar3 = (FString *)(**(code **)((longlong)*(this->TextData).Reference + 0x28))();
  bVar1 = FTextComparison::EqualToCaseIgnored(pFVar3,pFVar2);
  return bVar1;
}

// FindRegisteredTextGenerator @ 141758200

TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>
* __cdecl FText::FindRegisteredTextGenerator
                    (TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>
                     *__return_storage_ptr__,FName param_1)

{
  FTextGeneratorRegistry *lpCriticalSection;
  TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>
  *pTVar1;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_68 [8];
  ForAnyElementType local_60;
  ulonglong local_58;
  undefined1 local_50 [8];
  ForAnyElementType local_48;
  int local_40;
  FDestructionSentinel local_38;
  
  lpCriticalSection = FTextGeneratorRegistry::Get();
  if (lpCriticalSection != (FTextGeneratorRegistry *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar1 = TMapBase<FName,TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>,0>_>
             ::Find((TMapBase<FName,TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>,0>_>
                     *)&lpCriticalSection->TextGeneratorFactoryMap,param_1);
    if (pTVar1 == (TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>
                   *)0x0) {
      local_58 = 0;
      local_68 = (undefined1  [8])0x0;
      local_60.Data = (FScriptContainerElement *)0x0;
      TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>
      ::
      TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>
                (__return_storage_ptr__,
                 (TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>
                  *)local_68);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
                 (FWriteAccessScope *)&local_38);
      if (((int)local_58 != 0) && (local_60.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_60.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_60,0,0,0x10);
        local_58 = local_58 & 0xffffffff00000000;
      }
      if (local_38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
      }
      if (local_60.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data);
      }
      this = (FMRSWRecursiveAccessDetector *)local_68;
    }
    else {
      pTVar1 = TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>
               ::
               TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>
                         ((TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>
                           *)local_50,pTVar1);
      TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>
      ::
      TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>
                (__return_storage_ptr__,pTVar1);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_50,
                 (FWriteAccessScope *)&local_38);
      if ((local_40 != 0) && (local_48.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_48.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,0x10);
        local_40 = 0;
      }
      if (local_38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
      }
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
      }
      this = (FMRSWRecursiveAccessDetector *)local_50;
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// FindTextInLiveTable_Advanced @ 141758720

bool __cdecl
FText::FindTextInLiveTable_Advanced
          (FTextKey *param_1,FTextKey *param_2,FText *param_3,FString *param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  FTextId FVar4;
  bool bVar5;
  undefined1 uVar6;
  FTextLocalizationManager *this;
  FString *pFVar7;
  FTextHistory *this_00;
  ForAnyElementType FVar8;
  bool bVar9;
  FTextId local_res10;
  FText *local_res18;
  int local_res20;
  int local_res24;
  int *local_70;
  FString local_68;
  FText local_58;
  FString local_48;
  
  local_res10 = (FTextId)((ulonglong)local_res10 & 0xffffffff00000000);
  local_res18 = param_3;
  this = FTextLocalizationManager::Get();
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1051,"FTextLocalizationManager::FindDisplayString",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextLocalizationManager.cpp"
               ,0x41b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1051);
  }
  if (param_2->Index == -1) {
LAB_14175885a:
    local_res10.Namespace.Index = 0;
    local_res10.Key.Index = 0;
  }
  else {
    if ((TextLocalizationManager::DisplayStringSupport != 0) &&
       (TextLocalizationManager::DisplayStringSupport != 1)) {
      if (TextLocalizationManager::DisplayStringSupport == 2) goto LAB_14175885a;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextLocalizationManager.cpp"
                         ,0x2b7,L"Unknown EDisplayStringSupport!");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    if (((param_4 == (FString *)0x0) &&
        (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0)) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(``FTextLocalizationManager::FindDisplayString'::__l2::<lambda_1>::operator()'::__l2::
             _dynamic_atexit_destructor_for__EmptyString__);
      _Init_thread_footer(&::_TSS0);
    }
    local_res20 = param_1->Index;
    local_res24 = param_2->Index;
    FTextLocalizationManager::FindDisplayString_Internal(this,&local_res10,(FString *)&local_res20);
  }
  FVar4 = local_res10;
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (FVar4 == (FTextId)0x0) {
    bVar9 = false;
  }
  else {
    if ((FVar4 == (FTextId)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("this->IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Internationalization\\LocalizedTextSourceTypes.h"
                           ,0x11c,L""), bVar9)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    if (FVar4 == (FTextId)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("this->IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Internationalization\\LocalizedTextSourceTypes.h"
                         ,0xb0,L"");
      if (bVar9) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    else {
      LOCK();
      *(int *)FVar4 = *(int *)FVar4 + 1;
      UNLOCK();
    }
    bVar9 = param_4 == (FString *)0x0;
    if (bVar9) {
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      pFVar7 = &local_68;
    }
    else {
      pFVar7 = ::FString::FString(&local_48,param_4);
    }
    FVar8.Data = local_68.Data.AllocatorInstance.Data;
    bVar5 = false;
    iVar1 = param_1->Index;
    iVar2 = param_2->Index;
    this_00 = ::operator_new(0x38);
    if (this_00 == (FTextHistory *)0x0) {
      this_00 = (FTextHistory *)0x0;
    }
    else {
      if (FVar4 != (FTextId)0x0) {
        LOCK();
        *(int *)FVar4 = *(int *)FVar4 + 1;
        UNLOCK();
      }
      local_70 = (int *)0x0;
      bVar5 = true;
      this_00->_padding_ = 0;
      this_00->GlobalRevision = 0;
      this_00->LocalRevision = 0;
      (this_00->Mutex).State = (atomic<unsigned_char>)0x0;
      this_00->_padding_ = (longlong)&___7FTextHistory_Base__6B_;
      this_00[1]._padding_ = CONCAT44(iVar2,iVar1);
      this_00[1]._padding_ = 0;
      this_00[1].GlobalRevision = 0;
      this_00[1].LocalRevision = 0;
      *(FScriptContainerElement **)&this_00[1]._padding_ = (pFVar7->Data).AllocatorInstance.Data;
      (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)&this_00[1].Mutex = (pFVar7->Data).ArrayNum;
      *(int *)&this_00[1].field_0x14 = (pFVar7->Data).ArrayMax;
      (pFVar7->Data).ArrayNum = 0;
      (pFVar7->Data).ArrayMax = 0;
      this_00[2]._padding_ = (longlong)FVar4;
      FTextHistory::MarkDisplayStringUpToDate(this_00);
      FVar8.Data = local_68.Data.AllocatorInstance.Data;
    }
    if ((bVar5) && (local_70 != (int *)0x0)) {
      LOCK();
      iVar1 = *local_70;
      *local_70 = *local_70 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        if (*(void **)(local_70 + 2) != (void *)0x0) {
          FMemory::Free(*(void **)(local_70 + 2));
        }
        ::operator_delete(local_70,0x18);
      }
    }
    local_58.TextData.Reference = (ITextData *)(FTextHistory *)0x0;
    if (this_00 != (FTextHistory *)0x0) {
      LOCK();
      this_00->_padding_ = this_00->_padding_ + 1;
      UNLOCK();
      local_58.TextData.Reference = (ITextData *)this_00;
    }
    local_58.Flags = 0;
    operator=(local_res18,&local_58);
    if ((FTextHistory *)local_58.TextData.Reference != (FTextHistory *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
    if ((bVar9) && (FVar8.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(FVar8.Data);
    }
    if ((!bVar9) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (FVar4 != (FTextId)0x0) {
      LOCK();
      iVar1 = *(int *)FVar4;
      *(int *)FVar4 = *(int *)FVar4 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        if (*(void **)((longlong)FVar4 + 8) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)FVar4 + 8));
        }
        ::operator_delete((void *)FVar4,0x18);
      }
    }
    bVar9 = true;
  }
  if (FVar4 != (FTextId)0x0) {
    LOCK();
    iVar1 = *(int *)FVar4;
    *(int *)FVar4 = *(int *)FVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      if (*(void **)((longlong)FVar4 + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)FVar4 + 8));
      }
      ::operator_delete((void *)FVar4,0x18);
    }
  }
  return bVar9;
}

// Format @ 141759000

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::Format(FText *__return_storage_ptr__,FTextFormat *param_1,
             TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> *param_2)

{
  FTextFormatter::Format(__return_storage_ptr__,param_1,param_2,false,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->TextFormatData).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// Format @ 141759040

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::Format(FText *__return_storage_ptr__,FTextFormat *param_1,
             TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
             *param_2)

{
  FTextFormatter::Format(__return_storage_ptr__,param_1,param_2,false,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->TextFormatData).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// Format @ 141759080

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::Format(FText *__return_storage_ptr__,FTextFormat *param_1,
             TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FFormatArgumentValue *pFVar2;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_18;
  
  iVar1 = param_2->ArrayNum;
  pFVar2 = (FFormatArgumentValue *)(param_2->AllocatorInstance).Data;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = iVar1;
  if (iVar1 == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar1,0,&local_18.AllocatorInstance,iVar1,&local_18.ArrayMax);
    ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
              (local_18.AllocatorInstance.Data,pFVar2,iVar1);
  }
  FTextFormatter::Format(__return_storage_ptr__,param_1,&local_18,false,false);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FFormatArgumentValue *)local_18.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->TextFormatData).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// Format @ 141759150

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::Format(FText *__return_storage_ptr__,FTextFormat *param_1,
             TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
             *param_2)

{
  int iVar1;
  TTuple<FString,FFormatArgumentValue> *pTVar2;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_18;
  
  iVar1 = (param_2->Pairs).ArrayNum;
  pTVar2 = (TTuple<FString,FFormatArgumentValue> *)(param_2->Pairs).AllocatorInstance.Data;
  local_18.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Pairs.ArrayNum = iVar1;
  if (iVar1 == 0) {
    local_18.Pairs.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar1,0,(ForAnyElementType *)&local_18,iVar1,&local_18.Pairs.ArrayMax);
    ConstructItems<TTuple<FString,FFormatArgumentValue>,TTuple<FString,FFormatArgumentValue>,int>
              (local_18.Pairs.AllocatorInstance.Data,pTVar2,iVar1);
  }
  FTextFormatter::Format(__return_storage_ptr__,param_1,&local_18,false,false);
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_18.Pairs.AllocatorInstance.Data,
             local_18.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_18.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_18.Pairs.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->TextFormatData).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// FormatNamedImpl @ 141759700

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::FormatNamedImpl
          (FText *__return_storage_ptr__,FTextFormat *param_1,
          TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
          *param_2)

{
  FTextFormatter::Format(__return_storage_ptr__,param_1,param_2,false,false);
  return __return_storage_ptr__;
}

// FormatOrderedImpl @ 141759730

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::FormatOrderedImpl
          (FText *__return_storage_ptr__,FTextFormat *param_1,
          TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> *param_2)

{
  FTextFormatter::Format(__return_storage_ptr__,param_1,param_2,false,false);
  return __return_storage_ptr__;
}

// FromName @ 14175a5e0

FText * __cdecl FText::FromName(FText *__return_storage_ptr__,FName *param_1)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = ::FName::ToString(param_1,&local_18);
  FromString(__return_storage_ptr__,pFVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FromString @ 14175a630

FText * __cdecl FText::FromString(FText *__return_storage_ptr__,FString *param_1)

{
  bool bVar1;
  bool bVar2;
  FText *pFVar3;
  ITextData *pIVar4;
  ITextData *pIVar5;
  uint uVar6;
  ITextData local_res8;
  ITextData *local_28;
  
  pIVar5 = (ITextData *)0x0;
  uVar6 = 0;
  local_res8 = (ITextData)((ulonglong)local_res8 & 0xffffffff00000000);
  if ((param_1->Data).ArrayNum < 2) {
    pFVar3 = GetEmpty();
    pIVar5 = (pFVar3->TextData).Reference;
    if (pIVar5 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar5 + 8))(pIVar5,&local_res8);
    }
    uVar6 = pFVar3->Flags;
    bVar2 = true;
    bVar1 = false;
    pIVar4 = pIVar5;
  }
  else {
    local_res8 = (ITextData)0xffffffffffffffff;
    pIVar4 = ::operator_new(0x38);
    if (pIVar4 != (ITextData *)0x0) {
      pIVar4[1] = (ITextData)0x0;
      *(undefined1 *)(pIVar4 + 2) = 0;
      *pIVar4 = (ITextData)&___7FTextHistory_Base__6B_;
      pIVar4[3] = local_res8;
      pIVar4[4] = (ITextData)0x0;
      pIVar4[4] = (ITextData)(param_1->Data).AllocatorInstance.Data;
      (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pIVar4 + 5) = (param_1->Data).ArrayNum;
      *(int *)&pIVar4[5].field_0x4 = (param_1->Data).ArrayMax;
      (param_1->Data).ArrayNum = 0;
      (param_1->Data).ArrayMax = 0;
      pIVar4[6] = (ITextData)0x0;
      LOCK();
      *(int *)(pIVar4 + 1) = *(int *)(pIVar4 + 1) + 1;
      UNLOCK();
      pIVar5 = pIVar4;
    }
    bVar2 = false;
    bVar1 = true;
    pIVar4 = local_28;
    local_28 = pIVar5;
  }
  (__return_storage_ptr__->TextData).Reference = pIVar5;
  if (pIVar5 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar5 + 8))(pIVar5,&local_res8);
  }
  __return_storage_ptr__->Flags = uVar6;
  if ((bVar1) && (local_28 != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_28 + 0x10))(local_28);
  }
  if ((bVar2) && (pIVar4 != (ITextData *)0x0)) {
    (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
  }
  __return_storage_ptr__->Flags = __return_storage_ptr__->Flags | 0x12;
  return __return_storage_ptr__;
}

// FromString @ 14175a760

FText * __cdecl FText::FromString(FText *__return_storage_ptr__,FAnsiString *param_1)

{
  int iVar1;
  FString *pFVar2;
  char *pcVar3;
  int iVar4;
  FString local_18;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
    pcVar3 = "";
  }
  else {
    pcVar3 = (char *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar2 = ::FString::ConstructFromPtrSize(&local_18,pcVar3,iVar4);
  FromString(__return_storage_ptr__,pFVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FromString @ 14175a7c0

FText * __cdecl FText::FromString(FText *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FText *pFVar5;
  ITextData IVar6;
  ITextData IVar7;
  uint uVar8;
  ForAnyElementType FVar9;
  ForAnyElementType FVar10;
  ITextData local_res8;
  ForAnyElementType local_28;
  undefined8 local_20;
  
  IVar7 = (ITextData)0x0;
  uVar8 = 0;
  local_res8 = (ITextData)((ulonglong)local_res8 & 0xffffffff00000000);
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar1 < 2) {
    pFVar5 = GetEmpty();
    IVar7 = (ITextData)(pFVar5->TextData).Reference;
    if (IVar7 != (ITextData)0x0) {
      (**(code **)((longlong)*(ITextData *)IVar7 + 8))(IVar7,&local_res8);
    }
    uVar8 = pFVar5->Flags;
    bVar4 = true;
    bVar3 = false;
    bVar2 = false;
    FVar9.Data = (FScriptContainerElement *)IVar7;
    FVar10.Data = local_28.Data;
  }
  else {
    _Src = (param_1->Data).AllocatorInstance.Data;
    local_28.Data = (FScriptContainerElement *)0x0;
    local_20 = CONCAT44(local_20._4_4_,iVar1);
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,&local_28,iVar1,(int *)((longlong)&local_20 + 4));
    memcpy(local_28.Data,_Src,(longlong)iVar1 * 2);
    local_res8 = (ITextData)0xffffffffffffffff;
    IVar6 = (ITextData)::operator_new(0x38);
    if (IVar6 != (ITextData)0x0) {
      *(ITextData *)((longlong)IVar6 + 8) = (ITextData)0x0;
      *(undefined1 *)((longlong)IVar6 + 0x10) = 0;
      *(undefined ***)IVar6 = &___7FTextHistory_Base__6B_;
      *(ITextData *)((longlong)IVar6 + 0x18) = local_res8;
      *(FScriptContainerElement **)((longlong)IVar6 + 0x20) = local_28.Data;
      local_28.Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)((longlong)IVar6 + 0x28) = (undefined4)local_20;
      *(undefined4 *)((longlong)IVar6 + 0x2c) = local_20._4_4_;
      local_20 = 0;
      *(ITextData *)((longlong)IVar6 + 0x30) = (ITextData)0x0;
      LOCK();
      *(int *)((longlong)IVar6 + 8) = *(int *)((longlong)IVar6 + 8) + 1;
      UNLOCK();
      IVar7 = IVar6;
    }
    bVar4 = false;
    bVar3 = true;
    bVar2 = true;
    FVar9.Data = local_28.Data;
    FVar10.Data = (FScriptContainerElement *)IVar7;
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)IVar7;
  if (IVar7 != (ITextData)0x0) {
    (**(code **)((longlong)*(ITextData *)IVar7 + 8))(IVar7,&local_res8);
  }
  __return_storage_ptr__->Flags = uVar8;
  if ((bVar2) && ((ITextData)FVar10.Data != (ITextData)0x0)) {
    (**(code **)((longlong)*(ITextData *)FVar10.Data + 0x10))(FVar10.Data);
  }
  if ((bVar3) && ((ITextData)local_28.Data != (ITextData)0x0)) {
    FMemory::Free(local_28.Data);
  }
  if ((bVar4) && ((ITextData)FVar9.Data != (ITextData)0x0)) {
    (**(code **)((longlong)*(ITextData *)FVar9.Data + 0x10))(FVar9.Data);
  }
  __return_storage_ptr__->Flags = __return_storage_ptr__->Flags | 0x12;
  return __return_storage_ptr__;
}

// FromString @ 14175a970

FText * __cdecl FText::FromString(FText *__return_storage_ptr__,FUtf8String *param_1)

{
  int iVar1;
  FString *pFVar2;
  char *pcVar3;
  int iVar4;
  FString local_18;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
    pcVar3 = "";
  }
  else {
    pcVar3 = (char *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar2 = ::FString::ConstructFromPtrSize(&local_18,(uchar *)pcVar3,iVar4);
  FromString(__return_storage_ptr__,pFVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FromString @ 14175a9d0

FText * __cdecl FText::FromString(FText *__return_storage_ptr__,char *param_1)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = ::FString::FString(&local_18,param_1);
  FromString(__return_storage_ptr__,pFVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FromString @ 14175aa10

FText * __cdecl FText::FromString(FText *__return_storage_ptr__,uchar *param_1)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = ::FString::FString(&local_18,param_1);
  FromString(__return_storage_ptr__,pFVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FromString @ 14175aa50

FText * __cdecl FText::FromString(FText *__return_storage_ptr__,wchar_t *param_1)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = ::FString::FString(&local_18,param_1);
  FromString(__return_storage_ptr__,pFVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FromStringTable @ 14175ad40

FText * __cdecl
FText::FromStringTable
          (FText *__return_storage_ptr__,FName param_1,FTextKey *param_2,
          EStringTableLoadingPolicy param_3)

{
  FTextHistory_StringTableEntry *pFVar1;
  FTextHistory_StringTableEntry *pFVar2;
  
  FStringTableRegistry::Get();
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 == (FTextHistory_StringTableEntry *)0x0) {
    pFVar1 = (FTextHistory_StringTableEntry *)0x0;
  }
  else {
    pFVar2 = FTextHistory_StringTableEntry::FTextHistory_StringTableEntry
                       (pFVar1,param_1,param_2,param_3);
    pFVar1 = (FTextHistory_StringTableEntry *)0x0;
    if (pFVar2 != (FTextHistory_StringTableEntry *)0x0) {
      LOCK();
      *(int *)&pFVar2->_padding_ = (int)pFVar2->_padding_ + 1;
      UNLOCK();
      pFVar1 = pFVar2;
    }
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)pFVar1;
  __return_storage_ptr__->Flags = 0;
  return __return_storage_ptr__;
}

// FromStringView @ 14175add0

FText * __cdecl FText::FromStringView(FText *__return_storage_ptr__,TStringView<char> *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  FText *pFVar4;
  FString *pFVar5;
  ITextData IVar6;
  ITextData IVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  ITextData IVar10;
  uint uVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  ForAnyElementType FVar14;
  ITextData local_res8;
  FString local_38;
  FString local_28;
  
  IVar10 = (ITextData)0x0;
  uVar9 = 0;
  local_res8 = (ITextData)((ulonglong)local_res8 & 0xffffffff00000000);
  if (param_1->Size == 0) {
    pFVar4 = GetEmpty();
    IVar7 = (ITextData)(pFVar4->TextData).Reference;
    if (IVar7 != (ITextData)0x0) {
      (**(code **)((longlong)*(ITextData *)IVar7 + 8))(IVar7,&local_res8);
    }
    uVar9 = pFVar4->Flags;
    bVar3 = true;
    bVar2 = false;
    bVar1 = false;
    FVar8.Data = local_38.Data.AllocatorInstance.Data;
    FVar12.Data = (FScriptContainerElement *)IVar7;
    FVar14.Data = local_28.Data.AllocatorInstance.Data;
  }
  else {
    pFVar5 = ::FString::ConstructFromPtrSize
                       (&local_28,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
    FVar8.Data = (FScriptContainerElement *)IVar10;
    uVar11 = uVar9;
    uVar13 = uVar9;
    if (&local_38 != pFVar5) {
      FVar8.Data = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar11 = (pFVar5->Data).ArrayNum;
      uVar13 = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if ((ITextData)local_28.Data.AllocatorInstance.Data != (ITextData)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    local_res8 = (ITextData)0xffffffffffffffff;
    IVar6 = (ITextData)::operator_new(0x38);
    IVar7 = IVar10;
    if (IVar6 != (ITextData)0x0) {
      *(ITextData *)((longlong)IVar6 + 8) = (ITextData)0x0;
      *(undefined1 *)((longlong)IVar6 + 0x10) = 0;
      *(undefined ***)IVar6 = &___7FTextHistory_Base__6B_;
      *(ITextData *)((longlong)IVar6 + 0x18) = local_res8;
      *(FScriptContainerElement **)((longlong)IVar6 + 0x20) = FVar8.Data;
      *(uint *)((longlong)IVar6 + 0x28) = uVar11;
      *(uint *)((longlong)IVar6 + 0x2c) = uVar13;
      *(ITextData *)((longlong)IVar6 + 0x30) = (ITextData)0x0;
      LOCK();
      *(int *)((longlong)IVar6 + 8) = *(int *)((longlong)IVar6 + 8) + 1;
      UNLOCK();
      IVar7 = IVar6;
      FVar8.Data = (FScriptContainerElement *)IVar10;
    }
    bVar3 = false;
    bVar2 = true;
    bVar1 = true;
    FVar12.Data = local_28.Data.AllocatorInstance.Data;
    FVar14.Data = (FScriptContainerElement *)IVar7;
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)IVar7;
  if (IVar7 != (ITextData)0x0) {
    (**(code **)((longlong)*(ITextData *)IVar7 + 8))(IVar7,&local_res8);
  }
  __return_storage_ptr__->Flags = uVar9;
  if ((bVar1) && ((ITextData)FVar14.Data != (ITextData)0x0)) {
    (**(code **)((longlong)*(ITextData *)FVar14.Data + 0x10))(FVar14.Data);
  }
  if ((bVar2) && ((ITextData)FVar8.Data != (ITextData)0x0)) {
    FMemory::Free(FVar8.Data);
  }
  if ((bVar3) && ((ITextData)FVar12.Data != (ITextData)0x0)) {
    (**(code **)((longlong)*(ITextData *)FVar12.Data + 0x10))(FVar12.Data);
  }
  __return_storage_ptr__->Flags = __return_storage_ptr__->Flags | 0x12;
  return __return_storage_ptr__;
}

// FromStringView @ 14175af60

FText * __cdecl FText::FromStringView(FText *__return_storage_ptr__,TStringView<char8_t> *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  FText *pFVar4;
  FString *pFVar5;
  ITextData IVar6;
  ITextData IVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  ITextData IVar10;
  uint uVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  ForAnyElementType FVar14;
  ITextData local_res8;
  FString local_38;
  FString local_28;
  
  IVar10 = (ITextData)0x0;
  uVar9 = 0;
  local_res8 = (ITextData)((ulonglong)local_res8 & 0xffffffff00000000);
  if (param_1->Size == 0) {
    pFVar4 = GetEmpty();
    IVar7 = (ITextData)(pFVar4->TextData).Reference;
    if (IVar7 != (ITextData)0x0) {
      (**(code **)((longlong)*(ITextData *)IVar7 + 8))(IVar7,&local_res8);
    }
    uVar9 = pFVar4->Flags;
    bVar3 = true;
    bVar2 = false;
    bVar1 = false;
    FVar8.Data = local_38.Data.AllocatorInstance.Data;
    FVar12.Data = (FScriptContainerElement *)IVar7;
    FVar14.Data = local_28.Data.AllocatorInstance.Data;
  }
  else {
    pFVar5 = ::FString::ConstructFromPtrSize
                       (&local_28,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
    FVar8.Data = (FScriptContainerElement *)IVar10;
    uVar11 = uVar9;
    uVar13 = uVar9;
    if (&local_38 != pFVar5) {
      FVar8.Data = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar11 = (pFVar5->Data).ArrayNum;
      uVar13 = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if ((ITextData)local_28.Data.AllocatorInstance.Data != (ITextData)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    local_res8 = (ITextData)0xffffffffffffffff;
    IVar6 = (ITextData)::operator_new(0x38);
    IVar7 = IVar10;
    if (IVar6 != (ITextData)0x0) {
      *(ITextData *)((longlong)IVar6 + 8) = (ITextData)0x0;
      *(undefined1 *)((longlong)IVar6 + 0x10) = 0;
      *(undefined ***)IVar6 = &___7FTextHistory_Base__6B_;
      *(ITextData *)((longlong)IVar6 + 0x18) = local_res8;
      *(FScriptContainerElement **)((longlong)IVar6 + 0x20) = FVar8.Data;
      *(uint *)((longlong)IVar6 + 0x28) = uVar11;
      *(uint *)((longlong)IVar6 + 0x2c) = uVar13;
      *(ITextData *)((longlong)IVar6 + 0x30) = (ITextData)0x0;
      LOCK();
      *(int *)((longlong)IVar6 + 8) = *(int *)((longlong)IVar6 + 8) + 1;
      UNLOCK();
      IVar7 = IVar6;
      FVar8.Data = (FScriptContainerElement *)IVar10;
    }
    bVar3 = false;
    bVar2 = true;
    bVar1 = true;
    FVar12.Data = local_28.Data.AllocatorInstance.Data;
    FVar14.Data = (FScriptContainerElement *)IVar7;
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)IVar7;
  if (IVar7 != (ITextData)0x0) {
    (**(code **)((longlong)*(ITextData *)IVar7 + 8))(IVar7,&local_res8);
  }
  __return_storage_ptr__->Flags = uVar9;
  if ((bVar1) && ((ITextData)FVar14.Data != (ITextData)0x0)) {
    (**(code **)((longlong)*(ITextData *)FVar14.Data + 0x10))(FVar14.Data);
  }
  if ((bVar2) && ((ITextData)FVar8.Data != (ITextData)0x0)) {
    FMemory::Free(FVar8.Data);
  }
  if ((bVar3) && ((ITextData)FVar12.Data != (ITextData)0x0)) {
    (**(code **)((longlong)*(ITextData *)FVar12.Data + 0x10))(FVar12.Data);
  }
  __return_storage_ptr__->Flags = __return_storage_ptr__->Flags | 0x12;
  return __return_storage_ptr__;
}

// FromStringView @ 14175b0f0

FText * __cdecl FText::FromStringView(FText *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  FText *pFVar4;
  FString *pFVar5;
  ITextData IVar6;
  ITextData IVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  ITextData IVar10;
  uint uVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  ForAnyElementType FVar14;
  ITextData local_res8;
  FString local_38;
  FString local_28;
  
  IVar10 = (ITextData)0x0;
  uVar9 = 0;
  local_res8 = (ITextData)((ulonglong)local_res8 & 0xffffffff00000000);
  if (param_1->Size == 0) {
    pFVar4 = GetEmpty();
    IVar7 = (ITextData)(pFVar4->TextData).Reference;
    if (IVar7 != (ITextData)0x0) {
      (**(code **)((longlong)*(ITextData *)IVar7 + 8))(IVar7,&local_res8);
    }
    uVar9 = pFVar4->Flags;
    bVar3 = true;
    bVar2 = false;
    bVar1 = false;
    FVar8.Data = local_38.Data.AllocatorInstance.Data;
    FVar12.Data = (FScriptContainerElement *)IVar7;
    FVar14.Data = local_28.Data.AllocatorInstance.Data;
  }
  else {
    pFVar5 = ::FString::ConstructFromPtrSize
                       (&local_28,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
    FVar8.Data = (FScriptContainerElement *)IVar10;
    uVar11 = uVar9;
    uVar13 = uVar9;
    if (&local_38 != pFVar5) {
      FVar8.Data = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar11 = (pFVar5->Data).ArrayNum;
      uVar13 = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if ((ITextData)local_28.Data.AllocatorInstance.Data != (ITextData)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    local_res8 = (ITextData)0xffffffffffffffff;
    IVar6 = (ITextData)::operator_new(0x38);
    IVar7 = IVar10;
    if (IVar6 != (ITextData)0x0) {
      *(ITextData *)((longlong)IVar6 + 8) = (ITextData)0x0;
      *(undefined1 *)((longlong)IVar6 + 0x10) = 0;
      *(undefined ***)IVar6 = &___7FTextHistory_Base__6B_;
      *(ITextData *)((longlong)IVar6 + 0x18) = local_res8;
      *(FScriptContainerElement **)((longlong)IVar6 + 0x20) = FVar8.Data;
      *(uint *)((longlong)IVar6 + 0x28) = uVar11;
      *(uint *)((longlong)IVar6 + 0x2c) = uVar13;
      *(ITextData *)((longlong)IVar6 + 0x30) = (ITextData)0x0;
      LOCK();
      *(int *)((longlong)IVar6 + 8) = *(int *)((longlong)IVar6 + 8) + 1;
      UNLOCK();
      IVar7 = IVar6;
      FVar8.Data = (FScriptContainerElement *)IVar10;
    }
    bVar3 = false;
    bVar2 = true;
    bVar1 = true;
    FVar12.Data = local_28.Data.AllocatorInstance.Data;
    FVar14.Data = (FScriptContainerElement *)IVar7;
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)IVar7;
  if (IVar7 != (ITextData)0x0) {
    (**(code **)((longlong)*(ITextData *)IVar7 + 8))(IVar7,&local_res8);
  }
  __return_storage_ptr__->Flags = uVar9;
  if ((bVar1) && ((ITextData)FVar14.Data != (ITextData)0x0)) {
    (**(code **)((longlong)*(ITextData *)FVar14.Data + 0x10))(FVar14.Data);
  }
  if ((bVar2) && ((ITextData)FVar8.Data != (ITextData)0x0)) {
    FMemory::Free(FVar8.Data);
  }
  if ((bVar3) && ((ITextData)FVar12.Data != (ITextData)0x0)) {
    (**(code **)((longlong)*(ITextData *)FVar12.Data + 0x10))(FVar12.Data);
  }
  __return_storage_ptr__->Flags = __return_storage_ptr__->Flags | 0x12;
  return __return_storage_ptr__;
}

// FromTextGenerator @ 14175b280

FText * __cdecl
FText::FromTextGenerator(FText *__return_storage_ptr__,TSharedRef<ITextGenerator,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FTextHistory *this;
  FTextHistory *pFVar2;
  void *local_18;
  undefined8 local_10;
  
  (**(code **)((longlong)*param_1->Object + 8))(param_1->Object,&local_18);
  this = ::operator_new(0x38);
  pFVar2 = (FTextHistory *)0x0;
  if (this != (FTextHistory *)0x0) {
    this->_padding_ = 0;
    this->GlobalRevision = 0;
    this->LocalRevision = 0;
    (this->Mutex).State = (atomic<unsigned_char>)0x0;
    this->_padding_ = (longlong)&___7FTextHistory_Generated__6B_;
    this[1]._padding_ = (longlong)local_18;
    local_18 = (void *)0x0;
    this[1]._padding_ = (int)local_10;
    this[1].GlobalRevision = local_10._4_2_;
    this[1].LocalRevision = local_10._6_2_;
    local_10 = 0;
    FTextHistory::MarkDisplayStringUpToDate(this);
    this->_padding_ = (longlong)&___7FTextHistory_TextGenerator__6B_;
    *(ITextGenerator **)&this[1].Mutex = param_1->Object;
    pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
    this[2]._padding_ = (longlong)pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    LOCK();
    this->_padding_ = this->_padding_ + 1;
    UNLOCK();
    pFVar2 = this;
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)pFVar2;
  __return_storage_ptr__->Flags = 1;
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return __return_storage_ptr__;
}

// GetEmpty @ 14175cdf0

FText * __cdecl FText::GetEmpty(void)

{
  ITextData *pIVar1;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar1 = ::operator_new(0x38);
    StaticEmptyText.TextData.Reference = (ITextData *)0x0;
    if (pIVar1 != (ITextData *)0x0) {
      *(undefined4 *)&pIVar1[2].field_0x1 = 0;
      *(undefined2 *)&pIVar1[2].field_0x5 = 0;
      pIVar1[2].field_0x7 = 0;
      pIVar1[1] = (ITextData)0x0;
      *(undefined1 *)(pIVar1 + 2) = 0;
      *pIVar1 = (ITextData)&___7FTextHistory_Base__6B_;
      pIVar1[3] = (ITextData)0xffffffffffffffff;
      pIVar1[4] = (ITextData)0x0;
      pIVar1[5] = (ITextData)0x0;
      pIVar1[6] = (ITextData)0x0;
      LOCK();
      *(int *)(pIVar1 + 1) = *(int *)(pIVar1 + 1) + 1;
      UNLOCK();
      StaticEmptyText.TextData.Reference = pIVar1;
    }
    StaticEmptyText.Flags = 0;
    atexit(`FText::GetEmpty'::__l2::_dynamic_atexit_destructor_for__StaticEmptyText__);
    _Init_thread_footer(&::_TSS0);
    return &StaticEmptyText;
  }
  return &StaticEmptyText;
}

// GetFormatPatternParameters @ 14175d5e0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
FText::GetFormatPatternParameters
          (FTextFormat *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FMutex *this;
  atomic<unsigned_char> aVar1;
  FTextFormatData *this_00;
  code *pcVar2;
  bool bVar3;
  
  this_00 = (param_1->TextFormatData).Object;
  this = &this_00->CompiledDataMutex;
  if ((this == (FMutex *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  LOCK();
  bVar3 = this->State == (atomic<unsigned_char>)0x0;
  if (bVar3) {
    this->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar3) {
    UE::FMutex::LockSlow(this);
  }
  FTextFormatData::GetFormatArgumentNames_NoLock(this_00,param_2);
  if (this != (FMutex *)0x0) {
    LOCK();
    aVar1 = this->State;
    this->State = (atomic<unsigned_char>)((char)this->State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(this);
    }
  }
  return;
}

// GetHistoricFormatData @ 14175d730

void __thiscall
FText::GetHistoricFormatData
          (FText *this,TArray<FHistoricTextFormatData,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)((longlong)*(this->TextData).Reference + 0x48))();
                    /* WARNING: Could not recover jumptable at 0x00014175d766. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x98))(plVar1,this,param_1,*(code **)(*plVar1 + 0x98));
  return;
}

// GetHistoricNumericData @ 14175e340

bool __thiscall FText::GetHistoricNumericData(FText *this,FHistoricTextNumericData *param_1)

{
  undefined1 uVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(**(code **)((longlong)*(this->TextData).Reference + 0x48))();
                    /* WARNING: Could not recover jumptable at 0x00014175e376. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*plVar2 + 0xa0))(plVar2,this,param_1,*(code **)(*plVar2 + 0xa0));
  return (bool)uVar1;
}

// GetInvariantTimeZone @ 14175e5a0

FString * __cdecl FText::GetInvariantTimeZone(FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Etc/Unknown");
  return __return_storage_ptr__;
}

// GetTextData @ 141761660

ITextData * __thiscall FText::GetTextData(FText *this)

{
  return (this->TextData).Reference;
}

// IdenticalTo @ 141762d00

bool __thiscall FText::IdenticalTo(FText *this,FText *param_1,ETextIdenticalModeFlags param_2)

{
  ITextData *pIVar1;
  code *pcVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int *local_res8;
  int *local_res10;
  
  if ((this->TextData).Reference != (param_1->TextData).Reference) {
    Rebuild(this);
    Rebuild(param_1);
    pIVar1 = (this->TextData).Reference;
    (**(code **)((longlong)*pIVar1 + 0x30))(pIVar1,&local_res8);
    pIVar1 = (param_1->TextData).Reference;
    (**(code **)((longlong)*pIVar1 + 0x30))(pIVar1,&local_res10);
    if (((local_res8 == (int *)0x0) || (local_res10 == (int *)0x0)) || (local_res8 != local_res10))
    {
      if (local_res10 != (int *)0x0) {
        LOCK();
        iVar5 = *local_res10;
        *local_res10 = *local_res10 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          if (*(void **)(local_res10 + 2) != (void *)0x0) {
            FMemory::Free(*(void **)(local_res10 + 2));
          }
          ::operator_delete(local_res10,0x18);
        }
      }
      if (local_res8 != (int *)0x0) {
        LOCK();
        iVar5 = *local_res8;
        *local_res8 = *local_res8 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          if (*(void **)(local_res8 + 2) != (void *)0x0) {
            FMemory::Free(*(void **)(local_res8 + 2));
          }
          ::operator_delete(local_res8,0x18);
        }
      }
      if ((param_2 & DeepCompare) != None) {
        plVar6 = (longlong *)(**(code **)((longlong)*(this->TextData).Reference + 0x48))();
        plVar7 = (longlong *)(**(code **)((longlong)*(param_1->TextData).Reference + 0x48))();
        pcVar2 = *(code **)(*plVar6 + 0x58);
        cVar3 = (**(code **)(*plVar7 + 0x58))(plVar7);
        cVar4 = (*pcVar2)(plVar6);
        if ((cVar4 == cVar3) &&
           (cVar3 = (**(code **)(*plVar6 + 0x70))(plVar6,plVar7,param_2), cVar3 != '\0')) {
          return true;
        }
      }
      if ((((param_2 & LexicalCompareInvariants) == None) || ((this->Flags & 0x12) == 0)) ||
         ((param_1->Flags & 0x12) == 0)) {
        return false;
      }
      Rebuild(this);
      puVar8 = (undefined8 *)(**(code **)((longlong)*(this->TextData).Reference + 0x28))();
      Rebuild(param_1);
      puVar9 = (undefined8 *)(**(code **)((longlong)*(param_1->TextData).Reference + 0x28))();
      iVar5 = *(int *)(puVar8 + 1);
      if (iVar5 != *(int *)(puVar9 + 1)) {
        return *(int *)(puVar9 + 1) + iVar5 == 1;
      }
      if (1 < iVar5) {
        iVar5 = wcscmp((wchar_t *)*puVar8,(wchar_t *)*puVar9);
        return iVar5 == 0;
      }
    }
    else {
      LOCK();
      iVar5 = *local_res10;
      *local_res10 = *local_res10 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        if (*(void **)(local_res10 + 2) != (void *)0x0) {
          FMemory::Free(*(void **)(local_res10 + 2));
        }
        ::operator_delete(local_res10,0x18);
      }
      if (local_res8 != (int *)0x0) {
        LOCK();
        iVar5 = *local_res8;
        *local_res8 = *local_res8 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          if (*(void **)(local_res8 + 2) != (void *)0x0) {
            FMemory::Free(*(void **)(local_res8 + 2));
          }
          ::operator_delete(local_res8,0x18);
        }
      }
    }
  }
  return true;
}

// IsCultureInvariant @ 141766ad0

bool __thiscall FText::IsCultureInvariant(FText *this)

{
  return (bool)((byte)(this->Flags >> 1) & 1);
}

// IsEmpty @ 141766c30

bool __thiscall FText::IsEmpty(FText *this)

{
  longlong lVar1;
  
  Rebuild(this);
  lVar1 = (**(code **)((longlong)*(this->TextData).Reference + 0x28))();
  return *(int *)(lVar1 + 8) < 2;
}

// IsEmptyOrWhitespace @ 141766c80

bool __thiscall FText::IsEmptyOrWhitespace(FText *this)

{
  ushort *puVar1;
  int iVar2;
  bool bVar3;
  undefined8 *puVar4;
  ushort *puVar5;
  undefined1 local_res8 [8];
  
  Rebuild(this);
  puVar4 = (undefined8 *)(**(code **)((longlong)*(this->TextData).Reference + 0x28))();
  iVar2 = *(int *)(puVar4 + 1);
  if (iVar2 < 2) {
LAB_141766cea:
    bVar3 = true;
  }
  else {
    puVar5 = (ushort *)*puVar4;
    puVar1 = puVar5 + (longlong)iVar2 + -1;
    while( true ) {
      if (*(int *)(puVar4 + 1) != iVar2) {
        `TCheckedPointerIterator<wchar_t_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (puVar5 == puVar1) goto LAB_141766cea;
      bVar3 = FTextChar::IsWhitespace((uint)*puVar5);
      if (!bVar3) break;
      puVar5 = puVar5 + 1;
    }
    bVar3 = false;
  }
  return bVar3;
}

// IsFromStringTable @ 141766d10

bool __thiscall FText::IsFromStringTable(FText *this)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(**(code **)((longlong)*(this->TextData).Reference + 0x48))();
  cVar1 = (**(code **)(*plVar2 + 0x58))(plVar2);
  return cVar1 == '\v';
}

// IsInitializedFromString @ 141766ec0

bool __thiscall FText::IsInitializedFromString(FText *this)

{
  return (bool)((byte)(this->Flags >> 4) & 1);
}

// IsNumeric @ 141766fb0

bool __thiscall FText::IsNumeric(FText *this)

{
  bool bVar1;
  FString *this_00;
  
  Rebuild(this);
  this_00 = (FString *)(**(code **)((longlong)*(this->TextData).Reference + 0x28))();
  bVar1 = ::FString::IsNumeric(this_00);
  return bVar1;
}

// IsTransient @ 1417670b0

bool __thiscall FText::IsTransient(FText *this)

{
  return (bool)((byte)this->Flags & 1);
}

// IsWhitespace @ 141767200

bool __cdecl FText::IsWhitespace(wchar_t param_1)

{
  bool bVar1;
  
  bVar1 = FTextChar::IsWhitespace((uint)(ushort)param_1);
  return bVar1;
}

// Join @ 141767840

FText * __cdecl
FText::Join(FText *__return_storage_ptr__,FText *param_1,
           TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> *param_2)

{
  TextJoinImpl<FFormatArgumentValue>(__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// Join @ 141767860

FText * __cdecl
FText::Join(FText *__return_storage_ptr__,FText *param_1,
           TArray<FText,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  undefined1 local_res18 [16];
  
  if (param_2->ArrayNum == 1) {
    pFVar1 = (param_2->AllocatorInstance).Data;
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar2 = *(ITextData **)pFVar1;
    (__return_storage_ptr__->TextData).Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res18);
    }
    __return_storage_ptr__->Flags = *(uint *)(pFVar1 + 8);
    return __return_storage_ptr__;
  }
  TextJoinImpl<FText>(__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// PreloadStringTable @ 14176eae0

void __cdecl FText::PreloadStringTable(FName param_1,FTextKey *param_2)

{
  FTextHistory_StringTableEntry local_38;
  
  FTextHistory_StringTableEntry::FTextHistory_StringTableEntry(&local_38,param_1,param_2,FindOrLoad)
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.StringTableReferenceData.SharedReferenceCount.ReferenceController);
  return;
}

// Rebuild @ 141772080

void __thiscall FText::Rebuild(FText *this)

{
  atomic<unsigned_char> *this_00;
  FMutex FVar1;
  atomic<unsigned_char> aVar2;
  ushort uVar3;
  ITextData *pIVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  longlong *plVar8;
  FTextLocalizationManager *pFVar9;
  FTextId *pFVar10;
  ushort *puVar11;
  ushort uVar12;
  undefined1 local_res8 [8];
  
  pIVar4 = (this->TextData).Reference;
  if (pIVar4 != (ITextData *)0x0) {
    plVar8 = (longlong *)(**(code **)((longlong)*pIVar4 + 0x50))();
    cVar6 = (**(code **)(*plVar8 + 0xa8))(plVar8);
    if (cVar6 != '\0') {
      pFVar9 = FTextLocalizationManager::Get();
      pFVar10 = (FTextId *)(**(code **)(*plVar8 + 0x60))(plVar8,local_res8);
      AcquireSRWLockShared((PSRWLOCK)&pFVar9->TextRevisionRW);
      uVar3 = pFVar9->TextRevisionCounter;
      if ((((pFVar10->Namespace).Index == -1) && ((pFVar10->Key).Index == -1)) ||
         (puVar11 = TMapBase<FTextId,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,unsigned_short,0>_>
                    ::Find((TMapBase<FTextId,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,unsigned_short,0>_>
                            *)&pFVar9->LocalTextRevisions,pFVar10), puVar11 == (ushort *)0x0)) {
        uVar12 = 0;
      }
      else {
        uVar12 = *puVar11;
      }
      ReleaseSRWLockShared((PSRWLOCK)&pFVar9->TextRevisionRW);
      this_00 = (atomic<unsigned_char> *)(plVar8 + 2);
      if ((this_00 == (atomic<unsigned_char> *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      LOCK();
      FVar1.State = *this_00;
      if (FVar1.State == (atomic<unsigned_char>)0x0) {
        *this_00 = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (FVar1.State != (atomic<unsigned_char>)0x0) {
        UE::FMutex::LockSlow((FMutex *)this_00);
      }
      if ((*(ushort *)((longlong)plVar8 + 0xc) != uVar3) ||
         (*(ushort *)((longlong)plVar8 + 0xe) != uVar12)) {
        *(ushort *)((longlong)plVar8 + 0xc) = uVar3;
        *(ushort *)((longlong)plVar8 + 0xe) = uVar12;
        (**(code **)(*plVar8 + 0xb0))(plVar8);
      }
      if (this_00 != (atomic<unsigned_char> *)0x0) {
        LOCK();
        aVar2 = *this_00;
        *this_00 = (atomic<unsigned_char>)((char)*this_00 + -1);
        UNLOCK();
        if (((byte)aVar2 & 2) != 0) {
          UE::FMutex::WakeWaitingThread((FMutex *)this_00);
        }
      }
    }
  }
  return;
}

// RegisterTextGenerator @ 141773470

void __cdecl
FText::RegisterTextGenerator
          (FName param_1,
          TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>
          *param_2)

{
  code *pcVar1;
  FName FVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FTextGeneratorRegistry *lpCriticalSection;
  undefined1 *puVar7;
  FName local_res18 [2];
  FName *local_58;
  undefined1 *local_50;
  undefined1 local_48 [16];
  int local_38;
  FReadAccessScope local_30;
  
  lpCriticalSection = FTextGeneratorRegistry::Get();
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_48,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  local_res18[0] = param_1;
  if (lpCriticalSection == (FTextGeneratorRegistry *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,&local_30);
  if (((local_38 == 0) || ((longlong *)local_48._8_8_ == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*(longlong *)local_48._8_8_ + 0x38))(), cVar3 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_30);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("FactoryFunction.IsBound()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextGeneratorRegistry.cpp"
                       ,0x19,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_30);
  }
  FVar2 = local_res18[0];
  uVar5 = ::GetTypeHash(local_res18[0].ComparisonIndex.Value);
  if (*(int *)&(lpCriticalSection->TextGeneratorFactoryMap).field_0x8 !=
      *(int *)&(lpCriticalSection->TextGeneratorFactoryMap).field_0x34) {
    puVar7 = *(undefined1 **)&(lpCriticalSection->TextGeneratorFactoryMap).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(lpCriticalSection->TextGeneratorFactoryMap).field_0x38;
    }
    iVar6 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(lpCriticalSection->TextGeneratorFactoryMap).field_0x48 - 1U
                              & FVar2.Number + uVar5) * 4);
    if (iVar6 != -1) {
      do {
        if (*(FName *)(*(longlong *)&lpCriticalSection->TextGeneratorFactoryMap +
                      (longlong)iVar6 * 0x28) == FVar2) {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_6848333578334371814>,true,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextGeneratorRegistry.cpp"
                             ,0x1a,"!TextGeneratorFactoryMap.Contains(TypeID)");
          if (bVar4) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          break;
        }
        iVar6 = *(int *)(*(longlong *)&lpCriticalSection->TextGeneratorFactoryMap + 0x20 +
                        (longlong)iVar6 * 0x28);
      } while (iVar6 != -1);
    }
  }
  local_58 = local_res18;
  local_50 = local_48;
  TSet<TTuple<FName,TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FName,TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FName_const_&,TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>_&&>_>
            ((TSet<TTuple<FName,TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FName,TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)&lpCriticalSection->TextGeneratorFactoryMap,
             (TPairInitializer<FName_const_&,TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>_&&>
              *)&stack0x00000008,(bool *)&local_58);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_48);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  return;
}

// SerializeText @ 14177c560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FText::SerializeText(FArchive *param_1,FText *param_2)

{
  FStructuredArchiveFromArchive *this;
  FStructuredArchiveSlot FVar1;
  undefined1 auStack_1c8 [40];
  FStructuredArchiveFromArchive local_1a0;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1a0,param_1);
  FVar1 = FStructuredArchiveFromArchive::GetSlot(this);
  SerializeText(*(FStructuredArchiveSlot *)FVar1,param_2);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1a0);
  return;
}

// SerializeText @ 14177c5d0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl FText::SerializeText(FStructuredArchiveSlot param_1,FText *param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined1 *puVar3;
  code *pcVar4;
  FSlotBase FVar5;
  byte bVar6;
  bool bVar7;
  int iVar8;
  FArchiveState *this;
  FArchive *pFVar9;
  ITextData *pIVar10;
  longlong lVar11;
  longlong *plVar12;
  FString *pFVar13;
  TRefCountPtr<FTextHistory_Base> TVar14;
  int *piVar15;
  TRefCountPtr<FTextHistory_NamedFormat> TVar16;
  TRefCountPtr<FTextHistory_OrderedFormat> TVar17;
  TRefCountPtr<FTextHistory_ArgumentDataFormat> TVar18;
  TRefCountPtr<FTextHistory_AsNumber> TVar19;
  TRefCountPtr<FTextHistory_AsPercent> TVar20;
  TRefCountPtr<FTextHistory_AsCurrency> TVar21;
  TRefCountPtr<FTextHistory_AsDate> TVar22;
  TRefCountPtr<FTextHistory_AsTime> TVar23;
  TRefCountPtr<FTextHistory_AsDateTime> TVar24;
  TRefCountPtr<FTextHistory_Transform> TVar25;
  TRefCountPtr<FTextHistory_StringTableEntry> TVar26;
  FText *pFVar27;
  ITextData *pIVar28;
  ITextData *pIVar29;
  ITextData IVar30;
  FSlotBase local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  bool local_128;
  bool local_127 [3];
  FTextKey local_124;
  FTextKey local_120 [2];
  FString local_118;
  FString local_108;
  FSlotBase local_f8;
  FSlotBase local_f0;
  int local_e8;
  int iStack_e4;
  undefined8 local_e0;
  ITextData local_d8;
  undefined1 local_d0 [8];
  undefined8 *local_c8;
  FTextHistory *local_c0;
  FTextHistory *local_b8;
  FTextHistory *local_b0;
  FTextHistory *local_a8;
  FTextHistory *local_a0;
  FTextHistory *local_98;
  undefined8 *local_90;
  FTextHistory *local_88;
  FTextHistory *local_80;
  FTextHistory *local_78;
  FTextHistory *local_70;
  TRefCountPtr<ITextData> local_68;
  undefined4 local_60;
  FString local_58;
  
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  this = (FArchiveState *)
         UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  FVar5.StructuredArchive = local_res8.StructuredArchive;
  (**(code **)(this->_padding_ + 0x230))(this,&FEditorObjectVersion::GUID);
  pIVar29 = (ITextData *)0x0;
  if ((this->ArIsLoading != 0) && ((this->ArUEVer).FileVersionUE4 < 0x170)) {
    local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.Data.ArrayNum = 0;
    local_118.Data.ArrayMax = 0;
    ::operator<<((FVar5.StructuredArchive)->Formatter->Inner,&local_118);
    local_e0 = 0xffffffffffffffff;
    if ((this->ArUEVer).FileVersionUE4 < 0xe2) {
      IVar30 = (ITextData)0xffffffffffffffff;
    }
    else {
      local_124.Index = -1;
      local_f8.StructuredArchive = FVar5.StructuredArchive;
      UE::StructuredArchive::Private::FSlotBase::GetArchiveState(&local_f8);
      pFVar9 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_f8);
      FTextKey::SerializeAsString(&local_124,pFVar9);
      local_120[0].Index = -1;
      local_f0.StructuredArchive = FVar5.StructuredArchive;
      UE::StructuredArchive::Private::FSlotBase::GetArchiveState(&local_f0);
      pFVar9 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_f0);
      FTextKey::SerializeAsString(local_120,pFVar9);
      local_e8 = local_124.Index;
      iStack_e4 = local_120[0].Index;
      IVar30._4_4_ = local_120[0].Index;
      IVar30._0_4_ = local_124.Index;
    }
    pIVar10 = ::operator_new(0x38);
    pIVar28 = pIVar29;
    if (pIVar10 != (ITextData *)0x0) {
      pIVar10[1] = (ITextData)0x0;
      *(undefined1 *)(pIVar10 + 2) = 0;
      pIVar10[3] = IVar30;
      *pIVar10 = (ITextData)&___7FTextHistory_Base__6B_;
      pIVar10[4] = (ITextData)local_118.Data.AllocatorInstance.Data;
      local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pIVar10 + 5) = local_118.Data.ArrayNum;
      *(int *)&pIVar10[5].field_0x4 = local_118.Data.ArrayMax;
      local_118.Data.ArrayNum = 0;
      local_118.Data.ArrayMax = 0;
      pIVar10[6] = (ITextData)0x0;
      LOCK();
      *(int *)(pIVar10 + 1) = *(int *)(pIVar10 + 1) + 1;
      UNLOCK();
      pIVar28 = pIVar10;
    }
    pIVar10 = (param_2->TextData).Reference;
    (param_2->TextData).Reference = pIVar28;
    if (pIVar10 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar10 + 0x10))();
    }
    if ((ITextData)local_118.Data.AllocatorInstance.Data != (ITextData)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
  }
  uVar1 = param_2->Flags;
  if ((this->ArIsSaving != '\0') && (this->ArIsPersistent != 0)) {
    param_2->Flags = uVar1 & 0xffffffeb;
  }
  pFVar9 = (FVar5.StructuredArchive)->Formatter->Inner;
  puVar2 = (uint *)**(undefined8 **)&pFVar9->field_0x8;
  if ((uint *)(*(undefined8 **)&pFVar9->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar9->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar9 + 0x188))(pFVar9,&param_2->Flags,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar9,&param_2->Flags);
    }
  }
  else {
    param_2->Flags = *puVar2;
    **(longlong **)&pFVar9->field_0x8 = **(longlong **)&pFVar9->field_0x8 + 4;
  }
  if ((this->ArIsLoading != 0) && (this->ArIsPersistent != 0)) {
    param_2->Flags = param_2->Flags & 0xffffffeb;
  }
  bVar6 = this->field_0x28;
  if (this->ArIsSaving != '\0') {
    param_2->Flags = uVar1;
    bVar6 = this->field_0x28;
  }
  if ((this->ArUEVer).FileVersionUE4 < 0x170) goto LAB_14177ca45;
  if ((bVar6 & 4) != 0) {
    Rebuild(param_2);
    lVar11 = (**(code **)((longlong)*(param_2->TextData).Reference + 0x28))();
    if ((*(int *)(lVar11 + 8) < 2) || ((param_2->Flags & 2) != 0)) {
      local_res20[0] = 0xff;
      pFVar9 = (FVar5.StructuredArchive)->Formatter->Inner;
      puVar3 = (undefined1 *)**(undefined8 **)&pFVar9->field_0x8;
      if ((undefined1 *)(*(undefined8 **)&pFVar9->field_0x8)[1] < puVar3 + 1) {
        (**(code **)(*(longlong *)pFVar9 + 0x188))(pFVar9,local_res20,1);
      }
      else {
        local_res20[0] = *puVar3;
        **(longlong **)&pFVar9->field_0x8 = **(longlong **)&pFVar9->field_0x8 + 1;
      }
      Rebuild(param_2);
      lVar11 = (**(code **)((longlong)*(param_2->TextData).Reference + 0x28))();
      if ((*(int *)(lVar11 + 8) < 2) || ((param_2->Flags & 2) == 0)) {
        local_128 = false;
      }
      else {
        local_128 = true;
      }
      ::operator<<((FVar5.StructuredArchive)->Formatter->Inner,&local_128);
      if (local_128 != false) {
        pFVar13 = (FString *)(**(code **)((longlong)*(param_2->TextData).Reference + 0x20))();
        ::FString::FString(&local_58,pFVar13);
        ::operator<<((FVar5.StructuredArchive)->Formatter->Inner,&local_58);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      goto LAB_14177ca45;
    }
    plVar12 = (longlong *)(**(code **)((longlong)*(param_2->TextData).Reference + 0x48))();
    local_res18[0] = (**(code **)(*plVar12 + 0x58))(plVar12);
    pFVar9 = (FVar5.StructuredArchive)->Formatter->Inner;
    puVar3 = (undefined1 *)**(undefined8 **)&pFVar9->field_0x8;
    if ((undefined1 *)(*(undefined8 **)&pFVar9->field_0x8)[1] < puVar3 + 1) {
      (**(code **)(*(longlong *)pFVar9 + 0x188))(pFVar9,local_res18,1);
    }
    else {
      local_res18[0] = *puVar3;
      **(longlong **)&pFVar9->field_0x8 = **(longlong **)&pFVar9->field_0x8 + 1;
    }
    goto LAB_14177ca01;
  }
  if ((bVar6 & 1) == 0) goto LAB_14177ca01;
  local_res10[0] = 0xff;
  pFVar9 = (FVar5.StructuredArchive)->Formatter->Inner;
  puVar3 = (undefined1 *)**(undefined8 **)&pFVar9->field_0x8;
  if ((undefined1 *)(*(undefined8 **)&pFVar9->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)pFVar9 + 0x188))(pFVar9,local_res10,1);
  }
  else {
    local_res10[0] = *puVar3;
    **(longlong **)&pFVar9->field_0x8 = **(longlong **)&pFVar9->field_0x8 + 1;
  }
  switch(local_res10[0]) {
  case 0:
    TVar14 = MakeRefCount<FTextHistory_Base>();
    TRefCountPtr<ITextData>::operator=<FTextHistory_Base>
              (&param_2->TextData,(TRefCountPtr<FTextHistory_Base> *)TVar14.Reference);
    local_90 = local_c8;
    goto LAB_14177c9a4;
  case 1:
    TVar16 = MakeRefCount<FTextHistory_NamedFormat>();
    pIVar29 = (param_2->TextData).Reference;
    (param_2->TextData).Reference = (ITextData *)(TVar16.Reference)->_padding_;
    (TVar16.Reference)->_padding_ = 0;
    local_70 = local_c0;
    if (pIVar29 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar29 + 0x10))(pIVar29);
      local_70 = local_c0;
    }
    break;
  case 2:
    TVar17 = MakeRefCount<FTextHistory_OrderedFormat>();
    pIVar29 = (param_2->TextData).Reference;
    (param_2->TextData).Reference = (ITextData *)(TVar17.Reference)->_padding_;
    (TVar17.Reference)->_padding_ = 0;
    local_70 = local_b8;
    if (pIVar29 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar29 + 0x10))(pIVar29);
      local_70 = local_b8;
    }
    break;
  case 3:
    TVar18 = MakeRefCount<FTextHistory_ArgumentDataFormat>();
    pIVar29 = (param_2->TextData).Reference;
    (param_2->TextData).Reference = (ITextData *)(TVar18.Reference)->_padding_;
    (TVar18.Reference)->_padding_ = 0;
    local_70 = local_b0;
    if (pIVar29 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar29 + 0x10))(pIVar29);
      local_70 = local_b0;
    }
    break;
  case 4:
    TVar19 = MakeRefCount<FTextHistory_AsNumber>();
    pIVar29 = (param_2->TextData).Reference;
    (param_2->TextData).Reference = *(ITextData **)TVar19.Reference;
    *(undefined8 *)TVar19.Reference = 0;
    local_70 = local_a8;
    if (pIVar29 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar29 + 0x10))(pIVar29);
      local_70 = local_a8;
    }
    break;
  case 5:
    TVar20 = MakeRefCount<FTextHistory_AsPercent>();
    pIVar29 = (param_2->TextData).Reference;
    (param_2->TextData).Reference = *(ITextData **)TVar20.Reference;
    *(undefined8 *)TVar20.Reference = 0;
    local_70 = local_a0;
    if (pIVar29 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar29 + 0x10))(pIVar29);
      local_70 = local_a0;
    }
    break;
  case 6:
    TVar21 = MakeRefCount<FTextHistory_AsCurrency>();
    pIVar29 = (param_2->TextData).Reference;
    (param_2->TextData).Reference = (ITextData *)(TVar21.Reference)->_padding_;
    (TVar21.Reference)->_padding_ = 0;
    local_70 = local_98;
    if (pIVar29 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar29 + 0x10))(pIVar29);
      local_70 = local_98;
    }
    break;
  case 7:
    TVar22 = MakeRefCount<FTextHistory_AsDate>();
    TRefCountPtr<ITextData>::operator=<FTextHistory_AsDate>
              (&param_2->TextData,(TRefCountPtr<FTextHistory_AsDate> *)TVar22.Reference);
LAB_14177c9a4:
    if (local_90 != (undefined8 *)0x0) {
      piVar15 = (int *)(local_90 + 1);
      LOCK();
      iVar8 = *piVar15;
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (((iVar8 == 1) && (piVar15 != (int *)0x0)) && (local_90 != (undefined8 *)0x0)) {
        (**(code **)*local_90)(local_90,1);
      }
    }
    goto LAB_14177ca01;
  case 8:
    TVar23 = MakeRefCount<FTextHistory_AsTime>();
    TRefCountPtr<ITextData>::operator=<FTextHistory_AsTime>
              (&param_2->TextData,(TRefCountPtr<FTextHistory_AsTime> *)TVar23.Reference);
    local_70 = local_88;
    break;
  case 9:
    TVar24 = MakeRefCount<FTextHistory_AsDateTime>();
    pIVar29 = (param_2->TextData).Reference;
    (param_2->TextData).Reference = (ITextData *)(TVar24.Reference)->_padding_;
    (TVar24.Reference)->_padding_ = 0;
    local_70 = local_80;
    if (pIVar29 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar29 + 0x10))(pIVar29);
      local_70 = local_80;
    }
    break;
  case 10:
    TVar25 = MakeRefCount<FTextHistory_Transform>();
    TRefCountPtr<ITextData>::operator=<FTextHistory_Transform>
              (&param_2->TextData,(TRefCountPtr<FTextHistory_Transform> *)TVar25.Reference);
    local_70 = local_78;
    break;
  case 0xb:
    TVar26 = MakeRefCount<FTextHistory_StringTableEntry>();
    TRefCountPtr<ITextData>::operator=<FTextHistory_StringTableEntry>
              (&param_2->TextData,(TRefCountPtr<FTextHistory_StringTableEntry> *)TVar26.Reference);
    break;
  case 0xc:
    pIVar28 = ::operator_new(0x38);
    if (pIVar28 != (ITextData *)0x0) {
      *(undefined4 *)&pIVar28[2].field_0x1 = 0;
      *(undefined2 *)&pIVar28[2].field_0x5 = 0;
      pIVar28[2].field_0x7 = 0;
      pIVar28[1] = (ITextData)0x0;
      *(undefined1 *)(pIVar28 + 2) = 0;
      pIVar28[3] = (ITextData)0x0;
      pIVar28[4] = (ITextData)0x0;
      *pIVar28 = (ITextData)&___7FTextHistory_TextGenerator__6B_;
      pIVar28[5] = (ITextData)0x0;
      pIVar28[6] = (ITextData)0x0;
      LOCK();
      *(int *)(pIVar28 + 1) = *(int *)(pIVar28 + 1) + 1;
      UNLOCK();
      pIVar29 = pIVar28;
    }
    pIVar28 = (param_2->TextData).Reference;
    (param_2->TextData).Reference = pIVar29;
    if (pIVar28 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar28 + 0x10))();
    }
    goto LAB_14177ca01;
  default:
    pFVar27 = GetEmpty();
    pIVar28 = (param_2->TextData).Reference;
    pIVar10 = (pFVar27->TextData).Reference;
    if (pIVar28 != pIVar10) {
      (param_2->TextData).Reference = pIVar10;
      if (pIVar10 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar10 + 8))(pIVar10,local_d0);
      }
      if (pIVar28 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar28 + 0x10))(pIVar28);
      }
    }
    iVar8 = FArchiveState::CustomVer(this,&FEditorObjectVersion::GUID);
    if (0x1f < iVar8) {
      local_127[0] = false;
      ::operator<<((FVar5.StructuredArchive)->Formatter->Inner,local_127);
      if (local_127[0] != false) {
        local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_108.Data.ArrayNum = 0;
        local_108.Data.ArrayMax = 0;
        ::operator<<((FVar5.StructuredArchive)->Formatter->Inner,&local_108);
        local_d8 = (ITextData)0xffffffffffffffff;
        pIVar28 = ::operator_new(0x38);
        if (pIVar28 != (ITextData *)0x0) {
          pIVar28[1] = (ITextData)0x0;
          *pIVar28 = (ITextData)&___7FTextHistory_Base__6B_;
          *(undefined1 *)(pIVar28 + 2) = 0;
          pIVar28[3] = local_d8;
          pIVar28[4] = (ITextData)local_108.Data.AllocatorInstance.Data;
          local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(pIVar28 + 5) = local_108.Data.ArrayNum;
          *(int *)&pIVar28[5].field_0x4 = local_108.Data.ArrayMax;
          local_108.Data.ArrayNum = 0;
          local_108.Data.ArrayMax = 0;
          pIVar28[6] = (ITextData)0x0;
          LOCK();
          *(int *)(pIVar28 + 1) = *(int *)(pIVar28 + 1) + 1;
          UNLOCK();
          pIVar29 = pIVar28;
        }
        local_60 = 0;
        local_68.Reference = pIVar29;
        TRefCountPtr<ITextData>::operator=(&param_2->TextData,&local_68);
        if (local_68.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_68.Reference + 0x10))();
        }
        if ((ITextData)local_108.Data.AllocatorInstance.Data != (ITextData)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
      }
    }
    goto LAB_14177ca45;
  }
  if (local_70 != (FTextHistory *)0x0) {
    FTextHistory::Release(local_70);
  }
LAB_14177ca01:
  if (((param_2->TextData).Reference == (ITextData *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value.TextData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\Text.cpp"
                         ,0x412,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  plVar12 = (longlong *)(**(code **)((longlong)*(param_2->TextData).Reference + 0x50))();
  (**(code **)(*plVar12 + 0x78))(plVar12,FVar5.StructuredArchive);
LAB_14177ca45:
  if (this->ArIsLoading != 0) {
    Rebuild(param_2);
  }
  bVar7 = ShouldGatherForLocalization(param_2);
  if (bVar7) {
    FArchiveState::ThisRequiresLocalizationGather(this);
  }
  return;
}

// ShouldGatherForLocalization @ 14177de80

bool __thiscall FText::ShouldGatherForLocalization(FText *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  bVar2 = FGenericPlatformProcess::SupportsMultithreading();
  if (!bVar2) {
    return false;
  }
  plVar5 = (longlong *)(**(code **)((longlong)*(this->TextData).Reference + 0x20))();
  if ((this->Flags & 3) == 0) {
    plVar6 = (longlong *)(**(code **)((longlong)*(this->TextData).Reference + 0x48))();
    cVar3 = (**(code **)(*plVar6 + 0x58))(plVar6);
    if ((cVar3 != '\v') && (1 < (int)plVar5[1])) {
      iVar8 = 0;
      lVar9 = 0;
      while( true ) {
        iVar7 = (int)plVar5[1] + -1;
        if ((int)plVar5[1] == 0) {
          iVar7 = 0;
        }
        if (iVar7 <= iVar8) break;
        if ((iVar8 < 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                               ,0x113,
                               L"String index out of bounds: Index %i from a string with a length of %i"
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        bVar2 = FTextChar::IsWhitespace((uint)*(ushort *)(lVar9 + *plVar5));
        if (!bVar2) {
          return true;
        }
        iVar8 = iVar8 + 1;
        lVar9 = lVar9 + 2;
      }
    }
  }
  return false;
}

// ToLower @ 14177f6a0

FText * __thiscall FText::ToLower(FText *this,FText *__return_storage_ptr__)

{
  FString *pFVar1;
  FTextHistory *this_00;
  undefined1 local_res8 [8];
  FString local_28;
  FText local_18;
  
  Rebuild(this);
  pFVar1 = (FString *)(**(code **)((longlong)*(this->TextData).Reference + 0x28))();
  FTextTransformer::ToLower(&local_28,pFVar1);
  this_00 = ::operator_new(0x40);
  if (this_00 == (FTextHistory *)0x0) {
    this_00 = (FTextHistory *)0x0;
  }
  else {
    local_18.TextData.Reference = (this->TextData).Reference;
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 8))
                (local_18.TextData.Reference,local_res8);
    }
    local_18.Flags = this->Flags;
    this_00->_padding_ = 0;
    this_00->GlobalRevision = 0;
    this_00->LocalRevision = 0;
    (this_00->Mutex).State = (atomic<unsigned_char>)0x0;
    this_00->_padding_ = (longlong)&___7FTextHistory_Generated__6B_;
    this_00[1]._padding_ = (longlong)local_28.Data.AllocatorInstance.Data;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00[1]._padding_ = local_28.Data.ArrayNum;
    this_00[1].GlobalRevision = (undefined2)local_28.Data.ArrayMax;
    this_00[1].LocalRevision = local_28.Data.ArrayMax._2_2_;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    FTextHistory::MarkDisplayStringUpToDate(this_00);
    this_00->_padding_ = (longlong)&___7FTextHistory_Transform__6B_;
    FText((FText *)&this_00[1].Mutex,&local_18);
    *(undefined1 *)&this_00[2]._padding_ = 0;
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    LOCK();
    this_00->_padding_ = this_00->_padding_ + 1;
    UNLOCK();
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)this_00;
  __return_storage_ptr__->Flags = 1;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ToString @ 14177f890

FString * __thiscall FText::ToString(FText *this)

{
  FString *pFVar1;
  
  Rebuild(this);
                    /* WARNING: Could not recover jumptable at 0x00014177f8a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FString *)(**(code **)((longlong)*(this->TextData).Reference + 0x28))();
  return pFVar1;
}

// ToUpper @ 14177f9f0

FText * __thiscall FText::ToUpper(FText *this,FText *__return_storage_ptr__)

{
  FString *pFVar1;
  FTextHistory *this_00;
  undefined1 local_res8 [8];
  FString local_28;
  FText local_18;
  
  Rebuild(this);
  pFVar1 = (FString *)(**(code **)((longlong)*(this->TextData).Reference + 0x28))();
  FTextTransformer::ToUpper(&local_28,pFVar1);
  this_00 = ::operator_new(0x40);
  if (this_00 == (FTextHistory *)0x0) {
    this_00 = (FTextHistory *)0x0;
  }
  else {
    local_18.TextData.Reference = (this->TextData).Reference;
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 8))
                (local_18.TextData.Reference,local_res8);
    }
    local_18.Flags = this->Flags;
    this_00->_padding_ = 0;
    this_00->GlobalRevision = 0;
    this_00->LocalRevision = 0;
    (this_00->Mutex).State = (atomic<unsigned_char>)0x0;
    this_00->_padding_ = (longlong)&___7FTextHistory_Generated__6B_;
    this_00[1]._padding_ = (longlong)local_28.Data.AllocatorInstance.Data;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00[1]._padding_ = local_28.Data.ArrayNum;
    this_00[1].GlobalRevision = (undefined2)local_28.Data.ArrayMax;
    this_00[1].LocalRevision = local_28.Data.ArrayMax._2_2_;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    FTextHistory::MarkDisplayStringUpToDate(this_00);
    this_00->_padding_ = (longlong)&___7FTextHistory_Transform__6B_;
    FText((FText *)&this_00[1].Mutex,&local_18);
    *(undefined1 *)&this_00[2]._padding_ = 1;
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    LOCK();
    this_00->_padding_ = this_00->_padding_ + 1;
    UNLOCK();
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)this_00;
  __return_storage_ptr__->Flags = 1;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// TrimPreceding @ 14177fd00

FText * __cdecl FText::TrimPreceding(FText *__return_storage_ptr__,FText *param_1)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  FText *pFVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  wchar_t *pwVar13;
  undefined1 local_res10 [8];
  FString local_48;
  FText local_38;
  FText local_28;
  
  uVar10 = 0;
  Rebuild(param_1);
  plVar6 = (longlong *)(**(code **)((longlong)*(param_1->TextData).Reference + 0x28))();
  uVar11 = uVar10;
  while( true ) {
    iVar8 = (int)plVar6[1];
    iVar12 = 0;
    iVar4 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar4 = iVar12;
    }
    iVar9 = (int)uVar10;
    if (iVar4 <= iVar9) break;
    if ((((iVar9 < 0) || (iVar8 == 0)) || (iVar8 + -1 <= iVar9)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x113,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FText *)(*pcVar2)();
      return pFVar7;
    }
    bVar3 = FTextChar::IsWhitespace((uint)*(ushort *)(uVar11 + *plVar6));
    if (!bVar3) break;
    uVar10 = (ulonglong)(iVar9 + 1);
    uVar11 = uVar11 + 2;
  }
  if (iVar9 == 0) {
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (param_1->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
    }
    __return_storage_ptr__->Flags = param_1->Flags;
  }
  else {
    iVar8 = (int)plVar6[1];
    iVar4 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar4 = iVar12;
    }
    if (iVar8 == 0) {
      pwVar13 = L"";
      iVar8 = iVar12;
    }
    else {
      pwVar13 = (wchar_t *)*plVar6;
      iVar8 = iVar8 + -1;
    }
    iVar5 = iVar8;
    if (iVar4 - iVar9 < iVar8) {
      iVar5 = iVar4 - iVar9;
    }
    if (0 < iVar5) {
      iVar12 = iVar5;
    }
    ::FString::FString(&local_48,pwVar13 + ((longlong)iVar8 - (longlong)iVar12));
    if ((param_1->Flags & 2) == 0) {
      pFVar7 = FromString(&local_28,&local_48);
      FText(__return_storage_ptr__,pFVar7);
      local_38.TextData.Reference = local_28.TextData.Reference;
    }
    else {
      pFVar7 = AsCultureInvariant(&local_38,&local_48);
      FText(__return_storage_ptr__,pFVar7);
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// TrimPrecedingAndTrailing @ 14177fea0

FText * __cdecl FText::TrimPrecedingAndTrailing(FText *__return_storage_ptr__,FText *param_1)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FString *this;
  FText *pFVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  undefined1 local_res10 [8];
  FString local_58;
  FText local_48;
  FText local_38;
  
  uVar8 = 0;
  Rebuild(param_1);
  this = (FString *)(**(code **)((longlong)*(param_1->TextData).Reference + 0x28))();
  uVar11 = uVar8;
  while( true ) {
    iVar7 = (this->Data).ArrayNum;
    iVar4 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar4 = 0;
    }
    iVar10 = (int)uVar11;
    if (iVar4 <= iVar10) break;
    if ((((iVar10 < 0) || (iVar7 == 0)) || (iVar7 + -1 <= iVar10)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x113,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar2)();
      return pFVar5;
    }
    bVar3 = FTextChar::IsWhitespace
                      ((uint)*(ushort *)((this->Data).AllocatorInstance.Data + uVar8 * 2));
    if (!bVar3) break;
    uVar11 = (ulonglong)(iVar10 + 1);
    uVar8 = uVar8 + 1;
  }
  iVar4 = (this->Data).ArrayNum;
  iVar7 = iVar4 + -2;
  if (iVar4 == 0) {
    iVar7 = -1;
  }
  for (lVar9 = (longlong)iVar7; (longlong)uVar8 < lVar9; lVar9 = lVar9 + -1) {
    if (iVar7 < 0) {
code_r0x00014177ff9b:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x113,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FText *)(*pcVar2)();
        return pFVar5;
      }
    }
    else {
      iVar4 = (this->Data).ArrayNum;
      iVar6 = iVar4 + -1;
      if (iVar4 == 0) {
        iVar6 = 0;
      }
      if (iVar6 <= iVar7) goto code_r0x00014177ff9b;
    }
    bVar3 = FTextChar::IsWhitespace
                      ((uint)*(ushort *)((this->Data).AllocatorInstance.Data + lVar9 * 2));
    if (!bVar3) break;
    iVar7 = iVar7 + -1;
  }
  if (iVar10 == 0) {
    iVar6 = (this->Data).ArrayNum;
    iVar4 = iVar6 + -2;
    if (iVar6 == 0) {
      iVar4 = -1;
    }
    if (iVar7 == iVar4) {
      (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
      pIVar1 = (param_1->TextData).Reference;
      (__return_storage_ptr__->TextData).Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
      }
      __return_storage_ptr__->Flags = param_1->Flags;
      return __return_storage_ptr__;
    }
  }
  ::FString::Mid(this,&local_58,iVar10,(iVar7 - iVar10) + 1);
  if ((param_1->Flags & 2) == 0) {
    pFVar5 = FromString(&local_38,&local_58);
    FText(__return_storage_ptr__,pFVar5);
    local_48.TextData.Reference = local_38.TextData.Reference;
  }
  else {
    pFVar5 = AsCultureInvariant(&local_48,&local_58);
    FText(__return_storage_ptr__,pFVar5);
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// TrimTrailing @ 1417800b0

FText * __cdecl FText::TrimTrailing(FText *__return_storage_ptr__,FText *param_1)

{
  int iVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong *plVar6;
  FText *pFVar7;
  int iVar8;
  wchar_t *pwVar9;
  int iVar10;
  longlong lVar11;
  undefined1 local_res10 [8];
  FString local_48;
  FText local_38;
  FText local_28;
  
  Rebuild(param_1);
  plVar6 = (longlong *)(**(code **)((longlong)*(param_1->TextData).Reference + 0x28))();
  iVar10 = (int)plVar6[1] + -2;
  if ((int)plVar6[1] == 0) {
    iVar10 = -1;
  }
  if (-1 < iVar10) {
    lVar11 = (longlong)iVar10 * 2;
    do {
      iVar8 = (int)plVar6[1] + -1;
      if ((int)plVar6[1] == 0) {
        iVar8 = 0;
      }
      if ((iVar8 <= iVar10) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x113,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FText *)(*pcVar3)();
        return pFVar7;
      }
      bVar4 = FTextChar::IsWhitespace((uint)*(ushort *)(lVar11 + *plVar6));
      if (!bVar4) break;
      lVar11 = lVar11 + -2;
      iVar10 = iVar10 + -1;
    } while (-1 < iVar10);
  }
  iVar1 = (int)plVar6[1];
  iVar8 = iVar1 + -1;
  iVar5 = iVar8;
  if (iVar1 == 0) {
    iVar5 = 0;
  }
  if (iVar10 == iVar5 + -1) {
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar2 = (param_1->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res10);
    }
    __return_storage_ptr__->Flags = param_1->Flags;
  }
  else {
    iVar10 = iVar10 + 1;
    if (iVar1 == 0) {
      pwVar9 = L"";
      iVar8 = 0;
      if (iVar10 < 0) {
        iVar8 = iVar10;
      }
      iVar10 = 0;
      if (0 < iVar8) {
        iVar10 = iVar8;
      }
    }
    else {
      pwVar9 = (wchar_t *)*plVar6;
      if (iVar10 < iVar8) {
        iVar8 = iVar10;
      }
      iVar10 = 0;
      if (0 < iVar8) {
        iVar10 = iVar8;
      }
    }
    ::FString::ConstructFromPtrSize(&local_48,pwVar9,iVar10);
    if ((param_1->Flags & 2) == 0) {
      pFVar7 = FromString(&local_28,&local_48);
      FText(__return_storage_ptr__,pFVar7);
      local_38.TextData.Reference = local_28.TextData.Reference;
    }
    else {
      pFVar7 = AsCultureInvariant(&local_38,&local_48);
      FText(__return_storage_ptr__,pFVar7);
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// UnregisterTextGenerator @ 141782000

void __cdecl FText::UnregisterTextGenerator(FName param_1)

{
  uint uVar1;
  FTextGeneratorRegistry *lpCriticalSection;
  uint uStackX_c;
  FName local_res10;
  
  lpCriticalSection = FTextGeneratorRegistry::Get();
  if (lpCriticalSection != (FTextGeneratorRegistry *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_res10 = param_1;
    if (*(int *)&(lpCriticalSection->TextGeneratorFactoryMap).field_0x8 !=
        *(int *)&(lpCriticalSection->TextGeneratorFactoryMap).field_0x34) {
      uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
      uStackX_c = param_1.Number;
      TSet<TTuple<FName,TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FName,TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FName,TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
                           *)&lpCriticalSection->TextGeneratorFactoryMap,uStackX_c + uVar1,
                          &local_res10);
    }
                    /* WARNING: Could not recover jumptable at 0x000141782067. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Format<double> @ 1418b21b0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::Format<double>(FText *__return_storage_ptr__,FTextFormat *param_1,double param_2)

{
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_48;
  FTextFormat local_38;
  FFormatArgumentValue local_28;
  
  local_28.Type = Double;
  local_28.TextValue.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(ITextData *)0x0;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.TextValue.field0_0x0.TypedValue.Flags = 0;
  local_48.ArrayNum = 1;
  local_28.field1_0x8.DoubleValue = param_2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_48.AllocatorInstance,1,&local_48.ArrayMax);
  ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
            (local_48.AllocatorInstance.Data,&local_28,1);
  local_38.TextFormatData.Object = (param_1->TextFormatData).Object;
  local_38.TextFormatData.SharedReferenceCount.ReferenceController =
       (param_1->TextFormatData).SharedReferenceCount.ReferenceController;
  if (local_38.TextFormatData.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.TextFormatData.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  Format(__return_storage_ptr__,&local_38,&local_48);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if ((FFormatArgumentValue *)local_48.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (local_28.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_28.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->TextFormatData).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// Format<FText,FText,FText> @ 1418b22c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::Format<FText,FText,FText>
          (FText *__return_storage_ptr__,FTextFormat *param_1,FText *param_2,FText *param_3,
          FText *param_4)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  undefined1 auStackY_108 [32];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_c8;
  FTextFormat local_b8;
  FFormatArgumentValue local_a8;
  undefined4 local_88;
  FText local_78;
  undefined4 local_68;
  FText local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_a8.Type = Text;
  FText((FText *)&local_a8.TextValue,param_2);
  if (local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  local_88 = 4;
  FText(&local_78,param_3);
  if (local_78.TextData.Reference == (ITextData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  local_68 = 4;
  FText(&local_58,param_4);
  if (local_58.TextData.Reference == (ITextData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,3,0,&local_c8.AllocatorInstance,3,&local_c8.ArrayMax);
  ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
            (local_c8.AllocatorInstance.Data,&local_a8,3);
  local_b8.TextFormatData.Object = (param_1->TextFormatData).Object;
  local_b8.TextFormatData.SharedReferenceCount.ReferenceController =
       (param_1->TextFormatData).SharedReferenceCount.ReferenceController;
  if (local_b8.TextFormatData.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_b8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_b8.TextFormatData.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  Format(__return_storage_ptr__,&local_b8,&local_c8);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
  if ((FFormatArgumentValue *)local_c8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  if (local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->TextFormatData).SharedReferenceCount.ReferenceController);
  pIVar1 = (param_2->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (param_3->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (param_4->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return __return_storage_ptr__;
}

// Format<FText,FText,FText,FText> @ 141bd9c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::Format<FText,FText,FText,FText>
          (FText *__return_storage_ptr__,FTextFormat *param_1,FText *param_2,FText *param_3,
          FText *param_4,FText *param_5)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  undefined1 auStackY_128 [32];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_e8;
  FTextFormat local_d8;
  FFormatArgumentValue local_c8;
  undefined4 local_a8;
  FText local_98;
  undefined4 local_88;
  FText local_78;
  undefined4 local_68;
  FText local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_c8.Type = Text;
  FText((FText *)&local_c8.TextValue,param_2);
  if (local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  local_a8 = 4;
  FText(&local_98,param_3);
  if (local_98.TextData.Reference == (ITextData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  local_88 = 4;
  FText(&local_78,param_4);
  if (local_78.TextData.Reference == (ITextData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  local_68 = 4;
  FText(&local_58,param_5);
  if (local_58.TextData.Reference == (ITextData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,4,0,&local_e8.AllocatorInstance,4,&local_e8.ArrayMax);
  ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
            (local_e8.AllocatorInstance.Data,&local_c8,4);
  local_d8.TextFormatData.Object = (param_1->TextFormatData).Object;
  local_d8.TextFormatData.SharedReferenceCount.ReferenceController =
       (param_1->TextFormatData).SharedReferenceCount.ReferenceController;
  if (local_d8.TextFormatData.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_d8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_d8.TextFormatData.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  Format(__return_storage_ptr__,&local_d8,&local_e8);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum);
  if ((FFormatArgumentValue *)local_e8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  if (local_98.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
  }
  if (local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->TextFormatData).SharedReferenceCount.ReferenceController);
  pIVar1 = (param_2->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (param_3->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (param_4->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (param_5->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return __return_storage_ptr__;
}

// FormatNamed<wchar_t_const_(&)[4],FText_const_&> @ 141bd9e90

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::FormatNamed<wchar_t_const_(&)[4],FText_const_&>
          (FText *__return_storage_ptr__,FTextFormat *param_1,wchar_t (*param_2) [4],FText *param_3)

{
  TTuple<FString,FFormatArgumentValue> *this;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_18;
  
  local_18.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Pairs.ArrayNum = 0;
  local_18.Pairs.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,1,(ForAnyElementType *)&local_18,0,&local_18.Pairs.ArrayMax);
  this = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
         AllocateMemoryForEmplace<wchar_t_const_(&)[4]>(&local_18,param_2);
  ::FString::FString((FString *)this,*param_2);
  FFormatArgumentValue::FFormatArgumentValue((FFormatArgumentValue *)&this->field_0x10,param_3);
  FormatNamedImpl(__return_storage_ptr__,param_1,&local_18);
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_18.Pairs.AllocatorInstance.Data,
             local_18.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_18.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_18.Pairs.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->TextFormatData).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// FormatNamed<wchar_t_const_(&)[6],int> @ 141bd9fc0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::FormatNamed<wchar_t_const_(&)[6],int>
          (FText *__return_storage_ptr__,FTextFormat *param_1,wchar_t (*param_2) [6],int *param_3)

{
  int iVar1;
  TTuple<FString,FFormatArgumentValue> *this;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_28;
  
  local_28.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Pairs.ArrayNum = 0;
  local_28.Pairs.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,1,(ForAnyElementType *)&local_28,0,&local_28.Pairs.ArrayMax);
  this = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
         AllocateMemoryForEmplace<wchar_t_const_(&)[6]>(&local_28,param_2);
  ::FString::FString((FString *)this,*param_2);
  iVar1 = *param_3;
  *(undefined4 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(longlong *)&this->field_0x18 = (longlong)iVar1;
  FormatNamedImpl(__return_storage_ptr__,param_1,&local_28);
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_28.Pairs.AllocatorInstance.Data,
             local_28.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_28.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_28.Pairs.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->TextFormatData).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// FormatNamed<wchar_t_const_(&)[7],FText,wchar_t_const_(&)[7],int> @ 141bda170

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::FormatNamed<wchar_t_const_(&)[7],FText,wchar_t_const_(&)[7],int>
          (FText *__return_storage_ptr__,FTextFormat *param_1,wchar_t (*param_2) [7],FText *param_3,
          wchar_t (*param_4) [7],int *param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TTuple<FString,FFormatArgumentValue> *pTVar4;
  FText *pFVar5;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_28;
  
  local_28.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Pairs.ArrayNum = 0;
  local_28.Pairs.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,2,(ForAnyElementType *)&local_28,0,&local_28.Pairs.ArrayMax);
  pTVar4 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[7]>(&local_28,param_2);
  ::FString::FString((FString *)pTVar4,*param_2);
  *(undefined4 *)&pTVar4->field_0x10 = 4;
  FText((FText *)&pTVar4->field_0x20,param_3);
  if (*(longlong *)&pTVar4->field_0x20 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar2)();
      return pFVar5;
    }
  }
  pTVar4 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[7]>(&local_28,param_4);
  ::FString::FString((FString *)pTVar4,*param_4);
  iVar1 = *param_5;
  *(undefined4 *)&pTVar4->field_0x10 = 0;
  *(undefined8 *)&pTVar4->field_0x20 = 0;
  *(undefined4 *)&pTVar4->field_0x28 = 0;
  *(longlong *)&pTVar4->field_0x18 = (longlong)iVar1;
  FormatNamedImpl(__return_storage_ptr__,param_1,&local_28);
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_28.Pairs.AllocatorInstance.Data,
             local_28.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_28.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_28.Pairs.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->TextFormatData).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// FormatNamed<wchar_t_const_(&)[7],enum_ETextGender> @ 141bda320

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::FormatNamed<wchar_t_const_(&)[7],enum_ETextGender>
          (FText *__return_storage_ptr__,FTextFormat *param_1,wchar_t (*param_2) [7],
          ETextGender *param_3)

{
  ETextGender EVar1;
  TTuple<FString,FFormatArgumentValue> *this;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_28;
  
  local_28.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Pairs.ArrayNum = 0;
  local_28.Pairs.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,1,(ForAnyElementType *)&local_28,0,&local_28.Pairs.ArrayMax);
  this = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
         AllocateMemoryForEmplace<wchar_t_const_(&)[7]>(&local_28,param_2);
  ::FString::FString((FString *)this,*param_2);
  EVar1 = *param_3;
  *(undefined4 *)&this->field_0x10 = 5;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(ulonglong *)&this->field_0x18 = (ulonglong)EVar1;
  FormatNamedImpl(__return_storage_ptr__,param_1,&local_28);
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_28.Pairs.AllocatorInstance.Data,
             local_28.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_28.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_28.Pairs.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->TextFormatData).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// FormatNamed<wchar_t_const_(&)[8],int> @ 141bda460

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::FormatNamed<wchar_t_const_(&)[8],int>
          (FText *__return_storage_ptr__,FTextFormat *param_1,wchar_t (*param_2) [8],int *param_3)

{
  int iVar1;
  TTuple<FString,FFormatArgumentValue> *this;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_28;
  
  local_28.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Pairs.ArrayNum = 0;
  local_28.Pairs.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,1,(ForAnyElementType *)&local_28,0,&local_28.Pairs.ArrayMax);
  this = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
         AllocateMemoryForEmplace<wchar_t_const_(&)[8]>(&local_28,param_2);
  ::FString::FString((FString *)this,*param_2);
  iVar1 = *param_3;
  *(undefined4 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(longlong *)&this->field_0x18 = (longlong)iVar1;
  FormatNamedImpl(__return_storage_ptr__,param_1,&local_28);
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_28.Pairs.AllocatorInstance.Data,
             local_28.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_28.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_28.Pairs.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->TextFormatData).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// FormatOrdered<FText,int> @ 141bda690

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::FormatOrdered<FText,int>
          (FText *__return_storage_ptr__,FTextFormat *param_1,FText *param_2,int *param_3)

{
  int iVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  int iVar5;
  FText *pFVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_28;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,&local_28.AllocatorInstance,0,&local_28.ArrayMax);
  iVar5 = local_28.ArrayNum;
  if (local_28.ArrayNum == local_28.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_28.AllocatorInstance,&local_28.ArrayMax);
  }
  FVar3.Data = local_28.AllocatorInstance.Data;
  local_28.ArrayNum = iVar5 + 1;
  lVar7 = (longlong)iVar5 * 0x20;
  *(undefined4 *)&local_28.AllocatorInstance.Data[lVar7].field_0x0 = 4;
  FText((FText *)(local_28.AllocatorInstance.Data + lVar7 + 0x10),param_2);
  if (*(longlong *)&FVar3.Data[lVar7 + 0x10].field_0x0 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FText *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar5 = local_28.ArrayNum;
  if (local_28.ArrayNum == local_28.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_28.AllocatorInstance,&local_28.ArrayMax);
  }
  iVar1 = *param_3;
  local_28.ArrayNum = iVar5 + 1;
  pFVar8 = local_28.AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  *(undefined4 *)&pFVar8->field_0x0 = 0;
  *(undefined8 *)(pFVar8 + 0x10) = 0;
  *(undefined4 *)(pFVar8 + 0x18) = 0;
  *(longlong *)(pFVar8 + 8) = (longlong)iVar1;
  FormatOrderedImpl(__return_storage_ptr__,param_1,&local_28);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  if ((FFormatArgumentValue *)local_28.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->TextFormatData).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// ~FText @ 141becdc0

void __thiscall FText::~FText(FText *this)

{
  ITextData *pIVar1;
  
  pIVar1 = (this->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141becdcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x10))();
    return;
  }
  return;
}

