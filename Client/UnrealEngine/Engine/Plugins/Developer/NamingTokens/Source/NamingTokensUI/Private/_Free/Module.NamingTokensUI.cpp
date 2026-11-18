// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NamingTokensUI
// Functions: 160

// `dynamic_initializer_for_'ModuleRegistrantNamingTokensUI'' @ 1413c7700

void __cdecl _dynamic_initializer_for__ModuleRegistrantNamingTokensUI__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "NamingTokensUI";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"NamingTokensUI",0xe);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FNamingTokensUIModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_NamingTokens_Source_NamingTokensUI_Public_NamingTokensEditableText_h__Script_NamingTokensUI_517249005'' @ 1413c7750

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_NamingTokens_Source_NamingTokensUI_Public_NamingTokensEditableText_h__Script_NamingTokensUI_517249005__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NamingTokensUI",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_NamingTokens_Source_NamingTokensUI_Public_NamingTokensEditableText_h__Script_NamingTokensUI_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_NamingTokensUI'' @ 1413c7790

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_NamingTokensUI__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xcfc11ff1;
  local_res8[0].DeclarationsHash = 0x5ac94b51;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_NamingTokensUI,L"/Script/NamingTokensUI",
             &Z_Registration_Info_UPackage__Script_NamingTokensUI,local_res8);
  return;
}

// Z_Construct_UDelegateFunction_UNamingTokensEditableText_OnPreEvaluateNamingTokens__DelegateSignature @ 14d0e80a0

UFunction * __cdecl
Z_Construct_UDelegateFunction_UNamingTokensEditableText_OnPreEvaluateNamingTokens__DelegateSignature
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_UNamingTokensEditableText_OnPreEvaluateNamingTokens__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UPackage__Script_NamingTokensUI @ 14d0e80e0

UPackage * __cdecl Z_Construct_UPackage__Script_NamingTokensUI(void)

