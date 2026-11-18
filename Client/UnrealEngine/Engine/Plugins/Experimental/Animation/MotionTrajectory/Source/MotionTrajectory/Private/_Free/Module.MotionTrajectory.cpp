// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MotionTrajectory
// Functions: 31

// `dynamic_initializer_for_'CVarCharacterTrajectoryDebug'' @ 1411d2d00

void __cdecl _dynamic_initializer_for__CVarCharacterTrajectoryDebug__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarCharacterTrajectoryDebug,L"a.CharacterTrajectory.Debug",local_res8,
             L"Turn on debug drawing for Character trajectory",0);
  atexit(_dynamic_atexit_destructor_for__CVarCharacterTrajectoryDebug__);
  return;
}

// `dynamic_initializer_for_'LogMotionTrajectory'' @ 1411d2d50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMotionTrajectory__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogMotionTrajectory,L"LogMotionTrajectory",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogMotionTrajectory__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantMotionTrajectory'' @ 1411d2d90

void __cdecl _dynamic_initializer_for__ModuleRegistrantMotionTrajectory__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "MotionTrajectory";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"MotionTrajectory",0x10);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FMotionTrajectoryModule>::InitializeModule)
  ;
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_CharacterTrajectoryComponent_h__Script_MotionTrajectory_1599556670'' @ 1411d2de0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_CharacterTrajectoryComponent_h__Script_MotionTrajectory_1599556670__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MotionTrajectory",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_CharacterTrajectoryComponent_h__Script_MotionTrajectory_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectoryLibrary_h__Script_MotionTrajectory_2831491751'' @ 1411d2e20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectoryLibrary_h__Script_MotionTrajectory_2831491751__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MotionTrajectory",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectoryLibrary_h__Script_MotionTrajectory_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectory_h__Script_MotionTrajectory_2764104156'' @ 1411d2e60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectory_h__Script_MotionTrajectory_2764104156__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MotionTrajectory",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectory_h__Script_MotionTrajectory_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_MotionTrajectory'' @ 1411d2ea0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_MotionTrajectory__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x5a4bd387;
  local_res8[0].DeclarationsHash = 0x35113927;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_MotionTrajectory,L"/Script/MotionTrajectory",
             &Z_Registration_Info_UPackage__Script_MotionTrajectory,local_res8);
  return;
}

// `scalar_deleting_destructor' @ 14a94a7e0

void * __thiscall
FMotionTrajectoryModule::_scalar_deleting_destructor_(FMotionTrajectoryModule *this,uint param_1)

