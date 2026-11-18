// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkComponents
// Functions: 69

// `dynamic_initializer_for_'CVarEnableLiveLinkEvaluation'' @ 1413c61e0

void __cdecl _dynamic_initializer_for__CVarEnableLiveLinkEvaluation__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarEnableLiveLinkEvaluation,L"LiveLink.Component.EnableLiveLinkEvaluation",local_res8
             ,L"Whether LiveLink components should evaluate their subject.",0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableLiveLinkEvaluation__);
  return;
}

// `dynamic_initializer_for_'LogLiveLinkComponents'' @ 1413c6230

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogLiveLinkComponents__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogLiveLinkComponents,L"LogLiveLinkComponents",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogLiveLinkComponents__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantLiveLinkComponents'' @ 1413c6270

void __cdecl _dynamic_initializer_for__ModuleRegistrantLiveLinkComponents__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "LiveLinkComponents";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"LiveLinkComponents",0x12);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FLiveLinkComponentsModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_Controllers_LiveLinkLightController_h__Script_LiveLinkComponents_4045410283'' @ 1413c62c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_Controllers_LiveLinkLightController_h__Script_LiveLinkComponents_4045410283__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLinkComponents",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_Controllers_LiveLinkLightController_h__Script_LiveLinkComponents_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_Controllers_LiveLinkTransformController_h__Script_LiveLinkComponents_961071785'' @ 1413c6300

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_Controllers_LiveLinkTransformController_h__Script_LiveLinkComponents_961071785__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLinkComponents",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_Controllers_LiveLinkTransformController_h__Script_LiveLinkComponents_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_Controllers_LiveLinkTransformController_h__Script_LiveLinkComponents_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h__Script_LiveLinkComponents_2595489219'' @ 1413c6350

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h__Script_LiveLinkComponents_2595489219__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLinkComponents",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h__Script_LiveLinkComponents_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentSettings_h__Script_LiveLinkComponents_811335423'' @ 1413c6390

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentSettings_h__Script_LiveLinkComponents_811335423__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLinkComponents",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentSettings_h__Script_LiveLinkComponents_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkControllerBase_h__Script_LiveLinkComponents_1189849076'' @ 1413c63d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkControllerBase_h__Script_LiveLinkComponents_1189849076__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLinkComponents",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkControllerBase_h__Script_LiveLinkComponents_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_LiveLinkComponents'' @ 1413c6410

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_LiveLinkComponents__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x274d913f;
  local_res8[0].DeclarationsHash = 0xe09ea7be;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_LiveLinkComponents,L"/Script/LiveLinkComponents",
             &Z_Registration_Info_UPackage__Script_LiveLinkComponents,local_res8);
  return;
}

// `scalar_deleting_destructor' @ 14d0900a0

void * __thiscall
FLiveLinkComponentsModule::_scalar_deleting_destructor_
          (FLiveLinkComponentsModule *this,uint param_1)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnLiveLinkComponentRegisteredDelegate).field_0x8,
             *(int *)&(this->OnLiveLinkComponentRegisteredDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnLiveLinkComponentRegisteredDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLiveLinkComponentRegisteredDelegate);
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickDelegate__DelegateSignature @ 14d090110

UFunction * __cdecl
Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickDelegate__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_LiveLinkComponents_OnControllerMapUpdatedDelegate__DelegateSignature @ 14d090150

UFunction * __cdecl
Z_Construct_UDelegateFunction_LiveLinkComponents_OnControllerMapUpdatedDelegate__DelegateSignature
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_LiveLinkComponents_OnControllerMapUpdatedDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UPackage__Script_LiveLinkComponents @ 14d090190

UPackage * __cdecl Z_Construct_UPackage__Script_LiveLinkComponents(void)

