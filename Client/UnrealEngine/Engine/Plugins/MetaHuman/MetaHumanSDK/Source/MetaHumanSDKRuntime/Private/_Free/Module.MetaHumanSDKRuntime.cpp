// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetaHumanSDKRuntime
// Functions: 83

// PathSeparator'' @ 1414062b0

void __cdecl `dynamic_initializer_for_'FControlRigOverrideValue::PathSeparator__(void)

{
  ::FString::FString(&FControlRigOverrideValue::PathSeparator,L"->");
  atexit(`dynamic_atexit_destructor_for_'FControlRigOverrideValue::PathSeparator__);
  return;
}

// RootNodeID'' @ 1414062e0

void __cdecl `dynamic_initializer_for_'FOverriddenPropertySet::RootNodeID__(void)

{
  FOverriddenPropertyNodeID::RootNodeId(&FOverriddenPropertySet::RootNodeID);
  atexit(`dynamic_atexit_destructor_for_'FOverriddenPropertySet::RootNodeID__);
  return;
}

// `dynamic_initializer_for_'BoolArrayTypeName'' @ 141406310

void __cdecl RigVMTypeUtils::_dynamic_initializer_for__BoolArrayTypeName__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,BoolArrayType);
  BoolArrayTypeName.LiteralType = None;
  BoolArrayTypeName.Number = (*pFVar1).Number;
  BoolArrayTypeName.Either.PackedName = (ulonglong)*pFVar1 & 0xffffffff | 0x8000000000000000;
  return;
}

// `dynamic_initializer_for_'BoolTypeName'' @ 141406360

void __cdecl RigVMTypeUtils::_dynamic_initializer_for__BoolTypeName__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,BoolType);
  BoolTypeName.LiteralType = None;
  BoolTypeName.Number = (*pFVar1).Number;
  BoolTypeName.Either.PackedName = (ulonglong)*pFVar1 & 0xffffffff | 0x8000000000000000;
  return;
}

// `dynamic_initializer_for_'DoubleArrayTypeName'' @ 1414063b0

void __cdecl RigVMTypeUtils::_dynamic_initializer_for__DoubleArrayTypeName__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,DoubleArrayType);
  DoubleArrayTypeName.LiteralType = None;
  DoubleArrayTypeName.Number = (*pFVar1).Number;
  DoubleArrayTypeName.Either.PackedName = (ulonglong)*pFVar1 & 0xffffffff | 0x8000000000000000;
  return;
}

// `dynamic_initializer_for_'DoubleTypeName'' @ 141406400

void __cdecl RigVMTypeUtils::_dynamic_initializer_for__DoubleTypeName__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,DoubleType);
  DoubleTypeName.LiteralType = None;
  DoubleTypeName.Number = (*pFVar1).Number;
  DoubleTypeName.Either.PackedName = (ulonglong)*pFVar1 & 0xffffffff | 0x8000000000000000;
  return;
}

// `dynamic_initializer_for_'FNameArrayTypeName'' @ 141406450

void __cdecl RigVMTypeUtils::_dynamic_initializer_for__FNameArrayTypeName__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,FNameArrayType);
  FNameArrayTypeName.LiteralType = None;
  FNameArrayTypeName.Number = (*pFVar1).Number;
  FNameArrayTypeName.Either.PackedName = (ulonglong)*pFVar1 & 0xffffffff | 0x8000000000000000;
  return;
}

// `dynamic_initializer_for_'FNameTypeName'' @ 1414064a0

void __cdecl RigVMTypeUtils::_dynamic_initializer_for__FNameTypeName__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,FNameType);
  FNameTypeName.LiteralType = None;
  FNameTypeName.Number = (*pFVar1).Number;
  FNameTypeName.Either.PackedName = (ulonglong)*pFVar1 & 0xffffffff | 0x8000000000000000;
  return;
}

// `dynamic_initializer_for_'FStringArrayTypeName'' @ 1414064f0

void __cdecl RigVMTypeUtils::_dynamic_initializer_for__FStringArrayTypeName__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,FStringArrayType);
  FStringArrayTypeName.LiteralType = None;
  FStringArrayTypeName.Number = (*pFVar1).Number;
  FStringArrayTypeName.Either.PackedName = (ulonglong)*pFVar1 & 0xffffffff | 0x8000000000000000;
  return;
}

// `dynamic_initializer_for_'FStringTypeName'' @ 141406540

void __cdecl RigVMTypeUtils::_dynamic_initializer_for__FStringTypeName__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,FStringType);
  FStringTypeName.LiteralType = None;
  FStringTypeName.Number = (*pFVar1).Number;
  FStringTypeName.Either.PackedName = (ulonglong)*pFVar1 & 0xffffffff | 0x8000000000000000;
  return;
}

// `dynamic_initializer_for_'FTextTypeName'' @ 141406590

void __cdecl RigVMTypeUtils::_dynamic_initializer_for__FTextTypeName__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,FTextType);
  FTextTypeName.LiteralType = None;
  FTextTypeName.Number = (*pFVar1).Number;
  FTextTypeName.Either.PackedName = (ulonglong)*pFVar1 & 0xffffffff | 0x8000000000000000;
  return;
}

// `dynamic_initializer_for_'FloatArrayTypeName'' @ 1414065e0

void __cdecl RigVMTypeUtils::_dynamic_initializer_for__FloatArrayTypeName__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,FloatArrayType);
  FloatArrayTypeName.LiteralType = None;
  FloatArrayTypeName.Number = (*pFVar1).Number;
  FloatArrayTypeName.Either.PackedName = (ulonglong)*pFVar1 & 0xffffffff | 0x8000000000000000;
  return;
}

// `dynamic_initializer_for_'FloatTypeName'' @ 141406630

void __cdecl RigVMTypeUtils::_dynamic_initializer_for__FloatTypeName__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,FloatType);
  FloatTypeName.LiteralType = None;
  FloatTypeName.Number = (*pFVar1).Number;
  FloatTypeName.Either.PackedName = (ulonglong)*pFVar1 & 0xffffffff | 0x8000000000000000;
  return;
}

// `dynamic_initializer_for_'Int32ArrayTypeName'' @ 141406680

void __cdecl RigVMTypeUtils::_dynamic_initializer_for__Int32ArrayTypeName__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,Int32ArrayType);
  Int32ArrayTypeName.LiteralType = None;
  Int32ArrayTypeName.Number = (*pFVar1).Number;
  Int32ArrayTypeName.Either.PackedName = (ulonglong)*pFVar1 & 0xffffffff | 0x8000000000000000;
  return;
}

// `dynamic_initializer_for_'Int32TypeName'' @ 1414066d0

void __cdecl RigVMTypeUtils::_dynamic_initializer_for__Int32TypeName__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,Int32Type);
  Int32TypeName.LiteralType = None;
  Int32TypeName.Number = (*pFVar1).Number;
  Int32TypeName.Either.PackedName = (ulonglong)*pFVar1 & 0xffffffff | 0x8000000000000000;
  return;
}

// `dynamic_initializer_for_'Int64TypeName'' @ 141406720

void __cdecl RigVMTypeUtils::_dynamic_initializer_for__Int64TypeName__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,Int64Type);
  Int64TypeName.LiteralType = None;
  Int64TypeName.Number = (*pFVar1).Number;
  Int64TypeName.Either.PackedName = (ulonglong)*pFVar1 & 0xffffffff | 0x8000000000000000;
  return;
}

// `dynamic_initializer_for_'IntTypeName'' @ 141406770

void __cdecl RigVMTypeUtils::_dynamic_initializer_for__IntTypeName__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,IntType);
  IntTypeName.LiteralType = None;
  IntTypeName.Number = (*pFVar1).Number;
  IntTypeName.Either.PackedName = (ulonglong)*pFVar1 & 0xffffffff | 0x8000000000000000;
  return;
}

// `dynamic_initializer_for_'ModuleName'' @ 1414067c0

void __cdecl AssetRegistryConstants::_dynamic_initializer_for__ModuleName__(void)

{
  ::FName::FName(&ModuleName,"AssetRegistry");
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantMetaHumanSDKRuntime'' @ 1414067e0

void __cdecl _dynamic_initializer_for__ModuleRegistrantMetaHumanSDKRuntime__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "MetaHumanSDKRuntime";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"MetaHumanSDKRuntime",0x13);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FMetaHumanSDKRuntimeModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'UInt32ArrayTypeName'' @ 141406830

void __cdecl RigVMTypeUtils::_dynamic_initializer_for__UInt32ArrayTypeName__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,UInt32ArrayType);
  UInt32ArrayTypeName.LiteralType = None;
  UInt32ArrayTypeName.Number = (*pFVar1).Number;
  UInt32ArrayTypeName.Either.PackedName = (ulonglong)*pFVar1 & 0xffffffff | 0x8000000000000000;
  return;
}

