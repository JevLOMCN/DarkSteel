// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ClothSysRuntimeIntrfc
// Functions: 117

// FeatureName'' @ 140f944d0

void __cdecl `dynamic_initializer_for_'IClothingSimulationFactoryClassProvider::FeatureName__(void)

{
  ::FName::FName(&IClothingSimulationFactoryClassProvider::FeatureName,
                 L"ClothingSimulationFactoryClassProvider");
  return;
}

// `dynamic_initializer_for_'BoneAttributeNamespace'' @ 140f944f0

void __cdecl UE::Anim::_dynamic_initializer_for__BoneAttributeNamespace__(void)

{
  ::FName::FName(&BoneAttributeNamespace,"bone");
  return;
}

// `dynamic_initializer_for_'CVarClothResetAfterTeleport'' @ 140f94510

void __cdecl _dynamic_initializer_for__CVarClothResetAfterTeleport__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarClothResetAfterTeleport,L"p.Cloth.ResetAfterTeleport",local_res8,
             L"Require p.Cloth.TeleportOverride. Reset the clothing after moving the clothing position (called teleport).\n Default: true."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarClothResetAfterTeleport__);
  return;
}

// `dynamic_initializer_for_'CVarClothTeleportDistanceThreshold'' @ 140f94560

void __cdecl _dynamic_initializer_for__CVarClothTeleportDistanceThreshold__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 300.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarClothTeleportDistanceThreshold,L"p.Cloth.TeleportDistanceThreshold",local_res8,
             L"Require p.Cloth.TeleportOverride. Conduct teleportation if the character\'s movement is greater than this threshold in 1 frame.\n Zero or negative values will skip the check.\n Default: 300."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarClothTeleportDistanceThreshold__);
  return;
}

// `dynamic_initializer_for_'CVarClothTeleportOverride'' @ 140f945b0

void __cdecl _dynamic_initializer_for__CVarClothTeleportOverride__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarClothTeleportOverride,L"p.Cloth.TeleportOverride",local_res8,
             L"Force console variable teleport override values over skeletal mesh properties.\n Default: false."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarClothTeleportOverride__);
  return;
}

// `dynamic_initializer_for_'CVarClothTeleportRotationThreshold'' @ 140f94600

void __cdecl _dynamic_initializer_for__CVarClothTeleportRotationThreshold__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarClothTeleportRotationThreshold,L"p.Cloth.TeleportRotationThreshold",local_res8,
             L"Require p.Cloth.TeleportOverride. Rotation threshold in degrees, ranging from 0 to 180.\n Conduct teleportation if the character\'s rotation is greater than this threshold in 1 frame.\n Zero or negative values will skip the check.\n Default 0."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarClothTeleportRotationThreshold__);
  return;
}

// `dynamic_initializer_for_'CVarDefaultClothingSimulationFactoryClass'' @ 140f94650

void __cdecl
ClothingSimulationFactoryConsoleVariables::
_dynamic_initializer_for__CVarDefaultClothingSimulationFactoryClass__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"ChaosClothingSimulationFactory");
  TAutoConsoleVariable<FString>::TAutoConsoleVariable<FString>
            (&CVarDefaultClothingSimulationFactoryClass,
             L"p.Cloth.DefaultClothingSimulationFactoryClass",&local_18,
             L"The class name of the default clothing simulation factory.\nKnown providers are:\nChaosClothingSimulationFactory\n"
             ,1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__CVarDefaultClothingSimulationFactoryClass__);
  return;
}

// `dynamic_initializer_for_'LogClothingAsset'' @ 140f946c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogClothingAsset__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogClothingAsset,L"LogClothingAsset",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogClothingAsset__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantClothingSystemRuntimeInterface'' @ 140f94700

