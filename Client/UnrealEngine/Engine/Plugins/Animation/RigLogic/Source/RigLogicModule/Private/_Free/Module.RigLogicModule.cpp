// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicModule
// Functions: 704

// PathSeparator'' @ 1411c5760

void __cdecl `dynamic_initializer_for_'FControlRigOverrideValue::PathSeparator__(void)

{
  ::FString::FString(&FControlRigOverrideValue::PathSeparator,L"->");
  atexit(`dynamic_atexit_destructor_for_'FControlRigOverrideValue::PathSeparator__);
  return;
}

// RootNodeID'' @ 1411c5790

void __cdecl `dynamic_initializer_for_'FOverriddenPropertySet::RootNodeID__(void)

{
  FOverriddenPropertyNodeID::RootNodeId(&FOverriddenPropertySet::RootNodeID);
  atexit(`dynamic_atexit_destructor_for_'FOverriddenPropertySet::RootNodeID__);
  return;
}

// `dynamic_initializer_for_'BoolArrayTypeName'' @ 1411c57c0

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

// `dynamic_initializer_for_'BoolTypeName'' @ 1411c5810

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

// `dynamic_initializer_for_'DoubleArrayTypeName'' @ 1411c5860

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

// `dynamic_initializer_for_'DoubleTypeName'' @ 1411c58b0

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

// `dynamic_initializer_for_'FNameArrayTypeName'' @ 1411c5900

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

// `dynamic_initializer_for_'FNameTypeName'' @ 1411c5950

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

// `dynamic_initializer_for_'FRigUnit_RigLogicAutomationTestInstance'' @ 1411c59a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FRigUnit_RigLogicAutomationTestInstance__(void)

{
  undefined8 local_res8 [4];
  FString local_18;
  
  ::FString::FString(&local_18,L"FRigUnit_RigLogicTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FRigUnit_RigLogicAutomationTestInstance,&local_18,false);
  FRigUnit_RigLogicAutomationTestInstance._padding_ =
       (longlong)&___7__FRigVMStructTestBase_UFControlRigExecuteContext____6B_;
  FRigVMExtendedExecuteContext::FRigVMExtendedExecuteContext
            ((FRigVMExtendedExecuteContext *)&FRigUnit_RigLogicAutomationTestInstance._padding_,
             (UScriptStruct *)0x0);
  FRigUnit_RigLogicAutomationTestInstance._padding_ = 0x1552c1d40;
  FControlRigExecuteContext::FControlRigExecuteContext
            ((FControlRigExecuteContext *)&FRigUnit_RigLogicAutomationTestInstance._padding_);
  FRigUnit_RigLogicAutomationTestInstance._padding_ = (longlong)&___7FControlRigUnitTestBase__6B_;
  FRigUnit_RigLogicAutomationTestInstance._padding_ = 0;
  FRigUnit_RigLogicAutomationTestInstance._padding_ = 0;
  FRigUnit_RigLogicAutomationTestInstance._padding_ = 0;
  FRigUnit_RigLogicAutomationTestInstance._padding_ = 0;
  FRigUnit_RigLogicAutomationTestInstance._padding_ = 0;
  FUtf8String::Reset((FUtf8String *)&FRigUnit_RigLogicAutomationTestInstance._padding_,0);
  local_res8[0] = 0;
  FSoftObjectPtr::operator=
            ((FSoftObjectPtr *)&FRigUnit_RigLogicAutomationTestInstance._padding_,
             (FObjectPtr)local_res8);
  FRigUnit_RigLogicAutomationTestInstance._padding_ = 0;
  FRigUnit_RigLogicAutomationTestInstance._padding_ = 0;
  FRigUnit_RigLogicAutomationTestInstance._padding_ = 0;
  FRigUnit_RigLogicAutomationTestInstance._padding_ = 0;
  FRigUnit_RigLogicAutomationTestInstance._padding_ = 0;
  FUtf8String::Reset((FUtf8String *)&FRigUnit_RigLogicAutomationTestInstance._padding_,0);
  local_res8[0] = 0;
  FSoftObjectPtr::operator=
            ((FSoftObjectPtr *)&FRigUnit_RigLogicAutomationTestInstance._padding_,
             (FObjectPtr)local_res8);
  FRigUnit_RigLogicAutomationTestInstance._padding_ = (longlong)&___7FRigUnit_RigLogicTest__6B_;
  FRigUnit_RigLogicAutomationTestInstance.Unit._padding_ = (longlong)&___7FRigVMExecutePin__6B_;
  FRigUnit_RigLogicAutomationTestInstance.Unit._padding_ = (longlong)&___7FRigUnit_RigLogic__6B_;
  FRigUnit_RigLogic_Data::FRigUnit_RigLogic_Data(&FRigUnit_RigLogicAutomationTestInstance.Unit.Data)
  ;
  FRigUnit_RigLogicAutomationTestInstance.Unit.bIsInitialized = false;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FRigUnit_RigLogicAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FStringArrayTypeName'' @ 1411c5b00

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

// `dynamic_initializer_for_'FStringTypeName'' @ 1411c5b50

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

// `dynamic_initializer_for_'FTextTypeName'' @ 1411c5ba0

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

// `dynamic_initializer_for_'FloatArrayTypeName'' @ 1411c5bf0

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

// `dynamic_initializer_for_'FloatTypeName'' @ 1411c5c40

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

// `dynamic_initializer_for_'GRegisterDNAAssetCustomVersion'' @ 1411c5c90

void __cdecl _dynamic_initializer_for__GRegisterDNAAssetCustomVersion__(void)

{
  FGuid local_18;
  
  local_18 = FDNAAssetCustomVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_18,0,L"DNAAssetVer",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  atexit(_dynamic_atexit_destructor_for__GRegisterDNAAssetCustomVersion__);
  return;
}

// `dynamic_initializer_for_'Int32ArrayTypeName'' @ 1411c5cd0

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

// `dynamic_initializer_for_'Int32TypeName'' @ 1411c5d20

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

// `dynamic_initializer_for_'Int64TypeName'' @ 1411c5d70

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

// `dynamic_initializer_for_'IntTypeName'' @ 1411c5dc0

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

// `dynamic_initializer_for_'LLMTagDeclaration_Animation_RigLogic'' @ 1411c5e10

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_Animation_RigLogic__(void)

{
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_Animation_RigLogic,L"Animation_RigLogic",(FName)0x0,(FName)0x0,
             (FName)0x0,(FName)0x0,None);
  return;
}

// `dynamic_initializer_for_'LogDNAAsset'' @ 1411c5e60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogDNAAsset__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogDNAAsset,L"LogDNAAsset",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogDNAAsset__);
  return;
}

// `dynamic_initializer_for_'LogDNAReader'' @ 1411c5ea0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogDNAReader__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogDNAReader,L"LogDNAReader",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogDNAReader__);
  return;
}

// `dynamic_initializer_for_'LogDNAToSkelMeshMap'' @ 1411c5ee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogDNAToSkelMeshMap__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogDNAToSkelMeshMap,L"LogDNAToSkelMeshMap",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogDNAToSkelMeshMap__);
  return;
}

// `dynamic_initializer_for_'LogDNAUtils'' @ 1411c5f20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogDNAUtils__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogDNAUtils,L"LogDNAUtils",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogDNAUtils__);
  return;
}

// `dynamic_initializer_for_'LogRigLogic'' @ 1411c5f60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogRigLogic__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogRigLogic,L"LogRigLogic",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogRigLogic__);
  return;
}

// `dynamic_initializer_for_'LogRigLogicAnimNode'' @ 1411c5fa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogRigLogicAnimNode__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogRigLogicAnimNode,L"LogRigLogicAnimNode",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogRigLogicAnimNode__);
  return;
}

// `dynamic_initializer_for_'LogRigLogicUnit'' @ 1411c5fe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogRigLogicUnit__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogRigLogicUnit,L"LogRigLogicUnit",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogRigLogicUnit__);
  return;
}

// `dynamic_initializer_for_'LogSkelMeshDNAReader'' @ 1411c6020

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogSkelMeshDNAReader__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogSkelMeshDNAReader,L"LogSkelMeshDNAReader",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogSkelMeshDNAReader__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantRigLogicModule'' @ 1411c6060

void __cdecl _dynamic_initializer_for__ModuleRegistrantRigLogicModule__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "RigLogicModule";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"RigLogicModule",0xe);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FRigLogicModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RigLogic_AnimatedMapCount'' @ 1411c60b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RigLogic_AnimatedMapCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RigLogic_AnimatedMapCount ==
      (FThreadSafeStaticStat<FStat_STAT_RigLogic_AnimatedMapCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RigLogic_AnimatedMapCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigLogic_AnimatedMapCount,*pFVar1,
               L"Animated Map Count","STATGROUP_RigLogic","STATCAT_Advanced",L"RigLogic",true,true,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RigLogic_BlendShapeChannelCount'' @ 1411c6140

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RigLogic_BlendShapeChannelCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RigLogic_BlendShapeChannelCount ==
      (FThreadSafeStaticStat<FStat_STAT_RigLogic_BlendShapeChannelCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RigLogic_BlendShapeChannelCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigLogic_BlendShapeChannelCount,*pFVar1,
               L"Blend Shape Channel Count","STATGROUP_RigLogic","STATCAT_Advanced",L"RigLogic",true
               ,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RigLogic_CalculateAnimatedMapsTime'' @ 1411c61d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RigLogic_CalculateAnimatedMapsTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RigLogic_CalculateAnimatedMapsTime ==
      (FThreadSafeStaticStat<FStat_STAT_RigLogic_CalculateAnimatedMapsTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RigLogic_CalculateAnimatedMapsTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigLogic_CalculateAnimatedMapsTime,*pFVar1
               ,L"Calculate Animated Maps Time","STATGROUP_RigLogic","STATCAT_Advanced",L"RigLogic",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RigLogic_CalculateBlendShapesTime'' @ 1411c6260

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RigLogic_CalculateBlendShapesTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RigLogic_CalculateBlendShapesTime ==
      (FThreadSafeStaticStat<FStat_STAT_RigLogic_CalculateBlendShapesTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RigLogic_CalculateBlendShapesTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigLogic_CalculateBlendShapesTime,*pFVar1,
               L"Calculate Blend Shapes Time","STATGROUP_RigLogic","STATCAT_Advanced",L"RigLogic",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RigLogic_CalculateControlsTime'' @ 1411c62f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RigLogic_CalculateControlsTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RigLogic_CalculateControlsTime ==
      (FThreadSafeStaticStat<FStat_STAT_RigLogic_CalculateControlsTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RigLogic_CalculateControlsTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigLogic_CalculateControlsTime,*pFVar1,
               L"Calculate PSD Controls Time","STATGROUP_RigLogic","STATCAT_Advanced",L"RigLogic",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RigLogic_CalculateJointsTime'' @ 1411c6380

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RigLogic_CalculateJointsTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RigLogic_CalculateJointsTime ==
      (FThreadSafeStaticStat<FStat_STAT_RigLogic_CalculateJointsTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RigLogic_CalculateJointsTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigLogic_CalculateJointsTime,*pFVar1,
               L"Calculate Joints Time","STATGROUP_RigLogic","STATCAT_Advanced",L"RigLogic",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RigLogic_CalculateMLControlsTime'' @ 1411c6410

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RigLogic_CalculateMLControlsTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RigLogic_CalculateMLControlsTime ==
      (FThreadSafeStaticStat<FStat_STAT_RigLogic_CalculateMLControlsTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RigLogic_CalculateMLControlsTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigLogic_CalculateMLControlsTime,*pFVar1,
               L"Calculate ML Controls Time","STATGROUP_RigLogic","STATCAT_Advanced",L"RigLogic",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RigLogic_CalculateRBFControlsTime'' @ 1411c64a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RigLogic_CalculateRBFControlsTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RigLogic_CalculateRBFControlsTime ==
      (FThreadSafeStaticStat<FStat_STAT_RigLogic_CalculateRBFControlsTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RigLogic_CalculateRBFControlsTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigLogic_CalculateRBFControlsTime,*pFVar1,
               L"Calculate RBF Controls Time","STATGROUP_RigLogic","STATCAT_Advanced",L"RigLogic",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RigLogic_CalculationType'' @ 1411c6530

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RigLogic_CalculationType__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RigLogic_CalculationType ==
      (FThreadSafeStaticStat<FStat_STAT_RigLogic_CalculationType>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RigLogic_CalculationType");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigLogic_CalculationType,*pFVar1,
               L"Calculation Backend [ 0 = Scalar, 1 = SSE, 2 = AVX, 3 = NEON ]",
               "STATGROUP_RigLogic","STATCAT_Advanced",L"RigLogic",true,true,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RigLogic_FloatingPointType'' @ 1411c65c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RigLogic_FloatingPointType__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RigLogic_FloatingPointType ==
      (FThreadSafeStaticStat<FStat_STAT_RigLogic_FloatingPointType>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RigLogic_FloatingPointType");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigLogic_FloatingPointType,*pFVar1,
               L"Floating Point Type [ 0 = Float, 1 = Half-Float ]","STATGROUP_RigLogic",
               "STATCAT_Advanced",L"RigLogic",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RigLogic_JointCount'' @ 1411c6650

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RigLogic_JointCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RigLogic_JointCount == (FThreadSafeStaticStat<FStat_STAT_RigLogic_JointCount>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_RigLogic_JointCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigLogic_JointCount,*pFVar1,L"Joint Count"
               ,"STATGROUP_RigLogic","STATCAT_Advanced",L"RigLogic",true,true,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RigLogic_JointDeltaValueCount'' @ 1411c66e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RigLogic_JointDeltaValueCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RigLogic_JointDeltaValueCount ==
      (FThreadSafeStaticStat<FStat_STAT_RigLogic_JointDeltaValueCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RigLogic_JointDeltaValueCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigLogic_JointDeltaValueCount,*pFVar1,
               L"Joint Delta Value Count","STATGROUP_RigLogic","STATCAT_Advanced",L"RigLogic",true,
               true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RigLogic_LOD'' @ 1411c6770

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RigLogic_LOD__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RigLogic_LOD == (FThreadSafeStaticStat<FStat_STAT_RigLogic_LOD>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RigLogic_LOD");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigLogic_LOD,*pFVar1,L"Current LOD",
               "STATGROUP_RigLogic","STATCAT_Advanced",L"RigLogic",true,true,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RigLogic_MapGUIToRawControlsTime'' @ 1411c6800

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RigLogic_MapGUIToRawControlsTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RigLogic_MapGUIToRawControlsTime ==
      (FThreadSafeStaticStat<FStat_STAT_RigLogic_MapGUIToRawControlsTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RigLogic_MapGUIToRawControlsTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigLogic_MapGUIToRawControlsTime,*pFVar1,
               L"Map GUI To Raw Controls Time","STATGROUP_RigLogic","STATCAT_Advanced",L"RigLogic",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RigLogic_MapRawToGUIControlsTime'' @ 1411c6890

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RigLogic_MapRawToGUIControlsTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RigLogic_MapRawToGUIControlsTime ==
      (FThreadSafeStaticStat<FStat_STAT_RigLogic_MapRawToGUIControlsTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RigLogic_MapRawToGUIControlsTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigLogic_MapRawToGUIControlsTime,*pFVar1,
               L"Map Raw To GUI Controls Time","STATGROUP_RigLogic","STATCAT_Advanced",L"RigLogic",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RigLogic_NeuralNetworkCount'' @ 1411c6920

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RigLogic_NeuralNetworkCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RigLogic_NeuralNetworkCount ==
      (FThreadSafeStaticStat<FStat_STAT_RigLogic_NeuralNetworkCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RigLogic_NeuralNetworkCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigLogic_NeuralNetworkCount,*pFVar1,
               L"Neural Network Count","STATGROUP_RigLogic","STATCAT_Advanced",L"RigLogic",true,true
               ,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RigLogic_PSDCount'' @ 1411c69b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RigLogic_PSDCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RigLogic_PSDCount == (FThreadSafeStaticStat<FStat_STAT_RigLogic_PSDCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RigLogic_PSDCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigLogic_PSDCount,*pFVar1,
               L"PSD Expression Count","STATGROUP_RigLogic","STATCAT_Advanced",L"RigLogic",true,true
               ,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RigLogic_RBFSolverCount'' @ 1411c6a40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RigLogic_RBFSolverCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RigLogic_RBFSolverCount ==
      (FThreadSafeStaticStat<FStat_STAT_RigLogic_RBFSolverCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RigLogic_RBFSolverCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigLogic_RBFSolverCount,*pFVar1,
               L"RBF Solver Count","STATGROUP_RigLogic","STATCAT_Advanced",L"RigLogic",true,true,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'UInt32ArrayTypeName'' @ 1411c6ad0

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

// `dynamic_initializer_for_'UInt32TypeName'' @ 1411c6b20

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

// `dynamic_initializer_for_'UInt64TypeName'' @ 1411c6b70

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

// `dynamic_initializer_for_'UInt8ArrayTypeName'' @ 1411c6bc0

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

// `dynamic_initializer_for_'UInt8TypeName'' @ 1411c6c10

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

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Private_DNAIndexMappingDeprecated_h__Script_RigLogicModule_2344068080'' @ 1411c6c60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Private_DNAIndexMappingDeprecated_h__Script_RigLogicModule_2344068080__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/RigLogicModule",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Private_DNAIndexMappingDeprecated_h__Script_RigLogicModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_AnimNode_RigLogic_h__Script_RigLogicModule_3280902181'' @ 1411c6ca0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_AnimNode_RigLogic_h__Script_RigLogicModule_3280902181__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/RigLogicModule",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_AnimNode_RigLogic_h__Script_RigLogicModule_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNAAsset_h__Script_RigLogicModule_2008578894'' @ 1411c6ce0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNAAsset_h__Script_RigLogicModule_2008578894__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/RigLogicModule",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNAAsset_h__Script_RigLogicModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNACommon_h__Script_RigLogicModule_1622125408'' @ 1411c6d20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNACommon_h__Script_RigLogicModule_1622125408__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/RigLogicModule",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNACommon_h__Script_RigLogicModule_Statics
             ::ScriptStructInfo,4,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNACommon_h__Script_RigLogicModule_Statics
             ::EnumInfo,0xc);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_RigLogic_h__Script_RigLogicModule_3790898094'' @ 1411c6d70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_RigLogic_h__Script_RigLogicModule_3790898094__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/RigLogicModule",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_RigLogic_h__Script_RigLogicModule_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_RigLogic_h__Script_RigLogicModule_Statics
             ::EnumInfo,5);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_RigUnit_RigLogic_h__Script_RigLogicModule_2266031625'' @ 1411c6dc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_RigUnit_RigLogic_h__Script_RigLogicModule_2266031625__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/RigLogicModule",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_RigUnit_RigLogic_h__Script_RigLogicModule_Statics
             ::ScriptStructInfo,4,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_SkelMeshDNAUtils_h__Script_RigLogicModule_891099653'' @ 1411c6e00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_SkelMeshDNAUtils_h__Script_RigLogicModule_891099653__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/RigLogicModule",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_SkelMeshDNAUtils_h__Script_RigLogicModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_SkelMeshDNAUtils_h__Script_RigLogicModule_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_RigLogicModule'' @ 1411c6e50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_RigLogicModule__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x2cd5b5ee;
  local_res8[0].DeclarationsHash = 0x8f96d18a;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_RigLogicModule,L"/Script/RigLogicModule",
             &Z_Registration_Info_UPackage__Script_RigLogicModule,local_res8);
  return;
}

// NewStructOps @ 14a65a2a0

void * __cdecl Z_Construct_UScriptStruct_FMeshBlendShapeChannelMapping_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMeshBlendShapeChannelMapping,&UE::CoreUObject::Private::Construct<FMeshBlendShapeChannelMapping>,&UE::CoreUObject::Private::ConstructForTests<FMeshBlendShapeChannelMapping>,&UE::CoreUObject::Private::Destruct<FMeshBlendShapeChannelMapping>,&UE::CoreUObject::Private::Copy<FMeshBlendShapeChannelMapping>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FBoneIndexControlAttributeMapping @ 14a65a2e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBoneIndexControlAttributeMapping(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBoneIndexControlAttributeMapping.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBoneIndexControlAttributeMapping.InnerSingleton,
               &Z_Construct_UScriptStruct_FBoneIndexControlAttributeMapping_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBoneIndexControlAttributeMapping.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBoneIndexControlAttributeMapping.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data @ 14a65a360

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_RigLogic_Data.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigUnit_RigLogic_Data.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigUnit_RigLogic_Data.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigUnit_RigLogic_Data.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FRigUnit_RigLogic_IntArray @ 14a65a3e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigUnit_RigLogic_IntArray(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_RigLogic_IntArray.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigUnit_RigLogic_IntArray.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigUnit_RigLogic_IntArray_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigUnit_RigLogic_IntArray.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigUnit_RigLogic_IntArray.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 14a65a460

void * __cdecl
Z_Construct_UScriptStruct_FBoneIndexControlAttributeMapping_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBoneIndexControlAttributeMapping,&UE::CoreUObject::Private::Construct<FBoneIndexControlAttributeMapping>,&UE::CoreUObject::Private::ConstructForTests<FBoneIndexControlAttributeMapping>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a65a570

void * __cdecl Z_Construct_UScriptStruct_FTextureCoordinate_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTextureCoordinate,&UE::CoreUObject::Private::Construct<FTextureCoordinate>,&UE::CoreUObject::Private::ConstructForTests<FTextureCoordinate>,&UE::CoreUObject::Private::Destruct<FTextureCoordinate>,&UE::CoreUObject::Private::Copy<FTextureCoordinate>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a65a790

void * __cdecl Z_Construct_UScriptStruct_FRigUnit_RigLogic_IntArray_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigUnit_RigLogic_IntArray,&UE::CoreUObject::Private::Construct<FRigUnit_RigLogic_IntArray>,&UE::CoreUObject::Private::ConstructForTests<FRigUnit_RigLogic_IntArray>,&UE::CoreUObject::Private::Destruct<FRigUnit_RigLogic_IntArray>,&UE::CoreUObject::Private::Copy<FRigUnit_RigLogic_IntArray>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a65a7d0

void * __cdecl Z_Construct_UScriptStruct_FVertexLayout_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FVertexLayout,&UE::CoreUObject::Private::Construct<FVertexLayout>,&UE::CoreUObject::Private::ConstructForTests<FVertexLayout>,&UE::CoreUObject::Private::Destruct<FVertexLayout>,&UE::CoreUObject::Private::Copy<FVertexLayout>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_USkelMeshDNAUtils @ 14a65a810

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USkelMeshDNAUtils(void)

{
  if (Z_Registration_Info_UClass_USkelMeshDNAUtils.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USkelMeshDNAUtils.OuterSingleton,
               &Z_Construct_UClass_USkelMeshDNAUtils_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USkelMeshDNAUtils.OuterSingleton;
}

// ELodUpdateOption_StaticEnum @ 14a65a850

UEnum * __cdecl ELodUpdateOption_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELodUpdateOption.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigLogicModule();
    Z_Registration_Info_UEnum_ELodUpdateOption.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigLogicModule_ELodUpdateOption,(UObject *)pUVar1,
                       L"ELodUpdateOption");
  }
  return Z_Registration_Info_UEnum_ELodUpdateOption.OuterSingleton;
}

// NewStructOps @ 14a65a890

void * __cdecl Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigUnit_RigLogic_Data,&UE::CoreUObject::Private::Construct<FRigUnit_RigLogic_Data>,&UE::CoreUObject::Private::ConstructForTests<FRigUnit_RigLogic_Data>,&UE::CoreUObject::Private::Destruct<FRigUnit_RigLogic_Data>,&UE::CoreUObject::Private::Copy<FRigUnit_RigLogic_Data>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIsInitialized_SetBit @ 14a65a8d0

void __cdecl
Z_Construct_UScriptStruct_FRigUnit_RigLogic_Statics::NewProp_bIsInitialized_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb8) = 1;
  return;
}

// NewStructOps @ 14a65a990

void * __cdecl Z_Construct_UScriptStruct_FRigUnit_RigLogic_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigUnit_RigLogic,&UE::CoreUObject::Private::Construct<FRigUnit_RigLogic>,&UE::CoreUObject::Private::ConstructForTests<FRigUnit_RigLogic>,&UE::CoreUObject::Private::Destruct<FRigUnit_RigLogic>,&UE::CoreUObject::Private::Copy<FRigUnit_RigLogic>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_CacheAnimCurveNames_SetBit @ 14a65ab00

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_RigLogic_Statics::NewProp_CacheAnimCurveNames_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewStructOps @ 14a65ab10

void * __cdecl Z_Construct_UScriptStruct_FAnimNode_RigLogic_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNode_RigLogic,&UE::CoreUObject::Private::Construct<FAnimNode_RigLogic>,&UE::CoreUObject::Private::ConstructForTests<FAnimNode_RigLogic>,&UE::CoreUObject::Private::Destruct<FAnimNode_RigLogic>,&UE::CoreUObject::Private::Copy<FAnimNode_RigLogic>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14a65aec0

void * __thiscall
FRigUnit_RigLogic::_scalar_deleting_destructor_(FRigUnit_RigLogic *this,uint param_1)

{
  FRigUnit_RigLogic_Data::~FRigUnit_RigLogic_Data(&this->Data);
  this->_padding_ = (longlong)&___7FRigVMStruct__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// Z_Construct_UClass_UDEPRECATED_DNAIndexMapping @ 14a65b0b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDEPRECATED_DNAIndexMapping(void)

{
  if (Z_Registration_Info_UClass_UDEPRECATED_DNAIndexMapping.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDEPRECATED_DNAIndexMapping.OuterSingleton,
               &Z_Construct_UClass_UDEPRECATED_DNAIndexMapping_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_DNAIndexMapping.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14a65b3b0

void * __thiscall FRigLogicModule::_scalar_deleting_destructor_(FRigLogicModule *this,uint param_1)

{
  *this = (FRigLogicModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UEnum_RigLogicModule_ERigLogicCalculationType @ 14a65b3f0

UEnum * __cdecl Z_Construct_UEnum_RigLogicModule_ERigLogicCalculationType(void)

{
  if (Z_Registration_Info_UEnum_ERigLogicCalculationType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERigLogicCalculationType.InnerSingleton,
               &Z_Construct_UEnum_RigLogicModule_ERigLogicCalculationType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERigLogicCalculationType.InnerSingleton;
}

// Z_Construct_UEnum_RigLogicModule_ERigLogicRotationOrder @ 14a65b430

UEnum * __cdecl Z_Construct_UEnum_RigLogicModule_ERigLogicRotationOrder(void)

{
  if (Z_Registration_Info_UEnum_ERigLogicRotationOrder.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERigLogicRotationOrder.InnerSingleton,
               &Z_Construct_UEnum_RigLogicModule_ERigLogicRotationOrder_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERigLogicRotationOrder.InnerSingleton;
}

// Z_Construct_UEnum_RigLogicModule_ERigLogicRotationType @ 14a65b470

UEnum * __cdecl Z_Construct_UEnum_RigLogicModule_ERigLogicRotationType(void)

{
  if (Z_Registration_Info_UEnum_ERigLogicRotationType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERigLogicRotationType.InnerSingleton,
               &Z_Construct_UEnum_RigLogicModule_ERigLogicRotationType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERigLogicRotationType.InnerSingleton;
}

// Z_Construct_UEnum_RigLogicModule_ERigLogicScaleType @ 14a65b4b0

UEnum * __cdecl Z_Construct_UEnum_RigLogicModule_ERigLogicScaleType(void)

{
  if (Z_Registration_Info_UEnum_ERigLogicScaleType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERigLogicScaleType.InnerSingleton,
               &Z_Construct_UEnum_RigLogicModule_ERigLogicScaleType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERigLogicScaleType.InnerSingleton;
}

// Z_Construct_UEnum_RigLogicModule_ERigLogicTranslationType @ 14a65b4f0

UEnum * __cdecl Z_Construct_UEnum_RigLogicModule_ERigLogicTranslationType(void)

{
  if (Z_Registration_Info_UEnum_ERigLogicTranslationType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERigLogicTranslationType.InnerSingleton,
               &Z_Construct_UEnum_RigLogicModule_ERigLogicTranslationType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERigLogicTranslationType.InnerSingleton;
}

// ERigLogicCalculationType_StaticEnum @ 14a65b530

UEnum * __cdecl ERigLogicCalculationType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigLogicCalculationType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigLogicModule();
    Z_Registration_Info_UEnum_ERigLogicCalculationType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigLogicModule_ERigLogicCalculationType,(UObject *)pUVar1,
                       L"ERigLogicCalculationType");
  }
  return Z_Registration_Info_UEnum_ERigLogicCalculationType.OuterSingleton;
}

// ERigLogicTranslationType_StaticEnum @ 14a65b570

UEnum * __cdecl ERigLogicTranslationType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigLogicTranslationType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigLogicModule();
    Z_Registration_Info_UEnum_ERigLogicTranslationType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigLogicModule_ERigLogicTranslationType,(UObject *)pUVar1,
                       L"ERigLogicTranslationType");
  }
  return Z_Registration_Info_UEnum_ERigLogicTranslationType.OuterSingleton;
}

// ERigLogicRotationType_StaticEnum @ 14a65b5b0

UEnum * __cdecl ERigLogicRotationType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigLogicRotationType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigLogicModule();
    Z_Registration_Info_UEnum_ERigLogicRotationType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigLogicModule_ERigLogicRotationType,(UObject *)pUVar1,
                       L"ERigLogicRotationType");
  }
  return Z_Registration_Info_UEnum_ERigLogicRotationType.OuterSingleton;
}

// ERigLogicRotationOrder_StaticEnum @ 14a65b5f0

UEnum * __cdecl ERigLogicRotationOrder_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigLogicRotationOrder.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigLogicModule();
    Z_Registration_Info_UEnum_ERigLogicRotationOrder.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigLogicModule_ERigLogicRotationOrder,(UObject *)pUVar1,
                       L"ERigLogicRotationOrder");
  }
  return Z_Registration_Info_UEnum_ERigLogicRotationOrder.OuterSingleton;
}

// ERigLogicScaleType_StaticEnum @ 14a65b630

UEnum * __cdecl ERigLogicScaleType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigLogicScaleType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigLogicModule();
    Z_Registration_Info_UEnum_ERigLogicScaleType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigLogicModule_ERigLogicScaleType,(UObject *)pUVar1,
                       L"ERigLogicScaleType");
  }
  return Z_Registration_Info_UEnum_ERigLogicScaleType.OuterSingleton;
}

// NewProp_LoadJoints_SetBit @ 14a65b670

void __cdecl
Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewProp_LoadJoints_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewProp_LoadBlendShapes_SetBit @ 14a65b680

void __cdecl
Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewProp_LoadBlendShapes_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  return;
}

// NewProp_LoadAnimatedMaps_SetBit @ 14a65b690

void __cdecl
Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewProp_LoadAnimatedMaps_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 3) = 1;
  return;
}

// NewProp_LoadMachineLearnedBehavior_SetBit @ 14a65b6a0

void __cdecl
Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewProp_LoadMachineLearnedBehavior_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// NewProp_LoadRBFBehavior_SetBit @ 14a65b6b0

void __cdecl
Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewProp_LoadRBFBehavior_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 5) = 1;
  return;
}

// NewProp_LoadTwistSwingBehavior_SetBit @ 14a65b6c0

void __cdecl
Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewProp_LoadTwistSwingBehavior_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 6) = 1;
  return;
}

// NewStructOps @ 14a65b6d0

void * __cdecl Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigLogicConfiguration,&UE::CoreUObject::Private::Construct<FRigLogicConfiguration>,&UE::CoreUObject::Private::ConstructForTests<FRigLogicConfiguration>,&UE::CoreUObject::Private::Destruct<FRigLogicConfiguration>,&UE::CoreUObject::Private::Copy<FRigLogicConfiguration>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UDNAAsset @ 14a65bbf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDNAAsset(void)

{
  if (Z_Registration_Info_UClass_UDNAAsset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDNAAsset.OuterSingleton,
               &Z_Construct_UClass_UDNAAsset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDNAAsset.OuterSingleton;
}

// Z_Construct_UScriptStruct_FRigLogicConfiguration @ 14a65bc30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigLogicConfiguration(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigLogicConfiguration.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigLogicConfiguration.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigLogicConfiguration.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigLogicConfiguration.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// `scalar_deleting_destructor' @ 14a65bcb0

void * __thiscall
FRigUnit_RigLogicTest::_scalar_deleting_destructor_(FRigUnit_RigLogicTest *this,uint param_1)

{
  FRigUnit_RigLogic_Data::~FRigUnit_RigLogic_Data(&(this->Unit).Data);
  (this->Unit)._padding_ = (longlong)&___7FRigVMStruct__6B_;
  FControlRigUnitTestBase::~FControlRigUnitTestBase((FControlRigUnitTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x6e0);
  }
  return this;
}

// NewProp_bKeepDNAAfterInitialization_SetBit @ 14a65bd10

void __cdecl
Z_Construct_UClass_UDNAAsset_Statics::NewProp_bKeepDNAAfterInitialization_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// Z_Construct_UEnum_RigLogicModule_EDirection @ 14a65bf90

UEnum * __cdecl Z_Construct_UEnum_RigLogicModule_EDirection(void)

{
  if (Z_Registration_Info_UEnum_EDirection.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDirection.InnerSingleton,
               &Z_Construct_UEnum_RigLogicModule_EDirection_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDirection.InnerSingleton;
}

// Z_Construct_UPackage__Script_RigLogicModule @ 14a65bfd0

UPackage * __cdecl Z_Construct_UPackage__Script_RigLogicModule(void)

{
  if (Z_Registration_Info_UPackage__Script_RigLogicModule.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_RigLogicModule.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_RigLogicModule.OuterSingleton;
}

// EArchetype_StaticEnum @ 14a65c010

UEnum * __cdecl EArchetype_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EArchetype.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigLogicModule();
    Z_Registration_Info_UEnum_EArchetype.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigLogicModule_EArchetype,(UObject *)pUVar1,L"EArchetype");
  }
  return Z_Registration_Info_UEnum_EArchetype.OuterSingleton;
}

// EGender_StaticEnum @ 14a65c050

UEnum * __cdecl EGender_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGender.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigLogicModule();
    Z_Registration_Info_UEnum_EGender.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigLogicModule_EGender,(UObject *)pUVar1,L"EGender");
  }
  return Z_Registration_Info_UEnum_EGender.OuterSingleton;
}

// ETranslationUnit_StaticEnum @ 14a65c090

UEnum * __cdecl ETranslationUnit_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETranslationUnit.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigLogicModule();
    Z_Registration_Info_UEnum_ETranslationUnit.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigLogicModule_ETranslationUnit,(UObject *)pUVar1,
                       L"ETranslationUnit");
  }
  return Z_Registration_Info_UEnum_ETranslationUnit.OuterSingleton;
}

// ERotationUnit_StaticEnum @ 14a65c0d0

UEnum * __cdecl ERotationUnit_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERotationUnit.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigLogicModule();
    Z_Registration_Info_UEnum_ERotationUnit.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigLogicModule_ERotationUnit,(UObject *)pUVar1,
                       L"ERotationUnit");
  }
  return Z_Registration_Info_UEnum_ERotationUnit.OuterSingleton;
}

// EDirection_StaticEnum @ 14a65c110

UEnum * __cdecl EDirection_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDirection.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigLogicModule();
    Z_Registration_Info_UEnum_EDirection.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigLogicModule_EDirection,(UObject *)pUVar1,L"EDirection");
  }
  return Z_Registration_Info_UEnum_EDirection.OuterSingleton;
}

// ETranslationRepresentation_StaticEnum @ 14a65c150

UEnum * __cdecl ETranslationRepresentation_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETranslationRepresentation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigLogicModule();
    Z_Registration_Info_UEnum_ETranslationRepresentation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigLogicModule_ETranslationRepresentation,(UObject *)pUVar1
                       ,L"ETranslationRepresentation");
  }
  return Z_Registration_Info_UEnum_ETranslationRepresentation.OuterSingleton;
}

// ERotationRepresentation_StaticEnum @ 14a65c190

UEnum * __cdecl ERotationRepresentation_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERotationRepresentation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigLogicModule();
    Z_Registration_Info_UEnum_ERotationRepresentation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigLogicModule_ERotationRepresentation,(UObject *)pUVar1,
                       L"ERotationRepresentation");
  }
  return Z_Registration_Info_UEnum_ERotationRepresentation.OuterSingleton;
}

// EScaleRepresentation_StaticEnum @ 14a65c1d0

UEnum * __cdecl EScaleRepresentation_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EScaleRepresentation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigLogicModule();
    Z_Registration_Info_UEnum_EScaleRepresentation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigLogicModule_EScaleRepresentation,(UObject *)pUVar1,
                       L"EScaleRepresentation");
  }
  return Z_Registration_Info_UEnum_EScaleRepresentation.OuterSingleton;
}

// EAutomaticRadius_StaticEnum @ 14a65c210

UEnum * __cdecl EAutomaticRadius_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAutomaticRadius.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigLogicModule();
    Z_Registration_Info_UEnum_EAutomaticRadius.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigLogicModule_EAutomaticRadius,(UObject *)pUVar1,
                       L"EAutomaticRadius");
  }
  return Z_Registration_Info_UEnum_EAutomaticRadius.OuterSingleton;
}

// ETwistAxis_StaticEnum @ 14a65c250

UEnum * __cdecl ETwistAxis_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETwistAxis.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigLogicModule();
    Z_Registration_Info_UEnum_ETwistAxis.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigLogicModule_ETwistAxis,(UObject *)pUVar1,L"ETwistAxis");
  }
  return Z_Registration_Info_UEnum_ETwistAxis.OuterSingleton;
}

// EDNADataLayer_StaticEnum @ 14a65c290

UEnum * __cdecl EDNADataLayer_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDNADataLayer.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigLogicModule();
    Z_Registration_Info_UEnum_EDNADataLayer.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigLogicModule_EDNADataLayer,(UObject *)pUVar1,
                       L"EDNADataLayer");
  }
  return Z_Registration_Info_UEnum_EDNADataLayer.OuterSingleton;
}

// EActivationFunction_StaticEnum @ 14a65c2d0

UEnum * __cdecl EActivationFunction_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EActivationFunction.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigLogicModule();
    Z_Registration_Info_UEnum_EActivationFunction.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigLogicModule_EActivationFunction,(UObject *)pUVar1,
                       L"EActivationFunction");
  }
  return Z_Registration_Info_UEnum_EActivationFunction.OuterSingleton;
}

// NewStructOps @ 14a65c310

void * __cdecl Z_Construct_UScriptStruct_FCoordinateSystem_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCoordinateSystem,&UE::CoreUObject::Private::Construct<FCoordinateSystem>,&UE::CoreUObject::Private::ConstructForTests<FCoordinateSystem>,&UE::CoreUObject::Private::Destruct<FCoordinateSystem>,&UE::CoreUObject::Private::Copy<FCoordinateSystem>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// ConstructItems<FAnimNode_RigLogic::FCachedJointMapping,FAnimNode_RigLogic::FCachedJointMapping,int> @ 14a65c580

void __cdecl
ConstructItems<FAnimNode_RigLogic::FCachedJointMapping,FAnimNode_RigLogic::FCachedJointMapping,int>
          (void *param_1,FCachedJointMapping *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  void *pvVar4;
  FScriptContainerElement *_Src;
  int *piVar5;
  int *piVar6;
  longlong lVar7;
  
  if (param_3 != 0) {
    piVar5 = (int *)((longlong)param_1 + 0x28);
    piVar6 = &(param_2->DenseDriverJointsToControlAttributesMap).ArrayNum;
    lVar7 = (longlong)param_1 + (-0x28 - (longlong)param_2);
    do {
      *(undefined8 *)((longlong)piVar6 + lVar7) = 0;
      pFVar2 = (ForAnyElementType *)((longlong)piVar6 + lVar7);
      iVar3 = piVar6[-8];
      pvVar4 = *(void **)(piVar6 + -10);
      piVar5[-8] = iVar3;
      if (iVar3 == 0) {
        piVar5[-7] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar3,0,pFVar2,iVar3,piVar5 + -7);
        memcpy(pFVar2->Data,pvVar4,(longlong)iVar3 << 3);
      }
      piVar5[-6] = 0;
      piVar5[-5] = 0;
      iVar3 = piVar6[-4];
      pvVar4 = *(void **)(piVar6 + -6);
      piVar5[-4] = iVar3;
      if (iVar3 == 0) {
        piVar5[-3] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,4,iVar3,0,(ForAnyElementType *)(piVar5 + -6),iVar3,piVar5 + -3);
        memcpy(((ForAnyElementType *)(piVar5 + -6))->Data,pvVar4,(longlong)iVar3 * 0x18);
      }
      piVar5[-2] = 0;
      piVar5[-1] = 0;
      iVar3 = *piVar6;
      _Src = (((TArray<FAnimNode_RigLogic::FCompactPoseBoneControlAttributeMapping,TSizedDefaultAllocator<32>_>
                *)(piVar6 + -2))->AllocatorInstance).Data;
      *piVar5 = iVar3;
      if (iVar3 == 0) {
        piVar5[1] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,4,iVar3,0,(ForAnyElementType *)(piVar5 + -2),iVar3,piVar5 + 1);
        memcpy(((ForAnyElementType *)(piVar5 + -2))->Data,_Src,(longlong)iVar3 * 0x18);
      }
      piVar1 = piVar6 + 2;
      piVar6 = piVar6 + 0xe;
      piVar5[2] = *piVar1;
      piVar5 = piVar5 + 0xe;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FAnimNode_RigLogic::FCurveElementControlAttributeMapping,FAnimNode_RigLogic::FCurveElementControlAttributeMapping,int> @ 14a65c720

void __cdecl
ConstructItems<FAnimNode_RigLogic::FCurveElementControlAttributeMapping,FAnimNode_RigLogic::FCurveElementControlAttributeMapping,int>
          (void *param_1,FCurveElementControlAttributeMapping *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  void *_Src_00;
  int *piVar3;
  int *piVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    piVar3 = (int *)((longlong)param_1 + 0xc);
    piVar4 = &(param_2->RawControlIndices).ArrayNum;
    lVar5 = (longlong)param_1 + (-8 - (longlong)param_2);
    do {
      *(undefined8 *)((longlong)piVar4 + lVar5) = 0;
      pFVar1 = (ForAnyElementType *)((longlong)piVar4 + lVar5);
      iVar2 = *piVar4;
      _Src = (((TArray<int,TSizedDefaultAllocator<32>_> *)(piVar4 + -2))->AllocatorInstance).Data;
      piVar3[-1] = iVar2;
      if (iVar2 == 0) {
        *piVar3 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar2,0,pFVar1,iVar2,piVar3);
        memcpy(pFVar1->Data,_Src,(longlong)iVar2 << 2);
      }
      piVar3[1] = 0;
      piVar3[2] = 0;
      iVar2 = piVar4[4];
      _Src_00 = *(void **)(piVar4 + 2);
      piVar3[3] = iVar2;
      if (iVar2 == 0) {
        piVar3[4] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar2,0,(ForAnyElementType *)(piVar3 + 1),iVar2,piVar3 + 4);
        memcpy(((ForAnyElementType *)(piVar3 + 1))->Data,_Src_00,(longlong)iVar2 << 2);
      }
      piVar3 = piVar3 + 8;
      piVar4 = piVar4 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FRigUnit_RigLogic_IntArray,FRigUnit_RigLogic_IntArray,int> @ 14a65c850

void __cdecl
ConstructItems<FRigUnit_RigLogic_IntArray,FRigUnit_RigLogic_IntArray,int>
          (void *param_1,FRigUnit_RigLogic_IntArray *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      ((ForAnyElementType *)param_1)->Data = (FScriptContainerElement *)0x0;
      piVar1 = (int *)((longlong)&((ForAnyElementType *)((longlong)param_1 + 8))->Data + 4);
      iVar2 = *(int *)(lVar3 + 8 + (longlong)param_1);
      _Src = *(void **)(lVar3 + (longlong)param_1);
      *(int *)&((ForAnyElementType *)((longlong)param_1 + 8))->Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar2,0,param_1,iVar2,piVar1);
        memcpy(((ForAnyElementType *)param_1)->Data,_Src,(longlong)iVar2 << 2);
      }
      param_1 = (void *)((longlong)param_1 + 0x10);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed>,int> @ 14a65c900

void __cdecl
DefaultConstructItems<TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed>,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined1 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      lVar1 = lVar1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FSharedRigRuntimeContext::TNestedArray<unsigned_short>,int> @ 14a65c930

void __cdecl
DefaultConstructItems<FSharedRigRuntimeContext::TNestedArray<unsigned_short>,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      lVar1 = lVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FAnimNode_RigLogic::FCachedJointMapping,int> @ 14a65c960

void __cdecl
DefaultConstructItems<FAnimNode_RigLogic::FCachedJointMapping,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined8 *)(lVar1 + 0x1c) = 0;
      *(undefined4 *)(lVar1 + 0x24) = 0xffffffff;
      lVar1 = lVar1 + 0x38;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FAnimNode_RigLogic::FCurveElementControlAttributeMapping,int> @ 14a65c9a0

void __cdecl
DefaultConstructItems<FAnimNode_RigLogic::FCurveElementControlAttributeMapping,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      lVar1 = lVar1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FRigUnit_RigLogic_IntArray,int> @ 14a65c9d0

void __cdecl DefaultConstructItems<FRigUnit_RigLogic_IntArray,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      lVar1 = lVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed>,int> @ 14a65ca00

void __cdecl
DestructItems<TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed>,int>
          (TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed> *param_1,
          int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if ((void *)param_1->_padding_ != (void *)0x0) {
      FMemory::Free((void *)param_1->_padding_);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FSharedRigRuntimeContext::TNestedArray<unsigned_short>,int> @ 14a65ca40

void __cdecl
DestructItems<FSharedRigRuntimeContext::TNestedArray<unsigned_short>,int>
          (TNestedArray<unsigned_short> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Values).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FAnimNode_RigLogic::FCachedJointMapping,int> @ 14a65ca80

void __cdecl
DestructItems<FAnimNode_RigLogic::FCachedJointMapping,int>(FCachedJointMapping *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FAnimNode_RigLogic::FCompactPoseBoneControlAttributeMapping,TSizedDefaultAllocator<32>_>
  *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->SparseDriverJointsToControlAttributesMap;
    do {
      pFVar1 = pTVar2[1].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FCachedJointMapping *)(pTVar2 + -1))->JointsMapDNAIndicesToCompactPoseBoneIndices)
               .AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<FAnimNode_RigLogic::FCompactPoseBoneControlAttributeMapping,TSizedDefaultAllocator<32>_>
                *)((longlong)(pTVar2 + 3) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FAnimNode_RigLogic::FCurveElementControlAttributeMapping,int> @ 14a65cae0

void __cdecl
DestructItems<FAnimNode_RigLogic::FCurveElementControlAttributeMapping,int>
          (FCurveElementControlAttributeMapping *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->NeuralNetworkMaskIndices).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->RawControlIndices).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FRigUnit_RigLogic_IntArray,int> @ 14a65cb30

void __cdecl
DestructItems<FRigUnit_RigLogic_IntArray,int>(FRigUnit_RigLogic_IntArray *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Values).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// FindLastByPredicate<`FDNAIndexMapping::MapDriverJoints'::__l7::<lambda_1>_> @ 14a65cff0

int __thiscall
TArray<FDNAIndexMapping::FMeshPoseBoneControlAttributeMapping,TSizedDefaultAllocator<32>_>::
FindLastByPredicate<_FDNAIndexMapping::MapDriverJoints_::__l7::<lambda_1>_>
          (TArray<FDNAIndexMapping::FMeshPoseBoneControlAttributeMapping,TSizedDefaultAllocator<32>_>
           *this,<lambda_1> param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  if (((param_2 < 0) || (this->ArrayNum < param_2)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count >= 0 && Count <= this->Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x55b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  pFVar5 = pFVar1 + (longlong)param_2 * 0x18;
  do {
    if (pFVar5 == pFVar1) {
      return -1;
    }
    pFVar5 = pFVar5 + -0x18;
  } while (*(int *)pFVar5 != param_1.BoneIndex);
  return (int)(((longlong)pFVar5 - (longlong)pFVar1) / 0x18);
}

// FindLastByPredicate<`FRigUnit_RigLogic_Data::MapDriverJoints'::__l4::<lambda_2>_> @ 14a65d0a0

int __thiscall
TArray<FBoneIndexControlAttributeMapping,TSizedDefaultAllocator<32>_>::
FindLastByPredicate<_FRigUnit_RigLogic_Data::MapDriverJoints_::__l4::<lambda_2>_>
          (TArray<FBoneIndexControlAttributeMapping,TSizedDefaultAllocator<32>_> *this,
          <lambda_2> param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  if (((param_2 < 0) || (this->ArrayNum < param_2)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count >= 0 && Count <= this->Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x55b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  pFVar5 = pFVar1 + (longlong)param_2 * 0x18;
  do {
    if (pFVar5 == pFVar1) {
      return -1;
    }
    pFVar5 = pFVar5 + -0x18;
  } while (*(int *)pFVar5 != param_1.BoneIndex);
  return (int)(((longlong)pFVar5 - (longlong)pFVar1) / 0x18);
}

// InternalConstructor<UDEPRECATED_DNAIndexMapping> @ 14a65d150

void __cdecl InternalConstructor<UDEPRECATED_DNAIndexMapping>(FObjectInitializer *param_1)

{
  UAssetUserData *this;
  
  this = (UAssetUserData *)param_1->Obj;
  if (this != (UAssetUserData *)0x0) {
    UAssetUserData::UAssetUserData(this,param_1);
    *(undefined ***)this = &___7UDEPRECATED_DNAIndexMapping__6B_;
  }
  return;
}

// InternalConstructor<UDNAAsset> @ 14a65d180

void __cdecl InternalConstructor<UDNAAsset>(FObjectInitializer *param_1)

{
  UAssetUserData *this;
  FObjectInitializer *pFVar1;
  
  this = (UAssetUserData *)param_1->Obj;
  if (this != (UAssetUserData *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UAssetUserData::UAssetUserData(this,pFVar1);
    *(undefined ***)this = &___7UDNAAsset__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined4 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x1c = 0x80;
    *(undefined4 *)&this[2].field_0x20 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x24 = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined4 *)&this[3].field_0x10 = 0;
    *(undefined4 *)&this[3].field_0x18 = 0x1010104;
    *(undefined4 *)&this[3].field_0x1c = 0x3010101;
    *(undefined2 *)&this[3].field_0x20 = 0x504;
    this[3].field_0x22 = 3;
    *(undefined8 *)&this[3].field_0x24 = 0;
    *(undefined4 *)&this[4].field_0x4 = 0;
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
    *(undefined8 *)&this[6].field_0x20 = 0;
    *(undefined4 *)(this + 7) = 0;
    *(undefined4 *)&this[7].field_0x4 = 0x80;
    *(undefined4 *)&this[7].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[7].field_0xc = 0;
    *(undefined8 *)&this[7].field_0x18 = 0;
    *(undefined4 *)&this[7].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<USkelMeshDNAUtils> @ 14a65d2b0

void __cdecl InternalConstructor<USkelMeshDNAUtils>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7USkelMeshDNAUtils__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UDEPRECATED_DNAIndexMapping> @ 14a65d2e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDEPRECATED_DNAIndexMapping>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDEPRECATED_DNAIndexMapping::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UAssetUserData::UAssetUserData((UAssetUserData *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDEPRECATED_DNAIndexMapping__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDNAAsset> @ 14a65d390

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDNAAsset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDNAAsset::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UAssetUserData::UAssetUserData((UAssetUserData *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDNAAsset__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined4 *)&pUVar1[2].field_0x18 = 0;
    *(undefined4 *)&pUVar1[2].field_0x1c = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0x24 = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined4 *)&pUVar1[3].field_0x10 = 0;
    *(undefined4 *)&pUVar1[3].field_0x18 = 0x1010104;
    *(undefined4 *)&pUVar1[3].field_0x1c = 0x3010101;
    *(undefined2 *)&pUVar1[3].field_0x20 = 0x504;
    pUVar1[3].field_0x22 = 3;
    *(undefined8 *)&pUVar1[3].field_0x24 = 0;
    *(undefined4 *)&pUVar1[4].field_0x4 = 0;
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
    *(undefined8 *)&pUVar1[6].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 7) = 0;
    *(undefined4 *)&pUVar1[7].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[7].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[7].field_0xc = 0;
    *(undefined8 *)&pUVar1[7].field_0x18 = 0;
    *(undefined4 *)&pUVar1[7].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USkelMeshDNAUtils> @ 14a65d530

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USkelMeshDNAUtils>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USkelMeshDNAUtils::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7USkelMeshDNAUtils__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// MakeShared<FDNAReader<dna::BinaryStreamReader>,1,dna::BinaryStreamReader_*> @ 14a65d5e0

TSharedRef<FDNAReader<dna::BinaryStreamReader>,1> * __cdecl
MakeShared<FDNAReader<dna::BinaryStreamReader>,1,dna::BinaryStreamReader_*>
          (TSharedRef<FDNAReader<dna::BinaryStreamReader>,1> *__return_storage_ptr__,
          BinaryStreamReader **param_1)

{
  int iVar1;
  BinaryStreamReader *pBVar2;
  code *pcVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSharedRef<FDNAReader<dna::BinaryStreamReader>,1> *pTVar6;
  
  pTVar5 = operator_new(0xa0);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FDNAReader<dna::BinaryStreamReader> *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__FDNAReader_VBinaryStreamReader_dna_____00_SharedPointerInternals__6B_
    ;
    pBVar2 = *param_1;
    *(undefined1 **)&pTVar5[1].SharedReferenceCount =
         &FDNAReader<dna::BinaryStreamReader>::_vbtable__for__IRBFBehaviorReader__;
    *(undefined8 **)&pTVar5[2].SharedReferenceCount =
         &FDNAReader<dna::BinaryStreamReader>::_vbtable__for__IGeometryReader__;
    *(undefined8 **)&pTVar5[3].SharedReferenceCount =
         &FDNAReader<dna::BinaryStreamReader>::_vbtable__for__IMachineLearnedBehaviorReader__;
    *(undefined8 **)&pTVar5[4].SharedReferenceCount =
         &FDNAReader<dna::BinaryStreamReader>::_vbtable__for__IJointBehaviorMetadataReader__;
    *(undefined8 **)&pTVar5[5].SharedReferenceCount =
         &FDNAReader<dna::BinaryStreamReader>::_vbtable__for__ITwistSwingBehaviorReader__;
    *(undefined1 **)&pTVar5[9].SharedReferenceCount =
         &FDNAReader<dna::BinaryStreamReader>::_vbtable__for__IBehaviorReader__;
    pTVar5[8]._padding_ = (longlong)&___7IDefinitionReader__6B_;
    pTVar5[9]._padding_ = (longlong)&IBehaviorReader::_vftable__for__IBehaviorReader__;
    *(undefined ***)
     (&pTVar5[9].SharedReferenceCount.field_0x0 +
     *(int *)(*(longlong *)&pTVar5[9].SharedReferenceCount + 4)) =
         &IBehaviorReader::_vftable__for__IDefinitionReader__;
    IDNAReader::IDNAReader((IDNAReader *)(pTVar5 + 1));
    pTVar5[1]._padding_ = (longlong)&___7__FDNAReader_VBinaryStreamReader_dna____6B_;
    pTVar5[2]._padding_ =
         (longlong)&FDNAReader<dna::BinaryStreamReader>::_vftable__for__IGeometryReader__;
    pTVar5[3]._padding_ =
         (longlong)
         &FDNAReader<dna::BinaryStreamReader>::_vftable__for__IMachineLearnedBehaviorReader__;
    pTVar5[4]._padding_ =
         (longlong)
         &FDNAReader<dna::BinaryStreamReader>::_vftable__for__IJointBehaviorMetadataReader__;
    pTVar5[5]._padding_ =
         (longlong)&FDNAReader<dna::BinaryStreamReader>::_vftable__for__ITwistSwingBehaviorReader__;
    *(undefined ***)
     (&pTVar5[1].SharedReferenceCount.field_0x0 +
     *(int *)(*(longlong *)&pTVar5[1].SharedReferenceCount + 4)) =
         &FDNAReader<dna::BinaryStreamReader>::_vftable__for__IDefinitionReader__;
    *(undefined ***)
     (&pTVar5[1].SharedReferenceCount.field_0x0 +
     *(int *)(*(longlong *)&pTVar5[1].SharedReferenceCount + 8)) =
         &FDNAReader<dna::BinaryStreamReader>::_vftable__for__IBehaviorReader__;
    iVar1 = *(int *)(*(longlong *)&pTVar5[1].SharedReferenceCount + 4);
    *(int *)((longlong)&pTVar5[1]._padding_ + (longlong)iVar1 + 4) = iVar1 + -0x68;
    iVar1 = *(int *)(*(longlong *)&pTVar5[1].SharedReferenceCount + 8);
    *(int *)((longlong)&pTVar5[1]._padding_ + (longlong)iVar1 + 4) = iVar1 + -0x78;
    FMemoryResource::SharedInstance((TSharedPtr<FMemoryResource,1> *)(pTVar5 + 6));
    pTVar5[7]._padding_ = (longlong)pBVar2;
    __return_storage_ptr__->Object = (FDNAReader<dna::BinaryStreamReader> *)(pTVar5 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
    if ((FDNAReader<dna::BinaryStreamReader> *)(pTVar5 + 1) ==
        (FDNAReader<dna::BinaryStreamReader> *)0x0) {
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedRef<FDNAReader<dna::BinaryStreamReader>,1> *)(*pcVar3)();
        return pTVar6;
      }
    }
  }
  return __return_storage_ptr__;
}

// NewIntrusiveReferenceController<1,FRigLogic,FDNAReader<RigLogicDNAReader>_*,FRigLogicConfiguration_&> @ 14a65d7b0

TIntrusiveReferenceController<FRigLogic,1> * __cdecl
SharedPointerInternals::
NewIntrusiveReferenceController<1,FRigLogic,FDNAReader<RigLogicDNAReader>_*,FRigLogicConfiguration_&>
          (FDNAReader<RigLogicDNAReader> **param_1,FRigLogicConfiguration *param_2)

{
  FDNAReader<RigLogicDNAReader> *pFVar1;
  MemoryResource *pMVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  TIntrusiveReferenceController<FRigLogic,1> *pTVar6;
  TSharedPtr<FMemoryResource,1> *pTVar7;
  Reader *pRVar8;
  RigLogic *pRVar9;
  uchar *puVar10;
  TSharedPtr<FMemoryResource,1> local_48;
  Configuration local_38;
  Configuration local_20;
  
  pTVar6 = ::operator_new(0x40);
  if (pTVar6 != (TIntrusiveReferenceController<FRigLogic,1> *)0x0) {
    *(undefined4 *)&pTVar6->_padding_ = 1;
    *(undefined4 *)((longlong)&pTVar6->_padding_ + 4) = 1;
    pTVar6->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_VFRigLogic___00_SharedPointerInternals__6B_;
    pFVar1 = *param_1;
    FMemoryResource::SharedInstance((TSharedPtr<FMemoryResource,1> *)&pTVar6->ObjectStorage);
    pTVar7 = FMemoryResource::SharedInstance(&local_48);
    pMVar2 = (MemoryResource *)pTVar7->Object;
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    local_20.translationPruningThreshold = param_2->TranslationPruningThreshold;
    local_38.calculationType = param_2->CalculationType;
    local_38.loadJoints = param_2->LoadJoints;
    local_38.loadBlendShapes = param_2->LoadBlendShapes;
    local_38.loadAnimatedMaps = param_2->LoadAnimatedMaps;
    local_38.loadMachineLearnedBehavior = param_2->LoadMachineLearnedBehavior;
    local_38.loadRBFBehavior = param_2->LoadRBFBehavior;
    local_38.loadTwistSwingBehavior = param_2->LoadTwistSwingBehavior;
    local_38.translationType = param_2->TranslationType;
    uVar3 = param_2->RotationType;
    uVar4 = param_2->RotationOrder;
    uVar5 = param_2->ScaleType;
    local_38.scaleType = uVar5;
    local_38.rotationOrder = uVar4;
    local_38.rotationType = uVar3;
    local_20.rotationPruningThreshold = param_2->RotationPruningThreshold;
    local_20.scalePruningThreshold = param_2->ScalePruningThreshold;
    local_20.rotationType = uVar3;
    local_20.rotationOrder = uVar4;
    local_20.scaleType = uVar5;
    local_20._11_1_ = local_38._11_1_;
    local_20._0_4_ = local_38._0_4_;
    local_20._4_4_ = local_38._4_4_;
    pRVar8 = (Reader *)
             (**(code **)(*(longlong *)
                           (&pFVar1->field_0x8 + *(int *)(*(longlong *)&pFVar1->field_0x8 + 4)) + 8)
             )();
    pRVar9 = rl4::RigLogic::create(pRVar8,&local_20,pMVar2);
    *(RigLogic **)((pTVar6->ObjectStorage).Pad + 0x10) = pRVar9;
    puVar10 = (uchar *)(**(code **)((longlong)*pRVar9 + 0x10))(pRVar9);
    (pTVar6->ObjectStorage).Pad[0x18] = '\x04';
    (pTVar6->ObjectStorage).Pad[0x19] = '\x01';
    (pTVar6->ObjectStorage).Pad[0x1a] = '\x01';
    (pTVar6->ObjectStorage).Pad[0x1b] = '\x01';
    (pTVar6->ObjectStorage).Pad[0x1c] = '\x01';
    (pTVar6->ObjectStorage).Pad[0x1d] = '\x01';
    (pTVar6->ObjectStorage).Pad[0x1e] = '\x01';
    (pTVar6->ObjectStorage).Pad[0x1f] = '\x03';
    (pTVar6->ObjectStorage).Pad[0x20] = '\x04';
    (pTVar6->ObjectStorage).Pad[0x21] = '\x05';
    (pTVar6->ObjectStorage).Pad[0x22] = '\x03';
    (pTVar6->ObjectStorage).Pad[0x24] = '\0';
    (pTVar6->ObjectStorage).Pad[0x25] = '\0';
    (pTVar6->ObjectStorage).Pad[0x26] = '\0';
    (pTVar6->ObjectStorage).Pad[0x27] = '\0';
    (pTVar6->ObjectStorage).Pad[0x28] = '\0';
    (pTVar6->ObjectStorage).Pad[0x29] = '\0';
    (pTVar6->ObjectStorage).Pad[0x2a] = '\0';
    (pTVar6->ObjectStorage).Pad[0x2b] = '\0';
    (pTVar6->ObjectStorage).Pad[0x2c] = '\0';
    (pTVar6->ObjectStorage).Pad[0x2d] = '\0';
    (pTVar6->ObjectStorage).Pad[0x2e] = '\0';
    (pTVar6->ObjectStorage).Pad[0x2f] = '\0';
    (pTVar6->ObjectStorage).Pad[0x18] = *puVar10;
    (pTVar6->ObjectStorage).Pad[0x19] = puVar10[1];
    (pTVar6->ObjectStorage).Pad[0x1a] = puVar10[2];
    (pTVar6->ObjectStorage).Pad[0x1b] = puVar10[3];
    (pTVar6->ObjectStorage).Pad[0x1c] = puVar10[4];
    (pTVar6->ObjectStorage).Pad[0x1d] = puVar10[5];
    (pTVar6->ObjectStorage).Pad[0x1e] = puVar10[6];
    (pTVar6->ObjectStorage).Pad[0x1f] = puVar10[7];
    (pTVar6->ObjectStorage).Pad[0x20] = puVar10[8];
    (pTVar6->ObjectStorage).Pad[0x21] = puVar10[9];
    (pTVar6->ObjectStorage).Pad[0x22] = puVar10[10];
    *(undefined4 *)((pTVar6->ObjectStorage).Pad + 0x24) = *(undefined4 *)(puVar10 + 0xc);
    *(undefined4 *)((pTVar6->ObjectStorage).Pad + 0x28) = *(undefined4 *)(puVar10 + 0x10);
    *(undefined4 *)((pTVar6->ObjectStorage).Pad + 0x2c) = *(undefined4 *)(puVar10 + 0x14);
    return pTVar6;
  }
  return (TIntrusiveReferenceController<FRigLogic,1> *)0x0;
}

// NewObject<UDNAAsset> @ 14a65d9c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDNAAsset * __cdecl NewObject<UDNAAsset>(UObject *param_1)

{
  UClass *pUVar1;
  UDNAAsset *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UDNAAsset::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDNAAsset *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98)
  ;
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// RemoveByPredicate<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed,TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed,`FDNAIndexMapping::MapControlCurves'::__l2::<lambda_1>_> @ 14a65da60

void __cdecl
UE::Anim::FNamedValueArrayUtils::
RemoveByPredicate<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed,TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed,_FDNAIndexMapping::MapControlCurves_::__l2::<lambda_1>_>
          (TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed> *param_1,
          TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed> *param_2,
          <lambda_1> param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  FIdentityFunctor local_res8;
  
  piVar1 = &(param_1->Elements).ArrayNum;
  local_res8 = SUB81(param_1,0);
  if (param_1->bSorted == false) {
    AlgoImpl::
    IntroSortInternal<UE::Anim::FCurveElementIndexed,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed>::FElementSortPredicate>
              ((FCurveElementIndexed *)(param_1->Elements).AllocatorInstance.Data,*piVar1,local_res8
               ,(FElementSortPredicate)local_res8);
    param_1->bSorted = true;
  }
  if (param_2->bSorted == false) {
    AlgoImpl::
    IntroSortInternal<UE::Anim::FCurveElementIndexed,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed>::FElementSortPredicate>
              ((FCurveElementIndexed *)(param_2->Elements).AllocatorInstance.Data,
               (param_2->Elements).ArrayNum,local_res8,(FElementSortPredicate)local_res8);
    param_2->bSorted = true;
  }
  iVar8 = *piVar1;
  uVar11 = 0;
  uVar9 = 0;
  if (0 < iVar8) {
    lVar13 = 0;
    lVar12 = 0;
    do {
      if ((param_2->Elements).ArrayNum <= (int)uVar9) {
        return;
      }
      uVar10 = ~uVar11 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar11 < iVar8) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar7 = (param_1->Elements).AllocatorInstance.Data;
      uVar6 = 0;
      if ((int)uVar9 < (param_2->Elements).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)((param_2->Elements).AllocatorInstance.Data + lVar13);
      lVar3 = *(longlong *)(pFVar7 + lVar12);
      if (lVar3 == lVar2) {
        uVar6 = 0;
        if ((int)uVar11 < *piVar1) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar7 = (param_1->Elements).AllocatorInstance.Data + lVar12;
        iVar8 = *piVar1 + ~uVar11;
        if (iVar8 != 0) {
          memmove(pFVar7,pFVar7 + 0x14,(longlong)iVar8 * 0x14);
        }
        *piVar1 = *piVar1 + -1;
LAB_14a65dc38:
        uVar9 = uVar9 + 1;
        lVar13 = lVar13 + 0x14;
      }
      else {
        iVar8 = (int)lVar3 - (int)lVar2;
        if (iVar8 == 0) {
          iVar8 = (int)((ulonglong)lVar3 >> 0x20) - (int)((ulonglong)lVar2 >> 0x20);
        }
        if (-1 < iVar8) goto LAB_14a65dc38;
        uVar11 = uVar11 + 1;
        lVar12 = lVar12 + 0x14;
      }
      iVar8 = *piVar1;
    } while ((int)uVar11 < iVar8);
  }
  return;
}

// RemoveByPredicate<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed,TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed,`FDNAIndexMapping::MapNeuralNetworkMaskCurves'::__l2::<lambda_1>_> @ 14a65dc90

void __cdecl
UE::Anim::FNamedValueArrayUtils::
RemoveByPredicate<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed,TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed,_FDNAIndexMapping::MapNeuralNetworkMaskCurves_::__l2::<lambda_1>_>
          (TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed> *param_1,
          TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed> *param_2,
          <lambda_1> param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  FIdentityFunctor local_res8;
  
  piVar1 = &(param_1->Elements).ArrayNum;
  local_res8 = SUB81(param_1,0);
  if (param_1->bSorted == false) {
    AlgoImpl::
    IntroSortInternal<UE::Anim::FCurveElementIndexed,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed>::FElementSortPredicate>
              ((FCurveElementIndexed *)(param_1->Elements).AllocatorInstance.Data,*piVar1,local_res8
               ,(FElementSortPredicate)local_res8);
    param_1->bSorted = true;
  }
  if (param_2->bSorted == false) {
    AlgoImpl::
    IntroSortInternal<UE::Anim::FCurveElementIndexed,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed>::FElementSortPredicate>
              ((FCurveElementIndexed *)(param_2->Elements).AllocatorInstance.Data,
               (param_2->Elements).ArrayNum,local_res8,(FElementSortPredicate)local_res8);
    param_2->bSorted = true;
  }
  iVar8 = *piVar1;
  uVar11 = 0;
  uVar9 = 0;
  if (0 < iVar8) {
    lVar13 = 0;
    lVar12 = 0;
    do {
      if ((param_2->Elements).ArrayNum <= (int)uVar9) {
        return;
      }
      uVar10 = ~uVar11 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar11 < iVar8) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar7 = (param_1->Elements).AllocatorInstance.Data;
      uVar6 = 0;
      if ((int)uVar9 < (param_2->Elements).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)((param_2->Elements).AllocatorInstance.Data + lVar13);
      lVar3 = *(longlong *)(pFVar7 + lVar12);
      if (lVar3 == lVar2) {
        uVar6 = 0;
        if ((int)uVar11 < *piVar1) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar7 = (param_1->Elements).AllocatorInstance.Data + lVar12;
        iVar8 = *piVar1 + ~uVar11;
        if (iVar8 != 0) {
          memmove(pFVar7,pFVar7 + 0x14,(longlong)iVar8 * 0x14);
        }
        *piVar1 = *piVar1 + -1;
LAB_14a65de68:
        uVar9 = uVar9 + 1;
        lVar13 = lVar13 + 0x14;
      }
      else {
        iVar8 = (int)lVar3 - (int)lVar2;
        if (iVar8 == 0) {
          iVar8 = (int)((ulonglong)lVar3 >> 0x20) - (int)((ulonglong)lVar2 >> 0x20);
        }
        if (-1 < iVar8) goto LAB_14a65de68;
        uVar11 = uVar11 + 1;
        lVar12 = lVar12 + 0x14;
      }
      iVar8 = *piVar1;
    } while ((int)uVar11 < iVar8);
  }
  return;
}

// RemoveByPredicate<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed,TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed,`FDNAIndexMapping::MapMaskMultipliers'::__l4::<lambda_1>_> @ 14a65dec0

void __cdecl
UE::Anim::FNamedValueArrayUtils::
RemoveByPredicate<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed,TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed,_FDNAIndexMapping::MapMaskMultipliers_::__l4::<lambda_1>_>
          (TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed> *param_1,
          TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed> *param_2,
          <lambda_1> param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  FIdentityFunctor local_res8;
  
  piVar1 = &(param_1->Elements).ArrayNum;
  local_res8 = SUB81(param_1,0);
  if (param_1->bSorted == false) {
    AlgoImpl::
    IntroSortInternal<UE::Anim::FCurveElementIndexed,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed>::FElementSortPredicate>
              ((FCurveElementIndexed *)(param_1->Elements).AllocatorInstance.Data,*piVar1,local_res8
               ,(FElementSortPredicate)local_res8);
    param_1->bSorted = true;
  }
  if (param_2->bSorted == false) {
    AlgoImpl::
    IntroSortInternal<UE::Anim::FCurveElementIndexed,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed>::FElementSortPredicate>
              ((FCurveElementIndexed *)(param_2->Elements).AllocatorInstance.Data,
               (param_2->Elements).ArrayNum,local_res8,(FElementSortPredicate)local_res8);
    param_2->bSorted = true;
  }
  iVar8 = *piVar1;
  uVar11 = 0;
  uVar9 = 0;
  if (0 < iVar8) {
    lVar13 = 0;
    lVar12 = 0;
    do {
      if ((param_2->Elements).ArrayNum <= (int)uVar9) {
        return;
      }
      uVar10 = ~uVar11 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar11 < iVar8) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar7 = (param_1->Elements).AllocatorInstance.Data;
      uVar6 = 0;
      if ((int)uVar9 < (param_2->Elements).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)((param_2->Elements).AllocatorInstance.Data + lVar13);
      lVar3 = *(longlong *)(pFVar7 + lVar12);
      if (lVar3 == lVar2) {
        uVar6 = 0;
        if ((int)uVar11 < *piVar1) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar7 = (param_1->Elements).AllocatorInstance.Data + lVar12;
        iVar8 = *piVar1 + ~uVar11;
        if (iVar8 != 0) {
          memmove(pFVar7,pFVar7 + 0x14,(longlong)iVar8 * 0x14);
        }
        *piVar1 = *piVar1 + -1;
LAB_14a65e098:
        uVar9 = uVar9 + 1;
        lVar13 = lVar13 + 0x14;
      }
      else {
        iVar8 = (int)lVar3 - (int)lVar2;
        if (iVar8 == 0) {
          iVar8 = (int)((ulonglong)lVar3 >> 0x20) - (int)((ulonglong)lVar2 >> 0x20);
        }
        if (-1 < iVar8) goto LAB_14a65e098;
        uVar11 = uVar11 + 1;
        lVar12 = lVar12 + 0x14;
      }
      iVar8 = *piVar1;
    } while ((int)uVar11 < iVar8);
  }
  return;
}

// RemoveByPredicate<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed,TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed,`FDNAIndexMapping::MapMorphTargets'::__l4::<lambda_1>_> @ 14a65e0f0

void __cdecl
UE::Anim::FNamedValueArrayUtils::
RemoveByPredicate<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed,TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed,_FDNAIndexMapping::MapMorphTargets_::__l4::<lambda_1>_>
          (TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed> *param_1,
          TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed> *param_2,
          <lambda_1> param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  FIdentityFunctor local_res8;
  
  piVar1 = &(param_1->Elements).ArrayNum;
  local_res8 = SUB81(param_1,0);
  if (param_1->bSorted == false) {
    AlgoImpl::
    IntroSortInternal<UE::Anim::FCurveElementIndexed,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed>::FElementSortPredicate>
              ((FCurveElementIndexed *)(param_1->Elements).AllocatorInstance.Data,*piVar1,local_res8
               ,(FElementSortPredicate)local_res8);
    param_1->bSorted = true;
  }
  if (param_2->bSorted == false) {
    AlgoImpl::
    IntroSortInternal<UE::Anim::FCurveElementIndexed,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed>::FElementSortPredicate>
              ((FCurveElementIndexed *)(param_2->Elements).AllocatorInstance.Data,
               (param_2->Elements).ArrayNum,local_res8,(FElementSortPredicate)local_res8);
    param_2->bSorted = true;
  }
  iVar8 = *piVar1;
  uVar11 = 0;
  uVar9 = 0;
  if (0 < iVar8) {
    lVar13 = 0;
    lVar12 = 0;
    do {
      if ((param_2->Elements).ArrayNum <= (int)uVar9) {
        return;
      }
      uVar10 = ~uVar11 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar11 < iVar8) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar7 = (param_1->Elements).AllocatorInstance.Data;
      uVar6 = 0;
      if ((int)uVar9 < (param_2->Elements).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)((param_2->Elements).AllocatorInstance.Data + lVar13);
      lVar3 = *(longlong *)(pFVar7 + lVar12);
      if (lVar3 == lVar2) {
        uVar6 = 0;
        if ((int)uVar11 < *piVar1) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar7 = (param_1->Elements).AllocatorInstance.Data + lVar12;
        iVar8 = *piVar1 + ~uVar11;
        if (iVar8 != 0) {
          memmove(pFVar7,pFVar7 + 0x14,(longlong)iVar8 * 0x14);
        }
        *piVar1 = *piVar1 + -1;
LAB_14a65e2c8:
        uVar9 = uVar9 + 1;
        lVar13 = lVar13 + 0x14;
      }
      else {
        iVar8 = (int)lVar3 - (int)lVar2;
        if (iVar8 == 0) {
          iVar8 = (int)((ulonglong)lVar3 >> 0x20) - (int)((ulonglong)lVar2 >> 0x20);
        }
        if (-1 < iVar8) goto LAB_14a65e2c8;
        uVar11 = uVar11 + 1;
        lVar12 = lVar12 + 0x14;
      }
      iVar8 = *piVar1;
    } while ((int)uVar11 < iVar8);
  }
  return;
}

// StaticEnum<enum_EActivationFunction> @ 14a65e320

UEnum * __cdecl StaticEnum<enum_EActivationFunction>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EActivationFunction.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigLogicModule();
    Z_Registration_Info_UEnum_EActivationFunction.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigLogicModule_EActivationFunction,(UObject *)pUVar1,
                       L"EActivationFunction");
  }
  return Z_Registration_Info_UEnum_EActivationFunction.OuterSingleton;
}

// StaticEnum<enum_EArchetype> @ 14a65e360

UEnum * __cdecl StaticEnum<enum_EArchetype>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EArchetype.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigLogicModule();
    Z_Registration_Info_UEnum_EArchetype.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigLogicModule_EArchetype,(UObject *)pUVar1,L"EArchetype");
  }
  return Z_Registration_Info_UEnum_EArchetype.OuterSingleton;
}

// StaticEnum<enum_EAutomaticRadius> @ 14a65e3a0

UEnum * __cdecl StaticEnum<enum_EAutomaticRadius>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAutomaticRadius.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigLogicModule();
    Z_Registration_Info_UEnum_EAutomaticRadius.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigLogicModule_EAutomaticRadius,(UObject *)pUVar1,
                       L"EAutomaticRadius");
  }
  return Z_Registration_Info_UEnum_EAutomaticRadius.OuterSingleton;
}

// StaticEnum<enum_EDNADataLayer> @ 14a65e3e0

UEnum * __cdecl StaticEnum<enum_EDNADataLayer>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDNADataLayer.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigLogicModule();
    Z_Registration_Info_UEnum_EDNADataLayer.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigLogicModule_EDNADataLayer,(UObject *)pUVar1,
                       L"EDNADataLayer");
  }
  return Z_Registration_Info_UEnum_EDNADataLayer.OuterSingleton;
}

// StaticEnum<enum_EDirection> @ 14a65e420

UEnum * __cdecl StaticEnum<enum_EDirection>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDirection.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigLogicModule();
    Z_Registration_Info_UEnum_EDirection.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigLogicModule_EDirection,(UObject *)pUVar1,L"EDirection");
  }
  return Z_Registration_Info_UEnum_EDirection.OuterSingleton;
}

// StaticEnum<enum_EGender> @ 14a65e460

UEnum * __cdecl StaticEnum<enum_EGender>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGender.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigLogicModule();
    Z_Registration_Info_UEnum_EGender.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigLogicModule_EGender,(UObject *)pUVar1,L"EGender");
  }
  return Z_Registration_Info_UEnum_EGender.OuterSingleton;
}

// StaticEnum<enum_ELodUpdateOption> @ 14a65e4a0

UEnum * __cdecl StaticEnum<enum_ELodUpdateOption>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELodUpdateOption.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigLogicModule();
    Z_Registration_Info_UEnum_ELodUpdateOption.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigLogicModule_ELodUpdateOption,(UObject *)pUVar1,
                       L"ELodUpdateOption");
  }
  return Z_Registration_Info_UEnum_ELodUpdateOption.OuterSingleton;
}

// StaticEnum<enum_ERigLogicCalculationType> @ 14a65e4e0

UEnum * __cdecl StaticEnum<enum_ERigLogicCalculationType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigLogicCalculationType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigLogicModule();
    Z_Registration_Info_UEnum_ERigLogicCalculationType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigLogicModule_ERigLogicCalculationType,(UObject *)pUVar1,
                       L"ERigLogicCalculationType");
  }
  return Z_Registration_Info_UEnum_ERigLogicCalculationType.OuterSingleton;
}

// StaticEnum<enum_ERigLogicRotationOrder> @ 14a65e520

UEnum * __cdecl StaticEnum<enum_ERigLogicRotationOrder>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigLogicRotationOrder.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigLogicModule();
    Z_Registration_Info_UEnum_ERigLogicRotationOrder.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigLogicModule_ERigLogicRotationOrder,(UObject *)pUVar1,
                       L"ERigLogicRotationOrder");
  }
  return Z_Registration_Info_UEnum_ERigLogicRotationOrder.OuterSingleton;
}

// StaticEnum<enum_ERigLogicRotationType> @ 14a65e560

UEnum * __cdecl StaticEnum<enum_ERigLogicRotationType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigLogicRotationType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigLogicModule();
    Z_Registration_Info_UEnum_ERigLogicRotationType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigLogicModule_ERigLogicRotationType,(UObject *)pUVar1,
                       L"ERigLogicRotationType");
  }
  return Z_Registration_Info_UEnum_ERigLogicRotationType.OuterSingleton;
}

// StaticEnum<enum_ERigLogicScaleType> @ 14a65e5a0

UEnum * __cdecl StaticEnum<enum_ERigLogicScaleType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigLogicScaleType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigLogicModule();
    Z_Registration_Info_UEnum_ERigLogicScaleType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigLogicModule_ERigLogicScaleType,(UObject *)pUVar1,
                       L"ERigLogicScaleType");
  }
  return Z_Registration_Info_UEnum_ERigLogicScaleType.OuterSingleton;
}

// StaticEnum<enum_ERigLogicTranslationType> @ 14a65e5e0

UEnum * __cdecl StaticEnum<enum_ERigLogicTranslationType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigLogicTranslationType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigLogicModule();
    Z_Registration_Info_UEnum_ERigLogicTranslationType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigLogicModule_ERigLogicTranslationType,(UObject *)pUVar1,
                       L"ERigLogicTranslationType");
  }
  return Z_Registration_Info_UEnum_ERigLogicTranslationType.OuterSingleton;
}

// StaticEnum<enum_ERotationRepresentation> @ 14a65e620

UEnum * __cdecl StaticEnum<enum_ERotationRepresentation>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERotationRepresentation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigLogicModule();
    Z_Registration_Info_UEnum_ERotationRepresentation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigLogicModule_ERotationRepresentation,(UObject *)pUVar1,
                       L"ERotationRepresentation");
  }
  return Z_Registration_Info_UEnum_ERotationRepresentation.OuterSingleton;
}

// StaticEnum<enum_ERotationUnit> @ 14a65e660

UEnum * __cdecl StaticEnum<enum_ERotationUnit>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERotationUnit.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigLogicModule();
    Z_Registration_Info_UEnum_ERotationUnit.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigLogicModule_ERotationUnit,(UObject *)pUVar1,
                       L"ERotationUnit");
  }
  return Z_Registration_Info_UEnum_ERotationUnit.OuterSingleton;
}

// StaticEnum<enum_EScaleRepresentation> @ 14a65e6a0

UEnum * __cdecl StaticEnum<enum_EScaleRepresentation>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EScaleRepresentation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigLogicModule();
    Z_Registration_Info_UEnum_EScaleRepresentation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigLogicModule_EScaleRepresentation,(UObject *)pUVar1,
                       L"EScaleRepresentation");
  }
  return Z_Registration_Info_UEnum_EScaleRepresentation.OuterSingleton;
}

// StaticEnum<enum_ETranslationRepresentation> @ 14a65e6e0

UEnum * __cdecl StaticEnum<enum_ETranslationRepresentation>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETranslationRepresentation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigLogicModule();
    Z_Registration_Info_UEnum_ETranslationRepresentation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigLogicModule_ETranslationRepresentation,(UObject *)pUVar1
                       ,L"ETranslationRepresentation");
  }
  return Z_Registration_Info_UEnum_ETranslationRepresentation.OuterSingleton;
}

// StaticEnum<enum_ETranslationUnit> @ 14a65e720

UEnum * __cdecl StaticEnum<enum_ETranslationUnit>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETranslationUnit.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigLogicModule();
    Z_Registration_Info_UEnum_ETranslationUnit.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigLogicModule_ETranslationUnit,(UObject *)pUVar1,
                       L"ETranslationUnit");
  }
  return Z_Registration_Info_UEnum_ETranslationUnit.OuterSingleton;
}

// StaticEnum<enum_ETwistAxis> @ 14a65e760

UEnum * __cdecl StaticEnum<enum_ETwistAxis>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETwistAxis.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigLogicModule();
    Z_Registration_Info_UEnum_ETwistAxis.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_RigLogicModule_ETwistAxis,(UObject *)pUVar1,L"ETwistAxis");
  }
  return Z_Registration_Info_UEnum_ETwistAxis.OuterSingleton;
}

// Union<`FAnimNode_RigLogic::UpdateAnimMapCurves'::__l2::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed> @ 14a65e900

void __cdecl
UE::Anim::FNamedValueArrayUtils::
Union<_FAnimNode_RigLogic::UpdateAnimMapCurves_::__l2::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed>
          (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *param_1,
          TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed> *param_2,
          <lambda_1> param_3)

{
  int *piVar1;
  FName *pFVar2;
  float fVar3;
  FName FVar4;
  FName FVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  float *pfVar10;
  FCurveElement *pFVar11;
  int iVar12;
  FCurveElement *pFVar13;
  FCurveElement *pFVar14;
  uint uVar15;
  FName *pFVar16;
  FIdentityFunctor local_res8;
  
  if ((param_1 == (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&InOutValueArray0 != (void*)&InValueArray1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\NamedValueArray.h"
                         ,0x10a,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar9 = (param_2->Elements).ArrayNum;
  iVar12 = (param_1->Elements).ArrayNum;
  if (iVar9 != 0) {
    if (param_1->bSorted == false) {
      AlgoImpl::
      IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::FElementSortPredicate>
                ((param_1->Elements).AllocatorInstance.Data,iVar12,local_res8,
                 (FElementSortPredicate)local_res8);
      param_1->bSorted = true;
    }
    if (param_2->bSorted == false) {
      AlgoImpl::
      IntroSortInternal<UE::Anim::FCurveElementIndexed,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed>::FElementSortPredicate>
                ((FCurveElementIndexed *)(param_2->Elements).AllocatorInstance.Data,
                 (param_2->Elements).ArrayNum,local_res8,(FElementSortPredicate)local_res8);
      param_2->bSorted = true;
    }
    iVar7 = iVar9;
    if (iVar9 < iVar12) {
      iVar7 = iVar12;
    }
    uVar15 = iVar7 / 2 + iVar7;
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
    }
    piVar1 = &(param_1->Elements).ArrayMax;
    if ((param_1->Elements).ArrayMax < (int)uVar15) {
      Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,uVar15,(ForElementType<UE::Anim::FCurveElement> *)param_1,
                 (param_1->Elements).ArrayNum,piVar1);
    }
    pFVar13 = (param_1->Elements).AllocatorInstance.Data;
    pFVar16 = (FName *)(param_2->Elements).AllocatorInstance.Data;
    pFVar14 = pFVar13 + iVar12;
    pFVar2 = (FName *)((longlong)pFVar16 + (longlong)iVar9 * 0x14);
    if (pFVar13 != pFVar14) {
      if (pFVar16 == pFVar2) {
        return;
      }
      do {
        while( true ) {
          FVar4 = *pFVar16;
          FVar5 = pFVar13->Name;
          if (FVar5 != FVar4) break;
          uVar15 = pFVar16[2].ComparisonIndex.Value;
          if ((-1 < (int)uVar15) && ((int)uVar15 < (param_3.AnimMapOutputs)->ArrayNum)) {
            pfVar10 = TArrayView<float_const_,int>::operator[](param_3.AnimMapOutputs,uVar15);
            pFVar13->Value = *pfVar10;
            pFVar13->Flags = pFVar13->Flags | Material;
          }
          pFVar13 = pFVar13 + 1;
          pFVar16 = (FName *)&pFVar16[2].Number;
          if ((pFVar13 == pFVar14) || (pFVar16 == pFVar2)) goto LAB_14a65eb2d;
        }
        iVar9 = FVar5.ComparisonIndex.Value.Value - FVar4.ComparisonIndex.Value;
        if (iVar9 == 0) {
          iVar9 = FVar5.Number - FVar4.Number;
        }
        if (iVar9 < 0) {
          pFVar13 = pFVar13 + 1;
          bVar8 = pFVar13 == pFVar14;
        }
        else {
          pFVar14 = (param_1->Elements).AllocatorInstance.Data;
          iVar9 = (param_1->Elements).ArrayNum;
          if (iVar9 == *piVar1) {
            iVar9 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                              (0x410,(ForElementType<UE::Anim::FCurveElement> *)param_1,piVar1);
          }
          pFVar11 = (param_1->Elements).AllocatorInstance.Data;
          iVar12 = (int)((longlong)pFVar13 - (longlong)pFVar14 >> 4);
          (param_1->Elements).ArrayNum = iVar9 + 1;
          pFVar11 = pFVar11 + iVar12;
          memmove(pFVar11 + 1,pFVar11,(longlong)(iVar9 - iVar12) << 4);
          pFVar14 = (param_1->Elements).AllocatorInstance.Data;
          uVar15 = pFVar16[2].ComparisonIndex.Value;
          pFVar13 = pFVar14 + iVar12;
          iVar9 = (param_1->Elements).ArrayNum;
          (pFVar13->Name).ComparisonIndex = 0;
          (pFVar13->Name).Number = 0;
          pFVar13->Value = 0.0;
          pFVar13->Flags = None;
          *(undefined3 *)&pFVar13->field_0xd = 0;
          pFVar14 = pFVar14 + iVar9;
          pFVar13->Value = 0.0;
          pFVar13->Name = FVar4;
          if ((-1 < (int)uVar15) && ((int)uVar15 < (param_3.AnimMapOutputs)->ArrayNum)) {
            pfVar10 = TArrayView<float_const_,int>::operator[](param_3.AnimMapOutputs,uVar15);
            fVar3 = *pfVar10;
            pFVar13->Flags = pFVar13->Flags | Material;
            pFVar13->Value = fVar3;
          }
          pFVar13 = pFVar13 + 1;
          pFVar16 = (FName *)&pFVar16[2].Number;
          bVar8 = pFVar16 == pFVar2;
        }
      } while (!bVar8);
    }
LAB_14a65eb2d:
    if (pFVar16 < pFVar2) {
      iVar9 = (param_1->Elements).ArrayNum;
      iVar12 = (int)(((longlong)pFVar2 - (longlong)pFVar16) / 0x14);
      uVar15 = iVar12 + iVar9;
      if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
      }
      if ((param_1->Elements).ArrayMax < (int)uVar15) {
        Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                  (0x10,4,uVar15,(ForElementType<UE::Anim::FCurveElement> *)param_1,iVar9,
                   &(param_1->Elements).ArrayMax);
      }
      Core::Private::ReallocGrow<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,iVar12,(ForElementType<UE::Anim::FCurveElement> *)param_1,
                 &(param_1->Elements).ArrayNum,&(param_1->Elements).ArrayMax);
      pFVar13 = (param_1->Elements).AllocatorInstance.Data + iVar9;
      do {
        FVar4 = *pFVar16;
        uVar15 = pFVar16[2].ComparisonIndex.Value;
        (pFVar13->Name).ComparisonIndex = 0;
        (pFVar13->Name).Number = 0;
        pFVar13->Value = 0.0;
        pFVar13->Flags = None;
        *(undefined3 *)&pFVar13->field_0xd = 0;
        pFVar13->Value = 0.0;
        pFVar13->Name = FVar4;
        if ((-1 < (int)uVar15) && ((int)uVar15 < (param_3.AnimMapOutputs)->ArrayNum)) {
          pfVar10 = TArrayView<float_const_,int>::operator[](param_3.AnimMapOutputs,uVar15);
          fVar3 = *pfVar10;
          pFVar13->Flags = pFVar13->Flags | Material;
          pFVar13->Value = fVar3;
        }
        pFVar13 = pFVar13 + 1;
        pFVar16 = (FName *)&pFVar16[2].Number;
      } while (pFVar16 < pFVar2);
    }
  }
  return;
}

// Union<`FAnimNode_RigLogic::UpdateBlendShapeCurves'::__l2::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed> @ 14a65ec30

void __cdecl
UE::Anim::FNamedValueArrayUtils::
Union<_FAnimNode_RigLogic::UpdateBlendShapeCurves_::__l2::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed>
          (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *param_1,
          TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed> *param_2,
          <lambda_1> param_3)

{
  int *piVar1;
  FName *pFVar2;
  float fVar3;
  FName FVar4;
  FName FVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  float *pfVar10;
  FCurveElement *pFVar11;
  int iVar12;
  FCurveElement *pFVar13;
  FCurveElement *pFVar14;
  uint uVar15;
  FName *pFVar16;
  FIdentityFunctor local_res8;
  
  if ((param_1 == (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&InOutValueArray0 != (void*)&InValueArray1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\NamedValueArray.h"
                         ,0x10a,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar9 = (param_2->Elements).ArrayNum;
  iVar12 = (param_1->Elements).ArrayNum;
  if (iVar9 != 0) {
    if (param_1->bSorted == false) {
      AlgoImpl::
      IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::FElementSortPredicate>
                ((param_1->Elements).AllocatorInstance.Data,iVar12,local_res8,
                 (FElementSortPredicate)local_res8);
      param_1->bSorted = true;
    }
    if (param_2->bSorted == false) {
      AlgoImpl::
      IntroSortInternal<UE::Anim::FCurveElementIndexed,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed>::FElementSortPredicate>
                ((FCurveElementIndexed *)(param_2->Elements).AllocatorInstance.Data,
                 (param_2->Elements).ArrayNum,local_res8,(FElementSortPredicate)local_res8);
      param_2->bSorted = true;
    }
    iVar7 = iVar9;
    if (iVar9 < iVar12) {
      iVar7 = iVar12;
    }
    uVar15 = iVar7 / 2 + iVar7;
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
    }
    piVar1 = &(param_1->Elements).ArrayMax;
    if ((param_1->Elements).ArrayMax < (int)uVar15) {
      Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,uVar15,(ForElementType<UE::Anim::FCurveElement> *)param_1,
                 (param_1->Elements).ArrayNum,piVar1);
    }
    pFVar13 = (param_1->Elements).AllocatorInstance.Data;
    pFVar16 = (FName *)(param_2->Elements).AllocatorInstance.Data;
    pFVar14 = pFVar13 + iVar12;
    pFVar2 = (FName *)((longlong)pFVar16 + (longlong)iVar9 * 0x14);
    if (pFVar13 != pFVar14) {
      if (pFVar16 == pFVar2) {
        return;
      }
      do {
        while( true ) {
          FVar4 = *pFVar16;
          FVar5 = pFVar13->Name;
          if (FVar5 != FVar4) break;
          uVar15 = pFVar16[2].ComparisonIndex.Value;
          if ((-1 < (int)uVar15) && ((int)uVar15 < (param_3.BlendShapeValues)->ArrayNum)) {
            pfVar10 = TArrayView<float_const_,int>::operator[](param_3.BlendShapeValues,uVar15);
            pFVar13->Value = *pfVar10;
            pFVar13->Flags = pFVar13->Flags | MorphTarget;
          }
          pFVar13 = pFVar13 + 1;
          pFVar16 = (FName *)&pFVar16[2].Number;
          if ((pFVar13 == pFVar14) || (pFVar16 == pFVar2)) goto LAB_14a65ee5d;
        }
        iVar9 = FVar5.ComparisonIndex.Value.Value - FVar4.ComparisonIndex.Value;
        if (iVar9 == 0) {
          iVar9 = FVar5.Number - FVar4.Number;
        }
        if (iVar9 < 0) {
          pFVar13 = pFVar13 + 1;
          bVar8 = pFVar13 == pFVar14;
        }
        else {
          pFVar14 = (param_1->Elements).AllocatorInstance.Data;
          iVar9 = (param_1->Elements).ArrayNum;
          if (iVar9 == *piVar1) {
            iVar9 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                              (0x410,(ForElementType<UE::Anim::FCurveElement> *)param_1,piVar1);
          }
          pFVar11 = (param_1->Elements).AllocatorInstance.Data;
          iVar12 = (int)((longlong)pFVar13 - (longlong)pFVar14 >> 4);
          (param_1->Elements).ArrayNum = iVar9 + 1;
          pFVar11 = pFVar11 + iVar12;
          memmove(pFVar11 + 1,pFVar11,(longlong)(iVar9 - iVar12) << 4);
          pFVar14 = (param_1->Elements).AllocatorInstance.Data;
          uVar15 = pFVar16[2].ComparisonIndex.Value;
          pFVar13 = pFVar14 + iVar12;
          iVar9 = (param_1->Elements).ArrayNum;
          (pFVar13->Name).ComparisonIndex = 0;
          (pFVar13->Name).Number = 0;
          pFVar13->Value = 0.0;
          pFVar13->Flags = None;
          *(undefined3 *)&pFVar13->field_0xd = 0;
          pFVar14 = pFVar14 + iVar9;
          pFVar13->Value = 0.0;
          pFVar13->Name = FVar4;
          if ((-1 < (int)uVar15) && ((int)uVar15 < (param_3.BlendShapeValues)->ArrayNum)) {
            pfVar10 = TArrayView<float_const_,int>::operator[](param_3.BlendShapeValues,uVar15);
            fVar3 = *pfVar10;
            pFVar13->Flags = pFVar13->Flags | MorphTarget;
            pFVar13->Value = fVar3;
          }
          pFVar13 = pFVar13 + 1;
          pFVar16 = (FName *)&pFVar16[2].Number;
          bVar8 = pFVar16 == pFVar2;
        }
      } while (!bVar8);
    }
LAB_14a65ee5d:
    if (pFVar16 < pFVar2) {
      iVar9 = (param_1->Elements).ArrayNum;
      iVar12 = (int)(((longlong)pFVar2 - (longlong)pFVar16) / 0x14);
      uVar15 = iVar12 + iVar9;
      if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
      }
      if ((param_1->Elements).ArrayMax < (int)uVar15) {
        Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                  (0x10,4,uVar15,(ForElementType<UE::Anim::FCurveElement> *)param_1,iVar9,
                   &(param_1->Elements).ArrayMax);
      }
      Core::Private::ReallocGrow<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,iVar12,(ForElementType<UE::Anim::FCurveElement> *)param_1,
                 &(param_1->Elements).ArrayNum,&(param_1->Elements).ArrayMax);
      pFVar13 = (param_1->Elements).AllocatorInstance.Data + iVar9;
      do {
        FVar4 = *pFVar16;
        uVar15 = pFVar16[2].ComparisonIndex.Value;
        (pFVar13->Name).ComparisonIndex = 0;
        (pFVar13->Name).Number = 0;
        pFVar13->Value = 0.0;
        pFVar13->Flags = None;
        *(undefined3 *)&pFVar13->field_0xd = 0;
        pFVar13->Value = 0.0;
        pFVar13->Name = FVar4;
        if ((-1 < (int)uVar15) && ((int)uVar15 < (param_3.BlendShapeValues)->ArrayNum)) {
          pfVar10 = TArrayView<float_const_,int>::operator[](param_3.BlendShapeValues,uVar15);
          fVar3 = *pfVar10;
          pFVar13->Flags = pFVar13->Flags | MorphTarget;
          pFVar13->Value = fVar3;
        }
        pFVar13 = pFVar13 + 1;
        pFVar16 = (FName *)&pFVar16[2].Number;
      } while (pFVar16 < pFVar2);
    }
  }
  return;
}

// Union<`FAnimNode_RigLogic::UpdateRawControls'::__l2::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed> @ 14a65ef60

/* WARNING: Type propagation algorithm not settling */

void __cdecl
UE::Anim::FNamedValueArrayUtils::
Union<_FAnimNode_RigLogic::UpdateRawControls_::__l2::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed>
          (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *param_1,
          TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed> *param_2,
          <lambda_1> param_3)

{
  int *piVar1;
  FCurveElement *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  longlong lVar5;
  RigInstance *pRVar6;
  code *pcVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  double dVar20;
  FIdentityFunctor local_res10;
  
  piVar1 = &(param_1->Elements).ArrayNum;
  local_res10 = SUB81(param_2,0);
  if (param_1->bSorted == false) {
    AlgoImpl::
    IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::FElementSortPredicate>
              ((param_1->Elements).AllocatorInstance.Data,*piVar1,local_res10,
               (FElementSortPredicate)local_res10);
    param_1->bSorted = true;
  }
  if (param_2->bSorted == false) {
    AlgoImpl::
    IntroSortInternal<UE::Anim::FCurveElementIndexed,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed>::FElementSortPredicate>
              ((FCurveElementIndexed *)(param_2->Elements).AllocatorInstance.Data,
               (param_2->Elements).ArrayNum,local_res10,(FElementSortPredicate)local_res10);
    param_2->bSorted = true;
  }
  dVar8 = __real_3ff0000000000000;
  lVar19 = (longlong)*piVar1;
  uVar14 = 0;
  lVar17 = (longlong)(param_2->Elements).ArrayNum;
  lVar18 = 0;
  uVar13 = 0;
  lVar12 = 0;
  lVar16 = 0;
  lVar15 = 0;
  while( true ) {
    if ((lVar12 == lVar19) && (lVar18 < lVar17)) {
      lVar12 = lVar18 * 0x14;
      lVar17 = lVar17 - lVar18;
      while( true ) {
        uVar14 = 0;
        if ((int)uVar13 < (param_2->Elements).ArrayNum) {
          uVar14 = ~uVar13 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) break;
        iVar11 = *(int *)((param_2->Elements).AllocatorInstance.Data + lVar12 + 0x10);
        if (iVar11 != -1) {
          pRVar6 = ((param_3.__this)->RigInstance->RigInstance).Ptr;
          (**(code **)((longlong)*pRVar6 + 0x40))(pRVar6,iVar11,0);
        }
        uVar13 = uVar13 + 1;
        lVar12 = lVar12 + 0x14;
        lVar17 = lVar17 + -1;
        if (lVar17 == 0) {
          return;
        }
      }
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((lVar18 == lVar17) && (lVar12 < lVar19)) {
      lVar19 = lVar19 - lVar12;
      while( true ) {
        uVar13 = 0;
        if ((int)uVar14 < (param_1->Elements).ArrayNum) {
          uVar13 = ~uVar14 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) break;
        uVar14 = uVar14 + 1;
        lVar19 = lVar19 + -1;
        if (lVar19 == 0) {
          return;
        }
      }
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((lVar12 == lVar19) && (lVar18 == lVar17)) {
      return;
    }
    uVar10 = 0;
    if ((int)uVar14 < *piVar1) {
      uVar10 = ~uVar14 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) break;
    pFVar2 = (param_1->Elements).AllocatorInstance.Data;
    uVar10 = 0;
    if ((int)uVar13 < (param_2->Elements).ArrayNum) {
      uVar10 = ~uVar13 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar3 = (param_2->Elements).AllocatorInstance.Data;
    lVar4 = *(longlong *)((longlong)&(pFVar2->Name).ComparisonIndex.Value + lVar15);
    lVar5 = *(longlong *)(pFVar3 + lVar16);
    if (lVar4 == lVar5) {
      if (*(int *)(pFVar3 + lVar16 + 0x10) != -1) {
        dVar20 = (double)*(float *)((longlong)&pFVar2->Value + lVar15);
        pRVar6 = ((param_3.__this)->RigInstance->RigInstance).Ptr;
        if (dVar8 <= dVar20) {
          dVar20 = dVar8;
        }
        if (dVar20 <= 0.0) {
          dVar20 = 0.0;
        }
        (**(code **)((longlong)*pRVar6 + 0x40))
                  (pRVar6,*(int *)(pFVar3 + lVar16 + 0x10),(float)dVar20);
      }
      uVar14 = uVar14 + 1;
      lVar12 = lVar12 + 1;
      lVar15 = lVar15 + 0x10;
      uVar13 = uVar13 + 1;
      lVar18 = lVar18 + 1;
      lVar16 = lVar16 + 0x14;
    }
    else {
      iVar11 = (int)lVar4 - (int)lVar5;
      if (iVar11 == 0) {
        iVar11 = (int)((ulonglong)lVar4 >> 0x20) - (int)((ulonglong)lVar5 >> 0x20);
      }
      if (iVar11 < 0) {
        uVar14 = uVar14 + 1;
        lVar12 = lVar12 + 1;
        lVar15 = lVar15 + 0x10;
      }
      else {
        if (*(int *)(pFVar3 + lVar16 + 0x10) != -1) {
          pRVar6 = ((param_3.__this)->RigInstance->RigInstance).Ptr;
          (**(code **)((longlong)*pRVar6 + 0x40))(pRVar6,*(int *)(pFVar3 + lVar16 + 0x10),0);
        }
        uVar13 = uVar13 + 1;
        lVar18 = lVar18 + 1;
        lVar16 = lVar16 + 0x14;
      }
    }
  }
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

// Union<`FAnimNode_RigLogic::UpdateNeuralNetworkMaskCurves'::__l5::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed> @ 14a65f310

void __cdecl
UE::Anim::FNamedValueArrayUtils::
Union<_FAnimNode_RigLogic::UpdateNeuralNetworkMaskCurves_::__l5::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed>
          (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *param_1,
          TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed> *param_2,
          <lambda_1> param_3)

{
  int *piVar1;
  FCurveElement *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  longlong lVar5;
  RigInstance *pRVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  FIdentityFunctor local_res10;
  
  piVar1 = &(param_1->Elements).ArrayNum;
  local_res10 = SUB81(param_2,0);
  if (param_1->bSorted == false) {
    AlgoImpl::
    IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::FElementSortPredicate>
              ((param_1->Elements).AllocatorInstance.Data,*piVar1,local_res10,
               (FElementSortPredicate)local_res10);
    param_1->bSorted = true;
  }
  if (param_2->bSorted == false) {
    AlgoImpl::
    IntroSortInternal<UE::Anim::FCurveElementIndexed,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed>::FElementSortPredicate>
              ((FCurveElementIndexed *)(param_2->Elements).AllocatorInstance.Data,
               (param_2->Elements).ArrayNum,local_res10,(FElementSortPredicate)local_res10);
    param_2->bSorted = true;
  }
  lVar18 = (longlong)*piVar1;
  uVar13 = 0;
  lVar16 = (longlong)(param_2->Elements).ArrayNum;
  lVar17 = 0;
  uVar12 = 0;
  lVar11 = 0;
  lVar15 = 0;
  lVar14 = 0;
  while( true ) {
    if ((lVar11 == lVar18) && (lVar17 < lVar16)) {
      lVar11 = lVar17 * 0x14;
      lVar16 = lVar16 - lVar17;
      while( true ) {
        uVar13 = 0;
        if ((int)uVar12 < (param_2->Elements).ArrayNum) {
          uVar13 = ~uVar12 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) break;
        iVar10 = *(int *)((param_2->Elements).AllocatorInstance.Data + lVar11 + 0x10);
        if (iVar10 != -1) {
          pRVar6 = ((param_3.__this)->RigInstance->RigInstance).Ptr;
          (**(code **)((longlong)*pRVar6 + 0x98))(pRVar6,iVar10,0);
        }
        uVar12 = uVar12 + 1;
        lVar11 = lVar11 + 0x14;
        lVar16 = lVar16 + -1;
        if (lVar16 == 0) {
          return;
        }
      }
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((lVar17 == lVar16) && (lVar11 < lVar18)) {
      lVar18 = lVar18 - lVar11;
      while( true ) {
        uVar12 = 0;
        if ((int)uVar13 < (param_1->Elements).ArrayNum) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) break;
        uVar13 = uVar13 + 1;
        lVar18 = lVar18 + -1;
        if (lVar18 == 0) {
          return;
        }
      }
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((lVar11 == lVar18) && (lVar17 == lVar16)) {
      return;
    }
    uVar9 = 0;
    if ((int)uVar13 < *piVar1) {
      uVar9 = ~uVar13 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) break;
    pFVar2 = (param_1->Elements).AllocatorInstance.Data;
    uVar9 = 0;
    if ((int)uVar12 < (param_2->Elements).ArrayNum) {
      uVar9 = ~uVar12 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar3 = (param_2->Elements).AllocatorInstance.Data;
    lVar4 = *(longlong *)((longlong)&(pFVar2->Name).ComparisonIndex.Value + lVar14);
    lVar5 = *(longlong *)(pFVar3 + lVar15);
    if (lVar4 == lVar5) {
      if (*(int *)(pFVar3 + lVar15 + 0x10) != -1) {
        pRVar6 = ((param_3.__this)->RigInstance->RigInstance).Ptr;
        (**(code **)((longlong)*pRVar6 + 0x98))
                  (pRVar6,*(int *)(pFVar3 + lVar15 + 0x10),
                   *(undefined4 *)((longlong)&pFVar2->Value + lVar14));
      }
      uVar13 = uVar13 + 1;
      lVar11 = lVar11 + 1;
      lVar14 = lVar14 + 0x10;
      uVar12 = uVar12 + 1;
      lVar17 = lVar17 + 1;
      lVar15 = lVar15 + 0x14;
    }
    else {
      iVar10 = (int)lVar4 - (int)lVar5;
      if (iVar10 == 0) {
        iVar10 = (int)((ulonglong)lVar4 >> 0x20) - (int)((ulonglong)lVar5 >> 0x20);
      }
      if (iVar10 < 0) {
        uVar13 = uVar13 + 1;
        lVar11 = lVar11 + 1;
        lVar14 = lVar14 + 0x10;
      }
      else {
        if (*(int *)(pFVar3 + lVar15 + 0x10) != -1) {
          pRVar6 = ((param_3.__this)->RigInstance->RigInstance).Ptr;
          (**(code **)((longlong)*pRVar6 + 0x98))(pRVar6,*(int *)(pFVar3 + lVar15 + 0x10),0);
        }
        uVar12 = uVar12 + 1;
        lVar17 = lVar17 + 1;
        lVar15 = lVar15 + 0x14;
      }
    }
  }
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

// makeScoped<dna::BinaryStreamReader,trio::BoundedIOStream_*_&,enum_dna::DataLayer,enum_dna::UnknownLayerPolicy,unsigned_short_&,pma::MemoryResource_*> @ 14a65f690

ScopedPtr<dna::BinaryStreamReader,pma::FactoryDestroy<dna::BinaryStreamReader,dna::BinaryStreamReader>_>
 __cdecl pma::
         makeScoped<dna::BinaryStreamReader,trio::BoundedIOStream_*_&,enum_dna::DataLayer,enum_dna::UnknownLayerPolicy,unsigned_short_&,pma::MemoryResource_*>
                   (BoundedIOStream **param_1,DataLayer *param_2,UnknownLayerPolicy *param_3,
                   ushort *param_4,MemoryResource **param_5)

{
  BinaryStreamReader *pBVar1;
  undefined8 *in_stack_00000030;
  
  pBVar1 = dna::BinaryStreamReader::create
                     (*(BoundedIOStream **)param_2,*param_3,*(UnknownLayerPolicy *)param_4,
                      *(ushort *)param_5,(MemoryResource *)*in_stack_00000030);
  *param_1 = (BoundedIOStream *)pBVar1;
  return (ScopedPtr<dna::BinaryStreamReader,pma::FactoryDestroy<dna::BinaryStreamReader,dna::BinaryStreamReader>_>
          )(BinaryStreamReader *)param_1;
}

// makeScoped<dna::BinaryStreamReader,FRigLogicMemoryStream_*,enum_dna::DataLayer,enum_dna::UnknownLayerPolicy,unsigned_short_&,pma::MemoryResource_*> @ 14a65f6f0

ScopedPtr<dna::BinaryStreamReader,pma::FactoryDestroy<dna::BinaryStreamReader,dna::BinaryStreamReader>_>
 __cdecl pma::
         makeScoped<dna::BinaryStreamReader,FRigLogicMemoryStream_*,enum_dna::DataLayer,enum_dna::UnknownLayerPolicy,unsigned_short_&,pma::MemoryResource_*>
                   (FRigLogicMemoryStream **param_1,DataLayer *param_2,UnknownLayerPolicy *param_3,
                   ushort *param_4,MemoryResource **param_5)

{
  BinaryStreamReader *pBVar1;
  undefined8 *in_stack_00000030;
  
  pBVar1 = dna::BinaryStreamReader::create
                     (*(BoundedIOStream **)param_2,*param_3,*(UnknownLayerPolicy *)param_4,
                      *(ushort *)param_5,(MemoryResource *)*in_stack_00000030);
  *param_1 = (FRigLogicMemoryStream *)pBVar1;
  return (ScopedPtr<dna::BinaryStreamReader,pma::FactoryDestroy<dna::BinaryStreamReader,dna::BinaryStreamReader>_>
          )(BinaryStreamReader *)param_1;
}

// makeScoped<dna::BinaryStreamReader,FRigLogicMemoryStream_*,enum_dna::DataLayer,enum_dna::UnknownLayerPolicy,unsigned_short_*,unsigned_short,pma::MemoryResource_*> @ 14a65f750

ScopedPtr<dna::BinaryStreamReader,pma::FactoryDestroy<dna::BinaryStreamReader,dna::BinaryStreamReader>_>
 __cdecl pma::
         makeScoped<dna::BinaryStreamReader,FRigLogicMemoryStream_*,enum_dna::DataLayer,enum_dna::UnknownLayerPolicy,unsigned_short_*,unsigned_short,pma::MemoryResource_*>
                   (FRigLogicMemoryStream **param_1,DataLayer *param_2,UnknownLayerPolicy *param_3,
                   ushort **param_4,ushort *param_5,MemoryResource **param_6)

{
  BinaryStreamReader *pBVar1;
  undefined8 *in_stack_00000038;
  
  pBVar1 = dna::BinaryStreamReader::create
                     (*(BoundedIOStream **)param_2,*param_3,*(UnknownLayerPolicy *)param_4,
                      *(ushort **)param_5,*(ushort *)param_6,(MemoryResource *)*in_stack_00000038);
  *param_1 = (FRigLogicMemoryStream *)pBVar1;
  return (ScopedPtr<dna::BinaryStreamReader,pma::FactoryDestroy<dna::BinaryStreamReader,dna::BinaryStreamReader>_>
          )(BinaryStreamReader *)param_1;
}

// makeScoped<dna::BinaryStreamReader,trio::MemoryMappedFileStream_*,enum_dna::DataLayer,enum_dna::UnknownLayerPolicy,unsigned_short_&,pma::MemoryResource_*> @ 14a65f7c0

ScopedPtr<dna::BinaryStreamReader,pma::FactoryDestroy<dna::BinaryStreamReader,dna::BinaryStreamReader>_>
 __cdecl pma::
         makeScoped<dna::BinaryStreamReader,trio::MemoryMappedFileStream_*,enum_dna::DataLayer,enum_dna::UnknownLayerPolicy,unsigned_short_&,pma::MemoryResource_*>
                   (MemoryMappedFileStream **param_1,DataLayer *param_2,UnknownLayerPolicy *param_3,
                   ushort *param_4,MemoryResource **param_5)

{
  BinaryStreamReader *pBVar1;
  undefined8 *in_stack_00000030;
  
  pBVar1 = dna::BinaryStreamReader::create
                     (*(BoundedIOStream **)param_2,*param_3,*(UnknownLayerPolicy *)param_4,
                      *(ushort *)param_5,(MemoryResource *)*in_stack_00000030);
  *param_1 = (MemoryMappedFileStream *)pBVar1;
  return (ScopedPtr<dna::BinaryStreamReader,pma::FactoryDestroy<dna::BinaryStreamReader,dna::BinaryStreamReader>_>
          )(BinaryStreamReader *)param_1;
}

// makeScoped<dna::BinaryStreamReader,trio::MemoryMappedFileStream_*,enum_dna::DataLayer,enum_dna::UnknownLayerPolicy,unsigned_short_*,unsigned_short,pma::MemoryResource_*> @ 14a65f820

ScopedPtr<dna::BinaryStreamReader,pma::FactoryDestroy<dna::BinaryStreamReader,dna::BinaryStreamReader>_>
 __cdecl pma::
         makeScoped<dna::BinaryStreamReader,trio::MemoryMappedFileStream_*,enum_dna::DataLayer,enum_dna::UnknownLayerPolicy,unsigned_short_*,unsigned_short,pma::MemoryResource_*>
                   (MemoryMappedFileStream **param_1,DataLayer *param_2,UnknownLayerPolicy *param_3,
                   ushort **param_4,ushort *param_5,MemoryResource **param_6)

{
  BinaryStreamReader *pBVar1;
  undefined8 *in_stack_00000038;
  
  pBVar1 = dna::BinaryStreamReader::create
                     (*(BoundedIOStream **)param_2,*param_3,*(UnknownLayerPolicy *)param_4,
                      *(ushort **)param_5,*(ushort *)param_6,(MemoryResource *)*in_stack_00000038);
  *param_1 = (MemoryMappedFileStream *)pBVar1;
  return (ScopedPtr<dna::BinaryStreamReader,pma::FactoryDestroy<dna::BinaryStreamReader,dna::BinaryStreamReader>_>
          )(BinaryStreamReader *)param_1;
}

// makeScoped<dna::BinaryStreamReader,trio::MemoryStream_*> @ 14a65f890

ScopedPtr<dna::BinaryStreamReader,pma::FactoryDestroy<dna::BinaryStreamReader,dna::BinaryStreamReader>_>
 __cdecl pma::makeScoped<dna::BinaryStreamReader,trio::MemoryStream_*>(MemoryStream **param_1)

{
  BinaryStreamReader *pBVar1;
  undefined8 *in_RDX;
  
  pBVar1 = dna::BinaryStreamReader::create
                     ((BoundedIOStream *)*in_RDX,All,Preserve,0,(MemoryResource *)0x0);
  *param_1 = (MemoryStream *)pBVar1;
  return (ScopedPtr<dna::BinaryStreamReader,pma::FactoryDestroy<dna::BinaryStreamReader,dna::BinaryStreamReader>_>
          )(BinaryStreamReader *)param_1;
}

// makeScoped<dna::BinaryStreamReader,pma::FactoryCreate<dna::BinaryStreamReader,dna::BinaryStreamReader>,pma::FactoryDestroy<dna::BinaryStreamReader,dna::BinaryStreamReader>,trio::BoundedIOStream_*_&,enum_dna::DataLayer,enum_dna::UnknownLayerPolicy,unsigned_short_&,pma::MemoryResource_*,dna::BinaryStreamReader> @ 14a65f8d0

ScopedPtr<dna::BinaryStreamReader,pma::FactoryDestroy<dna::BinaryStreamReader,dna::BinaryStreamReader>_>
 __cdecl pma::
         makeScoped<dna::BinaryStreamReader,pma::FactoryCreate<dna::BinaryStreamReader,dna::BinaryStreamReader>,pma::FactoryDestroy<dna::BinaryStreamReader,dna::BinaryStreamReader>,trio::BoundedIOStream_*_&,enum_dna::DataLayer,enum_dna::UnknownLayerPolicy,unsigned_short_&,pma::MemoryResource_*,dna::BinaryStreamReader>
                   (BoundedIOStream **param_1,DataLayer *param_2,UnknownLayerPolicy *param_3,
                   ushort *param_4,MemoryResource **param_5)

{
  BinaryStreamReader *pBVar1;
  undefined8 *in_stack_00000030;
  
  pBVar1 = dna::BinaryStreamReader::create
                     (*(BoundedIOStream **)param_2,*param_3,*(UnknownLayerPolicy *)param_4,
                      *(ushort *)param_5,(MemoryResource *)*in_stack_00000030);
  *param_1 = (BoundedIOStream *)pBVar1;
  return (ScopedPtr<dna::BinaryStreamReader,pma::FactoryDestroy<dna::BinaryStreamReader,dna::BinaryStreamReader>_>
          )(BinaryStreamReader *)param_1;
}

// makeScoped<dna::BinaryStreamReader,pma::FactoryCreate<dna::BinaryStreamReader,dna::BinaryStreamReader>,pma::FactoryDestroy<dna::BinaryStreamReader,dna::BinaryStreamReader>,FRigLogicMemoryStream_*,enum_dna::DataLayer,enum_dna::UnknownLayerPolicy,unsigned_short_&,pma::MemoryResource_*,dna::BinaryStreamReader> @ 14a65f930

ScopedPtr<dna::BinaryStreamReader,pma::FactoryDestroy<dna::BinaryStreamReader,dna::BinaryStreamReader>_>
 __cdecl pma::
         makeScoped<dna::BinaryStreamReader,pma::FactoryCreate<dna::BinaryStreamReader,dna::BinaryStreamReader>,pma::FactoryDestroy<dna::BinaryStreamReader,dna::BinaryStreamReader>,FRigLogicMemoryStream_*,enum_dna::DataLayer,enum_dna::UnknownLayerPolicy,unsigned_short_&,pma::MemoryResource_*,dna::BinaryStreamReader>
                   (FRigLogicMemoryStream **param_1,DataLayer *param_2,UnknownLayerPolicy *param_3,
                   ushort *param_4,MemoryResource **param_5)

{
  BinaryStreamReader *pBVar1;
  undefined8 *in_stack_00000030;
  
  pBVar1 = dna::BinaryStreamReader::create
                     (*(BoundedIOStream **)param_2,*param_3,*(UnknownLayerPolicy *)param_4,
                      *(ushort *)param_5,(MemoryResource *)*in_stack_00000030);
  *param_1 = (FRigLogicMemoryStream *)pBVar1;
  return (ScopedPtr<dna::BinaryStreamReader,pma::FactoryDestroy<dna::BinaryStreamReader,dna::BinaryStreamReader>_>
          )(BinaryStreamReader *)param_1;
}

// makeScoped<dna::BinaryStreamReader,pma::FactoryCreate<dna::BinaryStreamReader,dna::BinaryStreamReader>,pma::FactoryDestroy<dna::BinaryStreamReader,dna::BinaryStreamReader>,FRigLogicMemoryStream_*,enum_dna::DataLayer,enum_dna::UnknownLayerPolicy,unsigned_short_*,unsigned_short,pma::MemoryResource_*,dna::BinaryStreamReader> @ 14a65f990

ScopedPtr<dna::BinaryStreamReader,pma::FactoryDestroy<dna::BinaryStreamReader,dna::BinaryStreamReader>_>
 __cdecl pma::
         makeScoped<dna::BinaryStreamReader,pma::FactoryCreate<dna::BinaryStreamReader,dna::BinaryStreamReader>,pma::FactoryDestroy<dna::BinaryStreamReader,dna::BinaryStreamReader>,FRigLogicMemoryStream_*,enum_dna::DataLayer,enum_dna::UnknownLayerPolicy,unsigned_short_*,unsigned_short,pma::MemoryResource_*,dna::BinaryStreamReader>
                   (FRigLogicMemoryStream **param_1,DataLayer *param_2,UnknownLayerPolicy *param_3,
                   ushort **param_4,ushort *param_5,MemoryResource **param_6)

{
  BinaryStreamReader *pBVar1;
  undefined8 *in_stack_00000038;
  
  pBVar1 = dna::BinaryStreamReader::create
                     (*(BoundedIOStream **)param_2,*param_3,*(UnknownLayerPolicy *)param_4,
                      *(ushort **)param_5,*(ushort *)param_6,(MemoryResource *)*in_stack_00000038);
  *param_1 = (FRigLogicMemoryStream *)pBVar1;
  return (ScopedPtr<dna::BinaryStreamReader,pma::FactoryDestroy<dna::BinaryStreamReader,dna::BinaryStreamReader>_>
          )(BinaryStreamReader *)param_1;
}

// makeScoped<dna::BinaryStreamReader,pma::FactoryCreate<dna::BinaryStreamReader,dna::BinaryStreamReader>,pma::FactoryDestroy<dna::BinaryStreamReader,dna::BinaryStreamReader>,trio::MemoryMappedFileStream_*,enum_dna::DataLayer,enum_dna::UnknownLayerPolicy,unsigned_short_&,pma::MemoryResource_*,dna::BinaryStreamReader> @ 14a65fa00

ScopedPtr<dna::BinaryStreamReader,pma::FactoryDestroy<dna::BinaryStreamReader,dna::BinaryStreamReader>_>
 __cdecl pma::
         makeScoped<dna::BinaryStreamReader,pma::FactoryCreate<dna::BinaryStreamReader,dna::BinaryStreamReader>,pma::FactoryDestroy<dna::BinaryStreamReader,dna::BinaryStreamReader>,trio::MemoryMappedFileStream_*,enum_dna::DataLayer,enum_dna::UnknownLayerPolicy,unsigned_short_&,pma::MemoryResource_*,dna::BinaryStreamReader>
                   (MemoryMappedFileStream **param_1,DataLayer *param_2,UnknownLayerPolicy *param_3,
                   ushort *param_4,MemoryResource **param_5)

{
  BinaryStreamReader *pBVar1;
  undefined8 *in_stack_00000030;
  
  pBVar1 = dna::BinaryStreamReader::create
                     (*(BoundedIOStream **)param_2,*param_3,*(UnknownLayerPolicy *)param_4,
                      *(ushort *)param_5,(MemoryResource *)*in_stack_00000030);
  *param_1 = (MemoryMappedFileStream *)pBVar1;
  return (ScopedPtr<dna::BinaryStreamReader,pma::FactoryDestroy<dna::BinaryStreamReader,dna::BinaryStreamReader>_>
          )(BinaryStreamReader *)param_1;
}

// makeScoped<dna::BinaryStreamReader,pma::FactoryCreate<dna::BinaryStreamReader,dna::BinaryStreamReader>,pma::FactoryDestroy<dna::BinaryStreamReader,dna::BinaryStreamReader>,trio::MemoryMappedFileStream_*,enum_dna::DataLayer,enum_dna::UnknownLayerPolicy,unsigned_short_*,unsigned_short,pma::MemoryResource_*,dna::BinaryStreamReader> @ 14a65fa60

ScopedPtr<dna::BinaryStreamReader,pma::FactoryDestroy<dna::BinaryStreamReader,dna::BinaryStreamReader>_>
 __cdecl pma::
         makeScoped<dna::BinaryStreamReader,pma::FactoryCreate<dna::BinaryStreamReader,dna::BinaryStreamReader>,pma::FactoryDestroy<dna::BinaryStreamReader,dna::BinaryStreamReader>,trio::MemoryMappedFileStream_*,enum_dna::DataLayer,enum_dna::UnknownLayerPolicy,unsigned_short_*,unsigned_short,pma::MemoryResource_*,dna::BinaryStreamReader>
                   (MemoryMappedFileStream **param_1,DataLayer *param_2,UnknownLayerPolicy *param_3,
                   ushort **param_4,ushort *param_5,MemoryResource **param_6)

{
  BinaryStreamReader *pBVar1;
  undefined8 *in_stack_00000038;
  
  pBVar1 = dna::BinaryStreamReader::create
                     (*(BoundedIOStream **)param_2,*param_3,*(UnknownLayerPolicy *)param_4,
                      *(ushort **)param_5,*(ushort *)param_6,(MemoryResource *)*in_stack_00000038);
  *param_1 = (MemoryMappedFileStream *)pBVar1;
  return (ScopedPtr<dna::BinaryStreamReader,pma::FactoryDestroy<dna::BinaryStreamReader,dna::BinaryStreamReader>_>
          )(BinaryStreamReader *)param_1;
}

// makeScoped<dna::BinaryStreamReader,pma::FactoryCreate<dna::BinaryStreamReader,dna::BinaryStreamReader>,pma::FactoryDestroy<dna::BinaryStreamReader,dna::BinaryStreamReader>,trio::MemoryStream_*,dna::BinaryStreamReader> @ 14a65fad0

ScopedPtr<dna::BinaryStreamReader,pma::FactoryDestroy<dna::BinaryStreamReader,dna::BinaryStreamReader>_>
 __cdecl pma::
         makeScoped<dna::BinaryStreamReader,pma::FactoryCreate<dna::BinaryStreamReader,dna::BinaryStreamReader>,pma::FactoryDestroy<dna::BinaryStreamReader,dna::BinaryStreamReader>,trio::MemoryStream_*,dna::BinaryStreamReader>
                   (MemoryStream **param_1)

{
  BinaryStreamReader *pBVar1;
  undefined8 *in_RDX;
  
  pBVar1 = dna::BinaryStreamReader::create
                     ((BoundedIOStream *)*in_RDX,All,Preserve,0,(MemoryResource *)0x0);
  *param_1 = (MemoryStream *)pBVar1;
  return (ScopedPtr<dna::BinaryStreamReader,pma::FactoryDestroy<dna::BinaryStreamReader,dna::BinaryStreamReader>_>
          )(BinaryStreamReader *)param_1;
}

// makeScoped<dna::BinaryStreamWriter,trio::BoundedIOStream_*_&,pma::MemoryResource_*> @ 14a65fb10

ScopedPtr<dna::BinaryStreamWriter,pma::FactoryDestroy<dna::BinaryStreamWriter,dna::BinaryStreamWriter>_>
 __cdecl pma::makeScoped<dna::BinaryStreamWriter,trio::BoundedIOStream_*_&,pma::MemoryResource_*>
                   (BoundedIOStream **param_1,MemoryResource **param_2)

{
  BinaryStreamWriter *pBVar1;
  undefined8 *in_R8;
  
  pBVar1 = dna::BinaryStreamWriter::create((BoundedIOStream *)*param_2,(MemoryResource *)*in_R8);
  *param_1 = (BoundedIOStream *)pBVar1;
  return (ScopedPtr<dna::BinaryStreamWriter,pma::FactoryDestroy<dna::BinaryStreamWriter,dna::BinaryStreamWriter>_>
          )(BinaryStreamWriter *)param_1;
}

// makeScoped<dna::BinaryStreamWriter,trio::FileStream_*,pma::MemoryResource_*> @ 14a65fb40

ScopedPtr<dna::BinaryStreamWriter,pma::FactoryDestroy<dna::BinaryStreamWriter,dna::BinaryStreamWriter>_>
 __cdecl pma::makeScoped<dna::BinaryStreamWriter,trio::FileStream_*,pma::MemoryResource_*>
                   (FileStream **param_1,MemoryResource **param_2)

{
  BinaryStreamWriter *pBVar1;
  undefined8 *in_R8;
  
  pBVar1 = dna::BinaryStreamWriter::create((BoundedIOStream *)*param_2,(MemoryResource *)*in_R8);
  *param_1 = (FileStream *)pBVar1;
  return (ScopedPtr<dna::BinaryStreamWriter,pma::FactoryDestroy<dna::BinaryStreamWriter,dna::BinaryStreamWriter>_>
          )(BinaryStreamWriter *)param_1;
}

// makeScoped<dna::BinaryStreamWriter,trio::MemoryStream_*> @ 14a65fb70

ScopedPtr<dna::BinaryStreamWriter,pma::FactoryDestroy<dna::BinaryStreamWriter,dna::BinaryStreamWriter>_>
 __cdecl pma::makeScoped<dna::BinaryStreamWriter,trio::MemoryStream_*>(MemoryStream **param_1)

{
  BinaryStreamWriter *pBVar1;
  undefined8 *in_RDX;
  
  pBVar1 = dna::BinaryStreamWriter::create((BoundedIOStream *)*in_RDX,(MemoryResource *)0x0);
  *param_1 = (MemoryStream *)pBVar1;
  return (ScopedPtr<dna::BinaryStreamWriter,pma::FactoryDestroy<dna::BinaryStreamWriter,dna::BinaryStreamWriter>_>
          )(BinaryStreamWriter *)param_1;
}

// makeScoped<dna::BinaryStreamWriter,trio::MemoryStream_*,pma::MemoryResource_*> @ 14a65fba0

ScopedPtr<dna::BinaryStreamWriter,pma::FactoryDestroy<dna::BinaryStreamWriter,dna::BinaryStreamWriter>_>
 __cdecl pma::makeScoped<dna::BinaryStreamWriter,trio::MemoryStream_*,pma::MemoryResource_*>
                   (MemoryStream **param_1,MemoryResource **param_2)

{
  BinaryStreamWriter *pBVar1;
  undefined8 *in_R8;
  
  pBVar1 = dna::BinaryStreamWriter::create((BoundedIOStream *)*param_2,(MemoryResource *)*in_R8);
  *param_1 = (MemoryStream *)pBVar1;
  return (ScopedPtr<dna::BinaryStreamWriter,pma::FactoryDestroy<dna::BinaryStreamWriter,dna::BinaryStreamWriter>_>
          )(BinaryStreamWriter *)param_1;
}

// makeScoped<dna::BinaryStreamWriter,pma::FactoryCreate<dna::BinaryStreamWriter,dna::BinaryStreamWriter>,pma::FactoryDestroy<dna::BinaryStreamWriter,dna::BinaryStreamWriter>,trio::BoundedIOStream_*_&,pma::MemoryResource_*,dna::BinaryStreamWriter> @ 14a65fbd0

ScopedPtr<dna::BinaryStreamWriter,pma::FactoryDestroy<dna::BinaryStreamWriter,dna::BinaryStreamWriter>_>
 __cdecl pma::
         makeScoped<dna::BinaryStreamWriter,pma::FactoryCreate<dna::BinaryStreamWriter,dna::BinaryStreamWriter>,pma::FactoryDestroy<dna::BinaryStreamWriter,dna::BinaryStreamWriter>,trio::BoundedIOStream_*_&,pma::MemoryResource_*,dna::BinaryStreamWriter>
                   (BoundedIOStream **param_1,MemoryResource **param_2)

{
  BinaryStreamWriter *pBVar1;
  undefined8 *in_R8;
  
  pBVar1 = dna::BinaryStreamWriter::create((BoundedIOStream *)*param_2,(MemoryResource *)*in_R8);
  *param_1 = (BoundedIOStream *)pBVar1;
  return (ScopedPtr<dna::BinaryStreamWriter,pma::FactoryDestroy<dna::BinaryStreamWriter,dna::BinaryStreamWriter>_>
          )(BinaryStreamWriter *)param_1;
}

// makeScoped<dna::BinaryStreamWriter,pma::FactoryCreate<dna::BinaryStreamWriter,dna::BinaryStreamWriter>,pma::FactoryDestroy<dna::BinaryStreamWriter,dna::BinaryStreamWriter>,trio::FileStream_*,pma::MemoryResource_*,dna::BinaryStreamWriter> @ 14a65fc00

ScopedPtr<dna::BinaryStreamWriter,pma::FactoryDestroy<dna::BinaryStreamWriter,dna::BinaryStreamWriter>_>
 __cdecl pma::
         makeScoped<dna::BinaryStreamWriter,pma::FactoryCreate<dna::BinaryStreamWriter,dna::BinaryStreamWriter>,pma::FactoryDestroy<dna::BinaryStreamWriter,dna::BinaryStreamWriter>,trio::FileStream_*,pma::MemoryResource_*,dna::BinaryStreamWriter>
                   (FileStream **param_1,MemoryResource **param_2)

{
  BinaryStreamWriter *pBVar1;
  undefined8 *in_R8;
  
  pBVar1 = dna::BinaryStreamWriter::create((BoundedIOStream *)*param_2,(MemoryResource *)*in_R8);
  *param_1 = (FileStream *)pBVar1;
  return (ScopedPtr<dna::BinaryStreamWriter,pma::FactoryDestroy<dna::BinaryStreamWriter,dna::BinaryStreamWriter>_>
          )(BinaryStreamWriter *)param_1;
}

// makeScoped<dna::BinaryStreamWriter,pma::FactoryCreate<dna::BinaryStreamWriter,dna::BinaryStreamWriter>,pma::FactoryDestroy<dna::BinaryStreamWriter,dna::BinaryStreamWriter>,trio::MemoryStream_*,pma::MemoryResource_*,dna::BinaryStreamWriter> @ 14a65fc30

ScopedPtr<dna::BinaryStreamWriter,pma::FactoryDestroy<dna::BinaryStreamWriter,dna::BinaryStreamWriter>_>
 __cdecl pma::
         makeScoped<dna::BinaryStreamWriter,pma::FactoryCreate<dna::BinaryStreamWriter,dna::BinaryStreamWriter>,pma::FactoryDestroy<dna::BinaryStreamWriter,dna::BinaryStreamWriter>,trio::MemoryStream_*,pma::MemoryResource_*,dna::BinaryStreamWriter>
                   (MemoryStream **param_1,MemoryResource **param_2)

{
  BinaryStreamWriter *pBVar1;
  undefined8 *in_R8;
  
  pBVar1 = dna::BinaryStreamWriter::create((BoundedIOStream *)*param_2,(MemoryResource *)*in_R8);
  *param_1 = (MemoryStream *)pBVar1;
  return (ScopedPtr<dna::BinaryStreamWriter,pma::FactoryDestroy<dna::BinaryStreamWriter,dna::BinaryStreamWriter>_>
          )(BinaryStreamWriter *)param_1;
}

// makeScoped<dna::BinaryStreamWriter,pma::FactoryCreate<dna::BinaryStreamWriter,dna::BinaryStreamWriter>,pma::FactoryDestroy<dna::BinaryStreamWriter,dna::BinaryStreamWriter>,trio::MemoryStream_*,dna::BinaryStreamWriter> @ 14a65fc60

ScopedPtr<dna::BinaryStreamWriter,pma::FactoryDestroy<dna::BinaryStreamWriter,dna::BinaryStreamWriter>_>
 __cdecl pma::
         makeScoped<dna::BinaryStreamWriter,pma::FactoryCreate<dna::BinaryStreamWriter,dna::BinaryStreamWriter>,pma::FactoryDestroy<dna::BinaryStreamWriter,dna::BinaryStreamWriter>,trio::MemoryStream_*,dna::BinaryStreamWriter>
                   (MemoryStream **param_1)

{
  BinaryStreamWriter *pBVar1;
  undefined8 *in_RDX;
  
  pBVar1 = dna::BinaryStreamWriter::create((BoundedIOStream *)*in_RDX,(MemoryResource *)0x0);
  *param_1 = (MemoryStream *)pBVar1;
  return (ScopedPtr<dna::BinaryStreamWriter,pma::FactoryDestroy<dna::BinaryStreamWriter,dna::BinaryStreamWriter>_>
          )(BinaryStreamWriter *)param_1;
}

// makeScoped<trio::FileStream,char_*,enum_trio::AccessMode,enum_trio::OpenMode,pma::MemoryResource_*> @ 14a65fc90

ScopedPtr<trio::FileStream,pma::FactoryDestroy<trio::FileStream,trio::FileStream>_> __cdecl
pma::
makeScoped<trio::FileStream,char_*,enum_trio::AccessMode,enum_trio::OpenMode,pma::MemoryResource_*>
          (char **param_1,AccessMode *param_2,OpenMode *param_3,MemoryResource **param_4)

{
  FileStream *pFVar1;
  undefined8 *in_stack_00000028;
  
  pFVar1 = trio::FileStream::create
                     (*(char **)param_2,*param_3,*(OpenMode *)param_4,
                      (MemoryResource *)*in_stack_00000028);
  *param_1 = (char *)pFVar1;
  return (ScopedPtr<trio::FileStream,pma::FactoryDestroy<trio::FileStream,trio::FileStream>_>)
         (FileStream *)param_1;
}

// makeScoped<trio::FileStream,pma::FactoryCreate<trio::FileStream,trio::FileStream>,pma::FactoryDestroy<trio::FileStream,trio::FileStream>,char_*,enum_trio::AccessMode,enum_trio::OpenMode,pma::MemoryResource_*,trio::FileStream> @ 14a65fcd0

ScopedPtr<trio::FileStream,pma::FactoryDestroy<trio::FileStream,trio::FileStream>_> __cdecl
pma::
makeScoped<trio::FileStream,pma::FactoryCreate<trio::FileStream,trio::FileStream>,pma::FactoryDestroy<trio::FileStream,trio::FileStream>,char_*,enum_trio::AccessMode,enum_trio::OpenMode,pma::MemoryResource_*,trio::FileStream>
          (char **param_1,AccessMode *param_2,OpenMode *param_3,MemoryResource **param_4)

{
  FileStream *pFVar1;
  undefined8 *in_stack_00000028;
  
  pFVar1 = trio::FileStream::create
                     (*(char **)param_2,*param_3,*(OpenMode *)param_4,
                      (MemoryResource *)*in_stack_00000028);
  *param_1 = (char *)pFVar1;
  return (ScopedPtr<trio::FileStream,pma::FactoryDestroy<trio::FileStream,trio::FileStream>_>)
         (FileStream *)param_1;
}

// makeScoped<trio::MemoryMappedFileStream,char_*,enum_trio::AccessMode,pma::MemoryResource_*> @ 14a65fd10

ScopedPtr<trio::MemoryMappedFileStream,pma::FactoryDestroy<trio::MemoryMappedFileStream,trio::MemoryMappedFileStream>_>
 __cdecl pma::
         makeScoped<trio::MemoryMappedFileStream,char_*,enum_trio::AccessMode,pma::MemoryResource_*>
                   (char **param_1,AccessMode *param_2,MemoryResource **param_3)

{
  MemoryMappedFileStream *pMVar1;
  undefined8 *in_R9;
  
  pMVar1 = trio::MemoryMappedFileStream::create
                     (*(char **)param_2,*(AccessMode *)param_3,(MemoryResource *)*in_R9);
  *param_1 = (char *)pMVar1;
  return (ScopedPtr<trio::MemoryMappedFileStream,pma::FactoryDestroy<trio::MemoryMappedFileStream,trio::MemoryMappedFileStream>_>
          )(MemoryMappedFileStream *)param_1;
}

// makeScoped<trio::MemoryMappedFileStream,pma::FactoryCreate<trio::MemoryMappedFileStream,trio::MemoryMappedFileStream>,pma::FactoryDestroy<trio::MemoryMappedFileStream,trio::MemoryMappedFileStream>,char_*,enum_trio::AccessMode,pma::MemoryResource_*,trio::MemoryMappedFileStream> @ 14a65fd40

ScopedPtr<trio::MemoryMappedFileStream,pma::FactoryDestroy<trio::MemoryMappedFileStream,trio::MemoryMappedFileStream>_>
 __cdecl pma::
         makeScoped<trio::MemoryMappedFileStream,pma::FactoryCreate<trio::MemoryMappedFileStream,trio::MemoryMappedFileStream>,pma::FactoryDestroy<trio::MemoryMappedFileStream,trio::MemoryMappedFileStream>,char_*,enum_trio::AccessMode,pma::MemoryResource_*,trio::MemoryMappedFileStream>
                   (char **param_1,AccessMode *param_2,MemoryResource **param_3)

{
  MemoryMappedFileStream *pMVar1;
  undefined8 *in_R9;
  
  pMVar1 = trio::MemoryMappedFileStream::create
                     (*(char **)param_2,*(AccessMode *)param_3,(MemoryResource *)*in_R9);
  *param_1 = (char *)pMVar1;
  return (ScopedPtr<trio::MemoryMappedFileStream,pma::FactoryDestroy<trio::MemoryMappedFileStream,trio::MemoryMappedFileStream>_>
          )(MemoryMappedFileStream *)param_1;
}

// makeScoped<trio::MemoryStream> @ 14a65fd70

ScopedPtr<trio::MemoryStream,pma::FactoryDestroy<trio::MemoryStream,trio::MemoryStream>_> __cdecl
pma::makeScoped<trio::MemoryStream>(void)

{
  MemoryStream *pMVar1;
  MemoryStream *in_RCX;
  
  pMVar1 = trio::MemoryStream::create((MemoryResource *)0x0);
  *(MemoryStream **)in_RCX = pMVar1;
  return (ScopedPtr<trio::MemoryStream,pma::FactoryDestroy<trio::MemoryStream,trio::MemoryStream>_>)
         in_RCX;
}

// makeScoped<trio::MemoryStream,pma::FactoryCreate<trio::MemoryStream,trio::MemoryStream>,pma::FactoryDestroy<trio::MemoryStream,trio::MemoryStream>,trio::MemoryStream> @ 14a65fda0

ScopedPtr<trio::MemoryStream,pma::FactoryDestroy<trio::MemoryStream,trio::MemoryStream>_> __cdecl
pma::
makeScoped<trio::MemoryStream,pma::FactoryCreate<trio::MemoryStream,trio::MemoryStream>,pma::FactoryDestroy<trio::MemoryStream,trio::MemoryStream>,trio::MemoryStream>
          (void)

{
  MemoryStream *pMVar1;
  MemoryStream *in_RCX;
  
  pMVar1 = trio::MemoryStream::create((MemoryResource *)0x0);
  *(MemoryStream **)in_RCX = pMVar1;
  return (ScopedPtr<trio::MemoryStream,pma::FactoryDestroy<trio::MemoryStream,trio::MemoryStream>_>)
         in_RCX;
}

// RigLogicDNAReader @ 14a6607f0

RigLogicDNAReader * __thiscall
RigLogicDNAReader::RigLogicDNAReader(RigLogicDNAReader *this,Reader *param_1)

{
  int iVar1;
  int in_R8D;
  
  if (in_R8D != 0) {
    *(undefined1 **)&this->field_0x8 = &_vbtable__for__dna__RBFBehaviorReader__;
    *(undefined **)&this->field_0x18 = &_vbtable__for__dna__GeometryReader__;
    *(undefined **)&this->field_0x28 = &_vbtable__for__dna__MachineLearnedBehaviorReader__;
    *(undefined **)&this->field_0x38 = &_vbtable__for__dna__JointBehaviorMetadataReader__;
    *(undefined **)&this->field_0x48 = &_vbtable__for__dna__TwistSwingBehaviorReader__;
    *(undefined1 **)&this->field_0xa0 = &_vbtable__for__dna__BehaviorReader__;
    *(undefined ***)&this->field_0x88 = &___7DefinitionReader_dna__6B_;
    *(undefined ***)&this->field_0x98 = &dna::BehaviorReader::_vftable__for__dna__BehaviorReader__;
    *(undefined ***)(&this->field_0xa0 + *(int *)(*(longlong *)&this->field_0xa0 + 4)) =
         &dna::BehaviorReader::_vftable__for__dna__DefinitionReader__;
  }
  *(undefined ***)this = &___7RBFBehaviorReader_dna__6B_;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 4)) =
       &dna::RBFBehaviorReader::_vftable__for__dna__DefinitionReader__;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 8)) =
       &dna::RBFBehaviorReader::_vftable__for__dna__BehaviorReader__;
  *(undefined ***)&this->field_0x10 = &dna::GeometryReader::_vftable__for__dna__GeometryReader__;
  *(undefined ***)(&this->field_0x18 + *(int *)(*(longlong *)&this->field_0x18 + 4)) =
       &dna::GeometryReader::_vftable__for__dna__DefinitionReader__;
  *(undefined ***)&this->field_0x20 =
       &dna::MachineLearnedBehaviorReader::_vftable__for__dna__MachineLearnedBehaviorReader__;
  *(undefined ***)(&this->field_0x28 + *(int *)(*(longlong *)&this->field_0x28 + 4)) =
       &dna::MachineLearnedBehaviorReader::_vftable__for__dna__DefinitionReader__;
  *(undefined ***)&this->field_0x30 =
       &dna::JointBehaviorMetadataReader::_vftable__for__dna__JointBehaviorMetadataReader__;
  *(undefined ***)(&this->field_0x38 + *(int *)(*(longlong *)&this->field_0x38 + 4)) =
       &dna::JointBehaviorMetadataReader::_vftable__for__dna__DefinitionReader__;
  *(undefined ***)&this->field_0x40 =
       &dna::TwistSwingBehaviorReader::_vftable__for__dna__TwistSwingBehaviorReader__;
  *(undefined ***)(&this->field_0x48 + *(int *)(*(longlong *)&this->field_0x48 + 4)) =
       &dna::TwistSwingBehaviorReader::_vftable__for__dna__DefinitionReader__;
  *(undefined ***)this = &___7Reader_dna__6B_;
  *(undefined ***)&this->field_0x10 = &dna::Reader::_vftable__for__dna__GeometryReader__;
  *(undefined ***)&this->field_0x20 =
       &dna::Reader::_vftable__for__dna__MachineLearnedBehaviorReader__;
  *(undefined ***)&this->field_0x30 =
       &dna::Reader::_vftable__for__dna__JointBehaviorMetadataReader__;
  *(undefined ***)&this->field_0x40 = &dna::Reader::_vftable__for__dna__TwistSwingBehaviorReader__;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 4)) =
       &dna::Reader::_vftable__for__dna__DefinitionReader__;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 8)) =
       &dna::Reader::_vftable__for__dna__BehaviorReader__;
  *(undefined ***)this = &___7RigLogicDNAReader__6B_;
  *(undefined ***)&this->field_0x10 = &_vftable__for__dna__GeometryReader__;
  *(undefined ***)&this->field_0x20 = &_vftable__for__dna__MachineLearnedBehaviorReader__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__dna__JointBehaviorMetadataReader__;
  *(undefined ***)&this->field_0x40 = &_vftable__for__dna__TwistSwingBehaviorReader__;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 4)) =
       &_vftable__for__dna__DefinitionReader__;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 8)) =
       &_vftable__for__dna__BehaviorReader__;
  iVar1 = *(int *)(*(longlong *)&this->field_0x8 + 4);
  *(int *)(&this->field_0x4 + iVar1) = iVar1 + -0x80;
  iVar1 = *(int *)(*(longlong *)&this->field_0x8 + 8);
  *(int *)(&this->field_0x4 + iVar1) = iVar1 + -0x90;
  this->Reader = param_1;
  (this->Values).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Values).ArrayNum = 0;
  (this->Values).ArrayMax = 0;
  (this->RBFValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RBFValues).ArrayNum = 0;
  (this->RBFValues).ArrayMax = 0;
  this->Key = None;
  this->Id = 0;
  return this;
}

// ~TestBehaviorReader @ 14a661340

void __thiscall TestBehaviorReader::~TestBehaviorReader(TestBehaviorReader *this)

{
  void *pvVar1;
  
  if (*(void **)&this[-1].field_0x160 != (void *)0x0) {
    FMemory::Free(*(void **)&this[-1].field_0x160);
  }
  pvVar1 = *(void **)&this[-1].animatedMapIndicesLOD1.ArrayNum;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&this[-1].animatedMapIndicesLOD0.ArrayNum,
             *(int *)&this[-1].animatedMapIndicesLOD1.AllocatorInstance.Data);
  pvVar1 = *(void **)&this[-1].animatedMapIndicesLOD0.ArrayNum;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&this[-1].animatedMaps.ArrayNum;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&this[-1].blendShapeMappingIndicesLOD1.ArrayNum;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&this[-1].blendShapeMappingIndicesLOD0.ArrayNum;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&this[-1].meshBlendShapeChannelMappings.ArrayNum;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&this[-1].blendShapeIndicesForLOD1.ArrayNum;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&this[-1].blendShapeIndicesForLOD0.ArrayNum,
             *(int *)&this[-1].blendShapeIndicesForLOD1.AllocatorInstance.Data);
  pvVar1 = *(void **)&this[-1].blendShapeIndicesForLOD0.ArrayNum;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&this[-1].blendShapeChannelNames.ArrayNum;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&this[-1].meshIndicesLOD1.ArrayNum;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&this[-1].meshIndicesLOD0.ArrayNum,
             *(int *)&this[-1].meshIndicesLOD1.AllocatorInstance.Data);
  pvVar1 = *(void **)&this[-1].meshIndicesLOD0.ArrayNum;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&this[-1].meshNames.ArrayNum;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&this[-1].jointIndicesLOD1.ArrayNum;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&this[-1].jointIndicesLOD0.ArrayNum,
             *(int *)&this[-1].jointIndicesLOD1.AllocatorInstance.Data);
  pvVar1 = *(void **)&this[-1].jointIndicesLOD0.ArrayNum;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&this[-1].jointNames.ArrayNum,
             *(int *)&this[-1].jointIndicesLOD0.AllocatorInstance.Data);
  pvVar1 = *(void **)&this[-1].jointNames.ArrayNum;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// `vector_deleting_destructor'`vtordisp{4294967292,0}' @ 14a66195c

/* [thunk]:public: virtual void * __ptr64 __cdecl FDNAReader<class dna::BinaryStreamReader>::`vector
   deleting destructor'`vtordisp{4294967292,0}' (unsigned int) __ptr64 */

void * __thiscall
FDNAReader<dna::BinaryStreamReader>::_vector_deleting_destructor__vtordisp_4294967292_0__
          (FDNAReader<dna::BinaryStreamReader> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FDNAReader<dna::BinaryStreamReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`vtordisp{4294967292,0}' @ 14a661970

/* [thunk]:public: virtual void * __ptr64 __cdecl FDNAReader<class RigLogicDNAReader>::`vector
   deleting destructor'`vtordisp{4294967292,0}' (unsigned int) __ptr64 */

void * __thiscall
FDNAReader<RigLogicDNAReader>::_vector_deleting_destructor__vtordisp_4294967292_0__
          (FDNAReader<RigLogicDNAReader> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FDNAReader<RigLogicDNAReader> *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x8c),param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14a661984

/* [thunk]:public: virtual void * __ptr64 __cdecl FArchiveMemoryStream::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FArchiveMemoryStream::_vector_deleting_destructor__adjustor_8__
          (FArchiveMemoryStream *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FArchiveMemoryStream *)&this[-1].Origin,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{16}' @ 14a661994

/* [thunk]:public: virtual void * __ptr64 __cdecl FArchiveMemoryStream::`vector deleting
   destructor'`adjustor{16}' (unsigned int) __ptr64 */

void * __thiscall
FArchiveMemoryStream::_vector_deleting_destructor__adjustor_16__
          (FArchiveMemoryStream *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FArchiveMemoryStream *)&this[-1].Archive,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{24}' @ 14a6619a4

/* [thunk]:public: virtual void * __ptr64 __cdecl FArchiveMemoryStream::`vector deleting
   destructor'`adjustor{24}' (unsigned int) __ptr64 */

void * __thiscall
FArchiveMemoryStream::_vector_deleting_destructor__adjustor_24__
          (FArchiveMemoryStream *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FArchiveMemoryStream *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{32}' @ 14a6619b4

/* [thunk]:public: virtual void * __ptr64 __cdecl FArchiveMemoryStream::`vector deleting
   destructor'`adjustor{32}' (unsigned int) __ptr64 */

void * __thiscall
FArchiveMemoryStream::_vector_deleting_destructor__adjustor_32__
          (FArchiveMemoryStream *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FArchiveMemoryStream *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14a6619c4

/* [thunk]:public: virtual void * __ptr64 __cdecl FArchiveMemoryStream::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
FArchiveMemoryStream::_vector_deleting_destructor__adjustor_40__
          (FArchiveMemoryStream *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FArchiveMemoryStream *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14a6619d4

/* [thunk]:public: virtual void * __ptr64 __cdecl FRigLogicMemoryStream::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FRigLogicMemoryStream::_vector_deleting_destructor__adjustor_8__
          (FRigLogicMemoryStream *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FRigLogicMemoryStream *)&this[-1].PositionInBuffer,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{16}' @ 14a6619e4

/* [thunk]:public: virtual void * __ptr64 __cdecl FRigLogicMemoryStream::`vector deleting
   destructor'`adjustor{16}' (unsigned int) __ptr64 */

void * __thiscall
FRigLogicMemoryStream::_vector_deleting_destructor__adjustor_16__
          (FRigLogicMemoryStream *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FRigLogicMemoryStream *)&this[-1].BitStreamBuffer,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{24}' @ 14a6619f4

/* [thunk]:public: virtual void * __ptr64 __cdecl FRigLogicMemoryStream::`vector deleting
   destructor'`adjustor{24}' (unsigned int) __ptr64 */

void * __thiscall
FRigLogicMemoryStream::_vector_deleting_destructor__adjustor_24__
          (FRigLogicMemoryStream *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FRigLogicMemoryStream *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{32}' @ 14a661a04

/* [thunk]:public: virtual void * __ptr64 __cdecl FRigLogicMemoryStream::`vector deleting
   destructor'`adjustor{32}' (unsigned int) __ptr64 */

void * __thiscall
FRigLogicMemoryStream::_vector_deleting_destructor__adjustor_32__
          (FRigLogicMemoryStream *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FRigLogicMemoryStream *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14a661a14

/* [thunk]:public: virtual void * __ptr64 __cdecl FRigLogicMemoryStream::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
FRigLogicMemoryStream::_vector_deleting_destructor__adjustor_40__
          (FRigLogicMemoryStream *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FRigLogicMemoryStream *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`vtordisp{4294967292,0}' @ 14a661a24

/* [thunk]:public: virtual void * __ptr64 __cdecl FSkelMeshDNAReader::`vector deleting
   destructor'`vtordisp{4294967292,0}' (unsigned int) __ptr64 */

void * __thiscall
FSkelMeshDNAReader::_vector_deleting_destructor__vtordisp_4294967292_0__
          (FSkelMeshDNAReader *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FSkelMeshDNAReader *)
                      ((longlong)this - (longlong)*(int *)&this[-1].field_0x94),param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`vtordisp{4294967292,0}' @ 14a661a38

/* [thunk]:public: virtual void * __ptr64 __cdecl RigLogicDNAReader::`vector deleting
   destructor'`vtordisp{4294967292,0}' (unsigned int) __ptr64 */

void * __thiscall
RigLogicDNAReader::_vector_deleting_destructor__vtordisp_4294967292_0__
          (RigLogicDNAReader *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((RigLogicDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0xa4)
                      ,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14a661a50

void * __thiscall
FDNAReader<dna::BinaryStreamReader>::_scalar_deleting_destructor_
          (FDNAReader<dna::BinaryStreamReader> *this,uint param_1)

{
  if (*(BinaryStreamReader **)&this[-1].field_0x80 != (BinaryStreamReader *)0x0) {
    dna::BinaryStreamReader::destroy(*(BinaryStreamReader **)&this[-1].field_0x80);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this[-1].field_0x78);
  if ((param_1 & 1) != 0) {
    ::operator_delete(&this[-1].field_0x20,0x90);
  }
  return &this[-1].field_0x20;
}

// `scalar_deleting_destructor' @ 14a661ab0

void * __thiscall
FDNAReader<RigLogicDNAReader>::_scalar_deleting_destructor_
          (FDNAReader<RigLogicDNAReader> *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this[-1].field_0x78);
  if ((param_1 & 1) != 0) {
    ::operator_delete(&this[-1].field_0x20,0x90);
  }
  return &this[-1].field_0x20;
}

// `scalar_deleting_destructor' @ 14a661af0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDNAIndexMapping,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FDNAIndexMapping,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a661b30

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSharedRigRuntimeContext,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FSharedRigRuntimeContext,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a661b70

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDNAReader<dna::BinaryStreamReader>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FDNAReader<dna::BinaryStreamReader>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a661bb0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMemoryResource,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FMemoryResource,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a661bf0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FRigLogic,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FRigLogic,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a661c30

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TestBehaviorReader,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<TestBehaviorReader,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x180);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a661c70

void * __thiscall
FAnimNode_RigLogic::_scalar_deleting_destructor_(FAnimNode_RigLogic *this,uint param_1)

{
  ~FAnimNode_RigLogic(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a661cb0

void * __thiscall
FArchiveMemoryStream::_scalar_deleting_destructor_(FArchiveMemoryStream *this,uint param_1)

{
  trio::BoundedIOStream::~BoundedIOStream((BoundedIOStream *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a661cf0

void * __thiscall FMemoryResource::_scalar_deleting_destructor_(FMemoryResource *this,uint param_1)

{
  pma::MemoryResource::~MemoryResource((MemoryResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a661d30

void * __thiscall
FRigLogicMemoryStream::_scalar_deleting_destructor_(FRigLogicMemoryStream *this,uint param_1)

{
  trio::BoundedIOStream::~BoundedIOStream((BoundedIOStream *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a661d70

void * __thiscall
FSkelMeshDNAReader::_scalar_deleting_destructor_(FSkelMeshDNAReader *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this[-1].field_0x88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this[-1].field_0x78);
  if ((param_1 & 1) != 0) {
    ::operator_delete(&this[-1].field_0x20,0x98);
  }
  return &this[-1].field_0x20;
}

// `scalar_deleting_destructor' @ 14a661dd0

void * __thiscall IBehaviorReader::_scalar_deleting_destructor_(IBehaviorReader *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(&this[-1].field_0x8,0x18);
  }
  return &this[-1].field_0x8;
}

// `scalar_deleting_destructor' @ 14a661e00

void * __thiscall IDNAReader::_scalar_deleting_destructor_(IDNAReader *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(&this[-1].field_0x18,0x68);
  }
  return &this[-1].field_0x18;
}

// `scalar_deleting_destructor' @ 14a661e30

void * __thiscall IDNAReaderBase::_scalar_deleting_destructor_(IDNAReaderBase *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a661e60

void * __thiscall
IDefinitionReader::_scalar_deleting_destructor_(IDefinitionReader *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a661e90

void * __thiscall
IDescriptorReader::_scalar_deleting_destructor_(IDescriptorReader *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a661ec0

void * __thiscall IGeometryReader::_scalar_deleting_destructor_(IGeometryReader *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(&this[-1].field_0x8,0x18);
  }
  return &this[-1].field_0x8;
}

// `scalar_deleting_destructor' @ 14a661ef0

void * __thiscall IHeaderReader::_scalar_deleting_destructor_(IHeaderReader *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a661f20

void * __thiscall
IJointBehaviorMetadataReader::_scalar_deleting_destructor_
          (IJointBehaviorMetadataReader *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(&this[-1].field_0x8,0x18);
  }
  return &this[-1].field_0x8;
}

// `scalar_deleting_destructor' @ 14a661f50

void * __thiscall
IMachineLearnedBehaviorReader::_scalar_deleting_destructor_
          (IMachineLearnedBehaviorReader *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(&this[-1].field_0x8,0x18);
  }
  return &this[-1].field_0x8;
}

// `scalar_deleting_destructor' @ 14a661f80

void * __thiscall
IRBFBehaviorReader::_scalar_deleting_destructor_(IRBFBehaviorReader *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(&this[-1].field_0x18,0x28);
  }
  return &this[-1].field_0x18;
}

// `scalar_deleting_destructor' @ 14a661fb0

void * __thiscall
ITwistSwingBehaviorReader::_scalar_deleting_destructor_
          (ITwistSwingBehaviorReader *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(&this[-1].field_0x8,0x18);
  }
  return &this[-1].field_0x8;
}

// `scalar_deleting_destructor' @ 14a661fe0

void * __thiscall
RigLogicDNAReader::_scalar_deleting_destructor_(RigLogicDNAReader *this,uint param_1)

{
  if (*(void **)&this[-1].field_0x88 != (void *)0x0) {
    FMemory::Free(*(void **)&this[-1].field_0x88);
  }
  if (*(void **)&this[-1].Key != (void *)0x0) {
    FMemory::Free(*(void **)&this[-1].Key);
  }
  dna::Reader::~Reader((Reader *)&this[-1].RBFValues.ArrayNum);
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)&this->field_0x20);
  dna::DefinitionReader::~DefinitionReader((DefinitionReader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(&this[-1].field_0x20,0xa8);
  }
  return &this[-1].field_0x20;
}

// `scalar_deleting_destructor' @ 14a662060

void * __thiscall
TestBehaviorReader::_scalar_deleting_destructor_(TestBehaviorReader *this,uint param_1)

{
  ~TestBehaviorReader(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(&this[-1].field_0x18,0x170);
  }
  return &this[-1].field_0x18;
}

// `scalar_deleting_destructor' @ 14a6620b0

void * __thiscall
UDEPRECATED_DNAIndexMapping::_scalar_deleting_destructor_
          (UDEPRECATED_DNAIndexMapping *this,uint param_1)

{
  *(undefined ***)this = &___7UDEPRECATED_DNAIndexMapping__6B_;
  UAssetUserData::~UAssetUserData((UAssetUserData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a662110

void * __thiscall UDNAAsset::_scalar_deleting_destructor_(UDNAAsset *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  void *pvVar5;
  
  this->_padding_ = (longlong)&___7UDNAAsset__6B_;
  *(undefined4 *)&(this->DNAIndexMappingContainer).field_0x48 = 0;
  pvVar5 = *(void **)&(this->DNAIndexMappingContainer).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UDNAAsset::FSkeletalMeshSkeletonToDNAIndexMappingKey,TSharedPtr<FDNAIndexMapping,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DNAIndexMappingContainer);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->RigRuntimeContext).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GeometryReader).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BehaviorReader).SharedReferenceCount.ReferenceController);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->DNAIndexMappingUpdateLock);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->DNAIndexMappingUpdateLock);
  }
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->RigRuntimeContextUpdateLock);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->RigRuntimeContextUpdateLock);
  }
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->DNAUpdateLock);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->DNAUpdateLock);
  }
  *(undefined4 *)&(this->MetaData).field_0x48 = 0;
  pvVar5 = *(void **)&(this->MetaData).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MetaData);
  pFVar1 = (this->DnaFileName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UAssetUserData::~UAssetUserData((UAssetUserData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a6622d0

void * __thiscall
USkelMeshDNAUtils::_scalar_deleting_destructor_(USkelMeshDNAUtils *this,uint param_1)

{
  *(undefined ***)this = &___7USkelMeshDNAUtils__6B_;
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

// CacheJointGroup @ 14a663930

void __thiscall RigLogicDNAReader::CacheJointGroup(RigLogicDNAReader *this,ushort param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  ushort uVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong local_res18;
  void *local_90;
  ulonglong local_88;
  longlong local_80;
  ulonglong local_78;
  undefined1 local_70 [8];
  ulonglong local_68;
  
  if ((this->Key != JointGroup) || (this->Id != param_1)) {
    plVar12 = (longlong *)
              (&this->Reader->field_0x8 + *(int *)(*(longlong *)&this->Reader->field_0x8 + 8));
    (**(code **)(*plVar12 + 0x78))(plVar12,local_70,param_1);
    plVar12 = (longlong *)
              (&this->Reader->field_0x8 + *(int *)(*(longlong *)&this->Reader->field_0x8 + 8));
    (**(code **)(*plVar12 + 0x80))(plVar12,&local_80,param_1);
    plVar12 = (longlong *)
              (&this->Reader->field_0x8 + *(int *)(*(longlong *)&this->Reader->field_0x8 + 8));
    (**(code **)(*plVar12 + 0x88))(plVar12,&local_90,param_1);
    pTVar1 = &this->Values;
    if ((int)local_88 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(local_88 & 0xffffffff);
    }
    piVar2 = &(this->Values).ArrayMax;
    piVar3 = &(this->Values).ArrayNum;
    *piVar3 = 0;
    iVar11 = (int)local_88;
    if (*piVar2 < (int)local_88) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(int)local_88,&pTVar1->AllocatorInstance,0,piVar2);
      iVar11 = (int)local_88;
    }
    if (((local_90 == (void *)0x0) && (iVar11 != 0)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar11,&pTVar1->AllocatorInstance,piVar3,piVar2);
    if (iVar11 != 0) {
      memcpy((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 4,local_90,(longlong)iVar11 << 2);
    }
    uVar6 = __xmm_80000000800000008000000080000000;
    local_res18 = 0;
    if (local_78 != 0) {
      do {
        uVar4 = *(ushort *)(local_80 + local_res18 * 2);
        iVar11 = (uint)uVar4 + (uVar4 / 9) * -9;
        if (((iVar11 == 1) || ((iVar11 - 3U & 0xfffffffd) == 0)) && (uVar13 = 0, local_68 != 0)) {
          do {
            uVar14 = (int)local_68 * (int)local_res18 + (int)uVar13;
            uVar9 = 0;
            if ((int)uVar14 < *piVar3) {
              uVar9 = ~uVar14 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar9 = *(uint *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar14 * 4);
            uVar10 = 0;
            if ((int)uVar14 < *piVar3) {
              uVar10 = ~uVar14 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar13 = uVar13 + 1;
            *(uint *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar14 * 4) = uVar9 ^ uVar6;
          } while (uVar13 < local_68);
        }
        local_res18 = local_res18 + 1;
      } while (local_res18 < local_78);
    }
    this->Id = param_1;
    this->Key = JointGroup;
  }
  return;
}

// CacheNeutralJointRotations @ 14a663c70

void __thiscall RigLogicDNAReader::CacheNeutralJointRotations(RigLogicDNAReader *this)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  void *local_68;
  int local_60;
  undefined4 uStack_5c;
  void *local_58;
  int local_50;
  undefined4 uStack_4c;
  void *local_48;
  int local_40;
  undefined4 uStack_3c;
  
  if (this->Key != NeutralJointRotations) {
    plVar9 = (longlong *)
             (&this->Reader->field_0x8 + *(int *)(*(longlong *)&this->Reader->field_0x8 + 4));
    (**(code **)(*plVar9 + 0x170))(plVar9,&local_68);
    plVar9 = (longlong *)
             (&this->Reader->field_0x8 + *(int *)(*(longlong *)&this->Reader->field_0x8 + 4));
    (**(code **)(*plVar9 + 0x178))(plVar9,&local_58);
    plVar9 = (longlong *)
             (&this->Reader->field_0x8 + *(int *)(*(longlong *)&this->Reader->field_0x8 + 4));
    (**(code **)(*plVar9 + 0x180))(plVar9,&local_48);
    uVar14 = local_40 + local_50 + local_60;
    if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
    }
    piVar1 = &(this->Values).ArrayMax;
    piVar2 = &(this->Values).ArrayNum;
    *piVar2 = 0;
    if ((this->Values).ArrayMax < (int)uVar14) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar14,&(this->Values).AllocatorInstance,0,piVar1);
    }
    iVar4 = local_60;
    lVar13 = (longlong)local_60;
    if (((local_68 == (void *)0x0) && (local_60 != 0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar4,&(this->Values).AllocatorInstance,piVar2,piVar1);
    if (iVar4 != 0) {
      memcpy((this->Values).AllocatorInstance.Data + (longlong)iVar6 * 4,local_68,lVar13 << 2);
    }
    iVar4 = local_50;
    lVar13 = (longlong)local_50;
    if (((local_58 == (void *)0x0) && (local_50 != 0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar4,&(this->Values).AllocatorInstance,piVar2,piVar1);
    if (iVar4 != 0) {
      memcpy((this->Values).AllocatorInstance.Data + (longlong)iVar6 * 4,local_58,lVar13 << 2);
    }
    iVar4 = local_40;
    lVar13 = (longlong)local_40;
    if (((local_48 == (void *)0x0) && (local_40 != 0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar4,&(this->Values).AllocatorInstance,piVar2,piVar1);
    if (iVar4 != 0) {
      memcpy((this->Values).AllocatorInstance.Data + (longlong)iVar6 * 4,local_48,lVar13 << 2);
    }
    uVar14 = __xmm_80000000800000008000000080000000;
    uVar12 = 0;
    uVar10 = 0;
    if (CONCAT44(uStack_5c,local_60) != 0) {
      do {
        uVar11 = (uint)uVar12;
        uVar7 = 0;
        if ((int)uVar11 < *piVar2) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar7 = *(uint *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar11 * 4);
        uVar8 = 0;
        if ((int)uVar11 < *piVar2) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar12 = uVar12 + 1;
        *(uint *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar11 * 4) =
             uVar7 ^ uVar14;
        uVar10 = CONCAT44(uStack_5c,local_60);
      } while (uVar12 < uVar10);
    }
    uVar12 = CONCAT44(uStack_4c,local_50) + uVar10;
    if (uVar12 < CONCAT44(uStack_4c,local_50) + CONCAT44(uStack_3c,local_40) + uVar10) {
      do {
        uVar11 = (uint)uVar12;
        uVar7 = 0;
        if ((int)uVar11 < *piVar2) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar7 = *(uint *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar11 * 4);
        uVar8 = 0;
        if ((int)uVar11 < *piVar2) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar12 = uVar12 + 1;
        *(uint *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar11 * 4) =
             uVar7 ^ uVar14;
      } while (uVar12 < (ulonglong)
                        (CONCAT44(uStack_3c,local_40) + CONCAT44(uStack_4c,local_50) +
                        CONCAT44(uStack_5c,local_60)));
    }
    this->Key = NeutralJointRotations;
  }
  return;
}

// CacheNeutralJointTranslations @ 14a664120

void __thiscall RigLogicDNAReader::CacheNeutralJointTranslations(RigLogicDNAReader *this)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  void *local_68;
  int local_60;
  undefined4 uStack_5c;
  void *local_58;
  int local_50;
  undefined4 uStack_4c;
  void *local_48;
  int local_40;
  
  if (this->Key != NeutralJointTranslations) {
    plVar9 = (longlong *)
             (&this->Reader->field_0x8 + *(int *)(*(longlong *)&this->Reader->field_0x8 + 4));
    (**(code **)(*plVar9 + 0x150))(plVar9,&local_68);
    plVar9 = (longlong *)
             (&this->Reader->field_0x8 + *(int *)(*(longlong *)&this->Reader->field_0x8 + 4));
    (**(code **)(*plVar9 + 0x158))(plVar9,&local_58);
    plVar9 = (longlong *)
             (&this->Reader->field_0x8 + *(int *)(*(longlong *)&this->Reader->field_0x8 + 4));
    (**(code **)(*plVar9 + 0x160))(plVar9,&local_48);
    uVar13 = local_40 + local_50 + local_60;
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    piVar1 = &(this->Values).ArrayMax;
    piVar2 = &(this->Values).ArrayNum;
    *piVar2 = 0;
    if ((this->Values).ArrayMax < (int)uVar13) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar13,&(this->Values).AllocatorInstance,0,piVar1);
    }
    iVar6 = local_60;
    lVar12 = (longlong)local_60;
    if (((local_68 == (void *)0x0) && (local_60 != 0)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar6,&(this->Values).AllocatorInstance,piVar2,piVar1);
    if (iVar6 != 0) {
      memcpy((this->Values).AllocatorInstance.Data + (longlong)iVar5 * 4,local_68,lVar12 << 2);
    }
    iVar6 = local_50;
    lVar12 = (longlong)local_50;
    if (((local_58 == (void *)0x0) && (local_50 != 0)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar6,&(this->Values).AllocatorInstance,piVar2,piVar1);
    if (iVar6 != 0) {
      memcpy((this->Values).AllocatorInstance.Data + (longlong)iVar5 * 4,local_58,lVar12 << 2);
    }
    if (((local_48 == (void *)0x0) && (local_40 != 0)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,local_40,&(this->Values).AllocatorInstance,piVar2,piVar1);
    if (local_40 != 0) {
      memcpy((this->Values).AllocatorInstance.Data + (longlong)iVar6 * 4,local_48,
             (longlong)local_40 << 2);
    }
    uVar13 = __xmm_80000000800000008000000080000000;
    uVar11 = CONCAT44(uStack_5c,local_60);
    if (uVar11 < CONCAT44(uStack_4c,local_50) + uVar11) {
      do {
        uVar10 = (uint)uVar11;
        uVar7 = 0;
        if ((int)uVar10 < *piVar2) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar7 = *(uint *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar10 * 4);
        uVar8 = 0;
        if ((int)uVar10 < *piVar2) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar11 = uVar11 + 1;
        *(uint *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar10 * 4) =
             uVar7 ^ uVar13;
      } while (uVar11 < (ulonglong)(CONCAT44(uStack_5c,local_60) + CONCAT44(uStack_4c,local_50)));
    }
    this->Key = NeutralJointTranslations;
  }
  return;
}

// CacheRBFPoseJointOutputValues @ 14a664af0

void __thiscall
RigLogicDNAReader::CacheRBFPoseJointOutputValues(RigLogicDNAReader *this,ushort param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  ushort uVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong local_res18;
  void *local_88;
  ulonglong local_80;
  longlong local_78;
  ulonglong local_70;
  
  if ((this->Key != RBFPoseJointOutputValues) || (this->Id != param_1)) {
    (**(code **)(*(longlong *)this->Reader + 0x10))(this->Reader,&local_78,param_1);
    (**(code **)(*(longlong *)this->Reader + 0x28))(this->Reader,&local_88,param_1);
    uVar11 = 0;
    if (local_70 != 0) {
      uVar11 = local_80 / local_70;
    }
    pTVar1 = &this->RBFValues;
    iVar12 = (int)local_80;
    if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(local_80 & 0xffffffff);
    }
    piVar2 = &(this->RBFValues).ArrayMax;
    piVar3 = &(this->RBFValues).ArrayNum;
    *piVar3 = 0;
    if (*piVar2 < iVar12) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar12,&pTVar1->AllocatorInstance,0,piVar2);
    }
    iVar12 = (int)local_80;
    if (((local_88 == (void *)0x0) && (iVar12 != 0)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar12,&pTVar1->AllocatorInstance,piVar3,piVar2);
    if (iVar12 != 0) {
      memcpy((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 4,local_88,(longlong)iVar12 << 2);
    }
    uVar6 = __xmm_80000000800000008000000080000000;
    local_res18 = 0;
    if (local_70 != 0) {
      do {
        uVar4 = *(ushort *)(local_78 + local_res18 * 2);
        iVar12 = (uint)uVar4 + (uVar4 / 9) * -9;
        if (((iVar12 == 1) || ((iVar12 - 3U & 0xfffffffd) == 0)) && (uVar13 = 0, uVar11 != 0)) {
          do {
            uVar14 = (int)uVar13 + (int)local_res18 * (int)uVar11;
            uVar9 = 0;
            if ((int)uVar14 < *piVar3) {
              uVar9 = ~uVar14 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar9 = *(uint *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar14 * 4);
            uVar10 = 0;
            if ((int)uVar14 < *piVar3) {
              uVar10 = ~uVar14 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar13 = uVar13 + 1;
            *(uint *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar14 * 4) = uVar9 ^ uVar6;
          } while (uVar13 < uVar11);
        }
        local_res18 = local_res18 + 1;
      } while (local_res18 < local_70);
    }
    this->Id = param_1;
    this->Key = RBFPoseJointOutputValues;
  }
  return;
}

// CacheRBFSolverRawControlValues @ 14a664df0

void __thiscall
RigLogicDNAReader::CacheRBFSolverRawControlValues(RigLogicDNAReader *this,ushort param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  code *pcVar7;
  float fVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  float fVar21;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 local_128 [2];
  ushort local_126;
  uint local_124;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  uint local_100;
  uint local_f8;
  uint local_f0;
  RigLogicDNAReader *local_e8;
  void *local_e0;
  ulonglong local_d8;
  
  if ((this->Key != RBFSolverRawControlValues) || (this->Id != param_1)) {
    local_126 = param_1;
    local_e8 = this;
    iVar12 = (**(code **)(*(longlong *)this->Reader + 0xb8))();
    (**(code **)(*(longlong *)this->Reader + 0x90))(this->Reader,&local_e0,param_1);
    pTVar1 = &this->Values;
    if ((int)local_d8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(local_d8 & 0xffffffff);
    }
    piVar2 = &(this->Values).ArrayNum;
    piVar3 = &(this->Values).ArrayMax;
    *piVar2 = 0;
    iVar15 = (int)local_d8;
    if (*piVar3 < (int)local_d8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(int)local_d8,&pTVar1->AllocatorInstance,0,piVar3);
      iVar15 = (int)local_d8;
    }
    if (((local_e0 == (void *)0x0) && (iVar15 != 0)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Ptr != nullptr || Count == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x9c1,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,iVar15,&pTVar1->AllocatorInstance,piVar2,piVar3);
    if (iVar15 != 0) {
      memcpy((pTVar1->AllocatorInstance).Data + (longlong)iVar13 * 4,local_e0,(longlong)iVar15 << 2)
      ;
    }
    if (iVar12 != 0) {
      uVar14 = (this->Values).ArrayNum & 0x80000003;
      if ((int)uVar14 < 0) {
        uVar14 = (uVar14 - 1 | 0xfffffffc) + 1;
      }
      if (uVar14 != 0) {
        local_128[0] = 0;
        `RigLogicDNAReader::CacheRBFSolverRawControlValues'::__l8::<lambda_1>::operator()(local_128)
        ;
      }
      fVar8 = __real_3f800000;
      uVar17 = 0;
      if ((this->Values).ArrayNum != 0) {
        do {
          uVar16 = (uint)uVar17;
          uVar14 = 0;
          if ((int)uVar16 < *piVar2) {
            uVar14 = ~uVar16 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar18 = uVar16 + 1;
          local_120 = (longlong)(int)uVar16;
          fVar23 = *(float *)((pTVar1->AllocatorInstance).Data + local_120 * 4);
          uVar14 = 0;
          if ((int)uVar18 < *piVar2) {
            uVar14 = ~uVar18 >> 0x1f;
          }
          local_100 = uVar18;
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          local_118 = (longlong)(int)uVar18;
          uVar19 = uVar16 + 2;
          fVar4 = *(float *)((pTVar1->AllocatorInstance).Data + local_118 * 4);
          uVar14 = 0;
          if ((int)uVar19 < *piVar2) {
            uVar14 = ~uVar19 >> 0x1f;
          }
          local_f8 = uVar19;
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          local_110 = (longlong)(int)uVar19;
          uVar20 = uVar16 + 3;
          fVar5 = *(float *)((pTVar1->AllocatorInstance).Data + local_110 * 4);
          local_124 = ~uVar20 >> 0x1f;
          uVar14 = 0;
          if ((int)uVar20 < *piVar2) {
            uVar14 = local_124;
          }
          local_f0 = uVar20;
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          fVar22 = fVar5 + fVar5;
          local_108 = (longlong)(int)uVar20;
          fVar21 = fVar4 + fVar4;
          fVar6 = *(float *)((pTVar1->AllocatorInstance).Data + local_108 * 4);
          fVar24 = (fVar23 + fVar23) * fVar23;
          if (fVar8 <= (float)((uint)(fVar22 * fVar23 - fVar21 * fVar6) &
                              __xmm_7fffffff7fffffff7fffffff7fffffff)) {
            fVar23 = fVar22 * fVar6 - fVar21 * fVar23;
          }
          else {
            atan2f((fVar23 + fVar23) * fVar6 + fVar22 * fVar4,fVar8 - (fVar21 * fVar4 + fVar24));
            fVar23 = fVar22 * fVar6 + fVar21 * fVar23;
            fVar24 = fVar21 * fVar4;
          }
          __libm_sse2_sincosf_();
          __libm_sse2_sincosf_();
          atan2f(fVar23,fVar8 - (fVar22 * fVar5 + fVar24));
          __libm_sse2_sincosf_();
          lVar9 = local_120;
          uVar14 = 0;
          if ((int)uVar16 < *piVar2) {
            uVar14 = ~uVar16 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar10 = local_118;
          *(float *)((pTVar1->AllocatorInstance).Data + lVar9 * 4) =
               extraout_XMM0_Db_00 * extraout_XMM0_Da * extraout_XMM0_Db_01 -
               extraout_XMM0_Db * extraout_XMM0_Da_00 * extraout_XMM0_Da_01;
          uVar14 = 0;
          if ((int)local_100 < *piVar2) {
            uVar14 = ~uVar18 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar9 = local_110;
          *(float *)((pTVar1->AllocatorInstance).Data + lVar10 * 4) =
               extraout_XMM0_Db_00 * extraout_XMM0_Da * extraout_XMM0_Da_01 +
               extraout_XMM0_Db * extraout_XMM0_Da_00 * extraout_XMM0_Db_01;
          uVar14 = 0;
          if ((int)local_f8 < *piVar2) {
            uVar14 = ~uVar19 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar10 = local_108;
          *(float *)((pTVar1->AllocatorInstance).Data + lVar9 * 4) =
               extraout_XMM0_Db_00 * extraout_XMM0_Db * extraout_XMM0_Da_01 -
               extraout_XMM0_Da_00 * extraout_XMM0_Da * extraout_XMM0_Db_01;
          uVar14 = 0;
          if ((int)local_f0 < *piVar2) {
            uVar14 = local_124;
          }
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar17 = uVar17 + 4;
          *(float *)((pTVar1->AllocatorInstance).Data + lVar10 * 4) =
               extraout_XMM0_Db_00 * extraout_XMM0_Db * extraout_XMM0_Db_01 +
               extraout_XMM0_Da_00 * extraout_XMM0_Da * extraout_XMM0_Da_01;
          this = local_e8;
        } while (uVar17 < (ulonglong)(longlong)(local_e8->Values).ArrayNum);
      }
    }
    this->Id = local_126;
    this->Key = RBFSolverRawControlValues;
  }
  return;
}

// CalculateDNADataLayerBitmask @ 14a666e30

DataLayer __cdecl CalculateDNADataLayerBitmask(EDNADataLayer param_1)

{
  DataLayer DVar1;
  
  DVar1 = param_1 | 0x183;
  if ((param_1 & RBFBehavior) != RBFBehavior) {
    DVar1 = (DataLayer)param_1;
  }
  return DVar1;
}

// ConstructCurveName @ 14a669c20

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __cdecl
ConstructCurveName(FString *__return_storage_ptr__,FString *param_1,FString *param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  bool bVar2;
  FString *pFVar3;
  ForAnyElementType FVar4;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  FString::FString(&local_28,".");
  bVar2 = FString::Split(param_1,&local_28,&local_38,&local_48);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    iVar1 = (param_2->Data).ArrayNum;
    _Src = (param_2->Data).AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = iVar1;
    if (iVar1 == 0) {
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar1,0,(ForAnyElementType *)&local_58,iVar1,&local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
    }
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar4.Data = local_38.Data.AllocatorInstance.Data;
    }
    pFVar3 = FString::Replace(&local_58,&local_28,L"<obj>",(wchar_t *)FVar4.Data,IgnoreCase);
    if (&local_58 != pFVar3) {
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      local_58.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = (pFVar3->Data).ArrayNum;
      local_58.Data.ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar4.Data = local_48.Data.AllocatorInstance.Data;
    }
    pFVar3 = FString::Replace(&local_58,&local_28,L"<attr>",(wchar_t *)FVar4.Data,IgnoreCase);
    if (&local_58 != pFVar3) {
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      local_58.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = (pFVar3->Data).ArrayNum;
      local_58.Data.ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_58.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_58.Data.ArrayMax;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    if (1 < (byte)LogRigLogicUnit._0_1_) {
      UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogRigLogicUnit);
    }
    FString::FString(__return_storage_ptr__,L"");
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// CreateCurveName @ 14a66b290

FString * __cdecl CreateCurveName(FString *__return_storage_ptr__,FString *param_1,FString *param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  bool bVar2;
  FString *pFVar3;
  ForAnyElementType FVar4;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FString::FString(&local_18,".");
  bVar2 = FString::Split(param_1,&local_18,&local_28,&local_38);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    iVar1 = (param_2->Data).ArrayNum;
    _Src = (param_2->Data).AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = iVar1;
    if (iVar1 == 0) {
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar1,0,(ForAnyElementType *)&local_48,iVar1,&local_48.Data.ArrayMax);
      memcpy(local_48.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
    }
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar4.Data = local_28.Data.AllocatorInstance.Data;
    }
    pFVar3 = FString::Replace(&local_48,&local_18,L"<obj>",(wchar_t *)FVar4.Data,IgnoreCase);
    if (&local_48 != pFVar3) {
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      local_48.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = (pFVar3->Data).ArrayNum;
      local_48.Data.ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar4.Data = local_38.Data.AllocatorInstance.Data;
    }
    pFVar3 = FString::Replace(&local_48,&local_18,L"<attr>",(wchar_t *)FVar4.Data,IgnoreCase);
    if (&local_48 != pFVar3) {
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      local_48.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = (pFVar3->Data).ArrayNum;
      local_48.Data.ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_48.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    FString::FString(__return_storage_ptr__,L"");
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// EmptyLinkFunctionForGeneratedCodeAnimNode_RigLogic @ 14a66bcc0

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNode_RigLogic(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDNAAsset @ 14a66bcd0

void __cdecl EmptyLinkFunctionForGeneratedCodeDNAAsset(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDNACommon @ 14a66bce0

void __cdecl EmptyLinkFunctionForGeneratedCodeDNACommon(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDNAIndexMappingDeprecated @ 14a66bcf0

void __cdecl EmptyLinkFunctionForGeneratedCodeDNAIndexMappingDeprecated(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigLogic @ 14a66bd00

void __cdecl EmptyLinkFunctionForGeneratedCodeRigLogic(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigLogicModule_init @ 14a66bd10

void __cdecl EmptyLinkFunctionForGeneratedCodeRigLogicModule_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigUnit_RigLogic @ 14a66bd20

void __cdecl EmptyLinkFunctionForGeneratedCodeRigUnit_RigLogic(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSkelMeshDNAUtils @ 14a66bd30

void __cdecl EmptyLinkFunctionForGeneratedCodeSkelMeshDNAUtils(void)

{
  return;
}

// GetAge @ 14a66c3a0

ushort __thiscall TestBehaviorReader::GetAge(TestBehaviorReader *this)

{
  return 0;
}

// GetAnimatedMapCount @ 14a66c4a0

ushort __thiscall TestBehaviorReader::GetAnimatedMapCount(TestBehaviorReader *this)

{
  return *(ushort *)&this[-1].animatedMapIndicesLOD1.AllocatorInstance.Data;
}

// GetAnimatedMapCutValues @ 14a66c650

TArrayView<float_const_,int> * __thiscall
TestBehaviorReader::GetAnimatedMapCutValues
          (TestBehaviorReader *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (float *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetAnimatedMapFromValues @ 14a66c810

TArrayView<float_const_,int> * __thiscall
TestBehaviorReader::GetAnimatedMapFromValues
          (TestBehaviorReader *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (float *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetAnimatedMapIndexListCount @ 14a66c920

ushort __thiscall TestBehaviorReader::GetAnimatedMapIndexListCount(TestBehaviorReader *this)

{
  return 0;
}

// GetAnimatedMapIndicesForLOD @ 14a66cb60

TArrayView<unsigned_short_const_,int> * __thiscall
TestBehaviorReader::GetAnimatedMapIndicesForLOD
          (TestBehaviorReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  
  if (param_1 == 1) {
    __return_storage_ptr__->DataPtr = *(ushort **)&this[-1].field_0x160;
    iVar3 = *(int *)&this[-1].field_0x168;
  }
  else {
    __return_storage_ptr__->DataPtr = *(ushort **)&this[-1].animatedMapIndicesLOD1.ArrayNum;
    iVar3 = *(int *)&this[-1].field_0x158;
  }
  __return_storage_ptr__->ArrayNum = iVar3;
  if (iVar3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetAnimatedMapInputIndices @ 14a66cd70

TArrayView<unsigned_short_const_,int> * __thiscall
TestBehaviorReader::GetAnimatedMapInputIndices
          (TestBehaviorReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (ushort *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetAnimatedMapLODs @ 14a66cf30

TArrayView<unsigned_short_const_,int> * __thiscall
TestBehaviorReader::GetAnimatedMapLODs
          (TestBehaviorReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (ushort *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetAnimatedMapName @ 14a66d1d0

FString * __thiscall
TestBehaviorReader::GetAnimatedMapName
          (TestBehaviorReader *this,FString *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  if (*(int *)&this[-1].animatedMapIndicesLOD1.AllocatorInstance.Data <= (int)(uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  ::FString::FString(__return_storage_ptr__,
                     (FString *)
                     ((ulonglong)param_1 * 0x10 +
                     *(longlong *)&this[-1].animatedMapIndicesLOD0.ArrayNum));
  return __return_storage_ptr__;
}

// GetAnimatedMapOutputIndices @ 14a66d400

TArrayView<unsigned_short_const_,int> * __thiscall
TestBehaviorReader::GetAnimatedMapOutputIndices
          (TestBehaviorReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (ushort *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetAnimatedMapSlopeValues @ 14a66d630

TArrayView<float_const_,int> * __thiscall
TestBehaviorReader::GetAnimatedMapSlopeValues
          (TestBehaviorReader *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (float *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetAnimatedMapToValues @ 14a66d7f0

TArrayView<float_const_,int> * __thiscall
TestBehaviorReader::GetAnimatedMapToValues
          (TestBehaviorReader *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (float *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetArchetype @ 14a66d900

EArchetype __thiscall TestBehaviorReader::GetArchetype(TestBehaviorReader *this)

{
  return Asian;
}

// GetBlendShapeChannelCount @ 14a66daa0

ushort __thiscall TestBehaviorReader::GetBlendShapeChannelCount(TestBehaviorReader *this)

{
  return *(ushort *)&this[-1].blendShapeIndicesForLOD1.AllocatorInstance.Data;
}

// GetBlendShapeChannelIndex @ 14a66db20

ushort __thiscall
TestBehaviorReader::GetBlendShapeChannelIndex
          (TestBehaviorReader *this,ushort param_1,ushort param_2)

{
  return 0;
}

// GetBlendShapeChannelIndexListCount @ 14a66dc20

ushort __thiscall TestBehaviorReader::GetBlendShapeChannelIndexListCount(TestBehaviorReader *this)

{
  return 0;
}

// GetBlendShapeChannelIndicesForLOD @ 14a66de60

TArrayView<unsigned_short_const_,int> * __thiscall
TestBehaviorReader::GetBlendShapeChannelIndicesForLOD
          (TestBehaviorReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  
  if (param_1 == 0) {
    __return_storage_ptr__->DataPtr = *(ushort **)&this[-1].blendShapeIndicesForLOD1.ArrayNum;
    iVar3 = *(int *)&this[-1].meshBlendShapeChannelMappings.AllocatorInstance.Data;
  }
  else {
    __return_storage_ptr__->DataPtr = *(ushort **)&this[-1].meshBlendShapeChannelMappings.ArrayNum;
    iVar3 = *(int *)&this[-1].blendShapeMappingIndicesLOD0.AllocatorInstance.Data;
  }
  __return_storage_ptr__->ArrayNum = iVar3;
  if (iVar3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetBlendShapeChannelInputIndices @ 14a66e070

TArrayView<unsigned_short_const_,int> * __thiscall
TestBehaviorReader::GetBlendShapeChannelInputIndices
          (TestBehaviorReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (ushort *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetBlendShapeChannelLODs @ 14a66e230

TArrayView<unsigned_short_const_,int> * __thiscall
TestBehaviorReader::GetBlendShapeChannelLODs
          (TestBehaviorReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (ushort *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetBlendShapeChannelName @ 14a66e4d0

FString * __thiscall
TestBehaviorReader::GetBlendShapeChannelName
          (TestBehaviorReader *this,FString *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  if (*(int *)&this[-1].blendShapeIndicesForLOD1.AllocatorInstance.Data <= (int)(uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  ::FString::FString(__return_storage_ptr__,
                     (FString *)
                     ((ulonglong)param_1 * 0x10 +
                     *(longlong *)&this[-1].blendShapeIndicesForLOD0.ArrayNum));
  return __return_storage_ptr__;
}

// GetBlendShapeChannelOutputIndices @ 14a66e700

TArrayView<unsigned_short_const_,int> * __thiscall
TestBehaviorReader::GetBlendShapeChannelOutputIndices
          (TestBehaviorReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (ushort *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetBlendShapeTargetCount @ 14a66e800

ushort __thiscall
TestBehaviorReader::GetBlendShapeTargetCount(TestBehaviorReader *this,ushort param_1)

{
  return 0;
}

// GetBlendShapeTargetDelta @ 14a66e980

TVector<double> * __thiscall
TestBehaviorReader::GetBlendShapeTargetDelta
          (TestBehaviorReader *this,TVector<double> *__return_storage_ptr__,ushort param_1,
          ushort param_2,uint param_3)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  return __return_storage_ptr__;
}

// GetBlendShapeTargetDeltaCount @ 14a66ea10

uint __thiscall
TestBehaviorReader::GetBlendShapeTargetDeltaCount
          (TestBehaviorReader *this,ushort param_1,ushort param_2)

{
  return 0;
}

// GetBlendShapeTargetDeltaXs @ 14a66eb40

TArrayView<float_const_,int> * __thiscall
TestBehaviorReader::GetBlendShapeTargetDeltaXs
          (TestBehaviorReader *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          ushort param_1,ushort param_2)

{
  __return_storage_ptr__->DataPtr = (float *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetBlendShapeTargetDeltaYs @ 14a66ec80

TArrayView<float_const_,int> * __thiscall
TestBehaviorReader::GetBlendShapeTargetDeltaYs
          (TestBehaviorReader *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          ushort param_1,ushort param_2)

{
  __return_storage_ptr__->DataPtr = (float *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetBlendShapeTargetDeltaZs @ 14a66edc0

TArrayView<float_const_,int> * __thiscall
TestBehaviorReader::GetBlendShapeTargetDeltaZs
          (TestBehaviorReader *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          ushort param_1,ushort param_2)

{
  __return_storage_ptr__->DataPtr = (float *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetBlendShapeTargetVertexIndices @ 14a66ef00

TArrayView<unsigned_int_const_,int> * __thiscall
TestBehaviorReader::GetBlendShapeTargetVertexIndices
          (TestBehaviorReader *this,TArrayView<unsigned_int_const_,int> *__return_storage_ptr__,
          ushort param_1,ushort param_2)

{
  __return_storage_ptr__->DataPtr = (uint *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetCoordinateSystem @ 14a66f0d0

FCoordinateSystem __thiscall TestBehaviorReader::GetCoordinateSystem(TestBehaviorReader *this)

{
  undefined2 *in_RDX;
  
  *in_RDX = 0;
  *(undefined1 *)(in_RDX + 1) = 0;
  return SUB83(in_RDX,0);
}

// GetDBComplexity @ 14a66f350

FString * __thiscall
TestBehaviorReader::GetDBComplexity(TestBehaviorReader *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetDBMaxLOD @ 14a66f460

ushort __thiscall TestBehaviorReader::GetDBMaxLOD(TestBehaviorReader *this)

{
  return 0;
}

// GetDBName @ 14a66f6d0

FString * __thiscall
TestBehaviorReader::GetDBName(TestBehaviorReader *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetDNAAssetFromFile @ 14a66f6f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TObjectPtr<UDNAAsset> __cdecl
GetDNAAssetFromFile(FString *param_1,UObject *param_2,EDNADataLayer param_3)

{
  bool bVar1;
  UClass *pUVar2;
  UDNAAsset *this;
  longlong *plVar3;
  wchar_t *pwVar4;
  atomic<int> *paVar5;
  undefined7 in_register_00000081;
  EDNADataLayer in_R9B;
  undefined1 auStack_f8 [32];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_d8;
  TSharedPtr<IDNAReader,1> local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  this = (UDNAAsset *)0x0;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  if (*(int *)&param_2->field_0x8 == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = *(wchar_t **)param_2;
  }
  bVar1 = FFileHelper::LoadFileToArray(&local_d8,pwVar4,0);
  if (bVar1) {
    ReadDNAFromBuffer(&local_c8,&local_d8,in_R9B,0);
    if (local_c8.Object != (IDNAReader *)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)CONCAT71(in_register_00000081,param_3),
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar2 = UDNAAsset::StaticClass();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_b8,pUVar2);
      local_b8._8_8_ = (UObject *)CONCAT71(in_register_00000081,param_3);
      this = (UDNAAsset *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
      if (local_b8._64_8_ != 0) {
        plVar3 = (longlong *)(local_b8 + 0x50);
        if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
          plVar3 = (longlong *)local_b8._104_8_;
        }
        (**(code **)(*plVar3 + 0x10))();
      }
      if (local_c8.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
        paVar5 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar5 = &(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        LOCK();
        *paVar5 = (atomic<int>)((int)*paVar5 + 1);
        UNLOCK();
      }
      UDNAAsset::SetBehaviorReader(this,&local_c8);
      if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar5 = (atomic<int>)((int)*paVar5 + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c8.SharedReferenceCount.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.SharedReferenceCount.ReferenceController);
  }
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDNAAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  return (TObjectPtr<UDNAAsset>)(TObjectPtr<UDNAAsset>_u_0)param_1;
}

// GetFaceCount @ 14a670080

uint __thiscall TestBehaviorReader::GetFaceCount(TestBehaviorReader *this,ushort param_1)

{
  return 0;
}

// GetFaceVertexLayoutIndices @ 14a6701b0

TArrayView<unsigned_int_const_,int> * __thiscall
TestBehaviorReader::GetFaceVertexLayoutIndices
          (TestBehaviorReader *this,TArrayView<unsigned_int_const_,int> *__return_storage_ptr__,
          ushort param_1,uint param_2)

{
  __return_storage_ptr__->DataPtr = (uint *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetFileFormatGeneration @ 14a6702c0

ushort __thiscall TestBehaviorReader::GetFileFormatGeneration(TestBehaviorReader *this)

{
  return 0;
}

// GetFileFormatVersion @ 14a6703c0

ushort __thiscall TestBehaviorReader::GetFileFormatVersion(TestBehaviorReader *this)

{
  return 0;
}

// GetGUIControlCount @ 14a670500

ushort __thiscall TestBehaviorReader::GetGUIControlCount(TestBehaviorReader *this)

{
  return 0;
}

// GetGUIControlName @ 14a670790

FString * __thiscall
TestBehaviorReader::GetGUIControlName
          (TestBehaviorReader *this,FString *__return_storage_ptr__,ushort param_1)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetGUIToRawCutValues @ 14a6709c0

TArrayView<float_const_,int> * __thiscall
TestBehaviorReader::GetGUIToRawCutValues
          (TestBehaviorReader *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (float *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetGUIToRawFromValues @ 14a670b80

TArrayView<float_const_,int> * __thiscall
TestBehaviorReader::GetGUIToRawFromValues
          (TestBehaviorReader *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (float *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetGUIToRawInputIndices @ 14a670d40

TArrayView<unsigned_short_const_,int> * __thiscall
TestBehaviorReader::GetGUIToRawInputIndices
          (TestBehaviorReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (ushort *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetGUIToRawOutputIndices @ 14a670f00

TArrayView<unsigned_short_const_,int> * __thiscall
TestBehaviorReader::GetGUIToRawOutputIndices
          (TestBehaviorReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (ushort *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetGUIToRawSlopeValues @ 14a6710c0

TArrayView<float_const_,int> * __thiscall
TestBehaviorReader::GetGUIToRawSlopeValues
          (TestBehaviorReader *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (float *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetGUIToRawToValues @ 14a671280

TArrayView<float_const_,int> * __thiscall
TestBehaviorReader::GetGUIToRawToValues
          (TestBehaviorReader *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (float *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetGender @ 14a671390

EGender __thiscall TestBehaviorReader::GetGender(TestBehaviorReader *this)

{
  return Male;
}

// GetJointColumnCount @ 14a671490

ushort __thiscall TestBehaviorReader::GetJointColumnCount(TestBehaviorReader *this)

{
  return 0;
}

// GetJointCount @ 14a671590

ushort __thiscall TestBehaviorReader::GetJointCount(TestBehaviorReader *this)

{
  return *(ushort *)&this[-1].jointIndicesLOD1.AllocatorInstance.Data;
}

// GetJointGroupCount @ 14a6716b0

ushort __thiscall TestBehaviorReader::GetJointGroupCount(TestBehaviorReader *this)

{
  return 0;
}

// GetJointGroupInputIndices @ 14a671870

TArrayView<unsigned_short_const_,int> * __thiscall
TestBehaviorReader::GetJointGroupInputIndices
          (TestBehaviorReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->DataPtr = (ushort *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetJointGroupJointIndices @ 14a671a50

TArrayView<unsigned_short_const_,int> * __thiscall
TestBehaviorReader::GetJointGroupJointIndices
          (TestBehaviorReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->DataPtr = (ushort *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetJointGroupLODs @ 14a671c20

TArrayView<unsigned_short_const_,int> * __thiscall
TestBehaviorReader::GetJointGroupLODs
          (TestBehaviorReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->DataPtr = (ushort *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetJointGroupOutputIndices @ 14a671e00

TArrayView<unsigned_short_const_,int> * __thiscall
TestBehaviorReader::GetJointGroupOutputIndices
          (TestBehaviorReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->DataPtr = (ushort *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetJointGroupValues @ 14a671fe0

TArrayView<float_const_,int> * __thiscall
TestBehaviorReader::GetJointGroupValues
          (TestBehaviorReader *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->DataPtr = (float *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetJointIndexListCount @ 14a6720f0

ushort __thiscall TestBehaviorReader::GetJointIndexListCount(TestBehaviorReader *this)

{
  return 0;
}

// GetJointIndicesForLOD @ 14a672330

TArrayView<unsigned_short_const_,int> * __thiscall
TestBehaviorReader::GetJointIndicesForLOD
          (TestBehaviorReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  
  if (param_1 == 1) {
    __return_storage_ptr__->DataPtr = *(ushort **)&this[-1].meshNames.ArrayNum;
    iVar3 = *(int *)&this[-1].meshIndicesLOD0.AllocatorInstance.Data;
  }
  else {
    __return_storage_ptr__->DataPtr = *(ushort **)&this[-1].jointIndicesLOD1.ArrayNum;
    iVar3 = *(int *)&this[-1].meshNames.AllocatorInstance.Data;
  }
  __return_storage_ptr__->ArrayNum = iVar3;
  if (iVar3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetJointName @ 14a672630

FString * __thiscall
TestBehaviorReader::GetJointName
          (TestBehaviorReader *this,FString *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  if (*(int *)&this[-1].jointIndicesLOD1.AllocatorInstance.Data <= (int)(uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  ::FString::FString(__return_storage_ptr__,
                     (FString *)
                     ((ulonglong)param_1 * 0x10 + *(longlong *)&this[-1].jointIndicesLOD0.ArrayNum))
  ;
  return __return_storage_ptr__;
}

// GetJointParentIndex @ 14a672830

ushort __thiscall TestBehaviorReader::GetJointParentIndex(TestBehaviorReader *this,ushort param_1)

{
  return 0;
}

// GetJointRotationRepresentation @ 14a6728e0

ERotationRepresentation __thiscall
TestBehaviorReader::GetJointRotationRepresentation(TestBehaviorReader *this,ushort param_1)

{
  return EulerAngles;
}

// GetJointRowCount @ 14a6729e0

ushort __thiscall TestBehaviorReader::GetJointRowCount(TestBehaviorReader *this)

{
  return 0;
}

// GetJointScaleRepresentation @ 14a672a90

EScaleRepresentation __thiscall
TestBehaviorReader::GetJointScaleRepresentation(TestBehaviorReader *this,ushort param_1)

{
  return Vector;
}

// GetJointTranslationRepresentation @ 14a672b40

ETranslationRepresentation __thiscall
TestBehaviorReader::GetJointTranslationRepresentation(TestBehaviorReader *this,ushort param_1)

{
  return Vector;
}

// GetJointVariableAttributeIndices @ 14a672d60

TArrayView<unsigned_short_const_,int> * __thiscall
TestBehaviorReader::GetJointVariableAttributeIndices
          (TestBehaviorReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->DataPtr = (ushort *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetLODCount @ 14a672ea0

ushort __thiscall TestBehaviorReader::GetLODCount(TestBehaviorReader *this)

{
  return *(ushort *)&this[-1].jointNames.AllocatorInstance.Data;
}

// GetMLControlCount @ 14a672f90

ushort __thiscall TestBehaviorReader::GetMLControlCount(TestBehaviorReader *this)

{
  return 0;
}

// GetMLControlName @ 14a6731c0

FString * __thiscall
TestBehaviorReader::GetMLControlName
          (TestBehaviorReader *this,FString *__return_storage_ptr__,ushort param_1)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetMaximumInfluencePerVertex @ 14a6732b0

ushort __thiscall
TestBehaviorReader::GetMaximumInfluencePerVertex(TestBehaviorReader *this,ushort param_1)

{
  return 0;
}

// GetMeshBlendShapeChannelMapping @ 14a673420

FMeshBlendShapeChannelMapping __thiscall
TestBehaviorReader::GetMeshBlendShapeChannelMapping(TestBehaviorReader *this,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  FMeshBlendShapeChannelMapping FVar3;
  undefined6 in_register_00000012;
  ushort in_R8W;
  
  FVar3._2_6_ = in_register_00000012;
  FVar3.MeshIndex._0_2_ = param_1;
  if (*(int *)&this[-1].blendShapeMappingIndicesLOD1.AllocatorInstance.Data <= (int)(uint)in_R8W) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FMeshBlendShapeChannelMapping)(*pcVar1)();
      return FVar3;
    }
  }
  *(undefined8 *)FVar3 =
       *(undefined8 *)
        (*(longlong *)&this[-1].blendShapeMappingIndicesLOD0.ArrayNum + (ulonglong)in_R8W * 8);
  return FVar3;
}

// GetMeshBlendShapeChannelMappingCount @ 14a673590

ushort __thiscall TestBehaviorReader::GetMeshBlendShapeChannelMappingCount(TestBehaviorReader *this)

{
  return *(ushort *)&this[-1].blendShapeMappingIndicesLOD1.AllocatorInstance.Data;
}

// GetMeshBlendShapeChannelMappingIndicesForLOD @ 14a673760

TArrayView<unsigned_short_const_,int> * __thiscall
TestBehaviorReader::GetMeshBlendShapeChannelMappingIndicesForLOD
          (TestBehaviorReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  
  if (param_1 == 0) {
    __return_storage_ptr__->DataPtr = *(ushort **)&this[-1].blendShapeMappingIndicesLOD1.ArrayNum;
    iVar3 = *(int *)&this[-1].animatedMaps.AllocatorInstance.Data;
  }
  else {
    __return_storage_ptr__->DataPtr = *(ushort **)&this[-1].animatedMaps.ArrayNum;
    iVar3 = *(int *)&this[-1].animatedMapIndicesLOD0.AllocatorInstance.Data;
  }
  __return_storage_ptr__->ArrayNum = iVar3;
  if (iVar3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetMeshCount @ 14a6738e0

ushort __thiscall TestBehaviorReader::GetMeshCount(TestBehaviorReader *this)

{
  return 0;
}

// GetMeshIndexListCount @ 14a6739e0

ushort __thiscall TestBehaviorReader::GetMeshIndexListCount(TestBehaviorReader *this)

{
  return 0;
}

// GetMeshIndicesForLOD @ 14a673bb0

TArrayView<unsigned_short_const_,int> * __thiscall
TestBehaviorReader::GetMeshIndicesForLOD
          (TestBehaviorReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  
  if (param_1 == 0) {
    __return_storage_ptr__->DataPtr = *(ushort **)&this[-1].meshIndicesLOD1.ArrayNum;
    iVar3 = *(int *)&this[-1].blendShapeChannelNames.AllocatorInstance.Data;
  }
  else {
    __return_storage_ptr__->DataPtr = *(ushort **)&this[-1].blendShapeChannelNames.ArrayNum;
    iVar3 = *(int *)&this[-1].blendShapeIndicesForLOD0.AllocatorInstance.Data;
  }
  __return_storage_ptr__->ArrayNum = iVar3;
  if (iVar3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetMeshName @ 14a673eb0

FString * __thiscall
TestBehaviorReader::GetMeshName
          (TestBehaviorReader *this,FString *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  if (*(int *)&this[-1].meshIndicesLOD1.AllocatorInstance.Data <= (int)(uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  ::FString::FString(__return_storage_ptr__,
                     (FString *)
                     ((ulonglong)param_1 * 0x10 + *(longlong *)&this[-1].meshIndicesLOD0.ArrayNum));
  return __return_storage_ptr__;
}

// GetMeshRegionCount @ 14a674000

ushort __thiscall TestBehaviorReader::GetMeshRegionCount(TestBehaviorReader *this,ushort param_1)

{
  return 0;
}

// GetMeshRegionName @ 14a674220

FString * __thiscall
TestBehaviorReader::GetMeshRegionName
          (TestBehaviorReader *this,FString *__return_storage_ptr__,ushort param_1,ushort param_2)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetMetaDataCount @ 14a674330

uint __thiscall TestBehaviorReader::GetMetaDataCount(TestBehaviorReader *this)

{
  return 0;
}

// GetMetaDataKey @ 14a6745b0

FString * __thiscall
TestBehaviorReader::GetMetaDataKey
          (TestBehaviorReader *this,FString *__return_storage_ptr__,uint param_1)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetMetaDataValue @ 14a6748a0

FString * __thiscall
TestBehaviorReader::GetMetaDataValue
          (TestBehaviorReader *this,FString *__return_storage_ptr__,FString *param_1)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetName @ 14a674b20

FString * __thiscall
TestBehaviorReader::GetName(TestBehaviorReader *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetNeuralNetworkCount @ 14a674c10

ushort __thiscall TestBehaviorReader::GetNeuralNetworkCount(TestBehaviorReader *this)

{
  return 0;
}

// GetNeuralNetworkIndexListCount @ 14a674cb0

ushort __thiscall TestBehaviorReader::GetNeuralNetworkIndexListCount(TestBehaviorReader *this)

{
  return 0;
}

// GetNeuralNetworkIndicesForLOD @ 14a674f00

TArrayView<unsigned_short_const_,int> * __thiscall
TestBehaviorReader::GetNeuralNetworkIndicesForLOD
          (TestBehaviorReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->DataPtr = (ushort *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetNeuralNetworkIndicesForMeshRegion @ 14a675090

TArrayView<unsigned_short_const_,int> * __thiscall
TestBehaviorReader::GetNeuralNetworkIndicesForMeshRegion
          (TestBehaviorReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1,ushort param_2)

{
  __return_storage_ptr__->DataPtr = (ushort *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetNeuralNetworkInputIndices @ 14a675210

TArrayView<unsigned_short_const_,int> * __thiscall
TestBehaviorReader::GetNeuralNetworkInputIndices
          (TestBehaviorReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->DataPtr = (ushort *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetNeuralNetworkLayerActivationFunction @ 14a6752f0

EActivationFunction __thiscall
TestBehaviorReader::GetNeuralNetworkLayerActivationFunction
          (TestBehaviorReader *this,ushort param_1,ushort param_2)

{
  return Linear;
}

// GetNeuralNetworkLayerActivationFunctionParameters @ 14a675470

TArrayView<float_const_,int> * __thiscall
TestBehaviorReader::GetNeuralNetworkLayerActivationFunctionParameters
          (TestBehaviorReader *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          ushort param_1,ushort param_2)

{
  __return_storage_ptr__->DataPtr = (float *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetNeuralNetworkLayerBiases @ 14a675600

TArrayView<float_const_,int> * __thiscall
TestBehaviorReader::GetNeuralNetworkLayerBiases
          (TestBehaviorReader *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          ushort param_1,ushort param_2)

{
  __return_storage_ptr__->DataPtr = (float *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetNeuralNetworkLayerCount @ 14a6756c0

ushort __thiscall
TestBehaviorReader::GetNeuralNetworkLayerCount(TestBehaviorReader *this,ushort param_1)

{
  return 0;
}

// GetNeuralNetworkLayerWeights @ 14a675840

TArrayView<float_const_,int> * __thiscall
TestBehaviorReader::GetNeuralNetworkLayerWeights
          (TestBehaviorReader *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          ushort param_1,ushort param_2)

{
  __return_storage_ptr__->DataPtr = (float *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetNeuralNetworkOutputIndices @ 14a6759e0

TArrayView<unsigned_short_const_,int> * __thiscall
TestBehaviorReader::GetNeuralNetworkOutputIndices
          (TestBehaviorReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->DataPtr = (ushort *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetNeutralJointRotation @ 14a675c00

TVector<double> * __thiscall
TestBehaviorReader::GetNeutralJointRotation
          (TestBehaviorReader *this,TVector<double> *__return_storage_ptr__,ushort param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  return __return_storage_ptr__;
}

// GetNeutralJointTranslation @ 14a675e20

TVector<double> * __thiscall
TestBehaviorReader::GetNeutralJointTranslation
          (TestBehaviorReader *this,TVector<double> *__return_storage_ptr__,ushort param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  return __return_storage_ptr__;
}

// GetPSDColumnIndices @ 14a676050

TArrayView<unsigned_short_const_,int> * __thiscall
TestBehaviorReader::GetPSDColumnIndices
          (TestBehaviorReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (ushort *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetPSDCount @ 14a676210

ushort __thiscall TestBehaviorReader::GetPSDCount(TestBehaviorReader *this)

{
  return 0;
}

// GetPSDRowIndices @ 14a6763c0

TArrayView<unsigned_short_const_,int> * __thiscall
TestBehaviorReader::GetPSDRowIndices
          (TestBehaviorReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (ushort *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetPSDValues @ 14a676580

TArrayView<float_const_,int> * __thiscall
TestBehaviorReader::GetPSDValues
          (TestBehaviorReader *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (float *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetRBFPoseAnimatedMapOutputIndices @ 14a6769d0

TArrayView<unsigned_short_const_,int> * __thiscall
TestBehaviorReader::GetRBFPoseAnimatedMapOutputIndices
          (TestBehaviorReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->DataPtr = (ushort *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetRBFPoseBlendShapeChannelOutputIndices @ 14a676b40

TArrayView<unsigned_short_const_,int> * __thiscall
TestBehaviorReader::GetRBFPoseBlendShapeChannelOutputIndices
          (TestBehaviorReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->DataPtr = (ushort *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetRBFPoseControlCount @ 14a676bf0

ushort __thiscall TestBehaviorReader::GetRBFPoseControlCount(TestBehaviorReader *this)

{
  return 0;
}

// GetRBFPoseControlName @ 14a676df0

FString * __thiscall
TestBehaviorReader::GetRBFPoseControlName
          (TestBehaviorReader *this,FString *__return_storage_ptr__,ushort param_1)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetRBFPoseCount @ 14a676e80

ushort __thiscall TestBehaviorReader::GetRBFPoseCount(TestBehaviorReader *this)

{
  return 0;
}

// GetRBFPoseInputControlIndices @ 14a676fe0

TArrayView<unsigned_short_const_,int> * __thiscall
TestBehaviorReader::GetRBFPoseInputControlIndices
          (TestBehaviorReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->DataPtr = (ushort *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetRBFPoseJointOutputIndices @ 14a677150

TArrayView<unsigned_short_const_,int> * __thiscall
TestBehaviorReader::GetRBFPoseJointOutputIndices
          (TestBehaviorReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->DataPtr = (ushort *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetRBFPoseJointOutputValues @ 14a6772c0

TArrayView<float_const_,int> * __thiscall
TestBehaviorReader::GetRBFPoseJointOutputValues
          (TestBehaviorReader *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->DataPtr = (float *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetRBFPoseName @ 14a6774d0

FString * __thiscall
TestBehaviorReader::GetRBFPoseName
          (TestBehaviorReader *this,FString *__return_storage_ptr__,ushort param_1)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetRBFPoseOutputControlIndices @ 14a677640

TArrayView<unsigned_short_const_,int> * __thiscall
TestBehaviorReader::GetRBFPoseOutputControlIndices
          (TestBehaviorReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->DataPtr = (ushort *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetRBFPoseOutputControlWeights @ 14a6777b0

TArrayView<float_const_,int> * __thiscall
TestBehaviorReader::GetRBFPoseOutputControlWeights
          (TestBehaviorReader *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->DataPtr = (float *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetRBFPoseScale @ 14a677870

float __thiscall TestBehaviorReader::GetRBFPoseScale(TestBehaviorReader *this,ushort param_1)

{
  return 0.0;
}

// GetRBFSolverAutomaticRadius @ 14a677920

EAutomaticRadius __thiscall
TestBehaviorReader::GetRBFSolverAutomaticRadius(TestBehaviorReader *this,ushort param_1)

{
  return On;
}

// GetRBFSolverCount @ 14a6779e0

ushort __thiscall TestBehaviorReader::GetRBFSolverCount(TestBehaviorReader *this)

{
  return 0;
}

// GetRBFSolverDistanceMethod @ 14a677a90

ERBFDistanceMethod __thiscall
TestBehaviorReader::GetRBFSolverDistanceMethod(TestBehaviorReader *this,ushort param_1)

{
  return Euclidean;
}

// GetRBFSolverFunctionType @ 14a677b40

ERBFFunctionType __thiscall
TestBehaviorReader::GetRBFSolverFunctionType(TestBehaviorReader *this,ushort param_1)

{
  return Gaussian;
}

// GetRBFSolverIndexListCount @ 14a677be0

ushort __thiscall TestBehaviorReader::GetRBFSolverIndexListCount(TestBehaviorReader *this)

{
  return 0;
}

// GetRBFSolverIndicesForLOD @ 14a677db0

TArrayView<unsigned_short_const_,int> * __thiscall
TestBehaviorReader::GetRBFSolverIndicesForLOD
          (TestBehaviorReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->DataPtr = (ushort *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetRBFSolverName @ 14a677fc0

FString * __thiscall
TestBehaviorReader::GetRBFSolverName
          (TestBehaviorReader *this,FString *__return_storage_ptr__,ushort param_1)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetRBFSolverNormalizeMethod @ 14a678080

ERBFNormalizeMethod __thiscall
TestBehaviorReader::GetRBFSolverNormalizeMethod(TestBehaviorReader *this,ushort param_1)

{
  return OnlyNormalizeAboveOne;
}

// GetRBFSolverPoseIndices @ 14a6781f0

TArrayView<unsigned_short_const_,int> * __thiscall
TestBehaviorReader::GetRBFSolverPoseIndices
          (TestBehaviorReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->DataPtr = (ushort *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetRBFSolverRadius @ 14a6782b0

float __thiscall TestBehaviorReader::GetRBFSolverRadius(TestBehaviorReader *this,ushort param_1)

{
  return 0.0;
}

// GetRBFSolverRawControlIndices @ 14a678420

TArrayView<unsigned_short_const_,int> * __thiscall
TestBehaviorReader::GetRBFSolverRawControlIndices
          (TestBehaviorReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->DataPtr = (ushort *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetRBFSolverRawControlValues @ 14a6785a0

TArrayView<float_const_,int> * __thiscall
TestBehaviorReader::GetRBFSolverRawControlValues
          (TestBehaviorReader *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->DataPtr = (float *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetRBFSolverTwistAxis @ 14a678660

ETwistAxis __thiscall
TestBehaviorReader::GetRBFSolverTwistAxis(TestBehaviorReader *this,ushort param_1)

{
  return X;
}

// GetRBFSolverType @ 14a678710

ERBFSolverType __thiscall
TestBehaviorReader::GetRBFSolverType(TestBehaviorReader *this,ushort param_1)

{
  return Additive;
}

// GetRBFSolverWeightThreshold @ 14a6787c0

float __thiscall
TestBehaviorReader::GetRBFSolverWeightThreshold(TestBehaviorReader *this,ushort param_1)

{
  return 0.0;
}

// GetRawControlCount @ 14a678900

ushort __thiscall TestBehaviorReader::GetRawControlCount(TestBehaviorReader *this)

{
  return *(ushort *)&this[-1].jointIndicesLOD0.AllocatorInstance.Data;
}

// GetRawControlName @ 14a678ba0

FString * __thiscall
TestBehaviorReader::GetRawControlName
          (TestBehaviorReader *this,FString *__return_storage_ptr__,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  if (*(int *)&this[-1].jointIndicesLOD0.AllocatorInstance.Data <= (int)(uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  ::FString::FString(__return_storage_ptr__,
                     (FString *)
                     ((ulonglong)param_1 * 0x10 + *(longlong *)&this[-1].jointNames.ArrayNum));
  return __return_storage_ptr__;
}

// GetRotationUnit @ 14a678ee0

ERotationUnit __thiscall TestBehaviorReader::GetRotationUnit(TestBehaviorReader *this)

{
  return Degrees;
}

// GetSkinWeightsCount @ 14a679040

uint __thiscall TestBehaviorReader::GetSkinWeightsCount(TestBehaviorReader *this,ushort param_1)

{
  return 0;
}

// GetSkinWeightsJointIndices @ 14a679170

TArrayView<unsigned_short_const_,int> * __thiscall
TestBehaviorReader::GetSkinWeightsJointIndices
          (TestBehaviorReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1,uint param_2)

{
  __return_storage_ptr__->DataPtr = (ushort *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetSkinWeightsValues @ 14a6792b0

TArrayView<float_const_,int> * __thiscall
TestBehaviorReader::GetSkinWeightsValues
          (TestBehaviorReader *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          ushort param_1,uint param_2)

{
  __return_storage_ptr__->DataPtr = (float *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetSwingBlendWeights @ 14a679430

TArrayView<float_const_,int> * __thiscall
TestBehaviorReader::GetSwingBlendWeights
          (TestBehaviorReader *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->DataPtr = (float *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetSwingCount @ 14a6794e0

ushort __thiscall TestBehaviorReader::GetSwingCount(TestBehaviorReader *this)

{
  return 0;
}

// GetSwingInputControlIndices @ 14a679650

TArrayView<unsigned_short_const_,int> * __thiscall
TestBehaviorReader::GetSwingInputControlIndices
          (TestBehaviorReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->DataPtr = (ushort *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetSwingOutputJointIndices @ 14a6797d0

TArrayView<unsigned_short_const_,int> * __thiscall
TestBehaviorReader::GetSwingOutputJointIndices
          (TestBehaviorReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->DataPtr = (ushort *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetSwingSetupTwistAxis @ 14a679890

ETwistAxis __thiscall
TestBehaviorReader::GetSwingSetupTwistAxis(TestBehaviorReader *this,ushort param_1)

{
  return X;
}

// GetTranslationUnit @ 14a679990

ETranslationUnit __thiscall TestBehaviorReader::GetTranslationUnit(TestBehaviorReader *this)

{
  return CM;
}

// GetTwistBlendWeights @ 14a679b00

TArrayView<float_const_,int> * __thiscall
TestBehaviorReader::GetTwistBlendWeights
          (TestBehaviorReader *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->DataPtr = (float *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetTwistCount @ 14a679bb0

ushort __thiscall TestBehaviorReader::GetTwistCount(TestBehaviorReader *this)

{
  return 0;
}

// GetTwistInputControlIndices @ 14a679d20

TArrayView<unsigned_short_const_,int> * __thiscall
TestBehaviorReader::GetTwistInputControlIndices
          (TestBehaviorReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->DataPtr = (ushort *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetTwistOutputJointIndices @ 14a679ea0

TArrayView<unsigned_short_const_,int> * __thiscall
TestBehaviorReader::GetTwistOutputJointIndices
          (TestBehaviorReader *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->DataPtr = (ushort *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetTwistSetupTwistAxis @ 14a679f60

ETwistAxis __thiscall
TestBehaviorReader::GetTwistSetupTwistAxis(TestBehaviorReader *this,ushort param_1)

{
  return X;
}

// GetVertexLayout @ 14a67a070

FVertexLayout * __thiscall
TestBehaviorReader::GetVertexLayout
          (TestBehaviorReader *this,FVertexLayout *__return_storage_ptr__,ushort param_1,
          uint param_2)

{
  __return_storage_ptr__->Position = 0;
  __return_storage_ptr__->TextureCoordinate = 0;
  __return_storage_ptr__->Normal = 0;
  return __return_storage_ptr__;
}

// GetVertexLayoutCount @ 14a67a0f0

uint __thiscall TestBehaviorReader::GetVertexLayoutCount(TestBehaviorReader *this,ushort param_1)

{
  return 0;
}

// GetVertexNormal @ 14a67a250

TVector<double> * __thiscall
TestBehaviorReader::GetVertexNormal
          (TestBehaviorReader *this,TVector<double> *__return_storage_ptr__,ushort param_1,
          uint param_2)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  return __return_storage_ptr__;
}

// GetVertexNormalCount @ 14a67a2d0

uint __thiscall TestBehaviorReader::GetVertexNormalCount(TestBehaviorReader *this,ushort param_1)

{
  return 0;
}

// GetVertexPosition @ 14a67a430

TVector<double> * __thiscall
TestBehaviorReader::GetVertexPosition
          (TestBehaviorReader *this,TVector<double> *__return_storage_ptr__,ushort param_1,
          uint param_2)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  return __return_storage_ptr__;
}

// GetVertexPositionCount @ 14a67a4b0

uint __thiscall TestBehaviorReader::GetVertexPositionCount(TestBehaviorReader *this,ushort param_1)

{
  return 0;
}

// GetVertexPositionXs @ 14a67a5e0

TArrayView<float_const_,int> * __thiscall
TestBehaviorReader::GetVertexPositionXs
          (TestBehaviorReader *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->DataPtr = (float *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetVertexPositionYs @ 14a67a720

TArrayView<float_const_,int> * __thiscall
TestBehaviorReader::GetVertexPositionYs
          (TestBehaviorReader *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->DataPtr = (float *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetVertexPositionZs @ 14a67a860

TArrayView<float_const_,int> * __thiscall
TestBehaviorReader::GetVertexPositionZs
          (TestBehaviorReader *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  __return_storage_ptr__->DataPtr = (float *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetVertexTextureCoordinate @ 14a67a940

FTextureCoordinate __thiscall
TestBehaviorReader::GetVertexTextureCoordinate(TestBehaviorReader *this,ushort param_1,uint param_2)

{
  FTextureCoordinate FVar1;
  undefined6 in_register_00000012;
  
  *(undefined8 *)CONCAT62(in_register_00000012,param_1) = 0;
  FVar1._2_6_ = in_register_00000012;
  FVar1.U._0_2_ = param_1;
  return FVar1;
}

// GetVertexTextureCoordinateCount @ 14a67a9b0

uint __thiscall
TestBehaviorReader::GetVertexTextureCoordinateCount(TestBehaviorReader *this,ushort param_1)

{
  return 0;
}

// ReadDNAFromBuffer @ 14a680840

TSharedPtr<IDNAReader,1> * __cdecl
ReadDNAFromBuffer(TSharedPtr<IDNAReader,1> *__return_storage_ptr__,
                 TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,EDNADataLayer param_2,
                 ushort param_3)

{
  MemoryResource *pMVar1;
  TSharedPtr<FMemoryResource,1> *pTVar2;
  DataLayer DVar3;
  BinaryStreamReader *local_res8;
  FMemScope local_res10;
  FLLMScope local_res18 [2];
  TSharedPtr<FMemoryResource,1> local_68;
  undefined **local_58;
  undefined **local_50;
  undefined **local_48;
  undefined **local_40;
  undefined **local_38;
  undefined **local_30;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_28;
  undefined8 local_20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      FName::FName(&LLMScope_Name56,L"Animation/RigLogic");
      _Init_thread_footer(&_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res18,LLMScope_Name56,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,&LLMScope_Name56,true);
  local_20 = 0;
  local_58 = &FRigLogicMemoryStream::_vftable__for__trio__Openable__;
  local_50 = &FRigLogicMemoryStream::_vftable__for__trio__Closeable__;
  local_48 = &FRigLogicMemoryStream::_vftable__for__trio__Readable__;
  local_40 = &FRigLogicMemoryStream::_vftable__for__trio__Writable__;
  local_38 = &FRigLogicMemoryStream::_vftable__for__trio__Seekable__;
  local_30 = &FRigLogicMemoryStream::_vftable__for__trio__Bounded__;
  local_28 = param_1;
  pTVar2 = FMemoryResource::SharedInstance(&local_68);
  pMVar1 = (MemoryResource *)pTVar2->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  DVar3 = param_2 | 0x183;
  if ((param_2 & RBFBehavior) != RBFBehavior) {
    DVar3 = (uint)param_2;
  }
  local_res8 = dna::BinaryStreamReader::create
                         ((BoundedIOStream *)&local_58,DVar3,Preserve,param_3,pMVar1);
  ReadDNAStream(__return_storage_ptr__,(BinaryStreamReader *)&local_res8);
  trio::BoundedIOStream::~BoundedIOStream((BoundedIOStream *)&local_58);
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res18);
  return __return_storage_ptr__;
}

// ReadDNAFromBuffer @ 14a6809f0

TSharedPtr<IDNAReader,1> * __cdecl
ReadDNAFromBuffer(TSharedPtr<IDNAReader,1> *__return_storage_ptr__,
                 TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,EDNADataLayer param_2,
                 TArrayView<unsigned_short,int> *param_3)

{
  MemoryResource *pMVar1;
  TSharedPtr<FMemoryResource,1> *pTVar2;
  DataLayer DVar3;
  BinaryStreamReader *local_res8;
  FMemScope local_res10;
  FLLMScope local_res18 [2];
  TSharedPtr<FMemoryResource,1> local_68;
  undefined **local_58;
  undefined **local_50;
  undefined **local_48;
  undefined **local_40;
  undefined **local_38;
  undefined **local_30;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_28;
  undefined8 local_20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      FName::FName(&LLMScope_Name64,L"Animation/RigLogic");
      _Init_thread_footer(&_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res18,LLMScope_Name64,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,&LLMScope_Name64,true);
  local_20 = 0;
  local_58 = &FRigLogicMemoryStream::_vftable__for__trio__Openable__;
  local_50 = &FRigLogicMemoryStream::_vftable__for__trio__Closeable__;
  local_48 = &FRigLogicMemoryStream::_vftable__for__trio__Readable__;
  local_40 = &FRigLogicMemoryStream::_vftable__for__trio__Writable__;
  local_38 = &FRigLogicMemoryStream::_vftable__for__trio__Seekable__;
  local_30 = &FRigLogicMemoryStream::_vftable__for__trio__Bounded__;
  local_28 = param_1;
  pTVar2 = FMemoryResource::SharedInstance(&local_68);
  pMVar1 = (MemoryResource *)pTVar2->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  DVar3 = param_2 | 0x183;
  if ((param_2 & RBFBehavior) != RBFBehavior) {
    DVar3 = (uint)param_2;
  }
  local_res8 = dna::BinaryStreamReader::create
                         ((BoundedIOStream *)&local_58,DVar3,Preserve,param_3->DataPtr,
                          (ushort)param_3->ArrayNum,pMVar1);
  ReadDNAStream(__return_storage_ptr__,(BinaryStreamReader *)&local_res8);
  trio::BoundedIOStream::~BoundedIOStream((BoundedIOStream *)&local_58);
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res18);
  return __return_storage_ptr__;
}

// ReadDNAFromFile @ 14a680bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedPtr<IDNAReader,1> * __cdecl
ReadDNAFromFile(TSharedPtr<IDNAReader,1> *__return_storage_ptr__,FString *param_1,
               EDNADataLayer param_2,ushort param_3)

{
  uint uVar1;
  MemoryResource *pMVar2;
  DataLayer DVar3;
  TSharedPtr<FMemoryResource,1> *pTVar4;
  size_t sVar5;
  MemoryMappedFileStream *pMVar6;
  wchar_t *_Str;
  uint uVar7;
  undefined1 auStackY_148 [32];
  FLLMScope local_118 [2];
  TSharedPtr<FMemoryResource,1> local_110;
  FMemScope local_100;
  FScriptContainerElement local_f8 [128];
  ForAnyElementType local_78;
  FScriptContainerElement *local_70;
  int local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_148;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    FName::FName(&LLMScope_Name40,L"Animation/RigLogic");
    _Init_thread_footer(&_TSS0);
  }
  FLLMScope::FLLMScope(local_118,LLMScope_Name40,false,None,Default,true);
  FMemScope::FMemScope(&local_100,&LLMScope_Name40,true);
  pTVar4 = FMemoryResource::SharedInstance(&local_110);
  pMVar2 = (MemoryResource *)pTVar4->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_110.SharedReferenceCount.ReferenceController);
  local_78.Data = (FScriptContainerElement *)0x0;
  if ((param_1->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    if ((FScriptContainerElement *)_Str == (FScriptContainerElement *)0x0) {
      local_70 = (FScriptContainerElement *)0x0;
      local_68 = 0;
      goto LAB_14a680d05;
    }
  }
  sVar5 = wcslen(_Str);
  local_68 = UE::Core::Private::GetConvertedLength((uchar *)0x0,_Str,(int)sVar5);
  uVar1 = local_68 + 1;
  uVar7 = uVar1;
  if (uVar1 < 0x81) {
    if (local_78.Data != (FScriptContainerElement *)0x0) {
      uVar7 = 0;
      goto LAB_14a680cc6;
    }
  }
  else {
LAB_14a680cc6:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,uVar7,1);
  }
  local_70 = local_f8;
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    local_70 = local_78.Data;
  }
  UE::Core::Private::Convert((uchar *)local_70,uVar1,_Str,(int)sVar5 + 1);
LAB_14a680d05:
  pMVar6 = trio::MemoryMappedFileStream::create((char *)local_70,Read,pMVar2);
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  pTVar4 = FMemoryResource::SharedInstance(&local_110);
  pMVar2 = (MemoryResource *)pTVar4->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_110.SharedReferenceCount.ReferenceController);
  DVar3 = param_2 | 0x183;
  if ((param_2 & RBFBehavior) != RBFBehavior) {
    DVar3 = (uint)param_2;
  }
  local_110.Object =
       (FMemoryResource *)
       dna::BinaryStreamReader::create((BoundedIOStream *)pMVar6,DVar3,Preserve,param_3,pMVar2);
  ReadDNAStream(__return_storage_ptr__,(BinaryStreamReader *)&local_110);
  if (pMVar6 != (MemoryMappedFileStream *)0x0) {
    trio::MemoryMappedFileStream::destroy(pMVar6);
  }
  FMemScope::~FMemScope(&local_100);
  FLLMScope::~FLLMScope(local_118);
  return __return_storage_ptr__;
}

// ReadDNAFromFile @ 14a680e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedPtr<IDNAReader,1> * __cdecl
ReadDNAFromFile(TSharedPtr<IDNAReader,1> *__return_storage_ptr__,FString *param_1,
               EDNADataLayer param_2,TArrayView<unsigned_short,int> *param_3)

{
  uint uVar1;
  MemoryResource *pMVar2;
  DataLayer DVar3;
  TSharedPtr<FMemoryResource,1> *pTVar4;
  size_t sVar5;
  MemoryMappedFileStream *pMVar6;
  wchar_t *_Str;
  uint uVar7;
  undefined1 auStackY_148 [32];
  FLLMScope local_118 [2];
  TSharedPtr<FMemoryResource,1> local_110;
  FMemScope local_100;
  FScriptContainerElement local_f8 [128];
  ForAnyElementType local_78;
  FScriptContainerElement *local_70;
  int local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_148;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    FName::FName(&LLMScope_Name48,L"Animation/RigLogic");
    _Init_thread_footer(&_TSS0);
  }
  FLLMScope::FLLMScope(local_118,LLMScope_Name48,false,None,Default,true);
  FMemScope::FMemScope(&local_100,&LLMScope_Name48,true);
  pTVar4 = FMemoryResource::SharedInstance(&local_110);
  pMVar2 = (MemoryResource *)pTVar4->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_110.SharedReferenceCount.ReferenceController);
  local_78.Data = (FScriptContainerElement *)0x0;
  if ((param_1->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    if ((FScriptContainerElement *)_Str == (FScriptContainerElement *)0x0) {
      local_70 = (FScriptContainerElement *)0x0;
      local_68 = 0;
      goto LAB_14a680f74;
    }
  }
  sVar5 = wcslen(_Str);
  local_68 = UE::Core::Private::GetConvertedLength((uchar *)0x0,_Str,(int)sVar5);
  uVar1 = local_68 + 1;
  uVar7 = uVar1;
  if (uVar1 < 0x81) {
    if (local_78.Data != (FScriptContainerElement *)0x0) {
      uVar7 = 0;
      goto LAB_14a680f35;
    }
  }
  else {
LAB_14a680f35:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,uVar7,1);
  }
  local_70 = local_f8;
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    local_70 = local_78.Data;
  }
  UE::Core::Private::Convert((uchar *)local_70,uVar1,_Str,(int)sVar5 + 1);
LAB_14a680f74:
  pMVar6 = trio::MemoryMappedFileStream::create((char *)local_70,Read,pMVar2);
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  pTVar4 = FMemoryResource::SharedInstance(&local_110);
  pMVar2 = (MemoryResource *)pTVar4->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_110.SharedReferenceCount.ReferenceController);
  DVar3 = param_2 | 0x183;
  if ((param_2 & RBFBehavior) != RBFBehavior) {
    DVar3 = (uint)param_2;
  }
  local_110.Object =
       (FMemoryResource *)
       dna::BinaryStreamReader::create
                 ((BoundedIOStream *)pMVar6,DVar3,Preserve,param_3->DataPtr,
                  (ushort)param_3->ArrayNum,pMVar2);
  ReadDNAStream(__return_storage_ptr__,(BinaryStreamReader *)&local_110);
  if (pMVar6 != (MemoryMappedFileStream *)0x0) {
    trio::MemoryMappedFileStream::destroy(pMVar6);
  }
  FMemScope::~FMemScope(&local_100);
  FLLMScope::~FLLMScope(local_118);
  return __return_storage_ptr__;
}

// ReadDNAFromStream @ 14a681090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IDNAReader,1> * __cdecl
ReadDNAFromStream(TSharedPtr<IDNAReader,1> *__return_storage_ptr__,BoundedIOStream *param_1,
                 EDNADataLayer param_2,ushort param_3)

{
  MemoryResource *pMVar1;
  TReferenceControllerBase<1> *pTVar2;
  char *_Str;
  bool bVar3;
  TSharedPtr<FMemoryResource,1> *pTVar4;
  BinaryStreamReader *pBVar5;
  StatusCode *pSVar6;
  size_t sVar7;
  TSharedRef<FDNAReader<dna::BinaryStreamReader>,1> *pTVar8;
  DataLayer DVar9;
  undefined1 auStackY_1a8 [32];
  TSharedPtr<FMemoryResource,1> local_178;
  TSharedRef<FDNAReader<dna::BinaryStreamReader>,1> local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pTVar4 = FMemoryResource::SharedInstance(&local_178);
  pMVar1 = (MemoryResource *)pTVar4->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.SharedReferenceCount.ReferenceController);
  DVar9 = param_2 | 0x183;
  if ((param_2 & RBFBehavior) != RBFBehavior) {
    DVar9 = (uint)param_2;
  }
  pBVar5 = dna::BinaryStreamReader::create(param_1,DVar9,Preserve,param_3,pMVar1);
  (**(code **)(*(longlong *)pBVar5 + 0xe0))(pBVar5);
  bVar3 = sc::Status::isOk();
  if (bVar3) {
    local_178.Object = (FMemoryResource *)pBVar5;
    pTVar8 = MakeShared<FDNAReader<dna::BinaryStreamReader>,1,dna::BinaryStreamReader_*>
                       (&local_168,(BinaryStreamReader **)&local_178);
    __return_storage_ptr__->Object = (IDNAReader *)pTVar8->Object;
    pTVar2 = (pTVar8->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_168.SharedReferenceCount.ReferenceController);
  }
  else {
    if (1 < (byte)LogDNAAsset._0_1_) {
      pSVar6 = sc::Status::get((StatusCode *)&local_168);
      _Str = pSVar6->message;
      local_158._padding_ = 0;
      if (_Str == (char *)0x0) {
        local_158.Ptr = (wchar_t *)0x0;
        local_158.StringLength = 0;
      }
      else {
        sVar7 = strlen(_Str);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_158,_Str,(int)sVar7,Yes);
      }
      UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogDNAAsset);
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
    __return_storage_ptr__->Object = (IDNAReader *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pBVar5 != (BinaryStreamReader *)0x0) {
      dna::BinaryStreamReader::destroy(pBVar5);
    }
  }
  return __return_storage_ptr__;
}

// ReadDNAStream @ 14a681220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IDNAReader,1> * __cdecl
ReadDNAStream(TSharedPtr<IDNAReader,1> *__return_storage_ptr__,
             ScopedPtr<dna::BinaryStreamReader,pma::FactoryDestroy<dna::BinaryStreamReader,dna::BinaryStreamReader>_>
             param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  char *_Str;
  bool bVar2;
  StatusCode *pSVar3;
  size_t sVar4;
  TSharedRef<FDNAReader<dna::BinaryStreamReader>,1> *pTVar5;
  undefined1 auStack_188 [32];
  BinaryStreamReader *local_168;
  TSharedRef<FDNAReader<dna::BinaryStreamReader>,1> local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_188;
  (**(code **)(**(longlong **)param_1.ptr + 0xe0))();
  bVar2 = sc::Status::isOk();
  if (bVar2) {
                    /* WARNING: Load size is inaccurate */
    local_168 = *param_1.ptr;
    *(undefined8 *)param_1.ptr = 0;
    pTVar5 = MakeShared<FDNAReader<dna::BinaryStreamReader>,1,dna::BinaryStreamReader_*>
                       (&local_160,&local_168);
    __return_storage_ptr__->Object = (IDNAReader *)pTVar5->Object;
    pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_160.SharedReferenceCount.ReferenceController);
  }
  else {
    if (1 < (byte)LogDNAReader._0_1_) {
      pSVar3 = sc::Status::get((StatusCode *)&local_160);
      _Str = pSVar3->message;
      local_148._padding_ = 0;
      if (_Str == (char *)0x0) {
        local_148.Ptr = (wchar_t *)0x0;
        local_148.StringLength = 0;
      }
      else {
        sVar4 = strlen(_Str);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,_Str,(int)sVar4,Yes);
      }
      UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogDNAReader);
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    __return_storage_ptr__->Object = (IDNAReader *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
                    /* WARNING: Load size is inaccurate */
  if (*param_1.ptr != (BinaryStreamReader *)0x0) {
    dna::BinaryStreamReader::destroy(*param_1.ptr);
    *(undefined8 *)param_1.ptr = 0;
  }
  return __return_storage_ptr__;
}

// ReadStreamFromDNA @ 14a681380

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __cdecl
ReadStreamFromDNA(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
                 IDNAReader *param_1,EDNADataLayer param_2)

{
  MemoryResource *pMVar1;
  code *pcVar2;
  FMemoryResource *pFVar3;
  uint uVar4;
  ForAnyElementType _Src;
  int iVar5;
  int iVar6;
  MemoryStream *pMVar7;
  TSharedPtr<FMemoryResource,1> *pTVar8;
  BinaryStreamWriter *pBVar9;
  undefined8 uVar10;
  size_t _Size;
  FMemScope local_res8;
  FLLMScope local_res18 [5];
  ForAnyElementType local_58;
  int local_50 [2];
  TSharedPtr<FMemoryResource,1> local_48;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      FName::FName(&LLMScope_Name72,L"Animation/RigLogic");
      _Init_thread_footer(&_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res18,LLMScope_Name72,false,None,Default,true);
  FMemScope::FMemScope(&local_res8,&LLMScope_Name72,true);
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50[0] = 0;
  local_50[1] = 0;
  pMVar7 = trio::MemoryStream::create((MemoryResource *)0x0);
  pTVar8 = FMemoryResource::SharedInstance(&local_48);
  pMVar1 = (MemoryResource *)pTVar8->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  pBVar9 = dna::BinaryStreamWriter::create((BoundedIOStream *)pMVar7,pMVar1);
  pcVar2 = *(code **)(*(longlong *)pBVar9 + 200);
  pTVar8 = FMemoryResource::SharedInstance(&local_48);
  pFVar3 = pTVar8->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  uVar10 = (**(code **)(*(longlong *)
                         (&param_1->field_0x8 + *(int *)(*(longlong *)&param_1->field_0x8 + 4)) + 8)
           )();
  uVar4 = param_2 | 0x183;
  if ((param_2 & RBFBehavior) != RBFBehavior) {
    uVar4 = (uint)param_2;
  }
  (*pcVar2)(pBVar9,uVar10,uVar4,0,pFVar3);
  (**(code **)(*(longlong *)pBVar9 + 0xd0))(pBVar9);
  iVar5 = (*(code *)**(undefined8 **)&pMVar7->field_0x28)(&pMVar7->field_0x28);
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar5,&local_58,local_50,local_50 + 1);
  memset(local_58.Data + iVar6,0,(longlong)iVar5);
  pcVar2 = *(code **)(*(longlong *)&pMVar7->field_0x10 + 8);
  uVar10 = (*(code *)**(undefined8 **)&pMVar7->field_0x28)(&pMVar7->field_0x28);
  (*pcVar2)(&pMVar7->field_0x10,local_58.Data,uVar10);
  _Src.Data = local_58.Data;
  _Size = (size_t)local_50[0];
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = local_50[0];
  if (local_50[0] == 0) {
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_50[0],0,&__return_storage_ptr__->AllocatorInstance,local_50[0],
               &__return_storage_ptr__->ArrayMax);
    memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src.Data,_Size);
  }
  dna::BinaryStreamWriter::destroy(pBVar9);
  trio::MemoryStream::destroy(pMVar7);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  FMemScope::~FMemScope(&local_res8);
  FLLMScope::~FLLMScope(local_res18);
  return __return_storage_ptr__;
}

// Unload @ 14a683850

void __thiscall TestBehaviorReader::Unload(TestBehaviorReader *this,EDNADataLayer param_1)

{
  return;
}

// Unwrap @ 14a6838e0

Reader * __thiscall TestBehaviorReader::Unwrap(TestBehaviorReader *this)

{
  return (Reader *)0x0;
}

// WriteDNAToFile @ 14a6884a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl WriteDNAToFile(IDNAReader *param_1,EDNADataLayer param_2,FString *param_3)

{
  uint uVar1;
  MemoryResource *pMVar2;
  code *pcVar3;
  TSharedPtr<FMemoryResource,1> *pTVar4;
  size_t sVar5;
  FileStream *pFVar6;
  BinaryStreamWriter *pBVar7;
  undefined8 uVar8;
  wchar_t *_Str;
  uint uVar9;
  undefined1 auStackY_138 [32];
  FLLMScope local_108 [2];
  TSharedPtr<FMemoryResource,1> local_100;
  FMemScope local_f0;
  FScriptContainerElement local_e8 [128];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    FName::FName(&LLMScope_Name85,L"Animation/RigLogic");
    _Init_thread_footer(&_TSS0);
  }
  FLLMScope::FLLMScope(local_108,LLMScope_Name85,false,None,Default,true);
  FMemScope::FMemScope(&local_f0,&LLMScope_Name85,true);
  pTVar4 = FMemoryResource::SharedInstance(&local_100);
  pMVar2 = (MemoryResource *)pTVar4->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_100.SharedReferenceCount.ReferenceController);
  local_68.Data = (FScriptContainerElement *)0x0;
  if ((param_3->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
    if ((FScriptContainerElement *)_Str == (FScriptContainerElement *)0x0) {
      local_60 = (FScriptContainerElement *)0x0;
      local_58 = 0;
      goto LAB_14a6885d9;
    }
  }
  sVar5 = wcslen(_Str);
  local_58 = UE::Core::Private::GetConvertedLength((uchar *)0x0,_Str,(int)sVar5);
  uVar1 = local_58 + 1;
  uVar9 = uVar1;
  if (uVar1 < 0x81) {
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      uVar9 = 0;
      goto LAB_14a6885a2;
    }
  }
  else {
LAB_14a6885a2:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar9,1);
  }
  local_60 = local_e8;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    local_60 = local_68.Data;
  }
  UE::Core::Private::Convert((uchar *)local_60,uVar1,_Str,(int)sVar5 + 1);
LAB_14a6885d9:
  pFVar6 = trio::FileStream::create((char *)local_60,Write,Binary,pMVar2);
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  pTVar4 = FMemoryResource::SharedInstance(&local_100);
  pMVar2 = (MemoryResource *)pTVar4->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_100.SharedReferenceCount.ReferenceController);
  pBVar7 = dna::BinaryStreamWriter::create((BoundedIOStream *)pFVar6,pMVar2);
  pcVar3 = *(code **)(*(longlong *)pBVar7 + 200);
  FMemoryResource::SharedInstance(&local_100);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_100.SharedReferenceCount.ReferenceController);
  uVar8 = (**(code **)(*(longlong *)
                        (&param_1->field_0x8 + *(int *)(*(longlong *)&param_1->field_0x8 + 4)) + 8))
                    ();
  uVar1 = param_2 | 0x183;
  if ((param_2 & RBFBehavior) != RBFBehavior) {
    uVar1 = (uint)param_2;
  }
  (*pcVar3)(pBVar7,uVar8,uVar1,0);
  (**(code **)(*(longlong *)pBVar7 + 0xd0))(pBVar7);
  dna::BinaryStreamWriter::destroy(pBVar7);
  if (pFVar6 != (FileStream *)0x0) {
    trio::FileStream::destroy(pFVar6);
  }
  FMemScope::~FMemScope(&local_f0);
  FLLMScope::~FLLMScope(local_108);
  return;
}

// Z_Construct_UClass_UDEPRECATED_DNAIndexMapping_NoRegister @ 14a688730

UClass * __cdecl Z_Construct_UClass_UDEPRECATED_DNAIndexMapping_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_DNAIndexMapping.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/RigLogicModule",L"DNAIndexMapping",
               &Z_Registration_Info_UClass_UDEPRECATED_DNAIndexMapping.InnerSingleton,
               UDEPRECATED_DNAIndexMapping::StaticRegisterNativesUDEPRECATED_DNAIndexMapping,0x28,8,
               CLASS_Intrinsic|CLASS_Deprecated,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_DNAIndexMapping>,
               InternalVTableHelperCtorCaller<UDEPRECATED_DNAIndexMapping>,local_res8,
               UAssetUserData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_DNAIndexMapping.InnerSingleton;
}

// Z_Construct_UClass_UDNAAsset_NoRegister @ 14a6887f0

UClass * __cdecl Z_Construct_UClass_UDNAAsset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDNAAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/RigLogicModule",L"DNAAsset",
               &Z_Registration_Info_UClass_UDNAAsset.InnerSingleton,
               UDNAAsset::StaticRegisterNativesUDNAAsset,0x140,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDNAAsset>,InternalVTableHelperCtorCaller<UDNAAsset>,
               local_res8,UAssetUserData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDNAAsset.InnerSingleton;
}

// Z_Construct_UClass_USkelMeshDNAUtils_NoRegister @ 14a6888b0

UClass * __cdecl Z_Construct_UClass_USkelMeshDNAUtils_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USkelMeshDNAUtils.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/RigLogicModule",L"SkelMeshDNAUtils",
               &Z_Registration_Info_UClass_USkelMeshDNAUtils.InnerSingleton,
               USkelMeshDNAUtils::StaticRegisterNativesUSkelMeshDNAUtils,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USkelMeshDNAUtils>,
               InternalVTableHelperCtorCaller<USkelMeshDNAUtils>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USkelMeshDNAUtils.InnerSingleton;
}

// Z_Construct_UEnum_RigLogicModule_EActivationFunction @ 14a688960

UEnum * __cdecl Z_Construct_UEnum_RigLogicModule_EActivationFunction(void)

{
  if (Z_Registration_Info_UEnum_EActivationFunction.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EActivationFunction.InnerSingleton,
               &Z_Construct_UEnum_RigLogicModule_EActivationFunction_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EActivationFunction.InnerSingleton;
}

// Z_Construct_UEnum_RigLogicModule_EArchetype @ 14a6889a0

UEnum * __cdecl Z_Construct_UEnum_RigLogicModule_EArchetype(void)

{
  if (Z_Registration_Info_UEnum_EArchetype.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EArchetype.InnerSingleton,
               &Z_Construct_UEnum_RigLogicModule_EArchetype_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EArchetype.InnerSingleton;
}

// Z_Construct_UEnum_RigLogicModule_EAutomaticRadius @ 14a6889e0

UEnum * __cdecl Z_Construct_UEnum_RigLogicModule_EAutomaticRadius(void)

{
  if (Z_Registration_Info_UEnum_EAutomaticRadius.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAutomaticRadius.InnerSingleton,
               &Z_Construct_UEnum_RigLogicModule_EAutomaticRadius_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAutomaticRadius.InnerSingleton;
}

// Z_Construct_UEnum_RigLogicModule_EDNADataLayer @ 14a688a20

UEnum * __cdecl Z_Construct_UEnum_RigLogicModule_EDNADataLayer(void)

{
  if (Z_Registration_Info_UEnum_EDNADataLayer.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDNADataLayer.InnerSingleton,
               &Z_Construct_UEnum_RigLogicModule_EDNADataLayer_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDNADataLayer.InnerSingleton;
}

// Z_Construct_UEnum_RigLogicModule_EGender @ 14a688a60

UEnum * __cdecl Z_Construct_UEnum_RigLogicModule_EGender(void)

{
  if (Z_Registration_Info_UEnum_EGender.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGender.InnerSingleton,
               &Z_Construct_UEnum_RigLogicModule_EGender_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EGender.InnerSingleton;
}

// Z_Construct_UEnum_RigLogicModule_ELodUpdateOption @ 14a688aa0

UEnum * __cdecl Z_Construct_UEnum_RigLogicModule_ELodUpdateOption(void)

{
  if (Z_Registration_Info_UEnum_ELodUpdateOption.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ELodUpdateOption.InnerSingleton,
               &Z_Construct_UEnum_RigLogicModule_ELodUpdateOption_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ELodUpdateOption.InnerSingleton;
}

// Z_Construct_UEnum_RigLogicModule_ERotationRepresentation @ 14a688ae0

UEnum * __cdecl Z_Construct_UEnum_RigLogicModule_ERotationRepresentation(void)

{
  if (Z_Registration_Info_UEnum_ERotationRepresentation.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERotationRepresentation.InnerSingleton,
               &Z_Construct_UEnum_RigLogicModule_ERotationRepresentation_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERotationRepresentation.InnerSingleton;
}

// Z_Construct_UEnum_RigLogicModule_ERotationUnit @ 14a688b20

UEnum * __cdecl Z_Construct_UEnum_RigLogicModule_ERotationUnit(void)

{
  if (Z_Registration_Info_UEnum_ERotationUnit.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERotationUnit.InnerSingleton,
               &Z_Construct_UEnum_RigLogicModule_ERotationUnit_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERotationUnit.InnerSingleton;
}

// Z_Construct_UEnum_RigLogicModule_EScaleRepresentation @ 14a688b60

UEnum * __cdecl Z_Construct_UEnum_RigLogicModule_EScaleRepresentation(void)

{
  if (Z_Registration_Info_UEnum_EScaleRepresentation.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EScaleRepresentation.InnerSingleton,
               &Z_Construct_UEnum_RigLogicModule_EScaleRepresentation_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EScaleRepresentation.InnerSingleton;
}

// Z_Construct_UEnum_RigLogicModule_ETranslationRepresentation @ 14a688ba0

UEnum * __cdecl Z_Construct_UEnum_RigLogicModule_ETranslationRepresentation(void)

{
  if (Z_Registration_Info_UEnum_ETranslationRepresentation.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETranslationRepresentation.InnerSingleton,
               &Z_Construct_UEnum_RigLogicModule_ETranslationRepresentation_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ETranslationRepresentation.InnerSingleton;
}

// Z_Construct_UEnum_RigLogicModule_ETranslationUnit @ 14a688be0

UEnum * __cdecl Z_Construct_UEnum_RigLogicModule_ETranslationUnit(void)

{
  if (Z_Registration_Info_UEnum_ETranslationUnit.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETranslationUnit.InnerSingleton,
               &Z_Construct_UEnum_RigLogicModule_ETranslationUnit_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ETranslationUnit.InnerSingleton;
}

// Z_Construct_UEnum_RigLogicModule_ETwistAxis @ 14a688c20

UEnum * __cdecl Z_Construct_UEnum_RigLogicModule_ETwistAxis(void)

{
  if (Z_Registration_Info_UEnum_ETwistAxis.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETwistAxis.InnerSingleton,
               &Z_Construct_UEnum_RigLogicModule_ETwistAxis_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ETwistAxis.InnerSingleton;
}

// Z_Construct_UScriptStruct_FAnimNode_RigLogic @ 14a688c60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNode_RigLogic(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_RigLogic.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNode_RigLogic.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNode_RigLogic_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNode_RigLogic.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNode_RigLogic.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FCoordinateSystem @ 14a688ce0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCoordinateSystem(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCoordinateSystem.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCoordinateSystem.InnerSingleton,
               &Z_Construct_UScriptStruct_FCoordinateSystem_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCoordinateSystem.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCoordinateSystem.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FMeshBlendShapeChannelMapping @ 14a688d60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMeshBlendShapeChannelMapping(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMeshBlendShapeChannelMapping.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMeshBlendShapeChannelMapping.InnerSingleton,
               &Z_Construct_UScriptStruct_FMeshBlendShapeChannelMapping_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMeshBlendShapeChannelMapping.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMeshBlendShapeChannelMapping.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FRigUnit_RigLogic @ 14a688de0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigUnit_RigLogic(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_RigLogic.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigUnit_RigLogic.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigUnit_RigLogic_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigUnit_RigLogic.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigUnit_RigLogic.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FTextureCoordinate @ 14a688e60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTextureCoordinate(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTextureCoordinate.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTextureCoordinate.InnerSingleton,
               &Z_Construct_UScriptStruct_FTextureCoordinate_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTextureCoordinate.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTextureCoordinate.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FVertexLayout @ 14a688ee0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FVertexLayout(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FVertexLayout.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FVertexLayout.InnerSingleton,
               &Z_Construct_UScriptStruct_FVertexLayout_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FVertexLayout.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FVertexLayout.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// addBlendShapeChannelName @ 14a688f60

void __thiscall
TestBehaviorReader::addBlendShapeChannelName(TestBehaviorReader *this,FString *param_1)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  pTVar2 = &this->blendShapeChannelNames;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) &&
     (param_1 < pFVar3 + (longlong)(this->blendShapeChannelNames).ArrayMax * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->blendShapeChannelNames).ArrayNum;
  piVar1 = &(this->blendShapeChannelNames).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->blendShapeChannelNames).ArrayNum = iVar6 + 1;
  ::FString::FString((FString *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x10),param_1)
  ;
  pFVar3 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// addBlendShapeMapping @ 14a689030

void __thiscall
TestBehaviorReader::addBlendShapeMapping(TestBehaviorReader *this,ushort param_1,ushort param_2)

{
  int *piVar1;
  TArray<FMeshBlendShapeChannelMapping,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint local_18;
  uint uStack_14;
  
  local_18 = (uint)param_1;
  pTVar2 = &this->meshBlendShapeChannelMappings;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  uStack_14 = (uint)param_2;
  if ((pFVar3 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar3 + (longlong)(this->meshBlendShapeChannelMappings).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->meshBlendShapeChannelMappings).ArrayNum;
  piVar1 = &(this->meshBlendShapeChannelMappings).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->meshBlendShapeChannelMappings).ArrayNum = iVar6 + 1;
  *(ulonglong *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) =
       CONCAT44(uStack_14,local_18);
  return;
}

// addJoint @ 14a6890f0

void __thiscall TestBehaviorReader::addJoint(TestBehaviorReader *this,FString *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  pTVar1 = &this->jointNames;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (longlong)(this->jointNames).ArrayMax * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->jointNames).ArrayNum;
  piVar2 = &(this->jointNames).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->jointNames).ArrayNum = iVar6 + 1;
  ::FString::FString((FString *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x10),param_1)
  ;
  pFVar3 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// addMeshName @ 14a6891c0

void __thiscall TestBehaviorReader::addMeshName(TestBehaviorReader *this,FString *param_1)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  pTVar2 = &this->meshNames;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (longlong)(this->meshNames).ArrayMax * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->meshNames).ArrayNum;
  piVar1 = &(this->meshNames).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->meshNames).ArrayNum = iVar6 + 1;
  ::FString::FString((FString *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x10),param_1)
  ;
  pFVar3 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// destroy @ 14a6892e0

void __cdecl RigLogicDNAReader::destroy(Reader *param_1)

{
  return;
}

// getAge`vtordisp{4294967292,0}' @ 14a6892ec

/* [thunk]:public: virtual unsigned short __cdecl RigLogicDNAReader::getAge`vtordisp{4294967292,0}'
   (void)const __ptr64 */

ushort __thiscall RigLogicDNAReader::getAge_vtordisp_4294967292_0__(RigLogicDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = getAge((RigLogicDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0xa4));
  return uVar1;
}

// getAge @ 14a689300

ushort __thiscall RigLogicDNAReader::getAge(RigLogicDNAReader *this)

{
  longlong lVar1;
  ushort uVar2;
  
  lVar1 = *(longlong *)&this[-1].RBFValues.ArrayNum;
                    /* WARNING: Could not recover jumptable at 0x00014a689316. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) +
                      0x30))();
  return uVar2;
}

// getAnimatedMapCount`vtordisp{4294967292,0}' @ 14a689320

/* [thunk]:public: virtual unsigned short __cdecl
   RigLogicDNAReader::getAnimatedMapCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
RigLogicDNAReader::getAnimatedMapCount_vtordisp_4294967292_0__(RigLogicDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = getAnimatedMapCount((RigLogicDNAReader *)
                              ((longlong)this - (longlong)*(int *)&this[-1].field_0xa4));
  return uVar1;
}

// getAnimatedMapCount @ 14a689340

ushort __thiscall RigLogicDNAReader::getAnimatedMapCount(RigLogicDNAReader *this)

{
  longlong lVar1;
  ushort uVar2;
  
  lVar1 = *(longlong *)&this[-1].RBFValues.ArrayNum;
                    /* WARNING: Could not recover jumptable at 0x00014a689356. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) +
                      0xf0))();
  return uVar2;
}

// getAnimatedMapCutValues`vtordisp{4294967292,0}' @ 14a689364

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   RigLogicDNAReader::getAnimatedMapCutValues`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getAnimatedMapCutValues_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getAnimatedMapCutValues
                     ((RigLogicDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0xa4)
                      ,__return_storage_ptr__);
  return pAVar1;
}

// getAnimatedMapCutValues @ 14a689380

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getAnimatedMapCutValues
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this[-1].Values.ArrayNum;
  (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 8) + lVar1 + 8) + 0xe0))
            ();
  return __return_storage_ptr__;
}

// getAnimatedMapFromValues`vtordisp{4294967292,0}' @ 14a6893b4

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   RigLogicDNAReader::getAnimatedMapFromValues`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getAnimatedMapFromValues_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getAnimatedMapFromValues
                     ((RigLogicDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0xa4)
                      ,__return_storage_ptr__);
  return pAVar1;
}

// getAnimatedMapFromValues @ 14a6893d0

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getAnimatedMapFromValues
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this[-1].Values.ArrayNum;
  (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 8) + lVar1 + 8) + 200))()
  ;
  return __return_storage_ptr__;
}

// getAnimatedMapIndexListCount`vtordisp{4294967292,0}' @ 14a689404

/* [thunk]:public: virtual unsigned short __cdecl
   RigLogicDNAReader::getAnimatedMapIndexListCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
RigLogicDNAReader::getAnimatedMapIndexListCount_vtordisp_4294967292_0__(RigLogicDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = getAnimatedMapIndexListCount
                    ((RigLogicDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0xa4))
  ;
  return uVar1;
}

// getAnimatedMapIndexListCount @ 14a689420

ushort __thiscall RigLogicDNAReader::getAnimatedMapIndexListCount(RigLogicDNAReader *this)

{
  longlong lVar1;
  ushort uVar2;
  
  lVar1 = *(longlong *)&this[-1].RBFValues.ArrayNum;
                    /* WARNING: Could not recover jumptable at 0x00014a689436. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) +
                      0x100))();
  return uVar2;
}

// getAnimatedMapIndicesForLOD`vtordisp{4294967292,0}' @ 14a689444

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   RigLogicDNAReader::getAnimatedMapIndicesForLOD`vtordisp{4294967292,0}' (unsigned short)const
   __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getAnimatedMapIndicesForLOD_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getAnimatedMapIndicesForLOD
                     ((RigLogicDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0xa4)
                      ,__return_storage_ptr__,param_1);
  return pAVar1;
}

// getAnimatedMapIndicesForLOD @ 14a689460

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getAnimatedMapIndicesForLOD
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this[-1].RBFValues.ArrayNum;
  (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 0x108))
            ();
  return __return_storage_ptr__;
}

// getAnimatedMapInputIndices`vtordisp{4294967292,0}' @ 14a689494

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   RigLogicDNAReader::getAnimatedMapInputIndices`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getAnimatedMapInputIndices_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getAnimatedMapInputIndices
                     ((RigLogicDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0xa4)
                      ,__return_storage_ptr__);
  return pAVar1;
}

// getAnimatedMapInputIndices @ 14a6894b0

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getAnimatedMapInputIndices
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this[-1].Values.ArrayNum;
  (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 8) + lVar1 + 8) + 0xb8))
            ();
  return __return_storage_ptr__;
}

// getAnimatedMapLODs`vtordisp{4294967292,0}' @ 14a6894e4

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   RigLogicDNAReader::getAnimatedMapLODs`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getAnimatedMapLODs_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getAnimatedMapLODs((RigLogicDNAReader *)
                              ((longlong)this - (longlong)*(int *)&this[-1].field_0xa4),
                              __return_storage_ptr__);
  return pAVar1;
}

// getAnimatedMapLODs @ 14a689500

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getAnimatedMapLODs
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this[-1].Values.ArrayNum;
  (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 8) + lVar1 + 8) + 0xb0))
            ();
  return __return_storage_ptr__;
}

// getAnimatedMapName`vtordisp{4294967292,0}' @ 14a689534

/* [thunk]:public: virtual class av::StringView __cdecl
   RigLogicDNAReader::getAnimatedMapName`vtordisp{4294967292,0}' (unsigned short)const __ptr64 */

StringView * __thiscall
RigLogicDNAReader::getAnimatedMapName_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,StringView *__return_storage_ptr__,ushort param_1)

{
  StringView *pSVar1;
  
  pSVar1 = getAnimatedMapName((RigLogicDNAReader *)
                              ((longlong)this - (longlong)*(int *)&this[-1].field_0xa4),
                              __return_storage_ptr__,param_1);
  return pSVar1;
}

// getAnimatedMapName @ 14a689550

StringView * __thiscall
RigLogicDNAReader::getAnimatedMapName
          (RigLogicDNAReader *this,StringView *__return_storage_ptr__,ushort param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this[-1].RBFValues.ArrayNum;
  (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 0xf8))
            ();
  return __return_storage_ptr__;
}

// getAnimatedMapOutputIndices`vtordisp{4294967292,0}' @ 14a689584

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   RigLogicDNAReader::getAnimatedMapOutputIndices`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getAnimatedMapOutputIndices_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getAnimatedMapOutputIndices
                     ((RigLogicDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0xa4)
                      ,__return_storage_ptr__);
  return pAVar1;
}

// getAnimatedMapOutputIndices @ 14a6895a0

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getAnimatedMapOutputIndices
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this[-1].Values.ArrayNum;
  (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 8) + lVar1 + 8) + 0xc0))
            ();
  return __return_storage_ptr__;
}

// getAnimatedMapSlopeValues`vtordisp{4294967292,0}' @ 14a6895d4

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   RigLogicDNAReader::getAnimatedMapSlopeValues`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getAnimatedMapSlopeValues_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getAnimatedMapSlopeValues
                     ((RigLogicDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0xa4)
                      ,__return_storage_ptr__);
  return pAVar1;
}

// getAnimatedMapSlopeValues @ 14a6895f0

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getAnimatedMapSlopeValues
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this[-1].Values.ArrayNum;
  (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 8) + lVar1 + 8) + 0xd8))
            ();
  return __return_storage_ptr__;
}

// getAnimatedMapToValues`vtordisp{4294967292,0}' @ 14a689624

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   RigLogicDNAReader::getAnimatedMapToValues`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getAnimatedMapToValues_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getAnimatedMapToValues
                     ((RigLogicDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0xa4)
                      ,__return_storage_ptr__);
  return pAVar1;
}

// getAnimatedMapToValues @ 14a689640

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getAnimatedMapToValues
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this[-1].Values.ArrayNum;
  (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 8) + lVar1 + 8) + 0xd0))
            ();
  return __return_storage_ptr__;
}

// getArchetype`vtordisp{4294967292,0}' @ 14a689674

/* [thunk]:public: virtual enum dna::Archetype __cdecl
   RigLogicDNAReader::getArchetype`vtordisp{4294967292,0}' (void)const __ptr64 */

Archetype __thiscall
RigLogicDNAReader::getArchetype_vtordisp_4294967292_0__(RigLogicDNAReader *this)

{
  Archetype AVar1;
  
  AVar1 = getArchetype((RigLogicDNAReader *)
                       ((longlong)this - (longlong)*(int *)&this[-1].field_0xa4));
  return AVar1;
}

// getArchetype @ 14a689690

Archetype __thiscall RigLogicDNAReader::getArchetype(RigLogicDNAReader *this)

{
  longlong lVar1;
  Archetype AVar2;
  
  lVar1 = *(longlong *)&this[-1].RBFValues.ArrayNum;
                    /* WARNING: Could not recover jumptable at 0x00014a6896a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AVar2 = (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) +
                      0x20))();
  return AVar2;
}

// getBlendShapeChannelCount`vtordisp{4294967292,0}' @ 14a6896b0

/* [thunk]:public: virtual unsigned short __cdecl
   RigLogicDNAReader::getBlendShapeChannelCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
RigLogicDNAReader::getBlendShapeChannelCount_vtordisp_4294967292_0__(RigLogicDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = getBlendShapeChannelCount
                    ((RigLogicDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0xa4))
  ;
  return uVar1;
}

// getBlendShapeChannelCount @ 14a6896d0

ushort __thiscall RigLogicDNAReader::getBlendShapeChannelCount(RigLogicDNAReader *this)

{
  longlong lVar1;
  ushort uVar2;
  
  lVar1 = *(longlong *)&this[-1].RBFValues.ArrayNum;
                    /* WARNING: Could not recover jumptable at 0x00014a6896e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) +
                      0xd0))();
  return uVar2;
}

// getBlendShapeChannelIndex @ 14a689700

ushort __thiscall
RigLogicDNAReader::getBlendShapeChannelIndex(RigLogicDNAReader *this,ushort param_1,ushort param_2)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a68970b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)(*(longlong *)&this->field_0x40 + 0x10) + 0xd0))();
  return uVar1;
}

// getBlendShapeChannelIndexListCount`vtordisp{4294967292,0}' @ 14a689718

/* [thunk]:public: virtual unsigned short __cdecl
   RigLogicDNAReader::getBlendShapeChannelIndexListCount`vtordisp{4294967292,0}' (void)const __ptr64
    */

ushort __thiscall
RigLogicDNAReader::getBlendShapeChannelIndexListCount_vtordisp_4294967292_0__
          (RigLogicDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = getBlendShapeChannelIndexListCount
                    ((RigLogicDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0xa4))
  ;
  return uVar1;
}

// getBlendShapeChannelIndexListCount @ 14a689730

ushort __thiscall RigLogicDNAReader::getBlendShapeChannelIndexListCount(RigLogicDNAReader *this)

{
  longlong lVar1;
  ushort uVar2;
  
  lVar1 = *(longlong *)&this[-1].RBFValues.ArrayNum;
                    /* WARNING: Could not recover jumptable at 0x00014a689746. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) +
                      0xe0))();
  return uVar2;
}

// getBlendShapeChannelIndicesForLOD`vtordisp{4294967292,0}' @ 14a689754

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   RigLogicDNAReader::getBlendShapeChannelIndicesForLOD`vtordisp{4294967292,0}' (unsigned
   short)const __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getBlendShapeChannelIndicesForLOD_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getBlendShapeChannelIndicesForLOD
                     ((RigLogicDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0xa4)
                      ,__return_storage_ptr__,param_1);
  return pAVar1;
}

// getBlendShapeChannelIndicesForLOD @ 14a689770

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getBlendShapeChannelIndicesForLOD
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this[-1].RBFValues.ArrayNum;
  (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 0xe8))
            ();
  return __return_storage_ptr__;
}

// getBlendShapeChannelInputIndices`vtordisp{4294967292,0}' @ 14a6897a4

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   RigLogicDNAReader::getBlendShapeChannelInputIndices`vtordisp{4294967292,0}' (void)const __ptr64
    */

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getBlendShapeChannelInputIndices_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getBlendShapeChannelInputIndices
                     ((RigLogicDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0xa4)
                      ,__return_storage_ptr__);
  return pAVar1;
}

// getBlendShapeChannelInputIndices @ 14a6897c0

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getBlendShapeChannelInputIndices
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this[-1].Values.ArrayNum;
  (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 8) + lVar1 + 8) + 0xa0))
            ();
  return __return_storage_ptr__;
}

// getBlendShapeChannelLODs`vtordisp{4294967292,0}' @ 14a6897f4

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   RigLogicDNAReader::getBlendShapeChannelLODs`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getBlendShapeChannelLODs_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getBlendShapeChannelLODs
                     ((RigLogicDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0xa4)
                      ,__return_storage_ptr__);
  return pAVar1;
}

// getBlendShapeChannelLODs @ 14a689810

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getBlendShapeChannelLODs
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this[-1].Values.ArrayNum;
  (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 8) + lVar1 + 8) + 0x98))
            ();
  return __return_storage_ptr__;
}

// getBlendShapeChannelName`vtordisp{4294967292,0}' @ 14a689844

/* [thunk]:public: virtual class av::StringView __cdecl
   RigLogicDNAReader::getBlendShapeChannelName`vtordisp{4294967292,0}' (unsigned short)const __ptr64
    */

StringView * __thiscall
RigLogicDNAReader::getBlendShapeChannelName_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,StringView *__return_storage_ptr__,ushort param_1)

{
  StringView *pSVar1;
  
  pSVar1 = getBlendShapeChannelName
                     ((RigLogicDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0xa4)
                      ,__return_storage_ptr__,param_1);
  return pSVar1;
}

// getBlendShapeChannelName @ 14a689860

StringView * __thiscall
RigLogicDNAReader::getBlendShapeChannelName
          (RigLogicDNAReader *this,StringView *__return_storage_ptr__,ushort param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this[-1].RBFValues.ArrayNum;
  (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 0xd8))
            ();
  return __return_storage_ptr__;
}

// getBlendShapeChannelOutputIndices`vtordisp{4294967292,0}' @ 14a689894

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   RigLogicDNAReader::getBlendShapeChannelOutputIndices`vtordisp{4294967292,0}' (void)const __ptr64
    */

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getBlendShapeChannelOutputIndices_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getBlendShapeChannelOutputIndices
                     ((RigLogicDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0xa4)
                      ,__return_storage_ptr__);
  return pAVar1;
}

// getBlendShapeChannelOutputIndices @ 14a6898b0

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getBlendShapeChannelOutputIndices
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this[-1].Values.ArrayNum;
  (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 8) + lVar1 + 8) + 0xa8))
            ();
  return __return_storage_ptr__;
}

// getBlendShapeTargetCount @ 14a6898f0

ushort __thiscall
RigLogicDNAReader::getBlendShapeTargetCount(RigLogicDNAReader *this,ushort param_1)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a6898fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)(*(longlong *)&this->field_0x40 + 0x10) + 200))();
  return uVar1;
}

// getBlendShapeTargetDelta @ 14a689910

Vector3 * __thiscall
RigLogicDNAReader::getBlendShapeTargetDelta
          (RigLogicDNAReader *this,Vector3 *__return_storage_ptr__,ushort param_1,ushort param_2,
          uint param_3)

{
  (**(code **)(*(longlong *)(*(longlong *)&this->field_0x40 + 0x10) + 0xe0))();
  return __return_storage_ptr__;
}

// getBlendShapeTargetDeltaCount @ 14a689950

uint __thiscall
RigLogicDNAReader::getBlendShapeTargetDeltaCount
          (RigLogicDNAReader *this,ushort param_1,ushort param_2)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a68995b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)(*(longlong *)&this->field_0x40 + 0x10) + 0xd8))();
  return uVar1;
}

// getBlendShapeTargetDeltaXs @ 14a689970

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getBlendShapeTargetDeltaXs
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1,
          ushort param_2)

{
  (**(code **)(*(longlong *)(*(longlong *)&this->field_0x40 + 0x10) + 0xe8))();
  return __return_storage_ptr__;
}

// getBlendShapeTargetDeltaYs @ 14a6899a0

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getBlendShapeTargetDeltaYs
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1,
          ushort param_2)

{
  (**(code **)(*(longlong *)(*(longlong *)&this->field_0x40 + 0x10) + 0xf0))();
  return __return_storage_ptr__;
}

// getBlendShapeTargetDeltaZs @ 14a6899d0

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getBlendShapeTargetDeltaZs
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1,
          ushort param_2)

{
  (**(code **)(*(longlong *)(*(longlong *)&this->field_0x40 + 0x10) + 0xf8))();
  return __return_storage_ptr__;
}

// getBlendShapeTargetVertexIndices @ 14a689a00

ArrayView<unsigned_int_const_> * __thiscall
RigLogicDNAReader::getBlendShapeTargetVertexIndices
          (RigLogicDNAReader *this,ArrayView<unsigned_int_const_> *__return_storage_ptr__,
          ushort param_1,ushort param_2)

{
  (**(code **)(*(longlong *)(*(longlong *)&this->field_0x40 + 0x10) + 0x100))();
  return __return_storage_ptr__;
}

// getCoordinateSystem`vtordisp{4294967292,0}' @ 14a689a2c

/* [thunk]:public: virtual struct dna::CoordinateSystem __cdecl
   RigLogicDNAReader::getCoordinateSystem`vtordisp{4294967292,0}' (void)const __ptr64 */

CoordinateSystem * __thiscall
RigLogicDNAReader::getCoordinateSystem_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,CoordinateSystem *__return_storage_ptr__)

{
  CoordinateSystem *pCVar1;
  
  pCVar1 = getCoordinateSystem((RigLogicDNAReader *)
                               ((longlong)this - (longlong)*(int *)&this[-1].field_0xa4),
                               __return_storage_ptr__);
  return pCVar1;
}

// getCoordinateSystem @ 14a689a40

CoordinateSystem * __thiscall
RigLogicDNAReader::getCoordinateSystem
          (RigLogicDNAReader *this,CoordinateSystem *__return_storage_ptr__)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this[-1].RBFValues.ArrayNum;
  (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 0x60))
            ();
  return __return_storage_ptr__;
}

// getDBComplexity`vtordisp{4294967292,0}' @ 14a689a74

/* [thunk]:public: virtual class av::StringView __cdecl
   RigLogicDNAReader::getDBComplexity`vtordisp{4294967292,0}' (void)const __ptr64 */

StringView * __thiscall
RigLogicDNAReader::getDBComplexity_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,StringView *__return_storage_ptr__)

{
  StringView *pSVar1;
  
  pSVar1 = getDBComplexity((RigLogicDNAReader *)
                           ((longlong)this - (longlong)*(int *)&this[-1].field_0xa4),
                           __return_storage_ptr__);
  return pSVar1;
}

// getDBComplexity @ 14a689a90

StringView * __thiscall
RigLogicDNAReader::getDBComplexity(RigLogicDNAReader *this,StringView *__return_storage_ptr__)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this[-1].RBFValues.ArrayNum;
  (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 0x78))
            ();
  return __return_storage_ptr__;
}

// getDBMaxLOD`vtordisp{4294967292,0}' @ 14a689ac4

/* [thunk]:public: virtual unsigned short __cdecl
   RigLogicDNAReader::getDBMaxLOD`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall RigLogicDNAReader::getDBMaxLOD_vtordisp_4294967292_0__(RigLogicDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = getDBMaxLOD((RigLogicDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0xa4)
                     );
  return uVar1;
}

// getDBMaxLOD @ 14a689ae0

ushort __thiscall RigLogicDNAReader::getDBMaxLOD(RigLogicDNAReader *this)

{
  longlong lVar1;
  ushort uVar2;
  
  lVar1 = *(longlong *)&this[-1].RBFValues.ArrayNum;
                    /* WARNING: Could not recover jumptable at 0x00014a689af6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) +
                      0x70))();
  return uVar2;
}

// getDBName`vtordisp{4294967292,0}' @ 14a689b00

/* [thunk]:public: virtual class av::StringView __cdecl
   RigLogicDNAReader::getDBName`vtordisp{4294967292,0}' (void)const __ptr64 */

StringView * __thiscall
RigLogicDNAReader::getDBName_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,StringView *__return_storage_ptr__)

{
  StringView *pSVar1;
  
  pSVar1 = getDBName((RigLogicDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0xa4),
                     __return_storage_ptr__);
  return pSVar1;
}

// getDBName @ 14a689b20

StringView * __thiscall
RigLogicDNAReader::getDBName(RigLogicDNAReader *this,StringView *__return_storage_ptr__)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this[-1].RBFValues.ArrayNum;
  (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 0x80))
            ();
  return __return_storage_ptr__;
}

// getFaceCount @ 14a689b60

uint __thiscall RigLogicDNAReader::getFaceCount(RigLogicDNAReader *this,ushort param_1)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a689b6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)(*(longlong *)&this->field_0x40 + 0x10) + 0x98))();
  return uVar1;
}

// getFaceVertexLayoutIndices @ 14a689b80

ArrayView<unsigned_int_const_> * __thiscall
RigLogicDNAReader::getFaceVertexLayoutIndices
          (RigLogicDNAReader *this,ArrayView<unsigned_int_const_> *__return_storage_ptr__,
          ushort param_1,uint param_2)

{
  (**(code **)(*(longlong *)(*(longlong *)&this->field_0x40 + 0x10) + 0xa0))();
  return __return_storage_ptr__;
}

// getFileFormatGeneration`vtordisp{4294967292,0}' @ 14a689bac

/* [thunk]:public: virtual unsigned short __cdecl
   RigLogicDNAReader::getFileFormatGeneration`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
RigLogicDNAReader::getFileFormatGeneration_vtordisp_4294967292_0__(RigLogicDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = getFileFormatGeneration
                    ((RigLogicDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0xa4))
  ;
  return uVar1;
}

// getFileFormatGeneration @ 14a689bc0

ushort __thiscall RigLogicDNAReader::getFileFormatGeneration(RigLogicDNAReader *this)

{
  longlong lVar1;
  ushort uVar2;
  
  lVar1 = *(longlong *)&this[-1].RBFValues.ArrayNum;
                    /* WARNING: Could not recover jumptable at 0x00014a689bd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) +
                      8))();
  return uVar2;
}

// getFileFormatVersion`vtordisp{4294967292,0}' @ 14a689be0

/* [thunk]:public: virtual unsigned short __cdecl
   RigLogicDNAReader::getFileFormatVersion`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
RigLogicDNAReader::getFileFormatVersion_vtordisp_4294967292_0__(RigLogicDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = getFileFormatVersion
                    ((RigLogicDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0xa4))
  ;
  return uVar1;
}

// getFileFormatVersion @ 14a689c00

ushort __thiscall RigLogicDNAReader::getFileFormatVersion(RigLogicDNAReader *this)

{
  longlong lVar1;
  ushort uVar2;
  
  lVar1 = *(longlong *)&this[-1].RBFValues.ArrayNum;
                    /* WARNING: Could not recover jumptable at 0x00014a689c16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) +
                      0x10))();
  return uVar2;
}

// getGUIControlCount`vtordisp{4294967292,0}' @ 14a689c20

/* [thunk]:public: virtual unsigned short __cdecl
   RigLogicDNAReader::getGUIControlCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
RigLogicDNAReader::getGUIControlCount_vtordisp_4294967292_0__(RigLogicDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = getGUIControlCount((RigLogicDNAReader *)
                             ((longlong)this - (longlong)*(int *)&this[-1].field_0xa4));
  return uVar1;
}

// getGUIControlCount @ 14a689c40

ushort __thiscall RigLogicDNAReader::getGUIControlCount(RigLogicDNAReader *this)

{
  longlong lVar1;
  ushort uVar2;
  
  lVar1 = *(longlong *)&this[-1].RBFValues.ArrayNum;
                    /* WARNING: Could not recover jumptable at 0x00014a689c56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) +
                      0x88))();
  return uVar2;
}

// getGUIControlName`vtordisp{4294967292,0}' @ 14a689c64

/* [thunk]:public: virtual class av::StringView __cdecl
   RigLogicDNAReader::getGUIControlName`vtordisp{4294967292,0}' (unsigned short)const __ptr64 */

StringView * __thiscall
RigLogicDNAReader::getGUIControlName_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,StringView *__return_storage_ptr__,ushort param_1)

{
  StringView *pSVar1;
  
  pSVar1 = getGUIControlName((RigLogicDNAReader *)
                             ((longlong)this - (longlong)*(int *)&this[-1].field_0xa4),
                             __return_storage_ptr__,param_1);
  return pSVar1;
}

// getGUIControlName @ 14a689c80

StringView * __thiscall
RigLogicDNAReader::getGUIControlName
          (RigLogicDNAReader *this,StringView *__return_storage_ptr__,ushort param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this[-1].RBFValues.ArrayNum;
  (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 0x90))
            ();
  return __return_storage_ptr__;
}

// getGUIToRawCutValues`vtordisp{4294967292,0}' @ 14a689cb4

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   RigLogicDNAReader::getGUIToRawCutValues`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getGUIToRawCutValues_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getGUIToRawCutValues
                     ((RigLogicDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0xa4)
                      ,__return_storage_ptr__);
  return pAVar1;
}

// getGUIToRawCutValues @ 14a689cd0

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getGUIToRawCutValues
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this[-1].Values.ArrayNum;
  (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 8) + lVar1 + 8) + 0x28))
            ();
  return __return_storage_ptr__;
}

// getGUIToRawFromValues`vtordisp{4294967292,0}' @ 14a689d04

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   RigLogicDNAReader::getGUIToRawFromValues`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getGUIToRawFromValues_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getGUIToRawFromValues
                     ((RigLogicDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0xa4)
                      ,__return_storage_ptr__);
  return pAVar1;
}

// getGUIToRawFromValues @ 14a689d20

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getGUIToRawFromValues
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this[-1].Values.ArrayNum;
  (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 8) + lVar1 + 8) + 0x10))
            ();
  return __return_storage_ptr__;
}

// getGUIToRawInputIndices`vtordisp{4294967292,0}' @ 14a689d54

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   RigLogicDNAReader::getGUIToRawInputIndices`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getGUIToRawInputIndices_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getGUIToRawInputIndices
                     ((RigLogicDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0xa4)
                      ,__return_storage_ptr__);
  return pAVar1;
}

// getGUIToRawInputIndices @ 14a689d70

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getGUIToRawInputIndices
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this[-1].Values.ArrayNum;
  (*(code *)**(undefined8 **)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 8) + lVar1 + 8))();
  return __return_storage_ptr__;
}

// getGUIToRawOutputIndices`vtordisp{4294967292,0}' @ 14a689da0

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   RigLogicDNAReader::getGUIToRawOutputIndices`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getGUIToRawOutputIndices_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getGUIToRawOutputIndices
                     ((RigLogicDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0xa4)
                      ,__return_storage_ptr__);
  return pAVar1;
}

// getGUIToRawOutputIndices @ 14a689dc0

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getGUIToRawOutputIndices
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this[-1].Values.ArrayNum;
  (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 8) + lVar1 + 8) + 8))();
  return __return_storage_ptr__;
}

// getGUIToRawSlopeValues`vtordisp{4294967292,0}' @ 14a689df4

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   RigLogicDNAReader::getGUIToRawSlopeValues`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getGUIToRawSlopeValues_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getGUIToRawSlopeValues
                     ((RigLogicDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0xa4)
                      ,__return_storage_ptr__);
  return pAVar1;
}

// getGUIToRawSlopeValues @ 14a689e10

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getGUIToRawSlopeValues
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this[-1].Values.ArrayNum;
  (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 8) + lVar1 + 8) + 0x20))
            ();
  return __return_storage_ptr__;
}

// getGUIToRawToValues`vtordisp{4294967292,0}' @ 14a689e44

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   RigLogicDNAReader::getGUIToRawToValues`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getGUIToRawToValues_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getGUIToRawToValues((RigLogicDNAReader *)
                               ((longlong)this - (longlong)*(int *)&this[-1].field_0xa4),
                               __return_storage_ptr__);
  return pAVar1;
}

// getGUIToRawToValues @ 14a689e60

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getGUIToRawToValues
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this[-1].Values.ArrayNum;
  (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 8) + lVar1 + 8) + 0x18))
            ();
  return __return_storage_ptr__;
}

// getGender`vtordisp{4294967292,0}' @ 14a689e94

/* [thunk]:public: virtual enum dna::Gender __cdecl
   RigLogicDNAReader::getGender`vtordisp{4294967292,0}' (void)const __ptr64 */

Gender __thiscall RigLogicDNAReader::getGender_vtordisp_4294967292_0__(RigLogicDNAReader *this)

{
  Gender GVar1;
  
  GVar1 = getGender((RigLogicDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0xa4));
  return GVar1;
}

// getGender @ 14a689eb0

Gender __thiscall RigLogicDNAReader::getGender(RigLogicDNAReader *this)

{
  longlong lVar1;
  Gender GVar2;
  
  lVar1 = *(longlong *)&this[-1].RBFValues.ArrayNum;
                    /* WARNING: Could not recover jumptable at 0x00014a689ec6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GVar2 = (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) +
                      0x28))();
  return GVar2;
}

// getJointColumnCount`vtordisp{4294967292,0}' @ 14a689ed0

/* [thunk]:public: virtual unsigned short __cdecl
   RigLogicDNAReader::getJointColumnCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
RigLogicDNAReader::getJointColumnCount_vtordisp_4294967292_0__(RigLogicDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = getJointColumnCount((RigLogicDNAReader *)
                              ((longlong)this - (longlong)*(int *)&this[-1].field_0xa4));
  return uVar1;
}

// getJointColumnCount @ 14a689ef0

ushort __thiscall RigLogicDNAReader::getJointColumnCount(RigLogicDNAReader *this)

{
  longlong lVar1;
  ushort uVar2;
  
  lVar1 = *(longlong *)&this[-1].Values.ArrayNum;
                    /* WARNING: Could not recover jumptable at 0x00014a689f06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 8) + lVar1 + 8) +
                      0x58))();
  return uVar2;
}

// getJointCount`vtordisp{4294967292,0}' @ 14a689f10

/* [thunk]:public: virtual unsigned short __cdecl
   RigLogicDNAReader::getJointCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall RigLogicDNAReader::getJointCount_vtordisp_4294967292_0__(RigLogicDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = getJointCount((RigLogicDNAReader *)
                        ((longlong)this - (longlong)*(int *)&this[-1].field_0xa4));
  return uVar1;
}

// getJointCount @ 14a689f30

ushort __thiscall RigLogicDNAReader::getJointCount(RigLogicDNAReader *this)

{
  longlong lVar1;
  ushort uVar2;
  
  lVar1 = *(longlong *)&this[-1].RBFValues.ArrayNum;
                    /* WARNING: Could not recover jumptable at 0x00014a689f46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) +
                      0xa8))();
  return uVar2;
}

// getJointGroupCount`vtordisp{4294967292,0}' @ 14a689f54

/* [thunk]:public: virtual unsigned short __cdecl
   RigLogicDNAReader::getJointGroupCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
RigLogicDNAReader::getJointGroupCount_vtordisp_4294967292_0__(RigLogicDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = getJointGroupCount((RigLogicDNAReader *)
                             ((longlong)this - (longlong)*(int *)&this[-1].field_0xa4));
  return uVar1;
}

// getJointGroupCount @ 14a689f70

ushort __thiscall RigLogicDNAReader::getJointGroupCount(RigLogicDNAReader *this)

{
  longlong lVar1;
  ushort uVar2;
  
  lVar1 = *(longlong *)&this[-1].Values.ArrayNum;
                    /* WARNING: Could not recover jumptable at 0x00014a689f86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 8) + lVar1 + 8) +
                      0x68))();
  return uVar2;
}

// getJointGroupInputIndices`vtordisp{4294967292,0}' @ 14a689f90

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   RigLogicDNAReader::getJointGroupInputIndices`vtordisp{4294967292,0}' (unsigned short)const
   __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getJointGroupInputIndices_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getJointGroupInputIndices
                     ((RigLogicDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0xa4)
                      ,__return_storage_ptr__,param_1);
  return pAVar1;
}

// getJointGroupInputIndices @ 14a689fb0

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getJointGroupInputIndices
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this[-1].Values.ArrayNum;
  (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 8) + lVar1 + 8) + 0x78))
            ();
  return __return_storage_ptr__;
}

// getJointGroupJointIndices`vtordisp{4294967292,0}' @ 14a689fe4

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   RigLogicDNAReader::getJointGroupJointIndices`vtordisp{4294967292,0}' (unsigned short)const
   __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getJointGroupJointIndices_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getJointGroupJointIndices
                     ((RigLogicDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0xa4)
                      ,__return_storage_ptr__,param_1);
  return pAVar1;
}

// getJointGroupJointIndices @ 14a68a000

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getJointGroupJointIndices
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this[-1].Values.ArrayNum;
  (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 8) + lVar1 + 8) + 0x90))
            ();
  return __return_storage_ptr__;
}

// getJointGroupLODs`vtordisp{4294967292,0}' @ 14a68a034

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   RigLogicDNAReader::getJointGroupLODs`vtordisp{4294967292,0}' (unsigned short)const __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getJointGroupLODs_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getJointGroupLODs((RigLogicDNAReader *)
                             ((longlong)this - (longlong)*(int *)&this[-1].field_0xa4),
                             __return_storage_ptr__,param_1);
  return pAVar1;
}

// getJointGroupLODs @ 14a68a050

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getJointGroupLODs
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this[-1].Values.ArrayNum;
  (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 8) + lVar1 + 8) + 0x70))
            ();
  return __return_storage_ptr__;
}

// getJointGroupOutputIndices`vtordisp{4294967292,0}' @ 14a68a084

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   RigLogicDNAReader::getJointGroupOutputIndices`vtordisp{4294967292,0}' (unsigned short)const
   __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getJointGroupOutputIndices_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getJointGroupOutputIndices
                     ((RigLogicDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0xa4)
                      ,__return_storage_ptr__,param_1);
  return pAVar1;
}

// getJointGroupOutputIndices @ 14a68a0a0

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getJointGroupOutputIndices
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this[-1].Values.ArrayNum;
  (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 8) + lVar1 + 8) + 0x80))
            ();
  return __return_storage_ptr__;
}

// getJointGroupValues`vtordisp{4294967292,0}' @ 14a68a0d4

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   RigLogicDNAReader::getJointGroupValues`vtordisp{4294967292,0}' (unsigned short)const __ptr64 */

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getJointGroupValues_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getJointGroupValues((RigLogicDNAReader *)
                               ((longlong)this - (longlong)*(int *)&this[-1].field_0xa4),
                               __return_storage_ptr__,param_1);
  return pAVar1;
}

// getJointGroupValues @ 14a68a0f0

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getJointGroupValues
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1)

{
  CacheJointGroup((RigLogicDNAReader *)&this[-1].field_0x10,param_1);
  __return_storage_ptr__->ptr = (float *)this[-1].RBFValues.AllocatorInstance.Data;
  __return_storage_ptr__->sz = (longlong)this[-1].RBFValues.ArrayNum;
  return __return_storage_ptr__;
}

// getJointIndexListCount`vtordisp{4294967292,0}' @ 14a68a134

/* [thunk]:public: virtual unsigned short __cdecl
   RigLogicDNAReader::getJointIndexListCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
RigLogicDNAReader::getJointIndexListCount_vtordisp_4294967292_0__(RigLogicDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = getJointIndexListCount
                    ((RigLogicDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0xa4))
  ;
  return uVar1;
}

// getJointIndexListCount @ 14a68a150

ushort __thiscall RigLogicDNAReader::getJointIndexListCount(RigLogicDNAReader *this)

{
  longlong lVar1;
  ushort uVar2;
  
  lVar1 = *(longlong *)&this[-1].RBFValues.ArrayNum;
                    /* WARNING: Could not recover jumptable at 0x00014a68a166. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) +
                      0xb8))();
  return uVar2;
}

// getJointIndicesForLOD`vtordisp{4294967292,0}' @ 14a68a174

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   RigLogicDNAReader::getJointIndicesForLOD`vtordisp{4294967292,0}' (unsigned short)const __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getJointIndicesForLOD_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getJointIndicesForLOD
                     ((RigLogicDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0xa4)
                      ,__return_storage_ptr__,param_1);
  return pAVar1;
}

// getJointIndicesForLOD @ 14a68a190

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getJointIndicesForLOD
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this[-1].RBFValues.ArrayNum;
  (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 0xc0))
            ();
  return __return_storage_ptr__;
}

// getJointName`vtordisp{4294967292,0}' @ 14a68a1c4

/* [thunk]:public: virtual class av::StringView __cdecl
   RigLogicDNAReader::getJointName`vtordisp{4294967292,0}' (unsigned short)const __ptr64 */

StringView * __thiscall
RigLogicDNAReader::getJointName_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,StringView *__return_storage_ptr__,ushort param_1)

{
  StringView *pSVar1;
  
  pSVar1 = getJointName((RigLogicDNAReader *)
                        ((longlong)this - (longlong)*(int *)&this[-1].field_0xa4),
                        __return_storage_ptr__,param_1);
  return pSVar1;
}

// getJointName @ 14a68a1e0

StringView * __thiscall
RigLogicDNAReader::getJointName
          (RigLogicDNAReader *this,StringView *__return_storage_ptr__,ushort param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this[-1].RBFValues.ArrayNum;
  (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 0xb0))
            ();
  return __return_storage_ptr__;
}

// getJointParentIndex`vtordisp{4294967292,0}' @ 14a68a214

/* [thunk]:public: virtual unsigned short __cdecl
   RigLogicDNAReader::getJointParentIndex`vtordisp{4294967292,0}' (unsigned short)const __ptr64 */

ushort __thiscall
RigLogicDNAReader::getJointParentIndex_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,ushort param_1)

{
  ushort uVar1;
  
  uVar1 = getJointParentIndex((RigLogicDNAReader *)
                              ((longlong)this - (longlong)*(int *)&this[-1].field_0xa4),param_1);
  return uVar1;
}

// getJointParentIndex @ 14a68a230

ushort __thiscall RigLogicDNAReader::getJointParentIndex(RigLogicDNAReader *this,ushort param_1)

{
  longlong lVar1;
  ushort uVar2;
  
  lVar1 = *(longlong *)&this[-1].RBFValues.ArrayNum;
                    /* WARNING: Could not recover jumptable at 0x00014a68a246. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) +
                      200))();
  return uVar2;
}

// getJointRotationRepresentation @ 14a68a260

RotationRepresentation __thiscall
RigLogicDNAReader::getJointRotationRepresentation(RigLogicDNAReader *this,ushort param_1)

{
  RotationRepresentation RVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a68a26b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RVar1 = (**(code **)(*(longlong *)(*(longlong *)&this->field_0x20 + 0x30) + 8))();
  return RVar1;
}

// getJointRowCount`vtordisp{4294967292,0}' @ 14a68a278

/* [thunk]:public: virtual unsigned short __cdecl
   RigLogicDNAReader::getJointRowCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
RigLogicDNAReader::getJointRowCount_vtordisp_4294967292_0__(RigLogicDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = getJointRowCount((RigLogicDNAReader *)
                           ((longlong)this - (longlong)*(int *)&this[-1].field_0xa4));
  return uVar1;
}

// getJointRowCount @ 14a68a290

ushort __thiscall RigLogicDNAReader::getJointRowCount(RigLogicDNAReader *this)

{
  longlong lVar1;
  ushort uVar2;
  
  lVar1 = *(longlong *)&this[-1].Values.ArrayNum;
                    /* WARNING: Could not recover jumptable at 0x00014a68a2a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 8) + lVar1 + 8) +
                      0x50))();
  return uVar2;
}

// getJointScaleRepresentation @ 14a68a2b0

ScaleRepresentation __thiscall
RigLogicDNAReader::getJointScaleRepresentation(RigLogicDNAReader *this,ushort param_1)

{
  ScaleRepresentation SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a68a2bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = (**(code **)(*(longlong *)(*(longlong *)&this->field_0x20 + 0x30) + 0x10))();
  return SVar1;
}

// getJointTranslationRepresentation @ 14a68a2d0

TranslationRepresentation __thiscall
RigLogicDNAReader::getJointTranslationRepresentation(RigLogicDNAReader *this,ushort param_1)

{
  TranslationRepresentation TVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a68a2db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TVar1 = (*(code *)**(undefined8 **)(*(longlong *)&this->field_0x20 + 0x30))();
  return TVar1;
}

// getJointVariableAttributeIndices`vtordisp{4294967292,0}' @ 14a68a2e4

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   RigLogicDNAReader::getJointVariableAttributeIndices`vtordisp{4294967292,0}' (unsigned short)const
   __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getJointVariableAttributeIndices_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getJointVariableAttributeIndices
                     ((RigLogicDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0xa4)
                      ,__return_storage_ptr__,param_1);
  return pAVar1;
}

// getJointVariableAttributeIndices @ 14a68a300

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getJointVariableAttributeIndices
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this[-1].Values.ArrayNum;
  (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 8) + lVar1 + 8) + 0x60))
            ();
  return __return_storage_ptr__;
}

// getLODCount`vtordisp{4294967292,0}' @ 14a68a334

/* [thunk]:public: virtual unsigned short __cdecl
   RigLogicDNAReader::getLODCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall RigLogicDNAReader::getLODCount_vtordisp_4294967292_0__(RigLogicDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = getLODCount((RigLogicDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0xa4)
                     );
  return uVar1;
}

// getLODCount @ 14a68a350

ushort __thiscall RigLogicDNAReader::getLODCount(RigLogicDNAReader *this)

{
  longlong lVar1;
  ushort uVar2;
  
  lVar1 = *(longlong *)&this[-1].RBFValues.ArrayNum;
                    /* WARNING: Could not recover jumptable at 0x00014a68a366. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) +
                      0x68))();
  return uVar2;
}

// getMLControlCount @ 14a68a370

ushort __thiscall RigLogicDNAReader::getMLControlCount(RigLogicDNAReader *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a68a37b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)**(undefined8 **)(*(longlong *)&this->field_0x30 + 0x20))();
  return uVar1;
}

// getMLControlName @ 14a68a390

StringView * __thiscall
RigLogicDNAReader::getMLControlName
          (RigLogicDNAReader *this,StringView *__return_storage_ptr__,ushort param_1)

{
  (**(code **)(*(longlong *)(*(longlong *)&this->field_0x30 + 0x20) + 8))();
  return __return_storage_ptr__;
}

// getMaximumInfluencePerVertex @ 14a68a3c0

ushort __thiscall
RigLogicDNAReader::getMaximumInfluencePerVertex(RigLogicDNAReader *this,ushort param_1)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a68a3cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)(*(longlong *)&this->field_0x40 + 0x10) + 0xa8))();
  return uVar1;
}

// getMeshBlendShapeChannelMapping`vtordisp{4294967292,0}' @ 14a68a3d8

/* [thunk]:public: virtual struct dna::MeshBlendShapeChannelMapping __cdecl
   RigLogicDNAReader::getMeshBlendShapeChannelMapping`vtordisp{4294967292,0}' (unsigned short)const
   __ptr64 */

MeshBlendShapeChannelMapping __thiscall
RigLogicDNAReader::getMeshBlendShapeChannelMapping_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,ushort param_1)

{
  MeshBlendShapeChannelMapping MVar1;
  
  MVar1 = getMeshBlendShapeChannelMapping
                    ((RigLogicDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0xa4),
                     param_1);
  return MVar1;
}

// getMeshBlendShapeChannelMapping @ 14a68a3f0

MeshBlendShapeChannelMapping __thiscall
RigLogicDNAReader::getMeshBlendShapeChannelMapping(RigLogicDNAReader *this,ushort param_1)

{
  longlong lVar1;
  undefined6 in_register_00000012;
  
  lVar1 = *(longlong *)&this[-1].RBFValues.ArrayNum;
  (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 0x138))
            ();
  return SUB84(CONCAT62(in_register_00000012,param_1),0);
}

// getMeshBlendShapeChannelMappingCount`vtordisp{4294967292,0}' @ 14a68a424

/* [thunk]:public: virtual unsigned short __cdecl
   RigLogicDNAReader::getMeshBlendShapeChannelMappingCount`vtordisp{4294967292,0}' (void)const
   __ptr64 */

ushort __thiscall
RigLogicDNAReader::getMeshBlendShapeChannelMappingCount_vtordisp_4294967292_0__
          (RigLogicDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = getMeshBlendShapeChannelMappingCount
                    ((RigLogicDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0xa4))
  ;
  return uVar1;
}

// getMeshBlendShapeChannelMappingCount @ 14a68a440

ushort __thiscall RigLogicDNAReader::getMeshBlendShapeChannelMappingCount(RigLogicDNAReader *this)

{
  longlong lVar1;
  ushort uVar2;
  
  lVar1 = *(longlong *)&this[-1].RBFValues.ArrayNum;
                    /* WARNING: Could not recover jumptable at 0x00014a68a456. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) +
                      0x130))();
  return uVar2;
}

// getMeshBlendShapeChannelMappingIndicesForLOD`vtordisp{4294967292,0}' @ 14a68a464

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   RigLogicDNAReader::getMeshBlendShapeChannelMappingIndicesForLOD`vtordisp{4294967292,0}' (unsigned
   short)const __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getMeshBlendShapeChannelMappingIndicesForLOD_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getMeshBlendShapeChannelMappingIndicesForLOD
                     ((RigLogicDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0xa4)
                      ,__return_storage_ptr__,param_1);
  return pAVar1;
}

// getMeshBlendShapeChannelMappingIndicesForLOD @ 14a68a480

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getMeshBlendShapeChannelMappingIndicesForLOD
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this[-1].RBFValues.ArrayNum;
  (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 0x140))
            ();
  return __return_storage_ptr__;
}

// getMeshCount`vtordisp{4294967292,0}' @ 14a68a4b4

/* [thunk]:public: virtual unsigned short __cdecl
   RigLogicDNAReader::getMeshCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall RigLogicDNAReader::getMeshCount_vtordisp_4294967292_0__(RigLogicDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = getMeshCount((RigLogicDNAReader *)
                       ((longlong)this - (longlong)*(int *)&this[-1].field_0xa4));
  return uVar1;
}

// getMeshCount @ 14a68a4d0

ushort __thiscall RigLogicDNAReader::getMeshCount(RigLogicDNAReader *this)

{
  longlong lVar1;
  ushort uVar2;
  
  lVar1 = *(longlong *)&this[-1].RBFValues.ArrayNum;
                    /* WARNING: Could not recover jumptable at 0x00014a68a4e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) +
                      0x110))();
  return uVar2;
}

// getMeshIndexListCount`vtordisp{4294967292,0}' @ 14a68a4f4

/* [thunk]:public: virtual unsigned short __cdecl
   RigLogicDNAReader::getMeshIndexListCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
RigLogicDNAReader::getMeshIndexListCount_vtordisp_4294967292_0__(RigLogicDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = getMeshIndexListCount
                    ((RigLogicDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0xa4))
  ;
  return uVar1;
}

// getMeshIndexListCount @ 14a68a510

ushort __thiscall RigLogicDNAReader::getMeshIndexListCount(RigLogicDNAReader *this)

{
  longlong lVar1;
  ushort uVar2;
  
  lVar1 = *(longlong *)&this[-1].RBFValues.ArrayNum;
                    /* WARNING: Could not recover jumptable at 0x00014a68a526. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) +
                      0x120))();
  return uVar2;
}

// getMeshIndicesForLOD`vtordisp{4294967292,0}' @ 14a68a534

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   RigLogicDNAReader::getMeshIndicesForLOD`vtordisp{4294967292,0}' (unsigned short)const __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getMeshIndicesForLOD_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getMeshIndicesForLOD
                     ((RigLogicDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0xa4)
                      ,__return_storage_ptr__,param_1);
  return pAVar1;
}

// getMeshIndicesForLOD @ 14a68a550

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getMeshIndicesForLOD
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this[-1].RBFValues.ArrayNum;
  (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 0x128))
            ();
  return __return_storage_ptr__;
}

// getMeshName`vtordisp{4294967292,0}' @ 14a68a584

/* [thunk]:public: virtual class av::StringView __cdecl
   RigLogicDNAReader::getMeshName`vtordisp{4294967292,0}' (unsigned short)const __ptr64 */

StringView * __thiscall
RigLogicDNAReader::getMeshName_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,StringView *__return_storage_ptr__,ushort param_1)

{
  StringView *pSVar1;
  
  pSVar1 = getMeshName((RigLogicDNAReader *)
                       ((longlong)this - (longlong)*(int *)&this[-1].field_0xa4),
                       __return_storage_ptr__,param_1);
  return pSVar1;
}

// getMeshName @ 14a68a5a0

StringView * __thiscall
RigLogicDNAReader::getMeshName
          (RigLogicDNAReader *this,StringView *__return_storage_ptr__,ushort param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this[-1].RBFValues.ArrayNum;
  (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 0x118))
            ();
  return __return_storage_ptr__;
}

// getMeshRegionCount @ 14a68a5e0

ushort __thiscall RigLogicDNAReader::getMeshRegionCount(RigLogicDNAReader *this,ushort param_1)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a68a5eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)(*(longlong *)&this->field_0x30 + 0x20) + 0x28))();
  return uVar1;
}

// getMeshRegionName @ 14a68a600

StringView * __thiscall
RigLogicDNAReader::getMeshRegionName
          (RigLogicDNAReader *this,StringView *__return_storage_ptr__,ushort param_1,ushort param_2)

{
  (**(code **)(*(longlong *)(*(longlong *)&this->field_0x30 + 0x20) + 0x30))();
  return __return_storage_ptr__;
}

// getMetaDataCount`vtordisp{4294967292,0}' @ 14a68a628

/* [thunk]:public: virtual unsigned int __cdecl
   RigLogicDNAReader::getMetaDataCount`vtordisp{4294967292,0}' (void)const __ptr64 */

uint __thiscall RigLogicDNAReader::getMetaDataCount_vtordisp_4294967292_0__(RigLogicDNAReader *this)

{
  uint uVar1;
  
  uVar1 = getMetaDataCount((RigLogicDNAReader *)
                           ((longlong)this - (longlong)*(int *)&this[-1].field_0xa4));
  return uVar1;
}

// getMetaDataCount @ 14a68a640

uint __thiscall RigLogicDNAReader::getMetaDataCount(RigLogicDNAReader *this)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = *(longlong *)&this[-1].RBFValues.ArrayNum;
                    /* WARNING: Could not recover jumptable at 0x00014a68a656. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) +
                      0x38))();
  return uVar2;
}

// getMetaDataKey`vtordisp{4294967292,0}' @ 14a68a660

/* [thunk]:public: virtual class av::StringView __cdecl
   RigLogicDNAReader::getMetaDataKey`vtordisp{4294967292,0}' (unsigned int)const __ptr64 */

StringView * __thiscall
RigLogicDNAReader::getMetaDataKey_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,StringView *__return_storage_ptr__,uint param_1)

{
  StringView *pSVar1;
  
  pSVar1 = getMetaDataKey((RigLogicDNAReader *)
                          ((longlong)this - (longlong)*(int *)&this[-1].field_0xa4),
                          __return_storage_ptr__,param_1);
  return pSVar1;
}

// getMetaDataKey @ 14a68a680

StringView * __thiscall
RigLogicDNAReader::getMetaDataKey
          (RigLogicDNAReader *this,StringView *__return_storage_ptr__,uint param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this[-1].RBFValues.ArrayNum;
  (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 0x40))
            ();
  return __return_storage_ptr__;
}

// getMetaDataValue`vtordisp{4294967292,0}' @ 14a68a6b4

/* [thunk]:public: virtual class av::StringView __cdecl
   RigLogicDNAReader::getMetaDataValue`vtordisp{4294967292,0}' (char const * __ptr64)const __ptr64
    */

StringView * __thiscall
RigLogicDNAReader::getMetaDataValue_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,StringView *__return_storage_ptr__,char *param_1)

{
  StringView *pSVar1;
  
  pSVar1 = getMetaDataValue((RigLogicDNAReader *)
                            ((longlong)this - (longlong)*(int *)&this[-1].field_0xa4),
                            __return_storage_ptr__,param_1);
  return pSVar1;
}

// getMetaDataValue @ 14a68a6d0

StringView * __thiscall
RigLogicDNAReader::getMetaDataValue
          (RigLogicDNAReader *this,StringView *__return_storage_ptr__,char *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this[-1].RBFValues.ArrayNum;
  (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 0x48))
            ();
  return __return_storage_ptr__;
}

// getName`vtordisp{4294967292,0}' @ 14a68a704

/* [thunk]:public: virtual class av::StringView __cdecl
   RigLogicDNAReader::getName`vtordisp{4294967292,0}' (void)const __ptr64 */

StringView * __thiscall
RigLogicDNAReader::getName_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,StringView *__return_storage_ptr__)

{
  StringView *pSVar1;
  
  pSVar1 = getName((RigLogicDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0xa4),
                   __return_storage_ptr__);
  return pSVar1;
}

// getName @ 14a68a720

StringView * __thiscall
RigLogicDNAReader::getName(RigLogicDNAReader *this,StringView *__return_storage_ptr__)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this[-1].RBFValues.ArrayNum;
  (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 0x18))
            ();
  return __return_storage_ptr__;
}

// getNeuralNetworkCount @ 14a68a760

ushort __thiscall RigLogicDNAReader::getNeuralNetworkCount(RigLogicDNAReader *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a68a76b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)(*(longlong *)&this->field_0x30 + 0x20) + 0x10))();
  return uVar1;
}

// getNeuralNetworkIndexListCount @ 14a68a780

ushort __thiscall RigLogicDNAReader::getNeuralNetworkIndexListCount(RigLogicDNAReader *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a68a78b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)(*(longlong *)&this->field_0x30 + 0x20) + 0x18))();
  return uVar1;
}

// getNeuralNetworkIndicesForLOD @ 14a68a7a0

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getNeuralNetworkIndicesForLOD
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  (**(code **)(*(longlong *)(*(longlong *)&this->field_0x30 + 0x20) + 0x20))();
  return __return_storage_ptr__;
}

// getNeuralNetworkIndicesForMeshRegion @ 14a68a7d0

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getNeuralNetworkIndicesForMeshRegion
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1,ushort param_2)

{
  (**(code **)(*(longlong *)(*(longlong *)&this->field_0x30 + 0x20) + 0x38))();
  return __return_storage_ptr__;
}

// getNeuralNetworkInputIndices @ 14a68a800

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getNeuralNetworkInputIndices
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  (**(code **)(*(longlong *)(*(longlong *)&this->field_0x30 + 0x20) + 0x40))();
  return __return_storage_ptr__;
}

// getNeuralNetworkLayerActivationFunction @ 14a68a830

ActivationFunction __thiscall
RigLogicDNAReader::getNeuralNetworkLayerActivationFunction
          (RigLogicDNAReader *this,ushort param_1,ushort param_2)

{
  ActivationFunction AVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a68a83b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AVar1 = (**(code **)(*(longlong *)(*(longlong *)&this->field_0x30 + 0x20) + 0x58))();
  return AVar1;
}

// getNeuralNetworkLayerActivationFunctionParameters @ 14a68a850

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getNeuralNetworkLayerActivationFunctionParameters
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1,
          ushort param_2)

{
  (**(code **)(*(longlong *)(*(longlong *)&this->field_0x30 + 0x20) + 0x60))();
  return __return_storage_ptr__;
}

// getNeuralNetworkLayerBiases @ 14a68a880

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getNeuralNetworkLayerBiases
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1,
          ushort param_2)

{
  (**(code **)(*(longlong *)(*(longlong *)&this->field_0x30 + 0x20) + 0x68))();
  return __return_storage_ptr__;
}

// getNeuralNetworkLayerCount @ 14a68a8b0

ushort __thiscall
RigLogicDNAReader::getNeuralNetworkLayerCount(RigLogicDNAReader *this,ushort param_1)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a68a8bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)(*(longlong *)&this->field_0x30 + 0x20) + 0x50))();
  return uVar1;
}

// getNeuralNetworkLayerWeights @ 14a68a8d0

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getNeuralNetworkLayerWeights
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1,
          ushort param_2)

{
  (**(code **)(*(longlong *)(*(longlong *)&this->field_0x30 + 0x20) + 0x70))();
  return __return_storage_ptr__;
}

// getNeuralNetworkOutputIndices @ 14a68a900

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getNeuralNetworkOutputIndices
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  (**(code **)(*(longlong *)(*(longlong *)&this->field_0x30 + 0x20) + 0x48))();
  return __return_storage_ptr__;
}

// getNeutralJointRotation`vtordisp{4294967292,0}' @ 14a68a928

/* [thunk]:public: virtual struct dna::Vector3 __cdecl
   RigLogicDNAReader::getNeutralJointRotation`vtordisp{4294967292,0}' (unsigned short)const __ptr64
    */

Vector3 * __thiscall
RigLogicDNAReader::getNeutralJointRotation_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,Vector3 *__return_storage_ptr__,ushort param_1)

{
  Vector3 *pVVar1;
  
  pVVar1 = getNeutralJointRotation
                     ((RigLogicDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0xa4)
                      ,__return_storage_ptr__,param_1);
  return pVVar1;
}

// getNeutralJointRotation @ 14a68a940

Vector3 * __thiscall
RigLogicDNAReader::getNeutralJointRotation
          (RigLogicDNAReader *this,Vector3 *__return_storage_ptr__,ushort param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong local_38 [2];
  longlong local_28 [2];
  longlong local_18 [2];
  
  uVar2 = (ulonglong)param_1;
  plVar1 = (longlong *)
           ((longlong)this + (longlong)*(int *)(*(longlong *)&this[-1].field_0x28 + 4) + -0x80);
  (**(code **)(*plVar1 + 0x170))(plVar1,local_38);
  plVar1 = (longlong *)
           ((longlong)this + (longlong)*(int *)(*(longlong *)&this[-1].field_0x28 + 4) + -0x80);
  (**(code **)(*plVar1 + 0x178))(plVar1,local_28);
  plVar1 = (longlong *)
           ((longlong)this + (longlong)*(int *)(*(longlong *)&this[-1].field_0x28 + 4) + -0x80);
  (**(code **)(*plVar1 + 0x180))(plVar1,local_18);
  __return_storage_ptr__->x = *(float *)(local_38[0] + uVar2 * 4);
  __return_storage_ptr__->y = *(float *)(local_28[0] + uVar2 * 4);
  __return_storage_ptr__->z = *(float *)(local_18[0] + uVar2 * 4);
  return __return_storage_ptr__;
}

// getNeutralJointRotationXs`vtordisp{4294967292,0}' @ 14a68a9ec

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   RigLogicDNAReader::getNeutralJointRotationXs`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getNeutralJointRotationXs_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getNeutralJointRotationXs
                     ((RigLogicDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0xa4)
                      ,__return_storage_ptr__);
  return pAVar1;
}

// getNeutralJointRotationXs @ 14a68aa00

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getNeutralJointRotationXs
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  int iVar1;
  undefined1 local_res8 [8];
  
  CacheNeutralJointRotations((RigLogicDNAReader *)&this[-1].field_0x20);
  iVar1 = *(int *)&this[-1].field_0x80;
  if (*(int *)&this[-1].field_0x80 !=
      (iVar1 / 3 + (iVar1 >> 0x1f) +
      (int)(((longlong)iVar1 / 3 + ((longlong)iVar1 >> 0x3f) & 0xffffffffU) >> 0x1f)) * 3) {
    `RigLogicDNAReader::getNeutralJointRotationXs'::__l2::<lambda_1>::operator()(local_res8);
  }
  __return_storage_ptr__->ptr = *(float **)&this[-1].Key;
  __return_storage_ptr__->sz = (ulonglong)*(uint *)&this[-1].field_0x80 / 3;
  return __return_storage_ptr__;
}

// getNeutralJointRotationYs`vtordisp{4294967292,0}' @ 14a68aa68

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   RigLogicDNAReader::getNeutralJointRotationYs`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getNeutralJointRotationYs_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getNeutralJointRotationYs
                     ((RigLogicDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0xa4)
                      ,__return_storage_ptr__);
  return pAVar1;
}

// getNeutralJointRotationYs @ 14a68aa80

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getNeutralJointRotationYs
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 local_res8 [8];
  
  CacheNeutralJointRotations((RigLogicDNAReader *)&this[-1].field_0x20);
  iVar1 = *(int *)&this[-1].field_0x80;
  if (*(int *)&this[-1].field_0x80 !=
      (iVar1 / 3 + (iVar1 >> 0x1f) +
      (int)(((longlong)iVar1 / 3 + ((longlong)iVar1 >> 0x3f) & 0xffffffffU) >> 0x1f)) * 3) {
    `RigLogicDNAReader::getNeutralJointRotationYs'::__l2::<lambda_1>::operator()(local_res8);
  }
  lVar2 = *(longlong *)&this[-1].Key;
  uVar3 = (ulonglong)*(uint *)&this[-1].field_0x80 / 3;
  __return_storage_ptr__->sz = uVar3;
  __return_storage_ptr__->ptr = (float *)(lVar2 + uVar3 * 4);
  return __return_storage_ptr__;
}

// getNeutralJointRotationZs`vtordisp{4294967292,0}' @ 14a68aaf0

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   RigLogicDNAReader::getNeutralJointRotationZs`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getNeutralJointRotationZs_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getNeutralJointRotationZs
                     ((RigLogicDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0xa4)
                      ,__return_storage_ptr__);
  return pAVar1;
}

// getNeutralJointRotationZs @ 14a68ab10

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getNeutralJointRotationZs
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 local_res8 [8];
  
  CacheNeutralJointRotations((RigLogicDNAReader *)&this[-1].field_0x20);
  iVar1 = *(int *)&this[-1].field_0x80;
  if (*(int *)&this[-1].field_0x80 !=
      (iVar1 / 3 + (iVar1 >> 0x1f) +
      (int)(((longlong)iVar1 / 3 + ((longlong)iVar1 >> 0x3f) & 0xffffffffU) >> 0x1f)) * 3) {
    `RigLogicDNAReader::getNeutralJointRotationZs'::__l2::<lambda_1>::operator()(local_res8);
  }
  lVar2 = *(longlong *)&this[-1].Key;
  uVar3 = (ulonglong)*(uint *)&this[-1].field_0x80 / 3;
  __return_storage_ptr__->sz = uVar3;
  __return_storage_ptr__->ptr = (float *)(lVar2 + (ulonglong)(uint)((int)uVar3 * 2) * 4);
  return __return_storage_ptr__;
}

// getNeutralJointTranslation`vtordisp{4294967292,0}' @ 14a68ab80

/* [thunk]:public: virtual struct dna::Vector3 __cdecl
   RigLogicDNAReader::getNeutralJointTranslation`vtordisp{4294967292,0}' (unsigned short)const
   __ptr64 */

Vector3 * __thiscall
RigLogicDNAReader::getNeutralJointTranslation_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,Vector3 *__return_storage_ptr__,ushort param_1)

{
  Vector3 *pVVar1;
  
  pVVar1 = getNeutralJointTranslation
                     ((RigLogicDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0xa4)
                      ,__return_storage_ptr__,param_1);
  return pVVar1;
}

// getNeutralJointTranslation @ 14a68aba0

Vector3 * __thiscall
RigLogicDNAReader::getNeutralJointTranslation
          (RigLogicDNAReader *this,Vector3 *__return_storage_ptr__,ushort param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong local_38 [2];
  longlong local_28 [2];
  longlong local_18 [2];
  
  uVar2 = (ulonglong)param_1;
  plVar1 = (longlong *)
           ((longlong)this + (longlong)*(int *)(*(longlong *)&this[-1].field_0x28 + 4) + -0x80);
  (**(code **)(*plVar1 + 0x150))(plVar1,local_38);
  plVar1 = (longlong *)
           ((longlong)this + (longlong)*(int *)(*(longlong *)&this[-1].field_0x28 + 4) + -0x80);
  (**(code **)(*plVar1 + 0x158))(plVar1,local_28);
  plVar1 = (longlong *)
           ((longlong)this + (longlong)*(int *)(*(longlong *)&this[-1].field_0x28 + 4) + -0x80);
  (**(code **)(*plVar1 + 0x160))(plVar1,local_18);
  __return_storage_ptr__->x = *(float *)(local_38[0] + uVar2 * 4);
  __return_storage_ptr__->y = *(float *)(local_28[0] + uVar2 * 4);
  __return_storage_ptr__->z = *(float *)(local_18[0] + uVar2 * 4);
  return __return_storage_ptr__;
}

// getNeutralJointTranslationXs`vtordisp{4294967292,0}' @ 14a68ac4c

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   RigLogicDNAReader::getNeutralJointTranslationXs`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getNeutralJointTranslationXs_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getNeutralJointTranslationXs
                     ((RigLogicDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0xa4)
                      ,__return_storage_ptr__);
  return pAVar1;
}

// getNeutralJointTranslationXs @ 14a68ac60

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getNeutralJointTranslationXs
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  int iVar1;
  undefined1 local_res8 [8];
  
  CacheNeutralJointTranslations((RigLogicDNAReader *)&this[-1].field_0x20);
  iVar1 = *(int *)&this[-1].field_0x80;
  if (*(int *)&this[-1].field_0x80 !=
      (iVar1 / 3 + (iVar1 >> 0x1f) +
      (int)(((longlong)iVar1 / 3 + ((longlong)iVar1 >> 0x3f) & 0xffffffffU) >> 0x1f)) * 3) {
    `RigLogicDNAReader::getNeutralJointTranslationXs'::__l2::<lambda_1>::operator()(local_res8);
  }
  __return_storage_ptr__->ptr = *(float **)&this[-1].Key;
  __return_storage_ptr__->sz = (ulonglong)*(uint *)&this[-1].field_0x80 / 3;
  return __return_storage_ptr__;
}

// getNeutralJointTranslationYs`vtordisp{4294967292,0}' @ 14a68acc8

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   RigLogicDNAReader::getNeutralJointTranslationYs`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getNeutralJointTranslationYs_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getNeutralJointTranslationYs
                     ((RigLogicDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0xa4)
                      ,__return_storage_ptr__);
  return pAVar1;
}

// getNeutralJointTranslationYs @ 14a68ace0

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getNeutralJointTranslationYs
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 local_res8 [8];
  
  CacheNeutralJointTranslations((RigLogicDNAReader *)&this[-1].field_0x20);
  iVar1 = *(int *)&this[-1].field_0x80;
  if (*(int *)&this[-1].field_0x80 !=
      (iVar1 / 3 + (iVar1 >> 0x1f) +
      (int)(((longlong)iVar1 / 3 + ((longlong)iVar1 >> 0x3f) & 0xffffffffU) >> 0x1f)) * 3) {
    `RigLogicDNAReader::getNeutralJointTranslationYs'::__l2::<lambda_1>::operator()(local_res8);
  }
  lVar2 = *(longlong *)&this[-1].Key;
  uVar3 = (ulonglong)*(uint *)&this[-1].field_0x80 / 3;
  __return_storage_ptr__->sz = uVar3;
  __return_storage_ptr__->ptr = (float *)(lVar2 + uVar3 * 4);
  return __return_storage_ptr__;
}

// getNeutralJointTranslationZs`vtordisp{4294967292,0}' @ 14a68ad50

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   RigLogicDNAReader::getNeutralJointTranslationZs`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getNeutralJointTranslationZs_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getNeutralJointTranslationZs
                     ((RigLogicDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0xa4)
                      ,__return_storage_ptr__);
  return pAVar1;
}

// getNeutralJointTranslationZs @ 14a68ad70

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getNeutralJointTranslationZs
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 local_res8 [8];
  
  CacheNeutralJointTranslations((RigLogicDNAReader *)&this[-1].field_0x20);
  iVar1 = *(int *)&this[-1].field_0x80;
  if (*(int *)&this[-1].field_0x80 !=
      (iVar1 / 3 + (iVar1 >> 0x1f) +
      (int)(((longlong)iVar1 / 3 + ((longlong)iVar1 >> 0x3f) & 0xffffffffU) >> 0x1f)) * 3) {
    `RigLogicDNAReader::getNeutralJointTranslationZs'::__l2::<lambda_1>::operator()(local_res8);
  }
  lVar2 = *(longlong *)&this[-1].Key;
  uVar3 = (ulonglong)*(uint *)&this[-1].field_0x80 / 3;
  __return_storage_ptr__->sz = uVar3;
  __return_storage_ptr__->ptr = (float *)(lVar2 + (ulonglong)(uint)((int)uVar3 * 2) * 4);
  return __return_storage_ptr__;
}

// getPSDColumnIndices`vtordisp{4294967292,0}' @ 14a68ade0

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   RigLogicDNAReader::getPSDColumnIndices`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getPSDColumnIndices_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getPSDColumnIndices((RigLogicDNAReader *)
                               ((longlong)this - (longlong)*(int *)&this[-1].field_0xa4),
                               __return_storage_ptr__);
  return pAVar1;
}

// getPSDColumnIndices @ 14a68ae00

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getPSDColumnIndices
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this[-1].Values.ArrayNum;
  (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 8) + lVar1 + 8) + 0x40))
            ();
  return __return_storage_ptr__;
}

// getPSDCount`vtordisp{4294967292,0}' @ 14a68ae34

/* [thunk]:public: virtual unsigned short __cdecl
   RigLogicDNAReader::getPSDCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall RigLogicDNAReader::getPSDCount_vtordisp_4294967292_0__(RigLogicDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = getPSDCount((RigLogicDNAReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0xa4)
                     );
  return uVar1;
}

// getPSDCount @ 14a68ae50

ushort __thiscall RigLogicDNAReader::getPSDCount(RigLogicDNAReader *this)

{
  longlong lVar1;
  ushort uVar2;
  
  lVar1 = *(longlong *)&this[-1].Values.ArrayNum;
                    /* WARNING: Could not recover jumptable at 0x00014a68ae66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 8) + lVar1 + 8) +
                      0x30))();
  return uVar2;
}

// getPSDRowIndices`vtordisp{4294967292,0}' @ 14a68ae70

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   RigLogicDNAReader::getPSDRowIndices`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getPSDRowIndices_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getPSDRowIndices((RigLogicDNAReader *)
                            ((longlong)this - (longlong)*(int *)&this[-1].field_0xa4),
                            __return_storage_ptr__);
  return pAVar1;
}

// getPSDRowIndices @ 14a68ae90

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getPSDRowIndices
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this[-1].Values.ArrayNum;
  (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 8) + lVar1 + 8) + 0x38))
            ();
  return __return_storage_ptr__;
}

// getPSDValues`vtordisp{4294967292,0}' @ 14a68aec4

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   RigLogicDNAReader::getPSDValues`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getPSDValues_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getPSDValues((RigLogicDNAReader *)
                        ((longlong)this - (longlong)*(int *)&this[-1].field_0xa4),
                        __return_storage_ptr__);
  return pAVar1;
}

// getPSDValues @ 14a68aee0

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getPSDValues
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this[-1].Values.ArrayNum;
  (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 8) + lVar1 + 8) + 0x48))
            ();
  return __return_storage_ptr__;
}

// getRBFPoseAnimatedMapOutputIndices @ 14a68af20

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getRBFPoseAnimatedMapOutputIndices
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  (**(code **)(*(longlong *)this->Reader + 0x20))();
  return __return_storage_ptr__;
}

// getRBFPoseBlendShapeChannelOutputIndices @ 14a68af50

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getRBFPoseBlendShapeChannelOutputIndices
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  (**(code **)(*(longlong *)this->Reader + 0x18))();
  return __return_storage_ptr__;
}

// getRBFPoseControlCount @ 14a68af80

ushort __thiscall RigLogicDNAReader::getRBFPoseControlCount(RigLogicDNAReader *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a68af87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this->Reader + 0x38))();
  return uVar1;
}

// getRBFPoseControlName @ 14a68afa0

StringView * __thiscall
RigLogicDNAReader::getRBFPoseControlName
          (RigLogicDNAReader *this,StringView *__return_storage_ptr__,ushort param_1)

{
  (**(code **)(*(longlong *)this->Reader + 0x40))();
  return __return_storage_ptr__;
}

// getRBFPoseCount @ 14a68afd0

ushort __thiscall RigLogicDNAReader::getRBFPoseCount(RigLogicDNAReader *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a68afd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)**(undefined8 **)this->Reader)();
  return uVar1;
}

// getRBFPoseInputControlIndices @ 14a68afe0

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getRBFPoseInputControlIndices
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  (**(code **)(*(longlong *)this->Reader + 0x48))();
  return __return_storage_ptr__;
}

// getRBFPoseJointOutputIndices @ 14a68b010

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getRBFPoseJointOutputIndices
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  (**(code **)(*(longlong *)this->Reader + 0x10))();
  return __return_storage_ptr__;
}

// getRBFPoseJointOutputValues @ 14a68b040

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getRBFPoseJointOutputValues
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1)

{
  CacheRBFPoseJointOutputValues(this,param_1);
  __return_storage_ptr__->ptr = (float *)(this->RBFValues).AllocatorInstance.Data;
  __return_storage_ptr__->sz = (longlong)(this->RBFValues).ArrayNum;
  return __return_storage_ptr__;
}

// getRBFPoseName @ 14a68b080

StringView * __thiscall
RigLogicDNAReader::getRBFPoseName
          (RigLogicDNAReader *this,StringView *__return_storage_ptr__,ushort param_1)

{
  (**(code **)(*(longlong *)this->Reader + 8))();
  return __return_storage_ptr__;
}

// getRBFPoseOutputControlIndices @ 14a68b0b0

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getRBFPoseOutputControlIndices
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  (**(code **)(*(longlong *)this->Reader + 0x50))();
  return __return_storage_ptr__;
}

// getRBFPoseOutputControlWeights @ 14a68b0e0

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getRBFPoseOutputControlWeights
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1)

{
  (**(code **)(*(longlong *)this->Reader + 0x58))();
  return __return_storage_ptr__;
}

// getRBFPoseScale @ 14a68b110

float __thiscall RigLogicDNAReader::getRBFPoseScale(RigLogicDNAReader *this,ushort param_1)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a68b117. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)(*(longlong *)this->Reader + 0x30))();
  return fVar1;
}

// getRBFSolverAutomaticRadius @ 14a68b130

AutomaticRadius __thiscall
RigLogicDNAReader::getRBFSolverAutomaticRadius(RigLogicDNAReader *this,ushort param_1)

{
  AutomaticRadius AVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a68b137. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AVar1 = (**(code **)(*(longlong *)this->Reader + 0xa8))();
  return AVar1;
}

// getRBFSolverCount @ 14a68b150

ushort __thiscall RigLogicDNAReader::getRBFSolverCount(RigLogicDNAReader *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a68b157. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this->Reader + 0x60))();
  return uVar1;
}

// getRBFSolverDistanceMethod @ 14a68b170

RBFDistanceMethod __thiscall
RigLogicDNAReader::getRBFSolverDistanceMethod(RigLogicDNAReader *this,ushort param_1)

{
  RBFDistanceMethod RVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a68b177. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RVar1 = (**(code **)(*(longlong *)this->Reader + 0xb8))();
  return RVar1;
}

// getRBFSolverFunctionType @ 14a68b190

RBFFunctionType __thiscall
RigLogicDNAReader::getRBFSolverFunctionType(RigLogicDNAReader *this,ushort param_1)

{
  RBFFunctionType RVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a68b197. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RVar1 = (**(code **)(*(longlong *)this->Reader + 200))();
  return RVar1;
}

// getRBFSolverIndexListCount @ 14a68b1b0

ushort __thiscall RigLogicDNAReader::getRBFSolverIndexListCount(RigLogicDNAReader *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a68b1b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this->Reader + 0x68))();
  return uVar1;
}

// getRBFSolverIndicesForLOD @ 14a68b1d0

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getRBFSolverIndicesForLOD
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  (**(code **)(*(longlong *)this->Reader + 0x70))();
  return __return_storage_ptr__;
}

// getRBFSolverName @ 14a68b200

StringView * __thiscall
RigLogicDNAReader::getRBFSolverName
          (RigLogicDNAReader *this,StringView *__return_storage_ptr__,ushort param_1)

{
  (**(code **)(*(longlong *)this->Reader + 0x78))();
  return __return_storage_ptr__;
}

// getRBFSolverNormalizeMethod @ 14a68b230

RBFNormalizeMethod __thiscall
RigLogicDNAReader::getRBFSolverNormalizeMethod(RigLogicDNAReader *this,ushort param_1)

{
  RBFNormalizeMethod RVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a68b237. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RVar1 = (**(code **)(*(longlong *)this->Reader + 0xc0))();
  return RVar1;
}

// getRBFSolverPoseIndices @ 14a68b250

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getRBFSolverPoseIndices
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  (**(code **)(*(longlong *)this->Reader + 0x88))();
  return __return_storage_ptr__;
}

// getRBFSolverRadius @ 14a68b280

float __thiscall RigLogicDNAReader::getRBFSolverRadius(RigLogicDNAReader *this,ushort param_1)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a68b287. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)(*(longlong *)this->Reader + 0xa0))();
  return fVar1;
}

// getRBFSolverRawControlIndices @ 14a68b2a0

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getRBFSolverRawControlIndices
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  (**(code **)(*(longlong *)this->Reader + 0x80))();
  return __return_storage_ptr__;
}

// getRBFSolverRawControlValues @ 14a68b2d0

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getRBFSolverRawControlValues
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1)

{
  CacheRBFSolverRawControlValues(this,param_1);
  __return_storage_ptr__->ptr = (float *)(this->Values).AllocatorInstance.Data;
  __return_storage_ptr__->sz = (longlong)(this->Values).ArrayNum;
  return __return_storage_ptr__;
}

// getRBFSolverTwistAxis @ 14a68b310

TwistAxis __thiscall
RigLogicDNAReader::getRBFSolverTwistAxis(RigLogicDNAReader *this,ushort param_1)

{
  TwistAxis TVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a68b317. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TVar1 = (**(code **)(*(longlong *)this->Reader + 0xd0))();
  return TVar1;
}

// getRBFSolverType @ 14a68b330

RBFSolverType __thiscall RigLogicDNAReader::getRBFSolverType(RigLogicDNAReader *this,ushort param_1)

{
  RBFSolverType RVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a68b337. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RVar1 = (**(code **)(*(longlong *)this->Reader + 0x98))();
  return RVar1;
}

// getRBFSolverWeightThreshold @ 14a68b350

float __thiscall
RigLogicDNAReader::getRBFSolverWeightThreshold(RigLogicDNAReader *this,ushort param_1)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a68b357. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)(*(longlong *)this->Reader + 0xb0))();
  return fVar1;
}

// getRawControlCount`vtordisp{4294967292,0}' @ 14a68b364

/* [thunk]:public: virtual unsigned short __cdecl
   RigLogicDNAReader::getRawControlCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
RigLogicDNAReader::getRawControlCount_vtordisp_4294967292_0__(RigLogicDNAReader *this)

{
  ushort uVar1;
  
  uVar1 = getRawControlCount((RigLogicDNAReader *)
                             ((longlong)this - (longlong)*(int *)&this[-1].field_0xa4));
  return uVar1;
}

// getRawControlCount @ 14a68b380

ushort __thiscall RigLogicDNAReader::getRawControlCount(RigLogicDNAReader *this)

{
  longlong lVar1;
  ushort uVar2;
  
  lVar1 = *(longlong *)&this[-1].RBFValues.ArrayNum;
                    /* WARNING: Could not recover jumptable at 0x00014a68b396. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) +
                      0x98))();
  return uVar2;
}

// getRawControlName`vtordisp{4294967292,0}' @ 14a68b3a4

/* [thunk]:public: virtual class av::StringView __cdecl
   RigLogicDNAReader::getRawControlName`vtordisp{4294967292,0}' (unsigned short)const __ptr64 */

StringView * __thiscall
RigLogicDNAReader::getRawControlName_vtordisp_4294967292_0__
          (RigLogicDNAReader *this,StringView *__return_storage_ptr__,ushort param_1)

{
  StringView *pSVar1;
  
  pSVar1 = getRawControlName((RigLogicDNAReader *)
                             ((longlong)this - (longlong)*(int *)&this[-1].field_0xa4),
                             __return_storage_ptr__,param_1);
  return pSVar1;
}

// getRawControlName @ 14a68b3c0

StringView * __thiscall
RigLogicDNAReader::getRawControlName
          (RigLogicDNAReader *this,StringView *__return_storage_ptr__,ushort param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this[-1].RBFValues.ArrayNum;
  (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 0xa0))
            ();
  return __return_storage_ptr__;
}

// getRotationUnit`vtordisp{4294967292,0}' @ 14a68b3f4

/* [thunk]:public: virtual enum dna::RotationUnit __cdecl
   RigLogicDNAReader::getRotationUnit`vtordisp{4294967292,0}' (void)const __ptr64 */

RotationUnit __thiscall
RigLogicDNAReader::getRotationUnit_vtordisp_4294967292_0__(RigLogicDNAReader *this)

{
  RotationUnit RVar1;
  
  RVar1 = getRotationUnit((RigLogicDNAReader *)
                          ((longlong)this - (longlong)*(int *)&this[-1].field_0xa4));
  return RVar1;
}

// getRotationUnit @ 14a68b410

RotationUnit __thiscall RigLogicDNAReader::getRotationUnit(RigLogicDNAReader *this)

{
  longlong lVar1;
  RotationUnit RVar2;
  
  lVar1 = *(longlong *)&this[-1].RBFValues.ArrayNum;
                    /* WARNING: Could not recover jumptable at 0x00014a68b426. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RVar2 = (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) +
                      0x58))();
  return RVar2;
}

// getSkinWeightsCount @ 14a68b430

uint __thiscall RigLogicDNAReader::getSkinWeightsCount(RigLogicDNAReader *this,ushort param_1)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a68b43b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)(*(longlong *)&this->field_0x40 + 0x10) + 0xb0))();
  return uVar1;
}

// getSkinWeightsJointIndices @ 14a68b450

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getSkinWeightsJointIndices
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1,uint param_2)

{
  (**(code **)(*(longlong *)(*(longlong *)&this->field_0x40 + 0x10) + 0xc0))();
  return __return_storage_ptr__;
}

// getSkinWeightsValues @ 14a68b480

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getSkinWeightsValues
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1,
          uint param_2)

{
  (**(code **)(*(longlong *)(*(longlong *)&this->field_0x40 + 0x10) + 0xb8))();
  return __return_storage_ptr__;
}

// getSwingBlendWeights @ 14a68b4b0

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getSwingBlendWeights
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1)

{
  (**(code **)(*(longlong *)(*(longlong *)&this->field_0x10 + 0x40) + 0x48))();
  return __return_storage_ptr__;
}

// getSwingCount @ 14a68b4e0

ushort __thiscall RigLogicDNAReader::getSwingCount(RigLogicDNAReader *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a68b4eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)(*(longlong *)&this->field_0x10 + 0x40) + 0x28))();
  return uVar1;
}

// getSwingInputControlIndices @ 14a68b500

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getSwingInputControlIndices
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  (**(code **)(*(longlong *)(*(longlong *)&this->field_0x10 + 0x40) + 0x38))();
  return __return_storage_ptr__;
}

// getSwingOutputJointIndices @ 14a68b530

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getSwingOutputJointIndices
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  (**(code **)(*(longlong *)(*(longlong *)&this->field_0x10 + 0x40) + 0x40))();
  return __return_storage_ptr__;
}

// getSwingSetupTwistAxis @ 14a68b560

TwistAxis __thiscall
RigLogicDNAReader::getSwingSetupTwistAxis(RigLogicDNAReader *this,ushort param_1)

{
  TwistAxis TVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a68b56b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TVar1 = (**(code **)(*(longlong *)(*(longlong *)&this->field_0x10 + 0x40) + 0x30))();
  return TVar1;
}

// getTranslationUnit`vtordisp{4294967292,0}' @ 14a68b578

/* [thunk]:public: virtual enum dna::TranslationUnit __cdecl
   RigLogicDNAReader::getTranslationUnit`vtordisp{4294967292,0}' (void)const __ptr64 */

TranslationUnit __thiscall
RigLogicDNAReader::getTranslationUnit_vtordisp_4294967292_0__(RigLogicDNAReader *this)

{
  TranslationUnit TVar1;
  
  TVar1 = getTranslationUnit((RigLogicDNAReader *)
                             ((longlong)this - (longlong)*(int *)&this[-1].field_0xa4));
  return TVar1;
}

// getTranslationUnit @ 14a68b590

TranslationUnit __thiscall RigLogicDNAReader::getTranslationUnit(RigLogicDNAReader *this)

{
  longlong lVar1;
  TranslationUnit TVar2;
  
  lVar1 = *(longlong *)&this[-1].RBFValues.ArrayNum;
                    /* WARNING: Could not recover jumptable at 0x00014a68b5a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TVar2 = (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) +
                      0x50))();
  return TVar2;
}

// getTwistBlendWeights @ 14a68b5b0

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getTwistBlendWeights
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1)

{
  (**(code **)(*(longlong *)(*(longlong *)&this->field_0x10 + 0x40) + 0x20))();
  return __return_storage_ptr__;
}

// getTwistCount @ 14a68b5e0

ushort __thiscall RigLogicDNAReader::getTwistCount(RigLogicDNAReader *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a68b5eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)**(undefined8 **)(*(longlong *)&this->field_0x10 + 0x40))();
  return uVar1;
}

// getTwistInputControlIndices @ 14a68b600

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getTwistInputControlIndices
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  (**(code **)(*(longlong *)(*(longlong *)&this->field_0x10 + 0x40) + 0x10))();
  return __return_storage_ptr__;
}

// getTwistOutputJointIndices @ 14a68b630

ArrayView<unsigned_short_const_> * __thiscall
RigLogicDNAReader::getTwistOutputJointIndices
          (RigLogicDNAReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  (**(code **)(*(longlong *)(*(longlong *)&this->field_0x10 + 0x40) + 0x18))();
  return __return_storage_ptr__;
}

// getTwistSetupTwistAxis @ 14a68b660

TwistAxis __thiscall
RigLogicDNAReader::getTwistSetupTwistAxis(RigLogicDNAReader *this,ushort param_1)

{
  TwistAxis TVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a68b66b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TVar1 = (**(code **)(*(longlong *)(*(longlong *)&this->field_0x10 + 0x40) + 8))();
  return TVar1;
}

// getVertexLayout @ 14a68b680

VertexLayout * __thiscall
RigLogicDNAReader::getVertexLayout
          (RigLogicDNAReader *this,VertexLayout *__return_storage_ptr__,ushort param_1,uint param_2)

{
  (**(code **)(*(longlong *)(*(longlong *)&this->field_0x40 + 0x10) + 0x78))();
  return __return_storage_ptr__;
}

// getVertexLayoutCount @ 14a68b6b0

uint __thiscall RigLogicDNAReader::getVertexLayoutCount(RigLogicDNAReader *this,ushort param_1)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a68b6bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)(*(longlong *)&this->field_0x40 + 0x10) + 0x70))();
  return uVar1;
}

// getVertexLayoutNormalIndices @ 14a68b6d0

ArrayView<unsigned_int_const_> * __thiscall
RigLogicDNAReader::getVertexLayoutNormalIndices
          (RigLogicDNAReader *this,ArrayView<unsigned_int_const_> *__return_storage_ptr__,
          ushort param_1)

{
  (**(code **)(*(longlong *)(*(longlong *)&this->field_0x40 + 0x10) + 0x90))();
  return __return_storage_ptr__;
}

// getVertexLayoutPositionIndices @ 14a68b700

ArrayView<unsigned_int_const_> * __thiscall
RigLogicDNAReader::getVertexLayoutPositionIndices
          (RigLogicDNAReader *this,ArrayView<unsigned_int_const_> *__return_storage_ptr__,
          ushort param_1)

{
  (**(code **)(*(longlong *)(*(longlong *)&this->field_0x40 + 0x10) + 0x80))();
  return __return_storage_ptr__;
}

// getVertexLayoutTextureCoordinateIndices @ 14a68b730

ArrayView<unsigned_int_const_> * __thiscall
RigLogicDNAReader::getVertexLayoutTextureCoordinateIndices
          (RigLogicDNAReader *this,ArrayView<unsigned_int_const_> *__return_storage_ptr__,
          ushort param_1)

{
  (**(code **)(*(longlong *)(*(longlong *)&this->field_0x40 + 0x10) + 0x88))();
  return __return_storage_ptr__;
}

// getVertexNormal @ 14a68b760

Vector3 * __thiscall
RigLogicDNAReader::getVertexNormal
          (RigLogicDNAReader *this,Vector3 *__return_storage_ptr__,ushort param_1,uint param_2)

{
  (**(code **)(*(longlong *)(*(longlong *)&this->field_0x40 + 0x10) + 0x50))();
  return __return_storage_ptr__;
}

// getVertexNormalCount @ 14a68b790

uint __thiscall RigLogicDNAReader::getVertexNormalCount(RigLogicDNAReader *this,ushort param_1)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a68b79b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)(*(longlong *)&this->field_0x40 + 0x10) + 0x48))();
  return uVar1;
}

// getVertexNormalXs @ 14a68b7b0

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getVertexNormalXs
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1)

{
  (**(code **)(*(longlong *)(*(longlong *)&this->field_0x40 + 0x10) + 0x58))();
  return __return_storage_ptr__;
}

// getVertexNormalYs @ 14a68b7e0

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getVertexNormalYs
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1)

{
  (**(code **)(*(longlong *)(*(longlong *)&this->field_0x40 + 0x10) + 0x60))();
  return __return_storage_ptr__;
}

// getVertexNormalZs @ 14a68b810

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getVertexNormalZs
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1)

{
  (**(code **)(*(longlong *)(*(longlong *)&this->field_0x40 + 0x10) + 0x68))();
  return __return_storage_ptr__;
}

// getVertexPosition @ 14a68b840

Vector3 * __thiscall
RigLogicDNAReader::getVertexPosition
          (RigLogicDNAReader *this,Vector3 *__return_storage_ptr__,ushort param_1,uint param_2)

{
  (**(code **)(*(longlong *)(*(longlong *)&this->field_0x40 + 0x10) + 8))();
  return __return_storage_ptr__;
}

// getVertexPositionCount @ 14a68b870

uint __thiscall RigLogicDNAReader::getVertexPositionCount(RigLogicDNAReader *this,ushort param_1)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a68b87b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)**(undefined8 **)(*(longlong *)&this->field_0x40 + 0x10))();
  return uVar1;
}

// getVertexPositionXs @ 14a68b890

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getVertexPositionXs
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1)

{
  (**(code **)(*(longlong *)(*(longlong *)&this->field_0x40 + 0x10) + 0x10))();
  return __return_storage_ptr__;
}

// getVertexPositionYs @ 14a68b8c0

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getVertexPositionYs
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1)

{
  (**(code **)(*(longlong *)(*(longlong *)&this->field_0x40 + 0x10) + 0x18))();
  return __return_storage_ptr__;
}

// getVertexPositionZs @ 14a68b8f0

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getVertexPositionZs
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1)

{
  (**(code **)(*(longlong *)(*(longlong *)&this->field_0x40 + 0x10) + 0x20))();
  return __return_storage_ptr__;
}

// getVertexTextureCoordinate @ 14a68b920

TextureCoordinate __thiscall
RigLogicDNAReader::getVertexTextureCoordinate(RigLogicDNAReader *this,ushort param_1,uint param_2)

{
  TextureCoordinate TVar1;
  undefined6 in_register_00000012;
  
  TVar1._2_6_ = in_register_00000012;
  TVar1.u._0_2_ = param_1;
  (**(code **)(*(longlong *)(*(longlong *)&this->field_0x40 + 0x10) + 0x30))();
  return TVar1;
}

// getVertexTextureCoordinateCount @ 14a68b950

uint __thiscall
RigLogicDNAReader::getVertexTextureCoordinateCount(RigLogicDNAReader *this,ushort param_1)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a68b95b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)(*(longlong *)&this->field_0x40 + 0x10) + 0x28))();
  return uVar1;
}

// getVertexTextureCoordinateUs @ 14a68b970

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getVertexTextureCoordinateUs
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1)

{
  (**(code **)(*(longlong *)(*(longlong *)&this->field_0x40 + 0x10) + 0x38))();
  return __return_storage_ptr__;
}

// getVertexTextureCoordinateVs @ 14a68b9a0

ArrayView<float_const_> * __thiscall
RigLogicDNAReader::getVertexTextureCoordinateVs
          (RigLogicDNAReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1)

{
  (**(code **)(*(longlong *)(*(longlong *)&this->field_0x40 + 0x10) + 0x40))();
  return __return_storage_ptr__;
}

// unload @ 14a68bd90

void __thiscall RigLogicDNAReader::unload(RigLogicDNAReader *this,DataLayer param_1)

{
  undefined1 local_res18 [16];
  
  `RigLogicDNAReader::unload'::__l2::<lambda_1>::operator()(local_res18);
  return;
}

// IMPLEMENT_MODULE_RigLogicModule @ 14a68bf80

void __cdecl IMPLEMENT_MODULE_RigLogicModule(void)

{
  return;
}

// PathSeparator'' @ 15041f8e0

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

// RootNodeID'' @ 15041f900

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

// `dynamic_atexit_destructor_for_'FRigUnit_RigLogicAutomationTestInstance'' @ 15041f920

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FRigUnit_RigLogicAutomationTestInstance__
          (void)

{
  FRigUnit_RigLogic_Data::~FRigUnit_RigLogic_Data
            (&FRigUnit_RigLogicAutomationTestInstance.Unit.Data);
  FRigUnit_RigLogicAutomationTestInstance.Unit._padding_ = (longlong)&___7FRigVMStruct__6B_;
  FControlRigUnitTestBase::~FControlRigUnitTestBase
            ((FControlRigUnitTestBase *)&FRigUnit_RigLogicAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterDNAAssetCustomVersion'' @ 15041f960

void __cdecl _dynamic_atexit_destructor_for__GRegisterDNAAssetCustomVersion__(void)

{
  FCurrentCustomVersions::Unregister(&GRegisterDNAAssetCustomVersion.Key);
  return;
}

// `dynamic_atexit_destructor_for_'LogDNAAsset'' @ 15041f980

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogDNAAsset__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogDNAAsset);
  return;
}

// `dynamic_atexit_destructor_for_'LogDNAReader'' @ 15041f9a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogDNAReader__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogDNAReader);
  return;
}

// `dynamic_atexit_destructor_for_'LogDNAToSkelMeshMap'' @ 15041f9c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogDNAToSkelMeshMap__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogDNAToSkelMeshMap);
  return;
}

// `dynamic_atexit_destructor_for_'LogDNAUtils'' @ 15041f9e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogDNAUtils__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogDNAUtils);
  return;
}

// `dynamic_atexit_destructor_for_'LogRigLogic'' @ 15041fa00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogRigLogic__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogRigLogic);
  return;
}

// `dynamic_atexit_destructor_for_'LogRigLogicAnimNode'' @ 15041fa20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogRigLogicAnimNode__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogRigLogicAnimNode);
  return;
}

// `dynamic_atexit_destructor_for_'LogRigLogicUnit'' @ 15041fa40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogRigLogicUnit__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogRigLogicUnit);
  return;
}

// `dynamic_atexit_destructor_for_'LogSkelMeshDNAReader'' @ 15041fa60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogSkelMeshDNAReader__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogSkelMeshDNAReader);
  return;
}

// `dynamic_atexit_destructor_for_'MemoryResource'' @ 15041fa80

void __cdecl
`FMemoryResource::SharedInstance'::__l2::_dynamic_atexit_destructor_for__MemoryResource__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(DAT_1552c20c8)
  ;
  return;
}

// operator() @ 15054f3c0

bool __thiscall
`RigLogicDNAReader::getNeutralJointRotationXs'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<723149446128337110>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<723149446128337110>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15054f400

bool __thiscall
`RigLogicDNAReader::getNeutralJointRotationYs'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<723149446128337117>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<723149446128337117>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15054f440

bool __thiscall
`RigLogicDNAReader::getNeutralJointRotationZs'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<723149446128337124>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<723149446128337124>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15054f480

bool __thiscall
`RigLogicDNAReader::getNeutralJointTranslationXs'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<723149446128337082>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<723149446128337082>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15054f4c0

bool __thiscall
`RigLogicDNAReader::getNeutralJointTranslationYs'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<723149446128337089>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<723149446128337089>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15054f500

bool __thiscall
`RigLogicDNAReader::getNeutralJointTranslationZs'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<723149446128337096>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<723149446128337096>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15054f540

bool __thiscall `RigLogicDNAReader::unload'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<723149446128337615>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<723149446128337615>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15054f580

bool __thiscall
`RigLogicDNAReader::CacheRBFSolverRawControlValues'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<723149446128337748>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<723149446128337748>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

