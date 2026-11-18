// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaPlate
// Functions: 119

// `dynamic_initializer_for_'LogMediaPlate'' @ 141447db0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMediaPlate__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogMediaPlate,L"LogMediaPlate",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogMediaPlate__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantMediaPlate'' @ 141447df0

void __cdecl _dynamic_initializer_for__ModuleRegistrantMediaPlate__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "MediaPlate";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"MediaPlate",10);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FMediaPlateModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateAssetUserData_h__Script_MediaPlate_940700948'' @ 141447e40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateAssetUserData_h__Script_MediaPlate_940700948__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MediaPlate",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateAssetUserData_h__Script_MediaPlate_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h__Script_MediaPlate_1259171232'' @ 141447e80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h__Script_MediaPlate_1259171232__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MediaPlate",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h__Script_MediaPlate_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h__Script_MediaPlate_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h__Script_MediaPlate_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateResource_h__Script_MediaPlate_2746407782'' @ 141447ed0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateResource_h__Script_MediaPlate_2746407782__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MediaPlate",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateResource_h__Script_MediaPlate_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateResource_h__Script_MediaPlate_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlate_h__Script_MediaPlate_1910383280'' @ 141447f20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlate_h__Script_MediaPlate_1910383280__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MediaPlate",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlate_h__Script_MediaPlate_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_MediaPlate'' @ 141447f60

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_MediaPlate__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x676bbefe;
  local_res8[0].DeclarationsHash = 0x30730d07;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_MediaPlate,L"/Script/MediaPlate",
             &Z_Registration_Info_UPackage__Script_MediaPlate,local_res8);
  return;
}

// Z_Construct_UFunction_UMediaPlateComponent_Pause @ 14ea86930

UFunction * __cdecl Z_Construct_UFunction_UMediaPlateComponent_Pause(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlateComponent_Pause_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlateComponent_Play @ 14ea86970

UFunction * __cdecl Z_Construct_UFunction_UMediaPlateComponent_Play(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlateComponent_Play_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14ea869b0

void __cdecl
Z_Construct_UFunction_UMediaPlateComponent_Previous_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlateComponent_Previous @ 14ea869c0

UFunction * __cdecl Z_Construct_UFunction_UMediaPlateComponent_Previous(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlateComponent_Previous_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14ea86a00

void __cdecl
Z_Construct_UFunction_UMediaPlateComponent_Rewind_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlateComponent_Rewind @ 14ea86a10

UFunction * __cdecl Z_Construct_UFunction_UMediaPlateComponent_Rewind(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlateComponent_Rewind_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14ea86a50

void __cdecl
Z_Construct_UFunction_UMediaPlateComponent_Seek_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlateComponent_Seek @ 14ea86a60

UFunction * __cdecl Z_Construct_UFunction_UMediaPlateComponent_Seek(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlateComponent_Seek_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlateComponent_SelectExternalMedia @ 14ea86aa0

UFunction * __cdecl Z_Construct_UFunction_UMediaPlateComponent_SelectExternalMedia(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlateComponent_SelectExternalMedia_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlateComponent_SelectMediaPlaylistAsset @ 14ea86ae0

UFunction * __cdecl Z_Construct_UFunction_UMediaPlateComponent_SelectMediaPlaylistAsset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlateComponent_SelectMediaPlaylistAsset_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlateComponent_SelectMediaSourceAsset @ 14ea86be0

UFunction * __cdecl Z_Construct_UFunction_UMediaPlateComponent_SelectMediaSourceAsset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlateComponent_SelectMediaSourceAsset_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInEnableAudio_SetBit @ 14ea86c20

void __cdecl
Z_Construct_UFunction_UMediaPlateComponent_SetEnableAudio_Statics::NewProp_bInEnableAudio_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlateComponent_SetEnableAudio @ 14ea86c30

UFunction * __cdecl Z_Construct_UFunction_UMediaPlateComponent_SetEnableAudio(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlateComponent_SetEnableAudio_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMediaPlateAssetUserData @ 14ea86c70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMediaPlateAssetUserData(void)

{
  if (Z_Registration_Info_UClass_UMediaPlateAssetUserData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMediaPlateAssetUserData.OuterSingleton,
               &Z_Construct_UClass_UMediaPlateAssetUserData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMediaPlateAssetUserData.OuterSingleton;
}

// NewProp_bInIsAspectRatioAuto_SetBit @ 14ea86cb0

void __cdecl
Z_Construct_UFunction_UMediaPlateComponent_SetIsAspectRatioAuto_Statics::
NewProp_bInIsAspectRatioAuto_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlateComponent_SetIsAspectRatioAuto @ 14ea86cf0

UFunction * __cdecl Z_Construct_UFunction_UMediaPlateComponent_SetIsAspectRatioAuto(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlateComponent_SetIsAspectRatioAuto_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlateComponent_SetLetterboxAspectRatio @ 14ea86e30

UFunction * __cdecl Z_Construct_UFunction_UMediaPlateComponent_SetLetterboxAspectRatio(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlateComponent_SetLetterboxAspectRatio_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInLoop_SetBit @ 14ea86e70

void __cdecl
Z_Construct_UFunction_UMediaPlateComponent_SetLoop_Statics::NewProp_bInLoop_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlateComponent_SetLoop @ 14ea86e80

UFunction * __cdecl Z_Construct_UFunction_UMediaPlateComponent_SetLoop(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlateComponent_SetLoop_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlateComponent_SetMeshRange @ 14ea86ec0

UFunction * __cdecl Z_Construct_UFunction_UMediaPlateComponent_SetMeshRange(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlateComponent_SetMeshRange_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInPlayOnlyWhenVisible_SetBit @ 14ea86f00

void __cdecl
Z_Construct_UFunction_UMediaPlateComponent_SetPlayOnlyWhenVisible_Statics::
NewProp_bInPlayOnlyWhenVisible_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlateComponent_SetPlayOnlyWhenVisible @ 14ea86f10

UFunction * __cdecl Z_Construct_UFunction_UMediaPlateComponent_SetPlayOnlyWhenVisible(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlateComponent_SetPlayOnlyWhenVisible_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMediaPlateComponent_NoRegister @ 14ea86f50

UClass * __cdecl Z_Construct_UClass_UMediaPlateComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaPlateComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaPlate",L"MediaPlateComponent",
               &Z_Registration_Info_UClass_UMediaPlateComponent.InnerSingleton,
               UMediaPlateComponent::StaticRegisterNativesUMediaPlateComponent,0x268,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UMediaPlateComponent>,
               InternalVTableHelperCtorCaller<UMediaPlateComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaPlateComponent.InnerSingleton;
}

// NewProp_bPlayOnOpen_SetBit @ 14ea87010

void __cdecl
Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bPlayOnOpen_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 200) = 1;
  return;
}

// NewProp_bAutoPlay_SetBit @ 14ea87020

void __cdecl
Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bAutoPlay_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc9) = 1;
  return;
}

// NewProp_bEnableAudio_SetBit @ 14ea87070

void __cdecl
Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bEnableAudio_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xca) = 1;
  return;
}

// NewProp_bIsMediaPlatePlaying_SetBit @ 14ea87080

void __cdecl
Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bIsMediaPlatePlaying_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x164) = 1;
  return;
}

// NewProp_bPlayOnlyWhenVisible_SetBit @ 14ea87090

void __cdecl
Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bPlayOnlyWhenVisible_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x178) = 1;
  return;
}

// NewProp_bLoop_SetBit @ 14ea870a0

void __cdecl Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bLoop_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x179) = 1;
  return;
}

