// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTasks
// Functions: 131

// ResourceDescriptions'' @ 1410aeb20

void __cdecl `dynamic_initializer_for_'UGameplayTaskResource::ResourceDescriptions__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UGameplayTaskResource::ResourceDescriptions__);
  return;
}

// `dynamic_initializer_for_'ClassNameToIDMap'' @ 1410aeb40

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__ClassNameToIDMap__(void)

{
  atexit(_dynamic_atexit_destructor_for__ClassNameToIDMap__);
  return;
}

// `dynamic_initializer_for_'LogGameplayTasks'' @ 1410aeb60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogGameplayTasks__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogGameplayTasks,L"LogGameplayTasks",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogGameplayTasks__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantGameplayTasks'' @ 1410aeba0

void __cdecl _dynamic_initializer_for__ModuleRegistrantGameplayTasks__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "GameplayTasks";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"GameplayTasks",0xd);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FGameplayTasksModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TickGameplayTasks'' @ 1410aebf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TickGameplayTasks__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TickGameplayTasks == (FThreadSafeStaticStat<FStat_STAT_TickGameplayTasks>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TickGameplayTasks");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TickGameplayTasks,*pFVar1,
               L"TickGameplayTasks","STATGROUP_GameplayTasks","STATCAT_Advanced",L"GameplayTasks",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h__Script_GameplayTasks_1457824091'' @ 1410aec80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h__Script_GameplayTasks_1457824091__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayTasks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h__Script_GameplayTasks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskResource_h__Script_GameplayTasks_1598536257'' @ 1410aecc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskResource_h__Script_GameplayTasks_1598536257__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayTasks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskResource_h__Script_GameplayTasks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h__Script_GameplayTasks_3224412'' @ 1410aed00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h__Script_GameplayTasks_3224412__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayTasks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h__Script_GameplayTasks_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h__Script_GameplayTasks_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h__Script_GameplayTasks_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h__Script_GameplayTasks_1007963688'' @ 1410aed50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h__Script_GameplayTasks_1007963688__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayTasks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h__Script_GameplayTasks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h__Script_GameplayTasks_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_ClaimResource_h__Script_GameplayTasks_727429764'' @ 1410aeda0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_ClaimResource_h__Script_GameplayTasks_727429764__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayTasks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_ClaimResource_h__Script_GameplayTasks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_SpawnActor_h__Script_GameplayTasks_1287401324'' @ 1410aede0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_SpawnActor_h__Script_GameplayTasks_1287401324__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayTasks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_SpawnActor_h__Script_GameplayTasks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_TimeLimitedExecution_h__Script_GameplayTasks_390786328'' @ 1410aee20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_TimeLimitedExecution_h__Script_GameplayTasks_390786328__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayTasks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_TimeLimitedExecution_h__Script_GameplayTasks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_WaitDelay_h__Script_GameplayTasks_3138253849'' @ 1410aee60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_WaitDelay_h__Script_GameplayTasks_3138253849__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayTasks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_WaitDelay_h__Script_GameplayTasks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_GameplayTasks'' @ 1410aeea0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_GameplayTasks__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xbdc2e40;
  local_res8[0].DeclarationsHash = 0xc2fa9f20;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_GameplayTasks,L"/Script/GameplayTasks",
             &Z_Registration_Info_UPackage__Script_GameplayTasks,local_res8);
  return;
}

// Z_Construct_UClass_UGameplayTaskOwnerInterface @ 146cea5a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGameplayTaskOwnerInterface(void)

{
  if (Z_Registration_Info_UClass_UGameplayTaskOwnerInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGameplayTaskOwnerInterface.OuterSingleton,
               &Z_Construct_UClass_UGameplayTaskOwnerInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGameplayTaskOwnerInterface.OuterSingleton;
}

// Z_Construct_UDelegateFunction_GameplayTasks_GameplayTaskSpawnActorDelegate__DelegateSignature @ 146cea5e0

UFunction * __cdecl
Z_Construct_UDelegateFunction_GameplayTasks_GameplayTaskSpawnActorDelegate__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_GameplayTasks_GameplayTaskSpawnActorDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature @ 146cea620

UFunction * __cdecl
Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature @ 146cea660

UFunction * __cdecl
Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_UGameplayTask_TimeLimitedExecution_TaskFinishDelegate__DelegateSignature @ 146cea6a0

UFunction * __cdecl
Z_Construct_UDelegateFunction_UGameplayTask_TimeLimitedExecution_TaskFinishDelegate__DelegateSignature
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_UGameplayTask_TimeLimitedExecution_TaskFinishDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_UGameplayTask_WaitDelay_TaskDelayDelegate__DelegateSignature @ 146cea6e0

UFunction * __cdecl
Z_Construct_UDelegateFunction_UGameplayTask_WaitDelay_TaskDelayDelegate__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_UGameplayTask_WaitDelay_TaskDelayDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UPackage__Script_GameplayTasks @ 146cea720

UPackage * __cdecl Z_Construct_UPackage__Script_GameplayTasks(void)

{
  if (Z_Registration_Info_UPackage__Script_GameplayTasks.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_GameplayTasks.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_GameplayTasks.OuterSingleton;
}

// Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister @ 146cea760

UClass * __cdecl Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayTaskOwnerInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTasks",L"GameplayTaskOwnerInterface",
               &Z_Registration_Info_UClass_UGameplayTaskOwnerInterface.InnerSingleton,
               UGameplayTaskOwnerInterface::StaticRegisterNativesUGameplayTaskOwnerInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGameplayTaskOwnerInterface>,
               InternalVTableHelperCtorCaller<UGameplayTaskOwnerInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayTaskOwnerInterface.InnerSingleton;
}

// Z_Construct_UClass_UGameplayTaskResource @ 146cea830

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGameplayTaskResource(void)

{
  if (Z_Registration_Info_UClass_UGameplayTaskResource.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGameplayTaskResource.OuterSingleton,
               &Z_Construct_UClass_UGameplayTaskResource_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGameplayTaskResource.OuterSingleton;
}

// NewProp_bManuallySetID_SetBit @ 146cea870

void __cdecl
Z_Construct_UClass_UGameplayTaskResource_Statics::NewProp_bManuallySetID_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x30) = *(uint *)((longlong)param_1 + 0x30) | 1;
  return;
}