{
  if (Z_Registration_Info_UPackage__Script_LiveLinkComponents.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_LiveLinkComponents.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_LiveLinkComponents.OuterSingleton;
}

// Z_Construct_UClass_ULiveLinkControllerBase @ 14d090310

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkControllerBase(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkControllerBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkControllerBase.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkControllerBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkControllerBase.OuterSingleton;
}

// Z_Construct_UClass_ULiveLinkLightController @ 14d090350

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkLightController(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkLightController.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkLightController.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkLightController_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkLightController.OuterSingleton;
}

// Z_Construct_UScriptStruct_FLiveLinkTransformControllerData @ 14d090390

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkTransformControllerData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkTransformControllerData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkTransformControllerData.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkTransformControllerData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkTransformControllerData.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UClass_ULiveLinkTransformController @ 14d090410

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkTransformController(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkTransformController.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkTransformController.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkTransformController_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkTransformController.OuterSingleton;
}

// NewProp_bWorldTransform_SetBit @ 14d090450

void __cdecl
Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bWorldTransform_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bUseLocation_SetBit @ 14d090460

void __cdecl
Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bUseLocation_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewProp_bUseRotation_SetBit @ 14d090470

void __cdecl
Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bUseRotation_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  return;
}

// NewProp_bUseScale_SetBit @ 14d090480

void __cdecl
Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bUseScale_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 3) = 1;
  return;
}

// NewProp_bSweep_SetBit @ 14d090490

void __cdecl
Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bSweep_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// NewProp_bTeleport_SetBit @ 14d0904a0

void __cdecl
Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bTeleport_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 5) = 1;
  return;
}

// NewStructOps @ 14d0904b0

void * __cdecl
Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 6;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkTransformControllerData,&UE::CoreUObject::Private::Construct<FLiveLinkTransformControllerData>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkTransformControllerData>,&UE::CoreUObject::Private::Destruct<FLiveLinkTransformControllerData>,&UE::CoreUObject::Private::Copy<FLiveLinkTransformControllerData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_ULiveLinkComponentSettings @ 14d0904f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkComponentSettings(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkComponentSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkComponentSettings.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkComponentSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkComponentSettings.OuterSingleton;
}

// Z_Construct_UClass_ULiveLinkControllerBase_NoRegister @ 14d090530

UClass * __cdecl Z_Construct_UClass_ULiveLinkControllerBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkControllerBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkComponents",L"LiveLinkControllerBase",
               &Z_Registration_Info_UClass_ULiveLinkControllerBase.InnerSingleton,
               ULiveLinkControllerBase::StaticRegisterNativesULiveLinkControllerBase,0x68,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkControllerBase>,
               InternalVTableHelperCtorCaller<ULiveLinkControllerBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkControllerBase.InnerSingleton;
}

// NewProp_bUpdateSubjectsImmediatelyInPIE_SetBit @ 14d0905e0

void __cdecl
Z_Construct_UClass_ULiveLinkComponentSettings_Statics::
NewProp_bUpdateSubjectsImmediatelyInPIE_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x78) = 1;
  return;
}

// `scalar_deleting_destructor' @ 14d0905f0

void * __thiscall
ILiveLinkComponentsModule::_scalar_deleting_destructor_
          (ILiveLinkComponentsModule *this,uint param_1)

{
  *this = (ILiveLinkComponentsModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_ULiveLinkComponentController @ 14d090630

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkComponentController(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkComponentController.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkComponentController.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkComponentController_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkComponentController.OuterSingleton;
}

// Z_Construct_UFunction_ULiveLinkComponentController_GetControlledComponent @ 14d090670

UFunction * __cdecl Z_Construct_UFunction_ULiveLinkComponentController_GetControlledComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkComponentController_GetControlledComponent_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULiveLinkComponentController_GetSubjectRepresentation @ 14d0906b0

UFunction * __cdecl
Z_Construct_UFunction_ULiveLinkComponentController_GetSubjectRepresentation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkComponentController_GetSubjectRepresentation_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULiveLinkComponentController_SetControlledComponent @ 14d0906f0

UFunction * __cdecl Z_Construct_UFunction_ULiveLinkComponentController_SetControlledComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkComponentController_SetControlledComponent_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULiveLinkComponentController_SetSubjectRepresentation @ 14d090730

UFunction * __cdecl
Z_Construct_UFunction_ULiveLinkComponentController_SetSubjectRepresentation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkComponentController_SetSubjectRepresentation_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bUpdateInEditor_SetBit @ 14d090770

void __cdecl
Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bUpdateInEditor_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x120) = 1;
  return;
}

// NewProp_bDisableEvaluateLiveLinkWhenSpawnable_SetBit @ 14d090780

