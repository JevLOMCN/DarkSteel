// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 19

// StaticClass @ 146f10730

UClass * __cdecl UEnvQueryTest::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryTest.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryTest",
               &Z_Registration_Info_UClass_UEnvQueryTest.InnerSingleton,
               StaticRegisterNativesUEnvQueryTest,0x1f8,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnvQueryTest>,
               InternalVTableHelperCtorCaller<UEnvQueryTest>,local_res8,UEnvQueryNode::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryTest.InnerSingleton;
}

// UEnvQueryTest @ 146f2ca00

UEnvQueryTest * __thiscall UEnvQueryTest::UEnvQueryTest(UEnvQueryTest *this,FVTableHelper *param_1)

{
  FFieldClass *pFVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEnvQueryTest__6B_;
  (this->TestComment).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TestComment).Data.ArrayNum = 0;
  (this->TestComment).Data.ArrayMax = 0;
  (this->BoolValue)._padding_ = 0;
  (this->BoolValue)._padding_ = 0;
  (this->BoolValue)._padding_ = 0;
  (this->BoolValue)._padding_ = (longlong)&___7FAIDataProviderBoolValue__6B_;
  (this->BoolValue)._padding_ = 0;
  (this->BoolValue)._padding_ = 0;
  (this->BoolValue).DefaultValue = false;
  pFVar1 = FBoolProperty::StaticClass();
  (this->BoolValue)._padding_ = (longlong)pFVar1;
  (this->FloatValueMin)._padding_ = 0;
  (this->FloatValueMin)._padding_ = 0;
  (this->FloatValueMin)._padding_ = 0;
  (this->FloatValueMin)._padding_ = 0;
  (this->FloatValueMin)._padding_ = 0;
  (this->FloatValueMin)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->FloatValueMin).DefaultValue = 0.0;
  pFVar1 = FFloatProperty::StaticClass();
  (this->FloatValueMin)._padding_ = (longlong)pFVar1;
  (this->FloatValueMax)._padding_ = 0;
  (this->FloatValueMax)._padding_ = 0;
  (this->FloatValueMax)._padding_ = 0;
  (this->FloatValueMax)._padding_ = 0;
  (this->FloatValueMax)._padding_ = 0;
  (this->FloatValueMax)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->FloatValueMax).DefaultValue = 0.0;
  pFVar1 = FFloatProperty::StaticClass();
  (this->FloatValueMax)._padding_ = (longlong)pFVar1;
  (this->ScoreClampMin)._padding_ = 0;
  (this->ScoreClampMin)._padding_ = 0;
  (this->ScoreClampMin)._padding_ = 0;
  (this->ScoreClampMin)._padding_ = 0;
  (this->ScoreClampMin)._padding_ = 0;
  (this->ScoreClampMin)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->ScoreClampMin).DefaultValue = 0.0;
  pFVar1 = FFloatProperty::StaticClass();
  (this->ScoreClampMin)._padding_ = (longlong)pFVar1;
  (this->ScoreClampMax)._padding_ = 0;
  (this->ScoreClampMax)._padding_ = 0;
  (this->ScoreClampMax)._padding_ = 0;
  (this->ScoreClampMax)._padding_ = 0;
  (this->ScoreClampMax)._padding_ = 0;
  (this->ScoreClampMax)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->ScoreClampMax).DefaultValue = 0.0;
  pFVar1 = FFloatProperty::StaticClass();
  (this->ScoreClampMax)._padding_ = (longlong)pFVar1;
  (this->ScoringFactor)._padding_ = 0;
  (this->ScoringFactor)._padding_ = 0;
  (this->ScoringFactor)._padding_ = 0;
  (this->ScoringFactor)._padding_ = 0;
  (this->ScoringFactor)._padding_ = 0;
  (this->ScoringFactor)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->ScoringFactor).DefaultValue = 0.0;
  pFVar1 = FFloatProperty::StaticClass();
  (this->ScoringFactor)._padding_ = (longlong)pFVar1;
  (this->ReferenceValue)._padding_ = 0;
  (this->ReferenceValue)._padding_ = 0;
  (this->ReferenceValue)._padding_ = 0;
  (this->ReferenceValue)._padding_ = 0;
  (this->ReferenceValue)._padding_ = 0;
  (this->ReferenceValue)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->ReferenceValue).DefaultValue = 0.0;
  pFVar1 = FFloatProperty::StaticClass();
  (this->ReferenceValue)._padding_ = (longlong)pFVar1;
  (this->ValidItemType).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// UEnvQueryTest @ 146f2cbf0

UEnvQueryTest * __thiscall
UEnvQueryTest::UEnvQueryTest(UEnvQueryTest *this,FObjectInitializer *param_1)

{
  FFieldClass *pFVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEnvQueryTest__6B_;
  (this->TestComment).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TestComment).Data.ArrayNum = 0;
  (this->TestComment).Data.ArrayMax = 0;
  (this->BoolValue)._padding_ = 0;
  (this->BoolValue)._padding_ = 0;
  (this->BoolValue)._padding_ = 0;
  (this->BoolValue)._padding_ = (longlong)&___7FAIDataProviderBoolValue__6B_;
  (this->BoolValue)._padding_ = 0;
  (this->BoolValue)._padding_ = 0;
  (this->BoolValue).DefaultValue = false;
  pFVar1 = FBoolProperty::StaticClass();
  (this->BoolValue)._padding_ = (longlong)pFVar1;
  (this->FloatValueMin)._padding_ = 0;
  (this->FloatValueMin)._padding_ = 0;
  (this->FloatValueMin)._padding_ = 0;
  (this->FloatValueMin)._padding_ = 0;
  (this->FloatValueMin)._padding_ = 0;
  (this->FloatValueMin)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->FloatValueMin).DefaultValue = 0.0;
  pFVar1 = FFloatProperty::StaticClass();
  (this->FloatValueMin)._padding_ = (longlong)pFVar1;
  (this->FloatValueMax)._padding_ = 0;
  (this->FloatValueMax)._padding_ = 0;
  (this->FloatValueMax)._padding_ = 0;
  (this->FloatValueMax)._padding_ = 0;
  (this->FloatValueMax)._padding_ = 0;
  (this->FloatValueMax)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->FloatValueMax).DefaultValue = 0.0;
  pFVar1 = FFloatProperty::StaticClass();
  (this->FloatValueMax)._padding_ = (longlong)pFVar1;
  (this->ScoreClampMin)._padding_ = 0;
  (this->ScoreClampMin)._padding_ = 0;
  (this->ScoreClampMin)._padding_ = 0;
  (this->ScoreClampMin)._padding_ = 0;
  (this->ScoreClampMin)._padding_ = 0;
  (this->ScoreClampMin)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->ScoreClampMin).DefaultValue = 0.0;
  pFVar1 = FFloatProperty::StaticClass();
  (this->ScoreClampMin)._padding_ = (longlong)pFVar1;
  (this->ScoreClampMax)._padding_ = 0;
  (this->ScoreClampMax)._padding_ = 0;
  (this->ScoreClampMax)._padding_ = 0;
  (this->ScoreClampMax)._padding_ = 0;
  (this->ScoreClampMax)._padding_ = 0;
  (this->ScoreClampMax)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->ScoreClampMax).DefaultValue = 0.0;
  pFVar1 = FFloatProperty::StaticClass();
  (this->ScoreClampMax)._padding_ = (longlong)pFVar1;
  (this->ScoringFactor)._padding_ = 0;
  (this->ScoringFactor)._padding_ = 0;
  (this->ScoringFactor)._padding_ = 0;
  (this->ScoringFactor)._padding_ = 0;
  (this->ScoringFactor)._padding_ = 0;
  (this->ScoringFactor)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->ScoringFactor).DefaultValue = 0.0;
  pFVar1 = FFloatProperty::StaticClass();
  (this->ScoringFactor)._padding_ = (longlong)pFVar1;
  (this->ReferenceValue)._padding_ = 0;
  (this->ReferenceValue)._padding_ = 0;
  (this->ReferenceValue)._padding_ = 0;
  (this->ReferenceValue)._padding_ = 0;
  (this->ReferenceValue)._padding_ = 0;
  (this->ReferenceValue)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->ReferenceValue).DefaultValue = 0.0;
  pFVar1 = FFloatProperty::StaticClass();
  (this->ReferenceValue)._padding_ = (longlong)pFVar1;
  (this->ValidItemType).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->bWorkOnFloatValues = 1;
  (this->TestPurpose).Value = '\x02';
  this->Cost = '\0';
  this->ScoringEquation = '\0';
  this->ClampMinType = '\0';
  this->ClampMaxType = '\0';
  (this->FilterType).Value = '\x02';
  (this->BoolValue).DefaultValue = true;
  (this->ScoringFactor).DefaultValue = 1.0;
  this->NormalizationType = Absolute;
  return this;
}

