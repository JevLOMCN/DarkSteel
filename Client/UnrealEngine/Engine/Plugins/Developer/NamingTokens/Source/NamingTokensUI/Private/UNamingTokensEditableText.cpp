// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NamingTokensUI
// Functions: 38

// StaticClass @ 14d0e8180

UClass * __cdecl UNamingTokensEditableText::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNamingTokensEditableText.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NamingTokensUI",L"NamingTokensEditableText",
               &Z_Registration_Info_UClass_UNamingTokensEditableText.InnerSingleton,
               StaticRegisterNativesUNamingTokensEditableText,0x8a0,0x10,
               CLASS_Intrinsic|CLASS_DefaultConfig,CASTCLASS_None,L"NamingTokens",
               InternalConstructor<UNamingTokensEditableText>,
               InternalVTableHelperCtorCaller<UNamingTokensEditableText>,local_res8,
               UMultiLineEditableText::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNamingTokensEditableText.InnerSingleton;
}

// UNamingTokensEditableText @ 14d0ee880

/* WARNING: Enum "Type": Some values do not have unique names */

UNamingTokensEditableText * __thiscall
UNamingTokensEditableText::UNamingTokensEditableText
          (UNamingTokensEditableText *this,FVTableHelper *param_1)

{
  UMultiLineEditableText::UMultiLineEditableText((UMultiLineEditableText *)this,param_1);
  this->bEnableSuggestionDropdown = true;
  this->bIsMultiline = false;
  this->bDisplayTokenIcon = false;
  this->bDisplayErrorMessage = false;
  this->bDisplayBorderImage = false;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  (this->FilterArgs).AdditionalNamespacesToInclude.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->FilterArgs).AdditionalNamespacesToInclude.ArrayNum = 0;
  (this->FilterArgs).AdditionalNamespacesToInclude.ArrayMax = 0;
  (this->FilterArgs).bIncludeGlobal = true;
  (this->FilterArgs).bForceCaseSensitive = false;
  (this->FilterArgs).bNativeOnly = false;
  FTextBlockStyle::FTextBlockStyle(&this->ArgumentStyle);
  *(undefined8 *)&(this->BackgroundColor).SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->BackgroundColor).SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->BackgroundColor).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (this->BackgroundColor).ColorUseRule = UseColor_Specified;
  this->bCanDisplayResolvedText = true;
  *(undefined8 *)&this->OnPreEvaluateNamingTokens = 0;
  *(undefined8 *)&(this->OnPreEvaluateNamingTokens).field_0x8 = 0;
  *(undefined8 *)&(this->OnPreEvaluateNamingTokens).field_0x10 = 0;
  (this->MyNamingTokensEditableText).Object = (SNamingTokensEditableTextBox *)0x0;
  (this->MyNamingTokensEditableText).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->EditableTextBoxStyle).Object = (FEditableTextBoxStyle *)0x0;
  (this->EditableTextBoxStyle).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Contexts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Contexts).ArrayNum = 0;
  (this->Contexts).ArrayMax = 0;
  return this;
}

// UNamingTokensEditableText @ 14d0ee970

/* WARNING: Enum "Type": Some values do not have unique names */

UNamingTokensEditableText * __thiscall
UNamingTokensEditableText::UNamingTokensEditableText(UNamingTokensEditableText *this)

{
  FObjectInitializer *pFVar1;
  FTextBlockStyle *pFVar2;
  uint local_18;
  
  pFVar1 = FObjectInitializer::Get();
  UMultiLineEditableText::UMultiLineEditableText((UMultiLineEditableText *)this,pFVar1);
  this->bEnableSuggestionDropdown = true;
  this->bIsMultiline = false;
  this->bDisplayTokenIcon = false;
  this->bDisplayErrorMessage = false;
  this->bDisplayBorderImage = false;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  (this->FilterArgs).AdditionalNamespacesToInclude.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->FilterArgs).AdditionalNamespacesToInclude.ArrayNum = 0;
  (this->FilterArgs).AdditionalNamespacesToInclude.ArrayMax = 0;
  (this->FilterArgs).bIncludeGlobal = true;
  (this->FilterArgs).bForceCaseSensitive = false;
  (this->FilterArgs).bNativeOnly = false;
  FTextBlockStyle::FTextBlockStyle(&this->ArgumentStyle);
  *(undefined8 *)&(this->BackgroundColor).SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->BackgroundColor).SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->BackgroundColor).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (this->BackgroundColor).ColorUseRule = UseColor_Specified;
  this->bCanDisplayResolvedText = true;
  *(undefined8 *)&this->OnPreEvaluateNamingTokens = 0;
  *(undefined8 *)&(this->OnPreEvaluateNamingTokens).field_0x8 = 0;
  *(undefined8 *)&(this->OnPreEvaluateNamingTokens).field_0x10 = 0;
  (this->MyNamingTokensEditableText).Object = (SNamingTokensEditableTextBox *)0x0;
  (this->MyNamingTokensEditableText).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->EditableTextBoxStyle).Object = (FEditableTextBoxStyle *)0x0;
  (this->EditableTextBoxStyle).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Contexts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Contexts).ArrayNum = 0;
  (this->Contexts).ArrayMax = 0;
  pFVar2 = FNamingTokensStringSyntaxHighlighterMarshaller::GetDefaultArgumentStyle();
  FTextBlockStyle::operator=(&this->ArgumentStyle,pFVar2);
  local_18 = local_18 & 0xffffff00;
  *(undefined8 *)&(this->BackgroundColor).SpecifiedColor.field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->BackgroundColor).SpecifiedColor.field0_0x0 + 8) = 0;
  (this->BackgroundColor).ColorUseRule = (undefined1)local_18;
  (this->BackgroundColor).ColorTableId = local_18._1_1_;
  *(undefined2 *)&(this->BackgroundColor).field_0x12 = local_18._2_2_;
  return this;
}

// ~UNamingTokensEditableText @ 14d0f0710

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UNamingTokensEditableText::~UNamingTokensEditableText(UNamingTokensEditableText *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  pFVar1 = (this->Contexts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->EditableTextBoxStyle).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyNamingTokensEditableText).SharedReferenceCount.ReferenceController);
  pvVar2 = *(void **)&(this->OnPreEvaluateNamingTokens).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPreEvaluateNamingTokens);
  FTextBlockStyle::~FTextBlockStyle(&this->ArgumentStyle);
  DestructItems<FString,int>
            ((FString *)(this->FilterArgs).AdditionalNamespacesToInclude.AllocatorInstance.Data,
             (this->FilterArgs).AdditionalNamespacesToInclude.ArrayNum);
  pFVar1 = (this->FilterArgs).AdditionalNamespacesToInclude.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMultiLineEditableText::~UMultiLineEditableText((UMultiLineEditableText *)this);
  return;
}

// CanDisplayResolvedTextAttribute @ 14d0f4910

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UNamingTokensEditableText::CanDisplayResolvedTextAttribute(UNamingTokensEditableText *this)

{
  return this->bCanDisplayResolvedText != false;
}

// FOnPreEvaluateNamingTokens_DelegateWrapper @ 14d101d70

void __cdecl
UNamingTokensEditableText::FOnPreEvaluateNamingTokens_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// GetCanDisplayResolvedText @ 14d107990

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UNamingTokensEditableText::GetCanDisplayResolvedText(UNamingTokensEditableText *this)

{
  return this->bCanDisplayResolvedText;
}

// GetDisplayBorderImage @ 14d1086b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UNamingTokensEditableText::GetDisplayBorderImage(UNamingTokensEditableText *this)