// `dynamic_initializer_for_'UInt32TypeName'' @ 141406880

void __cdecl RigVMTypeUtils::_dynamic_initializer_for__UInt32TypeName__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,UInt32Type);
  UInt32TypeName.LiteralType = None;
  UInt32TypeName.Number = (*pFVar1).Number;
  UInt32TypeName.Either.PackedName = (ulonglong)*pFVar1 & 0xffffffff | 0x8000000000000000;
  return;
}

// `dynamic_initializer_for_'UInt64TypeName'' @ 1414068d0

void __cdecl RigVMTypeUtils::_dynamic_initializer_for__UInt64TypeName__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,UInt64Type);
  UInt64TypeName.LiteralType = None;
  UInt64TypeName.Number = (*pFVar1).Number;
  UInt64TypeName.Either.PackedName = (ulonglong)*pFVar1 & 0xffffffff | 0x8000000000000000;
  return;
}

// `dynamic_initializer_for_'UInt8ArrayTypeName'' @ 141406920

void __cdecl RigVMTypeUtils::_dynamic_initializer_for__UInt8ArrayTypeName__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,UInt8ArrayType);
  UInt8ArrayTypeName.LiteralType = None;
  UInt8ArrayTypeName.Number = (*pFVar1).Number;
  UInt8ArrayTypeName.Either.PackedName = (ulonglong)*pFVar1 & 0xffffffff | 0x8000000000000000;
  return;
}

// `dynamic_initializer_for_'UInt8TypeName'' @ 141406970

void __cdecl RigVMTypeUtils::_dynamic_initializer_for__UInt8TypeName__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,UInt8Type);
  UInt8TypeName.LiteralType = None;
  UInt8TypeName.Number = (*pFVar1).Number;
  UInt8TypeName.Either.PackedName = (ulonglong)*pFVar1 & 0xffffffff | 0x8000000000000000;
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKRuntime_Public_MetaHumanBodyType_h__Script_MetaHumanSDKRuntime_1201812845'' @ 1414069c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKRuntime_Public_MetaHumanBodyType_h__Script_MetaHumanSDKRuntime_1201812845__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MetaHumanSDKRuntime",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKRuntime_Public_MetaHumanBodyType_h__Script_MetaHumanSDKRuntime_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKRuntime_Public_MetaHumanComponentBase_h__Script_MetaHumanSDKRuntime_3664847324'' @ 141406a10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKRuntime_Public_MetaHumanComponentBase_h__Script_MetaHumanSDKRuntime_3664847324__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MetaHumanSDKRuntime",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKRuntime_Public_MetaHumanComponentBase_h__Script_MetaHumanSDKRuntime_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKRuntime_Public_MetaHumanComponentBase_h__Script_MetaHumanSDKRuntime_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKRuntime_Public_MetaHumanComponentUE_h__Script_MetaHumanSDKRuntime_2396399483'' @ 141406a60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKRuntime_Public_MetaHumanComponentUE_h__Script_MetaHumanSDKRuntime_2396399483__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MetaHumanSDKRuntime",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKRuntime_Public_MetaHumanComponentUE_h__Script_MetaHumanSDKRuntime_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKRuntime_Public_MetaHumanTypes_h__Script_MetaHumanSDKRuntime_4201928002'' @ 141406aa0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKRuntime_Public_MetaHumanTypes_h__Script_MetaHumanSDKRuntime_4201928002__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MetaHumanSDKRuntime",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKRuntime_Public_MetaHumanTypes_h__Script_MetaHumanSDKRuntime_Statics
             ::EnumInfo,3);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_MetaHumanSDKRuntime'' @ 141406af0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_MetaHumanSDKRuntime__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xdd6bdf7d;
  local_res8[0].DeclarationsHash = 0x56f74690;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_MetaHumanSDKRuntime,L"/Script/MetaHumanSDKRuntime",
             &Z_Registration_Info_UPackage__Script_MetaHumanSDKRuntime,local_res8);
  return;
}

// Z_Construct_UEnum_MetaHumanSDKRuntime_EMetaHumanBodyType @ 14df89bd0

UEnum * __cdecl Z_Construct_UEnum_MetaHumanSDKRuntime_EMetaHumanBodyType(void)

{
  if (Z_Registration_Info_UEnum_EMetaHumanBodyType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMetaHumanBodyType.InnerSingleton,
               &Z_Construct_UEnum_MetaHumanSDKRuntime_EMetaHumanBodyType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMetaHumanBodyType.InnerSingleton;
}

// Z_Construct_UPackage__Script_MetaHumanSDKRuntime @ 14df89c10

UPackage * __cdecl Z_Construct_UPackage__Script_MetaHumanSDKRuntime(void)

{
  if (Z_Registration_Info_UPackage__Script_MetaHumanSDKRuntime.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_MetaHumanSDKRuntime.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_MetaHumanSDKRuntime.OuterSingleton;
}

// EMetaHumanBodyType_StaticEnum @ 14df89c50

UEnum * __cdecl EMetaHumanBodyType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMetaHumanBodyType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MetaHumanSDKRuntime();
    Z_Registration_Info_UEnum_EMetaHumanBodyType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MetaHumanSDKRuntime_EMetaHumanBodyType,(UObject *)pUVar1,
                       L"EMetaHumanBodyType");
  }
  return Z_Registration_Info_UEnum_EMetaHumanBodyType.OuterSingleton;
}

// EMetaHumanBodyBodyPartIndex_StaticEnum @ 14df89d50

UEnum * __cdecl EMetaHumanBodyBodyPartIndex_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMetaHumanBodyBodyPartIndex.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MetaHumanSDKRuntime();
    Z_Registration_Info_UEnum_EMetaHumanBodyBodyPartIndex.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MetaHumanSDKRuntime_EMetaHumanBodyBodyPartIndex,
                       (UObject *)pUVar1,L"EMetaHumanBodyBodyPartIndex");
  }
  return Z_Registration_Info_UEnum_EMetaHumanBodyBodyPartIndex.OuterSingleton;
}

// Z_Construct_UClass_UMetaHumanComponentUE @ 14df89d90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMetaHumanComponentUE(void)

{
  if (Z_Registration_Info_UClass_UMetaHumanComponentUE.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMetaHumanComponentUE.OuterSingleton,
               &Z_Construct_UClass_UMetaHumanComponentUE_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMetaHumanComponentUE.OuterSingleton;
}

// EFaceTextureType_StaticEnum @ 14df89dd0

UEnum * __cdecl EFaceTextureType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFaceTextureType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MetaHumanSDKRuntime();
    Z_Registration_Info_UEnum_EFaceTextureType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MetaHumanSDKRuntime_EFaceTextureType,(UObject *)pUVar1,
                       L"EFaceTextureType");
  }
  return Z_Registration_Info_UEnum_EFaceTextureType.OuterSingleton;
}

// EBodyTextureType_StaticEnum @ 14df89e10

UEnum * __cdecl EBodyTextureType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EBodyTextureType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MetaHumanSDKRuntime();
    Z_Registration_Info_UEnum_EBodyTextureType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MetaHumanSDKRuntime_EBodyTextureType,(UObject *)pUVar1,
                       L"EBodyTextureType");
  }
  return Z_Registration_Info_UEnum_EBodyTextureType.OuterSingleton;
}

// EMetaHumanQualityLevel_StaticEnum @ 14df89e50

UEnum * __cdecl EMetaHumanQualityLevel_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMetaHumanQualityLevel.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MetaHumanSDKRuntime();
    Z_Registration_Info_UEnum_EMetaHumanQualityLevel.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MetaHumanSDKRuntime_EMetaHumanQualityLevel,
                       (UObject *)pUVar1,L"EMetaHumanQualityLevel");
  }
  return Z_Registration_Info_UEnum_EMetaHumanQualityLevel.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14df89eb0

void * __thiscall
FMetaHumanSDKRuntimeModule::_scalar_deleting_destructor_
          (FMetaHumanSDKRuntimeModule *this,uint param_1)

