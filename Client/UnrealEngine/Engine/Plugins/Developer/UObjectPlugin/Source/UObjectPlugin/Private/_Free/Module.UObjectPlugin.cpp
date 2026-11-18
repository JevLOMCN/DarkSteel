// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UObjectPlugin
// Functions: 16

// `dynamic_initializer_for_'ModuleRegistrantUObjectPlugin'' @ 141418b00

void __cdecl _dynamic_initializer_for__ModuleRegistrantUObjectPlugin__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "UObjectPlugin";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"UObjectPlugin",0xd);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FUObjectPlugin>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h__Script_UObjectPlugin_1084945333'' @ 141418b50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h__Script_UObjectPlugin_1084945333__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UObjectPlugin",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h__Script_UObjectPlugin_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h__Script_UObjectPlugin_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_UObjectPlugin'' @ 141418ba0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_UObjectPlugin__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x7e023b00;
  local_res8[0].DeclarationsHash = 0x397f1c61;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_UObjectPlugin,L"/Script/UObjectPlugin",
             &Z_Registration_Info_UPackage__Script_UObjectPlugin,local_res8);
  return;
}

// Z_Construct_UPackage__Script_UObjectPlugin @ 14e2cc690

UPackage * __cdecl Z_Construct_UPackage__Script_UObjectPlugin(void)

{
  if (Z_Registration_Info_UPackage__Script_UObjectPlugin.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_UObjectPlugin.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_UObjectPlugin.OuterSingleton;
}

// Z_Construct_UClass_UMyPluginObject @ 14e2cc7c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMyPluginObject(void)

{
  if (Z_Registration_Info_UClass_UMyPluginObject.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMyPluginObject.OuterSingleton,
               &Z_Construct_UClass_UMyPluginObject_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMyPluginObject.OuterSingleton;
}

// Z_Construct_UScriptStruct_FMyPluginStruct @ 14e2cc800

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMyPluginStruct(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMyPluginStruct.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMyPluginStruct.InnerSingleton,
               &Z_Construct_UScriptStruct_FMyPluginStruct_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMyPluginStruct.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMyPluginStruct.InnerSingleton;
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

// NewStructOps @ 14e2cc880

void * __cdecl Z_Construct_UScriptStruct_FMyPluginStruct_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMyPluginStruct,&UE::CoreUObject::Private::Construct<FMyPluginStruct>,&UE::CoreUObject::Private::ConstructForTests<FMyPluginStruct>,&UE::CoreUObject::Private::Destruct<FMyPluginStruct>,&UE::CoreUObject::Private::Copy<FMyPluginStruct>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14e2cc8c0

void * __thiscall IUObjectPlugin::_scalar_deleting_destructor_(IUObjectPlugin *this,uint param_1)

{
  *this = (IUObjectPlugin)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2cc920

void * __thiscall FUObjectPlugin::_scalar_deleting_destructor_(FUObjectPlugin *this,uint param_1)

{
  *this = (FUObjectPlugin)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// InternalConstructor<UMyPluginObject> @ 14e2cca80

void __cdecl InternalConstructor<UMyPluginObject>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UMyPluginObject__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UMyPluginObject> @ 14e2ccac0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMyPluginObject>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMyPluginObject::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMyPluginObject__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// `scalar_deleting_destructor' @ 14e2ccc40

void * __thiscall UMyPluginObject::_scalar_deleting_destructor_(UMyPluginObject *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMyPluginObject__6B_;
  pFVar1 = (this->MyStruct).TestString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
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

// EmptyLinkFunctionForGeneratedCodeMyPluginObject @ 14e2cccb0

void __cdecl EmptyLinkFunctionForGeneratedCodeMyPluginObject(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeUObjectPlugin_init @ 14e2cccc0

void __cdecl EmptyLinkFunctionForGeneratedCodeUObjectPlugin_init(void)

{
  return;
}

// Z_Construct_UClass_UMyPluginObject_NoRegister @ 14e2ccdc0

UClass * __cdecl Z_Construct_UClass_UMyPluginObject_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMyPluginObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UObjectPlugin",L"MyPluginObject",
               &Z_Registration_Info_UClass_UMyPluginObject.InnerSingleton,
               UMyPluginObject::StaticRegisterNativesUMyPluginObject,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMyPluginObject>,
               InternalVTableHelperCtorCaller<UMyPluginObject>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMyPluginObject.InnerSingleton;
}

// IMPLEMENT_MODULE_UObjectPlugin @ 14e2cce70

void __cdecl IMPLEMENT_MODULE_UObjectPlugin(void)

{
  return;
}