// NewProp_bIsAspectRatioAuto_SetBit @ 14ea870b0

void __cdecl
Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bIsAspectRatioAuto_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x180) = 1;
  return;
}

// NewProp_bEnableMipMapUpscaling_SetBit @ 14ea870c0

void __cdecl
Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bEnableMipMapUpscaling_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x181) = 1;
  return;
}

// NewProp_bAdaptivePoleMipUpscaling_SetBit @ 14ea870d0

void __cdecl
Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bAdaptivePoleMipUpscaling_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x188) = 1;
  return;
}

// Z_Construct_UPackage__Script_MediaPlate @ 14ea872f0

UPackage * __cdecl Z_Construct_UPackage__Script_MediaPlate(void)

{
  if (Z_Registration_Info_UPackage__Script_MediaPlate.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_MediaPlate.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_MediaPlate.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14ea87680

void * __thiscall
FMediaPlateModule::_scalar_deleting_destructor_(FMediaPlateModule *this,uint param_1)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnMediaPlateApplyMaterial).field_0x8,
             *(int *)&(this->OnMediaPlateApplyMaterial).field_0x10);
  pvVar1 = *(void **)&(this->OnMediaPlateApplyMaterial).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMediaPlateApplyMaterial);
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// Z_Construct_UEnum_MediaPlate_EMediaPlateResourceType @ 14ea876f0

UEnum * __cdecl Z_Construct_UEnum_MediaPlate_EMediaPlateResourceType(void)

{
  if (Z_Registration_Info_UEnum_EMediaPlateResourceType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMediaPlateResourceType.InnerSingleton,
               &Z_Construct_UEnum_MediaPlate_EMediaPlateResourceType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMediaPlateResourceType.InnerSingleton;
}

// EMediaPlateResourceType_StaticEnum @ 14ea87730

UEnum * __cdecl EMediaPlateResourceType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaPlateResourceType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaPlate();
    Z_Registration_Info_UEnum_EMediaPlateResourceType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaPlate_EMediaPlateResourceType,(UObject *)pUVar1,
                       L"EMediaPlateResourceType");
  }
  return Z_Registration_Info_UEnum_EMediaPlateResourceType.OuterSingleton;
}

// NewStructOps @ 14ea87770