{
  return this->bDisplayBorderImage;
}

// GetDisplayErrorMessage @ 14d1086c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UNamingTokensEditableText::GetDisplayErrorMessage(UNamingTokensEditableText *this)

{
  return this->bDisplayErrorMessage;
}

// GetDisplayTokenIcon @ 14d1086d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UNamingTokensEditableText::GetDisplayTokenIcon(UNamingTokensEditableText *this)

{
  return this->bDisplayTokenIcon;
}

// GetPrivateStaticClass @ 14d109930

UClass * __cdecl UNamingTokensEditableText::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNamingTokensEditableText.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NamingTokensUI",L"NamingTokensEditableText",
               &Z_Registration_Info_UClass_UNamingTokensEditableText.InnerSingleton,
               StaticRegisterNativesUNamingTokensEditableText,0x8a0,0x10,
               CLASS_Intrinsic|CLASS_DefaultConfig,CASTCLASS_None,L"NamingTokens",
               InternalConstructor<UNamingTokensEditableText>,
               InternalVTableHelperCtorCaller<UNamingTokensEditableText>,local_res8,
               UMultiLineEditableText::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNamingTokensEditableText.InnerSingleton;
}

// GetResolvedText @ 14d109a50

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall UNamingTokensEditableText::GetResolvedText(UNamingTokensEditableText *this)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  
  if ((this->MyNamingTokensEditableText).Object == (SNamingTokensEditableTextBox *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MyNamingTokensEditableText.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\NamingTokens\\Source\\NamingTokensUI\\Private\\NamingTokensEditableText.cpp"
                       ,0x12,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FText *)(*pcVar1)();
      return pFVar3;
    }
  }
  if ((this->MyNamingTokensEditableText).Object == (SNamingTokensEditableTextBox *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FText *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar3 = SNamingTokensEditableTextBox::GetResolvedText((this->MyNamingTokensEditableText).Object);
  return pFVar3;
}

// GetTokenizedText @ 14d10a440

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall UNamingTokensEditableText::GetTokenizedText(UNamingTokensEditableText *this)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  
  if ((this->MyNamingTokensEditableText).Object == (SNamingTokensEditableTextBox *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MyNamingTokensEditableText.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\NamingTokens\\Source\\NamingTokensUI\\Private\\NamingTokensEditableText.cpp"
                       ,0x18,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FText *)(*pcVar1)();
      return pFVar3;
    }
  }
  if ((this->MyNamingTokensEditableText).Object == (SNamingTokensEditableTextBox *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FText *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar3 = SNamingTokensEditableTextBox::GetTokenizedText((this->MyNamingTokensEditableText).Object)
  ;
  return pFVar3;
}

// OnPreEvaluateNamingTokensCallback @ 14d110e60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UNamingTokensEditableText::OnPreEvaluateNamingTokensCallback(UNamingTokensEditableText *this)

{
  SNamingTokensEditableTextBox *this_00;
  code *pcVar1;
  bool bVar2;
  
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->OnPreEvaluateNamingTokens,(void *)0x0);
  this_00 = (this->MyNamingTokensEditableText).Object;
  if (this_00 == (SNamingTokensEditableTextBox *)0x0) {
    return;
  }
  SNamingTokensEditableTextBox::SetFilterArgs(this_00,&this->FilterArgs);
  if ((this->MyNamingTokensEditableText).Object == (SNamingTokensEditableTextBox *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SNamingTokensEditableTextBox::SetContexts
            ((this->MyNamingTokensEditableText).Object,
             (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)&this->Contexts);
  return;
}

// RebuildWidget @ 14d116eb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UNamingTokensEditableText::RebuildWidget
          (UNamingTokensEditableText *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  int *piVar1;
  byte *pbVar2;
  TSharedPtr<FEditableTextBoxStyle,1> *pTVar3;
  TSharedPtr<SNamingTokensEditableTextBox,1> *pTVar4;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  SNamingTokensEditableTextBox *pSVar9;
  code *pcVar10;
  undefined8 uVar11;
  EStyleColor EVar12;
  undefined2 uVar13;
  ForAnyElementType FVar14;
  undefined4 uVar15;
  FSharedReferencer<1> FVar16;
  bool bVar17;
  char cVar18;
  byte bVar19;
  ISlateStyle *pIVar20;
  FName *pFVar21;
  FEditableTextBoxStyle *pFVar22;
  TReferenceControllerBase<1> *pTVar23;
  TSharedRef<SWidget,1> *pTVar24;
  FArguments *pFVar25;
  FText *pFVar26;
  undefined8 *puVar27;
  ulong64 uVar28;
  TReferenceControllerBase<1> *pTVar29;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  UNamingTokensEditableText *local_res18;
  UNamingTokensEditableText *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_6d8;
  FDelegateAllocation local_6d0;
  ForAnyElementType local_6c0;
  int local_6b8;
  int local_6b4;
  undefined2 local_6b0;
  undefined1 local_6a8 [8];
  ForAnyElementType FStack_6a0;
  int local_698;
  FNamingTokenFilterArgs local_690;
  undefined1 local_678;
  undefined1 local_677;
  undefined1 local_670 [8];
  ForAnyElementType FStack_668;
  ulonglong local_660;
  undefined1 local_658;
  undefined1 local_657;
  undefined1 local_650 [8];
  ForAnyElementType FStack_648;
  ulonglong local_640;
  FEditableTextBoxStyle *local_638;
  FSharedReferencer<1> FStack_630;
  FText local_628;
  TSlateDecl<SNamingTokensEditableTextBox,RequiredArgs::T0RequiredArgs> local_618;
  FText local_600;
  bool local_5f0;
  undefined1 local_5e8 [8];
  ForAnyElementType FStack_5e0;
  ulonglong local_5d8;
  SNamingTokensEditableTextBox *local_5d0;
  FSharedReferencer<1> local_5c8;
  SMultiLineEditableText *local_5c0;
  FSharedReferencer<1> local_5b8;
  UNamingTokensEditableText *local_5b0;
  UNamingTokensEditableText *local_5a8;
  UNamingTokensEditableText *local_5a0;
  FName local_598;
  FMemScope local_590;
  longlong local_588;
  FSharedReferencer<1> FStack_580;
  FDestructionSentinel local_578;
  FDestructionSentinel local_560;
  FDestructionSentinel local_548;
  FDestructionSentinel local_530;
  FDestructionSentinel local_518;
  FDestructionSentinel local_500;
  FDestructionSentinel local_4e8;
  FDelegateAllocation *local_4d0;
  FDestructionSentinel local_4c8;
  undefined1 *local_4b0;
  FDestructionSentinel local_4a8;
  undefined1 *local_490;
  FDestructionSentinel local_488;
  undefined1 *local_470;
  FDestructionSentinel local_468;
  undefined1 *local_450;
  FName local_448;
  FArguments local_440;
  
  pIVar20 = FAppStyle::Get();
  pFVar21 = ::FName::FName(&local_448,"NormalEditableTextBox");
  pFVar22 = (FEditableTextBoxStyle *)
            (**(code **)((longlong)*pIVar20 + 0xa0))
                      (pIVar20,FEditableTextBoxStyle::TypeName,*pFVar21,0,1);
  if (pFVar22 == (FEditableTextBoxStyle *)0x0) {
    pFVar22 = FEditableTextBoxStyle::GetDefault();
  }
  pTVar23 = ::operator_new(0xc90);
  pTVar29 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar23 == (TReferenceControllerBase<1> *)0x0) {
    local_638 = ___xmm_00000000000000000000000000000010;
    pFVar22 = (FEditableTextBoxStyle *)&DAT_00000010;
    FStack_630.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar23->SharedReferenceCount = (atomic<int>)0x1;
    pTVar23->WeakReferenceCount = (atomic<int>)0x1;
    pTVar23->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFEditableTextBoxStyle___00_SharedPointerInternals__6B_
    ;
    FEditableTextBoxStyle::FEditableTextBoxStyle((FEditableTextBoxStyle *)(pTVar23 + 1),pFVar22);
    pFVar22 = (FEditableTextBoxStyle *)(pTVar23 + 1);
    if ((pFVar22 == (FEditableTextBoxStyle *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar17)) {
      pcVar10 = (code *)swi(3);
      pTVar24 = (TSharedRef<SWidget,1> *)(*pcVar10)();
      return pTVar24;
    }
    LOCK();
    pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
    UNLOCK();
    FStack_630.ReferenceController = pTVar23;
    pTVar29 = pTVar23;
    local_638 = pFVar22;
  }
  pTVar3 = &this->EditableTextBoxStyle;
  if (pTVar3 != (TSharedPtr<FEditableTextBoxStyle,1> *)&local_638) {
    pTVar3->Object = pFVar22;
    local_638 = (FEditableTextBoxStyle *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->EditableTextBoxStyle).SharedReferenceCount,&FStack_630);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_630.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar29);
  if ((pTVar3->Object == (FEditableTextBoxStyle *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    pTVar24 = (TSharedRef<SWidget,1> *)(*pcVar10)();
    return pTVar24;
  }
  FTextBlockStyle::operator=(&pTVar3->Object->TextStyle,(FTextBlockStyle *)&this->_padding_);
  if ((pTVar3->Object == (FEditableTextBoxStyle *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    pTVar24 = (TSharedRef<SWidget,1> *)(*pcVar10)();
    return pTVar24;
  }
  uVar11 = *(undefined8 *)((longlong)&(this->BackgroundColor).SpecifiedColor.field0_0x0 + 8);
  pFVar22 = pTVar3->Object;
  pTVar4 = &this->MyNamingTokensEditableText;
  *(undefined8 *)&(pFVar22->BackgroundColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(this->BackgroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(pFVar22->BackgroundColor).SpecifiedColor.field0_0x0 + 8) = uVar11;
  EVar12 = (this->BackgroundColor).ColorTableId;
  uVar13 = *(undefined2 *)&(this->BackgroundColor).field_0x12;
  (pFVar22->BackgroundColor).ColorUseRule = (this->BackgroundColor).ColorUseRule;
  (pFVar22->BackgroundColor).ColorTableId = EVar12;
  *(undefined2 *)&(pFVar22->BackgroundColor).field_0x12 = uVar13;
  local_588 = 0;
  FStack_580.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar4 != (TSharedPtr<SNamingTokensEditableTextBox,1> *)&local_588) {
    pTVar4->Object = (SNamingTokensEditableTextBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyNamingTokensEditableText).SharedReferenceCount,&FStack_580);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_580.ReferenceController);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->OnPreEvaluateNamingTokens,(void *)0x0);
  if (pTVar4->Object != (SNamingTokensEditableTextBox *)0x0) {
    SNamingTokensEditableTextBox::SetFilterArgs(pTVar4->Object,&this->FilterArgs);
    if ((pTVar4->Object == (SNamingTokensEditableTextBox *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar17)) {
      pcVar10 = (code *)swi(3);
      pTVar24 = (TSharedRef<SWidget,1> *)(*pcVar10)();
      return pTVar24;
    }
    SNamingTokensEditableTextBox::SetContexts
              (pTVar4->Object,(TArray<UObject_*,TSizedDefaultAllocator<32>_> *)&this->Contexts);
  }
  pFVar25 = SNamingTokensEditableTextBox::FArguments::FArguments(&local_440);
  pFVar26 = UMultiLineEditableText::GetText((UMultiLineEditableText *)this,&local_628);
  FText::FText(&local_600,pFVar26);
  local_5f0 = true;
  local_5d8 = 0;
  local_5e8 = (undefined1  [8])0x0;
  FStack_5e0.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar25->_Text).Value,&local_600);
  (pFVar25->_Text).bIsSet = local_5f0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar25->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_5e8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5e8,
             (FWriteAccessScope *)&local_578);
  if (((int)local_5d8 != 0) && (FStack_5e0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_5e0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_5e0,0,0,0x10);
    local_5d8 = local_5d8 & 0xffffffff00000000;
  }
  if (local_578.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_578.Accessor,&local_578);
  }
  if (FStack_5e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_5e0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5e8);
  if (local_600.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_600.TextData.Reference + 0x10))();
  }
  local_678 = UMultiLineEditableText::GetIsReadOnly((UMultiLineEditableText *)this);
  local_677 = 1;
  local_660 = 0;
  local_670 = (undefined1  [8])0x0;
  FStack_668.Data = (FScriptContainerElement *)0x0;
  (pFVar25->_IsReadOnly).Value = (bool)local_678;
  (pFVar25->_IsReadOnly).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar25->_IsReadOnly).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_670);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_670,
             (FWriteAccessScope *)&local_560);
  if (((int)local_660 != 0) && (FStack_668.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_668.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_668,0,0,0x10);
    local_660 = local_660 & 0xffffffff00000000;
  }
  if (local_560.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_560.Accessor,&local_560);
  }
  if (FStack_668.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_668.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_670);
  uVar15 = local_628._12_4_;
  local_6d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_6d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_6d0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_6d8,(FWriteAccessScope *)&local_4e8);
  local_4d0 = &local_6d0;
  puVar27 = UE::Core::Private::DelegateAllocate(0x30,&local_6d0);
  if (puVar27 != (undefined8 *)0x0) {
    *puVar27 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar28 = FDelegateHandle::GenerateNewID();
    puVar27[2] = uVar28;
    *puVar27 = &
               ___7__TBaseUObjectMethodDelegateInstance__00__CBVUNamingTokensEditableText____A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar27[3] = 0;
    local_res18 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar27 + 3),(FObjectPtr)&local_res18);
    puVar27[4] = CanDisplayResolvedTextAttribute;
    puVar27[5] = (ulonglong)(uint)uVar15 << 0x20;
  }
  if (local_4e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4e8.Accessor,&local_4e8);
  }
  local_6b0 = 0x100;
  local_6a8 = (undefined1  [8])0x0;
  FStack_6a0.Data = (FScriptContainerElement *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_6d8,(FWriteAccessScope *)&local_548);
  if (FStack_6a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_6a0.Data);
  }
  FStack_6a0.Data = (FScriptContainerElement *)local_6d0.DelegateAllocator;
  local_698 = local_6d0.DelegateSize;
  local_6d0.DelegateSize = 0;
  local_6d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  if (local_548.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_548.Accessor,&local_548);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_6d8,(FWriteAccessScope *)&local_530);
  if ((local_6d0.DelegateSize != 0) &&
     (local_6d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_6d0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_6d0,0,0,0x10);
    local_6d0.DelegateSize = 0;
  }
  if (local_530.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_530.Accessor,&local_530);
  }
  if (local_6d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_6d0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_6d8.AccessDetector);
  (pFVar25->_CanDisplayResolvedText).Value = local_6b0._0_1_;
  (pFVar25->_CanDisplayResolvedText).bIsSet = local_6b0._1_1_;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar25->_CanDisplayResolvedText).Getter
             ,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_6a8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6a8,
             (FWriteAccessScope *)&local_518);
  if ((local_698 != 0) &&
     ((ForElementType<TAlignedBytes<16,16>_>)FStack_6a0.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_6a0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_6a0,0,0,0x10);
    local_698 = 0;
  }
  if (local_518.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_518.Accessor,&local_518);
  }
  if ((ForElementType<TAlignedBytes<16,16>_>)FStack_6a0.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free(FStack_6a0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6a8);
  local_658 = this->bIsMultiline;
  local_657 = 1;
  local_640 = 0;
  local_650 = (undefined1  [8])0x0;
  FStack_648.Data = (FScriptContainerElement *)0x0;
  (pFVar25->_AllowMultiLine).Value = (bool)local_658;
  (pFVar25->_AllowMultiLine).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar25->_AllowMultiLine).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_650);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_650,
             (FWriteAccessScope *)&local_500);
  if (((int)local_640 != 0) && (FStack_648.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_648.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_648,0,0,0x10);
    local_640 = local_640 & 0xffffffff00000000;
  }
  if (local_500.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_500.Accessor,&local_500);
  }
  if (FStack_648.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_648.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_650);
  if ((pTVar3->Object == (FEditableTextBoxStyle *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    pTVar24 = (TSharedRef<SWidget,1> *)(*pcVar10)();
    return pTVar24;
  }
  pFVar25->_Style = pTVar3->Object;
  pFVar25->_ArgumentStyle = &this->ArgumentStyle;
  iVar6 = (this->FilterArgs).AdditionalNamespacesToInclude.ArrayNum;
  pFVar8 = (this->FilterArgs).AdditionalNamespacesToInclude.AllocatorInstance.Data;
  local_690.AdditionalNamespacesToInclude.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_690.AdditionalNamespacesToInclude.ArrayNum = iVar6;
  if (iVar6 == 0) {
    local_690.AdditionalNamespacesToInclude.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar6,0,(ForAnyElementType *)&local_690,iVar6,
               &local_690.AdditionalNamespacesToInclude.ArrayMax);
    ConstructItems<FString,FString,int>
              (local_690.AdditionalNamespacesToInclude.AllocatorInstance.Data,(FString *)pFVar8,
               iVar6);
  }
  local_690.bIncludeGlobal = (this->FilterArgs).bIncludeGlobal;
  local_690.bForceCaseSensitive = (this->FilterArgs).bForceCaseSensitive;
  local_690.bNativeOnly = (this->FilterArgs).bNativeOnly;
  FNamingTokenFilterArgs::operator=(&pFVar25->_FilterArgs,&local_690);
  DestructItems<FString,int>
            ((FString *)local_690.AdditionalNamespacesToInclude.AllocatorInstance.Data,
             local_690.AdditionalNamespacesToInclude.ArrayNum);
  if (local_690.AdditionalNamespacesToInclude.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_690.AdditionalNamespacesToInclude.AllocatorInstance.Data);
  }
  iVar6 = (this->Contexts).ArrayNum;
  pFVar8 = (this->Contexts).AllocatorInstance.Data;
  local_6c0.Data = (FScriptContainerElement *)0x0;
  local_6b8 = iVar6;
  if (iVar6 == 0) {
    local_6b4 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar6,0,&local_6c0,iVar6,&local_6b4);
    ConstructItems<TObjectPtr<UObject>,TObjectPtr<UObject>,int>
              (local_6c0.Data,(TObjectPtr<UObject> *)pFVar8,iVar6);
  }
  iVar6 = local_6b8;
  FVar14.Data = local_6c0.Data;
  pTVar5 = &pFVar25->_Contexts;
  if (pTVar5 != (TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *)&local_6c0) {
    iVar7 = (pFVar25->_Contexts).ArrayMax;
    piVar1 = &(pFVar25->_Contexts).ArrayMax;
    (pFVar25->_Contexts).ArrayNum = local_6b8;
    if ((local_6b8 == 0) && (iVar7 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_6b8,iVar7,&pTVar5->AllocatorInstance,local_6b8,piVar1);
      ConstructItems<TObjectPtr<UObject>,TObjectPtr<UObject>,int>
                ((pTVar5->AllocatorInstance).Data,(TObjectPtr<UObject> *)FVar14.Data,iVar6);
    }
  }
  if (local_6c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6c0.Data);
  }
  uVar15 = local_628._12_4_;
  pFVar25->_EnableSuggestionDropdown = this->bEnableSuggestionDropdown;
  (pFVar25->_DisplayTokenIcon).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(pFVar25->_DisplayTokenIcon).Getter,(FWriteAccessScope *)&local_4c8);
  local_4b0 = &(pFVar25->_DisplayTokenIcon).Getter.field_0x8;
  puVar27 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_4b0);
  if (puVar27 != (undefined8 *)0x0) {
    *puVar27 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar28 = FDelegateHandle::GenerateNewID();
    puVar27[2] = uVar28;
    *puVar27 = &
               ___7__TBaseUObjectMethodDelegateInstance__00__CBVUNamingTokensEditableText____A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar27[3] = 0;
    local_res20 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar27 + 3),(FObjectPtr)&local_res20);
    puVar27[4] = GetDisplayTokenIcon;
    puVar27[5] = (ulonglong)(uint)uVar15 << 0x20;
  }
  if (local_4c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4c8.Accessor,&local_4c8);
  }
  uVar15 = local_628._12_4_;
  (pFVar25->_DisplayErrorMessage).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(pFVar25->_DisplayErrorMessage).Getter,(FWriteAccessScope *)&local_4a8);
  local_490 = &(pFVar25->_DisplayErrorMessage).Getter.field_0x8;
  puVar27 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_490);
  if (puVar27 != (undefined8 *)0x0) {
    *puVar27 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar28 = FDelegateHandle::GenerateNewID();
    puVar27[2] = uVar28;
    *puVar27 = &
               ___7__TBaseUObjectMethodDelegateInstance__00__CBVUNamingTokensEditableText____A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar27[3] = 0;
    local_5b0 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar27 + 3),(FObjectPtr)&local_5b0);
    puVar27[4] = GetDisplayErrorMessage;
    puVar27[5] = (ulonglong)(uint)uVar15 << 0x20;
  }
  if (local_4a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4a8.Accessor,&local_4a8);
  }
  uVar15 = local_628._12_4_;
  (pFVar25->_DisplayBorderImage).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(pFVar25->_DisplayBorderImage).Getter,(FWriteAccessScope *)&local_488);
  local_470 = &(pFVar25->_DisplayBorderImage).Getter.field_0x8;
  puVar27 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_470);
  if (puVar27 != (undefined8 *)0x0) {
    *puVar27 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar28 = FDelegateHandle::GenerateNewID();
    puVar27[2] = uVar28;
    *puVar27 = &
               ___7__TBaseUObjectMethodDelegateInstance__00__CBVUNamingTokensEditableText____A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar27[3] = 0;
    local_5a8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar27 + 3),(FObjectPtr)&local_5a8);
    puVar27[4] = GetDisplayBorderImage;
    puVar27[5] = (ulonglong)(uint)uVar15 << 0x20;
  }
  if (local_488.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_488.Accessor,&local_488);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar25->_OnPreEvaluateNamingTokens,(FWriteAccessScope *)&local_468);
  local_450 = &(pFVar25->_OnPreEvaluateNamingTokens).field_0x8;
  puVar27 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_450);
  if (puVar27 != (undefined8 *)0x0) {
    *puVar27 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar28 = FDelegateHandle::GenerateNewID();
    puVar27[2] = uVar28;
    *puVar27 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUNamingTokensEditableText____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar27[3] = 0;
    local_5a0 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar27 + 3),(FObjectPtr)&local_5a0);
    puVar27[4] = OnPreEvaluateNamingTokensCallback;
    puVar27[5] = (ulonglong)(uint)local_628._12_4_ << 0x20;
  }
  if (local_468.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_468.Accessor,&local_468);
  }
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_598 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_590,&local_598,true);
  TSlateDecl<SNamingTokensEditableTextBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SNamingTokensEditableTextBox,RequiredArgs::T0RequiredArgs>
            (&local_618,"SNamingTokensEditableTextBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\NamingTokens\\Source\\NamingTokensUI\\Private\\NamingTokensEditableText.cpp"
             ,0x7d,local_res8);
  FMemScope::~FMemScope(&local_590);
  FLLMScope::~FLLMScope(local_res10);
  pSVar9 = local_618._Widget.Object;
  if ((local_618._Widget.Object == (SNamingTokensEditableTextBox *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    pTVar24 = (TSharedRef<SWidget,1> *)(*pcVar10)();
    return pTVar24;
  }
  SWidget::SWidgetConstruct((SWidget *)local_618._Widget.Object,(FSlateBaseNamedArgs *)pFVar25);
  SNamingTokensEditableTextBox::Construct(local_618._Widget.Object,pFVar25);
  if ((local_618._Widget.Object == (SNamingTokensEditableTextBox *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    pTVar24 = (TSharedRef<SWidget,1> *)(*pcVar10)();
    return pTVar24;
  }
  if (((local_618._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar18 = (**(code **)((local_618._Widget.Object)->_padding_ + 0x228))(local_618._Widget.Object);
    bVar19 = 0;
    if (cVar18 == '\0') goto LAB_14d117bbe;
  }
  bVar19 = 0x20;
LAB_14d117bbe:
  *(byte *)&(local_618._Widget.Object)->_padding_ =
       (byte)(local_618._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_618._Widget.Object)->_padding_ =
       (byte)(local_618._Widget.Object)->_padding_ | bVar19;
  if ((local_618._Widget.Object == (SNamingTokensEditableTextBox *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    pTVar24 = (TSharedRef<SWidget,1> *)(*pcVar10)();
    return pTVar24;
  }
  pbVar2 = (byte *)((longlong)&(local_618._Widget.Object)->_padding_ + 1);
  *pbVar2 = *pbVar2 | 4;
  if ((local_618._Widget.Object == (SNamingTokensEditableTextBox *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    pTVar24 = (TSharedRef<SWidget,1> *)(*pcVar10)();
    return pTVar24;
  }
  FVar16.ReferenceController = local_618._Widget.SharedReferenceCount.ReferenceController;
  local_618._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_618._Widget.Object = (SNamingTokensEditableTextBox *)0x0;
  if ((pSVar9 == (SNamingTokensEditableTextBox *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    pTVar24 = (TSharedRef<SWidget,1> *)(*pcVar10)();
    return pTVar24;
  }
  local_5d0 = pSVar9;
  local_5c8.ReferenceController = FVar16.ReferenceController;
  if (FVar16.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar16.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar16.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->MyNamingTokensEditableText != (TSharedPtr<SNamingTokensEditableTextBox,1> *)&local_5d0)
  {
    (this->MyNamingTokensEditableText).Object = pSVar9;
    local_5d0 = (SNamingTokensEditableTextBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyNamingTokensEditableText).SharedReferenceCount,&local_5c8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5c8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar16.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (local_628.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_628.TextData.Reference + 0x10))();
  }
  SNamingTokensEditableTextBox::FArguments::~FArguments(&local_440);
  if (((this->MyNamingTokensEditableText).Object == (SNamingTokensEditableTextBox *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    pTVar24 = (TSharedRef<SWidget,1> *)(*pcVar10)();
    return pTVar24;
  }
  pSVar9 = (this->MyNamingTokensEditableText).Object;
  local_5b8.ReferenceController = (pSVar9->EditableText).SharedReferenceCount.ReferenceController;
  local_5c0 = (pSVar9->EditableText).Object;
  if (local_5b8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_5b8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_5b8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SMultiLineEditableText **)&this->_padding_ != &local_5c0) {
    this->_padding_ = (longlong)local_5c0;
    local_5c0 = (SMultiLineEditableText *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&local_5b8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5b8.ReferenceController);
  if (((this->MyNamingTokensEditableText).Object == (SNamingTokensEditableTextBox *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    pTVar24 = (TSharedRef<SWidget,1> *)(*pcVar10)();
    return pTVar24;
  }
  pTVar29 = (this->MyNamingTokensEditableText).SharedReferenceCount.ReferenceController;
  pSVar9 = (this->MyNamingTokensEditableText).Object;
  if (pTVar29 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar29->SharedReferenceCount = (atomic<int>)((int)pTVar29->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar9 == (SNamingTokensEditableTextBox *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    pTVar24 = (TSharedRef<SWidget,1> *)(*pcVar10)();
    return pTVar24;
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar9;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar29;
  if (pTVar29 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar29->SharedReferenceCount = (atomic<int>)((int)pTVar29->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar29);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 14d118560

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UNamingTokensEditableText::ReleaseSlateResources(UNamingTokensEditableText *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UMultiLineEditableText::ReleaseSlateResources((UMultiLineEditableText *)this,param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyNamingTokensEditableText != (TSharedPtr<SNamingTokensEditableTextBox,1> *)&local_18)
  {
    (this->MyNamingTokensEditableText).Object = (SNamingTokensEditableTextBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyNamingTokensEditableText).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// SetBackgroundColor @ 14d119d70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UNamingTokensEditableText::SetBackgroundColor(UNamingTokensEditableText *this,FSlateColor *param_1)

{
  SNamingTokensEditableTextBox *pSVar1;
  FEditableTextBoxStyle *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  EStyleColor EVar5;
  undefined2 uVar6;
  bool bVar7;
  
  pSVar1 = (this->MyNamingTokensEditableText).Object;
  uVar4 = *(undefined8 *)((longlong)&(param_1->SpecifiedColor).field0_0x0 + 8);
  *(undefined8 *)&(this->BackgroundColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->SpecifiedColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->BackgroundColor).SpecifiedColor.field0_0x0 + 8) = uVar4;
  EVar5 = param_1->ColorTableId;
  uVar6 = *(undefined2 *)&param_1->field_0x12;
  (this->BackgroundColor).ColorUseRule = param_1->ColorUseRule;
  (this->BackgroundColor).ColorTableId = EVar5;
  *(undefined2 *)&(this->BackgroundColor).field_0x12 = uVar6;
  if ((pSVar1 != (SNamingTokensEditableTextBox *)0x0) &&
     (pFVar2 = (this->EditableTextBoxStyle).Object, pFVar2 != (FEditableTextBoxStyle *)0x0)) {
    uVar4 = *(undefined8 *)((longlong)&(param_1->SpecifiedColor).field0_0x0 + 8);
    *(undefined8 *)&(pFVar2->BackgroundColor).SpecifiedColor.field0_0x0 =
         *(undefined8 *)&(param_1->SpecifiedColor).field0_0x0;
    *(undefined8 *)((longlong)&(pFVar2->BackgroundColor).SpecifiedColor.field0_0x0 + 8) = uVar4;
    EVar5 = param_1->ColorTableId;
    uVar6 = *(undefined2 *)&param_1->field_0x12;
    (pFVar2->BackgroundColor).ColorUseRule = param_1->ColorUseRule;
    (pFVar2->BackgroundColor).ColorTableId = EVar5;
    *(undefined2 *)&(pFVar2->BackgroundColor).field_0x12 = uVar6;
    if ((this->MyNamingTokensEditableText).Object == (SNamingTokensEditableTextBox *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    SNamingTokensEditableTextBox::SetNormalStyle
              ((this->MyNamingTokensEditableText).Object,(this->EditableTextBoxStyle).Object);
    return;
  }
  return;
}

// SetCanDisplayResolvedText @ 14d119e10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UNamingTokensEditableText::SetCanDisplayResolvedText(UNamingTokensEditableText *this,bool param_1)

{
  this->bCanDisplayResolvedText = param_1;
  return;
}

// SetContexts @ 14d119f50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UNamingTokensEditableText::SetContexts
          (UNamingTokensEditableText *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>::
  operator=<TSizedDefaultAllocator<32>,TObjectPtr<UObject>_>(&this->Contexts,param_1);
  return;
}

// SetDisplayBorderImage @ 14d119f70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UNamingTokensEditableText::SetDisplayBorderImage(UNamingTokensEditableText *this,bool param_1)

{
  this->bDisplayBorderImage = param_1;
  return;
}

// SetDisplayErrorMessage @ 14d119f80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UNamingTokensEditableText::SetDisplayErrorMessage(UNamingTokensEditableText *this,bool param_1)

{
  this->bDisplayErrorMessage = param_1;
  return;
}

// SetDisplayTokenIcon @ 14d119f90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UNamingTokensEditableText::SetDisplayTokenIcon(UNamingTokensEditableText *this,bool param_1)

{
  this->bDisplayTokenIcon = param_1;
  return;
}

// SetWidgetArgumentStyle @ 14d11a9a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UNamingTokensEditableText::SetWidgetArgumentStyle
          (UNamingTokensEditableText *this,FTextBlockStyle *param_1)

{
  SNamingTokensEditableTextBox *this_00;
  
  FTextBlockStyle::operator=(&this->ArgumentStyle,param_1);
  this_00 = (this->MyNamingTokensEditableText).Object;
  if (this_00 != (SNamingTokensEditableTextBox *)0x0) {
    SNamingTokensEditableTextBox::SetArgumentStyle(this_00,param_1);
  }
  return;
}

// StaticRegisterNativesUNamingTokensEditableText @ 14d11a9f0

void __cdecl UNamingTokensEditableText::StaticRegisterNativesUNamingTokensEditableText(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xd;
  local_18.DataPtr = Z_Construct_UClass_UNamingTokensEditableText_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 14d11aa70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UNamingTokensEditableText::SynchronizeProperties(UNamingTokensEditableText *this)

{
  longlong *this_00;
  TSharedPtr<SNamingTokensEditableTextBox,1> *pTVar1;
  FName FVar2;
  SNamingTokensEditableTextBox *this_01;
  SMultiLineEditableText *pSVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  UObject *pUVar7;
  UFunction *pUVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  FText *pFVar11;
  undefined4 local_res8 [2];
  UObject *local_res10;
  undefined1 local_298 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_290;
  ForAnyElementType FStack_288;
  ulonglong local_280;
  undefined1 local_278 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_270;
  ForAnyElementType FStack_268;
  ulonglong local_260;
  undefined1 local_258 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_250;
  ForAnyElementType FStack_248;
  ulonglong local_240;
  undefined1 local_238 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_230;
  ForAnyElementType FStack_228;
  ulonglong local_220;
  undefined1 local_218 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_210;
  ForAnyElementType FStack_208;
  ulonglong local_200;
  FText local_1f8;
  undefined1 local_1e8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1e0;
  ForAnyElementType FStack_1d8;
  ulonglong local_1d0;
  undefined1 local_1c8 [8];
  undefined1 local_1c0 [8];
  void *pvStack_1b8;
  undefined8 local_1b0;
  FText local_1a8;
  undefined1 local_198;
  undefined1 local_190 [8];
  FDelegateAllocation FStack_188;
  TAttribute<EVirtualKeyboardDismissAction> local_178;
  FDestructionSentinel local_158;
  FDestructionSentinel local_140;
  FDestructionSentinel local_128;
  FDestructionSentinel local_110;
  FDestructionSentinel local_f8;
  FDestructionSentinel local_e0;
  FDestructionSentinel local_c8;
  undefined1 local_b0 [24];
  undefined1 local_98 [24];
  FDestructionSentinel local_80;
  FDelegateAllocation *local_68;
  FReadAccessScope local_60;
  FReadAccessScope local_48;
  
  local_res8[0] = 0;
  UWidget::SynchronizeProperties((UWidget *)this);
  if (this->_padding_ == 0) {
    return;
  }
  this_00 = &this->_padding_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_60);
  if ((this->_padding_ == 0) ||
     (pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_), pUVar7 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_60);
  }
  else {
    pUVar8 = UObject::FindFunction(pUVar7,(FName)this->_padding_);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_60);
    if (pUVar8 != (UFunction *)0x0) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_48);
      FVar2 = (FName)this->_padding_;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_48);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FWriteAccessScope *)&local_158);
      pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      if (local_158.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_158.Accessor,&local_158);
      }
      FText::FText(&local_1a8);
      local_198 = 1;
      FStack_188.DelegateSize = 0;
      FStack_188._12_4_ = 0;
      local_190 = (undefined1  [8])0x0;
      FStack_188.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_190,
                 (FWriteAccessScope *)&local_80);
      local_68 = &FStack_188;
      puVar9 = UE::Core::Private::DelegateAllocate(0x30,&FStack_188);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = &
                  ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar10 = FDelegateHandle::GenerateNewID();
        puVar9[2] = uVar10;
        *puVar9 = &
                  ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
        ;
        *(FName *)(puVar9 + 4) = FVar2;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar7);
        }
        puVar9[5] = 0;
        local_res10 = pUVar7;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar7);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 5),(FObjectPtr)&local_res10);
        if ((FVar2 == (FName)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InFunctionName != NAME_None",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                               ,0x56,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (pUVar7 != (UObject *)0x0) {
          pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)(puVar9 + 5));
          pUVar8 = UObject::FindFunctionChecked(pUVar7,FVar2);
          puVar9[3] = pUVar8;
        }
      }
      if (local_80.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
      }
      pFVar11 = &local_1a8;
      bVar5 = true;
      bVar6 = false;
      goto LAB_14d11ace7;
    }
  }
  local_1f8.TextData.Reference = (ITextData *)this->_padding_;
  if (local_1f8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1f8.TextData.Reference + 8))
              (local_1f8.TextData.Reference,local_res8);
  }
  local_1f8.Flags = (uint)this->_padding_;
  pFVar11 = &local_1f8;
  local_1e8[0] = 1;
  bVar5 = false;
  bVar6 = true;
  local_1d0 = 0;
  local_1e0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1d8.Data = (FScriptContainerElement *)0x0;
LAB_14d11ace7:
  FText::FText((FText *)local_b0,pFVar11);
  local_b0[0x10] = *(undefined1 *)&pFVar11[1].TextData.Reference;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_98,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar11[1].Flags);
  if (bVar6) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_1e0,(FWriteAccessScope *)&local_140);
    if (((int)local_1d0 != 0) && (FStack_1d8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_1d8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1d8,0,0,0x10);
      local_1d0 = local_1d0 & 0xffffffff00000000;
    }
    if (local_140.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_140.Accessor,&local_140);
    }
    if (FStack_1d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1d8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1e0.AccessDetector);
    if (local_1f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1f8.TextData.Reference + 0x10))();
    }
  }
  if (bVar5) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_190);
    if (FStack_188.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)FStack_188.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_190);
    if (local_1a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1a8.TextData.Reference + 0x10))();
    }
  }
  if (((this->EditableTextBoxStyle).Object == (FEditableTextBoxStyle *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FTextBlockStyle::operator=
            (&((this->EditableTextBoxStyle).Object)->TextStyle,(FTextBlockStyle *)&this->_padding_);
  pTVar1 = &this->MyNamingTokensEditableText;
  if ((pTVar1->Object == (SNamingTokensEditableTextBox *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_01 = pTVar1->Object;
  if (((this->EditableTextBoxStyle).Object == (FEditableTextBoxStyle *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  SNamingTokensEditableTextBox::SetNormalStyle(this_01,(this->EditableTextBoxStyle).Object);
  if ((pTVar1->Object == (SNamingTokensEditableTextBox *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  SNamingTokensEditableTextBox::SetArgumentStyle(pTVar1->Object,&this->ArgumentStyle);
  if ((pTVar1->Object == (SNamingTokensEditableTextBox *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  SNamingTokensEditableTextBox::SetEnableSuggestionDropdown
            (pTVar1->Object,this->bEnableSuggestionDropdown);
  if ((this->_padding_ == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pSVar3 = (SMultiLineEditableText *)this->_padding_;
  if (((this->MyNamingTokensEditableText).Object == (SNamingTokensEditableTextBox *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  SMultiLineEditableText::SetText(pSVar3,&((this->MyNamingTokensEditableText).Object)->BoundText);
  if ((this->_padding_ == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  SMultiLineEditableText::SetHintText
            ((SMultiLineEditableText *)this->_padding_,(TAttribute<FText> *)local_b0);
  if ((this->_padding_ == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_298[0] = *(undefined1 *)((longlong)&this->_padding_ + 5);
  local_280 = 0;
  local_298[1] = true;
  local_290.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_288.Data = (FScriptContainerElement *)0x0;
  SMultiLineEditableText::SetAllowContextMenu
            ((SMultiLineEditableText *)this->_padding_,(TAttribute<bool> *)local_298);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_290,(FWriteAccessScope *)&local_128);
  if (((int)local_280 != 0) && (FStack_288.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_288.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_288,0,0,0x10);
    local_280 = local_280 & 0xffffffff00000000;
  }
  if (local_128.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_128.Accessor,&local_128);
  }
  if (FStack_288.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_288.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_290.AccessDetector);
  if ((this->_padding_ == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pSVar3 = (SMultiLineEditableText *)this->_padding_;
  local_278[0] = UMultiLineEditableText::GetIsReadOnly((UMultiLineEditableText *)this);
  local_278[1] = true;
  local_260 = 0;
  local_270.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_268.Data = (FScriptContainerElement *)0x0;
  SMultiLineEditableText::SetIsReadOnly(pSVar3,(TAttribute<bool> *)local_278);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_270,(FWriteAccessScope *)&local_110);
  if (((int)local_260 != 0) && (FStack_268.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_268.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_268,0,0,0x10);
    local_260 = local_260 & 0xffffffff00000000;
  }
  if (local_110.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_110.Accessor,&local_110);
  }
  if (FStack_268.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_268.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_270.AccessDetector);
  if ((this->_padding_ == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_178.Value = *(EVirtualKeyboardDismissAction *)((longlong)&this->_padding_ + 7);
  local_178.Getter._16_8_ = 0;
  local_178.bIsSet = true;
  local_178.Getter._0_8_ = 0;
  local_178.Getter._8_8_ = 0;
  SMultiLineEditableText::SetVirtualKeyboardDismissAction
            ((SMultiLineEditableText *)this->_padding_,&local_178);
  if ((this->_padding_ == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pSVar3 = (SMultiLineEditableText *)this->_padding_;
  local_258[0] = UMultiLineEditableText::GetSelectAllTextWhenFocused((UMultiLineEditableText *)this)
  ;
  local_258[1] = true;
  local_240 = 0;
  local_250.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_248.Data = (FScriptContainerElement *)0x0;
  SMultiLineEditableText::SetSelectAllTextWhenFocused(pSVar3,(TAttribute<bool> *)local_258);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_250,(FWriteAccessScope *)&local_f8);
  if (((int)local_240 != 0) && (FStack_248.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_248.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_248,0,0,0x10);
    local_240 = local_240 & 0xffffffff00000000;
  }
  if (local_f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f8.Accessor,&local_f8);
  }
  if (FStack_248.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_248.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_250.AccessDetector);
  if ((this->_padding_ == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pSVar3 = (SMultiLineEditableText *)this->_padding_;
  local_238[0] = UMultiLineEditableText::GetClearTextSelectionOnFocusLoss
                           ((UMultiLineEditableText *)this);
  local_238[1] = true;
  local_220 = 0;
  local_230.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_228.Data = (FScriptContainerElement *)0x0;
  SMultiLineEditableText::SetClearTextSelectionOnFocusLoss(pSVar3,(TAttribute<bool> *)local_238);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_230,(FWriteAccessScope *)&local_e0);
  if (((int)local_220 != 0) && (FStack_228.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_228.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_228,0,0,0x10);
    local_220 = local_220 & 0xffffffff00000000;
  }
  if (local_e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e0.Accessor,&local_e0);
  }
  if (FStack_228.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_228.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_230.AccessDetector);
  if ((this->_padding_ == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pSVar3 = (SMultiLineEditableText *)this->_padding_;
  local_1c8[0] = UMultiLineEditableText::GetRevertTextOnEscape((UMultiLineEditableText *)this);
  local_1c8[1] = true;
  local_1b0 = 0;
  local_1c0 = (undefined1  [8])0x0;
  pvStack_1b8 = (void *)0x0;
  SMultiLineEditableText::SetRevertTextOnEscape(pSVar3,(TAttribute<bool> *)local_1c8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1c0);
  if (pvStack_1b8 != (void *)0x0) {
    FMemory::Free(pvStack_1b8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1c0);
  if ((this->_padding_ == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pSVar3 = (SMultiLineEditableText *)this->_padding_;
  local_218[0] = UMultiLineEditableText::GetClearKeyboardFocusOnCommit
                           ((UMultiLineEditableText *)this);
  local_218[1] = true;
  local_200 = 0;
  local_210.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_208.Data = (FScriptContainerElement *)0x0;
  SMultiLineEditableText::SetClearKeyboardFocusOnCommit(pSVar3,(TAttribute<bool> *)local_218);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_210,(FWriteAccessScope *)&local_c8);
  if (((int)local_200 != 0) && (FStack_208.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_208.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_208,0,0,0x10);
    local_200 = local_200 & 0xffffffff00000000;
  }
  if (local_c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
  }
  if (FStack_208.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_208.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_210.AccessDetector);
  if ((this->_padding_ == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  UTextLayoutWidget::SynchronizeTextLayoutProperties<SMultiLineEditableText>
            ((UTextLayoutWidget *)this,(SMultiLineEditableText *)this->_padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_98);
  if ((void *)local_98._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_98._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_98);
  if ((ITextData *)local_b0._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_b0._0_8_ + 0x10))();
  }
  return;
}

// execGetCanDisplayResolvedText @ 14d11dc50

void __cdecl
UNamingTokensEditableText::execGetCanDisplayResolvedText
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x35].field_0xc;
  return;
}

// execGetDisplayBorderImage @ 14d11dc80

void __cdecl
UNamingTokensEditableText::execGetDisplayBorderImage(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x22].field_0x4;
  return;
}

// execGetDisplayErrorMessage @ 14d11dcb0

void __cdecl
UNamingTokensEditableText::execGetDisplayErrorMessage
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x22].field_0x3;
  return;
}

// execGetDisplayTokenIcon @ 14d11dce0

void __cdecl
UNamingTokensEditableText::execGetDisplayTokenIcon(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x22].field_0x2;
  return;
}

// execGetResolvedText @ 14d11dd10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UNamingTokensEditableText::execGetResolvedText(UObject *param_1,FFrame *param_2,void *param_3)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  FText *pFVar5;
  undefined1 local_res8 [8];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)(param_1 + 0x36) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MyNamingTokensEditableText.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\NamingTokens\\Source\\NamingTokensUI\\Private\\NamingTokensEditableText.cpp"
                       ,0x12,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(longlong *)(param_1 + 0x36) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar5 = SNamingTokensEditableTextBox::GetResolvedText
                     (*(SNamingTokensEditableTextBox **)(param_1 + 0x36));
  pIVar1 = *(ITextData **)param_3;
  pIVar2 = (pFVar5->TextData).Reference;
  if (pIVar1 != pIVar2) {
    *(ITextData **)param_3 = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
    *(uint *)((longlong)param_3 + 8) = pFVar5->Flags;
    return;
  }
  *(uint *)((longlong)param_3 + 8) = pFVar5->Flags;
  return;
}

// execGetTokenizedText @ 14d11de10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UNamingTokensEditableText::execGetTokenizedText(UObject *param_1,FFrame *param_2,void *param_3)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  FText *pFVar5;
  undefined1 local_res8 [8];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)(param_1 + 0x36) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MyNamingTokensEditableText.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\NamingTokens\\Source\\NamingTokensUI\\Private\\NamingTokensEditableText.cpp"
                       ,0x18,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(longlong *)(param_1 + 0x36) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar5 = SNamingTokensEditableTextBox::GetTokenizedText
                     (*(SNamingTokensEditableTextBox **)(param_1 + 0x36));
  pIVar1 = *(ITextData **)param_3;
  pIVar2 = (pFVar5->TextData).Reference;
  if (pIVar1 != pIVar2) {
    *(ITextData **)param_3 = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
    *(uint *)((longlong)param_3 + 8) = pFVar5->Flags;
    return;
  }
  *(uint *)((longlong)param_3 + 8) = pFVar5->Flags;
  return;
}

// execSetBackgroundColor @ 14d11df10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UNamingTokensEditableText::execSetBackgroundColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar uVar17;
  uchar uVar18;
  uchar uVar19;
  bool bVar20;
  uchar *puVar21;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18;
  
  local_18 = 0;
  local_28 = ___xmm_3f8000003f800000000000003f800000;
  uStack_20 = _UNK_15090c6d8;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  puVar21 = (uchar *)&local_28;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar21 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)(param_1 + 0x36);
  uVar5 = puVar21[1];
  uVar6 = puVar21[2];
  uVar7 = puVar21[3];
  uVar8 = puVar21[4];
  uVar9 = puVar21[5];
  uVar10 = puVar21[6];
  uVar11 = puVar21[7];
  uVar12 = puVar21[8];
  uVar13 = puVar21[9];
  uVar14 = puVar21[10];
  uVar15 = puVar21[0xb];
  uVar16 = puVar21[0xc];
  uVar17 = puVar21[0xd];
  uVar18 = puVar21[0xe];
  uVar19 = puVar21[0xf];
  param_1[0x34].field_0x20 = puVar21[0];
  param_1[0x34].field_0x21 = uVar5;
  param_1[0x34].field_0x22 = uVar6;
  param_1[0x34].field_0x23 = uVar7;
  param_1[0x34].field_0x24 = uVar8;
  param_1[0x34].field_0x25 = uVar9;
  param_1[0x34].field_0x26 = uVar10;
  param_1[0x34].field_0x27 = uVar11;
  param_1[0x35].field_0x0 = uVar12;
  param_1[0x35].field_0x1 = uVar13;
  param_1[0x35].field_0x2 = uVar14;
  param_1[0x35].field_0x3 = uVar15;
  param_1[0x35].field_0x4 = uVar16;
  param_1[0x35].field_0x5 = uVar17;
  param_1[0x35].field_0x6 = uVar18;
  param_1[0x35].field_0x7 = uVar19;
  uVar5 = puVar21[0x11];
  uVar6 = puVar21[0x12];
  uVar7 = puVar21[0x13];
  param_1[0x35].field_0x8 = puVar21[0x10];
  param_1[0x35].field_0x9 = uVar5;
  param_1[0x35].field_0xa = uVar6;
  param_1[0x35].field_0xb = uVar7;
  if ((lVar2 != 0) && (lVar2 = *(longlong *)&param_1[0x36].field_0x10, lVar2 != 0)) {
    uVar4 = *(undefined8 *)(puVar21 + 8);
    *(undefined8 *)(lVar2 + 0x5d4) = *(undefined8 *)puVar21;
    *(undefined8 *)(lVar2 + 0x5dc) = uVar4;
    *(undefined4 *)(lVar2 + 0x5e4) = *(undefined4 *)(puVar21 + 0x10);
    if (*(longlong *)(param_1 + 0x36) == 0) {
      bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar20) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    SNamingTokensEditableTextBox::SetNormalStyle
              (*(SNamingTokensEditableTextBox **)(param_1 + 0x36),
               *(FEditableTextBoxStyle **)&param_1[0x36].field_0x10);
  }
  return;
}

// execSetCanDisplayResolvedText @ 14d11e030

void __cdecl
UNamingTokensEditableText::execSetCanDisplayResolvedText
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x35].field_0xc = local_res8[0] != 0;
  return;
}

// execSetContexts @ 14d11e0c0

void __cdecl
UNamingTokensEditableText::execSetContexts(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<UObject_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>::
  operator=<TSizedDefaultAllocator<32>,TObjectPtr<UObject>_>
            ((TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *)&param_1[0x36].field_0x20,
             pTVar2);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execSetDisplayBorderImage @ 14d11e180

void __cdecl
UNamingTokensEditableText::execSetDisplayBorderImage(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x22].field_0x4 = local_res8[0] != 0;
  return;
}

// execSetDisplayErrorMessage @ 14d11e210

void __cdecl
UNamingTokensEditableText::execSetDisplayErrorMessage
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x22].field_0x3 = local_res8[0] != 0;
  return;
}

// execSetDisplayTokenIcon @ 14d11e2a0

void __cdecl
UNamingTokensEditableText::execSetDisplayTokenIcon(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x22].field_0x2 = local_res8[0] != 0;
  return;
}

// execSetWidgetArgumentStyle @ 14d11e330

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UNamingTokensEditableText::execSetWidgetArgumentStyle
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FTextBlockStyle *pFVar2;
  FTextBlockStyle local_2e8;
  
  FTextBlockStyle::FTextBlockStyle(&local_2e8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2e8);
  }
  pFVar2 = &local_2e8;
  if ((FTextBlockStyle *)param_2->MostRecentPropertyAddress != (FTextBlockStyle *)0x0) {
    pFVar2 = (FTextBlockStyle *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FTextBlockStyle::operator=((FTextBlockStyle *)&param_1[0x22].field_0x10,pFVar2);
  if (*(SNamingTokensEditableTextBox **)(param_1 + 0x36) != (SNamingTokensEditableTextBox *)0x0) {
    SNamingTokensEditableTextBox::SetArgumentStyle
              (*(SNamingTokensEditableTextBox **)(param_1 + 0x36),pFVar2);
  }
  FTextBlockStyle::~FTextBlockStyle(&local_2e8);
  return;
}