{
  *this = (FMetaHumanSDKRuntimeModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UMetaHumanComponentBase @ 14df89ff0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMetaHumanComponentBase(void)

{
  if (Z_Registration_Info_UClass_UMetaHumanComponentBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMetaHumanComponentBase.OuterSingleton,
               &Z_Construct_UClass_UMetaHumanComponentBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMetaHumanComponentBase.OuterSingleton;
}

// Z_Construct_UScriptStruct_FMetaHumanCustomizableBodyPart @ 14df8a030

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMetaHumanCustomizableBodyPart(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMetaHumanCustomizableBodyPart.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMetaHumanCustomizableBodyPart.InnerSingleton,
               &Z_Construct_UScriptStruct_FMetaHumanCustomizableBodyPart_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMetaHumanCustomizableBodyPart.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMetaHumanCustomizableBodyPart.InnerSingleton;
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

// NewStructOps @ 14df8a0b0

void * __cdecl Z_Construct_UScriptStruct_FMetaHumanCustomizableBodyPart_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMetaHumanCustomizableBodyPart,&UE::CoreUObject::Private::Construct<FMetaHumanCustomizableBodyPart>,&UE::CoreUObject::Private::ConstructForTests<FMetaHumanCustomizableBodyPart>,&UE::CoreUObject::Private::Destruct<FMetaHumanCustomizableBodyPart>,&UE::CoreUObject::Private::Copy<FMetaHumanCustomizableBodyPart>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bEnableBodyCorrectives_SetBit @ 14df8a0f0

void __cdecl
Z_Construct_UClass_UMetaHumanComponentBase_Statics::NewProp_bEnableBodyCorrectives_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd1) = 1;
  return;
}

// NewProp_bEnableNeckCorrectives_SetBit @ 14df8a100

void __cdecl
Z_Construct_UClass_UMetaHumanComponentBase_Statics::NewProp_bEnableNeckCorrectives_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xec) = 1;
  return;
}

// NewProp_bEnableNeckProcControlRig_SetBit @ 14df8a110

void __cdecl
Z_Construct_UClass_UMetaHumanComponentBase_Statics::NewProp_bEnableNeckProcControlRig_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xf4) = 1;
  return;
}

// ConnectVariable<FBoolProperty,bool> @ 14df8a120

void __cdecl
MetaHumanComponentHelpers::ConnectVariable<FBoolProperty,bool>
          (UAnimInstance *param_1,FName *param_2,bool *param_3)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  FBoolProperty *this;
  
  this = (FBoolProperty *)UStruct::FindPropertyByName(*(UStruct **)&param_1->field_0x10,*param_2);
  if (this != (FBoolProperty *)0x0) {
    if ((*(uint *)(this->_padding_ + 0x18) >> 0x11 & 1) == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CastResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x472,L"CastFieldChecked failed with 0x%016llx");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      bVar2 = *param_3;
      if ((int)this->_padding_ < 1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      FBoolProperty::SetPropertyValue
                (this,&param_1->field_0x0 + *(int *)((longlong)&this->_padding_ + 4),bVar2);
    }
  }
  return;
}

// ConnectVariable<FIntProperty,int> @ 14df8a200

void __cdecl
MetaHumanComponentHelpers::ConnectVariable<FIntProperty,int>
          (UAnimInstance *param_1,FName *param_2,int *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FProperty *pFVar4;
  
  pFVar4 = UStruct::FindPropertyByName(*(UStruct **)&param_1->field_0x10,*param_2);
  if (pFVar4 != (FProperty *)0x0) {
    if ((*(byte *)(pFVar4->_padding_ + 0x18) & 0x80) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CastResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x472,L"CastFieldChecked failed with 0x%016llx");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      iVar1 = *param_3;
      if (pFVar4->ArrayDim < 1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      *(int *)(&param_1->field_0x0 + pFVar4->Offset_Internal) = iVar1;
    }
  }
  return;
}

// ConnectVariable<FObjectProperty,TObjectPtr<UPhysicsAsset>_> @ 14df8a2d0

void __cdecl
MetaHumanComponentHelpers::ConnectVariable<FObjectProperty,TObjectPtr<UPhysicsAsset>_>
          (UAnimInstance *param_1,FName *param_2,TObjectPtr<UPhysicsAsset> *param_3)

{
  int iVar1;
  UPhysicsAsset *pUVar2;
  code *pcVar3;
  bool bVar4;
  FProperty *pFVar5;
  
  pFVar5 = UStruct::FindPropertyByName(*(UStruct **)&param_1->field_0x10,*param_2);
  if (pFVar5 != (FProperty *)0x0) {
    if ((*(uint *)(pFVar5->_padding_ + 0x18) >> 0x10 & 1) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CastResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x472,L"CastFieldChecked failed with 0x%016llx");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      pUVar2 = (param_3->field0_0x0).DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UPhysicsAsset *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      if (pFVar5->ArrayDim < 1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar1 = pFVar5->Offset_Internal;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UPhysicsAsset *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      *(UPhysicsAsset **)(&param_1->field_0x0 + iVar1) = pUVar2;
    }
  }
  return;
}

// ConnectVariable<FObjectProperty,TSubclassOf<UControlRig>_> @ 14df8a3e0

void __cdecl
MetaHumanComponentHelpers::ConnectVariable<FObjectProperty,TSubclassOf<UControlRig>_>
          (UAnimInstance *param_1,FName *param_2,TSubclassOf<UControlRig> *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FProperty *pFVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  
  pFVar4 = UStruct::FindPropertyByName(*(UStruct **)&param_1->field_0x10,*param_2);
  if (pFVar4 == (FProperty *)0x0) {
    return;
  }
  if ((*(uint *)(pFVar4->_padding_ + 0x18) >> 0x10 & 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (!bVar3) {
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar6 = (param_3->Class).field0_0x0.DebugPtr;
  if ((pUVar6 != (UClass *)0x0) &&
     (pUVar5 = Z_Construct_UClass_UControlRig_NoRegister(), pUVar5 != (UClass *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if (((int)pUVar6->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar6 = (param_3->Class).field0_0x0.DebugPtr;
      goto LAB_14df8a49d;
    }
  }
  pUVar6 = (UClass *)0x0;
LAB_14df8a49d:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  if ((pFVar4->ArrayDim < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar3))
  {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar1 = pFVar4->Offset_Internal;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  *(UClass **)(&param_1->field_0x0 + iVar1) = pUVar6;
  return;
}

// ForEachComponent_Internal<USkeletalMeshComponent,1,1,`AActor::GetComponents<USkeletalMeshComponent,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 14df8a530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<USkeletalMeshComponent,1,1,_AActor::GetComponents<USkeletalMeshComponent,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar2;
  ForElementType<AActor_*> FVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  USkeletalMeshComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> <Var10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  bool bVar12;
  UClass *pUVar13;
  UClass *pUVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ForElementType<AActor_*> FVar19;
  undefined1 *puVar20;
  uint *puVar21;
  <lambda_1> local_res18;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  longlong local_1a0;
  int local_198;
  int local_194;
  UObject *local_190;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_188;
  int iStack_180;
  uint uStack_17c;
  undefined1 *local_178;
  undefined4 uStack_170;
  int iStack_16c;
  int local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  undefined4 local_10c;
  ForElementType<AActor_*> local_108;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar15 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar15 == 0) {
    return;
  }
  local_res18.OutComponents = param_2.OutComponents;
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  iVar5 = (int)pUVar13->_padding_;
  if ((*(int *)(lVar15 + 0x38) < iVar5) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar5 * 8) !=
      &pUVar13->_padding_)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (!bVar12) {
    return;
  }
  pUVar13 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar13 != pUVar14) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                          ,0xf1c,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pUVar14 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  if (pUVar14 != (UClass *)0x0) {
    iVar5 = (int)pUVar14->_padding_;
    if (((int)pUVar13->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar5 * 8) !=
        &pUVar14->_padding_)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_14df8a653;
  }
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar12) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14df8a653:
  local_3c = 0x18;
  pTVar2 = &this->OwnedComponents;
  local_108.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_180 = 0;
  local_40 = 0;
  iVar5 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_17c = 1;
  local_168 = 0;
  iStack_16c = iStack_180;
  if (iVar5 != 0) {
    puVar21 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar18 = *puVar21;
    iStack_180 = 0;
    local_168 = 0;
    while (uVar18 == 0) {
      iStack_180 = iStack_180 + 1;
      local_168 = local_168 + 0x20;
      iStack_16c = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180) goto LAB_14df8a6ed;
      uVar18 = puVar21[iStack_180];
    }
    uStack_17c = ~(uVar18 - 1) & uVar18;
    uVar4 = (ulonglong)uStack_17c * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_16c = local_198 + -1 + local_168;
    if (iVar5 < iStack_16c) {
      iStack_16c = iVar5;
    }
  }
LAB_14df8a6ed:
  uVar18 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_164 = local_10c;
  uVar17 = uVar18 & 0xffffffe0;
  iStack_160 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uStack_170 = 0xffffffff;
  TStack_150._padding_ = CONCAT44(uStack_17c,iStack_180);
  TStack_150.CurrentBitIndex = iStack_16c;
  TStack_150.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar18 >> 5;
  TStack_150._28_4_ = local_10c;
  TStack_150.BaseBitIndex = local_168;
  uStack_130 = CONCAT44(uStack_15c,iStack_160);
  local_188 = pTVar2;
  local_178 = puVar1;
  local_158 = pTVar2;
  TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar5 < (int)uVar18)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar6 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar18 != uVar6) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar20 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar20 = puVar7;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar16 * 4);
    while (uVar18 == 0) {
      iVar16 = iVar16 + 1;
      uVar17 = uVar17 + 0x20;
      uVar18 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_14df8a7f0;
      uVar18 = *(uint *)(puVar20 + (longlong)iVar16 * 4);
    }
    uVar4 = (ulonglong)(~(uVar18 - 1) & uVar18) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar18 = local_194 + -1 + uVar17;
    if ((int)uVar6 < (int)uVar18) {
      uVar18 = uVar6;
    }
  }