// Z_Construct_UClass_UGameplayTask_NoRegister @ 146cea880

UClass * __cdecl Z_Construct_UClass_UGameplayTask_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayTask.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTasks",L"GameplayTask",
               &Z_Registration_Info_UClass_UGameplayTask.InnerSingleton,
               UGameplayTask::StaticRegisterNativesUGameplayTask,0x78,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Game",
               InternalConstructor<UGameplayTask>,InternalVTableHelperCtorCaller<UGameplayTask>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayTask.InnerSingleton;
}

// `scalar_deleting_destructor' @ 146ceaa20

void * __thiscall
IGameplayTasksModule::_scalar_deleting_destructor_(IGameplayTasksModule *this,uint param_1)

{
  *this = (IGameplayTasksModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ceaab0

void * __thiscall
FGameplayTasksModule::_scalar_deleting_destructor_(FGameplayTasksModule *this,uint param_1)

{
  *this = (FGameplayTasksModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UGameplayTask_ClaimResource_NoRegister @ 146ceaaf0

UClass * __cdecl Z_Construct_UClass_UGameplayTask_ClaimResource_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayTask_ClaimResource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTasks",L"GameplayTask_ClaimResource",
               &Z_Registration_Info_UClass_UGameplayTask_ClaimResource.InnerSingleton,
               UGameplayTask_ClaimResource::StaticRegisterNativesUGameplayTask_ClaimResource,0x78,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<UGameplayTask_ClaimResource>,
               InternalVTableHelperCtorCaller<UGameplayTask_ClaimResource>,local_res8,
               UGameplayTask::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayTask_ClaimResource.InnerSingleton;
}

// Z_Construct_UClass_UGameplayTask_ClaimResource @ 146ceac70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGameplayTask_ClaimResource(void)

{
  if (Z_Registration_Info_UClass_UGameplayTask_ClaimResource.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGameplayTask_ClaimResource.OuterSingleton,
               &Z_Construct_UClass_UGameplayTask_ClaimResource_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGameplayTask_ClaimResource.OuterSingleton;
}

// Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource @ 146ceacb0

UFunction * __cdecl Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources @ 146ceacf0

UFunction * __cdecl Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UGameplayTask_SpawnActor_NoRegister @ 146cead30

UClass * __cdecl Z_Construct_UClass_UGameplayTask_SpawnActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayTask_SpawnActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTasks",L"GameplayTask_SpawnActor",
               &Z_Registration_Info_UClass_UGameplayTask_SpawnActor.InnerSingleton,
               UGameplayTask_SpawnActor::StaticRegisterNativesUGameplayTask_SpawnActor,0xe0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<UGameplayTask_SpawnActor>,
               InternalVTableHelperCtorCaller<UGameplayTask_SpawnActor>,local_res8,
               UGameplayTask::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayTask_SpawnActor.InnerSingleton;
}

// Z_Construct_UClass_UGameplayTaskResource_NoRegister @ 146ceadf0

UClass * __cdecl Z_Construct_UClass_UGameplayTaskResource_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayTaskResource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTasks",L"GameplayTaskResource",
               &Z_Registration_Info_UClass_UGameplayTaskResource.InnerSingleton,
               UGameplayTaskResource::StaticRegisterNativesUGameplayTaskResource,0x38,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Game",
               InternalConstructor<UGameplayTaskResource>,
               InternalVTableHelperCtorCaller<UGameplayTaskResource>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayTaskResource.InnerSingleton;
}

// Z_Construct_UClass_UGameplayTask_SpawnActor @ 146ceb010

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGameplayTask_SpawnActor(void)

{
  if (Z_Registration_Info_UClass_UGameplayTask_SpawnActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGameplayTask_SpawnActor.OuterSingleton,
               &Z_Construct_UClass_UGameplayTask_SpawnActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGameplayTask_SpawnActor.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 146ceb050

void __cdecl
Z_Construct_UFunction_UGameplayTask_SpawnActor_BeginSpawningActor_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UGameplayTask_SpawnActor_BeginSpawningActor @ 146ceb060

UFunction * __cdecl Z_Construct_UFunction_UGameplayTask_SpawnActor_BeginSpawningActor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayTask_SpawnActor_BeginSpawningActor_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayTask_SpawnActor_FinishSpawningActor @ 146ceb0a0

UFunction * __cdecl Z_Construct_UFunction_UGameplayTask_SpawnActor_FinishSpawningActor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayTask_SpawnActor_FinishSpawningActor_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSpawnOnlyOnAuthority_SetBit @ 146ceb0e0

void __cdecl
Z_Construct_UFunction_UGameplayTask_SpawnActor_SpawnActor_Statics::
NewProp_bSpawnOnlyOnAuthority_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x48) = 1;
  return;
}

// Z_Construct_UFunction_UGameplayTask_SpawnActor_SpawnActor @ 146ceb1b0

UFunction * __cdecl Z_Construct_UFunction_UGameplayTask_SpawnActor_SpawnActor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayTask_SpawnActor_SpawnActor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UGameplayTask_TimeLimitedExecution @ 146ceb2b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGameplayTask_TimeLimitedExecution(void)

{
  if (Z_Registration_Info_UClass_UGameplayTask_TimeLimitedExecution.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGameplayTask_TimeLimitedExecution.OuterSingleton,
               &Z_Construct_UClass_UGameplayTask_TimeLimitedExecution_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGameplayTask_TimeLimitedExecution.OuterSingleton;
}

// Z_Construct_UClass_UGameplayTask_WaitDelay_NoRegister @ 146ceb2f0

UClass * __cdecl Z_Construct_UClass_UGameplayTask_WaitDelay_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayTask_WaitDelay.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTasks",L"GameplayTask_WaitDelay",
               &Z_Registration_Info_UClass_UGameplayTask_WaitDelay.InnerSingleton,
               UGameplayTask_WaitDelay::StaticRegisterNativesUGameplayTask_WaitDelay,0xa0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<UGameplayTask_WaitDelay>,
               InternalVTableHelperCtorCaller<UGameplayTask_WaitDelay>,local_res8,
               UGameplayTask::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayTask_WaitDelay.InnerSingleton;
}

// Z_Construct_UClass_UGameplayTask_WaitDelay @ 146ceb470

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGameplayTask_WaitDelay(void)

{
  if (Z_Registration_Info_UClass_UGameplayTask_WaitDelay.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGameplayTask_WaitDelay.OuterSingleton,
               &Z_Construct_UClass_UGameplayTask_WaitDelay_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGameplayTask_WaitDelay.OuterSingleton;
}

// Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay @ 146ceb4b0

UFunction * __cdecl Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UGameplayTasksComponent @ 146ceb4f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGameplayTasksComponent(void)

{
  if (Z_Registration_Info_UClass_UGameplayTasksComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGameplayTasksComponent.OuterSingleton,
               &Z_Construct_UClass_UGameplayTasksComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGameplayTasksComponent.OuterSingleton;
}

// Z_Construct_UEnum_GameplayTasks_EGameplayTaskRunResult @ 146ceb530

UEnum * __cdecl Z_Construct_UEnum_GameplayTasks_EGameplayTaskRunResult(void)

{
  if (Z_Registration_Info_UEnum_EGameplayTaskRunResult.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGameplayTaskRunResult.InnerSingleton,
               &Z_Construct_UEnum_GameplayTasks_EGameplayTaskRunResult_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EGameplayTaskRunResult.InnerSingleton;
}

// EGameplayTaskRunResult_StaticEnum @ 146ceb570

UEnum * __cdecl EGameplayTaskRunResult_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGameplayTaskRunResult.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayTasks();
    Z_Registration_Info_UEnum_EGameplayTaskRunResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayTasks_EGameplayTaskRunResult,(UObject *)pUVar1,
                       L"EGameplayTaskRunResult");
  }
  return Z_Registration_Info_UEnum_EGameplayTaskRunResult.OuterSingleton;
}

// Z_Construct_UClass_UGameplayTask @ 146ceb5b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGameplayTask(void)

{
  if (Z_Registration_Info_UClass_UGameplayTask.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGameplayTask.OuterSingleton,
               &Z_Construct_UClass_UGameplayTask_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGameplayTask.OuterSingleton;
}

// Z_Construct_UEnum_GameplayTasks_ETaskResourceOverlapPolicy @ 146ceb5f0

UEnum * __cdecl Z_Construct_UEnum_GameplayTasks_ETaskResourceOverlapPolicy(void)

{
  if (Z_Registration_Info_UEnum_ETaskResourceOverlapPolicy.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETaskResourceOverlapPolicy.InnerSingleton,
               &Z_Construct_UEnum_GameplayTasks_ETaskResourceOverlapPolicy_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ETaskResourceOverlapPolicy.InnerSingleton;
}

// Z_Construct_UScriptStruct_FGameplayResourceSet @ 146ceb630

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGameplayResourceSet(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGameplayResourceSet.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGameplayResourceSet.InnerSingleton,
               &Z_Construct_UScriptStruct_FGameplayResourceSet_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGameplayResourceSet.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FGameplayResourceSet.InnerSingleton;
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

// EGameplayTaskState_StaticEnum @ 146ceb6b0

UEnum * __cdecl EGameplayTaskState_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGameplayTaskState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayTasks();
    Z_Registration_Info_UEnum_EGameplayTaskState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayTasks_EGameplayTaskState,(UObject *)pUVar1,
                       L"EGameplayTaskState");
  }
  return Z_Registration_Info_UEnum_EGameplayTaskState.OuterSingleton;
}

// ETaskResourceOverlapPolicy_StaticEnum @ 146ceb6f0

UEnum * __cdecl ETaskResourceOverlapPolicy_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETaskResourceOverlapPolicy.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayTasks();
    Z_Registration_Info_UEnum_ETaskResourceOverlapPolicy.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayTasks_ETaskResourceOverlapPolicy,(UObject *)pUVar1,
                       L"ETaskResourceOverlapPolicy");
  }
  return Z_Registration_Info_UEnum_ETaskResourceOverlapPolicy.OuterSingleton;
}

