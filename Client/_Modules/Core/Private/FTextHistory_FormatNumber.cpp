// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// FTextHistory_FormatNumber @ 141737060

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FTextHistory_FormatNumber * __thiscall
FTextHistory_FormatNumber::FTextHistory_FormatNumber
          (FTextHistory_FormatNumber *this,FString *param_1,FFormatArgumentValue *param_2,
          FNumberFormattingOptions *param_3,TSharedPtr<FCulture,1> *param_4)

{
  TOptional<FText> *this_00;
  TOptional<FText> *pTVar1;
  TOptional<FNumberFormattingOptions> *pTVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  ERoundingMode EVar6;
  int iVar7;
  int iVar8;
  
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FTextHistory_Generated__6B_;
  this->_padding_ = 0;
  this->_padding_ = (longlong)(param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&this->_padding_ = (param_1->Data).ArrayNum;
  *(int *)((longlong)&this->_padding_ + 4) = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  FTextHistory::MarkDisplayStringUpToDate((FTextHistory *)this);
  this->_padding_ = (longlong)&___7FTextHistory_FormatNumber__6B_;
  this_00 = &(this->SourceValue).TextValue;
  pTVar1 = &param_2->TextValue;
  (this->SourceValue).Type = param_2->Type;
  (this->SourceValue).field1_0x8 = param_2->field1_0x8;
  (this->SourceValue).field1_0x8 = param_2->field1_0x8;
  (this->SourceValue).field1_0x8.FloatValue = (param_2->field1_0x8).FloatValue;
  (this->SourceValue).field1_0x8 = param_2->field1_0x8;
  (this_00->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
  (this->SourceValue).TextValue.field0_0x0.TypedValue.Flags = 0;
  if ((pTVar1->field0_0x0).TypedValue.TextData.Reference != (ITextData *)0x0) {
    FText::FText((FText *)this_00,(FText *)pTVar1);
  }
  (this->FormatOptions).bIsSet = false;
  (this->TargetCulture).Object = param_4->Object;
  (this->TargetCulture).SharedReferenceCount.ReferenceController =
       (param_4->SharedReferenceCount).ReferenceController;
  (param_4->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_4->Object = (FCulture *)0x0;
  if ((param_3 != (FNumberFormattingOptions *)0x0) &&
     (pTVar2 = &this->FormatOptions, (TOptional<FNumberFormattingOptions> *)param_3 != pTVar2)) {
    bVar3 = param_3->UseGrouping;
    bVar4 = param_3->IndicateNearlyInteger;
    uVar5 = param_3->field_0x3;
    EVar6 = param_3->RoundingMode;
    iVar7 = param_3->MinimumIntegralDigits;
    iVar8 = param_3->MaximumIntegralDigits;
    (pTVar2->TypedValue).AlwaysSign = param_3->AlwaysSign;
    (pTVar2->TypedValue).UseGrouping = bVar3;
    (pTVar2->TypedValue).IndicateNearlyInteger = bVar4;
    (pTVar2->TypedValue).field_0x3 = uVar5;
    (pTVar2->TypedValue).RoundingMode = EVar6;
    (this->FormatOptions).TypedValue.MinimumIntegralDigits = iVar7;
    (this->FormatOptions).TypedValue.MaximumIntegralDigits = iVar8;
    iVar7 = param_3->MaximumFractionalDigits;
    (this->FormatOptions).TypedValue.MinimumFractionalDigits = param_3->MinimumFractionalDigits;
    (this->FormatOptions).TypedValue.MaximumFractionalDigits = iVar7;
    (this->FormatOptions).bIsSet = true;
  }
  if (*(longlong **)&pTVar1->field0_0x0 != (longlong *)0x0) {
    (**(code **)(**(longlong **)&pTVar1->field0_0x0 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return this;
}

// BuildNumericDisplayString @ 14174aa40

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall
FTextHistory_FormatNumber::BuildNumericDisplayString
          (FTextHistory_FormatNumber *this,FString *__return_storage_ptr__,
          FDecimalNumberFormattingRules *param_1,int param_2)

{
  Type TVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  ulong64 uVar5;
  long64 lVar6;
  char cVar7;
  TOptional<FNumberFormattingOptions> *pTVar8;
  FNumberFormattingOptions *pFVar9;
  float fVar10;
  double dVar11;
  FNumberFormattingOptions local_88;
  FNumberFormattingOptions local_68;
  FNumberFormattingOptions local_48;
  FNumberFormattingOptions local_28;
  
  if ((param_2 < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InValueMultiplier > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextHistory.cpp"
                         ,0x650,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar2)();
    return pFVar4;
  }
  TVar1 = (this->SourceValue).Type;
  pTVar8 = &this->FormatOptions;
  if ((this->FormatOptions).bIsSet == false) {
    pTVar8 = (TOptional<FNumberFormattingOptions> *)&param_1->CultureDefaultFormattingOptions;
  }
  if (TVar1 == Int) {
    lVar6 = FFormatArgumentValue::GetIntValue(&this->SourceValue);
    uVar5 = lVar6 * param_2;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    cVar7 = -(char)((longlong)uVar5 >> 0x3f);
    if (cVar7 != '\0') {
      uVar5 = -uVar5;
    }
    local_28.AlwaysSign = (pTVar8->TypedValue).AlwaysSign;
    local_28.UseGrouping = (pTVar8->TypedValue).UseGrouping;
    local_28.IndicateNearlyInteger = (pTVar8->TypedValue).IndicateNearlyInteger;
    local_28._3_1_ = (pTVar8->TypedValue).field_0x3;
    local_28.RoundingMode = (pTVar8->TypedValue).RoundingMode;
    local_28.MinimumIntegralDigits = (pTVar8->TypedValue).MinimumIntegralDigits;
    local_28.MaximumIntegralDigits = (pTVar8->TypedValue).MaximumIntegralDigits;
    pFVar9 = &local_28;
    local_28.MinimumFractionalDigits = (pTVar8->TypedValue).MinimumFractionalDigits;
    local_28.MaximumFractionalDigits = (pTVar8->TypedValue).MaximumFractionalDigits;
  }
  else {
    if (TVar1 != UInt) {
      if (TVar1 == Float) {
        fVar10 = FFormatArgumentValue::GetFloatValue(&this->SourceValue);
        (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (__return_storage_ptr__->Data).ArrayNum = 0;
        (__return_storage_ptr__->Data).ArrayMax = 0;
        local_68.MinimumFractionalDigits = (pTVar8->TypedValue).MinimumFractionalDigits;
        local_68.MaximumFractionalDigits = (pTVar8->TypedValue).MaximumFractionalDigits;
        local_68.AlwaysSign = (pTVar8->TypedValue).AlwaysSign;
        local_68.UseGrouping = (pTVar8->TypedValue).UseGrouping;
        local_68.IndicateNearlyInteger = (pTVar8->TypedValue).IndicateNearlyInteger;
        local_68._3_1_ = (pTVar8->TypedValue).field_0x3;
        local_68.RoundingMode = (pTVar8->TypedValue).RoundingMode;
        local_68.MinimumIntegralDigits = (pTVar8->TypedValue).MinimumIntegralDigits;
        local_68.MaximumIntegralDigits = (pTVar8->TypedValue).MaximumIntegralDigits;
        FastDecimalFormat::Internal::FractionalToString
                  ((double)(fVar10 * (float)param_2),param_1,&local_68,__return_storage_ptr__);
        return __return_storage_ptr__;
      }
      if (TVar1 != Double) {
        (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (__return_storage_ptr__->Data).ArrayNum = 0;
        (__return_storage_ptr__->Data).ArrayMax = 0;
        return __return_storage_ptr__;
      }
      dVar11 = FFormatArgumentValue::GetDoubleValue(&this->SourceValue);
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      local_88.AlwaysSign = (pTVar8->TypedValue).AlwaysSign;
      local_88.UseGrouping = (pTVar8->TypedValue).UseGrouping;
      local_88.IndicateNearlyInteger = (pTVar8->TypedValue).IndicateNearlyInteger;
      local_88._3_1_ = (pTVar8->TypedValue).field_0x3;
      local_88.RoundingMode = (pTVar8->TypedValue).RoundingMode;
      local_88.MinimumIntegralDigits = (pTVar8->TypedValue).MinimumIntegralDigits;
      local_88.MaximumIntegralDigits = (pTVar8->TypedValue).MaximumIntegralDigits;
      local_88.MinimumFractionalDigits = (pTVar8->TypedValue).MinimumFractionalDigits;
      local_88.MaximumFractionalDigits = (pTVar8->TypedValue).MaximumFractionalDigits;
      FastDecimalFormat::Internal::FractionalToString
                ((double)param_2 * dVar11,param_1,&local_88,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
    uVar5 = FFormatArgumentValue::GetUIntValue(&this->SourceValue);
    pFVar9 = &local_48;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    local_48.AlwaysSign = (pTVar8->TypedValue).AlwaysSign;
    local_48.UseGrouping = (pTVar8->TypedValue).UseGrouping;
    local_48.IndicateNearlyInteger = (pTVar8->TypedValue).IndicateNearlyInteger;
    local_48._3_1_ = (pTVar8->TypedValue).field_0x3;
    local_48.RoundingMode = (pTVar8->TypedValue).RoundingMode;
    local_48.MinimumIntegralDigits = (pTVar8->TypedValue).MinimumIntegralDigits;
    local_48.MaximumIntegralDigits = (pTVar8->TypedValue).MaximumIntegralDigits;
    local_48.MinimumFractionalDigits = (pTVar8->TypedValue).MinimumFractionalDigits;
    local_48.MaximumFractionalDigits = (pTVar8->TypedValue).MaximumFractionalDigits;
    uVar5 = uVar5 * (longlong)param_2;
    cVar7 = false;
  }
  FastDecimalFormat::Internal::IntegralToString
            ((bool)cVar7,uVar5,param_1,pFVar9,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// IdenticalTo @ 1417633b0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __thiscall
FTextHistory_FormatNumber::IdenticalTo
          (FTextHistory_FormatNumber *this,FTextHistory *param_1,ETextIdenticalModeFlags param_2)

{
  bool bVar1;
  FNumberFormattingOptions *pFVar2;
  FNumberFormattingOptions *pFVar3;
  
  bVar1 = FFormatArgumentValue::IdenticalTo
                    (&this->SourceValue,(FFormatArgumentValue *)&param_1[1].Mutex,param_2);
  if (bVar1) {
    pFVar2 = FNumberFormattingOptions::DefaultWithGrouping();
    if ((this->FormatOptions).bIsSet != false) {
      pFVar2 = &(this->FormatOptions).TypedValue;
    }
    pFVar3 = FNumberFormattingOptions::DefaultWithGrouping();
    if ((char)param_1[4]._padding_ != '\0') {
      pFVar3 = (FNumberFormattingOptions *)(param_1 + 3);
    }
    if (((((pFVar2->AlwaysSign == pFVar3->AlwaysSign) &&
          (pFVar2->UseGrouping == pFVar3->UseGrouping)) &&
         (pFVar2->RoundingMode == pFVar3->RoundingMode)) &&
        ((pFVar2->MinimumIntegralDigits == pFVar3->MinimumIntegralDigits &&
         (pFVar2->MaximumIntegralDigits == pFVar3->MaximumIntegralDigits)))) &&
       ((pFVar2->MinimumFractionalDigits == pFVar3->MinimumFractionalDigits &&
        ((pFVar2->MaximumFractionalDigits == pFVar3->MaximumFractionalDigits &&
         ((this->TargetCulture).Object == *(FCulture **)&param_1[4]._padding_)))))) {
      return true;
    }
  }
  return false;
}

// Serialize @ 14177b0a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FTextHistory_FormatNumber::Serialize
          (FTextHistory_FormatNumber *this,FStructuredArchiveRecord param_1)

{
  TOptional<FNumberFormattingOptions> *pTVar1;
  FCulture *this_00;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  bool bVar5;
  FArchive *pFVar6;
  FString *pFVar7;
  FInternationalization *this_01;
  TSharedPtr<FCulture,1> *pTVar8;
  ForAnyElementType FVar9;
  longlong lVar10;
  bool local_res8 [8];
  FSlotBase local_res10;
  FSlotBase local_res18 [2];
  FString local_98;
  ForAnyElementType local_88;
  int local_80;
  int local_7c;
  FString local_78;
  TSharedPtr<FCulture,1> local_68;
  void *local_58;
  undefined2 local_48;
  undefined1 uStack_46;
  undefined1 uStack_45;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  local_res8[0] = false;
  local_res8[1] = false;
  local_res8[2] = false;
  local_res8[3] = false;
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
  if ((pFVar6->field_0x28 & 1) != 0) {
    FTextHistory::MarkDisplayStringOutOfDate((FTextHistory *)this);
  }
  pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  ::operator<<((FStructuredArchiveSlot)local_res10.StructuredArchive,&this->SourceValue);
  local_res8[0] = (this->FormatOptions).bIsSet;
  ::operator<<((local_res10.StructuredArchive)->Formatter->Inner,local_res8);
  if ((pFVar6->field_0x28 & 1) == 0) {
LAB_14177b177:
    if (local_res8[0] != false) {
      if (((this->FormatOptions).bIsSet == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("FormatOptions.IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextHistory.cpp"
                             ,0x638,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((this->FormatOptions).bIsSet == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      ::operator<<((FStructuredArchiveSlot)local_res10.StructuredArchive,
                   &(this->FormatOptions).TypedValue);
    }
  }
  else {
    if (local_res8[0] != false) {
      pTVar1 = &this->FormatOptions;
      local_48 = 0x100;
      uStack_46 = 0;
      uStack_34 = 3;
      uStack_44 = (undefined4)___xmm_00000000000001440000000100000000;
      uStack_40 = (undefined4)((ulonglong)___xmm_00000000000001440000000100000000 >> 0x20);
      uStack_3c = (undefined4)_UNK_150676978;
      uStack_38 = (undefined4)((ulonglong)_UNK_150676978 >> 0x20);
      if ((TOptional<FNumberFormattingOptions> *)&local_48 != pTVar1) {
        (pTVar1->TypedValue).AlwaysSign = (bool)(char)0x100;
        (pTVar1->TypedValue).UseGrouping = (bool)(char)(0x100 >> 8);
        (pTVar1->TypedValue).IndicateNearlyInteger = (bool)(char)(0x100 >> 0x10);
        (pTVar1->TypedValue).field_0x3 = uStack_45;
        (pTVar1->TypedValue).RoundingMode = uStack_44;
        (this->FormatOptions).TypedValue.MinimumIntegralDigits = uStack_40;
        (this->FormatOptions).TypedValue.MaximumIntegralDigits = uStack_3c;
        (this->FormatOptions).TypedValue.MinimumFractionalDigits = uStack_38;
        (this->FormatOptions).TypedValue.MaximumFractionalDigits = 3;
        (this->FormatOptions).bIsSet = true;
      }
      goto LAB_14177b177;
    }
    if ((this->FormatOptions).bIsSet != false) {
      (this->FormatOptions).bIsSet = false;
    }
  }
  if ((pFVar6->field_0x28 & 4) == 0) {
    if ((pFVar6->field_0x28 & 1) == 0) {
      return;
    }
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    ::operator<<((local_res10.StructuredArchive)->Formatter->Inner,&local_78);
    FVar9.Data = local_78.Data.AllocatorInstance.Data;
    if (1 < local_78.Data.ArrayNum) {
      this_01 = FInternationalization::Get();
      pTVar8 = FInternationalization::GetCulture(this_01,&local_68,&local_78);
      if (&this->TargetCulture != pTVar8) {
        (this->TargetCulture).Object = pTVar8->Object;
        pTVar8->Object = (FCulture *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->TargetCulture).SharedReferenceCount,&pTVar8->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
      FVar9.Data = local_78.Data.AllocatorInstance.Data;
    }
    goto LAB_14177b368;
  }
  this_00 = (this->TargetCulture).Object;
  if (this_00 == (FCulture *)0x0) {
    bVar3 = false;
    bVar5 = true;
    local_98.Data.ArrayNum = 0;
    local_58 = (void *)0x0;
LAB_14177b2bc:
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Data.ArrayMax = 0;
    if ((bVar5) && (local_58 != (void *)0x0)) {
      FMemory::Free(local_58);
    }
    if (bVar3) goto LAB_14177b2d9;
  }
  else {
    pFVar7 = FCulture::GetName(this_00);
    local_88.Data = (FScriptContainerElement *)0x0;
    local_80 = (pFVar7->Data).ArrayNum;
    lVar10 = (longlong)local_80;
    _Src = (pFVar7->Data).AllocatorInstance.Data;
    if (local_80 == 0) {
      local_7c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_80,0,&local_88,local_80,&local_7c);
      memcpy(local_88.Data,_Src,lVar10 * 2);
    }
    iVar4 = local_80;
    FVar9.Data = local_88.Data;
    bVar3 = true;
    bVar5 = false;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Data.ArrayNum = local_80;
    if (local_80 == 0) goto LAB_14177b2bc;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_80,0,(ForAnyElementType *)&local_98,local_80,&local_98.Data.ArrayMax);
    memcpy(local_98.Data.AllocatorInstance.Data,FVar9.Data,(longlong)iVar4 * 2);
LAB_14177b2d9:
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
    }
  }
  ::operator<<((local_res10.StructuredArchive)->Formatter->Inner,&local_98);
  FVar9.Data = local_98.Data.AllocatorInstance.Data;
LAB_14177b368:
  if (FVar9.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar9.Data);
  }
  return;
}