LAB_14df8a7f0:
  do {
    pTVar11 = local_158;
    if (*(int *)&(local_158->Elements).field_0x8 - *(int *)&(local_158->Elements).field_0x34 !=
        (int)uStack_130) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar5 = local_40;
    <Var10.OutComponents = local_res18.OutComponents;
    if (((TStack_150.CurrentBitIndex == uVar18) &&
        (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar11 == pTVar2)
       ) {
      FVar19 = (ForElementType<AActor_*>)&local_108;
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar19 = local_108.SecondaryData;
      }
      FVar3 = (ForElementType<AActor_*>)((longlong)FVar19 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar5) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar19 == FVar3) break;
        local_190 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar19;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_190 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_190);
        }
        ForEachComponent_Internal<USkeletalMeshComponent,1,1,_AActor::GetComponents<USkeletalMeshComponent,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_190,<Var10);
        FVar19 = (ForElementType<AActor_*>)((longlong)FVar19 + 8);
      }
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    pUVar8 = *(USkeletalMeshComponent **)
              (*(longlong *)&pTVar11->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
    if (pUVar8 != (USkeletalMeshComponent *)0x0) {
      `AActor::
      GetComponents<USkeletalMeshComponent,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>_>'
      ::__l2::<lambda_1>::operator()(&local_res18,pUVar8);
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar13->_padding_;
      if (((iVar5 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar13->_padding_)) && (local_1a0 = pUVar8->_padding_, local_1a0 != 0)) {
        FVar19 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_108.SecondaryData;
        }
        if ((ulonglong)FVar19 <= &local_1a0) {
          FVar19 = (ForElementType<AActor_*>)&local_108;
          if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar19 = local_108.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar19 + (longlong)local_3c * 8)) {
            local_1c0 = (longlong)local_40;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_108;
            if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_108.SecondaryData;
            }
            local_1c8 = (longlong)local_3c;
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar12) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_108,&local_3c);
        }
        lVar15 = (longlong)local_40;
        FVar19 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_108.SecondaryData;
        }
        local_40 = local_40 + 1;
        *(longlong *)((longlong)FVar19 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
  } while( true );
}

// ForEachComponent_Internal<USkeletalMeshComponent,1,0,`AActor::GetComponents<USkeletalMeshComponent,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 14df8aa60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<USkeletalMeshComponent,1,0,_AActor::GetComponents<USkeletalMeshComponent,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  USkeletalMeshComponent *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res10 [8];
  TArray<USkeletalMeshComponent_*,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>_>
  *local_res18;
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar11 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar11 == 0) {
    return;
  }
  local_res18 = param_2.OutComponents;
  pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar9 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar9->_padding_;
  if ((*(int *)(lVar11 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar9->_padding_)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (!bVar6) {
    return;
  }
  pUVar9 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar9 == (UClass *)0x0) {
    return;
  }
  pUVar10 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar9 != pUVar10) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                         ,0xf1c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar10 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  if (pUVar10 != (UClass *)0x0) {
    iVar3 = (int)pUVar10->_padding_;
    if (((int)pUVar9->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar3 * 8) != &pUVar10->_padding_
       )) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_14df8ab66;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14df8ab66:
  iVar14 = 0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uVar7 = 1;
  iVar16 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14df8abed;
      uVar13 = puVar17[lVar11 + 1];
    }
    uVar7 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iVar8 = local_res20 + -1 + iVar16;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14df8abed:
  uVar13 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar14);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar13 != uVar7) {
    puVar15 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14df8acf1;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar7 < (int)uVar13) {
      uVar13 = uVar7;
    }
  }
LAB_14df8acf1:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pUVar4 = *(USkeletalMeshComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar4 != (USkeletalMeshComponent *)0x0) {
      `AActor::
      GetComponents<USkeletalMeshComponent,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>_>'
      ::__l2::<lambda_1>::operator()(&local_res18,pUVar4);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<USkeletalMeshComponent,0,1,`AActor::GetComponents<USkeletalMeshComponent,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 14df8ad70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<USkeletalMeshComponent,0,1,_AActor::GetComponents<USkeletalMeshComponent,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  USkeletalMeshComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> <Var10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar12;
  bool bVar13;
  UClass *pUVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  ForElementType<AActor_*> FVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  <lambda_1> local_res18;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  longlong local_1a0;
  int local_198;
  int local_194;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_190;
  UObject *local_188;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_180;
  int iStack_178;
  uint uStack_174;
  undefined1 *local_170;
  undefined4 uStack_168;
  int iStack_164;
  int local_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  undefined4 local_104;
  ForElementType<AActor_*> local_100;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  local_res18.OutComponents = param_2.OutComponents;
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar14 == (UClass *)0x0) {
    return;
  }
  iVar4 = (int)pUVar14->_padding_;
  if ((*(int *)(lVar6 + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar14->_padding_)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if (!bVar13) {
    return;
  }
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  if (pUVar14 != (UClass *)0x0) {
    iVar4 = (int)pUVar14->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar14->_padding_)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar13) goto LAB_14df8ae63;
  }
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar13) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14df8ae63:
  local_34 = 0x18;
  local_190 = &this->OwnedComponents;
  local_100.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_178 = 0;
  local_38 = 0;
  iVar4 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_174 = 1;
  local_160 = 0;
  iStack_164 = iStack_178;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar16 = *puVar20;
    iStack_178 = 0;
    local_160 = 0;
    while (uVar16 == 0) {
      iStack_178 = iStack_178 + 1;
      local_160 = local_160 + 0x20;
      iStack_164 = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_178) goto LAB_14df8af10;
      uVar16 = puVar20[iStack_178];
    }
    uStack_174 = ~(uVar16 - 1) & uVar16;
    uVar3 = (ulonglong)uStack_174 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_164 = local_198 + -1 + local_160;
    if (iVar4 < iStack_164) {
      iStack_164 = iVar4;
    }
  }
LAB_14df8af10:
  uStack_15c = local_104;
  iStack_158 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uVar16 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_168 = 0xffffffff;
  TStack_148._padding_ = CONCAT44(uStack_174,iStack_178);
  uVar21 = uVar16 & 0xffffffe0;
  TStack_148.CurrentBitIndex = iStack_164;
  TStack_148.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar16 >> 5;
  TStack_148._28_4_ = local_104;
  TStack_148.BaseBitIndex = local_160;
  uStack_128 = CONCAT44(uStack_154,iStack_158);
  local_180 = local_190;
  local_170 = puVar1;
  local_150 = local_190;
  TStack_148.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar4 < (int)uVar16)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar11 = local_190;
  uVar5 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar16 != uVar5) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar19 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar19 = puVar7;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar17 * 4);
    while (uVar16 == 0) {
      iVar17 = iVar17 + 1;
      uVar21 = uVar21 + 0x20;
      uVar16 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar17) goto LAB_14df8b020;
      uVar16 = *(uint *)(puVar19 + (longlong)iVar17 * 4);
    }
    uVar3 = (ulonglong)(~(uVar16 - 1) & uVar16) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar16 = local_194 + -1 + uVar21;
    if ((int)uVar5 < (int)uVar16) {
      uVar16 = uVar5;
    }
  }
