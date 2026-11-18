// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 466

// OnEnterScriptContext'' @ 140f29610

void __cdecl `dynamic_initializer_for_'FBlueprintContextTracker::OnEnterScriptContext__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FBlueprintContextTracker::OnEnterScriptContext__);
  return;
}

// OnExitScriptContext'' @ 140f29630

void __cdecl `dynamic_initializer_for_'FBlueprintContextTracker::OnExitScriptContext__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FBlueprintContextTracker::OnExitScriptContext__);
  return;
}

// OnScriptException'' @ 140f29650

void __cdecl `dynamic_initializer_for_'FBlueprintCoreDelegates::OnScriptException__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FBlueprintCoreDelegates::OnScriptException__);
  return;
}

// OnScriptProfilingEvent'' @ 140f29670

void __cdecl `dynamic_initializer_for_'FBlueprintCoreDelegates::OnScriptProfilingEvent__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FBlueprintCoreDelegates::OnScriptProfilingEvent__);
  return;
}

// OnToggleScriptProfiler'' @ 140f29690

void __cdecl `dynamic_initializer_for_'FBlueprintCoreDelegates::OnToggleScriptProfiler__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FBlueprintCoreDelegates::OnToggleScriptProfiler__);
  return;
}

// PIEPackageNames'' @ 140f296b0

void __cdecl `dynamic_initializer_for_'FSoftObjectPath::PIEPackageNames__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSoftObjectPath::PIEPackageNames__);
  return;
}

// RootNodeID'' @ 140f296d0

void __cdecl `dynamic_initializer_for_'FOverriddenPropertySet::RootNodeID__(void)

{
  FOverriddenPropertyNodeID::RootNodeId(&FOverriddenPropertySet::RootNodeID);
  atexit(`dynamic_atexit_destructor_for_'FOverriddenPropertySet::RootNodeID__);
  return;
}

// SparseDelegateMapCritical'' @ 140f29700

void __cdecl `dynamic_initializer_for_'FSparseDelegateStorage::SparseDelegateMapCritical__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&FSparseDelegateStorage::SparseDelegateMapCritical,4000);
  atexit(`dynamic_atexit_destructor_for_'FSparseDelegateStorage::SparseDelegateMapCritical__);
  return;
}

// SparseDelegateObjectListener'' @ 140f29730

void __cdecl `dynamic_initializer_for_'FSparseDelegateStorage::SparseDelegateObjectListener__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSparseDelegateStorage::SparseDelegateObjectListener__);
  return;
}

// SparseDelegateObjectOffsets'' @ 140f29750

void __cdecl `dynamic_initializer_for_'FSparseDelegateStorage::SparseDelegateObjectOffsets__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSparseDelegateStorage::SparseDelegateObjectOffsets__);
  return;
}

// SparseDelegates'' @ 140f29770

void __cdecl `dynamic_initializer_for_'FSparseDelegateStorage::SparseDelegates__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSparseDelegateStorage::SparseDelegates__);
  return;
}

// `dynamic_initializer_for_'AutomaticOptionalInclusionAssetTypeList'' @ 140f29790

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__AutomaticOptionalInclusionAssetTypeList__(void)

{
  atexit(_dynamic_atexit_destructor_for__AutomaticOptionalInclusionAssetTypeList__);
  return;
}

// `dynamic_initializer_for_'CVarBlueprintContextVirtualStackAllocatorDecommitMode'' @ 140f297b0

void __cdecl _dynamic_initializer_for__CVarBlueprintContextVirtualStackAllocatorDecommitMode__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarBlueprintContextVirtualStackAllocatorDecommitMode,
             L"r.FBlueprintContext.VirtualStackAllocator.DecommitMode",
             &BlueprintContextVirtualStackAllocatorDecommitMode,
             L"Specifies DecommitMode for FVirtualStackAllocator when used through its ThreadSingleton. Values are from EVirtualStackAllocatorDecommitMode."
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarBlueprintContextVirtualStackAllocatorDecommitMode__);
  return;
}

// `dynamic_initializer_for_'CVarBlueprintContextVirtualStackAllocatorStackSize'' @ 140f29800

void __cdecl _dynamic_initializer_for__CVarBlueprintContextVirtualStackAllocatorStackSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarBlueprintContextVirtualStackAllocatorStackSize,
             L"r.FBlueprintContext.VirtualStackAllocatorStackSize",
             &BlueprintContextVirtualStackAllocatorSize,
             L"Default size for FBlueprintContext\'s FVirtualStackAllocator",4);
  atexit(_dynamic_atexit_destructor_for__CVarBlueprintContextVirtualStackAllocatorStackSize__);
  return;
}

// `dynamic_initializer_for_'CVarEnablePathFixupOutsideEditor'' @ 140f29850

void __cdecl SoftObjectPath::_dynamic_initializer_for__CVarEnablePathFixupOutsideEditor__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnablePathFixupOutsideEditor,L"SoftObjectPath.EnablePathFixupOutsideEditor",
             &bResolveCoreRedirects,
             L"When true (by default) we will call FixupCoreRedirects when resolving, loading, or saving soft object paths outside the editor. When false, we will revert to the legacy behavior and not do the extra fixup."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEnablePathFixupOutsideEditor__);
  return;
}

// `dynamic_initializer_for_'CVarMaxFunctionStatDepth'' @ 140f298a0

void __cdecl _dynamic_initializer_for__CVarMaxFunctionStatDepth__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMaxFunctionStatDepth,L"bp.MaxFunctionStatDepth",&GMaxFunctionStatDepth,
             L"Script stack threshold for recording per function stats.\n",0);
  atexit(_dynamic_atexit_destructor_for__CVarMaxFunctionStatDepth__);
  return;
}

// `dynamic_initializer_for_'CVarScriptRecurseLimit'' @ 140f298f0

void __cdecl _dynamic_initializer_for__CVarScriptRecurseLimit__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarScriptRecurseLimit,L"bp.ScriptRecurseLimit",&GScriptRecurseLimit,
             L"Sets the number of recursions before script is considered in an infinite loop.\n",0);
  atexit(_dynamic_atexit_destructor_for__CVarScriptRecurseLimit__);
  return;
}

// `dynamic_initializer_for_'CVarShortScriptWarnings'' @ 140f29940

void __cdecl _dynamic_initializer_for__CVarShortScriptWarnings__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarShortScriptWarnings,L"bp.ShortScriptWarnings",&GShortScriptWarnings,
             L"Shorten the blueprint exception logs.\n",0);
  atexit(_dynamic_atexit_destructor_for__CVarShortScriptWarnings__);
  return;
}

// `dynamic_initializer_for_'CVarVerboseScriptStats'' @ 140f29990

void __cdecl _dynamic_initializer_for__CVarVerboseScriptStats__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVerboseScriptStats,L"bp.VerboseStats",&GVerboseScriptStats,
             L"Create additional stats for Blueprint execution.\n",0);
  atexit(_dynamic_atexit_destructor_for__CVarVerboseScriptStats__);
  return;
}

// `dynamic_initializer_for_'EX_AddMulticastDelegateRegistrarInst'' @ 140f299e0

void __cdecl _dynamic_initializer_for__EX_AddMulticastDelegateRegistrarInst__(void)

{
  GNativeFuncNames[0x5c] = "EX_AddMulticastDelegate";
  return;
}

// `dynamic_initializer_for_'EX_ArrayConstRegistrarInst'' @ 140f29a00

void __cdecl _dynamic_initializer_for__EX_ArrayConstRegistrarInst__(void)

{
  GNativeFuncNames[0x65] = "EX_ArrayConst";
  return;
}

// `dynamic_initializer_for_'EX_ArrayGetByRefRegistrarInst'' @ 140f29a20

void __cdecl _dynamic_initializer_for__EX_ArrayGetByRefRegistrarInst__(void)

{
  GNativeFuncNames[0x6b] = "EX_ArrayGetByRef";
  return;
}

// `dynamic_initializer_for_'EX_AssertRegistrarInst'' @ 140f29a40

void __cdecl _dynamic_initializer_for__EX_AssertRegistrarInst__(void)

{
  GNativeFuncNames[9] = "EX_Assert";
  return;
}

// `dynamic_initializer_for_'EX_AutoRtfmAbortIfNotRegistrarInst'' @ 140f29a60

void __cdecl _dynamic_initializer_for__EX_AutoRtfmAbortIfNotRegistrarInst__(void)

{
  GNativeFuncNames[0x72] = "EX_AutoRtfmAbortIfNot";
  return;
}

// `dynamic_initializer_for_'EX_AutoRtfmStopTransactRegistrarInst'' @ 140f29a80

void __cdecl _dynamic_initializer_for__EX_AutoRtfmStopTransactRegistrarInst__(void)

{
  GNativeFuncNames[0x71] = "EX_AutoRtfmStopTransact";
  return;
}

// `dynamic_initializer_for_'EX_AutoRtfmTransactRegistrarInst'' @ 140f29aa0

void __cdecl _dynamic_initializer_for__EX_AutoRtfmTransactRegistrarInst__(void)

{
  GNativeFuncNames[0x70] = "EX_AutoRtfmTransact";
  return;
}

// `dynamic_initializer_for_'EX_BindDelegateRegistrarInst'' @ 140f29ac0

void __cdecl _dynamic_initializer_for__EX_BindDelegateRegistrarInst__(void)

{
  GNativeFuncNames[0x61] = "EX_BindDelegate";
  return;
}

// `dynamic_initializer_for_'EX_BitFieldConstRegistrarInst'' @ 140f29ae0

void __cdecl _dynamic_initializer_for__EX_BitFieldConstRegistrarInst__(void)

{
  GNativeFuncNames[0x11] = "EX_BitFieldConst";
  return;
}

// `dynamic_initializer_for_'EX_BreakpointRegistrarInst'' @ 140f29b00

void __cdecl _dynamic_initializer_for__EX_BreakpointRegistrarInst__(void)

{
  GNativeFuncNames[0x50] = "EX_Breakpoint";
  return;
}

// `dynamic_initializer_for_'EX_ByteConstRegistrarInst'' @ 140f29b20

void __cdecl _dynamic_initializer_for__EX_ByteConstRegistrarInst__(void)

{
  GNativeFuncNames[0x24] = "EX_ByteConst";
  return;
}

// `dynamic_initializer_for_'EX_CallMathRegistrarInst'' @ 140f29b40

void __cdecl _dynamic_initializer_for__EX_CallMathRegistrarInst__(void)

{
  GNativeFuncNames[0x68] = "EX_CallMath";
  return;
}

// `dynamic_initializer_for_'EX_CallMulticastDelegateRegistrarInst'' @ 140f29b60

void __cdecl _dynamic_initializer_for__EX_CallMulticastDelegateRegistrarInst__(void)

{
  GNativeFuncNames[99] = "EX_CallMulticastDelegate";
  return;
}

// `dynamic_initializer_for_'EX_CastRegistrarInst'' @ 140f29b80

void __cdecl _dynamic_initializer_for__EX_CastRegistrarInst__(void)

{
  GNativeFuncNames[0x38] = "EX_Cast";
  return;
}

// `dynamic_initializer_for_'EX_ClassContextRegistrarInst'' @ 140f29ba0

void __cdecl _dynamic_initializer_for__EX_ClassContextRegistrarInst__(void)

{
  GNativeFuncNames[0x12] = "EX_ClassContext";
  return;
}

// `dynamic_initializer_for_'EX_ClassSparseDataVariableRegistrarInst'' @ 140f29bc0

void __cdecl _dynamic_initializer_for__EX_ClassSparseDataVariableRegistrarInst__(void)

{
  GNativeFuncNames[0x6c] = "EX_ClassSparseDataVariable";
  return;
}

// `dynamic_initializer_for_'EX_ClearMulticastDelegateRegistrarInst'' @ 140f29be0

void __cdecl _dynamic_initializer_for__EX_ClearMulticastDelegateRegistrarInst__(void)

{
  GNativeFuncNames[0x5d] = "EX_ClearMulticastDelegate";
  return;
}

// `dynamic_initializer_for_'EX_ComputedJumpRegistrarInst'' @ 140f29c00

void __cdecl _dynamic_initializer_for__EX_ComputedJumpRegistrarInst__(void)

{
  GNativeFuncNames[0x4e] = "EX_ComputedJump";
  return;
}

// `dynamic_initializer_for_'EX_ContextRegistrarInst'' @ 140f29c20

void __cdecl _dynamic_initializer_for__EX_ContextRegistrarInst__(void)

{
  GNativeFuncNames[0x19] = "EX_Context";
  return;
}

// `dynamic_initializer_for_'EX_Context_FailSilentRegistrarInst'' @ 140f29c40

void __cdecl _dynamic_initializer_for__EX_Context_FailSilentRegistrarInst__(void)

{
  GNativeFuncNames[0x1a] = "EX_Context_FailSilent";
  return;
}

// `dynamic_initializer_for_'EX_CrossInterfaceCastRegistrarInst'' @ 140f29c60

void __cdecl _dynamic_initializer_for__EX_CrossInterfaceCastRegistrarInst__(void)

{
  GNativeFuncNames[0x54] = "EX_CrossInterfaceCast";
  return;
}

// `dynamic_initializer_for_'EX_DefaultVariableRegistrarInst'' @ 140f29c80

void __cdecl _dynamic_initializer_for__EX_DefaultVariableRegistrarInst__(void)

{
  GNativeFuncNames[2] = "EX_DefaultVariable";
  return;
}

// `dynamic_initializer_for_'EX_DeprecatedOp4ARegistrarInst'' @ 140f29ca0

void __cdecl _dynamic_initializer_for__EX_DeprecatedOp4ARegistrarInst__(void)

{
  GNativeFuncNames[0x4a] = "EX_DeprecatedOp4A";
  return;
}

// `dynamic_initializer_for_'EX_DoubleConstRegistrarInst'' @ 140f29cc0

void __cdecl _dynamic_initializer_for__EX_DoubleConstRegistrarInst__(void)

{
  GNativeFuncNames[0x37] = "EX_DoubleConst";
  return;
}

// `dynamic_initializer_for_'EX_DynamicCastRegistrarInst'' @ 140f29ce0

void __cdecl _dynamic_initializer_for__EX_DynamicCastRegistrarInst__(void)

{
  GNativeFuncNames[0x2e] = "EX_DynamicCast";
  return;
}

// `dynamic_initializer_for_'EX_EndFunctionParmsRegistrarInst'' @ 140f29d00

void __cdecl _dynamic_initializer_for__EX_EndFunctionParmsRegistrarInst__(void)

{
  GNativeFuncNames[0x16] = "EX_EndFunctionParms";
  return;
}

// `dynamic_initializer_for_'EX_EndOfScriptRegistrarInst'' @ 140f29d20

void __cdecl _dynamic_initializer_for__EX_EndOfScriptRegistrarInst__(void)

{
  GNativeFuncNames[0x53] = "EX_EndOfScript";
  return;
}

// `dynamic_initializer_for_'EX_FalseRegistrarInst'' @ 140f29d40

void __cdecl _dynamic_initializer_for__EX_FalseRegistrarInst__(void)

{
  GNativeFuncNames[0x28] = "EX_False";
  return;
}

// `dynamic_initializer_for_'EX_FieldPathConstRegistrarInst'' @ 140f29d60

void __cdecl _dynamic_initializer_for__EX_FieldPathConstRegistrarInst__(void)

{
  GNativeFuncNames[0x6d] = "EX_FieldPathConst";
  return;
}

// `dynamic_initializer_for_'EX_FinalFunctionRegistrarInst'' @ 140f29d80

void __cdecl _dynamic_initializer_for__EX_FinalFunctionRegistrarInst__(void)

{
  GNativeFuncNames[0x1c] = "EX_FinalFunction";
  return;
}

// `dynamic_initializer_for_'EX_FloatConstRegistrarInst'' @ 140f29da0

void __cdecl _dynamic_initializer_for__EX_FloatConstRegistrarInst__(void)

{
  GNativeFuncNames[0x1e] = "EX_FloatConst";
  return;
}

// `dynamic_initializer_for_'EX_InstanceDelegateRegistrarInst'' @ 140f29dc0

void __cdecl _dynamic_initializer_for__EX_InstanceDelegateRegistrarInst__(void)

{
  GNativeFuncNames[0x4b] = "EX_InstanceDelegate";
  return;
}

// `dynamic_initializer_for_'EX_InstanceVariableRegistrarInst'' @ 140f29de0

void __cdecl _dynamic_initializer_for__EX_InstanceVariableRegistrarInst__(void)

{
  GNativeFuncNames[1] = "EX_InstanceVariable";
  return;
}

// `dynamic_initializer_for_'EX_InstrumentationEventRegistrarInst'' @ 140f29e00

void __cdecl _dynamic_initializer_for__EX_InstrumentationEventRegistrarInst__(void)

{
  GNativeFuncNames[0x6a] = "EX_InstrumentationEvent";
  return;
}

// `dynamic_initializer_for_'EX_Int64ConstRegistrarInst'' @ 140f29e20

void __cdecl _dynamic_initializer_for__EX_Int64ConstRegistrarInst__(void)

{
  GNativeFuncNames[0x35] = "EX_Int64Const";
  return;
}

// `dynamic_initializer_for_'EX_IntConstByteRegistrarInst'' @ 140f29e40

void __cdecl _dynamic_initializer_for__EX_IntConstByteRegistrarInst__(void)

{
  GNativeFuncNames[0x2c] = "EX_IntConstByte";
  return;
}

// `dynamic_initializer_for_'EX_IntConstRegistrarInst'' @ 140f29e60

void __cdecl _dynamic_initializer_for__EX_IntConstRegistrarInst__(void)

{
  GNativeFuncNames[0x1d] = "EX_IntConst";
  return;
}

// `dynamic_initializer_for_'EX_IntOneRegistrarInst'' @ 140f29e80

void __cdecl _dynamic_initializer_for__EX_IntOneRegistrarInst__(void)

{
  GNativeFuncNames[0x26] = "EX_IntOne";
  return;
}

// `dynamic_initializer_for_'EX_IntZeroRegistrarInst'' @ 140f29ea0

void __cdecl _dynamic_initializer_for__EX_IntZeroRegistrarInst__(void)

{
  GNativeFuncNames[0x25] = "EX_IntZero";
  return;
}

// `dynamic_initializer_for_'EX_InterfaceContextRegistrarInst'' @ 140f29ec0

void __cdecl _dynamic_initializer_for__EX_InterfaceContextRegistrarInst__(void)

{
  GNativeFuncNames[0x51] = "EX_InterfaceContext";
  return;
}

// `dynamic_initializer_for_'EX_InterfaceToObjCastRegistrarInst'' @ 140f29ee0

void __cdecl _dynamic_initializer_for__EX_InterfaceToObjCastRegistrarInst__(void)

{
  GNativeFuncNames[0x55] = "EX_InterfaceToObjCast";
  return;
}

// `dynamic_initializer_for_'EX_JumpIfNotRegistrarInst'' @ 140f29f00

void __cdecl _dynamic_initializer_for__EX_JumpIfNotRegistrarInst__(void)

{
  GNativeFuncNames[7] = "EX_JumpIfNot";
  return;
}

// `dynamic_initializer_for_'EX_JumpRegistrarInst'' @ 140f29f20

void __cdecl _dynamic_initializer_for__EX_JumpRegistrarInst__(void)

{
  GNativeFuncNames[6] = "EX_Jump";
  return;
}

// `dynamic_initializer_for_'EX_LetBoolRegistrarInst'' @ 140f29f40

void __cdecl _dynamic_initializer_for__EX_LetBoolRegistrarInst__(void)

{
  GNativeFuncNames[0x14] = "EX_LetBool";
  return;
}

// `dynamic_initializer_for_'EX_LetDelegateRegistrarInst'' @ 140f29f60

void __cdecl _dynamic_initializer_for__EX_LetDelegateRegistrarInst__(void)

{
  GNativeFuncNames[0x44] = "EX_LetDelegate";
  return;
}

// `dynamic_initializer_for_'EX_LetMulticastDelegateRegistrarInst'' @ 140f29f80

void __cdecl _dynamic_initializer_for__EX_LetMulticastDelegateRegistrarInst__(void)

{
  GNativeFuncNames[0x43] = "EX_LetMulticastDelegate";
  return;
}

// `dynamic_initializer_for_'EX_LetObjRegistrarInst'' @ 140f29fa0

void __cdecl _dynamic_initializer_for__EX_LetObjRegistrarInst__(void)

{
  GNativeFuncNames[0x5f] = "EX_LetObj";
  return;
}

// `dynamic_initializer_for_'EX_LetRegistrarInst'' @ 140f29fc0

void __cdecl _dynamic_initializer_for__EX_LetRegistrarInst__(void)

{
  GNativeFuncNames[0xf] = "EX_Let";
  return;
}

// `dynamic_initializer_for_'EX_LetValueOnPersistentFrameRegistrarInst'' @ 140f29fe0

void __cdecl _dynamic_initializer_for__EX_LetValueOnPersistentFrameRegistrarInst__(void)

{
  GNativeFuncNames[100] = "EX_LetValueOnPersistentFrame";
  return;
}

// `dynamic_initializer_for_'EX_LetWeakObjPtrRegistrarInst'' @ 140f2a000

void __cdecl _dynamic_initializer_for__EX_LetWeakObjPtrRegistrarInst__(void)

{
  GNativeFuncNames[0x60] = "EX_LetWeakObjPtr";
  return;
}

// `dynamic_initializer_for_'EX_LocalFinalFunctionRegistrarInst'' @ 140f2a020

void __cdecl _dynamic_initializer_for__EX_LocalFinalFunctionRegistrarInst__(void)

{
  GNativeFuncNames[0x46] = "EX_LocalFinalFunction";
  return;
}

// `dynamic_initializer_for_'EX_LocalOutVariableRegistrarInst'' @ 140f2a040

void __cdecl _dynamic_initializer_for__EX_LocalOutVariableRegistrarInst__(void)

{
  GNativeFuncNames[0x48] = "EX_LocalOutVariable";
  return;
}

// `dynamic_initializer_for_'EX_LocalVariableRegistrarInst'' @ 140f2a060

void __cdecl _dynamic_initializer_for__EX_LocalVariableRegistrarInst__(void)

{
  GNativeFuncNames[0] = "EX_LocalVariable";
  return;
}

// `dynamic_initializer_for_'EX_LocalVirtualFunctionRegistrarInst'' @ 140f2a080

void __cdecl _dynamic_initializer_for__EX_LocalVirtualFunctionRegistrarInst__(void)

{
  GNativeFuncNames[0x45] = "EX_LocalVirtualFunction";
  return;
}

// `dynamic_initializer_for_'EX_MapConstRegistrarInst'' @ 140f2a0a0

void __cdecl _dynamic_initializer_for__EX_MapConstRegistrarInst__(void)

{
  GNativeFuncNames[0x3f] = "EX_MapConst";
  return;
}

// `dynamic_initializer_for_'EX_MetaCastRegistrarInst'' @ 140f2a0c0

void __cdecl _dynamic_initializer_for__EX_MetaCastRegistrarInst__(void)

{
  GNativeFuncNames[0x13] = "EX_MetaCast";
  return;
}

// `dynamic_initializer_for_'EX_NameConstRegistrarInst'' @ 140f2a0e0

void __cdecl _dynamic_initializer_for__EX_NameConstRegistrarInst__(void)

{
  GNativeFuncNames[0x21] = "EX_NameConst";
  return;
}

// `dynamic_initializer_for_'EX_NoInterfaceRegistrarInst'' @ 140f2a100

void __cdecl _dynamic_initializer_for__EX_NoInterfaceRegistrarInst__(void)

{
  GNativeFuncNames[0x2d] = "EX_NoInterface";
  return;
}

// `dynamic_initializer_for_'EX_NoObjectRegistrarInst'' @ 140f2a120

void __cdecl _dynamic_initializer_for__EX_NoObjectRegistrarInst__(void)

{
  GNativeFuncNames[0x2a] = "EX_NoObject";
  return;
}

// `dynamic_initializer_for_'EX_NothingInt32RegistrarInst'' @ 140f2a140

void __cdecl _dynamic_initializer_for__EX_NothingInt32RegistrarInst__(void)

{
  GNativeFuncNames[0xc] = "EX_NothingInt32";
  return;
}

// `dynamic_initializer_for_'EX_NothingRegistrarInst'' @ 140f2a160

void __cdecl _dynamic_initializer_for__EX_NothingRegistrarInst__(void)

{
  GNativeFuncNames[0xb] = "EX_Nothing";
  return;
}

// `dynamic_initializer_for_'EX_ObjToInterfaceCastRegistrarInst'' @ 140f2a180

void __cdecl _dynamic_initializer_for__EX_ObjToInterfaceCastRegistrarInst__(void)

{
  GNativeFuncNames[0x52] = "EX_ObjToInterfaceCast";
  return;
}

// `dynamic_initializer_for_'EX_ObjectConstRegistrarInst'' @ 140f2a1a0

void __cdecl _dynamic_initializer_for__EX_ObjectConstRegistrarInst__(void)

{
  GNativeFuncNames[0x20] = "EX_ObjectConst";
  return;
}

// `dynamic_initializer_for_'EX_PopExecutionFlowIfNotRegistrarInst'' @ 140f2a1c0

void __cdecl _dynamic_initializer_for__EX_PopExecutionFlowIfNotRegistrarInst__(void)

{
  GNativeFuncNames[0x4f] = "EX_PopExecutionFlowIfNot";
  return;
}

// `dynamic_initializer_for_'EX_PopExecutionFlowRegistrarInst'' @ 140f2a1e0

void __cdecl _dynamic_initializer_for__EX_PopExecutionFlowRegistrarInst__(void)

{
  GNativeFuncNames[0x4d] = "EX_PopExecutionFlow";
  return;
}

// `dynamic_initializer_for_'EX_PropertyConstRegistrarInst'' @ 140f2a200

void __cdecl _dynamic_initializer_for__EX_PropertyConstRegistrarInst__(void)

{
  GNativeFuncNames[0x33] = "EX_PropertyConst";
  return;
}

// `dynamic_initializer_for_'EX_PushExecutionFlowRegistrarInst'' @ 140f2a220

void __cdecl _dynamic_initializer_for__EX_PushExecutionFlowRegistrarInst__(void)

{
  GNativeFuncNames[0x4c] = "EX_PushExecutionFlow";
  return;
}

// `dynamic_initializer_for_'EX_RemoveMulticastDelegateRegistrarInst'' @ 140f2a240

void __cdecl _dynamic_initializer_for__EX_RemoveMulticastDelegateRegistrarInst__(void)

{
  GNativeFuncNames[0x62] = "EX_RemoveMulticastDelegate";
  return;
}

// `dynamic_initializer_for_'EX_RotationConstRegistrarInst'' @ 140f2a260

void __cdecl _dynamic_initializer_for__EX_RotationConstRegistrarInst__(void)

{
  GNativeFuncNames[0x22] = "EX_RotationConst";
  return;
}

// `dynamic_initializer_for_'EX_SelfRegistrarInst'' @ 140f2a280

void __cdecl _dynamic_initializer_for__EX_SelfRegistrarInst__(void)

{
  GNativeFuncNames[0x17] = "EX_Self";
  return;
}

// `dynamic_initializer_for_'EX_SetArrayRegistrarInst'' @ 140f2a2a0

void __cdecl _dynamic_initializer_for__EX_SetArrayRegistrarInst__(void)

{
  GNativeFuncNames[0x31] = "EX_SetArray";
  return;
}

// `dynamic_initializer_for_'EX_SetConstRegistrarInst'' @ 140f2a2c0

void __cdecl _dynamic_initializer_for__EX_SetConstRegistrarInst__(void)

{
  GNativeFuncNames[0x3d] = "EX_SetConst";
  return;
}

// `dynamic_initializer_for_'EX_SetMapRegistrarInst'' @ 140f2a2e0

void __cdecl _dynamic_initializer_for__EX_SetMapRegistrarInst__(void)

{
  GNativeFuncNames[0x3b] = "EX_SetMap";
  return;
}

// `dynamic_initializer_for_'EX_SetSetRegistrarInst'' @ 140f2a300

void __cdecl _dynamic_initializer_for__EX_SetSetRegistrarInst__(void)

{
  GNativeFuncNames[0x39] = "EX_SetSet";
  return;
}

// `dynamic_initializer_for_'EX_SkipOffsetConstRegistrarInst'' @ 140f2a320

void __cdecl _dynamic_initializer_for__EX_SkipOffsetConstRegistrarInst__(void)

{
  GNativeFuncNames[0x5b] = "EX_SkipOffsetConst";
  return;
}

// `dynamic_initializer_for_'EX_SoftObjectConstRegistrarInst'' @ 140f2a340

void __cdecl _dynamic_initializer_for__EX_SoftObjectConstRegistrarInst__(void)

{
  GNativeFuncNames[0x67] = "EX_SoftObjectConst";
  return;
}

// `dynamic_initializer_for_'EX_StringConstRegistrarInst'' @ 140f2a360

void __cdecl _dynamic_initializer_for__EX_StringConstRegistrarInst__(void)

{
  GNativeFuncNames[0x1f] = "EX_StringConst";
  return;
}

// `dynamic_initializer_for_'EX_StructConstRegistrarInst'' @ 140f2a380

void __cdecl _dynamic_initializer_for__EX_StructConstRegistrarInst__(void)

{
  GNativeFuncNames[0x2f] = "EX_StructConst";
  return;
}

// `dynamic_initializer_for_'EX_StructMemberContextRegistrarInst'' @ 140f2a3a0

void __cdecl _dynamic_initializer_for__EX_StructMemberContextRegistrarInst__(void)

{
  GNativeFuncNames[0x42] = "EX_StructMemberContext";
  return;
}

// `dynamic_initializer_for_'EX_SwitchValueRegistrarInst'' @ 140f2a3c0

void __cdecl _dynamic_initializer_for__EX_SwitchValueRegistrarInst__(void)

{
  GNativeFuncNames[0x69] = "EX_SwitchValue";
  return;
}

// `dynamic_initializer_for_'EX_TextConstRegistrarInst'' @ 140f2a3e0

void __cdecl _dynamic_initializer_for__EX_TextConstRegistrarInst__(void)

{
  GNativeFuncNames[0x29] = "EX_TextConst";
  return;
}

// `dynamic_initializer_for_'EX_TracepointRegistrarInst'' @ 140f2a400

void __cdecl _dynamic_initializer_for__EX_TracepointRegistrarInst__(void)

{
  GNativeFuncNames[0x5e] = "EX_Tracepoint";
  return;
}

// `dynamic_initializer_for_'EX_TransformConstRegistrarInst'' @ 140f2a420

void __cdecl _dynamic_initializer_for__EX_TransformConstRegistrarInst__(void)

{
  GNativeFuncNames[0x2b] = "EX_TransformConst";
  return;
}

// `dynamic_initializer_for_'EX_TrueRegistrarInst'' @ 140f2a440

void __cdecl _dynamic_initializer_for__EX_TrueRegistrarInst__(void)

{
  GNativeFuncNames[0x27] = "EX_True";
  return;
}

// `dynamic_initializer_for_'EX_UInt64ConstRegistrarInst'' @ 140f2a460

void __cdecl _dynamic_initializer_for__EX_UInt64ConstRegistrarInst__(void)

{
  GNativeFuncNames[0x36] = "EX_UInt64Const";
  return;
}

// `dynamic_initializer_for_'EX_UnicodeStringConstRegistrarInst'' @ 140f2a480

void __cdecl _dynamic_initializer_for__EX_UnicodeStringConstRegistrarInst__(void)

{
  GNativeFuncNames[0x34] = "EX_UnicodeStringConst";
  return;
}

// `dynamic_initializer_for_'EX_Vector3fConstRegistrarInst'' @ 140f2a4a0

void __cdecl _dynamic_initializer_for__EX_Vector3fConstRegistrarInst__(void)

{
  GNativeFuncNames[0x41] = "EX_Vector3fConst";
  return;
}

// `dynamic_initializer_for_'EX_VectorConstRegistrarInst'' @ 140f2a4c0

void __cdecl _dynamic_initializer_for__EX_VectorConstRegistrarInst__(void)

{
  GNativeFuncNames[0x23] = "EX_VectorConst";
  return;
}

// `dynamic_initializer_for_'EX_VirtualFunctionRegistrarInst'' @ 140f2a4e0

void __cdecl _dynamic_initializer_for__EX_VirtualFunctionRegistrarInst__(void)

{
  GNativeFuncNames[0x1b] = "EX_VirtualFunction";
  return;
}

// `dynamic_initializer_for_'EX_WireTracepointRegistrarInst'' @ 140f2a500

void __cdecl _dynamic_initializer_for__EX_WireTracepointRegistrarInst__(void)

{
  GNativeFuncNames[0x5a] = "EX_WireTracepoint";
  return;
}

// `dynamic_initializer_for_'FSoftObjectPathImportTextTestsInstance'' @ 140f2a520

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FSoftObjectPathImportTextTestsInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FSoftObjectPathImportTextTests");
  FSoftObjectPathImportTextTests::FSoftObjectPathImportTextTests
            (&FSoftObjectPathImportTextTestsInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FSoftObjectPathImportTextTestsInstance__);
  return;
}

// `dynamic_initializer_for_'FSoftObjectPathTrySetPathTestsInstance'' @ 140f2a570

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FSoftObjectPathTrySetPathTestsInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FSoftObjectPathTrySetPathTests");
  FSoftObjectPathTrySetPathTests::FSoftObjectPathTrySetPathTests
            (&FSoftObjectPathTrySetPathTestsInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FSoftObjectPathTrySetPathTestsInstance__);
  return;
}

// `dynamic_initializer_for_'FTopLevelAssetPathTestInstance'' @ 140f2a5c0

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FTopLevelAssetPathTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTopLevelAssetPathTest");
  FTopLevelAssetPathTest::FTopLevelAssetPathTest(&FTopLevelAssetPathTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTopLevelAssetPathTestInstance__);
  return;
}

// `dynamic_initializer_for_'LogSavePackage'' @ 140f2a610

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogSavePackage__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogSavePackage,L"LogSavePackage",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogSavePackage__);
  return;
}

// `dynamic_initializer_for_'LogScriptCore'' @ 140f2a650

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogScriptCore__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogScriptCore,L"LogScriptCore",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogScriptCore__);
  return;
}

// `dynamic_initializer_for_'LogScriptFrame'' @ 140f2a690

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogScriptFrame__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogScriptFrame,L"LogScriptFrame",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogScriptFrame__);
  return;
}

// `dynamic_initializer_for_'LogScriptStackTracker'' @ 140f2a6d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogScriptStackTracker__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogScriptStackTracker,L"LogScriptStackTracker",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogScriptStackTracker__);
  return;
}

// `dynamic_initializer_for_'NAME_Level'' @ 140f2a710

void __cdecl UE::SavePackageUtilities::_dynamic_initializer_for__NAME_Level__(void)

{
  ::FName::FName(&NAME_Level,"Level");
  return;
}

// `dynamic_initializer_for_'NAME_PrestreamPackage'' @ 140f2a730

void __cdecl UE::SavePackageUtilities::_dynamic_initializer_for__NAME_PrestreamPackage__(void)

{
  ::FName::FName(&NAME_PrestreamPackage,"PrestreamPackage");
  return;
}

// `dynamic_initializer_for_'NAME_World'' @ 140f2a750

void __cdecl UE::SavePackageUtilities::_dynamic_initializer_for__NAME_World__(void)

{
  ::FName::FName(&NAME_World,"World");
  return;
}

// `dynamic_initializer_for_'SaveTimeChannelReg'' @ 140f2a770

void __cdecl _dynamic_initializer_for__SaveTimeChannelReg__(void)

{
  InitArgs local_18;
  
  local_18.Desc = (char *)0x0;
  local_18.bReadOnly = false;
  local_18._9_7_ = 0;
  UE::Trace::FChannel::Setup(&SaveTimeChannelObject,"SaveTimeChannel",&local_18);
  return;
}

// `dynamic_initializer_for_'ScriptAudit'' @ 140f2a7a0

void __cdecl _dynamic_initializer_for__ScriptAudit__(void)

{
  FSelfRegisteringExec::FSelfRegisteringExec((FSelfRegisteringExec *)&ScriptAudit);
  ScriptAudit = (FScriptAuditExec)&___7FScriptAuditExec__6B_;
  atexit(_dynamic_atexit_destructor_for__ScriptAudit__);
  return;
}

// `dynamic_initializer_for_'SparseDelegateReportCommand'' @ 140f2a7e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__SparseDelegateReportCommand__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = FSparseDelegateStorage::SparseDelegateReport;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&SparseDelegateReportCommand,L"SparseDelegateReport",
             L"Outputs a report of what sparse delegates are bound. SparseDelegateReport [name=<ObjectName>] [delegate=<DelegateName>] [class=<ClassName>] -details"
             ,(TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
               *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__SparseDelegateReportCommand__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BlueprintTime'' @ 140f2a920

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BlueprintTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BlueprintTime == (FThreadSafeStaticStat<FStat_STAT_BlueprintTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BlueprintTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BlueprintTime,*pFVar1,L"Blueprint Time",
               "STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,ST_int64,true,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'UObjectexecAddMulticastDelegateBytecodeTemp'' @ 140f2a9b0

void __cdecl _dynamic_initializer_for__UObjectexecAddMulticastDelegateBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x5c];
  if (GNatives.Elements[0x5c] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x5c;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execAddMulticastDelegate,p_Var1);
    }
  }
  GNatives.Elements[0x5c] = UObject::execAddMulticastDelegate;
  UObjectexecAddMulticastDelegateBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecAddMulticastDelegateRegistar'' @ 140f2aa20

void __cdecl _dynamic_initializer_for__UObjectexecAddMulticastDelegateRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction
            (pUVar1,"execAddMulticastDelegate",UObject::execAddMulticastDelegate);
  return;
}

// `dynamic_initializer_for_'UObjectexecArrayConstBytecodeTemp'' @ 140f2aa50

void __cdecl _dynamic_initializer_for__UObjectexecArrayConstBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x65];
  if (GNatives.Elements[0x65] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x65;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execArrayConst,p_Var1);
    }
  }
  GNatives.Elements[0x65] = UObject::execArrayConst;
  UObjectexecArrayConstBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecArrayConstRegistar'' @ 140f2aac0

void __cdecl _dynamic_initializer_for__UObjectexecArrayConstRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execArrayConst",UObject::execArrayConst);
  return;
}

// `dynamic_initializer_for_'UObjectexecArrayGetByRefBytecodeTemp'' @ 140f2aaf0

void __cdecl _dynamic_initializer_for__UObjectexecArrayGetByRefBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x6b];
  if (GNatives.Elements[0x6b] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x6b;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execArrayGetByRef,p_Var1);
    }
  }
  GNatives.Elements[0x6b] = UObject::execArrayGetByRef;
  UObjectexecArrayGetByRefBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecArrayGetByRefRegistar'' @ 140f2ab60

void __cdecl _dynamic_initializer_for__UObjectexecArrayGetByRefRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execArrayGetByRef",UObject::execArrayGetByRef);
  return;
}

// `dynamic_initializer_for_'UObjectexecAssertBytecodeTemp'' @ 140f2ab90

void __cdecl _dynamic_initializer_for__UObjectexecAssertBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[9];
  if (GNatives.Elements[9] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 9;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execAssert,p_Var1);
    }
  }
  GNatives.Elements[9] = UObject::execAssert;
  UObjectexecAssertBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecAssertRegistar'' @ 140f2ac00

void __cdecl _dynamic_initializer_for__UObjectexecAssertRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execAssert",UObject::execAssert);
  return;
}

// `dynamic_initializer_for_'UObjectexecAutoRtfmAbortIfNotBytecodeTemp'' @ 140f2ac30

void __cdecl _dynamic_initializer_for__UObjectexecAutoRtfmAbortIfNotBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x72];
  if (GNatives.Elements[0x72] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x72;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execAutoRtfmAbortIfNot,p_Var1);
    }
  }
  GNatives.Elements[0x72] = UObject::execAutoRtfmAbortIfNot;
  UObjectexecAutoRtfmAbortIfNotBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecAutoRtfmAbortIfNotRegistar'' @ 140f2aca0

void __cdecl _dynamic_initializer_for__UObjectexecAutoRtfmAbortIfNotRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction
            (pUVar1,"execAutoRtfmAbortIfNot",UObject::execAutoRtfmAbortIfNot);
  return;
}

// `dynamic_initializer_for_'UObjectexecAutoRtfmStopTransactBytecodeTemp'' @ 140f2acd0

void __cdecl _dynamic_initializer_for__UObjectexecAutoRtfmStopTransactBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x71];
  if (GNatives.Elements[0x71] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x71;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execAutoRtfmStopTransact,p_Var1);
    }
  }
  GNatives.Elements[0x71] = UObject::execAutoRtfmStopTransact;
  UObjectexecAutoRtfmStopTransactBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecAutoRtfmStopTransactRegistar'' @ 140f2ad40

void __cdecl _dynamic_initializer_for__UObjectexecAutoRtfmStopTransactRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction
            (pUVar1,"execAutoRtfmStopTransact",UObject::execAutoRtfmStopTransact);
  return;
}

// `dynamic_initializer_for_'UObjectexecAutoRtfmTransactBytecodeTemp'' @ 140f2ad70

void __cdecl _dynamic_initializer_for__UObjectexecAutoRtfmTransactBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x70];
  if (GNatives.Elements[0x70] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x70;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execAutoRtfmTransact,p_Var1);
    }
  }
  GNatives.Elements[0x70] = UObject::execAutoRtfmTransact;
  UObjectexecAutoRtfmTransactBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecAutoRtfmTransactRegistar'' @ 140f2ade0

void __cdecl _dynamic_initializer_for__UObjectexecAutoRtfmTransactRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction
            (pUVar1,"execAutoRtfmTransact",UObject::execAutoRtfmTransact);
  return;
}

// `dynamic_initializer_for_'UObjectexecBindDelegateBytecodeTemp'' @ 140f2ae10

void __cdecl _dynamic_initializer_for__UObjectexecBindDelegateBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x61];
  if (GNatives.Elements[0x61] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x61;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execBindDelegate,p_Var1);
    }
  }
  GNatives.Elements[0x61] = UObject::execBindDelegate;
  UObjectexecBindDelegateBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecBindDelegateRegistar'' @ 140f2ae80

void __cdecl _dynamic_initializer_for__UObjectexecBindDelegateRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execBindDelegate",UObject::execBindDelegate);
  return;
}

// `dynamic_initializer_for_'UObjectexecBitFieldConstBytecodeTemp'' @ 140f2aeb0

void __cdecl _dynamic_initializer_for__UObjectexecBitFieldConstBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x11];
  if (GNatives.Elements[0x11] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x11;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execBitFieldConst,p_Var1);
    }
  }
  GNatives.Elements[0x11] = UObject::execBitFieldConst;
  UObjectexecBitFieldConstBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecBitFieldConstRegistar'' @ 140f2af20

void __cdecl _dynamic_initializer_for__UObjectexecBitFieldConstRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execBitFieldConst",UObject::execBitFieldConst);
  return;
}

// `dynamic_initializer_for_'UObjectexecBreakpointBytecodeTemp'' @ 140f2af50

void __cdecl _dynamic_initializer_for__UObjectexecBreakpointBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x50];
  if (GNatives.Elements[0x50] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x50;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execBreakpoint,p_Var1);
    }
  }
  GNatives.Elements[0x50] = UObject::execBreakpoint;
  UObjectexecBreakpointBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecBreakpointRegistar'' @ 140f2afc0

void __cdecl _dynamic_initializer_for__UObjectexecBreakpointRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execBreakpoint",UObject::execBreakpoint);
  return;
}

// `dynamic_initializer_for_'UObjectexecByteConstBytecodeTemp'' @ 140f2aff0

void __cdecl _dynamic_initializer_for__UObjectexecByteConstBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x24];
  if (GNatives.Elements[0x24] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x24;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execByteConst,p_Var1);
    }
  }
  GNatives.Elements[0x24] = UObject::execByteConst;
  UObjectexecByteConstBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecByteConstRegistar'' @ 140f2b060

void __cdecl _dynamic_initializer_for__UObjectexecByteConstRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execByteConst",UObject::execByteConst);
  return;
}

// `dynamic_initializer_for_'UObjectexecCallMathFunctionBytecodeTemp'' @ 140f2b090

void __cdecl _dynamic_initializer_for__UObjectexecCallMathFunctionBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x68];
  if (GNatives.Elements[0x68] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x68;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execCallMathFunction,p_Var1);
    }
  }
  GNatives.Elements[0x68] = UObject::execCallMathFunction;
  UObjectexecCallMathFunctionBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecCallMathFunctionRegistar'' @ 140f2b100

void __cdecl _dynamic_initializer_for__UObjectexecCallMathFunctionRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction
            (pUVar1,"execCallMathFunction",UObject::execCallMathFunction);
  return;
}

// `dynamic_initializer_for_'UObjectexecCallMulticastDelegateBytecodeTemp'' @ 140f2b130

void __cdecl _dynamic_initializer_for__UObjectexecCallMulticastDelegateBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[99];
  if (GNatives.Elements[99] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 99;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execCallMulticastDelegate,p_Var1);
    }
  }
  GNatives.Elements[99] = UObject::execCallMulticastDelegate;
  UObjectexecCallMulticastDelegateBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecCallMulticastDelegateRegistar'' @ 140f2b1a0

void __cdecl _dynamic_initializer_for__UObjectexecCallMulticastDelegateRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction
            (pUVar1,"execCallMulticastDelegate",UObject::execCallMulticastDelegate);
  return;
}

// `dynamic_initializer_for_'UObjectexecCastBytecodeTemp'' @ 140f2b1d0

void __cdecl _dynamic_initializer_for__UObjectexecCastBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x38];
  if (GNatives.Elements[0x38] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x38;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execCast,p_Var1);
    }
  }
  GNatives.Elements[0x38] = UObject::execCast;
  UObjectexecCastBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecCastRegistar'' @ 140f2b240

void __cdecl _dynamic_initializer_for__UObjectexecCastRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execCast",UObject::execCast);
  return;
}

// `dynamic_initializer_for_'UObjectexecClassContextBytecodeTemp'' @ 140f2b270

void __cdecl _dynamic_initializer_for__UObjectexecClassContextBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x12];
  if (GNatives.Elements[0x12] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x12;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execClassContext,p_Var1);
    }
  }
  GNatives.Elements[0x12] = UObject::execClassContext;
  UObjectexecClassContextBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecClassContextRegistar'' @ 140f2b2e0

void __cdecl _dynamic_initializer_for__UObjectexecClassContextRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execClassContext",UObject::execClassContext);
  return;
}

// `dynamic_initializer_for_'UObjectexecClassSparseDataVariableBytecodeTemp'' @ 140f2b310

void __cdecl _dynamic_initializer_for__UObjectexecClassSparseDataVariableBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x6c];
  if (GNatives.Elements[0x6c] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x6c;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execClassSparseDataVariable,p_Var1);
    }
  }
  GNatives.Elements[0x6c] = UObject::execClassSparseDataVariable;
  UObjectexecClassSparseDataVariableBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecClassSparseDataVariableRegistar'' @ 140f2b380

void __cdecl _dynamic_initializer_for__UObjectexecClassSparseDataVariableRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction
            (pUVar1,"execClassSparseDataVariable",UObject::execClassSparseDataVariable);
  return;
}

// `dynamic_initializer_for_'UObjectexecClearMulticastDelegateBytecodeTemp'' @ 140f2b3b0

void __cdecl _dynamic_initializer_for__UObjectexecClearMulticastDelegateBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x5d];
  if (GNatives.Elements[0x5d] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x5d;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execClearMulticastDelegate,p_Var1);
    }
  }
  GNatives.Elements[0x5d] = UObject::execClearMulticastDelegate;
  UObjectexecClearMulticastDelegateBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecClearMulticastDelegateRegistar'' @ 140f2b420

void __cdecl _dynamic_initializer_for__UObjectexecClearMulticastDelegateRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction
            (pUVar1,"execClearMulticastDelegate",UObject::execClearMulticastDelegate);
  return;
}

// `dynamic_initializer_for_'UObjectexecComputedJumpBytecodeTemp'' @ 140f2b450

void __cdecl _dynamic_initializer_for__UObjectexecComputedJumpBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x4e];
  if (GNatives.Elements[0x4e] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x4e;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execComputedJump,p_Var1);
    }
  }
  GNatives.Elements[0x4e] = UObject::execComputedJump;
  UObjectexecComputedJumpBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecComputedJumpRegistar'' @ 140f2b4c0

void __cdecl _dynamic_initializer_for__UObjectexecComputedJumpRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execComputedJump",UObject::execComputedJump);
  return;
}

// `dynamic_initializer_for_'UObjectexecContextBytecodeTemp'' @ 140f2b4f0

void __cdecl _dynamic_initializer_for__UObjectexecContextBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x19];
  if (GNatives.Elements[0x19] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x19;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execContext,p_Var1);
    }
  }
  GNatives.Elements[0x19] = UObject::execContext;
  UObjectexecContextBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecContextRegistar'' @ 140f2b560

void __cdecl _dynamic_initializer_for__UObjectexecContextRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execContext",UObject::execContext);
  return;
}

// `dynamic_initializer_for_'UObjectexecContext_FailSilentBytecodeTemp'' @ 140f2b590

void __cdecl _dynamic_initializer_for__UObjectexecContext_FailSilentBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x1a];
  if (GNatives.Elements[0x1a] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x1a;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execContext_FailSilent,p_Var1);
    }
  }
  GNatives.Elements[0x1a] = UObject::execContext_FailSilent;
  UObjectexecContext_FailSilentBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecContext_FailSilentRegistar'' @ 140f2b600

void __cdecl _dynamic_initializer_for__UObjectexecContext_FailSilentRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction
            (pUVar1,"execContext_FailSilent",UObject::execContext_FailSilent);
  return;
}

// `dynamic_initializer_for_'UObjectexecDefaultVariableBytecodeTemp'' @ 140f2b630

void __cdecl _dynamic_initializer_for__UObjectexecDefaultVariableBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[2];
  if (GNatives.Elements[2] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 2;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execDefaultVariable,p_Var1);
    }
  }
  GNatives.Elements[2] = UObject::execDefaultVariable;
  UObjectexecDefaultVariableBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecDefaultVariableRegistar'' @ 140f2b6a0

void __cdecl _dynamic_initializer_for__UObjectexecDefaultVariableRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction
            (pUVar1,"execDefaultVariable",UObject::execDefaultVariable);
  return;
}

// `dynamic_initializer_for_'UObjectexecDoubleConstBytecodeTemp'' @ 140f2b6d0

void __cdecl _dynamic_initializer_for__UObjectexecDoubleConstBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x37];
  if (GNatives.Elements[0x37] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x37;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execDoubleConst,p_Var1);
    }
  }
  GNatives.Elements[0x37] = UObject::execDoubleConst;
  UObjectexecDoubleConstBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecDoubleConstRegistar'' @ 140f2b740

void __cdecl _dynamic_initializer_for__UObjectexecDoubleConstRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execDoubleConst",UObject::execDoubleConst);
  return;
}

// `dynamic_initializer_for_'UObjectexecDoubleToFloatCastCastTemp'' @ 140f2b770

void __cdecl _dynamic_initializer_for__UObjectexecDoubleToFloatCastCastTemp__(void)

{
  GCasts.Elements[3] = UObject::execDoubleToFloatCast;
  return;
}

// `dynamic_initializer_for_'UObjectexecDoubleToFloatCastRegistar'' @ 140f2b790

void __cdecl _dynamic_initializer_for__UObjectexecDoubleToFloatCastRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction
            (pUVar1,"execDoubleToFloatCast",UObject::execDoubleToFloatCast);
  return;
}

// `dynamic_initializer_for_'UObjectexecDynamicCastBytecodeTemp'' @ 140f2b7c0

void __cdecl _dynamic_initializer_for__UObjectexecDynamicCastBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x2e];
  if (GNatives.Elements[0x2e] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x2e;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execDynamicCast,p_Var1);
    }
  }
  GNatives.Elements[0x2e] = UObject::execDynamicCast;
  UObjectexecDynamicCastBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecDynamicCastRegistar'' @ 140f2b830

void __cdecl _dynamic_initializer_for__UObjectexecDynamicCastRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execDynamicCast",UObject::execDynamicCast);
  return;
}

// `dynamic_initializer_for_'UObjectexecEndFunctionParmsBytecodeTemp'' @ 140f2b860

void __cdecl _dynamic_initializer_for__UObjectexecEndFunctionParmsBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x16];
  if (GNatives.Elements[0x16] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x16;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execEndFunctionParms,p_Var1);
    }
  }
  GNatives.Elements[0x16] = UObject::execEndFunctionParms;
  UObjectexecEndFunctionParmsBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecEndFunctionParmsRegistar'' @ 140f2b8d0

void __cdecl _dynamic_initializer_for__UObjectexecEndFunctionParmsRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction
            (pUVar1,"execEndFunctionParms",UObject::execEndFunctionParms);
  return;
}

// `dynamic_initializer_for_'UObjectexecEndOfScriptBytecodeTemp'' @ 140f2b900

void __cdecl _dynamic_initializer_for__UObjectexecEndOfScriptBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x53];
  if (GNatives.Elements[0x53] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x53;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execEndOfScript,p_Var1);
    }
  }
  GNatives.Elements[0x53] = UObject::execEndOfScript;
  UObjectexecEndOfScriptBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecEndOfScriptRegistar'' @ 140f2b970

void __cdecl _dynamic_initializer_for__UObjectexecEndOfScriptRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execEndOfScript",UObject::execEndOfScript);
  return;
}

// `dynamic_initializer_for_'UObjectexecFalseBytecodeTemp'' @ 140f2b9a0

void __cdecl _dynamic_initializer_for__UObjectexecFalseBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x28];
  if (GNatives.Elements[0x28] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x28;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execFalse,p_Var1);
    }
  }
  GNatives.Elements[0x28] = UObject::execFalse;
  UObjectexecFalseBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecFalseRegistar'' @ 140f2ba10

void __cdecl _dynamic_initializer_for__UObjectexecFalseRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execFalse",UObject::execFalse);
  return;
}

// `dynamic_initializer_for_'UObjectexecFieldPathConstBytecodeTemp'' @ 140f2ba40

void __cdecl _dynamic_initializer_for__UObjectexecFieldPathConstBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x6d];
  if (GNatives.Elements[0x6d] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x6d;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execFieldPathConst,p_Var1);
    }
  }
  GNatives.Elements[0x6d] = UObject::execFieldPathConst;
  UObjectexecFieldPathConstBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecFieldPathConstRegistar'' @ 140f2bab0

void __cdecl _dynamic_initializer_for__UObjectexecFieldPathConstRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction
            (pUVar1,"execFieldPathConst",UObject::execFieldPathConst);
  return;
}

// `dynamic_initializer_for_'UObjectexecFinalFunctionBytecodeTemp'' @ 140f2bae0

void __cdecl _dynamic_initializer_for__UObjectexecFinalFunctionBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x1c];
  if (GNatives.Elements[0x1c] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x1c;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execFinalFunction,p_Var1);
    }
  }
  GNatives.Elements[0x1c] = UObject::execFinalFunction;
  UObjectexecFinalFunctionBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecFinalFunctionRegistar'' @ 140f2bb50

void __cdecl _dynamic_initializer_for__UObjectexecFinalFunctionRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execFinalFunction",UObject::execFinalFunction);
  return;
}

// `dynamic_initializer_for_'UObjectexecFloatConstBytecodeTemp'' @ 140f2bb80

void __cdecl _dynamic_initializer_for__UObjectexecFloatConstBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x1e];
  if (GNatives.Elements[0x1e] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x1e;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execFloatConst,p_Var1);
    }
  }
  GNatives.Elements[0x1e] = UObject::execFloatConst;
  UObjectexecFloatConstBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecFloatConstRegistar'' @ 140f2bbf0

void __cdecl _dynamic_initializer_for__UObjectexecFloatConstRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execFloatConst",UObject::execFloatConst);
  return;
}

// `dynamic_initializer_for_'UObjectexecFloatToDoubleCastCastTemp'' @ 140f2bc20

void __cdecl _dynamic_initializer_for__UObjectexecFloatToDoubleCastCastTemp__(void)

{
  GCasts.Elements[4] = UObject::execFloatToDoubleCast;
  return;
}

// `dynamic_initializer_for_'UObjectexecFloatToDoubleCastRegistar'' @ 140f2bc40

void __cdecl _dynamic_initializer_for__UObjectexecFloatToDoubleCastRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction
            (pUVar1,"execFloatToDoubleCast",UObject::execFloatToDoubleCast);
  return;
}

// `dynamic_initializer_for_'UObjectexecInstanceDelegateBytecodeTemp'' @ 140f2bc70

void __cdecl _dynamic_initializer_for__UObjectexecInstanceDelegateBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x4b];
  if (GNatives.Elements[0x4b] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x4b;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execInstanceDelegate,p_Var1);
    }
  }
  GNatives.Elements[0x4b] = UObject::execInstanceDelegate;
  UObjectexecInstanceDelegateBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecInstanceDelegateRegistar'' @ 140f2bce0

void __cdecl _dynamic_initializer_for__UObjectexecInstanceDelegateRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction
            (pUVar1,"execInstanceDelegate",UObject::execInstanceDelegate);
  return;
}

// `dynamic_initializer_for_'UObjectexecInstanceVariableBytecodeTemp'' @ 140f2bd10

void __cdecl _dynamic_initializer_for__UObjectexecInstanceVariableBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[1];
  if (GNatives.Elements[1] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 1;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execInstanceVariable,p_Var1);
    }
  }
  GNatives.Elements[1] = UObject::execInstanceVariable;
  UObjectexecInstanceVariableBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecInstanceVariableRegistar'' @ 140f2bd80

void __cdecl _dynamic_initializer_for__UObjectexecInstanceVariableRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction
            (pUVar1,"execInstanceVariable",UObject::execInstanceVariable);
  return;
}

// `dynamic_initializer_for_'UObjectexecInstrumentationBytecodeTemp'' @ 140f2bdb0

void __cdecl _dynamic_initializer_for__UObjectexecInstrumentationBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x6a];
  if (GNatives.Elements[0x6a] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x6a;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execInstrumentation,p_Var1);
    }
  }
  GNatives.Elements[0x6a] = UObject::execInstrumentation;
  UObjectexecInstrumentationBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecInstrumentationRegistar'' @ 140f2be20

void __cdecl _dynamic_initializer_for__UObjectexecInstrumentationRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction
            (pUVar1,"execInstrumentation",UObject::execInstrumentation);
  return;
}

// `dynamic_initializer_for_'UObjectexecInt64ConstBytecodeTemp'' @ 140f2be50

void __cdecl _dynamic_initializer_for__UObjectexecInt64ConstBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x35];
  if (GNatives.Elements[0x35] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x35;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execInt64Const,p_Var1);
    }
  }
  GNatives.Elements[0x35] = UObject::execInt64Const;
  UObjectexecInt64ConstBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecInt64ConstRegistar'' @ 140f2bec0

void __cdecl _dynamic_initializer_for__UObjectexecInt64ConstRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execInt64Const",UObject::execInt64Const);
  return;
}

// `dynamic_initializer_for_'UObjectexecIntConstByteBytecodeTemp'' @ 140f2bef0

void __cdecl _dynamic_initializer_for__UObjectexecIntConstByteBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x2c];
  if (GNatives.Elements[0x2c] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x2c;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execIntConstByte,p_Var1);
    }
  }
  GNatives.Elements[0x2c] = UObject::execIntConstByte;
  UObjectexecIntConstByteBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecIntConstByteRegistar'' @ 140f2bf60

void __cdecl _dynamic_initializer_for__UObjectexecIntConstByteRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execIntConstByte",UObject::execIntConstByte);
  return;
}

// `dynamic_initializer_for_'UObjectexecIntConstBytecodeTemp'' @ 140f2bf90

void __cdecl _dynamic_initializer_for__UObjectexecIntConstBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x1d];
  if (GNatives.Elements[0x1d] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x1d;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execIntConst,p_Var1);
    }
  }
  GNatives.Elements[0x1d] = UObject::execIntConst;
  UObjectexecIntConstBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecIntConstRegistar'' @ 140f2c000

void __cdecl _dynamic_initializer_for__UObjectexecIntConstRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execIntConst",UObject::execIntConst);
  return;
}

// `dynamic_initializer_for_'UObjectexecIntOneBytecodeTemp'' @ 140f2c030

void __cdecl _dynamic_initializer_for__UObjectexecIntOneBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x26];
  if (GNatives.Elements[0x26] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x26;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execIntOne,p_Var1);
    }
  }
  GNatives.Elements[0x26] = UObject::execIntOne;
  UObjectexecIntOneBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecIntOneRegistar'' @ 140f2c0a0

void __cdecl _dynamic_initializer_for__UObjectexecIntOneRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execIntOne",UObject::execIntOne);
  return;
}

// `dynamic_initializer_for_'UObjectexecIntZeroBytecodeTemp'' @ 140f2c0d0

void __cdecl _dynamic_initializer_for__UObjectexecIntZeroBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x25];
  if (GNatives.Elements[0x25] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x25;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execIntZero,p_Var1);
    }
  }
  GNatives.Elements[0x25] = UObject::execIntZero;
  UObjectexecIntZeroBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecIntZeroRegistar'' @ 140f2c140

void __cdecl _dynamic_initializer_for__UObjectexecIntZeroRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execIntZero",UObject::execIntZero);
  return;
}

// `dynamic_initializer_for_'UObjectexecInterfaceCastBytecodeTemp'' @ 140f2c170

void __cdecl _dynamic_initializer_for__UObjectexecInterfaceCastBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x52];
  if (GNatives.Elements[0x52] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x52;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execInterfaceCast,p_Var1);
    }
  }
  GNatives.Elements[0x52] = UObject::execInterfaceCast;
  UObjectexecInterfaceCastBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecInterfaceCastRegistar'' @ 140f2c1e0

void __cdecl _dynamic_initializer_for__UObjectexecInterfaceCastRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execInterfaceCast",UObject::execInterfaceCast);
  return;
}

// `dynamic_initializer_for_'UObjectexecInterfaceContextBytecodeTemp'' @ 140f2c210

void __cdecl _dynamic_initializer_for__UObjectexecInterfaceContextBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x51];
  if (GNatives.Elements[0x51] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x51;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execInterfaceContext,p_Var1);
    }
  }
  GNatives.Elements[0x51] = UObject::execInterfaceContext;
  UObjectexecInterfaceContextBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecInterfaceContextRegistar'' @ 140f2c280

void __cdecl _dynamic_initializer_for__UObjectexecInterfaceContextRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction
            (pUVar1,"execInterfaceContext",UObject::execInterfaceContext);
  return;
}

// `dynamic_initializer_for_'UObjectexecInterfaceToBoolCastTemp'' @ 140f2c2b0

void __cdecl _dynamic_initializer_for__UObjectexecInterfaceToBoolCastTemp__(void)

{
  GCasts.Elements[2] = UObject::execInterfaceToBool;
  return;
}

// `dynamic_initializer_for_'UObjectexecInterfaceToBoolRegistar'' @ 140f2c2d0

void __cdecl _dynamic_initializer_for__UObjectexecInterfaceToBoolRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction
            (pUVar1,"execInterfaceToBool",UObject::execInterfaceToBool);
  return;
}

// `dynamic_initializer_for_'UObjectexecInterfaceToInterfaceBytecodeTemp'' @ 140f2c300

void __cdecl _dynamic_initializer_for__UObjectexecInterfaceToInterfaceBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x54];
  if (GNatives.Elements[0x54] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x54;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execInterfaceToInterface,p_Var1);
    }
  }
  GNatives.Elements[0x54] = UObject::execInterfaceToInterface;
  UObjectexecInterfaceToInterfaceBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecInterfaceToInterfaceRegistar'' @ 140f2c370

void __cdecl _dynamic_initializer_for__UObjectexecInterfaceToInterfaceRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction
            (pUVar1,"execInterfaceToInterface",UObject::execInterfaceToInterface);
  return;
}

// `dynamic_initializer_for_'UObjectexecInterfaceToObjectBytecodeTemp'' @ 140f2c3a0

void __cdecl _dynamic_initializer_for__UObjectexecInterfaceToObjectBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x55];
  if (GNatives.Elements[0x55] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x55;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execInterfaceToObject,p_Var1);
    }
  }
  GNatives.Elements[0x55] = UObject::execInterfaceToObject;
  UObjectexecInterfaceToObjectBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecInterfaceToObjectRegistar'' @ 140f2c410

void __cdecl _dynamic_initializer_for__UObjectexecInterfaceToObjectRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction
            (pUVar1,"execInterfaceToObject",UObject::execInterfaceToObject);
  return;
}

// `dynamic_initializer_for_'UObjectexecJumpBytecodeTemp'' @ 140f2c440

void __cdecl _dynamic_initializer_for__UObjectexecJumpBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[6];
  if (GNatives.Elements[6] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 6;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execJump,p_Var1);
    }
  }
  GNatives.Elements[6] = UObject::execJump;
  UObjectexecJumpBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecJumpIfNotBytecodeTemp'' @ 140f2c4b0

void __cdecl _dynamic_initializer_for__UObjectexecJumpIfNotBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[7];
  if (GNatives.Elements[7] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 7;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execJumpIfNot,p_Var1);
    }
  }
  GNatives.Elements[7] = UObject::execJumpIfNot;
  UObjectexecJumpIfNotBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecJumpIfNotRegistar'' @ 140f2c520

void __cdecl _dynamic_initializer_for__UObjectexecJumpIfNotRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execJumpIfNot",UObject::execJumpIfNot);
  return;
}

// `dynamic_initializer_for_'UObjectexecJumpRegistar'' @ 140f2c550

void __cdecl _dynamic_initializer_for__UObjectexecJumpRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execJump",UObject::execJump);
  return;
}

// `dynamic_initializer_for_'UObjectexecLetBoolBytecodeTemp'' @ 140f2c580

void __cdecl _dynamic_initializer_for__UObjectexecLetBoolBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x14];
  if (GNatives.Elements[0x14] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x14;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execLetBool,p_Var1);
    }
  }
  GNatives.Elements[0x14] = UObject::execLetBool;
  UObjectexecLetBoolBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecLetBoolRegistar'' @ 140f2c5f0

void __cdecl _dynamic_initializer_for__UObjectexecLetBoolRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execLetBool",UObject::execLetBool);
  return;
}

// `dynamic_initializer_for_'UObjectexecLetBytecodeTemp'' @ 140f2c620

void __cdecl _dynamic_initializer_for__UObjectexecLetBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0xf];
  if (GNatives.Elements[0xf] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0xf;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execLet,p_Var1);
    }
  }
  GNatives.Elements[0xf] = UObject::execLet;
  UObjectexecLetBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecLetDelegateBytecodeTemp'' @ 140f2c690

void __cdecl _dynamic_initializer_for__UObjectexecLetDelegateBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x44];
  if (GNatives.Elements[0x44] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x44;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execLetDelegate,p_Var1);
    }
  }
  GNatives.Elements[0x44] = UObject::execLetDelegate;
  UObjectexecLetDelegateBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecLetDelegateRegistar'' @ 140f2c700

void __cdecl _dynamic_initializer_for__UObjectexecLetDelegateRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execLetDelegate",UObject::execLetDelegate);
  return;
}

// `dynamic_initializer_for_'UObjectexecLetMulticastDelegateBytecodeTemp'' @ 140f2c730

void __cdecl _dynamic_initializer_for__UObjectexecLetMulticastDelegateBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x43];
  if (GNatives.Elements[0x43] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x43;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execLetMulticastDelegate,p_Var1);
    }
  }
  GNatives.Elements[0x43] = UObject::execLetMulticastDelegate;
  UObjectexecLetMulticastDelegateBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecLetMulticastDelegateRegistar'' @ 140f2c7a0

void __cdecl _dynamic_initializer_for__UObjectexecLetMulticastDelegateRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction
            (pUVar1,"execLetMulticastDelegate",UObject::execLetMulticastDelegate);
  return;
}

// `dynamic_initializer_for_'UObjectexecLetObjBytecodeTemp'' @ 140f2c7d0

void __cdecl _dynamic_initializer_for__UObjectexecLetObjBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x5f];
  if (GNatives.Elements[0x5f] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x5f;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execLetObj,p_Var1);
    }
  }
  GNatives.Elements[0x5f] = UObject::execLetObj;
  UObjectexecLetObjBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecLetObjRegistar'' @ 140f2c840

void __cdecl _dynamic_initializer_for__UObjectexecLetObjRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execLetObj",UObject::execLetObj);
  return;
}

// `dynamic_initializer_for_'UObjectexecLetRegistar'' @ 140f2c870

void __cdecl _dynamic_initializer_for__UObjectexecLetRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execLet",UObject::execLet);
  return;
}

// `dynamic_initializer_for_'UObjectexecLetValueOnPersistentFrameBytecodeTemp'' @ 140f2c8a0

void __cdecl _dynamic_initializer_for__UObjectexecLetValueOnPersistentFrameBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[100];
  if (GNatives.Elements[100] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 100;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execLetValueOnPersistentFrame,p_Var1);
    }
  }
  GNatives.Elements[100] = UObject::execLetValueOnPersistentFrame;
  UObjectexecLetValueOnPersistentFrameBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecLetValueOnPersistentFrameRegistar'' @ 140f2c910

void __cdecl _dynamic_initializer_for__UObjectexecLetValueOnPersistentFrameRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction
            (pUVar1,"execLetValueOnPersistentFrame",UObject::execLetValueOnPersistentFrame);
  return;
}

// `dynamic_initializer_for_'UObjectexecLetWeakObjPtrBytecodeTemp'' @ 140f2c940

void __cdecl _dynamic_initializer_for__UObjectexecLetWeakObjPtrBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x60];
  if (GNatives.Elements[0x60] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x60;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execLetWeakObjPtr,p_Var1);
    }
  }
  GNatives.Elements[0x60] = UObject::execLetWeakObjPtr;
  UObjectexecLetWeakObjPtrBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecLetWeakObjPtrRegistar'' @ 140f2c9b0

void __cdecl _dynamic_initializer_for__UObjectexecLetWeakObjPtrRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execLetWeakObjPtr",UObject::execLetWeakObjPtr);
  return;
}

// `dynamic_initializer_for_'UObjectexecLocalFinalFunctionBytecodeTemp'' @ 140f2c9e0

void __cdecl _dynamic_initializer_for__UObjectexecLocalFinalFunctionBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x46];
  if (GNatives.Elements[0x46] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x46;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execLocalFinalFunction,p_Var1);
    }
  }
  GNatives.Elements[0x46] = UObject::execLocalFinalFunction;
  UObjectexecLocalFinalFunctionBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecLocalFinalFunctionRegistar'' @ 140f2ca50

void __cdecl _dynamic_initializer_for__UObjectexecLocalFinalFunctionRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction
            (pUVar1,"execLocalFinalFunction",UObject::execLocalFinalFunction);
  return;
}

// `dynamic_initializer_for_'UObjectexecLocalOutVariableBytecodeTemp'' @ 140f2ca80

void __cdecl _dynamic_initializer_for__UObjectexecLocalOutVariableBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x48];
  if (GNatives.Elements[0x48] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x48;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execLocalOutVariable,p_Var1);
    }
  }
  GNatives.Elements[0x48] = UObject::execLocalOutVariable;
  UObjectexecLocalOutVariableBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecLocalOutVariableRegistar'' @ 140f2caf0

void __cdecl _dynamic_initializer_for__UObjectexecLocalOutVariableRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction
            (pUVar1,"execLocalOutVariable",UObject::execLocalOutVariable);
  return;
}

// `dynamic_initializer_for_'UObjectexecLocalVariableBytecodeTemp'' @ 140f2cb20

void __cdecl _dynamic_initializer_for__UObjectexecLocalVariableBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0];
  if (GNatives.Elements[0] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execLocalVariable,p_Var1);
    }
  }
  GNatives.Elements[0] = UObject::execLocalVariable;
  UObjectexecLocalVariableBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecLocalVariableRegistar'' @ 140f2cb90

void __cdecl _dynamic_initializer_for__UObjectexecLocalVariableRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execLocalVariable",UObject::execLocalVariable);
  return;
}

// `dynamic_initializer_for_'UObjectexecLocalVirtualFunctionBytecodeTemp'' @ 140f2cbc0

void __cdecl _dynamic_initializer_for__UObjectexecLocalVirtualFunctionBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x45];
  if (GNatives.Elements[0x45] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x45;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execLocalVirtualFunction,p_Var1);
    }
  }
  GNatives.Elements[0x45] = UObject::execLocalVirtualFunction;
  UObjectexecLocalVirtualFunctionBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecLocalVirtualFunctionRegistar'' @ 140f2cc30

void __cdecl _dynamic_initializer_for__UObjectexecLocalVirtualFunctionRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction
            (pUVar1,"execLocalVirtualFunction",UObject::execLocalVirtualFunction);
  return;
}

// `dynamic_initializer_for_'UObjectexecMapConstBytecodeTemp'' @ 140f2cc60

void __cdecl _dynamic_initializer_for__UObjectexecMapConstBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x3f];
  if (GNatives.Elements[0x3f] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x3f;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execMapConst,p_Var1);
    }
  }
  GNatives.Elements[0x3f] = UObject::execMapConst;
  UObjectexecMapConstBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecMapConstRegistar'' @ 140f2ccd0

void __cdecl _dynamic_initializer_for__UObjectexecMapConstRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execMapConst",UObject::execMapConst);
  return;
}

// `dynamic_initializer_for_'UObjectexecMetaCastBytecodeTemp'' @ 140f2cd00

void __cdecl _dynamic_initializer_for__UObjectexecMetaCastBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x13];
  if (GNatives.Elements[0x13] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x13;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execMetaCast,p_Var1);
    }
  }
  GNatives.Elements[0x13] = UObject::execMetaCast;
  UObjectexecMetaCastBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecMetaCastRegistar'' @ 140f2cd70

void __cdecl _dynamic_initializer_for__UObjectexecMetaCastRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execMetaCast",UObject::execMetaCast);
  return;
}

// `dynamic_initializer_for_'UObjectexecNameConstBytecodeTemp'' @ 140f2cda0

void __cdecl _dynamic_initializer_for__UObjectexecNameConstBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x21];
  if (GNatives.Elements[0x21] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x21;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execNameConst,p_Var1);
    }
  }
  GNatives.Elements[0x21] = UObject::execNameConst;
  UObjectexecNameConstBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecNameConstRegistar'' @ 140f2ce10

void __cdecl _dynamic_initializer_for__UObjectexecNameConstRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execNameConst",UObject::execNameConst);
  return;
}

// `dynamic_initializer_for_'UObjectexecNoObjectBytecodeTemp'' @ 140f2ce40

void __cdecl _dynamic_initializer_for__UObjectexecNoObjectBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x2a];
  if (GNatives.Elements[0x2a] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x2a;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execNoObject,p_Var1);
    }
  }
  GNatives.Elements[0x2a] = UObject::execNoObject;
  UObjectexecNoObjectBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecNoObjectRegistar'' @ 140f2ceb0

void __cdecl _dynamic_initializer_for__UObjectexecNoObjectRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execNoObject",UObject::execNoObject);
  return;
}

// `dynamic_initializer_for_'UObjectexecNothingBytecodeTemp'' @ 140f2cee0

void __cdecl _dynamic_initializer_for__UObjectexecNothingBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0xb];
  if (GNatives.Elements[0xb] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0xb;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execNothing,p_Var1);
    }
  }
  GNatives.Elements[0xb] = UObject::execNothing;
  UObjectexecNothingBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecNothingInt32BytecodeTemp'' @ 140f2cf50

void __cdecl _dynamic_initializer_for__UObjectexecNothingInt32BytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0xc];
  if (GNatives.Elements[0xc] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0xc;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execNothingInt32,p_Var1);
    }
  }
  GNatives.Elements[0xc] = UObject::execNothingInt32;
  UObjectexecNothingInt32BytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecNothingInt32Registar'' @ 140f2cfc0

void __cdecl _dynamic_initializer_for__UObjectexecNothingInt32Registar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execNothingInt32",UObject::execNothingInt32);
  return;
}

// `dynamic_initializer_for_'UObjectexecNothingOp4aBytecodeTemp'' @ 140f2cff0

void __cdecl _dynamic_initializer_for__UObjectexecNothingOp4aBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x4a];
  if (GNatives.Elements[0x4a] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x4a;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execNothingOp4a,p_Var1);
    }
  }
  GNatives.Elements[0x4a] = UObject::execNothingOp4a;
  UObjectexecNothingOp4aBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecNothingOp4aRegistar'' @ 140f2d060

void __cdecl _dynamic_initializer_for__UObjectexecNothingOp4aRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execNothingOp4a",UObject::execNothingOp4a);
  return;
}

// `dynamic_initializer_for_'UObjectexecNothingRegistar'' @ 140f2d090

void __cdecl _dynamic_initializer_for__UObjectexecNothingRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execNothing",UObject::execNothing);
  return;
}

// `dynamic_initializer_for_'UObjectexecNullInterfaceBytecodeTemp'' @ 140f2d0c0

void __cdecl _dynamic_initializer_for__UObjectexecNullInterfaceBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x2d];
  if (GNatives.Elements[0x2d] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x2d;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execNullInterface,p_Var1);
    }
  }
  GNatives.Elements[0x2d] = UObject::execNullInterface;
  UObjectexecNullInterfaceBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecNullInterfaceRegistar'' @ 140f2d130

void __cdecl _dynamic_initializer_for__UObjectexecNullInterfaceRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execNullInterface",UObject::execNullInterface);
  return;
}

// `dynamic_initializer_for_'UObjectexecObjectConstBytecodeTemp'' @ 140f2d160

void __cdecl _dynamic_initializer_for__UObjectexecObjectConstBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x20];
  if (GNatives.Elements[0x20] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x20;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execObjectConst,p_Var1);
    }
  }
  GNatives.Elements[0x20] = UObject::execObjectConst;
  UObjectexecObjectConstBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecObjectConstRegistar'' @ 140f2d1d0

void __cdecl _dynamic_initializer_for__UObjectexecObjectConstRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execObjectConst",UObject::execObjectConst);
  return;
}

// `dynamic_initializer_for_'UObjectexecObjectToBoolCastTemp'' @ 140f2d200

void __cdecl _dynamic_initializer_for__UObjectexecObjectToBoolCastTemp__(void)

{
  GCasts.Elements[1] = UObject::execObjectToBool;
  return;
}

// `dynamic_initializer_for_'UObjectexecObjectToBoolRegistar'' @ 140f2d220

void __cdecl _dynamic_initializer_for__UObjectexecObjectToBoolRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execObjectToBool",UObject::execObjectToBool);
  return;
}

// `dynamic_initializer_for_'UObjectexecObjectToInterfaceCastTemp'' @ 140f2d250

void __cdecl _dynamic_initializer_for__UObjectexecObjectToInterfaceCastTemp__(void)

{
  GCasts.Elements[0] = UObject::execObjectToInterface;
  return;
}

// `dynamic_initializer_for_'UObjectexecObjectToInterfaceRegistar'' @ 140f2d270

void __cdecl _dynamic_initializer_for__UObjectexecObjectToInterfaceRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction
            (pUVar1,"execObjectToInterface",UObject::execObjectToInterface);
  return;
}

// `dynamic_initializer_for_'UObjectexecPopExecutionFlowBytecodeTemp'' @ 140f2d2a0

void __cdecl _dynamic_initializer_for__UObjectexecPopExecutionFlowBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x4d];
  if (GNatives.Elements[0x4d] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x4d;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execPopExecutionFlow,p_Var1);
    }
  }
  GNatives.Elements[0x4d] = UObject::execPopExecutionFlow;
  UObjectexecPopExecutionFlowBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecPopExecutionFlowIfNotBytecodeTemp'' @ 140f2d310

void __cdecl _dynamic_initializer_for__UObjectexecPopExecutionFlowIfNotBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x4f];
  if (GNatives.Elements[0x4f] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x4f;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execPopExecutionFlowIfNot,p_Var1);
    }
  }
  GNatives.Elements[0x4f] = UObject::execPopExecutionFlowIfNot;
  UObjectexecPopExecutionFlowIfNotBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecPopExecutionFlowIfNotRegistar'' @ 140f2d380

void __cdecl _dynamic_initializer_for__UObjectexecPopExecutionFlowIfNotRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction
            (pUVar1,"execPopExecutionFlowIfNot",UObject::execPopExecutionFlowIfNot);
  return;
}

// `dynamic_initializer_for_'UObjectexecPopExecutionFlowRegistar'' @ 140f2d3b0

void __cdecl _dynamic_initializer_for__UObjectexecPopExecutionFlowRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction
            (pUVar1,"execPopExecutionFlow",UObject::execPopExecutionFlow);
  return;
}

// `dynamic_initializer_for_'UObjectexecPropertyConstBytecodeTemp'' @ 140f2d3e0

void __cdecl _dynamic_initializer_for__UObjectexecPropertyConstBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x33];
  if (GNatives.Elements[0x33] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x33;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execPropertyConst,p_Var1);
    }
  }
  GNatives.Elements[0x33] = UObject::execPropertyConst;
  UObjectexecPropertyConstBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecPropertyConstRegistar'' @ 140f2d450

void __cdecl _dynamic_initializer_for__UObjectexecPropertyConstRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execPropertyConst",UObject::execPropertyConst);
  return;
}

// `dynamic_initializer_for_'UObjectexecPushExecutionFlowBytecodeTemp'' @ 140f2d480

void __cdecl _dynamic_initializer_for__UObjectexecPushExecutionFlowBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x4c];
  if (GNatives.Elements[0x4c] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x4c;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execPushExecutionFlow,p_Var1);
    }
  }
  GNatives.Elements[0x4c] = UObject::execPushExecutionFlow;
  UObjectexecPushExecutionFlowBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecPushExecutionFlowRegistar'' @ 140f2d4f0

void __cdecl _dynamic_initializer_for__UObjectexecPushExecutionFlowRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction
            (pUVar1,"execPushExecutionFlow",UObject::execPushExecutionFlow);
  return;
}

// `dynamic_initializer_for_'UObjectexecRemoveMulticastDelegateBytecodeTemp'' @ 140f2d520

void __cdecl _dynamic_initializer_for__UObjectexecRemoveMulticastDelegateBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x62];
  if (GNatives.Elements[0x62] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x62;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execRemoveMulticastDelegate,p_Var1);
    }
  }
  GNatives.Elements[0x62] = UObject::execRemoveMulticastDelegate;
  UObjectexecRemoveMulticastDelegateBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecRemoveMulticastDelegateRegistar'' @ 140f2d590

void __cdecl _dynamic_initializer_for__UObjectexecRemoveMulticastDelegateRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction
            (pUVar1,"execRemoveMulticastDelegate",UObject::execRemoveMulticastDelegate);
  return;
}

// `dynamic_initializer_for_'UObjectexecRotationConstBytecodeTemp'' @ 140f2d5c0

void __cdecl _dynamic_initializer_for__UObjectexecRotationConstBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x22];
  if (GNatives.Elements[0x22] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x22;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execRotationConst,p_Var1);
    }
  }
  GNatives.Elements[0x22] = UObject::execRotationConst;
  UObjectexecRotationConstBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecRotationConstRegistar'' @ 140f2d630

void __cdecl _dynamic_initializer_for__UObjectexecRotationConstRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execRotationConst",UObject::execRotationConst);
  return;
}

// `dynamic_initializer_for_'UObjectexecSelfBytecodeTemp'' @ 140f2d660

void __cdecl _dynamic_initializer_for__UObjectexecSelfBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x17];
  if (GNatives.Elements[0x17] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x17;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execSelf,p_Var1);
    }
  }
  GNatives.Elements[0x17] = UObject::execSelf;
  UObjectexecSelfBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecSelfRegistar'' @ 140f2d6d0

void __cdecl _dynamic_initializer_for__UObjectexecSelfRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execSelf",UObject::execSelf);
  return;
}

// `dynamic_initializer_for_'UObjectexecSetArrayBytecodeTemp'' @ 140f2d700

void __cdecl _dynamic_initializer_for__UObjectexecSetArrayBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x31];
  if (GNatives.Elements[0x31] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x31;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execSetArray,p_Var1);
    }
  }
  GNatives.Elements[0x31] = UObject::execSetArray;
  UObjectexecSetArrayBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecSetArrayRegistar'' @ 140f2d770

void __cdecl _dynamic_initializer_for__UObjectexecSetArrayRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execSetArray",UObject::execSetArray);
  return;
}

// `dynamic_initializer_for_'UObjectexecSetConstBytecodeTemp'' @ 140f2d7a0

void __cdecl _dynamic_initializer_for__UObjectexecSetConstBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x3d];
  if (GNatives.Elements[0x3d] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x3d;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execSetConst,p_Var1);
    }
  }
  GNatives.Elements[0x3d] = UObject::execSetConst;
  UObjectexecSetConstBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecSetConstRegistar'' @ 140f2d810

void __cdecl _dynamic_initializer_for__UObjectexecSetConstRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execSetConst",UObject::execSetConst);
  return;
}

// `dynamic_initializer_for_'UObjectexecSetMapBytecodeTemp'' @ 140f2d840

void __cdecl _dynamic_initializer_for__UObjectexecSetMapBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x3b];
  if (GNatives.Elements[0x3b] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x3b;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execSetMap,p_Var1);
    }
  }
  GNatives.Elements[0x3b] = UObject::execSetMap;
  UObjectexecSetMapBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecSetMapRegistar'' @ 140f2d8b0

void __cdecl _dynamic_initializer_for__UObjectexecSetMapRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execSetMap",UObject::execSetMap);
  return;
}

// `dynamic_initializer_for_'UObjectexecSetSetBytecodeTemp'' @ 140f2d8e0

void __cdecl _dynamic_initializer_for__UObjectexecSetSetBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x39];
  if (GNatives.Elements[0x39] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x39;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execSetSet,p_Var1);
    }
  }
  GNatives.Elements[0x39] = UObject::execSetSet;
  UObjectexecSetSetBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecSetSetRegistar'' @ 140f2d950

void __cdecl _dynamic_initializer_for__UObjectexecSetSetRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execSetSet",UObject::execSetSet);
  return;
}

// `dynamic_initializer_for_'UObjectexecSkipOffsetConstBytecodeTemp'' @ 140f2d980

void __cdecl _dynamic_initializer_for__UObjectexecSkipOffsetConstBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x5b];
  if (GNatives.Elements[0x5b] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x5b;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execSkipOffsetConst,p_Var1);
    }
  }
  GNatives.Elements[0x5b] = UObject::execSkipOffsetConst;
  UObjectexecSkipOffsetConstBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecSkipOffsetConstRegistar'' @ 140f2d9f0

void __cdecl _dynamic_initializer_for__UObjectexecSkipOffsetConstRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction
            (pUVar1,"execSkipOffsetConst",UObject::execSkipOffsetConst);
  return;
}

// `dynamic_initializer_for_'UObjectexecSoftObjectConstBytecodeTemp'' @ 140f2da20

void __cdecl _dynamic_initializer_for__UObjectexecSoftObjectConstBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x67];
  if (GNatives.Elements[0x67] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x67;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execSoftObjectConst,p_Var1);
    }
  }
  GNatives.Elements[0x67] = UObject::execSoftObjectConst;
  UObjectexecSoftObjectConstBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecSoftObjectConstRegistar'' @ 140f2da90

void __cdecl _dynamic_initializer_for__UObjectexecSoftObjectConstRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction
            (pUVar1,"execSoftObjectConst",UObject::execSoftObjectConst);
  return;
}

// `dynamic_initializer_for_'UObjectexecStringConstBytecodeTemp'' @ 140f2dac0

void __cdecl _dynamic_initializer_for__UObjectexecStringConstBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x1f];
  if (GNatives.Elements[0x1f] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x1f;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execStringConst,p_Var1);
    }
  }
  GNatives.Elements[0x1f] = UObject::execStringConst;
  UObjectexecStringConstBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecStringConstRegistar'' @ 140f2db30

void __cdecl _dynamic_initializer_for__UObjectexecStringConstRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execStringConst",UObject::execStringConst);
  return;
}

// `dynamic_initializer_for_'UObjectexecStructConstBytecodeTemp'' @ 140f2db60

void __cdecl _dynamic_initializer_for__UObjectexecStructConstBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x2f];
  if (GNatives.Elements[0x2f] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x2f;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execStructConst,p_Var1);
    }
  }
  GNatives.Elements[0x2f] = UObject::execStructConst;
  UObjectexecStructConstBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecStructConstRegistar'' @ 140f2dbd0

void __cdecl _dynamic_initializer_for__UObjectexecStructConstRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execStructConst",UObject::execStructConst);
  return;
}

// `dynamic_initializer_for_'UObjectexecStructMemberContextBytecodeTemp'' @ 140f2dc00

void __cdecl _dynamic_initializer_for__UObjectexecStructMemberContextBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x42];
  if (GNatives.Elements[0x42] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x42;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execStructMemberContext,p_Var1);
    }
  }
  GNatives.Elements[0x42] = UObject::execStructMemberContext;
  UObjectexecStructMemberContextBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecStructMemberContextRegistar'' @ 140f2dc70

void __cdecl _dynamic_initializer_for__UObjectexecStructMemberContextRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction
            (pUVar1,"execStructMemberContext",UObject::execStructMemberContext);
  return;
}

// `dynamic_initializer_for_'UObjectexecSwitchValueBytecodeTemp'' @ 140f2dca0

void __cdecl _dynamic_initializer_for__UObjectexecSwitchValueBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x69];
  if (GNatives.Elements[0x69] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x69;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execSwitchValue,p_Var1);
    }
  }
  GNatives.Elements[0x69] = UObject::execSwitchValue;
  UObjectexecSwitchValueBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecSwitchValueRegistar'' @ 140f2dd10

void __cdecl _dynamic_initializer_for__UObjectexecSwitchValueRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execSwitchValue",UObject::execSwitchValue);
  return;
}

// `dynamic_initializer_for_'UObjectexecTextConstBytecodeTemp'' @ 140f2dd40

void __cdecl _dynamic_initializer_for__UObjectexecTextConstBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x29];
  if (GNatives.Elements[0x29] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x29;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execTextConst,p_Var1);
    }
  }
  GNatives.Elements[0x29] = UObject::execTextConst;
  UObjectexecTextConstBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecTextConstRegistar'' @ 140f2ddb0

void __cdecl _dynamic_initializer_for__UObjectexecTextConstRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execTextConst",UObject::execTextConst);
  return;
}

// `dynamic_initializer_for_'UObjectexecTracepointBytecodeTemp'' @ 140f2dde0

void __cdecl _dynamic_initializer_for__UObjectexecTracepointBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x5e];
  if (GNatives.Elements[0x5e] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x5e;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execTracepoint,p_Var1);
    }
  }
  GNatives.Elements[0x5e] = UObject::execTracepoint;
  UObjectexecTracepointBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecTracepointRegistar'' @ 140f2de50

void __cdecl _dynamic_initializer_for__UObjectexecTracepointRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execTracepoint",UObject::execTracepoint);
  return;
}

// `dynamic_initializer_for_'UObjectexecTransformConstBytecodeTemp'' @ 140f2de80

void __cdecl _dynamic_initializer_for__UObjectexecTransformConstBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x2b];
  if (GNatives.Elements[0x2b] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x2b;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execTransformConst,p_Var1);
    }
  }
  GNatives.Elements[0x2b] = UObject::execTransformConst;
  UObjectexecTransformConstBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecTransformConstRegistar'' @ 140f2def0

void __cdecl _dynamic_initializer_for__UObjectexecTransformConstRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction
            (pUVar1,"execTransformConst",UObject::execTransformConst);
  return;
}

// `dynamic_initializer_for_'UObjectexecTrueBytecodeTemp'' @ 140f2df20

void __cdecl _dynamic_initializer_for__UObjectexecTrueBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x27];
  if (GNatives.Elements[0x27] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x27;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execTrue,p_Var1);
    }
  }
  GNatives.Elements[0x27] = UObject::execTrue;
  UObjectexecTrueBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecTrueRegistar'' @ 140f2df90

void __cdecl _dynamic_initializer_for__UObjectexecTrueRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execTrue",UObject::execTrue);
  return;
}

// `dynamic_initializer_for_'UObjectexecUInt64ConstBytecodeTemp'' @ 140f2dfc0

void __cdecl _dynamic_initializer_for__UObjectexecUInt64ConstBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x36];
  if (GNatives.Elements[0x36] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x36;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execUInt64Const,p_Var1);
    }
  }
  GNatives.Elements[0x36] = UObject::execUInt64Const;
  UObjectexecUInt64ConstBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecUInt64ConstRegistar'' @ 140f2e030

void __cdecl _dynamic_initializer_for__UObjectexecUInt64ConstRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execUInt64Const",UObject::execUInt64Const);
  return;
}

// `dynamic_initializer_for_'UObjectexecUnicodeStringConstBytecodeTemp'' @ 140f2e060

void __cdecl _dynamic_initializer_for__UObjectexecUnicodeStringConstBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x34];
  if (GNatives.Elements[0x34] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x34;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execUnicodeStringConst,p_Var1);
    }
  }
  GNatives.Elements[0x34] = UObject::execUnicodeStringConst;
  UObjectexecUnicodeStringConstBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecUnicodeStringConstRegistar'' @ 140f2e0d0

void __cdecl _dynamic_initializer_for__UObjectexecUnicodeStringConstRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction
            (pUVar1,"execUnicodeStringConst",UObject::execUnicodeStringConst);
  return;
}

// `dynamic_initializer_for_'UObjectexecVector3fConstBytecodeTemp'' @ 140f2e100

void __cdecl _dynamic_initializer_for__UObjectexecVector3fConstBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x41];
  if (GNatives.Elements[0x41] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x41;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execVector3fConst,p_Var1);
    }
  }
  GNatives.Elements[0x41] = UObject::execVector3fConst;
  UObjectexecVector3fConstBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecVector3fConstRegistar'' @ 140f2e170

void __cdecl _dynamic_initializer_for__UObjectexecVector3fConstRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execVector3fConst",UObject::execVector3fConst);
  return;
}

// `dynamic_initializer_for_'UObjectexecVectorConstBytecodeTemp'' @ 140f2e1a0

void __cdecl _dynamic_initializer_for__UObjectexecVectorConstBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x23];
  if (GNatives.Elements[0x23] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x23;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execVectorConst,p_Var1);
    }
  }
  GNatives.Elements[0x23] = UObject::execVectorConst;
  UObjectexecVectorConstBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecVectorConstRegistar'' @ 140f2e210

void __cdecl _dynamic_initializer_for__UObjectexecVectorConstRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction(pUVar1,"execVectorConst",UObject::execVectorConst);
  return;
}

// `dynamic_initializer_for_'UObjectexecVirtualFunctionBytecodeTemp'' @ 140f2e240

void __cdecl _dynamic_initializer_for__UObjectexecVirtualFunctionBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x1b];
  if (GNatives.Elements[0x1b] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x1b;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execVirtualFunction,p_Var1);
    }
  }
  GNatives.Elements[0x1b] = UObject::execVirtualFunction;
  UObjectexecVirtualFunctionBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecVirtualFunctionRegistar'' @ 140f2e2b0

void __cdecl _dynamic_initializer_for__UObjectexecVirtualFunctionRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction
            (pUVar1,"execVirtualFunction",UObject::execVirtualFunction);
  return;
}

// `dynamic_initializer_for_'UObjectexecWireTracepointBytecodeTemp'' @ 140f2e2e0

void __cdecl _dynamic_initializer_for__UObjectexecWireTracepointBytecodeTemp__(void)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  IReload *pIVar2;
  
  p_Var1 = GNatives.Elements[0x5a];
  if (GNatives.Elements[0x5a] != UObject::execUndefined) {
    pIVar2 = GetActiveReloadInterface();
    if (pIVar2 == (IReload *)0x0) {
      GNativeDuplicate = 0x5a;
    }
    else {
      (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,UObject::execWireTracepoint,p_Var1);
    }
  }
  GNatives.Elements[0x5a] = UObject::execWireTracepoint;
  UObjectexecWireTracepointBytecodeTemp = '\0';
  return;
}

// `dynamic_initializer_for_'UObjectexecWireTracepointRegistar'' @ 140f2e350

void __cdecl _dynamic_initializer_for__UObjectexecWireTracepointRegistar__(void)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  FNativeFunctionRegistrar::RegisterFunction
            (pUVar1,"execWireTracepoint",UObject::execWireTracepoint);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_SoftObjectPath_h__Script_CoreUObject_1816849452'' @ 140f2e380

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_SoftObjectPath_h__Script_CoreUObject_1816849452__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreUObject",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_SoftObjectPath_h__Script_CoreUObject_Statics
             ::ScriptStructInfo,4,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_TemplateString_h__Script_CoreUObject_3509662211'' @ 140f2e3c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_TemplateString_h__Script_CoreUObject_3509662211__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreUObject",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_TemplateString_h__Script_CoreUObject_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_TopLevelAssetPath_h__Script_CoreUObject_3982867002'' @ 140f2e400

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_TopLevelAssetPath_h__Script_CoreUObject_3982867002__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreUObject",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_TopLevelAssetPath_h__Script_CoreUObject_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// Z_Construct_UScriptStruct_FSoftObjectPath @ 1421f24b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSoftObjectPath(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSoftObjectPath.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSoftObjectPath.InnerSingleton,
               &Z_Construct_UScriptStruct_FSoftObjectPath_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSoftObjectPath.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSoftObjectPath.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FTopLevelAssetPath @ 1421f2530

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTopLevelAssetPath(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTopLevelAssetPath.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTopLevelAssetPath.InnerSingleton,
               &Z_Construct_UScriptStruct_FTopLevelAssetPath_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTopLevelAssetPath.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTopLevelAssetPath.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 1421f25b0

void * __cdecl Z_Construct_UScriptStruct_FSoftObjectPath_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSoftObjectPath,&UE::CoreUObject::Private::Destruct<FSoftObjectPath>,&UE::CoreUObject::Private::SerializeSlot<FSoftObjectPath>,&UE::CoreUObject::Private::Copy<FSoftObjectPath>,&UE::CoreUObject::Private::Identical<FSoftObjectPath>,&UE::CoreUObject::Private::ExportTextItem<FSoftObjectPath>,&UE::CoreUObject::Private::ImportTextItem<FSoftObjectPath>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FSoftObjectPath>,&UE::CoreUObject::Private::GetStructTypeHash<FSoftObjectPath>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1421f25f0

void * __cdecl Z_Construct_UScriptStruct_FSoftClassPath_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSoftClassPath,&UE::CoreUObject::Private::Destruct<FSoftClassPath>,&UE::CoreUObject::Private::SerializeArchive<FSoftClassPath>,&UE::CoreUObject::Private::Copy<FSoftClassPath>,&UE::CoreUObject::Private::Identical<FSoftClassPath>,&UE::CoreUObject::Private::ExportTextItem<FSoftClassPath>,&UE::CoreUObject::Private::ImportTextItem<FSoftClassPath>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FSoftClassPath>,&UE::CoreUObject::Private::GetStructTypeHash<FSoftClassPath>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1421f2630

void * __cdecl Z_Construct_UScriptStruct_FFilePath_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FFilePath,&UE::CoreUObject::Private::Construct<FFilePath>,&UE::CoreUObject::Private::ConstructForTests<FFilePath>,&UE::CoreUObject::Private::Destruct<FFilePath>,&UE::CoreUObject::Private::Copy<FFilePath>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1421f2840

void * __thiscall
FSparseDelegateStorage::FObjectListener::_scalar_deleting_destructor_
          (FObjectListener *this,uint param_1)

{
  *this = (FObjectListener)&___7FObjectListener_FSparseDelegateStorage__6B_;
  if (GIsRequestingExit == false) {
    FUObjectArray::RemoveUObjectDeleteListener(&GUObjectArray,(FUObjectDeleteListener *)this);
  }
  *this = (FObjectListener)&___7FUObjectDeleteListener_FUObjectArray__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// NewStructOps @ 1421f28b0

void * __cdecl Z_Construct_UScriptStruct_FDirectoryPath_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDirectoryPath,&UE::CoreUObject::Private::Construct<FDirectoryPath>,&UE::CoreUObject::Private::ConstructForTests<FDirectoryPath>,&UE::CoreUObject::Private::Destruct<FDirectoryPath>,&UE::CoreUObject::Private::Copy<FDirectoryPath>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1421f2dc0

void * __thiscall
FScriptAuditExec::_scalar_deleting_destructor_(FScriptAuditExec *this,uint param_1)

{
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// NewStructOps @ 1421f2e00

void * __cdecl Z_Construct_UScriptStruct_FTemplateString_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTemplateString,&UE::CoreUObject::Private::Construct<FTemplateString>,&UE::CoreUObject::Private::ConstructForTests<FTemplateString>,&UE::CoreUObject::Private::Destruct<FTemplateString>,&UE::CoreUObject::Private::Copy<FTemplateString>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1421f3710

void * __thiscall
FSoftObjectPathImportTextTests::_scalar_deleting_destructor_
          (FSoftObjectPathImportTextTests *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// NewStructOps @ 1421f3760

void * __cdecl Z_Construct_UScriptStruct_FTopLevelAssetPath_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTopLevelAssetPath,&UE::CoreUObject::Private::Construct<FTopLevelAssetPath>,&UE::CoreUObject::Private::ConstructForTests<FTopLevelAssetPath>,&UE::CoreUObject::Private::Destruct<FTopLevelAssetPath>,&UE::CoreUObject::Private::Copy<FTopLevelAssetPath>,&UE::CoreUObject::Private::ExportTextItem<FTopLevelAssetPath>,&UE::CoreUObject::Private::ImportTextItem<FTopLevelAssetPath>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FTopLevelAssetPath>,&UE::CoreUObject::Private::GetStructTypeHash<FTopLevelAssetPath>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1421f3a10

void * __thiscall
FSoftObjectPathTrySetPathTests::_scalar_deleting_destructor_
          (FSoftObjectPathTrySetPathTests *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1421f3ea0

void * __thiscall
FTopLevelAssetPathTest::_scalar_deleting_destructor_(FTopLevelAssetPathTest *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// operator<<<TTuple<FName,unsigned_int>_> @ 1421f41b0

void __cdecl
operator<<<TTuple<FName,unsigned_int>_>
          (FStructuredArchiveSlot param_1,
          TArray<TTuple<FName,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  FArchive *this;
  uint *puVar2;
  code *pcVar3;
  FSlotBase FVar4;
  bool bVar5;
  int iVar6;
  FArchiveState *pFVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  FSlotBase local_res8;
  uint local_res10 [2];
  
  local_res10[0] = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  this = *(FArchive **)(*(longlong *)param_1 + 8);
  puVar2 = (uint *)**(undefined8 **)&this->field_0x8;
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  if ((uint *)(*(undefined8 **)&this->field_0x8)[1] < puVar2 + 1) {
    if ((this->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this + 0x188))(this,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this,local_res10);
    }
  }
  else {
    local_res10[0] = *puVar2;
    **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 4;
  }
  FVar4.StructuredArchive = local_res8.StructuredArchive;
  pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetArchiveState(&local_res8);
  uVar10 = local_res10[0];
  if (pFVar7->ArIsLoading != 0) {
    lVar11 = (longlong)(int)local_res10[0];
    iVar9 = *piVar1;
    if (iVar9 < (int)local_res10[0]) {
      iVar9 = local_res10[0] - iVar9;
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xc,4,iVar9,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
      DefaultConstructItems<TTuple<FName,unsigned_int>,int>
                ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0xc,iVar9);
    }
    else {
      if ((int)local_res10[0] < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res10[0]);
      }
      if ((int)local_res10[0] < iVar9) {
        uVar8 = iVar9 - local_res10[0];
        if (((int)(uVar8 | local_res10[0]) < 0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (uVar8 != 0) {
          _Dst = (param_2->AllocatorInstance).Data + lVar11 * 0xc;
          iVar9 = (*piVar1 - uVar8) - uVar10;
          if (iVar9 != 0) {
            memmove(_Dst,_Dst + (longlong)(int)uVar8 * 0xc,(longlong)iVar9 * 0xc);
          }
          *piVar1 = *piVar1 - uVar8;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
        }
      }
    }
  }
  uVar10 = 0;
  if (0 < (int)local_res10[0]) {
    do {
      uVar8 = 0;
      if ((int)uVar10 < *piVar1) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int,0,1>,FName,unsigned_int>::
      SerializeStructured((FStructuredArchiveSlot)FVar4.StructuredArchive,
                          (TTupleBase<TIntegerSequence<unsigned_int,0,1>,FName,unsigned_int> *)
                          ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0xc));
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)local_res10[0]);
  }
  return;
}

// operator<<<TBitArray<FDefaultBitArrayAllocator>,0> @ 1421f43d0

void __cdecl
operator<<<TBitArray<FDefaultBitArrayAllocator>,0>
          (FStructuredArchiveSlot param_1,TBitArray<FDefaultBitArrayAllocator> *param_2)

{
  int *piVar1;
  ForElementType<unsigned_int> FVar2;
  uint uVar3;
  FArchive *this;
  ForElementType<unsigned_int> FVar4;
  uint uVar5;
  FSlotBase local_res8;
  
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  this = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  piVar1 = (int *)**(undefined8 **)&this->field_0x8;
  if ((int *)(*(undefined8 **)&this->field_0x8)[1] < piVar1 + 1) {
    if ((this->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this + 0x188))(this,&param_2->NumBits,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this,(uint *)&param_2->NumBits);
    }
  }
  else {
    param_2->NumBits = *piVar1;
    **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 4;
  }
  if ((this->field_0x28 & 1) != 0) {
    uVar3 = param_2->NumBits + 0x1fU >> 5;
    uVar5 = 4;
    if (4 < uVar3) {
      uVar5 = uVar3;
    }
    param_2->MaxBits = uVar5 << 5;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_2,0);
  }
  FVar2 = (param_2->AllocatorInstance).SecondaryData;
  FVar4 = (ForElementType<unsigned_int>)param_2;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    FVar4 = FVar2;
  }
  (**(code **)(*(longlong *)this + 0x188))
            (this,FVar4,(ulonglong)(param_2->NumBits + 0x1fU >> 5) << 2);
  if (((this->field_0x28 & 1) != 0) && ((this->field_0x2b & 5) == 0)) {
    TBitArray<FDefaultBitArrayAllocator>::ClearPartialSlackBits(param_2);
  }
  return;
}

// operator<<<wchar_t,wchar_t_const_(&)[2]> @ 1421f45b0

TStringBuilderBase<wchar_t> * __cdecl
operator<<<wchar_t,wchar_t_const_(&)[2]>
          (TStringBuilderBase<wchar_t> *param_1,wchar_t (*param_2) [2])

{
  int iVar1;
  size_t sVar2;
  TStringBuilderBase<wchar_t> *pTVar3;
  
  iVar1 = 0;
  if (param_2 != (wchar_t (*) [2])0x0) {
    sVar2 = wcslen(*param_2);
    iVar1 = (int)sVar2;
  }
  pTVar3 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,*param_2,iVar1);
  return pTVar3;
}

// operator<<<wchar_t,wchar_t_const_(&)[17]> @ 1421f45f0

TStringBuilderBase<wchar_t> * __cdecl
operator<<<wchar_t,wchar_t_const_(&)[17]>
          (TStringBuilderBase<wchar_t> *param_1,wchar_t (*param_2) [17])

{
  int iVar1;
  size_t sVar2;
  TStringBuilderBase<wchar_t> *pTVar3;
  
  iVar1 = 0;
  if (param_2 != (wchar_t (*) [17])0x0) {
    sVar2 = wcslen(*param_2);
    iVar1 = (int)sVar2;
  }
  pTVar3 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,*param_2,iVar1);
  return pTVar3;
}

// operator<<<wchar_t,wchar_t_const_(&)[12]> @ 1421f4630

TStringBuilderBase<wchar_t> * __cdecl
operator<<<wchar_t,wchar_t_const_(&)[12]>
          (TStringBuilderBase<wchar_t> *param_1,wchar_t (*param_2) [12])

{
  int iVar1;
  size_t sVar2;
  TStringBuilderBase<wchar_t> *pTVar3;
  
  iVar1 = 0;
  if (param_2 != (wchar_t (*) [12])0x0) {
    sVar2 = wcslen(*param_2);
    iVar1 = (int)sVar2;
  }
  pTVar3 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,*param_2,iVar1);
  return pTVar3;
}

// operator<<<wchar_t,FUtf8String_const_&> @ 1421f4670

TStringBuilderBase<wchar_t> * __cdecl
operator<<<wchar_t,FUtf8String_const_&>(TStringBuilderBase<wchar_t> *param_1,FUtf8String *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  wchar_t *pwVar3;
  int iVar4;
  
  iVar2 = (param_2->Data).ArrayNum;
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  iVar4 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  iVar2 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,(uchar *)pFVar1,iVar4);
  if (param_1->End < param_1->CurPos + iVar2) {
    TStringBuilderBase<wchar_t>::Extend(param_1,(longlong)iVar2);
  }
  if (iVar4 != 0) {
    pwVar3 = UE::Core::Private::Convert(param_1->CurPos,iVar2,(uchar *)pFVar1,iVar4);
    param_1->CurPos = pwVar3;
  }
  return param_1;
}

// operator<<<wchar_t,int> @ 1421f4700

TStringBuilderBase<wchar_t> * __cdecl
operator<<<wchar_t,int>(TStringBuilderBase<wchar_t> *param_1,int *param_2)

{
  TStringBuilderBase<wchar_t> *pTVar1;
  
  pTVar1 = TStringBuilderBase<wchar_t>::AppendfImpl(param_1,L"%d");
  return pTVar1;
}

// AutoRTFMFunctorInvoker<`UObject::execAutoRtfmTransact'::__l2::<lambda_1>_> @ 1421f4950

void __cdecl
AutoRTFM::AutoRTFMFunctorInvoker<_UObject::execAutoRtfmTransact_::__l2::<lambda_1>_>(void *param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  FFrame *pFVar5;
  int *piVar6;
  char *pcVar7;
  void *pvVar8;
  
  while( true ) {
    do {
      while( true ) {
        pFVar5 = *(FFrame **)param_1;
        bVar2 = *pFVar5->Code;
        pbVar1 = pFVar5->Code + 1;
        if (bVar2 == 0x71) break;
        pvVar8 = (void *)**(undefined8 **)((longlong)param_1 + 0x18);
        pFVar5->Code = pbVar1;
        (*GNatives.Elements[bVar2])(pFVar5->Object,pFVar5,pvVar8);
      }
      pFVar5->Code = pbVar1;
      piVar6 = *(int **)(*(longlong *)param_1 + 0x20);
      iVar4 = *piVar6;
      *(int **)(*(longlong *)param_1 + 0x20) = piVar6 + 1;
      pcVar7 = *(char **)(*(longlong *)param_1 + 0x20);
      cVar3 = *pcVar7;
      *(char **)(*(longlong *)param_1 + 0x20) = pcVar7 + 1;
    } while (**(int **)((longlong)param_1 + 8) != iVar4);
    if (cVar3 == '\0') break;
    if ((cVar3 != '\x01') && (cVar3 == '\x02')) {
      **(undefined1 **)((longlong)param_1 + 0x10) = 1;
    }
  }
  return;
}

// CastChecked<UFunction,UStruct> @ 1421f4a00

UFunction * __cdecl CastChecked<UFunction,UStruct>(UStruct *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UStruct *)0x0) {
    pFVar3 = GetTypeName<UFunction>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UFunction_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UFunction *)param_1;
  }
  pFVar3 = GetTypeName<UFunction>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UStruct>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UScriptStruct,UStruct_const_> @ 1421f4ac0

UScriptStruct * __cdecl CastChecked<UScriptStruct,UStruct_const_>(UStruct *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UStruct *)0x0) {
    pFVar3 = GetTypeName<UScriptStruct>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UScriptStruct_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UScriptStruct *)param_1;
  }
  pFVar3 = GetTypeName<UScriptStruct>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UStruct_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UScriptStruct,UObject> @ 1421f4b80

UScriptStruct * __cdecl CastChecked<UScriptStruct,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UScriptStruct>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UScriptStruct_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UScriptStruct *)param_1;
  }
  pFVar3 = GetTypeName<UScriptStruct>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ConstructItems<FScriptStackTracker::FCallStack,FScriptStackTracker::FCallStack,int> @ 1421f4c40

void __cdecl
ConstructItems<FScriptStackTracker::FCallStack,FScriptStackTracker::FCallStack,int>
          (void *param_1,FCallStack *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      *(long64 *)(lVar1 + (longlong)param_2) = param_2->StackCount;
      FString::FString((FString *)(lVar1 + 8 + (longlong)param_2),&param_2->StackTrace);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FPropertySaveOverride,FPropertySaveOverride,int> @ 1421f4ca0

void __cdecl
ConstructItems<FPropertySaveOverride,FPropertySaveOverride,int>
          (void *param_1,FPropertySaveOverride *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  FWeakObjectPtr *pFVar2;
  int iVar3;
  FWeakObjectPtr _Src;
  int *piVar4;
  FWeakObjectPtr *pFVar5;
  
  if (param_3 != 0) {
    piVar4 = (int *)((longlong)param_1 + 0x1c);
    pFVar5 = &(param_2->PropertyPath).ResolvedOwner.WeakPtr;
    do {
      pFVar1 = (ForAnyElementType *)(piVar4 + -3);
      *(undefined8 *)((longlong)param_1 + (-8 - (longlong)param_2) + (longlong)pFVar5) =
           *(undefined8 *)&pFVar5[-1].ObjectIndex;
      *(FWeakObjectPtr *)(piVar4 + -5) = *pFVar5;
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar3 = pFVar5[2].ObjectIndex;
      _Src = pFVar5[1];
      piVar4[-1] = iVar3;
      if (iVar3 == 0) {
        *piVar4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar3,0,pFVar1,iVar3,piVar4);
        memcpy(pFVar1->Data,(void *)_Src,(longlong)iVar3 << 3);
      }
      pFVar2 = pFVar5 + 3;
      pFVar5 = pFVar5 + 5;
      *(char *)(piVar4 + 1) = (char)pFVar2->ObjectIndex;
      piVar4 = piVar4 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<TTuple<UFunction_*,int>,int> @ 1421f4d90

void __cdecl DefaultConstructItems<TTuple<UFunction_*,int>,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TTuple<FName,int>,int> @ 1421f4dc0

void __cdecl DefaultConstructItems<TTuple<FName,int>,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TTuple<FName,unsigned_int>,int> @ 1421f4df0

void __cdecl DefaultConstructItems<TTuple<FName,unsigned_int>,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TTuple<enum_EExprToken,int>,int> @ 1421f4e20

void __cdecl DefaultConstructItems<TTuple<enum_EExprToken,int>,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined1 *)param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 4) = 0;
    param_1 = (void *)((longlong)param_1 + 8);
  }
  return;
}

// DefaultConstructItems<FHarvestedRealm,int> @ 1421f4e50

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __cdecl DefaultConstructItems<FHarvestedRealm,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FHarvestedRealm::FHarvestedRealm(param_1);
    param_1 = (void *)((longlong)param_1 + 0x5f0);
  }
  return;
}

// DestructItems<FScriptStackTracker::FCallStack,int> @ 1421f4e90

void __cdecl DestructItems<FScriptStackTracker::FCallStack,int>(FCallStack *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->StackTrace;
    do {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = (FString *)((longlong)(pFVar2 + 1) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSoftClassPtr<UObject>,int> @ 1421f4ed0

void __cdecl DestructItems<TSoftClassPtr<UObject>,int>(TSoftClassPtr<UObject> *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->SoftObjectPtr).field_0x18;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// ForEachExportHarvestingRealm<`FPackageHarvester::HarvestSearchableName'::__l2::<lambda_1>_> @ 1421f7920

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall
FPackageHarvester::
ForEachExportHarvestingRealm<_FPackageHarvester::HarvestSearchableName_::__l2::<lambda_1>_>
          (FPackageHarvester *this,<lambda_1> *param_1)

{
  ForElementType<ESaveRealm> FVar1;
  bool bVar2;
  int iVar3;
  ESaveRealm EVar4;
  FPackageHarvester *pFVar5;
  TObjectPtr<UObject>_u_0 TVar6;
  byte bVar7;
  int iVar8;
  FHarvestedRealm *pFVar9;
  uint uVar10;
  ForElementType<ESaveRealm> FVar11;
  TObjectPtr<UObject>_u_0 local_res8;
  
  FVar11 = (this->CurrentExportHarvestingRealms).AllocatorInstance.SecondaryData;
  iVar3 = (this->CurrentExportHarvestingRealms).ArrayNum;
  if (FVar11 == (ForElementType<ESaveRealm>)0x0) {
    FVar11 = (ForElementType<ESaveRealm>)&this->CurrentExportHarvestingRealms;
  }
  FVar1 = (ForElementType<ESaveRealm>)((longlong)FVar11 + (longlong)iVar3 * 4);
  do {
    if ((this->CurrentExportHarvestingRealms).ArrayNum != iVar3) {
      `TCheckedPointerIterator<enum_ESaveRealm,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (FVar11 == FVar1) {
      return;
    }
    EVar4 = *(ESaveRealm *)FVar11;
    pFVar5 = param_1->__this;
    TVar6 = (TObjectPtr<UObject>_u_0)(param_1->TypeObject).field0_0x0.DebugPtr;
    bVar2 = *param_1->bAlreadyTrackedInAllHarvestingRealms;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar6.DebugPtr != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(TVar6.DebugPtr);
    }
    pFVar9 = FSaveContext::GetHarvestedRealm(pFVar5->SaveContext,EVar4);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar6.DebugPtr != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(TVar6.DebugPtr);
    }
    local_res8 = TVar6;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (TVar6.DebugPtr != (UObject *)0x0) {
        UE::GC::MarkAsReachable(TVar6.DebugPtr);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar6.DebugPtr != (UObject *)0x0)
         ) {
        UE::GC::MarkAsReachable(TVar6.DebugPtr);
      }
    }
    uVar10 = ((uint)((ulonglong)TVar6.DebugPtr >> 0x14) & 0xffff ^
             (uint)((ulonglong)TVar6.DebugPtr >> 4)) * -0x7a143595;
    uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
    uVar10 = uVar10 >> 0x10 ^ uVar10;
    iVar8 = TSet<TTuple<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<TObjectPtr<UObject_const_>_>
                      ((TSet<TTuple<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                        *)&pFVar9->ExportObjectDependencies,uVar10,
                       (TObjectPtr<UObject_const_> *)&local_res8.ObjectPtr);
    if (iVar8 == -1) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar6.DebugPtr != (UObject *)0x0)
         ) {
        UE::GC::MarkAsReachable(TVar6.DebugPtr);
      }
      local_res8 = TVar6;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (TVar6.DebugPtr != (UObject *)0x0) {
          UE::GC::MarkAsReachable(TVar6.DebugPtr);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TVar6.DebugPtr != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(TVar6.DebugPtr);
        }
      }
      iVar8 = TSet<TTuple<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<TObjectPtr<UObject_const_>_>
                        ((TSet<TTuple<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                          *)&pFVar9->ExportNativeObjectDependencies,uVar10,
                         (TObjectPtr<UObject_const_> *)&local_res8.ObjectPtr);
      if (iVar8 != -1) goto LAB_1421f7aa7;
      bVar7 = 0;
    }
    else {
LAB_1421f7aa7:
      bVar7 = 1;
    }
    FVar11 = (ForElementType<ESaveRealm>)((longlong)FVar11 + 4);
    *param_1->bAlreadyTrackedInAllHarvestingRealms = (bool)(bVar2 & bVar7);
  } while( true );
}

// ForEachExportHarvestingRealm<`FPackageHarvester::ProcessExport'::__l12::<lambda_3>_> @ 1421f7af0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall
FPackageHarvester::
ForEachExportHarvestingRealm<_FPackageHarvester::ProcessExport_::__l12::<lambda_3>_>
          (FPackageHarvester *this,<lambda_3> *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ForElementType<ESaveRealm> FVar4;
  UObject *pUVar5;
  longlong lVar6;
  UPackage *pUVar7;
  FSaveContext *this_00;
  bool bVar8;
  FHarvestedRealm *this_01;
  UClass *pUVar9;
  FString *pFVar10;
  ForElementType<ESaveRealm> FVar11;
  ESaveRealm local_res8 [2];
  UObject *local_res18;
  ForElementType<ESaveRealm> local_res20;
  FString local_48;
  
  FVar11 = (ForElementType<ESaveRealm>)&this->CurrentExportHarvestingRealms;
  FVar4 = (this->CurrentExportHarvestingRealms).AllocatorInstance.SecondaryData;
  piVar1 = &(this->CurrentExportHarvestingRealms).ArrayNum;
  iVar2 = *piVar1;
  if (FVar4 != (ForElementType<ESaveRealm>)0x0) {
    FVar11 = FVar4;
  }
  local_res20 = (ForElementType<ESaveRealm>)((longlong)FVar11 + (longlong)iVar2 * 4);
  while( true ) {
    FVar4 = local_res20;
    if (*piVar1 != iVar2) {
      `TCheckedPointerIterator<enum_ESaveRealm,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar11 == FVar4) break;
    local_res8[0] = *(ESaveRealm *)FVar11;
    this_01 = FSaveContext::GetHarvestedRealm(param_1->__this->SaveContext,local_res8[0]);
    local_res18 = param_1->Outer;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res18);
    }
    bVar8 = FHarvestedRealm::IsIncluded(this_01,(TObjectPtr<UObject>)&local_res18);
    if (!bVar8) {
      pUVar5 = param_1->Export;
      pUVar9 = Z_Construct_UClass_UPackage_NoRegister();
      lVar6 = *(longlong *)&pUVar5->field_0x10;
      iVar3 = (int)pUVar9->_padding_;
      if ((*(int *)(lVar6 + 0x38) < iVar3) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar3 * 8) !=
          &pUVar9->_padding_)) {
        pUVar7 = (UPackage *)param_1->Outer;
        this_00 = param_1->__this->SaveContext;
        if (pUVar7 != this_00->Package) {
          pFVar10 = GetUnsaveableReason(param_1->__this,&local_48,(UObject *)pUVar7,local_res8[0]);
          FSaveContext::RecordIllegalReference
                    (this_00,param_1->Export,param_1->Outer,UnsaveableOuter,pFVar10);
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
      }
    }
    FVar11 = (ForElementType<ESaveRealm>)((longlong)FVar11 + 4);
  }
  return;
}

// GetFullNameForCastLogError<UStruct_const_> @ 1421f7c60

FString * __cdecl
GetFullNameForCastLogError<UStruct_const_>(FString *__return_storage_ptr__,UStruct *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,UObject::FAssetRegistryTag>,TDefaultMapHashableKeyFuncs<FName,UObject::FAssetRegistryTag,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,UObject::FAssetRegistryTag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObject::FAssetRegistryTag,0>_>::FKeyComparisonClass<FNameLexicalLess>_>_>_> @ 1421f7cd0

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,UObject::FAssetRegistryTag>,TDefaultMapHashableKeyFuncs<FName,UObject::FAssetRegistryTag,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,UObject::FAssetRegistryTag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObject::FAssetRegistryTag,0>_>::FKeyComparisonClass<FNameLexicalLess>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<FName,UObject::FAssetRegistryTag>,TDefaultMapHashableKeyFuncs<FName,UObject::FAssetRegistryTag,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,UObject::FAssetRegistryTag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObject::FAssetRegistryTag,0>_>::FKeyComparisonClass<FNameLexicalLess>_>_>
          param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>_s_1 TVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_> *pTVar16;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_> *pTVar17;
  longlong lVar18;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_> *pTVar19;
  
  if (param_2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar10 = (param_2 + -2) / 2;
  iVar12 = iVar10 * 2 + 1;
  iVar13 = iVar12;
  iVar15 = iVar10;
  do {
    while (param_2 <= iVar12) {
LAB_1421f7e26:
      if (iVar15 == 0) {
        iVar12 = param_2 + -1;
        lVar18 = (longlong)iVar12;
        if (0 < iVar12) {
          pTVar19 = param_1 + lVar18;
          do {
            uVar2 = *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 8);
            TVar3 = param_1->_s_1;
            uVar4 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            uVar5 = *(undefined8 *)((param_1->ElementData).Pad + 0x10);
            uVar6 = *(undefined8 *)((param_1->ElementData).Pad + 0x18);
            uVar7 = *(undefined8 *)((param_1->ElementData).Pad + 0x20);
            uVar8 = *(undefined8 *)((param_1->ElementData).Pad + 0x28);
            param_1->_s_1 = pTVar19->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar2;
            uVar2 = *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x18);
            *(undefined8 *)((param_1->ElementData).Pad + 0x10) =
                 *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x10);
            *(undefined8 *)((param_1->ElementData).Pad + 0x18) = uVar2;
            uVar2 = *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x28);
            *(undefined8 *)((param_1->ElementData).Pad + 0x20) =
                 *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x20);
            *(undefined8 *)((param_1->ElementData).Pad + 0x28) = uVar2;
            pTVar19->_s_1 = TVar3;
            *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 8) = uVar4;
            *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x10) = uVar5;
            *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x18) = uVar6;
            *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x20) = uVar7;
            *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x28) = uVar8;
            iVar13 = 0;
            if (1 < iVar12) {
              do {
                iVar10 = iVar13 * 2;
                iVar15 = iVar10 + 1;
                if (iVar10 + 2 < iVar12) {
                  iVar14 = ::FName::Compare((FName *)&param_1[iVar10 + 2].ElementData,
                                            (FName *)&param_1[iVar15].ElementData);
                  if (iVar14 < 0) {
                    iVar15 = iVar10;
                  }
                  iVar15 = iVar15 + 1;
                }
                pTVar17 = param_1 + iVar15;
                pTVar16 = param_1 + iVar13;
                iVar13 = ::FName::Compare((FName *)&pTVar16->ElementData,
                                          (FName *)&pTVar17->ElementData);
                if (-1 < iVar13) break;
                uVar2 = *(undefined8 *)((pTVar17->ElementData).Pad + 8);
                TVar3 = pTVar16->_s_1;
                uVar4 = *(undefined8 *)((pTVar16->ElementData).Pad + 8);
                uVar5 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x10);
                uVar6 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x18);
                uVar7 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x20);
                uVar8 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x28);
                pTVar16->_s_1 = pTVar17->_s_1;
                *(undefined8 *)((pTVar16->ElementData).Pad + 8) = uVar2;
                uVar2 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x18);
                *(undefined8 *)((pTVar16->ElementData).Pad + 0x10) =
                     *(undefined8 *)((pTVar17->ElementData).Pad + 0x10);
                *(undefined8 *)((pTVar16->ElementData).Pad + 0x18) = uVar2;
                uVar2 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x28);
                *(undefined8 *)((pTVar16->ElementData).Pad + 0x20) =
                     *(undefined8 *)((pTVar17->ElementData).Pad + 0x20);
                *(undefined8 *)((pTVar16->ElementData).Pad + 0x28) = uVar2;
                pTVar17->_s_1 = TVar3;
                *(undefined8 *)((pTVar17->ElementData).Pad + 8) = uVar4;
                *(undefined8 *)((pTVar17->ElementData).Pad + 0x10) = uVar5;
                *(undefined8 *)((pTVar17->ElementData).Pad + 0x18) = uVar6;
                *(undefined8 *)((pTVar17->ElementData).Pad + 0x20) = uVar7;
                *(undefined8 *)((pTVar17->ElementData).Pad + 0x28) = uVar8;
                iVar13 = iVar15;
              } while (iVar15 * 2 + 1 < iVar12);
            }
            iVar12 = iVar12 + -1;
            lVar18 = lVar18 + -1;
            pTVar19 = pTVar19 + -1;
          } while (0 < lVar18);
        }
        return;
      }
      iVar10 = iVar15 + -1;
      iVar12 = iVar13 + -2;
      iVar13 = iVar12;
      iVar15 = iVar10;
    }
    iVar12 = iVar10 * 2;
    iVar14 = iVar12 + 1;
    if (iVar12 + 2 < param_2) {
      iVar11 = ::FName::Compare((FName *)&param_1[iVar12 + 2].ElementData,
                                (FName *)&param_1[iVar14].ElementData);
      if (iVar11 < 0) {
        iVar14 = iVar12;
      }
      iVar14 = iVar14 + 1;
    }
    pTVar16 = param_1 + iVar14;
    pTVar19 = param_1 + iVar10;
    iVar12 = ::FName::Compare((FName *)&pTVar19->ElementData,(FName *)&pTVar16->ElementData);
    if (-1 < iVar12) goto LAB_1421f7e26;
    uVar2 = *(undefined8 *)((pTVar16->ElementData).Pad + 8);
    iVar12 = iVar14 * 2 + 1;
    TVar3 = pTVar19->_s_1;
    uVar4 = *(undefined8 *)((pTVar19->ElementData).Pad + 8);
    uVar5 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x10);
    uVar6 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x18);
    uVar7 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x20);
    uVar8 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x28);
    pTVar19->_s_1 = pTVar16->_s_1;
    *(undefined8 *)((pTVar19->ElementData).Pad + 8) = uVar2;
    uVar2 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x18);
    *(undefined8 *)((pTVar19->ElementData).Pad + 0x10) =
         *(undefined8 *)((pTVar16->ElementData).Pad + 0x10);
    *(undefined8 *)((pTVar19->ElementData).Pad + 0x18) = uVar2;
    uVar2 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x28);
    *(undefined8 *)((pTVar19->ElementData).Pad + 0x20) =
         *(undefined8 *)((pTVar16->ElementData).Pad + 0x20);
    *(undefined8 *)((pTVar19->ElementData).Pad + 0x28) = uVar2;
    pTVar16->_s_1 = TVar3;
    *(undefined8 *)((pTVar16->ElementData).Pad + 8) = uVar4;
    *(undefined8 *)((pTVar16->ElementData).Pad + 0x10) = uVar5;
    *(undefined8 *)((pTVar16->ElementData).Pad + 0x18) = uVar6;
    *(undefined8 *)((pTVar16->ElementData).Pad + 0x20) = uVar7;
    *(undefined8 *)((pTVar16->ElementData).Pad + 0x28) = uVar8;
    iVar10 = iVar14;
  } while( true );
}

// HeapSortInternal<FScriptStackTracker::FCallStack,int,FIdentityFunctor,TDereferenceWrapper<FScriptStackTracker::FCallStack,`FScriptStackTracker::DumpStackTraces'::__l2::FCompareStackCount>_> @ 1421f7f90

void __cdecl
AlgoImpl::
HeapSortInternal<FScriptStackTracker::FCallStack,int,FIdentityFunctor,TDereferenceWrapper<FScriptStackTracker::FCallStack,_FScriptStackTracker::DumpStackTraces_::__l2::FCompareStackCount>_>
          (FCallStack *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FScriptStackTracker::FCallStack,_public:_void___cdecl_FScriptStackTracker::DumpStackTraces(int,FOutputDevice_&)_::_2_::FCompareStackCount>
          param_4)

{
  FCallStack *pFVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  long64 lVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  FCallStack *pFVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  if (param_2 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar9 = (param_2 + -2) / 2;
  iVar10 = iVar9 * 2 + 1;
  iVar14 = iVar10;
  iVar15 = iVar9;
  do {
    while (param_2 <= iVar10) {
LAB_1421f809f:
      if (iVar15 == 0) {
        iVar10 = param_2 + -1;
        lVar12 = (longlong)iVar10;
        if (0 < iVar10) {
          pFVar11 = param_1 + lVar12;
          do {
            pFVar3 = (pFVar11->StackTrace).Data.AllocatorInstance.Data;
            iVar9 = (param_1->StackTrace).Data.ArrayNum;
            iVar15 = (param_1->StackTrace).Data.ArrayMax;
            lVar4 = param_1->StackCount;
            pFVar5 = (param_1->StackTrace).Data.AllocatorInstance.Data;
            param_1->StackCount = pFVar11->StackCount;
            (param_1->StackTrace).Data.AllocatorInstance.Data = pFVar3;
            iVar14 = (pFVar11->StackTrace).Data.ArrayMax;
            (param_1->StackTrace).Data.ArrayNum = (pFVar11->StackTrace).Data.ArrayNum;
            (param_1->StackTrace).Data.ArrayMax = iVar14;
            pFVar11->StackCount = lVar4;
            (pFVar11->StackTrace).Data.AllocatorInstance.Data = pFVar5;
            (pFVar11->StackTrace).Data.ArrayNum = iVar9;
            (pFVar11->StackTrace).Data.ArrayMax = iVar15;
            iVar14 = 0;
            if (1 < iVar10) {
              do {
                iVar15 = iVar14 * 2;
                iVar9 = iVar15 + 1;
                if (iVar15 + 2 < iVar10) {
                  if (param_1[iVar9].StackCount < param_1[(longlong)iVar15 + 2].StackCount) {
                    iVar9 = iVar15;
                  }
                  iVar9 = iVar9 + 1;
                }
                pFVar1 = param_1 + iVar14;
                if (pFVar1->StackCount <= param_1[iVar9].StackCount) break;
                pFVar3 = param_1[iVar9].StackTrace.Data.AllocatorInstance.Data;
                iVar15 = (pFVar1->StackTrace).Data.ArrayNum;
                iVar13 = (pFVar1->StackTrace).Data.ArrayMax;
                lVar4 = pFVar1->StackCount;
                pFVar5 = (pFVar1->StackTrace).Data.AllocatorInstance.Data;
                pFVar1->StackCount = param_1[iVar9].StackCount;
                (pFVar1->StackTrace).Data.AllocatorInstance.Data = pFVar3;
                iVar14 = param_1[iVar9].StackTrace.Data.ArrayMax;
                (pFVar1->StackTrace).Data.ArrayNum = param_1[iVar9].StackTrace.Data.ArrayNum;
                (pFVar1->StackTrace).Data.ArrayMax = iVar14;
                param_1[iVar9].StackCount = lVar4;
                param_1[iVar9].StackTrace.Data.AllocatorInstance.Data = pFVar5;
                param_1[iVar9].StackTrace.Data.ArrayNum = iVar15;
                param_1[iVar9].StackTrace.Data.ArrayMax = iVar13;
                iVar14 = iVar9;
              } while (iVar9 * 2 + 1 < iVar10);
            }
            iVar10 = iVar10 + -1;
            lVar12 = lVar12 + -1;
            pFVar11 = pFVar11 + -1;
          } while (0 < lVar12);
        }
        return;
      }
      iVar9 = iVar15 + -1;
      iVar10 = iVar14 + -2;
      iVar14 = iVar10;
      iVar15 = iVar9;
    }
    iVar10 = iVar9 * 2;
    iVar13 = iVar10 + 1;
    if (iVar10 + 2 < param_2) {
      if (param_1[iVar13].StackCount < param_1[(longlong)iVar10 + 2].StackCount) {
        iVar13 = iVar10;
      }
      iVar13 = iVar13 + 1;
    }
    pFVar11 = param_1 + iVar9;
    if (pFVar11->StackCount <= param_1[iVar13].StackCount) goto LAB_1421f809f;
    pFVar3 = param_1[iVar13].StackTrace.Data.AllocatorInstance.Data;
    iVar10 = iVar13 * 2 + 1;
    iVar6 = (pFVar11->StackTrace).Data.ArrayNum;
    iVar7 = (pFVar11->StackTrace).Data.ArrayMax;
    lVar4 = pFVar11->StackCount;
    pFVar5 = (pFVar11->StackTrace).Data.AllocatorInstance.Data;
    pFVar11->StackCount = param_1[iVar13].StackCount;
    (pFVar11->StackTrace).Data.AllocatorInstance.Data = pFVar3;
    iVar9 = param_1[iVar13].StackTrace.Data.ArrayMax;
    (pFVar11->StackTrace).Data.ArrayNum = param_1[iVar13].StackTrace.Data.ArrayNum;
    (pFVar11->StackTrace).Data.ArrayMax = iVar9;
    param_1[iVar13].StackCount = lVar4;
    param_1[iVar13].StackTrace.Data.AllocatorInstance.Data = pFVar5;
    param_1[iVar13].StackTrace.Data.ArrayNum = iVar6;
    param_1[iVar13].StackTrace.Data.ArrayMax = iVar7;
    iVar9 = iVar13;
  } while( true );
}

// HeapSortInternal<FObjectExport,int,FIdentityFunctor,`FObjectExportSortHelper::SortExports'::__l2::<lambda_1>_> @ 1421f81b0

void __cdecl
AlgoImpl::
HeapSortInternal<FObjectExport,int,FIdentityFunctor,_FObjectExportSortHelper::SortExports_::__l2::<lambda_1>_>
          (FObjectExport *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  code *pcVar1;
  long64 lVar2;
  long64 lVar3;
  long64 lVar4;
  long64 lVar5;
  UObject *pUVar6;
  long64 lVar7;
  longlong lVar8;
  FPackageIndex FVar9;
  FPackageIndex FVar10;
  EObjectFlags EVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  FPackageIndex FVar16;
  FPackageIndex FVar17;
  FPackageIndex FVar18;
  FPackageIndex FVar19;
  EObjectFlags EVar20;
  int iVar21;
  undefined4 uVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  bool bVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  FObjectExport *pFVar33;
  FObjectExport *pFVar34;
  int iVar35;
  longlong lVar36;
  FObjectExport *pFVar37;
  int iVar38;
  TMap<UObject_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FString,0>_>
  *local_res20;
  
  local_res20 = param_4.ObjectToFullNameMap;
  if (param_2 < 0) {
    bVar29 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar29) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar29 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar29) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar30 = (param_2 + -2) / 2;
  iVar31 = iVar30 * 2 + 1;
  iVar38 = iVar31;
  iVar35 = iVar30;
  do {
    while (param_2 <= iVar31) {
LAB_1421f836d:
      if (iVar35 == 0) {
        iVar31 = param_2 + -1;
        lVar36 = (longlong)iVar31;
        if (0 < iVar31) {
          pFVar37 = param_1 + lVar36;
          do {
            iVar38 = pFVar37->_padding_;
            FVar9.Index = (pFVar37->ClassIndex).Index;
            iVar24 = param_1->SerializationBeforeCreateDependencies;
            iVar25 = param_1->CreateBeforeCreateDependencies;
            lVar8 = param_1->_padding_;
            iVar32 = param_1->_padding_;
            FVar16.Index = (param_1->ClassIndex).Index;
            FVar17.Index = (param_1->ThisIndex).Index;
            FVar18.Index = (param_1->SuperIndex).Index;
            FVar19.Index = (param_1->TemplateIndex).Index;
            EVar20 = param_1->ObjectFlags;
            lVar2 = param_1->SerialSize;
            lVar3 = param_1->SerialOffset;
            lVar4 = param_1->ScriptSerializationStartOffset;
            lVar5 = param_1->ScriptSerializationEndOffset;
            pUVar6 = param_1->Object;
            iVar13 = param_1->HashNext;
            uVar22 = *(undefined4 *)&param_1->field_0x4c;
            uVar23 = param_1->PackageFlags;
            iVar14 = param_1->FirstExportDependency;
            iVar15 = param_1->SerializationBeforeSerializationDependencies;
            iVar21 = param_1->CreateBeforeSerializationDependencies;
            param_1->_padding_ = pFVar37->_padding_;
            param_1->_padding_ = iVar38;
            param_1->ClassIndex = (FPackageIndex)FVar9.Index;
            FVar9.Index = (pFVar37->SuperIndex).Index;
            FVar10.Index = (pFVar37->TemplateIndex).Index;
            EVar11 = pFVar37->ObjectFlags;
            param_1->ThisIndex = (FPackageIndex)(pFVar37->ThisIndex).Index;
            param_1->SuperIndex = (FPackageIndex)FVar9.Index;
            param_1->TemplateIndex = (FPackageIndex)FVar10.Index;
            param_1->ObjectFlags = EVar11;
            lVar7 = pFVar37->SerialOffset;
            param_1->SerialSize = pFVar37->SerialSize;
            param_1->SerialOffset = lVar7;
            lVar7 = pFVar37->ScriptSerializationEndOffset;
            param_1->ScriptSerializationStartOffset = pFVar37->ScriptSerializationStartOffset;
            param_1->ScriptSerializationEndOffset = lVar7;
            iVar38 = pFVar37->HashNext;
            uVar12 = *(undefined4 *)&pFVar37->field_0x4c;
            param_1->Object = pFVar37->Object;
            param_1->HashNext = iVar38;
            *(undefined4 *)&param_1->field_0x4c = uVar12;
            iVar38 = pFVar37->FirstExportDependency;
            iVar30 = pFVar37->SerializationBeforeSerializationDependencies;
            iVar35 = pFVar37->CreateBeforeSerializationDependencies;
            param_1->PackageFlags = pFVar37->PackageFlags;
            param_1->FirstExportDependency = iVar38;
            param_1->SerializationBeforeSerializationDependencies = iVar30;
            param_1->CreateBeforeSerializationDependencies = iVar35;
            iVar38 = pFVar37->CreateBeforeCreateDependencies;
            param_1->SerializationBeforeCreateDependencies =
                 pFVar37->SerializationBeforeCreateDependencies;
            param_1->CreateBeforeCreateDependencies = iVar38;
            pFVar37->_padding_ = lVar8;
            pFVar37->_padding_ = iVar32;
            pFVar37->ClassIndex = (FPackageIndex)FVar16.Index;
            pFVar37->ThisIndex = (FPackageIndex)FVar17.Index;
            pFVar37->SuperIndex = (FPackageIndex)FVar18.Index;
            pFVar37->TemplateIndex = (FPackageIndex)FVar19.Index;
            pFVar37->ObjectFlags = EVar20;
            pFVar37->SerialSize = lVar2;
            pFVar37->SerialOffset = lVar3;
            pFVar37->ScriptSerializationStartOffset = lVar4;
            pFVar37->ScriptSerializationEndOffset = lVar5;
            pFVar37->Object = pUVar6;
            pFVar37->HashNext = iVar13;
            *(undefined4 *)&pFVar37->field_0x4c = uVar22;
            pFVar37->PackageFlags = uVar23;
            pFVar37->FirstExportDependency = iVar14;
            pFVar37->SerializationBeforeSerializationDependencies = iVar15;
            pFVar37->CreateBeforeSerializationDependencies = iVar21;
            pFVar37->SerializationBeforeCreateDependencies = iVar24;
            pFVar37->CreateBeforeCreateDependencies = iVar25;
            iVar38 = 0;
            if (1 < iVar31) {
              do {
                iVar35 = iVar38 * 2;
                iVar30 = iVar35 + 1;
                if (iVar35 + 2 < iVar31) {
                  bVar29 = `FObjectExportSortHelper::SortExports'::__l2::<lambda_1>::operator()
                                     (&local_res20,param_1 + (iVar35 + 2),param_1 + iVar30);
                  if (bVar29) {
                    iVar30 = iVar35;
                  }
                  iVar30 = iVar30 + 1;
                }
                pFVar34 = param_1 + iVar30;
                pFVar33 = param_1 + iVar38;
                bVar29 = `FObjectExportSortHelper::SortExports'::__l2::<lambda_1>::operator()
                                   (&local_res20,pFVar33,pFVar34);
                if (!bVar29) break;
                iVar38 = pFVar34->_padding_;
                FVar9.Index = (pFVar34->ClassIndex).Index;
                iVar25 = pFVar33->SerializationBeforeCreateDependencies;
                iVar26 = pFVar33->CreateBeforeCreateDependencies;
                lVar8 = pFVar33->_padding_;
                iVar13 = pFVar33->_padding_;
                FVar16.Index = (pFVar33->ClassIndex).Index;
                FVar17.Index = (pFVar33->ThisIndex).Index;
                FVar18.Index = (pFVar33->SuperIndex).Index;
                FVar19.Index = (pFVar33->TemplateIndex).Index;
                EVar20 = pFVar33->ObjectFlags;
                lVar2 = pFVar33->SerialSize;
                lVar3 = pFVar33->SerialOffset;
                lVar4 = pFVar33->ScriptSerializationStartOffset;
                lVar5 = pFVar33->ScriptSerializationEndOffset;
                pUVar6 = pFVar33->Object;
                iVar14 = pFVar33->HashNext;
                uVar22 = *(undefined4 *)&pFVar33->field_0x4c;
                uVar23 = pFVar33->PackageFlags;
                iVar15 = pFVar33->FirstExportDependency;
                iVar21 = pFVar33->SerializationBeforeSerializationDependencies;
                iVar24 = pFVar33->CreateBeforeSerializationDependencies;
                pFVar33->_padding_ = pFVar34->_padding_;
                pFVar33->_padding_ = iVar38;
                pFVar33->ClassIndex = (FPackageIndex)FVar9.Index;
                FVar9.Index = (pFVar34->SuperIndex).Index;
                FVar10.Index = (pFVar34->TemplateIndex).Index;
                EVar11 = pFVar34->ObjectFlags;
                pFVar33->ThisIndex = (FPackageIndex)(pFVar34->ThisIndex).Index;
                pFVar33->SuperIndex = (FPackageIndex)FVar9.Index;
                pFVar33->TemplateIndex = (FPackageIndex)FVar10.Index;
                pFVar33->ObjectFlags = EVar11;
                lVar7 = pFVar34->SerialOffset;
                pFVar33->SerialSize = pFVar34->SerialSize;
                pFVar33->SerialOffset = lVar7;
                lVar7 = pFVar34->ScriptSerializationEndOffset;
                pFVar33->ScriptSerializationStartOffset = pFVar34->ScriptSerializationStartOffset;
                pFVar33->ScriptSerializationEndOffset = lVar7;
                iVar38 = pFVar34->HashNext;
                uVar12 = *(undefined4 *)&pFVar34->field_0x4c;
                pFVar33->Object = pFVar34->Object;
                pFVar33->HashNext = iVar38;
                *(undefined4 *)&pFVar33->field_0x4c = uVar12;
                iVar38 = pFVar34->FirstExportDependency;
                iVar35 = pFVar34->SerializationBeforeSerializationDependencies;
                iVar32 = pFVar34->CreateBeforeSerializationDependencies;
                pFVar33->PackageFlags = pFVar34->PackageFlags;
                pFVar33->FirstExportDependency = iVar38;
                pFVar33->SerializationBeforeSerializationDependencies = iVar35;
                pFVar33->CreateBeforeSerializationDependencies = iVar32;
                iVar38 = pFVar34->CreateBeforeCreateDependencies;
                pFVar33->SerializationBeforeCreateDependencies =
                     pFVar34->SerializationBeforeCreateDependencies;
                pFVar33->CreateBeforeCreateDependencies = iVar38;
                pFVar34->_padding_ = lVar8;
                pFVar34->_padding_ = iVar13;
                pFVar34->ClassIndex = (FPackageIndex)FVar16.Index;
                pFVar34->ThisIndex = (FPackageIndex)FVar17.Index;
                pFVar34->SuperIndex = (FPackageIndex)FVar18.Index;
                pFVar34->TemplateIndex = (FPackageIndex)FVar19.Index;
                pFVar34->ObjectFlags = EVar20;
                pFVar34->SerialSize = lVar2;
                pFVar34->SerialOffset = lVar3;
                pFVar34->ScriptSerializationStartOffset = lVar4;
                pFVar34->ScriptSerializationEndOffset = lVar5;
                pFVar34->Object = pUVar6;
                pFVar34->HashNext = iVar14;
                *(undefined4 *)&pFVar34->field_0x4c = uVar22;
                pFVar34->PackageFlags = uVar23;
                pFVar34->FirstExportDependency = iVar15;
                pFVar34->SerializationBeforeSerializationDependencies = iVar21;
                pFVar34->CreateBeforeSerializationDependencies = iVar24;
                pFVar34->SerializationBeforeCreateDependencies = iVar25;
                pFVar34->CreateBeforeCreateDependencies = iVar26;
                iVar38 = iVar30;
              } while (iVar30 * 2 + 1 < iVar31);
            }
            iVar31 = iVar31 + -1;
            lVar36 = lVar36 + -1;
            pFVar37 = pFVar37 + -1;
          } while (0 < lVar36);
        }
        return;
      }
      iVar30 = iVar35 + -1;
      iVar31 = iVar38 + -2;
      iVar38 = iVar31;
      iVar35 = iVar30;
    }
    iVar31 = iVar30 * 2;
    iVar32 = iVar31 + 1;
    if (iVar31 + 2 < param_2) {
      bVar29 = `FObjectExportSortHelper::SortExports'::__l2::<lambda_1>::operator()
                         (&local_res20,param_1 + (iVar31 + 2),param_1 + iVar32);
      if (bVar29) {
        iVar32 = iVar31;
      }
      iVar32 = iVar32 + 1;
    }
    pFVar33 = param_1 + iVar32;
    pFVar37 = param_1 + iVar30;
    bVar29 = `FObjectExportSortHelper::SortExports'::__l2::<lambda_1>::operator()
                       (&local_res20,pFVar37,pFVar33);
    if (!bVar29) goto LAB_1421f836d;
    iVar30 = pFVar33->_padding_;
    FVar9.Index = (pFVar33->ClassIndex).Index;
    iVar31 = iVar32 * 2 + 1;
    iVar27 = pFVar37->SerializationBeforeCreateDependencies;
    iVar28 = pFVar37->CreateBeforeCreateDependencies;
    lVar36 = pFVar37->_padding_;
    iVar15 = pFVar37->_padding_;
    FVar16.Index = (pFVar37->ClassIndex).Index;
    FVar17.Index = (pFVar37->ThisIndex).Index;
    FVar18.Index = (pFVar37->SuperIndex).Index;
    FVar19.Index = (pFVar37->TemplateIndex).Index;
    EVar20 = pFVar37->ObjectFlags;
    lVar2 = pFVar37->SerialSize;
    lVar3 = pFVar37->SerialOffset;
    lVar4 = pFVar37->ScriptSerializationStartOffset;
    lVar5 = pFVar37->ScriptSerializationEndOffset;
    pUVar6 = pFVar37->Object;
    iVar21 = pFVar37->HashNext;
    uVar22 = *(undefined4 *)&pFVar37->field_0x4c;
    uVar23 = pFVar37->PackageFlags;
    iVar24 = pFVar37->FirstExportDependency;
    iVar25 = pFVar37->SerializationBeforeSerializationDependencies;
    iVar26 = pFVar37->CreateBeforeSerializationDependencies;
    pFVar37->_padding_ = pFVar33->_padding_;
    pFVar37->_padding_ = iVar30;
    pFVar37->ClassIndex = (FPackageIndex)FVar9.Index;
    FVar9.Index = (pFVar33->SuperIndex).Index;
    FVar10.Index = (pFVar33->TemplateIndex).Index;
    EVar11 = pFVar33->ObjectFlags;
    pFVar37->ThisIndex = (FPackageIndex)(pFVar33->ThisIndex).Index;
    pFVar37->SuperIndex = (FPackageIndex)FVar9.Index;
    pFVar37->TemplateIndex = (FPackageIndex)FVar10.Index;
    pFVar37->ObjectFlags = EVar11;
    lVar7 = pFVar33->SerialOffset;
    pFVar37->SerialSize = pFVar33->SerialSize;
    pFVar37->SerialOffset = lVar7;
    lVar7 = pFVar33->ScriptSerializationEndOffset;
    pFVar37->ScriptSerializationStartOffset = pFVar33->ScriptSerializationStartOffset;
    pFVar37->ScriptSerializationEndOffset = lVar7;
    iVar30 = pFVar33->HashNext;
    uVar12 = *(undefined4 *)&pFVar33->field_0x4c;
    pFVar37->Object = pFVar33->Object;
    pFVar37->HashNext = iVar30;
    *(undefined4 *)&pFVar37->field_0x4c = uVar12;
    iVar30 = pFVar33->FirstExportDependency;
    iVar13 = pFVar33->SerializationBeforeSerializationDependencies;
    iVar14 = pFVar33->CreateBeforeSerializationDependencies;
    pFVar37->PackageFlags = pFVar33->PackageFlags;
    pFVar37->FirstExportDependency = iVar30;
    pFVar37->SerializationBeforeSerializationDependencies = iVar13;
    pFVar37->CreateBeforeSerializationDependencies = iVar14;
    iVar30 = pFVar33->CreateBeforeCreateDependencies;
    pFVar37->SerializationBeforeCreateDependencies = pFVar33->SerializationBeforeCreateDependencies;
    pFVar37->CreateBeforeCreateDependencies = iVar30;
    pFVar33->_padding_ = lVar36;
    pFVar33->_padding_ = iVar15;
    pFVar33->ClassIndex = (FPackageIndex)FVar16.Index;
    pFVar33->ThisIndex = (FPackageIndex)FVar17.Index;
    pFVar33->SuperIndex = (FPackageIndex)FVar18.Index;
    pFVar33->TemplateIndex = (FPackageIndex)FVar19.Index;
    pFVar33->ObjectFlags = EVar20;
    pFVar33->SerialSize = lVar2;
    pFVar33->SerialOffset = lVar3;
    pFVar33->ScriptSerializationStartOffset = lVar4;
    pFVar33->ScriptSerializationEndOffset = lVar5;
    pFVar33->Object = pUVar6;
    pFVar33->HashNext = iVar21;
    *(undefined4 *)&pFVar33->field_0x4c = uVar22;
    pFVar33->PackageFlags = uVar23;
    pFVar33->FirstExportDependency = iVar24;
    pFVar33->SerializationBeforeSerializationDependencies = iVar25;
    pFVar33->CreateBeforeSerializationDependencies = iVar26;
    pFVar33->SerializationBeforeCreateDependencies = iVar27;
    pFVar33->CreateBeforeCreateDependencies = iVar28;
    iVar30 = iVar32;
  } while( true );
}

// HeapSortInternal<FObjectImport,int,FIdentityFunctor,`FObjectImportSortHelper::SortImports'::__l2::<lambda_1>_> @ 1421f8580

void __cdecl
AlgoImpl::
HeapSortInternal<FObjectImport,int,FIdentityFunctor,_FObjectImportSortHelper::SortImports_::__l2::<lambda_1>_>
          (FObjectImport *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  FLinkerLoad *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  UObject *pUVar5;
  undefined8 uVar6;
  UObject *pUVar7;
  longlong lVar8;
  FNameEntryId FVar9;
  bool bVar10;
  bool bVar11;
  undefined4 uVar12;
  int iVar13;
  FNameEntryId FVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  undefined4 uVar19;
  bool bVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  FObjectImport *pFVar25;
  FObjectImport *pFVar26;
  longlong lVar27;
  FObjectImport *pFVar28;
  int iVar29;
  TMap<TObjectPtr<UObject>,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,FString,0>_>
  *local_res20;
  
  local_res20 = param_4.ObjectToFullNameMap;
  if (param_2 < 0) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar20) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar20) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar21 = (param_2 + -2) / 2;
  iVar22 = iVar21 * 2 + 1;
  iVar24 = iVar22;
  iVar29 = iVar21;
  do {
    while (param_2 <= iVar22) {
LAB_1421f86e1:
      if (iVar29 == 0) {
        iVar22 = param_2 + -1;
        lVar27 = (longlong)iVar22;
        if (0 < iVar22) {
          pFVar28 = param_1 + lVar27;
          do {
            iVar24 = pFVar28->_padding_;
            FVar9.Value = (pFVar28->ClassPackage).ComparisonIndex.Value;
            iVar29 = 0;
            pFVar1 = param_1->SourceLinker;
            lVar8 = param_1->_padding_;
            iVar21 = param_1->_padding_;
            FVar14.Value = (param_1->ClassPackage).ComparisonIndex.Value;
            uVar3 = *(undefined8 *)&(param_1->ClassPackage).Number;
            uVar4 = *(undefined8 *)&(param_1->ClassName).Number;
            bVar15 = param_1->bImportOptional;
            bVar16 = param_1->bImportPackageHandled;
            bVar17 = param_1->bImportSearchedFor;
            bVar18 = param_1->bImportFailed;
            uVar19 = *(undefined4 *)&param_1->field_0x24;
            pUVar5 = param_1->XObject;
            param_1->_padding_ = pFVar28->_padding_;
            param_1->_padding_ = iVar24;
            (param_1->ClassPackage).ComparisonIndex = (FNameEntryId)FVar9.Value;
            uVar6 = *(undefined8 *)&(pFVar28->ClassName).Number;
            *(undefined8 *)&(param_1->ClassPackage).Number =
                 *(undefined8 *)&(pFVar28->ClassPackage).Number;
            *(undefined8 *)&(param_1->ClassName).Number = uVar6;
            bVar20 = pFVar28->bImportPackageHandled;
            bVar10 = pFVar28->bImportSearchedFor;
            bVar11 = pFVar28->bImportFailed;
            uVar12 = *(undefined4 *)&pFVar28->field_0x24;
            pUVar7 = pFVar28->XObject;
            param_1->bImportOptional = pFVar28->bImportOptional;
            param_1->bImportPackageHandled = bVar20;
            param_1->bImportSearchedFor = bVar10;
            param_1->bImportFailed = bVar11;
            *(undefined4 *)&param_1->field_0x24 = uVar12;
            param_1->XObject = pUVar7;
            param_1->SourceLinker = pFVar28->SourceLinker;
            pFVar28->_padding_ = lVar8;
            pFVar28->_padding_ = iVar21;
            (pFVar28->ClassPackage).ComparisonIndex = (FNameEntryId)FVar14.Value;
            *(undefined8 *)&(pFVar28->ClassPackage).Number = uVar3;
            *(undefined8 *)&(pFVar28->ClassName).Number = uVar4;
            pFVar28->bImportOptional = bVar15;
            pFVar28->bImportPackageHandled = bVar16;
            pFVar28->bImportSearchedFor = bVar17;
            pFVar28->bImportFailed = bVar18;
            *(undefined4 *)&pFVar28->field_0x24 = uVar19;
            pFVar28->XObject = pUVar5;
            pFVar28->SourceLinker = pFVar1;
            if (1 < iVar22) {
              do {
                iVar21 = iVar29 * 2;
                iVar24 = iVar21 + 1;
                if (iVar21 + 2 < iVar22) {
                  bVar20 = `FObjectImportSortHelper::SortImports'::__l2::<lambda_1>::operator()
                                     (&local_res20,param_1 + (iVar21 + 2),param_1 + iVar24);
                  if (bVar20) {
                    iVar24 = iVar21;
                  }
                  iVar24 = iVar24 + 1;
                }
                pFVar26 = param_1 + iVar24;
                pFVar25 = param_1 + iVar29;
                bVar20 = `FObjectImportSortHelper::SortImports'::__l2::<lambda_1>::operator()
                                   (&local_res20,pFVar25,pFVar26);
                if (!bVar20) break;
                iVar21 = pFVar26->_padding_;
                FVar9.Value = (pFVar26->ClassPackage).ComparisonIndex.Value;
                pFVar1 = pFVar25->SourceLinker;
                lVar8 = pFVar25->_padding_;
                iVar29 = pFVar25->_padding_;
                FVar14.Value = (pFVar25->ClassPackage).ComparisonIndex.Value;
                uVar3 = *(undefined8 *)&(pFVar25->ClassPackage).Number;
                uVar4 = *(undefined8 *)&(pFVar25->ClassName).Number;
                bVar15 = pFVar25->bImportOptional;
                bVar16 = pFVar25->bImportPackageHandled;
                bVar17 = pFVar25->bImportSearchedFor;
                bVar18 = pFVar25->bImportFailed;
                uVar19 = *(undefined4 *)&pFVar25->field_0x24;
                pUVar5 = pFVar25->XObject;
                pFVar25->_padding_ = pFVar26->_padding_;
                pFVar25->_padding_ = iVar21;
                (pFVar25->ClassPackage).ComparisonIndex = (FNameEntryId)FVar9.Value;
                uVar6 = *(undefined8 *)&(pFVar26->ClassName).Number;
                *(undefined8 *)&(pFVar25->ClassPackage).Number =
                     *(undefined8 *)&(pFVar26->ClassPackage).Number;
                *(undefined8 *)&(pFVar25->ClassName).Number = uVar6;
                bVar20 = pFVar26->bImportPackageHandled;
                bVar10 = pFVar26->bImportSearchedFor;
                bVar11 = pFVar26->bImportFailed;
                uVar12 = *(undefined4 *)&pFVar26->field_0x24;
                pUVar7 = pFVar26->XObject;
                pFVar25->bImportOptional = pFVar26->bImportOptional;
                pFVar25->bImportPackageHandled = bVar20;
                pFVar25->bImportSearchedFor = bVar10;
                pFVar25->bImportFailed = bVar11;
                *(undefined4 *)&pFVar25->field_0x24 = uVar12;
                pFVar25->XObject = pUVar7;
                pFVar25->SourceLinker = pFVar26->SourceLinker;
                pFVar26->_padding_ = lVar8;
                pFVar26->_padding_ = iVar29;
                (pFVar26->ClassPackage).ComparisonIndex = (FNameEntryId)FVar14.Value;
                *(undefined8 *)&(pFVar26->ClassPackage).Number = uVar3;
                *(undefined8 *)&(pFVar26->ClassName).Number = uVar4;
                pFVar26->bImportOptional = bVar15;
                pFVar26->bImportPackageHandled = bVar16;
                pFVar26->bImportSearchedFor = bVar17;
                pFVar26->bImportFailed = bVar18;
                *(undefined4 *)&pFVar26->field_0x24 = uVar19;
                pFVar26->XObject = pUVar5;
                pFVar26->SourceLinker = pFVar1;
                iVar29 = iVar24;
              } while (iVar24 * 2 + 1 < iVar22);
            }
            iVar22 = iVar22 + -1;
            lVar27 = lVar27 + -1;
            pFVar28 = pFVar28 + -1;
          } while (0 < lVar27);
        }
        return;
      }
      iVar21 = iVar29 + -1;
      iVar22 = iVar24 + -2;
      iVar24 = iVar22;
      iVar29 = iVar21;
    }
    iVar22 = iVar21 * 2;
    iVar23 = iVar22 + 1;
    if (iVar22 + 2 < param_2) {
      bVar20 = `FObjectImportSortHelper::SortImports'::__l2::<lambda_1>::operator()
                         (&local_res20,param_1 + (iVar22 + 2),param_1 + iVar23);
      if (bVar20) {
        iVar23 = iVar22;
      }
      iVar23 = iVar23 + 1;
    }
    pFVar25 = param_1 + iVar23;
    pFVar28 = param_1 + iVar21;
    bVar20 = `FObjectImportSortHelper::SortImports'::__l2::<lambda_1>::operator()
                       (&local_res20,pFVar28,pFVar25);
    if (!bVar20) goto LAB_1421f86e1;
    iVar21 = pFVar25->_padding_;
    FVar9.Value = (pFVar25->ClassPackage).ComparisonIndex.Value;
    iVar22 = iVar23 * 2 + 1;
    pFVar1 = pFVar28->SourceLinker;
    lVar27 = pFVar28->_padding_;
    iVar13 = pFVar28->_padding_;
    FVar14.Value = (pFVar28->ClassPackage).ComparisonIndex.Value;
    uVar3 = *(undefined8 *)&(pFVar28->ClassPackage).Number;
    uVar4 = *(undefined8 *)&(pFVar28->ClassName).Number;
    bVar15 = pFVar28->bImportOptional;
    bVar16 = pFVar28->bImportPackageHandled;
    bVar17 = pFVar28->bImportSearchedFor;
    bVar18 = pFVar28->bImportFailed;
    uVar19 = *(undefined4 *)&pFVar28->field_0x24;
    pUVar5 = pFVar28->XObject;
    pFVar28->_padding_ = pFVar25->_padding_;
    pFVar28->_padding_ = iVar21;
    (pFVar28->ClassPackage).ComparisonIndex = (FNameEntryId)FVar9.Value;
    uVar6 = *(undefined8 *)&(pFVar25->ClassName).Number;
    *(undefined8 *)&(pFVar28->ClassPackage).Number = *(undefined8 *)&(pFVar25->ClassPackage).Number;
    *(undefined8 *)&(pFVar28->ClassName).Number = uVar6;
    bVar20 = pFVar25->bImportPackageHandled;
    bVar10 = pFVar25->bImportSearchedFor;
    bVar11 = pFVar25->bImportFailed;
    uVar12 = *(undefined4 *)&pFVar25->field_0x24;
    pUVar7 = pFVar25->XObject;
    pFVar28->bImportOptional = pFVar25->bImportOptional;
    pFVar28->bImportPackageHandled = bVar20;
    pFVar28->bImportSearchedFor = bVar10;
    pFVar28->bImportFailed = bVar11;
    *(undefined4 *)&pFVar28->field_0x24 = uVar12;
    pFVar28->XObject = pUVar7;
    pFVar28->SourceLinker = pFVar25->SourceLinker;
    pFVar25->_padding_ = lVar27;
    pFVar25->_padding_ = iVar13;
    (pFVar25->ClassPackage).ComparisonIndex = (FNameEntryId)FVar14.Value;
    *(undefined8 *)&(pFVar25->ClassPackage).Number = uVar3;
    *(undefined8 *)&(pFVar25->ClassName).Number = uVar4;
    pFVar25->bImportOptional = bVar15;
    pFVar25->bImportPackageHandled = bVar16;
    pFVar25->bImportSearchedFor = bVar17;
    pFVar25->bImportFailed = bVar18;
    *(undefined4 *)&pFVar25->field_0x24 = uVar19;
    pFVar25->XObject = pUVar5;
    pFVar25->SourceLinker = pFVar1;
    iVar21 = iVar23;
  } while( true );
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,UObject::FAssetRegistryTag>,TDefaultMapHashableKeyFuncs<FName,UObject::FAssetRegistryTag,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,UObject::FAssetRegistryTag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObject::FAssetRegistryTag,0>_>::FKeyComparisonClass<FNameLexicalLess>_>_>_> @ 1421f8860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,UObject::FAssetRegistryTag>,TDefaultMapHashableKeyFuncs<FName,UObject::FAssetRegistryTag,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,UObject::FAssetRegistryTag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObject::FAssetRegistryTag,0>_>::FKeyComparisonClass<FNameLexicalLess>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<FName,UObject::FAssetRegistryTag>,TDefaultMapHashableKeyFuncs<FName,UObject::FAssetRegistryTag,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,UObject::FAssetRegistryTag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObject::FAssetRegistryTag,0>_>::FKeyComparisonClass<FNameLexicalLess>_>_>
          param_4)

{
  undefined8 uVar1;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>_s_1 TVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  FName FVar8;
  FName FVar9;
  FName FVar10;
  FName FVar11;
  FName FVar12;
  FName FVar13;
  FNameEntryId FVar14;
  uint uVar15;
  FNameEntryId FVar16;
  uint uVar17;
  longlong lVar18;
  int iVar19;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_> *pTVar20;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_> *pTVar21;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_> *pTVar22;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_> **ppTVar23;
  int iVar24;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_> *this;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_> *pTVar25;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_> *pTVar26;
  float fVar27;
  undefined1 auStack_388 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_> *local_358;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_> *local_348;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_> *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
  if (1 < param_2) {
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar27 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar27;
    memset(local_330,0,0x2e8);
    ppTVar23 = &local_348;
    do {
      pTVar26 = ppTVar23[1];
      pTVar25 = *ppTVar23;
      local_358 = ppTVar23[2];
      iVar19 = (int)(((longlong)pTVar26 - (longlong)pTVar25) / 0x30) + 1;
      this = pTVar25;
      iVar24 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_1421f8940:
        if (8 < iVar19) {
          uVar1 = *(undefined8 *)((this->ElementData).Pad + 8);
          pTVar20 = pTVar26 + 1;
          pTVar25 = this + iVar19 / 2;
          TVar2 = pTVar25->_s_1;
          uVar3 = *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 8);
          uVar4 = *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x10);
          uVar5 = *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x18);
          uVar6 = *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x20);
          uVar7 = *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x28);
          pTVar25->_s_1 = this->_s_1;
          *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 8) = uVar1;
          uVar1 = *(undefined8 *)((this->ElementData).Pad + 0x18);
          *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x10) =
               *(undefined8 *)((this->ElementData).Pad + 0x10);
          *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x18) = uVar1;
          uVar1 = *(undefined8 *)((this->ElementData).Pad + 0x28);
          *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x20) =
               *(undefined8 *)((this->ElementData).Pad + 0x20);
          *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x28) = uVar1;
          this->_s_1 = TVar2;
          *(undefined8 *)((this->ElementData).Pad + 8) = uVar3;
          *(undefined8 *)((this->ElementData).Pad + 0x10) = uVar4;
          *(undefined8 *)((this->ElementData).Pad + 0x18) = uVar5;
          *(undefined8 *)((this->ElementData).Pad + 0x20) = uVar6;
          *(undefined8 *)((this->ElementData).Pad + 0x28) = uVar7;
          pTVar25 = this;
LAB_1421f8997:
          pTVar22 = pTVar25;
          pTVar25 = pTVar22 + 1;
          if (pTVar25 <= pTVar26) goto code_r0x0001421f89a0;
          goto LAB_1421f89b2;
        }
        for (; pTVar20 = this, pTVar25 = this, this < pTVar26; pTVar26 = pTVar26 + -1) {
          while (pTVar22 = pTVar20, pTVar25 = pTVar25 + 1, pTVar25 <= pTVar26) {
            iVar24 = ::FName::Compare((FName *)&pTVar22->ElementData,(FName *)&pTVar25->ElementData)
            ;
            pTVar20 = pTVar25;
            if (-1 < iVar24) {
              pTVar20 = pTVar22;
            }
          }
          FVar14.Value = *(int *)pTVar22;
          uVar15 = *(int *)((longlong)pTVar22 + 4);
          uVar1 = *(undefined8 *)((FNameEntryId *)(pTVar22->ElementData).Pad + 2);
          uVar3 = *(undefined8 *)((FNameEntryId *)(pTVar22->ElementData).Pad + 4);
          uVar4 = *(undefined8 *)((FNameEntryId *)(pTVar22->ElementData).Pad + 6);
          uVar5 = *(undefined8 *)((FNameEntryId *)(pTVar22->ElementData).Pad + 8);
          uVar6 = *(undefined8 *)((FNameEntryId *)(pTVar22->ElementData).Pad + 10);
          FVar16.Value = *(int *)pTVar26;
          uVar17 = *(int *)((longlong)pTVar26 + 4);
          uVar7 = *(undefined8 *)((FNameEntryId *)(pTVar26->ElementData).Pad + 2);
          *(int *)pTVar22 = FVar16.Value;
          *(uint *)((longlong)pTVar22 + 4) = uVar17;
          *(undefined8 *)((FNameEntryId *)(pTVar22->ElementData).Pad + 2) = uVar7;
          uVar7 = *(undefined8 *)((FNameEntryId *)(pTVar26->ElementData).Pad + 6);
          *(undefined8 *)((FNameEntryId *)(pTVar22->ElementData).Pad + 4) =
               *(undefined8 *)((FNameEntryId *)(pTVar26->ElementData).Pad + 4);
          *(undefined8 *)((FNameEntryId *)(pTVar22->ElementData).Pad + 6) = uVar7;
          uVar7 = *(undefined8 *)((FNameEntryId *)(pTVar26->ElementData).Pad + 10);
          *(undefined8 *)((FNameEntryId *)(pTVar22->ElementData).Pad + 8) =
               *(undefined8 *)((FNameEntryId *)(pTVar26->ElementData).Pad + 8);
          *(undefined8 *)((FNameEntryId *)(pTVar22->ElementData).Pad + 10) = uVar7;
          *(int *)pTVar26 = FVar14.Value;
          *(uint *)((longlong)pTVar26 + 4) = uVar15;
          *(undefined8 *)((FNameEntryId *)(pTVar26->ElementData).Pad + 2) = uVar1;
          *(undefined8 *)((FNameEntryId *)(pTVar26->ElementData).Pad + 4) = uVar3;
          *(undefined8 *)((FNameEntryId *)(pTVar26->ElementData).Pad + 6) = uVar4;
          *(undefined8 *)((FNameEntryId *)(pTVar26->ElementData).Pad + 8) = uVar5;
          *(undefined8 *)((FNameEntryId *)(pTVar26->ElementData).Pad + 10) = uVar6;
        }
        goto LAB_1421f8b0a;
      }
LAB_1421f8af1:
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,UObject::FAssetRegistryTag>,TDefaultMapHashableKeyFuncs<FName,UObject::FAssetRegistryTag,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,UObject::FAssetRegistryTag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObject::FAssetRegistryTag,0>_>::FKeyComparisonClass<FNameLexicalLess>_>_>_>
                (pTVar25,iVar19,param_3,param_4);
LAB_1421f8b0a:
      ppTVar23 = ppTVar23 + -3;
    } while (&local_348 <= ppTVar23);
  }
  return;
code_r0x0001421f89a0:
  iVar19 = ::FName::Compare((FName *)&this->ElementData,(FName *)&pTVar25->ElementData);
  if (-1 < iVar19) goto LAB_1421f8997;
LAB_1421f89b2:
  do {
    pTVar21 = pTVar20;
    pTVar20 = pTVar21 + -1;
    if (pTVar20 <= this) break;
    iVar19 = ::FName::Compare((FName *)&pTVar20->ElementData,(FName *)&this->ElementData);
  } while (-1 < iVar19);
  FVar8 = *(FName *)((longlong)pTVar21 + -0x28);
  if (pTVar25 <= pTVar20) {
    TVar2 = pTVar25->_s_1;
    FVar9 = *(FName *)((longlong)pTVar22 + 0x38);
    FVar10 = *(FName *)((longlong)pTVar22 + 0x40);
    FVar11 = *(FName *)((longlong)pTVar22 + 0x48);
    FVar12 = *(FName *)((longlong)pTVar22 + 0x50);
    FVar13 = *(FName *)((longlong)pTVar22 + 0x58);
    pTVar25->_s_1 = pTVar20->_s_1;
    *(FName *)((longlong)pTVar22 + 0x38) = FVar8;
    FVar8 = *(FName *)((longlong)pTVar21 + -0x18);
    *(FName *)((longlong)pTVar22 + 0x40) = *(FName *)((longlong)pTVar21 + -0x20);
    *(FName *)((longlong)pTVar22 + 0x48) = FVar8;
    FVar8 = *(FName *)((longlong)pTVar21 + -8);
    *(FName *)((longlong)pTVar22 + 0x50) = *(FName *)((longlong)pTVar21 + -0x10);
    *(FName *)((longlong)pTVar22 + 0x58) = FVar8;
    pTVar20->_s_1 = TVar2;
    *(FName *)((longlong)pTVar21 + -0x28) = FVar9;
    *(FName *)((longlong)pTVar21 + -0x20) = FVar10;
    *(FName *)((longlong)pTVar21 + -0x18) = FVar11;
    *(FName *)((longlong)pTVar21 + -0x10) = FVar12;
    *(FName *)((longlong)pTVar21 + -8) = FVar13;
    goto LAB_1421f8997;
  }
  TVar2 = this->_s_1;
  FVar9 = *(FName *)((this->ElementData).Pad + 8);
  FVar10 = *(FName *)((this->ElementData).Pad + 0x10);
  FVar11 = *(FName *)((this->ElementData).Pad + 0x18);
  FVar12 = *(FName *)((this->ElementData).Pad + 0x20);
  FVar13 = *(FName *)((this->ElementData).Pad + 0x28);
  lVar18 = (longlong)pTVar20 + (-0x30 - (longlong)this);
  iVar24 = iVar24 + -1;
  lVar18 = lVar18 / 6 + (lVar18 >> 0x3f);
  this->_s_1 = pTVar20->_s_1;
  *(FName *)((this->ElementData).Pad + 8) = FVar8;
  FVar8 = *(FName *)((longlong)pTVar21 + -0x18);
  *(FName *)((this->ElementData).Pad + 0x10) = *(FName *)((longlong)pTVar21 + -0x20);
  *(FName *)((this->ElementData).Pad + 0x18) = FVar8;
  FVar8 = *(FName *)((longlong)pTVar21 + -8);
  *(FName *)((this->ElementData).Pad + 0x20) = *(FName *)((longlong)pTVar21 + -0x10);
  *(FName *)((this->ElementData).Pad + 0x28) = FVar8;
  pTVar20->_s_1 = TVar2;
  *(FName *)((longlong)pTVar21 + -0x28) = FVar9;
  *(FName *)((longlong)pTVar21 + -0x20) = FVar10;
  *(FName *)((longlong)pTVar21 + -0x18) = FVar11;
  *(FName *)((longlong)pTVar21 + -0x10) = FVar12;
  *(FName *)((longlong)pTVar21 + -8) = FVar13;
  if ((lVar18 >> 3) - (lVar18 >> 0x3f) < ((longlong)pTVar26 - (longlong)pTVar25) / 0x30) {
    if (pTVar25 < pTVar26) {
      *ppTVar23 = pTVar25;
      ppTVar23[1] = pTVar26;
      *(int *)(ppTVar23 + 2) = iVar24;
      ppTVar23 = ppTVar23 + 3;
    }
    if (pTVar20 <= this + 1) goto LAB_1421f8b0a;
    pTVar26 = pTVar21 + -2;
    pTVar25 = this;
  }
  else {
    if (this + 1 < pTVar20) {
      *ppTVar23 = this;
      ppTVar23[1] = pTVar21 + -2;
      *(int *)(ppTVar23 + 2) = iVar24;
      ppTVar23 = ppTVar23 + 3;
    }
    if (pTVar26 <= pTVar25) goto LAB_1421f8b0a;
  }
  iVar19 = (int)(((longlong)pTVar26 - (longlong)pTVar25) / 0x30) + 1;
  this = pTVar25;
  if (iVar24 == 0) goto LAB_1421f8af1;
  goto LAB_1421f8940;
}

// IntroSortInternal<FScriptStackTracker::FCallStack,int,FIdentityFunctor,TDereferenceWrapper<FScriptStackTracker::FCallStack,`FScriptStackTracker::DumpStackTraces'::__l2::FCompareStackCount>_> @ 1421f8bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FScriptStackTracker::FCallStack,int,FIdentityFunctor,TDereferenceWrapper<FScriptStackTracker::FCallStack,_FScriptStackTracker::DumpStackTraces_::__l2::FCompareStackCount>_>
          (FCallStack *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FScriptStackTracker::FCallStack,_public:_void___cdecl_FScriptStackTracker::DumpStackTraces(int,FOutputDevice_&)_::_2_::FCompareStackCount>
          param_4)

{
  FCallStack *pFVar1;
  FScriptContainerElement *pFVar2;
  long64 lVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  FCallStack *pFVar10;
  FCallStack *pFVar11;
  FCallStack *pFVar12;
  FCallStack *pFVar13;
  FCallStack *pFVar14;
  FCallStack *pFVar15;
  FCallStack **ppFVar16;
  float fVar17;
  undefined1 auStack_378 [48];
  FCallStack *local_348;
  FCallStack *local_338;
  FCallStack *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar17 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar17;
    memset(local_320,0,0x2e8);
    ppFVar16 = &local_338;
    do {
      pFVar10 = ppFVar16[1];
      pFVar15 = *ppFVar16;
      pFVar1 = ppFVar16[2];
      local_348._0_4_ = (int)pFVar1;
      iVar9 = (int)(((longlong)pFVar10 - (longlong)pFVar15) / 0x18) + 1;
      pFVar14 = pFVar15;
      if ((int)local_348 != 0) {
LAB_1421f8cc0:
        if (8 < iVar9) {
          pFVar2 = (pFVar14->StackTrace).Data.AllocatorInstance.Data;
          pFVar12 = pFVar10 + 1;
          iVar9 = iVar9 / 2;
          lVar3 = pFVar14[iVar9].StackCount;
          pFVar4 = pFVar14[iVar9].StackTrace.Data.AllocatorInstance.Data;
          iVar6 = pFVar14[iVar9].StackTrace.Data.ArrayNum;
          iVar7 = pFVar14[iVar9].StackTrace.Data.ArrayMax;
          pFVar14[iVar9].StackCount = pFVar14->StackCount;
          pFVar14[iVar9].StackTrace.Data.AllocatorInstance.Data = pFVar2;
          iVar5 = (pFVar14->StackTrace).Data.ArrayMax;
          pFVar14[iVar9].StackTrace.Data.ArrayNum = (pFVar14->StackTrace).Data.ArrayNum;
          pFVar14[iVar9].StackTrace.Data.ArrayMax = iVar5;
          pFVar14->StackCount = lVar3;
          (pFVar14->StackTrace).Data.AllocatorInstance.Data = pFVar4;
          (pFVar14->StackTrace).Data.ArrayNum = iVar6;
          (pFVar14->StackTrace).Data.ArrayMax = iVar7;
          pFVar15 = pFVar14;
LAB_1421f8d10:
          pFVar11 = pFVar15;
          pFVar15 = pFVar11 + 1;
          if (pFVar15 <= pFVar10) goto code_r0x0001421f8d19;
          goto LAB_1421f8d21;
        }
        for (; pFVar15 = pFVar14, pFVar1 = pFVar14, pFVar14 < pFVar10; pFVar10 = pFVar10 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar10) {
            if (pFVar1->StackCount < pFVar15->StackCount) {
              pFVar15 = pFVar1;
            }
          }
          lVar3 = pFVar15->StackCount;
          pFVar2 = (pFVar15->StackTrace).Data.AllocatorInstance.Data;
          iVar5 = (pFVar15->StackTrace).Data.ArrayNum;
          iVar6 = (pFVar15->StackTrace).Data.ArrayMax;
          pFVar4 = (pFVar10->StackTrace).Data.AllocatorInstance.Data;
          pFVar15->StackCount = pFVar10->StackCount;
          (pFVar15->StackTrace).Data.AllocatorInstance.Data = pFVar4;
          iVar9 = (pFVar10->StackTrace).Data.ArrayMax;
          (pFVar15->StackTrace).Data.ArrayNum = (pFVar10->StackTrace).Data.ArrayNum;
          (pFVar15->StackTrace).Data.ArrayMax = iVar9;
          pFVar10->StackCount = lVar3;
          (pFVar10->StackTrace).Data.AllocatorInstance.Data = pFVar2;
          (pFVar10->StackTrace).Data.ArrayNum = iVar5;
          (pFVar10->StackTrace).Data.ArrayMax = iVar6;
        }
        goto LAB_1421f8e41;
      }
LAB_1421f8e32:
      local_348 = pFVar1;
      HeapSortInternal<FScriptStackTracker::FCallStack,int,FIdentityFunctor,TDereferenceWrapper<FScriptStackTracker::FCallStack,_FScriptStackTracker::DumpStackTraces_::__l2::FCompareStackCount>_>
                (pFVar15,iVar9,param_3,param_4);
LAB_1421f8e41:
      ppFVar16 = ppFVar16 + -3;
    } while (&local_338 <= ppFVar16);
  }
  return;
code_r0x0001421f8d19:
  if (pFVar14->StackCount <= pFVar15->StackCount) goto LAB_1421f8d10;
LAB_1421f8d21:
  do {
    pFVar13 = pFVar12;
    pFVar12 = pFVar13 + -1;
    if (pFVar12 <= pFVar14) break;
  } while (pFVar12->StackCount <= pFVar14->StackCount);
  pFVar2 = pFVar13[-1].StackTrace.Data.AllocatorInstance.Data;
  if (pFVar15 <= pFVar12) {
    lVar3 = pFVar15->StackCount;
    pFVar4 = pFVar11[1].StackTrace.Data.AllocatorInstance.Data;
    iVar5 = pFVar11[1].StackTrace.Data.ArrayNum;
    iVar6 = pFVar11[1].StackTrace.Data.ArrayMax;
    pFVar15->StackCount = pFVar12->StackCount;
    pFVar11[1].StackTrace.Data.AllocatorInstance.Data = pFVar2;
    iVar9 = pFVar13[-1].StackTrace.Data.ArrayMax;
    pFVar11[1].StackTrace.Data.ArrayNum = pFVar13[-1].StackTrace.Data.ArrayNum;
    pFVar11[1].StackTrace.Data.ArrayMax = iVar9;
    pFVar12->StackCount = lVar3;
    pFVar13[-1].StackTrace.Data.AllocatorInstance.Data = pFVar4;
    pFVar13[-1].StackTrace.Data.ArrayNum = iVar5;
    pFVar13[-1].StackTrace.Data.ArrayMax = iVar6;
    goto LAB_1421f8d10;
  }
  lVar3 = pFVar14->StackCount;
  pFVar4 = (pFVar14->StackTrace).Data.AllocatorInstance.Data;
  iVar5 = (pFVar14->StackTrace).Data.ArrayNum;
  iVar6 = (pFVar14->StackTrace).Data.ArrayMax;
  lVar8 = (longlong)pFVar12 + (-0x18 - (longlong)pFVar14);
  local_348._0_4_ = (int)local_348 + -1;
  lVar8 = lVar8 / 6 + (lVar8 >> 0x3f);
  pFVar14->StackCount = pFVar12->StackCount;
  (pFVar14->StackTrace).Data.AllocatorInstance.Data = pFVar2;
  iVar9 = pFVar13[-1].StackTrace.Data.ArrayMax;
  (pFVar14->StackTrace).Data.ArrayNum = pFVar13[-1].StackTrace.Data.ArrayNum;
  (pFVar14->StackTrace).Data.ArrayMax = iVar9;
  pFVar12->StackCount = lVar3;
  pFVar13[-1].StackTrace.Data.AllocatorInstance.Data = pFVar4;
  pFVar13[-1].StackTrace.Data.ArrayNum = iVar5;
  pFVar13[-1].StackTrace.Data.ArrayMax = iVar6;
  if ((lVar8 >> 2) - (lVar8 >> 0x3f) < ((longlong)pFVar10 - (longlong)pFVar15) / 0x18) {
    if (pFVar15 < pFVar10) {
      *ppFVar16 = pFVar15;
      ppFVar16[1] = pFVar10;
      *(int *)(ppFVar16 + 2) = (int)local_348;
      ppFVar16 = ppFVar16 + 3;
    }
    if (pFVar12 <= pFVar14 + 1) goto LAB_1421f8e41;
    pFVar10 = pFVar13 + -2;
    pFVar15 = pFVar14;
  }
  else {
    if (pFVar14 + 1 < pFVar12) {
      *ppFVar16 = pFVar14;
      ppFVar16[1] = pFVar13 + -2;
      *(int *)(ppFVar16 + 2) = (int)local_348;
      ppFVar16 = ppFVar16 + 3;
    }
    if (pFVar10 <= pFVar15) goto LAB_1421f8e41;
  }
  iVar9 = (int)(((longlong)pFVar10 - (longlong)pFVar15) / 0x18) + 1;
  pFVar14 = pFVar15;
  if ((int)local_348 == 0) goto LAB_1421f8e32;
  goto LAB_1421f8cc0;
}

// IntroSortInternal<FObjectExport,int,FIdentityFunctor,`FObjectExportSortHelper::SortExports'::__l2::<lambda_1>_> @ 1421f8f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FObjectExport,int,FIdentityFunctor,_FObjectExportSortHelper::SortExports_::__l2::<lambda_1>_>
          (FObjectExport *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  UObject *pUVar1;
  longlong lVar2;
  long64 lVar3;
  long64 lVar4;
  long64 lVar5;
  long64 lVar6;
  long64 lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  FPackageIndex FVar11;
  FPackageIndex FVar12;
  EObjectFlags EVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  FPackageIndex FVar17;
  FPackageIndex FVar18;
  FPackageIndex FVar19;
  FPackageIndex FVar20;
  EObjectFlags EVar21;
  int iVar22;
  undefined4 uVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  FString *pFVar30;
  FString *pFVar31;
  wchar_t *pwVar32;
  int iVar33;
  wchar_t *pwVar34;
  FObjectExport *pFVar35;
  FObjectExport *pFVar36;
  FObjectExport *pFVar37;
  FObjectExport *pFVar38;
  FObjectExport *pFVar39;
  FObjectExport *pFVar40;
  float fVar41;
  undefined1 auStack_3c8 [32];
  FIdentityFunctor local_3a8;
  FObjectExport **local_3a0;
  int local_398;
  FObjectExport *local_380;
  FObjectExport *local_378;
  FObjectExport *local_370;
  undefined4 local_368;
  undefined1 local_360 [744];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_3c8;
  if (1 < param_2) {
    local_370 = param_1 + (longlong)param_2 + -1;
    local_3a8 = param_3;
    local_378 = param_1;
    fVar41 = logf((float)param_2 * (float)param_2);
    local_368 = (undefined4)(longlong)fVar41;
    memset(local_360,0,0x2e8);
    local_3a0 = &local_378;
    do {
      pFVar38 = local_3a0[1];
      pFVar40 = *local_3a0;
      local_380 = local_3a0[2];
      iVar33 = (int)(((longlong)pFVar38 - (longlong)pFVar40) / 0x68) + 1;
      local_398 = (int)local_380;
      pFVar39 = pFVar40;
      if ((int)local_380 != 0) {
LAB_1421f8ff2:
        if (8 < iVar33) {
          iVar10 = pFVar39->_padding_;
          FVar11.Index = (pFVar39->ClassIndex).Index;
          pFVar36 = pFVar38 + 1;
          pFVar40 = pFVar39 + iVar33 / 2;
          lVar2 = pFVar40->_padding_;
          iVar16 = pFVar40->_padding_;
          FVar17.Index = (pFVar40->ClassIndex).Index;
          FVar18.Index = (pFVar40->ThisIndex).Index;
          FVar19.Index = (pFVar40->SuperIndex).Index;
          FVar20.Index = (pFVar40->TemplateIndex).Index;
          EVar21 = pFVar40->ObjectFlags;
          lVar3 = pFVar40->SerialSize;
          lVar4 = pFVar40->SerialOffset;
          lVar5 = pFVar40->ScriptSerializationStartOffset;
          lVar6 = pFVar40->ScriptSerializationEndOffset;
          pUVar1 = pFVar40->Object;
          iVar22 = pFVar40->HashNext;
          uVar23 = *(undefined4 *)&pFVar40->field_0x4c;
          uVar24 = pFVar40->PackageFlags;
          iVar25 = pFVar40->FirstExportDependency;
          iVar26 = pFVar40->SerializationBeforeSerializationDependencies;
          iVar27 = pFVar40->CreateBeforeSerializationDependencies;
          iVar28 = pFVar40->SerializationBeforeCreateDependencies;
          iVar29 = pFVar40->CreateBeforeCreateDependencies;
          pFVar40->_padding_ = pFVar39->_padding_;
          pFVar40->_padding_ = iVar10;
          pFVar40->ClassIndex = (FPackageIndex)FVar11.Index;
          FVar11.Index = (pFVar39->SuperIndex).Index;
          FVar12.Index = (pFVar39->TemplateIndex).Index;
          EVar13 = pFVar39->ObjectFlags;
          pFVar40->ThisIndex = (FPackageIndex)(pFVar39->ThisIndex).Index;
          pFVar40->SuperIndex = (FPackageIndex)FVar11.Index;
          pFVar40->TemplateIndex = (FPackageIndex)FVar12.Index;
          pFVar40->ObjectFlags = EVar13;
          lVar7 = pFVar39->SerialOffset;
          pFVar40->SerialSize = pFVar39->SerialSize;
          pFVar40->SerialOffset = lVar7;
          lVar7 = pFVar39->ScriptSerializationEndOffset;
          pFVar40->ScriptSerializationStartOffset = pFVar39->ScriptSerializationStartOffset;
          pFVar40->ScriptSerializationEndOffset = lVar7;
          iVar33 = pFVar39->HashNext;
          uVar14 = *(undefined4 *)&pFVar39->field_0x4c;
          pFVar40->Object = pFVar39->Object;
          pFVar40->HashNext = iVar33;
          *(undefined4 *)&pFVar40->field_0x4c = uVar14;
          iVar33 = pFVar39->FirstExportDependency;
          iVar10 = pFVar39->SerializationBeforeSerializationDependencies;
          iVar15 = pFVar39->CreateBeforeSerializationDependencies;
          pFVar40->PackageFlags = pFVar39->PackageFlags;
          pFVar40->FirstExportDependency = iVar33;
          pFVar40->SerializationBeforeSerializationDependencies = iVar10;
          pFVar40->CreateBeforeSerializationDependencies = iVar15;
          iVar33 = pFVar39->CreateBeforeCreateDependencies;
          pFVar40->SerializationBeforeCreateDependencies =
               pFVar39->SerializationBeforeCreateDependencies;
          pFVar40->CreateBeforeCreateDependencies = iVar33;
          pFVar39->_padding_ = lVar2;
          pFVar39->_padding_ = iVar16;
          pFVar39->ClassIndex = (FPackageIndex)FVar17.Index;
          pFVar39->ThisIndex = (FPackageIndex)FVar18.Index;
          pFVar39->SuperIndex = (FPackageIndex)FVar19.Index;
          pFVar39->TemplateIndex = (FPackageIndex)FVar20.Index;
          pFVar39->ObjectFlags = EVar21;
          pFVar39->SerialSize = lVar3;
          pFVar39->SerialOffset = lVar4;
          pFVar39->ScriptSerializationStartOffset = lVar5;
          pFVar39->ScriptSerializationEndOffset = lVar6;
          pFVar39->Object = pUVar1;
          pFVar39->HashNext = iVar22;
          *(undefined4 *)&pFVar39->field_0x4c = uVar23;
          pFVar39->PackageFlags = uVar24;
          pFVar39->FirstExportDependency = iVar25;
          pFVar39->SerializationBeforeSerializationDependencies = iVar26;
          pFVar39->CreateBeforeSerializationDependencies = iVar27;
          pFVar39->SerializationBeforeCreateDependencies = iVar28;
          pFVar39->CreateBeforeCreateDependencies = iVar29;
          pFVar40 = pFVar39;
LAB_1421f9095:
          pFVar35 = pFVar40;
          pFVar40 = pFVar35 + 1;
          if (pFVar40 <= pFVar38) goto code_r0x0001421f909e;
          goto LAB_1421f9105;
        }
        for (; pFVar36 = pFVar39, pFVar40 = pFVar39, pFVar39 < pFVar38; pFVar38 = pFVar38 + -1) {
          while (pFVar35 = pFVar36, pFVar40 = pFVar40 + 1, pFVar40 <= pFVar38) {
            if (pFVar35->Object == (UObject *)0x0) {
              iVar33 = 1;
            }
            else {
              pUVar1 = pFVar40->Object;
              if (pUVar1 == (UObject *)0x0) {
                iVar33 = -1;
              }
              else {
                pFVar30 = TMapBase<UObject_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FString,0>_>
                          ::Find((TMapBase<UObject_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FString,0>_>
                                  *)param_4.ObjectToFullNameMap,pFVar35->Object);
                pFVar31 = TMapBase<UObject_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FString,0>_>
                          ::Find((TMapBase<UObject_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FString,0>_>
                                  *)param_4.ObjectToFullNameMap,pUVar1);
                if ((pFVar31->Data).ArrayNum == 0) {
                  pwVar34 = L"";
                }
                else {
                  pwVar34 = (wchar_t *)(pFVar31->Data).AllocatorInstance.Data;
                }
                if ((pFVar30->Data).ArrayNum == 0) {
                  pwVar32 = L"";
                }
                else {
                  pwVar32 = (wchar_t *)(pFVar30->Data).AllocatorInstance.Data;
                }
                iVar33 = FGenericPlatformStricmp::Stricmp(pwVar32,pwVar34);
              }
            }
            pFVar36 = pFVar40;
            if (-1 < iVar33) {
              pFVar36 = pFVar35;
            }
          }
          lVar2 = pFVar35->_padding_;
          iVar16 = pFVar35->_padding_;
          FVar17.Index = (pFVar35->ClassIndex).Index;
          iVar28 = pFVar35->SerializationBeforeCreateDependencies;
          iVar29 = pFVar35->CreateBeforeCreateDependencies;
          FVar18.Index = (pFVar35->ThisIndex).Index;
          FVar19.Index = (pFVar35->SuperIndex).Index;
          FVar20.Index = (pFVar35->TemplateIndex).Index;
          EVar21 = pFVar35->ObjectFlags;
          iVar33 = pFVar38->_padding_;
          FVar11.Index = (pFVar38->ClassIndex).Index;
          lVar3 = pFVar35->SerialSize;
          lVar4 = pFVar35->SerialOffset;
          lVar5 = pFVar35->ScriptSerializationStartOffset;
          lVar6 = pFVar35->ScriptSerializationEndOffset;
          pUVar1 = pFVar35->Object;
          iVar22 = pFVar35->HashNext;
          uVar23 = *(undefined4 *)&pFVar35->field_0x4c;
          uVar24 = pFVar35->PackageFlags;
          iVar25 = pFVar35->FirstExportDependency;
          iVar26 = pFVar35->SerializationBeforeSerializationDependencies;
          iVar27 = pFVar35->CreateBeforeSerializationDependencies;
          pFVar35->_padding_ = pFVar38->_padding_;
          pFVar35->_padding_ = iVar33;
          pFVar35->ClassIndex = (FPackageIndex)FVar11.Index;
          FVar11.Index = (pFVar38->SuperIndex).Index;
          FVar12.Index = (pFVar38->TemplateIndex).Index;
          EVar13 = pFVar38->ObjectFlags;
          pFVar35->ThisIndex = (FPackageIndex)(pFVar38->ThisIndex).Index;
          pFVar35->SuperIndex = (FPackageIndex)FVar11.Index;
          pFVar35->TemplateIndex = (FPackageIndex)FVar12.Index;
          pFVar35->ObjectFlags = EVar13;
          lVar7 = pFVar38->SerialOffset;
          pFVar35->SerialSize = pFVar38->SerialSize;
          pFVar35->SerialOffset = lVar7;
          lVar7 = pFVar38->ScriptSerializationEndOffset;
          pFVar35->ScriptSerializationStartOffset = pFVar38->ScriptSerializationStartOffset;
          pFVar35->ScriptSerializationEndOffset = lVar7;
          iVar33 = pFVar38->HashNext;
          uVar14 = *(undefined4 *)&pFVar38->field_0x4c;
          pFVar35->Object = pFVar38->Object;
          pFVar35->HashNext = iVar33;
          *(undefined4 *)&pFVar35->field_0x4c = uVar14;
          iVar33 = pFVar38->FirstExportDependency;
          iVar10 = pFVar38->SerializationBeforeSerializationDependencies;
          iVar15 = pFVar38->CreateBeforeSerializationDependencies;
          pFVar35->PackageFlags = pFVar38->PackageFlags;
          pFVar35->FirstExportDependency = iVar33;
          pFVar35->SerializationBeforeSerializationDependencies = iVar10;
          pFVar35->CreateBeforeSerializationDependencies = iVar15;
          iVar33 = pFVar38->CreateBeforeCreateDependencies;
          pFVar35->SerializationBeforeCreateDependencies =
               pFVar38->SerializationBeforeCreateDependencies;
          pFVar35->CreateBeforeCreateDependencies = iVar33;
          pFVar38->_padding_ = lVar2;
          pFVar38->_padding_ = iVar16;
          pFVar38->ClassIndex = (FPackageIndex)FVar17.Index;
          pFVar38->ThisIndex = (FPackageIndex)FVar18.Index;
          pFVar38->SuperIndex = (FPackageIndex)FVar19.Index;
          pFVar38->TemplateIndex = (FPackageIndex)FVar20.Index;
          pFVar38->ObjectFlags = EVar21;
          pFVar38->SerialSize = lVar3;
          pFVar38->SerialOffset = lVar4;
          pFVar38->ScriptSerializationStartOffset = lVar5;
          pFVar38->ScriptSerializationEndOffset = lVar6;
          pFVar38->Object = pUVar1;
          pFVar38->HashNext = iVar22;
          *(undefined4 *)&pFVar38->field_0x4c = uVar23;
          pFVar38->PackageFlags = uVar24;
          pFVar38->FirstExportDependency = iVar25;
          pFVar38->SerializationBeforeSerializationDependencies = iVar26;
          pFVar38->CreateBeforeSerializationDependencies = iVar27;
          pFVar38->SerializationBeforeCreateDependencies = iVar28;
          pFVar38->CreateBeforeCreateDependencies = iVar29;
          param_3 = local_3a8;
        }
        goto LAB_1421f9366;
      }
LAB_1421f9348:
      HeapSortInternal<FObjectExport,int,FIdentityFunctor,_FObjectExportSortHelper::SortExports_::__l2::<lambda_1>_>
                (pFVar40,iVar33,param_3,param_4);
LAB_1421f9366:
      local_3a0 = local_3a0 + -3;
    } while (&local_378 <= local_3a0);
  }
  return;
code_r0x0001421f909e:
  if (pFVar39->Object == (UObject *)0x0) {
    iVar33 = 1;
  }
  else {
    pUVar1 = pFVar35[1].Object;
    if (pUVar1 == (UObject *)0x0) {
      iVar33 = -1;
    }
    else {
      pFVar30 = TMapBase<UObject_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FString,0>_>
                ::Find((TMapBase<UObject_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FString,0>_>
                        *)param_4.ObjectToFullNameMap,pFVar39->Object);
      pFVar31 = TMapBase<UObject_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FString,0>_>
                ::Find((TMapBase<UObject_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FString,0>_>
                        *)param_4.ObjectToFullNameMap,pUVar1);
      if ((pFVar31->Data).ArrayNum == 0) {
        pwVar34 = L"";
      }
      else {
        pwVar34 = (wchar_t *)(pFVar31->Data).AllocatorInstance.Data;
      }
      if ((pFVar30->Data).ArrayNum == 0) {
        pwVar32 = L"";
      }
      else {
        pwVar32 = (wchar_t *)(pFVar30->Data).AllocatorInstance.Data;
      }
      iVar33 = FGenericPlatformStricmp::Stricmp(pwVar32,pwVar34);
    }
  }
  if (-1 < iVar33) goto LAB_1421f9095;
LAB_1421f9105:
  do {
    pFVar37 = pFVar36;
    pFVar36 = pFVar37 + -1;
    if (pFVar36 <= pFVar39) break;
    if (pFVar37[-1].Object == (UObject *)0x0) {
      iVar33 = 1;
    }
    else {
      pUVar1 = pFVar39->Object;
      if (pUVar1 == (UObject *)0x0) {
        iVar33 = -1;
      }
      else {
        pFVar30 = TMapBase<UObject_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FString,0>_>
                  ::Find((TMapBase<UObject_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FString,0>_>
                          *)param_4.ObjectToFullNameMap,pFVar37[-1].Object);
        pFVar31 = TMapBase<UObject_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FString,0>_>
                  ::Find((TMapBase<UObject_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FString,0>_>
                          *)param_4.ObjectToFullNameMap,pUVar1);
        if ((pFVar31->Data).ArrayNum == 0) {
          pwVar34 = L"";
        }
        else {
          pwVar34 = (wchar_t *)(pFVar31->Data).AllocatorInstance.Data;
        }
        if ((pFVar30->Data).ArrayNum == 0) {
          pwVar32 = L"";
        }
        else {
          pwVar32 = (wchar_t *)(pFVar30->Data).AllocatorInstance.Data;
        }
        iVar33 = FGenericPlatformStricmp::Stricmp(pwVar32,pwVar34);
      }
    }
  } while (-1 < iVar33);
  uVar8 = pFVar37[-1]._padding_;
  uVar9 = pFVar37[-1].ClassIndex;
  if (pFVar40 <= pFVar36) {
    lVar2 = pFVar40->_padding_;
    iVar16 = pFVar35[1]._padding_;
    FVar17.Index = pFVar35[1].ClassIndex.Index;
    FVar18.Index = pFVar35[1].ThisIndex.Index;
    FVar19.Index = pFVar35[1].SuperIndex.Index;
    FVar20.Index = pFVar35[1].TemplateIndex.Index;
    EVar21 = pFVar35[1].ObjectFlags;
    lVar3 = pFVar35[1].SerialSize;
    lVar4 = pFVar35[1].SerialOffset;
    lVar5 = pFVar35[1].ScriptSerializationStartOffset;
    lVar6 = pFVar35[1].ScriptSerializationEndOffset;
    pUVar1 = pFVar35[1].Object;
    iVar22 = pFVar35[1].HashNext;
    uVar23 = *(undefined4 *)&pFVar35[1].field_0x4c;
    uVar24 = pFVar35[1].PackageFlags;
    iVar25 = pFVar35[1].FirstExportDependency;
    iVar26 = pFVar35[1].SerializationBeforeSerializationDependencies;
    iVar27 = pFVar35[1].CreateBeforeSerializationDependencies;
    iVar28 = pFVar35[1].SerializationBeforeCreateDependencies;
    iVar29 = pFVar35[1].CreateBeforeCreateDependencies;
    pFVar40->_padding_ = pFVar36->_padding_;
    pFVar35[1]._padding_ = uVar8;
    pFVar35[1].ClassIndex = (FPackageIndex)uVar9;
    FVar11.Index = pFVar37[-1].SuperIndex.Index;
    FVar12.Index = pFVar37[-1].TemplateIndex.Index;
    EVar13 = pFVar37[-1].ObjectFlags;
    pFVar35[1].ThisIndex = (FPackageIndex)pFVar37[-1].ThisIndex.Index;
    pFVar35[1].SuperIndex = (FPackageIndex)FVar11.Index;
    pFVar35[1].TemplateIndex = (FPackageIndex)FVar12.Index;
    pFVar35[1].ObjectFlags = EVar13;
    lVar7 = pFVar37[-1].SerialOffset;
    pFVar35[1].SerialSize = pFVar37[-1].SerialSize;
    pFVar35[1].SerialOffset = lVar7;
    lVar7 = pFVar37[-1].ScriptSerializationEndOffset;
    pFVar35[1].ScriptSerializationStartOffset = pFVar37[-1].ScriptSerializationStartOffset;
    pFVar35[1].ScriptSerializationEndOffset = lVar7;
    iVar33 = pFVar37[-1].HashNext;
    uVar14 = *(undefined4 *)&pFVar37[-1].field_0x4c;
    pFVar35[1].Object = pFVar37[-1].Object;
    pFVar35[1].HashNext = iVar33;
    *(undefined4 *)&pFVar35[1].field_0x4c = uVar14;
    iVar33 = pFVar37[-1].FirstExportDependency;
    iVar10 = pFVar37[-1].SerializationBeforeSerializationDependencies;
    iVar15 = pFVar37[-1].CreateBeforeSerializationDependencies;
    pFVar35[1].PackageFlags = pFVar37[-1].PackageFlags;
    pFVar35[1].FirstExportDependency = iVar33;
    pFVar35[1].SerializationBeforeSerializationDependencies = iVar10;
    pFVar35[1].CreateBeforeSerializationDependencies = iVar15;
    iVar33 = pFVar37[-1].CreateBeforeCreateDependencies;
    pFVar35[1].SerializationBeforeCreateDependencies =
         pFVar37[-1].SerializationBeforeCreateDependencies;
    pFVar35[1].CreateBeforeCreateDependencies = iVar33;
    pFVar36->_padding_ = lVar2;
    pFVar37[-1]._padding_ = iVar16;
    pFVar37[-1].ClassIndex = (FPackageIndex)FVar17.Index;
    pFVar37[-1].ThisIndex = (FPackageIndex)FVar18.Index;
    pFVar37[-1].SuperIndex = (FPackageIndex)FVar19.Index;
    pFVar37[-1].TemplateIndex = (FPackageIndex)FVar20.Index;
    pFVar37[-1].ObjectFlags = EVar21;
    pFVar37[-1].SerialSize = lVar3;
    pFVar37[-1].SerialOffset = lVar4;
    pFVar37[-1].ScriptSerializationStartOffset = lVar5;
    pFVar37[-1].ScriptSerializationEndOffset = lVar6;
    pFVar37[-1].Object = pUVar1;
    pFVar37[-1].HashNext = iVar22;
    *(undefined4 *)&pFVar37[-1].field_0x4c = uVar23;
    pFVar37[-1].PackageFlags = uVar24;
    pFVar37[-1].FirstExportDependency = iVar25;
    pFVar37[-1].SerializationBeforeSerializationDependencies = iVar26;
    pFVar37[-1].CreateBeforeSerializationDependencies = iVar27;
    pFVar37[-1].SerializationBeforeCreateDependencies = iVar28;
    pFVar37[-1].CreateBeforeCreateDependencies = iVar29;
    goto LAB_1421f9095;
  }
  lVar2 = pFVar39->_padding_;
  iVar16 = pFVar39->_padding_;
  FVar17.Index = (pFVar39->ClassIndex).Index;
  FVar18.Index = (pFVar39->ThisIndex).Index;
  FVar19.Index = (pFVar39->SuperIndex).Index;
  FVar20.Index = (pFVar39->TemplateIndex).Index;
  EVar21 = pFVar39->ObjectFlags;
  lVar3 = pFVar39->SerialSize;
  lVar4 = pFVar39->SerialOffset;
  local_398 = local_398 + -1;
  lVar5 = pFVar39->ScriptSerializationStartOffset;
  lVar6 = pFVar39->ScriptSerializationEndOffset;
  pUVar1 = pFVar39->Object;
  iVar22 = pFVar39->HashNext;
  uVar23 = *(undefined4 *)&pFVar39->field_0x4c;
  uVar24 = pFVar39->PackageFlags;
  iVar25 = pFVar39->FirstExportDependency;
  iVar26 = pFVar39->SerializationBeforeSerializationDependencies;
  iVar27 = pFVar39->CreateBeforeSerializationDependencies;
  iVar28 = pFVar39->SerializationBeforeCreateDependencies;
  iVar29 = pFVar39->CreateBeforeCreateDependencies;
  pFVar39->_padding_ = pFVar36->_padding_;
  pFVar39->_padding_ = uVar8;
  pFVar39->ClassIndex = (FPackageIndex)uVar9;
  FVar11.Index = pFVar37[-1].SuperIndex.Index;
  FVar12.Index = pFVar37[-1].TemplateIndex.Index;
  EVar13 = pFVar37[-1].ObjectFlags;
  pFVar39->ThisIndex = (FPackageIndex)pFVar37[-1].ThisIndex.Index;
  pFVar39->SuperIndex = (FPackageIndex)FVar11.Index;
  pFVar39->TemplateIndex = (FPackageIndex)FVar12.Index;
  pFVar39->ObjectFlags = EVar13;
  lVar7 = pFVar37[-1].SerialOffset;
  pFVar39->SerialSize = pFVar37[-1].SerialSize;
  pFVar39->SerialOffset = lVar7;
  lVar7 = pFVar37[-1].ScriptSerializationEndOffset;
  pFVar39->ScriptSerializationStartOffset = pFVar37[-1].ScriptSerializationStartOffset;
  pFVar39->ScriptSerializationEndOffset = lVar7;
  iVar33 = pFVar37[-1].HashNext;
  uVar14 = *(undefined4 *)&pFVar37[-1].field_0x4c;
  pFVar39->Object = pFVar37[-1].Object;
  pFVar39->HashNext = iVar33;
  *(undefined4 *)&pFVar39->field_0x4c = uVar14;
  iVar33 = pFVar37[-1].FirstExportDependency;
  iVar10 = pFVar37[-1].SerializationBeforeSerializationDependencies;
  iVar15 = pFVar37[-1].CreateBeforeSerializationDependencies;
  pFVar39->PackageFlags = pFVar37[-1].PackageFlags;
  pFVar39->FirstExportDependency = iVar33;
  pFVar39->SerializationBeforeSerializationDependencies = iVar10;
  pFVar39->CreateBeforeSerializationDependencies = iVar15;
  iVar33 = pFVar37[-1].CreateBeforeCreateDependencies;
  pFVar39->SerializationBeforeCreateDependencies = pFVar37[-1].SerializationBeforeCreateDependencies
  ;
  pFVar39->CreateBeforeCreateDependencies = iVar33;
  pFVar36->_padding_ = lVar2;
  pFVar37[-1]._padding_ = iVar16;
  pFVar37[-1].ClassIndex = (FPackageIndex)FVar17.Index;
  pFVar37[-1].ThisIndex = (FPackageIndex)FVar18.Index;
  pFVar37[-1].SuperIndex = (FPackageIndex)FVar19.Index;
  pFVar37[-1].TemplateIndex = (FPackageIndex)FVar20.Index;
  pFVar37[-1].ObjectFlags = EVar21;
  pFVar37[-1].SerialSize = lVar3;
  pFVar37[-1].SerialOffset = lVar4;
  pFVar37[-1].ScriptSerializationStartOffset = lVar5;
  pFVar37[-1].ScriptSerializationEndOffset = lVar6;
  pFVar37[-1].Object = pUVar1;
  pFVar37[-1].HashNext = iVar22;
  *(undefined4 *)&pFVar37[-1].field_0x4c = uVar23;
  pFVar37[-1].PackageFlags = uVar24;
  pFVar37[-1].FirstExportDependency = iVar25;
  pFVar37[-1].SerializationBeforeSerializationDependencies = iVar26;
  pFVar37[-1].CreateBeforeSerializationDependencies = iVar27;
  pFVar37[-1].SerializationBeforeCreateDependencies = iVar28;
  pFVar37[-1].CreateBeforeCreateDependencies = iVar29;
  if (((longlong)pFVar36 + (-0x68 - (longlong)pFVar39)) / 0x68 <
      ((longlong)pFVar38 - (longlong)pFVar40) / 0x68) {
    if (pFVar40 < pFVar38) {
      *local_3a0 = pFVar40;
      local_3a0[1] = pFVar38;
      *(int *)(local_3a0 + 2) = local_398;
      local_3a0 = local_3a0 + 3;
    }
    if (pFVar36 <= pFVar39 + 1) goto LAB_1421f9366;
    pFVar38 = pFVar37 + -2;
    pFVar40 = pFVar39;
  }
  else {
    if (pFVar39 + 1 < pFVar36) {
      *local_3a0 = pFVar39;
      local_3a0[1] = pFVar37 + -2;
      *(int *)(local_3a0 + 2) = local_398;
      local_3a0 = local_3a0 + 3;
    }
    if (pFVar38 <= pFVar40) goto LAB_1421f9366;
  }
  iVar33 = (int)(((longlong)pFVar38 - (longlong)pFVar40) / 0x68) + 1;
  pFVar39 = pFVar40;
  if (local_398 == 0) goto LAB_1421f9348;
  goto LAB_1421f8ff2;
}

// IntroSortInternal<FObjectImport,int,FIdentityFunctor,`FObjectImportSortHelper::SortImports'::__l2::<lambda_1>_> @ 1421f9510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FObjectImport,int,FIdentityFunctor,_FObjectImportSortHelper::SortImports_::__l2::<lambda_1>_>
          (FObjectImport *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  FLinkerLoad *pFVar1;
  UObject *pUVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  UObject *pUVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  UObject *pUVar10;
  int iVar11;
  FNameEntryId FVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  undefined4 uVar16;
  FNameEntryId FVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  undefined4 uVar22;
  FString *pFVar23;
  FString *pFVar24;
  wchar_t *pwVar25;
  int iVar26;
  wchar_t *pwVar27;
  FObjectImport *pFVar28;
  FObjectImport *pFVar29;
  FObjectImport *pFVar30;
  FObjectImport *pFVar31;
  FObjectImport *pFVar32;
  FObjectImport *pFVar33;
  float fVar34;
  undefined1 auStack_398 [32];
  UObject *local_378;
  FObjectImport **local_370;
  int local_368;
  FObjectImport *local_350;
  FObjectImport *local_348;
  FObjectImport *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_398;
  if (1 < param_2) {
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar34 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar34;
    memset(local_330,0,0x2e8);
    local_370 = &local_348;
    do {
      pFVar31 = local_370[1];
      pFVar33 = *local_370;
      local_350 = local_370[2];
      iVar26 = (int)(((longlong)pFVar31 - (longlong)pFVar33) / 0x38) + 1;
      local_368 = (int)local_350;
      pFVar32 = pFVar33;
      if ((int)local_350 != 0) {
LAB_1421f95f0:
        if (8 < iVar26) {
          iVar11 = pFVar32->_padding_;
          FVar12.Value = (pFVar32->ClassPackage).ComparisonIndex.Value;
          pFVar28 = pFVar31 + 1;
          pFVar33 = pFVar32 + iVar26 / 2;
          lVar3 = pFVar33->_padding_;
          iVar26 = pFVar33->_padding_;
          FVar17.Value = (pFVar33->ClassPackage).ComparisonIndex.Value;
          uVar4 = *(undefined8 *)&(pFVar33->ClassPackage).Number;
          uVar5 = *(undefined8 *)&(pFVar33->ClassName).Number;
          bVar18 = pFVar33->bImportOptional;
          bVar19 = pFVar33->bImportPackageHandled;
          bVar20 = pFVar33->bImportSearchedFor;
          bVar21 = pFVar33->bImportFailed;
          uVar22 = *(undefined4 *)&pFVar33->field_0x24;
          pUVar2 = pFVar33->XObject;
          pFVar1 = pFVar33->SourceLinker;
          pFVar33->_padding_ = pFVar32->_padding_;
          pFVar33->_padding_ = iVar11;
          (pFVar33->ClassPackage).ComparisonIndex = (FNameEntryId)FVar12.Value;
          uVar6 = *(undefined8 *)&(pFVar32->ClassName).Number;
          *(undefined8 *)&(pFVar33->ClassPackage).Number =
               *(undefined8 *)&(pFVar32->ClassPackage).Number;
          *(undefined8 *)&(pFVar33->ClassName).Number = uVar6;
          bVar13 = pFVar32->bImportPackageHandled;
          bVar14 = pFVar32->bImportSearchedFor;
          bVar15 = pFVar32->bImportFailed;
          uVar16 = *(undefined4 *)&pFVar32->field_0x24;
          pUVar7 = pFVar32->XObject;
          pFVar33->bImportOptional = pFVar32->bImportOptional;
          pFVar33->bImportPackageHandled = bVar13;
          pFVar33->bImportSearchedFor = bVar14;
          pFVar33->bImportFailed = bVar15;
          *(undefined4 *)&pFVar33->field_0x24 = uVar16;
          pFVar33->XObject = pUVar7;
          pFVar33->SourceLinker = pFVar32->SourceLinker;
          pFVar32->_padding_ = lVar3;
          pFVar32->_padding_ = iVar26;
          (pFVar32->ClassPackage).ComparisonIndex = (FNameEntryId)FVar17.Value;
          *(undefined8 *)&(pFVar32->ClassPackage).Number = uVar4;
          *(undefined8 *)&(pFVar32->ClassName).Number = uVar5;
          pFVar32->bImportOptional = bVar18;
          pFVar32->bImportPackageHandled = bVar19;
          pFVar32->bImportSearchedFor = bVar20;
          pFVar32->bImportFailed = bVar21;
          *(undefined4 *)&pFVar32->field_0x24 = uVar22;
          pFVar32->XObject = pUVar2;
          pFVar32->SourceLinker = pFVar1;
          pFVar33 = pFVar32;
LAB_1421f9660:
          pFVar30 = pFVar33;
          pFVar33 = pFVar30 + 1;
          if (pFVar33 <= pFVar31) goto code_r0x0001421f9670;
          goto LAB_1421f9720;
        }
        for (; pFVar33 = pFVar32, pUVar2 = local_378, pFVar28 = pFVar32, pFVar32 < pFVar31;
            pFVar31 = pFVar31 + -1) {
          while (pFVar30 = pFVar33, pFVar33 = pFVar28 + 1, pFVar33 <= pFVar31) {
            local_378 = pFVar30->XObject;
            if (local_378 == (UObject *)0x0) {
              iVar26 = 1;
              local_378 = pUVar2;
            }
            else if (pFVar28[1].XObject == (UObject *)0x0) {
              iVar26 = -1;
              local_378 = pUVar2;
            }
            else {
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable(local_378);
              }
              pFVar23 = TMapBase<TObjectPtr<UObject>,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,FString,0>_>
                        ::Find((TMapBase<TObjectPtr<UObject>,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,FString,0>_>
                                *)param_4.ObjectToFullNameMap,(TObjectPtr<UObject_const_>)&local_378
                              );
              local_378 = pFVar28[1].XObject;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (local_378 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(local_378);
              }
              pFVar24 = TMapBase<TObjectPtr<UObject>,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,FString,0>_>
                        ::Find((TMapBase<TObjectPtr<UObject>,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,FString,0>_>
                                *)param_4.ObjectToFullNameMap,(TObjectPtr<UObject_const_>)&local_378
                              );
              if ((pFVar24->Data).ArrayNum == 0) {
                pwVar27 = L"";
              }
              else {
                pwVar27 = (wchar_t *)(pFVar24->Data).AllocatorInstance.Data;
              }
              if ((pFVar23->Data).ArrayNum == 0) {
                pwVar25 = L"";
              }
              else {
                pwVar25 = (wchar_t *)(pFVar23->Data).AllocatorInstance.Data;
              }
              iVar26 = FGenericPlatformStricmp::Stricmp(pwVar25,pwVar27);
            }
            pUVar2 = local_378;
            pFVar28 = pFVar33;
            if (-1 < iVar26) {
              pFVar33 = pFVar30;
            }
          }
          lVar3 = pFVar30->_padding_;
          iVar11 = pFVar30->_padding_;
          FVar17.Value = (pFVar30->ClassPackage).ComparisonIndex.Value;
          pFVar1 = pFVar30->SourceLinker;
          uVar4 = *(undefined8 *)&(pFVar30->ClassPackage).Number;
          uVar5 = *(undefined8 *)&(pFVar30->ClassName).Number;
          iVar26 = pFVar31->_padding_;
          FVar12.Value = (pFVar31->ClassPackage).ComparisonIndex.Value;
          bVar18 = pFVar30->bImportOptional;
          bVar19 = pFVar30->bImportPackageHandled;
          bVar20 = pFVar30->bImportSearchedFor;
          bVar21 = pFVar30->bImportFailed;
          uVar22 = *(undefined4 *)&pFVar30->field_0x24;
          pUVar10 = pFVar30->XObject;
          pFVar30->_padding_ = pFVar31->_padding_;
          pFVar30->_padding_ = iVar26;
          (pFVar30->ClassPackage).ComparisonIndex = (FNameEntryId)FVar12.Value;
          uVar6 = *(undefined8 *)&(pFVar31->ClassName).Number;
          *(undefined8 *)&(pFVar30->ClassPackage).Number =
               *(undefined8 *)&(pFVar31->ClassPackage).Number;
          *(undefined8 *)&(pFVar30->ClassName).Number = uVar6;
          bVar13 = pFVar31->bImportPackageHandled;
          bVar14 = pFVar31->bImportSearchedFor;
          bVar15 = pFVar31->bImportFailed;
          uVar16 = *(undefined4 *)&pFVar31->field_0x24;
          pUVar7 = pFVar31->XObject;
          pFVar30->bImportOptional = pFVar31->bImportOptional;
          pFVar30->bImportPackageHandled = bVar13;
          pFVar30->bImportSearchedFor = bVar14;
          pFVar30->bImportFailed = bVar15;
          *(undefined4 *)&pFVar30->field_0x24 = uVar16;
          pFVar30->XObject = pUVar7;
          pFVar30->SourceLinker = pFVar31->SourceLinker;
          pFVar31->_padding_ = lVar3;
          pFVar31->_padding_ = iVar11;
          (pFVar31->ClassPackage).ComparisonIndex = (FNameEntryId)FVar17.Value;
          *(undefined8 *)&(pFVar31->ClassPackage).Number = uVar4;
          *(undefined8 *)&(pFVar31->ClassName).Number = uVar5;
          pFVar31->bImportOptional = bVar18;
          pFVar31->bImportPackageHandled = bVar19;
          pFVar31->bImportSearchedFor = bVar20;
          pFVar31->bImportFailed = bVar21;
          *(undefined4 *)&pFVar31->field_0x24 = uVar22;
          pFVar31->XObject = pUVar10;
          pFVar31->SourceLinker = pFVar1;
          local_378 = pUVar2;
        }
        goto LAB_1421f9956;
      }
LAB_1421f9938:
      HeapSortInternal<FObjectImport,int,FIdentityFunctor,_FObjectImportSortHelper::SortImports_::__l2::<lambda_1>_>
                (pFVar33,iVar26,param_3,param_4);
LAB_1421f9956:
      local_370 = local_370 + -3;
    } while (&local_348 <= local_370);
  }
  return;
code_r0x0001421f9670:
  pUVar2 = pFVar32->XObject;
  if (pUVar2 == (UObject *)0x0) {
    iVar26 = 1;
  }
  else if (pFVar30[1].XObject == (UObject *)0x0) {
    iVar26 = -1;
  }
  else {
    local_378 = pUVar2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    pFVar23 = TMapBase<TObjectPtr<UObject>,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,FString,0>_>
              ::Find((TMapBase<TObjectPtr<UObject>,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,FString,0>_>
                      *)param_4.ObjectToFullNameMap,(TObjectPtr<UObject_const_>)&local_378);
    local_378 = pFVar30[1].XObject;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_378 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_378);
    }
    pFVar24 = TMapBase<TObjectPtr<UObject>,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,FString,0>_>
              ::Find((TMapBase<TObjectPtr<UObject>,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,FString,0>_>
                      *)param_4.ObjectToFullNameMap,(TObjectPtr<UObject_const_>)&local_378);
    if ((pFVar24->Data).ArrayNum == 0) {
      pwVar27 = L"";
    }
    else {
      pwVar27 = (wchar_t *)(pFVar24->Data).AllocatorInstance.Data;
    }
    if ((pFVar23->Data).ArrayNum == 0) {
      pwVar25 = L"";
    }
    else {
      pwVar25 = (wchar_t *)(pFVar23->Data).AllocatorInstance.Data;
    }
    iVar26 = FGenericPlatformStricmp::Stricmp(pwVar25,pwVar27);
  }
  if (-1 < iVar26) goto LAB_1421f9660;
LAB_1421f9720:
  do {
    pFVar29 = pFVar28;
    pFVar28 = pFVar29 + -1;
    if (pFVar28 <= pFVar32) break;
    pUVar2 = pFVar29[-1].XObject;
    if (pUVar2 == (UObject *)0x0) {
      iVar26 = 1;
    }
    else if (pFVar32->XObject == (UObject *)0x0) {
      iVar26 = -1;
    }
    else {
      local_378 = pUVar2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      pFVar23 = TMapBase<TObjectPtr<UObject>,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,FString,0>_>
                ::Find((TMapBase<TObjectPtr<UObject>,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,FString,0>_>
                        *)param_4.ObjectToFullNameMap,(TObjectPtr<UObject_const_>)&local_378);
      local_378 = pFVar32->XObject;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_378 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_378);
      }
      pFVar24 = TMapBase<TObjectPtr<UObject>,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,FString,0>_>
                ::Find((TMapBase<TObjectPtr<UObject>,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,FString,0>_>
                        *)param_4.ObjectToFullNameMap,(TObjectPtr<UObject_const_>)&local_378);
      if ((pFVar24->Data).ArrayNum == 0) {
        pwVar27 = L"";
      }
      else {
        pwVar27 = (wchar_t *)(pFVar24->Data).AllocatorInstance.Data;
      }
      if ((pFVar23->Data).ArrayNum == 0) {
        pwVar25 = L"";
      }
      else {
        pwVar25 = (wchar_t *)(pFVar23->Data).AllocatorInstance.Data;
      }
      iVar26 = FGenericPlatformStricmp::Stricmp(pwVar25,pwVar27);
    }
  } while (-1 < iVar26);
  uVar8 = pFVar29[-1]._padding_;
  uVar9 = pFVar29[-1].ClassPackage.ComparisonIndex;
  if (pFVar33 <= pFVar28) {
    lVar3 = pFVar33->_padding_;
    iVar26 = pFVar30[1]._padding_;
    FVar12.Value = pFVar30[1].ClassPackage.ComparisonIndex.Value;
    uVar4 = *(undefined8 *)&pFVar30[1].ClassPackage.Number;
    uVar5 = *(undefined8 *)&pFVar30[1].ClassName.Number;
    bVar18 = pFVar30[1].bImportOptional;
    bVar19 = pFVar30[1].bImportPackageHandled;
    bVar20 = pFVar30[1].bImportSearchedFor;
    bVar21 = pFVar30[1].bImportFailed;
    uVar22 = *(undefined4 *)&pFVar30[1].field_0x24;
    pUVar7 = pFVar30[1].XObject;
    pFVar1 = pFVar30[1].SourceLinker;
    pFVar33->_padding_ = pFVar28->_padding_;
    pFVar30[1]._padding_ = uVar8;
    pFVar30[1].ClassPackage.ComparisonIndex = (FNameEntryId)uVar9;
    uVar6 = *(undefined8 *)&pFVar29[-1].ClassName.Number;
    *(undefined8 *)&pFVar30[1].ClassPackage.Number = *(undefined8 *)&pFVar29[-1].ClassPackage.Number
    ;
    *(undefined8 *)&pFVar30[1].ClassName.Number = uVar6;
    bVar13 = pFVar29[-1].bImportPackageHandled;
    bVar14 = pFVar29[-1].bImportSearchedFor;
    bVar15 = pFVar29[-1].bImportFailed;
    uVar16 = *(undefined4 *)&pFVar29[-1].field_0x24;
    pUVar2 = pFVar29[-1].XObject;
    pFVar30[1].bImportOptional = pFVar29[-1].bImportOptional;
    pFVar30[1].bImportPackageHandled = bVar13;
    pFVar30[1].bImportSearchedFor = bVar14;
    pFVar30[1].bImportFailed = bVar15;
    *(undefined4 *)&pFVar30[1].field_0x24 = uVar16;
    pFVar30[1].XObject = pUVar2;
    pFVar30[1].SourceLinker = pFVar29[-1].SourceLinker;
    pFVar28->_padding_ = lVar3;
    pFVar29[-1]._padding_ = iVar26;
    pFVar29[-1].ClassPackage.ComparisonIndex = (FNameEntryId)FVar12.Value;
    *(undefined8 *)&pFVar29[-1].ClassPackage.Number = uVar4;
    *(undefined8 *)&pFVar29[-1].ClassName.Number = uVar5;
    pFVar29[-1].bImportOptional = bVar18;
    pFVar29[-1].bImportPackageHandled = bVar19;
    pFVar29[-1].bImportSearchedFor = bVar20;
    pFVar29[-1].bImportFailed = bVar21;
    *(undefined4 *)&pFVar29[-1].field_0x24 = uVar22;
    pFVar29[-1].XObject = pUVar7;
    pFVar29[-1].SourceLinker = pFVar1;
    goto LAB_1421f9660;
  }
  lVar3 = pFVar32->_padding_;
  iVar26 = pFVar32->_padding_;
  FVar12.Value = (pFVar32->ClassPackage).ComparisonIndex.Value;
  uVar4 = *(undefined8 *)&(pFVar32->ClassPackage).Number;
  uVar5 = *(undefined8 *)&(pFVar32->ClassName).Number;
  bVar18 = pFVar32->bImportOptional;
  bVar19 = pFVar32->bImportPackageHandled;
  bVar20 = pFVar32->bImportSearchedFor;
  bVar21 = pFVar32->bImportFailed;
  uVar22 = *(undefined4 *)&pFVar32->field_0x24;
  pUVar2 = pFVar32->XObject;
  local_368 = local_368 + -1;
  pFVar1 = pFVar32->SourceLinker;
  pFVar32->_padding_ = pFVar28->_padding_;
  pFVar32->_padding_ = uVar8;
  (pFVar32->ClassPackage).ComparisonIndex = (FNameEntryId)uVar9;
  uVar6 = *(undefined8 *)&pFVar29[-1].ClassName.Number;
  *(undefined8 *)&(pFVar32->ClassPackage).Number = *(undefined8 *)&pFVar29[-1].ClassPackage.Number;
  *(undefined8 *)&(pFVar32->ClassName).Number = uVar6;
  bVar13 = pFVar29[-1].bImportPackageHandled;
  bVar14 = pFVar29[-1].bImportSearchedFor;
  bVar15 = pFVar29[-1].bImportFailed;
  uVar16 = *(undefined4 *)&pFVar29[-1].field_0x24;
  pUVar7 = pFVar29[-1].XObject;
  pFVar32->bImportOptional = pFVar29[-1].bImportOptional;
  pFVar32->bImportPackageHandled = bVar13;
  pFVar32->bImportSearchedFor = bVar14;
  pFVar32->bImportFailed = bVar15;
  *(undefined4 *)&pFVar32->field_0x24 = uVar16;
  pFVar32->XObject = pUVar7;
  pFVar32->SourceLinker = pFVar29[-1].SourceLinker;
  pFVar28->_padding_ = lVar3;
  pFVar29[-1]._padding_ = iVar26;
  pFVar29[-1].ClassPackage.ComparisonIndex = (FNameEntryId)FVar12.Value;
  *(undefined8 *)&pFVar29[-1].ClassPackage.Number = uVar4;
  *(undefined8 *)&pFVar29[-1].ClassName.Number = uVar5;
  pFVar29[-1].bImportOptional = bVar18;
  pFVar29[-1].bImportPackageHandled = bVar19;
  pFVar29[-1].bImportSearchedFor = bVar20;
  pFVar29[-1].bImportFailed = bVar21;
  *(undefined4 *)&pFVar29[-1].field_0x24 = uVar22;
  pFVar29[-1].XObject = pUVar2;
  pFVar29[-1].SourceLinker = pFVar1;
  if (((longlong)pFVar28 + (-0x38 - (longlong)pFVar32)) / 0x38 <
      ((longlong)pFVar31 - (longlong)pFVar33) / 0x38) {
    if (pFVar33 < pFVar31) {
      *local_370 = pFVar33;
      local_370[1] = pFVar31;
      *(int *)(local_370 + 2) = local_368;
      local_370 = local_370 + 3;
    }
    if (pFVar28 <= pFVar32 + 1) goto LAB_1421f9956;
    pFVar31 = pFVar29 + -2;
    pFVar33 = pFVar32;
  }
  else {
    if (pFVar32 + 1 < pFVar28) {
      *local_370 = pFVar32;
      local_370[1] = pFVar29 + -2;
      *(int *)(local_370 + 2) = local_368;
      local_370 = local_370 + 3;
    }
    if (pFVar31 <= pFVar33) goto LAB_1421f9956;
  }
  iVar26 = (int)(((longlong)pFVar31 - (longlong)pFVar33) / 0x38) + 1;
  pFVar32 = pFVar33;
  if (local_368 == 0) goto LAB_1421f9938;
  goto LAB_1421f95f0;
}

// IsObjectPtrEqual<UObject,UPackage_*,0> @ 1421f9af0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UObject,UPackage_*,0>
          (TObjectPtr<UObject> *param_1,UPackage **param_2)

{
  if ((UPackage *)(param_1->field0_0x0).DebugPtr == (UPackage *)0x0) {
    return *param_2 == (UPackage *)0x0;
  }
  return (UPackage *)(param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UPackage,UPackage_*,0> @ 1421f9b10

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UPackage,UPackage_*,0>
          (TObjectPtr<UPackage> *param_1,UPackage **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UPackage *)0x0) {
    return *param_2 == (UPackage *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// MakeArrayView<FFrame_const_*_const> @ 1421f9b30

TArrayView<FFrame_const_*_const,int> * __cdecl
MakeArrayView<FFrame_const_*_const>
          (TArrayView<FFrame_const_*_const,int> *__return_storage_ptr__,FFrame **param_1,int param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FFrame_const_*_const,int> *pTVar3;
  
  __return_storage_ptr__->DataPtr = param_1;
  __return_storage_ptr__->ArrayNum = param_2;
  if (param_2 < 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<FFrame_const_*_const,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> @ 1421f9b80

TSharedRef<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> * __cdecl
MakeShared<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>
          (TSharedRef<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>
           *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar4;
  
  pTVar3 = operator_new(0x28);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TMulticastScriptDelegate_UFNotThreadSafeDelegateMode_____00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    __return_storage_ptr__->Object =
         (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pTVar3 + 1) ==
        (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// NBest<UFunction_*> @ 1421fa250

void __cdecl
NBest<UFunction_*>(TArray<UFunction_*,TSizedDefaultAllocator<32>_> *param_1,UFunction **param_2,
                  TFunctionRef<bool___cdecl(UFunction_*_const_&,UFunction_*_const_&)> *param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  
  uVar7 = param_1->ArrayNum - 1;
  uVar6 = 0;
  if ((int)uVar7 < param_1->ArrayNum) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  cVar4 = (**(code **)param_3)
                    (*(undefined8 *)&param_3->field_0x8,param_2,
                     (param_1->AllocatorInstance).Data + (longlong)(param_1->ArrayNum + -1) * 8);
  if (cVar4 != '\0') {
    iVar5 = param_1->ArrayNum;
    uVar7 = 0;
    uVar6 = 0xffffffff;
    if (0 < iVar5) {
      do {
        uVar6 = 0;
        if ((int)uVar7 < iVar5) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        cVar4 = (**(code **)param_3)
                          (*(undefined8 *)&param_3->field_0x8,param_2,
                           (param_1->AllocatorInstance).Data + (longlong)(int)uVar7 * 8);
        iVar5 = param_1->ArrayNum;
        uVar6 = uVar7;
      } while ((cVar4 == '\0') && (uVar7 = uVar7 + 1, uVar6 = 0xffffffff, (int)uVar7 < iVar5));
    }
    pFVar8 = (param_1->AllocatorInstance).Data;
    if ((pFVar8 <= param_2) &&
       ((param_2 < pFVar8 + (longlong)param_1->ArrayMax * 8 &&
        (bVar3 = FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar3)))) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = param_1->ArrayNum;
    piVar1 = &param_1->ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,piVar1);
    }
    pFVar8 = (param_1->AllocatorInstance).Data;
    param_1->ArrayNum = iVar5 + 1;
    pFVar8 = pFVar8 + (longlong)(int)uVar6 * 8;
    memmove(pFVar8 + 8,pFVar8,(longlong)(int)(iVar5 - uVar6) << 3);
    *(UFunction **)((param_1->AllocatorInstance).Data + (longlong)(int)uVar6 * 8) = *param_2;
    if ((param_1->ArrayNum < 1) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar6 = param_1->ArrayNum - 1;
    pFVar8 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar6 * 8;
    iVar5 = ~uVar6 + param_1->ArrayNum;
    if (iVar5 != 0) {
      memmove(pFVar8,pFVar8 + 8,(longlong)iVar5 << 3);
    }
    param_1->ArrayNum = param_1->ArrayNum + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  return;
}

// NBest<TTuple<UFunction_*,int>_> @ 1421fa4b0

void __cdecl
NBest<TTuple<UFunction_*,int>_>
          (TArray<TTuple<UFunction_*,int>,TSizedDefaultAllocator<32>_> *param_1,
          TTuple<UFunction_*,int> *param_2,
          TFunctionRef<bool___cdecl(TTuple<UFunction_*,int>_const_&,TTuple<UFunction_*,int>_const_&)>
          *param_3)

{
  int *piVar1;
  TTuple<UFunction_*,int> *pTVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  
  uVar9 = param_1->ArrayNum - 1;
  uVar8 = 0;
  if ((int)uVar9 < param_1->ArrayNum) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  cVar6 = (**(code **)param_3)
                    (*(undefined8 *)&param_3->field_0x8,param_2,
                     (param_1->AllocatorInstance).Data + (longlong)(param_1->ArrayNum + -1) * 0x10);
  if (cVar6 != '\0') {
    iVar7 = param_1->ArrayNum;
    uVar9 = 0;
    uVar8 = 0xffffffff;
    if (0 < iVar7) {
      do {
        uVar8 = 0;
        if ((int)uVar9 < iVar7) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        cVar6 = (**(code **)param_3)
                          (*(undefined8 *)&param_3->field_0x8,param_2,
                           (param_1->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x10);
        iVar7 = param_1->ArrayNum;
        uVar8 = uVar9;
      } while ((cVar6 == '\0') && (uVar9 = uVar9 + 1, uVar8 = 0xffffffff, (int)uVar9 < iVar7));
    }
    pTVar2 = (TTuple<UFunction_*,int> *)(param_1->AllocatorInstance).Data;
    if ((pTVar2 <= param_2) &&
       ((param_2 < pTVar2 + param_1->ArrayMax &&
        (bVar5 = FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)))) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar7 = param_1->ArrayNum;
    piVar1 = &param_1->ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_1->AllocatorInstance,piVar1);
    }
    pFVar10 = (param_1->AllocatorInstance).Data;
    param_1->ArrayNum = iVar7 + 1;
    pFVar10 = pFVar10 + (longlong)(int)uVar8 * 0x10;
    memmove(pFVar10 + 0x10,pFVar10,(longlong)(int)(iVar7 - uVar8) << 4);
    uVar4 = *(undefined8 *)&param_2->field_0x8;
    pFVar10 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x10;
    *(undefined8 *)pFVar10 = *(undefined8 *)param_2;
    *(undefined8 *)(pFVar10 + 8) = uVar4;
    if ((param_1->ArrayNum < 1) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar8 = param_1->ArrayNum - 1;
    pFVar10 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x10;
    iVar7 = ~uVar8 + param_1->ArrayNum;
    if (iVar7 != 0) {
      memmove(pFVar10,pFVar10 + 0x10,(longlong)iVar7 << 4);
    }
    param_1->ArrayNum = param_1->ArrayNum + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  return;
}

// NBest<TTuple<FName,int>_> @ 1421fa720

void __cdecl
NBest<TTuple<FName,int>_>
          (TArray<TTuple<FName,int>,TSizedDefaultAllocator<32>_> *param_1,TTuple<FName,int> *param_2
          ,TFunctionRef<bool___cdecl(TTuple<FName,int>_const_&,TTuple<FName,int>_const_&)> *param_3)

{
  int *piVar1;
  longlong lVar2;
  TTuple<FName,int> *pTVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  
  uVar9 = param_1->ArrayNum - 1;
  uVar8 = 0;
  if ((int)uVar9 < param_1->ArrayNum) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  cVar6 = (**(code **)param_3)
                    (*(undefined8 *)&param_3->field_0x8,param_2,
                     (param_1->AllocatorInstance).Data + (longlong)(param_1->ArrayNum + -1) * 0xc);
  if (cVar6 != '\0') {
    iVar7 = param_1->ArrayNum;
    uVar9 = 0;
    uVar8 = 0xffffffff;
    if (0 < iVar7) {
      do {
        uVar8 = 0;
        if ((int)uVar9 < iVar7) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        cVar6 = (**(code **)param_3)
                          (*(undefined8 *)&param_3->field_0x8,param_2,
                           (param_1->AllocatorInstance).Data + (longlong)(int)uVar9 * 0xc);
        iVar7 = param_1->ArrayNum;
        uVar8 = uVar9;
      } while ((cVar6 == '\0') && (uVar9 = uVar9 + 1, uVar8 = 0xffffffff, (int)uVar9 < iVar7));
    }
    pTVar3 = (TTuple<FName,int> *)(param_1->AllocatorInstance).Data;
    if ((pTVar3 <= param_2) &&
       ((param_2 < pTVar3 + param_1->ArrayMax &&
        (bVar5 = FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)))) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = param_1->ArrayNum;
    piVar1 = &param_1->ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,&param_1->AllocatorInstance,piVar1);
    }
    param_1->ArrayNum = iVar7 + 1;
    lVar2 = (longlong)(int)uVar8 * 0xc;
    pFVar10 = (param_1->AllocatorInstance).Data + lVar2;
    memmove(pFVar10 + 0xc,pFVar10,(longlong)(int)(iVar7 - uVar8) * 0xc);
    pFVar10 = (param_1->AllocatorInstance).Data;
    *(undefined8 *)(pFVar10 + lVar2) = *(undefined8 *)param_2;
    *(undefined4 *)(pFVar10 + lVar2 + 8) = *(undefined4 *)&param_2->field_0x8;
    if ((param_1->ArrayNum < 1) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar8 = param_1->ArrayNum - 1;
    pFVar10 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar8 * 0xc;
    iVar7 = ~uVar8 + param_1->ArrayNum;
    if (iVar7 != 0) {
      memmove(pFVar10,pFVar10 + 0xc,(longlong)iVar7 * 0xc);
    }
    param_1->ArrayNum = param_1->ArrayNum + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  return;
}

// NBest<TTuple<enum_EExprToken,int>_> @ 1421fa9b0

void __cdecl
NBest<TTuple<enum_EExprToken,int>_>
          (TArray<TTuple<EExprToken,int>,TSizedDefaultAllocator<32>_> *param_1,
          TTuple<EExprToken,int> *param_2,
          TFunctionRef<bool___cdecl(TTuple<EExprToken,int>_const_&,TTuple<EExprToken,int>_const_&)>
          *param_3)

{
  int *piVar1;
  TTuple<EExprToken,int> *pTVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  
  uVar8 = param_1->ArrayNum - 1;
  uVar7 = 0;
  if ((int)uVar8 < param_1->ArrayNum) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  cVar5 = (**(code **)param_3)
                    (*(undefined8 *)&param_3->field_0x8,param_2,
                     (param_1->AllocatorInstance).Data + (longlong)(param_1->ArrayNum + -1) * 8);
  if (cVar5 != '\0') {
    iVar6 = param_1->ArrayNum;
    uVar8 = 0;
    uVar7 = 0xffffffff;
    if (0 < iVar6) {
      do {
        uVar7 = 0;
        if ((int)uVar8 < iVar6) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        cVar5 = (**(code **)param_3)
                          (*(undefined8 *)&param_3->field_0x8,param_2,
                           (param_1->AllocatorInstance).Data + (longlong)(int)uVar8 * 8);
        iVar6 = param_1->ArrayNum;
        uVar7 = uVar8;
      } while ((cVar5 == '\0') && (uVar8 = uVar8 + 1, uVar7 = 0xffffffff, (int)uVar8 < iVar6));
    }
    pTVar2 = (TTuple<EExprToken,int> *)(param_1->AllocatorInstance).Data;
    if ((pTVar2 <= param_2) &&
       ((param_2 < pTVar2 + param_1->ArrayMax &&
        (bVar4 = FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)))) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = param_1->ArrayNum;
    piVar1 = &param_1->ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&param_1->AllocatorInstance,piVar1);
    }
    pFVar9 = (param_1->AllocatorInstance).Data;
    param_1->ArrayNum = iVar6 + 1;
    pFVar9 = pFVar9 + (longlong)(int)uVar7 * 8;
    memmove(pFVar9 + 8,pFVar9,(longlong)(int)(iVar6 - uVar7) << 3);
    *(TTuple<EExprToken,int> *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar7 * 8) =
         *param_2;
    if ((param_1->ArrayNum < 1) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar7 = param_1->ArrayNum - 1;
    pFVar9 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar7 * 8;
    iVar6 = ~uVar7 + param_1->ArrayNum;
    if (iVar6 != 0) {
      memmove(pFVar9,pFVar9 + 8,(longlong)iVar6 << 3);
    }
    param_1->ArrayNum = param_1->ArrayNum + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  return;
}

// ProcessScriptFunction<void_(__cdecl*)(UObject_*,FFrame_&,void_*)> @ 1421faf60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
ProcessScriptFunction<void_(__cdecl*)(UObject_*,FFrame_&,void_*)>
          (UObject *param_1,UFunction *param_2,FFrame *param_3,void *param_4,
          _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *param_5)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var8;
  UObject *pUVar9;
  longlong *plVar10;
  code *pcVar11;
  void *pvVar12;
  bool bVar13;
  uchar *puVar14;
  ulonglong uVar15;
  FProperty *pFVar16;
  ulonglong uVar17;
  uchar *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  FOutParmRec *pFVar22;
  uint uVar23;
  FOutParmRec **ppFVar24;
  undefined1 local_168 [32];
  FFrame *local_138;
  UFunction *local_130;
  uchar *local_128;
  void *local_120;
  UObject *local_118;
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *local_110;
  FFrame local_108;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)&local_138;
  local_110 = param_5;
  local_130 = param_2;
  local_120 = param_4;
  local_118 = param_1;
  if (((param_2->FunctionFlags & FUNC_Native) != FUNC_None) &&
     (bVar13 = FDebug::CheckVerifyFailedImpl2
                         ("!Function->HasAnyFunctionFlags(FUNC_Native)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ScriptCore.cpp"
                          ,0x3a9,L""), bVar13)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  FFrame::FFrame(&local_108,param_1,param_2,(void *)0x0,param_3,(FField *)param_2->_padding_);
  puVar14 = (uchar *)(**(code **)(*(longlong *)param_2->_padding_ + 0x3a0))
                               ((longlong *)param_2->_padding_,param_1,param_2);
  local_128 = puVar14;
  puVar18 = puVar14;
  puVar20 = local_168;
  if (puVar14 == (uchar *)0x0) {
    iVar4 = (int)param_2->_padding_;
    puVar18 = (uchar *)0x0;
    puVar20 = local_168;
    if (iVar4 != 0) {
      sVar2 = *(short *)((longlong)&param_2->_padding_ + 4);
      if (sVar2 < 0x11) {
        uVar15 = (longlong)(iVar4 + 0xf) + 0xf;
        if (uVar15 <= (ulonglong)(longlong)(iVar4 + 0xf)) {
          uVar15 = 0xffffffffffffff0;
        }
        puVar19 = local_168 + -(uVar15 & 0xfffffffffffffff0);
        puVar18 = (uchar *)((longlong)&local_130 + -(uVar15 & 0xfffffffffffffff0));
      }
      else {
        uVar23 = (int)sVar2 - 1;
        uVar17 = (ulonglong)(int)(uVar23 + iVar4);
        uVar15 = uVar17 + 0xf;
        if (uVar15 <= uVar17) {
          uVar15 = 0xffffffffffffff0;
        }
        puVar19 = local_168 + -(uVar15 & 0xfffffffffffffff0);
        puVar18 = (uchar *)((ulonglong)
                            (&stack0xfffffffffffffec7 +
                            (longlong)sVar2 + -(uVar15 & 0xfffffffffffffff0)) &
                           (longlong)(int)~uVar23);
      }
      *(undefined8 *)(puVar19 + -8) = 0x1421fb0c2;
      memset(puVar18,0,(longlong)iVar4);
      puVar20 = puVar19;
    }
  }
  puVar21 = puVar20;
  if (param_2->ReturnValueOffset != 0xffff) {
    *(undefined8 *)(puVar20 + -8) = 0x1421fb0de;
    pFVar16 = UFunction::GetReturnProperty(param_2);
    if (pFVar16 == (FProperty *)0x0) {
      *(char **)(puVar20 + 0x20) = "ReturnProperty";
      *(undefined8 *)(puVar20 + -8) = 0x1421fb10d;
      bVar13 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_7634585018982988860>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ScriptCore.cpp"
                          ,0x3c4,*(char **)(puVar20 + 0x20));
      if (bVar13) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    else {
      puVar21 = puVar20 + -0x30;
      pFVar22 = (FOutParmRec *)((ulonglong)(puVar20 + 0xf) & 0xfffffffffffffff0);
      if (param_4 == (void *)0x0) {
        *(undefined8 *)(puVar20 + -0x38) = 0x1421fb150;
        bVar13 = FDebug::CheckVerifyFailedImpl2
                           ("Z_Param__Result != 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ScriptCore.cpp"
                            ,0x3c9,L"");
        if (bVar13) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      pFVar22->PropAddr = param_4;
      pFVar22->Property = pFVar16;
      local_108.OutParms = pFVar22;
    }
  }
  pbVar7 = param_3->Code;
  ppFVar24 = &local_108.OutParms;
  local_108.Locals = puVar18;
  pFVar16 = (FProperty *)param_2->_padding_;
  bVar1 = *pbVar7;
  puVar18 = local_108.Locals;
  while (local_108.Locals = puVar18, bVar1 != 0x16) {
    param_3->MostRecentPropertyAddress = (uchar *)0x0;
    param_3->MostRecentPropertyContainer = (uchar *)0x0;
    if ((pFVar16->PropertyFlags >> 10 & 1) == 0) {
      if ((pFVar16->PropertyFlags >> 8 & 1) == 0) {
        if (pFVar16->ArrayDim < 1) {
          *(int *)(puVar21 + 0x28) = pFVar16->ArrayDim;
          *(undefined4 *)(puVar21 + 0x20) = 0;
          *(undefined8 *)(puVar21 + -8) = 0x1421fb2d0;
          bVar13 = FDebug::CheckVerifyFailedImpl2
                             ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
          if (bVar13) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        if (puVar18 == (uchar *)0x0) {
          *(undefined8 *)(puVar21 + -8) = 0x1421fb2fb;
          bVar13 = FDebug::CheckVerifyFailedImpl2
                             ("ContainerPtr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2de,L"");
          if (bVar13) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        puVar14 = local_108.Locals;
        iVar4 = pFVar16->Offset_Internal;
        if (((uint)(int)pFVar16->PropertyFlags >> 9 & 1) == 0) {
          pcVar11 = *(code **)(pFVar16->_padding_ + 0x150);
          if (pFVar16->ArrayDim < 1) {
            *(int *)(puVar21 + 0x28) = pFVar16->ArrayDim;
            *(undefined4 *)(puVar21 + 0x20) = 0;
            *(undefined8 *)(puVar21 + -8) = 0x1421fb3d7;
            bVar13 = FDebug::CheckVerifyFailedImpl2
                               ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
            if (bVar13) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
          if (puVar14 == (uchar *)0x0) {
            *(undefined8 *)(puVar21 + -8) = 0x1421fb402;
            bVar13 = FDebug::CheckVerifyFailedImpl2
                               ("ContainerPtr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2de,L"");
            if (bVar13) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
          iVar5 = pFVar16->Offset_Internal;
          *(undefined8 *)(puVar21 + -8) = 0x1421fb414;
          (*pcVar11)(pFVar16,puVar14 + iVar5);
        }
        else {
          iVar5 = pFVar16->ArrayDim;
          iVar6 = pFVar16->ElementSize;
          if (iVar5 < 1) {
            *(int *)(puVar21 + 0x28) = iVar5;
            *(undefined4 *)(puVar21 + 0x20) = 0;
            *(undefined8 *)(puVar21 + -8) = 0x1421fb356;
            bVar13 = FDebug::CheckVerifyFailedImpl2
                               ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
            if (bVar13) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
          if (puVar14 == (uchar *)0x0) {
            *(undefined8 *)(puVar21 + -8) = 0x1421fb381;
            bVar13 = FDebug::CheckVerifyFailedImpl2
                               ("ContainerPtr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2de,L"");
            if (bVar13) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
          iVar3 = pFVar16->Offset_Internal;
          *(undefined8 *)(puVar21 + -8) = 0x1421fb398;
          memset(puVar14 + iVar3,0,(longlong)iVar6 * (longlong)iVar5);
        }
        bVar1 = *param_3->Code;
        param_3->Code = param_3->Code + 1;
        p_Var8 = GNatives.Elements[bVar1];
        pUVar9 = param_3->Object;
        *(undefined8 *)(puVar21 + -8) = 0x1421fb433;
        (*p_Var8)(pUVar9,param_3,puVar18 + iVar4);
      }
      else {
        bVar1 = *pbVar7;
        param_3->Code = pbVar7 + 1;
        p_Var8 = GNatives.Elements[bVar1];
        pUVar9 = param_3->Object;
        *(undefined8 *)(puVar21 + -8) = 0x1421fb1d4;
        (*p_Var8)(pUVar9,param_3,(void *)0x0);
        pFVar22 = (FOutParmRec *)((ulonglong)(puVar21 + 0xf) & 0xfffffffffffffff0);
        if (param_3->MostRecentPropertyAddress == (uchar *)0x0) {
          local_138 = param_3;
          *(undefined8 *)(puVar21 + -0x38) = 0x1421fb1fe;
          `ProcessScriptFunction<void_(__cdecl*)(UObject_*,FFrame_&,void_*)>'::__l37::<lambda_1>::
          operator()(&local_138);
        }
        puVar18 = local_108.Locals;
        puVar14 = param_3->MostRecentPropertyAddress;
        if (puVar14 == (uchar *)0x0) {
          if (pFVar16->ArrayDim < 1) {
            *(int *)(puVar21 + -8) = pFVar16->ArrayDim;
            *(undefined4 *)(puVar21 + -0x10) = 0;
            *(undefined8 *)(puVar21 + -0x38) = 0x1421fb23e;
            bVar13 = FDebug::CheckVerifyFailedImpl2
                               ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
            if (bVar13) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
          if (puVar18 == (uchar *)0x0) {
            *(undefined8 *)(puVar21 + -0x38) = 0x1421fb269;
            bVar13 = FDebug::CheckVerifyFailedImpl2
                               ("ContainerPtr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2de,L"");
            if (bVar13) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
          puVar14 = puVar18 + pFVar16->Offset_Internal;
        }
        pFVar22->PropAddr = puVar14;
        pFVar22->Property = pFVar16;
        if (*ppFVar24 == (FOutParmRec *)0x0) {
          *ppFVar24 = pFVar22;
          puVar21 = puVar21 + -0x30;
        }
        else {
          (*ppFVar24)->NextOutParm = pFVar22;
          ppFVar24 = &(*ppFVar24)->NextOutParm;
          puVar21 = puVar21 + -0x30;
        }
      }
    }
    pbVar7 = param_3->Code;
    pFVar16 = (FProperty *)pFVar16->_padding_;
    param_2 = local_130;
    puVar14 = local_128;
    puVar18 = local_108.Locals;
    bVar1 = *pbVar7;
  }
  param_3->Code = pbVar7 + 1;
  if (*ppFVar24 != (FOutParmRec *)0x0) {
    (*ppFVar24)->NextOutParm = (FOutParmRec *)0x0;
  }
  if (puVar14 == (uchar *)0x0) {
    for (pFVar16 = param_2->FirstPropertyToInit; local_108.Locals = puVar18,
        pFVar16 != (FProperty *)0x0; pFVar16 = pFVar16->PostConstructLinkNext) {
      if (((uint)(int)pFVar16->PropertyFlags >> 9 & 1) == 0) {
        pcVar11 = *(code **)(pFVar16->_padding_ + 0x150);
        if (pFVar16->ArrayDim < 1) {
          *(int *)(puVar21 + 0x28) = pFVar16->ArrayDim;
          *(undefined4 *)(puVar21 + 0x20) = 0;
          *(undefined8 *)(puVar21 + -8) = 0x1421fb545;
          bVar13 = FDebug::CheckVerifyFailedImpl2
                             ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
          if (bVar13) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        if (puVar18 == (uchar *)0x0) {
          *(undefined8 *)(puVar21 + -8) = 0x1421fb570;
          bVar13 = FDebug::CheckVerifyFailedImpl2
                             ("ContainerPtr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2de,L"");
          if (bVar13) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        *(undefined8 *)(puVar21 + -8) = 0x1421fb582;
        (*pcVar11)(pFVar16);
      }
      else {
        iVar4 = pFVar16->ArrayDim;
        iVar5 = pFVar16->ElementSize;
        if (iVar4 < 1) {
          *(int *)(puVar21 + 0x28) = iVar4;
          *(undefined4 *)(puVar21 + 0x20) = 0;
          *(undefined8 *)(puVar21 + -8) = 0x1421fb4c7;
          bVar13 = FDebug::CheckVerifyFailedImpl2
                             ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
          if (bVar13) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        if (puVar18 == (uchar *)0x0) {
          *(undefined8 *)(puVar21 + -8) = 0x1421fb4f2;
          bVar13 = FDebug::CheckVerifyFailedImpl2
                             ("ContainerPtr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2de,L"");
          if (bVar13) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        iVar6 = pFVar16->Offset_Internal;
        *(undefined8 *)(puVar21 + -8) = 0x1421fb509;
        memset(puVar18 + iVar6,0,(longlong)iVar5 * (longlong)iVar4);
      }
      puVar18 = local_108.Locals;
    }
  }
  p_Var8 = local_110;
  pUVar9 = local_118;
  pvVar12 = local_120;
  if (0 < (int)param_2->_padding_) {
    *(undefined8 *)(puVar21 + -8) = 0x1421fb5a6;
    (*p_Var8)(pUVar9,&local_108,pvVar12);
  }
  if (puVar14 == (uchar *)0x0) {
    puVar14 = local_108.Locals;
    for (plVar10 = (longlong *)param_2->_padding_; local_108.Locals = puVar14,
        plVar10 != (longlong *)0x0; plVar10 = (longlong *)plVar10[0xb]) {
      if ((((ulonglong)plVar10[7] >> 8 & 1) == 0) && (((ulonglong)plVar10[7] >> 0x24 & 1) == 0)) {
        pcVar11 = *(code **)(*plVar10 + 0x138);
        if ((int)plVar10[6] < 1) {
          *(int *)(puVar21 + 0x28) = (int)plVar10[6];
          *(undefined4 *)(puVar21 + 0x20) = 0;
          *(undefined8 *)(puVar21 + -8) = 0x1421fb614;
          bVar13 = FDebug::CheckVerifyFailedImpl2
                             ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
          if (bVar13) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        if (puVar14 == (uchar *)0x0) {
          *(undefined8 *)(puVar21 + -8) = 0x1421fb63f;
          bVar13 = FDebug::CheckVerifyFailedImpl2
                             ("ContainerPtr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2de,L"");
          if (bVar13) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        iVar4 = *(int *)((longlong)plVar10 + 0x44);
        *(undefined8 *)(puVar21 + -8) = 0x1421fb651;
        (*pcVar11)(plVar10,puVar14 + iVar4);
      }
      puVar14 = local_108.Locals;
    }
  }
  param_3->bAbortingExecution = (bool)(param_3->bAbortingExecution | local_108.bAbortingExecution);
  *(undefined8 *)(puVar21 + -8) = 0x1421fb675;
  FFrame::~FFrame(&local_108);
  *(undefined8 *)(puVar21 + -8) = 0x1421fb684;
  return;
}

// RemoveAllSwap<`FPackageHarvester::EnterIncludedScope'::__l2::<lambda_1>_> @ 1421fbf60

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<enum_ESaveRealm,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::
RemoveAllSwap<_FPackageHarvester::EnterIncludedScope_::__l2::<lambda_1>_>
          (void *this,<lambda_1> *param_1,EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FHarvestedRealm *this_00;
  int iVar6;
  void *pvVar7;
  uint uVar8;
  longlong lVar9;
  
  iVar5 = *(int *)((longlong)this + 0x10);
  bVar2 = false;
  uVar8 = 0;
  if (0 < iVar5) {
    lVar9 = 0;
    iVar6 = iVar5;
    do {
      uVar4 = 0;
      if ((int)uVar8 < iVar6) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          iVar5 = (*pcVar1)();
          return iVar5;
        }
      }
      pvVar7 = this;
      if (*(void **)((longlong)this + 8) != (void *)0x0) {
        pvVar7 = *(void **)((longlong)this + 8);
      }
      this_00 = FSaveContext::GetHarvestedRealm
                          (param_1->__this->SaveContext,*(ESaveRealm *)(lVar9 + (longlong)pvVar7));
      bVar3 = FHarvestedRealm::IsCellIncluded(this_00,param_1->Cell);
      if (bVar3) {
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 4;
      }
      else {
        bVar2 = true;
        uVar4 = 0;
        if ((int)uVar8 < *(int *)((longlong)this + 0x10)) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            iVar5 = (*pcVar1)();
            return iVar5;
          }
        }
        pvVar7 = this;
        if (*(void **)((longlong)this + 8) != (void *)0x0) {
          pvVar7 = *(void **)((longlong)this + 8);
        }
        iVar6 = ~uVar8 + *(int *)((longlong)this + 0x10);
        if (1 < iVar6) {
          iVar6 = 1;
        }
        if (iVar6 != 0) {
          memmove((void *)((longlong)pvVar7 + (longlong)(int)uVar8 * 4),
                  (void *)((longlong)pvVar7 +
                          (longlong)(*(int *)((longlong)this + 0x10) - iVar6) * 4),
                  (longlong)iVar6 << 2);
        }
        *(int *)((longlong)this + 0x10) = *(int *)((longlong)this + 0x10) + -1;
      }
      iVar6 = *(int *)((longlong)this + 0x10);
    } while ((int)uVar8 < iVar6);
    if ((bVar2) && (param_2 == Default)) {
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_ESaveRealm>_>
                (4,4,this,iVar6,(int *)((longlong)this + 0x14));
    }
  }
  return iVar5 - *(int *)((longlong)this + 0x10);
}

// RemoveAllSwap<`FPackageHarvester::EnterIncludedScope'::__l2::<lambda_1>_> @ 1421fc120

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<enum_ESaveRealm,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::
RemoveAllSwap<_FPackageHarvester::EnterIncludedScope_::__l2::<lambda_1>_>
          (void *this,<lambda_1>_conflict *param_1,EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FHarvestedRealm *this_00;
  int iVar6;
  void *pvVar7;
  uint uVar8;
  longlong lVar9;
  UObject *local_res20;
  
  iVar5 = *(int *)((longlong)this + 0x10);
  bVar2 = false;
  uVar8 = 0;
  if (0 < iVar5) {
    lVar9 = 0;
    iVar6 = iVar5;
    do {
      uVar4 = 0;
      if ((int)uVar8 < iVar6) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          iVar5 = (*pcVar1)();
          return iVar5;
        }
      }
      pvVar7 = this;
      if (*(void **)((longlong)this + 8) != (void *)0x0) {
        pvVar7 = *(void **)((longlong)this + 8);
      }
      this_00 = FSaveContext::GetHarvestedRealm
                          (param_1->__this->SaveContext,*(ESaveRealm *)(lVar9 + (longlong)pvVar7));
      local_res20 = (param_1->Object).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res20);
      }
      bVar3 = FHarvestedRealm::IsIncluded(this_00,(TObjectPtr<UObject>)&local_res20);
      if (bVar3) {
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 4;
      }
      else {
        bVar2 = true;
        uVar4 = 0;
        if ((int)uVar8 < *(int *)((longlong)this + 0x10)) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            iVar5 = (*pcVar1)();
            return iVar5;
          }
        }
        pvVar7 = this;
        if (*(void **)((longlong)this + 8) != (void *)0x0) {
          pvVar7 = *(void **)((longlong)this + 8);
        }
        iVar6 = ~uVar8 + *(int *)((longlong)this + 0x10);
        if (1 < iVar6) {
          iVar6 = 1;
        }
        if (iVar6 != 0) {
          memmove((void *)((longlong)pvVar7 + (longlong)(int)uVar8 * 4),
                  (void *)((longlong)pvVar7 +
                          (longlong)(*(int *)((longlong)this + 0x10) - iVar6) * 4),
                  (longlong)iVar6 << 2);
        }
        *(int *)((longlong)this + 0x10) = *(int *)((longlong)this + 0x10) + -1;
      }
      iVar6 = *(int *)((longlong)this + 0x10);
    } while ((int)uVar8 < iVar6);
    if ((bVar2) && (param_2 == Default)) {
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_ESaveRealm>_>
                (4,4,this,iVar6,(int *)((longlong)this + 0x14));
    }
  }
  return iVar5 - *(int *)((longlong)this + 0x10);
}

// RemoveAllSwap<`FPackageHarvester::EnterNewExportOnlyScope'::__l2::<lambda_1>_> @ 1421fc310

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<enum_ESaveRealm,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::
RemoveAllSwap<_FPackageHarvester::EnterNewExportOnlyScope_::__l2::<lambda_1>_>
          (void *this,<lambda_1> *param_1,EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FHarvestedRealm *this_00;
  int iVar6;
  void *pvVar7;
  uint uVar8;
  longlong lVar9;
  UObject *local_res20;
  
  iVar5 = *(int *)((longlong)this + 0x10);
  bVar2 = false;
  uVar8 = 0;
  if (0 < iVar5) {
    lVar9 = 0;
    iVar6 = iVar5;
    do {
      uVar4 = 0;
      if ((int)uVar8 < iVar6) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          iVar5 = (*pcVar1)();
          return iVar5;
        }
      }
      pvVar7 = this;
      if (*(void **)((longlong)this + 8) != (void *)0x0) {
        pvVar7 = *(void **)((longlong)this + 8);
      }
      this_00 = FSaveContext::GetHarvestedRealm
                          (param_1->__this->SaveContext,*(ESaveRealm *)(lVar9 + (longlong)pvVar7));
      local_res20 = param_1->Export;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res20);
      }
      bVar3 = FHarvestedRealm::IsExport(this_00,(TObjectPtr<UObject>)&local_res20);
      if (bVar3) {
        bVar2 = true;
        uVar4 = 0;
        if ((int)uVar8 < *(int *)((longlong)this + 0x10)) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            iVar5 = (*pcVar1)();
            return iVar5;
          }
        }
        pvVar7 = this;
        if (*(void **)((longlong)this + 8) != (void *)0x0) {
          pvVar7 = *(void **)((longlong)this + 8);
        }
        iVar6 = ~uVar8 + *(int *)((longlong)this + 0x10);
        if (1 < iVar6) {
          iVar6 = 1;
        }
        if (iVar6 != 0) {
          memmove((void *)((longlong)pvVar7 + (longlong)(int)uVar8 * 4),
                  (void *)((longlong)pvVar7 +
                          (longlong)(*(int *)((longlong)this + 0x10) - iVar6) * 4),
                  (longlong)iVar6 << 2);
        }
        *(int *)((longlong)this + 0x10) = *(int *)((longlong)this + 0x10) + -1;
      }
      else {
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 4;
      }
      iVar6 = *(int *)((longlong)this + 0x10);
    } while ((int)uVar8 < iVar6);
    if ((bVar2) && (param_2 == Default)) {
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_ESaveRealm>_>
                (4,4,this,iVar6,(int *)((longlong)this + 0x14));
    }
  }
  return iVar5 - *(int *)((longlong)this + 0x10);
}

// RemoveAllSwap<`FPackageHarvester::EnterNotExcludedScope'::__l2::<lambda_1>_> @ 1421fc500

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<enum_ESaveRealm,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::
RemoveAllSwap<_FPackageHarvester::EnterNotExcludedScope_::__l2::<lambda_1>_>
          (void *this,<lambda_1> *param_1,EAllowShrinking param_2)

{
  ESaveRealm EVar1;
  FObjectStatus *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  void *pvVar9;
  uint uVar10;
  longlong lVar11;
  UObject *local_48 [2];
  
  iVar7 = *(int *)((longlong)this + 0x10);
  uVar10 = 0;
  bVar4 = false;
  if (0 < iVar7) {
    lVar11 = 0;
    iVar8 = iVar7;
    do {
      uVar6 = 0;
      if ((int)uVar10 < iVar8) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          iVar7 = (*pcVar3)();
          return iVar7;
        }
      }
      pFVar2 = param_1->ObjectStatus;
      pvVar9 = this;
      if (*(void **)((longlong)this + 8) != (void *)0x0) {
        pvVar9 = *(void **)((longlong)this + 8);
      }
      EVar1 = *(ESaveRealm *)(lVar11 + (longlong)pvVar9);
      local_48[0] = (param_1->Object).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48[0] != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_48[0]);
      }
      bVar5 = ConditionallyExcludeObjectForRealm
                        (param_1->__this->SaveContext,(TObjectPtr<UObject>)local_48,pFVar2,EVar1);
      if (bVar5) {
        bVar4 = true;
        uVar6 = 0;
        if ((int)uVar10 < *(int *)((longlong)this + 0x10)) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            iVar7 = (*pcVar3)();
            return iVar7;
          }
        }
        pvVar9 = this;
        if (*(void **)((longlong)this + 8) != (void *)0x0) {
          pvVar9 = *(void **)((longlong)this + 8);
        }
        iVar8 = ~uVar10 + *(int *)((longlong)this + 0x10);
        if (1 < iVar8) {
          iVar8 = 1;
        }
        if (iVar8 != 0) {
          memmove((void *)((longlong)pvVar9 + (longlong)(int)uVar10 * 4),
                  (void *)((longlong)pvVar9 +
                          (longlong)(*(int *)((longlong)this + 0x10) - iVar8) * 4),
                  (longlong)iVar8 << 2);
        }
        *(int *)((longlong)this + 0x10) = *(int *)((longlong)this + 0x10) + -1;
      }
      else {
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 4;
      }
      iVar8 = *(int *)((longlong)this + 0x10);
    } while ((int)uVar10 < iVar8);
    if ((bVar4) && (param_2 == Default)) {
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_ESaveRealm>_>
                (4,4,this,iVar8,(int *)((longlong)this + 0x14));
    }
  }
  return iVar7 - *(int *)((longlong)this + 0x10);
}

// RemoveAllSwap<`FPackageHarvester::EnterNotPreviouslyExcludedScope'::__l2::<lambda_1>_> @ 1421fc700

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<enum_ESaveRealm,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::
RemoveAllSwap<_FPackageHarvester::EnterNotPreviouslyExcludedScope_::__l2::<lambda_1>_>
          (void *this,<lambda_1> *param_1,EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FHarvestedRealm *this_00;
  int iVar6;
  void *pvVar7;
  uint uVar8;
  longlong lVar9;
  UObject *local_res20;
  
  iVar5 = *(int *)((longlong)this + 0x10);
  bVar2 = false;
  uVar8 = 0;
  if (0 < iVar5) {
    lVar9 = 0;
    iVar6 = iVar5;
    do {
      uVar4 = 0;
      if ((int)uVar8 < iVar6) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          iVar5 = (*pcVar1)();
          return iVar5;
        }
      }
      pvVar7 = this;
      if (*(void **)((longlong)this + 8) != (void *)0x0) {
        pvVar7 = *(void **)((longlong)this + 8);
      }
      this_00 = FSaveContext::GetHarvestedRealm
                          (param_1->__this->SaveContext,*(ESaveRealm *)(lVar9 + (longlong)pvVar7));
      local_res20 = (param_1->Object).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res20);
      }
      bVar3 = FHarvestedRealm::IsExcluded(this_00,(TObjectPtr<UObject>)&local_res20);
      if (bVar3) {
        bVar2 = true;
        uVar4 = 0;
        if ((int)uVar8 < *(int *)((longlong)this + 0x10)) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            iVar5 = (*pcVar1)();
            return iVar5;
          }
        }
        pvVar7 = this;
        if (*(void **)((longlong)this + 8) != (void *)0x0) {
          pvVar7 = *(void **)((longlong)this + 8);
        }
        iVar6 = ~uVar8 + *(int *)((longlong)this + 0x10);
        if (1 < iVar6) {
          iVar6 = 1;
        }
        if (iVar6 != 0) {
          memmove((void *)((longlong)pvVar7 + (longlong)(int)uVar8 * 4),
                  (void *)((longlong)pvVar7 +
                          (longlong)(*(int *)((longlong)this + 0x10) - iVar6) * 4),
                  (longlong)iVar6 << 2);
        }
        *(int *)((longlong)this + 0x10) = *(int *)((longlong)this + 0x10) + -1;
      }
      else {
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 4;
      }
      iVar6 = *(int *)((longlong)this + 0x10);
    } while ((int)uVar8 < iVar6);
    if ((bVar2) && (param_2 == Default)) {
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_ESaveRealm>_>
                (4,4,this,iVar6,(int *)((longlong)this + 0x14));
    }
  }
  return iVar5 - *(int *)((longlong)this + 0x10);
}

// Reverse<FDeferredScriptLoader> @ 1421fcdf0

void __cdecl AlgoImpl::Reverse<FDeferredScriptLoader>(FDeferredScriptLoader *param_1,int param_2)

{
  FWeakObjectPtr FVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  FDeferredScriptLoader *pFVar5;
  longlong lVar6;
  
  lVar6 = (longlong)(param_2 / 2);
  if (0 < param_2 / 2) {
    pFVar5 = param_1 + (param_2 + -1);
    do {
      FVar1 = (param_1->TargetScriptContainerPtr).WeakPtr;
      lVar2 = pFVar5->_padding_;
      lVar3 = param_1->_padding_;
      lVar4 = param_1->_padding_;
      param_1->_padding_ = pFVar5->_padding_;
      param_1->_padding_ = lVar2;
      (param_1->TargetScriptContainerPtr).WeakPtr = (pFVar5->TargetScriptContainerPtr).WeakPtr;
      pFVar5->_padding_ = lVar3;
      pFVar5->_padding_ = lVar4;
      (pFVar5->TargetScriptContainerPtr).WeakPtr = FVar1;
      lVar6 = lVar6 + -1;
      param_1 = param_1 + 1;
      pFVar5 = pFVar5 + -1;
    } while (lVar6 != 0);
  }
  return;
}

// SerializeFromMismatchedTagTemplate<`FSoftClassPath::SerializeFromMismatchedTag'::__l2::UClassTypePolicy> @ 1421fce50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
SerializeFromMismatchedTagTemplate<_FSoftClassPath::SerializeFromMismatchedTag_::__l2::UClassTypePolicy>
          (FString *param_1,FPropertyTag *param_2,FStructuredArchiveSlot param_3)

{
  FName FVar1;
  FScriptContainerElement *pFVar2;
  FNameEntryId FVar3;
  undefined4 extraout_var;
  FName FVar4;
  FString *pFVar5;
  undefined4 extraout_var_00;
  FName FVar6;
  undefined4 extraout_var_01;
  FName FVar7;
  int iVar8;
  undefined1 auStack_8b8 [32];
  FName local_898;
  FString local_890;
  FString local_880;
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1035];
  wchar_t local_32 [5];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_8b8;
  FVar3 = FNameEntryId::FromValidEName((EName)&local_898);
  FVar1 = param_2->Type;
  FVar4.Number = 0;
  FVar4.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar3.Value);
  if (FVar1 == FVar4) {
    local_898.ComparisonIndex.Value = 0;
    local_898.Number = 0;
    (**(code **)(**(longlong **)(*(longlong *)param_3 + 8) + 0x168))
              (*(longlong **)(*(longlong *)param_3 + 8),&local_898);
    if (local_898 == (FName)0x0) {
      if (param_1 == &local_880) {
        return true;
      }
      pFVar2 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_1->Data).ArrayNum = 0;
      (param_1->Data).ArrayMax = 0;
      return true;
    }
    pFVar5 = UObjectBaseUtility::GetPathName
                       ((UObjectBaseUtility *)local_898,&local_890,(UObject *)0x0);
    if (param_1 != pFVar5) {
      pFVar2 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (param_1->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_1->Data).ArrayNum = (pFVar5->Data).ArrayNum;
      (param_1->Data).ArrayMax = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
  }
  else {
    FVar3 = FNameEntryId::FromValidEName((EName)&local_898);
    FVar6.Number = 0;
    FVar6.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar3.Value);
    if (FVar1 == FVar6) {
      local_898.ComparisonIndex.Value = 0;
      local_898.Number = 0;
      (**(code **)(**(longlong **)(*(longlong *)param_3 + 8) + 0x178))
                (*(longlong **)(*(longlong *)param_3 + 8),&local_898);
      local_890.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_898;
      local_868.Base = local_848;
      local_868.bIsDynamic = false;
      local_868.bIsExternal = false;
      local_868.CurPos = local_848;
      local_868.End = local_32;
      FName::AppendString((FName *)&local_890,&local_868);
      FString::AssignRange
                (param_1,local_868.Base,
                 (int)((longlong)local_868.CurPos - (longlong)local_868.Base >> 1));
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
      return true;
    }
    FVar1 = param_2->Type;
    FVar3 = FNameEntryId::FromValidEName((EName)&local_898);
    FVar7.Number = 0;
    FVar7.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_01,FVar3.Value);
    if (FVar1 != FVar7) {
      return false;
    }
    local_890.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_890.Data.ArrayNum = 0;
    local_890.Data.ArrayMax = 0;
    operator<<(*(FArchive **)(*(longlong *)param_3 + 8),&local_890);
    iVar8 = local_890.Data.ArrayNum + -1;
    if (local_890.Data.ArrayNum == 0) {
      iVar8 = 0;
    }
    FString::AssignRange(param_1,(wchar_t *)local_890.Data.AllocatorInstance.Data,iVar8);
  }
  if ((FName)local_890.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_890.Data.AllocatorInstance.Data);
  }
  return true;
}

// SerializeFromMismatchedTagTemplate<`FSoftObjectPath::SerializeFromMismatchedTag'::__l2::UObjectTypePolicy> @ 1421fd070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
SerializeFromMismatchedTagTemplate<_FSoftObjectPath::SerializeFromMismatchedTag_::__l2::UObjectTypePolicy>
          (FString *param_1,FPropertyTag *param_2,FStructuredArchiveSlot param_3)

{
  FName FVar1;
  FScriptContainerElement *pFVar2;
  FNameEntryId FVar3;
  undefined4 extraout_var;
  FName FVar4;
  FString *pFVar5;
  undefined4 extraout_var_00;
  FName FVar6;
  undefined4 extraout_var_01;
  FName FVar7;
  int iVar8;
  undefined1 auStack_8b8 [32];
  FName local_898;
  FString local_890;
  FString local_880;
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1035];
  wchar_t local_32 [5];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_8b8;
  FVar3 = FNameEntryId::FromValidEName((EName)&local_898);
  FVar1 = param_2->Type;
  FVar4.Number = 0;
  FVar4.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar3.Value);
  if (FVar1 == FVar4) {
    local_898.ComparisonIndex.Value = 0;
    local_898.Number = 0;
    (**(code **)(**(longlong **)(*(longlong *)param_3 + 8) + 0x168))
              (*(longlong **)(*(longlong *)param_3 + 8),&local_898);
    if (local_898 == (FName)0x0) {
      if (param_1 == &local_880) {
        return true;
      }
      pFVar2 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_1->Data).ArrayNum = 0;
      (param_1->Data).ArrayMax = 0;
      return true;
    }
    pFVar5 = UObjectBaseUtility::GetPathName
                       ((UObjectBaseUtility *)local_898,&local_890,(UObject *)0x0);
    if (param_1 != pFVar5) {
      pFVar2 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (param_1->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_1->Data).ArrayNum = (pFVar5->Data).ArrayNum;
      (param_1->Data).ArrayMax = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
  }
  else {
    FVar3 = FNameEntryId::FromValidEName((EName)&local_898);
    FVar6.Number = 0;
    FVar6.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar3.Value);
    if (FVar1 == FVar6) {
      local_898.ComparisonIndex.Value = 0;
      local_898.Number = 0;
      (**(code **)(**(longlong **)(*(longlong *)param_3 + 8) + 0x178))
                (*(longlong **)(*(longlong *)param_3 + 8),&local_898);
      local_890.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_898;
      local_868.Base = local_848;
      local_868.bIsDynamic = false;
      local_868.bIsExternal = false;
      local_868.CurPos = local_848;
      local_868.End = local_32;
      FName::AppendString((FName *)&local_890,&local_868);
      FString::AssignRange
                (param_1,local_868.Base,
                 (int)((longlong)local_868.CurPos - (longlong)local_868.Base >> 1));
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
      return true;
    }
    FVar1 = param_2->Type;
    FVar3 = FNameEntryId::FromValidEName((EName)&local_898);
    FVar7.Number = 0;
    FVar7.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_01,FVar3.Value);
    if (FVar1 != FVar7) {
      return false;
    }
    local_890.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_890.Data.ArrayNum = 0;
    local_890.Data.ArrayMax = 0;
    operator<<(*(FArchive **)(*(longlong *)param_3 + 8),&local_890);
    iVar8 = local_890.Data.ArrayNum + -1;
    if (local_890.Data.ArrayNum == 0) {
      iVar8 = 0;
    }
    FString::AssignRange(param_1,(wchar_t *)local_890.Data.AllocatorInstance.Data,iVar8);
  }
  if ((FName)local_890.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_890.Data.AllocatorInstance.Data);
  }
  return true;
}

// WriteToString<256,FName,TStringView<wchar_t>_> @ 1421fd2e0

TStringBuilderWithBuffer<wchar_t,256> * __cdecl
WriteToString<256,FName,TStringView<wchar_t>_>
          (TStringBuilderWithBuffer<wchar_t,256> *__return_storage_ptr__,FName *param_1,
          TStringView<wchar_t> *param_2)

{
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  FName::AppendString(param_1,(TStringBuilderBase<wchar_t> *)__return_storage_ptr__);
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,param_2->DataPtr,
             (int)*(undefined8 *)&param_2->Size);
  return __return_storage_ptr__;
}

// WriteToString<1035,FName_&> @ 1421fd340

TStringBuilderWithBuffer<wchar_t,1035> * __cdecl
WriteToString<1035,FName_&>
          (TStringBuilderWithBuffer<wchar_t,1035> *__return_storage_ptr__,FName *param_1)

{
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)&__return_storage_ptr__->field_0x836;
  FName::AppendString(param_1,(TStringBuilderBase<wchar_t> *)__return_storage_ptr__);
  return __return_storage_ptr__;
}

// WriteToString<1035,FName_&,char,FName_&> @ 1421fd390

TStringBuilderWithBuffer<wchar_t,1035> * __cdecl
WriteToString<1035,FName_&,char,FName_&>
          (TStringBuilderWithBuffer<wchar_t,1035> *__return_storage_ptr__,FName *param_1,
          char *param_2,FName *param_3)

{
  char cVar1;
  
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)&__return_storage_ptr__->field_0x836;
  FName::AppendString(param_1,(TStringBuilderBase<wchar_t> *)__return_storage_ptr__);
  cVar1 = *param_2;
  if ((ulonglong)__return_storage_ptr__->_padding_ < __return_storage_ptr__->_padding_ + 2U) {
    TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,1);
  }
  *(short *)__return_storage_ptr__->_padding_ = (short)cVar1;
  __return_storage_ptr__->_padding_ = __return_storage_ptr__->_padding_ + 2;
  FName::AppendString(param_3,(TStringBuilderBase<wchar_t> *)__return_storage_ptr__);
  return __return_storage_ptr__;
}

// WriteToUtf8String<256,FSoftObjectPath_const_&> @ 1421fd420

TStringBuilderWithBuffer<char8_t,256> * __cdecl
WriteToUtf8String<256,FSoftObjectPath_const_&>
          (TStringBuilderWithBuffer<char8_t,256> *__return_storage_ptr__,FSoftObjectPath *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  int iVar4;
  ulong64 uVar5;
  
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  if ((param_1->AssetPath).PackageName == (FName)0x0) {
    return __return_storage_ptr__;
  }
  operator<<((TStringBuilderBase<char8_t> *)__return_storage_ptr__,&param_1->AssetPath);
  iVar1 = (param_1->SubPathString).Data.ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    if ((ulonglong)__return_storage_ptr__->_padding_ < __return_storage_ptr__->_padding_ + 1U) {
      TStringBuilderBase<char8_t>::Extend((TStringBuilderBase<char8_t> *)__return_storage_ptr__,1);
    }
    *(undefined1 *)__return_storage_ptr__->_padding_ = 0x3a;
    __return_storage_ptr__->_padding_ = __return_storage_ptr__->_padding_ + 1;
    iVar1 = (param_1->SubPathString).Data.ArrayNum;
    pFVar2 = (param_1->SubPathString).Data.AllocatorInstance.Data;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    uVar5 = (ulong64)iVar4;
    if ((ulonglong)__return_storage_ptr__->_padding_ < uVar5 + __return_storage_ptr__->_padding_) {
      TStringBuilderBase<char8_t>::Extend
                ((TStringBuilderBase<char8_t> *)__return_storage_ptr__,uVar5);
    }
    if (iVar4 != 0) {
      pvVar3 = FGenericPlatformString::Memcpy
                         ((void *)__return_storage_ptr__->_padding_,pFVar2,uVar5);
      __return_storage_ptr__->_padding_ = (longlong)pvVar3 + uVar5;
    }
    return __return_storage_ptr__;
  }
  return __return_storage_ptr__;
}

// WriteToUtf8String<256,FTopLevelAssetPath_const_&> @ 1421fd530

TStringBuilderWithBuffer<char8_t,256> * __cdecl
WriteToUtf8String<256,FTopLevelAssetPath_const_&>
          (TStringBuilderWithBuffer<char8_t,256> *__return_storage_ptr__,FTopLevelAssetPath *param_1
          )

{
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  if (param_1->PackageName != (FName)0x0) {
    FName::AppendString(&param_1->PackageName,(TStringBuilderBase<char8_t> *)__return_storage_ptr__)
    ;
    if (param_1->AssetName != (FName)0x0) {
      if ((ulonglong)__return_storage_ptr__->_padding_ < __return_storage_ptr__->_padding_ + 1U) {
        TStringBuilderBase<char8_t>::Extend((TStringBuilderBase<char8_t> *)__return_storage_ptr__,1)
        ;
      }
      *(undefined1 *)__return_storage_ptr__->_padding_ = 0x2e;
      __return_storage_ptr__->_padding_ = __return_storage_ptr__->_padding_ + 1;
      FName::AppendString(&param_1->AssetName,(TStringBuilderBase<char8_t> *)__return_storage_ptr__)
      ;
    }
  }
  return __return_storage_ptr__;
}

// WriteToUtf8String<1035,FTopLevelAssetPath_const_&> @ 1421fd5c0

TStringBuilderWithBuffer<char8_t,1035> * __cdecl
WriteToUtf8String<1035,FTopLevelAssetPath_const_&>
          (TStringBuilderWithBuffer<char8_t,1035> *__return_storage_ptr__,
          FTopLevelAssetPath *param_1)

{
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)&__return_storage_ptr__->field_0x42b;
  if (param_1->PackageName != (FName)0x0) {
    FName::AppendString(&param_1->PackageName,(TStringBuilderBase<char8_t> *)__return_storage_ptr__)
    ;
    if (param_1->AssetName != (FName)0x0) {
      if ((ulonglong)__return_storage_ptr__->_padding_ < __return_storage_ptr__->_padding_ + 1U) {
        TStringBuilderBase<char8_t>::Extend((TStringBuilderBase<char8_t> *)__return_storage_ptr__,1)
        ;
      }
      *(undefined1 *)__return_storage_ptr__->_padding_ = 0x2e;
      __return_storage_ptr__->_padding_ = __return_storage_ptr__->_padding_ + 1;
      FName::AppendString(&param_1->AssetName,(TStringBuilderBase<char8_t> *)__return_storage_ptr__)
      ;
    }
  }
  return __return_storage_ptr__;
}

// TBaseFunctorDelegateInstance<void___cdecl(FTopLevelAssetPath_const_&,UObject_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`FSoftObjectPath::LoadAsync'::__l2::<lambda_1>_> @ 1421fd650

TBaseFunctorDelegateInstance<void___cdecl(FTopLevelAssetPath_const_&,UObject_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,_public:_int___cdecl_FSoftObjectPath::LoadAsync(TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>,FLoadAssetAsyncOptionalParams)const_::_2_::<lambda_1>_>
* __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FTopLevelAssetPath_const_&,UObject_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`FSoftObjectPath::LoadAsync'::__l2::<lambda_1>_>
::
TBaseFunctorDelegateInstance<void___cdecl(FTopLevelAssetPath_const_&,UObject_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,_FSoftObjectPath::LoadAsync_::__l2::<lambda_1>_>
          (void *this,
          TBaseFunctorDelegateInstance<void___cdecl(FTopLevelAssetPath_const_&,UObject_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,_public:_int___cdecl_FSoftObjectPath::LoadAsync(TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>,FLoadAssetAsyncOptionalParams)const_::_2_::<lambda_1>_>
          *param_1)

{
  *(undefined ***)this =
       &
       ___7__TCommonDelegateInstanceState___A6AXAEBUFTopLevelAssetPath__PEAVUObject__W4Type_EAsyncLoadingResult___ZUFDefaultDelegateUserPolicy____V__6B_
  ;
  *(longlong *)((longlong)this + 0x10) = param_1->_padding_;
  *(undefined ***)this =
       &TBaseFunctorDelegateInstance<void___cdecl(FTopLevelAssetPath_const_&,UObject_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`FSoftObjectPath::LoadAsync'::`2'::<lambda_1>_>
        ::_vftable_;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)((longlong)this + 0x18),&(param_1->Functor).RequestedPath);
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)((longlong)this + 0x38),&(param_1->Functor).PathToLoad);
  TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
              *)((longlong)this + 0x58),&(param_1->Functor).CompletionDelegate);
  return this;
}

// operator<< @ 142201770

TStringBuilderBase<char8_t> * __cdecl
operator<<(TStringBuilderBase<char8_t> *param_1,FTopLevelAssetPath *param_2)

{
  if (param_2->PackageName != (FName)0x0) {
    FName::AppendString(&param_2->PackageName,param_1);
    if (param_2->AssetName != (FName)0x0) {
      if (param_1->End < param_1->CurPos + 1) {
        TStringBuilderBase<char8_t>::Extend(param_1,1);
      }
      *param_1->CurPos = '.';
      param_1->CurPos = param_1->CurPos + 1;
      FName::AppendString(&param_2->AssetName,param_1);
    }
  }
  return param_1;
}

// operator<< @ 1422017e0

TStringBuilderBase<wchar_t> * __cdecl
operator<<(TStringBuilderBase<wchar_t> *param_1,FTopLevelAssetPath *param_2)

{
  if (param_2->PackageName != (FName)0x0) {
    FName::AppendString(&param_2->PackageName,param_1);
    if (param_2->AssetName != (FName)0x0) {
      if (param_1->End < param_1->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(param_1,1);
      }
      *param_1->CurPos = L'.';
      param_1->CurPos = param_1->CurPos + 1;
      FName::AppendString(&param_2->AssetName,param_1);
    }
  }
  return param_1;
}

// operator<< @ 142201860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FCbWriter * __cdecl operator<<(FCbWriter *param_1,FTopLevelAssetPath *param_2)

{
  undefined1 auStack_478 [32];
  TStringView<char8_t> local_458;
  TStringBuilderBase<char8_t> local_448;
  uchar local_428 [1035];
  uchar local_1d [5];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_478;
  local_448.Base = local_428;
  local_448.CurPos = local_428;
  local_448.bIsDynamic = false;
  local_448.bIsExternal = false;
  local_448.End = local_1d;
  if ((param_2->PackageName != (FName)0x0) &&
     (FName::AppendString(&param_2->PackageName,&local_448), param_2->AssetName != (FName)0x0)) {
    if (local_448.End < local_448.CurPos + 1) {
      TStringBuilderBase<char8_t>::Extend(&local_448,1);
    }
    *local_448.CurPos = '.';
    local_448.CurPos = local_448.CurPos + 1;
    FName::AppendString(&param_2->AssetName,&local_448);
  }
  local_458.Size = (int)local_448.CurPos - (int)local_448.Base;
  local_458.DataPtr = local_448.Base;
  FCbWriter::SetNameOrAddString(param_1,&local_458);
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_448);
  return param_1;
}

// operator() @ 142202760

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `ProcessLocalFunction'::__l2::<lambda_1>::operator()(void *this)

{
  UObjectBaseUtility *pUVar1;
  FName local_18;
  byte local_10;
  
  if ((*(uint *)&((UObjectBaseUtility *)**(longlong **)this)[4].field_0x10 & 0x400) == 0) {
    pUVar1 = (UObjectBaseUtility *)0x0;
    if ((int)(uint)*(byte *)(*(longlong *)((longlong)this + 0x10) + 0xa2) <= GMaxFunctionStatDepth)
    {
      pUVar1 = (UObjectBaseUtility *)**(longlong **)this;
    }
    FScopeCycleCounterUObject::FScopeCycleCounterUObject
              ((FScopeCycleCounterUObject *)&local_18,pUVar1);
    ProcessScriptFunction<void_(__cdecl*)(UObject_*,FFrame_&,void_*)>
              ((UObject *)**(undefined8 **)((longlong)this + 8),(UFunction *)**(undefined8 **)this,
               *(FFrame **)((longlong)this + 0x10),(void *)**(undefined8 **)((longlong)this + 0x18),
               ProcessLocalScriptFunction);
  }
  else {
    if (GVerboseScriptStats == 0) {
      pUVar1 = (UObjectBaseUtility *)0x0;
    }
    else {
      pUVar1 = (UObjectBaseUtility *)**(undefined8 **)((longlong)this + 8);
    }
    FScopeCycleCounterUObject::FScopeCycleCounterUObject
              ((FScopeCycleCounterUObject *)&local_18,pUVar1);
    UFunction::Invoke((UFunction *)**(undefined8 **)this,
                      (UObject *)**(undefined8 **)((longlong)this + 8),
                      *(FFrame **)((longlong)this + 0x10),
                      (void *)**(undefined8 **)((longlong)this + 0x18));
  }
  if ((local_10 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_10 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_10 & 4) != 0) {
    FThreadStats::AddMessage(local_18,CycleScopeEnd);
  }
  return;
}

// `scalar_deleting_destructor' @ 142202d50

void * __thiscall
IBaseDelegateInstance<void___cdecl(FTopLevelAssetPath_const_&,UObject_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142202d80

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FTopLevelAssetPath_const_&,UObject_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`FSoftObjectPath::LoadAsync'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x58));
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x28));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142202de0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FTopLevelAssetPath_const_&,UObject_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142202e10

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::SavePackageUtilities::AsyncWriteFile'::__l2::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x140,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142202e70

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::SavePackageUtilities::AsyncWriteFile'::__l2::<lambda_1>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142202eb0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142202ef0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<void,`FDefaultConstructedPropertyElement::FDefaultConstructedPropertyElement'::__l1::<lambda_4_>,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142202f30

void * __thiscall
TThreadSingleton<FBlueprintContextTracker>::_scalar_deleting_destructor_
          (TThreadSingleton<FBlueprintContextTracker> *this,uint param_1)

{
  ~TThreadSingleton<FBlueprintContextTracker>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142202f70

void * __thiscall
TThreadSingleton<FDeferredScriptTracker>::_scalar_deleting_destructor_
          (TThreadSingleton<FDeferredScriptTracker> *this,uint param_1)

{
  ~TThreadSingleton<FDeferredScriptTracker>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142202fb0

void * __thiscall
UE::SavePackageUtilities::Private::FArchiveSavePackageCollector::_scalar_deleting_destructor_
          (FArchiveSavePackageCollector *this,uint param_1)

{
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142202ff0

void * __thiscall
FBlueprintContextTracker::_scalar_deleting_destructor_(FBlueprintContextTracker *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->DisplayedWarningsMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DisplayedWarningsMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DisplayedWarningsMap);
  pFVar2 = (this->ScriptStack).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TThreadSingleton<FBlueprintContextTracker>::~TThreadSingleton<FBlueprintContextTracker>
            ((TThreadSingleton<FBlueprintContextTracker> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142203070

void * __thiscall
FDeferredScriptTracker::_scalar_deleting_destructor_(FDeferredScriptTracker *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->DeferredScriptLoads).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DeferredScriptLoads).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FLinkerLoad_*,FDeferredScriptLoader>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FLinkerLoad_*,FDeferredScriptLoader>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FLinkerLoad_*,FDeferredScriptLoader>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DeferredScriptLoads);
  TThreadSingleton<FDeferredScriptTracker>::~TThreadSingleton<FDeferredScriptTracker>
            ((TThreadSingleton<FDeferredScriptTracker> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1422030e0

void * __thiscall FFrame::_scalar_deleting_destructor_(FFrame *this,uint param_1)

{
  ~FFrame(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142203120

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void * __thiscall
FPackageHarvester::_scalar_deleting_destructor_(FPackageHarvester *this,uint param_1)

{
  ForElementType<ESaveRealm> FVar1;
  void *pvVar2;
  TNode *pTVar3;
  
  FVar1 = (this->CurrentExportHarvestingRealms).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<ESaveRealm>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  *(undefined4 *)&(this->TransientPropertyOverrides).field_0x48 = 0;
  pvVar2 = *(void **)&(this->TransientPropertyOverrides).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TransientPropertyOverrides);
  FExportDependencies::~FExportDependencies(&this->CurrentExportDependencies);
  pTVar3 = (this->ExportsToProcess).Tail;
  while (pTVar3 != (TNode *)0x0) {
    (this->ExportsToProcess).Tail = pTVar3->NextNode;
    FVar1 = (pTVar3->Item).HarvestedFromRealms.AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<ESaveRealm>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    ::operator_delete(pTVar3,0x30);
    pTVar3 = (this->ExportsToProcess).Tail;
  }
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x220);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142203200

void * __thiscall FStructOnScope::_scalar_deleting_destructor_(FStructOnScope *this,uint param_1)

{
  UObject *pUVar1;
  FWeakObjectPtr local_res8;
  undefined8 local_res18;
  
  this->_padding_ = (longlong)&___7FStructOnScope__6B_;
  if (this->OwnsMemory != false) {
    pUVar1 = FWeakObjectPtr::Get(&(this->ScriptStruct).WeakPtr);
    if (pUVar1 != (UObject *)0x0) {
      if (this->SampleStructMemory != (uchar *)0x0) {
        (**(code **)(*(longlong *)pUVar1 + 0x300))(pUVar1,this->SampleStructMemory,1);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res18 = 0;
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
      (this->ScriptStruct).WeakPtr = local_res8;
    }
    if (this->SampleStructMemory != (uchar *)0x0) {
      FMemory::Free(this->SampleStructMemory);
      this->SampleStructMemory = (uchar *)0x0;
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// ClearReturnValue @ 142206ae0

void __cdecl ClearReturnValue(FProperty *param_1,void *param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  if ((param_1 != (FProperty *)0x0) && (iVar2 = 0, 0 < param_1->ArrayDim)) {
    uVar1 = (ulonglong)(uint)param_1->ElementSize;
    do {
      if ((param_1->PropertyFlags & (CPF_NoDestructor|CPF_ZeroConstructor)) ==
          (CPF_NoDestructor|CPF_ZeroConstructor)) {
        memset(param_2,0,(longlong)(int)uVar1);
      }
      else {
        (**(code **)(param_1->_padding_ + 0x130))(param_1);
      }
      uVar1 = (ulonglong)param_1->ElementSize;
      iVar2 = iVar2 + 1;
      param_2 = (void *)((longlong)param_2 + uVar1);
    } while (iVar2 < param_1->ArrayDim);
  }
  return;
}

// ConditionallyExcludeObjectForRealm @ 142207180

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

bool __cdecl
ConditionallyExcludeObjectForRealm
          (FSaveContext *param_1,TObjectPtr<UObject> param_2,FObjectStatus *param_3,
          ESaveRealm param_4)

{
  UObject *pUVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  EObjectMark EVar6;
  EObjectMark EVar7;
  EEditorOnlyObjectFlags EVar8;
  UPackage *pUVar9;
  FName FVar10;
  FHarvestedRealm *this;
  TObjectPtr<UObject_const_>_u_0 TVar11;
  FObjectStatus *pFVar12;
  UClass *pUVar13;
  TObjectPtr<UObject_const_>_u_0 TVar14;
  uint uVar15;
  TObjectPtr<UObject_const_>_u_0 local_res10;
  UPackage *local_38;
  TObjectPtr<UObject_const_>_u_0 local_30;
  
  if (*(UObject **)param_2.field0_0x0 == (UObject *)0x0) {
    return false;
  }
  pUVar9 = UE::CoreUObject::Private::GetPackage(*(UObject **)param_2.field0_0x0);
  if (pUVar9 == (UPackage *)0x0) {
    local_38 = pUVar9;
    FVar10 = (FName)&local_38;
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (UE::GC::MarkAsReachable((UObject *)pUVar9),
       UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    FVar10 = UE::CoreUObject::Private::GetFName((UObject *)&local_res10.ObjectPtr);
  }
  pUVar1 = *(UObject **)FVar10;
  FLazyName::Resolve(&GLongCoreUObjectPackageName);
  if (pUVar1 == local_res10.DebugPtr) {
    return false;
  }
  this = FSaveContext::GetHarvestedRealm(param_1,param_4);
  local_res10 = *(TObjectPtr<UObject_const_>_u_0 *)param_2.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res10.DebugPtr != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10.DebugPtr);
  }
  bVar2 = FHarvestedRealm::IsExcluded(this,(TObjectPtr<UObject>)&local_res10);
  if (bVar2) {
    return true;
  }
  local_res10 = *(TObjectPtr<UObject_const_>_u_0 *)param_2.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res10.DebugPtr != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10.DebugPtr);
  }
  bVar2 = FHarvestedRealm::IsIncluded(this,(TObjectPtr<UObject>)&local_res10);
  if (bVar2) {
    return false;
  }
  TVar11 = *(TObjectPtr<UObject_const_>_u_0 *)param_2.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar11.DebugPtr != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(TVar11.DebugPtr);
  }
  local_res10 = TVar11;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (TVar11.DebugPtr != (UObject *)0x0) {
      UE::GC::MarkAsReachable(TVar11.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar11.DebugPtr != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(TVar11.DebugPtr);
    }
  }
  uVar15 = ((uint)((ulonglong)TVar11.DebugPtr >> 0x14) & 0xffff ^
           (uint)((ulonglong)TVar11.DebugPtr >> 4)) * -0x7a143595;
  uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
  iVar5 = TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
          FindIndexByHash<TObjectPtr<UObject_const_>_>
                    (&this->NotExcluded,uVar15 >> 0x10 ^ uVar15,
                     (TObjectPtr<UObject_const_> *)&local_res10.ObjectPtr);
  if (iVar5 != -1) {
    return false;
  }
  EVar6 = FSaveContext::GetExcludedObjectMarks(param_1,param_4);
  local_res10 = *(TObjectPtr<UObject_const_>_u_0 *)param_2.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res10.DebugPtr != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10.DebugPtr);
  }
  TVar11.DebugPtr = FSaveContext::ResolveForSave(param_1,(TObjectPtr<UObject>)&local_res10,param_3);
  EVar7 = GenerateMarksForObject(TVar11.DebugPtr,param_1);
  if ((EVar6 & EVar7) == OBJECTMARK_NOMARKS) {
    EVar8 = FSaveContext::GetEditorOnlyObjectFlags(param_1);
    if (((EVar8 >> 2 & 1) == 0) ||
       (cVar3 = (**(code **)(*(longlong *)TVar11.DebugPtr + 0x128))(TVar11.DebugPtr), cVar3 == '\0')
       ) {
      bVar2 = false;
      TVar14 = (TObjectPtr<UObject_const_>_u_0)
               *(TObjectPtr<UObject_const_>_u_0 *)&(TVar11.DebugPtr)->field_0x10;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar14.DebugPtr != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(TVar14.DebugPtr);
      }
      local_res10 = TVar14;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar14.DebugPtr != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(TVar14.DebugPtr);
      }
      pFVar12 = FSaveContext::GetCachedObjectStatus(param_1,(TObjectPtr<UObject>)&local_res10);
      local_30 = TVar14;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar14.DebugPtr != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(TVar14.DebugPtr);
      }
      bVar4 = ConditionallyExcludeObjectForRealm
                        (param_1,(TObjectPtr<UObject>)&local_30,pFVar12,param_4);
      if (bVar4) {
        bVar2 = UE::GC::GIsIncrementalReachabilityPending == false;
        goto LAB_14220736d;
      }
    }
    else {
      bVar2 = true;
    }
    TVar14 = (TObjectPtr<UObject_const_>_u_0)
             *(TObjectPtr<UObject_const_>_u_0 *)&(TVar11.DebugPtr)->field_0x20;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar14.DebugPtr != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(TVar14.DebugPtr);
    }
    local_res10 = TVar14;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar14.DebugPtr != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(TVar14.DebugPtr);
    }
    pFVar12 = FSaveContext::GetCachedObjectStatus(param_1,(TObjectPtr<UObject>)&local_res10);
    local_30 = TVar14;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar14.DebugPtr != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(TVar14.DebugPtr);
    }
    bVar4 = ConditionallyExcludeObjectForRealm
                      (param_1,(TObjectPtr<UObject>)&local_30,pFVar12,param_4);
    if (!bVar4) {
      if (bVar2) goto LAB_1422075c5;
      pUVar13 = Z_Construct_UClass_UStruct_NoRegister();
      iVar5 = (int)pUVar13->_padding_;
      if ((((iVar5 <= *(int *)(*(longlong *)&(TVar11.DebugPtr)->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&(TVar11.DebugPtr)->field_0x10 + 0x30) +
             (longlong)iVar5 * 8) == &pUVar13->_padding_)) && (TVar11.DebugPtr != (UObject *)0x0))
         && (TVar14 = (TObjectPtr<UObject_const_>_u_0)
                      *(TObjectPtr<UObject_const_>_u_0 *)&TVar11.DebugPtr[1].field_0x18,
            TVar14.DebugPtr != (UObject *)0x0)) {
        local_res10 = TVar14;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(TVar14.DebugPtr);
        }
        pFVar12 = FSaveContext::GetCachedObjectStatus(param_1,(TObjectPtr<UObject>)&local_res10);
        local_30 = TVar14;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(TVar14.DebugPtr);
        }
        bVar2 = ConditionallyExcludeObjectForRealm
                          (param_1,(TObjectPtr<UObject>)&local_30,pFVar12,param_4);
        if (bVar2) goto LAB_142207437;
      }
      TVar14.DebugPtr = UObject::GetArchetype(TVar11.DebugPtr);
      if (TVar14.DebugPtr == (UObject *)0x0) {
LAB_1422075c5:
        local_30.DebugPtr = TVar11.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(TVar11.DebugPtr);
        }
        TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
        Emplace<TObjectPtr<UObject>_const_&>
                  (&this->NotExcluded,(TObjectPtr<UObject> *)&local_res10.ObjectPtr,
                   (bool *)&local_30);
        return false;
      }
      local_res10.DebugPtr = TVar14.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(TVar14.DebugPtr);
      }
      pFVar12 = FSaveContext::GetCachedObjectStatus(param_1,(TObjectPtr<UObject>)&local_res10);
      local_30.DebugPtr = TVar14.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(TVar14.DebugPtr);
      }
      bVar2 = ConditionallyExcludeObjectForRealm
                        (param_1,(TObjectPtr<UObject>)&local_30,pFVar12,param_4);
      if (!bVar2) goto LAB_1422075c5;
    }
LAB_142207437:
    bVar2 = UE::GC::GIsIncrementalReachabilityPending == false;
  }
  else {
    local_30.DebugPtr = TVar11.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_142207377;
    bVar2 = TVar11.DebugPtr == (UObject *)0x0;
  }
LAB_14220736d:
  local_30.DebugPtr = TVar11.DebugPtr;
  if (!bVar2) {
    UE::GC::MarkAsReachable(TVar11.DebugPtr);
  }
LAB_142207377:
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
  Emplace<TObjectPtr<UObject>_const_&>
            (&this->Excluded,(TObjectPtr<UObject> *)&local_res10.ObjectPtr,(bool *)&local_30);
  return true;
}

// DoesObjectNeedLoadForEditorGame @ 142209a90

bool __cdecl DoesObjectNeedLoadForEditorGame(UObject *param_1)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  
  if ((param_1 == (UObject *)0x0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("InObject",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage\\PackageHarvester.cpp"
                         ,0xbd,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  cVar5 = '\0';
  pUVar1 = param_1;
  while ((pUVar1 != (UObject *)0x0 && (cVar5 == '\0'))) {
    cVar5 = (**(code **)(*(longlong *)pUVar1 + 0x118))(pUVar1);
    pUVar1 = *(UObject **)&pUVar1->field_0x20;
  }
  if ((*(uint *)&param_1->field_0x8 & 0x10) != 0) {
    if ((cVar5 == '\0') &&
       (cVar5 = (**(code **)(**(longlong **)&param_1->field_0x10 + 0x118))(), cVar5 == '\0')) {
      return false;
    }
    cVar5 = '\x01';
  }
  return (bool)cVar5;
}

// EmptyLinkFunctionForGeneratedCodeSoftObjectPath @ 14220a100

void __cdecl EmptyLinkFunctionForGeneratedCodeSoftObjectPath(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTemplateString @ 14220a110

void __cdecl EmptyLinkFunctionForGeneratedCodeTemplateString(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTopLevelAssetPath @ 14220a120

void __cdecl EmptyLinkFunctionForGeneratedCodeTopLevelAssetPath(void)

{
  return;
}

// FBlueprintContextGetThreadSingletonImpl @ 14220b370

FBlueprintContext * __cdecl FBlueprintContextGetThreadSingletonImpl(void)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FBlueprintContext *pFVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)_tls_index;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar5 * 8);
  if ((*(uint *)(lVar1 + 0xd30) & 1) == 0) {
    *(uint *)(lVar1 + 0xd30) = *(uint *)(lVar1 + 0xd30) | 1;
    FVirtualStackAllocator::FVirtualStackAllocator
              ((FVirtualStackAllocator *)(lVar1 + 0xcf0),0,AllOnDestruction);
    if (2 < (uint)BlueprintContextVirtualStackAllocatorDecommitMode) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7634585018982989628>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ScriptCore.cpp"
                         ,0xc4,
                         "BlueprintContextVirtualStackAllocatorDecommitMode >= 0 && BlueprintContextVirtualStackAllocatorDecommitMode < (int)EVirtualStackAllocatorDecommitMode::NumModes"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FBlueprintContext *)(*pcVar2)();
        return pFVar4;
      }
    }
    __tlregdtor(`FBlueprintContextGetThreadSingletonImpl'::__l2::
                _dynamic_atexit_destructor_for__ThreadLocalContext__);
  }
  return (FBlueprintContext *)
         (*(longlong *)((longlong)ThreadLocalStoragePointer + uVar5 * 8) + 0xcf0);
}

// GInitRunaway @ 14220cb20

void __cdecl GInitRunaway(void)

{
  FTlsAutoCleanup *pFVar1;
  undefined1 local_res8 [32];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FBlueprintContextTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar1 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FBlueprintContextTracker>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  pFVar1[2] = (FTlsAutoCleanup)0x0;
  *(undefined2 *)(pFVar1 + 3) = 0;
  return;
}

// GRegisterNative @ 14220cb60

uchar __cdecl
GRegisterNative(int param_1,_func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr **param_2)

{
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var1;
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var2;
  int iVar3;
  IReload *pIVar4;
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr **pp_Var5;
  
  if (param_1 != -1) {
    if ((0xff < (uint)param_1) ||
       (pp_Var5 = GNatives.Elements + (uint)param_1, iVar3 = GNativeDuplicate,
       *pp_Var5 != UObject::execUndefined)) {
      pp_Var5 = GNatives.Elements + (uint)param_1;
      p_Var1 = *pp_Var5;
      p_Var2 = *param_2;
      pIVar4 = GetActiveReloadInterface();
      iVar3 = param_1;
      if (pIVar4 != (IReload *)0x0) {
        (**(code **)((longlong)*pIVar4 + 0x20))(pIVar4,p_Var2,p_Var1);
        iVar3 = GNativeDuplicate;
      }
    }
    GNativeDuplicate = iVar3;
    *pp_Var5 = *param_2;
  }
  return '\0';
}

// GenerateMarksForObject @ 14220cc00

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

EObjectMark __cdecl GenerateMarksForObject(UObject *param_1,FSaveContext *param_2)

{
  FArchiveCookData *pFVar1;
  ITargetPlatform *pIVar2;
  char cVar3;
  EObjectMark EVar4;
  EObjectMark EVar5;
  ITargetPlatform *pIVar6;
  
  if ((*(uint *)&param_1->field_0x8 & 0x10) != 0) {
    return OBJECTMARK_NOMARKS;
  }
  cVar3 = (**(code **)(*(longlong *)param_1 + 0x100))();
  pIVar6 = (ITargetPlatform *)0x0;
  EVar4 = OBJECTMARK_NotForClient;
  if (cVar3 != '\0') {
    EVar4 = OBJECTMARK_NOMARKS;
  }
  cVar3 = (**(code **)(*(longlong *)param_1 + 0x108))(param_1);
  EVar5 = EVar4 | OBJECTMARK_NotForServer;
  if (cVar3 != '\0') {
    EVar5 = EVar4;
  }
  pFVar1 = (param_2->SaveArgs).ArchiveCookData;
  if ((((pFVar1 != (FArchiveCookData *)0x0) &&
       (pIVar2 = pFVar1->TargetPlatform, pIVar2 != (ITargetPlatform *)0x0)) &&
      ((cVar3 = (**(code **)(*(longlong *)&pIVar2->field_0x8 + 0x88))(&pIVar2->field_0x8),
       EVar5 != (OBJECTMARK_NotForServer|OBJECTMARK_NotForClient) || (cVar3 != '\0')))) &&
     ((cVar3 = (**(code **)(*(longlong *)param_1 + 0x110))(param_1,pIVar2), cVar3 == '\0' ||
      (cVar3 = (**(code **)(*(longlong *)&pIVar2->field_0x8 + 0x178))(&pIVar2->field_0x8,param_1),
      cVar3 == '\0')))) {
    EVar5 = EVar5 | OBJECTMARK_NotForTargetPlatform;
  }
  pFVar1 = (param_2->SaveArgs).ArchiveCookData;
  if (pFVar1 != (FArchiveCookData *)0x0) {
    pIVar6 = pFVar1->TargetPlatform;
  }
  if ((char)EVar5 == '`') {
    if ((pIVar6 == (ITargetPlatform *)0x0) &&
       (cVar3 = (**(code **)(*(longlong *)param_1 + 0x128))(param_1), cVar3 != '\0')) {
      return EVar5;
    }
    EVar5 = EVar5 | OBJECTMARK_EditorOnly;
  }
  return EVar5;
}

// IsValidCPPIdentifierChar @ 1422132b0

bool __cdecl IsValidCPPIdentifierChar(wchar_t param_1)

{
  if (((0x2f < (ushort)((ushort)param_1 - 0x30)) ||
      ((0x87fffffe03ffU >> ((ulonglong)((ushort)param_1 - 0x30) & 0x3f) & 1) == 0)) &&
     (0x19 < (ushort)(param_1 + L'ﾟ'))) {
    return false;
  }
  return true;
}

// LexToString @ 142213830

wchar_t * __cdecl LexToString(ESaveableStatus param_1)

{
  switch(param_1) {
  case Success:
    return L"is saveable";
  case PendingKill:
    return L"is pendingkill";
  case TransientFlag:
    return L"is transient";
  case TransientOverride:
    return L"is Overriden as transient";
  case AbstractClass:
    return L"has a Class with CLASS_Abstract";
  case DeprecatedClass:
    return L"has a Class with CLASS_Deprecated";
  case NewerVersionExistsClass:
    return L"has a Class with CLASS_NewerVersionExists";
  case OuterUnsaveable:
    return L"has an unsaveable Outer";
  case ClassUnsaveable:
    return L"has an unsaveable Class";
  case ExcludedByPlatform:
    return L"is excluded by TargetPlatform";
  default:
    return L"Unknown";
  }
}

// LoadFromCompactBinary @ 142213d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl LoadFromCompactBinary(FCbFieldView *param_1,FTopLevelAssetPath *param_2)

{
  ECbFieldError EVar1;
  uchar *puVar2;
  int iVar3;
  TStringView<char8_t> *pTVar4;
  int iVar5;
  undefined1 auStack_8c8 [32];
  FTopLevelAssetPath local_8a8;
  TStringView<wchar_t> local_898;
  TStringView<char8_t> local_888;
  TStringBuilderBase<wchar_t> local_878;
  wchar_t local_858 [1035];
  wchar_t local_42 [5];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_8c8;
  local_898.DataPtr = (wchar_t *)0x0;
  local_898.Size = 0;
  local_898._12_4_ = 0;
  local_8a8.PackageName.ComparisonIndex.Value = 0;
  local_8a8.PackageName.Number = 0;
  local_8a8.AssetName.ComparisonIndex.Value = 0;
  local_8a8.AssetName.Number = 0;
  pTVar4 = FCbFieldView::AsString(param_1,&local_888,(TStringView<char8_t> *)&local_898);
  local_878.Base = local_858;
  local_878.bIsDynamic = false;
  local_878.bIsExternal = false;
  local_878.CurPos = local_858;
  local_878.End = local_42;
  puVar2 = pTVar4->DataPtr;
  iVar5 = (int)*(undefined8 *)&pTVar4->Size;
  iVar3 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,puVar2,iVar5);
  if (local_878.End < local_878.CurPos + iVar3) {
    TStringBuilderBase<wchar_t>::Extend(&local_878,(longlong)iVar3);
  }
  if (iVar5 != 0) {
    local_878.CurPos = UE::Core::Private::Convert(local_878.CurPos,iVar3,puVar2,iVar5);
  }
  local_898.Size = (int)((longlong)local_878.CurPos - (longlong)local_878.Base >> 1);
  local_898.DataPtr = local_878.Base;
  FTopLevelAssetPath::TrySetPath(&local_8a8,&local_898);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_878);
  EVar1 = param_1->Error;
  param_2->PackageName = local_8a8.PackageName;
  param_2->AssetName = local_8a8.AssetName;
  return EVar1 == None;
}

// OutputLongestFunctions @ 142214680

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl OutputLongestFunctions(FOutputDevice *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  UField *pUVar3;
  bool bVar4;
  int iVar5;
  EInternalObjectFlags EVar6;
  uint uVar7;
  UClass *pUVar8;
  ulonglong uVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  TObjectPtr<UField>_u_0 local_res20;
  TArray<UFunction_*,TSizedDefaultAllocator<32>_> local_b8;
  TFieldIterator<UFunction> local_a8;
  TObjectIterator<UClass> local_90;
  FName local_78;
  FName local_70;
  FString local_68;
  FString local_58;
  code *local_48;
  undefined4 *local_40;
  
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 0;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,param_2,&local_b8.AllocatorInstance,&local_b8.ArrayNum,&local_b8.ArrayMax);
  memset(local_b8.AllocatorInstance.Data + (longlong)iVar5 * 8,0,(longlong)param_2 << 3);
  local_90.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.ObjectArray.ArrayNum = 0;
  local_90.ObjectArray.ArrayMax = 0;
  local_90.Index = 0xffffffff;
  EVar6 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar8 = Z_Construct_UClass_UClass_NoRegister();
  GetObjectsOfClass(pUVar8,&local_90.ObjectArray,true,RF_ClassDefaultObject,
                    EVar6 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<UClass>::Advance(&local_90);
  while( true ) {
    lVar10 = (longlong)local_90.Index;
    if ((local_90.Index < 0) || (local_90.ObjectArray.ArrayNum <= local_90.Index)) {
      if (local_90.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.ObjectArray.AllocatorInstance.Data);
      }
      iVar5 = local_b8.ArrayNum;
      uVar9 = (ulonglong)local_b8.ArrayNum;
      if (local_b8.ArrayNum == 0) {
        FOutputDevice::Log(param_1,L"No script functions found when looking for longest functions.")
        ;
      }
      else {
        pFVar1 = local_b8.AllocatorInstance.Data + uVar9 * 8;
        FVar11.Data = local_b8.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar9 != iVar5) {
            `TCheckedPointerIterator<UFunction_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res10);
          }
          if ((FVar11.Data == pFVar1) || (lVar10 = *(longlong *)FVar11.Data, lVar10 == 0)) break;
          local_78 = *(FName *)(*(longlong *)(lVar10 + 0x20) + 0x18);
          FName::ToString(&local_78,&local_58);
          local_70 = *(FName *)(lVar10 + 0x18);
          FName::ToString(&local_70,&local_68);
          FOutputDevice::LogfImpl(param_1,L"%s %s %d");
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          uVar9 = local_b8._8_8_ & 0xffffffff;
          FVar11.Data = FVar11.Data + 8;
        }
      }
      if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.AllocatorInstance.Data);
      }
      return;
    }
    uVar7 = 0;
    if (local_90.Index < local_90.ObjectArray.ArrayNum) {
      uVar7 = (uint)~local_90.Index >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    local_a8.Struct = *(UStruct **)(local_90.ObjectArray.AllocatorInstance.Data + lVar10 * 8);
    if (local_a8.Struct == (UStruct *)0x0) {
      local_a8.Field = (UField *)0x0;
    }
    else {
      local_a8.Field = ((local_a8.Struct)->Children).field0_0x0.DebugPtr;
    }
    local_a8.InterfaceIndex = -1;
    local_a8.bIncludeSuper = false;
    local_a8.bIncludeDeprecated = true;
    local_a8.bIncludeInterface = false;
    TFieldIterator<UFunction>::IterateToNext(&local_a8);
    if (local_a8.Field != (UField *)0x0) {
      local_40 = local_res18;
      local_48 = UE::Core::Private::Function::
                 TFunctionRefCaller<`OutputLongestFunctions'::__l6::<lambda_1>,bool,UFunction_*_const_&,UFunction_*_const_&>
                 ::Call;
      do {
        pUVar3 = local_a8.Field;
        local_res20.DebugPtr = local_a8.Field;
        local_res18[0] = (undefined4)local_a8.Field[2]._padding_;
        NBest<UFunction_*>(&local_b8,(UFunction **)&local_res20.DebugPtr,
                           (TFunctionRef<bool___cdecl(UFunction_*_const_&,UFunction_*_const_&)> *)
                           &local_48);
        local_a8.Field = (pUVar3->Next).field0_0x0.DebugPtr;
        TFieldIterator<UFunction>::IterateToNext(&local_a8);
      } while (local_a8.Field != (UField *)0x0);
    }
    TObjectIterator<UClass>::Advance(&local_90);
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// OutputMostFrequentlyCalledFunctions @ 142214990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl OutputMostFrequentlyCalledFunctions(FOutputDevice *param_1,int param_2)

{
  FName *pFVar1;
  code *pcVar2;
  UField *pUVar3;
  longlong *plVar4;
  bool bVar5;
  EInternalObjectFlags EVar6;
  int iVar7;
  uint uVar8;
  UClass *pUVar9;
  ulonglong uVar10;
  byte bVar11;
  longlong lVar12;
  uint uVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  uint *puVar16;
  FOutputDevice *this;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  undefined1 auStackY_378 [32];
  undefined1 local_348;
  undefined1 local_347;
  undefined1 local_346;
  undefined1 local_345;
  undefined1 local_344;
  undefined1 local_343 [3];
  int local_340 [2];
  TArray<TTuple<UFunction_*,int>,TSizedDefaultAllocator<32>_> local_338;
  TArray<TTuple<FName,int>,TSizedDefaultAllocator<32>_> local_328;
  int local_318;
  FOutputDevice *local_310;
  TFieldIterator<UFunction> local_308;
  longlong *local_2f0;
  uint uStack_2e8;
  uint uStack_2e4;
  TBitArray<FDefaultBitArrayAllocator> *local_2e0;
  undefined4 uStack_2d8;
  uint uStack_2d4;
  uint local_2d0;
  undefined4 uStack_2cc;
  int iStack_2c8;
  undefined4 uStack_2c4;
  TObjectIterator<UClass> local_2c0;
  undefined8 local_2a8;
  int local_2a0;
  int local_29c;
  int local_298;
  FName local_294;
  FName local_28c;
  FString local_280;
  FString local_270;
  longlong *local_260;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_258;
  undefined8 uStack_238;
  longlong *local_230;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_228;
  undefined8 uStack_208;
  code *local_200;
  undefined1 *local_1f8;
  code *local_1f0;
  undefined1 *local_1e8;
  UField *local_1e0;
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  FString local_1c8 [2];
  undefined4 local_19c;
  undefined4 local_17c;
  FArchiveState local_178;
  undefined1 local_e8 [32];
  uint *local_c8;
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  void *local_a8;
  undefined4 local_a0;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_378;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  uVar15 = 0;
  local_70 = 0;
  local_64 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_e8._0_8_ = 0;
  local_e8._8_8_ = 0;
  local_c8 = (uint *)0x0;
  local_c0 = 0;
  local_b4 = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_2c0.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c0.ObjectArray.ArrayNum = 0;
  local_2c0.ObjectArray.ArrayMax = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_bc = 0x80;
  local_b8 = 0xffffffff;
  local_2c0.Index = 0xffffffff;
  local_318 = param_2;
  local_310 = param_1;
  EVar6 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar9 = Z_Construct_UClass_UClass_NoRegister();
  GetObjectsOfClass(pUVar9,&local_2c0.ObjectArray,true,RF_ClassDefaultObject,
                    EVar6 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<UClass>::Advance(&local_2c0);
  while ((lVar12 = (longlong)local_2c0.Index, -1 < local_2c0.Index &&
         (local_2c0.Index < local_2c0.ObjectArray.ArrayNum))) {
    uVar17 = uVar15;
    if (local_2c0.Index < local_2c0.ObjectArray.ArrayNum) {
      uVar17 = (uint)~local_2c0.Index >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_308.Struct = *(UStruct **)(local_2c0.ObjectArray.AllocatorInstance.Data + lVar12 * 8);
    if (local_308.Struct == (UStruct *)0x0) {
      local_308.Field = (UField *)0x0;
    }
    else {
      local_308.Field = ((local_308.Struct)->Children).field0_0x0.DebugPtr;
    }
    local_308.InterfaceIndex = -1;
    local_308.bIncludeSuper = false;
    local_308.bIncludeDeprecated = true;
    local_308.bIncludeInterface = false;
    TFieldIterator<UFunction>::IterateToNext(&local_308);
    pUVar3 = local_308.Field;
    while (local_308.Field = pUVar3, pUVar3 != (UField *)0x0) {
      local_1e0 = pUVar3 + 2;
      local_340[0] = 0;
      local_1d8 = local_98;
      local_1d0 = local_e8;
      lVar12 = pUVar3[2]._padding_;
      FArchiveState::FArchiveState(&local_178);
      local_178._padding_ = (longlong)&___7FNullArchive__6B_;
      while (local_340[0] < (int)lVar12) {
        `OutputMostFrequentlyCalledFunctions'::__l2::FCallFrequencyCounter::SerializeExpr
                  (&local_1e0,local_340,(FArchive *)&local_178);
      }
      FArchive::~FArchive((FArchive *)&local_178);
      local_308.Field = (pUVar3->Next).field0_0x0.DebugPtr;
      TFieldIterator<UFunction>::IterateToNext(&local_308);
      pUVar3 = local_308.Field;
    }
    TObjectIterator<UClass>::Advance(&local_2c0);
  }
  if (local_2c0.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c0.ObjectArray.AllocatorInstance.Data);
  }
  local_338.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_338.ArrayNum = 0;
  local_338.ArrayMax = 0;
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,local_318,&local_338.AllocatorInstance,&local_338.ArrayNum,
                     &local_338.ArrayMax);
  DefaultConstructItems<TTuple<UFunction_*,int>,int>
            (local_338.AllocatorInstance.Data + (longlong)iVar7 * 0x10,local_318);
  uVar17 = local_70;
  uVar8 = 1;
  local_2d0 = 0;
  uStack_2e4 = 1;
  uStack_2d4 = local_2d0;
  if (local_70 != 0) {
    puVar16 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar16 = local_78;
    }
    uStack_2e4 = *puVar16;
    uVar15 = 0;
    local_2d0 = 0;
    while (uStack_2e4 == 0) {
      uVar15 = uVar15 + 1;
      local_2d0 = local_2d0 + 0x20;
      uStack_2e4 = 1;
      uStack_2d4 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar15)
      goto LAB_142214cdf;
      uStack_2e4 = puVar16[(int)uVar15];
    }
    uStack_2e4 = -uStack_2e4 & uStack_2e4;
    uVar10 = (ulonglong)uStack_2e4 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_2a0 = (int)lVar12;
    uStack_2d4 = (local_2d0 - 1) + local_2a0;
    if ((int)local_70 < (int)uStack_2d4) {
      uStack_2d4 = local_70;
    }
  }
LAB_142214cdf:
  local_2f0 = (longlong *)local_98;
  uStack_2cc = local_19c;
  local_2e0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  iStack_2c8 = local_98._8_4_ - local_64;
  uVar13 = local_70 & 0xffffffe0;
  TStack_258._padding_ = CONCAT44(uStack_2e4,uVar15);
  uStack_2d8 = 0xffffffff;
  TStack_258.CurrentBitIndex = uStack_2d4;
  TStack_258.UnvisitedBitMask = 0xffffffff;
  iVar7 = (int)local_70 >> 5;
  TStack_258._28_4_ = local_19c;
  TStack_258.BaseBitIndex = local_2d0;
  uStack_238 = CONCAT44(uStack_2c4,iStack_2c8);
  bVar11 = (byte)local_70;
  uStack_2e8 = uVar15;
  local_260 = local_2f0;
  TStack_258.Array = local_2e0;
  if (((int)local_70 < 0) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar17 != local_70) {
    puVar16 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar16 = local_78;
    }
    uVar15 = -1 << (bVar11 & 0x1f) & puVar16[iVar7];
    while (uVar15 == 0) {
      iVar7 = iVar7 + 1;
      uVar13 = uVar13 + 0x20;
      uVar17 = local_70;
      if ((int)(((int)(local_70 - 1) >> 0x1f & 0x1fU) + (local_70 - 1)) >> 5 < iVar7)
      goto LAB_142214e10;
      uVar15 = puVar16[iVar7];
    }
    uVar10 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_29c = (int)lVar12;
    uVar17 = (uVar13 - 1) + local_29c;
    if ((int)local_70 < (int)uVar17) {
      uVar17 = local_70;
    }
  }
LAB_142214e10:
  while( true ) {
    plVar4 = local_260;
    if ((int)local_260[1] - *(int *)((longlong)local_260 + 0x34) != (int)uStack_238) {
      local_348 = 0;
      `TSparseArray<TSparseSetElement<TTuple<UFunction_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_348);
    }
    this = local_310;
    if (((TStack_258.CurrentBitIndex == uVar17) &&
        (TStack_258.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (plVar4 == (longlong *)local_98)) break;
    local_1f8 = &local_346;
    local_200 = UE::Core::Private::Function::
                TFunctionRefCaller<`OutputMostFrequentlyCalledFunctions'::__l11::<lambda_1>,bool,TTuple<UFunction_*,int>_const_&,TTuple<UFunction_*,int>_const_&>
                ::Call;
    NBest<TTuple<UFunction_*,int>_>
              (&local_338,
               (TTuple<UFunction_*,int> *)(*plVar4 + (longlong)TStack_258.CurrentBitIndex * 0x18),
               (TFunctionRef<bool___cdecl(TTuple<UFunction_*,int>_const_&,TTuple<UFunction_*,int>_const_&)>
                *)&local_200);
    TStack_258.UnvisitedBitMask = TStack_258.UnvisitedBitMask & ~TStack_258._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_258);
  }
  if (local_338.ArrayNum == 0) {
    FOutputDevice::Log(local_310,L"No function call instructions found in memory");
  }
  else {
    FOutputDevice::LogfImpl(local_310,L"Top %d function call targets");
    iVar7 = local_338.ArrayNum;
    uVar10 = (ulonglong)local_338.ArrayNum;
    pFVar18 = local_338.AllocatorInstance.Data + uVar10 * 0x10;
    FVar14.Data = local_338.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar10 != iVar7) {
        local_347 = 0;
        `TCheckedPointerIterator<TTuple<UFunction_*,int>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_347);
      }
      this = local_310;
      if ((FVar14.Data == pFVar18) || (*(longlong *)FVar14.Data == 0)) break;
      local_294 = *(FName *)(*(longlong *)(*(longlong *)FVar14.Data + 0x20) + 0x18);
      FName::ToString(&local_294,&local_270);
      local_28c = *(FName *)(*(longlong *)FVar14.Data + 0x18);
      FName::ToString(&local_28c,&local_280);
      FOutputDevice::LogfImpl(local_310,L"%s %s %d");
      if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_280.Data.AllocatorInstance.Data);
      }
      if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_270.Data.AllocatorInstance.Data);
      }
      uVar10 = local_338._8_8_ & 0xffffffff;
      FVar14.Data = FVar14.Data + 0x10;
    }
  }
  if (local_338.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_338.AllocatorInstance.Data);
  }
  local_328.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_328.ArrayNum = 0;
  local_328.ArrayMax = 0;
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,local_318,&local_328.AllocatorInstance,&local_328.ArrayNum,
                     &local_328.ArrayMax);
  DefaultConstructItems<TTuple<FName,int>,int>
            (local_328.AllocatorInstance.Data + (longlong)iVar7 * 0xc,local_318);
  uVar15 = local_c0;
  uStack_2e8 = 0;
  local_2d0 = 0;
  uStack_2d4 = uStack_2e8;
  if (local_c0 != 0) {
    puVar16 = (uint *)(local_e8 + 0x10);
    if (local_c8 != (uint *)0x0) {
      puVar16 = local_c8;
    }
    uVar17 = *puVar16;
    uStack_2e8 = 0;
    local_2d0 = 0;
    while (uVar17 == 0) {
      uStack_2e8 = uStack_2e8 + 1;
      local_2d0 = local_2d0 + 0x20;
      uStack_2d4 = local_c0;
      if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_2e8)
      goto LAB_142215090;
      uVar17 = puVar16[(int)uStack_2e8];
    }
    uVar8 = -uVar17 & uVar17;
    uVar10 = (ulonglong)uVar8 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_298 = (int)lVar12;
    uStack_2d4 = (local_2d0 - 1) + local_298;
    if ((int)local_c0 < (int)uStack_2d4) {
      uStack_2d4 = local_c0;
    }
  }
LAB_142215090:
  local_2f0 = (longlong *)local_e8;
  uStack_2cc = local_17c;
  local_2e0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
  uVar17 = local_c0 & 0xffffffe0;
  iStack_2c8 = local_e8._8_4_ - local_b4;
  uStack_2d8 = 0xffffffff;
  TStack_228.CurrentBitIndex = uStack_2d4;
  TStack_228.UnvisitedBitMask = 0xffffffff;
  TStack_228._padding_ = CONCAT44(uVar8,uStack_2e8);
  iVar7 = (int)local_c0 >> 5;
  TStack_228._28_4_ = local_17c;
  TStack_228.BaseBitIndex = local_2d0;
  uStack_208 = CONCAT44(uStack_2c4,iStack_2c8);
  bVar11 = (byte)local_c0;
  uStack_2e4 = uVar8;
  local_230 = local_2f0;
  TStack_228.Array = local_2e0;
  if (((int)local_c0 < 0) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar15 != local_c0) {
    puVar16 = (uint *)(local_e8 + 0x10);
    if (local_c8 != (uint *)0x0) {
      puVar16 = local_c8;
    }
    uVar15 = -1 << (bVar11 & 0x1f) & puVar16[iVar7];
    while (uVar15 == 0) {
      iVar7 = iVar7 + 1;
      uVar17 = uVar17 + 0x20;
      uVar15 = local_c0;
      if ((int)(((int)(local_c0 - 1) >> 0x1f & 0x1fU) + (local_c0 - 1)) >> 5 < iVar7)
      goto LAB_1422151b0;
      uVar15 = puVar16[iVar7];
    }
    uVar10 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar15 = (int)lVar12 + -1 + uVar17;
    if ((int)local_c0 < (int)uVar15) {
      uVar15 = local_c0;
    }
  }
LAB_1422151b0:
  while( true ) {
    plVar4 = local_230;
    if ((int)local_230[1] - *(int *)((longlong)local_230 + 0x34) != (int)uStack_208) {
      `TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_345);
    }
    if (((TStack_228.CurrentBitIndex == uVar15) &&
        (TStack_228.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10))) &&
       (plVar4 == (longlong *)local_e8)) break;
    local_1e8 = &local_344;
    local_1f0 = UE::Core::Private::Function::
                TFunctionRefCaller<`OutputMostFrequentlyCalledFunctions'::__l28::<lambda_2>,bool,TTuple<FName,int>_const_&,TTuple<FName,int>_const_&>
                ::Call;
    NBest<TTuple<FName,int>_>
              (&local_328,
               (TTuple<FName,int> *)(*plVar4 + (longlong)TStack_228.CurrentBitIndex * 0x14),
               (TFunctionRef<bool___cdecl(TTuple<FName,int>_const_&,TTuple<FName,int>_const_&)> *)
               &local_1f0);
    TStack_228.UnvisitedBitMask = TStack_228.UnvisitedBitMask & ~TStack_228._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_228);
  }
  if (local_328.ArrayNum == 0) {
    FOutputDevice::Log(this,L"No virtual function call instructions in memory");
  }
  else {
    FOutputDevice::LogfImpl(this,L"Top %d virtual function call targets");
    iVar7 = local_328.ArrayNum;
    uVar10 = (ulonglong)local_328.ArrayNum;
    pFVar1 = (FName *)(local_328.AllocatorInstance.Data + uVar10 * 0xc);
    FVar14.Data = local_328.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar10 != iVar7) {
        `TCheckedPointerIterator<TTuple<FName,int>,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_343);
      }
      if (((FName *)FVar14.Data == pFVar1) || (local_2a8 = 0, *(FName *)FVar14.Data == (FName)0x0))
      break;
      FName::ToString((FName *)FVar14.Data,local_1c8);
      FOutputDevice::LogfImpl(this,L"%s %d");
      if (local_1c8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8[0].Data.AllocatorInstance.Data);
      }
      uVar10 = local_328._8_8_ & 0xffffffff;
      FVar14.Data = (FScriptContainerElement *)&((FName *)((longlong)FVar14.Data + 8))->Number;
    }
  }
  if ((FName *)local_328.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_328.AllocatorInstance.Data);
  }
  local_a0 = 0;
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_e8);
  local_50 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<UFunction_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UFunction_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UFunction_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return;
}

// OutputMostFrequentlyUsedInstructions @ 142215380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl OutputMostFrequentlyUsedInstructions(FOutputDevice *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  UField *pUVar3;
  longlong *plVar4;
  bool bVar5;
  EInternalObjectFlags EVar6;
  int iVar7;
  UClass *pUVar8;
  byte bVar9;
  ulonglong uVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  uint uVar14;
  ForElementType<unsigned_int> FVar15;
  uint uVar16;
  undefined1 auStackY_258 [32];
  undefined1 local_228;
  undefined1 local_227;
  undefined1 local_226 [2];
  int local_224;
  TArray<TTuple<EExprToken,int>,TSizedDefaultAllocator<32>_> local_220;
  TFieldIterator<UFunction> local_210;
  TObjectIterator<UClass> local_1f8;
  int local_1e0;
  FString local_1d8;
  longlong *local_1c8;
  uint uStack_1c0;
  uint uStack_1bc;
  TBitArray<FDefaultBitArrayAllocator> *local_1b8;
  undefined4 uStack_1b0;
  uint uStack_1ac;
  uint local_1a8;
  undefined4 uStack_1a4;
  int iStack_1a0;
  undefined4 uStack_19c;
  longlong *local_198;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_190;
  undefined8 uStack_170;
  UField *local_168;
  longlong *local_160;
  code *local_158;
  undefined1 *local_150;
  undefined4 local_12c;
  FArchiveState local_128;
  longlong local_98;
  undefined8 local_90;
  TBitArray<FDefaultBitArrayAllocator> local_88;
  undefined4 local_68;
  int local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_258;
  local_88.MaxBits = 0x80;
  local_98 = 0;
  local_90 = 0;
  local_88.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  uVar14 = 0;
  local_88.NumBits = 0;
  local_64 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_1f8.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f8.ObjectArray.ArrayNum = 0;
  local_1f8.ObjectArray.ArrayMax = 0;
  local_68 = 0xffffffff;
  local_1f8.Index = 0xffffffff;
  EVar6 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar8 = Z_Construct_UClass_UClass_NoRegister();
  GetObjectsOfClass(pUVar8,&local_1f8.ObjectArray,true,RF_ClassDefaultObject,
                    EVar6 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<UClass>::Advance(&local_1f8);
  while ((lVar11 = (longlong)local_1f8.Index, -1 < local_1f8.Index &&
         (local_1f8.Index < local_1f8.ObjectArray.ArrayNum))) {
    uVar16 = uVar14;
    if (local_1f8.Index < local_1f8.ObjectArray.ArrayNum) {
      uVar16 = (uint)~local_1f8.Index >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_210.Struct = *(UStruct **)(local_1f8.ObjectArray.AllocatorInstance.Data + lVar11 * 8);
    if (local_210.Struct == (UStruct *)0x0) {
      local_210.Field = (UField *)0x0;
    }
    else {
      local_210.Field = ((local_210.Struct)->Children).field0_0x0.DebugPtr;
    }
    local_210.InterfaceIndex = -1;
    local_210.bIncludeSuper = false;
    local_210.bIncludeDeprecated = true;
    local_210.bIncludeInterface = false;
    TFieldIterator<UFunction>::IterateToNext(&local_210);
    pUVar3 = local_210.Field;
    while (local_210.Field = pUVar3, pUVar3 != (UField *)0x0) {
      local_168 = pUVar3 + 2;
      local_224 = 0;
      local_160 = &local_98;
      lVar11 = pUVar3[2]._padding_;
      FArchiveState::FArchiveState(&local_128);
      local_128._padding_ = (longlong)&___7FNullArchive__6B_;
      while (local_224 < (int)lVar11) {
        `OutputMostFrequentlyUsedInstructions'::__l2::FInstructionFrequencyCounter::SerializeExpr
                  (&local_168,&local_224,(FArchive *)&local_128);
      }
      FArchive::~FArchive((FArchive *)&local_128);
      local_210.Field = (pUVar3->Next).field0_0x0.DebugPtr;
      TFieldIterator<UFunction>::IterateToNext(&local_210);
      pUVar3 = local_210.Field;
    }
    TObjectIterator<UClass>::Advance(&local_1f8);
  }
  if (local_1f8.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.ObjectArray.AllocatorInstance.Data);
  }
  local_220.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_220.ArrayNum = 0;
  local_220.ArrayMax = 0;
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,param_2,&local_220.AllocatorInstance,&local_220.ArrayNum,
                     &local_220.ArrayMax);
  DefaultConstructItems<TTuple<enum_EExprToken,int>,int>
            (local_220.AllocatorInstance.Data + (longlong)iVar7 * 8,param_2);
  uVar16 = local_88.NumBits;
  uStack_1bc = 1;
  local_1a8 = 0;
  uStack_1ac = local_1a8;
  if (local_88.NumBits != 0) {
    FVar15 = (ForElementType<unsigned_int>)&local_88;
    if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar15 = local_88.AllocatorInstance.SecondaryData;
    }
    uVar13 = *(uint *)FVar15;
    uVar14 = 0;
    local_1a8 = 0;
    while (uVar13 == 0) {
      uVar14 = uVar14 + 1;
      local_1a8 = local_1a8 + 0x20;
      uStack_1ac = local_88.NumBits;
      if ((int)((local_88.NumBits - 1U) + ((int)(local_88.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
          (int)uVar14) goto LAB_142215660;
      uVar13 = *(uint *)((longlong)FVar15 + (longlong)(int)uVar14 * 4);
    }
    uStack_1bc = -uVar13 & uVar13;
    uVar10 = (ulonglong)uStack_1bc * 2 + 1;
    lVar11 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_1e0 = (int)lVar11;
    uStack_1ac = local_1e0 + -1 + local_1a8;
    if (local_88.NumBits < (int)uStack_1ac) {
      uStack_1ac = local_88.NumBits;
    }
  }
LAB_142215660:
  local_1c8 = &local_98;
  uStack_1a4 = local_12c;
  local_1b8 = &local_88;
  uVar13 = local_88.NumBits & 0xffffffe0;
  iStack_1a0 = (int)local_90 - local_64;
  uStack_1b0 = 0xffffffff;
  TStack_190.CurrentBitIndex = uStack_1ac;
  TStack_190.UnvisitedBitMask = 0xffffffff;
  TStack_190._padding_ = CONCAT44(uStack_1bc,uVar14);
  iVar7 = local_88.NumBits >> 5;
  TStack_190._28_4_ = local_12c;
  TStack_190.BaseBitIndex = local_1a8;
  uStack_170 = CONCAT44(uStack_19c,iStack_1a0);
  bVar9 = (byte)local_88.NumBits;
  uStack_1c0 = uVar14;
  local_198 = local_1c8;
  TStack_190.Array = local_1b8;
  if ((local_88.NumBits < 0) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar16 != local_88.NumBits) {
    FVar15 = (ForElementType<unsigned_int>)&local_88;
    if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar15 = local_88.AllocatorInstance.SecondaryData;
    }
    uVar14 = -1 << (bVar9 & 0x1f) & *(uint *)((longlong)FVar15 + (longlong)iVar7 * 4);
    while (uVar14 == 0) {
      iVar7 = iVar7 + 1;
      uVar13 = uVar13 + 0x20;
      uVar16 = local_88.NumBits;
      if ((int)(((int)(local_88.NumBits - 1U) >> 0x1f & 0x1fU) + (local_88.NumBits - 1U)) >> 5 <
          iVar7) goto LAB_142215771;
      uVar14 = *(uint *)((longlong)FVar15 + (longlong)iVar7 * 4);
    }
    uVar10 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar16 = (int)lVar11 + -1 + uVar13;
    if (local_88.NumBits < (int)uVar16) {
      uVar16 = local_88.NumBits;
    }
  }
LAB_142215771:
  while( true ) {
    plVar4 = local_198;
    if ((int)local_198[1] - *(int *)((longlong)local_198 + 0x34) != (int)uStack_170) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EExprToken,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_228);
    }
    if (((TStack_190.CurrentBitIndex == uVar16) && (TStack_190.Array == &local_88)) &&
       (plVar4 == &local_98)) break;
    local_158 = UE::Core::Private::Function::
                TFunctionRefCaller<`OutputMostFrequentlyUsedInstructions'::__l11::<lambda_1>,bool,TTuple<enum_EExprToken,int>_const_&,TTuple<enum_EExprToken,int>_const_&>
                ::Call;
    local_150 = &local_227;
    NBest<TTuple<enum_EExprToken,int>_>
              (&local_220,
               (TTuple<EExprToken,int> *)((longlong)TStack_190.CurrentBitIndex * 0x10 + *plVar4),
               (TFunctionRef<bool___cdecl(TTuple<EExprToken,int>_const_&,TTuple<EExprToken,int>_const_&)>
                *)&local_158);
    TStack_190.UnvisitedBitMask = TStack_190.UnvisitedBitMask & ~TStack_190._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_190);
  }
  if (local_220.ArrayNum == 0) {
    FOutputDevice::Log(param_1,L"No instructions found in memory");
  }
  else {
    FOutputDevice::LogfImpl(param_1,L"Top %d bytecode instructions");
    iVar7 = local_220.ArrayNum;
    uVar10 = (ulonglong)local_220.ArrayNum;
    pFVar1 = local_220.AllocatorInstance.Data + uVar10 * 8;
    FVar12.Data = local_220.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar10 != iVar7) {
        `TCheckedPointerIterator<TTuple<enum_EExprToken,int>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_226);
      }
      if ((FVar12.Data == pFVar1) || (*(int *)(FVar12.Data + 4) == 0)) break;
      if (GNativeFuncNames[(byte)*FVar12.Data] == (char *)0x0) {
        FOutputDevice::LogfImpl(param_1,L"0x%x %d");
LAB_1422158b2:
        uVar10 = local_220._8_8_ & 0xffffffff;
        FVar12.Data = FVar12.Data + 8;
      }
      else {
        FString::FString(&local_1d8,GNativeFuncNames[(byte)*FVar12.Data]);
        FOutputDevice::LogfImpl(param_1,L"%s %d");
        if (local_1d8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
        goto LAB_1422158b2;
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
        uVar10 = local_220._8_8_ & 0xffffffff;
        FVar12.Data = FVar12.Data + 8;
      }
    }
  }
  if (local_220.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_220.AllocatorInstance.Data);
  }
  local_50 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EExprToken,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EExprToken,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98);
  return;
}

// PrintScriptCallStackImpl @ 142215b90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl PrintScriptCallStackImpl(void)

{
  TStringBuilderBase<wchar_t> *pTVar1;
  FFrame **ppFVar2;
  undefined1 auStack_20c8 [32];
  undefined1 local_20a8;
  int local_20a4;
  uint local_20a0;
  int local_209c;
  int local_2098;
  int local_2094;
  int local_2090;
  int local_208c;
  FBlueprintContextTracker *local_2088;
  FScriptContainerElement *local_2080;
  FScriptContainerElement *local_2078;
  FScriptContainerElement *local_2070;
  FScriptContainerElement *local_2068;
  TStringBuilderBase<wchar_t> *local_2060;
  FFrame *local_2058;
  undefined4 local_2050;
  undefined4 local_204c;
  TArrayView<FFrame_const_*_const,int> local_2048;
  TStringBuilderWithBuffer<wchar_t,4096> local_2038;
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x142215b9a;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_20c8;
  local_2088 = FBlueprintContextTracker::TryGet();
  if (local_2088 != (FBlueprintContextTracker *)0x0) {
    local_209c = (local_2088->ScriptStack).ArrayNum;
    local_2080 = (local_2088->ScriptStack).AllocatorInstance.Data;
    local_2098 = local_209c;
    local_2078 = local_2080;
    local_2070 = local_2080;
    local_2068 = local_2080;
    MakeArrayView<FFrame_const_*_const>(&local_2048,(FFrame **)local_2080,local_209c);
    TStringBuilderWithBuffer<wchar_t,4096>::TStringBuilderWithBuffer<wchar_t,4096>(&local_2038);
    local_2060 = operator<<<wchar_t,wchar_t_const_(&)[17]>
                           ((TStringBuilderBase<wchar_t> *)&local_2038,
                            (wchar_t (*) [17])L"\n\nScript Stack (");
    local_2094 = local_2048.ArrayNum;
    local_2090 = local_2048.ArrayNum;
    pTVar1 = operator<<<wchar_t,int>(local_2060,&local_2090);
    operator<<<wchar_t,wchar_t_const_(&)[12]>(pTVar1,(wchar_t (*) [12])L" frames) :\n");
    local_208c = local_2048.ArrayNum;
    while (local_20a4 = local_2048.ArrayNum + -1, -1 < local_20a4) {
      ppFVar2 = TArrayView<FFrame_const_*_const,int>::operator[](&local_2048,local_20a4);
      local_2058 = *ppFVar2;
      FFrame::GetStackDescription(local_2058,(TStringBuilderBase<wchar_t> *)&local_2038);
      operator<<<wchar_t,wchar_t_const_(&)[2]>
                ((TStringBuilderBase<wchar_t> *)&local_2038,(wchar_t (*) [2])L"\n");
      local_2048.ArrayNum = local_20a4;
    }
    local_2050 = 0;
    local_204c = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_20a8 = (byte)LogOutputDevice._0_1_ < 3;
    local_20a0 = (uint)(byte)local_20a8;
    if (!(bool)local_20a8) {
      TStringBuilderBase<wchar_t>::operator*((TStringBuilderBase<wchar_t> *)&local_2038);
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogOutputDevice);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)&local_2038);
  }
  return;
}

// ProcessLocalFunction @ 1422180e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl ProcessLocalFunction(UObject *param_1,UFunction *param_2,FFrame *param_3,void *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  TEventRef<unsigned_int> TVar5;
  UPackage *pUVar6;
  FWriteBuffer *pFVar7;
  UFunction *local_res10 [2];
  void *local_res20;
  undefined1 auStackY_b8 [32];
  longlong local_88;
  FLLMScope local_80;
  FLLMScope local_7c;
  UObject *local_78;
  FMemScope local_70;
  FMemScope local_68;
  UFunction **local_60;
  UObject **local_58;
  FFrame *local_50;
  void **local_48;
  TLogScope<0> local_40;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_60 = local_res10;
  local_58 = &local_78;
  local_48 = &local_res20;
  local_res10[0] = param_2;
  local_res20 = param_4;
  local_78 = param_1;
  local_50 = param_3;
  if ((param_1 == (UObject *)0x0) || (FLowLevelMemTracker::EnabledState == Disabled)) {
    `ProcessLocalFunction'::__l2::<lambda_1>::operator()(&local_60);
  }
  else {
    FLLMScope::FLLMScope(&local_7c,UObject,false,None,Default,true);
    FMemScope::FMemScope(&local_68,UObject,true);
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(int *)(lVar1 + 0x9d4c) < _TSS0) {
      _Init_thread_header(&_TSS0);
      if (_TSS0 == -1) {
        FName::FName(&LLMScope_Name1311,L"UObject/UObjectInternals");
        _Init_thread_footer(&_TSS0);
      }
    }
    FLLMScope::FLLMScope(&local_80,LLMScope_Name1311,false,None,Default,true);
    FMemScope::FMemScope(&local_70,&LLMScope_Name1311,true);
    if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
      local_88 = 0;
      TVar5 = (TEventRef<unsigned_int>)&local_88;
    }
    else {
      local_88 = *(longlong *)&local_78->field_0x18;
      TVar5 = FStringTrace::GetNameRef((FName *)&local_40);
    }
    uVar2 = *(undefined8 *)TVar5;
    if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
      local_88 = 0;
      TVar5 = (TEventRef<unsigned_int>)&local_88;
    }
    else {
      local_88 = *(undefined8 *)(*(longlong *)&local_78->field_0x10 + 0x18);
      TVar5 = FStringTrace::GetNameRef((FName *)&local_40);
    }
    uVar3 = *(undefined8 *)TVar5;
    if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
      local_88 = 0;
      TVar5 = (TEventRef<unsigned_int>)&local_88;
    }
    else {
      pUVar6 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)local_78);
      local_88 = pUVar6->_padding_;
      TVar5 = FStringTrace::GetNameRef((FName *)&local_40);
    }
    uVar4 = *(undefined8 *)TVar5;
    if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
      `ProcessLocalFunction'::__l2::<lambda_1>::operator()(&local_60);
    }
    else {
      UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>(&local_40);
      *(int *)local_40._0_8_ = (int)uVar2;
      *(int *)(local_40._0_8_ + 4) = (int)uVar3;
      *(int *)(local_40._0_8_ + 8) = (int)uVar4;
      *(undefined8 *)(local_40._8_8_ + 0x28) = *(undefined8 *)(local_40._8_8_ + 0x20);
      `ProcessLocalFunction'::__l2::<lambda_1>::operator()(&local_60);
      if (*(char *)(lVar1 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      pFVar7 = *(FWriteBuffer **)(lVar1 + 0x20);
      if ((int)pFVar7 - *(int *)&pFVar7->Cursor < 1) {
        pFVar7 = UE::Trace::Private::Writer_NextBuffer();
      }
      *pFVar7->Cursor = '\n';
      pFVar7->Cursor = pFVar7->Cursor + 1;
      pFVar7->Committed = pFVar7->Cursor;
    }
    FMemScope::~FMemScope(&local_70);
    FLLMScope::~FLLMScope(&local_80);
    FMemScope::~FMemScope(&local_68);
    FLLMScope::~FLLMScope(&local_7c);
  }
  return;
}

// ProcessLocalScriptFunction @ 142218400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl ProcessLocalScriptFunction(UObject *param_1,FFrame *param_2,void *param_3)

{
  byte bVar1;
  UFunction *this;
  byte *pbVar2;
  code *pcVar3;
  bool bVar4;
  FTlsAutoCleanup *pFVar5;
  FProperty *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  ulonglong uVar10;
  int iVar11;
  undefined1 auStack_1b8 [32];
  undefined1 local_198 [8];
  FText local_190;
  undefined1 local_180 [4];
  undefined1 local_17c [4];
  FBlueprintExceptionInfo local_178;
  FBlueprintExceptionInfo local_160;
  code *local_148;
  undefined1 *local_140;
  TSharedPtr<FCulture,1> local_138;
  TSharedPtr<FCulture,1> local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FText local_e8;
  FText local_d8;
  FText local_c8;
  FTextFormat local_b8;
  FText local_a8;
  FTextFormat local_98;
  undefined1 local_88 [64];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  this = param_2->Node;
  local_140 = local_198;
  local_148 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FBlueprintContextTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar5 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_148,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FBlueprintContextTracker>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  if (*(char *)(pFVar5 + 3) == '\0') {
    *(int *)&pFVar5[2].field_0x4 = *(int *)&pFVar5[2].field_0x4 + 1;
    if (*(int *)&pFVar5[2].field_0x4 == GScriptRecurseLimit) {
      pFVar6 = UFunction::GetReturnProperty(this);
      ClearReturnValue(pFVar6,param_3);
      local_138.Object = (FCulture *)0x0;
      local_138.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar7 = FText::AsNumber(&local_c8,GScriptRecurseLimit,(FNumberFormattingOptions *)0x0,
                               &local_138);
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_108,L"ScriptCore",L"InfiniteLoop",
                          L"Infinite script recursion ({0} calls) detected - see log for stack trace"
                         );
      pFVar9 = FTextFormat::FTextFormat(&local_b8,pFVar8,Default);
      pFVar7 = FText::Format<FText>(&local_118,pFVar9,pFVar7);
      local_178.EventType = InfiniteLoop;
      local_178.Description.field0_0x0.TypedValue.TextData.Reference =
           (TRefCountPtr<ITextData>)(pFVar7->TextData).Reference;
      if (local_178.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_178.Description.field0_0x0.TypedValue.TextData.Reference +
                    8))(local_178.Description.field0_0x0.TypedValue.TextData.Reference,local_180);
      }
      local_178.Description.field0_0x0.TypedValue.Flags = pFVar7->Flags;
      if ((local_178.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_118.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
      }
      if (local_108.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_138.SharedReferenceCount.ReferenceController);
      FBlueprintCoreDelegates::ThrowScriptException(param_1,param_2,&local_178);
      *(undefined1 *)(pFVar5 + 3) = 1;
      if (local_178.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_178.Description.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
    }
    else {
      pbVar2 = param_2->Code;
      bVar1 = *pbVar2;
      while (bVar1 != 4) {
        if (param_2->bAbortingExecution != false) goto LAB_142218828;
        if (GMaximumScriptLoopIterations < *(int *)(pFVar5 + 2)) {
          pFVar6 = UFunction::GetReturnProperty(this);
          ClearReturnValue(pFVar6,param_3);
          FText::FText(&local_190);
          if (pFVar5[3].field_0x1 == '\0') {
            local_128.Object = (FCulture *)0x0;
            local_128.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            pFVar7 = FText::AsNumber(&local_a8,GMaximumScriptLoopIterations,
                                     (FNumberFormattingOptions *)0x0,&local_128);
            pFVar8 = FText::AsLocalizable_Advanced_LocText
                               (&local_d8,L"ScriptCore",L"RunawayLoop",
                                L"Runaway loop detected (over {0} iterations) - see log for stack trace"
                               );
            pFVar9 = FTextFormat::FTextFormat(&local_98,pFVar8,Default);
            pFVar7 = FText::Format<FText>(&local_e8,pFVar9,pFVar7);
            FText::operator=(&local_190,pFVar7);
            if (local_e8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
            }
            if (local_d8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_128.SharedReferenceCount.ReferenceController);
          }
          else {
            pFVar7 = FText::AsLocalizable_Advanced_LocText
                               (&local_f8,L"ScriptCore",L"TimedOut",
                                L"Computation timed out - see log for stack trace");
            FText::operator=(&local_190,pFVar7);
            if (local_f8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
            }
          }
          *(undefined4 *)(pFVar5 + 2) = 0;
          local_160.EventType = InfiniteLoop;
          local_160.Description.field0_0x0.TypedValue.TextData.Reference =
               (TRefCountPtr<ITextData>)(TRefCountPtr<ITextData>)local_190.TextData.Reference;
          if (local_190.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_190.TextData.Reference + 8))
                      (local_190.TextData.Reference,local_17c);
          }
          local_160.Description.field0_0x0.TypedValue.Flags = local_190.Flags;
          if ((local_160.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0)
             && (bVar4 = FDebug::CheckVerifyFailedImpl2
                                   ("IsSet()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                    ,0xbd,
                                    L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                   ), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FBlueprintCoreDelegates::ThrowScriptException(param_1,param_2,&local_160);
          if (local_160.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)
                         *(ITextData *)
                          local_160.Description.field0_0x0.TypedValue.TextData.Reference + 0x10))();
          }
          if (local_190.TextData.Reference == (ITextData *)0x0) {
            return;
          }
          (**(code **)((longlong)*local_190.TextData.Reference + 0x10))();
          return;
        }
        bVar1 = *pbVar2;
        param_2->Code = pbVar2 + 1;
        (*GNatives.Elements[bVar1])(param_2->Object,param_2,local_88);
        pbVar2 = param_2->Code;
        bVar1 = *pbVar2;
      }
      if (param_2->bAbortingExecution == false) {
        param_2->Code = pbVar2 + 1;
        bVar1 = pbVar2[1];
        param_2->Code = pbVar2 + 2;
        if (bVar1 != 0xb) {
          (*GNatives.Elements[bVar1])(param_2->Object,param_2,param_3);
        }
      }
      else {
LAB_142218828:
        pFVar6 = UFunction::GetReturnProperty(this);
        ClearReturnValue(pFVar6,param_3);
      }
      *(int *)&pFVar5[2].field_0x4 = *(int *)&pFVar5[2].field_0x4 + -1;
    }
  }
  else {
    pFVar6 = UFunction::GetReturnProperty(this);
    if ((pFVar6 != (FProperty *)0x0) && (iVar11 = 0, 0 < pFVar6->ArrayDim)) {
      uVar10 = (ulonglong)(uint)pFVar6->ElementSize;
      do {
        if ((pFVar6->PropertyFlags & (CPF_NoDestructor|CPF_ZeroConstructor)) ==
            (CPF_NoDestructor|CPF_ZeroConstructor)) {
          memset(param_3,0,(longlong)(int)uVar10);
        }
        else {
          (**(code **)(pFVar6->_padding_ + 0x130))(pFVar6);
        }
        uVar10 = (ulonglong)pFVar6->ElementSize;
        iVar11 = iVar11 + 1;
        param_3 = (void *)((longlong)param_3 + uVar10);
      } while (iVar11 < pFVar6->ArrayDim);
    }
  }
  return;
}

// SerializeForLog @ 142229950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl SerializeForLog(FCbWriter *param_1,FSoftObjectPath *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  int iVar4;
  ulong64 uVar5;
  undefined1 auStack_1a8 [32];
  TStringView<char8_t> local_188;
  TStringView<char8_t> local_178;
  FName local_168;
  int iStack_160;
  undefined4 uStack_15c;
  TStringBuilderBase<char8_t> local_158;
  uchar local_138 [256];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_1a8;
  FCbWriter::BeginObject(param_1);
  iStack_160 = 5;
  local_178.DataPtr = "SoftObjectPath";
  local_178.Size = 0xe;
  local_168 = (FName)0x15062075c;
  local_188._12_4_ = uStack_15c;
  local_188.Size = 5;
  local_188.DataPtr = "$type";
  FCbWriter::SetName(param_1,&local_188);
  local_188.DataPtr = local_178.DataPtr;
  local_188.Size = local_178.Size;
  local_188._12_4_ = local_178._12_4_;
  FCbWriter::AddString(param_1,&local_188);
  local_158.CurPos = local_138;
  local_158.bIsDynamic = false;
  local_158.bIsExternal = false;
  local_158.Base = local_138;
  local_158.End = (uchar *)local_38;
  if ((param_2->AssetPath).PackageName != (FName)0x0) {
    FName::AppendString((FName *)param_2,&local_158);
    if ((param_2->AssetPath).AssetName != (FName)0x0) {
      if (local_158.End < local_158.CurPos + 1) {
        TStringBuilderBase<char8_t>::Extend(&local_158,1);
      }
      *local_158.CurPos = '.';
      local_158.CurPos = local_158.CurPos + 1;
      FName::AppendString(&(param_2->AssetPath).AssetName,&local_158);
    }
    iVar1 = (param_2->SubPathString).Data.ArrayNum;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    if (0 < iVar4) {
      if (local_158.End < local_158.CurPos + 1) {
        TStringBuilderBase<char8_t>::Extend(&local_158,1);
      }
      *local_158.CurPos = ':';
      iVar1 = (param_2->SubPathString).Data.ArrayNum;
      pFVar2 = (param_2->SubPathString).Data.AllocatorInstance.Data;
      local_158.CurPos = local_158.CurPos + 1;
      iVar4 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar4 = 0;
      }
      uVar5 = (ulong64)iVar4;
      if (local_158.End < local_158.CurPos + uVar5) {
        TStringBuilderBase<char8_t>::Extend(&local_158,uVar5);
      }
      if (iVar4 != 0) {
        pvVar3 = FGenericPlatformString::Memcpy(local_158.CurPos,pFVar2,uVar5);
        local_158.CurPos = (uchar *)((longlong)pvVar3 + uVar5);
      }
    }
  }
  iStack_160 = (int)local_158.CurPos - (uint)local_158.Base;
  local_178.Size = 5;
  local_178.DataPtr = "$text";
  local_188.DataPtr = "$text";
  local_188.Size = 5;
  local_188._12_4_ = local_178._12_4_;
  local_168 = (FName)local_158.Base;
  FCbWriter::SetName(param_1,&local_188);
  local_188.Size = iStack_160;
  local_188._12_4_ = uStack_15c;
  local_188.DataPtr = (uchar *)local_168;
  FCbWriter::AddString(param_1,&local_188);
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_158);
  local_168 = (param_2->AssetPath).PackageName;
  local_158.Base = local_138;
  local_158.bIsDynamic = false;
  local_158.bIsExternal = false;
  local_158.CurPos = local_138;
  local_158.End = (uchar *)local_38;
  FName::AppendString(&local_168,&local_158);
  local_188.Size = (int)local_158.CurPos - (int)local_158.Base;
  local_178.Size = 0xb;
  local_188.DataPtr = local_158.Base;
  local_178.DataPtr = "PackageName";
  FCbWriter::SetName(param_1,&local_178);
  FCbWriter::AddString(param_1,&local_188);
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_158);
  local_168 = (param_2->AssetPath).AssetName;
  local_158.Base = local_138;
  local_158.CurPos = local_138;
  local_158.End = (uchar *)local_38;
  local_158.bIsDynamic = false;
  local_158.bIsExternal = false;
  FName::AppendString(&local_168,&local_158);
  local_178.Size = (int)local_158.CurPos - (int)local_158.Base;
  local_188.Size = 9;
  local_178.DataPtr = local_158.Base;
  local_188.DataPtr = "AssetName";
  FCbWriter::SetName(param_1,&local_188);
  local_188.DataPtr = local_178.DataPtr;
  local_188.Size = local_178.Size;
  local_188._12_4_ = local_178._12_4_;
  FCbWriter::AddString(param_1,&local_188);
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_158);
  local_178.DataPtr = (uchar *)(param_2->SubPathString).Data.AllocatorInstance.Data;
  iVar1 = (param_2->SubPathString).Data.ArrayNum;
  local_188.Size = 7;
  local_178.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_178.Size = 0;
  }
  local_188.DataPtr = "SubPath";
  FCbWriter::SetName(param_1,&local_188);
  local_188.DataPtr = local_178.DataPtr;
  local_188.Size = local_178.Size;
  local_188._12_4_ = local_178._12_4_;
  FCbWriter::AddString(param_1,&local_188);
  FCbWriter::EndObject(param_1);
  return;
}

// SerializeForLog @ 142229d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl SerializeForLog(FCbWriter *param_1,FTopLevelAssetPath *param_2)

{
  undefined1 auStack_198 [32];
  TStringView<char8_t> local_178;
  TStringView<char8_t> local_168;
  FName local_158;
  int iStack_150;
  undefined4 uStack_14c;
  TStringBuilderBase<char8_t> local_148;
  uchar local_128 [256];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_198;
  FCbWriter::BeginObject(param_1);
  iStack_150 = 5;
  local_168.DataPtr = "TopLevelAssetPath";
  local_168.Size = 0x11;
  local_158 = (FName)0x15062075c;
  local_178._12_4_ = uStack_14c;
  local_178.Size = 5;
  local_178.DataPtr = "$type";
  FCbWriter::SetName(param_1,&local_178);
  local_178.DataPtr = local_168.DataPtr;
  local_178.Size = local_168.Size;
  local_178._12_4_ = local_168._12_4_;
  FCbWriter::AddString(param_1,&local_178);
  local_148.CurPos = local_128;
  local_148.Base = local_128;
  local_148.End = (uchar *)local_28;
  local_148.bIsDynamic = false;
  local_148.bIsExternal = false;
  if ((param_2->PackageName != (FName)0x0) &&
     (FName::AppendString(&param_2->PackageName,&local_148), param_2->AssetName != (FName)0x0)) {
    if (local_148.End < local_148.CurPos + 1) {
      TStringBuilderBase<char8_t>::Extend(&local_148,1);
    }
    *local_148.CurPos = '.';
    local_148.CurPos = local_148.CurPos + 1;
    FName::AppendString(&param_2->AssetName,&local_148);
  }
  iStack_150 = (int)local_148.CurPos - (uint)local_148.Base;
  local_168.Size = 5;
  local_168.DataPtr = "$text";
  local_178.DataPtr = "$text";
  local_178.Size = 5;
  local_178._12_4_ = local_168._12_4_;
  local_158 = (FName)local_148.Base;
  FCbWriter::SetName(param_1,&local_178);
  local_178.Size = iStack_150;
  local_178._12_4_ = uStack_14c;
  local_178.DataPtr = (uchar *)local_158;
  FCbWriter::AddString(param_1,&local_178);
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_148);
  local_158 = param_2->PackageName;
  local_148.Base = local_128;
  local_148.bIsDynamic = false;
  local_148.bIsExternal = false;
  local_148.CurPos = local_128;
  local_148.End = (uchar *)local_28;
  FName::AppendString(&local_158,&local_148);
  local_178.Size = (int)local_148.CurPos - (int)local_148.Base;
  local_168.Size = 0xb;
  local_178.DataPtr = local_148.Base;
  local_168.DataPtr = "PackageName";
  FCbWriter::SetName(param_1,&local_168);
  FCbWriter::AddString(param_1,&local_178);
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_148);
  local_158 = param_2->AssetName;
  local_148.Base = local_128;
  local_148.bIsDynamic = false;
  local_148.bIsExternal = false;
  local_148.CurPos = local_128;
  local_148.End = (uchar *)local_28;
  FName::AppendString(&local_158,&local_148);
  local_178.Size = 9;
  local_168.Size = (int)local_148.CurPos - (int)local_148.Base;
  local_168.DataPtr = local_148.Base;
  local_178.DataPtr = "AssetName";
  FCbWriter::SetName(param_1,&local_178);
  local_178.DataPtr = local_168.DataPtr;
  local_178.Size = local_168.Size;
  local_178._12_4_ = local_168._12_4_;
  FCbWriter::AddString(param_1,&local_178);
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_148);
  FCbWriter::EndObject(param_1);
  return;
}

// ShowKismetScriptStackOnWarnings @ 14222c0f0

bool __cdecl ShowKismetScriptStackOnWarnings(void)

{
  bool bVar1;
  wchar_t *pwVar2;
  
  if (CheckScriptWarningOptions) {
    return ShowScriptStackForScriptWarning;
  }
  FConfigCacheIni::GetBool
            (GConfig,L"Kismet",L"ScriptStackOnWarnings",&ShowScriptStackForScriptWarning,&GEngineIni
            );
  pwVar2 = FCommandLine::Get();
  bVar1 = FParse::Param(pwVar2,L"SCRIPTSTACKONWARNINGS");
  if (bVar1) {
    ShowScriptStackForScriptWarning = true;
    CheckScriptWarningOptions = true;
    return true;
  }
  CheckScriptWarningOptions = true;
  return ShowScriptStackForScriptWarning;
}

// SoftObjectPathLoadSubPathWorkaround @ 14222c480

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl SoftObjectPathLoadSubPathWorkaround(FArchive *param_1,FUtf8String *param_2)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  FUtf8String *pFVar5;
  int iVar6;
  ForAnyElementType FVar7;
  uint uVar8;
  bool bVar9;
  uint local_res8 [2];
  ForAnyElementType local_78;
  int local_70 [2];
  FString local_68;
  FUtf8String local_58;
  FUtf8String local_48;
  FUtf8String local_38;
  FUtf8String local_28;
  
  iVar6 = 0;
  plVar1 = *(longlong **)&param_1->field_0x8;
  local_res8[0] = 0;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if (local_res8[0] == 0) {
    FUtf8String::Empty(param_2);
    return;
  }
  bVar9 = -1 < (int)local_res8[0];
  if ((int)local_res8[0] < 0) {
    if (local_res8[0] == 0x80000000) {
      FArchiveState::SetCriticalError((FArchiveState *)param_1);
      if ((byte)LogCore._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogCore);
      return;
    }
    local_res8[0] = -local_res8[0];
  }
  if ((0 < *(longlong *)&param_1->field_0x38) &&
     (*(longlong *)&param_1->field_0x38 < (longlong)(int)local_res8[0])) {
    FArchiveState::SetCriticalError((FArchiveState *)param_1);
    if ((byte)LogCore._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogCore);
    return;
  }
  uVar8 = local_res8[0];
  if (!bVar9) {
    uVar8 = local_res8[0] * 2;
  }
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70[1] = 0;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  local_70[0] = 0;
  if (uVar8 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar8,&local_78,0,local_70 + 1);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,uVar8,&local_78,local_70,local_70 + 1);
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_78.Data,(longlong)(int)uVar8);
  if (bVar9) {
    if (local_78.Data[(int)(local_res8[0] - 1)] == (FScriptContainerElement)0x0) {
      pFVar5 = FUtf8String::ConstructFromPtrSize(&local_38,(char *)local_78.Data,local_70[0]);
      FUtf8String::operator=(param_2,pFVar5);
      goto LAB_14222c7e8;
    }
  }
  else {
    if (((param_1->field_0x2a & 1) != 0) && (FVar7.Data = local_78.Data, 0 < (int)local_res8[0])) {
      do {
        iVar6 = iVar6 + 1;
        *(ushort *)FVar7.Data = *(ushort *)FVar7.Data >> 8 | *(ushort *)FVar7.Data << 8;
        FVar7.Data = FVar7.Data + 2;
      } while (iVar6 < (int)local_res8[0]);
    }
    if (*(short *)(local_78.Data + (longlong)(int)(local_res8[0] - 1) * 2) == 0) {
      FString::FString(&local_68,(ushort *)local_78.Data);
      StringConv::InlineCombineSurrogates(&local_68);
      for (FVar7.Data = local_68.Data.AllocatorInstance.Data;
          FVar7.Data != local_68.Data.AllocatorInstance.Data + (longlong)local_68.Data.ArrayNum * 2;
          FVar7.Data = FVar7.Data + 2) {
        if (*(wchar_t *)FVar7.Data == L'\xffff') {
          iVar6 = (int)((longlong)FVar7.Data - (longlong)local_68.Data.AllocatorInstance.Data >> 1);
          if (iVar6 != -1) {
            if (iVar6 < 0) {
code_r0x00014222c6d2:
              bVar9 = FDebug::CheckVerifyFailedImpl2
                                ("IsValidIndex(Index)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                 ,0x107,
                                 L"String index out of bounds: Index %i from a string with a length of %i"
                                );
              if (bVar9) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            else {
              iVar4 = local_68.Data.ArrayNum + -1;
              if (local_68.Data.ArrayNum == 0) {
                iVar4 = 0;
              }
              if (iVar4 <= iVar6) goto code_r0x00014222c6d2;
            }
            *(undefined2 *)(local_68.Data.AllocatorInstance.Data + (longlong)iVar6 * 2) = 0;
            FString::TrimToNullTerminator(&local_68);
          }
          break;
        }
      }
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      iVar6 = local_68.Data.ArrayNum + -1;
      if (local_68.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      pFVar5 = FUtf8String::ConstructFromPtrSize
                         (&local_48,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar6);
      if (&local_58 != pFVar5) {
        local_58.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
        (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_58.Data.ArrayNum = (pFVar5->Data).ArrayNum;
        local_58.Data.ArrayMax = (pFVar5->Data).ArrayMax;
        (pFVar5->Data).ArrayNum = 0;
        (pFVar5->Data).ArrayMax = 0;
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      FUtf8String::operator=(param_2,&local_58);
      local_38.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
        local_38.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
      }
      goto LAB_14222c7e8;
    }
  }
  pFVar5 = FUtf8String::ConstructFromPtrSize(&local_28,(uchar *)local_78.Data,local_70[0]);
  local_38.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
  if (param_2 != pFVar5) {
    pFVar2 = (param_2->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (param_2->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_2->Data).ArrayNum = (pFVar5->Data).ArrayNum;
    (param_2->Data).ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
  }
LAB_14222c7e8:
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  return;
}

// ToValidCPPIdentifierChars @ 142231df0

FString * __cdecl ToValidCPPIdentifierChars(FString *__return_storage_ptr__,wchar_t param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  wchar_t wVar4;
  uint uVar5;
  int iVar6;
  short sVar7;
  
  uVar5 = (uint)(ushort)param_1;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if (param_1 != L'\0') {
    do {
      iVar6 = (int)uVar5 % 0x3f;
      uVar5 = (((int)uVar5 / 0x3f) * 0x3f) / 0x3f;
      sVar7 = (short)iVar6;
      if (iVar6 < 0x1a) {
        wVar4 = L'z' - sVar7;
      }
      else if (iVar6 < 0x34) {
        wVar4 = L't' - sVar7;
      }
      else if (iVar6 < 0x3e) {
        wVar4 = L'm' - sVar7;
      }
      else {
        if ((iVar6 != 0x3e) &&
           (bVar2 = FDebug::CheckVerifyFailedImpl2
                              ("Digit == 62",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ScriptCore.cpp"
                               ,0x1c6,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          pFVar3 = (FString *)(*pcVar1)();
          return pFVar3;
        }
        wVar4 = L'_';
      }
      FString::AppendChar(__return_storage_ptr__,wVar4);
    } while (uVar5 != 0);
  }
  return __return_storage_ptr__;
}

// UnicodeToCPPIdentifier @ 142233da0

FString * __cdecl
UnicodeToCPPIdentifier
          (FString *__return_storage_ptr__,FString *param_1,bool param_2,wchar_t *param_3)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  uint uVar8;
  wchar_t wVar9;
  int iVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  ForAnyElementType FVar13;
  short sVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_d8 [8];
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  undefined4 local_90;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  local_d0.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar11 = (longlong)local_d0.Data.ArrayNum;
  pFVar15 = (param_1->Data).AllocatorInstance.Data;
  local_90 = 0;
  local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_d0.Data.ArrayNum == 0) {
    local_d0.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_d0.Data.ArrayNum,0,(ForAnyElementType *)&local_d0,local_d0.Data.ArrayNum,
               &local_d0.Data.ArrayMax);
    memcpy(local_d0.Data.AllocatorInstance.Data,pFVar15,lVar11 * 2);
  }
  FString::FString(&local_68,L"__pf");
  iVar6 = local_d0.Data.ArrayNum;
  pwVar12 = L"";
  FVar13.Data = local_d0.Data.AllocatorInstance.Data;
  pFVar15 = local_d0.Data.AllocatorInstance.Data + (longlong)local_d0.Data.ArrayNum * 2 + -2;
  if (local_d0.Data.ArrayNum == 0) {
    pFVar15 = local_d0.Data.AllocatorInstance.Data + (longlong)local_d0.Data.ArrayNum * 2;
  }
  while( true ) {
    if (local_d0.Data.ArrayNum != iVar6) {
      local_d8[0] = 0;
      `TCheckedPointerIterator<wchar_t,int,0>::operator!='::__l2::<lambda_1>::operator()(local_d8);
    }
    if (FVar13.Data == pFVar15) break;
    uVar1 = *(ushort *)FVar13.Data;
    uVar8 = (uint)uVar1;
    if (((uVar8 != 0x5f) && (0x19 < (ushort)(uVar1 - 0x61))) &&
       ((0x2a < (ushort)(uVar1 - 0x30) ||
        ((0x7fffffe03ffU >> ((ulonglong)(uVar1 - 0x30) & 0x3f) & 1) == 0)))) {
      local_b0.Data.ArrayMax = 0;
      local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b0.Data.ArrayNum = 0;
      if (uVar1 != 0) {
        do {
          iVar10 = (int)uVar8 % 0x3f;
          uVar8 = (((int)uVar8 / 0x3f) * 0x3f) / 0x3f;
          sVar14 = (short)iVar10;
          if (iVar10 < 0x1a) {
            wVar9 = L'z' - sVar14;
          }
          else if (iVar10 < 0x34) {
            wVar9 = L't' - sVar14;
          }
          else if (iVar10 < 0x3e) {
            wVar9 = L'm' - sVar14;
          }
          else {
            if ((iVar10 != 0x3e) &&
               (bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("Digit == 62",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ScriptCore.cpp"
                                   ,0x1c6,L""), bVar4)) {
              pcVar2 = (code *)swi(3);
              pFVar7 = (FString *)(*pcVar2)();
              return pFVar7;
            }
            wVar9 = L'_';
          }
          FString::AppendChar(&local_b0,wVar9);
        } while (uVar8 != 0);
      }
      iVar10 = local_b0.Data.ArrayNum + -1;
      if (local_b0.Data.ArrayNum == 0) {
        iVar10 = 0;
      }
      FString::AppendChars(&local_68,(wchar_t *)local_b0.Data.AllocatorInstance.Data,iVar10);
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
      *(ushort *)FVar13.Data = 0x78;
    }
    FVar13.Data = FVar13.Data + 2;
  }
  FString::FString(&local_78,param_3);
  bVar3 = false;
  bVar4 = true;
  iVar6 = local_78.Data.ArrayNum + -1;
  if (local_78.Data.ArrayNum == 0) {
    iVar6 = 0;
  }
  if (iVar6 == 0) {
    iVar6 = local_d0.Data.ArrayNum + -1;
    if (local_d0.Data.ArrayNum == 0) {
      iVar6 = 0;
    }
    if (iVar6 != 0) {
      if ((iVar6 < 1) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x107,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar2)();
        return pFVar7;
      }
      iVar6 = iswdigit(*(wint_t *)local_d0.Data.AllocatorInstance.Data);
      if (iVar6 != 0) {
        FString::InsertAt(&local_d0,0,L'_');
      }
    }
  }
  FString::ConcatFF(&local_58,&local_78,&local_d0);
  FString::ConcatFF(&local_a0,&local_58,&local_68);
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  local_d0.Data.AllocatorInstance.Data = local_a0.Data.AllocatorInstance.Data;
  local_d0.Data.ArrayNum = local_a0.Data.ArrayNum;
  local_d0.Data.ArrayMax = local_a0.Data.ArrayMax;
  local_a0.Data.ArrayNum = 0;
  local_a0.Data.ArrayMax = 0;
  local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((param_1->Data).ArrayNum != 0) {
    pwVar12 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar6 = FGenericPlatformStricmp::Stricmp(pwVar12,L"Replicate to server");
  if (iVar6 == 0) {
    FString::operator=(&local_d0,L"MagicNameWorkaround");
  }
  FVar13.Data = local_d0.Data.AllocatorInstance.Data;
  if (param_2) {
    FString::ConcatFC(&local_88,&local_d0,L"_DEPRECATED");
    pFVar7 = &local_88;
    bVar3 = true;
    bVar4 = false;
    FVar13.Data = local_88.Data.AllocatorInstance.Data;
  }
  else {
    lVar11 = (longlong)local_d0.Data.ArrayNum;
    local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c0.Data.ArrayNum = local_d0.Data.ArrayNum;
    if (local_d0.Data.ArrayNum == 0) {
      local_c0.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_d0.Data.ArrayNum,0,(ForAnyElementType *)&local_c0,local_d0.Data.ArrayNum,
                 &local_c0.Data.ArrayMax);
      memcpy(local_c0.Data.AllocatorInstance.Data,FVar13.Data,lVar11 * 2);
    }
    pFVar7 = &local_c0;
    FVar13.Data = local_c0.Data.AllocatorInstance.Data;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = FVar13.Data;
  (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar7->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar7->Data).ArrayMax;
  (pFVar7->Data).ArrayNum = 0;
  (pFVar7->Data).ArrayMax = 0;
  if ((bVar4) && (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Z_Construct_UScriptStruct_FDirectoryPath @ 1422366d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDirectoryPath(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDirectoryPath.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDirectoryPath.InnerSingleton,
               &Z_Construct_UScriptStruct_FDirectoryPath_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDirectoryPath.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDirectoryPath.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FFilePath @ 142236750

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FFilePath(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FFilePath.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FFilePath.InnerSingleton,
               &Z_Construct_UScriptStruct_FFilePath_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FFilePath.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FFilePath.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FSoftClassPath @ 1422367d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSoftClassPath(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSoftClassPath.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSoftClassPath.InnerSingleton,
               &Z_Construct_UScriptStruct_FSoftClassPath_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSoftClassPath.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSoftClassPath.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FTemplateString @ 142236850

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTemplateString(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTemplateString.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTemplateString.InnerSingleton,
               &Z_Construct_UScriptStruct_FTemplateString_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTemplateString.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTemplateString.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// OnEnterScriptContext'' @ 150352bf0

void __cdecl `dynamic_atexit_destructor_for_'FBlueprintContextTracker::OnEnterScriptContext__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FBlueprintContextTracker::OnEnterScriptContext._8_8_,
             FBlueprintContextTracker::OnEnterScriptContext._16_4_);
  if (FBlueprintContextTracker::OnEnterScriptContext._8_8_ != 0) {
    FMemory::Free((void *)FBlueprintContextTracker::OnEnterScriptContext._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FBlueprintContextTracker::OnEnterScriptContext);
  return;
}

// OnExitScriptContext'' @ 150352c30

void __cdecl `dynamic_atexit_destructor_for_'FBlueprintContextTracker::OnExitScriptContext__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FBlueprintContextTracker::OnExitScriptContext._8_8_,
             FBlueprintContextTracker::OnExitScriptContext._16_4_);
  if (FBlueprintContextTracker::OnExitScriptContext._8_8_ != 0) {
    FMemory::Free((void *)FBlueprintContextTracker::OnExitScriptContext._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FBlueprintContextTracker::OnExitScriptContext);
  return;
}

// OnScriptException'' @ 150352c70

void __cdecl `dynamic_atexit_destructor_for_'FBlueprintCoreDelegates::OnScriptException__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FBlueprintCoreDelegates::OnScriptException._8_8_,
             FBlueprintCoreDelegates::OnScriptException._16_4_);
  if (FBlueprintCoreDelegates::OnScriptException._8_8_ != 0) {
    FMemory::Free((void *)FBlueprintCoreDelegates::OnScriptException._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FBlueprintCoreDelegates::OnScriptException);
  return;
}

// OnScriptProfilingEvent'' @ 150352cb0

void __cdecl `dynamic_atexit_destructor_for_'FBlueprintCoreDelegates::OnScriptProfilingEvent__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FBlueprintCoreDelegates::OnScriptProfilingEvent._8_8_,
             FBlueprintCoreDelegates::OnScriptProfilingEvent._16_4_);
  if (FBlueprintCoreDelegates::OnScriptProfilingEvent._8_8_ != 0) {
    FMemory::Free((void *)FBlueprintCoreDelegates::OnScriptProfilingEvent._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FBlueprintCoreDelegates::OnScriptProfilingEvent);
  return;
}

// OnToggleScriptProfiler'' @ 150352cf0

void __cdecl `dynamic_atexit_destructor_for_'FBlueprintCoreDelegates::OnToggleScriptProfiler__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FBlueprintCoreDelegates::OnToggleScriptProfiler._8_8_,
             FBlueprintCoreDelegates::OnToggleScriptProfiler._16_4_);
  if (FBlueprintCoreDelegates::OnToggleScriptProfiler._8_8_ != 0) {
    FMemory::Free((void *)FBlueprintCoreDelegates::OnToggleScriptProfiler._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FBlueprintCoreDelegates::OnToggleScriptProfiler);
  return;
}

// PIEPackageNames'' @ 150352d30

void __cdecl `dynamic_atexit_destructor_for_'FSoftObjectPath::PIEPackageNames__(void)

{
  FSoftObjectPath::PIEPackageNames.HashSize = 0;
  if (FSoftObjectPath::PIEPackageNames.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FSoftObjectPath::PIEPackageNames.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&FSoftObjectPath::PIEPackageNames.Elements);
  return;
}

// RootNodeID'' @ 150352d70

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

// SparseDelegateMapCritical'' @ 150352d90

void __cdecl
`dynamic_atexit_destructor_for_'FSparseDelegateStorage::SparseDelegateMapCritical__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150352d97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&FSparseDelegateStorage::SparseDelegateMapCritical);
  return;
}

// SparseDelegateObjectListener'' @ 150352db0

void __cdecl
`dynamic_atexit_destructor_for_'FSparseDelegateStorage::SparseDelegateObjectListener__(void)

{
  FSparseDelegateStorage::SparseDelegateObjectListener =
       (FObjectListener)&___7FObjectListener_FSparseDelegateStorage__6B_;
  if (!GIsRequestingExit) {
    FUObjectArray::RemoveUObjectDeleteListener
              (&GUObjectArray,
               (FUObjectDeleteListener *)&FSparseDelegateStorage::SparseDelegateObjectListener);
  }
  FSparseDelegateStorage::SparseDelegateObjectListener =
       (FObjectListener)&___7FUObjectDeleteListener_FUObjectArray__6B_;
  return;
}

// SparseDelegateObjectOffsets'' @ 150352e00

void __cdecl
`dynamic_atexit_destructor_for_'FSparseDelegateStorage::SparseDelegateObjectOffsets__(void)

{
  FSparseDelegateStorage::SparseDelegateObjectOffsets._72_4_ = 0;
  if (FSparseDelegateStorage::SparseDelegateObjectOffsets._64_8_ != 0) {
    FMemory::Free((void *)FSparseDelegateStorage::SparseDelegateObjectOffsets._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FSparseDelegateStorage::SparseDelegateObjectOffsets);
  return;
}

// SparseDelegates'' @ 150352e40

void __cdecl `dynamic_atexit_destructor_for_'FSparseDelegateStorage::SparseDelegates__(void)

{
  FSparseDelegateStorage::SparseDelegates._72_4_ = 0;
  if (FSparseDelegateStorage::SparseDelegates._64_8_ != 0) {
    FMemory::Free((void *)FSparseDelegateStorage::SparseDelegates._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FSparseDelegateStorage::SparseDelegates);
  return;
}

// `dynamic_atexit_destructor_for_'AutomaticOptionalInclusionAssetTypeList'' @ 150352e80

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__AutomaticOptionalInclusionAssetTypeList__
          (void)

{
  DestructItems<TSoftClassPtr<UObject>,int>
            ((TSoftClassPtr<UObject> *)
             AutomaticOptionalInclusionAssetTypeList.AllocatorInstance.Data,
             AutomaticOptionalInclusionAssetTypeList.ArrayNum);
  if (AutomaticOptionalInclusionAssetTypeList.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(AutomaticOptionalInclusionAssetTypeList.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'CVarBlueprintContextVirtualStackAllocatorDecommitMode'' @ 150352ec0

void __cdecl
_dynamic_atexit_destructor_for__CVarBlueprintContextVirtualStackAllocatorDecommitMode__(void)

{
  CVarBlueprintContextVirtualStackAllocatorDecommitMode._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarBlueprintContextVirtualStackAllocatorDecommitMode);
  return;
}

// `dynamic_atexit_destructor_for_'CVarBlueprintContextVirtualStackAllocatorStackSize'' @ 150352ee0

void __cdecl
_dynamic_atexit_destructor_for__CVarBlueprintContextVirtualStackAllocatorStackSize__(void)

{
  CVarBlueprintContextVirtualStackAllocatorStackSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarBlueprintContextVirtualStackAllocatorStackSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnablePathFixupOutsideEditor'' @ 150352f00

void __cdecl
SoftObjectPath::_dynamic_atexit_destructor_for__CVarEnablePathFixupOutsideEditor__(void)

{
  CVarEnablePathFixupOutsideEditor._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnablePathFixupOutsideEditor);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxFunctionStatDepth'' @ 150352f20

void __cdecl _dynamic_atexit_destructor_for__CVarMaxFunctionStatDepth__(void)

{
  CVarMaxFunctionStatDepth._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaxFunctionStatDepth);
  return;
}

// `dynamic_atexit_destructor_for_'CVarScriptRecurseLimit'' @ 150352f40

void __cdecl _dynamic_atexit_destructor_for__CVarScriptRecurseLimit__(void)

{
  CVarScriptRecurseLimit._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarScriptRecurseLimit);
  return;
}

// `dynamic_atexit_destructor_for_'CVarShortScriptWarnings'' @ 150352f60

void __cdecl _dynamic_atexit_destructor_for__CVarShortScriptWarnings__(void)

{
  CVarShortScriptWarnings._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarShortScriptWarnings);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVerboseScriptStats'' @ 150352f80

void __cdecl _dynamic_atexit_destructor_for__CVarVerboseScriptStats__(void)

{
  CVarVerboseScriptStats._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVerboseScriptStats);
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 150352fa0

void __cdecl
`FSavePackageSettings::GetDefaultSettings'::__l2::_dynamic_atexit_destructor_for__Default__(void)

{
  DestructItems<TFunction<enum_ESavePackageResult___cdecl(FExportsValidationContext_const_&)>,int>
            ((TFunction<ESavePackageResult___cdecl(FExportsValidationContext_const_&)> *)
             ::Default.ExternalExportValidations.AllocatorInstance.Data,
             ::Default.ExternalExportValidations.ArrayNum);
  if (::Default.ExternalExportValidations.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(::Default.ExternalExportValidations.AllocatorInstance.Data);
  }
  DestructItems<TFunction<enum_ESavePackageResult___cdecl(FImportsValidationContext_const_&)>,int>
            ((TFunction<ESavePackageResult___cdecl(FImportsValidationContext_const_&)> *)
             ::Default.ExternalImportValidations.AllocatorInstance.Data,
             ::Default.ExternalImportValidations.ArrayNum);
  if (::Default.ExternalImportValidations.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(::Default.ExternalImportValidations.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'ExceptionInfo'' @ 150353000

void __cdecl
`UObject::execArrayGetByRef'::__l5::_dynamic_atexit_destructor_for__ExceptionInfo__(void)

{
  if (ExceptionInfo.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015035300f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)ExceptionInfo.Description.field0_0x0.TypedValue.TextData.Reference +
                0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'FSoftObjectPathImportTextTestsInstance'' @ 150353020

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FSoftObjectPathImportTextTestsInstance__
          (void)

{
  if (FSoftObjectPathImportTextTestsInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FSoftObjectPathImportTextTestsInstance.PrettyNameDotNotation.Data.
                  AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FSoftObjectPathImportTextTestsInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FSoftObjectPathTrySetPathTestsInstance'' @ 150353050

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FSoftObjectPathTrySetPathTestsInstance__
          (void)

{
  if (FSoftObjectPathTrySetPathTestsInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FSoftObjectPathTrySetPathTestsInstance.PrettyNameDotNotation.Data.
                  AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FSoftObjectPathTrySetPathTestsInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTopLevelAssetPathTestInstance'' @ 150353080

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FTopLevelAssetPathTestInstance__(void)

{
  if (FTopLevelAssetPathTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FTopLevelAssetPathTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FTopLevelAssetPathTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'LogSavePackage'' @ 1503530b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogSavePackage__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogSavePackage);
  return;
}

// `dynamic_atexit_destructor_for_'LogScriptCore'' @ 1503530d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogScriptCore__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogScriptCore);
  return;
}

// `dynamic_atexit_destructor_for_'LogScriptFrame'' @ 1503530f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogScriptFrame__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogScriptFrame);
  return;
}

// `dynamic_atexit_destructor_for_'LogScriptStackTracker'' @ 150353110

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogScriptStackTracker__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogScriptStackTracker);
  return;
}

// `dynamic_atexit_destructor_for_'ScriptAudit'' @ 150353130

void __cdecl _dynamic_atexit_destructor_for__ScriptAudit__(void)

{
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)&ScriptAudit);
  return;
}

// `dynamic_atexit_destructor_for_'SparseDelegateReportCommand'' @ 150353150

void __cdecl _dynamic_atexit_destructor_for__SparseDelegateReportCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&SparseDelegateReportCommand);
  return;
}

// `dynamic_atexit_destructor_for_'StaticFieldClass'' @ 150353170

void __cdecl
`FStrProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__(void)

{
  FFieldClass::~FFieldClass(&::StaticFieldClass);
  return;
}

// `dynamic_atexit_destructor_for_'StaticFieldClass'' @ 150353190

void __cdecl
`FTextProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__(void)

{
  FFieldClass::~FFieldClass(&::StaticFieldClass);
  return;
}

// `dynamic_atexit_destructor_for_'ThreadLocalContext'' @ 1503531b0

void __cdecl
`FBlueprintContextGetThreadSingletonImpl'::__l2::
_dynamic_atexit_destructor_for__ThreadLocalContext__(void)

{
  FVirtualStackAllocator::~FVirtualStackAllocator
            ((FVirtualStackAllocator *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xcf0
             ));
  return;
}

// operator() @ 150488d30

bool __thiscall
`ProcessScriptFunction<void_(__cdecl*)(UObject_*,FFrame_&,void_*)>'::__l37::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7634585018982988820>);
  if (bVar2) {
    FFrame::GetScriptCallstack(&local_18,false,false);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7634585018982988820>,
                       &`public:___cdecl_`void___cdecl_ProcessScriptFunction<void_(__cdecl*)(UObject*___ptr64,FFrame&___ptr64,void*___ptr64)>(UObject*___ptr64,UFunction*___ptr64,FFrame&___ptr64,void*___ptr64_const,void_(__cdecl*)(UObject*___ptr64,FFrame&___ptr64,void*___ptr64))'::`37'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150488d96;
    }
  }
  bVar2 = false;
LAB_150488d96:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

