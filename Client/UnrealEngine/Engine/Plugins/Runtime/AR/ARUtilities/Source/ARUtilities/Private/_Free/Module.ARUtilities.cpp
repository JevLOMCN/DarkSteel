// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ARUtilities
// Functions: 58

// `dynamic_initializer_for_'LogMrMesh'' @ 1413c2e60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMrMesh__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogMrMesh,L"LogMrMesh",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogMrMesh__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantARUtilities'' @ 1413c2ea0

void __cdecl _dynamic_initializer_for__ModuleRegistrantARUtilities__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "ARUtilities";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"ARUtilities",0xb);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FARUtilitiesModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_ARLiveLinkRetargetAsset_h__Script_ARUtilities_1587708920'' @ 1413c2ef0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_ARLiveLinkRetargetAsset_h__Script_ARUtilities_1587708920__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ARUtilities",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_ARLiveLinkRetargetAsset_h__Script_ARUtilities_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_ARLiveLinkRetargetAsset_h__Script_ARUtilities_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_ARLiveLinkRetargetAsset_h__Script_ARUtilities_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_ARPassthroughManager_h__Script_ARUtilities_431958256'' @ 1413c2f40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_ARPassthroughManager_h__Script_ARUtilities_431958256__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ARUtilities",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_ARPassthroughManager_h__Script_ARUtilities_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_ARUtilitiesFunctionLibrary_h__Script_ARUtilities_3108206669'' @ 1413c2f80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_ARUtilitiesFunctionLibrary_h__Script_ARUtilities_3108206669__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ARUtilities",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_ARUtilitiesFunctionLibrary_h__Script_ARUtilities_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_PassthroughMaterialUpdateComponent_h__Script_ARUtilities_736332543'' @ 1413c2fc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_PassthroughMaterialUpdateComponent_h__Script_ARUtilities_736332543__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ARUtilities",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_PassthroughMaterialUpdateComponent_h__Script_ARUtilities_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_ARUtilities'' @ 1413c3000

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_ARUtilities__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xf2eac993;
  local_res8[0].DeclarationsHash = 0x799bd919;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_ARUtilities,L"/Script/ARUtilities",
             &Z_Registration_Info_UPackage__Script_ARUtilities,local_res8);
  return;
}

// Z_Construct_UClass_UARUtilitiesFunctionLibrary @ 14cfc63e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UARUtilitiesFunctionLibrary(void)