void __cdecl
Z_Construct_UClass_ULiveLinkComponentController_Statics::
NewProp_bDisableEvaluateLiveLinkWhenSpawnable_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x158) = 1;
  return;
}

// NewProp_bEvaluateLiveLink_SetBit @ 14d090790

void __cdecl
Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bEvaluateLiveLink_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x159) = 1;
  return;
}

// NewProp_bUpdateInPreviewEditor_SetBit @ 14d0907a0

void __cdecl
Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bUpdateInPreviewEditor_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x15a) = 1;
  return;
}

// InternalConstructor<ULiveLinkComponentController> @ 14d091040

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<ULiveLinkComponentController>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  UActorComponent *this;
  FObjectInitializer *pFVar3;
  
  this = (UActorComponent *)param_1->Obj;
  if (this != (UActorComponent *)0x0) {
    pFVar3 = FObjectInitializer::Get();
    UActorComponent::UActorComponent(this,pFVar3);
    this->_padding_ = (longlong)&ULiveLinkComponentController::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&ULiveLinkComponentController::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&ULiveLinkComponentController::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1].PrimaryComponentTick._padding_ = 0;
    *(undefined4 *)((longlong)&this[1].PrimaryComponentTick._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1].PrimaryComponentTick._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1].PrimaryComponentTick._padding_ + 4) = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    *(undefined4 *)&this[1].PrimaryComponentTick._padding_ = 0;
    pbVar1 = (byte *)((longlong)&(this->PrimaryComponentTick)._padding_ + 2);
    *pbVar1 = *pbVar1 | 6;
    this[1].ComponentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].ComponentTags.ArrayNum = 0;
    this[1].ComponentTags.ArrayMax = 0;
    this[1].AssetUserData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].AssetUserData.ArrayNum = 0;
    this[1].AssetUserData.ArrayMax = 0;
    *(undefined8 *)&this[1].field_0x88 = 0;
    this[1].UCSSerializationIndex = 0;
    this[1].RegistrationState = None;
    this[1].field_0x9d = 0;
    this[1].PhysicsStateAsyncCreationScene = (FPhysScene_Chaos *)0x0;
    this[1].OwnerPrivate = (AActor *)0x0;
    this[1].WorldPrivate = (UWorld *)0x0;
    *(undefined8 *)&this[1].field_0xb8 = 2;
    this->bTickInEditor = '\x01';
    *(undefined1 *)&this[1].PrimaryComponentTick.Target = 1;
    puVar2 = &this[1].field_0x98;
    this[1].bRegistered = '\x01';
    this[1].bTickFunctionsRegistered = '\0';
    this[1].bIsBeingDestroyed = '\0';
    this[1].bHasBegunPlay = '\0';
    this[1].bIsReadyForReplication = '\0';
    this[1].bHasBeenInitialized = '\0';
    this[1].bHasBeenCreated = '\0';
    this[1].bIsEditorOnly = '\0';
    this[1].bWantsInitializeComponent = '\0';
    this[1].bCanEverAffectNavigation = '\0';
    this[1].bNavigationRelevant = '\0';
    this[1].bEditableWhenInherited = '\0';
    this[1].bIsActive = '\0';
    this[1].bAutoActivate = '\0';
    this[1].bAllowAnyoneToDestroyMe = '\0';
    this[1].bAllowConcurrentTick = '\0';
    this[1].bNeverNeedsRenderUpdate = '\0';
    this[1].bTickInEditor = '\0';
    this[1].bAllowReregistration = '\0';
    this[1].bAutoRegister = '\0';
    this[1].bRoutedPostRename = '\0';
    this[1].bRenderInstancesDirty = '\0';
    this[1].bRenderDynamicDataDirty = '\0';
    this[1].bRenderTransformDirty = '\0';
    this[1].bRenderStateDirty = '\x01';
    this[1].bReplicates = '\0';
    this[1].bReplicateUsingRegisteredSubObjectList = '\0';
    this[1].bNetAddressable = '\0';
    this[1].bCallAsyncPhysicsStateCreatedDelegate = '\0';
    this[1].bPhysicsStateCreated = '\0';
    this[1].bRenderStateRecreating = '\0';
    this[1].bRenderStateCreated = '\0';
    *(undefined1 *)&(this->PrimaryComponentTick)._padding_ = 0;
  }
  return;
}