// NewStructOps @ 146ceb730

void * __cdecl Z_Construct_UScriptStruct_FGameplayResourceSet_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 2;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGameplayResourceSet,&UE::CoreUObject::Private::Construct<FGameplayResourceSet>,&UE::CoreUObject::Private::ConstructForTests<FGameplayResourceSet>,&UE::CoreUObject::Private::Destruct<FGameplayResourceSet>,&UE::CoreUObject::Private::Copy<FGameplayResourceSet>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 2;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask @ 146ceb770

UFunction * __cdecl Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks @ 146ceb7b0

UFunction * __cdecl Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayTask_EndTask @ 146ceb7f0

UFunction * __cdecl Z_Construct_UFunction_UGameplayTask_EndTask(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UGameplayTask_EndTask_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayTask_ReadyForActivation @ 146ceb830

UFunction * __cdecl Z_Construct_UFunction_UGameplayTask_ReadyForActivation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayTask_ReadyForActivation_Statics::FuncParams);
  }
  return ReturnFunction;
}

// ConstructItems<UGameplayTask_*,TObjectPtr<UGameplayTask>,int> @ 146ceb8e0

void __cdecl
ConstructItems<UGameplayTask_*,TObjectPtr<UGameplayTask>,int>
          (void *param_1,TObjectPtr<UGameplayTask> *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FObjectPtr_u_0 *)(lVar1 + (longlong)param_2) = *(FObjectPtr_u_0 *)param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TObjectPtr<UGameplayTask>,UGameplayTask_*,int> @ 146ceb910

