// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 355

// Empty'' @ 1411b84c0

void __cdecl `dynamic_initializer_for_'FRigVMPropertyPath::Empty__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FRigVMPropertyPath::Empty__);
  return;
}

// EmptyProperties'' @ 1411b84e0

void __cdecl `dynamic_initializer_for_'FRigVMMemoryStorageStruct::EmptyProperties__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FRigVMMemoryStorageStruct::EmptyProperties__);
  return;
}

// EmptyProperties'' @ 1411b8500

void __cdecl `dynamic_initializer_for_'URigVMMemoryStorage::EmptyProperties__(void)

{
  atexit(`dynamic_atexit_destructor_for_'URigVMMemoryStorage::EmptyProperties__);
  return;
}

// EmptyPropertyPaths'' @ 1411b8520

void __cdecl `dynamic_initializer_for_'FRigVMMemoryStorageStruct::EmptyPropertyPaths__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FRigVMMemoryStorageStruct::EmptyPropertyPaths__);
  return;
}

// EmptyPropertyPaths'' @ 1411b8540

void __cdecl `dynamic_initializer_for_'URigVMMemoryStorage::EmptyPropertyPaths__(void)

{
  atexit(`dynamic_atexit_destructor_for_'URigVMMemoryStorage::EmptyPropertyPaths__);
  return;
}

// FindFunctionHeaderFromPathFunc'' @ 1411b8560

void __cdecl
`dynamic_initializer_for_'FRigVMGraphFunctionHeader::FindFunctionHeaderFromPathFunc__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FRigVMGraphFunctionHeader::FindFunctionHeaderFromPathFunc__
        );
  return;
}

// GetFunctionHostFromObjectFunc'' @ 1411b8580

void __cdecl
`dynamic_initializer_for_'FRigVMGraphFunctionData::GetFunctionHostFromObjectFunc__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FRigVMGraphFunctionData::GetFunctionHostFromObjectFunc__);
  return;
}

// GetVariantRefsByGuidFunc'' @ 1411b85a0

void __cdecl
`dynamic_initializer_for_'FRigVMGraphFunctionIdentifier::GetVariantRefsByGuidFunc__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FRigVMGraphFunctionIdentifier::GetVariantRefsByGuidFunc__);
  return;
}

// `dynamic_initializer_for_'BoolArrayTypeName'' @ 1411b85c0

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

// `dynamic_initializer_for_'BoolTypeName'' @ 1411b8610

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

// `dynamic_initializer_for_'CVarRigVMEnableLocalizedRegistry'' @ 1411b8660

void __cdecl _dynamic_initializer_for__CVarRigVMEnableLocalizedRegistry__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarRigVMEnableLocalizedRegistry,L"RigVM.EnableLocalizedRegistry",local_res8,
             L"Set this to true to allow VMs to serialize their own localized registries.",0);
  atexit(_dynamic_atexit_destructor_for__CVarRigVMEnableLocalizedRegistry__);
  return;
}

// `dynamic_initializer_for_'CVarRigVMUpdateDispatchFactoriesGreedily'' @ 1411b86b0

void __cdecl _dynamic_initializer_for__CVarRigVMUpdateDispatchFactoriesGreedily__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarRigVMUpdateDispatchFactoriesGreedily,L"RigVM.UpdateDispatchFactoriesGreedily",
             local_res8,
             L"Set this to false to avoid loading dispatch factories during engine init / plugin mount."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRigVMUpdateDispatchFactoriesGreedily__);
  return;
}

// `dynamic_initializer_for_'DoubleArrayTypeName'' @ 1411b8700

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

// `dynamic_initializer_for_'DoubleTypeName'' @ 1411b8750

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

// `dynamic_initializer_for_'EmptyBraces'' @ 1411b87a0

void __cdecl UE::RigVM::RigVMCore::Private::_dynamic_initializer_for__EmptyBraces__(void)

{
  ::FString::FString(&EmptyBraces,L"()");
  atexit(_dynamic_atexit_destructor_for__EmptyBraces__);
  return;
}

// `dynamic_initializer_for_'FNameArrayTypeName'' @ 1411b87d0

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

// `dynamic_initializer_for_'FNameTypeName'' @ 1411b8820

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

// `dynamic_initializer_for_'FStringArrayTypeName'' @ 1411b8870

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

// `dynamic_initializer_for_'FStringTypeName'' @ 1411b88c0

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

// `dynamic_initializer_for_'FTextTypeName'' @ 1411b8910

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

// `dynamic_initializer_for_'FloatArrayTypeName'' @ 1411b8960

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

// `dynamic_initializer_for_'FloatTypeName'' @ 1411b89b0

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

// `dynamic_initializer_for_'GRigVMRegistrySingletonHelper'' @ 1411b8a00

void __cdecl _dynamic_initializer_for__GRigVMRegistrySingletonHelper__(void)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_20 = FRigVMRegistry_NoLock::OnEngineInit;
  local_38[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            (&GRigVMRegistrySingletonHelper,EndOfEngineInit,
             (TFunction<void___cdecl(void)> *)local_38,false);
  return;
}

// `dynamic_initializer_for_'Int32ArrayTypeName'' @ 1411b8a60

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

// `dynamic_initializer_for_'Int32TypeName'' @ 1411b8ab0

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

// `dynamic_initializer_for_'Int64TypeName'' @ 1411b8b00

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

// `dynamic_initializer_for_'IntTypeName'' @ 1411b8b50

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

// `dynamic_initializer_for_'ModuleName'' @ 1411b8ba0

void __cdecl AssetRegistryConstants::_dynamic_initializer_for__ModuleName__(void)

{
  ::FName::FName(&ModuleName,"AssetRegistry");
  return;
}

// `dynamic_initializer_for_'UInt32ArrayTypeName'' @ 1411b8bc0

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

// `dynamic_initializer_for_'UInt32TypeName'' @ 1411b8c10

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

// `dynamic_initializer_for_'UInt64TypeName'' @ 1411b8c60

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

// `dynamic_initializer_for_'UInt8ArrayTypeName'' @ 1411b8cb0

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

// `dynamic_initializer_for_'UInt8TypeName'' @ 1411b8d00

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

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMFunction_h__Script_RigVM_2916065487'' @ 1411b8d50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMFunction_h__Script_RigVM_2916065487__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/RigVM",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMFunction_h__Script_RigVM_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMGraphFunctionDefinition_h__Script_RigVM_2112990359'' @ 1411b8da0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMGraphFunctionDefinition_h__Script_RigVM_2112990359__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/RigVM",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMGraphFunctionDefinition_h__Script_RigVM_Statics
             ::ScriptStructInfo,8,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h__Script_RigVM_1833733130'' @ 1411b8de0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h__Script_RigVM_1833733130__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/RigVM",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h__Script_RigVM_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h__Script_RigVM_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryCommon_h__Script_RigVM_3287287168'' @ 1411b8e30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryCommon_h__Script_RigVM_3287287168__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/RigVM",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryCommon_h__Script_RigVM_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryCommon_h__Script_RigVM_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryDeprecated_h__Script_RigVM_1469825725'' @ 1411b8e80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryDeprecated_h__Script_RigVM_1469825725__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/RigVM",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryDeprecated_h__Script_RigVM_Statics
             ::ScriptStructInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryDeprecated_h__Script_RigVM_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryStorageStruct_h__Script_RigVM_3798663467'' @ 1411b8ed0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryStorageStruct_h__Script_RigVM_3798663467__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/RigVM",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryStorageStruct_h__Script_RigVM_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryStorage_h__Script_RigVM_2392987868'' @ 1411b8f10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryStorage_h__Script_RigVM_2392987868__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/RigVM",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryStorage_h__Script_RigVM_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryStorage_h__Script_RigVM_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMNativized_h__Script_RigVM_1007797468'' @ 1411b8f60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMNativized_h__Script_RigVM_1007797468__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/RigVM",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMNativized_h__Script_RigVM_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMNodeLayout_h__Script_RigVM_1733694708'' @ 1411b8fa0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMNodeLayout_h__Script_RigVM_1733694708__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/RigVM",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMNodeLayout_h__Script_RigVM_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMObjectArchive_h__Script_RigVM_3318560362'' @ 1411b8fe0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMObjectArchive_h__Script_RigVM_3318560362__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/RigVM",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMObjectArchive_h__Script_RigVM_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMProfilingInfo_h__Script_RigVM_1867075982'' @ 1411b9020

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMProfilingInfo_h__Script_RigVM_1867075982__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/RigVM",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMProfilingInfo_h__Script_RigVM_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMStruct_h__Script_RigVM_4014982429'' @ 1411b9060

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMStruct_h__Script_RigVM_4014982429__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/RigVM",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMStruct_h__Script_RigVM_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMTemplate_h__Script_RigVM_2768604886'' @ 1411b90a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMTemplate_h__Script_RigVM_2768604886__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/RigVM",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMTemplate_h__Script_RigVM_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// Z_Construct_UEnum_RigVM_ERigVMPinDirection @ 14a0ab9d0

UEnum * __cdecl Z_Construct_UEnum_RigVM_ERigVMPinDirection(void)

{
  if (Z_Registration_Info_UEnum_ERigVMPinDirection.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERigVMPinDirection.InnerSingleton,
               &Z_Construct_UEnum_RigVM_ERigVMPinDirection_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERigVMPinDirection.InnerSingleton;
}

// ERigVMPinDirection_StaticEnum @ 14a0aba10

UEnum * __cdecl ERigVMPinDirection_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigVMPinDirection.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UEnum_ERigVMPinDirection.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigVM_ERigVMPinDirection,(UObject *)pUVar1,
                       L"ERigVMPinDirection");
  }
  return Z_Registration_Info_UEnum_ERigVMPinDirection.OuterSingleton;
}

// ERigVMFunctionArgumentDirection_StaticEnum @ 14a0aba60

UEnum * __cdecl ERigVMFunctionArgumentDirection_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigVMFunctionArgumentDirection.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UEnum_ERigVMFunctionArgumentDirection.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigVM_ERigVMFunctionArgumentDirection,(UObject *)pUVar1,
                       L"ERigVMFunctionArgumentDirection");
  }
  return Z_Registration_Info_UEnum_ERigVMFunctionArgumentDirection.OuterSingleton;
}

// NewStructOps @ 14a0abd10

void * __cdecl Z_Construct_UScriptStruct_FRigVMTemplateArgumentType_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMTemplateArgumentType,&UE::CoreUObject::Private::Construct<FRigVMTemplateArgumentType>,&UE::CoreUObject::Private::ConstructForTests<FRigVMTemplateArgumentType>,&UE::CoreUObject::Private::Destruct<FRigVMTemplateArgumentType>,&UE::CoreUObject::Private::Copy<FRigVMTemplateArgumentType>,&UE::CoreUObject::Private::GetStructTypeHash<FRigVMTemplateArgumentType>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FRigVMFunctionCompilationData @ 14a0abd50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMFunctionCompilationData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunctionCompilationData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMFunctionCompilationData.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMFunctionCompilationData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMFunctionCompilationData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription @ 14a0abdd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunctionCompilationPropertyDescription.InnerSingleton
      == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMFunctionCompilationPropertyDescription.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMFunctionCompilationPropertyDescription.InnerSingleton
      != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMFunctionCompilationPropertyDescription.
           InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath @ 14a0abe50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunctionCompilationPropertyPath.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMFunctionCompilationPropertyPath.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMFunctionCompilationPropertyPath.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMFunctionCompilationPropertyPath.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument @ 14a0abed0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMGraphFunctionArgument.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMGraphFunctionArgument.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMGraphFunctionArgument.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMGraphFunctionArgument.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMGraphFunctionData @ 14a0abf50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMGraphFunctionData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMGraphFunctionData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMGraphFunctionData.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMGraphFunctionData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMGraphFunctionData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMGraphFunctionData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader @ 14a0abfd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMGraphFunctionHeader.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMGraphFunctionHeader.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMGraphFunctionHeader.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMGraphFunctionHeader.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier @ 14a0ac050

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMGraphFunctionIdentifier.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMGraphFunctionIdentifier.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMGraphFunctionIdentifier.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMGraphFunctionIdentifier.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMNodeLayout @ 14a0ac0d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMNodeLayout(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMNodeLayout.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMNodeLayout.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMNodeLayout_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMNodeLayout.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMNodeLayout.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMObjectArchive @ 14a0ac150

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMObjectArchive(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMObjectArchive.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMObjectArchive.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMObjectArchive_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMObjectArchive.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FRigVMObjectArchive.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMOperand @ 14a0ac1d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMOperand(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMOperand.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMOperand.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMOperand_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMOperand.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMOperand.InnerSingleton;
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

// NewStructOps @ 14a0ac250

void * __cdecl
Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMFunctionCompilationPropertyDescription,&UE::CoreUObject::Private::Construct<FRigVMFunctionCompilationPropertyDescription>,&UE::CoreUObject::Private::ConstructForTests<FRigVMFunctionCompilationPropertyDescription>,&UE::CoreUObject::Private::Destruct<FRigVMFunctionCompilationPropertyDescription>,&UE::CoreUObject::Private::Copy<FRigVMFunctionCompilationPropertyDescription>,&UE::CoreUObject::Private::GetStructTypeHash<FRigVMFunctionCompilationPropertyDescription>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a0ac2f0

void * __cdecl
Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMFunctionCompilationPropertyPath,&UE::CoreUObject::Private::Construct<FRigVMFunctionCompilationPropertyPath>,&UE::CoreUObject::Private::ConstructForTests<FRigVMFunctionCompilationPropertyPath>,&UE::CoreUObject::Private::Destruct<FRigVMFunctionCompilationPropertyPath>,&UE::CoreUObject::Private::Copy<FRigVMFunctionCompilationPropertyPath>,&UE::CoreUObject::Private::GetStructTypeHash<FRigVMFunctionCompilationPropertyPath>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bEncounteredSurpressedErrors_SetBit @ 14a0ac470

void __cdecl
Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::
NewProp_bEncounteredSurpressedErrors_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1e4) = 1;
  return;
}

// NewStructOps @ 14a0ac520

void * __cdecl Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x238;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMFunctionCompilationData,&UE::CoreUObject::Private::Construct<FRigVMFunctionCompilationData>,&UE::CoreUObject::Private::ConstructForTests<FRigVMFunctionCompilationData>,&UE::CoreUObject::Private::Destruct<FRigVMFunctionCompilationData>,&UE::CoreUObject::Private::Copy<FRigVMFunctionCompilationData>,&UE::CoreUObject::Private::GetStructTypeHash<FRigVMFunctionCompilationData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIsArray_SetBit @ 14a0ac6f0

void __cdecl
Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_bIsArray_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x40) = 1;
  return;
}

// NewProp_bIsConst_SetBit @ 14a0ac700

void __cdecl
Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_bIsConst_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x58) = 1;
  return;
}

// NewStructOps @ 14a0ac710

void * __cdecl Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMGraphFunctionArgument,&UE::CoreUObject::Private::Construct<FRigVMGraphFunctionArgument>,&UE::CoreUObject::Private::ConstructForTests<FRigVMGraphFunctionArgument>,&UE::CoreUObject::Private::Destruct<FRigVMGraphFunctionArgument>,&UE::CoreUObject::Private::Copy<FRigVMGraphFunctionArgument>,&UE::CoreUObject::Private::GetStructTypeHash<FRigVMGraphFunctionArgument>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a0acb30

void * __cdecl Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMGraphFunctionIdentifier,&UE::CoreUObject::Private::Construct<FRigVMGraphFunctionIdentifier>,&UE::CoreUObject::Private::ConstructForTests<FRigVMGraphFunctionIdentifier>,&UE::CoreUObject::Private::Destruct<FRigVMGraphFunctionIdentifier>,&UE::CoreUObject::Private::Copy<FRigVMGraphFunctionIdentifier>,&UE::CoreUObject::Private::GetStructTypeHash<FRigVMGraphFunctionIdentifier>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_URigVMGraphFunctionHost @ 14a0acb80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_URigVMGraphFunctionHost(void)

{
  if (Z_Registration_Info_UClass_URigVMGraphFunctionHost.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_URigVMGraphFunctionHost.OuterSingleton,
               &Z_Construct_UClass_URigVMGraphFunctionHost_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_URigVMGraphFunctionHost.OuterSingleton;
}

// NewStructOps @ 14a0acbc0

void * __cdecl Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1f8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMGraphFunctionHeader,&UE::CoreUObject::Private::Construct<FRigVMGraphFunctionHeader>,&UE::CoreUObject::Private::ConstructForTests<FRigVMGraphFunctionHeader>,&UE::CoreUObject::Private::Destruct<FRigVMGraphFunctionHeader>,&UE::CoreUObject::Private::Copy<FRigVMGraphFunctionHeader>,&UE::CoreUObject::Private::GetStructTypeHash<FRigVMGraphFunctionHeader>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a0acd00

void * __cdecl Z_Construct_UScriptStruct_FRigVMGraphFunctionStore_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMGraphFunctionStore,&UE::CoreUObject::Private::Construct<FRigVMGraphFunctionStore>,&UE::CoreUObject::Private::ConstructForTests<FRigVMGraphFunctionStore>,&UE::CoreUObject::Private::Destruct<FRigVMGraphFunctionStore>,&UE::CoreUObject::Private::Copy<FRigVMGraphFunctionStore>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a0acd80

void * __cdecl Z_Construct_UScriptStruct_FRigVMGraphFunctionHeaderArray_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMGraphFunctionHeaderArray,&UE::CoreUObject::Private::Construct<FRigVMGraphFunctionHeaderArray>,&UE::CoreUObject::Private::ConstructForTests<FRigVMGraphFunctionHeaderArray>,&UE::CoreUObject::Private::Destruct<FRigVMGraphFunctionHeaderArray>,&UE::CoreUObject::Private::Copy<FRigVMGraphFunctionHeaderArray>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a0ad050

void * __cdecl Z_Construct_UScriptStruct_FRigVMGraphFunctionData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x460;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMGraphFunctionData,&UE::CoreUObject::Private::Construct<FRigVMGraphFunctionData>,&UE::CoreUObject::Private::ConstructForTests<FRigVMGraphFunctionData>,&UE::CoreUObject::Private::Destruct<FRigVMGraphFunctionData>,&UE::CoreUObject::Private::Copy<FRigVMGraphFunctionData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_URigVMNativized @ 14a0ad240

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_URigVMNativized(void)

{
  if (Z_Registration_Info_UClass_URigVMNativized.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_URigVMNativized.OuterSingleton,
               &Z_Construct_UClass_URigVMNativized_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_URigVMNativized.OuterSingleton;
}

// Z_Construct_UScriptStruct_FRigVMPinCategory @ 14a0ad6d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMPinCategory(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMPinCategory.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMPinCategory.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMPinCategory_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMPinCategory.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMPinCategory.InnerSingleton;
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

// NewProp_bExpandedByDefault_SetBit @ 14a0ad800

void __cdecl
Z_Construct_UScriptStruct_FRigVMPinCategory_Statics::NewProp_bExpandedByDefault_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewStructOps @ 14a0ad810

void * __cdecl Z_Construct_UScriptStruct_FRigVMPinCategory_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMPinCategory,&UE::CoreUObject::Private::Construct<FRigVMPinCategory>,&UE::CoreUObject::Private::ConstructForTests<FRigVMPinCategory>,&UE::CoreUObject::Private::Destruct<FRigVMPinCategory>,&UE::CoreUObject::Private::Copy<FRigVMPinCategory>,&UE::CoreUObject::Private::GetStructTypeHash<FRigVMPinCategory>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a0ad8a0

void * __cdecl Z_Construct_UScriptStruct_FRigVMNodeLayout_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMNodeLayout,&UE::CoreUObject::Private::Construct<FRigVMNodeLayout>,&UE::CoreUObject::Private::ConstructForTests<FRigVMNodeLayout>,&UE::CoreUObject::Private::Destruct<FRigVMNodeLayout>,&UE::CoreUObject::Private::Copy<FRigVMNodeLayout>,&UE::CoreUObject::Private::GetStructTypeHash<FRigVMNodeLayout>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UEnum_RigVM_ERigVMMemoryType @ 14a0ad920

UEnum * __cdecl Z_Construct_UEnum_RigVM_ERigVMMemoryType(void)

{
  if (Z_Registration_Info_UEnum_ERigVMMemoryType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERigVMMemoryType.InnerSingleton,
               &Z_Construct_UEnum_RigVM_ERigVMMemoryType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERigVMMemoryType.InnerSingleton;
}

// ERigVMMemoryType_StaticEnum @ 14a0ad960

UEnum * __cdecl ERigVMMemoryType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigVMMemoryType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UEnum_ERigVMMemoryType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigVM_ERigVMMemoryType,(UObject *)pUVar1,
                       L"ERigVMMemoryType");
  }
  return Z_Registration_Info_UEnum_ERigVMMemoryType.OuterSingleton;
}

// NewStructOps @ 14a0ad9a0

void * __cdecl
Z_Construct_UScriptStruct_FRigVMInstructionSetExecuteState_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMInstructionSetExecuteState,&UE::CoreUObject::Private::Construct<FRigVMInstructionSetExecuteState>,&UE::CoreUObject::Private::ConstructForTests<FRigVMInstructionSetExecuteState>,&UE::CoreUObject::Private::Destruct<FRigVMInstructionSetExecuteState>,&UE::CoreUObject::Private::Copy<FRigVMInstructionSetExecuteState>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIsCompressed_SetBit @ 14a0ada60

void __cdecl
Z_Construct_UScriptStruct_FRigVMObjectArchive_Statics::NewProp_bIsCompressed_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewStructOps @ 14a0ada70

void * __cdecl Z_Construct_UScriptStruct_FRigVMObjectArchive_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMObjectArchive,&UE::CoreUObject::Private::Construct<FRigVMObjectArchive>,&UE::CoreUObject::Private::ConstructForTests<FRigVMObjectArchive>,&UE::CoreUObject::Private::Destruct<FRigVMObjectArchive>,&UE::CoreUObject::Private::Copy<FRigVMObjectArchive>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a0adab0

void * __cdecl Z_Construct_UScriptStruct_FRigVMOperand_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 6;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMOperand,&UE::CoreUObject::Private::Construct<FRigVMOperand>,&UE::CoreUObject::Private::ConstructForTests<FRigVMOperand>,&UE::CoreUObject::Private::Destruct<FRigVMOperand>,&UE::CoreUObject::Private::Copy<FRigVMOperand>,&UE::CoreUObject::Private::GetStructTypeHash<FRigVMOperand>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 2;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UEnum_RigVM_ERigVMRegisterType @ 14a0add30

UEnum * __cdecl Z_Construct_UEnum_RigVM_ERigVMRegisterType(void)

{
  if (Z_Registration_Info_UEnum_ERigVMRegisterType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERigVMRegisterType.InnerSingleton,
               &Z_Construct_UEnum_RigVM_ERigVMRegisterType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERigVMRegisterType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FRigVMRegister @ 14a0add70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMRegister(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMRegister.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMRegister.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMRegister_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMRegister.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMRegister.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMRegisterOffset @ 14a0addf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMRegisterOffset(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMRegisterOffset.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMRegisterOffset.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMRegisterOffset.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FRigVMRegisterOffset.InnerSingleton;
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

// ERigVMRegisterType_StaticEnum @ 14a0ade70

UEnum * __cdecl ERigVMRegisterType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigVMRegisterType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UEnum_ERigVMRegisterType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigVM_ERigVMRegisterType,(UObject *)pUVar1,
                       L"ERigVMRegisterType");
  }
  return Z_Registration_Info_UEnum_ERigVMRegisterType.OuterSingleton;
}

// NewProp_bIsArray_SetBit @ 14a0adeb0

void __cdecl
Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_bIsArray_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewProp_bIsDynamic_SetBit @ 14a0adec0

void __cdecl
Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_bIsDynamic_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x21) = 1;
  return;
}

// NewStructOps @ 14a0aded0

void * __cdecl Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x24;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMRegister,&UE::CoreUObject::Private::Construct<FRigVMRegister>,&UE::CoreUObject::Private::ConstructForTests<FRigVMRegister>,&UE::CoreUObject::Private::Destruct<FRigVMRegister>,&UE::CoreUObject::Private::Copy<FRigVMRegister>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a0adfc0

void * __cdecl Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMRegisterOffset,&UE::CoreUObject::Private::Construct<FRigVMRegisterOffset>,&UE::CoreUObject::Private::ConstructForTests<FRigVMRegisterOffset>,&UE::CoreUObject::Private::Destruct<FRigVMRegisterOffset>,&UE::CoreUObject::Private::Copy<FRigVMRegisterOffset>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a0ae010

void * __cdecl Z_Construct_UScriptStruct_FRigVMInstructionVisitInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMInstructionVisitInfo,&UE::CoreUObject::Private::Construct<FRigVMInstructionVisitInfo>,&UE::CoreUObject::Private::ConstructForTests<FRigVMInstructionVisitInfo>,&UE::CoreUObject::Private::Destruct<FRigVMInstructionVisitInfo>,&UE::CoreUObject::Private::Copy<FRigVMInstructionVisitInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bUseNameMap_SetBit @ 14a0ae050

void __cdecl
Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_bUseNameMap_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 14a0ae060

void * __cdecl Z_Construct_UScriptStruct_FRigVMProfilingInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMProfilingInfo,&UE::CoreUObject::Private::Construct<FRigVMProfilingInfo>,&UE::CoreUObject::Private::ConstructForTests<FRigVMProfilingInfo>,&UE::CoreUObject::Private::Destruct<FRigVMProfilingInfo>,&UE::CoreUObject::Private::Copy<FRigVMProfilingInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bEncounteredErrorDuringLoad_SetBit @ 14a0ae0a0

void __cdecl
Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_bEncounteredErrorDuringLoad_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x98) = 1;
  return;
}

// NewStructOps @ 14a0ae0b0

void * __cdecl Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMMemoryContainer,&UE::CoreUObject::Private::Construct<FRigVMMemoryContainer>,&UE::CoreUObject::Private::ConstructForTests<FRigVMMemoryContainer>,&UE::CoreUObject::Private::Destruct<FRigVMMemoryContainer>,&UE::CoreUObject::Private::Copy<FRigVMMemoryContainer>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_URigVMMemoryStorage @ 14a0ae4b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_URigVMMemoryStorage(void)

{
  if (Z_Registration_Info_UClass_URigVMMemoryStorage.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_URigVMMemoryStorage.OuterSingleton,
               &Z_Construct_UClass_URigVMMemoryStorage_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_URigVMMemoryStorage.OuterSingleton;
}

// Z_Construct_UClass_URigVMMemoryStorageGeneratorClass @ 14a0ae4f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_URigVMMemoryStorageGeneratorClass(void)

{
  if (Z_Registration_Info_UClass_URigVMMemoryStorageGeneratorClass.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_URigVMMemoryStorageGeneratorClass.OuterSingleton,
               &Z_Construct_UClass_URigVMMemoryStorageGeneratorClass_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_URigVMMemoryStorageGeneratorClass.OuterSingleton;
}

// NewStructOps @ 14a0ae590

void * __cdecl Z_Construct_UScriptStruct_FRigVMBranchInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1c;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMBranchInfo,&UE::CoreUObject::Private::Construct<FRigVMBranchInfo>,&UE::CoreUObject::Private::ConstructForTests<FRigVMBranchInfo>,&UE::CoreUObject::Private::Destruct<FRigVMBranchInfo>,&UE::CoreUObject::Private::Copy<FRigVMBranchInfo>,&UE::CoreUObject::Private::GetStructTypeHash<FRigVMBranchInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FRigVMStruct @ 14a0aebd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMStruct(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMStruct.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMStruct.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMStruct_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMStruct.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMStruct.InnerSingleton;
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

// NewStructOps @ 14a0aec50

void * __cdecl Z_Construct_UScriptStruct_FRigVMStruct_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMStruct,&UE::CoreUObject::Private::Construct<FRigVMStruct>,&UE::CoreUObject::Private::ConstructForTests<FRigVMStruct>,&UE::CoreUObject::Private::Destruct<FRigVMStruct>,&UE::CoreUObject::Private::Copy<FRigVMStruct>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a0aec90

void * __cdecl Z_Construct_UScriptStruct_FRigVMStructMutable_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMStructMutable,&UE::CoreUObject::Private::Construct<FRigVMStructMutable>,&UE::CoreUObject::Private::ConstructForTests<FRigVMStructMutable>,&UE::CoreUObject::Private::Destruct<FRigVMStructMutable>,&UE::CoreUObject::Private::Copy<FRigVMStructMutable>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a0af200

void * __cdecl Z_Construct_UScriptStruct_FRigVMMemoryStorageStruct_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMMemoryStorageStruct,&UE::CoreUObject::Private::Construct<FRigVMMemoryStorageStruct>,&UE::CoreUObject::Private::ConstructForTests<FRigVMMemoryStorageStruct>,&UE::CoreUObject::Private::Destruct<FRigVMMemoryStorageStruct>,&UE::CoreUObject::Private::SerializeArchive<FRigVMMemoryStorageStruct>,&UE::CoreUObject::Private::Copy<FRigVMMemoryStorageStruct>,&UE::CoreUObject::Private::AddStructReferencedObjects<FRigVMMemoryStorageStruct>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// operator_new<FRigVMFunction,16384,TSizedDefaultAllocator<32>_> @ 14a0af830

void * __cdecl
operator_new<FRigVMFunction,16384,TSizedDefaultAllocator<32>_>
          (ulong64 param_1,TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  
  if (param_1 != 0x70) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("Size == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ChunkedArray.h"
                       ,0x176,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pvVar6 = (void *)(*pcVar1)();
      return pvVar6;
    }
  }
  iVar4 = TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_>::Add(param_2,1);
  uVar2 = iVar4 / 0x92;
  uVar5 = 0;
  if ((int)uVar2 < (param_2->Chunks).Array.ArrayNum) {
    uVar5 = ~uVar2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pvVar6 = (void *)(*pcVar1)();
      return pvVar6;
    }
  }
  return (void *)((ulonglong)(uint)(iVar4 % 0x92) * 0x70 +
                 *(longlong *)
                  ((param_2->Chunks).Array.AllocatorInstance.Data + (longlong)(int)uVar2 * 8));
}

// operator_new<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_> @ 14a0af910

void * __cdecl
operator_new<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_>
          (ulong64 param_1,TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  void *pvVar8;
  FRigVMTemplate *pFVar9;
  longlong lVar10;
  FRigVMTemplate *pFVar11;
  FRigVMTemplate *this;
  uint uVar12;
  ulonglong uVar13;
  FRigVMTemplate *local_38 [2];
  
  if ((param_1 != 0x150) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("Size == sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ChunkedArray.h"
                         ,0x176,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pvVar8 = (void *)(*pcVar3)();
    return pvVar8;
  }
  iVar1 = param_2->NumElements;
  param_2->NumElements = iVar1 + 1;
  iVar4 = (iVar1 + 0x30) / 0x30;
  iVar7 = (param_2->Chunks).Array.ArrayNum;
  if (iVar7 < iVar4) {
    uVar13 = (ulonglong)(uint)(iVar4 - iVar7);
    do {
      pFVar9 = operator_new(0x3f00);
      pFVar11 = (FRigVMTemplate *)0x0;
      if (pFVar9 != (FRigVMTemplate *)0x0) {
        lVar10 = 0x30;
        this = pFVar9;
        do {
          FRigVMTemplate::FRigVMTemplate(this);
          this = this + 1;
          lVar10 = lVar10 + -1;
          pFVar11 = pFVar9;
        } while (lVar10 != 0);
      }
      pFVar2 = (param_2->Chunks).Array.AllocatorInstance.Data;
      local_38[0] = pFVar11;
      if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 <
           pFVar2 + (longlong)(param_2->Chunks).Array.ArrayMax * 8)) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        pvVar8 = (void *)(*pcVar3)();
        return pvVar8;
      }
      iVar7 = (param_2->Chunks).Array.ArrayNum;
      if (iVar7 == (param_2->Chunks).Array.ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)param_2,&(param_2->Chunks).Array.ArrayMax);
      }
      pFVar2 = (param_2->Chunks).Array.AllocatorInstance.Data;
      (param_2->Chunks).Array.ArrayNum = iVar7 + 1;
      *(FRigVMTemplate **)(pFVar2 + (longlong)iVar7 * 8) = local_38[0];
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  uVar5 = iVar1 / 0x30;
  uVar12 = 0;
  if ((int)uVar5 < (param_2->Chunks).Array.ArrayNum) {
    uVar12 = ~uVar5 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    pvVar8 = (void *)(*pcVar3)();
    return pvVar8;
  }
  return (void *)((ulonglong)(uint)(iVar1 % 0x30) * 0x150 +
                 *(longlong *)
                  ((param_2->Chunks).Array.AllocatorInstance.Data + (longlong)(int)uVar5 * 8));
}

// operator<<<int,FName> @ 14a0afb30

FArchive * __cdecl operator<<<int,FName>(FArchive *param_1,TTuple<int,FName> *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    *(undefined4 *)param_2 = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&param_2->field_0x4);
  return param_1;
}

// operator<<<TObjectPtr<UClass_const_>,DefaultKeyFuncs<TObjectPtr<UClass_const_>,0>,FDefaultSetAllocator> @ 14a0afbb0

FArchive * __cdecl
operator<<<TObjectPtr<UClass_const_>,DefaultKeyFuncs<TObjectPtr<UClass_const_>,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TObjectPtr<UClass_const_>,DefaultKeyFuncs<TObjectPtr<UClass_const_>,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  UObject *pUVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  uint uVar13;
  undefined8 *puVar14;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TObjectPtr<UClass_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar10 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar13 = 1;
  uVar7 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar7) {
    uVar8 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar13 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((int)uVar7 < 1) {
    return param_1;
  }
  if ((int)uVar13 < 1) {
    return param_1;
  }
  *piVar1 = uVar13;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = uVar13;
  if (uVar13 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_14a0b9e5e;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_14a0b9e5e:
  uVar11 = (ulonglong)uVar13;
  uVar8 = uVar10;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar5 = uVar8 & (longlong)(int)uVar13 - 1U;
    uVar8 = uVar8 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar5 * 4) = 0xffffffff;
    uVar11 = uVar11 - 1;
  } while (uVar11 != 0);
  if (*piVar1 != 0) {
    uVar7 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar12 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar12 == (uint *)0x0) {
        puVar12 = (uint *)TStack_50.Array;
      }
      uVar13 = *puVar12;
      uVar8 = uVar10;
      while (uVar13 == 0) {
        iVar9 = (int)uVar10;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        uStack_78 = iVar9 + 1;
        uVar10 = (ulonglong)uStack_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_14a0b9f3b;
        uVar13 = puVar12[(longlong)iVar9 + 1];
      }
      uStack_74 = -uVar13 & uVar13;
      uVar10 = (ulonglong)uStack_74 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar10 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_14a0b9f3b:
        uVar10 = (ulonglong)uVar7;
        uStack_64 = uVar7;
      }
    }
    TStack_50._padding_ = CONCAT44(uStack_74,uStack_78);
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar10 < (int)uVar7) {
      do {
        puVar14 = (undefined8 *)((longlong)(int)uVar10 * 0x10 + *(longlong *)&param_2->Elements);
        pUVar3 = (UObject *)*puVar14;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        uVar7 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
                -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar7 = (uVar7 >> 0x10 ^ uVar7) & *piVar1 - 1U;
        *(uint *)((longlong)puVar14 + 0xc) = uVar7;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(puVar14 + 1) = *(undefined4 *)((longlong)FVar6 + uVar8 * 4);
        *(int *)((longlong)FVar6 + uVar8 * 4) = (int)uVar10;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar10 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator> @ 14a0afbc0

FArchive * __cdecl
operator<<<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> FVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint uVar12;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<int,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar6 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar12 = 1;
  uVar7 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar7) {
    uVar8 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((int)uVar7 < 1) {
    return param_1;
  }
  if ((int)uVar12 < 1) {
    return param_1;
  }
  *piVar1 = uVar12;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = uVar12;
  if (uVar12 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_14a0ba13e;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_14a0ba13e:
  uVar10 = (ulonglong)uVar12;
  uVar8 = uVar6;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar5 = FVar2;
    }
    uVar4 = uVar8 & (longlong)(int)uVar12 - 1U;
    uVar8 = uVar8 + 1;
    *(undefined4 *)((longlong)FVar5 + uVar4 * 4) = 0xffffffff;
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
  if (*piVar1 != 0) {
    uVar7 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar11 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)TStack_50.Array;
      }
      uVar12 = *puVar11;
      uVar8 = uVar6;
      while (uVar12 == 0) {
        iVar9 = (int)uVar6;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        uStack_78 = iVar9 + 1;
        uVar6 = (ulonglong)uStack_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_14a0ba21b;
        uVar12 = puVar11[(longlong)iVar9 + 1];
      }
      uStack_74 = -uVar12 & uVar12;
      uVar6 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar6 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_14a0ba21b:
        uVar6 = (ulonglong)uVar7;
        uStack_64 = uVar7;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar6 < (int)uVar7) {
      do {
        iVar9 = (int)uVar6;
        uVar7 = *piVar1 - 1U & *(uint *)(*(longlong *)&param_2->Elements + (longlong)iVar9 * 0x14);
        lVar3 = *(longlong *)&param_2->Elements + (longlong)iVar9 * 0x14;
        *(uint *)(lVar3 + 0x10) = uVar7;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar5 = FVar2;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(lVar3 + 0xc) = *(undefined4 *)((longlong)FVar5 + uVar6 * 4);
        *(int *)((longlong)FVar5 + uVar6 * 4) = iVar9;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar6 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>,TDefaultMapHashableKeyFuncs<FRigVMGraphFunctionIdentifier,unsigned_int,0>,FDefaultSetAllocator> @ 14a0afbd0

FArchive * __cdecl
operator<<<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>,TDefaultMapHashableKeyFuncs<FRigVMGraphFunctionIdentifier,unsigned_int,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>,TDefaultMapHashableKeyFuncs<FRigVMGraphFunctionIdentifier,unsigned_int,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  ulonglong uVar7;
  FRigVMGraphFunctionIdentifier *pFVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  uint uVar13;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar10 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar13 = 1;
  uVar6 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar6) {
    uVar7 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar13 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((int)uVar6 < 1) {
    return param_1;
  }
  if ((int)uVar13 < 1) {
    return param_1;
  }
  *piVar1 = uVar13;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar6 = uVar13;
  if (uVar13 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_14a0ba3de;
    uVar6 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar6,4);
LAB_14a0ba3de:
  uVar11 = (ulonglong)uVar13;
  uVar7 = uVar10;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar5 = FVar2;
    }
    uVar4 = uVar7 & (longlong)(int)uVar13 - 1U;
    uVar7 = uVar7 + 1;
    *(undefined4 *)((longlong)FVar5 + uVar4 * 4) = 0xffffffff;
    uVar11 = uVar11 - 1;
  } while (uVar11 != 0);
  if (*piVar1 != 0) {
    uVar6 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar6 != 0) {
      puVar12 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar12 == (uint *)0x0) {
        puVar12 = (uint *)TStack_50.Array;
      }
      uVar13 = *puVar12;
      uVar7 = uVar10;
      while (uVar13 == 0) {
        iVar9 = (int)uVar10;
        uStack_60 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_60;
        uStack_78 = iVar9 + 1;
        uVar10 = (ulonglong)uStack_78;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_14a0ba4bb;
        uVar13 = puVar12[(longlong)iVar9 + 1];
      }
      uStack_74 = -uVar13 & uVar13;
      uVar10 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar10 = (ulonglong)uStack_64;
      if ((int)uVar6 < (int)uStack_64) {
LAB_14a0ba4bb:
        uVar10 = (ulonglong)uVar6;
        uStack_64 = uVar6;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar10 < (int)uVar6) {
      do {
        pFVar8 = (FRigVMGraphFunctionIdentifier *)
                 (*(longlong *)&param_2->Elements + (longlong)(int)uVar10 * 0x60);
        uVar6 = GetTypeHash(pFVar8);
        uVar6 = *piVar1 - 1U & uVar6;
        pFVar8[1].LibraryNode_DEPRECATED.AssetPath.AssetName.Number = uVar6;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar5 = FVar2;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        pFVar8[1].LibraryNode_DEPRECATED.AssetPath.AssetName.ComparisonIndex.Value =
             *(uint *)((longlong)FVar5 + uVar7 * 4);
        *(int *)((longlong)FVar5 + uVar7 * 4) = (int)uVar10;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar10 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator> @ 14a0afbe0

FArchive * __cdecl
operator<<<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  wchar_t *pwVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar12 = 1;
  uVar8 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar8) {
    uVar9 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((int)uVar8 < 1) {
    return param_1;
  }
  if ((int)uVar12 < 1) {
    return param_1;
  }
  *piVar1 = uVar12;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar8 = uVar12;
  if (uVar12 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_14a0ba68c;
    uVar8 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar8,4);
LAB_14a0ba68c:
  uVar13 = (ulonglong)uVar12;
  uVar9 = uVar7;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar4 = uVar9 & (longlong)(int)uVar12 - 1U;
    uVar9 = uVar9 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar4 * 4) = 0xffffffff;
    uVar13 = uVar13 - 1;
  } while (uVar13 != 0);
  if (*piVar1 != 0) {
    uVar8 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_74 = 1;
    uStack_78 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar8 != 0) {
      puVar14 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)TStack_50.Array;
      }
      uVar12 = *puVar14;
      uVar9 = uVar7;
      while (uVar12 == 0) {
        uStack_60 = (int)uVar9 + 0x20;
        uVar9 = (ulonglong)uStack_60;
        iVar5 = (int)uVar7;
        uStack_78 = iVar5 + 1;
        uVar7 = (ulonglong)uStack_78;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_14a0ba767;
        uVar12 = puVar14[(longlong)iVar5 + 1];
      }
      uStack_74 = -uVar12 & uVar12;
      uVar7 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar7 = (ulonglong)uStack_64;
      if ((int)uVar8 < (int)uStack_64) {
LAB_14a0ba767:
        uVar7 = (ulonglong)uVar8;
        uStack_64 = uVar8;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar7 < (int)uVar8) {
      do {
        puVar11 = (undefined8 *)(*(longlong *)&param_2->Elements + (longlong)(int)uVar7 * 0x20);
        if (*(int *)(puVar11 + 1) == 0) {
          pwVar10 = L"";
          iVar5 = 0;
        }
        else {
          pwVar10 = (wchar_t *)*puVar11;
          iVar5 = *(int *)(puVar11 + 1) + -1;
        }
        uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar10);
        uVar8 = *piVar1 - 1U & uVar8;
        *(uint *)((longlong)puVar11 + 0x1c) = uVar8;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar9 = (longlong)*piVar1 - 1U & (longlong)(int)uVar8;
        *(undefined4 *)(puVar11 + 3) = *(undefined4 *)((longlong)FVar6 + uVar9 * 4);
        *(int *)((longlong)FVar6 + uVar9 * 4) = (int)uVar7;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar7 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<TTuple<FString,FRigVMOperand>,TDefaultMapHashableKeyFuncs<FString,FRigVMOperand,0>,FDefaultSetAllocator> @ 14a0afbf0

FArchive * __cdecl
operator<<<TTuple<FString,FRigVMOperand>,TDefaultMapHashableKeyFuncs<FString,FRigVMOperand,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FString,FRigVMOperand>,TDefaultMapHashableKeyFuncs<FString,FRigVMOperand,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  wchar_t *pwVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<FString,FRigVMOperand>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar12 = 1;
  uVar8 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar8) {
    uVar9 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((int)uVar8 < 1) {
    return param_1;
  }
  if ((int)uVar12 < 1) {
    return param_1;
  }
  *piVar1 = uVar12;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar8 = uVar12;
  if (uVar12 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_14a0ba95c;
    uVar8 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar8,4);
LAB_14a0ba95c:
  uVar13 = (ulonglong)uVar12;
  uVar9 = uVar7;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar4 = uVar9 & (longlong)(int)uVar12 - 1U;
    uVar9 = uVar9 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar4 * 4) = 0xffffffff;
    uVar13 = uVar13 - 1;
  } while (uVar13 != 0);
  if (*piVar1 != 0) {
    uVar8 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_74 = 1;
    uStack_78 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar8 != 0) {
      puVar14 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)TStack_50.Array;
      }
      uVar12 = *puVar14;
      uVar9 = uVar7;
      while (uVar12 == 0) {
        uStack_60 = (int)uVar9 + 0x20;
        uVar9 = (ulonglong)uStack_60;
        iVar5 = (int)uVar7;
        uStack_78 = iVar5 + 1;
        uVar7 = (ulonglong)uStack_78;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_14a0baa37;
        uVar12 = puVar14[(longlong)iVar5 + 1];
      }
      uStack_74 = -uVar12 & uVar12;
      uVar7 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar7 = (ulonglong)uStack_64;
      if ((int)uVar8 < (int)uStack_64) {
LAB_14a0baa37:
        uVar7 = (ulonglong)uVar8;
        uStack_64 = uVar8;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar7 < (int)uVar8) {
      do {
        puVar11 = (undefined8 *)(*(longlong *)&param_2->Elements + (longlong)(int)uVar7 * 0x20);
        if (*(int *)(puVar11 + 1) == 0) {
          pwVar10 = L"";
          iVar5 = 0;
        }
        else {
          pwVar10 = (wchar_t *)*puVar11;
          iVar5 = *(int *)(puVar11 + 1) + -1;
        }
        uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar10);
        uVar8 = *piVar1 - 1U & uVar8;
        *(uint *)((longlong)puVar11 + 0x1c) = uVar8;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar9 = (longlong)*piVar1 - 1U & (longlong)(int)uVar8;
        *(undefined4 *)(puVar11 + 3) = *(undefined4 *)((longlong)FVar6 + uVar9 * 4);
        *(int *)((longlong)FVar6 + uVar9 * 4) = (int)uVar7;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar7 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<TTuple<FString,FText>,TDefaultMapHashableKeyFuncs<FString,FText,0>,FDefaultSetAllocator> @ 14a0afc00

FArchive * __cdecl
operator<<<TTuple<FString,FText>,TDefaultMapHashableKeyFuncs<FString,FText,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FString,FText>,TDefaultMapHashableKeyFuncs<FString,FText,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ForElementType<FSetElementId> FVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  wchar_t *pwVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  uint *puVar15;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<FString,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar8 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar12 = 1;
  uVar9 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar9) {
    uVar10 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((int)uVar9 < 1) {
    return param_1;
  }
  if ((int)uVar12 < 1) {
    return param_1;
  }
  *piVar1 = uVar12;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar9 = uVar12;
  if (uVar12 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_14a0bac2c;
    uVar9 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar9,4);
LAB_14a0bac2c:
  uVar14 = (ulonglong)uVar12;
  uVar10 = uVar8;
  do {
    FVar3 = (param_2->Hash).SecondaryData;
    FVar7 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar3 != (ForElementType<FSetElementId>)0x0) {
      FVar7 = FVar3;
    }
    uVar5 = uVar10 & (longlong)(int)uVar12 - 1U;
    uVar10 = uVar10 + 1;
    *(undefined4 *)((longlong)FVar7 + uVar5 * 4) = 0xffffffff;
    uVar14 = uVar14 - 1;
  } while (uVar14 != 0);
  if (*piVar1 != 0) {
    uVar9 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_74 = 1;
    uStack_78 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar9 != 0) {
      puVar15 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)TStack_50.Array;
      }
      uVar12 = *puVar15;
      uVar10 = uVar8;
      while (uVar12 == 0) {
        uStack_60 = (int)uVar10 + 0x20;
        uVar10 = (ulonglong)uStack_60;
        iVar6 = (int)uVar8;
        uStack_78 = iVar6 + 1;
        uVar8 = (ulonglong)uStack_78;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_14a0bad07;
        uVar12 = puVar15[(longlong)iVar6 + 1];
      }
      uStack_74 = -uVar12 & uVar12;
      uVar8 = (ulonglong)uStack_74 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar8 = (ulonglong)uStack_64;
      if ((int)uVar9 < (int)uStack_64) {
LAB_14a0bad07:
        uVar8 = (ulonglong)uVar9;
        uStack_64 = uVar9;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar8 < (int)uVar9) {
      do {
        iVar13 = (int)uVar8;
        puVar2 = (undefined8 *)(*(longlong *)&param_2->Elements + (longlong)iVar13 * 0x28);
        iVar6 = *(int *)(*(longlong *)&param_2->Elements + 8 + (longlong)iVar13 * 0x28);
        if (iVar6 == 0) {
          pwVar11 = L"";
          iVar6 = 0;
        }
        else {
          pwVar11 = (wchar_t *)*puVar2;
          iVar6 = iVar6 + -1;
        }
        uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar11);
        uVar9 = *piVar1 - 1U & uVar9;
        *(uint *)((longlong)puVar2 + 0x24) = uVar9;
        FVar3 = (param_2->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar9;
        *(undefined4 *)(puVar2 + 4) = *(undefined4 *)((longlong)FVar7 + uVar8 * 4);
        *(int *)((longlong)FVar7 + uVar8 * 4) = iVar13;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar8 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> @ 14a0afc10

FArchive * __cdecl
operator<<<FRigVMExternalVariable,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FRigVMExternalVariableDef *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x30);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x55556)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FArchive *)(*pcVar3)();
                return pFVar7;
              }
              operator<<(param_1,(FRigVMExternalVariableDef *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x30));
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x830,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FRigVMExternalVariableDef *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x30);
              DefaultConstructItems<FRigVMExternalVariable,int>(pFVar10,1);
              operator<<(param_1,pFVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FRigVMFunctionCompilationPropertyDescription,TSizedDefaultAllocator<32>_> @ 14a0afc20

FArchive * __cdecl
operator<<<FRigVMFunctionCompilationPropertyDescription,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FRigVMFunctionCompilationPropertyDescription,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x50);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<FRigVMFunctionCompilationPropertyDescription,int>
                ((FRigVMFunctionCompilationPropertyDescription *)(param_2->AllocatorInstance).Data,
                 param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x33334)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar10 < (int)uVar8) {
                uVar6 = ~uVar10 >> 0x1f;
              }
              if (uVar6 == 0) {
                bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  pFVar7 = (FArchive *)(*pcVar3)();
                  return pFVar7;
                }
              }
              pFVar9 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x50;
              (**(code **)(*(longlong *)param_1 + 0x178))(param_1,pFVar9);
              operator<<(param_1,(FString *)(pFVar9 + 8));
              (**(code **)(*(longlong *)param_1 + 0x148))(param_1,pFVar9 + 0x18);
              operator<<(param_1,(FString *)(pFVar9 + 0x40));
              uVar8 = param_2->ArrayNum;
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)uVar8);
          }
        }
        else {
          TArray<FRigVMFunctionCompilationPropertyDescription,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x850,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar9 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x50;
              DefaultConstructItems<FRigVMFunctionCompilationPropertyDescription,int>(pFVar9,1);
              (**(code **)(*(longlong *)param_1 + 0x178))(param_1,pFVar9);
              operator<<(param_1,(FString *)(pFVar9 + 8));
              (**(code **)(*(longlong *)param_1 + 0x148))(param_1,pFVar9 + 0x18);
              operator<<(param_1,(FString *)(pFVar9 + 0x40));
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FRigVMFunctionCompilationPropertyPath,TSizedDefaultAllocator<32>_> @ 14a0afc30

FArchive * __cdecl
operator<<<FRigVMFunctionCompilationPropertyPath,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FRigVMFunctionCompilationPropertyPath,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FRigVMFunctionCompilationPropertyPath *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x28);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<FRigVMFunctionCompilationPropertyPath,int>
                ((FRigVMFunctionCompilationPropertyPath *)(param_2->AllocatorInstance).Data,
                 param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x66667)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar9 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar10 < (int)uVar9) {
                uVar7 = ~uVar10 >> 0x1f;
              }
              if (uVar7 == 0) {
                bVar5 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar5) {
                  pcVar4 = (code *)swi(3);
                  pFVar8 = (FArchive *)(*pcVar4)();
                  return pFVar8;
                }
              }
              operator<<(param_1,(FRigVMFunctionCompilationPropertyPath *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x28))
              ;
              uVar9 = param_2->ArrayNum;
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)uVar9);
          }
        }
        else {
          TArray<FRigVMFunctionCompilationPropertyPath,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x828,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pFVar2 = (FRigVMFunctionCompilationPropertyPath *)
                       ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x28);
              DefaultConstructItems<FRigVMFunctionCompilationPropertyPath,int>(pFVar2,1);
              operator<<(param_1,pFVar2);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar4)();
        return pFVar8;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FRigVMGraphFunctionArgument,TSizedDefaultAllocator<32>_> @ 14a0afc40

FArchive * __cdecl
operator<<<FRigVMGraphFunctionArgument,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FRigVMGraphFunctionArgument,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FRigVMGraphFunctionArgument *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0xb0);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<FRigVMGraphFunctionArgument,int>
                ((FRigVMGraphFunctionArgument *)(param_2->AllocatorInstance).Data,param_2->ArrayNum)
      ;
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xb0,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x1745e)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if (uVar6 == 0) {
                bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  pFVar7 = (FArchive *)(*pcVar3)();
                  return pFVar7;
                }
              }
              operator<<(param_1,(FRigVMGraphFunctionArgument *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0xb0));
              uVar8 = param_2->ArrayNum;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar8);
          }
        }
        else {
          TArray<FRigVMGraphFunctionArgument,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x8b0,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FRigVMGraphFunctionArgument *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0xb0);
              DefaultConstructItems<FRigVMGraphFunctionArgument,int>(pFVar10,1);
              operator<<(param_1,pFVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FRigVMGraphFunctionIdentifier,unsigned_int> @ 14a0afc50

FArchive * __cdecl
operator<<<FRigVMGraphFunctionIdentifier,unsigned_int>
          (FArchive *param_1,TTuple<FRigVMGraphFunctionIdentifier,unsigned_int> *param_2)

{
  undefined4 *puVar1;
  
  operator<<(param_1,(FRigVMGraphFunctionIdentifier *)param_2);
  puVar1 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if (puVar1 + 1 <= (undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *(undefined4 *)&param_2->field_0x50 = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->field_0x50,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)&param_2->field_0x50);
  return param_1;
}

// operator<<<FRigVMPinCategory,TSizedDefaultAllocator<32>_> @ 14a0afce0

FArchive * __cdecl
operator<<<FRigVMPinCategory,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FRigVMPinCategory,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FRigVMPinCategory *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x28);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<FRigVMPinCategory,int>
                ((FRigVMPinCategory *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x66667)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar9 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar10 < (int)uVar9) {
                uVar7 = ~uVar10 >> 0x1f;
              }
              if (uVar7 == 0) {
                bVar5 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar5) {
                  pcVar4 = (code *)swi(3);
                  pFVar8 = (FArchive *)(*pcVar4)();
                  return pFVar8;
                }
              }
              operator<<(param_1,(FRigVMPinCategory *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x28))
              ;
              uVar9 = param_2->ArrayNum;
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)uVar9);
          }
        }
        else {
          TArray<FRigVMPinCategory,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x828,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pFVar2 = (FRigVMPinCategory *)
                       ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x28);
              DefaultConstructItems<FRigVMPinCategory,int>(pFVar2,1);
              operator<<(param_1,pFVar2);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar4)();
        return pFVar8;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FRigVMRegister,TSizedDefaultAllocator<32>_> @ 14a0afcf0

FArchive * __cdecl
operator<<<FRigVMRegister,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FRigVMRegister,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FRigVMRegister *this;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x24);
  iVar10 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x24,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x71c72)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FArchive *)(*pcVar3)();
                return pFVar7;
              }
              FRigVMRegister::Serialize
                        ((FRigVMRegister *)
                         ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x24),param_1);
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FRigVMRegister,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x424,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              this = (FRigVMRegister *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x24);
              DefaultConstructItems<FRigVMRegister,int>(this,1);
              FRigVMRegister::Serialize(this,param_1);
              iVar10 = iVar10 + 1;
            } while (iVar10 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FRigVMRegisterOffset,TSizedDefaultAllocator<32>_> @ 14a0afd00

FArchive * __cdecl
operator<<<FRigVMRegisterOffset,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FRigVMRegisterOffset,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FRigVMRegisterOffset *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x48);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<FRigVMRegisterOffset,int>
                ((FRigVMRegisterOffset *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x48,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x38e39)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar9 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar10 < (int)uVar9) {
                uVar7 = ~uVar10 >> 0x1f;
              }
              if (uVar7 == 0) {
                bVar5 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar5) {
                  pcVar4 = (code *)swi(3);
                  pFVar8 = (FArchive *)(*pcVar4)();
                  return pFVar8;
                }
              }
              operator<<(param_1,(FRigVMRegisterOffset *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x48))
              ;
              uVar9 = param_2->ArrayNum;
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)uVar9);
          }
        }
        else {
          TArray<FRigVMRegisterOffset,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x848,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pFVar2 = (FRigVMRegisterOffset *)
                       ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x48);
              DefaultConstructItems<FRigVMRegisterOffset,int>(pFVar2,1);
              operator<<(param_1,pFVar2);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar4)();
        return pFVar8;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FRigVMTag,TSizedDefaultAllocator<32>_> @ 14a0afd10

FArchive * __cdecl
operator<<<FRigVMTag,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FRigVMTag,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FRigVMTag *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 6);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<FRigVMTag,int>((FRigVMTag *)(param_2->AllocatorInstance).Data,param_2->ArrayNum)
      ;
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x40001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FArchive *)(*pcVar3)();
                return pFVar7;
              }
              operator<<(param_1,(FRigVMTag *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x40));
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FRigVMTag,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x840,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FRigVMTag *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x40);
              DefaultConstructItems<FRigVMTag,int>(pFVar10,1);
              operator<<(param_1,pFVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<TSparseSetElement<TObjectPtr<UClass_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14a0afd20

FArchive * __cdecl
operator<<<TSparseSetElement<TObjectPtr<UClass_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TObjectPtr<UClass_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TObjectPtr<UClass_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 << 4,(longlong)*(int *)&param_2->field_0xc << 4);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar5 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    iVar6 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar6 != 0) {
      puVar10 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar10 = local_78.Pointer;
      }
      uVar11 = *puVar10;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar11 == 0) {
        lVar9 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_14a0b000c;
        uVar11 = puVar10[lVar9 + 1];
      }
      local_78._4_4_ = -uVar11 & uVar11;
      uVar3 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar9 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar9;
      if (iVar6 < iStack_64) {
LAB_14a0b000c:
        iStack_64 = iVar6;
      }
    }
    local_68 = 0xffffffff;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = iStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = iStack_60;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_58 = param_2;
    local_50.Array = local_78.Pointer;
    if (iStack_64 < iVar6) {
      do {
        (**(code **)(*(longlong *)param_1 + 0x150))
                  (param_1,(longlong)local_50.CurrentBitIndex * 0x10 + *(longlong *)local_58);
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  else {
    local_res8[0] = 0;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    uVar11 = local_res8[0];
    if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != local_res8[0]) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,local_res8[0],(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar11 = uVar11 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar11) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar7 = 0x80;
      if (0x80 < (int)uVar11) {
        uVar7 = uVar11;
      }
      *(uint *)&param_2->field_0x2c = uVar7;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    puVar12 = (undefined8 *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar4 = *(int *)(*(longlong *)param_2 + 4 + (longlong)iVar6 * 0x10);
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          *(int *)&param_2->field_0x30 = iVar4;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)(*(longlong *)param_2 + (longlong)iVar4 * 0x10) = 0xffffffff;
          }
        }
        TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        puVar8 = (undefined8 *)0x0;
        if (local_78.Pointer != (undefined8 *)0x0) {
          *(undefined8 *)local_78.Pointer = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 8) = 0xffffffff;
          puVar8 = local_78.Pointer;
        }
        (**(code **)(*(longlong *)param_1 + 0x150))(param_1,puVar8);
        uVar11 = (int)puVar12 + 1;
        puVar12 = (undefined8 *)(ulonglong)uVar11;
      } while ((int)uVar11 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<TSparseSetElement<TTuple<int,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14a0b0080

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<int,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<int,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  TTuple<int,FName> *pTVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  TTuple<int,FName> *pTVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<int,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 * 0x14,(longlong)*(int *)&param_2->field_0xc * 0x14);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar5 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    iVar6 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar6 != 0) {
      puVar10 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar10 = local_78.Pointer;
      }
      uVar11 = *puVar10;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar11 == 0) {
        lVar9 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_14a0b037c;
        uVar11 = puVar10[lVar9 + 1];
      }
      local_78._4_4_ = -uVar11 & uVar11;
      uVar3 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar9 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar9;
      if (iVar6 < iStack_64) {
LAB_14a0b037c:
        iStack_64 = iVar6;
      }
    }
    local_68 = 0xffffffff;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = iStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = iStack_60;
    local_58 = param_2;
    local_50.Array = local_78.Pointer;
    if (iStack_64 < iVar6) {
      do {
        operator<<<int,FName>
                  (param_1,(TTuple<int,FName> *)
                           (*(longlong *)local_58 + (longlong)local_50.CurrentBitIndex * 0x14));
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  else {
    local_res8[0] = 0;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    uVar11 = local_res8[0];
    if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != local_res8[0]) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,local_res8[0],(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar11 = uVar11 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar11) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar7 = 0x80;
      if (0x80 < (int)uVar11) {
        uVar7 = uVar11;
      }
      *(uint *)&param_2->field_0x2c = uVar7;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    pTVar12 = (TTuple<int,FName> *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x14,4,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          iVar4 = *(int *)(*(longlong *)param_2 + 4 + (longlong)iVar6 * 0x14);
          *(int *)&param_2->field_0x30 = iVar4;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)(*(longlong *)param_2 + (longlong)iVar4 * 0x14) = 0xffffffff;
          }
        }
        TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        pTVar8 = (TTuple<int,FName> *)0x0;
        if (local_78.Pointer != (TTuple<int,FName> *)0x0) {
          *(undefined8 *)local_78.Pointer = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 8) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0xc) = 0xffffffff;
          pTVar8 = local_78.Pointer;
        }
        operator<<<int,FName>(param_1,pTVar8);
        uVar11 = (int)pTVar12 + 1;
        pTVar12 = (TTuple<int,FName> *)(ulonglong)uVar11;
      } while ((int)uVar11 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14a0b03f0

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  TTuple<FRigVMGraphFunctionIdentifier,unsigned_int> *pTVar7;
  longlong lVar8;
  uint *puVar9;
  uint uVar10;
  ulonglong uVar11;
  TTuple<FRigVMGraphFunctionIdentifier,unsigned_int> *pTVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 * 0x60,(longlong)*(int *)&param_2->field_0xc * 0x60);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    iVar6 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar6 != 0) {
      puVar9 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar9 = local_78.Pointer;
      }
      uVar10 = *puVar9;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar10 == 0) {
        lVar8 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_14a0b071c;
        uVar10 = puVar9[lVar8 + 1];
      }
      local_78._4_4_ = -uVar10 & uVar10;
      uVar11 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar8 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar8;
      if (iVar6 < iStack_64) {
LAB_14a0b071c:
        iStack_64 = iVar6;
      }
    }
    local_68 = 0xffffffff;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = iStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = iStack_60;
    local_58 = param_2;
    local_50.Array = local_78.Pointer;
    if (iStack_64 < iVar6) {
      do {
        operator<<<FRigVMGraphFunctionIdentifier,unsigned_int>
                  (param_1,(TTuple<FRigVMGraphFunctionIdentifier,unsigned_int> *)
                           ((longlong)local_50.CurrentBitIndex * 0x60 + *(longlong *)local_58));
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  else {
    local_res8[0] = 0;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    uVar10 = local_res8[0];
    uVar11 = (ulonglong)local_res8[0];
    TSparseArray<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(param_2,0,*(int *)puVar2);
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar11);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != uVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,uVar10,(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar10 = uVar10 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar10) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar10) {
        uVar5 = uVar10;
      }
      *(uint *)&param_2->field_0x2c = uVar5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    pTVar12 = (TTuple<FRigVMGraphFunctionIdentifier,unsigned_int> *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x60,8,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          iVar3 = *(int *)((longlong)iVar6 * 0x60 + 4 + *(longlong *)param_2);
          *(int *)&param_2->field_0x30 = iVar3;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)((longlong)iVar3 * 0x60 + *(longlong *)param_2) = 0xffffffff;
          }
        }
        TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        pTVar7 = (TTuple<FRigVMGraphFunctionIdentifier,unsigned_int> *)0x0;
        if (local_78.Pointer != (TTuple<FRigVMGraphFunctionIdentifier,unsigned_int> *)0x0) {
          *(undefined8 *)local_78.Pointer = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 8) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x10) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x18) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x20) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x28) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x30) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x38) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x40) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x48) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x50) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x58) = 0xffffffff;
          pTVar7 = local_78.Pointer;
        }
        operator<<<FRigVMGraphFunctionIdentifier,unsigned_int>(param_1,pTVar7);
        uVar10 = (int)pTVar12 + 1;
        pTVar12 = (TTuple<FRigVMGraphFunctionIdentifier,unsigned_int> *)(ulonglong)uVar10;
      } while ((int)uVar10 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14a0b0790

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  TTuple<FString,int> *pTVar7;
  longlong lVar8;
  uint *puVar9;
  uint uVar10;
  ulonglong uVar11;
  TTuple<FString,int> *pTVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 << 5,(longlong)*(int *)&param_2->field_0xc << 5);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    iVar6 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar6 != 0) {
      puVar9 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar9 = local_78.Pointer;
      }
      uVar10 = *puVar9;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar10 == 0) {
        lVar8 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_14a0b0a9c;
        uVar10 = puVar9[lVar8 + 1];
      }
      local_78._4_4_ = -uVar10 & uVar10;
      uVar11 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar8 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar8;
      if (iVar6 < iStack_64) {
LAB_14a0b0a9c:
        iStack_64 = iVar6;
      }
    }
    local_68 = 0xffffffff;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = iStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = iStack_60;
    local_58 = param_2;
    local_50.Array = local_78.Pointer;
    if (iStack_64 < iVar6) {
      do {
        operator<<<FString,int>
                  (param_1,(TTuple<FString,int> *)
                           ((longlong)local_50.CurrentBitIndex * 0x20 + *(longlong *)local_58));
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  else {
    local_res8[0] = 0;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    uVar10 = local_res8[0];
    uVar11 = (ulonglong)local_res8[0];
    TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(param_2,0,*(int *)puVar2);
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar11);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != uVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,uVar10,(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar10 = uVar10 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar10) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar10) {
        uVar5 = uVar10;
      }
      *(uint *)&param_2->field_0x2c = uVar5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    pTVar12 = (TTuple<FString,int> *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x20,8,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar3 = *(int *)((longlong)iVar6 * 0x20 + 4 + *(longlong *)param_2);
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          *(int *)&param_2->field_0x30 = iVar3;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)((longlong)iVar3 * 0x20 + *(longlong *)param_2) = 0xffffffff;
          }
        }
        TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        pTVar7 = (TTuple<FString,int> *)0x0;
        if (local_78.Pointer != (TTuple<FString,int> *)0x0) {
          *(undefined8 *)local_78.Pointer = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 8) = 0;
          *(undefined8 *)local_78.Pointer = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 8) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x10) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x18) = 0xffffffff;
          pTVar7 = local_78.Pointer;
        }
        operator<<<FString,int>(param_1,pTVar7);
        uVar10 = (int)pTVar12 + 1;
        pTVar12 = (TTuple<FString,int> *)(ulonglong)uVar10;
      } while ((int)uVar10 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<TSparseSetElement<TTuple<FString,FRigVMOperand>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14a0b0b10

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<FString,FRigVMOperand>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<FString,FRigVMOperand>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  FString *pFVar8;
  uint uVar9;
  ulonglong uVar10;
  FString *pFVar11;
  uint *puVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<FString,FRigVMOperand>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 << 5,(longlong)*(int *)&param_2->field_0xc << 5);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    iVar6 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar6 != 0) {
      puVar12 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar12 = local_78.Pointer;
      }
      uVar9 = *puVar12;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar9 == 0) {
        lVar7 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_14a0b0e1e;
        uVar9 = puVar12[lVar7 + 1];
      }
      local_78._4_4_ = -uVar9 & uVar9;
      uVar10 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar7 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar7;
      if (iVar6 < iStack_64) {
LAB_14a0b0e1e:
        iStack_64 = iVar6;
      }
    }
    local_68 = 0xffffffff;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = iStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = iStack_60;
    local_58 = param_2;
    local_50.Array = local_78.Pointer;
    if (iStack_64 < iVar6) {
      do {
        pFVar8 = (FString *)((longlong)local_50.CurrentBitIndex * 0x20 + *(longlong *)local_58);
        operator<<(param_1,pFVar8);
        operator<<(param_1,(FRigVMOperand *)(pFVar8 + 1));
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  else {
    local_res8[0] = 0;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    uVar9 = local_res8[0];
    uVar10 = (ulonglong)local_res8[0];
    TSparseArray<TSparseSetElement<TTuple<FString,FRigVMOperand>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(param_2,0,*(int *)puVar2);
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar10);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != uVar9) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,uVar9,(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar9 = uVar9 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar9) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar9) {
        uVar5 = uVar9;
      }
      *(uint *)&param_2->field_0x2c = uVar5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    pFVar8 = (FString *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x20,8,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar3 = *(int *)((longlong)iVar6 * 0x20 + 4 + *(longlong *)param_2);
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          *(int *)&param_2->field_0x30 = iVar3;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)((longlong)iVar3 * 0x20 + *(longlong *)param_2) = 0xffffffff;
          }
        }
        TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        pFVar11 = (FString *)0x0;
        if (local_78.Pointer != (FString *)0x0) {
          ((local_78.Pointer)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          (local_78.Pointer)->ArrayNum = 0;
          (local_78.Pointer)->ArrayMax = 0;
          ((local_78.Pointer)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          (local_78.Pointer)->ArrayNum = 0;
          (local_78.Pointer)->ArrayMax = 0;
          *(undefined1 *)
           &(((FString *)((longlong)local_78.Pointer + 0x10))->Data).AllocatorInstance.Data = 0;
          *(undefined4 *)
           ((longlong)
            &(((FString *)((longlong)local_78.Pointer + 0x10))->Data).AllocatorInstance.Data + 2) =
               0xffffffff;
          (((FString *)((longlong)local_78.Pointer + 0x10))->Data).ArrayNum = -1;
          pFVar11 = local_78.Pointer;
        }
        operator<<(param_1,pFVar11);
        operator<<(param_1,(FRigVMOperand *)(pFVar11 + 1));
        uVar9 = (int)pFVar8 + 1;
        pFVar8 = (FString *)(ulonglong)uVar9;
      } while ((int)uVar9 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<TSparseSetElement<TTuple<FString,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14a0b0eb0

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<FString,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<FString,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong *plVar4;
  void *pvVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  FString *pFVar11;
  uint *puVar12;
  FString *pFVar13;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<FString,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 * 0x28,(longlong)*(int *)&param_2->field_0xc * 0x28);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    iVar7 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar7 != 0) {
      puVar12 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar12 = local_78.Pointer;
      }
      uVar9 = *puVar12;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar9 == 0) {
        lVar8 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_14a0b11cc;
        uVar9 = puVar12[lVar8 + 1];
      }
      local_78._4_4_ = -uVar9 & uVar9;
      uVar10 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar8 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar8;
      if (iVar7 < iStack_64) {
LAB_14a0b11cc:
        iStack_64 = iVar7;
      }
    }
    local_68 = 0xffffffff;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = iStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = iStack_60;
    local_58 = param_2;
    local_50.Array = local_78.Pointer;
    if (iStack_64 < iVar7) {
      do {
        pFVar13 = (FString *)(*(longlong *)local_58 + (longlong)local_50.CurrentBitIndex * 0x28);
        operator<<(param_1,pFVar13);
        (**(code **)(*(longlong *)param_1 + 0x170))(param_1,pFVar13 + 1);
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  else {
    local_res8[0] = 0;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    uVar9 = local_res8[0];
    uVar10 = (ulonglong)local_res8[0];
    TSparseArray<TSparseSetElement<TTuple<FString,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(param_2,0,*(int *)puVar2);
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar10);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != uVar9) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,uVar9,(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar9 = uVar9 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar9) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar6 = 0x80;
      if (0x80 < (int)uVar9) {
        uVar6 = uVar9;
      }
      *(uint *)&param_2->field_0x2c = uVar6;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    pFVar13 = (FString *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar7 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x28,8,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar7 = *(int *)&param_2->field_0x30;
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          iVar3 = *(int *)(*(longlong *)param_2 + 4 + (longlong)iVar7 * 0x28);
          *(int *)&param_2->field_0x30 = iVar3;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)(*(longlong *)param_2 + (longlong)iVar3 * 0x28) = 0xffffffff;
          }
        }
        TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar7);
        pvVar5 = local_78.Pointer;
        pFVar11 = (FString *)0x0;
        if (local_78.Pointer != (FString *)0x0) {
          ((local_78.Pointer)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          (local_78.Pointer)->ArrayNum = 0;
          (local_78.Pointer)->ArrayMax = 0;
          ((local_78.Pointer)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          (local_78.Pointer)->ArrayNum = 0;
          (local_78.Pointer)->ArrayMax = 0;
          FText::FText((FText *)((longlong)local_78.Pointer + 0x10));
          *(undefined4 *)&(((FString *)((longlong)pvVar5 + 0x20))->Data).AllocatorInstance.Data =
               0xffffffff;
          pFVar11 = pvVar5;
        }
        operator<<(param_1,pFVar11);
        (**(code **)(*(longlong *)param_1 + 0x170))(param_1,pFVar11 + 1);
        uVar9 = (int)pFVar13 + 1;
        pFVar13 = (FString *)(ulonglong)uVar9;
      } while ((int)uVar9 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<FString,int> @ 14a0b1250

FArchive * __cdecl operator<<<FString,int>(FArchive *param_1,TTuple<FString,int> *param_2)

{
  undefined4 *puVar1;
  
  operator<<(param_1,(FString *)param_2);
  puVar1 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if (puVar1 + 1 <= (undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *(undefined4 *)&param_2->field_0x10 = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->field_0x10,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)&param_2->field_0x10);
  return param_1;
}

// Accumulate<int,TArray<int,TSizedDefaultAllocator<32>_>,TPlus<void>_> @ 14a0b1490

int __cdecl
Algo::Accumulate<int,TArray<int,TSizedDefaultAllocator<32>_>,TPlus<void>_>
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,int param_2,TPlus<void> param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res10 [8];
  
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar3 == pFVar1) break;
    param_2 = param_2 + *(int *)pFVar3;
    pFVar3 = pFVar3 + 4;
  }
  return param_2;
}

// AddLambda<`FRigVMRegistry_NoLock::InitializeBaseTypes_NoLock'::__l6::<lambda_1>_> @ 14a0b14f0

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
AddLambda<_FRigVMRegistry_NoLock::InitializeBaseTypes_NoLock_::__l6::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          <lambda_1> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FRigVMRegistry_NoLock *pFVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pFVar5 = (FRigVMRegistry_NoLock *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FRigVMRegistry_NoLock::InitializeBaseTypes_NoLock'::`6'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->__this = (FRigVMRegistry_NoLock *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      pFVar5 = (FRigVMRegistry_NoLock *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    param_1->__this = pFVar5;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddStructReferencedObjectsOrNot<FRigVMMemoryStorageStruct> @ 14a0b2680

void __cdecl
AddStructReferencedObjectsOrNot<FRigVMMemoryStorageStruct>
          (void *param_1,FReferenceCollector *param_2)

{
  return;
}

// Cast<UClass,UObject_const_> @ 14a0b2a10

UClass * __cdecl Cast<UClass,UObject_const_>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      return (UClass *)param_1;
    }
  }
  return (UClass *)0x0;
}

// Cast<UEnum,UObject_const_> @ 14a0b2a60

UEnum * __cdecl Cast<UEnum,UObject_const_>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_UEnum_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      return (UEnum *)param_1;
    }
  }
  return (UEnum *)0x0;
}

// Cast<UStruct,UObject_const_> @ 14a0b2ab0

UStruct * __cdecl Cast<UStruct,UObject_const_>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_UStruct_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      return (UStruct *)param_1;
    }
  }
  return (UStruct *)0x0;
}

// ConstructItems<TObjectPtr<UScriptStruct>,TObjectPtr<UScriptStruct>,int> @ 14a0b2b00

void __cdecl
ConstructItems<TObjectPtr<UScriptStruct>,TObjectPtr<UScriptStruct>,int>
          (void *param_1,TObjectPtr<UScriptStruct> *param_2,int param_3)

{
  TObjectPtr<UScriptStruct> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UScriptStruct>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UScriptStruct>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (UScriptStruct *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UScriptStruct *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FRigVMFunctionArgument,FRigVMFunctionArgument,int> @ 14a0b2b60

void __cdecl
ConstructItems<FRigVMFunctionArgument,FRigVMFunctionArgument,int>
          (void *param_1,FRigVMFunctionArgument *param_2,int param_3)

{
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  FSharedReferencer<1> *pFVar5;
  
  if (param_3 != 0) {
    pFVar5 = &(param_2->NameString).SharedReferenceCount;
    plVar4 = (longlong *)((longlong)param_1 + 0x20);
    do {
      plVar1 = (longlong *)((longlong)param_2 + (-0x20 - (longlong)param_1) + (longlong)plVar4);
      lVar3 = plVar1[1];
      plVar4[-4] = *plVar1;
      plVar4[-3] = lVar3;
      plVar4[-2] = *(longlong *)((longlong)param_2 + (-0x10 - (longlong)param_1) + (longlong)plVar4)
      ;
      plVar4[-1] = (longlong)((TSharedPtr<FString,1> *)(pFVar5 + -1))->Object;
      pTVar2 = pFVar5->ReferenceController;
      *plVar4 = (longlong)pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      plVar4[1] = *(longlong *)(pFVar5 + 1);
      lVar3 = *(longlong *)(pFVar5 + 2);
      plVar4[2] = lVar3;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      pFVar5 = pFVar5 + 7;
      plVar4 = plVar4 + 7;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FRigVMFunctionArgument,FRigVMCompiledInFunctionArgument,int> @ 14a0b2bd0

void __cdecl
ConstructItems<FRigVMFunctionArgument,FRigVMCompiledInFunctionArgument,int>
          (void *param_1,FRigVMCompiledInFunctionArgument *param_2,int param_3)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  wchar_t **ppwVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = (undefined8 *)((longlong)param_1 + 0x20);
    do {
      uVar1 = *(undefined8 *)&param_2->Direction;
      ppwVar3 = &param_2->Name;
      pwVar2 = param_2->Type;
      param_2 = param_2 + 1;
      puVar4[-4] = *ppwVar3;
      puVar4[-3] = pwVar2;
      puVar4[-2] = uVar1;
      puVar4[-1] = 0;
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 7;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FRigVMFunctionCompilationPropertyDescription,FRigVMFunctionCompilationPropertyDescription,int> @ 14a0b2c20

void __cdecl
ConstructItems<FRigVMFunctionCompilationPropertyDescription,FRigVMFunctionCompilationPropertyDescription,int>
          (void *param_1,FRigVMFunctionCompilationPropertyDescription *param_2,int param_3)

{
  undefined8 *puVar1;
  TSoftObjectPtr<UObject> *pTVar2;
  
  if (param_3 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x18);
    pTVar2 = &param_2->CPPTypeObject;
    do {
      puVar1[-3] = *(undefined8 *)
                    ((longlong)puVar1 + (longlong)param_2 + (-0x18 - (longlong)param_1));
      FString::FString((FString *)(puVar1 + -2),(FString *)((longlong)(pTVar2 + -1) + 0x18));
      *puVar1 = *(undefined8 *)&pTVar2->SoftObjectPtr;
      FSoftObjectPath::FSoftObjectPath
                ((FSoftObjectPath *)(puVar1 + 1),
                 (FSoftObjectPath *)&(pTVar2->SoftObjectPtr).field_0x8);
      FString::FString((FString *)(puVar1 + 5),(FString *)(pTVar2 + 1));
      pTVar2 = pTVar2 + 2;
      puVar1 = puVar1 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FRigVMFunctionCompilationPropertyPath,FRigVMFunctionCompilationPropertyPath,int> @ 14a0b2cb0

void __cdecl
ConstructItems<FRigVMFunctionCompilationPropertyPath,FRigVMFunctionCompilationPropertyPath,int>
          (void *param_1,FRigVMFunctionCompilationPropertyPath *param_2,int param_3)

{
  int *this;
  FString *pFVar1;
  
  if (param_3 != 0) {
    this = (int *)((longlong)param_1 + 0x18);
    pFVar1 = &param_2->SegmentPath;
    do {
      this[-6] = *(int *)((longlong)this + (longlong)param_2 + (-0x18 - (longlong)param_1));
      FString::FString((FString *)(this + -4),pFVar1 + -1);
      FString::FString((FString *)this,pFVar1);
      pFVar1 = (FString *)((longlong)(pFVar1 + 2) + 8);
      this = this + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FRigVMGraphFunctionData,FRigVMGraphFunctionData,int> @ 14a0b2d30

void __cdecl
ConstructItems<FRigVMGraphFunctionData,FRigVMGraphFunctionData,int>
          (void *param_1,FRigVMGraphFunctionData *param_2,int param_3)

{
  bool *pbVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  int *piVar5;
  FRigVMFunctionCompilationData *this;
  
  if (param_3 != 0) {
    piVar5 = &(param_2->CollapseNodeArchive).UncompressedSize;
    this = (FRigVMFunctionCompilationData *)((longlong)param_1 + 0x1f8);
    do {
      FRigVMGraphFunctionHeader::FRigVMGraphFunctionHeader
                ((FRigVMGraphFunctionHeader *)
                 ((longlong)param_1 + (-0x450 - (longlong)param_2) + (longlong)piVar5),
                 (FRigVMGraphFunctionHeader *)(piVar5 + -0x114));
      FRigVMFunctionCompilationData::FRigVMFunctionCompilationData
                (this,(FRigVMFunctionCompilationData *)(piVar5 + -0x96));
      FString::FString((FString *)(this + 1),(FString *)(piVar5 + -8));
      piVar2 = &this[1].ByteCode.NumInstructions;
      *(undefined8 *)piVar2 = 0;
      piVar3 = (int *)((longlong)&this[1].ByteCode.Entries.AllocatorInstance.Data + 4);
      iVar4 = piVar5[-2];
      _Src = (((FRigVMObjectArchive *)(piVar5 + -4))->Buffer).AllocatorInstance.Data;
      *(int *)&this[1].ByteCode.Entries.AllocatorInstance.Data = iVar4;
      if (iVar4 == 0) {
        *piVar3 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar4,0,(ForAnyElementType *)piVar2,iVar4,piVar3);
        memcpy(*(void **)piVar2,_Src,(longlong)iVar4);
      }
      this[1].ByteCode.Entries.ArrayNum = *piVar5;
      this[1].ByteCode.Entries.ArrayMax = piVar5[1];
      pbVar1 = (bool *)(piVar5 + 2);
      piVar5 = piVar5 + 0x118;
      *(bool *)&this[1].ByteCode.BranchInfos.AllocatorInstance.Data = *pbVar1;
      this = (FRigVMFunctionCompilationData *)&this[1].OperandToDebugRegisters.field_0x40;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FRigVMGraphFunctionHeader,FRigVMGraphFunctionHeader,int> @ 14a0b2e70

void __cdecl
ConstructItems<FRigVMGraphFunctionHeader,FRigVMGraphFunctionHeader,int>
          (void *param_1,FRigVMGraphFunctionHeader *param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  FRigVMGraphFunctionArgument *pFVar3;
  FScriptContainerElement *_Src;
  FRigVMPinCategory *pFVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  int *piVar8;
  int *piVar9;
  undefined1 local_res18 [8];
  
  if (param_3 != 0) {
    piVar8 = (int *)((longlong)param_1 + 0x140);
    piVar9 = &(param_2->ExternalVariables).ArrayNum;
    do {
      FSoftObjectPath::FSoftObjectPath
                ((FSoftObjectPath *)
                 ((longlong)param_1 + (-0x140 - (longlong)param_2) + (longlong)piVar9),
                 (FSoftObjectPath *)(piVar9 + -0x50));
      FString::FString((FString *)(piVar8 + -0x48),(FString *)(piVar9 + -0x48));
      FSoftObjectPath::FSoftObjectPath
                ((FSoftObjectPath *)(piVar8 + -0x44),(FSoftObjectPath *)(piVar9 + -0x44));
      piVar8[-0x3c] = 0;
      piVar8[-0x3b] = 0;
      (((TArray<FRigVMTag,TSizedDefaultAllocator<32>_> *)(piVar8 + -0x38))->AllocatorInstance).Data
           = (FScriptContainerElement *)0x0;
      piVar8[-0x3a] = 0;
      piVar8[-0x39] = 0;
      piVar8[-0x36] = 0;
      piVar8[-0x35] = 0;
      uVar7 = *(undefined8 *)(piVar9 + -0x3a);
      *(undefined8 *)(piVar8 + -0x3c) = *(undefined8 *)(piVar9 + -0x3c);
      *(undefined8 *)(piVar8 + -0x3a) = uVar7;
      TArray<FRigVMTag,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FRigVMTag,TSizedDefaultAllocator<32>_> *)(piVar8 + -0x38),
                 (TArray<FRigVMTag,TSizedDefaultAllocator<32>_> *)(piVar9 + -0x38));
      *(undefined8 *)(piVar8 + -0x34) = *(undefined8 *)(piVar9 + -0x34);
      FString::FString((FString *)(piVar8 + -0x32),(FString *)(piVar9 + -0x32));
      iVar1 = piVar9[-0x2d];
      iVar5 = piVar9[-0x2c];
      iVar6 = piVar9[-0x2b];
      piVar8[-0x2e] = piVar9[-0x2e];
      piVar8[-0x2d] = iVar1;
      piVar8[-0x2c] = iVar5;
      piVar8[-0x2b] = iVar6;
      piVar8[-0x2a] = 0;
      piVar8[-0x29] = 0;
      plVar2 = *(longlong **)(piVar9 + -0x2a);
      *(longlong **)(piVar8 + -0x2a) = plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2,local_res18);
      }
      piVar8[-0x28] = piVar9[-0x28];
      FString::FString((FString *)(piVar8 + -0x26),(FString *)(piVar9 + -0x26));
      FString::FString((FString *)(piVar8 + -0x22),(FString *)(piVar9 + -0x22));
      FString::FString((FString *)(piVar8 + -0x1e),(FString *)(piVar9 + -0x1e));
      piVar8[-0x1a] = 0;
      piVar8[-0x19] = 0;
      iVar1 = piVar9[-0x18];
      pFVar3 = *(FRigVMGraphFunctionArgument **)(piVar9 + -0x1a);
      piVar8[-0x18] = iVar1;
      if (iVar1 == 0) {
        piVar8[-0x17] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xb0,8,iVar1,0,(ForAnyElementType *)(piVar8 + -0x1a),iVar1,piVar8 + -0x17);
        ConstructItems<FRigVMGraphFunctionArgument,FRigVMGraphFunctionArgument,int>
                  (((ForAnyElementType *)(piVar8 + -0x1a))->Data,pFVar3,iVar1);
      }
      TMap<FRigVMGraphFunctionIdentifier,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMGraphFunctionIdentifier,unsigned_int,0>_>
      ::
      TMap<FRigVMGraphFunctionIdentifier,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMGraphFunctionIdentifier,unsigned_int,0>_>
                ((TMap<FRigVMGraphFunctionIdentifier,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMGraphFunctionIdentifier,unsigned_int,0>_>
                  *)(piVar8 + -0x16),
                 (TMap<FRigVMGraphFunctionIdentifier,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMGraphFunctionIdentifier,unsigned_int,0>_>
                  *)(piVar9 + -0x16));
      piVar8[-2] = 0;
      piVar8[-1] = 0;
      iVar1 = *piVar9;
      _Src = (((TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> *)(piVar9 + -2))->
             AllocatorInstance).Data;
      *piVar8 = iVar1;
      if (iVar1 == 0) {
        piVar8[1] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,iVar1,0,(ForAnyElementType *)(piVar8 + -2),iVar1,piVar8 + 1);
        memcpy(((ForAnyElementType *)(piVar8 + -2))->Data,_Src,(longlong)iVar1 * 0x30);
      }
      piVar8[2] = 0;
      piVar8[3] = 0;
      iVar1 = piVar9[4];
      pFVar4 = *(FRigVMPinCategory **)(piVar9 + 2);
      piVar8[4] = iVar1;
      if (iVar1 == 0) {
        piVar8[5] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,iVar1,0,(ForAnyElementType *)(piVar8 + 2),iVar1,piVar8 + 5);
        ConstructItems<FRigVMPinCategory,FRigVMPinCategory,int>
                  (((ForAnyElementType *)(piVar8 + 2))->Data,pFVar4,iVar1);
      }
      piVar8[6] = 0;
      piVar8[7] = 0;
      piVar8[8] = 0;
      piVar8[9] = 0;
      piVar8[0xe] = 0;
      piVar8[0xf] = 0;
      piVar8[0x10] = 0;
      piVar8[0x11] = 0x80;
      piVar8[0x12] = -1;
      piVar8[0x13] = 0;
      piVar8[0x16] = 0;
      piVar8[0x17] = 0;
      piVar8[0x18] = 0;
      TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
      operator=((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                 *)(piVar8 + 6),
                (TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                 *)(piVar9 + 6));
      piVar8[0x1a] = 0;
      piVar8[0x1b] = 0;
      piVar8[0x1c] = 0;
      piVar8[0x1d] = 0;
      piVar8[0x22] = 0;
      piVar8[0x23] = 0;
      piVar8[0x24] = 0;
      piVar8[0x25] = 0x80;
      piVar8[0x26] = -1;
      piVar8[0x27] = 0;
      piVar8[0x2a] = 0;
      piVar8[0x2b] = 0;
      piVar8[0x2c] = 0;
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                   *)(piVar8 + 0x1a),
                  (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                   *)(piVar9 + 0x1a));
      piVar8 = piVar8 + 0x7e;
      piVar9 = piVar9 + 0x7e;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FRigVMRegisterOffset,FRigVMRegisterOffset,int> @ 14a0b31a0

void __cdecl
ConstructItems<FRigVMRegisterOffset,FRigVMRegisterOffset,int>
          (void *param_1,FRigVMRegisterOffset *param_2,int param_3)

{
  int iVar1;
  FScriptContainerElement *_Src;
  TObjectPtr<UScriptStruct> TVar2;
  int *piVar3;
  ERigVMRegisterType *pEVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    piVar3 = (int *)((longlong)param_1 + 0xc);
    pEVar4 = &param_2->Type;
    lVar5 = (longlong)param_1 + (-0x10 - (longlong)param_2);
    do {
      *(undefined8 *)(pEVar4 + lVar5) = 0;
      iVar1 = *(int *)(pEVar4 + -8);
      _Src = (((FRigVMRegisterOffset *)(pEVar4 + -0x10))->Segments).AllocatorInstance.Data;
      piVar3[-1] = iVar1;
      if (iVar1 == 0) {
        *piVar3 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar1,0,(ForAnyElementType *)(pEVar4 + lVar5),iVar1,piVar3);
        memcpy(*(FScriptContainerElement **)(pEVar4 + lVar5),_Src,(longlong)iVar1 << 2);
      }
      *(ERigVMRegisterType *)(piVar3 + 1) = *pEVar4;
      *(FName *)(piVar3 + 2) = *(FName *)(pEVar4 + 4);
      TVar2.field0_0x0 =
           (TObjectPtr<UScriptStruct>_u_0)
           ((TObjectPtr<UScriptStruct>_u_0 *)(pEVar4 + 0x10))->DebugPtr;
      ((TObjectPtr<UScriptStruct>_u_0 *)(piVar3 + 5))->DebugPtr = (UScriptStruct *)TVar2.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar2.field0_0x0 != (UScriptStruct *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar2.field0_0x0);
      }
      TVar2.field0_0x0 =
           (TObjectPtr<UScriptStruct>_u_0)
           ((TObjectPtr<UScriptStruct>_u_0 *)(pEVar4 + 0x18))->DebugPtr;
      ((TObjectPtr<UScriptStruct>_u_0 *)(piVar3 + 7))->DebugPtr = (UScriptStruct *)TVar2.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar2.field0_0x0 != (UScriptStruct *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar2.field0_0x0);
      }
      piVar3[9] = *(int *)(pEVar4 + 0x20);
      *(ushort *)(piVar3 + 10) = *(ushort *)(pEVar4 + 0x24);
      FString::FString((FString *)(piVar3 + 0xb),(FString *)(pEVar4 + 0x28));
      piVar3 = piVar3 + 0x12;
      pEVar4 = pEVar4 + 0x48;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FRigVMTemplateArgument,FRigVMTemplateArgument,int> @ 14a0b32e0

void __cdecl
ConstructItems<FRigVMTemplateArgument,FRigVMTemplateArgument,int>
          (void *param_1,FRigVMTemplateArgument *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  void *_Src;
  FScriptContainerElement *_Src_00;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  if (param_3 != 0) {
    piVar5 = (int *)((longlong)param_1 + 0x30);
    piVar6 = &(param_2->TypeCategories).ArrayNum;
    do {
      pFVar1 = (ForAnyElementType *)(piVar5 + -8);
      *(int *)((longlong)piVar6 + (longlong)param_1 + (-0x30 - (longlong)param_2)) = piVar6[-0xc];
      *(undefined8 *)(piVar5 + -0xb) = *(undefined8 *)(piVar6 + -0xb);
      *(char *)(piVar5 + -9) = (char)piVar6[-9];
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar2 = piVar6[-6];
      _Src = *(void **)(piVar6 + -8);
      piVar5[-6] = iVar2;
      if (iVar2 == 0) {
        piVar5[-5] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,iVar2,0,pFVar1,iVar2,piVar5 + -5);
        memcpy(pFVar1->Data,_Src,(longlong)iVar2 * 0xc);
      }
      pFVar1 = (ForAnyElementType *)(piVar5 + -2);
      *(char *)(piVar5 + -4) = (char)piVar6[-4];
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar2 = *piVar6;
      _Src_00 = (((TArray<FRigVMTemplateArgument::ETypeCategory,TSizedDefaultAllocator<32>_> *)
                 (piVar6 + -2))->AllocatorInstance).Data;
      *piVar5 = iVar2;
      if (iVar2 == 0) {
        piVar5[1] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar2,0,pFVar1,iVar2,piVar5 + 1);
        memcpy(pFVar1->Data,_Src_00,(longlong)iVar2);
      }
      lVar3 = *(longlong *)(piVar6 + 4);
      *(longlong *)(piVar5 + 4) = lVar3;
      piVar5[0xe] = 0;
      piVar5[0xf] = 0;
      if (lVar3 != 0) {
        piVar4 = piVar6 + 8;
        if (*(int **)(piVar6 + 0xe) != (int *)0x0) {
          piVar4 = *(int **)(piVar6 + 0xe);
        }
        (*(code *)**(undefined8 **)piVar4)(piVar4,piVar5 + 8);
      }
      *(undefined1 *)(piVar5 + 0x11) = 0;
      iVar2 = piVar6[0x11];
      *(char *)(piVar5 + 0x11) = (char)iVar2;
      if ((char)iVar2 != '\0') {
        piVar5[0x10] = piVar6[0x10];
      }
      piVar5 = piVar5 + 0x20;
      piVar6 = piVar6 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FRigVMRegistry_NoLock::FTypeInfo,FRigVMRegistry_NoLock::FTypeInfo,int> @ 14a0b3460

void __cdecl
ConstructItems<FRigVMRegistry_NoLock::FTypeInfo,FRigVMRegistry_NoLock::FTypeInfo,int>
          (void *param_1,FTypeInfo *param_2,int param_3)

{
  FName FVar1;
  bool *pbVar2;
  FName *pFVar3;
  TRigVMTypeIndex *pTVar4;
  
  if (param_3 != 0) {
    pFVar3 = (FName *)((longlong)param_1 + 0x10);
    pTVar4 = &param_2->BaseTypeIndex;
    do {
      pFVar3[-2] = *(FName *)((longlong)pFVar3 + (longlong)param_2 + (-0x10 - (longlong)param_1));
      FVar1 = *(FName *)((longlong)(pTVar4 + -1) + 4);
      pFVar3[-1] = FVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar1 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar1);
      }
      *pFVar3 = pTVar4->Name;
      pFVar3[1].ComparisonIndex.Value = pTVar4->Index;
      *(FName *)&pFVar3[1].Number = pTVar4[1].Name;
      pFVar3[2].Number = pTVar4[1].Index;
      *(bool *)&pFVar3[3].ComparisonIndex.Value = *(bool *)(pTVar4 + 2);
      *(bool *)((longlong)&pFVar3[3].ComparisonIndex.Value + 1) =
           *(bool *)((longlong)(pTVar4 + 2) + 1);
      pbVar2 = (bool *)(pTVar4 + 2);
      pTVar4 = pTVar4 + 4;
      pFVar3[3].Number = *(uint *)(pbVar2 + 4);
      pFVar3 = pFVar3 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FRigVMExternalVariable,int> @ 14a0b3710

void __cdecl DefaultConstructItems<FRigVMExternalVariable,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[3] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[4] = 0;
      puVar1 = puVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FRigVMFunctionCompilationPropertyDescription,int> @ 14a0b3750

void __cdecl
DefaultConstructItems<FRigVMFunctionCompilationPropertyDescription,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[5] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[6] = 0;
      puVar1[2] = 0;
      puVar1[4] = 0;
      puVar1[3] = 0;
      FUtf8String::Reset((FUtf8String *)(puVar1 + 5),0);
      puVar1[7] = 0;
      puVar1[8] = 0;
      puVar1 = puVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FRigVMFunctionCompilationPropertyPath,int> @ 14a0b37e0

void __cdecl
DefaultConstructItems<FRigVMFunctionCompilationPropertyPath,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      *(undefined4 *)(puVar1 + -2) = 0xffffffff;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1 = puVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FRigVMGraphFunctionArgument,int> @ 14a0b3820

void __cdecl DefaultConstructItems<FRigVMGraphFunctionArgument,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 local_res18;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    local_res18 = 0;
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      (((FUtf8String *)(puVar1 + 5))->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      puVar1[6] = 0;
      puVar1[2] = 0;
      puVar1[4] = 0;
      puVar1[3] = 0;
      FUtf8String::Reset((FUtf8String *)(puVar1 + 5),0);
      FSoftObjectPtr::operator=((FSoftObjectPtr *)(puVar1 + 2),(FObjectPtr)&local_res18);
      *(undefined2 *)(puVar1 + 7) = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
      *(undefined1 *)(puVar1 + 10) = 0;
      puVar1[0xb] = 0;
      puVar1[0xc] = 0;
      puVar1[0xf] = 0;
      *(undefined4 *)(puVar1 + 0x10) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x84) = 0x80;
      *(undefined4 *)(puVar1 + 0x11) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x8c) = 0;
      puVar1[0x13] = 0;
      *(undefined4 *)(puVar1 + 0x14) = 0;
      puVar1 = puVar1 + 0x16;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FRigVMLazyBranch,int> @ 14a0b3920

void __cdecl DefaultConstructItems<FRigVMLazyBranch,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0xc);
    do {
      *(undefined8 *)((longlong)puVar1 + -0xc) = 0;
      *(undefined4 *)((longlong)puVar1 + -4) = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0xffffffffffffffff;
      puVar1[2] = 0xffffffffffffffff;
      *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
      *(undefined8 *)((longlong)puVar1 + 0x4c) = 0;
      puVar1 = puVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FRigVMMemoryHandle,int> @ 14a0b3970

void __cdecl DefaultConstructItems<FRigVMMemoryHandle,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FRigVMPinCategory,int> @ 14a0b39a0

void __cdecl DefaultConstructItems<FRigVMPinCategory,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined1 *)(lVar1 + 0x14) = 1;
      lVar1 = lVar1 + 0x28;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FRigVMRegister,int> @ 14a0b39e0

void __cdecl DefaultConstructItems<FRigVMRegister,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 8);
    do {
      *(undefined1 *)(puVar1 + -2) = 4;
      puVar1[-1] = 0xffffffff;
      *puVar1 = 0;
      *(undefined2 *)(puVar1 + 1) = 1;
      *(undefined1 *)((longlong)puVar1 + 6) = 0;
      *(undefined2 *)(puVar1 + 2) = 0;
      *(undefined8 *)(puVar1 + 3) = 0;
      puVar1[5] = 0xffffffff;
      *(undefined2 *)(puVar1 + 6) = 0;
      puVar1 = puVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FRigVMRegisterOffset,int> @ 14a0b3a30

void __cdecl DefaultConstructItems<FRigVMRegisterOffset,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined1 *)(lVar1 + 4) = 4;
      *(undefined8 *)(lVar1 + 8) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined8 *)(lVar1 + 0x1c) = 0;
      *(undefined4 *)(lVar1 + 0x24) = 0;
      *(undefined2 *)(lVar1 + 0x28) = 0;
      *(undefined8 *)(lVar1 + 0x2c) = 0;
      *(undefined8 *)(lVar1 + 0x34) = 0;
      lVar1 = lVar1 + 0x48;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FRigVMTag,int> @ 14a0b3a80

void __cdecl DefaultConstructItems<FRigVMTag,int>(void *param_1,int param_2)

{
  FLinearColor FVar1;
  undefined8 *puVar2;
  
  if (param_2 != 0) {
    puVar2 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar2[-1] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      FText::FText((FText *)(puVar2 + 2));
      FVar1 = FLinearColor::White;
      *(undefined2 *)(puVar2 + 6) = 1;
      ((FLinearColor_u_0 *)(puVar2 + 4))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
      param_2 = param_2 + -1;
      puVar2 = puVar2 + 8;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FRigVMTypeCacheScope_NoLock,int> @ 14a0b3af0

void __cdecl DefaultConstructItems<FRigVMTypeCacheScope_NoLock,int>(void *param_1,int param_2)

{
  undefined1 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined1 *)((longlong)param_1 + 0x10);
    do {
      *(undefined8 *)(puVar1 + -0x10) = 0;
      *(undefined8 *)(puVar1 + -8) = 0;
      *puVar1 = 0;
      puVar1[8] = 0;
      *(undefined8 *)(puVar1 + 0x10) = 0;
      *(undefined4 *)(puVar1 + 0x18) = 0;
      *(undefined4 *)(puVar1 + 0x1c) = 0xffffffff;
      puVar1 = puVar1 + 0x30;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRigVMFunction,int> @ 14a0b3b50

void __cdecl DestructItems<FRigVMFunction,int>(FRigVMFunction *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->ArgumentTypeIndices;
    do {
      pFVar1 = (((TArray<FName,TSizedDefaultAllocator<32>_> *)(pTVar2 + 1))->AllocatorInstance).Data
      ;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<FRigVMFunctionArgument,int>
                ((FRigVMFunctionArgument *)
                 (((TArray<FRigVMFunctionArgument,TSizedDefaultAllocator<32>_> *)(pTVar2 + -1))->
                 AllocatorInstance).Data,
                 ((TArray<FRigVMFunctionArgument,TSizedDefaultAllocator<32>_> *)(pTVar2 + -1))->
                 ArrayNum);
      pFVar1 = (((TArray<FRigVMFunctionArgument,TSizedDefaultAllocator<32>_> *)(pTVar2 + -1))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FRigVMFunction *)(pTVar2 + -5))->Name).Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRigVMFunctionArgument,int> @ 14a0b3bd0

void __cdecl DestructItems<FRigVMFunctionArgument,int>(FRigVMFunctionArgument *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->NameString).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1[2].ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRigVMRegisterOffset,int> @ 14a0b3c10

void __cdecl DestructItems<FRigVMRegisterOffset,int>(FRigVMRegisterOffset *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->CachedSegmentPath).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->Segments).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FRigVMTemplateArgument,int> @ 14a0b3c60

void __cdecl DestructItems<FRigVMTemplateArgument,int>(FRigVMTemplateArgument *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&(param_1->FilterType).field_0x28;
    do {
      if (plVar2[-5] != 0) {
        plVar1 = plVar2 + -3;
        if ((longlong *)*plVar2 != (longlong *)0x0) {
          plVar1 = (longlong *)*plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      if ((void *)plVar2[-8] != (void *)0x0) {
        FMemory::Free((void *)plVar2[-8]);
      }
      if ((void *)plVar2[-0xb] != (void *)0x0) {
        FMemory::Free((void *)plVar2[-0xb]);
      }
      plVar2 = plVar2 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRigVMUserWorkflow,int> @ 14a0b3cd0

void __cdecl DestructItems<FRigVMUserWorkflow,int>(FRigVMUserWorkflow *param_1,int param_2)

{
  TDelegateBase<FNotThreadSafeDelegateMode> *this;
  
  if (param_2 != 0) {
    this = (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->PerformDelegate;
    do {
      *(undefined ***)(this + -2) = &___7FRigVMUserWorkflow__6B_;
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)(this + 1));
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(this);
      if (*(void **)(this + -1) != (void *)0x0) {
        FMemory::Free(*(void **)(this + -1));
      }
      if (*(void **)&this[-2].field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&this[-2].field_0x8);
      }
      this = (TDelegateBase<FNotThreadSafeDelegateMode> *)&this[4].field_0x8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRigVMVariantRef,int> @ 14a0b3d40

void __cdecl DestructItems<FRigVMVariantRef,int>(FRigVMVariantRef *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FRigVMTag,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &(param_1->Variant).Tags;
    do {
      DestructItems<FRigVMTag,int>((FRigVMTag *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (*(void **)(pTVar2 + -2) != (void *)0x0) {
        FMemory::Free(*(void **)(pTVar2 + -2));
      }
      pTVar2 = pTVar2 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRigVMTypeCacheScope_NoLock,int> @ 14a0b3da0

void __cdecl
DestructItems<FRigVMTypeCacheScope_NoLock,int>(FRigVMTypeCacheScope_NoLock *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TOptional<TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Types;
    do {
      if (((pTVar2->field0_0x0).TypedValue.ArrayMax != -1) &&
         (pFVar1 = (pTVar2->field0_0x0).TypedValue.AllocatorInstance.Data,
         pFVar1 != (FScriptContainerElement *)0x0)) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// FilterByPredicate<`FRigVMStruct::GetWorkflows'::__l2::<lambda_1>_> @ 14a0b7490

TArray<FRigVMUserWorkflow,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FRigVMUserWorkflow,TSizedDefaultAllocator<32>_>::
FilterByPredicate<_FRigVMStruct::GetWorkflows_::__l2::<lambda_1>_>
          (TArray<FRigVMUserWorkflow,TSizedDefaultAllocator<32>_> *this,
          TArray<FRigVMUserWorkflow,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          <lambda_1> param_1)

{
  ERigVMUserWorkflowType EVar1;
  FRigVMUserWorkflow *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UObject *this_00;
  UFunction *pUVar6;
  TArray<FRigVMUserWorkflow,TSizedDefaultAllocator<32>_> *pTVar7;
  FRigVMUserWorkflow *pFVar8;
  FName *pFVar9;
  FRigVMUserWorkflow *pFVar10;
  FReadAccessScope local_38;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar8 = (FRigVMUserWorkflow *)(this->AllocatorInstance).Data;
  pFVar10 = pFVar8 + this->ArrayNum;
  if (pFVar8 != pFVar10) {
    pFVar9 = (FName *)&(pFVar8->PerformDynamicDelegate).field_0x10;
    do {
      EVar1 = (ERigVMUserWorkflowType)pFVar9[-6].ComparisonIndex.Value;
      if ((((param_1.InType & EVar1) != Invalid) && (EVar1 != Invalid)) && (pFVar9[1] != (FName)0x0)
         ) {
        bVar4 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                          ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pFVar9 + -5));
        if (bVar4) {
LAB_14a0b7557:
          pFVar2 = (FRigVMUserWorkflow *)(__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar2 <= pFVar8) && (pFVar8 < pFVar2 + __return_storage_ptr__->ArrayMax)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TArray<FRigVMUserWorkflow,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar7;
          }
          iVar5 = __return_storage_ptr__->ArrayNum;
          if (iVar5 == __return_storage_ptr__->ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x868,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar5 + 1;
          FRigVMUserWorkflow::FRigVMUserWorkflow
                    ((FRigVMUserWorkflow *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x68),
                     pFVar8);
        }
        else {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pFVar9 + -2),
                     &local_38);
          if ((*pFVar9 == (FName)0x0) ||
             (this_00 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar9 + -1)),
             this_00 == (UObject *)0x0)) {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_38);
          }
          else {
            pUVar6 = UObject::FindFunction(this_00,*pFVar9);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_38);
            if (pUVar6 != (UFunction *)0x0) goto LAB_14a0b7557;
          }
        }
      }
      pFVar8 = pFVar8 + 1;
      pFVar9 = pFVar9 + 0xd;
    } while (pFVar8 != pFVar10);
  }
  return __return_storage_ptr__;
}

// FindByPredicate<`FRigVMGraphFunctionStore::FindFunctionImpl'::__l2::<lambda_1>_> @ 14a0b7640

FRigVMGraphFunctionData * __thiscall
TArray<FRigVMGraphFunctionData,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FRigVMGraphFunctionStore::FindFunctionImpl_::__l2::<lambda_1>_>
          (TArray<FRigVMGraphFunctionData,TSizedDefaultAllocator<32>_> *this,<lambda_1> *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FRigVMGraphFunctionData *this_00;
  FRigVMGraphFunctionData *pFVar3;
  
  this_00 = (FRigVMGraphFunctionData *)(this->AllocatorInstance).Data;
  pFVar3 = this_00 + this->ArrayNum;
  while( true ) {
    if (this_00 == pFVar3) {
      pFVar1 = (param_1->InLibraryPointer).HostObject.SubPathString.Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (param_1->InLibraryPointer).LibraryNodePath.Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (param_1->InLibraryPointer).LibraryNode_DEPRECATED.SubPathString.Data.
               AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      return (FRigVMGraphFunctionData *)0x0;
    }
    bVar2 = FRigVMGraphFunctionIdentifier::operator==
                      ((FRigVMGraphFunctionIdentifier *)this_00,&param_1->InLibraryPointer);
    if (bVar2) break;
    this_00 = this_00 + 1;
  }
  pFVar1 = (param_1->InLibraryPointer).HostObject.SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->InLibraryPointer).LibraryNodePath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->InLibraryPointer).LibraryNode_DEPRECATED.SubPathString.Data.AllocatorInstance.
           Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this_00;
}

// FindByPredicate<`FRigVMGraphFunctionStore::FindFunctionImpl'::__l2::<lambda_2>_> @ 14a0b7710

FRigVMGraphFunctionData * __thiscall
TArray<FRigVMGraphFunctionData,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FRigVMGraphFunctionStore::FindFunctionImpl_::__l2::<lambda_2>_>
          (TArray<FRigVMGraphFunctionData,TSizedDefaultAllocator<32>_> *this,<lambda_2> *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FRigVMGraphFunctionData *this_00;
  FRigVMGraphFunctionData *pFVar3;
  
  this_00 = (FRigVMGraphFunctionData *)(this->AllocatorInstance).Data;
  pFVar3 = this_00 + this->ArrayNum;
  while( true ) {
    if (this_00 == pFVar3) {
      pFVar1 = (param_1->InLibraryPointer).HostObject.SubPathString.Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (param_1->InLibraryPointer).LibraryNodePath.Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (param_1->InLibraryPointer).LibraryNode_DEPRECATED.SubPathString.Data.
               AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      return (FRigVMGraphFunctionData *)0x0;
    }
    bVar2 = FRigVMGraphFunctionIdentifier::operator==
                      ((FRigVMGraphFunctionIdentifier *)this_00,&param_1->InLibraryPointer);
    if (bVar2) break;
    this_00 = this_00 + 1;
  }
  pFVar1 = (param_1->InLibraryPointer).HostObject.SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->InLibraryPointer).LibraryNodePath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->InLibraryPointer).LibraryNode_DEPRECATED.SubPathString.Data.AllocatorInstance.
           Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this_00;
}

// ForEach<TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_const_&,TFunction<bool___cdecl(TRigVMTypeIndex)>_> @ 14a0b7bc0

void __cdecl
Algo::
ForEach<TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_const_&,TFunction<bool___cdecl(TRigVMTypeIndex)>_>
          (TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *param_1,
          TFunction<bool___cdecl(TRigVMTypeIndex)> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong *plVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined4 local_30;
  
  pFVar6 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 0xc;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<TRigVMTypeIndex_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_48);
    }
    if (pFVar6 == pFVar1) break;
    local_38 = *(undefined8 *)pFVar6;
    local_30 = *(undefined4 *)(pFVar6 + 8);
    UE::Core::Private::Function::CheckCallable(*(void **)param_2);
    pcVar3 = *(code **)param_2;
    plVar5 = *(longlong **)&param_2->field_0x28;
    if (*(longlong **)&param_2->field_0x28 == (longlong *)0x0) {
      plVar5 = (longlong *)&param_2->field_0x10;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar3)(uVar4,&local_38);
    pFVar6 = pFVar6 + 0xc;
  }
  if (*(longlong *)param_2 != 0) {
    plVar5 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  return;
}

// IndexOfByPredicate<`FRigVMTemplateArgument::IsExecute_NoLock'::__l2::<lambda_1>_> @ 14a0b8700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
FRigVMTemplateArgument::
IndexOfByPredicate<_FRigVMTemplateArgument::IsExecute_NoLock_::__l2::<lambda_1>_>
          (FRigVMTemplateArgument *this,<lambda_1> param_1,FRigVMRegistryHandle *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  CategoryViews *this_00;
  code **ppcVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [4];
  uint local_b4 [3];
  CategoryViews *local_a8;
  undefined4 local_a0;
  CategoryViews local_98;
  CategoryViews local_88;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (this->bUseCategories == false) {
    pFVar9 = (this->TypeIndices).AllocatorInstance.Data;
    iVar12 = (this->TypeIndices).ArrayNum;
    for (pFVar10 = pFVar9; pFVar10 != pFVar9 + (longlong)iVar12 * 0xc; pFVar10 = pFVar10 + 0xc) {
      local_a0 = *(undefined4 *)(pFVar10 + 8);
      local_a8 = *(CategoryViews **)pFVar10;
      cVar3 = (**(code **)((param_1.InRegistry)->Registry->_padding_ + 0x110))
                        ((param_1.InRegistry)->Registry,&local_a8);
      if (cVar3 == '\0') {
        lVar7 = ((longlong)pFVar10 - (longlong)pFVar9) / 6 +
                ((longlong)pFVar10 - (longlong)pFVar9 >> 0x3f);
        return (int)(lVar7 >> 1) - (int)(lVar7 >> 0x3f);
      }
    }
    uVar8 = -1;
  }
  else {
    iVar12 = 0;
    if (*(longlong *)&this->FilterType == 0) {
      local_a8 = CategoryViews::CategoryViews(&local_88,&this->TypeCategories,param_2);
      local_b4[0] = (local_a8->Types).ArrayNum;
      uVar5 = (ulonglong)(int)local_b4[0];
      pFVar9 = (local_a8->Types).AllocatorInstance.Data;
      pFVar10 = pFVar9 + uVar5 * 0x10;
      while( true ) {
        if ((local_a8->Types).ArrayNum != (int)uVar5) {
          `TCheckedPointerIterator<TArrayView<TRigVMTypeIndex_const_,int>_const_,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(local_b8);
        }
        if (pFVar9 == pFVar10) break;
        puVar2 = *(undefined8 **)pFVar9;
        puVar1 = (undefined8 *)((longlong)puVar2 + (longlong)*(int *)(pFVar9 + 8) * 0xc);
        puVar11 = puVar2;
        if (puVar2 == puVar1) {
LAB_14a0b893f:
          iVar12 = iVar12 + *(int *)(pFVar9 + 8);
          pFVar9 = pFVar9 + 0x10;
          uVar5 = (ulonglong)local_b4[0];
        }
        else {
          do {
            local_98.Types.ArrayNum = *(int *)(puVar11 + 1);
            local_98.Types.AllocatorInstance.Data = (FScriptContainerElement *)*puVar11;
            cVar3 = (**(code **)((param_1.InRegistry)->Registry->_padding_ + 0x110))
                              ((param_1.InRegistry)->Registry,&local_98);
            if (cVar3 == '\0') {
              iVar6 = (int)(((longlong)puVar11 - (longlong)puVar2) / 0xc);
              if (iVar6 == -1) goto LAB_14a0b893f;
              uVar8 = iVar6 + iVar12;
              goto LAB_14a0b895e;
            }
            puVar11 = (undefined8 *)((longlong)puVar11 + 0xc);
          } while (puVar11 != puVar1);
          iVar12 = iVar12 + *(int *)(pFVar9 + 8);
          pFVar9 = pFVar9 + 0x10;
          uVar5 = (ulonglong)local_b4[0];
        }
      }
      uVar8 = -1;
LAB_14a0b895e:
      if (local_88.Types.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Types.AllocatorInstance.Data);
      }
    }
    else {
      local_b8[0] = (code)0x0;
      local_b4[0] = 0;
      this_00 = CategoryViews::CategoryViews(&local_98,&this->TypeCategories,param_2);
      local_78[0] = (code *)0x0;
      local_50 = FMemory::Malloc(0x30,8);
      *local_50 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`FRigVMTemplateArgument::IndexOfByPredicate<`FRigVMTemplateArgument::IsExecute_NoLock'::`2'::<lambda_1>_>'::`8'::<lambda_1>,0,1>
                           ::_vftable_;
      local_50[1] = (code *)this;
      local_50[2] = (code *)local_b4;
      local_50[3] = (code *)local_b8;
      local_50[4] = (code *)param_1.InRegistry;
      local_50[5] = (code *)param_2;
      if (local_50 + 1 != (code **)0x0) {
        local_78[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FRigVMTemplateArgument::IndexOfByPredicate<`FRigVMTemplateArgument::IsExecute_NoLock'::__l2::<lambda_1>_>'::__l8::<lambda_1>,bool,TRigVMTypeIndex>
                      ::Call;
      }
      CategoryViews::ForEachType(this_00,(TFunction<bool___cdecl(TRigVMTypeIndex)> *)local_78);
      if (local_78[0] != (code *)0x0) {
        ppcVar4 = local_78 + 2;
        if (local_50 != (code **)0x0) {
          ppcVar4 = local_50;
        }
        (**(code **)(*ppcVar4 + 0x10))();
      }
      if (local_98.Types.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Types.AllocatorInstance.Data);
      }
      uVar8 = -1;
      if (local_b8[0] != (code)0x0) {
        uVar8 = local_b4[0];
      }
    }
  }
  return uVar8;
}

// InternalConstructor<URigVMGraphFunctionHost> @ 14a0b89b0

void __cdecl InternalConstructor<URigVMGraphFunctionHost>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7URigVMGraphFunctionHost__6B_;
  }
  return;
}

// InternalConstructor<URigVMMemoryStorage> @ 14a0b89e0

void __cdecl InternalConstructor<URigVMMemoryStorage>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7URigVMMemoryStorage__6B_;
  }
  return;
}

// InternalConstructor<URigVMMemoryStorageGeneratorClass> @ 14a0b8a10

void __cdecl InternalConstructor<URigVMMemoryStorageGeneratorClass>(FObjectInitializer *param_1)

{
  UClass *this;
  FObjectInitializer *pFVar1;
  
  this = (UClass *)param_1->Obj;
  if (this != (UClass *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UClass::UClass(this,pFVar1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7URigVMMemoryStorageGeneratorClass__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<URigVMNativized> @ 14a0b8a80

void __cdecl InternalConstructor<URigVMNativized>(FObjectInitializer *param_1)

{
  URigVM *this;
  
  this = (URigVM *)param_1->Obj;
  if (this != (URigVM *)0x0) {
    URigVM::URigVM(this);
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    this->_padding_ = (longlong)&___7URigVMNativized__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<URigVMGraphFunctionHost> @ 14a0b8ae0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<URigVMGraphFunctionHost>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = URigVMGraphFunctionHost::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7URigVMGraphFunctionHost__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<URigVMMemoryStorage> @ 14a0b8b90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<URigVMMemoryStorage>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = URigVMMemoryStorage::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7URigVMMemoryStorage__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<URigVMMemoryStorageGeneratorClass> @ 14a0b8c40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<URigVMMemoryStorageGeneratorClass>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = URigVMMemoryStorageGeneratorClass::GetPrivateStaticClass();
  pUVar2 = (UClass *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar2 != (UClass *)0x0) {
    UClass::UClass(pUVar2,param_1);
    pUVar2->_padding_ = (longlong)&___7URigVMMemoryStorageGeneratorClass__6B_;
    pUVar2[1]._padding_ = 0;
    pUVar2[1]._padding_ = 0;
    pUVar2[1]._padding_ = 0;
    pUVar2[1]._padding_ = 0;
    pUVar2[1]._padding_ = 0;
    pUVar2[1]._padding_ = 0;
    return (UObject *)pUVar2;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<URigVMNativized> @ 14a0b8d20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<URigVMNativized>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  URigVM *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = URigVMNativized::GetPrivateStaticClass();
  this = (URigVM *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (URigVM *)0x0) {
    URigVM::URigVM(this,param_1);
    this->_padding_ = (longlong)&___7URigVMNativized__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// NewObject<URigVMMemoryStorageGeneratorClass> @ 14a0b90a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

URigVMMemoryStorageGeneratorClass * __cdecl
NewObject<URigVMMemoryStorageGeneratorClass>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  URigVMMemoryStorageGeneratorClass *pUVar2;
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
  pUVar1 = URigVMMemoryStorageGeneratorClass::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (URigVMMemoryStorageGeneratorClass *)
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

// RigVMCopy<FName,0> @ 14a0b99d0

void __cdecl RigVMCopy<FName,0>(void *param_1,void *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_3 < 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<172092227084878051>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMTraits.h"
                       ,0xe3,"InCount >= 0");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  memcpy(param_1,param_2,(longlong)param_3 << 3);
  return;
}

// RigVMCopy<FString,0> @ 14a0b9a50

void __cdecl RigVMCopy<FString,0>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  code *pcVar3;
  bool bVar4;
  ForAnyElementType *pFVar5;
  longlong lVar6;
  int *piVar7;
  
  lVar6 = (longlong)param_3;
  if ((param_3 < 0) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<172092227084878015>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMTraits.h"
                         ,0xbf,"InCount >= 0"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (0 < param_3) {
    piVar7 = (int *)((longlong)param_1 + 0xc);
    do {
      pFVar5 = (ForAnyElementType *)
               ((longlong)param_2 + (-0xc - (longlong)param_1) + (longlong)piVar7);
      pFVar1 = (ForAnyElementType *)(piVar7 + -3);
      if (pFVar1 != pFVar5) {
        iVar2 = *(int *)((longlong)piVar7 + (longlong)param_2 + (-4 - (longlong)param_1));
        _Src = pFVar5->Data;
        piVar7[-1] = iVar2;
        if ((iVar2 == 0) && (*piVar7 == 0)) {
          *piVar7 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar2,*piVar7,pFVar1,iVar2,piVar7);
          if (iVar2 != 0) {
            memcpy(pFVar1->Data,_Src,(longlong)iVar2 * 2);
          }
        }
      }
      piVar7 = piVar7 + 4;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}

// RigVMDestroy<FName,0> @ 14a0b9b50

void __cdecl RigVMDestroy<FName,0>(void *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_2 < 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<172092227084878041>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMTraits.h"
                       ,0xd9,"InCount >= 0");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  memset(param_1,0,(longlong)param_2 << 3);
  return;
}

// RigVMDestroy<FString,0> @ 14a0b9bc0

void __cdecl RigVMDestroy<FString,0>(void *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 local_18 [2];
  
  lVar3 = (longlong)param_2;
  if ((param_2 < 0) &&
     (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<172092227084878001>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMTraits.h"
                         ,0xb1,"InCount >= 0"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (0 < lVar3) {
    do {
      if (param_1 != local_18) {
        if (*(void **)param_1 != (void *)0x0) {
          FMemory::Free(*(void **)param_1);
        }
        *(undefined8 *)param_1 = 0;
        *(undefined8 *)((longlong)param_1 + 8) = 0;
      }
      param_1 = (void *)((longlong)param_1 + 0x10);
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}

// RigVMInitialize<FName,0> @ 14a0b9c50

void __cdecl RigVMInitialize<FName,0>(void *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_2 < 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<172092227084878031>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMTraits.h"
                       ,0xcf,"InCount >= 0");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  memset(param_1,0,(longlong)param_2 << 3);
  return;
}

// RigVMInitialize<FString,0> @ 14a0b9cc0

void __cdecl RigVMInitialize<FString,0>(void *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 local_18 [2];
  
  lVar3 = (longlong)param_2;
  if ((param_2 < 0) &&
     (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<172092227084877985>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMTraits.h"
                         ,0xa1,"InCount >= 0"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  memset(param_1,0,lVar3 << 4);
  if (0 < lVar3) {
    do {
      if (param_1 != local_18) {
        if (*(void **)param_1 != (void *)0x0) {
          FMemory::Free(*(void **)param_1);
        }
        *(undefined8 *)param_1 = 0;
        *(undefined8 *)((longlong)param_1 + 8) = 0;
      }
      param_1 = (void *)((longlong)param_1 + 0x10);
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}

// StaticEnum<enum_ERigVMFunctionArgumentDirection> @ 14a0bc0e0

UEnum * __cdecl StaticEnum<enum_ERigVMFunctionArgumentDirection>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigVMFunctionArgumentDirection.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UEnum_ERigVMFunctionArgumentDirection.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigVM_ERigVMFunctionArgumentDirection,(UObject *)pUVar1,
                       L"ERigVMFunctionArgumentDirection");
  }
  return Z_Registration_Info_UEnum_ERigVMFunctionArgumentDirection.OuterSingleton;
}

// StaticEnum<enum_ERigVMMemoryType> @ 14a0bc120

UEnum * __cdecl StaticEnum<enum_ERigVMMemoryType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigVMMemoryType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UEnum_ERigVMMemoryType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigVM_ERigVMMemoryType,(UObject *)pUVar1,
                       L"ERigVMMemoryType");
  }
  return Z_Registration_Info_UEnum_ERigVMMemoryType.OuterSingleton;
}

// StaticEnum<enum_ERigVMPinDirection> @ 14a0bc160

UEnum * __cdecl StaticEnum<enum_ERigVMPinDirection>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigVMPinDirection.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UEnum_ERigVMPinDirection.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigVM_ERigVMPinDirection,(UObject *)pUVar1,
                       L"ERigVMPinDirection");
  }
  return Z_Registration_Info_UEnum_ERigVMPinDirection.OuterSingleton;
}

// StaticEnum<enum_ERigVMRegisterType> @ 14a0bc1a0

UEnum * __cdecl StaticEnum<enum_ERigVMRegisterType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigVMRegisterType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UEnum_ERigVMRegisterType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigVM_ERigVMRegisterType,(UObject *)pUVar1,
                       L"ERigVMRegisterType");
  }
  return Z_Registration_Info_UEnum_ERigVMRegisterType.OuterSingleton;
}

// _Atomic_address_as<char,std::_Atomic_padded<enum_FRigVMRegistry_NoLock::ELockType>_> @ 14a0bc1e0

char * __cdecl
std::_Atomic_address_as<char,std::_Atomic_padded<enum_FRigVMRegistry_NoLock::ELockType>_>
          (_Atomic_padded<FRigVMRegistry_NoLock::ELockType> *param_1)

{
  return (char *)param_1;
}

// get<1,TTuple<enum_FRigVMTemplateArgument::ETypeCategory,int>_const_&> @ 14a0bc1f0

int * __cdecl
get<1,TTuple<enum_FRigVMTemplateArgument::ETypeCategory,int>_const_&>
          (TTuple<FRigVMTemplateArgument::ETypeCategory,int> *param_1)

{
  return (int *)&param_1->field_0x4;
}

// get<0,TTuple<enum_FRigVMTemplateArgument::ETypeCategory,int>_const_&> @ 14a0bc200

ETypeCategory * __cdecl
get<0,TTuple<enum_FRigVMTemplateArgument::ETypeCategory,int>_const_&>
          (TTuple<FRigVMTemplateArgument::ETypeCategory,int> *param_1)

{
  return (ETypeCategory *)param_1;
}

// ~TFunction_OwnedObject<`GetTypeHash_NoLock'::__l2::<lambda_1>,0,0> @ 14a0c2230

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`GetTypeHash_NoLock'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_GetTypeHash_NoLock_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`GetTypeHash_NoLock'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FRigVMTypeCacheScope_NoLock::UpdateTypesIfRequired'::__l2::<lambda_1>,0,0> @ 14a0c2250

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTypeCacheScope_NoLock::UpdateTypesIfRequired'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FRigVMTypeCacheScope_NoLock::UpdateTypesIfRequired_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRigVMTypeCacheScope_NoLock::UpdateTypesIfRequired'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FRigVMTemplateArgument::IndexOfByPredicate<`FRigVMTemplateArgument::IsExecute_NoLock'::__l2::<lambda_1>_>'::__l8::<lambda_1>,0,1> @ 14a0c2270

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgument::IndexOfByPredicate<`FRigVMTemplateArgument::IsExecute_NoLock'::__l2::<lambda_1>_>'::__l8::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_FRigVMTemplateArgument::IndexOfByPredicate<_FRigVMTemplateArgument::IsExecute_NoLock_::__l2::<lambda_1>_>_::__l8::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRigVMTemplateArgument::IndexOfByPredicate<`FRigVMTemplateArgument::IsExecute_NoLock'::`2'::<lambda_1>_>'::`8'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FRigVMTemplateArgument::FindTypeIndex'::__l8::<lambda_1>,0,1> @ 14a0c2290

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgument::FindTypeIndex'::__l8::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FRigVMTemplateArgument::FindTypeIndex_::__l8::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRigVMTemplateArgument::FindTypeIndex'::`8'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FRigVMTemplateArgument::ForEachType'::__l8::<lambda_1>,0,1> @ 14a0c22b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgument::ForEachType'::__l8::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FRigVMTemplateArgument::ForEachType_::__l8::<lambda_1>,0,1>(void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRigVMTemplateArgument::ForEachType'::`8'::<lambda_1>,0,1>::_vftable_
  ;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
                    /* WARNING: Could not recover jumptable at 0x00014a0c22d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FRigVMTemplateArgument::GetNumTypes'::__l8::<lambda_1>,0,1> @ 14a0c22e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgument::GetNumTypes'::__l8::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FRigVMTemplateArgument::GetNumTypes_::__l8::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRigVMTemplateArgument::GetNumTypes'::`8'::<lambda_1>,0,1>::_vftable_
  ;
  return;
}

// ~TFunction_OwnedObject<`FRigVMTemplateArgument::GetNumTypes_NoLock'::__l8::<lambda_1>,0,1> @ 14a0c2300

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgument::GetNumTypes_NoLock'::__l8::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FRigVMTemplateArgument::GetNumTypes_NoLock_::__l8::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRigVMTemplateArgument::GetNumTypes_NoLock'::`8'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FRigVMTemplateArgument::GetTypeIndex_NoLock'::__l11::<lambda_1>,0,1> @ 14a0c2320

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgument::GetTypeIndex_NoLock'::__l11::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FRigVMTemplateArgument::GetTypeIndex_NoLock_::__l11::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRigVMTemplateArgument::GetTypeIndex_NoLock'::`11'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo'::__l1::<lambda_25_>,0,0> @ 14a0c2340

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo'::__l1::<lambda_25_>,0,0>
::
~TFunction_OwnedObject<_FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo_::__l1::<lambda_25_>,0,0>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo'::`1'::<lambda_25_>,0,0>
        ::_vftable_;
  pvVar1 = *(void **)((longlong)this + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TFunction_OwnedObject<`FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo'::__l1::<lambda_26_>,0,0> @ 14a0c2360

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo'::__l1::<lambda_26_>,0,0>
::
~TFunction_OwnedObject<_FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo_::__l1::<lambda_26_>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo'::`1'::<lambda_26_>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo'::__l1::<lambda_27_>,0,1> @ 14a0c2380

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo'::__l1::<lambda_27_>,0,1>
::
~TFunction_OwnedObject<_FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo_::__l1::<lambda_27_>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo'::`1'::<lambda_27_>,0,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FRigVMTemplate::UpdateAllArgumentTypesSlow'::__l2::<lambda_2>,0,1> @ 14a0c23d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplate::UpdateAllArgumentTypesSlow'::__l2::<lambda_2>,0,1>::
~TFunction_OwnedObject<_FRigVMTemplate::UpdateAllArgumentTypesSlow_::__l2::<lambda_2>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRigVMTemplate::UpdateAllArgumentTypesSlow'::`2'::<lambda_2>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FRigVMTemplateArgument::GetSupportedTypeIndices_NoLock'::__l5::<lambda_2>,0,0> @ 14a0c23f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgument::GetSupportedTypeIndices_NoLock'::__l5::<lambda_2>,0,0>
::
~TFunction_OwnedObject<_FRigVMTemplateArgument::GetSupportedTypeIndices_NoLock_::__l5::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRigVMTemplateArgument::GetSupportedTypeIndices_NoLock'::`5'::<lambda_2>,0,0>
        ::_vftable_;
  return;
}

// operator<< @ 14a0c5c10

FArchive * __cdecl operator<<(FArchive *param_1,FRigVMExternalVariableDef *param_2)

{
  int *piVar1;
  int *piVar2;
  UObject *pUVar3;
  FSoftObjectPath local_28;
  
  (**(code **)(*(longlong *)param_1 + 0x178))();
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&param_2->TypeName);
  if ((param_1->field_0x28 & 4) == 0) {
    if ((param_1->field_0x28 & 1) == 0) goto LAB_14a0c5cc0;
    local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_28.AssetPath.PackageName.Number = 0;
    local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_28.AssetPath.AssetName.Number = 0;
    local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.SubPathString.Data.ArrayNum = 0;
    local_28.SubPathString.Data.ArrayMax = 0;
    (**(code **)(*(longlong *)param_1 + 0x140))(param_1,&local_28);
    pUVar3 = FSoftObjectPath::ResolveObject(&local_28);
    param_2->TypeObject = pUVar3;
  }
  else {
    local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_28.AssetPath.PackageName.Number = 0;
    local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_28.AssetPath.AssetName.Number = 0;
    local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.SubPathString.Data.ArrayNum = 0;
    local_28.SubPathString.Data.ArrayMax = 0;
    FSoftObjectPath::SetPath(&local_28,param_2->TypeObject);
    (**(code **)(*(longlong *)param_1 + 0x140))(param_1,&local_28);
  }
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
LAB_14a0c5cc0:
  operator<<(param_1,&param_2->bIsArray);
  operator<<(param_1,&param_2->bIsPublic);
  operator<<(param_1,&param_2->bIsReadOnly);
  piVar1 = &param_2->Size;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar2 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
  return param_1;
}

// operator<< @ 14a0c5d60

FArchive * __cdecl operator<<(FArchive *param_1,FRigVMFunctionCompilationData *param_2)

{
  uint *puVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  ushort *puVar4;
  undefined1 *puVar5;
  ushort *puVar6;
  code *pcVar7;
  TMap<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  FArchive *pFVar13;
  longlong lVar14;
  ulonglong uVar15;
  FScriptContainerElement *pFVar16;
  undefined1 *puVar17;
  ulonglong uVar18;
  ushort *puVar19;
  uint uVar20;
  uint *puVar22;
  TMap<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar23;
  uint uVar24;
  TBitArray<FDefaultBitArrayAllocator> *pTVar26;
  uint uVar27;
  ulonglong uVar28;
  undefined1 *puVar29;
  undefined1 *local_res8;
  byte local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_f8 [2];
  ushort local_f6 [3];
  undefined1 local_f0 [8];
  TSet<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_e8;
  ForAnyElementType local_e0;
  uint local_d8 [2];
  TMap<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>,0>_>
  *local_d0;
  uint uStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  uint uStack_b4;
  uint local_b0;
  uint uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  TPairInitializer<FRigVMOperand_const_&,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_const_&>
  local_a0;
  TMap<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>,0>_>
  *local_90;
  TMap<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  undefined1 *local_58;
  ForAnyElementType *local_50;
  ulonglong uVar21;
  ulonglong uVar25;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  FRigVMByteCode::Serialize(&param_2->ByteCode,param_1);
  TArrayPrivateFriend::Serialize<FName,TSizedDefaultAllocator<32>_>(param_1,&param_2->FunctionNames)
  ;
  TArrayPrivateFriend::
  Serialize<FRigVMFunctionCompilationPropertyDescription,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->WorkPropertyDescriptions);
  TArrayPrivateFriend::Serialize<FRigVMFunctionCompilationPropertyPath,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->WorkPropertyPathDescriptions);
  TArrayPrivateFriend::
  Serialize<FRigVMFunctionCompilationPropertyDescription,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->LiteralPropertyDescriptions);
  TArrayPrivateFriend::Serialize<FRigVMFunctionCompilationPropertyPath,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->LiteralPropertyPathDescriptions);
  TArrayPrivateFriend::
  Serialize<FRigVMFunctionCompilationPropertyDescription,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->DebugPropertyDescriptions);
  TArrayPrivateFriend::Serialize<FRigVMFunctionCompilationPropertyPath,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->DebugPropertyPathDescriptions);
  TArrayPrivateFriend::
  Serialize<FRigVMFunctionCompilationPropertyDescription,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->ExternalPropertyDescriptions);
  TArrayPrivateFriend::Serialize<FRigVMFunctionCompilationPropertyPath,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->ExternalPropertyPathDescriptions);
  TSetPrivateFriend::
  Serialize<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                      *)&param_2->ExternalRegisterIndexToVariable);
  TSetPrivateFriend::
  Serialize<TTuple<FString,FRigVMOperand>,TDefaultMapHashableKeyFuncs<FString,FRigVMOperand,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<FString,FRigVMOperand>,TDefaultMapHashableKeyFuncs<FString,FRigVMOperand,0>,FDefaultSetAllocator>
                      *)&param_2->Operands);
  puVar22 = &param_2->Hash;
  puVar1 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar22,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar22);
    }
  }
  else {
    *puVar22 = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    param_2->bEncounteredSurpressedErrors = false;
  }
  iVar11 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  if ((0x2b < iVar11) ||
     (iVar11 = FArchiveState::CustomVer
                         ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID),
     0x70 < iVar11)) {
    local_res10[0] =
         (param_2->OperandToDebugRegisters).field_0x8 -
         (param_2->OperandToDebugRegisters).field_0x34;
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((byte *)plVar2[1] < (byte *)*plVar2 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,1);
    }
    else {
      local_res10[0] = *(byte *)*plVar2;
      *plVar2 = *plVar2 + 1;
    }
    uVar21 = 0;
    uStack_c8 = 0;
    uVar20 = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      pTVar26 = (TBitArray<FDefaultBitArrayAllocator> *)
                &(param_2->OperandToDebugRegisters).field_0x10;
      uStack_c4 = 1;
      uVar24 = *(uint *)&(param_2->OperandToDebugRegisters).field_0x28;
      pTVar23 = &param_2->OperandToDebugRegisters;
      uStack_b4 = uVar20;
      if (uVar24 != 0) {
        puVar22 = *(uint **)&(param_2->OperandToDebugRegisters).field_0x20;
        if (puVar22 == (uint *)0x0) {
          puVar22 = (uint *)pTVar26;
        }
        uVar12 = *puVar22;
        uVar25 = uVar21;
        uVar20 = 0;
        uStack_c8 = 0;
        while (uVar12 == 0) {
          iVar11 = (int)uVar25;
          uVar20 = (int)uVar21 + 0x20;
          uVar21 = (ulonglong)uVar20;
          uStack_c8 = iVar11 + 1;
          uVar25 = (ulonglong)uStack_c8;
          uStack_b4 = uVar24;
          if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_c8)
          goto LAB_14a0c62ef;
          uVar12 = puVar22[(longlong)iVar11 + 1];
        }
        uStack_c4 = -uVar12 & uVar12;
        uVar21 = (ulonglong)uStack_c4 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_a0.Key._4_4_ = (int)lVar14;
        uStack_b4 = (uVar20 - 1) + local_a0.Key._4_4_;
        if ((int)uVar24 < (int)uStack_b4) {
          uStack_b4 = uVar24;
        }
      }
LAB_14a0c62ef:
      iStack_a8 = *(int *)&(param_2->OperandToDebugRegisters).field_0x8 -
                  *(int *)&(param_2->OperandToDebugRegisters).field_0x34;
      uVar12 = *(uint *)&(param_2->OperandToDebugRegisters).field_0x28;
      uStack_b8 = 0xffffffff;
      TStack_80._padding_ = CONCAT44(uStack_c4,uStack_c8);
      uVar27 = uVar12 & 0xffffffe0;
      TStack_80.CurrentBitIndex = uStack_b4;
      TStack_80.UnvisitedBitMask = 0xffffffff;
      iVar11 = (int)uVar12 >> 5;
      TStack_80._28_4_ = uStack_b4;
      TStack_80.BaseBitIndex = uVar20;
      uStack_60 = CONCAT44(uStack_a4,iStack_a8);
      local_d0 = pTVar23;
      local_c0 = (undefined1 *)pTVar26;
      local_b0 = uVar20;
      uStack_ac = uStack_b4;
      local_a0.Value = (TArray<FRigVMOperand,TSizedDefaultAllocator<32>_> *)pTVar26;
      local_90 = pTVar23;
      local_88 = pTVar23;
      TStack_80.Array = pTVar26;
      local_e8._0_4_ = uVar12;
      if ((((int)uVar12 < 0) || ((int)uVar24 < (int)uVar12)) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        pFVar13 = (FArchive *)(*pcVar7)();
        return pFVar13;
      }
      uVar20 = *(uint *)&(param_2->OperandToDebugRegisters).field_0x28;
      if (uVar12 != uVar20) {
        puVar17 = *(undefined1 **)&(param_2->OperandToDebugRegisters).field_0x20;
        if (puVar17 == (undefined1 *)0x0) {
          puVar17 = (undefined1 *)pTVar26;
        }
        uVar24 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar11 * 4);
        while (uVar24 == 0) {
          lVar14 = (longlong)iVar11;
          uVar27 = uVar27 + 0x20;
          iVar11 = iVar11 + 1;
          uVar12 = uVar20;
          local_e8._0_4_ = uVar20;
          if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
          goto LAB_14a0c6410;
          uVar24 = *(uint *)(puVar17 + lVar14 * 4 + 4);
        }
        uVar21 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
        lVar14 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        uVar12 = (int)lVar14 + -1 + uVar27;
        local_e8._0_4_ = uVar12;
        if ((int)uVar20 < (int)uVar12) {
          uVar12 = uVar20;
          local_e8._0_4_ = uVar20;
        }
      }
LAB_14a0c6410:
      while( true ) {
        pTVar8 = local_88;
        if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
          `TSparseArray<TSparseSetElement<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (((TStack_80.CurrentBitIndex == uVar12) && (TStack_80.Array == pTVar26)) &&
           (pTVar8 == pTVar23)) break;
        puVar29 = (undefined1 *)((longlong)TStack_80.CurrentBitIndex * 0x20 + *(longlong *)pTVar8);
        puVar17 = (undefined1 *)**(undefined8 **)&param_1->field_0x8;
        if ((undefined1 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar17 + 1) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar29,1);
        }
        else {
          *puVar29 = *puVar17;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
        }
        puVar19 = (ushort *)(puVar29 + 2);
        puVar4 = (ushort *)**(undefined8 **)&param_1->field_0x8;
        if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar19,2);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar19);
          }
        }
        else {
          *puVar19 = *puVar4;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
        }
        puVar19 = (ushort *)(puVar29 + 4);
        puVar4 = (ushort *)**(undefined8 **)&param_1->field_0x8;
        if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar19,2);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar19);
          }
        }
        else {
          *puVar19 = *puVar4;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
        }
        plVar2 = *(longlong **)&param_1->field_0x8;
        local_res18[0] = puVar29[0x10];
        if ((undefined1 *)plVar2[1] < (undefined1 *)*plVar2 + 1) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,1);
        }
        else {
          local_res18[0] = *(undefined1 *)*plVar2;
          *plVar2 = *plVar2 + 1;
        }
        iVar11 = *(int *)(puVar29 + 0x10);
        puVar17 = *(undefined1 **)(puVar29 + 8);
        puVar19 = (ushort *)(puVar17 + 4);
        local_res8 = puVar17 + (longlong)iVar11 * 6;
        while( true ) {
          if (*(int *)(puVar29 + 0x10) != iVar11) {
            `TCheckedPointerIterator<FRigVMOperand,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_f0);
          }
          if (puVar17 == local_res8) break;
          puVar5 = (undefined1 *)**(undefined8 **)&param_1->field_0x8;
          if ((undefined1 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar17,1);
          }
          else {
            *puVar17 = *puVar5;
            **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
          }
          puVar4 = puVar19 + -1;
          puVar6 = (ushort *)**(undefined8 **)&param_1->field_0x8;
          if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
            if ((param_1->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar4,2);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,puVar4);
            }
          }
          else {
            *puVar4 = *puVar6;
            **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
          }
          puVar4 = (ushort *)**(undefined8 **)&param_1->field_0x8;
          if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
            if ((param_1->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar19,2);
              puVar17 = puVar17 + 6;
              puVar19 = puVar19 + 3;
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,puVar19);
              puVar17 = puVar17 + 6;
              puVar19 = puVar19 + 3;
            }
          }
          else {
            puVar17 = puVar17 + 6;
            *puVar19 = *puVar4;
            **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
            puVar19 = puVar19 + 3;
          }
        }
        TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
        pTVar23 = local_90;
        pTVar26 = (TBitArray<FDefaultBitArrayAllocator> *)local_a0.Value;
        uVar12 = (uint)local_e8;
      }
    }
    else if (local_res10[0] != 0) {
      local_e8 = (TSet<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)&param_2->OperandToDebugRegisters;
      uVar25 = uVar21;
      do {
        plVar2 = *(longlong **)&param_1->field_0x8;
        local_f8[0] = 0;
        local_f6[0] = 0xffff;
        local_f6[1] = 0xffff;
        if ((undefined1 *)plVar2[1] < (undefined1 *)*plVar2 + 1) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_f8,1);
        }
        else {
          local_f8[0] = *(undefined1 *)*plVar2;
          *plVar2 = *plVar2 + 1;
        }
        plVar2 = *(longlong **)&param_1->field_0x8;
        if ((undefined2 *)plVar2[1] < (undefined2 *)*plVar2 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_f6,2);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,local_f6);
          }
        }
        else {
          local_f6[0] = *(undefined2 *)*plVar2;
          *plVar2 = *plVar2 + 2;
        }
        puVar17 = &param_1->field_0x2a;
        plVar2 = *(longlong **)&param_1->field_0x8;
        if ((undefined2 *)plVar2[1] < (undefined2 *)*plVar2 + 1) {
          if ((*puVar17 & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_f6 + 1,2);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,local_f6 + 1);
          }
        }
        else {
          local_f6[1] = *(undefined2 *)*plVar2;
          *plVar2 = *plVar2 + 2;
        }
        plVar2 = *(longlong **)&param_1->field_0x8;
        if ((undefined1 *)plVar2[1] < (undefined1 *)*plVar2 + 1) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_res8,1);
        }
        else {
          local_res8 = (undefined1 *)CONCAT71(local_res8._1_7_,*(undefined1 *)*plVar2);
          *plVar2 = *plVar2 + 1;
        }
        local_e0.Data = (FScriptContainerElement *)0x0;
        local_d8[0] = 0;
        local_d8[1] = 0;
        uVar15 = uVar21;
        cVar9 = '\0';
        if ((byte)local_res8 != 0) {
          UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (6,2,(uint)(byte)local_res8,&local_e0,(int *)local_d8,(int *)(local_d8 + 1));
          uVar15 = (ulonglong)local_d8[0];
          cVar9 = (byte)local_res8;
        }
        uVar18 = uVar21;
        uVar28 = uVar21;
        if (cVar9 != '\0') {
          while( true ) {
            uVar12 = (uint)uVar18;
            uVar24 = uVar20;
            if ((int)uVar12 < (int)uVar15) {
              uVar24 = ~uVar12 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar10 = FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar7 = (code *)swi(3);
              pFVar13 = (FArchive *)(*pcVar7)();
              return pFVar13;
            }
            pFVar16 = local_e0.Data + uVar28;
            pFVar3 = (FScriptContainerElement *)**(undefined8 **)&param_1->field_0x8;
            if ((FScriptContainerElement *)(*(undefined8 **)&param_1->field_0x8)[1] < pFVar3 + 1) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar16,1);
            }
            else {
              *pFVar16 = *pFVar3;
              **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
            }
            pFVar3 = pFVar16 + 2;
            puVar19 = (ushort *)**(undefined8 **)&param_1->field_0x8;
            if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar19 + 1) {
              if ((*puVar17 & 1) == 0) {
                (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar3,2);
              }
              else {
                FArchive::SerializeByteOrderSwapped(param_1,(ushort *)pFVar3);
              }
            }
            else {
              *(ushort *)pFVar3 = *puVar19;
              **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
            }
            pFVar16 = pFVar16 + 4;
            puVar19 = (ushort *)**(undefined8 **)&param_1->field_0x8;
            if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar19 + 1) {
              if ((*puVar17 & 1) == 0) {
                (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar16,2);
              }
              else {
                FArchive::SerializeByteOrderSwapped(param_1,(ushort *)pFVar16);
              }
            }
            else {
              *(ushort *)pFVar16 = *puVar19;
              **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
            }
            if ((int)(uint)(byte)local_res8 <= (int)(uVar12 + 1)) break;
            uVar15 = (ulonglong)local_d8[0];
            uVar18 = (ulonglong)(uVar12 + 1);
            uVar28 = uVar28 + 6;
          }
        }
        local_58 = local_f8;
        local_50 = &local_e0;
        TSet<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FRigVMOperand_const_&,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_const_&>_>
                  (local_e8,&local_a0,(bool *)&local_58);
        if (local_e0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data);
        }
        uVar24 = (int)uVar25 + 1;
        uVar25 = (ulonglong)uVar24;
      } while ((int)uVar24 < (int)(uint)local_res10[0]);
    }
  }
  return param_1;
}

// operator<< @ 14a0c66b0

FArchive * __cdecl operator<<(FArchive *param_1,FRigVMFunctionCompilationPropertyPath *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    param_2->PropertyIndex = *piVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  operator<<(param_1,&param_2->HeadCPPType);
  operator<<(param_1,&param_2->SegmentPath);
  return param_1;
}

// operator<< @ 14a0c6730

FArchive * __cdecl operator<<(FArchive *param_1,FRigVMGraphFunctionArgument *param_2)

{
  ERigVMPinDirection *pEVar1;
  
  (**(code **)(*(longlong *)param_1 + 0x178))();
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&param_2->DisplayName);
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&param_2->CPPType);
  (**(code **)(*(longlong *)param_1 + 0x148))(param_1,&param_2->CPPTypeObject);
  operator<<(param_1,&param_2->bIsArray);
  pEVar1 = (ERigVMPinDirection *)**(undefined8 **)&param_1->field_0x8;
  if ((ERigVMPinDirection *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->Direction,1);
  }
  else {
    param_2->Direction = *pEVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  operator<<(param_1,&param_2->DefaultValue);
  operator<<(param_1,&param_2->bIsConst);
  TSetPrivateFriend::
  Serialize<TTuple<FString,FText>,TDefaultMapHashableKeyFuncs<FString,FText,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<FString,FText>,TDefaultMapHashableKeyFuncs<FString,FText,0>,FDefaultSetAllocator>
                      *)&param_2->PathToTooltip);
  return param_1;
}

// operator<< @ 14a0c6800

FArchive * __cdecl operator<<(FArchive *param_1,FRigVMGraphFunctionData *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  operator<<(param_1,&param_2->Header);
  operator<<(param_1,&param_2->CompilationData);
  iVar3 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID);
  if (iVar3 < 0x65) {
    if ((param_1->field_0x28 & 1) != 0) {
      FString::Empty(&param_2->SerializedCollapsedNode_DEPRECATED);
      return param_1;
    }
  }
  else {
    operator<<(param_1,&param_2->SerializedCollapsedNode_DEPRECATED);
    iVar3 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRigVMObjectVersion::GUID);
    if (iVar3 < 0x10) {
      if ((param_1->field_0x28 & 1) != 0) {
        FRigVMObjectArchive::Empty(&param_2->CollapseNodeArchive);
        return param_1;
      }
    }
    else {
      TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
                (param_1,&(param_2->CollapseNodeArchive).Buffer);
      piVar1 = &(param_2->CollapseNodeArchive).UncompressedSize;
      piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
      if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
        }
      }
      else {
        *piVar1 = *piVar2;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      piVar1 = &(param_2->CollapseNodeArchive).CompressedSize;
      piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
      if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
        }
      }
      else {
        *piVar1 = *piVar2;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      operator<<(param_1,&(param_2->CollapseNodeArchive).bIsCompressed);
      if ((param_2->CollapseNodeArchive).Buffer.ArrayNum != 0) {
        FString::Empty(&param_2->SerializedCollapsedNode_DEPRECATED);
      }
    }
  }
  return param_1;
}

// operator<< @ 14a0c69a0

FArchive * __cdecl operator<<(FArchive *param_1,FRigVMGraphFunctionHeader *param_2)

{
  int *piVar1;
  FRigVMNodeLayout *pFVar2;
  FRigVMPinCategory *pFVar3;
  int iVar4;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FRigVMObjectVersion::GUID);
  operator<<(param_1,&param_2->LibraryPointer);
  if (((param_1->field_0x28 & 1) == 0) ||
     (iVar4 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRigVMObjectVersion::GUID),
     10 < iVar4)) {
    (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FRigVMObjectVersion::GUID);
    operator<<(param_1,&(param_2->Variant).Guid);
    TArrayPrivateFriend::Serialize<FRigVMTag,TSizedDefaultAllocator<32>_>
              (param_1,&(param_2->Variant).Tags);
  }
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&param_2->Name);
  operator<<(param_1,&param_2->NodeTitle);
  operator<<(param_1,&param_2->NodeColor);
  if (((param_1->field_0x28 & 1) == 0) ||
     (iVar4 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRigVMObjectVersion::GUID),
     8 < iVar4)) {
    operator<<(param_1,&param_2->Description);
  }
  else {
    (**(code **)(*(longlong *)param_1 + 0x170))(param_1,&param_2->Tooltip_DEPRECATED);
  }
  operator<<(param_1,&param_2->Category);
  operator<<(param_1,&param_2->Keywords);
  TArrayPrivateFriend::Serialize<FRigVMGraphFunctionArgument,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->Arguments);
  TSetPrivateFriend::
  Serialize<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>,TDefaultMapHashableKeyFuncs<FRigVMGraphFunctionIdentifier,unsigned_int,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>,TDefaultMapHashableKeyFuncs<FRigVMGraphFunctionIdentifier,unsigned_int,0>,FDefaultSetAllocator>
                      *)&param_2->Dependencies);
  TArrayPrivateFriend::Serialize<FRigVMExternalVariable,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->ExternalVariables);
  pFVar2 = &param_2->Layout;
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar4 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRigVMObjectVersion::GUID),
     iVar4 < 0xd)) {
    piVar1 = &(param_2->Layout).Categories.ArrayMax;
    pFVar3 = (FRigVMPinCategory *)(pFVar2->Categories).AllocatorInstance.Data;
    iVar4 = (param_2->Layout).Categories.ArrayNum;
    if ((param_2->Layout).Categories.ArrayMax < 0) {
      DestructItems<FRigVMPinCategory,int>(pFVar3,iVar4);
      (param_2->Layout).Categories.ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,(ForAnyElementType *)pFVar2,0,piVar1);
      }
    }
    else {
      DestructItems<FRigVMPinCategory,int>(pFVar3,iVar4);
      (param_2->Layout).Categories.ArrayNum = 0;
    }
    TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::Reset
              ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                *)&(param_2->Layout).PinIndexInCategory);
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
             *)&(param_2->Layout).DisplayNames);
    return param_1;
  }
  operator<<(param_1,pFVar2);
  return param_1;
}

// operator<< @ 14a0c6b90

FArchive * __cdecl operator<<(FArchive *param_1,FRigVMGraphFunctionIdentifier *param_2)

{
  FString *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FString *pFVar5;
  FString local_38;
  FSoftObjectPath local_28;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FRigVMObjectVersion::GUID);
  if ((((param_1->field_0x28 & 4) != 0) &&
      (pFVar1 = &param_2->LibraryNodePath, (param_2->LibraryNodePath).Data.ArrayNum < 2)) &&
     ((param_2->LibraryNode_DEPRECATED).AssetPath.PackageName != (FName)0x0)) {
    pFVar5 = FSoftObjectPath::ToString(&param_2->LibraryNode_DEPRECATED,&local_38);
    if (pFVar1 != pFVar5) {
      pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pFVar1->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_2->LibraryNodePath).Data.ArrayNum = (pFVar5->Data).ArrayNum;
      (param_2->LibraryNodePath).Data.ArrayMax = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    iVar2 = (param_2->LibraryNodePath).Data.ArrayNum;
    iVar4 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar4 = 0;
    }
    FString::AssignRange(pFVar1,(wchar_t *)(pFVar1->Data).AllocatorInstance.Data,iVar4);
  }
  if ((param_1->field_0x28 & 1) != 0) {
    iVar4 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRigVMObjectVersion::GUID);
    if (iVar4 < 10) {
      local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_28.AssetPath.PackageName.Number = 0;
      local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_28.AssetPath.AssetName.Number = 0;
      local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.SubPathString.Data.ArrayNum = 0;
      local_28.SubPathString.Data.ArrayMax = 0;
      (**(code **)(*(longlong *)param_1 + 0x140))(param_1,&local_28);
      pFVar5 = FSoftObjectPath::ToString(&local_28,&local_38);
      pFVar1 = &param_2->LibraryNodePath;
      if (pFVar1 != pFVar5) {
        pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (pFVar1->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
        (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (param_2->LibraryNodePath).Data.ArrayNum = (pFVar5->Data).ArrayNum;
        (param_2->LibraryNodePath).Data.ArrayMax = (pFVar5->Data).ArrayMax;
        (pFVar5->Data).ArrayNum = 0;
        (pFVar5->Data).ArrayMax = 0;
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
      }
      goto LAB_14a0c6cf1;
    }
  }
  operator<<(param_1,&param_2->LibraryNodePath);
LAB_14a0c6cf1:
  (**(code **)(*(longlong *)param_1 + 0x140))(param_1,&param_2->HostObject);
  return param_1;
}

// operator<< @ 14a0c6d30

FArchive * __cdecl operator<<(FArchive *param_1,FRigVMNodeLayout *param_2)

{
  int iVar1;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FRigVMObjectVersion::GUID);
  TArrayPrivateFriend::Serialize<FRigVMPinCategory,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->Categories);
  if ((param_1->field_0x28 & 1) != 0) {
    iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRigVMObjectVersion::GUID);
    if (iVar1 < 0xe) {
      TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
      Reset((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
             *)&param_2->PinIndexInCategory);
      goto LAB_14a0c6d91;
    }
  }
  TSetPrivateFriend::
  Serialize<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                      *)&param_2->PinIndexInCategory);
LAB_14a0c6d91:
  TSetPrivateFriend::
  Serialize<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      *)&param_2->DisplayNames);
  return param_1;
}

// operator<< @ 14a0c6dc0

FArchive * __cdecl operator<<(FArchive *param_1,FRigVMObjectArchive *param_2)

{
  int *piVar1;
  int *piVar2;
  
  TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->Buffer);
  piVar1 = &param_2->UncompressedSize;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &param_2->CompressedSize;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  operator<<(param_1,&param_2->bIsCompressed);
  return param_1;
}

// operator<< @ 14a0c6e90

FArchive * __cdecl operator<<(FArchive *param_1,FRigVMOperand *param_2)

{
  ushort *puVar1;
  ERigVMMemoryType *pEVar2;
  ushort *puVar3;
  
  pEVar2 = (ERigVMMemoryType *)**(undefined8 **)&param_1->field_0x8;
  if ((ERigVMMemoryType *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar2 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,1);
  }
  else {
    param_2->MemoryType = *pEVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar1 = &param_2->RegisterIndex;
  puVar3 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  puVar1 = &param_2->RegisterOffset;
  puVar3 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if (puVar3 + 1 <= (ushort *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *puVar1 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,2);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar1);
  return param_1;
}

// operator<< @ 14a0c6fa0

FArchive * __cdecl operator<<(FArchive *param_1,FRigVMPinCategory *param_2)

{
  int iVar1;
  int *piVar2;
  uint local_res8 [2];
  
  operator<<(param_1,&param_2->Path);
  TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>(param_1,&param_2->Elements);
  if ((param_1->field_0x28 & 1) == 0) {
    piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
    if (piVar2 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) goto LAB_14a0c6ffe;
  }
  else {
    iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRigVMObjectVersion::GUID);
    if (iVar1 < 0xf) {
      param_2->bExpandedByDefault = true;
      return param_1;
    }
    piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
    if (piVar2 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
LAB_14a0c6ffe:
      param_2->bExpandedByDefault = *piVar2 != 0;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      return param_1;
    }
    local_res8[0] = 0;
    if ((param_1->field_0x28 & 1) != 0) goto LAB_14a0c7048;
  }
  local_res8[0] = (uint)(param_2->bExpandedByDefault != false);
LAB_14a0c7048:
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
  if (1 < local_res8[0]) {
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  if ((param_1->field_0x28 & 1) != 0) {
    param_2->bExpandedByDefault = local_res8[0] != 0;
  }
  return param_1;
}

// operator<< @ 14a0c70a0

FArchive * __cdecl operator<<(FArchive *param_1,FRigVMRegisterOffset *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FArchive *pFVar4;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FAnimObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FReleaseObjectVersion::GUID);
  iVar3 = FArchiveState::CustomVer((FArchiveState *)param_1,&FAnimObjectVersion::GUID);
  if (1 < iVar3) {
    if (((param_1->field_0x28 & 4) == 0) && ((param_1->field_0x2b & 5) == 0)) {
      if ((param_1->field_0x28 & 1) != 0) {
        FRigVMRegisterOffset::Load(param_2,param_1);
        return param_1;
      }
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryDeprecated.cpp"
                         ,0x65,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FArchive *)(*pcVar1)();
        return pFVar4;
      }
    }
    else {
      FRigVMRegisterOffset::Save(param_2,param_1);
    }
  }
  return param_1;
}

// operator<< @ 14a0c7170

FArchive * __cdecl operator<<(FArchive *param_1,FRigVMTag *param_2)

{
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FRigVMObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,param_2);
  operator<<(param_1,&param_2->Label);
  (**(code **)(*(longlong *)param_1 + 0x170))(param_1,&param_2->ToolTip);
  operator<<(param_1,&param_2->Color);
  operator<<(param_1,&param_2->bShowInUserInterface);
  operator<<(param_1,&param_2->bMarksSubjectAsInvalid);
  return param_1;
}

// operator() @ 14a0c8b80

bool __thiscall
`GetTypeHash_NoLock'::__l2::<lambda_1>::operator()(void *this,TRigVMTypeIndex *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  FName local_18;
  int local_10;
  
  local_18 = param_1->Name;
  local_10 = param_1->Index;
  uVar1 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 8) + 0x1b8))
                    ((longlong *)**(undefined8 **)((longlong)this + 8),&local_18);
  uVar3 = **(uint **)this - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar3) - uVar1 ^ uVar3 << 8;
  uVar4 = (uVar1 - uVar3) - uVar2 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 0xc;
  uVar1 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar1) - uVar3 ^ uVar1 >> 5;
  uVar2 = (uVar3 - uVar4) - uVar1 ^ uVar4 >> 3;
  uVar1 = (uVar1 - uVar2) - uVar4 ^ uVar2 << 10;
  **(uint **)this = (uVar4 - uVar1) - uVar2 ^ uVar1 >> 0xf;
  return true;
}

// `scalar_deleting_destructor' @ 14a0c9c50

void * __thiscall
IBaseDelegateInstance<void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a0c9c80

void * __thiscall
IBaseDelegateInstance<void___cdecl(TArrayView<UObject_*,int>),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TArrayView<UObject_*,int>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a0c9cb0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FRigVMRegistry_NoLock::InitializeBaseTypes_NoLock'::__l6::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a0c9ce0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a0c9d10

void * __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a0c9d40

void * __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a0c9d70

void * __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a0c9da0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a0c9dd0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(TArrayView<UObject_*,int>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(TArrayView<UObject_*,int>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a0c9e00

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a0c9e30

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TArrayView<UObject_*,int>),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TArrayView<UObject_*,int>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a0c9e60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FRigVMTemplateArgument_(__cdecl*)(FName,enum_ERigVMPinDirection,FRigVMRegistryHandle_const_&),0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_P6A_AUFRigVMTemplateArgument__VFName__W4ERigVMPinDirection__AEBUFRigVMRegistryHandle___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a0c9ea0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`GetTypeHash_NoLock'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`GetTypeHash_NoLock'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a0c9ee0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTypeCacheScope_NoLock::UpdateTypesIfRequired'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRigVMTypeCacheScope_NoLock::UpdateTypesIfRequired'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a0c9f20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgument::IndexOfByPredicate<`FRigVMTemplateArgument::IsExecute_NoLock'::__l2::<lambda_1>_>'::__l8::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRigVMTemplateArgument::IndexOfByPredicate<`FRigVMTemplateArgument::IsExecute_NoLock'::`2'::<lambda_1>_>'::`8'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a0c9f60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgument::FindTypeIndex'::__l8::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRigVMTemplateArgument::FindTypeIndex'::`8'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a0c9fa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgument::ForEachType'::__l8::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRigVMTemplateArgument::ForEachType'::`8'::<lambda_1>,0,1>::_vftable_
  ;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a0ca000

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgument::GetNumTypes'::__l8::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRigVMTemplateArgument::GetNumTypes'::`8'::<lambda_1>,0,1>::_vftable_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a0ca040

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgument::GetNumTypes_NoLock'::__l8::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRigVMTemplateArgument::GetNumTypes_NoLock'::`8'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a0ca080

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgument::GetTypeIndex_NoLock'::__l11::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRigVMTemplateArgument::GetTypeIndex_NoLock'::`11'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a0ca0c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo'::__l1::<lambda_25_>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo'::`1'::<lambda_25_>,0,0>
        ::_vftable_;
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a0ca110

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo'::__l1::<lambda_26_>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo'::`1'::<lambda_26_>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a0ca150

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo'::__l1::<lambda_27_>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo'::`1'::<lambda_27_>,0,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a0ca1c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplate::UpdateAllArgumentTypesSlow'::__l2::<lambda_2>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRigVMTemplate::UpdateAllArgumentTypesSlow'::`2'::<lambda_2>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a0ca200

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgument::GetSupportedTypeIndices_NoLock'::__l5::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRigVMTemplateArgument::GetSupportedTypeIndices_NoLock'::`5'::<lambda_2>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a0ca240

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FRigVMRegistry_NoLock,SharedPointerInternals::DefaultDeleter<FRigVMRegistry_NoLock>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FRigVMRegistry_NoLock,SharedPointerInternals::DefaultDeleter<FRigVMRegistry_NoLock>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a0ca280

void * __thiscall
FRigVMMemoryContainerImportErrorContext::_scalar_deleting_destructor_
          (FRigVMMemoryContainerImportErrorContext *this,uint param_1)

{
  FOutputDevice::~FOutputDevice((FOutputDevice *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a0ca2c0

void * __thiscall
FRigVMMemoryStorageImportErrorContext::_scalar_deleting_destructor_
          (FRigVMMemoryStorageImportErrorContext *this,uint param_1)

{
  FOutputDevice::~FOutputDevice((FOutputDevice *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a0ca300

void * __thiscall
FRigVMObjectArchiveReader::_scalar_deleting_destructor_
          (FRigVMObjectArchiveReader *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->OffsetToName).field_0x48 = 0;
  pvVar1 = *(void **)&(this->OffsetToName).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<__int64,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<__int64,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OffsetToName);
  pFVar2 = (this->DeserializedObjects).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->ReadObjects).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ReadObjects).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ReadObjects);
  *(undefined4 *)&(this->ReadClasses).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ReadClasses).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UClass_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UClass_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UClass_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ReadClasses);
  FRigVMObjectArchiveWriter::~FRigVMObjectArchiveWriter((FRigVMObjectArchiveWriter *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,600);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a0ca3d0

void * __thiscall
FRigVMObjectArchiveWriter::_scalar_deleting_destructor_
          (FRigVMObjectArchiveWriter *this,uint param_1)

{
  ~FRigVMObjectArchiveWriter(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x158);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a0ca410

void * __thiscall
FRigVMRegistry_NoLock::_scalar_deleting_destructor_(FRigVMRegistry_NoLock *this,uint param_1)

{
  ~FRigVMRegistry_NoLock(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x500);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a0ca450

void * __thiscall
FRigVMRegistry_RWLock::_scalar_deleting_destructor_(FRigVMRegistry_RWLock *this,uint param_1)

{
  ~FRigVMRegistry_RWLock(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x538);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a0ca490

void * __thiscall
FRigVMStructApplyUpgradeInfoErrorContext::_scalar_deleting_destructor_
          (FRigVMStructApplyUpgradeInfoErrorContext *this,uint param_1)

{
  FOutputDevice::~FOutputDevice((FOutputDevice *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a0ca4d0

void * __thiscall
URigVMGraphFunctionHost::_scalar_deleting_destructor_(URigVMGraphFunctionHost *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14a0ca530

void * __thiscall
URigVMMemoryStorage::_scalar_deleting_destructor_(URigVMMemoryStorage *this,uint param_1)

{
  *(undefined ***)this = &___7URigVMMemoryStorage__6B_;
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

// `scalar_deleting_destructor' @ 14a0ca590

void * __thiscall
URigVMMemoryStorageGeneratorClass::_scalar_deleting_destructor_
          (URigVMMemoryStorageGeneratorClass *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7URigVMMemoryStorageGeneratorClass__6B_;
  DestructItems<FRigVMPropertyPathDescription,int>
            ((FRigVMPropertyPathDescription *)
             (this->PropertyPathDescriptions).AllocatorInstance.Data,
             (this->PropertyPathDescriptions).ArrayNum);
  pFVar1 = (this->PropertyPathDescriptions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FRigVMPropertyPath,int>
            ((FRigVMPropertyPath *)(this->PropertyPaths).AllocatorInstance.Data,
             (this->PropertyPaths).ArrayNum);
  pFVar1 = (this->PropertyPaths).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LinkedProperties).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UClass::~UClass((UClass *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x248);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a0ca650

void * __thiscall URigVMNativized::_scalar_deleting_destructor_(URigVMNativized *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7URigVMNativized__6B_;
  pFVar1 = (this->LazyMemoryHandles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FRigVMLazyBranch,int>
            ((FRigVMLazyBranch *)(this->LazyMemoryBranches).AllocatorInstance.Data,
             (this->LazyMemoryBranches).ArrayNum);
  pFVar1 = (this->LazyMemoryBranches).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  URigVM::~URigVM((URigVM *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x3d8);
  }
  return this;
}

// CPPTypeFromEnum @ 14a0ce9b0

FString * __cdecl RigVMTypeUtils::CPPTypeFromEnum(FString *__return_storage_ptr__,UEnum *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  int iVar4;
  wchar_t *pwVar5;
  FName local_res8;
  FString local_48;
  FString local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,&param_1->CppType);
  if ((__return_storage_ptr__->Data).ArrayNum < 2) {
    pFVar3 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0)
    ;
    iVar1 = (pFVar3->Data).ArrayNum;
    if (iVar1 == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
    local_res8 = (FName)param_1->_padding_;
    ::FName::ToString(&local_res8,&local_38);
    ::FString::PrintfImpl(&local_48,L"EUserDefinedEnum_%s_%08x");
    if (__return_storage_ptr__ != &local_48) {
      pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_48.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_48.Data.ArrayMax;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// CPPTypeFromObject @ 14a0ceaf0

FString * __cdecl
RigVMTypeUtils::CPPTypeFromObject
          (FString *__return_storage_ptr__,UObject *param_1,EClassArgType param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  wchar_t *pwVar5;
  FName local_res10;
  FString local_18;
  
  if (param_1 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UClass_NoRegister();
    lVar2 = *(longlong *)&param_1->field_0x10;
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      if (param_2 == AsClass) {
        local_res10.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
        local_res10.Number = *(uint *)&param_1->field_0x1c;
        ::FName::ToString(&local_res10,&local_18);
        (**(code **)(*(longlong *)param_1 + 0x318))(param_1);
        pwVar5 = L"TSubclassOf<%s%s>";
      }
      else {
        pUVar4 = Z_Construct_UClass_UInterface_NoRegister();
        if (pUVar4 != (UClass *)0x0) {
          iVar1 = (int)pUVar4->_padding_;
          if ((*(int *)&param_1[1].field_0x10 < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&param_1[1].field_0x8 + (longlong)iVar1 * 8)
              != &pUVar4->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            local_res10.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
            local_res10.Number = *(uint *)&param_1->field_0x1c;
            ::FName::ToString(&local_res10,&local_18);
            pwVar5 = L"TScriptInterface<%s%s>";
            goto LAB_14a0cec34;
          }
        }
        local_res10.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
        local_res10.Number = *(uint *)&param_1->field_0x1c;
        ::FName::ToString(&local_res10,&local_18);
        (**(code **)(*(longlong *)param_1 + 0x318))(param_1);
        pwVar5 = L"TObjectPtr<%s%s>";
      }
LAB_14a0cec34:
      ::FString::PrintfImpl(__return_storage_ptr__,pwVar5);
      if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  if (param_1 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UScriptStruct_NoRegister();
    lVar2 = *(longlong *)&param_1->field_0x10;
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      GetUniqueStructTypeName(__return_storage_ptr__,(UScriptStruct *)param_1);
      return __return_storage_ptr__;
    }
    if (param_1 != (UObject *)0x0) {
      pUVar4 = Z_Construct_UClass_UEnum_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) {
        CPPTypeFromEnum(__return_storage_ptr__,(UEnum *)param_1);
        return __return_storage_ptr__;
      }
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// CleanupCPPType @ 14a0cf420

void __cdecl RigVMTypeUtils::CleanupCPPType(FString *param_1)

{
  int iVar1;
  
  iVar1 = ::FString::Find(param_1,L"<",1,IgnoreCase,FromStart,-1);
  if (iVar1 == -1) {
    iVar1 = ::FString::Find(param_1,L">",1,IgnoreCase,FromStart,-1);
    if (iVar1 == -1) {
      return;
    }
  }
  ::FString::ReplaceInline(param_1,L"< ",L"<",IgnoreCase);
  ::FString::ReplaceInline(param_1,L" >",L">",IgnoreCase);
  ::FString::ReplaceInline(param_1,L" <",L"<",IgnoreCase);
  ::FString::ReplaceInline(param_1,L"> ",L">",IgnoreCase);
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigVMFunction @ 14a0d69a0

void __cdecl EmptyLinkFunctionForGeneratedCodeRigVMFunction(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigVMGraphFunctionDefinition @ 14a0d69b0

void __cdecl EmptyLinkFunctionForGeneratedCodeRigVMGraphFunctionDefinition(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigVMGraphFunctionHost @ 14a0d69c0

void __cdecl EmptyLinkFunctionForGeneratedCodeRigVMGraphFunctionHost(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigVMMemoryCommon @ 14a0d69d0

void __cdecl EmptyLinkFunctionForGeneratedCodeRigVMMemoryCommon(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigVMMemoryDeprecated @ 14a0d69e0

void __cdecl EmptyLinkFunctionForGeneratedCodeRigVMMemoryDeprecated(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigVMMemoryStorage @ 14a0d69f0

void __cdecl EmptyLinkFunctionForGeneratedCodeRigVMMemoryStorage(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigVMMemoryStorageStruct @ 14a0d6a00

void __cdecl EmptyLinkFunctionForGeneratedCodeRigVMMemoryStorageStruct(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigVMNativized @ 14a0d6a10

void __cdecl EmptyLinkFunctionForGeneratedCodeRigVMNativized(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigVMNodeLayout @ 14a0d6a20

void __cdecl EmptyLinkFunctionForGeneratedCodeRigVMNodeLayout(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigVMObjectArchive @ 14a0d6a30

void __cdecl EmptyLinkFunctionForGeneratedCodeRigVMObjectArchive(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigVMProfilingInfo @ 14a0d6a40

void __cdecl EmptyLinkFunctionForGeneratedCodeRigVMProfilingInfo(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigVMStruct @ 14a0d6a50

void __cdecl EmptyLinkFunctionForGeneratedCodeRigVMStruct(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigVMTemplate @ 14a0d6a60

void __cdecl EmptyLinkFunctionForGeneratedCodeRigVMTemplate(void)

{
  return;
}

// FindObjectFromCPPTypeObjectPath @ 14a0da740

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

UObject * __cdecl RigVMTypeUtils::FindObjectFromCPPTypeObjectPath(FString *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  int iVar2;
  FString *pFVar3;
  UPackage *pUVar4;
  size_t sVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  ForAnyElementType FVar8;
  longlong lVar9;
  bool bVar10;
  FName local_res8;
  FString local_78;
  FString local_68;
  TStringView<wchar_t> local_58;
  FCoreRedirectObjectName local_48;
  FCoreRedirectObjectName local_30;
  
  if ((param_1->Data).ArrayNum < 2) {
    return (UObject *)0x0;
  }
  pUVar4 = (UPackage *)0x0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pFVar3 = ::FName::ToString(&local_res8,(FString *)&local_58);
  iVar2 = (param_1->Data).ArrayNum;
  iVar1 = (pFVar3->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (iVar2 < 2) {
      bVar10 = true;
    }
    else {
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                         (wchar_t *)(pFVar3->Data).AllocatorInstance.Data);
      bVar10 = iVar2 == 0;
    }
  }
  else {
    bVar10 = iVar1 + iVar2 == 1;
  }
  if (local_58.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_58.DataPtr);
  }
  if (bVar10) {
    return (UObject *)0x0;
  }
  local_78.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar9 = (longlong)local_78.Data.ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = 0;
  if (local_78.Data.ArrayNum == 0) {
    local_78.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_78.Data.ArrayNum,0,(ForAnyElementType *)&local_78,local_78.Data.ArrayNum,
               &local_78.Data.ArrayMax);
    memcpy(local_78.Data.AllocatorInstance.Data,_Src,lVar9 * 2);
  }
  ::FString::FString((FString *)&local_58,L".");
  bVar10 = ::FString::Split(param_1,(FString *)&local_58,&local_68,&local_78);
  if (local_58.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_58.DataPtr);
  }
  if (bVar10) {
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar8.Data = local_68.Data.AllocatorInstance.Data;
    }
    pUVar4 = FindPackage((UObject *)0x0,(wchar_t *)FVar8.Data);
  }
  if (local_78.Data.ArrayNum == 0) {
    local_58.DataPtr = L"";
LAB_14a0da8a1:
    sVar5 = wcslen(local_58.DataPtr);
    iVar2 = (int)sVar5;
  }
  else {
    local_58.DataPtr = (wchar_t *)local_78.Data.AllocatorInstance.Data;
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_14a0da8a1;
  }
  local_58.Size = iVar2;
  pUVar6 = Z_Construct_UClass_UObject_NoRegister();
  pUVar7 = StaticFindObject(pUVar6,(UObject *)pUVar4,&local_58,None);
  if (pUVar7 != (UObject *)0x0) goto LAB_14a0da998;
  if ((param_1->Data).ArrayNum == 0) {
    local_58.DataPtr = L"";
LAB_14a0da8f8:
    sVar5 = wcslen(local_58.DataPtr);
    iVar2 = (int)sVar5;
  }
  else {
    local_58.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    iVar2 = 0;
    if ((FScriptContainerElement *)local_58.DataPtr != (FScriptContainerElement *)0x0)
    goto LAB_14a0da8f8;
  }
  local_58.Size = iVar2;
  pUVar6 = Z_Construct_UClass_UObject_NoRegister();
  pUVar7 = StaticFindFirstObject
                     (pUVar6,&local_58,EnsureIfAmbiguous|NativeFirst,NoLogging,(wchar_t *)0x0);
  if (pUVar7 == (UObject *)0x0) {
    FCoreRedirectObjectName::FCoreRedirectObjectName(&local_48,param_1);
    FCoreRedirects::GetRedirectedName(&local_30,Type_Struct,&local_48,None);
    if (((local_48.ObjectName != local_30.ObjectName) || (local_48.OuterName != local_30.OuterName))
       || (local_48.PackageName != local_30.PackageName)) {
      pFVar3 = FCoreRedirectObjectName::ToString(&local_30,(FString *)&local_58);
      pUVar7 = FindObjectFromCPPTypeObjectPath(pFVar3);
      if ((FScriptContainerElement *)local_58.DataPtr != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.DataPtr);
      }
    }
  }
LAB_14a0da998:
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
    return pUVar7;
  }
  return pUVar7;
}

// FindObjectGlobally @ 14a0da9e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

UObject * __cdecl RigVMTypeUtils::FindObjectGlobally(wchar_t *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  UObject *pUVar8;
  FString *pFVar9;
  UPackage *pUVar10;
  wchar_t *pwVar11;
  int iVar12;
  FString local_128;
  FString local_118;
  FCoreRedirectObjectName local_108;
  FString local_f0;
  FString local_e0;
  FScriptContainerElement *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  FScriptContainerElement *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  FScriptContainerElement *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  wchar_t *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  FString local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  FString local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  FCoreRedirectObjectName local_28;
  
  pUVar8 = (UObject *)0x0;
  iStack_90 = 0;
  local_98 = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar5 = wcslen(param_1);
    iStack_90 = (int)sVar5;
  }
  pUVar6 = Z_Construct_UClass_UField_NoRegister();
  local_78._12_4_ = uStack_8c;
  local_78.Size = iStack_90;
  local_78.DataPtr = local_98;
  pUVar7 = StaticFindFirstObject(pUVar6,&local_78,NativeFirst,NoLogging,(wchar_t *)0x0);
  if (pUVar7 != (UObject *)0x0) {
    return pUVar7;
  }
  ::FString::FString(&local_128,param_1);
  iVar12 = 0;
  iVar4 = 0;
  if (local_128.Data.ArrayNum < 2) {
LAB_14a0dabcc:
    if (!param_2) goto LAB_14a0dad25;
    FCoreRedirectObjectName::FCoreRedirectObjectName(&local_28,&local_128);
    local_108.ObjectName.ComparisonIndex.Value = 0;
    local_108.ObjectName.Number = 0;
    local_108.OuterName.ComparisonIndex.Value = 0;
    local_108.OuterName.Number = 0;
    local_108.PackageName.ComparisonIndex.Value = 0;
    local_108.PackageName.Number = 0;
    bVar2 = FCoreRedirects::RedirectNameAndValues
                      (Type_Enum|Type_Struct|Type_Class,&local_28,&local_108,(FCoreRedirect **)0x0,
                       AllowPartialMatch);
    if (!bVar2) goto LAB_14a0dad25;
    ::FName::ToString(&local_108.ObjectName,&local_e0);
    if (local_108.PackageName != (FName)0x0) {
      pFVar9 = ::FName::ToString(&local_108.PackageName,&local_58);
      if ((pFVar9->Data).ArrayNum == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
      }
      pUVar10 = FindPackage((UObject *)0x0,pwVar11);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (pUVar10 != (UPackage *)0x0) {
        if (local_e0.Data.ArrayNum == 0) {
          local_b8 = (FScriptContainerElement *)0x15060d16c;
LAB_14a0dac93:
          sVar5 = wcslen((wchar_t *)local_b8);
          iVar4 = (int)sVar5;
        }
        else {
          local_b8 = local_e0.Data.AllocatorInstance.Data;
          if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          goto LAB_14a0dac93;
        }
        iStack_b0 = iVar4;
        pUVar6 = Z_Construct_UClass_UField_NoRegister();
        local_48._12_4_ = uStack_ac;
        local_48.Size = iStack_b0;
        local_48.DataPtr = (wchar_t *)local_b8;
        pUVar7 = StaticFindObject(pUVar6,(UObject *)pUVar10,&local_48,None);
        if (pUVar7 != (UObject *)0x0) goto LAB_14a0dad1b;
      }
    }
    if (local_e0.Data.ArrayNum == 0) {
      local_a8 = (FScriptContainerElement *)0x15060d16c;
LAB_14a0dace0:
      sVar5 = wcslen((wchar_t *)local_a8);
      iVar12 = (int)sVar5;
    }
    else {
      local_a8 = local_e0.Data.AllocatorInstance.Data;
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_14a0dace0;
    }
    iStack_a0 = iVar12;
    pUVar6 = Z_Construct_UClass_UField_NoRegister();
    local_38._12_4_ = uStack_9c;
    local_38.Size = iStack_a0;
    local_38.DataPtr = (wchar_t *)local_a8;
    pUVar7 = StaticFindFirstObject(pUVar6,&local_38,NativeFirst,NoLogging,(wchar_t *)0x0);
  }
  else {
    iVar3 = local_128.Data.ArrayNum + -1;
    if (local_128.Data.ArrayNum == 0) {
      iVar3 = iVar12;
    }
    if ((iVar3 < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x107,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar8 = (UObject *)(*pcVar1)();
      return pUVar8;
    }
    if (*(wchar_t *)local_128.Data.AllocatorInstance.Data != L'E') goto LAB_14a0dabcc;
    local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.Data.ArrayNum = 0;
    local_118.Data.ArrayMax = 0;
    local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f0.Data.ArrayNum = 0;
    local_f0.Data.ArrayMax = 0;
    ::FString::FString(&local_88,L"::");
    bVar2 = ::FString::Split(&local_128,&local_88,&local_118,&local_f0);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (!bVar2) {
LAB_14a0dabae:
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      goto LAB_14a0dabcc;
    }
    iVar3 = local_118.Data.ArrayNum + -1;
    if (local_118.Data.ArrayNum == 0) {
      iVar3 = iVar4;
    }
    ::FString::AssignRange(&local_128,(wchar_t *)local_118.Data.AllocatorInstance.Data,iVar3);
    if (local_128.Data.ArrayNum == 0) {
      local_c8 = (FScriptContainerElement *)0x15060d16c;
LAB_14a0dab5d:
      sVar5 = wcslen((wchar_t *)local_c8);
      iStack_c0 = (int)sVar5;
    }
    else {
      local_c8 = local_128.Data.AllocatorInstance.Data;
      iStack_c0 = iVar4;
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_14a0dab5d;
    }
    pUVar6 = Z_Construct_UClass_UField_NoRegister();
    local_68._12_4_ = uStack_bc;
    local_68.Size = iStack_c0;
    local_68.DataPtr = (wchar_t *)local_c8;
    pUVar7 = StaticFindFirstObject(pUVar6,&local_68,NativeFirst,NoLogging,(wchar_t *)0x0);
    if (pUVar7 == (UObject *)0x0) goto LAB_14a0dabae;
    local_e0.Data.AllocatorInstance.Data = local_118.Data.AllocatorInstance.Data;
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      local_e0.Data.AllocatorInstance.Data = local_118.Data.AllocatorInstance.Data;
    }
  }
LAB_14a0dad1b:
  pUVar8 = pUVar7;
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
LAB_14a0dad25:
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  return pUVar8;
}

// GetTypeHash @ 14a0ece20

uint __cdecl GetTypeHash(FRigVMFunctionCompilationData *param_1)

{
  TMap<FString,FRigVMOperand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FRigVMOperand,0>_>
  *pTVar1;
  FRigVMFunctionCompilationPropertyPath *pFVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  code *pcVar8;
  TMap<int,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FName,0>_> *pTVar9;
  TMap<FString,FRigVMOperand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FRigVMOperand,0>_>
  *pTVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  FString *pFVar14;
  longlong lVar15;
  uint uVar16;
  FRigVMFunctionCompilationPropertyDescription *pFVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  FName *pFVar21;
  FRigVMFunctionCompilationPropertyPath *pFVar22;
  FRigVMFunctionCompilationPropertyDescription *pFVar23;
  undefined8 *puVar24;
  uint uVar25;
  wchar_t *pwVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  uint uVar29;
  uint *puVar30;
  uint uVar31;
  FName *pFVar32;
  FScriptContainerElement *pFVar33;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_188;
  undefined1 local_187;
  undefined1 local_186;
  undefined1 local_185;
  undefined1 local_184;
  undefined1 local_183;
  undefined1 local_182 [2];
  ulonglong local_180;
  TMap<int,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FName,0>_> *local_178;
  int iStack_170;
  uint uStack_16c;
  undefined1 *local_168;
  undefined4 uStack_160;
  int iStack_15c;
  int local_158;
  undefined4 uStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  int local_148;
  int local_144;
  int local_140;
  TMap<FString,FRigVMOperand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FRigVMOperand,0>_>
  *local_138;
  int iStack_130;
  undefined4 uStack_12c;
  undefined1 *local_128;
  undefined4 uStack_120;
  int iStack_11c;
  int local_118;
  int iStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  TMap<int,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FName,0>_> *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  TMap<FString,FRigVMOperand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FRigVMOperand,0>_>
  *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78 [2];
  undefined4 local_4c;
  
  uVar12 = FRigVMByteCode::GetByteCodeHash(&param_1->ByteCode);
  pFVar21 = (FName *)(param_1->FunctionNames).AllocatorInstance.Data;
  iVar19 = (param_1->FunctionNames).ArrayNum;
  pFVar32 = pFVar21 + iVar19;
  while( true ) {
    if ((param_1->FunctionNames).ArrayNum != iVar19) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar21 == pFVar32) break;
    pFVar14 = FName::ToString(pFVar21,&local_a8);
    iVar7 = (pFVar14->Data).ArrayNum;
    iVar20 = iVar7 + -1;
    if (iVar7 == 0) {
      pwVar26 = L"";
      iVar20 = 0;
    }
    else {
      pwVar26 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
    }
    uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar20,pwVar26);
    uVar12 = uVar12 - uVar13 ^ uVar13 >> 0xd;
    uVar25 = (-0x61c88647 - uVar12) - uVar13 ^ uVar12 << 8;
    uVar13 = (uVar13 - uVar25) - uVar12 ^ uVar25 >> 0xd;
    uVar12 = (uVar12 - uVar13) - uVar25 ^ uVar13 >> 0xc;
    uVar25 = (uVar25 - uVar12) - uVar13 ^ uVar12 << 0x10;
    uVar13 = (uVar13 - uVar25) - uVar12 ^ uVar25 >> 5;
    uVar12 = (uVar12 - uVar13) - uVar25 ^ uVar13 >> 3;
    uVar25 = (uVar25 - uVar12) - uVar13 ^ uVar12 << 10;
    uVar12 = (uVar13 - uVar25) - uVar12 ^ uVar25 >> 0xf;
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    pFVar21 = pFVar21 + 1;
  }
  iVar19 = (param_1->WorkPropertyDescriptions).ArrayNum;
  pFVar23 = (FRigVMFunctionCompilationPropertyDescription *)
            (param_1->WorkPropertyDescriptions).AllocatorInstance.Data;
  pFVar17 = pFVar23 + iVar19;
  while( true ) {
    if ((param_1->WorkPropertyDescriptions).ArrayNum != iVar19) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FRigVMFunctionCompilationPropertyDescription_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar23 == pFVar17) break;
    uVar13 = GetTypeHash(pFVar23);
    uVar12 = uVar12 - uVar13 ^ uVar13 >> 0xd;
    uVar25 = (-0x61c88647 - uVar12) - uVar13 ^ uVar12 << 8;
    uVar13 = (uVar13 - uVar25) - uVar12 ^ uVar25 >> 0xd;
    uVar12 = (uVar12 - uVar13) - uVar25 ^ uVar13 >> 0xc;
    uVar25 = (uVar25 - uVar12) - uVar13 ^ uVar12 << 0x10;
    uVar13 = (uVar13 - uVar25) - uVar12 ^ uVar25 >> 5;
    uVar12 = (uVar12 - uVar13) - uVar25 ^ uVar13 >> 3;
    uVar25 = (uVar25 - uVar12) - uVar13 ^ uVar12 << 10;
    uVar12 = (uVar13 - uVar25) - uVar12 ^ uVar25 >> 0xf;
    pFVar23 = pFVar23 + 1;
  }
  iVar19 = (param_1->WorkPropertyPathDescriptions).ArrayNum;
  pFVar22 = (FRigVMFunctionCompilationPropertyPath *)
            (param_1->WorkPropertyPathDescriptions).AllocatorInstance.Data;
  pFVar2 = pFVar22 + iVar19;
  while( true ) {
    if ((param_1->WorkPropertyPathDescriptions).ArrayNum != iVar19) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FRigVMFunctionCompilationPropertyPath_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar22 == pFVar2) break;
    uVar13 = GetTypeHash(pFVar22);
    uVar12 = uVar12 - uVar13 ^ uVar13 >> 0xd;
    uVar25 = (-0x61c88647 - uVar12) - uVar13 ^ uVar12 << 8;
    uVar13 = (uVar13 - uVar25) - uVar12 ^ uVar25 >> 0xd;
    uVar12 = (uVar12 - uVar13) - uVar25 ^ uVar13 >> 0xc;
    uVar25 = (uVar25 - uVar12) - uVar13 ^ uVar12 << 0x10;
    uVar13 = (uVar13 - uVar25) - uVar12 ^ uVar25 >> 5;
    uVar12 = (uVar12 - uVar13) - uVar25 ^ uVar13 >> 3;
    uVar25 = (uVar25 - uVar12) - uVar13 ^ uVar12 << 10;
    uVar12 = (uVar13 - uVar25) - uVar12 ^ uVar25 >> 0xf;
    pFVar22 = pFVar22 + 1;
  }
  iVar19 = (param_1->LiteralPropertyDescriptions).ArrayNum;
  pFVar23 = (FRigVMFunctionCompilationPropertyDescription *)
            (param_1->LiteralPropertyDescriptions).AllocatorInstance.Data;
  pFVar17 = pFVar23 + iVar19;
  while( true ) {
    if ((param_1->LiteralPropertyDescriptions).ArrayNum != iVar19) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FRigVMFunctionCompilationPropertyDescription_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar23 == pFVar17) break;
    uVar13 = GetTypeHash(pFVar23);
    uVar12 = uVar12 - uVar13 ^ uVar13 >> 0xd;
    uVar25 = (-0x61c88647 - uVar12) - uVar13 ^ uVar12 << 8;
    uVar13 = (uVar13 - uVar25) - uVar12 ^ uVar25 >> 0xd;
    uVar12 = (uVar12 - uVar13) - uVar25 ^ uVar13 >> 0xc;
    uVar25 = (uVar25 - uVar12) - uVar13 ^ uVar12 << 0x10;
    uVar13 = (uVar13 - uVar25) - uVar12 ^ uVar25 >> 5;
    uVar12 = (uVar12 - uVar13) - uVar25 ^ uVar13 >> 3;
    uVar25 = (uVar25 - uVar12) - uVar13 ^ uVar12 << 10;
    uVar12 = (uVar13 - uVar25) - uVar12 ^ uVar25 >> 0xf;
    pFVar23 = pFVar23 + 1;
  }
  iVar19 = (param_1->LiteralPropertyPathDescriptions).ArrayNum;
  pFVar33 = (param_1->LiteralPropertyPathDescriptions).AllocatorInstance.Data;
  pFVar3 = pFVar33 + (longlong)iVar19 * 0x28;
  while( true ) {
    if ((param_1->LiteralPropertyPathDescriptions).ArrayNum != iVar19) {
      local_188 = 0;
      `TCheckedPointerIterator<FRigVMFunctionCompilationPropertyPath_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_188);
    }
    if (pFVar33 == pFVar3) break;
    iVar7 = *(int *)pFVar33;
    iVar20 = *(int *)(pFVar33 + 0x10) + -1;
    if (*(int *)(pFVar33 + 0x10) == 0) {
      pwVar26 = L"";
      iVar20 = 0;
    }
    else {
      pwVar26 = *(wchar_t **)(pFVar33 + 8);
    }
    uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar20,pwVar26);
    uVar16 = iVar7 - uVar13 ^ uVar13 >> 0xd;
    uVar25 = (-0x61c88647 - uVar16) - uVar13 ^ uVar16 << 8;
    uVar18 = (uVar13 - uVar25) - uVar16 ^ uVar25 >> 0xd;
    uVar16 = (uVar16 - uVar18) - uVar25 ^ uVar18 >> 0xc;
    uVar13 = (uVar25 - uVar16) - uVar18 ^ uVar16 << 0x10;
    uVar18 = (uVar18 - uVar13) - uVar16 ^ uVar13 >> 5;
    uVar25 = (uVar16 - uVar18) - uVar13 ^ uVar18 >> 3;
    uVar13 = (uVar13 - uVar25) - uVar18 ^ uVar25 << 10;
    iVar20 = *(int *)(pFVar33 + 0x20) + -1;
    if (*(int *)(pFVar33 + 0x20) == 0) {
      pwVar26 = L"";
      iVar20 = 0;
    }
    else {
      pwVar26 = *(wchar_t **)(pFVar33 + 0x18);
    }
    uVar16 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar20,pwVar26);
    uVar25 = ((uVar18 - uVar13) - uVar25 ^ uVar13 >> 0xf) - uVar16 ^ uVar16 >> 0xd;
    uVar13 = (-0x61c88647 - uVar25) - uVar16 ^ uVar25 << 8;
    uVar16 = (uVar16 - uVar13) - uVar25 ^ uVar13 >> 0xd;
    uVar25 = (uVar25 - uVar16) - uVar13 ^ uVar16 >> 0xc;
    uVar13 = (uVar13 - uVar25) - uVar16 ^ uVar25 << 0x10;
    uVar16 = (uVar16 - uVar13) - uVar25 ^ uVar13 >> 5;
    uVar25 = (uVar25 - uVar16) - uVar13 ^ uVar16 >> 3;
    uVar13 = (uVar13 - uVar25) - uVar16 ^ uVar25 << 10;
    uVar25 = (uVar16 - uVar13) - uVar25 ^ uVar13 >> 0xf;
    uVar12 = uVar12 - uVar25 ^ uVar25 >> 0xd;
    uVar13 = (-0x61c88647 - uVar12) - uVar25 ^ uVar12 << 8;
    uVar25 = (uVar25 - uVar13) - uVar12 ^ uVar13 >> 0xd;
    uVar12 = (uVar12 - uVar25) - uVar13 ^ uVar25 >> 0xc;
    uVar13 = (uVar13 - uVar12) - uVar25 ^ uVar12 << 0x10;
    uVar25 = (uVar25 - uVar13) - uVar12 ^ uVar13 >> 5;
    uVar12 = (uVar12 - uVar25) - uVar13 ^ uVar25 >> 3;
    uVar13 = (uVar13 - uVar12) - uVar25 ^ uVar12 << 10;
    uVar12 = (uVar25 - uVar13) - uVar12 ^ uVar13 >> 0xf;
    pFVar33 = pFVar33 + 0x28;
  }
  iVar19 = (param_1->DebugPropertyDescriptions).ArrayNum;
  pFVar32 = (FName *)(param_1->DebugPropertyDescriptions).AllocatorInstance.Data;
  pFVar21 = pFVar32 + (longlong)iVar19 * 10;
  while( true ) {
    if ((param_1->DebugPropertyDescriptions).ArrayNum != iVar19) {
      local_187 = 0;
      `TCheckedPointerIterator<FRigVMFunctionCompilationPropertyDescription_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_187);
    }
    if (pFVar32 == pFVar21) break;
    pFVar14 = FName::ToString(pFVar32,&local_98);
    iVar7 = (pFVar14->Data).ArrayNum;
    iVar20 = iVar7 + -1;
    if (iVar7 == 0) {
      pwVar26 = L"";
      iVar20 = 0;
    }
    else {
      pwVar26 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
    }
    uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar20,pwVar26);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    uVar25 = pFVar32[2].ComparisonIndex.Value;
    iVar20 = uVar25 - 1;
    if (uVar25 == 0) {
      pwVar26 = L"";
      iVar20 = 0;
    }
    else {
      pwVar26 = *(wchar_t **)(pFVar32 + 1);
    }
    uVar25 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar20,pwVar26);
    uVar16 = uVar13 - uVar25 ^ uVar25 >> 0xd;
    uVar13 = (-0x61c88647 - uVar16) - uVar25 ^ uVar16 << 8;
    uVar18 = (uVar25 - uVar13) - uVar16 ^ uVar13 >> 0xd;
    uVar25 = (uVar16 - uVar18) - uVar13 ^ uVar18 >> 0xc;
    uVar13 = (uVar13 - uVar25) - uVar18 ^ uVar25 << 0x10;
    uVar18 = (uVar18 - uVar13) - uVar25 ^ uVar13 >> 5;
    uVar16 = (uVar25 - uVar18) - uVar13 ^ uVar18 >> 3;
    uVar25 = (uVar13 - uVar16) - uVar18 ^ uVar16 << 10;
    uVar13 = pFVar32[9].ComparisonIndex.Value;
    iVar20 = uVar13 - 1;
    if (uVar13 == 0) {
      pwVar26 = L"";
      iVar20 = 0;
    }
    else {
      pwVar26 = *(wchar_t **)(pFVar32 + 8);
    }
    uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar20,pwVar26);
    uVar16 = ((uVar18 - uVar25) - uVar16 ^ uVar25 >> 0xf) - uVar13 ^ uVar13 >> 0xd;
    uVar25 = (-0x61c88647 - uVar16) - uVar13 ^ uVar16 << 8;
    uVar18 = (uVar13 - uVar25) - uVar16 ^ uVar25 >> 0xd;
    uVar16 = (uVar16 - uVar18) - uVar25 ^ uVar18 >> 0xc;
    uVar13 = (uVar25 - uVar16) - uVar18 ^ uVar16 << 0x10;
    uVar18 = (uVar18 - uVar13) - uVar16 ^ uVar13 >> 5;
    uVar25 = (uVar16 - uVar18) - uVar13 ^ uVar18 >> 3;
    uVar13 = (uVar13 - uVar25) - uVar18 ^ uVar25 << 10;
    uVar25 = (uVar18 - uVar13) - uVar25 ^ uVar13 >> 0xf;
    uVar12 = uVar12 - uVar25 ^ uVar25 >> 0xd;
    uVar13 = (-0x61c88647 - uVar25) - uVar12 ^ uVar12 << 8;
    uVar25 = (uVar25 - uVar13) - uVar12 ^ uVar13 >> 0xd;
    uVar12 = (uVar12 - uVar25) - uVar13 ^ uVar25 >> 0xc;
    uVar13 = (uVar13 - uVar12) - uVar25 ^ uVar12 << 0x10;
    uVar25 = (uVar25 - uVar13) - uVar12 ^ uVar13 >> 5;
    uVar12 = (uVar12 - uVar25) - uVar13 ^ uVar25 >> 3;
    uVar13 = (uVar13 - uVar12) - uVar25 ^ uVar12 << 10;
    uVar12 = (uVar25 - uVar13) - uVar12 ^ uVar13 >> 0xf;
    pFVar32 = pFVar32 + 10;
  }
  iVar19 = (param_1->DebugPropertyPathDescriptions).ArrayNum;
  pFVar33 = (param_1->DebugPropertyPathDescriptions).AllocatorInstance.Data;
  pFVar3 = pFVar33 + (longlong)iVar19 * 0x28;
  while( true ) {
    if ((param_1->DebugPropertyPathDescriptions).ArrayNum != iVar19) {
      local_186 = 0;
      `TCheckedPointerIterator<FRigVMFunctionCompilationPropertyPath_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_186);
    }
    if (pFVar33 == pFVar3) break;
    iVar7 = *(int *)pFVar33;
    iVar20 = *(int *)(pFVar33 + 0x10) + -1;
    if (*(int *)(pFVar33 + 0x10) == 0) {
      pwVar26 = L"";
      iVar20 = 0;
    }
    else {
      pwVar26 = *(wchar_t **)(pFVar33 + 8);
    }
    uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar20,pwVar26);
    uVar16 = iVar7 - uVar13 ^ uVar13 >> 0xd;
    uVar25 = (-0x61c88647 - uVar13) - uVar16 ^ uVar16 << 8;
    uVar18 = (uVar13 - uVar25) - uVar16 ^ uVar25 >> 0xd;
    uVar16 = (uVar16 - uVar18) - uVar25 ^ uVar18 >> 0xc;
    uVar13 = (uVar25 - uVar16) - uVar18 ^ uVar16 << 0x10;
    uVar18 = (uVar18 - uVar13) - uVar16 ^ uVar13 >> 5;
    uVar25 = (uVar16 - uVar18) - uVar13 ^ uVar18 >> 3;
    uVar13 = (uVar13 - uVar25) - uVar18 ^ uVar25 << 10;
    iVar20 = *(int *)(pFVar33 + 0x20) + -1;
    if (*(int *)(pFVar33 + 0x20) == 0) {
      pwVar26 = L"";
      iVar20 = 0;
    }
    else {
      pwVar26 = *(wchar_t **)(pFVar33 + 0x18);
    }
    uVar16 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar20,pwVar26);
    uVar25 = ((uVar18 - uVar13) - uVar25 ^ uVar13 >> 0xf) - uVar16 ^ uVar16 >> 0xd;
    uVar13 = (-0x61c88647 - uVar16) - uVar25 ^ uVar25 << 8;
    uVar16 = (uVar16 - uVar13) - uVar25 ^ uVar13 >> 0xd;
    uVar25 = (uVar25 - uVar16) - uVar13 ^ uVar16 >> 0xc;
    uVar13 = (uVar13 - uVar25) - uVar16 ^ uVar25 << 0x10;
    uVar16 = (uVar16 - uVar13) - uVar25 ^ uVar13 >> 5;
    uVar25 = (uVar25 - uVar16) - uVar13 ^ uVar16 >> 3;
    uVar13 = (uVar13 - uVar25) - uVar16 ^ uVar25 << 10;
    uVar25 = (uVar16 - uVar13) - uVar25 ^ uVar13 >> 0xf;
    uVar12 = uVar12 - uVar25 ^ uVar25 >> 0xd;
    uVar13 = (-0x61c88647 - uVar12) - uVar25 ^ uVar12 << 8;
    uVar25 = (uVar25 - uVar13) - uVar12 ^ uVar13 >> 0xd;
    uVar12 = (uVar12 - uVar25) - uVar13 ^ uVar25 >> 0xc;
    uVar13 = (uVar13 - uVar12) - uVar25 ^ uVar12 << 0x10;
    uVar25 = (uVar25 - uVar13) - uVar12 ^ uVar13 >> 5;
    uVar12 = (uVar12 - uVar25) - uVar13 ^ uVar25 >> 3;
    uVar13 = (uVar13 - uVar12) - uVar25 ^ uVar12 << 10;
    uVar12 = (uVar25 - uVar13) - uVar12 ^ uVar13 >> 0xf;
    pFVar33 = pFVar33 + 0x28;
  }
  iVar19 = (param_1->ExternalPropertyDescriptions).ArrayNum;
  pFVar32 = (FName *)(param_1->ExternalPropertyDescriptions).AllocatorInstance.Data;
  pFVar21 = pFVar32 + (longlong)iVar19 * 10;
  while( true ) {
    if ((param_1->ExternalPropertyDescriptions).ArrayNum != iVar19) {
      local_185 = 0;
      `TCheckedPointerIterator<FRigVMFunctionCompilationPropertyDescription_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_185);
    }
    if (pFVar32 == pFVar21) break;
    pFVar14 = FName::ToString(pFVar32,&local_88);
    iVar7 = (pFVar14->Data).ArrayNum;
    iVar20 = iVar7 + -1;
    if (iVar7 == 0) {
      pwVar26 = L"";
      iVar20 = 0;
    }
    else {
      pwVar26 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
    }
    uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar20,pwVar26);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    uVar25 = pFVar32[2].ComparisonIndex.Value;
    iVar20 = uVar25 - 1;
    if (uVar25 == 0) {
      pwVar26 = L"";
      iVar20 = 0;
    }
    else {
      pwVar26 = *(wchar_t **)(pFVar32 + 1);
    }
    uVar25 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar20,pwVar26);
    uVar16 = uVar13 - uVar25 ^ uVar25 >> 0xd;
    uVar13 = (-0x61c88647 - uVar16) - uVar25 ^ uVar16 << 8;
    uVar18 = (uVar25 - uVar13) - uVar16 ^ uVar13 >> 0xd;
    uVar25 = (uVar16 - uVar18) - uVar13 ^ uVar18 >> 0xc;
    uVar13 = (uVar13 - uVar25) - uVar18 ^ uVar25 << 0x10;
    uVar18 = (uVar18 - uVar13) - uVar25 ^ uVar13 >> 5;
    uVar16 = (uVar25 - uVar18) - uVar13 ^ uVar18 >> 3;
    uVar25 = (uVar13 - uVar16) - uVar18 ^ uVar16 << 10;
    uVar13 = pFVar32[9].ComparisonIndex.Value;
    iVar20 = uVar13 - 1;
    if (uVar13 == 0) {
      pwVar26 = L"";
      iVar20 = 0;
    }
    else {
      pwVar26 = *(wchar_t **)(pFVar32 + 8);
    }
    uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar20,pwVar26);
    uVar16 = ((uVar18 - uVar25) - uVar16 ^ uVar25 >> 0xf) - uVar13 ^ uVar13 >> 0xd;
    uVar25 = (-0x61c88647 - uVar16) - uVar13 ^ uVar16 << 8;
    uVar18 = (uVar13 - uVar25) - uVar16 ^ uVar25 >> 0xd;
    uVar16 = (uVar16 - uVar18) - uVar25 ^ uVar18 >> 0xc;
    uVar13 = (uVar25 - uVar16) - uVar18 ^ uVar16 << 0x10;
    uVar18 = (uVar18 - uVar13) - uVar16 ^ uVar13 >> 5;
    uVar25 = (uVar16 - uVar18) - uVar13 ^ uVar18 >> 3;
    uVar13 = (uVar13 - uVar25) - uVar18 ^ uVar25 << 10;
    uVar25 = (uVar18 - uVar13) - uVar25 ^ uVar13 >> 0xf;
    uVar12 = uVar12 - uVar25 ^ uVar25 >> 0xd;
    uVar13 = (-0x61c88647 - uVar12) - uVar25 ^ uVar12 << 8;
    uVar25 = (uVar25 - uVar13) - uVar12 ^ uVar13 >> 0xd;
    uVar12 = (uVar12 - uVar25) - uVar13 ^ uVar25 >> 0xc;
    uVar13 = (uVar13 - uVar12) - uVar25 ^ uVar12 << 0x10;
    uVar25 = (uVar25 - uVar13) - uVar12 ^ uVar13 >> 5;
    uVar12 = (uVar12 - uVar25) - uVar13 ^ uVar25 >> 3;
    uVar13 = (uVar13 - uVar12) - uVar25 ^ uVar12 << 10;
    uVar12 = (uVar25 - uVar13) - uVar12 ^ uVar13 >> 0xf;
    pFVar32 = pFVar32 + 10;
  }
  iVar19 = (param_1->ExternalPropertyPathDescriptions).ArrayNum;
  pFVar33 = (param_1->ExternalPropertyPathDescriptions).AllocatorInstance.Data;
  pFVar3 = pFVar33 + (longlong)iVar19 * 0x28;
  while( true ) {
    if ((param_1->ExternalPropertyPathDescriptions).ArrayNum != iVar19) {
      local_184 = 0;
      `TCheckedPointerIterator<FRigVMFunctionCompilationPropertyPath_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_184);
    }
    if (pFVar33 == pFVar3) break;
    iVar7 = *(int *)pFVar33;
    iVar20 = *(int *)(pFVar33 + 0x10) + -1;
    if (*(int *)(pFVar33 + 0x10) == 0) {
      pwVar26 = L"";
      iVar20 = 0;
    }
    else {
      pwVar26 = *(wchar_t **)(pFVar33 + 8);
    }
    uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar20,pwVar26);
    uVar16 = iVar7 - uVar13 ^ uVar13 >> 0xd;
    uVar25 = (-0x61c88647 - uVar13) - uVar16 ^ uVar16 << 8;
    uVar18 = (uVar13 - uVar25) - uVar16 ^ uVar25 >> 0xd;
    uVar16 = (uVar16 - uVar18) - uVar25 ^ uVar18 >> 0xc;
    uVar13 = (uVar25 - uVar16) - uVar18 ^ uVar16 << 0x10;
    uVar18 = (uVar18 - uVar13) - uVar16 ^ uVar13 >> 5;
    uVar25 = (uVar16 - uVar18) - uVar13 ^ uVar18 >> 3;
    uVar13 = (uVar13 - uVar25) - uVar18 ^ uVar25 << 10;
    iVar20 = *(int *)(pFVar33 + 0x20) + -1;
    if (*(int *)(pFVar33 + 0x20) == 0) {
      pwVar26 = L"";
      iVar20 = 0;
    }
    else {
      pwVar26 = *(wchar_t **)(pFVar33 + 0x18);
    }
    uVar16 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar20,pwVar26);
    uVar25 = ((uVar18 - uVar13) - uVar25 ^ uVar13 >> 0xf) - uVar16 ^ uVar16 >> 0xd;
    uVar13 = (-0x61c88647 - uVar16) - uVar25 ^ uVar25 << 8;
    uVar16 = (uVar16 - uVar13) - uVar25 ^ uVar13 >> 0xd;
    uVar25 = (uVar25 - uVar16) - uVar13 ^ uVar16 >> 0xc;
    uVar13 = (uVar13 - uVar25) - uVar16 ^ uVar25 << 0x10;
    uVar16 = (uVar16 - uVar13) - uVar25 ^ uVar13 >> 5;
    uVar25 = (uVar25 - uVar16) - uVar13 ^ uVar16 >> 3;
    uVar13 = (uVar13 - uVar25) - uVar16 ^ uVar25 << 10;
    uVar25 = (uVar16 - uVar13) - uVar25 ^ uVar13 >> 0xf;
    uVar12 = uVar12 - uVar25 ^ uVar25 >> 0xd;
    uVar13 = (-0x61c88647 - uVar12) - uVar25 ^ uVar12 << 8;
    uVar25 = (uVar25 - uVar13) - uVar12 ^ uVar13 >> 0xd;
    uVar12 = (uVar12 - uVar25) - uVar13 ^ uVar25 >> 0xc;
    uVar13 = (uVar13 - uVar12) - uVar25 ^ uVar12 << 0x10;
    uVar25 = (uVar25 - uVar13) - uVar12 ^ uVar13 >> 5;
    uVar12 = (uVar12 - uVar25) - uVar13 ^ uVar25 >> 3;
    uVar13 = (uVar13 - uVar12) - uVar25 ^ uVar12 << 10;
    uVar12 = (uVar25 - uVar13) - uVar12 ^ uVar13 >> 0xf;
    pFVar33 = pFVar33 + 0x28;
  }
  local_168 = &(param_1->ExternalRegisterIndexToVariable).field_0x10;
  iVar19 = *(int *)&(param_1->ExternalRegisterIndexToVariable).field_0x28;
  local_178 = &param_1->ExternalRegisterIndexToVariable;
  iStack_170 = 0;
  local_180 = 1;
  local_158 = 0;
  iVar20 = 0;
  uStack_16c = 1;
  iStack_15c = local_158;
  if (iVar19 != 0) {
    puVar30 = *(uint **)&(param_1->ExternalRegisterIndexToVariable).field_0x20;
    if (puVar30 == (uint *)0x0) {
      puVar30 = (uint *)local_168;
    }
    uStack_16c = *puVar30;
    iStack_170 = 0;
    while (uStack_16c == 0) {
      lVar15 = (longlong)iStack_170;
      local_158 = local_158 + 0x20;
      iStack_170 = iStack_170 + 1;
      if ((int)(iVar19 + -1 + (iVar19 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_170) {
        iVar20 = *(int *)&(param_1->ExternalRegisterIndexToVariable).field_0x28;
        uStack_16c = 1;
        iStack_15c = iVar19;
        goto LAB_14a0edc18;
      }
      uStack_16c = puVar30[lVar15 + 1];
    }
    iVar20 = *(int *)&(param_1->ExternalRegisterIndexToVariable).field_0x28;
    uStack_16c = -uStack_16c & uStack_16c;
    uVar4 = (ulonglong)uStack_16c * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_148 = (int)lVar15;
    iStack_15c = local_158 + -1 + local_148;
    if (iVar20 < iStack_15c) {
      iStack_15c = iVar19;
    }
  }
LAB_14a0edc18:
  uVar13 = *(uint *)&(param_1->ExternalRegisterIndexToVariable).field_0x28;
  uStack_154 = local_4c;
  uVar25 = uVar13 & 0xffffffe0;
  iStack_150 = *(int *)&(param_1->ExternalRegisterIndexToVariable).field_0x8 -
               *(int *)&(param_1->ExternalRegisterIndexToVariable).field_0x34;
  TStack_100._padding_ = CONCAT44(uStack_16c,iStack_170);
  uStack_160 = 0xffffffff;
  TStack_100.CurrentBitIndex = iStack_15c;
  TStack_100.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)uVar13 >> 5;
  TStack_100._28_4_ = local_4c;
  TStack_100.BaseBitIndex = local_158;
  uStack_e0 = CONCAT44(uStack_14c,iStack_150);
  local_108 = local_178;
  TStack_100.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_168;
  if ((((int)uVar13 < 0) || (iVar20 < (int)uVar13)) &&
     (bVar11 = FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    uVar12 = (*pcVar8)();
    return uVar12;
  }
  uVar16 = *(uint *)&(param_1->ExternalRegisterIndexToVariable).field_0x28;
  if (uVar13 != uVar16) {
    puVar27 = *(undefined1 **)&(param_1->ExternalRegisterIndexToVariable).field_0x20;
    if (puVar27 == (undefined1 *)0x0) {
      puVar27 = &(param_1->ExternalRegisterIndexToVariable).field_0x10;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar27 + (longlong)iVar19 * 4);
    while (uVar13 == 0) {
      lVar15 = (longlong)iVar19;
      uVar25 = uVar25 + 0x20;
      iVar19 = iVar19 + 1;
      uVar13 = uVar16;
      if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
      goto LAB_14a0edd43;
      uVar13 = *(uint *)(puVar27 + lVar15 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_144 = (int)lVar15;
    uVar13 = (uVar25 - 1) + local_144;
    if ((int)uVar16 < (int)uVar13) {
      uVar13 = uVar16;
    }
  }
LAB_14a0edd43:
  while( true ) {
    pTVar9 = local_108;
    if (*(int *)&local_108->field_0x8 - *(int *)&local_108->field_0x34 != (int)uStack_e0) {
      local_183 = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_183);
    }
    if (((TStack_100.CurrentBitIndex == uVar13) &&
        (TStack_100.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)
         &(param_1->ExternalRegisterIndexToVariable).field_0x10)) &&
       (pTVar9 == &param_1->ExternalRegisterIndexToVariable)) break;
    lVar15 = *(longlong *)pTVar9;
    uVar25 = *(uint *)(lVar15 + (longlong)TStack_100.CurrentBitIndex * 0x14);
    uVar16 = uVar12 - uVar25 ^ uVar25 >> 0xd;
    uVar12 = (-0x61c88647 - uVar16) - uVar25 ^ uVar16 << 8;
    uVar18 = (uVar25 - uVar12) - uVar16 ^ uVar12 >> 0xd;
    uVar25 = (uVar16 - uVar18) - uVar12 ^ uVar18 >> 0xc;
    uVar12 = (uVar12 - uVar25) - uVar18 ^ uVar25 << 0x10;
    uVar16 = (uVar18 - uVar12) - uVar25 ^ uVar12 >> 5;
    uVar25 = (uVar25 - uVar16) - uVar12 ^ uVar16 >> 3;
    uVar12 = (uVar12 - uVar25) - uVar16 ^ uVar25 << 10;
    pFVar14 = FName::ToString((FName *)(lVar15 + (longlong)TStack_100.CurrentBitIndex * 0x14 + 4),
                              local_78);
    iVar20 = (pFVar14->Data).ArrayNum;
    iVar19 = iVar20 + -1;
    if (iVar20 == 0) {
      pwVar26 = L"";
      iVar19 = 0;
    }
    else {
      pwVar26 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
    }
    uVar18 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar19,pwVar26);
    uVar16 = ((uVar16 - uVar12) - uVar25 ^ uVar12 >> 0xf) - uVar18 ^ uVar18 >> 0xd;
    uVar12 = (-0x61c88647 - uVar16) - uVar18 ^ uVar16 << 8;
    uVar25 = (uVar18 - uVar12) - uVar16 ^ uVar12 >> 0xd;
    uVar16 = (uVar16 - uVar25) - uVar12 ^ uVar25 >> 0xc;
    uVar12 = (uVar12 - uVar16) - uVar25 ^ uVar16 << 0x10;
    uVar25 = (uVar25 - uVar12) - uVar16 ^ uVar12 >> 5;
    uVar16 = (uVar16 - uVar25) - uVar12 ^ uVar25 >> 3;
    uVar12 = (uVar12 - uVar16) - uVar25 ^ uVar16 << 10;
    uVar12 = (uVar25 - uVar12) - uVar16 ^ uVar12 >> 0xf;
    if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
    }
    TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
  }
  iStack_130 = 0;
  puVar27 = &(param_1->Operands).field_0x10;
  iVar19 = *(int *)&(param_1->Operands).field_0x28;
  pTVar1 = &param_1->Operands;
  iStack_11c = iStack_130;
  local_118 = iStack_130;
  if (iVar19 != 0) {
    puVar30 = *(uint **)&(param_1->Operands).field_0x20;
    if (puVar30 == (uint *)0x0) {
      puVar30 = (uint *)puVar27;
    }
    uVar13 = *puVar30;
    while (uVar13 == 0) {
      lVar15 = (longlong)iStack_130;
      local_118 = local_118 + 0x20;
      iStack_130 = iStack_130 + 1;
      iStack_11c = iVar19;
      if ((int)(iVar19 + -1 + (iVar19 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_130) goto LAB_14a0edf62;
      uVar13 = puVar30[lVar15 + 1];
    }
    local_180 = (ulonglong)(-uVar13 & uVar13);
    uVar4 = local_180 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_140 = (int)lVar15;
    iStack_11c = local_118 + -1 + local_140;
    if (iVar19 < iStack_11c) {
      iStack_11c = iVar19;
    }
  }
LAB_14a0edf62:
  uStack_12c = (undefined4)local_180;
  iStack_114 = iStack_15c;
  iStack_110 = *(int *)&(param_1->Operands).field_0x8 - *(int *)&(param_1->Operands).field_0x34;
  uVar13 = *(uint *)&(param_1->Operands).field_0x28;
  uStack_120 = 0xffffffff;
  uVar25 = uVar13 & 0xffffffe0;
  TStack_d0._padding_ = CONCAT44(uStack_12c,iStack_130);
  TStack_d0.CurrentBitIndex = iStack_11c;
  TStack_d0.UnvisitedBitMask = 0xffffffff;
  iVar20 = (int)uVar13 >> 5;
  TStack_d0._28_4_ = iStack_15c;
  TStack_d0.BaseBitIndex = local_118;
  uStack_b0 = CONCAT44(uStack_10c,iStack_110);
  local_138 = pTVar1;
  local_128 = puVar27;
  local_d8 = pTVar1;
  TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar27;
  if ((((int)uVar13 < 0) || (iVar19 < (int)uVar13)) &&
     (bVar11 = FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    uVar12 = (*pcVar8)();
    return uVar12;
  }
  uVar16 = *(uint *)&(param_1->Operands).field_0x28;
  if (uVar13 != uVar16) {
    puVar28 = *(undefined1 **)&(param_1->Operands).field_0x20;
    if (puVar28 == (undefined1 *)0x0) {
      puVar28 = puVar27;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar28 + (longlong)iVar20 * 4);
    while (uVar13 == 0) {
      lVar15 = (longlong)iVar20;
      uVar25 = uVar25 + 0x20;
      iVar20 = iVar20 + 1;
      uVar13 = uVar16;
      if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
      goto LAB_14a0ee070;
      uVar13 = *(uint *)(puVar28 + lVar15 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    uVar13 = (int)lVar15 + -1 + uVar25;
    if ((int)uVar16 < (int)uVar13) {
      uVar13 = uVar16;
    }
  }
LAB_14a0ee070:
  while( true ) {
    pTVar10 = local_d8;
    if (*(int *)&local_d8->field_0x8 - *(int *)&local_d8->field_0x34 != (int)uStack_b0) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FRigVMOperand>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_182);
    }
    if (((TStack_d0.CurrentBitIndex == uVar13) &&
        (TStack_d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar27)) && (pTVar10 == pTVar1)
       ) break;
    puVar24 = (undefined8 *)(*(longlong *)pTVar10 + (longlong)TStack_d0.CurrentBitIndex * 0x20);
    iVar19 = *(int *)(puVar24 + 1) + -1;
    if (*(int *)(puVar24 + 1) == 0) {
      pwVar26 = L"";
      iVar19 = 0;
    }
    else {
      pwVar26 = (wchar_t *)*puVar24;
    }
    uVar25 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar19,pwVar26);
    uVar5 = *(ushort *)((longlong)puVar24 + 0x12);
    uVar12 = uVar12 - uVar25 ^ uVar25 >> 0xd;
    uVar16 = (-0x61c88647 - uVar12) - uVar25 ^ uVar12 << 8;
    uVar18 = (uVar25 - uVar16) - uVar12 ^ uVar16 >> 0xd;
    uVar12 = (uVar12 - uVar18) - uVar16 ^ uVar18 >> 0xc;
    uVar25 = (uVar16 - uVar12) - uVar18 ^ uVar12 << 0x10;
    uVar31 = (uVar18 - uVar25) - uVar12 ^ uVar25 >> 5;
    uVar16 = (uVar12 - uVar31) - uVar25 ^ uVar31 >> 3;
    uVar29 = (uVar25 - uVar16) - uVar31 ^ uVar16 << 10;
    uVar6 = *(ushort *)((longlong)puVar24 + 0x14);
    uVar25 = (uint)*(byte *)(puVar24 + 2) - (uint)uVar5 ^ (uint)(uVar5 >> 0xd);
    uVar12 = (-0x61c88647 - uVar25) - (uint)uVar5 ^ uVar25 << 8;
    uVar18 = (uVar5 - uVar12) - uVar25 ^ uVar12 >> 0xd;
    uVar25 = (uVar25 - uVar18) - uVar12 ^ uVar18 >> 0xc;
    uVar12 = (uVar12 - uVar25) - uVar18 ^ uVar25 << 0x10;
    uVar18 = (uVar18 - uVar12) - uVar25 ^ uVar12 >> 5;
    uVar25 = (uVar25 - uVar18) - uVar12 ^ uVar18 >> 3;
    uVar12 = (uVar12 - uVar25) - uVar18 ^ uVar25 << 10;
    uVar18 = ((uVar18 - uVar12) - uVar25 ^ uVar12 >> 0xf) - (uint)uVar6 ^ (uint)(uVar6 >> 0xd);
    uVar12 = (-0x61c88647 - uVar18) - (uint)uVar6 ^ uVar18 << 8;
    uVar25 = (uVar6 - uVar12) - uVar18 ^ uVar12 >> 0xd;
    uVar18 = (uVar18 - uVar25) - uVar12 ^ uVar25 >> 0xc;
    uVar12 = (uVar12 - uVar18) - uVar25 ^ uVar18 << 0x10;
    uVar25 = (uVar25 - uVar12) - uVar18 ^ uVar12 >> 5;
    uVar18 = (uVar18 - uVar25) - uVar12 ^ uVar25 >> 3;
    uVar12 = (uVar12 - uVar18) - uVar25 ^ uVar18 << 10;
    uVar25 = (uVar25 - uVar12) - uVar18 ^ uVar12 >> 0xf;
    uVar16 = ((uVar31 - uVar29) - uVar16 ^ uVar29 >> 0xf) - uVar25 ^ uVar25 >> 0xd;
    uVar12 = (-0x61c88647 - uVar16) - uVar25 ^ uVar16 << 8;
    uVar25 = (uVar25 - uVar12) - uVar16 ^ uVar12 >> 0xd;
    uVar16 = (uVar16 - uVar25) - uVar12 ^ uVar25 >> 0xc;
    uVar12 = (uVar12 - uVar16) - uVar25 ^ uVar16 << 0x10;
    uVar25 = (uVar25 - uVar12) - uVar16 ^ uVar12 >> 5;
    uVar16 = (uVar16 - uVar25) - uVar12 ^ uVar25 >> 3;
    uVar12 = (uVar12 - uVar16) - uVar25 ^ uVar16 << 10;
    TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
    uVar12 = (uVar25 - uVar12) - uVar16 ^ uVar12 >> 0xf;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
  }
  return uVar12;
}

// GetTypeHash @ 14a0ee300

uint __cdecl GetTypeHash(FRigVMFunctionCompilationPropertyDescription *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  FString *pFVar5;
  int iVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  uint uVar9;
  FString local_28;
  
  pFVar5 = FName::ToString(&param_1->Name,&local_28);
  pwVar8 = L"";
  iVar1 = (pFVar5->Data).ArrayNum;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar7 = L"";
    iVar6 = 0;
  }
  else {
    pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  iVar1 = (param_1->CPPType).Data.ArrayNum;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar7 = L"";
    iVar6 = 0;
  }
  else {
    pwVar7 = (wchar_t *)(param_1->CPPType).Data.AllocatorInstance.Data;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  uVar9 = uVar2 - uVar3 ^ uVar3 >> 0xd;
  uVar2 = (-0x61c88647 - uVar9) - uVar3 ^ uVar9 << 8;
  uVar3 = (uVar3 - uVar2) - uVar9 ^ uVar2 >> 0xd;
  uVar9 = (uVar9 - uVar3) - uVar2 ^ uVar3 >> 0xc;
  uVar2 = (uVar2 - uVar9) - uVar3 ^ uVar9 << 0x10;
  uVar3 = (uVar3 - uVar2) - uVar9 ^ uVar2 >> 5;
  uVar9 = (uVar9 - uVar3) - uVar2 ^ uVar3 >> 3;
  uVar2 = (uVar2 - uVar9) - uVar3 ^ uVar9 << 10;
  iVar1 = (param_1->DefaultValue).Data.ArrayNum;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar6 = 0;
  }
  else {
    pwVar8 = (wchar_t *)(param_1->DefaultValue).Data.AllocatorInstance.Data;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar8);
  uVar3 = ((uVar3 - uVar2) - uVar9 ^ uVar2 >> 0xf) - uVar4 ^ uVar4 >> 0xd;
  uVar9 = (-0x61c88647 - uVar3) - uVar4 ^ uVar3 << 8;
  uVar2 = (uVar4 - uVar9) - uVar3 ^ uVar9 >> 0xd;
  uVar3 = (uVar3 - uVar2) - uVar9 ^ uVar2 >> 0xc;
  uVar9 = (uVar9 - uVar3) - uVar2 ^ uVar3 << 0x10;
  uVar2 = (uVar2 - uVar9) - uVar3 ^ uVar9 >> 5;
  uVar3 = (uVar3 - uVar2) - uVar9 ^ uVar2 >> 3;
  uVar9 = (uVar9 - uVar3) - uVar2 ^ uVar3 << 10;
  return (uVar2 - uVar9) - uVar3 ^ uVar9 >> 0xf;
}

// GetTypeHash @ 14a0ee4a0

uint __cdecl GetTypeHash(FRigVMFunctionCompilationPropertyPath *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  wchar_t *pwVar6;
  uint uVar7;
  wchar_t *pwVar8;
  uint uVar9;
  
  iVar1 = (param_1->HeadCPPType).Data.ArrayNum;
  pwVar8 = L"";
  iVar2 = param_1->PropertyIndex;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar6 = L"";
    iVar4 = 0;
  }
  else {
    pwVar6 = (wchar_t *)(param_1->HeadCPPType).Data.AllocatorInstance.Data;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar6);
  uVar9 = iVar2 - uVar3 ^ uVar3 >> 0xd;
  uVar5 = (-0x61c88647 - uVar9) - uVar3 ^ uVar9 << 8;
  uVar7 = (uVar3 - uVar5) - uVar9 ^ uVar5 >> 0xd;
  uVar9 = (uVar9 - uVar7) - uVar5 ^ uVar7 >> 0xc;
  uVar3 = (uVar5 - uVar9) - uVar7 ^ uVar9 << 0x10;
  uVar5 = (uVar7 - uVar3) - uVar9 ^ uVar3 >> 5;
  uVar7 = (uVar9 - uVar5) - uVar3 ^ uVar5 >> 3;
  uVar3 = (uVar3 - uVar7) - uVar5 ^ uVar7 << 10;
  iVar1 = (param_1->SegmentPath).Data.ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  else {
    pwVar8 = (wchar_t *)(param_1->SegmentPath).Data.AllocatorInstance.Data;
  }
  uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar8);
  uVar5 = ((uVar5 - uVar3) - uVar7 ^ uVar3 >> 0xf) - uVar9 ^ uVar9 >> 0xd;
  uVar7 = (-0x61c88647 - uVar5) - uVar9 ^ uVar5 << 8;
  uVar3 = (uVar9 - uVar7) - uVar5 ^ uVar7 >> 0xd;
  uVar5 = (uVar5 - uVar3) - uVar7 ^ uVar3 >> 0xc;
  uVar7 = (uVar7 - uVar5) - uVar3 ^ uVar5 << 0x10;
  uVar3 = (uVar3 - uVar7) - uVar5 ^ uVar7 >> 5;
  uVar5 = (uVar5 - uVar3) - uVar7 ^ uVar3 >> 3;
  uVar7 = (uVar7 - uVar5) - uVar3 ^ uVar5 << 10;
  return (uVar3 - uVar7) - uVar5 ^ uVar7 >> 0xf;
}

// GetTypeHash @ 14a0ee600

uint __cdecl GetTypeHash(FRigVMGraphFunctionArgument *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  FString *pFVar9;
  int iVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  int iVar18;
  uint *puVar19;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_9c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  FString local_68;
  FString local_58;
  FString local_48;
  
  pFVar9 = FName::ToString(&param_1->DisplayName,&local_58);
  iVar16 = (pFVar9->Data).ArrayNum;
  iVar10 = iVar16 + -1;
  if (iVar16 == 0) {
    pwVar12 = L"";
    iVar10 = 0;
  }
  else {
    pwVar12 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar12);
  pFVar9 = FName::ToString(&param_1->Name,&local_68);
  iVar16 = (pFVar9->Data).ArrayNum;
  iVar10 = iVar16 + -1;
  if (iVar16 == 0) {
    pwVar12 = L"";
    iVar10 = 0;
  }
  else {
    pwVar12 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar12);
  uVar15 = uVar7 - uVar6 ^ uVar6 >> 0xd;
  uVar7 = (-0x61c88647 - uVar15) - uVar6 ^ uVar15 << 8;
  uVar13 = (uVar6 - uVar7) - uVar15 ^ uVar7 >> 0xd;
  uVar15 = (uVar15 - uVar13) - uVar7 ^ uVar13 >> 0xc;
  uVar6 = (uVar7 - uVar15) - uVar13 ^ uVar15 << 0x10;
  uVar7 = (uVar13 - uVar6) - uVar15 ^ uVar6 >> 5;
  uVar13 = (uVar15 - uVar7) - uVar6 ^ uVar7 >> 3;
  uVar6 = (uVar6 - uVar13) - uVar7 ^ uVar13 << 10;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pFVar9 = FName::ToString(&param_1->CPPType,&local_48);
  iVar16 = (pFVar9->Data).ArrayNum;
  iVar10 = iVar16 + -1;
  if (iVar16 == 0) {
    pwVar12 = L"";
    iVar10 = 0;
  }
  else {
    pwVar12 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  uVar15 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar12);
  uVar7 = ((uVar7 - uVar6) - uVar13 ^ uVar6 >> 0xf) - uVar15 ^ uVar15 >> 0xd;
  uVar6 = (-0x61c88647 - uVar7) - uVar15 ^ uVar7 << 8;
  uVar13 = (uVar15 - uVar6) - uVar7 ^ uVar6 >> 0xd;
  uVar7 = (uVar7 - uVar13) - uVar6 ^ uVar13 >> 0xc;
  uVar6 = (uVar6 - uVar7) - uVar13 ^ uVar7 << 0x10;
  uVar13 = (uVar13 - uVar6) - uVar7 ^ uVar6 >> 5;
  uVar7 = (uVar7 - uVar13) - uVar6 ^ uVar13 >> 3;
  uVar6 = (uVar6 - uVar7) - uVar13 ^ uVar7 << 10;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  uVar15 = GetTypeHash((FSoftObjectPath *)&(param_1->CPPTypeObject).SoftObjectPtr.field_0x8);
  uVar7 = ((uVar13 - uVar6) - uVar7 ^ uVar6 >> 0xf) - uVar15 ^ uVar15 >> 0xd;
  uVar6 = (-0x61c88647 - uVar7) - uVar15 ^ uVar7 << 8;
  uVar13 = (uVar15 - uVar6) - uVar7 ^ uVar6 >> 0xd;
  uVar7 = (uVar7 - uVar13) - uVar6 ^ uVar13 >> 0xc;
  uVar6 = (uVar6 - uVar7) - uVar13 ^ uVar7 << 0x10;
  uVar13 = (uVar13 - uVar6) - uVar7 ^ uVar6 >> 5;
  uVar7 = (uVar7 - uVar13) - uVar6 ^ uVar13 >> 3;
  uVar6 = (uVar6 - uVar7) - uVar13 ^ uVar7 << 10;
  uVar6 = (uVar13 - uVar6) - uVar7 ^ uVar6 >> 0xf;
  iVar10 = uVar6 - param_1->bIsArray;
  uVar7 = 0x9e3779b9 - uVar6 ^ iVar10 * 0x100;
  uVar13 = (param_1->bIsArray - uVar7) - iVar10 ^ uVar7 >> 0xd;
  uVar6 = (iVar10 - uVar13) - uVar7 ^ uVar13 >> 0xc;
  uVar7 = (uVar7 - uVar6) - uVar13 ^ uVar6 << 0x10;
  uVar13 = (uVar13 - uVar7) - uVar6 ^ uVar7 >> 5;
  uVar6 = (uVar6 - uVar13) - uVar7 ^ uVar13 >> 3;
  uVar7 = (uVar7 - uVar6) - uVar13 ^ uVar6 << 10;
  uVar6 = (uVar13 - uVar7) - uVar6 ^ uVar7 >> 0xf;
  iVar10 = uVar6 - param_1->Direction;
  uVar7 = 0x9e3779b9 - uVar6 ^ iVar10 * 0x100;
  uVar13 = (param_1->Direction - uVar7) - iVar10 ^ uVar7 >> 0xd;
  uVar6 = (iVar10 - uVar13) - uVar7 ^ uVar13 >> 0xc;
  uVar7 = (uVar7 - uVar6) - uVar13 ^ uVar6 << 0x10;
  uVar13 = (uVar13 - uVar7) - uVar6 ^ uVar7 >> 5;
  uVar6 = (uVar6 - uVar13) - uVar7 ^ uVar13 >> 3;
  uVar7 = (uVar7 - uVar6) - uVar13 ^ uVar6 << 10;
  iVar16 = (param_1->DefaultValue).Data.ArrayNum;
  iVar10 = iVar16 + -1;
  if (iVar16 == 0) {
    pwVar12 = L"";
    iVar10 = 0;
  }
  else {
    pwVar12 = (wchar_t *)(param_1->DefaultValue).Data.AllocatorInstance.Data;
  }
  uVar15 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar12);
  uVar7 = ((uVar13 - uVar7) - uVar6 ^ uVar7 >> 0xf) - uVar15 ^ uVar15 >> 0xd;
  uVar6 = (-0x61c88647 - uVar7) - uVar15 ^ uVar7 << 8;
  uVar13 = (uVar15 - uVar6) - uVar7 ^ uVar6 >> 0xd;
  uVar7 = (uVar7 - uVar13) - uVar6 ^ uVar13 >> 0xc;
  uVar6 = (uVar6 - uVar7) - uVar13 ^ uVar7 << 0x10;
  uVar13 = (uVar13 - uVar6) - uVar7 ^ uVar6 >> 5;
  uVar7 = (uVar7 - uVar13) - uVar6 ^ uVar13 >> 3;
  uVar6 = (uVar6 - uVar7) - uVar13 ^ uVar7 << 10;
  uVar6 = (uVar13 - uVar6) - uVar7 ^ uVar6 >> 0xf;
  iVar10 = uVar6 - param_1->bIsConst;
  uVar7 = 0x9e3779b9 - uVar6 ^ iVar10 * 0x100;
  uVar15 = (param_1->bIsConst - uVar7) - iVar10 ^ uVar7 >> 0xd;
  uVar6 = (iVar10 - uVar15) - uVar7 ^ uVar15 >> 0xc;
  uVar13 = (uVar7 - uVar6) - uVar15 ^ uVar6 << 0x10;
  uVar15 = (uVar15 - uVar13) - uVar6 ^ uVar13 >> 5;
  uVar7 = (uVar6 - uVar15) - uVar13 ^ uVar15 >> 3;
  puVar1 = &(param_1->PathToTooltip).field_0x10;
  iVar10 = *(int *)&(param_1->PathToTooltip).field_0x28;
  uVar13 = (uVar13 - uVar7) - uVar15 ^ uVar7 << 10;
  iVar16 = 0;
  uVar6 = 1;
  uVar7 = (uVar15 - uVar13) - uVar7 ^ uVar13 >> 0xf;
  iVar18 = 0;
  iVar8 = 0;
  if (iVar10 != 0) {
    puVar19 = *(uint **)&(param_1->PathToTooltip).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar13 = *puVar19;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar16;
      iVar18 = iVar18 + 0x20;
      iVar16 = iVar16 + 1;
      iVar8 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14a0eea9e;
      uVar13 = puVar19[lVar11 + 1];
    }
    uVar6 = -uVar13 & uVar13;
    uVar3 = (ulonglong)uVar6 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res10 = (int)lVar11;
    iVar8 = local_res10 + -1 + iVar18;
    if (iVar10 < iVar8) {
      iVar8 = iVar10;
    }
  }
LAB_14a0eea9e:
  uVar13 = *(uint *)&(param_1->PathToTooltip).field_0x28;
  uVar15 = uVar13 & 0xffffffe0;
  TStack_90._padding_ = CONCAT44(uVar6,iVar16);
  TStack_90.CurrentBitIndex = iVar8;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar13 >> 5;
  TStack_90._28_4_ = iVar8;
  TStack_90.BaseBitIndex = iVar18;
  uStack_70 = CONCAT44(uStack_9c,
                       *(int *)&(param_1->PathToTooltip).field_0x8 -
                       *(int *)&(param_1->PathToTooltip).field_0x34);
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar10 < (int)uVar13)) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  uVar6 = *(uint *)&(param_1->PathToTooltip).field_0x28;
  if (uVar13 != uVar6) {
    puVar17 = *(undefined1 **)&(param_1->PathToTooltip).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar16 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar16;
      uVar15 = uVar15 + 0x20;
      iVar16 = iVar16 + 1;
      uVar13 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14a0eeba0;
      uVar13 = *(uint *)(puVar17 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar15;
    if ((int)uVar6 < (int)uVar13) {
      uVar13 = uVar6;
    }
  }
LAB_14a0eeba0:
  while( true ) {
    if (*(int *)&(param_1->PathToTooltip).field_0x8 - *(int *)&(param_1->PathToTooltip).field_0x34
        != (int)uStack_70) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_90.CurrentBitIndex == uVar13) &&
       (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    puVar2 = (undefined8 *)
             (*(longlong *)&param_1->PathToTooltip + (longlong)TStack_90.CurrentBitIndex * 0x28);
    iVar16 = *(int *)(*(longlong *)&param_1->PathToTooltip + 8 +
                     (longlong)TStack_90.CurrentBitIndex * 0x28);
    iVar10 = iVar16 + -1;
    if (iVar16 == 0) {
      pwVar12 = L"";
      iVar10 = 0;
    }
    else {
      pwVar12 = (wchar_t *)*puVar2;
    }
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar12);
    uVar15 = uVar7 - uVar6 ^ uVar6 >> 0xd;
    uVar7 = (-0x61c88647 - uVar15) - uVar6 ^ uVar15 << 8;
    uVar14 = (uVar6 - uVar7) - uVar15 ^ uVar7 >> 0xd;
    uVar15 = (uVar15 - uVar14) - uVar7 ^ uVar14 >> 0xc;
    uVar6 = (uVar7 - uVar15) - uVar14 ^ uVar15 << 0x10;
    uVar14 = (uVar14 - uVar6) - uVar15 ^ uVar6 >> 5;
    uVar7 = (uVar15 - uVar14) - uVar6 ^ uVar14 >> 3;
    uVar6 = (uVar6 - uVar7) - uVar14 ^ uVar7 << 10;
    pFVar9 = FText::ToString((FText *)(puVar2 + 2));
    iVar16 = (pFVar9->Data).ArrayNum;
    iVar10 = iVar16 + -1;
    if (iVar16 == 0) {
      pwVar12 = L"";
      iVar10 = 0;
    }
    else {
      pwVar12 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    uVar15 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar12);
    uVar14 = ((uVar14 - uVar6) - uVar7 ^ uVar6 >> 0xf) - uVar15 ^ uVar15 >> 0xd;
    uVar6 = (-0x61c88647 - uVar15) - uVar14 ^ uVar14 << 8;
    uVar7 = (uVar15 - uVar6) - uVar14 ^ uVar6 >> 0xd;
    uVar15 = (uVar14 - uVar7) - uVar6 ^ uVar7 >> 0xc;
    uVar6 = (uVar6 - uVar15) - uVar7 ^ uVar15 << 0x10;
    uVar7 = (uVar7 - uVar6) - uVar15 ^ uVar6 >> 5;
    uVar15 = (uVar15 - uVar7) - uVar6 ^ uVar7 >> 3;
    uVar6 = (uVar6 - uVar15) - uVar7 ^ uVar15 << 10;
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    uVar7 = (uVar7 - uVar6) - uVar15 ^ uVar6 >> 0xf;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  }
  return uVar7;
}

// GetTypeHash @ 14a0eed30

uint __cdecl GetTypeHash(FRigVMGraphFunctionIdentifier *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  FString *pFVar4;
  int iVar5;
  uint uVar6;
  wchar_t *pwVar7;
  uint uVar8;
  wchar_t *pwVar9;
  FString local_18;
  
  pFVar4 = FSoftObjectPath::ToString(&param_1->HostObject,&local_18);
  pwVar7 = L"";
  iVar1 = (pFVar4->Data).ArrayNum;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar9 = L"";
    iVar5 = 0;
  }
  else {
    pwVar9 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar9);
  pFVar4 = FRigVMGraphFunctionIdentifier::GetLibraryNodePath(param_1);
  iVar1 = (pFVar4->Data).ArrayNum;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar5 = 0;
  }
  else {
    pwVar7 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar7);
  uVar8 = uVar3 - uVar2 ^ uVar2 >> 0xd;
  uVar3 = (-0x61c88647 - uVar8) - uVar2 ^ uVar8 << 8;
  uVar6 = (uVar2 - uVar3) - uVar8 ^ uVar3 >> 0xd;
  uVar8 = (uVar8 - uVar6) - uVar3 ^ uVar6 >> 0xc;
  uVar2 = (uVar3 - uVar8) - uVar6 ^ uVar8 << 0x10;
  uVar3 = (uVar6 - uVar2) - uVar8 ^ uVar2 >> 5;
  uVar6 = (uVar8 - uVar3) - uVar2 ^ uVar3 >> 3;
  uVar2 = (uVar2 - uVar6) - uVar3 ^ uVar6 << 10;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (uVar3 - uVar2) - uVar6 ^ uVar2 >> 0xf;
}

// GetTypeHash @ 14a0eee50

uint __cdecl GetTypeHash(FRigVMNameOp *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = param_1->C - (uint)param_1->Type;
  uVar3 = 0x9e3779b9 - param_1->C ^ iVar1 * 0x100;
  uVar4 = (param_1->Type - uVar3) - iVar1 ^ uVar3 >> 0xd;
  uVar2 = (iVar1 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 0x10;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 10;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xf;
  uVar3 = param_1->B - uVar4 ^ uVar4 >> 0xd;
  uVar2 = (-0x61c88647 - uVar3) - uVar4 ^ uVar3 << 8;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 0xc;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 10;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xf;
  uVar2 = param_1->A - uVar4 ^ uVar4 >> 0xd;
  uVar3 = (-0x61c88647 - uVar2) - uVar4 ^ uVar2 << 8;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xd;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 0x10;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 10;
  return (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xf;
}

// GetTypeHash @ 14a0eefe0

uint __cdecl GetTypeHash(FRigVMNodeLayout *param_1)

{
  undefined1 *puVar1;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar2
  ;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *pTVar5;
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *pTVar6;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar7
  ;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  int iVar15;
  undefined8 *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined1 *puVar20;
  uint *puVar21;
  FScriptContainerElement *pFVar22;
  undefined8 *puVar23;
  FScriptContainerElement *pFVar24;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20 [2];
  undefined1 local_158 [8];
  FScriptContainerElement *local_150;
  FScriptContainerElement *local_148;
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *local_140;
  int iStack_138;
  uint uStack_134;
  undefined1 *local_130;
  undefined4 uStack_128;
  int iStack_124;
  int local_120;
  undefined4 uStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  int local_110;
  int local_10c;
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *local_108;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_100;
  int iStack_f8;
  undefined4 uStack_f4;
  undefined1 *local_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  pFVar22 = (param_1->Categories).AllocatorInstance.Data;
  uVar17 = 0;
  local_res20[0] = (param_1->Categories).ArrayNum;
  uVar12 = (ulonglong)(int)local_res20[0];
  pFVar24 = pFVar22 + 0x18;
  local_150 = pFVar22 + uVar12 * 0x28;
  while( true ) {
    pFVar4 = local_150;
    local_148 = pFVar22;
    if ((param_1->Categories).ArrayNum != (int)uVar12) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FRigVMPinCategory_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    iStack_138 = 0;
    if (pFVar22 == pFVar4) break;
    if (*(int *)(pFVar24 + -0x10) == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = *(wchar_t **)pFVar22;
      iStack_138 = *(int *)(pFVar24 + -0x10) + -1;
    }
    uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iStack_138,pwVar14);
    iVar11 = *(int *)pFVar24;
    puVar16 = *(undefined8 **)(pFVar24 + -8);
    puVar23 = puVar16 + (longlong)iVar11 * 2;
    while( true ) {
      if (*(int *)pFVar24 != iVar11) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (puVar16 == puVar23) break;
      iVar15 = *(int *)(puVar16 + 1) + -1;
      if (*(int *)(puVar16 + 1) == 0) {
        pwVar14 = L"";
        iVar15 = 0;
      }
      else {
        pwVar14 = (wchar_t *)*puVar16;
      }
      uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar15,pwVar14);
      uVar9 = uVar9 - uVar10 ^ uVar10 >> 0xd;
      uVar19 = (-0x61c88647 - uVar9) - uVar10 ^ uVar9 << 8;
      uVar10 = (uVar10 - uVar19) - uVar9 ^ uVar19 >> 0xd;
      uVar9 = (uVar9 - uVar10) - uVar19 ^ uVar10 >> 0xc;
      uVar19 = (uVar19 - uVar9) - uVar10 ^ uVar9 << 0x10;
      uVar10 = (uVar10 - uVar19) - uVar9 ^ uVar19 >> 5;
      uVar9 = (uVar9 - uVar10) - uVar19 ^ uVar10 >> 3;
      uVar19 = (uVar19 - uVar9) - uVar10 ^ uVar9 << 10;
      uVar9 = (uVar10 - uVar19) - uVar9 ^ uVar19 >> 0xf;
      puVar16 = puVar16 + 2;
    }
    iVar11 = uVar9 - (byte)pFVar24[8];
    uVar10 = 0x9e3779b9 - uVar9 ^ iVar11 * 0x100;
    uVar19 = ((byte)pFVar24[8] - uVar10) - iVar11 ^ uVar10 >> 0xd;
    uVar9 = (iVar11 - uVar19) - uVar10 ^ uVar19 >> 0xc;
    uVar10 = (uVar10 - uVar9) - uVar19 ^ uVar9 << 0x10;
    uVar19 = (uVar19 - uVar10) - uVar9 ^ uVar10 >> 5;
    uVar9 = (uVar9 - uVar19) - uVar10 ^ uVar19 >> 3;
    uVar10 = (uVar10 - uVar19) - uVar9 ^ uVar9 << 10;
    uVar10 = (uVar19 - uVar10) - uVar9 ^ uVar10 >> 0xf;
    uVar17 = uVar17 - uVar10 ^ uVar10 >> 0xd;
    uVar9 = (-0x61c88647 - uVar17) - uVar10 ^ uVar17 << 8;
    uVar10 = (uVar10 - uVar9) - uVar17 ^ uVar9 >> 0xd;
    uVar17 = (uVar17 - uVar10) - uVar9 ^ uVar10 >> 0xc;
    uVar9 = (uVar9 - uVar17) - uVar10 ^ uVar17 << 0x10;
    uVar10 = (uVar10 - uVar9) - uVar17 ^ uVar9 >> 5;
    uVar17 = (uVar17 - uVar10) - uVar9 ^ uVar10 >> 3;
    pFVar22 = local_148 + 0x28;
    pFVar24 = pFVar24 + 0x28;
    uVar9 = (uVar9 - uVar17) - uVar10 ^ uVar17 << 10;
    uVar12 = (ulonglong)local_res20[0];
    uVar17 = (uVar10 - uVar9) - uVar17 ^ uVar9 >> 0xf;
  }
  iVar11 = *(int *)&(param_1->PinIndexInCategory).field_0x28;
  puVar1 = &(param_1->PinIndexInCategory).field_0x10;
  local_140 = &param_1->PinIndexInCategory;
  local_150 = (FScriptContainerElement *)0x1;
  iVar15 = 0;
  uStack_134 = 1;
  iStack_124 = iStack_138;
  local_120 = iStack_138;
  if (iVar11 != 0) {
    puVar21 = *(uint **)&(param_1->PinIndexInCategory).field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uStack_134 = *puVar21;
    while (uStack_134 == 0) {
      lVar13 = (longlong)iStack_138;
      local_120 = local_120 + 0x20;
      iStack_138 = iStack_138 + 1;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_138) {
        iVar15 = *(int *)&(param_1->PinIndexInCategory).field_0x28;
        uStack_134 = 1;
        iStack_124 = iVar11;
        goto LAB_14a0ef2f6;
      }
      uStack_134 = puVar21[lVar13 + 1];
    }
    iVar15 = *(int *)&(param_1->PinIndexInCategory).field_0x28;
    uStack_134 = -uStack_134 & uStack_134;
    uVar12 = (ulonglong)uStack_134 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_110 = (int)lVar13;
    iStack_124 = local_110 + -1 + local_120;
    if (iVar15 < iStack_124) {
      iStack_124 = iVar11;
    }
  }
LAB_14a0ef2f6:
  uVar9 = *(uint *)&(param_1->PinIndexInCategory).field_0x28;
  uStack_11c = local_54;
  uVar10 = uVar9 & 0xffffffe0;
  iStack_118 = *(int *)&(param_1->PinIndexInCategory).field_0x8 -
               *(int *)&(param_1->PinIndexInCategory).field_0x34;
  TStack_c8._padding_ = CONCAT44(uStack_134,iStack_138);
  uStack_128 = 0xffffffff;
  TStack_c8.CurrentBitIndex = iStack_124;
  TStack_c8.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar9 >> 5;
  TStack_c8._28_4_ = local_54;
  TStack_c8.BaseBitIndex = local_120;
  uStack_a8 = CONCAT44(uStack_114,iStack_118);
  local_130 = puVar1;
  local_108 = local_140;
  local_d0 = local_140;
  TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar15 < (int)uVar9)) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    uVar17 = (*pcVar3)();
    return uVar17;
  }
  pTVar5 = local_108;
  uVar19 = *(uint *)&(param_1->PinIndexInCategory).field_0x28;
  if (uVar9 != uVar19) {
    puVar20 = *(undefined1 **)&(param_1->PinIndexInCategory).field_0x20;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar11 * 4);
    while (uVar9 == 0) {
      lVar13 = (longlong)iVar11;
      uVar10 = uVar10 + 0x20;
      iVar11 = iVar11 + 1;
      uVar9 = uVar19;
      if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
      goto LAB_14a0ef410;
      uVar9 = *(uint *)(puVar20 + lVar13 * 4 + 4);
    }
    uVar12 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_10c = (int)lVar13;
    uVar9 = local_10c + -1 + uVar10;
    if ((int)uVar19 < (int)uVar9) {
      uVar9 = uVar19;
    }
  }
LAB_14a0ef410:
  while( true ) {
    pTVar6 = local_d0;
    if (*(int *)&local_d0->field_0x8 - *(int *)&local_d0->field_0x34 != (int)uStack_a8) {
      local_res20[0] = local_res20[0] & 0xffffff00;
      `TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_c8.CurrentBitIndex == uVar9) &&
        (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == pTVar5))
    break;
    puVar16 = (undefined8 *)(*(longlong *)pTVar6 + (longlong)TStack_c8.CurrentBitIndex * 0x20);
    iVar11 = *(int *)(puVar16 + 1) + -1;
    if (*(int *)(puVar16 + 1) == 0) {
      pwVar14 = L"";
      iVar11 = 0;
    }
    else {
      pwVar14 = (wchar_t *)*puVar16;
    }
    uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,pwVar14);
    uVar10 = (uVar10 >> 2) + *(int *)(puVar16 + 2) + -0x61c88647 + uVar10 * 0x40 ^ uVar10;
    uVar17 = uVar17 - uVar10 ^ uVar10 >> 0xd;
    uVar19 = (-0x61c88647 - uVar17) - uVar10 ^ uVar17 << 8;
    uVar18 = (uVar10 - uVar19) - uVar17 ^ uVar19 >> 0xd;
    uVar17 = (uVar17 - uVar18) - uVar19 ^ uVar18 >> 0xc;
    uVar10 = (uVar19 - uVar17) - uVar18 ^ uVar17 << 0x10;
    uVar19 = (uVar18 - uVar10) - uVar17 ^ uVar10 >> 5;
    uVar17 = (uVar17 - uVar19) - uVar10 ^ uVar19 >> 3;
    uVar10 = (uVar10 - uVar17) - uVar19 ^ uVar17 << 10;
    TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
    uVar17 = (uVar19 - uVar10) - uVar17 ^ uVar10 >> 0xf;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
  }
  iStack_f8 = 0;
  puVar1 = &(param_1->DisplayNames).field_0x10;
  iVar11 = *(int *)&(param_1->DisplayNames).field_0x28;
  pTVar2 = &param_1->DisplayNames;
  iStack_e4 = iStack_f8;
  local_e0 = iStack_f8;
  if (iVar11 != 0) {
    puVar21 = *(uint **)&(param_1->DisplayNames).field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar9 = *puVar21;
    while (uVar9 == 0) {
      lVar13 = (longlong)iStack_f8;
      local_e0 = local_e0 + 0x20;
      iStack_f8 = iStack_f8 + 1;
      iStack_e4 = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f8) goto LAB_14a0ef5b1;
      uVar9 = puVar21[lVar13 + 1];
    }
    local_150 = (FScriptContainerElement *)(ulonglong)(-uVar9 & uVar9);
    uVar12 = (longlong)local_150 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_148 = (FScriptContainerElement *)CONCAT44(local_148._4_4_,(int)lVar13);
    iStack_e4 = (int)lVar13 + -1 + local_e0;
    if (iVar11 < iStack_e4) {
      iStack_e4 = iVar11;
    }
  }
LAB_14a0ef5b1:
  uStack_f4 = SUB84(local_150,0);
  iStack_dc = iStack_124;
  iStack_d8 = *(int *)&(param_1->DisplayNames).field_0x8 -
              *(int *)&(param_1->DisplayNames).field_0x34;
  uVar9 = *(uint *)&(param_1->DisplayNames).field_0x28;
  uStack_e8 = 0xffffffff;
  uVar10 = uVar9 & 0xffffffe0;
  TStack_98._padding_ = CONCAT44(uStack_f4,iStack_f8);
  TStack_98.CurrentBitIndex = iStack_e4;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar9 >> 5;
  TStack_98._28_4_ = iStack_124;
  TStack_98.BaseBitIndex = local_e0;
  uStack_78 = CONCAT44(uStack_d4,iStack_d8);
  local_100 = pTVar2;
  local_f0 = puVar1;
  local_a0 = pTVar2;
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar11 < (int)uVar9)) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    uVar17 = (*pcVar3)();
    return uVar17;
  }
  uVar19 = *(uint *)&(param_1->DisplayNames).field_0x28;
  if (uVar9 != uVar19) {
    puVar20 = *(undefined1 **)&(param_1->DisplayNames).field_0x20;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar15 * 4);
    while (uVar9 == 0) {
      lVar13 = (longlong)iVar15;
      uVar10 = uVar10 + 0x20;
      iVar15 = iVar15 + 1;
      uVar9 = uVar19;
      if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_14a0ef6c0;
      uVar9 = *(uint *)(puVar20 + lVar13 * 4 + 4);
    }
    uVar12 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar9 = (int)lVar13 + -1 + uVar10;
    if ((int)uVar19 < (int)uVar9) {
      uVar9 = uVar19;
    }
  }
LAB_14a0ef6c0:
  while( true ) {
    pTVar7 = local_a0;
    if (*(int *)&local_a0->field_0x8 - *(int *)&local_a0->field_0x34 != (int)uStack_78) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_158);
    }
    if (((TStack_98.CurrentBitIndex == uVar9) &&
        (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar2))
    break;
    lVar13 = *(longlong *)pTVar7;
    puVar16 = (undefined8 *)(lVar13 + (longlong)TStack_98.CurrentBitIndex * 0x28);
    iVar15 = *(int *)(lVar13 + 8 + (longlong)TStack_98.CurrentBitIndex * 0x28);
    iVar11 = iVar15 + -1;
    if (iVar15 == 0) {
      pwVar14 = L"";
      iVar11 = 0;
    }
    else {
      pwVar14 = (wchar_t *)*puVar16;
    }
    uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,pwVar14);
    iVar11 = *(int *)(puVar16 + 3) + -1;
    if (*(int *)(puVar16 + 3) == 0) {
      pwVar14 = L"";
      iVar11 = 0;
    }
    else {
      pwVar14 = (wchar_t *)puVar16[2];
    }
    uVar19 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,pwVar14);
    uVar10 = (uVar10 >> 2) + uVar10 * 0x40 + uVar19 + 0x9e3779b9 ^ uVar10;
    uVar17 = uVar17 - uVar10 ^ uVar10 >> 0xd;
    uVar19 = (-0x61c88647 - uVar17) - uVar10 ^ uVar17 << 8;
    uVar10 = (uVar10 - uVar19) - uVar17 ^ uVar19 >> 0xd;
    uVar17 = (uVar17 - uVar10) - uVar19 ^ uVar10 >> 0xc;
    uVar19 = (uVar19 - uVar17) - uVar10 ^ uVar17 << 0x10;
    uVar10 = (uVar10 - uVar19) - uVar17 ^ uVar19 >> 5;
    uVar17 = (uVar17 - uVar10) - uVar19 ^ uVar10 >> 3;
    uVar19 = (uVar19 - uVar17) - uVar10 ^ uVar17 << 10;
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    uVar17 = (uVar10 - uVar19) - uVar17 ^ uVar19 >> 0xf;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  }
  return uVar17;
}

// GetTypeHash @ 14a0ef810

uint __cdecl GetTypeHash(FRigVMPinCategory *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  
  iVar3 = (param_1->Path).Data.ArrayNum;
  iVar4 = iVar3 + -1;
  if (iVar3 == 0) {
    pwVar5 = L"";
    iVar4 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Path).Data.AllocatorInstance.Data;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  iVar4 = (param_1->Elements).ArrayNum;
  pFVar6 = (param_1->Elements).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar4 * 0x10;
  while( true ) {
    if ((param_1->Elements).ArrayNum != iVar4) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar6 == pFVar7) break;
    iVar3 = *(int *)(pFVar6 + 8) + -1;
    if (*(int *)(pFVar6 + 8) == 0) {
      pwVar5 = L"";
      iVar3 = 0;
    }
    else {
      pwVar5 = *(wchar_t **)pFVar6;
    }
    uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
    uVar1 = uVar1 - uVar2 ^ uVar2 >> 0xd;
    uVar8 = (-0x61c88647 - uVar1) - uVar2 ^ uVar1 << 8;
    uVar2 = (uVar2 - uVar8) - uVar1 ^ uVar8 >> 0xd;
    uVar1 = (uVar1 - uVar2) - uVar8 ^ uVar2 >> 0xc;
    uVar8 = (uVar8 - uVar1) - uVar2 ^ uVar1 << 0x10;
    uVar2 = (uVar2 - uVar8) - uVar1 ^ uVar8 >> 5;
    uVar1 = (uVar1 - uVar2) - uVar8 ^ uVar2 >> 3;
    uVar8 = (uVar8 - uVar1) - uVar2 ^ uVar1 << 10;
    uVar1 = (uVar2 - uVar8) - uVar1 ^ uVar8 >> 0xf;
    pFVar6 = pFVar6 + 0x10;
  }
  iVar4 = uVar1 - param_1->bExpandedByDefault;
  uVar2 = 0x9e3779b9 - uVar1 ^ iVar4 * 0x100;
  uVar8 = (param_1->bExpandedByDefault - uVar2) - iVar4 ^ uVar2 >> 0xd;
  uVar1 = (iVar4 - uVar8) - uVar2 ^ uVar8 >> 0xc;
  uVar2 = (uVar2 - uVar1) - uVar8 ^ uVar1 << 0x10;
  uVar8 = (uVar8 - uVar1) - uVar2 ^ uVar2 >> 5;
  uVar1 = (uVar1 - uVar8) - uVar2 ^ uVar8 >> 3;
  uVar2 = (uVar2 - uVar1) - uVar8 ^ uVar1 << 10;
  return (uVar8 - uVar2) - uVar1 ^ uVar2 >> 0xf;
}

// GetTypeHash @ 14a0ef9b0

uint __cdecl GetTypeHash(FRigVMTemplate *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  atomic<unsigned_int> aVar3;
  code *pcVar4;
  bool bVar5;
  atomic<unsigned_int> aVar6;
  uint uVar7;
  FRigVMRegistryHandle local_28;
  char local_20;
  FRigVMRegistry_RWLock *local_18;
  atomic<FRigVMRegistry_NoLock::ELockType> local_10;
  
  local_28.Registry = (FRigVMRegistry_NoLock *)FRigVMRegistry_RWLock::Get();
  local_20 = '\x01';
  local_10 = (atomic<FRigVMRegistry_NoLock::ELockType>)0x0;
  aVar3 = ((FRigVMRegistry_RWLock *)local_28.Registry)->WriteLockOwnerThread;
  local_18 = (FRigVMRegistry_RWLock *)local_28.Registry;
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar3 != aVar6) {
    AcquireSRWLockShared((PSRWLOCK)&local_18->Lock);
  }
  LOCK();
  paVar1 = &local_18->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x0) {
    LOCK();
    local_18->LockType = local_10;
    UNLOCK();
  }
  else if ((local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) &&
          (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_4767296351463538103>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                              ,0x249,"DesiredLockType != LockType_Write"), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return uVar7;
  }
  if (((FRigVMRegistry_RWLock *)local_28.Registry != (FRigVMRegistry_RWLock *)param_1->OwnerRegistry
      ) && (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("InRegistry.GetRegistry() == OwnerRegistry",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                               ,0xb7c,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return uVar7;
  }
  uVar7 = GetTypeHash_NoLock(param_1,&local_28);
  if (local_20 != '\0') {
    LOCK();
    paVar1 = &local_18->LockCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      LOCK();
      local_18->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
      UNLOCK();
    }
    if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x0) {
      if (((int)aVar2 + -1 < 0) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4767296351463538070>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                             ,0x26a,"CurrentLockCount >= 0"), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return uVar7;
      }
      aVar3 = local_18->WriteLockOwnerThread;
      aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
      if (aVar3 != aVar6) {
        ReleaseSRWLockShared((PSRWLOCK)&local_18->Lock);
        return uVar7;
      }
    }
    else if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) {
      if ((aVar2 != (atomic<int>)0x1) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4767296351463538060>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                             ,0x274,"CurrentLockCount == 0"), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return uVar7;
      }
      LOCK();
      local_18->WriteLockOwnerThread = (atomic<unsigned_int>)0xffffffff;
      UNLOCK();
      ReleaseSRWLockExclusive((PSRWLOCK)&local_18->Lock);
    }
  }
  return uVar7;
}

// GetTypeHash_NoLock @ 14a0efbb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __cdecl GetTypeHash_NoLock(FRigVMTemplate *param_1,FRigVMRegistryHandle *param_2)

{
  ERigVMPinDirection EVar1;
  int iVar2;
  uint uVar3;
  FString *pFVar4;
  FRigVMDispatchFactory *this;
  FName this_00;
  int iVar5;
  uint uVar6;
  undefined ***pppuVar7;
  uint uVar8;
  FRigVMTemplateArgument *pFVar9;
  FRigVMTemplateArgument *this_01;
  int iVar10;
  uint uVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  FString local_a0;
  FString local_90;
  code *local_78 [2];
  undefined **local_68;
  FString *local_60;
  FRigVMRegistryHandle *local_58;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_c8;
  uVar3 = param_1->Hash;
  if (uVar3 == 0xffffffff) {
    pFVar4 = FName::ToString(&param_1->Notation,&local_a0);
    pwVar13 = L"";
    iVar10 = (pFVar4->Data).ArrayNum;
    iVar5 = iVar10 + -1;
    if (iVar10 == 0) {
      pwVar12 = L"";
      iVar5 = 0;
    }
    else {
      pwVar12 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar12);
    if ((void *)CONCAT44(local_a0.Data.AllocatorInstance.Data._4_4_,
                         (uint)local_a0.Data.AllocatorInstance.Data) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_a0.Data.AllocatorInstance.Data._4_4_,
                                     (uint)local_a0.Data.AllocatorInstance.Data));
    }
    iVar5 = (param_1->Arguments).ArrayNum;
    this_01 = (FRigVMTemplateArgument *)(param_1->Arguments).AllocatorInstance.Data;
    pFVar9 = this_01 + iVar5;
    while( true ) {
      if ((param_1->Arguments).ArrayNum != iVar5) {
        `TCheckedPointerIterator<FRigVMTemplateArgument_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_a8);
      }
      if (this_01 == pFVar9) break;
      pFVar4 = FName::ToString(&this_01->Name,&local_90);
      iVar2 = (pFVar4->Data).ArrayNum;
      iVar10 = iVar2 + -1;
      if (iVar2 == 0) {
        pwVar12 = L"";
        iVar10 = 0;
      }
      else {
        pwVar12 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      local_a0.Data.AllocatorInstance.Data._0_4_ =
           FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar12);
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      EVar1 = this_01->Direction;
      iVar10 = (uint)local_a0.Data.AllocatorInstance.Data - EVar1;
      uVar6 = (-0x61c88647 - (uint)EVar1) - iVar10 ^ iVar10 * 0x100;
      uVar8 = (EVar1 - uVar6) - iVar10 ^ uVar6 >> 0xd;
      uVar11 = (iVar10 - uVar8) - uVar6 ^ uVar8 >> 0xc;
      uVar6 = (uVar6 - uVar8) - uVar11 ^ uVar11 << 0x10;
      uVar8 = (uVar8 - uVar6) - uVar11 ^ uVar6 >> 5;
      uVar11 = (uVar11 - uVar8) - uVar6 ^ uVar8 >> 3;
      uVar6 = (uVar6 - uVar11) - uVar8 ^ uVar11 << 10;
      local_50 = (undefined ***)0x0;
      local_a0.Data.AllocatorInstance.Data._0_4_ = (uVar8 - uVar6) - uVar11 ^ uVar6 >> 0xf;
      local_68 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`GetTypeHash_NoLock'::`2'::<lambda_1>,0,0>::_vftable_;
      local_60 = &local_a0;
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`GetTypeHash_NoLock'::__l2::<lambda_1>,bool,TRigVMTypeIndex>
                    ::Call;
      local_58 = param_2;
      FRigVMTemplateArgument::ForEachType
                (this_01,(TFunction<bool___cdecl(TRigVMTypeIndex)> *)local_78,param_2);
      if (local_78[0] != (code *)0x0) {
        pppuVar7 = &local_68;
        if (local_50 != (undefined ***)0x0) {
          pppuVar7 = local_50;
        }
        (*(code *)(*pppuVar7)[2])();
      }
      uVar6 = uVar3 - (uint)local_a0.Data.AllocatorInstance.Data ^
              (uint)local_a0.Data.AllocatorInstance.Data >> 0xd;
      uVar3 = (-0x61c88647 - uVar6) - (uint)local_a0.Data.AllocatorInstance.Data ^ uVar6 << 8;
      uVar8 = ((uint)local_a0.Data.AllocatorInstance.Data - uVar3) - uVar6 ^ uVar3 >> 0xd;
      uVar6 = (uVar6 - uVar3) - uVar8 ^ uVar8 >> 0xc;
      uVar3 = (uVar3 - uVar6) - uVar8 ^ uVar6 << 0x10;
      uVar8 = (uVar8 - uVar3) - uVar6 ^ uVar3 >> 5;
      uVar6 = (uVar6 - uVar8) - uVar3 ^ uVar8 >> 3;
      uVar3 = (uVar3 - uVar6) - uVar8 ^ uVar6 << 10;
      uVar3 = (uVar8 - uVar3) - uVar6 ^ uVar3 >> 0xf;
      this_01 = this_01 + 1;
    }
    this = FRigVMTemplate::GetDispatchFactory_NoLock(param_1,param_2);
    if (this != (FRigVMDispatchFactory *)0x0) {
      this_00 = FRigVMDispatchFactory::GetFactoryName(this);
      pFVar4 = FName::ToString((FName *)this_00,&local_90);
      iVar10 = (pFVar4->Data).ArrayNum;
      iVar5 = iVar10 + -1;
      if (iVar10 == 0) {
        iVar5 = 0;
      }
      else {
        pwVar13 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar13);
      uVar3 = uVar3 - uVar6 ^ uVar6 >> 0xd;
      uVar8 = (-0x61c88647 - uVar3) - uVar6 ^ uVar3 << 8;
      uVar6 = (uVar6 - uVar8) - uVar3 ^ uVar8 >> 0xd;
      uVar3 = (uVar3 - uVar6) - uVar8 ^ uVar6 >> 0xc;
      uVar8 = (uVar8 - uVar3) - uVar6 ^ uVar3 << 0x10;
      uVar6 = (uVar6 - uVar8) - uVar3 ^ uVar8 >> 5;
      uVar3 = (uVar3 - uVar6) - uVar8 ^ uVar6 >> 3;
      uVar8 = (uVar8 - uVar3) - uVar6 ^ uVar3 << 10;
      uVar3 = (uVar6 - uVar8) - uVar3 ^ uVar8 >> 0xf;
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
    }
    param_1->Hash = uVar3;
  }
  return uVar3;
}

// GetTypeHash_NoLock @ 14a0eff40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __cdecl GetTypeHash_NoLock(FRigVMTemplateArgument *param_1,FRigVMRegistryHandle *param_2)

{
  ERigVMPinDirection EVar1;
  int iVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  undefined ***pppuVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_88 [32];
  uint local_68 [2];
  FString local_60;
  code *local_48 [2];
  undefined **local_38;
  uint *local_30;
  FRigVMRegistryHandle *local_28;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  pFVar3 = FName::ToString(&param_1->Name,&local_60);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar7 = iVar2 + -1;
  if (iVar2 == 0) {
    pwVar4 = L"";
    iVar7 = 0;
  }
  else {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  local_68[0] = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar4);
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  EVar1 = param_1->Direction;
  iVar7 = local_68[0] - EVar1;
  local_20 = (undefined ***)0x0;
  uVar6 = (-0x61c88647 - iVar7) - (uint)EVar1 ^ iVar7 * 0x100;
  uVar9 = (EVar1 - uVar6) - iVar7 ^ uVar6 >> 0xd;
  uVar8 = (iVar7 - uVar9) - uVar6 ^ uVar9 >> 0xc;
  uVar6 = (uVar6 - uVar8) - uVar9 ^ uVar8 << 0x10;
  uVar9 = (uVar9 - uVar8) - uVar6 ^ uVar6 >> 5;
  uVar8 = (uVar8 - uVar9) - uVar6 ^ uVar9 >> 3;
  uVar6 = (uVar6 - uVar8) - uVar9 ^ uVar8 << 10;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`GetTypeHash_NoLock'::`2'::<lambda_1>,0,0>::_vftable_;
  local_68[0] = (uVar9 - uVar6) - uVar8 ^ uVar6 >> 0xf;
  local_30 = local_68;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`GetTypeHash_NoLock'::__l2::<lambda_1>,bool,TRigVMTypeIndex>::
                Call;
  local_28 = param_2;
  FRigVMTemplateArgument::ForEachType
            (param_1,(TFunction<bool___cdecl(TRigVMTypeIndex)> *)local_48,param_2);
  if (local_48[0] != (code *)0x0) {
    pppuVar5 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar5 = local_20;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  return local_68[0];
}

// GetUniqueStructTypeName @ 14a0f29d0

FString * __cdecl
RigVMTypeUtils::GetUniqueStructTypeName(FString *__return_storage_ptr__,UScriptStruct *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FGuid *this;
  FString local_28;
  undefined1 local_18 [16];
  
  if (param_1 != (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      this = (FGuid *)(**(code **)(param_1->_padding_ + 0x380))(param_1,local_18);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `class_FString___cdecl_RigVMTypeUtils::GetUniqueStructTypeName(FGuid_const&___ptr64)'::
           __l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`class_FString___cdecl_RigVMTypeUtils::GetUniqueStructTypeName(FGuid_const&___ptr64)'
                               ::__l2::_thread_safe_static_guard_0__),
         `class_FString___cdecl_RigVMTypeUtils::GetUniqueStructTypeName(FGuid_const&___ptr64)'::__l2
         ::_thread_safe_static_guard_0__ == -1)) {
        ::FString::FString(&`class_FString___cdecl_RigVMTypeUtils::GetUniqueStructTypeName(FGuid_const&___ptr64)'
                            ::__l2::UserDefinedStructPrefix,L"FUserDefinedStruct_");
        atexit(`RigVMTypeUtils::GetUniqueStructTypeName'::__l2::
               _dynamic_atexit_destructor_for__UserDefinedStructPrefix__);
        _Init_thread_footer(&`class_FString___cdecl_RigVMTypeUtils::GetUniqueStructTypeName(FGuid_const&___ptr64)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      FGuid::AppendString(this,&local_28,Digits);
      ::FString::ConcatFF(__return_storage_ptr__,
                          &`class_FString___cdecl_RigVMTypeUtils::GetUniqueStructTypeName(FGuid_const&___ptr64)'
                           ::__l2::UserDefinedStructPrefix,&local_28);
      if (local_28.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  (**(code **)(param_1->_padding_ + 0x388))(param_1,__return_storage_ptr__,0);
  return __return_storage_ptr__;
}

// GetWildCardCPPType @ 14a0f3500

FString * __cdecl RigVMTypeUtils::GetWildCardCPPType(void)

{
  UScriptStruct *pUVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pUVar1 = FRigVMUnknownType::StaticStruct();
      GetUniqueStructTypeName(&WildCardCPPType,pUVar1);
      atexit(`RigVMTypeUtils::GetWildCardCPPType'::__l2::
             _dynamic_atexit_destructor_for__WildCardCPPType__);
      _Init_thread_footer(&::_TSS0);
      return &WildCardCPPType;
    }
  }
  return &WildCardCPPType;
}

// GetWildCardCPPTypeName @ 14a0f3590

FLazyName * __cdecl RigVMTypeUtils::GetWildCardCPPTypeName(void)

{
  FString *pFVar1;
  FName *pFVar2;
  wchar_t *pwVar3;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = GetWildCardCPPType();
      if ((pFVar1->Data).ArrayNum == 0) {
        pwVar3 = L"";
      }
      else {
        pwVar3 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
      }
      pFVar2 = ::FName::FName(local_res8,pwVar3);
      WildCardCPPTypeName.Either.PackedName = (ulonglong)*pFVar2 & 0xffffffff | 0x8000000000000000;
      WildCardCPPTypeName.Number = (*pFVar2).Number;
      WildCardCPPTypeName.LiteralType = None;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &WildCardCPPTypeName;
}

// GetWildCardCPPTypeObject @ 14a0f3640

UScriptStruct * __cdecl RigVMTypeUtils::GetWildCardCPPTypeObject(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      WildCardTypeObject = FRigVMUnknownType::StaticStruct();
      _Init_thread_footer(&::_TSS0);
    }
  }
  return WildCardTypeObject;
}

// IsUClassType @ 14a0f9e60

bool __cdecl RigVMTypeUtils::IsUClassType(FString *param_1)

{
  bool bVar1;
  size_t sVar2;
  
  sVar2 = wcslen(L"TSubclassOf<");
  bVar1 = ::FString::StartsWith(param_1,L"TSubclassOf<",(int)sVar2,IgnoreCase);
  return bVar1;
}

// ObjectFromCPPType @ 14a0fdf90

UObject * __cdecl
RigVMTypeUtils::ObjectFromCPPType
          (FString *param_1,bool param_2,FRigVMUserDefinedTypeResolver *param_3)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  size_t sVar5;
  FString *pFVar6;
  UObject *pUVar7;
  UObject *pUVar8;
  int iVar9;
  ForAnyElementType FVar10;
  longlong lVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ForAnyElementType FVar16;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  bVar2 = RequiresCPPTypeObject(param_1);
  if (!bVar2) {
    return (UObject *)0x0;
  }
  pUVar8 = (UObject *)0x0;
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_98.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar11 = (longlong)local_98.Data.ArrayNum;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_98.Data.ArrayNum == 0) {
    local_98.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_98.Data.ArrayNum,0,(ForAnyElementType *)&local_98,local_98.Data.ArrayNum,
               &local_98.Data.ArrayMax);
    memcpy(local_98.Data.AllocatorInstance.Data,_Src,lVar11 * 2);
  }
  while( true ) {
    sVar5 = wcslen(L"TArray<");
    bVar2 = ::FString::StartsWith(&local_98,L"TArray<",(int)sVar5,IgnoreCase);
    FVar10.Data = local_98.Data.AllocatorInstance.Data;
    if (!bVar2) break;
    iVar14 = local_98.Data.ArrayNum + -9;
    if (local_98.Data.ArrayNum == 0) {
      iVar14 = -8;
    }
    ::FString::Mid(&local_98,&local_88,7,iVar14);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    local_98.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
    local_98.Data.ArrayNum = local_88.Data.ArrayNum;
    local_98.Data.ArrayMax = local_88.Data.ArrayMax;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  lVar11 = (longlong)local_98.Data.ArrayNum;
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = local_98.Data.ArrayNum;
  if (local_98.Data.ArrayNum == 0) {
    local_a8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_98.Data.ArrayNum,0,(ForAnyElementType *)&local_a8,local_98.Data.ArrayNum,
               &local_a8.Data.ArrayMax);
    memcpy(local_a8.Data.AllocatorInstance.Data,FVar10.Data,lVar11 * 2);
  }
  sVar5 = wcslen(L"TSubclassOf<");
  bVar2 = ::FString::StartsWith(&local_a8,L"TSubclassOf<",(int)sVar5,IgnoreCase);
  piVar12 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar12 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&PrefixObjectPtr,L"TObjectPtr<");
    atexit(`RigVMTypeUtils::ObjectFromCPPType'::__l2::
           _dynamic_atexit_destructor_for__PrefixObjectPtr__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar12 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FString::FString(&PrefixSubclassOf,L"TSubclassOf<");
    atexit(`RigVMTypeUtils::ObjectFromCPPType'::__l2::
           _dynamic_atexit_destructor_for__PrefixSubclassOf__);
    _Init_thread_footer(&::_TSS1);
  }
  if ((*piVar12 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    ::FString::FString(&PrefixScriptInterface,L"TScriptInterface<");
    atexit(`RigVMTypeUtils::ObjectFromCPPType'::__l2::
           _dynamic_atexit_destructor_for__PrefixScriptInterface__);
    _Init_thread_footer(&::_TSS2);
  }
  iVar14 = PrefixObjectPtr.Data.ArrayNum + -1;
  FVar10.Data = PrefixObjectPtr.Data.AllocatorInstance.Data;
  if (PrefixObjectPtr.Data.ArrayNum == 0) {
    iVar14 = 0;
    FVar10.Data = (FScriptContainerElement *)L"";
  }
  bVar3 = ::FString::StartsWith(&local_a8,(wchar_t *)FVar10.Data,iVar14,IgnoreCase);
  iVar14 = 0;
  if (bVar3) {
    iVar15 = local_a8.Data.ArrayNum + -1;
    if (local_a8.Data.ArrayNum == 0) {
      iVar15 = iVar14;
    }
    iVar9 = PrefixObjectPtr.Data.ArrayNum;
    iVar4 = iVar9 + -1;
    if (iVar9 == 0) {
      iVar4 = iVar14;
    }
    if (iVar9 == 0) {
      iVar9 = 1;
    }
    pFVar6 = ::FString::Mid(&local_a8,&local_68,iVar9,(iVar15 - iVar4) + -2);
    local_58.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
    if (&local_a8 != pFVar6) {
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      local_a8.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.Data.ArrayNum = (pFVar6->Data).ArrayNum;
      local_a8.Data.ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
      local_58.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
    }
LAB_14a0fe366:
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  else {
    iVar15 = PrefixSubclassOf.Data.ArrayNum + -1;
    FVar10 = PrefixSubclassOf.Data.AllocatorInstance;
    if (PrefixSubclassOf.Data.ArrayNum == 0) {
      iVar15 = iVar14;
      FVar10.Data = (FScriptContainerElement *)L"";
    }
    bVar3 = ::FString::StartsWith(&local_a8,(wchar_t *)FVar10.Data,iVar15,IgnoreCase);
    if (bVar3) {
      iVar15 = local_a8.Data.ArrayNum + -1;
      if (local_a8.Data.ArrayNum == 0) {
        iVar15 = iVar14;
      }
      iVar9 = PrefixSubclassOf.Data.ArrayNum;
      iVar4 = iVar9 + -1;
      if (iVar9 == 0) {
        iVar4 = iVar14;
      }
      if (iVar9 == 0) {
        iVar9 = 1;
      }
      pFVar6 = ::FString::Mid(&local_a8,&local_58,iVar9,(iVar15 - iVar4) + -2);
      if (&local_a8 != pFVar6) {
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        local_a8.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
        (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_a8.Data.ArrayNum = (pFVar6->Data).ArrayNum;
        local_a8.Data.ArrayMax = (pFVar6->Data).ArrayMax;
        (pFVar6->Data).ArrayNum = 0;
        (pFVar6->Data).ArrayMax = 0;
      }
      goto LAB_14a0fe366;
    }
    sVar5 = wcslen(L"TScriptInterface<");
    bVar3 = ::FString::StartsWith(&local_a8,L"TScriptInterface<",(int)sVar5,IgnoreCase);
    if (bVar3) {
      iVar9 = PrefixScriptInterface.Data.ArrayNum;
      iVar15 = iVar9 + -1;
      if (iVar9 == 0) {
        iVar15 = 0;
      }
      iVar4 = local_a8.Data.ArrayNum + -1;
      if (local_a8.Data.ArrayNum == 0) {
        iVar4 = iVar14;
      }
      iVar13 = 1;
      if (iVar9 != 0) {
        iVar13 = iVar9;
      }
      pFVar6 = ::FString::Mid(&local_a8,&local_48,iVar13,(iVar4 - iVar15) + -2);
      local_58.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
      if (&local_a8 != pFVar6) {
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        local_a8.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
        (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_a8.Data.ArrayNum = (pFVar6->Data).ArrayNum;
        local_a8.Data.ArrayMax = (pFVar6->Data).ArrayMax;
        (pFVar6->Data).ArrayNum = 0;
        (pFVar6->Data).ArrayMax = 0;
        local_58.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
      }
      goto LAB_14a0fe366;
    }
  }
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_a8.Data.ArrayNum != 0) {
    FVar10.Data = local_a8.Data.AllocatorInstance.Data;
  }
  pUVar7 = FindObjectGlobally((wchar_t *)FVar10.Data,param_2);
  if (pUVar7 == (UObject *)0x0) {
    if (1 < local_a8.Data.ArrayNum) {
      iVar15 = local_a8.Data.ArrayNum + -1;
      if (local_a8.Data.ArrayNum == 0) {
        iVar15 = iVar14;
      }
      if ((iVar15 < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x107,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        pUVar8 = (UObject *)(*pcVar1)();
        return pUVar8;
      }
      if (*(short *)local_a8.Data.AllocatorInstance.Data != 0x46) {
        iVar15 = local_a8.Data.ArrayNum + -1;
        if (local_a8.Data.ArrayNum == 0) {
          iVar15 = iVar14;
        }
        if ((iVar15 < 1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                               ,0x107,
                               L"String index out of bounds: Index %i from a string with a length of %i"
                              ), bVar3)) {
          pcVar1 = (code *)swi(3);
          pUVar8 = (UObject *)(*pcVar1)();
          return pUVar8;
        }
        if (*(short *)local_a8.Data.AllocatorInstance.Data != 0x55) {
          iVar15 = local_a8.Data.ArrayNum + -1;
          if (local_a8.Data.ArrayNum == 0) {
            iVar15 = iVar14;
          }
          if ((iVar15 < 1) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValidIndex(Index)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                 ,0x107,
                                 L"String index out of bounds: Index %i from a string with a length of %i"
                                ), bVar3)) {
            pcVar1 = (code *)swi(3);
            pUVar8 = (UObject *)(*pcVar1)();
            return pUVar8;
          }
          if (*(short *)local_a8.Data.AllocatorInstance.Data != 0x41) goto LAB_14a0fe4ca;
        }
      }
      ::FString::RightChop(&local_a8,&local_78,1);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      local_a8.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
      local_a8.Data.ArrayMax = local_78.Data.ArrayMax;
      local_a8.Data.ArrayNum = local_78.Data.ArrayNum;
    }
LAB_14a0fe4ca:
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_a8.Data.ArrayNum != 0) {
      FVar10.Data = local_a8.Data.AllocatorInstance.Data;
    }
    pUVar7 = FindObjectGlobally((wchar_t *)FVar10.Data,param_2);
    if (pUVar7 == (UObject *)0x0) {
      iVar15 = local_98.Data.ArrayNum + -1;
      if (local_98.Data.ArrayNum == 0) {
        iVar15 = iVar14;
      }
      ::FString::AssignRange(&local_a8,(wchar_t *)local_98.Data.AllocatorInstance.Data,iVar15);
      pUVar7 = UserDefinedTypeFromCPPType(&local_a8,param_3);
      if (pUVar7 == (UObject *)0x0) {
        ::FString::Reset(param_1,0);
        goto LAB_14a0fe59c;
      }
    }
  }
  pUVar8 = pUVar7;
  pFVar6 = CPPTypeFromObject(&local_38,pUVar8,bVar2 ^ AsObject);
  if (&local_a8 != pFVar6) {
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    local_a8.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.Data.ArrayNum = (pFVar6->Data).ArrayNum;
    local_a8.Data.ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_a8.Data.ArrayNum != 0) {
    FVar10.Data = local_a8.Data.AllocatorInstance.Data;
  }
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_98.Data.ArrayNum != 0) {
    FVar16.Data = local_98.Data.AllocatorInstance.Data;
  }
  ::FString::ReplaceInline(param_1,(wchar_t *)FVar16.Data,(wchar_t *)FVar10.Data,IgnoreCase);
LAB_14a0fe59c:
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return pUVar8;
}

// PostProcessCPPType @ 14a1015d0

FString * __cdecl
RigVMTypeUtils::PostProcessCPPType
          (FString *__return_storage_ptr__,FString *param_1,UObject *param_2,
          FRigVMUserDefinedTypeResolver *param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  int iVar4;
  size_t sVar5;
  FString *pFVar6;
  longlong lVar7;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  ::FString::FString(__return_storage_ptr__,param_1);
  CleanupCPPType(__return_storage_ptr__);
  if (param_2 == (UObject *)0x0) {
    bVar3 = RequiresCPPTypeObject(__return_storage_ptr__);
    if (bVar3) {
      ObjectFromCPPType(__return_storage_ptr__,true,param_3);
    }
  }
  else {
    sVar5 = wcslen(L"TSubclassOf<");
    bVar3 = ::FString::StartsWith(__return_storage_ptr__,L"TSubclassOf<",(int)sVar5,IgnoreCase);
    pFVar6 = CPPTypeFromObject(&local_18,param_2,bVar3 ^ AsObject);
    if (__return_storage_ptr__ != pFVar6) {
      pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar6->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    iVar4 = (__return_storage_ptr__->Data).ArrayNum;
    iVar1 = (param_1->Data).ArrayNum;
    if (iVar4 == iVar1) {
      if (iVar4 < 2) {
        return __return_storage_ptr__;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data,
                         (wchar_t *)(param_1->Data).AllocatorInstance.Data);
      bVar3 = iVar4 == 0;
    }
    else {
      bVar3 = iVar4 + iVar1 == 1;
    }
    if (!bVar3) {
      local_48.Data.ArrayNum = (param_1->Data).ArrayNum;
      lVar7 = (longlong)local_48.Data.ArrayNum;
      pFVar2 = (param_1->Data).AllocatorInstance.Data;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_48.Data.ArrayNum == 0) {
        local_48.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_48,
                   local_48.Data.ArrayNum,&local_48.Data.ArrayMax);
        memcpy(local_48.Data.AllocatorInstance.Data,pFVar2,lVar7 * 2);
      }
      while( true ) {
        sVar5 = wcslen(L"TArray<");
        bVar3 = ::FString::StartsWith(&local_48,L"TArray<",(int)sVar5,IgnoreCase);
        if (!bVar3) break;
        local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_18.Data.ArrayNum = 0;
        local_18.Data.ArrayMax = 0;
        RigVMStringUtils::JoinStrings
                  (&local_38,&local_18,__return_storage_ptr__,L"TArray<",(wchar_t *)0x0,L">");
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
        if (__return_storage_ptr__ != &local_38) {
          pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          (__return_storage_ptr__->Data).AllocatorInstance.Data =
               local_38.Data.AllocatorInstance.Data;
          (__return_storage_ptr__->Data).ArrayNum = local_38.Data.ArrayNum;
          (__return_storage_ptr__->Data).ArrayMax = local_38.Data.ArrayMax;
          local_38.Data.ArrayNum = 0;
          local_38.Data.ArrayMax = 0;
          local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        iVar4 = local_48.Data.ArrayNum + -9;
        if (local_48.Data.ArrayNum == 0) {
          iVar4 = -8;
        }
        ::FString::Mid(&local_48,&local_28,7,iVar4);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        local_48.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
        local_48.Data.ArrayNum = local_28.Data.ArrayNum;
        local_48.Data.ArrayMax = local_28.Data.ArrayMax;
        local_28.Data.ArrayNum = 0;
        local_28.Data.ArrayMax = 0;
        local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// RequiresCPPTypeObject @ 14a10a440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __cdecl RigVMTypeUtils::RequiresCPPTypeObject(FString *param_1)

{
  ulonglong *puVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  ForAnyElementType FVar7;
  ForAnyElementType FVar8;
  FScriptContainerElement *pFVar9;
  ulonglong *puVar10;
  longlong lVar11;
  FString *pFVar12;
  int iVar13;
  int *piVar14;
  bool bVar15;
  undefined1 auStackY_1b8 [32];
  undefined1 local_178 [16];
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  piVar14 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar14 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&local_108,L"F");
    ::FString::FString(&local_f8,L"TArray<F");
    ::FString::FString(&local_e8,L"TArray<TArray<F");
    ::FString::FString(&local_d8,L"E");
    ::FString::FString(&local_c8,L"TArray<E");
    ::FString::FString(&local_b8,L"TArray<TArray<E");
    ::FString::FString(&local_a8,L"U");
    ::FString::FString(&local_98,L"TArray<U");
    ::FString::FString(&local_88,L"TArray<TArray<U");
    ::FString::FString(&local_78,L"TObjectPtr<");
    ::FString::FString(&local_68,L"TArray<TObjectPtr<");
    ::FString::FString(&local_58,L"TArray<TArray<TObjectPtr<");
    ::FString::FString(&local_48,L"TScriptInterface<TSubclassOf<");
    lVar6 = 0xd;
    PrefixesRequiringCPPTypeObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    PrefixesRequiringCPPTypeObject.ArrayNum = 0xd;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0xd,0,&PrefixesRequiringCPPTypeObject.AllocatorInstance,0xd,
               &PrefixesRequiringCPPTypeObject.ArrayMax);
    ConstructItems<FString,FString,int>
              (PrefixesRequiringCPPTypeObject.AllocatorInstance.Data,&local_108,0xd);
    puVar10 = local_38;
    do {
      puVar1 = puVar10 + -2;
      puVar10 = puVar10 + -2;
      lVar6 = lVar6 + -1;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
    } while (lVar6 != 0);
    atexit(`RigVMTypeUtils::RequiresCPPTypeObject'::__l2::
           _dynamic_atexit_destructor_for__PrefixesRequiringCPPTypeObject__);
    _Init_thread_footer(&::_TSS0);
  }
  lVar6 = 6;
  if ((*piVar14 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FString::FString(&local_168,L"UInt");
    ::FString::FString(&local_158,L"TArray<UInt");
    ::FString::FString(&local_148,L"TArray<TArray<UInt");
    ::FString::FString(&local_138,L"uint");
    ::FString::FString(&local_128,L"TArray<uint");
    ::FString::FString(&local_118,L"TArray<TArray<uint");
    PrefixesNotRequiringCPPTypeObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    PrefixesNotRequiringCPPTypeObject.ArrayNum = 6;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,6,0,&PrefixesNotRequiringCPPTypeObject.AllocatorInstance,6,
               &PrefixesNotRequiringCPPTypeObject.ArrayMax);
    ConstructItems<FString,FString,int>
              (PrefixesNotRequiringCPPTypeObject.AllocatorInstance.Data,&local_168,6);
    pFVar12 = &local_108;
    lVar11 = 6;
    do {
      pFVar9 = pFVar12[-1].Data.AllocatorInstance.Data;
      pFVar12 = pFVar12 + -1;
      lVar11 = lVar11 + -1;
      if (pFVar9 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar9);
      }
    } while (lVar11 != 0);
    atexit(`RigVMTypeUtils::RequiresCPPTypeObject'::__l2::
           _dynamic_atexit_destructor_for__PrefixesNotRequiringCPPTypeObject__);
    _Init_thread_footer(&::_TSS1);
  }
  if ((*piVar14 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    ::FString::FString(&local_168,L"FString");
    ::FString::FString(&local_158,L"TArray<FString>");
    ::FString::FString(&local_148,L"TArray<TArray<FString>>");
    ::FString::FString(&local_138,L"FName");
    ::FString::FString(&local_128,L"TArray<FName>");
    ::FString::FString(&local_118,L"TArray<TArray<FName>>");
    CPPTypesNotRequiringCPPTypeObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    CPPTypesNotRequiringCPPTypeObject.ArrayNum = 6;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,6,0,&CPPTypesNotRequiringCPPTypeObject.AllocatorInstance,6,
               &CPPTypesNotRequiringCPPTypeObject.ArrayMax);
    ConstructItems<FString,FString,int>
              (CPPTypesNotRequiringCPPTypeObject.AllocatorInstance.Data,&local_168,6);
    pFVar12 = &local_108;
    do {
      pFVar9 = pFVar12[-1].Data.AllocatorInstance.Data;
      pFVar12 = pFVar12 + -1;
      lVar6 = lVar6 + -1;
      if (pFVar9 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar9);
      }
    } while (lVar6 != 0);
    atexit(`RigVMTypeUtils::RequiresCPPTypeObject'::__l2::
           _dynamic_atexit_destructor_for__CPPTypesNotRequiringCPPTypeObject__);
    _Init_thread_footer(&::_TSS2);
  }
  pFVar9 = CPPTypesNotRequiringCPPTypeObject.AllocatorInstance.Data +
           (longlong)CPPTypesNotRequiringCPPTypeObject.ArrayNum * 0x10;
  FVar8.Data = PrefixesNotRequiringCPPTypeObject.AllocatorInstance.Data;
  iVar3 = PrefixesNotRequiringCPPTypeObject.ArrayNum;
  FVar7.Data = CPPTypesNotRequiringCPPTypeObject.AllocatorInstance.Data;
  while( true ) {
    PrefixesNotRequiringCPPTypeObject.AllocatorInstance.Data = FVar8.Data;
    PrefixesNotRequiringCPPTypeObject.ArrayNum = iVar3;
    if (FVar7.Data == pFVar9) {
      uVar4 = (ulonglong)iVar3;
      pFVar9 = FVar8.Data + uVar4 * 0x10;
      while( true ) {
        if ((int)uVar4 != iVar3) {
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_178);
        }
        iVar2 = PrefixesRequiringCPPTypeObject.ArrayNum;
        iVar13 = 0;
        if (FVar8.Data == pFVar9) break;
        if (*(int *)(FVar8.Data + 8) == 0) {
          pwVar5 = L"";
        }
        else {
          pwVar5 = *(wchar_t **)FVar8.Data;
          iVar13 = *(int *)(FVar8.Data + 8) + -1;
        }
        bVar15 = ::FString::StartsWith(param_1,pwVar5,iVar13,CaseSensitive);
        if (bVar15) {
          return false;
        }
        uVar4 = (ulonglong)(uint)PrefixesNotRequiringCPPTypeObject.ArrayNum;
        FVar8.Data = FVar8.Data + 0x10;
      }
      uVar4 = (ulonglong)PrefixesRequiringCPPTypeObject.ArrayNum;
      pFVar9 = PrefixesRequiringCPPTypeObject.AllocatorInstance.Data + uVar4 * 0x10;
      FVar8.Data = PrefixesRequiringCPPTypeObject.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar4 != iVar2) {
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_178);
        }
        if (FVar8.Data == pFVar9) break;
        if (*(int *)(FVar8.Data + 8) == 0) {
          pwVar5 = L"";
          iVar3 = iVar13;
        }
        else {
          pwVar5 = *(wchar_t **)FVar8.Data;
          iVar3 = *(int *)(FVar8.Data + 8) + -1;
        }
        bVar15 = ::FString::StartsWith(param_1,pwVar5,iVar3,CaseSensitive);
        if (bVar15) {
          return true;
        }
        uVar4 = (ulonglong)(uint)PrefixesRequiringCPPTypeObject.ArrayNum;
        FVar8.Data = FVar8.Data + 0x10;
      }
      return false;
    }
    iVar13 = *(int *)(FVar7.Data + 8);
    iVar2 = (param_1->Data).ArrayNum;
    if (iVar13 == iVar2) {
      if (iVar13 < 2) {
        return false;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp
                        (*(wchar_t **)FVar7.Data,(wchar_t *)(param_1->Data).AllocatorInstance.Data);
      bVar15 = iVar3 == 0;
    }
    else {
      bVar15 = iVar13 + iVar2 == 1;
    }
    if (bVar15) break;
    FVar7.Data = FVar7.Data + 0x10;
    FVar8.Data = PrefixesNotRequiringCPPTypeObject.AllocatorInstance.Data;
    iVar3 = PrefixesNotRequiringCPPTypeObject.ArrayNum;
  }
  return false;
}

// Z_Construct_UClass_URigVMGraphFunctionHost_NoRegister @ 14a116b30

UClass * __cdecl Z_Construct_UClass_URigVMGraphFunctionHost_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URigVMGraphFunctionHost.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/RigVM",L"RigVMGraphFunctionHost",
               &Z_Registration_Info_UClass_URigVMGraphFunctionHost.InnerSingleton,
               URigVMGraphFunctionHost::StaticRegisterNativesURigVMGraphFunctionHost,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<URigVMGraphFunctionHost>,
               InternalVTableHelperCtorCaller<URigVMGraphFunctionHost>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URigVMGraphFunctionHost.InnerSingleton;
}

// Z_Construct_UClass_URigVMMemoryStorageGeneratorClass_NoRegister @ 14a116bf0

UClass * __cdecl Z_Construct_UClass_URigVMMemoryStorageGeneratorClass_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URigVMMemoryStorageGeneratorClass.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UClass::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/RigVM",L"RigVMMemoryStorageGeneratorClass",
               &Z_Registration_Info_UClass_URigVMMemoryStorageGeneratorClass.InnerSingleton,
               URigVMMemoryStorageGeneratorClass::
               StaticRegisterNativesURigVMMemoryStorageGeneratorClass,0x248,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<URigVMMemoryStorageGeneratorClass>,
               InternalVTableHelperCtorCaller<URigVMMemoryStorageGeneratorClass>,local_res8,
               UClass::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URigVMMemoryStorageGeneratorClass.InnerSingleton;
}

// Z_Construct_UClass_URigVMMemoryStorage_NoRegister @ 14a116cb0

UClass * __cdecl Z_Construct_UClass_URigVMMemoryStorage_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URigVMMemoryStorage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/RigVM",L"RigVMMemoryStorage",
               &Z_Registration_Info_UClass_URigVMMemoryStorage.InnerSingleton,
               URigVMMemoryStorage::StaticRegisterNativesURigVMMemoryStorage,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<URigVMMemoryStorage>,
               InternalVTableHelperCtorCaller<URigVMMemoryStorage>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URigVMMemoryStorage.InnerSingleton;
}

// Z_Construct_UClass_URigVMNativized_NoRegister @ 14a116d60

UClass * __cdecl Z_Construct_UClass_URigVMNativized_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URigVMNativized.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/RigVM",L"RigVMNativized",
               &Z_Registration_Info_UClass_URigVMNativized.InnerSingleton,
               URigVMNativized::StaticRegisterNativesURigVMNativized,0x3d8,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<URigVMNativized>,InternalVTableHelperCtorCaller<URigVMNativized>,
               local_res8,URigVM::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URigVMNativized.InnerSingleton;
}

// Z_Construct_UEnum_RigVM_ERigVMFunctionArgumentDirection @ 14a116e20

UEnum * __cdecl Z_Construct_UEnum_RigVM_ERigVMFunctionArgumentDirection(void)

{
  if (Z_Registration_Info_UEnum_ERigVMFunctionArgumentDirection.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERigVMFunctionArgumentDirection.InnerSingleton,
               &Z_Construct_UEnum_RigVM_ERigVMFunctionArgumentDirection_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERigVMFunctionArgumentDirection.InnerSingleton;
}

// Z_Construct_UScriptStruct_FRigVMBranchInfo @ 14a116e60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMBranchInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMBranchInfo.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMBranchInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMBranchInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMBranchInfo.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMBranchInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMGraphFunctionHeaderArray @ 14a116ee0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMGraphFunctionHeaderArray(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMGraphFunctionHeaderArray.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMGraphFunctionHeaderArray.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMGraphFunctionHeaderArray_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMGraphFunctionHeaderArray.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMGraphFunctionHeaderArray.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMGraphFunctionStore @ 14a116f60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMGraphFunctionStore(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMGraphFunctionStore.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMGraphFunctionStore.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMGraphFunctionStore_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMGraphFunctionStore.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMGraphFunctionStore.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMInstructionSetExecuteState @ 14a116fe0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMInstructionSetExecuteState(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMInstructionSetExecuteState.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMInstructionSetExecuteState.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMInstructionSetExecuteState_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMInstructionSetExecuteState.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMInstructionSetExecuteState.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMInstructionVisitInfo @ 14a117060

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMInstructionVisitInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMInstructionVisitInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMInstructionVisitInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMInstructionVisitInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMInstructionVisitInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMInstructionVisitInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMMemoryContainer @ 14a1170e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMMemoryContainer(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMMemoryContainer.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMMemoryContainer.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMMemoryContainer.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FRigVMMemoryContainer.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMMemoryStorageStruct @ 14a117160

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMMemoryStorageStruct(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMMemoryStorageStruct.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMMemoryStorageStruct.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMMemoryStorageStruct_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMMemoryStorageStruct.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMMemoryStorageStruct.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMProfilingInfo @ 14a1171e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMProfilingInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMProfilingInfo.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMProfilingInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMProfilingInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMProfilingInfo.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FRigVMProfilingInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMStructMutable @ 14a117260

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMStructMutable(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMStructMutable.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMStructMutable.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMStructMutable_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMStructMutable.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FRigVMStructMutable.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMTemplateArgumentType @ 14a1172e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMTemplateArgumentType(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMTemplateArgumentType.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMTemplateArgumentType.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMTemplateArgumentType_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMTemplateArgumentType.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMTemplateArgumentType.InnerSingleton;
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

// Empty'' @ 15041b6f0

void __cdecl `dynamic_atexit_destructor_for_'FRigVMPropertyPath::Empty__(void)

{
  if (FRigVMPropertyPath::Empty.Segments.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FRigVMPropertyPath::Empty.Segments.AllocatorInstance.Data);
  }
  if (FRigVMPropertyPath::Empty.Path.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(FRigVMPropertyPath::Empty.Path.Data.AllocatorInstance.Data);
    return;
  }
  return;
}

// EmptyProperties'' @ 15041b730

void __cdecl `dynamic_atexit_destructor_for_'FRigVMMemoryStorageStruct::EmptyProperties__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FRigVMMemoryStorageStruct::EmptyProperties.AllocatorInstance.Data;
  if (FRigVMMemoryStorageStruct::EmptyProperties.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FRigVMMemoryStorageStruct::EmptyProperties.AllocatorInstance.Data !=
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

// EmptyProperties'' @ 15041b750

void __cdecl `dynamic_atexit_destructor_for_'URigVMMemoryStorage::EmptyProperties__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = URigVMMemoryStorage::EmptyProperties.AllocatorInstance.Data;
  if (URigVMMemoryStorage::EmptyProperties.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (URigVMMemoryStorage::EmptyProperties.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
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

// EmptyPropertyPaths'' @ 15041b770

void __cdecl `dynamic_atexit_destructor_for_'FRigVMMemoryStorageStruct::EmptyPropertyPaths__(void)

{
  DestructItems<FRigVMPropertyPath,int>
            ((FRigVMPropertyPath *)
             FRigVMMemoryStorageStruct::EmptyPropertyPaths.AllocatorInstance.Data,
             FRigVMMemoryStorageStruct::EmptyPropertyPaths.ArrayNum);
  if (FRigVMMemoryStorageStruct::EmptyPropertyPaths.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FRigVMMemoryStorageStruct::EmptyPropertyPaths.AllocatorInstance.Data);
    return;
  }
  return;
}

// EmptyPropertyPaths'' @ 15041b7b0

void __cdecl `dynamic_atexit_destructor_for_'URigVMMemoryStorage::EmptyPropertyPaths__(void)

{
  DestructItems<FRigVMPropertyPath,int>
            ((FRigVMPropertyPath *)URigVMMemoryStorage::EmptyPropertyPaths.AllocatorInstance.Data,
             URigVMMemoryStorage::EmptyPropertyPaths.ArrayNum);
  if (URigVMMemoryStorage::EmptyPropertyPaths.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(URigVMMemoryStorage::EmptyPropertyPaths.AllocatorInstance.Data);
    return;
  }
  return;
}

// FindFunctionHeaderFromPathFunc'' @ 15041b7f0

void __cdecl
`dynamic_atexit_destructor_for_'FRigVMGraphFunctionHeader::FindFunctionHeaderFromPathFunc__(void)

{
  longlong *plVar1;
  
  if (FRigVMGraphFunctionHeader::FindFunctionHeaderFromPathFunc._0_8_ != 0) {
    plVar1 = (longlong *)&FRigVMGraphFunctionHeader::FindFunctionHeaderFromPathFunc.field_0x10;
    if (FRigVMGraphFunctionHeader::FindFunctionHeaderFromPathFunc._40_8_ != 0) {
      plVar1 = (longlong *)FRigVMGraphFunctionHeader::FindFunctionHeaderFromPathFunc._40_8_;
    }
                    /* WARNING: Could not recover jumptable at 0x00015041b812. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// GetFunctionHostFromObjectFunc'' @ 15041b820

void __cdecl
`dynamic_atexit_destructor_for_'FRigVMGraphFunctionData::GetFunctionHostFromObjectFunc__(void)

{
  longlong *plVar1;
  
  if (FRigVMGraphFunctionData::GetFunctionHostFromObjectFunc._0_8_ != 0) {
    plVar1 = (longlong *)&FRigVMGraphFunctionData::GetFunctionHostFromObjectFunc.field_0x10;
    if (FRigVMGraphFunctionData::GetFunctionHostFromObjectFunc._40_8_ != 0) {
      plVar1 = (longlong *)FRigVMGraphFunctionData::GetFunctionHostFromObjectFunc._40_8_;
    }
                    /* WARNING: Could not recover jumptable at 0x00015041b842. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// GetVariantRefsByGuidFunc'' @ 15041b850

void __cdecl
`dynamic_atexit_destructor_for_'FRigVMGraphFunctionIdentifier::GetVariantRefsByGuidFunc__(void)

{
  longlong *plVar1;
  
  if (FRigVMGraphFunctionIdentifier::GetVariantRefsByGuidFunc._0_8_ != 0) {
    plVar1 = (longlong *)&FRigVMGraphFunctionIdentifier::GetVariantRefsByGuidFunc.field_0x10;
    if (FRigVMGraphFunctionIdentifier::GetVariantRefsByGuidFunc._40_8_ != 0) {
      plVar1 = (longlong *)FRigVMGraphFunctionIdentifier::GetVariantRefsByGuidFunc._40_8_;
    }
                    /* WARNING: Could not recover jumptable at 0x00015041b872. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'BaseStructures'' @ 15041b880

void __cdecl
`URigVMMemoryStorageGeneratorClass::AddProperty'::__l118::
_dynamic_atexit_destructor_for__BaseStructures__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = BaseStructures.AllocatorInstance.Data;
  if (BaseStructures.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (BaseStructures.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'CPPTypesNotRequiringCPPTypeObject'' @ 15041b8a0

void __cdecl
`RigVMTypeUtils::RequiresCPPTypeObject'::__l2::
_dynamic_atexit_destructor_for__CPPTypesNotRequiringCPPTypeObject__(void)

{
  DestructItems<FString,int>
            ((FString *)CPPTypesNotRequiringCPPTypeObject.AllocatorInstance.Data,
             CPPTypesNotRequiringCPPTypeObject.ArrayNum);
  if (CPPTypesNotRequiringCPPTypeObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(CPPTypesNotRequiringCPPTypeObject.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'CVarRigVMEnableLocalizedRegistry'' @ 15041b8e0

void __cdecl _dynamic_atexit_destructor_for__CVarRigVMEnableLocalizedRegistry__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRigVMEnableLocalizedRegistry);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRigVMUpdateDispatchFactoriesGreedily'' @ 15041b900

void __cdecl _dynamic_atexit_destructor_for__CVarRigVMUpdateDispatchFactoriesGreedily__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRigVMUpdateDispatchFactoriesGreedily);
  return;
}

// `dynamic_atexit_destructor_for_'ClassNames'' @ 15041b920

void __cdecl
`URigVMMemoryStorageGeneratorClass::GetClassName'::__l2::
_dynamic_atexit_destructor_for__ClassNames__(void)

{
  DestructItems<FString,int>((FString *)ClassNames.AllocatorInstance.Data,ClassNames.ArrayNum);
  if (ClassNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(ClassNames.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'CompatibleTypes'' @ 15041b960

void __cdecl
`FRigVMRegistry_NoLock::GetCompatibleTypes_NoLock'::__l5::
_dynamic_atexit_destructor_for__CompatibleTypes__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = CompatibleTypes.AllocatorInstance.Data;
  if (CompatibleTypes.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (CompatibleTypes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'CompatibleTypes'' @ 15041b980

void __cdecl
`FRigVMRegistry_NoLock::GetCompatibleTypes_NoLock'::__l8::
_dynamic_atexit_destructor_for__CompatibleTypes__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = CompatibleTypes.AllocatorInstance.Data;
  if (CompatibleTypes.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (CompatibleTypes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'CompatibleTypes'' @ 15041b9a0

void __cdecl
`FRigVMRegistry_NoLock::GetCompatibleTypes_NoLock'::__l11::
_dynamic_atexit_destructor_for__CompatibleTypes__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = CompatibleTypes.AllocatorInstance.Data;
  if (CompatibleTypes.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (CompatibleTypes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'CompatibleTypes'' @ 15041b9c0

void __cdecl
`FRigVMRegistry_NoLock::GetCompatibleTypes_NoLock'::__l14::
_dynamic_atexit_destructor_for__CompatibleTypes__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = CompatibleTypes.AllocatorInstance.Data;
  if (CompatibleTypes.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (CompatibleTypes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'CoreDispatchMap'' @ 15041b9e0

void __cdecl
`FRigVMRegistry_NoLock::FindTemplate_NoLock'::__l14::
_dynamic_atexit_destructor_for__CoreDispatchMap__(void)

{
  CoreDispatchMap._72_4_ = 0;
  if (CoreDispatchMap._64_8_ != 0) {
    FMemory::Free((void *)CoreDispatchMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&CoreDispatchMap);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultCategoryName'' @ 15041ba20

void __cdecl
`FRigVMPinCategory::GetDefaultCategoryName'::__l2::
_dynamic_atexit_destructor_for__DefaultCategoryName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DefaultCategoryName.Data.AllocatorInstance.Data;
  if (DefaultCategoryName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DefaultCategoryName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EmptyArray'' @ 15041ba40

void __cdecl
`FRigVMStruct::GetControlFlowBlocks_Impl'::__l2::_dynamic_atexit_destructor_for__EmptyArray__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::EmptyArray.AllocatorInstance.Data;
  if (::EmptyArray.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::EmptyArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EmptyBraces'' @ 15041ba60

void __cdecl
`URigVMMemoryStorageGeneratorClass::CreateStorageClass'::__l28::
_dynamic_atexit_destructor_for__EmptyBraces__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EmptyBraces.Data.AllocatorInstance.Data;
  if (EmptyBraces.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EmptyBraces.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EmptyBraces'' @ 15041ba80

void __cdecl UE::RigVM::RigVMCore::Private::_dynamic_atexit_destructor_for__EmptyBraces__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EmptyBraces.Data.AllocatorInstance.Data;
  if (EmptyBraces.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EmptyBraces.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EmptyEntries'' @ 15041baa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`URigVMNativized::GetEntryNames'::__l2::_dynamic_atexit_destructor_for__EmptyEntries__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _EmptyEntries;
  if (_EmptyEntries == (void *)0x0) {
    return;
  }
  if (_EmptyEntries != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// `dynamic_atexit_destructor_for_'EmptyInstructions'' @ 15041bac0

void __cdecl
`URigVMNativized::GetInstructions'::__l2::_dynamic_atexit_destructor_for__EmptyInstructions__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EmptyInstructions.Instructions.AllocatorInstance.Data;
  if (EmptyInstructions.Instructions.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EmptyInstructions.Instructions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EmptyPrefix'' @ 15041bae0

void __cdecl
`FRigVMTemplate::GetDirectionPrefix'::__l2::_dynamic_atexit_destructor_for__EmptyPrefix__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EmptyPrefix.Data.AllocatorInstance.Data;
  if (EmptyPrefix.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EmptyPrefix.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EmptyString'' @ 15041bb00

void __cdecl
`FRigVMStructUpgradeInfo::GetDefaultValueForPin'::__l2::
_dynamic_atexit_destructor_for__EmptyString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::EmptyString.Data.AllocatorInstance.Data;
  if (::EmptyString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::EmptyString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EmptyTypes'' @ 15041bb20

void __cdecl
`FRigVMRegistry_NoLock::GetCompatibleTypes_NoLock'::__l2::
_dynamic_atexit_destructor_for__EmptyTypes__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EmptyTypes.AllocatorInstance.Data;
  if (EmptyTypes.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EmptyTypes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'ExecuteContextArgs'' @ 15041bb40

void __cdecl
`FRigVMRegistry_NoLock::FindTemplate_NoLock'::__l27::
_dynamic_atexit_destructor_for__ExecuteContextArgs__(void)

{
  DestructItems<TTuple<FString,FString>,int>
            ((TTuple<FString,FString> *)ExecuteContextArgs.AllocatorInstance.Data,
             ExecuteContextArgs.ArrayNum);
  if (ExecuteContextArgs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(ExecuteContextArgs.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'ExpectedLoopBlocks'' @ 15041bb80

void __cdecl
`FRigVMStruct::IsForLoop'::__l23::_dynamic_atexit_destructor_for__ExpectedLoopBlocks__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ExpectedLoopBlocks.AllocatorInstance.Data;
  if (ExpectedLoopBlocks.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ExpectedLoopBlocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'IOPrefix'' @ 15041bba0

void __cdecl
`FRigVMTemplate::GetDirectionPrefix'::__l2::_dynamic_atexit_destructor_for__IOPrefix__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IOPrefix.Data.AllocatorInstance.Data;
  if (IOPrefix.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (IOPrefix.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'InPrefix'' @ 15041bbc0

void __cdecl
`FRigVMTemplate::GetDirectionPrefix'::__l2::_dynamic_atexit_destructor_for__InPrefix__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = InPrefix.Data.AllocatorInstance.Data;
  if (InPrefix.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (InPrefix.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'IntString'' @ 15041bbe0

void __cdecl
`URigVMMemoryStorageGeneratorClass::AddProperty'::__l89::_dynamic_atexit_destructor_for__IntString__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IntString.Data.AllocatorInstance.Data;
  if (IntString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (IntString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'MathTypes'' @ 15041bc00

void __cdecl
`FRigVMRegistry_NoLock::GetMathTypes'::__l2::_dynamic_atexit_destructor_for__MathTypes__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = MathTypes.AllocatorInstance.Data;
  if (MathTypes.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (MathTypes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'NewNodeName'' @ 15041bc20

void __cdecl
`FRigVMGraphFunctionData::PatchSharedArgumentOperandsIfRequired'::__l66::
_dynamic_atexit_destructor_for__NewNodeName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = NewNodeName.Data.AllocatorInstance.Data;
  if (NewNodeName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (NewNodeName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'NewNodeName'' @ 15041bc40

void __cdecl
`FRigVMGraphFunctionData::PatchSharedArgumentOperandsIfRequired'::__l68::
_dynamic_atexit_destructor_for__NewNodeName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = NewNodeName.Data.AllocatorInstance.Data;
  if (NewNodeName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (NewNodeName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'OutPrefix'' @ 15041bc60

void __cdecl
`FRigVMTemplate::GetDirectionPrefix'::__l2::_dynamic_atexit_destructor_for__OutPrefix__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OutPrefix.Data.AllocatorInstance.Data;
  if (OutPrefix.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (OutPrefix.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'PrefixObjectPtr'' @ 15041bc80

void __cdecl
`RigVMTypeUtils::ObjectFromCPPType'::__l2::_dynamic_atexit_destructor_for__PrefixObjectPtr__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = PrefixObjectPtr.Data.AllocatorInstance.Data;
  if (PrefixObjectPtr.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (PrefixObjectPtr.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'PrefixScriptInterface'' @ 15041bca0

void __cdecl
`RigVMTypeUtils::ObjectFromCPPType'::__l2::_dynamic_atexit_destructor_for__PrefixScriptInterface__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = PrefixScriptInterface.Data.AllocatorInstance.Data;
  if (PrefixScriptInterface.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (PrefixScriptInterface.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'PrefixSubclassOf'' @ 15041bcc0

void __cdecl
`RigVMTypeUtils::ObjectFromCPPType'::__l2::_dynamic_atexit_destructor_for__PrefixSubclassOf__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = PrefixSubclassOf.Data.AllocatorInstance.Data;
  if (PrefixSubclassOf.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (PrefixSubclassOf.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'PrefixesNotRequiringCPPTypeObject'' @ 15041bce0

void __cdecl
`RigVMTypeUtils::RequiresCPPTypeObject'::__l2::
_dynamic_atexit_destructor_for__PrefixesNotRequiringCPPTypeObject__(void)

{
  DestructItems<FString,int>
            ((FString *)PrefixesNotRequiringCPPTypeObject.AllocatorInstance.Data,
             PrefixesNotRequiringCPPTypeObject.ArrayNum);
  if (PrefixesNotRequiringCPPTypeObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(PrefixesNotRequiringCPPTypeObject.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'PrefixesRequiringCPPTypeObject'' @ 15041bd20

void __cdecl
`RigVMTypeUtils::RequiresCPPTypeObject'::__l2::
_dynamic_atexit_destructor_for__PrefixesRequiringCPPTypeObject__(void)

{
  DestructItems<FString,int>
            ((FString *)PrefixesRequiringCPPTypeObject.AllocatorInstance.Data,
             PrefixesRequiringCPPTypeObject.ArrayNum);
  if (PrefixesRequiringCPPTypeObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(PrefixesRequiringCPPTypeObject.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'ReportedErrors'' @ 15041bd60

void __cdecl
`FRigVMMemoryStorageStruct::CopyProperty'::__l123::_dynamic_atexit_destructor_for__ReportedErrors__
          (void)

{
  ReportedErrors.HashSize = 0;
  if (ReportedErrors.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)ReportedErrors.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&ReportedErrors.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'ReportedErrors'' @ 15041bda0

void __cdecl
`URigVMMemoryStorage::CopyProperty'::__l123::_dynamic_atexit_destructor_for__ReportedErrors__(void)

{
  ReportedErrors.HashSize = 0;
  if (ReportedErrors.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)ReportedErrors.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&ReportedErrors.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'SplitString'' @ 15041bde0

void __cdecl
`FRigVMTemplate::GetColorFromMetadata'::__l2::_dynamic_atexit_destructor_for__SplitString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SplitString.Data.AllocatorInstance.Data;
  if (SplitString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SplitString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'StructPrefix'' @ 15041be00

void __cdecl
`FRigVMRegistry_NoLock::FindFunction_NoLock'::__l23::_dynamic_atexit_destructor_for__StructPrefix__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = StructPrefix.Data.AllocatorInstance.Data;
  if (StructPrefix.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (StructPrefix.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'UserDefinedStructPrefix'' @ 15041be20

void __cdecl
`RigVMTypeUtils::GetUniqueStructTypeName'::__l2::
_dynamic_atexit_destructor_for__UserDefinedStructPrefix__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `class_FString___cdecl_RigVMTypeUtils::GetUniqueStructTypeName(FGuid_const&___ptr64)'
               ::__l2::UserDefinedStructPrefix.Data.AllocatorInstance.Data;
  if (`class_FString___cdecl_RigVMTypeUtils::GetUniqueStructTypeName(FGuid_const&___ptr64)'::__l2::
      UserDefinedStructPrefix.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`class_FString___cdecl_RigVMTypeUtils::GetUniqueStructTypeName(FGuid_const&___ptr64)'::__l2::
      UserDefinedStructPrefix.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'WildCardArrayCPPType'' @ 15041be40

void __cdecl
`RigVMTypeUtils::GetWildCardArrayCPPType'::__l2::
_dynamic_atexit_destructor_for__WildCardArrayCPPType__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = WildCardArrayCPPType.Data.AllocatorInstance.Data;
  if (WildCardArrayCPPType.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (WildCardArrayCPPType.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'WildCardCPPType'' @ 15041be60

void __cdecl
`RigVMTypeUtils::GetWildCardCPPType'::__l2::_dynamic_atexit_destructor_for__WildCardCPPType__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = WildCardCPPType.Data.AllocatorInstance.Data;
  if (WildCardCPPType.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (WildCardCPPType.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'s_RigVMRegistry'' @ 15041be80

void __cdecl
`FRigVMRegistry_RWLock::Get'::__l2::_dynamic_atexit_destructor_for__s_RigVMRegistry__(void)

{
  FRigVMRegistry_RWLock::~FRigVMRegistry_RWLock(&s_RigVMRegistry);
  return;
}

