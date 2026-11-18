// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 933

// PathSeparator'' @ 141404110

void __cdecl `dynamic_initializer_for_'FControlRigOverrideValue::PathSeparator__(void)

{
  ::FString::FString(&FControlRigOverrideValue::PathSeparator,L"->");
  atexit(`dynamic_atexit_destructor_for_'FControlRigOverrideValue::PathSeparator__);
  return;
}

// RootNodeID'' @ 141404140

void __cdecl `dynamic_initializer_for_'FOverriddenPropertySet::RootNodeID__(void)

{
  FOverriddenPropertyNodeID::RootNodeId(&FOverriddenPropertySet::RootNodeID);
  atexit(`dynamic_atexit_destructor_for_'FOverriddenPropertySet::RootNodeID__);
  return;
}

// `dynamic_initializer_for_'BoolArrayTypeName'' @ 141404170

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

// `dynamic_initializer_for_'BoolTypeName'' @ 1414041c0

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

// `dynamic_initializer_for_'CubeEdges'' @ 141404210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl IKRigDebugRendering::_dynamic_initializer_for__CubeEdges__(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ForAnyElementType FVar13;
  
  uVar12 = _UNK_152d9e168;
  uVar11 = ___xmm_00000007000000030000000600000002;
  uVar10 = _UNK_152d9e158;
  uVar9 = ___xmm_00000006000000050000000500000004;
  uVar8 = _UNK_152d9e148;
  uVar7 = ___xmm_00000000000000030000000300000002;
  uVar6 = _UNK_152c72838;
  uVar5 = ___xmm_00000004000000070000000700000006;
  uVar4 = _UNK_15289b208;
  uVar3 = ___xmm_00000002000000010000000100000000;
  uVar2 = _UNK_151da7d78;
  uVar1 = ___xmm_00000005000000010000000400000000;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,0x18,0,&CubeEdges.AllocatorInstance,0x18,&CubeEdges.ArrayMax);
  FVar13 = CubeEdges.AllocatorInstance;
  *(undefined8 *)CubeEdges.AllocatorInstance.Data = uVar3;
  *(undefined8 *)(FVar13.Data + 8) = uVar4;
  *(undefined8 *)(FVar13.Data + 0x10) = uVar7;
  *(undefined8 *)(FVar13.Data + 0x18) = uVar8;
  *(undefined8 *)(FVar13.Data + 0x20) = uVar9;
  *(undefined8 *)(FVar13.Data + 0x28) = uVar10;
  *(undefined8 *)(FVar13.Data + 0x30) = uVar5;
  *(undefined8 *)(FVar13.Data + 0x38) = uVar6;
  *(undefined8 *)(FVar13.Data + 0x40) = uVar1;
  *(undefined8 *)(FVar13.Data + 0x48) = uVar2;
  *(undefined8 *)(FVar13.Data + 0x50) = uVar11;
  *(undefined8 *)(FVar13.Data + 0x58) = uVar12;
  atexit(_dynamic_atexit_destructor_for__CubeEdges__);
  return;
}

// `dynamic_initializer_for_'CubeVertices'' @ 141404320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl IKRigDebugRendering::_dynamic_initializer_for__CubeVertices__(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ForAnyElementType FVar9;
  
  uVar8 = _UNK_15202fe88;
  uVar7 = ___xmm_3fe0000000000000bfe0000000000000;
  uVar6 = _UNK_15076c6b8;
  uVar5 = ___xmm_bfe00000000000003fe0000000000000;
  uVar4 = _UNK_150689738;
  uVar3 = ___xmm_bfe0000000000000bfe0000000000000;
  uVar2 = _UNK_150689678;
  uVar1 = ___xmm_3fe00000000000003fe0000000000000;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,8,0,&CubeVertices.AllocatorInstance,8,&CubeVertices.ArrayMax);
  FVar9 = CubeVertices.AllocatorInstance;
  *(undefined8 *)CubeVertices.AllocatorInstance.Data = uVar7;
  *(undefined8 *)(FVar9.Data + 8) = uVar8;
  *(undefined8 *)(FVar9.Data + 0x10) = uVar7;
  *(undefined8 *)(FVar9.Data + 0x18) = uVar8;
  *(undefined8 *)(FVar9.Data + 0x20) = uVar5;
  *(undefined8 *)(FVar9.Data + 0x28) = uVar6;
  *(undefined8 *)(FVar9.Data + 0x30) = uVar1;
  *(undefined8 *)(FVar9.Data + 0x38) = uVar2;
  *(undefined8 *)(FVar9.Data + 0x40) = uVar5;
  *(undefined8 *)(FVar9.Data + 0x48) = uVar6;
  *(undefined8 *)(FVar9.Data + 0x50) = uVar1;
  *(undefined8 *)(FVar9.Data + 0x58) = uVar2;
  *(undefined8 *)(FVar9.Data + 0x60) = uVar3;
  *(undefined8 *)(FVar9.Data + 0x68) = uVar4;
  *(undefined8 *)(FVar9.Data + 0x70) = uVar7;
  *(undefined8 *)(FVar9.Data + 0x78) = uVar8;
  *(undefined8 *)(FVar9.Data + 0x80) = uVar3;
  *(undefined8 *)(FVar9.Data + 0x88) = uVar4;
  *(undefined8 *)(FVar9.Data + 0x90) = uVar5;
  *(undefined8 *)(FVar9.Data + 0x98) = uVar6;
  *(undefined8 *)(FVar9.Data + 0xa0) = uVar5;
  *(undefined8 *)(FVar9.Data + 0xa8) = uVar6;
  *(undefined8 *)(FVar9.Data + 0xb0) = uVar7;
  *(undefined8 *)(FVar9.Data + 0xb8) = uVar8;
  atexit(_dynamic_atexit_destructor_for__CubeVertices__);
  return;
}

// `dynamic_initializer_for_'DoubleArrayTypeName'' @ 141404480

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

// `dynamic_initializer_for_'DoubleTypeName'' @ 1414044d0

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

// `dynamic_initializer_for_'FNameArrayTypeName'' @ 141404520

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

// `dynamic_initializer_for_'FNameTypeName'' @ 141404570

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

// `dynamic_initializer_for_'FStringArrayTypeName'' @ 1414045c0

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

// `dynamic_initializer_for_'FStringTypeName'' @ 141404610

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

// `dynamic_initializer_for_'FTextTypeName'' @ 141404660

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

// `dynamic_initializer_for_'FloatArrayTypeName'' @ 1414046b0

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

// `dynamic_initializer_for_'FloatTypeName'' @ 141404700

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

// `dynamic_initializer_for_'GRegisterIKRigObjectVersion'' @ 141404750

void __cdecl _dynamic_initializer_for__GRegisterIKRigObjectVersion__(void)

{
  FGuid FVar1;
  FGuid local_38;
  FGuid local_28 [2];
  
  FVar1 = FIKRigObjectVersion::GUID;
  local_38 = FIKRigObjectVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_38,0xb,L"Dev-IKRig",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  local_28[0] = FVar1;
  FDevVersionRegistration::RecordDevVersion(local_28);
  atexit(_dynamic_atexit_destructor_for__GRegisterIKRigObjectVersion__);
  return;
}

// `dynamic_initializer_for_'Int32ArrayTypeName'' @ 1414047b0

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

// `dynamic_initializer_for_'Int32TypeName'' @ 141404800

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

// `dynamic_initializer_for_'Int64TypeName'' @ 141404850

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

// `dynamic_initializer_for_'IntTypeName'' @ 1414048a0

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

// `dynamic_initializer_for_'LogIKRig'' @ 1414048f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogIKRig__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogIKRig,L"LogIKRig",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogIKRig__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantIKRig'' @ 141404930

void __cdecl _dynamic_initializer_for__ModuleRegistrantIKRig__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "IKRig";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"IKRig",5);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FIKRigModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'NAME_UIKGoalCreatorInterface_AddIKGoals'' @ 141404980

void __cdecl _dynamic_initializer_for__NAME_UIKGoalCreatorInterface_AddIKGoals__(void)

{
  FName::FName(&NAME_UIKGoalCreatorInterface_AddIKGoals,L"AddIKGoals");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_IKRetarget'' @ 1414049a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_IKRetarget__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_IKRetarget == (FThreadSafeStaticStat<FStat_STAT_IKRetarget>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_IKRetarget");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IKRetarget,*pFVar1,L"IK Retarget",
               "STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_IKRetargetGoals'' @ 141404a30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_IKRetargetGoals__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_IKRetargetGoals == (FThreadSafeStaticStat<FStat_STAT_IKRetargetGoals>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_IKRetargetGoals");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IKRetargetGoals,*pFVar1,
               L"IK Retarget Goals","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PBIK_Solve'' @ 141404ac0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PBIK_Solve__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PBIK_Solve == (FThreadSafeStaticStat<FStat_STAT_PBIK_Solve>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PBIK_Solve");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PBIK_Solve,*pFVar1,L"PBIK Solve",
               "STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'UInt32ArrayTypeName'' @ 141404b50

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

// `dynamic_initializer_for_'UInt32TypeName'' @ 141404ba0

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

// `dynamic_initializer_for_'UInt64TypeName'' @ 141404bf0

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

// `dynamic_initializer_for_'UInt8ArrayTypeName'' @ 141404c40

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

// `dynamic_initializer_for_'UInt8TypeName'' @ 141404c90

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

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigComponent_h__Script_IKRig_574033650'' @ 141404ce0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigComponent_h__Script_IKRig_574033650__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IKRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigComponent_h__Script_IKRig_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigInterface_h__Script_IKRig_1361590340'' @ 141404d20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigInterface_h__Script_IKRig_1361590340__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IKRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigInterface_h__Script_IKRig_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_AnimNodes_AnimNode_IKRig_h__Script_IKRig_3375828255'' @ 141404d60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_AnimNodes_AnimNode_IKRig_h__Script_IKRig_3375828255__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IKRig",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_AnimNodes_AnimNode_IKRig_h__Script_IKRig_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_AnimNodes_AnimNode_RetargetPoseFromMesh_h__Script_IKRig_831211861'' @ 141404da0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_AnimNodes_AnimNode_RetargetPoseFromMesh_h__Script_IKRig_831211861__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IKRig",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_AnimNodes_AnimNode_RetargetPoseFromMesh_h__Script_IKRig_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_AnimNodes_AnimNode_RetargetPoseFromMesh_h__Script_IKRig_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_AnimNodes_RigUnit_IKRig_h__Script_IKRig_2170665756'' @ 141404df0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_AnimNodes_RigUnit_IKRig_h__Script_IKRig_2170665756__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IKRig",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_AnimNodes_RigUnit_IKRig_h__Script_IKRig_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetChainMapping_h__Script_IKRig_3713834036'' @ 141404e30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetChainMapping_h__Script_IKRig_3713834036__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IKRig",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetChainMapping_h__Script_IKRig_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetChainMapping_h__Script_IKRig_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetDeprecated_h__Script_IKRig_1530012287'' @ 141404e80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetDeprecated_h__Script_IKRig_1530012287__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IKRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetDeprecated_h__Script_IKRig_Statics
             ::ClassInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetDeprecated_h__Script_IKRig_Statics
             ::ScriptStructInfo,6,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetDeprecated_h__Script_IKRig_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetOps_h__Script_IKRig_1764672773'' @ 141404ed0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetOps_h__Script_IKRig_1764672773__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IKRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetOps_h__Script_IKRig_Statics
             ::ClassInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetOps_h__Script_IKRig_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetProcessor_h__Script_IKRig_1786162733'' @ 141404f20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetProcessor_h__Script_IKRig_1786162733__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IKRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetProcessor_h__Script_IKRig_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetProfile_h__Script_IKRig_2861362454'' @ 141404f60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetProfile_h__Script_IKRig_2861362454__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IKRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetProfile_h__Script_IKRig_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetProfile_h__Script_IKRig_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetProfile_h__Script_IKRig_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetSettings_h__Script_IKRig_3127767857'' @ 141404fb0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetSettings_h__Script_IKRig_3127767857__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IKRig",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetSettings_h__Script_IKRig_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h__Script_IKRig_2568908201'' @ 141405000

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h__Script_IKRig_2568908201__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IKRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h__Script_IKRig_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h__Script_IKRig_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_AlignPoleVectorOp_h__Script_IKRig_1321305503'' @ 141405050

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_AlignPoleVectorOp_h__Script_IKRig_1321305503__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IKRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_AlignPoleVectorOp_h__Script_IKRig_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_AlignPoleVectorOp_h__Script_IKRig_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CopyBasePoseOp_h__Script_IKRig_4140567985'' @ 1414050a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CopyBasePoseOp_h__Script_IKRig_4140567985__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IKRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CopyBasePoseOp_h__Script_IKRig_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CopyBasePoseOp_h__Script_IKRig_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CurveRemapOp_h__Script_IKRig_1907256596'' @ 1414050f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CurveRemapOp_h__Script_IKRig_1907256596__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IKRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CurveRemapOp_h__Script_IKRig_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CurveRemapOp_h__Script_IKRig_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_FKChainsOp_h__Script_IKRig_2552909643'' @ 141405140

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_FKChainsOp_h__Script_IKRig_2552909643__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IKRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_FKChainsOp_h__Script_IKRig_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_FKChainsOp_h__Script_IKRig_Statics
             ::ScriptStructInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_FKChainsOp_h__Script_IKRig_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_FilterBoneOp_h__Script_IKRig_3296256831'' @ 141405190

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_FilterBoneOp_h__Script_IKRig_3296256831__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IKRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_FilterBoneOp_h__Script_IKRig_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_FilterBoneOp_h__Script_IKRig_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_FloorConstraintOp_h__Script_IKRig_3754084353'' @ 1414051e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_FloorConstraintOp_h__Script_IKRig_3754084353__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IKRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_FloorConstraintOp_h__Script_IKRig_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_FloorConstraintOp_h__Script_IKRig_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_IKChainsOp_h__Script_IKRig_3970942839'' @ 141405230

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_IKChainsOp_h__Script_IKRig_3970942839__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IKRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_IKChainsOp_h__Script_IKRig_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_IKChainsOp_h__Script_IKRig_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PelvisMotionOp_h__Script_IKRig_1222483342'' @ 141405280

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PelvisMotionOp_h__Script_IKRig_1222483342__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IKRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PelvisMotionOp_h__Script_IKRig_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PelvisMotionOp_h__Script_IKRig_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PinBoneOp_h__Script_IKRig_925708457'' @ 1414052d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PinBoneOp_h__Script_IKRig_925708457__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IKRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PinBoneOp_h__Script_IKRig_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PinBoneOp_h__Script_IKRig_Statics
             ::ScriptStructInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PinBoneOp_h__Script_IKRig_Statics
             ::EnumInfo,3);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RetargetPoseOp_h__Script_IKRig_2586713185'' @ 141405320

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RetargetPoseOp_h__Script_IKRig_2586713185__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IKRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RetargetPoseOp_h__Script_IKRig_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RetargetPoseOp_h__Script_IKRig_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RootMotionGeneratorOp_h__Script_IKRig_2715250898'' @ 141405370

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RootMotionGeneratorOp_h__Script_IKRig_2715250898__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IKRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RootMotionGeneratorOp_h__Script_IKRig_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RootMotionGeneratorOp_h__Script_IKRig_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RootMotionGeneratorOp_h__Script_IKRig_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RunIKRigOp_h__Script_IKRig_3824324976'' @ 1414053c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RunIKRigOp_h__Script_IKRig_3824324976__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IKRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RunIKRigOp_h__Script_IKRig_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RunIKRigOp_h__Script_IKRig_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_ScaleSourceOp_h__Script_IKRig_4279509139'' @ 141405410

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_ScaleSourceOp_h__Script_IKRig_4279509139__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IKRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_ScaleSourceOp_h__Script_IKRig_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_ScaleSourceOp_h__Script_IKRig_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_ScaleSourceOp_h__Script_IKRig_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_SpeedPlantingOp_h__Script_IKRig_2482016936'' @ 141405460

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_SpeedPlantingOp_h__Script_IKRig_2482016936__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IKRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_SpeedPlantingOp_h__Script_IKRig_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_SpeedPlantingOp_h__Script_IKRig_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_StretchChainOp_h__Script_IKRig_269010080'' @ 1414054b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_StretchChainOp_h__Script_IKRig_269010080__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IKRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_StretchChainOp_h__Script_IKRig_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_StretchChainOp_h__Script_IKRig_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_StrideWarpingOp_h__Script_IKRig_4012108974'' @ 141405500

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_StrideWarpingOp_h__Script_IKRig_4012108974__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IKRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_StrideWarpingOp_h__Script_IKRig_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_StrideWarpingOp_h__Script_IKRig_Statics
             ::ScriptStructInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_StrideWarpingOp_h__Script_IKRig_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDataTypes_h__Script_IKRig_552841583'' @ 141405550

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDataTypes_h__Script_IKRig_552841583__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IKRig",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDataTypes_h__Script_IKRig_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDataTypes_h__Script_IKRig_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDefinition_h__Script_IKRig_4246102577'' @ 1414055a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDefinition_h__Script_IKRig_4246102577__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IKRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDefinition_h__Script_IKRig_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDefinition_h__Script_IKRig_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigProcessor_h__Script_IKRig_977462258'' @ 1414055f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigProcessor_h__Script_IKRig_977462258__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IKRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigProcessor_h__Script_IKRig_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigProcessor_h__Script_IKRig_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigSkeleton_h__Script_IKRig_3231866776'' @ 141405640

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigSkeleton_h__Script_IKRig_3231866776__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IKRig",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigSkeleton_h__Script_IKRig_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigBodyMoverSolver_h__Script_IKRig_3521306738'' @ 141405680

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigBodyMoverSolver_h__Script_IKRig_3521306738__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IKRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigBodyMoverSolver_h__Script_IKRig_Statics
             ::ClassInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigBodyMoverSolver_h__Script_IKRig_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigFullBodyIK_h__Script_IKRig_588647109'' @ 1414056d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigFullBodyIK_h__Script_IKRig_588647109__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IKRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigFullBodyIK_h__Script_IKRig_Statics
             ::ClassInfo,4,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigFullBodyIK_h__Script_IKRig_Statics
             ::ScriptStructInfo,4,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigLimbSolver_h__Script_IKRig_1150884649'' @ 141405720

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigLimbSolver_h__Script_IKRig_1150884649__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IKRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigLimbSolver_h__Script_IKRig_Statics
             ::ClassInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigLimbSolver_h__Script_IKRig_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigPoleSolver_h__Script_IKRig_3813249556'' @ 141405770

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigPoleSolver_h__Script_IKRig_3813249556__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IKRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigPoleSolver_h__Script_IKRig_Statics
             ::ClassInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigPoleSolver_h__Script_IKRig_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSetTransform_h__Script_IKRig_629134455'' @ 1414057c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSetTransform_h__Script_IKRig_629134455__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IKRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSetTransform_h__Script_IKRig_Statics
             ::ClassInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSetTransform_h__Script_IKRig_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSolverBase_h__Script_IKRig_396364719'' @ 141405810

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSolverBase_h__Script_IKRig_396364719__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IKRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSolverBase_h__Script_IKRig_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSolverBase_h__Script_IKRig_Statics
             ::ScriptStructInfo,5,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigStretchLimb_h__Script_IKRig_730690819'' @ 141405860

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigStretchLimb_h__Script_IKRig_730690819__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IKRig",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigStretchLimb_h__Script_IKRig_Statics
             ::ScriptStructInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigStretchLimb_h__Script_IKRig_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_LimbSolver_h__Script_IKRig_4130768849'' @ 1414058b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_LimbSolver_h__Script_IKRig_4130768849__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IKRig",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_LimbSolver_h__Script_IKRig_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_IKRig'' @ 1414058f0

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_IKRig__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x1ee4e4d4;
  local_res8[0].DeclarationsHash = 0xdcbe08a4;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_IKRig,L"/Script/IKRig",
             &Z_Registration_Info_UPackage__Script_IKRig,local_res8);
  return;
}

// NewProp_bResetPlayback_SetBit @ 14dee3f20

void __cdecl
Z_Construct_UScriptStruct_FIKRetargetFilterBoneOpSettings_Statics::NewProp_bResetPlayback_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x40) = 1;
  return;
}

// NewStructOps @ 14dee3f30

void * __cdecl Z_Construct_UScriptStruct_FIKRetargetFilterBoneOpSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRetargetFilterBoneOpSettings,&UE::CoreUObject::Private::Construct<FIKRetargetFilterBoneOpSettings>,&UE::CoreUObject::Private::ConstructForTests<FIKRetargetFilterBoneOpSettings>,&UE::CoreUObject::Private::Destruct<FIKRetargetFilterBoneOpSettings>,&UE::CoreUObject::Private::Copy<FIKRetargetFilterBoneOpSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UIKRig_PoleSolver @ 14dee3f70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIKRig_PoleSolver(void)

{
  if (Z_Registration_Info_UClass_UIKRig_PoleSolver.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIKRig_PoleSolver.OuterSingleton,
               &Z_Construct_UClass_UIKRig_PoleSolver_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIKRig_PoleSolver.OuterSingleton;
}

// Z_Construct_UClass_UIKRig_PoleSolverEffector @ 14dee3fe0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIKRig_PoleSolverEffector(void)

{
  if (Z_Registration_Info_UClass_UIKRig_PoleSolverEffector.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIKRig_PoleSolverEffector.OuterSingleton,
               &Z_Construct_UClass_UIKRig_PoleSolverEffector_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIKRig_PoleSolverEffector.OuterSingleton;
}

// Z_Construct_UClass_UIKRigPoleSolverController @ 14dee4020

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIKRigPoleSolverController(void)

{
  if (Z_Registration_Info_UClass_UIKRigPoleSolverController.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIKRigPoleSolverController.OuterSingleton,
               &Z_Construct_UClass_UIKRigPoleSolverController_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIKRigPoleSolverController.OuterSingleton;
}

// Z_Construct_UScriptStruct_FIKRigPoleSolverSettings @ 14dee4070

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRigPoleSolverSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRigPoleSolverSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRigPoleSolverSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRigPoleSolverSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRigPoleSolverSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRigPoleSolverSettings.InnerSingleton;
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

// NewStructOps @ 14dee4240

void * __cdecl Z_Construct_UScriptStruct_FIKRigPoleSolverSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRigPoleSolverSettings,&UE::CoreUObject::Private::Construct<FIKRigPoleSolverSettings>,&UE::CoreUObject::Private::ConstructForTests<FIKRigPoleSolverSettings>,&UE::CoreUObject::Private::Destruct<FIKRigPoleSolverSettings>,&UE::CoreUObject::Private::Copy<FIKRigPoleSolverSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14dee5b60

void * __thiscall
FIKRetargetCopyBasePoseOp::_scalar_deleting_destructor_
          (FIKRetargetCopyBasePoseOp *this,uint param_1)

{
  ~FIKRetargetCopyBasePoseOp(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dee60f0

void * __thiscall
FIKRetargetPinBoneOp::_scalar_deleting_destructor_(FIKRetargetPinBoneOp *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  UObject *pUVar2;
  
  pFVar1 = (this->Settings).BonesToPin.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->Settings)._padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  pUVar2 = (UObject *)(this->Settings)._padding_;
  if (pUVar2 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar2);
    (this->Settings)._padding_ = 0;
  }
  *(undefined ***)this = &___7FIKRetargetOpBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x120);
  }
  return this;
}

// NewStructOps @ 14dee6260

void * __cdecl Z_Construct_UScriptStruct_FIKRetargetFilterBoneOp_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRetargetFilterBoneOp,&UE::CoreUObject::Private::Construct<FIKRetargetFilterBoneOp>,&UE::CoreUObject::Private::ConstructForTests<FIKRetargetFilterBoneOp>,&UE::CoreUObject::Private::Destruct<FIKRetargetFilterBoneOp>,&UE::CoreUObject::Private::Copy<FIKRetargetFilterBoneOp>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14dee6620

void * __cdecl Z_Construct_UScriptStruct_FIKRigPoleSolver_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRigPoleSolver,&UE::CoreUObject::Private::Construct<FIKRigPoleSolver>,&UE::CoreUObject::Private::ConstructForTests<FIKRigPoleSolver>,&UE::CoreUObject::Private::Destruct<FIKRigPoleSolver>,&UE::CoreUObject::Private::Copy<FIKRigPoleSolver>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UIKRetargetProcessor @ 14dee6660

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIKRetargetProcessor(void)

{
  if (Z_Registration_Info_UClass_UIKRetargetProcessor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIKRetargetProcessor.OuterSingleton,
               &Z_Construct_UClass_UIKRetargetProcessor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIKRetargetProcessor.OuterSingleton;
}

// Z_Construct_UFunction_UIKRetargetFilterBoneController_AddBoneToFilter @ 14dee7210

UFunction * __cdecl Z_Construct_UFunction_UIKRetargetFilterBoneController_AddBoneToFilter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetFilterBoneController_AddBoneToFilter_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UIKRetargetFilterBoneController_ClearBonesToFilter @ 14dee76d0

UFunction * __cdecl Z_Construct_UFunction_UIKRetargetFilterBoneController_ClearBonesToFilter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetFilterBoneController_ClearBonesToFilter_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14dee7710

void * __thiscall
FIKRigBodyMoverSolver::_scalar_deleting_destructor_(FIKRigBodyMoverSolver *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FIKRigBodyMoverGoalSettings,int>
            ((FIKRigBodyMoverGoalSettings *)(this->AllGoalSettings).AllocatorInstance.Data,
             (this->AllGoalSettings).ArrayNum);
  pFVar1 = (this->AllGoalSettings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->Settings)._padding_ = (longlong)&___7FIKRigSettingsBase__6B_;
  this->_padding_ = (longlong)&___7FIKRigSolverBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dee7780

void * __thiscall
FIKRetargetFKChainsOp::_scalar_deleting_destructor_(FIKRetargetFKChainsOp *this,uint param_1)

{
  ~FIKRetargetFKChainsOp(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// Z_Construct_UFunction_UIKRigPoleSolverController_GetSolverSettings @ 14dee77c0

UFunction * __cdecl Z_Construct_UFunction_UIKRigPoleSolverController_GetSolverSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRigPoleSolverController_GetSolverSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UIKRetargetPinBoneController @ 14dee7ad0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIKRetargetPinBoneController(void)

{
  if (Z_Registration_Info_UClass_UIKRetargetPinBoneController.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIKRetargetPinBoneController.OuterSingleton,
               &Z_Construct_UClass_UIKRetargetPinBoneController_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIKRetargetPinBoneController.OuterSingleton;
}

// Z_Construct_UFunction_UIKRetargetFilterBoneController_GetAllBonesToFilter @ 14dee7b10

UFunction * __cdecl Z_Construct_UFunction_UIKRetargetFilterBoneController_GetAllBonesToFilter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetFilterBoneController_GetAllBonesToFilter_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UPinBoneOp @ 14dee7be0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPinBoneOp(void)

{
  if (Z_Registration_Info_UClass_UPinBoneOp.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPinBoneOp.OuterSingleton,
               &Z_Construct_UClass_UPinBoneOp_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPinBoneOp.OuterSingleton;
}

// Z_Construct_UEnum_IKRig_EPinBoneRotationMode @ 14dee7c20

UEnum * __cdecl Z_Construct_UEnum_IKRig_EPinBoneRotationMode(void)

{
  if (Z_Registration_Info_UEnum_EPinBoneRotationMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPinBoneRotationMode.InnerSingleton,
               &Z_Construct_UEnum_IKRig_EPinBoneRotationMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPinBoneRotationMode.InnerSingleton;
}

// Z_Construct_UEnum_IKRig_EPinBoneTranslationMode @ 14dee7c60

UEnum * __cdecl Z_Construct_UEnum_IKRig_EPinBoneTranslationMode(void)

{
  if (Z_Registration_Info_UEnum_EPinBoneTranslationMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPinBoneTranslationMode.InnerSingleton,
               &Z_Construct_UEnum_IKRig_EPinBoneTranslationMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPinBoneTranslationMode.InnerSingleton;
}

// Z_Construct_UEnum_IKRig_EPinBoneType @ 14dee7ca0

UEnum * __cdecl Z_Construct_UEnum_IKRig_EPinBoneType(void)

{
  if (Z_Registration_Info_UEnum_EPinBoneType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPinBoneType.InnerSingleton,
               &Z_Construct_UEnum_IKRig_EPinBoneType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPinBoneType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FIKRetargetPinBoneOpSettings @ 14dee7d60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRetargetPinBoneOpSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetPinBoneOpSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRetargetPinBoneOpSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRetargetPinBoneOpSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetPinBoneOpSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRetargetPinBoneOpSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPinBoneData @ 14dee7de0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPinBoneData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPinBoneData.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPinBoneData.InnerSingleton,
               &Z_Construct_UScriptStruct_FPinBoneData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPinBoneData.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPinBoneData.InnerSingleton;
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

// EPinBoneType_StaticEnum @ 14dee7ec0

UEnum * __cdecl EPinBoneType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPinBoneType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UEnum_EPinBoneType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_IKRig_EPinBoneType,(UObject *)pUVar1,L"EPinBoneType");
  }
  return Z_Registration_Info_UEnum_EPinBoneType.OuterSingleton;
}

// Z_Construct_UFunction_UIKRigPoleSolverController_SetSolverSettings @ 14dee7f90

UFunction * __cdecl Z_Construct_UFunction_UIKRigPoleSolverController_SetSolverSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRigPoleSolverController_SetSolverSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14dee80f0

void * __thiscall
FIKRetargetStrideWarpingOp::_scalar_deleting_destructor_
          (FIKRetargetStrideWarpingOp *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  UObject *pUVar2;
  
  pFVar1 = (this->GoalsToWarp).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Settings).ChainSettings.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->Settings)._padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  pUVar2 = (UObject *)(this->Settings)._padding_;
  if (pUVar2 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar2);
    (this->Settings)._padding_ = 0;
  }
  this->_padding_ = (longlong)&___7FIKRetargetOpBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// Z_Construct_UFunction_UIKRetargetFilterBoneController_GetSettings @ 14dee8170

UFunction * __cdecl Z_Construct_UFunction_UIKRetargetFilterBoneController_GetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetFilterBoneController_GetSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14dee8270

void * __cdecl Z_Construct_UScriptStruct_FPinBoneData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x170;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPinBoneData,&UE::CoreUObject::Private::Construct<FPinBoneData>,&UE::CoreUObject::Private::ConstructForTests<FPinBoneData>,&UE::CoreUObject::Private::Destruct<FPinBoneData>,&UE::CoreUObject::Private::PostSerialize<FPinBoneData>,&UE::CoreUObject::Private::Copy<FPinBoneData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// EPinBoneTranslationMode_StaticEnum @ 14dee83e0

UEnum * __cdecl EPinBoneTranslationMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPinBoneTranslationMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UEnum_EPinBoneTranslationMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_IKRig_EPinBoneTranslationMode,(UObject *)pUVar1,
                       L"EPinBoneTranslationMode");
  }
  return Z_Registration_Info_UEnum_EPinBoneTranslationMode.OuterSingleton;
}

// Z_Construct_UFunction_UIKRetargetFilterBoneController_SetSettings @ 14dee8470

UFunction * __cdecl Z_Construct_UFunction_UIKRetargetFilterBoneController_SetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetFilterBoneController_SetSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_URetargetChainSettings_NoRegister @ 14dee84b0

UClass * __cdecl Z_Construct_UClass_URetargetChainSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URetargetChainSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"RetargetChainSettings",
               &Z_Registration_Info_UClass_URetargetChainSettings.InnerSingleton,
               URetargetChainSettings::StaticRegisterNativesURetargetChainSettings,0x188,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<URetargetChainSettings>,
               InternalVTableHelperCtorCaller<URetargetChainSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URetargetChainSettings.InnerSingleton;
}

// Z_Construct_UClass_URetargetRootSettings_NoRegister @ 14dee8560

UClass * __cdecl Z_Construct_UClass_URetargetRootSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URetargetRootSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"RetargetRootSettings",
               &Z_Registration_Info_UClass_URetargetRootSettings.InnerSingleton,
               URetargetRootSettings::StaticRegisterNativesURetargetRootSettings,0xe8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<URetargetRootSettings>,
               InternalVTableHelperCtorCaller<URetargetRootSettings>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URetargetRootSettings.InnerSingleton;
}

// Z_Construct_UClass_UIKRetargetGlobalSettings_NoRegister @ 14dee8610

UClass * __cdecl Z_Construct_UClass_UIKRetargetGlobalSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetGlobalSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetGlobalSettings",
               &Z_Registration_Info_UClass_UIKRetargetGlobalSettings.InnerSingleton,
               UIKRetargetGlobalSettings::StaticRegisterNativesUIKRetargetGlobalSettings,0x60,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UIKRetargetGlobalSettings>,
               InternalVTableHelperCtorCaller<UIKRetargetGlobalSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetGlobalSettings.InnerSingleton;
}

// EPinBoneRotationMode_StaticEnum @ 14dee8780

UEnum * __cdecl EPinBoneRotationMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPinBoneRotationMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UEnum_EPinBoneRotationMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_IKRig_EPinBoneRotationMode,(UObject *)pUVar1,
                       L"EPinBoneRotationMode");
  }
  return Z_Registration_Info_UEnum_EPinBoneRotationMode.OuterSingleton;
}

// NewProp_bCopyTranslation_SetBit @ 14dee9230

void __cdecl
Z_Construct_UScriptStruct_FIKRetargetPinBoneOpSettings_Statics::NewProp_bCopyTranslation_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  return;
}

// NewProp_bCopyRotation_SetBit @ 14dee9320

void __cdecl
Z_Construct_UScriptStruct_FIKRetargetPinBoneOpSettings_Statics::NewProp_bCopyRotation_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2b) = 1;
  return;
}

// NewProp_bCopyScale_SetBit @ 14dee9360

void __cdecl
Z_Construct_UScriptStruct_FIKRetargetPinBoneOpSettings_Statics::NewProp_bCopyScale_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2d) = 1;
  return;
}

// NewProp_bPropagateToChildren_SetBit @ 14dee9370

void __cdecl
Z_Construct_UScriptStruct_FIKRetargetPinBoneOpSettings_Statics::NewProp_bPropagateToChildren_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2e) = 1;
  return;
}

// NewStructOps @ 14dee94d0

void * __cdecl Z_Construct_UScriptStruct_FIKRetargetPinBoneOpSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xf0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRetargetPinBoneOpSettings,&UE::CoreUObject::Private::Construct<FIKRetargetPinBoneOpSettings>,&UE::CoreUObject::Private::ConstructForTests<FIKRetargetPinBoneOpSettings>,&UE::CoreUObject::Private::Destruct<FIKRetargetPinBoneOpSettings>,&UE::CoreUObject::Private::SerializeArchive<FIKRetargetPinBoneOpSettings>,&UE::CoreUObject::Private::Copy<FIKRetargetPinBoneOpSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FIKRigGoalInput @ 14dee96f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRigGoalInput(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRigGoalInput.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRigGoalInput.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRigGoalInput_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRigGoalInput.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRigGoalInput.InnerSingleton;
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

// Z_Construct_UScriptStruct_FIKRigWorkData @ 14dee9770

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRigWorkData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRigWorkData.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRigWorkData.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRigWorkData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRigWorkData.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRigWorkData.InnerSingleton;
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

// NewStructOps @ 14dee9800

void * __cdecl Z_Construct_UScriptStruct_FIKRigWorkData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x138;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRigWorkData,&UE::CoreUObject::Private::Construct<FIKRigWorkData>,&UE::CoreUObject::Private::ConstructForTests<FIKRigWorkData>,&UE::CoreUObject::Private::Destruct<FIKRigWorkData>,&UE::CoreUObject::Private::Copy<FIKRigWorkData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14dee9a70

void * __cdecl Z_Construct_UScriptStruct_FIKRetargetPinBoneOp_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x120;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRetargetPinBoneOp,&UE::CoreUObject::Private::Construct<FIKRetargetPinBoneOp>,&UE::CoreUObject::Private::ConstructForTests<FIKRetargetPinBoneOp>,&UE::CoreUObject::Private::Destruct<FIKRetargetPinBoneOp>,&UE::CoreUObject::Private::Copy<FIKRetargetPinBoneOp>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14dee9b10

void * __cdecl Z_Construct_UScriptStruct_FIKRigGoalInput_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRigGoalInput,&UE::CoreUObject::Private::Construct<FIKRigGoalInput>,&UE::CoreUObject::Private::ConstructForTests<FIKRigGoalInput>,&UE::CoreUObject::Private::Destruct<FIKRigGoalInput>,&UE::CoreUObject::Private::Copy<FIKRigGoalInput>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UIKRetargetPinBoneController_ClearAllBonePairs @ 14dee9f80

UFunction * __cdecl Z_Construct_UFunction_UIKRetargetPinBoneController_ClearAllBonePairs(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetPinBoneController_ClearAllBonePairs_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UEnum_IKRig_ERetargetSourceOrTarget @ 14deea070

UEnum * __cdecl Z_Construct_UEnum_IKRig_ERetargetSourceOrTarget(void)

{
  if (Z_Registration_Info_UEnum_ERetargetSourceOrTarget.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERetargetSourceOrTarget.InnerSingleton,
               &Z_Construct_UEnum_IKRig_ERetargetSourceOrTarget_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERetargetSourceOrTarget.InnerSingleton;
}

// ERetargetSourceOrTarget_StaticEnum @ 14deea0b0

UEnum * __cdecl ERetargetSourceOrTarget_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERetargetSourceOrTarget.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UEnum_ERetargetSourceOrTarget.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_IKRig_ERetargetSourceOrTarget,(UObject *)pUVar1,
                       L"ERetargetSourceOrTarget");
  }
  return Z_Registration_Info_UEnum_ERetargetSourceOrTarget.OuterSingleton;
}

// Z_Construct_UFunction_UIKGoalCreatorInterface_AddIKGoals @ 14deea0f0

UFunction * __cdecl Z_Construct_UFunction_UIKGoalCreatorInterface_AddIKGoals(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKGoalCreatorInterface_AddIKGoals_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UIKRetargetPinBoneController_GetAllBonePairs @ 14deea130

UFunction * __cdecl Z_Construct_UFunction_UIKRetargetPinBoneController_GetAllBonePairs(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetPinBoneController_GetAllBonePairs_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// EBasicAxis_StaticEnum @ 14deea170

UEnum * __cdecl EBasicAxis_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EBasicAxis.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UEnum_EBasicAxis.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_IKRig_EBasicAxis,(UObject *)pUVar1,L"EBasicAxis");
  }
  return Z_Registration_Info_UEnum_EBasicAxis.OuterSingleton;
}

// Z_Construct_UClass_UIKRig_SetTransformEffector_NoRegister @ 14deea1f0

UClass * __cdecl Z_Construct_UClass_UIKRig_SetTransformEffector_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRig_SetTransformEffector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRig_SetTransformEffector",
               &Z_Registration_Info_UClass_UIKRig_SetTransformEffector.InnerSingleton,
               UIKRig_SetTransformEffector::StaticRegisterNativesUIKRig_SetTransformEffector,0x30,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UIKRig_SetTransformEffector>,
               InternalVTableHelperCtorCaller<UIKRig_SetTransformEffector>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRig_SetTransformEffector.InnerSingleton;
}

// Z_Construct_UPackage__Script_IKRig @ 14deeadd0

UPackage * __cdecl Z_Construct_UPackage__Script_IKRig(void)

{
  if (Z_Registration_Info_UPackage__Script_IKRig.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_IKRig.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_IKRig.OuterSingleton;
}

// Z_Construct_UClass_UIKRetargetAlignPoleVectorController @ 14deeb1d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIKRetargetAlignPoleVectorController(void)

{
  if (Z_Registration_Info_UClass_UIKRetargetAlignPoleVectorController.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIKRetargetAlignPoleVectorController.OuterSingleton,
               &Z_Construct_UClass_UIKRetargetAlignPoleVectorController_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIKRetargetAlignPoleVectorController.OuterSingleton;
}

// Z_Construct_UScriptStruct_FIKRetargetAlignPoleVectorOpSettings @ 14deeb260

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRetargetAlignPoleVectorOpSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetAlignPoleVectorOpSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRetargetAlignPoleVectorOpSettings.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRetargetAlignPoleVectorOpSettings_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetAlignPoleVectorOpSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRetargetAlignPoleVectorOpSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRetargetPoleVectorSettings @ 14deeb330

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRetargetPoleVectorSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRetargetPoleVectorSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRetargetPoleVectorSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FRetargetPoleVectorSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRetargetPoleVectorSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRetargetPoleVectorSettings.InnerSingleton;
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

// NewProp_bEnabled_SetBit @ 14deeb3d0

void __cdecl
Z_Construct_UScriptStruct_FRetargetPoleVectorSettings_Statics::NewProp_bEnabled_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_MaintainOffset_SetBit @ 14deeb3e0

void __cdecl
Z_Construct_UScriptStruct_FRetargetPoleVectorSettings_Statics::NewProp_MaintainOffset_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// `scalar_deleting_destructor' @ 14deeb3f0

void * __thiscall
FIKRigSetTransform::_scalar_deleting_destructor_(FIKRigSetTransform *this,uint param_1)

{
  (this->Settings)._padding_ = (longlong)&___7FIKRigSettingsBase__6B_;
  this->_padding_ = (longlong)&___7FIKRigSolverBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// NewStructOps @ 14deeb430

void * __cdecl Z_Construct_UScriptStruct_FRetargetPoleVectorSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRetargetPoleVectorSettings,&UE::CoreUObject::Private::Construct<FRetargetPoleVectorSettings>,&UE::CoreUObject::Private::ConstructForTests<FRetargetPoleVectorSettings>,&UE::CoreUObject::Private::Destruct<FRetargetPoleVectorSettings>,&UE::CoreUObject::Private::Copy<FRetargetPoleVectorSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14deeb5c0

void * __thiscall
FIKRetargetStretchChainOp::_scalar_deleting_destructor_
          (FIKRetargetStretchChainOp *this,uint param_1)

{
  ~FIKRetargetStretchChainOp(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// Z_Construct_UFunction_UIKRetargetPinBoneController_GetSettings @ 14deeb600

UFunction * __cdecl Z_Construct_UFunction_UIKRetargetPinBoneController_GetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetPinBoneController_GetSettings_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UIKRetargetPinBoneController_SetBonePair @ 14deebb80

UFunction * __cdecl Z_Construct_UFunction_UIKRetargetPinBoneController_SetBonePair(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetPinBoneController_SetBonePair_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UIKRetargetFKChainsController @ 14deebbc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIKRetargetFKChainsController(void)

{
  if (Z_Registration_Info_UClass_UIKRetargetFKChainsController.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIKRetargetFKChainsController.OuterSingleton,
               &Z_Construct_UClass_UIKRetargetFKChainsController_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIKRetargetFKChainsController.OuterSingleton;
}

// Z_Construct_UEnum_IKRig_EFKChainRotationMode @ 14deebc00

UEnum * __cdecl Z_Construct_UEnum_IKRig_EFKChainRotationMode(void)

{
  if (Z_Registration_Info_UEnum_EFKChainRotationMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EFKChainRotationMode.InnerSingleton,
               &Z_Construct_UEnum_IKRig_EFKChainRotationMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EFKChainRotationMode.InnerSingleton;
}

// Z_Construct_UEnum_IKRig_EFKChainTranslationMode @ 14deebc40

UEnum * __cdecl Z_Construct_UEnum_IKRig_EFKChainTranslationMode(void)

{
  if (Z_Registration_Info_UEnum_EFKChainTranslationMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EFKChainTranslationMode.InnerSingleton,
               &Z_Construct_UEnum_IKRig_EFKChainTranslationMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EFKChainTranslationMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FIKRetargetFKChainsOpSettings @ 14deebc80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRetargetFKChainsOpSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetFKChainsOpSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRetargetFKChainsOpSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRetargetFKChainsOpSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetFKChainsOpSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRetargetFKChainsOpSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRetargetFKChainSettings @ 14deebd00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRetargetFKChainSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRetargetFKChainSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRetargetFKChainSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FRetargetFKChainSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRetargetFKChainSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRetargetFKChainSettings.InnerSingleton;
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

// EFKChainTranslationMode_StaticEnum @ 14deebd80

UEnum * __cdecl EFKChainTranslationMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFKChainTranslationMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UEnum_EFKChainTranslationMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_IKRig_EFKChainTranslationMode,(UObject *)pUVar1,
                       L"EFKChainTranslationMode");
  }
  return Z_Registration_Info_UEnum_EFKChainTranslationMode.OuterSingleton;
}

// Z_Construct_UClass_UIKRetargetStretchChainController @ 14deebdc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIKRetargetStretchChainController(void)

{
  if (Z_Registration_Info_UClass_UIKRetargetStretchChainController.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIKRetargetStretchChainController.OuterSingleton,
               &Z_Construct_UClass_UIKRetargetStretchChainController_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIKRetargetStretchChainController.OuterSingleton;
}

// NewStructOps @ 14deebe00

void * __cdecl Z_Construct_UScriptStruct_FRigUnit_IKRig_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x160;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigUnit_IKRig,&UE::CoreUObject::Private::Construct<FRigUnit_IKRig>,&UE::CoreUObject::Private::ConstructForTests<FRigUnit_IKRig>,&UE::CoreUObject::Private::Destruct<FRigUnit_IKRig>,&UE::CoreUObject::Private::Copy<FRigUnit_IKRig>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FIKRetargetStretchChainOpSettings @ 14deebe40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRetargetStretchChainOpSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetStretchChainOpSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRetargetStretchChainOpSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRetargetStretchChainOpSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetStretchChainOpSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRetargetStretchChainOpSettings.InnerSingleton;
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

// NewStructOps @ 14deebec0

void * __cdecl
Z_Construct_UScriptStruct_FIKRetargetAlignPoleVectorOpSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRetargetAlignPoleVectorOpSettings,&UE::CoreUObject::Private::Construct<FIKRetargetAlignPoleVectorOpSettings>,&UE::CoreUObject::Private::ConstructForTests<FIKRetargetAlignPoleVectorOpSettings>,&UE::CoreUObject::Private::Destruct<FIKRetargetAlignPoleVectorOpSettings>,&UE::CoreUObject::Private::Copy<FIKRetargetAlignPoleVectorOpSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FRetargetStretchChainSettings @ 14deebf00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRetargetStretchChainSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRetargetStretchChainSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRetargetStretchChainSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FRetargetStretchChainSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRetargetStretchChainSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRetargetStretchChainSettings.InnerSingleton;
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

// NewProp_bEnabled_SetBit @ 14deebf80

void __cdecl
Z_Construct_UScriptStruct_FRetargetStretchChainSettings_Statics::NewProp_bEnabled_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewStructOps @ 14deebfd0

void * __cdecl Z_Construct_UScriptStruct_FRetargetStretchChainSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRetargetStretchChainSettings,&UE::CoreUObject::Private::Construct<FRetargetStretchChainSettings>,&UE::CoreUObject::Private::ConstructForTests<FRetargetStretchChainSettings>,&UE::CoreUObject::Private::Destruct<FRetargetStretchChainSettings>,&UE::CoreUObject::Private::Copy<FRetargetStretchChainSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UIKRetargetPinBoneController_SetSettings @ 14deec850

UFunction * __cdecl Z_Construct_UFunction_UIKRetargetPinBoneController_SetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetPinBoneController_SetSettings_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EFKChainRotationMode_StaticEnum @ 14deecc50

UEnum * __cdecl EFKChainRotationMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFKChainRotationMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UEnum_EFKChainRotationMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_IKRig_EFKChainRotationMode,(UObject *)pUVar1,
                       L"EFKChainRotationMode");
  }
  return Z_Registration_Info_UEnum_EFKChainRotationMode.OuterSingleton;
}

// Z_Construct_UClass_UIKRig_BodyMover @ 14deed0b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIKRig_BodyMover(void)

{
  if (Z_Registration_Info_UClass_UIKRig_BodyMover.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIKRig_BodyMover.OuterSingleton,
               &Z_Construct_UClass_UIKRig_BodyMover_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIKRig_BodyMover.OuterSingleton;
}

// Z_Construct_UClass_UIKRig_BodyMoverEffector @ 14deed0f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIKRig_BodyMoverEffector(void)

{
  if (Z_Registration_Info_UClass_UIKRig_BodyMoverEffector.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIKRig_BodyMoverEffector.OuterSingleton,
               &Z_Construct_UClass_UIKRig_BodyMoverEffector_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIKRig_BodyMoverEffector.OuterSingleton;
}

// Z_Construct_UClass_UIKRigBodyMoverController @ 14deed130

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIKRigBodyMoverController(void)

{
  if (Z_Registration_Info_UClass_UIKRigBodyMoverController.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIKRigBodyMoverController.OuterSingleton,
               &Z_Construct_UClass_UIKRigBodyMoverController_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIKRigBodyMoverController.OuterSingleton;
}

// Z_Construct_UClass_UIKRigSolver @ 14deed220

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIKRigSolver(void)

{
  if (Z_Registration_Info_UClass_UIKRigSolver.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIKRigSolver.OuterSingleton,
               &Z_Construct_UClass_UIKRigSolver_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIKRigSolver.OuterSingleton;
}

// Z_Construct_UClass_UIKRigSolverControllerBase @ 14deed260

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIKRigSolverControllerBase(void)

{
  if (Z_Registration_Info_UClass_UIKRigSolverControllerBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIKRigSolverControllerBase.OuterSingleton,
               &Z_Construct_UClass_UIKRigSolverControllerBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIKRigSolverControllerBase.OuterSingleton;
}

// Z_Construct_UScriptStruct_FIKRigBodyMoverGoalSettings @ 14deed2a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRigBodyMoverGoalSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRigBodyMoverGoalSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRigBodyMoverGoalSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRigBodyMoverGoalSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRigBodyMoverGoalSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRigBodyMoverGoalSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FIKRigBodyMoverSettings @ 14deed320

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRigBodyMoverSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRigBodyMoverSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRigBodyMoverSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRigBodyMoverSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRigBodyMoverSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRigBodyMoverSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FIKRigGoalSettingsBase @ 14deed3a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRigGoalSettingsBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRigGoalSettingsBase.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRigGoalSettingsBase.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRigGoalSettingsBase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRigGoalSettingsBase.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRigGoalSettingsBase.InnerSingleton;
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

// Z_Construct_UScriptStruct_FIKRigSolverBase @ 14deed4c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRigSolverBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRigSolverBase.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRigSolverBase.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRigSolverBase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRigSolverBase.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRigSolverBase.InnerSingleton;
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

// Z_Construct_UScriptStruct_FIKRigSolverSettingsBase @ 14deed540

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRigSolverSettingsBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRigSolverSettingsBase.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRigSolverSettingsBase.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRigSolverSettingsBase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRigSolverSettingsBase.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRigSolverSettingsBase.InnerSingleton;
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

// NewProp_EnableFK_SetBit @ 14deed5c0

void __cdecl
Z_Construct_UScriptStruct_FRetargetFKChainSettings_Statics::NewProp_EnableFK_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewStructOps @ 14deed5e0

void * __cdecl Z_Construct_UScriptStruct_FIKRigBodyMoverGoalSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRigBodyMoverGoalSettings,&UE::CoreUObject::Private::Construct<FIKRigBodyMoverGoalSettings>,&UE::CoreUObject::Private::ConstructForTests<FIKRigBodyMoverGoalSettings>,&UE::CoreUObject::Private::Destruct<FIKRigBodyMoverGoalSettings>,&UE::CoreUObject::Private::Copy<FIKRigBodyMoverGoalSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14deed710

void * __cdecl Z_Construct_UScriptStruct_FRetargetFKChainSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRetargetFKChainSettings,&UE::CoreUObject::Private::Construct<FRetargetFKChainSettings>,&UE::CoreUObject::Private::ConstructForTests<FRetargetFKChainSettings>,&UE::CoreUObject::Private::Destruct<FRetargetFKChainSettings>,&UE::CoreUObject::Private::Copy<FRetargetFKChainSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14deed860

void * __cdecl
Z_Construct_UScriptStruct_FIKRetargetStretchChainOpSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRetargetStretchChainOpSettings,&UE::CoreUObject::Private::Construct<FIKRetargetStretchChainOpSettings>,&UE::CoreUObject::Private::ConstructForTests<FIKRetargetStretchChainOpSettings>,&UE::CoreUObject::Private::Destruct<FIKRetargetStretchChainOpSettings>,&UE::CoreUObject::Private::Copy<FIKRetargetStretchChainOpSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14deed8a0

void * __cdecl Z_Construct_UScriptStruct_FIKRetargetAlignPoleVectorOp_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRetargetAlignPoleVectorOp,&UE::CoreUObject::Private::Construct<FIKRetargetAlignPoleVectorOp>,&UE::CoreUObject::Private::ConstructForTests<FIKRetargetAlignPoleVectorOp>,&UE::CoreUObject::Private::Destruct<FIKRetargetAlignPoleVectorOp>,&UE::CoreUObject::Private::Copy<FIKRetargetAlignPoleVectorOp>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bCopyTranslation_SetBit @ 14deed8e0

void __cdecl Z_Construct_UClass_UPinBoneOp_Statics::NewProp_bCopyTranslation_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x41) = 1;
  return;
}

// NewProp_bCopyRotation_SetBit @ 14deed8f0

void __cdecl Z_Construct_UClass_UPinBoneOp_Statics::NewProp_bCopyRotation_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x42) = 1;
  return;
}

// NewProp_bCopyScale_SetBit @ 14deed900

void __cdecl Z_Construct_UClass_UPinBoneOp_Statics::NewProp_bCopyScale_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x43) = 1;
  return;
}

// NewProp_bMaintainOffset_SetBit @ 14deed910

void __cdecl Z_Construct_UClass_UPinBoneOp_Statics::NewProp_bMaintainOffset_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x110) = 1;
  return;
}

// NewProp_bDrawChainLines_SetBit @ 14deedb00

void __cdecl
Z_Construct_UScriptStruct_FIKRetargetFKChainsOpSettings_Statics::NewProp_bDrawChainLines_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewProp_bDrawSingleBoneChains_SetBit @ 14deedb50

void __cdecl
Z_Construct_UScriptStruct_FIKRetargetFKChainsOpSettings_Statics::
NewProp_bDrawSingleBoneChains_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x31) = 1;
  return;
}

// NewStructOps @ 14deedb60

void * __cdecl Z_Construct_UScriptStruct_FIKRetargetFKChainsOpSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRetargetFKChainsOpSettings,&UE::CoreUObject::Private::Construct<FIKRetargetFKChainsOpSettings>,&UE::CoreUObject::Private::ConstructForTests<FIKRetargetFKChainsOpSettings>,&UE::CoreUObject::Private::Destruct<FIKRetargetFKChainsOpSettings>,&UE::CoreUObject::Private::Copy<FIKRetargetFKChainsOpSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14deedba0

void * __cdecl Z_Construct_UScriptStruct_FIKRigBodyMoverSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRigBodyMoverSettings,&UE::CoreUObject::Private::Construct<FIKRigBodyMoverSettings>,&UE::CoreUObject::Private::ConstructForTests<FIKRigBodyMoverSettings>,&UE::CoreUObject::Private::Destruct<FIKRigBodyMoverSettings>,&UE::CoreUObject::Private::Copy<FIKRigBodyMoverSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UIKRig_SetTransform @ 14deedca0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIKRig_SetTransform(void)

{
  if (Z_Registration_Info_UClass_UIKRig_SetTransform.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIKRig_SetTransform.OuterSingleton,
               &Z_Construct_UClass_UIKRig_SetTransform_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIKRig_SetTransform.OuterSingleton;
}

// NewStructOps @ 14deedce0

void * __cdecl Z_Construct_UScriptStruct_FIKRetargetStretchChainOp_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRetargetStretchChainOp,&UE::CoreUObject::Private::Construct<FIKRetargetStretchChainOp>,&UE::CoreUObject::Private::ConstructForTests<FIKRetargetStretchChainOp>,&UE::CoreUObject::Private::Destruct<FIKRetargetStretchChainOp>,&UE::CoreUObject::Private::Copy<FIKRetargetStretchChainOp>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UIKRig_SetTransformEffector @ 14deedd20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIKRig_SetTransformEffector(void)

{
  if (Z_Registration_Info_UClass_UIKRig_SetTransformEffector.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIKRig_SetTransformEffector.OuterSingleton,
               &Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIKRig_SetTransformEffector.OuterSingleton;
}

// Z_Construct_UClass_UIKRigSetTransformController @ 14deedd60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIKRigSetTransformController(void)

{
  if (Z_Registration_Info_UClass_UIKRigSetTransformController.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIKRigSetTransformController.OuterSingleton,
               &Z_Construct_UClass_UIKRigSetTransformController_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIKRigSetTransformController.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14deedda0

void * __thiscall
FAnimNode_RetargetPoseFromMesh::_scalar_deleting_destructor_
          (FAnimNode_RetargetPoseFromMesh *this,uint param_1)

{
  ~FAnimNode_RetargetPoseFromMesh(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x380);
  }
  return this;
}

// Z_Construct_UScriptStruct_FIKRigSetTransformSettings @ 14deedde0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRigSetTransformSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRigSetTransformSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRigSetTransformSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRigSetTransformSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRigSetTransformSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRigSetTransformSettings.InnerSingleton;
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

// NewProp_bPropagateToChildren_SetBit @ 14deedec0

void __cdecl
Z_Construct_UScriptStruct_FIKRigSetTransformSettings_Statics::NewProp_bPropagateToChildren_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  return;
}

// NewStructOps @ 14deedf20

void * __cdecl Z_Construct_UScriptStruct_FIKRigSetTransformSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRigSetTransformSettings,&UE::CoreUObject::Private::Construct<FIKRigSetTransformSettings>,&UE::CoreUObject::Private::ConstructForTests<FIKRigSetTransformSettings>,&UE::CoreUObject::Private::Destruct<FIKRigSetTransformSettings>,&UE::CoreUObject::Private::Copy<FIKRigSetTransformSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UIKRigSolver_NoRegister @ 14deedf60

UClass * __cdecl Z_Construct_UClass_UIKRigSolver_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRigSolver.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRigSolver",
               &Z_Registration_Info_UClass_UIKRigSolver.InnerSingleton,
               UIKRigSolver::StaticRegisterNativesUIKRigSolver,0x30,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UIKRigSolver>,
               InternalVTableHelperCtorCaller<UIKRigSolver>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRigSolver.InnerSingleton;
}

// Z_Construct_UFunction_UIKRetargetAlignPoleVectorController_GetSettings @ 14deee050

UFunction * __cdecl Z_Construct_UFunction_UIKRetargetAlignPoleVectorController_GetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetAlignPoleVectorController_GetSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14deeeae0

void * __cdecl Z_Construct_UScriptStruct_FIKRetargetFKChainsOp_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xd8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRetargetFKChainsOp,&UE::CoreUObject::Private::Construct<FIKRetargetFKChainsOp>,&UE::CoreUObject::Private::ConstructForTests<FIKRetargetFKChainsOp>,&UE::CoreUObject::Private::Destruct<FIKRetargetFKChainsOp>,&UE::CoreUObject::Private::Copy<FIKRetargetFKChainsOp>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UIKRetargetAlignPoleVectorController_SetSettings @ 14deeecd0

UFunction * __cdecl Z_Construct_UFunction_UIKRetargetAlignPoleVectorController_SetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetAlignPoleVectorController_SetSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14deeef00

void * __cdecl Z_Construct_UScriptStruct_FIKRigBodyMoverSolver_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRigBodyMoverSolver,&UE::CoreUObject::Private::Construct<FIKRigBodyMoverSolver>,&UE::CoreUObject::Private::ConstructForTests<FIKRigBodyMoverSolver>,&UE::CoreUObject::Private::Destruct<FIKRigBodyMoverSolver>,&UE::CoreUObject::Private::Copy<FIKRigBodyMoverSolver>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UIKRetargetStretchChainController_GetSettings @ 14deef0b0

UFunction * __cdecl Z_Construct_UFunction_UIKRetargetStretchChainController_GetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetStretchChainController_GetSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14deef2d0

void * __cdecl Z_Construct_UScriptStruct_FIKRigSetTransform_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRigSetTransform,&UE::CoreUObject::Private::Construct<FIKRigSetTransform>,&UE::CoreUObject::Private::ConstructForTests<FIKRigSetTransform>,&UE::CoreUObject::Private::Destruct<FIKRigSetTransform>,&UE::CoreUObject::Private::Copy<FIKRigSetTransform>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14deef360

void * __thiscall
FIKRigSolverBase::_scalar_deleting_destructor_(FIKRigSolverBase *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FIKRigSolverBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14deef740

void * __thiscall
FIKRetargetIKChainsOp::_scalar_deleting_destructor_(FIKRetargetIKChainsOp *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  UObject *pUVar2;
  
  pFVar1 = (this->IKChainRetargeters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Settings).ChainsToRetarget.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->Settings)._padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  pUVar2 = (UObject *)(this->Settings)._padding_;
  if (pUVar2 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar2);
    (this->Settings)._padding_ = 0;
  }
  this->_padding_ = (longlong)&___7FIKRetargetOpBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// Z_Construct_UFunction_UIKRetargetStretchChainController_SetSettings @ 14deef840

UFunction * __cdecl Z_Construct_UFunction_UIKRetargetStretchChainController_SetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetStretchChainController_SetSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UIKRetargetFKChainsController_GetSettings @ 14deefb30

UFunction * __cdecl Z_Construct_UFunction_UIKRetargetFKChainsController_GetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetFKChainsController_GetSettings_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UIKRigComponent @ 14deefb70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIKRigComponent(void)

{
  if (Z_Registration_Info_UClass_UIKRigComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIKRigComponent.OuterSingleton,
               &Z_Construct_UClass_UIKRigComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIKRigComponent.OuterSingleton;
}

// Z_Construct_UFunction_UIKRigComponent_ClearAllGoals @ 14deefc60

UFunction * __cdecl Z_Construct_UFunction_UIKRigComponent_ClearAllGoals(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRigComponent_ClearAllGoals_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UIKRigSetTransformController_GetSolverSettings @ 14deefcc0

UFunction * __cdecl Z_Construct_UFunction_UIKRigSetTransformController_GetSolverSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRigSetTransformController_GetSolverSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14deefd00

void * __thiscall FIKRigModule::_scalar_deleting_destructor_(FIKRigModule *this,uint param_1)

{
  *this = (FIKRigModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UFunction_UIKRigBodyMoverController_GetGoalSettings @ 14deefd40

UFunction * __cdecl Z_Construct_UFunction_UIKRigBodyMoverController_GetGoalSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRigBodyMoverController_GetGoalSettings_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UIKRigComponent_SetIKRigGoal @ 14deefe70

UFunction * __cdecl Z_Construct_UFunction_UIKRigComponent_SetIKRigGoal(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRigComponent_SetIKRigGoal_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UIKRigSetTransformController_SetSolverSettings @ 14deeffc0

UFunction * __cdecl Z_Construct_UFunction_UIKRigSetTransformController_SetSolverSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRigSetTransformController_SetSolverSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UIKRigBodyMoverController_GetSolverSettings @ 14def0140

UFunction * __cdecl Z_Construct_UFunction_UIKRigBodyMoverController_GetSolverSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRigBodyMoverController_GetSolverSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UIKRetargetFKChainsController_SetSettings @ 14def0240

UFunction * __cdecl Z_Construct_UFunction_UIKRetargetFKChainsController_SetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetFKChainsController_SetSettings_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation @ 14def02c0

UFunction * __cdecl Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UIKRigBodyMoverController_SetGoalSettings @ 14def0380

UFunction * __cdecl Z_Construct_UFunction_UIKRigBodyMoverController_SetGoalSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRigBodyMoverController_SetGoalSettings_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UIKRigEffectorGoal_NoRegister @ 14def0a20

UClass * __cdecl Z_Construct_UClass_UIKRigEffectorGoal_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRigEffectorGoal.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRigEffectorGoal",
               &Z_Registration_Info_UClass_UIKRigEffectorGoal.InnerSingleton,
               UIKRigEffectorGoal::StaticRegisterNativesUIKRigEffectorGoal,0x100,0x10,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UIKRigEffectorGoal>,
               InternalVTableHelperCtorCaller<UIKRigEffectorGoal>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRigEffectorGoal.InnerSingleton;
}

// Z_Construct_UClass_UIKRigDefinition_NoRegister @ 14def0ad0

UClass * __cdecl Z_Construct_UClass_UIKRigDefinition_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRigDefinition.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRigDefinition",
               &Z_Registration_Info_UClass_UIKRigDefinition.InnerSingleton,
               UIKRigDefinition::StaticRegisterNativesUIKRigDefinition,0x110,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRigDefinition>,
               InternalVTableHelperCtorCaller<UIKRigDefinition>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRigDefinition.InnerSingleton;
}

// Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform @ 14def0b80

UFunction * __cdecl Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnablePosition_SetBit @ 14def0c70

void __cdecl
Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::NewProp_bEnablePosition_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_bEnableRotation_SetBit @ 14def0c80

void __cdecl
Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::NewProp_bEnableRotation_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  return;
}

// Z_Construct_UClass_UIKRetargetAdditivePoseController @ 14def0c90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIKRetargetAdditivePoseController(void)

{
  if (Z_Registration_Info_UClass_UIKRetargetAdditivePoseController.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIKRetargetAdditivePoseController.OuterSingleton,
               &Z_Construct_UClass_UIKRetargetAdditivePoseController_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIKRetargetAdditivePoseController.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14def0cd0

void * __thiscall
FIKRetargetPelvisMotionOp::_scalar_deleting_destructor_
          (FIKRetargetPelvisMotionOp *this,uint param_1)

{
  UObject *pUVar1;
  
  (this->Settings)._padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  pUVar1 = (UObject *)(this->Settings)._padding_;
  if (pUVar1 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar1);
    (this->Settings)._padding_ = 0;
  }
  *(undefined ***)this = &___7FIKRetargetOpBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2c0);
  }
  return this;
}

// Z_Construct_UFunction_UIKRigBodyMoverController_SetSolverSettings @ 14def0d40

UFunction * __cdecl Z_Construct_UFunction_UIKRigBodyMoverController_SetSolverSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRigBodyMoverController_SetSolverSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FIKRetargetAdditivePoseOpSettings @ 14def0dc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRetargetAdditivePoseOpSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetAdditivePoseOpSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRetargetAdditivePoseOpSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRetargetAdditivePoseOpSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetAdditivePoseOpSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRetargetAdditivePoseOpSettings.InnerSingleton;
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

// NewStructOps @ 14def0e40

void * __cdecl
Z_Construct_UScriptStruct_FIKRetargetAdditivePoseOpSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRetargetAdditivePoseOpSettings,&UE::CoreUObject::Private::Construct<FIKRetargetAdditivePoseOpSettings>,&UE::CoreUObject::Private::ConstructForTests<FIKRetargetAdditivePoseOpSettings>,&UE::CoreUObject::Private::Destruct<FIKRetargetAdditivePoseOpSettings>,&UE::CoreUObject::Private::Copy<FIKRetargetAdditivePoseOpSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FRetargetChainMapping @ 14def0f40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRetargetChainMapping(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRetargetChainMapping.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRetargetChainMapping.InnerSingleton,
               &Z_Construct_UScriptStruct_FRetargetChainMapping_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRetargetChainMapping.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FRetargetChainMapping.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRetargetChainPair @ 14def0fc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRetargetChainPair(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRetargetChainPair.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRetargetChainPair.InnerSingleton,
               &Z_Construct_UScriptStruct_FRetargetChainPair_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRetargetChainPair.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRetargetChainPair.InnerSingleton;
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

// EAutoMapChainType_StaticEnum @ 14def1040

UEnum * __cdecl EAutoMapChainType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAutoMapChainType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UEnum_EAutoMapChainType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_IKRig_EAutoMapChainType,(UObject *)pUVar1,
                       L"EAutoMapChainType");
  }
  return Z_Registration_Info_UEnum_EAutoMapChainType.OuterSingleton;
}

// NewStructOps @ 14def26c0

void * __cdecl Z_Construct_UScriptStruct_FRetargetChainPair_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRetargetChainPair,&UE::CoreUObject::Private::Construct<FRetargetChainPair>,&UE::CoreUObject::Private::ConstructForTests<FRetargetChainPair>,&UE::CoreUObject::Private::Destruct<FRetargetChainPair>,&UE::CoreUObject::Private::Copy<FRetargetChainPair>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14def2e40

void * __thiscall
FIKRetargetCurveRemapOp::_scalar_deleting_destructor_(FIKRetargetCurveRemapOp *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  UObject *pUVar2;
  
  if (*(void **)&this->SourceCurves != (void *)0x0) {
    FMemory::Free(*(void **)&this->SourceCurves);
  }
  pFVar1 = (this->Settings).CurvesToRemap.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->Settings)._padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  pUVar2 = (UObject *)(this->Settings)._padding_;
  if (pUVar2 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar2);
    (this->Settings)._padding_ = 0;
  }
  this->_padding_ = (longlong)&___7FIKRetargetOpBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// NewProp_bStartFromRefPose_SetBit @ 14def2f00

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_bStartFromRefPose_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x80) = 1;
  return;
}

// Z_Construct_UClass_UIKRig_FBIKBoneSettings @ 14def2f40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIKRig_FBIKBoneSettings(void)

{
  if (Z_Registration_Info_UClass_UIKRig_FBIKBoneSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIKRig_FBIKBoneSettings.OuterSingleton,
               &Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIKRig_FBIKBoneSettings.OuterSingleton;
}

// NewProp_bAlphaBoolEnabled_SetBit @ 14def2f80

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_bAlphaBoolEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x82) = 1;
  return;
}

// Z_Construct_UClass_UIKRig_FBIKEffector @ 14def2f90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIKRig_FBIKEffector(void)

{
  if (Z_Registration_Info_UClass_UIKRig_FBIKEffector.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIKRig_FBIKEffector.OuterSingleton,
               &Z_Construct_UClass_UIKRig_FBIKEffector_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIKRig_FBIKEffector.OuterSingleton;
}

// Z_Construct_UClass_UIKRigFBIKController @ 14def30e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIKRigFBIKController(void)

{
  if (Z_Registration_Info_UClass_UIKRigFBIKController.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIKRigFBIKController.OuterSingleton,
               &Z_Construct_UClass_UIKRigFBIKController_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIKRigFBIKController.OuterSingleton;
}

// Z_Construct_UClass_UIKRigFBIKSolver @ 14def3120

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIKRigFBIKSolver(void)

{
  if (Z_Registration_Info_UClass_UIKRigFBIKSolver.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIKRigFBIKSolver.OuterSingleton,
               &Z_Construct_UClass_UIKRigFBIKSolver_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIKRigFBIKSolver.OuterSingleton;
}

// Z_Construct_UScriptStruct_FIKRigBoneSettingsBase @ 14def31a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRigBoneSettingsBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRigBoneSettingsBase.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRigBoneSettingsBase.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRigBoneSettingsBase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRigBoneSettingsBase.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRigBoneSettingsBase.InnerSingleton;
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

// Z_Construct_UScriptStruct_FIKRigFBIKBoneSettings @ 14def3220

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRigFBIKBoneSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRigFBIKBoneSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRigFBIKBoneSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRigFBIKBoneSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRigFBIKBoneSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRigFBIKBoneSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FIKRigFBIKGoalSettings @ 14def32a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRigFBIKGoalSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRigFBIKGoalSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRigFBIKGoalSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRigFBIKGoalSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRigFBIKGoalSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRigFBIKGoalSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FIKRigFBIKSettings @ 14def3320

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRigFBIKSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRigFBIKSettings.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRigFBIKSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRigFBIKSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRigFBIKSettings.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRigFBIKSettings.InnerSingleton;
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

// NewStructOps @ 14def33a0

void * __cdecl Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x308;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNode_IKRig,&UE::CoreUObject::Private::Construct<FAnimNode_IKRig>,&UE::CoreUObject::Private::ConstructForTests<FAnimNode_IKRig>,&UE::CoreUObject::Private::Destruct<FAnimNode_IKRig>,&UE::CoreUObject::Private::Copy<FAnimNode_IKRig>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14def34d0

void * __cdecl Z_Construct_UScriptStruct_FIKRetargetAdditivePoseOp_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRetargetAdditivePoseOp,&UE::CoreUObject::Private::Construct<FIKRetargetAdditivePoseOp>,&UE::CoreUObject::Private::ConstructForTests<FIKRetargetAdditivePoseOp>,&UE::CoreUObject::Private::Destruct<FIKRetargetAdditivePoseOp>,&UE::CoreUObject::Private::Copy<FIKRetargetAdditivePoseOp>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14def3550

void * __cdecl Z_Construct_UScriptStruct_FIKRigFBIKGoalSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRigFBIKGoalSettings,&UE::CoreUObject::Private::Construct<FIKRigFBIKGoalSettings>,&UE::CoreUObject::Private::ConstructForTests<FIKRigFBIKGoalSettings>,&UE::CoreUObject::Private::Destruct<FIKRigFBIKGoalSettings>,&UE::CoreUObject::Private::Copy<FIKRigFBIKGoalSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14def3e60

void * __cdecl Z_Construct_UScriptStruct_FRetargetChainMapping_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRetargetChainMapping,&UE::CoreUObject::Private::Construct<FRetargetChainMapping>,&UE::CoreUObject::Private::ConstructForTests<FRetargetChainMapping>,&UE::CoreUObject::Private::Destruct<FRetargetChainMapping>,&UE::CoreUObject::Private::Copy<FRetargetChainMapping>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14def3ea0

void * __thiscall
FIKRetargetRunIKRigOp::_scalar_deleting_destructor_(FIKRetargetRunIKRigOp *this,uint param_1)

{
  ~FIKRetargetRunIKRigOp(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x200);
  }
  return this;
}

// Z_Construct_UFunction_UIKRetargetAdditivePoseController_GetSettings @ 14def4490

UFunction * __cdecl Z_Construct_UFunction_UIKRetargetAdditivePoseController_GetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetAdditivePoseController_GetSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FIKRigSettingsBase @ 14def44d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRigSettingsBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRigSettingsBase.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRigSettingsBase.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRigSettingsBase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRigSettingsBase.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRigSettingsBase.InnerSingleton;
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

// NewStructOps @ 14def4550

void * __cdecl Z_Construct_UScriptStruct_FIKRigSettingsBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRigSettingsBase,&UE::CoreUObject::Private::Construct<FIKRigSettingsBase>,&UE::CoreUObject::Private::ConstructForTests<FIKRigSettingsBase>,&UE::CoreUObject::Private::Destruct<FIKRigSettingsBase>,&UE::CoreUObject::Private::Copy<FIKRigSettingsBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bUsePreferredAngles_SetBit @ 14def4590

void __cdecl
Z_Construct_UScriptStruct_FIKRigFBIKBoneSettings_Statics::NewProp_bUsePreferredAngles_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x3c) = 1;
  return;
}

// Z_Construct_UClass_UIKRetargetStrideWarpingController @ 14def45a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIKRetargetStrideWarpingController(void)

{
  if (Z_Registration_Info_UClass_UIKRetargetStrideWarpingController.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIKRetargetStrideWarpingController.OuterSingleton,
               &Z_Construct_UClass_UIKRetargetStrideWarpingController_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIKRetargetStrideWarpingController.OuterSingleton;
}

// NewStructOps @ 14def45e0

void * __cdecl Z_Construct_UScriptStruct_FIKRigFBIKBoneSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRigFBIKBoneSettings,&UE::CoreUObject::Private::Construct<FIKRigFBIKBoneSettings>,&UE::CoreUObject::Private::ConstructForTests<FIKRigFBIKBoneSettings>,&UE::CoreUObject::Private::Destruct<FIKRigFBIKBoneSettings>,&UE::CoreUObject::Private::Copy<FIKRigFBIKBoneSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FIKRetargetStrideWarpingOpSettings @ 14def4620

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRetargetStrideWarpingOpSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetStrideWarpingOpSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRetargetStrideWarpingOpSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRetargetStrideWarpingOpSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetStrideWarpingOpSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRetargetStrideWarpingOpSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRetargetStrideWarpChainSettings @ 14def46a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRetargetStrideWarpChainSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRetargetStrideWarpChainSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRetargetStrideWarpChainSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FRetargetStrideWarpChainSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRetargetStrideWarpChainSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRetargetStrideWarpChainSettings.InnerSingleton;
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

// EWarpingDirectionSource_StaticEnum @ 14def4720

UEnum * __cdecl EWarpingDirectionSource_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWarpingDirectionSource.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UEnum_EWarpingDirectionSource.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_IKRig_EWarpingDirectionSource,(UObject *)pUVar1,
                       L"EWarpingDirectionSource");
  }
  return Z_Registration_Info_UEnum_EWarpingDirectionSource.OuterSingleton;
}

// Z_Construct_UClass_UIKRetargetFloorGoalsController @ 14def47a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIKRetargetFloorGoalsController(void)

{
  if (Z_Registration_Info_UClass_UIKRetargetFloorGoalsController.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIKRetargetFloorGoalsController.OuterSingleton,
               &Z_Construct_UClass_UIKRetargetFloorGoalsController_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIKRetargetFloorGoalsController.OuterSingleton;
}

// Z_Construct_UScriptStruct_FFloorConstraintChainSettings @ 14def47e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FFloorConstraintChainSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FFloorConstraintChainSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FFloorConstraintChainSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FFloorConstraintChainSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FFloorConstraintChainSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FFloorConstraintChainSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FIKRetargetFloorConstraintOpSettings @ 14def4860

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRetargetFloorConstraintOpSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetFloorConstraintOpSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRetargetFloorConstraintOpSettings.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRetargetFloorConstraintOpSettings_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetFloorConstraintOpSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRetargetFloorConstraintOpSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FIKRetargetIKChainsOpSettings @ 14def48e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRetargetIKChainsOpSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetIKChainsOpSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRetargetIKChainsOpSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRetargetIKChainsOpSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetIKChainsOpSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRetargetIKChainsOpSettings.InnerSingleton;
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

// Z_Construct_UEnum_IKRig_ERetargetSourceMode @ 14def49a0

UEnum * __cdecl Z_Construct_UEnum_IKRig_ERetargetSourceMode(void)

{
  if (Z_Registration_Info_UEnum_ERetargetSourceMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERetargetSourceMode.InnerSingleton,
               &Z_Construct_UEnum_IKRig_ERetargetSourceMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERetargetSourceMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FRetargetProfile @ 14def49e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRetargetProfile(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRetargetProfile.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRetargetProfile.InnerSingleton,
               &Z_Construct_UScriptStruct_FRetargetProfile_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRetargetProfile.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRetargetProfile.InnerSingleton;
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

// NewProp_EnableFloorConstraint_SetBit @ 14def4a60

void __cdecl
Z_Construct_UScriptStruct_FFloorConstraintChainSettings_Statics::
NewProp_EnableFloorConstraint_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UIKRetargetAdditivePoseController_SetSettings @ 14def4a80

UFunction * __cdecl Z_Construct_UFunction_UIKRetargetAdditivePoseController_SetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetAdditivePoseController_SetSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_EnableStrideWarping_SetBit @ 14def4ad0

void __cdecl
Z_Construct_UScriptStruct_FRetargetStrideWarpChainSettings_Statics::
NewProp_EnableStrideWarping_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewStructOps @ 14def4af0

void * __cdecl Z_Construct_UScriptStruct_FFloorConstraintChainSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FFloorConstraintChainSettings,&UE::CoreUObject::Private::Construct<FFloorConstraintChainSettings>,&UE::CoreUObject::Private::ConstructForTests<FFloorConstraintChainSettings>,&UE::CoreUObject::Private::Destruct<FFloorConstraintChainSettings>,&UE::CoreUObject::Private::Copy<FFloorConstraintChainSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14def4bc0

void * __cdecl
Z_Construct_UScriptStruct_FRetargetStrideWarpChainSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRetargetStrideWarpChainSettings,&UE::CoreUObject::Private::Construct<FRetargetStrideWarpChainSettings>,&UE::CoreUObject::Private::ConstructForTests<FRetargetStrideWarpChainSettings>,&UE::CoreUObject::Private::Destruct<FRetargetStrideWarpChainSettings>,&UE::CoreUObject::Private::Copy<FRetargetStrideWarpChainSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// ERetargetSourceMode_StaticEnum @ 14def4c00

UEnum * __cdecl ERetargetSourceMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERetargetSourceMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UEnum_ERetargetSourceMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_IKRig_ERetargetSourceMode,(UObject *)pUVar1,
                       L"ERetargetSourceMode");
  }
  return Z_Registration_Info_UEnum_ERetargetSourceMode.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14def4c40

void * __thiscall
FIKRetargetScaleSourceOp::_scalar_deleting_destructor_(FIKRetargetScaleSourceOp *this,uint param_1)

{
  UObject *pUVar1;
  
  (this->Settings)._padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  pUVar1 = (UObject *)(this->Settings)._padding_;
  if (pUVar1 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar1);
    (this->Settings)._padding_ = 0;
  }
  this->_padding_ = (longlong)&___7FIKRetargetOpBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// NewStructOps @ 14def4d70

void * __cdecl Z_Construct_UScriptStruct_FIKRigGoalSettingsBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRigGoalSettingsBase,&UE::CoreUObject::Private::Construct<FIKRigGoalSettingsBase>,&UE::CoreUObject::Private::ConstructForTests<FIKRigGoalSettingsBase>,&UE::CoreUObject::Private::Destruct<FIKRigGoalSettingsBase>,&UE::CoreUObject::Private::Copy<FIKRigGoalSettingsBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bSuppressWarnings_SetBit @ 14def4db0

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_bSuppressWarnings_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x168) = 1;
  return;
}

// NewProp_bUseAttachedParent_SetBit @ 14def4dc0

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_bUseAttachedParent_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x169) = 1;
  return;
}

// NewStructOps @ 14def4dd0

void * __cdecl Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x380;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNode_RetargetPoseFromMesh,&UE::CoreUObject::Private::Construct<FAnimNode_RetargetPoseFromMesh>,&UE::CoreUObject::Private::ConstructForTests<FAnimNode_RetargetPoseFromMesh>,&UE::CoreUObject::Private::Destruct<FAnimNode_RetargetPoseFromMesh>,&UE::CoreUObject::Private::SerializeArchive<FAnimNode_RetargetPoseFromMesh>,&UE::CoreUObject::Private::PostSerialize<FAnimNode_RetargetPoseFromMesh>,&UE::CoreUObject::Private::Copy<FAnimNode_RetargetPoseFromMesh>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14def51e0

void * __cdecl
Z_Construct_UScriptStruct_FIKRetargetFloorConstraintOpSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRetargetFloorConstraintOpSettings,&UE::CoreUObject::Private::Construct<FIKRetargetFloorConstraintOpSettings>,&UE::CoreUObject::Private::ConstructForTests<FIKRetargetFloorConstraintOpSettings>,&UE::CoreUObject::Private::Destruct<FIKRetargetFloorConstraintOpSettings>,&UE::CoreUObject::Private::Copy<FIKRetargetFloorConstraintOpSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bEnableDebugDraw_SetBit @ 14def5390

void __cdecl
Z_Construct_UScriptStruct_FIKRetargetStrideWarpingOpSettings_Statics::
NewProp_bEnableDebugDraw_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x60) = 1;
  return;
}

// NewStructOps @ 14def53b0

void * __cdecl
Z_Construct_UScriptStruct_FIKRetargetStrideWarpingOpSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRetargetStrideWarpingOpSettings,&UE::CoreUObject::Private::Construct<FIKRetargetStrideWarpingOpSettings>,&UE::CoreUObject::Private::ConstructForTests<FIKRetargetStrideWarpingOpSettings>,&UE::CoreUObject::Private::Destruct<FIKRetargetStrideWarpingOpSettings>,&UE::CoreUObject::Private::SerializeArchive<FIKRetargetStrideWarpingOpSettings>,&UE::CoreUObject::Private::Copy<FIKRetargetStrideWarpingOpSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bAllowStretch_SetBit @ 14def5430

void __cdecl
Z_Construct_UScriptStruct_FIKRigFBIKSettings_Statics::NewProp_bAllowStretch_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  return;
}

// NewStructOps @ 14def5440

void * __cdecl Z_Construct_UScriptStruct_FIKRigFBIKSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRigFBIKSettings,&UE::CoreUObject::Private::Construct<FIKRigFBIKSettings>,&UE::CoreUObject::Private::ConstructForTests<FIKRigFBIKSettings>,&UE::CoreUObject::Private::Destruct<FIKRigFBIKSettings>,&UE::CoreUObject::Private::Copy<FIKRigFBIKSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14def55d0

void * __cdecl Z_Construct_UScriptStruct_FIKRigBoneSettingsBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRigBoneSettingsBase,&UE::CoreUObject::Private::Construct<FIKRigBoneSettingsBase>,&UE::CoreUObject::Private::ConstructForTests<FIKRigBoneSettingsBase>,&UE::CoreUObject::Private::Destruct<FIKRigBoneSettingsBase>,&UE::CoreUObject::Private::Copy<FIKRigBoneSettingsBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14def57b0

void * __cdecl Z_Construct_UScriptStruct_FIKRetargetStrideWarpingOp_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRetargetStrideWarpingOp,&UE::CoreUObject::Private::Construct<FIKRetargetStrideWarpingOp>,&UE::CoreUObject::Private::ConstructForTests<FIKRetargetStrideWarpingOp>,&UE::CoreUObject::Private::Destruct<FIKRetargetStrideWarpingOp>,&UE::CoreUObject::Private::Copy<FIKRetargetStrideWarpingOp>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14def57f0

void * __cdecl Z_Construct_UScriptStruct_FIKRetargetFloorConstraintOp_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRetargetFloorConstraintOp,&UE::CoreUObject::Private::Construct<FIKRetargetFloorConstraintOp>,&UE::CoreUObject::Private::ConstructForTests<FIKRetargetFloorConstraintOp>,&UE::CoreUObject::Private::Destruct<FIKRetargetFloorConstraintOp>,&UE::CoreUObject::Private::Copy<FIKRetargetFloorConstraintOp>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14def5960

void * __cdecl Z_Construct_UScriptStruct_FIKRigSolverSettingsBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRigSolverSettingsBase,&UE::CoreUObject::Private::Construct<FIKRigSolverSettingsBase>,&UE::CoreUObject::Private::ConstructForTests<FIKRigSolverSettingsBase>,&UE::CoreUObject::Private::Destruct<FIKRigSolverSettingsBase>,&UE::CoreUObject::Private::Copy<FIKRigSolverSettingsBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14def5cc0

void * __cdecl Z_Construct_UScriptStruct_FIKRigFullBodyIKSolver_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xd8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRigFullBodyIKSolver,&UE::CoreUObject::Private::Construct<FIKRigFullBodyIKSolver>,&UE::CoreUObject::Private::ConstructForTests<FIKRigFullBodyIKSolver>,&UE::CoreUObject::Private::Destruct<FIKRigFullBodyIKSolver>,&UE::CoreUObject::Private::Copy<FIKRigFullBodyIKSolver>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UIKRetargetCopyBasePoseController @ 14def68d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIKRetargetCopyBasePoseController(void)

{
  if (Z_Registration_Info_UClass_UIKRetargetCopyBasePoseController.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIKRetargetCopyBasePoseController.OuterSingleton,
               &Z_Construct_UClass_UIKRetargetCopyBasePoseController_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIKRetargetCopyBasePoseController.OuterSingleton;
}

// Z_Construct_UScriptStruct_FIKRetargetCopyBasePoseOpSettings @ 14def6b70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRetargetCopyBasePoseOpSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetCopyBasePoseOpSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRetargetCopyBasePoseOpSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRetargetCopyBasePoseOpSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetCopyBasePoseOpSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRetargetCopyBasePoseOpSettings.InnerSingleton;
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

// NewProp_bCopyBasePose_SetBit @ 14def6c90

void __cdecl
Z_Construct_UScriptStruct_FIKRetargetCopyBasePoseOpSettings_Statics::NewProp_bCopyBasePose_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bIsEnabled_SetBit @ 14def6ca0

void __cdecl
Z_Construct_UScriptStruct_FIKRigSolverBase_Statics::NewProp_bIsEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewStructOps @ 14def6cb0

void * __cdecl
Z_Construct_UScriptStruct_FIKRetargetCopyBasePoseOpSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRetargetCopyBasePoseOpSettings,&UE::CoreUObject::Private::Construct<FIKRetargetCopyBasePoseOpSettings>,&UE::CoreUObject::Private::ConstructForTests<FIKRetargetCopyBasePoseOpSettings>,&UE::CoreUObject::Private::Destruct<FIKRetargetCopyBasePoseOpSettings>,&UE::CoreUObject::Private::SerializeArchive<FIKRetargetCopyBasePoseOpSettings>,&UE::CoreUObject::Private::Copy<FIKRetargetCopyBasePoseOpSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UIKRetargetStrideWarpingController_GetSettings @ 14def6cf0

UFunction * __cdecl Z_Construct_UFunction_UIKRetargetStrideWarpingController_GetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetStrideWarpingController_GetSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14def6d30

void * __cdecl Z_Construct_UScriptStruct_FIKRigSolverBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRigSolverBase,&UE::CoreUObject::Private::Construct<FIKRigSolverBase>,&UE::CoreUObject::Private::ConstructForTests<FIKRigSolverBase>,&UE::CoreUObject::Private::Destruct<FIKRigSolverBase>,&UE::CoreUObject::Private::Copy<FIKRigSolverBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UIKRetargetFloorGoalsController_GetSettings @ 14def6d70

UFunction * __cdecl Z_Construct_UFunction_UIKRetargetFloorGoalsController_GetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetFloorGoalsController_GetSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14def6db0

void * __thiscall
FIKRetargetRootMotionOp::_scalar_deleting_destructor_(FIKRetargetRootMotionOp *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  UObject *pUVar2;
  
  pFVar1 = (this->NonRetargetedChildrenOfRoot).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->Settings)._padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  pUVar2 = (UObject *)(this->Settings)._padding_;
  if (pUVar2 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar2);
    (this->Settings)._padding_ = 0;
  }
  this->_padding_ = (longlong)&___7FIKRetargetOpBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x290);
  }
  return this;
}

// NewStructOps @ 14def6ef0

void * __cdecl Z_Construct_UScriptStruct_FIKRetargetCopyBasePoseOp_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 200;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRetargetCopyBasePoseOp,&UE::CoreUObject::Private::Construct<FIKRetargetCopyBasePoseOp>,&UE::CoreUObject::Private::ConstructForTests<FIKRetargetCopyBasePoseOp>,&UE::CoreUObject::Private::Destruct<FIKRetargetCopyBasePoseOp>,&UE::CoreUObject::Private::Copy<FIKRetargetCopyBasePoseOp>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UIKRetargetStrideWarpingController_SetSettings @ 14def6f30

UFunction * __cdecl Z_Construct_UFunction_UIKRetargetStrideWarpingController_SetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetStrideWarpingController_SetSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UIKRetargetFloorGoalsController_SetSettings @ 14def6f70

UFunction * __cdecl Z_Construct_UFunction_UIKRetargetFloorGoalsController_SetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetFloorGoalsController_SetSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UIKRigFBIKController_GetBoneSettings @ 14def6fb0

UFunction * __cdecl Z_Construct_UFunction_UIKRigFBIKController_GetBoneSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRigFBIKController_GetBoneSettings_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14def6ff0

void __cdecl
Z_Construct_UFunction_UIKRigSolverControllerBase_GetEnabled_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UIKRigSolverControllerBase_GetEnabled @ 14def70d0

UFunction * __cdecl Z_Construct_UFunction_UIKRigSolverControllerBase_GetEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRigSolverControllerBase_GetEnabled_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsEnabled_SetBit @ 14def7210

void __cdecl
Z_Construct_UFunction_UIKRigSolverControllerBase_SetEnabled_Statics::NewProp_bIsEnabled_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UIKRigFBIKController_GetGoalSettings @ 14def72c0

UFunction * __cdecl Z_Construct_UFunction_UIKRigFBIKController_GetGoalSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRigFBIKController_GetGoalSettings_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14def7330

void * __thiscall FRigUnit_IKRig::_scalar_deleting_destructor_(FRigUnit_IKRig *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  FIKRigProcessor::~FIKRigProcessor(&(this->WorkData).IKRigProcessor);
  pFVar1 = (this->WorkData).CachedRigElements.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Goals).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FRigVMStruct__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x160);
  }
  return this;
}

// Z_Construct_UFunction_UIKRigSolverControllerBase_SetEnabled @ 14def73b0

UFunction * __cdecl Z_Construct_UFunction_UIKRigSolverControllerBase_SetEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRigSolverControllerBase_SetEnabled_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UIKRigFBIKController_GetSolverSettings @ 14def75e0

UFunction * __cdecl Z_Construct_UFunction_UIKRigFBIKController_GetSolverSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRigFBIKController_GetSolverSettings_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UIKRetargetRootMotionController @ 14def7ad0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIKRetargetRootMotionController(void)

{
  if (Z_Registration_Info_UClass_UIKRetargetRootMotionController.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIKRetargetRootMotionController.OuterSingleton,
               &Z_Construct_UClass_UIKRetargetRootMotionController_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIKRetargetRootMotionController.OuterSingleton;
}

// Z_Construct_UFunction_UIKRetargetCopyBasePoseController_AddBoneToExclude @ 14def7b10

UFunction * __cdecl Z_Construct_UFunction_UIKRetargetCopyBasePoseController_AddBoneToExclude(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetCopyBasePoseController_AddBoneToExclude_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_URootMotionGeneratorOp @ 14def7b50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_URootMotionGeneratorOp(void)

{
  if (Z_Registration_Info_UClass_URootMotionGeneratorOp.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_URootMotionGeneratorOp.OuterSingleton,
               &Z_Construct_UClass_URootMotionGeneratorOp_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_URootMotionGeneratorOp.OuterSingleton;
}

// Z_Construct_UEnum_IKRig_ERootMotionHeightSource @ 14def7e70

UEnum * __cdecl Z_Construct_UEnum_IKRig_ERootMotionHeightSource(void)

{
  if (Z_Registration_Info_UEnum_ERootMotionHeightSource.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERootMotionHeightSource.InnerSingleton,
               &Z_Construct_UEnum_IKRig_ERootMotionHeightSource_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERootMotionHeightSource.InnerSingleton;
}

// Z_Construct_UEnum_IKRig_ERootMotionSource @ 14def7eb0

UEnum * __cdecl Z_Construct_UEnum_IKRig_ERootMotionSource(void)

{
  if (Z_Registration_Info_UEnum_ERootMotionSource.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERootMotionSource.InnerSingleton,
               &Z_Construct_UEnum_IKRig_ERootMotionSource_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERootMotionSource.InnerSingleton;
}

// Z_Construct_UScriptStruct_FIKRetargetRootMotionOpSettings @ 14def7f00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRetargetRootMotionOpSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetRootMotionOpSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRetargetRootMotionOpSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRetargetRootMotionOpSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetRootMotionOpSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRetargetRootMotionOpSettings.InnerSingleton;
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

// ERootMotionSource_StaticEnum @ 14def7fe0

UEnum * __cdecl ERootMotionSource_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERootMotionSource.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UEnum_ERootMotionSource.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_IKRig_ERootMotionSource,(UObject *)pUVar1,
                       L"ERootMotionSource");
  }
  return Z_Registration_Info_UEnum_ERootMotionSource.OuterSingleton;
}

// ERootMotionHeightSource_StaticEnum @ 14def83e0

UEnum * __cdecl ERootMotionHeightSource_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERootMotionHeightSource.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UEnum_ERootMotionHeightSource.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_IKRig_ERootMotionHeightSource,(UObject *)pUVar1,
                       L"ERootMotionHeightSource");
  }
  return Z_Registration_Info_UEnum_ERootMotionHeightSource.OuterSingleton;
}

// Z_Construct_UFunction_UIKRetargetCopyBasePoseController_GetBonesToExclude @ 14def8440

UFunction * __cdecl Z_Construct_UFunction_UIKRetargetCopyBasePoseController_GetBonesToExclude(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetCopyBasePoseController_GetBonesToExclude_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UIKRigFBIKController_SetBoneSettings @ 14def84e0

UFunction * __cdecl Z_Construct_UFunction_UIKRigFBIKController_SetBoneSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRigFBIKController_SetBoneSettings_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsEnabled_SetBit @ 14def8640

void __cdecl Z_Construct_UClass_UIKRigSolver_Statics::NewProp_bIsEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_bRotateWithPelvis_SetBit @ 14def8650

void __cdecl
Z_Construct_UScriptStruct_FIKRetargetRootMotionOpSettings_Statics::NewProp_bRotateWithPelvis_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
  return;
}

// NewProp_bMaintainOffsetFromPelvis_SetBit @ 14def8660

void __cdecl
Z_Construct_UScriptStruct_FIKRetargetRootMotionOpSettings_Statics::
NewProp_bMaintainOffsetFromPelvis_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb0) = 1;
  return;
}

// NewProp_bPropagateToNonRetargetedChildren_SetBit @ 14def8670

void __cdecl
Z_Construct_UScriptStruct_FIKRetargetRootMotionOpSettings_Statics::
NewProp_bPropagateToNonRetargetedChildren_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb1) = 1;
  return;
}

// Z_Construct_UFunction_UIKRetargetCopyBasePoseController_GetCopyFromStart @ 14def86d0

UFunction * __cdecl Z_Construct_UFunction_UIKRetargetCopyBasePoseController_GetCopyFromStart(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetCopyBasePoseController_GetCopyFromStart_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14def8940

void * __cdecl Z_Construct_UScriptStruct_FIKRetargetRootMotionOpSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xd0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRetargetRootMotionOpSettings,&UE::CoreUObject::Private::Construct<FIKRetargetRootMotionOpSettings>,&UE::CoreUObject::Private::ConstructForTests<FIKRetargetRootMotionOpSettings>,&UE::CoreUObject::Private::Destruct<FIKRetargetRootMotionOpSettings>,&UE::CoreUObject::Private::SerializeArchive<FIKRetargetRootMotionOpSettings>,&UE::CoreUObject::Private::Copy<FIKRetargetRootMotionOpSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UIKRigFBIKController_SetGoalSettings @ 14def8980

UFunction * __cdecl Z_Construct_UFunction_UIKRigFBIKController_SetGoalSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRigFBIKController_SetGoalSettings_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UIKRetargetCopyBasePoseController_GetSettings @ 14def89c0

UFunction * __cdecl Z_Construct_UFunction_UIKRetargetCopyBasePoseController_GetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetCopyBasePoseController_GetSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UIKRigFBIKController_SetSolverSettings @ 14def8a00

UFunction * __cdecl Z_Construct_UFunction_UIKRigFBIKController_SetSolverSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRigFBIKController_SetSolverSettings_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UIKRetargetCopyBasePoseController_ResetBonesToExclude @ 14def8a40

UFunction * __cdecl
Z_Construct_UFunction_UIKRetargetCopyBasePoseController_ResetBonesToExclude(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetCopyBasePoseController_ResetBonesToExclude_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14def8a80

void * __cdecl Z_Construct_UScriptStruct_FIKRetargetRootMotionOp_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x290;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRetargetRootMotionOp,&UE::CoreUObject::Private::Construct<FIKRetargetRootMotionOp>,&UE::CoreUObject::Private::ConstructForTests<FIKRetargetRootMotionOp>,&UE::CoreUObject::Private::Destruct<FIKRetargetRootMotionOp>,&UE::CoreUObject::Private::Copy<FIKRetargetRootMotionOp>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UIKRetargetCopyBasePoseController_SetCopyFromStart @ 14def8b80

UFunction * __cdecl Z_Construct_UFunction_UIKRetargetCopyBasePoseController_SetCopyFromStart(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetCopyBasePoseController_SetCopyFromStart_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UIKRetargetGlobalSettings @ 14def8bc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIKRetargetGlobalSettings(void)

{
  if (Z_Registration_Info_UClass_UIKRetargetGlobalSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIKRetargetGlobalSettings.OuterSingleton,
               &Z_Construct_UClass_UIKRetargetGlobalSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIKRetargetGlobalSettings.OuterSingleton;
}

// Z_Construct_UClass_URetargetChainSettings @ 14def8c00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_URetargetChainSettings(void)

{
  if (Z_Registration_Info_UClass_URetargetChainSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_URetargetChainSettings.OuterSingleton,
               &Z_Construct_UClass_URetargetChainSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_URetargetChainSettings.OuterSingleton;
}

// Z_Construct_UClass_URetargetRootSettings @ 14def8c40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_URetargetRootSettings(void)

{
  if (Z_Registration_Info_UClass_URetargetRootSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_URetargetRootSettings.OuterSingleton,
               &Z_Construct_UClass_URetargetRootSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_URetargetRootSettings.OuterSingleton;
}

// Z_Construct_UEnum_IKRig_EBasicAxis @ 14def8c80

UEnum * __cdecl Z_Construct_UEnum_IKRig_EBasicAxis(void)

{
  if (Z_Registration_Info_UEnum_EBasicAxis.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EBasicAxis.InnerSingleton,
               &Z_Construct_UEnum_IKRig_EBasicAxis_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EBasicAxis.InnerSingleton;
}

// Z_Construct_UEnum_IKRig_ERetargetRotationMode @ 14def8cc0

UEnum * __cdecl Z_Construct_UEnum_IKRig_ERetargetRotationMode(void)

{
  if (Z_Registration_Info_UEnum_ERetargetRotationMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERetargetRotationMode.InnerSingleton,
               &Z_Construct_UEnum_IKRig_ERetargetRotationMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERetargetRotationMode.InnerSingleton;
}

// Z_Construct_UEnum_IKRig_ERetargetTranslationMode @ 14def8d00

UEnum * __cdecl Z_Construct_UEnum_IKRig_ERetargetTranslationMode(void)

{
  if (Z_Registration_Info_UEnum_ERetargetTranslationMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERetargetTranslationMode.InnerSingleton,
               &Z_Construct_UEnum_IKRig_ERetargetTranslationMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERetargetTranslationMode.InnerSingleton;
}

// Z_Construct_UEnum_IKRig_EWarpingDirectionSource @ 14def8d40

UEnum * __cdecl Z_Construct_UEnum_IKRig_EWarpingDirectionSource(void)

{
  if (Z_Registration_Info_UEnum_EWarpingDirectionSource.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EWarpingDirectionSource.InnerSingleton,
               &Z_Construct_UEnum_IKRig_EWarpingDirectionSource_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EWarpingDirectionSource.InnerSingleton;
}

// Z_Construct_UScriptStruct_FRetargetGlobalSettings @ 14def8d80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRetargetGlobalSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRetargetGlobalSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRetargetGlobalSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRetargetGlobalSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRetargetGlobalSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTargetChainFKSettings @ 14def8e00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTargetChainFKSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTargetChainFKSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTargetChainFKSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FTargetChainFKSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTargetChainFKSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTargetChainFKSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTargetChainIKSettings @ 14def8e80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTargetChainIKSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTargetChainIKSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTargetChainIKSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FTargetChainIKSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTargetChainIKSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTargetChainIKSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTargetChainSettings @ 14def8f00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTargetChainSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTargetChainSettings.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTargetChainSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FTargetChainSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTargetChainSettings.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FTargetChainSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTargetChainSpeedPlantSettings @ 14def8f80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTargetChainSpeedPlantSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTargetChainSpeedPlantSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTargetChainSpeedPlantSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FTargetChainSpeedPlantSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTargetChainSpeedPlantSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTargetChainSpeedPlantSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTargetRootSettings @ 14def9000

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTargetRootSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTargetRootSettings.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTargetRootSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FTargetRootSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTargetRootSettings.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FTargetRootSettings.InnerSingleton;
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

// NewProp_EnableSpeedPlanting_SetBit @ 14def9080

void __cdecl
Z_Construct_UScriptStruct_FTargetChainSpeedPlantSettings_Statics::NewProp_EnableSpeedPlanting_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 14def9110

void * __cdecl Z_Construct_UScriptStruct_FTargetChainSpeedPlantSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTargetChainSpeedPlantSettings,&UE::CoreUObject::Private::Construct<FTargetChainSpeedPlantSettings>,&UE::CoreUObject::Private::ConstructForTests<FTargetChainSpeedPlantSettings>,&UE::CoreUObject::Private::Destruct<FTargetChainSpeedPlantSettings>,&UE::CoreUObject::Private::Copy<FTargetChainSpeedPlantSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UIKRetargeter_NoRegister @ 14def9180

UClass * __cdecl Z_Construct_UClass_UIKRetargeter_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargeter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargeter",
               &Z_Registration_Info_UClass_UIKRetargeter.InnerSingleton,
               UIKRetargeter::StaticRegisterNativesUIKRetargeter,0x208,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRetargeter>,
               InternalVTableHelperCtorCaller<UIKRetargeter>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargeter.InnerSingleton;
}

// Z_Construct_UFunction_UIKRetargetCopyBasePoseController_SetSettings @ 14def9270

UFunction * __cdecl Z_Construct_UFunction_UIKRetargetCopyBasePoseController_SetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetCopyBasePoseController_SetSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14def9420

void * __thiscall
FIKRigStretchLimbBoneSettings::_scalar_deleting_destructor_
          (FIKRigStretchLimbBoneSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FIKRigSettingsBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14def94d0

void * __thiscall
FIKRigStretchLimbSettings::_scalar_deleting_destructor_
          (FIKRigStretchLimbSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FIKRigSettingsBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// Z_Construct_UFunction_UIKRetargetRootMotionController_GetSettings @ 14def9560

UFunction * __cdecl Z_Construct_UFunction_UIKRetargetRootMotionController_GetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetRootMotionController_GetSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UIKRetargetIKChainsController @ 14defa250

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIKRetargetIKChainsController(void)

{
  if (Z_Registration_Info_UClass_UIKRetargetIKChainsController.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIKRetargetIKChainsController.OuterSingleton,
               &Z_Construct_UClass_UIKRetargetIKChainsController_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIKRetargetIKChainsController.OuterSingleton;
}

// Z_Construct_UScriptStruct_FRetargetIKChainSettings @ 14defa670

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRetargetIKChainSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRetargetIKChainSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRetargetIKChainSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FRetargetIKChainSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRetargetIKChainSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRetargetIKChainSettings.InnerSingleton;
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

// NewProp_EnableIK_SetBit @ 14defa7b0

void __cdecl
Z_Construct_UScriptStruct_FRetargetIKChainSettings_Statics::NewProp_EnableIK_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// ERetargetTranslationMode_StaticEnum @ 14defa7c0

UEnum * __cdecl ERetargetTranslationMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERetargetTranslationMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UEnum_ERetargetTranslationMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_IKRig_ERetargetTranslationMode,(UObject *)pUVar1,
                       L"ERetargetTranslationMode");
  }
  return Z_Registration_Info_UEnum_ERetargetTranslationMode.OuterSingleton;
}

// NewProp_ApplyPelvisOffsetToSourceGoals_SetBit @ 14defa800

void __cdecl
Z_Construct_UScriptStruct_FRetargetIKChainSettings_Statics::
NewProp_ApplyPelvisOffsetToSourceGoals_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x40) = 1;
  return;
}

// NewProp_bUsePreferredAngles_SetBit @ 14defa840

void __cdecl
Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_bUsePreferredAngles_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x5c) = 1;
  return;
}

// Z_Construct_UFunction_UIKRetargetRootMotionController_GetSourceRootBone @ 14defa850

UFunction * __cdecl Z_Construct_UFunction_UIKRetargetRootMotionController_GetSourceRootBone(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetRootMotionController_GetSourceRootBone_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14defa890

void * __cdecl Z_Construct_UScriptStruct_FRetargetIKChainSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRetargetIKChainSettings,&UE::CoreUObject::Private::Construct<FRetargetIKChainSettings>,&UE::CoreUObject::Private::ConstructForTests<FRetargetIKChainSettings>,&UE::CoreUObject::Private::Destruct<FRetargetIKChainSettings>,&UE::CoreUObject::Private::SerializeArchive<FRetargetIKChainSettings>,&UE::CoreUObject::Private::Copy<FRetargetIKChainSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// ERetargetRotationMode_StaticEnum @ 14defaa80

UEnum * __cdecl ERetargetRotationMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERetargetRotationMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UEnum_ERetargetRotationMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_IKRig_ERetargetRotationMode,(UObject *)pUVar1,
                       L"ERetargetRotationMode");
  }
  return Z_Registration_Info_UEnum_ERetargetRotationMode.OuterSingleton;
}

// Z_Construct_UClass_URetargetProfileLibrary @ 14defab40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_URetargetProfileLibrary(void)

{
  if (Z_Registration_Info_UClass_URetargetProfileLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_URetargetProfileLibrary.OuterSingleton,
               &Z_Construct_UClass_URetargetProfileLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_URetargetProfileLibrary.OuterSingleton;
}

// Z_Construct_UScriptStruct_FRetargetOpProfile @ 14defac50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRetargetOpProfile(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRetargetOpProfile.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRetargetOpProfile.InnerSingleton,
               &Z_Construct_UScriptStruct_FRetargetOpProfile_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRetargetOpProfile.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRetargetOpProfile.InnerSingleton;
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

// Z_Construct_UEnum_IKRig_EIKRigGoalSpace @ 14defad20

UEnum * __cdecl Z_Construct_UEnum_IKRig_EIKRigGoalSpace(void)

{
  if (Z_Registration_Info_UEnum_EIKRigGoalSpace.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EIKRigGoalSpace.InnerSingleton,
               &Z_Construct_UEnum_IKRig_EIKRigGoalSpace_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EIKRigGoalSpace.InnerSingleton;
}

// Z_Construct_UEnum_IKRig_EIKRigGoalTransformSource @ 14defad60

UEnum * __cdecl Z_Construct_UEnum_IKRig_EIKRigGoalTransformSource(void)

{
  if (Z_Registration_Info_UEnum_EIKRigGoalTransformSource.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EIKRigGoalTransformSource.InnerSingleton,
               &Z_Construct_UEnum_IKRig_EIKRigGoalTransformSource_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EIKRigGoalTransformSource.InnerSingleton;
}

// ECopyOpSettingsContext_StaticEnum @ 14defade0

UEnum * __cdecl ECopyOpSettingsContext_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECopyOpSettingsContext.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UEnum_ECopyOpSettingsContext.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_IKRig_ECopyOpSettingsContext,(UObject *)pUVar1,
                       L"ECopyOpSettingsContext");
  }
  return Z_Registration_Info_UEnum_ECopyOpSettingsContext.OuterSingleton;
}

// EIKRigGoalSpace_StaticEnum @ 14defaf60

UEnum * __cdecl EIKRigGoalSpace_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EIKRigGoalSpace.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UEnum_EIKRigGoalSpace.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_IKRig_EIKRigGoalSpace,(UObject *)pUVar1,L"EIKRigGoalSpace")
    ;
  }
  return Z_Registration_Info_UEnum_EIKRigGoalSpace.OuterSingleton;
}

// Z_Construct_UFunction_UIKRetargetRootMotionController_GetTargetPelvisBone @ 14defafa0

UFunction * __cdecl Z_Construct_UFunction_UIKRetargetRootMotionController_GetTargetPelvisBone(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetRootMotionController_GetTargetPelvisBone_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14defb0c0

void * __thiscall
FIKRetargetSpeedPlantingOp::_scalar_deleting_destructor_
          (FIKRetargetSpeedPlantingOp *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  UObject *pUVar2;
  
  pFVar1 = (this->GoalsToPlant).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Settings).ChainsToSpeedPlant.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->Settings)._padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  pUVar2 = (UObject *)(this->Settings)._padding_;
  if (pUVar2 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar2);
    (this->Settings)._padding_ = 0;
  }
  this->_padding_ = (longlong)&___7FIKRetargetOpBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// EIKRigGoalTransformSource_StaticEnum @ 14defb4f0

UEnum * __cdecl EIKRigGoalTransformSource_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EIKRigGoalTransformSource.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UEnum_EIKRigGoalTransformSource.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_IKRig_EIKRigGoalTransformSource,(UObject *)pUVar1,
                       L"EIKRigGoalTransformSource");
  }
  return Z_Registration_Info_UEnum_EIKRigGoalTransformSource.OuterSingleton;
}

// NewProp_EnableFK_SetBit @ 14defb530

void __cdecl
Z_Construct_UScriptStruct_FTargetChainFKSettings_Statics::NewProp_EnableFK_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 14defb540

void * __cdecl Z_Construct_UScriptStruct_FRetargetOpProfile_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRetargetOpProfile,&UE::CoreUObject::Private::Construct<FRetargetOpProfile>,&UE::CoreUObject::Private::ConstructForTests<FRetargetOpProfile>,&UE::CoreUObject::Private::Destruct<FRetargetOpProfile>,&UE::CoreUObject::Private::Copy<FRetargetOpProfile>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UIKRetargetRootMotionController_GetTargetRootBone @ 14defb5c0

UFunction * __cdecl Z_Construct_UFunction_UIKRetargetRootMotionController_GetTargetRootBone(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetRootMotionController_GetTargetRootBone_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_PoleVectorMaintainOffset_SetBit @ 14defb600

void __cdecl
Z_Construct_UScriptStruct_FTargetChainFKSettings_Statics::NewProp_PoleVectorMaintainOffset_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// NewProp_bDrawFinalGoals_SetBit @ 14defb610

void __cdecl
Z_Construct_UScriptStruct_FIKRetargetIKChainsOpSettings_Statics::NewProp_bDrawFinalGoals_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_bDrawSourceLocations_SetBit @ 14defb650

void __cdecl
Z_Construct_UScriptStruct_FIKRetargetIKChainsOpSettings_Statics::NewProp_bDrawSourceLocations_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  return;
}

// NewStructOps @ 14defb660

void * __cdecl Z_Construct_UScriptStruct_FTargetChainFKSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1c;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTargetChainFKSettings,&UE::CoreUObject::Private::Construct<FTargetChainFKSettings>,&UE::CoreUObject::Private::ConstructForTests<FTargetChainFKSettings>,&UE::CoreUObject::Private::Destruct<FTargetChainFKSettings>,&UE::CoreUObject::Private::Copy<FTargetChainFKSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14defb6a0

void * __cdecl Z_Construct_UScriptStruct_FIKRetargetIKChainsOpSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRetargetIKChainsOpSettings,&UE::CoreUObject::Private::Construct<FIKRetargetIKChainsOpSettings>,&UE::CoreUObject::Private::ConstructForTests<FIKRetargetIKChainsOpSettings>,&UE::CoreUObject::Private::Destruct<FIKRetargetIKChainsOpSettings>,&UE::CoreUObject::Private::SerializeArchive<FIKRetargetIKChainsOpSettings>,&UE::CoreUObject::Private::Copy<FIKRetargetIKChainsOpSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bEnabled_SetBit @ 14defb6e0

void __cdecl Z_Construct_UScriptStruct_FIKRigGoal_Statics::NewProp_bEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xa0) = 1;
  return;
}

// Z_Construct_UFunction_UIKRetargetRootMotionController_SetSettings @ 14defb6f0

UFunction * __cdecl Z_Construct_UFunction_UIKRetargetRootMotionController_SetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetRootMotionController_SetSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14defb730

void * __cdecl Z_Construct_UScriptStruct_FIKRigGoal_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRigGoal,&UE::CoreUObject::Private::Construct<FIKRigGoal>,&UE::CoreUObject::Private::ConstructForTests<FIKRigGoal>,&UE::CoreUObject::Private::Destruct<FIKRigGoal>,&UE::CoreUObject::Private::Copy<FIKRigGoal>,&UE::CoreUObject::Private::GetStructTypeHash<FIKRigGoal>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UIKRetargeter @ 14defb770

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIKRetargeter(void)

{
  if (Z_Registration_Info_UClass_UIKRetargeter.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIKRetargeter.OuterSingleton,
               &Z_Construct_UClass_UIKRetargeter_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIKRetargeter.OuterSingleton;
}

// Z_Construct_UFunction_UIKRigFBIKSolver_GetBoneSettings @ 14defb7b0

UFunction * __cdecl Z_Construct_UFunction_UIKRigFBIKSolver_GetBoneSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRigFBIKSolver_GetBoneSettings_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FIKRetargetPose @ 14defb7f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRetargetPose(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetPose.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRetargetPose.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRetargetPose_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetPose.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRetargetPose.InnerSingleton;
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

// NewStructOps @ 14defb870

void * __cdecl Z_Construct_UScriptStruct_FIKRetargetPose_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRetargetPose,&UE::CoreUObject::Private::Construct<FIKRetargetPose>,&UE::CoreUObject::Private::ConstructForTests<FIKRetargetPose>,&UE::CoreUObject::Private::Destruct<FIKRetargetPose>,&UE::CoreUObject::Private::Copy<FIKRetargetPose>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bApplyTargetRetargetPose_SetBit @ 14defb8b0

void __cdecl
Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_bApplyTargetRetargetPose_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UIKRetargetRootMotionController_SetSourceRootBone @ 14defb8c0

UFunction * __cdecl Z_Construct_UFunction_UIKRetargetRootMotionController_SetSourceRootBone(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetRootMotionController_SetSourceRootBone_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bApplySourceRetargetPose_SetBit @ 14defb900

void __cdecl
Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_bApplySourceRetargetPose_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  return;
}

// NewStructOps @ 14defb910

void * __cdecl Z_Construct_UScriptStruct_FIKRetargetIKChainsOp_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRetargetIKChainsOp,&UE::CoreUObject::Private::Construct<FIKRetargetIKChainsOp>,&UE::CoreUObject::Private::ConstructForTests<FIKRetargetIKChainsOp>,&UE::CoreUObject::Private::Destruct<FIKRetargetIKChainsOp>,&UE::CoreUObject::Private::Copy<FIKRetargetIKChainsOp>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bForceAllIKOff_SetBit @ 14defb950

void __cdecl
Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_bForceAllIKOff_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_bApplyChainSettings_SetBit @ 14defb960

void __cdecl
Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_bApplyChainSettings_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  return;
}

// NewProp_bApplyRootSettings_SetBit @ 14defb970

void __cdecl
Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_bApplyRootSettings_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x80) = 1;
  return;
}

// NewProp_bApplyGlobalSettings_SetBit @ 14defb980

void __cdecl
Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewProp_bApplyGlobalSettings_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xf0) = 1;
  return;
}

// NewStructOps @ 14defb990

void * __cdecl Z_Construct_UScriptStruct_FRetargetProfile_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x128;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRetargetProfile,&UE::CoreUObject::Private::Construct<FRetargetProfile>,&UE::CoreUObject::Private::ConstructForTests<FRetargetProfile>,&UE::CoreUObject::Private::Destruct<FRetargetProfile>,&UE::CoreUObject::Private::Copy<FRetargetProfile>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UIKRetargetRootMotionController_SetTargetPelvisBone @ 14defb9d0

UFunction * __cdecl Z_Construct_UFunction_UIKRetargetRootMotionController_SetTargetPelvisBone(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetRootMotionController_SetTargetPelvisBone_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_EnableIK_SetBit @ 14defba10

void __cdecl
Z_Construct_UScriptStruct_FTargetChainIKSettings_Statics::NewProp_EnableIK_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UIKRigFBIKSolver_GetEffectors @ 14defba20

UFunction * __cdecl Z_Construct_UFunction_UIKRigFBIKSolver_GetEffectors(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRigFBIKSolver_GetEffectors_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAffectedByIKWarping_SetBit @ 14defbad0

void __cdecl
Z_Construct_UScriptStruct_FTargetChainIKSettings_Statics::NewProp_bAffectedByIKWarping_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x78) = 1;
  return;
}

// NewStructOps @ 14defbb20

void * __cdecl Z_Construct_UScriptStruct_FTargetChainIKSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTargetChainIKSettings,&UE::CoreUObject::Private::Construct<FTargetChainIKSettings>,&UE::CoreUObject::Private::ConstructForTests<FTargetChainIKSettings>,&UE::CoreUObject::Private::Destruct<FTargetChainIKSettings>,&UE::CoreUObject::Private::Copy<FTargetChainIKSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UIKRetargetRootMotionController_SetTargetRootBone @ 14defbba0

UFunction * __cdecl Z_Construct_UFunction_UIKRetargetRootMotionController_SetTargetRootBone(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetRootMotionController_SetTargetRootBone_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14defbbe0

void * __cdecl Z_Construct_UScriptStruct_FIKRigGoalContainer_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRigGoalContainer,&UE::CoreUObject::Private::Construct<FIKRigGoalContainer>,&UE::CoreUObject::Private::ConstructForTests<FIKRigGoalContainer>,&UE::CoreUObject::Private::Destruct<FIKRigGoalContainer>,&UE::CoreUObject::Private::Copy<FIKRigGoalContainer>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bAllowStretch_SetBit @ 14defbd50

void __cdecl
Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_bAllowStretch_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  return;
}

// Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset @ 14defbfa0

UFunction * __cdecl Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UIKRetargetIKChainsController_GetSettings @ 14defc170

UFunction * __cdecl Z_Construct_UFunction_UIKRetargetIKChainsController_GetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetIKChainsController_GetSettings_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14defc1b0

void * __thiscall
FIKRetargetFloorConstraintOpSettings::_scalar_deleting_destructor_
          (FIKRetargetFloorConstraintOpSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChainsToAffect).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  if ((UObject *)this->_padding_ != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this->_padding_);
    this->_padding_ = 0;
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// Z_Construct_UFunction_UIKRetargetIKChainsController_SetSettings @ 14defce80

UFunction * __cdecl Z_Construct_UFunction_UIKRetargetIKChainsController_SetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetIKChainsController_SetSettings_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetProfile @ 14defcec0

UFunction * __cdecl Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetProfile(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetProfile_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14defcf00

void * __cdecl Z_Construct_UScriptStruct_FTargetChainSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTargetChainSettings,&UE::CoreUObject::Private::Construct<FTargetChainSettings>,&UE::CoreUObject::Private::ConstructForTests<FTargetChainSettings>,&UE::CoreUObject::Private::Destruct<FTargetChainSettings>,&UE::CoreUObject::Private::Copy<FTargetChainSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_URetargetProfileLibrary_CopyRetargetProfileFromRetargetAsset @ 14defcf40

UFunction * __cdecl
Z_Construct_UFunction_URetargetProfileLibrary_CopyRetargetProfileFromRetargetAsset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URetargetProfileLibrary_CopyRetargetProfileFromRetargetAsset_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UIKRetargeter_GetChainUsingGoalFromRetargetAsset @ 14defd0d0

UFunction * __cdecl Z_Construct_UFunction_UIKRetargeter_GetChainUsingGoalFromRetargetAsset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargeter_GetChainUsingGoalFromRetargetAsset_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14defd240

void * __thiscall
FIKRigStretchLimbSolver::_scalar_deleting_destructor_(FIKRigStretchLimbSolver *this,uint param_1)

{
  ~FIKRigStretchLimbSolver(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// Z_Construct_UEnum_IKRig_EStretchLimbRotationMode @ 14defd280

UEnum * __cdecl Z_Construct_UEnum_IKRig_EStretchLimbRotationMode(void)

{
  if (Z_Registration_Info_UEnum_EStretchLimbRotationMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EStretchLimbRotationMode.InnerSingleton,
               &Z_Construct_UEnum_IKRig_EStretchLimbRotationMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EStretchLimbRotationMode.InnerSingleton;
}

// Z_Construct_UEnum_IKRig_EStretchLimbSquashMode @ 14defd2c0

UEnum * __cdecl Z_Construct_UEnum_IKRig_EStretchLimbSquashMode(void)

{
  if (Z_Registration_Info_UEnum_EStretchLimbSquashMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EStretchLimbSquashMode.InnerSingleton,
               &Z_Construct_UEnum_IKRig_EStretchLimbSquashMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EStretchLimbSquashMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FIKRigStretchLimbBoneSettings @ 14defd300

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRigStretchLimbBoneSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRigStretchLimbBoneSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRigStretchLimbBoneSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRigStretchLimbBoneSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRigStretchLimbBoneSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRigStretchLimbBoneSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FIKRigStretchLimbSettings @ 14defd380

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRigStretchLimbSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRigStretchLimbSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRigStretchLimbSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRigStretchLimbSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRigStretchLimbSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRigStretchLimbSettings.InnerSingleton;
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

// NewStructOps @ 14defd4b0

void * __cdecl Z_Construct_UScriptStruct_FIKRigStretchLimbBoneSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRigStretchLimbBoneSettings,&UE::CoreUObject::Private::Construct<FIKRigStretchLimbBoneSettings>,&UE::CoreUObject::Private::ConstructForTests<FIKRigStretchLimbBoneSettings>,&UE::CoreUObject::Private::Destruct<FIKRigStretchLimbBoneSettings>,&UE::CoreUObject::Private::Copy<FIKRigStretchLimbBoneSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UIKRigDefinition @ 14defd4f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIKRigDefinition(void)

{
  if (Z_Registration_Info_UClass_UIKRigDefinition.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIKRigDefinition.OuterSingleton,
               &Z_Construct_UClass_UIKRigDefinition_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIKRigDefinition.OuterSingleton;
}

// Z_Construct_UClass_UIKRigEffectorGoal @ 14defd530

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIKRigEffectorGoal(void)

{
  if (Z_Registration_Info_UClass_UIKRigEffectorGoal.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIKRigEffectorGoal.OuterSingleton,
               &Z_Construct_UClass_UIKRigEffectorGoal_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIKRigEffectorGoal.OuterSingleton;
}

// Z_Construct_UScriptStruct_FBoneChain @ 14defd570

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBoneChain(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBoneChain.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBoneChain.InnerSingleton,
               &Z_Construct_UScriptStruct_FBoneChain_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBoneChain.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBoneChain.InnerSingleton;
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

// Z_Construct_UScriptStruct_FIKRigSkeleton @ 14defd5f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRigSkeleton(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRigSkeleton.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRigSkeleton.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRigSkeleton.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRigSkeleton.InnerSingleton;
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

// Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetAsset @ 14defd670

UFunction * __cdecl Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetAsset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetAsset_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FRetargetDefinition @ 14defd6b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRetargetDefinition(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRetargetDefinition.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRetargetDefinition.InnerSingleton,
               &Z_Construct_UScriptStruct_FRetargetDefinition_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRetargetDefinition.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FRetargetDefinition.InnerSingleton;
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

// NewStructOps @ 14defd730

void * __cdecl Z_Construct_UScriptStruct_FTargetRootSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTargetRootSettings,&UE::CoreUObject::Private::Construct<FTargetRootSettings>,&UE::CoreUObject::Private::ConstructForTests<FTargetRootSettings>,&UE::CoreUObject::Private::Destruct<FTargetRootSettings>,&UE::CoreUObject::Private::Copy<FTargetRootSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetProfile @ 14defd770

UFunction * __cdecl Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetProfile(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetProfile_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bPropagateToNonRetargetedChildren_SetBit @ 14defd7b0

void __cdecl
Z_Construct_UClass_URootMotionGeneratorOp_Statics::NewProp_bPropagateToNonRetargetedChildren_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4a) = 1;
  return;
}

// NewProp_bMaintainOffsetFromPelvis_SetBit @ 14defd7c0

void __cdecl
Z_Construct_UClass_URootMotionGeneratorOp_Statics::NewProp_bMaintainOffsetFromPelvis_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4b) = 1;
  return;
}

// NewProp_bRotateWithPelvis_SetBit @ 14defd7d0

void __cdecl
Z_Construct_UClass_URootMotionGeneratorOp_Statics::NewProp_bRotateWithPelvis_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
  return;
}

// Z_Construct_UFunction_URetargetProfileLibrary_GetOpControllerFromRetargetProfile @ 14defd7e0

UFunction * __cdecl
Z_Construct_UFunction_URetargetProfileLibrary_GetOpControllerFromRetargetProfile(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URetargetProfileLibrary_GetOpControllerFromRetargetProfile_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// EStretchLimbSquashMode_StaticEnum @ 14defd820

UEnum * __cdecl EStretchLimbSquashMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStretchLimbSquashMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UEnum_EStretchLimbSquashMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_IKRig_EStretchLimbSquashMode,(UObject *)pUVar1,
                       L"EStretchLimbSquashMode");
  }
  return Z_Registration_Info_UEnum_EStretchLimbSquashMode.OuterSingleton;
}

// Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetAsset @ 14defd860

UFunction * __cdecl Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetAsset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetAsset_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14defd8a0

void * __cdecl Z_Construct_UScriptStruct_FBoneChain_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBoneChain,&UE::CoreUObject::Private::Construct<FBoneChain>,&UE::CoreUObject::Private::ConstructForTests<FBoneChain>,&UE::CoreUObject::Private::Destruct<FBoneChain>,&UE::CoreUObject::Private::Copy<FBoneChain>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bEnableRoot_SetBit @ 14defdaa0

void __cdecl
Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::NewProp_bEnableRoot_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bEnableFK_SetBit @ 14defdab0

void __cdecl
Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::NewProp_bEnableFK_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// EStretchLimbRotationMode_StaticEnum @ 14defdac0

UEnum * __cdecl EStretchLimbRotationMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStretchLimbRotationMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UEnum_EStretchLimbRotationMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_IKRig_EStretchLimbRotationMode,(UObject *)pUVar1,
                       L"EStretchLimbRotationMode");
  }
  return Z_Registration_Info_UEnum_EStretchLimbRotationMode.OuterSingleton;
}

// NewProp_bEnableIK_SetBit @ 14defdb00

void __cdecl
Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::NewProp_bEnableIK_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  return;
}

// NewProp_bEnablePost_SetBit @ 14defdb10

void __cdecl
Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::NewProp_bEnablePost_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 3) = 1;
  return;
}

// NewProp_bCopyBasePose_SetBit @ 14defdb20

void __cdecl
Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::NewProp_bCopyBasePose_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// NewProp_bWarping_SetBit @ 14defdb30

void __cdecl
Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::NewProp_bWarping_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// NewStructOps @ 14defdcf0

void * __cdecl Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x34;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRetargetGlobalSettings,&UE::CoreUObject::Private::Construct<FRetargetGlobalSettings>,&UE::CoreUObject::Private::ConstructForTests<FRetargetGlobalSettings>,&UE::CoreUObject::Private::Destruct<FRetargetGlobalSettings>,&UE::CoreUObject::Private::Copy<FRetargetGlobalSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetProfile @ 14defdd30

UFunction * __cdecl Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetProfile(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetProfile_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UIKRetargetOpControllerBase_NoRegister @ 14defddd0

UClass * __cdecl Z_Construct_UClass_UIKRetargetOpControllerBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetOpControllerBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetOpControllerBase",
               &Z_Registration_Info_UClass_UIKRetargetOpControllerBase.InnerSingleton,
               UIKRetargetOpControllerBase::StaticRegisterNativesUIKRetargetOpControllerBase,0x30,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UIKRetargetOpControllerBase>,
               InternalVTableHelperCtorCaller<UIKRetargetOpControllerBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetOpControllerBase.InnerSingleton;
}

// NewProp_bEnableStretching_SetBit @ 14defde80

void __cdecl
Z_Construct_UScriptStruct_FIKRigStretchLimbSettings_Statics::NewProp_bEnableStretching_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UClass_URetargetOpBase_NoRegister @ 14defde90

UClass * __cdecl Z_Construct_UClass_URetargetOpBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URetargetOpBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"RetargetOpBase",
               &Z_Registration_Info_UClass_URetargetOpBase.InnerSingleton,
               URetargetOpBase::StaticRegisterNativesURetargetOpBase,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<URetargetOpBase>,
               InternalVTableHelperCtorCaller<URetargetOpBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URetargetOpBase.InnerSingleton;
}

// Z_Construct_UClass_URetargetOpStack_NoRegister @ 14defdfa0

UClass * __cdecl Z_Construct_UClass_URetargetOpStack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URetargetOpStack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"RetargetOpStack",
               &Z_Registration_Info_UClass_URetargetOpStack.InnerSingleton,
               URetargetOpStack::StaticRegisterNativesURetargetOpStack,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<URetargetOpStack>,
               InternalVTableHelperCtorCaller<URetargetOpStack>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URetargetOpStack.InnerSingleton;
}

// NewProp_ReturnValue_SetBit @ 14defe0a0

void __cdecl
Z_Construct_UFunction_UIKRetargeter_HasSourceIKRig_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 14defe0b0

void * __cdecl Z_Construct_UScriptStruct_FIKRigStretchLimbSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRigStretchLimbSettings,&UE::CoreUObject::Private::Construct<FIKRigStretchLimbSettings>,&UE::CoreUObject::Private::ConstructForTests<FIKRigStretchLimbSettings>,&UE::CoreUObject::Private::Destruct<FIKRigStretchLimbSettings>,&UE::CoreUObject::Private::Copy<FIKRigStretchLimbSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UIKRetargeter_HasSourceIKRig @ 14defe2f0

UFunction * __cdecl Z_Construct_UFunction_UIKRetargeter_HasSourceIKRig(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargeter_HasSourceIKRig_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14defe330

void * __cdecl Z_Construct_UScriptStruct_FRetargetDefinition_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRetargetDefinition,&UE::CoreUObject::Private::Construct<FRetargetDefinition>,&UE::CoreUObject::Private::ConstructForTests<FRetargetDefinition>,&UE::CoreUObject::Private::Destruct<FRetargetDefinition>,&UE::CoreUObject::Private::Copy<FRetargetDefinition>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 14defe3d0

void __cdecl
Z_Construct_UFunction_UIKRetargeter_HasTargetIKRig_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UIKRetargeter_HasTargetIKRig @ 14defe3e0

UFunction * __cdecl Z_Construct_UFunction_UIKRetargeter_HasTargetIKRig(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargeter_HasTargetIKRig_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UIKRetargeter_SetChainFKSettingsInRetargetProfile @ 14defe5b0

UFunction * __cdecl Z_Construct_UFunction_UIKRetargeter_SetChainFKSettingsInRetargetProfile(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargeter_SetChainFKSettingsInRetargetProfile_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14defe630

void * __thiscall
FIKRetargetFloorConstraintOp::_scalar_deleting_destructor_
          (FIKRetargetFloorConstraintOp *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  UObject *pUVar2;
  
  pFVar1 = (this->FloorConstraints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Settings).ChainsToAffect.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->Settings)._padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  pUVar2 = (UObject *)(this->Settings)._padding_;
  if (pUVar2 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar2);
    (this->Settings)._padding_ = 0;
  }
  this->_padding_ = (longlong)&___7FIKRetargetOpBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// NewStructOps @ 14defea60

void * __cdecl Z_Construct_UScriptStruct_FIKRigStretchLimbSolver_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xe0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRigStretchLimbSolver,&UE::CoreUObject::Private::Construct<FIKRigStretchLimbSolver>,&UE::CoreUObject::Private::ConstructForTests<FIKRigStretchLimbSolver>,&UE::CoreUObject::Private::Destruct<FIKRigStretchLimbSolver>,&UE::CoreUObject::Private::Copy<FIKRigStretchLimbSolver>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_CopyPoseUsingFK_SetBit @ 14defead0

void __cdecl
Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_CopyPoseUsingFK_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xf0) = 1;
  return;
}

// NewProp_DriveIKGoal_SetBit @ 14defeae0

void __cdecl
Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_DriveIKGoal_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x100) = 1;
  return;
}

// `scalar_deleting_destructor' @ 14defeb70

void * __thiscall
FIKRetargetOpBase::_scalar_deleting_destructor_(FIKRetargetOpBase *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FIKRetargetOpBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UFunction_UIKRetargeter_SetChainIKSettingsInRetargetProfile @ 14defebb0

UFunction * __cdecl Z_Construct_UFunction_UIKRetargeter_SetChainIKSettingsInRetargetProfile(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargeter_SetChainIKSettingsInRetargetProfile_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_UseSpeedCurveToPlantIK_SetBit @ 14defebf0

void __cdecl
Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_UseSpeedCurveToPlantIK_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x16c) = 1;
  return;
}

// Z_Construct_UFunction_UIKRetargeter_SetChainSettingsInRetargetProfile @ 14defec50

UFunction * __cdecl Z_Construct_UFunction_UIKRetargeter_SetChainSettingsInRetargetProfile(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargeter_SetChainSettingsInRetargetProfile_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UIKRetargetRunIKRigController @ 14deff030

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIKRetargetRunIKRigController(void)

{
  if (Z_Registration_Info_UClass_UIKRetargetRunIKRigController.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIKRetargetRunIKRigController.OuterSingleton,
               &Z_Construct_UClass_UIKRetargetRunIKRigController_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIKRetargetRunIKRigController.OuterSingleton;
}

// Z_Construct_UFunction_UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile @ 14deff070

UFunction * __cdecl
Z_Construct_UFunction_UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FIKRetargetRunIKRigOpSettings @ 14deff170

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRetargetRunIKRigOpSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetRunIKRigOpSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRetargetRunIKRigOpSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRetargetRunIKRigOpSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetRunIKRigOpSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRetargetRunIKRigOpSettings.InnerSingleton;
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

// NewProp_bDrawGoals_SetBit @ 14deff320

void __cdecl
Z_Construct_UScriptStruct_FIKRetargetRunIKRigOpSettings_Statics::NewProp_bDrawGoals_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewProp_bDrawGoalBoneLocations_SetBit @ 14deff330

void __cdecl
Z_Construct_UScriptStruct_FIKRetargetRunIKRigOpSettings_Statics::
NewProp_bDrawGoalBoneLocations_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x31) = 1;
  return;
}

// NewStructOps @ 14deff420

void * __cdecl Z_Construct_UScriptStruct_FIKRetargetRunIKRigOpSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRetargetRunIKRigOpSettings,&UE::CoreUObject::Private::Construct<FIKRetargetRunIKRigOpSettings>,&UE::CoreUObject::Private::ConstructForTests<FIKRetargetRunIKRigOpSettings>,&UE::CoreUObject::Private::Destruct<FIKRetargetRunIKRigOpSettings>,&UE::CoreUObject::Private::Copy<FIKRetargetRunIKRigOpSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UIKRetargeter_SetGlobalSettingsInRetargetProfile @ 14deff610

UFunction * __cdecl Z_Construct_UFunction_UIKRetargeter_SetGlobalSettingsInRetargetProfile(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargeter_SetGlobalSettingsInRetargetProfile_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_RetargetRootTranslation_SetBit @ 14deff650

void __cdecl
Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_RetargetRootTranslation_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x90) = 1;
  return;
}

// Z_Construct_UFunction_UIKRetargeter_SetRootSettingsInRetargetProfile @ 14deff740

UFunction * __cdecl Z_Construct_UFunction_UIKRetargeter_SetRootSettingsInRetargetProfile(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargeter_SetRootSettingsInRetargetProfile_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bRetargetRoot_SetBit @ 14deff830

void __cdecl Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetRoot_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x158) = 1;
  return;
}

// NewStructOps @ 14deff840

void * __cdecl Z_Construct_UScriptStruct_FIKRetargetRunIKRigOp_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x200;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRetargetRunIKRigOp,&UE::CoreUObject::Private::Construct<FIKRetargetRunIKRigOp>,&UE::CoreUObject::Private::ConstructForTests<FIKRetargetRunIKRigOp>,&UE::CoreUObject::Private::Destruct<FIKRetargetRunIKRigOp>,&UE::CoreUObject::Private::Copy<FIKRetargetRunIKRigOp>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bRetargetFK_SetBit @ 14deff880

void __cdecl Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetFK_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x159) = 1;
  return;
}

// NewProp_bRetargetIK_SetBit @ 14deff890

void __cdecl Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetIK_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x15a) = 1;
  return;
}

// Z_Construct_UFunction_UIKRetargetRunIKRigController_GetSettings @ 14deffb80

UFunction * __cdecl Z_Construct_UFunction_UIKRetargetRunIKRigController_GetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetRunIKRigController_GetSettings_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UIKRetargetRunIKRigController_SetSettings @ 14deffd30

UFunction * __cdecl Z_Construct_UFunction_UIKRetargetRunIKRigController_SetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetRunIKRigController_SetSettings_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UIKRigProcessor @ 14deffe70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIKRigProcessor(void)

{
  if (Z_Registration_Info_UClass_UIKRigProcessor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIKRigProcessor.OuterSingleton,
               &Z_Construct_UClass_UIKRigProcessor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIKRigProcessor.OuterSingleton;
}

// NewStructOps @ 14deffeb0

void * __cdecl Z_Construct_UScriptStruct_FGoalBone_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGoalBone,&UE::CoreUObject::Private::Construct<FGoalBone>,&UE::CoreUObject::Private::ConstructForTests<FGoalBone>,&UE::CoreUObject::Private::Destruct<FGoalBone>,&UE::CoreUObject::Private::Copy<FGoalBone>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UCurveRemapOp @ 14df00230

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCurveRemapOp(void)

{
  if (Z_Registration_Info_UClass_UCurveRemapOp.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCurveRemapOp.OuterSingleton,
               &Z_Construct_UClass_UCurveRemapOp_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCurveRemapOp.OuterSingleton;
}

// Z_Construct_UClass_UIKRetargetCurveRemapController @ 14df00270

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIKRetargetCurveRemapController(void)

{
  if (Z_Registration_Info_UClass_UIKRetargetCurveRemapController.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIKRetargetCurveRemapController.OuterSingleton,
               &Z_Construct_UClass_UIKRetargetCurveRemapController_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIKRetargetCurveRemapController.OuterSingleton;
}

// Z_Construct_UScriptStruct_FCurveRemapPair @ 14df002b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCurveRemapPair(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCurveRemapPair.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCurveRemapPair.InnerSingleton,
               &Z_Construct_UScriptStruct_FCurveRemapPair_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCurveRemapPair.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCurveRemapPair.InnerSingleton;
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

// `scalar_deleting_destructor' @ 14df00330

void * __thiscall
FIKRetargetAdditivePoseOp::_scalar_deleting_destructor_
          (FIKRetargetAdditivePoseOp *this,uint param_1)

{
  UObject *pUVar1;
  
  (this->Settings)._padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  pUVar1 = (UObject *)(this->Settings)._padding_;
  if (pUVar1 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar1);
    (this->Settings)._padding_ = 0;
  }
  this->_padding_ = (longlong)&___7FIKRetargetOpBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// Z_Construct_UScriptStruct_FIKRetargetCurveRemapOpSettings @ 14df003a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRetargetCurveRemapOpSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetCurveRemapOpSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRetargetCurveRemapOpSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRetargetCurveRemapOpSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetCurveRemapOpSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRetargetCurveRemapOpSettings.InnerSingleton;
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

// NewStructOps @ 14df004d0

void * __cdecl Z_Construct_UScriptStruct_FCurveRemapPair_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCurveRemapPair,&UE::CoreUObject::Private::Construct<FCurveRemapPair>,&UE::CoreUObject::Private::ConstructForTests<FCurveRemapPair>,&UE::CoreUObject::Private::Destruct<FCurveRemapPair>,&UE::CoreUObject::Private::Copy<FCurveRemapPair>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UIKRig_LimbEffector_NoRegister @ 14df005d0

UClass * __cdecl Z_Construct_UClass_UIKRig_LimbEffector_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRig_LimbEffector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRig_LimbEffector",
               &Z_Registration_Info_UClass_UIKRig_LimbEffector.InnerSingleton,
               UIKRig_LimbEffector::StaticRegisterNativesUIKRig_LimbEffector,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRig_LimbEffector>,
               InternalVTableHelperCtorCaller<UIKRig_LimbEffector>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRig_LimbEffector.InnerSingleton;
}

// `scalar_deleting_destructor' @ 14df01400

void * __thiscall
FIKRigLimbSolver::_scalar_deleting_destructor_(FIKRigLimbSolver *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChildrenToUpdate).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Solver).Links.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->Settings)._padding_ = (longlong)&___7FIKRigSettingsBase__6B_;
  this->_padding_ = (longlong)&___7FIKRigSolverBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// Z_Construct_UClass_UIKRetargetPelvisMotionController @ 14df01470

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIKRetargetPelvisMotionController(void)

{
  if (Z_Registration_Info_UClass_UIKRetargetPelvisMotionController.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIKRetargetPelvisMotionController.OuterSingleton,
               &Z_Construct_UClass_UIKRetargetPelvisMotionController_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIKRetargetPelvisMotionController.OuterSingleton;
}

// Z_Construct_UScriptStruct_FIKRetargetPelvisMotionOpSettings @ 14df01570

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRetargetPelvisMotionOpSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOpSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOpSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRetargetPelvisMotionOpSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOpSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOpSettings.InnerSingleton;
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

// NewProp_bCopyAllSourceCurves_SetBit @ 14df015f0

void __cdecl
Z_Construct_UScriptStruct_FIKRetargetCurveRemapOpSettings_Statics::
NewProp_bCopyAllSourceCurves_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bRemapCurves_SetBit @ 14df01600

void __cdecl
Z_Construct_UScriptStruct_FIKRetargetCurveRemapOpSettings_Statics::NewProp_bRemapCurves_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  return;
}

// NewStructOps @ 14df01610

void * __cdecl Z_Construct_UScriptStruct_FIKRetargetCurveRemapOpSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRetargetCurveRemapOpSettings,&UE::CoreUObject::Private::Construct<FIKRetargetCurveRemapOpSettings>,&UE::CoreUObject::Private::ConstructForTests<FIKRetargetCurveRemapOpSettings>,&UE::CoreUObject::Private::Destruct<FIKRetargetCurveRemapOpSettings>,&UE::CoreUObject::Private::Copy<FIKRetargetCurveRemapOpSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bEnableDebugDraw_SetBit @ 14df01680

void __cdecl
Z_Construct_UScriptStruct_FIKRetargetPelvisMotionOpSettings_Statics::NewProp_bEnableDebugDraw_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x140) = 1;
  return;
}

// NewStructOps @ 14df016a0

void * __cdecl
Z_Construct_UScriptStruct_FIKRetargetPelvisMotionOpSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x148;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRetargetPelvisMotionOpSettings,&UE::CoreUObject::Private::Construct<FIKRetargetPelvisMotionOpSettings>,&UE::CoreUObject::Private::ConstructForTests<FIKRetargetPelvisMotionOpSettings>,&UE::CoreUObject::Private::Destruct<FIKRetargetPelvisMotionOpSettings>,&UE::CoreUObject::Private::SerializeArchive<FIKRetargetPelvisMotionOpSettings>,&UE::CoreUObject::Private::Copy<FIKRetargetPelvisMotionOpSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bEnableLimit_SetBit @ 14df01810

void __cdecl
Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_bEnableLimit_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// NewProp_bAveragePull_SetBit @ 14df01820

void __cdecl
Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_bAveragePull_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  return;
}

// NewProp_bEnableTwistCorrection_SetBit @ 14df01830

void __cdecl
Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_bEnableTwistCorrection_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewStructOps @ 14df01840

void * __cdecl Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLimbSolverSettings,&UE::CoreUObject::Private::Construct<FLimbSolverSettings>,&UE::CoreUObject::Private::ConstructForTests<FLimbSolverSettings>,&UE::CoreUObject::Private::Destruct<FLimbSolverSettings>,&UE::CoreUObject::Private::Copy<FLimbSolverSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UIKRetargetScaleSourceController @ 14df01ac0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIKRetargetScaleSourceController(void)

{
  if (Z_Registration_Info_UClass_UIKRetargetScaleSourceController.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIKRetargetScaleSourceController.OuterSingleton,
               &Z_Construct_UClass_UIKRetargetScaleSourceController_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIKRetargetScaleSourceController.OuterSingleton;
}

// Z_Construct_UEnum_IKRig_EScaleSourcePivot @ 14df01b00

UEnum * __cdecl Z_Construct_UEnum_IKRig_EScaleSourcePivot(void)

{
  if (Z_Registration_Info_UEnum_EScaleSourcePivot.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EScaleSourcePivot.InnerSingleton,
               &Z_Construct_UEnum_IKRig_EScaleSourcePivot_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EScaleSourcePivot.InnerSingleton;
}

// Z_Construct_UScriptStruct_FIKRetargetScaleSourceOpSettings @ 14df01b40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRetargetScaleSourceOpSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetScaleSourceOpSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRetargetScaleSourceOpSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRetargetScaleSourceOpSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetScaleSourceOpSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRetargetScaleSourceOpSettings.InnerSingleton;
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

// EScaleSourcePivot_StaticEnum @ 14df01bc0

UEnum * __cdecl EScaleSourcePivot_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EScaleSourcePivot.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UEnum_EScaleSourcePivot.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_IKRig_EScaleSourcePivot,(UObject *)pUVar1,
                       L"EScaleSourcePivot");
  }
  return Z_Registration_Info_UEnum_EScaleSourcePivot.OuterSingleton;
}

// NewProp_bProjectScalePivotToFloor_SetBit @ 14df01d10

void __cdecl
Z_Construct_UScriptStruct_FIKRetargetScaleSourceOpSettings_Statics::
NewProp_bProjectScalePivotToFloor_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x34) = 1;
  return;
}

// NewStructOps @ 14df01d20

void * __cdecl Z_Construct_UScriptStruct_FIKRetargetCurveRemapOp_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRetargetCurveRemapOp,&UE::CoreUObject::Private::Construct<FIKRetargetCurveRemapOp>,&UE::CoreUObject::Private::ConstructForTests<FIKRetargetCurveRemapOp>,&UE::CoreUObject::Private::Destruct<FIKRetargetCurveRemapOp>,&UE::CoreUObject::Private::Copy<FIKRetargetCurveRemapOp>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14df01d60

void * __cdecl
Z_Construct_UScriptStruct_FIKRetargetScaleSourceOpSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRetargetScaleSourceOpSettings,&UE::CoreUObject::Private::Construct<FIKRetargetScaleSourceOpSettings>,&UE::CoreUObject::Private::ConstructForTests<FIKRetargetScaleSourceOpSettings>,&UE::CoreUObject::Private::Destruct<FIKRetargetScaleSourceOpSettings>,&UE::CoreUObject::Private::Copy<FIKRetargetScaleSourceOpSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14df01e70

void * __cdecl Z_Construct_UScriptStruct_FIKRetargetPelvisMotionOp_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x2c0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRetargetPelvisMotionOp,&UE::CoreUObject::Private::Construct<FIKRetargetPelvisMotionOp>,&UE::CoreUObject::Private::ConstructForTests<FIKRetargetPelvisMotionOp>,&UE::CoreUObject::Private::Destruct<FIKRetargetPelvisMotionOp>,&UE::CoreUObject::Private::Copy<FIKRetargetPelvisMotionOp>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14df01fc0

void * __cdecl Z_Construct_UScriptStruct_FLimbLink_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLimbLink,&UE::CoreUObject::Private::Construct<FLimbLink>,&UE::CoreUObject::Private::ConstructForTests<FLimbLink>,&UE::CoreUObject::Private::Destruct<FLimbLink>,&UE::CoreUObject::Private::Copy<FLimbLink>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UIKRig_FBIKEffector_NoRegister @ 14df02250

UClass * __cdecl Z_Construct_UClass_UIKRig_FBIKEffector_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRig_FBIKEffector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRig_FBIKEffector",
               &Z_Registration_Info_UClass_UIKRig_FBIKEffector.InnerSingleton,
               UIKRig_FBIKEffector::StaticRegisterNativesUIKRig_FBIKEffector,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRig_FBIKEffector>,
               InternalVTableHelperCtorCaller<UIKRig_FBIKEffector>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRig_FBIKEffector.InnerSingleton;
}

// Z_Construct_UClass_UIKRig_FBIKBoneSettings_NoRegister @ 14df02300

UClass * __cdecl Z_Construct_UClass_UIKRig_FBIKBoneSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRig_FBIKBoneSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRig_FBIKBoneSettings",
               &Z_Registration_Info_UClass_UIKRig_FBIKBoneSettings.InnerSingleton,
               UIKRig_FBIKBoneSettings::StaticRegisterNativesUIKRig_FBIKBoneSettings,0x78,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UIKRig_FBIKBoneSettings>
               ,InternalVTableHelperCtorCaller<UIKRig_FBIKBoneSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRig_FBIKBoneSettings.InnerSingleton;
}

// Z_Construct_UClass_UIKGoalCreatorInterface @ 14df02590

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIKGoalCreatorInterface(void)

{
  if (Z_Registration_Info_UClass_UIKGoalCreatorInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIKGoalCreatorInterface.OuterSingleton,
               &Z_Construct_UClass_UIKGoalCreatorInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIKGoalCreatorInterface.OuterSingleton;
}

// NewStructOps @ 14df025d0

void * __cdecl Z_Construct_UScriptStruct_FIKRetargetScaleSourceOp_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRetargetScaleSourceOp,&UE::CoreUObject::Private::Construct<FIKRetargetScaleSourceOp>,&UE::CoreUObject::Private::ConstructForTests<FIKRetargetScaleSourceOp>,&UE::CoreUObject::Private::Destruct<FIKRetargetScaleSourceOp>,&UE::CoreUObject::Private::Copy<FIKRetargetScaleSourceOp>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FIKRigGoal @ 14df02610

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRigGoal(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRigGoal.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRigGoal.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRigGoal_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRigGoal.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRigGoal.InnerSingleton;
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

// Z_Construct_UFunction_UIKRetargetCurveRemapController_GetSettings @ 14df02fe0

UFunction * __cdecl Z_Construct_UFunction_UIKRetargetCurveRemapController_GetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetCurveRemapController_GetSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14df03080

void * __cdecl Z_Construct_UScriptStruct_FLimbSolver_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLimbSolver,&UE::CoreUObject::Private::Construct<FLimbSolver>,&UE::CoreUObject::Private::ConstructForTests<FLimbSolver>,&UE::CoreUObject::Private::Destruct<FLimbSolver>,&UE::CoreUObject::Private::Copy<FLimbSolver>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UIKRetargetPelvisMotionController_GetSettings @ 14df03210

UFunction * __cdecl Z_Construct_UFunction_UIKRetargetPelvisMotionController_GetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetPelvisMotionController_GetSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UIKRetargetCurveRemapController_SetSettings @ 14df03290

UFunction * __cdecl Z_Construct_UFunction_UIKRetargetCurveRemapController_SetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetCurveRemapController_SetSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UIKRig_LimbEffector @ 14df032d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIKRig_LimbEffector(void)

{
  if (Z_Registration_Info_UClass_UIKRig_LimbEffector.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIKRig_LimbEffector.OuterSingleton,
               &Z_Construct_UClass_UIKRig_LimbEffector_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIKRig_LimbEffector.OuterSingleton;
}

// Z_Construct_UClass_UIKRig_LimbSolver @ 14df03310

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIKRig_LimbSolver(void)

{
  if (Z_Registration_Info_UClass_UIKRig_LimbSolver.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIKRig_LimbSolver.OuterSingleton,
               &Z_Construct_UClass_UIKRig_LimbSolver_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIKRig_LimbSolver.OuterSingleton;
}

// Z_Construct_UClass_UIKRigLimbSolverController @ 14df03350

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIKRigLimbSolverController(void)

{
  if (Z_Registration_Info_UClass_UIKRigLimbSolverController.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIKRigLimbSolverController.OuterSingleton,
               &Z_Construct_UClass_UIKRigLimbSolverController_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIKRigLimbSolverController.OuterSingleton;
}

// Z_Construct_UScriptStruct_FIKRigLimbSolverSettings @ 14df03390

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRigLimbSolverSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRigLimbSolverSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRigLimbSolverSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRigLimbSolverSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRigLimbSolverSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRigLimbSolverSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLimbSolverSettings @ 14df03410

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLimbSolverSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLimbSolverSettings.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLimbSolverSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLimbSolverSettings.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FLimbSolverSettings.InnerSingleton;
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

// Z_Construct_UFunction_UIKRetargetPelvisMotionController_GetSourcePelvisBone @ 14df03490

UFunction * __cdecl
Z_Construct_UFunction_UIKRetargetPelvisMotionController_GetSourcePelvisBone(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetPelvisMotionController_GetSourcePelvisBone_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14df034d0

void * __cdecl Z_Construct_UScriptStruct_FIKRigLimbSolverSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRigLimbSolverSettings,&UE::CoreUObject::Private::Construct<FIKRigLimbSolverSettings>,&UE::CoreUObject::Private::ConstructForTests<FIKRigLimbSolverSettings>,&UE::CoreUObject::Private::Destruct<FIKRigLimbSolverSettings>,&UE::CoreUObject::Private::Copy<FIKRigLimbSolverSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UIKRetargetPelvisMotionController_GetTargetPelvisBone @ 14df035c0

UFunction * __cdecl
Z_Construct_UFunction_UIKRetargetPelvisMotionController_GetTargetPelvisBone(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetPelvisMotionController_GetTargetPelvisBone_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UIKRetargetScaleSourceController_GetSettings @ 14df036b0

UFunction * __cdecl Z_Construct_UFunction_UIKRetargetScaleSourceController_GetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetScaleSourceController_GetSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UIKRetargetPelvisMotionController_SetSettings @ 14df03740

UFunction * __cdecl Z_Construct_UFunction_UIKRetargetPelvisMotionController_SetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetPelvisMotionController_SetSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bCopyAllSourceCurves_SetBit @ 14df038c0

void __cdecl
Z_Construct_UClass_UCurveRemapOp_Statics::NewProp_bCopyAllSourceCurves_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x40) = 1;
  return;
}

// Z_Construct_UFunction_UIKRetargetScaleSourceController_SetSettings @ 14df03990

UFunction * __cdecl Z_Construct_UFunction_UIKRetargetScaleSourceController_SetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetScaleSourceController_SetSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UIKRetargetPelvisMotionController_SetSourcePelvisBone @ 14df03d30

UFunction * __cdecl
Z_Construct_UFunction_UIKRetargetPelvisMotionController_SetSourcePelvisBone(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetPelvisMotionController_SetSourcePelvisBone_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14df03db0

void * __cdecl Z_Construct_UScriptStruct_FIKRigLimbSolver_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRigLimbSolver,&UE::CoreUObject::Private::Construct<FIKRigLimbSolver>,&UE::CoreUObject::Private::ConstructForTests<FIKRigLimbSolver>,&UE::CoreUObject::Private::Destruct<FIKRigLimbSolver>,&UE::CoreUObject::Private::Copy<FIKRigLimbSolver>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UIKRetargetPelvisMotionController_SetTargetPelvisBone @ 14df03e80

UFunction * __cdecl
Z_Construct_UFunction_UIKRetargetPelvisMotionController_SetTargetPelvisBone(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetPelvisMotionController_SetTargetPelvisBone_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UIKRigLimbSolverController_GetSolverSettings @ 14df04200

UFunction * __cdecl Z_Construct_UFunction_UIKRigLimbSolverController_GetSolverSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRigLimbSolverController_GetSolverSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UIKRetargetSpeedPlantingController @ 14df04310

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIKRetargetSpeedPlantingController(void)

{
  if (Z_Registration_Info_UClass_UIKRetargetSpeedPlantingController.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIKRetargetSpeedPlantingController.OuterSingleton,
               &Z_Construct_UClass_UIKRetargetSpeedPlantingController_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIKRetargetSpeedPlantingController.OuterSingleton;
}

// NewStructOps @ 14df04350

void * __cdecl Z_Construct_UScriptStruct_FIKRigInputSkeleton_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRigInputSkeleton,&UE::CoreUObject::Private::Construct<FIKRigInputSkeleton>,&UE::CoreUObject::Private::ConstructForTests<FIKRigInputSkeleton>,&UE::CoreUObject::Private::Destruct<FIKRigInputSkeleton>,&UE::CoreUObject::Private::Copy<FIKRigInputSkeleton>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FIKRetargetSpeedPlantingOpSettings @ 14df04390

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRetargetSpeedPlantingOpSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetSpeedPlantingOpSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRetargetSpeedPlantingOpSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRetargetSpeedPlantingOpSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetSpeedPlantingOpSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRetargetSpeedPlantingOpSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRetargetSpeedPlantingSettings @ 14df04410

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRetargetSpeedPlantingSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRetargetSpeedPlantingSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRetargetSpeedPlantingSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FRetargetSpeedPlantingSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRetargetSpeedPlantingSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRetargetSpeedPlantingSettings.InnerSingleton;
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

// NewStructOps @ 14df04490

void * __cdecl Z_Construct_UScriptStruct_FRetargetSpeedPlantingSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRetargetSpeedPlantingSettings,&UE::CoreUObject::Private::Construct<FRetargetSpeedPlantingSettings>,&UE::CoreUObject::Private::ConstructForTests<FRetargetSpeedPlantingSettings>,&UE::CoreUObject::Private::Destruct<FRetargetSpeedPlantingSettings>,&UE::CoreUObject::Private::Copy<FRetargetSpeedPlantingSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UIKRigLimbSolverController_SetSolverSettings @ 14df044d0

UFunction * __cdecl Z_Construct_UFunction_UIKRigLimbSolverController_SetSolverSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRigLimbSolverController_SetSolverSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14df04510

void * __thiscall
FIKRetargetAlignPoleVectorOp::_scalar_deleting_destructor_
          (FIKRetargetAlignPoleVectorOp *this,uint param_1)

{
  ~FIKRetargetAlignPoleVectorOp(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// NewStructOps @ 14df04610

void * __cdecl Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRigSkeleton,&UE::CoreUObject::Private::Construct<FIKRigSkeleton>,&UE::CoreUObject::Private::ConstructForTests<FIKRigSkeleton>,&UE::CoreUObject::Private::Destruct<FIKRigSkeleton>,&UE::CoreUObject::Private::Copy<FIKRigSkeleton>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14df04650

void * __cdecl
Z_Construct_UScriptStruct_FIKRetargetSpeedPlantingOpSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRetargetSpeedPlantingOpSettings,&UE::CoreUObject::Private::Construct<FIKRetargetSpeedPlantingOpSettings>,&UE::CoreUObject::Private::ConstructForTests<FIKRetargetSpeedPlantingOpSettings>,&UE::CoreUObject::Private::Destruct<FIKRetargetSpeedPlantingOpSettings>,&UE::CoreUObject::Private::Copy<FIKRetargetSpeedPlantingOpSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bEnableLimit_SetBit @ 14df04940

void __cdecl
Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_bEnableLimit_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  return;
}

// NewProp_bAveragePull_SetBit @ 14df04950

void __cdecl
Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_bAveragePull_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
  return;
}

// NewProp_bEnableTwistCorrection_SetBit @ 14df049a0

void __cdecl
Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_bEnableTwistCorrection_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x58) = 1;
  return;
}

// NewStructOps @ 14df049b0

void * __cdecl Z_Construct_UScriptStruct_FIKRetargetSpeedPlantingOp_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x78;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRetargetSpeedPlantingOp,&UE::CoreUObject::Private::Construct<FIKRetargetSpeedPlantingOp>,&UE::CoreUObject::Private::ConstructForTests<FIKRetargetSpeedPlantingOp>,&UE::CoreUObject::Private::Destruct<FIKRetargetSpeedPlantingOp>,&UE::CoreUObject::Private::Copy<FIKRetargetSpeedPlantingOp>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UIKRetargetOpControllerBase @ 14df04b30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIKRetargetOpControllerBase(void)

{
  if (Z_Registration_Info_UClass_UIKRetargetOpControllerBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIKRetargetOpControllerBase.OuterSingleton,
               &Z_Construct_UClass_UIKRetargetOpControllerBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIKRetargetOpControllerBase.OuterSingleton;
}

// Z_Construct_UClass_URetargetOpBase @ 14df04b70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_URetargetOpBase(void)

{
  if (Z_Registration_Info_UClass_URetargetOpBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_URetargetOpBase.OuterSingleton,
               &Z_Construct_UClass_URetargetOpBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_URetargetOpBase.OuterSingleton;
}

// Z_Construct_UClass_URetargetOpStack @ 14df04bb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_URetargetOpStack(void)

{
  if (Z_Registration_Info_UClass_URetargetOpStack.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_URetargetOpStack.OuterSingleton,
               &Z_Construct_UClass_URetargetOpStack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_URetargetOpStack.OuterSingleton;
}

// Z_Construct_UScriptStruct_FIKRetargetOpBase @ 14df04bf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRetargetOpBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRetargetOpBase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.InnerSingleton;
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

// Z_Construct_UScriptStruct_FIKRetargetOpSettingsBase @ 14df04c70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRetargetOpSettingsBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetOpSettingsBase.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRetargetOpSettingsBase.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRetargetOpSettingsBase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetOpSettingsBase.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRetargetOpSettingsBase.InnerSingleton;
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

// NewProp_bDebugDraw_SetBit @ 14df04cf0

void __cdecl
Z_Construct_UScriptStruct_FIKRetargetOpSettingsBase_Statics::NewProp_bDebugDraw_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewStructOps @ 14df04d00

void * __cdecl Z_Construct_UScriptStruct_FIKRetargetOpSettingsBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRetargetOpSettingsBase,&UE::CoreUObject::Private::Construct<FIKRetargetOpSettingsBase>,&UE::CoreUObject::Private::ConstructForTests<FIKRetargetOpSettingsBase>,&UE::CoreUObject::Private::Destruct<FIKRetargetOpSettingsBase>,&UE::CoreUObject::Private::Copy<FIKRetargetOpSettingsBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UIKRetargetSpeedPlantingController_GetSettings @ 14df04e40

UFunction * __cdecl Z_Construct_UFunction_UIKRetargetSpeedPlantingController_GetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetSpeedPlantingController_GetSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsEnabled_SetBit @ 14df04fb0

void __cdecl
Z_Construct_UScriptStruct_FIKRetargetOpBase_Statics::NewProp_bIsEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_bTakeInputCurvesFromSourceAnimInstance_SetBit @ 14df04fc0

void __cdecl
Z_Construct_UScriptStruct_FIKRetargetOpBase_Statics::
NewProp_bTakeInputCurvesFromSourceAnimInstance_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  return;
}

// NewStructOps @ 14df04fd0

void * __cdecl Z_Construct_UScriptStruct_FIKRetargetOpBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIKRetargetOpBase,&UE::CoreUObject::Private::Construct<FIKRetargetOpBase>,&UE::CoreUObject::Private::ConstructForTests<FIKRetargetOpBase>,&UE::CoreUObject::Private::Destruct<FIKRetargetOpBase>,&UE::CoreUObject::Private::Copy<FIKRetargetOpBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UIKRetargetSpeedPlantingController_SetSettings @ 14df05930

UFunction * __cdecl Z_Construct_UFunction_UIKRetargetSpeedPlantingController_SetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UIKRetargetSpeedPlantingController_SetSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14df06670

void * __thiscall
FIKRigFullBodyIKSolver::_scalar_deleting_destructor_(FIKRigFullBodyIKSolver *this,uint param_1)

{
  ~FIKRigFullBodyIKSolver(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// Z_Construct_UClass_UIKRig_PoleSolverEffector_NoRegister @ 14df066b0

UClass * __cdecl Z_Construct_UClass_UIKRig_PoleSolverEffector_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRig_PoleSolverEffector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRig_PoleSolverEffector",
               &Z_Registration_Info_UClass_UIKRig_PoleSolverEffector.InnerSingleton,
               UIKRig_PoleSolverEffector::StaticRegisterNativesUIKRig_PoleSolverEffector,0x40,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UIKRig_PoleSolverEffector>,
               InternalVTableHelperCtorCaller<UIKRig_PoleSolverEffector>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRig_PoleSolverEffector.InnerSingleton;
}

// `scalar_deleting_destructor' @ 14df07ad0

void * __thiscall
FIKRigPoleSolver::_scalar_deleting_destructor_(FIKRigPoleSolver *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChildrenToUpdate).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Chain).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->Settings)._padding_ = (longlong)&___7FIKRigSettingsBase__6B_;
  this->_padding_ = (longlong)&___7FIKRigSolverBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// NewProp_bIsEnabled_SetBit @ 14df07e60

void __cdecl Z_Construct_UClass_URetargetOpBase_Statics::NewProp_bIsEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// `scalar_deleting_destructor' @ 14df08700

void * __thiscall
FIKRetargetFilterBoneOp::_scalar_deleting_destructor_(FIKRetargetFilterBoneOp *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  UObject *pUVar2;
  
  pFVar1 = (this->Settings).BonesToFilter.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->Settings)._padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  pUVar2 = (UObject *)(this->Settings)._padding_;
  if (pUVar2 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar2);
    (this->Settings)._padding_ = 0;
  }
  this->_padding_ = (longlong)&___7FIKRetargetOpBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// Z_Construct_UClass_UIKRig_BodyMoverEffector_NoRegister @ 14df08910

UClass * __cdecl Z_Construct_UClass_UIKRig_BodyMoverEffector_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRig_BodyMoverEffector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRig_BodyMoverEffector",
               &Z_Registration_Info_UClass_UIKRig_BodyMoverEffector.InnerSingleton,
               UIKRig_BodyMoverEffector::StaticRegisterNativesUIKRig_BodyMoverEffector,0x40,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UIKRig_BodyMoverEffector>,
               InternalVTableHelperCtorCaller<UIKRig_BodyMoverEffector>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRig_BodyMoverEffector.InnerSingleton;
}

// Z_Construct_UClass_UIKRetargetFilterBoneController @ 14df09b50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIKRetargetFilterBoneController(void)

{
  if (Z_Registration_Info_UClass_UIKRetargetFilterBoneController.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIKRetargetFilterBoneController.OuterSingleton,
               &Z_Construct_UClass_UIKRetargetFilterBoneController_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIKRetargetFilterBoneController.OuterSingleton;
}

// Z_Construct_UScriptStruct_FFilterBoneData @ 14df09d30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FFilterBoneData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FFilterBoneData.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FFilterBoneData.InnerSingleton,
               &Z_Construct_UScriptStruct_FFilterBoneData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FFilterBoneData.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FFilterBoneData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FIKRetargetFilterBoneOpSettings @ 14df09ec0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRetargetFilterBoneOpSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetFilterBoneOpSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRetargetFilterBoneOpSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRetargetFilterBoneOpSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetFilterBoneOpSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRetargetFilterBoneOpSettings.InnerSingleton;
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

// NewStructOps @ 14df0a040

void * __cdecl Z_Construct_UScriptStruct_FFilterBoneData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FFilterBoneData,&UE::CoreUObject::Private::Construct<FFilterBoneData>,&UE::CoreUObject::Private::ConstructForTests<FFilterBoneData>,&UE::CoreUObject::Private::Destruct<FFilterBoneData>,&UE::CoreUObject::Private::Copy<FFilterBoneData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// ConstructItems<TOptional<float>,TOptional<float>,int> @ 14df0a540

void __cdecl
ConstructItems<TOptional<float>,TOptional<float>,int>
          (void *param_1,TOptional<float> *param_2,int param_3)

{
  bool bVar1;
  char *pcVar2;
  
  if (param_3 != 0) {
    pcVar2 = (char *)((longlong)param_1 + 4);
    do {
      *pcVar2 = '\0';
      bVar1 = param_2->bIsSet;
      *pcVar2 = bVar1;
      if (bVar1 != false) {
        *(float *)(pcVar2 + -4) = param_2->TypedValue;
      }
      pcVar2 = pcVar2 + 8;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FChainPairFK,FChainPairFK,int> @ 14df0a580

void __cdecl
ConstructItems<FChainPairFK,FChainPairFK,int>(void *param_1,FChainPairFK *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  void *_Src;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  longlong lVar5;
  int *piVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong lVar8;
  
  if (param_3 != 0) {
    piVar6 = (int *)((longlong)param_1 + 0xcc);
    pTVar7 = &(param_2->FKDecoder).IntermediateParentIndices;
    lVar8 = (longlong)param_1 + (-0xc0 - (longlong)param_2);
    do {
      *(undefined8 *)(lVar8 + (longlong)pTVar7) = 0;
      pFVar1 = (ForAnyElementType *)(lVar8 + (longlong)pTVar7);
      iVar2 = *(int *)((longlong)(pTVar7 + -0xc) + 8);
      _Src = *(void **)(pTVar7 + -0xc);
      piVar6[-0x31] = iVar2;
      if (iVar2 == 0) {
        piVar6[-0x30] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,iVar2,0,pFVar1,iVar2,piVar6 + -0x30);
        memcpy(pFVar1->Data,_Src,(longlong)iVar2 * 0x60);
      }
      uVar4 = *(undefined8 *)((longlong)(pTVar7 + -0xb) + 8);
      *(undefined8 *)(piVar6 + -0x2f) = pTVar7[-0xb].AllocatorInstance;
      *(undefined8 *)(piVar6 + -0x2d) = uVar4;
      uVar4 = *(undefined8 *)((longlong)(pTVar7 + -10) + 8);
      *(undefined8 *)(piVar6 + -0x2b) = pTVar7[-10].AllocatorInstance;
      *(undefined8 *)(piVar6 + -0x29) = uVar4;
      uVar4 = *(undefined8 *)((longlong)(pTVar7 + -9) + 8);
      *(undefined8 *)(piVar6 + -0x27) = pTVar7[-9].AllocatorInstance;
      *(undefined8 *)(piVar6 + -0x25) = uVar4;
      uVar4 = *(undefined8 *)((longlong)(pTVar7 + -8) + 8);
      *(undefined8 *)(piVar6 + -0x23) = pTVar7[-8].AllocatorInstance;
      *(undefined8 *)(piVar6 + -0x21) = uVar4;
      uVar4 = *(undefined8 *)((longlong)(pTVar7 + -7) + 8);
      *(undefined8 *)(piVar6 + -0x1f) = pTVar7[-7].AllocatorInstance;
      *(undefined8 *)(piVar6 + -0x1d) = uVar4;
      uVar4 = *(undefined8 *)((longlong)(pTVar7 + -6) + 8);
      *(undefined8 *)(piVar6 + -0x1b) = pTVar7[-6].AllocatorInstance;
      *(undefined8 *)(piVar6 + -0x19) = uVar4;
      *(undefined8 *)(piVar6 + -0x17) = pTVar7[-5].AllocatorInstance;
      FChainDecoderCachedData::FChainDecoderCachedData
                ((FChainDecoderCachedData *)(piVar6 + -0x13),
                 (FChainDecoderCachedData *)(pTVar7 + -4));
      piVar6[-3] = 0;
      piVar6[-2] = 0;
      iVar2 = pTVar7->ArrayNum;
      pFVar3 = (pTVar7->AllocatorInstance).Data;
      piVar6[-1] = iVar2;
      if (iVar2 == 0) {
        *piVar6 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar2,0,(ForAnyElementType *)(piVar6 + -3),iVar2,piVar6);
        memcpy(((ForAnyElementType *)(piVar6 + -3))->Data,pFVar3,(longlong)iVar2 << 2);
      }
      piVar6[1] = 0;
      piVar6[2] = 0;
      iVar2 = ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(pTVar7 + 1))->
              ArrayNum;
      pFVar3 = (((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(pTVar7 + 1))->
               AllocatorInstance).Data;
      piVar6[3] = iVar2;
      if (iVar2 == 0) {
        piVar6[4] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,iVar2,0,(ForAnyElementType *)(piVar6 + 1),iVar2,piVar6 + 4);
        memcpy(((ForAnyElementType *)(piVar6 + 1))->Data,pFVar3,(longlong)iVar2 * 0x60);
      }
      *(FResolvedBoneChain **)(piVar6 + 5) = *(FResolvedBoneChain **)(pTVar7 + 2);
      *(undefined8 *)(piVar6 + 7) = *(undefined8 *)((longlong)(pTVar7 + 2) + 8);
      *(undefined8 *)(piVar6 + 9) = pTVar7[3].AllocatorInstance;
      lVar5 = (longlong)(pTVar7 + 3);
      pTVar7 = pTVar7 + 0x10;
      *(undefined8 *)(piVar6 + 0xb) = *(undefined8 *)(lVar5 + 8);
      piVar6 = piVar6 + 0x40;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FChainStretcher,FChainStretcher,int> @ 14df0a7a0

void __cdecl
ConstructItems<FChainStretcher,FChainStretcher,int>
          (void *param_1,FChainStretcher *param_2,int param_3)

{
  FResolvedBoneChain **ppFVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  int *piVar4;
  FRetargetStretchChainSettings **ppFVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    piVar4 = (int *)((longlong)param_1 + 0xc);
    ppFVar5 = &param_2->Settings;
    lVar6 = (longlong)param_1 + (-0x10 - (longlong)param_2);
    do {
      *(undefined8 *)(lVar6 + (longlong)ppFVar5) = 0;
      pFVar2 = (ForAnyElementType *)(lVar6 + (longlong)ppFVar5);
      iVar3 = *(int *)(ppFVar5 + -1);
      _Src = (((FChainStretcher *)(ppFVar5 + -2))->AllChildrenOfChain).AllocatorInstance.Data;
      piVar4[-1] = iVar3;
      if (iVar3 == 0) {
        *piVar4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar3,0,pFVar2,iVar3,piVar4);
        memcpy(pFVar2->Data,_Src,(longlong)iVar3 << 2);
      }
      *(FRetargetStretchChainSettings **)(piVar4 + 1) = *ppFVar5;
      *(FResolvedBoneChain **)(piVar4 + 3) = (FResolvedBoneChain *)ppFVar5[1];
      ppFVar1 = (FResolvedBoneChain **)(ppFVar5 + 2);
      ppFVar5 = ppFVar5 + 5;
      *(FResolvedBoneChain **)(piVar4 + 5) = *ppFVar1;
      piVar4 = piVar4 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FIKRigBodyMoverGoalSettings,FIKRigBodyMoverGoalSettings,int> @ 14df0a8a0

void __cdecl
ConstructItems<FIKRigBodyMoverGoalSettings,FIKRigBodyMoverGoalSettings,int>
          (void *param_1,FIKRigBodyMoverGoalSettings *param_2,int param_3)

{
  FName *pFVar1;
  FName *pFVar2;
  
  if (param_3 != 0) {
    pFVar1 = &param_2->BoneName;
    pFVar2 = (FName *)((longlong)param_1 + 0x10);
    do {
      *(undefined ***)((longlong)pFVar1 + (longlong)param_1 + (-0x10 - (longlong)param_2)) =
           &___7FIKRigGoalSettingsBase__6B_;
      pFVar2[-1] = pFVar1[-1];
      *(undefined ***)((longlong)pFVar1 + (longlong)param_1 + (-0x10 - (longlong)param_2)) =
           &___7FIKRigBodyMoverGoalSettings__6B_;
      *pFVar2 = *pFVar1;
      pFVar2[1].ComparisonIndex.Value = pFVar1[1].ComparisonIndex.Value;
      param_3 = param_3 + -1;
      pFVar1 = pFVar1 + 4;
      pFVar2 = pFVar2 + 4;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FIKRigFBIKBoneSettings,FIKRigFBIKBoneSettings,int> @ 14df0a900

void __cdecl
ConstructItems<FIKRigFBIKBoneSettings,FIKRigFBIKBoneSettings,int>
          (void *param_1,FIKRigFBIKBoneSettings *param_2,int param_3)

{
  undefined8 uVar1;
  float *pfVar2;
  float *pfVar3;
  
  if (param_3 != 0) {
    pfVar2 = &param_2->RotationStiffness;
    pfVar3 = (float *)((longlong)param_1 + 0x10);
    do {
      *(undefined ***)((longlong)param_1 + (-0x10 - (longlong)param_2) + (longlong)pfVar2) =
           &___7FIKRigBoneSettingsBase__6B_;
      *(longlong *)(pfVar3 + -2) = *(longlong *)(pfVar2 + -2);
      *(undefined ***)((longlong)param_1 + (-0x10 - (longlong)param_2) + (longlong)pfVar2) =
           &___7FIKRigFBIKBoneSettings__6B_;
      *pfVar3 = *pfVar2;
      pfVar3[1] = pfVar2[1];
      *(EPBIKLimitType *)(pfVar3 + 2) = *(EPBIKLimitType *)(pfVar2 + 2);
      pfVar3[3] = pfVar2[3];
      pfVar3[4] = pfVar2[4];
      *(EPBIKLimitType *)(pfVar3 + 5) = *(EPBIKLimitType *)(pfVar2 + 5);
      pfVar3[6] = pfVar2[6];
      pfVar3[7] = pfVar2[7];
      *(EPBIKLimitType *)(pfVar3 + 8) = *(EPBIKLimitType *)(pfVar2 + 8);
      pfVar3[9] = pfVar2[9];
      pfVar3[10] = pfVar2[10];
      *(bool *)(pfVar3 + 0xb) = *(bool *)(pfVar2 + 0xb);
      uVar1 = *(undefined8 *)(pfVar2 + 0xe);
      *(double *)(pfVar3 + 0xc) = (((TVector<double> *)(pfVar2 + 0xc))->field0_0x0)._s_0.X;
      *(undefined8 *)(pfVar3 + 0xe) = uVar1;
      *(undefined8 *)(pfVar3 + 0x10) = *(undefined8 *)(pfVar2 + 0x10);
      param_3 = param_3 + -1;
      pfVar2 = pfVar2 + 0x16;
      pfVar3 = pfVar3 + 0x16;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FIKRigFBIKGoalSettings,FIKRigFBIKGoalSettings,int> @ 14df0a9d0

void __cdecl
ConstructItems<FIKRigFBIKGoalSettings,FIKRigFBIKGoalSettings,int>
          (void *param_1,FIKRigFBIKGoalSettings *param_2,int param_3)

{
  FName *pFVar1;
  FName *pFVar2;
  
  if (param_3 != 0) {
    pFVar1 = &param_2->BoneName;
    pFVar2 = (FName *)((longlong)param_1 + 0x10);
    do {
      *(undefined ***)((longlong)pFVar1 + (longlong)param_1 + (-0x10 - (longlong)param_2)) =
           &___7FIKRigGoalSettingsBase__6B_;
      pFVar2[-1] = pFVar1[-1];
      *(undefined ***)((longlong)pFVar1 + (longlong)param_1 + (-0x10 - (longlong)param_2)) =
           &___7FIKRigFBIKGoalSettings__6B_;
      *pFVar2 = *pFVar1;
      pFVar2[1].ComparisonIndex.Value = pFVar1[1].ComparisonIndex.Value;
      pFVar2[1].Number = pFVar1[1].Number;
      pFVar2[2].ComparisonIndex.Value = pFVar1[2].ComparisonIndex.Value;
      pFVar2[2].Number = pFVar1[2].Number;
      pFVar2[3].ComparisonIndex.Value = pFVar1[3].ComparisonIndex.Value;
      param_3 = param_3 + -1;
      pFVar1 = pFVar1 + 6;
      pFVar2 = pFVar2 + 6;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FIKRigStretchLimbBoneSettings,FIKRigStretchLimbBoneSettings,int> @ 14df0aa50

void __cdecl
ConstructItems<FIKRigStretchLimbBoneSettings,FIKRigStretchLimbBoneSettings,int>
          (void *param_1,FIKRigStretchLimbBoneSettings *param_2,int param_3)

{
  double dVar1;
  TVector<double> *pTVar2;
  double *pdVar3;
  
  if (param_3 != 0) {
    pTVar2 = &param_2->SquashDirection;
    pdVar3 = (double *)((longlong)param_1 + 0x10);
    do {
      *(undefined ***)((longlong)pTVar2 + (longlong)param_1 + (-0x10 - (longlong)param_2)) =
           &___7FIKRigBoneSettingsBase__6B_;
      pdVar3[-1] = *(double *)((longlong)(pTVar2 + -1) + 0x10);
      *(undefined ***)((longlong)pTVar2 + (longlong)param_1 + (-0x10 - (longlong)param_2)) =
           &___7FIKRigStretchLimbBoneSettings__6B_;
      dVar1 = (pTVar2->field0_0x0)._s_0.Y;
      *pdVar3 = (pTVar2->field0_0x0)._s_0.X;
      pdVar3[1] = dVar1;
      pdVar3[2] = (pTVar2->field0_0x0)._s_0.Z;
      *(int *)(pdVar3 + 3) = *(int *)(pTVar2 + 1);
      param_3 = param_3 + -1;
      pTVar2 = pTVar2 + 2;
      pdVar3 = pdVar3 + 6;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FPoleVectorMatcher,FPoleVectorMatcher,int> @ 14df0aac0

void __cdecl
ConstructItems<FPoleVectorMatcher,FPoleVectorMatcher,int>
          (void *param_1,FPoleVectorMatcher *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  FResolvedBoneChain **ppFVar2;
  Type TVar3;
  FScriptContainerElement *_Src;
  Type *pTVar4;
  Type *pTVar5;
  
  if (param_3 != 0) {
    pTVar4 = &param_2->TargetPoleAxis;
    pTVar5 = (Type *)((longlong)param_1 + 4);
    do {
      pFVar1 = (ForAnyElementType *)(pTVar5 + 3);
      *(Type *)((longlong)param_1 + (-4 - (longlong)param_2) + (longlong)pTVar4) =
           ((FPoleVectorMatcher *)(pTVar4 + -1))->SourcePoleAxis;
      *pTVar5 = *pTVar4;
      pTVar5[1] = pTVar4[1];
      pFVar1->Data = (FScriptContainerElement *)0x0;
      TVar3 = pTVar4[5];
      _Src = (((TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar4 + 3))->AllocatorInstance).Data;
      pTVar5[5] = TVar3;
      if (TVar3 == None) {
        pTVar5[6] = None;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,TVar3,0,pFVar1,TVar3,(int *)(pTVar5 + 6));
        memcpy(pFVar1->Data,_Src,(longlong)(int)TVar3 << 2);
      }
      *(FRetargetPoleVectorSettings **)(pTVar5 + 7) = *(FRetargetPoleVectorSettings **)(pTVar4 + 7);
      *(FResolvedBoneChain **)(pTVar5 + 9) = *(FResolvedBoneChain **)(pTVar4 + 9);
      ppFVar2 = (FResolvedBoneChain **)(pTVar4 + 0xb);
      pTVar4 = pTVar4 + 0xe;
      *(FResolvedBoneChain **)(pTVar5 + 0xb) = *ppFVar2;
      pTVar5 = pTVar5 + 0xe;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FResolvedBoneChain,FResolvedBoneChain,int> @ 14df0abc0

void __cdecl
ConstructItems<FResolvedBoneChain,FResolvedBoneChain,int>
          (void *param_1,FResolvedBoneChain *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  undefined1 *puVar2;
  int iVar3;
  void *pvVar4;
  FScriptContainerElement *_Src;
  undefined8 uVar5;
  int *piVar6;
  int *piVar7;
  
  if (param_3 != 0) {
    piVar6 = (int *)((longlong)param_1 + 0x38);
    piVar7 = &(param_2->RefPoseLocalTransforms).ArrayNum;
    do {
      pFVar1 = (ForAnyElementType *)(piVar6 + -6);
      *(undefined8 *)((longlong)piVar7 + (longlong)param_1 + (-0x38 - (longlong)param_2)) =
           *(undefined8 *)(piVar7 + -0xe);
      *(undefined8 *)(piVar6 + -0xc) = *(undefined8 *)(piVar7 + -0xc);
      *(undefined8 *)(piVar6 + -10) = *(undefined8 *)(piVar7 + -10);
      *(undefined8 *)(piVar6 + -8) = *(undefined8 *)(piVar7 + -8);
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar3 = piVar7[-4];
      pvVar4 = *(void **)(piVar7 + -6);
      piVar6[-4] = iVar3;
      if (iVar3 == 0) {
        piVar6[-3] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,iVar3,0,pFVar1,iVar3,piVar6 + -3);
        memcpy(pFVar1->Data,pvVar4,(longlong)iVar3 * 0x60);
      }
      piVar6[-2] = 0;
      piVar6[-1] = 0;
      iVar3 = *piVar7;
      _Src = (((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(piVar7 + -2))->
             AllocatorInstance).Data;
      *piVar6 = iVar3;
      if (iVar3 == 0) {
        piVar6[1] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,iVar3,0,(ForAnyElementType *)(piVar6 + -2),iVar3,piVar6 + 1);
        memcpy(((ForAnyElementType *)(piVar6 + -2))->Data,_Src,(longlong)iVar3 * 0x60);
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
                  (0x60,0x10,iVar3,0,(ForAnyElementType *)(piVar6 + 2),iVar3,piVar6 + 5);
        memcpy(((ForAnyElementType *)(piVar6 + 2))->Data,pvVar4,(longlong)iVar3 * 0x60);
      }
      piVar6[6] = 0;
      piVar6[7] = 0;
      iVar3 = piVar7[8];
      pvVar4 = *(void **)(piVar7 + 6);
      piVar6[8] = iVar3;
      if (iVar3 == 0) {
        piVar6[9] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar3,0,(ForAnyElementType *)(piVar6 + 6),iVar3,piVar6 + 9);
        memcpy(((ForAnyElementType *)(piVar6 + 6))->Data,pvVar4,(longlong)iVar3 << 2);
      }
      piVar6[10] = 0;
      piVar6[0xb] = 0;
      iVar3 = piVar7[0xc];
      pvVar4 = *(void **)(piVar7 + 10);
      piVar6[0xc] = iVar3;
      if (iVar3 == 0) {
        piVar6[0xd] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar3,0,(ForAnyElementType *)(piVar6 + 10),iVar3,piVar6 + 0xd);
        memcpy(((ForAnyElementType *)(piVar6 + 10))->Data,pvVar4,(longlong)iVar3 << 2);
      }
      piVar6[0xe] = piVar7[0xe];
      piVar6[0xf] = piVar7[0xf];
      uVar5 = *(undefined8 *)(piVar7 + 0x14);
      *(undefined8 *)(piVar6 + 0x12) = *(undefined8 *)(piVar7 + 0x12);
      *(undefined8 *)(piVar6 + 0x14) = uVar5;
      uVar5 = *(undefined8 *)(piVar7 + 0x18);
      *(undefined8 *)(piVar6 + 0x16) = *(undefined8 *)(piVar7 + 0x16);
      *(undefined8 *)(piVar6 + 0x18) = uVar5;
      uVar5 = *(undefined8 *)(piVar7 + 0x1c);
      *(undefined8 *)(piVar6 + 0x1a) = *(undefined8 *)(piVar7 + 0x1a);
      *(undefined8 *)(piVar6 + 0x1c) = uVar5;
      uVar5 = *(undefined8 *)(piVar7 + 0x20);
      *(undefined8 *)(piVar6 + 0x1e) = *(undefined8 *)(piVar7 + 0x1e);
      *(undefined8 *)(piVar6 + 0x20) = uVar5;
      uVar5 = *(undefined8 *)(piVar7 + 0x24);
      *(undefined8 *)(piVar6 + 0x22) = *(undefined8 *)(piVar7 + 0x22);
      *(undefined8 *)(piVar6 + 0x24) = uVar5;
      uVar5 = *(undefined8 *)(piVar7 + 0x28);
      *(undefined8 *)(piVar6 + 0x26) = *(undefined8 *)(piVar7 + 0x26);
      *(undefined8 *)(piVar6 + 0x28) = uVar5;
      *(char *)(piVar6 + 0x2a) = (char)piVar7[0x2a];
      *(undefined1 *)((longlong)piVar6 + 0xa9) = *(undefined1 *)((longlong)piVar7 + 0xa9);
      puVar2 = (undefined1 *)((longlong)piVar7 + 0xaa);
      piVar7 = piVar7 + 0x3c;
      *(undefined1 *)((longlong)piVar6 + 0xaa) = *puVar2;
      piVar6 = piVar6 + 0x3c;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FResolvedRetargetPose,FResolvedRetargetPose,int> @ 14df0ae80

void __cdecl
ConstructItems<FResolvedRetargetPose,FResolvedRetargetPose,int>
          (void *param_1,FResolvedRetargetPose *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  void *_Src;
  FScriptContainerElement *_Src_00;
  undefined8 uVar3;
  int *piVar4;
  int *piVar5;
  
  if (param_3 != 0) {
    piVar4 = (int *)((longlong)param_1 + 0x48);
    piVar5 = &(param_2->GlobalPose).ArrayNum;
    do {
      pFVar1 = (ForAnyElementType *)(piVar4 + -6);
      *(undefined8 *)((longlong)piVar5 + (longlong)param_1 + (-0x48 - (longlong)param_2)) =
           *(undefined8 *)(piVar5 + -0x12);
      piVar4[-0x10] = piVar5[-0x10];
      uVar3 = *(undefined8 *)(piVar5 + -0xc);
      *(undefined8 *)(piVar4 + -0xe) = *(undefined8 *)(piVar5 + -0xe);
      *(undefined8 *)(piVar4 + -0xc) = uVar3;
      uVar3 = *(undefined8 *)(piVar5 + -8);
      *(undefined8 *)(piVar4 + -10) = *(undefined8 *)(piVar5 + -10);
      *(undefined8 *)(piVar4 + -8) = uVar3;
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar2 = piVar5[-4];
      _Src = *(void **)(piVar5 + -6);
      piVar4[-4] = iVar2;
      if (iVar2 == 0) {
        piVar4[-3] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,iVar2,0,pFVar1,iVar2,piVar4 + -3);
        memcpy(pFVar1->Data,_Src,(longlong)iVar2 * 0x60);
      }
      piVar4[-2] = 0;
      piVar4[-1] = 0;
      iVar2 = *piVar5;
      _Src_00 = (((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(piVar5 + -2))
                ->AllocatorInstance).Data;
      *piVar4 = iVar2;
      if (iVar2 == 0) {
        piVar4[1] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,iVar2,0,(ForAnyElementType *)(piVar4 + -2),iVar2,piVar4 + 1);
        memcpy(((ForAnyElementType *)(piVar4 + -2))->Data,_Src_00,(longlong)iVar2 * 0x60);
      }
      piVar5 = piVar5 + 0x14;
      piVar4 = piVar4 + 0x14;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FRetargetOpProfile,FRetargetOpProfile,int> @ 14df0afd0

void __cdecl
ConstructItems<FRetargetOpProfile,FRetargetOpProfile,int>
          (void *param_1,FRetargetOpProfile *param_2,int param_3)

{
  UScriptStruct *this;
  FInstancedStruct *this_00;
  FInstancedStruct *pFVar1;
  
  if (param_3 != 0) {
    this_00 = (FInstancedStruct *)((longlong)param_1 + 8);
    pFVar1 = &param_2->SettingsToApply;
    do {
      *(undefined8 *)((longlong)param_1 + (-8 - (longlong)param_2) + (longlong)pFVar1) =
           *(undefined8 *)((longlong)(pFVar1 + -1) + 8);
      (this_00->ScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
      this_00->StructMemory = (uchar *)0x0;
      FInstancedStruct::InitializeAs
                (this_00,(pFVar1->ScriptStruct).field0_0x0.DebugPtr,pFVar1->StructMemory);
      this_00[1].ScriptStruct.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
      this = (UScriptStruct *)
             ((TStrongObjectPtr<UIKRetargetOpControllerBase,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
               *)(pFVar1 + 1))->Object;
      if (this != (UScriptStruct *)0x0) {
        UObjectBase::AddRef((UObjectBase *)this);
        this_00[1].ScriptStruct.field0_0x0.DebugPtr = this;
      }
      this_00 = this_00 + 2;
      pFVar1 = pFVar1 + 2;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TArray<TOptional<float>,TSizedDefaultAllocator<32>_>,TArray<TOptional<float>,TSizedDefaultAllocator<32>_>,int> @ 14df0b080

void __cdecl
ConstructItems<TArray<TOptional<float>,TSizedDefaultAllocator<32>_>,TArray<TOptional<float>,TSizedDefaultAllocator<32>_>,int>
          (void *param_1,TArray<TOptional<float>,TSizedDefaultAllocator<32>_> *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  TOptional<float> *pTVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = (longlong)param_2 - (longlong)param_1;
    do {
      ((ForAnyElementType *)param_1)->Data = (FScriptContainerElement *)0x0;
      piVar1 = (int *)((longlong)&((ForAnyElementType *)((longlong)param_1 + 8))->Data + 4);
      iVar2 = *(int *)(lVar4 + 8 + (longlong)param_1);
      pTVar3 = *(TOptional<float> **)(lVar4 + (longlong)param_1);
      *(int *)&((ForAnyElementType *)((longlong)param_1 + 8))->Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar2,0,param_1,iVar2,piVar1);
        ConstructItems<TOptional<float>,TOptional<float>,int>
                  (((ForAnyElementType *)param_1)->Data,pTVar3,iVar2);
      }
      param_1 = (void *)((longlong)param_1 + 0x10);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TFunction<void___cdecl(UObject_const_*)>,TFunction<void___cdecl(UObject_const_*)>,int> @ 14df0b130

void __cdecl
ConstructItems<TFunction<void___cdecl(UObject_const_*)>,TFunction<void___cdecl(UObject_const_*)>,int>
          (void *param_1,TFunction<void___cdecl(UObject_const_*)> *param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    puVar3 = (undefined8 *)&param_2->field_0x10;
    lVar4 = (longlong)param_1 + 0x10;
    do {
      lVar1 = puVar3[-2];
      *(longlong *)((longlong)puVar3 + (longlong)param_1 + (-0x10 - (longlong)param_2)) = lVar1;
      *(undefined8 *)(lVar4 + 0x18) = 0;
      if (lVar1 != 0) {
        puVar2 = (undefined8 *)puVar3[3];
        if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
          puVar2 = puVar3;
        }
        (**(code **)*puVar2)(puVar2,lVar4);
      }
      puVar3 = puVar3 + 6;
      lVar4 = lVar4 + 0x30;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<FChainPairFK,int> @ 14df0b1d0

void __cdecl DestructItems<FChainPairFK,int>(FChainPairFK *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FChainDecoderFK::~FChainDecoderFK(&param_1->FKDecoder);
    pFVar1 = (param_1->FKEncoder).CurrentGlobalTransforms.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FChainStretcher,int> @ 14df0b220

void __cdecl DestructItems<FChainStretcher,int>(FChainStretcher *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->AllChildrenOfChain).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FIKRigBodyMoverGoalSettings,int> @ 14df0b260

void __cdecl
DestructItems<FIKRigBodyMoverGoalSettings,int>(FIKRigBodyMoverGoalSettings *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1->_padding_ = (longlong)&___7FIKRigSettingsBase__6B_;
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FIKRigFBIKBoneSettings,int> @ 14df0b290

void __cdecl DestructItems<FIKRigFBIKBoneSettings,int>(FIKRigFBIKBoneSettings *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1->_padding_ = (longlong)&___7FIKRigSettingsBase__6B_;
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FIKRigFBIKGoalSettings,int> @ 14df0b2c0

void __cdecl DestructItems<FIKRigFBIKGoalSettings,int>(FIKRigFBIKGoalSettings *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1->_padding_ = (longlong)&___7FIKRigSettingsBase__6B_;
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FIKRigStretchLimbBoneSettings,int> @ 14df0b2f0

void __cdecl
DestructItems<FIKRigStretchLimbBoneSettings,int>(FIKRigStretchLimbBoneSettings *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1->_padding_ = (longlong)&___7FIKRigSettingsBase__6B_;
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FPoleVectorMatcher,int> @ 14df0b320

void __cdecl DestructItems<FPoleVectorMatcher,int>(FPoleVectorMatcher *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->AllChildrenWithinChain;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + 3) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FResolvedBoneChain,int> @ 14df0b360

void __cdecl DestructItems<FResolvedBoneChain,int>(FResolvedBoneChain *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Params;
    do {
      pFVar1 = (((TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar2 + 1))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(pTVar2 + -1))
               ->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(pTVar2 + -2))
               ->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(pTVar2 + -3))
               ->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 0xf;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FResolvedRetargetPose,int> @ 14df0b3e0

void __cdecl DestructItems<FResolvedRetargetPose,int>(FResolvedRetargetPose *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->LocalPose;
    do {
      pFVar1 = pTVar2[1].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRetargetOpProfile,int> @ 14df0b430

void __cdecl DestructItems<FRetargetOpProfile,int>(FRetargetOpProfile *param_1,int param_2)

{
  TStrongObjectPtr<UIKRetargetOpControllerBase,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar1;
  
  if (param_2 != 0) {
    pTVar1 = &param_1->Controller;
    do {
      if (pTVar1->Object != (UObject *)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject(pTVar1->Object);
        pTVar1->Object = (UObject *)0x0;
      }
      FInstancedStruct::Reset((FInstancedStruct *)(pTVar1 + -2));
      pTVar1 = pTVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TArray<TOptional<float>,TSizedDefaultAllocator<32>_>,int> @ 14df0b490

void __cdecl
DestructItems<TArray<TOptional<float>,TSizedDefaultAllocator<32>_>,int>
          (TArray<TOptional<float>,TSizedDefaultAllocator<32>_> *param_1,int param_2)

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

// DestructItems<TFunction<void___cdecl(UObject_const_*)>,int> @ 14df0b4d0

void __cdecl
DestructItems<TFunction<void___cdecl(UObject_const_*)>,int>
          (TFunction<void___cdecl(UObject_const_*)> *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&param_1->field_0x10;
    do {
      if (plVar2[-2] != 0) {
        plVar1 = (longlong *)plVar2[3];
        if ((longlong *)plVar2[3] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// HeapSiftDown<FChainPairFK,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FChainPairFK,`FIKRetargetFKChainsOp::Initialize'::__l2::<lambda_1>_>_>_> @ 14df0dc80

/* WARNING: Type propagation algorithm not settling */

void __cdecl
AlgoImpl::
HeapSiftDown<FChainPairFK,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FChainPairFK,_FIKRetargetFKChainsOp::Initialize_::__l2::<lambda_1>_>_>_>
          (FChainPairFK *param_1,int param_2,int param_3,FIdentityFunctor *param_4,
          TReversePredicate<TDereferenceWrapper<FChainPairFK,_public:_virtual_bool___cdecl_FIKRetargetFKChainsOp::Initialize(FIKRetargetProcessor_const_&,FRetargetSkeleton_const_&,FTargetSkeleton_const_&,FIKRetargetOpBase_const_*,FIKRigLogger_&)_::_2_::<lambda_1>_>_>
          *param_5)

{
  FResolvedBoneChain *pFVar1;
  FResolvedBoneChain *pFVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FChainPairFK *pFVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  FChainPairFK *pFVar16;
  int iVar17;
  FChainPairFK *pFVar18;
  undefined8 local_108 [32];
  
  while( true ) {
    if (param_3 <= param_2 * 2 + 1) {
      return;
    }
    iVar10 = param_2 * 2;
    iVar17 = iVar10 + 1;
    if (iVar10 + 2 < param_3) {
      pFVar1 = param_1[(longlong)iVar10 + 2].TargetBoneChain;
      if ((pFVar1->BoneIndices).ArrayNum < 1) {
        iVar14 = -1;
      }
      else {
        iVar14 = *(int *)(pFVar1->BoneIndices).AllocatorInstance.Data;
      }
      pFVar2 = param_1[(longlong)iVar10 + 1].TargetBoneChain;
      if ((pFVar2->BoneIndices).ArrayNum < 1) {
        iVar13 = -1;
      }
      else {
        iVar13 = *(int *)(pFVar2->BoneIndices).AllocatorInstance.Data;
      }
      if (iVar14 == iVar13) {
        uVar9 = ::FName::Compare(&pFVar1->ChainName,&pFVar2->ChainName);
        uVar9 = uVar9 >> 0x1f;
      }
      else {
        uVar9 = (uint)(iVar14 < iVar13);
      }
      if (uVar9 != 0) {
        iVar17 = iVar10;
      }
      iVar17 = iVar17 + 1;
    }
    pFVar18 = param_1 + param_2;
    pFVar16 = param_1 + iVar17;
    pFVar1 = pFVar18->TargetBoneChain;
    if ((pFVar1->BoneIndices).ArrayNum < 1) {
      iVar10 = -1;
    }
    else {
      iVar10 = *(int *)(pFVar1->BoneIndices).AllocatorInstance.Data;
    }
    pFVar2 = pFVar16->TargetBoneChain;
    if ((pFVar2->BoneIndices).ArrayNum < 1) {
      iVar14 = -1;
    }
    else {
      iVar14 = *(int *)(pFVar2->BoneIndices).AllocatorInstance.Data;
    }
    if (iVar10 == iVar14) {
      iVar10 = ::FName::Compare(&pFVar1->ChainName,&pFVar2->ChainName);
      bVar8 = SUB41((uint)iVar10 >> 0x1f,0);
    }
    else {
      bVar8 = iVar10 < iVar14;
    }
    if (bVar8 == false) break;
    lVar15 = 2;
    pFVar11 = pFVar18;
    puVar12 = local_108;
    do {
      uVar3 = *(undefined8 *)&(pFVar11->FKEncoder).CurrentGlobalTransforms.ArrayNum;
      dVar4 = (pFVar11->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[0];
      dVar5 = (pFVar11->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[1];
      *puVar12 = (pFVar11->FKEncoder).CurrentGlobalTransforms.AllocatorInstance.Data;
      puVar12[1] = uVar3;
      dVar6 = (pFVar11->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[0];
      dVar7 = (pFVar11->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[1];
      puVar12[2] = dVar4;
      puVar12[3] = dVar5;
      dVar4 = (pFVar11->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[0];
      dVar5 = (pFVar11->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[1];
      puVar12[4] = dVar6;
      puVar12[5] = dVar7;
      dVar6 = (pFVar11->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64[0];
      dVar7 = (pFVar11->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64[1];
      puVar12[6] = dVar4;
      puVar12[7] = dVar5;
      dVar4 = (pFVar11->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[0];
      dVar5 = (pFVar11->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[1];
      puVar12[8] = dVar6;
      puVar12[9] = dVar7;
      dVar6 = (pFVar11->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[0];
      dVar7 = (pFVar11->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[1];
      puVar12[10] = dVar4;
      puVar12[0xb] = dVar5;
      pFVar1 = (pFVar11->FKEncoder).BoneChain;
      uVar3 = *(undefined8 *)&(pFVar11->FKEncoder).field_0x78;
      puVar12[0xc] = dVar6;
      puVar12[0xd] = dVar7;
      puVar12[0xe] = pFVar1;
      puVar12[0xf] = uVar3;
      lVar15 = lVar15 + -1;
      pFVar11 = (FChainPairFK *)&pFVar11->FKDecoder;
      puVar12 = puVar12 + 0x10;
    } while (lVar15 != 0);
    lVar15 = 2;
    pFVar11 = pFVar16;
    do {
      iVar10 = (pFVar11->FKEncoder).CurrentGlobalTransforms.ArrayNum;
      iVar14 = (pFVar11->FKEncoder).CurrentGlobalTransforms.ArrayMax;
      (pFVar18->FKEncoder).CurrentGlobalTransforms.AllocatorInstance.Data =
           (pFVar11->FKEncoder).CurrentGlobalTransforms.AllocatorInstance.Data;
      (pFVar18->FKEncoder).CurrentGlobalTransforms.ArrayNum = iVar10;
      (pFVar18->FKEncoder).CurrentGlobalTransforms.ArrayMax = iVar14;
      dVar4 = (pFVar11->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[1];
      (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[0] =
           (pFVar11->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[0];
      (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[1] = dVar4;
      dVar4 = (pFVar11->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[1];
      (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[0] =
           (pFVar11->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[0];
      (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[1] = dVar4;
      dVar4 = (pFVar11->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[1];
      (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[0] =
           (pFVar11->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[0];
      (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[1] = dVar4;
      dVar4 = (pFVar11->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64[1];
      (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64[0] =
           (pFVar11->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64[0];
      (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64[1] = dVar4;
      dVar4 = (pFVar11->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[1];
      (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[0] =
           (pFVar11->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[0];
      (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[1] = dVar4;
      dVar4 = (pFVar11->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[1];
      (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[0] =
           (pFVar11->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[0];
      (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[1] = dVar4;
      uVar3 = *(undefined8 *)&(pFVar11->FKEncoder).field_0x78;
      (pFVar18->FKEncoder).BoneChain = (pFVar11->FKEncoder).BoneChain;
      *(undefined8 *)&(pFVar18->FKEncoder).field_0x78 = uVar3;
      lVar15 = lVar15 + -1;
      pFVar11 = (FChainPairFK *)&pFVar11->FKDecoder;
      pFVar18 = (FChainPairFK *)&pFVar18->FKDecoder;
    } while (lVar15 != 0);
    lVar15 = 2;
    puVar12 = local_108;
    do {
      uVar3 = puVar12[1];
      dVar4 = (double)puVar12[2];
      dVar5 = (double)puVar12[3];
      (pFVar16->FKEncoder).CurrentGlobalTransforms.AllocatorInstance.Data =
           (FScriptContainerElement *)*puVar12;
      (pFVar16->FKEncoder).CurrentGlobalTransforms.ArrayNum = (int)uVar3;
      (pFVar16->FKEncoder).CurrentGlobalTransforms.ArrayMax = (int)((ulonglong)uVar3 >> 0x20);
      dVar6 = (double)puVar12[4];
      dVar7 = (double)puVar12[5];
      (pFVar16->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[0] = dVar4;
      (pFVar16->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[1] = dVar5;
      dVar4 = (double)puVar12[6];
      dVar5 = (double)puVar12[7];
      (pFVar16->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[0] = dVar6;
      (pFVar16->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[1] = dVar7;
      dVar6 = (double)puVar12[8];
      dVar7 = (double)puVar12[9];
      (pFVar16->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[0] = dVar4;
      (pFVar16->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[1] = dVar5;
      dVar4 = (double)puVar12[10];
      dVar5 = (double)puVar12[0xb];
      (pFVar16->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64[0] = dVar6;
      (pFVar16->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64[1] = dVar7;
      dVar6 = (double)puVar12[0xc];
      dVar7 = (double)puVar12[0xd];
      (pFVar16->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[0] = dVar4;
      (pFVar16->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[1] = dVar5;
      pFVar1 = (FResolvedBoneChain *)puVar12[0xe];
      uVar3 = puVar12[0xf];
      (pFVar16->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[0] = dVar6;
      (pFVar16->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[1] = dVar7;
      (pFVar16->FKEncoder).BoneChain = pFVar1;
      *(undefined8 *)&(pFVar16->FKEncoder).field_0x78 = uVar3;
      lVar15 = lVar15 + -1;
      puVar12 = puVar12 + 0x10;
      pFVar16 = (FChainPairFK *)&pFVar16->FKDecoder;
      param_2 = iVar17;
    } while (lVar15 != 0);
  }
  return;
}

// HeapSiftDown<FResolvedBoneChain,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FResolvedBoneChain,`FRetargeterBoneChains::Initialize'::__l2::<lambda_2>_>_>_> @ 14df0df00

void __cdecl
AlgoImpl::
HeapSiftDown<FResolvedBoneChain,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FResolvedBoneChain,_FRetargeterBoneChains::Initialize_::__l2::<lambda_2>_>_>_>
          (FResolvedBoneChain *param_1,int param_2,int param_3,FIdentityFunctor *param_4,
          TReversePredicate<TDereferenceWrapper<FResolvedBoneChain,_public:_bool___cdecl_FRetargeterBoneChains::Initialize(UIKRetargeter_const_*,TArray<UIKRigDefinition_const_*,TSizedDefaultAllocator<32>_>_const_&,FRetargetSkeleton_const_&,FRetargetSkeleton_const_&,FIKRigLogger_&)_::_2_::<lambda_2>_>_>
          *param_5)

{
  FName FVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined8 uVar23;
  FName FVar24;
  undefined8 uVar25;
  double dVar26;
  bool bVar27;
  undefined5 uVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  float fVar38;
  int iVar39;
  bool bVar40;
  bool bVar41;
  bool bVar42;
  undefined5 uVar43;
  bool bVar44;
  uint uVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  FResolvedBoneChain *pFVar50;
  FResolvedBoneChain *pFVar51;
  
  while( true ) {
    if (param_3 <= param_2 * 2 + 1) {
      return;
    }
    iVar46 = param_2 * 2;
    iVar49 = iVar46 + 1;
    if (iVar46 + 2 < param_3) {
      pFVar51 = param_1 + (longlong)iVar46 + 2;
      pFVar50 = param_1 + (longlong)iVar46 + 1;
      if ((pFVar51->BoneIndices).ArrayNum < 1) {
        iVar48 = -1;
      }
      else {
        iVar48 = *(int *)(pFVar51->BoneIndices).AllocatorInstance.Data;
      }
      if ((pFVar50->BoneIndices).ArrayNum < 1) {
        iVar47 = -1;
      }
      else {
        iVar47 = *(int *)(pFVar50->BoneIndices).AllocatorInstance.Data;
      }
      if (iVar48 == iVar47) {
        uVar45 = ::FName::Compare(&pFVar51->ChainName,&pFVar50->ChainName);
        uVar45 = uVar45 >> 0x1f;
      }
      else {
        uVar45 = (uint)(iVar48 < iVar47);
      }
      if (uVar45 != 0) {
        iVar49 = iVar46;
      }
      iVar49 = iVar49 + 1;
    }
    pFVar50 = param_1 + param_2;
    pFVar51 = param_1 + iVar49;
    if ((pFVar50->BoneIndices).ArrayNum < 1) {
      iVar46 = -1;
    }
    else {
      iVar46 = *(int *)(pFVar50->BoneIndices).AllocatorInstance.Data;
    }
    if ((pFVar51->BoneIndices).ArrayNum < 1) {
      iVar48 = -1;
    }
    else {
      iVar48 = *(int *)(pFVar51->BoneIndices).AllocatorInstance.Data;
    }
    if (iVar46 == iVar48) {
      iVar46 = ::FName::Compare(&pFVar50->ChainName,&pFVar51->ChainName);
      bVar44 = SUB41((uint)iVar46 >> 0x1f,0);
    }
    else {
      bVar44 = iVar46 < iVar48;
    }
    if (bVar44 == false) break;
    FVar1 = pFVar50->ChainName;
    FVar2 = pFVar50->StartBone;
    FVar3 = pFVar50->EndBone;
    FVar4 = pFVar50->IKGoalName;
    pFVar5 = (pFVar50->RefPoseGlobalTransforms).AllocatorInstance.Data;
    iVar47 = (pFVar50->RefPoseGlobalTransforms).ArrayNum;
    iVar29 = (pFVar50->RefPoseGlobalTransforms).ArrayMax;
    pFVar6 = (pFVar50->RefPoseLocalTransforms).AllocatorInstance.Data;
    iVar30 = (pFVar50->RefPoseLocalTransforms).ArrayNum;
    iVar31 = (pFVar50->RefPoseLocalTransforms).ArrayMax;
    pFVar7 = (pFVar50->CurrentLocalTransforms).AllocatorInstance.Data;
    iVar32 = (pFVar50->CurrentLocalTransforms).ArrayNum;
    iVar33 = (pFVar50->CurrentLocalTransforms).ArrayMax;
    pFVar8 = (pFVar50->Params).AllocatorInstance.Data;
    iVar34 = (pFVar50->Params).ArrayNum;
    iVar35 = (pFVar50->Params).ArrayMax;
    pFVar9 = (pFVar50->BoneIndices).AllocatorInstance.Data;
    iVar36 = (pFVar50->BoneIndices).ArrayNum;
    iVar37 = (pFVar50->BoneIndices).ArrayMax;
    fVar38 = pFVar50->InitialChainLength;
    iVar39 = pFVar50->ChainParentBoneIndex;
    uVar10 = *(undefined8 *)&pFVar50->field_0x78;
    dVar11 = (pFVar50->ChainParentInitialGlobalTransform).Rotation.XY.m128d_f64[0];
    dVar12 = (pFVar50->ChainParentInitialGlobalTransform).Rotation.XY.m128d_f64[1];
    dVar13 = (pFVar50->ChainParentInitialGlobalTransform).Rotation.ZW.m128d_f64[0];
    dVar14 = (pFVar50->ChainParentInitialGlobalTransform).Rotation.ZW.m128d_f64[1];
    dVar15 = (pFVar50->ChainParentInitialGlobalTransform).Translation.XY.m128d_f64[0];
    dVar16 = (pFVar50->ChainParentInitialGlobalTransform).Translation.XY.m128d_f64[1];
    dVar17 = (pFVar50->ChainParentInitialGlobalTransform).Translation.ZW.m128d_f64[0];
    dVar18 = (pFVar50->ChainParentInitialGlobalTransform).Translation.ZW.m128d_f64[1];
    dVar19 = (pFVar50->ChainParentInitialGlobalTransform).Scale3D.XY.m128d_f64[0];
    dVar20 = (pFVar50->ChainParentInitialGlobalTransform).Scale3D.XY.m128d_f64[1];
    dVar21 = (pFVar50->ChainParentInitialGlobalTransform).Scale3D.ZW.m128d_f64[0];
    dVar22 = (pFVar50->ChainParentInitialGlobalTransform).Scale3D.ZW.m128d_f64[1];
    bVar40 = pFVar50->bFoundStartBone;
    bVar41 = pFVar50->bFoundEndBone;
    bVar42 = pFVar50->bEndIsStartOrChildOfStart;
    uVar43 = *(undefined5 *)&pFVar50->field_0xe3;
    uVar23 = *(undefined8 *)&pFVar50->field_0xe8;
    FVar24 = pFVar51->StartBone;
    pFVar50->ChainName = pFVar51->ChainName;
    pFVar50->StartBone = FVar24;
    FVar24 = pFVar51->IKGoalName;
    pFVar50->EndBone = pFVar51->EndBone;
    pFVar50->IKGoalName = FVar24;
    iVar46 = (pFVar51->RefPoseGlobalTransforms).ArrayNum;
    iVar48 = (pFVar51->RefPoseGlobalTransforms).ArrayMax;
    (pFVar50->RefPoseGlobalTransforms).AllocatorInstance.Data =
         (pFVar51->RefPoseGlobalTransforms).AllocatorInstance.Data;
    (pFVar50->RefPoseGlobalTransforms).ArrayNum = iVar46;
    (pFVar50->RefPoseGlobalTransforms).ArrayMax = iVar48;
    iVar46 = (pFVar51->RefPoseLocalTransforms).ArrayNum;
    iVar48 = (pFVar51->RefPoseLocalTransforms).ArrayMax;
    (pFVar50->RefPoseLocalTransforms).AllocatorInstance.Data =
         (pFVar51->RefPoseLocalTransforms).AllocatorInstance.Data;
    (pFVar50->RefPoseLocalTransforms).ArrayNum = iVar46;
    (pFVar50->RefPoseLocalTransforms).ArrayMax = iVar48;
    iVar46 = (pFVar51->CurrentLocalTransforms).ArrayNum;
    iVar48 = (pFVar51->CurrentLocalTransforms).ArrayMax;
    (pFVar50->CurrentLocalTransforms).AllocatorInstance.Data =
         (pFVar51->CurrentLocalTransforms).AllocatorInstance.Data;
    (pFVar50->CurrentLocalTransforms).ArrayNum = iVar46;
    (pFVar50->CurrentLocalTransforms).ArrayMax = iVar48;
    iVar46 = (pFVar51->Params).ArrayNum;
    iVar48 = (pFVar51->Params).ArrayMax;
    (pFVar50->Params).AllocatorInstance.Data = (pFVar51->Params).AllocatorInstance.Data;
    (pFVar50->Params).ArrayNum = iVar46;
    (pFVar50->Params).ArrayMax = iVar48;
    iVar46 = (pFVar51->BoneIndices).ArrayNum;
    iVar48 = (pFVar51->BoneIndices).ArrayMax;
    (pFVar50->BoneIndices).AllocatorInstance.Data = (pFVar51->BoneIndices).AllocatorInstance.Data;
    (pFVar50->BoneIndices).ArrayNum = iVar46;
    (pFVar50->BoneIndices).ArrayMax = iVar48;
    iVar46 = pFVar51->ChainParentBoneIndex;
    uVar25 = *(undefined8 *)&pFVar51->field_0x78;
    pFVar50->InitialChainLength = pFVar51->InitialChainLength;
    pFVar50->ChainParentBoneIndex = iVar46;
    *(undefined8 *)&pFVar50->field_0x78 = uVar25;
    dVar26 = (pFVar51->ChainParentInitialGlobalTransform).Rotation.XY.m128d_f64[1];
    (pFVar50->ChainParentInitialGlobalTransform).Rotation.XY.m128d_f64[0] =
         (pFVar51->ChainParentInitialGlobalTransform).Rotation.XY.m128d_f64[0];
    (pFVar50->ChainParentInitialGlobalTransform).Rotation.XY.m128d_f64[1] = dVar26;
    dVar26 = (pFVar51->ChainParentInitialGlobalTransform).Rotation.ZW.m128d_f64[1];
    (pFVar50->ChainParentInitialGlobalTransform).Rotation.ZW.m128d_f64[0] =
         (pFVar51->ChainParentInitialGlobalTransform).Rotation.ZW.m128d_f64[0];
    (pFVar50->ChainParentInitialGlobalTransform).Rotation.ZW.m128d_f64[1] = dVar26;
    dVar26 = (pFVar51->ChainParentInitialGlobalTransform).Translation.XY.m128d_f64[1];
    (pFVar50->ChainParentInitialGlobalTransform).Translation.XY.m128d_f64[0] =
         (pFVar51->ChainParentInitialGlobalTransform).Translation.XY.m128d_f64[0];
    (pFVar50->ChainParentInitialGlobalTransform).Translation.XY.m128d_f64[1] = dVar26;
    dVar26 = (pFVar51->ChainParentInitialGlobalTransform).Translation.ZW.m128d_f64[1];
    (pFVar50->ChainParentInitialGlobalTransform).Translation.ZW.m128d_f64[0] =
         (pFVar51->ChainParentInitialGlobalTransform).Translation.ZW.m128d_f64[0];
    (pFVar50->ChainParentInitialGlobalTransform).Translation.ZW.m128d_f64[1] = dVar26;
    dVar26 = (pFVar51->ChainParentInitialGlobalTransform).Scale3D.XY.m128d_f64[1];
    (pFVar50->ChainParentInitialGlobalTransform).Scale3D.XY.m128d_f64[0] =
         (pFVar51->ChainParentInitialGlobalTransform).Scale3D.XY.m128d_f64[0];
    (pFVar50->ChainParentInitialGlobalTransform).Scale3D.XY.m128d_f64[1] = dVar26;
    dVar26 = (pFVar51->ChainParentInitialGlobalTransform).Scale3D.ZW.m128d_f64[1];
    (pFVar50->ChainParentInitialGlobalTransform).Scale3D.ZW.m128d_f64[0] =
         (pFVar51->ChainParentInitialGlobalTransform).Scale3D.ZW.m128d_f64[0];
    (pFVar50->ChainParentInitialGlobalTransform).Scale3D.ZW.m128d_f64[1] = dVar26;
    bVar44 = pFVar51->bFoundEndBone;
    bVar27 = pFVar51->bEndIsStartOrChildOfStart;
    uVar28 = *(undefined5 *)&pFVar51->field_0xe3;
    uVar25 = *(undefined8 *)&pFVar51->field_0xe8;
    pFVar50->bFoundStartBone = pFVar51->bFoundStartBone;
    pFVar50->bFoundEndBone = bVar44;
    pFVar50->bEndIsStartOrChildOfStart = bVar27;
    *(undefined5 *)&pFVar50->field_0xe3 = uVar28;
    *(undefined8 *)&pFVar50->field_0xe8 = uVar25;
    pFVar51->ChainName = FVar1;
    pFVar51->StartBone = FVar2;
    pFVar51->EndBone = FVar3;
    pFVar51->IKGoalName = FVar4;
    (pFVar51->RefPoseGlobalTransforms).AllocatorInstance.Data = pFVar5;
    (pFVar51->RefPoseGlobalTransforms).ArrayNum = iVar47;
    (pFVar51->RefPoseGlobalTransforms).ArrayMax = iVar29;
    (pFVar51->RefPoseLocalTransforms).AllocatorInstance.Data = pFVar6;
    (pFVar51->RefPoseLocalTransforms).ArrayNum = iVar30;
    (pFVar51->RefPoseLocalTransforms).ArrayMax = iVar31;
    (pFVar51->CurrentLocalTransforms).AllocatorInstance.Data = pFVar7;
    (pFVar51->CurrentLocalTransforms).ArrayNum = iVar32;
    (pFVar51->CurrentLocalTransforms).ArrayMax = iVar33;
    (pFVar51->Params).AllocatorInstance.Data = pFVar8;
    (pFVar51->Params).ArrayNum = iVar34;
    (pFVar51->Params).ArrayMax = iVar35;
    (pFVar51->BoneIndices).AllocatorInstance.Data = pFVar9;
    (pFVar51->BoneIndices).ArrayNum = iVar36;
    (pFVar51->BoneIndices).ArrayMax = iVar37;
    pFVar51->InitialChainLength = fVar38;
    pFVar51->ChainParentBoneIndex = iVar39;
    *(undefined8 *)&pFVar51->field_0x78 = uVar10;
    (pFVar51->ChainParentInitialGlobalTransform).Rotation.XY.m128d_f64[0] = dVar11;
    (pFVar51->ChainParentInitialGlobalTransform).Rotation.XY.m128d_f64[1] = dVar12;
    (pFVar51->ChainParentInitialGlobalTransform).Rotation.ZW.m128d_f64[0] = dVar13;
    (pFVar51->ChainParentInitialGlobalTransform).Rotation.ZW.m128d_f64[1] = dVar14;
    (pFVar51->ChainParentInitialGlobalTransform).Translation.XY.m128d_f64[0] = dVar15;
    (pFVar51->ChainParentInitialGlobalTransform).Translation.XY.m128d_f64[1] = dVar16;
    (pFVar51->ChainParentInitialGlobalTransform).Translation.ZW.m128d_f64[0] = dVar17;
    (pFVar51->ChainParentInitialGlobalTransform).Translation.ZW.m128d_f64[1] = dVar18;
    (pFVar51->ChainParentInitialGlobalTransform).Scale3D.XY.m128d_f64[0] = dVar19;
    (pFVar51->ChainParentInitialGlobalTransform).Scale3D.XY.m128d_f64[1] = dVar20;
    (pFVar51->ChainParentInitialGlobalTransform).Scale3D.ZW.m128d_f64[0] = dVar21;
    (pFVar51->ChainParentInitialGlobalTransform).Scale3D.ZW.m128d_f64[1] = dVar22;
    pFVar51->bFoundStartBone = bVar40;
    pFVar51->bFoundEndBone = bVar41;
    pFVar51->bEndIsStartOrChildOfStart = bVar42;
    *(undefined5 *)&pFVar51->field_0xe3 = uVar43;
    *(undefined8 *)&pFVar51->field_0xe8 = uVar23;
    param_2 = iVar49;
  }
  return;
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,16>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TQuat<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,UE::Math::TQuat<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TQuat<double>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,UE::Math::TQuat<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TQuat<double>,0>_>::FKeyComparisonClass<`FIKRetargetPose::SortHierarchically'::__l2::<lambda_1>_>_>_>_> @ 14df0e1e0

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,16>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TQuat<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,UE::Math::TQuat<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TQuat<double>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,UE::Math::TQuat<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TQuat<double>,0>_>::FKeyComparisonClass<_FIKRetargetPose::SortHierarchically_::__l2::<lambda_1>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<64,16>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<FName,UE::Math::TQuat<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TQuat<double>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,UE::Math::TQuat<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TQuat<double>,0>_>::FKeyComparisonClass<_public:_void___cdecl_FIKRetargetPose::SortHierarchically(FIKRigSkeleton_const_&)_::_2_::<lambda_1>_>_>_>
          param_4)

{
  FIKRigSkeleton *pFVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  FName FVar5;
  FName FVar6;
  FName FVar7;
  FName FVar8;
  FName FVar9;
  code *pcVar10;
  FNameEntryId FVar11;
  uint uVar12;
  undefined8 uVar13;
  FNameEntryId FVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<64,16>_>_s_1 TVar23;
  FNameEntryId FVar24;
  uint uVar25;
  FNameEntryId FVar26;
  uint uVar27;
  bool bVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<64,16>_> *pTVar35;
  longlong lVar36;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<64,16>_> *pTVar37;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<64,16>_> *pTVar38;
  int iVar39;
  int local_38;
  
  if (param_2 < 0) {
    bVar28 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar28) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    bVar28 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar28) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar29 = (param_2 + -2) / 2;
  iVar32 = iVar29 * 2 + 1;
  iVar34 = iVar32;
  iVar33 = iVar29;
  do {
    while (param_2 <= iVar32) {
LAB_14df0e3a6:
      if (iVar33 == 0) {
        iVar32 = param_2 + -1;
        lVar36 = (longlong)iVar32;
        if (0 < iVar32) {
          pTVar35 = param_1 + lVar36;
          do {
            uVar13 = *(undefined8 *)((longlong)(pTVar35->ElementData).Pad + 8);
            TVar23 = param_1->_s_1;
            uVar16 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            uVar17 = *(undefined8 *)((param_1->ElementData).Pad + 0x10);
            uVar18 = *(undefined8 *)((param_1->ElementData).Pad + 0x18);
            uVar19 = *(undefined8 *)((param_1->ElementData).Pad + 0x20);
            uVar20 = *(undefined8 *)((param_1->ElementData).Pad + 0x28);
            uVar21 = *(undefined8 *)((param_1->ElementData).Pad + 0x30);
            uVar22 = *(undefined8 *)((param_1->ElementData).Pad + 0x38);
            param_1->_s_1 = pTVar35->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar13;
            uVar13 = *(undefined8 *)((longlong)(pTVar35->ElementData).Pad + 0x18);
            *(undefined8 *)((param_1->ElementData).Pad + 0x10) =
                 *(undefined8 *)((longlong)(pTVar35->ElementData).Pad + 0x10);
            *(undefined8 *)((param_1->ElementData).Pad + 0x18) = uVar13;
            uVar13 = *(undefined8 *)((longlong)(pTVar35->ElementData).Pad + 0x28);
            *(undefined8 *)((param_1->ElementData).Pad + 0x20) =
                 *(undefined8 *)((longlong)(pTVar35->ElementData).Pad + 0x20);
            *(undefined8 *)((param_1->ElementData).Pad + 0x28) = uVar13;
            uVar13 = *(undefined8 *)((longlong)(pTVar35->ElementData).Pad + 0x38);
            *(undefined8 *)((param_1->ElementData).Pad + 0x30) =
                 *(undefined8 *)((longlong)(pTVar35->ElementData).Pad + 0x30);
            *(undefined8 *)((param_1->ElementData).Pad + 0x38) = uVar13;
            pTVar35->_s_1 = TVar23;
            *(undefined8 *)((longlong)(pTVar35->ElementData).Pad + 8) = uVar16;
            *(undefined8 *)((longlong)(pTVar35->ElementData).Pad + 0x10) = uVar17;
            *(undefined8 *)((longlong)(pTVar35->ElementData).Pad + 0x18) = uVar18;
            *(undefined8 *)((longlong)(pTVar35->ElementData).Pad + 0x20) = uVar19;
            *(undefined8 *)((longlong)(pTVar35->ElementData).Pad + 0x28) = uVar20;
            *(undefined8 *)((longlong)(pTVar35->ElementData).Pad + 0x30) = uVar21;
            *(undefined8 *)((longlong)(pTVar35->ElementData).Pad + 0x38) = uVar22;
            local_38 = 0;
            if (1 < iVar32) {
              do {
                iVar34 = local_38 * 2;
                iVar29 = iVar34 + 1;
                if (iVar34 + 2 < iVar32) {
                  pFVar1 = &(((((param_4.Predicate)->Predicate).Predicate)->Predicate).Predicate)->
                            Skeleton;
                  FVar6.ComparisonIndex.Value = *(int *)(param_1 + (longlong)iVar34 + 2);
                  FVar6.Number = *(int *)((longlong)(param_1 + (longlong)iVar34 + 2) + 4);
                  FVar7.ComparisonIndex.Value = *(int *)(param_1 + iVar29);
                  FVar7.Number = *(int *)((longlong)(param_1 + iVar29) + 4);
                  iVar33 = FIKRigSkeleton::GetBoneIndexFromName(pFVar1,FVar6);
                  iVar39 = FIKRigSkeleton::GetBoneIndexFromName(pFVar1,FVar7);
                  if (iVar39 < iVar33) {
                    iVar29 = iVar34;
                  }
                  iVar29 = iVar29 + 1;
                }
                pFVar1 = &(((((param_4.Predicate)->Predicate).Predicate)->Predicate).Predicate)->
                          Skeleton;
                pTVar38 = param_1 + local_38;
                pTVar37 = param_1 + iVar29;
                FVar8.ComparisonIndex.Value = *(int *)pTVar38;
                FVar8.Number = *(int *)((longlong)pTVar38 + 4);
                FVar9.ComparisonIndex.Value = *(int *)pTVar37;
                FVar9.Number = *(int *)((longlong)pTVar37 + 4);
                iVar34 = FIKRigSkeleton::GetBoneIndexFromName(pFVar1,FVar8);
                iVar33 = FIKRigSkeleton::GetBoneIndexFromName(pFVar1,FVar9);
                if (iVar34 <= iVar33) break;
                FVar24.Value = *(int *)pTVar37;
                uVar25 = *(int *)((longlong)pTVar37 + 4);
                uVar13 = *(undefined8 *)((FNameEntryId *)(pTVar37->ElementData).Pad + 2);
                FVar26.Value = *(int *)pTVar38;
                uVar27 = *(int *)((longlong)pTVar38 + 4);
                uVar16 = *(undefined8 *)((FNameEntryId *)(pTVar38->ElementData).Pad + 2);
                uVar17 = *(undefined8 *)((FNameEntryId *)(pTVar38->ElementData).Pad + 4);
                uVar18 = *(undefined8 *)((FNameEntryId *)(pTVar38->ElementData).Pad + 6);
                uVar19 = *(undefined8 *)((FNameEntryId *)(pTVar38->ElementData).Pad + 8);
                uVar20 = *(undefined8 *)((FNameEntryId *)(pTVar38->ElementData).Pad + 10);
                uVar21 = *(undefined8 *)((FNameEntryId *)(pTVar38->ElementData).Pad + 0xc);
                uVar22 = *(undefined8 *)((FNameEntryId *)(pTVar38->ElementData).Pad + 0xe);
                *(int *)pTVar38 = FVar24.Value;
                *(uint *)((longlong)pTVar38 + 4) = uVar25;
                *(undefined8 *)((FNameEntryId *)(pTVar38->ElementData).Pad + 2) = uVar13;
                uVar13 = *(undefined8 *)((FNameEntryId *)(pTVar37->ElementData).Pad + 6);
                *(undefined8 *)((FNameEntryId *)(pTVar38->ElementData).Pad + 4) =
                     *(undefined8 *)((FNameEntryId *)(pTVar37->ElementData).Pad + 4);
                *(undefined8 *)((FNameEntryId *)(pTVar38->ElementData).Pad + 6) = uVar13;
                uVar13 = *(undefined8 *)((FNameEntryId *)(pTVar37->ElementData).Pad + 10);
                *(undefined8 *)((FNameEntryId *)(pTVar38->ElementData).Pad + 8) =
                     *(undefined8 *)((FNameEntryId *)(pTVar37->ElementData).Pad + 8);
                *(undefined8 *)((FNameEntryId *)(pTVar38->ElementData).Pad + 10) = uVar13;
                uVar13 = *(undefined8 *)((FNameEntryId *)(pTVar37->ElementData).Pad + 0xe);
                *(undefined8 *)((FNameEntryId *)(pTVar38->ElementData).Pad + 0xc) =
                     *(undefined8 *)((FNameEntryId *)(pTVar37->ElementData).Pad + 0xc);
                *(undefined8 *)((FNameEntryId *)(pTVar38->ElementData).Pad + 0xe) = uVar13;
                *(int *)pTVar37 = FVar26.Value;
                *(uint *)((longlong)pTVar37 + 4) = uVar27;
                *(undefined8 *)((FNameEntryId *)(pTVar37->ElementData).Pad + 2) = uVar16;
                *(undefined8 *)((FNameEntryId *)(pTVar37->ElementData).Pad + 4) = uVar17;
                *(undefined8 *)((FNameEntryId *)(pTVar37->ElementData).Pad + 6) = uVar18;
                *(undefined8 *)((FNameEntryId *)(pTVar37->ElementData).Pad + 8) = uVar19;
                *(undefined8 *)((FNameEntryId *)(pTVar37->ElementData).Pad + 10) = uVar20;
                *(undefined8 *)((FNameEntryId *)(pTVar37->ElementData).Pad + 0xc) = uVar21;
                *(undefined8 *)((FNameEntryId *)(pTVar37->ElementData).Pad + 0xe) = uVar22;
                local_38 = iVar29;
              } while (iVar29 * 2 + 1 < iVar32);
            }
            iVar32 = iVar32 + -1;
            pTVar35 = pTVar35 + -1;
            lVar36 = lVar36 + -1;
          } while (0 < lVar36);
        }
        return;
      }
      iVar29 = iVar33 + -1;
      iVar32 = iVar34 + -2;
      iVar34 = iVar32;
      iVar33 = iVar29;
    }
    iVar32 = iVar29 * 2;
    iVar39 = iVar32 + 1;
    if (iVar32 + 2 < param_2) {
      pFVar1 = &(((((param_4.Predicate)->Predicate).Predicate)->Predicate).Predicate)->Skeleton;
      FVar2.ComparisonIndex.Value = *(int *)(param_1 + (longlong)iVar32 + 2);
      FVar2.Number = *(int *)((longlong)(param_1 + (longlong)iVar32 + 2) + 4);
      FVar3.ComparisonIndex.Value = *(int *)(param_1 + iVar39);
      FVar3.Number = *(int *)((longlong)(param_1 + iVar39) + 4);
      iVar30 = FIKRigSkeleton::GetBoneIndexFromName(pFVar1,FVar2);
      iVar31 = FIKRigSkeleton::GetBoneIndexFromName(pFVar1,FVar3);
      if (iVar31 < iVar30) {
        iVar39 = iVar32;
      }
      iVar39 = iVar39 + 1;
    }
    pFVar1 = &(((((param_4.Predicate)->Predicate).Predicate)->Predicate).Predicate)->Skeleton;
    pTVar37 = param_1 + iVar29;
    pTVar35 = param_1 + iVar39;
    FVar4.ComparisonIndex.Value = *(int *)pTVar37;
    FVar4.Number = *(int *)((longlong)pTVar37 + 4);
    FVar5.ComparisonIndex.Value = *(int *)pTVar35;
    FVar5.Number = *(int *)((longlong)pTVar35 + 4);
    iVar32 = FIKRigSkeleton::GetBoneIndexFromName(pFVar1,FVar4);
    iVar29 = FIKRigSkeleton::GetBoneIndexFromName(pFVar1,FVar5);
    if (iVar32 <= iVar29) goto LAB_14df0e3a6;
    FVar11.Value = *(int *)pTVar35;
    uVar12 = *(int *)((longlong)pTVar35 + 4);
    uVar13 = *(undefined8 *)((FNameEntryId *)(pTVar35->ElementData).Pad + 2);
    iVar32 = iVar39 * 2 + 1;
    FVar14.Value = *(int *)pTVar37;
    uVar15 = *(int *)((longlong)pTVar37 + 4);
    uVar16 = *(undefined8 *)((FNameEntryId *)(pTVar37->ElementData).Pad + 2);
    uVar17 = *(undefined8 *)((FNameEntryId *)(pTVar37->ElementData).Pad + 4);
    uVar18 = *(undefined8 *)((FNameEntryId *)(pTVar37->ElementData).Pad + 6);
    uVar19 = *(undefined8 *)((FNameEntryId *)(pTVar37->ElementData).Pad + 8);
    uVar20 = *(undefined8 *)((FNameEntryId *)(pTVar37->ElementData).Pad + 10);
    uVar21 = *(undefined8 *)((FNameEntryId *)(pTVar37->ElementData).Pad + 0xc);
    uVar22 = *(undefined8 *)((FNameEntryId *)(pTVar37->ElementData).Pad + 0xe);
    *(int *)pTVar37 = FVar11.Value;
    *(uint *)((longlong)pTVar37 + 4) = uVar12;
    *(undefined8 *)((FNameEntryId *)(pTVar37->ElementData).Pad + 2) = uVar13;
    uVar13 = *(undefined8 *)((FNameEntryId *)(pTVar35->ElementData).Pad + 6);
    *(undefined8 *)((FNameEntryId *)(pTVar37->ElementData).Pad + 4) =
         *(undefined8 *)((FNameEntryId *)(pTVar35->ElementData).Pad + 4);
    *(undefined8 *)((FNameEntryId *)(pTVar37->ElementData).Pad + 6) = uVar13;
    uVar13 = *(undefined8 *)((FNameEntryId *)(pTVar35->ElementData).Pad + 10);
    *(undefined8 *)((FNameEntryId *)(pTVar37->ElementData).Pad + 8) =
         *(undefined8 *)((FNameEntryId *)(pTVar35->ElementData).Pad + 8);
    *(undefined8 *)((FNameEntryId *)(pTVar37->ElementData).Pad + 10) = uVar13;
    uVar13 = *(undefined8 *)((FNameEntryId *)(pTVar35->ElementData).Pad + 0xe);
    *(undefined8 *)((FNameEntryId *)(pTVar37->ElementData).Pad + 0xc) =
         *(undefined8 *)((FNameEntryId *)(pTVar35->ElementData).Pad + 0xc);
    *(undefined8 *)((FNameEntryId *)(pTVar37->ElementData).Pad + 0xe) = uVar13;
    *(int *)pTVar35 = FVar14.Value;
    *(uint *)((longlong)pTVar35 + 4) = uVar15;
    *(undefined8 *)((FNameEntryId *)(pTVar35->ElementData).Pad + 2) = uVar16;
    *(undefined8 *)((FNameEntryId *)(pTVar35->ElementData).Pad + 4) = uVar17;
    *(undefined8 *)((FNameEntryId *)(pTVar35->ElementData).Pad + 6) = uVar18;
    *(undefined8 *)((FNameEntryId *)(pTVar35->ElementData).Pad + 8) = uVar19;
    *(undefined8 *)((FNameEntryId *)(pTVar35->ElementData).Pad + 10) = uVar20;
    *(undefined8 *)((FNameEntryId *)(pTVar35->ElementData).Pad + 0xc) = uVar21;
    *(undefined8 *)((FNameEntryId *)(pTVar35->ElementData).Pad + 0xe) = uVar22;
    iVar29 = iVar39;
  } while( true );
}

// HeapSortInternal<FRetargetChainPair,int,FIdentityFunctor,TDereferenceWrapper<FRetargetChainPair,`FRetargetChainMapping::SortMapping'::__l2::<lambda_1>_>_> @ 14df0e590

void __cdecl
AlgoImpl::
HeapSortInternal<FRetargetChainPair,int,FIdentityFunctor,TDereferenceWrapper<FRetargetChainPair,_FRetargetChainMapping::SortMapping_::__l2::<lambda_1>_>_>
          (FRetargetChainPair *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FRetargetChainPair,_public:_void___cdecl_FRetargetChainMapping::SortMapping(void)_::_2_::<lambda_1>_>
          param_4)

{
  code *pcVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  FRetargetChainPair *pFVar11;
  FRetargetChainPair *pFVar12;
  int iVar13;
  FRetargetChainPair *pFVar14;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar7 = iVar6 * 2 + 1;
  iVar13 = iVar7;
  iVar9 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_14df0e6b7:
      if (iVar9 == 0) {
        iVar7 = param_2 + -1;
        lVar10 = (longlong)iVar7;
        if (0 < iVar7) {
          pFVar11 = param_1 + lVar10;
          do {
            FVar2 = pFVar11->SourceChainName;
            iVar13 = 0;
            FVar3 = param_1->TargetChainName;
            FVar4 = param_1->SourceChainName;
            param_1->TargetChainName = pFVar11->TargetChainName;
            param_1->SourceChainName = FVar2;
            pFVar11->TargetChainName = FVar3;
            pFVar11->SourceChainName = FVar4;
            if (1 < iVar7) {
              do {
                iVar9 = iVar13 * 2;
                iVar6 = iVar9 + 1;
                if (iVar9 + 2 < iVar7) {
                  bVar5 = `FRetargetChainMapping::SortMapping'::__l2::<lambda_1>::operator()
                                    (param_4.Predicate,param_1 + (iVar9 + 2),param_1 + iVar6);
                  if (bVar5) {
                    iVar6 = iVar9;
                  }
                  iVar6 = iVar6 + 1;
                }
                pFVar12 = param_1 + iVar6;
                pFVar14 = param_1 + iVar13;
                bVar5 = `FRetargetChainMapping::SortMapping'::__l2::<lambda_1>::operator()
                                  (param_4.Predicate,pFVar14,pFVar12);
                if (!bVar5) break;
                FVar2 = pFVar14->TargetChainName;
                FVar3 = pFVar14->SourceChainName;
                FVar4 = pFVar12->SourceChainName;
                pFVar14->TargetChainName = pFVar12->TargetChainName;
                pFVar14->SourceChainName = FVar4;
                pFVar12->TargetChainName = FVar2;
                pFVar12->SourceChainName = FVar3;
                iVar13 = iVar6;
              } while (iVar6 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar10 = lVar10 + -1;
            pFVar11 = pFVar11 + -1;
          } while (0 < lVar10);
        }
        return;
      }
      iVar6 = iVar9 + -1;
      iVar7 = iVar13 + -2;
      iVar13 = iVar7;
      iVar9 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar8 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      bVar5 = `FRetargetChainMapping::SortMapping'::__l2::<lambda_1>::operator()
                        (param_4.Predicate,param_1 + (iVar7 + 2),param_1 + iVar8);
      if (bVar5) {
        iVar8 = iVar7;
      }
      iVar8 = iVar8 + 1;
    }
    pFVar11 = param_1 + iVar8;
    pFVar12 = param_1 + iVar6;
    bVar5 = `FRetargetChainMapping::SortMapping'::__l2::<lambda_1>::operator()
                      (param_4.Predicate,pFVar12,pFVar11);
    if (!bVar5) goto LAB_14df0e6b7;
    FVar2 = pFVar12->TargetChainName;
    FVar3 = pFVar12->SourceChainName;
    iVar7 = iVar8 * 2 + 1;
    FVar4 = pFVar11->SourceChainName;
    pFVar12->TargetChainName = pFVar11->TargetChainName;
    pFVar12->SourceChainName = FVar4;
    pFVar11->TargetChainName = FVar2;
    pFVar11->SourceChainName = FVar3;
    iVar6 = iVar8;
  } while( true );
}

// HeapifyInternal<FChainPairFK,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FChainPairFK,`FIKRetargetFKChainsOp::Initialize'::__l2::<lambda_1>_>_>_> @ 14df0e7c0

/* WARNING: Type propagation algorithm not settling */

void __cdecl
AlgoImpl::
HeapifyInternal<FChainPairFK,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FChainPairFK,_FIKRetargetFKChainsOp::Initialize_::__l2::<lambda_1>_>_>_>
          (FChainPairFK *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<TDereferenceWrapper<FChainPairFK,_public:_virtual_bool___cdecl_FIKRetargetFKChainsOp::Initialize(FIKRetargetProcessor_const_&,FRetargetSkeleton_const_&,FTargetSkeleton_const_&,FIKRetargetOpBase_const_*,FIKRigLogger_&)_::_2_::<lambda_1>_>_>
          param_4)

{
  FResolvedBoneChain *pFVar1;
  FResolvedBoneChain *pFVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  FChainPairFK *pFVar14;
  undefined8 *puVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  FChainPairFK *pFVar19;
  int iVar20;
  FChainPairFK *pFVar21;
  int iVar22;
  undefined8 local_118 [32];
  
  if (param_2 < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar11 = (param_2 + -2) / 2;
  iVar13 = iVar11 * 2 + 1;
  iVar4 = iVar13;
  iVar22 = iVar11;
  do {
    while (param_2 <= iVar13) {
LAB_14df0ea64:
      if (iVar22 == 0) {
        return;
      }
      iVar11 = iVar22 + -1;
      iVar13 = iVar4 + -2;
      iVar4 = iVar13;
      iVar22 = iVar11;
    }
    iVar13 = iVar11 * 2;
    iVar20 = iVar13 + 1;
    if (iVar13 + 2 < param_2) {
      pFVar1 = param_1[(longlong)iVar13 + 2].TargetBoneChain;
      if ((pFVar1->BoneIndices).ArrayNum < 1) {
        iVar17 = -1;
      }
      else {
        iVar17 = *(int *)(pFVar1->BoneIndices).AllocatorInstance.Data;
      }
      pFVar2 = param_1[(longlong)iVar13 + 1].TargetBoneChain;
      if ((pFVar2->BoneIndices).ArrayNum < 1) {
        iVar16 = -1;
      }
      else {
        iVar16 = *(int *)(pFVar2->BoneIndices).AllocatorInstance.Data;
      }
      if (iVar17 == iVar16) {
        uVar12 = ::FName::Compare(&pFVar1->ChainName,&pFVar2->ChainName);
        uVar12 = uVar12 >> 0x1f;
      }
      else {
        uVar12 = (uint)(iVar17 < iVar16);
      }
      if (uVar12 != 0) {
        iVar20 = iVar13;
      }
      iVar20 = iVar20 + 1;
    }
    pFVar21 = param_1 + iVar11;
    pFVar19 = param_1 + iVar20;
    pFVar1 = pFVar21->TargetBoneChain;
    if ((pFVar1->BoneIndices).ArrayNum < 1) {
      iVar13 = -1;
    }
    else {
      iVar13 = *(int *)(pFVar1->BoneIndices).AllocatorInstance.Data;
    }
    pFVar2 = pFVar19->TargetBoneChain;
    if ((pFVar2->BoneIndices).ArrayNum < 1) {
      iVar11 = -1;
    }
    else {
      iVar11 = *(int *)(pFVar2->BoneIndices).AllocatorInstance.Data;
    }
    if (iVar13 == iVar11) {
      iVar13 = ::FName::Compare(&pFVar1->ChainName,&pFVar2->ChainName);
      bVar10 = SUB41((uint)iVar13 >> 0x1f,0);
    }
    else {
      bVar10 = iVar13 < iVar11;
    }
    if (bVar10 == false) goto LAB_14df0ea64;
    lVar18 = 2;
    pFVar14 = pFVar21;
    puVar15 = local_118;
    do {
      uVar5 = *(undefined8 *)&(pFVar14->FKEncoder).CurrentGlobalTransforms.ArrayNum;
      dVar6 = (pFVar14->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[0];
      dVar7 = (pFVar14->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[1];
      *puVar15 = (pFVar14->FKEncoder).CurrentGlobalTransforms.AllocatorInstance.Data;
      puVar15[1] = uVar5;
      dVar8 = (pFVar14->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[0];
      dVar9 = (pFVar14->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[1];
      puVar15[2] = dVar6;
      puVar15[3] = dVar7;
      dVar6 = (pFVar14->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[0];
      dVar7 = (pFVar14->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[1];
      puVar15[4] = dVar8;
      puVar15[5] = dVar9;
      dVar8 = (pFVar14->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64[0];
      dVar9 = (pFVar14->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64[1];
      puVar15[6] = dVar6;
      puVar15[7] = dVar7;
      dVar6 = (pFVar14->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[0];
      dVar7 = (pFVar14->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[1];
      puVar15[8] = dVar8;
      puVar15[9] = dVar9;
      dVar8 = (pFVar14->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[0];
      dVar9 = (pFVar14->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[1];
      puVar15[10] = dVar6;
      puVar15[0xb] = dVar7;
      pFVar1 = (pFVar14->FKEncoder).BoneChain;
      uVar5 = *(undefined8 *)&(pFVar14->FKEncoder).field_0x78;
      puVar15[0xc] = dVar8;
      puVar15[0xd] = dVar9;
      puVar15[0xe] = pFVar1;
      puVar15[0xf] = uVar5;
      lVar18 = lVar18 + -1;
      pFVar14 = (FChainPairFK *)&pFVar14->FKDecoder;
      puVar15 = puVar15 + 0x10;
    } while (lVar18 != 0);
    lVar18 = 2;
    pFVar14 = pFVar19;
    do {
      iVar13 = (pFVar14->FKEncoder).CurrentGlobalTransforms.ArrayNum;
      iVar11 = (pFVar14->FKEncoder).CurrentGlobalTransforms.ArrayMax;
      (pFVar21->FKEncoder).CurrentGlobalTransforms.AllocatorInstance.Data =
           (pFVar14->FKEncoder).CurrentGlobalTransforms.AllocatorInstance.Data;
      (pFVar21->FKEncoder).CurrentGlobalTransforms.ArrayNum = iVar13;
      (pFVar21->FKEncoder).CurrentGlobalTransforms.ArrayMax = iVar11;
      dVar6 = (pFVar14->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[1];
      (pFVar21->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[0] =
           (pFVar14->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[0];
      (pFVar21->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[1] = dVar6;
      dVar6 = (pFVar14->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[1];
      (pFVar21->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[0] =
           (pFVar14->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[0];
      (pFVar21->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[1] = dVar6;
      dVar6 = (pFVar14->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[1];
      (pFVar21->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[0] =
           (pFVar14->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[0];
      (pFVar21->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[1] = dVar6;
      dVar6 = (pFVar14->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64[1];
      (pFVar21->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64[0] =
           (pFVar14->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64[0];
      (pFVar21->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64[1] = dVar6;
      dVar6 = (pFVar14->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[1];
      (pFVar21->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[0] =
           (pFVar14->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[0];
      (pFVar21->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[1] = dVar6;
      dVar6 = (pFVar14->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[1];
      (pFVar21->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[0] =
           (pFVar14->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[0];
      (pFVar21->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[1] = dVar6;
      uVar5 = *(undefined8 *)&(pFVar14->FKEncoder).field_0x78;
      (pFVar21->FKEncoder).BoneChain = (pFVar14->FKEncoder).BoneChain;
      *(undefined8 *)&(pFVar21->FKEncoder).field_0x78 = uVar5;
      lVar18 = lVar18 + -1;
      pFVar14 = (FChainPairFK *)&pFVar14->FKDecoder;
      pFVar21 = (FChainPairFK *)&pFVar21->FKDecoder;
    } while (lVar18 != 0);
    lVar18 = 2;
    puVar15 = local_118;
    do {
      uVar5 = puVar15[1];
      dVar6 = (double)puVar15[2];
      dVar7 = (double)puVar15[3];
      (pFVar19->FKEncoder).CurrentGlobalTransforms.AllocatorInstance.Data =
           (FScriptContainerElement *)*puVar15;
      (pFVar19->FKEncoder).CurrentGlobalTransforms.ArrayNum = (int)uVar5;
      (pFVar19->FKEncoder).CurrentGlobalTransforms.ArrayMax = (int)((ulonglong)uVar5 >> 0x20);
      dVar8 = (double)puVar15[4];
      dVar9 = (double)puVar15[5];
      (pFVar19->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[0] = dVar6;
      (pFVar19->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[1] = dVar7;
      dVar6 = (double)puVar15[6];
      dVar7 = (double)puVar15[7];
      (pFVar19->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[0] = dVar8;
      (pFVar19->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[1] = dVar9;
      dVar8 = (double)puVar15[8];
      dVar9 = (double)puVar15[9];
      (pFVar19->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[0] = dVar6;
      (pFVar19->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[1] = dVar7;
      dVar6 = (double)puVar15[10];
      dVar7 = (double)puVar15[0xb];
      (pFVar19->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64[0] = dVar8;
      (pFVar19->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64[1] = dVar9;
      dVar8 = (double)puVar15[0xc];
      dVar9 = (double)puVar15[0xd];
      (pFVar19->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[0] = dVar6;
      (pFVar19->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[1] = dVar7;
      pFVar1 = (FResolvedBoneChain *)puVar15[0xe];
      uVar5 = puVar15[0xf];
      (pFVar19->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[0] = dVar8;
      (pFVar19->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[1] = dVar9;
      (pFVar19->FKEncoder).BoneChain = pFVar1;
      *(undefined8 *)&(pFVar19->FKEncoder).field_0x78 = uVar5;
      lVar18 = lVar18 + -1;
      puVar15 = puVar15 + 0x10;
      pFVar19 = (FChainPairFK *)&pFVar19->FKDecoder;
    } while (lVar18 != 0);
    iVar13 = iVar20 * 2 + 1;
    iVar11 = iVar20;
  } while( true );
}

// HeapifyInternal<FResolvedBoneChain,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FResolvedBoneChain,`FRetargeterBoneChains::Initialize'::__l2::<lambda_2>_>_>_> @ 14df0eab0

void __cdecl
AlgoImpl::
HeapifyInternal<FResolvedBoneChain,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FResolvedBoneChain,_FRetargeterBoneChains::Initialize_::__l2::<lambda_2>_>_>_>
          (FResolvedBoneChain *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<TDereferenceWrapper<FResolvedBoneChain,_public:_bool___cdecl_FRetargeterBoneChains::Initialize(UIKRetargeter_const_*,TArray<UIKRigDefinition_const_*,TSizedDefaultAllocator<32>_>_const_&,FRetargetSkeleton_const_&,FRetargetSkeleton_const_&,FIKRigLogger_&)_::_2_::<lambda_2>_>_>
          param_4)

{
  code *pcVar1;
  int iVar2;
  FName FVar3;
  FName FVar4;
  FName FVar5;
  FName FVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined8 uVar25;
  FName FVar26;
  undefined8 uVar27;
  double dVar28;
  bool bVar29;
  undefined5 uVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  float fVar39;
  int iVar40;
  bool bVar41;
  bool bVar42;
  bool bVar43;
  undefined5 uVar44;
  bool bVar45;
  int iVar46;
  uint uVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  FResolvedBoneChain *pFVar52;
  FResolvedBoneChain *pFVar53;
  int iVar54;
  
  if (param_2 < 0) {
    bVar45 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar45) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar46 = (param_2 + -2) / 2;
  iVar48 = iVar46 * 2 + 1;
  iVar2 = iVar48;
  iVar54 = iVar46;
  do {
    while (param_2 <= iVar48) {
LAB_14df0edb2:
      if (iVar54 == 0) {
        return;
      }
      iVar46 = iVar54 + -1;
      iVar48 = iVar2 + -2;
      iVar2 = iVar48;
      iVar54 = iVar46;
    }
    iVar48 = iVar46 * 2;
    iVar51 = iVar48 + 1;
    if (iVar48 + 2 < param_2) {
      pFVar53 = param_1 + (longlong)iVar48 + 2;
      pFVar52 = param_1 + (longlong)iVar48 + 1;
      if ((pFVar53->BoneIndices).ArrayNum < 1) {
        iVar50 = -1;
      }
      else {
        iVar50 = *(int *)(pFVar53->BoneIndices).AllocatorInstance.Data;
      }
      if ((pFVar52->BoneIndices).ArrayNum < 1) {
        iVar49 = -1;
      }
      else {
        iVar49 = *(int *)(pFVar52->BoneIndices).AllocatorInstance.Data;
      }
      if (iVar50 == iVar49) {
        uVar47 = ::FName::Compare(&pFVar53->ChainName,&pFVar52->ChainName);
        uVar47 = uVar47 >> 0x1f;
      }
      else {
        uVar47 = (uint)(iVar50 < iVar49);
      }
      if (uVar47 != 0) {
        iVar51 = iVar48;
      }
      iVar51 = iVar51 + 1;
    }
    pFVar52 = param_1 + iVar46;
    pFVar53 = param_1 + iVar51;
    if ((pFVar52->BoneIndices).ArrayNum < 1) {
      iVar48 = -1;
    }
    else {
      iVar48 = *(int *)(pFVar52->BoneIndices).AllocatorInstance.Data;
    }
    if ((pFVar53->BoneIndices).ArrayNum < 1) {
      iVar46 = -1;
    }
    else {
      iVar46 = *(int *)(pFVar53->BoneIndices).AllocatorInstance.Data;
    }
    if (iVar48 == iVar46) {
      iVar48 = ::FName::Compare(&pFVar52->ChainName,&pFVar53->ChainName);
      bVar45 = SUB41((uint)iVar48 >> 0x1f,0);
    }
    else {
      bVar45 = iVar48 < iVar46;
    }
    if (bVar45 == false) goto LAB_14df0edb2;
    FVar3 = pFVar52->ChainName;
    FVar4 = pFVar52->StartBone;
    FVar5 = pFVar52->EndBone;
    FVar6 = pFVar52->IKGoalName;
    pFVar7 = (pFVar52->RefPoseGlobalTransforms).AllocatorInstance.Data;
    iVar50 = (pFVar52->RefPoseGlobalTransforms).ArrayNum;
    iVar49 = (pFVar52->RefPoseGlobalTransforms).ArrayMax;
    pFVar8 = (pFVar52->RefPoseLocalTransforms).AllocatorInstance.Data;
    iVar31 = (pFVar52->RefPoseLocalTransforms).ArrayNum;
    iVar32 = (pFVar52->RefPoseLocalTransforms).ArrayMax;
    pFVar9 = (pFVar52->CurrentLocalTransforms).AllocatorInstance.Data;
    iVar33 = (pFVar52->CurrentLocalTransforms).ArrayNum;
    iVar34 = (pFVar52->CurrentLocalTransforms).ArrayMax;
    pFVar10 = (pFVar52->Params).AllocatorInstance.Data;
    iVar35 = (pFVar52->Params).ArrayNum;
    iVar36 = (pFVar52->Params).ArrayMax;
    pFVar11 = (pFVar52->BoneIndices).AllocatorInstance.Data;
    iVar37 = (pFVar52->BoneIndices).ArrayNum;
    iVar38 = (pFVar52->BoneIndices).ArrayMax;
    fVar39 = pFVar52->InitialChainLength;
    iVar40 = pFVar52->ChainParentBoneIndex;
    uVar12 = *(undefined8 *)&pFVar52->field_0x78;
    dVar13 = (pFVar52->ChainParentInitialGlobalTransform).Rotation.XY.m128d_f64[0];
    dVar14 = (pFVar52->ChainParentInitialGlobalTransform).Rotation.XY.m128d_f64[1];
    dVar15 = (pFVar52->ChainParentInitialGlobalTransform).Rotation.ZW.m128d_f64[0];
    dVar16 = (pFVar52->ChainParentInitialGlobalTransform).Rotation.ZW.m128d_f64[1];
    dVar17 = (pFVar52->ChainParentInitialGlobalTransform).Translation.XY.m128d_f64[0];
    dVar18 = (pFVar52->ChainParentInitialGlobalTransform).Translation.XY.m128d_f64[1];
    dVar19 = (pFVar52->ChainParentInitialGlobalTransform).Translation.ZW.m128d_f64[0];
    dVar20 = (pFVar52->ChainParentInitialGlobalTransform).Translation.ZW.m128d_f64[1];
    dVar21 = (pFVar52->ChainParentInitialGlobalTransform).Scale3D.XY.m128d_f64[0];
    dVar22 = (pFVar52->ChainParentInitialGlobalTransform).Scale3D.XY.m128d_f64[1];
    dVar23 = (pFVar52->ChainParentInitialGlobalTransform).Scale3D.ZW.m128d_f64[0];
    dVar24 = (pFVar52->ChainParentInitialGlobalTransform).Scale3D.ZW.m128d_f64[1];
    bVar41 = pFVar52->bFoundStartBone;
    bVar42 = pFVar52->bFoundEndBone;
    bVar43 = pFVar52->bEndIsStartOrChildOfStart;
    uVar44 = *(undefined5 *)&pFVar52->field_0xe3;
    uVar25 = *(undefined8 *)&pFVar52->field_0xe8;
    FVar26 = pFVar53->StartBone;
    pFVar52->ChainName = pFVar53->ChainName;
    pFVar52->StartBone = FVar26;
    FVar26 = pFVar53->IKGoalName;
    pFVar52->EndBone = pFVar53->EndBone;
    pFVar52->IKGoalName = FVar26;
    iVar48 = (pFVar53->RefPoseGlobalTransforms).ArrayNum;
    iVar46 = (pFVar53->RefPoseGlobalTransforms).ArrayMax;
    (pFVar52->RefPoseGlobalTransforms).AllocatorInstance.Data =
         (pFVar53->RefPoseGlobalTransforms).AllocatorInstance.Data;
    (pFVar52->RefPoseGlobalTransforms).ArrayNum = iVar48;
    (pFVar52->RefPoseGlobalTransforms).ArrayMax = iVar46;
    iVar48 = (pFVar53->RefPoseLocalTransforms).ArrayNum;
    iVar46 = (pFVar53->RefPoseLocalTransforms).ArrayMax;
    (pFVar52->RefPoseLocalTransforms).AllocatorInstance.Data =
         (pFVar53->RefPoseLocalTransforms).AllocatorInstance.Data;
    (pFVar52->RefPoseLocalTransforms).ArrayNum = iVar48;
    (pFVar52->RefPoseLocalTransforms).ArrayMax = iVar46;
    iVar48 = (pFVar53->CurrentLocalTransforms).ArrayNum;
    iVar46 = (pFVar53->CurrentLocalTransforms).ArrayMax;
    (pFVar52->CurrentLocalTransforms).AllocatorInstance.Data =
         (pFVar53->CurrentLocalTransforms).AllocatorInstance.Data;
    (pFVar52->CurrentLocalTransforms).ArrayNum = iVar48;
    (pFVar52->CurrentLocalTransforms).ArrayMax = iVar46;
    iVar48 = (pFVar53->Params).ArrayNum;
    iVar46 = (pFVar53->Params).ArrayMax;
    (pFVar52->Params).AllocatorInstance.Data = (pFVar53->Params).AllocatorInstance.Data;
    (pFVar52->Params).ArrayNum = iVar48;
    (pFVar52->Params).ArrayMax = iVar46;
    iVar48 = (pFVar53->BoneIndices).ArrayNum;
    iVar46 = (pFVar53->BoneIndices).ArrayMax;
    (pFVar52->BoneIndices).AllocatorInstance.Data = (pFVar53->BoneIndices).AllocatorInstance.Data;
    (pFVar52->BoneIndices).ArrayNum = iVar48;
    (pFVar52->BoneIndices).ArrayMax = iVar46;
    iVar48 = pFVar53->ChainParentBoneIndex;
    uVar27 = *(undefined8 *)&pFVar53->field_0x78;
    pFVar52->InitialChainLength = pFVar53->InitialChainLength;
    pFVar52->ChainParentBoneIndex = iVar48;
    *(undefined8 *)&pFVar52->field_0x78 = uVar27;
    dVar28 = (pFVar53->ChainParentInitialGlobalTransform).Rotation.XY.m128d_f64[1];
    (pFVar52->ChainParentInitialGlobalTransform).Rotation.XY.m128d_f64[0] =
         (pFVar53->ChainParentInitialGlobalTransform).Rotation.XY.m128d_f64[0];
    (pFVar52->ChainParentInitialGlobalTransform).Rotation.XY.m128d_f64[1] = dVar28;
    dVar28 = (pFVar53->ChainParentInitialGlobalTransform).Rotation.ZW.m128d_f64[1];
    (pFVar52->ChainParentInitialGlobalTransform).Rotation.ZW.m128d_f64[0] =
         (pFVar53->ChainParentInitialGlobalTransform).Rotation.ZW.m128d_f64[0];
    (pFVar52->ChainParentInitialGlobalTransform).Rotation.ZW.m128d_f64[1] = dVar28;
    dVar28 = (pFVar53->ChainParentInitialGlobalTransform).Translation.XY.m128d_f64[1];
    (pFVar52->ChainParentInitialGlobalTransform).Translation.XY.m128d_f64[0] =
         (pFVar53->ChainParentInitialGlobalTransform).Translation.XY.m128d_f64[0];
    (pFVar52->ChainParentInitialGlobalTransform).Translation.XY.m128d_f64[1] = dVar28;
    dVar28 = (pFVar53->ChainParentInitialGlobalTransform).Translation.ZW.m128d_f64[1];
    (pFVar52->ChainParentInitialGlobalTransform).Translation.ZW.m128d_f64[0] =
         (pFVar53->ChainParentInitialGlobalTransform).Translation.ZW.m128d_f64[0];
    (pFVar52->ChainParentInitialGlobalTransform).Translation.ZW.m128d_f64[1] = dVar28;
    dVar28 = (pFVar53->ChainParentInitialGlobalTransform).Scale3D.XY.m128d_f64[1];
    (pFVar52->ChainParentInitialGlobalTransform).Scale3D.XY.m128d_f64[0] =
         (pFVar53->ChainParentInitialGlobalTransform).Scale3D.XY.m128d_f64[0];
    (pFVar52->ChainParentInitialGlobalTransform).Scale3D.XY.m128d_f64[1] = dVar28;
    dVar28 = (pFVar53->ChainParentInitialGlobalTransform).Scale3D.ZW.m128d_f64[1];
    (pFVar52->ChainParentInitialGlobalTransform).Scale3D.ZW.m128d_f64[0] =
         (pFVar53->ChainParentInitialGlobalTransform).Scale3D.ZW.m128d_f64[0];
    (pFVar52->ChainParentInitialGlobalTransform).Scale3D.ZW.m128d_f64[1] = dVar28;
    bVar45 = pFVar53->bFoundEndBone;
    bVar29 = pFVar53->bEndIsStartOrChildOfStart;
    uVar30 = *(undefined5 *)&pFVar53->field_0xe3;
    uVar27 = *(undefined8 *)&pFVar53->field_0xe8;
    pFVar52->bFoundStartBone = pFVar53->bFoundStartBone;
    pFVar52->bFoundEndBone = bVar45;
    pFVar52->bEndIsStartOrChildOfStart = bVar29;
    *(undefined5 *)&pFVar52->field_0xe3 = uVar30;
    *(undefined8 *)&pFVar52->field_0xe8 = uVar27;
    pFVar53->ChainName = FVar3;
    pFVar53->StartBone = FVar4;
    pFVar53->EndBone = FVar5;
    pFVar53->IKGoalName = FVar6;
    (pFVar53->RefPoseGlobalTransforms).AllocatorInstance.Data = pFVar7;
    (pFVar53->RefPoseGlobalTransforms).ArrayNum = iVar50;
    (pFVar53->RefPoseGlobalTransforms).ArrayMax = iVar49;
    (pFVar53->RefPoseLocalTransforms).AllocatorInstance.Data = pFVar8;
    (pFVar53->RefPoseLocalTransforms).ArrayNum = iVar31;
    (pFVar53->RefPoseLocalTransforms).ArrayMax = iVar32;
    (pFVar53->CurrentLocalTransforms).AllocatorInstance.Data = pFVar9;
    (pFVar53->CurrentLocalTransforms).ArrayNum = iVar33;
    (pFVar53->CurrentLocalTransforms).ArrayMax = iVar34;
    (pFVar53->Params).AllocatorInstance.Data = pFVar10;
    (pFVar53->Params).ArrayNum = iVar35;
    (pFVar53->Params).ArrayMax = iVar36;
    (pFVar53->BoneIndices).AllocatorInstance.Data = pFVar11;
    (pFVar53->BoneIndices).ArrayNum = iVar37;
    (pFVar53->BoneIndices).ArrayMax = iVar38;
    iVar48 = iVar51 * 2 + 1;
    pFVar53->InitialChainLength = fVar39;
    pFVar53->ChainParentBoneIndex = iVar40;
    *(undefined8 *)&pFVar53->field_0x78 = uVar12;
    (pFVar53->ChainParentInitialGlobalTransform).Rotation.XY.m128d_f64[0] = dVar13;
    (pFVar53->ChainParentInitialGlobalTransform).Rotation.XY.m128d_f64[1] = dVar14;
    (pFVar53->ChainParentInitialGlobalTransform).Rotation.ZW.m128d_f64[0] = dVar15;
    (pFVar53->ChainParentInitialGlobalTransform).Rotation.ZW.m128d_f64[1] = dVar16;
    (pFVar53->ChainParentInitialGlobalTransform).Translation.XY.m128d_f64[0] = dVar17;
    (pFVar53->ChainParentInitialGlobalTransform).Translation.XY.m128d_f64[1] = dVar18;
    (pFVar53->ChainParentInitialGlobalTransform).Translation.ZW.m128d_f64[0] = dVar19;
    (pFVar53->ChainParentInitialGlobalTransform).Translation.ZW.m128d_f64[1] = dVar20;
    (pFVar53->ChainParentInitialGlobalTransform).Scale3D.XY.m128d_f64[0] = dVar21;
    (pFVar53->ChainParentInitialGlobalTransform).Scale3D.XY.m128d_f64[1] = dVar22;
    (pFVar53->ChainParentInitialGlobalTransform).Scale3D.ZW.m128d_f64[0] = dVar23;
    (pFVar53->ChainParentInitialGlobalTransform).Scale3D.ZW.m128d_f64[1] = dVar24;
    pFVar53->bFoundStartBone = bVar41;
    pFVar53->bFoundEndBone = bVar42;
    pFVar53->bEndIsStartOrChildOfStart = bVar43;
    *(undefined5 *)&pFVar53->field_0xe3 = uVar44;
    *(undefined8 *)&pFVar53->field_0xe8 = uVar25;
    iVar46 = iVar51;
  } while( true );
}

// InternalConstructor<UCurveRemapOp> @ 14df0ee00

void __cdecl InternalConstructor<UCurveRemapOp>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined2 *)(this + 1) = 1;
    *(undefined ***)this = &___7UCurveRemapOp__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x18 = 1;
  }
  return;
}

// InternalConstructor<UIKGoalCreatorInterface> @ 14df0ee50

void __cdecl InternalConstructor<UIKGoalCreatorInterface>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UIKGoalCreatorInterface__6B_;
  }
  return;
}

// InternalConstructor<UIKRetargetAdditivePoseController> @ 14df0ee80

void __cdecl InternalConstructor<UIKRetargetAdditivePoseController>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this = &___7UIKRetargetAdditivePoseController__6B_;
  }
  return;
}

// InternalConstructor<UIKRetargetAlignPoleVectorController> @ 14df0eec0

void __cdecl InternalConstructor<UIKRetargetAlignPoleVectorController>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this = &___7UIKRetargetAlignPoleVectorController__6B_;
  }
  return;
}

// InternalConstructor<UIKRetargetCopyBasePoseController> @ 14df0ef00

void __cdecl InternalConstructor<UIKRetargetCopyBasePoseController>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this = &___7UIKRetargetCopyBasePoseController__6B_;
  }
  return;
}

// InternalConstructor<UIKRetargetCurveRemapController> @ 14df0ef40

void __cdecl InternalConstructor<UIKRetargetCurveRemapController>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this = &___7UIKRetargetCurveRemapController__6B_;
  }
  return;
}

// InternalConstructor<UIKRetargetFKChainsController> @ 14df0ef80

void __cdecl InternalConstructor<UIKRetargetFKChainsController>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this = &___7UIKRetargetFKChainsController__6B_;
  }
  return;
}

// InternalConstructor<UIKRetargetFilterBoneController> @ 14df0efc0

void __cdecl InternalConstructor<UIKRetargetFilterBoneController>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this = &___7UIKRetargetFilterBoneController__6B_;
  }
  return;
}

// InternalConstructor<UIKRetargetFloorGoalsController> @ 14df0f000

void __cdecl InternalConstructor<UIKRetargetFloorGoalsController>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this = &___7UIKRetargetFloorGoalsController__6B_;
  }
  return;
}

// InternalConstructor<UIKRetargetGlobalSettings> @ 14df0f040

void __cdecl InternalConstructor<UIKRetargetGlobalSettings>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UIKRetargetGlobalSettings__6B_;
    *(undefined4 *)(this + 1) = 0x1010101;
    this[1].field_0x4 = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined4 *)&this[1].field_0x10 = 0x3f800000;
    this[1].field_0x14 = 0;
    *(undefined4 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x1c = 1;
    *(undefined4 *)&this[1].field_0x24 = 0;
    *(undefined8 *)(this + 2) = 0x3f800000;
    *(undefined4 *)&this[2].field_0x8 = 0x3f800000;
  }
  return;
}

// InternalConstructor<UIKRetargetIKChainsController> @ 14df0f0b0

void __cdecl InternalConstructor<UIKRetargetIKChainsController>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this = &___7UIKRetargetIKChainsController__6B_;
  }
  return;
}

// InternalConstructor<UIKRetargetOpControllerBase> @ 14df0f0f0

void __cdecl InternalConstructor<UIKRetargetOpControllerBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this = &___7UIKRetargetOpControllerBase__6B_;
  }
  return;
}

// InternalConstructor<UIKRetargetPelvisMotionController> @ 14df0f130

void __cdecl InternalConstructor<UIKRetargetPelvisMotionController>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this = &___7UIKRetargetPelvisMotionController__6B_;
  }
  return;
}

// InternalConstructor<UIKRetargetPinBoneController> @ 14df0f170

void __cdecl InternalConstructor<UIKRetargetPinBoneController>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this = &___7UIKRetargetPinBoneController__6B_;
  }
  return;
}

// InternalConstructor<UIKRetargetProcessor> @ 14df0f1b0

void __cdecl InternalConstructor<UIKRetargetProcessor>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UIKRetargetProcessor__6B_;
    *(undefined4 *)&this[2].field_0x10 = 0x1010101;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    this[2].field_0x14 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x20 = 0x3f800000;
    this[2].field_0x24 = 0;
    *(undefined4 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x4 = 1;
    *(undefined4 *)&this[3].field_0xc = 0;
    *(undefined8 *)&this[3].field_0x10 = 0x3f800000;
    *(undefined4 *)&this[3].field_0x18 = 0x3f800000;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)(this + 4) = 0;
    FIKRetargetProcessor::FIKRetargetProcessor((FIKRetargetProcessor *)&this[4].field_0x8);
    return;
  }
  return;
}

// InternalConstructor<UIKRetargetRootMotionController> @ 14df0f260

void __cdecl InternalConstructor<UIKRetargetRootMotionController>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this = &___7UIKRetargetRootMotionController__6B_;
  }
  return;
}

// InternalConstructor<UIKRetargetRunIKRigController> @ 14df0f2a0

void __cdecl InternalConstructor<UIKRetargetRunIKRigController>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this = &___7UIKRetargetRunIKRigController__6B_;
  }
  return;
}

// InternalConstructor<UIKRetargetScaleSourceController> @ 14df0f2e0

void __cdecl InternalConstructor<UIKRetargetScaleSourceController>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this = &___7UIKRetargetScaleSourceController__6B_;
  }
  return;
}

// InternalConstructor<UIKRetargetSpeedPlantingController> @ 14df0f320

void __cdecl InternalConstructor<UIKRetargetSpeedPlantingController>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this = &___7UIKRetargetSpeedPlantingController__6B_;
  }
  return;
}

// InternalConstructor<UIKRetargetStretchChainController> @ 14df0f360

void __cdecl InternalConstructor<UIKRetargetStretchChainController>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this = &___7UIKRetargetStretchChainController__6B_;
  }
  return;
}

// InternalConstructor<UIKRetargetStrideWarpingController> @ 14df0f3a0

void __cdecl InternalConstructor<UIKRetargetStrideWarpingController>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this = &___7UIKRetargetStrideWarpingController__6B_;
  }
  return;
}

// InternalConstructor<UIKRetargeter> @ 14df0f3e0

void __cdecl InternalConstructor<UIKRetargeter>(FObjectInitializer *param_1)

{
  if ((UIKRetargeter *)param_1->Obj != (UIKRetargeter *)0x0) {
    UIKRetargeter::UIKRetargeter((UIKRetargeter *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UIKRigBodyMoverController> @ 14df0f400

void __cdecl InternalConstructor<UIKRigBodyMoverController>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this = &___7UIKRigBodyMoverController__6B_;
  }
  return;
}

// InternalConstructor<UIKRigComponent> @ 14df0f440

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UIKRigComponent>(FObjectInitializer *param_1)

{
  UActorComponent *this;
  
  this = (UActorComponent *)param_1->Obj;
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&UIKRigComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UIKRigComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UIKRigComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = (longlong)&___7UIKRigComponent__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UIKRigDefinition> @ 14df0f4b0

void __cdecl InternalConstructor<UIKRigDefinition>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined ***)this = &UIKRigDefinition::_vftable__for__UObject__;
    *(undefined8 *)(this + 2) = 0;
    *(undefined ***)(this + 1) = &UIKRigDefinition::_vftable__for__IInterface_PreviewMeshProvider__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    FUtf8String::Reset((FUtf8String *)&this[1].field_0x20,0);
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
    *(undefined8 *)&this[4].field_0x20 = 0;
    *(undefined8 *)(this + 5) = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined8 *)&this[5].field_0x10 = 0;
    *(undefined8 *)&this[5].field_0x18 = 0;
    *(undefined8 *)&this[5].field_0x20 = 0;
    *(undefined8 *)(this + 6) = 0;
    *(undefined8 *)&this[6].field_0x8 = 0;
    *(undefined8 *)&this[6].field_0x10 = 0;
    *(undefined8 *)&this[6].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UIKRigEffectorGoal> @ 14df0f5b0

void __cdecl InternalConstructor<UIKRigEffectorGoal>(FObjectInitializer *param_1)

{
  UObject *this;
  float fVar1;
  float fVar2;
  float fVar3;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined4 *)&this[1].field_0x10 = 0x3f800000;
    *(undefined ***)this = &___7UIKRigEffectorGoal__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined4 *)&this[1].field_0x14 = 0x3f800000;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)&this[1].field_0x18 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)&this[1].field_0x20 = (double)fVar1;
    *(double *)(this + 2) = (double)fVar2;
    *(double *)&this[2].field_0x8 = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)&this[2].field_0x10 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)&this[2].field_0x18 = (double)fVar1;
    *(double *)&this[2].field_0x20 = (double)fVar2;
    *(double *)(this + 3) = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)&this[3].field_0x8 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&this[3].field_0x10 = (double)fVar1;
    *(double *)&this[3].field_0x18 = (double)fVar2;
    *(double *)&this[3].field_0x20 = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)(this + 4) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)&this[4].field_0x8 = (double)fVar1;
    *(double *)&this[4].field_0x10 = (double)fVar2;
    *(double *)&this[4].field_0x18 = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)&this[4].field_0x20 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)(this + 5) = (double)fVar1;
    *(double *)&this[5].field_0x8 = (double)fVar2;
    *(double *)&this[5].field_0x10 = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)&this[5].field_0x18 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&this[5].field_0x20 = (double)fVar1;
    *(double *)(this + 6) = (double)fVar2;
    *(double *)&this[6].field_0x8 = (double)fVar3;
  }
  return;
}

// InternalConstructor<UIKRigFBIKController> @ 14df0f6b0

void __cdecl InternalConstructor<UIKRigFBIKController>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this = &___7UIKRigFBIKController__6B_;
  }
  return;
}

// InternalConstructor<UIKRigFBIKSolver> @ 14df0f6f0

void __cdecl InternalConstructor<UIKRigFBIKSolver>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined1 *)(this + 1) = 1;
    *(undefined ***)this = &___7UIKRigFBIKSolver__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined2 *)&this[1].field_0x1c = 0;
    *(undefined4 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0x14;
    *(undefined4 *)&this[1].field_0x18 = 0x3f800000;
    *(undefined4 *)&this[1].field_0x24 = 0x3f800000;
    *(undefined4 *)(this + 2) = 0x3f800000;
    *(undefined4 *)&this[2].field_0x4 = 0x3f800000;
    *(undefined4 *)&this[2].field_0x8 = 0x3f800000;
    *(undefined4 *)&this[2].field_0xc = 0x3f800000;
    *(undefined4 *)&this[2].field_0x10 = 0x3f800000;
    *(undefined4 *)&this[2].field_0x14 = 0x3f800000;
    *(undefined4 *)&this[2].field_0x18 = 0x3f800000;
    *(undefined4 *)&this[2].field_0x1c = 0x41f00000;
    *(undefined4 *)&this[2].field_0x20 = 0x3fa66666;
  }
  return;
}

// InternalConstructor<UIKRigLimbSolverController> @ 14df0f7b0

void __cdecl InternalConstructor<UIKRigLimbSolverController>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this = &___7UIKRigLimbSolverController__6B_;
  }
  return;
}

// InternalConstructor<UIKRigPoleSolverController> @ 14df0f7f0

void __cdecl InternalConstructor<UIKRigPoleSolverController>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this = &___7UIKRigPoleSolverController__6B_;
  }
  return;
}

// InternalConstructor<UIKRigProcessor> @ 14df0f830

void __cdecl InternalConstructor<UIKRigProcessor>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UIKRigProcessor__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    FIKRigProcessor::FIKRigProcessor((FIKRigProcessor *)&this[2].field_0x10);
    return;
  }
  return;
}

// InternalConstructor<UIKRigSetTransformController> @ 14df0f890

void __cdecl InternalConstructor<UIKRigSetTransformController>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this = &___7UIKRigSetTransformController__6B_;
  }
  return;
}

// InternalConstructor<UIKRigSolver> @ 14df0f8d0

void __cdecl InternalConstructor<UIKRigSolver>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined1 *)(this + 1) = 1;
    *(undefined ***)this = &___7UIKRigSolver__6B_;
  }
  return;
}

// InternalConstructor<UIKRigSolverControllerBase> @ 14df0f910

void __cdecl InternalConstructor<UIKRigSolverControllerBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this = &___7UIKRigSolverControllerBase__6B_;
  }
  return;
}

// InternalConstructor<UIKRig_BodyMover> @ 14df0f950

void __cdecl InternalConstructor<UIKRig_BodyMover>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined1 *)(this + 1) = 1;
    *(undefined ***)this = &___7UIKRig_BodyMover__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined4 *)&this[1].field_0x10 = 0x3f800000;
    *(undefined4 *)&this[1].field_0x14 = 0x3f800000;
    *(undefined4 *)&this[1].field_0x18 = 0x3f800000;
    *(undefined4 *)&this[1].field_0x1c = 0x3f800000;
    *(undefined4 *)&this[1].field_0x20 = 0x3f800000;
    *(undefined4 *)&this[1].field_0x24 = 0x3f800000;
    *(undefined4 *)(this + 2) = 0x3f800000;
    *(undefined4 *)&this[2].field_0x4 = 0x3f800000;
    *(undefined4 *)&this[2].field_0x8 = 0x3f800000;
    *(undefined4 *)&this[2].field_0xc = 0x3f800000;
    *(undefined4 *)&this[2].field_0x10 = 0x3f800000;
  }
  return;
}

// InternalConstructor<UIKRig_BodyMoverEffector> @ 14df0f9e0

void __cdecl InternalConstructor<UIKRig_BodyMoverEffector>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined4 *)&this[1].field_0x10 = 0x3f800000;
    *(undefined ***)this = &___7UIKRig_BodyMoverEffector__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UIKRig_FBIKBoneSettings> @ 14df0fa20

void __cdecl InternalConstructor<UIKRig_FBIKBoneSettings>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UIKRig_FBIKBoneSettings__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x14 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x4 = 0;
    this[2].field_0xc = 0;
  }
  return;
}

// InternalConstructor<UIKRig_FBIKEffector> @ 14df0fa70

void __cdecl InternalConstructor<UIKRig_FBIKEffector>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined4 *)&this[1].field_0x14 = 0x3f800000;
    *(undefined ***)this = &___7UIKRig_FBIKEffector__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined4 *)&this[1].field_0x10 = 0;
    *(undefined4 *)&this[1].field_0x18 = 0x3f800000;
    *(undefined4 *)&this[1].field_0x1c = 0x3f800000;
  }
  return;
}

// InternalConstructor<UIKRig_LimbEffector> @ 14df0fad0

void __cdecl InternalConstructor<UIKRig_LimbEffector>(FObjectInitializer *param_1)

{
  UObjectBase *this;
  
  this = (UObjectBase *)param_1->Obj;
  if (this != (UObjectBase *)0x0) {
    UObject::UObject((UObject *)this);
    this->_padding_ = (longlong)&___7UIKRig_LimbEffector__6B_;
    this[1]._padding_ = 0;
    this[1].ObjectFlags = RF_NoFlags;
    this[1].InternalIndex = 0;
    UObjectBase::AtomicallySetFlags(this,RF_Transactional);
    return;
  }
  return;
}

// InternalConstructor<UIKRig_LimbSolver> @ 14df0fb20

void __cdecl InternalConstructor<UIKRig_LimbSolver>(FObjectInitializer *param_1)

{
  UObject *this;
  FName FVar1;
  FObjectInitializer *pFVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FName local_res8;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    pFVar2 = FObjectInitializer::Get();
    UObject::UObject(this,pFVar2);
    *(undefined1 *)(this + 1) = 1;
    *(undefined ***)this = &___7UIKRig_LimbSolver__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined4 *)&this[1].field_0x10 = 0x3c23d70a;
    this[1].field_0x14 = 0;
    *(undefined4 *)&this[1].field_0x18 = 0xc;
    this[1].field_0x1c = 0;
    *(undefined4 *)&this[1].field_0x20 = 0x41700000;
    this[1].field_0x24 = 1;
    *(undefined4 *)(this + 2) = 0x3f000000;
    *(undefined4 *)&this[2].field_0x4 = 0x3f333333;
    *(undefined2 *)&this[2].field_0x8 = 0x200;
    *(undefined8 *)&this[2].field_0x10 = 0;
    pFVar3 = FName::FName(&local_res8,L"Effector");
    FVar1 = *pFVar3;
    pUVar4 = UIKRig_LimbEffector::StaticClass();
    pUVar5 = UObject::CreateDefaultSubobject(this,FVar1,pUVar4,pUVar4,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    *(UObject **)&this[2].field_0x10 = pUVar5;
  }
  return;
}

// InternalConstructor<UIKRig_PoleSolver> @ 14df0fc00

void __cdecl InternalConstructor<UIKRig_PoleSolver>(FObjectInitializer *param_1)

{
  UObject *this;
  FName FVar1;
  FObjectInitializer *pFVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FName local_res8;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    pFVar2 = FObjectInitializer::Get();
    UObject::UObject(this,pFVar2);
    *(undefined1 *)(this + 1) = 1;
    *(undefined ***)this = &___7UIKRig_PoleSolver__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    pFVar3 = FName::FName(&local_res8,L"Effector");
    FVar1 = *pFVar3;
    pUVar4 = UIKRig_PoleSolverEffector::StaticClass();
    pUVar5 = UObject::CreateDefaultSubobject(this,FVar1,pUVar4,pUVar4,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    *(UObject **)&this[1].field_0x18 = pUVar5;
  }
  return;
}

// InternalConstructor<UIKRig_PoleSolverEffector> @ 14df0fcb0

void __cdecl InternalConstructor<UIKRig_PoleSolverEffector>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UIKRig_PoleSolverEffector__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined4 *)&this[1].field_0x10 = 0x3f800000;
  }
  return;
}

// InternalConstructor<UIKRig_SetTransform> @ 14df0fcf0

void __cdecl InternalConstructor<UIKRig_SetTransform>(FObjectInitializer *param_1)

{
  UObject *this;
  FName FVar1;
  FObjectInitializer *pFVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FName local_res8;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    pFVar2 = FObjectInitializer::Get();
    UObject::UObject(this,pFVar2);
    *(undefined1 *)(this + 1) = 1;
    *(undefined ***)this = &___7UIKRig_SetTransform__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    pFVar3 = FName::FName(&local_res8,L"Effector");
    FVar1 = *pFVar3;
    pUVar4 = UIKRig_SetTransformEffector::StaticClass();
    pUVar5 = UObject::CreateDefaultSubobject(this,FVar1,pUVar4,pUVar4,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    *(UObject **)&this[1].field_0x18 = pUVar5;
  }
  return;
}

// InternalConstructor<UIKRig_SetTransformEffector> @ 14df0fda0

void __cdecl InternalConstructor<UIKRig_SetTransformEffector>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined2 *)(this + 1) = 0x101;
    *(undefined ***)this = &___7UIKRig_SetTransformEffector__6B_;
    *(undefined4 *)&this[1].field_0x4 = 0x3f800000;
  }
  return;
}

// InternalConstructor<UPinBoneOp> @ 14df0fde0

void __cdecl InternalConstructor<UPinBoneOp>(FObjectInitializer *param_1)

{
  UObject *this;
  float fVar1;
  float fVar2;
  float fVar3;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined2 *)(this + 1) = 1;
    *(undefined ***)this = &___7UPinBoneOp__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined4 *)&this[1].field_0x18 = 0x1010101;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)(this + 2) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)&this[2].field_0x8 = (double)fVar1;
    *(double *)&this[2].field_0x10 = (double)fVar2;
    *(double *)&this[2].field_0x18 = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)&this[2].field_0x20 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)(this + 3) = (double)fVar1;
    *(double *)&this[3].field_0x8 = (double)fVar2;
    *(double *)&this[3].field_0x10 = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)&this[3].field_0x18 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&this[3].field_0x20 = (double)fVar1;
    *(double *)(this + 4) = (double)fVar2;
    *(double *)&this[4].field_0x8 = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)&this[4].field_0x10 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)&this[4].field_0x18 = (double)fVar1;
    *(double *)&this[4].field_0x20 = (double)fVar2;
    *(double *)(this + 5) = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)&this[5].field_0x8 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)&this[5].field_0x10 = (double)fVar1;
    *(double *)&this[5].field_0x18 = (double)fVar2;
    *(double *)&this[5].field_0x20 = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)(this + 6) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&this[6].field_0x8 = (double)fVar1;
    *(double *)&this[6].field_0x10 = (double)fVar2;
    *(double *)&this[6].field_0x18 = (double)fVar3;
    this[6].field_0x20 = 1;
  }
  return;
}

// InternalConstructor<URetargetChainSettings> @ 14df0fee0

void __cdecl InternalConstructor<URetargetChainSettings>(FObjectInitializer *param_1)

{
  UObject *this;
  undefined8 uVar1;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7URetargetChainSettings__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    FTargetChainSettings::FTargetChainSettings((FTargetChainSettings *)&this[1].field_0x10);
    *(undefined4 *)&this[6].field_0x14 = 0;
    *(undefined1 *)(this + 6) = 1;
    *(undefined4 *)&this[6].field_0x4 = 0x3f800000;
    *(undefined4 *)&this[6].field_0xc = 0x3f800000;
    this[6].field_0x10 = 1;
    uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    *(double *)&this[6].field_0x18 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    *(undefined8 *)&this[6].field_0x20 = uVar1;
    *(double *)(this + 7) = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    *(undefined8 *)&this[9].field_0x8 = 0;
    this[9].field_0x4 = 0;
    *(undefined4 *)(this + 9) = 0x3f800000;
    *(undefined4 *)&this[9].field_0x10 = 0x41700000;
    *(undefined4 *)&this[9].field_0x14 = 0x437a0000;
    *(undefined4 *)&this[9].field_0x18 = 0x3f800000;
  }
  return;
}

// InternalConstructor<URetargetOpBase> @ 14df0ffb0

void __cdecl InternalConstructor<URetargetOpBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined2 *)(this + 1) = 1;
    *(undefined ***)this = &___7URetargetOpBase__6B_;
  }
  return;
}

// InternalConstructor<URetargetOpStack> @ 14df0fff0

void __cdecl InternalConstructor<URetargetOpStack>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7URetargetOpStack__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<URetargetProfileLibrary> @ 14df10030

void __cdecl InternalConstructor<URetargetProfileLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7URetargetProfileLibrary__6B_;
  }
  return;
}

// InternalConstructor<URetargetRootSettings> @ 14df10060

void __cdecl InternalConstructor<URetargetRootSettings>(FObjectInitializer *param_1)

{
  UObject *this;
  undefined8 uVar1;
  double dVar2;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7URetargetRootSettings__6B_;
    *(undefined4 *)(this + 1) = 0x3f800000;
    *(undefined8 *)&this[1].field_0x4 = 0x3f800000;
    uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    *(double *)&this[1].field_0x10 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    *(undefined8 *)&this[1].field_0x18 = uVar1;
    *(double *)&this[1].field_0x20 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    *(undefined4 *)(this + 2) = 0x3f800000;
    *(undefined4 *)&this[2].field_0x4 = 0x3f800000;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&this[2].field_0x8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&this[2].field_0x10 = uVar1;
    *(double *)&this[2].field_0x18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    *(double *)&this[2].field_0x20 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    *(double *)(this + 3) = dVar2;
    *(double *)&this[3].field_0x8 = UE::Math::TRotator<double>::ZeroRotator.Roll;
    *(undefined8 *)&this[3].field_0x10 = 0x3f800000;
    this[3].field_0x18 = 1;
    *(undefined4 *)&this[3].field_0x1c = 0x3f800000;
    *(undefined4 *)&this[3].field_0x20 = 0x3f800000;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)(this + 4) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&this[4].field_0x8 = uVar1;
    *(double *)&this[4].field_0x10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&this[4].field_0x18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&this[4].field_0x20 = uVar1;
    *(double *)(this + 5) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    *(double *)&this[5].field_0x8 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    *(double *)&this[5].field_0x10 = dVar2;
    *(double *)&this[5].field_0x18 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  }
  return;
}

// InternalConstructor<URootMotionGeneratorOp> @ 14df10180

void __cdecl InternalConstructor<URootMotionGeneratorOp>(FObjectInitializer *param_1)

{
  UObject *this;
  float fVar1;
  float fVar2;
  float fVar3;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined2 *)(this + 1) = 1;
    *(undefined ***)this = &___7URootMotionGeneratorOp__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    this[1].field_0x24 = 0;
    *(undefined2 *)&this[1].field_0x22 = 0x101;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)(this + 2) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)&this[2].field_0x8 = (double)fVar1;
    *(double *)&this[2].field_0x10 = (double)fVar2;
    *(double *)&this[2].field_0x18 = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)&this[2].field_0x20 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)(this + 3) = (double)fVar1;
    *(double *)&this[3].field_0x8 = (double)fVar2;
    *(double *)&this[3].field_0x10 = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)&this[3].field_0x18 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&this[3].field_0x20 = (double)fVar1;
    *(double *)(this + 4) = (double)fVar2;
    *(double *)&this[4].field_0x8 = (double)fVar3;
  }
  return;
}

// InternalVTableHelperCtorCaller<UCurveRemapOp> @ 14df10230

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCurveRemapOp>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCurveRemapOp::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined2 *)(pUVar1 + 1) = 1;
    *(undefined ***)pUVar1 = &___7UCurveRemapOp__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    pUVar1[1].field_0x18 = 1;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIKGoalCreatorInterface> @ 14df102f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UIKGoalCreatorInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UIKGoalCreatorInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UIKGoalCreatorInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIKRetargetAdditivePoseController> @ 14df103a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UIKRetargetAdditivePoseController>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UIKRetargetAdditivePoseController::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UIKRetargetAdditivePoseController__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIKRetargetAlignPoleVectorController> @ 14df10450

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UIKRetargetAlignPoleVectorController>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UIKRetargetAlignPoleVectorController::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UIKRetargetAlignPoleVectorController__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIKRetargetCopyBasePoseController> @ 14df10500

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UIKRetargetCopyBasePoseController>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UIKRetargetCopyBasePoseController::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UIKRetargetCopyBasePoseController__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIKRetargetCurveRemapController> @ 14df105b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UIKRetargetCurveRemapController>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UIKRetargetCurveRemapController::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UIKRetargetCurveRemapController__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIKRetargetFKChainsController> @ 14df10660

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UIKRetargetFKChainsController>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UIKRetargetFKChainsController::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UIKRetargetFKChainsController__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIKRetargetFilterBoneController> @ 14df10710

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UIKRetargetFilterBoneController>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UIKRetargetFilterBoneController::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UIKRetargetFilterBoneController__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIKRetargetFloorGoalsController> @ 14df107c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UIKRetargetFloorGoalsController>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UIKRetargetFloorGoalsController::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UIKRetargetFloorGoalsController__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIKRetargetGlobalSettings> @ 14df10870

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UIKRetargetGlobalSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UIKRetargetGlobalSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UIKRetargetGlobalSettings__6B_;
    *(undefined4 *)(pUVar1 + 1) = 0x1010101;
    pUVar1[1].field_0x4 = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined4 *)&pUVar1[1].field_0x10 = 0x3f800000;
    pUVar1[1].field_0x14 = 0;
    *(undefined4 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x1c = 1;
    *(undefined4 *)&pUVar1[1].field_0x24 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0x3f800000;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0x3f800000;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIKRetargetIKChainsController> @ 14df10960

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UIKRetargetIKChainsController>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UIKRetargetIKChainsController::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UIKRetargetIKChainsController__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIKRetargetOpControllerBase> @ 14df10a10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UIKRetargetOpControllerBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UIKRetargetOpControllerBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UIKRetargetOpControllerBase__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIKRetargetPelvisMotionController> @ 14df10ac0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UIKRetargetPelvisMotionController>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UIKRetargetPelvisMotionController::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UIKRetargetPelvisMotionController__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIKRetargetPinBoneController> @ 14df10b70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UIKRetargetPinBoneController>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UIKRetargetPinBoneController::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UIKRetargetPinBoneController__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIKRetargetProcessor> @ 14df10c20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UIKRetargetProcessor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UIKRetargetProcessor::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UIKRetargetProcessor__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined4 *)&pUVar1[2].field_0x10 = 0x1010101;
    pUVar1[2].field_0x14 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0x3f800000;
    pUVar1[2].field_0x24 = 0;
    *(undefined4 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x4 = 1;
    *(undefined4 *)&pUVar1[3].field_0xc = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0x3f800000;
    *(undefined4 *)&pUVar1[3].field_0x18 = 0x3f800000;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    FIKRetargetProcessor::FIKRetargetProcessor((FIKRetargetProcessor *)&pUVar1[4].field_0x8);
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIKRetargetRootMotionController> @ 14df10d50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UIKRetargetRootMotionController>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UIKRetargetRootMotionController::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UIKRetargetRootMotionController__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIKRetargetRunIKRigController> @ 14df10e00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UIKRetargetRunIKRigController>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UIKRetargetRunIKRigController::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UIKRetargetRunIKRigController__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIKRetargetScaleSourceController> @ 14df10eb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UIKRetargetScaleSourceController>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UIKRetargetScaleSourceController::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UIKRetargetScaleSourceController__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIKRetargetSpeedPlantingController> @ 14df10f60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UIKRetargetSpeedPlantingController>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UIKRetargetSpeedPlantingController::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UIKRetargetSpeedPlantingController__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIKRetargetStretchChainController> @ 14df11010

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UIKRetargetStretchChainController>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UIKRetargetStretchChainController::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UIKRetargetStretchChainController__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIKRetargetStrideWarpingController> @ 14df110c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UIKRetargetStrideWarpingController>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UIKRetargetStrideWarpingController::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UIKRetargetStrideWarpingController__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIKRetargeter> @ 14df11170

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UIKRetargeter>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UIKRetargeter::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined4 *)(pUVar1 + 1) = 0xffffffff;
    *(undefined ***)pUVar1 = &___7UIKRetargeter__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 3) = 0;
    *(undefined4 *)&pUVar1[3].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[3].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[3].field_0xc = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined4 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 5) = 0;
    *(undefined4 *)&pUVar1[5].field_0x8 = 0;
    *(undefined4 *)&pUVar1[5].field_0xc = 0x80;
    *(undefined4 *)&pUVar1[5].field_0x10 = 0xffffffff;
    *(undefined4 *)&pUVar1[5].field_0x14 = 0;
    *(undefined8 *)&pUVar1[5].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 6) = 0;
    *(undefined8 *)&pUVar1[6].field_0x8 = 0;
    *(undefined8 *)&pUVar1[6].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 7) = 0;
    *(undefined4 *)&pUVar1[7].field_0x8 = 0;
    *(undefined4 *)&pUVar1[7].field_0xc = 0x80;
    *(undefined4 *)&pUVar1[7].field_0x10 = 0xffffffff;
    *(undefined4 *)&pUVar1[7].field_0x14 = 0;
    *(undefined8 *)&pUVar1[7].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 8) = 0;
    *(undefined8 *)&pUVar1[8].field_0x8 = 0;
    *(undefined8 *)&pUVar1[8].field_0x10 = 0;
    *(undefined2 *)&pUVar1[8].field_0x18 = 0x101;
    pUVar1[8].field_0x1a = 1;
    *(undefined8 *)&pUVar1[8].field_0x1c = 0;
    *(undefined8 *)(pUVar1 + 9) = 0;
    *(undefined8 *)&pUVar1[9].field_0x8 = 0;
    *(undefined8 *)&pUVar1[9].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 10) = 0;
    *(undefined4 *)&pUVar1[10].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[10].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[10].field_0xc = 0;
    *(undefined8 *)&pUVar1[10].field_0x18 = 0;
    *(undefined4 *)&pUVar1[10].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 0xb) = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x8 = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x10 = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x18 = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 0xc) = 0;
    *(undefined8 *)&pUVar1[0xc].field_0x8 = 0;
    *(undefined8 *)&pUVar1[0xc].field_0x10 = 0;
    *(undefined8 *)&pUVar1[0xc].field_0x18 = 0;
    *(undefined8 *)&pUVar1[0xc].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIKRigBodyMoverController> @ 14df11180

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UIKRigBodyMoverController>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UIKRigBodyMoverController::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UIKRigBodyMoverController__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIKRigComponent> @ 14df11230

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

UObject * __cdecl InternalVTableHelperCtorCaller<UIKRigComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UActorComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UIKRigComponent::GetPrivateStaticClass();
  this = (UActorComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&UIKRigComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UIKRigComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UIKRigComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = (longlong)&___7UIKRigComponent__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIKRigDefinition> @ 14df11320

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UIKRigDefinition>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UIKRigDefinition::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined ***)pUVar1 = &UIKRigDefinition::_vftable__for__UObject__;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined ***)(pUVar1 + 1) =
         &UIKRigDefinition::_vftable__for__IInterface_PreviewMeshProvider__;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    FUtf8String::Reset((FUtf8String *)&pUVar1[1].field_0x20,0);
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
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 5) = 0;
    *(undefined8 *)&pUVar1[5].field_0x8 = 0;
    *(undefined8 *)&pUVar1[5].field_0x10 = 0;
    *(undefined8 *)&pUVar1[5].field_0x18 = 0;
    *(undefined8 *)&pUVar1[5].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 6) = 0;
    *(undefined8 *)&pUVar1[6].field_0x8 = 0;
    *(undefined8 *)&pUVar1[6].field_0x10 = 0;
    *(undefined8 *)&pUVar1[6].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIKRigEffectorGoal> @ 14df11490

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UIKRigEffectorGoal>(FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = UIKRigEffectorGoal::GetPrivateStaticClass();
  pUVar4 = StaticAllocateObject
                     (pUVar5,pUVar4,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar4 != (UObject *)0x0) {
    UObject::UObject(pUVar4,param_1);
    *(undefined4 *)&pUVar4[1].field_0x10 = 0x3f800000;
    *(undefined ***)pUVar4 = &___7UIKRigEffectorGoal__6B_;
    *(undefined8 *)(pUVar4 + 1) = 0;
    *(undefined8 *)&pUVar4[1].field_0x8 = 0;
    *(undefined4 *)&pUVar4[1].field_0x14 = 0x3f800000;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)&pUVar4[1].field_0x18 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)&pUVar4[1].field_0x20 = (double)fVar1;
    *(double *)(pUVar4 + 2) = (double)fVar2;
    *(double *)&pUVar4[2].field_0x8 = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)&pUVar4[2].field_0x10 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)&pUVar4[2].field_0x18 = (double)fVar1;
    *(double *)&pUVar4[2].field_0x20 = (double)fVar2;
    *(double *)(pUVar4 + 3) = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)&pUVar4[3].field_0x8 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&pUVar4[3].field_0x10 = (double)fVar1;
    *(double *)&pUVar4[3].field_0x18 = (double)fVar2;
    *(double *)&pUVar4[3].field_0x20 = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)(pUVar4 + 4) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)&pUVar4[4].field_0x8 = (double)fVar1;
    *(double *)&pUVar4[4].field_0x10 = (double)fVar2;
    *(double *)&pUVar4[4].field_0x18 = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)&pUVar4[4].field_0x20 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)(pUVar4 + 5) = (double)fVar1;
    *(double *)&pUVar4[5].field_0x8 = (double)fVar2;
    *(double *)&pUVar4[5].field_0x10 = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)&pUVar4[5].field_0x18 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&pUVar4[5].field_0x20 = (double)fVar1;
    *(double *)(pUVar4 + 6) = (double)fVar2;
    *(double *)&pUVar4[6].field_0x8 = (double)fVar3;
    return pUVar4;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIKRigFBIKController> @ 14df114a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UIKRigFBIKController>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UIKRigFBIKController::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UIKRigFBIKController__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIKRigFBIKSolver> @ 14df11550

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UIKRigFBIKSolver>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UIKRigFBIKSolver::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined1 *)(pUVar1 + 1) = 1;
    *(undefined ***)pUVar1 = &___7UIKRigFBIKSolver__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0x14;
    *(undefined4 *)&pUVar1[1].field_0x18 = 0x3f800000;
    *(undefined2 *)&pUVar1[1].field_0x1c = 0;
    *(undefined4 *)&pUVar1[1].field_0x20 = 0;
    *(undefined4 *)&pUVar1[1].field_0x24 = 0x3f800000;
    *(undefined4 *)(pUVar1 + 2) = 0x3f800000;
    *(undefined4 *)&pUVar1[2].field_0x4 = 0x3f800000;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0x3f800000;
    *(undefined4 *)&pUVar1[2].field_0xc = 0x3f800000;
    *(undefined4 *)&pUVar1[2].field_0x10 = 0x3f800000;
    *(undefined4 *)&pUVar1[2].field_0x14 = 0x3f800000;
    *(undefined4 *)&pUVar1[2].field_0x18 = 0x3f800000;
    *(undefined4 *)&pUVar1[2].field_0x1c = 0x41f00000;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0x3fa66666;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIKRigLimbSolverController> @ 14df11680

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UIKRigLimbSolverController>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UIKRigLimbSolverController::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UIKRigLimbSolverController__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIKRigPoleSolverController> @ 14df11730

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UIKRigPoleSolverController>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UIKRigPoleSolverController::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UIKRigPoleSolverController__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIKRigProcessor> @ 14df117e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UIKRigProcessor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UIKRigProcessor::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UIKRigProcessor__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    FIKRigProcessor::FIKRigProcessor((FIKRigProcessor *)&pUVar1[2].field_0x10);
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIKRigSetTransformController> @ 14df118b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UIKRigSetTransformController>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UIKRigSetTransformController::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UIKRigSetTransformController__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIKRigSolver> @ 14df11960

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UIKRigSolver>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UIKRigSolver::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined1 *)(pUVar1 + 1) = 1;
    *(undefined ***)pUVar1 = &___7UIKRigSolver__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIKRigSolverControllerBase> @ 14df11a10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UIKRigSolverControllerBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UIKRigSolverControllerBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UIKRigSolverControllerBase__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIKRig_BodyMover> @ 14df11ac0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UIKRig_BodyMover>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UIKRig_BodyMover::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined1 *)(pUVar1 + 1) = 1;
    *(undefined ***)pUVar1 = &___7UIKRig_BodyMover__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined4 *)&pUVar1[1].field_0x10 = 0x3f800000;
    *(undefined4 *)&pUVar1[1].field_0x14 = 0x3f800000;
    *(undefined4 *)&pUVar1[1].field_0x18 = 0x3f800000;
    *(undefined4 *)&pUVar1[1].field_0x1c = 0x3f800000;
    *(undefined4 *)&pUVar1[1].field_0x20 = 0x3f800000;
    *(undefined4 *)&pUVar1[1].field_0x24 = 0x3f800000;
    *(undefined4 *)(pUVar1 + 2) = 0x3f800000;
    *(undefined4 *)&pUVar1[2].field_0x4 = 0x3f800000;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0x3f800000;
    *(undefined4 *)&pUVar1[2].field_0xc = 0x3f800000;
    *(undefined4 *)&pUVar1[2].field_0x10 = 0x3f800000;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIKRig_BodyMoverEffector> @ 14df11bd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UIKRig_BodyMoverEffector>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UIKRig_BodyMoverEffector::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined4 *)&pUVar1[1].field_0x10 = 0x3f800000;
    *(undefined ***)pUVar1 = &___7UIKRig_BodyMoverEffector__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIKRig_FBIKBoneSettings> @ 14df11c90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UIKRig_FBIKBoneSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UIKRig_FBIKBoneSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &___7UIKRig_FBIKBoneSettings__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x14 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)&pUVar1[2].field_0x4 = 0;
    pUVar1[2].field_0xc = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIKRig_FBIKEffector> @ 14df11d60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UIKRig_FBIKEffector>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UIKRig_FBIKEffector::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined4 *)&pUVar1[1].field_0x10 = 0;
    *(undefined ***)pUVar1 = &___7UIKRig_FBIKEffector__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined4 *)&pUVar1[1].field_0x14 = 0x3f800000;
    *(undefined4 *)&pUVar1[1].field_0x18 = 0x3f800000;
    *(undefined4 *)&pUVar1[1].field_0x1c = 0x3f800000;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIKRig_LimbEffector> @ 14df11e30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UIKRig_LimbEffector>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UIKRig_LimbEffector::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UIKRig_LimbEffector__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIKRig_LimbSolver> @ 14df11ef0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UIKRig_LimbSolver>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UIKRig_LimbSolver::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined1 *)(pUVar1 + 1) = 1;
    *(undefined ***)pUVar1 = &___7UIKRig_LimbSolver__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined4 *)&pUVar1[1].field_0x10 = 0x3c23d70a;
    pUVar1[1].field_0x14 = 0;
    *(undefined4 *)&pUVar1[1].field_0x18 = 0xc;
    pUVar1[1].field_0x1c = 0;
    *(undefined4 *)&pUVar1[1].field_0x20 = 0x41700000;
    pUVar1[1].field_0x24 = 1;
    *(undefined4 *)(pUVar1 + 2) = 0x3f000000;
    *(undefined4 *)&pUVar1[2].field_0x4 = 0x3f333333;
    *(undefined2 *)&pUVar1[2].field_0x8 = 0x200;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIKRig_PoleSolver> @ 14df11fe0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UIKRig_PoleSolver>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UIKRig_PoleSolver::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined1 *)(pUVar1 + 1) = 1;
    *(undefined ***)pUVar1 = &___7UIKRig_PoleSolver__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIKRig_PoleSolverEffector> @ 14df120a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UIKRig_PoleSolverEffector>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UIKRig_PoleSolverEffector::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UIKRig_PoleSolverEffector__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined4 *)&pUVar1[1].field_0x10 = 0x3f800000;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIKRig_SetTransform> @ 14df12160

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UIKRig_SetTransform>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UIKRig_SetTransform::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined1 *)(pUVar1 + 1) = 1;
    *(undefined ***)pUVar1 = &___7UIKRig_SetTransform__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIKRig_SetTransformEffector> @ 14df12220

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UIKRig_SetTransformEffector>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UIKRig_SetTransformEffector::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined2 *)(pUVar1 + 1) = 0x101;
    *(undefined ***)pUVar1 = &___7UIKRig_SetTransformEffector__6B_;
    *(undefined4 *)&pUVar1[1].field_0x4 = 0x3f800000;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPinBoneOp> @ 14df122e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPinBoneOp>(FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = UPinBoneOp::GetPrivateStaticClass();
  pUVar4 = StaticAllocateObject
                     (pUVar5,pUVar4,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar4 != (UObject *)0x0) {
    UObject::UObject(pUVar4,param_1);
    *(undefined8 *)&pUVar4[1].field_0x8 = 0;
    *(undefined ***)pUVar4 = &___7UPinBoneOp__6B_;
    *(undefined8 *)&pUVar4[1].field_0x10 = 0;
    *(undefined2 *)(pUVar4 + 1) = 1;
    *(undefined4 *)&pUVar4[1].field_0x18 = 0x1010101;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)(pUVar4 + 2) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)&pUVar4[2].field_0x8 = (double)fVar1;
    *(double *)&pUVar4[2].field_0x10 = (double)fVar2;
    *(double *)&pUVar4[2].field_0x18 = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)&pUVar4[2].field_0x20 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)(pUVar4 + 3) = (double)fVar1;
    *(double *)&pUVar4[3].field_0x8 = (double)fVar2;
    *(double *)&pUVar4[3].field_0x10 = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)&pUVar4[3].field_0x18 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&pUVar4[3].field_0x20 = (double)fVar1;
    *(double *)(pUVar4 + 4) = (double)fVar2;
    *(double *)&pUVar4[4].field_0x8 = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)&pUVar4[4].field_0x10 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)&pUVar4[4].field_0x18 = (double)fVar1;
    *(double *)&pUVar4[4].field_0x20 = (double)fVar2;
    *(double *)(pUVar4 + 5) = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)&pUVar4[5].field_0x8 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)&pUVar4[5].field_0x10 = (double)fVar1;
    *(double *)&pUVar4[5].field_0x18 = (double)fVar2;
    *(double *)&pUVar4[5].field_0x20 = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)(pUVar4 + 6) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&pUVar4[6].field_0x8 = (double)fVar1;
    *(double *)&pUVar4[6].field_0x10 = (double)fVar2;
    *(double *)&pUVar4[6].field_0x18 = (double)fVar3;
    pUVar4[6].field_0x20 = 1;
    return pUVar4;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<URetargetChainSettings> @ 14df122f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<URetargetChainSettings>(FVTableHelper *param_1)

{
  undefined8 uVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = URetargetChainSettings::GetPrivateStaticClass();
  pUVar2 = StaticAllocateObject
                     (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar2 != (UObject *)0x0) {
    UObject::UObject(pUVar2,param_1);
    *(undefined ***)pUVar2 = &___7URetargetChainSettings__6B_;
    *(undefined8 *)(pUVar2 + 1) = 0;
    *(undefined8 *)&pUVar2[1].field_0x8 = 0;
    FTargetChainSettings::FTargetChainSettings((FTargetChainSettings *)&pUVar2[1].field_0x10);
    *(undefined1 *)(pUVar2 + 6) = 1;
    *(undefined4 *)&pUVar2[6].field_0x4 = 0x3f800000;
    *(undefined4 *)&pUVar2[6].field_0xc = 0x3f800000;
    pUVar2[6].field_0x10 = 1;
    *(undefined4 *)&pUVar2[6].field_0x14 = 0;
    uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    *(double *)&pUVar2[6].field_0x18 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    *(undefined8 *)&pUVar2[6].field_0x20 = uVar1;
    *(double *)(pUVar2 + 7) = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    *(undefined8 *)&pUVar2[9].field_0x8 = 0;
    *(undefined4 *)(pUVar2 + 9) = 0x3f800000;
    pUVar2[9].field_0x4 = 0;
    *(undefined4 *)&pUVar2[9].field_0x10 = 0x41700000;
    *(undefined4 *)&pUVar2[9].field_0x14 = 0x437a0000;
    *(undefined4 *)&pUVar2[9].field_0x18 = 0x3f800000;
    return pUVar2;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<URetargetOpBase> @ 14df12430

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<URetargetOpBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = URetargetOpBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined2 *)(pUVar1 + 1) = 1;
    *(undefined ***)pUVar1 = &___7URetargetOpBase__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<URetargetOpStack> @ 14df124e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<URetargetOpStack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = URetargetOpStack::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7URetargetOpStack__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<URetargetProfileLibrary> @ 14df125a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<URetargetProfileLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = URetargetProfileLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7URetargetProfileLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<URetargetRootSettings> @ 14df12650

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<URetargetRootSettings>(FVTableHelper *param_1)

{
  undefined8 uVar1;
  double dVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = URetargetRootSettings::GetPrivateStaticClass();
  pUVar3 = StaticAllocateObject
                     (pUVar4,pUVar3,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UObject *)0x0) {
    UObject::UObject(pUVar3,param_1);
    *(undefined ***)pUVar3 = &___7URetargetRootSettings__6B_;
    *(undefined4 *)(pUVar3 + 1) = 0x3f800000;
    *(undefined8 *)&pUVar3[1].field_0x4 = 0x3f800000;
    uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    *(double *)&pUVar3[1].field_0x10 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    *(undefined8 *)&pUVar3[1].field_0x18 = uVar1;
    *(double *)&pUVar3[1].field_0x20 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    *(undefined4 *)(pUVar3 + 2) = 0x3f800000;
    *(undefined4 *)&pUVar3[2].field_0x4 = 0x3f800000;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&pUVar3[2].field_0x8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&pUVar3[2].field_0x10 = uVar1;
    *(double *)&pUVar3[2].field_0x18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    *(double *)&pUVar3[2].field_0x20 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    *(double *)(pUVar3 + 3) = dVar2;
    *(double *)&pUVar3[3].field_0x8 = UE::Math::TRotator<double>::ZeroRotator.Roll;
    *(undefined8 *)&pUVar3[3].field_0x10 = 0x3f800000;
    pUVar3[3].field_0x18 = 1;
    *(undefined4 *)&pUVar3[3].field_0x1c = 0x3f800000;
    *(undefined4 *)&pUVar3[3].field_0x20 = 0x3f800000;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)(pUVar3 + 4) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&pUVar3[4].field_0x8 = uVar1;
    *(double *)&pUVar3[4].field_0x10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&pUVar3[4].field_0x18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&pUVar3[4].field_0x20 = uVar1;
    *(double *)(pUVar3 + 5) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    *(double *)&pUVar3[5].field_0x8 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    *(double *)&pUVar3[5].field_0x10 = dVar2;
    *(double *)&pUVar3[5].field_0x18 = UE::Math::TRotator<double>::ZeroRotator.Roll;
    return pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<URootMotionGeneratorOp> @ 14df127f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<URootMotionGeneratorOp>(FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = URootMotionGeneratorOp::GetPrivateStaticClass();
  pUVar4 = StaticAllocateObject
                     (pUVar5,pUVar4,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar4 != (UObject *)0x0) {
    UObject::UObject(pUVar4,param_1);
    *(undefined2 *)(pUVar4 + 1) = 1;
    *(undefined ***)pUVar4 = &___7URootMotionGeneratorOp__6B_;
    *(undefined8 *)&pUVar4[1].field_0x8 = 0;
    *(undefined8 *)&pUVar4[1].field_0x10 = 0;
    *(undefined8 *)&pUVar4[1].field_0x18 = 0;
    *(undefined2 *)&pUVar4[1].field_0x22 = 0x101;
    pUVar4[1].field_0x24 = 0;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)(pUVar4 + 2) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)&pUVar4[2].field_0x8 = (double)fVar1;
    *(double *)&pUVar4[2].field_0x10 = (double)fVar2;
    *(double *)&pUVar4[2].field_0x18 = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)&pUVar4[2].field_0x20 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)(pUVar4 + 3) = (double)fVar1;
    *(double *)&pUVar4[3].field_0x8 = (double)fVar2;
    *(double *)&pUVar4[3].field_0x10 = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)&pUVar4[3].field_0x18 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&pUVar4[3].field_0x20 = (double)fVar1;
    *(double *)(pUVar4 + 4) = (double)fVar2;
    *(double *)&pUVar4[4].field_0x8 = (double)fVar3;
    return pUVar4;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,16>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TQuat<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,UE::Math::TQuat<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TQuat<double>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,UE::Math::TQuat<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TQuat<double>,0>_>::FKeyComparisonClass<`FIKRetargetPose::SortHierarchically'::__l2::<lambda_1>_>_>_>_> @ 14df12910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,16>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TQuat<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,UE::Math::TQuat<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TQuat<double>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,UE::Math::TQuat<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TQuat<double>,0>_>::FKeyComparisonClass<_FIKRetargetPose::SortHierarchically_::__l2::<lambda_1>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<64,16>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<FName,UE::Math::TQuat<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TQuat<double>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,UE::Math::TQuat<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TQuat<double>,0>_>::FKeyComparisonClass<_public:_void___cdecl_FIKRetargetPose::SortHierarchically(FIKRigSkeleton_const_&)_::_2_::<lambda_1>_>_>_>
          param_4)

{
  FIKRigSkeleton *pFVar1;
  FNameEntryId FVar2;
  uint uVar3;
  undefined8 uVar4;
  FNameEntryId FVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  FNameEntryId FVar14;
  uint uVar15;
  FName FVar16;
  FNameEntryId FVar17;
  uint uVar18;
  FName FVar19;
  FName FVar20;
  FName FVar21;
  FName FVar22;
  FName FVar23;
  FName FVar24;
  FName FVar25;
  FNameEntryId FVar26;
  uint uVar27;
  FNameEntryId FVar28;
  uint uVar29;
  FNameEntryId FVar30;
  uint uVar31;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<64,16>_> *pTVar32;
  int iVar33;
  int iVar34;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<64,16>_> *pTVar35;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<64,16>_> *pTVar36;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<64,16>_> *pTVar37;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<64,16>_> *pTVar38;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<64,16>_> *pTVar39;
  float fVar40;
  undefined1 auStack_3a8 [32];
  FIdentityFunctor local_388;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<64,16>_> **local_380;
  int local_378;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<64,16>_> *local_370;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<64,16>_> *local_358;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<64,16>_> *local_348;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<64,16>_> *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_3a8;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_388 = param_3;
    local_348 = param_1;
    fVar40 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar40;
    memset(local_330,0,0x2e8);
    local_380 = &local_348;
    do {
      local_370 = local_380[1];
      pTVar38 = *local_380;
      local_358 = local_380[2];
      iVar33 = (int)((longlong)local_370 - (longlong)pTVar38 >> 6) + 1;
      local_378 = (int)local_358;
      pTVar37 = pTVar38;
      if ((int)local_358 != 0) {
LAB_14df129e3:
        pTVar32 = local_370;
        pTVar38 = local_370;
        if (8 < iVar33) {
          FVar2.Value = *(int *)pTVar37;
          uVar3 = *(int *)((longlong)pTVar37 + 4);
          uVar4 = *(undefined8 *)((FNameEntryId *)(pTVar37->ElementData).Pad + 2);
          pTVar38 = pTVar37 + iVar33 / 2;
          pTVar35 = local_370 + 1;
          FVar5.Value = *(int *)pTVar38;
          uVar6 = *(int *)((longlong)pTVar38 + 4);
          uVar7 = *(undefined8 *)((FNameEntryId *)(pTVar38->ElementData).Pad + 2);
          uVar8 = *(undefined8 *)((FNameEntryId *)(pTVar38->ElementData).Pad + 4);
          uVar9 = *(undefined8 *)((FNameEntryId *)(pTVar38->ElementData).Pad + 6);
          uVar10 = *(undefined8 *)((FNameEntryId *)(pTVar38->ElementData).Pad + 8);
          uVar11 = *(undefined8 *)((FNameEntryId *)(pTVar38->ElementData).Pad + 10);
          uVar12 = *(undefined8 *)((FNameEntryId *)(pTVar38->ElementData).Pad + 0xc);
          uVar13 = *(undefined8 *)((FNameEntryId *)(pTVar38->ElementData).Pad + 0xe);
          *(int *)pTVar38 = FVar2.Value;
          *(uint *)((longlong)pTVar38 + 4) = uVar3;
          *(undefined8 *)((FNameEntryId *)(pTVar38->ElementData).Pad + 2) = uVar4;
          uVar4 = *(undefined8 *)((FNameEntryId *)(pTVar37->ElementData).Pad + 6);
          *(undefined8 *)((FNameEntryId *)(pTVar38->ElementData).Pad + 4) =
               *(undefined8 *)((FNameEntryId *)(pTVar37->ElementData).Pad + 4);
          *(undefined8 *)((FNameEntryId *)(pTVar38->ElementData).Pad + 6) = uVar4;
          uVar4 = *(undefined8 *)((FNameEntryId *)(pTVar37->ElementData).Pad + 10);
          *(undefined8 *)((FNameEntryId *)(pTVar38->ElementData).Pad + 8) =
               *(undefined8 *)((FNameEntryId *)(pTVar37->ElementData).Pad + 8);
          *(undefined8 *)((FNameEntryId *)(pTVar38->ElementData).Pad + 10) = uVar4;
          uVar4 = *(undefined8 *)((FNameEntryId *)(pTVar37->ElementData).Pad + 0xe);
          *(undefined8 *)((FNameEntryId *)(pTVar38->ElementData).Pad + 0xc) =
               *(undefined8 *)((FNameEntryId *)(pTVar37->ElementData).Pad + 0xc);
          *(undefined8 *)((FNameEntryId *)(pTVar38->ElementData).Pad + 0xe) = uVar4;
          *(int *)pTVar37 = FVar5.Value;
          *(uint *)((longlong)pTVar37 + 4) = uVar6;
          *(undefined8 *)((FNameEntryId *)(pTVar37->ElementData).Pad + 2) = uVar7;
          *(undefined8 *)((FNameEntryId *)(pTVar37->ElementData).Pad + 4) = uVar8;
          *(undefined8 *)((FNameEntryId *)(pTVar37->ElementData).Pad + 6) = uVar9;
          *(undefined8 *)((FNameEntryId *)(pTVar37->ElementData).Pad + 8) = uVar10;
          *(undefined8 *)((FNameEntryId *)(pTVar37->ElementData).Pad + 10) = uVar11;
          *(undefined8 *)((FNameEntryId *)(pTVar37->ElementData).Pad + 0xc) = uVar12;
          *(undefined8 *)((FNameEntryId *)(pTVar37->ElementData).Pad + 0xe) = uVar13;
          pTVar38 = pTVar37;
LAB_14df12a50:
          pTVar39 = pTVar38;
          pTVar38 = pTVar39 + 1;
          if (pTVar38 <= pTVar32) goto code_r0x00014df12a59;
          goto LAB_14df12a80;
        }
        for (; pTVar35 = pTVar37, pTVar32 = pTVar37, pTVar37 < pTVar38; pTVar38 = pTVar38 + -1) {
          while (pTVar39 = pTVar35, pTVar32 = pTVar32 + 1, pTVar32 <= pTVar38) {
            FVar22.ComparisonIndex.Value = *(int *)pTVar39;
            FVar22.Number = *(int *)((longlong)pTVar39 + 4);
            FVar23.ComparisonIndex.Value = *(int *)pTVar32;
            FVar23.Number = *(int *)((longlong)pTVar32 + 4);
            pFVar1 = &(((((param_4.Predicate)->Predicate).Predicate)->Predicate).Predicate)->
                      Skeleton;
            iVar33 = FIKRigSkeleton::GetBoneIndexFromName(pFVar1,FVar22);
            iVar34 = FIKRigSkeleton::GetBoneIndexFromName(pFVar1,FVar23);
            pTVar35 = pTVar32;
            if (iVar33 <= iVar34) {
              pTVar35 = pTVar39;
            }
          }
          FVar28.Value = *(int *)pTVar39;
          uVar29 = *(int *)((longlong)pTVar39 + 4);
          uVar4 = *(undefined8 *)((FNameEntryId *)(pTVar39->ElementData).Pad + 2);
          uVar7 = *(undefined8 *)((FNameEntryId *)(pTVar39->ElementData).Pad + 4);
          uVar8 = *(undefined8 *)((FNameEntryId *)(pTVar39->ElementData).Pad + 6);
          uVar9 = *(undefined8 *)((FNameEntryId *)(pTVar39->ElementData).Pad + 8);
          uVar10 = *(undefined8 *)((FNameEntryId *)(pTVar39->ElementData).Pad + 10);
          uVar11 = *(undefined8 *)((FNameEntryId *)(pTVar39->ElementData).Pad + 0xc);
          uVar12 = *(undefined8 *)((FNameEntryId *)(pTVar39->ElementData).Pad + 0xe);
          FVar30.Value = *(int *)pTVar38;
          uVar31 = *(int *)((longlong)pTVar38 + 4);
          uVar13 = *(undefined8 *)((FNameEntryId *)(pTVar38->ElementData).Pad + 2);
          *(int *)pTVar39 = FVar30.Value;
          *(uint *)((longlong)pTVar39 + 4) = uVar31;
          *(undefined8 *)((FNameEntryId *)(pTVar39->ElementData).Pad + 2) = uVar13;
          uVar13 = *(undefined8 *)((FNameEntryId *)(pTVar38->ElementData).Pad + 6);
          *(undefined8 *)((FNameEntryId *)(pTVar39->ElementData).Pad + 4) =
               *(undefined8 *)((FNameEntryId *)(pTVar38->ElementData).Pad + 4);
          *(undefined8 *)((FNameEntryId *)(pTVar39->ElementData).Pad + 6) = uVar13;
          uVar13 = *(undefined8 *)((FNameEntryId *)(pTVar38->ElementData).Pad + 10);
          *(undefined8 *)((FNameEntryId *)(pTVar39->ElementData).Pad + 8) =
               *(undefined8 *)((FNameEntryId *)(pTVar38->ElementData).Pad + 8);
          *(undefined8 *)((FNameEntryId *)(pTVar39->ElementData).Pad + 10) = uVar13;
          uVar13 = *(undefined8 *)((FNameEntryId *)(pTVar38->ElementData).Pad + 0xe);
          *(undefined8 *)((FNameEntryId *)(pTVar39->ElementData).Pad + 0xc) =
               *(undefined8 *)((FNameEntryId *)(pTVar38->ElementData).Pad + 0xc);
          *(undefined8 *)((FNameEntryId *)(pTVar39->ElementData).Pad + 0xe) = uVar13;
          *(int *)pTVar38 = FVar28.Value;
          *(uint *)((longlong)pTVar38 + 4) = uVar29;
          *(undefined8 *)((FNameEntryId *)(pTVar38->ElementData).Pad + 2) = uVar4;
          *(undefined8 *)((FNameEntryId *)(pTVar38->ElementData).Pad + 4) = uVar7;
          *(undefined8 *)((FNameEntryId *)(pTVar38->ElementData).Pad + 6) = uVar8;
          *(undefined8 *)((FNameEntryId *)(pTVar38->ElementData).Pad + 8) = uVar9;
          *(undefined8 *)((FNameEntryId *)(pTVar38->ElementData).Pad + 10) = uVar10;
          *(undefined8 *)((FNameEntryId *)(pTVar38->ElementData).Pad + 0xc) = uVar11;
          *(undefined8 *)((FNameEntryId *)(pTVar38->ElementData).Pad + 0xe) = uVar12;
          param_3 = local_388;
        }
        goto LAB_14df12c21;
      }
LAB_14df12c0b:
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,16>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TQuat<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,UE::Math::TQuat<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TQuat<double>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,UE::Math::TQuat<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TQuat<double>,0>_>::FKeyComparisonClass<_FIKRetargetPose::SortHierarchically_::__l2::<lambda_1>_>_>_>_>
                (pTVar38,iVar33,param_3,param_4);
LAB_14df12c21:
      local_380 = local_380 + -3;
    } while (&local_348 <= local_380);
  }
  return;
code_r0x00014df12a59:
  FVar16.ComparisonIndex.Value = *(int *)pTVar37;
  FVar16.Number = *(int *)((longlong)pTVar37 + 4);
  FVar19.ComparisonIndex.Value = *(int *)pTVar38;
  FVar19.Number = *(int *)((longlong)pTVar38 + 4);
  pFVar1 = &(((((param_4.Predicate)->Predicate).Predicate)->Predicate).Predicate)->Skeleton;
  iVar33 = FIKRigSkeleton::GetBoneIndexFromName(pFVar1,FVar16);
  iVar34 = FIKRigSkeleton::GetBoneIndexFromName(pFVar1,FVar19);
  if (iVar33 <= iVar34) goto LAB_14df12a50;
LAB_14df12a80:
  do {
    pTVar36 = pTVar35;
    pTVar35 = pTVar36 + -1;
    if (pTVar35 <= pTVar37) break;
    FVar20.ComparisonIndex.Value = *(int *)pTVar35;
    FVar20.Number = *(int *)((longlong)pTVar35 + 4);
    FVar21.ComparisonIndex.Value = *(int *)pTVar37;
    FVar21.Number = *(int *)((longlong)pTVar37 + 4);
    pFVar1 = &(((((param_4.Predicate)->Predicate).Predicate)->Predicate).Predicate)->Skeleton;
    iVar33 = FIKRigSkeleton::GetBoneIndexFromName(pFVar1,FVar20);
    iVar34 = FIKRigSkeleton::GetBoneIndexFromName(pFVar1,FVar21);
  } while (iVar33 <= iVar34);
  FVar14.Value = *(int *)pTVar35;
  uVar15 = *(int *)((longlong)pTVar35 + 4);
  FVar16 = *(FName *)((longlong)pTVar36 + -0x38);
  if (pTVar38 <= pTVar35) {
    FVar17.Value = *(int *)pTVar38;
    uVar18 = *(int *)((longlong)pTVar38 + 4);
    FVar19 = *(FName *)((longlong)pTVar39 + 0x48);
    FVar20 = *(FName *)((longlong)pTVar39 + 0x50);
    FVar21 = *(FName *)((longlong)pTVar39 + 0x58);
    FVar22 = *(FName *)((longlong)pTVar39 + 0x60);
    FVar23 = *(FName *)((longlong)pTVar39 + 0x68);
    FVar24 = *(FName *)((longlong)pTVar39 + 0x70);
    FVar25 = *(FName *)((longlong)pTVar39 + 0x78);
    *(int *)pTVar38 = FVar14.Value;
    *(uint *)((longlong)pTVar38 + 4) = uVar15;
    *(FName *)((longlong)pTVar39 + 0x48) = FVar16;
    FVar16 = *(FName *)((longlong)pTVar36 + -0x28);
    *(FName *)((longlong)pTVar39 + 0x50) = *(FName *)((longlong)pTVar36 + -0x30);
    *(FName *)((longlong)pTVar39 + 0x58) = FVar16;
    FVar16 = *(FName *)((longlong)pTVar36 + -0x18);
    *(FName *)((longlong)pTVar39 + 0x60) = *(FName *)((longlong)pTVar36 + -0x20);
    *(FName *)((longlong)pTVar39 + 0x68) = FVar16;
    FVar16 = *(FName *)((longlong)pTVar36 + -8);
    *(FName *)((longlong)pTVar39 + 0x70) = *(FName *)((longlong)pTVar36 + -0x10);
    *(FName *)((longlong)pTVar39 + 0x78) = FVar16;
    *(int *)pTVar35 = FVar17.Value;
    *(uint *)((longlong)pTVar35 + 4) = uVar18;
    *(FName *)((longlong)pTVar36 + -0x38) = FVar19;
    *(FName *)((longlong)pTVar36 + -0x30) = FVar20;
    *(FName *)((longlong)pTVar36 + -0x28) = FVar21;
    *(FName *)((longlong)pTVar36 + -0x20) = FVar22;
    *(FName *)((longlong)pTVar36 + -0x18) = FVar23;
    *(FName *)((longlong)pTVar36 + -0x10) = FVar24;
    *(FName *)((longlong)pTVar36 + -8) = FVar25;
    goto LAB_14df12a50;
  }
  FVar26.Value = *(int *)pTVar37;
  uVar27 = *(int *)((longlong)pTVar37 + 4);
  FVar19 = *(FName *)((FNameEntryId *)(pTVar37->ElementData).Pad + 2);
  FVar20 = *(FName *)((FNameEntryId *)(pTVar37->ElementData).Pad + 4);
  FVar21 = *(FName *)((FNameEntryId *)(pTVar37->ElementData).Pad + 6);
  FVar22 = *(FName *)((FNameEntryId *)(pTVar37->ElementData).Pad + 8);
  FVar23 = *(FName *)((FNameEntryId *)(pTVar37->ElementData).Pad + 10);
  FVar24 = *(FName *)((FNameEntryId *)(pTVar37->ElementData).Pad + 0xc);
  FVar25 = *(FName *)((FNameEntryId *)(pTVar37->ElementData).Pad + 0xe);
  local_378 = local_378 + -1;
  *(int *)pTVar37 = FVar14.Value;
  *(uint *)((longlong)pTVar37 + 4) = uVar15;
  *(FName *)((FNameEntryId *)(pTVar37->ElementData).Pad + 2) = FVar16;
  FVar16 = *(FName *)((longlong)pTVar36 + -0x28);
  *(FName *)((FNameEntryId *)(pTVar37->ElementData).Pad + 4) = *(FName *)((longlong)pTVar36 + -0x30)
  ;
  *(FName *)((FNameEntryId *)(pTVar37->ElementData).Pad + 6) = FVar16;
  FVar16 = *(FName *)((longlong)pTVar36 + -0x18);
  *(FName *)((FNameEntryId *)(pTVar37->ElementData).Pad + 8) = *(FName *)((longlong)pTVar36 + -0x20)
  ;
  *(FName *)((FNameEntryId *)(pTVar37->ElementData).Pad + 10) = FVar16;
  FVar16 = *(FName *)((longlong)pTVar36 + -8);
  *(FName *)((FNameEntryId *)(pTVar37->ElementData).Pad + 0xc) =
       *(FName *)((longlong)pTVar36 + -0x10);
  *(FName *)((FNameEntryId *)(pTVar37->ElementData).Pad + 0xe) = FVar16;
  *(int *)pTVar35 = FVar26.Value;
  *(uint *)((longlong)pTVar35 + 4) = uVar27;
  *(FName *)((longlong)pTVar36 + -0x38) = FVar19;
  *(FName *)((longlong)pTVar36 + -0x30) = FVar20;
  *(FName *)((longlong)pTVar36 + -0x28) = FVar21;
  *(FName *)((longlong)pTVar36 + -0x20) = FVar22;
  *(FName *)((longlong)pTVar36 + -0x18) = FVar23;
  *(FName *)((longlong)pTVar36 + -0x10) = FVar24;
  *(FName *)((longlong)pTVar36 + -8) = FVar25;
  param_3 = local_388;
  if ((longlong)((longlong)pTVar35 + (-0x40 - (longlong)pTVar37) & 0xffffffffffffffc0U) <
      (longlong)((longlong)pTVar32 - (longlong)pTVar38 & 0xffffffffffffffc0U)) {
    if (pTVar38 < local_370) {
      *local_380 = pTVar38;
      local_380[1] = local_370;
      *(int *)(local_380 + 2) = local_378;
      local_380 = local_380 + 3;
    }
    if (pTVar35 <= pTVar37 + 1) goto LAB_14df12c21;
    local_370 = pTVar36 + -2;
    pTVar38 = pTVar37;
  }
  else {
    if (pTVar37 + 1 < pTVar35) {
      *local_380 = pTVar37;
      local_380[1] = pTVar36 + -2;
      *(int *)(local_380 + 2) = local_378;
      local_380 = local_380 + 3;
    }
    if (local_370 <= pTVar38) goto LAB_14df12c21;
  }
  iVar33 = (int)((longlong)local_370 - (longlong)pTVar38 >> 6) + 1;
  pTVar37 = pTVar38;
  if (local_378 == 0) goto LAB_14df12c0b;
  goto LAB_14df129e3;
}

// IntroSortInternal<FChainPairFK,int,FIdentityFunctor,TDereferenceWrapper<FChainPairFK,`FIKRetargetFKChainsOp::Initialize'::__l2::<lambda_1>_>_> @ 14df12d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
AlgoImpl::
IntroSortInternal<FChainPairFK,int,FIdentityFunctor,TDereferenceWrapper<FChainPairFK,_FIKRetargetFKChainsOp::Initialize_::__l2::<lambda_1>_>_>
          (FChainPairFK *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FChainPairFK,_public:_virtual_bool___cdecl_FIKRetargetFKChainsOp::Initialize(FIKRetargetProcessor_const_&,FRetargetSkeleton_const_&,FTargetSkeleton_const_&,FIKRetargetOpBase_const_*,FIKRigLogger_&)_::_2_::<lambda_1>_>
          param_4)

{
  FResolvedBoneChain *pFVar1;
  FResolvedBoneChain *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  FChainPairFK *pFVar15;
  FChainPairFK *pFVar16;
  FChainPairFK *pFVar17;
  FChainPairFK *pFVar18;
  undefined8 *puVar19;
  FChainPairFK *pFVar20;
  undefined8 *puVar21;
  int iVar22;
  FChainPairFK *pFVar23;
  longlong lVar24;
  longlong lVar25;
  FChainPairFK *pFVar26;
  int iVar27;
  int iVar28;
  float fVar29;
  undefined1 auStackY_4b8 [32];
  FIdentityFunctor local_488 [8];
  FChainPairFK **local_480;
  TDereferenceWrapper<FChainPairFK,_public:_virtual_bool___cdecl_FIKRetargetFKChainsOp::Initialize(FIKRetargetProcessor_const_&,FRetargetSkeleton_const_&,FTargetSkeleton_const_&,FIKRetargetOpBase_const_*,FIKRigLogger_&)_::_2_::<lambda_1>_>
  local_478;
  TReversePredicate<TDereferenceWrapper<FChainPairFK,_public:_virtual_bool___cdecl_FIKRetargetFKChainsOp::Initialize(FIKRetargetProcessor_const_&,FRetargetSkeleton_const_&,FTargetSkeleton_const_&,FIKRetargetOpBase_const_*,FIKRigLogger_&)_::_2_::<lambda_1>_>_>
  local_470 [3];
  FChainPairFK *local_458;
  undefined8 local_448 [32];
  FChainPairFK *local_348;
  FChainPairFK *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStackY_4b8;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar29 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar29;
    memset(local_330,0,0x2e8);
    local_480 = &local_348;
    do {
      pFVar20 = local_480[1];
      pFVar18 = *local_480;
      local_458 = local_480[2];
      iVar27 = (int)((ulonglong)((longlong)pFVar20 - (longlong)pFVar18) >> 8) + 1;
      pFVar26 = pFVar18;
      iVar28 = (int)local_458;
      if ((int)local_458 != 0) {
LAB_14df12e10:
        if (8 < iVar27) {
          lVar24 = 2;
          pFVar18 = pFVar26 + iVar27 / 2;
          puVar19 = local_448;
          do {
            uVar4 = *(undefined8 *)&(pFVar18->FKEncoder).CurrentGlobalTransforms.ArrayNum;
            dVar5 = (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[0];
            dVar6 = (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[1];
            *puVar19 = (pFVar18->FKEncoder).CurrentGlobalTransforms.AllocatorInstance.Data;
            puVar19[1] = uVar4;
            dVar7 = (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[0];
            dVar8 = (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[1];
            puVar19[2] = dVar5;
            puVar19[3] = dVar6;
            dVar5 = (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64
                    [0];
            dVar6 = (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64
                    [1];
            puVar19[4] = dVar7;
            puVar19[5] = dVar8;
            dVar7 = (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64
                    [0];
            dVar8 = (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64
                    [1];
            puVar19[6] = dVar5;
            puVar19[7] = dVar6;
            dVar5 = (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[0];
            dVar6 = (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[1];
            puVar19[8] = dVar7;
            puVar19[9] = dVar8;
            dVar7 = (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[0];
            dVar8 = (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[1];
            puVar19[10] = dVar5;
            puVar19[0xb] = dVar6;
            pFVar1 = (pFVar18->FKEncoder).BoneChain;
            uVar4 = *(undefined8 *)&(pFVar18->FKEncoder).field_0x78;
            puVar19[0xc] = dVar7;
            puVar19[0xd] = dVar8;
            puVar19[0xe] = pFVar1;
            puVar19[0xf] = uVar4;
            lVar24 = lVar24 + -1;
            pFVar18 = (FChainPairFK *)&pFVar18->FKDecoder;
            puVar19 = puVar19 + 0x10;
          } while (lVar24 != 0);
          lVar24 = 2;
          pFVar18 = pFVar26;
          pFVar23 = pFVar26 + iVar27 / 2;
          do {
            iVar27 = (pFVar18->FKEncoder).CurrentGlobalTransforms.ArrayNum;
            iVar22 = (pFVar18->FKEncoder).CurrentGlobalTransforms.ArrayMax;
            (pFVar23->FKEncoder).CurrentGlobalTransforms.AllocatorInstance.Data =
                 (pFVar18->FKEncoder).CurrentGlobalTransforms.AllocatorInstance.Data;
            (pFVar23->FKEncoder).CurrentGlobalTransforms.ArrayNum = iVar27;
            (pFVar23->FKEncoder).CurrentGlobalTransforms.ArrayMax = iVar22;
            dVar5 = (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[1];
            (pFVar23->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[0] =
                 (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[0];
            (pFVar23->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[1] = dVar5;
            dVar5 = (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[1];
            (pFVar23->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[0] =
                 (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[0];
            (pFVar23->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[1] = dVar5;
            dVar5 = (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64
                    [1];
            (pFVar23->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[0] =
                 (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[0];
            (pFVar23->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[1] =
                 dVar5;
            dVar5 = (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64
                    [1];
            (pFVar23->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64[0] =
                 (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64[0];
            (pFVar23->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64[1] =
                 dVar5;
            dVar5 = (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[1];
            (pFVar23->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[0] =
                 (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[0];
            (pFVar23->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[1] = dVar5;
            dVar5 = (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[1];
            (pFVar23->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[0] =
                 (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[0];
            (pFVar23->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[1] = dVar5;
            uVar4 = *(undefined8 *)&(pFVar18->FKEncoder).field_0x78;
            (pFVar23->FKEncoder).BoneChain = (pFVar18->FKEncoder).BoneChain;
            *(undefined8 *)&(pFVar23->FKEncoder).field_0x78 = uVar4;
            lVar24 = lVar24 + -1;
            pFVar18 = (FChainPairFK *)&pFVar18->FKDecoder;
            pFVar23 = (FChainPairFK *)&pFVar23->FKDecoder;
          } while (lVar24 != 0);
          lVar24 = 2;
          pFVar18 = pFVar26;
          puVar19 = local_448;
          do {
            uVar4 = puVar19[1];
            dVar5 = (double)puVar19[2];
            dVar6 = (double)puVar19[3];
            (pFVar18->FKEncoder).CurrentGlobalTransforms.AllocatorInstance.Data =
                 (FScriptContainerElement *)*puVar19;
            (pFVar18->FKEncoder).CurrentGlobalTransforms.ArrayNum = (int)uVar4;
            (pFVar18->FKEncoder).CurrentGlobalTransforms.ArrayMax = (int)((ulonglong)uVar4 >> 0x20);
            dVar7 = (double)puVar19[4];
            dVar8 = (double)puVar19[5];
            (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[0] = dVar5;
            (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[1] = dVar6;
            dVar5 = (double)puVar19[6];
            dVar6 = (double)puVar19[7];
            (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[0] = dVar7;
            (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[1] = dVar8;
            dVar7 = (double)puVar19[8];
            dVar8 = (double)puVar19[9];
            (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[0] =
                 dVar5;
            (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[1] =
                 dVar6;
            dVar5 = (double)puVar19[10];
            dVar6 = (double)puVar19[0xb];
            (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64[0] =
                 dVar7;
            (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64[1] =
                 dVar8;
            dVar7 = (double)puVar19[0xc];
            dVar8 = (double)puVar19[0xd];
            (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[0] = dVar5;
            (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[1] = dVar6;
            pFVar1 = (FResolvedBoneChain *)puVar19[0xe];
            uVar4 = puVar19[0xf];
            (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[0] = dVar7;
            (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[1] = dVar8;
            (pFVar18->FKEncoder).BoneChain = pFVar1;
            *(undefined8 *)&(pFVar18->FKEncoder).field_0x78 = uVar4;
            lVar24 = lVar24 + -1;
            pFVar18 = (FChainPairFK *)&pFVar18->FKDecoder;
            puVar19 = puVar19 + 0x10;
          } while (lVar24 != 0);
          pFVar23 = pFVar20 + 1;
          pFVar16 = pFVar26;
LAB_14df12f60:
          pFVar18 = pFVar16 + 1;
          if (pFVar18 <= pFVar20) goto code_r0x00014df12f6f;
          goto LAB_14df12fc0;
        }
        while (pFVar23 = pFVar26, pFVar18 = pFVar26, pFVar26 < pFVar20) {
          while (pFVar16 = pFVar23, pFVar18 = pFVar18 + 1, pFVar18 <= pFVar20) {
            pFVar1 = pFVar16->TargetBoneChain;
            if ((pFVar1->BoneIndices).ArrayNum < 1) {
              iVar28 = -1;
            }
            else {
              iVar28 = *(int *)(pFVar1->BoneIndices).AllocatorInstance.Data;
            }
            pFVar2 = pFVar18->TargetBoneChain;
            if ((pFVar2->BoneIndices).ArrayNum < 1) {
              iVar27 = -1;
            }
            else {
              iVar27 = *(int *)(pFVar2->BoneIndices).AllocatorInstance.Data;
            }
            if (iVar28 == iVar27) {
              iVar28 = ::FName::Compare(&pFVar1->ChainName,&pFVar2->ChainName);
              bVar14 = SUB41((uint)iVar28 >> 0x1f,0);
            }
            else {
              bVar14 = iVar28 < iVar27;
            }
            pFVar23 = pFVar18;
            if (bVar14 == false) {
              pFVar23 = pFVar16;
            }
          }
          pFVar23 = (FChainPairFK *)((longlong)pFVar20 + 0xffffffffffffff00);
          lVar24 = 2;
          pFVar18 = pFVar16;
          puVar19 = local_448;
          do {
            uVar4 = *(undefined8 *)&(pFVar18->FKEncoder).CurrentGlobalTransforms.ArrayNum;
            dVar5 = (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[0];
            dVar6 = (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[1];
            *puVar19 = (pFVar18->FKEncoder).CurrentGlobalTransforms.AllocatorInstance.Data;
            puVar19[1] = uVar4;
            dVar7 = (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[0];
            dVar8 = (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[1];
            puVar19[2] = dVar5;
            puVar19[3] = dVar6;
            dVar5 = (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64
                    [0];
            dVar6 = (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64
                    [1];
            puVar19[4] = dVar7;
            puVar19[5] = dVar8;
            dVar7 = (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64
                    [0];
            dVar8 = (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64
                    [1];
            puVar19[6] = dVar5;
            puVar19[7] = dVar6;
            dVar5 = (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[0];
            dVar6 = (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[1];
            puVar19[8] = dVar7;
            puVar19[9] = dVar8;
            dVar7 = (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[0];
            dVar8 = (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[1];
            puVar19[10] = dVar5;
            puVar19[0xb] = dVar6;
            pFVar1 = (pFVar18->FKEncoder).BoneChain;
            uVar4 = *(undefined8 *)&(pFVar18->FKEncoder).field_0x78;
            puVar19[0xc] = dVar7;
            puVar19[0xd] = dVar8;
            puVar19[0xe] = pFVar1;
            puVar19[0xf] = uVar4;
            lVar24 = lVar24 + -1;
            pFVar18 = (FChainPairFK *)&pFVar18->FKDecoder;
            puVar19 = puVar19 + 0x10;
          } while (lVar24 != 0);
          lVar24 = 2;
          pFVar18 = pFVar20;
          do {
            iVar28 = (pFVar18->FKEncoder).CurrentGlobalTransforms.ArrayNum;
            iVar27 = (pFVar18->FKEncoder).CurrentGlobalTransforms.ArrayMax;
            (pFVar16->FKEncoder).CurrentGlobalTransforms.AllocatorInstance.Data =
                 (pFVar18->FKEncoder).CurrentGlobalTransforms.AllocatorInstance.Data;
            (pFVar16->FKEncoder).CurrentGlobalTransforms.ArrayNum = iVar28;
            (pFVar16->FKEncoder).CurrentGlobalTransforms.ArrayMax = iVar27;
            dVar5 = (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[1];
            (pFVar16->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[0] =
                 (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[0];
            (pFVar16->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[1] = dVar5;
            dVar5 = (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[1];
            (pFVar16->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[0] =
                 (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[0];
            (pFVar16->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[1] = dVar5;
            dVar5 = (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64
                    [1];
            (pFVar16->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[0] =
                 (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[0];
            (pFVar16->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[1] =
                 dVar5;
            dVar5 = (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64
                    [1];
            (pFVar16->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64[0] =
                 (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64[0];
            (pFVar16->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64[1] =
                 dVar5;
            dVar5 = (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[1];
            (pFVar16->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[0] =
                 (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[0];
            (pFVar16->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[1] = dVar5;
            dVar5 = (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[1];
            (pFVar16->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[0] =
                 (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[0];
            (pFVar16->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[1] = dVar5;
            uVar4 = *(undefined8 *)&(pFVar18->FKEncoder).field_0x78;
            (pFVar16->FKEncoder).BoneChain = (pFVar18->FKEncoder).BoneChain;
            *(undefined8 *)&(pFVar16->FKEncoder).field_0x78 = uVar4;
            lVar24 = lVar24 + -1;
            pFVar18 = (FChainPairFK *)&pFVar18->FKDecoder;
            pFVar16 = (FChainPairFK *)&pFVar16->FKDecoder;
          } while (lVar24 != 0);
          lVar24 = 2;
          puVar19 = local_448;
          pFVar18 = pFVar20;
          do {
            uVar4 = puVar19[1];
            dVar5 = (double)puVar19[2];
            dVar6 = (double)puVar19[3];
            (pFVar18->FKEncoder).CurrentGlobalTransforms.AllocatorInstance.Data =
                 (FScriptContainerElement *)*puVar19;
            (pFVar18->FKEncoder).CurrentGlobalTransforms.ArrayNum = (int)uVar4;
            (pFVar18->FKEncoder).CurrentGlobalTransforms.ArrayMax = (int)((ulonglong)uVar4 >> 0x20);
            dVar7 = (double)puVar19[4];
            dVar8 = (double)puVar19[5];
            (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[0] = dVar5;
            (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[1] = dVar6;
            dVar5 = (double)puVar19[6];
            dVar6 = (double)puVar19[7];
            (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[0] = dVar7;
            (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[1] = dVar8;
            dVar7 = (double)puVar19[8];
            dVar8 = (double)puVar19[9];
            (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[0] =
                 dVar5;
            (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[1] =
                 dVar6;
            dVar9 = (double)puVar19[10];
            dVar10 = (double)puVar19[0xb];
            (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64[0] =
                 dVar7;
            (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64[1] =
                 dVar8;
            dVar5 = (double)puVar19[0xc];
            dVar6 = (double)puVar19[0xd];
            (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[0] = dVar9;
            (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[1] = dVar10;
            pFVar1 = (FResolvedBoneChain *)puVar19[0xe];
            uVar4 = puVar19[0xf];
            (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[0] = dVar5;
            (pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[1] = dVar6;
            (pFVar18->FKEncoder).BoneChain = pFVar1;
            *(undefined8 *)&(pFVar18->FKEncoder).field_0x78 = uVar4;
            lVar24 = lVar24 + -1;
            puVar19 = puVar19 + 0x10;
            pFVar18 = (FChainPairFK *)&pFVar18->FKDecoder;
            pFVar20 = pFVar23;
          } while (lVar24 != 0);
        }
        goto LAB_14df136c5;
      }
LAB_14df13325:
      local_488[0] = param_3;
      local_478.Predicate = param_4.Predicate;
      if (iVar27 < 0) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Num >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                            ,0xb9,L"Algo::HeapSortInternal called with negative count");
        if (bVar14) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
LAB_14df13537:
        local_470[0].Predicate = &local_478;
        HeapifyInternal<FChainPairFK,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FChainPairFK,_FIKRetargetFKChainsOp::Initialize_::__l2::<lambda_1>_>_>_>
                  (pFVar18,iVar27,param_3,&local_478);
        iVar27 = iVar27 + -1;
        if (0 < iVar27) {
          lVar24 = (longlong)iVar27 << 8;
          do {
            puVar19 = (undefined8 *)
                      ((longlong)
                       (&(pFVar18->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY + -1) +
                      lVar24);
            lVar25 = 2;
            pFVar20 = pFVar18;
            puVar21 = local_448;
            do {
              uVar4 = *(undefined8 *)&(pFVar20->FKEncoder).CurrentGlobalTransforms.ArrayNum;
              dVar5 = (pFVar20->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64
                      [0];
              dVar6 = (pFVar20->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64
                      [1];
              *puVar21 = (pFVar20->FKEncoder).CurrentGlobalTransforms.AllocatorInstance.Data;
              puVar21[1] = uVar4;
              dVar7 = (pFVar20->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64
                      [0];
              dVar8 = (pFVar20->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64
                      [1];
              puVar21[2] = dVar5;
              puVar21[3] = dVar6;
              dVar5 = (pFVar20->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.
                      m128d_f64[0];
              dVar6 = (pFVar20->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.
                      m128d_f64[1];
              puVar21[4] = dVar7;
              puVar21[5] = dVar8;
              dVar7 = (pFVar20->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.
                      m128d_f64[0];
              dVar8 = (pFVar20->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.
                      m128d_f64[1];
              puVar21[6] = dVar5;
              puVar21[7] = dVar6;
              dVar5 = (pFVar20->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[0]
              ;
              dVar6 = (pFVar20->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[1]
              ;
              puVar21[8] = dVar7;
              puVar21[9] = dVar8;
              dVar7 = (pFVar20->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[0]
              ;
              dVar8 = (pFVar20->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[1]
              ;
              puVar21[10] = dVar5;
              puVar21[0xb] = dVar6;
              pFVar1 = (pFVar20->FKEncoder).BoneChain;
              uVar4 = *(undefined8 *)&(pFVar20->FKEncoder).field_0x78;
              puVar21[0xc] = dVar7;
              puVar21[0xd] = dVar8;
              puVar21[0xe] = pFVar1;
              puVar21[0xf] = uVar4;
              lVar25 = lVar25 + -1;
              pFVar20 = (FChainPairFK *)&pFVar20->FKDecoder;
              puVar21 = puVar21 + 0x10;
            } while (lVar25 != 0);
            lVar25 = 2;
            pFVar20 = pFVar18;
            puVar21 = puVar19;
            do {
              uVar4 = puVar21[1];
              (pFVar20->FKEncoder).CurrentGlobalTransforms.AllocatorInstance.Data =
                   (FScriptContainerElement *)*puVar21;
              (pFVar20->FKEncoder).CurrentGlobalTransforms.ArrayNum = (int)uVar4;
              (pFVar20->FKEncoder).CurrentGlobalTransforms.ArrayMax =
                   (int)((ulonglong)uVar4 >> 0x20);
              dVar5 = (double)puVar21[3];
              (pFVar20->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[0] =
                   (double)puVar21[2];
              (pFVar20->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[1] =
                   dVar5;
              dVar5 = (double)puVar21[5];
              (pFVar20->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[0] =
                   (double)puVar21[4];
              (pFVar20->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[1] =
                   dVar5;
              dVar5 = (double)puVar21[7];
              (pFVar20->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[0] =
                   (double)puVar21[6];
              (pFVar20->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[1] =
                   dVar5;
              dVar5 = (double)puVar21[9];
              (pFVar20->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64[0] =
                   (double)puVar21[8];
              (pFVar20->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64[1] =
                   dVar5;
              dVar5 = (double)puVar21[0xb];
              (pFVar20->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[0] =
                   (double)puVar21[10];
              (pFVar20->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[1] = dVar5
              ;
              dVar5 = (double)puVar21[0xd];
              (pFVar20->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[0] =
                   (double)puVar21[0xc];
              (pFVar20->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[1] = dVar5
              ;
              uVar4 = puVar21[0xf];
              (pFVar20->FKEncoder).BoneChain = (FResolvedBoneChain *)puVar21[0xe];
              *(undefined8 *)&(pFVar20->FKEncoder).field_0x78 = uVar4;
              lVar25 = lVar25 + -1;
              pFVar20 = (FChainPairFK *)&pFVar20->FKDecoder;
              puVar21 = puVar21 + 0x10;
            } while (lVar25 != 0);
            lVar25 = 2;
            puVar21 = local_448;
            do {
              uVar4 = puVar21[1];
              uVar11 = puVar21[2];
              uVar12 = puVar21[3];
              *puVar19 = *puVar21;
              puVar19[1] = uVar4;
              uVar4 = puVar21[4];
              uVar13 = puVar21[5];
              puVar19[2] = uVar11;
              puVar19[3] = uVar12;
              uVar11 = puVar21[6];
              uVar12 = puVar21[7];
              puVar19[4] = uVar4;
              puVar19[5] = uVar13;
              uVar4 = puVar21[8];
              uVar13 = puVar21[9];
              puVar19[6] = uVar11;
              puVar19[7] = uVar12;
              uVar11 = puVar21[10];
              uVar12 = puVar21[0xb];
              puVar19[8] = uVar4;
              puVar19[9] = uVar13;
              uVar4 = puVar21[0xc];
              uVar13 = puVar21[0xd];
              puVar19[10] = uVar11;
              puVar19[0xb] = uVar12;
              uVar11 = puVar21[0xe];
              uVar12 = puVar21[0xf];
              puVar19[0xc] = uVar4;
              puVar19[0xd] = uVar13;
              puVar19[0xe] = uVar11;
              puVar19[0xf] = uVar12;
              lVar25 = lVar25 + -1;
              puVar21 = puVar21 + 0x10;
              puVar19 = puVar19 + 0x10;
            } while (lVar25 != 0);
            HeapSiftDown<FChainPairFK,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FChainPairFK,_FIKRetargetFKChainsOp::Initialize_::__l2::<lambda_1>_>_>_>
                      (pFVar18,0,iVar27,local_488,local_470);
            iVar27 = iVar27 + -1;
            lVar24 = lVar24 + -0x100;
          } while (0 < iVar27);
        }
      }
      else if (iVar27 != 0) goto LAB_14df13537;
LAB_14df136c5:
      local_480 = local_480 + -3;
    } while (&local_348 <= local_480);
  }
  return;
code_r0x00014df12f6f:
  pFVar1 = pFVar26->TargetBoneChain;
  if ((pFVar1->BoneIndices).ArrayNum < 1) {
    iVar27 = -1;
  }
  else {
    iVar27 = *(int *)(pFVar1->BoneIndices).AllocatorInstance.Data;
  }
  pFVar2 = pFVar16[1].TargetBoneChain;
  if ((pFVar2->BoneIndices).ArrayNum < 1) {
    iVar22 = -1;
  }
  else {
    iVar22 = *(int *)(pFVar2->BoneIndices).AllocatorInstance.Data;
  }
  if (iVar27 == iVar22) {
    iVar27 = ::FName::Compare(&pFVar1->ChainName,&pFVar2->ChainName);
    bVar14 = SUB41((uint)iVar27 >> 0x1f,0);
  }
  else {
    bVar14 = iVar27 < iVar22;
  }
  pFVar16 = pFVar18;
  if (bVar14 == false) goto LAB_14df12f60;
LAB_14df12fc0:
  do {
    pFVar16 = pFVar23;
    pFVar23 = pFVar16 + -1;
    if (pFVar23 <= pFVar26) break;
    pFVar1 = pFVar16[-1].TargetBoneChain;
    if ((pFVar1->BoneIndices).ArrayNum < 1) {
      iVar27 = -1;
    }
    else {
      iVar27 = *(int *)(pFVar1->BoneIndices).AllocatorInstance.Data;
    }
    pFVar2 = pFVar26->TargetBoneChain;
    if ((pFVar2->BoneIndices).ArrayNum < 1) {
      iVar22 = -1;
    }
    else {
      iVar22 = *(int *)(pFVar2->BoneIndices).AllocatorInstance.Data;
    }
    if (iVar27 == iVar22) {
      iVar27 = ::FName::Compare(&pFVar1->ChainName,&pFVar2->ChainName);
      bVar14 = SUB41((uint)iVar27 >> 0x1f,0);
    }
    else {
      bVar14 = iVar27 < iVar22;
    }
  } while (bVar14 == false);
  puVar19 = local_448;
  lVar24 = 2;
  pFVar17 = pFVar26;
  pFVar15 = pFVar18;
  if (pFVar18 <= pFVar23) {
    do {
      uVar4 = *(undefined8 *)&(pFVar15->FKEncoder).CurrentGlobalTransforms.ArrayNum;
      dVar5 = (pFVar15->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[0];
      dVar6 = (pFVar15->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[1];
      *puVar19 = (pFVar15->FKEncoder).CurrentGlobalTransforms.AllocatorInstance.Data;
      puVar19[1] = uVar4;
      dVar7 = (pFVar15->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[0];
      dVar8 = (pFVar15->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[1];
      puVar19[2] = dVar5;
      puVar19[3] = dVar6;
      dVar5 = (pFVar15->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[0];
      dVar6 = (pFVar15->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[1];
      puVar19[4] = dVar7;
      puVar19[5] = dVar8;
      dVar7 = (pFVar15->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64[0];
      dVar8 = (pFVar15->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64[1];
      puVar19[6] = dVar5;
      puVar19[7] = dVar6;
      dVar5 = (pFVar15->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[0];
      dVar6 = (pFVar15->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[1];
      puVar19[8] = dVar7;
      puVar19[9] = dVar8;
      dVar7 = (pFVar15->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[0];
      dVar8 = (pFVar15->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[1];
      puVar19[10] = dVar5;
      puVar19[0xb] = dVar6;
      pFVar1 = (pFVar15->FKEncoder).BoneChain;
      uVar4 = *(undefined8 *)&(pFVar15->FKEncoder).field_0x78;
      puVar19[0xc] = dVar7;
      puVar19[0xd] = dVar8;
      puVar19[0xe] = pFVar1;
      puVar19[0xf] = uVar4;
      lVar24 = lVar24 + -1;
      pFVar15 = (FChainPairFK *)&pFVar15->FKDecoder;
      puVar19 = puVar19 + 0x10;
    } while (lVar24 != 0);
    lVar24 = 2;
    pFVar16 = pFVar18;
    pFVar17 = pFVar23;
    do {
      iVar27 = (pFVar17->FKEncoder).CurrentGlobalTransforms.ArrayNum;
      iVar22 = (pFVar17->FKEncoder).CurrentGlobalTransforms.ArrayMax;
      (pFVar16->FKEncoder).CurrentGlobalTransforms.AllocatorInstance.Data =
           (pFVar17->FKEncoder).CurrentGlobalTransforms.AllocatorInstance.Data;
      (pFVar16->FKEncoder).CurrentGlobalTransforms.ArrayNum = iVar27;
      (pFVar16->FKEncoder).CurrentGlobalTransforms.ArrayMax = iVar22;
      dVar5 = (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[1];
      (pFVar16->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[0] =
           (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[0];
      (pFVar16->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[1] = dVar5;
      dVar5 = (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[1];
      (pFVar16->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[0] =
           (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[0];
      (pFVar16->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[1] = dVar5;
      dVar5 = (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[1];
      (pFVar16->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[0] =
           (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[0];
      (pFVar16->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[1] = dVar5;
      dVar5 = (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64[1];
      (pFVar16->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64[0] =
           (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64[0];
      (pFVar16->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64[1] = dVar5;
      dVar5 = (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[1];
      (pFVar16->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[0] =
           (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[0];
      (pFVar16->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[1] = dVar5;
      dVar5 = (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[1];
      (pFVar16->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[0] =
           (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[0];
      (pFVar16->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[1] = dVar5;
      uVar4 = *(undefined8 *)&(pFVar17->FKEncoder).field_0x78;
      (pFVar16->FKEncoder).BoneChain = (pFVar17->FKEncoder).BoneChain;
      *(undefined8 *)&(pFVar16->FKEncoder).field_0x78 = uVar4;
      lVar24 = lVar24 + -1;
      pFVar16 = (FChainPairFK *)&pFVar16->FKDecoder;
      pFVar17 = (FChainPairFK *)&pFVar17->FKDecoder;
    } while (lVar24 != 0);
    lVar24 = 2;
    pFVar17 = pFVar23;
    puVar19 = local_448;
    do {
      uVar4 = puVar19[1];
      dVar5 = (double)puVar19[2];
      dVar6 = (double)puVar19[3];
      (pFVar17->FKEncoder).CurrentGlobalTransforms.AllocatorInstance.Data =
           (FScriptContainerElement *)*puVar19;
      (pFVar17->FKEncoder).CurrentGlobalTransforms.ArrayNum = (int)uVar4;
      (pFVar17->FKEncoder).CurrentGlobalTransforms.ArrayMax = (int)((ulonglong)uVar4 >> 0x20);
      dVar7 = (double)puVar19[4];
      dVar8 = (double)puVar19[5];
      (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[0] = dVar5;
      (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[1] = dVar6;
      dVar5 = (double)puVar19[6];
      dVar6 = (double)puVar19[7];
      (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[0] = dVar7;
      (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[1] = dVar8;
      dVar7 = (double)puVar19[8];
      dVar8 = (double)puVar19[9];
      (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[0] = dVar5;
      (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[1] = dVar6;
      dVar9 = (double)puVar19[10];
      dVar10 = (double)puVar19[0xb];
      (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64[0] = dVar7;
      (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64[1] = dVar8;
      dVar5 = (double)puVar19[0xc];
      dVar6 = (double)puVar19[0xd];
      (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[0] = dVar9;
      (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[1] = dVar10;
      pFVar1 = (FResolvedBoneChain *)puVar19[0xe];
      uVar4 = puVar19[0xf];
      (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[0] = dVar5;
      (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[1] = dVar6;
      (pFVar17->FKEncoder).BoneChain = pFVar1;
      *(undefined8 *)&(pFVar17->FKEncoder).field_0x78 = uVar4;
      lVar24 = lVar24 + -1;
      pFVar17 = (FChainPairFK *)&pFVar17->FKDecoder;
      puVar19 = puVar19 + 0x10;
      pFVar16 = pFVar18;
    } while (lVar24 != 0);
    goto LAB_14df12f60;
  }
  do {
    uVar4 = *(undefined8 *)&(pFVar17->FKEncoder).CurrentGlobalTransforms.ArrayNum;
    dVar5 = (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[0];
    dVar6 = (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[1];
    *puVar19 = (pFVar17->FKEncoder).CurrentGlobalTransforms.AllocatorInstance.Data;
    puVar19[1] = uVar4;
    dVar7 = (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[0];
    dVar8 = (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[1];
    puVar19[2] = dVar5;
    puVar19[3] = dVar6;
    dVar5 = (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[0];
    dVar6 = (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[1];
    puVar19[4] = dVar7;
    puVar19[5] = dVar8;
    dVar7 = (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64[0];
    dVar8 = (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64[1];
    puVar19[6] = dVar5;
    puVar19[7] = dVar6;
    dVar5 = (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[0];
    dVar6 = (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[1];
    puVar19[8] = dVar7;
    puVar19[9] = dVar8;
    dVar7 = (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[0];
    dVar8 = (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[1];
    puVar19[10] = dVar5;
    puVar19[0xb] = dVar6;
    pFVar1 = (pFVar17->FKEncoder).BoneChain;
    uVar4 = *(undefined8 *)&(pFVar17->FKEncoder).field_0x78;
    puVar19[0xc] = dVar7;
    puVar19[0xd] = dVar8;
    puVar19[0xe] = pFVar1;
    puVar19[0xf] = uVar4;
    lVar24 = lVar24 + -1;
    pFVar17 = (FChainPairFK *)&pFVar17->FKDecoder;
    puVar19 = puVar19 + 0x10;
  } while (lVar24 != 0);
  lVar24 = 2;
  pFVar17 = pFVar26;
  pFVar15 = pFVar23;
  do {
    iVar27 = (pFVar15->FKEncoder).CurrentGlobalTransforms.ArrayNum;
    iVar22 = (pFVar15->FKEncoder).CurrentGlobalTransforms.ArrayMax;
    (pFVar17->FKEncoder).CurrentGlobalTransforms.AllocatorInstance.Data =
         (pFVar15->FKEncoder).CurrentGlobalTransforms.AllocatorInstance.Data;
    (pFVar17->FKEncoder).CurrentGlobalTransforms.ArrayNum = iVar27;
    (pFVar17->FKEncoder).CurrentGlobalTransforms.ArrayMax = iVar22;
    dVar5 = (pFVar15->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[1];
    (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[0] =
         (pFVar15->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[0];
    (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[1] = dVar5;
    dVar5 = (pFVar15->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[1];
    (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[0] =
         (pFVar15->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[0];
    (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[1] = dVar5;
    dVar5 = (pFVar15->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[1];
    (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[0] =
         (pFVar15->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[0];
    (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[1] = dVar5;
    dVar5 = (pFVar15->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64[1];
    (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64[0] =
         (pFVar15->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64[0];
    (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64[1] = dVar5;
    dVar5 = (pFVar15->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[1];
    (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[0] =
         (pFVar15->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[0];
    (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[1] = dVar5;
    dVar5 = (pFVar15->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[1];
    (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[0] =
         (pFVar15->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[0];
    (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[1] = dVar5;
    uVar4 = *(undefined8 *)&(pFVar15->FKEncoder).field_0x78;
    (pFVar17->FKEncoder).BoneChain = (pFVar15->FKEncoder).BoneChain;
    *(undefined8 *)&(pFVar17->FKEncoder).field_0x78 = uVar4;
    lVar24 = lVar24 + -1;
    pFVar17 = (FChainPairFK *)&pFVar17->FKDecoder;
    pFVar15 = (FChainPairFK *)&pFVar15->FKDecoder;
  } while (lVar24 != 0);
  lVar24 = 2;
  pFVar17 = pFVar23;
  puVar19 = local_448;
  do {
    uVar4 = puVar19[1];
    dVar5 = (double)puVar19[2];
    dVar6 = (double)puVar19[3];
    (pFVar17->FKEncoder).CurrentGlobalTransforms.AllocatorInstance.Data =
         (FScriptContainerElement *)*puVar19;
    (pFVar17->FKEncoder).CurrentGlobalTransforms.ArrayNum = (int)uVar4;
    (pFVar17->FKEncoder).CurrentGlobalTransforms.ArrayMax = (int)((ulonglong)uVar4 >> 0x20);
    dVar7 = (double)puVar19[4];
    dVar8 = (double)puVar19[5];
    (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[0] = dVar5;
    (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[1] = dVar6;
    dVar5 = (double)puVar19[6];
    dVar6 = (double)puVar19[7];
    (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[0] = dVar7;
    (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[1] = dVar8;
    dVar7 = (double)puVar19[8];
    dVar8 = (double)puVar19[9];
    (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[0] = dVar5;
    (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[1] = dVar6;
    dVar5 = (double)puVar19[10];
    dVar6 = (double)puVar19[0xb];
    (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64[0] = dVar7;
    (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64[1] = dVar8;
    dVar7 = (double)puVar19[0xc];
    dVar8 = (double)puVar19[0xd];
    (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[0] = dVar5;
    (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[1] = dVar6;
    pFVar1 = (FResolvedBoneChain *)puVar19[0xe];
    uVar4 = puVar19[0xf];
    (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[0] = dVar7;
    (pFVar17->FKEncoder).ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[1] = dVar8;
    (pFVar17->FKEncoder).BoneChain = pFVar1;
    *(undefined8 *)&(pFVar17->FKEncoder).field_0x78 = uVar4;
    lVar24 = lVar24 + -1;
    pFVar17 = (FChainPairFK *)&pFVar17->FKDecoder;
    puVar19 = puVar19 + 0x10;
  } while (lVar24 != 0);
  iVar28 = iVar28 + -1;
  if ((longlong)((longlong)pFVar23 + (-0x100 - (longlong)pFVar26) & 0xffffffffffffff00U) <
      (longlong)((longlong)pFVar20 - (longlong)pFVar18 & 0xffffffffffffff00U)) {
    if (pFVar18 < pFVar20) {
      *local_480 = pFVar18;
      local_480[1] = pFVar20;
      *(int *)(local_480 + 2) = iVar28;
      local_480 = local_480 + 3;
    }
    if (pFVar23 <= pFVar26 + 1) goto LAB_14df136c5;
    pFVar20 = pFVar16 + -2;
    pFVar18 = pFVar26;
  }
  else {
    if (pFVar26 + 1 < pFVar23) {
      *local_480 = pFVar26;
      local_480[1] = pFVar16 + -2;
      *(int *)(local_480 + 2) = iVar28;
      local_480 = local_480 + 3;
    }
    if (pFVar20 <= pFVar18) goto LAB_14df136c5;
  }
  iVar27 = (int)((ulonglong)((longlong)pFVar20 - (longlong)pFVar18) >> 8) + 1;
  pFVar26 = pFVar18;
  if (iVar28 == 0) goto LAB_14df13325;
  goto LAB_14df12e10;
}

// IntroSortInternal<FResolvedBoneChain,int,FIdentityFunctor,TDereferenceWrapper<FResolvedBoneChain,`FRetargeterBoneChains::Initialize'::__l2::<lambda_2>_>_> @ 14df13730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
AlgoImpl::
IntroSortInternal<FResolvedBoneChain,int,FIdentityFunctor,TDereferenceWrapper<FResolvedBoneChain,_FRetargeterBoneChains::Initialize_::__l2::<lambda_2>_>_>
          (FResolvedBoneChain *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FResolvedBoneChain,_public:_bool___cdecl_FRetargeterBoneChains::Initialize(UIKRetargeter_const_*,TArray<UIKRigDefinition_const_*,TSizedDefaultAllocator<32>_>_const_&,FRetargetSkeleton_const_&,FRetargetSkeleton_const_&,FIKRigLogger_&)_::_2_::<lambda_2>_>
          param_4)

{
  FName *pFVar1;
  code *pcVar2;
  FName FVar3;
  undefined8 uVar4;
  double dVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined5 uVar8;
  uint uVar9;
  FNameEntryId FVar10;
  uint uVar11;
  bool bVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  FResolvedBoneChain *pFVar16;
  FResolvedBoneChain *pFVar17;
  <lambda_2> *p<Var18;
  FResolvedBoneChain *pFVar19;
  FResolvedBoneChain *this;
  FResolvedBoneChain *pFVar20;
  int iVar21;
  FResolvedBoneChain *pFVar22;
  float fVar23;
  undefined1 auStackY_4a8 [32];
  FIdentityFunctor local_478 [8];
  TDereferenceWrapper<FResolvedBoneChain,_public:_bool___cdecl_FRetargeterBoneChains::Initialize(UIKRetargeter_const_*,TArray<UIKRigDefinition_const_*,TSizedDefaultAllocator<32>_>_const_&,FRetargetSkeleton_const_&,FRetargetSkeleton_const_&,FIKRigLogger_&)_::_2_::<lambda_2>_>
  local_470;
  int local_468;
  TReversePredicate<TDereferenceWrapper<FResolvedBoneChain,_public:_bool___cdecl_FRetargeterBoneChains::Initialize(UIKRetargeter_const_*,TArray<UIKRigDefinition_const_*,TSizedDefaultAllocator<32>_>_const_&,FRetargetSkeleton_const_&,FRetargetSkeleton_const_&,FIKRigLogger_&)_::_2_::<lambda_2>_>_>
  local_460 [3];
  FRetargeterBoneChains *local_448;
  FName local_438;
  FName FStack_430;
  FName local_428;
  FName FStack_420;
  FName local_418;
  FName FStack_410;
  FName local_408;
  FName FStack_400;
  FName local_3f8;
  FName FStack_3f0;
  FName local_3e8;
  FName FStack_3e0;
  FName local_3d8;
  FName FStack_3d0;
  FName local_3c8;
  FName FStack_3c0;
  FName local_3b8;
  FName FStack_3b0;
  FName local_3a8;
  FName FStack_3a0;
  FName local_398;
  FName FStack_390;
  FName local_388;
  FName FStack_380;
  FName local_378;
  FName FStack_370;
  FName local_368;
  FName FStack_360;
  FName local_358;
  FName FStack_350;
  <lambda_2> local_348;
  FResolvedBoneChain *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStackY_4a8;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348.__this = (FRetargeterBoneChains *)param_1;
    fVar23 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar23;
    memset(local_330,0,0x2e8);
    p<Var18 = &local_348;
    do {
      pFVar19 = (FResolvedBoneChain *)p<Var18[1].__this;
      pFVar20 = (FResolvedBoneChain *)p<Var18->__this;
      local_448 = p<Var18[2].__this;
      lVar14 = ((longlong)pFVar19 - (longlong)pFVar20) +
               SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)pFVar19 - (longlong)pFVar20),
                      8);
      iVar21 = ((int)(lVar14 >> 7) - (int)(lVar14 >> 0x3f)) + 1;
      local_468 = (int)local_448;
      this = pFVar20;
      local_470.Predicate = p<Var18;
      if ((int)local_448 != 0) {
LAB_14df13830:
        if (8 < iVar21) {
          pFVar20 = this + iVar21 / 2;
          local_438 = pFVar20->ChainName;
          FStack_430 = pFVar20->StartBone;
          local_428 = pFVar20->EndBone;
          FStack_420 = pFVar20->IKGoalName;
          local_418 = (FName)(pFVar20->RefPoseGlobalTransforms).AllocatorInstance.Data;
          FStack_410.ComparisonIndex.Value = (pFVar20->RefPoseGlobalTransforms).ArrayNum;
          FStack_410.Number = (pFVar20->RefPoseGlobalTransforms).ArrayMax;
          local_408 = (FName)(pFVar20->RefPoseLocalTransforms).AllocatorInstance.Data;
          FStack_400.ComparisonIndex.Value = (pFVar20->RefPoseLocalTransforms).ArrayNum;
          FStack_400.Number = (pFVar20->RefPoseLocalTransforms).ArrayMax;
          local_3f8 = (FName)(pFVar20->CurrentLocalTransforms).AllocatorInstance.Data;
          FStack_3f0.ComparisonIndex.Value = (pFVar20->CurrentLocalTransforms).ArrayNum;
          FStack_3f0.Number = (pFVar20->CurrentLocalTransforms).ArrayMax;
          local_3e8 = (FName)(pFVar20->Params).AllocatorInstance.Data;
          FStack_3e0.ComparisonIndex.Value = (pFVar20->Params).ArrayNum;
          FStack_3e0.Number = (pFVar20->Params).ArrayMax;
          local_3d8 = (FName)(pFVar20->BoneIndices).AllocatorInstance.Data;
          FStack_3d0.ComparisonIndex.Value = (pFVar20->BoneIndices).ArrayNum;
          FStack_3d0.Number = (pFVar20->BoneIndices).ArrayMax;
          local_3c8.ComparisonIndex.Value = (uint)pFVar20->InitialChainLength;
          local_3c8.Number = pFVar20->ChainParentBoneIndex;
          FStack_3c0 = *(FName *)&pFVar20->field_0x78;
          local_3b8 = (FName)(pFVar20->ChainParentInitialGlobalTransform).Rotation.XY.m128d_f64[0];
          FStack_3b0 = (FName)(pFVar20->ChainParentInitialGlobalTransform).Rotation.XY.m128d_f64[1];
          local_3a8 = (FName)(pFVar20->ChainParentInitialGlobalTransform).Rotation.ZW.m128d_f64[0];
          FStack_3a0 = (FName)(pFVar20->ChainParentInitialGlobalTransform).Rotation.ZW.m128d_f64[1];
          local_398 = (FName)(pFVar20->ChainParentInitialGlobalTransform).Translation.XY.m128d_f64
                             [0];
          FStack_390 = (FName)(pFVar20->ChainParentInitialGlobalTransform).Translation.XY.m128d_f64
                              [1];
          local_388 = (FName)(pFVar20->ChainParentInitialGlobalTransform).Translation.ZW.m128d_f64
                             [0];
          FStack_380 = (FName)(pFVar20->ChainParentInitialGlobalTransform).Translation.ZW.m128d_f64
                              [1];
          local_378 = (FName)(pFVar20->ChainParentInitialGlobalTransform).Scale3D.XY.m128d_f64[0];
          FStack_370 = (FName)(pFVar20->ChainParentInitialGlobalTransform).Scale3D.XY.m128d_f64[1];
          local_368 = (FName)(pFVar20->ChainParentInitialGlobalTransform).Scale3D.ZW.m128d_f64[0];
          FStack_360 = (FName)(pFVar20->ChainParentInitialGlobalTransform).Scale3D.ZW.m128d_f64[1];
          local_358.ComparisonIndex.Value._0_1_ = pFVar20->bFoundStartBone;
          local_358.ComparisonIndex.Value._1_1_ = pFVar20->bFoundEndBone;
          local_358.ComparisonIndex.Value._2_1_ = pFVar20->bEndIsStartOrChildOfStart;
          local_358._3_5_ = *(undefined5 *)&pFVar20->field_0xe3;
          FStack_350 = *(FName *)&pFVar20->field_0xe8;
          FVar3 = *(FName *)&(this->StartBone).ComparisonIndex;
          pFVar20->ChainName =
               (FName)(((TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_> *)&this->ChainName)
                      ->AllocatorInstance).Data;
          pFVar20->StartBone = FVar3;
          uVar6 = (this->EndBone).Number;
          FVar3 = this->IKGoalName;
          (pFVar20->EndBone).ComparisonIndex = (uint)(this->EndBone).ComparisonIndex;
          (pFVar20->EndBone).Number = uVar6;
          pFVar20->IKGoalName = FVar3;
          iVar21 = (this->RefPoseGlobalTransforms).ArrayNum;
          iVar13 = (this->RefPoseGlobalTransforms).ArrayMax;
          (pFVar20->RefPoseGlobalTransforms).AllocatorInstance.Data =
               (this->RefPoseGlobalTransforms).AllocatorInstance.Data;
          (pFVar20->RefPoseGlobalTransforms).ArrayNum = iVar21;
          (pFVar20->RefPoseGlobalTransforms).ArrayMax = iVar13;
          iVar21 = (this->RefPoseLocalTransforms).ArrayNum;
          iVar13 = (this->RefPoseLocalTransforms).ArrayMax;
          (pFVar20->RefPoseLocalTransforms).AllocatorInstance.Data =
               (this->RefPoseLocalTransforms).AllocatorInstance.Data;
          (pFVar20->RefPoseLocalTransforms).ArrayNum = iVar21;
          (pFVar20->RefPoseLocalTransforms).ArrayMax = iVar13;
          iVar21 = (this->CurrentLocalTransforms).ArrayNum;
          iVar13 = (this->CurrentLocalTransforms).ArrayMax;
          (pFVar20->CurrentLocalTransforms).AllocatorInstance.Data =
               (this->CurrentLocalTransforms).AllocatorInstance.Data;
          (pFVar20->CurrentLocalTransforms).ArrayNum = iVar21;
          (pFVar20->CurrentLocalTransforms).ArrayMax = iVar13;
          iVar21 = (this->Params).ArrayNum;
          iVar13 = (this->Params).ArrayMax;
          (pFVar20->Params).AllocatorInstance.Data = (this->Params).AllocatorInstance.Data;
          (pFVar20->Params).ArrayNum = iVar21;
          (pFVar20->Params).ArrayMax = iVar13;
          uVar4 = *(undefined8 *)&(this->BoneIndices).ArrayNum;
          (pFVar20->BoneIndices).AllocatorInstance.Data =
               (FScriptContainerElement *)(this->BoneIndices).AllocatorInstance.Data;
          (pFVar20->BoneIndices).ArrayNum = (int)uVar4;
          (pFVar20->BoneIndices).ArrayMax = (int)((ulonglong)uVar4 >> 0x20);
          iVar21 = this->ChainParentBoneIndex;
          uVar4 = *(undefined8 *)&this->field_0x78;
          pFVar20->InitialChainLength = this->InitialChainLength;
          pFVar20->ChainParentBoneIndex = iVar21;
          *(undefined8 *)&pFVar20->field_0x78 = uVar4;
          dVar5 = *(double *)
                   ((longlong)(this->ChainParentInitialGlobalTransform).Rotation.XY.m128d_f64 + 8);
          (pFVar20->ChainParentInitialGlobalTransform).Rotation.XY.m128d_f64[0] =
               (this->ChainParentInitialGlobalTransform).Rotation.XY.m128d_f64[0];
          (pFVar20->ChainParentInitialGlobalTransform).Rotation.XY.m128d_f64[1] = dVar5;
          dVar5 = *(double *)
                   ((longlong)(this->ChainParentInitialGlobalTransform).Rotation.ZW.m128d_f64 + 8);
          (pFVar20->ChainParentInitialGlobalTransform).Rotation.ZW.m128d_f64[0] =
               (this->ChainParentInitialGlobalTransform).Rotation.ZW.m128d_f64[0];
          (pFVar20->ChainParentInitialGlobalTransform).Rotation.ZW.m128d_f64[1] = dVar5;
          dVar5 = *(double *)
                   ((longlong)(this->ChainParentInitialGlobalTransform).Translation.XY.m128d_f64 + 8
                   );
          (pFVar20->ChainParentInitialGlobalTransform).Translation.XY.m128d_f64[0] =
               (this->ChainParentInitialGlobalTransform).Translation.XY.m128d_f64[0];
          (pFVar20->ChainParentInitialGlobalTransform).Translation.XY.m128d_f64[1] = dVar5;
          dVar5 = *(double *)
                   ((longlong)(this->ChainParentInitialGlobalTransform).Translation.ZW.m128d_f64 + 8
                   );
          (pFVar20->ChainParentInitialGlobalTransform).Translation.ZW.m128d_f64[0] =
               (this->ChainParentInitialGlobalTransform).Translation.ZW.m128d_f64[0];
          (pFVar20->ChainParentInitialGlobalTransform).Translation.ZW.m128d_f64[1] = dVar5;
          dVar5 = *(double *)
                   ((longlong)(this->ChainParentInitialGlobalTransform).Scale3D.XY.m128d_f64 + 8);
          (pFVar20->ChainParentInitialGlobalTransform).Scale3D.XY.m128d_f64[0] =
               (this->ChainParentInitialGlobalTransform).Scale3D.XY.m128d_f64[0];
          (pFVar20->ChainParentInitialGlobalTransform).Scale3D.XY.m128d_f64[1] = dVar5;
          dVar5 = *(double *)
                   ((longlong)(this->ChainParentInitialGlobalTransform).Scale3D.ZW.m128d_f64 + 8);
          (pFVar20->ChainParentInitialGlobalTransform).Scale3D.ZW.m128d_f64[0] =
               (this->ChainParentInitialGlobalTransform).Scale3D.ZW.m128d_f64[0];
          (pFVar20->ChainParentInitialGlobalTransform).Scale3D.ZW.m128d_f64[1] = dVar5;
          bVar12 = this->bFoundEndBone;
          bVar7 = this->bEndIsStartOrChildOfStart;
          uVar8 = *(undefined5 *)&this->field_0xe3;
          uVar4 = *(undefined8 *)&this->field_0xe8;
          pFVar20->bFoundStartBone = this->bFoundStartBone;
          pFVar20->bFoundEndBone = bVar12;
          pFVar20->bEndIsStartOrChildOfStart = bVar7;
          *(undefined5 *)&pFVar20->field_0xe3 = uVar8;
          *(undefined8 *)&pFVar20->field_0xe8 = uVar4;
          (((TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_> *)&this->ChainName)->
          AllocatorInstance).Data = (FScriptContainerElement *)local_438;
          *(FName *)&(this->StartBone).ComparisonIndex = FStack_430;
          (this->EndBone).ComparisonIndex = (FNameEntryId)local_428.ComparisonIndex.Value;
          (this->EndBone).Number = local_428.Number;
          this->IKGoalName = FStack_420;
          (this->RefPoseGlobalTransforms).AllocatorInstance.Data =
               (FScriptContainerElement *)local_418;
          (this->RefPoseGlobalTransforms).ArrayNum = FStack_410.ComparisonIndex.Value;
          (this->RefPoseGlobalTransforms).ArrayMax = FStack_410.Number;
          (this->RefPoseLocalTransforms).AllocatorInstance.Data =
               (FScriptContainerElement *)local_408;
          (this->RefPoseLocalTransforms).ArrayNum = FStack_400.ComparisonIndex.Value;
          (this->RefPoseLocalTransforms).ArrayMax = FStack_400.Number;
          pFVar16 = pFVar19 + 1;
          (this->CurrentLocalTransforms).AllocatorInstance.Data =
               (FScriptContainerElement *)local_3f8;
          (this->CurrentLocalTransforms).ArrayNum = FStack_3f0.ComparisonIndex.Value;
          (this->CurrentLocalTransforms).ArrayMax = FStack_3f0.Number;
          (this->Params).AllocatorInstance.Data = (FScriptContainerElement *)local_3e8;
          (this->Params).ArrayNum = FStack_3e0.ComparisonIndex.Value;
          (this->Params).ArrayMax = FStack_3e0.Number;
          (this->BoneIndices).AllocatorInstance.Data = (FScriptContainerElement *)local_3d8;
          *(FName *)&(this->BoneIndices).ArrayNum = FStack_3d0;
          pFVar20 = this;
          pFVar22 = this;
          do {
            pFVar22->InitialChainLength = (float)local_3c8.ComparisonIndex.Value;
            pFVar22->ChainParentBoneIndex = local_3c8.Number;
            *(uint *)&pFVar22->field_0x78 = FStack_3c0.ComparisonIndex.Value;
            *(uint *)&pFVar22->field_0x7c = FStack_3c0.Number;
            (pFVar22->ChainParentInitialGlobalTransform).Rotation.XY.m128d_f64[0] =
                 (double)local_3b8;
            *(FName *)((longlong)&(pFVar22->ChainParentInitialGlobalTransform).Rotation + 8) =
                 FStack_3b0;
            ((__m128d *)((longlong)&(pFVar22->ChainParentInitialGlobalTransform).Rotation + 0x10))->
            m128d_f64[0] = (double)local_3a8;
            *(FName *)((longlong)&(pFVar22->ChainParentInitialGlobalTransform).Rotation + 0x18) =
                 FStack_3a0;
            *(FName *)&(pFVar22->ChainParentInitialGlobalTransform).Translation.XY = local_398;
            *(FName *)((longlong)&(pFVar22->ChainParentInitialGlobalTransform).Translation + 8) =
                 FStack_390;
            ((__m128d *)((longlong)&(pFVar22->ChainParentInitialGlobalTransform).Translation + 0x10)
            )->m128d_f64[0] = (double)local_388;
            *(FName *)((longlong)&(pFVar22->ChainParentInitialGlobalTransform).Translation + 0x18) =
                 FStack_380;
            *(FName *)&(pFVar22->ChainParentInitialGlobalTransform).Scale3D.XY = local_378;
            *(FName *)((longlong)&(pFVar22->ChainParentInitialGlobalTransform).Scale3D + 8) =
                 FStack_370;
            ((__m128d *)((longlong)&(pFVar22->ChainParentInitialGlobalTransform).Scale3D + 0x10))->
            m128d_f64[0] = (double)local_368;
            *(FName *)((longlong)&(pFVar22->ChainParentInitialGlobalTransform).Scale3D + 0x18) =
                 FStack_360;
            *(FName *)&pFVar22->bFoundStartBone = local_358;
            *(uint *)&pFVar22->field_0xe8 = FStack_350.ComparisonIndex.Value;
            *(uint *)&pFVar22->field_0xec = FStack_350.Number;
            do {
              pFVar22 = pFVar20;
              pFVar20 = pFVar22 + 1;
              if (pFVar19 < pFVar20) break;
              if ((this->BoneIndices).ArrayNum < 1) {
                iVar21 = -1;
              }
              else {
                iVar21 = (int)((UIKRigDefinition *)(this->BoneIndices).AllocatorInstance.Data)->
                              _padding_;
              }
              if (pFVar22[1].BoneIndices.ArrayNum < 1) {
                iVar13 = -1;
              }
              else {
                iVar13 = *(int *)pFVar22[1].BoneIndices.AllocatorInstance.Data;
              }
              if (iVar21 == iVar13) {
                iVar21 = ::FName::Compare(&this->ChainName,&pFVar20->ChainName);
                bVar12 = SUB41((uint)iVar21 >> 0x1f,0);
              }
              else {
                bVar12 = iVar21 < iVar13;
              }
            } while (bVar12 == false);
            do {
              pFVar17 = pFVar16;
              pFVar16 = pFVar17 + -1;
              if (pFVar16 <= this) break;
              if (pFVar17[-1].BoneIndices.ArrayNum < 1) {
                iVar21 = -1;
              }
              else {
                iVar21 = *(int *)pFVar17[-1].BoneIndices.AllocatorInstance.Data;
              }
              if ((this->BoneIndices).ArrayNum < 1) {
                iVar13 = -1;
              }
              else {
                iVar13 = (int)((UIKRigDefinition *)(this->BoneIndices).AllocatorInstance.Data)->
                              _padding_;
              }
              if (iVar21 == iVar13) {
                iVar21 = ::FName::Compare(&pFVar16->ChainName,&this->ChainName);
                bVar12 = SUB41((uint)iVar21 >> 0x1f,0);
              }
              else {
                bVar12 = iVar21 < iVar13;
              }
            } while (bVar12 == false);
            if (pFVar16 < pFVar20) goto LAB_14df13c07;
            local_438 = (FName)(((TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_> *)
                                &pFVar20->ChainName)->AllocatorInstance).Data;
            FStack_430 = pFVar22[1].StartBone;
            local_428 = pFVar22[1].EndBone;
            FStack_420 = pFVar22[1].IKGoalName;
            local_418 = (FName)pFVar22[1].RefPoseGlobalTransforms.AllocatorInstance.Data;
            FStack_410.ComparisonIndex.Value = pFVar22[1].RefPoseGlobalTransforms.ArrayNum;
            FStack_410.Number = pFVar22[1].RefPoseGlobalTransforms.ArrayMax;
            local_408 = (FName)pFVar22[1].RefPoseLocalTransforms.AllocatorInstance.Data;
            FStack_400.ComparisonIndex.Value = pFVar22[1].RefPoseLocalTransforms.ArrayNum;
            FStack_400.Number = pFVar22[1].RefPoseLocalTransforms.ArrayMax;
            local_3f8 = (FName)pFVar22[1].CurrentLocalTransforms.AllocatorInstance.Data;
            FStack_3f0.ComparisonIndex.Value = pFVar22[1].CurrentLocalTransforms.ArrayNum;
            FStack_3f0.Number = pFVar22[1].CurrentLocalTransforms.ArrayMax;
            local_3e8 = (FName)pFVar22[1].Params.AllocatorInstance.Data;
            FStack_3e0 = *(FName *)&pFVar22[1].Params.ArrayNum;
            local_3d8 = (FName)pFVar22[1].BoneIndices.AllocatorInstance.Data;
            FStack_3d0.ComparisonIndex.Value = pFVar22[1].BoneIndices.ArrayNum;
            FStack_3d0.Number = pFVar22[1].BoneIndices.ArrayMax;
            local_3c8.ComparisonIndex.Value = (uint)pFVar22[1].InitialChainLength;
            local_3c8.Number = pFVar22[1].ChainParentBoneIndex;
            FStack_3c0 = *(FName *)&pFVar22[1].field_0x78;
            local_3b8 = (FName)pFVar22[1].ChainParentInitialGlobalTransform.Rotation.XY.m128d_f64[0]
            ;
            FStack_3b0 = (FName)pFVar22[1].ChainParentInitialGlobalTransform.Rotation.XY.m128d_f64
                                [1];
            local_3a8 = (FName)pFVar22[1].ChainParentInitialGlobalTransform.Rotation.ZW.m128d_f64[0]
            ;
            FStack_3a0 = (FName)pFVar22[1].ChainParentInitialGlobalTransform.Rotation.ZW.m128d_f64
                                [1];
            local_398 = (FName)pFVar22[1].ChainParentInitialGlobalTransform.Translation.XY.m128d_f64
                               [0];
            FStack_390 = (FName)pFVar22[1].ChainParentInitialGlobalTransform.Translation.XY.
                                m128d_f64[1];
            local_388 = (FName)pFVar22[1].ChainParentInitialGlobalTransform.Translation.ZW.m128d_f64
                               [0];
            FStack_380 = (FName)pFVar22[1].ChainParentInitialGlobalTransform.Translation.ZW.
                                m128d_f64[1];
            local_378 = (FName)pFVar22[1].ChainParentInitialGlobalTransform.Scale3D.XY.m128d_f64[0];
            FStack_370 = (FName)pFVar22[1].ChainParentInitialGlobalTransform.Scale3D.XY.m128d_f64[1]
            ;
            local_368 = (FName)pFVar22[1].ChainParentInitialGlobalTransform.Scale3D.ZW.m128d_f64[0];
            FStack_360 = (FName)pFVar22[1].ChainParentInitialGlobalTransform.Scale3D.ZW.m128d_f64[1]
            ;
            local_358.ComparisonIndex.Value._0_1_ = pFVar22[1].bFoundStartBone;
            local_358.ComparisonIndex.Value._1_1_ = pFVar22[1].bFoundEndBone;
            local_358.ComparisonIndex.Value._2_1_ = pFVar22[1].bEndIsStartOrChildOfStart;
            local_358._3_5_ = *(undefined5 *)&pFVar22[1].field_0xe3;
            FStack_350 = *(FName *)&pFVar22[1].field_0xe8;
            FVar3 = pFVar17[-1].StartBone;
            (((TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_> *)&pFVar20->ChainName)->
            AllocatorInstance).Data =
                 (((TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_> *)&pFVar16->ChainName)->
                 AllocatorInstance).Data;
            pFVar22[1].StartBone = FVar3;
            FVar3 = pFVar17[-1].IKGoalName;
            pFVar22[1].EndBone = pFVar17[-1].EndBone;
            pFVar22[1].IKGoalName = FVar3;
            iVar21 = pFVar17[-1].RefPoseGlobalTransforms.ArrayNum;
            iVar13 = pFVar17[-1].RefPoseGlobalTransforms.ArrayMax;
            pFVar22[1].RefPoseGlobalTransforms.AllocatorInstance.Data =
                 pFVar17[-1].RefPoseGlobalTransforms.AllocatorInstance.Data;
            pFVar22[1].RefPoseGlobalTransforms.ArrayNum = iVar21;
            pFVar22[1].RefPoseGlobalTransforms.ArrayMax = iVar13;
            iVar21 = pFVar17[-1].RefPoseLocalTransforms.ArrayNum;
            iVar13 = pFVar17[-1].RefPoseLocalTransforms.ArrayMax;
            pFVar22[1].RefPoseLocalTransforms.AllocatorInstance.Data =
                 pFVar17[-1].RefPoseLocalTransforms.AllocatorInstance.Data;
            pFVar22[1].RefPoseLocalTransforms.ArrayNum = iVar21;
            pFVar22[1].RefPoseLocalTransforms.ArrayMax = iVar13;
            iVar21 = pFVar17[-1].CurrentLocalTransforms.ArrayNum;
            iVar13 = pFVar17[-1].CurrentLocalTransforms.ArrayMax;
            pFVar22[1].CurrentLocalTransforms.AllocatorInstance.Data =
                 pFVar17[-1].CurrentLocalTransforms.AllocatorInstance.Data;
            pFVar22[1].CurrentLocalTransforms.ArrayNum = iVar21;
            pFVar22[1].CurrentLocalTransforms.ArrayMax = iVar13;
            uVar4 = *(undefined8 *)&pFVar17[-1].Params.ArrayNum;
            pFVar22[1].Params.AllocatorInstance.Data =
                 (FScriptContainerElement *)pFVar17[-1].Params.AllocatorInstance.Data;
            *(undefined8 *)&pFVar22[1].Params.ArrayNum = uVar4;
            iVar21 = pFVar17[-1].BoneIndices.ArrayNum;
            iVar13 = pFVar17[-1].BoneIndices.ArrayMax;
            pFVar22[1].BoneIndices.AllocatorInstance.Data =
                 pFVar17[-1].BoneIndices.AllocatorInstance.Data;
            pFVar22[1].BoneIndices.ArrayNum = iVar21;
            pFVar22[1].BoneIndices.ArrayMax = iVar13;
            iVar21 = pFVar17[-1].ChainParentBoneIndex;
            uVar4 = *(undefined8 *)&pFVar17[-1].field_0x78;
            pFVar22[1].InitialChainLength = pFVar17[-1].InitialChainLength;
            pFVar22[1].ChainParentBoneIndex = iVar21;
            *(undefined8 *)&pFVar22[1].field_0x78 = uVar4;
            dVar5 = pFVar17[-1].ChainParentInitialGlobalTransform.Rotation.XY.m128d_f64[1];
            pFVar22[1].ChainParentInitialGlobalTransform.Rotation.XY.m128d_f64[0] =
                 pFVar17[-1].ChainParentInitialGlobalTransform.Rotation.XY.m128d_f64[0];
            pFVar22[1].ChainParentInitialGlobalTransform.Rotation.XY.m128d_f64[1] = dVar5;
            dVar5 = pFVar17[-1].ChainParentInitialGlobalTransform.Rotation.ZW.m128d_f64[1];
            pFVar22[1].ChainParentInitialGlobalTransform.Rotation.ZW.m128d_f64[0] =
                 pFVar17[-1].ChainParentInitialGlobalTransform.Rotation.ZW.m128d_f64[0];
            pFVar22[1].ChainParentInitialGlobalTransform.Rotation.ZW.m128d_f64[1] = dVar5;
            dVar5 = pFVar17[-1].ChainParentInitialGlobalTransform.Translation.XY.m128d_f64[1];
            pFVar22[1].ChainParentInitialGlobalTransform.Translation.XY.m128d_f64[0] =
                 pFVar17[-1].ChainParentInitialGlobalTransform.Translation.XY.m128d_f64[0];
            pFVar22[1].ChainParentInitialGlobalTransform.Translation.XY.m128d_f64[1] = dVar5;
            dVar5 = pFVar17[-1].ChainParentInitialGlobalTransform.Translation.ZW.m128d_f64[1];
            pFVar22[1].ChainParentInitialGlobalTransform.Translation.ZW.m128d_f64[0] =
                 pFVar17[-1].ChainParentInitialGlobalTransform.Translation.ZW.m128d_f64[0];
            pFVar22[1].ChainParentInitialGlobalTransform.Translation.ZW.m128d_f64[1] = dVar5;
            dVar5 = pFVar17[-1].ChainParentInitialGlobalTransform.Scale3D.XY.m128d_f64[1];
            pFVar22[1].ChainParentInitialGlobalTransform.Scale3D.XY.m128d_f64[0] =
                 pFVar17[-1].ChainParentInitialGlobalTransform.Scale3D.XY.m128d_f64[0];
            pFVar22[1].ChainParentInitialGlobalTransform.Scale3D.XY.m128d_f64[1] = dVar5;
            dVar5 = pFVar17[-1].ChainParentInitialGlobalTransform.Scale3D.ZW.m128d_f64[1];
            pFVar22[1].ChainParentInitialGlobalTransform.Scale3D.ZW.m128d_f64[0] =
                 pFVar17[-1].ChainParentInitialGlobalTransform.Scale3D.ZW.m128d_f64[0];
            pFVar22[1].ChainParentInitialGlobalTransform.Scale3D.ZW.m128d_f64[1] = dVar5;
            bVar12 = pFVar17[-1].bFoundEndBone;
            bVar7 = pFVar17[-1].bEndIsStartOrChildOfStart;
            uVar8 = *(undefined5 *)&pFVar17[-1].field_0xe3;
            uVar4 = *(undefined8 *)&pFVar17[-1].field_0xe8;
            pFVar22[1].bFoundStartBone = pFVar17[-1].bFoundStartBone;
            pFVar22[1].bFoundEndBone = bVar12;
            pFVar22[1].bEndIsStartOrChildOfStart = bVar7;
            *(undefined5 *)&pFVar22[1].field_0xe3 = uVar8;
            *(undefined8 *)&pFVar22[1].field_0xe8 = uVar4;
            pFVar22 = pFVar17 + -1;
            (((TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_> *)&pFVar16->ChainName)->
            AllocatorInstance).Data = (FScriptContainerElement *)local_438;
            pFVar17[-1].StartBone = FStack_430;
            pFVar17[-1].EndBone = local_428;
            pFVar17[-1].IKGoalName = FStack_420;
            pFVar17[-1].RefPoseGlobalTransforms.AllocatorInstance.Data =
                 (FScriptContainerElement *)local_418;
            pFVar17[-1].RefPoseGlobalTransforms.ArrayNum = FStack_410.ComparisonIndex.Value;
            pFVar17[-1].RefPoseGlobalTransforms.ArrayMax = FStack_410.Number;
            pFVar17[-1].RefPoseLocalTransforms.AllocatorInstance.Data =
                 (FScriptContainerElement *)local_408;
            pFVar17[-1].RefPoseLocalTransforms.ArrayNum = FStack_400.ComparisonIndex.Value;
            pFVar17[-1].RefPoseLocalTransforms.ArrayMax = FStack_400.Number;
            pFVar17[-1].CurrentLocalTransforms.AllocatorInstance.Data =
                 (FScriptContainerElement *)local_3f8;
            pFVar17[-1].CurrentLocalTransforms.ArrayNum = FStack_3f0.ComparisonIndex.Value;
            pFVar17[-1].CurrentLocalTransforms.ArrayMax = FStack_3f0.Number;
            pFVar17[-1].Params.AllocatorInstance.Data = (FScriptContainerElement *)local_3e8;
            pFVar17[-1].Params.ArrayNum = (uint)SUB84(FStack_3e0,0);
            pFVar17[-1].Params.ArrayMax = (int)((ulonglong)FStack_3e0 >> 0x20);
            pFVar17[-1].BoneIndices.AllocatorInstance.Data = (FScriptContainerElement *)local_3d8;
            pFVar17[-1].BoneIndices.ArrayNum = FStack_3d0.ComparisonIndex.Value;
            pFVar17[-1].BoneIndices.ArrayMax = FStack_3d0.Number;
          } while( true );
        }
        for (; pFVar22 = this, pFVar20 = this, this < pFVar19;
            pFVar19 = (FResolvedBoneChain *)((longlong)pFVar19 + 0xffffffffffffff10)) {
          while (pFVar16 = pFVar22, pFVar20 = pFVar20 + 1, pFVar20 <= pFVar19) {
            if ((pFVar16->BoneIndices).ArrayNum < 1) {
              iVar21 = -1;
            }
            else {
              iVar21 = (int)((UIKRigDefinition *)(pFVar16->BoneIndices).AllocatorInstance.Data)->
                            _padding_;
            }
            if ((pFVar20->BoneIndices).ArrayNum < 1) {
              iVar13 = -1;
            }
            else {
              iVar13 = (int)((UIKRigDefinition *)(pFVar20->BoneIndices).AllocatorInstance.Data)->
                            _padding_;
            }
            if (iVar21 == iVar13) {
              iVar21 = ::FName::Compare(&pFVar16->ChainName,&pFVar20->ChainName);
              bVar12 = SUB41((uint)iVar21 >> 0x1f,0);
            }
            else {
              bVar12 = iVar21 < iVar13;
            }
            pFVar22 = pFVar20;
            if (bVar12 == false) {
              pFVar22 = pFVar16;
            }
          }
          local_438 = (FName)(((TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_> *)
                              &pFVar16->ChainName)->AllocatorInstance).Data;
          FStack_430 = pFVar16->StartBone;
          local_428.ComparisonIndex.Value = (pFVar16->EndBone).ComparisonIndex.Value;
          local_428.Number = (pFVar16->EndBone).Number;
          FStack_420 = pFVar16->IKGoalName;
          local_418 = (FName)(pFVar16->RefPoseGlobalTransforms).AllocatorInstance.Data;
          FStack_410.ComparisonIndex.Value = (pFVar16->RefPoseGlobalTransforms).ArrayNum;
          FStack_410.Number = (pFVar16->RefPoseGlobalTransforms).ArrayMax;
          local_408 = (FName)(pFVar16->RefPoseLocalTransforms).AllocatorInstance.Data;
          FStack_400.ComparisonIndex.Value = (pFVar16->RefPoseLocalTransforms).ArrayNum;
          FStack_400.Number = (pFVar16->RefPoseLocalTransforms).ArrayMax;
          local_3f8 = (FName)(pFVar16->CurrentLocalTransforms).AllocatorInstance.Data;
          FStack_3f0.ComparisonIndex.Value = (pFVar16->CurrentLocalTransforms).ArrayNum;
          FStack_3f0.Number = (pFVar16->CurrentLocalTransforms).ArrayMax;
          local_3e8 = (FName)(pFVar16->Params).AllocatorInstance.Data;
          FStack_3e0.ComparisonIndex.Value = (pFVar16->Params).ArrayNum;
          FStack_3e0.Number = (pFVar16->Params).ArrayMax;
          local_3d8 = (FName)(pFVar16->BoneIndices).AllocatorInstance.Data;
          FStack_3d0 = *(FName *)&(pFVar16->BoneIndices).ArrayNum;
          local_3c8.ComparisonIndex.Value = (uint)pFVar16->InitialChainLength;
          local_3c8.Number = pFVar16->ChainParentBoneIndex;
          FStack_3c0.ComparisonIndex.Value = *(uint *)&pFVar16->field_0x78;
          FStack_3c0.Number = *(uint *)&pFVar16->field_0x7c;
          local_3b8 = (FName)(pFVar16->ChainParentInitialGlobalTransform).Rotation.XY.m128d_f64[0];
          FStack_3b0 = *(FName *)((pFVar16->ChainParentInitialGlobalTransform).Rotation.XY.m128d_f64
                                 + 1);
          local_3a8 = (FName)(pFVar16->ChainParentInitialGlobalTransform).Rotation.ZW.m128d_f64[0];
          FStack_3a0 = *(FName *)((pFVar16->ChainParentInitialGlobalTransform).Rotation.ZW.m128d_f64
                                 + 1);
          local_398 = (FName)(pFVar16->ChainParentInitialGlobalTransform).Translation.XY.m128d_f64
                             [0];
          FStack_390 = *(FName *)((pFVar16->ChainParentInitialGlobalTransform).Translation.XY.
                                  m128d_f64 + 1);
          local_388 = (FName)(pFVar16->ChainParentInitialGlobalTransform).Translation.ZW.m128d_f64
                             [0];
          FStack_380 = *(FName *)((pFVar16->ChainParentInitialGlobalTransform).Translation.ZW.
                                  m128d_f64 + 1);
          local_378 = (FName)(pFVar16->ChainParentInitialGlobalTransform).Scale3D.XY.m128d_f64[0];
          FStack_370 = *(FName *)((pFVar16->ChainParentInitialGlobalTransform).Scale3D.XY.m128d_f64
                                 + 1);
          local_368 = (FName)(pFVar16->ChainParentInitialGlobalTransform).Scale3D.ZW.m128d_f64[0];
          FStack_360 = *(FName *)((pFVar16->ChainParentInitialGlobalTransform).Scale3D.ZW.m128d_f64
                                 + 1);
          local_358 = *(FName *)&pFVar16->bFoundStartBone;
          FStack_350.ComparisonIndex.Value = *(uint *)&pFVar16->field_0xe8;
          FStack_350.Number = *(uint *)&pFVar16->field_0xec;
          FVar3 = *(FName *)((longlong)pFVar19 + 8);
          (((TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_> *)&pFVar16->ChainName)->
          AllocatorInstance).Data = *(FScriptContainerElement **)pFVar19;
          pFVar16->StartBone = FVar3;
          FVar3 = *(FName *)((longlong)pFVar19 + 0x18);
          *(undefined8 *)&pFVar16->EndBone = *(undefined8 *)((longlong)pFVar19 + 0x10);
          pFVar16->IKGoalName = FVar3;
          uVar4 = ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                  ((longlong)pFVar19 + 0x28))->AllocatorInstance;
          (pFVar16->RefPoseGlobalTransforms).AllocatorInstance.Data =
               (((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                ((longlong)pFVar19 + 0x20))->AllocatorInstance).Data;
          (pFVar16->RefPoseGlobalTransforms).ArrayNum = (int)uVar4;
          (pFVar16->RefPoseGlobalTransforms).ArrayMax = (int)((ulonglong)uVar4 >> 0x20);
          uVar4 = ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                  ((longlong)pFVar19 + 0x38))->AllocatorInstance;
          (pFVar16->RefPoseLocalTransforms).AllocatorInstance.Data =
               (((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                ((longlong)pFVar19 + 0x30))->AllocatorInstance).Data;
          (pFVar16->RefPoseLocalTransforms).ArrayNum = (int)uVar4;
          (pFVar16->RefPoseLocalTransforms).ArrayMax = (int)((ulonglong)uVar4 >> 0x20);
          uVar4 = ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                  ((longlong)pFVar19 + 0x48))->AllocatorInstance;
          (pFVar16->CurrentLocalTransforms).AllocatorInstance.Data =
               (((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                ((longlong)pFVar19 + 0x40))->AllocatorInstance).Data;
          (pFVar16->CurrentLocalTransforms).ArrayNum = (int)uVar4;
          (pFVar16->CurrentLocalTransforms).ArrayMax = (int)((ulonglong)uVar4 >> 0x20);
          uVar4 = ((TArray<float,TSizedDefaultAllocator<32>_> *)((longlong)pFVar19 + 0x58))->
                  AllocatorInstance;
          (pFVar16->Params).AllocatorInstance.Data =
               (((TArray<float,TSizedDefaultAllocator<32>_> *)((longlong)pFVar19 + 0x50))->
               AllocatorInstance).Data;
          (pFVar16->Params).ArrayNum = (int)uVar4;
          (pFVar16->Params).ArrayMax = (int)((ulonglong)uVar4 >> 0x20);
          uVar4 = ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)pFVar19 + 0x68))->
                  AllocatorInstance;
          (pFVar16->BoneIndices).AllocatorInstance.Data =
               (FScriptContainerElement *)
               *(UIKRigDefinition **)
                &((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)pFVar19 + 0x60))->
                 AllocatorInstance;
          *(undefined8 *)&(pFVar16->BoneIndices).ArrayNum = uVar4;
          uVar4 = *(undefined8 *)((longlong)pFVar19 + 0x78);
          *(undefined8 *)&pFVar16->InitialChainLength = *(undefined8 *)((longlong)pFVar19 + 0x70);
          *(undefined8 *)&pFVar16->field_0x78 = uVar4;
          dVar5 = *(double *)&((TTransform<double> *)((longlong)pFVar19 + 0x88))->Rotation;
          (pFVar16->ChainParentInitialGlobalTransform).Rotation.XY.m128d_f64[0] =
               *(double *)&((TTransform<double> *)((longlong)pFVar19 + 0x80))->Rotation;
          (pFVar16->ChainParentInitialGlobalTransform).Rotation.XY.m128d_f64[1] = dVar5;
          dVar5 = *(double *)&((TTransform<double> *)((longlong)pFVar19 + 0x98))->Rotation;
          (pFVar16->ChainParentInitialGlobalTransform).Rotation.ZW.m128d_f64[0] =
               *(double *)&((TTransform<double> *)((longlong)pFVar19 + 0x90))->Rotation;
          (pFVar16->ChainParentInitialGlobalTransform).Rotation.ZW.m128d_f64[1] = dVar5;
          dVar5 = *(double *)&((TTransform<double> *)((longlong)pFVar19 + 0xa8))->Rotation;
          (pFVar16->ChainParentInitialGlobalTransform).Translation.XY.m128d_f64[0] =
               *(double *)&((TTransform<double> *)((longlong)pFVar19 + 0xa0))->Rotation;
          (pFVar16->ChainParentInitialGlobalTransform).Translation.XY.m128d_f64[1] = dVar5;
          dVar5 = *(double *)&((TTransform<double> *)((longlong)pFVar19 + 0xb8))->Rotation;
          (pFVar16->ChainParentInitialGlobalTransform).Translation.ZW.m128d_f64[0] =
               *(double *)&((TTransform<double> *)((longlong)pFVar19 + 0xb0))->Rotation;
          (pFVar16->ChainParentInitialGlobalTransform).Translation.ZW.m128d_f64[1] = dVar5;
          dVar5 = *(double *)&((TTransform<double> *)((longlong)pFVar19 + 200))->Rotation;
          (pFVar16->ChainParentInitialGlobalTransform).Scale3D.XY.m128d_f64[0] =
               *(double *)&((TTransform<double> *)((longlong)pFVar19 + 0xc0))->Rotation;
          (pFVar16->ChainParentInitialGlobalTransform).Scale3D.XY.m128d_f64[1] = dVar5;
          dVar5 = *(double *)&((TTransform<double> *)((longlong)pFVar19 + 0xd8))->Rotation;
          (pFVar16->ChainParentInitialGlobalTransform).Scale3D.ZW.m128d_f64[0] =
               *(double *)&((TTransform<double> *)((longlong)pFVar19 + 0xd0))->Rotation;
          (pFVar16->ChainParentInitialGlobalTransform).Scale3D.ZW.m128d_f64[1] = dVar5;
          uVar4 = *(undefined8 *)((longlong)pFVar19 + 0xe8);
          *(undefined8 *)&pFVar16->bFoundStartBone = *(undefined8 *)((longlong)pFVar19 + 0xe0);
          *(undefined8 *)&pFVar16->field_0xe8 = uVar4;
          pFVar19->ChainName = local_438;
          *(FName *)((longlong)pFVar19 + 8) = FStack_430;
          *(uint *)&((TMap<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,0>_>
                      *)((longlong)pFVar19 + 0x10))->field_0x0 = local_428.ComparisonIndex.Value;
          *(uint *)&((TMap<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,0>_>
                      *)((longlong)pFVar19 + 0x10))->field_0x4 = local_428.Number;
          *(FName *)((longlong)pFVar19 + 0x18) = FStack_420;
          ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
          ((longlong)pFVar19 + 0x20))->AllocatorInstance = (ForAnyElementType)local_418;
          ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
          ((longlong)pFVar19 + 0x28))->AllocatorInstance = (ForAnyElementType)FStack_410;
          ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
          ((longlong)pFVar19 + 0x30))->AllocatorInstance = (ForAnyElementType)local_408;
          ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
          ((longlong)pFVar19 + 0x38))->AllocatorInstance = (ForAnyElementType)FStack_400;
          ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
          ((longlong)pFVar19 + 0x40))->AllocatorInstance = (ForAnyElementType)local_3f8;
          ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
          ((longlong)pFVar19 + 0x48))->AllocatorInstance = (ForAnyElementType)FStack_3f0;
          ((TArray<float,TSizedDefaultAllocator<32>_> *)((longlong)pFVar19 + 0x50))->
          AllocatorInstance = (ForAnyElementType)local_3e8;
          ((TArray<float,TSizedDefaultAllocator<32>_> *)((longlong)pFVar19 + 0x58))->
          AllocatorInstance = (ForAnyElementType)FStack_3e0;
          ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)pFVar19 + 0x60))->AllocatorInstance
               = (ForAnyElementType)local_3d8;
          ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)pFVar19 + 0x68))->AllocatorInstance
               = (ForAnyElementType)FStack_3d0;
          *(FName *)((longlong)pFVar19 + 0x70) = local_3c8;
          *(FName *)((longlong)pFVar19 + 0x78) = FStack_3c0;
          *(FName *)&((TTransform<double> *)((longlong)pFVar19 + 0x80))->Rotation = local_3b8;
          *(FName *)&((TTransform<double> *)((longlong)pFVar19 + 0x88))->Rotation = FStack_3b0;
          *(FName *)&((TTransform<double> *)((longlong)pFVar19 + 0x90))->Rotation = local_3a8;
          *(FName *)&((TTransform<double> *)((longlong)pFVar19 + 0x98))->Rotation = FStack_3a0;
          *(FName *)&((TTransform<double> *)((longlong)pFVar19 + 0xa0))->Rotation = local_398;
          *(FName *)&((TTransform<double> *)((longlong)pFVar19 + 0xa8))->Rotation = FStack_390;
          *(FName *)&((TTransform<double> *)((longlong)pFVar19 + 0xb0))->Rotation = local_388;
          *(FName *)&((TTransform<double> *)((longlong)pFVar19 + 0xb8))->Rotation = FStack_380;
          *(FName *)&((TTransform<double> *)((longlong)pFVar19 + 0xc0))->Rotation = local_378;
          *(FName *)&((TTransform<double> *)((longlong)pFVar19 + 200))->Rotation = FStack_370;
          *(FName *)&((TTransform<double> *)((longlong)pFVar19 + 0xd0))->Rotation = local_368;
          *(FName *)&((TTransform<double> *)((longlong)pFVar19 + 0xd8))->Rotation = FStack_360;
          *(FName *)((longlong)pFVar19 + 0xe0) = local_358;
          *(FName *)((longlong)pFVar19 + 0xe8) = FStack_350;
          p<Var18 = local_470.Predicate;
        }
        goto LAB_14df14332;
      }
LAB_14df13e94:
      local_478[0] = param_3;
      local_470.Predicate = param_4.Predicate;
      if (iVar21 < 0) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Num >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                            ,0xb9,L"Algo::HeapSortInternal called with negative count");
        if (bVar12) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
LAB_14df14120:
        local_460[0].Predicate = &local_470;
        HeapifyInternal<FResolvedBoneChain,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FResolvedBoneChain,_FRetargeterBoneChains::Initialize_::__l2::<lambda_2>_>_>_>
                  (pFVar20,iVar21,param_3,&local_470);
        iVar21 = iVar21 + -1;
        if (0 < iVar21) {
          lVar14 = (longlong)iVar21 * 0xf0;
          do {
            local_438 = pFVar20->ChainName;
            FStack_430 = pFVar20->StartBone;
            pFVar1 = (FName *)((longlong)
                               (&(pFVar20->ChainParentInitialGlobalTransform).Rotation + -4) +
                              lVar14);
            local_428 = pFVar20->EndBone;
            FStack_420 = pFVar20->IKGoalName;
            local_418 = (FName)(pFVar20->RefPoseGlobalTransforms).AllocatorInstance.Data;
            FStack_410.ComparisonIndex.Value = (pFVar20->RefPoseGlobalTransforms).ArrayNum;
            FStack_410.Number = (pFVar20->RefPoseGlobalTransforms).ArrayMax;
            local_408 = (FName)(pFVar20->RefPoseLocalTransforms).AllocatorInstance.Data;
            FStack_400.ComparisonIndex.Value = (pFVar20->RefPoseLocalTransforms).ArrayNum;
            FStack_400.Number = (pFVar20->RefPoseLocalTransforms).ArrayMax;
            local_3f8 = (FName)(pFVar20->CurrentLocalTransforms).AllocatorInstance.Data;
            FStack_3f0.ComparisonIndex.Value = (pFVar20->CurrentLocalTransforms).ArrayNum;
            FStack_3f0.Number = (pFVar20->CurrentLocalTransforms).ArrayMax;
            local_3e8 = (FName)(pFVar20->Params).AllocatorInstance.Data;
            FStack_3e0.ComparisonIndex.Value = (pFVar20->Params).ArrayNum;
            FStack_3e0.Number = (pFVar20->Params).ArrayMax;
            local_3d8 = (FName)(pFVar20->BoneIndices).AllocatorInstance.Data;
            FStack_3d0.ComparisonIndex.Value = (pFVar20->BoneIndices).ArrayNum;
            FStack_3d0.Number = (pFVar20->BoneIndices).ArrayMax;
            local_3c8.ComparisonIndex.Value = (uint)pFVar20->InitialChainLength;
            local_3c8.Number = pFVar20->ChainParentBoneIndex;
            FStack_3c0.ComparisonIndex.Value = *(uint *)&pFVar20->field_0x78;
            FStack_3c0.Number = *(uint *)&pFVar20->field_0x7c;
            local_3b8 = (FName)(pFVar20->ChainParentInitialGlobalTransform).Rotation.XY.m128d_f64[0]
            ;
            FStack_3b0 = *(FName *)((pFVar20->ChainParentInitialGlobalTransform).Rotation.XY.
                                    m128d_f64 + 1);
            local_3a8 = (FName)(pFVar20->ChainParentInitialGlobalTransform).Rotation.ZW.m128d_f64[0]
            ;
            FStack_3a0 = *(FName *)((pFVar20->ChainParentInitialGlobalTransform).Rotation.ZW.
                                    m128d_f64 + 1);
            local_398 = (FName)(pFVar20->ChainParentInitialGlobalTransform).Translation.XY.m128d_f64
                               [0];
            FStack_390 = *(FName *)((pFVar20->ChainParentInitialGlobalTransform).Translation.XY.
                                    m128d_f64 + 1);
            local_388 = (FName)(pFVar20->ChainParentInitialGlobalTransform).Translation.ZW.m128d_f64
                               [0];
            FStack_380 = *(FName *)((pFVar20->ChainParentInitialGlobalTransform).Translation.ZW.
                                    m128d_f64 + 1);
            local_378 = (FName)(pFVar20->ChainParentInitialGlobalTransform).Scale3D.XY.m128d_f64[0];
            FStack_370 = *(FName *)((pFVar20->ChainParentInitialGlobalTransform).Scale3D.XY.
                                    m128d_f64 + 1);
            local_368 = (FName)(pFVar20->ChainParentInitialGlobalTransform).Scale3D.ZW.m128d_f64[0];
            FStack_360 = *(FName *)((pFVar20->ChainParentInitialGlobalTransform).Scale3D.ZW.
                                    m128d_f64 + 1);
            local_358 = *(FName *)&pFVar20->bFoundStartBone;
            FStack_350.ComparisonIndex.Value = *(uint *)&pFVar20->field_0xe8;
            FStack_350.Number = *(uint *)&pFVar20->field_0xec;
            FVar3 = pFVar1[1];
            pFVar20->ChainName = *pFVar1;
            pFVar20->StartBone = FVar3;
            FVar3 = pFVar1[3];
            pFVar20->EndBone = pFVar1[2];
            pFVar20->IKGoalName = FVar3;
            FVar10.Value = pFVar1[5].ComparisonIndex.Value;
            uVar9 = pFVar1[5].Number;
            (pFVar20->RefPoseGlobalTransforms).AllocatorInstance.Data =
                 (FScriptContainerElement *)pFVar1[4];
            (pFVar20->RefPoseGlobalTransforms).ArrayNum = FVar10.Value;
            (pFVar20->RefPoseGlobalTransforms).ArrayMax = uVar9;
            FVar10.Value = pFVar1[7].ComparisonIndex.Value;
            uVar9 = pFVar1[7].Number;
            (pFVar20->RefPoseLocalTransforms).AllocatorInstance.Data =
                 (FScriptContainerElement *)pFVar1[6];
            (pFVar20->RefPoseLocalTransforms).ArrayNum = FVar10.Value;
            (pFVar20->RefPoseLocalTransforms).ArrayMax = uVar9;
            FVar10.Value = pFVar1[9].ComparisonIndex.Value;
            uVar9 = pFVar1[9].Number;
            (pFVar20->CurrentLocalTransforms).AllocatorInstance.Data =
                 (FScriptContainerElement *)pFVar1[8];
            (pFVar20->CurrentLocalTransforms).ArrayNum = FVar10.Value;
            (pFVar20->CurrentLocalTransforms).ArrayMax = uVar9;
            FVar10.Value = pFVar1[0xb].ComparisonIndex.Value;
            uVar9 = pFVar1[0xb].Number;
            (pFVar20->Params).AllocatorInstance.Data = (FScriptContainerElement *)pFVar1[10];
            (pFVar20->Params).ArrayNum = FVar10.Value;
            (pFVar20->Params).ArrayMax = uVar9;
            FVar10.Value = pFVar1[0xd].ComparisonIndex.Value;
            uVar9 = pFVar1[0xd].Number;
            (pFVar20->BoneIndices).AllocatorInstance.Data = (FScriptContainerElement *)pFVar1[0xc];
            (pFVar20->BoneIndices).ArrayNum = FVar10.Value;
            (pFVar20->BoneIndices).ArrayMax = uVar9;
            uVar9 = pFVar1[0xe].Number;
            FVar10.Value = pFVar1[0xf].ComparisonIndex.Value;
            uVar11 = pFVar1[0xf].Number;
            pFVar20->InitialChainLength = (float)pFVar1[0xe].ComparisonIndex.Value;
            pFVar20->ChainParentBoneIndex = uVar9;
            *(uint *)&pFVar20->field_0x78 = FVar10.Value;
            *(uint *)&pFVar20->field_0x7c = uVar11;
            FVar3 = pFVar1[0x11];
            (pFVar20->ChainParentInitialGlobalTransform).Rotation.XY.m128d_f64[0] =
                 (double)pFVar1[0x10];
            *(FName *)((pFVar20->ChainParentInitialGlobalTransform).Rotation.XY.m128d_f64 + 1) =
                 FVar3;
            FVar3 = pFVar1[0x13];
            (pFVar20->ChainParentInitialGlobalTransform).Rotation.ZW.m128d_f64[0] =
                 (double)pFVar1[0x12];
            *(FName *)((pFVar20->ChainParentInitialGlobalTransform).Rotation.ZW.m128d_f64 + 1) =
                 FVar3;
            FVar3 = pFVar1[0x15];
            (pFVar20->ChainParentInitialGlobalTransform).Translation.XY.m128d_f64[0] =
                 (double)pFVar1[0x14];
            *(FName *)((pFVar20->ChainParentInitialGlobalTransform).Translation.XY.m128d_f64 + 1) =
                 FVar3;
            FVar3 = pFVar1[0x17];
            (pFVar20->ChainParentInitialGlobalTransform).Translation.ZW.m128d_f64[0] =
                 (double)pFVar1[0x16];
            *(FName *)((pFVar20->ChainParentInitialGlobalTransform).Translation.ZW.m128d_f64 + 1) =
                 FVar3;
            FVar3 = pFVar1[0x19];
            (pFVar20->ChainParentInitialGlobalTransform).Scale3D.XY.m128d_f64[0] =
                 (double)pFVar1[0x18];
            *(FName *)((pFVar20->ChainParentInitialGlobalTransform).Scale3D.XY.m128d_f64 + 1) =
                 FVar3;
            FVar3 = pFVar1[0x1b];
            (pFVar20->ChainParentInitialGlobalTransform).Scale3D.ZW.m128d_f64[0] =
                 (double)pFVar1[0x1a];
            *(FName *)((pFVar20->ChainParentInitialGlobalTransform).Scale3D.ZW.m128d_f64 + 1) =
                 FVar3;
            FVar10.Value = pFVar1[0x1d].ComparisonIndex.Value;
            uVar9 = pFVar1[0x1d].Number;
            *(FName *)&pFVar20->bFoundStartBone = pFVar1[0x1c];
            *(uint *)&pFVar20->field_0xe8 = FVar10.Value;
            *(uint *)&pFVar20->field_0xec = uVar9;
            *pFVar1 = local_438;
            pFVar1[1] = FStack_430;
            pFVar1[2] = local_428;
            pFVar1[3] = FStack_420;
            pFVar1[4] = local_418;
            pFVar1[5] = FStack_410;
            pFVar1[6] = local_408;
            pFVar1[7] = FStack_400;
            pFVar1[8] = local_3f8;
            pFVar1[9] = FStack_3f0;
            pFVar1[10] = local_3e8;
            pFVar1[0xb] = FStack_3e0;
            pFVar1[0xc] = local_3d8;
            pFVar1[0xd] = FStack_3d0;
            pFVar1[0xe] = local_3c8;
            pFVar1[0xf] = FStack_3c0;
            pFVar1[0x10] = local_3b8;
            pFVar1[0x11] = FStack_3b0;
            pFVar1[0x12] = local_3a8;
            pFVar1[0x13] = FStack_3a0;
            pFVar1[0x14] = local_398;
            pFVar1[0x15] = FStack_390;
            pFVar1[0x16] = local_388;
            pFVar1[0x17] = FStack_380;
            pFVar1[0x18] = local_378;
            pFVar1[0x19] = FStack_370;
            pFVar1[0x1a] = local_368;
            pFVar1[0x1b] = FStack_360;
            pFVar1[0x1c] = local_358;
            pFVar1[0x1d] = FStack_350;
            HeapSiftDown<FResolvedBoneChain,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FResolvedBoneChain,_FRetargeterBoneChains::Initialize_::__l2::<lambda_2>_>_>_>
                      (pFVar20,0,iVar21,local_478,local_460);
            iVar21 = iVar21 + -1;
            lVar14 = lVar14 + -0xf0;
          } while (0 < iVar21);
        }
      }
      else if (iVar21 != 0) goto LAB_14df14120;
LAB_14df14332:
      p<Var18 = p<Var18 + -3;
    } while (&local_348 <= p<Var18);
  }
  return;
LAB_14df13c07:
  local_438 = (FName)(((TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_> *)&this->ChainName)->
                     AllocatorInstance).Data;
  FStack_430 = *(FName *)&(this->StartBone).ComparisonIndex;
  local_428.ComparisonIndex.Value = (this->EndBone).ComparisonIndex.Value;
  local_428.Number = (this->EndBone).Number;
  FStack_420 = this->IKGoalName;
  local_418 = (FName)(this->RefPoseGlobalTransforms).AllocatorInstance.Data;
  FStack_410.ComparisonIndex.Value = (this->RefPoseGlobalTransforms).ArrayNum;
  FStack_410.Number = (this->RefPoseGlobalTransforms).ArrayMax;
  local_408 = (FName)(this->RefPoseLocalTransforms).AllocatorInstance.Data;
  FStack_400.ComparisonIndex.Value = (this->RefPoseLocalTransforms).ArrayNum;
  FStack_400.Number = (this->RefPoseLocalTransforms).ArrayMax;
  local_3f8 = (FName)(this->CurrentLocalTransforms).AllocatorInstance.Data;
  FStack_3f0.ComparisonIndex.Value = (this->CurrentLocalTransforms).ArrayNum;
  FStack_3f0.Number = (this->CurrentLocalTransforms).ArrayMax;
  local_3e8 = (FName)(this->Params).AllocatorInstance.Data;
  FStack_3e0.ComparisonIndex.Value = (this->Params).ArrayNum;
  FStack_3e0.Number = (this->Params).ArrayMax;
  local_3d8 = (FName)(this->BoneIndices).AllocatorInstance.Data;
  FStack_3d0 = *(FName *)&(this->BoneIndices).ArrayNum;
  local_3c8.ComparisonIndex.Value = (uint)this->InitialChainLength;
  local_3c8.Number = this->ChainParentBoneIndex;
  FStack_3c0.ComparisonIndex.Value = *(uint *)&this->field_0x78;
  FStack_3c0.Number = *(uint *)&this->field_0x7c;
  local_3b8 = (FName)(this->ChainParentInitialGlobalTransform).Rotation.XY.m128d_f64[0];
  FStack_3b0 = *(FName *)((longlong)(this->ChainParentInitialGlobalTransform).Rotation.XY.m128d_f64
                         + 8);
  local_3a8 = (FName)(this->ChainParentInitialGlobalTransform).Rotation.ZW.m128d_f64[0];
  FStack_3a0 = *(FName *)((longlong)(this->ChainParentInitialGlobalTransform).Rotation.ZW.m128d_f64
                         + 8);
  local_398 = (FName)(this->ChainParentInitialGlobalTransform).Translation.XY.m128d_f64[0];
  FStack_390 = *(FName *)((longlong)
                          (this->ChainParentInitialGlobalTransform).Translation.XY.m128d_f64 + 8);
  local_388 = (FName)(this->ChainParentInitialGlobalTransform).Translation.ZW.m128d_f64[0];
  FStack_380 = *(FName *)((longlong)
                          (this->ChainParentInitialGlobalTransform).Translation.ZW.m128d_f64 + 8);
  local_378 = (FName)(this->ChainParentInitialGlobalTransform).Scale3D.XY.m128d_f64[0];
  FStack_370 = *(FName *)((longlong)(this->ChainParentInitialGlobalTransform).Scale3D.XY.m128d_f64 +
                         8);
  local_368 = (FName)(this->ChainParentInitialGlobalTransform).Scale3D.ZW.m128d_f64[0];
  FStack_360 = *(FName *)((longlong)(this->ChainParentInitialGlobalTransform).Scale3D.ZW.m128d_f64 +
                         8);
  local_358 = *(FName *)&this->bFoundStartBone;
  FStack_350.ComparisonIndex.Value = *(uint *)&this->field_0xe8;
  FStack_350.Number = *(uint *)&this->field_0xec;
  FVar3 = pFVar17[-1].StartBone;
  (((TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_> *)&this->ChainName)->AllocatorInstance).
  Data = (((TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_> *)&pFVar16->ChainName)->
         AllocatorInstance).Data;
  *(FName *)&(this->StartBone).ComparisonIndex = FVar3;
  uVar9 = pFVar17[-1].EndBone.Number;
  FVar3 = pFVar17[-1].IKGoalName;
  (this->EndBone).ComparisonIndex = (FNameEntryId)pFVar17[-1].EndBone.ComparisonIndex.Value;
  (this->EndBone).Number = uVar9;
  this->IKGoalName = FVar3;
  iVar21 = pFVar17[-1].RefPoseGlobalTransforms.ArrayNum;
  iVar13 = pFVar17[-1].RefPoseGlobalTransforms.ArrayMax;
  (this->RefPoseGlobalTransforms).AllocatorInstance.Data =
       pFVar17[-1].RefPoseGlobalTransforms.AllocatorInstance.Data;
  (this->RefPoseGlobalTransforms).ArrayNum = iVar21;
  (this->RefPoseGlobalTransforms).ArrayMax = iVar13;
  iVar21 = pFVar17[-1].RefPoseLocalTransforms.ArrayNum;
  iVar13 = pFVar17[-1].RefPoseLocalTransforms.ArrayMax;
  (this->RefPoseLocalTransforms).AllocatorInstance.Data =
       pFVar17[-1].RefPoseLocalTransforms.AllocatorInstance.Data;
  (this->RefPoseLocalTransforms).ArrayNum = iVar21;
  (this->RefPoseLocalTransforms).ArrayMax = iVar13;
  iVar21 = pFVar17[-1].CurrentLocalTransforms.ArrayNum;
  iVar13 = pFVar17[-1].CurrentLocalTransforms.ArrayMax;
  (this->CurrentLocalTransforms).AllocatorInstance.Data =
       pFVar17[-1].CurrentLocalTransforms.AllocatorInstance.Data;
  (this->CurrentLocalTransforms).ArrayNum = iVar21;
  (this->CurrentLocalTransforms).ArrayMax = iVar13;
  iVar21 = pFVar17[-1].Params.ArrayNum;
  iVar13 = pFVar17[-1].Params.ArrayMax;
  (this->Params).AllocatorInstance.Data = pFVar17[-1].Params.AllocatorInstance.Data;
  (this->Params).ArrayNum = iVar21;
  (this->Params).ArrayMax = iVar13;
  uVar4 = *(undefined8 *)&pFVar17[-1].BoneIndices.ArrayNum;
  (this->BoneIndices).AllocatorInstance.Data =
       (FScriptContainerElement *)pFVar17[-1].BoneIndices.AllocatorInstance.Data;
  *(undefined8 *)&(this->BoneIndices).ArrayNum = uVar4;
  iVar21 = pFVar17[-1].ChainParentBoneIndex;
  uVar4 = *(undefined8 *)&pFVar17[-1].field_0x78;
  this->InitialChainLength = pFVar17[-1].InitialChainLength;
  this->ChainParentBoneIndex = iVar21;
  *(undefined8 *)&this->field_0x78 = uVar4;
  dVar5 = pFVar17[-1].ChainParentInitialGlobalTransform.Rotation.XY.m128d_f64[1];
  (this->ChainParentInitialGlobalTransform).Rotation.XY.m128d_f64[0] =
       pFVar17[-1].ChainParentInitialGlobalTransform.Rotation.XY.m128d_f64[0];
  *(double *)((longlong)(this->ChainParentInitialGlobalTransform).Rotation.XY.m128d_f64 + 8) = dVar5
  ;
  dVar5 = pFVar17[-1].ChainParentInitialGlobalTransform.Rotation.ZW.m128d_f64[1];
  (this->ChainParentInitialGlobalTransform).Rotation.ZW.m128d_f64[0] =
       pFVar17[-1].ChainParentInitialGlobalTransform.Rotation.ZW.m128d_f64[0];
  *(double *)((longlong)(this->ChainParentInitialGlobalTransform).Rotation.ZW.m128d_f64 + 8) = dVar5
  ;
  dVar5 = pFVar17[-1].ChainParentInitialGlobalTransform.Translation.XY.m128d_f64[1];
  (this->ChainParentInitialGlobalTransform).Translation.XY.m128d_f64[0] =
       pFVar17[-1].ChainParentInitialGlobalTransform.Translation.XY.m128d_f64[0];
  *(double *)((longlong)(this->ChainParentInitialGlobalTransform).Translation.XY.m128d_f64 + 8) =
       dVar5;
  dVar5 = pFVar17[-1].ChainParentInitialGlobalTransform.Translation.ZW.m128d_f64[1];
  (this->ChainParentInitialGlobalTransform).Translation.ZW.m128d_f64[0] =
       pFVar17[-1].ChainParentInitialGlobalTransform.Translation.ZW.m128d_f64[0];
  *(double *)((longlong)(this->ChainParentInitialGlobalTransform).Translation.ZW.m128d_f64 + 8) =
       dVar5;
  dVar5 = pFVar17[-1].ChainParentInitialGlobalTransform.Scale3D.XY.m128d_f64[1];
  (this->ChainParentInitialGlobalTransform).Scale3D.XY.m128d_f64[0] =
       pFVar17[-1].ChainParentInitialGlobalTransform.Scale3D.XY.m128d_f64[0];
  *(double *)((longlong)(this->ChainParentInitialGlobalTransform).Scale3D.XY.m128d_f64 + 8) = dVar5;
  dVar5 = pFVar17[-1].ChainParentInitialGlobalTransform.Scale3D.ZW.m128d_f64[1];
  (this->ChainParentInitialGlobalTransform).Scale3D.ZW.m128d_f64[0] =
       pFVar17[-1].ChainParentInitialGlobalTransform.Scale3D.ZW.m128d_f64[0];
  *(double *)((longlong)(this->ChainParentInitialGlobalTransform).Scale3D.ZW.m128d_f64 + 8) = dVar5;
  bVar12 = pFVar17[-1].bFoundEndBone;
  bVar7 = pFVar17[-1].bEndIsStartOrChildOfStart;
  uVar8 = *(undefined5 *)&pFVar17[-1].field_0xe3;
  uVar4 = *(undefined8 *)&pFVar17[-1].field_0xe8;
  this->bFoundStartBone = pFVar17[-1].bFoundStartBone;
  this->bFoundEndBone = bVar12;
  this->bEndIsStartOrChildOfStart = bVar7;
  *(undefined5 *)&this->field_0xe3 = uVar8;
  *(undefined8 *)&this->field_0xe8 = uVar4;
  (((TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_> *)&pFVar16->ChainName)->
  AllocatorInstance).Data = (FScriptContainerElement *)local_438;
  pFVar17[-1].StartBone = FStack_430;
  pFVar17[-1].EndBone = local_428;
  pFVar17[-1].IKGoalName = FStack_420;
  pFVar17[-1].RefPoseGlobalTransforms.AllocatorInstance.Data = (FScriptContainerElement *)local_418;
  pFVar17[-1].RefPoseGlobalTransforms.ArrayNum = FStack_410.ComparisonIndex.Value;
  pFVar17[-1].RefPoseGlobalTransforms.ArrayMax = FStack_410.Number;
  pFVar17[-1].RefPoseLocalTransforms.AllocatorInstance.Data = (FScriptContainerElement *)local_408;
  pFVar17[-1].RefPoseLocalTransforms.ArrayNum = FStack_400.ComparisonIndex.Value;
  pFVar17[-1].RefPoseLocalTransforms.ArrayMax = FStack_400.Number;
  pFVar17[-1].CurrentLocalTransforms.AllocatorInstance.Data = (FScriptContainerElement *)local_3f8;
  pFVar17[-1].CurrentLocalTransforms.ArrayNum = FStack_3f0.ComparisonIndex.Value;
  pFVar17[-1].CurrentLocalTransforms.ArrayMax = FStack_3f0.Number;
  pFVar17[-1].Params.AllocatorInstance.Data = (FScriptContainerElement *)local_3e8;
  pFVar17[-1].Params.ArrayNum = FStack_3e0.ComparisonIndex.Value;
  pFVar17[-1].Params.ArrayMax = FStack_3e0.Number;
  pFVar17[-1].BoneIndices.AllocatorInstance.Data = (FScriptContainerElement *)local_3d8;
  pFVar17[-1].BoneIndices.ArrayNum = FStack_3d0.ComparisonIndex.Value;
  pFVar17[-1].BoneIndices.ArrayMax = FStack_3d0.Number;
  local_468 = local_468 + -1;
  pFVar17[-1].InitialChainLength = (float)local_3c8.ComparisonIndex.Value;
  pFVar17[-1].ChainParentBoneIndex = local_3c8.Number;
  *(uint *)&pFVar17[-1].field_0x78 = FStack_3c0.ComparisonIndex.Value;
  *(uint *)&pFVar17[-1].field_0x7c = FStack_3c0.Number;
  pFVar17[-1].ChainParentInitialGlobalTransform.Rotation.XY.m128d_f64[0] = (double)local_3b8;
  *(FName *)(pFVar17[-1].ChainParentInitialGlobalTransform.Rotation.XY.m128d_f64 + 1) = FStack_3b0;
  pFVar17[-1].ChainParentInitialGlobalTransform.Rotation.ZW.m128d_f64[0] = (double)local_3a8;
  *(FName *)(pFVar17[-1].ChainParentInitialGlobalTransform.Rotation.ZW.m128d_f64 + 1) = FStack_3a0;
  pFVar17[-1].ChainParentInitialGlobalTransform.Translation.XY.m128d_f64[0] = (double)local_398;
  *(FName *)(pFVar17[-1].ChainParentInitialGlobalTransform.Translation.XY.m128d_f64 + 1) =
       FStack_390;
  pFVar17[-1].ChainParentInitialGlobalTransform.Translation.ZW.m128d_f64[0] = (double)local_388;
  *(FName *)(pFVar17[-1].ChainParentInitialGlobalTransform.Translation.ZW.m128d_f64 + 1) =
       FStack_380;
  pFVar17[-1].ChainParentInitialGlobalTransform.Scale3D.XY.m128d_f64[0] = (double)local_378;
  *(FName *)(pFVar17[-1].ChainParentInitialGlobalTransform.Scale3D.XY.m128d_f64 + 1) = FStack_370;
  pFVar17[-1].ChainParentInitialGlobalTransform.Scale3D.ZW.m128d_f64[0] = (double)local_368;
  *(FName *)(pFVar17[-1].ChainParentInitialGlobalTransform.Scale3D.ZW.m128d_f64 + 1) = FStack_360;
  *(FName *)&pFVar17[-1].bFoundStartBone = local_358;
  *(uint *)&pFVar17[-1].field_0xe8 = FStack_350.ComparisonIndex.Value;
  *(uint *)&pFVar17[-1].field_0xec = FStack_350.Number;
  lVar14 = (longlong)pFVar16 + (-0xf0 - (longlong)this);
  lVar14 = lVar14 + SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar14),8);
  lVar15 = SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)pFVar19 - (longlong)pFVar20),8) +
           ((longlong)pFVar19 - (longlong)pFVar20);
  if ((lVar14 >> 7) - (lVar14 >> 0x3f) < (lVar15 >> 7) - (lVar15 >> 0x3f)) {
    if (pFVar20 < pFVar19) {
      p<Var18->__this = (FRetargeterBoneChains *)pFVar20;
      p<Var18[1].__this = (FRetargeterBoneChains *)pFVar19;
      *(int *)&p<Var18[2].__this = local_468;
      p<Var18 = p<Var18 + 3;
      local_470.Predicate = p<Var18;
    }
    if (pFVar16 <= this + 1) goto LAB_14df14332;
    pFVar19 = pFVar17 + -2;
    pFVar20 = this;
  }
  else {
    if (this + 1 < pFVar16) {
      p<Var18->__this = (FRetargeterBoneChains *)this;
      p<Var18[1].__this = (FRetargeterBoneChains *)(pFVar17 + -2);
      *(int *)&p<Var18[2].__this = local_468;
      p<Var18 = p<Var18 + 3;
      local_470.Predicate = p<Var18;
    }
    if (pFVar19 <= pFVar20) goto LAB_14df14332;
  }
  lVar14 = SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)pFVar19 - (longlong)pFVar20),8) +
           ((longlong)pFVar19 - (longlong)pFVar20);
  iVar21 = ((int)(lVar14 >> 7) - (int)(lVar14 >> 0x3f)) + 1;
  this = pFVar20;
  if (local_468 == 0) goto LAB_14df13e94;
  goto LAB_14df13830;
}

// IntroSortInternal<FRetargetChainPair,int,FIdentityFunctor,TDereferenceWrapper<FRetargetChainPair,`FRetargetChainMapping::SortMapping'::__l2::<lambda_1>_>_> @ 14df143a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FRetargetChainPair,int,FIdentityFunctor,TDereferenceWrapper<FRetargetChainPair,_FRetargetChainMapping::SortMapping_::__l2::<lambda_1>_>_>
          (FRetargetChainPair *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FRetargetChainPair,_public:_void___cdecl_FRetargetChainMapping::SortMapping(void)_::_2_::<lambda_1>_>
          param_4)

{
  FName FVar1;
  FName FVar2;
  FName FVar3;
  bool bVar4;
  int iVar5;
  FRetargetChainPair *pFVar6;
  FRetargetChainPair *pFVar7;
  FRetargetChainPair *pFVar8;
  FRetargetChainPair **ppFVar9;
  int iVar10;
  FRetargetChainPair *pFVar11;
  FRetargetChainPair *pFVar12;
  FRetargetChainPair *pFVar13;
  float fVar14;
  undefined1 auStack_388 [48];
  FRetargetChainPair *local_358;
  FRetargetChainPair *local_348;
  FRetargetChainPair *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar14 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar14;
    memset(local_330,0,0x2e8);
    ppFVar9 = &local_348;
    do {
      pFVar13 = ppFVar9[1];
      pFVar12 = *ppFVar9;
      local_358 = ppFVar9[2];
      iVar5 = (int)((longlong)pFVar13 - (longlong)pFVar12 >> 4) + 1;
      pFVar11 = pFVar12;
      iVar10 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_14df14460:
        if (8 < iVar5) {
          FVar1 = pFVar11->SourceChainName;
          pFVar6 = pFVar13 + 1;
          FVar2 = pFVar11[iVar5 / 2].TargetChainName;
          FVar3 = pFVar11[iVar5 / 2].SourceChainName;
          pFVar11[iVar5 / 2].TargetChainName = pFVar11->TargetChainName;
          pFVar11[iVar5 / 2].SourceChainName = FVar1;
          pFVar11->TargetChainName = FVar2;
          pFVar11->SourceChainName = FVar3;
          pFVar12 = pFVar11;
LAB_14df14490:
          pFVar8 = pFVar12;
          pFVar12 = pFVar8 + 1;
          if (pFVar12 <= pFVar13) goto code_r0x00014df14499;
          goto LAB_14df144b0;
        }
        for (; pFVar6 = pFVar11, pFVar12 = pFVar11, pFVar11 < pFVar13; pFVar13 = pFVar13 + -1) {
          while (pFVar8 = pFVar6, pFVar12 = pFVar12 + 1, pFVar12 <= pFVar13) {
            bVar4 = `FRetargetChainMapping::SortMapping'::__l2::<lambda_1>::operator()
                              (param_4.Predicate,pFVar8,pFVar12);
            pFVar6 = pFVar12;
            if (!bVar4) {
              pFVar6 = pFVar8;
            }
          }
          FVar1 = pFVar8->TargetChainName;
          FVar2 = pFVar8->SourceChainName;
          FVar3 = pFVar13->SourceChainName;
          pFVar8->TargetChainName = pFVar13->TargetChainName;
          pFVar8->SourceChainName = FVar3;
          pFVar13->TargetChainName = FVar1;
          pFVar13->SourceChainName = FVar2;
        }
        goto LAB_14df1457f;
      }
LAB_14df1456e:
      HeapSortInternal<FRetargetChainPair,int,FIdentityFunctor,TDereferenceWrapper<FRetargetChainPair,_FRetargetChainMapping::SortMapping_::__l2::<lambda_1>_>_>
                (pFVar12,iVar5,param_3,param_4);
LAB_14df1457f:
      ppFVar9 = ppFVar9 + -3;
    } while (&local_348 <= ppFVar9);
  }
  return;
code_r0x00014df14499:
  bVar4 = `FRetargetChainMapping::SortMapping'::__l2::<lambda_1>::operator()
                    (param_4.Predicate,pFVar11,pFVar12);
  if (!bVar4) goto LAB_14df14490;
LAB_14df144b0:
  do {
    pFVar7 = pFVar6;
    pFVar6 = pFVar7 + -1;
    if (pFVar6 <= pFVar11) break;
    bVar4 = `FRetargetChainMapping::SortMapping'::__l2::<lambda_1>::operator()
                      (param_4.Predicate,pFVar6,pFVar11);
  } while (!bVar4);
  FVar1 = pFVar7[-1].SourceChainName;
  if (pFVar12 <= pFVar6) {
    FVar2 = pFVar12->TargetChainName;
    FVar3 = pFVar8[1].SourceChainName;
    pFVar12->TargetChainName = pFVar6->TargetChainName;
    pFVar8[1].SourceChainName = FVar1;
    pFVar6->TargetChainName = FVar2;
    pFVar7[-1].SourceChainName = FVar3;
    goto LAB_14df14490;
  }
  FVar2 = pFVar11->TargetChainName;
  FVar3 = pFVar11->SourceChainName;
  iVar10 = iVar10 + -1;
  pFVar11->TargetChainName = pFVar6->TargetChainName;
  pFVar11->SourceChainName = FVar1;
  pFVar6->TargetChainName = FVar2;
  pFVar7[-1].SourceChainName = FVar3;
  if ((longlong)((longlong)pFVar6 + (-0x10 - (longlong)pFVar11) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pFVar13 - (longlong)pFVar12 & 0xfffffffffffffff0U)) {
    if (pFVar12 < pFVar13) {
      *ppFVar9 = pFVar12;
      ppFVar9[1] = pFVar13;
      *(int *)(ppFVar9 + 2) = iVar10;
      ppFVar9 = ppFVar9 + 3;
    }
    if (pFVar6 <= pFVar11 + 1) goto LAB_14df1457f;
    pFVar13 = pFVar7 + -2;
    pFVar12 = pFVar11;
  }
  else {
    if (pFVar11 + 1 < pFVar6) {
      *ppFVar9 = pFVar11;
      ppFVar9[1] = pFVar7 + -2;
      *(int *)(ppFVar9 + 2) = iVar10;
      ppFVar9 = ppFVar9 + 3;
    }
    if (pFVar13 <= pFVar12) goto LAB_14df1457f;
  }
  iVar5 = (int)((longlong)pFVar13 - (longlong)pFVar12 >> 4) + 1;
  pFVar11 = pFVar12;
  if (iVar10 == 0) goto LAB_14df1456e;
  goto LAB_14df14460;
}

// NewObject<UIKRetargetOpControllerBase> @ 14df14740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UIKRetargetOpControllerBase * __cdecl
NewObject<UIKRetargetOpControllerBase>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UIKRetargetOpControllerBase *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UIKRetargetOpControllerBase::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UIKRetargetOpControllerBase *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// RemoveAll<`FIKRetargetAlignPoleVectorOp::ApplyIKRigs'::__l2::<lambda_1>_> @ 14df148c0

int __thiscall
TArray<FRetargetPoleVectorSettings,TSizedDefaultAllocator<32>_>::
RemoveAll<_FIKRetargetAlignPoleVectorOp::ApplyIKRigs_::__l2::<lambda_1>_>
          (TArray<FRetargetPoleVectorSettings,TSizedDefaultAllocator<32>_> *this,<lambda_1> *param_1
          )

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  byte bVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  byte bVar11;
  int iVar12;
  
  iVar1 = this->ArrayNum;
  lVar10 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  pFVar6 = (param_1->RequiredTargetChains->AllocatorInstance).Data;
  pFVar3 = pFVar6 + (longlong)param_1->RequiredTargetChains->ArrayNum * 8;
  iVar12 = 0;
  if (pFVar6 != pFVar3) {
    do {
      if (*(longlong *)pFVar6 == *(longlong *)pFVar2) {
        bVar11 = 1;
        goto LAB_14df14945;
      }
      pFVar6 = pFVar6 + 8;
    } while (pFVar6 != pFVar3);
  }
  bVar11 = 0;
LAB_14df14945:
  lVar9 = 0;
  iVar7 = 0;
  do {
    lVar9 = lVar9 + 1;
    iVar8 = iVar7 + 1;
    if (lVar9 < lVar10) {
      pFVar3 = (param_1->RequiredTargetChains->AllocatorInstance).Data;
      pFVar6 = pFVar2 + lVar9 * 0x28;
      do {
        if (pFVar3 != pFVar3 + (longlong)param_1->RequiredTargetChains->ArrayNum * 8) {
          pFVar5 = pFVar3;
          do {
            if (*(longlong *)pFVar5 == *(longlong *)pFVar6) {
              bVar4 = 1;
              goto LAB_14df149a5;
            }
            pFVar5 = pFVar5 + 8;
          } while (pFVar5 != pFVar3 + (longlong)param_1->RequiredTargetChains->ArrayNum * 8);
        }
        bVar4 = 0;
LAB_14df149a5:
        if (bVar11 != bVar4) break;
        iVar8 = iVar8 + 1;
        lVar9 = lVar9 + 1;
        pFVar6 = pFVar6 + 0x28;
      } while (lVar9 < lVar10);
    }
    if (bVar11 != 0) {
      if (iVar12 != iVar7) {
        memmove(pFVar2 + (longlong)iVar12 * 0x28,pFVar2 + (longlong)iVar7 * 0x28,
                (longlong)(iVar8 - iVar7) * 0x28);
      }
      iVar12 = iVar12 + (iVar8 - iVar7);
    }
    bVar11 = bVar11 ^ 1;
    iVar7 = iVar8;
    if (lVar10 <= lVar9) {
      this->ArrayNum = iVar12;
      return iVar1 - iVar12;
    }
  } while( true );
}

// RemoveAll<`FIKRetargetFKChainsOp::ApplyIKRigs'::__l2::<lambda_1>_> @ 14df14a70

int __thiscall
TArray<FRetargetFKChainSettings,TSizedDefaultAllocator<32>_>::
RemoveAll<_FIKRetargetFKChainsOp::ApplyIKRigs_::__l2::<lambda_1>_>
          (TArray<FRetargetFKChainSettings,TSizedDefaultAllocator<32>_> *this,<lambda_1> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  byte bVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  byte bVar11;
  int iVar12;
  
  iVar1 = this->ArrayNum;
  lVar10 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  pFVar6 = (param_1->RequiredTargetChains->AllocatorInstance).Data;
  pFVar3 = pFVar6 + (longlong)param_1->RequiredTargetChains->ArrayNum * 8;
  iVar12 = 0;
  if (pFVar6 != pFVar3) {
    do {
      if (*(longlong *)pFVar6 == *(longlong *)pFVar2) {
        bVar11 = 1;
        goto LAB_14df14af5;
      }
      pFVar6 = pFVar6 + 8;
    } while (pFVar6 != pFVar3);
  }
  bVar11 = 0;
LAB_14df14af5:
  lVar9 = 0;
  iVar7 = 0;
  do {
    lVar9 = lVar9 + 1;
    iVar8 = iVar7 + 1;
    if (lVar9 < lVar10) {
      pFVar3 = (param_1->RequiredTargetChains->AllocatorInstance).Data;
      pFVar6 = pFVar2 + lVar9 * 0x28;
      do {
        if (pFVar3 != pFVar3 + (longlong)param_1->RequiredTargetChains->ArrayNum * 8) {
          pFVar5 = pFVar3;
          do {
            if (*(longlong *)pFVar5 == *(longlong *)pFVar6) {
              bVar4 = 1;
              goto LAB_14df14b55;
            }
            pFVar5 = pFVar5 + 8;
          } while (pFVar5 != pFVar3 + (longlong)param_1->RequiredTargetChains->ArrayNum * 8);
        }
        bVar4 = 0;
LAB_14df14b55:
        if (bVar11 != bVar4) break;
        iVar8 = iVar8 + 1;
        lVar9 = lVar9 + 1;
        pFVar6 = pFVar6 + 0x28;
      } while (lVar9 < lVar10);
    }
    if (bVar11 != 0) {
      if (iVar12 != iVar7) {
        memmove(pFVar2 + (longlong)iVar12 * 0x28,pFVar2 + (longlong)iVar7 * 0x28,
                (longlong)(iVar8 - iVar7) * 0x28);
      }
      iVar12 = iVar12 + (iVar8 - iVar7);
    }
    bVar11 = bVar11 ^ 1;
    iVar7 = iVar8;
    if (lVar10 <= lVar9) {
      this->ArrayNum = iVar12;
      return iVar1 - iVar12;
    }
  } while( true );
}

// RemoveAll<`FIKRetargetIKChainsOp::RegenerateChainSettings'::__l2::<lambda_1>_> @ 14df14c20

int __thiscall
TArray<FRetargetIKChainSettings,TSizedDefaultAllocator<32>_>::
RemoveAll<_FIKRetargetIKChainsOp::RegenerateChainSettings_::__l2::<lambda_1>_>
          (TArray<FRetargetIKChainSettings,TSizedDefaultAllocator<32>_> *this,<lambda_1> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  byte bVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  byte bVar11;
  int iVar12;
  
  iVar1 = this->ArrayNum;
  lVar10 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  pFVar6 = (param_1->RequiredTargetChains->AllocatorInstance).Data;
  pFVar3 = pFVar6 + (longlong)param_1->RequiredTargetChains->ArrayNum * 8;
  iVar12 = 0;
  if (pFVar6 != pFVar3) {
    do {
      if (*(longlong *)pFVar6 == *(longlong *)pFVar2) {
        bVar11 = 1;
        goto LAB_14df14ca5;
      }
      pFVar6 = pFVar6 + 8;
    } while (pFVar6 != pFVar3);
  }
  bVar11 = 0;
LAB_14df14ca5:
  lVar7 = 0;
  iVar8 = 0;
  do {
    lVar7 = lVar7 + 1;
    iVar9 = iVar8 + 1;
    if (lVar7 < lVar10) {
      pFVar6 = pFVar2 + lVar7 * 0xa0;
      pFVar3 = (param_1->RequiredTargetChains->AllocatorInstance).Data;
      do {
        if (pFVar3 != pFVar3 + (longlong)param_1->RequiredTargetChains->ArrayNum * 8) {
          pFVar5 = pFVar3;
          do {
            if (*(longlong *)pFVar5 == *(longlong *)pFVar6) {
              bVar4 = 1;
              goto LAB_14df14d04;
            }
            pFVar5 = pFVar5 + 8;
          } while (pFVar5 != pFVar3 + (longlong)param_1->RequiredTargetChains->ArrayNum * 8);
        }
        bVar4 = 0;
LAB_14df14d04:
        if (bVar11 != bVar4) break;
        iVar9 = iVar9 + 1;
        lVar7 = lVar7 + 1;
        pFVar6 = pFVar6 + 0xa0;
      } while (lVar7 < lVar10);
    }
    if (bVar11 != 0) {
      if (iVar12 != iVar8) {
        memmove(pFVar2 + (longlong)iVar12 * 0xa0,pFVar2 + (longlong)iVar8 * 0xa0,
                (longlong)(iVar9 - iVar8) * 0xa0);
      }
      iVar12 = iVar12 + (iVar9 - iVar8);
    }
    bVar11 = bVar11 ^ 1;
    iVar8 = iVar9;
    if (lVar10 <= lVar7) {
      this->ArrayNum = iVar12;
      return iVar1 - iVar12;
    }
  } while( true );
}

// RemoveAll<`FIKRetargetStrideWarpingOp::RegenerateChainSettings'::__l2::<lambda_1>_> @ 14df14dc0

int __thiscall
TArray<FRetargetStrideWarpChainSettings,TSizedDefaultAllocator<32>_>::
RemoveAll<_FIKRetargetStrideWarpingOp::RegenerateChainSettings_::__l2::<lambda_1>_>
          (TArray<FRetargetStrideWarpChainSettings,TSizedDefaultAllocator<32>_> *this,
          <lambda_1> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  byte bVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  byte bVar11;
  int iVar12;
  
  iVar1 = this->ArrayNum;
  lVar10 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  pFVar9 = (param_1->RequiredTargetChains->AllocatorInstance).Data;
  pFVar3 = pFVar9 + (longlong)param_1->RequiredTargetChains->ArrayNum * 8;
  iVar12 = 0;
  if (pFVar9 != pFVar3) {
    do {
      if (*(longlong *)pFVar9 == *(longlong *)pFVar2) {
        bVar11 = 1;
        goto LAB_14df14e45;
      }
      pFVar9 = pFVar9 + 8;
    } while (pFVar9 != pFVar3);
  }
  bVar11 = 0;
LAB_14df14e45:
  lVar8 = 0;
  iVar6 = 0;
  do {
    lVar8 = lVar8 + 1;
    iVar7 = iVar6 + 1;
    if (lVar8 < lVar10) {
      pFVar3 = (param_1->RequiredTargetChains->AllocatorInstance).Data;
      pFVar9 = pFVar2 + lVar8 * 0xc;
      do {
        if (pFVar3 != pFVar3 + (longlong)param_1->RequiredTargetChains->ArrayNum * 8) {
          pFVar5 = pFVar3;
          do {
            if (*(longlong *)pFVar5 == *(longlong *)pFVar9) {
              bVar4 = 1;
              goto LAB_14df14ea5;
            }
            pFVar5 = pFVar5 + 8;
          } while (pFVar5 != pFVar3 + (longlong)param_1->RequiredTargetChains->ArrayNum * 8);
        }
        bVar4 = 0;
LAB_14df14ea5:
        if (bVar11 != bVar4) break;
        iVar7 = iVar7 + 1;
        lVar8 = lVar8 + 1;
        pFVar9 = pFVar9 + 0xc;
      } while (lVar8 < lVar10);
    }
    if (bVar11 != 0) {
      if (iVar12 != iVar6) {
        memmove(pFVar2 + (longlong)iVar12 * 0xc,pFVar2 + (longlong)iVar6 * 0xc,
                (longlong)(iVar7 - iVar6) * 0xc);
      }
      iVar12 = iVar12 + (iVar7 - iVar6);
    }
    bVar11 = bVar11 ^ 1;
    iVar6 = iVar7;
    if (lVar10 <= lVar8) {
      this->ArrayNum = iVar12;
      return iVar1 - iVar12;
    }
  } while( true );
}

// Sort<TSortableMapBase<FName,UE::Math::TQuat<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TQuat<double>,0>_>::FKeyComparisonClass<`FIKRetargetPose::SortHierarchically'::__l2::<lambda_1>_>_> @ 14df14f70

void __thiscall
TSet<TTuple<FName,UE::Math::TQuat<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TQuat<double>,0>,FDefaultSetAllocator>
::
Sort<TSortableMapBase<FName,UE::Math::TQuat<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TQuat<double>,0>_>::FKeyComparisonClass<_FIKRetargetPose::SortHierarchically_::__l2::<lambda_1>_>_>
          (TSet<TTuple<FName,UE::Math::TQuat<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TQuat<double>,0>,FDefaultSetAllocator>
           *this,FKeyComparisonClass<_public:_void___cdecl_FIKRetargetPose::SortHierarchically(FIKRigSkeleton_const_&)_::_2_::<lambda_1>_>
                 *param_1)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<64,16>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FKeyComparisonClass<_public:_void___cdecl_FIKRetargetPose::SortHierarchically(FIKRigSkeleton_const_&)_::_2_::<lambda_1>_>
  *local_res8;
  
  local_res8 = param_1;
  if (0 < *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34) {
    TSparseArrayBase<64,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact((TSparseArrayBase<64,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this);
    iVar4 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    pTVar1 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<64,16>_> **)&this->Elements;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,16>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TQuat<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,UE::Math::TQuat<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TQuat<double>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,UE::Math::TQuat<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TQuat<double>,0>_>::FKeyComparisonClass<_FIKRetargetPose::SortHierarchically_::__l2::<lambda_1>_>_>_>_>
              (pTVar1,iVar4,local_res8._0_1_,
               (FElementCompareClass<TSortableMapBase<FName,UE::Math::TQuat<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TQuat<double>,0>_>::FKeyComparisonClass<_public:_void___cdecl_FIKRetargetPose::SortHierarchically(FIKRigSkeleton_const_&)_::_2_::<lambda_1>_>_>
                *)&local_res8);
  }
  Rehash(this);
  return;
}

// StaticEnum<enum_EAutoMapChainType> @ 14df15000

UEnum * __cdecl StaticEnum<enum_EAutoMapChainType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAutoMapChainType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UEnum_EAutoMapChainType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_IKRig_EAutoMapChainType,(UObject *)pUVar1,
                       L"EAutoMapChainType");
  }
  return Z_Registration_Info_UEnum_EAutoMapChainType.OuterSingleton;
}

// StaticEnum<enum_EBasicAxis> @ 14df15040

UEnum * __cdecl StaticEnum<enum_EBasicAxis>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EBasicAxis.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UEnum_EBasicAxis.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_IKRig_EBasicAxis,(UObject *)pUVar1,L"EBasicAxis");
  }
  return Z_Registration_Info_UEnum_EBasicAxis.OuterSingleton;
}

// StaticEnum<enum_ECopyOpSettingsContext> @ 14df15080

UEnum * __cdecl StaticEnum<enum_ECopyOpSettingsContext>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECopyOpSettingsContext.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UEnum_ECopyOpSettingsContext.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_IKRig_ECopyOpSettingsContext,(UObject *)pUVar1,
                       L"ECopyOpSettingsContext");
  }
  return Z_Registration_Info_UEnum_ECopyOpSettingsContext.OuterSingleton;
}

// StaticEnum<enum_EFKChainRotationMode> @ 14df150c0

UEnum * __cdecl StaticEnum<enum_EFKChainRotationMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFKChainRotationMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UEnum_EFKChainRotationMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_IKRig_EFKChainRotationMode,(UObject *)pUVar1,
                       L"EFKChainRotationMode");
  }
  return Z_Registration_Info_UEnum_EFKChainRotationMode.OuterSingleton;
}

// StaticEnum<enum_EFKChainTranslationMode> @ 14df15100

UEnum * __cdecl StaticEnum<enum_EFKChainTranslationMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFKChainTranslationMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UEnum_EFKChainTranslationMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_IKRig_EFKChainTranslationMode,(UObject *)pUVar1,
                       L"EFKChainTranslationMode");
  }
  return Z_Registration_Info_UEnum_EFKChainTranslationMode.OuterSingleton;
}

// StaticEnum<enum_EIKRigGoalSpace> @ 14df15140

UEnum * __cdecl StaticEnum<enum_EIKRigGoalSpace>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EIKRigGoalSpace.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UEnum_EIKRigGoalSpace.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_IKRig_EIKRigGoalSpace,(UObject *)pUVar1,L"EIKRigGoalSpace")
    ;
  }
  return Z_Registration_Info_UEnum_EIKRigGoalSpace.OuterSingleton;
}

// StaticEnum<enum_EIKRigGoalTransformSource> @ 14df15180

UEnum * __cdecl StaticEnum<enum_EIKRigGoalTransformSource>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EIKRigGoalTransformSource.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UEnum_EIKRigGoalTransformSource.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_IKRig_EIKRigGoalTransformSource,(UObject *)pUVar1,
                       L"EIKRigGoalTransformSource");
  }
  return Z_Registration_Info_UEnum_EIKRigGoalTransformSource.OuterSingleton;
}

// StaticEnum<enum_EPinBoneRotationMode> @ 14df151c0

UEnum * __cdecl StaticEnum<enum_EPinBoneRotationMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPinBoneRotationMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UEnum_EPinBoneRotationMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_IKRig_EPinBoneRotationMode,(UObject *)pUVar1,
                       L"EPinBoneRotationMode");
  }
  return Z_Registration_Info_UEnum_EPinBoneRotationMode.OuterSingleton;
}

// StaticEnum<enum_EPinBoneTranslationMode> @ 14df15200

UEnum * __cdecl StaticEnum<enum_EPinBoneTranslationMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPinBoneTranslationMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UEnum_EPinBoneTranslationMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_IKRig_EPinBoneTranslationMode,(UObject *)pUVar1,
                       L"EPinBoneTranslationMode");
  }
  return Z_Registration_Info_UEnum_EPinBoneTranslationMode.OuterSingleton;
}

// StaticEnum<enum_EPinBoneType> @ 14df15240

UEnum * __cdecl StaticEnum<enum_EPinBoneType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPinBoneType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UEnum_EPinBoneType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_IKRig_EPinBoneType,(UObject *)pUVar1,L"EPinBoneType");
  }
  return Z_Registration_Info_UEnum_EPinBoneType.OuterSingleton;
}

// StaticEnum<enum_ERetargetRotationMode> @ 14df15280

UEnum * __cdecl StaticEnum<enum_ERetargetRotationMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERetargetRotationMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UEnum_ERetargetRotationMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_IKRig_ERetargetRotationMode,(UObject *)pUVar1,
                       L"ERetargetRotationMode");
  }
  return Z_Registration_Info_UEnum_ERetargetRotationMode.OuterSingleton;
}

// StaticEnum<enum_ERetargetSourceMode> @ 14df152c0

UEnum * __cdecl StaticEnum<enum_ERetargetSourceMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERetargetSourceMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UEnum_ERetargetSourceMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_IKRig_ERetargetSourceMode,(UObject *)pUVar1,
                       L"ERetargetSourceMode");
  }
  return Z_Registration_Info_UEnum_ERetargetSourceMode.OuterSingleton;
}

// StaticEnum<enum_ERetargetSourceOrTarget> @ 14df15300

UEnum * __cdecl StaticEnum<enum_ERetargetSourceOrTarget>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERetargetSourceOrTarget.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UEnum_ERetargetSourceOrTarget.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_IKRig_ERetargetSourceOrTarget,(UObject *)pUVar1,
                       L"ERetargetSourceOrTarget");
  }
  return Z_Registration_Info_UEnum_ERetargetSourceOrTarget.OuterSingleton;
}

// StaticEnum<enum_ERetargetTranslationMode> @ 14df15340

UEnum * __cdecl StaticEnum<enum_ERetargetTranslationMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERetargetTranslationMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UEnum_ERetargetTranslationMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_IKRig_ERetargetTranslationMode,(UObject *)pUVar1,
                       L"ERetargetTranslationMode");
  }
  return Z_Registration_Info_UEnum_ERetargetTranslationMode.OuterSingleton;
}

// StaticEnum<enum_ERootMotionHeightSource> @ 14df15380

UEnum * __cdecl StaticEnum<enum_ERootMotionHeightSource>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERootMotionHeightSource.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UEnum_ERootMotionHeightSource.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_IKRig_ERootMotionHeightSource,(UObject *)pUVar1,
                       L"ERootMotionHeightSource");
  }
  return Z_Registration_Info_UEnum_ERootMotionHeightSource.OuterSingleton;
}

// StaticEnum<enum_ERootMotionSource> @ 14df153c0

UEnum * __cdecl StaticEnum<enum_ERootMotionSource>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERootMotionSource.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UEnum_ERootMotionSource.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_IKRig_ERootMotionSource,(UObject *)pUVar1,
                       L"ERootMotionSource");
  }
  return Z_Registration_Info_UEnum_ERootMotionSource.OuterSingleton;
}

// StaticEnum<enum_EScaleSourcePivot> @ 14df15400

UEnum * __cdecl StaticEnum<enum_EScaleSourcePivot>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EScaleSourcePivot.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UEnum_EScaleSourcePivot.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_IKRig_EScaleSourcePivot,(UObject *)pUVar1,
                       L"EScaleSourcePivot");
  }
  return Z_Registration_Info_UEnum_EScaleSourcePivot.OuterSingleton;
}

// StaticEnum<enum_EStretchLimbRotationMode> @ 14df15440

UEnum * __cdecl StaticEnum<enum_EStretchLimbRotationMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStretchLimbRotationMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UEnum_EStretchLimbRotationMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_IKRig_EStretchLimbRotationMode,(UObject *)pUVar1,
                       L"EStretchLimbRotationMode");
  }
  return Z_Registration_Info_UEnum_EStretchLimbRotationMode.OuterSingleton;
}

// StaticEnum<enum_EStretchLimbSquashMode> @ 14df15480

UEnum * __cdecl StaticEnum<enum_EStretchLimbSquashMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStretchLimbSquashMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UEnum_EStretchLimbSquashMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_IKRig_EStretchLimbSquashMode,(UObject *)pUVar1,
                       L"EStretchLimbSquashMode");
  }
  return Z_Registration_Info_UEnum_EStretchLimbSquashMode.OuterSingleton;
}

// StaticEnum<enum_EWarpingDirectionSource> @ 14df154c0

UEnum * __cdecl StaticEnum<enum_EWarpingDirectionSource>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWarpingDirectionSource.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UEnum_EWarpingDirectionSource.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_IKRig_EWarpingDirectionSource,(UObject *)pUVar1,
                       L"EWarpingDirectionSource");
  }
  return Z_Registration_Info_UEnum_EWarpingDirectionSource.OuterSingleton;
}

// ~TFunction_OwnedObject<`FAnimNode_IKRig::InitializeProperties'::__l20::<lambda_2>,0,0> @ 14df1b280

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAnimNode_IKRig::InitializeProperties'::__l20::<lambda_2>,0,0>::
~TFunction_OwnedObject<_FAnimNode_IKRig::InitializeProperties_::__l20::<lambda_2>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAnimNode_IKRig::InitializeProperties'::`20'::<lambda_2>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FAnimNode_IKRig::InitializeProperties'::__l24::<lambda_3>,0,0> @ 14df1b2a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAnimNode_IKRig::InitializeProperties'::__l24::<lambda_3>,0,0>::
~TFunction_OwnedObject<_FAnimNode_IKRig::InitializeProperties_::__l24::<lambda_3>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAnimNode_IKRig::InitializeProperties'::`24'::<lambda_3>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FAnimNode_IKRig::InitializeProperties'::__l28::<lambda_4>,0,0> @ 14df1b2c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAnimNode_IKRig::InitializeProperties'::__l28::<lambda_4>,0,0>::
~TFunction_OwnedObject<_FAnimNode_IKRig::InitializeProperties_::__l28::<lambda_4>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAnimNode_IKRig::InitializeProperties'::`28'::<lambda_4>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FAnimNode_IKRig::InitializeProperties'::__l32::<lambda_5>,0,0> @ 14df1b2e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAnimNode_IKRig::InitializeProperties'::__l32::<lambda_5>,0,0>::
~TFunction_OwnedObject<_FAnimNode_IKRig::InitializeProperties_::__l32::<lambda_5>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAnimNode_IKRig::InitializeProperties'::`32'::<lambda_5>,0,0>::
        _vftable_;
  return;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14df20ce8

/* [thunk]:public: virtual void * __ptr64 __cdecl UIKRigComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UIKRigComponent::_vector_deleting_destructor__adjustor_40__(UIKRigComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UIKRigComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{192}' @ 14df20cf8

/* [thunk]:public: virtual void * __ptr64 __cdecl UIKRigComponent::`vector deleting
   destructor'`adjustor{192}' (unsigned int) __ptr64 */

void * __thiscall
UIKRigComponent::_vector_deleting_destructor__adjustor_192__(UIKRigComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UIKRigComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14df20d0c

/* [thunk]:public: virtual void * __ptr64 __cdecl UIKRigDefinition::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UIKRigDefinition::_vector_deleting_destructor__adjustor_40__(UIKRigDefinition *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UIKRigDefinition *)&this[-1].RetargetDefinition,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14df20d20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAnimNode_IKRig::InitializeProperties'::__l20::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAnimNode_IKRig::InitializeProperties'::`20'::<lambda_2>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df20d60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAnimNode_IKRig::InitializeProperties'::__l24::<lambda_3>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAnimNode_IKRig::InitializeProperties'::`24'::<lambda_3>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df20da0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAnimNode_IKRig::InitializeProperties'::__l28::<lambda_4>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAnimNode_IKRig::InitializeProperties'::`28'::<lambda_4>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df20de0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAnimNode_IKRig::InitializeProperties'::__l32::<lambda_5>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAnimNode_IKRig::InitializeProperties'::`32'::<lambda_5>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df20e20

void * __thiscall FAnimNode_IKRig::_scalar_deleting_destructor_(FAnimNode_IKRig *this,uint param_1)

{
  ~FAnimNode_IKRig(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x308);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df20e60

void * __thiscall
FIKRetargetAdditivePoseOpSettings::_scalar_deleting_destructor_
          (FIKRetargetAdditivePoseOpSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  if ((UObject *)this->_padding_ != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this->_padding_);
    this->_padding_ = 0;
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df20ec0

void * __thiscall
FIKRetargetAlignPoleVectorOpSettings::_scalar_deleting_destructor_
          (FIKRetargetAlignPoleVectorOpSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChainsToAlign).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  if ((UObject *)this->_padding_ != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this->_padding_);
    this->_padding_ = 0;
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df20f30

void * __thiscall
FIKRetargetCopyBasePoseOpSettings::_scalar_deleting_destructor_
          (FIKRetargetCopyBasePoseOpSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->BonesToExclude).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  if ((UObject *)this->_padding_ != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this->_padding_);
    this->_padding_ = 0;
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df20fa0

void * __thiscall
FIKRetargetCurveRemapOpSettings::_scalar_deleting_destructor_
          (FIKRetargetCurveRemapOpSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->CurvesToRemap).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  if ((UObject *)this->_padding_ != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this->_padding_);
    this->_padding_ = 0;
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df21010

void * __thiscall
FIKRetargetFKChainsOpSettings::_scalar_deleting_destructor_
          (FIKRetargetFKChainsOpSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChainMapping).ChainMap.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ChainsToRetarget).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  if ((UObject *)this->_padding_ != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this->_padding_);
    this->_padding_ = 0;
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df21090

void * __thiscall
FIKRetargetFilterBoneOpSettings::_scalar_deleting_destructor_
          (FIKRetargetFilterBoneOpSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->BonesToFilter).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  if ((UObject *)this->_padding_ != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this->_padding_);
    this->_padding_ = 0;
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df21100

void * __thiscall
FIKRetargetIKChainsOpSettings::_scalar_deleting_destructor_
          (FIKRetargetIKChainsOpSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChainsToRetarget).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  if ((UObject *)this->_padding_ != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this->_padding_);
    this->_padding_ = 0;
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df21170

void * __thiscall
FIKRetargetOpSettingsBase::_scalar_deleting_destructor_
          (FIKRetargetOpSettingsBase *this,uint param_1)

{
  UObject *pUVar1;
  
  this->_padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  pUVar1 = (this->Controller).Object;
  if (pUVar1 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar1);
    (this->Controller).Object = (UObject *)0x0;
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df211d0

void * __thiscall
FIKRetargetPelvisMotionOpSettings::_scalar_deleting_destructor_
          (FIKRetargetPelvisMotionOpSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  if ((UObject *)this->_padding_ != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this->_padding_);
    this->_padding_ = 0;
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x148);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df21230

void * __thiscall
FIKRetargetPinBoneOpSettings::_scalar_deleting_destructor_
          (FIKRetargetPinBoneOpSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->BonesToPin).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  if ((UObject *)this->_padding_ != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this->_padding_);
    this->_padding_ = 0;
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df212a0

void * __thiscall
FIKRetargetRootMotionOpSettings::_scalar_deleting_destructor_
          (FIKRetargetRootMotionOpSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  if ((UObject *)this->_padding_ != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this->_padding_);
    this->_padding_ = 0;
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df21300

void * __thiscall
FIKRetargetRunIKRigOpSettings::_scalar_deleting_destructor_
          (FIKRetargetRunIKRigOpSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ExcludedGoals).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  if ((UObject *)this->_padding_ != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this->_padding_);
    this->_padding_ = 0;
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df21370

void * __thiscall
FIKRetargetScaleSourceOpSettings::_scalar_deleting_destructor_
          (FIKRetargetScaleSourceOpSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  if ((UObject *)this->_padding_ != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this->_padding_);
    this->_padding_ = 0;
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df213d0

void * __thiscall
FIKRetargetSpeedPlantingOpSettings::_scalar_deleting_destructor_
          (FIKRetargetSpeedPlantingOpSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChainsToSpeedPlant).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  if ((UObject *)this->_padding_ != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this->_padding_);
    this->_padding_ = 0;
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df21440

void * __thiscall
FIKRetargetStretchChainOpSettings::_scalar_deleting_destructor_
          (FIKRetargetStretchChainOpSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChainsToStretch).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  if ((UObject *)this->_padding_ != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this->_padding_);
    this->_padding_ = 0;
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df214b0

void * __thiscall
FIKRetargetStrideWarpingOpSettings::_scalar_deleting_destructor_
          (FIKRetargetStrideWarpingOpSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChainSettings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  if ((UObject *)this->_padding_ != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this->_padding_);
    this->_padding_ = 0;
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df21520

void * __thiscall
FIKRigBodyMoverGoalSettings::_scalar_deleting_destructor_
          (FIKRigBodyMoverGoalSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FIKRigSettingsBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df21560

void * __thiscall
FIKRigBodyMoverSettings::_scalar_deleting_destructor_(FIKRigBodyMoverSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FIKRigSettingsBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df215a0

void * __thiscall
FIKRigBoneSettingsBase::_scalar_deleting_destructor_(FIKRigBoneSettingsBase *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FIKRigSettingsBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df215e0

void * __thiscall
FIKRigFBIKBoneSettings::_scalar_deleting_destructor_(FIKRigFBIKBoneSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FIKRigSettingsBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df21620

void * __thiscall
FIKRigFBIKGoalSettings::_scalar_deleting_destructor_(FIKRigFBIKGoalSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FIKRigSettingsBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df21660

void * __thiscall
FIKRigFBIKSettings::_scalar_deleting_destructor_(FIKRigFBIKSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FIKRigSettingsBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df216a0

void * __thiscall
FIKRigGoalSettingsBase::_scalar_deleting_destructor_(FIKRigGoalSettingsBase *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FIKRigSettingsBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df216e0

void * __thiscall
FIKRigLimbSolverSettings::_scalar_deleting_destructor_(FIKRigLimbSolverSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FIKRigSettingsBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df21720

void * __thiscall
FIKRigPoleSolverSettings::_scalar_deleting_destructor_(FIKRigPoleSolverSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FIKRigSettingsBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df21760

void * __thiscall
FIKRigSetTransformSettings::_scalar_deleting_destructor_
          (FIKRigSetTransformSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FIKRigSettingsBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df217a0

void * __thiscall
FIKRigSettingsBase::_scalar_deleting_destructor_(FIKRigSettingsBase *this,uint param_1)

{
  *this = (FIKRigSettingsBase)&___7FIKRigSettingsBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df217e0

void * __thiscall
FIKRigSolverSettingsBase::_scalar_deleting_destructor_(FIKRigSolverSettingsBase *this,uint param_1)

{
  *this = (FIKRigSolverSettingsBase)&___7FIKRigSettingsBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df21820

void * __thiscall
FLimbSolverSettings::_scalar_deleting_destructor_(FLimbSolverSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FIKRigSettingsBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df21860

void * __thiscall
IIKGoalCreatorInterface::_scalar_deleting_destructor_(IIKGoalCreatorInterface *this,uint param_1)

{
  *this = (IIKGoalCreatorInterface)&___7IIKGoalCreatorInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df218a0

void * __thiscall UCurveRemapOp::_scalar_deleting_destructor_(UCurveRemapOp *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UCurveRemapOp__6B_;
  pFVar1 = (this->CurvesToRemap).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7URetargetOpBase__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df21920

void * __thiscall
UIKGoalCreatorInterface::_scalar_deleting_destructor_(UIKGoalCreatorInterface *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14df21980

void * __thiscall
UIKRetargetAdditivePoseController::_scalar_deleting_destructor_
          (UIKRetargetAdditivePoseController *this,uint param_1)

{
  *(undefined ***)this = &___7UIKRetargetOpControllerBase__6B_;
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

// `scalar_deleting_destructor' @ 14df219e0

void * __thiscall
UIKRetargetAlignPoleVectorController::_scalar_deleting_destructor_
          (UIKRetargetAlignPoleVectorController *this,uint param_1)

{
  *(undefined ***)this = &___7UIKRetargetOpControllerBase__6B_;
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

// `scalar_deleting_destructor' @ 14df21a40

void * __thiscall
UIKRetargetCopyBasePoseController::_scalar_deleting_destructor_
          (UIKRetargetCopyBasePoseController *this,uint param_1)

{
  *(undefined ***)this = &___7UIKRetargetOpControllerBase__6B_;
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

// `scalar_deleting_destructor' @ 14df21aa0

void * __thiscall
UIKRetargetCurveRemapController::_scalar_deleting_destructor_
          (UIKRetargetCurveRemapController *this,uint param_1)

{
  *(undefined ***)this = &___7UIKRetargetOpControllerBase__6B_;
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

// `scalar_deleting_destructor' @ 14df21b00

void * __thiscall
UIKRetargetFKChainsController::_scalar_deleting_destructor_
          (UIKRetargetFKChainsController *this,uint param_1)

{
  *(undefined ***)this = &___7UIKRetargetOpControllerBase__6B_;
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

// `scalar_deleting_destructor' @ 14df21b60

void * __thiscall
UIKRetargetFilterBoneController::_scalar_deleting_destructor_
          (UIKRetargetFilterBoneController *this,uint param_1)

{
  *(undefined ***)this = &___7UIKRetargetOpControllerBase__6B_;
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

// `scalar_deleting_destructor' @ 14df21bc0

void * __thiscall
UIKRetargetFloorGoalsController::_scalar_deleting_destructor_
          (UIKRetargetFloorGoalsController *this,uint param_1)

{
  *(undefined ***)this = &___7UIKRetargetOpControllerBase__6B_;
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

// `scalar_deleting_destructor' @ 14df21c20

void * __thiscall
UIKRetargetGlobalSettings::_scalar_deleting_destructor_
          (UIKRetargetGlobalSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UIKRetargetGlobalSettings__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df21c80

void * __thiscall
UIKRetargetIKChainsController::_scalar_deleting_destructor_
          (UIKRetargetIKChainsController *this,uint param_1)

{
  *(undefined ***)this = &___7UIKRetargetOpControllerBase__6B_;
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

// `scalar_deleting_destructor' @ 14df21ce0

void * __thiscall
UIKRetargetOpControllerBase::_scalar_deleting_destructor_
          (UIKRetargetOpControllerBase *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UIKRetargetOpControllerBase__6B_;
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

// `scalar_deleting_destructor' @ 14df21d40

void * __thiscall
UIKRetargetPelvisMotionController::_scalar_deleting_destructor_
          (UIKRetargetPelvisMotionController *this,uint param_1)

{
  *(undefined ***)this = &___7UIKRetargetOpControllerBase__6B_;
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

// `scalar_deleting_destructor' @ 14df21da0

void * __thiscall
UIKRetargetPinBoneController::_scalar_deleting_destructor_
          (UIKRetargetPinBoneController *this,uint param_1)

{
  *(undefined ***)this = &___7UIKRetargetOpControllerBase__6B_;
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

// `scalar_deleting_destructor' @ 14df21e00

void * __thiscall
UIKRetargetProcessor::_scalar_deleting_destructor_(UIKRetargetProcessor *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UIKRetargetProcessor__6B_;
  FIKRetargetProcessor::~FIKRetargetProcessor(&this->Processor);
  pFVar1 = (this->DummyStack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FIKRigLogger::~FIKRigLogger(&this->Log);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x280);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df21e90

void * __thiscall
UIKRetargetRootMotionController::_scalar_deleting_destructor_
          (UIKRetargetRootMotionController *this,uint param_1)

{
  *(undefined ***)this = &___7UIKRetargetOpControllerBase__6B_;
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

// `scalar_deleting_destructor' @ 14df21ef0

void * __thiscall
UIKRetargetRunIKRigController::_scalar_deleting_destructor_
          (UIKRetargetRunIKRigController *this,uint param_1)

{
  *(undefined ***)this = &___7UIKRetargetOpControllerBase__6B_;
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

// `scalar_deleting_destructor' @ 14df21f50

void * __thiscall
UIKRetargetScaleSourceController::_scalar_deleting_destructor_
          (UIKRetargetScaleSourceController *this,uint param_1)

{
  *(undefined ***)this = &___7UIKRetargetOpControllerBase__6B_;
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

// `scalar_deleting_destructor' @ 14df21fb0

void * __thiscall
UIKRetargetSpeedPlantingController::_scalar_deleting_destructor_
          (UIKRetargetSpeedPlantingController *this,uint param_1)

{
  *(undefined ***)this = &___7UIKRetargetOpControllerBase__6B_;
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

// `scalar_deleting_destructor' @ 14df22010

void * __thiscall
UIKRetargetStretchChainController::_scalar_deleting_destructor_
          (UIKRetargetStretchChainController *this,uint param_1)

{
  *(undefined ***)this = &___7UIKRetargetOpControllerBase__6B_;
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

// `scalar_deleting_destructor' @ 14df22070

void * __thiscall
UIKRetargetStrideWarpingController::_scalar_deleting_destructor_
          (UIKRetargetStrideWarpingController *this,uint param_1)

{
  *(undefined ***)this = &___7UIKRetargetOpControllerBase__6B_;
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

// `scalar_deleting_destructor' @ 14df220d0

void * __thiscall UIKRetargeter::_scalar_deleting_destructor_(UIKRetargeter *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UIKRetargeter__6B_;
  pFVar1 = (this->ChainSettings_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ChainMap_DEPRECATED).ChainMap.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->RetargetPoses).field_0x48 = 0;
  pvVar2 = *(void **)&(this->RetargetPoses).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FIKRetargetPose>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FIKRetargetPose>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FIKRetargetPose>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RetargetPoses);
  *(undefined4 *)&(this->TargetRetargetPoses).field_0x48 = 0;
  pvVar2 = *(void **)&(this->TargetRetargetPoses).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FIKRetargetPose>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FIKRetargetPose>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FIKRetargetPose>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TargetRetargetPoses);
  *(undefined4 *)&(this->SourceRetargetPoses).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SourceRetargetPoses).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FIKRetargetPose>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FIKRetargetPose>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FIKRetargetPose>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SourceRetargetPoses);
  *(undefined4 *)&(this->Profiles).field_0x48 = 0;
  pvVar2 = *(void **)&(this->Profiles).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FRetargetProfile>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FRetargetProfile>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FRetargetProfile>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Profiles);
  DestructItems<FInstancedStruct,int>
            ((FInstancedStruct *)(this->RetargetOps).AllocatorInstance.Data,
             (this->RetargetOps).ArrayNum);
  pFVar1 = (this->RetargetOps).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0x208);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df22200

void * __thiscall
UIKRigBodyMoverController::_scalar_deleting_destructor_
          (UIKRigBodyMoverController *this,uint param_1)

{
  *(undefined ***)this = &___7UIKRigSolverControllerBase__6B_;
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

// `scalar_deleting_destructor' @ 14df22260

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall UIKRigComponent::_scalar_deleting_destructor_(UIKRigComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7UIKRigComponent__6B_;
  pFVar1 = (this->GoalContainer).Goals.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IIKGoalCreatorInterface__6B_;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df22310

void * __thiscall
UIKRigDefinition::_scalar_deleting_destructor_(UIKRigDefinition *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  pFVar1 = (this->Solvers_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RetargetDefinition).BoneChains.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FInstancedStruct,int>
            ((FInstancedStruct *)(this->SolverStack).AllocatorInstance.Data,
             (this->SolverStack).ArrayNum);
  pFVar1 = (this->SolverStack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Goals).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FIKRigSkeleton::~FIKRigSkeleton(&this->Skeleton);
  pvVar2 = *(void **)&(this->PreviewSkeletalMesh).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  this->_padding_ = (longlong)&___7IInterface_PreviewMeshProvider__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df22400

void * __thiscall
UIKRigEffectorGoal::_scalar_deleting_destructor_(UIKRigEffectorGoal *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UIKRigEffectorGoal__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df22460

void * __thiscall
UIKRigFBIKController::_scalar_deleting_destructor_(UIKRigFBIKController *this,uint param_1)

{
  *(undefined ***)this = &___7UIKRigSolverControllerBase__6B_;
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

// `scalar_deleting_destructor' @ 14df224c0

void * __thiscall
UIKRigFBIKSolver::_scalar_deleting_destructor_(UIKRigFBIKSolver *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UIKRigFBIKSolver__6B_;
  pFVar1 = (this->BoneSettings_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Effectors_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UIKRigSolver__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df22550

void * __thiscall
UIKRigLimbSolverController::_scalar_deleting_destructor_
          (UIKRigLimbSolverController *this,uint param_1)

{
  *(undefined ***)this = &___7UIKRigSolverControllerBase__6B_;
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

// `scalar_deleting_destructor' @ 14df225b0

void * __thiscall
UIKRigPoleSolverController::_scalar_deleting_destructor_
          (UIKRigPoleSolverController *this,uint param_1)

{
  *(undefined ***)this = &___7UIKRigSolverControllerBase__6B_;
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

// `scalar_deleting_destructor' @ 14df22610

void * __thiscall UIKRigProcessor::_scalar_deleting_destructor_(UIKRigProcessor *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UIKRigProcessor__6B_;
  FIKRigProcessor::~FIKRigProcessor(&this->Processor);
  FIKRigLogger::~FIKRigLogger(&this->Log);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x188);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df22690

void * __thiscall
UIKRigSetTransformController::_scalar_deleting_destructor_
          (UIKRigSetTransformController *this,uint param_1)

{
  *(undefined ***)this = &___7UIKRigSolverControllerBase__6B_;
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

// `scalar_deleting_destructor' @ 14df226f0

void * __thiscall UIKRigSolver::_scalar_deleting_destructor_(UIKRigSolver *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UIKRigSolver__6B_;
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

// `scalar_deleting_destructor' @ 14df22750

void * __thiscall
UIKRigSolverControllerBase::_scalar_deleting_destructor_
          (UIKRigSolverControllerBase *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UIKRigSolverControllerBase__6B_;
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

// `scalar_deleting_destructor' @ 14df227b0

void * __thiscall
UIKRig_BodyMover::_scalar_deleting_destructor_(UIKRig_BodyMover *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UIKRig_BodyMover__6B_;
  pFVar1 = (this->Effectors_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UIKRigSolver__6B_;
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

// `scalar_deleting_destructor' @ 14df22830

void * __thiscall
UIKRig_BodyMoverEffector::_scalar_deleting_destructor_(UIKRig_BodyMoverEffector *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UIKRig_BodyMoverEffector__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df22890

void * __thiscall
UIKRig_FBIKBoneSettings::_scalar_deleting_destructor_(UIKRig_FBIKBoneSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UIKRig_FBIKBoneSettings__6B_;
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

// `scalar_deleting_destructor' @ 14df228f0

void * __thiscall
UIKRig_FBIKEffector::_scalar_deleting_destructor_(UIKRig_FBIKEffector *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UIKRig_FBIKEffector__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df22950

void * __thiscall
UIKRig_LimbEffector::_scalar_deleting_destructor_(UIKRig_LimbEffector *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UIKRig_LimbEffector__6B_;
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

// `scalar_deleting_destructor' @ 14df229b0

void * __thiscall
UIKRig_LimbSolver::_scalar_deleting_destructor_(UIKRig_LimbSolver *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UIKRigSolver__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df22a10

void * __thiscall
UIKRig_PoleSolver::_scalar_deleting_destructor_(UIKRig_PoleSolver *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UIKRigSolver__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df22a70

void * __thiscall
UIKRig_PoleSolverEffector::_scalar_deleting_destructor_
          (UIKRig_PoleSolverEffector *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UIKRig_PoleSolverEffector__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df22ad0

void * __thiscall
UIKRig_SetTransform::_scalar_deleting_destructor_(UIKRig_SetTransform *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UIKRigSolver__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df22b30

void * __thiscall
UIKRig_SetTransformEffector::_scalar_deleting_destructor_
          (UIKRig_SetTransformEffector *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UIKRig_SetTransformEffector__6B_;
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

// `scalar_deleting_destructor' @ 14df22b90

void * __thiscall UPinBoneOp::_scalar_deleting_destructor_(UPinBoneOp *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &___7UPinBoneOp__6B_;
  pFVar1 = (this->BonesToPin).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined ***)this = &___7URetargetOpBase__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df22c10

void * __thiscall
URetargetChainSettings::_scalar_deleting_destructor_(URetargetChainSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7URetargetChainSettings__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x188);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df22c70

void * __thiscall URetargetOpBase::_scalar_deleting_destructor_(URetargetOpBase *this,uint param_1)

{
  this->_padding_ = (longlong)&___7URetargetOpBase__6B_;
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

// `scalar_deleting_destructor' @ 14df22cd0

void * __thiscall
URetargetOpStack::_scalar_deleting_destructor_(URetargetOpStack *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7URetargetOpStack__6B_;
  pFVar1 = (this->RetargetOps_DEPRECATED).AllocatorInstance.Data;
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

// `scalar_deleting_destructor' @ 14df22d40

void * __thiscall
URetargetProfileLibrary::_scalar_deleting_destructor_(URetargetProfileLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7URetargetProfileLibrary__6B_;
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

// `scalar_deleting_destructor' @ 14df22da0

void * __thiscall
URetargetRootSettings::_scalar_deleting_destructor_(URetargetRootSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7URetargetRootSettings__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14df22e00

void * __thiscall
URootMotionGeneratorOp::_scalar_deleting_destructor_(URootMotionGeneratorOp *this,uint param_1)

{
  this->_padding_ = (longlong)&___7URetargetOpBase__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb0);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeAlignPoleVectorOp @ 14df305b0

void __cdecl EmptyLinkFunctionForGeneratedCodeAlignPoleVectorOp(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNode_IKRig @ 14df305c0

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNode_IKRig(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNode_RetargetPoseFromMesh @ 14df305d0

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNode_RetargetPoseFromMesh(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCopyBasePoseOp @ 14df305e0

void __cdecl EmptyLinkFunctionForGeneratedCodeCopyBasePoseOp(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCurveRemapOp @ 14df305f0

void __cdecl EmptyLinkFunctionForGeneratedCodeCurveRemapOp(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeFKChainsOp @ 14df30600

void __cdecl EmptyLinkFunctionForGeneratedCodeFKChainsOp(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeFilterBoneOp @ 14df30610

void __cdecl EmptyLinkFunctionForGeneratedCodeFilterBoneOp(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeFloorConstraintOp @ 14df30620

void __cdecl EmptyLinkFunctionForGeneratedCodeFloorConstraintOp(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIKChainsOp @ 14df30630

void __cdecl EmptyLinkFunctionForGeneratedCodeIKChainsOp(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIKRetargetChainMapping @ 14df30640

void __cdecl EmptyLinkFunctionForGeneratedCodeIKRetargetChainMapping(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIKRetargetDeprecated @ 14df30650

void __cdecl EmptyLinkFunctionForGeneratedCodeIKRetargetDeprecated(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIKRetargetOps @ 14df30660

void __cdecl EmptyLinkFunctionForGeneratedCodeIKRetargetOps(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIKRetargetProcessor @ 14df30670

void __cdecl EmptyLinkFunctionForGeneratedCodeIKRetargetProcessor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIKRetargetProfile @ 14df30680

void __cdecl EmptyLinkFunctionForGeneratedCodeIKRetargetProfile(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIKRetargetSettings @ 14df30690

void __cdecl EmptyLinkFunctionForGeneratedCodeIKRetargetSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIKRetargeter @ 14df306a0

void __cdecl EmptyLinkFunctionForGeneratedCodeIKRetargeter(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIKRigBodyMoverSolver @ 14df306b0

void __cdecl EmptyLinkFunctionForGeneratedCodeIKRigBodyMoverSolver(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIKRigComponent @ 14df306c0

void __cdecl EmptyLinkFunctionForGeneratedCodeIKRigComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIKRigDataTypes @ 14df306d0

void __cdecl EmptyLinkFunctionForGeneratedCodeIKRigDataTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIKRigDefinition @ 14df306e0

void __cdecl EmptyLinkFunctionForGeneratedCodeIKRigDefinition(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIKRigFullBodyIK @ 14df306f0

void __cdecl EmptyLinkFunctionForGeneratedCodeIKRigFullBodyIK(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIKRigInterface @ 14df30700

void __cdecl EmptyLinkFunctionForGeneratedCodeIKRigInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIKRigLimbSolver @ 14df30710

void __cdecl EmptyLinkFunctionForGeneratedCodeIKRigLimbSolver(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIKRigPoleSolver @ 14df30720

void __cdecl EmptyLinkFunctionForGeneratedCodeIKRigPoleSolver(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIKRigProcessor @ 14df30730

void __cdecl EmptyLinkFunctionForGeneratedCodeIKRigProcessor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIKRigSetTransform @ 14df30740

void __cdecl EmptyLinkFunctionForGeneratedCodeIKRigSetTransform(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIKRigSkeleton @ 14df30750

void __cdecl EmptyLinkFunctionForGeneratedCodeIKRigSkeleton(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIKRigSolverBase @ 14df30760

void __cdecl EmptyLinkFunctionForGeneratedCodeIKRigSolverBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIKRigStretchLimb @ 14df30770

void __cdecl EmptyLinkFunctionForGeneratedCodeIKRigStretchLimb(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIKRig_init @ 14df30780

void __cdecl EmptyLinkFunctionForGeneratedCodeIKRig_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLimbSolver @ 14df30790

void __cdecl EmptyLinkFunctionForGeneratedCodeLimbSolver(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePelvisMotionOp @ 14df307a0

void __cdecl EmptyLinkFunctionForGeneratedCodePelvisMotionOp(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePinBoneOp @ 14df307b0

void __cdecl EmptyLinkFunctionForGeneratedCodePinBoneOp(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRetargetPoseOp @ 14df307c0

void __cdecl EmptyLinkFunctionForGeneratedCodeRetargetPoseOp(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigUnit_IKRig @ 14df307d0

void __cdecl EmptyLinkFunctionForGeneratedCodeRigUnit_IKRig(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRootMotionGeneratorOp @ 14df307e0

void __cdecl EmptyLinkFunctionForGeneratedCodeRootMotionGeneratorOp(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRunIKRigOp @ 14df307f0

void __cdecl EmptyLinkFunctionForGeneratedCodeRunIKRigOp(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeScaleSourceOp @ 14df30800

void __cdecl EmptyLinkFunctionForGeneratedCodeScaleSourceOp(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSpeedPlantingOp @ 14df30810

void __cdecl EmptyLinkFunctionForGeneratedCodeSpeedPlantingOp(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeStretchChainOp @ 14df30820

void __cdecl EmptyLinkFunctionForGeneratedCodeStretchChainOp(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeStrideWarpingOp @ 14df30830

void __cdecl EmptyLinkFunctionForGeneratedCodeStrideWarpingOp(void)

{
  return;
}

// FABRIK_ApplyLinkConstraints_Backward @ 14df312f0

void __cdecl
AnimationCore::FABRIK_ApplyLinkConstraints_Backward
          (TArray<FLimbLink,TSizedDefaultAllocator<32>_> *param_1,int param_2,float param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_100;
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_d0 [7];
  
  if (0 < param_2) {
    if (param_2 < param_1->ArrayNum + -1) {
      uVar11 = param_2 + 1;
      uVar9 = 0;
      if ((int)uVar11 < param_1->ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = (param_1->AllocatorInstance).Data;
      lVar12 = (longlong)(int)uVar11 * 0x68;
      uVar9 = 0;
      if (param_2 < param_1->ArrayNum) {
        uVar9 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar13 = (param_1->AllocatorInstance).Data + (longlong)param_2 * 0x68;
      uVar9 = 0;
      if ((int)(param_2 - 1U) < param_1->ArrayNum) {
        uVar9 = ~(param_2 - 1U) >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (param_1->AllocatorInstance).Data;
      dVar1 = *(double *)pFVar13;
      dVar2 = *(double *)(pFVar13 + 8);
      dVar3 = *(double *)(pFVar13 + 0x10);
      lVar10 = (longlong)param_2 * 0x68;
      local_100._s_0.X = *(double *)(pFVar5 + lVar10 + -0x68) - dVar1;
      local_100._s_0.Y = *(double *)(pFVar5 + lVar10 + -0x60) - dVar2;
      local_100._s_0.Z = *(double *)(pFVar5 + lVar10 + -0x58) - dVar3;
      UE::Math::TVector<double>::GetSafeNormal
                ((TVector<double> *)&local_100._s_0,(TVector<double> *)&local_e8._s_0,
                 __real_3e45798ee0000000,&UE::Math::TVector<double>::ZeroVector);
      dVar17 = *(double *)(pFVar13 + 0x28) * local_e8._s_0.Z -
               *(double *)(pFVar13 + 0x30) * local_e8._s_0.Y;
      dVar18 = *(double *)(pFVar13 + 0x20) * local_e8._s_0.Y -
               *(double *)(pFVar13 + 0x28) * local_e8._s_0.X;
      dVar15 = *(double *)(pFVar13 + 0x30) * local_e8._s_0.X -
               *(double *)(pFVar13 + 0x20) * local_e8._s_0.Z;
      local_d0[0]._0_8_ = *(double *)(pFVar4 + lVar12) - dVar1;
      local_d0[0]._8_8_ = *(double *)(pFVar4 + lVar12 + 8) - dVar2;
      local_d0[0]._16_8_ = *(double *)(pFVar4 + lVar12 + 0x10) - dVar3;
      UE::Math::TVector<double>::GetSafeNormal
                ((TVector<double> *)&local_d0[0]._s_0,(TVector<double> *)&local_118._s_0,
                 __real_3e45798ee0000000,&UE::Math::TVector<double>::ZeroVector);
      fVar20 = (float)(local_118._s_0.Y * local_e8._s_0.Y + local_118._s_0.X * local_e8._s_0.X +
                      local_118._s_0.Z * local_e8._s_0.Z);
      fVar14 = cosf(param_3);
      if ((0.0 < (float)(dVar15 * local_118._s_0.Y + dVar17 * local_118._s_0.X +
                        dVar18 * local_118._s_0.Z)) || (fVar14 < fVar20)) {
        if (fVar20 <= 0.0) {
          dVar15 = (double)*(float *)(pFVar4 + lVar12 + 0x18);
          *(double *)(pFVar4 + lVar12) = dVar1 - local_e8._s_0.X * dVar15;
          *(double *)(pFVar4 + lVar12 + 8) = dVar2 - local_e8._s_0.Y * dVar15;
          *(double *)(pFVar4 + lVar12 + 0x10) = dVar3 - local_e8._s_0.Z * dVar15;
        }
        else {
          dVar7 = (double)fVar14;
          fVar14 = sinf(param_3);
          dVar16 = (double)fVar14;
          dVar19 = (double)*(float *)(pFVar4 + lVar12 + 0x18);
          *(double *)(pFVar4 + lVar12) =
               (dVar7 * local_e8._s_0.X - dVar16 * dVar17) * dVar19 + dVar1;
          *(double *)(pFVar4 + lVar12 + 8) =
               (dVar7 * local_e8._s_0.Y - dVar16 * dVar15) * dVar19 + dVar2;
          *(double *)(pFVar4 + lVar12 + 0x10) =
               (dVar7 * local_e8._s_0.Z - dVar16 * dVar18) * dVar19 + dVar3;
        }
      }
    }
  }
  return;
}

// FABRIK_ApplyLinkConstraints_Forward @ 14df31770

void __cdecl
AnimationCore::FABRIK_ApplyLinkConstraints_Forward
          (TArray<FLimbLink,TSizedDefaultAllocator<32>_> *param_1,int param_2,float param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  float fVar13;
  undefined8 extraout_XMM0_Qa;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  TVector<double>_u_0 local_120;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_f0;
  TVector<double>_u_0 local_d8 [8];
  
  if (0 < param_2) {
    if (param_2 < param_1->ArrayNum + -1) {
      uVar10 = param_2 + 1;
      uVar8 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar12 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x68;
      uVar8 = 0;
      if (param_2 < param_1->ArrayNum) {
        uVar8 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar11 = (param_1->AllocatorInstance).Data + (longlong)param_2 * 0x68;
      uVar8 = 0;
      if ((int)(param_2 - 1U) < param_1->ArrayNum) {
        uVar8 = ~(param_2 - 1U) >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      dVar1 = *(double *)pFVar11;
      dVar2 = *(double *)(pFVar11 + 8);
      local_120._s_0.X = *(double *)pFVar12 - dVar1;
      dVar3 = *(double *)(pFVar11 + 0x10);
      pFVar4 = (param_1->AllocatorInstance).Data;
      lVar9 = (longlong)param_2 * 0x68;
      local_120._s_0.Y = *(double *)(pFVar12 + 8) - dVar2;
      local_120._s_0.Z = *(double *)(pFVar12 + 0x10) - dVar3;
      UE::Math::TVector<double>::GetSafeNormal
                ((TVector<double> *)&local_120._s_0,(TVector<double> *)&local_108._s_0,
                 __real_3e45798ee0000000,&UE::Math::TVector<double>::ZeroVector);
      dVar14 = *(double *)(pFVar11 + 0x28) * local_108._s_0.Z -
               *(double *)(pFVar11 + 0x30) * local_108._s_0.Y;
      dVar6 = *(double *)(pFVar11 + 0x30) * local_108._s_0.X -
              *(double *)(pFVar11 + 0x20) * local_108._s_0.Z;
      local_f0._s_0.X = *(double *)(pFVar4 + lVar9 + -0x68) - dVar1;
      dVar16 = *(double *)(pFVar11 + 0x20) * local_108._s_0.Y -
               *(double *)(pFVar11 + 0x28) * local_108._s_0.X;
      local_f0._s_0.Y = *(double *)(pFVar4 + lVar9 + -0x60) - dVar2;
      local_f0._s_0.Z = *(double *)(pFVar4 + lVar9 + -0x58) - dVar3;
      UE::Math::TVector<double>::GetSafeNormal
                ((TVector<double> *)&local_f0._s_0,(TVector<double> *)&local_d8[0]._s_0,
                 __real_3e45798ee0000000,&UE::Math::TVector<double>::ZeroVector);
      fVar19 = (float)((double)local_d8[0]._8_8_ * local_108._s_0.Y +
                       (double)local_d8[0]._0_8_ * local_108._s_0.X +
                      (double)local_d8[0]._16_8_ * local_108._s_0.Z);
      if (((float)(dVar6 * (double)local_d8[0]._8_8_ + dVar14 * (double)local_d8[0]._0_8_ +
                  dVar16 * (double)local_d8[0]._16_8_) < 0.0) ||
         (fVar13 = cosf(param_3), fVar13 < fVar19)) {
        if (fVar19 <= 0.0) {
          dVar16 = (double)*(float *)(pFVar11 + 0x18);
          *(double *)(pFVar4 + lVar9 + -0x68) = dVar1 - dVar16 * local_108._s_0.X;
          *(double *)(pFVar4 + lVar9 + -0x60) = dVar2 - dVar16 * local_108._s_0.Y;
          *(double *)(pFVar4 + lVar9 + -0x58) = dVar3 - dVar16 * local_108._s_0.Z;
        }
        else {
          __libm_sse2_sincosf_();
          dVar18 = (double)(float)extraout_XMM0_Qa;
          dVar17 = (double)(float)((ulonglong)extraout_XMM0_Qa >> 0x20);
          dVar15 = (double)*(float *)(pFVar11 + 0x18);
          *(double *)(pFVar4 + lVar9 + -0x68) =
               (dVar18 * dVar14 + dVar17 * local_108._s_0.X) * dVar15 + dVar1;
          *(double *)(pFVar4 + lVar9 + -0x60) =
               (dVar18 * dVar6 + dVar17 * local_108._s_0.Y) * dVar15 + dVar2;
          *(double *)(pFVar4 + lVar9 + -0x58) =
               (dVar18 * dVar16 + dVar17 * local_108._s_0.Z) * dVar15 + dVar3;
        }
      }
    }
  }
  return;
}

// FABRIK_BackwardReach @ 14df31bf0

void __cdecl
AnimationCore::FABRIK_BackwardReach
          (TArray<FLimbLink,TSizedDefaultAllocator<32>_> *param_1,TVector<double> *param_2,
          float param_3,bool param_4,float param_5)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  double dVar26;
  float fVar27;
  
  iVar17 = param_1->ArrayNum;
  uVar14 = 0;
  if ((iVar17 < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  dVar20 = (param_2->field0_0x0)._s_0.X - *(double *)pFVar1;
  dVar4 = (param_2->field0_0x0)._s_0.Y - *(double *)(pFVar1 + 8);
  dVar6 = (param_2->field0_0x0)._s_0.Z - *(double *)(pFVar1 + 0x10);
  auVar22._0_8_ = dVar20 * dVar20;
  auVar22._8_8_ = 0;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = dVar4 * dVar4 + auVar22._0_8_ + dVar6 * dVar6;
  auVar23 = sqrtpd(auVar22,auVar23);
  fVar27 = (float)auVar23._0_8_;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (__real_322bcc77 < fVar27) {
    dVar24 = (double)(__real_3f800000 / fVar27);
    uVar7 = dVar20 * dVar24;
    uVar8 = dVar4 * dVar24;
    uVar9 = dVar6 * dVar24;
  }
  iVar17 = iVar17 + -1;
  uVar11 = 0;
  uVar15 = uVar14;
  fVar19 = fVar27;
  if (0 < iVar17) {
    do {
      uVar12 = (uint)uVar14;
      uVar13 = uVar11;
      if ((int)uVar12 < param_1->ArrayNum) {
        uVar13 = ~uVar12 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      if ((param_1->ArrayNum < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      fVar18 = (float)((*(double *)(pFVar1 + uVar15 + 8) - *(double *)(pFVar2 + 8)) * (double)uVar8
                       + (*(double *)(pFVar1 + uVar15) - *(double *)pFVar2) * (double)uVar7 +
                      (*(double *)(pFVar1 + uVar15 + 0x10) - *(double *)(pFVar2 + 0x10)) *
                      (double)uVar9);
      fVar19 = fVar27;
      if ((0.0 < fVar18) && (fVar19 = fVar18 * param_3, fVar27 <= fVar19)) {
        fVar19 = fVar27;
      }
      uVar14 = (ulonglong)(uVar12 + 1);
      uVar15 = uVar15 + 0x68;
      fVar27 = fVar19;
    } while ((int)(uVar12 + 1) < iVar17);
  }
  dVar20 = (double)fVar19;
  if ((param_1->ArrayNum < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  uVar13 = 1;
  *(double *)pFVar1 = (double)uVar7 * dVar20 + *(double *)pFVar1;
  *(double *)(pFVar1 + 8) = (double)uVar8 * dVar20 + *(double *)(pFVar1 + 8);
  *(double *)(pFVar1 + 0x10) = (double)uVar9 * dVar20 + *(double *)(pFVar1 + 0x10);
  dVar20 = __real_3ff0000000000000;
  if (1 < iVar17) {
    lVar16 = 0x68;
    do {
      uVar12 = uVar11;
      if ((int)(uVar13 - 1) < param_1->ArrayNum) {
        uVar12 = -uVar13 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      uVar12 = uVar11;
      if ((int)uVar13 < param_1->ArrayNum) {
        uVar12 = ~uVar13 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      dVar4 = *(double *)(pFVar1 + lVar16 + -0x60);
      dVar6 = *(double *)(pFVar1 + lVar16 + -0x58);
      dVar5 = *(double *)(pFVar2 + lVar16 + 8) - dVar4;
      dVar26 = *(double *)(pFVar2 + lVar16 + 0x10) - dVar6;
      dVar24 = *(double *)(pFVar2 + lVar16) - *(double *)(pFVar1 + lVar16 + -0x68);
      dVar25 = dVar20 / SQRT(dVar5 * dVar5 + dVar24 * dVar24 + dVar26 * dVar26);
      dVar21 = (double)*(float *)(pFVar2 + lVar16 + 0x18);
      *(double *)(pFVar2 + lVar16) = dVar24 * dVar25 * dVar21 + *(double *)(pFVar1 + lVar16 + -0x68)
      ;
      *(double *)(pFVar2 + lVar16 + 8) = dVar5 * dVar25 * dVar21 + dVar4;
      *(double *)(pFVar2 + lVar16 + 0x10) = dVar21 * dVar26 * dVar25 + dVar6;
      if (param_4) {
        FABRIK_ApplyLinkConstraints_Backward(param_1,uVar13,param_5);
      }
      uVar13 = uVar13 + 1;
      lVar16 = lVar16 + 0x68;
    } while ((int)uVar13 < iVar17);
  }
  return;
}

// FABRIK_ForwardReach @ 14df32060

void __cdecl
AnimationCore::FABRIK_ForwardReach
          (TArray<FLimbLink,TSizedDefaultAllocator<32>_> *param_1,TVector<double> *param_2,
          float param_3,bool param_4,float param_5)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  double dVar26;
  float fVar27;
  float fVar28;
  
  uVar1 = param_1->ArrayNum;
  uVar17 = uVar1 - 1;
  uVar18 = 0;
  if ((int)uVar17 < (int)uVar1) {
    uVar18 = ~uVar17 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = (param_1->AllocatorInstance).Data;
  iVar15 = param_1->ArrayNum;
  lVar16 = (longlong)iVar15;
  lVar12 = lVar16 * 0x68;
  dVar20 = (param_2->field0_0x0)._s_0.X - *(double *)(pFVar2 + lVar12 + -0x68);
  dVar5 = (param_2->field0_0x0)._s_0.Y - *(double *)(pFVar2 + lVar12 + -0x60);
  dVar7 = (param_2->field0_0x0)._s_0.Z - *(double *)(pFVar2 + lVar12 + -0x58);
  auVar22._0_8_ = dVar20 * dVar20;
  auVar22._8_8_ = 0;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = dVar5 * dVar5 + auVar22._0_8_ + dVar7 * dVar7;
  auVar23 = sqrtpd(auVar22,auVar23);
  fVar27 = (float)auVar23._0_8_;
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (__real_322bcc77 < fVar27) {
    dVar24 = (double)(__real_3f800000 / fVar27);
    uVar8 = dVar20 * dVar24;
    uVar9 = dVar5 * dVar24;
    uVar10 = dVar7 * dVar24;
  }
  if (0 < (int)uVar17) {
    lVar12 = (longlong)(int)uVar17 * 0x68;
    fVar28 = fVar27;
    do {
      uVar18 = 0;
      if ((int)uVar17 < (int)lVar16) {
        uVar18 = ~uVar17 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      uVar14 = param_1->ArrayNum - 1;
      uVar18 = 0;
      if ((int)uVar14 < param_1->ArrayNum) {
        uVar18 = ~uVar14 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      iVar15 = param_1->ArrayNum;
      lVar16 = (longlong)iVar15;
      lVar13 = lVar16 * 0x68;
      fVar19 = (float)((*(double *)(pFVar2 + lVar12 + 8) - *(double *)(pFVar3 + lVar13 + -0x60)) *
                       (double)uVar9 +
                       (*(double *)(pFVar2 + lVar12) - *(double *)(pFVar3 + lVar13 + -0x68)) *
                       (double)uVar8 +
                      (*(double *)(pFVar2 + lVar12 + 0x10) - *(double *)(pFVar3 + lVar13 + -0x58)) *
                      (double)uVar10);
      fVar27 = fVar28;
      if ((0.0 < fVar19) && (fVar27 = fVar19 * param_3, fVar28 <= fVar27)) {
        fVar27 = fVar28;
      }
      uVar17 = uVar17 - 1;
      lVar12 = lVar12 + -0x68;
      fVar28 = fVar27;
    } while (0 < (int)uVar17);
  }
  dVar20 = (double)fVar27;
  uVar18 = 0;
  if ((int)(iVar15 - 1U) < iVar15) {
    uVar18 = ~(iVar15 - 1U) >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar18 = uVar1 - 2;
  lVar12 = (longlong)param_1->ArrayNum * 0x68;
  pFVar2 = (param_1->AllocatorInstance).Data;
  *(double *)(pFVar2 + lVar12 + -0x68) =
       (double)uVar8 * dVar20 + *(double *)(pFVar2 + lVar12 + -0x68);
  *(double *)(pFVar2 + lVar12 + -0x60) =
       (double)uVar9 * dVar20 + *(double *)(pFVar2 + lVar12 + -0x60);
  *(double *)(pFVar2 + lVar12 + -0x58) =
       (double)uVar10 * dVar20 + *(double *)(pFVar2 + lVar12 + -0x58);
  dVar20 = __real_3ff0000000000000;
  if (0 < (int)uVar18) {
    lVar12 = (longlong)(int)uVar18 * 0x68;
    do {
      uVar1 = uVar1 - 1;
      uVar17 = 0;
      if ((int)uVar1 < param_1->ArrayNum) {
        uVar17 = ~uVar1 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      uVar17 = 0;
      if ((int)uVar18 < param_1->ArrayNum) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      dVar5 = *(double *)(pFVar2 + lVar12 + 0x70);
      dVar7 = *(double *)(pFVar2 + lVar12 + 0x78);
      dVar24 = *(double *)(pFVar3 + lVar12 + 8) - dVar5;
      dVar6 = *(double *)(pFVar3 + lVar12 + 0x10) - dVar7;
      dVar26 = *(double *)(pFVar3 + lVar12) - *(double *)(pFVar2 + lVar12 + 0x68);
      dVar25 = dVar20 / SQRT(dVar24 * dVar24 + dVar26 * dVar26 + dVar6 * dVar6);
      dVar21 = (double)*(float *)(pFVar2 + lVar12 + 0x80);
      *(double *)(pFVar3 + lVar12) = dVar26 * dVar25 * dVar21 + *(double *)(pFVar2 + lVar12 + 0x68);
      *(double *)(pFVar3 + lVar12 + 8) = dVar24 * dVar25 * dVar21 + dVar5;
      *(double *)(pFVar3 + lVar12 + 0x10) = dVar6 * dVar25 * dVar21 + dVar7;
      if (param_4) {
        FABRIK_ApplyLinkConstraints_Forward(param_1,uVar18,param_5);
      }
      uVar18 = uVar18 - 1;
      lVar12 = lVar12 + -0x68;
    } while (0 < (int)uVar18);
  }
  return;
}

// FindPlaneNormal @ 14df339a0

TVector<double> * __cdecl
AnimationCore::FindPlaneNormal
          (TVector<double> *__return_storage_ptr__,
          TArray<FLimbLink,TSizedDefaultAllocator<32>_> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  TVector<double> *pTVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  
  dVar10 = __real_3e45798ee0000000;
  uVar23 = SUB84(__real_3ff0000000000000,0);
  uVar24 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  dVar3 = (param_3->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X;
  dVar20 = (param_3->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y;
  dVar19 = (param_3->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z;
  dVar17 = dVar20 * dVar20 + dVar3 * dVar3 + dVar19 * dVar19;
  uVar4 = dVar3;
  uVar5 = dVar20;
  uVar6 = dVar19;
  if ((dVar17 != __real_3ff0000000000000) &&
     (uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     __real_3e45798ee0000000 <= dVar17)) {
    dVar17 = __real_3ff0000000000000 / SQRT(dVar17);
    uVar4 = dVar3 * dVar17;
    uVar5 = dVar20 * dVar17;
    uVar6 = dVar19 * dVar17;
  }
  iVar14 = param_1->ArrayNum;
  uVar15 = 1;
  if (1 < iVar14) {
    lVar16 = 0x68;
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    do {
      uVar12 = 0;
      if ((int)uVar15 < iVar14) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
         uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
         uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X, bVar11)) {
        pcVar2 = (code *)swi(3);
        pTVar13 = (TVector<double> *)(*pcVar2)();
        return pTVar13;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      dVar22 = *(double *)(pFVar1 + lVar16) - (param_2->field0_0x0)._s_0.X;
      dVar21 = *(double *)(pFVar1 + lVar16 + 8) - (param_2->field0_0x0)._s_0.Y;
      dVar3 = *(double *)(pFVar1 + lVar16 + 0x10) - (param_2->field0_0x0)._s_0.Z;
      dVar18 = dVar21 * dVar21 + dVar22 * dVar22 + dVar3 * dVar3;
      dVar19 = dVar21;
      dVar17 = dVar22;
      dVar20 = dVar3;
      if ((dVar18 != (double)CONCAT44(uVar24,uVar23)) &&
         (dVar19 = (double)uVar8, dVar17 = (double)uVar9, dVar20 = (double)uVar7, dVar10 <= dVar18))
      {
        dVar20 = (double)CONCAT44(uVar24,uVar23) / SQRT(dVar18);
        dVar19 = dVar21 * dVar20;
        dVar17 = dVar22 * dVar20;
        dVar20 = dVar3 * dVar20;
      }
      dVar3 = dVar20 * (double)uVar5 - dVar19 * (double)uVar6;
      dVar20 = dVar17 * (double)uVar6 - dVar20 * (double)uVar4;
      dVar17 = dVar19 * (double)uVar4 - dVar17 * (double)uVar5;
      dVar19 = dVar20 * dVar20 + dVar3 * dVar3 + dVar17 * dVar17;
      if (dVar10 < dVar19) {
        dVar19 = __real_3ff0000000000000 / SQRT(dVar19);
        (__return_storage_ptr__->field0_0x0)._s_0.X = dVar3 * dVar19;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar20 * dVar19;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar17 * dVar19;
        return __return_storage_ptr__;
      }
      iVar14 = param_1->ArrayNum;
      uVar15 = uVar15 + 1;
      uVar23 = SUB84(__real_3ff0000000000000,0);
      uVar24 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      lVar16 = lVar16 + 0x68;
    } while ((int)uVar15 < iVar14);
  }
  uVar4 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetRotationFromDeformedPoints @ 14df3f0a0

TQuat<double> * __cdecl
GetRotationFromDeformedPoints
          (TQuat<double> *__return_storage_ptr__,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2,
          TVector<double> *param_3,TVector<double> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  double dVar7;
  bool bVar8;
  TQuat<double> *pTVar9;
  TVector<double> *pTVar10;
  int iVar11;
  TVector<double> *pTVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  double dVar19;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined4 uVar34;
  double dVar35;
  double dVar36;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined4 uVar42;
  double dVar43;
  double dVar44;
  uint uVar45;
  double dVar46;
  undefined4 uVar47;
  double dVar48;
  double dVar49;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  double local_res10;
  double local_res18;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  undefined1 local_188 [32];
  double local_168;
  undefined1 local_108 [208];
  
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("InInitialPoints.Num() == InCurrentPoints.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Public\\Rig\\Solvers\\PointsToRotation.h"
                         ,0x11,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar9 = (TQuat<double> *)(*pcVar2)();
    return pTVar9;
  }
  if (param_1->ArrayNum < 2) {
    pTVar12 = &UE::Math::TVector<double>::ZeroVector;
    if (param_1->ArrayNum < 1) {
      pTVar10 = &UE::Math::TVector<double>::ZeroVector;
    }
    else {
      pTVar10 = (TVector<double> *)(param_1->AllocatorInstance).Data;
    }
    dVar19 = *(double *)((longlong)pTVar10 + 8);
    (param_3->field0_0x0)._s_0.X = *(double *)pTVar10;
    (param_3->field0_0x0)._s_0.Y = dVar19;
    (param_3->field0_0x0)._s_0.Z = *(double *)((longlong)pTVar10 + 0x10);
    if (0 < param_2->ArrayNum) {
      pTVar12 = (TVector<double> *)(param_2->AllocatorInstance).Data;
    }
    dVar19 = *(double *)((longlong)pTVar12 + 8);
    (param_4->field0_0x0)._s_0.X = *(double *)pTVar12;
    (param_4->field0_0x0)._s_0.Y = dVar19;
    (param_4->field0_0x0)._s_0.Z = *(double *)((longlong)pTVar12 + 0x10);
    dVar30 = UE::Math::TQuat<double>::Identity.W;
    dVar35 = UE::Math::TQuat<double>::Identity.Z;
    dVar19 = UE::Math::TQuat<double>::Identity.Y;
    __return_storage_ptr__->X = UE::Math::TQuat<double>::Identity.X;
    __return_storage_ptr__->Y = dVar19;
    __return_storage_ptr__->Z = dVar35;
    __return_storage_ptr__->W = dVar30;
    return __return_storage_ptr__;
  }
  dVar19 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                            UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
  uVar15 = 0;
  (param_3->field0_0x0)._s_0.X =
       (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                        UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
  (param_3->field0_0x0)._s_0.Y = dVar19;
  (param_3->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar19 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                            UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
  (param_4->field0_0x0)._s_0.X =
       (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                        UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
  (param_4->field0_0x0)._s_0.Y = dVar19;
  (param_4->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  iVar11 = param_1->ArrayNum;
  uVar13 = uVar15;
  uVar18 = uVar15;
  if (0 < iVar11) {
    do {
      uVar16 = (uint)uVar18;
      uVar14 = 0;
      if ((int)uVar16 < iVar11) {
        uVar14 = ~uVar16 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar2 = (code *)swi(3);
        pTVar9 = (TQuat<double> *)(*pcVar2)();
        return pTVar9;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      (param_3->field0_0x0)._s_0.X = *(double *)(pFVar1 + uVar13) + (param_3->field0_0x0)._s_0.X;
      (param_3->field0_0x0)._s_0.Y = *(double *)(pFVar1 + uVar13 + 8) + (param_3->field0_0x0)._s_0.Y
      ;
      (param_3->field0_0x0)._s_0.Z =
           *(double *)(pFVar1 + uVar13 + 0x10) + (param_3->field0_0x0)._s_0.Z;
      uVar14 = 0;
      if ((int)uVar16 < param_2->ArrayNum) {
        uVar14 = ~uVar16 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar2 = (code *)swi(3);
        pTVar9 = (TQuat<double> *)(*pcVar2)();
        return pTVar9;
      }
      pFVar1 = (param_2->AllocatorInstance).Data;
      (param_4->field0_0x0)._s_0.X = (param_4->field0_0x0)._s_0.X + *(double *)(pFVar1 + uVar13);
      (param_4->field0_0x0)._s_0.Y = *(double *)(pFVar1 + uVar13 + 8) + (param_4->field0_0x0)._s_0.Y
      ;
      (param_4->field0_0x0)._s_0.Z =
           *(double *)(pFVar1 + uVar13 + 0x10) + (param_4->field0_0x0)._s_0.Z;
      iVar11 = param_1->ArrayNum;
      uVar13 = uVar13 + 0x18;
      uVar18 = (ulonglong)(uVar16 + 1);
    } while ((int)(uVar16 + 1) < iVar11);
  }
  dVar35 = __real_3e45798ee0000000;
  dVar19 = __real_3ff0000000000000;
  uVar56 = SUB84(__real_3ff0000000000000,0);
  uVar57 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  dVar30 = __real_3ff0000000000000 / (double)iVar11;
  (param_3->field0_0x0)._s_0.X = (param_3->field0_0x0)._s_0.X * dVar30;
  (param_3->field0_0x0)._s_0.Y = (param_3->field0_0x0)._s_0.Y * dVar30;
  (param_3->field0_0x0)._s_0.Z = dVar30 * (param_3->field0_0x0)._s_0.Z;
  (param_4->field0_0x0)._s_0.X = (param_4->field0_0x0)._s_0.X * dVar30;
  (param_4->field0_0x0)._s_0.Y = (param_4->field0_0x0)._s_0.Y * dVar30;
  (param_4->field0_0x0)._s_0.Z = dVar30 * (param_4->field0_0x0)._s_0.Z;
  iVar11 = param_1->ArrayNum;
  uVar34 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
  uVar40 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
  if (iVar11 < 1) {
    local_1b8 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                 UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
    local_168 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_res18 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                   UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
    local_198 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_1b0 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                 UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
    local_1a8 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                 UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
    local_res10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_1a0 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                 UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
    local_190 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                 UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
  }
  else {
    local_1b0 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                 UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
    local_1b8 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                 UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
    local_res18 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                   UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
    local_1a8 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                 UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
    local_res10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_1a0 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                 UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
    local_190 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                 UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
    local_198 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar13 = uVar15;
    uVar18 = uVar15;
    uVar41 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar42 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar47 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar53 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    local_168 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    do {
      uVar16 = (uint)uVar18;
      uVar14 = 0;
      if ((int)uVar16 < iVar11) {
        uVar14 = ~uVar16 >> 0x1f;
      }
      if (uVar14 == 0) {
        bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar2 = (code *)swi(3);
          pTVar9 = (TQuat<double> *)(*pcVar2)();
          return pTVar9;
        }
        uVar34 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        uVar40 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        uVar41 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uVar42 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        uVar47 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        uVar53 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        dVar35 = __real_3e45798ee0000000;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      dVar36 = *(double *)(pFVar1 + uVar13) - (param_3->field0_0x0)._s_0.X;
      dVar48 = *(double *)(pFVar1 + uVar13 + 8) - (param_3->field0_0x0)._s_0.Y;
      dVar30 = *(double *)(pFVar1 + uVar13 + 0x10) - (param_3->field0_0x0)._s_0.Z;
      dVar31 = dVar48 * dVar48 + dVar36 * dVar36 + dVar30 * dVar30;
      if (dVar31 != dVar19) {
        if (dVar35 <= dVar31) {
          dVar35 = dVar19 / SQRT(dVar31);
          dVar36 = dVar36 * dVar35;
          dVar48 = dVar48 * dVar35;
          dVar30 = dVar30 * dVar35;
        }
        else {
          auVar6._4_4_ = uVar47;
          auVar6._0_4_ = uVar42;
          auVar6._8_4_ = uVar53;
          dVar30 = (double)CONCAT44(uVar40,uVar34);
          dVar48 = auVar6._4_8_;
          dVar36 = (double)CONCAT44(uVar42,uVar41);
        }
      }
      uVar14 = 0;
      if ((int)uVar16 < param_2->ArrayNum) {
        uVar14 = ~uVar16 >> 0x1f;
      }
      if (uVar14 == 0) {
        bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar2 = (code *)swi(3);
          pTVar9 = (TQuat<double> *)(*pcVar2)();
          return pTVar9;
        }
        uVar34 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        uVar40 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        uVar41 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uVar42 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        uVar47 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        uVar53 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      }
      pFVar1 = (param_2->AllocatorInstance).Data;
      dVar35 = *(double *)(pFVar1 + uVar13) - (param_4->field0_0x0)._s_0.X;
      dVar43 = *(double *)(pFVar1 + uVar13 + 8) - (param_4->field0_0x0)._s_0.Y;
      dVar46 = *(double *)(pFVar1 + uVar13 + 0x10) - (param_4->field0_0x0)._s_0.Z;
      dVar31 = dVar43 * dVar43 + dVar35 * dVar35 + dVar46 * dVar46;
      if (dVar31 != dVar19) {
        if (__real_3e45798ee0000000 <= dVar31) {
          dVar31 = dVar19 / SQRT(dVar31);
          dVar35 = dVar35 * dVar31;
          dVar43 = dVar43 * dVar31;
          dVar46 = dVar46 * dVar31;
        }
        else {
          dVar43 = (double)CONCAT44(uVar53,uVar47);
          dVar46 = (double)CONCAT44(uVar40,uVar34);
          dVar35 = (double)CONCAT44(uVar42,uVar41);
        }
      }
      iVar11 = param_1->ArrayNum;
      uVar18 = (ulonglong)(uVar16 + 1);
      uVar13 = uVar13 + 0x18;
      local_1b8 = local_1b8 + dVar43 * dVar36;
      local_168 = local_168 + dVar46 * dVar36;
      local_res18 = local_res18 + dVar35 * dVar36;
      local_1b0 = local_1b0 + dVar43 * dVar48;
      local_198 = local_198 + dVar46 * dVar48;
      local_1a0 = local_1a0 + dVar43 * dVar30;
      local_1a8 = local_1a8 + dVar35 * dVar48;
      local_res10 = local_res10 + dVar46 * dVar30;
      local_190 = local_190 + dVar35 * dVar30;
      dVar35 = __real_3e45798ee0000000;
    } while ((int)(uVar16 + 1) < iVar11);
  }
  uVar34 = SUB84(UE::Math::TQuat<double>::Identity.Z,0);
  uVar40 = (undefined4)((ulonglong)UE::Math::TQuat<double>::Identity.Z >> 0x20);
  uVar41 = SUB84(UE::Math::TQuat<double>::Identity.W,0);
  uVar42 = (undefined4)((ulonglong)UE::Math::TQuat<double>::Identity.W >> 0x20);
  uVar47 = SUB84(UE::Math::TQuat<double>::Identity.X,0);
  uVar53 = (undefined4)((ulonglong)UE::Math::TQuat<double>::Identity.X >> 0x20);
  uVar54 = SUB84(UE::Math::TQuat<double>::Identity.Y,0);
  uVar55 = (undefined4)((ulonglong)UE::Math::TQuat<double>::Identity.Y >> 0x20);
  local_188._8_8_ = UE::Math::TQuat<double>::Identity.W;
  local_188._0_8_ = UE::Math::TQuat<double>::Identity.Z;
  local_108._8_8_ = UE::Math::TQuat<double>::Identity.Y;
  local_108._0_8_ = UE::Math::TQuat<double>::Identity.X;
  while( true ) {
    dVar7 = __real_3e45798ee0000000;
    dVar30 = (double)CONCAT44(uVar55,uVar54) * __real_4000000000000000;
    dVar43 = (double)CONCAT44(uVar40,uVar34) * __real_4000000000000000;
    dVar19 = (double)CONCAT44(uVar53,uVar47) * __real_4000000000000000;
    dVar44 = (double)CONCAT44(uVar53,uVar47) * dVar30;
    dVar36 = (double)CONCAT44(uVar42,uVar41) * dVar30;
    dVar49 = (double)CONCAT44(uVar53,uVar47) * dVar19;
    dVar19 = (double)CONCAT44(uVar42,uVar41) * dVar19;
    dVar30 = (double)CONCAT44(uVar55,uVar54) * dVar30;
    dVar46 = (double)CONCAT44(uVar55,uVar54) * dVar43;
    dVar35 = (double)CONCAT44(uVar40,uVar34) * dVar43;
    dVar3 = (double)CONCAT44(uVar53,uVar47) * dVar43;
    dVar43 = (double)CONCAT44(uVar42,uVar41) * dVar43;
    dVar48 = dVar36 + dVar3;
    dVar3 = dVar3 - dVar36;
    dVar31 = (double)CONCAT44(uVar57,uVar56) - (dVar35 + dVar30);
    dVar35 = __real_3ff0000000000000 - (dVar35 + dVar49);
    dVar49 = __real_3ff0000000000000 - (dVar30 + dVar49);
    dVar30 = dVar44 - dVar43;
    dVar43 = dVar43 + dVar44;
    dVar36 = dVar46 - dVar19;
    dVar19 = dVar19 + dVar46;
    dVar46 = local_res10 * dVar49 + local_190 * dVar48 + local_1a0 * dVar36 +
             local_198 * dVar19 + local_1a8 * dVar30 +
             local_168 * dVar3 + local_1b0 * dVar35 + local_1b8 * dVar43 + local_res18 * dVar31;
    auVar51._0_8_ =
         __real_3ff0000000000000 /
         ((double)CONCAT44((uint)((ulonglong)dVar46 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar46,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
         __real_3e45798ee0000000);
    auVar51._8_8_ = 0;
    dVar46 = ((local_198 * dVar35 - local_1b0 * dVar19) + (local_168 * dVar43 - local_1b8 * dVar3) +
             (local_res10 * dVar36 - local_1a0 * dVar49)) * auVar51._0_8_;
    dVar19 = ((local_1a8 * dVar19 - local_198 * dVar30) + (local_res18 * dVar3 - local_168 * dVar31)
             + (local_190 * dVar49 - local_res10 * dVar48)) * auVar51._0_8_;
    dVar35 = ((local_1b0 * dVar30 - local_1a8 * dVar35) +
              (local_1b8 * dVar31 - local_res18 * dVar43) +
             (local_1a0 * dVar48 - local_190 * dVar36)) * auVar51._0_8_;
    auVar37._0_8_ = dVar19 * dVar19 + dVar46 * dVar46 + dVar35 * dVar35;
    auVar37._8_8_ = 0;
    auVar37 = sqrtpd(auVar51,auVar37);
    if (auVar37._0_8_ < __real_3e45798ee0000000) break;
    uVar56 = SUB84(__real_3ff0000000000000,0);
    uVar57 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    dVar31 = __real_3ff0000000000000 / auVar37._0_8_;
    __libm_sse2_sincos_();
    dVar36 = extraout_XMM0._0_8_;
    dVar19 = dVar19 * dVar31 * dVar36;
    dVar30 = dVar46 * dVar31 * dVar36;
    dVar36 = dVar35 * dVar31 * dVar36;
    auVar38._8_4_ = SUB84(dVar30,0);
    auVar38._0_8_ = dVar30;
    auVar38._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
    auVar50._8_4_ = extraout_XMM0._8_4_;
    auVar50._0_8_ = dVar36;
    auVar50._12_4_ = extraout_XMM0._12_4_;
    dVar35 = auVar50._8_8_;
    auVar26._8_4_ = SUB84(dVar19,0);
    auVar26._0_8_ = dVar19;
    auVar26._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
    auVar20._8_4_ = extraout_XMM0._8_4_;
    auVar20._0_8_ = dVar35;
    auVar20._12_4_ = extraout_XMM0._12_4_;
    auVar21._8_4_ = SUB84(dVar36,0);
    auVar21._0_8_ = dVar36;
    auVar21._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
    dVar31 = auVar21._8_8_ * (double)local_108._0_8_ *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    dVar43 = dVar30 * (double)local_188._8_8_ *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
             dVar35 * (double)local_108._0_8_ +
             dVar19 * (double)local_188._0_8_ *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             dVar36 * (double)local_108._8_8_ *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar46 = auVar38._8_8_ * (double)local_188._0_8_ *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             auVar20._8_8_ * (double)local_108._8_8_ +
             auVar26._8_8_ * (double)local_188._8_8_ *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] + dVar31;
    auVar4._4_8_ = local_108._0_8_;
    auVar4._0_4_ = (int)((ulonglong)dVar43 >> 0x20);
    auVar32._0_8_ = auVar4._0_8_ << 0x20;
    auVar32._8_4_ = SUB84(dVar46,0);
    uVar34 = (undefined4)((ulonglong)dVar46 >> 0x20);
    auVar32._12_4_ = uVar34;
    dVar48 = auVar32._8_8_;
    auVar33._8_8_ = dVar46;
    auVar33._0_8_ = dVar48;
    dVar35 = dVar30 * (double)local_108._8_8_ *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
             dVar35 * (double)local_188._0_8_ +
             dVar19 * (double)local_108._0_8_ *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
             dVar36 * (double)local_188._8_8_ *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar19 = dVar30 * (double)local_108._0_8_ *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
             extraout_XMM0._8_8_ * (double)local_188._8_8_ +
             dVar19 * (double)local_108._8_8_ *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
             dVar36 * (double)local_188._0_8_ *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    uVar40 = SUB84(dVar19,0);
    uVar41 = (undefined4)((ulonglong)dVar19 >> 0x20);
    auVar5._4_8_ = dVar31;
    auVar5._0_4_ = (int)((ulonglong)dVar35 >> 0x20);
    auVar22._0_8_ = auVar5._0_8_ << 0x20;
    auVar22._8_4_ = uVar40;
    auVar22._12_4_ = uVar41;
    auVar23._8_4_ = SUB84(dVar46,0);
    auVar23._0_8_ = dVar43;
    auVar23._12_4_ = uVar34;
    auVar27._8_4_ = uVar40;
    auVar27._0_8_ = dVar35;
    auVar27._12_4_ = uVar41;
    dVar19 = dVar35 * dVar35 + dVar43 * dVar43;
    dVar30 = auVar27._8_8_ * auVar22._8_8_ + auVar23._8_8_ * dVar48;
    auVar24._8_4_ = SUB84(dVar30,0);
    auVar24._0_8_ = dVar19;
    auVar24._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
    auVar25._0_8_ = auVar24._8_8_ + dVar19;
    auVar25._8_8_ = dVar19 + dVar30;
    auVar37 = sqrtpd(auVar33,auVar25);
    uVar17 = -(ulonglong)(dVar7 <= auVar25._0_8_);
    uVar18 = -(ulonglong)(dVar7 <= auVar25._8_8_);
    auVar51 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar37);
    uVar16 = (uint)(uVar17 >> 0x20);
    uVar45 = (uint)(uVar18 >> 0x20);
    auVar52._0_8_ = uVar17 & (ulonglong)(auVar51._0_8_ * dVar43);
    uVar13 = uVar18 & (ulonglong)(auVar51._8_8_ * dVar48);
    auVar52._8_4_ = (undefined4)uVar13;
    auVar52._12_4_ = (undefined4)(uVar13 >> 0x20);
    auVar28._0_4_ = ~(uint)uVar17 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
    auVar28._4_4_ =
         ~uVar16 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
    auVar28._8_4_ = ~(uint)uVar18 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar28._12_4_ =
         ~uVar45 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_108._0_16_ = auVar52 | auVar28;
    uVar14 = (int)uVar15 + 1;
    uVar15 = (ulonglong)uVar14;
    auVar37 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar37);
    auVar39._0_4_ = ~(uint)uVar17 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
    auVar39._4_4_ =
         ~uVar16 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
    auVar39._8_4_ = ~(uint)uVar18 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    auVar39._12_4_ =
         ~uVar45 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    auVar29._0_8_ = (ulonglong)(auVar37._0_8_ * dVar35) & uVar17;
    uVar18 = (ulonglong)(auVar37._8_8_ * auVar22._8_8_) & uVar18;
    auVar29._8_4_ = (undefined4)uVar18;
    auVar29._12_4_ = (undefined4)(uVar18 >> 0x20);
    local_188._0_16_ = auVar39 | auVar29;
    if (0x31 < uVar14) break;
    uVar41 = local_188._8_4_;
    uVar42 = local_188._12_4_;
    uVar54 = local_108._8_4_;
    uVar55 = local_108._12_4_;
    uVar34 = local_188._0_4_;
    uVar40 = local_188._4_4_;
    uVar47 = local_108._0_4_;
    uVar53 = local_108._4_4_;
  }
  __return_storage_ptr__->X = (double)local_108._0_8_;
  __return_storage_ptr__->Y = (double)local_108._8_8_;
  __return_storage_ptr__->Z = (double)local_188._0_8_;
  __return_storage_ptr__->W = (double)local_188._8_8_;
  return __return_storage_ptr__;
}

// SolveFABRIK @ 14df56810

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
AnimationCore::SolveFABRIK
          (TArray<FLimbLink,TSizedDefaultAllocator<32>_> *param_1,TVector<double> *param_2,
          float param_3,int param_4,bool param_5,float param_6,float param_7,float param_8,
          bool param_9)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  ForAnyElementType FVar12;
  bool bVar13;
  uint uVar14;
  double *pdVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  uint uVar33;
  double dVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  double dVar37;
  undefined1 auVar38 [16];
  float fVar39;
  float fVar40;
  double dVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  int local_res18;
  TVector<double>_u_0 local_190;
  TArray<FLimbLink,TSizedDefaultAllocator<32>_> local_178;
  TArray<FLimbLink,TSizedDefaultAllocator<32>_> local_168;
  TVector<double>_u_0 local_158;
  longlong local_140;
  double local_138;
  undefined8 local_130;
  undefined8 local_128;
  double local_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  
  uVar22 = param_1->ArrayNum;
  uVar25 = 0;
  if (param_3 <= __real_38d1b717) {
    param_3 = __real_38d1b717;
  }
  if (((int)uVar22 < 1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar19 = (param_1->AllocatorInstance).Data;
  local_158._s_0.X = (double)*(undefined8 *)pFVar19;
  local_158._s_0.Y = (double)*(undefined8 *)(pFVar19 + 8);
  uVar17 = param_1->ArrayNum - 1;
  local_158._s_0.Z = (double)*(undefined8 *)(pFVar19 + 0x10);
  uVar14 = 0;
  if ((int)uVar17 < param_1->ArrayNum) {
    uVar14 = ~uVar17 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar46 = SUB84(__real_3ff0000000000000,0);
  uVar47 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  lVar16 = (longlong)param_1->ArrayNum * 0x68;
  pFVar19 = (param_1->AllocatorInstance).Data;
  dVar5 = (param_2->field0_0x0)._s_0.Y - *(double *)(pFVar19 + lVar16 + -0x60);
  dVar26 = (param_2->field0_0x0)._s_0.Z - *(double *)(pFVar19 + lVar16 + -0x58);
  dVar31 = (param_2->field0_0x0)._s_0.X - *(double *)(pFVar19 + lVar16 + -0x68);
  auVar28._0_8_ = dVar26 * dVar26;
  auVar28._8_8_ = 0;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = dVar5 * dVar5 + dVar31 * dVar31 + auVar28._0_8_;
  auVar29 = sqrtpd(auVar28,auVar29);
  uVar14 = 0;
  if (param_3 < (float)auVar29._0_8_) {
    if (!param_5) goto LAB_14df56dc5;
  }
  else if (!param_5) {
    return;
  }
  FindPlaneNormal((TVector<double> *)&local_190._s_0,param_1,(TVector<double> *)&local_158._s_0,
                  param_2);
  uVar17 = uVar22 - 2;
  if (0 < (int)uVar17) {
    uVar44 = SUB84(__real_3e45798ee0000000,0);
    uVar45 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
    lVar16 = (longlong)(int)uVar17 * 0x68;
    uVar18 = uVar22;
    while( true ) {
      uVar21 = uVar18 - 1;
      uVar33 = uVar14;
      if ((int)uVar21 < param_1->ArrayNum) {
        uVar33 = ~uVar21 >> 0x1f;
      }
      if ((uVar33 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar19 = (param_1->AllocatorInstance).Data;
      uVar33 = uVar14;
      if ((int)uVar17 < param_1->ArrayNum) {
        uVar33 = ~uVar17 >> 0x1f;
      }
      if ((uVar33 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      uVar33 = uVar14;
      if ((int)(uVar18 - 3) < param_1->ArrayNum) {
        uVar33 = -uVar17 >> 0x1f;
      }
      if ((uVar33 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      dVar31 = *(double *)(pFVar19 + lVar16 + 0x68) - *(double *)(pFVar1 + lVar16);
      dVar26 = *(double *)(pFVar19 + lVar16 + 0x70) - *(double *)(pFVar1 + lVar16 + 8);
      dVar41 = *(double *)(pFVar19 + lVar16 + 0x78) - *(double *)(pFVar1 + lVar16 + 0x10);
      pFVar19 = (param_1->AllocatorInstance).Data;
      dVar5 = dVar26 * dVar26 + dVar31 * dVar31 + dVar41 * dVar41;
      uVar35 = dVar31;
      uVar9 = dVar26;
      uVar42 = dVar41;
      if ((dVar5 != (double)CONCAT44(uVar47,uVar46)) &&
         (uVar35 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
         uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
         uVar42 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
         (double)CONCAT44(uVar45,uVar44) <= dVar5)) {
        local_120 = (double)CONCAT44(uVar47,uVar46) / SQRT(dVar5);
        uVar35 = dVar31 * local_120;
        uVar9 = dVar26 * local_120;
        uVar42 = dVar41 * local_120;
      }
      dVar26 = *(double *)(pFVar19 + lVar16 + -0x60) - *(double *)(pFVar1 + lVar16 + 8);
      dVar41 = *(double *)(pFVar19 + lVar16 + -0x58) - *(double *)(pFVar1 + lVar16 + 0x10);
      dVar31 = *(double *)(pFVar19 + lVar16 + -0x68) - *(double *)(pFVar1 + lVar16);
      dVar5 = dVar26 * dVar26 + dVar31 * dVar31 + dVar41 * dVar41;
      uVar36 = dVar31;
      uVar10 = dVar26;
      uVar43 = dVar41;
      if ((dVar5 != __real_3ff0000000000000) &&
         (uVar36 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
         uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
         uVar43 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
         __real_3e45798ee0000000 <= dVar5)) {
        local_118 = __real_3ff0000000000000 / SQRT(dVar5);
        uVar36 = dVar31 * local_118;
        uVar10 = dVar26 * local_118;
        uVar43 = dVar41 * local_118;
      }
      if ((local_190._s_0.Y * (double)uVar42 - local_190._s_0.Z * (double)uVar9) * (double)uVar36 +
          (local_190._s_0.Z * (double)uVar35 - local_190._s_0.X * (double)uVar42) * (double)uVar10 +
          (local_190._s_0.X * (double)uVar9 - local_190._s_0.Y * (double)uVar35) * (double)uVar43 <=
          __real_0000000000000000) {
        uVar18 = (uint)__xmm_80000000000000008000000000000000;
        uVar33 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
        pdVar15 = &local_138;
        local_138 = (double)CONCAT44((uint)((ulonglong)local_190._0_8_ >> 0x20) ^ uVar33,
                                     SUB84(local_190._s_0.X,0) ^ uVar18);
        local_130 = CONCAT44((uint)((ulonglong)local_190._8_8_ >> 0x20) ^ uVar33,
                             SUB84(local_190._s_0.Y,0) ^ uVar18);
        local_128 = CONCAT44((uint)((ulonglong)local_190._16_8_ >> 0x20) ^ uVar33,
                             SUB84(local_190._s_0.Z,0) ^ uVar18);
      }
      else {
        local_108 = local_190._s_0.X;
        dStack_100 = local_190._s_0.Y;
        pdVar15 = &local_108;
        local_f8 = local_190._s_0.Z;
      }
      dVar26 = pdVar15[1];
      uVar17 = uVar17 - 1;
      dVar5 = pdVar15[2];
      uVar44 = SUB84(__real_3e45798ee0000000,0);
      uVar45 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
      *(double *)(pFVar1 + lVar16 + 0x20) = *pdVar15;
      *(double *)(pFVar1 + lVar16 + 0x20 + 8) = dVar26;
      *(double *)(pFVar1 + lVar16 + 0x30) = dVar5;
      if ((int)uVar17 < 1) break;
      uVar46 = SUB84(__real_3ff0000000000000,0);
      uVar47 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      lVar16 = lVar16 + -0x68;
      uVar18 = uVar21;
    }
  }
LAB_14df56dc5:
  uVar18 = param_1->ArrayNum - 1;
  uVar17 = uVar14;
  if ((int)uVar18 < param_1->ArrayNum) {
    uVar17 = ~uVar18 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar19 = (param_1->AllocatorInstance).Data;
  dVar5 = (param_2->field0_0x0)._s_0.X;
  dVar26 = (param_2->field0_0x0)._s_0.Y;
  dVar31 = (param_2->field0_0x0)._s_0.Z;
  lVar16 = (longlong)param_1->ArrayNum * 0x68;
  dVar41 = *(double *)(pFVar19 + lVar16 + -0x68);
  dVar27 = *(double *)(pFVar19 + lVar16 + -0x60);
  dVar32 = *(double *)(pFVar19 + lVar16 + -0x58);
  if ((param_1->ArrayNum < 1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  fVar11 = __real_3f800000;
  pFVar19 = (param_1->AllocatorInstance).Data;
  dVar34 = (double)param_8;
  dVar37 = (double)(__real_3f800000 - param_8);
  dVar7 = local_158._s_0.Y - *(double *)(pFVar19 + 8);
  auVar38._0_8_ = (local_158._s_0.X - *(double *)pFVar19) * dVar37 + dVar34 * (dVar5 - dVar41);
  auVar38._8_8_ = 0;
  dVar5 = local_158._s_0.Z - *(double *)(pFVar19 + 0x10);
  lVar16 = (longlong)(int)uVar22;
  uVar20 = uVar25;
  uVar23 = uVar25;
  local_140 = lVar16;
  if (0 < (int)uVar22) {
    do {
      uVar18 = (uint)uVar23;
      uVar17 = uVar14;
      if ((int)uVar18 < param_1->ArrayNum) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar19 = (param_1->AllocatorInstance).Data;
      *(double *)(pFVar19 + uVar20) = auVar38._0_8_ + *(double *)(pFVar19 + uVar20);
      *(double *)(pFVar19 + uVar20 + 8) =
           dVar7 * dVar37 + dVar34 * (dVar26 - dVar27) + *(double *)(pFVar19 + uVar20 + 8);
      *(double *)(pFVar19 + uVar20 + 0x10) =
           dVar5 * dVar37 + dVar34 * (dVar31 - dVar32) + *(double *)(pFVar19 + uVar20 + 0x10);
      lVar16 = lVar16 + -1;
      uVar20 = uVar20 + 0x68;
      uVar23 = (ulonglong)(uVar18 + 1);
    } while (lVar16 != 0);
  }
  dVar31 = _UNK_150689678;
  dVar26 = ___xmm_3fe00000000000003fe0000000000000;
  dVar5 = __real_3fe0000000000000;
  iVar8 = 1;
  if (1 < param_4) {
    iVar8 = param_4;
  }
  local_res18 = 1;
  fVar39 = (float)auVar29._0_8_;
  do {
    if (((local_140 < 4) || (!param_9)) || (fVar39 <= fVar11)) {
      FABRIK_ForwardReach(param_1,param_2,param_7,param_5,param_6);
      FABRIK_BackwardReach(param_1,(TVector<double> *)&local_158._s_0,param_7,param_5,param_6);
    }
    else {
      local_168.ArrayNum = param_1->ArrayNum;
      lVar16 = (longlong)local_168.ArrayNum;
      pFVar19 = (param_1->AllocatorInstance).Data;
      local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_168.ArrayNum == 0) {
        local_168.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x68,8,local_168.ArrayNum,0,&local_168.AllocatorInstance,local_168.ArrayNum,
                   &local_168.ArrayMax);
        memcpy(local_168.AllocatorInstance.Data,pFVar19,lVar16 * 0x68);
      }
      FABRIK_ForwardReach(&local_168,param_2,param_7,param_5,param_6);
      local_178.ArrayNum = param_1->ArrayNum;
      lVar16 = (longlong)local_178.ArrayNum;
      pFVar19 = (param_1->AllocatorInstance).Data;
      local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_178.ArrayNum == 0) {
        local_178.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x68,8,local_178.ArrayNum,0,&local_178.AllocatorInstance,local_178.ArrayNum,
                   &local_178.ArrayMax);
        memcpy(local_178.AllocatorInstance.Data,pFVar19,lVar16 * 0x68);
      }
      FABRIK_BackwardReach(&local_178,(TVector<double> *)&local_158._s_0,param_7,param_5,param_6);
      uVar20 = uVar25;
      uVar23 = uVar25;
      uVar24 = uVar25;
      do {
        uVar21 = (uint)uVar23;
        uVar18 = ~uVar21 >> 0x1f;
        uVar17 = uVar14;
        if ((int)uVar21 < local_168.ArrayNum) {
          uVar17 = uVar18;
        }
        if ((uVar17 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar12.Data = local_168.AllocatorInstance.Data;
        uVar17 = uVar14;
        if ((int)uVar21 < local_178.ArrayNum) {
          uVar17 = uVar18;
        }
        if ((uVar17 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar19 = FVar12.Data + uVar20 + 8;
        dVar41 = *(double *)pFVar19;
        dVar27 = *(double *)(local_178.AllocatorInstance.Data + uVar20 + 8);
        uVar17 = uVar14;
        if ((int)uVar21 < param_1->ArrayNum) {
          uVar17 = uVar18;
        }
        auVar38._0_8_ =
             (*(double *)(FVar12.Data + uVar20) +
             *(double *)(local_178.AllocatorInstance.Data + uVar20)) * dVar5;
        auVar38._8_8_ = 0;
        dVar32 = (*(double *)(pFVar19 + 8) +
                 *(double *)(local_178.AllocatorInstance.Data + uVar20 + 8 + 8)) * dVar31;
        if ((uVar17 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar19 = (param_1->AllocatorInstance).Data;
        uVar23 = (ulonglong)(uVar21 + 1);
        uVar24 = uVar24 + 1;
        *(double *)(pFVar19 + uVar20) = auVar38._0_8_;
        auVar6._8_4_ = SUB84(dVar32,0);
        auVar6._0_8_ = (dVar41 + dVar27) * dVar26;
        auVar6._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
        *(undefined1 (*) [16])(pFVar19 + uVar20 + 8) = auVar6;
        uVar20 = uVar20 + 0x68;
      } while ((longlong)uVar24 < local_140);
      if (local_178.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.AllocatorInstance.Data);
      }
      if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.AllocatorInstance.Data);
      }
    }
    if ((param_1->ArrayNum < 1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar19 = (param_1->AllocatorInstance).Data;
    uVar18 = param_1->ArrayNum - 1;
    uVar17 = uVar14;
    if ((int)uVar18 < param_1->ArrayNum) {
      uVar17 = ~uVar18 >> 0x1f;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (local_158._s_0.Y - *(double *)(pFVar19 + 8)) *
                   (local_158._s_0.Y - *(double *)(pFVar19 + 8)) +
                   (local_158._s_0.X - *(double *)pFVar19) * (local_158._s_0.X - *(double *)pFVar19)
                   + (local_158._s_0.Z - *(double *)(pFVar19 + 0x10)) *
                     (local_158._s_0.Z - *(double *)(pFVar19 + 0x10));
    auVar38 = sqrtpd(auVar38,auVar3);
    if ((uVar17 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar19 = (param_1->AllocatorInstance).Data;
    lVar16 = (longlong)param_1->ArrayNum * 0x68;
    dVar41 = (param_2->field0_0x0)._s_0.Y - *(double *)(pFVar19 + lVar16 + -0x60);
    dVar27 = (param_2->field0_0x0)._s_0.Z - *(double *)(pFVar19 + lVar16 + -0x58);
    dVar32 = (param_2->field0_0x0)._s_0.X - *(double *)(pFVar19 + lVar16 + -0x68);
    auVar30._0_8_ = dVar27 * dVar27;
    auVar30._8_8_ = 0;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = dVar41 * dVar41 + dVar32 * dVar32 + auVar30._0_8_;
    auVar29 = sqrtpd(auVar30,auVar4);
    fVar40 = (float)(auVar29._0_8_ + auVar38._0_8_);
  } while (((fVar40 <= fVar39) && (param_3 < fVar40)) &&
          (local_res18 = local_res18 + 1, fVar39 = fVar40, local_res18 < iVar8));
  if ((param_1->ArrayNum < 1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar19 = (param_1->AllocatorInstance).Data;
  if (((__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)(*(double *)pFVar19 - local_158._s_0.X) >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(*(double *)pFVar19 - local_158._s_0.X,0) &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
      (__real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)(*(double *)(pFVar19 + 8) - local_158._s_0.Y) >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(*(double *)(pFVar19 + 8) - local_158._s_0.Y,0) &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
     (__real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)(*(double *)(pFVar19 + 0x10) - local_158._s_0.Z) >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(*(double *)(pFVar19 + 0x10) - local_158._s_0.Z,0) &
                       (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    FABRIK_BackwardReach(param_1,(TVector<double> *)&local_158._s_0,param_7,param_5,param_6);
  }
  uVar17 = uVar22 - 1;
  uVar18 = uVar14;
  if ((int)uVar17 < param_1->ArrayNum) {
    uVar18 = ~uVar17 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar22 = uVar22 - 2;
  pFVar19 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar17 * 0x68;
  if ((int)uVar22 < param_1->ArrayNum) {
    uVar14 = ~uVar22 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar16 = (longlong)(int)uVar22 * 0x68;
  pFVar1 = (param_1->AllocatorInstance).Data;
  dVar31 = *(double *)pFVar19 - *(double *)(pFVar1 + lVar16);
  dVar32 = *(double *)(pFVar19 + 0x10) - *(double *)(pFVar1 + lVar16 + 0x10);
  dVar5 = *(double *)(pFVar1 + lVar16 + 8);
  dVar41 = *(double *)(pFVar19 + 8) - dVar5;
  dVar27 = (double)*(float *)(pFVar19 + 0x18);
  dVar37 = __real_3ff0000000000000 / SQRT(dVar41 * dVar41 + dVar31 * dVar31 + dVar32 * dVar32);
  dVar26 = *(double *)(pFVar1 + lVar16 + 0x10);
  *(double *)pFVar19 = dVar37 * dVar31 * dVar27 + *(double *)(pFVar1 + lVar16);
  *(double *)(pFVar19 + 8) = dVar37 * dVar41 * dVar27 + dVar5;
  *(double *)(pFVar19 + 0x10) = dVar37 * dVar32 * dVar27 + dVar26;
  return;
}

// SolveLimb @ 14df57630

bool __cdecl
AnimationCore::SolveLimb
          (TArray<FLimbLink,TSizedDefaultAllocator<32>_> *param_1,float param_2,
          TVector<double> *param_3,float param_4,int param_5,TVector<double> *param_6,bool param_7,
          float param_8,float param_9,bool param_10,float param_11)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  uVar6 = param_1->ArrayNum - 1;
  uVar5 = 0;
  if ((int)uVar6 < param_1->ArrayNum) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  lVar7 = (longlong)param_1->ArrayNum;
  pFVar1 = (param_1->AllocatorInstance).Data;
  dVar10 = (param_3->field0_0x0)._s_0.X;
  dVar9 = (double)param_4;
  dVar8 = *(double *)(pFVar1 + (lVar7 * 0xd + -0xd) * 8) - dVar10;
  if ((((dVar9 < (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
       (dVar8 = *(double *)(pFVar1 + (lVar7 * 0xd + -0xc) * 8) - (param_3->field0_0x0)._s_0.Y,
       dVar9 < (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
      (dVar8 = *(double *)(pFVar1 + (lVar7 * 0xd + -0xb) * 8) - (param_3->field0_0x0)._s_0.Z,
      dVar9 < (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
     (param_7)) {
    if (param_1->ArrayNum == 3) {
      dVar10 = dVar10 - *(double *)pFVar1;
      dVar8 = (param_3->field0_0x0)._s_0.Z - *(double *)(pFVar1 + 0x10);
      dVar9 = (param_3->field0_0x0)._s_0.Y - *(double *)(pFVar1 + 8);
      if (dVar9 * dVar9 + dVar10 * dVar10 + dVar8 * dVar8 < (double)(param_2 * param_2)) {
        SolveTwoBoneIK(param_1,param_3,param_6);
      }
      else {
        SolveStraightLimb(param_1,param_3);
      }
    }
    else {
      if (__real_42b40000 <= param_8) {
        param_8 = __real_42b40000;
      }
      if (param_8 <= 0.0) {
        param_8 = 0.0;
      }
      SolveFABRIK(param_1,param_3,param_4,param_5,param_7,param_8 * __real_3c8efa35,param_9,param_11
                  ,param_10);
    }
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

// SolveStraightLimb @ 14df57800

void __cdecl
AnimationCore::SolveStraightLimb
          (TArray<FLimbLink,TSizedDefaultAllocator<32>_> *param_1,TVector<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  double dVar14;
  
  if ((param_1->ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  dVar3 = (param_2->field0_0x0)._s_0.X - *(double *)pFVar1;
  dVar4 = (param_2->field0_0x0)._s_0.Y - *(double *)(pFVar1 + 8);
  dVar5 = (param_2->field0_0x0)._s_0.Z - *(double *)(pFVar1 + 0x10);
  dVar14 = dVar4 * dVar4 + dVar3 * dVar3 + dVar5 * dVar5;
  uVar6 = dVar3;
  uVar7 = dVar4;
  uVar8 = dVar5;
  if ((dVar14 != __real_3ff0000000000000) &&
     (uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     __real_3e45798ee0000000 <= dVar14)) {
    dVar14 = __real_3ff0000000000000 / SQRT(dVar14);
    uVar6 = dVar3 * dVar14;
    uVar7 = dVar4 * dVar14;
    uVar8 = dVar5 * dVar14;
  }
  iVar11 = param_1->ArrayNum;
  uVar12 = 1;
  if (1 < iVar11) {
    lVar13 = 0x68;
    do {
      uVar10 = 0;
      if ((int)(uVar12 - 1) < iVar11) {
        uVar10 = -uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      uVar10 = 0;
      if ((int)uVar12 < param_1->ArrayNum) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      dVar3 = (double)*(float *)((param_1->AllocatorInstance).Data + lVar13 + 0x18);
      uVar10 = 0;
      if ((int)uVar12 < param_1->ArrayNum) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      dVar4 = *(double *)(pFVar1 + lVar13 + -0x68);
      dVar5 = *(double *)(pFVar1 + lVar13 + -0x60);
      dVar14 = *(double *)(pFVar1 + lVar13 + -0x58);
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      uVar12 = uVar12 + 1;
      *(double *)(pFVar1 + lVar13) = dVar3 * (double)uVar6 + dVar4;
      *(double *)(pFVar1 + lVar13 + 8) = dVar3 * (double)uVar7 + dVar5;
      *(double *)(pFVar1 + lVar13 + 0x10) = dVar3 * (double)uVar8 + dVar14;
      lVar13 = lVar13 + 0x68;
      iVar11 = param_1->ArrayNum;
    } while ((int)uVar12 < iVar11);
  }
  return;
}

// SolveTwoBoneIK @ 14df57ad0

void __cdecl
AnimationCore::SolveTwoBoneIK
          (TArray<FLimbLink,TSizedDefaultAllocator<32>_> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  bool bVar13;
  float fVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  float fVar23;
  undefined8 uVar24;
  double local_178;
  double local_168;
  TVector<double>_u_0 local_148 [2];
  double local_118;
  TQuat<double> local_108;
  double local_e8;
  
  if ((param_1->ArrayNum != 3) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InOutLinks.Num() == 3",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Rig\\Solvers\\LimbSolver.cpp"
                          ,0xe1,L""), bVar13)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((param_1->ArrayNum < 3) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar2 = (param_1->AllocatorInstance).Data;
  if ((param_1->ArrayNum < 2) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar3 = (param_1->AllocatorInstance).Data;
  if ((param_1->ArrayNum < 1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar4 = (param_1->AllocatorInstance).Data;
  dVar8 = (param_2->field0_0x0)._s_0.Y;
  *(double *)(pFVar2 + 0xd0) = (param_2->field0_0x0)._s_0.X;
  *(double *)(pFVar2 + 0xd8) = dVar8;
  *(double *)(pFVar2 + 0xe0) = (param_2->field0_0x0)._s_0.Z;
  dVar8 = *(double *)(pFVar2 + 0xd0) - *(double *)pFVar4;
  dVar20 = *(double *)(pFVar2 + 0xd8) - *(double *)(pFVar4 + 8);
  dVar15 = *(double *)(pFVar2 + 0xe0) - *(double *)(pFVar4 + 0x10);
  if ((param_1->ArrayNum < 2) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  auVar16._0_8_ = dVar20 * dVar20;
  auVar16._8_8_ = 0;
  fVar1 = *(float *)((param_1->AllocatorInstance).Data + 0x80);
  auVar17._8_8_ = 0;
  auVar17._0_8_ = dVar8 * dVar8 + auVar16._0_8_ + dVar15 * dVar15;
  auVar17 = sqrtpd(auVar16,auVar17);
  fVar23 = (float)auVar17._0_8_;
  if ((param_1->ArrayNum < 3) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  fVar12 = __real_322bcc77;
  fVar14 = *(float *)((param_1->AllocatorInstance).Data + 0xe8);
  fVar18 = (fVar1 + fVar1) * fVar23;
  if ((float)((uint)fVar18 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
    fVar18 = 0.0;
  }
  else {
    fVar18 = ((fVar1 * fVar1 + fVar23 * fVar23) - fVar14 * fVar14) / fVar18;
    fVar14 = __real_bf800000;
    if (fVar18 < __real_bf800000) goto LAB_14df57d8c;
  }
  fVar14 = fVar18;
  if (__real_3f800000 <= fVar18) {
    fVar14 = __real_3f800000;
  }
LAB_14df57d8c:
  fVar14 = acosf(fVar14);
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (fVar12 < fVar23) {
    dVar19 = __real_3ff0000000000000 / (double)fVar23;
    uVar9 = dVar8 * dVar19;
    uVar10 = dVar20 * dVar19;
    uVar11 = dVar15 * dVar19;
  }
  dVar15 = *(double *)(pFVar3 + 0x68) - *(double *)pFVar4;
  dVar8 = *(double *)(pFVar3 + 0x70) - *(double *)(pFVar4 + 8);
  dVar19 = *(double *)(pFVar3 + 0x78) - *(double *)(pFVar4 + 0x10);
  dVar20 = dVar8 * (double)uVar10 + dVar15 * (double)uVar9 + dVar19 * (double)uVar11;
  local_168 = *(double *)(pFVar3 + 0x68) - (dVar20 * (double)uVar9 + *(double *)pFVar4);
  uVar24 = *(double *)(pFVar3 + 0x78) - (dVar20 * (double)uVar11 + *(double *)(pFVar4 + 0x10));
  local_178 = *(double *)(pFVar3 + 0x70) - (dVar20 * (double)uVar10 + *(double *)(pFVar4 + 8));
  dVar20 = local_178 * local_178 + local_168 * local_168 + (double)uVar24 * (double)uVar24;
  if (dVar20 != __real_3ff0000000000000) {
    if (__real_3f1a36e2e0000000 <= dVar20) {
      local_e8 = __real_3ff0000000000000 / SQRT(dVar20);
      local_168 = local_168 * local_e8;
      local_178 = local_178 * local_e8;
      uVar24 = (double)uVar24 * local_e8;
    }
    else {
      local_178 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_168 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
  }
  local_118 = (double)uVar24;
  if ((((UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X != (param_3->field0_0x0)._s_0.X) ||
       (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y != (param_3->field0_0x0)._s_0.Y)) ||
      (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z != (param_3->field0_0x0)._s_0.Z)) &&
     (((((double)uVar9 != UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X ||
        ((double)uVar10 != UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y)) ||
       ((double)uVar11 != UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z)) &&
      (__real_322bcc77 < (float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff))))) {
    dVar20 = __real_3ff0000000000000 / (double)fVar1;
    if ((param_1->ArrayNum < 2) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar2 = (param_1->AllocatorInstance).Data;
    if ((param_1->ArrayNum < 2) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar5 = (param_1->AllocatorInstance).Data;
    if ((((local_168 == UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X) &&
         (local_178 == UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y)) &&
        ((double)uVar24 == UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z)) ||
       (__real_3f7d70a4 <=
        (float)(dVar8 * dVar20 * (double)uVar10 + dVar15 * dVar20 * (double)uVar9 +
               dVar19 * dVar20 * (double)uVar11))) {
      if (((UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X != *(double *)(pFVar2 + 0xa0))
          || (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y != *(double *)(pFVar2 + 0xa8))
          ) || (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z !=
                *(double *)(pFVar2 + 0xb0))) {
        local_148[0]._0_8_ =
             (double)uVar11 * (param_3->field0_0x0)._s_0.Y -
             (double)uVar10 * (param_3->field0_0x0)._s_0.Z;
        local_148[0]._8_8_ =
             (double)uVar9 * (param_3->field0_0x0)._s_0.Z -
             (double)uVar11 * (param_3->field0_0x0)._s_0.X;
        local_148[0]._16_8_ =
             (double)uVar10 * (param_3->field0_0x0)._s_0.X -
             (double)uVar9 * (param_3->field0_0x0)._s_0.Y;
        UE::Math::TQuat<double>::FindBetweenNormals
                  (&local_108,(TVector<double> *)(pFVar5 + 0xb8),
                   (TVector<double> *)&local_148[0]._s_0);
        dVar19 = *(double *)(pFVar2 + 0xa0);
        dVar21 = *(double *)(pFVar2 + 0xa8);
        dVar8 = *(double *)(pFVar2 + 0xb0);
        dVar15 = dVar8 * local_108.Y - dVar21 * local_108.Z;
        dVar15 = dVar15 + dVar15;
        dVar22 = dVar19 * local_108.Z - dVar8 * local_108.X;
        dVar22 = dVar22 + dVar22;
        dVar20 = dVar21 * local_108.X - dVar19 * local_108.Y;
        dVar20 = dVar20 + dVar20;
        local_168 = (dVar20 * local_108.Y - dVar22 * local_108.Z) + dVar15 * local_108.W + dVar19;
        uVar24 = (dVar22 * local_108.X - dVar15 * local_108.Y) + dVar20 * local_108.W + dVar8;
        local_178 = dVar21 + dVar22 * local_108.W + (dVar15 * local_108.Z - dVar20 * local_108.X);
      }
    }
    else {
      auVar7._8_4_ = SUB84(local_178,0);
      auVar7._0_8_ = local_168;
      auVar7._12_4_ = (int)((ulonglong)local_178 >> 0x20);
      *(undefined1 (*) [16])(pFVar2 + 0xa0) = auVar7;
      *(double *)(pFVar2 + 0xb0) = local_118;
      dVar8 = (param_3->field0_0x0)._s_0.Z;
      dVar20 = (param_3->field0_0x0)._s_0.Y;
      dVar15 = (param_3->field0_0x0)._s_0.X;
      *(double *)&pFVar5[0xb8].field_0x0 = (double)uVar11 * dVar20 - (double)uVar10 * dVar8;
      *(double *)(pFVar5 + 0xc0) = (double)uVar9 * dVar8 - (double)uVar11 * dVar15;
      *(double *)(pFVar5 + 200) = (double)uVar10 * dVar15 - (double)uVar9 * dVar20;
    }
  }
  dVar19 = (double)fVar18;
  fVar23 = sinf(fVar14);
  dVar21 = (double)fVar23;
  dVar15 = (double)fVar1;
  dVar8 = *(double *)(pFVar4 + 8);
  dVar20 = *(double *)(pFVar4 + 0x10);
  *(double *)(pFVar3 + 0x68) =
       ((double)uVar9 * dVar19 + dVar21 * local_168) * dVar15 + *(double *)pFVar4;
  *(double *)(pFVar3 + 0x70) = ((double)uVar10 * dVar19 + dVar21 * local_178) * dVar15 + dVar8;
  *(double *)(pFVar3 + 0x78) = ((double)uVar11 * dVar19 + dVar21 * (double)uVar24) * dVar15 + dVar20
  ;
  return;
}

// Z_Construct_UClass_UCurveRemapOp_NoRegister @ 14df5fe90

UClass * __cdecl Z_Construct_UClass_UCurveRemapOp_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCurveRemapOp.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"CurveRemapOp",
               &Z_Registration_Info_UClass_UCurveRemapOp.InnerSingleton,
               UCurveRemapOp::StaticRegisterNativesUCurveRemapOp,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCurveRemapOp>,
               InternalVTableHelperCtorCaller<UCurveRemapOp>,local_res8,URetargetOpBase::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCurveRemapOp.InnerSingleton;
}

// Z_Construct_UClass_UIKGoalCreatorInterface_NoRegister @ 14df5ff50

UClass * __cdecl Z_Construct_UClass_UIKGoalCreatorInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKGoalCreatorInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKGoalCreatorInterface",
               &Z_Registration_Info_UClass_UIKGoalCreatorInterface.InnerSingleton,
               UIKGoalCreatorInterface::StaticRegisterNativesUIKGoalCreatorInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UIKGoalCreatorInterface>,
               InternalVTableHelperCtorCaller<UIKGoalCreatorInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKGoalCreatorInterface.InnerSingleton;
}

// Z_Construct_UClass_UIKRetargetAdditivePoseController_NoRegister @ 14df60010

UClass * __cdecl Z_Construct_UClass_UIKRetargetAdditivePoseController_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetAdditivePoseController.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetAdditivePoseController",
               &Z_Registration_Info_UClass_UIKRetargetAdditivePoseController.InnerSingleton,
               UIKRetargetAdditivePoseController::
               StaticRegisterNativesUIKRetargetAdditivePoseController,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRetargetAdditivePoseController>,
               InternalVTableHelperCtorCaller<UIKRetargetAdditivePoseController>,local_res8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetAdditivePoseController.InnerSingleton;
}

// Z_Construct_UClass_UIKRetargetAlignPoleVectorController_NoRegister @ 14df600d0

UClass * __cdecl Z_Construct_UClass_UIKRetargetAlignPoleVectorController_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetAlignPoleVectorController.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetAlignPoleVectorController",
               &Z_Registration_Info_UClass_UIKRetargetAlignPoleVectorController.InnerSingleton,
               UIKRetargetAlignPoleVectorController::
               StaticRegisterNativesUIKRetargetAlignPoleVectorController,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRetargetAlignPoleVectorController>,
               InternalVTableHelperCtorCaller<UIKRetargetAlignPoleVectorController>,local_res8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetAlignPoleVectorController.InnerSingleton;
}

// Z_Construct_UClass_UIKRetargetCopyBasePoseController_NoRegister @ 14df60190

UClass * __cdecl Z_Construct_UClass_UIKRetargetCopyBasePoseController_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetCopyBasePoseController.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetCopyBasePoseController",
               &Z_Registration_Info_UClass_UIKRetargetCopyBasePoseController.InnerSingleton,
               UIKRetargetCopyBasePoseController::
               StaticRegisterNativesUIKRetargetCopyBasePoseController,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRetargetCopyBasePoseController>,
               InternalVTableHelperCtorCaller<UIKRetargetCopyBasePoseController>,local_res8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetCopyBasePoseController.InnerSingleton;
}

// Z_Construct_UClass_UIKRetargetCurveRemapController_NoRegister @ 14df60250

UClass * __cdecl Z_Construct_UClass_UIKRetargetCurveRemapController_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetCurveRemapController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetCurveRemapController",
               &Z_Registration_Info_UClass_UIKRetargetCurveRemapController.InnerSingleton,
               UIKRetargetCurveRemapController::StaticRegisterNativesUIKRetargetCurveRemapController
               ,0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UIKRetargetCurveRemapController>,
               InternalVTableHelperCtorCaller<UIKRetargetCurveRemapController>,local_res8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetCurveRemapController.InnerSingleton;
}

// Z_Construct_UClass_UIKRetargetFKChainsController_NoRegister @ 14df60310

UClass * __cdecl Z_Construct_UClass_UIKRetargetFKChainsController_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetFKChainsController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetFKChainsController",
               &Z_Registration_Info_UClass_UIKRetargetFKChainsController.InnerSingleton,
               UIKRetargetFKChainsController::StaticRegisterNativesUIKRetargetFKChainsController,
               0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UIKRetargetFKChainsController>,
               InternalVTableHelperCtorCaller<UIKRetargetFKChainsController>,local_res8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetFKChainsController.InnerSingleton;
}

// Z_Construct_UClass_UIKRetargetFilterBoneController_NoRegister @ 14df603d0

UClass * __cdecl Z_Construct_UClass_UIKRetargetFilterBoneController_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetFilterBoneController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetFilterBoneController",
               &Z_Registration_Info_UClass_UIKRetargetFilterBoneController.InnerSingleton,
               UIKRetargetFilterBoneController::StaticRegisterNativesUIKRetargetFilterBoneController
               ,0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UIKRetargetFilterBoneController>,
               InternalVTableHelperCtorCaller<UIKRetargetFilterBoneController>,local_res8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetFilterBoneController.InnerSingleton;
}

// Z_Construct_UClass_UIKRetargetFloorGoalsController_NoRegister @ 14df60490

UClass * __cdecl Z_Construct_UClass_UIKRetargetFloorGoalsController_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetFloorGoalsController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetFloorGoalsController",
               &Z_Registration_Info_UClass_UIKRetargetFloorGoalsController.InnerSingleton,
               UIKRetargetFloorGoalsController::StaticRegisterNativesUIKRetargetFloorGoalsController
               ,0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UIKRetargetFloorGoalsController>,
               InternalVTableHelperCtorCaller<UIKRetargetFloorGoalsController>,local_res8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetFloorGoalsController.InnerSingleton;
}

// Z_Construct_UClass_UIKRetargetIKChainsController_NoRegister @ 14df60550

UClass * __cdecl Z_Construct_UClass_UIKRetargetIKChainsController_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetIKChainsController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetIKChainsController",
               &Z_Registration_Info_UClass_UIKRetargetIKChainsController.InnerSingleton,
               UIKRetargetIKChainsController::StaticRegisterNativesUIKRetargetIKChainsController,
               0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UIKRetargetIKChainsController>,
               InternalVTableHelperCtorCaller<UIKRetargetIKChainsController>,local_res8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetIKChainsController.InnerSingleton;
}

// Z_Construct_UClass_UIKRetargetPelvisMotionController_NoRegister @ 14df60610

UClass * __cdecl Z_Construct_UClass_UIKRetargetPelvisMotionController_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetPelvisMotionController.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetPelvisMotionController",
               &Z_Registration_Info_UClass_UIKRetargetPelvisMotionController.InnerSingleton,
               UIKRetargetPelvisMotionController::
               StaticRegisterNativesUIKRetargetPelvisMotionController,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRetargetPelvisMotionController>,
               InternalVTableHelperCtorCaller<UIKRetargetPelvisMotionController>,local_res8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetPelvisMotionController.InnerSingleton;
}

// Z_Construct_UClass_UIKRetargetPinBoneController_NoRegister @ 14df606d0

UClass * __cdecl Z_Construct_UClass_UIKRetargetPinBoneController_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetPinBoneController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetPinBoneController",
               &Z_Registration_Info_UClass_UIKRetargetPinBoneController.InnerSingleton,
               UIKRetargetPinBoneController::StaticRegisterNativesUIKRetargetPinBoneController,0x30,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UIKRetargetPinBoneController>,
               InternalVTableHelperCtorCaller<UIKRetargetPinBoneController>,local_res8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetPinBoneController.InnerSingleton;
}

// Z_Construct_UClass_UIKRetargetProcessor_NoRegister @ 14df60790

UClass * __cdecl Z_Construct_UClass_UIKRetargetProcessor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetProcessor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetProcessor",
               &Z_Registration_Info_UClass_UIKRetargetProcessor.InnerSingleton,
               UIKRetargetProcessor::StaticRegisterNativesUIKRetargetProcessor,0x280,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UIKRetargetProcessor>,
               InternalVTableHelperCtorCaller<UIKRetargetProcessor>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetProcessor.InnerSingleton;
}

// Z_Construct_UClass_UIKRetargetRootMotionController_NoRegister @ 14df60840

UClass * __cdecl Z_Construct_UClass_UIKRetargetRootMotionController_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetRootMotionController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetRootMotionController",
               &Z_Registration_Info_UClass_UIKRetargetRootMotionController.InnerSingleton,
               UIKRetargetRootMotionController::StaticRegisterNativesUIKRetargetRootMotionController
               ,0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UIKRetargetRootMotionController>,
               InternalVTableHelperCtorCaller<UIKRetargetRootMotionController>,local_res8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetRootMotionController.InnerSingleton;
}

// Z_Construct_UClass_UIKRetargetRunIKRigController_NoRegister @ 14df60900

UClass * __cdecl Z_Construct_UClass_UIKRetargetRunIKRigController_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetRunIKRigController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetRunIKRigController",
               &Z_Registration_Info_UClass_UIKRetargetRunIKRigController.InnerSingleton,
               UIKRetargetRunIKRigController::StaticRegisterNativesUIKRetargetRunIKRigController,
               0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UIKRetargetRunIKRigController>,
               InternalVTableHelperCtorCaller<UIKRetargetRunIKRigController>,local_res8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetRunIKRigController.InnerSingleton;
}

// Z_Construct_UClass_UIKRetargetScaleSourceController_NoRegister @ 14df609c0

UClass * __cdecl Z_Construct_UClass_UIKRetargetScaleSourceController_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetScaleSourceController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetScaleSourceController",
               &Z_Registration_Info_UClass_UIKRetargetScaleSourceController.InnerSingleton,
               UIKRetargetScaleSourceController::
               StaticRegisterNativesUIKRetargetScaleSourceController,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRetargetScaleSourceController>,
               InternalVTableHelperCtorCaller<UIKRetargetScaleSourceController>,local_res8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetScaleSourceController.InnerSingleton;
}

// Z_Construct_UClass_UIKRetargetSpeedPlantingController_NoRegister @ 14df60a80

UClass * __cdecl Z_Construct_UClass_UIKRetargetSpeedPlantingController_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetSpeedPlantingController.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetSpeedPlantingController",
               &Z_Registration_Info_UClass_UIKRetargetSpeedPlantingController.InnerSingleton,
               UIKRetargetSpeedPlantingController::
               StaticRegisterNativesUIKRetargetSpeedPlantingController,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRetargetSpeedPlantingController>,
               InternalVTableHelperCtorCaller<UIKRetargetSpeedPlantingController>,local_res8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetSpeedPlantingController.InnerSingleton;
}

// Z_Construct_UClass_UIKRetargetStretchChainController_NoRegister @ 14df60b40

UClass * __cdecl Z_Construct_UClass_UIKRetargetStretchChainController_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetStretchChainController.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetStretchChainController",
               &Z_Registration_Info_UClass_UIKRetargetStretchChainController.InnerSingleton,
               UIKRetargetStretchChainController::
               StaticRegisterNativesUIKRetargetStretchChainController,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRetargetStretchChainController>,
               InternalVTableHelperCtorCaller<UIKRetargetStretchChainController>,local_res8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetStretchChainController.InnerSingleton;
}

// Z_Construct_UClass_UIKRetargetStrideWarpingController_NoRegister @ 14df60c00

UClass * __cdecl Z_Construct_UClass_UIKRetargetStrideWarpingController_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetStrideWarpingController.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetStrideWarpingController",
               &Z_Registration_Info_UClass_UIKRetargetStrideWarpingController.InnerSingleton,
               UIKRetargetStrideWarpingController::
               StaticRegisterNativesUIKRetargetStrideWarpingController,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRetargetStrideWarpingController>,
               InternalVTableHelperCtorCaller<UIKRetargetStrideWarpingController>,local_res8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetStrideWarpingController.InnerSingleton;
}

// Z_Construct_UClass_UIKRigBodyMoverController_NoRegister @ 14df60cc0

UClass * __cdecl Z_Construct_UClass_UIKRigBodyMoverController_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRigBodyMoverController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRigBodyMoverController",
               &Z_Registration_Info_UClass_UIKRigBodyMoverController.InnerSingleton,
               UIKRigBodyMoverController::StaticRegisterNativesUIKRigBodyMoverController,0x30,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UIKRigBodyMoverController>,
               InternalVTableHelperCtorCaller<UIKRigBodyMoverController>,local_res8,
               UIKRigSolverControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRigBodyMoverController.InnerSingleton;
}

// Z_Construct_UClass_UIKRigComponent_NoRegister @ 14df60d80

UClass * __cdecl Z_Construct_UClass_UIKRigComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRigComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRigComponent",
               &Z_Registration_Info_UClass_UIKRigComponent.InnerSingleton,
               UIKRigComponent::StaticRegisterNativesUIKRigComponent,0xe0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UIKRigComponent>,InternalVTableHelperCtorCaller<UIKRigComponent>,
               local_res8,UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRigComponent.InnerSingleton;
}

// Z_Construct_UClass_UIKRigFBIKController_NoRegister @ 14df60e40

UClass * __cdecl Z_Construct_UClass_UIKRigFBIKController_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRigFBIKController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRigFBIKController",
               &Z_Registration_Info_UClass_UIKRigFBIKController.InnerSingleton,
               UIKRigFBIKController::StaticRegisterNativesUIKRigFBIKController,0x30,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UIKRigFBIKController>,
               InternalVTableHelperCtorCaller<UIKRigFBIKController>,local_res8,
               UIKRigSolverControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRigFBIKController.InnerSingleton;
}

// Z_Construct_UClass_UIKRigFBIKSolver_NoRegister @ 14df60f00

UClass * __cdecl Z_Construct_UClass_UIKRigFBIKSolver_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRigFBIKSolver.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRigFBIKSolver",
               &Z_Registration_Info_UClass_UIKRigFBIKSolver.InnerSingleton,
               UIKRigFBIKSolver::StaticRegisterNativesUIKRigFBIKSolver,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRigFBIKSolver>,
               InternalVTableHelperCtorCaller<UIKRigFBIKSolver>,local_res8,UIKRigSolver::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRigFBIKSolver.InnerSingleton;
}

// Z_Construct_UClass_UIKRigLimbSolverController_NoRegister @ 14df60fc0

UClass * __cdecl Z_Construct_UClass_UIKRigLimbSolverController_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRigLimbSolverController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRigLimbSolverController",
               &Z_Registration_Info_UClass_UIKRigLimbSolverController.InnerSingleton,
               UIKRigLimbSolverController::StaticRegisterNativesUIKRigLimbSolverController,0x30,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UIKRigLimbSolverController>,
               InternalVTableHelperCtorCaller<UIKRigLimbSolverController>,local_res8,
               UIKRigSolverControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRigLimbSolverController.InnerSingleton;
}

// Z_Construct_UClass_UIKRigPoleSolverController_NoRegister @ 14df61080

UClass * __cdecl Z_Construct_UClass_UIKRigPoleSolverController_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRigPoleSolverController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRigPoleSolverController",
               &Z_Registration_Info_UClass_UIKRigPoleSolverController.InnerSingleton,
               UIKRigPoleSolverController::StaticRegisterNativesUIKRigPoleSolverController,0x30,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UIKRigPoleSolverController>,
               InternalVTableHelperCtorCaller<UIKRigPoleSolverController>,local_res8,
               UIKRigSolverControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRigPoleSolverController.InnerSingleton;
}

// Z_Construct_UClass_UIKRigProcessor_NoRegister @ 14df61140

UClass * __cdecl Z_Construct_UClass_UIKRigProcessor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRigProcessor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRigProcessor",
               &Z_Registration_Info_UClass_UIKRigProcessor.InnerSingleton,
               UIKRigProcessor::StaticRegisterNativesUIKRigProcessor,0x188,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRigProcessor>,
               InternalVTableHelperCtorCaller<UIKRigProcessor>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRigProcessor.InnerSingleton;
}

// Z_Construct_UClass_UIKRigSetTransformController_NoRegister @ 14df611f0

UClass * __cdecl Z_Construct_UClass_UIKRigSetTransformController_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRigSetTransformController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRigSetTransformController",
               &Z_Registration_Info_UClass_UIKRigSetTransformController.InnerSingleton,
               UIKRigSetTransformController::StaticRegisterNativesUIKRigSetTransformController,0x30,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UIKRigSetTransformController>,
               InternalVTableHelperCtorCaller<UIKRigSetTransformController>,local_res8,
               UIKRigSolverControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRigSetTransformController.InnerSingleton;
}

// Z_Construct_UClass_UIKRigSolverControllerBase_NoRegister @ 14df612b0

UClass * __cdecl Z_Construct_UClass_UIKRigSolverControllerBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRigSolverControllerBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRigSolverControllerBase",
               &Z_Registration_Info_UClass_UIKRigSolverControllerBase.InnerSingleton,
               UIKRigSolverControllerBase::StaticRegisterNativesUIKRigSolverControllerBase,0x30,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UIKRigSolverControllerBase>,
               InternalVTableHelperCtorCaller<UIKRigSolverControllerBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRigSolverControllerBase.InnerSingleton;
}

// Z_Construct_UClass_UIKRig_BodyMover_NoRegister @ 14df61360

UClass * __cdecl Z_Construct_UClass_UIKRig_BodyMover_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRig_BodyMover.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRig_BodyMover",
               &Z_Registration_Info_UClass_UIKRig_BodyMover.InnerSingleton,
               UIKRig_BodyMover::StaticRegisterNativesUIKRig_BodyMover,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRig_BodyMover>,
               InternalVTableHelperCtorCaller<UIKRig_BodyMover>,local_res8,UIKRigSolver::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRig_BodyMover.InnerSingleton;
}

// Z_Construct_UClass_UIKRig_LimbSolver_NoRegister @ 14df61420

UClass * __cdecl Z_Construct_UClass_UIKRig_LimbSolver_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRig_LimbSolver.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRig_LimbSolver",
               &Z_Registration_Info_UClass_UIKRig_LimbSolver.InnerSingleton,
               UIKRig_LimbSolver::StaticRegisterNativesUIKRig_LimbSolver,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRig_LimbSolver>,
               InternalVTableHelperCtorCaller<UIKRig_LimbSolver>,local_res8,
               UIKRigSolver::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRig_LimbSolver.InnerSingleton;
}

// Z_Construct_UClass_UIKRig_PoleSolver_NoRegister @ 14df614e0

UClass * __cdecl Z_Construct_UClass_UIKRig_PoleSolver_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRig_PoleSolver.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRig_PoleSolver",
               &Z_Registration_Info_UClass_UIKRig_PoleSolver.InnerSingleton,
               UIKRig_PoleSolver::StaticRegisterNativesUIKRig_PoleSolver,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRig_PoleSolver>,
               InternalVTableHelperCtorCaller<UIKRig_PoleSolver>,local_res8,
               UIKRigSolver::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRig_PoleSolver.InnerSingleton;
}

// Z_Construct_UClass_UIKRig_SetTransform_NoRegister @ 14df615a0

UClass * __cdecl Z_Construct_UClass_UIKRig_SetTransform_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRig_SetTransform.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRig_SetTransform",
               &Z_Registration_Info_UClass_UIKRig_SetTransform.InnerSingleton,
               UIKRig_SetTransform::StaticRegisterNativesUIKRig_SetTransform,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRig_SetTransform>,
               InternalVTableHelperCtorCaller<UIKRig_SetTransform>,local_res8,
               UIKRigSolver::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRig_SetTransform.InnerSingleton;
}

// Z_Construct_UClass_UPinBoneOp_NoRegister @ 14df61660

UClass * __cdecl Z_Construct_UClass_UPinBoneOp_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPinBoneOp.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"PinBoneOp",&Z_Registration_Info_UClass_UPinBoneOp.InnerSingleton,
               UPinBoneOp::StaticRegisterNativesUPinBoneOp,0x120,0x10,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPinBoneOp>,InternalVTableHelperCtorCaller<UPinBoneOp>
               ,local_res8,URetargetOpBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPinBoneOp.InnerSingleton;
}

// Z_Construct_UClass_URetargetProfileLibrary_NoRegister @ 14df61720

UClass * __cdecl Z_Construct_UClass_URetargetProfileLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URetargetProfileLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"RetargetProfileLibrary",
               &Z_Registration_Info_UClass_URetargetProfileLibrary.InnerSingleton,
               URetargetProfileLibrary::StaticRegisterNativesURetargetProfileLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<URetargetProfileLibrary>
               ,InternalVTableHelperCtorCaller<URetargetProfileLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URetargetProfileLibrary.InnerSingleton;
}

// Z_Construct_UClass_URootMotionGeneratorOp_NoRegister @ 14df617e0

UClass * __cdecl Z_Construct_UClass_URootMotionGeneratorOp_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URootMotionGeneratorOp.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"RootMotionGeneratorOp",
               &Z_Registration_Info_UClass_URootMotionGeneratorOp.InnerSingleton,
               URootMotionGeneratorOp::StaticRegisterNativesURootMotionGeneratorOp,0xb0,0x10,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<URootMotionGeneratorOp>,
               InternalVTableHelperCtorCaller<URootMotionGeneratorOp>,local_res8,
               URetargetOpBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URootMotionGeneratorOp.InnerSingleton;
}

// Z_Construct_UEnum_IKRig_EAutoMapChainType @ 14df618a0

UEnum * __cdecl Z_Construct_UEnum_IKRig_EAutoMapChainType(void)

{
  if (Z_Registration_Info_UEnum_EAutoMapChainType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAutoMapChainType.InnerSingleton,
               &Z_Construct_UEnum_IKRig_EAutoMapChainType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAutoMapChainType.InnerSingleton;
}

// Z_Construct_UEnum_IKRig_ECopyOpSettingsContext @ 14df618e0

UEnum * __cdecl Z_Construct_UEnum_IKRig_ECopyOpSettingsContext(void)

{
  if (Z_Registration_Info_UEnum_ECopyOpSettingsContext.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ECopyOpSettingsContext.InnerSingleton,
               &Z_Construct_UEnum_IKRig_ECopyOpSettingsContext_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ECopyOpSettingsContext.InnerSingleton;
}

// Z_Construct_UScriptStruct_FAnimNode_IKRig @ 14df61920

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNode_IKRig(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_IKRig.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNode_IKRig.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNode_IKRig.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNode_IKRig.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh @ 14df619a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_RetargetPoseFromMesh.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNode_RetargetPoseFromMesh.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNode_RetargetPoseFromMesh.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNode_RetargetPoseFromMesh.InnerSingleton;
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

// Z_Construct_UScriptStruct_FGoalBone @ 14df61a20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGoalBone(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGoalBone.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGoalBone.InnerSingleton,
               &Z_Construct_UScriptStruct_FGoalBone_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGoalBone.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGoalBone.InnerSingleton;
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

// Z_Construct_UScriptStruct_FIKRetargetAdditivePoseOp @ 14df61aa0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRetargetAdditivePoseOp(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetAdditivePoseOp.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRetargetAdditivePoseOp.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRetargetAdditivePoseOp_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetAdditivePoseOp.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRetargetAdditivePoseOp.InnerSingleton;
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

// Z_Construct_UScriptStruct_FIKRetargetAlignPoleVectorOp @ 14df61b20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRetargetAlignPoleVectorOp(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetAlignPoleVectorOp.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRetargetAlignPoleVectorOp.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRetargetAlignPoleVectorOp_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetAlignPoleVectorOp.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRetargetAlignPoleVectorOp.InnerSingleton;
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

// Z_Construct_UScriptStruct_FIKRetargetCopyBasePoseOp @ 14df61ba0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRetargetCopyBasePoseOp(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetCopyBasePoseOp.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRetargetCopyBasePoseOp.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRetargetCopyBasePoseOp_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetCopyBasePoseOp.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRetargetCopyBasePoseOp.InnerSingleton;
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

// Z_Construct_UScriptStruct_FIKRetargetCurveRemapOp @ 14df61c20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRetargetCurveRemapOp(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetCurveRemapOp.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRetargetCurveRemapOp.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRetargetCurveRemapOp_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetCurveRemapOp.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRetargetCurveRemapOp.InnerSingleton;
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

// Z_Construct_UScriptStruct_FIKRetargetFKChainsOp @ 14df61ca0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRetargetFKChainsOp(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetFKChainsOp.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRetargetFKChainsOp.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRetargetFKChainsOp_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetFKChainsOp.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FIKRetargetFKChainsOp.InnerSingleton;
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

// Z_Construct_UScriptStruct_FIKRetargetFilterBoneOp @ 14df61d20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRetargetFilterBoneOp(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetFilterBoneOp.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRetargetFilterBoneOp.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRetargetFilterBoneOp_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetFilterBoneOp.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRetargetFilterBoneOp.InnerSingleton;
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

// Z_Construct_UScriptStruct_FIKRetargetFloorConstraintOp @ 14df61da0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRetargetFloorConstraintOp(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetFloorConstraintOp.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRetargetFloorConstraintOp.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRetargetFloorConstraintOp_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetFloorConstraintOp.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRetargetFloorConstraintOp.InnerSingleton;
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

// Z_Construct_UScriptStruct_FIKRetargetIKChainsOp @ 14df61e20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRetargetIKChainsOp(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetIKChainsOp.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRetargetIKChainsOp.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRetargetIKChainsOp_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetIKChainsOp.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FIKRetargetIKChainsOp.InnerSingleton;
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

// Z_Construct_UScriptStruct_FIKRetargetPelvisMotionOp @ 14df61ea0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRetargetPelvisMotionOp(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOp.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOp.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRetargetPelvisMotionOp_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOp.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOp.InnerSingleton;
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

// Z_Construct_UScriptStruct_FIKRetargetPinBoneOp @ 14df61f20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRetargetPinBoneOp(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetPinBoneOp.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRetargetPinBoneOp.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRetargetPinBoneOp_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetPinBoneOp.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FIKRetargetPinBoneOp.InnerSingleton;
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

// Z_Construct_UScriptStruct_FIKRetargetRootMotionOp @ 14df61fa0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRetargetRootMotionOp(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetRootMotionOp.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRetargetRootMotionOp.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRetargetRootMotionOp_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetRootMotionOp.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRetargetRootMotionOp.InnerSingleton;
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

// Z_Construct_UScriptStruct_FIKRetargetRunIKRigOp @ 14df62020

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRetargetRunIKRigOp(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetRunIKRigOp.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRetargetRunIKRigOp.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRetargetRunIKRigOp_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetRunIKRigOp.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FIKRetargetRunIKRigOp.InnerSingleton;
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

// Z_Construct_UScriptStruct_FIKRetargetScaleSourceOp @ 14df620a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRetargetScaleSourceOp(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetScaleSourceOp.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRetargetScaleSourceOp.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRetargetScaleSourceOp_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetScaleSourceOp.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRetargetScaleSourceOp.InnerSingleton;
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

// Z_Construct_UScriptStruct_FIKRetargetSpeedPlantingOp @ 14df62120

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRetargetSpeedPlantingOp(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetSpeedPlantingOp.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRetargetSpeedPlantingOp.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRetargetSpeedPlantingOp_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetSpeedPlantingOp.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRetargetSpeedPlantingOp.InnerSingleton;
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

// Z_Construct_UScriptStruct_FIKRetargetStretchChainOp @ 14df621a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRetargetStretchChainOp(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetStretchChainOp.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRetargetStretchChainOp.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRetargetStretchChainOp_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetStretchChainOp.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRetargetStretchChainOp.InnerSingleton;
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

// Z_Construct_UScriptStruct_FIKRetargetStrideWarpingOp @ 14df62220

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRetargetStrideWarpingOp(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetStrideWarpingOp.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRetargetStrideWarpingOp.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRetargetStrideWarpingOp_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetStrideWarpingOp.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRetargetStrideWarpingOp.InnerSingleton;
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

// Z_Construct_UScriptStruct_FIKRigBodyMoverSolver @ 14df622a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRigBodyMoverSolver(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRigBodyMoverSolver.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRigBodyMoverSolver.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRigBodyMoverSolver_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRigBodyMoverSolver.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FIKRigBodyMoverSolver.InnerSingleton;
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

// Z_Construct_UScriptStruct_FIKRigFullBodyIKSolver @ 14df62320

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRigFullBodyIKSolver(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRigFullBodyIKSolver.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRigFullBodyIKSolver.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRigFullBodyIKSolver_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRigFullBodyIKSolver.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRigFullBodyIKSolver.InnerSingleton;
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

// Z_Construct_UScriptStruct_FIKRigGoalContainer @ 14df623a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRigGoalContainer(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRigGoalContainer.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRigGoalContainer.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRigGoalContainer_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRigGoalContainer.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FIKRigGoalContainer.InnerSingleton;
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

// Z_Construct_UScriptStruct_FIKRigInputSkeleton @ 14df62420

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRigInputSkeleton(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRigInputSkeleton.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRigInputSkeleton.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRigInputSkeleton_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRigInputSkeleton.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FIKRigInputSkeleton.InnerSingleton;
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

// Z_Construct_UScriptStruct_FIKRigLimbSolver @ 14df624a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRigLimbSolver(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRigLimbSolver.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRigLimbSolver.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRigLimbSolver_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRigLimbSolver.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRigLimbSolver.InnerSingleton;
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

// Z_Construct_UScriptStruct_FIKRigPoleSolver @ 14df62520

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRigPoleSolver(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRigPoleSolver.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRigPoleSolver.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRigPoleSolver_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRigPoleSolver.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRigPoleSolver.InnerSingleton;
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

// Z_Construct_UScriptStruct_FIKRigSetTransform @ 14df625a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRigSetTransform(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRigSetTransform.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRigSetTransform.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRigSetTransform_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRigSetTransform.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRigSetTransform.InnerSingleton;
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

// Z_Construct_UScriptStruct_FIKRigStretchLimbSolver @ 14df62620

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIKRigStretchLimbSolver(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRigStretchLimbSolver.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIKRigStretchLimbSolver.InnerSingleton,
               &Z_Construct_UScriptStruct_FIKRigStretchLimbSolver_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIKRigStretchLimbSolver.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIKRigStretchLimbSolver.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLimbLink @ 14df626a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLimbLink(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLimbLink.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLimbLink.InnerSingleton,
               &Z_Construct_UScriptStruct_FLimbLink_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLimbLink.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLimbLink.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLimbSolver @ 14df62720

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLimbSolver(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLimbSolver.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLimbSolver.InnerSingleton,
               &Z_Construct_UScriptStruct_FLimbSolver_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLimbSolver.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLimbSolver.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigUnit_IKRig @ 14df627a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigUnit_IKRig(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_IKRig.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigUnit_IKRig.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigUnit_IKRig_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigUnit_IKRig.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigUnit_IKRig.InnerSingleton;
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

// IMPLEMENT_MODULE_IKRig @ 14df6b2d0

void __cdecl IMPLEMENT_MODULE_IKRig(void)

{
  return;
}

// PathSeparator'' @ 1504605e0

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

// RootNodeID'' @ 150460600

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

// `dynamic_atexit_destructor_for_'AlphaPosPropStr'' @ 150460620

void __cdecl
`FAnimNode_IKRig::InitializeProperties'::__l2::_dynamic_atexit_destructor_for__AlphaPosPropStr__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = AlphaPosPropStr.Data.AllocatorInstance.Data;
  if (AlphaPosPropStr.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (AlphaPosPropStr.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'AlphaRotPropStr'' @ 150460640

void __cdecl
`FAnimNode_IKRig::InitializeProperties'::__l2::_dynamic_atexit_destructor_for__AlphaRotPropStr__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = AlphaRotPropStr.Data.AllocatorInstance.Data;
  if (AlphaRotPropStr.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (AlphaRotPropStr.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'CubeEdges'' @ 150460660

void __cdecl IKRigDebugRendering::_dynamic_atexit_destructor_for__CubeEdges__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = CubeEdges.AllocatorInstance.Data;
  if (CubeEdges.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (CubeEdges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'CubeVertices'' @ 150460680

void __cdecl IKRigDebugRendering::_dynamic_atexit_destructor_for__CubeVertices__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = CubeVertices.AllocatorInstance.Data;
  if (CubeVertices.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (CubeVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'GRegisterIKRigObjectVersion'' @ 1504606a0

void __cdecl _dynamic_atexit_destructor_for__GRegisterIKRigObjectVersion__(void)

{
  FCurrentCustomVersions::Unregister((FGuid *)&GRegisterIKRigObjectVersion);
  return;
}

// `dynamic_atexit_destructor_for_'LogIKRig'' @ 1504606c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogIKRig__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogIKRig);
  return;
}

// `dynamic_atexit_destructor_for_'PositionPropStr'' @ 1504606e0

void __cdecl
`FAnimNode_IKRig::InitializeProperties'::__l2::_dynamic_atexit_destructor_for__PositionPropStr__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = PositionPropStr.Data.AllocatorInstance.Data;
  if (PositionPropStr.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (PositionPropStr.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'PropertiesToIgnore'' @ 150460700

void __cdecl
`FIKRetargetAdditivePoseOpSettings::CopySettingsAtRuntime'::__l2::
_dynamic_atexit_destructor_for__PropertiesToIgnore__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = PropertiesToIgnore.AllocatorInstance.Data;
  if (PropertiesToIgnore.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (PropertiesToIgnore.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'PropertiesToIgnore'' @ 150460720

void __cdecl
`FIKRetargetScaleSourceOpSettings::CopySettingsAtRuntime'::__l2::
_dynamic_atexit_destructor_for__PropertiesToIgnore__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = PropertiesToIgnore.AllocatorInstance.Data;
  if (PropertiesToIgnore.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (PropertiesToIgnore.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'PropertiesToIgnore'' @ 150460740

void __cdecl
`FIKRetargetSpeedPlantingOpSettings::CopySettingsAtRuntime'::__l2::
_dynamic_atexit_destructor_for__PropertiesToIgnore__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = PropertiesToIgnore.AllocatorInstance.Data;
  if (PropertiesToIgnore.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (PropertiesToIgnore.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'PropertiesToIgnore'' @ 150460760

void __cdecl
`FIKRetargetStrideWarpingOpSettings::CopySettingsAtRuntime'::__l2::
_dynamic_atexit_destructor_for__PropertiesToIgnore__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = PropertiesToIgnore.AllocatorInstance.Data;
  if (PropertiesToIgnore.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (PropertiesToIgnore.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'RotationPropStr'' @ 150460780

void __cdecl
`FAnimNode_IKRig::InitializeProperties'::__l2::_dynamic_atexit_destructor_for__RotationPropStr__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = RotationPropStr.Data.AllocatorInstance.Data;
  if (RotationPropStr.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (RotationPropStr.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

