// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AndroidFileServer
// Functions: 25

// `dynamic_initializer_for_'ModuleRegistrantAndroidFileServer'' @ 14144f9e0

void __cdecl _dynamic_initializer_for__ModuleRegistrantAndroidFileServer__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "AndroidFileServer";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"AndroidFileServer",0x11);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FAndroidFileServerModule>::InitializeModule
            );
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServer_Classes_AndroidFileServerBPLibrary_h__Script_AndroidFileServer_123952063'' @ 14144fa30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServer_Classes_AndroidFileServerBPLibrary_h__Script_AndroidFileServer_123952063__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AndroidFileServer",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServer_Classes_AndroidFileServerBPLibrary_h__Script_AndroidFileServer_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServer_Classes_AndroidFileServerBPLibrary_h__Script_AndroidFileServer_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_AndroidFileServer'' @ 14144fa80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_AndroidFileServer__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x22dd17af;
  local_res8[0].DeclarationsHash = 0x2a381bc;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_AndroidFileServer,L"/Script/AndroidFileServer",
             &Z_Registration_Info_UPackage__Script_AndroidFileServer,local_res8);
  return;
}

// Z_Construct_UPackage__Script_AndroidFileServer @ 14f00b440

UPackage * __cdecl Z_Construct_UPackage__Script_AndroidFileServer(void)

{
  if (Z_Registration_Info_UPackage__Script_AndroidFileServer.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_AndroidFileServer.OuterSingleton,&PackageParams
              );
  }
  return Z_Registration_Info_UPackage__Script_AndroidFileServer.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14f00b4a0

void * __thiscall
FAndroidFileServerModule::_scalar_deleting_destructor_(FAndroidFileServerModule *this,uint param_1)

{
  *this = (FAndroidFileServerModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UAndroidFileServerBPLibrary @ 14f00b5a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAndroidFileServerBPLibrary(void)

{
  if (Z_Registration_Info_UClass_UAndroidFileServerBPLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAndroidFileServerBPLibrary.OuterSingleton,
               &Z_Construct_UClass_UAndroidFileServerBPLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAndroidFileServerBPLibrary.OuterSingleton;
}

// Z_Construct_UEnum_AndroidFileServer_EAFSActiveType @ 14f00b5e0

UEnum * __cdecl Z_Construct_UEnum_AndroidFileServer_EAFSActiveType(void)

{
  if (Z_Registration_Info_UEnum_EAFSActiveType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAFSActiveType.InnerSingleton,
               &Z_Construct_UEnum_AndroidFileServer_EAFSActiveType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAFSActiveType.InnerSingleton;
}

// EAFSActiveType_StaticEnum @ 14f00b620

UEnum * __cdecl EAFSActiveType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAFSActiveType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AndroidFileServer();
    Z_Registration_Info_UEnum_EAFSActiveType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AndroidFileServer_EAFSActiveType,(UObject *)pUVar1,
                       L"EAFSActiveType");
  }
  return Z_Registration_Info_UEnum_EAFSActiveType.OuterSingleton;
}

// Z_Construct_UFunction_UAndroidFileServerBPLibrary_IsFileServerRunning @ 14f00b660

UFunction * __cdecl Z_Construct_UFunction_UAndroidFileServerBPLibrary_IsFileServerRunning(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAndroidFileServerBPLibrary_IsFileServerRunning_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bUSB_SetBit @ 14f00b6a0

void __cdecl
Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::NewProp_bUSB_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bNetwork_SetBit @ 14f00b6b0

void __cdecl
Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::NewProp_bNetwork_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14f00b6c0

void __cdecl
Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer @ 14f00b6d0

UFunction * __cdecl Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bUSB_SetBit @ 14f00b710

void __cdecl
Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer_Statics::NewProp_bUSB_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bNetwork_SetBit @ 14f00b720

void __cdecl
Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer_Statics::NewProp_bNetwork_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14f00b730

void __cdecl
Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  return;
}

// Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer @ 14f00b740

UFunction * __cdecl Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// InternalConstructor<UAndroidFileServerBPLibrary> @ 14f00b780

void __cdecl InternalConstructor<UAndroidFileServerBPLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UAndroidFileServerBPLibrary__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UAndroidFileServerBPLibrary> @ 14f00b7b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAndroidFileServerBPLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAndroidFileServerBPLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAndroidFileServerBPLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// StaticEnum<enum_EAFSActiveType::Type> @ 14f00b860

UEnum * __cdecl StaticEnum<enum_EAFSActiveType::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAFSActiveType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AndroidFileServer();
    Z_Registration_Info_UEnum_EAFSActiveType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AndroidFileServer_EAFSActiveType,(UObject *)pUVar1,
                       L"EAFSActiveType");
  }
  return Z_Registration_Info_UEnum_EAFSActiveType.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14f00b920

void * __thiscall
UAndroidFileServerBPLibrary::_scalar_deleting_destructor_
          (UAndroidFileServerBPLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UAndroidFileServerBPLibrary__6B_;
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

// EmptyLinkFunctionForGeneratedCodeAndroidFileServerBPLibrary @ 14f00b980

void __cdecl EmptyLinkFunctionForGeneratedCodeAndroidFileServerBPLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAndroidFileServer_init @ 14f00b990

void __cdecl EmptyLinkFunctionForGeneratedCodeAndroidFileServer_init(void)

{
  return;
}

// Z_Construct_UClass_UAndroidFileServerBPLibrary_NoRegister @ 14f00bb00

UClass * __cdecl Z_Construct_UClass_UAndroidFileServerBPLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAndroidFileServerBPLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AndroidFileServer",L"AndroidFileServerBPLibrary",
               &Z_Registration_Info_UClass_UAndroidFileServerBPLibrary.InnerSingleton,
               UAndroidFileServerBPLibrary::StaticRegisterNativesUAndroidFileServerBPLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAndroidFileServerBPLibrary>,
               InternalVTableHelperCtorCaller<UAndroidFileServerBPLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAndroidFileServerBPLibrary.InnerSingleton;
}

// IMPLEMENT_MODULE_AndroidFileServer @ 14f00bd90

void __cdecl IMPLEMENT_MODULE_AndroidFileServer(void)

{
  return;
}