void __cdecl _dynamic_initializer_for__ModuleRegistrantClothingSystemRuntimeInterface__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "ClothingSystemRuntimeInterface";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"ClothingSystemRuntimeInterface",0x1e);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FClothingSystemRuntimeInterfaceModule>::
             InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothCollisionData_h__Script_ClothingSystemRuntimeInterface_1318333122'' @ 140f94750

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothCollisionData_h__Script_ClothingSystemRuntimeInterface_1318333122__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ClothingSystemRuntimeInterface",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothCollisionData_h__Script_ClothingSystemRuntimeInterface_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothCollisionPrim_h__Script_ClothingSystemRuntimeInterface_1308196465'' @ 140f94790

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothCollisionPrim_h__Script_ClothingSystemRuntimeInterface_1308196465__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ClothingSystemRuntimeInterface",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothCollisionPrim_h__Script_ClothingSystemRuntimeInterface_Statics
             ::ScriptStructInfo,5,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothConfigBase_h__Script_ClothingSystemRuntimeInterface_1153049869'' @ 140f947d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothConfigBase_h__Script_ClothingSystemRuntimeInterface_1153049869__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ClothingSystemRuntimeInterface",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothConfigBase_h__Script_ClothingSystemRuntimeInterface_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothPhysicalMeshDataBase_Legacy_h__Script_ClothingSystemRuntimeInterface_424945564'' @ 140f94810

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothPhysicalMeshDataBase_Legacy_h__Script_ClothingSystemRuntimeInterface_424945564__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ClothingSystemRuntimeInterface",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothPhysicalMeshDataBase_Legacy_h__Script_ClothingSystemRuntimeInterface_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothVertBoneData_h__Script_ClothingSystemRuntimeInterface_665218538'' @ 140f94850

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothVertBoneData_h__Script_ClothingSystemRuntimeInterface_665218538__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ClothingSystemRuntimeInterface",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothVertBoneData_h__Script_ClothingSystemRuntimeInterface_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingAssetBase_h__Script_ClothingSystemRuntimeInterface_1310550493'' @ 140f94890

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingAssetBase_h__Script_ClothingSystemRuntimeInterface_1310550493__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ClothingSystemRuntimeInterface",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingAssetBase_h__Script_ClothingSystemRuntimeInterface_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationFactory_h__Script_ClothingSystemRuntimeInterface_1430688558'' @ 140f948d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationFactory_h__Script_ClothingSystemRuntimeInterface_1430688558__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ClothingSystemRuntimeInterface",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationFactory_h__Script_ClothingSystemRuntimeInterface_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInstance_h__Script_ClothingSystemRuntimeInterface_333855859'' @ 140f94910

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInstance_h__Script_ClothingSystemRuntimeInterface_333855859__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ClothingSystemRuntimeInterface",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInstance_h__Script_ClothingSystemRuntimeInterface_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h__Script_ClothingSystemRuntimeInterface_3983638088'' @ 140f94950

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h__Script_ClothingSystemRuntimeInterface_3983638088__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ClothingSystemRuntimeInterface",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h__Script_ClothingSystemRuntimeInterface_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSystemRuntimeTypes_h__Script_ClothingSystemRuntimeInterface_759816867'' @ 140f94990

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSystemRuntimeTypes_h__Script_ClothingSystemRuntimeInterface_759816867__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ClothingSystemRuntimeInterface",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSystemRuntimeTypes_h__Script_ClothingSystemRuntimeInterface_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_ClothingSystemRuntimeInterface'' @ 140f949e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_ClothingSystemRuntimeInterface__
          (void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x32196d99;
  local_res8[0].DeclarationsHash = 0x5c1a932e;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface,
             L"/Script/ClothingSystemRuntimeInterface",
             &Z_Registration_Info_UPackage__Script_ClothingSystemRuntimeInterface,local_res8);
  return;
}

// Z_Construct_UFunction_UClothingSimulationInteractor_GetNumSubsteps @ 144644880