void __cdecl
ConstructItems<TObjectPtr<UGameplayTask>,UGameplayTask_*,int>
          (void *param_1,UGameplayTask **param_2,int param_3)

{
  UGameplayTask *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      pUVar1 = *param_2;
      *(UGameplayTask **)(lVar2 + (longlong)param_2) = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UGameplayTask *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TWeakObjectPtr<UGameplayTask,FWeakObjectPtr>,TObjectPtr<UGameplayTask>,int> @ 146ceb970

void __cdecl
ConstructItems<TWeakObjectPtr<UGameplayTask,FWeakObjectPtr>,TObjectPtr<UGameplayTask>,int>
          (void *param_1,TObjectPtr<UGameplayTask> *param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  UObject *local_res20;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      pUVar1 = *(UObject **)(lVar2 + (longlong)param_1);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar1 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar1);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar1);
        }
      }
      ((FWeakObjectPtr *)param_1)->ObjectIndex = 0;
      ((FWeakObjectPtr *)param_1)->ObjectSerialNumber = 0;
      local_res20 = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      FWeakObjectPtr::operator=(param_1,(FObjectPtr)&local_res20);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FVisualLogStatusCategory,FVisualLogStatusCategory,int> @ 146ceba30

void __cdecl
ConstructItems<FVisualLogStatusCategory,FVisualLogStatusCategory,int>
          (void *param_1,FVisualLogStatusCategory *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      FVisualLogStatusCategory::FVisualLogStatusCategory
                ((FVisualLogStatusCategory *)(lVar1 + (longlong)param_2),param_2);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSubclassOf<UGameplayTaskResource>,TSubclassOf<UGameplayTaskResource>,int> @ 146ceba80

void __cdecl
ConstructItems<TSubclassOf<UGameplayTaskResource>,TSubclassOf<UGameplayTaskResource>,int>
          (void *param_1,TSubclassOf<UGameplayTaskResource> *param_2,int param_3)

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

// DestructItems<FVisualLogStatusCategory,int> @ 146cebb30

void __cdecl
DestructItems<FVisualLogStatusCategory,int>(FVisualLogStatusCategory *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->Category;
    do {
      TArray<FVisualLogStatusCategory,TSizedDefaultAllocator<32>_>::
      ~TArray<FVisualLogStatusCategory,TSizedDefaultAllocator<32>_>
                ((TArray<FVisualLogStatusCategory,TSizedDefaultAllocator<32>_> *)
                 ((longlong)(pFVar2 + 1) + 8));
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<FString,int>
                ((FString *)
                 (((FVisualLogStatusCategory *)(pFVar2 + -1))->Data).AllocatorInstance.Data,
                 (((FVisualLogStatusCategory *)(pFVar2 + -1))->Data).ArrayNum);
      pFVar1 = (((FVisualLogStatusCategory *)(pFVar2 + -1))->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = (FString *)((longlong)(pFVar2 + 3) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// InternalConstructor<UGameplayTask> @ 146cebdc0

void __cdecl InternalConstructor<UGameplayTask>(FObjectInitializer *param_1)

{
  if ((UGameplayTask *)param_1->Obj != (UGameplayTask *)0x0) {
    UGameplayTask::UGameplayTask((UGameplayTask *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UGameplayTaskOwnerInterface> @ 146cebde0

void __cdecl InternalConstructor<UGameplayTaskOwnerInterface>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UGameplayTaskOwnerInterface__6B_;
  }
  return;
}

// InternalConstructor<UGameplayTaskResource> @ 146cebe10

void __cdecl InternalConstructor<UGameplayTaskResource>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(uint *)&this[1].field_0x8 = *(uint *)&this[1].field_0x8 & 0xfffffffe;
    *(undefined ***)this = &___7UGameplayTaskResource__6B_;
    *(undefined4 *)(this + 1) = 0xffffffff;
    this[1].field_0x4 = 0xff;
  }
  return;
}

// InternalConstructor<UGameplayTask_ClaimResource> @ 146cebe50

void __cdecl InternalConstructor<UGameplayTask_ClaimResource>(FObjectInitializer *param_1)

{
  UGameplayTask *this;
  
  this = (UGameplayTask *)param_1->Obj;
  if (this != (UGameplayTask *)0x0) {
    UGameplayTask::UGameplayTask(this,param_1);
    this->_padding_ = (longlong)&UGameplayTask_ClaimResource::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UGameplayTask_ClaimResource::_vftable__for__IGameplayTaskOwnerInterface__;
  }
  return;
}

// InternalConstructor<UGameplayTask_SpawnActor> @ 146cebe90

void __cdecl InternalConstructor<UGameplayTask_SpawnActor>(FObjectInitializer *param_1)

{
  UGameplayTask *this;
  
  this = (UGameplayTask *)param_1->Obj;
  if (this != (UGameplayTask *)0x0) {
    UGameplayTask::UGameplayTask(this,param_1);
    this->_padding_ = (longlong)&UGameplayTask_SpawnActor::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UGameplayTask_SpawnActor::_vftable__for__IGameplayTaskOwnerInterface__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].ChildTask.field0_0x0.DebugPtr = (UGameplayTask *)0x0;
  }
  return;
}

// InternalConstructor<UGameplayTask_TimeLimitedExecution> @ 146cebf00

void __cdecl InternalConstructor<UGameplayTask_TimeLimitedExecution>(FObjectInitializer *param_1)

{
  uint uVar1;
  UGameplayTask *this;
  
  this = (UGameplayTask *)param_1->Obj;
  if (this != (UGameplayTask *)0x0) {
    UGameplayTask::UGameplayTask(this,param_1);
    this->_padding_ = (longlong)&UGameplayTask_TimeLimitedExecution::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UGameplayTask_TimeLimitedExecution::_vftable__for__IGameplayTaskOwnerInterface__
    ;
    uVar1._0_2_ = this[1].RequiredResources;
    uVar1._2_2_ = this[1].ClaimedResources;
    this[1].RequiredResources = (FGameplayResourceSet)(short)(uVar1 & 0xfffffffc);
    this[1].ClaimedResources = (FGameplayResourceSet)(short)((uVar1 & 0xfffffffc) >> 0x10);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].InstanceName.ComparisonIndex = 0;
    this[1].InstanceName.Number = 0;
    this[1].Priority = '\0';
    this[1].TaskState = Uninitialized;
    this[1].ResourceOverlapPolicy = StartOnTop;
    *(undefined5 *)&this[1].field_0x3b = 0;
  }
  return;
}

// InternalConstructor<UGameplayTask_WaitDelay> @ 146cebf80

void __cdecl InternalConstructor<UGameplayTask_WaitDelay>(FObjectInitializer *param_1)

{
  UGameplayTask *this;
  
  this = (UGameplayTask *)param_1->Obj;
  if (this != (UGameplayTask *)0x0) {
    UGameplayTask::UGameplayTask(this,param_1);
    this->_padding_ = (longlong)&UGameplayTask_WaitDelay::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UGameplayTask_WaitDelay::_vftable__for__IGameplayTaskOwnerInterface__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UGameplayTasksComponent> @ 146cebfe0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UGameplayTasksComponent>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  UActorComponent *this;
  
  this = (UActorComponent *)param_1->Obj;
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    this->_padding_ = (longlong)&UGameplayTasksComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UGameplayTasksComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UGameplayTasksComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ =
         (longlong)&UGameplayTasksComponent::_vftable__for__IGameplayTaskOwnerInterface__;
    this[1]._padding_ =
         (longlong)&UGameplayTasksComponent::_vftable__for__IVisualLoggerDebugSnapshotInterface__;
    *(undefined2 *)((longlong)&this[1]._padding_ + 6) = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick.Target = (UActorComponent *)0x0;
    this[1].ComponentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].ComponentTags.ArrayNum = 0;
    this[1].ComponentTags.ArrayMax = 0;
    this[1].AssetUserData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].AssetUserData.ArrayNum = 0;
    this[1].AssetUserData.ArrayMax = 0;
    *(undefined8 *)&this[1].field_0x88 = 0;
    pbVar1 = (byte *)((longlong)&(this->PrimaryComponentTick)._padding_ + 2);
    *pbVar1 = *pbVar1 & 0xfb;
    pbVar1 = (byte *)((longlong)&(this->PrimaryComponentTick)._padding_ + 2);
    *pbVar1 = *pbVar1 | 2;
    *(undefined1 *)&(this->PrimaryComponentTick)._padding_ = 2;
    UActorComponent::SetIsReplicatedByDefault(this,true);
    pbVar1 = (byte *)((longlong)&this[1]._padding_ + 4);
    *pbVar1 = *pbVar1 & 0xfe;
    *(undefined1 *)((longlong)&this[1]._padding_ + 5) = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UGameplayTask> @ 146cec0e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGameplayTask>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGameplayTask::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UGameplayTask::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UGameplayTask::_vftable__for__IGameplayTaskOwnerInterface__;
    *(undefined4 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGameplayTaskOwnerInterface> @ 146cec1c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UGameplayTaskOwnerInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGameplayTaskOwnerInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UGameplayTaskOwnerInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGameplayTaskResource> @ 146cec270

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGameplayTaskResource>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGameplayTaskResource::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UGameplayTaskResource__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGameplayTask_ClaimResource> @ 146cec320

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UGameplayTask_ClaimResource>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGameplayTask_ClaimResource::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UGameplayTask_ClaimResource::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UGameplayTask_ClaimResource::_vftable__for__IGameplayTaskOwnerInterface__;
    *(undefined4 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGameplayTask_SpawnActor> @ 146cec400

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGameplayTask_SpawnActor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGameplayTask_SpawnActor::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UGameplayTask_SpawnActor::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UGameplayTask_SpawnActor::_vftable__for__IGameplayTaskOwnerInterface__;
    *(undefined4 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[5].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGameplayTask_TimeLimitedExecution> @ 146cec510

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UGameplayTask_TimeLimitedExecution>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGameplayTask_TimeLimitedExecution::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UGameplayTask_TimeLimitedExecution::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UGameplayTask_TimeLimitedExecution::_vftable__for__IGameplayTaskOwnerInterface__;
    *(undefined4 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGameplayTask_WaitDelay> @ 146cec610

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGameplayTask_WaitDelay>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGameplayTask_WaitDelay::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UGameplayTask_WaitDelay::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UGameplayTask_WaitDelay::_vftable__for__IGameplayTaskOwnerInterface__;
    *(undefined4 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGameplayTasksComponent> @ 146cec700

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

UObject * __cdecl InternalVTableHelperCtorCaller<UGameplayTasksComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UActorComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGameplayTasksComponent::GetPrivateStaticClass();
  this = (UActorComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    *(undefined2 *)((longlong)&this[1]._padding_ + 6) = 0;
    this->_padding_ = (longlong)&UGameplayTasksComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UGameplayTasksComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UGameplayTasksComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ =
         (longlong)&UGameplayTasksComponent::_vftable__for__IGameplayTaskOwnerInterface__;
    this[1]._padding_ =
         (longlong)&UGameplayTasksComponent::_vftable__for__IVisualLoggerDebugSnapshotInterface__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick.Target = (UActorComponent *)0x0;
    this[1].ComponentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].ComponentTags.ArrayNum = 0;
    this[1].ComponentTags.ArrayMax = 0;
    this[1].AssetUserData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].AssetUserData.ArrayNum = 0;
    this[1].AssetUserData.ArrayMax = 0;
    *(undefined8 *)&this[1].field_0x88 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IsObjectPtrEqual<UGameplayTask,UGameplayTask_*,0> @ 146cec850

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UGameplayTask,UGameplayTask_*,0>
          (TObjectPtr<UGameplayTask> *param_1,UGameplayTask **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UGameplayTask *)0x0) {
    return *param_2 == (UGameplayTask *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UGameplayTask,UGameplayTask_const_*,0> @ 146cec870

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UGameplayTask,UGameplayTask_const_*,0>
          (TObjectPtr<UGameplayTask> *param_1,UGameplayTask **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UGameplayTask *)0x0) {
    return *param_2 == (UGameplayTask *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// MutableView<TObjectPtr<AActor>_> @ 146cec890

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TMutableView<TObjectPtr<AActor>_> __cdecl
MutableView<TObjectPtr<AActor>_>(TObjectPtr<AActor> *param_1)

{
  TObjectPtr<AActor>_u_0 in_RDX;
  
  param_1->field0_0x0 = in_RDX;
  return (TMutableView<TObjectPtr<AActor>_>)(AActor **)param_1;
}

// NewObject<UGameplayTask_ClaimResource> @ 146cec8a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGameplayTask_ClaimResource * __cdecl NewObject<UGameplayTask_ClaimResource>(UObject *param_1)

{
  UClass *pUVar1;
  UGameplayTask_ClaimResource *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UGameplayTask_ClaimResource::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UGameplayTask_ClaimResource *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UGameplayTask_SpawnActor> @ 146cec940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGameplayTask_SpawnActor * __cdecl NewObject<UGameplayTask_SpawnActor>(UObject *param_1)

{
  UClass *pUVar1;
  UGameplayTask_SpawnActor *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UGameplayTask_SpawnActor::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UGameplayTask_SpawnActor *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UGameplayTask_TimeLimitedExecution> @ 146cec9e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGameplayTask_TimeLimitedExecution * __cdecl
NewObject<UGameplayTask_TimeLimitedExecution>(UObject *param_1)

{
  UClass *pUVar1;
  UGameplayTask_TimeLimitedExecution *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UGameplayTask_TimeLimitedExecution::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UGameplayTask_TimeLimitedExecution *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UGameplayTask_WaitDelay> @ 146ceca80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGameplayTask_WaitDelay * __cdecl NewObject<UGameplayTask_WaitDelay>(UObject *param_1)

{
  UClass *pUVar1;
  UGameplayTask_WaitDelay *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UGameplayTask_WaitDelay::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UGameplayTask_WaitDelay *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// ObjectPtrWrap<AActor_*,TObjectPtr<AActor>_> @ 146cecc60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TObjectPtr<AActor> * __cdecl ObjectPtrWrap<AActor_*,TObjectPtr<AActor>_>(AActor **param_1)

{
  return (TObjectPtr<AActor> *)param_1;
}

// StaticEnum<enum_EGameplayTaskRunResult> @ 146ced640

UEnum * __cdecl StaticEnum<enum_EGameplayTaskRunResult>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGameplayTaskRunResult.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayTasks();
    Z_Registration_Info_UEnum_EGameplayTaskRunResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayTasks_EGameplayTaskRunResult,(UObject *)pUVar1,
                       L"EGameplayTaskRunResult");
  }
  return Z_Registration_Info_UEnum_EGameplayTaskRunResult.OuterSingleton;
}

// StaticEnum<enum_EGameplayTaskState> @ 146ced680

UEnum * __cdecl StaticEnum<enum_EGameplayTaskState>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGameplayTaskState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayTasks();
    Z_Registration_Info_UEnum_EGameplayTaskState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayTasks_EGameplayTaskState,(UObject *)pUVar1,
                       L"EGameplayTaskState");
  }
  return Z_Registration_Info_UEnum_EGameplayTaskState.OuterSingleton;
}

// StaticEnum<enum_ETaskResourceOverlapPolicy> @ 146ced6c0

UEnum * __cdecl StaticEnum<enum_ETaskResourceOverlapPolicy>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETaskResourceOverlapPolicy.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayTasks();
    Z_Registration_Info_UEnum_ETaskResourceOverlapPolicy.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayTasks_ETaskResourceOverlapPolicy,(UObject *)pUVar1,
                       L"ETaskResourceOverlapPolicy");
  }
  return Z_Registration_Info_UEnum_ETaskResourceOverlapPolicy.OuterSingleton;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146cee430

/* [thunk]:public: virtual void * __ptr64 __cdecl UGameplayTask::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UGameplayTask::_vector_deleting_destructor__adjustor_40__(UGameplayTask *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UGameplayTask *)&this[-1].TaskOwner.InterfaceInstance,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146cee440

/* [thunk]:public: virtual void * __ptr64 __cdecl UGameplayTask_ClaimResource::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UGameplayTask_ClaimResource::_vector_deleting_destructor__adjustor_40__
          (UGameplayTask_ClaimResource *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UGameplayTask_ClaimResource *)&this[-1].field_0x50,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146cee450

/* [thunk]:public: virtual void * __ptr64 __cdecl UGameplayTask_SpawnActor::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UGameplayTask_SpawnActor::_vector_deleting_destructor__adjustor_40__
          (UGameplayTask_SpawnActor *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UGameplayTask_SpawnActor *)
                      ((longlong)&this[-1].CachedSpawnLocation.field0_0x0 + 0x10),param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146cee460

/* [thunk]:public: virtual void * __ptr64 __cdecl UGameplayTask_TimeLimitedExecution::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UGameplayTask_TimeLimitedExecution::_vector_deleting_destructor__adjustor_40__
          (UGameplayTask_TimeLimitedExecution *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UGameplayTask_TimeLimitedExecution *)&this[-1].OnTimeExpired.field_0x8,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146cee470

/* [thunk]:public: virtual void * __ptr64 __cdecl UGameplayTask_WaitDelay::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UGameplayTask_WaitDelay::_vector_deleting_destructor__adjustor_40__
          (UGameplayTask_WaitDelay *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UGameplayTask_WaitDelay *)&this[-1].OnFinish,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146cee480

/* [thunk]:public: virtual void * __ptr64 __cdecl UGameplayTasksComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UGameplayTasksComponent::_vector_deleting_destructor__adjustor_40__
          (UGameplayTasksComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UGameplayTasksComponent *)&this[-1].OnClaimedResourcesChange.field_0x10,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{192}' @ 146cee490

/* [thunk]:public: virtual void * __ptr64 __cdecl UGameplayTasksComponent::`vector deleting
   destructor'`adjustor{192}' (unsigned int) __ptr64 */

void * __thiscall
UGameplayTasksComponent::_vector_deleting_destructor__adjustor_192__
          (UGameplayTasksComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UGameplayTasksComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{200}' @ 146cee4a4

/* [thunk]:public: virtual void * __ptr64 __cdecl UGameplayTasksComponent::`vector deleting
   destructor'`adjustor{200}' (unsigned int) __ptr64 */

void * __thiscall
UGameplayTasksComponent::_vector_deleting_destructor__adjustor_200__
          (UGameplayTasksComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UGameplayTasksComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 146cee4c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameplayTask_TimeLimitedExecution,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UGameplayTask_TimeLimitedExecution,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cee4f0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameplayTask_WaitDelay,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UGameplayTask_WaitDelay,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cee520

void * __thiscall
IGameplayTaskOwnerInterface::_scalar_deleting_destructor_
          (IGameplayTaskOwnerInterface *this,uint param_1)

{
  *this = (IGameplayTaskOwnerInterface)&___7IGameplayTaskOwnerInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cee560

void * __thiscall
IVisualLoggerDebugSnapshotInterface::_scalar_deleting_destructor_
          (IVisualLoggerDebugSnapshotInterface *this,uint param_1)

{
  *this = (IVisualLoggerDebugSnapshotInterface)&___7IVisualLoggerDebugSnapshotInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cee5a0

void * __thiscall UGameplayTask::_scalar_deleting_destructor_(UGameplayTask *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  pFVar1 = (this->DebugDescription).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IGameplayTaskOwnerInterface__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cee630

void * __thiscall
UGameplayTaskOwnerInterface::_scalar_deleting_destructor_
          (UGameplayTaskOwnerInterface *this,uint param_1)

{
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cee690

void * __thiscall
UGameplayTaskResource::_scalar_deleting_destructor_(UGameplayTaskResource *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UGameplayTaskResource__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cee6f0

void * __thiscall
UGameplayTask_ClaimResource::_scalar_deleting_destructor_
          (UGameplayTask_ClaimResource *this,uint param_1)

{
  *(undefined ***)this = &UGameplayTask::_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &UGameplayTask::_vftable__for__IGameplayTaskOwnerInterface__;
  if (*(void **)&this->field_0x68 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x68);
  }
  *(undefined ***)&this->field_0x28 = &___7IGameplayTaskOwnerInterface__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cee780

void * __thiscall
UGameplayTask_SpawnActor::_scalar_deleting_destructor_(UGameplayTask_SpawnActor *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  pvVar1 = *(void **)&(this->DidNotSpawn).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->DidNotSpawn);
  pvVar1 = *(void **)&(this->Success).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Success);
  this->_padding_ = (longlong)&UGameplayTask::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UGameplayTask::_vftable__for__IGameplayTaskOwnerInterface__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IGameplayTaskOwnerInterface__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cee860

void * __thiscall
UGameplayTask_TimeLimitedExecution::_scalar_deleting_destructor_
          (UGameplayTask_TimeLimitedExecution *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  pvVar1 = *(void **)&(this->OnTimeExpired).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTimeExpired);
  pvVar1 = *(void **)&(this->OnFinished).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFinished);
  this->_padding_ = (longlong)&UGameplayTask::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UGameplayTask::_vftable__for__IGameplayTaskOwnerInterface__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IGameplayTaskOwnerInterface__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cee940

void * __thiscall
UGameplayTask_WaitDelay::_scalar_deleting_destructor_(UGameplayTask_WaitDelay *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  pvVar1 = *(void **)&(this->OnFinish).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFinish);
  this->_padding_ = (longlong)&UGameplayTask::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UGameplayTask::_vftable__for__IGameplayTaskOwnerInterface__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IGameplayTaskOwnerInterface__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ceea10

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
UGameplayTasksComponent::_scalar_deleting_destructor_(UGameplayTasksComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = (longlong)&_vftable__for__IVisualLoggerDebugSnapshotInterface__;
  pFVar1 = (this->PreviousOnRepSimulatedTasks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SimulatedTasks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->OnClaimedResourcesChange).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClaimedResourcesChange);
  pFVar1 = (this->KnownTasks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TickingTasks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TaskEvents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TaskPriorityQueue).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IVisualLoggerDebugSnapshotInterface__6B_;
  this->_padding_ = (longlong)&___7IGameplayTaskOwnerInterface__6B_;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x150);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeGameplayTask @ 146cf1160

void __cdecl EmptyLinkFunctionForGeneratedCodeGameplayTask(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGameplayTaskOwnerInterface @ 146cf1170

void __cdecl EmptyLinkFunctionForGeneratedCodeGameplayTaskOwnerInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGameplayTaskResource @ 146cf1180

void __cdecl EmptyLinkFunctionForGeneratedCodeGameplayTaskResource(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGameplayTask_ClaimResource @ 146cf1190

void __cdecl EmptyLinkFunctionForGeneratedCodeGameplayTask_ClaimResource(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGameplayTask_SpawnActor @ 146cf11a0

void __cdecl EmptyLinkFunctionForGeneratedCodeGameplayTask_SpawnActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGameplayTask_TimeLimitedExecution @ 146cf11b0

void __cdecl EmptyLinkFunctionForGeneratedCodeGameplayTask_TimeLimitedExecution(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGameplayTask_WaitDelay @ 146cf11c0

void __cdecl EmptyLinkFunctionForGeneratedCodeGameplayTask_WaitDelay(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGameplayTasksComponent @ 146cf11d0

void __cdecl EmptyLinkFunctionForGeneratedCodeGameplayTasksComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGameplayTasks_init @ 146cf11e0

void __cdecl EmptyLinkFunctionForGeneratedCodeGameplayTasks_init(void)

{
  return;
}

// FGameplayTaskSpawnActorDelegate_DelegateWrapper @ 146cf18f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FGameplayTaskSpawnActorDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,AActor *param_2)

{
  AActor *local_res10 [3];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FOnClaimedResourcesChangeSignature_DelegateWrapper @ 146cf1920

void __cdecl
FOnClaimedResourcesChangeSignature_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          FGameplayResourceSet param_2,FGameplayResourceSet param_3)

{
  ushort local_res10;
  ushort local_res12;
  
  local_res10 = param_2.Flags;
  local_res12 = param_3.Flags;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_res10);
  return;
}

// Z_Construct_UClass_UGameplayTask_TimeLimitedExecution_NoRegister @ 146cf8f50

UClass * __cdecl Z_Construct_UClass_UGameplayTask_TimeLimitedExecution_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayTask_TimeLimitedExecution.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTasks",L"GameplayTask_TimeLimitedExecution",
               &Z_Registration_Info_UClass_UGameplayTask_TimeLimitedExecution.InnerSingleton,
               UGameplayTask_TimeLimitedExecution::
               StaticRegisterNativesUGameplayTask_TimeLimitedExecution,0xc0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<UGameplayTask_TimeLimitedExecution>,
               InternalVTableHelperCtorCaller<UGameplayTask_TimeLimitedExecution>,local_res8,
               UGameplayTask::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayTask_TimeLimitedExecution.InnerSingleton;
}

// Z_Construct_UClass_UGameplayTasksComponent_NoRegister @ 146cf9010

UClass * __cdecl Z_Construct_UClass_UGameplayTasksComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayTasksComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTasks",L"GameplayTasksComponent",
               &Z_Registration_Info_UClass_UGameplayTasksComponent.InnerSingleton,
               UGameplayTasksComponent::StaticRegisterNativesUGameplayTasksComponent,0x150,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UGameplayTasksComponent>,
               InternalVTableHelperCtorCaller<UGameplayTasksComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayTasksComponent.InnerSingleton;
}

// Z_Construct_UEnum_GameplayTasks_EGameplayTaskState @ 146cf90d0

UEnum * __cdecl Z_Construct_UEnum_GameplayTasks_EGameplayTaskState(void)

{
  if (Z_Registration_Info_UEnum_EGameplayTaskState.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGameplayTaskState.InnerSingleton,
               &Z_Construct_UEnum_GameplayTasks_EGameplayTaskState_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EGameplayTaskState.InnerSingleton;
}

// IMPLEMENT_MODULE_GameplayTasks @ 146cfa130

void __cdecl IMPLEMENT_MODULE_GameplayTasks(void)

{
  return;
}

// ResourceDescriptions'' @ 1503e03d0

void __cdecl `dynamic_atexit_destructor_for_'UGameplayTaskResource::ResourceDescriptions__(void)

{
  DestructItems<FString,int>
            ((FString *)UGameplayTaskResource::ResourceDescriptions.AllocatorInstance.Data,
             UGameplayTaskResource::ResourceDescriptions.ArrayNum);
  if (UGameplayTaskResource::ResourceDescriptions.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(UGameplayTaskResource::ResourceDescriptions.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'CategoryName'' @ 1503e0410

void __cdecl
`UGameplayTasksComponent::DescribeSelfToVisLog'::__l2::
_dynamic_atexit_destructor_for__CategoryName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = CategoryName.Data.AllocatorInstance.Data;
  if (CategoryName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (CategoryName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'ClassNameToIDMap'' @ 1503e0430

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__ClassNameToIDMap__(void)

{
  ClassNameToIDMap._72_4_ = 0;
  if (ClassNameToIDMap._64_8_ != 0) {
    FMemory::Free((void *)ClassNameToIDMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,signed_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,signed_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,signed_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&ClassNameToIDMap);
  return;
}

// `dynamic_atexit_destructor_for_'LocalTickingTasks'' @ 1503e0470

void __cdecl
`UGameplayTasksComponent::TickComponent'::__l9::_dynamic_atexit_destructor_for__LocalTickingTasks__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = LocalTickingTasks.AllocatorInstance.Data;
  if (LocalTickingTasks.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (LocalTickingTasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'LogGameplayTasks'' @ 1503e0490

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogGameplayTasks__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogGameplayTasks);
  return;
}

// `dynamic_atexit_destructor_for_'OtherTasksName'' @ 1503e04b0

void __cdecl
`UGameplayTasksComponent::DescribeSelfToVisLog'::__l2::
_dynamic_atexit_destructor_for__OtherTasksName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OtherTasksName.Data.AllocatorInstance.Data;
  if (OtherTasksName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (OtherTasksName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'PriorityQueueName'' @ 1503e04d0

void __cdecl
`UGameplayTasksComponent::DescribeSelfToVisLog'::__l2::
_dynamic_atexit_destructor_for__PriorityQueueName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = PriorityQueueName.Data.AllocatorInstance.Data;
  if (PriorityQueueName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (PriorityQueueName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