LAB_14df8b020:
  do {
    pTVar12 = local_150;
    if (*(int *)&(local_150->Elements).field_0x8 - *(int *)&(local_150->Elements).field_0x34 !=
        (int)uStack_128) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar4 = local_38;
    <Var10.OutComponents = local_res18.OutComponents;
    if (((TStack_148.CurrentBitIndex == uVar16) &&
        (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar12 == pTVar11)) {
      FVar18 = (ForElementType<AActor_*>)&local_100;
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar18 = local_100.SecondaryData;
      }
      FVar2 = (ForElementType<AActor_*>)((longlong)FVar18 + (longlong)local_38 * 8);
      while( true ) {
        if (local_38 != iVar4) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar18 == FVar2) break;
        local_188 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar18;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_188 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_188);
        }
        ForEachComponent_Internal<USkeletalMeshComponent,0,1,_AActor::GetComponents<USkeletalMeshComponent,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_188,<Var10);
        FVar18 = (ForElementType<AActor_*>)((longlong)FVar18 + 8);
      }
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_100.SecondaryData);
      }
      return;
    }
    pUVar8 = *(USkeletalMeshComponent **)
              (*(longlong *)&pTVar12->Elements + (longlong)TStack_148.CurrentBitIndex * 0x10);
    if (pUVar8 != (USkeletalMeshComponent *)0x0) {
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(pUVar8->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        `AActor::
        GetComponents<USkeletalMeshComponent,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>_>'
        ::__l2::<lambda_1>::operator()(&local_res18,pUVar8);
      }
      pUVar14 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar14->_padding_;
      if (((iVar4 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar14->_padding_)) && (local_1a0 = pUVar8->_padding_, local_1a0 != 0)) {
        FVar18 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_100.SecondaryData;
        }
        if ((ulonglong)FVar18 <= &local_1a0) {
          FVar18 = (ForElementType<AActor_*>)&local_100;
          if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar18 = local_100.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar18 + (longlong)local_34 * 8)) {
            local_1c0 = (longlong)local_38;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_100;
            if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_100.SecondaryData;
            }
            local_1c8 = (longlong)local_34;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar13) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_38 == local_34) {
          local_38 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_100,&local_34);
        }
        lVar15 = (longlong)local_38;
        FVar18 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_100.SecondaryData;
        }
        local_38 = local_38 + 1;
        *(longlong *)((longlong)FVar18 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
  } while( true );
}

// ForEachComponent_Internal<USkeletalMeshComponent,0,0,`AActor::GetComponents<USkeletalMeshComponent,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 14df8b2b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<USkeletalMeshComponent,0,0,_AActor::GetComponents<USkeletalMeshComponent,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  USkeletalMeshComponent *pUVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  UClass *pUVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res10 [8];
  TArray<USkeletalMeshComponent_*,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>_>
  *local_res18;
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  local_res18 = param_2.OutComponents;
  pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar12 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar12->_padding_;
  if ((*(int *)(lVar4 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar12->_padding_)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if (!bVar9) {
    return;
  }
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  pUVar12 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  if (pUVar12 != (UClass *)0x0) {
    iVar3 = (int)pUVar12->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar12->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (bVar9) goto LAB_14df8b38e;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar9) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_14df8b38e:
  iVar14 = 0;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  puVar2 = &(this->OwnedComponents).Elements.field_0x10;
  uVar10 = 1;
  iVar16 = 0;
  iVar11 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar2;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      iVar14 = iVar14 + 1;
      iVar16 = iVar16 + 0x20;
      iVar11 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar14) goto LAB_14df8b41f;
      uVar13 = puVar17[iVar14];
    }
    uVar10 = ~(uVar13 - 1) & uVar13;
    uVar1 = (ulonglong)uVar10 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res20 = (int)lVar7;
    iVar11 = local_res20 + -1 + iVar16;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
  }
LAB_14df8b41f:
  uVar13 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar18 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar10,iVar14);
  TStack_60.CurrentBitIndex = iVar11;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar10 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar13 != uVar10) {
    puVar5 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar15 = puVar2;
    if (puVar5 != (undefined1 *)0x0) {
      puVar15 = puVar5;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      iVar14 = iVar14 + 1;
      uVar18 = uVar18 + 0x20;
      uVar13 = uVar10;
      if ((int)(((int)(uVar10 - 1) >> 0x1f & 0x1fU) + (uVar10 - 1)) >> 5 < iVar14)
      goto LAB_14df8b530;
      uVar13 = *(uint *)(puVar15 + (longlong)iVar14 * 4);
    }
    uVar1 = (ulonglong)(~(uVar13 - 1) & uVar13) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar13 = (int)lVar7 + -1 + uVar18;
    if ((int)uVar10 < (int)uVar13) {
      uVar13 = uVar10;
    }
  }