{
  if (Z_Registration_Info_UPackage__Script_NamingTokensUI.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_NamingTokensUI.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_NamingTokensUI.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14d0e8140

void * __thiscall
FNamingTokensUIModule::_scalar_deleting_destructor_(FNamingTokensUIModule *this,uint param_1)

{
  *this = (FNamingTokensUIModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UNamingTokensEditableText @ 14d0e8240

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNamingTokensEditableText(void)

{
  if (Z_Registration_Info_UClass_UNamingTokensEditableText.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNamingTokensEditableText.OuterSingleton,
               &Z_Construct_UClass_UNamingTokensEditableText_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNamingTokensEditableText.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 14d0e8280

void __cdecl
Z_Construct_UFunction_UNamingTokensEditableText_GetCanDisplayResolvedText_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UNamingTokensEditableText_GetCanDisplayResolvedText @ 14d0e8290

UFunction * __cdecl Z_Construct_UFunction_UNamingTokensEditableText_GetCanDisplayResolvedText(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNamingTokensEditableText_GetCanDisplayResolvedText_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14d0e82d0

void __cdecl
Z_Construct_UFunction_UNamingTokensEditableText_GetDisplayBorderImage_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UNamingTokensEditableText_GetDisplayBorderImage @ 14d0e82e0

UFunction * __cdecl Z_Construct_UFunction_UNamingTokensEditableText_GetDisplayBorderImage(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNamingTokensEditableText_GetDisplayBorderImage_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14d0e8320

void __cdecl
Z_Construct_UFunction_UNamingTokensEditableText_GetDisplayErrorMessage_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UNamingTokensEditableText_GetDisplayErrorMessage @ 14d0e8330

UFunction * __cdecl Z_Construct_UFunction_UNamingTokensEditableText_GetDisplayErrorMessage(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNamingTokensEditableText_GetDisplayErrorMessage_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14d0e8370

void __cdecl
Z_Construct_UFunction_UNamingTokensEditableText_GetDisplayTokenIcon_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UNamingTokensEditableText_GetDisplayTokenIcon @ 14d0e8380

UFunction * __cdecl Z_Construct_UFunction_UNamingTokensEditableText_GetDisplayTokenIcon(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNamingTokensEditableText_GetDisplayTokenIcon_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNamingTokensEditableText_GetResolvedText @ 14d0e83c0

UFunction * __cdecl Z_Construct_UFunction_UNamingTokensEditableText_GetResolvedText(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNamingTokensEditableText_GetResolvedText_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNamingTokensEditableText_GetTokenizedText @ 14d0e8400

UFunction * __cdecl Z_Construct_UFunction_UNamingTokensEditableText_GetTokenizedText(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNamingTokensEditableText_GetTokenizedText_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNamingTokensEditableText_SetBackgroundColor @ 14d0e8440

UFunction * __cdecl Z_Construct_UFunction_UNamingTokensEditableText_SetBackgroundColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNamingTokensEditableText_SetBackgroundColor_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bValue_SetBit @ 14d0e8480

void __cdecl
Z_Construct_UFunction_UNamingTokensEditableText_SetCanDisplayResolvedText_Statics::
NewProp_bValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UNamingTokensEditableText_SetCanDisplayResolvedText @ 14d0e8490

UFunction * __cdecl Z_Construct_UFunction_UNamingTokensEditableText_SetCanDisplayResolvedText(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNamingTokensEditableText_SetCanDisplayResolvedText_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNamingTokensEditableText_SetContexts @ 14d0e84d0

UFunction * __cdecl Z_Construct_UFunction_UNamingTokensEditableText_SetContexts(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNamingTokensEditableText_SetContexts_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bValue_SetBit @ 14d0e8510

void __cdecl
Z_Construct_UFunction_UNamingTokensEditableText_SetDisplayBorderImage_Statics::NewProp_bValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UNamingTokensEditableText_SetDisplayBorderImage @ 14d0e8520

UFunction * __cdecl Z_Construct_UFunction_UNamingTokensEditableText_SetDisplayBorderImage(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNamingTokensEditableText_SetDisplayBorderImage_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bValue_SetBit @ 14d0e8560

void __cdecl
Z_Construct_UFunction_UNamingTokensEditableText_SetDisplayErrorMessage_Statics::
NewProp_bValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UNamingTokensEditableText_SetDisplayErrorMessage @ 14d0e8570

UFunction * __cdecl Z_Construct_UFunction_UNamingTokensEditableText_SetDisplayErrorMessage(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNamingTokensEditableText_SetDisplayErrorMessage_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bValue_SetBit @ 14d0e85b0

void __cdecl
Z_Construct_UFunction_UNamingTokensEditableText_SetDisplayTokenIcon_Statics::NewProp_bValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UNamingTokensEditableText_SetDisplayTokenIcon @ 14d0e85c0

UFunction * __cdecl Z_Construct_UFunction_UNamingTokensEditableText_SetDisplayTokenIcon(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNamingTokensEditableText_SetDisplayTokenIcon_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNamingTokensEditableText_SetWidgetArgumentStyle @ 14d0e8600

UFunction * __cdecl Z_Construct_UFunction_UNamingTokensEditableText_SetWidgetArgumentStyle(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNamingTokensEditableText_SetWidgetArgumentStyle_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnableSuggestionDropdown_SetBit @ 14d0e8640

void __cdecl
Z_Construct_UClass_UNamingTokensEditableText_Statics::NewProp_bEnableSuggestionDropdown_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x550) = 1;
  return;
}

// NewProp_bIsMultiline_SetBit @ 14d0e8650

void __cdecl
Z_Construct_UClass_UNamingTokensEditableText_Statics::NewProp_bIsMultiline_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x551) = 1;
  return;
}

// NewProp_bDisplayTokenIcon_SetBit @ 14d0e8660

void __cdecl
Z_Construct_UClass_UNamingTokensEditableText_Statics::NewProp_bDisplayTokenIcon_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x552) = 1;
  return;
}

// NewProp_bDisplayErrorMessage_SetBit @ 14d0e8670

void __cdecl
Z_Construct_UClass_UNamingTokensEditableText_Statics::NewProp_bDisplayErrorMessage_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x553) = 1;
  return;
}

// NewProp_bDisplayBorderImage_SetBit @ 14d0e8680

void __cdecl
Z_Construct_UClass_UNamingTokensEditableText_Statics::NewProp_bDisplayBorderImage_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x554) = 1;
  return;
}

// NewProp_bCanDisplayResolvedText_SetBit @ 14d0e8690

void __cdecl
Z_Construct_UClass_UNamingTokensEditableText_Statics::NewProp_bCanDisplayResolvedText_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x854) = 1;
  return;
}

// TFunction<EVisibility___cdecl(void)><`SNamingTokensEditableTextBox::Construct'::__l2::<lambda_1>_> @ 14d0e88e0

/* WARNING: Enum "Type": Some values do not have unique names */

TFunction<EVisibility___cdecl(void)> * __thiscall
TFunction<EVisibility___cdecl(void)>::
TFunction<EVisibility___cdecl(void)><_SNamingTokensEditableTextBox::Construct_::__l2::<lambda_1>_>
          (TFunction<EVisibility___cdecl(void)> *this,<lambda_1> *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)&this->field_0x10 =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`SNamingTokensEditableTextBox::Construct'::`2'::<lambda_1>,0,0>::
        _vftable_;
  *(SNamingTokensEditableTextBox **)&this->field_0x18 = param_1->__this;
  if (&this->field_0x18 != (undefined1 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<`SNamingTokensEditableTextBox::Construct'::__l2::<lambda_1>,EVisibility>
         ::Call;
  }
  return this;
}

// TFunction<EVisibility___cdecl(void)><`SNamingTokensEditableTextBox::Construct'::__l2::<lambda_2>_> @ 14d0e8920

/* WARNING: Enum "Type": Some values do not have unique names */

TFunction<EVisibility___cdecl(void)> * __thiscall
TFunction<EVisibility___cdecl(void)>::
TFunction<EVisibility___cdecl(void)><_SNamingTokensEditableTextBox::Construct_::__l2::<lambda_2>_>
          (TFunction<EVisibility___cdecl(void)> *this,<lambda_2> *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)&this->field_0x10 =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`SNamingTokensEditableTextBox::Construct'::`2'::<lambda_2>,0,0>::
        _vftable_;
  *(SNamingTokensEditableTextBox **)&this->field_0x18 = param_1->__this;
  if (&this->field_0x18 != (undefined1 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<`SNamingTokensEditableTextBox::Construct'::__l2::<lambda_2>,EVisibility>
         ::Call;
  }
  return this;
}

// operator<TObjectPtr<UObject>_>_TArray<UObject_*,TSizedDefaultAllocator<32>_>_const_& @ 14d0e8ac0

TArray<UObject_*,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>::
operator<TObjectPtr<UObject>_>_TArray<UObject_*,TSizedDefaultAllocator<32>_>_const__
          (TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *this)

{
  return (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)this;
}

// ConstructItems<TSharedPtr<FNamingTokenDataTreeItem,1>,TSharedPtr<FNamingTokenDataTreeItem,1>,int> @ 14d0e9640

void __cdecl
ConstructItems<TSharedPtr<FNamingTokenDataTreeItem,1>,TSharedPtr<FNamingTokenDataTreeItem,1>,int>
          (void *param_1,TSharedPtr<FNamingTokenDataTreeItem,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FNamingTokenDataTreeItem **)(lVar2 + (longlong)param_2) = param_2->Object;
      pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)param_2) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// CreateLambda<`SNamingTokensEditableTextBox::OpenOrCloseSuggestionDropdownNextTick'::__l5::<lambda_1>_> @ 14d0e9800

/* WARNING: Enum "Type": Some values do not have unique names */

TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>::
CreateLambda<_SNamingTokensEditableTextBox::OpenOrCloseSuggestionDropdownNextTick_::__l5::<lambda_1>_>
          (TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
           *__return_storage_ptr__,<lambda_1> *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_28);
  local_10 = puVar1;
  puVar2 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &TBaseFunctorDelegateInstance<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,`SNamingTokensEditableTextBox::OpenOrCloseSuggestionDropdownNextTick'::`5'::<lambda_1>_>
               ::_vftable_;
    puVar2[3] = param_1->__this;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return __return_storage_ptr__;
}

// DestructItems<TSharedPtr<FNamingTokenDataTreeItem,1>,int> @ 14d0e9c40

void __cdecl
DestructItems<TSharedPtr<FNamingTokenDataTreeItem,1>,int>
          (TSharedPtr<FNamingTokenDataTreeItem,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// FindByPredicate<`SNamingTokensEditableTextBox::ValidateTokenArgs'::__l13::<lambda_1>_> @ 14d0ea6d0

FString * __thiscall
TArrayView<FString_const_,int>::
FindByPredicate<_SNamingTokensEditableTextBox::ValidateTokenArgs_::__l13::<lambda_1>_>
          (TArrayView<FString_const_,int> *this,<lambda_1> *param_1)

{
  bool bVar1;
  FString *pFVar2;
  FString *pFVar3;
  
  pFVar2 = this->DataPtr;
  pFVar3 = pFVar2 + this->ArrayNum;
  while( true ) {
    if (pFVar2 == pFVar3) {
      `SNamingTokensEditableTextBox::ValidateTokenArgs'::__l13::<lambda_1>::~<lambda_1>(param_1);
      return (FString *)0x0;
    }
    bVar1 = `SNamingTokensEditableTextBox::ValidateTokenArgs'::__l13::<lambda_1>::operator()
                      (param_1,pFVar2);
    if (bVar1) break;
    pFVar2 = pFVar2 + 1;
  }
  `SNamingTokensEditableTextBox::ValidateTokenArgs'::__l13::<lambda_1>::~<lambda_1>(param_1);
  return pFVar2;
}

// GetTypeHash<FNamingTokenDataTreeItem_const_,1> @ 14d0eaa20

uint __cdecl
GetTypeHash<FNamingTokenDataTreeItem_const_,1>
          (TSharedPtr<FNamingTokenDataTreeItem_const_,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// InternalConstructor<UNamingTokensEditableText> @ 14d0eaa50

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UNamingTokensEditableText>(FObjectInitializer *param_1)

{
  UMultiLineEditableText *this;
  UMultiLineEditableText *pUVar1;
  FObjectInitializer *pFVar2;
  FTextBlockStyle *pFVar3;
  uint local_18;
  
  this = (UMultiLineEditableText *)param_1->Obj;
  if (this != (UMultiLineEditableText *)0x0) {
    pFVar2 = FObjectInitializer::Get();
    UMultiLineEditableText::UMultiLineEditableText(this,pFVar2);
    *(undefined4 *)&this[1].field_0x10 = 1;
    this[1].field_0x14 = 0;
    *(undefined ***)this = &UNamingTokensEditableText::_vftable__for__UVisual__;
    *(undefined8 *)&this->field_0x538 = 0;
    *(undefined ***)&this->field_0x28 =
         &UNamingTokensEditableText::_vftable__for__INotifyFieldValueChanged__;
    *(undefined8 *)(this + 1) = 0;
    *(undefined2 *)&this[1].field_0x8 = 1;
    this[1].field_0xa = 0;
    FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)&this[1].field_0x20);
    this[1].WidgetStyle.HighlightShape.Margin.Right = 1.0;
    this[1].WidgetStyle.HighlightShape.Margin.Bottom = 0.0;
    *(undefined4 *)&this[1].WidgetStyle.HighlightShape.ResourceObject.field0_0x0 = 0x3f800000;
    *(undefined4 *)((longlong)&this[1].WidgetStyle.HighlightShape.ResourceObject.field0_0x0 + 4) =
         0x3f800000;
    *(undefined1 *)&this[1].WidgetStyle.HighlightShape.OutlineSettings.CornerRadii.field0_0x0 = 0;
    *(undefined1 *)
     ((longlong)&this[1].WidgetStyle.HighlightShape.OutlineSettings.CornerRadii.field0_0x0 + 4) = 1;
    this[1].WidgetStyle.HighlightShape.OutlineSettings.CornerRadii.field0_0x0._s_0.Y = 0.0;
    this[1].WidgetStyle.HighlightShape.OutlineSettings.CornerRadii.field0_0x0._s_0.Z = 0.0;
    this[1].WidgetStyle.HighlightShape.OutlineSettings.CornerRadii.field0_0x0._s_0.W = 0.0;
    *(undefined8 *)
     &this[1].WidgetStyle.HighlightShape.OutlineSettings.Color.SpecifiedColor.field0_0x0 = 0;
    *(undefined8 *)
     ((longlong)&this[1].WidgetStyle.HighlightShape.OutlineSettings.Color.SpecifiedColor.field0_0x0
     + 8) = 0;
    *(undefined8 *)&this[1].WidgetStyle.HighlightShape.OutlineSettings.Color.ColorUseRule = 0;
    pUVar1 = this + 1;
    (pUVar1->WidgetStyle).HighlightShape.OutlineSettings.RoundingType = '\0';
    (pUVar1->WidgetStyle).HighlightShape.OutlineSettings.bUseBrushTransparency = false;
    *(undefined6 *)&(pUVar1->WidgetStyle).HighlightShape.OutlineSettings.field_0x3a = 0;
    this[1].WidgetStyle.HighlightShape.UVRegion.Min.field0_0x0 = (TVector2<float>_u_0)0x0;
    this[1].WidgetStyle.HighlightShape.UVRegion.Max.field0_0x0 = (TVector2<float>_u_0)0x0;
    pFVar3 = FNamingTokensStringSyntaxHighlighterMarshaller::GetDefaultArgumentStyle();
    FTextBlockStyle::operator=((FTextBlockStyle *)&this[1].field_0x20,pFVar3);
    local_18 = local_18 & 0xffffff00;
    this[1].WidgetStyle.HighlightShape.Margin.Right = 0.0;
    this[1].WidgetStyle.HighlightShape.Margin.Bottom = 0.0;
    this[1].WidgetStyle.HighlightShape.ResourceObject.field0_0x0.DebugPtr = (UObject *)0x0;
    *(uint *)&this[1].WidgetStyle.HighlightShape.OutlineSettings.CornerRadii.field0_0x0 = local_18;
  }
  return;
}

// InternalVTableHelperCtorCaller<UNamingTokensEditableText> @ 14d0eab80

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNamingTokensEditableText>(FVTableHelper *param_1)

{
  UMultiLineEditableText *pUVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UMultiLineEditableText *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UNamingTokensEditableText::GetPrivateStaticClass();
  this = (UMultiLineEditableText *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMultiLineEditableText *)0x0) {
    UMultiLineEditableText::UMultiLineEditableText(this,param_1);
    *(undefined4 *)&this[1].field_0x10 = 1;
    *(undefined ***)this = &UNamingTokensEditableText::_vftable__for__UVisual__;
    *(undefined8 *)&this->field_0x538 = 0;
    *(undefined ***)&this->field_0x28 =
         &UNamingTokensEditableText::_vftable__for__INotifyFieldValueChanged__;
    *(undefined8 *)(this + 1) = 0;
    *(undefined2 *)&this[1].field_0x8 = 1;
    this[1].field_0xa = 0;
    this[1].field_0x14 = 0;
    FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)&this[1].field_0x20);
    this[1].WidgetStyle.HighlightShape.Margin.Right = 1.0;
    this[1].WidgetStyle.HighlightShape.Margin.Bottom = 0.0;
    *(undefined4 *)&this[1].WidgetStyle.HighlightShape.ResourceObject.field0_0x0 = 0x3f800000;
    *(undefined4 *)((longlong)&this[1].WidgetStyle.HighlightShape.ResourceObject.field0_0x0 + 4) =
         0x3f800000;
    *(undefined1 *)&this[1].WidgetStyle.HighlightShape.OutlineSettings.CornerRadii.field0_0x0 = 0;
    *(undefined1 *)
     ((longlong)&this[1].WidgetStyle.HighlightShape.OutlineSettings.CornerRadii.field0_0x0 + 4) = 1;
    this[1].WidgetStyle.HighlightShape.OutlineSettings.CornerRadii.field0_0x0._s_0.Y = 0.0;
    this[1].WidgetStyle.HighlightShape.OutlineSettings.CornerRadii.field0_0x0._s_0.Z = 0.0;
    this[1].WidgetStyle.HighlightShape.OutlineSettings.CornerRadii.field0_0x0._s_0.W = 0.0;
    *(undefined8 *)
     &this[1].WidgetStyle.HighlightShape.OutlineSettings.Color.SpecifiedColor.field0_0x0 = 0;
    *(undefined8 *)
     ((longlong)&this[1].WidgetStyle.HighlightShape.OutlineSettings.Color.SpecifiedColor.field0_0x0
     + 8) = 0;
    *(undefined8 *)&this[1].WidgetStyle.HighlightShape.OutlineSettings.Color.ColorUseRule = 0;
    pUVar1 = this + 1;
    (pUVar1->WidgetStyle).HighlightShape.OutlineSettings.RoundingType = '\0';
    (pUVar1->WidgetStyle).HighlightShape.OutlineSettings.bUseBrushTransparency = false;
    *(undefined6 *)&(pUVar1->WidgetStyle).HighlightShape.OutlineSettings.field_0x3a = 0;
    this[1].WidgetStyle.HighlightShape.UVRegion.Min.field0_0x0 = (TVector2<float>_u_0)0x0;
    this[1].WidgetStyle.HighlightShape.UVRegion.Max.field0_0x0 = (TVector2<float>_u_0)0x0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// MakeRequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>,int_&,int_&> @ 14d0eace0

T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>_&&,int_&,int_&>
* __cdecl RequiredArgs::
          MakeRequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>,int_&,int_&>
                    (T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>_&&,int_&,int_&>
                     *__return_storage_ptr__,TSharedPtr<ITableRow,1> *param_1,
                    TSharedRef<SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1> *param_2,
                    int *param_3,int *param_4)

{
  __return_storage_ptr__->Arg3 = param_4;
  __return_storage_ptr__->Arg0 = param_1;
  __return_storage_ptr__->Arg1 = param_2;
  __return_storage_ptr__->Arg2 = param_3;
  return __return_storage_ptr__;
}

// MakeRequiredArgs<TSharedRef<STreeView<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>_&> @ 14d0ead00

T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>_&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<STreeView<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>_&>
          (TSharedRef<STreeView<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1> *param_1)

{
  STreeView<TSharedPtr<FNamingTokenDataTreeItem,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>_&>)param_1
  ;
}

// MakeRequiredArgs<TSharedRef<SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>_> @ 14d0ead10

T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>_&&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>_>
          (TSharedRef<SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1> *param_1)

{
  SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>_&&>)
         param_1;
}

// MakeRequiredArgs<TSharedRef<STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>_> @ 14d0ead20

T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>_&&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>_>
          (TSharedRef<STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1> *param_1)

{
  STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>_&&>)
         param_1;
}

// MakeRequiredArgs<TSharedRef<SNamingTokenDataTreeViewRow,1>_> @ 14d0ead30

T1RequiredArgs<TSharedRef<SNamingTokenDataTreeViewRow,1>_&&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<SNamingTokenDataTreeViewRow,1>_>
          (TSharedRef<SNamingTokenDataTreeViewRow,1> *param_1)

{
  SNamingTokenDataTreeViewRow *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<SNamingTokenDataTreeViewRow,1>_&&>)param_1;
}

// MakeRequiredArgs<TSharedRef<SNamingTokenDataTreeViewWidget,1>_> @ 14d0ead40

T1RequiredArgs<TSharedRef<SNamingTokenDataTreeViewWidget,1>_&&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<SNamingTokenDataTreeViewWidget,1>_>
          (TSharedRef<SNamingTokenDataTreeViewWidget,1> *param_1)

{
  SNamingTokenDataTreeViewWidget *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<SNamingTokenDataTreeViewWidget,1>_&&>)param_1;
}

// MakeShared<SNamingTokensEditableTextBox::FCursorTokenData,1> @ 14d0ead50

TSharedRef<SNamingTokensEditableTextBox::FCursorTokenData,1> * __cdecl
MakeShared<SNamingTokensEditableTextBox::FCursorTokenData,1>
          (TSharedRef<SNamingTokensEditableTextBox::FCursorTokenData,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<SNamingTokensEditableTextBox::FCursorTokenData,1> *pTVar4;
  
  pTVar3 = operator_new(0x38);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FCursorTokenData *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFCursorTokenData_SNamingTokensEditableTextBox___00_SharedPointerInternals__6B_
    ;
    pTVar3[2]._padding_ = 0;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[3]._padding_ = 0;
    __return_storage_ptr__->Object = (FCursorTokenData *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((FCursorTokenData *)(pTVar3 + 1) == (FCursorTokenData *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<SNamingTokensEditableTextBox::FCursorTokenData,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeTDecl<STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>_&&>_> @ 14d0eae00

TSlateDecl<STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>_&&>_>
* __cdecl MakeTDecl<STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>_&&>_>
                    (TSlateDecl<STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>_&&>
                    *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>_&&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_48;
  FMemScope local_40;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object =
       (STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_> *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x408);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__STableRow_V__TSharedPtr_UFNamingTokenDataTreeItem___00_____00_SharedPointerInternals__6B_
    ;
    STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>::
    STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>
              ((STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_> *)(pTVar3 + 1));
  }
  TSharedRef<STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>::
  TSharedRef<STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>
            ((TSharedRef<STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1> *)(local_38 + 0x10),
             (STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_> *)(pTVar3 + 1),pTVar3);
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>_&&>_>
       *)local_38) {
    (__return_storage_ptr__->_Widget).Object =
         (STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_> *)local_38._16_8_;
    local_38._0_8_ = (STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_38 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_38._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  if ((__return_storage_ptr__->_Widget).Object ==
      (STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>_&&>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x3f8);
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>_&>_> @ 14d0eafb0

TSlateDecl<STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>_&>_>
* __cdecl MakeTDecl<STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>_&>_>
                    (TSlateDecl<STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>_&>
                    *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>_&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_48;
  FMemScope local_40;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object =
       (STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_> *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x408);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__STableRow_V__TSharedPtr_UFNamingTokenDataTreeItem___00_____00_SharedPointerInternals__6B_
    ;
    STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>::
    STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>
              ((STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_> *)(pTVar3 + 1));
  }
  TSharedRef<STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>::
  TSharedRef<STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>
            ((TSharedRef<STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1> *)(local_38 + 0x10),
             (STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_> *)(pTVar3 + 1),pTVar3);
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>_&>_>
       *)local_38) {
    (__return_storage_ptr__->_Widget).Object =
         (STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_> *)local_38._16_8_;
    local_38._0_8_ = (STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_38 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_38._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  if ((__return_storage_ptr__->_Widget).Object ==
      (STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>_&>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x3f8);
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>_&&>_> @ 14d0eb160

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>_&&>_>
* __cdecl MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>_&&>_>
                    (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>_&&>
                    *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>_&&>_>
  ::
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SNamingTokenDataTreeViewRow,1>_&&>_> @ 14d0eb210

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SNamingTokenDataTreeViewRow,1>_&&>_>
* __cdecl MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SNamingTokenDataTreeViewRow,1>_&&>_>
                    (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SNamingTokenDataTreeViewRow,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<SNamingTokenDataTreeViewRow,1>_&&> *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SNamingTokenDataTreeViewRow,1>_&&>_>
  ::
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SNamingTokenDataTreeViewRow,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>_&&,int_&,int_&>_> @ 14d0eb2c0

TSlateDecl<SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>_&&,int_&,int_&>_>
* __cdecl MakeTDecl<SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>_&&,int_&,int_&>_>
                    (TSlateDecl<SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>_&&,int_&,int_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>_&&,int_&,int_&>
                    *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>_&&,int_&,int_&>_>
  ::
  TSlateDecl<SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>_&&,int_&,int_&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SNamingTokenDataTreeView,RequiredArgs::T1RequiredArgs<TSharedRef<SNamingTokenDataTreeViewWidget,1>_&&>_> @ 14d0eb370

TSlateDecl<SNamingTokenDataTreeView,RequiredArgs::T1RequiredArgs<TSharedRef<SNamingTokenDataTreeViewWidget,1>_&&>_>
* __cdecl MakeTDecl<SNamingTokenDataTreeView,RequiredArgs::T1RequiredArgs<TSharedRef<SNamingTokenDataTreeViewWidget,1>_&&>_>
                    (TSlateDecl<SNamingTokenDataTreeView,RequiredArgs::T1RequiredArgs<TSharedRef<SNamingTokenDataTreeViewWidget,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<SNamingTokenDataTreeViewWidget,1>_&&> *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SNamingTokenDataTreeView,RequiredArgs::T1RequiredArgs<TSharedRef<SNamingTokenDataTreeViewWidget,1>_&&>_>
  ::
  TSlateDecl<SNamingTokenDataTreeView,RequiredArgs::T1RequiredArgs<TSharedRef<SNamingTokenDataTreeViewWidget,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SNamingTokenDataTreeViewRow,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_> @ 14d0eb420

TSlateDecl<SNamingTokenDataTreeViewRow,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
* __cdecl MakeTDecl<SNamingTokenDataTreeViewRow,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                    (TSlateDecl<SNamingTokenDataTreeViewRow,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<SNamingTokenDataTreeViewRow,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FLLMScope local_res8 [2];
  FName local_58;
  FMemScope local_50;
  undefined1 local_48 [24];
  TReferenceControllerBase<1> *pTStack_30;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_58 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_50,&local_58,true);
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (SNamingTokenDataTreeViewRow *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x478);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSNamingTokenDataTreeViewRow___00_SharedPointerInternals__6B_
    ;
    memset(pTVar3 + 1,0,0x468);
    STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>::
    STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>
              ((STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_> *)(pTVar3 + 1));
    pTVar3[0x40].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x40].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x41]._padding_ = 0;
    pTVar3[0x41].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x41].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x42]._padding_ = 0;
    pTVar3[0x43].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x43].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[0x44]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar3[0x44]._padding_ + 4) = 0x80;
    pTVar3[0x44].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar3[0x44].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x45].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x45].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[0x46]._padding_ = 0;
    pTVar3[1]._padding_ = (longlong)&SNamingTokenDataTreeViewRow::_vftable__for__ITableRow__;
    *(undefined ***)&pTVar3[1].SharedReferenceCount =
         &SNamingTokenDataTreeViewRow::_vftable__for__SBorder__;
    pTVar3[0x46].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x46].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x47]._padding_ = 0;
    pTVar5 = pTVar3;
  }
  TSharedRef<SNamingTokenDataTreeViewRow,1>::TSharedRef<SNamingTokenDataTreeViewRow,1>
            ((TSharedRef<SNamingTokenDataTreeViewRow,1> *)(local_48 + 0x10),
             (SNamingTokenDataTreeViewRow *)(pTVar5 + 1),pTVar5);
  local_48._0_8_ = local_48._16_8_;
  local_48._8_8_ = pTStack_30;
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<SNamingTokenDataTreeViewRow,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
       *)local_48) {
    (__return_storage_ptr__->_Widget).Object = (SNamingTokenDataTreeViewRow *)local_48._16_8_;
    local_48._0_8_ = (SNamingTokenDataTreeViewRow *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_48 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  if (((__return_storage_ptr__->_Widget).Object == (SNamingTokenDataTreeViewRow *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSlateDecl<SNamingTokenDataTreeViewRow,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
              *)(*pcVar1)();
    return pTVar4;
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x468);
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SNamingTokenDataTreeViewWidget,RequiredArgs::T0RequiredArgs> @ 14d0eb650

TSlateDecl<SNamingTokenDataTreeViewWidget,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SNamingTokenDataTreeViewWidget,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SNamingTokenDataTreeViewWidget,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SNamingTokenDataTreeViewWidget,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SNamingTokenDataTreeViewWidget,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SNamingTokensEditableTextBox,RequiredArgs::T0RequiredArgs> @ 14d0eb700

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SNamingTokensEditableTextBox,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SNamingTokensEditableTextBox,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SNamingTokensEditableTextBox,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SNamingTokensEditableTextBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SNamingTokensEditableTextBox,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// Reverse<TSharedPtr<FNamingTokenDataTreeItem,1>_> @ 14d0ec4a0

void __cdecl
AlgoImpl::Reverse<TSharedPtr<FNamingTokenDataTreeItem,1>_>
          (TSharedPtr<FNamingTokenDataTreeItem,1> *param_1,int param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FNamingTokenDataTreeItem *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<FNamingTokenDataTreeItem,1> *pTVar4;
  longlong lVar5;
  
  lVar5 = (longlong)(param_2 / 2);
  if (0 < param_2 / 2) {
    pTVar4 = param_1 + (param_2 + -1);
    do {
      pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
      pFVar2 = param_1->Object;
      pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
      param_1->Object = pTVar4->Object;
      (param_1->SharedReferenceCount).ReferenceController = pTVar1;
      param_1 = param_1 + 1;
      pTVar4->Object = pFVar2;
      (pTVar4->SharedReferenceCount).ReferenceController = pTVar3;
      lVar5 = lVar5 + -1;
      pTVar4 = pTVar4 + -1;
    } while (lVar5 != 0);
  }
  return;
}

// ~TFunction_OwnedObject<`SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,0,0> @ 14d0ef350

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>::SListViewPinnedRowWidget::Construct_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Construct_SListViewPinnedRowWidget___SListView_V__TSharedPtr_UFNamingTokenDataTreeItem___00____QEAAXAEBUFArguments_34_V__TSharedPtr_VITableRow___00__V__TSharedRef_V__SListView_V__TSharedPtr_UFNamingTokenDataTreeItem___00_____00__HH_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`SNamingTokensEditableTextBox::Construct'::__l2::<lambda_1>,0,0> @ 14d0ef370

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SNamingTokensEditableTextBox::Construct'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_SNamingTokensEditableTextBox::Construct_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`SNamingTokensEditableTextBox::Construct'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`SNamingTokensEditableTextBox::Construct'::__l2::<lambda_2>,0,0> @ 14d0ef390

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SNamingTokensEditableTextBox::Construct'::__l2::<lambda_2>,0,0>::
~TFunction_OwnedObject<_SNamingTokensEditableTextBox::Construct_::__l2::<lambda_2>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`SNamingTokensEditableTextBox::Construct'::`2'::<lambda_2>,0,0>::
        _vftable_;
  return;
}

// operator[] @ 14d0f1330

FArguments * __thiscall
NamedSlotProperty<SMenuAnchor::FArguments>::operator[]
          (NamedSlotProperty<SMenuAnchor::FArguments> *this,TSharedRef<SWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TAlwaysValidWidget *pTVar2;
  SWidget *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pTVar2 = this->SlotContent;
  pSVar3 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (pTVar2->Widget).SharedReferenceCount.ReferenceController;
  (pTVar2->Widget).Object = pSVar3;
  (pTVar2->Widget).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return this->OwnerDeclaration;
}

// `vcall'{152,{flat}}'_}' @ 14d0f2e98

/* [thunk]: __cdecl STableRow<class TSharedPtr<struct FNamingTokenDataTreeItem,1>
   >::`vcall'{152,{flat}}' }' */

void __thiscall
STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>::_vcall__152__flat______
          (STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d0f2e9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x98))();
  return;
}

// `vcall'{504,{flat}}'_}' @ 14d0f2ea8

/* [thunk]: __cdecl SCompoundWidget::`vcall'{504,{flat}}' }' */

void __thiscall SCompoundWidget::_vcall__504__flat______(SCompoundWidget *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d0f2eab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x1f8))();
  return;
}

// `vcall'{584,{flat}}'_}' @ 14d0f2eb8

/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]: __cdecl SNamingTokensEditableTextBox::`vcall'{584,{flat}}' }' */

void __thiscall
SNamingTokensEditableTextBox::_vcall__584__flat______(SNamingTokensEditableTextBox *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d0f2ebb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x248))();
  return;
}

// `vector_deleting_destructor'`adjustor{680}' @ 14d0f2ec8

/* [thunk]:public: virtual void * __ptr64 __cdecl SListView<class TSharedPtr<struct
   FNamingTokenDataTreeItem,1> >::`vector deleting destructor'`adjustor{680}' (unsigned int) __ptr64
    */

void * __thiscall
SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>::_vector_deleting_destructor__adjustor_680__
          (SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_> *)
                      &this[-1].OnGenerateRow.field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14d0f2edc

/* [thunk]:public: virtual void * __ptr64 __cdecl SMultiColumnTableRow<class TSharedPtr<struct
   FNamingTokenDataTreeItem,1> >::`vector deleting destructor'`adjustor{8}' (unsigned int) __ptr64
    */

void * __thiscall
SMultiColumnTableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>::
_vector_deleting_destructor__adjustor_8__
          (SMultiColumnTableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SMultiColumnTableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_> *)
                      &this[-1].ColumnIdToSlotContents.field_0x48,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14d0f2eec

/* [thunk]:public: virtual void * __ptr64 __cdecl STableRow<class TSharedPtr<struct
   FNamingTokenDataTreeItem,1> >::`vector deleting destructor'`adjustor{8}' (unsigned int) __ptr64
    */

void * __thiscall
STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>::_vector_deleting_destructor__adjustor_8__
          (STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_> *)
                      &this[-1].bChangedSelectionOnMouseDown,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{680}' @ 14d0f2efc

/* [thunk]:public: virtual void * __ptr64 __cdecl STreeView<class TSharedPtr<struct
   FNamingTokenDataTreeItem,1> >::`vector deleting destructor'`adjustor{680}' (unsigned int) __ptr64
    */

void * __thiscall
STreeView<TSharedPtr<FNamingTokenDataTreeItem,1>_>::_vector_deleting_destructor__adjustor_680__
          (STreeView<TSharedPtr<FNamingTokenDataTreeItem,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((STreeView<TSharedPtr<FNamingTokenDataTreeItem,1>_> *)&this[-1].field_0x858,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{680}' @ 14d0f2f10

/* [thunk]:public: virtual void * __ptr64 __cdecl SNamingTokenDataTreeView::`vector deleting
   destructor'`adjustor{680}' (unsigned int) __ptr64 */

void * __thiscall
SNamingTokenDataTreeView::_vector_deleting_destructor__adjustor_680__
          (SNamingTokenDataTreeView *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((SNamingTokenDataTreeView *)&this[-1].field_0x868,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14d0f2f24

/* [thunk]:public: virtual void * __ptr64 __cdecl SNamingTokenDataTreeViewRow::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
SNamingTokenDataTreeViewRow::_vector_deleting_destructor__adjustor_8__
          (SNamingTokenDataTreeViewRow *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SNamingTokenDataTreeViewRow *)&this[-1].Item.WeakReferenceCount,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d0f2f34

/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UNamingTokensEditableText::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UNamingTokensEditableText::_vector_deleting_destructor__adjustor_40__
          (UNamingTokensEditableText *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UNamingTokensEditableText *)
                      &this[-1].MyNamingTokensEditableText.SharedReferenceCount,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14d0f2f50

void * __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedPtr<FNamingTokenDataTreeItem,1>_>::
_scalar_deleting_destructor_
          (FArrayPointer<TSharedPtr<FNamingTokenDataTreeItem,1>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f2f80

void * __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FNamingTokenDataTreeItem,1>_>::
_scalar_deleting_destructor_
          (FObservableArrayPointer<TSharedPtr<FNamingTokenDataTreeItem,1>_> *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  void *pvVar6;
  
  this->_padding_ =
       (longlong)
       &
       ___7__FObservableArrayPointer_V__TSharedPtr_UFNamingTokenDataTreeItem___00___ItemsSource_Slate_UE__6B_
  ;
  if ((((this->ListViewOwner).Object == (STableViewBase *)0x0) ||
      (pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController,
      pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ListViewOwner.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\IItemsSource.h"
                       ,0xa6,
                       L"The View widget has a source needed to be released to prevent bad memory access."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pvVar6 = (void *)(*pcVar4)();
      return pvVar6;
    }
  }
  TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FNamingTokenDataTreeItem,1>_>),FDefaultDelegateUserPolicy>
  ::Remove((TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FNamingTokenDataTreeItem,1>_>),FDefaultDelegateUserPolicy>
            *)&this->ItemsSource->ArrayChangedDelegate,
           (FDelegateHandle)(this->ArrayChangedHandle).ID);
  pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f3040

void * __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FNamingTokenDataTreeItem,1>_>::
_scalar_deleting_destructor_
          (FSharedObservableArray<TSharedPtr<FNamingTokenDataTreeItem,1>_> *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ =
       (longlong)
       &
       ___7__FSharedObservableArray_V__TSharedPtr_UFNamingTokenDataTreeItem___00___ItemsSource_Slate_UE__6B_
  ;
  TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FNamingTokenDataTreeItem,1>_>),FDefaultDelegateUserPolicy>
  ::Remove((TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FNamingTokenDataTreeItem,1>_>),FDefaultDelegateUserPolicy>
            *)&((this->ItemsSource).Object)->ArrayChangedDelegate,
           (FDelegateHandle)(this->ArrayChangedHandle).ID);
  pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ItemsSource).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f30c0

void * __thiscall
IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FNamingTokenDataTreeItem,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FNamingTokenDataTreeItem,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f30f0

void * __thiscall
IBaseDelegateInstance<FReply___cdecl(FGeometry_const_&,FCharacterEvent_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<FReply___cdecl(FGeometry_const_&,FCharacterEvent_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f3120

void * __thiscall
IBaseDelegateInstance<FString___cdecl(TSharedPtr<FNamingTokenDataTreeItem,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<FString___cdecl(TSharedPtr<FNamingTokenDataTreeItem,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f3150

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FNamingTokenDataTreeItem,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FNamingTokenDataTreeItem,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f3180

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedPtr<FNamingTokenDataTreeItem,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TSharedPtr<FNamingTokenDataTreeItem,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f31b0

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedPtr<FNamingTokenDataTreeItem,1>,TArray<TSharedPtr<FNamingTokenDataTreeItem,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TSharedPtr<FNamingTokenDataTreeItem,1>,TArray<TSharedPtr<FNamingTokenDataTreeItem,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f31e0

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedPtr<FNamingTokenDataTreeItem,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f3210

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedPtr<FNamingTokenDataTreeItem,1>,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TSharedPtr<FNamingTokenDataTreeItem,1>,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f3240

void * __thiscall
UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FNamingTokenDataTreeItem,1>_>::
_scalar_deleting_destructor_
          (IItemsSource<TSharedPtr<FNamingTokenDataTreeItem,1>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f3270

void * __thiscall
SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>::_scalar_deleting_destructor_
          (SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_> *this,uint param_1)

{
  ~SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0xa00);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f32d0

void * __thiscall
SMultiColumnTableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>::_scalar_deleting_destructor_
          (SMultiColumnTableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->ColumnIdToSlotContents).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ColumnIdToSlotContents).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ColumnIdToSlotContents);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Box).SharedReferenceCount.ReferenceController);
  STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>::
  ~STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>
            ((STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_> *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x458);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f3370

void * __thiscall
STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>::_scalar_deleting_destructor_
          (STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_> *this,uint param_1)

{
  ~STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f33d0

void * __thiscall
STreeView<TSharedPtr<FNamingTokenDataTreeItem,1>_>::_scalar_deleting_destructor_
          (STreeView<TSharedPtr<FNamingTokenDataTreeItem,1>_> *this,uint param_1)

{
  ~STreeView<TSharedPtr<FNamingTokenDataTreeItem,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0xb00);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f3430

void * __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f3460

void * __thiscall
TBaseFunctorDelegateInstance<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,`SNamingTokensEditableTextBox::OpenOrCloseSuggestionDropdownNextTick'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f3490

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FNamingTokenDataTreeItem,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FNamingTokenDataTreeItem,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FNamingTokenDataTreeItem,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FNamingTokenDataTreeItem,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f34c0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FNamingTokenDataTreeItem,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FNamingTokenDataTreeItem,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FNamingTokenDataTreeItem,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FNamingTokenDataTreeItem,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f34f0

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f3550

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f35b0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f3610

void * __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f3670

void * __thiscall
TBaseSPMethodDelegateInstance<1,SNamingTokenDataTreeViewWidget_const_,1,void___cdecl(TSharedPtr<FNamingTokenDataTreeItem,1>,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SNamingTokenDataTreeViewWidget_const_,1,void___cdecl(TSharedPtr<FNamingTokenDataTreeItem,1>,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f36d0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SNamingTokensEditableTextBox_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SNamingTokensEditableTextBox_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f3730

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SNamingTokensEditableTextBox_const_,1,FReply___cdecl(FGeometry_const_&,FCharacterEvent_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SNamingTokensEditableTextBox_const_,1,FReply___cdecl(FGeometry_const_&,FCharacterEvent_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f3790

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SNamingTokensEditableTextBox_const_,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SNamingTokensEditableTextBox_const_,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f37f0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SNamingTokensEditableTextBox_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SNamingTokensEditableTextBox_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f3850

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SNamingTokensEditableTextBox_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SNamingTokensEditableTextBox_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f38b0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SNamingTokensEditableTextBox_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SNamingTokensEditableTextBox_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f3910

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f3970

void * __thiscall
TBaseSPMethodDelegateInstance<0,SNamingTokenDataTreeViewWidget,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FNamingTokenDataTreeItem,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SNamingTokenDataTreeViewWidget,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FNamingTokenDataTreeItem,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f39d0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SNamingTokenDataTreeViewWidget,1,void___cdecl(TSharedPtr<FNamingTokenDataTreeItem,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SNamingTokenDataTreeViewWidget,1,void___cdecl(TSharedPtr<FNamingTokenDataTreeItem,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f3a30

void * __thiscall
TBaseSPMethodDelegateInstance<0,SNamingTokenDataTreeViewWidget,1,void___cdecl(TSharedPtr<FNamingTokenDataTreeItem,1>,TArray<TSharedPtr<FNamingTokenDataTreeItem,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SNamingTokenDataTreeViewWidget,1,void___cdecl(TSharedPtr<FNamingTokenDataTreeItem,1>,TArray<TSharedPtr<FNamingTokenDataTreeItem,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f3a90

void * __thiscall
TBaseSPMethodDelegateInstance<0,SNamingTokenDataTreeViewWidget,1,void___cdecl(TSharedPtr<FNamingTokenDataTreeItem,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f3af0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SNamingTokensEditableTextBox,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SNamingTokensEditableTextBox,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f3b50

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SNamingTokensEditableTextBox,1,void___cdecl(FTextLocation_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SNamingTokensEditableTextBox,1,void___cdecl(FTextLocation_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f3bb0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SNamingTokensEditableTextBox,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SNamingTokensEditableTextBox,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f3c10

void * __thiscall
TBaseSPMethodDelegateInstance<0,SNamingTokensEditableTextBox,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f3c70

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SNamingTokensEditableTextBox,1,void___cdecl(TSharedPtr<FNamingTokenDataTreeItem,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SNamingTokensEditableTextBox,1,void___cdecl(TSharedPtr<FNamingTokenDataTreeItem,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f3cd0

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FNamingTokenDataTreeItem,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FNamingTokenDataTreeItem,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f3d00

void * __thiscall
TBaseUObjectMethodDelegateInstance<1,UNamingTokensEditableText_const_,bool___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<1,UNamingTokensEditableText_const_,bool___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f3d30

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNamingTokensEditableText,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UNamingTokensEditableText,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f3d60

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FNamingTokenDataTreeItem,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FNamingTokenDataTreeItem,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f3d90

void * __thiscall
TCommonDelegateInstanceState<FReply___cdecl(FGeometry_const_&,FCharacterEvent_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FReply___cdecl(FGeometry_const_&,FCharacterEvent_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f3dc0

void * __thiscall
TCommonDelegateInstanceState<FString___cdecl(TSharedPtr<FNamingTokenDataTreeItem,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FString___cdecl(TSharedPtr<FNamingTokenDataTreeItem,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f3df0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FNamingTokenDataTreeItem,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FNamingTokenDataTreeItem,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f3e20

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<FNamingTokenDataTreeItem,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedPtr<FNamingTokenDataTreeItem,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f3e50

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<FNamingTokenDataTreeItem,1>,TArray<TSharedPtr<FNamingTokenDataTreeItem,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedPtr<FNamingTokenDataTreeItem,1>,TArray<TSharedPtr<FNamingTokenDataTreeItem,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f3e80

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<FNamingTokenDataTreeItem,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f3eb0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<FNamingTokenDataTreeItem,1>,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedPtr<FNamingTokenDataTreeItem,1>,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f3ee0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Construct_SListViewPinnedRowWidget___SListView_V__TSharedPtr_UFNamingTokenDataTreeItem___00____QEAAXAEBUFArguments_34_V__TSharedPtr_VITableRow___00__V__TSharedRef_V__SListView_V__TSharedPtr_UFNamingTokenDataTreeItem___00_____00__HH_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f3f20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SNamingTokensEditableTextBox::Construct'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`SNamingTokensEditableTextBox::Construct'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f3f60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SNamingTokensEditableTextBox::Construct'::__l2::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`SNamingTokensEditableTextBox::Construct'::`2'::<lambda_2>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f3fa0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SNamingTokensEditableTextBox::FCursorTokenData,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SNamingTokensEditableTextBox::FCursorTokenData,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f3fe0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNamingTokenData,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FNamingTokenData,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f4020

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNamingTokenDataTreeItem,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FNamingTokenDataTreeItem,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f4060

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1> *this
          ,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x408);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f40a0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f40e0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<FNamingTokensStringSyntaxHighlighterMarshaller,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FNamingTokensStringSyntaxHighlighterMarshaller,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x620);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f4120

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>::SListViewPinnedRowWidget,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>::SListViewPinnedRowWidget,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f4160

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SNamingTokenDataTreeView,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SNamingTokenDataTreeView,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f41a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SNamingTokenDataTreeViewRow,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SNamingTokenDataTreeViewRow,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x478);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f41e0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SNamingTokenDataTreeViewWidget,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SNamingTokenDataTreeViewWidget,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x368);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f4220

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SNamingTokensEditableTextBox,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SNamingTokensEditableTextBox,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x548);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f4260

void * __thiscall
TTableViewMetadata<TSharedPtr<FNamingTokenDataTreeItem,1>_>::_scalar_deleting_destructor_
          (TTableViewMetadata<TSharedPtr<FNamingTokenDataTreeItem,1>_> *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->OwnerTableView).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7ISlateMetaData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f42d0

void * __thiscall
FNamingTokensStringSyntaxHighlighterMarshaller::_scalar_deleting_destructor_
          (FNamingTokensStringSyntaxHighlighterMarshaller *this,uint param_1)

{
  FTextBlockStyle::~FTextBlockStyle(&(this->SyntaxTextStyle).ArgumentTextStyle);
  FTextBlockStyle::~FTextBlockStyle(&(this->SyntaxTextStyle).NormalTextStyle);
  FSyntaxHighlighterTextLayoutMarshaller::~FSyntaxHighlighterTextLayoutMarshaller
            ((FSyntaxHighlighterTextLayoutMarshaller *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x610);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f4330

void * __thiscall
SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>::FSlateAccessibleListView::
_scalar_deleting_destructor_(FSlateAccessibleListView *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f4370

void * __thiscall
STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>::FSlateAccessibleTableRow::
_scalar_deleting_destructor_(FSlateAccessibleTableRow *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f43b0

void * __thiscall
SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>::SListViewPinnedRowWidget::
_scalar_deleting_destructor_(SListViewPinnedRowWidget *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PinnedItemRow).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OwnerListView).SharedReferenceCount.ReferenceController);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f4420

void * __thiscall
SNamingTokenDataTreeView::_scalar_deleting_destructor_(SNamingTokenDataTreeView *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->OwningTreeViewWidget).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  STreeView<TSharedPtr<FNamingTokenDataTreeItem,1>_>::
  ~STreeView<TSharedPtr<FNamingTokenDataTreeItem,1>_>
            ((STreeView<TSharedPtr<FNamingTokenDataTreeItem,1>_> *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0xb10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f44a0

void * __thiscall
SNamingTokenDataTreeViewRow::_scalar_deleting_destructor_
          (SNamingTokenDataTreeViewRow *this,uint param_1)

{
  ~SNamingTokenDataTreeViewRow(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x468);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f4500

void * __thiscall
SNamingTokenDataTreeViewWidget::_scalar_deleting_destructor_
          (SNamingTokenDataTreeViewWidget *this,uint param_1)

{
  ~SNamingTokenDataTreeViewWidget(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x358);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f4560

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SNamingTokensEditableTextBox::_scalar_deleting_destructor_
          (SNamingTokensEditableTextBox *this,uint param_1)

{
  ~SNamingTokensEditableTextBox(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x538);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0f45c0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UNamingTokensEditableText::_scalar_deleting_destructor_
          (UNamingTokensEditableText *this,uint param_1)

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
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x8a0);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeNamingTokensEditableText @ 14d0ff710

void __cdecl EmptyLinkFunctionForGeneratedCodeNamingTokensEditableText(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNamingTokensUI_init @ 14d0ff720

void __cdecl EmptyLinkFunctionForGeneratedCodeNamingTokensUI_init(void)

{
  return;
}

// Z_Construct_UClass_UNamingTokensEditableText_NoRegister @ 14d11db90

UClass * __cdecl Z_Construct_UClass_UNamingTokensEditableText_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNamingTokensEditableText.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NamingTokensUI",L"NamingTokensEditableText",
               &Z_Registration_Info_UClass_UNamingTokensEditableText.InnerSingleton,
               UNamingTokensEditableText::StaticRegisterNativesUNamingTokensEditableText,0x8a0,0x10,
               CLASS_Intrinsic|CLASS_DefaultConfig,CASTCLASS_None,L"NamingTokens",
               InternalConstructor<UNamingTokensEditableText>,
               InternalVTableHelperCtorCaller<UNamingTokensEditableText>,local_res8,
               UMultiLineEditableText::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNamingTokensEditableText.InnerSingleton;
}

// IMPLEMENT_MODULE_NamingTokensUI @ 14d11e410

void __cdecl IMPLEMENT_MODULE_NamingTokensUI(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'DefaultArgumentStyle'' @ 150455a80

void __cdecl
`FNamingTokensStringSyntaxHighlighterMarshaller::GetDefaultArgumentStyle'::__l2::
_dynamic_atexit_destructor_for__DefaultArgumentStyle__(void)

{
  FTextBlockStyle::~FTextBlockStyle(&DefaultArgumentStyle);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultNormalStyle'' @ 150455aa0

void __cdecl
`FNamingTokensStringSyntaxHighlighterMarshaller::GetDefaultNormalStyle'::__l2::
_dynamic_atexit_destructor_for__DefaultNormalStyle__(void)

{
  FTextBlockStyle::~FTextBlockStyle(&DefaultNormalStyle);
  return;
}

// `dynamic_atexit_destructor_for_'EditableTextBoxStyle'' @ 150455ac0

void __cdecl
`SNamingTokenDataTreeViewRow::GetCustomEditableTextBoxStyle'::__l2::
_dynamic_atexit_destructor_for__EditableTextBoxStyle__(void)

{
  FEditableTextBoxStyle::~FEditableTextBoxStyle(&EditableTextBoxStyle);
  return;
}

// `dynamic_atexit_destructor_for_'Name'' @ 150455ae0

void __cdecl
`SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>::GetDefaultAccessibleText'::__l2::
_dynamic_atexit_destructor_for__Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
               ::__l2::Name.Data.AllocatorInstance.Data;
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Style'' @ 150455b00

void __cdecl
``SNamingTokenDataTreeViewRow::GetCustomEditableTextBoxStyle'::__l2::<lambda_1>::operator()'::__l2::
_dynamic_atexit_destructor_for__Style__(void)

{
  FEditableTextBoxStyle::~FEditableTextBoxStyle(&::Style);
  return;
}