{
  if (Z_Registration_Info_UClass_UARUtilitiesFunctionLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UARUtilitiesFunctionLibrary.OuterSingleton,
               &Z_Construct_UClass_UARUtilitiesFunctionLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UARUtilitiesFunctionLibrary.OuterSingleton;
}

// Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateCameraTextureParam @ 14cfc6420

UFunction * __cdecl Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateCameraTextureParam(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateCameraTextureParam_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateSceneDepthTexture @ 14cfc6460

UFunction * __cdecl Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateSceneDepthTexture(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateSceneDepthTexture_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateWorldToMeterScale @ 14cfc64a0

UFunction * __cdecl Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateWorldToMeterScale(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateWorldToMeterScale_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UARLiveLinkRetargetAsset @ 14cfc66b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UARLiveLinkRetargetAsset(void)

{
  if (Z_Registration_Info_UClass_UARLiveLinkRetargetAsset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UARLiveLinkRetargetAsset.OuterSingleton,
               &Z_Construct_UClass_UARLiveLinkRetargetAsset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UARLiveLinkRetargetAsset.OuterSingleton;
}

// Z_Construct_UEnum_ARUtilities_EARLiveLinkSourceType @ 14cfc66f0

UEnum * __cdecl Z_Construct_UEnum_ARUtilities_EARLiveLinkSourceType(void)

{
  if (Z_Registration_Info_UEnum_EARLiveLinkSourceType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EARLiveLinkSourceType.InnerSingleton,
               &Z_Construct_UEnum_ARUtilities_EARLiveLinkSourceType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EARLiveLinkSourceType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FARKitPoseTrackingConfig @ 14cfc6730

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FARKitPoseTrackingConfig(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FARKitPoseTrackingConfig.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FARKitPoseTrackingConfig.InnerSingleton,
               &Z_Construct_UScriptStruct_FARKitPoseTrackingConfig_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FARKitPoseTrackingConfig.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FARKitPoseTrackingConfig.InnerSingleton;
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

// Z_Construct_UPackage__Script_ARUtilities @ 14cfc67b0

UPackage * __cdecl Z_Construct_UPackage__Script_ARUtilities(void)

{
  if (Z_Registration_Info_UPackage__Script_ARUtilities.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_ARUtilities.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_ARUtilities.OuterSingleton;
}

// EARLiveLinkSourceType_StaticEnum @ 14cfc67f0

UEnum * __cdecl EARLiveLinkSourceType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARLiveLinkSourceType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ARUtilities();
    Z_Registration_Info_UEnum_EARLiveLinkSourceType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ARUtilities_EARLiveLinkSourceType,(UObject *)pUVar1,
                       L"EARLiveLinkSourceType");
  }
  return Z_Registration_Info_UEnum_EARLiveLinkSourceType.OuterSingleton;
}

// NewStructOps @ 14cfc6830

void * __cdecl Z_Construct_UScriptStruct_FARKitPoseTrackingConfig_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FARKitPoseTrackingConfig,&UE::CoreUObject::Private::Construct<FARKitPoseTrackingConfig>,&UE::CoreUObject::Private::ConstructForTests<FARKitPoseTrackingConfig>,&UE::CoreUObject::Private::Destruct<FARKitPoseTrackingConfig>,&UE::CoreUObject::Private::Copy<FARKitPoseTrackingConfig>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UPassthroughMaterialUpdateComponent @ 14cfc6930

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPassthroughMaterialUpdateComponent(void)

{
  if (Z_Registration_Info_UClass_UPassthroughMaterialUpdateComponent.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPassthroughMaterialUpdateComponent.OuterSingleton,
               &Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPassthroughMaterialUpdateComponent.OuterSingleton;
}

// Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_AddAffectedComponent @ 14cfc6970

UFunction * __cdecl
Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_AddAffectedComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_AddAffectedComponent_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_RemoveAffectedComponent @ 14cfc69b0

UFunction * __cdecl
Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_RemoveAffectedComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_RemoveAffectedComponent_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_SetPassthroughDebugColor @ 14cfc69f0

UFunction * __cdecl
Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_SetPassthroughDebugColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_SetPassthroughDebugColor_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14cfc6a50

void * __thiscall
FARUtilitiesModule::_scalar_deleting_destructor_(FARUtilitiesModule *this,uint param_1)

{
  *this = (FARUtilitiesModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_AARPassthroughManager @ 14cfc6b50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AARPassthroughManager(void)

{
  if (Z_Registration_Info_UClass_AARPassthroughManager.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AARPassthroughManager.OuterSingleton,
               &Z_Construct_UClass_AARPassthroughManager_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AARPassthroughManager.OuterSingleton;
}

// Z_Construct_UClass_UPassthroughMaterialUpdateComponent_NoRegister @ 14cfc6b90

UClass * __cdecl Z_Construct_UClass_UPassthroughMaterialUpdateComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPassthroughMaterialUpdateComponent.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ARUtilities",L"PassthroughMaterialUpdateComponent",
               &Z_Registration_Info_UClass_UPassthroughMaterialUpdateComponent.InnerSingleton,
               UPassthroughMaterialUpdateComponent::
               StaticRegisterNativesUPassthroughMaterialUpdateComponent,0x108,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UPassthroughMaterialUpdateComponent>,
               InternalVTableHelperCtorCaller<UPassthroughMaterialUpdateComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPassthroughMaterialUpdateComponent.InnerSingleton;
}

// Z_Construct_UFunction_AARPassthroughManager_GetPassthroughMaterialUpdateComponent @ 14cfc6c50

UFunction * __cdecl
Z_Construct_UFunction_AARPassthroughManager_GetPassthroughMaterialUpdateComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AARPassthroughManager_GetPassthroughMaterialUpdateComponent_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// ConstructItems<TSubclassOf<UARComponent>,TSubclassOf<UARComponent>,int> @ 14cfc7210

void __cdecl
ConstructItems<TSubclassOf<UARComponent>,TSubclassOf<UARComponent>,int>
          (void *param_1,TSubclassOf<UARComponent> *param_2,int param_3)

{
  UClass *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      pUVar1 = (param_2->Class).field0_0x0.DebugPtr;
      *(UClass **)(lVar2 + (longlong)param_2) = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// InternalConstructor<AARPassthroughManager> @ 14cfc7290

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<AARPassthroughManager>(FObjectInitializer *param_1)

{
  AActor *pAVar1;
  AActor *this;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  USceneComponent *pUVar5;
  UObject *pUVar6;
  TObjectPtr<UClass>_u_0 local_res8;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7AARPassthroughManager__6B_;
    pAVar1 = this + 1;
    local_res8.DebugPtr = Z_Construct_UClass_UARMeshComponent_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res8.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
    }
    pAVar1->_padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,1,0,(ForAnyElementType *)pAVar1,1,(int *)((longlong)&this[1]._padding_ + 4));
    ConstructItems<TSubclassOf<UARComponent>,TSubclassOf<UARComponent>,int>
              ((FScriptContainerElement *)pAVar1->_padding_,
               (TSubclassOf<UARComponent> *)&local_res8.ObjectPtr,1);
    this[1]._padding_ = 0;
    pFVar3 = FName::FName((FName *)&local_res8.ObjectPtr,L"RootComponent");
    FVar2 = *pFVar3;
    pUVar4 = Z_Construct_UClass_USceneComponent_NoRegister();
    pUVar5 = (USceneComponent *)
             UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (USceneComponent *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->RootComponent).field0_0x0.DebugPtr = pUVar5;
    pFVar3 = FName::FName((FName *)&local_res8.ObjectPtr,L"PassthroughUpdateComponent");
    FVar2 = *pFVar3;
    pUVar4 = UPassthroughMaterialUpdateComponent::StaticClass();
    pUVar6 = UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    this[1]._padding_ = (longlong)pUVar6;
    pUVar6[4].field_0x19 = 3;
  }
  return;
}

// InternalConstructor<UARLiveLinkRetargetAsset> @ 14cfc7400

void __cdecl InternalConstructor<UARLiveLinkRetargetAsset>(FObjectInitializer *param_1)

{
  ULiveLinkRetargetAsset *this;
  
  this = (ULiveLinkRetargetAsset *)param_1->Obj;
  if (this != (ULiveLinkRetargetAsset *)0x0) {
    ULiveLinkRetargetAsset::ULiveLinkRetargetAsset(this,param_1);
    *(undefined1 *)(this + 1) = 0;
    *(undefined ***)this = &___7UARLiveLinkRetargetAsset__6B_;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x8 = 0;
    *(undefined4 *)&this[2].field_0xc = 0x80;
    *(undefined4 *)&this[2].field_0x10 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x14 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined4 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0xbff0000000000000;
    *(undefined8 *)(this + 4) = 0x3ff0000000000000;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UARUtilitiesFunctionLibrary> @ 14cfc74a0

void __cdecl InternalConstructor<UARUtilitiesFunctionLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UARUtilitiesFunctionLibrary__6B_;
  }
  return;
}

// InternalConstructor<UPassthroughMaterialUpdateComponent> @ 14cfc74d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UPassthroughMaterialUpdateComponent>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  UActorComponent *this;
  FLinearColor FVar2;
  FObjectInitializer *pFVar3;
  ulonglong uVar4;
  int *piVar5;
  
  this = (UActorComponent *)param_1->Obj;
  if (this != (UActorComponent *)0x0) {
    pFVar3 = FObjectInitializer::Get();
    UActorComponent::UActorComponent(this,pFVar3);
    uVar4 = (ulonglong)_tls_index;
    this->_padding_ = (longlong)&UPassthroughMaterialUpdateComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UPassthroughMaterialUpdateComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)
         &UPassthroughMaterialUpdateComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 1;
    FVar2 = FLinearColor::White;
    pbVar1 = (byte *)((longlong)&(this->PrimaryComponentTick)._padding_ + 2);
    *pbVar1 = *pbVar1 | 6;
    *(FLinearColor_u_0 *)&this[1]._padding_ = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar4 * 8) + 0x9d4c);
    if (*piVar5 < _TSS0) {
      _Init_thread_header(&_TSS0);
      if (_TSS0 == -1) {
        ConstructorHelpers::FObjectFinder<UMaterialInterface>::FObjectFinder<UMaterialInterface>
                  (&DefaultPassthroughMaterialRef,
                   L"/ARUtilities/Materials/M_ScreenSpacePassthroughCamera.M_ScreenSpacePassthroughCamera"
                   ,0);
        atexit(`UPassthroughMaterialUpdateComponent::UPassthroughMaterialUpdateComponent'::__l2::
               _dynamic_atexit_destructor_for__DefaultPassthroughMaterialRef__);
        _Init_thread_footer(&_TSS0);
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (DefaultPassthroughMaterialRef.Object.field0_0x0 != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)DefaultPassthroughMaterialRef.Object.field0_0x0);
    }
    this[1]._padding_ = (longlong)DefaultPassthroughMaterialRef.Object.field0_0x0;
    if (*piVar5 < _TSS1) {
      _Init_thread_header(&_TSS1);
      if (_TSS1 == -1) {
        ConstructorHelpers::FObjectFinder<UMaterialInterface>::FObjectFinder<UMaterialInterface>
                  (&DefaultPassthroughMaterialExternalTextureRef,
                   L"/ARUtilities/Materials/MI_ScreenSpacePassthroughCameraExternalTexture.MI_ScreenSpacePassthroughCameraExternalTexture"
                   ,0);
        atexit(`UPassthroughMaterialUpdateComponent::UPassthroughMaterialUpdateComponent'::__l2::
               _dynamic_atexit_destructor_for__DefaultPassthroughMaterialExternalTextureRef__);
        _Init_thread_footer(&_TSS1);
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (DefaultPassthroughMaterialExternalTextureRef.Object.field0_0x0 != (UMaterialInterface *)0x0)
       ) {
      UE::GC::MarkAsReachable
                ((UObject *)DefaultPassthroughMaterialExternalTextureRef.Object.field0_0x0);
    }
    this[1]._padding_ = (longlong)DefaultPassthroughMaterialExternalTextureRef.Object.field0_0x0;
  }
  return;
}

// InternalVTableHelperCtorCaller<AARPassthroughManager> @ 14cfc7690

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

UObject * __cdecl InternalVTableHelperCtorCaller<AARPassthroughManager>(FVTableHelper *param_1)

{
  AActor *pAVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  AActor *this;
  TObjectPtr<UClass>_u_0 local_res10;
  
  local_res10.DebugPtr = (UClass *)0x0;
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = AARPassthroughManager::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7AARPassthroughManager__6B_;
    pAVar1 = this + 1;
    local_res10.DebugPtr = Z_Construct_UClass_UARMeshComponent_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res10.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res10.DebugPtr);
    }
    pAVar1->_padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,1,0,(ForAnyElementType *)pAVar1,1,(int *)((longlong)&this[1]._padding_ + 4));
    ConstructItems<TSubclassOf<UARComponent>,TSubclassOf<UARComponent>,int>
              ((FScriptContainerElement *)pAVar1->_padding_,
               (TSubclassOf<UARComponent> *)&local_res10.ObjectPtr,1);
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UARLiveLinkRetargetAsset> @ 14cfc77c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UARLiveLinkRetargetAsset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UARLiveLinkRetargetAsset::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    ULiveLinkRetargetAsset::ULiveLinkRetargetAsset((ULiveLinkRetargetAsset *)pUVar1,param_1);
    *(undefined1 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UARLiveLinkRetargetAsset__6B_;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0;
    *(undefined4 *)&pUVar1[2].field_0xc = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x10 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0x14 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0xbff0000000000000;
    *(undefined8 *)(pUVar1 + 4) = 0x3ff0000000000000;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UARUtilitiesFunctionLibrary> @ 14cfc78e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UARUtilitiesFunctionLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UARUtilitiesFunctionLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UARUtilitiesFunctionLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPassthroughMaterialUpdateComponent> @ 14cfc7990

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
InternalVTableHelperCtorCaller<UPassthroughMaterialUpdateComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UActorComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPassthroughMaterialUpdateComponent::GetPrivateStaticClass();
  this = (UActorComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&UPassthroughMaterialUpdateComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UPassthroughMaterialUpdateComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)
         &UPassthroughMaterialUpdateComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(FLinearColor_u_0 *)&this[1]._padding_ = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// StaticEnum<enum_EARLiveLinkSourceType> @ 14cfc7aa0

UEnum * __cdecl StaticEnum<enum_EARLiveLinkSourceType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARLiveLinkSourceType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ARUtilities();
    Z_Registration_Info_UEnum_EARLiveLinkSourceType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ARUtilities_EARLiveLinkSourceType,(UObject *)pUVar1,
                       L"EARLiveLinkSourceType");
  }
  return Z_Registration_Info_UEnum_EARLiveLinkSourceType.OuterSingleton;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14cfc81d0

/* [thunk]:public: virtual void * __ptr64 __cdecl UPassthroughMaterialUpdateComponent::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UPassthroughMaterialUpdateComponent::_vector_deleting_destructor__adjustor_40__
          (UPassthroughMaterialUpdateComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPassthroughMaterialUpdateComponent *)
                      ((longlong)&this[-1].PassthroughDebugColor.field0_0x0 + 8),param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14cfc81e0

void * __thiscall
IBaseDelegateInstance<void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfc8210

void * __thiscall
IBaseDelegateInstance<void___cdecl(UMRMeshComponent_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UMRMeshComponent_*),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfc8240

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfc8270

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(UMRMeshComponent_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(UMRMeshComponent_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfc82a0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfc82d0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UMRMeshComponent_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UMRMeshComponent_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfc8300

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
AARPassthroughManager::_scalar_deleting_destructor_(AARPassthroughManager *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7AARPassthroughManager__6B_;
  pFVar1 = (this->ARComponentClasses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfc8380

void * __thiscall
UARLiveLinkRetargetAsset::_scalar_deleting_destructor_(UARLiveLinkRetargetAsset *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UARLiveLinkRetargetAsset__6B_;
  *(undefined4 *)&(this->BoneMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BoneMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BoneMap);
  ULiveLinkRetargetAsset::~ULiveLinkRetargetAsset((ULiveLinkRetargetAsset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfc8410

void * __thiscall
UARUtilitiesFunctionLibrary::_scalar_deleting_destructor_
          (UARUtilitiesFunctionLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UARUtilitiesFunctionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfc8470

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
UPassthroughMaterialUpdateComponent::_scalar_deleting_destructor_
          (UPassthroughMaterialUpdateComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->PendingComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AffectedComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UActorComponent::~UActorComponent((UActorComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x108);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeARLiveLinkRetargetAsset @ 14cfc8ac0

void __cdecl EmptyLinkFunctionForGeneratedCodeARLiveLinkRetargetAsset(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeARPassthroughManager @ 14cfc8ad0

void __cdecl EmptyLinkFunctionForGeneratedCodeARPassthroughManager(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeARUtilitiesFunctionLibrary @ 14cfc8ae0

void __cdecl EmptyLinkFunctionForGeneratedCodeARUtilitiesFunctionLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeARUtilities_init @ 14cfc8af0

void __cdecl EmptyLinkFunctionForGeneratedCodeARUtilities_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePassthroughMaterialUpdateComponent @ 14cfc8b00

void __cdecl EmptyLinkFunctionForGeneratedCodePassthroughMaterialUpdateComponent(void)

{
  return;
}

// Z_Construct_UClass_AARPassthroughManager_NoRegister @ 14cfca1b0

UClass * __cdecl Z_Construct_UClass_AARPassthroughManager_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AARPassthroughManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ARUtilities",L"ARPassthroughManager",
               &Z_Registration_Info_UClass_AARPassthroughManager.InnerSingleton,
               AARPassthroughManager::StaticRegisterNativesAARPassthroughManager,0x2d8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AARPassthroughManager>,
               InternalVTableHelperCtorCaller<AARPassthroughManager>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AARPassthroughManager.InnerSingleton;
}

// Z_Construct_UClass_UARLiveLinkRetargetAsset_NoRegister @ 14cfca270

UClass * __cdecl Z_Construct_UClass_UARLiveLinkRetargetAsset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARLiveLinkRetargetAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ARUtilities",L"ARLiveLinkRetargetAsset",
               &Z_Registration_Info_UClass_UARLiveLinkRetargetAsset.InnerSingleton,
               UARLiveLinkRetargetAsset::StaticRegisterNativesUARLiveLinkRetargetAsset,0xb0,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UARLiveLinkRetargetAsset>,
               InternalVTableHelperCtorCaller<UARLiveLinkRetargetAsset>,local_res8,
               ULiveLinkRetargetAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARLiveLinkRetargetAsset.InnerSingleton;
}

// Z_Construct_UClass_UARUtilitiesFunctionLibrary_NoRegister @ 14cfca330

UClass * __cdecl Z_Construct_UClass_UARUtilitiesFunctionLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARUtilitiesFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ARUtilities",L"ARUtilitiesFunctionLibrary",
               &Z_Registration_Info_UClass_UARUtilitiesFunctionLibrary.InnerSingleton,
               UARUtilitiesFunctionLibrary::StaticRegisterNativesUARUtilitiesFunctionLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UARUtilitiesFunctionLibrary>,
               InternalVTableHelperCtorCaller<UARUtilitiesFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARUtilitiesFunctionLibrary.InnerSingleton;
}

// IMPLEMENT_MODULE_ARUtilities @ 14cfcac60

void __cdecl IMPLEMENT_MODULE_ARUtilities(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'DefaultPassthroughMaterialExternalTextureRef'' @ 150454ce0

void __cdecl
`UPassthroughMaterialUpdateComponent::UPassthroughMaterialUpdateComponent'::__l2::
_dynamic_atexit_destructor_for__DefaultPassthroughMaterialExternalTextureRef__(void)

{
  DefaultPassthroughMaterialExternalTextureRef._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&DefaultPassthroughMaterialExternalTextureRef);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultPassthroughMaterialRef'' @ 150454d00

void __cdecl
`UPassthroughMaterialUpdateComponent::UPassthroughMaterialUpdateComponent'::__l2::
_dynamic_atexit_destructor_for__DefaultPassthroughMaterialRef__(void)

{
  DefaultPassthroughMaterialRef._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&DefaultPassthroughMaterialRef);
  return;
}

// `dynamic_atexit_destructor_for_'LogMrMesh'' @ 150454d20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMrMesh__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMrMesh);
  return;
}