// InternalConstructor<ULiveLinkComponentSettings> @ 14d091150

void __cdecl InternalConstructor<ULiveLinkComponentSettings>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7ULiveLinkComponentSettings__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined4 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x4 = 0x80;
    *(undefined4 *)&this[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[2].field_0xc = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x20 = 0;
    *(undefined1 *)(this + 3) = 1;
  }
  return;
}

// InternalConstructor<ULiveLinkControllerBase> @ 14d0911b0

void __cdecl InternalConstructor<ULiveLinkControllerBase>(FObjectInitializer *param_1)

{
  UObject *this;
  undefined8 local_res8;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7ULiveLinkControllerBase__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    local_res8 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&this[1].field_0x20,(FObjectPtr)&local_res8);
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<ULiveLinkLightController> @ 14d091220

void __cdecl InternalConstructor<ULiveLinkLightController>(FObjectInitializer *param_1)

{
  UObject *this;
  undefined8 local_res8;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7ULiveLinkControllerBase__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    local_res8 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&this[1].field_0x20,(FObjectPtr)&local_res8);
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined ***)this = &___7ULiveLinkLightController__6B_;
  }
  return;
}

// InternalConstructor<ULiveLinkTransformController> @ 14d0912a0

void __cdecl InternalConstructor<ULiveLinkTransformController>(FObjectInitializer *param_1)

{
  UObject *this;
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  undefined8 local_res8;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7ULiveLinkControllerBase__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    local_res8 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&this[1].field_0x20,(FObjectPtr)&local_res8);
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined4 *)&this[2].field_0x18 = 0x1010100;
    *(undefined2 *)&this[2].field_0x1c = 0x100;
    *(undefined ***)this = &___7ULiveLinkTransformController__6B_;
    *(double (*) [2])&this[2].field_0x20 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    dVar9 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    *(double *)&this[3].field_0x8 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    *(double *)&this[3].field_0x10 = dVar9;
    dVar9 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
    *(double *)&this[3].field_0x18 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
    *(double *)&this[3].field_0x20 = dVar9;
    dVar9 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
    *(double *)&this[4].field_0x0 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
    *(double *)&this[4].field_0x8 = dVar9;
    dVar9 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
    *(double *)&this[4].field_0x10 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
    *(double *)&this[4].field_0x18 = dVar9;
    *(double (*) [2])&this[4].field_0x20 =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
    auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])&this[5].field_0x8 = auVar3;
    auVar4._8_4_ = SUB84((double)fVar2,0);
    auVar4._0_8_ = (double)fVar1;
    auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
    *(undefined1 (*) [16])&this[5].field_0x18 = auVar4;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
    auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(this + 6) = auVar5;
    auVar6._8_4_ = SUB84((double)fVar2,0);
    auVar6._0_8_ = (double)fVar1;
    auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
    *(undefined1 (*) [16])&this[6].field_0x10 = auVar6;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
    auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])&this[6].field_0x20 = auVar7;
    auVar8._8_4_ = SUB84((double)fVar2,0);
    auVar8._0_8_ = (double)fVar1;
    auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
    *(undefined1 (*) [16])&this[7].field_0x8 = auVar8;
  }
  return;
}

// InternalVTableHelperCtorCaller<ULiveLinkComponentController> @ 14d0913e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ULiveLinkComponentController>(FVTableHelper *param_1)