{
  *this = (FMotionTrajectoryModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UCharacterTrajectoryComponent @ 14a94a860

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCharacterTrajectoryComponent(void)

{
  if (Z_Registration_Info_UClass_UCharacterTrajectoryComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCharacterTrajectoryComponent.OuterSingleton,
               &Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCharacterTrajectoryComponent.OuterSingleton;
}

// Z_Construct_UScriptStruct_FCharacterTrajectoryData @ 14a94a8a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCharacterTrajectoryData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCharacterTrajectoryData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCharacterTrajectoryData.InnerSingleton,
               &Z_Construct_UScriptStruct_FCharacterTrajectoryData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCharacterTrajectoryData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCharacterTrajectoryData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTrajectorySamplingData @ 14a94a920

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTrajectorySamplingData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTrajectorySamplingData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTrajectorySamplingData.InnerSingleton,
               &Z_Construct_UScriptStruct_FTrajectorySamplingData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTrajectorySamplingData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTrajectorySamplingData.InnerSingleton;
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

// Z_Construct_UFunction_UCharacterTrajectoryComponent_OnMovementUpdated @ 14a94a9a0

UFunction * __cdecl Z_Construct_UFunction_UCharacterTrajectoryComponent_OnMovementUpdated(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCharacterTrajectoryComponent_OnMovementUpdated_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UPackage__Script_MotionTrajectory @ 14a94a9e0

UPackage * __cdecl Z_Construct_UPackage__Script_MotionTrajectory(void)

{
  if (Z_Registration_Info_UPackage__Script_MotionTrajectory.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_MotionTrajectory.OuterSingleton,&PackageParams)
    ;
  }
  return Z_Registration_Info_UPackage__Script_MotionTrajectory.OuterSingleton;
}

// NewStructOps @ 14a94ab60

void * __cdecl Z_Construct_UScriptStruct_FMotionTrajectorySettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMotionTrajectorySettings,&UE::CoreUObject::Private::Construct<FMotionTrajectorySettings>,&UE::CoreUObject::Private::ConstructForTests<FMotionTrajectorySettings>,&UE::CoreUObject::Private::Destruct<FMotionTrajectorySettings>,&UE::CoreUObject::Private::Copy<FMotionTrajectorySettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a94aba0

void * __cdecl Z_Construct_UScriptStruct_FTrajectorySamplingData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTrajectorySamplingData,&UE::CoreUObject::Private::Construct<FTrajectorySamplingData>,&UE::CoreUObject::Private::ConstructForTests<FTrajectorySamplingData>,&UE::CoreUObject::Private::Destruct<FTrajectorySamplingData>,&UE::CoreUObject::Private::Copy<FTrajectorySamplingData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bUseSpeedRemappingCurve_SetBit @ 14a94abe0

void __cdecl
Z_Construct_UScriptStruct_FCharacterTrajectoryData_Statics::NewProp_bUseSpeedRemappingCurve_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewProp_bUseAccelerationRemappingCurve_SetBit @ 14a94abf0

void __cdecl
Z_Construct_UScriptStruct_FCharacterTrajectoryData_Statics::
NewProp_bUseAccelerationRemappingCurve_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x98) = 1;
  return;
}

// NewStructOps @ 14a94ac00

void * __cdecl Z_Construct_UScriptStruct_FCharacterTrajectoryData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1e0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCharacterTrajectoryData,&UE::CoreUObject::Private::Construct<FCharacterTrajectoryData>,&UE::CoreUObject::Private::ConstructForTests<FCharacterTrajectoryData>,&UE::CoreUObject::Private::Destruct<FCharacterTrajectoryData>,&UE::CoreUObject::Private::Copy<FCharacterTrajectoryData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// InternalConstructor<UCharacterTrajectoryComponent> @ 14a94af30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UCharacterTrajectoryComponent>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  UActorComponent *this;
  
  this = (UActorComponent *)param_1->Obj;
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    this->_padding_ = (longlong)&UCharacterTrajectoryComponent::_vftable__for__UObject__;
    this[1]._padding_ = 0;
    this->_padding_ =
         (longlong)&UCharacterTrajectoryComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UCharacterTrajectoryComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0x3fc00000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 5;
    *(undefined4 *)&this[1]._padding_ = 0x3fc00000;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 5;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    FCharacterTrajectoryData::FCharacterTrajectoryData
              ((FCharacterTrajectoryData *)&this[1]._padding_);
    pbVar1 = (byte *)((longlong)&(this->PrimaryComponentTick)._padding_ + 2);
    *pbVar1 = *pbVar1 & 0xf9;
    this->bWantsInitializeComponent = '\x01';
    this[3].UCSSerializationIndex = 0;
    this[3].RegistrationState = None;
    *(undefined8 *)&this[3].field_0x98 = 0;
    *(undefined4 *)&this[3].PhysicsStateAsyncCreationScene = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UCharacterTrajectoryComponent> @ 14a94b000

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
InternalVTableHelperCtorCaller<UCharacterTrajectoryComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UActorComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCharacterTrajectoryComponent::GetPrivateStaticClass();
  this = (UActorComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    this->_padding_ = (longlong)&UCharacterTrajectoryComponent::_vftable__for__UObject__;
    this[1]._padding_ = 0;
    this->_padding_ =
         (longlong)&UCharacterTrajectoryComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UCharacterTrajectoryComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0x3fc00000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 5;
    *(undefined4 *)&this[1]._padding_ = 0x3fc00000;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 5;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    FCharacterTrajectoryData::FCharacterTrajectoryData
              ((FCharacterTrajectoryData *)&this[1]._padding_);
    this[3].UCSSerializationIndex = 0;
    this[3].RegistrationState = None;
    *(undefined8 *)&this[3].field_0x98 = 0;
    *(undefined4 *)&this[3].PhysicsStateAsyncCreationScene = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14a94b4cc

/* [thunk]:public: virtual void * __ptr64 __cdecl UCharacterTrajectoryComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UCharacterTrajectoryComponent::_vector_deleting_destructor__adjustor_40__
          (UCharacterTrajectoryComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UCharacterTrajectoryComponent *)&this[-1].CharacterTrajectoryData.field_0x1d8
                      ,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14a94b4e0

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
UCharacterTrajectoryComponent::_scalar_deleting_destructor_
          (UCharacterTrajectoryComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->TranslationHistory).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FCharacterTrajectoryData::~FCharacterTrajectoryData(&this->CharacterTrajectoryData);
  pFVar1 = (this->Trajectory).Samples.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UActorComponent::~UActorComponent((UActorComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2f0);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeCharacterTrajectoryComponent @ 14a94b8a0

void __cdecl EmptyLinkFunctionForGeneratedCodeCharacterTrajectoryComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMotionTrajectory @ 14a94b8b0

void __cdecl EmptyLinkFunctionForGeneratedCodeMotionTrajectory(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMotionTrajectoryLibrary @ 14a94b8c0

void __cdecl EmptyLinkFunctionForGeneratedCodeMotionTrajectoryLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMotionTrajectory_init @ 14a94b8d0

void __cdecl EmptyLinkFunctionForGeneratedCodeMotionTrajectory_init(void)

{
  return;
}

// Z_Construct_UClass_UCharacterTrajectoryComponent_NoRegister @ 14a94e020

UClass * __cdecl Z_Construct_UClass_UCharacterTrajectoryComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCharacterTrajectoryComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionTrajectory",L"CharacterTrajectoryComponent",
               &Z_Registration_Info_UClass_UCharacterTrajectoryComponent.InnerSingleton,
               UCharacterTrajectoryComponent::StaticRegisterNativesUCharacterTrajectoryComponent,
               0x2f0,0x10,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UCharacterTrajectoryComponent>,
               InternalVTableHelperCtorCaller<UCharacterTrajectoryComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCharacterTrajectoryComponent.InnerSingleton;
}

// Z_Construct_UScriptStruct_FMotionTrajectorySettings @ 14a94e0e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMotionTrajectorySettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMotionTrajectorySettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMotionTrajectorySettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FMotionTrajectorySettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMotionTrajectorySettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMotionTrajectorySettings.InnerSingleton;
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

// IMPLEMENT_MODULE_MotionTrajectory @ 14a94e2b0

void __cdecl IMPLEMENT_MODULE_MotionTrajectory(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarCharacterTrajectoryDebug'' @ 1504219f0

void __cdecl _dynamic_atexit_destructor_for__CVarCharacterTrajectoryDebug__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCharacterTrajectoryDebug);
  return;
}

// `dynamic_atexit_destructor_for_'LogMotionTrajectory'' @ 150421a10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMotionTrajectory__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMotionTrajectory);
  return;
}

