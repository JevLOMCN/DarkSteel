// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 361

// EmptyInstructionIndices'' @ 1411b77f0

void __cdecl `dynamic_initializer_for_'FRigVMByteCode::EmptyInstructionIndices__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FRigVMByteCode::EmptyInstructionIndices__);
  return;
}

// EmptyUserDatas'' @ 1411b7810

void __cdecl `dynamic_initializer_for_'UNameSpacedUserData::EmptyUserDatas__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UNameSpacedUserData::EmptyUserDatas__);
  return;
}

// GetTemplateMutex'' @ 1411b7830

void __cdecl `dynamic_initializer_for_'FRigVMDispatchFactory::GetTemplateMutex__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&FRigVMDispatchFactory::GetTemplateMutex,4000);
  atexit(`dynamic_atexit_destructor_for_'FRigVMDispatchFactory::GetTemplateMutex__);
  return;
}

// `dynamic_initializer_for_'BoolArrayTypeName'' @ 1411b7860

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

// `dynamic_initializer_for_'BoolTypeName'' @ 1411b78b0

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

// `dynamic_initializer_for_'CVarEnableRigVMDrawInterfaceInShipping'' @ 1411b7900

void __cdecl _dynamic_initializer_for__CVarEnableRigVMDrawInterfaceInShipping__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarEnableRigVMDrawInterfaceInShipping,L"RigVM.EnableDrawInterfaceInShipping",
             local_res8,L"Set to 1 to enable control rig draw interface in shipping",0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableRigVMDrawInterfaceInShipping__);
  return;
}

// `dynamic_initializer_for_'CVarRigVMReportAllMessages'' @ 1411b7950

void __cdecl _dynamic_initializer_for__CVarRigVMReportAllMessages__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarRigVMReportAllMessages,L"RigVM.ReportAllMessages",local_res8,
             L"Report all log messages, even when no logging procedure has been setup.",0);
  atexit(_dynamic_atexit_destructor_for__CVarRigVMReportAllMessages__);
  return;
}

// `dynamic_initializer_for_'DoubleArrayTypeName'' @ 1411b79a0

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

// `dynamic_initializer_for_'DoubleTypeName'' @ 1411b79f0

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

// `dynamic_initializer_for_'FNameArrayTypeName'' @ 1411b7a40

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

// `dynamic_initializer_for_'FNameTypeName'' @ 1411b7a90

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

// `dynamic_initializer_for_'FStringArrayTypeName'' @ 1411b7ae0

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

// `dynamic_initializer_for_'FStringTypeName'' @ 1411b7b30

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

// `dynamic_initializer_for_'FTextTypeName'' @ 1411b7b80

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

// `dynamic_initializer_for_'FloatArrayTypeName'' @ 1411b7bd0

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

// `dynamic_initializer_for_'FloatTypeName'' @ 1411b7c20

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

// `dynamic_initializer_for_'Int32ArrayTypeName'' @ 1411b7c70

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

// `dynamic_initializer_for_'Int32TypeName'' @ 1411b7cc0

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

// `dynamic_initializer_for_'Int64TypeName'' @ 1411b7d10

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

// `dynamic_initializer_for_'IntTypeName'' @ 1411b7d60

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

// `dynamic_initializer_for_'UInt32ArrayTypeName'' @ 1411b7db0

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

// `dynamic_initializer_for_'UInt32TypeName'' @ 1411b7e00

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

// `dynamic_initializer_for_'UInt64TypeName'' @ 1411b7e50

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

// `dynamic_initializer_for_'UInt8ArrayTypeName'' @ 1411b7ea0

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

// `dynamic_initializer_for_'UInt8TypeName'' @ 1411b7ef0

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

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMBlueprintGeneratedClass_h__Script_RigVM_4157412322'' @ 1411b7f40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMBlueprintGeneratedClass_h__Script_RigVM_4157412322__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/RigVM",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMBlueprintGeneratedClass_h__Script_RigVM_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMAssetUserData_h__Script_RigVM_1431859315'' @ 1411b7f80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMAssetUserData_h__Script_RigVM_1431859315__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/RigVM",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMAssetUserData_h__Script_RigVM_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMByteCode_h__Script_RigVM_1926836460'' @ 1411b7fc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMByteCode_h__Script_RigVM_1926836460__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/RigVM",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMByteCode_h__Script_RigVM_Statics
             ::ScriptStructInfo,0x16,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMByteCode_h__Script_RigVM_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDebugDrawSettings_h__Script_RigVM_1441521493'' @ 1411b8010

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDebugDrawSettings_h__Script_RigVM_1441521493__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/RigVM",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDebugDrawSettings_h__Script_RigVM_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDebugInfo_h__Script_RigVM_3928095251'' @ 1411b8050

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDebugInfo_h__Script_RigVM_3928095251__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/RigVM",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDebugInfo_h__Script_RigVM_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDispatchFactory_h__Script_RigVM_1557449113'' @ 1411b8090

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDispatchFactory_h__Script_RigVM_1557449113__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/RigVM",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDispatchFactory_h__Script_RigVM_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDrawContainer_h__Script_RigVM_618271331'' @ 1411b80d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDrawContainer_h__Script_RigVM_618271331__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/RigVM",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDrawContainer_h__Script_RigVM_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDrawInstruction_h__Script_RigVM_2408513903'' @ 1411b8110

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDrawInstruction_h__Script_RigVM_2408513903__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/RigVM",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDrawInstruction_h__Script_RigVM_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDrawInstruction_h__Script_RigVM_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDrawInterface_h__Script_RigVM_2818072600'' @ 1411b8160

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDrawInterface_h__Script_RigVM_2818072600__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/RigVM",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDrawInterface_h__Script_RigVM_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMExecuteContext_h__Script_RigVM_1771331591'' @ 1411b81a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMExecuteContext_h__Script_RigVM_1771331591__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/RigVM",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMExecuteContext_h__Script_RigVM_Statics
             ::ScriptStructInfo,5,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMExternalVariable_h__Script_RigVM_229515878'' @ 1411b81e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMExternalVariable_h__Script_RigVM_229515878__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/RigVM",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMExternalVariable_h__Script_RigVM_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMStatistics_h__Script_RigVM_1494815772'' @ 1411b8220

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMStatistics_h__Script_RigVM_1494815772__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/RigVM",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMStatistics_h__Script_RigVM_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMTrait_h__Script_RigVM_4239320607'' @ 1411b8260

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMTrait_h__Script_RigVM_4239320607__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/RigVM",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMTrait_h__Script_RigVM_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVM_h__Script_RigVM_2506765664'' @ 1411b82a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVM_h__Script_RigVM_2506765664__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/RigVM",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVM_h__Script_RigVM_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVM_h__Script_RigVM_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVM_h__Script_RigVM_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_AnimBase_h__Script_RigVM_141996830'' @ 1411b82f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_AnimBase_h__Script_RigVM_141996830__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/RigVM",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_AnimBase_h__Script_RigVM_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugBase_h__Script_RigVM_3551727890'' @ 1411b8330

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugBase_h__Script_RigVM_3551727890__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/RigVM",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugBase_h__Script_RigVM_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBase_h__Script_RigVM_1965771120'' @ 1411b8370

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBase_h__Script_RigVM_1965771120__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/RigVM",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBase_h__Script_RigVM_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_SpringMath_h__Script_RigVM_3050952326'' @ 1411b83b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_SpringMath_h__Script_RigVM_3050952326__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/RigVM",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_SpringMath_h__Script_RigVM_Statics
             ::ScriptStructInfo,6,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunctionDefines_h__Script_RigVM_1501603461'' @ 1411b83f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunctionDefines_h__Script_RigVM_1501603461__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/RigVM",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunctionDefines_h__Script_RigVM_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_SimBase_h__Script_RigVM_126698866'' @ 1411b8440

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_SimBase_h__Script_RigVM_126698866__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/RigVM",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_SimBase_h__Script_RigVM_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_RigVM'' @ 1411b8480

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_RigVM__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xec3dc0c9;
  local_res8[0].DeclarationsHash = 0x27254182;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_RigVM,L"/Script/RigVM",
             &Z_Registration_Info_UPackage__Script_RigVM,local_res8);
  return;
}

// NewStructOps @ 14a06af90

void * __cdecl Z_Construct_UScriptStruct_FRigVMBinaryOp_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xe;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMBinaryOp,&UE::CoreUObject::Private::Construct<FRigVMBinaryOp>,&UE::CoreUObject::Private::ConstructForTests<FRigVMBinaryOp>,&UE::CoreUObject::Private::Destruct<FRigVMBinaryOp>,&UE::CoreUObject::Private::Copy<FRigVMBinaryOp>,&UE::CoreUObject::Private::GetStructTypeHash<FRigVMBinaryOp>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 2;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a06b0d0

void * __cdecl Z_Construct_UScriptStruct_FRigVMTernaryOp_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMTernaryOp,&UE::CoreUObject::Private::Construct<FRigVMTernaryOp>,&UE::CoreUObject::Private::ConstructForTests<FRigVMTernaryOp>,&UE::CoreUObject::Private::Destruct<FRigVMTernaryOp>,&UE::CoreUObject::Private::Copy<FRigVMTernaryOp>,&UE::CoreUObject::Private::GetStructTypeHash<FRigVMTernaryOp>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 2;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14a06b130

void * __thiscall FRigVMStruct::_scalar_deleting_destructor_(FRigVMStruct *this,uint param_1)

{
  *this = (FRigVMStruct)&___7FRigVMStruct__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// NewStructOps @ 14a06b770

void * __cdecl Z_Construct_UScriptStruct_FRigVMQuaternaryOp_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1a;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMQuaternaryOp,&UE::CoreUObject::Private::Construct<FRigVMQuaternaryOp>,&UE::CoreUObject::Private::ConstructForTests<FRigVMQuaternaryOp>,&UE::CoreUObject::Private::Destruct<FRigVMQuaternaryOp>,&UE::CoreUObject::Private::Copy<FRigVMQuaternaryOp>,&UE::CoreUObject::Private::GetStructTypeHash<FRigVMQuaternaryOp>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 2;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a06b900

void * __cdecl Z_Construct_UScriptStruct_FRigVMQuinaryOp_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMQuinaryOp,&UE::CoreUObject::Private::Construct<FRigVMQuinaryOp>,&UE::CoreUObject::Private::ConstructForTests<FRigVMQuinaryOp>,&UE::CoreUObject::Private::Destruct<FRigVMQuinaryOp>,&UE::CoreUObject::Private::Copy<FRigVMQuinaryOp>,&UE::CoreUObject::Private::GetStructTypeHash<FRigVMQuinaryOp>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 2;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FRigVMDrawContainer @ 14a06ba10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMDrawContainer(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMDrawContainer.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMDrawContainer.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMDrawContainer_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMDrawContainer.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FRigVMDrawContainer.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMDrawInstruction @ 14a06ba90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMDrawInstruction(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMDrawInstruction.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMDrawInstruction.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMDrawInstruction.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FRigVMDrawInstruction.InnerSingleton;
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

// NewStructOps @ 14a06bb40

void * __cdecl Z_Construct_UScriptStruct_FRigVMDrawContainer_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMDrawContainer,&UE::CoreUObject::Private::Construct<FRigVMDrawContainer>,&UE::CoreUObject::Private::ConstructForTests<FRigVMDrawContainer>,&UE::CoreUObject::Private::Destruct<FRigVMDrawContainer>,&UE::CoreUObject::Private::Copy<FRigVMDrawContainer>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a06bbc0

void * __cdecl Z_Construct_UScriptStruct_FRigVMSenaryOp_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x26;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMSenaryOp,&UE::CoreUObject::Private::Construct<FRigVMSenaryOp>,&UE::CoreUObject::Private::ConstructForTests<FRigVMSenaryOp>,&UE::CoreUObject::Private::Destruct<FRigVMSenaryOp>,&UE::CoreUObject::Private::Copy<FRigVMSenaryOp>,&UE::CoreUObject::Private::GetStructTypeHash<FRigVMSenaryOp>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 2;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UEnum_RigVM_ERigVMDrawSettings @ 14a06bd30

UEnum * __cdecl Z_Construct_UEnum_RigVM_ERigVMDrawSettings(void)

{
  if (Z_Registration_Info_UEnum_ERigVMDrawSettings.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERigVMDrawSettings.InnerSingleton,
               &Z_Construct_UEnum_RigVM_ERigVMDrawSettings_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERigVMDrawSettings.InnerSingleton;
}

// ERigVMCopyType_StaticEnum @ 14a06bd70

UEnum * __cdecl ERigVMCopyType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigVMCopyType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UEnum_ERigVMCopyType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigVM_ERigVMCopyType,(UObject *)pUVar1,L"ERigVMCopyType");
  }
  return Z_Registration_Info_UEnum_ERigVMCopyType.OuterSingleton;
}

// ERigVMDrawSettings_StaticEnum @ 14a06bdb0

UEnum * __cdecl ERigVMDrawSettings_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigVMDrawSettings.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UEnum_ERigVMDrawSettings.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigVM_ERigVMDrawSettings,(UObject *)pUVar1,
                       L"ERigVMDrawSettings");
  }
  return Z_Registration_Info_UEnum_ERigVMDrawSettings.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14a06c160