// ~UEnvQueryTest @ 146f2f090

void __thiscall UEnvQueryTest::~UEnvQueryTest(UEnvQueryTest *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UEnvQueryTest__6B_;
  (this->ReferenceValue)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  (this->ScoringFactor)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  (this->ScoreClampMax)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  (this->ScoreClampMin)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  (this->FloatValueMax)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  (this->FloatValueMin)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  (this->BoolValue)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  pFVar1 = (this->TestComment).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UEnvQueryNode__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// DescribeBoolTestParams @ 146f3fc10

/* WARNING: Removing unreachable block (ram,0x000146f40019) */
/* WARNING: Removing unreachable block (ram,0x000146f40026) */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __thiscall
UEnvQueryTest::DescribeBoolTestParams
          (UEnvQueryTest *this,FText *__return_storage_ptr__,FString *param_1)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FString *pFVar10;
  FText *pFVar11;
  FCulture *pFVar12;
  FText *pFVar13;
  FText *pFVar14;
  FTextFormat *pFVar15;
  FText *pFVar16;
  ITextData IVar17;
  TSharedPtr<FCulture,1> *pTVar18;
  TRefCountPtr<ITextData> TVar19;
  char *local_res8;
  FText *local_res10;
  FText *local_res20;
  TSharedPtr<FCulture,1> local_178;
  TSharedPtr<FCulture,1> local_168;
  FText local_158;
  FText local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FText local_e8;
  FText local_d8;
  FText local_c8;
  FNumberFormattingOptions local_b8;
  FText local_a0;
  FText local_90;
  FText local_80;
  undefined1 local_70 [56];
  
  local_res8 = (char *)((ulonglong)local_res8 & 0xffffffff00000000);
  local_res10 = __return_storage_ptr__;
  FText::FText(&local_118);
  if (((this->TestPurpose).Value != '\x01') && ((this->FilterType).Value == '\x03')) {
    if ((this->BoolValue)._padding_ == 0) {
      pFVar11 = FText::FromString((FText *)(local_70 + 0x20),param_1);
      if ((this->BoolValue).DefaultValue == false) {
        pTVar18 = (TSharedPtr<FCulture,1> *)
                  FText::AsLocalizable_Advanced_LocText
                            (&local_d8,L"EnvQueryGenerator",L"NotWithSpace",L"not ");
        bVar3 = false;
        bVar9 = true;
        pFVar12 = local_178.Object;
      }
      else {
        pFVar16 = FText::GetEmpty();
        pFVar12 = (FCulture *)(pFVar16->TextData).Reference;
        local_178.Object = pFVar12;
        if (pFVar12 != (FCulture *)0x0) {
          (*(code *)(((pFVar12->Implementation).Ptr)->ICULocale)._padding_)
                    (pFVar12,&stack0x00000008);
        }
        bVar3 = true;
        bVar9 = false;
        local_178.SharedReferenceCount.ReferenceController._0_4_ = pFVar16->Flags;
        pTVar18 = &local_178;
      }
      bVar8 = false;
      bVar7 = false;
      bVar6 = true;
      bVar5 = true;
      bVar4 = false;
      local_178.Object = (FCulture *)FText::FText(&local_c8,(FText *)pTVar18);
      pFVar16 = &local_128;
      local_168.Object = (FCulture *)&local_e8;
      pFVar13 = &local_f8;
      local_res20 = &local_a0;
      local_res8 = "{0} {1}{2}";
    }
    else {
      pFVar10 = FAIDataProviderValue::ToString
                          ((FAIDataProviderValue *)&this->BoolValue,(FString *)&local_158);
      pFVar11 = FText::FromString(&local_90,pFVar10);
      pFVar12 = (FCulture *)FText::FromString(&local_80,param_1);
      pFVar16 = &local_108;
      local_168.Object = (FCulture *)local_70;
      pFVar13 = (FText *)(local_70 + 0x10);
      local_res20 = &local_148;
      bVar8 = true;
      bVar7 = true;
      bVar3 = false;
      bVar9 = false;
      bVar6 = false;
      bVar5 = false;
      bVar4 = true;
      local_res8 = "{0} {1}: {2}";
      local_178.Object = pFVar12;
    }
    pFVar13 = FText::AsLocalizable_Advanced_LocText
                        (pFVar13,L"EnvQueryGenerator",L"FilterRequire",L"require");
    pFVar14 = FText::FromString(local_res20,local_res8);
    pFVar15 = FTextFormat::FTextFormat((FTextFormat *)local_168.Object,pFVar14,Default);
    pFVar11 = FText::Format<FText,FText,FText>
                        (pFVar16,pFVar15,pFVar13,(FText *)local_178.Object,pFVar11);
    FText::operator=(&local_118,pFVar11);
    if ((bVar5) && ((FCulture *)local_128.TextData.Reference != (FCulture *)0x0)) {
      (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
    }
    if ((bVar6) && (local_a0.TextData.Reference != (ITextData *)0x0)) {
      (**(code **)(*(longlong *)local_a0.TextData.Reference + 0x10))();
    }
    if ((bVar9) && (local_d8.TextData.Reference != (ITextData *)0x0)) {
      (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
    }
    if ((bVar3) && (pFVar12 != (FCulture *)0x0)) {
      (**(code **)(((pFVar12->Implementation).Ptr)->ICULocale).language)(pFVar12);
    }
    if ((bVar7) && (local_108.TextData.Reference != (ITextData *)0x0)) {
      (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
    }
    if ((bVar8) && (local_148.TextData.Reference != (ITextData *)0x0)) {
      (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
    }
    __return_storage_ptr__ = local_res10;
    if ((bVar4) && ((FText *)local_158.TextData.Reference != (FText *)0x0)) {
      FMemory::Free(local_158.TextData.Reference);
      __return_storage_ptr__ = local_res10;
    }
  }
  bVar3 = false;
  bVar9 = false;
  FNumberFormattingOptions::FNumberFormattingOptions(&local_b8);
  local_b8.MaximumFractionalDigits = 2;
  FText::FText(&local_138);
  if ((this->TestPurpose).Value == '\0') {
    pFVar11 = FText::AsLocalizable_Advanced_LocText
                        (&local_158,L"EnvQueryGenerator",L"DontScore",L"don\'t score");
    FText::operator=(&local_138,pFVar11);
    if ((FText *)local_158.TextData.Reference == (FText *)0x0) goto LAB_146f403a9;
    IVar17 = *local_158.TextData.Reference;
    TVar19.Reference = local_158.TextData.Reference;
  }
  else {
    lVar2 = (this->ScoringFactor)._padding_;
    if ((this->ScoringEquation).Value == '\x04') {
      bVar9 = lVar2 == 0;
      if (bVar9) {
        local_168.Object = (FCulture *)0x0;
        local_168.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pFVar11 = FText::AsNumber(&local_f8,
                                  (float)((uint)(this->ScoringFactor).DefaultValue &
                                         __xmm_7fffffff7fffffff7fffffff7fffffff),&local_b8,
                                  &local_168);
        pFVar16 = FText::FromString(&local_148,"x{0}");
        pFVar15 = FTextFormat::FTextFormat((FTextFormat *)&local_e8,pFVar16,Default);
        pFVar11 = FText::Format<FText>(&local_158,pFVar15,pFVar11);
      }
      else {
        pFVar10 = FAIDataProviderValue::ToString
                            ((FAIDataProviderValue *)&this->ScoringFactor,(FString *)&local_d8);
        pFVar11 = FText::FromString(&local_108,pFVar10);
      }
      FText::FText((FText *)&local_178,pFVar11);
      if ((bVar9) && ((FText *)local_158.TextData.Reference != (FText *)0x0)) {
        (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
      }
      if ((bVar9) && (local_148.TextData.Reference != (ITextData *)0x0)) {
        (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
      }
      if (bVar9) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_168.SharedReferenceCount.ReferenceController);
      }
      else if (local_108.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
      }
      local_168.Object = local_178.Object;
      if (local_178.Object != (FCulture *)0x0) {
        (*(code *)((((local_178.Object)->Implementation).Ptr)->ICULocale)._padding_)
                  (local_178.Object,&local_res10);
      }
      local_168.SharedReferenceCount.ReferenceController._0_4_ =
           (uint)local_178.SharedReferenceCount.ReferenceController;
      pFVar11 = FText::AsLocalizable_Advanced_LocText
                          (&local_f8,L"EnvQueryGenerator",L"ScoreConstant",L"constant score");
      pFVar16 = FText::FromString(&local_148,"{0} [{1}]");
      pFVar15 = FTextFormat::FTextFormat((FTextFormat *)&local_e8,pFVar16,Default);
      pFVar11 = FText::Format<FText,FText>(&local_158,pFVar15,pFVar11,(FText *)&local_168);
      FText::operator=(&local_138,pFVar11);
      if ((FText *)local_158.TextData.Reference != (FText *)0x0) {
        (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
      }
      if (local_148.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
      }
      if (local_178.Object == (FCulture *)0x0) goto LAB_146f403a9;
      IVar17 = (ITextData)((local_178.Object)->Implementation).Ptr;
      TVar19.Reference = (ITextData *)local_178.Object;
    }
    else {
      if (lVar2 != 0) {
        pFVar10 = FAIDataProviderValue::ToString
                            ((FAIDataProviderValue *)&this->ScoringFactor,(FString *)&local_108);
        pFVar11 = FText::FromString(&local_f8,pFVar10);
        pFVar16 = FText::AsLocalizable_Advanced_LocText
                            (&local_e8,L"EnvQueryGenerator",L"ScoreFactor",L"score factor");
        pFVar13 = FText::FromString(&local_148,"{0}: {1}");
        pFVar15 = FTextFormat::FTextFormat((FTextFormat *)&local_c8,pFVar13,Default);
        pFVar11 = FText::Format<FText,FText>(&local_158,pFVar15,pFVar16,pFVar11);
        FText::operator=(&local_138,pFVar11);
        if ((FText *)local_158.TextData.Reference != (FText *)0x0) {
          (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
        }
        if (local_148.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
        }
        if (local_108.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_108.TextData.Reference);
        }
        goto LAB_146f403a9;
      }
      if ((this->ScoringFactor).DefaultValue <= 0.0) {
        bVar9 = true;
        pTVar18 = (TSharedPtr<FCulture,1> *)
                  FText::AsLocalizable_Advanced_LocText
                            (&local_158,L"EnvQueryGenerator",L"NotWithSpace",L"not ");
        TVar19.Reference = ((TRefCountPtr<ITextData> *)&pTVar18->Object)->Reference;
        pFVar12 = local_178.Object;
      }
      else {
        bVar3 = true;
        pFVar11 = FText::GetEmpty();
        TVar19.Reference = (pFVar11->TextData).Reference;
        local_178.Object = (FCulture *)TVar19.Reference;
        if ((FCulture *)TVar19.Reference != (FCulture *)0x0) {
          (*(code *)(((((FCulture *)TVar19.Reference)->Implementation).Ptr)->ICULocale)._padding_)
                    (TVar19.Reference,&local_res10);
        }
        pTVar18 = &local_178;
        local_178.SharedReferenceCount.ReferenceController._0_4_ = pFVar11->Flags;
        pFVar12 = (FCulture *)TVar19.Reference;
      }
      if ((FCulture *)TVar19.Reference != (FCulture *)0x0) {
        (*(code *)(((((FCulture *)TVar19.Reference)->Implementation).Ptr)->ICULocale)._padding_)
                  (TVar19.Reference,&local_res10);
      }
      uVar1 = *(uint *)&(pTVar18->SharedReferenceCount).ReferenceController;
      if ((bVar9) && ((FText *)local_158.TextData.Reference != (FText *)0x0)) {
        (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
      }
      if ((bVar3) && (pFVar12 != (FCulture *)0x0)) {
        (**(code **)(((pFVar12->Implementation).Ptr)->ICULocale).language)(pFVar12);
      }
      local_178.Object = (FCulture *)0x0;
      local_178.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      FText::AsNumber((FText *)&local_168,
                      (float)((uint)(this->ScoringFactor).DefaultValue &
                             __xmm_7fffffff7fffffff7fffffff7fffffff),&local_b8,&local_178);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_178.SharedReferenceCount.ReferenceController);
      local_178.Object = local_168.Object;
      if (local_168.Object != (FCulture *)0x0) {
        (*(code *)((((local_168.Object)->Implementation).Ptr)->ICULocale)._padding_)
                  (local_168.Object,&local_res10);
      }
      local_178.SharedReferenceCount.ReferenceController._0_4_ =
           (uint)local_168.SharedReferenceCount.ReferenceController;
      pFVar11 = FText::FromString(&local_f8,param_1);
      local_128.TextData.Reference = TVar19.Reference;
      if ((FCulture *)TVar19.Reference != (FCulture *)0x0) {
        (*(code *)(((((FCulture *)TVar19.Reference)->Implementation).Ptr)->ICULocale)._padding_)
                  (TVar19.Reference,&local_res10);
      }
      local_128.Flags = uVar1;
      pFVar16 = FText::AsLocalizable_Advanced_LocText
                          (&local_e8,L"EnvQueryGenerator",L"ScorePrefer",L"prefer");
      pFVar13 = FText::FromString(&local_148,"{0} {1}{2} [x{3}]");
      pFVar15 = FTextFormat::FTextFormat((FTextFormat *)&local_c8,pFVar13,Default);
      pFVar11 = FText::Format<FText,FText,FText,FText>
                          (&local_158,pFVar15,pFVar16,&local_128,pFVar11,(FText *)&local_178);
      FText::operator=(&local_138,pFVar11);
      if ((FText *)local_158.TextData.Reference != (FText *)0x0) {
        (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
      }
      if (local_148.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
      }
      if (local_168.Object != (FCulture *)0x0) {
        (**(code **)((((local_168.Object)->Implementation).Ptr)->ICULocale).language)();
      }
      if ((FCulture *)TVar19.Reference == (FCulture *)0x0) goto LAB_146f403a9;
      IVar17 = (ITextData)(((FCulture *)TVar19.Reference)->Implementation).Ptr;
    }
  }
  (*(code *)*(ITextData *)((longlong)IVar17 + 0x10))(TVar19.Reference);
LAB_146f403a9:
  bVar9 = FText::IsEmpty(&local_118);
  if (bVar9) {
    local_178.Object = (FCulture *)local_138.TextData.Reference;
    if ((FCulture *)local_138.TextData.Reference != (FCulture *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 8))
                (local_138.TextData.Reference,&local_res10);
    }
    bVar4 = true;
    bVar3 = false;
    bVar9 = false;
    local_178.SharedReferenceCount.ReferenceController._0_4_ = local_138.Flags;
    pTVar18 = &local_178;
  }
  else {
    local_128.TextData.Reference = local_138.TextData.Reference;
    if ((FCulture *)local_138.TextData.Reference != (FCulture *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 8))
                (local_138.TextData.Reference,&local_res10);
    }
    local_128.Flags = local_138.Flags;
    local_168.Object = (FCulture *)local_118.TextData.Reference;
    if ((FText *)local_118.TextData.Reference != (FText *)0x0) {
      (**(code **)((longlong)*local_118.TextData.Reference + 8))
                (local_118.TextData.Reference,&local_res10);
    }
    local_168.SharedReferenceCount.ReferenceController._0_4_ = local_118.Flags;
    pFVar11 = FText::FromString(&local_148,"{0}, {1}");
    pFVar15 = FTextFormat::FTextFormat((FTextFormat *)&local_f8,pFVar11,Default);
    pTVar18 = (TSharedPtr<FCulture,1> *)
              FText::Format<FText,FText>(&local_158,pFVar15,(FText *)&local_168,&local_128);
    bVar4 = false;
    bVar3 = true;
    bVar9 = true;
  }
  FText::FText(__return_storage_ptr__,(FText *)pTVar18);
  if ((bVar9) && ((FText *)local_158.TextData.Reference != (FText *)0x0)) {
    (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
  }
  if ((bVar3) && (local_148.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
  }
  if ((bVar4) && (local_178.Object != (FCulture *)0x0)) {
    (**(code **)((((local_178.Object)->Implementation).Ptr)->ICULocale).language)();
  }
  if ((FCulture *)local_138.TextData.Reference != (FCulture *)0x0) {
    (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
  }
  if ((FText *)local_118.TextData.Reference != (FText *)0x0) {
    (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// DescribeFloatTestParams @ 146f405a0

/* WARNING: Removing unreachable block (ram,0x000146f40d03) */
/* WARNING: Removing unreachable block (ram,0x000146f40d0c) */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __thiscall
UEnvQueryTest::DescribeFloatTestParams(UEnvQueryTest *this,FText *__return_storage_ptr__)

{
  float fVar1;
  uchar uVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  FString *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  TSharedPtr<FCulture,1> *pTVar11;
  TRefCountPtr<ITextData> TVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  undefined4 local_res8 [2];
  TSharedPtr<FCulture,1> local_d8;
  TSharedPtr<FCulture,1> local_c8;
  FText local_b8;
  FText local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FNumberFormattingOptions local_38;
  
  local_res8[0] = 0;
  FText::FText(&local_68);
  if ((this->TestPurpose).Value != '\x01') {
    uVar2 = (this->FilterType).Value;
    if (uVar2 == '\0') {
      pFVar6 = FAIDataProviderValue::ToString
                         ((FAIDataProviderValue *)&this->FloatValueMin,(FString *)&local_d8);
      pFVar7 = FText::FromString(&local_58,pFVar6);
      pwVar14 = L"at least {0}";
      pwVar13 = L"FilterAtLeast";
LAB_146f40713:
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)&local_c8,L"EnvQueryGenerator",pwVar13,pwVar14);
      pFVar10 = FTextFormat::FTextFormat((FTextFormat *)&local_a8,pFVar8,Default);
      pFVar7 = FText::Format<FText>(&local_b8,pFVar10,pFVar7);
      FText::operator=(&local_68,pFVar7);
      if ((FCulture *)local_b8.TextData.Reference != (FCulture *)0x0) {
        (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
      }
      TVar12.Reference = (ITextData *)local_d8.Object;
      if (local_c8.Object != (FCulture *)0x0) {
        (**(code **)((((local_c8.Object)->Implementation).Ptr)->ICULocale).language)();
        TVar12.Reference = (ITextData *)local_d8.Object;
      }
    }
    else {
      if (uVar2 == '\x01') {
        pFVar6 = FAIDataProviderValue::ToString
                           ((FAIDataProviderValue *)&this->FloatValueMax,(FString *)&local_d8);
        pFVar7 = FText::FromString(&local_58,pFVar6);
        pwVar14 = L"up to {0}";
        pwVar13 = L"FilterUpTo";
        goto LAB_146f40713;
      }
      if (uVar2 != '\x02') goto LAB_146f4077c;
      pFVar6 = FAIDataProviderValue::ToString
                         ((FAIDataProviderValue *)&this->FloatValueMax,(FString *)&local_88);
      pFVar7 = FText::FromString(&local_a8,pFVar6);
      pFVar6 = FAIDataProviderValue::ToString
                         ((FAIDataProviderValue *)&this->FloatValueMin,(FString *)&local_d8);
      pFVar8 = FText::FromString(&local_98,pFVar6);
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)&local_c8,L"EnvQueryGenerator",L"FilterBetween",
                          L"between {0} and {1}");
      pFVar10 = FTextFormat::FTextFormat((FTextFormat *)&local_58,pFVar9,Default);
      pFVar7 = FText::Format<FText,FText>(&local_b8,pFVar10,pFVar8,pFVar7);
      FText::operator=(&local_68,pFVar7);
      if ((FCulture *)local_b8.TextData.Reference != (FCulture *)0x0) {
        (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
      }
      if (local_c8.Object != (FCulture *)0x0) {
        (**(code **)((((local_c8.Object)->Implementation).Ptr)->ICULocale).language)();
      }
      TVar12.Reference = local_88.TextData.Reference;
      if (local_d8.Object != (FCulture *)0x0) {
        FMemory::Free(local_d8.Object);
        TVar12.Reference = local_88.TextData.Reference;
      }
    }
    if ((FCulture *)TVar12.Reference != (FCulture *)0x0) {
      FMemory::Free(TVar12.Reference);
    }
  }
LAB_146f4077c:
  FNumberFormattingOptions::FNumberFormattingOptions(&local_38);
  local_38.MaximumFractionalDigits = 2;
  FText::FText(&local_78);
  if ((this->TestPurpose).Value == '\0') {
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_b8,L"EnvQueryGenerator",L"DontScore",L"don\'t score");
    FText::operator=(&local_78,pFVar7);
    TVar12.Reference = local_b8.TextData.Reference;
  }
  else {
    uVar2 = (this->ScoringEquation).Value;
    lVar3 = (this->ScoringFactor)._padding_;
    if (uVar2 == '\x04') {
      if (lVar3 == 0) {
        local_d8.Object = (FCulture *)0x0;
        local_d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pFVar7 = FText::AsNumber(&local_58,
                                 (float)((uint)(this->ScoringFactor).DefaultValue &
                                        __xmm_7fffffff7fffffff7fffffff7fffffff),&local_38,&local_d8)
        ;
        pFVar8 = FText::FromString((FText *)&local_c8,"x{0}");
        pFVar10 = FTextFormat::FTextFormat((FTextFormat *)&local_48,pFVar8,Default);
        pFVar7 = FText::Format<FText>(&local_b8,pFVar10,pFVar7);
        FText::FText(&local_88,pFVar7);
        if ((FCulture *)local_b8.TextData.Reference != (FCulture *)0x0) {
          (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
        }
        if (local_c8.Object != (FCulture *)0x0) {
          (**(code **)((((local_c8.Object)->Implementation).Ptr)->ICULocale).language)();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d8.SharedReferenceCount.ReferenceController);
        bVar5 = false;
      }
      else {
        pFVar6 = FAIDataProviderValue::ToString
                           ((FAIDataProviderValue *)&this->ScoringFactor,(FString *)&local_a8);
        pFVar7 = FText::FromString(&local_98,pFVar6);
        FText::FText(&local_88,pFVar7);
        bVar5 = true;
        if (local_98.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
        }
      }
      if ((bVar5) && (local_a8.TextData.Reference != (ITextData *)0x0)) {
        FMemory::Free(local_a8.TextData.Reference);
      }
      local_d8.Object = (FCulture *)local_88.TextData.Reference;
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 8))
                  (local_88.TextData.Reference,local_res8);
      }
      local_d8.SharedReferenceCount.ReferenceController._0_4_ = local_88.Flags;
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_48,L"EnvQueryGenerator",L"ScoreConstant",L"constant score");
      pFVar8 = FText::FromString(&local_98,"{0} [{1}]");
      pFVar10 = FTextFormat::FTextFormat((FTextFormat *)&local_58,pFVar8,Default);
      pFVar7 = FText::Format<FText,FText>(&local_a8,pFVar10,pFVar7,(FText *)&local_d8);
      FText::operator=(&local_78,pFVar7);
      if (local_a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
      }
      TVar12.Reference = local_88.TextData.Reference;
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
        TVar12.Reference = local_88.TextData.Reference;
      }
    }
    else {
      if (lVar3 != 0) {
        pFVar6 = FAIDataProviderValue::ToString
                           ((FAIDataProviderValue *)&this->ScoringFactor,(FString *)&local_b8);
        pFVar7 = FText::FromString(&local_48,pFVar6);
        pFVar8 = FText::AsLocalizable_Advanced_LocText
                           (&local_58,L"EnvQueryGenerator",L"ScoreFactor",L"score factor");
        pFVar9 = FText::FromString(&local_98,"{0}: {1}");
        pFVar10 = FTextFormat::FTextFormat((FTextFormat *)&local_c8,pFVar9,Default);
        pFVar7 = FText::Format<FText,FText>(&local_a8,pFVar10,pFVar8,pFVar7);
        FText::operator=(&local_78,pFVar7);
        if (local_a8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
        }
        if (local_98.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
        }
        if ((FCulture *)local_b8.TextData.Reference != (FCulture *)0x0) {
          FMemory::Free(local_b8.TextData.Reference);
        }
        goto LAB_146f40bfc;
      }
      fVar1 = (this->ScoringFactor).DefaultValue;
      if (uVar2 == '\x02') {
        bVar5 = fVar1 < 0.0;
      }
      else {
        bVar5 = 0.0 < fVar1;
      }
      pFVar7 = &local_98;
      pwVar14 = L"greater";
      pwVar13 = L"Greater";
      if (!bVar5) {
        pwVar14 = L"lesser";
        pwVar13 = L"Lesser";
        pFVar7 = &local_a8;
      }
      pFVar7 = FText::AsLocalizable_Advanced_LocText(pFVar7,L"EnvQueryGenerator",pwVar13,pwVar14);
      FText::FText((FText *)&local_d8,pFVar7);
      if (((((bVar5 ^ 1U) + 1) * ' ' & 0x40) != 0) &&
         (local_a8.TextData.Reference != (ITextData *)0x0)) {
        (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
      }
      if ((bVar5) && (local_98.TextData.Reference != (ITextData *)0x0)) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
      local_c8.Object = (FCulture *)0x0;
      local_c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      FText::AsNumber(&local_88,
                      (float)((uint)(this->ScoringFactor).DefaultValue &
                             __xmm_7fffffff7fffffff7fffffff7fffffff),&local_38,&local_c8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c8.SharedReferenceCount.ReferenceController);
      local_c8.Object = (FCulture *)local_88.TextData.Reference;
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 8))
                  (local_88.TextData.Reference,local_res8);
      }
      local_c8.SharedReferenceCount.ReferenceController._0_4_ = local_88.Flags;
      local_b8.TextData.Reference = (ITextData *)local_d8.Object;
      if (local_d8.Object != (FCulture *)0x0) {
        (*(code *)((((local_d8.Object)->Implementation).Ptr)->ICULocale)._padding_)
                  (local_d8.Object,local_res8);
      }
      local_b8.Flags = (uint)local_d8.SharedReferenceCount.ReferenceController;
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_48,L"EnvQueryGenerator",L"ScorePrefer",L"prefer");
      pFVar8 = FText::FromString(&local_98,"{0} {1} [x{2}]");
      pFVar10 = FTextFormat::FTextFormat((FTextFormat *)&local_58,pFVar8,Default);
      pFVar7 = FText::Format<FText,FText,FText>
                         (&local_a8,pFVar10,pFVar7,&local_b8,(FText *)&local_c8);
      FText::operator=(&local_78,pFVar7);
      if (local_a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
      }
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
      TVar12.Reference = (ITextData *)local_d8.Object;
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
        TVar12.Reference = (ITextData *)local_d8.Object;
      }
    }
  }
  if ((FCulture *)TVar12.Reference != (FCulture *)0x0) {
    (**(code **)(((((FCulture *)TVar12.Reference)->Implementation).Ptr)->ICULocale).language)();
  }