{
  undefined1 *puVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UActorComponent *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = ULiveLinkComponentController::GetPrivateStaticClass();
  this = (UActorComponent *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    this->_padding_ = (longlong)&ULiveLinkComponentController::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&ULiveLinkComponentController::_vftable__for__IInterface_AssetUserData__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this->_padding_ =
         (longlong)&ULiveLinkComponentController::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined4 *)&this[1].PrimaryComponentTick._padding_ = 0;
    *(undefined4 *)((longlong)&this[1].PrimaryComponentTick._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1].PrimaryComponentTick._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1].PrimaryComponentTick._padding_ + 4) = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    *(undefined4 *)&this[1].PrimaryComponentTick._padding_ = 0;
    this[1].ComponentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].ComponentTags.ArrayNum = 0;
    this[1].ComponentTags.ArrayMax = 0;
    this[1].AssetUserData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].AssetUserData.ArrayNum = 0;
    this[1].AssetUserData.ArrayMax = 0;
    *(undefined8 *)&this[1].field_0x88 = 0;
    this[1].UCSSerializationIndex = 0;
    this[1].RegistrationState = None;
    puVar1 = &this[1].field_0x98;
    this[1].bRegistered = '\x01';
    this[1].bTickInEditor = '\0';
    this[1].bAllowReregistration = '\0';
    this[1].bAutoRegister = '\0';
    this[1].bRoutedPostRename = '\0';
    this[1].bRenderInstancesDirty = '\0';
    this[1].bRenderDynamicDataDirty = '\0';
    this[1].bRenderTransformDirty = '\0';
    this[1].bRenderStateDirty = '\x01';
    this[1].bReplicates = '\0';
    this[1].bReplicateUsingRegisteredSubObjectList = '\0';
    this[1].bNetAddressable = '\0';
    this[1].bCallAsyncPhysicsStateCreatedDelegate = '\0';
    this[1].bPhysicsStateCreated = '\0';
    this[1].bRenderStateRecreating = '\0';
    this[1].bRenderStateCreated = '\0';
    puVar1 = &this[1].field_0x9a;
    this[1].bNeverNeedsRenderUpdate = '\0';
    this[1].bCanEverAffectNavigation = '\0';
    this[1].bNavigationRelevant = '\0';
    this[1].bEditableWhenInherited = '\0';
    this[1].bIsActive = '\0';
    this[1].bAutoActivate = '\0';
    this[1].bAllowAnyoneToDestroyMe = '\0';
    this[1].bAllowConcurrentTick = '\0';
    this[1].field_0x9d = 0;
    this[1].PhysicsStateAsyncCreationScene = (FPhysScene_Chaos *)0x0;
    this[1].OwnerPrivate = (AActor *)0x0;
    this[1].WorldPrivate = (UWorld *)0x0;
    *(undefined8 *)&this[1].field_0xb8 = 2;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkComponentSettings> @ 14d091560

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULiveLinkComponentSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkComponentSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULiveLinkComponentSettings__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0xc = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0;
    *(undefined1 *)(pUVar1 + 3) = 1;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkControllerBase> @ 14d091640

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULiveLinkControllerBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  undefined8 local_res10;
  
  local_res10 = 0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkControllerBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    local_res10 = 0;
    *(undefined ***)pUVar1 = &___7ULiveLinkControllerBase__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar1[1].field_0x20,(FObjectPtr)&local_res10);
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkLightController> @ 14d091720

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULiveLinkLightController>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  undefined8 local_res10;
  
  local_res10 = 0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkLightController::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    local_res10 = 0;
    *(undefined ***)pUVar1 = &___7ULiveLinkControllerBase__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar1[1].field_0x20,(FObjectPtr)&local_res10);
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined ***)pUVar1 = &___7ULiveLinkLightController__6B_;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkTransformController> @ 14d091810

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ULiveLinkTransformController>(FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  UObject *pUVar10;
  UClass *pUVar11;
  undefined8 local_res10;
  
  local_res10 = 0;
  pUVar10 = GetTransientPackageAsObject();
  pUVar11 = ULiveLinkTransformController::GetPrivateStaticClass();
  pUVar10 = StaticAllocateObject
                      (pUVar11,pUVar10,(FName)0x0,
                       RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,Borrowed,false,
                       (bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                       (FGCReconstructionGuard *)0x0);
  if (pUVar10 != (UObject *)0x0) {
    UObject::UObject(pUVar10,param_1);
    local_res10 = 0;
    *(undefined ***)pUVar10 = &___7ULiveLinkControllerBase__6B_;
    *(undefined8 *)(pUVar10 + 1) = 0;
    *(undefined8 *)&pUVar10[1].field_0x8 = 0;
    *(undefined8 *)&pUVar10[1].field_0x10 = 0;
    *(undefined8 *)&pUVar10[1].field_0x18 = 0;
    *(undefined8 *)&pUVar10[1].field_0x20 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar10[1].field_0x20,(FObjectPtr)&local_res10);
    *(undefined8 *)(pUVar10 + 2) = 0;
    *(undefined8 *)&pUVar10[2].field_0x8 = 0;
    *(undefined8 *)&pUVar10[2].field_0x10 = 0;
    *(undefined4 *)&pUVar10[2].field_0x18 = 0x1010100;
    *(undefined2 *)&pUVar10[2].field_0x1c = 0x100;
    *(undefined ***)pUVar10 = &___7ULiveLinkTransformController__6B_;
    *(double (*) [2])&pUVar10[2].field_0x20 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    dVar9 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    *(double *)&pUVar10[3].field_0x8 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    *(double *)&pUVar10[3].field_0x10 = dVar9;
    dVar9 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
    *(double *)&pUVar10[3].field_0x18 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
    *(double *)&pUVar10[3].field_0x20 = dVar9;
    dVar9 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
    *(double *)&pUVar10[4].field_0x0 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
    *(double *)&pUVar10[4].field_0x8 = dVar9;
    dVar9 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
    *(double *)&pUVar10[4].field_0x10 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
    *(double *)&pUVar10[4].field_0x18 = dVar9;
    *(double (*) [2])&pUVar10[4].field_0x20 =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
    auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])&pUVar10[5].field_0x8 = auVar3;
    auVar4._8_4_ = SUB84((double)fVar2,0);
    auVar4._0_8_ = (double)fVar1;
    auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
    *(undefined1 (*) [16])&pUVar10[5].field_0x18 = auVar4;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
    auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(pUVar10 + 6) = auVar5;
    auVar6._8_4_ = SUB84((double)fVar2,0);
    auVar6._0_8_ = (double)fVar1;
    auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
    *(undefined1 (*) [16])&pUVar10[6].field_0x10 = auVar6;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
    auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])&pUVar10[6].field_0x20 = auVar7;
    auVar8._8_4_ = SUB84((double)fVar2,0);
    auVar8._0_8_ = (double)fVar1;
    auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
    *(undefined1 (*) [16])&pUVar10[7].field_0x8 = auVar8;
    return pUVar10;
  }
  return (UObject *)0x0;
}