LAB_14df8b530:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    pUVar6 = *(USkeletalMeshComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar6 != (USkeletalMeshComponent *)0x0) {
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(pUVar6->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        `AActor::
        GetComponents<USkeletalMeshComponent,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>_>'
        ::__l2::<lambda_1>::operator()(&local_res18,pUVar6);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// InternalConstructor<UMetaHumanComponentBase> @ 14df8b740

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UMetaHumanComponentBase>(FObjectInitializer *param_1)

{
  UActorComponent **ppUVar1;
  int *piVar2;
  UActorComponent *pUVar3;
  UActorComponent *this;
  FObjectInitializer *pFVar4;
  FString FStack_38;
  FString FStack_28;
  ForAnyElementType FStack_18;
  int iStack_10;
  int iStack_c;
  
  this = (UActorComponent *)param_1->Obj;
  if (this != (UActorComponent *)0x0) {
    pFVar4 = FObjectInitializer::Get();
    UActorComponent::UActorComponent(this,pFVar4);
    this->_padding_ = (longlong)&UMetaHumanComponentBase::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UMetaHumanComponentBase::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UMetaHumanComponentBase::_vftable__for__IAsyncPhysicsStateProcessor__;
    FString::FString((FString *)(this + 1),"Body");
    *(undefined2 *)&this[1]._padding_ = 0x112;
    FString::FString((FString *)&this[1]._padding_,"Face");
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick.Target = (UActorComponent *)0x0;
    this[1].ComponentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].ComponentTags.ArrayNum = 0;
    this[1].ComponentTags.ArrayMax = 0;
    this[1].AssetUserData.ArrayNum = 0;
    this[1].AssetUserData.ArrayMax = 0;
    this[1].UCSSerializationIndex = 0;
    this[1].RegistrationState = None;
    *(undefined8 *)&this[1].field_0x98 = 0;
    this[1].PhysicsStateAsyncCreationScene = (FPhysScene_Chaos *)0x0;
    this[1].WorldPrivate = (UWorld *)0x0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 1;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 1;
    *(undefined4 *)&this[1].PrimaryComponentTick._padding_ = 0xffffffff;
    *(undefined4 *)&this[1].PrimaryComponentTick._padding_ = 0xffffffff;
    *(undefined4 *)&this[1].PrimaryComponentTick._padding_ = 0xffffffff;
    *(undefined4 *)&this[1].AssetUserData.AllocatorInstance.Data = 0xffffffff;
    *(undefined4 *)&this[1].field_0x88 = 0xffffffff;
    *(undefined4 *)&this[1].OwnerPrivate = 0xffffffff;
    *(undefined4 *)&this[1].field_0xb8 = 0xffffffff;
    FString::FString(&FStack_38,"Torso");
    ppUVar1 = &this[1].PrimaryComponentTick.Target;
    if ((FString *)ppUVar1 != &FStack_38) {
      if (*ppUVar1 != (UActorComponent *)0x0) {
        FMemory::Free(*ppUVar1);
      }
      *ppUVar1 = (UActorComponent *)FStack_38.Data.AllocatorInstance.Data;
      *(int *)&this[1].ComponentTags.AllocatorInstance.Data = FStack_38.Data.ArrayNum;
      *(int *)((longlong)&this[1].ComponentTags.AllocatorInstance.Data + 4) =
           FStack_38.Data.ArrayMax;
      FStack_38.Data.ArrayNum = 0;
      FStack_38.Data.ArrayMax = 0;
      FStack_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if ((UActorComponent *)FStack_38.Data.AllocatorInstance.Data != (UActorComponent *)0x0) {
      FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
    }
    FString::FString(&FStack_28,"Legs");
    piVar2 = &this[1].UCSSerializationIndex;
    if ((FString *)piVar2 != &FStack_28) {
      if (*(void **)piVar2 != (void *)0x0) {
        FMemory::Free(*(void **)piVar2);
      }
      *(FScriptContainerElement **)piVar2 = FStack_28.Data.AllocatorInstance.Data;
      *(int *)&this[1].field_0x98 = FStack_28.Data.ArrayNum;
      *(int *)&this[1].field_0x9c = FStack_28.Data.ArrayMax;
      FStack_28.Data.ArrayNum = 0;
      FStack_28.Data.ArrayMax = 0;
      FStack_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
    }
    FString::FString((FString *)&stack0xffffffffffffffe8,"Feet");
    pUVar3 = this + 2;
    if (pUVar3 != (UActorComponent *)&stack0xffffffffffffffe8) {
      if ((void *)pUVar3->_padding_ != (void *)0x0) {
        FMemory::Free((void *)pUVar3->_padding_);
      }
      pUVar3->_padding_ = (longlong)FStack_18.Data;
      *(int *)&this[2]._padding_ = iStack_10;
      *(int *)((longlong)&this[2]._padding_ + 4) = iStack_c;
      _iStack_10 = 0;
      FStack_18.Data = (FScriptContainerElement *)0x0;
    }
    if (FStack_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data);
    }
    return;
  }
  return;
}

// InternalConstructor<UMetaHumanComponentUE> @ 14df8b760

void __cdecl InternalConstructor<UMetaHumanComponentUE>(FObjectInitializer *param_1)

{
  UMetaHumanComponentBase *this;
  
  this = (UMetaHumanComponentBase *)param_1->Obj;
  if (this != (UMetaHumanComponentBase *)0x0) {
    UMetaHumanComponentBase::UMetaHumanComponentBase(this);
    this->_padding_ = (longlong)&UMetaHumanComponentUE::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UMetaHumanComponentUE::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UMetaHumanComponentUE::_vftable__for__IAsyncPhysicsStateProcessor__
    ;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1]._padding_,0);
    return;
  }
  return;
}

// InternalVTableHelperCtorCaller<UMetaHumanComponentBase> @ 14df8b7e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMetaHumanComponentBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMetaHumanComponentBase *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMetaHumanComponentBase::GetPrivateStaticClass();
  pUVar3 = (UMetaHumanComponentBase *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UMetaHumanComponentBase *)0x0) {
    pUVar3 = UMetaHumanComponentBase::UMetaHumanComponentBase(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMetaHumanComponentUE> @ 14df8b880

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMetaHumanComponentUE>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMetaHumanComponentBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMetaHumanComponentUE::GetPrivateStaticClass();
  this = (UMetaHumanComponentBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMetaHumanComponentBase *)0x0) {
    UMetaHumanComponentBase::UMetaHumanComponentBase(this,param_1);
    this->_padding_ = (longlong)&UMetaHumanComponentUE::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UMetaHumanComponentUE::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UMetaHumanComponentUE::_vftable__for__IAsyncPhysicsStateProcessor__
    ;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1]._padding_,0);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IsObjectPtrEqual<UPhysicsAsset,UPhysicsAsset_*,0> @ 14df8b970

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UPhysicsAsset,UPhysicsAsset_*,0>
          (TObjectPtr<UPhysicsAsset> *param_1,UPhysicsAsset **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UPhysicsAsset *)0x0) {
    return *param_2 == (UPhysicsAsset *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// RequestAsyncLoad<FSoftObjectPath_const_&,`UMetaHumanComponentBase::LoadAndRunAnimBP'::__l2::<lambda_1>,void> @ 14df8bae0

TSharedPtr<FStreamableHandle,1> * __thiscall
FStreamableManager::
RequestAsyncLoad<FSoftObjectPath_const_&,_UMetaHumanComponentBase::LoadAndRunAnimBP_::__l2::<lambda_1>,void>
          (FStreamableManager *this,TSharedPtr<FStreamableHandle,1> *__return_storage_ptr__,
          FSoftObjectPath *param_1,<lambda_1> *param_2,int param_3,bool param_4,bool param_5,
          FString *param_6,FSourceLocation *param_7)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  bool bVar4;
  ForElementType<TAlignedBytes<16,16>_> FVar5;
  char cVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  undefined1 local_108 [16];
  ForAnyElementType local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [8];
  FDelegateAllocation local_e0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d0;
  FDelegateAllocation local_c8;
  undefined1 local_b8 [8];
  ForAnyElementType local_b0;
  int local_a8;
  undefined1 local_a0 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_90;
  ForAnyElementType FStack_88;
  int local_80;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  ForAnyElementType FStack_70;
  int local_68;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_60;
  ForAnyElementType FStack_58;
  int local_50;
  int local_48;
  undefined2 local_44;
  FStreamableDownloadCachePin local_40;
  bool local_28;
  
  iVar1 = (param_1->SubPathString).Data.ArrayNum;
  pFVar2 = (param_1->SubPathString).Data.AllocatorInstance.Data;
  local_a0._0_8_ = (FSoftObjectPath *)0x0;
  local_a0._8_4_ = 0;
  local_80 = 0;
  local_68 = 0;
  local_50 = 0;
  local_48 = 0;
  local_44._0_1_ = false;
  local_44._1_1_ = false;
  local_28 = false;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0._0_4_ = iVar1;
  local_90.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_88.Data = (FScriptContainerElement *)0x0;
  local_60.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_58.Data = (FScriptContainerElement *)0x0;
  local_108._0_8_ = (param_1->AssetPath).PackageName;
  local_108._8_8_ = (param_1->AssetPath).AssetName;
  local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_70.Data = (FScriptContainerElement *)0x0;
  if (iVar1 == 0) {
    local_f0._0_4_ = 0;
    local_f0._4_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar1,0,&local_f8,iVar1,(int *)((longlong)&local_f0 + 4));
    memcpy(local_f8.Data,pFVar2,(longlong)iVar1);
  }
  local_e8 = (undefined1  [8])0x0;
  local_e0.DelegateAllocator._0_4_ = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,(ForAnyElementType *)local_e8,1,(int *)&local_e0.DelegateAllocator.field_0x4
            );
  ConstructItems<FSoftObjectPath,FSoftObjectPath,int>
            ((void *)local_e8,(FSoftObjectPath *)local_108,1);
  DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)local_a0._0_8_,local_a0._8_4_);
  if ((FSoftObjectPath *)local_a0._0_8_ != (FSoftObjectPath *)0x0) {
    FMemory::Free((void *)local_a0._0_8_);
  }
  local_a0._0_8_ = local_e8;
  local_a0._8_4_ = local_e0.DelegateAllocator._0_4_;
  local_a0._12_4_ = local_e0.DelegateAllocator._4_4_;
  local_e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_e8 = (undefined1  [8])0x0;
  DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)0x0,0);
  if ((atomic<unsigned___int64>)local_e8 != (atomic<unsigned___int64>)0x0) {
    FMemory::Free((void *)local_e8);
  }
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  local_d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_c8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d0,(FWriteAccessScope *)local_108);
  local_f0 = &local_c8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x58,&local_c8);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UMetaHumanComponentBase::LoadAndRunAnimBP'::`2'::<lambda_1>_>
               ::_vftable_;
    *(FWeakObjectPtr *)(puVar7 + 3) = (param_2->WeakThis).WeakPtr;
    puVar7[4] = *(undefined8 *)&(param_2->AnimBlueprint).SoftObjectPtr;
    uVar3 = *(undefined8 *)&(param_2->AnimBlueprint).SoftObjectPtr.field_0x10;
    puVar7[5] = *(undefined8 *)&(param_2->AnimBlueprint).SoftObjectPtr.field_0x8;
    puVar7[6] = uVar3;
    puVar7[7] = 0;
    puVar7[7] = *(undefined8 *)&(param_2->AnimBlueprint).SoftObjectPtr.field_0x18;
    *(undefined8 *)&(param_2->AnimBlueprint).SoftObjectPtr.field_0x18 = 0;
    *(undefined4 *)(puVar7 + 8) = *(undefined4 *)&(param_2->AnimBlueprint).SoftObjectPtr.field_0x20;
    *(undefined4 *)((longlong)puVar7 + 0x44) =
         *(undefined4 *)&(param_2->AnimBlueprint).SoftObjectPtr.field_0x24;
    *(undefined8 *)&(param_2->AnimBlueprint).SoftObjectPtr.field_0x20 = 0;
    *(FWeakObjectPtr *)(puVar7 + 9) = (param_2->SkelMeshComponent).WeakPtr;
    *(bool *)(puVar7 + 10) = param_2->bIsPostProcessingAnimBP;
    *(bool *)((longlong)puVar7 + 0x51) = param_2->bRunAsOverridePostAnimBP;
  }
  if (local_f8.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_108._8_8_,(FDestructionSentinel *)local_108);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_d0,(FReadAccessScope *)local_108);
  if ((local_c8.DelegateSize == 0) ||
     (local_c8.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
LAB_14df8bd46:
    bVar4 = false;
  }
  else {
    cVar6 = (**(code **)(*(longlong *)local_c8.DelegateAllocator + 0x38))();
    if (cVar6 == '\0') goto LAB_14df8bd46;
    bVar4 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)local_108);
  if (bVar4) {
    local_b8 = (undefined1  [8])0x0;
    local_b0.Data = (FScriptContainerElement *)0x0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_d0,(FWriteAccessScope *)local_108);
    if (local_b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data);
    }
    local_b0.Data = (FScriptContainerElement *)local_c8.DelegateAllocator;
    local_a8 = local_c8.DelegateSize;
    local_c8.DelegateSize = 0;
    local_c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    if (local_f8.Data._0_1_ == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_108._8_8_,(FDestructionSentinel *)local_108);
    }
    local_e8 = (undefined1  [8])0x0;
    local_e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_e0._8_8_ = (ulonglong)(uint)local_e0._12_4_ << 0x20;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
               (FWriteAccessScope *)local_108);
    local_f0 = &local_e0;
    puVar7 = UE::Core::Private::DelegateAllocate(0x30,&local_e0);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFStreamableHandle___00___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &
                ___7__TBaseFunctorDelegateInstance___A6AXV__TSharedPtr_UFStreamableHandle___00___ZUFDefaultDelegateUserPolicy__V<lambda_1>__4__WrapDelegate_Private_StreamableManager_UE__YA_AV__TDelegate___A6AXV__TSharedPtr_UFStreamableHandle___00___ZUFDefaultDelegateUserPolicy______QEAV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar7 + 3),
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_b8);
    }
    if (local_f8.Data._0_1_ == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_108._8_8_,(FDestructionSentinel *)local_108);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b8,
               (FWriteAccessScope *)local_108);
    if ((local_a8 != 0) &&
       ((ForElementType<TAlignedBytes<16,16>_>)local_b0.Data !=
        (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_b0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_b0,0,0,0x10);
      local_a8 = 0;
    }
    if (local_f8.Data._0_1_ == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_108._8_8_,(FDestructionSentinel *)local_108);
    }
    if ((ForElementType<TAlignedBytes<16,16>_>)local_b0.Data !=
        (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free(local_b0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_b8);
  }
  else {
    local_e0._8_8_ = 0;
    local_e8 = (undefined1  [8])0x0;
    local_e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
             (FWriteAccessScope *)local_108);
  FVar5 = local_e0.DelegateAllocator;
  iVar1 = local_e0.DelegateSize;
  local_e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_e0._8_8_ = local_e0._8_8_ & 0xffffffff00000000;
  if (local_f8.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_108._8_8_,(FDestructionSentinel *)local_108);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_90,(FWriteAccessScope *)local_108);
  if (local_80 != 0) {
    if (FStack_88.Data == (FScriptContainerElement *)0x0) goto LAB_14df8bf2a;
    (*(code *)**(undefined8 **)FStack_88.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_88,0,0,0x10);
    local_80 = 0;
  }
  if (FStack_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_88.Data);
  }