UFunction * __cdecl Z_Construct_UFunction_UClothingSimulationInteractor_GetNumSubsteps(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UClothingSimulationInteractor_GetNumSubsteps_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UClothingSimulationInteractor_GetSimulationTime @ 1446448c0

UFunction * __cdecl Z_Construct_UFunction_UClothingSimulationInteractor_GetSimulationTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UClothingSimulationInteractor_GetSimulationTime_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UClothingSimulationInteractor_PhysicsAssetUpdated @ 144644900

UFunction * __cdecl Z_Construct_UFunction_UClothingSimulationInteractor_PhysicsAssetUpdated(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UClothingSimulationInteractor_PhysicsAssetUpdated_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness @ 144644940

UFunction * __cdecl
Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UClothingSimulationInteractor_SetMaxNumIterations @ 144644980

UFunction * __cdecl Z_Construct_UFunction_UClothingSimulationInteractor_SetMaxNumIterations(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UClothingSimulationInteractor_SetMaxNumIterations_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UClothingSimulationInteractor_SetNumIterations @ 144644a70

UFunction * __cdecl Z_Construct_UFunction_UClothingSimulationInteractor_SetNumIterations(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UClothingSimulationInteractor_SetNumIterations_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UClothingSimulationInteractor_SetNumSubsteps @ 144644ab0

UFunction * __cdecl Z_Construct_UFunction_UClothingSimulationInteractor_SetNumSubsteps(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UClothingSimulationInteractor_SetNumSubsteps_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UClothingAssetBase @ 144644af0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UClothingAssetBase(void)

{
  if (Z_Registration_Info_UClass_UClothingAssetBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UClothingAssetBase.OuterSingleton,
               &Z_Construct_UClass_UClothingAssetBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UClothingAssetBase.OuterSingleton;
}

// Z_Construct_UClass_UClothingSimulationFactory_NoRegister @ 144644b30

UClass * __cdecl Z_Construct_UClass_UClothingSimulationFactory_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClothingSimulationFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ClothingSystemRuntimeInterface",L"ClothingSimulationFactory",
               &Z_Registration_Info_UClass_UClothingSimulationFactory.InnerSingleton,
               UClothingSimulationFactory::StaticRegisterNativesUClothingSimulationFactory,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UClothingSimulationFactory>,
               InternalVTableHelperCtorCaller<UClothingSimulationFactory>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClothingSimulationFactory.InnerSingleton;
}

// EClothingTeleportMode_StaticEnum @ 144644c90

UEnum * __cdecl EClothingTeleportMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EClothingTeleportMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
    Z_Registration_Info_UEnum_EClothingTeleportMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ClothingSystemRuntimeInterface_EClothingTeleportMode,
                       (UObject *)pUVar1,L"EClothingTeleportMode");
  }
  return Z_Registration_Info_UEnum_EClothingTeleportMode.OuterSingleton;
}

// Z_Construct_UClass_UClothingSimulationFactory @ 144644d80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UClothingSimulationFactory(void)

{
  if (Z_Registration_Info_UClass_UClothingSimulationFactory.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UClothingSimulationFactory.OuterSingleton,
               &Z_Construct_UClass_UClothingSimulationFactory_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UClothingSimulationFactory.OuterSingleton;
}

// Z_Construct_UScriptStruct_FClothCollisionPrim_Box @ 144645210

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FClothCollisionPrim_Box(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FClothCollisionPrim_Box.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FClothCollisionPrim_Box.InnerSingleton,
               &Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FClothCollisionPrim_Box.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FClothCollisionPrim_Box.InnerSingleton;
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

// Z_Construct_UScriptStruct_FClothCollisionPrim_Convex @ 144645290

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FClothCollisionPrim_Convex(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FClothCollisionPrim_Convex.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FClothCollisionPrim_Convex.InnerSingleton,
               &Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FClothCollisionPrim_Convex.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FClothCollisionPrim_Convex.InnerSingleton;
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

// Z_Construct_UScriptStruct_FClothCollisionPrim_ConvexFace @ 144645310

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FClothCollisionPrim_ConvexFace(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FClothCollisionPrim_ConvexFace.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FClothCollisionPrim_ConvexFace.InnerSingleton,
               &Z_Construct_UScriptStruct_FClothCollisionPrim_ConvexFace_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FClothCollisionPrim_ConvexFace.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FClothCollisionPrim_ConvexFace.InnerSingleton;
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

// Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere @ 144645390

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FClothCollisionPrim_Sphere.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FClothCollisionPrim_Sphere.InnerSingleton,
               &Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FClothCollisionPrim_Sphere.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FClothCollisionPrim_Sphere.InnerSingleton;
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

// Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection @ 144645410

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FClothCollisionPrim_SphereConnection.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FClothCollisionPrim_SphereConnection.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FClothCollisionPrim_SphereConnection.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FClothCollisionPrim_SphereConnection.InnerSingleton;
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

// Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface @ 144645490

UPackage * __cdecl Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface(void)

{
  if (Z_Registration_Info_UPackage__Script_ClothingSystemRuntimeInterface.OuterSingleton ==
      (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_ClothingSystemRuntimeInterface.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_ClothingSystemRuntimeInterface.OuterSingleton;
}

// NewStructOps @ 1446454d0

void * __cdecl Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FClothCollisionPrim_Sphere,&UE::CoreUObject::Private::Construct<FClothCollisionPrim_Sphere>,&UE::CoreUObject::Private::ConstructForTests<FClothCollisionPrim_Sphere>,&UE::CoreUObject::Private::Destruct<FClothCollisionPrim_Sphere>,&UE::CoreUObject::Private::Copy<FClothCollisionPrim_Sphere>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 144645510

void * __cdecl
Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FClothCollisionPrim_SphereConnection,&UE::CoreUObject::Private::Construct<FClothCollisionPrim_SphereConnection>,&UE::CoreUObject::Private::ConstructForTests<FClothCollisionPrim_SphereConnection>,&UE::CoreUObject::Private::Destruct<FClothCollisionPrim_SphereConnection>,&UE::CoreUObject::Private::Copy<FClothCollisionPrim_SphereConnection>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 144645550

void * __cdecl Z_Construct_UScriptStruct_FClothCollisionPrim_ConvexFace_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FClothCollisionPrim_ConvexFace,&UE::CoreUObject::Private::Construct<FClothCollisionPrim_ConvexFace>,&UE::CoreUObject::Private::ConstructForTests<FClothCollisionPrim_ConvexFace>,&UE::CoreUObject::Private::Destruct<FClothCollisionPrim_ConvexFace>,&UE::CoreUObject::Private::Copy<FClothCollisionPrim_ConvexFace>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 144645660

void * __cdecl Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FClothCollisionPrim_Convex,&UE::CoreUObject::Private::Construct<FClothCollisionPrim_Convex>,&UE::CoreUObject::Private::ConstructForTests<FClothCollisionPrim_Convex>,&UE::CoreUObject::Private::Destruct<FClothCollisionPrim_Convex>,&UE::CoreUObject::Private::Copy<FClothCollisionPrim_Convex>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1446456a0

void * __cdecl Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FClothCollisionPrim_Box,&UE::CoreUObject::Private::Construct<FClothCollisionPrim_Box>,&UE::CoreUObject::Private::ConstructForTests<FClothCollisionPrim_Box>,&UE::CoreUObject::Private::Destruct<FClothCollisionPrim_Box>,&UE::CoreUObject::Private::Copy<FClothCollisionPrim_Box>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FClothVertBoneData @ 1446457f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FClothVertBoneData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FClothVertBoneData.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FClothVertBoneData.InnerSingleton,
               &Z_Construct_UScriptStruct_FClothVertBoneData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FClothVertBoneData.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FClothVertBoneData.InnerSingleton;
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

// NewStructOps @ 144645870

void * __cdecl Z_Construct_UScriptStruct_FClothVertBoneData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x4c;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FClothVertBoneData,&UE::CoreUObject::Private::Construct<FClothVertBoneData>,&UE::CoreUObject::Private::ConstructForTests<FClothVertBoneData>,&UE::CoreUObject::Private::Destruct<FClothVertBoneData>,&UE::CoreUObject::Private::Copy<FClothVertBoneData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UClothingInteractor_NoRegister @ 144645910

UClass * __cdecl Z_Construct_UClass_UClothingInteractor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClothingInteractor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ClothingSystemRuntimeInterface",L"ClothingInteractor",
               &Z_Registration_Info_UClass_UClothingInteractor.InnerSingleton,
               UClothingInteractor::StaticRegisterNativesUClothingInteractor,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UClothingInteractor>,
               InternalVTableHelperCtorCaller<UClothingInteractor>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClothingInteractor.InnerSingleton;
}

// Z_Construct_UClass_UClothingSimulationInteractor_NoRegister @ 1446459c0

UClass * __cdecl Z_Construct_UClass_UClothingSimulationInteractor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClothingSimulationInteractor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ClothingSystemRuntimeInterface",L"ClothingSimulationInteractor",
               &Z_Registration_Info_UClass_UClothingSimulationInteractor.InnerSingleton,
               UClothingSimulationInteractor::StaticRegisterNativesUClothingSimulationInteractor,
               0x90,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UClothingSimulationInteractor>,
               InternalVTableHelperCtorCaller<UClothingSimulationInteractor>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClothingSimulationInteractor.InnerSingleton;
}

// Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy @ 144645c10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy(void)

{
  if (Z_Registration_Info_UClass_UClothPhysicalMeshDataBase_Legacy.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UClothPhysicalMeshDataBase_Legacy.OuterSingleton,
               &Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UClothPhysicalMeshDataBase_Legacy.OuterSingleton;
}

// NewStructOps @ 144646100

void * __cdecl Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FClothCollisionData,&UE::CoreUObject::Private::Construct<FClothCollisionData>,&UE::CoreUObject::Private::ConstructForTests<FClothCollisionData>,&UE::CoreUObject::Private::Destruct<FClothCollisionData>,&UE::CoreUObject::Private::Copy<FClothCollisionData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1446461e0

void * __cdecl Z_Construct_UScriptStruct_FClothingSimulationInstance_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FClothingSimulationInstance,&UE::CoreUObject::Private::Construct<FClothingSimulationInstance>,&UE::CoreUObject::Private::ConstructForTests<FClothingSimulationInstance>,&UE::CoreUObject::Private::Destruct<FClothingSimulationInstance>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UClothingInteractor @ 144646220

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UClothingInteractor(void)

{
  if (Z_Registration_Info_UClass_UClothingInteractor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UClothingInteractor.OuterSingleton,
               &Z_Construct_UClass_UClothingInteractor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UClothingInteractor.OuterSingleton;
}

// Z_Construct_UClass_UClothingSimulationInteractor @ 144646260

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UClothingSimulationInteractor(void)

{
  if (Z_Registration_Info_UClass_UClothingSimulationInteractor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UClothingSimulationInteractor.OuterSingleton,
               &Z_Construct_UClass_UClothingSimulationInteractor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UClothingSimulationInteractor.OuterSingleton;
}

// Z_Construct_UFunction_UClothingSimulationInteractor_ClothConfigUpdated @ 1446462a0

UFunction * __cdecl Z_Construct_UFunction_UClothingSimulationInteractor_ClothConfigUpdated(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UClothingSimulationInteractor_ClothConfigUpdated_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UClothingSimulationInteractor_DisableGravityOverride @ 1446462e0

UFunction * __cdecl Z_Construct_UFunction_UClothingSimulationInteractor_DisableGravityOverride(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UClothingSimulationInteractor_DisableGravityOverride_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride @ 1446463d0

UFunction * __cdecl Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor @ 144646410

UFunction * __cdecl Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UClothingSimulationInteractor_GetNumCloths @ 144646450

UFunction * __cdecl Z_Construct_UFunction_UClothingSimulationInteractor_GetNumCloths(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UClothingSimulationInteractor_GetNumCloths_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UClothingSimulationInteractor_GetNumDynamicParticles @ 144646540

UFunction * __cdecl Z_Construct_UFunction_UClothingSimulationInteractor_GetNumDynamicParticles(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UClothingSimulationInteractor_GetNumDynamicParticles_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UClothingSimulationInteractor_GetNumIterations @ 144646580

UFunction * __cdecl Z_Construct_UFunction_UClothingSimulationInteractor_GetNumIterations(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UClothingSimulationInteractor_GetNumIterations_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UClothConfigBase @ 1446465c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UClothConfigBase(void)

{
  if (Z_Registration_Info_UClass_UClothConfigBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UClothConfigBase.OuterSingleton,
               &Z_Construct_UClass_UClothConfigBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UClothConfigBase.OuterSingleton;
}

// Z_Construct_UClass_UDEPRECATED_ClothSharedSimConfigBase @ 144646600

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDEPRECATED_ClothSharedSimConfigBase(void)

{
  if (Z_Registration_Info_UClass_UDEPRECATED_ClothSharedSimConfigBase.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDEPRECATED_ClothSharedSimConfigBase.OuterSingleton,
               &Z_Construct_UClass_UDEPRECATED_ClothSharedSimConfigBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_ClothSharedSimConfigBase.OuterSingleton;
}

// Z_Construct_UFunction_UClothingSimulationInteractor_GetNumKinematicParticles @ 144646640

UFunction * __cdecl
Z_Construct_UFunction_UClothingSimulationInteractor_GetNumKinematicParticles(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UClothingSimulationInteractor_GetNumKinematicParticles_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// CompareItems<FClothCollisionPrim_ConvexFace,int> @ 144646a00

bool __cdecl
CompareItems<FClothCollisionPrim_ConvexFace,int>
          (FClothCollisionPrim_ConvexFace *param_1,FClothCollisionPrim_ConvexFace *param_2,
          int param_3)

{
  uint uVar1;
  uint uVar2;
  double dVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  double dVar7;
  
  dVar3 = __real_3f1a36e2e0000000;
  uVar2 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar1 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  if (param_3 != 0) {
    plVar6 = &(param_2->Plane)._padding_;
    plVar5 = &(param_1->Plane)._padding_;
    do {
      dVar7 = (double)((TPlane<double> *)(plVar5 + -1))->_padding_ -
              *(double *)((longlong)plVar5 + (longlong)param_2 + (-8 - (longlong)param_1));
      if ((((dVar3 <= (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) & uVar2,
                                       SUB84(dVar7,0) & uVar1)) ||
           (dVar3 <= (double)CONCAT44((uint)((ulonglong)((double)*plVar5 - (double)*plVar6) >> 0x20)
                                      & uVar2,SUB84((double)*plVar5 - (double)*plVar6,0) & uVar1)))
          || (dVar3 <= (double)CONCAT44((uint)((ulonglong)((double)plVar5[1] - (double)plVar6[1]) >>
                                              0x20) & uVar2,
                                        SUB84((double)plVar5[1] - (double)plVar6[1],0) & uVar1))) ||
         (dVar3 <= (double)CONCAT44((uint)((ulonglong)((double)plVar5[2] - (double)plVar6[2]) >>
                                          0x20) & uVar2,
                                    SUB84((double)plVar5[2] - (double)plVar6[2],0) & uVar1))) {
        return false;
      }
      iVar4 = *(int *)(plVar5 + 4);
      if (iVar4 != *(int *)(plVar6 + 4)) {
        return false;
      }
      if ((iVar4 != 0) &&
         (iVar4 = memcmp((void *)plVar5[3],(void *)plVar6[3],(longlong)iVar4 << 2), iVar4 != 0)) {
        return false;
      }
      plVar6 = plVar6 + 6;
      plVar5 = plVar5 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructItems<FClothCollisionPrim_Convex,FClothCollisionPrim_Convex,int> @ 144646b00

void __cdecl
ConstructItems<FClothCollisionPrim_Convex,FClothCollisionPrim_Convex,int>
          (void *param_1,FClothCollisionPrim_Convex *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  FClothCollisionPrim_ConvexFace *pFVar4;
  void *_Src;
  int *piVar5;
  int *piVar6;
  longlong lVar7;
  
  if (param_3 != 0) {
    piVar5 = (int *)((longlong)param_1 + 0xc);
    piVar6 = &(param_2->Faces).ArrayNum;
    lVar7 = (longlong)param_1 + (-8 - (longlong)param_2);
    do {
      *(undefined8 *)(lVar7 + (longlong)piVar6) = 0;
      pFVar2 = (ForAnyElementType *)(lVar7 + (longlong)piVar6);
      iVar3 = *piVar6;
      pFVar4 = (FClothCollisionPrim_ConvexFace *)
               (((TArray<FClothCollisionPrim_ConvexFace,TSizedDefaultAllocator<32>_> *)(piVar6 + -2)
                )->AllocatorInstance).Data;
      piVar5[-1] = iVar3;
      if (iVar3 == 0) {
        *piVar5 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,0x10,iVar3,0,pFVar2,iVar3,piVar5);
        ConstructItems<FClothCollisionPrim_ConvexFace,FClothCollisionPrim_ConvexFace,int>
                  (pFVar2->Data,pFVar4,iVar3);
      }
      piVar5[1] = 0;
      piVar5[2] = 0;
      iVar3 = piVar6[4];
      _Src = *(void **)(piVar6 + 2);
      piVar5[3] = iVar3;
      if (iVar3 == 0) {
        piVar5[4] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,iVar3,0,(ForAnyElementType *)(piVar5 + 1),iVar3,piVar5 + 4);
        memcpy(((ForAnyElementType *)(piVar5 + 1))->Data,_Src,(longlong)iVar3 * 0x18);
      }
      piVar1 = piVar6 + 6;
      piVar6 = piVar6 + 10;
      piVar5[5] = *piVar1;
      piVar5 = piVar5 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FClothCollisionPrim_ConvexFace,FClothCollisionPrim_ConvexFace,int> @ 144646c40

void __cdecl
ConstructItems<FClothCollisionPrim_ConvexFace,FClothCollisionPrim_ConvexFace,int>
          (void *param_1,FClothCollisionPrim_ConvexFace *param_2,int param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  longlong lVar4;
  double dVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  ForAnyElementType *pFVar7;
  
  if (param_3 != 0) {
    pTVar6 = &param_2->Indices;
    pFVar7 = (ForAnyElementType *)((longlong)param_1 + 0x20);
    do {
      lVar4 = (((FClothCollisionPrim_ConvexFace *)(pTVar6 + -2))->Plane)._padding_;
      piVar1 = (int *)((longlong)&pFVar7[1].Data + 4);
      plVar2 = (longlong *)((longlong)param_1 + (-0x20 - (longlong)param_2) + (longlong)pTVar6);
      *plVar2 = (((FClothCollisionPrim_ConvexFace *)(pTVar6 + -2))->Plane)._padding_;
      plVar2[1] = lVar4;
      dVar5 = *(double *)((longlong)(pTVar6 + -1) + 8);
      plVar2 = (longlong *)((longlong)param_1 + (-0x10 - (longlong)param_2) + (longlong)pTVar6);
      *plVar2 = *(longlong *)(pTVar6 + -1);
      plVar2[1] = (longlong)dVar5;
      pFVar7->Data = (FScriptContainerElement *)0x0;
      iVar3 = pTVar6->ArrayNum;
      _Src = (pTVar6->AllocatorInstance).Data;
      *(int *)&pFVar7[1].Data = iVar3;
      if (iVar3 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar3,0,pFVar7,iVar3,piVar1);
        memcpy(pFVar7->Data,_Src,(longlong)iVar3 << 2);
      }
      pTVar6 = pTVar6 + 3;
      pFVar7 = pFVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<FClothCollisionPrim_Convex,int> @ 144646d20

void __cdecl
DestructItems<FClothCollisionPrim_Convex,int>(FClothCollisionPrim_Convex *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->SurfacePoints).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    DestructItems<FClothCollisionPrim_ConvexFace,int>
              ((FClothCollisionPrim_ConvexFace *)(param_1->Faces).AllocatorInstance.Data,
               (param_1->Faces).ArrayNum);
    pFVar1 = (param_1->Faces).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FClothCollisionPrim_ConvexFace,int> @ 144646d80

void __cdecl
DestructItems<FClothCollisionPrim_ConvexFace,int>
          (FClothCollisionPrim_ConvexFace *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Indices;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// InternalConstructor<UClothConfigBase> @ 144647b10

void __cdecl InternalConstructor<UClothConfigBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UClothConfigBase__6B_;
  }
  return;
}

// InternalConstructor<UClothPhysicalMeshDataBase_Legacy> @ 144647b40

void __cdecl InternalConstructor<UClothPhysicalMeshDataBase_Legacy>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UClothPhysicalMeshDataBase_Legacy__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined4 *)&this[4].field_0x18 = 0;
    *(undefined4 *)&this[4].field_0x1c = 0x80;
    *(undefined4 *)&this[4].field_0x20 = 0xffffffff;
    *(undefined4 *)&this[4].field_0x24 = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined4 *)&this[5].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UClothingAssetBase> @ 144647bf0

void __cdecl InternalConstructor<UClothingAssetBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UClothingAssetBase__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UClothingInteractor> @ 144647c30

void __cdecl InternalConstructor<UClothingInteractor>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined4 *)(this + 1) = 0xffffffff;
    *(undefined ***)this = &___7UClothingInteractor__6B_;
  }
  return;
}

// InternalConstructor<UClothingSimulationFactory> @ 144647c70

void __cdecl InternalConstructor<UClothingSimulationFactory>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UClothingSimulationFactory__6B_;
  }
  return;
}

// InternalConstructor<UClothingSimulationInteractor> @ 144647ca0

void __cdecl InternalConstructor<UClothingSimulationInteractor>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UClothingSimulationInteractor__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined4 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x4 = 0x80;
    *(undefined4 *)&this[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[2].field_0xc = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UDEPRECATED_ClothSharedSimConfigBase> @ 144647d10

void __cdecl InternalConstructor<UDEPRECATED_ClothSharedSimConfigBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UDEPRECATED_ClothSharedSimConfigBase__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UClothConfigBase> @ 144647d40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UClothConfigBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UClothConfigBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UClothConfigBase__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UClothPhysicalMeshDataBase_Legacy> @ 144647df0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UClothPhysicalMeshDataBase_Legacy>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UClothPhysicalMeshDataBase_Legacy::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UClothPhysicalMeshDataBase_Legacy__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined4 *)&pUVar1[4].field_0x18 = 0;
    *(undefined4 *)&pUVar1[4].field_0x1c = 0x80;
    *(undefined4 *)&pUVar1[4].field_0x20 = 0xffffffff;
    *(undefined4 *)&pUVar1[4].field_0x24 = 0;
    *(undefined8 *)&pUVar1[5].field_0x8 = 0;
    *(undefined4 *)&pUVar1[5].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UClothingAssetBase> @ 144647f20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UClothingAssetBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UClothingAssetBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UClothingAssetBase__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UClothingInteractor> @ 144647fe0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UClothingInteractor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UClothingInteractor::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined4 *)(pUVar1 + 1) = 0xffffffff;
    *(undefined ***)pUVar1 = &___7UClothingInteractor__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UClothingSimulationFactory> @ 1446480a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UClothingSimulationFactory>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UClothingSimulationFactory::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UClothingSimulationFactory__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UClothingSimulationInteractor> @ 144648150

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UClothingSimulationInteractor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UClothingSimulationInteractor::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UClothingSimulationInteractor__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0xc = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDEPRECATED_ClothSharedSimConfigBase> @ 144648240

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDEPRECATED_ClothSharedSimConfigBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDEPRECATED_ClothSharedSimConfigBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDEPRECATED_ClothSharedSimConfigBase__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// StaticEnum<enum_EClothingTeleportMode> @ 1446482f0

UEnum * __cdecl StaticEnum<enum_EClothingTeleportMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EClothingTeleportMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
    Z_Registration_Info_UEnum_EClothingTeleportMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ClothingSystemRuntimeInterface_EClothingTeleportMode,
                       (UObject *)pUVar1,L"EClothingTeleportMode");
  }
  return Z_Registration_Info_UEnum_EClothingTeleportMode.OuterSingleton;
}

// `scalar_deleting_destructor' @ 144648e50

void * __thiscall
FClothingSystemRuntimeInterfaceModule::_scalar_deleting_destructor_
          (FClothingSystemRuntimeInterfaceModule *this,uint param_1)

{
  *this = (FClothingSystemRuntimeInterfaceModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144648e90

void * __thiscall
IClothingSimulation::_scalar_deleting_destructor_(IClothingSimulation *this,uint param_1)

{
  *(undefined ***)this = &___7IClothingSimulationInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144648ed0

void * __thiscall
IClothingSimulationContext::_scalar_deleting_destructor_
          (IClothingSimulationContext *this,uint param_1)

{
  *this = (IClothingSimulationContext)&___7IClothingSimulationContext__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144648f10

void * __thiscall
IClothingSimulationInterface::_scalar_deleting_destructor_
          (IClothingSimulationInterface *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IClothingSimulationInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144648f50

void * __thiscall
UClothConfigBase::_scalar_deleting_destructor_(UClothConfigBase *this,uint param_1)

{
  *(undefined ***)this = &___7UClothConfigBase__6B_;
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

// `scalar_deleting_destructor' @ 144648fb0

void * __thiscall
UClothPhysicalMeshDataBase_Legacy::_scalar_deleting_destructor_
          (UClothPhysicalMeshDataBase_Legacy *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UClothPhysicalMeshDataBase_Legacy__6B_;
  *(undefined4 *)&(this->IdToArray).field_0x48 = 0;
  pvVar1 = *(void **)&(this->IdToArray).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<float,TSizedDefaultAllocator<32>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<float,TSizedDefaultAllocator<32>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<float,TSizedDefaultAllocator<32>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->IdToArray);
  pFVar2 = (this->SelfCollisionIndices).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->BoneData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->InverseMasses).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Indices).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Normals).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Vertices).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
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

// `scalar_deleting_destructor' @ 1446490a0

void * __thiscall
UClothingAssetBase::_scalar_deleting_destructor_(UClothingAssetBase *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UClothingAssetBase__6B_;
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

// `scalar_deleting_destructor' @ 144649100

void * __thiscall
UClothingInteractor::_scalar_deleting_destructor_(UClothingInteractor *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UClothingInteractor__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144649160

void * __thiscall
UClothingSimulationFactory::_scalar_deleting_destructor_
          (UClothingSimulationFactory *this,uint param_1)

{
  *(undefined ***)this = &___7UClothingSimulationFactory__6B_;
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

// `scalar_deleting_destructor' @ 1446491c0

void * __thiscall
UClothingSimulationInteractor::_scalar_deleting_destructor_
          (UClothingSimulationInteractor *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UClothingSimulationInteractor__6B_;
  *(undefined4 *)&(this->ClothingInteractors).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ClothingInteractors).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UClothingInteractor>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UClothingInteractor>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UClothingInteractor>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ClothingInteractors);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144649250

void * __thiscall
UDEPRECATED_ClothSharedSimConfigBase::_scalar_deleting_destructor_
          (UDEPRECATED_ClothSharedSimConfigBase *this,uint param_1)

{
  *(undefined ***)this = &___7UDEPRECATED_ClothSharedSimConfigBase__6B_;
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

// EmptyLinkFunctionForGeneratedCodeClothCollisionData @ 14464aa60

void __cdecl EmptyLinkFunctionForGeneratedCodeClothCollisionData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeClothCollisionPrim @ 14464aa70

void __cdecl EmptyLinkFunctionForGeneratedCodeClothCollisionPrim(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeClothConfigBase @ 14464aa80

void __cdecl EmptyLinkFunctionForGeneratedCodeClothConfigBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeClothPhysicalMeshDataBase_Legacy @ 14464aa90

void __cdecl EmptyLinkFunctionForGeneratedCodeClothPhysicalMeshDataBase_Legacy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeClothVertBoneData @ 14464aaa0

void __cdecl EmptyLinkFunctionForGeneratedCodeClothVertBoneData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeClothingAssetBase @ 14464aab0

void __cdecl EmptyLinkFunctionForGeneratedCodeClothingAssetBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeClothingSimulationFactory @ 14464aac0

void __cdecl EmptyLinkFunctionForGeneratedCodeClothingSimulationFactory(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeClothingSimulationInstance @ 14464aad0

void __cdecl EmptyLinkFunctionForGeneratedCodeClothingSimulationInstance(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeClothingSimulationInteractor @ 14464aae0

void __cdecl EmptyLinkFunctionForGeneratedCodeClothingSimulationInteractor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeClothingSystemRuntimeInterface_init @ 14464aaf0

void __cdecl EmptyLinkFunctionForGeneratedCodeClothingSystemRuntimeInterface_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeClothingSystemRuntimeTypes @ 14464ab00

void __cdecl EmptyLinkFunctionForGeneratedCodeClothingSystemRuntimeTypes(void)

{
  return;
}

// Z_Construct_UClass_UClothConfigBase_NoRegister @ 14464d190

UClass * __cdecl Z_Construct_UClass_UClothConfigBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClothConfigBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ClothingSystemRuntimeInterface",L"ClothConfigBase",
               &Z_Registration_Info_UClass_UClothConfigBase.InnerSingleton,
               UClothConfigBase::StaticRegisterNativesUClothConfigBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UClothConfigBase>,
               InternalVTableHelperCtorCaller<UClothConfigBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClothConfigBase.InnerSingleton;
}

// Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_NoRegister @ 14464d240

UClass * __cdecl Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClothPhysicalMeshDataBase_Legacy.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ClothingSystemRuntimeInterface",L"ClothPhysicalMeshDataBase_Legacy",
               &Z_Registration_Info_UClass_UClothPhysicalMeshDataBase_Legacy.InnerSingleton,
               UClothPhysicalMeshDataBase_Legacy::
               StaticRegisterNativesUClothPhysicalMeshDataBase_Legacy,0xe0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UClothPhysicalMeshDataBase_Legacy>,
               InternalVTableHelperCtorCaller<UClothPhysicalMeshDataBase_Legacy>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClothPhysicalMeshDataBase_Legacy.InnerSingleton;
}

// Z_Construct_UClass_UClothingAssetBase_NoRegister @ 14464d2f0

UClass * __cdecl Z_Construct_UClass_UClothingAssetBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClothingAssetBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ClothingSystemRuntimeInterface",L"ClothingAssetBase",
               &Z_Registration_Info_UClass_UClothingAssetBase.InnerSingleton,
               UClothingAssetBase::StaticRegisterNativesUClothingAssetBase,0x38,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UClothingAssetBase>,
               InternalVTableHelperCtorCaller<UClothingAssetBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClothingAssetBase.InnerSingleton;
}

// Z_Construct_UClass_UDEPRECATED_ClothSharedSimConfigBase_NoRegister @ 14464d3a0

UClass * __cdecl Z_Construct_UClass_UDEPRECATED_ClothSharedSimConfigBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_ClothSharedSimConfigBase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ClothingSystemRuntimeInterface",L"ClothSharedSimConfigBase",
               &Z_Registration_Info_UClass_UDEPRECATED_ClothSharedSimConfigBase.InnerSingleton,
               UDEPRECATED_ClothSharedSimConfigBase::
               StaticRegisterNativesUDEPRECATED_ClothSharedSimConfigBase,0x28,8,
               CLASS_Intrinsic|CLASS_Deprecated|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_ClothSharedSimConfigBase>,
               InternalVTableHelperCtorCaller<UDEPRECATED_ClothSharedSimConfigBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_ClothSharedSimConfigBase.InnerSingleton;
}

// Z_Construct_UEnum_ClothingSystemRuntimeInterface_EClothingTeleportMode @ 14464d450

UEnum * __cdecl Z_Construct_UEnum_ClothingSystemRuntimeInterface_EClothingTeleportMode(void)

{
  if (Z_Registration_Info_UEnum_EClothingTeleportMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EClothingTeleportMode.InnerSingleton,
               &Z_Construct_UEnum_ClothingSystemRuntimeInterface_EClothingTeleportMode_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EClothingTeleportMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FClothCollisionData @ 14464d490

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FClothCollisionData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FClothCollisionData.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FClothCollisionData.InnerSingleton,
               &Z_Construct_UScriptStruct_FClothCollisionData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FClothCollisionData.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FClothCollisionData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FClothingSimulationInstance @ 14464d510

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FClothingSimulationInstance(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FClothingSimulationInstance.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FClothingSimulationInstance.InnerSingleton,
               &Z_Construct_UScriptStruct_FClothingSimulationInstance_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FClothingSimulationInstance.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FClothingSimulationInstance.InnerSingleton;
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

// IMPLEMENT_MODULE_ClothingSystemRuntimeInterface @ 14464db40

void __cdecl IMPLEMENT_MODULE_ClothingSystemRuntimeInterface(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarClothResetAfterTeleport'' @ 15036e8b0

void __cdecl _dynamic_atexit_destructor_for__CVarClothResetAfterTeleport__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarClothResetAfterTeleport);
  return;
}

// `dynamic_atexit_destructor_for_'CVarClothTeleportDistanceThreshold'' @ 15036e8d0

void __cdecl _dynamic_atexit_destructor_for__CVarClothTeleportDistanceThreshold__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarClothTeleportDistanceThreshold)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarClothTeleportOverride'' @ 15036e8f0

void __cdecl _dynamic_atexit_destructor_for__CVarClothTeleportOverride__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarClothTeleportOverride);
  return;
}

// `dynamic_atexit_destructor_for_'CVarClothTeleportRotationThreshold'' @ 15036e910

void __cdecl _dynamic_atexit_destructor_for__CVarClothTeleportRotationThreshold__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarClothTeleportRotationThreshold)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarDefaultClothingSimulationFactoryClass'' @ 15036e930

void __cdecl
ClothingSimulationFactoryConsoleVariables::
_dynamic_atexit_destructor_for__CVarDefaultClothingSimulationFactoryClass__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarDefaultClothingSimulationFactoryClass);
  return;
}

// `dynamic_atexit_destructor_for_'LogClothingAsset'' @ 15036e950

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogClothingAsset__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogClothingAsset);
  return;
}