void * __thiscall
FRigVMStructMutable::_scalar_deleting_destructor_(FRigVMStructMutable *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FRigVMStruct__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// NewStructOps @ 14a06c1a0

void * __cdecl Z_Construct_UScriptStruct_FRigVMCopyOp_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMCopyOp,&UE::CoreUObject::Private::Construct<FRigVMCopyOp>,&UE::CoreUObject::Private::ConstructForTests<FRigVMCopyOp>,&UE::CoreUObject::Private::Destruct<FRigVMCopyOp>,&UE::CoreUObject::Private::Copy<FRigVMCopyOp>,&UE::CoreUObject::Private::GetStructTypeHash<FRigVMCopyOp>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 2;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14a06c2f0

void * __thiscall
FRigVMFunction_AnimBase::_scalar_deleting_destructor_(FRigVMFunction_AnimBase *this,uint param_1)

{
  *this = (FRigVMFunction_AnimBase)&___7FRigVMStruct__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// NewStructOps @ 14a06c330

void * __cdecl Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xd0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMDrawInstruction,&UE::CoreUObject::Private::Construct<FRigVMDrawInstruction>,&UE::CoreUObject::Private::ConstructForTests<FRigVMDrawInstruction>,&UE::CoreUObject::Private::Destruct<FRigVMDrawInstruction>,&UE::CoreUObject::Private::Copy<FRigVMDrawInstruction>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a06c3b0

void * __cdecl Z_Construct_UScriptStruct_FRigVMFunction_AnimBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMFunction_AnimBase,&UE::CoreUObject::Private::Construct<FRigVMFunction_AnimBase>,&UE::CoreUObject::Private::ConstructForTests<FRigVMFunction_AnimBase>,&UE::CoreUObject::Private::Destruct<FRigVMFunction_AnimBase>,&UE::CoreUObject::Private::Copy<FRigVMFunction_AnimBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a06c510

void * __cdecl Z_Construct_UScriptStruct_FRigVMComparisonOp_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMComparisonOp,&UE::CoreUObject::Private::Construct<FRigVMComparisonOp>,&UE::CoreUObject::Private::ConstructForTests<FRigVMComparisonOp>,&UE::CoreUObject::Private::Destruct<FRigVMComparisonOp>,&UE::CoreUObject::Private::Copy<FRigVMComparisonOp>,&UE::CoreUObject::Private::GetStructTypeHash<FRigVMComparisonOp>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 2;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a06c5d0

void * __cdecl Z_Construct_UScriptStruct_FRigVMDrawInterface_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMDrawInterface,&UE::CoreUObject::Private::Construct<FRigVMDrawInterface>,&UE::CoreUObject::Private::ConstructForTests<FRigVMDrawInterface>,&UE::CoreUObject::Private::Destruct<FRigVMDrawInterface>,&UE::CoreUObject::Private::Copy<FRigVMDrawInterface>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14a06c650

void * __thiscall
FRigVMFunction_DebugBase::_scalar_deleting_destructor_(FRigVMFunction_DebugBase *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FRigVMStruct__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a06c710

void * __thiscall
FRigVMFunction_DebugBaseMutable::_scalar_deleting_destructor_
          (FRigVMFunction_DebugBaseMutable *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FRigVMStruct__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// NewStructOps @ 14a06c750

void * __cdecl Z_Construct_UScriptStruct_FRigVMFunction_DebugBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMFunction_DebugBase,&UE::CoreUObject::Private::Construct<FRigVMFunction_DebugBase>,&UE::CoreUObject::Private::ConstructForTests<FRigVMFunction_DebugBase>,&UE::CoreUObject::Private::Destruct<FRigVMFunction_DebugBase>,&UE::CoreUObject::Private::Copy<FRigVMFunction_DebugBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a06c790

void * __cdecl Z_Construct_UScriptStruct_FRigVMJumpOp_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMJumpOp,&UE::CoreUObject::Private::Construct<FRigVMJumpOp>,&UE::CoreUObject::Private::ConstructForTests<FRigVMJumpOp>,&UE::CoreUObject::Private::Destruct<FRigVMJumpOp>,&UE::CoreUObject::Private::Copy<FRigVMJumpOp>,&UE::CoreUObject::Private::GetStructTypeHash<FRigVMJumpOp>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a06c910

void * __cdecl Z_Construct_UScriptStruct_FRigVMJumpIfOp_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMJumpIfOp,&UE::CoreUObject::Private::Construct<FRigVMJumpIfOp>,&UE::CoreUObject::Private::ConstructForTests<FRigVMJumpIfOp>,&UE::CoreUObject::Private::Destruct<FRigVMJumpIfOp>,&UE::CoreUObject::Private::Copy<FRigVMJumpIfOp>,&UE::CoreUObject::Private::GetStructTypeHash<FRigVMJumpIfOp>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a06c950

void * __cdecl Z_Construct_UScriptStruct_FRigVMFunction_DebugBaseMutable_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMFunction_DebugBaseMutable,&UE::CoreUObject::Private::Construct<FRigVMFunction_DebugBaseMutable>,&UE::CoreUObject::Private::ConstructForTests<FRigVMFunction_DebugBaseMutable>,&UE::CoreUObject::Private::Destruct<FRigVMFunction_DebugBaseMutable>,&UE::CoreUObject::Private::Copy<FRigVMFunction_DebugBaseMutable>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UPackage__Script_RigVM @ 14a06ca70

UPackage * __cdecl Z_Construct_UPackage__Script_RigVM(void)

{
  if (Z_Registration_Info_UPackage__Script_RigVM.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_RigVM.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_RigVM.OuterSingleton;
}

// Z_Construct_UScriptStruct_FRigVMDebugDrawSettings @ 14a06cb30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMDebugDrawSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMDebugDrawSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMDebugDrawSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMDebugDrawSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMDebugDrawSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMDebugDrawSettings.InnerSingleton;
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

// NewStructOps @ 14a06cbb0

void * __cdecl Z_Construct_UScriptStruct_FRigVMChangeTypeOp_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMChangeTypeOp,&UE::CoreUObject::Private::Construct<FRigVMChangeTypeOp>,&UE::CoreUObject::Private::ConstructForTests<FRigVMChangeTypeOp>,&UE::CoreUObject::Private::Destruct<FRigVMChangeTypeOp>,&UE::CoreUObject::Private::Copy<FRigVMChangeTypeOp>,&UE::CoreUObject::Private::GetStructTypeHash<FRigVMChangeTypeOp>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 2;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a06cbf0

void * __cdecl Z_Construct_UScriptStruct_FRigVMDebugDrawSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMDebugDrawSettings,&UE::CoreUObject::Private::Construct<FRigVMDebugDrawSettings>,&UE::CoreUObject::Private::ConstructForTests<FRigVMDebugDrawSettings>,&UE::CoreUObject::Private::Destruct<FRigVMDebugDrawSettings>,&UE::CoreUObject::Private::Copy<FRigVMDebugDrawSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14a06cc90

void * __thiscall
FRigVMFunction_MathBase::_scalar_deleting_destructor_(FRigVMFunction_MathBase *this,uint param_1)

{
  *this = (FRigVMFunction_MathBase)&___7FRigVMStruct__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a06cd20

void * __thiscall
FRigVMFunction_MathMutableBase::_scalar_deleting_destructor_
          (FRigVMFunction_MathMutableBase *this,uint param_1)

{
  *(undefined ***)this = &___7FRigVMStruct__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// Z_Construct_UScriptStruct_FRigVMFunction_MathBase @ 14a06cd60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMFunction_MathBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathBase.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMFunction_MathBase.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMFunction_MathBase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathBase.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathBase.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMFunction_MathMutableBase @ 14a06cde0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMFunction_MathMutableBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathMutableBase.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMFunction_MathMutableBase.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMFunction_MathMutableBase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathMutableBase.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathMutableBase.InnerSingleton;
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

// NewStructOps @ 14a06ce60

void * __cdecl Z_Construct_UScriptStruct_FRigVMFunction_MathBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMFunction_MathBase,&UE::CoreUObject::Private::Construct<FRigVMFunction_MathBase>,&UE::CoreUObject::Private::ConstructForTests<FRigVMFunction_MathBase>,&UE::CoreUObject::Private::Destruct<FRigVMFunction_MathBase>,&UE::CoreUObject::Private::Copy<FRigVMFunction_MathBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a06cea0

void * __cdecl Z_Construct_UScriptStruct_FRigVMInvokeEntryOp_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMInvokeEntryOp,&UE::CoreUObject::Private::Construct<FRigVMInvokeEntryOp>,&UE::CoreUObject::Private::ConstructForTests<FRigVMInvokeEntryOp>,&UE::CoreUObject::Private::Destruct<FRigVMInvokeEntryOp>,&UE::CoreUObject::Private::Copy<FRigVMInvokeEntryOp>,&UE::CoreUObject::Private::GetStructTypeHash<FRigVMInvokeEntryOp>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a06cf30

void * __cdecl Z_Construct_UScriptStruct_FRigVMFunction_MathMutableBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMFunction_MathMutableBase,&UE::CoreUObject::Private::Construct<FRigVMFunction_MathMutableBase>,&UE::CoreUObject::Private::ConstructForTests<FRigVMFunction_MathMutableBase>,&UE::CoreUObject::Private::Destruct<FRigVMFunction_MathMutableBase>,&UE::CoreUObject::Private::Copy<FRigVMFunction_MathMutableBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// ERigVMTransformSpace_StaticEnum @ 14a06cfd0

UEnum * __cdecl ERigVMTransformSpace_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigVMTransformSpace.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UEnum_ERigVMTransformSpace.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigVM_ERigVMTransformSpace,(UObject *)pUVar1,
                       L"ERigVMTransformSpace");
  }
  return Z_Registration_Info_UEnum_ERigVMTransformSpace.OuterSingleton;
}

// NewStructOps @ 14a06d030

void * __cdecl Z_Construct_UScriptStruct_FRigVMJumpToBranchOp_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMJumpToBranchOp,&UE::CoreUObject::Private::Construct<FRigVMJumpToBranchOp>,&UE::CoreUObject::Private::ConstructForTests<FRigVMJumpToBranchOp>,&UE::CoreUObject::Private::Destruct<FRigVMJumpToBranchOp>,&UE::CoreUObject::Private::Copy<FRigVMJumpToBranchOp>,&UE::CoreUObject::Private::GetStructTypeHash<FRigVMJumpToBranchOp>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// ERigVMClampSpatialMode_StaticEnum @ 14a06d130

UEnum * __cdecl ERigVMClampSpatialMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigVMClampSpatialMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UEnum_ERigVMClampSpatialMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigVM_ERigVMClampSpatialMode,(UObject *)pUVar1,
                       L"ERigVMClampSpatialMode");
  }
  return Z_Registration_Info_UEnum_ERigVMClampSpatialMode.OuterSingleton;
}

// NewStructOps @ 14a06d1f0

void * __cdecl Z_Construct_UScriptStruct_FRigVMRunInstructionsOp_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMRunInstructionsOp,&UE::CoreUObject::Private::Construct<FRigVMRunInstructionsOp>,&UE::CoreUObject::Private::ConstructForTests<FRigVMRunInstructionsOp>,&UE::CoreUObject::Private::Destruct<FRigVMRunInstructionsOp>,&UE::CoreUObject::Private::Copy<FRigVMRunInstructionsOp>,&UE::CoreUObject::Private::GetStructTypeHash<FRigVMRunInstructionsOp>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14a06d3c0

void * __thiscall
FRigVMFunction_SimBase::_scalar_deleting_destructor_(FRigVMFunction_SimBase *this,uint param_1)

{
  *this = (FRigVMFunction_SimBase)&___7FRigVMStruct__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a06d460

void * __thiscall
FRigVMFunction_SimBaseMutable::_scalar_deleting_destructor_
          (FRigVMFunction_SimBaseMutable *this,uint param_1)

{
  *(undefined ***)this = &___7FRigVMStruct__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// NewStructOps @ 14a06d4d0

void * __cdecl Z_Construct_UScriptStruct_FRigVMFunction_SimBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMFunction_SimBase,&UE::CoreUObject::Private::Construct<FRigVMFunction_SimBase>,&UE::CoreUObject::Private::ConstructForTests<FRigVMFunction_SimBase>,&UE::CoreUObject::Private::Destruct<FRigVMFunction_SimBase>,&UE::CoreUObject::Private::Copy<FRigVMFunction_SimBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FRigVMExecutePin @ 14a06d530

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMExecutePin(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMExecutePin.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMExecutePin.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMExecutePin_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMExecutePin.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMExecutePin.InnerSingleton;
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

// NewStructOps @ 14a06d5b0

void * __cdecl Z_Construct_UScriptStruct_FRigVMSlice_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMSlice,&UE::CoreUObject::Private::Construct<FRigVMSlice>,&UE::CoreUObject::Private::ConstructForTests<FRigVMSlice>,&UE::CoreUObject::Private::Destruct<FRigVMSlice>,&UE::CoreUObject::Private::Copy<FRigVMSlice>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a06d5f0

void * __cdecl Z_Construct_UScriptStruct_FRigVMSetupTraitsOp_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMSetupTraitsOp,&UE::CoreUObject::Private::Construct<FRigVMSetupTraitsOp>,&UE::CoreUObject::Private::ConstructForTests<FRigVMSetupTraitsOp>,&UE::CoreUObject::Private::Destruct<FRigVMSetupTraitsOp>,&UE::CoreUObject::Private::Copy<FRigVMSetupTraitsOp>,&UE::CoreUObject::Private::GetStructTypeHash<FRigVMSetupTraitsOp>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 2;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a06d630

void * __cdecl Z_Construct_UScriptStruct_FRigVMFunction_SimBaseMutable_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMFunction_SimBaseMutable,&UE::CoreUObject::Private::Construct<FRigVMFunction_SimBaseMutable>,&UE::CoreUObject::Private::ConstructForTests<FRigVMFunction_SimBaseMutable>,&UE::CoreUObject::Private::Destruct<FRigVMFunction_SimBaseMutable>,&UE::CoreUObject::Private::Copy<FRigVMFunction_SimBaseMutable>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a06d670

void * __cdecl Z_Construct_UScriptStruct_FRigVMRuntimeSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMRuntimeSettings,&UE::CoreUObject::Private::Construct<FRigVMRuntimeSettings>,&UE::CoreUObject::Private::ConstructForTests<FRigVMRuntimeSettings>,&UE::CoreUObject::Private::Destruct<FRigVMRuntimeSettings>,&UE::CoreUObject::Private::Copy<FRigVMRuntimeSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a06d6b0

void * __cdecl Z_Construct_UScriptStruct_FRigVMInstruction_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMInstruction,&UE::CoreUObject::Private::Construct<FRigVMInstruction>,&UE::CoreUObject::Private::ConstructForTests<FRigVMInstruction>,&UE::CoreUObject::Private::Destruct<FRigVMInstruction>,&UE::CoreUObject::Private::Copy<FRigVMInstruction>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a06d7c0

void * __cdecl Z_Construct_UScriptStruct_FRigVMExecutePin_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMExecutePin,&UE::CoreUObject::Private::Construct<FRigVMExecutePin>,&UE::CoreUObject::Private::ConstructForTests<FRigVMExecutePin>,&UE::CoreUObject::Private::Destruct<FRigVMExecutePin>,&UE::CoreUObject::Private::Copy<FRigVMExecutePin>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14a06da70

void * __thiscall
FRigVMFunction_DampFloat::_scalar_deleting_destructor_(FRigVMFunction_DampFloat *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FRigVMStruct__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// NewStructOps @ 14a06dab0

void * __cdecl Z_Construct_UScriptStruct_FRigVMInstructionArray_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMInstructionArray,&UE::CoreUObject::Private::Construct<FRigVMInstructionArray>,&UE::CoreUObject::Private::ConstructForTests<FRigVMInstructionArray>,&UE::CoreUObject::Private::Destruct<FRigVMInstructionArray>,&UE::CoreUObject::Private::Copy<FRigVMInstructionArray>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a06daf0

void * __cdecl Z_Construct_UScriptStruct_FRigVMExecuteContext_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x110;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMExecuteContext,&UE::CoreUObject::Private::Construct<FRigVMExecuteContext>,&UE::CoreUObject::Private::ConstructForTests<FRigVMExecuteContext>,&UE::CoreUObject::Private::Destruct<FRigVMExecuteContext>,&UE::CoreUObject::Private::Copy<FRigVMExecuteContext>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FRigVMExecuteContext>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a06dbf0

void * __cdecl Z_Construct_UScriptStruct_FRigVMByteCodeEntry_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMByteCodeEntry,&UE::CoreUObject::Private::Construct<FRigVMByteCodeEntry>,&UE::CoreUObject::Private::ConstructForTests<FRigVMByteCodeEntry>,&UE::CoreUObject::Private::Destruct<FRigVMByteCodeEntry>,&UE::CoreUObject::Private::Copy<FRigVMByteCodeEntry>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a06dc60

void * __cdecl Z_Construct_UScriptStruct_FRigVMExtendedExecuteContext_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x280;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMExtendedExecuteContext,&UE::CoreUObject::Private::Construct<FRigVMExtendedExecuteContext>,&UE::CoreUObject::Private::ConstructForTests<FRigVMExtendedExecuteContext>,&UE::CoreUObject::Private::Destruct<FRigVMExtendedExecuteContext>,&UE::CoreUObject::Private::Copy<FRigVMExtendedExecuteContext>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a06dcb0

void * __cdecl Z_Construct_UScriptStruct_FRigVMByteCode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMByteCode,&UE::CoreUObject::Private::Construct<FRigVMByteCode>,&UE::CoreUObject::Private::ConstructForTests<FRigVMByteCode>,&UE::CoreUObject::Private::Destruct<FRigVMByteCode>,&UE::CoreUObject::Private::Copy<FRigVMByteCode>,&UE::CoreUObject::Private::GetStructTypeHash<FRigVMByteCode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14a06df60

void * __thiscall
FRigVMFunction_DampVector::_scalar_deleting_destructor_
          (FRigVMFunction_DampVector *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FRigVMStruct__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a06e260

void * __thiscall
FRigVMFunction_DampQuaternion::_scalar_deleting_destructor_
          (FRigVMFunction_DampQuaternion *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FRigVMStruct__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a06e550

void * __thiscall
FRigVMFunction_SpringDampFloat::_scalar_deleting_destructor_
          (FRigVMFunction_SpringDampFloat *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FRigVMStruct__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a06e800

void * __thiscall
FRigVMFunction_SpringDampVector::_scalar_deleting_destructor_
          (FRigVMFunction_SpringDampVector *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FRigVMStruct__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a06eab0

void * __thiscall
FRigVMFunction_SpringDampQuat::_scalar_deleting_destructor_
          (FRigVMFunction_SpringDampQuat *this,uint param_1)

{
  *(undefined ***)this = &___7FRigVMStruct__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// Z_Construct_UScriptStruct_FRigVMExternalVariableDef @ 14a06ebe0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMExternalVariableDef(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMExternalVariableDef.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMExternalVariableDef.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMExternalVariableDef_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMExternalVariableDef.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMExternalVariableDef.InnerSingleton;
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

// NewStructOps @ 14a06ec60

void * __cdecl Z_Construct_UScriptStruct_FRigVMExternalVariableDef_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMExternalVariableDef,&UE::CoreUObject::Private::Construct<FRigVMExternalVariableDef>,&UE::CoreUObject::Private::ConstructForTests<FRigVMExternalVariableDef>,&UE::CoreUObject::Private::Destruct<FRigVMExternalVariableDef>,&UE::CoreUObject::Private::Copy<FRigVMExternalVariableDef>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a06ed40

void * __cdecl Z_Construct_UScriptStruct_FRigVMExternalVariable_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMExternalVariable,&UE::CoreUObject::Private::Construct<FRigVMExternalVariable>,&UE::CoreUObject::Private::ConstructForTests<FRigVMExternalVariable>,&UE::CoreUObject::Private::Destruct<FRigVMExternalVariable>,&UE::CoreUObject::Private::Copy<FRigVMExternalVariable>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a06ee50

void * __cdecl Z_Construct_UScriptStruct_FRigVMFunction_DampFloat_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMFunction_DampFloat,&UE::CoreUObject::Private::Construct<FRigVMFunction_DampFloat>,&UE::CoreUObject::Private::ConstructForTests<FRigVMFunction_DampFloat>,&UE::CoreUObject::Private::Destruct<FRigVMFunction_DampFloat>,&UE::CoreUObject::Private::Copy<FRigVMFunction_DampFloat>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a06f3d0

void * __cdecl Z_Construct_UScriptStruct_FRigVMFunction_DampVector_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMFunction_DampVector,&UE::CoreUObject::Private::Construct<FRigVMFunction_DampVector>,&UE::CoreUObject::Private::ConstructForTests<FRigVMFunction_DampVector>,&UE::CoreUObject::Private::Destruct<FRigVMFunction_DampVector>,&UE::CoreUObject::Private::Copy<FRigVMFunction_DampVector>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a06f9f0

void * __cdecl Z_Construct_UScriptStruct_FRigVMFunction_DampQuaternion_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMFunction_DampQuaternion,&UE::CoreUObject::Private::Construct<FRigVMFunction_DampQuaternion>,&UE::CoreUObject::Private::ConstructForTests<FRigVMFunction_DampQuaternion>,&UE::CoreUObject::Private::Destruct<FRigVMFunction_DampQuaternion>,&UE::CoreUObject::Private::Copy<FRigVMFunction_DampQuaternion>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a06fb40

void * __cdecl Z_Construct_UScriptStruct_FRigVMFunction_SpringDampFloat_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMFunction_SpringDampFloat,&UE::CoreUObject::Private::Construct<FRigVMFunction_SpringDampFloat>,&UE::CoreUObject::Private::ConstructForTests<FRigVMFunction_SpringDampFloat>,&UE::CoreUObject::Private::Destruct<FRigVMFunction_SpringDampFloat>,&UE::CoreUObject::Private::Copy<FRigVMFunction_SpringDampFloat>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a06fdb0

void * __cdecl Z_Construct_UScriptStruct_FRigVMFunction_SpringDampVector_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMFunction_SpringDampVector,&UE::CoreUObject::Private::Construct<FRigVMFunction_SpringDampVector>,&UE::CoreUObject::Private::ConstructForTests<FRigVMFunction_SpringDampVector>,&UE::CoreUObject::Private::Destruct<FRigVMFunction_SpringDampVector>,&UE::CoreUObject::Private::Copy<FRigVMFunction_SpringDampVector>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_URigVM @ 14a06fed0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_URigVM(void)

{
  if (Z_Registration_Info_UClass_URigVM.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_URigVM.OuterSingleton,
               &Z_Construct_UClass_URigVM_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_URigVM.OuterSingleton;
}

// Z_Construct_UEnum_RigVM_ERigVMParameterType @ 14a06ff10

UEnum * __cdecl Z_Construct_UEnum_RigVM_ERigVMParameterType(void)

{
  if (Z_Registration_Info_UEnum_ERigVMParameterType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERigVMParameterType.InnerSingleton,
               &Z_Construct_UEnum_RigVM_ERigVMParameterType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERigVMParameterType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FRigVMByteCode @ 14a06ff50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMByteCode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMByteCode.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMByteCode.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMByteCode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMByteCode.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMByteCode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMExtendedExecuteContext @ 14a06ffd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMExtendedExecuteContext(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMExtendedExecuteContext.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMExtendedExecuteContext.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMExtendedExecuteContext_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMExtendedExecuteContext.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMExtendedExecuteContext.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMInstructionArray @ 14a070050

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMInstructionArray(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMInstructionArray.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMInstructionArray.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMInstructionArray_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMInstructionArray.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMInstructionArray.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMParameter @ 14a0700d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMParameter(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMParameter.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMParameter.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMParameter_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMParameter.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMParameter.InnerSingleton;
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

// ERigVMParameterType_StaticEnum @ 14a070150

UEnum * __cdecl ERigVMParameterType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigVMParameterType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UEnum_ERigVMParameterType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigVM_ERigVMParameterType,(UObject *)pUVar1,
                       L"ERigVMParameterType");
  }
  return Z_Registration_Info_UEnum_ERigVMParameterType.OuterSingleton;
}

// NewStructOps @ 14a070230

void * __cdecl Z_Construct_UScriptStruct_FRigVMParameter_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMParameter,&UE::CoreUObject::Private::Construct<FRigVMParameter>,&UE::CoreUObject::Private::ConstructForTests<FRigVMParameter>,&UE::CoreUObject::Private::Destruct<FRigVMParameter>,&UE::CoreUObject::Private::Copy<FRigVMParameter>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a070270

void * __cdecl Z_Construct_UScriptStruct_FRigVMFunction_SpringDampQuat_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMFunction_SpringDampQuat,&UE::CoreUObject::Private::Construct<FRigVMFunction_SpringDampQuat>,&UE::CoreUObject::Private::ConstructForTests<FRigVMFunction_SpringDampQuat>,&UE::CoreUObject::Private::Destruct<FRigVMFunction_SpringDampQuat>,&UE::CoreUObject::Private::Copy<FRigVMFunction_SpringDampQuat>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_URigVM_AddRigVMFunction @ 14a070320

UFunction * __cdecl Z_Construct_UFunction_URigVM_AddRigVMFunction(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_URigVM_AddRigVMFunction_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FRigVMByteCodeStatistics @ 14a070470

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMByteCodeStatistics(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMByteCodeStatistics.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMByteCodeStatistics.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMByteCodeStatistics_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMByteCodeStatistics.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMByteCodeStatistics.InnerSingleton;
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

// NewProp_ReturnValue_SetBit @ 14a0704f0

void __cdecl Z_Construct_UFunction_URigVM_Execute_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x288) = 1;
  return;
}

// Z_Construct_UScriptStruct_FRigVMMemoryStatistics @ 14a070500

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMMemoryStatistics(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMMemoryStatistics.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMMemoryStatistics.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMMemoryStatistics_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMMemoryStatistics.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMMemoryStatistics.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMStatistics @ 14a070580

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMStatistics(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMStatistics.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMStatistics.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMStatistics_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMStatistics.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMStatistics.InnerSingleton;
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

// NewStructOps @ 14a070600

void * __cdecl Z_Construct_UScriptStruct_FRigVMMemoryStatistics_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMMemoryStatistics,&UE::CoreUObject::Private::Construct<FRigVMMemoryStatistics>,&UE::CoreUObject::Private::ConstructForTests<FRigVMMemoryStatistics>,&UE::CoreUObject::Private::Destruct<FRigVMMemoryStatistics>,&UE::CoreUObject::Private::Copy<FRigVMMemoryStatistics>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_URigVM_Execute @ 14a0706a0

UFunction * __cdecl Z_Construct_UFunction_URigVM_Execute(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_URigVM_Execute_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a0706f0

void * __cdecl Z_Construct_UScriptStruct_FRigVMByteCodeStatistics_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMByteCodeStatistics,&UE::CoreUObject::Private::Construct<FRigVMByteCodeStatistics>,&UE::CoreUObject::Private::ConstructForTests<FRigVMByteCodeStatistics>,&UE::CoreUObject::Private::Destruct<FRigVMByteCodeStatistics>,&UE::CoreUObject::Private::Copy<FRigVMByteCodeStatistics>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 14a0707e0

void __cdecl
Z_Construct_UFunction_URigVM_GetParameterValueBool_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_URigVM_GetParameterValueBool @ 14a0708f0

UFunction * __cdecl Z_Construct_UFunction_URigVM_GetParameterValueBool(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigVM_GetParameterValueBool_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a0709c0

void * __cdecl Z_Construct_UScriptStruct_FRigVMStatistics_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMStatistics,&UE::CoreUObject::Private::Construct<FRigVMStatistics>,&UE::CoreUObject::Private::ConstructForTests<FRigVMStatistics>,&UE::CoreUObject::Private::Destruct<FRigVMStatistics>,&UE::CoreUObject::Private::Copy<FRigVMStatistics>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_URigVM_GetParameterValueDouble @ 14a070a60

UFunction * __cdecl Z_Construct_UFunction_URigVM_GetParameterValueDouble(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigVM_GetParameterValueDouble_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14a070aa0

void * __thiscall
FRigVMDrawContainer::_scalar_deleting_destructor_(FRigVMDrawContainer *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FRigVMDrawContainer__6B_;
  DestructItems<FRigVMDrawInstruction,int>
            ((FRigVMDrawInstruction *)(this->Instructions).AllocatorInstance.Data,
             (this->Instructions).ArrayNum);
  pFVar1 = (this->Instructions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// Z_Construct_UFunction_URigVM_GetParameterValueFloat @ 14a070b00

UFunction * __cdecl Z_Construct_UFunction_URigVM_GetParameterValueFloat(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigVM_GetParameterValueFloat_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigVM_GetParameterValueInt @ 14a070ca0

UFunction * __cdecl Z_Construct_UFunction_URigVM_GetParameterValueInt(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigVM_GetParameterValueInt_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14a070d40

void * __thiscall FRigVMTrait::_scalar_deleting_destructor_(FRigVMTrait *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FRigVMTrait__6B_;
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FRigVMStruct__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// Z_Construct_UFunction_URigVM_GetParameterValueName @ 14a070da0

UFunction * __cdecl Z_Construct_UFunction_URigVM_GetParameterValueName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigVM_GetParameterValueName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a070de0

void * __cdecl Z_Construct_UScriptStruct_FRigVMTrait_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMTrait,&UE::CoreUObject::Private::Construct<FRigVMTrait>,&UE::CoreUObject::Private::ConstructForTests<FRigVMTrait>,&UE::CoreUObject::Private::Destruct<FRigVMTrait>,&UE::CoreUObject::Private::Copy<FRigVMTrait>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UDataAssetLink @ 14a070e20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDataAssetLink(void)

{
  if (Z_Registration_Info_UClass_UDataAssetLink.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDataAssetLink.OuterSingleton,
               &Z_Construct_UClass_UDataAssetLink_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDataAssetLink.OuterSingleton;
}

// Z_Construct_UClass_UNameSpacedUserData @ 14a070e60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNameSpacedUserData(void)

{
  if (Z_Registration_Info_UClass_UNameSpacedUserData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNameSpacedUserData.OuterSingleton,
               &Z_Construct_UClass_UNameSpacedUserData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNameSpacedUserData.OuterSingleton;
}

// Z_Construct_UFunction_URigVM_GetParameterValueQuat @ 14a070ea0

UFunction * __cdecl Z_Construct_UFunction_URigVM_GetParameterValueQuat(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigVM_GetParameterValueQuat_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14a070ee0

void * __thiscall
FRigVMDrawInterface::_scalar_deleting_destructor_(FRigVMDrawInterface *this,uint param_1)

{
  *(undefined ***)this = &___7FRigVMDrawContainer__6B_;
  DestructItems<FRigVMDrawInstruction,int>
            (*(FRigVMDrawInstruction **)&this->field_0x8,*(int *)&this->field_0x10);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// Z_Construct_UFunction_URigVM_GetParameterValueString @ 14a070f80

UFunction * __cdecl Z_Construct_UFunction_URigVM_GetParameterValueString(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigVM_GetParameterValueString_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigVM_GetParameterValueTransform @ 14a0710d0

UFunction * __cdecl Z_Construct_UFunction_URigVM_GetParameterValueTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigVM_GetParameterValueTransform_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UDataAssetLink_GetDataAsset @ 14a071170

UFunction * __cdecl Z_Construct_UFunction_UDataAssetLink_GetDataAsset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDataAssetLink_GetDataAsset_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigVM_GetParameterValueVector @ 14a071220

UFunction * __cdecl Z_Construct_UFunction_URigVM_GetParameterValueVector(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigVM_GetParameterValueVector_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UDataAssetLink_SetDataAsset @ 14a071260

UFunction * __cdecl Z_Construct_UFunction_UDataAssetLink_SetDataAsset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDataAssetLink_SetDataAsset_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigVM_GetParameterValueVector2D @ 14a0712a0

UFunction * __cdecl Z_Construct_UFunction_URigVM_GetParameterValueVector2D(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigVM_GetParameterValueVector2D_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigVM_GetRigVMFunctionName @ 14a0716d0

UFunction * __cdecl Z_Construct_UFunction_URigVM_GetRigVMFunctionName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigVM_GetRigVMFunctionName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigVM_GetStatistics @ 14a071720

UFunction * __cdecl Z_Construct_UFunction_URigVM_GetStatistics(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_URigVM_GetStatistics_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_InValue_SetBit @ 14a071760

void __cdecl
Z_Construct_UFunction_URigVM_SetParameterValueBool_Statics::NewProp_InValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_URigVM_SetParameterValueBool @ 14a071770

UFunction * __cdecl Z_Construct_UFunction_URigVM_SetParameterValueBool(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigVM_SetParameterValueBool_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigVM_SetParameterValueDouble @ 14a071830

UFunction * __cdecl Z_Construct_UFunction_URigVM_SetParameterValueDouble(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigVM_SetParameterValueDouble_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigVM_SetParameterValueFloat @ 14a0718e0

UFunction * __cdecl Z_Construct_UFunction_URigVM_SetParameterValueFloat(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigVM_SetParameterValueFloat_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigVM_SetParameterValueInt @ 14a0719c0

UFunction * __cdecl Z_Construct_UFunction_URigVM_SetParameterValueInt(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigVM_SetParameterValueInt_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigVM_SetParameterValueName @ 14a071a10

UFunction * __cdecl Z_Construct_UFunction_URigVM_SetParameterValueName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigVM_SetParameterValueName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14a071a50

void * __thiscall
FRigVMUserWorkflow::_scalar_deleting_destructor_(FRigVMUserWorkflow *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FRigVMUserWorkflow__6B_;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PerformDynamicDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->PerformDelegate);
  pFVar1 = (this->Tooltip).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Title).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// Z_Construct_UFunction_URigVM_SetParameterValueQuat @ 14a071ac0

UFunction * __cdecl Z_Construct_UFunction_URigVM_SetParameterValueQuat(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigVM_SetParameterValueQuat_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigVM_SetParameterValueString @ 14a071b40

UFunction * __cdecl Z_Construct_UFunction_URigVM_SetParameterValueString(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigVM_SetParameterValueString_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigVM_SetParameterValueTransform @ 14a071b80

UFunction * __cdecl Z_Construct_UFunction_URigVM_SetParameterValueTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigVM_SetParameterValueTransform_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigVM_SetParameterValueVector @ 14a071bc0

UFunction * __cdecl Z_Construct_UFunction_URigVM_SetParameterValueVector(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigVM_SetParameterValueVector_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigVM_SetParameterValueVector2D @ 14a071d40

UFunction * __cdecl Z_Construct_UFunction_URigVM_SetParameterValueVector2D(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigVM_SetParameterValueVector2D_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14a071de0

void * __thiscall
FRigVMDispatchFactory::_scalar_deleting_destructor_(FRigVMDispatchFactory *this,uint param_1)

{
  ~FRigVMDispatchFactory(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// NewStructOps @ 14a071ef0

void * __cdecl Z_Construct_UScriptStruct_FRigVMDebugInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMDebugInfo,&UE::CoreUObject::Private::Construct<FRigVMDebugInfo>,&UE::CoreUObject::Private::ConstructForTests<FRigVMDebugInfo>,&UE::CoreUObject::Private::Destruct<FRigVMDebugInfo>,&UE::CoreUObject::Private::Copy<FRigVMDebugInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a0722e0

void * __cdecl Z_Construct_UScriptStruct_FRigVMDispatchFactory_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMDispatchFactory,&UE::CoreUObject::Private::Construct<FRigVMDispatchFactory>,&UE::CoreUObject::Private::ConstructForTests<FRigVMDispatchFactory>,&UE::CoreUObject::Private::Destruct<FRigVMDispatchFactory>,&UE::CoreUObject::Private::Copy<FRigVMDispatchFactory>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UEnum_RigVM_ERigVMOpCode @ 14a072320

UEnum * __cdecl Z_Construct_UEnum_RigVM_ERigVMOpCode(void)

{
  if (Z_Registration_Info_UEnum_ERigVMOpCode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERigVMOpCode.InnerSingleton,
               &Z_Construct_UEnum_RigVM_ERigVMOpCode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERigVMOpCode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FRigVMBaseOp @ 14a072360

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMBaseOp(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMBaseOp.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMBaseOp.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMBaseOp_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMBaseOp.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMBaseOp.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMByteCodeEntry @ 14a0723e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMByteCodeEntry(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMByteCodeEntry.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMByteCodeEntry.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMByteCodeEntry_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMByteCodeEntry.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FRigVMByteCodeEntry.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMInstruction @ 14a072460

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMInstruction(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMInstruction.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMInstruction.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMInstruction_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMInstruction.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMInstruction.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMPredicateBranch @ 14a0724e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMPredicateBranch(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMPredicateBranch.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMPredicateBranch.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMPredicateBranch_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMPredicateBranch.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FRigVMPredicateBranch.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMUnaryOp @ 14a072560

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMUnaryOp(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMUnaryOp.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMUnaryOp.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMUnaryOp_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMUnaryOp.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMUnaryOp.InnerSingleton;
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

// NewStructOps @ 14a0725e0

void * __cdecl Z_Construct_UScriptStruct_FRigVMPredicateBranch_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMPredicateBranch,&UE::CoreUObject::Private::Construct<FRigVMPredicateBranch>,&UE::CoreUObject::Private::ConstructForTests<FRigVMPredicateBranch>,&UE::CoreUObject::Private::Destruct<FRigVMPredicateBranch>,&UE::CoreUObject::Private::Copy<FRigVMPredicateBranch>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// ERigVMOpCode_StaticEnum @ 14a072640

UEnum * __cdecl ERigVMOpCode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigVMOpCode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UEnum_ERigVMOpCode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigVM_ERigVMOpCode,(UObject *)pUVar1,L"ERigVMOpCode");
  }
  return Z_Registration_Info_UEnum_ERigVMOpCode.OuterSingleton;
}

// Z_Construct_UClass_URigVMBlueprintGeneratedClass @ 14a0728d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_URigVMBlueprintGeneratedClass(void)

{
  if (Z_Registration_Info_UClass_URigVMBlueprintGeneratedClass.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_URigVMBlueprintGeneratedClass.OuterSingleton,
               &Z_Construct_UClass_URigVMBlueprintGeneratedClass_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_URigVMBlueprintGeneratedClass.OuterSingleton;
}

// NewStructOps @ 14a0729a0

void * __cdecl Z_Construct_UScriptStruct_FRigVMBaseOp_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMBaseOp,&UE::CoreUObject::Private::Construct<FRigVMBaseOp>,&UE::CoreUObject::Private::ConstructForTests<FRigVMBaseOp>,&UE::CoreUObject::Private::Destruct<FRigVMBaseOp>,&UE::CoreUObject::Private::Copy<FRigVMBaseOp>,&UE::CoreUObject::Private::GetStructTypeHash<FRigVMBaseOp>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a0729e0

void * __cdecl Z_Construct_UScriptStruct_FRigVMExecuteOp_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMExecuteOp,&UE::CoreUObject::Private::Construct<FRigVMExecuteOp>,&UE::CoreUObject::Private::ConstructForTests<FRigVMExecuteOp>,&UE::CoreUObject::Private::Destruct<FRigVMExecuteOp>,&UE::CoreUObject::Private::Copy<FRigVMExecuteOp>,&UE::CoreUObject::Private::GetStructTypeHash<FRigVMExecuteOp>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 2;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a072c50

void * __cdecl Z_Construct_UScriptStruct_FRigVMUnaryOp_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVMUnaryOp,&UE::CoreUObject::Private::Construct<FRigVMUnaryOp>,&UE::CoreUObject::Private::ConstructForTests<FRigVMUnaryOp>,&UE::CoreUObject::Private::Destruct<FRigVMUnaryOp>,&UE::CoreUObject::Private::Copy<FRigVMUnaryOp>,&UE::CoreUObject::Private::GetStructTypeHash<FRigVMUnaryOp>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 2;
    return puVar1;
  }
  return (void *)0x0;
}

// operator<<<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator> @ 14a072fa0

FArchive * __cdecl
operator<<<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  ulonglong uVar8;
  FRigVMOperand *pFVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint uVar14;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar11 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar14 = 1;
  uVar7 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar7) {
    uVar8 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar14 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((int)uVar7 < 1) {
    return param_1;
  }
  if ((int)uVar14 < 1) {
    return param_1;
  }
  *piVar1 = uVar14;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = uVar14;
  if (uVar14 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_14a07813e;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_14a07813e:
  uVar12 = (ulonglong)uVar14;
  uVar8 = uVar11;
  do {
    FVar3 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar3 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar3;
    }
    uVar5 = uVar8 & (longlong)(int)uVar14 - 1U;
    uVar8 = uVar8 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar5 * 4) = 0xffffffff;
    uVar12 = uVar12 - 1;
  } while (uVar12 != 0);
  if (*piVar1 != 0) {
    uVar7 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar13 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar13 == (uint *)0x0) {
        puVar13 = (uint *)TStack_50.Array;
      }
      uVar14 = *puVar13;
      uVar8 = uVar11;
      while (uVar14 == 0) {
        iVar10 = (int)uVar11;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        uStack_78 = iVar10 + 1;
        uVar11 = (ulonglong)uStack_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_14a07821b;
        uVar14 = puVar13[(longlong)iVar10 + 1];
      }
      uStack_74 = -uVar14 & uVar14;
      uVar11 = (ulonglong)uStack_74 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar11 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_14a07821b:
        uVar11 = (ulonglong)uVar7;
        uStack_64 = uVar7;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar11 < (int)uVar7) {
      do {
        pFVar9 = (FRigVMOperand *)(*(longlong *)&param_2->Elements + (longlong)(int)uVar11 * 0x20);
        uVar7 = GetTypeHash(pFVar9);
        uVar7 = uVar7 & *piVar1 - 1U;
        *(uint *)&pFVar9[4].RegisterOffset = uVar7;
        FVar3 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        uVar2 = *(undefined4 *)((longlong)FVar6 + uVar8 * 4);
        pFVar9[4].MemoryType = (char)uVar2;
        pFVar9[4].field_0x1 = (char)((uint)uVar2 >> 8);
        pFVar9[4].RegisterIndex = (short)((uint)uVar2 >> 0x10);
        *(int *)((longlong)FVar6 + uVar8 * 4) = (int)uVar11;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar11 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<TTuple<FString,FSoftObjectPath>,TDefaultMapHashableKeyFuncs<FString,FSoftObjectPath,0>,FDefaultSetAllocator> @ 14a072fb0

FArchive * __cdecl
operator<<<TTuple<FString,FSoftObjectPath>,TDefaultMapHashableKeyFuncs<FString,FSoftObjectPath,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FString,FSoftObjectPath>,TDefaultMapHashableKeyFuncs<FString,FSoftObjectPath,0>,FDefaultSetAllocator>
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
  
  operator<<<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_14a0783ec;
    uVar8 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar8,4);
LAB_14a0783ec:
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
        goto LAB_14a0784c7;
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
LAB_14a0784c7:
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
        puVar11 = (undefined8 *)(*(longlong *)&param_2->Elements + (longlong)(int)uVar7 * 0x38);
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
        *(uint *)((longlong)puVar11 + 0x34) = uVar8;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar9 = (longlong)*piVar1 - 1U & (longlong)(int)uVar8;
        *(undefined4 *)(puVar11 + 6) = *(undefined4 *)((longlong)FVar6 + uVar9 * 4);
        *(int *)((longlong)FVar6 + uVar9 * 4) = (int)uVar7;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar7 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<FRigVMBranchInfo,TSizedDefaultAllocator<32>_> @ 14a072fc0

FArchive * __cdecl
operator<<<FRigVMBranchInfo,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FRigVMBranchInfo,TSizedDefaultAllocator<32>_> *param_2)

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
  FRigVMBranchInfo *this;
  int iVar10;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x1c);
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
                (0x1c,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x92493)) {
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
              FRigVMBranchInfo::Serialize
                        ((FRigVMBranchInfo *)
                         ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x1c),param_1);
              uVar8 = param_2->ArrayNum;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar8);
          }
        }
        else {
          TArray<FRigVMBranchInfo,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x41c,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              this = (FRigVMBranchInfo *)
                     ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x1c);
              DefaultConstructItems<FRigVMBranchInfo,int>(this,1);
              FRigVMBranchInfo::Serialize(this,param_1);
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

// operator<<<FRigVMGraphFunctionData,TSizedDefaultAllocator<32>_> @ 14a072fd0

FArchive * __cdecl
operator<<<FRigVMGraphFunctionData,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FRigVMGraphFunctionData,TSizedDefaultAllocator<32>_> *param_2)

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
  FRigVMGraphFunctionData *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x460);
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
      DestructItems<FRigVMGraphFunctionData,int>
                ((FRigVMGraphFunctionData *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x460,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x3a84)) {
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
              operator<<(param_1,(FRigVMGraphFunctionData *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x460))
              ;
              uVar8 = param_2->ArrayNum;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar8);
          }
        }
        else {
          TArray<FRigVMGraphFunctionData,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x460,8,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FRigVMGraphFunctionData *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x460);
              DefaultConstructItems<FRigVMGraphFunctionData,int>(pFVar10,1);
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

// operator<<<FRigVMOperand,TSizedDefaultAllocator<32>_> @ 14a072fe0

FArchive * __cdecl
operator<<<FRigVMOperand,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FRigVMOperand *this;
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
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 6);
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
                (6,2,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x2aaaab)) {
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
              FRigVMOperand::Serialize
                        ((FRigVMOperand *)
                         ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 6),param_1);
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x206,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              this = (FRigVMOperand *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 6);
              DefaultConstructItems<FRigVMOperand,int>(this,1);
              FRigVMOperand::Serialize(this,param_1);
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

// operator<<<FRigVMParameter,TSizedDefaultAllocator<32>_> @ 14a072ff0

FArchive * __cdecl
operator<<<FRigVMParameter,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FRigVMParameter,TSizedDefaultAllocator<32>_> *param_2)

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
  FRigVMParameter *this;
  int iVar10;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x30);
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
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<FRigVMParameter,int>
                ((FRigVMParameter *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
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
              FRigVMParameter::Serialize
                        ((FRigVMParameter *)
                         ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x30),param_1);
              uVar8 = param_2->ArrayNum;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar8);
          }
        }
        else {
          TArray<FRigVMParameter,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x830,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              this = (FRigVMParameter *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x30)
              ;
              DefaultConstructItems<FRigVMParameter,int>(this,1);
              FRigVMParameter::Serialize(this,param_1);
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

// operator<<<FRigVMPropertyPathDescription,TSizedDefaultAllocator<32>_> @ 14a073000

FArchive * __cdecl
operator<<<FRigVMPropertyPathDescription,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FRigVMPropertyPathDescription,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FRigVMPropertyPathDescription *pFVar2;
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
      DestructItems<FRigVMPropertyPathDescription,int>
                ((FRigVMPropertyPathDescription *)(param_2->AllocatorInstance).Data,
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
              operator<<(param_1,(FRigVMPropertyPathDescription *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x28))
              ;
              uVar9 = param_2->ArrayNum;
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)uVar9);
          }
        }
        else {
          TArray<FRigVMPropertyPathDescription,TSizedDefaultAllocator<32>_>::Empty
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
              pFVar2 = (FRigVMPropertyPathDescription *)
                       ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x28);
              DefaultConstructItems<FRigVMPropertyPathDescription,int>(pFVar2,1);
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

// operator<<<TSparseSetElement<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14a073010

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  FRigVMOperand *pFVar8;
  uint uVar9;
  ulonglong uVar10;
  FRigVMOperand *pFVar11;
  uint *puVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
        goto LAB_14a07331c;
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
LAB_14a07331c:
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
        pFVar8 = (FRigVMOperand *)
                 ((longlong)local_50.CurrentBitIndex * 0x20 + *(longlong *)local_58);
        FRigVMOperand::Serialize(pFVar8,param_1);
        TArrayPrivateFriend::Serialize<FRigVMOperand,TSizedDefaultAllocator<32>_>
                  (param_1,(TArray<FRigVMOperand,TSizedDefaultAllocator<32>_> *)
                           &pFVar8[1].RegisterIndex);
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
    TSparseArray<TSparseSetElement<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    pFVar8 = (FRigVMOperand *)0x0;
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
        pFVar11 = (FRigVMOperand *)0x0;
        if (local_78.Pointer != (FRigVMOperand *)0x0) {
          *(ERigVMMemoryType *)local_78.Pointer = Work;
          *(undefined4 *)((longlong)local_78.Pointer + 2) = 0xffffffff;
          *(undefined8 *)&((FRigVMOperand *)((longlong)local_78.Pointer + 6))->RegisterIndex = 0;
          *(undefined8 *)&((FRigVMOperand *)((longlong)local_78.Pointer + 0xc))->RegisterOffset = 0;
          pFVar11 = (FRigVMOperand *)((longlong)local_78.Pointer + 0x18);
          pFVar11->MemoryType = ~Work;
          pFVar11->field_0x1 = 0xff;
          pFVar11->RegisterIndex = 0xffff;
          pFVar11 = local_78.Pointer;
        }
        FRigVMOperand::Serialize(pFVar11,param_1);
        TArrayPrivateFriend::Serialize<FRigVMOperand,TSizedDefaultAllocator<32>_>
                  (param_1,(TArray<FRigVMOperand,TSizedDefaultAllocator<32>_> *)
                           &pFVar11[1].RegisterIndex);
        uVar9 = (int)pFVar8 + 1;
        pFVar8 = (FRigVMOperand *)(ulonglong)uVar9;
      } while ((int)uVar9 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14a0733a0

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 * 0x38,(longlong)*(int *)&param_2->field_0xc * 0x38);
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
        goto LAB_14a0736bc;
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
LAB_14a0736bc:
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
        pFVar8 = (FString *)((longlong)local_50.CurrentBitIndex * 0x38 + *(longlong *)local_58);
        operator<<(param_1,pFVar8);
        (**(code **)(*(longlong *)param_1 + 0x140))(param_1,pFVar8 + 1);
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
    TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(param_2,0,*(int *)puVar2);
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar10);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != uVar9) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,uVar9,(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
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
                            (0x38,8,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          iVar3 = *(int *)((longlong)iVar6 * 0x38 + 4 + *(longlong *)param_2);
          *(int *)&param_2->field_0x30 = iVar3;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)((longlong)iVar3 * 0x38 + *(longlong *)param_2) = 0xffffffff;
          }
        }
        TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        pFVar11 = (FString *)0x0;
        if (local_78.Pointer != (FString *)0x0) {
          ((local_78.Pointer)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          (local_78.Pointer)->ArrayNum = 0;
          (local_78.Pointer)->ArrayMax = 0;
          ((local_78.Pointer)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          (local_78.Pointer)->ArrayNum = 0;
          (local_78.Pointer)->ArrayMax = 0;
          (((FString *)((longlong)local_78.Pointer + 0x10))->Data).AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          (((FString *)((longlong)local_78.Pointer + 0x10))->Data).ArrayNum = 0;
          (((FString *)((longlong)local_78.Pointer + 0x10))->Data).ArrayMax = 0;
          (((FString *)((longlong)local_78.Pointer + 0x20))->Data).AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          (((FString *)((longlong)local_78.Pointer + 0x20))->Data).ArrayNum = 0;
          (((FString *)((longlong)local_78.Pointer + 0x20))->Data).ArrayMax = 0;
          *(undefined8 *)
           ((longlong)
            &(((FString *)((longlong)local_78.Pointer + 0x10))->Data).AllocatorInstance.Data + 4) =
               0;
          (((FString *)((longlong)local_78.Pointer + 0x10))->Data).ArrayMax = 0;
          (((FString *)((longlong)local_78.Pointer + 0x20))->Data).AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          (((FString *)((longlong)local_78.Pointer + 0x20))->Data).ArrayNum = 0;
          (((FString *)((longlong)local_78.Pointer + 0x20))->Data).ArrayMax = 0;
          *(undefined4 *)
           &(((FString *)((longlong)local_78.Pointer + 0x30))->Data).AllocatorInstance.Data =
               0xffffffff;
          pFVar11 = local_78.Pointer;
        }
        operator<<(param_1,pFVar11);
        (**(code **)(*(longlong *)param_1 + 0x140))(param_1,pFVar11 + 1);
        uVar9 = (int)pFVar8 + 1;
        pFVar8 = (FString *)(ulonglong)uVar9;
      } while ((int)uVar9 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// ConstructItems<FRigVMDrawInstruction,FRigVMDrawInstruction,int> @ 14a074a20

void __cdecl
ConstructItems<FRigVMDrawInstruction,FRigVMDrawInstruction,int>
          (void *param_1,FRigVMDrawInstruction *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  void *pvVar4;
  FScriptContainerElement *_Src;
  undefined8 uVar5;
  int *piVar6;
  int *piVar7;
  
  if (param_3 != 0) {
    piVar6 = (int *)((longlong)param_1 + 0xb0);
    piVar7 = &(param_2->MeshVerts).ArrayNum;
    do {
      pFVar2 = (ForAnyElementType *)(piVar6 + -0x28);
      *(undefined8 *)((longlong)piVar7 + (longlong)param_1 + (-0xb0 - (longlong)param_2)) =
           *(undefined8 *)(piVar7 + -0x2c);
      *(char *)(piVar6 + -0x2a) = (char)piVar7[-0x2a];
      pFVar2->Data = (FScriptContainerElement *)0x0;
      iVar3 = piVar7[-0x26];
      pvVar4 = *(void **)(piVar7 + -0x28);
      piVar6[-0x26] = iVar3;
      if (iVar3 == 0) {
        piVar6[-0x25] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,iVar3,0,pFVar2,iVar3,piVar6 + -0x25);
        memcpy(pFVar2->Data,pvVar4,(longlong)iVar3 * 0x18);
      }
      uVar5 = *(undefined8 *)(piVar7 + -0x22);
      pFVar2 = (ForAnyElementType *)(piVar6 + -2);
      *(undefined8 *)(piVar6 + -0x24) = *(undefined8 *)(piVar7 + -0x24);
      *(undefined8 *)(piVar6 + -0x22) = uVar5;
      piVar6[-0x20] = piVar7[-0x20];
      uVar5 = *(undefined8 *)(piVar7 + -0x1a);
      *(undefined8 *)(piVar6 + -0x1c) = *(undefined8 *)(piVar7 + -0x1c);
      *(undefined8 *)(piVar6 + -0x1a) = uVar5;
      uVar5 = *(undefined8 *)(piVar7 + -0x16);
      *(undefined8 *)(piVar6 + -0x18) = *(undefined8 *)(piVar7 + -0x18);
      *(undefined8 *)(piVar6 + -0x16) = uVar5;
      uVar5 = *(undefined8 *)(piVar7 + -0x12);
      *(undefined8 *)(piVar6 + -0x14) = *(undefined8 *)(piVar7 + -0x14);
      *(undefined8 *)(piVar6 + -0x12) = uVar5;
      uVar5 = *(undefined8 *)(piVar7 + -0xe);
      *(undefined8 *)(piVar6 + -0x10) = *(undefined8 *)(piVar7 + -0x10);
      *(undefined8 *)(piVar6 + -0xe) = uVar5;
      uVar5 = *(undefined8 *)(piVar7 + -10);
      *(undefined8 *)(piVar6 + -0xc) = *(undefined8 *)(piVar7 + -0xc);
      *(undefined8 *)(piVar6 + -10) = uVar5;
      uVar5 = *(undefined8 *)(piVar7 + -6);
      *(undefined8 *)(piVar6 + -8) = *(undefined8 *)(piVar7 + -8);
      *(undefined8 *)(piVar6 + -6) = uVar5;
      *(char *)(piVar6 + -4) = (char)piVar7[-4];
      piVar6[-3] = piVar7[-3];
      pFVar2->Data = (FScriptContainerElement *)0x0;
      iVar3 = *piVar7;
      _Src = (((TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> *)(piVar7 + -2))->
             AllocatorInstance).Data;
      *piVar6 = iVar3;
      if (iVar3 == 0) {
        piVar6[1] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x58,4,iVar3,0,pFVar2,iVar3,piVar6 + 1);
        memcpy(pFVar2->Data,_Src,(longlong)iVar3 * 0x58);
      }
      piVar6[2] = 0;
      piVar6[3] = 0;
      iVar3 = piVar7[4];
      pvVar4 = *(void **)(piVar7 + 2);
      piVar6[4] = iVar3;
      if (iVar3 == 0) {
        piVar6[5] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar3,0,(ForAnyElementType *)(piVar6 + 2),iVar3,piVar6 + 5);
        memcpy(((ForAnyElementType *)(piVar6 + 2))->Data,pvVar4,(longlong)iVar3 << 2);
      }
      piVar1 = piVar7 + 6;
      piVar7 = piVar7 + 0x34;
      *(undefined8 *)(piVar6 + 6) = *(undefined8 *)piVar1;
      piVar6 = piVar6 + 0x34;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FRigVMGraphFunctionArgument,FRigVMGraphFunctionArgument,int> @ 14a074c30

void __cdecl
ConstructItems<FRigVMGraphFunctionArgument,FRigVMGraphFunctionArgument,int>
          (void *param_1,FRigVMGraphFunctionArgument *param_2,int param_3)

{
  TSparseArray<TSparseSetElement<TTuple<FString,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  undefined8 *puVar1;
  ForElementType<FSetElementId> *pFVar2;
  
  if (param_3 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    pFVar2 = (ForElementType<FSetElementId> *)&(param_2->PathToTooltip).field_0x38;
    do {
      *(ForElementType<FSetElementId> *)
       ((longlong)pFVar2 + (longlong)param_1 + (-0x98 - (longlong)param_2)) =
           pFVar2[-10].SecondaryData;
      *puVar1 = *(undefined8 *)(pFVar2 + -9);
      *(ForElementType<FSetElementId> *)(puVar1 + 1) = pFVar2[-9].SecondaryData;
      puVar1[2] = *(undefined8 *)(pFVar2 + -8);
      FSoftObjectPath::FSoftObjectPath
                ((FSoftObjectPath *)(puVar1 + 3),(FSoftObjectPath *)&pFVar2[-8].SecondaryData);
      *(undefined1 *)(puVar1 + 7) = *(undefined1 *)&pFVar2[-6].SecondaryData;
      *(undefined1 *)((longlong)puVar1 + 0x39) = pFVar2[-6].SecondaryData.field_0x1;
      FString::FString((FString *)(puVar1 + 8),(FString *)(pFVar2 + -5));
      this = (TSparseArray<TSparseSetElement<TTuple<FString,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(puVar1 + 0xb);
      *(uchar *)(puVar1 + 10) = pFVar2[-4].InlineData[0];
      *(undefined8 *)this = 0;
      puVar1[0xc] = 0;
      puVar1[0xf] = 0;
      *(undefined4 *)(puVar1 + 0x10) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x84) = 0x80;
      *(undefined4 *)(puVar1 + 0x11) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x8c) = 0;
      puVar1[0x13] = 0;
      *(int *)(puVar1 + 0x14) = 0;
      if (this != (TSparseArray<TSparseSetElement<TTuple<FString,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)&pFVar2[-4].SecondaryData) {
        UE::Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)(puVar1 + 0x12),(int *)(puVar1 + 0x14),pFVar2,
                   *(int *)pFVar2[1].InlineData);
        TSparseArray<TSparseSetElement<TTuple<FString,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::operator=(this,(TSparseArray<TSparseSetElement<TTuple<FString,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)&pFVar2[-4].SecondaryData);
      }
      puVar1 = puVar1 + 0x16;
      pFVar2 = pFVar2 + 0xb;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FRigVMInstructionSetExecuteState,FRigVMInstructionSetExecuteState,int> @ 14a074d80

void __cdecl
ConstructItems<FRigVMInstructionSetExecuteState,FRigVMInstructionSetExecuteState,int>
          (void *param_1,FRigVMInstructionSetExecuteState *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined4 *)(lVar1 + 0x1c) = 0;
      *(undefined4 *)(lVar1 + 0x20) = 0x80;
      *(undefined4 *)(lVar1 + 0x24) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x28) = 0;
      *(undefined8 *)(lVar1 + 0x34) = 0;
      *(undefined4 *)(lVar1 + 0x3c) = 0;
      TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                   *)(lVar1 + -0xc),
                  (TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                   *)param_2);
      param_2 = param_2 + 1;
      lVar1 = lVar1 + 0x50;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FRigVMParameter,FRigVMParameter,int> @ 14a074e10

void __cdecl
ConstructItems<FRigVMParameter,FRigVMParameter,int>
          (void *param_1,FRigVMParameter *param_2,int param_3)

{
  FName *pFVar1;
  TObjectPtr<UScriptStruct> TVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_3 != 0) {
    piVar3 = (int *)((longlong)param_1 + 0xc);
    piVar4 = &param_2->RegisterIndex;
    do {
      *(undefined1 *)(piVar3 + -3) =
           *(undefined1 *)((longlong)piVar3 + (longlong)param_2 + (-0xc - (longlong)param_1));
      *(FName *)(piVar3 + -2) = *(FName *)(piVar4 + -2);
      *piVar3 = *piVar4;
      FString::FString((FString *)(piVar3 + 1),(FString *)(piVar4 + 1));
      TVar2.field0_0x0 =
           (TObjectPtr<UScriptStruct>_u_0)((TObjectPtr<UScriptStruct>_u_0 *)(piVar4 + 5))->DebugPtr;
      ((TObjectPtr<UScriptStruct>_u_0 *)(piVar3 + 5))->DebugPtr = (UScriptStruct *)TVar2.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar2.field0_0x0 != (UScriptStruct *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar2.field0_0x0);
      }
      pFVar1 = (FName *)(piVar4 + 7);
      piVar4 = piVar4 + 0xc;
      *(FName *)(piVar3 + 7) = *pFVar1;
      piVar3 = piVar3 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FRigVMPinCategory,FRigVMPinCategory,int> @ 14a074eb0

void __cdecl
ConstructItems<FRigVMPinCategory,FRigVMPinCategory,int>
          (void *param_1,FRigVMPinCategory *param_2,int param_3)

{
  int *piVar1;
  bool *pbVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  ForAnyElementType *pFVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  
  if (param_3 != 0) {
    pFVar5 = (ForAnyElementType *)((longlong)param_1 + 0x10);
    pTVar6 = &param_2->Elements;
    do {
      FString::FString((FString *)
                       ((longlong)param_1 + (-0x10 - (longlong)param_2) + (longlong)pTVar6),
                       (FString *)(pTVar6 + -1));
      pFVar5->Data = (FScriptContainerElement *)0x0;
      piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
      iVar3 = pTVar6->ArrayNum;
      pFVar4 = (pTVar6->AllocatorInstance).Data;
      *(int *)&pFVar5[1].Data = iVar3;
      if (iVar3 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar3,0,pFVar5,iVar3,piVar1);
        ConstructItems<FString,FString,int>(pFVar5->Data,(FString *)pFVar4,iVar3);
      }
      pbVar2 = (bool *)(pTVar6 + 1);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar6 + 2) + 8);
      *(bool *)&pFVar5[2].Data = *pbVar2;
      pFVar5 = pFVar5 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FRigVMPropertyPathDescription,FRigVMPropertyPathDescription,int> @ 14a074f90

void __cdecl
ConstructItems<FRigVMPropertyPathDescription,FRigVMPropertyPathDescription,int>
          (void *param_1,FRigVMPropertyPathDescription *param_2,int param_3)

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

// ConstructItems<FRigVMTag,FRigVMTag,int> @ 14a075010

void __cdecl ConstructItems<FRigVMTag,FRigVMTag,int>(void *param_1,FRigVMTag *param_2,int param_3)

{
  ITextData *pIVar1;
  longlong lVar2;
  bool *pbVar3;
  FText *pFVar4;
  longlong *plVar5;
  undefined1 local_res18 [16];
  
  if (param_3 != 0) {
    pFVar4 = &param_2->ToolTip;
    plVar5 = (longlong *)((longlong)param_1 + 0x18);
    do {
      *(undefined8 *)((longlong)param_1 + (-0x18 - (longlong)param_2) + (longlong)pFVar4) =
           *(undefined8 *)((longlong)(pFVar4 + -2) + 8);
      FString::FString((FString *)(plVar5 + -2),(FString *)(pFVar4 + -1));
      *plVar5 = 0;
      pIVar1 = (pFVar4->TextData).Reference;
      *plVar5 = (longlong)pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
      }
      *(uint *)(plVar5 + 1) = pFVar4->Flags;
      lVar2 = *(longlong *)((longlong)&((FLinearColor *)(pFVar4 + 1))->field0_0x0 + 8);
      plVar5[2] = *(longlong *)&((FLinearColor *)(pFVar4 + 1))->field0_0x0;
      plVar5[3] = lVar2;
      *(bool *)(plVar5 + 4) = *(bool *)(pFVar4 + 2);
      pbVar3 = (bool *)(pFVar4 + 2);
      pFVar4 = pFVar4 + 4;
      *(bool *)((longlong)plVar5 + 0x21) = pbVar3[1];
      plVar5 = plVar5 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FRigVMTemplateArgumentInfo,FRigVMTemplateArgumentInfo,int> @ 14a0750c0

void __cdecl
ConstructItems<FRigVMTemplateArgumentInfo,FRigVMTemplateArgumentInfo,int>
          (void *param_1,FRigVMTemplateArgumentInfo *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *_Src;
  undefined8 *puVar3;
  ERigVMPinDirection *pEVar4;
  int *piVar5;
  
  if (param_3 != 0) {
    pEVar4 = &param_2->Direction;
    piVar5 = (int *)((longlong)param_1 + 0x48);
    do {
      *(FName *)(pEVar4 + (longlong)param_1 + (-8 - (longlong)param_2)) =
           ((FRigVMTemplateArgumentInfo *)(pEVar4 + -8))->Name;
      *(ERigVMPinDirection *)(piVar5 + -0x10) = *pEVar4;
      lVar2 = *(longlong *)(pEVar4 + 8);
      *(longlong *)(piVar5 + -0xe) = lVar2;
      piVar5[-4] = 0;
      piVar5[-3] = 0;
      if (lVar2 != 0) {
        puVar3 = (undefined8 *)(pEVar4 + 0x18);
        if (*(undefined8 **)(pEVar4 + 0x30) != (undefined8 *)0x0) {
          puVar3 = *(undefined8 **)(pEVar4 + 0x30);
        }
        (**(code **)*puVar3)(puVar3,piVar5 + -10);
      }
      piVar5[-2] = 0;
      piVar5[-1] = 0;
      iVar1 = *(int *)(pEVar4 + 0x40);
      _Src = (((TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *)(pEVar4 + 0x38))->
             AllocatorInstance).Data;
      *piVar5 = iVar1;
      if (iVar1 == 0) {
        piVar5[1] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,iVar1,0,(ForAnyElementType *)(piVar5 + -2),iVar1,piVar5 + 1);
        memcpy(((ForAnyElementType *)(piVar5 + -2))->Data,_Src,(longlong)iVar1 * 0xc);
      }
      pEVar4 = pEVar4 + 0x50;
      piVar5 = piVar5 + 0x14;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FRigVMPropertyPath,FRigVMPropertyPath,int> @ 14a0751d0

void __cdecl
ConstructItems<FRigVMPropertyPath,FRigVMPropertyPath,int>
          (void *param_1,FRigVMPropertyPath *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar3;
  TArray<FRigVMPropertyPathSegment,TSizedDefaultAllocator<32>_> *pTVar4;
  
  if (param_3 != 0) {
    pFVar3 = (ForAnyElementType *)((longlong)param_1 + 0x10);
    pTVar4 = &param_2->Segments;
    do {
      FString::FString((FString *)
                       ((longlong)param_1 + (-0x10 - (longlong)param_2) + (longlong)pTVar4),
                       (FString *)(pTVar4 + -1));
      pFVar3->Data = (FScriptContainerElement *)0x0;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      iVar2 = pTVar4->ArrayNum;
      _Src = (pTVar4->AllocatorInstance).Data;
      *(int *)&pFVar3[1].Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,iVar2,0,pFVar3,iVar2,piVar1);
        memcpy(pFVar3->Data,_Src,(longlong)iVar2 * 0x18);
      }
      pTVar4 = pTVar4 + 2;
      pFVar3 = pFVar3 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FRigVMBranchInfo,int> @ 14a075520

void __cdecl DefaultConstructItems<FRigVMBranchInfo,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 8;
    do {
      *(undefined4 *)(lVar1 + -8) = 0xffffffff;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0xffffffffffffffff;
      *(undefined8 *)(lVar1 + 0xc) = 0xffffffffffffffff;
      lVar1 = lVar1 + 0x1c;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FRigVMGraphFunctionData,int> @ 14a075560

void __cdecl DefaultConstructItems<FRigVMGraphFunctionData,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x430);
    do {
      FRigVMGraphFunctionHeader::FRigVMGraphFunctionHeader
                ((FRigVMGraphFunctionHeader *)(puVar1 + -0x86));
      FRigVMFunctionCompilationData::FRigVMFunctionCompilationData
                ((FRigVMFunctionCompilationData *)(puVar1 + -0x47));
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0xffffffffffffffff;
      *(undefined1 *)(puVar1 + 5) = 0;
      puVar1 = puVar1 + 0x8c;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FRigVMOperand,int> @ 14a0755e0

void __cdecl DefaultConstructItems<FRigVMOperand,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 4;
    do {
      *(undefined1 *)(lVar1 + -4) = 0;
      *(undefined4 *)(lVar1 + -2) = 0xffffffff;
      lVar1 = lVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FRigVMParameter,int> @ 14a075610

void __cdecl DefaultConstructItems<FRigVMParameter,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 8;
    do {
      *(undefined1 *)(lVar1 + -8) = 2;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined4 *)(lVar1 + 4) = 0xffffffff;
      *(undefined8 *)(lVar1 + 8) = 0;
      *(undefined8 *)(lVar1 + 0x10) = 0;
      *(undefined8 *)(lVar1 + 0x18) = 0;
      *(undefined8 *)(lVar1 + 0x20) = 0;
      lVar1 = lVar1 + 0x30;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FRigVMPropertyPathDescription,int> @ 14a075650

void __cdecl DefaultConstructItems<FRigVMPropertyPathDescription,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      *(undefined4 *)(puVar1 + -1) = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1 = puVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRigVMDrawInstruction,int> @ 14a075690

void __cdecl DestructItems<FRigVMDrawInstruction,int>(FRigVMDrawInstruction *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->MeshVerts;
    do {
      pFVar1 = (((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(pTVar2 + 1))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                ((TEnumAsByte<ERigVMDrawSettings::Primitive> *)(pTVar2 + -10) + 8))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 0xd;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRigVMFunctionCompilationPropertyDescription,int> @ 14a0756f0

void __cdecl
DestructItems<FRigVMFunctionCompilationPropertyDescription,int>
          (FRigVMFunctionCompilationPropertyDescription *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->CPPTypeObject).SoftObjectPtr.field_0x18;
    do {
      if ((void *)puVar1[2] != (void *)0x0) {
        FMemory::Free((void *)puVar1[2]);
      }
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      if ((void *)puVar1[-5] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-5]);
      }
      puVar1 = puVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRigVMFunctionCompilationPropertyPath,int> @ 14a075750

void __cdecl
DestructItems<FRigVMFunctionCompilationPropertyPath,int>
          (FRigVMFunctionCompilationPropertyPath *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->HeadCPPType;
    do {
      pFVar1 = pFVar2[1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = (FString *)((longlong)(pFVar2 + 2) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRigVMGraphFunctionArgument,int> @ 14a0757a0

void __cdecl
DestructItems<FRigVMGraphFunctionArgument,int>(FRigVMGraphFunctionArgument *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->PathToTooltip).field_0x40;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      if ((void *)puVar1[-0xb] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0xb]);
      }
      if ((void *)puVar1[-0xe] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0xe]);
      }
      puVar1 = puVar1 + 0x16;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRigVMGraphFunctionData,int> @ 14a075820

void __cdecl
DestructItems<FRigVMGraphFunctionData,int>(FRigVMGraphFunctionData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->SerializedCollapsedNode_DEPRECATED;
    do {
      pFVar1 = (((FRigVMObjectArchive *)(pFVar2 + 1))->Buffer).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      FRigVMFunctionCompilationData::~FRigVMFunctionCompilationData
                ((FRigVMFunctionCompilationData *)((longlong)(pFVar2 + -0x24) + 8));
      FRigVMGraphFunctionHeader::~FRigVMGraphFunctionHeader
                ((FRigVMGraphFunctionHeader *)(pFVar2 + -0x43));
      pFVar2 = pFVar2 + 0x46;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRigVMGraphFunctionHeader,int> @ 14a075890

void __cdecl
DestructItems<FRigVMGraphFunctionHeader,int>(FRigVMGraphFunctionHeader *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->Dependencies).field_0x40;
    do {
      FRigVMNodeLayout::~FRigVMNodeLayout((FRigVMNodeLayout *)(puVar1 + 4));
      if ((void *)puVar1[2] != (void *)0x0) {
        FMemory::Free((void *)puVar1[2]);
      }
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      DestructItems<FRigVMGraphFunctionArgument,int>
                ((FRigVMGraphFunctionArgument *)puVar1[-10],*(int *)(puVar1 + -9));
      if ((void *)puVar1[-10] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-10]);
      }
      if ((void *)puVar1[-0xc] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0xc]);
      }
      if ((void *)puVar1[-0xe] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0xe]);
      }
      if ((void *)puVar1[-0x10] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x10]);
      }
      if ((longlong *)puVar1[-0x12] != (longlong *)0x0) {
        (**(code **)(*(longlong *)puVar1[-0x12] + 0x10))();
      }
      if ((void *)puVar1[-0x16] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x16]);
      }
      DestructItems<FRigVMTag,int>((FRigVMTag *)puVar1[-0x19],*(int *)(puVar1 + -0x18));
      if ((void *)puVar1[-0x19] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x19]);
      }
      if ((void *)puVar1[-0x1d] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x1d]);
      }
      if ((void *)puVar1[-0x21] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x21]);
      }
      if ((void *)puVar1[-0x23] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x23]);
      }
      puVar1 = puVar1 + 0x3f;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRigVMInstructionSetExecuteState,int> @ 14a0759d0

void __cdecl
DestructItems<FRigVMInstructionSetExecuteState,int>
          (FRigVMInstructionSetExecuteState *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->SliceHashToNumInstruction).field_0x40;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      puVar1 = puVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRigVMLazyBranch,int> @ 14a075a30

void __cdecl DestructItems<FRigVMLazyBranch,int>(FRigVMLazyBranch *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&(param_1->FunctionPtr).field_0x28;
    do {
      if (plVar2[-5] != 0) {
        plVar1 = plVar2 + -3;
        if ((longlong *)*plVar2 != (longlong *)0x0) {
          plVar1 = (longlong *)*plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRigVMParameter,int> @ 14a075a80

void __cdecl DestructItems<FRigVMParameter,int>(FRigVMParameter *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->CPPType;
    do {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRigVMPinCategory,int> @ 14a075ac0

void __cdecl DestructItems<FRigVMPinCategory,int>(FRigVMPinCategory *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Elements;
    do {
      DestructItems<FString,int>((FString *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FRigVMPinCategory *)(pTVar2 + -1))->Path).Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + 2) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRigVMPropertyPathDescription,int> @ 14a075b20

void __cdecl
DestructItems<FRigVMPropertyPathDescription,int>(FRigVMPropertyPathDescription *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->HeadCPPType;
    do {
      pFVar1 = pFVar2[1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = (FString *)((longlong)(pFVar2 + 2) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRigVMTag,int> @ 14a075b70

void __cdecl DestructItems<FRigVMTag,int>(FRigVMTag *param_1,int param_2)

{
  ITextData *pIVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  
  if (param_2 != 0) {
    pFVar3 = &param_1->Label;
    do {
      pIVar1 = (((FText *)(pFVar3 + 1))->TextData).Reference;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))();
      }
      pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pFVar3 = pFVar3 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRigVMTemplateArgumentInfo,int> @ 14a075bc0

void __cdecl
DestructItems<FRigVMTemplateArgumentInfo,int>(FRigVMTemplateArgumentInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  TFunction<FRigVMTemplateArgument___cdecl(FName,ERigVMPinDirection,FRigVMRegistryHandle_const_&)>
  *pTVar3;
  
  if (param_2 != 0) {
    pTVar3 = &param_1->FactoryCallback;
    do {
      pFVar1 = (((TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *)(pTVar3 + 1))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (*(longlong *)pTVar3 != 0) {
        plVar2 = (longlong *)&pTVar3->field_0x10;
        if (*(longlong **)&pTVar3->field_0x28 != (longlong *)0x0) {
          plVar2 = *(longlong **)&pTVar3->field_0x28;
        }
        (**(code **)(*plVar2 + 0x10))();
      }
      pTVar3 = (TFunction<FRigVMTemplateArgument___cdecl(FName,ERigVMPinDirection,FRigVMRegistryHandle_const_&)>
                *)((TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *)(pTVar3 + 1) + 2);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,int> @ 14a075c20

void __cdecl
DestructItems<TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,int>
          (TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>,int> @ 14a075c60

void __cdecl
DestructItems<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>,int>
          (TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
           *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x40;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      puVar1 = puVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRigVMPropertyPath,int> @ 14a075cc0

void __cdecl DestructItems<FRigVMPropertyPath,int>(FRigVMPropertyPath *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Segments).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->Path).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// IndexOfByPredicate<`FRigVMDispatchFactory::GetTemplate_NoLock'::__l22::<lambda_1>_> @ 14a077570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
FRigVMTemplateArgument::
IndexOfByPredicate<_FRigVMDispatchFactory::GetTemplate_NoLock_::__l22::<lambda_1>_>
          (FRigVMTemplateArgument *this,<lambda_1> param_1,FRigVMRegistryHandle *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  FRigVMRegistry_NoLock *pFVar5;
  CategoryViews *this_00;
  code **ppcVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  undefined8 *puVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [16];
  CategoryViews *local_d8 [2];
  CategoryViews *local_c8;
  undefined4 local_c0;
  CategoryViews local_b8;
  FScriptContainerElement *local_a8;
  FScriptContainerElement *local_98;
  CategoryViews local_90;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_108;
  if (this->bUseCategories == false) {
    pFVar13 = (this->TypeIndices).AllocatorInstance.Data;
    iVar12 = (this->TypeIndices).ArrayNum;
    for (pFVar10 = pFVar13; pFVar10 != pFVar13 + (longlong)iVar12 * 0xc; pFVar10 = pFVar10 + 0xc) {
      local_d8[0] = *(CategoryViews **)pFVar10;
      uVar1 = *(undefined4 *)(pFVar10 + 8);
      pFVar5 = FRigVMRegistryHandle::operator->(param_1.InRegistry);
      local_c8 = local_d8[0];
      local_c0 = uVar1;
      cVar4 = (**(code **)(pFVar5->_padding_ + 0x110))(pFVar5,&local_c8);
      if (cVar4 != '\0') {
        lVar8 = ((longlong)pFVar10 - (longlong)pFVar13) / 6 +
                ((longlong)pFVar10 - (longlong)pFVar13 >> 0x3f);
        return (int)(lVar8 >> 1) - (int)(lVar8 >> 0x3f);
      }
    }
    iVar9 = -1;
  }
  else {
    iVar12 = 0;
    if (*(longlong *)&this->FilterType == 0) {
      local_c8 = CategoryViews::CategoryViews(&local_90,&this->TypeCategories,param_2);
      iVar9 = (local_c8->Types).ArrayNum;
      uVar7 = (ulonglong)iVar9;
      pFVar13 = (local_c8->Types).AllocatorInstance.Data;
      local_98 = pFVar13 + uVar7 * 0x10;
      local_d8[0] = (CategoryViews *)CONCAT44(local_d8[0]._4_4_,iVar9);
      while( true ) {
        pFVar10 = local_98;
        if ((local_c8->Types).ArrayNum != (int)uVar7) {
          `TCheckedPointerIterator<TArrayView<TRigVMTypeIndex_const_,int>_const_,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(local_e8);
        }
        if (pFVar13 == pFVar10) break;
        puVar3 = *(undefined8 **)pFVar13;
        iVar9 = *(int *)(pFVar13 + 8);
        for (puVar11 = puVar3; puVar11 != (undefined8 *)((longlong)puVar3 + (longlong)iVar9 * 0xc);
            puVar11 = (undefined8 *)((longlong)puVar11 + 0xc)) {
          local_a8 = (FScriptContainerElement *)*puVar11;
          iVar2 = *(int *)(puVar11 + 1);
          pFVar5 = FRigVMRegistryHandle::operator->(param_1.InRegistry);
          local_b8.Types.AllocatorInstance.Data = local_a8;
          local_b8.Types.ArrayNum = iVar2;
          cVar4 = (**(code **)(pFVar5->_padding_ + 0x110))(pFVar5,&local_b8);
          if (cVar4 != '\0') {
            iVar9 = (int)(((longlong)puVar11 - (longlong)puVar3) / 0xc);
            if (iVar9 != -1) {
              iVar9 = iVar9 + iVar12;
              goto LAB_14a0777e9;
            }
            break;
          }
        }
        iVar12 = iVar12 + *(int *)(pFVar13 + 8);
        pFVar13 = pFVar13 + 0x10;
        uVar7 = (ulonglong)local_d8[0] & 0xffffffff;
      }
      iVar9 = -1;
LAB_14a0777e9:
      if (local_90.Types.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Types.AllocatorInstance.Data);
      }
    }
    else {
      local_e8[0] = (code)0x0;
      local_d8[0] = (CategoryViews *)((ulonglong)local_d8[0] & 0xffffffff00000000);
      this_00 = CategoryViews::CategoryViews(&local_b8,&this->TypeCategories,param_2);
      local_78[0] = (code *)0x0;
      local_50 = FMemory::Malloc(0x30,8);
      *local_50 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`FRigVMTemplateArgument::IndexOfByPredicate<`FRigVMDispatchFactory::GetTemplate_NoLock'::`22'::<lambda_1>_>'::`8'::<lambda_1>,0,1>
                           ::_vftable_;
      local_50[1] = (code *)this;
      local_50[2] = (code *)local_d8;
      local_50[3] = (code *)local_e8;
      local_50[4] = (code *)param_1.InRegistry;
      local_50[5] = (code *)param_2;
      if (local_50 + 1 != (code **)0x0) {
        local_78[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FRigVMTemplateArgument::IndexOfByPredicate<`FRigVMDispatchFactory::GetTemplate_NoLock'::__l22::<lambda_1>_>'::__l8::<lambda_1>,bool,TRigVMTypeIndex>
                      ::Call;
      }
      CategoryViews::ForEachType(this_00,(TFunction<bool___cdecl(TRigVMTypeIndex)> *)local_78);
      if (local_78[0] != (code *)0x0) {
        ppcVar6 = local_78 + 2;
        if (local_50 != (code **)0x0) {
          ppcVar6 = local_50;
        }
        (**(code **)(*ppcVar6 + 0x10))();
      }
      if (local_b8.Types.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Types.AllocatorInstance.Data);
      }
      iVar9 = -1;
      if (local_e8[0] != (code)0x0) {
        iVar9 = (int)local_d8[0];
      }
    }
  }
  return iVar9;
}

// InternalConstructor<UDataAssetLink> @ 14a077830

void __cdecl InternalConstructor<UDataAssetLink>(FObjectInitializer *param_1)

{
  UNameSpacedUserData *this;
  
  this = (UNameSpacedUserData *)param_1->Obj;
  if (this != (UNameSpacedUserData *)0x0) {
    UNameSpacedUserData::UNameSpacedUserData(this,param_1);
    this->_padding_ = (longlong)&___7UDataAssetLink__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1]._padding_,0);
    this[1].NameSpace.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  return;
}

// InternalConstructor<UNameSpacedUserData> @ 14a0778a0

void __cdecl InternalConstructor<UNameSpacedUserData>(FObjectInitializer *param_1)

{
  if ((UNameSpacedUserData *)param_1->Obj != (UNameSpacedUserData *)0x0) {
    UNameSpacedUserData::UNameSpacedUserData((UNameSpacedUserData *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<URigVM> @ 14a0778c0

void __cdecl InternalConstructor<URigVM>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this == (UObject *)0x0) {
    return;
  }
  UObject::UObject(this);
  *(undefined ***)this = &___7URigVM__6B_;
  FRigVMMemoryStorageStruct::FRigVMMemoryStorageStruct((FRigVMMemoryStorageStruct *)(this + 1));
  FRigVMMemoryStorageStruct::FRigVMMemoryStorageStruct((FRigVMMemoryStorageStruct *)(this + 3));
  FRigVMMemoryStorageStruct::FRigVMMemoryStorageStruct((FRigVMMemoryStorageStruct *)(this + 5));
  *(undefined8 *)&this[7].field_0x20 = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)&this[8].field_0x10 = 0;
  *(undefined8 *)&this[8].field_0x18 = 0;
  *(undefined8 *)&this[8].field_0x20 = 0;
  *(undefined8 *)(this + 9) = 0;
  *(undefined8 *)&this[9].field_0x8 = 0;
  *(undefined8 *)&this[9].field_0x10 = 0;
  *(undefined8 *)&this[9].field_0x18 = 0;
  *(undefined8 *)&this[9].field_0x20 = 0;
  *(undefined8 *)(this + 10) = 0;
  *(undefined8 *)&this[10].field_0x8 = 0;
  *(undefined8 *)&this[10].field_0x20 = 0;
  *(undefined4 *)&this[8].field_0x8 = 0;
  *(undefined8 *)(this + 7) = 0;
  *(undefined8 *)&this[7].field_0x8 = 0;
  *(undefined8 *)&this[7].field_0x10 = 0;
  *(undefined8 *)&this[7].field_0x18 = 0;
  *(undefined4 *)(this + 0xb) = 0;
  *(undefined4 *)&this[0xb].field_0x4 = 0x80;
  *(undefined4 *)&this[0xb].field_0x8 = 0xffffffff;
  *(undefined4 *)&this[0xb].field_0xc = 0;
  *(undefined8 *)&this[0xb].field_0x18 = 0;
  *(undefined4 *)&this[0xb].field_0x20 = 0;
  *(undefined2 *)(this + 0xc) = 0;
  *(undefined1 **)&this[0xc].field_0x8 = &this[7].field_0x20;
  *(undefined8 *)&this[0xd].field_0x10 = 0;
  *(undefined8 *)&this[0xd].field_0x18 = 0;
  *(undefined1 **)&this[0xd].field_0x20 = &this[0xd].field_0x10;
  *(undefined8 *)(this + 0xe) = 0;
  *(undefined8 *)&this[0xe].field_0x8 = 0;
  *(UObject **)&this[0xe].field_0x10 = this + 0xe;
  *(undefined8 *)&this[0xe].field_0x18 = 0;
  *(undefined8 *)&this[0xe].field_0x20 = 0;
  *(undefined8 *)&this[0xc].field_0x10 = 0;
  *(undefined8 *)&this[0xc].field_0x18 = 0;
  *(undefined8 *)&this[0xc].field_0x20 = 0;
  *(undefined8 *)(this + 0xd) = 0;
  *(undefined4 *)&this[0xd].field_0x8 = 0;
  *(undefined8 *)&this[0xf].field_0x8 = 0;
  *(undefined8 *)&this[0xf].field_0x10 = 0;
  *(undefined8 *)&this[0xf].field_0x18 = 0;
  *(undefined8 *)&this[0xf].field_0x20 = 0;
  *(undefined8 *)&this[0x10].field_0x10 = 0;
  *(undefined1 **)(this + 0xf) = &this[0xe].field_0x18;
  *(undefined4 *)&this[0x10].field_0x18 = 0;
  *(undefined4 *)&this[0x10].field_0x1c = 0x80;
  *(undefined4 *)&this[0x10].field_0x20 = 0xffffffff;
  *(undefined4 *)&this[0x10].field_0x24 = 0;
  *(undefined8 *)&this[0x11].field_0x8 = 0;
  *(undefined4 *)&this[0x11].field_0x10 = 0;
  *(undefined8 *)&this[0x11].field_0x18 = 0;
  *(undefined8 *)&this[0x11].field_0x20 = 0;
  *(undefined4 *)(this + 0x12) = 0;
  *(undefined8 *)&this[0x12].field_0x8 = 0;
  *(undefined8 *)&this[0x12].field_0x10 = 0;
  *(undefined8 *)&this[0x12].field_0x18 = 0;
  *(undefined8 *)&this[0x12].field_0x20 = 0;
  *(undefined8 *)(this + 0x13) = 0;
  *(undefined8 *)&this[0x13].field_0x8 = 0;
  *(undefined8 *)&this[0x13].field_0x20 = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)&this[0x14].field_0x4 = 0x80;
  *(undefined4 *)&this[0x14].field_0x8 = 0xffffffff;
  *(undefined4 *)&this[0x14].field_0xc = 0;
  *(undefined8 *)&this[0x14].field_0x18 = 0;
  *(undefined4 *)&this[0x14].field_0x20 = 0;
  *(undefined4 *)(this + 0x15) = 0;
  *(undefined8 *)&this[0x15].field_0x8 = 0;
  *(undefined8 *)&this[0x15].field_0x10 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this[0x15].field_0x18,4000);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this[0x16].field_0x18,4000);
  return;
}

// InternalConstructor<URigVMBlueprintGeneratedClass> @ 14a0778e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<URigVMBlueprintGeneratedClass>(FObjectInitializer *param_1)

{
  UBlueprintGeneratedClass *this;
  
  this = (UBlueprintGeneratedClass *)param_1->Obj;
  if (this != (UBlueprintGeneratedClass *)0x0) {
    UBlueprintGeneratedClass::UBlueprintGeneratedClass(this,param_1);
    this->_padding_ = (longlong)&URigVMBlueprintGeneratedClass::_vftable__for__UClass__;
    this->_padding_ =
         (longlong)&URigVMBlueprintGeneratedClass::_vftable__for__IBlueprintPropertyGuidProvider__;
    this[1]._padding_ = (longlong)&___7URigVMBlueprintGeneratedClass__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UDataAssetLink> @ 14a077980

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDataAssetLink>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNameSpacedUserData *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDataAssetLink::GetPrivateStaticClass();
  this = (UNameSpacedUserData *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNameSpacedUserData *)0x0) {
    UNameSpacedUserData::UNameSpacedUserData(this,param_1);
    this->_padding_ = (longlong)&___7UDataAssetLink__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1]._padding_,0);
    this[1].NameSpace.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNameSpacedUserData> @ 14a077a60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNameSpacedUserData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNameSpacedUserData *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNameSpacedUserData::GetPrivateStaticClass();
  pUVar3 = (UNameSpacedUserData *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UNameSpacedUserData *)0x0) {
    pUVar3 = UNameSpacedUserData::UNameSpacedUserData(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<URigVM> @ 14a077b00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<URigVM>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  URigVM *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = URigVM::GetPrivateStaticClass();
  pUVar3 = (URigVM *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (URigVM *)0x0) {
    pUVar3 = URigVM::URigVM(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<URigVMBlueprintGeneratedClass> @ 14a077ba0

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
InternalVTableHelperCtorCaller<URigVMBlueprintGeneratedClass>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UBlueprintGeneratedClass *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = URigVMBlueprintGeneratedClass::GetPrivateStaticClass();
  this = (UBlueprintGeneratedClass *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UBlueprintGeneratedClass *)0x0) {
    UBlueprintGeneratedClass::UBlueprintGeneratedClass(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&URigVMBlueprintGeneratedClass::_vftable__for__UClass__;
    this->_padding_ =
         (longlong)&URigVMBlueprintGeneratedClass::_vftable__for__IBlueprintPropertyGuidProvider__;
    this[1]._padding_ = (longlong)&___7URigVMBlueprintGeneratedClass__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// NewObject<URigVM> @ 14a077cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

URigVM * __cdecl NewObject<URigVM>(UObject *param_1)

{
  UClass *pUVar1;
  URigVM *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = URigVM::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (URigVM *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// StaticEnum<enum_ERigVMCopyType> @ 14a079130

UEnum * __cdecl StaticEnum<enum_ERigVMCopyType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigVMCopyType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UEnum_ERigVMCopyType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigVM_ERigVMCopyType,(UObject *)pUVar1,L"ERigVMCopyType");
  }
  return Z_Registration_Info_UEnum_ERigVMCopyType.OuterSingleton;
}

// StaticEnum<enum_ERigVMOpCode> @ 14a079170

UEnum * __cdecl StaticEnum<enum_ERigVMOpCode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigVMOpCode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UEnum_ERigVMOpCode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigVM_ERigVMOpCode,(UObject *)pUVar1,L"ERigVMOpCode");
  }
  return Z_Registration_Info_UEnum_ERigVMOpCode.OuterSingleton;
}

// StaticEnum<enum_ERigVMParameterType> @ 14a0791b0

UEnum * __cdecl StaticEnum<enum_ERigVMParameterType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigVMParameterType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UEnum_ERigVMParameterType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigVM_ERigVMParameterType,(UObject *)pUVar1,
                       L"ERigVMParameterType");
  }
  return Z_Registration_Info_UEnum_ERigVMParameterType.OuterSingleton;
}

// StaticEnum<enum_ERigVMTransformSpace> @ 14a0791f0

UEnum * __cdecl StaticEnum<enum_ERigVMTransformSpace>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigVMTransformSpace.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UEnum_ERigVMTransformSpace.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigVM_ERigVMTransformSpace,(UObject *)pUVar1,
                       L"ERigVMTransformSpace");
  }
  return Z_Registration_Info_UEnum_ERigVMTransformSpace.OuterSingleton;
}

// StaticEnum<enum_ERigVMDrawSettings::Primitive> @ 14a079230

UEnum * __cdecl StaticEnum<enum_ERigVMDrawSettings::Primitive>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigVMDrawSettings.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UEnum_ERigVMDrawSettings.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigVM_ERigVMDrawSettings,(UObject *)pUVar1,
                       L"ERigVMDrawSettings");
  }
  return Z_Registration_Info_UEnum_ERigVMDrawSettings.OuterSingleton;
}

// StaticEnum<enum_ERigVMClampSpatialMode::Type> @ 14a079270

UEnum * __cdecl StaticEnum<enum_ERigVMClampSpatialMode::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigVMClampSpatialMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UEnum_ERigVMClampSpatialMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigVM_ERigVMClampSpatialMode,(UObject *)pUVar1,
                       L"ERigVMClampSpatialMode");
  }
  return Z_Registration_Info_UEnum_ERigVMClampSpatialMode.OuterSingleton;
}

// ZeroPaddedMemory<unsigned_char> @ 14a0792b0

void __cdecl RigVM::ZeroPaddedMemory<unsigned_char>(void *param_1,void *param_2)

{
  void *_Dst;
  
  _Dst = (void *)((longlong)param_1 + 1);
  if (_Dst < param_2) {
    memset(_Dst,0,(longlong)param_2 - (longlong)_Dst);
    return;
  }
  return;
}

// ZeroPaddedMemory<bool> @ 14a0792d0

void __cdecl RigVM::ZeroPaddedMemory<bool>(void *param_1,void *param_2)

{
  void *_Dst;
  
  _Dst = (void *)((longlong)param_1 + 1);
  if (_Dst < param_2) {
    memset(_Dst,0,(longlong)param_2 - (longlong)_Dst);
    return;
  }
  return;
}

// _Atomic_address_as<char,std::_Atomic_padded<enum_FRigVMRegistry_NoLock::ELockType>_> @ 14a0792f0

char * __cdecl
std::_Atomic_address_as<char,std::_Atomic_padded<enum_FRigVMRegistry_NoLock::ELockType>_>
          (_Atomic_padded<FRigVMRegistry_NoLock::ELockType> *param_1)

{
  return (char *)param_1;
}

// _Atomic_reinterpret_as<char,enum_FRigVMRegistry_NoLock::ELockType> @ 14a079300

char __cdecl
std::_Atomic_reinterpret_as<char,enum_FRigVMRegistry_NoLock::ELockType>(ELockType *param_1)

{
  return *param_1;
}

// ~TFunction_OwnedObject<`FRigVMTemplateArgument::IndexOfByPredicate<`FRigVMDispatchFactory::GetTemplate_NoLock'::__l22::<lambda_1>_>'::__l8::<lambda_1>,0,1> @ 14a07afb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgument::IndexOfByPredicate<`FRigVMDispatchFactory::GetTemplate_NoLock'::__l22::<lambda_1>_>'::__l8::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_FRigVMTemplateArgument::IndexOfByPredicate<_FRigVMDispatchFactory::GetTemplate_NoLock_::__l22::<lambda_1>_>_::__l8::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRigVMTemplateArgument::IndexOfByPredicate<`FRigVMDispatchFactory::GetTemplate_NoLock'::`22'::<lambda_1>_>'::`8'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`URigVM::ResolveFunctionsIfRequired'::__l8::<lambda_1>,0,0> @ 14a07afd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigVM::ResolveFunctionsIfRequired'::__l8::<lambda_1>,0,0>::
~TFunction_OwnedObject<_URigVM::ResolveFunctionsIfRequired_::__l8::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URigVM::ResolveFunctionsIfRequired'::`8'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FRigVMDispatchFactory::BuildArgumentListFromPrimaryArgument'::__l2::<lambda_2>,0,1> @ 14a07aff0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMDispatchFactory::BuildArgumentListFromPrimaryArgument'::__l2::<lambda_2>,0,1>
::
~TFunction_OwnedObject<_FRigVMDispatchFactory::BuildArgumentListFromPrimaryArgument_::__l2::<lambda_2>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRigVMDispatchFactory::BuildArgumentListFromPrimaryArgument'::`2'::<lambda_2>,0,1>
        ::_vftable_;
  return;
}

// operator<< @ 14a07d9b0

FArchive * __cdecl operator<<(FArchive *param_1,FRigVMByteCode *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FArchive *pFVar4;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FAnimObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FRigVMObjectVersion::GUID);
  iVar3 = FArchiveState::CustomVer((FArchiveState *)param_1,&FAnimObjectVersion::GUID);
  if (1 < iVar3) {
    if (((param_1->field_0x28 & 4) == 0) && ((param_1->field_0x2b & 5) == 0)) {
      if ((param_1->field_0x28 & 1) != 0) {
        FRigVMByteCode::Load(param_2,param_1);
        return param_1;
      }
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMByteCode.cpp"
                         ,0x126,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FArchive *)(*pcVar1)();
        return pFVar4;
      }
    }
    else {
      FRigVMByteCode::Save(param_2,param_1);
    }
  }
  return param_1;
}

// operator<< @ 14a07daa0

FArchive * __cdecl operator<<(FArchive *param_1,FRigVMExecuteOp *param_2)

{
  ushort *puVar1;
  byte bVar2;
  undefined1 *puVar3;
  ushort *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FArchive *pFVar8;
  
  puVar3 = (undefined1 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined1 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,1);
  }
  else {
    *(undefined1 *)&param_2->_padding_ = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar1 = &param_2->FunctionIndex;
  puVar4 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    bVar2 = (byte)param_2->_padding_;
    if (bVar2 < 0x41) {
      param_2->ArgumentCount = (ushort)bVar2;
      *(undefined1 *)&param_2->_padding_ = 0x65;
      goto LAB_14a07db72;
    }
    if (bVar2 != 0x65) {
      bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("OpCode == ERigVMOpCode::Execute",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMByteCode.cpp"
                         ,0x28,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar5)();
        return pFVar8;
      }
    }
  }
  operator<<(param_1,&param_2->ArgumentCount);
LAB_14a07db72:
  iVar7 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRigVMObjectVersion::GUID);
  if (1 < iVar7) {
    operator<<(param_1,&param_2->FirstPredicateIndex);
    operator<<(param_1,&param_2->PredicateCount);
  }
  return param_1;
}

// operator<< @ 14a07dbc0

FArchive * __cdecl operator<<(FArchive *param_1,FRigVMJumpIfOp *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  int *piVar3;
  
  puVar2 = (undefined1 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined1 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,1);
  }
  else {
    *(undefined1 *)&param_2->_padding_ = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  FRigVMOperand::Serialize((FRigVMOperand *)((longlong)&param_2->_padding_ + 2),param_1);
  piVar1 = &param_2->InstructionIndex;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  operator<<(param_1,&param_2->Condition);
  return param_1;
}

// operator<< @ 14a07dc70

FArchive * __cdecl operator<<(FArchive *param_1,FRigVMJumpOp *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  int *piVar3;
  
  puVar2 = (undefined1 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined1 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,1);
  }
  else {
    *(undefined1 *)&param_2->_padding_ = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  piVar1 = &param_2->InstructionIndex;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar3 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar1 = *piVar3;
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

// operator<< @ 14a07dd20

FArchive * __cdecl operator<<(FArchive *param_1,FRigVMJumpToBranchOp *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  int *piVar3;
  
  puVar2 = (undefined1 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined1 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,1);
  }
  else {
    *(undefined1 *)param_2 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  FRigVMOperand::Serialize((FRigVMOperand *)&param_2->field_0x2,param_1);
  piVar1 = &param_2->FirstBranchInfoIndex;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar3 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar1 = *piVar3;
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

// operator<< @ 14a07dde0

FArchive * __cdecl operator<<(FArchive *param_1,FRigVMPropertyPathDescription *param_2)

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

// operator<< @ 14a07de60

FArchive * __cdecl operator<<(FArchive *param_1,FRigVMRunInstructionsOp *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  int *piVar3;
  
  puVar2 = (undefined1 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined1 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,1);
  }
  else {
    *(undefined1 *)&param_2->_padding_ = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  FRigVMOperand::Serialize((FRigVMOperand *)((longlong)&param_2->_padding_ + 2),param_1);
  piVar1 = &param_2->StartInstruction;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &param_2->EndInstruction;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar3 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar1 = *piVar3;
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

// `vector_deleting_destructor'`adjustor{520}' @ 14a07e574

/* [thunk]:public: virtual void * __ptr64 __cdecl URigVMBlueprintGeneratedClass::`vector deleting
   destructor'`adjustor{520}' (unsigned int) __ptr64 */

void * __thiscall
URigVMBlueprintGeneratedClass::_vector_deleting_destructor__adjustor_520__
          (URigVMBlueprintGeneratedClass *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((URigVMBlueprintGeneratedClass *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{880}' @ 14a07e588

/* [thunk]:public: virtual void * __ptr64 __cdecl URigVMBlueprintGeneratedClass::`vector deleting
   destructor'`adjustor{880}' (unsigned int) __ptr64 */

void * __thiscall
URigVMBlueprintGeneratedClass::_vector_deleting_destructor__adjustor_880__
          (URigVMBlueprintGeneratedClass *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((URigVMBlueprintGeneratedClass *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14a07e5a0

void * __thiscall
IBaseDelegateInstance<FRigVMDispatchFactory_*___cdecl(FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<FRigVMDispatchFactory_*___cdecl(FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a07e5d0

void * __thiscall
TBaseFunctorDelegateInstance<FRigVMDispatchFactory_*___cdecl(FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy,`FRigVMDispatchFactory::CreateTemplateForArgumentInfos_NoLock'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a07e600

void * __thiscall
TBaseFunctorDelegateInstance<FRigVMDispatchFactory_*___cdecl(FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy,`FRigVMDispatchFactory::GetTemplate_NoLock'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a07e630

void * __thiscall
TCommonDelegateInstanceState<FRigVMDispatchFactory_*___cdecl(FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FRigVMDispatchFactory_*___cdecl(FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a07e660

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMTemplateArgument::IndexOfByPredicate<`FRigVMDispatchFactory::GetTemplate_NoLock'::__l22::<lambda_1>_>'::__l8::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRigVMTemplateArgument::IndexOfByPredicate<`FRigVMDispatchFactory::GetTemplate_NoLock'::`22'::<lambda_1>_>'::`8'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a07e6a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigVM::ResolveFunctionsIfRequired'::__l8::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URigVM::ResolveFunctionsIfRequired'::`8'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a07e6e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigVMDispatchFactory::BuildArgumentListFromPrimaryArgument'::__l2::<lambda_2>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRigVMDispatchFactory::BuildArgumentListFromPrimaryArgument'::`2'::<lambda_2>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a07e720

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TGuardValue<TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>,TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>_>,SharedPointerInternals::DefaultDeleter<TGuardValue<TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>,TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>_>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TGuardValue<TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>,TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>_>,SharedPointerInternals::DefaultDeleter<TGuardValue<TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>,TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>_>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a07e760

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TArray<FName,TSizedDefaultAllocator<32>_>,SharedPointerInternals::DefaultDeleter<TArray<FName,TSizedDefaultAllocator<32>_>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TArray<FName,TSizedDefaultAllocator<32>_>,SharedPointerInternals::DefaultDeleter<TArray<FName,TSizedDefaultAllocator<32>_>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a07e7a0

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
FRigVMExecuteContext::_scalar_deleting_destructor_(FRigVMExecuteContext *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FRigVMExecuteContext__6B_;
  pFVar1 = (this->AdditionalTraitMemoryHandles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Traits).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->RuntimeSettings).LogFunction.SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a07e810

void * __thiscall
FRigVMExecuteContextFixLayout::_scalar_deleting_destructor_
          (FRigVMExecuteContextFixLayout *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a07e840

void * __thiscall
FRigVMExecutePin::_scalar_deleting_destructor_(FRigVMExecutePin *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a07e870

void * __thiscall
FRigVMExtendedExecuteContext::_scalar_deleting_destructor_
          (FRigVMExtendedExecuteContext *this,uint param_1)

{
  ~FRigVMExtendedExecuteContext(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x280);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a07e8b0

void * __thiscall
IRigVMGraphFunctionHost::_scalar_deleting_destructor_(IRigVMGraphFunctionHost *this,uint param_1)

{
  *this = (IRigVMGraphFunctionHost)&___7IRigVMGraphFunctionHost__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a07e8f0

void * __thiscall UDataAssetLink::_scalar_deleting_destructor_(UDataAssetLink *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDataAssetLink__6B_;
  pvVar1 = *(void **)&(this->DataAsset).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UNameSpacedUserData::~UNameSpacedUserData((UNameSpacedUserData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a07e970

void * __thiscall
UNameSpacedUserData::_scalar_deleting_destructor_(UNameSpacedUserData *this,uint param_1)

{
  ~UNameSpacedUserData(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a07e9d0

void * __thiscall URigVM::_scalar_deleting_destructor_(URigVM *this,uint param_1)

{
  ~URigVM(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x3b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a07ea30

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
URigVMBlueprintGeneratedClass::_scalar_deleting_destructor_
          (URigVMBlueprintGeneratedClass *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UClass__;
  this->_padding_ = (longlong)&_vftable__for__IBlueprintPropertyGuidProvider__;
  this->_padding_ = (longlong)&___7URigVMBlueprintGeneratedClass__6B_;
  DestructItems<FRigVMTag,int>
            ((FRigVMTag *)(this->AssetVariant).Tags.AllocatorInstance.Data,
             (this->AssetVariant).Tags.ArrayNum);
  pFVar1 = (this->AssetVariant).Tags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SupportedEventNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FRigVMGraphFunctionData,int>
            ((FRigVMGraphFunctionData *)
             (this->GraphFunctionStore).PrivateFunctions.AllocatorInstance.Data,
             (this->GraphFunctionStore).PrivateFunctions.ArrayNum);
  pFVar1 = (this->GraphFunctionStore).PrivateFunctions.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FRigVMGraphFunctionData,int>
            ((FRigVMGraphFunctionData *)
             (this->GraphFunctionStore).PublicFunctions.AllocatorInstance.Data,
             (this->GraphFunctionStore).PublicFunctions.ArrayNum);
  pFVar1 = (this->GraphFunctionStore).PublicFunctions.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IRigVMGraphFunctionHost__6B_;
  UBlueprintGeneratedClass::~UBlueprintGeneratedClass((UBlueprintGeneratedClass *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x3c8);
  }
  return this;
}

// CleanupCPPType @ 14a081f50

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

// EmptyLinkFunctionForGeneratedCodeRigVM @ 14a090eb0

void __cdecl EmptyLinkFunctionForGeneratedCodeRigVM(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigVMAssetUserData @ 14a090ec0

void __cdecl EmptyLinkFunctionForGeneratedCodeRigVMAssetUserData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigVMBlueprintGeneratedClass @ 14a090ed0

void __cdecl EmptyLinkFunctionForGeneratedCodeRigVMBlueprintGeneratedClass(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigVMByteCode @ 14a090ee0

void __cdecl EmptyLinkFunctionForGeneratedCodeRigVMByteCode(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigVMDebugDrawSettings @ 14a090ef0

void __cdecl EmptyLinkFunctionForGeneratedCodeRigVMDebugDrawSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigVMDebugInfo @ 14a090f00

void __cdecl EmptyLinkFunctionForGeneratedCodeRigVMDebugInfo(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigVMDispatchFactory @ 14a090f10

void __cdecl EmptyLinkFunctionForGeneratedCodeRigVMDispatchFactory(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigVMDrawContainer @ 14a090f20

void __cdecl EmptyLinkFunctionForGeneratedCodeRigVMDrawContainer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigVMDrawInstruction @ 14a090f30

void __cdecl EmptyLinkFunctionForGeneratedCodeRigVMDrawInstruction(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigVMDrawInterface @ 14a090f40

void __cdecl EmptyLinkFunctionForGeneratedCodeRigVMDrawInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigVMExecuteContext @ 14a090f50

void __cdecl EmptyLinkFunctionForGeneratedCodeRigVMExecuteContext(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigVMExternalVariable @ 14a090f60

void __cdecl EmptyLinkFunctionForGeneratedCodeRigVMExternalVariable(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigVMFunctionDefines @ 14a090f70

void __cdecl EmptyLinkFunctionForGeneratedCodeRigVMFunctionDefines(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigVMFunction_AnimBase @ 14a090f80

void __cdecl EmptyLinkFunctionForGeneratedCodeRigVMFunction_AnimBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigVMFunction_DebugBase @ 14a090f90

void __cdecl EmptyLinkFunctionForGeneratedCodeRigVMFunction_DebugBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigVMFunction_MathBase @ 14a090fa0

void __cdecl EmptyLinkFunctionForGeneratedCodeRigVMFunction_MathBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigVMFunction_SimBase @ 14a090fb0

void __cdecl EmptyLinkFunctionForGeneratedCodeRigVMFunction_SimBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigVMFunction_SpringMath @ 14a090fc0

void __cdecl EmptyLinkFunctionForGeneratedCodeRigVMFunction_SpringMath(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigVMStatistics @ 14a090fd0

void __cdecl EmptyLinkFunctionForGeneratedCodeRigVMStatistics(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigVMTrait @ 14a090fe0

void __cdecl EmptyLinkFunctionForGeneratedCodeRigVMTrait(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigVM_init @ 14a090ff0

void __cdecl EmptyLinkFunctionForGeneratedCodeRigVM_init(void)

{
  return;
}

// GetExternalVariableDefs @ 14a095470

TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_> * __cdecl
RigVMTypeUtils::GetExternalVariableDefs
          (TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar1 = param_1->ArrayNum;
  pFVar10 = (param_1->AllocatorInstance).Data;
  pFVar11 = pFVar10 + (longlong)iVar1 * 0x30;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FRigVMExternalVariable_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar10 == pFVar11) break;
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar2 <= pFVar10) &&
       (pFVar10 < pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 0x28)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar8;
      }
    }
    iVar7 = __return_storage_ptr__->ArrayNum;
    if (iVar7 == __return_storage_ptr__->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    lVar9 = (longlong)iVar7;
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    uVar5 = *(undefined8 *)(pFVar10 + 8);
    pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
    *(undefined8 *)(pFVar3 + lVar9 * 0x28) = *(undefined8 *)pFVar10;
    *(undefined8 *)(pFVar3 + lVar9 * 0x28 + 8) = uVar5;
    uVar5 = *(undefined8 *)(pFVar10 + 0x18);
    *(undefined8 *)(pFVar3 + lVar9 * 0x28 + 0x10) = *(undefined8 *)(pFVar10 + 0x10);
    *(undefined8 *)(pFVar3 + lVar9 * 0x28 + 0x10 + 8) = uVar5;
    pFVar2 = pFVar10 + 0x20;
    pFVar10 = pFVar10 + 0x30;
    *(undefined8 *)(pFVar3 + lVar9 * 0x28 + 0x20) = *(undefined8 *)pFVar2;
  }
  return __return_storage_ptr__;
}

// GetTypeHash @ 14a099e10

uint __cdecl GetTypeHash(FRigVMBinaryOp *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = GetTypeHash(&param_1->ArgA);
  uVar3 = (byte)param_1->_padding_ - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar3) - uVar1 ^ uVar3 << 8;
  uVar4 = (uVar1 - uVar2) - uVar3 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 0xc;
  uVar1 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar1) - uVar3 ^ uVar1 >> 5;
  uVar3 = (uVar3 - uVar4) - uVar1 ^ uVar4 >> 3;
  uVar2 = (uVar1 - uVar3) - uVar4 ^ uVar3 << 10;
  uVar1 = GetTypeHash(&param_1->ArgB);
  uVar3 = ((uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xf) - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar3) - uVar1 ^ uVar3 << 8;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 0xc;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 << 0x10;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 << 10;
  return (uVar1 - uVar2) - uVar3 ^ uVar2 >> 0xf;
}

// GetTypeHash @ 14a099f50

uint __cdecl GetTypeHash(FRigVMBranchInfo *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  FString *pFVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  wchar_t *pwVar9;
  uint uVar10;
  FString local_18;
  
  iVar1 = param_1->Index;
  pFVar4 = FName::ToString(&param_1->Label,&local_18);
  iVar2 = (pFVar4->Data).ArrayNum;
  iVar5 = iVar2 + -1;
  if (iVar2 == 0) {
    pwVar9 = L"";
    iVar5 = 0;
  }
  else {
    pwVar9 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar9);
  uVar8 = iVar1 - uVar3 ^ uVar3 >> 0xd;
  uVar6 = (-0x61c88647 - uVar8) - uVar3 ^ uVar8 << 8;
  uVar7 = (uVar3 - uVar6) - uVar8 ^ uVar6 >> 0xd;
  uVar8 = (uVar8 - uVar7) - uVar6 ^ uVar7 >> 0xc;
  uVar3 = (uVar6 - uVar8) - uVar7 ^ uVar8 << 0x10;
  uVar6 = (uVar7 - uVar3) - uVar8 ^ uVar3 >> 5;
  uVar7 = (uVar8 - uVar6) - uVar3 ^ uVar6 >> 3;
  uVar3 = (uVar3 - uVar7) - uVar6 ^ uVar7 << 10;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  uVar8 = param_1->InstructionIndex;
  uVar10 = param_1->ArgumentIndex;
  uVar7 = ((uVar6 - uVar3) - uVar7 ^ uVar3 >> 0xf) - uVar8 ^ uVar8 >> 0xd;
  uVar3 = (-0x61c88647 - uVar7) - uVar8 ^ uVar7 << 8;
  uVar6 = (uVar8 - uVar3) - uVar7 ^ uVar3 >> 0xd;
  uVar7 = (uVar7 - uVar6) - uVar3 ^ uVar6 >> 0xc;
  uVar3 = (uVar3 - uVar7) - uVar6 ^ uVar7 << 0x10;
  uVar6 = (uVar6 - uVar3) - uVar7 ^ uVar3 >> 5;
  uVar7 = (uVar7 - uVar6) - uVar3 ^ uVar6 >> 3;
  uVar3 = (uVar3 - uVar7) - uVar6 ^ uVar7 << 10;
  uVar6 = ((uVar6 - uVar3) - uVar7 ^ uVar3 >> 0xf) - uVar10 ^ uVar10 >> 0xd;
  uVar3 = (-0x61c88647 - uVar6) - uVar10 ^ uVar6 << 8;
  uVar8 = (uVar10 - uVar3) - uVar6 ^ uVar3 >> 0xd;
  uVar7 = (uVar6 - uVar8) - uVar3 ^ uVar8 >> 0xc;
  uVar6 = (uVar3 - uVar7) - uVar8 ^ uVar7 << 0x10;
  uVar10 = (uVar8 - uVar6) - uVar7 ^ uVar6 >> 5;
  uVar8 = (uVar7 - uVar10) - uVar6 ^ uVar10 >> 3;
  uVar3 = param_1->FirstInstruction;
  uVar7 = (uVar6 - uVar8) - uVar10 ^ uVar8 << 10;
  uVar6 = param_1->LastInstruction;
  uVar10 = ((uVar10 - uVar7) - uVar8 ^ uVar7 >> 0xf) - uVar3 ^ uVar3 >> 0xd;
  uVar7 = (-0x61c88647 - uVar10) - uVar3 ^ uVar10 << 8;
  uVar8 = (uVar3 - uVar7) - uVar10 ^ uVar7 >> 0xd;
  uVar10 = (uVar10 - uVar8) - uVar7 ^ uVar8 >> 0xc;
  uVar3 = (uVar7 - uVar10) - uVar8 ^ uVar10 << 0x10;
  uVar7 = (uVar8 - uVar3) - uVar10 ^ uVar3 >> 5;
  uVar8 = (uVar10 - uVar7) - uVar3 ^ uVar7 >> 3;
  uVar3 = (uVar3 - uVar8) - uVar7 ^ uVar8 << 10;
  uVar8 = ((uVar7 - uVar3) - uVar8 ^ uVar3 >> 0xf) - uVar6 ^ uVar6 >> 0xd;
  uVar7 = (-0x61c88647 - uVar8) - uVar6 ^ uVar8 << 8;
  uVar3 = (uVar6 - uVar7) - uVar8 ^ uVar7 >> 0xd;
  uVar8 = (uVar8 - uVar3) - uVar7 ^ uVar3 >> 0xc;
  uVar6 = (uVar7 - uVar8) - uVar3 ^ uVar8 << 0x10;
  uVar3 = (uVar3 - uVar6) - uVar8 ^ uVar6 >> 5;
  uVar7 = (uVar8 - uVar3) - uVar6 ^ uVar3 >> 3;
  uVar6 = (uVar6 - uVar7) - uVar3 ^ uVar7 << 10;
  return (uVar3 - uVar6) - uVar7 ^ uVar6 >> 0xf;
}

// GetTypeHash @ 14a09a200

uint __cdecl GetTypeHash(FRigVMBranchInfoKey *param_1)

{
  int iVar1;
  uint uVar2;
  FString *pFVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  wchar_t *pwVar7;
  uint uVar8;
  uint uVar9;
  FString local_18;
  
  pFVar3 = FName::ToString(&param_1->Label,&local_18);
  iVar1 = (pFVar3->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar7 = L"";
    iVar4 = 0;
  }
  else {
    pwVar7 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar7);
  uVar6 = param_1->ArgumentIndex;
  uVar8 = param_1->InstructionIndex - uVar6 ^ uVar6 >> 0xd;
  uVar5 = (-0x61c88647 - uVar8) - uVar6 ^ uVar8 << 8;
  uVar9 = (uVar6 - uVar5) - uVar8 ^ uVar5 >> 0xd;
  uVar8 = (uVar8 - uVar9) - uVar5 ^ uVar9 >> 0xc;
  uVar6 = (uVar5 - uVar8) - uVar9 ^ uVar8 << 0x10;
  uVar9 = (uVar9 - uVar6) - uVar8 ^ uVar6 >> 5;
  uVar5 = (uVar8 - uVar9) - uVar6 ^ uVar9 >> 3;
  uVar6 = (uVar6 - uVar5) - uVar9 ^ uVar5 << 10;
  uVar8 = ((uVar9 - uVar6) - uVar5 ^ uVar6 >> 0xf) - uVar2 ^ uVar2 >> 0xd;
  uVar5 = (-0x61c88647 - uVar8) - uVar2 ^ uVar8 << 8;
  uVar6 = (uVar2 - uVar5) - uVar8 ^ uVar5 >> 0xd;
  uVar8 = (uVar8 - uVar6) - uVar5 ^ uVar6 >> 0xc;
  uVar2 = (uVar5 - uVar8) - uVar6 ^ uVar8 << 0x10;
  uVar6 = (uVar6 - uVar2) - uVar8 ^ uVar2 >> 5;
  uVar5 = (uVar8 - uVar6) - uVar2 ^ uVar6 >> 3;
  uVar2 = (uVar2 - uVar5) - uVar6 ^ uVar5 << 10;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (uVar6 - uVar2) - uVar5 ^ uVar2 >> 0xf;
}

// GetTypeHash @ 14a09a370

uint __cdecl GetTypeHash(FRigVMComparisonOp *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = GetTypeHash(&param_1->A);
  uVar4 = (byte)param_1->_padding_ - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar4) - uVar1 ^ uVar4 << 8;
  uVar3 = (uVar1 - uVar2) - uVar4 ^ uVar2 >> 0xd;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xc;
  uVar1 = (uVar2 - uVar4) - uVar3 ^ uVar4 << 0x10;
  uVar3 = (uVar3 - uVar1) - uVar4 ^ uVar1 >> 5;
  uVar4 = (uVar4 - uVar3) - uVar1 ^ uVar3 >> 3;
  uVar2 = (uVar1 - uVar4) - uVar3 ^ uVar4 << 10;
  uVar1 = GetTypeHash(&param_1->B);
  uVar3 = ((uVar3 - uVar2) - uVar4 ^ uVar2 >> 0xf) - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar3) - uVar1 ^ uVar3 << 8;
  uVar4 = (uVar1 - uVar2) - uVar3 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 0xc;
  uVar1 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar1) - uVar3 ^ uVar1 >> 5;
  uVar3 = (uVar3 - uVar4) - uVar1 ^ uVar4 >> 3;
  uVar2 = (uVar1 - uVar3) - uVar4 ^ uVar3 << 10;
  uVar1 = GetTypeHash(&param_1->Result);
  uVar2 = ((uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xf) - uVar1 ^ uVar1 >> 0xd;
  uVar3 = (-0x61c88647 - uVar2) - uVar1 ^ uVar2 << 8;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar3 >> 0xd;
  uVar2 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar1 ^ uVar2 << 0x10;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar1 ^ uVar2 << 10;
  return (uVar1 - uVar3) - uVar2 ^ uVar3 >> 0xf;
}

// GetTypeHash @ 14a09a530

uint __cdecl GetTypeHash(FRigVMCopyOp *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = GetTypeHash(&param_1->Source);
  uVar3 = (byte)param_1->_padding_ - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar3) - uVar1 ^ uVar3 << 8;
  uVar4 = (uVar1 - uVar2) - uVar3 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 0xc;
  uVar1 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar1) - uVar3 ^ uVar1 >> 5;
  uVar3 = (uVar3 - uVar4) - uVar1 ^ uVar4 >> 3;
  uVar2 = (uVar1 - uVar3) - uVar4 ^ uVar3 << 10;
  uVar1 = GetTypeHash(&param_1->Target);
  uVar3 = ((uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xf) - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar3) - uVar1 ^ uVar3 << 8;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 0xc;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 << 0x10;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 << 10;
  return (uVar1 - uVar2) - uVar3 ^ uVar2 >> 0xf;
}

// GetTypeHash @ 14a09a670

uint __cdecl GetTypeHash(FRigVMExecuteOp *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = param_1->ArgumentCount;
  uVar3 = (uint)param_1->FunctionIndex - (uint)uVar1 ^ (uint)(uVar1 >> 0xd);
  uVar2 = (-0x61c88647 - uVar3) - (uint)uVar1 ^ uVar3 << 8;
  uVar4 = (uVar1 - uVar2) - uVar3 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 0xc;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 10;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xf;
  uVar2 = (byte)param_1->_padding_ - uVar4 ^ uVar4 >> 0xd;
  uVar3 = (-0x61c88647 - uVar2) - uVar4 ^ uVar2 << 8;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xd;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 0x10;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 10;
  return (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xf;
}

// GetTypeHash @ 14a09a790

uint __cdecl GetTypeHash(FRigVMInvokeEntryOp *param_1)

{
  int iVar1;
  uint uVar2;
  FString *pFVar3;
  int iVar4;
  uint uVar5;
  wchar_t *pwVar6;
  uint uVar7;
  uint uVar8;
  FString local_18;
  
  pFVar3 = FName::ToString(&param_1->EntryName,&local_18);
  iVar1 = (pFVar3->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar6 = L"";
    iVar4 = 0;
  }
  else {
    pwVar6 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar6);
  uVar8 = (byte)param_1->_padding_ - uVar2 ^ uVar2 >> 0xd;
  uVar5 = (-0x61c88647 - uVar8) - uVar2 ^ uVar8 << 8;
  uVar7 = (uVar2 - uVar5) - uVar8 ^ uVar5 >> 0xd;
  uVar8 = (uVar8 - uVar7) - uVar5 ^ uVar7 >> 0xc;
  uVar2 = (uVar5 - uVar8) - uVar7 ^ uVar8 << 0x10;
  uVar5 = (uVar7 - uVar2) - uVar8 ^ uVar2 >> 5;
  uVar7 = (uVar8 - uVar5) - uVar2 ^ uVar5 >> 3;
  uVar2 = (uVar2 - uVar7) - uVar5 ^ uVar7 << 10;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (uVar5 - uVar2) - uVar7 ^ uVar2 >> 0xf;
}

// GetTypeHash @ 14a09a870

uint __cdecl GetTypeHash(FRigVMJumpIfOp *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = param_1->InstructionIndex;
  uVar1 = GetTypeHash((FRigVMUnaryOp *)param_1);
  uVar5 = uVar1 - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar5) - uVar2 ^ uVar5 << 8;
  uVar4 = (uVar2 - uVar1) - uVar5 ^ uVar1 >> 0xd;
  uVar5 = (uVar5 - uVar4) - uVar1 ^ uVar4 >> 0xc;
  uVar2 = (uVar1 - uVar5) - uVar4 ^ uVar5 << 0x10;
  uVar1 = (uVar4 - uVar2) - uVar5 ^ uVar2 >> 5;
  uVar4 = (uVar5 - uVar1) - uVar2 ^ uVar1 >> 3;
  uVar2 = (uVar2 - uVar4) - uVar1 ^ uVar4 << 10;
  uVar2 = (uVar1 - uVar2) - uVar4 ^ uVar2 >> 0xf;
  iVar3 = uVar2 - param_1->Condition;
  uVar4 = 0x9e3779b9 - uVar2 ^ iVar3 * 0x100;
  uVar1 = (param_1->Condition - uVar4) - iVar3 ^ uVar4 >> 0xd;
  uVar2 = (iVar3 - uVar1) - uVar4 ^ uVar1 >> 0xc;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 << 0x10;
  uVar1 = (uVar1 - uVar2) - uVar4 ^ uVar4 >> 5;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 3;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 << 10;
  return (uVar1 - uVar4) - uVar2 ^ uVar4 >> 0xf;
}

// GetTypeHash @ 14a09a990

uint __cdecl GetTypeHash(FRigVMJumpOp *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = param_1->InstructionIndex;
  uVar3 = (byte)param_1->_padding_ - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar3) - uVar2 ^ uVar3 << 8;
  uVar4 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xd;
  uVar3 = (uVar3 - uVar4) - uVar1 ^ uVar4 >> 0xc;
  uVar2 = (uVar1 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar1 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 3;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar1 << 10;
  return (uVar4 - uVar2) - uVar1 ^ uVar2 >> 0xf;
}

// GetTypeHash @ 14a09aa30

uint __cdecl GetTypeHash(FRigVMJumpToBranchOp *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = param_1->FirstBranchInfoIndex;
  uVar3 = *(byte *)param_1 - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar3) - uVar2 ^ uVar3 << 8;
  uVar4 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xd;
  uVar3 = (uVar3 - uVar4) - uVar1 ^ uVar4 >> 0xc;
  uVar2 = (uVar1 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar1 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 3;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar1 << 10;
  return (uVar4 - uVar2) - uVar1 ^ uVar2 >> 0xf;
}

// GetTypeHash @ 14a09aad0

uint __cdecl GetTypeHash(FRigVMOperand *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = param_1->RegisterOffset;
  uVar2 = param_1->RegisterIndex;
  uVar4 = (uint)param_1->MemoryType - (uint)uVar2 ^ (uint)(uVar2 >> 0xd);
  uVar3 = (-0x61c88647 - uVar4) - (uint)uVar2 ^ uVar4 << 8;
  uVar5 = (uVar2 - uVar3) - uVar4 ^ uVar3 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar3 ^ uVar5 >> 0xc;
  uVar3 = (uVar3 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar3) - uVar4 ^ uVar3 >> 5;
  uVar4 = (uVar4 - uVar5) - uVar3 ^ uVar5 >> 3;
  uVar3 = (uVar3 - uVar4) - uVar5 ^ uVar4 << 10;
  uVar4 = ((uVar5 - uVar3) - uVar4 ^ uVar3 >> 0xf) - (uint)uVar1 ^ (uint)(uVar1 >> 0xd);
  uVar3 = (-0x61c88647 - uVar4) - (uint)uVar1 ^ uVar4 << 8;
  uVar5 = (uVar1 - uVar3) - uVar4 ^ uVar3 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar3 ^ uVar5 >> 0xc;
  uVar3 = (uVar3 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar3) - uVar4 ^ uVar3 >> 5;
  uVar4 = (uVar4 - uVar5) - uVar3 ^ uVar5 >> 3;
  uVar3 = (uVar3 - uVar4) - uVar5 ^ uVar4 << 10;
  return (uVar5 - uVar3) - uVar4 ^ uVar3 >> 0xf;
}

// GetTypeHash @ 14a09abf0

uint __cdecl GetTypeHash(FRigVMQuaternaryOp *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = GetTypeHash(&param_1->ArgA);
  uVar4 = (byte)param_1->_padding_ - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar4) - uVar1 ^ uVar4 << 8;
  uVar3 = (uVar1 - uVar2) - uVar4 ^ uVar2 >> 0xd;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xc;
  uVar1 = (uVar2 - uVar4) - uVar3 ^ uVar4 << 0x10;
  uVar3 = (uVar3 - uVar1) - uVar4 ^ uVar1 >> 5;
  uVar4 = (uVar4 - uVar3) - uVar1 ^ uVar3 >> 3;
  uVar2 = (uVar1 - uVar4) - uVar3 ^ uVar4 << 10;
  uVar1 = GetTypeHash(&param_1->ArgB);
  uVar4 = ((uVar3 - uVar2) - uVar4 ^ uVar2 >> 0xf) - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar4) - uVar1 ^ uVar4 << 8;
  uVar3 = (uVar1 - uVar2) - uVar4 ^ uVar2 >> 0xd;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xc;
  uVar1 = (uVar2 - uVar4) - uVar3 ^ uVar4 << 0x10;
  uVar3 = (uVar3 - uVar1) - uVar4 ^ uVar1 >> 5;
  uVar4 = (uVar4 - uVar3) - uVar1 ^ uVar3 >> 3;
  uVar2 = (uVar1 - uVar4) - uVar3 ^ uVar4 << 10;
  uVar1 = GetTypeHash(&param_1->ArgC);
  uVar3 = ((uVar3 - uVar2) - uVar4 ^ uVar2 >> 0xf) - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar3) - uVar1 ^ uVar3 << 8;
  uVar4 = (uVar1 - uVar2) - uVar3 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 0xc;
  uVar1 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar1) - uVar3 ^ uVar1 >> 5;
  uVar3 = (uVar3 - uVar4) - uVar1 ^ uVar4 >> 3;
  uVar2 = (uVar1 - uVar3) - uVar4 ^ uVar3 << 10;
  uVar1 = GetTypeHash(&param_1->ArgD);
  uVar2 = ((uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xf) - uVar1 ^ uVar1 >> 0xd;
  uVar3 = (-0x61c88647 - uVar2) - uVar1 ^ uVar2 << 8;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar3 >> 0xd;
  uVar2 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar1 ^ uVar2 << 0x10;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar1 ^ uVar2 << 10;
  return (uVar1 - uVar3) - uVar2 ^ uVar3 >> 0xf;
}

// GetTypeHash @ 14a09ae00

uint __cdecl GetTypeHash(FRigVMQuinaryOp *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = GetTypeHash(&param_1->ArgA);
  uVar4 = (byte)param_1->_padding_ - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar4) - uVar1 ^ uVar4 << 8;
  uVar3 = (uVar1 - uVar2) - uVar4 ^ uVar2 >> 0xd;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xc;
  uVar1 = (uVar2 - uVar4) - uVar3 ^ uVar4 << 0x10;
  uVar3 = (uVar3 - uVar1) - uVar4 ^ uVar1 >> 5;
  uVar4 = (uVar4 - uVar3) - uVar1 ^ uVar3 >> 3;
  uVar2 = (uVar1 - uVar4) - uVar3 ^ uVar4 << 10;
  uVar1 = GetTypeHash(&param_1->ArgB);
  uVar4 = ((uVar3 - uVar2) - uVar4 ^ uVar2 >> 0xf) - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar4) - uVar1 ^ uVar4 << 8;
  uVar3 = (uVar1 - uVar2) - uVar4 ^ uVar2 >> 0xd;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xc;
  uVar1 = (uVar2 - uVar4) - uVar3 ^ uVar4 << 0x10;
  uVar3 = (uVar3 - uVar1) - uVar4 ^ uVar1 >> 5;
  uVar4 = (uVar4 - uVar3) - uVar1 ^ uVar3 >> 3;
  uVar2 = (uVar1 - uVar4) - uVar3 ^ uVar4 << 10;
  uVar1 = GetTypeHash(&param_1->ArgC);
  uVar3 = ((uVar3 - uVar2) - uVar4 ^ uVar2 >> 0xf) - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar3) - uVar1 ^ uVar3 << 8;
  uVar4 = (uVar1 - uVar2) - uVar3 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 0xc;
  uVar1 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar1) - uVar3 ^ uVar1 >> 5;
  uVar3 = (uVar3 - uVar4) - uVar1 ^ uVar4 >> 3;
  uVar2 = (uVar1 - uVar3) - uVar4 ^ uVar3 << 10;
  uVar1 = GetTypeHash(&param_1->ArgD);
  uVar4 = ((uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xf) - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar4) - uVar1 ^ uVar4 << 8;
  uVar3 = (uVar1 - uVar2) - uVar4 ^ uVar2 >> 0xd;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xc;
  uVar1 = (uVar2 - uVar4) - uVar3 ^ uVar4 << 0x10;
  uVar3 = (uVar3 - uVar1) - uVar4 ^ uVar1 >> 5;
  uVar4 = (uVar4 - uVar3) - uVar1 ^ uVar3 >> 3;
  uVar2 = (uVar1 - uVar4) - uVar3 ^ uVar4 << 10;
  uVar1 = GetTypeHash(&param_1->ArgE);
  uVar2 = ((uVar3 - uVar2) - uVar4 ^ uVar2 >> 0xf) - uVar1 ^ uVar1 >> 0xd;
  uVar3 = (-0x61c88647 - uVar2) - uVar1 ^ uVar2 << 8;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar3 >> 0xd;
  uVar2 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar1 ^ uVar2 << 0x10;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar1 ^ uVar2 << 10;
  return (uVar1 - uVar3) - uVar2 ^ uVar3 >> 0xf;
}

// GetTypeHash @ 14a09b0b0

uint __cdecl GetTypeHash(FRigVMRunInstructionsOp *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = param_1->StartInstruction;
  uVar4 = param_1->EndInstruction;
  uVar3 = (byte)param_1->_padding_ - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar3) - uVar2 ^ uVar3 << 8;
  uVar5 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xd;
  uVar3 = (uVar3 - uVar5) - uVar1 ^ uVar5 >> 0xc;
  uVar2 = (uVar1 - uVar3) - uVar5 ^ uVar3 << 0x10;
  uVar5 = (uVar5 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar1 = (uVar3 - uVar5) - uVar2 ^ uVar5 >> 3;
  uVar2 = (uVar2 - uVar1) - uVar5 ^ uVar1 << 10;
  uVar3 = ((uVar5 - uVar2) - uVar1 ^ uVar2 >> 0xf) - uVar4 ^ uVar4 >> 0xd;
  uVar1 = (-0x61c88647 - uVar3) - uVar4 ^ uVar3 << 8;
  uVar2 = (uVar4 - uVar1) - uVar3 ^ uVar1 >> 0xd;
  uVar3 = (uVar3 - uVar2) - uVar1 ^ uVar2 >> 0xc;
  uVar4 = (uVar1 - uVar3) - uVar2 ^ uVar3 << 0x10;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 5;
  uVar1 = (uVar3 - uVar2) - uVar4 ^ uVar2 >> 3;
  uVar4 = (uVar4 - uVar1) - uVar2 ^ uVar1 << 10;
  return (uVar2 - uVar4) - uVar1 ^ uVar4 >> 0xf;
}

// GetTypeHash @ 14a09b1d0

uint __cdecl GetTypeHash(FRigVMSenaryOp *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = GetTypeHash(&param_1->ArgA);
  uVar4 = (byte)param_1->_padding_ - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar4) - uVar1 ^ uVar4 << 8;
  uVar3 = (uVar1 - uVar2) - uVar4 ^ uVar2 >> 0xd;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xc;
  uVar1 = (uVar2 - uVar4) - uVar3 ^ uVar4 << 0x10;
  uVar3 = (uVar3 - uVar1) - uVar4 ^ uVar1 >> 5;
  uVar4 = (uVar4 - uVar3) - uVar1 ^ uVar3 >> 3;
  uVar2 = (uVar1 - uVar4) - uVar3 ^ uVar4 << 10;
  uVar1 = GetTypeHash(&param_1->ArgB);
  uVar4 = ((uVar3 - uVar2) - uVar4 ^ uVar2 >> 0xf) - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar4) - uVar1 ^ uVar4 << 8;
  uVar3 = (uVar1 - uVar2) - uVar4 ^ uVar2 >> 0xd;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xc;
  uVar1 = (uVar2 - uVar4) - uVar3 ^ uVar4 << 0x10;
  uVar3 = (uVar3 - uVar1) - uVar4 ^ uVar1 >> 5;
  uVar4 = (uVar4 - uVar3) - uVar1 ^ uVar3 >> 3;
  uVar2 = (uVar1 - uVar4) - uVar3 ^ uVar4 << 10;
  uVar1 = GetTypeHash(&param_1->ArgC);
  uVar3 = ((uVar3 - uVar2) - uVar4 ^ uVar2 >> 0xf) - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar3) - uVar1 ^ uVar3 << 8;
  uVar4 = (uVar1 - uVar2) - uVar3 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 0xc;
  uVar1 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar1) - uVar3 ^ uVar1 >> 5;
  uVar3 = (uVar3 - uVar4) - uVar1 ^ uVar4 >> 3;
  uVar2 = (uVar1 - uVar3) - uVar4 ^ uVar3 << 10;
  uVar1 = GetTypeHash(&param_1->ArgD);
  uVar4 = ((uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xf) - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar4) - uVar1 ^ uVar4 << 8;
  uVar3 = (uVar1 - uVar2) - uVar4 ^ uVar2 >> 0xd;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xc;
  uVar1 = (uVar2 - uVar4) - uVar3 ^ uVar4 << 0x10;
  uVar3 = (uVar3 - uVar1) - uVar4 ^ uVar1 >> 5;
  uVar4 = (uVar4 - uVar3) - uVar1 ^ uVar3 >> 3;
  uVar2 = (uVar1 - uVar4) - uVar3 ^ uVar4 << 10;
  uVar1 = GetTypeHash(&param_1->ArgE);
  uVar3 = ((uVar3 - uVar2) - uVar4 ^ uVar2 >> 0xf) - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar3) - uVar1 ^ uVar3 << 8;
  uVar4 = (uVar1 - uVar2) - uVar3 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 0xc;
  uVar1 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar1) - uVar3 ^ uVar1 >> 5;
  uVar3 = (uVar3 - uVar4) - uVar1 ^ uVar4 >> 3;
  uVar2 = (uVar1 - uVar3) - uVar4 ^ uVar3 << 10;
  uVar1 = GetTypeHash(&param_1->ArgF);
  uVar2 = ((uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xf) - uVar1 ^ uVar1 >> 0xd;
  uVar3 = (-0x61c88647 - uVar2) - uVar1 ^ uVar2 << 8;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar3 >> 0xd;
  uVar2 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar1 ^ uVar2 << 0x10;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar1 ^ uVar2 << 10;
  return (uVar1 - uVar3) - uVar2 ^ uVar3 >> 0xf;
}

// GetTypeHash @ 14a09b4e0

uint __cdecl GetTypeHash(FRigVMTernaryOp *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = GetTypeHash(&param_1->ArgA);
  uVar4 = (byte)param_1->_padding_ - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar4) - uVar1 ^ uVar4 << 8;
  uVar3 = (uVar1 - uVar2) - uVar4 ^ uVar2 >> 0xd;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xc;
  uVar1 = (uVar2 - uVar4) - uVar3 ^ uVar4 << 0x10;
  uVar3 = (uVar3 - uVar1) - uVar4 ^ uVar1 >> 5;
  uVar4 = (uVar4 - uVar3) - uVar1 ^ uVar3 >> 3;
  uVar2 = (uVar1 - uVar4) - uVar3 ^ uVar4 << 10;
  uVar1 = GetTypeHash(&param_1->ArgB);
  uVar3 = ((uVar3 - uVar2) - uVar4 ^ uVar2 >> 0xf) - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar3) - uVar1 ^ uVar3 << 8;
  uVar4 = (uVar1 - uVar2) - uVar3 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 0xc;
  uVar1 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar1) - uVar3 ^ uVar1 >> 5;
  uVar3 = (uVar3 - uVar4) - uVar1 ^ uVar4 >> 3;
  uVar2 = (uVar1 - uVar3) - uVar4 ^ uVar3 << 10;
  uVar1 = GetTypeHash(&param_1->ArgC);
  uVar2 = ((uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xf) - uVar1 ^ uVar1 >> 0xd;
  uVar3 = (-0x61c88647 - uVar2) - uVar1 ^ uVar2 << 8;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar3 >> 0xd;
  uVar2 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar1 ^ uVar2 << 0x10;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar1 ^ uVar2 << 10;
  return (uVar1 - uVar3) - uVar2 ^ uVar3 >> 0xf;
}

// GetTypeHash @ 14a09b6a0

uint __cdecl GetTypeHash(FRigVMUnaryOp *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = GetTypeHash(&param_1->Arg);
  uVar3 = (byte)param_1->_padding_ - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar3) - uVar1 ^ uVar3 << 8;
  uVar4 = (uVar1 - uVar2) - uVar3 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 0xc;
  uVar1 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar1) - uVar3 ^ uVar1 >> 5;
  uVar2 = (uVar3 - uVar4) - uVar1 ^ uVar4 >> 3;
  uVar1 = (uVar1 - uVar2) - uVar4 ^ uVar2 << 10;
  return (uVar4 - uVar1) - uVar2 ^ uVar1 >> 0xf;
}

// Z_Construct_UClass_UDataAssetLink_NoRegister @ 14a0a8a90

UClass * __cdecl Z_Construct_UClass_UDataAssetLink_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataAssetLink.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/RigVM",L"DataAssetLink",
               &Z_Registration_Info_UClass_UDataAssetLink.InnerSingleton,
               UDataAssetLink::StaticRegisterNativesUDataAssetLink,0x130,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDataAssetLink>,
               InternalVTableHelperCtorCaller<UDataAssetLink>,local_res8,
               UNameSpacedUserData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataAssetLink.InnerSingleton;
}

// Z_Construct_UClass_UNameSpacedUserData_NoRegister @ 14a0a8b50

UClass * __cdecl Z_Construct_UClass_UNameSpacedUserData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNameSpacedUserData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/RigVM",L"NameSpacedUserData",
               &Z_Registration_Info_UClass_UNameSpacedUserData.InnerSingleton,
               UNameSpacedUserData::StaticRegisterNativesUNameSpacedUserData,0x100,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNameSpacedUserData>,
               InternalVTableHelperCtorCaller<UNameSpacedUserData>,local_res8,
               UAssetUserData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNameSpacedUserData.InnerSingleton;
}

// Z_Construct_UClass_URigVMBlueprintGeneratedClass_NoRegister @ 14a0a8c10

UClass * __cdecl Z_Construct_UClass_URigVMBlueprintGeneratedClass_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URigVMBlueprintGeneratedClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UClass::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/RigVM",L"RigVMBlueprintGeneratedClass",
               &Z_Registration_Info_UClass_URigVMBlueprintGeneratedClass.InnerSingleton,
               URigVMBlueprintGeneratedClass::StaticRegisterNativesURigVMBlueprintGeneratedClass,
               0x3c8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<URigVMBlueprintGeneratedClass>,
               InternalVTableHelperCtorCaller<URigVMBlueprintGeneratedClass>,local_res8,
               UBlueprintGeneratedClass::StaticClass,UPackage::StaticClass);
  }
  return Z_Registration_Info_UClass_URigVMBlueprintGeneratedClass.InnerSingleton;
}

// Z_Construct_UClass_URigVM_NoRegister @ 14a0a8cd0

UClass * __cdecl Z_Construct_UClass_URigVM_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URigVM.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/RigVM",L"RigVM",&Z_Registration_Info_UClass_URigVM.InnerSingleton,
               URigVM::StaticRegisterNativesURigVM,0x3b0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<URigVM>,InternalVTableHelperCtorCaller<URigVM>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URigVM.InnerSingleton;
}

// Z_Construct_UEnum_RigVM_ERigVMClampSpatialMode @ 14a0a8d80

UEnum * __cdecl Z_Construct_UEnum_RigVM_ERigVMClampSpatialMode(void)

{
  if (Z_Registration_Info_UEnum_ERigVMClampSpatialMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERigVMClampSpatialMode.InnerSingleton,
               &Z_Construct_UEnum_RigVM_ERigVMClampSpatialMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERigVMClampSpatialMode.InnerSingleton;
}

// Z_Construct_UEnum_RigVM_ERigVMCopyType @ 14a0a8dc0

UEnum * __cdecl Z_Construct_UEnum_RigVM_ERigVMCopyType(void)

{
  if (Z_Registration_Info_UEnum_ERigVMCopyType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERigVMCopyType.InnerSingleton,
               &Z_Construct_UEnum_RigVM_ERigVMCopyType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERigVMCopyType.InnerSingleton;
}

// Z_Construct_UEnum_RigVM_ERigVMTransformSpace @ 14a0a8e00

UEnum * __cdecl Z_Construct_UEnum_RigVM_ERigVMTransformSpace(void)

{
  if (Z_Registration_Info_UEnum_ERigVMTransformSpace.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERigVMTransformSpace.InnerSingleton,
               &Z_Construct_UEnum_RigVM_ERigVMTransformSpace_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERigVMTransformSpace.InnerSingleton;
}

// Z_Construct_UScriptStruct_FRigVMBinaryOp @ 14a0a8e40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMBinaryOp(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMBinaryOp.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMBinaryOp.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMBinaryOp_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMBinaryOp.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMBinaryOp.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMChangeTypeOp @ 14a0a8ec0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMChangeTypeOp(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMChangeTypeOp.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMChangeTypeOp.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMChangeTypeOp_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMChangeTypeOp.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMChangeTypeOp.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMComparisonOp @ 14a0a8f40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMComparisonOp(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMComparisonOp.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMComparisonOp.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMComparisonOp_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMComparisonOp.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMComparisonOp.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMCopyOp @ 14a0a8fc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMCopyOp(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMCopyOp.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMCopyOp.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMCopyOp_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMCopyOp.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMCopyOp.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMDebugInfo @ 14a0a9040

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMDebugInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMDebugInfo.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMDebugInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMDebugInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMDebugInfo.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMDebugInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMDispatchFactory @ 14a0a90c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMDispatchFactory(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMDispatchFactory.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMDispatchFactory.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMDispatchFactory_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMDispatchFactory.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FRigVMDispatchFactory.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMDrawInterface @ 14a0a9140

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMDrawInterface(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMDrawInterface.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMDrawInterface.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMDrawInterface_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMDrawInterface.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FRigVMDrawInterface.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMExecuteContext @ 14a0a91c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMExecuteContext(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMExecuteContext_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMExecuteOp @ 14a0a9240

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMExecuteOp(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMExecuteOp.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMExecuteOp.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMExecuteOp_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMExecuteOp.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMExecuteOp.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMExternalVariable @ 14a0a92c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMExternalVariable(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMExternalVariable.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMExternalVariable.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMExternalVariable_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMExternalVariable.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMExternalVariable.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMFunction_AnimBase @ 14a0a9340

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMFunction_AnimBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_AnimBase.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMFunction_AnimBase.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMFunction_AnimBase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_AnimBase.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMFunction_AnimBase.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMFunction_DampFloat @ 14a0a93c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMFunction_DampFloat(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_DampFloat.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMFunction_DampFloat.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMFunction_DampFloat_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_DampFloat.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMFunction_DampFloat.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMFunction_DampQuaternion @ 14a0a9440

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMFunction_DampQuaternion(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_DampQuaternion.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMFunction_DampQuaternion.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMFunction_DampQuaternion_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_DampQuaternion.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMFunction_DampQuaternion.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMFunction_DampVector @ 14a0a94c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMFunction_DampVector(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_DampVector.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMFunction_DampVector.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMFunction_DampVector_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_DampVector.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMFunction_DampVector.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMFunction_DebugBase @ 14a0a9540

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMFunction_DebugBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_DebugBase.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMFunction_DebugBase.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMFunction_DebugBase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_DebugBase.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMFunction_DebugBase.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMFunction_DebugBaseMutable @ 14a0a95c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMFunction_DebugBaseMutable(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_DebugBaseMutable.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMFunction_DebugBaseMutable.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMFunction_DebugBaseMutable_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_DebugBaseMutable.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMFunction_DebugBaseMutable.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMFunction_SimBase @ 14a0a9640

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMFunction_SimBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_SimBase.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMFunction_SimBase.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMFunction_SimBase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_SimBase.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMFunction_SimBase.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMFunction_SimBaseMutable @ 14a0a96c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMFunction_SimBaseMutable(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_SimBaseMutable.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMFunction_SimBaseMutable.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMFunction_SimBaseMutable_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_SimBaseMutable.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMFunction_SimBaseMutable.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMFunction_SpringDampFloat @ 14a0a9740

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMFunction_SpringDampFloat(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_SpringDampFloat.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMFunction_SpringDampFloat.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMFunction_SpringDampFloat_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_SpringDampFloat.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMFunction_SpringDampFloat.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMFunction_SpringDampQuat @ 14a0a97c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMFunction_SpringDampQuat(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_SpringDampQuat.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMFunction_SpringDampQuat.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMFunction_SpringDampQuat_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_SpringDampQuat.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMFunction_SpringDampQuat.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMFunction_SpringDampVector @ 14a0a9840

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMFunction_SpringDampVector(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_SpringDampVector.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMFunction_SpringDampVector.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMFunction_SpringDampVector_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_SpringDampVector.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMFunction_SpringDampVector.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMInvokeEntryOp @ 14a0a98c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMInvokeEntryOp(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMInvokeEntryOp.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMInvokeEntryOp.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMInvokeEntryOp_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMInvokeEntryOp.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FRigVMInvokeEntryOp.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMJumpIfOp @ 14a0a9940

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMJumpIfOp(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMJumpIfOp.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMJumpIfOp.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMJumpIfOp_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMJumpIfOp.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMJumpIfOp.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMJumpOp @ 14a0a99c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMJumpOp(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMJumpOp.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMJumpOp.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMJumpOp_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMJumpOp.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMJumpOp.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMJumpToBranchOp @ 14a0a9a40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMJumpToBranchOp(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMJumpToBranchOp.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMJumpToBranchOp.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMJumpToBranchOp_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMJumpToBranchOp.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FRigVMJumpToBranchOp.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMQuaternaryOp @ 14a0a9ac0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMQuaternaryOp(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMQuaternaryOp.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMQuaternaryOp.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMQuaternaryOp_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMQuaternaryOp.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMQuaternaryOp.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMQuinaryOp @ 14a0a9b40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMQuinaryOp(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMQuinaryOp.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMQuinaryOp.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMQuinaryOp_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMQuinaryOp.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMQuinaryOp.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMRunInstructionsOp @ 14a0a9bc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMRunInstructionsOp(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMRunInstructionsOp.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMRunInstructionsOp.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMRunInstructionsOp_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMRunInstructionsOp.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMRunInstructionsOp.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMRuntimeSettings @ 14a0a9c40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMRuntimeSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMRuntimeSettings.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMRuntimeSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMRuntimeSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMRuntimeSettings.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FRigVMRuntimeSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMSenaryOp @ 14a0a9cc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMSenaryOp(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMSenaryOp.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMSenaryOp.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMSenaryOp_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMSenaryOp.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMSenaryOp.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMSetupTraitsOp @ 14a0a9d40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMSetupTraitsOp(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMSetupTraitsOp.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMSetupTraitsOp.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMSetupTraitsOp_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMSetupTraitsOp.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FRigVMSetupTraitsOp.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMSlice @ 14a0a9dc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMSlice(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMSlice.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMSlice.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMSlice_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMSlice.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMSlice.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMTernaryOp @ 14a0a9e40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMTernaryOp(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMTernaryOp.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMTernaryOp.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMTernaryOp_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMTernaryOp.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMTernaryOp.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVMTrait @ 14a0a9ec0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVMTrait(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVMTrait.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVMTrait.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVMTrait_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMTrait.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVMTrait.InnerSingleton;
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

// EmptyInstructionIndices'' @ 15041b550

void __cdecl `dynamic_atexit_destructor_for_'FRigVMByteCode::EmptyInstructionIndices__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FRigVMByteCode::EmptyInstructionIndices.AllocatorInstance.Data;
  if (FRigVMByteCode::EmptyInstructionIndices.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FRigVMByteCode::EmptyInstructionIndices.AllocatorInstance.Data !=
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

// EmptyUserDatas'' @ 15041b570

void __cdecl `dynamic_atexit_destructor_for_'UNameSpacedUserData::EmptyUserDatas__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UNameSpacedUserData::EmptyUserDatas.AllocatorInstance.Data;
  if (UNameSpacedUserData::EmptyUserDatas.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (UNameSpacedUserData::EmptyUserDatas.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
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

// GetTemplateMutex'' @ 15041b590

void __cdecl `dynamic_atexit_destructor_for_'FRigVMDispatchFactory::GetTemplateMutex__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015041b597. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&FRigVMDispatchFactory::GetTemplateMutex);
  return;
}

// `dynamic_atexit_destructor_for_'CRExecuteContextPath'' @ 15041b5b0

void __cdecl
`FRigVMExecuteContext::SerializeFromMismatchedTag'::__l5::
_dynamic_atexit_destructor_for__CRExecuteContextPath__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = CRExecuteContextPath.Data.AllocatorInstance.Data;
  if (CRExecuteContextPath.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (CRExecuteContextPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'CVarEnableRigVMDrawInterfaceInShipping'' @ 15041b5d0

void __cdecl _dynamic_atexit_destructor_for__CVarEnableRigVMDrawInterfaceInShipping__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarEnableRigVMDrawInterfaceInShipping);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRigVMReportAllMessages'' @ 15041b5f0

void __cdecl _dynamic_atexit_destructor_for__CVarRigVMReportAllMessages__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRigVMReportAllMessages);
  return;
}

// `dynamic_atexit_destructor_for_'EmptyArguments'' @ 15041b610

void __cdecl
`FRigVMDispatchFactory::GetArgumentInfos'::__l2::_dynamic_atexit_destructor_for__EmptyArguments__
          (void)

{
  DestructItems<FRigVMTemplateArgumentInfo,int>
            ((FRigVMTemplateArgumentInfo *)EmptyArguments.AllocatorInstance.Data,
             EmptyArguments.ArrayNum);
  if (EmptyArguments.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(EmptyArguments.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'EmptyArguments'' @ 15041b650

void __cdecl
`FRigVMDispatchFactory::GetExecuteArguments_Impl'::__l2::
_dynamic_atexit_destructor_for__EmptyArguments__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EmptyArguments.AllocatorInstance.Data;
  if (EmptyArguments.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EmptyArguments.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EmptyArray'' @ 15041b670

void __cdecl
`FRigVMDispatchFactory::GetControlFlowBlocks_Impl'::__l2::
_dynamic_atexit_destructor_for__EmptyArray__(void)

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

// `dynamic_atexit_destructor_for_'StaticNameCache'' @ 15041b690

void __cdecl
`FRigVMExecuteContext::Initialize'::__l5::_dynamic_atexit_destructor_for__StaticNameCache__(void)

{
  `public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
  StaticNameCache.BoolCache._72_4_ = 0;
  if (`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
      StaticNameCache.BoolCache._64_8_ != 0) {
    FMemory::Free((void *)`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                          ::__l5::StaticNameCache.BoolCache._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigVMNameOp,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigVMNameOp,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigVMNameOp,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5
                 ::StaticNameCache.BoolCache);
  `public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
  StaticNameCache.NameCache._72_4_ = 0;
  if (`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
      StaticNameCache.NameCache._64_8_ != 0) {
    FMemory::Free((void *)`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                          ::__l5::StaticNameCache.NameCache._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigVMNameOp,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigVMNameOp,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigVMNameOp,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5
                 ::StaticNameCache);
  return;
}