// NewObject<ULiveLinkControllerBase> @ 14d0919c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

ULiveLinkControllerBase * __cdecl
NewObject<ULiveLinkControllerBase>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  ULiveLinkControllerBase *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = ULiveLinkControllerBase::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (ULiveLinkControllerBase *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d0924e4

/* [thunk]:public: virtual void * __ptr64 __cdecl ULiveLinkComponentController::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
ULiveLinkComponentController::_vector_deleting_destructor__adjustor_40__
          (ULiveLinkComponentController *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((ULiveLinkComponentController *)
                      &this[-1].bDisableEvaluateLiveLinkWhenSpawnable,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14d092500

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
ULiveLinkComponentController::_scalar_deleting_destructor_
          (ULiveLinkComponentController *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->LiveLinkControllersTickedDelegate).field_0x8,
             *(int *)&(this->LiveLinkControllersTickedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->LiveLinkControllersTickedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->LiveLinkControllersTickedDelegate);
  pvVar1 = *(void **)&(this->OnControllerMapUpdatedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnControllerMapUpdatedDelegate);
  pvVar1 = *(void **)&(this->OnLiveLinkUpdated).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLiveLinkUpdated);
  *(undefined4 *)&(this->ControllerMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ControllerMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ControllerMap);
  UActorComponent::~UActorComponent((UActorComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x180);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d092620

void * __thiscall
ULiveLinkComponentSettings::_scalar_deleting_destructor_
          (ULiveLinkComponentSettings *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7ULiveLinkComponentSettings__6B_;
  *(undefined4 *)&(this->DefaultControllerForRole).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DefaultControllerForRole).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TSubclassOf<ULiveLinkRole>,TSubclassOf<ULiveLinkControllerBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSubclassOf<ULiveLinkRole>,TSubclassOf<ULiveLinkControllerBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSubclassOf<ULiveLinkRole>,TSubclassOf<ULiveLinkControllerBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DefaultControllerForRole);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0926b0

void * __thiscall
ULiveLinkControllerBase::_scalar_deleting_destructor_(ULiveLinkControllerBase *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7ULiveLinkControllerBase__6B_;
  pvVar1 = (void *)(this->ComponentPicker)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d092720

void * __thiscall
ULiveLinkLightController::_scalar_deleting_destructor_(ULiveLinkLightController *this,uint param_1)

{
  *(undefined ***)this = &___7ULiveLinkControllerBase__6B_;
  if (*(void **)&this->field_0x30 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x30);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d092790

void * __thiscall
ULiveLinkTransformController::_scalar_deleting_destructor_
          (ULiveLinkTransformController *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ULiveLinkControllerBase__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x130);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkComponentController @ 14d092e70

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkComponentController(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkComponentSettings @ 14d092e80

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkComponentSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkComponents_init @ 14d092e90

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkComponents_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkControllerBase @ 14d092ea0

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkControllerBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkLightController @ 14d092eb0

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkLightController(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkTransformController @ 14d092ec0

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkTransformController(void)

{
  return;
}

// FLiveLinkTickDelegate_DelegateWrapper @ 14d092ed0

void __cdecl
FLiveLinkTickDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,float param_2)

{
  float local_res10 [6];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FOnControllerMapUpdatedDelegate_DelegateWrapper @ 14d092ef0

void __cdecl
FOnControllerMapUpdatedDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// Z_Construct_UClass_ULiveLinkComponentController_NoRegister @ 14d096710

UClass * __cdecl Z_Construct_UClass_ULiveLinkComponentController_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkComponentController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkComponents",L"LiveLinkComponentController",
               &Z_Registration_Info_UClass_ULiveLinkComponentController.InnerSingleton,
               ULiveLinkComponentController::StaticRegisterNativesULiveLinkComponentController,0x180
               ,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkComponentController>,
               InternalVTableHelperCtorCaller<ULiveLinkComponentController>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkComponentController.InnerSingleton;
}

// Z_Construct_UClass_ULiveLinkComponentSettings_NoRegister @ 14d0967d0

UClass * __cdecl Z_Construct_UClass_ULiveLinkComponentSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkComponentSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkComponents",L"LiveLinkComponentSettings",
               &Z_Registration_Info_UClass_ULiveLinkComponentSettings.InnerSingleton,
               ULiveLinkComponentSettings::StaticRegisterNativesULiveLinkComponentSettings,0x80,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Game",
               InternalConstructor<ULiveLinkComponentSettings>,
               InternalVTableHelperCtorCaller<ULiveLinkComponentSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkComponentSettings.InnerSingleton;
}

// Z_Construct_UClass_ULiveLinkLightController_NoRegister @ 14d096880

UClass * __cdecl Z_Construct_UClass_ULiveLinkLightController_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkLightController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkComponents",L"LiveLinkLightController",
               &Z_Registration_Info_UClass_ULiveLinkLightController.InnerSingleton,
               ULiveLinkLightController::StaticRegisterNativesULiveLinkLightController,0x68,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkLightController>,
               InternalVTableHelperCtorCaller<ULiveLinkLightController>,local_res8,
               ULiveLinkControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkLightController.InnerSingleton;
}

// Z_Construct_UClass_ULiveLinkTransformController_NoRegister @ 14d096940

UClass * __cdecl Z_Construct_UClass_ULiveLinkTransformController_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkTransformController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkComponents",L"LiveLinkTransformController",
               &Z_Registration_Info_UClass_ULiveLinkTransformController.InnerSingleton,
               ULiveLinkTransformController::StaticRegisterNativesULiveLinkTransformController,0x130
               ,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkTransformController>,
               InternalVTableHelperCtorCaller<ULiveLinkTransformController>,local_res8,
               ULiveLinkControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkTransformController.InnerSingleton;
}

// IMPLEMENT_MODULE_LiveLinkComponents @ 14d0972a0

void __cdecl IMPLEMENT_MODULE_LiveLinkComponents(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableLiveLinkEvaluation'' @ 1504557a0

void __cdecl _dynamic_atexit_destructor_for__CVarEnableLiveLinkEvaluation__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableLiveLinkEvaluation);
  return;
}

// `dynamic_atexit_destructor_for_'LogLiveLinkComponents'' @ 1504557c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogLiveLinkComponents__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogLiveLinkComponents);
  return;
}

