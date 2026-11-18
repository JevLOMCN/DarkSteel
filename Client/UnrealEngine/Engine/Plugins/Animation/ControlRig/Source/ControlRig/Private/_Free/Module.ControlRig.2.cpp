// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 1099

// ColorMetaName'' @ 1411be770

void __cdecl `dynamic_initializer_for_'FRigSocketElement::ColorMetaName__(void)

{
  ::FName::FName(&FRigSocketElement::ColorMetaName,L"SocketColor");
  return;
}

// DescriptionMetaName'' @ 1411be790

void __cdecl `dynamic_initializer_for_'FRigSocketElement::DescriptionMetaName__(void)

{
  ::FName::FName(&FRigSocketElement::DescriptionMetaName,L"SocketDescription");
  return;
}

// DesiredParentMetaName'' @ 1411be7b0

void __cdecl `dynamic_initializer_for_'FRigSocketElement::DesiredParentMetaName__(void)

{
  ::FName::FName(&FRigSocketElement::DesiredParentMetaName,L"SocketDesiredParent");
  return;
}

// PathSeparator'' @ 1411be7d0

void __cdecl `dynamic_initializer_for_'FControlRigOverrideValue::PathSeparator__(void)

{
  ::FString::FString(&FControlRigOverrideValue::PathSeparator,L"->");
  atexit(`dynamic_atexit_destructor_for_'FControlRigOverrideValue::PathSeparator__);
  return;
}

// RootNodeID'' @ 1411be800

void __cdecl `dynamic_initializer_for_'FOverriddenPropertySet::RootNodeID__(void)

{
  FOverriddenPropertyNodeID::RootNodeId(&FOverriddenPropertySet::RootNodeID);
  atexit(`dynamic_atexit_destructor_for_'FOverriddenPropertySet::RootNodeID__);
  return;
}

// SocketDefaultColor'' @ 1411be830

void __cdecl `dynamic_initializer_for_'FRigSocketElement::SocketDefaultColor__(void)

{
  FRigSocketElement::SocketDefaultColor = FLinearColor::White;
  return;
}

// `dynamic_initializer_for_'BoolArrayTypeName'' @ 1411be850

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

// `dynamic_initializer_for_'BoolTypeName'' @ 1411be8a0

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

// `dynamic_initializer_for_'DoubleArrayTypeName'' @ 1411be8f0

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

// `dynamic_initializer_for_'DoubleTypeName'' @ 1411be940

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

// `dynamic_initializer_for_'FNameArrayTypeName'' @ 1411be990

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

// `dynamic_initializer_for_'FNameTypeName'' @ 1411be9e0

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

// `dynamic_initializer_for_'FStringArrayTypeName'' @ 1411bea30

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

// `dynamic_initializer_for_'FStringTypeName'' @ 1411bea80

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

// `dynamic_initializer_for_'FTextTypeName'' @ 1411bead0

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

// `dynamic_initializer_for_'FloatArrayTypeName'' @ 1411beb20

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

// `dynamic_initializer_for_'FloatTypeName'' @ 1411beb70

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

// `dynamic_initializer_for_'Int32ArrayTypeName'' @ 1411bebc0

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

// `dynamic_initializer_for_'Int32TypeName'' @ 1411bec10

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

// `dynamic_initializer_for_'Int64TypeName'' @ 1411bec60

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

// `dynamic_initializer_for_'IntTypeName'' @ 1411becb0

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

// `dynamic_initializer_for_'LLMTagDeclaration_Animation_ControlRig'' @ 1411bed00

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_Animation_ControlRig__(void)

{
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_Animation_ControlRig,L"Animation_ControlRig",(FName)0x0,(FName)0x0,
             (FName)0x0,(FName)0x0,None);
  return;
}

// `dynamic_initializer_for_'UInt32ArrayTypeName'' @ 1411bed50

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

// `dynamic_initializer_for_'UInt32TypeName'' @ 1411beda0

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

// `dynamic_initializer_for_'UInt64TypeName'' @ 1411bedf0

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

// `dynamic_initializer_for_'UInt8ArrayTypeName'' @ 1411bee40

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

// `dynamic_initializer_for_'UInt8TypeName'' @ 1411bee90

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

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigRuleManager_h__Script_ControlRig_197426675'' @ 1411beee0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigRuleManager_h__Script_ControlRig_197426675__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ControlRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigRuleManager_h__Script_ControlRig_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_AdditiveControlRig_h__Script_ControlRig_864497310'' @ 1411bef20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_AdditiveControlRig_h__Script_ControlRig_864497310__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ControlRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_AdditiveControlRig_h__Script_ControlRig_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_AnimationHierarchy_h__Script_ControlRig_1727301180'' @ 1411bef60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_AnimationHierarchy_h__Script_ControlRig_1727301180__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ControlRig",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_AnimationHierarchy_h__Script_ControlRig_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_FKControlRig_h__Script_ControlRig_1039582817'' @ 1411befa0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_FKControlRig_h__Script_ControlRig_1039582817__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ControlRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_FKControlRig_h__Script_ControlRig_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_FKControlRig_h__Script_ControlRig_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigBoneHierarchy_h__Script_ControlRig_1259643214'' @ 1411beff0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigBoneHierarchy_h__Script_ControlRig_1259643214__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ControlRig",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigBoneHierarchy_h__Script_ControlRig_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigConnectionRules_h__Script_ControlRig_1493890962'' @ 1411bf030

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigConnectionRules_h__Script_ControlRig_1493890962__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ControlRig",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigConnectionRules_h__Script_ControlRig_Statics
             ::ScriptStructInfo,7,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigControlHierarchy_h__Script_ControlRig_4205217384'' @ 1411bf070

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigControlHierarchy_h__Script_ControlRig_4205217384__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ControlRig",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigControlHierarchy_h__Script_ControlRig_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigCurveContainer_h__Script_ControlRig_2459500847'' @ 1411bf0b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigCurveContainer_h__Script_ControlRig_2459500847__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ControlRig",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigCurveContainer_h__Script_ControlRig_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyCache_h__Script_ControlRig_2539330416'' @ 1411bf0f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyCache_h__Script_ControlRig_2539330416__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ControlRig",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyCache_h__Script_ControlRig_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyComponents_h__Script_ControlRig_793077360'' @ 1411bf130

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyComponents_h__Script_ControlRig_793077360__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ControlRig",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyComponents_h__Script_ControlRig_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyContainer_h__Script_ControlRig_3394240074'' @ 1411bf170

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyContainer_h__Script_ControlRig_3394240074__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ControlRig",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyContainer_h__Script_ControlRig_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h__Script_ControlRig_2004248568'' @ 1411bf1b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h__Script_ControlRig_2004248568__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ControlRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h__Script_ControlRig_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyDefines_h__Script_ControlRig_2781688816'' @ 1411bf1f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyDefines_h__Script_ControlRig_2781688816__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ControlRig",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyDefines_h__Script_ControlRig_Statics
             ::ScriptStructInfo,0xd,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyDefines_h__Script_ControlRig_Statics
             ::EnumInfo,0xe);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyElements_h__Script_ControlRig_3479518255'' @ 1411bf240

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyElements_h__Script_ControlRig_3479518255__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ControlRig",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyElements_h__Script_ControlRig_Statics
             ::ScriptStructInfo,0x1c,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyElements_h__Script_ControlRig_Statics
             ::EnumInfo,4);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyMetadata_h__Script_ControlRig_391915721'' @ 1411bf290

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyMetadata_h__Script_ControlRig_391915721__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ControlRig",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyMetadata_h__Script_ControlRig_Statics
             ::ScriptStructInfo,0x15,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyPose_h__Script_ControlRig_3103197832'' @ 1411bf2d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyPose_h__Script_ControlRig_3103197832__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ControlRig",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyPose_h__Script_ControlRig_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h__Script_ControlRig_2709322989'' @ 1411bf310

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h__Script_ControlRig_2709322989__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ControlRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h__Script_ControlRig_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h__Script_ControlRig_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h__Script_ControlRig_Statics
             ::EnumInfo,1);
  return;
}

// Z_Construct_UClass_URigHierarchy_NoRegister @ 14a2b8130

UClass * __cdecl Z_Construct_UClass_URigHierarchy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URigHierarchy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = URigHierarchy::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"RigHierarchy",
               &Z_Registration_Info_UClass_URigHierarchy.InnerSingleton,
               URigHierarchy::StaticRegisterNativesURigHierarchy,0x640,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<URigHierarchy>,
               InternalVTableHelperCtorCaller<URigHierarchy>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URigHierarchy.InnerSingleton;
}

// Z_Construct_UFunction_URigHierarchyController_ImportFromText @ 14a2b81e0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchyController_ImportFromText(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_ImportFromText_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_SetFloatMetadata @ 14a2b8220

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SetFloatMetadata(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SetFloatMetadata_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_GetModuleFName @ 14a2b8260

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetModuleFName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetModuleFName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInitial_SetBit @ 14a2b8390

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetGlobalTransform_Statics::NewProp_bInitial_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x70) = 1;
  return;
}

// NewProp_bAffectChildren_SetBit @ 14a2b83a0

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetGlobalTransform_Statics::NewProp_bAffectChildren_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x71) = 1;
  return;
}

// NewProp_bSetupUndo_SetBit @ 14a2b8400

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetGlobalTransform_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x72) = 1;
  return;
}

// NewProp_bReplaceExistingBones_SetBit @ 14a2b8450

void __cdecl
Z_Construct_UFunction_URigHierarchyController_ImportPreviewSkeletalMesh_Statics::
NewProp_bReplaceExistingBones_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_bPrintPythonCommand_SetBit @ 14a2b8460

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetGlobalTransform_Statics::NewProp_bPrintPythonCommand_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x73) = 1;
  return;
}

// NewProp_bRemoveObsoleteBones_SetBit @ 14a2b8470

void __cdecl
Z_Construct_UFunction_URigHierarchyController_ImportPreviewSkeletalMesh_Statics::
NewProp_bRemoveObsoleteBones_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// NewStructOps @ 14a2b84e0

void * __cdecl
Z_Construct_UScriptStruct_FRigChildOfPrimaryConnectionRule_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigChildOfPrimaryConnectionRule,&UE::CoreUObject::Private::Construct<FRigChildOfPrimaryConnectionRule>,&UE::CoreUObject::Private::ConstructForTests<FRigChildOfPrimaryConnectionRule>,&UE::CoreUObject::Private::Destruct<FRigChildOfPrimaryConnectionRule>,&UE::CoreUObject::Private::Copy<FRigChildOfPrimaryConnectionRule>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bSelectBones_SetBit @ 14a2b8520

void __cdecl
Z_Construct_UFunction_URigHierarchyController_ImportPreviewSkeletalMesh_Statics::
NewProp_bSelectBones_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 10) = 1;
  return;
}

// NewProp_bSetupUndo_SetBit @ 14a2b8530

void __cdecl
Z_Construct_UFunction_URigHierarchyController_ImportPreviewSkeletalMesh_Statics::
NewProp_bSetupUndo_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_GetModuleName @ 14a2b85d0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetModuleName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetModuleName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a2b8760

void * __cdecl Z_Construct_UScriptStruct_FRigCurveElement_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigCurveElement,&UE::CoreUObject::Private::Construct<FRigCurveElement>,&UE::CoreUObject::Private::ConstructForTests<FRigCurveElement>,&UE::CoreUObject::Private::Destruct<FRigCurveElement>,&UE::CoreUObject::Private::Copy<FRigCurveElement>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_URigHierarchy_SetGlobalTransform @ 14a2b87a0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SetGlobalTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SetGlobalTransform_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchyController_ImportPreviewSkeletalMesh @ 14a2b8860

UFunction * __cdecl Z_Construct_UFunction_URigHierarchyController_ImportPreviewSkeletalMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_ImportPreviewSkeletalMesh_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_GetModulePath @ 14a2b88a0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetModulePath(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetModulePath_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInitial_SetBit @ 14a2b8920

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetGlobalTransformByIndex_Statics::NewProp_bInitial_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x70) = 1;
  return;
}

// NewProp_bAffectChildren_SetBit @ 14a2b8930

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetGlobalTransformByIndex_Statics::
NewProp_bAffectChildren_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x71) = 1;
  return;
}

// NewProp_bSetupUndo_SetBit @ 14a2b8940

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetGlobalTransformByIndex_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x72) = 1;
  return;
}

// NewProp_bPrintPythonCommand_SetBit @ 14a2b8950

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetGlobalTransformByIndex_Statics::
NewProp_bPrintPythonCommand_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x73) = 1;
  return;
}

// NewProp_bReplaceExistingSockets_SetBit @ 14a2b89c0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_ImportSocketsFromSkeletalMesh_Statics::
NewProp_bReplaceExistingSockets_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bRemoveObsoleteSockets_SetBit @ 14a2b89d0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_ImportSocketsFromSkeletalMesh_Statics::
NewProp_bRemoveObsoleteSockets_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// NewProp_bSelectSockets_SetBit @ 14a2b89e0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_ImportSocketsFromSkeletalMesh_Statics::
NewProp_bSelectSockets_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  return;
}

// NewProp_bSetupUndo_SetBit @ 14a2b89f0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_ImportSocketsFromSkeletalMesh_Statics::
NewProp_bSetupUndo_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x13) = 1;
  return;
}

// NewProp_bPrintPythonCommand_SetBit @ 14a2b8a00

void __cdecl
Z_Construct_UFunction_URigHierarchyController_ImportSocketsFromSkeletalMesh_Statics::
NewProp_bPrintPythonCommand_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_GetModulePathFName @ 14a2b8a10

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetModulePathFName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetModulePathFName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_SetGlobalTransformByIndex @ 14a2b8a50

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SetGlobalTransformByIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SetGlobalTransformByIndex_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a2b8a90

void * __cdecl Z_Construct_UScriptStruct_FRigReferenceElement_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x140;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigReferenceElement,&UE::CoreUObject::Private::Construct<FRigReferenceElement>,&UE::CoreUObject::Private::ConstructForTests<FRigReferenceElement>,&UE::CoreUObject::Private::Destruct<FRigReferenceElement>,&UE::CoreUObject::Private::Copy<FRigReferenceElement>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FRigPoseElement @ 14a2b8ad0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigPoseElement(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigPoseElement.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigPoseElement.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigPoseElement_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigPoseElement.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigPoseElement.InnerSingleton;
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

// NewStructOps @ 14a2b8b50

void * __cdecl Z_Construct_UScriptStruct_FRigPoseElement_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x110;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigPoseElement,&UE::CoreUObject::Private::Construct<FRigPoseElement>,&UE::CoreUObject::Private::ConstructForTests<FRigPoseElement>,&UE::CoreUObject::Private::Destruct<FRigPoseElement>,&UE::CoreUObject::Private::Copy<FRigPoseElement>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_URigHierarchy_GetModulePrefix @ 14a2b8b90

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetModulePrefix(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetModulePrefix_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchyController_ImportSocketsFromSkeletalMesh @ 14a2b8bd0

UFunction * __cdecl
Z_Construct_UFunction_URigHierarchyController_ImportSocketsFromSkeletalMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_ImportSocketsFromSkeletalMesh_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a2b8c10

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetInt32ArrayMetadata_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_SetInt32ArrayMetadata @ 14a2b8c20

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SetInt32ArrayMetadata(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SetInt32ArrayMetadata_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSelectNewElements_SetBit @ 14a2b8ca0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_MirrorElements_Statics::
NewProp_bSelectNewElements_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// NewProp_bSetupUndo_SetBit @ 14a2b8cb0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_MirrorElements_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x39) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_GetNameArrayMetadata @ 14a2b8cc0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetNameArrayMetadata(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetNameArrayMetadata_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bPrintPythonCommands_SetBit @ 14a2b8d00

void __cdecl
Z_Construct_UFunction_URigHierarchyController_MirrorElements_Statics::
NewProp_bPrintPythonCommands_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x3a) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a2b8da0

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetInt32Metadata_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// EConnectorType_StaticEnum @ 14a2b8db0

UEnum * __cdecl EConnectorType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EConnectorType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_EConnectorType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_EConnectorType,(UObject *)pUVar1,
                       L"EConnectorType");
  }
  return Z_Registration_Info_UEnum_EConnectorType.OuterSingleton;
}

// Z_Construct_UFunction_URigHierarchy_SetInt32Metadata @ 14a2b8ef0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SetInt32Metadata(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SetInt32Metadata_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchyController_MirrorElements @ 14a2b8f30

UFunction * __cdecl Z_Construct_UFunction_URigHierarchyController_MirrorElements(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_MirrorElements_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a2b8f70

void * __cdecl Z_Construct_UScriptStruct_FRigPose_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigPose,&UE::CoreUObject::Private::Construct<FRigPose>,&UE::CoreUObject::Private::ConstructForTests<FRigPose>,&UE::CoreUObject::Private::Destruct<FRigPose>,&UE::CoreUObject::Private::Copy<FRigPose>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bOptional_SetBit @ 14a2b8fb0

void __cdecl
Z_Construct_UScriptStruct_FRigConnectorSettings_Statics::NewProp_bOptional_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// NewProp_bIsArray_SetBit @ 14a2b8fc0

void __cdecl
Z_Construct_UScriptStruct_FRigConnectorSettings_Statics::NewProp_bIsArray_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_GetNameMetadata @ 14a2b8fd0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetNameMetadata(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetNameMetadata_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bPostConstruction_SetBit @ 14a2b9010

void __cdecl
Z_Construct_UScriptStruct_FRigConnectorSettings_Statics::NewProp_bPostConstruction_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x13) = 1;
  return;
}

// NewStructOps @ 14a2b9060

void * __cdecl Z_Construct_UScriptStruct_FRigConnectorSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigConnectorSettings,&UE::CoreUObject::Private::Construct<FRigConnectorSettings>,&UE::CoreUObject::Private::ConstructForTests<FRigConnectorSettings>,&UE::CoreUObject::Private::Destruct<FRigConnectorSettings>,&UE::CoreUObject::Private::Copy<FRigConnectorSettings>,&UE::CoreUObject::Private::GetStructTypeHash<FRigConnectorSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 14a2b90d0

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetLinearColorArrayMetadata_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_bMaintainGlobalTransform_SetBit @ 14a2b9120

void __cdecl
Z_Construct_UFunction_URigHierarchyController_RemoveAllParents_Statics::
NewProp_bMaintainGlobalTransform_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewProp_bSetupUndo_SetBit @ 14a2b9160

void __cdecl
Z_Construct_UFunction_URigHierarchyController_RemoveAllParents_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd) = 1;
  return;
}

// NewProp_bPrintPythonCommand_SetBit @ 14a2b9180

void __cdecl
Z_Construct_UFunction_URigHierarchyController_RemoveAllParents_Statics::
NewProp_bPrintPythonCommand_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xe) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a2b9190

void __cdecl
Z_Construct_UFunction_URigHierarchyController_RemoveAllParents_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xf) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_GetNameSpace @ 14a2b91a0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetNameSpace(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_URigHierarchy_GetNameSpace_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_SetLinearColorArrayMetadata @ 14a2b9230

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SetLinearColorArrayMetadata(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SetLinearColorArrayMetadata_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchyController_RemoveAllParents @ 14a2b93b0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchyController_RemoveAllParents(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_RemoveAllParents_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a2b9410

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetLinearColorMetadata_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_GetNameSpaceFName @ 14a2b9490

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetNameSpaceFName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetNameSpaceFName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSetupUndo_SetBit @ 14a2b95b0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_RemoveAvailableSpace_Statics::
NewProp_bSetupUndo_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bPrintPythonCommand_SetBit @ 14a2b95c0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_RemoveAvailableSpace_Statics::
NewProp_bPrintPythonCommand_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a2b95d0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_RemoveAvailableSpace_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_SetLinearColorMetadata @ 14a2b95e0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SetLinearColorMetadata(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SetLinearColorMetadata_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bTraverse_SetBit @ 14a2b9620

void __cdecl
Z_Construct_UFunction_URigHierarchy_GetNullKeys_Statics::NewProp_bTraverse_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 14a2b96b0

void * __cdecl Z_Construct_UScriptStruct_FRigConnectorState_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigConnectorState,&UE::CoreUObject::Private::Construct<FRigConnectorState>,&UE::CoreUObject::Private::ConstructForTests<FRigConnectorState>,&UE::CoreUObject::Private::Destruct<FRigConnectorState>,&UE::CoreUObject::Private::Copy<FRigConnectorState>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bInitial_SetBit @ 14a2b96f0

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetLocalTransform_Statics::NewProp_bInitial_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x70) = 1;
  return;
}

// NewProp_bAffectChildren_SetBit @ 14a2b9700

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetLocalTransform_Statics::NewProp_bAffectChildren_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x71) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_GetNullKeys @ 14a2b9710

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetNullKeys(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_URigHierarchy_GetNullKeys_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_bSetupUndo_SetBit @ 14a2b9750

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetLocalTransform_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x72) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchyController_RemoveAvailableSpace @ 14a2b9760

UFunction * __cdecl Z_Construct_UFunction_URigHierarchyController_RemoveAvailableSpace(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_RemoveAvailableSpace_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bPrintPythonCommands_SetBit @ 14a2b97a0

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetLocalTransform_Statics::NewProp_bPrintPythonCommands_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x73) = 1;
  return;
}

// NewProp_bSetupUndo_SetBit @ 14a2b97b0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_RemoveChannelHost_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bPrintPythonCommand_SetBit @ 14a2b97c0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_RemoveChannelHost_Statics::
NewProp_bPrintPythonCommand_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a2b97d0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_RemoveChannelHost_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_GetNumberOfParents @ 14a2b97e0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetNumberOfParents(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetNumberOfParents_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_SetLocalTransform @ 14a2b9820

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SetLocalTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SetLocalTransform_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a2b98a0

void * __cdecl Z_Construct_UScriptStruct_FRigConnectorElement_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x88;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigConnectorElement,&UE::CoreUObject::Private::Construct<FRigConnectorElement>,&UE::CoreUObject::Private::ConstructForTests<FRigConnectorElement>,&UE::CoreUObject::Private::Destruct<FRigConnectorElement>,&UE::CoreUObject::Private::Copy<FRigConnectorElement>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bRecursive_SetBit @ 14a2b98e0

void __cdecl
Z_Construct_UFunction_URigHierarchy_GetParents_Statics::NewProp_bRecursive_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchyController_RemoveChannelHost @ 14a2b98f0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchyController_RemoveChannelHost(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_RemoveChannelHost_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_bInitial_SetBit @ 14a2b9930

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetLocalTransformByIndex_Statics::NewProp_bInitial_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x70) = 1;
  return;
}

// NewProp_bAffectChildren_SetBit @ 14a2b9940

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetLocalTransformByIndex_Statics::NewProp_bAffectChildren_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x71) = 1;
  return;
}

// NewProp_bSetupUndo_SetBit @ 14a2b9950

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetLocalTransformByIndex_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x72) = 1;
  return;
}

// NewProp_bPrintPythonCommands_SetBit @ 14a2b9960

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetLocalTransformByIndex_Statics::
NewProp_bPrintPythonCommands_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x73) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_GetParents @ 14a2b9970

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetParents(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_URigHierarchy_GetParents_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSetupUndo_SetBit @ 14a2b99b0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_RemoveComponent_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// NewProp_bPrintPythonCommand_SetBit @ 14a2b99c0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_RemoveComponent_Statics::
NewProp_bPrintPythonCommand_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x15) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a2b99d0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_RemoveComponent_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x16) = 1;
  return;
}

// NewProp_bInitial_SetBit @ 14a2b99e0

void __cdecl
Z_Construct_UFunction_URigHierarchy_GetParentTransform_Statics::NewProp_bInitial_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_SetLocalTransformByIndex @ 14a2b99f0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SetLocalTransformByIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SetLocalTransformByIndex_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchyController_RemoveComponent @ 14a2b9a80

UFunction * __cdecl Z_Construct_UFunction_URigHierarchyController_RemoveComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_RemoveComponent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_GetParentTransform @ 14a2b9b50

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetParentTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetParentTransform_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a2b9c20

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetNameArrayMetadata_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_bSetupUndo_SetBit @ 14a2b9c30

void __cdecl
Z_Construct_UFunction_URigHierarchyController_RemoveElement_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewProp_bPrintPythonCommand_SetBit @ 14a2b9c40

void __cdecl
Z_Construct_UFunction_URigHierarchyController_RemoveElement_Statics::
NewProp_bPrintPythonCommand_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd) = 1;
  return;
}

// NewStructOps @ 14a2b9cb0

void * __cdecl Z_Construct_UScriptStruct_FRigSocketState_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigSocketState,&UE::CoreUObject::Private::Construct<FRigSocketState>,&UE::CoreUObject::Private::ConstructForTests<FRigSocketState>,&UE::CoreUObject::Private::Destruct<FRigSocketState>,&UE::CoreUObject::Private::Copy<FRigSocketState>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 14a2b9cf0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_RemoveElement_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xe) = 1;
  return;
}

// NewProp_bInitial_SetBit @ 14a2b9d00

void __cdecl
Z_Construct_UFunction_URigHierarchy_GetParentTransformByIndex_Statics::NewProp_bInitial_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_SetNameArrayMetadata @ 14a2b9da0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SetNameArrayMetadata(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SetNameArrayMetadata_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_GetParentTransformByIndex @ 14a2b9de0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetParentTransformByIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetParentTransformByIndex_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchyController_RemoveElement @ 14a2b9e30

UFunction * __cdecl Z_Construct_UFunction_URigHierarchyController_RemoveElement(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_RemoveElement_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a2b9f20

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetNameMetadata_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  return;
}

// NewProp_bInitial_SetBit @ 14a2b9f30

void __cdecl
Z_Construct_UFunction_URigHierarchy_GetParentWeight_Statics::NewProp_bInitial_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UEnum_ControlRig_EModularRigResolveState @ 14a2b9f40

UEnum * __cdecl Z_Construct_UEnum_ControlRig_EModularRigResolveState(void)

{
  if (Z_Registration_Info_UEnum_EModularRigResolveState.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EModularRigResolveState.InnerSingleton,
               &Z_Construct_UEnum_ControlRig_EModularRigResolveState_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EModularRigResolveState.InnerSingleton;
}

// Z_Construct_UEnum_ControlRig_ERigControlAnimationType @ 14a2b9f80

UEnum * __cdecl Z_Construct_UEnum_ControlRig_ERigControlAnimationType(void)

{
  if (Z_Registration_Info_UEnum_ERigControlAnimationType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERigControlAnimationType.InnerSingleton,
               &Z_Construct_UEnum_ControlRig_ERigControlAnimationType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERigControlAnimationType.InnerSingleton;
}

// NewProp_bMaintainGlobalTransform_SetBit @ 14a2b9fc0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_RemoveParent_Statics::
NewProp_bMaintainGlobalTransform_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UEnum_ControlRig_ERigControlVisibility @ 14a2b9fd0

UEnum * __cdecl Z_Construct_UEnum_ControlRig_ERigControlVisibility(void)

{
  if (Z_Registration_Info_UEnum_ERigControlVisibility.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERigControlVisibility.InnerSingleton,
               &Z_Construct_UEnum_ControlRig_ERigControlVisibility_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERigControlVisibility.InnerSingleton;
}

// NewProp_bSetupUndo_SetBit @ 14a2ba010

void __cdecl
Z_Construct_UFunction_URigHierarchyController_RemoveParent_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  return;
}

// Z_Construct_UEnum_ControlRig_ERigElementResolveState @ 14a2ba020

UEnum * __cdecl Z_Construct_UEnum_ControlRig_ERigElementResolveState(void)

{
  if (Z_Registration_Info_UEnum_ERigElementResolveState.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERigElementResolveState.InnerSingleton,
               &Z_Construct_UEnum_ControlRig_ERigElementResolveState_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERigElementResolveState.InnerSingleton;
}

// NewProp_bPrintPythonCommand_SetBit @ 14a2ba150

void __cdecl
Z_Construct_UFunction_URigHierarchyController_RemoveParent_Statics::
NewProp_bPrintPythonCommand_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  return;
}

// Z_Construct_UScriptStruct_FRigControlLimitEnabled @ 14a2ba160

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigControlLimitEnabled(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigControlLimitEnabled.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigControlLimitEnabled.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigControlLimitEnabled_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigControlLimitEnabled.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigControlLimitEnabled.InnerSingleton;
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

// NewProp_ReturnValue_SetBit @ 14a2ba1e0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_RemoveParent_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1b) = 1;
  return;
}

// Z_Construct_UScriptStruct_FRigControlValueStorage @ 14a2ba1f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigControlValueStorage(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigControlValueStorage.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigControlValueStorage.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigControlValueStorage.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigControlValueStorage.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigElementResolveResult @ 14a2ba270

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigElementResolveResult(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigElementResolveResult.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigElementResolveResult.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigElementResolveResult_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigElementResolveResult.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigElementResolveResult.InnerSingleton;
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

// Z_Construct_UFunction_URigHierarchy_SetNameMetadata @ 14a2ba2f0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SetNameMetadata(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SetNameMetadata_Statics::FuncParams);
  }
  return ReturnFunction;
}

// ERigElementType_StaticEnum @ 14a2ba330

UEnum * __cdecl ERigElementType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigElementType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_ERigElementType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigElementType,(UObject *)pUVar1,
                       L"ERigElementType");
  }
  return Z_Registration_Info_UEnum_ERigElementType.OuterSingleton;
}

// Z_Construct_UFunction_URigHierarchy_GetParentWeight @ 14a2ba470

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetParentWeight(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetParentWeight_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a2ba4d0

void * __cdecl Z_Construct_UScriptStruct_FRigSocketElement_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x128;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigSocketElement,&UE::CoreUObject::Private::Construct<FRigSocketElement>,&UE::CoreUObject::Private::ConstructForTests<FRigSocketElement>,&UE::CoreUObject::Private::Destruct<FRigSocketElement>,&UE::CoreUObject::Private::Copy<FRigSocketElement>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bInitial_SetBit @ 14a2ba560

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetParentWeight_Statics::NewProp_bInitial_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  return;
}

// Z_Construct_UEnum_ControlRig_ERigControlAxis @ 14a2ba570

UEnum * __cdecl Z_Construct_UEnum_ControlRig_ERigControlAxis(void)

{
  if (Z_Registration_Info_UEnum_ERigControlAxis.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERigControlAxis.InnerSingleton,
               &Z_Construct_UEnum_ControlRig_ERigControlAxis_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERigControlAxis.InnerSingleton;
}

// Z_Construct_UEnum_ControlRig_ERigControlType @ 14a2ba5b0

UEnum * __cdecl Z_Construct_UEnum_ControlRig_ERigControlType(void)

{
  if (Z_Registration_Info_UEnum_ERigControlType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERigControlType.InnerSingleton,
               &Z_Construct_UEnum_ControlRig_ERigControlType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERigControlType.InnerSingleton;
}

// NewProp_bAffectChildren_SetBit @ 14a2ba5f0

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetParentWeight_Statics::NewProp_bAffectChildren_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x25) = 1;
  return;
}

// Z_Construct_UScriptStruct_FRigControl @ 14a2ba600

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigControl(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigControl.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigControl.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigControl_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigControl.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigControl.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigControlHierarchy @ 14a2ba680

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigControlHierarchy(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigControlHierarchy.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigControlHierarchy.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigControlHierarchy_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigControlHierarchy.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FRigControlHierarchy.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigControlValue @ 14a2ba700

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigControlValue(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigControlValue.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigControlValue.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigControlValue_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigControlValue.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigControlValue.InnerSingleton;
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

// Z_Construct_UFunction_URigHierarchyController_RemoveParent @ 14a2ba780

UFunction * __cdecl Z_Construct_UFunction_URigHierarchyController_RemoveParent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_RemoveParent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a2ba7c0

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetParentWeight_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x26) = 1;
  return;
}

// NewProp_bInitial_SetBit @ 14a2ba7d0

void __cdecl
Z_Construct_UFunction_URigHierarchy_GetParentWeightArray_Statics::NewProp_bInitial_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// ERigBoneType_StaticEnum @ 14a2ba9b0

UEnum * __cdecl ERigBoneType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigBoneType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_ERigBoneType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigBoneType,(UObject *)pUVar1,L"ERigBoneType");
  }
  return Z_Registration_Info_UEnum_ERigBoneType.OuterSingleton;
}

// NewProp_bIsCurve_SetBit @ 14a2ba9f0

void __cdecl Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_bIsCurve_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1a9) = 1;
  return;
}

// NewProp_bAnimatable_SetBit @ 14a2baa00

void __cdecl
Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_bAnimatable_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1aa) = 1;
  return;
}

// NewProp_bLimitTranslation_SetBit @ 14a2baa10

void __cdecl
Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_bLimitTranslation_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1ab) = 1;
  return;
}

// NewProp_bSetupUndo_SetBit @ 14a2baa20

void __cdecl
Z_Construct_UFunction_URigHierarchyController_RenameComponent_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  return;
}

// NewProp_bLimitRotation_SetBit @ 14a2baa30

void __cdecl
Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_bLimitRotation_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1ac) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_GetParentWeightArray @ 14a2baa40

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetParentWeightArray(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetParentWeightArray_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bPrintPythonCommand_SetBit @ 14a2baa80

void __cdecl
Z_Construct_UFunction_URigHierarchyController_RenameComponent_Statics::
NewProp_bPrintPythonCommand_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1d) = 1;
  return;
}

// NewProp_bLimitScale_SetBit @ 14a2baa90

void __cdecl
Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_bLimitScale_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1ad) = 1;
  return;
}

// NewProp_bClearSelection_SetBit @ 14a2baaa0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_RenameComponent_Statics::
NewProp_bClearSelection_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1e) = 1;
  return;
}

// NewProp_bDrawLimits_SetBit @ 14a2baab0

void __cdecl
Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_bDrawLimits_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1ae) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_SetParentWeight @ 14a2baac0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SetParentWeight(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SetParentWeight_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bGizmoEnabled_SetBit @ 14a2bab00

void __cdecl
Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_bGizmoEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2b8) = 1;
  return;
}

// NewProp_bGizmoVisible_SetBit @ 14a2bab10

void __cdecl
Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_bGizmoVisible_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2b9) = 1;
  return;
}

// ERigMetadataType_StaticEnum @ 14a2bab20

UEnum * __cdecl ERigMetadataType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigMetadataType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_ERigMetadataType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigMetadataType,(UObject *)pUVar1,
                       L"ERigMetadataType");
  }
  return Z_Registration_Info_UEnum_ERigMetadataType.OuterSingleton;
}

// NewProp_bIsTransientControl_SetBit @ 14a2bab60

void __cdecl
Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_bIsTransientControl_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x350) = 1;
  return;
}

// NewStructOps @ 14a2bab70

void * __cdecl Z_Construct_UScriptStruct_FRigControl_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x360;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigControl,&UE::CoreUObject::Private::Construct<FRigControl>,&UE::CoreUObject::Private::ConstructForTests<FRigControl>,&UE::CoreUObject::Private::Destruct<FRigControl>,&UE::CoreUObject::Private::Copy<FRigControl>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bInitial_SetBit @ 14a2babb0

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetParentWeightArray_Statics::NewProp_bInitial_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchyController_RenameComponent @ 14a2babc0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchyController_RenameComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_RenameComponent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAffectChildren_SetBit @ 14a2bac00

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetParentWeightArray_Statics::NewProp_bAffectChildren_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x21) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a2bac10

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetParentWeightArray_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x22) = 1;
  return;
}

// NewProp_bInitial_SetBit @ 14a2bac20

void __cdecl
Z_Construct_UFunction_URigHierarchy_GetPose_Statics::NewProp_bInitial_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bIncludeTransientControls_SetBit @ 14a2bac30

void __cdecl
Z_Construct_UFunction_URigHierarchy_GetPose_Statics::NewProp_bIncludeTransientControls_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewStructOps @ 14a2bac40

void * __cdecl
Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigHierarchyCopyPasteContentPerElement,&UE::CoreUObject::Private::Construct<FRigHierarchyCopyPasteContentPerElement>,&UE::CoreUObject::Private::ConstructForTests<FRigHierarchyCopyPasteContentPerElement>,&UE::CoreUObject::Private::Destruct<FRigHierarchyCopyPasteContentPerElement>,&UE::CoreUObject::Private::Copy<FRigHierarchyCopyPasteContentPerElement>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bSetupUndo_SetBit @ 14a2bac80

void __cdecl
Z_Construct_UFunction_URigHierarchyController_RenameElement_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// NewProp_bPrintPythonCommand_SetBit @ 14a2bac90

void __cdecl
Z_Construct_UFunction_URigHierarchyController_RenameElement_Statics::
NewProp_bPrintPythonCommand_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x15) = 1;
  return;
}

// NewProp_bClearSelection_SetBit @ 14a2baca0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_RenameElement_Statics::NewProp_bClearSelection_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x16) = 1;
  return;
}

// ERigHierarchyNotification_StaticEnum @ 14a2bacb0

UEnum * __cdecl ERigHierarchyNotification_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigHierarchyNotification.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_ERigHierarchyNotification.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigHierarchyNotification,(UObject *)pUVar1,
                       L"ERigHierarchyNotification");
  }
  return Z_Registration_Info_UEnum_ERigHierarchyNotification.OuterSingleton;
}

// Z_Construct_UFunction_URigHierarchy_SetParentWeightArray @ 14a2bacf0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SetParentWeightArray(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SetParentWeightArray_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_GetPose @ 14a2bad30

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetPose(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_URigHierarchy_GetPose_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UModularRigRuleManager_NoRegister @ 14a2bb760

UClass * __cdecl Z_Construct_UClass_UModularRigRuleManager_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModularRigRuleManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ModularRigRuleManager",
               &Z_Registration_Info_UClass_UModularRigRuleManager.InnerSingleton,
               UModularRigRuleManager::StaticRegisterNativesUModularRigRuleManager,0x30,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UModularRigRuleManager>,
               InternalVTableHelperCtorCaller<UModularRigRuleManager>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModularRigRuleManager.InnerSingleton;
}

// Z_Construct_UFunction_URigHierarchyController_RenameElement @ 14a2bb810

UFunction * __cdecl Z_Construct_UFunction_URigHierarchyController_RenameElement(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_RenameElement_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14a2bb850

void * __thiscall
FAnimationHierarchy::_scalar_deleting_destructor_(FAnimationHierarchy *this,uint param_1)

{
  ~FAnimationHierarchy(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// Z_Construct_UFunction_URigHierarchy_SetPose_ForBlueprint @ 14a2bb980

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SetPose_ForBlueprint(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SetPose_ForBlueprint_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSetupUndo_SetBit @ 14a2bbab0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_ReorderElement_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bPrintPythonCommand_SetBit @ 14a2bbaf0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_ReorderElement_Statics::
NewProp_bPrintPythonCommand_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a2bbb20

void __cdecl
Z_Construct_UFunction_URigHierarchyController_ReorderElement_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a2bbb30

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetQuatArrayMetadata_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// ERigEvent_StaticEnum @ 14a2bbb40

UEnum * __cdecl ERigEvent_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigEvent.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_ERigEvent.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigEvent,(UObject *)pUVar1,L"ERigEvent");
  }
  return Z_Registration_Info_UEnum_ERigEvent.OuterSingleton;
}

// NewStructOps @ 14a2bbb80

void * __cdecl Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigHierarchyCopyPasteContent,&UE::CoreUObject::Private::Construct<FRigHierarchyCopyPasteContent>,&UE::CoreUObject::Private::ConstructForTests<FRigHierarchyCopyPasteContent>,&UE::CoreUObject::Private::Destruct<FRigHierarchyCopyPasteContent>,&UE::CoreUObject::Private::Copy<FRigHierarchyCopyPasteContent>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_URigHierarchy_GetPreviousHierarchyName @ 14a2bbbc0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetPreviousHierarchyName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetPreviousHierarchyName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FConstraintNodeData @ 14a2bbc00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FConstraintNodeData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FConstraintNodeData.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FConstraintNodeData.InnerSingleton,
               &Z_Construct_UScriptStruct_FConstraintNodeData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FConstraintNodeData.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FConstraintNodeData.InnerSingleton;
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

// Z_Construct_UFunction_URigHierarchy_SetQuatArrayMetadata @ 14a2bbd80

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SetQuatArrayMetadata(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SetQuatArrayMetadata_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a2bbdc0

void * __cdecl Z_Construct_UScriptStruct_FConstraintNodeData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x140;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FConstraintNodeData,&UE::CoreUObject::Private::Construct<FConstraintNodeData>,&UE::CoreUObject::Private::ConstructForTests<FConstraintNodeData>,&UE::CoreUObject::Private::Destruct<FConstraintNodeData>,&UE::CoreUObject::Private::Copy<FConstraintNodeData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_URigHierarchyController_ReorderElement @ 14a2bbe00

UFunction * __cdecl Z_Construct_UFunction_URigHierarchyController_ReorderElement(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_ReorderElement_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EControlRigSetKey_StaticEnum @ 14a2bbe40

UEnum * __cdecl EControlRigSetKey_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EControlRigSetKey.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_EControlRigSetKey.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_EControlRigSetKey,(UObject *)pUVar1,
                       L"EControlRigSetKey");
  }
  return Z_Registration_Info_UEnum_EControlRigSetKey.OuterSingleton;
}

// NewStructOps @ 14a2bbe80

void * __cdecl Z_Construct_UScriptStruct_FRigBaseComponent_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigBaseComponent,&UE::CoreUObject::Private::Construct<FRigBaseComponent>,&UE::CoreUObject::Private::ConstructForTests<FRigBaseComponent>,&UE::CoreUObject::Private::Destruct<FRigBaseComponent>,&UE::CoreUObject::Private::SerializeArchive<FRigBaseComponent>,&UE::CoreUObject::Private::Copy<FRigBaseComponent>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_URigHierarchy_GetPreviousHierarchyParent @ 14a2bbed0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetPreviousHierarchyParent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetPreviousHierarchyParent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a2bbf20

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetQuatMetadata_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x40) = 1;
  return;
}

// NewProp_bSetupUndo_SetBit @ 14a2bbf30

void __cdecl
Z_Construct_UFunction_URigHierarchyController_ReparentComponent_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewProp_bPrintPythonCommand_SetBit @ 14a2bbf80

void __cdecl
Z_Construct_UFunction_URigHierarchyController_ReparentComponent_Statics::
NewProp_bPrintPythonCommand_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x21) = 1;
  return;
}

// NewProp_bClearSelection_SetBit @ 14a2bbf90

void __cdecl
Z_Construct_UFunction_URigHierarchyController_ReparentComponent_Statics::
NewProp_bClearSelection_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x22) = 1;
  return;
}

// NewStructOps @ 14a2bbfa0

void * __cdecl Z_Construct_UScriptStruct_FRigControlHierarchy_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigControlHierarchy,&UE::CoreUObject::Private::Construct<FRigControlHierarchy>,&UE::CoreUObject::Private::ConstructForTests<FRigControlHierarchy>,&UE::CoreUObject::Private::Destruct<FRigControlHierarchy>,&UE::CoreUObject::Private::Copy<FRigControlHierarchy>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// ERigControlType_StaticEnum @ 14a2bbfe0

UEnum * __cdecl ERigControlType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigControlType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_ERigControlType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigControlType,(UObject *)pUVar1,
                       L"ERigControlType");
  }
  return Z_Registration_Info_UEnum_ERigControlType.OuterSingleton;
}

// Z_Construct_UFunction_URigHierarchy_SetQuatMetadata @ 14a2bc070

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SetQuatMetadata(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SetQuatMetadata_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_GetPreviousName @ 14a2bc0b0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetPreviousName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetPreviousName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchyController_ReparentComponent @ 14a2bc1d0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchyController_ReparentComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_ReparentComponent_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a2bc280

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetRigElementKeyArrayMetadata_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// ERigControlAnimationType_StaticEnum @ 14a2bc290

UEnum * __cdecl ERigControlAnimationType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigControlAnimationType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_ERigControlAnimationType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigControlAnimationType,(UObject *)pUVar1,
                       L"ERigControlAnimationType");
  }
  return Z_Registration_Info_UEnum_ERigControlAnimationType.OuterSingleton;
}

// NewProp_bSelect_SetBit @ 14a2bc470

void __cdecl
Z_Construct_UFunction_URigHierarchyController_SelectComponent_Statics::NewProp_bSelect_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// NewProp_bClearSelection_SetBit @ 14a2bc480

void __cdecl
Z_Construct_UFunction_URigHierarchyController_SelectComponent_Statics::
NewProp_bClearSelection_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x15) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_GetPreviousParent @ 14a2bc490

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetPreviousParent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetPreviousParent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSetupUndo_SetBit @ 14a2bc4d0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_SelectComponent_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x16) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a2bc4e0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_SelectComponent_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x17) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_SetRigElementKeyArrayMetadata @ 14a2bc4f0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SetRigElementKeyArrayMetadata(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SetRigElementKeyArrayMetadata_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// ERigControlValueType_StaticEnum @ 14a2bc5d0

UEnum * __cdecl ERigControlValueType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigControlValueType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_ERigControlValueType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigControlValueType,(UObject *)pUVar1,
                       L"ERigControlValueType");
  }
  return Z_Registration_Info_UEnum_ERigControlValueType.OuterSingleton;
}

// NewStructOps @ 14a2bc610

void * __cdecl Z_Construct_UScriptStruct_FAnimationHierarchy_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x88;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimationHierarchy,&UE::CoreUObject::Private::Construct<FAnimationHierarchy>,&UE::CoreUObject::Private::ConstructForTests<FAnimationHierarchy>,&UE::CoreUObject::Private::Destruct<FAnimationHierarchy>,&UE::CoreUObject::Private::Copy<FAnimationHierarchy>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UModularRigRuleManager @ 14a2bc650

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UModularRigRuleManager(void)

{
  if (Z_Registration_Info_UClass_UModularRigRuleManager.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UModularRigRuleManager.OuterSingleton,
               &Z_Construct_UClass_UModularRigRuleManager_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UModularRigRuleManager.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 14a2bc690

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetRigElementKeyMetadata_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// ERigControlVisibility_StaticEnum @ 14a2bc6a0

UEnum * __cdecl ERigControlVisibility_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigControlVisibility.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_ERigControlVisibility.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigControlVisibility,(UObject *)pUVar1,
                       L"ERigControlVisibility");
  }
  return Z_Registration_Info_UEnum_ERigControlVisibility.OuterSingleton;
}

// Z_Construct_UFunction_URigHierarchyController_SelectComponent @ 14a2bc6e0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchyController_SelectComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_SelectComponent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_GetQuatArrayMetadata @ 14a2bc720

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetQuatArrayMetadata(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetQuatArrayMetadata_Statics::FuncParams);
  }
  return ReturnFunction;
}

// ERigControlAxis_StaticEnum @ 14a2bc7a0

UEnum * __cdecl ERigControlAxis_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigControlAxis.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_ERigControlAxis.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigControlAxis,(UObject *)pUVar1,
                       L"ERigControlAxis");
  }
  return Z_Registration_Info_UEnum_ERigControlAxis.OuterSingleton;
}

// Z_Construct_UFunction_URigHierarchy_SetRigElementKeyMetadata @ 14a2bc7e0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SetRigElementKeyMetadata(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SetRigElementKeyMetadata_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSelect_SetBit @ 14a2bc820

void __cdecl
Z_Construct_UFunction_URigHierarchyController_SelectElement_Statics::NewProp_bSelect_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewProp_bClearSelection_SetBit @ 14a2bc830

void __cdecl
Z_Construct_UFunction_URigHierarchyController_SelectElement_Statics::NewProp_bClearSelection_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd) = 1;
  return;
}

// NewProp_bSetupUndo_SetBit @ 14a2bc840

void __cdecl
Z_Construct_UFunction_URigHierarchyController_SelectElement_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xe) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a2bc850

void __cdecl
Z_Construct_UFunction_URigHierarchyController_SelectElement_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xf) = 1;
  return;
}

// Z_Construct_UScriptStruct_FRigCurve @ 14a2bc860

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigCurve(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigCurve.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigCurve.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigCurve_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigCurve.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigCurve.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigCurveContainer @ 14a2bc8e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigCurveContainer(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigCurveContainer.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigCurveContainer.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigCurveContainer_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigCurveContainer.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigCurveContainer.InnerSingleton;
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

// NewStructOps @ 14a2bc960

void * __cdecl Z_Construct_UScriptStruct_FRigCurve_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigCurve,&UE::CoreUObject::Private::Construct<FRigCurve>,&UE::CoreUObject::Private::ConstructForTests<FRigCurve>,&UE::CoreUObject::Private::Destruct<FRigCurve>,&UE::CoreUObject::Private::Copy<FRigCurve>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bMinimum_SetBit @ 14a2bc9a0

void __cdecl
Z_Construct_UScriptStruct_FRigControlLimitEnabled_Statics::NewProp_bMinimum_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bMaximum_SetBit @ 14a2bc9b0

void __cdecl
Z_Construct_UScriptStruct_FRigControlLimitEnabled_Statics::NewProp_bMaximum_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a2bc9c0

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetRotatorArrayMetadata_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewStructOps @ 14a2bc9d0

void * __cdecl Z_Construct_UScriptStruct_FRigControlLimitEnabled_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 2;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigControlLimitEnabled,&UE::CoreUObject::Private::Construct<FRigControlLimitEnabled>,&UE::CoreUObject::Private::ConstructForTests<FRigControlLimitEnabled>,&UE::CoreUObject::Private::Destruct<FRigControlLimitEnabled>,&UE::CoreUObject::Private::Copy<FRigControlLimitEnabled>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_URigHierarchyController_SelectElement @ 14a2bca10

UFunction * __cdecl Z_Construct_UFunction_URigHierarchyController_SelectElement(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_SelectElement_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_GetQuatMetadata @ 14a2bcad0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetQuatMetadata(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetQuatMetadata_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_SetRotatorArrayMetadata @ 14a2bcb10

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SetRotatorArrayMetadata(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SetRotatorArrayMetadata_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSelect_SetBit @ 14a2bcb60

void __cdecl
Z_Construct_UFunction_URigHierarchyController_SelectHierarchyKey_Statics::NewProp_bSelect_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_bClearSelection_SetBit @ 14a2bcb70

void __cdecl
Z_Construct_UFunction_URigHierarchyController_SelectHierarchyKey_Statics::
NewProp_bClearSelection_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  return;
}

// NewProp_bSetupUndo_SetBit @ 14a2bcb80

void __cdecl
Z_Construct_UFunction_URigHierarchyController_SelectHierarchyKey_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2a) = 1;
  return;
}

// NewProp_bTraverse_SetBit @ 14a2bcb90

void __cdecl
Z_Construct_UFunction_URigHierarchy_GetReferenceKeys_Statics::NewProp_bTraverse_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a2bcba0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_SelectHierarchyKey_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2b) = 1;
  return;
}

// NewStructOps @ 14a2bcc50

void * __cdecl Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigHierarchyContainer,&UE::CoreUObject::Private::Construct<FRigHierarchyContainer>,&UE::CoreUObject::Private::ConstructForTests<FRigHierarchyContainer>,&UE::CoreUObject::Private::Destruct<FRigHierarchyContainer>,&UE::CoreUObject::Private::Copy<FRigHierarchyContainer>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 14a2bcc90

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetRotatorMetadata_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_GetReferenceKeys @ 14a2bcd40

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetReferenceKeys(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetReferenceKeys_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_SetRotatorMetadata @ 14a2bcd80

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SetRotatorMetadata(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SetRotatorMetadata_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a2bcdc0

void * __cdecl Z_Construct_UScriptStruct_FRigCurveContainer_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigCurveContainer,&UE::CoreUObject::Private::Construct<FRigCurveContainer>,&UE::CoreUObject::Private::ConstructForTests<FRigCurveContainer>,&UE::CoreUObject::Private::Destruct<FRigCurveContainer>,&UE::CoreUObject::Private::Copy<FRigCurveContainer>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_URigHierarchyController_SelectHierarchyKey @ 14a2bce00

UFunction * __cdecl Z_Construct_UFunction_URigHierarchyController_SelectHierarchyKey(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_SelectHierarchyKey_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a2bcea0

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetTag_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// NewProp_bSetupUndo_SetBit @ 14a2bceb0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_SetAvailableSpaceIndex_Statics::
NewProp_bSetupUndo_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  return;
}

// NewProp_bPrintPythonCommand_SetBit @ 14a2bcec0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_SetAvailableSpaceIndex_Statics::
NewProp_bPrintPythonCommand_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1d) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a2bced0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_SetAvailableSpaceIndex_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1e) = 1;
  return;
}

// NewProp_bValid_SetBit @ 14a2bcee0

void __cdecl
Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_bValid_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x80) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_GetRigElementKeyArrayMetadata @ 14a2bcef0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetRigElementKeyArrayMetadata(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetRigElementKeyArrayMetadata_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a2bcf30

void * __cdecl Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x84;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigControlValueStorage,&UE::CoreUObject::Private::Construct<FRigControlValueStorage>,&UE::CoreUObject::Private::ConstructForTests<FRigControlValueStorage>,&UE::CoreUObject::Private::Destruct<FRigControlValueStorage>,&UE::CoreUObject::Private::Copy<FRigControlValueStorage>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_URigHierarchy_SetTag @ 14a2bcf70

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SetTag(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_URigHierarchy_SetTag_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a2bcff0

void * __cdecl Z_Construct_UScriptStruct_FRigHierarchyRef_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigHierarchyRef,&UE::CoreUObject::Private::Construct<FRigHierarchyRef>,&UE::CoreUObject::Private::ConstructForTests<FRigHierarchyRef>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_URigHierarchyController_SetAvailableSpaceIndex @ 14a2bd050

UFunction * __cdecl Z_Construct_UFunction_URigHierarchyController_SetAvailableSpaceIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_SetAvailableSpaceIndex_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a2bd090

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetTransformArrayMetadata_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_GetRigElementKeyMetadata @ 14a2bd0b0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetRigElementKeyMetadata(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetRigElementKeyMetadata_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_SetTransformArrayMetadata @ 14a2bd1a0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SetTransformArrayMetadata(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SetTransformArrayMetadata_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSetupUndo_SetBit @ 14a2bd1e0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_SetAvailableSpaceLabel_Statics::
NewProp_bSetupUndo_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewProp_bPrintPythonCommand_SetBit @ 14a2bd1f0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_SetAvailableSpaceLabel_Statics::
NewProp_bPrintPythonCommand_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x21) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a2bd240

void __cdecl
Z_Construct_UFunction_URigHierarchyController_SetAvailableSpaceLabel_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x22) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a2bd3b0

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetTransformMetadata_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x80) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_GetRootElementKeys @ 14a2bd3c0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetRootElementKeys(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetRootElementKeys_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchyController_SetAvailableSpaceLabel @ 14a2bd490

UFunction * __cdecl Z_Construct_UFunction_URigHierarchyController_SetAvailableSpaceLabel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_SetAvailableSpaceLabel_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_SetTransformMetadata @ 14a2bd510

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SetTransformMetadata(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SetTransformMetadata_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSetupUndo_SetBit @ 14a2bd590

void __cdecl
Z_Construct_UFunction_URigHierarchyController_SetComponentContent_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_bPrintPythonCommand_SetBit @ 14a2bd5a0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_SetComponentContent_Statics::
NewProp_bPrintPythonCommand_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a2bd5b0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_SetComponentContent_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2a) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_GetRotatorArrayMetadata @ 14a2bd5c0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetRotatorArrayMetadata(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetRotatorArrayMetadata_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a2bd640

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetVectorArrayMetadata_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewStructOps @ 14a2bd690

void * __cdecl Z_Construct_UScriptStruct_FRigControlValue_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x84;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigControlValue,&UE::CoreUObject::Private::Construct<FRigControlValue>,&UE::CoreUObject::Private::ConstructForTests<FRigControlValue>,&UE::CoreUObject::Private::Destruct<FRigControlValue>,&UE::CoreUObject::Private::Copy<FRigControlValue>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_URigHierarchy_SetVectorArrayMetadata @ 14a2bd6d0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SetVectorArrayMetadata(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SetVectorArrayMetadata_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchyController_SetComponentContent @ 14a2bd710

UFunction * __cdecl Z_Construct_UFunction_URigHierarchyController_SetComponentContent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_SetComponentContent_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a2bd790

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetVectorMetadata_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewProp_bPrintPythonCommand_SetBit @ 14a2bd7a0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_SetComponentSelection_Statics::
NewProp_bPrintPythonCommand_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a2bd7f0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_SetComponentSelection_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_GetRotatorFromControlValue @ 14a2bd800

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetRotatorFromControlValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetRotatorFromControlValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_SetVectorMetadata @ 14a2bd890

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SetVectorMetadata(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SetVectorMetadata_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchyController_SetComponentSelection @ 14a2bd970

UFunction * __cdecl Z_Construct_UFunction_URigHierarchyController_SetComponentSelection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_SetComponentSelection_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a2bd9b0

void * __cdecl Z_Construct_UScriptStruct_FRigControlModifiedContext_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigControlModifiedContext,&UE::CoreUObject::Private::Construct<FRigControlModifiedContext>,&UE::CoreUObject::Private::ConstructForTests<FRigControlModifiedContext>,&UE::CoreUObject::Private::Destruct<FRigControlModifiedContext>,&UE::CoreUObject::Private::Copy<FRigControlModifiedContext>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_URigHierarchy_GetRotatorMetadata @ 14a2bda30

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetRotatorMetadata(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetRotatorMetadata_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSetupUndo_SetBit @ 14a2bdac0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_SetControlSettings_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x230) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a2bdad0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_SetControlSettings_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x231) = 1;
  return;
}

// NewProp_bCreateIfNeeded_SetBit @ 14a2bdae0

void __cdecl
Z_Construct_UFunction_URigHierarchy_GetRuleManager_Statics::NewProp_bCreateIfNeeded_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_SortKeys @ 14a2bdaf0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SortKeys(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_URigHierarchy_SortKeys_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchyController_SetControlSettings @ 14a2bdc30

UFunction * __cdecl Z_Construct_UFunction_URigHierarchyController_SetControlSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_SetControlSettings_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_GetRuleManager @ 14a2bdc70

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetRuleManager(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetRuleManager_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInitial_SetBit @ 14a2bdcb0

void __cdecl
Z_Construct_UFunction_URigHierarchy_SwitchToDefaultParent_Statics::NewProp_bInitial_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewProp_bAffectChildren_SetBit @ 14a2bdcc0

void __cdecl
Z_Construct_UFunction_URigHierarchy_SwitchToDefaultParent_Statics::NewProp_bAffectChildren_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a2bdcd0

void __cdecl
Z_Construct_UFunction_URigHierarchy_SwitchToDefaultParent_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xe) = 1;
  return;
}

// NewStructOps @ 14a2bdd20

void * __cdecl Z_Construct_UScriptStruct_FRigHierarchyModulePath_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigHierarchyModulePath,&UE::CoreUObject::Private::Construct<FRigHierarchyModulePath>,&UE::CoreUObject::Private::ConstructForTests<FRigHierarchyModulePath>,&UE::CoreUObject::Private::Destruct<FRigHierarchyModulePath>,&UE::CoreUObject::Private::Copy<FRigHierarchyModulePath>,&UE::CoreUObject::Private::GetStructTypeHash<FRigHierarchyModulePath>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bRenameElement_SetBit @ 14a2bdd80

void __cdecl
Z_Construct_UFunction_URigHierarchyController_SetDisplayName_Statics::NewProp_bRenameElement_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// NewProp_bSetupUndo_SetBit @ 14a2bdd90

void __cdecl
Z_Construct_UFunction_URigHierarchyController_SetDisplayName_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x15) = 1;
  return;
}

// NewProp_bPrintPythonCommand_SetBit @ 14a2bdda0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_SetDisplayName_Statics::
NewProp_bPrintPythonCommand_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x16) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_GetSelectedHierarchyKeys_ForBlueprint @ 14a2bddb0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetSelectedHierarchyKeys_ForBlueprint(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetSelectedHierarchyKeys_ForBlueprint_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_SwitchToDefaultParent @ 14a2bddf0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SwitchToDefaultParent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SwitchToDefaultParent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchyController_SetDisplayName @ 14a2bdef0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchyController_SetDisplayName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_SetDisplayName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInitial_SetBit @ 14a2bdf30

void __cdecl
Z_Construct_UFunction_URigHierarchy_SwitchToParent_Statics::NewProp_bInitial_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bAffectChildren_SetBit @ 14a2bdf40

void __cdecl
Z_Construct_UFunction_URigHierarchy_SwitchToParent_Statics::NewProp_bAffectChildren_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a2bdf50

void __cdecl
Z_Construct_UFunction_URigHierarchy_SwitchToParent_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  return;
}

// NewStructOps @ 14a2be090

void * __cdecl Z_Construct_UScriptStruct_FRigElementKey_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigElementKey,&UE::CoreUObject::Private::Construct<FRigElementKey>,&UE::CoreUObject::Private::ConstructForTests<FRigElementKey>,&UE::CoreUObject::Private::Destruct<FRigElementKey>,&UE::CoreUObject::Private::Copy<FRigElementKey>,&UE::CoreUObject::Private::GetStructTypeHash<FRigElementKey>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_URigHierarchyController_SetHierarchy @ 14a2be150

UFunction * __cdecl Z_Construct_UFunction_URigHierarchyController_SetHierarchy(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_SetHierarchy_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_SwitchToParent @ 14a2be190

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SwitchToParent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SwitchToParent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_GetSelectedKeys @ 14a2be1d0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetSelectedKeys(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetSelectedKeys_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bPrintPythonCommand_SetBit @ 14a2be220

void __cdecl
Z_Construct_UFunction_URigHierarchyController_SetHierarchySelection_Statics::
NewProp_bPrintPythonCommand_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bInitial_SetBit @ 14a2be230

void __cdecl
Z_Construct_UFunction_URigHierarchy_SwitchToWorldSpace_Statics::NewProp_bInitial_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewProp_bSetupUndo_SetBit @ 14a2be240

void __cdecl
Z_Construct_UFunction_URigHierarchyController_SetHierarchySelection_Statics::
NewProp_bSetupUndo_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// NewProp_bTraverse_SetBit @ 14a2be250

void __cdecl
Z_Construct_UFunction_URigHierarchy_GetSocketKeys_Statics::NewProp_bTraverse_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bAffectChildren_SetBit @ 14a2be260

void __cdecl
Z_Construct_UFunction_URigHierarchy_SwitchToWorldSpace_Statics::NewProp_bAffectChildren_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a2be270

void __cdecl
Z_Construct_UFunction_URigHierarchyController_SetHierarchySelection_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a2be280

void __cdecl
Z_Construct_UFunction_URigHierarchy_SwitchToWorldSpace_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xe) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_GetSocketKeys @ 14a2be290

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetSocketKeys(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetSocketKeys_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchyController_SetHierarchySelection @ 14a2be310

UFunction * __cdecl Z_Construct_UFunction_URigHierarchyController_SetHierarchySelection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_SetHierarchySelection_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_SwitchToWorldSpace @ 14a2be350

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SwitchToWorldSpace(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SwitchToWorldSpace_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a2be390

void * __cdecl Z_Construct_UScriptStruct_FRigComponentKey_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigComponentKey,&UE::CoreUObject::Private::Construct<FRigComponentKey>,&UE::CoreUObject::Private::ConstructForTests<FRigComponentKey>,&UE::CoreUObject::Private::Destruct<FRigComponentKey>,&UE::CoreUObject::Private::Copy<FRigComponentKey>,&UE::CoreUObject::Private::GetStructTypeHash<FRigComponentKey>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bSetupUndo_SetBit @ 14a2be3d0

void __cdecl
Z_Construct_UFunction_URigHierarchy_UnsetCurveValue_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewProp_bMaintainGlobalTransform_SetBit @ 14a2be3e0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_SetParent_Statics::
NewProp_bMaintainGlobalTransform_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bSetupUndo_SetBit @ 14a2be3f0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_SetParent_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  return;
}

// NewProp_bPrintPythonCommand_SetBit @ 14a2be400

void __cdecl
Z_Construct_UFunction_URigHierarchyController_SetParent_Statics::NewProp_bPrintPythonCommand_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a2be410

void __cdecl
Z_Construct_UFunction_URigHierarchyController_SetParent_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1b) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_UnsetCurveValue @ 14a2be4c0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_UnsetCurveValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_UnsetCurveValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_URigHierarchy @ 14a2be550

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_URigHierarchy(void)

{
  if (Z_Registration_Info_UClass_URigHierarchy.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_URigHierarchy.OuterSingleton,
               &Z_Construct_UClass_URigHierarchy_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_URigHierarchy.OuterSingleton;
}

// Z_Construct_UClass_URigHierarchyProvider @ 14a2be590

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_URigHierarchyProvider(void)

{
  if (Z_Registration_Info_UClass_URigHierarchyProvider.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_URigHierarchyProvider.OuterSingleton,
               &Z_Construct_UClass_URigHierarchyProvider_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_URigHierarchyProvider.OuterSingleton;
}

// Z_Construct_UEnum_ControlRig_ERigControlValueType @ 14a2be5d0

UEnum * __cdecl Z_Construct_UEnum_ControlRig_ERigControlValueType(void)

{
  if (Z_Registration_Info_UEnum_ERigControlValueType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERigControlValueType.InnerSingleton,
               &Z_Construct_UEnum_ControlRig_ERigControlValueType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERigControlValueType.InnerSingleton;
}

// Z_Construct_UEnum_ControlRig_ERigHierarchyNotification @ 14a2be610

UEnum * __cdecl Z_Construct_UEnum_ControlRig_ERigHierarchyNotification(void)

{
  if (Z_Registration_Info_UEnum_ERigHierarchyNotification.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERigHierarchyNotification.InnerSingleton,
               &Z_Construct_UEnum_ControlRig_ERigHierarchyNotification_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERigHierarchyNotification.InnerSingleton;
}

// Z_Construct_UEnum_ControlRig_ERigMetadataType @ 14a2be650

UEnum * __cdecl Z_Construct_UEnum_ControlRig_ERigMetadataType(void)

{
  if (Z_Registration_Info_UEnum_ERigMetadataType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERigMetadataType.InnerSingleton,
               &Z_Construct_UEnum_ControlRig_ERigMetadataType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERigMetadataType.InnerSingleton;
}

// NewProp_bSetupUndo_SetBit @ 14a2be690

void __cdecl
Z_Construct_UFunction_URigHierarchy_UnsetCurveValueByIndex_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Z_Construct_UEnum_ControlRig_ERigTransformStackEntryType @ 14a2be6e0

UEnum * __cdecl Z_Construct_UEnum_ControlRig_ERigTransformStackEntryType(void)

{
  if (Z_Registration_Info_UEnum_ERigTransformStackEntryType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERigTransformStackEntryType.InnerSingleton,
               &Z_Construct_UEnum_ControlRig_ERigTransformStackEntryType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERigTransformStackEntryType.InnerSingleton;
}

// Z_Construct_UEnum_ControlRig_ERigTransformType @ 14a2be720

UEnum * __cdecl Z_Construct_UEnum_ControlRig_ERigTransformType(void)

{
  if (Z_Registration_Info_UEnum_ERigTransformType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERigTransformType.InnerSingleton,
               &Z_Construct_UEnum_ControlRig_ERigTransformType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERigTransformType.InnerSingleton;
}

// Z_Construct_UDelegateFunction_ControlRig_RigHierarchyModifiedDynamicEvent__DelegateSignature @ 14a2be760

UFunction * __cdecl
Z_Construct_UDelegateFunction_ControlRig_RigHierarchyModifiedDynamicEvent__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_ControlRig_RigHierarchyModifiedDynamicEvent__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FRigBoneElement @ 14a2be7a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigBoneElement(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigBoneElement.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigBoneElement.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigBoneElement_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigBoneElement.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigBoneElement.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigComponentKey @ 14a2be820

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigComponentKey(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigComponentKey.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigComponentKey.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigComponentKey_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigComponentKey.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigComponentKey.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigConnectorSettings @ 14a2be8a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigConnectorSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigConnectorSettings.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigConnectorSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigConnectorSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigConnectorSettings.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FRigConnectorSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigConnectorState @ 14a2be920

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigConnectorState(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigConnectorState.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigConnectorState.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigConnectorState_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigConnectorState.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigConnectorState.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigControlElement @ 14a2be9a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigControlElement(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigControlElement.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigControlElement.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigControlElement_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigControlElement.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigControlElement.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigControlSettings @ 14a2beac0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigControlSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigControlSettings.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigControlSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigControlSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigControlSettings.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FRigControlSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigElementKey @ 14a2beb60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigElementKey(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigElementKey.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigElementKey.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigElementKey_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigElementKey.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigElementKey.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigElementWeight @ 14a2bebe0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigElementWeight(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigElementWeight.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigElementWeight.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigElementWeight_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigElementWeight.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigElementWeight.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigHierarchyKey @ 14a2bec60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigHierarchyKey(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigHierarchyKey.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigHierarchyKey.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigHierarchyKey_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigHierarchyKey.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigHierarchyKey.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigNullElement @ 14a2bece0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigNullElement(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigNullElement.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigNullElement.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigNullElement_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigNullElement.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigNullElement.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigPose @ 14a2bed70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigPose(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigPose.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigPose.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigPose_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigPose.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigPose.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigSocketState @ 14a2bedf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigSocketState(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigSocketState.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigSocketState.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigSocketState_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigSocketState.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigSocketState.InnerSingleton;
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

// Z_Construct_UFunction_URigHierarchyController_SetParent @ 14a2bef70

UFunction * __cdecl Z_Construct_UFunction_URigHierarchyController_SetParent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_SetParent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_UnsetCurveValueByIndex @ 14a2bf050

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_UnsetCurveValueByIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_UnsetCurveValueByIndex_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a2bf090

void * __cdecl Z_Construct_UScriptStruct_FRigHierarchyKey_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigHierarchyKey,&UE::CoreUObject::Private::Construct<FRigHierarchyKey>,&UE::CoreUObject::Private::ConstructForTests<FRigHierarchyKey>,&UE::CoreUObject::Private::Destruct<FRigHierarchyKey>,&UE::CoreUObject::Private::Copy<FRigHierarchyKey>,&UE::CoreUObject::Private::GetStructTypeHash<FRigHierarchyKey>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bPrintPythonCommand_SetBit @ 14a2bf230

void __cdecl
Z_Construct_UFunction_URigHierarchyController_SetSelection_Statics::
NewProp_bPrintPythonCommand_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bSetupUndo_SetBit @ 14a2bf240

void __cdecl
Z_Construct_UFunction_URigHierarchyController_SetSelection_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a2bf250

void __cdecl
Z_Construct_UFunction_URigHierarchyController_SetSelection_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  return;
}

// `scalar_deleting_destructor' @ 14a2bf260

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void * __thiscall
FRigBaseComponent::_scalar_deleting_destructor_(FRigBaseComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FRigBaseComponent__6B_;
  pFVar1 = (this->CachedNameString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// NewProp_bEnableDirtyPropagation_SetBit @ 14a2bf310

void __cdecl
Z_Construct_UClass_URigHierarchy_Statics::NewProp_bEnableDirtyPropagation_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xf6) = 1;
  return;
}

// ERigTransformStackEntryType_StaticEnum @ 14a2bf320

UEnum * __cdecl ERigTransformStackEntryType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigTransformStackEntryType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_ERigTransformStackEntryType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigTransformStackEntryType,(UObject *)pUVar1,
                       L"ERigTransformStackEntryType");
  }
  return Z_Registration_Info_UEnum_ERigTransformStackEntryType.OuterSingleton;
}

// Z_Construct_UFunction_URigHierarchyController_SetSelection @ 14a2bf360

UFunction * __cdecl Z_Construct_UFunction_URigHierarchyController_SetSelection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_SetSelection_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a2bf400

void * __cdecl Z_Construct_UScriptStruct_FRigElementKeyCollection_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigElementKeyCollection,&UE::CoreUObject::Private::Construct<FRigElementKeyCollection>,&UE::CoreUObject::Private::ConstructForTests<FRigElementKeyCollection>,&UE::CoreUObject::Private::Destruct<FRigElementKeyCollection>,&UE::CoreUObject::Private::Copy<FRigElementKeyCollection>,&UE::CoreUObject::Private::GetStructTypeHash<FRigElementKeyCollection>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bReportWarningsAndErrors_SetBit @ 14a2bf440

void __cdecl
Z_Construct_UClass_URigHierarchyController_Statics::NewProp_bReportWarningsAndErrors_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_bAffectChildren_SetBit @ 14a2bf450

void __cdecl
Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::NewProp_bAffectChildren_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd0) = 1;
  return;
}

// NewStructOps @ 14a2bf460

void * __cdecl Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xf0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigTransformStackEntry,&UE::CoreUObject::Private::Construct<FRigTransformStackEntry>,&UE::CoreUObject::Private::ConstructForTests<FRigTransformStackEntry>,&UE::CoreUObject::Private::Destruct<FRigTransformStackEntry>,&UE::CoreUObject::Private::Copy<FRigTransformStackEntry>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a2bf6e0

void * __cdecl Z_Construct_UScriptStruct_FRigElement_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigElement,&UE::CoreUObject::Private::Construct<FRigElement>,&UE::CoreUObject::Private::ConstructForTests<FRigElement>,&UE::CoreUObject::Private::Destruct<FRigElement>,&UE::CoreUObject::Private::Copy<FRigElement>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14a2bf820

void * __thiscall
FRigBaseMetadata::_scalar_deleting_destructor_(FRigBaseMetadata *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// NewProp_ReturnValue_SetBit @ 14a2bf890

void __cdecl
Z_Construct_UFunction_URigHierarchy_Contains_ForBlueprint_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// `scalar_deleting_destructor' @ 14a2bf8e0

void * __thiscall
FRigBoolMetadata::_scalar_deleting_destructor_(FRigBoolMetadata *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// Z_Construct_UFunction_URigHierarchy_Contains_ForBlueprint @ 14a2bf910

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_Contains_ForBlueprint(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_Contains_ForBlueprint_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a2bfa50

void * __cdecl Z_Construct_UScriptStruct_FRigEventContext_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigEventContext,&UE::CoreUObject::Private::Construct<FRigEventContext>,&UE::CoreUObject::Private::ConstructForTests<FRigEventContext>,&UE::CoreUObject::Private::Destruct<FRigEventContext>,&UE::CoreUObject::Private::Copy<FRigEventContext>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14a2bfad0

void * __thiscall
FRigBoolArrayMetadata::_scalar_deleting_destructor_(FRigBoolArrayMetadata *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Value).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// Z_Construct_UFunction_URigHierarchy_CopyHierarchy @ 14a2bfb20

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_CopyHierarchy(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_CopyHierarchy_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bCurrent_SetBit @ 14a2bfc20

void __cdecl
Z_Construct_UFunction_URigHierarchy_CopyPose_Statics::NewProp_bCurrent_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_GetSocketStates @ 14a2bfc30

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetSocketStates(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetSocketStates_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInitial_SetBit @ 14a2bfc70

void __cdecl
Z_Construct_UFunction_URigHierarchy_CopyPose_Statics::NewProp_bInitial_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// `scalar_deleting_destructor' @ 14a2bfc80

void * __thiscall
FRigFloatMetadata::_scalar_deleting_destructor_(FRigFloatMetadata *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// NewProp_bWeights_SetBit @ 14a2bfcb0

void __cdecl
Z_Construct_UFunction_URigHierarchy_CopyPose_Statics::NewProp_bWeights_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 10) = 1;
  return;
}

// NewProp_bMatchPoseInGlobalIfNeeded_SetBit @ 14a2bfcc0

void __cdecl
Z_Construct_UFunction_URigHierarchy_CopyPose_Statics::NewProp_bMatchPoseInGlobalIfNeeded_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb) = 1;
  return;
}

// ERigElementResolveState_StaticEnum @ 14a2bfdc0

UEnum * __cdecl ERigElementResolveState_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigElementResolveState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_ERigElementResolveState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigElementResolveState,(UObject *)pUVar1,
                       L"ERigElementResolveState");
  }
  return Z_Registration_Info_UEnum_ERigElementResolveState.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14a2bfe20

void * __thiscall
FRigFloatArrayMetadata::_scalar_deleting_destructor_(FRigFloatArrayMetadata *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Value).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// Z_Construct_UFunction_URigHierarchy_CopyPose @ 14a2bfe70

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_CopyPose(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_URigHierarchy_CopyPose_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a2bffe0

void * __cdecl Z_Construct_UScriptStruct_FRigElementResolveResult_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigElementResolveResult,&UE::CoreUObject::Private::Construct<FRigElementResolveResult>,&UE::CoreUObject::Private::ConstructForTests<FRigElementResolveResult>,&UE::CoreUObject::Private::Destruct<FRigElementResolveResult>,&UE::CoreUObject::Private::Copy<FRigElementResolveResult>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_URigHierarchy_GetTags @ 14a2c0020

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetTags(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_URigHierarchy_GetTags_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14a2c00b0

void * __thiscall
FRigInt32Metadata::_scalar_deleting_destructor_(FRigInt32Metadata *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// Z_Construct_UFunction_URigHierarchy_FindBone_ForBlueprintOnly @ 14a2c02c0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_FindBone_ForBlueprintOnly(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_FindBone_ForBlueprintOnly_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14a2c03a0

void * __thiscall
FRigInt32ArrayMetadata::_scalar_deleting_destructor_(FRigInt32ArrayMetadata *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Value).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// Z_Construct_UFunction_URigHierarchy_GetTransformArrayMetadata @ 14a2c0490

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetTransformArrayMetadata(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetTransformArrayMetadata_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_FindControl_ForBlueprintOnly @ 14a2c0510

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_FindControl_ForBlueprintOnly(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_FindControl_ForBlueprintOnly_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14a2c0550

void * __thiscall
FRigNameMetadata::_scalar_deleting_destructor_(FRigNameMetadata *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// EModularRigResolveState_StaticEnum @ 14a2c0580

UEnum * __cdecl EModularRigResolveState_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EModularRigResolveState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_EModularRigResolveState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_EModularRigResolveState,(UObject *)pUVar1,
                       L"EModularRigResolveState");
  }
  return Z_Registration_Info_UEnum_EModularRigResolveState.OuterSingleton;
}

// Z_Construct_UFunction_URigHierarchy_GetTransformFromControlValue @ 14a2c0670

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetTransformFromControlValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetTransformFromControlValue_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14a2c0790

void * __thiscall
FRigNameArrayMetadata::_scalar_deleting_destructor_(FRigNameArrayMetadata *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Value).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// Z_Construct_UFunction_URigHierarchy_FindNull_ForBlueprintOnly @ 14a2c07e0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_FindNull_ForBlueprintOnly(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_FindNull_ForBlueprintOnly_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a2c0820

void * __cdecl Z_Construct_UScriptStruct_FModularRigResolveResult_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FModularRigResolveResult,&UE::CoreUObject::Private::Construct<FModularRigResolveResult>,&UE::CoreUObject::Private::ConstructForTests<FModularRigResolveResult>,&UE::CoreUObject::Private::Destruct<FModularRigResolveResult>,&UE::CoreUObject::Private::Copy<FModularRigResolveResult>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_URigHierarchy_GetTransformMetadata @ 14a2c08e0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetTransformMetadata(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetTransformMetadata_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14a2c0920

void * __thiscall
FRigVectorMetadata::_scalar_deleting_destructor_(FRigVectorMetadata *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// Z_Construct_UFunction_URigHierarchy_GetAllComponentKeys @ 14a2c0990

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetAllComponentKeys(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetAllComponentKeys_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14a2c0a10

void * __thiscall
FRigVectorArrayMetadata::_scalar_deleting_destructor_(FRigVectorArrayMetadata *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Value).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// Z_Construct_UFunction_URigHierarchy_GetTransformNoScaleFromControlValue @ 14a2c0a60

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetTransformNoScaleFromControlValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetTransformNoScaleFromControlValue_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bTraverse_SetBit @ 14a2c0aa0

void __cdecl
Z_Construct_UFunction_URigHierarchy_GetAllKeys_ForBlueprint_Statics::NewProp_bTraverse_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// EElementNameDisplayMode_StaticEnum @ 14a2c0ab0

UEnum * __cdecl EElementNameDisplayMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EElementNameDisplayMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_EElementNameDisplayMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_EElementNameDisplayMode,(UObject *)pUVar1,
                       L"EElementNameDisplayMode");
  }
  return Z_Registration_Info_UEnum_EElementNameDisplayMode.OuterSingleton;
}

// Z_Construct_UFunction_URigHierarchy_GetVector2DFromControlValue @ 14a2c0af0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetVector2DFromControlValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetVector2DFromControlValue_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_GetAllKeys_ForBlueprint @ 14a2c0b30

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetAllKeys_ForBlueprint(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetAllKeys_ForBlueprint_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bTraverse_SetBit @ 14a2c0bf0

void __cdecl
Z_Construct_UFunction_URigHierarchy_GetBoneKeys_Statics::NewProp_bTraverse_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// `scalar_deleting_destructor' @ 14a2c0c60

void * __thiscall
FRigRotatorMetadata::_scalar_deleting_destructor_(FRigRotatorMetadata *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// Z_Construct_UFunction_URigHierarchy_GetVectorArrayMetadata @ 14a2c0c90

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetVectorArrayMetadata(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetVectorArrayMetadata_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_GetBoneKeys @ 14a2c0d20

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetBoneKeys(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_URigHierarchy_GetBoneKeys_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_GetVectorFromControlValue @ 14a2c0f50

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetVectorFromControlValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetVectorFromControlValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_GetBoolArrayMetadata @ 14a2c0fe0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetBoolArrayMetadata(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetBoolArrayMetadata_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UFKControlRig @ 14a2c1020

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UFKControlRig(void)

{
  if (Z_Registration_Info_UClass_UFKControlRig.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UFKControlRig.OuterSingleton,
               &Z_Construct_UClass_UFKControlRig_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UFKControlRig.OuterSingleton;
}

// Z_Construct_UEnum_ControlRig_EControlRigFKRigExecuteMode @ 14a2c1060

UEnum * __cdecl Z_Construct_UEnum_ControlRig_EControlRigFKRigExecuteMode(void)

{
  if (Z_Registration_Info_UEnum_EControlRigFKRigExecuteMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EControlRigFKRigExecuteMode.InnerSingleton,
               &Z_Construct_UEnum_ControlRig_EControlRigFKRigExecuteMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EControlRigFKRigExecuteMode.InnerSingleton;
}

// EControlRigFKRigExecuteMode_StaticEnum @ 14a2c11c0

UEnum * __cdecl EControlRigFKRigExecuteMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EControlRigFKRigExecuteMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_EControlRigFKRigExecuteMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_EControlRigFKRigExecuteMode,(UObject *)pUVar1,
                       L"EControlRigFKRigExecuteMode");
  }
  return Z_Registration_Info_UEnum_EControlRigFKRigExecuteMode.OuterSingleton;
}

// NewProp_DefaultValue_SetBit @ 14a2c1200

void __cdecl
Z_Construct_UFunction_URigHierarchy_GetBoolMetadata_Statics::NewProp_DefaultValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a2c1210

void __cdecl
Z_Construct_UFunction_URigHierarchy_GetBoolMetadata_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x15) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_GetVectorMetadata @ 14a2c1220

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetVectorMetadata(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetVectorMetadata_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_GetBoolMetadata @ 14a2c12f0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetBoolMetadata(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetBoolMetadata_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a2c1330

void __cdecl
Z_Construct_UFunction_URigHierarchy_HasTag_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// NewProp_bRecursive_SetBit @ 14a2c13c0

void __cdecl
Z_Construct_UFunction_URigHierarchy_GetChildren_Statics::NewProp_bRecursive_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_HasTag @ 14a2c13d0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_HasTag(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_URigHierarchy_HasTag_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a2c14d0

void __cdecl
Z_Construct_UFunction_URigHierarchy_IsComponentSelected_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_GetChildren @ 14a2c14e0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetChildren(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_URigHierarchy_GetChildren_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_IsComponentSelected @ 14a2c1520

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_IsComponentSelected(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_IsComponentSelected_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a2c15a0

void __cdecl
Z_Construct_UFunction_URigHierarchy_IsControllerAvailable_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_GetComponentContent @ 14a2c1600

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetComponentContent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetComponentContent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_IsControllerAvailable @ 14a2c16d0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_IsControllerAvailable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_IsControllerAvailable_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a2c1840

void __cdecl
Z_Construct_UFunction_URigHierarchy_IsCurveValueSet_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_GetComponentKey @ 14a2c1960

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetComponentKey(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetComponentKey_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_IsCurveValueSet @ 14a2c19a0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_IsCurveValueSet(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_IsCurveValueSet_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a2c1a20

void __cdecl
Z_Construct_UFunction_URigHierarchy_IsCurveValueSetByIndex_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_GetComponentKeys @ 14a2c1a80

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetComponentKeys(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetComponentKeys_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_IsCurveValueSetByIndex @ 14a2c1ac0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_IsCurveValueSetByIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_IsCurveValueSetByIndex_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a2c1b70

void __cdecl
Z_Construct_UFunction_URigHierarchy_IsParentedTo_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_GetComponentName @ 14a2c1c40

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetComponentName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetComponentName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_IsParentedTo @ 14a2c1ca0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_IsParentedTo(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_URigHierarchy_IsParentedTo_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14a2c1d00

void * __thiscall
FRigRotatorArrayMetadata::_scalar_deleting_destructor_(FRigRotatorArrayMetadata *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Value).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// NewProp_ReturnValue_SetBit @ 14a2c1e60

void __cdecl
Z_Construct_UFunction_URigHierarchy_IsProcedural_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_GetComponentType @ 14a2c1e80

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetComponentType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetComponentType_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_IsProcedural @ 14a2c1ec0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_IsProcedural(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_URigHierarchy_IsProcedural_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_bTraverse_SetBit @ 14a2c1f40

void __cdecl
Z_Construct_UFunction_URigHierarchy_GetConnectorKeys_Statics::NewProp_bTraverse_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a2c1f60

void __cdecl
Z_Construct_UFunction_URigHierarchy_IsSelected_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_GetConnectorKeys @ 14a2c2110

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetConnectorKeys(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetConnectorKeys_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_IsSelected @ 14a2c2150

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_IsSelected(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_URigHierarchy_IsSelected_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14a2c2190

void * __thiscall
FRigQuatMetadata::_scalar_deleting_destructor_(FRigQuatMetadata *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// NewProp_ReturnValue_SetBit @ 14a2c2200

void __cdecl
Z_Construct_UFunction_URigHierarchy_IsSelectedByIndex_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// `scalar_deleting_destructor' @ 14a2c2250

void * __thiscall
FRigQuatArrayMetadata::_scalar_deleting_destructor_(FRigQuatArrayMetadata *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Value).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// Z_Construct_UFunction_URigHierarchy_IsSelectedByIndex @ 14a2c22a0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_IsSelectedByIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_IsSelectedByIndex_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a2c22e0

void __cdecl
Z_Construct_UFunction_URigHierarchy_IsValidIndex_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_IsValidIndex @ 14a2c23b0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_IsValidIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_URigHierarchy_IsValidIndex_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_InValue_SetBit @ 14a2c2410

void __cdecl
Z_Construct_UFunction_URigHierarchy_MakeControlValueFromBool_Statics::NewProp_InValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// `scalar_deleting_destructor' @ 14a2c2540

void * __thiscall
FRigTransformMetadata::_scalar_deleting_destructor_(FRigTransformMetadata *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// Z_Construct_UFunction_URigHierarchy_MakeControlValueFromBool @ 14a2c2570

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_MakeControlValueFromBool(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_MakeControlValueFromBool_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14a2c26e0

void * __thiscall
FRigTransformArrayMetadata::_scalar_deleting_destructor_
          (FRigTransformArrayMetadata *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Value).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// Z_Construct_UFunction_URigHierarchy_MakeControlValueFromEulerTransform @ 14a2c2730

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_MakeControlValueFromEulerTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_MakeControlValueFromEulerTransform_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FRigBaseMetadata @ 14a2c2770

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigBaseMetadata(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigBaseMetadata.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigBaseMetadata.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigBaseMetadata_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigBaseMetadata.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigBaseMetadata.InnerSingleton;
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

// NewStructOps @ 14a2c2940

void * __cdecl Z_Construct_UScriptStruct_FRigBaseMetadata_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigBaseMetadata,&UE::CoreUObject::Private::Construct<FRigBaseMetadata>,&UE::CoreUObject::Private::ConstructForTests<FRigBaseMetadata>,&UE::CoreUObject::Private::Destruct<FRigBaseMetadata>,&UE::CoreUObject::Private::Copy<FRigBaseMetadata>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14a2c2980

void * __thiscall
FRigLinearColorMetadata::_scalar_deleting_destructor_(FRigLinearColorMetadata *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// Z_Construct_UFunction_URigHierarchy_MakeControlValueFromFloat @ 14a2c29c0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_MakeControlValueFromFloat(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_MakeControlValueFromFloat_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14a2c2c40

void * __thiscall
FRigLinearColorArrayMetadata::_scalar_deleting_destructor_
          (FRigLinearColorArrayMetadata *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Value).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// Z_Construct_UFunction_URigHierarchy_MakeControlValueFromInt @ 14a2c3010

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_MakeControlValueFromInt(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_MakeControlValueFromInt_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_Value_SetBit @ 14a2c3100

void __cdecl Z_Construct_UScriptStruct_FRigBoolMetadata_Statics::NewProp_Value_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewStructOps @ 14a2c3130

void * __cdecl Z_Construct_UScriptStruct_FRigBoolMetadata_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigBoolMetadata,&UE::CoreUObject::Private::Construct<FRigBoolMetadata>,&UE::CoreUObject::Private::ConstructForTests<FRigBoolMetadata>,&UE::CoreUObject::Private::Destruct<FRigBoolMetadata>,&UE::CoreUObject::Private::Copy<FRigBoolMetadata>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_URigHierarchy_MakeControlValueFromRotator @ 14a2c3170

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_MakeControlValueFromRotator(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_MakeControlValueFromRotator_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_MakeControlValueFromTransform @ 14a2c3310

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_MakeControlValueFromTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_MakeControlValueFromTransform_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14a2c3350

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void * __thiscall
FRigElementKeyMetadata::_scalar_deleting_destructor_(FRigElementKeyMetadata *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// Z_Construct_UFunction_URigHierarchy_MakeControlValueFromTransformNoScale @ 14a2c3390

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_MakeControlValueFromTransformNoScale(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_MakeControlValueFromTransformNoScale_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_GetConnectorStates @ 14a2c3470

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetConnectorStates(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetConnectorStates_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a2c35d0

void * __cdecl Z_Construct_UScriptStruct_FRigBoolArrayMetadata_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigBoolArrayMetadata,&UE::CoreUObject::Private::Construct<FRigBoolArrayMetadata>,&UE::CoreUObject::Private::ConstructForTests<FRigBoolArrayMetadata>,&UE::CoreUObject::Private::Destruct<FRigBoolArrayMetadata>,&UE::CoreUObject::Private::Copy<FRigBoolArrayMetadata>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_URigHierarchy_MakeControlValueFromVector @ 14a2c3610

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_MakeControlValueFromVector(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_MakeControlValueFromVector_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14a2c3650

void * __thiscall
FRigElementKeyArrayMetadata::_scalar_deleting_destructor_
          (FRigElementKeyArrayMetadata *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Value).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// Z_Construct_UClass_URigHierarchyController_NoRegister @ 14a2c36a0

UClass * __cdecl Z_Construct_UClass_URigHierarchyController_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URigHierarchyController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"RigHierarchyController",
               &Z_Registration_Info_UClass_URigHierarchyController.InnerSingleton,
               URigHierarchyController::StaticRegisterNativesURigHierarchyController,0x90,0x10,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<URigHierarchyController>
               ,InternalVTableHelperCtorCaller<URigHierarchyController>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URigHierarchyController.InnerSingleton;
}

// NewProp_bTraverse_SetBit @ 14a2c3750

void __cdecl
Z_Construct_UFunction_URigHierarchy_GetControlKeys_Statics::NewProp_bTraverse_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_MakeControlValueFromVector2D @ 14a2c3760

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_MakeControlValueFromVector2D(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_MakeControlValueFromVector2D_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UEnum_ControlRig_EConnectorType @ 14a2c37a0

UEnum * __cdecl Z_Construct_UEnum_ControlRig_EConnectorType(void)

{
  if (Z_Registration_Info_UEnum_EConnectorType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EConnectorType.InnerSingleton,
               &Z_Construct_UEnum_ControlRig_EConnectorType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EConnectorType.InnerSingleton;
}

// Z_Construct_UEnum_ControlRig_ERigControlTransformChannel @ 14a2c37e0

UEnum * __cdecl Z_Construct_UEnum_ControlRig_ERigControlTransformChannel(void)

{
  if (Z_Registration_Info_UEnum_ERigControlTransformChannel.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERigControlTransformChannel.InnerSingleton,
               &Z_Construct_UEnum_ControlRig_ERigControlTransformChannel_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERigControlTransformChannel.InnerSingleton;
}

// Z_Construct_UScriptStruct_FRigBaseElement @ 14a2c3820

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigBaseElement(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigBaseElement.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigBaseElement.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigBaseElement_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigBaseElement.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigBaseElement.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigComputedTransform @ 14a2c38a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigComputedTransform(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigComputedTransform.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigComputedTransform.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigComputedTransform_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigComputedTransform.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FRigComputedTransform.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigControlElementCustomization @ 14a2c3920

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigControlElementCustomization(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigControlElementCustomization.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigControlElementCustomization.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigControlElementCustomization_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigControlElementCustomization.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigControlElementCustomization.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigElementKeyWithLabel @ 14a2c39a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigElementKeyWithLabel(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigElementKeyWithLabel.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigElementKeyWithLabel.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigElementKeyWithLabel_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigElementKeyWithLabel.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigElementKeyWithLabel.InnerSingleton;
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

// Z_Construct_UFunction_URigHierarchy_GetControlKeys @ 14a2c3a20

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetControlKeys(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetControlKeys_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement @ 14a2c3a60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigHierarchyCopyPasteContentPerElement.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigHierarchyCopyPasteContentPerElement.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigHierarchyCopyPasteContentPerElement.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigHierarchyCopyPasteContentPerElement.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigLocalAndGlobalDirtyState @ 14a2c3ae0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigLocalAndGlobalDirtyState(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigLocalAndGlobalDirtyState.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigLocalAndGlobalDirtyState.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigLocalAndGlobalDirtyState_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigLocalAndGlobalDirtyState.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigLocalAndGlobalDirtyState.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigLocalAndGlobalTransform @ 14a2c3b60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigLocalAndGlobalTransform(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigLocalAndGlobalTransform.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigLocalAndGlobalTransform.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigLocalAndGlobalTransform_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigLocalAndGlobalTransform.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigLocalAndGlobalTransform.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigMultiParentElement @ 14a2c3be0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigMultiParentElement(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigMultiParentElement.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigMultiParentElement.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigMultiParentElement_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigMultiParentElement.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigMultiParentElement.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigPreferredEulerAngles @ 14a2c3ca0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigPreferredEulerAngles(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigPreferredEulerAngles.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigPreferredEulerAngles.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigPreferredEulerAngles_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigPreferredEulerAngles.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigPreferredEulerAngles.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigSingleParentElement @ 14a2c3d20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigSingleParentElement(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigSingleParentElement.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigSingleParentElement.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigSingleParentElement_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigSingleParentElement.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigSingleParentElement.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigTransformDirtyState @ 14a2c3dd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigTransformDirtyState(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigTransformDirtyState.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigTransformDirtyState.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigTransformDirtyState_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigTransformDirtyState.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigTransformDirtyState.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigTransformElement @ 14a2c3e50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigTransformElement(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigTransformElement.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigTransformElement.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigTransformElement_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigTransformElement.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FRigTransformElement.InnerSingleton;
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

// Z_Construct_UFunction_URigHierarchy_Num @ 14a2c3ed0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_Num(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_URigHierarchy_Num_Statics::FuncParams);
  }
  return ReturnFunction;
}

// ERigTransformType_StaticEnum @ 14a2c3f30

UEnum * __cdecl ERigTransformType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigTransformType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_ERigTransformType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigTransformType,(UObject *)pUVar1,
                       L"ERigTransformType");
  }
  return Z_Registration_Info_UEnum_ERigTransformType.OuterSingleton;
}

// NewProp_bCreateIfNeeded_SetBit @ 14a2c3fb0

void __cdecl
Z_Construct_UFunction_URigHierarchy_GetController_Statics::NewProp_bCreateIfNeeded_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 14a2c3fc0

void * __cdecl Z_Construct_UScriptStruct_FRigFloatMetadata_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigFloatMetadata,&UE::CoreUObject::Private::Construct<FRigFloatMetadata>,&UE::CoreUObject::Private::ConstructForTests<FRigFloatMetadata>,&UE::CoreUObject::Private::Destruct<FRigFloatMetadata>,&UE::CoreUObject::Private::Copy<FRigFloatMetadata>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// ERigTransformStorageType_StaticEnum @ 14a2c4100

UEnum * __cdecl ERigTransformStorageType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigTransformStorageType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_ERigTransformStorageType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigTransformStorageType,(UObject *)pUVar1,
                       L"ERigTransformStorageType");
  }
  return Z_Registration_Info_UEnum_ERigTransformStorageType.OuterSingleton;
}

// Z_Construct_UFunction_URigHierarchy_GetController @ 14a2c4140

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetController(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetController_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_NumComponents @ 14a2c4180

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_NumComponents(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_NumComponents_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a2c4200

void __cdecl
Z_Construct_UFunction_URigHierarchy_RemoveAllMetadata_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewProp_bInitial_SetBit @ 14a2c4210

void __cdecl
Z_Construct_UFunction_URigHierarchy_GetControlPreferredEulerAngles_Statics::NewProp_bInitial_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd) = 1;
  return;
}

// NewStructOps @ 14a2c4240

void * __cdecl Z_Construct_UScriptStruct_FRigTransformDirtyState_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigTransformDirtyState,&UE::CoreUObject::Private::Construct<FRigTransformDirtyState>,&UE::CoreUObject::Private::ConstructForTests<FRigTransformDirtyState>,&UE::CoreUObject::Private::Destruct<FRigTransformDirtyState>,&UE::CoreUObject::Private::Copy<FRigTransformDirtyState>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_URigHierarchy_RemoveAllMetadata @ 14a2c4470

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_RemoveAllMetadata(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_RemoveAllMetadata_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_GetControlPreferredEulerAngles @ 14a2c4680

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetControlPreferredEulerAngles(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetControlPreferredEulerAngles_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_URigHierarchyController @ 14a2c4740

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_URigHierarchyController(void)

{
  if (Z_Registration_Info_UClass_URigHierarchyController.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_URigHierarchyController.OuterSingleton,
               &Z_Construct_UClass_URigHierarchyController_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_URigHierarchyController.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 14a2c4780

void __cdecl
Z_Construct_UFunction_URigHierarchy_RemoveMetadata_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// NewStructOps @ 14a2c48c0

void * __cdecl Z_Construct_UScriptStruct_FRigFloatArrayMetadata_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigFloatArrayMetadata,&UE::CoreUObject::Private::Construct<FRigFloatArrayMetadata>,&UE::CoreUObject::Private::ConstructForTests<FRigFloatArrayMetadata>,&UE::CoreUObject::Private::Destruct<FRigFloatArrayMetadata>,&UE::CoreUObject::Private::Copy<FRigFloatArrayMetadata>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bInitial_SetBit @ 14a2c4930

void __cdecl
Z_Construct_UFunction_URigHierarchy_GetControlPreferredEulerAnglesByIndex_Statics::
NewProp_bInitial_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 5) = 1;
  return;
}

// NewProp_bSetupUndo_SetBit @ 14a2c4980

void __cdecl
Z_Construct_UFunction_URigHierarchyController_AddAnimationChannel_ForBlueprint_Statics::
NewProp_bSetupUndo_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x240) = 1;
  return;
}

// NewProp_bPrintPythonCommand_SetBit @ 14a2c49c0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_AddAnimationChannel_ForBlueprint_Statics::
NewProp_bPrintPythonCommand_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x241) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_RemoveMetadata @ 14a2c4a30

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_RemoveMetadata(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_RemoveMetadata_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a2c4a70

void * __cdecl Z_Construct_UScriptStruct_FRigLocalAndGlobalDirtyState_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigLocalAndGlobalDirtyState,&UE::CoreUObject::Private::Construct<FRigLocalAndGlobalDirtyState>,&UE::CoreUObject::Private::ConstructForTests<FRigLocalAndGlobalDirtyState>,&UE::CoreUObject::Private::Destruct<FRigLocalAndGlobalDirtyState>,&UE::CoreUObject::Private::Copy<FRigLocalAndGlobalDirtyState>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_URigHierarchy_GetControlPreferredEulerAnglesByIndex @ 14a2c4ae0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetControlPreferredEulerAnglesByIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetControlPreferredEulerAnglesByIndex_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_Reset @ 14a2c4c40

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_Reset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_URigHierarchy_Reset_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchyController_AddAnimationChannel_ForBlueprint @ 14a2c4c90

UFunction * __cdecl
Z_Construct_UFunction_URigHierarchyController_AddAnimationChannel_ForBlueprint(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_AddAnimationChannel_ForBlueprint_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_ResetCurveValues @ 14a2c4cd0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_ResetCurveValues(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_ResetCurveValues_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bFromSettings_SetBit @ 14a2c4d10

void __cdecl
Z_Construct_UFunction_URigHierarchy_GetControlPreferredEulerRotationOrder_Statics::
NewProp_bFromSettings_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewProp_bSetupUndo_SetBit @ 14a2c4d70

void __cdecl
Z_Construct_UFunction_URigHierarchyController_AddAvailableSpace_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewProp_bPrintPythonCommand_SetBit @ 14a2c4d80

void __cdecl
Z_Construct_UFunction_URigHierarchyController_AddAvailableSpace_Statics::
NewProp_bPrintPythonCommand_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x21) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a2c4dd0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_AddAvailableSpace_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x22) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_GetControlPreferredEulerRotationOrder @ 14a2c4e10

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetControlPreferredEulerRotationOrder(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetControlPreferredEulerRotationOrder_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_ResetPoseToInitial @ 14a2c4eb0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_ResetPoseToInitial(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_ResetPoseToInitial_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a2c4ef0

void * __cdecl Z_Construct_UScriptStruct_FRigInt32Metadata_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigInt32Metadata,&UE::CoreUObject::Private::Construct<FRigInt32Metadata>,&UE::CoreUObject::Private::ConstructForTests<FRigInt32Metadata>,&UE::CoreUObject::Private::Destruct<FRigInt32Metadata>,&UE::CoreUObject::Private::Copy<FRigInt32Metadata>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bFromSettings_SetBit @ 14a2c4fc0

void __cdecl
Z_Construct_UFunction_URigHierarchy_GetControlPreferredEulerRotationOrderByIndex_Statics::
NewProp_bFromSettings_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_ResetToDefault @ 14a2c4fd0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_ResetToDefault(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_ResetToDefault_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a2c5010

void * __cdecl Z_Construct_UScriptStruct_FRigCurrentAndInitialDirtyState_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigCurrentAndInitialDirtyState,&UE::CoreUObject::Private::Construct<FRigCurrentAndInitialDirtyState>,&UE::CoreUObject::Private::ConstructForTests<FRigCurrentAndInitialDirtyState>,&UE::CoreUObject::Private::Destruct<FRigCurrentAndInitialDirtyState>,&UE::CoreUObject::Private::Copy<FRigCurrentAndInitialDirtyState>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_URigHierarchyController_AddAvailableSpace @ 14a2c50c0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchyController_AddAvailableSpace(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_AddAvailableSpace_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_bSetupUndoRedo_SetBit @ 14a2c51c0

void __cdecl
Z_Construct_UFunction_URigHierarchy_RestoreConnectorsFromStates_Statics::
NewProp_bSetupUndoRedo_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_GetControlPreferredEulerRotationOrderByIndex @ 14a2c51d0

UFunction * __cdecl
Z_Construct_UFunction_URigHierarchy_GetControlPreferredEulerRotationOrderByIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetControlPreferredEulerRotationOrderByIndex_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bTransformInGlobal_SetBit @ 14a2c5250

void __cdecl
Z_Construct_UFunction_URigHierarchyController_AddBone_Statics::NewProp_bTransformInGlobal_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x80) = 1;
  return;
}

// NewProp_bSetupUndo_SetBit @ 14a2c5260

void __cdecl
Z_Construct_UFunction_URigHierarchyController_AddBone_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x82) = 1;
  return;
}

// NewProp_bInitial_SetBit @ 14a2c5270

void __cdecl
Z_Construct_UFunction_URigHierarchy_GetControlPreferredRotator_Statics::NewProp_bInitial_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewProp_bPrintPythonCommand_SetBit @ 14a2c5280

void __cdecl
Z_Construct_UFunction_URigHierarchyController_AddBone_Statics::NewProp_bPrintPythonCommand_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x83) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_RestoreConnectorsFromStates @ 14a2c5290

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_RestoreConnectorsFromStates(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_RestoreConnectorsFromStates_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_GetControlPreferredRotator @ 14a2c52f0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetControlPreferredRotator(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetControlPreferredRotator_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a2c5380

void * __cdecl Z_Construct_UScriptStruct_FRigComputedTransform_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigComputedTransform,&UE::CoreUObject::Private::Construct<FRigComputedTransform>,&UE::CoreUObject::Private::ConstructForTests<FRigComputedTransform>,&UE::CoreUObject::Private::Destruct<FRigComputedTransform>,&UE::CoreUObject::Private::Copy<FRigComputedTransform>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bSetupUndoRedo_SetBit @ 14a2c5400

void __cdecl
Z_Construct_UFunction_URigHierarchy_RestoreSocketsFromStates_Statics::NewProp_bSetupUndoRedo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewStructOps @ 14a2c5420

void * __cdecl Z_Construct_UScriptStruct_FRigInt32ArrayMetadata_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigInt32ArrayMetadata,&UE::CoreUObject::Private::Construct<FRigInt32ArrayMetadata>,&UE::CoreUObject::Private::ConstructForTests<FRigInt32ArrayMetadata>,&UE::CoreUObject::Private::Destruct<FRigInt32ArrayMetadata>,&UE::CoreUObject::Private::Copy<FRigInt32ArrayMetadata>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_URigHierarchyController_AddBone @ 14a2c5460

UFunction * __cdecl Z_Construct_UFunction_URigHierarchyController_AddBone(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_AddBone_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInitial_SetBit @ 14a2c54a0

void __cdecl
Z_Construct_UFunction_URigHierarchy_GetControlPreferredRotatorByIndex_Statics::
NewProp_bInitial_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_RestoreSocketsFromStates @ 14a2c5540

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_RestoreSocketsFromStates(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_RestoreSocketsFromStates_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_GetControlPreferredRotatorByIndex @ 14a2c5580

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetControlPreferredRotatorByIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetControlPreferredRotatorByIndex_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSetupUndo_SetBit @ 14a2c55c0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_AddChannelHost_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bPrintPythonCommand_SetBit @ 14a2c55d0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_AddChannelHost_Statics::
NewProp_bPrintPythonCommand_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a2c55e0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_AddChannelHost_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  return;
}

// NewProp_bAsynchronous_SetBit @ 14a2c55f0

void __cdecl
Z_Construct_UFunction_URigHierarchy_SendAutoKeyEvent_Statics::NewProp_bAsynchronous_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewStructOps @ 14a2c5640

void * __cdecl Z_Construct_UScriptStruct_FRigLocalAndGlobalTransform_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigLocalAndGlobalTransform,&UE::CoreUObject::Private::Construct<FRigLocalAndGlobalTransform>,&UE::CoreUObject::Private::ConstructForTests<FRigLocalAndGlobalTransform>,&UE::CoreUObject::Private::Destruct<FRigLocalAndGlobalTransform>,&UE::CoreUObject::Private::Copy<FRigLocalAndGlobalTransform>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_URigHierarchy_SendAutoKeyEvent @ 14a2c56a0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SendAutoKeyEvent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SendAutoKeyEvent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchyController_AddChannelHost @ 14a2c5720

UFunction * __cdecl Z_Construct_UFunction_URigHierarchyController_AddChannelHost(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_AddChannelHost_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_GetControlValue @ 14a2c5760

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetControlValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetControlValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a2c57a0

void * __cdecl Z_Construct_UScriptStruct_FRigNameMetadata_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigNameMetadata,&UE::CoreUObject::Private::Construct<FRigNameMetadata>,&UE::CoreUObject::Private::ConstructForTests<FRigNameMetadata>,&UE::CoreUObject::Private::Destruct<FRigNameMetadata>,&UE::CoreUObject::Private::Copy<FRigNameMetadata>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 14a2c5970

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetBoolArrayMetadata_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_bSetupUndo_SetBit @ 14a2c5980

void __cdecl
Z_Construct_UFunction_URigHierarchyController_AddComponent_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewProp_bPrintPythonCommand_SetBit @ 14a2c5990

void __cdecl
Z_Construct_UFunction_URigHierarchyController_AddComponent_Statics::
NewProp_bPrintPythonCommand_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x31) = 1;
  return;
}

// `scalar_deleting_destructor' @ 14a2c59c0

void * __thiscall
FRigAndConnectionRule::_scalar_deleting_destructor_(FRigAndConnectionRule *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FRigAndConnectionRule__6B_;
  DestructItems<FRigConnectionRuleStash,int>
            ((FRigConnectionRuleStash *)(this->ChildRules).AllocatorInstance.Data,
             (this->ChildRules).ArrayNum);
  pFVar1 = (this->ChildRules).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FRigConnectionRule__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// Z_Construct_UFunction_URigHierarchy_GetControlValueByIndex @ 14a2c5ab0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetControlValueByIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetControlValueByIndex_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_SetBoolArrayMetadata @ 14a2c5cc0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SetBoolArrayMetadata(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SetBoolArrayMetadata_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14a2c5d00

void * __thiscall
FRigOrConnectionRule::_scalar_deleting_destructor_(FRigOrConnectionRule *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FRigOrConnectionRule__6B_;
  DestructItems<FRigConnectionRuleStash,int>
            ((FRigConnectionRuleStash *)(this->ChildRules).AllocatorInstance.Data,
             (this->ChildRules).ArrayNum);
  pFVar1 = (this->ChildRules).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FRigConnectionRule__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// NewStructOps @ 14a2c5e80

void * __cdecl Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigCurrentAndInitialTransform,&UE::CoreUObject::Private::Construct<FRigCurrentAndInitialTransform>,&UE::CoreUObject::Private::ConstructForTests<FRigCurrentAndInitialTransform>,&UE::CoreUObject::Private::Destruct<FRigCurrentAndInitialTransform>,&UE::CoreUObject::Private::Copy<FRigCurrentAndInitialTransform>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_URigHierarchyController_AddComponent @ 14a2c6120

UFunction * __cdecl Z_Construct_UFunction_URigHierarchyController_AddComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_AddComponent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_InValue_SetBit @ 14a2c6160

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetBoolMetadata_Statics::NewProp_InValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// `scalar_deleting_destructor' @ 14a2c6170

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void * __thiscall
FRigTypeConnectionRule::_scalar_deleting_destructor_(FRigTypeConnectionRule *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FRigConnectionRule__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// NewProp_ReturnValue_SetBit @ 14a2c61b0

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetBoolMetadata_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x15) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_GetCurveKeys @ 14a2c6220

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetCurveKeys(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_URigHierarchy_GetCurveKeys_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14a2c64f0

void * __thiscall
FRigTagConnectionRule::_scalar_deleting_destructor_(FRigTagConnectionRule *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FRigConnectionRule__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// NewProp_bSetupUndo_SetBit @ 14a2c6530

void __cdecl
Z_Construct_UFunction_URigHierarchyController_AddConnector_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewProp_bPrintPythonCommand_SetBit @ 14a2c65b0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_AddConnector_Statics::
NewProp_bPrintPythonCommand_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x31) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_SetBoolMetadata @ 14a2c65c0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SetBoolMetadata(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SetBoolMetadata_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a2c6600

void * __cdecl Z_Construct_UScriptStruct_FRigNameArrayMetadata_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigNameArrayMetadata,&UE::CoreUObject::Private::Construct<FRigNameArrayMetadata>,&UE::CoreUObject::Private::ConstructForTests<FRigNameArrayMetadata>,&UE::CoreUObject::Private::Destruct<FRigNameArrayMetadata>,&UE::CoreUObject::Private::Copy<FRigNameArrayMetadata>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14a2c6ba0

void * __thiscall
FRigChildOfPrimaryConnectionRule::_scalar_deleting_destructor_
          (FRigChildOfPrimaryConnectionRule *this,uint param_1)

{
  *this = (FRigChildOfPrimaryConnectionRule)&___7FRigConnectionRule__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UFunction_URigHierarchy_GetCurveValue @ 14a2c6be0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetCurveValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetCurveValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSetupUndo_SetBit @ 14a2c6c20

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetConnectorSettings_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// NewProp_bForce_SetBit @ 14a2c6c90

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetConnectorSettings_Statics::NewProp_bForce_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x39) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchyController_AddConnector @ 14a2c6ca0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchyController_AddConnector(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_AddConnector_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bPrintPythonCommands_SetBit @ 14a2c6ce0

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetConnectorSettings_Statics::
NewProp_bPrintPythonCommands_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x3a) = 1;
  return;
}

// NewStructOps @ 14a2c6d40

void * __cdecl Z_Construct_UScriptStruct_FRigPreferredEulerAngles_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigPreferredEulerAngles,&UE::CoreUObject::Private::Construct<FRigPreferredEulerAngles>,&UE::CoreUObject::Private::ConstructForTests<FRigPreferredEulerAngles>,&UE::CoreUObject::Private::Destruct<FRigPreferredEulerAngles>,&UE::CoreUObject::Private::Copy<FRigPreferredEulerAngles>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_URigHierarchy_GetCurveValueByIndex @ 14a2c6d80

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetCurveValueByIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetCurveValueByIndex_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSetupUndo_SetBit @ 14a2c6dc0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_AddControl_ForBlueprint_Statics::
NewProp_bSetupUndo_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2c4) = 1;
  return;
}

// NewProp_bPrintPythonCommand_SetBit @ 14a2c6dd0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_AddControl_ForBlueprint_Statics::
NewProp_bPrintPythonCommand_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2c5) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_SetConnectorSettings @ 14a2c6de0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SetConnectorSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SetConnectorSettings_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_GetDefaultParent @ 14a2c6e20

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetDefaultParent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetDefaultParent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a2c6e60

void * __cdecl Z_Construct_UScriptStruct_FRigVectorMetadata_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVectorMetadata,&UE::CoreUObject::Private::Construct<FRigVectorMetadata>,&UE::CoreUObject::Private::ConstructForTests<FRigVectorMetadata>,&UE::CoreUObject::Private::Destruct<FRigVectorMetadata>,&UE::CoreUObject::Private::Copy<FRigVectorMetadata>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bSetupUndo_SetBit @ 14a2c6ea0

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetConnectorSettingsByIndex_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewProp_bForce_SetBit @ 14a2c6eb0

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetConnectorSettingsByIndex_Statics::NewProp_bForce_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x31) = 1;
  return;
}

// NewProp_bPrintPythonCommands_SetBit @ 14a2c6ec0

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetConnectorSettingsByIndex_Statics::
NewProp_bPrintPythonCommands_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x32) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchyController_AddControl_ForBlueprint @ 14a2c6ed0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchyController_AddControl_ForBlueprint(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_AddControl_ForBlueprint_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_GetEulerTransformFromControlValue @ 14a2c7040

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetEulerTransformFromControlValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetEulerTransformFromControlValue_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSelected_SetBit @ 14a2c70a0

void __cdecl
Z_Construct_UScriptStruct_FRigBaseElement_Statics::NewProp_bSelected_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  return;
}

// NewStructOps @ 14a2c70b0

void * __cdecl Z_Construct_UScriptStruct_FRigBaseElement_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigBaseElement,&UE::CoreUObject::Private::Construct<FRigBaseElement>,&UE::CoreUObject::Private::ConstructForTests<FRigBaseElement>,&UE::CoreUObject::Private::Destruct<FRigBaseElement>,&UE::CoreUObject::Private::Copy<FRigBaseElement>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bSetupUndo_SetBit @ 14a2c70f0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_AddCurve_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewProp_bPrintPythonCommand_SetBit @ 14a2c7170

void __cdecl
Z_Construct_UFunction_URigHierarchyController_AddCurve_Statics::NewProp_bPrintPythonCommand_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_SetConnectorSettingsByIndex @ 14a2c7180

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SetConnectorSettingsByIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SetConnectorSettingsByIndex_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_bInitial_SetBit @ 14a2c7210

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransform_Statics::NewProp_bInitial_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x70) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_GetFirstParent @ 14a2c7220

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetFirstParent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetFirstParent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAffectChildren_SetBit @ 14a2c7260

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransform_Statics::
NewProp_bAffectChildren_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x71) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchyController_AddCurve @ 14a2c7270

UFunction * __cdecl Z_Construct_UFunction_URigHierarchyController_AddCurve(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_AddCurve_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSetupUndo_SetBit @ 14a2c72b0

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransform_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x72) = 1;
  return;
}

// NewProp_bPrintPythonCommands_SetBit @ 14a2c72c0

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransform_Statics::
NewProp_bPrintPythonCommands_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x73) = 1;
  return;
}

// Z_Construct_UClass_UAdditiveControlRig @ 14a2c72d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAdditiveControlRig(void)

{
  if (Z_Registration_Info_UClass_UAdditiveControlRig.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAdditiveControlRig.OuterSingleton,
               &Z_Construct_UClass_UAdditiveControlRig_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAdditiveControlRig.OuterSingleton;
}

// NewStructOps @ 14a2c7310

void * __cdecl Z_Construct_UScriptStruct_FRigVectorArrayMetadata_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigVectorArrayMetadata,&UE::CoreUObject::Private::Construct<FRigVectorArrayMetadata>,&UE::CoreUObject::Private::ConstructForTests<FRigVectorArrayMetadata>,&UE::CoreUObject::Private::Destruct<FRigVectorArrayMetadata>,&UE::CoreUObject::Private::Copy<FRigVectorArrayMetadata>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bTransformInGlobal_SetBit @ 14a2c7350

void __cdecl
Z_Construct_UFunction_URigHierarchyController_AddNull_Statics::NewProp_bTransformInGlobal_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x80) = 1;
  return;
}

// NewProp_bSetupUndo_SetBit @ 14a2c7360

void __cdecl
Z_Construct_UFunction_URigHierarchyController_AddNull_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x81) = 1;
  return;
}

// NewProp_bPrintPythonCommand_SetBit @ 14a2c7370

void __cdecl
Z_Construct_UFunction_URigHierarchyController_AddNull_Statics::NewProp_bPrintPythonCommand_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x82) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_GetFloatArrayMetadata @ 14a2c7380

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetFloatArrayMetadata(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetFloatArrayMetadata_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransform @ 14a2c7430

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransform_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a2c74d0

void * __cdecl Z_Construct_UScriptStruct_FRigTransformElement_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x120;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigTransformElement,&UE::CoreUObject::Private::Construct<FRigTransformElement>,&UE::CoreUObject::Private::ConstructForTests<FRigTransformElement>,&UE::CoreUObject::Private::Destruct<FRigTransformElement>,&UE::CoreUObject::Private::Copy<FRigTransformElement>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_URigHierarchyController_AddNull @ 14a2c7570

UFunction * __cdecl Z_Construct_UFunction_URigHierarchyController_AddNull(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_AddNull_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInitial_SetBit @ 14a2c75b0

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransformByIndex_Statics::
NewProp_bInitial_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x70) = 1;
  return;
}

// NewProp_bAffectChildren_SetBit @ 14a2c7730

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransformByIndex_Statics::
NewProp_bAffectChildren_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x71) = 1;
  return;
}

// NewProp_bSetupUndo_SetBit @ 14a2c7740

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransformByIndex_Statics::
NewProp_bSetupUndo_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x72) = 1;
  return;
}

// NewProp_bPrintPythonCommands_SetBit @ 14a2c7750

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransformByIndex_Statics::
NewProp_bPrintPythonCommands_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x73) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_GetFloatFromControlValue @ 14a2c7760

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetFloatFromControlValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetFloatFromControlValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bMaintainGlobalTransform_SetBit @ 14a2c7860

void __cdecl
Z_Construct_UFunction_URigHierarchyController_AddParent_Statics::
NewProp_bMaintainGlobalTransform_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  return;
}

// NewProp_bSetupUndo_SetBit @ 14a2c7870

void __cdecl
Z_Construct_UFunction_URigHierarchyController_AddParent_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a2c7880

void __cdecl
Z_Construct_UFunction_URigHierarchyController_AddParent_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  return;
}

// NewStructOps @ 14a2c78d0

void * __cdecl Z_Construct_UScriptStruct_FRigRotatorMetadata_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigRotatorMetadata,&UE::CoreUObject::Private::Construct<FRigRotatorMetadata>,&UE::CoreUObject::Private::ConstructForTests<FRigRotatorMetadata>,&UE::CoreUObject::Private::Destruct<FRigRotatorMetadata>,&UE::CoreUObject::Private::Copy<FRigRotatorMetadata>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransformByIndex @ 14a2c7910

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransformByIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransformByIndex_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_GetFloatMetadata @ 14a2c79d0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetFloatMetadata(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetFloatMetadata_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a2c7aa0

void * __cdecl Z_Construct_UScriptStruct_FRigSingleParentElement_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x128;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigSingleParentElement,&UE::CoreUObject::Private::Construct<FRigSingleParentElement>,&UE::CoreUObject::Private::ConstructForTests<FRigSingleParentElement>,&UE::CoreUObject::Private::Destruct<FRigSingleParentElement>,&UE::CoreUObject::Private::Copy<FRigSingleParentElement>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_URigHierarchyController_AddParent @ 14a2c7ae0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchyController_AddParent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_AddParent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInitial_SetBit @ 14a2c7b20

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetControlPreferredEulerAngles_Statics::NewProp_bInitial_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  return;
}

// NewProp_bFixEulerFlips_SetBit @ 14a2c7b30

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetControlPreferredEulerAngles_Statics::
NewProp_bFixEulerFlips_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2a) = 1;
  return;
}

// NewProp_bInitial_SetBit @ 14a2c7b40

void __cdecl
Z_Construct_UFunction_URigHierarchy_GetGlobalControlOffsetTransform_Statics::NewProp_bInitial_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_GetGlobalControlOffsetTransform @ 14a2c7c90

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetGlobalControlOffsetTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetGlobalControlOffsetTransform_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bTransformInGlobal_SetBit @ 14a2c7cd0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_AddSocket_Statics::NewProp_bTransformInGlobal_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x80) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_SetControlPreferredEulerAngles @ 14a2c7d20

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SetControlPreferredEulerAngles(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SetControlPreferredEulerAngles_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSetupUndo_SetBit @ 14a2c7d60

void __cdecl
Z_Construct_UFunction_URigHierarchyController_AddSocket_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xa8) = 1;
  return;
}

// NewProp_bPrintPythonCommand_SetBit @ 14a2c7d70

void __cdecl
Z_Construct_UFunction_URigHierarchyController_AddSocket_Statics::NewProp_bPrintPythonCommand_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xa9) = 1;
  return;
}

// NewProp_bInitial_SetBit @ 14a2c7d80

void __cdecl
Z_Construct_UFunction_URigHierarchy_GetGlobalControlOffsetTransformByIndex_Statics::
NewProp_bInitial_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// NewStructOps @ 14a2c7dd0

void * __cdecl Z_Construct_UScriptStruct_FRigRotatorArrayMetadata_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigRotatorArrayMetadata,&UE::CoreUObject::Private::Construct<FRigRotatorArrayMetadata>,&UE::CoreUObject::Private::ConstructForTests<FRigRotatorArrayMetadata>,&UE::CoreUObject::Private::Destruct<FRigRotatorArrayMetadata>,&UE::CoreUObject::Private::Copy<FRigRotatorArrayMetadata>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FCachedRigElement @ 14a2c7e10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCachedRigElement(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCachedRigElement.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCachedRigElement.InnerSingleton,
               &Z_Construct_UScriptStruct_FCachedRigElement_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCachedRigElement.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCachedRigElement.InnerSingleton;
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

// NewProp_bInitial_SetBit @ 14a2c7e90

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetControlPreferredEulerAnglesByIndex_Statics::
NewProp_bInitial_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x21) = 1;
  return;
}

// NewProp_bFixEulerFlips_SetBit @ 14a2c7ea0

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetControlPreferredEulerAnglesByIndex_Statics::
NewProp_bFixEulerFlips_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x22) = 1;
  return;
}

// NewStructOps @ 14a2c7eb0

void * __cdecl Z_Construct_UScriptStruct_FCachedRigElement_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCachedRigElement,&UE::CoreUObject::Private::Construct<FCachedRigElement>,&UE::CoreUObject::Private::ConstructForTests<FCachedRigElement>,&UE::CoreUObject::Private::Destruct<FCachedRigElement>,&UE::CoreUObject::Private::Copy<FCachedRigElement>,&UE::CoreUObject::Private::GetStructTypeHash<FCachedRigElement>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_URigHierarchy_GetGlobalControlOffsetTransformByIndex @ 14a2c7ef0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetGlobalControlOffsetTransformByIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetGlobalControlOffsetTransformByIndex_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchyController_AddSocket @ 14a2c7f30

UFunction * __cdecl Z_Construct_UFunction_URigHierarchyController_AddSocket(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_AddSocket_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a2c7fe0

void * __cdecl Z_Construct_UScriptStruct_FRigElementWeight_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigElementWeight,&UE::CoreUObject::Private::Construct<FRigElementWeight>,&UE::CoreUObject::Private::ConstructForTests<FRigElementWeight>,&UE::CoreUObject::Private::Destruct<FRigElementWeight>,&UE::CoreUObject::Private::Copy<FRigElementWeight>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bInitial_SetBit @ 14a2c8060

void __cdecl
Z_Construct_UFunction_URigHierarchy_GetGlobalControlShapeTransform_Statics::NewProp_bInitial_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_SetControlPreferredEulerAnglesByIndex @ 14a2c8070

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SetControlPreferredEulerAnglesByIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SetControlPreferredEulerAnglesByIndex_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSetupUndo_SetBit @ 14a2c8150

void __cdecl
Z_Construct_UFunction_URigHierarchyController_ClearSelection_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a2c81b0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_ClearSelection_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_GetGlobalControlShapeTransform @ 14a2c81c0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetGlobalControlShapeTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetGlobalControlShapeTransform_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInitial_SetBit @ 14a2c8240

void __cdecl
Z_Construct_UFunction_URigHierarchy_GetGlobalControlShapeTransformByIndex_Statics::
NewProp_bInitial_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchyController_ClearSelection @ 14a2c8250

UFunction * __cdecl Z_Construct_UFunction_URigHierarchyController_ClearSelection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_ClearSelection_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotationOrder @ 14a2c8290

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotationOrder(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotationOrder_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a2c82d0

void * __cdecl Z_Construct_UScriptStruct_FCachedRigComponent_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCachedRigComponent,&UE::CoreUObject::Private::Construct<FCachedRigComponent>,&UE::CoreUObject::Private::ConstructForTests<FCachedRigComponent>,&UE::CoreUObject::Private::Destruct<FCachedRigComponent>,&UE::CoreUObject::Private::Copy<FCachedRigComponent>,&UE::CoreUObject::Private::GetStructTypeHash<FCachedRigComponent>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a2c8310

void * __cdecl Z_Construct_UScriptStruct_FRigQuatMetadata_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigQuatMetadata,&UE::CoreUObject::Private::Construct<FRigQuatMetadata>,&UE::CoreUObject::Private::ConstructForTests<FRigQuatMetadata>,&UE::CoreUObject::Private::Destruct<FRigQuatMetadata>,&UE::CoreUObject::Private::Copy<FRigQuatMetadata>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 14a2c8350

void __cdecl
Z_Construct_UFunction_URigHierarchyController_DeselectComponent_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_GetGlobalControlShapeTransformByIndex @ 14a2c8360

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetGlobalControlShapeTransformByIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetGlobalControlShapeTransformByIndex_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a2c83a0

void * __cdecl Z_Construct_UScriptStruct_FRigElementParentConstraint_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigElementParentConstraint,&UE::CoreUObject::Private::Construct<FRigElementParentConstraint>,&UE::CoreUObject::Private::ConstructForTests<FRigElementParentConstraint>,&UE::CoreUObject::Private::Destruct<FRigElementParentConstraint>,&UE::CoreUObject::Private::Copy<FRigElementParentConstraint>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_URigHierarchyController_DeselectComponent @ 14a2c83e0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchyController_DeselectComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_DeselectComponent_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotationOrderByIndex @ 14a2c8420

UFunction * __cdecl
Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotationOrderByIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotationOrderByIndex_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInitial_SetBit @ 14a2c8460

void __cdecl
Z_Construct_UFunction_URigHierarchy_GetGlobalTransform_Statics::NewProp_bInitial_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a2c84d0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_DeselectElement_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UEnum_ControlRig_ERigBoneType @ 14a2c84e0

UEnum * __cdecl Z_Construct_UEnum_ControlRig_ERigBoneType(void)

{
  if (Z_Registration_Info_UEnum_ERigBoneType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERigBoneType.InnerSingleton,
               &Z_Construct_UEnum_ControlRig_ERigBoneType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERigBoneType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FRigBone @ 14a2c8520

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigBone(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigBone.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigBone.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigBone_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigBone.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigBone.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigBoneHierarchy @ 14a2c85a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigBoneHierarchy(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigBoneHierarchy.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigBoneHierarchy.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigBoneHierarchy_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigBoneHierarchy.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigBoneHierarchy.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigElement @ 14a2c8620

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigElement(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigElement.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigElement.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigElement_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigElement.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigElement.InnerSingleton;
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

// NewProp_bInitial_SetBit @ 14a2c86a0

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotator_Statics::NewProp_bInitial_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_bFixEulerFlips_SetBit @ 14a2c86d0

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotator_Statics::
NewProp_bFixEulerFlips_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_GetGlobalTransform @ 14a2c8700

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetGlobalTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetGlobalTransform_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a2c8760

void * __cdecl Z_Construct_UScriptStruct_FRigBone_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x170;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigBone,&UE::CoreUObject::Private::Construct<FRigBone>,&UE::CoreUObject::Private::ConstructForTests<FRigBone>,&UE::CoreUObject::Private::Destruct<FRigBone>,&UE::CoreUObject::Private::Copy<FRigBone>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_URigHierarchyController_DeselectElement @ 14a2c8990

UFunction * __cdecl Z_Construct_UFunction_URigHierarchyController_DeselectElement(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_DeselectElement_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInitial_SetBit @ 14a2c89d0

void __cdecl
Z_Construct_UFunction_URigHierarchy_GetGlobalTransformByIndex_Statics::NewProp_bInitial_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotator @ 14a2c8a60

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotator(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotator_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a2c8aa0

void * __cdecl Z_Construct_UScriptStruct_FRigMultiParentElement_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x230;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigMultiParentElement,&UE::CoreUObject::Private::Construct<FRigMultiParentElement>,&UE::CoreUObject::Private::ConstructForTests<FRigMultiParentElement>,&UE::CoreUObject::Private::Destruct<FRigMultiParentElement>,&UE::CoreUObject::Private::Copy<FRigMultiParentElement>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bSetupUndo_SetBit @ 14a2c8ae0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_DeselectHierarchyKey_Statics::
NewProp_bSetupUndo_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a2c8af0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_DeselectHierarchyKey_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  return;
}

// NewStructOps @ 14a2c8b00

void * __cdecl Z_Construct_UScriptStruct_FRigQuatArrayMetadata_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigQuatArrayMetadata,&UE::CoreUObject::Private::Construct<FRigQuatArrayMetadata>,&UE::CoreUObject::Private::ConstructForTests<FRigQuatArrayMetadata>,&UE::CoreUObject::Private::Destruct<FRigQuatArrayMetadata>,&UE::CoreUObject::Private::Copy<FRigQuatArrayMetadata>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_URigHierarchy_GetGlobalTransformByIndex @ 14a2c8b40

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetGlobalTransformByIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetGlobalTransformByIndex_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInitial_SetBit @ 14a2c8b80

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotatorByIndex_Statics::
NewProp_bInitial_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewProp_bFixEulerFlips_SetBit @ 14a2c8b90

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotatorByIndex_Statics::
NewProp_bFixEulerFlips_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x21) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchyController_DeselectHierarchyKey @ 14a2c8ba0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchyController_DeselectHierarchyKey(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_DeselectHierarchyKey_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotatorByIndex @ 14a2c8c60

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotatorByIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotatorByIndex_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_GetIndex_ForBlueprint @ 14a2c8ca0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetIndex_ForBlueprint(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetIndex_ForBlueprint_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSelectNewElements_SetBit @ 14a2c8ce0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_DuplicateElements_Statics::
NewProp_bSelectNewElements_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bSetupUndo_SetBit @ 14a2c8cf0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_DuplicateElements_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// NewProp_bPrintPythonCommands_SetBit @ 14a2c8d00

void __cdecl
Z_Construct_UFunction_URigHierarchyController_DuplicateElements_Statics::
NewProp_bPrintPythonCommands_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  return;
}

// NewProp_bSetupUndo_SetBit @ 14a2c8d60

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetControlSettings_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x230) = 1;
  return;
}

// NewProp_bForce_SetBit @ 14a2c8d70

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetControlSettings_Statics::NewProp_bForce_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x231) = 1;
  return;
}

// NewProp_bPrintPythonCommands_SetBit @ 14a2c8d80

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetControlSettings_Statics::NewProp_bPrintPythonCommands_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x232) = 1;
  return;
}

// NewStructOps @ 14a2c8d90

void * __cdecl Z_Construct_UScriptStruct_FRigBoneElement_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x130;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigBoneElement,&UE::CoreUObject::Private::Construct<FRigBoneElement>,&UE::CoreUObject::Private::ConstructForTests<FRigBoneElement>,&UE::CoreUObject::Private::Destruct<FRigBoneElement>,&UE::CoreUObject::Private::Copy<FRigBoneElement>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a2c8dd0

void * __cdecl Z_Construct_UScriptStruct_FRigBoneHierarchy_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigBoneHierarchy,&UE::CoreUObject::Private::Construct<FRigBoneHierarchy>,&UE::CoreUObject::Private::ConstructForTests<FRigBoneHierarchy>,&UE::CoreUObject::Private::Destruct<FRigBoneHierarchy>,&UE::CoreUObject::Private::Copy<FRigBoneHierarchy>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a2c8e10

void * __cdecl Z_Construct_UScriptStruct_FRigTransformMetadata_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigTransformMetadata,&UE::CoreUObject::Private::Construct<FRigTransformMetadata>,&UE::CoreUObject::Private::ConstructForTests<FRigTransformMetadata>,&UE::CoreUObject::Private::Destruct<FRigTransformMetadata>,&UE::CoreUObject::Private::Copy<FRigTransformMetadata>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_URigHierarchy_GetInt32ArrayMetadata @ 14a2c8e50

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetInt32ArrayMetadata(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetInt32ArrayMetadata_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchyController_DuplicateElements @ 14a2c8e90

UFunction * __cdecl Z_Construct_UFunction_URigHierarchyController_DuplicateElements(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_DuplicateElements_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_SetControlSettings @ 14a2c8f10

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SetControlSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SetControlSettings_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchyController_ExportSelectionToText @ 14a2c9000

UFunction * __cdecl Z_Construct_UFunction_URigHierarchyController_ExportSelectionToText(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_ExportSelectionToText_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSetupUndo_SetBit @ 14a2c9060

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetControlSettingsByIndex_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x230) = 1;
  return;
}

// NewProp_bForce_SetBit @ 14a2c9070

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetControlSettingsByIndex_Statics::NewProp_bForce_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x231) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_GetInt32Metadata @ 14a2c9080

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetInt32Metadata(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetInt32Metadata_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bPrintPythonCommands_SetBit @ 14a2c90d0

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetControlSettingsByIndex_Statics::
NewProp_bPrintPythonCommands_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x232) = 1;
  return;
}

// NewStructOps @ 14a2c9180

void * __cdecl Z_Construct_UScriptStruct_FRigNullElement_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x230;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigNullElement,&UE::CoreUObject::Private::Construct<FRigNullElement>,&UE::CoreUObject::Private::ConstructForTests<FRigNullElement>,&UE::CoreUObject::Private::Destruct<FRigNullElement>,&UE::CoreUObject::Private::Copy<FRigNullElement>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_URigHierarchy_SetControlSettingsByIndex @ 14a2c91c0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SetControlSettingsByIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SetControlSettingsByIndex_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchyController_ExportToText @ 14a2c9200

UFunction * __cdecl Z_Construct_UFunction_URigHierarchyController_ExportToText(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_ExportToText_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_GetIntFromControlValue @ 14a2c9380

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetIntFromControlValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetIntFromControlValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a2c93c0

void * __cdecl Z_Construct_UScriptStruct_FRigTransformArrayMetadata_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigTransformArrayMetadata,&UE::CoreUObject::Private::Construct<FRigTransformArrayMetadata>,&UE::CoreUObject::Private::ConstructForTests<FRigTransformArrayMetadata>,&UE::CoreUObject::Private::Destruct<FRigTransformArrayMetadata>,&UE::CoreUObject::Private::Copy<FRigTransformArrayMetadata>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UEnum_ControlRig_ERigElementType @ 14a2c9400

UEnum * __cdecl Z_Construct_UEnum_ControlRig_ERigElementType(void)

{
  if (Z_Registration_Info_UEnum_ERigElementType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERigElementType.InnerSingleton,
               &Z_Construct_UEnum_ControlRig_ERigElementType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERigElementType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FRigConnectionRule @ 14a2c9440

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigConnectionRule(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigConnectionRule.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigConnectionRule.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigConnectionRule_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigConnectionRule.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigConnectionRule.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigConnectionRuleStash @ 14a2c94c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigConnectionRuleStash(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigConnectionRuleStash.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigConnectionRuleStash.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigConnectionRuleStash_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigConnectionRuleStash.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigConnectionRuleStash.InnerSingleton;
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

// NewProp_bInitial_SetBit @ 14a2c9540

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetControlShapeTransform_Statics::NewProp_bInitial_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x70) = 1;
  return;
}

// NewProp_bSetupUndo_SetBit @ 14a2c9550

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetControlShapeTransform_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x71) = 1;
  return;
}

// NewStructOps @ 14a2c9560

void * __cdecl Z_Construct_UScriptStruct_FRigConnectionRuleStash_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigConnectionRuleStash,&UE::CoreUObject::Private::Construct<FRigConnectionRuleStash>,&UE::CoreUObject::Private::ConstructForTests<FRigConnectionRuleStash>,&UE::CoreUObject::Private::Destruct<FRigConnectionRuleStash>,&UE::CoreUObject::Private::Copy<FRigConnectionRuleStash>,&UE::CoreUObject::Private::GetStructTypeHash<FRigConnectionRuleStash>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_URigHierarchy_GetKey @ 14a2c95a0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetKey(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_URigHierarchy_GetKey_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchyController_GetControlSettings @ 14a2c95e0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchyController_GetControlSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_GetControlSettings_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_SetControlShapeTransform @ 14a2c9660

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SetControlShapeTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SetControlShapeTransform_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInitial_SetBit @ 14a2c96c0

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetControlShapeTransformByIndex_Statics::NewProp_bInitial_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x70) = 1;
  return;
}

// NewProp_bSetupUndo_SetBit @ 14a2c96d0

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetControlShapeTransformByIndex_Statics::
NewProp_bSetupUndo_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x71) = 1;
  return;
}

// NewStructOps @ 14a2c9700

void * __cdecl Z_Construct_UScriptStruct_FRigElementKeyWithLabel_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigElementKeyWithLabel,&UE::CoreUObject::Private::Construct<FRigElementKeyWithLabel>,&UE::CoreUObject::Private::ConstructForTests<FRigElementKeyWithLabel>,&UE::CoreUObject::Private::Destruct<FRigElementKeyWithLabel>,&UE::CoreUObject::Private::Copy<FRigElementKeyWithLabel>,&UE::CoreUObject::Private::GetStructTypeHash<FRigElementKeyWithLabel>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_URigHierarchy_GetKeys @ 14a2c9740

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetKeys(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_URigHierarchy_GetKeys_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchyController_GetHierarchy @ 14a2c97c0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchyController_GetHierarchy(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_GetHierarchy_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a2c9800

void * __cdecl Z_Construct_UScriptStruct_FRigLinearColorMetadata_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigLinearColorMetadata,&UE::CoreUObject::Private::Construct<FRigLinearColorMetadata>,&UE::CoreUObject::Private::ConstructForTests<FRigLinearColorMetadata>,&UE::CoreUObject::Private::Destruct<FRigLinearColorMetadata>,&UE::CoreUObject::Private::Copy<FRigLinearColorMetadata>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a2c9840

void * __cdecl Z_Construct_UScriptStruct_FRigConnectionRule_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigConnectionRule,&UE::CoreUObject::Private::Construct<FRigConnectionRule>,&UE::CoreUObject::Private::ConstructForTests<FRigConnectionRule>,&UE::CoreUObject::Private::Destruct<FRigConnectionRule>,&UE::CoreUObject::Private::Copy<FRigConnectionRule>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_URigHierarchy_SetControlShapeTransformByIndex @ 14a2c98d0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SetControlShapeTransformByIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SetControlShapeTransformByIndex_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bReplaceExistingBones_SetBit @ 14a2c9950

void __cdecl
Z_Construct_UFunction_URigHierarchyController_ImportBones_Statics::
NewProp_bReplaceExistingBones_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bRemoveObsoleteBones_SetBit @ 14a2c9960

void __cdecl
Z_Construct_UFunction_URigHierarchyController_ImportBones_Statics::
NewProp_bRemoveObsoleteBones_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// NewProp_bSelectBones_SetBit @ 14a2c9970

void __cdecl
Z_Construct_UFunction_URigHierarchyController_ImportBones_Statics::NewProp_bSelectBones_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  return;
}

// NewProp_bSetupUndo_SetBit @ 14a2c9980

void __cdecl
Z_Construct_UFunction_URigHierarchyController_ImportBones_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x13) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_GetLinearColorArrayMetadata @ 14a2c9990

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetLinearColorArrayMetadata(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetLinearColorArrayMetadata_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_bPrintPythonCommand_SetBit @ 14a2c99d0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_ImportBones_Statics::
NewProp_bPrintPythonCommand_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// NewProp_bSetupUndo_SetBit @ 14a2c99e0

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetControlValue_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x91) = 1;
  return;
}

// NewProp_bPrintPythonCommands_SetBit @ 14a2c99f0

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetControlValue_Statics::NewProp_bPrintPythonCommands_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x92) = 1;
  return;
}

// NewStructOps @ 14a2c9aa0

void * __cdecl Z_Construct_UScriptStruct_FRigControlElementCustomization_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigControlElementCustomization,&UE::CoreUObject::Private::Construct<FRigControlElementCustomization>,&UE::CoreUObject::Private::ConstructForTests<FRigControlElementCustomization>,&UE::CoreUObject::Private::Destruct<FRigControlElementCustomization>,&UE::CoreUObject::Private::Copy<FRigControlElementCustomization>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_URigHierarchy_SetControlValue @ 14a2c9ae0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SetControlValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SetControlValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a2c9b20

void * __cdecl Z_Construct_UScriptStruct_FRigAndConnectionRule_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigAndConnectionRule,&UE::CoreUObject::Private::Construct<FRigAndConnectionRule>,&UE::CoreUObject::Private::ConstructForTests<FRigAndConnectionRule>,&UE::CoreUObject::Private::Destruct<FRigAndConnectionRule>,&UE::CoreUObject::Private::Copy<FRigAndConnectionRule>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_URigHierarchy_GetLinearColorMetadata @ 14a2c9bd0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetLinearColorMetadata(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetLinearColorMetadata_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchyController_ImportBones @ 14a2c9c10

UFunction * __cdecl Z_Construct_UFunction_URigHierarchyController_ImportBones(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_ImportBones_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a2c9c50

void * __cdecl Z_Construct_UScriptStruct_FRigLinearColorArrayMetadata_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigLinearColorArrayMetadata,&UE::CoreUObject::Private::Construct<FRigLinearColorArrayMetadata>,&UE::CoreUObject::Private::ConstructForTests<FRigLinearColorArrayMetadata>,&UE::CoreUObject::Private::Destruct<FRigLinearColorArrayMetadata>,&UE::CoreUObject::Private::Copy<FRigLinearColorArrayMetadata>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bSetupUndo_SetBit @ 14a2c9c90

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetControlValueByIndex_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x89) = 1;
  return;
}

// NewProp_bInitial_SetBit @ 14a2c9ca0

void __cdecl
Z_Construct_UFunction_URigHierarchy_GetLocalControlShapeTransform_Statics::NewProp_bInitial_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewProp_bPrintPythonCommands_SetBit @ 14a2c9cb0

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetControlValueByIndex_Statics::
NewProp_bPrintPythonCommands_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x8a) = 1;
  return;
}

// NewProp_bReplaceExistingBones_SetBit @ 14a2c9d20

void __cdecl
Z_Construct_UFunction_URigHierarchyController_ImportBonesFromSkeletalMesh_Statics::
NewProp_bReplaceExistingBones_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bRemoveObsoleteBones_SetBit @ 14a2c9d30

void __cdecl
Z_Construct_UFunction_URigHierarchyController_ImportBonesFromSkeletalMesh_Statics::
NewProp_bRemoveObsoleteBones_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// NewProp_bSelectBones_SetBit @ 14a2c9d40

void __cdecl
Z_Construct_UFunction_URigHierarchyController_ImportBonesFromSkeletalMesh_Statics::
NewProp_bSelectBones_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  return;
}

// NewProp_bSetupUndo_SetBit @ 14a2c9d50

void __cdecl
Z_Construct_UFunction_URigHierarchyController_ImportBonesFromSkeletalMesh_Statics::
NewProp_bSetupUndo_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x13) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_GetLocalControlShapeTransform @ 14a2c9d60

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetLocalControlShapeTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetLocalControlShapeTransform_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bPrintPythonCommand_SetBit @ 14a2c9da0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_ImportBonesFromSkeletalMesh_Statics::
NewProp_bPrintPythonCommand_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_SetControlValueByIndex @ 14a2c9ef0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SetControlValueByIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SetControlValueByIndex_Statics::FuncParams);
  }
  return ReturnFunction;
}

// ERigControlTransformChannel_StaticEnum @ 14a2c9f30

UEnum * __cdecl ERigControlTransformChannel_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigControlTransformChannel.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_ERigControlTransformChannel.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigControlTransformChannel,(UObject *)pUVar1,
                       L"ERigControlTransformChannel");
  }
  return Z_Registration_Info_UEnum_ERigControlTransformChannel.OuterSingleton;
}

// NewProp_bInitial_SetBit @ 14a2c9f70

void __cdecl
Z_Construct_UFunction_URigHierarchy_GetLocalControlShapeTransformByIndex_Statics::
NewProp_bInitial_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// NewProp_bVisibility_SetBit @ 14a2c9ff0

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetControlVisibility_Statics::NewProp_bVisibility_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_GetLocalControlShapeTransformByIndex @ 14a2ca1d0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetLocalControlShapeTransformByIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetLocalControlShapeTransformByIndex_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a2ca210

void * __cdecl Z_Construct_UScriptStruct_FRigOrConnectionRule_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigOrConnectionRule,&UE::CoreUObject::Private::Construct<FRigOrConnectionRule>,&UE::CoreUObject::Private::ConstructForTests<FRigOrConnectionRule>,&UE::CoreUObject::Private::Destruct<FRigOrConnectionRule>,&UE::CoreUObject::Private::Copy<FRigOrConnectionRule>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_URigHierarchyController_ImportBonesFromSkeletalMesh @ 14a2ca250

UFunction * __cdecl Z_Construct_UFunction_URigHierarchyController_ImportBonesFromSkeletalMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_ImportBonesFromSkeletalMesh_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_SetControlVisibility @ 14a2ca410

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SetControlVisibility(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SetControlVisibility_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a2ca450

void * __cdecl Z_Construct_UScriptStruct_FRigElementKeyMetadata_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigElementKeyMetadata,&UE::CoreUObject::Private::Construct<FRigElementKeyMetadata>,&UE::CoreUObject::Private::ConstructForTests<FRigElementKeyMetadata>,&UE::CoreUObject::Private::Destruct<FRigElementKeyMetadata>,&UE::CoreUObject::Private::Copy<FRigElementKeyMetadata>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIsCurve_SetBit @ 14a2ca490

void __cdecl
Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bIsCurve_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd) = 1;
  return;
}

// NewProp_bDrawLimits_SetBit @ 14a2ca4a0

void __cdecl
Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bDrawLimits_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewProp_bShapeVisible_SetBit @ 14a2ca5c0

void __cdecl
Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bShapeVisible_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 300) = 1;
  return;
}

// NewProp_bVisibility_SetBit @ 14a2ca5d0

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetControlVisibilityByIndex_Statics::NewProp_bVisibility_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// NewProp_bIsTransientControl_SetBit @ 14a2ca5e0

void __cdecl
Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bIsTransientControl_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x148) = 1;
  return;
}

// NewProp_bGroupWithParentControl_SetBit @ 14a2ca5f0

void __cdecl
Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bGroupWithParentControl_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x198) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_GetLocalIndex_ForBlueprint @ 14a2ca600

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetLocalIndex_ForBlueprint(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetLocalIndex_ForBlueprint_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bRestrictSpaceSwitching_SetBit @ 14a2ca640

void __cdecl
Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bRestrictSpaceSwitching_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x199) = 1;
  return;
}

// NewProp_bSelectCurves_SetBit @ 14a2ca650

void __cdecl
Z_Construct_UFunction_URigHierarchyController_ImportCurves_Statics::NewProp_bSelectCurves_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bSetupUndo_SetBit @ 14a2ca660

void __cdecl
Z_Construct_UFunction_URigHierarchyController_ImportCurves_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// NewProp_bPrintPythonCommand_SetBit @ 14a2ca680

void __cdecl
Z_Construct_UFunction_URigHierarchyController_ImportCurves_Statics::
NewProp_bPrintPythonCommand_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  return;
}

// NewProp_bUsePreferredRotationOrder_SetBit @ 14a2ca690

void __cdecl
Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bUsePreferredRotationOrder_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1b1) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_SetControlVisibilityByIndex @ 14a2ca6a0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SetControlVisibilityByIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SetControlVisibilityByIndex_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewStructOps @ 14a2ca6f0

void * __cdecl Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x220;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigControlSettings,&UE::CoreUObject::Private::Construct<FRigControlSettings>,&UE::CoreUObject::Private::ConstructForTests<FRigControlSettings>,&UE::CoreUObject::Private::Destruct<FRigControlSettings>,&UE::CoreUObject::Private::Copy<FRigControlSettings>,&UE::CoreUObject::Private::GetStructTypeHash<FRigControlSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bInitial_SetBit @ 14a2ca740

void __cdecl
Z_Construct_UFunction_URigHierarchy_GetLocalTransform_Statics::NewProp_bInitial_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewProp_bSetupUndo_SetBit @ 14a2ca750

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetCurveValue_Statics::NewProp_bSetupUndo_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_GetLocalTransform @ 14a2ca7f0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetLocalTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetLocalTransform_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchyController_ImportCurves @ 14a2ca830

UFunction * __cdecl Z_Construct_UFunction_URigHierarchyController_ImportCurves(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_ImportCurves_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_SetCurveValue @ 14a2ca8b0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SetCurveValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SetCurveValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a2ca8f0

void * __cdecl Z_Construct_UScriptStruct_FRigTypeConnectionRule_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigTypeConnectionRule,&UE::CoreUObject::Private::Construct<FRigTypeConnectionRule>,&UE::CoreUObject::Private::ConstructForTests<FRigTypeConnectionRule>,&UE::CoreUObject::Private::Destruct<FRigTypeConnectionRule>,&UE::CoreUObject::Private::Copy<FRigTypeConnectionRule>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bInitial_SetBit @ 14a2ca970

void __cdecl
Z_Construct_UFunction_URigHierarchy_GetLocalTransformByIndex_Statics::NewProp_bInitial_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// NewStructOps @ 14a2ca980

void * __cdecl Z_Construct_UScriptStruct_FRigElementKeyArrayMetadata_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigElementKeyArrayMetadata,&UE::CoreUObject::Private::Construct<FRigElementKeyArrayMetadata>,&UE::CoreUObject::Private::ConstructForTests<FRigElementKeyArrayMetadata>,&UE::CoreUObject::Private::Destruct<FRigElementKeyArrayMetadata>,&UE::CoreUObject::Private::Copy<FRigElementKeyArrayMetadata>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bSetupUndo_SetBit @ 14a2caa20

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetCurveValueByIndex_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_bSelectCurves_SetBit @ 14a2caa30

void __cdecl
Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromSkeletalMesh_Statics::
NewProp_bSelectCurves_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bSetupUndo_SetBit @ 14a2caa40

void __cdecl
Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromSkeletalMesh_Statics::
NewProp_bSetupUndo_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// NewProp_bPrintPythonCommand_SetBit @ 14a2caa50

void __cdecl
Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromSkeletalMesh_Statics::
NewProp_bPrintPythonCommand_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_GetLocalTransformByIndex @ 14a2caa60

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetLocalTransformByIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetLocalTransformByIndex_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchy_SetCurveValueByIndex @ 14a2caae0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SetCurveValueByIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SetCurveValueByIndex_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromSkeletalMesh @ 14a2cab60

UFunction * __cdecl Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromSkeletalMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromSkeletalMesh_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a2caba0

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetFloatArrayMetadata_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UFunction_URigHierarchy_GetMetadataNames @ 14a2cac30

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetMetadataNames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetMetadataNames_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a2cad30

void * __cdecl Z_Construct_UScriptStruct_FRigTagConnectionRule_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigTagConnectionRule,&UE::CoreUObject::Private::Construct<FRigTagConnectionRule>,&UE::CoreUObject::Private::ConstructForTests<FRigTagConnectionRule>,&UE::CoreUObject::Private::Destruct<FRigTagConnectionRule>,&UE::CoreUObject::Private::Copy<FRigTagConnectionRule>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_URigHierarchy_SetFloatArrayMetadata @ 14a2cad70

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_SetFloatArrayMetadata(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_SetFloatArrayMetadata_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bReplaceExistingElements_SetBit @ 14a2cadb0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_ImportFromText_Statics::
NewProp_bReplaceExistingElements_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bSelectNewElements_SetBit @ 14a2cadc0

void __cdecl
Z_Construct_UFunction_URigHierarchyController_ImportFromText_Statics::
NewProp_bSelectNewElements_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// NewProp_bSetupUndo_SetBit @ 14a2cae50

void __cdecl
Z_Construct_UFunction_URigHierarchyController_ImportFromText_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  return;
}

// NewProp_bPrintPythonCommands_SetBit @ 14a2cae60

void __cdecl
Z_Construct_UFunction_URigHierarchyController_ImportFromText_Statics::
NewProp_bPrintPythonCommands_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x13) = 1;
  return;
}

// NewStructOps @ 14a2caeb0

void * __cdecl Z_Construct_UScriptStruct_FRigControlElement_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x590;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigControlElement,&UE::CoreUObject::Private::Construct<FRigControlElement>,&UE::CoreUObject::Private::ConstructForTests<FRigControlElement>,&UE::CoreUObject::Private::Destruct<FRigControlElement>,&UE::CoreUObject::Private::Copy<FRigControlElement>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_URigHierarchy_GetMetadataType @ 14a2caef0

UFunction * __cdecl Z_Construct_UFunction_URigHierarchy_GetMetadataType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URigHierarchy_GetMetadataType_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a2caf30

void __cdecl
Z_Construct_UFunction_URigHierarchy_SetFloatMetadata_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// operator<<<TTuple<FRigElementKey,FRigElementKey>,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>,FDefaultSetAllocator> @ 14a2cb2f0

FArchive * __cdecl
operator<<<TTuple<FRigElementKey,FRigElementKey>,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FRigElementKey,FRigElementKey>,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  byte *pbVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<FRigElementKey,FRigElementKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  uVar11 = 1;
  uVar7 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar7) {
    uVar8 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((int)uVar7 < 1) {
    return param_1;
  }
  if ((int)uVar11 < 1) {
    return param_1;
  }
  *piVar1 = uVar11;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = uVar11;
  if (uVar11 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_14a2d640e;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_14a2d640e:
  uVar13 = (ulonglong)uVar11;
  uVar8 = uVar10;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar5 = uVar8 & (longlong)(int)uVar11 - 1U;
    uVar8 = uVar8 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar5 * 4) = 0xffffffff;
    uVar13 = uVar13 - 1;
  } while (uVar13 != 0);
  if (*piVar1 != 0) {
    uVar7 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar14 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)TStack_50.Array;
      }
      uVar11 = *puVar14;
      uVar8 = uVar10;
      while (uVar11 == 0) {
        iVar9 = (int)uVar10;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        uStack_78 = iVar9 + 1;
        uVar10 = (ulonglong)uStack_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_14a2d64eb;
        uVar11 = puVar14[(longlong)iVar9 + 1];
      }
      uStack_74 = -uVar11 & uVar11;
      uVar10 = (ulonglong)uStack_74 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar10 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_14a2d64eb:
        uVar10 = (ulonglong)uVar7;
        uStack_64 = uVar7;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar10 < (int)uVar7) {
      do {
        pbVar12 = (byte *)((longlong)(int)uVar10 * 0x20 + *(longlong *)&param_2->Elements);
        uVar3 = *(undefined8 *)(pbVar12 + 4);
        uVar7 = GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar7 = (uint)*pbVar12 + (uVar7 + (int)((ulonglong)uVar3 >> 0x20)) * 10 & *piVar1 - 1U;
        *(uint *)(pbVar12 + 0x1c) = uVar7;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(pbVar12 + 0x18) = *(undefined4 *)((longlong)FVar6 + uVar8 * 4);
        *(int *)((longlong)FVar6 + uVar8 * 4) = (int)uVar10;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar10 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<TTuple<FRigHierarchyKey,FRigHierarchyKey>,TDefaultMapHashableKeyFuncs<FRigHierarchyKey,FRigHierarchyKey,0>,FDefaultSetAllocator> @ 14a2cb300

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FArchive * __cdecl
operator<<<TTuple<FRigHierarchyKey,FRigHierarchyKey>,TDefaultMapHashableKeyFuncs<FRigHierarchyKey,FRigHierarchyKey,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FRigHierarchyKey,FRigHierarchyKey>,TDefaultMapHashableKeyFuncs<FRigHierarchyKey,FRigHierarchyKey,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  ForElementType<FSetElementId> FVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  byte *pbVar12;
  ulonglong uVar13;
  uint *puVar14;
  int iStack_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  operator<<<TSparseSetElement<TTuple<FRigHierarchyKey,FRigHierarchyKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar8 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  uVar11 = 1;
  if (3 < uVar8) {
    uVar9 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar10 & 0x1f);
  }
  if ((int)uVar8 < 1) {
    return param_1;
  }
  if ((int)uVar11 < 1) {
    return param_1;
  }
  *piVar1 = uVar11;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar8 = uVar11;
  if (uVar11 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_14a2d66ca;
    uVar8 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar8,4);
LAB_14a2d66ca:
  uVar13 = (ulonglong)uVar11;
  uVar9 = 0;
  do {
    FVar3 = (param_2->Hash).SecondaryData;
    FVar7 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar3 != (ForElementType<FSetElementId>)0x0) {
      FVar7 = FVar3;
    }
    uVar5 = uVar9 & (longlong)(int)uVar11 - 1U;
    uVar9 = uVar9 + 1;
    *(undefined4 *)((longlong)FVar7 + uVar5 * 4) = 0xffffffff;
    uVar13 = uVar13 - 1;
  } while (uVar13 != 0);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(param_2->Elements).field_0x28;
    TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    iVar6 = 0;
    uStack_64 = 1;
    iStack_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar14 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)TStack_40.Array;
      }
      uVar8 = *puVar14;
      if (uVar8 == 0) {
        iStack_50 = 0;
        do {
          iStack_50 = iStack_50 + 0x20;
          lVar10 = (longlong)iVar6;
          iVar6 = iVar6 + 1;
          iStack_68 = iVar6;
          if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar6) goto LAB_14a2d67a8;
          uVar8 = puVar14[lVar10 + 1];
        } while (uVar8 == 0);
      }
      uStack_64 = ~(uVar8 - 1) & uVar8;
      uVar9 = (ulonglong)uStack_64 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iStack_54 = (int)lVar10 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14a2d67a8:
        iStack_54 = iVar2;
      }
    }
    TStack_40._padding_ = CONCAT44(uStack_64,iStack_68);
    TStack_40.UnvisitedBitMask = 0xffffffff;
    TStack_40.CurrentBitIndex = iStack_54;
    TStack_40._28_4_ = uStack_4c;
    TStack_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = TStack_40.CurrentBitIndex;
        pbVar12 = (byte *)((longlong)TStack_40.CurrentBitIndex * 0x58 +
                          *(longlong *)&param_2->Elements);
        if (pbVar12[0xc] == 0) {
          if (pbVar12[0x24] == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = GetTypeHash((FRigComponentKey *)(pbVar12 + 0x10));
          }
        }
        else {
          uVar4 = *(undefined8 *)(pbVar12 + 4);
          uVar8 = GetTypeHash((FNameEntryId)(uint)uVar4);
          uVar8 = (uint)*pbVar12 + (uVar8 + (int)((ulonglong)uVar4 >> 0x20)) * 10;
        }
        uVar8 = *piVar1 - 1U & uVar8;
        *(uint *)(pbVar12 + 0x54) = uVar8;
        FVar3 = (param_2->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar9 = (longlong)*piVar1 - 1U & (longlong)(int)uVar8;
        *(undefined4 *)(pbVar12 + 0x50) = *(undefined4 *)((longlong)FVar7 + uVar9 * 4);
        *(int *)((longlong)FVar7 + uVar9 * 4) = iVar2;
        TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
      } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<FLinearColor,TSizedDefaultAllocator<32>_> @ 14a2cb310

FArchive * __cdecl
operator<<<FLinearColor,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 4);
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
                (0x10,4,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x100001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar11 = 0;
          uVar9 = auStackX_8[0];
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          while( true ) {
            uVar7 = 0;
            if ((int)uVar11 < (int)uVar9) {
              uVar7 = ~uVar11 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) break;
            operator<<(param_1,(FLinearColor *)
                               ((param_2->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x10));
            uVar11 = uVar11 + 1;
            uVar9 = param_2->ArrayNum;
            if (param_2->ArrayNum <= (int)uVar11) {
              return param_1;
            }
          }
          pcVar4 = (code *)swi(3);
          pFVar8 = (FArchive *)(*pcVar4)();
          return pFVar8;
        }
        TArray<FLinearColor,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar6 = param_2->ArrayNum;
          if (iVar6 == *piVar1) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x410,&param_2->AllocatorInstance,piVar1);
          }
          pFVar3 = (param_2->AllocatorInstance).Data;
          param_2->ArrayNum = iVar6 + 1;
          operator<<(param_1,(FLinearColor *)(pFVar3 + (longlong)iVar6 * 0x10));
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)auStackX_8[0]);
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

// operator<<<FRigControlLimitEnabled,TSizedDefaultAllocator<32>_> @ 14a2cb320

FArchive * __cdecl
operator<<<FRigControlLimitEnabled,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FRigControlLimitEnabled,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
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
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 2);
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
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,1,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x800001)) {
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
              pFVar2 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 2;
              operator<<(param_1,(bool *)pFVar2);
              operator<<(param_1,(bool *)(pFVar2 + 1));
              uVar9 = param_2->ArrayNum;
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)uVar9);
          }
        }
        else {
          TArray<FRigControlLimitEnabled,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x102,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pFVar2 = (param_2->AllocatorInstance).Data + (longlong)iVar6 * 2;
              DefaultConstructItems<FRigControlLimitEnabled,int>(pFVar2,1);
              operator<<(param_1,(bool *)pFVar2);
              operator<<(param_1,(bool *)(pFVar2 + 1));
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

// operator<<<FRigElementKeyWithLabel,TSizedDefaultAllocator<32>_> @ 14a2cb330

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FArchive * __cdecl
operator<<<FRigElementKeyWithLabel,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FRigElementKeyWithLabel,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FRigElementKey *pFVar2;
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
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x14);
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
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0xccccd)) {
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
              if ((uVar7 == 0) &&
                 (bVar5 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                pFVar8 = (FArchive *)(*pcVar4)();
                return pFVar8;
              }
              pFVar2 = (FRigElementKey *)
                       ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x14);
              operator<<(param_1,pFVar2);
              (**(code **)(*(longlong *)param_1 + 0x178))(param_1,pFVar2 + 1);
              uVar10 = uVar10 + 1;
              uVar9 = param_2->ArrayNum;
            } while ((int)uVar10 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FRigElementKeyWithLabel,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x414,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pFVar2 = (FRigElementKey *)
                       ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x14);
              DefaultConstructItems<FRigElementKeyWithLabel,int>(pFVar2,1);
              operator<<(param_1,pFVar2);
              (**(code **)(*(longlong *)param_1 + 0x178))(param_1,pFVar2 + 1);
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

// operator<<<FRigHierarchyKey,TSizedDefaultAllocator<32>_> @ 14a2cb340

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FArchive * __cdecl
operator<<<FRigHierarchyKey,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FRigHierarchyKey,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FRigHierarchyKey *this;
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
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x28);
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
                (0x28,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x66667)) {
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
              FRigHierarchyKey::Serialize
                        ((FRigHierarchyKey *)
                         ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x28),param_1);
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FRigHierarchyKey,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x428,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              this = (FRigHierarchyKey *)
                     ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x28);
              DefaultConstructItems<FRigHierarchyKey,int>(this,1);
              FRigHierarchyKey::Serialize(this,param_1);
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

// operator<<<TSparseSetElement<TTuple<FRigElementKey,FRigElementKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14a2cb350

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<FRigElementKey,FRigElementKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<FRigElementKey,FRigElementKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  FRigElementKey *pFVar9;
  uint uVar10;
  FRigElementKey *pFVar11;
  uint *puVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<FRigElementKey,FRigElementKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 << 5,(longlong)*(int *)&param_2->field_0xc << 5);
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
      puVar12 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar12 = local_78.Pointer;
      }
      uVar10 = *puVar12;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar10 == 0) {
        lVar8 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_14a2cb65c;
        uVar10 = puVar12[lVar8 + 1];
      }
      local_78._4_4_ = -uVar10 & uVar10;
      uVar3 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar8 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar8;
      if (iVar6 < iStack_64) {
LAB_14a2cb65c:
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
        pFVar9 = (FRigElementKey *)
                 ((longlong)local_50.CurrentBitIndex * 0x20 + *(longlong *)local_58);
        operator<<(param_1,pFVar9);
        operator<<(param_1,pFVar9 + 1);
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
    uVar10 = local_res8[0];
    if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != local_res8[0]) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,4,local_res8[0],(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar10 = uVar10 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar10) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar7 = 0x80;
      if (0x80 < (int)uVar10) {
        uVar7 = uVar10;
      }
      *(uint *)&param_2->field_0x2c = uVar7;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    pFVar9 = (FRigElementKey *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x20,4,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar4 = *(int *)((longlong)iVar6 * 0x20 + 4 + *(longlong *)param_2);
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          *(int *)&param_2->field_0x30 = iVar4;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)((longlong)iVar4 * 0x20 + *(longlong *)param_2) = 0xffffffff;
          }
        }
        TSparseArrayBase<32,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<32,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        pFVar11 = (FRigElementKey *)0x0;
        if (local_78.Pointer != (FRigElementKey *)0x0) {
          *(ERigElementType *)local_78.Pointer = None;
          ((FName *)((longlong)local_78.Pointer + 4))->ComparisonIndex = 0;
          ((FName *)((longlong)local_78.Pointer + 4))->Number = 0;
          ((FRigElementKey *)((longlong)local_78.Pointer + 0xc))->Type = None;
          (((FRigElementKey *)((longlong)local_78.Pointer + 0xc))->Name).ComparisonIndex = 0;
          (((FRigElementKey *)((longlong)local_78.Pointer + 0xc))->Name).Number = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x18) = 0xffffffff;
          pFVar11 = local_78.Pointer;
        }
        operator<<(param_1,pFVar11);
        operator<<(param_1,pFVar11 + 1);
        uVar10 = (int)pFVar9 + 1;
        pFVar9 = (FRigElementKey *)(ulonglong)uVar10;
      } while ((int)uVar10 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<TSparseSetElement<TTuple<FRigHierarchyKey,FRigHierarchyKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14a2cb6e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<FRigHierarchyKey,FRigHierarchyKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<FRigHierarchyKey,FRigHierarchyKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  FRigHierarchyKey *pFVar9;
  uint uVar10;
  FRigHierarchyKey *this;
  uint *puVar11;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<FRigHierarchyKey,FRigHierarchyKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 * 0x58,(longlong)*(int *)&param_2->field_0xc * 0x58);
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
      puVar11 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar11 = local_78.Pointer;
      }
      uVar10 = *puVar11;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar10 == 0) {
        lVar8 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_14a2cb9dd;
        uVar10 = puVar11[lVar8 + 1];
      }
      local_78._4_4_ = -uVar10 & uVar10;
      uVar3 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar8 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar8;
      if (iVar6 < iStack_64) {
LAB_14a2cb9dd:
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
        pFVar9 = (FRigHierarchyKey *)
                 ((longlong)local_50.CurrentBitIndex * 0x58 + *(longlong *)local_58);
        FRigHierarchyKey::Serialize(pFVar9,param_1);
        FRigHierarchyKey::Serialize(pFVar9 + 1,param_1);
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
    uVar10 = local_res8[0];
    if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != local_res8[0]) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,4,local_res8[0],(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar10 = uVar10 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar10) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar7 = 0x80;
      if (0x80 < (int)uVar10) {
        uVar7 = uVar10;
      }
      *(uint *)&param_2->field_0x2c = uVar7;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    pFVar9 = (FRigHierarchyKey *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x58,4,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          iVar4 = *(int *)((longlong)iVar6 * 0x58 + 4 + *(longlong *)param_2);
          *(int *)&param_2->field_0x30 = iVar4;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)((longlong)iVar4 * 0x58 + *(longlong *)param_2) = 0xffffffff;
          }
        }
        TSparseArrayBase<88,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<88,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        this = (FRigHierarchyKey *)0x0;
        if (local_78.Pointer != (FRigHierarchyKey *)0x0) {
          (local_78.Pointer)->bIsSet = false;
          ((TOptional<FRigComponentKey> *)((longlong)local_78.Pointer + 0x10))->bIsSet = false;
          (((FRigHierarchyKey *)((longlong)local_78.Pointer + 0x28))->Element).bIsSet = false;
          (((FRigHierarchyKey *)((longlong)local_78.Pointer + 0x28))->Component).bIsSet = false;
          *(undefined4 *)
           &(((FRigHierarchyKey *)((longlong)local_78.Pointer + 0x50))->Element).TypedValue =
               0xffffffff;
          this = local_78.Pointer;
        }
        FRigHierarchyKey::Serialize(this,param_1);
        FRigHierarchyKey::Serialize(this + 1,param_1);
        uVar10 = (int)pFVar9 + 1;
        pFVar9 = (FRigHierarchyKey *)(ulonglong)uVar10;
      } while ((int)uVar10 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<enum_ERigControlTransformChannel,TSizedDefaultAllocator<32>_> @ 14a2cba70

FArchive * __cdecl
operator<<<enum_ERigControlTransformChannel,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<ERigControlTransformChannel,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FArchive *pFVar5;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum,(longlong)*piVar1);
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  else {
    auStackX_8[0] = 0;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStackX_8,4);
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
                (1,1,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x1000001)) {
        param_2->ArrayNum = auStackX_8[0];
        if ((param_1->field_0x28 & 1) != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,auStackX_8[0],*piVar1,&param_2->AllocatorInstance,auStackX_8[0],piVar1);
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,(param_2->AllocatorInstance).Data,(longlong)param_2->ArrayNum);
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FArchive *)(*pcVar3)();
        return pFVar5;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// Cast<UControlRig,UObject> @ 14a2cca30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UControlRig * __cdecl Cast<UControlRig,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_UControlRig_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      return (UControlRig *)param_1;
    }
  }
  return (UControlRig *)0x0;
}

// CompareItems<FRigControlLimitEnabled,int> @ 14a2cca80

bool __cdecl
CompareItems<FRigControlLimitEnabled,int>
          (FRigControlLimitEnabled *param_1,FRigControlLimitEnabled *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      if (((bool)*(char *)(lVar1 + (longlong)param_2) != param_2->bMinimum) ||
         ((bool)*(char *)(lVar1 + 1 + (longlong)param_2) != param_2->bMaximum)) {
        return false;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CompareItems<FRigElementKey,int> @ 14a2ccab0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __cdecl
CompareItems<FRigElementKey,int>(FRigElementKey *param_1,FRigElementKey *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      if ((*(FName *)(lVar1 + 4 + (longlong)param_2) != param_2->Name) ||
         (*(ERigElementType *)(lVar1 + (longlong)param_2) != param_2->Type)) {
        return false;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CompareItems<FRigElementKeyWithLabel,int> @ 14a2ccaf0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __cdecl
CompareItems<FRigElementKeyWithLabel,int>
          (FRigElementKeyWithLabel *param_1,FRigElementKeyWithLabel *param_2,int param_3)

{
  FName *pFVar1;
  FName *pFVar2;
  
  if (param_3 != 0) {
    pFVar2 = &param_2->Label;
    pFVar1 = &param_1->Label;
    do {
      if (((pFVar2[-1] != pFVar1[-1]) ||
          (*(char *)((longlong)param_2 + (-0xc - (longlong)param_1) + (longlong)pFVar1) !=
           (char)pFVar1[-2].Number)) || (*pFVar2 != *pFVar1)) {
        return false;
      }
      pFVar1 = (FName *)&pFVar1[2].Number;
      pFVar2 = (FName *)&pFVar2[2].Number;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructItems<TTuple<FRigHierarchyKey,FRigHierarchyKey>,TTuple<FRigHierarchyKey,FRigHierarchyKey>,int> @ 14a2ccb40

void __cdecl
ConstructItems<TTuple<FRigHierarchyKey,FRigHierarchyKey>,TTuple<FRigHierarchyKey,FRigHierarchyKey>,int>
          (void *param_1,TTuple<FRigHierarchyKey,FRigHierarchyKey> *param_2,int param_3)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (param_3 != 0) {
    pcVar3 = (char *)((longlong)param_1 + 0x24);
    pcVar4 = &param_2->field_0x34;
    do {
      pcVar3[-0x18] = '\0';
      cVar1 = pcVar4[-0x28];
      pcVar3[-0x18] = cVar1;
      if (cVar1 != '\0') {
        *(undefined8 *)(pcVar4 + (longlong)param_1 + (-0x34 - (longlong)param_2)) =
             *(undefined8 *)(pcVar4 + -0x34);
        *(undefined4 *)(pcVar4 + (longlong)param_1 + (-0x2c - (longlong)param_2)) =
             *(undefined4 *)(pcVar4 + -0x2c);
      }
      *pcVar3 = '\0';
      cVar1 = pcVar4[-0x10];
      *pcVar3 = cVar1;
      if (cVar1 != '\0') {
        uVar2 = *(undefined8 *)(pcVar4 + -0x1c);
        *(undefined8 *)(pcVar3 + -0x14) = *(undefined8 *)(pcVar4 + -0x24);
        *(undefined8 *)(pcVar3 + -0xc) = uVar2;
        *(undefined4 *)(pcVar3 + -4) = *(undefined4 *)(pcVar4 + -0x14);
      }
      pcVar3[0x10] = '\0';
      cVar1 = *pcVar4;
      pcVar3[0x10] = cVar1;
      if (cVar1 != '\0') {
        *(undefined8 *)(pcVar3 + 4) = *(undefined8 *)(pcVar4 + -0xc);
        *(undefined4 *)(pcVar3 + 0xc) = *(undefined4 *)(pcVar4 + -4);
      }
      pcVar3[0x28] = '\0';
      cVar1 = pcVar4[0x18];
      pcVar3[0x28] = cVar1;
      if (cVar1 != '\0') {
        uVar2 = *(undefined8 *)(pcVar4 + 0xc);
        *(undefined8 *)(pcVar3 + 0x14) = *(undefined8 *)(pcVar4 + 4);
        *(undefined8 *)(pcVar3 + 0x1c) = uVar2;
        *(undefined4 *)(pcVar3 + 0x24) = *(undefined4 *)(pcVar4 + 0x14);
      }
      pcVar3 = pcVar3 + 0x50;
      pcVar4 = pcVar4 + 0x50;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FConstraintNodeData,FConstraintNodeData,int> @ 14a2ccc00

void __cdecl
ConstructItems<FConstraintNodeData,FConstraintNodeData,int>
          (void *param_1,FConstraintNodeData *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  undefined8 *puVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  undefined8 uVar4;
  double dVar5;
  FConstraintOffset *pFVar6;
  double *pdVar7;
  
  if (param_3 != 0) {
    pFVar6 = &param_2->ConstraintOffset;
    pdVar7 = (double *)((longlong)param_1 + 0x60);
    do {
      uVar4 = *(undefined8 *)((longlong)(pFVar6 + -1) + 0x68);
      pFVar1 = (ForAnyElementType *)(pdVar7 + 0x19);
      puVar2 = (undefined8 *)((longlong)param_1 + (-0x60 - (longlong)param_2) + (longlong)pFVar6);
      *puVar2 = *(undefined8 *)((longlong)(pFVar6 + -1) + 0x60);
      puVar2[1] = uVar4;
      uVar4 = *(undefined8 *)((longlong)(pFVar6 + -1) + 0x78);
      puVar2 = (undefined8 *)((longlong)param_1 + (-0x50 - (longlong)param_2) + (longlong)pFVar6);
      *puVar2 = *(undefined8 *)((longlong)(pFVar6 + -1) + 0x70);
      puVar2[1] = uVar4;
      uVar4 = *(undefined8 *)((longlong)(pFVar6 + -1) + 0x88);
      puVar2 = (undefined8 *)((longlong)param_1 + (-0x40 - (longlong)param_2) + (longlong)pFVar6);
      *puVar2 = *(undefined8 *)((longlong)(pFVar6 + -1) + 0x80);
      puVar2[1] = uVar4;
      uVar4 = *(undefined8 *)((longlong)(pFVar6 + -1) + 0x98);
      puVar2 = (undefined8 *)((longlong)param_1 + (-0x30 - (longlong)param_2) + (longlong)pFVar6);
      *puVar2 = *(undefined8 *)((longlong)(pFVar6 + -1) + 0x90);
      puVar2[1] = uVar4;
      uVar4 = *(undefined8 *)((longlong)(pFVar6 + -1) + 0xa8);
      puVar2 = (undefined8 *)((longlong)param_1 + (-0x20 - (longlong)param_2) + (longlong)pFVar6);
      *puVar2 = *(undefined8 *)((longlong)(pFVar6 + -1) + 0xa0);
      puVar2[1] = uVar4;
      uVar4 = *(undefined8 *)((longlong)(pFVar6 + -1) + 0xb8);
      puVar2 = (undefined8 *)((longlong)param_1 + (-0x10 - (longlong)param_2) + (longlong)pFVar6);
      *puVar2 = *(undefined8 *)((longlong)(pFVar6 + -1) + 0xb0);
      puVar2[1] = uVar4;
      dVar5 = (pFVar6->Translation).field0_0x0._s_0.Y;
      *pdVar7 = (pFVar6->Translation).field0_0x0._s_0.X;
      pdVar7[1] = dVar5;
      dVar5 = (double)pFVar6->_padding_;
      pdVar7[2] = (pFVar6->Translation).field0_0x0._s_0.Z;
      pdVar7[3] = dVar5;
      dVar5 = (pFVar6->Rotation).Y;
      pdVar7[4] = (pFVar6->Rotation).X;
      pdVar7[5] = dVar5;
      dVar5 = (pFVar6->Rotation).W;
      pdVar7[6] = (pFVar6->Rotation).Z;
      pdVar7[7] = dVar5;
      dVar5 = (pFVar6->Scale).field0_0x0._s_0.Y;
      pdVar7[8] = (pFVar6->Scale).field0_0x0._s_0.X;
      pdVar7[9] = dVar5;
      dVar5 = (double)pFVar6->_padding_;
      pdVar7[10] = (pFVar6->Scale).field0_0x0._s_0.Z;
      pdVar7[0xb] = dVar5;
      dVar5 = (pFVar6->Parent).Rotation.XY.m128d_f64[1];
      pdVar7[0xc] = (pFVar6->Parent).Rotation.XY.m128d_f64[0];
      pdVar7[0xd] = dVar5;
      dVar5 = (pFVar6->Parent).Rotation.ZW.m128d_f64[1];
      pdVar7[0xe] = (pFVar6->Parent).Rotation.ZW.m128d_f64[0];
      pdVar7[0xf] = dVar5;
      dVar5 = (pFVar6->Parent).Translation.XY.m128d_f64[1];
      pdVar7[0x10] = (pFVar6->Parent).Translation.XY.m128d_f64[0];
      pdVar7[0x11] = dVar5;
      dVar5 = (pFVar6->Parent).Translation.ZW.m128d_f64[1];
      pdVar7[0x12] = (pFVar6->Parent).Translation.ZW.m128d_f64[0];
      pdVar7[0x13] = dVar5;
      dVar5 = (pFVar6->Parent).Scale3D.XY.m128d_f64[1];
      pdVar7[0x14] = (pFVar6->Parent).Scale3D.XY.m128d_f64[0];
      pdVar7[0x15] = dVar5;
      dVar5 = (pFVar6->Parent).Scale3D.ZW.m128d_f64[1];
      pdVar7[0x16] = (pFVar6->Parent).Scale3D.ZW.m128d_f64[0];
      pdVar7[0x17] = dVar5;
      *(FName *)(pdVar7 + 0x18) = *(FName *)(pFVar6 + 1);
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar3 = *(int *)((FName *)(pFVar6 + 1) + 2);
      _Src = (((TArray<FTransformConstraint,TSizedDefaultAllocator<32>_> *)
              ((FName *)(pFVar6 + 1) + 1))->AllocatorInstance).Data;
      *(int *)(pdVar7 + 0x1a) = iVar3;
      if (iVar3 == 0) {
        *(int *)((longlong)pdVar7 + 0xd4) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,4,iVar3,0,pFVar1,iVar3,(int *)((longlong)pdVar7 + 0xd4));
        memcpy(pFVar1->Data,_Src,(longlong)iVar3 * 0x28);
      }
      pdVar7 = pdVar7 + 0x28;
      pFVar6 = (FConstraintOffset *)((FName *)(pFVar6 + 1) + 0x10);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<UE::ControlRig::FElementSelectionData,UE::ControlRig::FElementSelectionData,int> @ 14a2ccdc0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
ConstructItems<UE::ControlRig::FElementSelectionData,UE::ControlRig::FElementSelectionData,int>
          (void *param_1,FElementSelectionData *param_2,int param_3)

{
  char *pcVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  bool *pbVar5;
  char *pcVar6;
  
  if (param_3 != 0) {
    pcVar6 = (char *)((longlong)param_1 + 0xc);
    pbVar5 = &(param_2->Key).Element.bIsSet;
    do {
      *pcVar6 = '\0';
      bVar2 = *pbVar5;
      *pcVar6 = bVar2;
      if (bVar2 != false) {
        *(undefined8 *)(pbVar5 + (longlong)param_1 + (-0xc - (longlong)param_2)) =
             *(undefined8 *)&((TOptional<FRigElementKey> *)(pbVar5 + -0xc))->TypedValue;
        *(uint *)(pbVar5 + (longlong)param_1 + (-4 - (longlong)param_2)) = *(uint *)(pbVar5 + -4);
      }
      pcVar6[0x18] = '\0';
      cVar3 = pbVar5[0x18];
      pcVar6[0x18] = cVar3;
      if (cVar3 != '\0') {
        uVar4 = *(undefined8 *)(pbVar5 + 0xc);
        *(undefined8 *)(pcVar6 + 4) = *(undefined8 *)(pbVar5 + 4);
        *(undefined8 *)(pcVar6 + 0xc) = uVar4;
        *(undefined4 *)(pcVar6 + 0x14) = *(undefined4 *)(pbVar5 + 0x14);
      }
      pcVar1 = pbVar5 + 0x1c;
      pbVar5 = pbVar5 + 0x2c;
      pcVar6[0x1c] = *pcVar1;
      pcVar6 = pcVar6 + 0x2c;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FRigBone,FRigBone,int> @ 14a2cce40

void __cdecl ConstructItems<FRigBone,FRigBone,int>(void *param_1,FRigBone *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  undefined8 *puVar2;
  int iVar3;
  void *_Src;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (param_3 != 0) {
    puVar5 = (undefined8 *)&param_2->field_0x8;
    puVar6 = (undefined8 *)((longlong)param_1 + 8);
    do {
      *(undefined ***)((longlong)puVar5 + (longlong)param_1 + (-8 - (longlong)param_2)) =
           &___7FRigElement__6B_;
      pFVar1 = (ForAnyElementType *)(puVar6 + 0x29);
      *puVar6 = *puVar5;
      *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar5 + 1);
      *(undefined ***)((longlong)puVar5 + (longlong)param_1 + (-8 - (longlong)param_2)) =
           &___7FRigBone__6B_;
      puVar6[2] = puVar5[2];
      *(undefined4 *)(puVar6 + 3) = *(undefined4 *)(puVar5 + 3);
      uVar4 = puVar5[6];
      puVar6[5] = puVar5[5];
      puVar6[6] = uVar4;
      uVar4 = puVar5[8];
      puVar6[7] = puVar5[7];
      puVar6[8] = uVar4;
      uVar4 = puVar5[10];
      puVar6[9] = puVar5[9];
      puVar6[10] = uVar4;
      uVar4 = puVar5[0xc];
      puVar6[0xb] = puVar5[0xb];
      puVar6[0xc] = uVar4;
      uVar4 = puVar5[0xe];
      puVar6[0xd] = puVar5[0xd];
      puVar6[0xe] = uVar4;
      uVar4 = puVar5[0x10];
      puVar6[0xf] = puVar5[0xf];
      puVar6[0x10] = uVar4;
      uVar4 = puVar5[0x12];
      puVar6[0x11] = puVar5[0x11];
      puVar6[0x12] = uVar4;
      uVar4 = puVar5[0x14];
      puVar6[0x13] = puVar5[0x13];
      puVar6[0x14] = uVar4;
      uVar4 = puVar5[0x16];
      puVar6[0x15] = puVar5[0x15];
      puVar6[0x16] = uVar4;
      uVar4 = puVar5[0x18];
      puVar6[0x17] = puVar5[0x17];
      puVar6[0x18] = uVar4;
      uVar4 = puVar5[0x1a];
      puVar6[0x19] = puVar5[0x19];
      puVar6[0x1a] = uVar4;
      uVar4 = puVar5[0x1c];
      puVar6[0x1b] = puVar5[0x1b];
      puVar6[0x1c] = uVar4;
      uVar4 = puVar5[0x1e];
      puVar6[0x1d] = puVar5[0x1d];
      puVar6[0x1e] = uVar4;
      uVar4 = puVar5[0x20];
      puVar6[0x1f] = puVar5[0x1f];
      puVar6[0x20] = uVar4;
      uVar4 = puVar5[0x22];
      puVar6[0x21] = puVar5[0x21];
      puVar6[0x22] = uVar4;
      uVar4 = puVar5[0x24];
      puVar6[0x23] = puVar5[0x23];
      puVar6[0x24] = uVar4;
      uVar4 = puVar5[0x26];
      puVar6[0x25] = puVar5[0x25];
      puVar6[0x26] = uVar4;
      uVar4 = puVar5[0x28];
      puVar6[0x27] = puVar5[0x27];
      puVar6[0x28] = uVar4;
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar3 = *(int *)(puVar5 + 0x2a);
      _Src = (void *)puVar5[0x29];
      *(int *)(puVar6 + 0x2a) = iVar3;
      if (iVar3 == 0) {
        *(int *)((longlong)puVar6 + 0x154) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar3,0,pFVar1,iVar3,(int *)((longlong)puVar6 + 0x154));
        memcpy(pFVar1->Data,_Src,(longlong)iVar3 << 2);
      }
      puVar2 = puVar5 + 0x2b;
      puVar5 = puVar5 + 0x2e;
      *(undefined1 *)(puVar6 + 0x2b) = *(undefined1 *)puVar2;
      puVar6 = puVar6 + 0x2e;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FRigConnectorState,FRigConnectorState,int> @ 14a2cd050

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
ConstructItems<FRigConnectorState,FRigConnectorState,int>
          (void *param_1,FRigConnectorState *param_2,int param_3)

{
  undefined8 uVar1;
  FRigConnectorState *pFVar2;
  FRigConnectorSettings *this;
  FRigConnectorSettings *pFVar3;
  
  if (param_3 != 0) {
    this = (FRigConnectorSettings *)((longlong)param_1 + 0x18);
    pFVar2 = param_2;
    do {
      pFVar3 = &pFVar2->Settings;
      uVar1 = *(undefined8 *)((longlong)this + (longlong)param_2 + (-0x18 - (longlong)param_1));
      this[-1].Type = (char)uVar1;
      this[-1].bOptional = (bool)(char)((ulonglong)uVar1 >> 8);
      this[-1].bIsArray = (bool)(char)((ulonglong)uVar1 >> 0x10);
      this[-1].bPostConstruction = (bool)(char)((ulonglong)uVar1 >> 0x18);
      *(int *)&this[-1].field_0x14 = (int)((ulonglong)uVar1 >> 0x20);
      this[-1].Rules.AllocatorInstance.Data =
           *(FScriptContainerElement **)((longlong)(pFVar3 + -1) + 0x18);
      this[-1].Rules.ArrayNum = *(int *)((longlong)(pFVar3 + -1) + 0x20);
      FRigConnectorSettings::FRigConnectorSettings(this,pFVar3);
      pFVar2 = (FRigConnectorState *)(pFVar3 + 1);
      this = (FRigConnectorSettings *)&this[1].Rules;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FRigControl,FRigControl,int> @ 14a2cd0d0

void __cdecl
ConstructItems<FRigControl,FRigControl,int>(void *param_1,FRigControl *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      FRigControl::FRigControl((FRigControl *)(lVar1 + (longlong)param_2),param_2);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FRigCurve,FRigCurve,int> @ 14a2cd120

void __cdecl ConstructItems<FRigCurve,FRigCurve,int>(void *param_1,FRigCurve *param_2,int param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  
  if (param_3 != 0) {
    plVar1 = &param_2->_padding_;
    puVar2 = (undefined4 *)((longlong)param_1 + 0x10);
    do {
      *(undefined ***)((longlong)plVar1 + (longlong)param_1 + (-0x10 - (longlong)param_2)) =
           &___7FRigElement__6B_;
      *(longlong *)(puVar2 + -2) = plVar1[-1];
      *puVar2 = (int)*plVar1;
      *(undefined ***)((longlong)plVar1 + (longlong)param_1 + (-0x10 - (longlong)param_2)) =
           &___7FRigCurve__6B_;
      puVar2[2] = *(float *)(plVar1 + 1);
      param_3 = param_3 + -1;
      plVar1 = plVar1 + 4;
      puVar2 = puVar2 + 8;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FRigHierarchyCopyPasteContentPerElement,FRigHierarchyCopyPasteContentPerElement,int> @ 14a2cd180

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
ConstructItems<FRigHierarchyCopyPasteContentPerElement,FRigHierarchyCopyPasteContentPerElement,int>
          (void *param_1,FRigHierarchyCopyPasteContentPerElement *param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  FScriptContainerElement *_Src;
  int *piVar3;
  int *piVar4;
  
  if (param_3 != 0) {
    piVar3 = (int *)((longlong)param_1 + 0x38);
    piVar4 = &(param_2->ParentWeights).ArrayNum;
    do {
      *(undefined8 *)((longlong)piVar4 + (longlong)param_1 + (-0x38 - (longlong)param_2)) =
           *(undefined8 *)(piVar4 + -0xe);
      *(int *)((longlong)piVar4 + (longlong)param_1 + (-0x30 - (longlong)param_2)) = piVar4[-0xc];
      FString::FString((FString *)(piVar3 + -10),(FString *)(piVar4 + -10));
      piVar3[-6] = 0;
      piVar3[-5] = 0;
      iVar1 = piVar4[-4];
      pvVar2 = *(void **)(piVar4 + -6);
      piVar3[-4] = iVar1;
      if (iVar1 == 0) {
        piVar3[-3] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x14,4,iVar1,0,(ForAnyElementType *)(piVar3 + -6),iVar1,piVar3 + -3);
        memcpy(((ForAnyElementType *)(piVar3 + -6))->Data,pvVar2,(longlong)iVar1 * 0x14);
      }
      piVar3[-2] = 0;
      piVar3[-1] = 0;
      iVar1 = *piVar4;
      _Src = (((TArray<FRigElementWeight,TSizedDefaultAllocator<32>_> *)(piVar4 + -2))->
             AllocatorInstance).Data;
      *piVar3 = iVar1;
      if (iVar1 == 0) {
        piVar3[1] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,iVar1,0,(ForAnyElementType *)(piVar3 + -2),iVar1,piVar3 + 1);
        memcpy(((ForAnyElementType *)(piVar3 + -2))->Data,_Src,(longlong)iVar1 * 0xc);
      }
      piVar3[2] = 0;
      piVar3[3] = 0;
      iVar1 = piVar4[4];
      pvVar2 = *(void **)(piVar4 + 2);
      piVar3[4] = iVar1;
      if (iVar1 == 0) {
        piVar3[5] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,iVar1,0,(ForAnyElementType *)(piVar3 + 2),iVar1,piVar3 + 5);
        memcpy(((ForAnyElementType *)(piVar3 + 2))->Data,pvVar2,(longlong)iVar1 * 0x60);
      }
      piVar3[6] = 0;
      piVar3[7] = 0;
      iVar1 = piVar4[8];
      pvVar2 = *(void **)(piVar4 + 6);
      piVar3[8] = iVar1;
      if (iVar1 == 0) {
        piVar3[9] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar1,0,(ForAnyElementType *)(piVar3 + 6),iVar1,piVar3 + 9);
        memcpy(((ForAnyElementType *)(piVar3 + 6))->Data,pvVar2,(longlong)iVar1);
      }
      piVar3 = piVar3 + 0x18;
      piVar4 = piVar4 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FRigSpace,FRigSpace,int> @ 14a2cd370

void __cdecl ConstructItems<FRigSpace,FRigSpace,int>(void *param_1,FRigSpace *param_2,int param_3)

{
  double dVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  
  if (param_3 != 0) {
    plVar2 = &param_2->_padding_;
    puVar3 = (undefined4 *)((longlong)param_1 + 0x10);
    do {
      *(undefined ***)((longlong)param_1 + (-0x10 - (longlong)param_2) + (longlong)plVar2) =
           &___7FRigElement__6B_;
      *(longlong *)(puVar3 + -2) = plVar2[-1];
      *puVar3 = (int)*plVar2;
      *(undefined ***)((longlong)param_1 + (-0x100 - (longlong)param_2) + (longlong)(plVar2 + 0x1e))
           = &___7FRigSpace__6B_;
      *(ERigSpaceType *)(puVar3 + 2) = *(ERigSpaceType *)(plVar2 + 1);
      *(FName *)(puVar3 + 3) = *(FName *)((longlong)plVar2 + 0xc);
      puVar3[5] = *(int *)((longlong)plVar2 + 0x14);
      dVar1 = (double)plVar2[5];
      *(double *)(puVar3 + 8) = (((TTransform<double> *)(plVar2 + 4))->Rotation).XY.m128d_f64[0];
      *(double *)(puVar3 + 10) = dVar1;
      dVar1 = (double)plVar2[7];
      *(double *)(puVar3 + 0xc) = ((__m128d *)(plVar2 + 6))->m128d_f64[0];
      *(double *)(puVar3 + 0xe) = dVar1;
      dVar1 = (double)plVar2[9];
      *(double *)(puVar3 + 0x10) = (((VectorRegister4Double *)(plVar2 + 8))->XY).m128d_f64[0];
      *(double *)(puVar3 + 0x12) = dVar1;
      dVar1 = (double)plVar2[0xb];
      *(double *)(puVar3 + 0x14) = ((__m128d *)(plVar2 + 10))->m128d_f64[0];
      *(double *)(puVar3 + 0x16) = dVar1;
      dVar1 = (double)plVar2[0xd];
      *(double *)(puVar3 + 0x18) = (((VectorRegister4Double *)(plVar2 + 0xc))->XY).m128d_f64[0];
      *(double *)(puVar3 + 0x1a) = dVar1;
      dVar1 = (double)plVar2[0xf];
      *(double *)(puVar3 + 0x1c) = ((__m128d *)(plVar2 + 0xe))->m128d_f64[0];
      *(double *)(puVar3 + 0x1e) = dVar1;
      dVar1 = (double)plVar2[0x11];
      *(double *)(puVar3 + 0x20) =
           (((TTransform<double> *)(plVar2 + 0x10))->Rotation).XY.m128d_f64[0];
      *(double *)(puVar3 + 0x22) = dVar1;
      dVar1 = (double)plVar2[0x13];
      *(double *)(puVar3 + 0x24) = ((__m128d *)(plVar2 + 0x12))->m128d_f64[0];
      *(double *)(puVar3 + 0x26) = dVar1;
      dVar1 = (double)plVar2[0x15];
      *(double *)(puVar3 + 0x28) = (((VectorRegister4Double *)(plVar2 + 0x14))->XY).m128d_f64[0];
      *(double *)(puVar3 + 0x2a) = dVar1;
      dVar1 = (double)plVar2[0x17];
      *(double *)(puVar3 + 0x2c) = ((__m128d *)(plVar2 + 0x16))->m128d_f64[0];
      *(double *)(puVar3 + 0x2e) = dVar1;
      dVar1 = (double)plVar2[0x19];
      *(double *)(puVar3 + 0x30) = (((VectorRegister4Double *)(plVar2 + 0x18))->XY).m128d_f64[0];
      *(double *)(puVar3 + 0x32) = dVar1;
      dVar1 = (double)plVar2[0x1b];
      *(double *)(puVar3 + 0x34) = ((__m128d *)(plVar2 + 0x1a))->m128d_f64[0];
      *(double *)(puVar3 + 0x36) = dVar1;
      param_3 = param_3 + -1;
      plVar2 = plVar2 + 0x1e;
      puVar3 = puVar3 + 0x3c;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FRigControlLimitEnabled,int> @ 14a2ce260

void __cdecl DefaultConstructItems<FRigControlLimitEnabled,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined2 *)param_1 = 0;
    param_1 = (void *)((longlong)param_1 + 2);
  }
  return;
}

// DefaultConstructItems<FRigElementKeyWithLabel,int> @ 14a2ce290

void __cdecl DefaultConstructItems<FRigElementKeyWithLabel,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 8;
    do {
      *(undefined1 *)(lVar1 + -8) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      lVar1 = lVar1 + 0x14;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FRigElementParentConstraint,int> @ 14a2ce2c0

void __cdecl DefaultConstructItems<FRigElementParentConstraint,int>(void *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  __m128d _Var9;
  undefined4 *puVar10;
  
  if (param_2 != 0) {
    puVar10 = (undefined4 *)((longlong)param_1 + 0xc);
    do {
      puVar10[-1] = 0x3f800000;
      *puVar10 = 0x3f800000;
      puVar10[1] = 0x3f800000;
      puVar10[2] = 0x3f800000;
      puVar10[3] = 0x3f800000;
      *(undefined8 *)(puVar10 + 4) = 0x3f800000;
      *(undefined8 *)(puVar10 + -3) = 0;
      puVar10[6] = 0;
      fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
      fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
      auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      *(undefined1 (*) [16])(puVar10 + 9) = auVar3;
      auVar4._8_4_ = SUB84((double)fVar2,0);
      auVar4._0_8_ = (double)fVar1;
      auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
      *(undefined1 (*) [16])(puVar10 + 0xd) = auVar4;
      fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
      fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
      auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20)
      ;
      *(undefined1 (*) [16])(puVar10 + 0x11) = auVar5;
      auVar6._8_4_ = SUB84((double)fVar2,0);
      auVar6._0_8_ = (double)fVar1;
      auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
      *(undefined1 (*) [16])(puVar10 + 0x15) = auVar6;
      fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
      fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
      auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20)
      ;
      *(undefined1 (*) [16])(puVar10 + 0x19) = auVar7;
      auVar8._8_4_ = SUB84((double)fVar2,0);
      auVar8._0_8_ = (double)fVar1;
      auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
      *(undefined1 (*) [16])(puVar10 + 0x1d) = auVar8;
      *(double (*) [2])(puVar10 + 9) = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
      *(double (*) [2])(puVar10 + 0xd) =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
      *(double (*) [2])(puVar10 + 0x11) =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      *(double (*) [2])(puVar10 + 0x15) =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      *(double (*) [2])(puVar10 + 0x19) =
           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      _Var9 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
      *(undefined1 *)(puVar10 + 0x21) = 1;
      *(double (*) [2])(puVar10 + 0x1d) = _Var9.m128d_f64;
      param_2 = param_2 + -1;
      puVar10 = puVar10 + 0x28;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FRigHierarchyKey,int> @ 14a2ce3b0

void __cdecl DefaultConstructItems<FRigHierarchyKey,int>(void *param_1,int param_2)

{
  undefined1 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined1 *)((longlong)param_1 + 0x24);
    do {
      puVar1[-0x18] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 0x28;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FConstraintNodeData,int> @ 14a2ce420

void __cdecl DestructItems<FConstraintNodeData,int>(FConstraintNodeData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FTransformConstraint,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Constraints;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 0x14;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<URigHierarchy::FMetadataStorage,int> @ 14a2ce470

void __cdecl
DestructItems<URigHierarchy::FMetadataStorage,int>(FMetadataStorage *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->MetadataMap).field_0x40;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FRigBaseMetadata_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FRigBaseMetadata_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,FRigBaseMetadata_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      puVar1 = puVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRigBone,int> @ 14a2ce4d0

void __cdecl DestructItems<FRigBone,int>(FRigBone *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined ***)param_1 = &___7FRigBone__6B_;
    pFVar1 = (param_1->Dependents).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    *(undefined ***)param_1 = &___7FRigElement__6B_;
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FRigConnectorState,int> @ 14a2ce540

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl DestructItems<FRigConnectorState,int>(FRigConnectorState *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FRigConnectionRuleStash,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &(param_1->Settings).Rules;
    do {
      DestructItems<FRigConnectionRuleStash,int>
                ((FRigConnectionRuleStash *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (*(void **)((longlong)(pTVar2 + -2) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -2) + 8));
      }
      pTVar2 = pTVar2 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRigControl,int> @ 14a2ce5a0

void __cdecl DestructItems<FRigControl,int>(FRigControl *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1->_padding_ = (longlong)&___7FRigControl__6B_;
    pFVar1 = (param_1->Dependents).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1->_padding_ = (longlong)&___7FRigElement__6B_;
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FRigCurve,int> @ 14a2ce610

void __cdecl DestructItems<FRigCurve,int>(FRigCurve *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1->_padding_ = (longlong)&___7FRigElement__6B_;
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FRigHierarchyCopyPasteContentPerElement,int> @ 14a2ce640

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
DestructItems<FRigHierarchyCopyPasteContentPerElement,int>
          (FRigHierarchyCopyPasteContentPerElement *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Poses;
    do {
      pFVar1 = (((TArray<bool,TSizedDefaultAllocator<32>_> *)(pTVar2 + 1))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<FRigElementWeight,TSizedDefaultAllocator<32>_> *)(pTVar2 + -1))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<FRigElementKeyWithLabel,TSizedDefaultAllocator<32>_> *)(pTVar2 + -2))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FString *)(pTVar2 + -3))->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRigSpace,int> @ 14a2ce6c0

void __cdecl DestructItems<FRigSpace,int>(FRigSpace *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1->_padding_ = (longlong)&___7FRigElement__6B_;
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FRigTransformStackEntry,int> @ 14a2ce6f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
DestructItems<FRigTransformStackEntry,int>(FRigTransformStackEntry *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Callstack;
    do {
      DestructItems<FString,int>((FString *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 0xf;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRigUnit_AddBoneTransform,int> @ 14a2ce750

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
DestructItems<FRigUnit_AddBoneTransform,int>(FRigUnit_AddBoneTransform *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TArray<FRigBaseElement_*,TSizedDefaultAllocator<32>_>,int> @ 14a2ce780

void __cdecl
DestructItems<TArray<FRigBaseElement_*,TSizedDefaultAllocator<32>_>,int>
          (TArray<FRigBaseElement_*,TSizedDefaultAllocator<32>_> *param_1,int param_2)

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

// DestructItems<TSharedPtr<FRigElement,1>,int> @ 14a2ce7c0

void __cdecl
DestructItems<TSharedPtr<FRigElement,1>,int>(TSharedPtr<FRigElement,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// GetTypeHash<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 14a2d30a0

uint __cdecl
GetTypeHash<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<FRigElementKey> FVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  
  FVar3 = (param_1->AllocatorInstance).SecondaryData;
  piVar1 = &param_1->ArrayNum;
  iVar2 = *piVar1;
  uVar6 = 0;
  if (FVar3 != (ForElementType<FRigElementKey>)0x0) {
    param_1 = (TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
              FVar3;
  }
  FVar3 = (ForElementType<FRigElementKey>)((longlong)param_1 + (longlong)iVar2 * 0xc);
  while( true ) {
    if (*piVar1 != iVar2) {
      `TCheckedPointerIterator<FRigElementKey_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if ((ForElementType<FRigElementKey>)param_1 == FVar3) break;
    uVar4 = *(undefined8 *)((longlong)param_1 + 4);
    uVar5 = GetTypeHash((FNameEntryId)(uint)uVar4);
    uVar6 = uVar6 ^ *(byte *)param_1 + 0x9e3779b9 +
                    uVar6 * 0x40 + (uVar5 + (int)((ulonglong)uVar4 >> 0x20)) * 10 + (uVar6 >> 2);
    param_1 = (TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
              ((longlong)param_1 + 0xc);
  }
  return uVar6;
}

// HeapSortInternal<UScriptStruct_*,int,FIdentityFunctor,`FRigBaseComponent::GetAllComponentScriptStructs'::__l13::<lambda_1>_> @ 14a2d3150

void __cdecl
AlgoImpl::
HeapSortInternal<UScriptStruct_*,int,FIdentityFunctor,_FRigBaseComponent::GetAllComponentScriptStructs_::__l13::<lambda_1>_>
          (UScriptStruct **param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  UScriptStruct *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  FName local_38;
  FName local_30;
  FName local_28;
  FName local_20;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar6 = iVar4 * 2 + 1;
  iVar10 = iVar6;
  iVar7 = iVar4;
  do {
    while (param_2 <= iVar6) {
LAB_14a2d32a1:
      if (iVar7 == 0) {
        iVar6 = param_2 + -1;
        lVar9 = (longlong)iVar6;
        if (0 < iVar6) {
          do {
            iVar10 = 0;
            pUVar1 = *param_1;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = pUVar1;
            if (1 < iVar6) {
              do {
                iVar7 = iVar10 * 2;
                iVar4 = iVar7 + 1;
                if (iVar7 + 2 < iVar6) {
                  local_30 = (FName)param_1[(longlong)iVar7 + 2]->_padding_;
                  local_38 = (FName)param_1[iVar4]->_padding_;
                  iVar8 = ::FName::Compare(&local_30,&local_38);
                  if (iVar8 < 0) {
                    iVar4 = iVar7;
                  }
                  iVar4 = iVar4 + 1;
                }
                local_20 = (FName)param_1[iVar10]->_padding_;
                local_28 = (FName)param_1[iVar4]->_padding_;
                iVar7 = ::FName::Compare(&local_20,&local_28);
                if (-1 < iVar7) break;
                pUVar1 = param_1[iVar10];
                param_1[iVar10] = param_1[iVar4];
                param_1[iVar4] = pUVar1;
                iVar10 = iVar4;
              } while (iVar4 * 2 + 1 < iVar6);
            }
            iVar6 = iVar6 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar4 = iVar7 + -1;
      iVar6 = iVar10 + -2;
      iVar10 = iVar6;
      iVar7 = iVar4;
    }
    iVar6 = iVar4 * 2;
    iVar8 = iVar6 + 1;
    if (iVar6 + 2 < param_2) {
      local_50 = (FName)param_1[(longlong)iVar6 + 2]->_padding_;
      local_58 = (FName)param_1[iVar8]->_padding_;
      iVar5 = ::FName::Compare(&local_50,&local_58);
      if (iVar5 < 0) {
        iVar8 = iVar6;
      }
      iVar8 = iVar8 + 1;
    }
    local_40 = (FName)param_1[iVar4]->_padding_;
    local_48 = (FName)param_1[iVar8]->_padding_;
    iVar6 = ::FName::Compare(&local_40,&local_48);
    if (-1 < iVar6) goto LAB_14a2d32a1;
    pUVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar8];
    iVar6 = iVar8 * 2 + 1;
    param_1[iVar8] = pUVar1;
    iVar4 = iVar8;
  } while( true );
}

// InternalConstructor<UAdditiveControlRig> @ 14a2d3440

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl InternalConstructor<UAdditiveControlRig>(FObjectInitializer *param_1)

{
  UControlRig *this;
  
  this = (UControlRig *)param_1->Obj;
  if (this != (UControlRig *)0x0) {
    UControlRig::UControlRig(this,param_1);
    this->_padding_ = (longlong)&UAdditiveControlRig::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAdditiveControlRig::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UAdditiveControlRig::_vftable__for__INodeMappingProviderInterface__
    ;
    this->_padding_ = (longlong)&UAdditiveControlRig::_vftable__for__IRigHierarchyProvider__;
    this->_padding_ = (longlong)&UAdditiveControlRig::_vftable__for__IMeshDeformerProducer__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this->bCopyHierarchyBeforeConstruction = false;
    this->bResetInitialTransformsBeforeConstruction = false;
  }
  return;
}

// InternalConstructor<UFKControlRig> @ 14a2d34c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl InternalConstructor<UFKControlRig>(FObjectInitializer *param_1)

{
  UControlRig *this;
  
  this = (UControlRig *)param_1->Obj;
  if (this != (UControlRig *)0x0) {
    UControlRig::UControlRig(this,param_1);
    this->_padding_ = (longlong)&UFKControlRig::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UFKControlRig::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UFKControlRig::_vftable__for__INodeMappingProviderInterface__;
    this->_padding_ = (longlong)&UFKControlRig::_vftable__for__IRigHierarchyProvider__;
    this->_padding_ = (longlong)&UFKControlRig::_vftable__for__IMeshDeformerProducer__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this->bCopyHierarchyBeforeConstruction = false;
    this->bResetInitialTransformsBeforeConstruction = false;
    *(undefined2 *)&this[1]._padding_ = 0x101;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 1;
  }
  return;
}

// InternalConstructor<UModularRigRuleManager> @ 14a2d3580

void __cdecl InternalConstructor<UModularRigRuleManager>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UModularRigRuleManager__6B_;
    *(undefined8 *)(this + 1) = 0;
  }
  return;
}

// InternalConstructor<URigHierarchy> @ 14a2d35c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl InternalConstructor<URigHierarchy>(FObjectInitializer *param_1)

{
  URigHierarchy *this;
  bool bVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  
  this = (URigHierarchy *)param_1->Obj;
  if (this != (URigHierarchy *)0x0) {
    UObject::UObject((UObject *)this);
    pTVar3 = (TNode *)0x0;
    this->bEnableDirtyPropagation = true;
    this->TopologyVersion = 0;
    this->ParentWeightVersion = 0;
    this->_padding_ = (longlong)&___7URigHierarchy__6B_;
    *(undefined8 *)&this->ModifiedEvent = 0;
    *(undefined8 *)&(this->ModifiedEvent).field_0x8 = 0;
    *(undefined8 *)&(this->ModifiedEvent).field_0x10 = 0;
    *(undefined8 *)&(this->ModifiedEvent).field_0x18 = 2;
    *(undefined8 *)&this->ModifiedEventDynamic = 0;
    *(undefined8 *)&(this->ModifiedEventDynamic).field_0x8 = 0;
    *(undefined8 *)&(this->ModifiedEventDynamic).field_0x10 = 0;
    *(undefined8 *)&this->MetadataChangedDelegate = 0;
    *(undefined8 *)&(this->MetadataChangedDelegate).field_0x8 = 0;
    *(undefined8 *)&(this->MetadataChangedDelegate).field_0x10 = 0;
    *(undefined8 *)&(this->MetadataChangedDelegate).field_0x18 = 2;
    *(undefined8 *)&this->MetadataTagChangedDelegate = 0;
    *(undefined8 *)&(this->MetadataTagChangedDelegate).field_0x8 = 0;
    *(undefined8 *)&(this->MetadataTagChangedDelegate).field_0x10 = 0;
    *(undefined8 *)&(this->MetadataTagChangedDelegate).field_0x18 = 2;
    *(undefined8 *)&this->DismissDependencyDelegate = 0;
    *(undefined8 *)&(this->DismissDependencyDelegate).field_0x8 = 0;
    *(undefined4 *)&(this->DismissDependencyDelegate).field_0x10 = 0;
    *(undefined8 *)&this->EventDelegate = 0;
    *(undefined8 *)&(this->EventDelegate).field_0x8 = 0;
    *(undefined8 *)&(this->EventDelegate).field_0x10 = 0;
    *(undefined8 *)&(this->EventDelegate).field_0x18 = 2;
    (this->PoseAdapter).Object = (FRigHierarchyPoseAdapter *)0x0;
    (this->PoseAdapter).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (this->Elements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Elements).ArrayNum = 0;
    (this->Elements).ArrayMax = 0;
    this->MetadataVersion = 0;
    this->MetadataTagVersion = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ElementsLock,4000);
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->IsDependentOnLock,4000);
    (this->ElementsPerType).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ElementsPerType).ArrayNum = 0;
    (this->ElementsPerType).ArrayMax = 0;
    (this->ChangedCurveIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ChangedCurveIndices).ArrayNum = 0;
    (this->ChangedCurveIndices).ArrayMax = 0;
    this->bRecordCurveChanges = true;
    *(undefined8 *)&(this->ElementIndexLookup).field_0x10 = 0;
    *(undefined8 *)&(this->ElementIndexLookup).field_0x18 = 0;
    *(undefined8 *)&(this->ElementIndexLookup).field_0x38 = 0;
    *(undefined8 *)&(this->ElementIndexLookup).field_0x48 = 0;
    *(undefined8 *)&this->ElementIndexLookup = 0;
    *(undefined8 *)&(this->ElementIndexLookup).field_0x8 = 0;
    *(undefined8 *)&(this->ElementIndexLookup).field_0x20 = 0;
    *(undefined4 *)&(this->ElementIndexLookup).field_0x28 = 0;
    *(undefined4 *)&(this->ElementIndexLookup).field_0x2c = 0x80;
    *(undefined4 *)&(this->ElementIndexLookup).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->ElementIndexLookup).field_0x34 = 0;
    *(undefined8 *)&(this->ElementIndexLookup).field_0x40 = 0;
    *(undefined8 *)&this->ComponentIndexLookup = 0;
    *(undefined8 *)&(this->ComponentIndexLookup).field_0x8 = 0;
    *(undefined8 *)&(this->ComponentIndexLookup).field_0x20 = 0;
    *(undefined4 *)&(this->ComponentIndexLookup).field_0x28 = 0;
    *(undefined4 *)&(this->ComponentIndexLookup).field_0x2c = 0x80;
    *(undefined4 *)&(this->ComponentIndexLookup).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->ComponentIndexLookup).field_0x34 = 0;
    *(undefined8 *)&(this->ComponentIndexLookup).field_0x40 = 0;
    *(undefined4 *)&(this->ComponentIndexLookup).field_0x48 = 0;
    (this->ElementTransforms).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ElementTransforms).Storage.ArrayNum = 0;
    (this->ElementTransforms).Storage.ArrayMax = 0;
    (this->ElementTransforms).FreeList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ElementTransforms).FreeList.ArrayNum = 0;
    (this->ElementTransforms).FreeList.ArrayMax = 0;
    (this->ElementTransforms).bFreeListIsSorted = true;
    (this->ElementDirtyStates).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ElementDirtyStates).Storage.ArrayNum = 0;
    (this->ElementDirtyStates).Storage.ArrayMax = 0;
    (this->ElementDirtyStates).FreeList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ElementDirtyStates).FreeList.ArrayNum = 0;
    (this->ElementDirtyStates).FreeList.ArrayMax = 0;
    (this->ElementDirtyStates).bFreeListIsSorted = true;
    (this->ElementCurves).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ElementCurves).Storage.ArrayNum = 0;
    (this->ElementCurves).Storage.ArrayMax = 0;
    (this->ElementCurves).FreeList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ElementCurves).FreeList.ArrayNum = 0;
    (this->ElementCurves).FreeList.ArrayMax = 0;
    (this->ElementCurves).bFreeListIsSorted = true;
    (this->ElementTransformRanges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ElementTransformRanges).ArrayNum = 0;
    (this->ElementTransformRanges).ArrayMax = 0;
    (this->ElementMetadata).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ElementMetadata).Storage.ArrayNum = 0;
    (this->ElementMetadata).Storage.ArrayMax = 0;
    (this->ElementMetadata).FreeList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ElementMetadata).FreeList.ArrayNum = 0;
    (this->ElementMetadata).FreeList.ArrayMax = 0;
    (this->ElementMetadata).bFreeListIsSorted = true;
    (this->ElementComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ElementComponents).ArrayNum = 0;
    (this->ElementComponents).ArrayMax = 0;
    (this->ChildElementOffsetAndCountCache).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ChildElementOffsetAndCountCache).ArrayNum = 0;
    (this->ChildElementOffsetAndCountCache).ArrayMax = 0;
    (this->ChildElementCache).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ChildElementCache).ArrayNum = 0;
    (this->ChildElementCache).ArrayMax = 0;
    (this->TransformUndoStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->TransformUndoStack).ArrayNum = 0;
    (this->TransformUndoStack).ArrayMax = 0;
    (this->TransformRedoStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->TransformRedoStack).ArrayNum = 0;
    (this->TransformRedoStack).ArrayMax = 0;
    (this->LastInteractedKey).Type = None;
    this->ChildElementCacheTopologyVersion = 0xffffffff;
    this->TransformStackIndex = 0;
    this->bTransactingForTransformChange = false;
    this->MaxNameLength = 100;
    this->bIsInteracting = false;
    (this->LastInteractedKey).Name.ComparisonIndex = 0;
    (this->LastInteractedKey).Name.Number = 0;
    *(undefined8 *)&this->UndoRedoEvent = 0;
    *(undefined8 *)&(this->UndoRedoEvent).field_0x8 = 0;
    *(undefined8 *)&(this->UndoRedoEvent).field_0x10 = 0;
    *(undefined8 *)&(this->UndoRedoEvent).field_0x18 = 2;
    (this->HierarchyForSelectionPtr).WeakPtr = (FWeakObjectPtr)0x0;
    (this->DefaultHierarchyPtr).WeakPtr = (FWeakObjectPtr)0x0;
    (this->OrderedSelection).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->OrderedSelection).ArrayNum = 0;
    (this->OrderedSelection).ArrayMax = 0;
    (this->HierarchyController).field0_0x0.DebugPtr = (URigHierarchyController *)0x0;
    (this->RuleManager).field0_0x0.DebugPtr = (UModularRigRuleManager *)0x0;
    *(undefined8 *)&this->PreviousHierarchyParentMap = 0;
    *(undefined8 *)&(this->PreviousHierarchyParentMap).field_0x8 = 0;
    *(undefined8 *)&(this->PreviousHierarchyParentMap).field_0x20 = 0;
    this->bSuspendNotifications = false;
    this->bSuspendMetadataNotifications = false;
    this->bSuspendNameSpaceKeyWarnings = false;
    this->bIsControllerAvailable = true;
    *(undefined4 *)&(this->PreviousHierarchyParentMap).field_0x28 = 0;
    *(undefined4 *)&(this->PreviousHierarchyParentMap).field_0x2c = 0x80;
    *(undefined4 *)&(this->PreviousHierarchyParentMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->PreviousHierarchyParentMap).field_0x34 = 0;
    *(undefined8 *)&(this->PreviousHierarchyParentMap).field_0x40 = 0;
    *(undefined4 *)&(this->PreviousHierarchyParentMap).field_0x48 = 0;
    *(undefined8 *)&this->PreviousHierarchyNameMap = 0;
    *(undefined8 *)&(this->PreviousHierarchyNameMap).field_0x8 = 0;
    *(undefined8 *)&(this->PreviousHierarchyNameMap).field_0x20 = 0;
    *(undefined4 *)&(this->PreviousHierarchyNameMap).field_0x28 = 0;
    *(undefined4 *)&(this->PreviousHierarchyNameMap).field_0x2c = 0x80;
    *(undefined4 *)&(this->PreviousHierarchyNameMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->PreviousHierarchyNameMap).field_0x34 = 0;
    *(undefined8 *)&(this->PreviousHierarchyNameMap).field_0x40 = 0;
    *(undefined4 *)&(this->PreviousHierarchyNameMap).field_0x48 = 0;
    (this->ResetPoseIsFilteredOut).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ResetPoseIsFilteredOut).ArrayNum = 0;
    (this->ResetPoseIsFilteredOut).ArrayMax = 0;
    (this->ElementsToRetainLocalTransform).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ElementsToRetainLocalTransform).ArrayNum = 0;
    (this->ElementsToRetainLocalTransform).ArrayMax = 0;
    (this->ElementDependencyCache).TopologyVersion = 0;
    *(undefined8 *)&(this->ElementDependencyCache).Value.field0_0x0 = 0;
    *(undefined4 *)((longlong)&(this->ElementDependencyCache).Value.field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&(this->ElementDependencyCache).Value.field0_0x0 + 0xc) = 0xffffffff;
    *(undefined8 *)((longlong)&(this->ElementDependencyCache).Value.field0_0x0 + 0x20) = 0;
    this->ResetPoseHash = -1;
    *(undefined4 *)((longlong)&(this->ElementDependencyCache).Value.field0_0x0 + 0x28) = 0;
    *(undefined4 *)((longlong)&(this->ElementDependencyCache).Value.field0_0x0 + 0x2c) = 0x80;
    *(undefined4 *)((longlong)&(this->ElementDependencyCache).Value.field0_0x0 + 0x30) = 0xffffffff;
    *(undefined4 *)((longlong)&(this->ElementDependencyCache).Value.field0_0x0 + 0x34) = 0;
    *(undefined8 *)((longlong)&(this->ElementDependencyCache).Value.field0_0x0 + 0x40) = 0;
    *(undefined4 *)((longlong)&(this->ElementDependencyCache).Value.field0_0x0 + 0x48) = 0;
    this->bIsCopyingHierarchy = false;
    *(undefined8 *)&this->KeyCollectionCache = 0;
    *(undefined8 *)&(this->KeyCollectionCache).field_0x8 = 0;
    *(undefined8 *)&(this->KeyCollectionCache).field_0x20 = 0;
    *(undefined4 *)&(this->KeyCollectionCache).field_0x28 = 0;
    *(undefined4 *)&(this->KeyCollectionCache).field_0x2c = 0x80;
    *(undefined4 *)&(this->KeyCollectionCache).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->KeyCollectionCache).field_0x34 = 0;
    *(undefined8 *)&(this->KeyCollectionCache).field_0x40 = 0;
    *(undefined4 *)&(this->KeyCollectionCache).field_0x48 = 0;
    bVar1 = URigHierarchy::bEnableValidityCheckbyDefault;
    (this->HierarchyForCacheValidation).field0_0x0.DebugPtr = (URigHierarchy *)0x0;
    *(undefined8 *)&this->DefaultParentPerElement = 0;
    *(undefined8 *)&(this->DefaultParentPerElement).field_0x8 = 0;
    *(undefined8 *)&(this->DefaultParentPerElement).field_0x20 = 0;
    this->bEnableCacheValidityCheck = bVar1;
    *(undefined4 *)&(this->DefaultParentPerElement).field_0x28 = 0;
    *(undefined4 *)&(this->DefaultParentPerElement).field_0x2c = 0x80;
    *(undefined4 *)&(this->DefaultParentPerElement).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->DefaultParentPerElement).field_0x34 = 0;
    *(undefined8 *)&(this->DefaultParentPerElement).field_0x40 = 0;
    *(undefined4 *)&(this->DefaultParentPerElement).field_0x48 = 0;
    this->bUsePreferredEulerAngles = true;
    this->bAllowNameSpaceWhenSanitizingName = false;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ExecuteContextLock,4000);
    this->ExecuteContext = (FRigVMExtendedExecuteContext *)0x0;
    (this->PoseVersionPerElement).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PoseVersionPerElement).ArrayNum = 0;
    (this->PoseVersionPerElement).ArrayMax = 0;
    this->ElementKeyRedirector = (FRigElementKeyRedirector *)0x0;
    pTVar2 = operator_new(0x20);
    if (pTVar2 != (TNode *)0x0) {
      *(undefined4 *)&pTVar2->Item = 0;
      *(undefined2 *)&(pTVar2->Item).Key.field_0x1 = 0;
      (pTVar2->Item).Key.field_0x3 = 0;
      pTVar2->NextNode = (TNode *)0x0;
      (pTVar2->Item).Key.Type = None;
      (pTVar2->Item).Key.Name.ComparisonIndex = 0;
      (pTVar2->Item).Key.Name.Number = 0;
      (pTVar2->Item).ComponentName.ComparisonIndex = 0;
      (pTVar2->Item).ComponentName.Number = 0;
      pTVar3 = pTVar2;
    }
    (this->QueuedNotifications).Tail = pTVar3;
    (this->QueuedNotifications).Head = pTVar3;
    this->ElementBeingDestroyed = (FRigBaseElement *)0x0;
    (this->NonUniqueShortNamesCache).TopologyVersion = 0;
    *(undefined8 *)&(this->NonUniqueShortNamesCache).Value.field0_0x0 = 0;
    *(undefined4 *)((longlong)&(this->NonUniqueShortNamesCache).Value.field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&(this->NonUniqueShortNamesCache).Value.field0_0x0 + 0xc) = 0xffffffff
    ;
    *(undefined8 *)((longlong)&(this->NonUniqueShortNamesCache).Value.field0_0x0 + 0x20) = 0;
    *(undefined4 *)((longlong)&(this->NonUniqueShortNamesCache).Value.field0_0x0 + 0x28) = 0;
    *(undefined4 *)((longlong)&(this->NonUniqueShortNamesCache).Value.field0_0x0 + 0x2c) = 0x80;
    *(undefined4 *)((longlong)&(this->NonUniqueShortNamesCache).Value.field0_0x0 + 0x30) =
         0xffffffff;
    *(undefined4 *)((longlong)&(this->NonUniqueShortNamesCache).Value.field0_0x0 + 0x34) = 0;
    *(undefined8 *)((longlong)&(this->NonUniqueShortNamesCache).Value.field0_0x0 + 0x40) = 0;
    (this->NonUniqueShortNamesCache).Value.field0_0x0.TypedValue.HashSize = 0;
    URigHierarchy::Reset(this);
    return;
  }
  return;
}

// InternalConstructor<URigHierarchyController> @ 14a2d35e0

void __cdecl InternalConstructor<URigHierarchyController>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined1 *)(this + 1) = 1;
    *(undefined ***)this = &___7URigHierarchyController__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined4 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x20 = 2;
    *(undefined4 *)&this[2].field_0x4 = 0xffffffff;
  }
  return;
}

// InternalConstructor<URigHierarchyProvider> @ 14a2d3640

void __cdecl InternalConstructor<URigHierarchyProvider>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7URigHierarchyProvider__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UAdditiveControlRig> @ 14a2d3670

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAdditiveControlRig>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UControlRig *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAdditiveControlRig::GetPrivateStaticClass();
  this = (UControlRig *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UControlRig *)0x0) {
    UControlRig::UControlRig(this,param_1);
    this->_padding_ = (longlong)&UAdditiveControlRig::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAdditiveControlRig::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UAdditiveControlRig::_vftable__for__INodeMappingProviderInterface__
    ;
    this->_padding_ = (longlong)&UAdditiveControlRig::_vftable__for__IRigHierarchyProvider__;
    this->_padding_ = (longlong)&UAdditiveControlRig::_vftable__for__IMeshDeformerProducer__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UFKControlRig> @ 14a2d3760

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UFKControlRig>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UControlRig *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UFKControlRig::GetPrivateStaticClass();
  this = (UControlRig *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UControlRig *)0x0) {
    UControlRig::UControlRig(this,param_1);
    this->_padding_ = (longlong)&UFKControlRig::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UFKControlRig::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UFKControlRig::_vftable__for__INodeMappingProviderInterface__;
    this->_padding_ = (longlong)&UFKControlRig::_vftable__for__IRigHierarchyProvider__;
    this->_padding_ = (longlong)&UFKControlRig::_vftable__for__IMeshDeformerProducer__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0x101;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 1;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UModularRigRuleManager> @ 14a2d3880

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UModularRigRuleManager>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UModularRigRuleManager::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UModularRigRuleManager__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<URigHierarchy> @ 14a2d3930

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<URigHierarchy>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  URigHierarchy *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = URigHierarchy::GetPrivateStaticClass();
  pUVar3 = (URigHierarchy *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (URigHierarchy *)0x0) {
    pUVar3 = URigHierarchy::URigHierarchy(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<URigHierarchyController> @ 14a2d39d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<URigHierarchyController>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = URigHierarchyController::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7URigHierarchyController__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 2;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<URigHierarchyProvider> @ 14a2d3aa0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<URigHierarchyProvider>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = URigHierarchyProvider::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7URigHierarchyProvider__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<UScriptStruct_*,int,FIdentityFunctor,`FRigBaseComponent::GetAllComponentScriptStructs'::__l13::<lambda_1>_> @ 14a2d3b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UScriptStruct_*,int,FIdentityFunctor,_FRigBaseComponent::GetAllComponentScriptStructs_::__l13::<lambda_1>_>
          (UScriptStruct **param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  UScriptStruct *pUVar1;
  int iVar2;
  UScriptStruct **ppUVar3;
  UScriptStruct **ppUVar4;
  UScriptStruct ***pppUVar5;
  int iVar6;
  UScriptStruct **ppUVar7;
  UScriptStruct **ppUVar8;
  UScriptStruct **ppUVar9;
  float fVar10;
  undefined1 auStack_398 [32];
  FName local_378;
  FName local_370 [3];
  UScriptStruct **local_358;
  UScriptStruct **local_348;
  UScriptStruct **local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_398;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar10;
    memset(local_330,0,0x2e8);
    pppUVar5 = &local_348;
    do {
      ppUVar3 = pppUVar5[1];
      ppUVar4 = *pppUVar5;
      local_358 = pppUVar5[2];
      iVar2 = (int)((longlong)ppUVar3 - (longlong)ppUVar4 >> 3) + 1;
      ppUVar9 = ppUVar4;
      iVar6 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_14a2d3c10:
        if (8 < iVar2) {
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          ppUVar7 = ppUVar3 + 1;
          pUVar1 = ppUVar9[iVar2 >> 1];
          ppUVar9[iVar2 >> 1] = *ppUVar9;
          *ppUVar9 = pUVar1;
          ppUVar4 = ppUVar9;
LAB_14a2d3c40:
          ppUVar4 = ppUVar4 + 1;
          if (ppUVar4 <= ppUVar3) goto code_r0x00014a2d3c49;
          goto LAB_14a2d3c77;
        }
        for (; ppUVar7 = ppUVar9, ppUVar4 = ppUVar9, ppUVar9 < ppUVar3; ppUVar3 = ppUVar3 + -1) {
          while (ppUVar8 = ppUVar7, ppUVar4 = ppUVar4 + 1, ppUVar4 <= ppUVar3) {
            local_378 = (FName)(*ppUVar8)->_padding_;
            local_370[0] = (FName)(*ppUVar4)->_padding_;
            iVar6 = ::FName::Compare(&local_378,local_370);
            ppUVar7 = ppUVar4;
            if (-1 < iVar6) {
              ppUVar7 = ppUVar8;
            }
          }
          pUVar1 = *ppUVar8;
          *ppUVar8 = *ppUVar3;
          *ppUVar3 = pUVar1;
        }
        goto LAB_14a2d3d61;
      }
LAB_14a2d3d4f:
      HeapSortInternal<UScriptStruct_*,int,FIdentityFunctor,_FRigBaseComponent::GetAllComponentScriptStructs_::__l13::<lambda_1>_>
                (ppUVar4,iVar2,param_3,param_4);
LAB_14a2d3d61:
      pppUVar5 = pppUVar5 + -3;
    } while (&local_348 <= pppUVar5);
  }
  return;
code_r0x00014a2d3c49:
  local_370[0] = (FName)(*ppUVar9)->_padding_;
  local_378 = (FName)(*ppUVar4)->_padding_;
  iVar2 = ::FName::Compare(local_370,&local_378);
  if (-1 < iVar2) goto LAB_14a2d3c40;
LAB_14a2d3c77:
  do {
    ppUVar8 = ppUVar7;
    ppUVar7 = ppUVar8 + -1;
    if (ppUVar7 <= ppUVar9) break;
    local_378 = (FName)(*ppUVar7)->_padding_;
    local_370[0] = (FName)(*ppUVar9)->_padding_;
    iVar2 = ::FName::Compare(&local_378,local_370);
  } while (-1 < iVar2);
  if (ppUVar4 <= ppUVar7) {
    pUVar1 = *ppUVar4;
    *ppUVar4 = *ppUVar7;
    *ppUVar7 = pUVar1;
    goto LAB_14a2d3c40;
  }
  pUVar1 = *ppUVar9;
  iVar6 = iVar6 + -1;
  *ppUVar9 = *ppUVar7;
  *ppUVar7 = pUVar1;
  if ((longlong)((longlong)ppUVar7 + (-8 - (longlong)ppUVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppUVar3 - (longlong)ppUVar4 & 0xfffffffffffffff8U)) {
    if (ppUVar4 < ppUVar3) {
      *pppUVar5 = ppUVar4;
      pppUVar5[1] = ppUVar3;
      *(int *)(pppUVar5 + 2) = iVar6;
      pppUVar5 = pppUVar5 + 3;
    }
    if (ppUVar7 <= ppUVar9 + 1) goto LAB_14a2d3d61;
    ppUVar3 = ppUVar8 + -2;
    ppUVar4 = ppUVar9;
  }
  else {
    if (ppUVar9 + 1 < ppUVar7) {
      *pppUVar5 = ppUVar9;
      pppUVar5[1] = ppUVar8 + -2;
      *(int *)(pppUVar5 + 2) = iVar6;
      pppUVar5 = pppUVar5 + 3;
    }
    if (ppUVar3 <= ppUVar4) goto LAB_14a2d3d61;
  }
  iVar2 = (int)((longlong)ppUVar3 - (longlong)ppUVar4 >> 3) + 1;
  ppUVar9 = ppUVar4;
  if (iVar6 == 0) goto LAB_14a2d3d4f;
  goto LAB_14a2d3c10;
}

// NewObject<UModularRigRuleManager> @ 14a2d4e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UModularRigRuleManager * __cdecl
NewObject<UModularRigRuleManager>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UModularRigRuleManager *pUVar2;
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
  pUVar1 = UModularRigRuleManager::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UModularRigRuleManager *)
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

// NewObject<URigHierarchyController> @ 14a2d4f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

URigHierarchyController * __cdecl
NewObject<URigHierarchyController>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  URigHierarchyController *pUVar2;
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
  pUVar1 = URigHierarchyController::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (URigHierarchyController *)
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

// RemoveAll<`TArray<FRigHierarchyKey,TSizedDefaultAllocator<32>_>::Remove'::__l2::<lambda_1>_> @ 14a2d5b00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall
TArray<FRigHierarchyKey,TSizedDefaultAllocator<32>_>::
RemoveAll<_TArray<FRigHierarchyKey,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
          (TArray<FRigHierarchyKey,TSizedDefaultAllocator<32>_> *this,<lambda_1> *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FRigHierarchyKey *pFVar5;
  FName *pFVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  
  iVar3 = this->ArrayNum;
  lVar10 = (longlong)iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  pFVar4 = (this->AllocatorInstance).Data;
  pFVar5 = param_1->Item;
  iVar11 = 0;
  if ((pFVar4[0xc] == (FScriptContainerElement)(pFVar5->Element).bIsSet) &&
     (pFVar4[0x24] == (FScriptContainerElement)(pFVar5->Component).bIsSet)) {
    if (pFVar4[0xc] == (FScriptContainerElement)0x0) {
      if (pFVar4[0x24] == (FScriptContainerElement)0x0) {
LAB_14a2d5ba8:
        bVar12 = false;
        goto LAB_14a2d5bb0;
      }
      if ((*(FName *)(pFVar4 + 0x1c) == (pFVar5->Component).TypedValue.Name) &&
         (*(FName *)(pFVar4 + 0x14) == (pFVar5->Component).TypedValue.ElementKey.Name)) {
        bVar12 = pFVar4[0x10] ==
                 (FScriptContainerElement)(pFVar5->Component).TypedValue.ElementKey.Type;
        goto LAB_14a2d5ba6;
      }
    }
    else if (*(FName *)(pFVar4 + 4) == (pFVar5->Element).TypedValue.Name) {
      bVar12 = *pFVar4 == (FScriptContainerElement)(pFVar5->Element).TypedValue.Type;
LAB_14a2d5ba6:
      if (bVar12) goto LAB_14a2d5ba8;
    }
  }
  bVar12 = true;
LAB_14a2d5bb0:
  lVar9 = 0;
  iVar7 = 0;
  do {
    lVar9 = lVar9 + 1;
    iVar8 = iVar7 + 1;
    if (lVar9 < lVar10) {
      pFVar5 = param_1->Item;
      pFVar6 = (FName *)(pFVar4 + lVar9 * 0x28 + 0x14);
      do {
        cVar1 = (char)pFVar6[-1].ComparisonIndex.Value;
        if (((bool)cVar1 == (pFVar5->Element).bIsSet) &&
           (cVar2 = (char)pFVar6[2].ComparisonIndex.Value, (bool)cVar2 == (pFVar5->Component).bIsSet
           )) {
          if (cVar1 != '\0') {
            if (pFVar6[-2] == (pFVar5->Element).TypedValue.Name) {
              bVar13 = (ERigElementType)pFVar6[-3].Number == (pFVar5->Element).TypedValue.Type;
LAB_14a2d5c39:
              if (bVar13) goto LAB_14a2d5c3b;
            }
            goto LAB_14a2d5c3f;
          }
          if (cVar2 != '\0') {
            if ((pFVar6[1] == (pFVar5->Component).TypedValue.Name) &&
               (*pFVar6 == (pFVar5->Component).TypedValue.ElementKey.Name)) {
              bVar13 = (ERigElementType)pFVar6[-1].Number ==
                       (pFVar5->Component).TypedValue.ElementKey.Type;
              goto LAB_14a2d5c39;
            }
            goto LAB_14a2d5c3f;
          }
LAB_14a2d5c3b:
          bVar13 = true;
        }
        else {
LAB_14a2d5c3f:
          bVar13 = false;
        }
        if (bVar12 != !bVar13) break;
        iVar8 = iVar8 + 1;
        lVar9 = lVar9 + 1;
        pFVar6 = pFVar6 + 5;
      } while (lVar9 < lVar10);
    }
    if (bVar12 != false) {
      if (iVar11 != iVar7) {
        memmove(pFVar4 + (longlong)iVar11 * 0x28,pFVar4 + (longlong)iVar7 * 0x28,
                (longlong)(iVar8 - iVar7) * 0x28);
      }
      iVar11 = iVar11 + (iVar8 - iVar7);
    }
    bVar12 = (bool)(bVar12 ^ 1);
    iVar7 = iVar8;
    if (lVar10 <= lVar9) {
      this->ArrayNum = iVar11;
      return iVar3 - iVar11;
    }
  } while( true );
}

// Reverse<FRigElementKey> @ 14a2d62b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl AlgoImpl::Reverse<FRigElementKey>(FRigElementKey *param_1,int param_2)

{
  uint uVar1;
  undefined3 uVar2;
  FNameEntryId FVar3;
  ERigElementType EVar4;
  undefined3 uVar5;
  FNameEntryId FVar6;
  FRigElementKey *pFVar7;
  longlong lVar8;
  
  lVar8 = (longlong)(param_2 / 2);
  if (0 < param_2 / 2) {
    pFVar7 = param_1 + (param_2 + -1);
    do {
      uVar2 = *(undefined3 *)&pFVar7->field_0x1;
      FVar3.Value = (pFVar7->Name).ComparisonIndex.Value;
      EVar4 = param_1->Type;
      uVar5 = *(undefined3 *)&param_1->field_0x1;
      FVar6.Value = (param_1->Name).ComparisonIndex.Value;
      uVar1 = (param_1->Name).Number;
      param_1->Type = pFVar7->Type;
      *(undefined3 *)&param_1->field_0x1 = uVar2;
      (param_1->Name).ComparisonIndex = (FNameEntryId)FVar3.Value;
      (param_1->Name).Number = (pFVar7->Name).Number;
      pFVar7->Type = EVar4;
      *(undefined3 *)&pFVar7->field_0x1 = uVar5;
      (pFVar7->Name).ComparisonIndex = (FNameEntryId)FVar6.Value;
      (pFVar7->Name).Number = uVar1;
      lVar8 = lVar8 + -1;
      param_1 = param_1 + 1;
      pFVar7 = pFVar7 + -1;
    } while (lVar8 != 0);
  }
  return;
}

// StaticEnum<enum_EConnectorType> @ 14a2d73d0

UEnum * __cdecl StaticEnum<enum_EConnectorType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EConnectorType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_EConnectorType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_EConnectorType,(UObject *)pUVar1,
                       L"EConnectorType");
  }
  return Z_Registration_Info_UEnum_EConnectorType.OuterSingleton;
}

// StaticEnum<enum_EControlRigFKRigExecuteMode> @ 14a2d7410

UEnum * __cdecl StaticEnum<enum_EControlRigFKRigExecuteMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EControlRigFKRigExecuteMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_EControlRigFKRigExecuteMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_EControlRigFKRigExecuteMode,(UObject *)pUVar1,
                       L"EControlRigFKRigExecuteMode");
  }
  return Z_Registration_Info_UEnum_EControlRigFKRigExecuteMode.OuterSingleton;
}

// StaticEnum<enum_EControlRigSetKey> @ 14a2d7450

UEnum * __cdecl StaticEnum<enum_EControlRigSetKey>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EControlRigSetKey.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_EControlRigSetKey.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_EControlRigSetKey,(UObject *)pUVar1,
                       L"EControlRigSetKey");
  }
  return Z_Registration_Info_UEnum_EControlRigSetKey.OuterSingleton;
}

// StaticEnum<enum_EElementNameDisplayMode> @ 14a2d7490

UEnum * __cdecl StaticEnum<enum_EElementNameDisplayMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EElementNameDisplayMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_EElementNameDisplayMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_EElementNameDisplayMode,(UObject *)pUVar1,
                       L"EElementNameDisplayMode");
  }
  return Z_Registration_Info_UEnum_EElementNameDisplayMode.OuterSingleton;
}

// StaticEnum<enum_EModularRigResolveState> @ 14a2d74d0

UEnum * __cdecl StaticEnum<enum_EModularRigResolveState>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EModularRigResolveState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_EModularRigResolveState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_EModularRigResolveState,(UObject *)pUVar1,
                       L"EModularRigResolveState");
  }
  return Z_Registration_Info_UEnum_EModularRigResolveState.OuterSingleton;
}

// StaticEnum<enum_ERigBoneType> @ 14a2d7510

UEnum * __cdecl StaticEnum<enum_ERigBoneType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigBoneType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_ERigBoneType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigBoneType,(UObject *)pUVar1,L"ERigBoneType");
  }
  return Z_Registration_Info_UEnum_ERigBoneType.OuterSingleton;
}

// StaticEnum<enum_ERigControlAnimationType> @ 14a2d7550

UEnum * __cdecl StaticEnum<enum_ERigControlAnimationType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigControlAnimationType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_ERigControlAnimationType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigControlAnimationType,(UObject *)pUVar1,
                       L"ERigControlAnimationType");
  }
  return Z_Registration_Info_UEnum_ERigControlAnimationType.OuterSingleton;
}

// StaticEnum<enum_ERigControlAxis> @ 14a2d7590

UEnum * __cdecl StaticEnum<enum_ERigControlAxis>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigControlAxis.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_ERigControlAxis.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigControlAxis,(UObject *)pUVar1,
                       L"ERigControlAxis");
  }
  return Z_Registration_Info_UEnum_ERigControlAxis.OuterSingleton;
}

// StaticEnum<enum_ERigControlTransformChannel> @ 14a2d75d0

UEnum * __cdecl StaticEnum<enum_ERigControlTransformChannel>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigControlTransformChannel.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_ERigControlTransformChannel.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigControlTransformChannel,(UObject *)pUVar1,
                       L"ERigControlTransformChannel");
  }
  return Z_Registration_Info_UEnum_ERigControlTransformChannel.OuterSingleton;
}

// StaticEnum<enum_ERigControlType> @ 14a2d7610

UEnum * __cdecl StaticEnum<enum_ERigControlType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigControlType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_ERigControlType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigControlType,(UObject *)pUVar1,
                       L"ERigControlType");
  }
  return Z_Registration_Info_UEnum_ERigControlType.OuterSingleton;
}

// StaticEnum<enum_ERigControlValueType> @ 14a2d7650

UEnum * __cdecl StaticEnum<enum_ERigControlValueType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigControlValueType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_ERigControlValueType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigControlValueType,(UObject *)pUVar1,
                       L"ERigControlValueType");
  }
  return Z_Registration_Info_UEnum_ERigControlValueType.OuterSingleton;
}

// StaticEnum<enum_ERigControlVisibility> @ 14a2d7690

UEnum * __cdecl StaticEnum<enum_ERigControlVisibility>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigControlVisibility.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_ERigControlVisibility.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigControlVisibility,(UObject *)pUVar1,
                       L"ERigControlVisibility");
  }
  return Z_Registration_Info_UEnum_ERigControlVisibility.OuterSingleton;
}

// StaticEnum<enum_ERigElementResolveState> @ 14a2d76d0

UEnum * __cdecl StaticEnum<enum_ERigElementResolveState>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigElementResolveState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_ERigElementResolveState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigElementResolveState,(UObject *)pUVar1,
                       L"ERigElementResolveState");
  }
  return Z_Registration_Info_UEnum_ERigElementResolveState.OuterSingleton;
}

// StaticEnum<enum_ERigElementType> @ 14a2d7710

UEnum * __cdecl StaticEnum<enum_ERigElementType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigElementType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_ERigElementType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigElementType,(UObject *)pUVar1,
                       L"ERigElementType");
  }
  return Z_Registration_Info_UEnum_ERigElementType.OuterSingleton;
}

// StaticEnum<enum_ERigEvent> @ 14a2d7750

UEnum * __cdecl StaticEnum<enum_ERigEvent>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigEvent.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_ERigEvent.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigEvent,(UObject *)pUVar1,L"ERigEvent");
  }
  return Z_Registration_Info_UEnum_ERigEvent.OuterSingleton;
}

// StaticEnum<enum_ERigHierarchyNotification> @ 14a2d7790

UEnum * __cdecl StaticEnum<enum_ERigHierarchyNotification>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigHierarchyNotification.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_ERigHierarchyNotification.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigHierarchyNotification,(UObject *)pUVar1,
                       L"ERigHierarchyNotification");
  }
  return Z_Registration_Info_UEnum_ERigHierarchyNotification.OuterSingleton;
}

// StaticEnum<enum_ERigMetadataType> @ 14a2d77d0

UEnum * __cdecl StaticEnum<enum_ERigMetadataType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigMetadataType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_ERigMetadataType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigMetadataType,(UObject *)pUVar1,
                       L"ERigMetadataType");
  }
  return Z_Registration_Info_UEnum_ERigMetadataType.OuterSingleton;
}

// StaticEnum<enum_ERigTransformStackEntryType> @ 14a2d7810

UEnum * __cdecl StaticEnum<enum_ERigTransformStackEntryType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigTransformStackEntryType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_ERigTransformStackEntryType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigTransformStackEntryType,(UObject *)pUVar1,
                       L"ERigTransformStackEntryType");
  }
  return Z_Registration_Info_UEnum_ERigTransformStackEntryType.OuterSingleton;
}

// StaticEnum<enum_ERigTransformStorageType::Type> @ 14a2d7850

UEnum * __cdecl StaticEnum<enum_ERigTransformStorageType::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigTransformStorageType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_ERigTransformStorageType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigTransformStorageType,(UObject *)pUVar1,
                       L"ERigTransformStorageType");
  }
  return Z_Registration_Info_UEnum_ERigTransformStorageType.OuterSingleton;
}

// StaticEnum<enum_ERigTransformType::Type> @ 14a2d7890

UEnum * __cdecl StaticEnum<enum_ERigTransformType::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigTransformType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_ERigTransformType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigTransformType,(UObject *)pUVar1,
                       L"ERigTransformType");
  }
  return Z_Registration_Info_UEnum_ERigTransformType.OuterSingleton;
}

// Transform<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_&,`URigHierarchy::GetSafeNewDisplayName'::__l2::<lambda_1>_> @ 14a2d78d0

/* WARNING: Removing unreachable block (ram,0x00014a2d7a4e) */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
Algo::
Transform<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_&,_URigHierarchy::GetSafeNewDisplayName_::__l2::<lambda_1>_>
          (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,<lambda_1> param_3)

{
  FRigElementKey *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FRigBaseElement *this;
  FName *this_00;
  FScriptContainerElement *pFVar6;
  FRigElementKey *pFVar7;
  undefined1 local_res8 [8];
  FString local_38;
  
  iVar2 = param_1->ArrayNum;
  pFVar7 = (FRigElementKey *)(param_1->AllocatorInstance).Data;
  pFVar1 = pFVar7 + iVar2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FRigElementKey_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar7 == pFVar1) {
      return;
    }
    iVar5 = URigHierarchy::GetIndex(param_3.__this,pFVar7,true);
    this = URigHierarchy::Get(param_3.__this,iVar5);
    if ((this == (FRigBaseElement *)0x0) ||
       (bVar4 = FRigBaseElement::IsA<FRigControlElement>(this), !bVar4)) {
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
    }
    else {
      this_00 = (FName *)((longlong)&this[5].CachedNameString.Data.AllocatorInstance.Data + 4);
      if (*this_00 == (FName)0x0) {
        this_00 = &(this->Key).Name;
      }
      ::FName::ToString(this_00,&local_38);
    }
    pFVar6 = (param_2->AllocatorInstance).Data;
    if (((pFVar6 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 < pFVar6 + (longlong)param_2->ArrayMax * 0x10)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) break;
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar5 + 1;
    pFVar6 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(undefined8 *)pFVar6 = 0;
    *(FScriptContainerElement **)pFVar6 = local_38.Data.AllocatorInstance.Data;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar6 + 8) = local_38.Data.ArrayNum;
    *(int *)(pFVar6 + 0xc) = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    pFVar7 = pFVar7 + 1;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// ~TFunction_OwnedObject<`ExecuteOnGameThread<`URigHierarchy::SendEvent'::__l8::<lambda_1>_>'::__l2::<lambda_1>,1,1> @ 14a2dde50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`URigHierarchy::SendEvent'::__l8::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_ExecuteOnGameThread<_URigHierarchy::SendEvent_::__l8::<lambda_1>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<`URigHierarchy::SendEvent'::`8'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)((longlong)this + 0x18),
             *(int *)((longlong)this + 0x20));
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`UModularRigRuleManager::FilterInvalidModules'::__l2::<lambda_1>,0,1> @ 14a2ddea0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigRuleManager::FilterInvalidModules'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UModularRigRuleManager::FilterInvalidModules_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularRigRuleManager::FilterInvalidModules'::`2'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularRigRuleManager::FindMatches'::__l2::<lambda_1>,0,0> @ 14a2ddec0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigRuleManager::FindMatches'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularRigRuleManager::FindMatches_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularRigRuleManager::FindMatches'::`2'::<lambda_1>,0,0>::_vftable_
  ;
  return;
}

// ~TFunction_OwnedObject<`URigHierarchy::GetRootElements'::__l2::<lambda_1>,0,0> @ 14a2ddee0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetRootElements'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_URigHierarchy::GetRootElements_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__GetRootElements_URigHierarchy__QEBA_AV__TArray_PEAUFRigBaseElement__V__TSizedDefaultAllocator__0CA_____XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`URigHierarchy::GetSafeNewComponentName'::__l2::<lambda_1>,0,1> @ 14a2ddf00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetSafeNewComponentName'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_URigHierarchy::GetSafeNewComponentName_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URigHierarchy::GetSafeNewComponentName'::`2'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`URigHierarchy::GetSafeNewName'::__l2::<lambda_1>,0,0> @ 14a2ddf20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetSafeNewName'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_URigHierarchy::GetSafeNewName_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URigHierarchy::GetSafeNewName'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UFKControlRig::SetControlOffsetsFromBoneInitials'::__l2::<lambda_1>,0,0> @ 14a2ddf40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UFKControlRig::SetControlOffsetsFromBoneInitials'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UFKControlRig::SetControlOffsetsFromBoneInitials_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UFKControlRig::SetControlOffsetsFromBoneInitials'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`URigHierarchy::SortKeys'::__l2::<lambda_1>,0,1> @ 14a2ddf60

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`URigHierarchy::SortKeys'::__l2::<lambda_1>,0,1>
::~TFunction_OwnedObject<_URigHierarchy::SortKeys_::__l2::<lambda_1>,0,1>(void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__SortKeys_URigHierarchy__QEBA_AV__TArray_UFRigElementKey__V__TSizedDefaultAllocator__0CA_____AEBV4__Z__0A__00_Function_Private_Core_UE__6B_
  ;
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

// ~TFunction_OwnedObject<`URigHierarchy::GetElementsOfType<FRigNullElement>'::__l5::<lambda_1>,0,0> @ 14a2ddf80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetElementsOfType<FRigNullElement>'::__l5::<lambda_1>,0,0>::
~TFunction_OwnedObject<_URigHierarchy::GetElementsOfType<FRigNullElement>_::__l5::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4____GetElementsOfType_UFRigNullElement___URigHierarchy__QEBA_AV__TArray_PEAUFRigNullElement__V__TSizedDefaultAllocator__0CA______N_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`URigHierarchy::GetElementsOfType<FRigReferenceElement>'::__l5::<lambda_1>,0,0> @ 14a2ddfa0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetElementsOfType<FRigReferenceElement>'::__l5::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_URigHierarchy::GetElementsOfType<FRigReferenceElement>_::__l5::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4____GetElementsOfType_UFRigReferenceElement___URigHierarchy__QEBA_AV__TArray_PEAUFRigReferenceElement__V__TSizedDefaultAllocator__0CA______N_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`URigHierarchy::GetElementsOfType<FRigSocketElement>'::__l5::<lambda_1>,0,0> @ 14a2ddfc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetElementsOfType<FRigSocketElement>'::__l5::<lambda_1>,0,0>::
~TFunction_OwnedObject<_URigHierarchy::GetElementsOfType<FRigSocketElement>_::__l5::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4____GetElementsOfType_UFRigSocketElement___URigHierarchy__QEBA_AV__TArray_PEAUFRigSocketElement__V__TSizedDefaultAllocator__0CA______N_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`URigHierarchy::GetFilteredElements<FRigBaseElement>'::__l5::<lambda_1>,0,1> @ 14a2ddfe0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetFilteredElements<FRigBaseElement>'::__l5::<lambda_1>,0,1>::
~TFunction_OwnedObject<_URigHierarchy::GetFilteredElements<FRigBaseElement>_::__l5::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4____GetFilteredElements_UFRigBaseElement___URigHierarchy__QEBA_AV__TArray_PEAUFRigBaseElement__V__TSizedDefaultAllocator__0CA_____V__TFunction___A6A_NPEAUFRigBaseElement___Z___N_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
                    /* WARNING: Could not recover jumptable at 0x00014a2de003. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`URigHierarchy::GetFilteredElements<FRigControlElement>'::__l5::<lambda_1>,0,1> @ 14a2de010

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetFilteredElements<FRigControlElement>'::__l5::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_URigHierarchy::GetFilteredElements<FRigControlElement>_::__l5::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4____GetFilteredElements_UFRigControlElement___URigHierarchy__QEBA_AV__TArray_PEAUFRigControlElement__V__TSizedDefaultAllocator__0CA_____V__TFunction___A6A_NPEAUFRigControlElement___Z___N_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
                    /* WARNING: Could not recover jumptable at 0x00014a2de033. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`URigHierarchy::ShrinkElementStorage'::__l5::<lambda_1>,0,0> @ 14a2de040

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::ShrinkElementStorage'::__l5::<lambda_1>,0,0>::
~TFunction_OwnedObject<_URigHierarchy::ShrinkElementStorage_::__l5::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URigHierarchy::ShrinkElementStorage'::`5'::<lambda_1>,0,0>::_vftable_
  ;
  return;
}

// ~TFunction_OwnedObject<`URigHierarchy::ResetPoseToInitial'::__l8::<lambda_1>,0,0> @ 14a2de060

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::ResetPoseToInitial'::__l8::<lambda_1>,0,0>::
~TFunction_OwnedObject<_URigHierarchy::ResetPoseToInitial_::__l8::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URigHierarchy::ResetPoseToInitial'::`8'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``URigHierarchy::GetKeysByPredicate'::__l2::<lambda_1>::operator()'::__l9::<lambda_1>,0,1> @ 14a2de080

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``URigHierarchy::GetKeysByPredicate'::__l2::<lambda_1>::operator()'::__l9::<lambda_1>,0,1>
::
~TFunction_OwnedObject<__URigHierarchy::GetKeysByPredicate_::__l2::<lambda_1>::operator()_::__l9::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``URigHierarchy::GetKeysByPredicate'::`2'::<lambda_1>::operator()'::`9'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`URigHierarchy::GetActiveChildren'::__l10::<lambda_1>,0,0> @ 14a2de0a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetActiveChildren'::__l10::<lambda_1>,0,0>::
~TFunction_OwnedObject<_URigHierarchy::GetActiveChildren_::__l10::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URigHierarchy::GetActiveChildren'::`10'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularRigRuleManager::FilterByConnectorRules'::__l13::<lambda_1>,0,1> @ 14a2de0c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigRuleManager::FilterByConnectorRules'::__l13::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UModularRigRuleManager::FilterByConnectorRules_::__l13::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularRigRuleManager::FilterByConnectorRules'::`13'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`URigHierarchy::EnsureCacheValidityImpl'::__l2::<lambda_2>,0,0> @ 14a2de0e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::EnsureCacheValidityImpl'::__l2::<lambda_2>,0,0>::
~TFunction_OwnedObject<_URigHierarchy::EnsureCacheValidityImpl_::__l2::<lambda_2>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URigHierarchy::EnsureCacheValidityImpl'::`2'::<lambda_2>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`URigHierarchy::GetSafeNewDisplayName'::__l2::<lambda_2>,0,0> @ 14a2de100

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetSafeNewDisplayName'::__l2::<lambda_2>,0,0>::
~TFunction_OwnedObject<_URigHierarchy::GetSafeNewDisplayName_::__l2::<lambda_2>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URigHierarchy::GetSafeNewDisplayName'::`2'::<lambda_2>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`URigHierarchy::SortElementStorage'::__l2::<lambda_2>,0,1> @ 14a2de120

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::SortElementStorage'::__l2::<lambda_2>,0,1>::
~TFunction_OwnedObject<_URigHierarchy::SortElementStorage_::__l2::<lambda_2>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URigHierarchy::SortElementStorage'::`2'::<lambda_2>,0,1>::_vftable_;
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`URigHierarchy::GetAnimationChannels'::__l8::<lambda_2>,0,0> @ 14a2de160

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetAnimationChannels'::__l8::<lambda_2>,0,0>::
~TFunction_OwnedObject<_URigHierarchy::GetAnimationChannels_::__l8::<lambda_2>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URigHierarchy::GetAnimationChannels'::`8'::<lambda_2>,0,0>::_vftable_
  ;
  return;
}

// ~TFunction_OwnedObject<`URigHierarchy::GetActiveChildren'::__l12::<lambda_2>,0,0> @ 14a2de180

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetActiveChildren'::__l12::<lambda_2>,0,0>::
~TFunction_OwnedObject<_URigHierarchy::GetActiveChildren_::__l12::<lambda_2>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URigHierarchy::GetActiveChildren'::`12'::<lambda_2>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`URigHierarchy::SortElementStorage'::__l2::<lambda_3>,0,1> @ 14a2de1a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::SortElementStorage'::__l2::<lambda_3>,0,1>::
~TFunction_OwnedObject<_URigHierarchy::SortElementStorage_::__l2::<lambda_3>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URigHierarchy::SortElementStorage'::`2'::<lambda_3>,0,1>::_vftable_;
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UFKControlRig::Execute_Internal'::__l9::<lambda_3>,0,1> @ 14a2de1e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UFKControlRig::Execute_Internal'::__l9::<lambda_3>,0,1>::
~TFunction_OwnedObject<_UFKControlRig::Execute_Internal_::__l9::<lambda_3>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UFKControlRig::Execute_Internal'::`9'::<lambda_3>,0,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`URigHierarchy::SortElementStorage'::__l2::<lambda_4>,0,1> @ 14a2de200

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::SortElementStorage'::__l2::<lambda_4>,0,1>::
~TFunction_OwnedObject<_URigHierarchy::SortElementStorage_::__l2::<lambda_4>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URigHierarchy::SortElementStorage'::`2'::<lambda_4>,0,1>::_vftable_;
  if (*(void **)((longlong)this + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x30));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
    return;
  }
  return;
}

// operator<< @ 14a2e0a70

FArchive * __cdecl operator<<(FArchive *param_1,FRigControlValue *param_2)

{
  float *pfVar1;
  float *pfVar2;
  
  pfVar1 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    (param_2->FloatStorage).Float00 = *pfVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &(param_2->FloatStorage).Float01;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &(param_2->FloatStorage).Float02;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &(param_2->FloatStorage).Float03;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &(param_2->FloatStorage).Float10;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &(param_2->FloatStorage).Float11;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &(param_2->FloatStorage).Float12;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &(param_2->FloatStorage).Float13;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &(param_2->FloatStorage).Float20;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &(param_2->FloatStorage).Float21;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &(param_2->FloatStorage).Float22;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &(param_2->FloatStorage).Float23;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &(param_2->FloatStorage).Float30;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &(param_2->FloatStorage).Float31;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &(param_2->FloatStorage).Float32;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &(param_2->FloatStorage).Float33;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &(param_2->FloatStorage).Float00_2;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &(param_2->FloatStorage).Float01_2;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &(param_2->FloatStorage).Float02_2;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &(param_2->FloatStorage).Float03_2;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &(param_2->FloatStorage).Float10_2;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &(param_2->FloatStorage).Float11_2;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &(param_2->FloatStorage).Float12_2;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &(param_2->FloatStorage).Float13_2;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &(param_2->FloatStorage).Float20_2;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &(param_2->FloatStorage).Float21_2;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &(param_2->FloatStorage).Float22_2;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &(param_2->FloatStorage).Float23_2;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &(param_2->FloatStorage).Float30_2;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &(param_2->FloatStorage).Float31_2;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &(param_2->FloatStorage).Float32_2;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &(param_2->FloatStorage).Float33_2;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if (pfVar2 + 1 <= (float *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
  return param_1;
}

// operator<< @ 14a2e1330

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FArchive * __cdecl operator<<(FArchive *param_1,FRigElementKey *param_2)

{
  long64 lVar1;
  UPackage *pUVar2;
  FName local_res8;
  
  if (((param_1->field_0x28 & 4) == 0) && ((param_1->field_0x2b & 5) == 0)) {
    if ((param_1->field_0x28 & 1) == 0) {
      return param_1;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
      if (Z_Registration_Info_UEnum_ERigElementType.OuterSingleton == (UEnum *)0x0) {
        pUVar2 = Z_Construct_UPackage__Script_ControlRig();
        Z_Registration_Info_UEnum_ERigElementType.OuterSingleton =
             GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigElementType,(UObject *)pUVar2,
                           L"ERigElementType");
      }
      ElementTypeEnum = Z_Registration_Info_UEnum_ERigElementType.OuterSingleton;
      _Init_thread_footer(&_TSS0);
    }
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_res8);
    lVar1 = UEnum::GetValueByName(ElementTypeEnum,local_res8,None);
    param_2->Type = (ERigElementType)lVar1;
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
      if (Z_Registration_Info_UEnum_ERigElementType.OuterSingleton == (UEnum *)0x0) {
        pUVar2 = Z_Construct_UPackage__Script_ControlRig();
        Z_Registration_Info_UEnum_ERigElementType.OuterSingleton =
             GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigElementType,(UObject *)pUVar2,
                           L"ERigElementType");
      }
      ElementTypeEnum = Z_Registration_Info_UEnum_ERigElementType.OuterSingleton;
      _Init_thread_footer(&_TSS0);
    }
    UEnum::GetNameByValue(ElementTypeEnum,(long64)&local_res8);
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_res8);
  }
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&param_2->Name);
  return param_1;
}

// operator<< @ 14a2e14e0

FArchive * __cdecl operator<<(FArchive *param_1,FRigElementWeight *param_2)

{
  float *pfVar1;
  float *pfVar2;
  
  pfVar1 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    param_2->Location = *pfVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &param_2->Rotation;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &param_2->Scale;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if (pfVar2 + 1 <= (float *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
  return param_1;
}

// operator() @ 14a2e5970

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
``URigHierarchy::GetKeysByPredicate'::__l2::<lambda_1>::operator()'::__l9::<lambda_1>::operator()
          (void *this,FRigBaseElement *param_1,bool *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  
  iVar2 = param_1->Index;
  lVar3 = *(longlong *)this;
  if ((iVar2 < 0) || (*(int *)(lVar3 + 0x48) <= iVar2)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar8 = *(longlong *)(lVar3 + 0x40);
  if (*(longlong *)(lVar3 + 0x40) == 0) {
    lVar8 = lVar3;
  }
  uVar7 = 1 << ((byte)iVar2 & 0x1f) &
          *(uint *)(lVar8 + (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4);
  *param_2 = uVar7 == 0;
  if (uVar7 == 0) {
    cVar6 = (**(code **)((longlong)this + 0x18))(*(undefined8 *)((longlong)this + 0x20),param_1);
    if (cVar6 != '\0') {
      (**(code **)((longlong)this + 8))(*(undefined8 *)((longlong)this + 0x10),param_1);
    }
    lVar3 = *(longlong *)this;
    iVar2 = param_1->Index;
    if ((iVar2 < 0) || (*(int *)(lVar3 + 0x48) <= iVar2)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar8 = *(longlong *)(lVar3 + 0x40);
    if (*(longlong *)(lVar3 + 0x40) == 0) {
      lVar8 = lVar3;
    }
    puVar1 = (uint *)(lVar8 + (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)iVar2 & 0x1f);
  }
  return;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14a2e8eb8

/* [thunk]:public: virtual void * __ptr64 __cdecl UAdditiveControlRig::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAdditiveControlRig::_vector_deleting_destructor__adjustor_40__
          (UAdditiveControlRig *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAdditiveControlRig *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{656}' @ 14a2e8ec8

/* [thunk]:public: virtual void * __ptr64 __cdecl UAdditiveControlRig::`vector deleting
   destructor'`adjustor{656}' (unsigned int) __ptr64 */

void * __thiscall
UAdditiveControlRig::_vector_deleting_destructor__adjustor_656__
          (UAdditiveControlRig *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAdditiveControlRig *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{664}' @ 14a2e8edc

/* [thunk]:public: virtual void * __ptr64 __cdecl UAdditiveControlRig::`vector deleting
   destructor'`adjustor{664}' (unsigned int) __ptr64 */

void * __thiscall
UAdditiveControlRig::_vector_deleting_destructor__adjustor_664__
          (UAdditiveControlRig *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAdditiveControlRig *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{672}' @ 14a2e8ef0

/* [thunk]:public: virtual void * __ptr64 __cdecl UAdditiveControlRig::`vector deleting
   destructor'`adjustor{672}' (unsigned int) __ptr64 */

void * __thiscall
UAdditiveControlRig::_vector_deleting_destructor__adjustor_672__
          (UAdditiveControlRig *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAdditiveControlRig *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14a2e8f04

/* [thunk]:public: virtual void * __ptr64 __cdecl UFKControlRig::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UFKControlRig::_vector_deleting_destructor__adjustor_40__(UFKControlRig *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UFKControlRig *)&this[-1].InitializationOptions,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{656}' @ 14a2e8f14

/* [thunk]:public: virtual void * __ptr64 __cdecl UFKControlRig::`vector deleting
   destructor'`adjustor{656}' (unsigned int) __ptr64 */

void * __thiscall
UFKControlRig::_vector_deleting_destructor__adjustor_656__(UFKControlRig *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UFKControlRig *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{664}' @ 14a2e8f28

/* [thunk]:public: virtual void * __ptr64 __cdecl UFKControlRig::`vector deleting
   destructor'`adjustor{664}' (unsigned int) __ptr64 */

void * __thiscall
UFKControlRig::_vector_deleting_destructor__adjustor_664__(UFKControlRig *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UFKControlRig *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{672}' @ 14a2e8f3c

/* [thunk]:public: virtual void * __ptr64 __cdecl UFKControlRig::`vector deleting
   destructor'`adjustor{672}' (unsigned int) __ptr64 */

void * __thiscall
UFKControlRig::_vector_deleting_destructor__adjustor_672__(UFKControlRig *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UFKControlRig *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14a2e8f50

void * __thiscall
IBaseDelegateInstance<UE::Math::TTransform<double>___cdecl(FRigVMExecuteContext_const_*,FRigElementKey_const_&,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<UE::Math::TTransform<double>___cdecl(FRigVMExecuteContext_const_*,FRigElementKey_const_&,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e8f80

void * __thiscall
TBaseUObjectMethodDelegateInstance<1,URigHierarchyController_const_,void___cdecl(enum_ERigHierarchyNotification,URigHierarchy_*,FRigNotificationSubject_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e8fb0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,URigHierarchy,UE::Math::TTransform<double>___cdecl(FRigVMExecuteContext_const_*,FRigElementKey_const_&,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,URigHierarchy,UE::Math::TTransform<double>___cdecl(FRigVMExecuteContext_const_*,FRigElementKey_const_&,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e8fe0

void * __thiscall
TCommonDelegateInstanceState<UE::Math::TTransform<double>___cdecl(FRigVMExecuteContext_const_*,FRigElementKey_const_&,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<UE::Math::TTransform<double>___cdecl(FRigVMExecuteContext_const_*,FRigElementKey_const_&,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e9010

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(FRigElementResolveResult_&),0,0>
::_scalar_deleting_destructor_
          (TFunction_OwnedObject<void_(__cdecl*)(FRigElementResolveResult_&),0,0> *this,uint param_1
          )

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEAUFRigElementResolveResult___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e9050

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(int,URigHierarchy::FMetadataStorage_*),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<void_(__cdecl*)(int,URigHierarchy::FMetadataStorage_*),0,0> *this,
          uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXHPEAUFMetadataStorage_URigHierarchy___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e9090

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`URigHierarchy::SendEvent'::__l8::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<`URigHierarchy::SendEvent'::`8'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)((longlong)this + 0x18),
             *(int *)((longlong)this + 0x20));
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e9100

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigRuleManager::FilterInvalidModules'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularRigRuleManager::FilterInvalidModules'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e9140

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigRuleManager::FindMatches'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularRigRuleManager::FindMatches'::`2'::<lambda_1>,0,0>::_vftable_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e9180

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetRootElements'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__GetRootElements_URigHierarchy__QEBA_AV__TArray_PEAUFRigBaseElement__V__TSizedDefaultAllocator__0CA_____XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e91c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetSafeNewComponentName'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URigHierarchy::GetSafeNewComponentName'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e9200

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetSafeNewName'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URigHierarchy::GetSafeNewName'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e9240

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UFKControlRig::SetControlOffsetsFromBoneInitials'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UFKControlRig::SetControlOffsetsFromBoneInitials'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e9280

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`URigHierarchy::SortKeys'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__SortKeys_URigHierarchy__QEBA_AV__TArray_UFRigElementKey__V__TSizedDefaultAllocator__0CA_____AEBV4__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e92d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetElementsOfType<FRigNullElement>'::__l5::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4____GetElementsOfType_UFRigNullElement___URigHierarchy__QEBA_AV__TArray_PEAUFRigNullElement__V__TSizedDefaultAllocator__0CA______N_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e9310

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetElementsOfType<FRigReferenceElement>'::__l5::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4____GetElementsOfType_UFRigReferenceElement___URigHierarchy__QEBA_AV__TArray_PEAUFRigReferenceElement__V__TSizedDefaultAllocator__0CA______N_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e9350

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetElementsOfType<FRigSocketElement>'::__l5::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4____GetElementsOfType_UFRigSocketElement___URigHierarchy__QEBA_AV__TArray_PEAUFRigSocketElement__V__TSizedDefaultAllocator__0CA______N_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e9390

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetFilteredElements<FRigBaseElement>'::__l5::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4____GetFilteredElements_UFRigBaseElement___URigHierarchy__QEBA_AV__TArray_PEAUFRigBaseElement__V__TSizedDefaultAllocator__0CA_____V__TFunction___A6A_NPEAUFRigBaseElement___Z___N_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e93f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetFilteredElements<FRigControlElement>'::__l5::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4____GetFilteredElements_UFRigControlElement___URigHierarchy__QEBA_AV__TArray_PEAUFRigControlElement__V__TSizedDefaultAllocator__0CA_____V__TFunction___A6A_NPEAUFRigControlElement___Z___N_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e9450

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::ShrinkElementStorage'::__l5::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URigHierarchy::ShrinkElementStorage'::`5'::<lambda_1>,0,0>::_vftable_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e9490

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::ResetPoseToInitial'::__l8::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URigHierarchy::ResetPoseToInitial'::`8'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e94d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``URigHierarchy::GetKeysByPredicate'::__l2::<lambda_1>::operator()'::__l9::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``URigHierarchy::GetKeysByPredicate'::`2'::<lambda_1>::operator()'::`9'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e9510

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetActiveChildren'::__l10::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URigHierarchy::GetActiveChildren'::`10'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e9550

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigRuleManager::FilterByConnectorRules'::__l13::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularRigRuleManager::FilterByConnectorRules'::`13'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e9590

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::EnsureCacheValidityImpl'::__l2::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URigHierarchy::EnsureCacheValidityImpl'::`2'::<lambda_2>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e95d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetSafeNewDisplayName'::__l2::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URigHierarchy::GetSafeNewDisplayName'::`2'::<lambda_2>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e9610

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::SortElementStorage'::__l2::<lambda_2>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URigHierarchy::SortElementStorage'::`2'::<lambda_2>,0,1>::_vftable_;
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e9670

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetAnimationChannels'::__l8::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URigHierarchy::GetAnimationChannels'::`8'::<lambda_2>,0,0>::_vftable_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e96b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetActiveChildren'::__l12::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URigHierarchy::GetActiveChildren'::`12'::<lambda_2>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e96f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::SortElementStorage'::__l2::<lambda_3>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URigHierarchy::SortElementStorage'::`2'::<lambda_3>,0,1>::_vftable_;
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e9750

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UFKControlRig::Execute_Internal'::__l9::<lambda_3>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UFKControlRig::Execute_Internal'::`9'::<lambda_3>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e9790

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::SortElementStorage'::__l2::<lambda_4>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URigHierarchy::SortElementStorage'::`2'::<lambda_4>,0,1>::_vftable_;
  if (*(void **)((longlong)this + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x30));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e97f0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FRigBone,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FRigBone,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x180);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e9830

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FRigControl,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FRigControl,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x370);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e9870

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FRigCurve,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FRigCurve,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e98b0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FRigSpace,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FRigSpace,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e98f0

void * __thiscall
UE::ControlRig::FControlRigCommandChange::_scalar_deleting_destructor_
          (FControlRigCommandChange *this,uint param_1)

{
  *this = (FControlRigCommandChange)&___7FChange__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e9930

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void * __thiscall
FControlRigExecuteContext::_scalar_deleting_destructor_
          (FControlRigExecuteContext *this,uint param_1)

{
  ~FControlRigExecuteContext(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x250);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e9970

void * __thiscall
UE::ControlRig::FElementSelectionCommand::_scalar_deleting_destructor_
          (FElementSelectionCommand *this,uint param_1)

{
  ForElementType<UE::ControlRig::FElementSelectionData> FVar1;
  
  FVar1 = (this->Changes).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<UE::ControlRig::FElementSelectionData>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  this->_padding_ = (longlong)&___7FChange__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e99c0

void * __thiscall
`FRigConnectionRuleStash::Get'::__l2::FErrorPipe::_scalar_deleting_destructor_
          (void *this,uint param_1)

{
  FOutputDevice::~FOutputDevice(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e9a00

void * __thiscall FRigBone::_scalar_deleting_destructor_(FRigBone *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &___7FRigBone__6B_;
  pFVar1 = (this->Dependents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined ***)this = &___7FRigElement__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e9a60

void * __thiscall FRigBoneElement::_scalar_deleting_destructor_(FRigBoneElement *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FRigSingleParentElement__6B_;
  FRigTransformElement::~FRigTransformElement((FRigTransformElement *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e9ab0

void * __thiscall
FRigConnectionRule::_scalar_deleting_destructor_(FRigConnectionRule *this,uint param_1)

{
  *this = (FRigConnectionRule)&___7FRigConnectionRule__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e9af0

void * __thiscall
FRigConnectorElement::_scalar_deleting_destructor_(FRigConnectorElement *this,uint param_1)

{
  ~FRigConnectorElement(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e9b30

void * __thiscall FRigControl::_scalar_deleting_destructor_(FRigControl *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FRigControl__6B_;
  pFVar1 = (this->Dependents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FRigElement__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x360);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e9b90

void * __thiscall FRigCurve::_scalar_deleting_destructor_(FRigCurve *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FRigElement__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e9bd0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void * __thiscall
FRigCurveElement::_scalar_deleting_destructor_(FRigCurveElement *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FRigBaseElement__6B_;
  if ((URigHierarchy *)this->_padding_ != (URigHierarchy *)0x0) {
    URigHierarchy::RemoveAllMetadataForElement
              ((URigHierarchy *)this->_padding_,(FRigBaseElement *)this);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e9c40

void * __thiscall
FRigDependenciesProviderForControlRig::_scalar_deleting_destructor_
          (FRigDependenciesProviderForControlRig *this,uint param_1)

{
  *(undefined4 *)&this->field_0xc0 = 0;
  if (*(void **)&this->field_0xb8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb8);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x78);
  *(undefined4 *)&this->field_0x70 = 0;
  if (*(void **)&this->field_0x68 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x68);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x28);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e9cd0

void * __thiscall
FRigDependenciesProviderForVM::_scalar_deleting_destructor_
          (FRigDependenciesProviderForVM *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedReverseDependencies).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedReverseDependencies).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedReverseDependencies);
  *(undefined4 *)&(this->CachedDependencies).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedDependencies).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedDependencies);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e9d60

void * __thiscall FRigElement::_scalar_deleting_destructor_(FRigElement *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FRigElement__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e9da0

void * __thiscall
FRigHierarchyContainerImportErrorContext::_scalar_deleting_destructor_
          (FRigHierarchyContainerImportErrorContext *this,uint param_1)

{
  FOutputDevice::~FOutputDevice((FOutputDevice *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e9de0

void * __thiscall
FRigHierarchyImportErrorContext::_scalar_deleting_destructor_
          (FRigHierarchyImportErrorContext *this,uint param_1)

{
  FOutputDevice::~FOutputDevice((FOutputDevice *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e9e20

void * __thiscall
FRigHierarchyMemoryReader::_scalar_deleting_destructor_
          (FRigHierarchyMemoryReader *this,uint param_1)

{
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e9e60

void * __thiscall
FRigHierarchyMemoryWriter::_scalar_deleting_destructor_
          (FRigHierarchyMemoryWriter *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->NameToIndex).field_0x48 = 0;
  pvVar1 = *(void **)&(this->NameToIndex).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NameToIndex);
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e9ed0

void * __thiscall FRigNullElement::_scalar_deleting_destructor_(FRigNullElement *this,uint param_1)

{
  *(undefined ***)this = &___7FRigNullElement__6B_;
  FRigMultiParentElement::~FRigMultiParentElement((FRigMultiParentElement *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x230);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e9f20

void * __thiscall
FRigReferenceElement::_scalar_deleting_destructor_(FRigReferenceElement *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FRigReferenceElement__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->GetWorldTransformDelegate);
  this->_padding_ = (longlong)&___7FRigSingleParentElement__6B_;
  FRigTransformElement::~FRigTransformElement((FRigTransformElement *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e9f80

void * __thiscall
FRigSingleParentElement::_scalar_deleting_destructor_(FRigSingleParentElement *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FRigSingleParentElement__6B_;
  FRigTransformElement::~FRigTransformElement((FRigTransformElement *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x128);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2e9fd0

void * __thiscall
FRigSocketElement::_scalar_deleting_destructor_(FRigSocketElement *this,uint param_1)

{
  *(undefined ***)this = &___7FRigSingleParentElement__6B_;
  FRigTransformElement::~FRigTransformElement((FRigTransformElement *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x128);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2ea020

void * __thiscall FRigSpace::_scalar_deleting_destructor_(FRigSpace *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FRigElement__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2ea060

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void * __thiscall
FRigUnit_AddBoneTransform::_scalar_deleting_destructor_
          (FRigUnit_AddBoneTransform *this,uint param_1)

{
  *(undefined ***)this = &___7FRigVMStruct__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2ea0a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void * __thiscall
UAdditiveControlRig::_scalar_deleting_destructor_(UAdditiveControlRig *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__INodeMappingProviderInterface__;
  this->_padding_ = (longlong)&_vftable__for__IRigHierarchyProvider__;
  this->_padding_ = (longlong)&_vftable__for__IMeshDeformerProducer__;
  DestructItems<FRigUnit_AddBoneTransform,int>
            ((FRigUnit_AddBoneTransform *)(this->AddBoneRigUnits).AllocatorInstance.Data,
             (this->AddBoneRigUnits).ArrayNum);
  pFVar1 = (this->AddBoneRigUnits).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UControlRig::~UControlRig((UControlRig *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xc60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2ea160

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void * __thiscall UFKControlRig::_scalar_deleting_destructor_(UFKControlRig *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__INodeMappingProviderInterface__;
  this->_padding_ = (longlong)&_vftable__for__IRigHierarchyProvider__;
  this->_padding_ = (longlong)&_vftable__for__IMeshDeformerProducer__;
  pFVar1 = (this->InitializationOptions).CurveNames.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InitializationOptions).BoneNames.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IsControlActive).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UControlRig::~UControlRig((UControlRig *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xc90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2ea230

void * __thiscall
UModularRigRuleManager::_scalar_deleting_destructor_(UModularRigRuleManager *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UModularRigRuleManager__6B_;
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

// `scalar_deleting_destructor' @ 14a2ea290

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void * __thiscall URigHierarchy::_scalar_deleting_destructor_(URigHierarchy *this,uint param_1)

{
  ~URigHierarchy(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x640);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2ea2f0

void * __thiscall
URigHierarchyController::_scalar_deleting_destructor_(URigHierarchyController *this,uint param_1)

{
  longlong *plVar1;
  void *pvVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7URigHierarchyController__6B_;
  if (*(longlong *)&this->LogFunction != 0) {
    plVar1 = *(longlong **)&(this->LogFunction).field_0x28;
    plVar3 = (longlong *)&(this->LogFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ModifiedEvent).field_0x8,*(int *)&(this->ModifiedEvent).field_0x10);
  pvVar2 = *(void **)&(this->ModifiedEvent).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ModifiedEvent);
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

// `scalar_deleting_destructor' @ 14a2ea3a0

void * __thiscall
URigHierarchyProvider::_scalar_deleting_destructor_(URigHierarchyProvider *this,uint param_1)

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

// CPPTypeFromObject @ 14a2f3cd0

FString * __cdecl
RigVMTypeUtils::CPPTypeFromObject
          (FString *__return_storage_ptr__,UObject *param_1,EClassArgType param_2)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  UClass *pUVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  int iVar8;
  FName local_res10;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if (param_1 == (UObject *)0x0) {
LAB_14a2f3e40:
    if (param_1 != (UObject *)0x0) {
      pUVar5 = Z_Construct_UClass_UScriptStruct_NoRegister();
      lVar2 = *(longlong *)&param_1->field_0x10;
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        GetUniqueStructTypeName(__return_storage_ptr__,(UScriptStruct *)param_1);
        return __return_storage_ptr__;
      }
      if (param_1 != (UObject *)0x0) {
        pUVar5 = Z_Construct_UClass_UEnum_NoRegister();
        iVar1 = (int)pUVar5->_padding_;
        if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar5->_padding_)) {
          ::FString::FString(__return_storage_ptr__,(FString *)&param_1[1].field_0x8);
          if (1 < (__return_storage_ptr__->Data).ArrayNum) {
            return __return_storage_ptr__;
          }
          pFVar6 = UObjectBaseUtility::GetPathName
                             ((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
          iVar8 = 0;
          iVar1 = (pFVar6->Data).ArrayNum;
          if (iVar1 == 0) {
            pwVar7 = L"";
          }
          else {
            pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
            iVar8 = iVar1 + -1;
          }
          FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar7);
          local_res10.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
          local_res10.Number = *(uint *)&param_1->field_0x1c;
          ::FName::ToString(&local_res10,&local_38);
          ::FString::PrintfImpl(&local_48,L"EUserDefinedEnum_%s_%08x");
          if (__return_storage_ptr__ != &local_48) {
            pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
            if (pFVar3 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar3);
            }
            (__return_storage_ptr__->Data).AllocatorInstance.Data =
                 local_48.Data.AllocatorInstance.Data;
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
          goto LAB_14a2f3f86;
        }
      }
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  else {
    pUVar5 = Z_Construct_UClass_UClass_NoRegister();
    lVar2 = *(longlong *)&param_1->field_0x10;
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) goto LAB_14a2f3e40;
    if (param_2 == AsClass) {
      local_res10.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
      local_res10.Number = *(uint *)&param_1->field_0x1c;
      ::FName::ToString(&local_res10,&local_38);
      (**(code **)(*(longlong *)param_1 + 0x318))(param_1);
      ::FString::PrintfImpl(__return_storage_ptr__,L"TSubclassOf<%s%s>");
      local_28.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    }
    else {
      pUVar5 = Z_Construct_UClass_UInterface_NoRegister();
      if (pUVar5 != (UClass *)0x0) {
        iVar1 = (int)pUVar5->_padding_;
        if ((*(int *)&param_1[1].field_0x10 < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)&param_1[1].field_0x8 + (longlong)iVar1 * 8)
            != &pUVar5->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          local_res10.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
          local_res10.Number = *(uint *)&param_1->field_0x1c;
          ::FName::ToString(&local_res10,&local_38);
          ::FString::PrintfImpl(__return_storage_ptr__,L"TScriptInterface<%s%s>");
          local_28.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
          goto LAB_14a2f3f86;
        }
      }
      local_res10.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
      local_res10.Number = *(uint *)&param_1->field_0x1c;
      ::FName::ToString(&local_res10,&local_38);
      (**(code **)(*(longlong *)param_1 + 0x318))(param_1);
      ::FString::PrintfImpl(__return_storage_ptr__,L"TObjectPtr<%s%s>");
      local_28.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    }
LAB_14a2f3f86:
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// EmptyLinkFunctionForGeneratedCodeAdditiveControlRig @ 14a300fb0

void __cdecl EmptyLinkFunctionForGeneratedCodeAdditiveControlRig(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimationHierarchy @ 14a300fc0

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimationHierarchy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeFKControlRig @ 14a300fd0

void __cdecl EmptyLinkFunctionForGeneratedCodeFKControlRig(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeModularRigRuleManager @ 14a300fe0

void __cdecl EmptyLinkFunctionForGeneratedCodeModularRigRuleManager(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigBoneHierarchy @ 14a300ff0

void __cdecl EmptyLinkFunctionForGeneratedCodeRigBoneHierarchy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigConnectionRules @ 14a301000

void __cdecl EmptyLinkFunctionForGeneratedCodeRigConnectionRules(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigControlHierarchy @ 14a301010

void __cdecl EmptyLinkFunctionForGeneratedCodeRigControlHierarchy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigCurveContainer @ 14a301020

void __cdecl EmptyLinkFunctionForGeneratedCodeRigCurveContainer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigHierarchy @ 14a301030

void __cdecl EmptyLinkFunctionForGeneratedCodeRigHierarchy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigHierarchyCache @ 14a301040

void __cdecl EmptyLinkFunctionForGeneratedCodeRigHierarchyCache(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigHierarchyComponents @ 14a301050

void __cdecl EmptyLinkFunctionForGeneratedCodeRigHierarchyComponents(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigHierarchyContainer @ 14a301060

void __cdecl EmptyLinkFunctionForGeneratedCodeRigHierarchyContainer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigHierarchyController @ 14a301070

void __cdecl EmptyLinkFunctionForGeneratedCodeRigHierarchyController(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigHierarchyDefines @ 14a301080

void __cdecl EmptyLinkFunctionForGeneratedCodeRigHierarchyDefines(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigHierarchyElements @ 14a301090

void __cdecl EmptyLinkFunctionForGeneratedCodeRigHierarchyElements(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigHierarchyMetadata @ 14a3010a0

void __cdecl EmptyLinkFunctionForGeneratedCodeRigHierarchyMetadata(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigHierarchyPose @ 14a3010b0

void __cdecl EmptyLinkFunctionForGeneratedCodeRigHierarchyPose(void)

{
  return;
}

// FRigHierarchyModifiedDynamicEvent_DelegateWrapper @ 14a303c40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigHierarchyModifiedDynamicEvent_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          ERigHierarchyNotification param_2,URigHierarchy *param_3,FRigElementKey *param_4)

{
  ERigHierarchyNotification local_28 [8];
  URigHierarchy *local_20;
  undefined8 local_18;
  uint local_10;
  
  local_18._0_1_ = param_4->Type;
  local_18._1_3_ = *(undefined3 *)&param_4->field_0x1;
  local_18._4_4_ = (param_4->Name).ComparisonIndex;
  local_10 = (param_4->Name).Number;
  local_28[0] = param_2;
  local_20 = param_3;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_28);
  return;
}

// FindObjectGlobally @ 14a305fd0

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
LAB_14a3061bc:
    if (!param_2) goto LAB_14a306315;
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
    if (!bVar2) goto LAB_14a306315;
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
LAB_14a306283:
          sVar5 = wcslen((wchar_t *)local_b8);
          iVar4 = (int)sVar5;
        }
        else {
          local_b8 = local_e0.Data.AllocatorInstance.Data;
          if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          goto LAB_14a306283;
        }
        iStack_b0 = iVar4;
        pUVar6 = Z_Construct_UClass_UField_NoRegister();
        local_48._12_4_ = uStack_ac;
        local_48.Size = iStack_b0;
        local_48.DataPtr = (wchar_t *)local_b8;
        pUVar7 = StaticFindObject(pUVar6,(UObject *)pUVar10,&local_48,None);
        if (pUVar7 != (UObject *)0x0) goto LAB_14a30630b;
      }
    }
    if (local_e0.Data.ArrayNum == 0) {
      local_a8 = (FScriptContainerElement *)0x15060d16c;
LAB_14a3062d0:
      sVar5 = wcslen((wchar_t *)local_a8);
      iVar12 = (int)sVar5;
    }
    else {
      local_a8 = local_e0.Data.AllocatorInstance.Data;
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_14a3062d0;
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
    if (*(wchar_t *)local_128.Data.AllocatorInstance.Data != L'E') goto LAB_14a3061bc;
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
LAB_14a30619e:
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      goto LAB_14a3061bc;
    }
    iVar3 = local_118.Data.ArrayNum + -1;
    if (local_118.Data.ArrayNum == 0) {
      iVar3 = iVar4;
    }
    ::FString::AssignRange(&local_128,(wchar_t *)local_118.Data.AllocatorInstance.Data,iVar3);
    if (local_128.Data.ArrayNum == 0) {
      local_c8 = (FScriptContainerElement *)0x15060d16c;
LAB_14a30614d:
      sVar5 = wcslen((wchar_t *)local_c8);
      iStack_c0 = (int)sVar5;
    }
    else {
      local_c8 = local_128.Data.AllocatorInstance.Data;
      iStack_c0 = iVar4;
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_14a30614d;
    }
    pUVar6 = Z_Construct_UClass_UField_NoRegister();
    local_68._12_4_ = uStack_bc;
    local_68.Size = iStack_c0;
    local_68.DataPtr = (wchar_t *)local_c8;
    pUVar7 = StaticFindFirstObject(pUVar6,&local_68,NativeFirst,NoLogging,(wchar_t *)0x0);
    if (pUVar7 == (UObject *)0x0) goto LAB_14a30619e;
    local_e0.Data.AllocatorInstance.Data = local_118.Data.AllocatorInstance.Data;
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      local_e0.Data.AllocatorInstance.Data = local_118.Data.AllocatorInstance.Data;
    }
  }
LAB_14a30630b:
  pUVar8 = pUVar7;
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
LAB_14a306315:
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  return pUVar8;
}

// GetTypeHash @ 14a31afc0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

uint __cdecl GetTypeHash(FRigComponentKey *param_1)

{
  FName FVar1;
  FName FVar2;
  uint uVar3;
  uint uVar4;
  
  FVar1 = param_1->Name;
  uVar3 = GetTypeHash(FVar1.ComparisonIndex.Value);
  FVar2 = (param_1->ElementKey).Name;
  uVar4 = GetTypeHash(FVar2.ComparisonIndex.Value);
  return (uVar3 + FVar1.Number) * 0xf + (uVar4 + FVar2.Number) * 10 +
         (uint)(param_1->ElementKey).Type;
}

// GetTypeHash @ 14a31b020

uint __cdecl GetTypeHash(FRigConnectionRuleStash *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  wchar_t *pwVar5;
  uint uVar6;
  wchar_t *pwVar7;
  uint uVar8;
  
  iVar1 = (param_1->ExportedText).Data.ArrayNum;
  pwVar7 = L"";
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar5 = L"";
    iVar4 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(param_1->ExportedText).Data.AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  iVar1 = (param_1->ScriptStructPath).Data.ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  else {
    pwVar7 = (wchar_t *)(param_1->ScriptStructPath).Data.AllocatorInstance.Data;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar7);
  uVar8 = uVar3 - uVar2 ^ uVar2 >> 0xd;
  uVar3 = (-0x61c88647 - uVar8) - uVar2 ^ uVar8 << 8;
  uVar6 = (uVar2 - uVar3) - uVar8 ^ uVar3 >> 0xd;
  uVar8 = (uVar8 - uVar6) - uVar3 ^ uVar6 >> 0xc;
  uVar2 = (uVar3 - uVar8) - uVar6 ^ uVar8 << 0x10;
  uVar3 = (uVar6 - uVar2) - uVar8 ^ uVar2 >> 5;
  uVar6 = (uVar8 - uVar3) - uVar2 ^ uVar3 >> 3;
  uVar2 = (uVar2 - uVar6) - uVar3 ^ uVar6 << 10;
  return (uVar3 - uVar2) - uVar6 ^ uVar2 >> 0xf;
}

// GetTypeHash @ 14a31b110

uint __cdecl GetTypeHash(FRigConnectorSettings *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  FRigConnectionRuleStash *pFVar7;
  FRigConnectionRuleStash *pFVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  
  iVar2 = (param_1->Rules).ArrayNum;
  uVar6 = (ulonglong)iVar2;
  pFVar8 = (FRigConnectionRuleStash *)(param_1->Rules).AllocatorInstance.Data;
  pFVar7 = pFVar8 + uVar6;
  while( true ) {
    if ((param_1->Rules).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FRigConnectionRuleStash_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    iVar3 = (int)uVar6;
    if (pFVar8 == pFVar7) break;
    uVar1 = GetTypeHash(pFVar8);
    uVar4 = iVar3 - uVar1 ^ uVar1 >> 0xd;
    uVar9 = (-0x61c88647 - uVar4) - uVar1 ^ uVar4 << 8;
    uVar5 = (uVar1 - uVar9) - uVar4 ^ uVar9 >> 0xd;
    uVar1 = (uVar4 - uVar5) - uVar9 ^ uVar5 >> 0xc;
    uVar9 = (uVar9 - uVar1) - uVar5 ^ uVar1 << 0x10;
    uVar4 = (uVar5 - uVar9) - uVar1 ^ uVar9 >> 5;
    uVar1 = (uVar1 - uVar4) - uVar9 ^ uVar4 >> 3;
    uVar5 = (uVar9 - uVar1) - uVar4 ^ uVar1 << 10;
    uVar6 = (ulonglong)((uVar4 - uVar5) - uVar1 ^ uVar5 >> 0xf);
    pFVar8 = pFVar8 + 1;
  }
  uVar4 = (uint)param_1->Type - iVar3 ^ (uint)(uVar6 >> 0xd) & 0x7ffff;
  uVar1 = (-0x61c88647 - uVar4) - iVar3 ^ uVar4 << 8;
  uVar5 = (iVar3 - uVar1) - uVar4 ^ uVar1 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar1 ^ uVar5 >> 0xc;
  uVar1 = (uVar1 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar1) - uVar4 ^ uVar1 >> 5;
  uVar4 = (uVar4 - uVar5) - uVar1 ^ uVar5 >> 3;
  uVar1 = (uVar1 - uVar4) - uVar5 ^ uVar4 << 10;
  uVar1 = (uVar5 - uVar1) - uVar4 ^ uVar1 >> 0xf;
  iVar2 = uVar1 - param_1->bOptional;
  uVar4 = iVar2 * 0x100 ^ 0x9e3779b9 - uVar1;
  uVar5 = (param_1->bOptional - uVar4) - iVar2 ^ uVar4 >> 0xd;
  uVar1 = (iVar2 - uVar5) - uVar4 ^ uVar5 >> 0xc;
  uVar4 = (uVar4 - uVar1) - uVar5 ^ uVar1 << 0x10;
  uVar5 = (uVar5 - uVar1) - uVar4 ^ uVar4 >> 5;
  uVar1 = (uVar1 - uVar5) - uVar4 ^ uVar5 >> 3;
  uVar4 = (uVar4 - uVar1) - uVar5 ^ uVar1 << 10;
  uVar1 = (uVar5 - uVar4) - uVar1 ^ uVar4 >> 0xf;
  iVar2 = uVar1 - param_1->bIsArray;
  uVar4 = iVar2 * 0x100 ^ 0x9e3779b9 - uVar1;
  uVar5 = (param_1->bIsArray - uVar4) - iVar2 ^ uVar4 >> 0xd;
  uVar1 = (iVar2 - uVar5) - uVar4 ^ uVar5 >> 0xc;
  uVar4 = (uVar4 - uVar1) - uVar5 ^ uVar1 << 0x10;
  uVar5 = (uVar5 - uVar1) - uVar4 ^ uVar4 >> 5;
  uVar1 = (uVar1 - uVar5) - uVar4 ^ uVar5 >> 3;
  uVar4 = (uVar4 - uVar1) - uVar5 ^ uVar1 << 10;
  uVar1 = (uVar5 - uVar4) - uVar1 ^ uVar4 >> 0xf;
  iVar2 = uVar1 - param_1->bPostConstruction;
  uVar4 = iVar2 * 0x100 ^ 0x9e3779b9 - uVar1;
  uVar5 = (param_1->bPostConstruction - uVar4) - iVar2 ^ uVar4 >> 0xd;
  uVar1 = (iVar2 - uVar5) - uVar4 ^ uVar5 >> 0xc;
  uVar4 = (uVar4 - uVar1) - uVar5 ^ uVar1 << 0x10;
  uVar5 = (uVar5 - uVar1) - uVar4 ^ uVar4 >> 5;
  uVar1 = (uVar1 - uVar5) - uVar4 ^ uVar5 >> 3;
  uVar4 = (uVar4 - uVar1) - uVar5 ^ uVar1 << 10;
  return (uVar5 - uVar4) - uVar1 ^ uVar4 >> 0xf;
}

// GetTypeHash @ 14a31b3d0

uint __cdecl GetTypeHash(FRigControlSettings *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement FVar2;
  FName FVar3;
  UEnum *pUVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  
  FVar3 = param_1->DisplayName;
  iVar8 = (uint)param_1->ControlType - (uint)param_1->AnimationType;
  uVar6 = 0x9e3779b9 - param_1->ControlType ^ iVar8 * 0x100;
  uVar5 = (param_1->AnimationType - uVar6) - iVar8 ^ uVar6 >> 0xd;
  uVar9 = (iVar8 - uVar5) - uVar6 ^ uVar5 >> 0xc;
  uVar7 = (uVar6 - uVar9) - uVar5 ^ uVar9 << 0x10;
  uVar6 = (uVar5 - uVar7) - uVar9 ^ uVar7 >> 5;
  uVar9 = (uVar9 - uVar6) - uVar7 ^ uVar6 >> 3;
  uVar7 = (uVar7 - uVar9) - uVar6 ^ uVar9 << 10;
  uVar5 = GetTypeHash(FVar3.ComparisonIndex.Value);
  uVar5 = uVar5 + FVar3.Number;
  uVar7 = ((uVar6 - uVar7) - uVar9 ^ uVar7 >> 0xf) - uVar5 ^ uVar5 >> 0xd;
  uVar6 = (-0x61c88647 - uVar7) - uVar5 ^ uVar7 << 8;
  uVar9 = (uVar5 - uVar6) - uVar7 ^ uVar6 >> 0xd;
  uVar7 = (uVar7 - uVar9) - uVar6 ^ uVar9 >> 0xc;
  uVar5 = (uVar6 - uVar7) - uVar9 ^ uVar7 << 0x10;
  uVar9 = (uVar9 - uVar5) - uVar7 ^ uVar5 >> 5;
  uVar6 = (uVar7 - uVar9) - uVar5 ^ uVar9 >> 3;
  uVar5 = (uVar5 - uVar6) - uVar9 ^ uVar6 << 10;
  uVar5 = (uVar9 - uVar5) - uVar6 ^ uVar5 >> 0xf;
  iVar8 = uVar5 - param_1->PrimaryAxis;
  uVar6 = 0x9e3779b9 - uVar5 ^ iVar8 * 0x100;
  uVar7 = (param_1->PrimaryAxis - uVar6) - iVar8 ^ uVar6 >> 0xd;
  uVar5 = (iVar8 - uVar7) - uVar6 ^ uVar7 >> 0xc;
  uVar6 = (uVar6 - uVar5) - uVar7 ^ uVar5 << 0x10;
  uVar7 = (uVar7 - uVar6) - uVar5 ^ uVar6 >> 5;
  uVar5 = (uVar5 - uVar7) - uVar6 ^ uVar7 >> 3;
  uVar6 = (uVar6 - uVar5) - uVar7 ^ uVar5 << 10;
  uVar5 = (uVar7 - uVar6) - uVar5 ^ uVar6 >> 0xf;
  iVar8 = uVar5 - param_1->bIsCurve;
  uVar6 = 0x9e3779b9 - uVar5 ^ iVar8 * 0x100;
  uVar7 = (param_1->bIsCurve - uVar6) - iVar8 ^ uVar6 >> 0xd;
  uVar5 = (iVar8 - uVar7) - uVar6 ^ uVar7 >> 0xc;
  uVar6 = (uVar6 - uVar5) - uVar7 ^ uVar5 << 0x10;
  uVar7 = (uVar7 - uVar6) - uVar5 ^ uVar6 >> 5;
  uVar5 = (uVar5 - uVar7) - uVar6 ^ uVar7 >> 3;
  uVar6 = (uVar6 - uVar5) - uVar7 ^ uVar5 << 10;
  uVar5 = (uVar7 - uVar6) - uVar5 ^ uVar6 >> 0xf;
  iVar8 = uVar5 - param_1->bDrawLimits;
  uVar6 = 0x9e3779b9 - uVar5 ^ iVar8 * 0x100;
  uVar7 = (param_1->bDrawLimits - uVar6) - iVar8 ^ uVar6 >> 0xd;
  uVar5 = (iVar8 - uVar7) - uVar6 ^ uVar7 >> 0xc;
  uVar6 = (uVar6 - uVar5) - uVar7 ^ uVar5 << 0x10;
  uVar7 = (uVar7 - uVar6) - uVar5 ^ uVar6 >> 5;
  uVar5 = (uVar5 - uVar7) - uVar6 ^ uVar7 >> 3;
  uVar6 = (uVar6 - uVar7) - uVar5 ^ uVar5 << 10;
  uVar5 = (uVar7 - uVar6) - uVar5 ^ uVar6 >> 0xf;
  iVar8 = uVar5 - param_1->bShapeVisible;
  uVar6 = 0x9e3779b9 - uVar5 ^ iVar8 * 0x100;
  uVar7 = (param_1->bShapeVisible - uVar6) - iVar8 ^ uVar6 >> 0xd;
  uVar5 = (iVar8 - uVar7) - uVar6 ^ uVar7 >> 0xc;
  uVar6 = (uVar6 - uVar5) - uVar7 ^ uVar5 << 0x10;
  FVar3 = param_1->ShapeName;
  uVar7 = (uVar7 - uVar5) - uVar6 ^ uVar6 >> 5;
  uVar5 = (uVar5 - uVar7) - uVar6 ^ uVar7 >> 3;
  uVar6 = (uVar6 - uVar5) - uVar7 ^ uVar5 << 10;
  uVar5 = (uVar7 - uVar6) - uVar5 ^ uVar6 >> 0xf;
  iVar8 = uVar5 - param_1->ShapeVisibility;
  uVar6 = 0x9e3779b9 - uVar5 ^ iVar8 * 0x100;
  uVar5 = (param_1->ShapeVisibility - uVar6) - iVar8 ^ uVar6 >> 0xd;
  uVar9 = (iVar8 - uVar5) - uVar6 ^ uVar5 >> 0xc;
  uVar7 = (uVar6 - uVar9) - uVar5 ^ uVar9 << 0x10;
  uVar6 = (uVar5 - uVar9) - uVar7 ^ uVar7 >> 5;
  uVar9 = (uVar9 - uVar6) - uVar7 ^ uVar6 >> 3;
  uVar7 = (uVar7 - uVar9) - uVar6 ^ uVar9 << 10;
  uVar5 = GetTypeHash(FVar3.ComparisonIndex.Value);
  uVar5 = uVar5 + FVar3.Number;
  uVar7 = ((uVar6 - uVar7) - uVar9 ^ uVar7 >> 0xf) - uVar5 ^ uVar5 >> 0xd;
  uVar6 = (-0x61c88647 - uVar5) - uVar7 ^ uVar7 << 8;
  uVar9 = (uVar5 - uVar6) - uVar7 ^ uVar6 >> 0xd;
  uVar7 = (uVar7 - uVar9) - uVar6 ^ uVar9 >> 0xc;
  uVar5 = (uVar6 - uVar7) - uVar9 ^ uVar7 << 0x10;
  uVar9 = (uVar9 - uVar5) - uVar7 ^ uVar5 >> 5;
  uVar7 = (uVar7 - uVar9) - uVar5 ^ uVar9 >> 3;
  uVar6 = (uVar5 - uVar7) - uVar9 ^ uVar7 << 10;
  uVar5 = FCrc::MemCrc_DEPRECATED(&param_1->ShapeColor,0x10,0);
  uVar9 = ((uVar9 - uVar6) - uVar7 ^ uVar6 >> 0xf) - uVar5 ^ uVar5 >> 0xd;
  pUVar4 = (param_1->ControlEnum).field0_0x0.DebugPtr;
  uVar6 = (-0x61c88647 - uVar5) - uVar9 ^ uVar9 << 8;
  uVar7 = (uVar5 - uVar6) - uVar9 ^ uVar6 >> 0xd;
  uVar9 = (uVar9 - uVar7) - uVar6 ^ uVar7 >> 0xc;
  uVar5 = (uVar6 - uVar9) - uVar7 ^ uVar9 << 0x10;
  uVar7 = (uVar7 - uVar5) - uVar9 ^ uVar5 >> 5;
  uVar9 = (uVar9 - uVar7) - uVar5 ^ uVar7 >> 3;
  uVar6 = (uVar5 - uVar9) - uVar7 ^ uVar9 << 10;
  uVar5 = ((uint)((ulonglong)pUVar4 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar4 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  uVar7 = ((uVar7 - uVar6) - uVar9 ^ uVar6 >> 0xf) - uVar5 ^ uVar5 >> 0xd;
  uVar6 = (-0x61c88647 - uVar7) - uVar5 ^ uVar7 << 8;
  uVar9 = (uVar5 - uVar6) - uVar7 ^ uVar6 >> 0xd;
  uVar7 = (uVar7 - uVar9) - uVar6 ^ uVar9 >> 0xc;
  uVar5 = (uVar6 - uVar7) - uVar9 ^ uVar7 << 0x10;
  uVar9 = (uVar9 - uVar5) - uVar7 ^ uVar5 >> 5;
  uVar7 = (uVar7 - uVar9) - uVar5 ^ uVar9 >> 3;
  uVar6 = (uVar5 - uVar7) - uVar9 ^ uVar7 << 10;
  uVar5 = GetTypeHash(&param_1->DrivenControls);
  uVar7 = ((uVar9 - uVar6) - uVar7 ^ uVar6 >> 0xf) - uVar5 ^ uVar5 >> 0xd;
  uVar6 = (-0x61c88647 - uVar5) - uVar7 ^ uVar7 << 8;
  uVar9 = (uVar5 - uVar6) - uVar7 ^ uVar6 >> 0xd;
  uVar7 = (uVar7 - uVar9) - uVar6 ^ uVar9 >> 0xc;
  uVar5 = (uVar6 - uVar7) - uVar9 ^ uVar7 << 0x10;
  uVar9 = (uVar9 - uVar5) - uVar7 ^ uVar5 >> 5;
  uVar6 = (uVar7 - uVar9) - uVar5 ^ uVar9 >> 3;
  uVar5 = (uVar5 - uVar6) - uVar9 ^ uVar6 << 10;
  uVar5 = (uVar9 - uVar5) - uVar6 ^ uVar5 >> 0xf;
  iVar8 = uVar5 - param_1->bGroupWithParentControl;
  uVar6 = iVar8 * 0x100 ^ 0x9e3779b9 - uVar5;
  uVar7 = (param_1->bGroupWithParentControl - uVar6) - iVar8 ^ uVar6 >> 0xd;
  uVar5 = (iVar8 - uVar7) - uVar6 ^ uVar7 >> 0xc;
  uVar6 = (uVar6 - uVar5) - uVar7 ^ uVar5 << 0x10;
  uVar7 = (uVar7 - uVar5) - uVar6 ^ uVar6 >> 5;
  uVar5 = (uVar5 - uVar7) - uVar6 ^ uVar7 >> 3;
  uVar6 = (uVar6 - uVar5) - uVar7 ^ uVar5 << 10;
  uVar5 = (uVar7 - uVar6) - uVar5 ^ uVar6 >> 0xf;
  iVar8 = uVar5 - param_1->bRestrictSpaceSwitching;
  uVar7 = iVar8 * 0x100 ^ 0x9e3779b9 - uVar5;
  uVar9 = (param_1->bRestrictSpaceSwitching - uVar7) - iVar8 ^ uVar7 >> 0xd;
  uVar6 = (iVar8 - uVar9) - uVar7 ^ uVar9 >> 0xc;
  uVar5 = (param_1->FilteredChannels).ArrayNum;
  pFVar10 = (param_1->FilteredChannels).AllocatorInstance.Data;
  uVar7 = (uVar7 - uVar6) - uVar9 ^ uVar6 << 0x10;
  pFVar1 = pFVar10 + (int)uVar5;
  uVar9 = (uVar9 - uVar6) - uVar7 ^ uVar7 >> 5;
  uVar6 = (uVar6 - uVar9) - uVar7 ^ uVar9 >> 3;
  uVar7 = (uVar7 - uVar6) - uVar9 ^ uVar6 << 10;
  uVar9 = ((uVar9 - uVar7) - uVar6 ^ uVar7 >> 0xf) - uVar5 ^ uVar5 >> 0xd;
  uVar6 = (-0x61c88647 - uVar9) - uVar5 ^ uVar9 << 8;
  uVar7 = (uVar5 - uVar6) - uVar9 ^ uVar6 >> 0xd;
  uVar9 = (uVar9 - uVar7) - uVar6 ^ uVar7 >> 0xc;
  uVar6 = (uVar6 - uVar9) - uVar7 ^ uVar9 << 0x10;
  uVar7 = (uVar7 - uVar6) - uVar9 ^ uVar6 >> 5;
  uVar9 = (uVar9 - uVar7) - uVar6 ^ uVar7 >> 3;
  uVar6 = (uVar6 - uVar9) - uVar7 ^ uVar9 << 10;
  uVar6 = (uVar7 - uVar6) - uVar9 ^ uVar6 >> 0xf;
  while( true ) {
    if ((param_1->FilteredChannels).ArrayNum != uVar5) {
      `TCheckedPointerIterator<enum_ERigControlTransformChannel_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar1) break;
    FVar2 = *pFVar10;
    iVar8 = uVar6 - (byte)FVar2;
    uVar9 = iVar8 * 0x100 ^ 0x9e3779b9 - uVar6;
    uVar7 = (((uint)(byte)FVar2 + (uint)(byte)FVar2) - uVar9) - uVar6 ^ uVar9 >> 0xd;
    uVar6 = (iVar8 - uVar7) - uVar9 ^ uVar7 >> 0xc;
    uVar9 = (uVar9 - uVar6) - uVar7 ^ uVar6 << 0x10;
    uVar7 = (uVar7 - uVar6) - uVar9 ^ uVar9 >> 5;
    uVar6 = (uVar6 - uVar7) - uVar9 ^ uVar7 >> 3;
    uVar9 = (uVar9 - uVar6) - uVar7 ^ uVar6 << 10;
    uVar6 = (uVar7 - uVar9) - uVar6 ^ uVar9 >> 0xf;
    pFVar10 = pFVar10 + 1;
  }
  iVar8 = uVar6 - param_1->PreferredRotationOrder;
  uVar5 = iVar8 * 0x100 ^ 0x9e3779b9 - uVar6;
  uVar7 = (param_1->PreferredRotationOrder - uVar5) - iVar8 ^ uVar5 >> 0xd;
  uVar6 = (iVar8 - uVar7) - uVar5 ^ uVar7 >> 0xc;
  uVar5 = (uVar5 - uVar6) - uVar7 ^ uVar6 << 0x10;
  uVar7 = (uVar7 - uVar6) - uVar5 ^ uVar5 >> 5;
  uVar6 = (uVar6 - uVar7) - uVar5 ^ uVar7 >> 3;
  uVar5 = (uVar5 - uVar6) - uVar7 ^ uVar6 << 10;
  return (uVar7 - uVar5) - uVar6 ^ uVar5 >> 0xf;
}

// GetTypeHash @ 14a31bbe0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

uint __cdecl GetTypeHash(FRigHierarchyKey *param_1)

{
  FName FVar1;
  uint uVar2;
  
  if ((param_1->Element).bIsSet != false) {
    FVar1 = (param_1->Element).TypedValue.Name;
    uVar2 = GetTypeHash(FVar1.ComparisonIndex.Value);
    return (uint)(param_1->Element).TypedValue.Type + (uVar2 + FVar1.Number) * 10;
  }
  if ((param_1->Component).bIsSet != false) {
    uVar2 = GetTypeHash(&(param_1->Component).TypedValue);
    return uVar2;
  }
  return 0;
}

// GetTypeHash @ 14a31bc40

uint __cdecl GetTypeHash(FRigHierarchyRecord *param_1)

{
  FName FVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  FVar1 = param_1->Name;
  uVar2 = GetTypeHash(FVar1.ComparisonIndex.Value);
  uVar2 = uVar2 + FVar1.Number;
  uVar4 = param_1->Index - uVar2 ^ uVar2 >> 0xd;
  uVar3 = (-0x61c88647 - uVar2) - uVar4 ^ uVar4 << 8;
  uVar5 = (uVar2 - uVar3) - uVar4 ^ uVar3 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar3 ^ uVar5 >> 0xc;
  uVar2 = (uVar3 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar2) - uVar4 ^ uVar2 >> 5;
  uVar3 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 << 10;
  uVar4 = (uVar5 - uVar2) - uVar3 ^ uVar2 >> 0xf;
  uVar2 = param_1->Type - uVar4 ^ uVar4 >> 0xd;
  uVar3 = (-0x61c88647 - uVar2) - uVar4 ^ uVar2 << 8;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xd;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 0x10;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 10;
  return (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xf;
}

// GetTypeHash @ 14a31bd70

uint __cdecl GetTypeHash(TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  
  iVar2 = param_1->ArrayNum;
  pFVar8 = (param_1->AllocatorInstance).Data;
  if ((iVar2 < 0) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  pFVar1 = pFVar8 + (longlong)iVar2 * 0xc;
  uVar6 = iVar2 * 0x11 + 3;
  for (; pFVar8 != pFVar1; pFVar8 = pFVar8 + 0xc) {
    uVar3 = *(undefined8 *)(pFVar8 + 4);
    uVar7 = GetTypeHash((FNameEntryId)(uint)uVar3);
    uVar6 = (byte)*pFVar8 + uVar6 + (uVar7 + (int)((ulonglong)uVar3 >> 0x20)) * 10;
  }
  return uVar6;
}

// ObjectFromCPPType @ 14a333740

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
LAB_14a333b16:
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
      goto LAB_14a333b16;
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
      goto LAB_14a333b16;
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
          if (*(short *)local_a8.Data.AllocatorInstance.Data != 0x41) goto LAB_14a333c7a;
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
LAB_14a333c7a:
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
        goto LAB_14a333d4c;
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
LAB_14a333d4c:
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return pUVar8;
}

// RequiresCPPTypeObject @ 14a33f210

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

// Z_Construct_UClass_UAdditiveControlRig_NoRegister @ 14a35ea10

UClass * __cdecl Z_Construct_UClass_UAdditiveControlRig_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAdditiveControlRig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"AdditiveControlRig",
               &Z_Registration_Info_UClass_UAdditiveControlRig.InnerSingleton,
               UAdditiveControlRig::StaticRegisterNativesUAdditiveControlRig,0xc60,0x10,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UAdditiveControlRig>,
               InternalVTableHelperCtorCaller<UAdditiveControlRig>,local_res8,
               UControlRig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAdditiveControlRig.InnerSingleton;
}

// Z_Construct_UClass_UFKControlRig_NoRegister @ 14a35ead0

UClass * __cdecl Z_Construct_UClass_UFKControlRig_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFKControlRig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"FKControlRig",
               &Z_Registration_Info_UClass_UFKControlRig.InnerSingleton,
               UFKControlRig::StaticRegisterNativesUFKControlRig,0xc90,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UFKControlRig>,
               InternalVTableHelperCtorCaller<UFKControlRig>,local_res8,UControlRig::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFKControlRig.InnerSingleton;
}

// Z_Construct_UClass_URigHierarchyProvider_NoRegister @ 14a35eb90

UClass * __cdecl Z_Construct_UClass_URigHierarchyProvider_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URigHierarchyProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"RigHierarchyProvider",
               &Z_Registration_Info_UClass_URigHierarchyProvider.InnerSingleton,
               URigHierarchyProvider::StaticRegisterNativesURigHierarchyProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<URigHierarchyProvider>,
               InternalVTableHelperCtorCaller<URigHierarchyProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URigHierarchyProvider.InnerSingleton;
}

// Z_Construct_UEnum_ControlRig_EControlRigSetKey @ 14a35ec50

UEnum * __cdecl Z_Construct_UEnum_ControlRig_EControlRigSetKey(void)

{
  if (Z_Registration_Info_UEnum_EControlRigSetKey.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EControlRigSetKey.InnerSingleton,
               &Z_Construct_UEnum_ControlRig_EControlRigSetKey_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EControlRigSetKey.InnerSingleton;
}

// Z_Construct_UEnum_ControlRig_EElementNameDisplayMode @ 14a35ec90

UEnum * __cdecl Z_Construct_UEnum_ControlRig_EElementNameDisplayMode(void)

{
  if (Z_Registration_Info_UEnum_EElementNameDisplayMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EElementNameDisplayMode.InnerSingleton,
               &Z_Construct_UEnum_ControlRig_EElementNameDisplayMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EElementNameDisplayMode.InnerSingleton;
}

// Z_Construct_UEnum_ControlRig_ERigEvent @ 14a35ecd0

UEnum * __cdecl Z_Construct_UEnum_ControlRig_ERigEvent(void)

{
  if (Z_Registration_Info_UEnum_ERigEvent.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERigEvent.InnerSingleton,
               &Z_Construct_UEnum_ControlRig_ERigEvent_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERigEvent.InnerSingleton;
}

// Z_Construct_UEnum_ControlRig_ERigTransformStorageType @ 14a35ed10

UEnum * __cdecl Z_Construct_UEnum_ControlRig_ERigTransformStorageType(void)

{
  if (Z_Registration_Info_UEnum_ERigTransformStorageType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERigTransformStorageType.InnerSingleton,
               &Z_Construct_UEnum_ControlRig_ERigTransformStorageType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERigTransformStorageType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FAnimationHierarchy @ 14a35ed50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimationHierarchy(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimationHierarchy.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimationHierarchy.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimationHierarchy_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimationHierarchy.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FAnimationHierarchy.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCachedRigComponent @ 14a35edd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCachedRigComponent(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCachedRigComponent.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCachedRigComponent.InnerSingleton,
               &Z_Construct_UScriptStruct_FCachedRigComponent_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCachedRigComponent.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FCachedRigComponent.InnerSingleton;
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

// Z_Construct_UScriptStruct_FModularRigResolveResult @ 14a35ee50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FModularRigResolveResult(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FModularRigResolveResult.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FModularRigResolveResult.InnerSingleton,
               &Z_Construct_UScriptStruct_FModularRigResolveResult_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FModularRigResolveResult.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FModularRigResolveResult.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigAndConnectionRule @ 14a35eed0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigAndConnectionRule(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigAndConnectionRule.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigAndConnectionRule.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigAndConnectionRule_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigAndConnectionRule.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FRigAndConnectionRule.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigBaseComponent @ 14a35ef50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigBaseComponent(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigBaseComponent.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigBaseComponent.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigBaseComponent_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigBaseComponent.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigBaseComponent.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigBoolArrayMetadata @ 14a35efd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigBoolArrayMetadata(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigBoolArrayMetadata.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigBoolArrayMetadata.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigBoolArrayMetadata_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigBoolArrayMetadata.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FRigBoolArrayMetadata.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigBoolMetadata @ 14a35f050

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigBoolMetadata(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigBoolMetadata.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigBoolMetadata.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigBoolMetadata_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigBoolMetadata.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigBoolMetadata.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigChildOfPrimaryConnectionRule @ 14a35f0d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigChildOfPrimaryConnectionRule(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigChildOfPrimaryConnectionRule.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigChildOfPrimaryConnectionRule.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigChildOfPrimaryConnectionRule_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigChildOfPrimaryConnectionRule.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigChildOfPrimaryConnectionRule.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigConnectorElement @ 14a35f150

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigConnectorElement(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigConnectorElement.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigConnectorElement.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigConnectorElement_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigConnectorElement.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FRigConnectorElement.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigControlModifiedContext @ 14a35f1d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigControlModifiedContext(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigControlModifiedContext.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigControlModifiedContext.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigControlModifiedContext_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigControlModifiedContext.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigControlModifiedContext.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigCurrentAndInitialDirtyState @ 14a35f250

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigCurrentAndInitialDirtyState(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigCurrentAndInitialDirtyState.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigCurrentAndInitialDirtyState.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigCurrentAndInitialDirtyState_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigCurrentAndInitialDirtyState.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigCurrentAndInitialDirtyState.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform @ 14a35f2d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigCurrentAndInitialTransform.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigCurrentAndInitialTransform.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigCurrentAndInitialTransform.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigCurrentAndInitialTransform.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigCurveElement @ 14a35f350

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigCurveElement(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigCurveElement.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigCurveElement.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigCurveElement_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigCurveElement.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigCurveElement.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigElementKeyArrayMetadata @ 14a35f3d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigElementKeyArrayMetadata(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigElementKeyArrayMetadata.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigElementKeyArrayMetadata.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigElementKeyArrayMetadata_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigElementKeyArrayMetadata.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigElementKeyArrayMetadata.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigElementKeyCollection @ 14a35f450

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigElementKeyCollection(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigElementKeyCollection.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigElementKeyCollection.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigElementKeyCollection_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigElementKeyCollection.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigElementKeyCollection.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigElementKeyMetadata @ 14a35f4d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigElementKeyMetadata(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigElementKeyMetadata.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigElementKeyMetadata.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigElementKeyMetadata_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigElementKeyMetadata.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigElementKeyMetadata.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigElementParentConstraint @ 14a35f550

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigElementParentConstraint(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigElementParentConstraint.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigElementParentConstraint.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigElementParentConstraint_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigElementParentConstraint.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigElementParentConstraint.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigEventContext @ 14a35f5d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigEventContext(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigEventContext.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigEventContext.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigEventContext_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigEventContext.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigEventContext.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigFloatArrayMetadata @ 14a35f650

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigFloatArrayMetadata(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigFloatArrayMetadata.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigFloatArrayMetadata.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigFloatArrayMetadata_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigFloatArrayMetadata.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigFloatArrayMetadata.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigFloatMetadata @ 14a35f6d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigFloatMetadata(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigFloatMetadata.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigFloatMetadata.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigFloatMetadata_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigFloatMetadata.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigFloatMetadata.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigHierarchyContainer @ 14a35f750

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigHierarchyContainer(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigHierarchyContainer.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigHierarchyContainer.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigHierarchyContainer.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigHierarchyContainer.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent @ 14a35f7d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigHierarchyCopyPasteContent.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigHierarchyCopyPasteContent.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigHierarchyCopyPasteContent.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigHierarchyCopyPasteContent.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigHierarchyModulePath @ 14a35f850

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigHierarchyModulePath(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigHierarchyModulePath.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigHierarchyModulePath.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigHierarchyModulePath_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigHierarchyModulePath.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigHierarchyModulePath.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigHierarchyRef @ 14a35f8d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigHierarchyRef(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigHierarchyRef.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigHierarchyRef.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigHierarchyRef_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigHierarchyRef.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigHierarchyRef.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigInt32ArrayMetadata @ 14a35f950

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigInt32ArrayMetadata(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigInt32ArrayMetadata.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigInt32ArrayMetadata.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigInt32ArrayMetadata_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigInt32ArrayMetadata.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigInt32ArrayMetadata.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigInt32Metadata @ 14a35f9d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigInt32Metadata(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigInt32Metadata.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigInt32Metadata.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigInt32Metadata_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigInt32Metadata.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigInt32Metadata.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigLinearColorArrayMetadata @ 14a35fa50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigLinearColorArrayMetadata(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigLinearColorArrayMetadata.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigLinearColorArrayMetadata.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigLinearColorArrayMetadata_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigLinearColorArrayMetadata.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigLinearColorArrayMetadata.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigLinearColorMetadata @ 14a35fad0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigLinearColorMetadata(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigLinearColorMetadata.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigLinearColorMetadata.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigLinearColorMetadata_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigLinearColorMetadata.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigLinearColorMetadata.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigNameArrayMetadata @ 14a35fb50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigNameArrayMetadata(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigNameArrayMetadata.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigNameArrayMetadata.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigNameArrayMetadata_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigNameArrayMetadata.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FRigNameArrayMetadata.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigNameMetadata @ 14a35fbd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigNameMetadata(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigNameMetadata.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigNameMetadata.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigNameMetadata_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigNameMetadata.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigNameMetadata.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigOrConnectionRule @ 14a35fc50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigOrConnectionRule(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigOrConnectionRule.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigOrConnectionRule.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigOrConnectionRule_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigOrConnectionRule.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FRigOrConnectionRule.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigQuatArrayMetadata @ 14a35fcd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigQuatArrayMetadata(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigQuatArrayMetadata.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigQuatArrayMetadata.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigQuatArrayMetadata_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigQuatArrayMetadata.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FRigQuatArrayMetadata.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigQuatMetadata @ 14a35fd50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigQuatMetadata(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigQuatMetadata.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigQuatMetadata.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigQuatMetadata_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigQuatMetadata.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigQuatMetadata.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigReferenceElement @ 14a35fdd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigReferenceElement(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigReferenceElement.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigReferenceElement.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigReferenceElement_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigReferenceElement.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FRigReferenceElement.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigRotatorArrayMetadata @ 14a35fe50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigRotatorArrayMetadata(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigRotatorArrayMetadata.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigRotatorArrayMetadata.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigRotatorArrayMetadata_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigRotatorArrayMetadata.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigRotatorArrayMetadata.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigRotatorMetadata @ 14a35fed0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigRotatorMetadata(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigRotatorMetadata.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigRotatorMetadata.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigRotatorMetadata_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigRotatorMetadata.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FRigRotatorMetadata.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigSocketElement @ 14a35ff50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigSocketElement(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigSocketElement.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigSocketElement.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigSocketElement_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigSocketElement.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigSocketElement.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigTagConnectionRule @ 14a35ffd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigTagConnectionRule(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigTagConnectionRule.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigTagConnectionRule.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigTagConnectionRule_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigTagConnectionRule.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FRigTagConnectionRule.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigTransformArrayMetadata @ 14a360050

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigTransformArrayMetadata(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigTransformArrayMetadata.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigTransformArrayMetadata.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigTransformArrayMetadata_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigTransformArrayMetadata.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigTransformArrayMetadata.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigTransformMetadata @ 14a3600d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigTransformMetadata(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigTransformMetadata.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigTransformMetadata.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigTransformMetadata_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigTransformMetadata.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FRigTransformMetadata.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigTransformStackEntry @ 14a360150

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigTransformStackEntry(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigTransformStackEntry.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigTransformStackEntry.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigTransformStackEntry.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigTransformStackEntry.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigTypeConnectionRule @ 14a3601d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigTypeConnectionRule(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigTypeConnectionRule.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigTypeConnectionRule.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigTypeConnectionRule_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigTypeConnectionRule.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigTypeConnectionRule.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVectorArrayMetadata @ 14a360250

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVectorArrayMetadata(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVectorArrayMetadata.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVectorArrayMetadata.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVectorArrayMetadata_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVectorArrayMetadata.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVectorArrayMetadata.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigVectorMetadata @ 14a3602d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigVectorMetadata(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigVectorMetadata.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigVectorMetadata.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigVectorMetadata_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigVectorMetadata.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigVectorMetadata.InnerSingleton;
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

// PathSeparator'' @ 15041d7b0

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

// RootNodeID'' @ 15041d7d0

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

// `dynamic_atexit_destructor_for_'CPPTypesNotRequiringCPPTypeObject'' @ 15041d7f0

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

// `dynamic_atexit_destructor_for_'CannotConnectBelowNameSpaceMessage'' @ 15041d830

void __cdecl
``UModularRigRuleManager::FilterInvalidModules'::__l2::<lambda_1>::operator()'::__l16::
_dynamic_atexit_destructor_for__CannotConnectBelowNameSpaceMessage__(void)

{
  if (CannotConnectBelowNameSpaceMessage.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015041d83f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*CannotConnectBelowNameSpaceMessage.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'CannotConnectBelowNameSpaceMessage'' @ 15041d850

void __cdecl
``UModularRigRuleManager::FilterInvalidModules'::__l2::<lambda_1>::operator()'::__l13::
_dynamic_atexit_destructor_for__CannotConnectBelowNameSpaceMessage__(void)

{
  if (CannotConnectBelowNameSpaceMessage.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015041d85f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*CannotConnectBelowNameSpaceMessage.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'CannotConnectWithinNameSpaceMessage'' @ 15041d870

void __cdecl
``UModularRigRuleManager::FilterInvalidModules'::__l2::<lambda_1>::operator()'::__l5::
_dynamic_atexit_destructor_for__CannotConnectWithinNameSpaceMessage__(void)

{
  if (CannotConnectWithinNameSpaceMessage.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015041d87f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*CannotConnectWithinNameSpaceMessage.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'CurveInvalidTargetMessage'' @ 15041d890

void __cdecl
``UModularRigRuleManager::FilterIncompatibleTypes'::__l2::<lambda_1>::operator()'::__l5::
_dynamic_atexit_destructor_for__CurveInvalidTargetMessage__(void)

{
  if (CurveInvalidTargetMessage.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015041d89f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*CurveInvalidTargetMessage.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'CurveInvalidTargetMessage'' @ 15041d8b0

void __cdecl
``UModularRigRuleManager::FilterIncompatibleTypes'::__l2::<lambda_1>::operator()'::__l8::
_dynamic_atexit_destructor_for__CurveInvalidTargetMessage__(void)

{
  if (CurveInvalidTargetMessage.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015041d8bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*CurveInvalidTargetMessage.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Empty'' @ 15041d8d0

void __cdecl
`FEmptyRigDependenciesProvider::GetReverseRigHierarchyDependencies'::__l2::
_dynamic_atexit_destructor_for__Empty__(void)

{
  ::Empty._72_4_ = 0;
  if (::Empty._64_8_ != 0) {
    FMemory::Free((void *)::Empty._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&::Empty);
  return;
}

// `dynamic_atexit_destructor_for_'Empty'' @ 15041d910

void __cdecl
`FEmptyRigDependenciesProvider::GetRigHierarchyDependencies'::__l2::
_dynamic_atexit_destructor_for__Empty__(void)

{
  ::Empty._72_4_ = 0;
  if (::Empty._64_8_ != 0) {
    FMemory::Free((void *)::Empty._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&::Empty);
  return;
}

// `dynamic_atexit_destructor_for_'Empty'' @ 15041d950

void __cdecl
`FRigDependenciesProviderForVM::GetRigHierarchyDependencies'::__l2::
_dynamic_atexit_destructor_for__Empty__(void)

{
  ::Empty._72_4_ = 0;
  if (::Empty._64_8_ != 0) {
    FMemory::Free((void *)::Empty._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&::Empty);
  return;
}

// `dynamic_atexit_destructor_for_'EmptyArray'' @ 15041d990

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`URigHierarchy::GetArrayMetadata<int>'::__l2::_dynamic_atexit_destructor_for__EmptyArray__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _EmptyArray;
  if (_EmptyArray == (void *)0x0) {
    return;
  }
  if (_EmptyArray != (void *)0x0) {
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

// `dynamic_atexit_destructor_for_'EmptyArray'' @ 15041d9b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`URigHierarchy::GetArrayMetadata<float>'::__l2::_dynamic_atexit_destructor_for__EmptyArray__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _EmptyArray;
  if (_EmptyArray == (void *)0x0) {
    return;
  }
  if (_EmptyArray != (void *)0x0) {
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

// `dynamic_atexit_destructor_for_'EmptyArray'' @ 15041d9d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`URigHierarchy::GetArrayMetadata<UE::Math::TQuat<double>_>'::__l2::
_dynamic_atexit_destructor_for__EmptyArray__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _EmptyArray;
  if (_EmptyArray == (void *)0x0) {
    return;
  }
  if (_EmptyArray != (void *)0x0) {
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

// `dynamic_atexit_destructor_for_'EmptyArray'' @ 15041d9f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`URigHierarchy::GetArrayMetadata<UE::Math::TRotator<double>_>'::__l2::
_dynamic_atexit_destructor_for__EmptyArray__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _EmptyArray;
  if (_EmptyArray == (void *)0x0) {
    return;
  }
  if (_EmptyArray != (void *)0x0) {
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

// `dynamic_atexit_destructor_for_'EmptyArray'' @ 15041da10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`URigHierarchy::GetArrayMetadata<UE::Math::TTransform<double>_>'::__l2::
_dynamic_atexit_destructor_for__EmptyArray__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _EmptyArray;
  if (_EmptyArray == (void *)0x0) {
    return;
  }
  if (_EmptyArray != (void *)0x0) {
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

// `dynamic_atexit_destructor_for_'EmptyArray'' @ 15041da30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`URigHierarchy::GetArrayMetadata<UE::Math::TVector<double>_>'::__l2::
_dynamic_atexit_destructor_for__EmptyArray__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _EmptyArray;
  if (_EmptyArray == (void *)0x0) {
    return;
  }
  if (_EmptyArray != (void *)0x0) {
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

// `dynamic_atexit_destructor_for_'EmptyArray'' @ 15041da50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`URigHierarchy::GetArrayMetadata<FLinearColor>'::__l2::_dynamic_atexit_destructor_for__EmptyArray__
          (void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _EmptyArray;
  if (_EmptyArray == (void *)0x0) {
    return;
  }
  if (_EmptyArray != (void *)0x0) {
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

// `dynamic_atexit_destructor_for_'EmptyArray'' @ 15041da70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`URigHierarchy::GetArrayMetadata<FRigElementKey>'::__l2::
_dynamic_atexit_destructor_for__EmptyArray__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _EmptyArray;
  if (_EmptyArray == (void *)0x0) {
    return;
  }
  if (_EmptyArray != (void *)0x0) {
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

// `dynamic_atexit_destructor_for_'EmptyArray'' @ 15041da90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`URigHierarchy::GetArrayMetadata<FName>'::__l2::_dynamic_atexit_destructor_for__EmptyArray__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _EmptyArray;
  if (_EmptyArray == (void *)0x0) {
    return;
  }
  if (_EmptyArray != (void *)0x0) {
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

// `dynamic_atexit_destructor_for_'EmptyArray'' @ 15041dab0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`URigHierarchy::GetArrayMetadata<bool>'::__l2::_dynamic_atexit_destructor_for__EmptyArray__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _EmptyArray;
  if (_EmptyArray == (void *)0x0) {
    return;
  }
  if (_EmptyArray != (void *)0x0) {
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

// `dynamic_atexit_destructor_for_'EmptyRedirector'' @ 15041dad0

void __cdecl
`UModularRigRuleManager::FindMatchesForPrimaryConnector'::__l2::
_dynamic_atexit_destructor_for__EmptyRedirector__(void)

{
  EmptyRedirector.ExternalKeys._72_4_ = 0;
  if (EmptyRedirector.ExternalKeys._64_8_ != 0) {
    FMemory::Free((void *)EmptyRedirector.ExternalKeys._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&EmptyRedirector.ExternalKeys);
  EmptyRedirector.InternalKeyToExternalKey._72_4_ = 0;
  if (EmptyRedirector.InternalKeyToExternalKey._64_8_ != 0) {
    FMemory::Free((void *)EmptyRedirector.InternalKeyToExternalKey._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&EmptyRedirector);
  return;
}

// `dynamic_atexit_destructor_for_'EmptyRigDependenciesProvider'' @ 15041db30

void __cdecl
`FRigChildOfPrimaryConnectionRule::Resolve'::__l2::
_dynamic_atexit_destructor_for__EmptyRigDependenciesProvider__(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'EmptyString'' @ 15041db40

void __cdecl
`FRigHierarchyModulePath::GetElementName'::__l2::_dynamic_atexit_destructor_for__EmptyString__(void)

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

// `dynamic_atexit_destructor_for_'EmptyString'' @ 15041db60

void __cdecl
`FRigHierarchyModulePath::GetModuleName'::__l2::_dynamic_atexit_destructor_for__EmptyString__(void)

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

// `dynamic_atexit_destructor_for_'EmptyString'' @ 15041db80

void __cdecl
`FRigHierarchyModulePath::GetModulePrefix'::__l2::_dynamic_atexit_destructor_for__EmptyString__
          (void)

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

// `dynamic_atexit_destructor_for_'MissingHierarchyMessage'' @ 15041dba0

void __cdecl
`UModularRigRuleManager::FindMatches'::__l12::
_dynamic_atexit_destructor_for__MissingHierarchyMessage__(void)

{
  if (MissingHierarchyMessage.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015041dbaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*MissingHierarchyMessage.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'NameToControlMappings'' @ 15041dbc0

void __cdecl
`UFKControlRig::GetControlName'::__l8::_dynamic_atexit_destructor_for__NameToControlMappings__(void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  *(undefined4 *)(lVar1 + 0x9798) = 0;
  if (*(void **)(lVar1 + 0x9790) != (void *)0x0) {
    FMemory::Free(*(void **)(lVar1 + 0x9790));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(lVar1 + 0x9750));
  *(undefined4 *)(lVar1 + 0x9748) = 0;
  if (*(void **)(lVar1 + 0x9740) != (void *)0x0) {
    FMemory::Free(*(void **)(lVar1 + 0x9740));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(lVar1 + 0x9700));
  return;
}

// `dynamic_atexit_destructor_for_'NameToTargetMappings'' @ 15041dc30

void __cdecl
`UFKControlRig::GetControlTargetName'::__l5::_dynamic_atexit_destructor_for__NameToTargetMappings__
          (void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  *(undefined4 *)(lVar1 + 0x9848) = 0;
  if (*(void **)(lVar1 + 0x9840) != (void *)0x0) {
    FMemory::Free(*(void **)(lVar1 + 0x9840));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(lVar1 + 0x9800));
  *(undefined4 *)(lVar1 + 0x97f8) = 0;
  if (*(void **)(lVar1 + 0x97f0) != (void *)0x0) {
    FMemory::Free(*(void **)(lVar1 + 0x97f0));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(lVar1 + 0x97b0));
  return;
}

// `dynamic_atexit_destructor_for_'PrefixObjectPtr'' @ 15041dca0

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

// `dynamic_atexit_destructor_for_'PrefixScriptInterface'' @ 15041dcc0

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

// `dynamic_atexit_destructor_for_'PrefixSubclassOf'' @ 15041dce0

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

// `dynamic_atexit_destructor_for_'PrefixesNotRequiringCPPTypeObject'' @ 15041dd00

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

// `dynamic_atexit_destructor_for_'PrefixesRequiringCPPTypeObject'' @ 15041dd40

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

// `dynamic_atexit_destructor_for_'ScratchString'' @ 15041dd80

void __cdecl
`UFKControlRig::GetControlTargetName'::__l17::_dynamic_atexit_destructor_for__ScratchString__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9850);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
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

// `dynamic_atexit_destructor_for_'ScratchString'' @ 15041ddb0

void __cdecl
`UFKControlRig::GetControlName'::__l13::_dynamic_atexit_destructor_for__ScratchString__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x97a0);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
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

// `dynamic_atexit_destructor_for_'StructureSizePerType'' @ 15041dde0

void __cdecl
`URigHierarchy::CopyHierarchy'::__l46::_dynamic_atexit_destructor_for__StructureSizePerType__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = StructureSizePerType.AllocatorInstance.Data;
  if (StructureSizePerType.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (StructureSizePerType.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'TransformTypeStrings'' @ 15041de00

void __cdecl
`URigHierarchy::GetTransformTypeStrings'::__l2::
_dynamic_atexit_destructor_for__TransformTypeStrings__(void)

{
  DestructItems<FString,int>
            ((FString *)TransformTypeStrings.AllocatorInstance.Data,TransformTypeStrings.ArrayNum);
  if (TransformTypeStrings.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TransformTypeStrings.AllocatorInstance.Data);
    return;
  }
  return;
}