void * __cdecl Z_Construct_UScriptStruct_FMediaPlateResource_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMediaPlateResource,&UE::CoreUObject::Private::Construct<FMediaPlateResource>,&UE::CoreUObject::Private::ConstructForTests<FMediaPlateResource>,&UE::CoreUObject::Private::Destruct<FMediaPlateResource>,&UE::CoreUObject::Private::Copy<FMediaPlateResource>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UMediaPlateComponent @ 14ea877b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMediaPlateComponent(void)

{
  if (Z_Registration_Info_UClass_UMediaPlateComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMediaPlateComponent.OuterSingleton,
               &Z_Construct_UClass_UMediaPlateComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMediaPlateComponent.OuterSingleton;
}

// Z_Construct_UEnum_MediaPlate_EMediaPlateEventState @ 14ea877f0

UEnum * __cdecl Z_Construct_UEnum_MediaPlate_EMediaPlateEventState(void)

{
  if (Z_Registration_Info_UEnum_EMediaPlateEventState.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMediaPlateEventState.InnerSingleton,
               &Z_Construct_UEnum_MediaPlate_EMediaPlateEventState_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMediaPlateEventState.InnerSingleton;
}

// Z_Construct_UScriptStruct_FMediaPlateResource @ 14ea87830

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMediaPlateResource(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMediaPlateResource.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMediaPlateResource.InnerSingleton,
               &Z_Construct_UScriptStruct_FMediaPlateResource_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMediaPlateResource.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FMediaPlateResource.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMediaTextureResourceSettings @ 14ea878b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMediaTextureResourceSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMediaTextureResourceSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMediaTextureResourceSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FMediaTextureResourceSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMediaTextureResourceSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMediaTextureResourceSettings.InnerSingleton;
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

// EMediaPlateEventState_StaticEnum @ 14ea87930

UEnum * __cdecl EMediaPlateEventState_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaPlateEventState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaPlate();
    Z_Registration_Info_UEnum_EMediaPlateEventState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaPlate_EMediaPlateEventState,(UObject *)pUVar1,
                       L"EMediaPlateEventState");
  }
  return Z_Registration_Info_UEnum_EMediaPlateEventState.OuterSingleton;
}

// NewProp_bEnableGenMips_SetBit @ 14ea87970

void __cdecl
Z_Construct_UScriptStruct_FMediaTextureResourceSettings_Statics::NewProp_bEnableGenMips_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 14ea87980

void * __cdecl Z_Construct_UScriptStruct_FMediaTextureResourceSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMediaTextureResourceSettings,&UE::CoreUObject::Private::Construct<FMediaTextureResourceSettings>,&UE::CoreUObject::Private::ConstructForTests<FMediaTextureResourceSettings>,&UE::CoreUObject::Private::Destruct<FMediaTextureResourceSettings>,&UE::CoreUObject::Private::Copy<FMediaTextureResourceSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMediaPlateComponent_Close @ 14ea879c0