LAB_14df8bf2a:
  FStack_88.Data = (FScriptContainerElement *)FVar5;
  local_80 = iVar1;
  if (local_f8.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_108._8_8_,(FDestructionSentinel *)local_108);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
             (FWriteAccessScope *)local_108);
  if ((local_e0.DelegateSize != 0) &&
     (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_e0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_e0,0,0,0x10);
    local_e0._8_8_ = local_e0._8_8_ & 0xffffffff00000000;
  }
  if (local_f8.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_108._8_8_,(FDestructionSentinel *)local_108);
  }
  if (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_e0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d0,(FWriteAccessScope *)local_108);
  if ((local_c8.DelegateSize != 0) &&
     (local_c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_c8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_c8,0,0,0x10);
    local_c8.DelegateSize = 0;
  }
  if (local_f8.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_108._8_8_,(FDestructionSentinel *)local_108);
  }
  if (local_c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_c8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d0.AccessDetector);
  local_48 = param_3;
  local_44._1_1_ = param_5;
  local_44._0_1_ = param_4;
  local_e8 = (undefined1  [8])(param_6->Data).AllocatorInstance.Data;
  (param_6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.DelegateAllocator = *(ForElementType<TAlignedBytes<16,16>_> *)&(param_6->Data).ArrayNum;
  (param_6->Data).ArrayNum = 0;
  (param_6->Data).ArrayMax = 0;
  local_108._0_4_ = (param_7->Impl)._Line;
  local_108._4_4_ = (param_7->Impl)._Column;
  local_108._8_8_ = (param_7->Impl)._File;
  local_f8.Data = (FScriptContainerElement *)(param_7->Impl)._Function;
  RequestAsyncLoad(this,__return_storage_ptr__,(FStreamableAsyncLoadParams *)local_a0,
                   (FString *)local_e8,(FSourceLocation *)local_108);
  if (local_28 != false) {
    FStreamableDownloadCachePin::~FStreamableDownloadCachePin(&local_40);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_60,(FWriteAccessScope *)local_108);
  if ((local_50 != 0) && (FStack_58.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_58.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_58,0,0,0x10);
    local_50 = 0;
  }
  if (local_f8.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_108._8_8_,(FDestructionSentinel *)local_108);
  }
  if (FStack_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_58.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_60.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)local_108);
  if ((local_68 != 0) && (FStack_70.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_70.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_70,0,0,0x10);
    local_68 = 0;
  }
  if (local_f8.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_108._8_8_,(FDestructionSentinel *)local_108);
  }
  if (FStack_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_70.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_90,(FWriteAccessScope *)local_108);
  if ((local_80 != 0) &&
     ((ForElementType<TAlignedBytes<16,16>_>)FStack_88.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_88.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_88,0,0,0x10);
    local_80 = 0;
  }
  if (local_f8.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_108._8_8_,(FDestructionSentinel *)local_108);
  }
  if ((ForElementType<TAlignedBytes<16,16>_>)FStack_88.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free(FStack_88.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_90.AccessDetector);
  DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)local_a0._0_8_,local_a0._8_4_);
  if ((atomic<unsigned___int64>)local_a0._0_8_ != (atomic<unsigned___int64>)0x0) {
    FMemory::Free((void *)local_a0._0_8_);
  }
  pFVar2 = (param_6->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return __return_storage_ptr__;
}

// StaticEnum<enum_EBodyTextureType> @ 14df8c250

UEnum * __cdecl StaticEnum<enum_EBodyTextureType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EBodyTextureType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MetaHumanSDKRuntime();
    Z_Registration_Info_UEnum_EBodyTextureType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MetaHumanSDKRuntime_EBodyTextureType,(UObject *)pUVar1,
                       L"EBodyTextureType");
  }
  return Z_Registration_Info_UEnum_EBodyTextureType.OuterSingleton;
}

// StaticEnum<enum_EFaceTextureType> @ 14df8c290

UEnum * __cdecl StaticEnum<enum_EFaceTextureType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFaceTextureType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MetaHumanSDKRuntime();
    Z_Registration_Info_UEnum_EFaceTextureType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MetaHumanSDKRuntime_EFaceTextureType,(UObject *)pUVar1,
                       L"EFaceTextureType");
  }
  return Z_Registration_Info_UEnum_EFaceTextureType.OuterSingleton;
}

// StaticEnum<enum_EMetaHumanBodyBodyPartIndex> @ 14df8c2d0

UEnum * __cdecl StaticEnum<enum_EMetaHumanBodyBodyPartIndex>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMetaHumanBodyBodyPartIndex.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MetaHumanSDKRuntime();
    Z_Registration_Info_UEnum_EMetaHumanBodyBodyPartIndex.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MetaHumanSDKRuntime_EMetaHumanBodyBodyPartIndex,
                       (UObject *)pUVar1,L"EMetaHumanBodyBodyPartIndex");
  }
  return Z_Registration_Info_UEnum_EMetaHumanBodyBodyPartIndex.OuterSingleton;
}

// StaticEnum<enum_EMetaHumanBodyType> @ 14df8c310

UEnum * __cdecl StaticEnum<enum_EMetaHumanBodyType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMetaHumanBodyType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MetaHumanSDKRuntime();
    Z_Registration_Info_UEnum_EMetaHumanBodyType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MetaHumanSDKRuntime_EMetaHumanBodyType,(UObject *)pUVar1,
                       L"EMetaHumanBodyType");
  }
  return Z_Registration_Info_UEnum_EMetaHumanBodyType.OuterSingleton;
}

// StaticEnum<enum_EMetaHumanQualityLevel> @ 14df8c350