LAB_146f40bfc:
  bVar5 = FText::IsEmpty(&local_68);
  if (bVar5) {
    local_d8.Object = (FCulture *)local_78.TextData.Reference;
    if ((FCulture *)local_78.TextData.Reference != (FCulture *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 8))
                (local_78.TextData.Reference,local_res8);
    }
    bVar4 = false;
    bVar5 = false;
    local_d8.SharedReferenceCount.ReferenceController._0_4_ = local_78.Flags;
    pTVar11 = &local_d8;
  }
  else {
    local_b8.TextData.Reference = local_78.TextData.Reference;
    if ((FCulture *)local_78.TextData.Reference != (FCulture *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 8))
                (local_78.TextData.Reference,local_res8);
    }
    local_b8.Flags = local_78.Flags;
    local_c8.Object = (FCulture *)local_68.TextData.Reference;
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 8))
                (local_68.TextData.Reference,local_res8);
    }
    local_c8.SharedReferenceCount.ReferenceController._0_4_ = local_68.Flags;
    pFVar7 = FText::FromString(&local_98,"{0}, {1}");
    pFVar10 = FTextFormat::FTextFormat((FTextFormat *)&local_48,pFVar7,Default);
    pTVar11 = (TSharedPtr<FCulture,1> *)
              FText::Format<FText,FText>(&local_a8,pFVar10,(FText *)&local_c8,&local_b8);
    bVar4 = true;
    bVar5 = true;
  }
  FText::FText(__return_storage_ptr__,(FText *)pTVar11);
  if ((bVar4) && (local_a8.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  if ((bVar5) && (local_98.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
  }
  if ((FCulture *)local_78.TextData.Reference != (FCulture *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetItemActor @ 146f563a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

AActor * __thiscall
UEnvQueryTest::GetItemActor(UEnvQueryTest *this,FEnvQueryInstance *param_1,int param_2)

{
  UEnvQueryItemType_ActorBase *pUVar1;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar2;
  AActor *pAVar3;
  uint uVar4;
  
  pUVar1 = (param_1->ItemTypeActorCDO).field0_0x0.DebugPtr;
  if (pUVar1 == (UEnvQueryItemType_ActorBase *)0x0) {
    return (AActor *)0x0;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)pUVar1 + 0x2d8);
  uVar4 = 0;
  if (param_2 < (int)param_1->_padding_) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      pAVar3 = (AActor *)(*UNRECOVERED_JUMPTABLE)();
      return pAVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146f56449. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar3 = (AActor *)
           (*UNRECOVERED_JUMPTABLE)
                     (pUVar1,((longlong)
                              (*(int *)(param_1->_padding_ + 4 + (longlong)param_2 * 8) * 2) >> 1) +
                             param_1->_padding_);
  return pAVar3;
}

// GetItemLocation @ 146f56970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TVector<double> * __thiscall
UEnvQueryTest::GetItemLocation
          (UEnvQueryTest *this,TVector<double> *__return_storage_ptr__,FEnvQueryInstance *param_1,
          int param_2)

{
  double dVar1;
  UEnvQueryItemType_VectorBase *pUVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  TVector<double> *pTVar7;
  double *pdVar8;
  double local_38;
  double dStack_30;
  double local_28;
  undefined1 local_20 [24];
  
  pUVar2 = (param_1->ItemTypeVectorCDO).field0_0x0.DebugPtr;
  if (pUVar2 == (UEnvQueryItemType_VectorBase *)0x0) {
    pdVar8 = &local_38;
    local_38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    pcVar3 = *(code **)(*(longlong *)pUVar2 + 0x2c8);
    uVar6 = 0;
    if (param_2 < (int)param_1->_padding_) {
      uVar6 = (uint)~param_2 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TVector<double> *)(*pcVar3)();
        return pTVar7;
      }
    }
    pdVar8 = (double *)
             (*pcVar3)(pUVar2,local_20,
                       ((longlong)(*(int *)(param_1->_padding_ + 4 + (longlong)param_2 * 8) * 2) >>
                       1) + param_1->_padding_);
  }
  dVar4 = pdVar8[1];
  dVar1 = pdVar8[2];
  (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar8;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetItemRotation @ 146f56c10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TRotator<double> * __thiscall
UEnvQueryTest::GetItemRotation
          (UEnvQueryTest *this,TRotator<double> *__return_storage_ptr__,FEnvQueryInstance *param_1,
          int param_2)

{
  double dVar1;
  UEnvQueryItemType_VectorBase *pUVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  TRotator<double> *pTVar7;
  double *pdVar8;
  double local_38;
  double dStack_30;
  double local_28;
  undefined1 local_20 [24];
  
  pUVar2 = (param_1->ItemTypeVectorCDO).field0_0x0.DebugPtr;
  if (pUVar2 == (UEnvQueryItemType_VectorBase *)0x0) {
    pdVar8 = &local_38;
    local_38 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    dStack_30 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    local_28 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  }
  else {
    pcVar3 = *(code **)(*(longlong *)pUVar2 + 0x2d0);
    uVar6 = 0;
    if (param_2 < (int)param_1->_padding_) {
      uVar6 = (uint)~param_2 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TRotator<double> *)(*pcVar3)();
        return pTVar7;
      }
    }
    pdVar8 = (double *)
             (*pcVar3)(pUVar2,local_20,
                       ((longlong)(*(int *)(param_1->_padding_ + 4 + (longlong)param_2 * 8) * 2) >>
                       1) + param_1->_padding_);
  }
  dVar4 = pdVar8[1];
  dVar1 = pdVar8[2];
  __return_storage_ptr__->Pitch = *pdVar8;
  __return_storage_ptr__->Yaw = dVar4;
  __return_storage_ptr__->Roll = dVar1;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146f58f50

UClass * __cdecl UEnvQueryTest::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryTest.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryTest",
               &Z_Registration_Info_UClass_UEnvQueryTest.InnerSingleton,
               StaticRegisterNativesUEnvQueryTest,0x1f8,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnvQueryTest>,
               InternalVTableHelperCtorCaller<UEnvQueryTest>,local_res8,UEnvQueryNode::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryTest.InnerSingleton;
}

// IsContextPerItem @ 146f5b900

bool __thiscall
UEnvQueryTest::IsContextPerItem(UEnvQueryTest *this,TSubclassOf<UEnvQueryContext> param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar2 != 0) {
    pUVar4 = UEnvQueryContext::StaticClass();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar4 = *(UClass **)param_1.Class.field0_0x0;
        goto LAB_146f5b94a;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_146f5b94a:
  pUVar5 = UEnvQueryContext_Item::StaticClass();
  return pUVar4 == pUVar5;
}

// IsSupportedItem @ 146f5bcc0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UEnvQueryTest::IsSupportedItem(UEnvQueryTest *this,TSubclassOf<UEnvQueryItemType> param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if ((lVar2 != 0) && (pUVar4 = UEnvQueryItemType::StaticClass(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (lVar2 = *(longlong *)param_1.Class.field0_0x0, lVar2 != 0)) {
      pUVar5 = UEnvQueryItemType::StaticClass();
      pUVar4 = (UClass *)0x0;
      pUVar8 = pUVar4;
      if (pUVar5 != (UClass *)0x0) {
        iVar1 = (int)pUVar5->_padding_;
        if ((*(int *)(lVar2 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar5->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          pUVar8 = *(UClass **)param_1.Class.field0_0x0;
        }
      }
      pUVar5 = (this->ValidItemType).Class.field0_0x0.DebugPtr;
      pUVar7 = pUVar4;
      if ((pUVar5 != (UClass *)0x0) &&
         (pUVar6 = UEnvQueryItemType::StaticClass(), pUVar6 != (UClass *)0x0)) {
        iVar1 = (int)pUVar6->_padding_;
        if (((int)pUVar5->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          pUVar7 = (this->ValidItemType).Class.field0_0x0.DebugPtr;
        }
      }
      if (pUVar8 == pUVar7) {
        return true;
      }
      lVar2 = *(longlong *)param_1.Class.field0_0x0;
      if ((lVar2 != 0) && (pUVar8 = UEnvQueryItemType::StaticClass(), pUVar8 != (UClass *)0x0)) {
        iVar1 = (int)pUVar8->_padding_;
        if ((*(int *)(lVar2 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar8->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          pUVar4 = *(UClass **)param_1.Class.field0_0x0;
        }
      }
      pUVar8 = (this->ValidItemType).Class.field0_0x0.DebugPtr;
      if ((pUVar8 != (UClass *)0x0) &&
         (pUVar5 = UEnvQueryItemType::StaticClass(), pUVar5 != (UClass *)0x0)) {
        iVar1 = (int)pUVar5->_padding_;
        if (((int)pUVar8->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar5->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if ((bVar3) &&
           (pUVar8 = (this->ValidItemType).Class.field0_0x0.DebugPtr, pUVar8 != (UClass *)0x0)) {
          iVar1 = (int)pUVar8->_padding_;
          if (((int)pUVar4->_padding_ < iVar1) ||
             ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
              &pUVar8->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            return true;
          }
        }
      }
    }
  }
  return false;
}

// NormalizeItemScores @ 146f5da70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UEnvQueryTest::NormalizeItemScores(UEnvQueryTest *this,FEnvQueryInstance *param_1)

{
  float fVar1;
  uchar uVar2;
  FProperty *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  UObject *pUVar8;
  float *pfVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&param_1->_padding_ + 4));
  if ((pUVar8 != (UObject *)0x0) && ((this->TestPurpose).Value != '\0')) {
    FAIDataProviderValue::BindData
              ((FAIDataProviderValue *)&this->ScoringFactor,pUVar8,(int)param_1->_padding_);
    pFVar3 = (FProperty *)(this->ScoringFactor)._padding_;
    pfVar9 = (float *)0x0;
    if (pFVar3 != (FProperty *)0x0) {
      pfVar9 = FProperty::ContainerUObjectPtrToValuePtrInternal
                         (pFVar3,(UObject *)(this->ScoringFactor)._padding_,0);
    }
    fVar16 = __real_ff7fc99e;
    if (pfVar9 == (float *)0x0) {
      pfVar9 = &(this->ScoringFactor).DefaultValue;
    }
    fVar1 = *pfVar9;
    fVar15 = __real_7f7fc99e;
    if (this->NormalizationType == Absolute) {
      fVar15 = 0.0;
    }
    uVar2 = (this->ClampMinType).Value;
    if (uVar2 == '\x02') {
      FAIDataProviderValue::BindData
                ((FAIDataProviderValue *)&this->FloatValueMin,pUVar8,(int)param_1->_padding_);
      pFVar3 = (FProperty *)(this->FloatValueMin)._padding_;
      pfVar9 = (float *)0x0;
      if (pFVar3 != (FProperty *)0x0) {
        pfVar9 = FProperty::ContainerUObjectPtrToValuePtrInternal
                           (pFVar3,(UObject *)(this->FloatValueMin)._padding_,0);
      }
      if (pfVar9 == (float *)0x0) {
        pfVar9 = &(this->FloatValueMin).DefaultValue;
      }
      fVar15 = *pfVar9;
    }
    else if (uVar2 == '\x01') {
      FAIDataProviderValue::BindData
                ((FAIDataProviderValue *)&this->ScoreClampMin,pUVar8,(int)param_1->_padding_);
      fVar15 = FAIDataProviderFloatValue::GetValue(&this->ScoreClampMin);
    }
    uVar2 = (this->ClampMaxType).Value;
    if (uVar2 == '\x02') {
      FAIDataProviderValue::BindData
                ((FAIDataProviderValue *)&this->FloatValueMax,pUVar8,(int)param_1->_padding_);
      pFVar3 = (FProperty *)(this->FloatValueMax)._padding_;
      pfVar9 = (float *)0x0;
      if (pFVar3 != (FProperty *)0x0) {
        pfVar9 = FProperty::ContainerUObjectPtrToValuePtrInternal
                           (pFVar3,(UObject *)(this->FloatValueMax)._padding_,0);
      }
      if (pfVar9 == (float *)0x0) {
        pfVar9 = &(this->FloatValueMax).DefaultValue;
      }
      fVar16 = *pfVar9;
    }
    else if (uVar2 == '\x01') {
      FAIDataProviderValue::BindData
                ((FAIDataProviderValue *)&this->ScoreClampMax,pUVar8,(int)param_1->_padding_);
      fVar16 = FAIDataProviderFloatValue::GetValue(&this->ScoreClampMax);
    }
    pFVar14 = (param_1->ItemDetails).AllocatorInstance.Data;
    fVar18 = __real_ff7fffff;
    if (((this->ClampMinType).Value == '\0') || ((this->ClampMaxType).Value == '\0')) {
      iVar10 = (int)param_1->_padding_;
      uVar11 = 0;
      if (0 < iVar10) {
        lVar12 = 0;
        fVar22 = fVar15;
        fVar23 = fVar16;
        do {
          uVar13 = 0;
          if ((int)uVar11 < iVar10) {
            uVar13 = ~uVar11 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             fVar18 = __real_ff7fffff, bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar13 = *(uint *)(param_1->_padding_ + 4 + lVar12);
          fVar15 = fVar22;
          fVar16 = fVar23;
          if (((uVar13 >> 0x1e & 1) == 0) && (-1 < (int)uVar13)) {
            uVar13 = param_1->CurrentTest;
            uVar6 = 0;
            if ((int)uVar13 < *(int *)(pFVar14 + 8)) {
              uVar6 = ~uVar13 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               fVar18 = __real_ff7fffff, bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            fVar21 = *(float *)(*(longlong *)pFVar14 + (longlong)(int)uVar13 * 4);
            if (fVar21 != fVar18) {
              if (((this->ClampMinType).Value == '\0') && (fVar15 = fVar21, fVar22 <= fVar21)) {
                fVar15 = fVar22;
              }
              if (((this->ClampMaxType).Value == '\0') && (fVar16 = fVar21, fVar21 <= fVar23)) {
                fVar16 = fVar23;
              }
            }
          }
          iVar10 = (int)param_1->_padding_;
          uVar11 = uVar11 + 1;
          lVar12 = lVar12 + 8;
          pFVar14 = pFVar14 + 0x38;
          fVar22 = fVar15;
          fVar23 = fVar16;
        } while ((int)uVar11 < iVar10);
      }
    }
    pFVar14 = (param_1->ItemDetails).AllocatorInstance.Data;
    if (fVar15 != fVar16) {
      fVar22 = fVar16;
      if ((this->bDefineReferenceValue != false) &&
         (FAIDataProviderValue::BindData
                    ((FAIDataProviderValue *)&this->ReferenceValue,pUVar8,(int)param_1->_padding_),
         fVar18 = __real_ff7fffff, this->bDefineReferenceValue != false)) {
        pFVar3 = (FProperty *)(this->ReferenceValue)._padding_;
        if ((pFVar3 == (FProperty *)0x0) ||
           (pfVar9 = FProperty::ContainerUObjectPtrToValuePtrInternal
                               (pFVar3,(UObject *)(this->ReferenceValue)._padding_,0),
           pfVar9 == (float *)0x0)) {
          pfVar9 = &(this->ReferenceValue).DefaultValue;
        }
        fVar18 = __real_ff7fffff;
        fVar22 = *pfVar9;
      }
      uVar11 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      fVar23 = __real_3f800000;
      uVar13 = 0;
      fVar20 = (float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff);
      fVar21 = (float)((uint)(fVar22 - fVar16) & __xmm_7fffffff7fffffff7fffffff7fffffff);
      fVar17 = (float)((uint)(fVar22 - fVar15) & __xmm_7fffffff7fffffff7fffffff7fffffff);
      if (fVar21 <= fVar17) {
        fVar21 = fVar17;
      }
      if (0 < (param_1->ItemDetails).ArrayNum) {
        pFVar14 = pFVar14 + 8;
        lVar12 = 0;
        do {
          uVar6 = 0;
          if ((int)uVar13 < (int)param_1->_padding_) {
            uVar6 = ~uVar13 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             fVar18 = __real_ff7fffff, bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar6 = *(uint *)(param_1->_padding_ + 4 + lVar12);
          if (((uVar6 >> 0x1e & 1) == 0) && (-1 < (int)uVar6)) {
            uVar6 = param_1->CurrentTest;
            uVar7 = 0;
            if ((int)uVar6 < *(int *)pFVar14) {
              uVar7 = ~uVar6 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               fVar18 = __real_ff7fffff, bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            fVar17 = *(float *)(*(longlong *)(pFVar14 + -8) + (longlong)(int)uVar6 * 4);
            if (fVar17 == fVar18) {
LAB_146f5dfe6:
              fVar19 = 0.0;
            }
            else {
              if (fVar16 <= fVar17) {
                fVar17 = fVar16;
              }
              if (fVar17 <= fVar15) {
                fVar17 = fVar15;
              }
              fVar17 = (float)((uint)(fVar22 - fVar17) & uVar11) / fVar21;
              if (0.0 <= fVar1) {
                fVar17 = fVar23 - fVar17;
              }
              uVar2 = (this->ScoringEquation).Value;
              if (uVar2 == '\0') {
                fVar19 = fVar17 * fVar20;
              }
              else if (uVar2 == '\x01') {
                fVar19 = fVar17 * fVar17 * fVar20;
              }
              else if (uVar2 == '\x02') {
                fVar19 = (fVar23 - fVar17) * fVar20;
              }
              else if (uVar2 == '\x03') {
                fVar19 = SQRT(fVar17) * fVar20;
              }
              else {
                fVar19 = 0.0;
                if ((uVar2 == '\x04') && (fVar19 = fVar20, fVar17 <= 0.0)) goto LAB_146f5dfe6;
              }
            }
            uVar6 = param_1->CurrentTest;
            uVar7 = 0;
            if ((int)uVar6 < *(int *)(pFVar14 + 0x10)) {
              uVar7 = ~uVar6 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               fVar18 = __real_ff7fffff, bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            *(float *)(*(longlong *)(pFVar14 + 8) + (longlong)(int)uVar6 * 4) = fVar19;
            uVar6 = 0;
            if ((int)uVar13 < (int)param_1->_padding_) {
              uVar6 = ~uVar13 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               fVar18 = __real_ff7fffff, bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            *(float *)(param_1->_padding_ + lVar12) =
                 fVar19 + *(float *)(param_1->_padding_ + lVar12);
          }
          uVar13 = uVar13 + 1;
          lVar12 = lVar12 + 8;
          pFVar14 = pFVar14 + 0x38;
        } while ((int)uVar13 < (param_1->ItemDetails).ArrayNum);
      }
    }
  }
  return;
}

// PostLoad @ 146f5fb80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UEnvQueryTest::PostLoad(UEnvQueryTest *this)

{
  uchar uVar1;
  bool bVar2;
  longlong lVar3;
  FString local_18;
  
  UObject::PostLoad((UObject *)this);
  if (((1 < (int)this->_padding_) || (this->bDefineReferenceValue == false)) ||
     (lVar3 = (**(code **)(this->_padding_ + 0x180))(this), lVar3 != 0)) goto LAB_146f5fd66;
  if ((this->ScoringFactor)._padding_ == 0) {
    (this->ScoringFactor).DefaultValue =
         (float)((uint)(this->ScoringFactor).DefaultValue ^ __xmm_80000000800000008000000080000000);
    if (5 < (byte)LogEQS._0_1_) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogEQS);
      goto LAB_146f5fcff;
    }
  }
  else {
    uVar1 = (this->ScoringEquation).Value;
    if (uVar1 == '\0') {
      (this->ScoringEquation).Value = '\x02';
      if (5 < (byte)LogEQS._0_1_) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogEQS);
        goto LAB_146f5fcff;
      }
    }
    else if (uVar1 == '\x02') {
      (this->ScoringEquation).Value = '\0';
      if (5 < (byte)LogEQS._0_1_) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogEQS);
LAB_146f5fcff:
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
    }
    else if (2 < (byte)LogEQS._0_1_) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEQS);
      goto LAB_146f5fcff;
    }
  }
  bVar2 = UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
  if ((!bVar2) && (2 < (byte)LogEQS._0_1_)) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEQS);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
LAB_146f5fd66:
                    /* WARNING: Could not recover jumptable at 0x000146f5fd71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2b0))(this);
  return;
}

// RunTest @ 146f6bac0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UEnvQueryTest::RunTest(UEnvQueryTest *this,FEnvQueryInstance *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Classes\\EnvironmentQuery\\EnvQueryTest.h"
                     ,0xac,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// SetWorkOnFloatValues @ 146f757c0

void __thiscall UEnvQueryTest::SetWorkOnFloatValues(UEnvQueryTest *this,bool param_1)

{
  uchar uVar1;
  
  this->bWorkOnFloatValues = 0;
  *(uint *)&this->field_0x1f0 = *(uint *)&this->field_0x1f0 | (uint)param_1;
  uVar1 = (this->FilterType).Value;
  if (param_1) {
    if (uVar1 == '\x03') {
      (this->FilterType).Value = '\x02';
      return;
    }
  }
  else {
    if (uVar1 != '\x03') {
      (this->FilterType).Value = '\x03';
    }
    (this->ScoringEquation).Value = '\x04';
  }
  return;
}

// StaticRegisterNativesUEnvQueryTest @ 146f76e90

void __cdecl UEnvQueryTest::StaticRegisterNativesUEnvQueryTest(void)

{
  return;
}

// UpdateNodeVersion @ 146f7cbd0

void __thiscall UEnvQueryTest::UpdateNodeVersion(UEnvQueryTest *this)

{
  *(undefined4 *)&this->_padding_ = 2;
  return;
}

// UpdatePreviewData @ 146f7cbe0

void __thiscall UEnvQueryTest::UpdatePreviewData(UEnvQueryTest *this)

{
  return;
}

