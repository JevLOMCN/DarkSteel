// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// FTextHistory_AsNumber @ 141736d00

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FTextHistory_AsNumber * __thiscall
FTextHistory_AsNumber::FTextHistory_AsNumber
          (FTextHistory_AsNumber *this,FString *param_1,FFormatArgumentValue *param_2,
          FNumberFormattingOptions *param_3,TSharedPtr<FCulture,1> *param_4)

{
  TOptional<FText> *pTVar1;
  TSharedPtr<FCulture,1> local_38;
  FFormatArgumentValue local_28;
  
  pTVar1 = &param_2->TextValue;
  local_38.Object = param_4->Object;
  param_4->Object = (FCulture *)0x0;
  local_38.SharedReferenceCount.ReferenceController =
       (param_4->SharedReferenceCount).ReferenceController;
  (param_4->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_28.field1_0x8 = param_2->field1_0x8;
  local_28.Type = param_2->Type;
  local_28.TextValue.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(ITextData *)0x0;
  local_28.TextValue.field0_0x0.TypedValue.Flags = 0;
  if ((pTVar1->field0_0x0).TypedValue.TextData.Reference != (ITextData *)0x0) {
    FText::FText((FText *)&local_28.TextValue,(FText *)pTVar1);
  }
  FTextHistory_FormatNumber::FTextHistory_FormatNumber
            ((FTextHistory_FormatNumber *)this,param_1,&local_28,param_3,&local_38);
  *(undefined ***)this = &___7FTextHistory_AsNumber__6B_;
  if (*(longlong **)&pTVar1->field0_0x0 != (longlong *)0x0) {
    (**(code **)(**(longlong **)&pTVar1->field0_0x0 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return this;
}

// BuildInvariantDisplayString @ 141749c00

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall
FTextHistory_AsNumber::BuildInvariantDisplayString
          (FTextHistory_AsNumber *this,FString *__return_storage_ptr__)

{
  FCulture *this_00;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FInternationalization *pFVar4;
  FString *pFVar5;
  FDecimalNumberFormattingRules *pFVar6;
  
  pFVar4 = FInternationalization::Get();
  if (pFVar4->bIsInitialized != true) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("I18N.IsInitialized() == true",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextHistory.cpp"
                       ,0x678,
                       L"FInternationalization is not initialized. An FText formatting method was likely used in static object initialization - this is not supported."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  if ((pFVar4->InvariantCulture).Object == (FCulture *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  this_00 = (pFVar4->InvariantCulture).Object;
  pTVar1 = (pFVar4->InvariantCulture).SharedReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this_00 == (FCulture *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pFVar6 = FCulture::GetDecimalNumberFormattingRules(this_00);
  FTextHistory_FormatNumber::BuildNumericDisplayString
            ((FTextHistory_FormatNumber *)this,__return_storage_ptr__,pFVar6,1);
  return __return_storage_ptr__;
}

// BuildLocalizedDisplayString @ 14174a550

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall
FTextHistory_AsNumber::BuildLocalizedDisplayString
          (FTextHistory_AsNumber *this,FString *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FInternationalization *pFVar4;
  FString *pFVar5;
  FDecimalNumberFormattingRules *pFVar6;
  FCulture *this_00;
  
  pFVar4 = FInternationalization::Get();
  if (pFVar4->bIsInitialized != true) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("I18N.IsInitialized() == true",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextHistory.cpp"
                       ,0x66e,
                       L"FInternationalization is not initialized. An FText formatting method was likely used in static object initialization - this is not supported."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  this_00 = *(FCulture **)&this->field_0x68;
  if (this_00 == (FCulture *)0x0) {
    if ((pFVar4->CurrentLocale).Object == (FCulture *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FString *)(*pcVar2)();
        return pFVar5;
      }
    }
    this_00 = (pFVar4->CurrentLocale).Object;
    pTVar1 = (pFVar4->CurrentLocale).SharedReferenceCount.ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 == (FCulture *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FString *)(*pcVar2)();
        return pFVar5;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  pFVar6 = FCulture::GetDecimalNumberFormattingRules(this_00);
  FTextHistory_FormatNumber::BuildNumericDisplayString
            ((FTextHistory_FormatNumber *)this,__return_storage_ptr__,pFVar6,1);
  return __return_storage_ptr__;
}

// GetHistoricNumericData @ 14175e390

bool __thiscall
FTextHistory_AsNumber::GetHistoricNumericData
          (FTextHistory_AsNumber *this,FText *param_1,FHistoricTextNumericData *param_2)

{
  FHistoricTextNumericData local_58;
  
  local_58.FormatType = AsNumber;
  FFormatArgumentValue::FFormatArgumentValue
            (&local_58.SourceValue,(FFormatArgumentValue *)&this->field_0x28);
  local_58.FormatOptions.bIsSet = (bool)this->field_0x60;
  if (local_58.FormatOptions.bIsSet != false) {
    local_58.FormatOptions.TypedValue.AlwaysSign = (bool)this->field_0x48;
    local_58.FormatOptions.TypedValue.UseGrouping = (bool)this->field_0x49;
    local_58.FormatOptions.TypedValue.IndicateNearlyInteger = (bool)this->field_0x4a;
    local_58.FormatOptions.TypedValue._3_1_ = this->field_0x4b;
    local_58.FormatOptions.TypedValue.RoundingMode = *(ERoundingMode *)&this->field_0x4c;
    local_58.FormatOptions.TypedValue.MinimumIntegralDigits = *(int *)&this->field_0x50;
    local_58.FormatOptions.TypedValue.MaximumIntegralDigits = *(int *)&this->field_0x54;
    local_58.FormatOptions.TypedValue.MinimumFractionalDigits = *(int *)&this->field_0x58;
    local_58.FormatOptions.TypedValue.MaximumFractionalDigits = *(int *)&this->field_0x5c;
  }
  FHistoricTextNumericData::operator=(param_2,&local_58);
  if (local_58.SourceValue.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)
                  local_58.SourceValue.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))()
    ;
  }
  return true;
}

// GetType @ 141761bc0

ETextHistoryType __thiscall FTextHistory_AsNumber::GetType(FTextHistory_AsNumber *this)

{
  return AsNumber;
}

// ReadFromBuffer @ 14176f890

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

wchar_t * __thiscall
FTextHistory_AsNumber::ReadFromBuffer
          (FTextHistory_AsNumber *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  wchar_t *pwVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&TokenMarker,*TextStringificationUtil::LocGenNumberMarker);
      atexit(`FTextHistory_AsNumber::ReadFromBuffer'::__l2::
             _dynamic_atexit_destructor_for__TokenMarker__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pwVar1 = TextStringificationUtil::ReadNumberOrPercentFromBuffer
                     (param_1,&TokenMarker,(FFormatArgumentValue *)&this->field_0x28,
                      (TOptional<FNumberFormattingOptions> *)&this->field_0x48,
                      (TSharedPtr<FCulture,1> *)&this->field_0x68);
  if (pwVar1 == (wchar_t *)0x0) {
    return (wchar_t *)0x0;
  }
  FTextHistory::MarkDisplayStringOutOfDate((FTextHistory *)this);
  return pwVar1;
}

// Serialize @ 14177ab00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FTextHistory_AsNumber::Serialize(FTextHistory_AsNumber *this,FStructuredArchiveRecord param_1)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  bool bVar4;
  FArchive *pFVar5;
  FString *pFVar6;
  FInternationalization *this_00;
  TSharedPtr<FCulture,1> *pTVar7;
  ForAnyElementType FVar8;
  longlong lVar9;
  bool abStackX_8 [8];
  FSlotBase FStackX_10;
  FSlotBase aFStackX_18 [2];
  FString FStack_98;
  ForAnyElementType FStack_88;
  int iStack_80;
  int iStack_7c;
  FString FStack_78;
  TSharedPtr<FCulture,1> TStack_68;
  void *pvStack_58;
  undefined2 uStack_48;
  undefined1 uStack_46;
  undefined1 uStack_45;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  abStackX_8[0] = false;
  abStackX_8[1] = false;
  abStackX_8[2] = false;
  abStackX_8[3] = false;
  FStackX_10.StructuredArchive = (FStructuredArchive *)param_1;
  aFStackX_18[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar5 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(aFStackX_18);
  if ((pFVar5->field_0x28 & 1) != 0) {
    FTextHistory::MarkDisplayStringOutOfDate((FTextHistory *)this);
  }
  pFVar5 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&FStackX_10);
  ::operator<<((FStructuredArchiveSlot)FStackX_10.StructuredArchive,
               (FFormatArgumentValue *)&this->field_0x28);
  abStackX_8[0] = (bool)this->field_0x60;
  ::operator<<((FStackX_10.StructuredArchive)->Formatter->Inner,abStackX_8);
  if ((pFVar5->field_0x28 & 1) == 0) {
LAB_14177b177:
    if (abStackX_8[0] != false) {
      if ((this->field_0x60 == '\0') &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("FormatOptions.IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextHistory.cpp"
                             ,0x638,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((this->field_0x60 == '\0') &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      ::operator<<((FStructuredArchiveSlot)FStackX_10.StructuredArchive,
                   (FNumberFormattingOptions *)&this->field_0x48);
    }
  }
  else {
    if (abStackX_8[0] != false) {
      uStack_48 = 0x100;
      uStack_46 = 0;
      uStack_34 = 3;
      uStack_44 = (undefined4)___xmm_00000000000001440000000100000000;
      uStack_40 = (undefined4)((ulonglong)___xmm_00000000000001440000000100000000 >> 0x20);
      uStack_3c = (undefined4)_UNK_150676978;
      uStack_38 = (undefined4)((ulonglong)_UNK_150676978 >> 0x20);
      if (&uStack_48 != (undefined2 *)&this->field_0x48) {
        *(ulonglong *)&this->field_0x48 = CONCAT44(uStack_44,CONCAT13(uStack_45,0x100));
        *(ulonglong *)&this->field_0x50 = CONCAT44(uStack_3c,uStack_40);
        *(ulonglong *)&this->field_0x58 = CONCAT44(3,uStack_38);
        this->field_0x60 = 1;
      }
      goto LAB_14177b177;
    }
    if (this->field_0x60 != '\0') {
      this->field_0x60 = 0;
    }
  }
  if ((pFVar5->field_0x28 & 4) == 0) {
    if ((pFVar5->field_0x28 & 1) == 0) {
      return;
    }
    FStack_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_78.Data.ArrayNum = 0;
    FStack_78.Data.ArrayMax = 0;
    ::operator<<((FStackX_10.StructuredArchive)->Formatter->Inner,&FStack_78);
    FVar8.Data = FStack_78.Data.AllocatorInstance.Data;
    if (1 < FStack_78.Data.ArrayNum) {
      this_00 = FInternationalization::Get();
      pTVar7 = FInternationalization::GetCulture(this_00,&TStack_68,&FStack_78);
      if ((TSharedPtr<FCulture,1> *)&this->field_0x68 != pTVar7) {
        *(FCulture **)&this->field_0x68 = pTVar7->Object;
        pTVar7->Object = (FCulture *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)&this->field_0x70,&pTVar7->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_68.SharedReferenceCount.ReferenceController);
      FVar8.Data = FStack_78.Data.AllocatorInstance.Data;
    }
    goto LAB_14177b368;
  }
  if (*(FCulture **)&this->field_0x68 == (FCulture *)0x0) {
    bVar2 = false;
    bVar4 = true;
    FStack_98.Data.ArrayNum = 0;
    pvStack_58 = (void *)0x0;
LAB_14177b2bc:
    FStack_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_98.Data.ArrayMax = 0;
    if ((bVar4) && (pvStack_58 != (void *)0x0)) {
      FMemory::Free(pvStack_58);
    }
    if (bVar2) goto LAB_14177b2d9;
  }
  else {
    pFVar6 = FCulture::GetName(*(FCulture **)&this->field_0x68);
    FStack_88.Data = (FScriptContainerElement *)0x0;
    iStack_80 = (pFVar6->Data).ArrayNum;
    lVar9 = (longlong)iStack_80;
    _Src = (pFVar6->Data).AllocatorInstance.Data;
    if (iStack_80 == 0) {
      iStack_7c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iStack_80,0,&FStack_88,iStack_80,&iStack_7c);
      memcpy(FStack_88.Data,_Src,lVar9 * 2);
    }
    iVar3 = iStack_80;
    FVar8.Data = FStack_88.Data;
    bVar2 = true;
    bVar4 = false;
    FStack_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_98.Data.ArrayNum = iStack_80;
    if (iStack_80 == 0) goto LAB_14177b2bc;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iStack_80,0,(ForAnyElementType *)&FStack_98,iStack_80,&FStack_98.Data.ArrayMax);
    memcpy(FStack_98.Data.AllocatorInstance.Data,FVar8.Data,(longlong)iVar3 * 2);
LAB_14177b2d9:
    if (FStack_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_88.Data);
    }
  }
  ::operator<<((FStackX_10.StructuredArchive)->Formatter->Inner,&FStack_98);
  FVar8.Data = FStack_98.Data.AllocatorInstance.Data;
LAB_14177b368:
  if (FVar8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar8.Data);
  }
  return;
}

// ShouldReadFromBuffer @ 14177e020

bool __thiscall
FTextHistory_AsNumber::ShouldReadFromBuffer(FTextHistory_AsNumber *this,wchar_t *param_1)

{
  int iVar1;
  
  iVar1 = wcsncmp(param_1,*TextStringificationUtil::LocGenNumberMarker,0xd);
  return iVar1 == 0;
}

// StaticShouldReadFromBuffer @ 14177eaa0

bool __cdecl FTextHistory_AsNumber::StaticShouldReadFromBuffer(wchar_t *param_1)

{
  int iVar1;
  
  iVar1 = wcsncmp(param_1,*TextStringificationUtil::LocGenNumberMarker,0xd);
  return iVar1 == 0;
}

// WriteToBuffer @ 141785080

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __thiscall
FTextHistory_AsNumber::WriteToBuffer(FTextHistory_AsNumber *this,FString *param_1,bool param_2)

{
  TSharedPtr<FCulture,1> local_18;
  
  local_18.Object = *(FCulture **)&this->field_0x68;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x70;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  TextStringificationUtil::WriteNumberOrPercentToBuffer
            (param_1,*TextStringificationUtil::LocGenNumberMarker,
             (FFormatArgumentValue *)&this->field_0x28,
             (TOptional<FNumberFormattingOptions> *)&this->field_0x48,&local_18,param_2);
  return true;
}