UEnum * __cdecl StaticEnum<enum_EMetaHumanQualityLevel>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMetaHumanQualityLevel.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MetaHumanSDKRuntime();
    Z_Registration_Info_UEnum_EMetaHumanQualityLevel.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MetaHumanSDKRuntime_EMetaHumanQualityLevel,
                       (UObject *)pUVar1,L"EMetaHumanQualityLevel");
  }
  return Z_Registration_Info_UEnum_EMetaHumanQualityLevel.OuterSingleton;
}

// TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UMetaHumanComponentBase::LoadAndRunAnimBP'::__l2::<lambda_1>_> @ 14df8c390

TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_protected:_void___cdecl_UMetaHumanComponentBase::LoadAndRunAnimBP(TSoftClassPtr<UAnimInstance>,TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,bool,bool)_::_2_::<lambda_1>_>
* __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UMetaHumanComponentBase::LoadAndRunAnimBP'::__l2::<lambda_1>_>
::
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_UMetaHumanComponentBase::LoadAndRunAnimBP_::__l2::<lambda_1>_>
          (void *this,
          TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_protected:_void___cdecl_UMetaHumanComponentBase::LoadAndRunAnimBP(TSoftClassPtr<UAnimInstance>,TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,bool,bool)_::_2_::<lambda_1>_>
          *param_1)

{
  *(undefined ***)this =
       &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
  *(longlong *)((longlong)this + 0x10) = param_1->_padding_;
  *(undefined ***)this =
       &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UMetaHumanComponentBase::LoadAndRunAnimBP'::`2'::<lambda_1>_>
        ::_vftable_;
  *(FWeakObjectPtr *)((longlong)this + 0x18) = (param_1->Functor).WeakThis.WeakPtr;
  *(undefined8 *)((longlong)this + 0x20) =
       *(undefined8 *)&(param_1->Functor).AnimBlueprint.SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)((longlong)this + 0x28),
             (FSoftObjectPath *)&(param_1->Functor).AnimBlueprint.SoftObjectPtr.field_0x8);
  *(FWeakObjectPtr *)((longlong)this + 0x48) = (param_1->Functor).SkelMeshComponent.WeakPtr;
  *(bool *)((longlong)this + 0x50) = (param_1->Functor).bIsPostProcessingAnimBP;
  *(bool *)((longlong)this + 0x51) = (param_1->Functor).bRunAsOverridePostAnimBP;
  return this;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14df8cbe0

/* [thunk]:public: virtual void * __ptr64 __cdecl UMetaHumanComponentBase::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UMetaHumanComponentBase::_vector_deleting_destructor__adjustor_40__
          (UMetaHumanComponentBase *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UMetaHumanComponentBase *)&this[-1].Feet.ControlRigLODThreshold,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14df8cbf0

/* [thunk]:public: virtual void * __ptr64 __cdecl UMetaHumanComponentUE::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UMetaHumanComponentUE::_vector_deleting_destructor__adjustor_40__
          (UMetaHumanComponentUE *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UMetaHumanComponentUE *)&this[-1].PostProcessAnimBP,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14df8cc00

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UMetaHumanComponentBase::LoadAndRunAnimBP'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(void **)((longlong)this + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x38));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df8cc50

void * __thiscall
UMetaHumanComponentBase::_scalar_deleting_destructor_(UMetaHumanComponentBase *this,uint param_1)

{
  ~UMetaHumanComponentBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df8ccb0

void * __thiscall
UMetaHumanComponentUE::_scalar_deleting_destructor_(UMetaHumanComponentUE *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pvVar1 = *(void **)&(this->PostProcessAnimBP).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UMetaHumanComponentBase::~UMetaHumanComponentBase((UMetaHumanComponentBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1b8);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeMetaHumanBodyType @ 14df8cf40

void __cdecl EmptyLinkFunctionForGeneratedCodeMetaHumanBodyType(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMetaHumanComponentBase @ 14df8cf50

void __cdecl EmptyLinkFunctionForGeneratedCodeMetaHumanComponentBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMetaHumanComponentUE @ 14df8cf60

void __cdecl EmptyLinkFunctionForGeneratedCodeMetaHumanComponentUE(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMetaHumanSDKRuntime_init @ 14df8cf70

void __cdecl EmptyLinkFunctionForGeneratedCodeMetaHumanSDKRuntime_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMetaHumanTypes @ 14df8cf80

void __cdecl EmptyLinkFunctionForGeneratedCodeMetaHumanTypes(void)

{
  return;
}

// Z_Construct_UClass_UMetaHumanComponentBase_NoRegister @ 14df8e690

UClass * __cdecl Z_Construct_UClass_UMetaHumanComponentBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMetaHumanComponentBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetaHumanSDKRuntime",L"MetaHumanComponentBase",
               &Z_Registration_Info_UClass_UMetaHumanComponentBase.InnerSingleton,
               UMetaHumanComponentBase::StaticRegisterNativesUMetaHumanComponentBase,400,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UMetaHumanComponentBase>,
               InternalVTableHelperCtorCaller<UMetaHumanComponentBase>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetaHumanComponentBase.InnerSingleton;
}

// Z_Construct_UClass_UMetaHumanComponentUE_NoRegister @ 14df8e750

UClass * __cdecl Z_Construct_UClass_UMetaHumanComponentUE_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMetaHumanComponentUE.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetaHumanSDKRuntime",L"MetaHumanComponentUE",
               &Z_Registration_Info_UClass_UMetaHumanComponentUE.InnerSingleton,
               UMetaHumanComponentUE::StaticRegisterNativesUMetaHumanComponentUE,0x1b8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UMetaHumanComponentUE>,
               InternalVTableHelperCtorCaller<UMetaHumanComponentUE>,local_res8,
               UMetaHumanComponentBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetaHumanComponentUE.InnerSingleton;
}

// Z_Construct_UEnum_MetaHumanSDKRuntime_EBodyTextureType @ 14df8e810

UEnum * __cdecl Z_Construct_UEnum_MetaHumanSDKRuntime_EBodyTextureType(void)

{
  if (Z_Registration_Info_UEnum_EBodyTextureType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EBodyTextureType.InnerSingleton,
               &Z_Construct_UEnum_MetaHumanSDKRuntime_EBodyTextureType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EBodyTextureType.InnerSingleton;
}

// Z_Construct_UEnum_MetaHumanSDKRuntime_EFaceTextureType @ 14df8e850

UEnum * __cdecl Z_Construct_UEnum_MetaHumanSDKRuntime_EFaceTextureType(void)

{
  if (Z_Registration_Info_UEnum_EFaceTextureType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EFaceTextureType.InnerSingleton,
               &Z_Construct_UEnum_MetaHumanSDKRuntime_EFaceTextureType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EFaceTextureType.InnerSingleton;
}

// Z_Construct_UEnum_MetaHumanSDKRuntime_EMetaHumanBodyBodyPartIndex @ 14df8e890

UEnum * __cdecl Z_Construct_UEnum_MetaHumanSDKRuntime_EMetaHumanBodyBodyPartIndex(void)

{
  if (Z_Registration_Info_UEnum_EMetaHumanBodyBodyPartIndex.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMetaHumanBodyBodyPartIndex.InnerSingleton,
               &Z_Construct_UEnum_MetaHumanSDKRuntime_EMetaHumanBodyBodyPartIndex_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EMetaHumanBodyBodyPartIndex.InnerSingleton;
}

// Z_Construct_UEnum_MetaHumanSDKRuntime_EMetaHumanQualityLevel @ 14df8e8d0

UEnum * __cdecl Z_Construct_UEnum_MetaHumanSDKRuntime_EMetaHumanQualityLevel(void)

{
  if (Z_Registration_Info_UEnum_EMetaHumanQualityLevel.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMetaHumanQualityLevel.InnerSingleton,
               &Z_Construct_UEnum_MetaHumanSDKRuntime_EMetaHumanQualityLevel_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMetaHumanQualityLevel.InnerSingleton;
}

// IMPLEMENT_MODULE_MetaHumanSDKRuntime @ 14df8e910

void __cdecl IMPLEMENT_MODULE_MetaHumanSDKRuntime(void)

{
  return;
}

// PathSeparator'' @ 150460820

void __cdecl `dynamic_atexit_destructor_for_'FControlRigOverrideValue::PathSeparator__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FControlRigOverrideValue::PathSeparator.Data.AllocatorInstance.Data;
  if (FControlRigOverrideValue::PathSeparator.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FControlRigOverrideValue::PathSeparator.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
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

// RootNodeID'' @ 150460840

void __cdecl `dynamic_atexit_destructor_for_'FOverriddenPropertySet::RootNodeID__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FOverriddenPropertySet::RootNodeID.Path.Path.AllocatorInstance.Data;
  if (FOverriddenPropertySet::RootNodeID.Path.Path.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FOverriddenPropertySet::RootNodeID.Path.Path.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
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