UFunction * __cdecl Z_Construct_UFunction_UMediaPlateComponent_Close(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlateComponent_Close_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14ea87a00

void __cdecl
Z_Construct_UFunction_UMediaPlateComponent_GetIsAspectRatioAuto_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlateComponent_GetIsAspectRatioAuto @ 14ea87a10

UFunction * __cdecl Z_Construct_UFunction_UMediaPlateComponent_GetIsAspectRatioAuto(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlateComponent_GetIsAspectRatioAuto_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlateComponent_GetLetterboxAspectRatio @ 14ea87a50

UFunction * __cdecl Z_Construct_UFunction_UMediaPlateComponent_GetLetterboxAspectRatio(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlateComponent_GetLetterboxAspectRatio_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_AMediaPlate @ 14ea87a90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AMediaPlate(void)

{
  if (Z_Registration_Info_UClass_AMediaPlate.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AMediaPlate.OuterSingleton,
               &Z_Construct_UClass_AMediaPlate_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AMediaPlate.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 14ea87ad0

void __cdecl
Z_Construct_UFunction_AMediaPlate_IsHoldoutCompositeEnabled_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14ea87ae0

void __cdecl
Z_Construct_UFunction_UMediaPlateComponent_GetLoop_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_AMediaPlate_IsHoldoutCompositeEnabled @ 14ea87af0

UFunction * __cdecl Z_Construct_UFunction_AMediaPlate_IsHoldoutCompositeEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AMediaPlate_IsHoldoutCompositeEnabled_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlateComponent_GetLoop @ 14ea87b30

UFunction * __cdecl Z_Construct_UFunction_UMediaPlateComponent_GetLoop(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlateComponent_GetLoop_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInEnabled_SetBit @ 14ea87b70

void __cdecl
Z_Construct_UFunction_AMediaPlate_SetHoldoutCompositeEnabled_Statics::NewProp_bInEnabled_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlateComponent_GetMediaPlayer @ 14ea87b80

UFunction * __cdecl Z_Construct_UFunction_UMediaPlateComponent_GetMediaPlayer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlateComponent_GetMediaPlayer_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AMediaPlate_SetHoldoutCompositeEnabled @ 14ea87bc0

UFunction * __cdecl Z_Construct_UFunction_AMediaPlate_SetHoldoutCompositeEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AMediaPlate_SetHoldoutCompositeEnabled_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlateComponent_GetMediaPlaylist @ 14ea87c00

UFunction * __cdecl Z_Construct_UFunction_UMediaPlateComponent_GetMediaPlaylist(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlateComponent_GetMediaPlaylist_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnableHoldoutComposite_SetBit @ 14ea87c40

void __cdecl
Z_Construct_UClass_AMediaPlate_Statics::NewProp_bEnableHoldoutComposite_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2d0) = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlateComponent_GetMediaTexture @ 14ea87c50

UFunction * __cdecl Z_Construct_UFunction_UMediaPlateComponent_GetMediaTexture(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlateComponent_GetMediaTexture_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlateComponent_GetMeshRange @ 14ea87c90

UFunction * __cdecl Z_Construct_UFunction_UMediaPlateComponent_GetMeshRange(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlateComponent_GetMeshRange_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlateComponent_GetSelectedMediaSource @ 14ea87cd0

UFunction * __cdecl Z_Construct_UFunction_UMediaPlateComponent_GetSelectedMediaSource(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlateComponent_GetSelectedMediaSource_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14ea87d10

void __cdecl
Z_Construct_UFunction_UMediaPlateComponent_IsEventStateChangeAllowed_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlateComponent_IsEventStateChangeAllowed @ 14ea87d20

UFunction * __cdecl Z_Construct_UFunction_UMediaPlateComponent_IsEventStateChangeAllowed(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlateComponent_IsEventStateChangeAllowed_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14ea87d60

void __cdecl
Z_Construct_UFunction_UMediaPlateComponent_IsMediaPlatePlaying_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlateComponent_IsMediaPlatePlaying @ 14ea87d70

UFunction * __cdecl Z_Construct_UFunction_UMediaPlateComponent_IsMediaPlatePlaying(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlateComponent_IsMediaPlatePlaying_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14ea87db0

void __cdecl
Z_Construct_UFunction_UMediaPlateComponent_Next_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlateComponent_Next @ 14ea87dc0

UFunction * __cdecl Z_Construct_UFunction_UMediaPlateComponent_Next(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlateComponent_Next_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlateComponent_OnMediaEnd @ 14ea87e00

UFunction * __cdecl Z_Construct_UFunction_UMediaPlateComponent_OnMediaEnd(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlateComponent_OnMediaEnd_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlateComponent_OnMediaOpened @ 14ea87e40

UFunction * __cdecl Z_Construct_UFunction_UMediaPlateComponent_OnMediaOpened(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlateComponent_OnMediaOpened_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlateComponent_OnMediaResumed @ 14ea87e80

UFunction * __cdecl Z_Construct_UFunction_UMediaPlateComponent_OnMediaResumed(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlateComponent_OnMediaResumed_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlateComponent_OnMediaSuspended @ 14ea87ec0

UFunction * __cdecl Z_Construct_UFunction_UMediaPlateComponent_OnMediaSuspended(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlateComponent_OnMediaSuspended_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlateComponent_Open @ 14ea87f00

UFunction * __cdecl Z_Construct_UFunction_UMediaPlateComponent_Open(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlateComponent_Open_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_bInWaitForTexture_SetBit @ 14ea87f40

void __cdecl
Z_Construct_UFunction_UMediaPlateComponent_OpenLatent_Statics::NewProp_bInWaitForTexture_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  return;
}

// NewProp_bOutSuccess_SetBit @ 14ea87f50

void __cdecl
Z_Construct_UFunction_UMediaPlateComponent_OpenLatent_Statics::NewProp_bOutSuccess_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x25) = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlateComponent_OpenLatent @ 14ea87f60

UFunction * __cdecl Z_Construct_UFunction_UMediaPlateComponent_OpenLatent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlateComponent_OpenLatent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// DefaultConstructItems<UMediaPlateComponent::Layer,int> @ 14ea88220

void __cdecl DefaultConstructItems<UMediaPlateComponent::Layer,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      *(undefined4 *)(puVar1 + -2) = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UMediaPlateComponent::Layer,int> @ 14ea88290

void __cdecl DestructItems<UMediaPlateComponent::Layer,int>(Layer *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Textures).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = (Layer *)(&param_1->Textures + 1);
  }
  return;
}

// FindExistingActionWithPredicate<FMediaPlateOpenLatentAction,`FLatentActionManager::FindExistingAction<FMediaPlateOpenLatentAction>'::__l2::FFirstItemPredicate> @ 14ea882d0

FMediaPlateOpenLatentAction * __thiscall
FLatentActionManager::
FindExistingActionWithPredicate<FMediaPlateOpenLatentAction,_FLatentActionManager::FindExistingAction<FMediaPlateOpenLatentAction>_::__l2::FFirstItemPredicate>
          (FLatentActionManager *this,UObject *param_1,int param_2,FFirstItemPredicate *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  uint uVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  FWeakObjectPtr local_res8;
  UObject *local_res10;
  int iStack_2c;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  plVar7 = (longlong *)0x0;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  if (*(int *)&(this->ObjectToActionListMap).field_0x8 ==
      *(int *)&(this->ObjectToActionListMap).field_0x34) {
    return (FMediaPlateOpenLatentAction *)0x0;
  }
  puVar8 = *(undefined1 **)&(this->ObjectToActionListMap).field_0x40;
  if (puVar8 == (undefined1 *)0x0) {
    puVar8 = &(this->ObjectToActionListMap).field_0x38;
  }
  iVar1 = *(int *)(puVar8 + (((ulonglong)local_res8 >> 0x20 ^ (ulonglong)local_res8 & 0xffffffff) &
                            (ulonglong)(*(int *)&(this->ObjectToActionListMap).field_0x48 - 1)) * 4)
  ;
  if (iVar1 == -1) {
    return (FMediaPlateOpenLatentAction *)0x0;
  }
  while( true ) {
    puVar4 = (undefined8 *)((longlong)iVar1 * 0x20 + *(longlong *)&this->ObjectToActionListMap);
    if (((int)*puVar4 == local_res8.ObjectIndex) &&
       ((int)((ulonglong)*puVar4 >> 0x20) == local_res8.ObjectSerialNumber)) break;
    iVar1 = *(int *)(puVar4 + 3);
    if (iVar1 == -1) {
      return (FMediaPlateOpenLatentAction *)0x0;
    }
  }
  if (iVar1 == -1) {
    return (FMediaPlateOpenLatentAction *)0x0;
  }
  plVar9 = puVar4 + 1;
  if (puVar4 == (undefined8 *)0x0) {
    plVar9 = plVar7;
  }
  if (plVar9 == (longlong *)0x0) {
    return (FMediaPlateOpenLatentAction *)0x0;
  }
  plVar9 = (longlong *)*plVar9;
  if (plVar9 == (longlong *)0x0) {
    return (FMediaPlateOpenLatentAction *)0x0;
  }
  if ((int)plVar9[9] == 0) {
    return (FMediaPlateOpenLatentAction *)0x0;
  }
  plVar5 = (longlong *)plVar9[8];
  if ((longlong *)plVar9[8] == (longlong *)0x0) {
    plVar5 = plVar9 + 7;
  }
  iStack_2c = *(int *)((longlong)plVar5 + ((longlong)(int)plVar9[9] - 1U & (longlong)param_2) * 4);
  iVar1 = iStack_2c;
  iVar3 = iStack_2c;
  if (iStack_2c != -1) {
    do {
      iVar1 = *(int *)(*plVar9 + 0x10 + (longlong)iVar3 * 0x18);
      if (*(int *)(*plVar9 + (longlong)iVar3 * 0x18) == param_2) break;
      iVar3 = iVar1;
    } while (iVar1 != -1);
  }
  if (iVar3 != -1) {
    while( true ) {
      uVar6 = (int)plVar7 + 1;
      plVar7 = (longlong *)(ulonglong)uVar6;
      if (iVar1 == -1) break;
      while (lVar2 = (longlong)iVar1, iVar1 = *(int *)(*plVar9 + 0x10 + lVar2 * 0x18),
            *(int *)(*plVar9 + lVar2 * 0x18) != param_2) {
        if (iVar1 == -1) goto LAB_14ea88449;
      }
    }
LAB_14ea88449:
    if (0 < (int)uVar6) {
      if (iStack_2c != -1) {
        do {
          iVar1 = *(int *)(*plVar9 + 0x10 + (longlong)iStack_2c * 0x18);
          if (*(int *)(*plVar9 + (longlong)iStack_2c * 0x18) == param_2) break;
          iStack_2c = iVar1;
        } while (iVar1 != -1);
      }
      if (iStack_2c != -1) {
        return *(FMediaPlateOpenLatentAction **)(*plVar9 + 8 + (longlong)iStack_2c * 0x18);
      }
    }
  }
  return (FMediaPlateOpenLatentAction *)0x0;
}

// InternalConstructor<AMediaPlate> @ 14ea884f0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl InternalConstructor<AMediaPlate>(FObjectInitializer *param_1)

{
  if ((AMediaPlate *)param_1->Obj != (AMediaPlate *)0x0) {
    AMediaPlate::AMediaPlate((AMediaPlate *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UMediaPlateAssetUserData> @ 14ea88510

void __cdecl InternalConstructor<UMediaPlateAssetUserData>(FObjectInitializer *param_1)

{
  UAssetUserData *this;
  
  this = (UAssetUserData *)param_1->Obj;
  if (this != (UAssetUserData *)0x0) {
    UAssetUserData::UAssetUserData(this,param_1);
    *(undefined ***)this = &___7UMediaPlateAssetUserData__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined4 *)&this[1].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UMediaPlateComponent> @ 14ea88550

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UMediaPlateComponent>(FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  byte bVar2;
  UActorComponent *this;
  
  this = (UActorComponent *)param_1->Obj;
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0x101;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    this->_padding_ = (longlong)&UMediaPlateComponent::_vftable__for__UObject__;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this->_padding_ = (longlong)&UMediaPlateComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UMediaPlateComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = (longlong)&___7UMediaPlateComponent__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FMediaPlateResource::FMediaPlateResource((FMediaPlateResource *)&this[1]._padding_);
    this[2]._padding_ = 0;
    this[2]._padding_ = 0x4076800000000000;
    this[2]._padding_ = 0x4066800000000000;
    this[2]._padding_ = 0;
    this[2].PrimaryComponentTick._padding_ = 0;
    this[2].PrimaryComponentTick._padding_ = 0;
    this[2].PrimaryComponentTick._padding_ = 0;
    this[2].PrimaryComponentTick._padding_ = 0;
    this[2].PrimaryComponentTick.Target = (UActorComponent *)0x0;
    this[2].ComponentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[2].ComponentTags.ArrayNum = 0;
    this[2].ComponentTags.ArrayMax = 0;
    *(undefined8 *)&this[2].field_0x88 = 0;
    this[2].UCSSerializationIndex = 0;
    this[2].RegistrationState = None;
    *(undefined8 *)&this[2].field_0x98 = 0;
    this[2].PhysicsStateAsyncCreationScene = (FPhysScene_Chaos *)0x0;
    *(undefined8 *)&this[2].field_0xb8 = 0;
    *(undefined4 *)&this[1].PhysicsStateAsyncCreationScene = 0x3e4ccccd;
    this[2].AssetUserData.AllocatorInstance.Data = (FScriptContainerElement *)0xbff0000000000000;
    puVar1 = &this[1].field_0x98;
    this[1].bRegistered = '\0';
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
    this[1].bRenderStateDirty = '\0';
    this[1].bReplicates = '\0';
    this[1].bReplicateUsingRegisteredSubObjectList = '\0';
    this[1].bNetAddressable = '\0';
    this[1].bCallAsyncPhysicsStateCreatedDelegate = '\0';
    this[1].bPhysicsStateCreated = '\0';
    this[1].bRenderStateRecreating = '\0';
    this[1].bRenderStateCreated = '\0';
    *(undefined1 *)((longlong)&this[1].PhysicsStateAsyncCreationScene + 4) = 0;
    this[1].OwnerPrivate = (AActor *)0x0;
    this[1].WorldPrivate = (UWorld *)0x0;
    *(undefined4 *)&this[1].field_0xbc = 0;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0;
    *(undefined2 *)&this[2].AssetUserData.ArrayNum = 0;
    *(undefined2 *)&this[1].field_0xb8 = 0x100;
    *(undefined2 *)&this[2]._padding_ = 1;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0x10;
    *(undefined1 *)&this[2]._padding_ = 1;
    *(undefined4 *)&this[2]._padding_ = 2;
    *(undefined4 *)&this[3]._padding_ = 0;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0x80;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0;
    *(undefined4 *)&this[3]._padding_ = 0xffffffff;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    bVar2 = *(byte *)((longlong)&(this->PrimaryComponentTick)._padding_ + 2);
    this->bTickInEditor = '\x01';
    *(undefined1 *)&this[2].PrimaryComponentTick._padding_ = 0;
    *(byte *)((longlong)&(this->PrimaryComponentTick)._padding_ + 2) = bVar2 & 0xfb | 2;
    this[1].field_0x9c = 1;
    this[1].OnComponentActivated = (FActorComponentActivatedSignature)0x1;
  }
  return;
}

// InternalVTableHelperCtorCaller<AMediaPlate> @ 14ea88740

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

UObject * __cdecl InternalVTableHelperCtorCaller<AMediaPlate>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AMediaPlate::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7AMediaPlate__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMediaPlateAssetUserData> @ 14ea88800

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMediaPlateAssetUserData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMediaPlateAssetUserData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UAssetUserData::UAssetUserData((UAssetUserData *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMediaPlateAssetUserData__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined4 *)&pUVar1[1].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMediaPlateComponent> @ 14ea888c0

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

UObject * __cdecl InternalVTableHelperCtorCaller<UMediaPlateComponent>(FVTableHelper *param_1)

{
  undefined1 *puVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UActorComponent *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UMediaPlateComponent::GetPrivateStaticClass();
  this = (UActorComponent *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0x101;
    this->_padding_ = (longlong)&UMediaPlateComponent::_vftable__for__UObject__;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    this->_padding_ = (longlong)&UMediaPlateComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UMediaPlateComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = (longlong)&___7UMediaPlateComponent__6B_;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FMediaPlateResource::FMediaPlateResource((FMediaPlateResource *)&this[1]._padding_);
    puVar1 = &this[1].field_0x98;
    this[1].bRegistered = '\0';
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
    this[1].bRenderStateDirty = '\0';
    this[1].bReplicates = '\0';
    this[1].bReplicateUsingRegisteredSubObjectList = '\0';
    this[1].bNetAddressable = '\0';
    this[1].bCallAsyncPhysicsStateCreatedDelegate = '\0';
    this[1].bPhysicsStateCreated = '\0';
    this[1].bRenderStateRecreating = '\0';
    this[1].bRenderStateCreated = '\0';
    this[2]._padding_ = 0x4076800000000000;
    this[2]._padding_ = 0x4066800000000000;
    this[2].AssetUserData.AllocatorInstance.Data = (FScriptContainerElement *)0xbff0000000000000;
    this[1].field_0x9c = 0;
    *(undefined4 *)&this[1].PhysicsStateAsyncCreationScene = 0x3e4ccccd;
    *(undefined1 *)((longlong)&this[1].PhysicsStateAsyncCreationScene + 4) = 0;
    this[1].OwnerPrivate = (AActor *)0x0;
    this[1].WorldPrivate = (UWorld *)0x0;
    *(undefined2 *)&this[1].field_0xb8 = 0x100;
    *(undefined4 *)&this[1].field_0xbc = 0;
    *(undefined2 *)&this[2]._padding_ = 1;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0x10;
    *(undefined1 *)&this[2]._padding_ = 1;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0;
    *(undefined4 *)&this[2]._padding_ = 2;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined1 *)&this[2].PrimaryComponentTick._padding_ = 0;
    this[2].PrimaryComponentTick._padding_ = 0;
    this[2].PrimaryComponentTick._padding_ = 0;
    this[2].PrimaryComponentTick._padding_ = 0;
    this[2].PrimaryComponentTick._padding_ = 0;
    this[2].PrimaryComponentTick.Target = (UActorComponent *)0x0;
    this[2].ComponentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[2].ComponentTags.ArrayNum = 0;
    this[2].ComponentTags.ArrayMax = 0;
    *(undefined2 *)&this[2].AssetUserData.ArrayNum = 0;
    *(undefined8 *)&this[2].field_0x88 = 0;
    this[2].UCSSerializationIndex = 0;
    this[2].RegistrationState = None;
    *(undefined8 *)&this[2].field_0x98 = 0;
    this[2].PhysicsStateAsyncCreationScene = (FPhysScene_Chaos *)0x0;
    *(undefined8 *)&this[2].field_0xb8 = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[3]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// NewObject<UMediaSoundComponent> @ 14ea88b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMediaSoundComponent * __cdecl
NewObject<UMediaSoundComponent>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMediaSoundComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UMediaSoundComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMediaSoundComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// StaticEnum<enum_EMediaPlateEventState> @ 14ea88c00

UEnum * __cdecl StaticEnum<enum_EMediaPlateEventState>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaPlateEventState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaPlate();
    Z_Registration_Info_UEnum_EMediaPlateEventState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaPlate_EMediaPlateEventState,(UObject *)pUVar1,
                       L"EMediaPlateEventState");
  }
  return Z_Registration_Info_UEnum_EMediaPlateEventState.OuterSingleton;
}

// StaticEnum<enum_EMediaPlateResourceType> @ 14ea88c40

UEnum * __cdecl StaticEnum<enum_EMediaPlateResourceType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaPlateResourceType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaPlate();
    Z_Registration_Info_UEnum_EMediaPlateResourceType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaPlate_EMediaPlateResourceType,(UObject *)pUVar1,
                       L"EMediaPlateResourceType");
  }
  return Z_Registration_Info_UEnum_EMediaPlateResourceType.OuterSingleton;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14ea89a58

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UMediaPlateComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UMediaPlateComponent::_vector_deleting_destructor__adjustor_40__
          (UMediaPlateComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UMediaPlateComponent *)&this[-1].MediaTextureProxyCount.field_0x28,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{192}' @ 14ea89a68

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UMediaPlateComponent::`vector deleting
   destructor'`adjustor{192}' (unsigned int) __ptr64 */

void * __thiscall
UMediaPlateComponent::_vector_deleting_destructor__adjustor_192__
          (UMediaPlateComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UMediaPlateComponent *)&this[-1].MediaTextures,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14ea89a80

void * __thiscall
IBaseDelegateInstance<UMediaPlayer_*___cdecl(UObject_*,UObject_*_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<UMediaPlayer_*___cdecl(UObject_*,UObject_*_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea89ab0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FMediaPlateModule,UMediaPlayer_*___cdecl(UObject_*,UObject_*_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FMediaPlateModule,UMediaPlayer_*___cdecl(UObject_*,UObject_*_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea89ae0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FMediaPlateOpenLatentAction,void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea89b10

void * __thiscall
TCommonDelegateInstanceState<UMediaPlayer_*___cdecl(UObject_*,UObject_*_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<UMediaPlayer_*___cdecl(UObject_*,UObject_*_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea89b40

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMediaComponentClockSink,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FMediaComponentClockSink,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea89b80

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall AMediaPlate::_scalar_deleting_destructor_(AMediaPlate *this,uint param_1)

{
  this->_padding_ = (longlong)&___7AMediaPlate__6B_;
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

// `scalar_deleting_destructor' @ 14ea89be0

void * __thiscall
FMediaComponentClockSink::_scalar_deleting_destructor_(FMediaComponentClockSink *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMediaClockSink__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea89c20

void * __thiscall
FMediaPlateOpenLatentAction::_scalar_deleting_destructor_
          (FMediaPlateOpenLatentAction *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  UObject *pUVar2;
  
  this->_padding_ = (longlong)&___7FMediaPlateOpenLatentAction__6B_;
  pUVar2 = FWeakObjectPtr::Get(&(this->MediaPlayerWeak).WeakPtr);
  if (pUVar2 != (UObject *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar2 + 10),this);
  }
  pFVar1 = (this->URL).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FPendingLatentAction__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea89ca0

void * __thiscall
IMediaPlayerProxyInterface::_scalar_deleting_destructor_
          (IMediaPlayerProxyInterface *this,uint param_1)

{
  *this = (IMediaPlayerProxyInterface)&___7IMediaPlayerProxyInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea89ce0

void * __thiscall
UMediaPlateAssetUserData::_scalar_deleting_destructor_(UMediaPlateAssetUserData *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMediaPlateAssetUserData__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnPostEditChangeOwner);
  UAssetUserData::~UAssetUserData((UAssetUserData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea89d50

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
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
UMediaPlateComponent::_scalar_deleting_destructor_(UMediaPlateComponent *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7UMediaPlateComponent__6B_;
  *(undefined4 *)&(this->MediaTextureProxyCount).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MediaTextureProxyCount).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MediaTextureProxyCount);
  DestructItems<UMediaPlateComponent::Layer,int>
            ((Layer *)(this->TextureLayers).AllocatorInstance.Data,(this->TextureLayers).ArrayNum);
  pFVar2 = (this->TextureLayers).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ClockSink).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MediaTextureTrackerObject).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->MediaTextures).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pvVar1 = *(void **)&(this->MediaPlateResource).SourcePlaylist.SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->MediaPlateResource).MediaAsset.SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pFVar2 = (this->MediaPlateResource).ExternalMediaPath.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Letterboxes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7IMediaPlayerProxyInterface__6B_;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x268);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeMediaPlate @ 14ea8ac70

void __cdecl EmptyLinkFunctionForGeneratedCodeMediaPlate(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMediaPlateAssetUserData @ 14ea8ac80

void __cdecl EmptyLinkFunctionForGeneratedCodeMediaPlateAssetUserData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMediaPlateComponent @ 14ea8ac90

void __cdecl EmptyLinkFunctionForGeneratedCodeMediaPlateComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMediaPlateResource @ 14ea8aca0

void __cdecl EmptyLinkFunctionForGeneratedCodeMediaPlateResource(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMediaPlate_init @ 14ea8acb0

void __cdecl EmptyLinkFunctionForGeneratedCodeMediaPlate_init(void)

{
  return;
}

// Z_Construct_UClass_AMediaPlate_NoRegister @ 14ea916e0

UClass * __cdecl Z_Construct_UClass_AMediaPlate_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AMediaPlate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaPlate",L"MediaPlate",
               &Z_Registration_Info_UClass_AMediaPlate.InnerSingleton,
               AMediaPlate::StaticRegisterNativesAMediaPlate,0x2d8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AMediaPlate>,
               InternalVTableHelperCtorCaller<AMediaPlate>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AMediaPlate.InnerSingleton;
}

// Z_Construct_UClass_UMediaPlateAssetUserData_NoRegister @ 14ea917a0

UClass * __cdecl Z_Construct_UClass_UMediaPlateAssetUserData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaPlateAssetUserData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaPlate",L"MediaPlateAssetUserData",
               &Z_Registration_Info_UClass_UMediaPlateAssetUserData.InnerSingleton,
               UMediaPlateAssetUserData::StaticRegisterNativesUMediaPlateAssetUserData,0x40,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMediaPlateAssetUserData>,
               InternalVTableHelperCtorCaller<UMediaPlateAssetUserData>,local_res8,
               UAssetUserData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaPlateAssetUserData.InnerSingleton;
}

// IMPLEMENT_MODULE_MediaPlate @ 14ea92a60

void __cdecl IMPLEMENT_MODULE_MediaPlate(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'BaseBlendName'' @ 15046e710

void __cdecl
`UMediaPlateComponent::ProxySetTextureBlend'::__l22::_dynamic_atexit_destructor_for__BaseBlendName__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = BaseBlendName.Data.AllocatorInstance.Data;
  if (BaseBlendName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (BaseBlendName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'BaseTextureName'' @ 15046e730

void __cdecl
`UMediaPlateComponent::UpdateTextureLayers'::__l5::_dynamic_atexit_destructor_for__BaseTextureName__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = BaseTextureName.Data.AllocatorInstance.Data;
  if (BaseTextureName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (BaseTextureName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'ConstructorStatics'' @ 15046e750

void __cdecl
`AMediaPlate::AMediaPlate'::__l2::_dynamic_atexit_destructor_for__ConstructorStatics__(void)

{
  ::ConstructorStatics.Plane._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&::ConstructorStatics);
  return;
}

// `dynamic_atexit_destructor_for_'LogMediaPlate'' @ 15046e770

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMediaPlate__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMediaPlate);
  return;
}

