// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 943

// GroundTruthStatus'' @ 1411bcc20

void __cdecl `dynamic_initializer_for_'UControlRigReplay::GroundTruthStatus__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&UControlRigReplay::GroundTruthStatus,L"ControlRigReplay",L"GroundTruthStatus",
             L"Ground Truth");
  atexit(`dynamic_atexit_destructor_for_'UControlRigReplay::GroundTruthStatus__);
  return;
}

// GroundTruthStatusTooltip'' @ 1411bcc60

void __cdecl `dynamic_initializer_for_'UControlRigReplay::GroundTruthStatusTooltip__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&UControlRigReplay::GroundTruthStatusTooltip,L"ControlRigReplay",
             L"GroundTruthStatusTooltip",L"The results from the replay override the rig completely."
            );
  atexit(`dynamic_atexit_destructor_for_'UControlRigReplay::GroundTruthStatusTooltip__);
  return;
}

// LiveStatus'' @ 1411bcca0

void __cdecl `dynamic_initializer_for_'UControlRigReplay::LiveStatus__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&UControlRigReplay::LiveStatus,L"ControlRigReplay",L"LiveStatus",L"Live");
  atexit(`dynamic_atexit_destructor_for_'UControlRigReplay::LiveStatus__);
  return;
}

// LiveStatusTooltip'' @ 1411bcce0

void __cdecl `dynamic_initializer_for_'UControlRigReplay::LiveStatusTooltip__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&UControlRigReplay::LiveStatusTooltip,L"ControlRigReplay",L"LiveStatusTooltip",
             L"The replay is not affecting the rig.");
  atexit(`dynamic_atexit_destructor_for_'UControlRigReplay::LiveStatusTooltip__);
  return;
}

// OwnerComponent'' @ 1411bcd20

void __cdecl `dynamic_initializer_for_'UControlRig::OwnerComponent__(void)

{
  ::FName::FName(&UControlRig::OwnerComponent,"OwnerComponent");
  return;
}

// PathSeparator'' @ 1411bcd40

void __cdecl `dynamic_initializer_for_'FControlRigOverrideValue::PathSeparator__(void)

{
  ::FString::FString(&FControlRigOverrideValue::PathSeparator,L"->");
  atexit(`dynamic_atexit_destructor_for_'FControlRigOverrideValue::PathSeparator__);
  return;
}

// ReplayInputsStatus'' @ 1411bcd70

void __cdecl `dynamic_initializer_for_'UControlRigReplay::ReplayInputsStatus__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&UControlRigReplay::ReplayInputsStatus,L"ControlRigReplay",L"ReplayInputsStatus",
             L"Replay Inputs");
  atexit(`dynamic_atexit_destructor_for_'UControlRigReplay::ReplayInputsStatus__);
  return;
}

// ReplayInputsStatusTooltip'' @ 1411bcdb0

void __cdecl `dynamic_initializer_for_'UControlRigReplay::ReplayInputsStatusTooltip__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&UControlRigReplay::ReplayInputsStatusTooltip,L"ControlRigReplay",
             L"ReplayInputsStatusTooltip",
             L"The replay\'s input data is applied first, then the rig runs.");
  atexit(`dynamic_atexit_destructor_for_'UControlRigReplay::ReplayInputsStatusTooltip__);
  return;
}

// RootNodeID'' @ 1411bcdf0

void __cdecl `dynamic_initializer_for_'FOverriddenPropertySet::RootNodeID__(void)

{
  FOverriddenPropertyNodeID::RootNodeId(&FOverriddenPropertySet::RootNodeID);
  atexit(`dynamic_atexit_destructor_for_'FOverriddenPropertySet::RootNodeID__);
  return;
}

// `dynamic_initializer_for_'BoolArrayTypeName'' @ 1411bce20

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

// `dynamic_initializer_for_'BoolTypeName'' @ 1411bce70

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

// `dynamic_initializer_for_'CVarAnimNodeControlRigDebug'' @ 1411bcec0

void __cdecl _dynamic_initializer_for__CVarAnimNodeControlRigDebug__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAnimNodeControlRigDebug,L"a.AnimNode.ControlRig.Debug",local_res8,
             L"Set to 1 to turn on debug drawing for AnimNode_ControlRigBase",0);
  atexit(_dynamic_atexit_destructor_for__CVarAnimNodeControlRigDebug__);
  return;
}

// `dynamic_initializer_for_'CVarControlRigCreateFloatControlsForCurves'' @ 1411bcf10

void __cdecl _dynamic_initializer_for__CVarControlRigCreateFloatControlsForCurves__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarControlRigCreateFloatControlsForCurves,L"ControlRig.CreateFloatControlsForCurves",
             local_res8,
             L"If nonzero we create a float control for each curve in the curve container, useful for debugging low level controls."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarControlRigCreateFloatControlsForCurves__);
  return;
}

// `dynamic_initializer_for_'CVarControlRigDisableExecutionAnimNode'' @ 1411bcf60

void __cdecl _dynamic_initializer_for__CVarControlRigDisableExecutionAnimNode__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarControlRigDisableExecutionAnimNode,L"ControlRig.DisableExecutionInAnimNode",
             local_res8,L"if nonzero we disable the execution of Control Rigs inside an anim node.",
             0);
  atexit(_dynamic_atexit_destructor_for__CVarControlRigDisableExecutionAnimNode__);
  return;
}

// `dynamic_initializer_for_'CVarControlRigDisableExecutionComponent'' @ 1411bcfb0

void __cdecl _dynamic_initializer_for__CVarControlRigDisableExecutionComponent__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarControlRigDisableExecutionComponent,L"ControlRig.DisableExecutionInComponent",
             local_res8,
             L"if nonzero we disable the execution of Control Rigs inside a ControlRigComponent.",0)
  ;
  atexit(_dynamic_atexit_destructor_for__CVarControlRigDisableExecutionComponent__);
  return;
}

// `dynamic_initializer_for_'CVarControlRigDisableTickDependencyCheck'' @ 1411bd000

void __cdecl _dynamic_initializer_for__CVarControlRigDisableTickDependencyCheck__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarControlRigDisableTickDependencyCheck,L"ControlRig.DisableTickDependencyCheck",
             local_res8,
             L"Disables tick dependency checking, which prevents cycles. Use carefully.\n",0);
  atexit(_dynamic_atexit_destructor_for__CVarControlRigDisableTickDependencyCheck__);
  return;
}

// `dynamic_initializer_for_'CVarControlRigEnableDrawInterfaceInGame'' @ 1411bd050

void __cdecl _dynamic_initializer_for__CVarControlRigEnableDrawInterfaceInGame__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarControlRigEnableDrawInterfaceInGame,L"ControlRig.EnableDrawInterfaceInGame",
             local_res8,L"If nonzero debug drawing will be enabled during play.",0);
  atexit(_dynamic_atexit_destructor_for__CVarControlRigEnableDrawInterfaceInGame__);
  return;
}

// `dynamic_initializer_for_'CVarControlRigEnableOverrides'' @ 1411bd0a0

void __cdecl _dynamic_initializer_for__CVarControlRigEnableOverrides__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  bool local_res8 [8];
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarControlRigEnableOverrides,L"ControlRig.Overrides",local_res8,
             L"Enables overrides for use in Control Rig",
             (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,0);
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
  atexit(_dynamic_atexit_destructor_for__CVarControlRigEnableOverrides__);
  return;
}

// `dynamic_initializer_for_'ControlRigProfilingLog'' @ 1411bd1e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__ControlRigProfilingLog__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&ControlRigProfilingLog,L"ControlRigProfilingLog",Log,All);
  atexit(_dynamic_atexit_destructor_for__ControlRigProfilingLog__);
  return;
}

// `dynamic_initializer_for_'DoubleArrayTypeName'' @ 1411bd220

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

// `dynamic_initializer_for_'DoubleTypeName'' @ 1411bd270

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

// `dynamic_initializer_for_'FNameArrayTypeName'' @ 1411bd2c0

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

// `dynamic_initializer_for_'FNameTypeName'' @ 1411bd310

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

// `dynamic_initializer_for_'FStringArrayTypeName'' @ 1411bd360

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

// `dynamic_initializer_for_'FStringTypeName'' @ 1411bd3b0

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

// `dynamic_initializer_for_'FTextTypeName'' @ 1411bd400

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

// `dynamic_initializer_for_'FloatArrayTypeName'' @ 1411bd450

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

// `dynamic_initializer_for_'FloatTypeName'' @ 1411bd4a0

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

// `dynamic_initializer_for_'GControlRigStats'' @ 1411bd4f0

void __cdecl _dynamic_initializer_for__GControlRigStats__(void)

{
  atexit(_dynamic_atexit_destructor_for__GControlRigStats__);
  return;
}

// `dynamic_initializer_for_'GRegisterControlRigObjectVersion'' @ 1411bd510

void __cdecl _dynamic_initializer_for__GRegisterControlRigObjectVersion__(void)

{
  FGuid FVar1;
  FGuid local_38;
  FGuid local_28 [2];
  
  FVar1 = FControlRigObjectVersion::GUID;
  local_38 = FControlRigObjectVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_38,0x28,L"Dev-ControlRig",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  local_28[0] = FVar1;
  FDevVersionRegistration::RecordDevVersion(local_28);
  atexit(_dynamic_atexit_destructor_for__GRegisterControlRigObjectVersion__);
  return;
}

// `dynamic_initializer_for_'Int32ArrayTypeName'' @ 1411bd570

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

// `dynamic_initializer_for_'Int32TypeName'' @ 1411bd5c0

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

// `dynamic_initializer_for_'Int64TypeName'' @ 1411bd610

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

// `dynamic_initializer_for_'IntTypeName'' @ 1411bd660

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

// `dynamic_initializer_for_'LogControlRig'' @ 1411bd6b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogControlRig__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogControlRig,L"LogControlRig",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogControlRig__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantControlRig'' @ 1411bd6f0

void __cdecl _dynamic_initializer_for__ModuleRegistrantControlRig__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "ControlRig";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"ControlRig",10);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FControlRigModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'NAME_AControlRigShapeActor_OnEnabledChanged'' @ 1411bd740

void __cdecl _dynamic_initializer_for__NAME_AControlRigShapeActor_OnEnabledChanged__(void)

{
  FName::FName(&NAME_AControlRigShapeActor_OnEnabledChanged,L"OnEnabledChanged");
  return;
}

// `dynamic_initializer_for_'NAME_AControlRigShapeActor_OnHoveredChanged'' @ 1411bd760

void __cdecl _dynamic_initializer_for__NAME_AControlRigShapeActor_OnHoveredChanged__(void)

{
  FName::FName(&NAME_AControlRigShapeActor_OnHoveredChanged,L"OnHoveredChanged");
  return;
}

// `dynamic_initializer_for_'NAME_AControlRigShapeActor_OnManipulatingChanged'' @ 1411bd780

void __cdecl _dynamic_initializer_for__NAME_AControlRigShapeActor_OnManipulatingChanged__(void)

{
  FName::FName(&NAME_AControlRigShapeActor_OnManipulatingChanged,L"OnManipulatingChanged");
  return;
}

// `dynamic_initializer_for_'NAME_AControlRigShapeActor_OnSelectionChanged'' @ 1411bd7a0

void __cdecl _dynamic_initializer_for__NAME_AControlRigShapeActor_OnSelectionChanged__(void)

{
  FName::FName(&NAME_AControlRigShapeActor_OnSelectionChanged,L"OnSelectionChanged");
  return;
}

// `dynamic_initializer_for_'NAME_AControlRigShapeActor_OnTransformChanged'' @ 1411bd7c0

void __cdecl _dynamic_initializer_for__NAME_AControlRigShapeActor_OnTransformChanged__(void)

{
  FName::FName(&NAME_AControlRigShapeActor_OnTransformChanged,L"OnTransformChanged");
  return;
}

// `dynamic_initializer_for_'NAME_UControlRigComponent_OnPostConstruction'' @ 1411bd7e0

void __cdecl _dynamic_initializer_for__NAME_UControlRigComponent_OnPostConstruction__(void)

{
  FName::FName(&NAME_UControlRigComponent_OnPostConstruction,L"OnPostConstruction");
  return;
}

// `dynamic_initializer_for_'NAME_UControlRigComponent_OnPostForwardsSolve'' @ 1411bd800

void __cdecl _dynamic_initializer_for__NAME_UControlRigComponent_OnPostForwardsSolve__(void)

{
  FName::FName(&NAME_UControlRigComponent_OnPostForwardsSolve,L"OnPostForwardsSolve");
  return;
}

// `dynamic_initializer_for_'NAME_UControlRigComponent_OnPostInitialize'' @ 1411bd820

void __cdecl _dynamic_initializer_for__NAME_UControlRigComponent_OnPostInitialize__(void)

{
  FName::FName(&NAME_UControlRigComponent_OnPostInitialize,L"OnPostInitialize");
  return;
}

// `dynamic_initializer_for_'NAME_UControlRigComponent_OnPreConstruction'' @ 1411bd840

void __cdecl _dynamic_initializer_for__NAME_UControlRigComponent_OnPreConstruction__(void)

{
  FName::FName(&NAME_UControlRigComponent_OnPreConstruction,L"OnPreConstruction");
  return;
}

// `dynamic_initializer_for_'NAME_UControlRigComponent_OnPreForwardsSolve'' @ 1411bd860

void __cdecl _dynamic_initializer_for__NAME_UControlRigComponent_OnPreForwardsSolve__(void)

{
  FName::FName(&NAME_UControlRigComponent_OnPreForwardsSolve,L"OnPreForwardsSolve");
  return;
}

// `dynamic_initializer_for_'NAME_UControlRigComponent_OnPreInitialize'' @ 1411bd880

void __cdecl _dynamic_initializer_for__NAME_UControlRigComponent_OnPreInitialize__(void)

{
  FName::FName(&NAME_UControlRigComponent_OnPreInitialize,L"OnPreInitialize");
  return;
}

// `dynamic_initializer_for_'NotificationLock'' @ 1411bd8a0

void __cdecl UE::Private::_dynamic_initializer_for__NotificationLock__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&NotificationLock,4000);
  atexit(_dynamic_atexit_destructor_for__NotificationLock__);
  return;
}

// `dynamic_initializer_for_'NotifyingRigs'' @ 1411bd8d0

void __cdecl UE::Private::_dynamic_initializer_for__NotifyingRigs__(void)

{
  atexit(_dynamic_atexit_destructor_for__NotifyingRigs__);
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_PersistentData_Access'' @ 1411bd8f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_PersistentData_Access__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_PersistentData_Access ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_PersistentData_Access>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_PersistentData_Access");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_PersistentData_Access,*pFVar1,
               L"Persistent Data Access","STATGROUP_MovieSceneEval","STATCAT_Advanced",
               L"Movie Scene Evaluation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ControlRig_Evaluate'' @ 1411bd980

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ControlRig_Evaluate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ControlRig_Evaluate == (FThreadSafeStaticStat<FStat_STAT_ControlRig_Evaluate>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_ControlRig_Evaluate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ControlRig_Evaluate,*pFVar1,
               L"ControlRig_Evaluate","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,ST_int64
               ,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ControlRig_Evaluate_Construction'' @ 1411bda10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ControlRig_Evaluate_Construction__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ControlRig_Evaluate_Construction ==
      (FThreadSafeStaticStat<FStat_STAT_ControlRig_Evaluate_Construction>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ControlRig_Evaluate_Construction");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ControlRig_Evaluate_Construction,*pFVar1,
               L"ControlRig_Evaluate_Construction","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ControlRig_UpdateInput'' @ 1411bdaa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ControlRig_UpdateInput__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ControlRig_UpdateInput ==
      (FThreadSafeStaticStat<FStat_STAT_ControlRig_UpdateInput>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ControlRig_UpdateInput");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ControlRig_UpdateInput,*pFVar1,
               L"ControlRig_UpdateInput","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ControlRig_UpdateOutput'' @ 1411bdb30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ControlRig_UpdateOutput__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ControlRig_UpdateOutput ==
      (FThreadSafeStaticStat<FStat_STAT_ControlRig_UpdateOutput>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ControlRig_UpdateOutput");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ControlRig_UpdateOutput,*pFVar1,
               L"ControlRig_UpdateOutput","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RigExecution'' @ 1411bdbc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RigExecution__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RigExecution == (FThreadSafeStaticStat<FStat_STAT_RigExecution>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RigExecution");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigExecution,*pFVar1,
               L"Control Rig Execution","STATGROUP_ControlRig","STATCAT_Advanced",L"ControlRig",true
               ,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'UInt32ArrayTypeName'' @ 1411bdc50

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

// `dynamic_initializer_for_'UInt32TypeName'' @ 1411bdca0

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

// `dynamic_initializer_for_'UInt64TypeName'' @ 1411bdcf0

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

// `dynamic_initializer_for_'UInt8ArrayTypeName'' @ 1411bdd40

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

// `dynamic_initializer_for_'UInt8TypeName'' @ 1411bdd90

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

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_AnimNode_ControlRigBase_h__Script_ControlRig_3979574578'' @ 1411bdde0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_AnimNode_ControlRigBase_h__Script_ControlRig_3979574578__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ControlRig",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_AnimNode_ControlRigBase_h__Script_ControlRig_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_AnimNode_ControlRig_ExternalSource_h__Script_ControlRig_3165598275'' @ 1411bde20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_AnimNode_ControlRig_ExternalSource_h__Script_ControlRig_3165598275__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ControlRig",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_AnimNode_ControlRig_ExternalSource_h__Script_ControlRig_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_AnimNode_ControlRig_Library_h__Script_ControlRig_599955528'' @ 1411bde60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_AnimNode_ControlRig_Library_h__Script_ControlRig_599955528__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ControlRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_AnimNode_ControlRig_Library_h__Script_ControlRig_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_AnimNode_ControlRig_Library_h__Script_ControlRig_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_AnimNode_ControlRig_h__Script_ControlRig_1576519718'' @ 1411bdeb0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_AnimNode_ControlRig_h__Script_ControlRig_1576519718__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ControlRig",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_AnimNode_ControlRig_h__Script_ControlRig_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Constraints_ControlRigTransformableHandle_h__Script_ControlRig_2838931689'' @ 1411bdef0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Constraints_ControlRigTransformableHandle_h__Script_ControlRig_2838931689__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ControlRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Constraints_ControlRigTransformableHandle_h__Script_ControlRig_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAnimInstance_h__Script_ControlRig_2518353289'' @ 1411bdf30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAnimInstance_h__Script_ControlRig_2518353289__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ControlRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAnimInstance_h__Script_ControlRig_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAnimInstance_h__Script_ControlRig_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAssetUserData_h__Script_ControlRig_507863362'' @ 1411bdf80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAssetUserData_h__Script_ControlRig_507863362__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ControlRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAssetUserData_h__Script_ControlRig_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigBlueprintGeneratedClass_h__Script_ControlRig_839001069'' @ 1411bdfc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigBlueprintGeneratedClass_h__Script_ControlRig_839001069__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ControlRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigBlueprintGeneratedClass_h__Script_ControlRig_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h__Script_ControlRig_2358036290'' @ 1411be000

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h__Script_ControlRig_2358036290__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ControlRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h__Script_ControlRig_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h__Script_ControlRig_Statics
             ::ScriptStructInfo,4,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h__Script_ControlRig_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigControlActor_h__Script_ControlRig_2812747686'' @ 1411be050

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigControlActor_h__Script_ControlRig_2812747686__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ControlRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigControlActor_h__Script_ControlRig_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigDefines_h__Script_ControlRig_298098101'' @ 1411be090

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigDefines_h__Script_ControlRig_298098101__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ControlRig",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigDefines_h__Script_ControlRig_Statics
             ::EnumInfo,3);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoActor_h__Script_ControlRig_3380551776'' @ 1411be0e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoActor_h__Script_ControlRig_3380551776__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ControlRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoActor_h__Script_ControlRig_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoActor_h__Script_ControlRig_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoLibrary_h__Script_ControlRig_2144691846'' @ 1411be130

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoLibrary_h__Script_ControlRig_2144691846__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ControlRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoLibrary_h__Script_ControlRig_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoLibrary_h__Script_ControlRig_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigOverride_h__Script_ControlRig_990605171'' @ 1411be180

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigOverride_h__Script_ControlRig_990605171__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ControlRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigOverride_h__Script_ControlRig_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigOverride_h__Script_ControlRig_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigReplay_h__Script_ControlRig_3886581990'' @ 1411be1d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigReplay_h__Script_ControlRig_3886581990__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ControlRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigReplay_h__Script_ControlRig_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigReplay_h__Script_ControlRig_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigReplay_h__Script_ControlRig_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h__Script_ControlRig_2478879204'' @ 1411be220

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h__Script_ControlRig_2478879204__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ControlRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h__Script_ControlRig_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h__Script_ControlRig_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigValidationPass_h__Script_ControlRig_1579569088'' @ 1411be270

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigValidationPass_h__Script_ControlRig_1579569088__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ControlRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigValidationPass_h__Script_ControlRig_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigValidationPass_h__Script_ControlRig_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h__Script_ControlRig_3483628463'' @ 1411be2c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h__Script_ControlRig_3483628463__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ControlRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h__Script_ControlRig_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimContainer_h__Script_ControlRig_3043543910'' @ 1411be300

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimContainer_h__Script_ControlRig_3043543910__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ControlRig",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimContainer_h__Script_ControlRig_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimLinearSpring_h__Script_ControlRig_3866175072'' @ 1411be340

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimLinearSpring_h__Script_ControlRig_3866175072__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ControlRig",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimLinearSpring_h__Script_ControlRig_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointConstraint_h__Script_ControlRig_2131875754'' @ 1411be380

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointConstraint_h__Script_ControlRig_2131875754__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ControlRig",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointConstraint_h__Script_ControlRig_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointConstraint_h__Script_ControlRig_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointContainer_h__Script_ControlRig_576708379'' @ 1411be3d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointContainer_h__Script_ControlRig_576708379__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ControlRig",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointContainer_h__Script_ControlRig_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointForce_h__Script_ControlRig_3894080297'' @ 1411be410

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointForce_h__Script_ControlRig_3894080297__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ControlRig",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointForce_h__Script_ControlRig_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointForce_h__Script_ControlRig_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimSoftCollision_h__Script_ControlRig_2920340655'' @ 1411be460

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimSoftCollision_h__Script_ControlRig_2920340655__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ControlRig",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimSoftCollision_h__Script_ControlRig_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimSoftCollision_h__Script_ControlRig_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigController_h__Script_ControlRig_326326707'' @ 1411be4b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigController_h__Script_ControlRig_326326707__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ControlRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigController_h__Script_ControlRig_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigModel_h__Script_ControlRig_3178447955'' @ 1411be4f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigModel_h__Script_ControlRig_3178447955__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ControlRig",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigModel_h__Script_ControlRig_Statics
             ::ScriptStructInfo,6,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigModel_h__Script_ControlRig_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRig_h__Script_ControlRig_3625526462'' @ 1411be540

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRig_h__Script_ControlRig_3625526462__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ControlRig",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRig_h__Script_ControlRig_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRig_h__Script_ControlRig_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigInstanceData_h__Script_ControlRig_516317726'' @ 1411be590

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigInstanceData_h__Script_ControlRig_516317726__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ControlRig",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigInstanceData_h__Script_ControlRig_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_StructReference_h__Script_ControlRig_672396025'' @ 1411be5d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_StructReference_h__Script_ControlRig_672396025__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ControlRig",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_StructReference_h__Script_ControlRig_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigIOSettings_h__Script_ControlRig_3267652371'' @ 1411be610

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigIOSettings_h__Script_ControlRig_3267652371__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ControlRig",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigIOSettings_h__Script_ControlRig_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_DebugBase_h__Script_ControlRig_2889272226'' @ 1411be650

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_DebugBase_h__Script_ControlRig_2889272226__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ControlRig",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_DebugBase_h__Script_ControlRig_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_RigUnit_HighlevelBase_h__Script_ControlRig_3500146457'' @ 1411be690

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_RigUnit_HighlevelBase_h__Script_ControlRig_3500146457__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ControlRig",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_RigUnit_HighlevelBase_h__Script_ControlRig_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_RigUnit_HighlevelBase_h__Script_ControlRig_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_ControlRig'' @ 1411be6e0

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_ControlRig__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x6817155c;
  local_res8[0].DeclarationsHash = 0x39fcc286;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_ControlRig,L"/Script/ControlRig",
             &Z_Registration_Info_UPackage__Script_ControlRig,local_res8);
  return;
}

// `dynamic_initializer_for_'gPendingSkeletalMeshes'' @ 1411be720

void __cdecl _dynamic_initializer_for__gPendingSkeletalMeshes__(void)

{
  atexit(_dynamic_atexit_destructor_for__gPendingSkeletalMeshes__);
  return;
}

// `dynamic_initializer_for_'gPendingSkeletalMeshesLock'' @ 1411be740

void __cdecl _dynamic_initializer_for__gPendingSkeletalMeshesLock__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&gPendingSkeletalMeshesLock,4000);
  atexit(_dynamic_atexit_destructor_for__gPendingSkeletalMeshesLock__);
  return;
}

// Z_Construct_UFunction_UModularRigController_ConnectConnectorToElement @ 14a1fa430

UFunction * __cdecl Z_Construct_UFunction_UModularRigController_ConnectConnectorToElement(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularRigController_ConnectConnectorToElement_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UControlRigComponent_AddMappedComponents @ 14a1fa470

UFunction * __cdecl Z_Construct_UFunction_UControlRigComponent_AddMappedComponents(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigComponent_AddMappedComponents_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a1fa4b0

void * __cdecl Z_Construct_UScriptStruct_FRigModuleReference_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x2d0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigModuleReference,&UE::CoreUObject::Private::Construct<FRigModuleReference>,&UE::CoreUObject::Private::ConstructForTests<FRigModuleReference>,&UE::CoreUObject::Private::Destruct<FRigModuleReference>,&UE::CoreUObject::Private::Copy<FRigModuleReference>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bSetupUndo_SetBit @ 14a1fa4f0

void __cdecl
Z_Construct_UFunction_UModularRigController_ConnectConnectorToElements_Statics::
NewProp_bSetupUndo_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewProp_bAutoResolveOtherConnectors_SetBit @ 14a1fa540

void __cdecl
Z_Construct_UFunction_UModularRigController_ConnectConnectorToElements_Statics::
NewProp_bAutoResolveOtherConnectors_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x21) = 1;
  return;
}

// NewProp_bCheckValidConnection_SetBit @ 14a1fa550

void __cdecl
Z_Construct_UFunction_UModularRigController_ConnectConnectorToElements_Statics::
NewProp_bCheckValidConnection_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x22) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a1fa560

void __cdecl
Z_Construct_UFunction_UModularRigController_ConnectConnectorToElements_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x23) = 1;
  return;
}

// Z_Construct_UFunction_UControlRigComponent_AddMappedElements @ 14a1fa570

UFunction * __cdecl Z_Construct_UFunction_UControlRigComponent_AddMappedElements(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigComponent_AddMappedElements_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularRigController_ConnectConnectorToElements @ 14a1fa5b0

UFunction * __cdecl Z_Construct_UFunction_UModularRigController_ConnectConnectorToElements(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularRigController_ConnectConnectorToElements_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSetupUndo_SetBit @ 14a1fa5f0

void __cdecl
Z_Construct_UFunction_UModularRigController_DeleteModule_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a1fa610

void __cdecl
Z_Construct_UFunction_UModularRigController_DeleteModule_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// NewStructOps @ 14a1fa670

void * __cdecl Z_Construct_UScriptStruct_FModularRigSingleConnection_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FModularRigSingleConnection,&UE::CoreUObject::Private::Construct<FModularRigSingleConnection>,&UE::CoreUObject::Private::ConstructForTests<FModularRigSingleConnection>,&UE::CoreUObject::Private::Destruct<FModularRigSingleConnection>,&UE::CoreUObject::Private::Copy<FModularRigSingleConnection>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UModularRigController_DeleteModule @ 14a1fa6b0

UFunction * __cdecl Z_Construct_UFunction_UModularRigController_DeleteModule(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularRigController_DeleteModule_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a1fa8d0

void __cdecl
Z_Construct_UFunction_UModularRigController_DeselectModule_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UModularRigController_DeselectModule @ 14a1fa8e0

UFunction * __cdecl Z_Construct_UFunction_UModularRigController_DeselectModule(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularRigController_DeselectModule_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bDisconnectSubModules_SetBit @ 14a1fa920

void __cdecl
Z_Construct_UFunction_UModularRigController_DisconnectConnector_Statics::
NewProp_bDisconnectSubModules_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewProp_bSetupUndo_SetBit @ 14a1fa930

void __cdecl
Z_Construct_UFunction_UModularRigController_DisconnectConnector_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a1fa940

void __cdecl
Z_Construct_UFunction_UModularRigController_DisconnectConnector_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xe) = 1;
  return;
}

// NewStructOps @ 14a1fa950

void * __cdecl Z_Construct_UScriptStruct_FModularRigConnections_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FModularRigConnections,&UE::CoreUObject::Private::Construct<FModularRigConnections>,&UE::CoreUObject::Private::ConstructForTests<FModularRigConnections>,&UE::CoreUObject::Private::Destruct<FModularRigConnections>,&UE::CoreUObject::Private::Copy<FModularRigConnections>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UModularRigController_DisconnectConnector @ 14a1fafc0

UFunction * __cdecl Z_Construct_UFunction_UModularRigController_DisconnectConnector(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularRigController_DisconnectConnector_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14a1fb000

void * __thiscall
FCRSimPointContainer::_scalar_deleting_destructor_(FCRSimPointContainer *this,uint param_1)

{
  ~FCRSimPointContainer(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// Z_Construct_UClass_UControlRigTestData @ 14a1fb040

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UControlRigTestData(void)

{
  if (Z_Registration_Info_UClass_UControlRigTestData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UControlRigTestData.OuterSingleton,
               &Z_Construct_UClass_UControlRigTestData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UControlRigTestData.OuterSingleton;
}

// Z_Construct_UScriptStruct_FControlRigTestDataFrame @ 14a1fb080

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FControlRigTestDataFrame(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FControlRigTestDataFrame.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FControlRigTestDataFrame.InnerSingleton,
               &Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FControlRigTestDataFrame.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FControlRigTestDataFrame.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UClass_UControlRigOverrideAsset @ 14a1fb100

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UControlRigOverrideAsset(void)

{
  if (Z_Registration_Info_UClass_UControlRigOverrideAsset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UControlRigOverrideAsset.OuterSingleton,
               &Z_Construct_UClass_UControlRigOverrideAsset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UControlRigOverrideAsset.OuterSingleton;
}

// Z_Construct_UScriptStruct_FCRSimPointForce @ 14a1fb140

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCRSimPointForce(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCRSimPointForce.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCRSimPointForce.InnerSingleton,
               &Z_Construct_UScriptStruct_FCRSimPointForce_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCRSimPointForce.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCRSimPointForce.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FControlRigOverrideContainer @ 14a1fb1c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FControlRigOverrideContainer(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FControlRigOverrideContainer.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FControlRigOverrideContainer.InnerSingleton,
               &Z_Construct_UScriptStruct_FControlRigOverrideContainer_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FControlRigOverrideContainer.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FControlRigOverrideContainer.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FCRSimSoftCollision @ 14a1fb240

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCRSimSoftCollision(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCRSimSoftCollision.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCRSimSoftCollision.InnerSingleton,
               &Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCRSimSoftCollision.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FCRSimSoftCollision.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 14a1fb2c0

void * __cdecl Z_Construct_UScriptStruct_FControlRigOverrideValue_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FControlRigOverrideValue,&UE::CoreUObject::Private::Construct<FControlRigOverrideValue>,&UE::CoreUObject::Private::ConstructForTests<FControlRigOverrideValue>,&UE::CoreUObject::Private::Destruct<FControlRigOverrideValue>,&UE::CoreUObject::Private::SerializeArchive<FControlRigOverrideValue>,&UE::CoreUObject::Private::Copy<FControlRigOverrideValue>,&UE::CoreUObject::Private::GetStructTypeHash<FControlRigOverrideValue>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a1fb300

void * __cdecl Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x108;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FControlRigTestDataFrame,&UE::CoreUObject::Private::Construct<FControlRigTestDataFrame>,&UE::CoreUObject::Private::ConstructForTests<FControlRigTestDataFrame>,&UE::CoreUObject::Private::Destruct<FControlRigTestDataFrame>,&UE::CoreUObject::Private::Copy<FControlRigTestDataFrame>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bSetupUndo_SetBit @ 14a1fb340

void __cdecl
Z_Construct_UFunction_UModularRigController_DisconnectCyclicConnectors_Statics::
NewProp_bSetupUndo_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 14a1fb350

void * __cdecl Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x78;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCRSimPointContainer,&UE::CoreUObject::Private::Construct<FCRSimPointContainer>,&UE::CoreUObject::Private::ConstructForTests<FCRSimPointContainer>,&UE::CoreUObject::Private::Destruct<FCRSimPointContainer>,&UE::CoreUObject::Private::Copy<FCRSimPointContainer>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UModularRigController_DisconnectCyclicConnectors @ 14a1fb390

UFunction * __cdecl Z_Construct_UFunction_UModularRigController_DisconnectCyclicConnectors(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularRigController_DisconnectCyclicConnectors_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a1fb3d0

void * __cdecl Z_Construct_UScriptStruct_FControlRigOverrideContainer_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x158;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FControlRigOverrideContainer,&UE::CoreUObject::Private::Construct<FControlRigOverrideContainer>,&UE::CoreUObject::Private::ConstructForTests<FControlRigOverrideContainer>,&UE::CoreUObject::Private::Destruct<FControlRigOverrideContainer>,&UE::CoreUObject::Private::SerializeArchive<FControlRigOverrideContainer>,&UE::CoreUObject::Private::Copy<FControlRigOverrideContainer>,&UE::CoreUObject::Private::Identical<FControlRigOverrideContainer>,&UE::CoreUObject::Private::AddStructReferencedObjects<FControlRigOverrideContainer>,&UE::CoreUObject::Private::GetStructTypeHash<FControlRigOverrideContainer>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a1fb410

void * __cdecl Z_Construct_UScriptStruct_FModularRigModel_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x100;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FModularRigModel,&UE::CoreUObject::Private::Construct<FModularRigModel>,&UE::CoreUObject::Private::ConstructForTests<FModularRigModel>,&UE::CoreUObject::Private::Destruct<FModularRigModel>,&UE::CoreUObject::Private::Copy<FModularRigModel>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UModularRigController_ExportModuleSettingsToString @ 14a1fb450

UFunction * __cdecl Z_Construct_UFunction_UModularRigController_ExportModuleSettingsToString(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularRigController_ExportModuleSettingsToString_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UControlRigAnimInstance @ 14a1fb490

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UControlRigAnimInstance(void)

{
  if (Z_Registration_Info_UClass_UControlRigAnimInstance.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UControlRigAnimInstance.OuterSingleton,
               &Z_Construct_UClass_UControlRigAnimInstance_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UControlRigAnimInstance.OuterSingleton;
}

// NewProp_bInput_SetBit @ 14a1fb4d0

void __cdecl
Z_Construct_UFunction_UControlRigTestData_GetFrameIndexForTime_Statics::NewProp_bInput_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewStructOps @ 14a1fb4e0

void * __cdecl Z_Construct_UScriptStruct_FControlRigAnimInstanceProxy_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x8f0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FControlRigAnimInstanceProxy,&UE::CoreUObject::Private::Construct<FControlRigAnimInstanceProxy>,&UE::CoreUObject::Private::ConstructForTests<FControlRigAnimInstanceProxy>,&UE::CoreUObject::Private::Destruct<FControlRigAnimInstanceProxy>,&UE::CoreUObject::Private::Copy<FControlRigAnimInstanceProxy>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UModularRigController_GetAllModules @ 14a1fb520

UFunction * __cdecl Z_Construct_UFunction_UModularRigController_GetAllModules(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularRigController_GetAllModules_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UControlRigTestData_GetFrameIndexForTime @ 14a1fb560

UFunction * __cdecl Z_Construct_UFunction_UControlRigTestData_GetFrameIndexForTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigTestData_GetFrameIndexForTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a1fb5a0

void * __cdecl
Z_Construct_UScriptStruct_FModularRigModuleSettingsForClipboard_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x110;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FModularRigModuleSettingsForClipboard,&UE::CoreUObject::Private::Construct<FModularRigModuleSettingsForClipboard>,&UE::CoreUObject::Private::ConstructForTests<FModularRigModuleSettingsForClipboard>,&UE::CoreUObject::Private::Destruct<FModularRigModuleSettingsForClipboard>,&UE::CoreUObject::Private::Copy<FModularRigModuleSettingsForClipboard>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UModularRigController_GetConnectorsForModule @ 14a1fb5e0

UFunction * __cdecl Z_Construct_UFunction_UModularRigController_GetConnectorsForModule(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularRigController_GetConnectorsForModule_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UControlRig_NoRegister @ 14a1fb620

UClass * __cdecl Z_Construct_UClass_UControlRig_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRig",
               &Z_Registration_Info_UClass_UControlRig.InnerSingleton,
               UControlRig::StaticRegisterNativesUControlRig,0xc50,0x10,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UControlRig>,InternalVTableHelperCtorCaller<UControlRig>,
               local_res8,URigVMHost::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRig.InnerSingleton;
}

// Z_Construct_UFunction_UModularRigController_GetModuleReference @ 14a1fc070

UFunction * __cdecl Z_Construct_UFunction_UModularRigController_GetModuleReference(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularRigController_GetModuleReference_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a1fc1a0

void * __cdecl
Z_Construct_UScriptStruct_FModularRigModuleSettingsSetForClipboard_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FModularRigModuleSettingsSetForClipboard,&UE::CoreUObject::Private::Construct<FModularRigModuleSettingsSetForClipboard>,&UE::CoreUObject::Private::ConstructForTests<FModularRigModuleSettingsSetForClipboard>,&UE::CoreUObject::Private::Destruct<FModularRigModuleSettingsSetForClipboard>,&UE::CoreUObject::Private::Copy<FModularRigModuleSettingsSetForClipboard>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UEnum_ControlRig_ECRSimPointForceType @ 14a1fc3d0

UEnum * __cdecl Z_Construct_UEnum_ControlRig_ECRSimPointForceType(void)

{
  if (Z_Registration_Info_UEnum_ECRSimPointForceType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ECRSimPointForceType.InnerSingleton,
               &Z_Construct_UEnum_ControlRig_ECRSimPointForceType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ECRSimPointForceType.InnerSingleton;
}

// ECRSimPointForceType_StaticEnum @ 14a1fc410

UEnum * __cdecl ECRSimPointForceType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECRSimPointForceType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_ECRSimPointForceType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_ECRSimPointForceType,(UObject *)pUVar1,
                       L"ECRSimPointForceType");
  }
  return Z_Registration_Info_UEnum_ECRSimPointForceType.OuterSingleton;
}

// NewProp_bNormalize_SetBit @ 14a1fc450

void __cdecl
Z_Construct_UScriptStruct_FCRSimPointForce_Statics::NewProp_bNormalize_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  return;
}

// NewStructOps @ 14a1fc460

void * __cdecl Z_Construct_UScriptStruct_FCRSimPointForce_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCRSimPointForce,&UE::CoreUObject::Private::Construct<FCRSimPointForce>,&UE::CoreUObject::Private::ConstructForTests<FCRSimPointForce>,&UE::CoreUObject::Private::Destruct<FCRSimPointForce>,&UE::CoreUObject::Private::Copy<FCRSimPointForce>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UControlRig @ 14a1fc4a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UControlRig(void)

{
  if (Z_Registration_Info_UClass_UControlRig.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UControlRig.OuterSingleton,
               &Z_Construct_UClass_UControlRig_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UControlRig.OuterSingleton;
}

// Z_Construct_UEnum_ControlRig_ERigExecutionType @ 14a1fc4e0

UEnum * __cdecl Z_Construct_UEnum_ControlRig_ERigExecutionType(void)

{
  if (Z_Registration_Info_UEnum_ERigExecutionType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERigExecutionType.InnerSingleton,
               &Z_Construct_UEnum_ControlRig_ERigExecutionType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERigExecutionType.InnerSingleton;
}

// NewProp_bSelected_SetBit @ 14a1fc520

void __cdecl
Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature_Statics::
NewProp_bSelected_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x5a0) = 1;
  return;
}

// Z_Construct_UEnum_ControlRig_ECRSimSoftCollisionType @ 14a1fc530

UEnum * __cdecl Z_Construct_UEnum_ControlRig_ECRSimSoftCollisionType(void)

{
  if (Z_Registration_Info_UEnum_ECRSimSoftCollisionType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ECRSimSoftCollisionType.InnerSingleton,
               &Z_Construct_UEnum_ControlRig_ECRSimSoftCollisionType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ECRSimSoftCollisionType.InnerSingleton;
}

// ECRSimSoftCollisionType_StaticEnum @ 14a1fc570

UEnum * __cdecl ECRSimSoftCollisionType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECRSimSoftCollisionType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_ECRSimSoftCollisionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_ECRSimSoftCollisionType,(UObject *)pUVar1,
                       L"ECRSimSoftCollisionType");
  }
  return Z_Registration_Info_UEnum_ECRSimSoftCollisionType.OuterSingleton;
}

// Z_Construct_UClass_UControlRigShapeLibraryLink @ 14a1fc5b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UControlRigShapeLibraryLink(void)

{
  if (Z_Registration_Info_UClass_UControlRigShapeLibraryLink.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UControlRigShapeLibraryLink.OuterSingleton,
               &Z_Construct_UClass_UControlRigShapeLibraryLink_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UControlRigShapeLibraryLink.OuterSingleton;
}

// NewProp_bSetupUndo_SetBit @ 14a1fc5f0

void __cdecl
Z_Construct_UFunction_UControlRig_ClearControlSelection_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a1fc600

void __cdecl
Z_Construct_UFunction_UControlRig_ClearControlSelection_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewProp_bInverted_SetBit @ 14a1fc610

void __cdecl
Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::NewProp_bInverted_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x74) = 1;
  return;
}

// NewStructOps @ 14a1fc620

void * __cdecl Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCRSimSoftCollision,&UE::CoreUObject::Private::Construct<FCRSimSoftCollision>,&UE::CoreUObject::Private::ConstructForTests<FCRSimSoftCollision>,&UE::CoreUObject::Private::Destruct<FCRSimSoftCollision>,&UE::CoreUObject::Private::Copy<FCRSimSoftCollision>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UControlRigShapeLibraryLink_GetShapeLibrary @ 14a1fc660

UFunction * __cdecl Z_Construct_UFunction_UControlRigShapeLibraryLink_GetShapeLibrary(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigShapeLibraryLink_GetShapeLibrary_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UControlRig_ClearControlSelection @ 14a1fc730

UFunction * __cdecl Z_Construct_UFunction_UControlRig_ClearControlSelection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRig_ClearControlSelection_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_ControlRig_ControlRigComponentDelegate__DelegateSignature @ 14a1fc800

UFunction * __cdecl
Z_Construct_UDelegateFunction_ControlRig_ControlRigComponentDelegate__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_ControlRig_ControlRigComponentDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature @ 14a1fc860

UFunction * __cdecl
Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUSparseDelegateFunction
              (&ReturnFunction,
               &Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UPackage__Script_ControlRig @ 14a1fc920

UPackage * __cdecl Z_Construct_UPackage__Script_ControlRig(void)

{
  if (Z_Registration_Info_UPackage__Script_ControlRig.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_ControlRig.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_ControlRig.OuterSingleton;
}

// Z_Construct_UFunction_UControlRigShapeLibraryLink_SetShapeLibrary @ 14a1fc960

UFunction * __cdecl Z_Construct_UFunction_UControlRigShapeLibraryLink_SetShapeLibrary(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigShapeLibraryLink_SetShapeLibrary_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UControlRig_CreateTransformableControlHandle @ 14a1fc9d0

UFunction * __cdecl Z_Construct_UFunction_UControlRig_CreateTransformableControlHandle(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRig_CreateTransformableControlHandle_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UControlRigComponent_AddMappedSkeletalMesh @ 14a1fca60

UFunction * __cdecl Z_Construct_UFunction_UControlRigComponent_AddMappedSkeletalMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigComponent_AddMappedSkeletalMesh_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FControlRigIOSettings @ 14a1fcaa0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FControlRigIOSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FControlRigIOSettings.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FControlRigIOSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FControlRigIOSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FControlRigIOSettings.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FControlRigIOSettings.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewProp_bUpdatePose_SetBit @ 14a1fcb20

void __cdecl
Z_Construct_UScriptStruct_FControlRigIOSettings_Statics::NewProp_bUpdatePose_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bUpdateCurves_SetBit @ 14a1fcb30

void __cdecl
Z_Construct_UScriptStruct_FControlRigIOSettings_Statics::NewProp_bUpdateCurves_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewStructOps @ 14a1fcb40

void * __cdecl Z_Construct_UScriptStruct_FControlRigIOSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 2;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FControlRigIOSettings,&UE::CoreUObject::Private::Construct<FControlRigIOSettings>,&UE::CoreUObject::Private::ConstructForTests<FControlRigIOSettings>,&UE::CoreUObject::Private::Destruct<FControlRigIOSettings>,&UE::CoreUObject::Private::Copy<FControlRigIOSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UControlRig_CurrentControlSelection @ 14a1fcb80

UFunction * __cdecl Z_Construct_UFunction_UControlRig_CurrentControlSelection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRig_CurrentControlSelection_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_AControlRigControlActor @ 14a1fcbc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AControlRigControlActor(void)

{
  if (Z_Registration_Info_UClass_AControlRigControlActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AControlRigControlActor.OuterSingleton,
               &Z_Construct_UClass_AControlRigControlActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AControlRigControlActor.OuterSingleton;
}

// Z_Construct_UFunction_UModularRigController_GetSelectedModules @ 14a1fcc00

UFunction * __cdecl Z_Construct_UFunction_UModularRigController_GetSelectedModules(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularRigController_GetSelectedModules_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AControlRigControlActor_Clear @ 14a1fcc40

UFunction * __cdecl Z_Construct_UFunction_AControlRigControlActor_Clear(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AControlRigControlActor_Clear_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSetupUndo_SetBit @ 14a1fccc0

void __cdecl
Z_Construct_UFunction_UModularRigController_ImportModuleSettingsFromString_Statics::
NewProp_bSetupUndo_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a1fcd00

void __cdecl
Z_Construct_UFunction_UModularRigController_ImportModuleSettingsFromString_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x21) = 1;
  return;
}

// Z_Construct_UFunction_AControlRigControlActor_Refresh @ 14a1fcd10

UFunction * __cdecl Z_Construct_UFunction_AControlRigControlActor_Refresh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AControlRigControlActor_Refresh_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a1fcd90

void __cdecl
Z_Construct_UFunction_UControlRigComponent_CanExecute_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_AControlRigControlActor_ResetControlActor @ 14a1fcda0

UFunction * __cdecl Z_Construct_UFunction_AControlRigControlActor_ResetControlActor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AControlRigControlActor_ResetControlActor_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UControlRigComponent_CanExecute @ 14a1fce70

UFunction * __cdecl Z_Construct_UFunction_UControlRigComponent_CanExecute(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigComponent_CanExecute_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularRigController_ImportModuleSettingsFromString @ 14a1fceb0

UFunction * __cdecl Z_Construct_UFunction_UModularRigController_ImportModuleSettingsFromString(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularRigController_ImportModuleSettingsFromString_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UModularRig @ 14a1fcef0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UModularRig(void)

{
  if (Z_Registration_Info_UClass_UModularRig.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UModularRig.OuterSingleton,
               &Z_Construct_UClass_UModularRig_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UModularRig.OuterSingleton;
}

// Z_Construct_UScriptStruct_FModularRigModel @ 14a1fcf30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FModularRigModel(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FModularRigModel.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FModularRigModel.InnerSingleton,
               &Z_Construct_UScriptStruct_FModularRigModel_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FModularRigModel.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FModularRigModel.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FRigModuleExecutionElement @ 14a1fcfb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigModuleExecutionElement(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigModuleExecutionElement.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigModuleExecutionElement.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigModuleExecutionElement_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigModuleExecutionElement.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigModuleExecutionElement.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FRigModuleInstance @ 14a1fd030

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigModuleInstance(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigModuleInstance.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigModuleInstance.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigModuleInstance_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigModuleInstance.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigModuleInstance.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewProp_bRefreshOnTick_SetBit @ 14a1fd0b0

void __cdecl
Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_bRefreshOnTick_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2d0) = 1;
  return;
}

// Z_Construct_UFunction_UControlRigComponent_ClearMappedElements @ 14a1fd0c0

UFunction * __cdecl Z_Construct_UFunction_UControlRigComponent_ClearMappedElements(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigComponent_ClearMappedElements_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsSelectable_SetBit @ 14a1fd100

void __cdecl
Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_bIsSelectable_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2d1) = 1;
  return;
}

// NewProp_bCastShadows_SetBit @ 14a1fd110

void __cdecl
Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_bCastShadows_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2f0) = 1;
  return;
}

// NewStructOps @ 14a1fd120

void * __cdecl Z_Construct_UScriptStruct_FRigModuleInstance_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigModuleInstance,&UE::CoreUObject::Private::Construct<FRigModuleInstance>,&UE::CoreUObject::Private::ConstructForTests<FRigModuleInstance>,&UE::CoreUObject::Private::Destruct<FRigModuleInstance>,&UE::CoreUObject::Private::Copy<FRigModuleInstance>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bSetupUndo_SetBit @ 14a1fd160

void __cdecl
Z_Construct_UFunction_UModularRigController_MirrorModule_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a1fd170

void __cdecl
Z_Construct_UFunction_UControlRigComponent_DoesElementExist_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// Z_Construct_UFunction_UModularRigController_MirrorModule @ 14a1fd1c0

UFunction * __cdecl Z_Construct_UFunction_UModularRigController_MirrorModule(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularRigController_MirrorModule_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UControlRigComponent_DoesElementExist @ 14a1fd200

UFunction * __cdecl Z_Construct_UFunction_UControlRigComponent_DoesElementExist(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigComponent_DoesElementExist_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSetupUndo_SetBit @ 14a1fd240

void __cdecl
Z_Construct_UFunction_UModularRigController_RenameModule_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UControlRigComponent_GetAbsoluteTime @ 14a1fd250

UFunction * __cdecl Z_Construct_UFunction_UControlRigComponent_GetAbsoluteTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigComponent_GetAbsoluteTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14a1fd2b0

void * __thiscall
FEmptyRigDependenciesProvider::_scalar_deleting_destructor_
          (FEmptyRigDependenciesProvider *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// Z_Construct_UFunction_UModularRigController_RenameModule @ 14a1fd2e0

UFunction * __cdecl Z_Construct_UFunction_UModularRigController_RenameModule(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularRigController_RenameModule_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bExecuted_SetBit @ 14a1fd320

void __cdecl
Z_Construct_UScriptStruct_FRigModuleExecutionElement_Statics::NewProp_bExecuted_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewStructOps @ 14a1fd330

void * __cdecl Z_Construct_UScriptStruct_FRigModuleExecutionElement_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigModuleExecutionElement,&UE::CoreUObject::Private::Construct<FRigModuleExecutionElement>,&UE::CoreUObject::Private::ConstructForTests<FRigModuleExecutionElement>,&UE::CoreUObject::Private::Destruct<FRigModuleExecutionElement>,&UE::CoreUObject::Private::Copy<FRigModuleExecutionElement>,&UE::CoreUObject::Private::GetStructTypeHash<FRigModuleExecutionElement>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bSetupUndo_SetBit @ 14a1fd380

void __cdecl
Z_Construct_UFunction_UModularRigController_ReorderModule_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_UControlRigComponent_GetBoneTransform @ 14a1fd390

UFunction * __cdecl Z_Construct_UFunction_UControlRigComponent_GetBoneTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigComponent_GetBoneTransform_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a1fd3e0

void __cdecl
Z_Construct_UFunction_UModularRigController_ReorderModule_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a1fd460

void __cdecl
Z_Construct_UFunction_UControlRigComponent_GetControlBool_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UModularRigController_ReorderModule @ 14a1fd500

UFunction * __cdecl Z_Construct_UFunction_UModularRigController_ReorderModule(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularRigController_ReorderModule_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UControlRigComponent_GetControlBool @ 14a1fd540

UFunction * __cdecl Z_Construct_UFunction_UControlRigComponent_GetControlBool(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigComponent_GetControlBool_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSetupUndo_SetBit @ 14a1fd620

void __cdecl
Z_Construct_UFunction_UModularRigController_ReparentModule_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a1fd630

void __cdecl
Z_Construct_UFunction_UModularRigController_ReparentModule_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// NewStructOps @ 14a1fd640

void * __cdecl Z_Construct_UScriptStruct_FRigModuleExecutionQueue_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigModuleExecutionQueue,&UE::CoreUObject::Private::Construct<FRigModuleExecutionQueue>,&UE::CoreUObject::Private::ConstructForTests<FRigModuleExecutionQueue>,&UE::CoreUObject::Private::Destruct<FRigModuleExecutionQueue>,&UE::CoreUObject::Private::Copy<FRigModuleExecutionQueue>,&UE::CoreUObject::Private::GetStructTypeHash<FRigModuleExecutionQueue>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UControlRigComponent_GetControlFloat @ 14a1fd6c0

UFunction * __cdecl Z_Construct_UFunction_UControlRigComponent_GetControlFloat(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigComponent_GetControlFloat_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularRigController_ReparentModule @ 14a1fd700

UFunction * __cdecl Z_Construct_UFunction_UModularRigController_ReparentModule(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularRigController_ReparentModule_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bClearOverride_SetBit @ 14a1fd740

void __cdecl
Z_Construct_UFunction_UModularRigController_ResetConfigValueInModule_Statics::
NewProp_bClearOverride_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bSetupUndo_SetBit @ 14a1fd750

void __cdecl
Z_Construct_UFunction_UModularRigController_ResetConfigValueInModule_Statics::
NewProp_bSetupUndo_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  return;
}

// Z_Construct_UFunction_UControlRigComponent_GetControlInt @ 14a1fd760

UFunction * __cdecl Z_Construct_UFunction_UControlRigComponent_GetControlInt(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigComponent_GetControlInt_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a1fd7a0

void __cdecl
Z_Construct_UFunction_UModularRigController_ResetConfigValueInModule_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  return;
}

// Z_Construct_UFunction_UControlRig_FindControlRigs @ 14a1fd7b0

UFunction * __cdecl Z_Construct_UFunction_UControlRig_FindControlRigs(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularRigController_ResetConfigValueInModule @ 14a1fd7f0

UFunction * __cdecl Z_Construct_UFunction_UModularRigController_ResetConfigValueInModule(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularRigController_ResetConfigValueInModule_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UControlRigComponent_GetControlOffset @ 14a1fd830

UFunction * __cdecl Z_Construct_UFunction_UControlRigComponent_GetControlOffset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigComponent_GetControlOffset_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularRig_ExecuteEventOnAllModules @ 14a1fd870

UFunction * __cdecl Z_Construct_UFunction_UModularRig_ExecuteEventOnAllModules(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularRig_ExecuteEventOnAllModules_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_InSelected_SetBit @ 14a1fd8b0

void __cdecl
Z_Construct_UFunction_UModularRigController_SelectModule_Statics::NewProp_InSelected_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a1fd8c0

void __cdecl
Z_Construct_UFunction_UModularRigController_SelectModule_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a1fd9c0

void __cdecl
Z_Construct_UFunction_UModularRig_ExecuteEventOnModuleByNameForBP_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UControlRigComponent_GetControlPosition @ 14a1fd9d0

UFunction * __cdecl Z_Construct_UFunction_UControlRigComponent_GetControlPosition(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigComponent_GetControlPosition_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularRigController_SelectModule @ 14a1fda10

UFunction * __cdecl Z_Construct_UFunction_UModularRigController_SelectModule(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularRigController_SelectModule_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UControlRig_GetHierarchy @ 14a1fdce0

UFunction * __cdecl Z_Construct_UFunction_UControlRig_GetHierarchy(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UControlRig_GetHierarchy_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularRig_ExecuteEventOnModuleByNameForBP @ 14a1fdd20

UFunction * __cdecl Z_Construct_UFunction_UModularRig_ExecuteEventOnModuleByNameForBP(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularRig_ExecuteEventOnModuleByNameForBP_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSetupUndo_SetBit @ 14a1fdd60

void __cdecl
Z_Construct_UFunction_UModularRigController_SetConfigValueInModule_Statics::
NewProp_bSetupUndo_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a1fdd70

void __cdecl
Z_Construct_UFunction_UModularRigController_SetConfigValueInModule_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x21) = 1;
  return;
}

// Z_Construct_UFunction_UControlRigComponent_GetControlRig @ 14a1fdd80

UFunction * __cdecl Z_Construct_UFunction_UControlRigComponent_GetControlRig(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigComponent_GetControlRig_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UControlRig_GetHostingActor @ 14a1fddc0

UFunction * __cdecl Z_Construct_UFunction_UControlRig_GetHostingActor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRig_GetHostingActor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a1fde00

void __cdecl
Z_Construct_UFunction_UModularRig_ExecuteEventOnModuleForBP_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_UModularRigController_SetConfigValueInModule @ 14a1fde10

UFunction * __cdecl Z_Construct_UFunction_UModularRigController_SetConfigValueInModule(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularRigController_SetConfigValueInModule_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularRig_ExecuteEventOnModuleForBP @ 14a1fde50

UFunction * __cdecl Z_Construct_UFunction_UModularRig_ExecuteEventOnModuleForBP(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularRig_ExecuteEventOnModuleForBP_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UControlRig_GetInteractionRig @ 14a1fde90

UFunction * __cdecl Z_Construct_UFunction_UControlRig_GetInteractionRig(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRig_GetInteractionRig_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UControlRigComponent_GetControlRotator @ 14a1fded0

UFunction * __cdecl Z_Construct_UFunction_UControlRigComponent_GetControlRotator(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigComponent_GetControlRotator_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a1fdf20

void __cdecl
Z_Construct_UFunction_UModularRigController_SetModuleSelection_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UControlRig_GetInteractionRigClass @ 14a1fe000

UFunction * __cdecl Z_Construct_UFunction_UControlRig_GetInteractionRigClass(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRig_GetInteractionRigClass_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularRig_GetEventsForAllModules @ 14a1fe0b0

UFunction * __cdecl Z_Construct_UFunction_UModularRig_GetEventsForAllModules(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularRig_GetEventsForAllModules_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularRigController_SetModuleSelection @ 14a1fe1e0

UFunction * __cdecl Z_Construct_UFunction_UModularRigController_SetModuleSelection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularRigController_SetModuleSelection_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UControlRigComponent_GetControlScale @ 14a1fe270

UFunction * __cdecl Z_Construct_UFunction_UControlRigComponent_GetControlScale(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigComponent_GetControlScale_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a1fe2b0

void __cdecl
Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_bSetupUndo_SetBit @ 14a1fe5f0

void __cdecl
Z_Construct_UFunction_UModularRigController_SwapModuleClass_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a1fe600

void __cdecl
Z_Construct_UFunction_UModularRigController_SwapModuleClass_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// Z_Construct_UFunction_UControlRig_IsControlSelected @ 14a1fe640

UFunction * __cdecl Z_Construct_UFunction_UControlRig_IsControlSelected(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularRig_GetEventsForModule @ 14a1fe680

UFunction * __cdecl Z_Construct_UFunction_UModularRig_GetEventsForModule(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularRig_GetEventsForModule_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UControlRigComponent_GetControlTransform @ 14a1fe6c0

UFunction * __cdecl Z_Construct_UFunction_UControlRigComponent_GetControlTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigComponent_GetControlTransform_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularRigController_SwapModuleClass @ 14a1fe700

UFunction * __cdecl Z_Construct_UFunction_UModularRigController_SwapModuleClass(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularRigController_SwapModuleClass_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UControlRig_RequestConstruction @ 14a1fe740

UFunction * __cdecl Z_Construct_UFunction_UControlRig_RequestConstruction(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRig_RequestConstruction_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSelect_SetBit @ 14a1fe7d0

void __cdecl
Z_Construct_UFunction_UControlRig_SelectControl_Statics::NewProp_bSelect_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_bSetupUndo_SetBit @ 14a1fe7e0

void __cdecl
Z_Construct_UFunction_UControlRig_SelectControl_Statics::NewProp_bSetupUndo_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// NewProp_bSetupUndo_SetBit @ 14a1fe7f0

void __cdecl
Z_Construct_UFunction_UModularRigController_SwapModulesOfClass_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UModularRig_GetEventsForModuleByName @ 14a1fe800

UFunction * __cdecl Z_Construct_UFunction_UModularRig_GetEventsForModuleByName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularRig_GetEventsForModuleByName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a1fe840

void __cdecl
Z_Construct_UFunction_UModularRigController_SwapModulesOfClass_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// Z_Construct_UFunction_UControlRigComponent_GetControlVector2D @ 14a1fe8f0

UFunction * __cdecl Z_Construct_UFunction_UControlRigComponent_GetControlVector2D(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigComponent_GetControlVector2D_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UControlRig_SelectControl @ 14a1fe930

UFunction * __cdecl Z_Construct_UFunction_UControlRig_SelectControl(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UControlRig_SelectControl_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularRigController_SwapModulesOfClass @ 14a1fe970

UFunction * __cdecl Z_Construct_UFunction_UModularRigController_SwapModulesOfClass(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularRigController_SwapModulesOfClass_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularRig_GetModuleNames @ 14a1fe9b0

UFunction * __cdecl Z_Construct_UFunction_UModularRig_GetModuleNames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UModularRig_GetModuleNames_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FAnimNode_ControlRigBase @ 14a1feab0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNode_ControlRigBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_ControlRigBase.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNode_ControlRigBase.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNode_ControlRigBase.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNode_ControlRigBase.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewProp_bSetupUndo_SetBit @ 14a1feb30

void __cdecl
Z_Construct_UFunction_UModularRigController_UnBindModuleVariable_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a1feb40

void __cdecl
Z_Construct_UFunction_UModularRigController_UnBindModuleVariable_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// Z_Construct_UFunction_UControlRig_SetInteractionRig @ 14a1feb50

UFunction * __cdecl Z_Construct_UFunction_UControlRig_SetInteractionRig(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRig_SetInteractionRig_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UControlRigComponent_GetElementNames @ 14a1feb90

UFunction * __cdecl Z_Construct_UFunction_UControlRigComponent_GetElementNames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigComponent_GetElementNames_Statics::FuncParams);
  }
  return ReturnFunction;
}

// ETransformSpaceMode_StaticEnum @ 14a1febd0

UEnum * __cdecl ETransformSpaceMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETransformSpaceMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_ETransformSpaceMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_ETransformSpaceMode,(UObject *)pUVar1,
                       L"ETransformSpaceMode");
  }
  return Z_Registration_Info_UEnum_ETransformSpaceMode.OuterSingleton;
}

// NewProp_bAlphaBoolEnabled_SetBit @ 14a1fec50

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_bAlphaBoolEnabled_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x295) = *(byte *)((longlong)param_1 + 0x295) | 1;
  return;
}

// NewProp_bSetRefPoseFromSkeleton_SetBit @ 14a1fec60

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_bSetRefPoseFromSkeleton_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x295) = *(byte *)((longlong)param_1 + 0x295) | 2;
  return;
}

// Z_Construct_UFunction_UModularRig_GetModulePaths @ 14a1fec90

UFunction * __cdecl Z_Construct_UFunction_UModularRig_GetModulePaths(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UModularRig_GetModulePaths_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularRigController_UnBindModuleVariable @ 14a1fece0

UFunction * __cdecl Z_Construct_UFunction_UModularRigController_UnBindModuleVariable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularRigController_UnBindModuleVariable_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewStructOps @ 14a1fed20

void * __cdecl Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x4b8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNode_ControlRig,&UE::CoreUObject::Private::Construct<FAnimNode_ControlRig>,&UE::CoreUObject::Private::ConstructForTests<FAnimNode_ControlRig>,&UE::CoreUObject::Private::Destruct<FAnimNode_ControlRig>,&UE::CoreUObject::Private::PostSerialize<FAnimNode_ControlRig>,&UE::CoreUObject::Private::Copy<FAnimNode_ControlRig>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UControlRig_SetInteractionRigClass @ 14a1fed60

UFunction * __cdecl Z_Construct_UFunction_UControlRig_SetInteractionRigClass(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRig_SetInteractionRigClass_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a1feda0

void * __cdecl
Z_Construct_UScriptStruct_FAnimNode_ControlRig_ExternalSource_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x230;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNode_ControlRig_ExternalSource,&UE::CoreUObject::Private::Construct<FAnimNode_ControlRig_ExternalSource>,&UE::CoreUObject::Private::ConstructForTests<FAnimNode_ControlRig_ExternalSource>,&UE::CoreUObject::Private::Destruct<FAnimNode_ControlRig_ExternalSource>,&UE::CoreUObject::Private::Copy<FAnimNode_ControlRig_ExternalSource>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// ETransformGetterType_StaticEnum @ 14a1fede0

UEnum * __cdecl ETransformGetterType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETransformGetterType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_ETransformGetterType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_ETransformGetterType,(UObject *)pUVar1,
                       L"ETransformGetterType");
  }
  return Z_Registration_Info_UEnum_ETransformGetterType.OuterSingleton;
}

// Z_Construct_UClass_UControlRigValidationPass_NoRegister @ 14a1fee20

UClass * __cdecl Z_Construct_UClass_UControlRigValidationPass_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRigValidationPass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigValidationPass",
               &Z_Registration_Info_UClass_UControlRigValidationPass.InnerSingleton,
               UControlRigValidationPass::StaticRegisterNativesUControlRigValidationPass,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UControlRigValidationPass>,
               InternalVTableHelperCtorCaller<UControlRigValidationPass>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRigValidationPass.InnerSingleton;
}

// Z_Construct_UFunction_UControlRigComponent_GetInitialBoneTransform @ 14a1feed0

UFunction * __cdecl Z_Construct_UFunction_UControlRigComponent_GetInitialBoneTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigComponent_GetInitialBoneTransform_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a1fef80

void __cdecl
Z_Construct_UFunction_UControlRig_SupportsBackwardsSolve_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UModularRig_GetModuleRig @ 14a1fef90

UFunction * __cdecl Z_Construct_UFunction_UModularRig_GetModuleRig(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UModularRig_GetModuleRig_Statics::FuncParams);
  }
  return ReturnFunction;
}

// ERigExecutionType_StaticEnum @ 14a1fefd0

UEnum * __cdecl ERigExecutionType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigExecutionType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_ERigExecutionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigExecutionType,(UObject *)pUVar1,
                       L"ERigExecutionType");
  }
  return Z_Registration_Info_UEnum_ERigExecutionType.OuterSingleton;
}

// Z_Construct_UFunction_UControlRig_SupportsBackwardsSolve @ 14a1ff010

UFunction * __cdecl Z_Construct_UFunction_UControlRig_SupportsBackwardsSolve(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRig_SupportsBackwardsSolve_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UControlRigComponent_GetInitialSpaceTransform @ 14a1ff050

UFunction * __cdecl Z_Construct_UFunction_UControlRigComponent_GetInitialSpaceTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigComponent_GetInitialSpaceTransform_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularRig_GetModuleRigByName @ 14a1ff090

UFunction * __cdecl Z_Construct_UFunction_UModularRig_GetModuleRigByName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularRig_GetModuleRigByName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsAdditive_SetBit @ 14a1ff0d0

void __cdecl Z_Construct_UClass_UControlRig_Statics::NewProp_bIsAdditive_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x9c8) = 1;
  return;
}

// Z_Construct_UClass_UControlRigBlueprintGeneratedClass @ 14a1ff0e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UControlRigBlueprintGeneratedClass(void)

{
  if (Z_Registration_Info_UClass_UControlRigBlueprintGeneratedClass.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UControlRigBlueprintGeneratedClass.OuterSingleton,
               &Z_Construct_UClass_UControlRigBlueprintGeneratedClass_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UControlRigBlueprintGeneratedClass.OuterSingleton;
}

// Z_Construct_UFunction_UControlRigComponent_GetSpaceTransform @ 14a1ff160

UFunction * __cdecl Z_Construct_UFunction_UControlRigComponent_GetSpaceTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigComponent_GetSpaceTransform_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UModularRig_GetParentModuleNameForBP @ 14a1ff1a0

UFunction * __cdecl Z_Construct_UFunction_UModularRig_GetParentModuleNameForBP(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularRig_GetParentModuleNameForBP_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bExposesAnimatableControls_SetBit @ 14a1ff200

void __cdecl
Z_Construct_UClass_UControlRigBlueprintGeneratedClass_Statics::
NewProp_bExposesAnimatableControls_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1000) = 1;
  return;
}

// NewProp_bAllowMultipleInstances_SetBit @ 14a1ff220

void __cdecl
Z_Construct_UClass_UControlRigBlueprintGeneratedClass_Statics::
NewProp_bAllowMultipleInstances_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x3e9) = 1;
  return;
}

// Z_Construct_UFunction_UControlRigComponent_Initialize @ 14a1ff290

UFunction * __cdecl Z_Construct_UFunction_UControlRigComponent_Initialize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigComponent_Initialize_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSupportsInversion_SetBit @ 14a1ff2d0

void __cdecl
Z_Construct_UClass_UControlRigBlueprintGeneratedClass_Statics::NewProp_bSupportsInversion_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x498) = 1;
  return;
}

// NewProp_bSupportsControls_SetBit @ 14a1ff3a0

void __cdecl
Z_Construct_UClass_UControlRigBlueprintGeneratedClass_Statics::NewProp_bSupportsControls_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x499) = 1;
  return;
}

// Z_Construct_UFunction_UModularRig_GetParentPathForBP @ 14a1ff4e0

UFunction * __cdecl Z_Construct_UFunction_UModularRig_GetParentPathForBP(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularRig_GetParentPathForBP_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UControlRigComponent_OnPostConstruction @ 14a1ff550

UFunction * __cdecl Z_Construct_UFunction_UControlRigComponent_OnPostConstruction(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigComponent_OnPostConstruction_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14a1ff5d0

void * __thiscall
FControlRigAnimInstanceProxy::_scalar_deleting_destructor_
          (FControlRigAnimInstanceProxy *this,uint param_1)

{
  ~FControlRigAnimInstanceProxy(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x8f0);
  }
  return this;
}

// Z_Construct_UFunction_UControlRigComponent_OnPostForwardsSolve @ 14a1ff710

UFunction * __cdecl Z_Construct_UFunction_UControlRigComponent_OnPostForwardsSolve(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigComponent_OnPostForwardsSolve_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UControlRigReplay_NoRegister @ 14a1ff8d0

UClass * __cdecl Z_Construct_UClass_UControlRigReplay_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRigReplay.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigReplay",
               &Z_Registration_Info_UClass_UControlRigReplay.InnerSingleton,
               UControlRigReplay::StaticRegisterNativesUControlRigReplay,1000,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UControlRigReplay>,
               InternalVTableHelperCtorCaller<UControlRigReplay>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRigReplay.InnerSingleton;
}

// Z_Construct_UFunction_UControlRigComponent_OnPostInitialize @ 14a1ff980

UFunction * __cdecl Z_Construct_UFunction_UControlRigComponent_OnPostInitialize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigComponent_OnPostInitialize_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UControlRigComponent_NoRegister @ 14a1ffa00

UClass * __cdecl Z_Construct_UClass_UControlRigComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRigComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigComponent",
               &Z_Registration_Info_UClass_UControlRigComponent.InnerSingleton,
               UControlRigComponent::StaticRegisterNativesUControlRigComponent,0x720,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UControlRigComponent>,
               InternalVTableHelperCtorCaller<UControlRigComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRigComponent.InnerSingleton;
}

// Z_Construct_UClass_UAnimNodeControlRigLibrary @ 14a1ffb80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimNodeControlRigLibrary(void)

{
  if (Z_Registration_Info_UClass_UAnimNodeControlRigLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimNodeControlRigLibrary.OuterSingleton,
               &Z_Construct_UClass_UAnimNodeControlRigLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimNodeControlRigLibrary.OuterSingleton;
}

// Z_Construct_UScriptStruct_FControlRigReference @ 14a1ffbc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FControlRigReference(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FControlRigReference.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FControlRigReference.InnerSingleton,
               &Z_Construct_UScriptStruct_FControlRigReference_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FControlRigReference.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FControlRigReference.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 14a1ffc80

void * __cdecl Z_Construct_UScriptStruct_FControlRigReference_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FControlRigReference,&UE::CoreUObject::Private::Construct<FControlRigReference>,&UE::CoreUObject::Private::ConstructForTests<FControlRigReference>,&UE::CoreUObject::Private::Destruct<FControlRigReference>,&UE::CoreUObject::Private::Copy<FControlRigReference>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UControlRigComponent_OnPreConstruction @ 14a1ffcd0

UFunction * __cdecl Z_Construct_UFunction_UControlRigComponent_OnPreConstruction(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigComponent_OnPreConstruction_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_AControlRigShapeActor @ 14a1ffd90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AControlRigShapeActor(void)

{
  if (Z_Registration_Info_UClass_AControlRigShapeActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AControlRigShapeActor.OuterSingleton,
               &Z_Construct_UClass_AControlRigShapeActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AControlRigShapeActor.OuterSingleton;
}

// NewStructOps @ 14a1ffe10

void * __cdecl Z_Construct_UScriptStruct_FControlShapeActorCreationParam_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1c0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FControlShapeActorCreationParam,&UE::CoreUObject::Private::Construct<FControlShapeActorCreationParam>,&UE::CoreUObject::Private::ConstructForTests<FControlShapeActorCreationParam>,&UE::CoreUObject::Private::Destruct<FControlShapeActorCreationParam>,&UE::CoreUObject::Private::Copy<FControlShapeActorCreationParam>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UControlRigComponent_OnPreForwardsSolve @ 14a2001d0

UFunction * __cdecl Z_Construct_UFunction_UControlRigComponent_OnPreForwardsSolve(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigComponent_OnPreForwardsSolve_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UControlRigComponent_OnPreInitialize @ 14a2002f0

UFunction * __cdecl Z_Construct_UFunction_UControlRigComponent_OnPreInitialize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigComponent_OnPreInitialize_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UControlRigComponent_SetBoneInitialTransformsFromSkeletalMesh @ 14a200640

UFunction * __cdecl
Z_Construct_UFunction_UControlRigComponent_SetBoneInitialTransformsFromSkeletalMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigComponent_SetBoneInitialTransformsFromSkeletalMesh_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AControlRigShapeActor_GetGlobalTransform @ 14a200700

UFunction * __cdecl Z_Construct_UFunction_AControlRigShapeActor_GetGlobalTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AControlRigShapeActor_GetGlobalTransform_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimNodeControlRigLibrary_ConvertToControlRig @ 14a2008c0

UFunction * __cdecl Z_Construct_UFunction_UAnimNodeControlRigLibrary_ConvertToControlRig(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimNodeControlRigLibrary_ConvertToControlRig_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bPropagateToChildren_SetBit @ 14a200a20

void __cdecl
Z_Construct_UFunction_UControlRigComponent_SetBoneTransform_Statics::
NewProp_bPropagateToChildren_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x78) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a200a30

void __cdecl
Z_Construct_UFunction_AControlRigShapeActor_IsEnabled_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_Result_SetBit @ 14a200a70

void __cdecl
Z_Construct_UFunction_UAnimNodeControlRigLibrary_ConvertToControlRigPure_Statics::
NewProp_Result_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_AControlRigShapeActor_IsEnabled @ 14a200a80

UFunction * __cdecl Z_Construct_UFunction_AControlRigShapeActor_IsEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AControlRigShapeActor_IsEnabled_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UControlRigComponent_SetBoneTransform @ 14a200ac0

UFunction * __cdecl Z_Construct_UFunction_UControlRigComponent_SetBoneTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigComponent_SetBoneTransform_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a200b00

void __cdecl
Z_Construct_UFunction_AControlRigShapeActor_IsHovered_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UAnimNodeControlRigLibrary_ConvertToControlRigPure @ 14a200b10

UFunction * __cdecl Z_Construct_UFunction_UAnimNodeControlRigLibrary_ConvertToControlRigPure(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimNodeControlRigLibrary_ConvertToControlRigPure_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_Value_SetBit @ 14a200b50

void __cdecl
Z_Construct_UFunction_UControlRigComponent_SetControlBool_Statics::NewProp_Value_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_AControlRigShapeActor_IsHovered @ 14a200b60

UFunction * __cdecl Z_Construct_UFunction_AControlRigShapeActor_IsHovered(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AControlRigShapeActor_IsHovered_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a200ba0

void __cdecl
Z_Construct_UFunction_AControlRigShapeActor_IsSelectedInEditor_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UControlRigComponent_SetControlBool @ 14a200bb0

UFunction * __cdecl Z_Construct_UFunction_UControlRigComponent_SetControlBool(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigComponent_SetControlBool_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AControlRigShapeActor_IsSelectedInEditor @ 14a200cb0

UFunction * __cdecl Z_Construct_UFunction_AControlRigShapeActor_IsSelectedInEditor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AControlRigShapeActor_IsSelectedInEditor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimNodeControlRigLibrary_SetControlRigClass @ 14a200cf0

UFunction * __cdecl Z_Construct_UFunction_UAnimNodeControlRigLibrary_SetControlRigClass(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimNodeControlRigLibrary_SetControlRigClass_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsEnabled_SetBit @ 14a200d30

void __cdecl
Z_Construct_UFunction_AControlRigShapeActor_OnEnabledChanged_Statics::NewProp_bIsEnabled_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UControlRigComponent_SetControlFloat @ 14a200d40

UFunction * __cdecl Z_Construct_UFunction_UControlRigComponent_SetControlFloat(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigComponent_SetControlFloat_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AControlRigShapeActor_OnEnabledChanged @ 14a200d80

UFunction * __cdecl Z_Construct_UFunction_AControlRigShapeActor_OnEnabledChanged(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AControlRigShapeActor_OnEnabledChanged_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UControlRigComponent_SetControlInt @ 14a200dc0

UFunction * __cdecl Z_Construct_UFunction_UControlRigComponent_SetControlInt(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigComponent_SetControlInt_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsSelected_SetBit @ 14a200e00

void __cdecl
Z_Construct_UFunction_AControlRigShapeActor_OnHoveredChanged_Statics::NewProp_bIsSelected_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_AControlRigShapeActor_OnHoveredChanged @ 14a200e10

UFunction * __cdecl Z_Construct_UFunction_AControlRigShapeActor_OnHoveredChanged(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AControlRigShapeActor_OnHoveredChanged_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsManipulating_SetBit @ 14a200e50

void __cdecl
Z_Construct_UFunction_AControlRigShapeActor_OnManipulatingChanged_Statics::
NewProp_bIsManipulating_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UControlRigComponent_SetControlOffset @ 14a200e60

UFunction * __cdecl Z_Construct_UFunction_UControlRigComponent_SetControlOffset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigComponent_SetControlOffset_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AControlRigShapeActor_OnManipulatingChanged @ 14a200ea0

UFunction * __cdecl Z_Construct_UFunction_AControlRigShapeActor_OnManipulatingChanged(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AControlRigShapeActor_OnManipulatingChanged_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsSelected_SetBit @ 14a200ee0

void __cdecl
Z_Construct_UFunction_AControlRigShapeActor_OnSelectionChanged_Statics::NewProp_bIsSelected_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UControlRigComponent_SetControlPosition @ 14a200ef0

UFunction * __cdecl Z_Construct_UFunction_UControlRigComponent_SetControlPosition(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigComponent_SetControlPosition_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AControlRigShapeActor_OnSelectionChanged @ 14a200f30

UFunction * __cdecl Z_Construct_UFunction_AControlRigShapeActor_OnSelectionChanged(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AControlRigShapeActor_OnSelectionChanged_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UControlRigComponent_SetControlRigClass @ 14a201030

UFunction * __cdecl Z_Construct_UFunction_UControlRigComponent_SetControlRigClass(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigComponent_SetControlRigClass_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AControlRigShapeActor_OnTransformChanged @ 14a201070

UFunction * __cdecl Z_Construct_UFunction_AControlRigShapeActor_OnTransformChanged(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AControlRigShapeActor_OnTransformChanged_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInEnabled_SetBit @ 14a201150

void __cdecl
Z_Construct_UFunction_AControlRigShapeActor_SetEnabled_Statics::NewProp_bInEnabled_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UControlRigComponent_SetControlRotator @ 14a201160

UFunction * __cdecl Z_Construct_UFunction_UControlRigComponent_SetControlRotator(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigComponent_SetControlRotator_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AControlRigShapeActor_SetEnabled @ 14a2011a0

UFunction * __cdecl Z_Construct_UFunction_AControlRigShapeActor_SetEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AControlRigShapeActor_SetEnabled_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AControlRigShapeActor_SetGlobalTransform @ 14a201290

UFunction * __cdecl Z_Construct_UFunction_AControlRigShapeActor_SetGlobalTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AControlRigShapeActor_SetGlobalTransform_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UControlRigComponent_SetControlScale @ 14a2012d0

UFunction * __cdecl Z_Construct_UFunction_UControlRigComponent_SetControlScale(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigComponent_SetControlScale_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInHovered_SetBit @ 14a201310

void __cdecl
Z_Construct_UFunction_AControlRigShapeActor_SetHovered_Statics::NewProp_bInHovered_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_AControlRigShapeActor_SetHovered @ 14a201320

UFunction * __cdecl Z_Construct_UFunction_AControlRigShapeActor_SetHovered(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AControlRigShapeActor_SetHovered_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UControlRigValidationPass @ 14a201360

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UControlRigValidationPass(void)

{
  if (Z_Registration_Info_UClass_UControlRigValidationPass.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UControlRigValidationPass.OuterSingleton,
               &Z_Construct_UClass_UControlRigValidationPass_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UControlRigValidationPass.OuterSingleton;
}

// Z_Construct_UClass_UControlRigValidator @ 14a2013a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UControlRigValidator(void)

{
  if (Z_Registration_Info_UClass_UControlRigValidator.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UControlRigValidator.OuterSingleton,
               &Z_Construct_UClass_UControlRigValidator_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UControlRigValidator.OuterSingleton;
}

// NewStructOps @ 14a2013e0

void * __cdecl Z_Construct_UScriptStruct_FControlRigValidationContext_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FControlRigValidationContext,&UE::CoreUObject::Private::Construct<FControlRigValidationContext>,&UE::CoreUObject::Private::ConstructForTests<FControlRigValidationContext>,&UE::CoreUObject::Private::Destruct<FControlRigValidationContext>,&UE::CoreUObject::Private::Copy<FControlRigValidationContext>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UControlRigComponent_SetControlTransform @ 14a201420

UFunction * __cdecl Z_Construct_UFunction_UControlRigComponent_SetControlTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigComponent_SetControlTransform_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInSelectable_SetBit @ 14a201460

void __cdecl
Z_Construct_UFunction_AControlRigShapeActor_SetSelectable_Statics::NewProp_bInSelectable_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_AControlRigShapeActor_SetSelectable @ 14a201470

UFunction * __cdecl Z_Construct_UFunction_AControlRigShapeActor_SetSelectable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AControlRigShapeActor_SetSelectable_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInSelected_SetBit @ 14a2014b0

void __cdecl
Z_Construct_UFunction_AControlRigShapeActor_SetSelected_Statics::NewProp_bInSelected_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UControlRigComponent_SetControlVector2D @ 14a2014c0

UFunction * __cdecl Z_Construct_UFunction_UControlRigComponent_SetControlVector2D(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigComponent_SetControlVector2D_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AControlRigShapeActor_SetSelected @ 14a201500

UFunction * __cdecl Z_Construct_UFunction_AControlRigShapeActor_SetSelected(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AControlRigShapeActor_SetSelected_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bPropagateToChildren_SetBit @ 14a201540

void __cdecl
Z_Construct_UFunction_UControlRigComponent_SetInitialBoneTransform_Statics::
NewProp_bPropagateToChildren_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x71) = 1;
  return;
}

// NewProp_bSelected_SetBit @ 14a201570

void __cdecl
Z_Construct_UClass_AControlRigShapeActor_Statics::NewProp_bSelected_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x390) = *(byte *)((longlong)param_1 + 0x390) | 1;
  return;
}

// Z_Construct_UFunction_UControlRigComponent_SetInitialBoneTransform @ 14a201580

UFunction * __cdecl Z_Construct_UFunction_UControlRigComponent_SetInitialBoneTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigComponent_SetInitialBoneTransform_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bHovered_SetBit @ 14a2015c0

void __cdecl
Z_Construct_UClass_AControlRigShapeActor_Statics::NewProp_bHovered_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x390) = *(byte *)((longlong)param_1 + 0x390) | 2;
  return;
}

// Z_Construct_UFunction_UControlRigComponent_SetInitialSpaceTransform @ 14a2018c0

UFunction * __cdecl Z_Construct_UFunction_UControlRigComponent_SetInitialSpaceTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigComponent_SetInitialSpaceTransform_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14a201e70

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UFunction_UControlRigComponent_SetMappedElements @ 14a202000

UFunction * __cdecl Z_Construct_UFunction_UControlRigComponent_SetMappedElements(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigComponent_SetMappedElements_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UControlRigComponent_SetObjectBinding @ 14a202040

UFunction * __cdecl Z_Construct_UFunction_UControlRigComponent_SetObjectBinding(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigComponent_SetObjectBinding_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UControlRigComponent_Update @ 14a202080

UFunction * __cdecl Z_Construct_UFunction_UControlRigComponent_Update(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigComponent_Update_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnableLazyEvaluation_SetBit @ 14a2020c0

void __cdecl
Z_Construct_UClass_UControlRigComponent_Statics::NewProp_bEnableLazyEvaluation_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x600) = 1;
  return;
}

// NewProp_bResetTransformBeforeTick_SetBit @ 14a2020d0

void __cdecl
Z_Construct_UClass_UControlRigComponent_Statics::NewProp_bResetTransformBeforeTick_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x610) = 1;
  return;
}

// NewProp_bResetInitialsBeforeConstruction_SetBit @ 14a2020e0

void __cdecl
Z_Construct_UClass_UControlRigComponent_Statics::NewProp_bResetInitialsBeforeConstruction_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x611) = 1;
  return;
}

// NewProp_bUpdateRigOnTick_SetBit @ 14a2020f0

void __cdecl
Z_Construct_UClass_UControlRigComponent_Statics::NewProp_bUpdateRigOnTick_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x612) = 1;
  return;
}

// NewProp_bUpdateInEditor_SetBit @ 14a202100

void __cdecl
Z_Construct_UClass_UControlRigComponent_Statics::NewProp_bUpdateInEditor_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x613) = 1;
  return;
}

// NewProp_bDrawBones_SetBit @ 14a202110

void __cdecl
Z_Construct_UClass_UControlRigComponent_Statics::NewProp_bDrawBones_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x614) = 1;
  return;
}

// NewProp_bShowDebugDrawing_SetBit @ 14a202120

void __cdecl
Z_Construct_UClass_UControlRigComponent_Statics::NewProp_bShowDebugDrawing_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x615) = 1;
  return;
}

// `scalar_deleting_destructor' @ 14a2023f0

void * __thiscall FCRSimContainer::_scalar_deleting_destructor_(FCRSimContainer *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FCRSimContainer__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// Z_Construct_UClass_UControlRigShapeLibrary @ 14a202430

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UControlRigShapeLibrary(void)

{
  if (Z_Registration_Info_UClass_UControlRigShapeLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UControlRigShapeLibrary.OuterSingleton,
               &Z_Construct_UClass_UControlRigShapeLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UControlRigShapeLibrary.OuterSingleton;
}

// Z_Construct_UScriptStruct_FControlRigShapeDefinition @ 14a202470

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FControlRigShapeDefinition(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FControlRigShapeDefinition.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FControlRigShapeDefinition.InnerSingleton,
               &Z_Construct_UScriptStruct_FControlRigShapeDefinition_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FControlRigShapeDefinition.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FControlRigShapeDefinition.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FCRSimContainer @ 14a2024f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCRSimContainer(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCRSimContainer.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCRSimContainer.InnerSingleton,
               &Z_Construct_UScriptStruct_FCRSimContainer_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCRSimContainer.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCRSimContainer.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 14a202570

void * __cdecl Z_Construct_UScriptStruct_FControlRigShapeDefinition_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FControlRigShapeDefinition,&UE::CoreUObject::Private::Construct<FControlRigShapeDefinition>,&UE::CoreUObject::Private::ConstructForTests<FControlRigShapeDefinition>,&UE::CoreUObject::Private::Destruct<FControlRigShapeDefinition>,&UE::CoreUObject::Private::Copy<FControlRigShapeDefinition>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a2025b0

void * __cdecl Z_Construct_UScriptStruct_FCRSimContainer_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCRSimContainer,&UE::CoreUObject::Private::Construct<FCRSimContainer>,&UE::CoreUObject::Private::ConstructForTests<FCRSimContainer>,&UE::CoreUObject::Private::Destruct<FCRSimContainer>,&UE::CoreUObject::Private::Copy<FCRSimContainer>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FCRSimLinearSpring @ 14a202630

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCRSimLinearSpring(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCRSimLinearSpring.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCRSimLinearSpring.InnerSingleton,
               &Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCRSimLinearSpring.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCRSimLinearSpring.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UClass_UTransformableControlHandle @ 14a2026b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTransformableControlHandle(void)

{
  if (Z_Registration_Info_UClass_UTransformableControlHandle.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTransformableControlHandle.OuterSingleton,
               &Z_Construct_UClass_UTransformableControlHandle_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTransformableControlHandle.OuterSingleton;
}

// NewStructOps @ 14a2026f0

void * __cdecl Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCRSimLinearSpring,&UE::CoreUObject::Private::Construct<FCRSimLinearSpring>,&UE::CoreUObject::Private::ConstructForTests<FCRSimLinearSpring>,&UE::CoreUObject::Private::Destruct<FCRSimLinearSpring>,&UE::CoreUObject::Private::Copy<FCRSimLinearSpring>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14a202980

void * __thiscall
IControlRigModule::_scalar_deleting_destructor_(IControlRigModule *this,uint param_1)

{
  *this = (IControlRigModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UEnum_ControlRig_ECRSimConstraintType @ 14a202ba0

UEnum * __cdecl Z_Construct_UEnum_ControlRig_ECRSimConstraintType(void)

{
  if (Z_Registration_Info_UEnum_ECRSimConstraintType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ECRSimConstraintType.InnerSingleton,
               &Z_Construct_UEnum_ControlRig_ECRSimConstraintType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ECRSimConstraintType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FCRSimPointConstraint @ 14a202be0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCRSimPointConstraint(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCRSimPointConstraint.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCRSimPointConstraint.InnerSingleton,
               &Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCRSimPointConstraint.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FCRSimPointConstraint.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// `scalar_deleting_destructor' @ 14a202c60

void * __thiscall
FControlRigModule::_scalar_deleting_destructor_(FControlRigModule *this,uint param_1)

{
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// ECRSimConstraintType_StaticEnum @ 14a202ca0

UEnum * __cdecl ECRSimConstraintType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECRSimConstraintType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_ECRSimConstraintType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_ECRSimConstraintType,(UObject *)pUVar1,
                       L"ECRSimConstraintType");
  }
  return Z_Registration_Info_UEnum_ECRSimConstraintType.OuterSingleton;
}

// NewStructOps @ 14a202ce0

void * __cdecl Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCRSimPointConstraint,&UE::CoreUObject::Private::Construct<FCRSimPointConstraint>,&UE::CoreUObject::Private::ConstructForTests<FCRSimPointConstraint>,&UE::CoreUObject::Private::Destruct<FCRSimPointConstraint>,&UE::CoreUObject::Private::Copy<FCRSimPointConstraint>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UControlRigReplay @ 14a202d20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UControlRigReplay(void)

{
  if (Z_Registration_Info_UClass_UControlRigReplay.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UControlRigReplay.OuterSingleton,
               &Z_Construct_UClass_UControlRigReplay_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UControlRigReplay.OuterSingleton;
}

// Z_Construct_UEnum_ControlRig_EControlRigReplayPlaybackMode @ 14a202d60

UEnum * __cdecl Z_Construct_UEnum_ControlRig_EControlRigReplayPlaybackMode(void)

{
  if (Z_Registration_Info_UEnum_EControlRigReplayPlaybackMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EControlRigReplayPlaybackMode.InnerSingleton,
               &Z_Construct_UEnum_ControlRig_EControlRigReplayPlaybackMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EControlRigReplayPlaybackMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FControlRigReplayTracks @ 14a202da0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FControlRigReplayTracks(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FControlRigReplayTracks.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FControlRigReplayTracks.InnerSingleton,
               &Z_Construct_UScriptStruct_FControlRigReplayTracks_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FControlRigReplayTracks.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FControlRigReplayTracks.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FControlRigReplayVariable @ 14a202e20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FControlRigReplayVariable(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FControlRigReplayVariable.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FControlRigReplayVariable.InnerSingleton,
               &Z_Construct_UScriptStruct_FControlRigReplayVariable_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FControlRigReplayVariable.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FControlRigReplayVariable.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 14a202ea0

void * __cdecl Z_Construct_UScriptStruct_FControlRigReplayVariable_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FControlRigReplayVariable,&UE::CoreUObject::Private::Construct<FControlRigReplayVariable>,&UE::CoreUObject::Private::ConstructForTests<FControlRigReplayVariable>,&UE::CoreUObject::Private::Destruct<FControlRigReplayVariable>,&UE::CoreUObject::Private::Copy<FControlRigReplayVariable>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UTransformableControlHandle_NoRegister @ 14a202f20

UClass * __cdecl Z_Construct_UClass_UTransformableControlHandle_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTransformableControlHandle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"TransformableControlHandle",
               &Z_Registration_Info_UClass_UTransformableControlHandle.InnerSingleton,
               UTransformableControlHandle::StaticRegisterNativesUTransformableControlHandle,0x150,
               0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UTransformableControlHandle>,
               InternalVTableHelperCtorCaller<UTransformableControlHandle>,local_res8,
               UTransformableHandle::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTransformableControlHandle.InnerSingleton;
}

// EControlRigReplayPlaybackMode_StaticEnum @ 14a2030a0

UEnum * __cdecl EControlRigReplayPlaybackMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EControlRigReplayPlaybackMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_EControlRigReplayPlaybackMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_EControlRigReplayPlaybackMode,(UObject *)pUVar1,
                       L"EControlRigReplayPlaybackMode");
  }
  return Z_Registration_Info_UEnum_EControlRigReplayPlaybackMode.OuterSingleton;
}

// NewStructOps @ 14a203160

void * __cdecl Z_Construct_UScriptStruct_FControlRigReplayTracks_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x178;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FControlRigReplayTracks,&UE::CoreUObject::Private::Construct<FControlRigReplayTracks>,&UE::CoreUObject::Private::ConstructForTests<FControlRigReplayTracks>,&UE::CoreUObject::Private::Destruct<FControlRigReplayTracks>,&UE::CoreUObject::Private::SerializeArchive<FControlRigReplayTracks>,&UE::CoreUObject::Private::Copy<FControlRigReplayTracks>,&UE::CoreUObject::Private::Identical<FControlRigReplayTracks>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14a203220

void * __thiscall
FMovieSceneControlRigInstanceData::_scalar_deleting_destructor_
          (FMovieSceneControlRigInstanceData *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&this->Weight);
  pFVar1 = (this->BoneFilter).BranchFilters.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FMovieSceneSequenceInstanceData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x160);
  }
  return this;
}

// NewProp_bAdditive_SetBit @ 14a2032b0

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::NewProp_bAdditive_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_bApplyBoneFilter_SetBit @ 14a2032c0

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::NewProp_bApplyBoneFilter_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// NewStructOps @ 14a203330

void * __cdecl
Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x160;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneControlRigInstanceData,&UE::CoreUObject::Private::Construct<FMovieSceneControlRigInstanceData>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneControlRigInstanceData>,&UE::CoreUObject::Private::Destruct<FMovieSceneControlRigInstanceData>,&UE::CoreUObject::Private::Copy<FMovieSceneControlRigInstanceData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UControlRigReplay_CreateNewAsset @ 14a2034d0

UFunction * __cdecl Z_Construct_UFunction_UControlRigReplay_CreateNewAsset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigReplay_CreateNewAsset_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UControlRigReplay_GetPlaybackMode @ 14a2037c0

UFunction * __cdecl Z_Construct_UFunction_UControlRigReplay_GetPlaybackMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigReplay_GetPlaybackMode_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14a203800

void * __thiscall FRigUnit::_scalar_deleting_destructor_(FRigUnit *this,uint param_1)

{
  *this = (FRigUnit)&___7FRigVMStruct__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2038e0

void * __thiscall FRigUnitMutable::_scalar_deleting_destructor_(FRigUnitMutable *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FRigVMStruct__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// Z_Construct_UFunction_UControlRigReplay_GetTimeRange @ 14a203920

UFunction * __cdecl Z_Construct_UFunction_UControlRigReplay_GetTimeRange(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigReplay_GetTimeRange_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a2039a0

void __cdecl
Z_Construct_UFunction_UControlRigReplay_IsPaused_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// `scalar_deleting_destructor' @ 14a2039f0

void * __thiscall
FRigUnit_DebugBase::_scalar_deleting_destructor_(FRigUnit_DebugBase *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FRigVMStruct__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// Z_Construct_UFunction_UControlRigReplay_IsPaused @ 14a203a70

UFunction * __cdecl Z_Construct_UFunction_UControlRigReplay_IsPaused(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UControlRigReplay_IsPaused_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14a203ab0

void * __thiscall
FRigUnit_DebugBaseMutable::_scalar_deleting_destructor_
          (FRigUnit_DebugBaseMutable *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FRigVMStruct__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// NewStructOps @ 14a203af0

void * __cdecl Z_Construct_UScriptStruct_FRigUnit_DebugBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigUnit_DebugBase,&UE::CoreUObject::Private::Construct<FRigUnit_DebugBase>,&UE::CoreUObject::Private::ConstructForTests<FRigUnit_DebugBase>,&UE::CoreUObject::Private::Destruct<FRigUnit_DebugBase>,&UE::CoreUObject::Private::Copy<FRigUnit_DebugBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 14a203b40

void __cdecl
Z_Construct_UFunction_UControlRigReplay_IsRecording_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UControlRigReplay_IsRecording @ 14a203b50

UFunction * __cdecl Z_Construct_UFunction_UControlRigReplay_IsRecording(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigReplay_IsRecording_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a203b90

void __cdecl
Z_Construct_UFunction_UControlRigReplay_IsReplaying_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UControlRigReplay_IsReplaying @ 14a203ba0

UFunction * __cdecl Z_Construct_UFunction_UControlRigReplay_IsReplaying(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigReplay_IsReplaying_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a203be0

void __cdecl
Z_Construct_UFunction_UControlRigReplay_PauseReplay_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UControlRigReplay_PauseReplay @ 14a203c30

UFunction * __cdecl Z_Construct_UFunction_UControlRigReplay_PauseReplay(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigReplay_PauseReplay_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a203c70

void * __cdecl Z_Construct_UScriptStruct_FRigUnit_DebugBaseMutable_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigUnit_DebugBaseMutable,&UE::CoreUObject::Private::Construct<FRigUnit_DebugBaseMutable>,&UE::CoreUObject::Private::ConstructForTests<FRigUnit_DebugBaseMutable>,&UE::CoreUObject::Private::Destruct<FRigUnit_DebugBaseMutable>,&UE::CoreUObject::Private::Copy<FRigUnit_DebugBaseMutable>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UControlRigReplay_SetPlaybackMode @ 14a203cb0

UFunction * __cdecl Z_Construct_UFunction_UControlRigReplay_SetPlaybackMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigReplay_SetPlaybackMode_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a203cf0

void __cdecl
Z_Construct_UFunction_UControlRigReplay_StartRecording_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UControlRigReplay_StartRecording @ 14a203db0

UFunction * __cdecl Z_Construct_UFunction_UControlRigReplay_StartRecording(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigReplay_StartRecording_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a203df0

void __cdecl
Z_Construct_UFunction_UControlRigReplay_StartReplay_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// Z_Construct_UFunction_UControlRigReplay_StartReplay @ 14a203e00

UFunction * __cdecl Z_Construct_UFunction_UControlRigReplay_StartReplay(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigReplay_StartReplay_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FControlRigAnimNodeEventName @ 14a203e40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FControlRigAnimNodeEventName(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FControlRigAnimNodeEventName.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FControlRigAnimNodeEventName.InnerSingleton,
               &Z_Construct_UScriptStruct_FControlRigAnimNodeEventName_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FControlRigAnimNodeEventName.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FControlRigAnimNodeEventName.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewProp_ReturnValue_SetBit @ 14a203ec0

void __cdecl
Z_Construct_UFunction_UControlRigReplay_StopRecording_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 14a203ed0

void * __cdecl Z_Construct_UScriptStruct_FControlRigAnimNodeEventName_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FControlRigAnimNodeEventName,&UE::CoreUObject::Private::Construct<FControlRigAnimNodeEventName>,&UE::CoreUObject::Private::ConstructForTests<FControlRigAnimNodeEventName>,&UE::CoreUObject::Private::Destruct<FControlRigAnimNodeEventName>,&UE::CoreUObject::Private::Copy<FControlRigAnimNodeEventName>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14a203f50

void * __thiscall
FRigUnit_HighlevelBase::_scalar_deleting_destructor_(FRigUnit_HighlevelBase *this,uint param_1)

{
  *this = (FRigUnit_HighlevelBase)&___7FRigVMStruct__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UFunction_UControlRigReplay_StopRecording @ 14a2040f0

UFunction * __cdecl Z_Construct_UFunction_UControlRigReplay_StopRecording(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigReplay_StopRecording_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14a204190

void * __thiscall
FRigUnit_HighlevelBaseMutable::_scalar_deleting_destructor_
          (FRigUnit_HighlevelBaseMutable *this,uint param_1)

{
  *(undefined ***)this = &___7FRigVMStruct__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// NewProp_ReturnValue_SetBit @ 14a2041d0

void __cdecl
Z_Construct_UFunction_UControlRigReplay_StopReplay_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// EControlRigVectorKind_StaticEnum @ 14a204410

UEnum * __cdecl EControlRigVectorKind_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EControlRigVectorKind.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_EControlRigVectorKind.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_EControlRigVectorKind,(UObject *)pUVar1,
                       L"EControlRigVectorKind");
  }
  return Z_Registration_Info_UEnum_EControlRigVectorKind.OuterSingleton;
}

// Z_Construct_UClass_UControlRigShapeLibrary_NoRegister @ 14a204450

UClass * __cdecl Z_Construct_UClass_UControlRigShapeLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRigShapeLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigShapeLibrary",
               &Z_Registration_Info_UClass_UControlRigShapeLibrary.InnerSingleton,
               UControlRigShapeLibrary::StaticRegisterNativesUControlRigShapeLibrary,0x150,0x10,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UControlRigShapeLibrary>
               ,InternalVTableHelperCtorCaller<UControlRigShapeLibrary>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRigShapeLibrary.InnerSingleton;
}

// Z_Construct_UFunction_UControlRigReplay_StopReplay @ 14a204540

UFunction * __cdecl Z_Construct_UFunction_UControlRigReplay_StopReplay(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigReplay_StopReplay_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a204580

void * __cdecl Z_Construct_UScriptStruct_FRigUnit_HighlevelBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigUnit_HighlevelBase,&UE::CoreUObject::Private::Construct<FRigUnit_HighlevelBase>,&UE::CoreUObject::Private::ConstructForTests<FRigUnit_HighlevelBase>,&UE::CoreUObject::Private::Destruct<FRigUnit_HighlevelBase>,&UE::CoreUObject::Private::Copy<FRigUnit_HighlevelBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bResetInputPoseToInitial_SetBit @ 14a2045c0

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_bResetInputPoseToInitial_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x68) = 1;
  return;
}

// NewProp_bTransferInputPose_SetBit @ 14a2045d0

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_bTransferInputPose_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x69) = 1;
  return;
}

// NewProp_bTransferInputCurves_SetBit @ 14a2045e0

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_bTransferInputCurves_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x6a) = 1;
  return;
}

// NewProp_bTransferPoseInGlobalSpace_SetBit @ 14a2045f0

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::
NewProp_bTransferPoseInGlobalSpace_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x6b) = 1;
  return;
}

// Z_Construct_UClass_UControlRigComponent @ 14a204600

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UControlRigComponent(void)

{
  if (Z_Registration_Info_UClass_UControlRigComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UControlRigComponent.OuterSingleton,
               &Z_Construct_UClass_UControlRigComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UControlRigComponent.OuterSingleton;
}

// NewProp_bValidateHierarchyTopology_SetBit @ 14a204640

void __cdecl
Z_Construct_UClass_UControlRigReplay_Statics::NewProp_bValidateHierarchyTopology_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x370) = 1;
  return;
}

// Z_Construct_UEnum_ControlRig_EControlRigComponentMapDirection @ 14a204650

UEnum * __cdecl Z_Construct_UEnum_ControlRig_EControlRigComponentMapDirection(void)

{
  if (Z_Registration_Info_UEnum_EControlRigComponentMapDirection.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EControlRigComponentMapDirection.InnerSingleton,
               &Z_Construct_UEnum_ControlRig_EControlRigComponentMapDirection_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EControlRigComponentMapDirection.InnerSingleton;
}

// Z_Construct_UEnum_ControlRig_EControlRigComponentSpace @ 14a204690

UEnum * __cdecl Z_Construct_UEnum_ControlRig_EControlRigComponentSpace(void)

{
  if (Z_Registration_Info_UEnum_EControlRigComponentSpace.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EControlRigComponentSpace.InnerSingleton,
               &Z_Construct_UEnum_ControlRig_EControlRigComponentSpace_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EControlRigComponentSpace.InnerSingleton;
}

// NewProp_bValidatePose_SetBit @ 14a2046d0

void __cdecl
Z_Construct_UClass_UControlRigReplay_Statics::NewProp_bValidatePose_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x371) = 1;
  return;
}

// Z_Construct_UScriptStruct_FControlRigComponentMappedBone @ 14a2046e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FControlRigComponentMappedBone(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FControlRigComponentMappedBone.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FControlRigComponentMappedBone.InnerSingleton,
               &Z_Construct_UScriptStruct_FControlRigComponentMappedBone_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FControlRigComponentMappedBone.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FControlRigComponentMappedBone.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FControlRigComponentMappedComponent @ 14a204760

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FControlRigComponentMappedComponent(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FControlRigComponentMappedComponent.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FControlRigComponentMappedComponent.InnerSingleton
               ,&Z_Construct_UScriptStruct_FControlRigComponentMappedComponent_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FControlRigComponentMappedComponent.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FControlRigComponentMappedComponent.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FControlRigComponentMappedCurve @ 14a2047e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FControlRigComponentMappedCurve(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FControlRigComponentMappedCurve.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FControlRigComponentMappedCurve.InnerSingleton,
               &Z_Construct_UScriptStruct_FControlRigComponentMappedCurve_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FControlRigComponentMappedCurve.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FControlRigComponentMappedCurve.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewProp_bValidateMetadata_SetBit @ 14a204860

void __cdecl
Z_Construct_UClass_UControlRigReplay_Statics::NewProp_bValidateMetadata_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x372) = 1;
  return;
}

// Z_Construct_UScriptStruct_FControlRigComponentMappedElement @ 14a204870

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FControlRigComponentMappedElement(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FControlRigComponentMappedElement.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FControlRigComponentMappedElement.InnerSingleton,
               &Z_Construct_UScriptStruct_FControlRigComponentMappedElement_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FControlRigComponentMappedElement.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FControlRigComponentMappedElement.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewProp_bValidateVariables_SetBit @ 14a2048f0

void __cdecl
Z_Construct_UClass_UControlRigReplay_Statics::NewProp_bValidateVariables_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x373) = 1;
  return;
}

// NewProp_bExecute_SetBit @ 14a204900

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_bExecute_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xac) = 1;
  return;
}

// NewProp_EnableTest_SetBit @ 14a204910

void __cdecl Z_Construct_UClass_UControlRigReplay_Statics::NewProp_EnableTest_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x388) = 1;
  return;
}

// EControlRigComponentSpace_StaticEnum @ 14a204920

UEnum * __cdecl EControlRigComponentSpace_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EControlRigComponentSpace.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_EControlRigComponentSpace.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_EControlRigComponentSpace,(UObject *)pUVar1,
                       L"EControlRigComponentSpace");
  }
  return Z_Registration_Info_UEnum_EControlRigComponentSpace.OuterSingleton;
}

// NewStructOps @ 14a204960

void * __cdecl Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x228;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNode_ControlRigBase,&UE::CoreUObject::Private::Construct<FAnimNode_ControlRigBase>,&UE::CoreUObject::Private::ConstructForTests<FAnimNode_ControlRigBase>,&UE::CoreUObject::Private::Destruct<FAnimNode_ControlRigBase>,&UE::CoreUObject::Private::Copy<FAnimNode_ControlRigBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EControlRigComponentMapDirection_StaticEnum @ 14a2049e0

UEnum * __cdecl EControlRigComponentMapDirection_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EControlRigComponentMapDirection.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_EControlRigComponentMapDirection.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_EControlRigComponentMapDirection,
                       (UObject *)pUVar1,L"EControlRigComponentMapDirection");
  }
  return Z_Registration_Info_UEnum_EControlRigComponentMapDirection.OuterSingleton;
}

// NewStructOps @ 14a204a60

void * __cdecl Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigUnit_HighlevelBaseMutable,&UE::CoreUObject::Private::Construct<FRigUnit_HighlevelBaseMutable>,&UE::CoreUObject::Private::ConstructForTests<FRigUnit_HighlevelBaseMutable>,&UE::CoreUObject::Private::Destruct<FRigUnit_HighlevelBaseMutable>,&UE::CoreUObject::Private::Copy<FRigUnit_HighlevelBaseMutable>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a204aa0

void * __cdecl
Z_Construct_UScriptStruct_FControlRigComponentMappedElement_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xf0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FControlRigComponentMappedElement,&UE::CoreUObject::Private::Construct<FControlRigComponentMappedElement>,&UE::CoreUObject::Private::ConstructForTests<FControlRigComponentMappedElement>,&UE::CoreUObject::Private::Destruct<FControlRigComponentMappedElement>,&UE::CoreUObject::Private::Copy<FControlRigComponentMappedElement>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a204c50

void * __cdecl
Z_Construct_UScriptStruct_FControlRigComponentMappedComponent_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FControlRigComponentMappedComponent,&UE::CoreUObject::Private::Construct<FControlRigComponentMappedComponent>,&UE::CoreUObject::Private::ConstructForTests<FControlRigComponentMappedComponent>,&UE::CoreUObject::Private::Destruct<FControlRigComponentMappedComponent>,&UE::CoreUObject::Private::Copy<FControlRigComponentMappedComponent>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a204ca0

void * __cdecl Z_Construct_UScriptStruct_FStructReference_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStructReference,&UE::CoreUObject::Private::Construct<FStructReference>,&UE::CoreUObject::Private::ConstructForTests<FStructReference>,&UE::CoreUObject::Private::Destruct<FStructReference>,&UE::CoreUObject::Private::Copy<FStructReference>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a205130

void * __cdecl Z_Construct_UScriptStruct_FControlRigComponentMappedBone_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FControlRigComponentMappedBone,&UE::CoreUObject::Private::Construct<FControlRigComponentMappedBone>,&UE::CoreUObject::Private::ConstructForTests<FControlRigComponentMappedBone>,&UE::CoreUObject::Private::Destruct<FControlRigComponentMappedBone>,&UE::CoreUObject::Private::Copy<FControlRigComponentMappedBone>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UControlRigOverrideAsset_NoRegister @ 14a205170

UClass * __cdecl Z_Construct_UClass_UControlRigOverrideAsset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRigOverrideAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigOverrideAsset",
               &Z_Registration_Info_UClass_UControlRigOverrideAsset.InnerSingleton,
               UControlRigOverrideAsset::StaticRegisterNativesUControlRigOverrideAsset,0x1a0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UControlRigOverrideAsset>,
               InternalVTableHelperCtorCaller<UControlRigOverrideAsset>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRigOverrideAsset.InnerSingleton;
}

// Z_Construct_UClass_UModularRigController @ 14a205220

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UModularRigController(void)

{
  if (Z_Registration_Info_UClass_UModularRigController.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UModularRigController.OuterSingleton,
               &Z_Construct_UClass_UModularRigController_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UModularRigController.OuterSingleton;
}

// Z_Construct_UScriptStruct_FRigModuleReference @ 14a205260

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigModuleReference(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigModuleReference.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigModuleReference.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigModuleReference_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigModuleReference.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FRigModuleReference.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 14a2052e0

void * __cdecl Z_Construct_UScriptStruct_FControlRigComponentMappedCurve_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FControlRigComponentMappedCurve,&UE::CoreUObject::Private::Construct<FControlRigComponentMappedCurve>,&UE::CoreUObject::Private::ConstructForTests<FControlRigComponentMappedCurve>,&UE::CoreUObject::Private::Destruct<FControlRigComponentMappedCurve>,&UE::CoreUObject::Private::Copy<FControlRigComponentMappedCurve>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bSetupUndo_SetBit @ 14a205320

void __cdecl
Z_Construct_UFunction_UModularRigController_AddModule_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_UModularRigController_AddModule @ 14a205370

UFunction * __cdecl Z_Construct_UFunction_UModularRigController_AddModule(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularRigController_AddModule_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSetupUndo_SetBit @ 14a2053b0

void __cdecl
Z_Construct_UFunction_UModularRigController_AddTargetToArrayConnector_Statics::
NewProp_bSetupUndo_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bAutoResolveOtherConnectors_SetBit @ 14a2053c0

void __cdecl
Z_Construct_UFunction_UModularRigController_AddTargetToArrayConnector_Statics::
NewProp_bAutoResolveOtherConnectors_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  return;
}

// NewProp_bCheckValidConnection_SetBit @ 14a2053d0

void __cdecl
Z_Construct_UFunction_UModularRigController_AddTargetToArrayConnector_Statics::
NewProp_bCheckValidConnection_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a2053e0

void __cdecl
Z_Construct_UFunction_UModularRigController_AddTargetToArrayConnector_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1b) = 1;
  return;
}

// Z_Construct_UFunction_UModularRigController_AddTargetToArrayConnector @ 14a205430

UFunction * __cdecl Z_Construct_UFunction_UModularRigController_AddTargetToArrayConnector(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularRigController_AddTargetToArrayConnector_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UControlRigComponent_AddMappedCompleteSkeletalMesh @ 14a205470

UFunction * __cdecl Z_Construct_UFunction_UControlRigComponent_AddMappedCompleteSkeletalMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UControlRigComponent_AddMappedCompleteSkeletalMesh_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bReplaceExistingConnections_SetBit @ 14a2054b0

void __cdecl
Z_Construct_UFunction_UModularRigController_AutoConnectModules_Statics::
NewProp_bReplaceExistingConnections_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bSetupUndo_SetBit @ 14a2054c0

void __cdecl
Z_Construct_UFunction_UModularRigController_AutoConnectModules_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a2054d0

void __cdecl
Z_Construct_UFunction_UModularRigController_AutoConnectModules_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  return;
}

// Z_Construct_UFunction_UModularRigController_AutoConnectModules @ 14a205590

UFunction * __cdecl Z_Construct_UFunction_UModularRigController_AutoConnectModules(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularRigController_AutoConnectModules_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bReplaceExistingConnections_SetBit @ 14a2055d0

void __cdecl
Z_Construct_UFunction_UModularRigController_AutoConnectSecondaryConnectors_Statics::
NewProp_bReplaceExistingConnections_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bSetupUndo_SetBit @ 14a2056a0

void __cdecl
Z_Construct_UFunction_UModularRigController_AutoConnectSecondaryConnectors_Statics::
NewProp_bSetupUndo_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a2056b0

void __cdecl
Z_Construct_UFunction_UModularRigController_AutoConnectSecondaryConnectors_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  return;
}

// Z_Construct_UFunction_UModularRigController_AutoConnectSecondaryConnectors @ 14a2056c0

UFunction * __cdecl Z_Construct_UFunction_UModularRigController_AutoConnectSecondaryConnectors(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularRigController_AutoConnectSecondaryConnectors_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSetupUndo_SetBit @ 14a205700

void __cdecl
Z_Construct_UFunction_UModularRigController_BindModuleVariable_Statics::NewProp_bSetupUndo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a205710

void __cdecl
Z_Construct_UFunction_UModularRigController_BindModuleVariable_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x21) = 1;
  return;
}

// Z_Construct_UFunction_UModularRigController_BindModuleVariable @ 14a205730

UFunction * __cdecl Z_Construct_UFunction_UModularRigController_BindModuleVariable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularRigController_BindModuleVariable_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a205930

void __cdecl
Z_Construct_UFunction_UModularRigController_CanConnectConnectorToElement_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UFunction_UModularRigController_CanConnectConnectorToElement @ 14a205940

UFunction * __cdecl Z_Construct_UFunction_UModularRigController_CanConnectConnectorToElement(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularRigController_CanConnectConnectorToElement_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a205980

void __cdecl
Z_Construct_UFunction_UModularRigController_CanConnectConnectorToElements_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// Z_Construct_UScriptStruct_FModularRigConnections @ 14a205990

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FModularRigConnections(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FModularRigConnections.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FModularRigConnections.InnerSingleton,
               &Z_Construct_UScriptStruct_FModularRigConnections_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FModularRigConnections.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FModularRigConnections.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FModularRigModuleSettingsForClipboard @ 14a205a10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FModularRigModuleSettingsForClipboard(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FModularRigModuleSettingsForClipboard.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FModularRigModuleSettingsForClipboard.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FModularRigModuleSettingsForClipboard_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FModularRigModuleSettingsForClipboard.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FModularRigModuleSettingsForClipboard.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FModularRigSingleConnection @ 14a205a90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FModularRigSingleConnection(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FModularRigSingleConnection.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FModularRigSingleConnection.InnerSingleton,
               &Z_Construct_UScriptStruct_FModularRigSingleConnection_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FModularRigSingleConnection.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FModularRigSingleConnection.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UFunction_UModularRigController_CanConnectConnectorToElements @ 14a205b10

UFunction * __cdecl Z_Construct_UFunction_UModularRigController_CanConnectConnectorToElements(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UModularRigController_CanConnectConnectorToElements_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// EModularRigNotification_StaticEnum @ 14a205b50

UEnum * __cdecl EModularRigNotification_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EModularRigNotification.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_EModularRigNotification.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_EModularRigNotification,(UObject *)pUVar1,
                       L"EModularRigNotification");
  }
  return Z_Registration_Info_UEnum_EModularRigNotification.OuterSingleton;
}

// NewProp_bSetupUndo_SetBit @ 14a205c40

void __cdecl
Z_Construct_UFunction_UModularRigController_ConnectConnectorToElement_Statics::
NewProp_bSetupUndo_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bAutoResolveOtherConnectors_SetBit @ 14a205c50

void __cdecl
Z_Construct_UFunction_UModularRigController_ConnectConnectorToElement_Statics::
NewProp_bAutoResolveOtherConnectors_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  return;
}

// NewProp_bCheckValidConnection_SetBit @ 14a205c60

void __cdecl
Z_Construct_UFunction_UModularRigController_ConnectConnectorToElement_Statics::
NewProp_bCheckValidConnection_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a205c70

void __cdecl
Z_Construct_UFunction_UModularRigController_ConnectConnectorToElement_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1b) = 1;
  return;
}

// NewProp_bShortNameBasedOnPath_SetBit @ 14a205eb0

void __cdecl
Z_Construct_UScriptStruct_FRigModuleReference_Statics::NewProp_bShortNameBasedOnPath_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// TFunction<void___cdecl(enum_EMessageSeverity::Type,FName_const_&,FString_const_&)><`UControlRigReplay::PerformTest'::__l2::<lambda_1>_&> @ 14a205f80

TFunction<void___cdecl(EMessageSeverity::Type,FName_const_&,FString_const_&)> * __thiscall
TFunction<void___cdecl(enum_EMessageSeverity::Type,FName_const_&,FString_const_&)>::
TFunction<void___cdecl(enum_EMessageSeverity::Type,FName_const_&,FString_const_&)><_UControlRigReplay::PerformTest_::__l2::<lambda_1>_&>
          (void *this,<lambda_1> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  puVar3 = FMemory::Malloc(0x50,0x10);
  *(undefined8 **)((longlong)this + 0x28) = puVar3;
  *puVar3 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`UControlRigReplay::PerformTest'::`2'::<lambda_1>,0,1>::_vftable_
  ;
  puVar3[2] = param_1->bSuccess;
  lVar1 = *(longlong *)&param_1->InLogFunction;
  puVar3[4] = lVar1;
  puVar3[9] = 0;
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)&(param_1->InLogFunction).field_0x28;
    puVar4 = (undefined8 *)&(param_1->InLogFunction).field_0x10;
    if (puVar2 != (undefined8 *)0x0) {
      puVar4 = puVar2;
    }
    (**(code **)*puVar4)();
  }
  if (puVar3 + 2 != (undefined8 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UControlRigReplay::PerformTest'::__l2::<lambda_1>,void,enum_EMessageSeverity::Type,FName_const_&,FString_const_&>
         ::Call;
  }
  return this;
}

// operator<<<TObjectPtr<UControlRigOverrideAsset>,TSizedDefaultAllocator<32>_> @ 14a206b80

FArchive * __cdecl
operator<<<TObjectPtr<UControlRigOverrideAsset>,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<TObjectPtr<UControlRigOverrideAsset>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 3);
  iVar9 = 0;
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
                (8,8,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x200001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar8 = auStackX_8[0];
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          while( true ) {
            uVar6 = 0;
            if ((int)uVar10 < (int)uVar8) {
              uVar6 = ~uVar10 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) break;
            (**(code **)(*(longlong *)param_1 + 0x150))
                      (param_1,(param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 8);
            uVar8 = param_2->ArrayNum;
            uVar10 = uVar10 + 1;
            if ((int)uVar8 <= (int)uVar10) {
              return param_1;
            }
          }
          pcVar3 = (code *)swi(3);
          pFVar7 = (FArchive *)(*pcVar3)();
          return pFVar7;
        }
        TArray<TObjectPtr<UControlRigOverrideAsset>,TSizedDefaultAllocator<32>_>::Empty
                  (param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8) = 0;
          (**(code **)(*(longlong *)param_1 + 0x150))(param_1);
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)auStackX_8[0]);
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

// FMetadataStorage,0>,FDefaultSetAllocator> @ 14a206b90

FArchive * __cdecl
operator<<<TTuple<FRigElementKey,URigHierarchy::
FMetadataStorage>,TDefaultMapHashableKeyFuncs<FRigElementKey,URigHierarchy::
FMetadataStorage_0>_FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>,TDefaultMapHashableKeyFuncs<FRigElementKey,URigHierarchy::FMetadataStorage,0>,FDefaultSetAllocator>
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
  
  operator<<<TSparseSetElement<TTuple<FRigElementKey,URigHierarchy::
  FMetadataStorage>_>_TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_14a21c08e;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_14a21c08e:
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
        goto LAB_14a21c16b;
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
LAB_14a21c16b:
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
        pbVar12 = (byte *)((longlong)(int)uVar10 * 0x78 + *(longlong *)&param_2->Elements);
        uVar3 = *(undefined8 *)(pbVar12 + 4);
        uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar7 = (uint)*pbVar12 + (uVar7 + (int)((ulonglong)uVar3 >> 0x20)) * 10 & *piVar1 - 1U;
        *(uint *)(pbVar12 + 0x74) = uVar7;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(pbVar12 + 0x70) = *(undefined4 *)((longlong)FVar6 + uVar8 * 4);
        *(int *)((longlong)FVar6 + uVar8 * 4) = (int)uVar10;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar10 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<FControlRigOverrideValue,TSizedDefaultAllocator<32>_> @ 14a206ba0

FArchive * __cdecl
operator<<<FControlRigOverrideValue,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FControlRigOverrideValue,TSizedDefaultAllocator<32>_> *param_2)

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
  FControlRigOverrideValue *this;
  int iVar10;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x58);
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
      DestructItems<FControlRigOverrideValue,int>
                ((FControlRigOverrideValue *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x58,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x2e8bb)) {
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
              FControlRigOverrideValue::Serialize
                        ((FControlRigOverrideValue *)
                         ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x58),param_1);
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FControlRigOverrideValue,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0])
          ;
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x858,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              this = (FControlRigOverrideValue *)
                     ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x58);
              DefaultConstructItems<FControlRigOverrideValue,int>(this,1);
              FControlRigOverrideValue::Serialize(this,param_1);
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

// operator<<<FRigElementKey,TSizedDefaultAllocator<32>_> @ 14a206bb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FArchive * __cdecl
operator<<<FRigElementKey,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FRigElementKey *this;
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
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0xc);
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
                (0xc,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x155556)) {
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
              FRigElementKey::Serialize
                        ((FRigElementKey *)
                         ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0xc),param_1);
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x40c,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              this = (FRigElementKey *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0xc);
              DefaultConstructItems<FRigElementKey,int>(this,1);
              FRigElementKey::Serialize(this,param_1);
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

// operator<<<FRigPhysicsSolverDescription,TSizedDefaultAllocator<32>_> @ 14a206bc0

FArchive * __cdecl
operator<<<FRigPhysicsSolverDescription,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FRigPhysicsSolverDescription,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FRigPhysicsSolverDescription *this;
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
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x18);
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
                (0x18,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0xaaaab)) {
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
              FRigPhysicsSolverDescription::Serialize
                        ((FRigPhysicsSolverDescription *)
                         ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x18),param_1);
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FRigPhysicsSolverDescription,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x418,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              this = (FRigPhysicsSolverDescription *)
                     ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x18);
              DefaultConstructItems<FRigPhysicsSolverDescription,int>(this,1);
              FRigPhysicsSolverDescription::Serialize(this,param_1);
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

// operator<<<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> @ 14a206bd0

FArchive * __cdecl
operator<<<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar9;
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
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,int>
                ((TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)
                 (param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&param_2->AllocatorInstance,0,piVar1);
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x100001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar11 = 0;
          uVar8 = auStackX_8[0];
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          while( true ) {
            uVar6 = 0;
            if ((int)uVar11 < (int)uVar8) {
              uVar6 = ~uVar11 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) break;
            TArrayPrivateFriend::Serialize<FRigElementKey,TSizedDefaultAllocator<32>_>
                      (param_1,(TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)
                               ((param_2->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x10));
            uVar11 = uVar11 + 1;
            uVar8 = param_2->ArrayNum;
            if (param_2->ArrayNum <= (int)uVar11) {
              return param_1;
            }
          }
          pcVar3 = (code *)swi(3);
          pFVar7 = (FArchive *)(*pcVar3)();
          return pFVar7;
        }
        TArray<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
        Empty(param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          pTVar9 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)
                   ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10);
          (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          pTVar9->ArrayNum = 0;
          pTVar9->ArrayMax = 0;
          TArrayPrivateFriend::Serialize<FRigElementKey,TSizedDefaultAllocator<32>_>(param_1,pTVar9)
          ;
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)auStackX_8[0]);
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

// FMetadataStorage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14a206be0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<FRigElementKey,URigHierarchy::
FMetadataStorage>_>_TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  FRigElementKey *pFVar10;
  FRigElementKey *pFVar11;
  uint *puVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 * 0x78,(longlong)*(int *)&param_2->field_0xc * 0x78);
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
      uVar8 = *puVar12;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar8 == 0) {
        lVar7 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_14a206f2c;
        uVar8 = puVar12[lVar7 + 1];
      }
      local_78._4_4_ = -uVar8 & uVar8;
      uVar9 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar7 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar7;
      if (iVar6 < iStack_64) {
LAB_14a206f2c:
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
        pFVar11 = (FRigElementKey *)
                  ((longlong)local_50.CurrentBitIndex * 0x78 + *(longlong *)local_58);
        FRigElementKey::Serialize(pFVar11,param_1);
        URigHierarchy::FMetadataStorage::Serialize((FMetadataStorage *)&pFVar11[1].Name,param_1);
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
    uVar8 = local_res8[0];
    uVar9 = (ulonglong)local_res8[0];
    TSparseArray<TSparseSetElement<TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(param_2,0,*(int *)puVar2);
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar9);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x78,8,uVar8,(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar8 = uVar8 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar8) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar8) {
        uVar5 = uVar8;
      }
      *(uint *)&param_2->field_0x2c = uVar5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    pFVar11 = (FRigElementKey *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x78,8,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          iVar3 = *(int *)((longlong)iVar6 * 0x78 + 4 + *(longlong *)param_2);
          *(int *)&param_2->field_0x30 = iVar3;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)((longlong)iVar3 * 0x78 + *(longlong *)param_2) = 0xffffffff;
          }
        }
        TSparseArrayBase<120,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<120,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        pFVar10 = (FRigElementKey *)0x0;
        if (local_78.Pointer != (FRigElementKey *)0x0) {
          *(ERigElementType *)local_78.Pointer = None;
          ((FName *)((longlong)local_78.Pointer + 4))->ComparisonIndex = 0;
          ((FName *)((longlong)local_78.Pointer + 4))->Number = 0;
          pFVar10 = (FRigElementKey *)((longlong)local_78.Pointer + 0x18);
          pFVar10->Type = None;
          *(undefined3 *)&pFVar10->field_0x1 = 0;
          (pFVar10->Name).ComparisonIndex = 0;
          *(undefined8 *)&(((FRigElementKey *)((longlong)local_78.Pointer + 0x18))->Name).Number = 0
          ;
          (((FRigElementKey *)((longlong)local_78.Pointer + 0x24))->Name).ComparisonIndex = 0;
          (((FRigElementKey *)((longlong)local_78.Pointer + 0x24))->Name).Number = 0;
          pFVar10 = (FRigElementKey *)((longlong)local_78.Pointer + 0x30);
          pFVar10->Type = None;
          *(undefined3 *)&pFVar10->field_0x1 = 0;
          (pFVar10->Name).ComparisonIndex = 0;
          *(undefined8 *)&(((FRigElementKey *)((longlong)local_78.Pointer + 0x30))->Name).Number = 0
          ;
          (((FRigElementKey *)((longlong)local_78.Pointer + 0x3c))->Name).ComparisonIndex = 0;
          (((FRigElementKey *)((longlong)local_78.Pointer + 0x3c))->Name).Number = 0;
          pFVar10 = (FRigElementKey *)((longlong)local_78.Pointer + 0x48);
          pFVar10->Type = None;
          *(undefined3 *)&pFVar10->field_0x1 = 0;
          (pFVar10->Name).ComparisonIndex = 0;
          *(undefined8 *)&(((FRigElementKey *)((longlong)local_78.Pointer + 0x48))->Name).Number = 0
          ;
          (((FRigElementKey *)((longlong)local_78.Pointer + 0x54))->Name).ComparisonIndex = 0;
          (((FRigElementKey *)((longlong)local_78.Pointer + 0x54))->Name).Number = 0;
          pFVar10 = (FRigElementKey *)((longlong)local_78.Pointer + 0x60);
          pFVar10->Type = None;
          *(undefined3 *)&pFVar10->field_0x1 = 0;
          (pFVar10->Name).ComparisonIndex = 0;
          (((FRigElementKey *)((longlong)local_78.Pointer + 0xc))->Name).ComparisonIndex = 0;
          (((FRigElementKey *)((longlong)local_78.Pointer + 0xc))->Name).Number = 0;
          pFVar10 = (FRigElementKey *)((longlong)local_78.Pointer + 0x18);
          pFVar10->Type = None;
          *(undefined3 *)&pFVar10->field_0x1 = 0;
          (pFVar10->Name).ComparisonIndex = 0;
          pFVar10 = (FRigElementKey *)((longlong)local_78.Pointer + 0x30);
          pFVar10->Type = None;
          *(undefined3 *)&pFVar10->field_0x1 = 0;
          (pFVar10->Name).ComparisonIndex = 0;
          (((FRigElementKey *)((longlong)local_78.Pointer + 0x30))->Name).Number = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x3c) = 0x80;
          (((FRigElementKey *)((longlong)local_78.Pointer + 0x3c))->Name).ComparisonIndex.Value =
               0xffffffff;
          (((FRigElementKey *)((longlong)local_78.Pointer + 0x3c))->Name).Number = 0;
          *(undefined8 *)&(((FRigElementKey *)((longlong)local_78.Pointer + 0x48))->Name).Number = 0
          ;
          (((FRigElementKey *)((longlong)local_78.Pointer + 0x54))->Name).ComparisonIndex.Value = 0;
          pFVar10 = (FRigElementKey *)((longlong)local_78.Pointer + 0x60);
          pFVar10->Type = None;
          *(undefined3 *)&pFVar10->field_0x1 = 0;
          (pFVar10->Name).ComparisonIndex = 0;
          *(undefined8 *)&(((FRigElementKey *)((longlong)local_78.Pointer + 0x60))->Name).Number = 0
          ;
          (((FRigElementKey *)((longlong)local_78.Pointer + 0x6c))->Name).ComparisonIndex.Value =
               0xffffffff;
          pFVar10 = local_78.Pointer;
        }
        FRigElementKey::Serialize(pFVar10,param_1);
        URigHierarchy::FMetadataStorage::Serialize((FMetadataStorage *)&pFVar10[1].Name,param_1);
        uVar8 = (int)pFVar11 + 1;
        pFVar11 = (FRigElementKey *)(ulonglong)uVar8;
      } while ((int)uVar8 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<FName> @ 14a206fb0

FArchive * __cdecl operator<<<FName>(FArchive *param_1,TOptional<FName> *param_2)

{
  TOptional<FName>::Serialize(param_2,param_1);
  return param_1;
}

// operator<<<FProperty> @ 14a206fe0

FArchive * __cdecl operator<<<FProperty>(FArchive *param_1,TWeakFieldPtr<FProperty> *param_2)

{
  (**(code **)(*(longlong *)param_1 + 0x138))();
  operator<<(param_1,(FFieldPath *)&param_2->Field);
  return param_1;
}

// AddLambda<`UControlRigReplay::StartRecording'::__l2::<lambda_1>_> @ 14a207470

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
::AddLambda<_UControlRigReplay::StartRecording_::__l2::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
           *this,<lambda_1> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  UControlRigReplay *pUVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pUVar5 = (UControlRigReplay *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUControlRig__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartRecording'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->__this = (UControlRigReplay *)0x0;
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
      pUVar5 = (UControlRigReplay *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    param_1->__this = pUVar5;
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

// AddLambda<`UControlRigTestData::StartRecording'::__l2::<lambda_1>_> @ 14a2076c0

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
::AddLambda<_UControlRigTestData::StartRecording_::__l2::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
           *this,<lambda_1> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  UControlRigTestData *pUVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pUVar5 = (UControlRigTestData *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUControlRig__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartRecording'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->__this = (UControlRigTestData *)0x0;
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
      pUVar5 = (UControlRigTestData *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    param_1->__this = pUVar5;
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

// AddLambda<`UControlRigReplay::StartReplay'::__l2::<lambda_1>_> @ 14a207910

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
::AddLambda<_UControlRigReplay::StartReplay_::__l2::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
           *this,<lambda_1> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  UControlRigReplay *pUVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pUVar5 = (UControlRigReplay *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUControlRig__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartReplay'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->__this = (UControlRigReplay *)0x0;
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
      pUVar5 = (UControlRigReplay *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    param_1->__this = pUVar5;
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

// AddLambda<`UControlRigTestData::StartReplay'::__l2::<lambda_1>_> @ 14a207b60

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
::AddLambda<_UControlRigTestData::StartReplay_::__l2::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
           *this,<lambda_1> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  UControlRigTestData *pUVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pUVar5 = (UControlRigTestData *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUControlRig__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartReplay'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->__this = (UControlRigTestData *)0x0;
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
      pUVar5 = (UControlRigTestData *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    param_1->__this = pUVar5;
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

// AddLambda<`UControlRigReplay::StartRecording'::__l2::<lambda_2>_> @ 14a207db0

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
::AddLambda<_UControlRigReplay::StartRecording_::__l2::<lambda_2>_>
          (TMulticastDelegateRegistration<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
           *this,<lambda_2> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  UControlRigReplay *pUVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pUVar5 = (UControlRigReplay *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVURigVMHost__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartRecording'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->__this = (UControlRigReplay *)0x0;
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
      pUVar5 = (UControlRigReplay *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    param_1->__this = pUVar5;
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

// AddLambda<`UControlRigTestData::StartRecording'::__l2::<lambda_2>_> @ 14a208000

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
::AddLambda<_UControlRigTestData::StartRecording_::__l2::<lambda_2>_>
          (TMulticastDelegateRegistration<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
           *this,<lambda_2> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  UControlRigTestData *pUVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pUVar5 = (UControlRigTestData *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVURigVMHost__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartRecording'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->__this = (UControlRigTestData *)0x0;
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
      pUVar5 = (UControlRigTestData *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    param_1->__this = pUVar5;
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

// AddLambda<`UControlRigReplay::StartReplay'::__l2::<lambda_2>_> @ 14a208250

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
::AddLambda<_UControlRigReplay::StartReplay_::__l2::<lambda_2>_>
          (TMulticastDelegateRegistration<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
           *this,<lambda_2> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  UControlRigReplay *pUVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pUVar5 = (UControlRigReplay *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVURigVMHost__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartReplay'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->__this = (UControlRigReplay *)0x0;
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
      pUVar5 = (UControlRigReplay *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    param_1->__this = pUVar5;
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

// AddLambda<`UControlRigTestData::StartReplay'::__l2::<lambda_2>_> @ 14a2084a0

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
::AddLambda<_UControlRigTestData::StartReplay_::__l2::<lambda_2>_>
          (TMulticastDelegateRegistration<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
           *this,<lambda_2> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  UControlRigTestData *pUVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pUVar5 = (UControlRigTestData *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVURigVMHost__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartReplay'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->__this = (UControlRigTestData *)0x0;
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
      pUVar5 = (UControlRigTestData *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    param_1->__this = pUVar5;
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

// AddLambda<`UControlRigReplay::StartRecording'::__l2::<lambda_3>_> @ 14a2086f0

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
::AddLambda<_UControlRigReplay::StartRecording_::__l2::<lambda_3>_>
          (TMulticastDelegateRegistration<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
           *this,<lambda_3> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  UControlRigReplay *pUVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pUVar5 = (UControlRigReplay *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVURigVMHost__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartRecording'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->__this = (UControlRigReplay *)0x0;
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
      pUVar5 = (UControlRigReplay *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    param_1->__this = pUVar5;
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

// AddLambda<`UControlRigTestData::StartRecording'::__l2::<lambda_3>_> @ 14a208940

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
::AddLambda<_UControlRigTestData::StartRecording_::__l2::<lambda_3>_>
          (TMulticastDelegateRegistration<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
           *this,<lambda_3> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  UControlRigTestData *pUVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pUVar5 = (UControlRigTestData *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVURigVMHost__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartRecording'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->__this = (UControlRigTestData *)0x0;
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
      pUVar5 = (UControlRigTestData *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    param_1->__this = pUVar5;
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

// AddLambda<`UControlRigReplay::StartReplay'::__l2::<lambda_3>_> @ 14a208b90

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
::AddLambda<_UControlRigReplay::StartReplay_::__l2::<lambda_3>_>
          (TMulticastDelegateRegistration<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
           *this,<lambda_3> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  UControlRigReplay *pUVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pUVar5 = (UControlRigReplay *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVURigVMHost__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartReplay'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->__this = (UControlRigReplay *)0x0;
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
      pUVar5 = (UControlRigReplay *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    param_1->__this = pUVar5;
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

// AddLambda<`UControlRigTestData::StartReplay'::__l2::<lambda_3>_> @ 14a208de0

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
::AddLambda<_UControlRigTestData::StartReplay_::__l2::<lambda_3>_>
          (TMulticastDelegateRegistration<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
           *this,<lambda_3> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  UControlRigTestData *pUVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pUVar5 = (UControlRigTestData *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVURigVMHost__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartReplay'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->__this = (UControlRigTestData *)0x0;
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
      pUVar5 = (UControlRigTestData *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    param_1->__this = pUVar5;
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

// AddStructReferencedObjectsOrNot<FControlRigOverrideContainer> @ 14a209530

void __cdecl
AddStructReferencedObjectsOrNot<FControlRigOverrideContainer>
          (void *param_1,FReferenceCollector *param_2)

{
  int iVar1;
  FProperty *this;
  UClass *pUVar2;
  FWeakObjectPtr *pFVar3;
  FControlRigOverrideValue *this_00;
  FControlRigOverrideValue *pFVar4;
  UClass *local_res8;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  
  iVar1 = *(int *)((longlong)param_1 + 8);
  this_00 = *(FControlRigOverrideValue **)param_1;
  pFVar4 = this_00 + iVar1;
  do {
    if (*(int *)((longlong)param_1 + 8) != iVar1) {
      `TCheckedPointerIterator<FControlRigOverrideValue,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (this_00 == pFVar4) {
      return;
    }
    this = FControlRigOverrideValue::GetRootProperty(this_00);
    if (this != (FProperty *)0x0) {
      pUVar2 = FField::GetOwnerClass((FField *)this);
      if (pUVar2 == (UClass *)0x0) {
        pUVar2 = (UClass *)FField::GetOwnerStruct((FField *)this);
        if (pUVar2 != (UClass *)0x0) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar2);
          }
          local_res20.ObjectIndex = 0;
          local_res20.ObjectSerialNumber = 0;
          local_res8 = pUVar2;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar2);
          }
          FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_res8);
          pFVar3 = &local_res20;
          goto LAB_14a209637;
        }
      }
      else {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar2);
        }
        local_res18.ObjectIndex = 0;
        local_res18.ObjectSerialNumber = 0;
        local_res8 = pUVar2;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar2);
        }
        FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res8);
        pFVar3 = &local_res18;
LAB_14a209637:
        FReferenceCollector::AddReferencedObject(param_2,pFVar3,(UObject *)0x0,(FProperty *)0x0);
      }
      FControlRigOverrideValue::AddStructReferencedObjects(this_00,param_2);
    }
    this_00 = this_00 + 1;
  } while( true );
}

// ApplyAfter<`FAnimNode_ControlRigBase::UpdateGetAssetUserDataDelegate'::__l2::<lambda_1>_&> @ 14a20c1e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_> * __thiscall
UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int>_>::
ApplyAfter<_FAnimNode_ControlRigBase::UpdateGetAssetUserDataDelegate_::__l2::<lambda_1>_&>
          (TTupleBase<TIntegerSequence<unsigned_int>_> *this,
          TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          <lambda_1> *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&(param_1->LocalWeakAnimInstance).WeakPtr);
  if (bVar1) {
    FAnimNode_ControlRigBase::GetAssetUserData(param_1->__this,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  if ((param_1->InControlRig != (UControlRig *)0x0) &&
     (((uint)param_1->InControlRig->_padding_ >> 0x1e & 1) == 0)) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &param_1->InControlRig->GetExternalAssetUserDataDelegate);
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// Cast<FRigConnectorElement> @ 14a20c8c0

/* WARNING: Removing unreachable block (ram,0x00014a20c917) */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigConnectorElement * __cdecl Cast<FRigConnectorElement>(FRigBaseElement *param_1)

{
  int iVar1;
  longlong lVar2;
  UScriptStruct *pUVar3;
  
  if (param_1 != (FRigBaseElement *)0x0) {
    lVar2 = (**(code **)(param_1->_padding_ + 0x10))();
    pUVar3 = FRigConnectorElement::StaticStruct();
    if (pUVar3 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return (FRigConnectorElement *)param_1;
      }
      return (FRigConnectorElement *)0x0;
    }
  }
  return (FRigConnectorElement *)0x0;
}

// Cast<FRigControlElement> @ 14a20c940

/* WARNING: Removing unreachable block (ram,0x00014a20c997) */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigControlElement * __cdecl Cast<FRigControlElement>(FRigBaseElement *param_1)

{
  int iVar1;
  longlong lVar2;
  UScriptStruct *pUVar3;
  
  if (param_1 != (FRigBaseElement *)0x0) {
    lVar2 = (**(code **)(param_1->_padding_ + 0x10))();
    pUVar3 = FRigControlElement::StaticStruct();
    if (pUVar3 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return (FRigControlElement *)param_1;
      }
      return (FRigControlElement *)0x0;
    }
  }
  return (FRigControlElement *)0x0;
}

// Cast<FRigCurveElement> @ 14a20c9c0

/* WARNING: Removing unreachable block (ram,0x00014a20ca17) */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigCurveElement * __cdecl Cast<FRigCurveElement>(FRigBaseElement *param_1)

{
  int iVar1;
  longlong lVar2;
  UScriptStruct *pUVar3;
  
  if (param_1 != (FRigBaseElement *)0x0) {
    lVar2 = (**(code **)(param_1->_padding_ + 0x10))();
    pUVar3 = FRigCurveElement::StaticStruct();
    if (pUVar3 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return (FRigCurveElement *)param_1;
      }
      return (FRigCurveElement *)0x0;
    }
  }
  return (FRigCurveElement *)0x0;
}

// CastChecked<AControlRigShapeActor,AActor> @ 14a20ca40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

AControlRigShapeActor * __cdecl
CastChecked<AControlRigShapeActor,AActor>(AActor *param_1,Type param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (AActor *)0x0) {
    if (param_2 != NullChecked) {
      return (AControlRigShapeActor *)0x0;
    }
    pFVar3 = GetTypeName<AControlRigShapeActor>(&local_18);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = AControlRigShapeActor::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (AControlRigShapeActor *)param_1;
  }
  pFVar3 = GetTypeName<AControlRigShapeActor>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<AActor>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UControlRig,UObject> @ 14a20cb20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UControlRig * __cdecl CastChecked<UControlRig,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UControlRig>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UControlRig::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UControlRig *)param_1;
  }
  pFVar3 = GetTypeName<UControlRig>(&local_28);
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

// ConstructItems<TObjectPtr<UAssetUserData>,UAssetUserData_*,int> @ 14a20cbe0

void __cdecl
ConstructItems<TObjectPtr<UAssetUserData>,UAssetUserData_*,int>
          (void *param_1,UAssetUserData **param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      pUVar1 = (UObject *)*param_2;
      *(UObject **)(lVar2 + (longlong)param_2) = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TObjectPtr<UAssetUserData>,TObjectPtr<UAssetUserData>,int> @ 14a20cc40

void __cdecl
ConstructItems<TObjectPtr<UAssetUserData>,TObjectPtr<UAssetUserData>,int>
          (void *param_1,TObjectPtr<UAssetUserData> *param_2,int param_3)

{
  TObjectPtr<UAssetUserData> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UAssetUserData>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UAssetUserData>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (UAssetUserData *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UAssetUserData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSoftObjectPtr<UControlRigShapeLibrary>,TSoftObjectPtr<UControlRigShapeLibrary>,int> @ 14a20cca0

void __cdecl
ConstructItems<TSoftObjectPtr<UControlRigShapeLibrary>,TSoftObjectPtr<UControlRigShapeLibrary>,int>
          (void *param_1,TSoftObjectPtr<UControlRigShapeLibrary> *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      *(undefined8 *)(lVar1 + (longlong)param_2) = *(undefined8 *)&param_2->SoftObjectPtr;
      FSoftObjectPath::FSoftObjectPath
                ((FSoftObjectPath *)(lVar1 + 8 + (longlong)param_2),
                 (FSoftObjectPath *)&(param_2->SoftObjectPtr).field_0x8);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FControlRigComponentMappedComponent,FControlRigComponentMappedComponent,int> @ 14a20cd00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
ConstructItems<FControlRigComponentMappedComponent,FControlRigComponentMappedComponent,int>
          (void *param_1,FControlRigComponentMappedComponent *param_2,int param_3)

{
  EControlRigComponentMapDirection *pEVar1;
  UObject *pUVar2;
  ERigElementType *pEVar3;
  ERigElementType *pEVar4;
  
  if (param_3 != 0) {
    pEVar3 = (ERigElementType *)((longlong)param_1 + 0x10);
    pEVar4 = &param_2->ElementType;
    do {
      pUVar2 = *(UObject **)(pEVar3 + (longlong)param_2 + (-0x10 - (longlong)param_1));
      *(UObject **)(pEVar3 + -0x10) = pUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      *(FName *)(pEVar3 + -8) = *(FName *)(pEVar4 + -8);
      *pEVar3 = *pEVar4;
      pEVar1 = pEVar4 + 1;
      pEVar4 = pEVar4 + 0x18;
      pEVar3[1] = *pEVar1;
      pEVar3 = pEVar3 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FControlRigComponentMappedElement,FControlRigComponentMappedElement,int> @ 14a20cd90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
ConstructItems<FControlRigComponentMappedElement,FControlRigComponentMappedElement,int>
          (void *param_1,FControlRigComponentMappedElement *param_2,int param_3)

{
  undefined4 *puVar1;
  UObject *pUVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (param_3 != 0) {
    plVar4 = (longlong *)((longlong)param_1 + 0x18);
    plVar5 = &(param_2->ComponentReference)._padding_;
    do {
      plVar4[-3] = *(longlong *)((longlong)plVar4 + (longlong)param_2 + (-0x18 - (longlong)param_1))
      ;
      FString::FString((FString *)(plVar4 + -2),(FString *)(plVar5 + -2));
      *plVar4 = *plVar5;
      plVar4[1] = *(longlong *)&((TSoftObjectPtr<AActor> *)(plVar5 + 1))->SoftObjectPtr;
      FSoftObjectPath::FSoftObjectPath
                ((FSoftObjectPath *)(plVar4 + 2),(FSoftObjectPath *)(plVar5 + 2));
      *(undefined4 *)(plVar4 + 6) = *(undefined4 *)(plVar5 + 6);
      *(undefined8 *)((longlong)plVar4 + 0x34) = *(undefined8 *)((longlong)plVar5 + 0x34);
      *(undefined1 *)((longlong)plVar4 + 0x3c) = *(undefined1 *)((longlong)plVar5 + 0x3c);
      plVar4[8] = plVar5[8];
      *(undefined1 *)(plVar4 + 9) = *(undefined1 *)(plVar5 + 9);
      lVar3 = plVar5[0xc];
      plVar4[0xb] = plVar5[0xb];
      plVar4[0xc] = lVar3;
      lVar3 = plVar5[0xe];
      plVar4[0xd] = plVar5[0xd];
      plVar4[0xe] = lVar3;
      lVar3 = plVar5[0x10];
      plVar4[0xf] = plVar5[0xf];
      plVar4[0x10] = lVar3;
      lVar3 = plVar5[0x12];
      plVar4[0x11] = plVar5[0x11];
      plVar4[0x12] = lVar3;
      lVar3 = plVar5[0x14];
      plVar4[0x13] = plVar5[0x13];
      plVar4[0x14] = lVar3;
      lVar3 = plVar5[0x16];
      plVar4[0x15] = plVar5[0x15];
      plVar4[0x16] = lVar3;
      *(undefined4 *)(plVar4 + 0x17) = *(undefined4 *)(plVar5 + 0x17);
      *(undefined1 *)((longlong)plVar4 + 0xbc) = *(undefined1 *)((longlong)plVar5 + 0xbc);
      pUVar2 = (UObject *)plVar5[0x18];
      plVar4[0x18] = (longlong)pUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      *(undefined4 *)(plVar4 + 0x19) = *(undefined4 *)(plVar5 + 0x19);
      puVar1 = (undefined4 *)((longlong)plVar5 + 0xcc);
      plVar5 = plVar5 + 0x1e;
      *(undefined4 *)((longlong)plVar4 + 0xcc) = *puVar1;
      plVar4 = plVar4 + 0x1e;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FControlRigOverrideValue,FControlRigOverrideValue,int> @ 14a20cee0

void __cdecl
ConstructItems<FControlRigOverrideValue,FControlRigOverrideValue,int>
          (void *param_1,FControlRigOverrideValue *param_2,int param_3)

{
  undefined4 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0xc);
    do {
      (((FControlRigOverrideValue *)(puVar1 + -3))->Path).field0_0x0.TypedValue.Data.
      AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      puVar1[-1] = 0;
      *puVar1 = 0xffffffff;
      *(undefined8 *)(puVar1 + 1) = 0;
      puVar1[3] = 0;
      *(undefined8 *)(puVar1 + 4) = 0xffffffffffffffff;
      puVar1[6] = 0;
      *(undefined8 *)(puVar1 + 9) = 0;
      *(undefined8 *)(puVar1 + 0xb) = 0;
      *(undefined8 *)(puVar1 + 0xd) = 0;
      *(undefined8 *)(puVar1 + 0xf) = 0;
      FControlRigOverrideValue::operator=((FControlRigOverrideValue *)(puVar1 + -3),param_2);
      param_2 = param_2 + 1;
      puVar1 = puVar1 + 0x16;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FControlRigReplayVariable,FControlRigReplayVariable,int> @ 14a20cf80

void __cdecl
ConstructItems<FControlRigReplayVariable,FControlRigReplayVariable,int>
          (void *param_1,FControlRigReplayVariable *param_2,int param_3)

{
  uint uVar1;
  FString *this;
  FString *pFVar2;
  
  if (param_3 != 0) {
    this = (FString *)((longlong)param_1 + 0x10);
    pFVar2 = &param_2->Value;
    do {
      this[-1].Data.AllocatorInstance.Data =
           *(FScriptContainerElement **)
            ((longlong)this + (longlong)param_2 + (-0x10 - (longlong)param_1));
      uVar1 = pFVar2[-1].Data.ArrayMax;
      this[-1].Data.ArrayNum = pFVar2[-1].Data.ArrayNum;
      this[-1].Data.ArrayMax = uVar1;
      FString::FString(this,pFVar2);
      pFVar2 = pFVar2 + 2;
      this = this + 2;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FControlRigTestDataFrame,FControlRigTestDataFrame,int> @ 14a20d000

void __cdecl
ConstructItems<FControlRigTestDataFrame,FControlRigTestDataFrame,int>
          (void *param_1,FControlRigTestDataFrame *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  TSparseArray<TSparseSetElement<TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  int *piVar2;
  int iVar3;
  FControlRigReplayVariable *pFVar4;
  FScriptContainerElement *_Src;
  void *pvVar5;
  int *piVar6;
  int *piVar7;
  
  if (param_3 != 0) {
    piVar6 = (int *)((longlong)param_1 + 0x28);
    piVar7 = &(param_2->Pose).Elements.ArrayNum;
    do {
      pFVar1 = (ForAnyElementType *)(piVar6 + -6);
      *(undefined8 *)((longlong)piVar7 + (longlong)param_1 + (-0x28 - (longlong)param_2)) =
           *(undefined8 *)(piVar7 + -10);
      *(undefined8 *)(piVar6 + -8) = *(undefined8 *)(piVar7 + -8);
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar3 = piVar7[-4];
      pFVar4 = *(FControlRigReplayVariable **)(piVar7 + -6);
      piVar6[-4] = iVar3;
      if (iVar3 == 0) {
        piVar6[-3] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,iVar3,0,pFVar1,iVar3,piVar6 + -3);
        ConstructItems<FControlRigReplayVariable,FControlRigReplayVariable,int>
                  (pFVar1->Data,pFVar4,iVar3);
      }
      piVar6[-2] = 0;
      piVar6[-1] = 0;
      iVar3 = *piVar7;
      _Src = (((TArray<FRigPoseElement,TSizedDefaultAllocator<32>_> *)(piVar7 + -2))->
             AllocatorInstance).Data;
      *piVar6 = iVar3;
      if (iVar3 == 0) {
        piVar6[1] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x110,0x10,iVar3,0,(ForAnyElementType *)(piVar6 + -2),iVar3,piVar6 + 1);
        memcpy(((ForAnyElementType *)(piVar6 + -2))->Data,_Src,(longlong)iVar3 * 0x110);
      }
      piVar6[2] = piVar7[2];
      piVar6[3] = piVar7[3];
      piVar6[4] = piVar7[4];
      *(undefined8 *)
       &((TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
          *)(piVar6 + 6))->Elements = 0;
      piVar6[8] = 0;
      piVar6[9] = 0;
      piVar6[0xe] = 0;
      piVar6[0xf] = 0;
      piVar6[0x10] = 0;
      piVar6[0x11] = 0x80;
      piVar6[0x12] = -1;
      piVar6[0x13] = 0;
      piVar6[0x16] = 0;
      piVar6[0x17] = 0;
      piVar6[0x18] = 0;
      TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
                   *)(piVar6 + 6),
                  (TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
                   *)(piVar7 + 6));
      piVar6[0x1a] = 0;
      piVar6[0x1b] = 0;
      iVar3 = piVar7[0x1c];
      pvVar5 = *(void **)(piVar7 + 0x1a);
      piVar6[0x1c] = iVar3;
      if (iVar3 == 0) {
        piVar6[0x1d] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar3,0,(ForAnyElementType *)(piVar6 + 0x1a),iVar3,piVar6 + 0x1d);
        memcpy(((ForAnyElementType *)(piVar6 + 0x1a))->Data,pvVar5,(longlong)iVar3);
      }
      piVar6[0x1e] = 0;
      piVar6[0x1f] = 0;
      iVar3 = piVar7[0x20];
      pvVar5 = *(void **)(piVar7 + 0x1e);
      piVar6[0x20] = iVar3;
      if (iVar3 == 0) {
        piVar6[0x21] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,iVar3,0,(ForAnyElementType *)(piVar6 + 0x1e),iVar3,piVar6 + 0x21);
        memcpy(((ForAnyElementType *)(piVar6 + 0x1e))->Data,pvVar5,(longlong)iVar3 * 0x28);
      }
      piVar6[0x24] = 0;
      piVar6[0x25] = 0;
      this = (TSparseArray<TSparseSetElement<TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(piVar6 + 0x22);
      *(undefined8 *)this = 0;
      piVar6[0x2a] = 0;
      piVar6[0x2b] = 0;
      piVar6[0x2c] = 0;
      piVar6[0x2d] = 0x80;
      piVar6[0x2e] = -1;
      piVar6[0x2f] = 0;
      piVar6[0x32] = 0;
      piVar6[0x33] = 0;
      piVar6[0x34] = 0;
      if (this != (TSparseArray<TSparseSetElement<TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)(piVar7 + 0x22)) {
        UE::Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)(piVar6 + 0x30),piVar6 + 0x34,
                   (ForElementType<FSetElementId> *)(piVar7 + 0x30),piVar7[0x34]);
        TSparseArray<TSparseSetElement<TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::operator=(this,(TSparseArray<TSparseSetElement<TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)(piVar7 + 0x22));
      }
      piVar2 = piVar7 + 0x36;
      piVar7 = piVar7 + 0x42;
      *(char *)(piVar6 + 0x36) = (char)*piVar2;
      piVar6 = piVar6 + 0x42;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FModularRigSingleConnection,FModularRigSingleConnection,int> @ 14a20d2c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
ConstructItems<FModularRigSingleConnection,FModularRigSingleConnection,int>
          (void *param_1,FModularRigSingleConnection *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  int *piVar3;
  FRigElementKey *pFVar4;
  
  if (param_3 != 0) {
    piVar3 = (int *)((longlong)param_1 + 0x24);
    pFVar4 = &param_2->Target_DEPRECATED;
    do {
      pFVar1 = (ForAnyElementType *)(piVar3 + -3);
      *(undefined8 *)((longlong)param_1 + (-0xc - (longlong)param_2) + (longlong)pFVar4) =
           *(undefined8 *)&((FModularRigSingleConnection *)(pFVar4 + -1))->Connector;
      *(uint *)((longlong)param_1 + (-4 - (longlong)param_2) + (longlong)pFVar4) =
           (((FModularRigSingleConnection *)(pFVar4 + -1))->Connector).Name.Number;
      *(undefined8 *)(piVar3 + -6) = *(undefined8 *)pFVar4;
      piVar3[-4] = (pFVar4->Name).Number;
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar2 = ((TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)(pFVar4 + 1))->ArrayNum;
      _Src = (((TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)(pFVar4 + 1))->
             AllocatorInstance).Data;
      piVar3[-1] = iVar2;
      if (iVar2 == 0) {
        *piVar3 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,iVar2,0,pFVar1,iVar2,piVar3);
        memcpy(pFVar1->Data,_Src,(longlong)iVar2 * 0xc);
      }
      pFVar4 = (FRigElementKey *)((longlong)(pFVar4 + 3) + 4);
      piVar3 = piVar3 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FControlRigOverrideValue::FPropertyInfo,FControlRigOverrideValue::FPropertyInfo,int> @ 14a20d3c0

void __cdecl
ConstructItems<FControlRigOverrideValue::FPropertyInfo,FControlRigOverrideValue::FPropertyInfo,int>
          (void *param_1,FPropertyInfo *param_2,int param_3)

{
  int *piVar1;
  TWeakFieldPtr<FProperty> *this;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      this = (TWeakFieldPtr<FProperty> *)(lVar2 + (longlong)param_2);
      TWeakFieldPtr<FProperty>::TWeakFieldPtr<FProperty>(this,&param_2->Property);
      piVar1 = &param_2->ArrayIndex;
      param_2 = param_2 + 1;
      this[1].Owner.WeakPtr.ObjectIndex = *piVar1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FRigConnectionRuleStash,FRigConnectionRuleStash,int> @ 14a20d430

void __cdecl
ConstructItems<FRigConnectionRuleStash,FRigConnectionRuleStash,int>
          (void *param_1,FRigConnectionRuleStash *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      FString::FString((FString *)(lVar1 + (longlong)param_2),&param_2->ScriptStructPath);
      FString::FString((FString *)(lVar1 + 0x10 + (longlong)param_2),&param_2->ExportedText);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FRigElementResolveResult,FRigElementResolveResult,int> @ 14a20d490

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
ConstructItems<FRigElementResolveResult,FRigElementResolveResult,int>
          (void *param_1,FRigElementResolveResult *param_2,int param_3)

{
  uint *puVar1;
  ITextData *pIVar2;
  FText *pFVar3;
  longlong *plVar4;
  undefined1 local_res18 [16];
  
  if (param_3 != 0) {
    pFVar3 = &param_2->Message;
    plVar4 = (longlong *)((longlong)param_1 + 0x10);
    do {
      *(undefined8 *)((longlong)pFVar3 + (longlong)param_1 + (-0x10 - (longlong)param_2)) =
           *(undefined8 *)&((FRigElementResolveResult *)(pFVar3 + -1))->Key;
      *(uint *)((longlong)pFVar3 + (longlong)param_1 + (-8 - (longlong)param_2)) =
           (((FRigElementResolveResult *)(pFVar3 + -1))->Key).Name.Number;
      *(ERigElementResolveState *)((longlong)plVar4 + -4) =
           ((FRigElementResolveResult *)(pFVar3 + -1))->State;
      *plVar4 = 0;
      pIVar2 = (pFVar3->TextData).Reference;
      *plVar4 = (longlong)pIVar2;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res18);
      }
      puVar1 = &pFVar3->Flags;
      pFVar3 = pFVar3 + 2;
      *(uint *)(plVar4 + 1) = *puVar1;
      plVar4 = plVar4 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FRigHierarchyKey,FRigHierarchyKey,int> @ 14a20d530

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
ConstructItems<FRigHierarchyKey,FRigHierarchyKey,int>
          (void *param_1,FRigHierarchyKey *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  bool *pbVar4;
  char *pcVar5;
  
  if (param_3 != 0) {
    pcVar5 = (char *)((longlong)param_1 + 0xc);
    pbVar4 = &(param_2->Element).bIsSet;
    do {
      *pcVar5 = '\0';
      bVar1 = *pbVar4;
      *pcVar5 = bVar1;
      if (bVar1 != false) {
        *(undefined8 *)(pbVar4 + (longlong)param_1 + (-0xc - (longlong)param_2)) =
             *(undefined8 *)&((TOptional<FRigElementKey> *)(pbVar4 + -0xc))->TypedValue;
        *(uint *)(pbVar4 + (longlong)param_1 + (-4 - (longlong)param_2)) = *(uint *)(pbVar4 + -4);
      }
      pcVar5[0x18] = '\0';
      cVar2 = pbVar4[0x18];
      pcVar5[0x18] = cVar2;
      if (cVar2 != '\0') {
        uVar3 = *(undefined8 *)(pbVar4 + 0xc);
        *(undefined8 *)(pcVar5 + 4) = *(undefined8 *)(pbVar4 + 4);
        *(undefined8 *)(pcVar5 + 0xc) = uVar3;
        *(undefined4 *)(pcVar5 + 0x14) = *(undefined4 *)(pbVar4 + 0x14);
      }
      pcVar5 = pcVar5 + 0x28;
      pbVar4 = pbVar4 + 0x28;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FRigInfluenceEntry,FRigInfluenceEntry,int> @ 14a20d5b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
ConstructItems<FRigInfluenceEntry,FRigInfluenceEntry,int>
          (void *param_1,FRigInfluenceEntry *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar3;
  ForAnyElementType *pFVar4;
  
  if (param_3 != 0) {
    pTVar3 = &param_2->AffectedList;
    pFVar4 = (ForAnyElementType *)((longlong)param_1 + 0x10);
    do {
      *(undefined8 *)((longlong)param_1 + (-0x10 - (longlong)param_2) + (longlong)pTVar3) =
           *(undefined8 *)&((FRigInfluenceEntry *)(pTVar3 + -1))->Source;
      *(uint *)((longlong)param_1 + (-8 - (longlong)param_2) + (longlong)pTVar3) =
           (((FRigInfluenceEntry *)(pTVar3 + -1))->Source).Name.Number;
      piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
      pFVar4->Data = (FScriptContainerElement *)0x0;
      iVar2 = pTVar3->ArrayNum;
      _Src = (pTVar3->AllocatorInstance).Data;
      *(int *)&pFVar4[1].Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,iVar2,0,pFVar4,iVar2,piVar1);
        memcpy(pFVar4->Data,_Src,(longlong)iVar2 * 0xc);
      }
      pTVar3 = pTVar3 + 2;
      pFVar4 = pFVar4 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FRigInfluenceMap,FRigInfluenceMap,int> @ 14a20d690

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
ConstructItems<FRigInfluenceMap,FRigInfluenceMap,int>
          (void *param_1,FRigInfluenceMap *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FRigInfluenceEntry *pFVar3;
  FRigInfluenceMap *pFVar4;
  ForAnyElementType *pFVar5;
  TArray<FRigInfluenceEntry,TSizedDefaultAllocator<32>_> *pTVar6;
  
  if (param_3 != 0) {
    pFVar5 = (ForAnyElementType *)((longlong)param_1 + 8);
    pFVar4 = param_2;
    do {
      pTVar6 = &pFVar4->Entries;
      *(undefined8 *)((longlong)param_1 + (-8 - (longlong)param_2) + (longlong)pTVar6) =
           *(undefined8 *)((longlong)(pTVar6 + -1) + 8);
      piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
      pFVar5->Data = (FScriptContainerElement *)0x0;
      iVar2 = pTVar6->ArrayNum;
      pFVar3 = (FRigInfluenceEntry *)(pTVar6->AllocatorInstance).Data;
      *(int *)&pFVar5[1].Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,iVar2,0,pFVar5,iVar2,piVar1);
        ConstructItems<FRigInfluenceEntry,FRigInfluenceEntry,int>(pFVar5->Data,pFVar3,iVar2);
      }
      pFVar5[2].Data = (FScriptContainerElement *)0x0;
      pFVar5[3].Data = (FScriptContainerElement *)0x0;
      pFVar5[6].Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)&pFVar5[7].Data = 0;
      *(undefined4 *)((longlong)&pFVar5[7].Data + 4) = 0x80;
      *(undefined4 *)&pFVar5[8].Data = 0xffffffff;
      *(undefined4 *)((longlong)&pFVar5[8].Data + 4) = 0;
      pFVar5[10].Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)&pFVar5[0xb].Data = 0;
      TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
                   *)(pFVar5 + 2),
                  (TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
                   *)(pTVar6 + 1));
      pFVar5 = pFVar5 + 0xd;
      pFVar4 = (FRigInfluenceMap *)(pTVar6 + 6);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FRigModuleConnector,FRigModuleConnector,int> @ 14a20d7a0

void __cdecl
ConstructItems<FRigModuleConnector,FRigModuleConnector,int>
          (void *param_1,FRigModuleConnector *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      FString::FString((FString *)(lVar1 + (longlong)param_2),&param_2->Name);
      FRigConnectorSettings::FRigConnectorSettings
                ((FRigConnectorSettings *)(lVar1 + 0x10 + (longlong)param_2),&param_2->Settings);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FRigModuleReference,FRigModuleReference,int> @ 14a20d800

void __cdecl
ConstructItems<FRigModuleReference,FRigModuleReference,int>
          (void *param_1,FRigModuleReference *param_2,int param_3)

{
  FString *pFVar1;
  int *piVar2;
  FModularRigModel **ppFVar3;
  int iVar4;
  undefined8 uVar5;
  FScriptContainerElement *_Src;
  uint uVar6;
  FString *this;
  FString *pFVar7;
  
  if (param_3 != 0) {
    this = (FString *)((longlong)param_1 + 8);
    pFVar7 = &param_2->ShortName_DEPRECATED;
    do {
      *(undefined8 *)((longlong)pFVar7 + (longlong)param_1 + (-8 - (longlong)param_2)) =
           *(undefined8 *)((longlong)(pFVar7 + -1) + 8);
      FString::FString(this,pFVar7);
      *(bool *)&this[1].Data.AllocatorInstance.Data = *(bool *)(pFVar7 + 1);
      FString::FString((FString *)&this[1].Data.ArrayNum,(FString *)((longlong)(pFVar7 + 1) + 8));
      uVar5 = *(undefined8 *)((longlong)(pFVar7 + 2) + 8);
      this[2].Data.ArrayNum = (int)uVar5;
      this[2].Data.ArrayMax = (int)((ulonglong)uVar5 >> 0x20);
      this[3].Data.AllocatorInstance.Data =
           *(FScriptContainerElement **)&((TSoftClassPtr<UControlRig> *)(pFVar7 + 3))->SoftObjectPtr
      ;
      FSoftObjectPath::FSoftObjectPath
                ((FSoftObjectPath *)&this[3].Data.ArrayNum,
                 (FSoftObjectPath *)
                 &(((TSoftClassPtr<UControlRig> *)(pFVar7 + 3))->SoftObjectPtr).field_0x8);
      this[5].Data.ArrayNum = 0;
      this[5].Data.ArrayMax = 0;
      this[6].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      this[7].Data.ArrayNum = 0;
      this[7].Data.ArrayMax = 0;
      *(undefined4 *)&this[8].Data.AllocatorInstance.Data = 0;
      *(undefined4 *)((longlong)&this[8].Data.AllocatorInstance.Data + 4) = 0x80;
      this[8].Data.ArrayNum = -1;
      this[8].Data.ArrayMax = 0;
      this[9].Data.ArrayNum = 0;
      this[9].Data.ArrayMax = 0;
      *(undefined4 *)&this[10].Data.AllocatorInstance.Data = 0;
      TSet<TTuple<FRigElementKey,FRigElementKey>,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FRigElementKey,FRigElementKey>,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>,FDefaultSetAllocator>
                   *)&this[5].Data.ArrayNum,
                  (TSet<TTuple<FRigElementKey,FRigElementKey>,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>,FDefaultSetAllocator>
                   *)((longlong)(pFVar7 + 5) + 8));
      this[0xb].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      this[10].Data.ArrayNum = 0;
      this[10].Data.ArrayMax = 0;
      this[0xc].Data.ArrayNum = 0;
      this[0xc].Data.ArrayMax = 0;
      *(undefined4 *)&this[0xd].Data.AllocatorInstance.Data = 0;
      *(undefined4 *)((longlong)&this[0xd].Data.AllocatorInstance.Data + 4) = 0x80;
      this[0xd].Data.ArrayNum = -1;
      this[0xd].Data.ArrayMax = 0;
      this[0xe].Data.ArrayNum = 0;
      this[0xe].Data.ArrayMax = 0;
      *(undefined4 *)&this[0xf].Data.AllocatorInstance.Data = 0;
      TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                   *)&this[10].Data.ArrayNum,
                  (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                   *)((longlong)(pFVar7 + 10) + 8));
      FControlRigOverrideContainer::FControlRigOverrideContainer
                ((FControlRigOverrideContainer *)&this[0xf].Data.ArrayNum,
                 (FControlRigOverrideContainer *)((longlong)(pFVar7 + 0xf) + 8));
      this[0x25].Data.ArrayNum = 0;
      this[0x25].Data.ArrayMax = 0;
      *(undefined8 *)
       &((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
          *)(this + 0x25))->Elements = 0;
      this[0x27].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      this[0x27].Data.ArrayNum = 0;
      this[0x27].Data.ArrayMax = 0x80;
      *(undefined4 *)&this[0x28].Data.AllocatorInstance.Data = 0xffffffff;
      *(undefined4 *)((longlong)&this[0x28].Data.AllocatorInstance.Data + 4) = 0;
      this[0x29].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      this[0x29].Data.ArrayNum = 0;
      TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                   *)(this + 0x25),
                  (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                   *)(pFVar7 + 0x25));
      pFVar1 = this + 0x2b;
      *(FName *)(this + 0x2a) = *(FName *)(pFVar7 + 0x2a);
      uVar6 = pFVar7[0x2a].Data.ArrayMax;
      this[0x2a].Data.ArrayNum = pFVar7[0x2a].Data.ArrayNum;
      this[0x2a].Data.ArrayMax = uVar6;
      piVar2 = &this[0x2b].Data.ArrayMax;
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar4 = ((TArray<FRigModuleReference_*,TSizedDefaultAllocator<32>_> *)(pFVar7 + 0x2b))->
              ArrayNum;
      _Src = (((TArray<FRigModuleReference_*,TSizedDefaultAllocator<32>_> *)(pFVar7 + 0x2b))->
             AllocatorInstance).Data;
      this[0x2b].Data.ArrayNum = iVar4;
      if (iVar4 == 0) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar4,0,(ForAnyElementType *)pFVar1,iVar4,piVar2);
        memcpy((pFVar1->Data).AllocatorInstance.Data,_Src,(longlong)iVar4 << 3);
      }
      ppFVar3 = (FModularRigModel **)(pFVar7 + 0x2c);
      pFVar7 = pFVar7 + 0x2d;
      this[0x2c].Data.AllocatorInstance.Data = (FScriptContainerElement *)*ppFVar3;
      this = this + 0x2d;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FRigSocketState,FRigSocketState,int> @ 14a20da60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
ConstructItems<FRigSocketState,FRigSocketState,int>
          (void *param_1,FRigSocketState *param_2,int param_3)

{
  double dVar1;
  double *pdVar2;
  TTransform<double> *pTVar3;
  
  if (param_3 != 0) {
    pdVar2 = (double *)((longlong)param_1 + 0x20);
    pTVar3 = &param_2->InitialLocalTransform;
    do {
      pdVar2[-4] = *(double *)((longlong)pdVar2 + (longlong)param_2 + (-0x20 - (longlong)param_1));
      pdVar2[-3] = *(double *)((longlong)(pTVar3 + -1) + 0x48);
      *(undefined4 *)(pdVar2 + -2) = *(undefined4 *)((longlong)(pTVar3 + -1) + 0x50);
      dVar1 = (pTVar3->Rotation).XY.m128d_f64[1];
      *pdVar2 = (pTVar3->Rotation).XY.m128d_f64[0];
      pdVar2[1] = dVar1;
      dVar1 = (pTVar3->Rotation).ZW.m128d_f64[1];
      pdVar2[2] = (pTVar3->Rotation).ZW.m128d_f64[0];
      pdVar2[3] = dVar1;
      dVar1 = (pTVar3->Translation).XY.m128d_f64[1];
      pdVar2[4] = (pTVar3->Translation).XY.m128d_f64[0];
      pdVar2[5] = dVar1;
      dVar1 = (pTVar3->Translation).ZW.m128d_f64[1];
      pdVar2[6] = (pTVar3->Translation).ZW.m128d_f64[0];
      pdVar2[7] = dVar1;
      dVar1 = (pTVar3->Scale3D).XY.m128d_f64[1];
      pdVar2[8] = (pTVar3->Scale3D).XY.m128d_f64[0];
      pdVar2[9] = dVar1;
      dVar1 = (pTVar3->Scale3D).ZW.m128d_f64[1];
      pdVar2[10] = (pTVar3->Scale3D).ZW.m128d_f64[0];
      pdVar2[0xb] = dVar1;
      dVar1 = *(double *)((longlong)&((FLinearColor *)(pTVar3 + 1))->field0_0x0 + 8);
      pdVar2[0xc] = *(double *)&((FLinearColor *)(pTVar3 + 1))->field0_0x0;
      pdVar2[0xd] = dVar1;
      FString::FString((FString *)(pdVar2 + 0xe),(FString *)((FLinearColor *)(pTVar3 + 1) + 1));
      pTVar3 = (TTransform<double> *)((FLinearColor *)(pTVar3 + 1) + 4);
      pdVar2 = pdVar2 + 0x14;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,int> @ 14a20db20

void __cdecl
ConstructItems<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,int>
          (void *param_1,TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *param_2,int param_3)

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
                  (0xc,4,iVar2,0,param_1,iVar2,piVar1);
        memcpy(((ForAnyElementType *)param_1)->Data,_Src,(longlong)iVar2 * 0xc);
      }
      param_1 = (void *)((longlong)param_1 + 0x10);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TFunction<void___cdecl(URigHierarchy_*,UObject_const_*)>,TFunction<void___cdecl(URigHierarchy_*,UObject_const_*)>,int> @ 14a20dbd0

void __cdecl
ConstructItems<TFunction<void___cdecl(URigHierarchy_*,UObject_const_*)>,TFunction<void___cdecl(URigHierarchy_*,UObject_const_*)>,int>
          (void *param_1,TFunction<void___cdecl(URigHierarchy_*,UObject_const_*)> *param_2,
          int param_3)

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

// DefaultConstructItems<FControlRigOverrideValue,int> @ 14a20ecd0

void __cdecl DefaultConstructItems<FControlRigOverrideValue,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0xc);
    do {
      *(undefined8 *)(puVar1 + -3) = 0;
      puVar1[-1] = 0;
      *puVar1 = 0xffffffff;
      *(undefined8 *)(puVar1 + 1) = 0;
      puVar1[3] = 0;
      *(undefined8 *)(puVar1 + 4) = 0xffffffffffffffff;
      puVar1[6] = 0;
      *(undefined8 *)(puVar1 + 9) = 0;
      *(undefined8 *)(puVar1 + 0xb) = 0;
      *(undefined8 *)(puVar1 + 0xd) = 0;
      *(undefined8 *)(puVar1 + 0xf) = 0;
      puVar1 = puVar1 + 0x16;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FRigElementKey,int> @ 14a20ed20

void __cdecl DefaultConstructItems<FRigElementKey,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 8;
    do {
      *(undefined1 *)(lVar1 + -8) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      lVar1 = lVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FRigPhysicsSolverDescription,int> @ 14a20ed50

void __cdecl DefaultConstructItems<FRigPhysicsSolverDescription,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSoftObjectPtr<UControlRigShapeLibrary>,int> @ 14a20ee80

void __cdecl
DestructItems<TSoftObjectPtr<UControlRigShapeLibrary>,int>
          (TSoftObjectPtr<UControlRigShapeLibrary> *param_1,int param_2)

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

// DestructItems<FControlRigComponentMappedElement,int> @ 14a20eec0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
DestructItems<FControlRigComponentMappedElement,int>
          (FControlRigComponentMappedElement *param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = &(param_1->ComponentReference)._padding_;
    do {
      if ((void *)plVar1[6] != (void *)0x0) {
        FMemory::Free((void *)plVar1[6]);
      }
      if ((void *)*plVar1 != (void *)0x0) {
        FMemory::Free((void *)*plVar1);
      }
      plVar1 = plVar1 + 0x1e;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FControlRigOverrideValue,int> @ 14a20ef10

void __cdecl
DestructItems<FControlRigOverrideValue,int>(FControlRigOverrideValue *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<unsigned_char,TAlignedHeapAllocator<16>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->DataArray;
    do {
      FControlRigOverrideValue::Reset((FControlRigOverrideValue *)(pTVar2 + -4));
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<FControlRigOverrideValue::FPropertyInfo,int>
                ((FPropertyInfo *)
                 (((TArray<FControlRigOverrideValue::FPropertyInfo,TSizedDefaultAllocator<32>_> *)
                  (pTVar2 + -1))->AllocatorInstance).Data,
                 ((TArray<FControlRigOverrideValue::FPropertyInfo,TSizedDefaultAllocator<32>_> *)
                 (pTVar2 + -1))->ArrayNum);
      pFVar1 = (((TArray<FControlRigOverrideValue::FPropertyInfo,TSizedDefaultAllocator<32>_> *)
                (pTVar2 + -1))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if ((*(int *)((longlong)&((TOptional<FString> *)(pTVar2 + -3))->field0_0x0 + 0xc) != -1) &&
         (pFVar1 = (((TOptional<FString> *)(pTVar2 + -3))->field0_0x0).TypedValue.Data.
                   AllocatorInstance.Data, pFVar1 != (FScriptContainerElement *)0x0)) {
        FMemory::Free(pFVar1);
      }
      if ((*(int *)((longlong)&(((FControlRigOverrideValue *)(pTVar2 + -4))->Path).field0_0x0 + 0xc)
           != -1) &&
         (pFVar1 = (((FControlRigOverrideValue *)(pTVar2 + -4))->Path).field0_0x0.TypedValue.Data.
                   AllocatorInstance.Data, pFVar1 != (FScriptContainerElement *)0x0)) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<unsigned_char,TAlignedHeapAllocator<16>_> *)((longlong)(pTVar2 + 5) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FControlRigReplayVariable,int> @ 14a20efb0

void __cdecl
DestructItems<FControlRigReplayVariable,int>(FControlRigReplayVariable *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->Value;
    do {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FControlRigShapeDefinition,int> @ 14a20eff0

void __cdecl
DestructItems<FControlRigShapeDefinition,int>(FControlRigShapeDefinition *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->StaticMesh).SoftObjectPtr.field_0x18;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 0x14;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FControlRigTestDataFrame,int> @ 14a20f030

void __cdecl
DestructItems<FControlRigTestDataFrame,int>(FControlRigTestDataFrame *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->MetadataMap).field_0x40;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      if ((void *)puVar1[-10] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-10]);
      }
      if ((void *)puVar1[-0xc] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0xc]);
      }
      *(undefined4 *)(puVar1 + -0xd) = 0;
      if ((void *)puVar1[-0xe] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0xe]);
      }
      TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -0x16));
      if ((void *)puVar1[-0x1a] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x1a]);
      }
      DestructItems<FControlRigReplayVariable,int>
                ((FControlRigReplayVariable *)puVar1[-0x1c],*(int *)(puVar1 + -0x1b));
      if ((void *)puVar1[-0x1c] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x1c]);
      }
      puVar1 = puVar1 + 0x21;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FModularRigSingleConnection,int> @ 14a20f100

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
DestructItems<FModularRigSingleConnection,int>(FModularRigSingleConnection *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Targets;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + 2) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FModuleReferenceData,int> @ 14a20f140

void __cdecl DestructItems<FModuleReferenceData,int>(FModuleReferenceData *param_1,int param_2)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pvVar1 = *(void **)&(param_1->ReferencedModule).field_0x10;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    pFVar2 = (param_1->ModulePath).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FControlRigOverrideValue::FPropertyInfo,int> @ 14a20f190

void __cdecl
DestructItems<FControlRigOverrideValue::FPropertyInfo,int>(FPropertyInfo *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->Property).Field.field_0x10;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRigConnectionRuleStash,int> @ 14a20f1d0

void __cdecl
DestructItems<FRigConnectionRuleStash,int>(FRigConnectionRuleStash *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->ExportedText).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->ScriptStructPath).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FRigElementResolveResult,int> @ 14a20f220

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
DestructItems<FRigElementResolveResult,int>(FRigElementResolveResult *param_1,int param_2)

{
  ITextData *pIVar1;
  FText *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->Message;
    do {
      pIVar1 = (pFVar2->TextData).Reference;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))();
      }
      pFVar2 = pFVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRigInfluenceEntry,int> @ 14a20f260

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl DestructItems<FRigInfluenceEntry,int>(FRigInfluenceEntry *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->AffectedList;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRigInfluenceMap,int> @ 14a20f2a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl DestructItems<FRigInfluenceMap,int>(FRigInfluenceMap *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->KeyToIndex).field_0x40;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      DestructItems<FRigInfluenceEntry,int>((FRigInfluenceEntry *)puVar1[-10],*(int *)(puVar1 + -9))
      ;
      if ((void *)puVar1[-10] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-10]);
      }
      puVar1 = puVar1 + 0xd;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRigModuleConnector,int> @ 14a20f320

void __cdecl DestructItems<FRigModuleConnector,int>(FRigModuleConnector *param_1,int param_2)

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
      if (*(void **)((longlong)(pTVar2 + -3) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -3) + 8));
      }
      pTVar2 = (TArray<FRigConnectionRuleStash,TSizedDefaultAllocator<32>_> *)
               ((longlong)(pTVar2 + 3) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRigModuleInstance,int> @ 14a20f390

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl DestructItems<FRigModuleInstance,int>(FRigModuleInstance *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->VariableBindings).field_0x40;
    do {
      if ((void *)puVar1[3] != (void *)0x0) {
        FMemory::Free((void *)puVar1[3]);
      }
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FRigVMExternalVariable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FRigVMExternalVariable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,FRigVMExternalVariable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      if ((void *)puVar1[-0xb] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0xb]);
      }
      puVar1 = puVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRigModuleReference,int> @ 14a20f410

void __cdecl DestructItems<FRigModuleReference,int>(FRigModuleReference *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->Bindings).field_0x40;
    do {
      if ((void *)puVar1[4] != (void *)0x0) {
        FMemory::Free((void *)puVar1[4]);
      }
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      FControlRigOverrideContainer::~FControlRigOverrideContainer
                ((FControlRigOverrideContainer *)(puVar1 + -0x33));
      *(undefined4 *)(puVar1 + -0x34) = 0;
      if ((void *)puVar1[-0x35] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x35]);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -0x3d));
      *(undefined4 *)(puVar1 + -0x3e) = 0;
      if ((void *)puVar1[-0x3f] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x3f]);
      }
      TSparseArray<TSparseSetElement<TTuple<FRigElementKey,FRigElementKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,FRigElementKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,FRigElementKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -0x47));
      if ((void *)puVar1[-0x49] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x49]);
      }
      if ((void *)puVar1[-0x4f] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x4f]);
      }
      if ((void *)puVar1[-0x52] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x52]);
      }
      puVar1 = puVar1 + 0x5a;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRigSocketState,int> @ 14a20f510

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl DestructItems<FRigSocketState,int>(FRigSocketState *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->Description;
    do {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FSkeletalMeshToMap,int> @ 14a20f560

void __cdecl DestructItems<FSkeletalMeshToMap,int>(FSkeletalMeshToMap *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FControlRigComponentMappedBone,TSizedDefaultAllocator<32>_> *pTVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pTVar2 = &param_1->Bones;
    pFVar1 = (((TArray<FControlRigComponentMappedCurve,TSizedDefaultAllocator<32>_> *)(pTVar2 + 1))
             ->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (pTVar2->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = (FSkeletalMeshToMap *)(pTVar2 + 2);
  }
  return;
}

// DestructItems<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,int> @ 14a20f5b0

void __cdecl
DestructItems<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,int>
          (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *param_1,int param_2)

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

// DestructItems<TFunction<void___cdecl(URigHierarchy_*,UObject_const_*)>,int> @ 14a20f5f0

void __cdecl
DestructItems<TFunction<void___cdecl(URigHierarchy_*,UObject_const_*)>,int>
          (TFunction<void___cdecl(URigHierarchy_*,UObject_const_*)> *param_1,int param_2)

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

// DuplicateObject<UTransformableControlHandle> @ 14a20f640

UTransformableControlHandle * __cdecl
DuplicateObject<UTransformableControlHandle>
          (UTransformableControlHandle *param_1,UObject *param_2,FName param_3)

{
  UClass *pUVar1;
  UTransformableControlHandle *pUVar2;
  
  pUVar1 = UTransformableControlHandle::StaticClass();
  pUVar2 = (UTransformableControlHandle *)
           DuplicateObject_Internal(pUVar1,(UObject *)param_1,param_2,param_3);
  return pUVar2;
}

// FilterByPredicate<`UModularRigController::DeleteModule'::__l59::<lambda_2>_> @ 14a2140e0

TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> * __thiscall
TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>::
FilterByPredicate<_UModularRigController::DeleteModule_::__l59::<lambda_2>_>
          (TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           *this,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                 *__return_storage_ptr__,<lambda_2> *param_1)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *pTVar4
  ;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *pTVar8;
  TStringView<wchar_t> *pTVar9;
  int iVar10;
  undefined1 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  undefined8 *puVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined1 *puVar20;
  uint *puVar21;
  uint uVar22;
  FName *pFVar23;
  undefined1 local_res10 [8];
  <lambda_2> *local_res18;
  undefined4 local_res20;
  uint local_148;
  uint uStack_144;
  uint uStack_134;
  uint uStack_130;
  undefined4 uStack_12c;
  FRigHierarchyModulePath local_128;
  TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
  *local_e8;
  uint uStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  int local_b8;
  int local_b4;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *local_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_a8;
  TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  TStringView<wchar_t> local_58;
  ulonglong uVar19;
  
  uVar19 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  uVar14 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  uVar17 = 0;
  local_res18 = param_1;
  if (uVar14 == 0) goto LAB_14a214368;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar14);
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,uVar14);
  if (uVar14 < 4) {
    uVar18 = 1;
  }
  else {
    uVar18 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res20 = (undefined4)lVar12;
    uVar18 = (ulonglong)(uint)(1 << ((byte)lVar12 & 0x1f));
  }
  uVar14 = (uint)uVar18;
  if ((*(int *)&__return_storage_ptr__->field_0x48 != 0) &&
     ((int)uVar14 <= *(int *)&__return_storage_ptr__->field_0x48)) goto LAB_14a214368;
  *(uint *)&__return_storage_ptr__->field_0x48 = uVar14;
  if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,0,4);
  }
  if (uVar14 != 0) {
    uVar22 = uVar14;
    if (uVar14 < 2) {
      if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
        uVar22 = 0;
        goto LAB_14a2141c1;
      }
    }
    else {
LAB_14a2141c1:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,uVar22,4);
    }
    if (0 < (int)uVar14) {
      uVar13 = uVar19;
      do {
        puVar11 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar11 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar7 = uVar13 & (longlong)(int)uVar14 - 1U;
        uVar13 = uVar13 + 1;
        *(undefined4 *)(puVar11 + uVar7 * 4) = 0xffffffff;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
  }
  if (*(int *)&__return_storage_ptr__->field_0x48 != 0) {
    uVar14 = *(uint *)&__return_storage_ptr__->field_0x28;
    local_a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)&__return_storage_ptr__->field_0x10;
    uStack_144 = 1;
    local_148 = 0;
    uStack_134 = 0;
    uStack_130 = 0;
    uVar18 = uVar19;
    if (uVar14 != 0) {
      puVar21 = *(uint **)&__return_storage_ptr__->field_0x20;
      if (*(uint **)&__return_storage_ptr__->field_0x20 == (uint *)0x0) {
        puVar21 = (uint *)local_a8.Array;
      }
      uVar22 = *puVar21;
      uVar13 = uVar19;
      while (uVar22 == 0) {
        uStack_130 = (int)uVar13 + 0x20;
        uVar13 = (ulonglong)uStack_130;
        iVar10 = (int)uVar18;
        local_148 = iVar10 + 1;
        uVar18 = (ulonglong)local_148;
        if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_148)
        goto LAB_14a2142c2;
        uVar22 = puVar21[(longlong)iVar10 + 1];
      }
      uStack_144 = -uVar22 & uVar22;
      uVar18 = (ulonglong)uStack_144 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_b8 = (int)lVar12;
      uStack_134 = local_b8 + -1 + uStack_130;
      uVar18 = (ulonglong)uStack_134;
      if ((int)uVar14 < (int)uStack_134) {
LAB_14a2142c2:
        uVar18 = (ulonglong)uVar14;
        uStack_134 = uVar14;
      }
    }
    local_a8._padding_ = CONCAT44(uStack_144,local_148);
    local_a8.CurrentBitIndex = uStack_134;
    local_a8.UnvisitedBitMask = 0xffffffff;
    local_a8._28_4_ = uStack_12c;
    local_a8.BaseBitIndex = uStack_130;
    local_b0 = __return_storage_ptr__;
    if ((int)uVar18 < (int)uVar14) {
      do {
        puVar16 = (undefined8 *)((longlong)(int)uVar18 * 0x20 + *(longlong *)local_b0);
        uVar1 = *puVar16;
        uVar14 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
        uVar14 = *(int *)&__return_storage_ptr__->field_0x48 - 1U &
                 uVar14 + (int)((ulonglong)uVar1 >> 0x20);
        *(uint *)((longlong)puVar16 + 0x1c) = uVar14;
        puVar11 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar11 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar13 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar14;
        *(undefined4 *)(puVar16 + 3) = *(undefined4 *)(puVar11 + uVar13 * 4);
        *(int *)(puVar11 + uVar13 * 4) = (int)uVar18;
        local_a8.UnvisitedBitMask = local_a8.UnvisitedBitMask & ~local_a8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_a8);
        uVar18 = (ulonglong)(uint)local_a8.CurrentBitIndex;
      } while (local_a8.CurrentBitIndex < (local_a8.Array)->NumBits);
    }
  }
LAB_14a214368:
  iVar10 = *(int *)&(this->Pairs).Elements.field_0x28;
  puVar11 = &(this->Pairs).Elements.field_0x10;
  local_c8 = 0;
  iStack_cc = 0;
  uStack_dc = 1;
  if (iVar10 != 0) {
    puVar21 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar11;
    }
    uVar14 = *puVar21;
    uVar17 = 0;
    while (uVar14 == 0) {
      iVar15 = (int)uVar19;
      local_c8 = local_c8 + 0x20;
      uVar17 = iVar15 + 1;
      uVar19 = (ulonglong)uVar17;
      iStack_cc = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar17) goto LAB_14a2143de;
      uVar14 = puVar21[(longlong)iVar15 + 1];
    }
    uStack_dc = -uVar14 & uVar14;
    uVar19 = (ulonglong)uStack_dc * 2 + 1;
    lVar12 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_b4 = (int)lVar12;
    iStack_cc = local_c8 + -1 + local_b4;
    if (iVar10 < iStack_cc) {
      iStack_cc = iVar10;
    }
  }
LAB_14a2143de:
  iStack_c0 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34
  ;
  uVar14 = *(uint *)&(this->Pairs).Elements.field_0x28;
  TStack_80._padding_ = CONCAT44(uStack_dc,uVar17);
  uVar22 = uVar14 & 0xffffffe0;
  uStack_d0 = 0xffffffff;
  TStack_80.CurrentBitIndex = iStack_cc;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar14 >> 5;
  TStack_80._28_4_ = iStack_cc;
  TStack_80.BaseBitIndex = local_c8;
  uStack_60 = CONCAT44(uStack_bc,iStack_c0);
  local_e8 = this;
  uStack_e0 = uVar17;
  local_d8 = puVar11;
  iStack_c4 = iStack_cc;
  local_88 = this;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar11;
  if ((((int)uVar14 < 0) || (iVar10 < (int)uVar14)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              *)(*pcVar3)();
    return pTVar8;
  }
  uVar17 = *(uint *)&(this->Pairs).Elements.field_0x28;
  if (uVar14 != uVar17) {
    puVar20 = *(undefined1 **)&(this->Pairs).Elements.field_0x20;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = puVar11;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar15 * 4);
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar15;
      uVar22 = uVar22 + 0x20;
      iVar15 = iVar15 + 1;
      uVar14 = uVar17;
      if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_14a2144e0;
      uVar14 = *(uint *)(puVar20 + lVar12 * 4 + 4);
    }
    uVar19 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar14 = (int)lVar12 + -1 + uVar22;
    if ((int)uVar17 < (int)uVar14) {
      uVar14 = uVar17;
    }
  }
LAB_14a2144e0:
  while( true ) {
    pTVar4 = local_88;
    if (*(int *)&(local_88->Pairs).Elements.field_0x8 -
        *(int *)&(local_88->Pairs).Elements.field_0x34 != (int)uStack_60) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_80.CurrentBitIndex == uVar14) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar11)) && (pTVar4 == this))
    break;
    pFVar23 = (FName *)((longlong)TStack_80.CurrentBitIndex * 0x20 +
                       *(longlong *)&(pTVar4->Pairs).Elements);
    ::FString::FString(&local_128.ModulePath,(FString *)(pFVar23 + 1));
    local_128.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax = -1;
    local_128.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
         (ForAnyElementType)(FScriptContainerElement *)0x0;
    local_128.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
    local_128.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
         (ForAnyElementType)(FScriptContainerElement *)0x0;
    local_128.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
    local_128.CachedModuleFName.field0_0x0.TypedValue.Number = 0;
    local_128.CachedElementFName.field0_0x0.TypedValue.Number = 0;
    local_128._44_8_ = 0xffffffffffffffff;
    local_128.CachedElementFName.field0_0x0.TypedValue.ComparisonIndex.Value =
         (FNameEntryId)0xffffffff;
    pTVar9 = FRigHierarchyModulePath::GetModuleName(&local_128,&local_58);
    iVar10 = (local_res18->ModuleNameString).Data.ArrayNum;
    iVar15 = iVar10 + -1;
    if (iVar10 == 0) {
      iVar15 = 0;
    }
    iVar10 = pTVar9->Size;
    if ((iVar10 == iVar15) &&
       ((((iVar10 == 0 || (iVar15 == 0)) ||
         (iVar6 = FGenericPlatformStricmp::Strnicmp
                            (pTVar9->DataPtr,
                             (wchar_t *)(local_res18->ModuleNameString).Data.AllocatorInstance.Data,
                             (longlong)iVar15), iVar6 == 0)) && (iVar10 == iVar15)))) {
      if ((local_128.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
         (local_128.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0)) {
        FMemory::Free((void *)local_128.CachedElementNameString.field0_0x0.TypedValue.Data.
                              AllocatorInstance.Data);
      }
      if ((local_128.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
         (local_128.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0)) {
        FMemory::Free((void *)local_128.CachedModuleNameString.field0_0x0.TypedValue.Data.
                              AllocatorInstance.Data);
      }
      if (local_128.ModulePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.ModulePath.Data.AllocatorInstance.Data);
      }
    }
    else {
      if ((local_128.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
         (local_128.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0)) {
        FMemory::Free((void *)local_128.CachedElementNameString.field0_0x0.TypedValue.Data.
                              AllocatorInstance.Data);
      }
      if ((local_128.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
         (local_128.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0)) {
        FMemory::Free((void *)local_128.CachedModuleNameString.field0_0x0.TypedValue.Data.
                              AllocatorInstance.Data);
      }
      if (local_128.ModulePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.ModulePath.Data.AllocatorInstance.Data);
      }
      Emplace<FName_const_&,FString_const_&>
                ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                  *)__return_storage_ptr__,pFVar23,(FString *)(pFVar23 + 1));
    }
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  }
  pFVar2 = (local_res18->ModuleNameString).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return __return_storage_ptr__;
}

// FindByPredicate<`UModularRigController::CanConnectConnectorToElements'::__l2::<lambda_1>_> @ 14a214880

FRigModuleConnector * __thiscall
TArray<FRigModuleConnector,TSizedDefaultAllocator<32>_>::
FindByPredicate<_UModularRigController::CanConnectConnectorToElements_::__l2::<lambda_1>_>
          (TArray<FRigModuleConnector,TSizedDefaultAllocator<32>_> *this,<lambda_1> param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  FName *pFVar4;
  FString *pFVar5;
  int iVar6;
  FRigModuleConnector *pFVar7;
  FRigModuleConnector *pFVar8;
  undefined4 uStack_3c;
  TStringView<wchar_t> local_38;
  FString local_28;
  
  pFVar8 = (FRigModuleConnector *)(this->AllocatorInstance).Data;
  pFVar7 = pFVar8 + this->ArrayNum;
  while( true ) {
    if (pFVar8 == pFVar7) {
      return (FRigModuleConnector *)0x0;
    }
    pFVar4 = FRigHierarchyModulePath::GetElementFName(param_1.ConnectorModulePath);
    pFVar5 = ::FString::FString(&local_28,&pFVar8->Name);
    local_38.DataPtr = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    iVar1 = (pFVar5->Data).ArrayNum;
    iVar6 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar6 = 0;
    }
    local_38._12_4_ = uStack_3c;
    local_38.Size = iVar6;
    bVar3 = ::FName::Equals(*pFVar4,&local_38);
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    if (bVar3) break;
    pFVar8 = pFVar8 + 1;
  }
  return pFVar8;
}

// FindByPredicate<`UModularRigController::DisconnectConnector_Internal'::__l2::<lambda_1>_> @ 14a214950

FRigModuleConnector * __thiscall
TArray<FRigModuleConnector,TSizedDefaultAllocator<32>_>::
FindByPredicate<_UModularRigController::DisconnectConnector_Internal_::__l2::<lambda_1>_>
          (TArray<FRigModuleConnector,TSizedDefaultAllocator<32>_> *this,<lambda_1> param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  FString *pFVar4;
  int iVar5;
  FRigModuleConnector *pFVar6;
  FRigModuleConnector *pFVar7;
  undefined4 uStack_3c;
  TStringView<wchar_t> local_38;
  FString local_28;
  
  pFVar7 = (FRigModuleConnector *)(this->AllocatorInstance).Data;
  pFVar6 = pFVar7 + this->ArrayNum;
  while( true ) {
    if (pFVar7 == pFVar6) {
      return (FRigModuleConnector *)0x0;
    }
    pFVar4 = ::FString::FString(&local_28,&pFVar7->Name);
    local_38.DataPtr = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    iVar1 = (pFVar4->Data).ArrayNum;
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    local_38._12_4_ = uStack_3c;
    local_38.Size = iVar5;
    bVar3 = ::FName::Equals(param_1.ConnectorName,&local_38);
    pFVar2 = (pFVar4->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    if (bVar3) break;
    pFVar7 = pFVar7 + 1;
  }
  return pFVar7;
}

// FindByPredicate<`FModularRigModel::FindModuleByPath'::__l2::<lambda_1>_> @ 14a214a10

FRigModuleReference * __thiscall
TArray<FRigModuleReference,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FModularRigModel::FindModuleByPath_::__l2::<lambda_1>_>
          (TArray<FRigModuleReference,TSizedDefaultAllocator<32>_> *this,<lambda_1> *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FRigModuleReference *pFVar3;
  FRigModuleReference *pFVar4;
  
  pFVar3 = (FRigModuleReference *)(this->AllocatorInstance).Data;
  pFVar4 = pFVar3 + this->ArrayNum;
  while( true ) {
    if (pFVar3 == pFVar4) {
      pFVar1 = (param_1->InModulePath).Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      return (FRigModuleReference *)0x0;
    }
    bVar2 = `FModularRigModel::FindModuleByPath'::__l2::<lambda_1>::operator()(param_1,pFVar3);
    if (bVar2) break;
    pFVar3 = pFVar3 + 1;
  }
  pFVar1 = (param_1->InModulePath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return pFVar3;
}

// FindByPredicate<`UModularRigController::SwapModuleClass'::__l77::<lambda_1>_> @ 14a214aa0

FRigModuleConnector * __thiscall
TArray<FRigModuleConnector,TSizedDefaultAllocator<32>_>::
FindByPredicate<_UModularRigController::SwapModuleClass_::__l77::<lambda_1>_>
          (TArray<FRigModuleConnector,TSizedDefaultAllocator<32>_> *this,<lambda_1> param_1)

{
  int iVar1;
  int iVar2;
  TStringView<wchar_t> *pTVar3;
  int iVar4;
  FRigModuleConnector *pFVar5;
  FRigModuleConnector *pFVar6;
  TStringView<wchar_t> local_28;
  
  pFVar5 = (FRigModuleConnector *)(this->AllocatorInstance).Data;
  pFVar6 = pFVar5 + this->ArrayNum;
  while( true ) {
    if (pFVar5 == pFVar6) {
      return (FRigModuleConnector *)0x0;
    }
    pTVar3 = FRigHierarchyModulePath::GetElementName(param_1.ConnectorModulePath,&local_28);
    iVar2 = (pFVar5->Name).Data.ArrayNum;
    iVar1 = pTVar3->Size;
    iVar4 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar4 = 0;
    }
    if (((iVar1 == iVar4) &&
        (((iVar1 == 0 || (iVar4 == 0)) ||
         (iVar2 = FGenericPlatformStricmp::Strnicmp
                            (pTVar3->DataPtr,(wchar_t *)(pFVar5->Name).Data.AllocatorInstance.Data,
                             (longlong)iVar4), iVar2 == 0)))) && (iVar1 == iVar4)) break;
    pFVar5 = pFVar5 + 1;
  }
  return pFVar5;
}

// GetTypeName<AControlRigShapeActor> @ 14a216bd0

FString * __cdecl GetTypeName<AControlRigShapeActor>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = AControlRigShapeActor::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UControlRig> @ 14a216c10

FString * __cdecl GetTypeName<UControlRig>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UControlRig::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSiftDown<int,int,``FControlRigStats::Dump'::__l2::FCounterTree::Dump'::__l2::<lambda_1>,TReversePredicate<TLess<void>_>_> @ 14a216c50

void __cdecl
AlgoImpl::
HeapSiftDown<int,int,__FControlRigStats::Dump_::__l2::FCounterTree::Dump_::__l2::<lambda_1>,TReversePredicate<TLess<void>_>_>
          (int *param_1,int param_2,int param_3,<lambda_1> *param_4,
          TReversePredicate<TLess<void>_> *param_5)

{
  double dVar1;
  int iVar2;
  TArray<_public:_void___cdecl_FControlRigStats::Dump(void)_::_2_::FCounterTree_*,TSizedDefaultAllocator<32>_>
  *pTVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  dVar5 = __real_40f86a0000000000;
  pTVar3 = param_4->LocalChildren;
  do {
    iVar2 = param_2 * 2;
    if (param_3 <= iVar2 + 1) {
      return;
    }
    iVar9 = iVar2;
    if (iVar2 + 2 < param_3) {
      uVar8 = param_1[(longlong)iVar2 + 2];
      uVar7 = 0;
      if ((int)uVar8 < pTVar3->ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      dVar1 = *(double *)
               (*(longlong *)((pTVar3->AllocatorInstance).Data + (longlong)(int)uVar8 * 8) + 8);
      uVar8 = param_1[(longlong)iVar2 + 1];
      uVar7 = 0;
      if ((int)uVar8 < pTVar3->ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar9 = iVar2 + 1;
      if (0x7fffffff - (int)(dVar1 * dVar5) <
          0x7fffffff -
          (int)(*(double *)
                 (*(longlong *)((pTVar3->AllocatorInstance).Data + (longlong)(int)uVar8 * 8) + 8) *
               dVar5)) {
        iVar9 = iVar2;
      }
    }
    uVar8 = param_1[param_2];
    uVar7 = 0;
    if ((int)uVar8 < pTVar3->ArrayNum) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar7 = param_1[(longlong)iVar9 + 1];
    dVar1 = *(double *)
             (*(longlong *)((pTVar3->AllocatorInstance).Data + (longlong)(int)uVar8 * 8) + 8);
    uVar8 = 0;
    if ((int)uVar7 < pTVar3->ArrayNum) {
      uVar8 = ~uVar7 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (0x7fffffff -
        (int)(*(double *)
               (*(longlong *)((pTVar3->AllocatorInstance).Data + (longlong)(int)uVar7 * 8) + 8) *
             dVar5) <= 0x7fffffff - (int)(dVar1 * dVar5)) {
      return;
    }
    iVar2 = param_1[param_2];
    param_1[param_2] = param_1[(longlong)iVar9 + 1];
    param_1[(longlong)iVar9 + 1] = iVar2;
    param_2 = iVar9 + 1;
  } while( true );
}

// HeapSiftDown<FRigModuleReference,int,`UModularRigController::ReorderModule'::__l2::<lambda_1>,TReversePredicate<TLess<void>_>_> @ 14a216ee0

void __cdecl
AlgoImpl::
HeapSiftDown<FRigModuleReference,int,_UModularRigController::ReorderModule_::__l2::<lambda_1>,TReversePredicate<TLess<void>_>_>
          (FRigModuleReference *param_1,int param_2,int param_3,<lambda_1> *param_4,
          TReversePredicate<TLess<void>_> *param_5)

{
  FName *pFVar1;
  FScriptContainerElement *pFVar2;
  FName FVar3;
  FName FVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool bVar15;
  undefined7 uVar16;
  FNameEntryId FVar17;
  uint uVar18;
  FNameEntryId FVar19;
  uint uVar20;
  FNameEntryId FVar21;
  uint uVar22;
  FNameEntryId FVar23;
  uint uVar24;
  FName *pFVar25;
  FRigModuleReference *pFVar26;
  int iVar27;
  ForAnyElementType FVar28;
  FRigModuleReference *pFVar29;
  FRigModuleReference *pFVar30;
  FName *pFVar31;
  FRigModuleReference *pFVar32;
  int iVar33;
  longlong lVar34;
  int iVar35;
  int iVar36;
  ForAnyElementType local_2f8;
  int local_2f0;
  int local_2ec;
  FName local_2e8 [90];
  
  local_2f0 = (param_4->AllModuleNames).ArrayNum;
  lVar34 = (longlong)local_2f0;
  pFVar2 = (param_4->AllModuleNames).AllocatorInstance.Data;
  local_2f8.Data = (FScriptContainerElement *)0x0;
  if (local_2f0 == 0) {
    local_2ec = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_2f0,0,&local_2f8,local_2f0,&local_2ec);
    memcpy(local_2f8.Data,pFVar2,lVar34 << 3);
  }
  if (param_2 * 2 + 1 < param_3) {
    pFVar1 = (FName *)(local_2f8.Data + (longlong)local_2f0 * 8);
    do {
      iVar27 = param_2 * 2;
      iVar35 = iVar27 + 1;
      if (iVar27 + 2 < param_3) {
        if ((FName *)local_2f8.Data != pFVar1) {
          FVar28.Data = local_2f8.Data;
          do {
            if (*(FName *)FVar28.Data == param_1[(longlong)iVar27 + 2].Name) {
              iVar33 = (int)((longlong)FVar28.Data - (longlong)local_2f8.Data >> 3);
              goto LAB_14a216ff3;
            }
            FVar28.Data = FVar28.Data + 8;
          } while ((FName *)FVar28.Data != pFVar1);
        }
        iVar36 = -1;
        iVar33 = -1;
        if ((FName *)local_2f8.Data != pFVar1) {
LAB_14a216ff3:
          iVar36 = iVar33;
          FVar28.Data = local_2f8.Data;
          do {
            if (*(FName *)FVar28.Data == param_1[iVar35].Name) {
              iVar33 = (int)((longlong)FVar28.Data - (longlong)local_2f8.Data >> 3);
              goto LAB_14a217018;
            }
            FVar28.Data = FVar28.Data + 8;
          } while ((FName *)FVar28.Data != pFVar1);
        }
        iVar33 = -1;
LAB_14a217018:
        if (iVar36 < iVar33) {
          iVar35 = iVar27;
        }
        iVar35 = iVar35 + 1;
      }
      if ((FName *)local_2f8.Data != pFVar1) {
        FVar28.Data = local_2f8.Data;
        do {
          if (*(FName *)FVar28.Data == param_1[param_2].Name) {
            iVar27 = (int)((longlong)FVar28.Data - (longlong)local_2f8.Data >> 3);
            goto LAB_14a217063;
          }
          FVar28.Data = FVar28.Data + 8;
        } while ((FName *)FVar28.Data != pFVar1);
      }
      iVar33 = -1;
      iVar27 = -1;
      if ((FName *)local_2f8.Data != pFVar1) {
LAB_14a217063:
        iVar33 = iVar27;
        FVar28.Data = local_2f8.Data;
        do {
          if (*(FName *)FVar28.Data == param_1[iVar35].Name) {
            iVar27 = (int)((longlong)FVar28.Data - (longlong)local_2f8.Data >> 3);
            goto LAB_14a217088;
          }
          FVar28.Data = FVar28.Data + 8;
        } while ((FName *)FVar28.Data != pFVar1);
      }
      iVar27 = -1;
LAB_14a217088:
      if (iVar27 <= iVar33) break;
      lVar34 = 5;
      pFVar26 = param_1 + param_2;
      pFVar25 = local_2e8;
      do {
        pFVar31 = pFVar25;
        pFVar29 = pFVar26;
        pFVar25 = pFVar31 + 0x10;
        FVar3 = (FName)(pFVar29->ShortName_DEPRECATED).Data.AllocatorInstance.Data;
        iVar27 = (pFVar29->ShortName_DEPRECATED).Data.ArrayNum;
        iVar33 = (pFVar29->ShortName_DEPRECATED).Data.ArrayMax;
        FVar4 = *(FName *)&pFVar29->bShortNameBasedOnPath_DEPRECATED;
        *pFVar31 = pFVar29->Name;
        pFVar31[1] = FVar3;
        FVar3 = (FName)(pFVar29->ParentPath_DEPRECATED).Data.AllocatorInstance.Data;
        iVar36 = (pFVar29->ParentPath_DEPRECATED).Data.ArrayNum;
        iVar6 = (pFVar29->ParentPath_DEPRECATED).Data.ArrayMax;
        pFVar31[2].ComparisonIndex = (FNameEntryId)iVar27;
        pFVar31[2].Number = iVar33;
        pFVar31[3] = FVar4;
        FVar4 = pFVar29->ParentModuleName;
        uVar7 = *(undefined4 *)&(pFVar29->Class).SoftObjectPtr.field_0x0;
        uVar8 = *(undefined4 *)&(pFVar29->Class).SoftObjectPtr.field_0x4;
        pFVar31[4] = FVar3;
        pFVar31[5].ComparisonIndex = (FNameEntryId)iVar36;
        pFVar31[5].Number = iVar6;
        uVar9 = *(undefined4 *)&(pFVar29->Class).SoftObjectPtr.field_0x8;
        uVar10 = *(undefined4 *)&(pFVar29->Class).SoftObjectPtr.field_0xc;
        uVar11 = *(undefined4 *)&(pFVar29->Class).SoftObjectPtr.field_0x10;
        uVar12 = *(undefined4 *)&(pFVar29->Class).SoftObjectPtr.field_0x14;
        pFVar31[6] = FVar4;
        pFVar31[7].ComparisonIndex = (FNameEntryId)uVar7;
        pFVar31[7].Number = uVar8;
        uVar7 = *(undefined4 *)&(pFVar29->Class).SoftObjectPtr.field_0x18;
        uVar8 = *(undefined4 *)&(pFVar29->Class).SoftObjectPtr.field_0x1c;
        uVar13 = *(undefined4 *)&(pFVar29->Class).SoftObjectPtr.field_0x20;
        uVar14 = *(undefined4 *)&(pFVar29->Class).SoftObjectPtr.field_0x24;
        pFVar31[8].ComparisonIndex = (FNameEntryId)uVar9;
        pFVar31[8].Number = uVar10;
        pFVar31[9].ComparisonIndex = (FNameEntryId)uVar11;
        pFVar31[9].Number = uVar12;
        uVar9 = *(undefined4 *)&(pFVar29->Connections_DEPRECATED).field_0x0;
        uVar10 = *(undefined4 *)&(pFVar29->Connections_DEPRECATED).field_0x4;
        uVar11 = *(undefined4 *)&(pFVar29->Connections_DEPRECATED).field_0x8;
        uVar12 = *(undefined4 *)&(pFVar29->Connections_DEPRECATED).field_0xc;
        pFVar31[10].ComparisonIndex = (FNameEntryId)uVar7;
        pFVar31[10].Number = uVar8;
        pFVar31[0xb].ComparisonIndex = (FNameEntryId)uVar13;
        pFVar31[0xb].Number = uVar14;
        uVar7 = *(undefined4 *)&(pFVar29->Connections_DEPRECATED).field_0x10;
        uVar8 = *(undefined4 *)&(pFVar29->Connections_DEPRECATED).field_0x14;
        uVar13 = *(undefined4 *)&(pFVar29->Connections_DEPRECATED).field_0x18;
        uVar14 = *(undefined4 *)&(pFVar29->Connections_DEPRECATED).field_0x1c;
        pFVar31[0xc].ComparisonIndex = (FNameEntryId)uVar9;
        pFVar31[0xc].Number = uVar10;
        pFVar31[0xd].ComparisonIndex = (FNameEntryId)uVar11;
        pFVar31[0xd].Number = uVar12;
        pFVar31[0xe].ComparisonIndex = (FNameEntryId)uVar7;
        pFVar31[0xe].Number = uVar8;
        pFVar31[0xf].ComparisonIndex = (FNameEntryId)uVar13;
        pFVar31[0xf].Number = uVar14;
        lVar34 = lVar34 + -1;
        pFVar26 = (FRigModuleReference *)&(pFVar29->Connections_DEPRECATED).field_0x20;
      } while (lVar34 != 0);
      uVar7 = *(undefined4 *)&(pFVar29->Connections_DEPRECATED).field_0x24;
      uVar8 = *(undefined4 *)&(pFVar29->Connections_DEPRECATED).field_0x28;
      uVar9 = *(undefined4 *)&(pFVar29->Connections_DEPRECATED).field_0x2c;
      uVar10 = *(undefined4 *)&(pFVar29->Connections_DEPRECATED).field_0x30;
      uVar11 = *(undefined4 *)&(pFVar29->Connections_DEPRECATED).field_0x34;
      uVar12 = *(undefined4 *)&(pFVar29->Connections_DEPRECATED).field_0x38;
      uVar13 = *(undefined4 *)&(pFVar29->Connections_DEPRECATED).field_0x3c;
      pFVar25->ComparisonIndex =
           (FNameEntryId)*(undefined4 *)&(pFVar29->Connections_DEPRECATED).field_0x20;
      pFVar25->Number = uVar7;
      pFVar31[0x11].ComparisonIndex = (FNameEntryId)uVar8;
      pFVar31[0x11].Number = uVar9;
      uVar7 = *(undefined4 *)&(pFVar29->Connections_DEPRECATED).field_0x40;
      uVar8 = *(undefined4 *)&(pFVar29->Connections_DEPRECATED).field_0x44;
      uVar9 = *(undefined4 *)&(pFVar29->Connections_DEPRECATED).field_0x48;
      uVar14 = *(undefined4 *)&(pFVar29->Connections_DEPRECATED).field_0x4c;
      pFVar31[0x12].ComparisonIndex = (FNameEntryId)uVar10;
      pFVar31[0x12].Number = uVar11;
      pFVar31[0x13].ComparisonIndex = (FNameEntryId)uVar12;
      pFVar31[0x13].Number = uVar13;
      uVar10 = *(undefined4 *)&(pFVar29->ConfigValues_DEPRECATED).field_0x0;
      uVar11 = *(undefined4 *)&(pFVar29->ConfigValues_DEPRECATED).field_0x4;
      uVar12 = *(undefined4 *)&(pFVar29->ConfigValues_DEPRECATED).field_0x8;
      uVar13 = *(undefined4 *)&(pFVar29->ConfigValues_DEPRECATED).field_0xc;
      pFVar31[0x14].ComparisonIndex = (FNameEntryId)uVar7;
      pFVar31[0x14].Number = uVar8;
      pFVar31[0x15].ComparisonIndex = (FNameEntryId)uVar9;
      pFVar31[0x15].Number = uVar14;
      uVar7 = *(undefined4 *)&(pFVar29->ConfigValues_DEPRECATED).field_0x10;
      uVar8 = *(undefined4 *)&(pFVar29->ConfigValues_DEPRECATED).field_0x14;
      uVar9 = *(undefined4 *)&(pFVar29->ConfigValues_DEPRECATED).field_0x18;
      uVar14 = *(undefined4 *)&(pFVar29->ConfigValues_DEPRECATED).field_0x1c;
      pFVar31[0x16].ComparisonIndex = (FNameEntryId)uVar10;
      pFVar31[0x16].Number = uVar11;
      pFVar31[0x17].ComparisonIndex = (FNameEntryId)uVar12;
      pFVar31[0x17].Number = uVar13;
      pFVar31[0x18].ComparisonIndex = (FNameEntryId)uVar7;
      pFVar31[0x18].Number = uVar8;
      pFVar31[0x19].ComparisonIndex = (FNameEntryId)uVar9;
      pFVar31[0x19].Number = uVar14;
      lVar34 = 5;
      pFVar29 = param_1 + iVar35;
      pFVar26 = param_1 + param_2;
      do {
        pFVar32 = pFVar26;
        pFVar30 = pFVar29;
        pFVar26 = (FRigModuleReference *)&(pFVar32->Connections_DEPRECATED).field_0x20;
        pFVar2 = (pFVar30->ShortName_DEPRECATED).Data.AllocatorInstance.Data;
        pFVar29 = (FRigModuleReference *)&(pFVar30->Connections_DEPRECATED).field_0x20;
        pFVar32->Name = pFVar30->Name;
        (pFVar32->ShortName_DEPRECATED).Data.AllocatorInstance.Data = pFVar2;
        iVar27 = (pFVar30->ShortName_DEPRECATED).Data.ArrayMax;
        bVar15 = pFVar30->bShortNameBasedOnPath_DEPRECATED;
        uVar16 = *(undefined7 *)&pFVar30->field_0x19;
        (pFVar32->ShortName_DEPRECATED).Data.ArrayNum =
             (pFVar30->ShortName_DEPRECATED).Data.ArrayNum;
        (pFVar32->ShortName_DEPRECATED).Data.ArrayMax = iVar27;
        pFVar32->bShortNameBasedOnPath_DEPRECATED = bVar15;
        *(undefined7 *)&pFVar32->field_0x19 = uVar16;
        iVar27 = (pFVar30->ParentPath_DEPRECATED).Data.ArrayNum;
        iVar33 = (pFVar30->ParentPath_DEPRECATED).Data.ArrayMax;
        (pFVar32->ParentPath_DEPRECATED).Data.AllocatorInstance.Data =
             (pFVar30->ParentPath_DEPRECATED).Data.AllocatorInstance.Data;
        (pFVar32->ParentPath_DEPRECATED).Data.ArrayNum = iVar27;
        (pFVar32->ParentPath_DEPRECATED).Data.ArrayMax = iVar33;
        uVar5 = *(undefined8 *)&(pFVar30->Class).SoftObjectPtr;
        pFVar32->ParentModuleName = pFVar30->ParentModuleName;
        *(undefined8 *)&(pFVar32->Class).SoftObjectPtr = uVar5;
        uVar5 = *(undefined8 *)&(pFVar30->Class).SoftObjectPtr.field_0x10;
        *(undefined8 *)&(pFVar32->Class).SoftObjectPtr.field_0x8 =
             *(undefined8 *)&(pFVar30->Class).SoftObjectPtr.field_0x8;
        *(undefined8 *)&(pFVar32->Class).SoftObjectPtr.field_0x10 = uVar5;
        uVar5 = *(undefined8 *)&(pFVar30->Class).SoftObjectPtr.field_0x20;
        *(undefined8 *)&(pFVar32->Class).SoftObjectPtr.field_0x18 =
             *(undefined8 *)&(pFVar30->Class).SoftObjectPtr.field_0x18;
        *(undefined8 *)&(pFVar32->Class).SoftObjectPtr.field_0x20 = uVar5;
        uVar5 = *(undefined8 *)&(pFVar30->Connections_DEPRECATED).field_0x8;
        *(undefined8 *)&pFVar32->Connections_DEPRECATED =
             *(undefined8 *)&pFVar30->Connections_DEPRECATED;
        *(undefined8 *)&(pFVar32->Connections_DEPRECATED).field_0x8 = uVar5;
        uVar5 = *(undefined8 *)&(pFVar30->Connections_DEPRECATED).field_0x18;
        *(undefined8 *)&(pFVar32->Connections_DEPRECATED).field_0x10 =
             *(undefined8 *)&(pFVar30->Connections_DEPRECATED).field_0x10;
        *(undefined8 *)&(pFVar32->Connections_DEPRECATED).field_0x18 = uVar5;
        lVar34 = lVar34 + -1;
      } while (lVar34 != 0);
      uVar5 = *(undefined8 *)&(pFVar30->Connections_DEPRECATED).field_0x28;
      *(undefined8 *)pFVar26 = *(undefined8 *)pFVar29;
      *(undefined8 *)&(pFVar32->Connections_DEPRECATED).field_0x28 = uVar5;
      uVar5 = *(undefined8 *)&(pFVar30->Connections_DEPRECATED).field_0x38;
      *(undefined8 *)&(pFVar32->Connections_DEPRECATED).field_0x30 =
           *(undefined8 *)&(pFVar30->Connections_DEPRECATED).field_0x30;
      *(undefined8 *)&(pFVar32->Connections_DEPRECATED).field_0x38 = uVar5;
      uVar5 = *(undefined8 *)&(pFVar30->Connections_DEPRECATED).field_0x48;
      *(undefined8 *)&(pFVar32->Connections_DEPRECATED).field_0x40 =
           *(undefined8 *)&(pFVar30->Connections_DEPRECATED).field_0x40;
      *(undefined8 *)&(pFVar32->Connections_DEPRECATED).field_0x48 = uVar5;
      uVar5 = *(undefined8 *)&(pFVar30->ConfigValues_DEPRECATED).field_0x8;
      *(undefined8 *)&pFVar32->ConfigValues_DEPRECATED =
           *(undefined8 *)&pFVar30->ConfigValues_DEPRECATED;
      *(undefined8 *)&(pFVar32->ConfigValues_DEPRECATED).field_0x8 = uVar5;
      uVar5 = *(undefined8 *)&(pFVar30->ConfigValues_DEPRECATED).field_0x18;
      *(undefined8 *)&(pFVar32->ConfigValues_DEPRECATED).field_0x10 =
           *(undefined8 *)&(pFVar30->ConfigValues_DEPRECATED).field_0x10;
      *(undefined8 *)&(pFVar32->ConfigValues_DEPRECATED).field_0x18 = uVar5;
      lVar34 = 5;
      pFVar25 = local_2e8;
      pFVar26 = param_1 + iVar35;
      do {
        pFVar29 = pFVar26;
        pFVar31 = pFVar25;
        FVar3 = pFVar31[1];
        FVar17.Value = pFVar31[2].ComparisonIndex.Value;
        uVar18 = pFVar31[2].Number;
        FVar4 = pFVar31[3];
        pFVar25 = pFVar31 + 0x10;
        pFVar29->Name = *pFVar31;
        (pFVar29->ShortName_DEPRECATED).Data.AllocatorInstance.Data =
             (FScriptContainerElement *)FVar3;
        FVar3 = pFVar31[4];
        FVar19.Value = pFVar31[5].ComparisonIndex.Value;
        uVar20 = pFVar31[5].Number;
        (pFVar29->ShortName_DEPRECATED).Data.ArrayNum = FVar17.Value;
        (pFVar29->ShortName_DEPRECATED).Data.ArrayMax = uVar18;
        *(FName *)&pFVar29->bShortNameBasedOnPath_DEPRECATED = FVar4;
        FVar4 = pFVar31[6];
        FVar17.Value = pFVar31[7].ComparisonIndex.Value;
        uVar18 = pFVar31[7].Number;
        (pFVar29->ParentPath_DEPRECATED).Data.AllocatorInstance.Data =
             (FScriptContainerElement *)FVar3;
        (pFVar29->ParentPath_DEPRECATED).Data.ArrayNum = FVar19.Value;
        (pFVar29->ParentPath_DEPRECATED).Data.ArrayMax = uVar20;
        FVar19.Value = pFVar31[8].ComparisonIndex.Value;
        uVar20 = pFVar31[8].Number;
        FVar21.Value = pFVar31[9].ComparisonIndex.Value;
        uVar22 = pFVar31[9].Number;
        pFVar29->ParentModuleName = FVar4;
        *(uint *)&(pFVar29->Class).SoftObjectPtr.field_0x0 = FVar17.Value;
        *(uint *)&(pFVar29->Class).SoftObjectPtr.field_0x4 = uVar18;
        FVar17.Value = pFVar31[10].ComparisonIndex.Value;
        uVar18 = pFVar31[10].Number;
        FVar23.Value = pFVar31[0xb].ComparisonIndex.Value;
        uVar24 = pFVar31[0xb].Number;
        *(uint *)&(pFVar29->Class).SoftObjectPtr.field_0x8 = FVar19.Value;
        *(uint *)&(pFVar29->Class).SoftObjectPtr.field_0xc = uVar20;
        *(uint *)&(pFVar29->Class).SoftObjectPtr.field_0x10 = FVar21.Value;
        *(uint *)&(pFVar29->Class).SoftObjectPtr.field_0x14 = uVar22;
        FVar19.Value = pFVar31[0xc].ComparisonIndex.Value;
        uVar20 = pFVar31[0xc].Number;
        FVar21.Value = pFVar31[0xd].ComparisonIndex.Value;
        uVar22 = pFVar31[0xd].Number;
        *(uint *)&(pFVar29->Class).SoftObjectPtr.field_0x18 = FVar17.Value;
        *(uint *)&(pFVar29->Class).SoftObjectPtr.field_0x1c = uVar18;
        *(uint *)&(pFVar29->Class).SoftObjectPtr.field_0x20 = FVar23.Value;
        *(uint *)&(pFVar29->Class).SoftObjectPtr.field_0x24 = uVar24;
        FVar17.Value = pFVar31[0xe].ComparisonIndex.Value;
        uVar18 = pFVar31[0xe].Number;
        FVar23.Value = pFVar31[0xf].ComparisonIndex.Value;
        uVar24 = pFVar31[0xf].Number;
        *(uint *)&(pFVar29->Connections_DEPRECATED).field_0x0 = FVar19.Value;
        *(uint *)&(pFVar29->Connections_DEPRECATED).field_0x4 = uVar20;
        *(uint *)&(pFVar29->Connections_DEPRECATED).field_0x8 = FVar21.Value;
        *(uint *)&(pFVar29->Connections_DEPRECATED).field_0xc = uVar22;
        *(uint *)&(pFVar29->Connections_DEPRECATED).field_0x10 = FVar17.Value;
        *(uint *)&(pFVar29->Connections_DEPRECATED).field_0x14 = uVar18;
        *(uint *)&(pFVar29->Connections_DEPRECATED).field_0x18 = FVar23.Value;
        *(uint *)&(pFVar29->Connections_DEPRECATED).field_0x1c = uVar24;
        lVar34 = lVar34 + -1;
        pFVar26 = (FRigModuleReference *)&(pFVar29->Connections_DEPRECATED).field_0x20;
      } while (lVar34 != 0);
      uVar18 = pFVar25->Number;
      FVar17.Value = pFVar31[0x11].ComparisonIndex.Value;
      uVar20 = pFVar31[0x11].Number;
      FVar19.Value = pFVar31[0x12].ComparisonIndex.Value;
      uVar22 = pFVar31[0x12].Number;
      FVar21.Value = pFVar31[0x13].ComparisonIndex.Value;
      uVar24 = pFVar31[0x13].Number;
      *(uint *)&(pFVar29->Connections_DEPRECATED).field_0x20 = (pFVar25->ComparisonIndex).Value;
      *(uint *)&(pFVar29->Connections_DEPRECATED).field_0x24 = uVar18;
      *(uint *)&(pFVar29->Connections_DEPRECATED).field_0x28 = FVar17.Value;
      *(uint *)&(pFVar29->Connections_DEPRECATED).field_0x2c = uVar20;
      FVar17.Value = pFVar31[0x14].ComparisonIndex.Value;
      uVar18 = pFVar31[0x14].Number;
      FVar23.Value = pFVar31[0x15].ComparisonIndex.Value;
      uVar20 = pFVar31[0x15].Number;
      *(uint *)&(pFVar29->Connections_DEPRECATED).field_0x30 = FVar19.Value;
      *(uint *)&(pFVar29->Connections_DEPRECATED).field_0x34 = uVar22;
      *(uint *)&(pFVar29->Connections_DEPRECATED).field_0x38 = FVar21.Value;
      *(uint *)&(pFVar29->Connections_DEPRECATED).field_0x3c = uVar24;
      FVar19.Value = pFVar31[0x16].ComparisonIndex.Value;
      uVar22 = pFVar31[0x16].Number;
      FVar21.Value = pFVar31[0x17].ComparisonIndex.Value;
      uVar24 = pFVar31[0x17].Number;
      *(uint *)&(pFVar29->Connections_DEPRECATED).field_0x40 = FVar17.Value;
      *(uint *)&(pFVar29->Connections_DEPRECATED).field_0x44 = uVar18;
      *(uint *)&(pFVar29->Connections_DEPRECATED).field_0x48 = FVar23.Value;
      *(uint *)&(pFVar29->Connections_DEPRECATED).field_0x4c = uVar20;
      FVar17.Value = pFVar31[0x18].ComparisonIndex.Value;
      uVar18 = pFVar31[0x18].Number;
      FVar23.Value = pFVar31[0x19].ComparisonIndex.Value;
      uVar20 = pFVar31[0x19].Number;
      *(uint *)&(pFVar29->ConfigValues_DEPRECATED).field_0x0 = FVar19.Value;
      *(uint *)&(pFVar29->ConfigValues_DEPRECATED).field_0x4 = uVar22;
      *(uint *)&(pFVar29->ConfigValues_DEPRECATED).field_0x8 = FVar21.Value;
      *(uint *)&(pFVar29->ConfigValues_DEPRECATED).field_0xc = uVar24;
      *(uint *)&(pFVar29->ConfigValues_DEPRECATED).field_0x10 = FVar17.Value;
      *(uint *)&(pFVar29->ConfigValues_DEPRECATED).field_0x14 = uVar18;
      *(uint *)&(pFVar29->ConfigValues_DEPRECATED).field_0x18 = FVar23.Value;
      *(uint *)&(pFVar29->ConfigValues_DEPRECATED).field_0x1c = uVar20;
      param_2 = iVar35;
    } while (iVar35 * 2 + 1 < param_3);
  }
  if ((FName *)local_2f8.Data != (FName *)0x0) {
    FMemory::Free(local_2f8.Data);
  }
  return;
}

// HeapSortInternal<FRigModuleReference,int,`UModularRigController::ReorderModule'::__l2::<lambda_1>,TLess<void>_> @ 14a217300

void __cdecl
AlgoImpl::
HeapSortInternal<FRigModuleReference,int,_UModularRigController::ReorderModule_::__l2::<lambda_1>,TLess<void>_>
          (FRigModuleReference *param_1,int param_2,<lambda_1> *param_3,TLess<void> param_4)

{
  code *pcVar1;
  FName FVar2;
  FName FVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined7 uVar17;
  FNameEntryId FVar18;
  uint uVar19;
  FNameEntryId FVar20;
  uint uVar21;
  FNameEntryId FVar22;
  uint uVar23;
  FNameEntryId FVar24;
  uint uVar25;
  FName *pFVar26;
  FRigModuleReference *pFVar27;
  bool bVar28;
  int iVar29;
  <lambda_1> *p<Var30;
  FRigModuleReference *pFVar31;
  FRigModuleReference *pFVar32;
  FName *pFVar33;
  FRigModuleReference *pFVar34;
  FScriptContainerElement *pFVar35;
  longlong lVar36;
  FRigModuleReference *pFVar37;
  TLess<void> local_res20 [8];
  TReversePredicate<TLess<void>_> local_308;
  TReversePredicate<TLess<void>_> local_300;
  undefined1 local_2f8 [16];
  FName local_2e8 [90];
  
  local_res20[0] = param_4;
  if (param_2 < 0) {
    bVar28 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar28) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    pFVar35 = (param_3->AllModuleNames).AllocatorInstance.Data;
    goto LAB_14a21762d;
  }
  local_300.Predicate = local_res20;
  p<Var30 = `UModularRigController::ReorderModule'::__l2::<lambda_1>::<lambda_1>(local_2f8,param_3);
  local_308.Predicate = local_res20;
  if ((param_2 < 0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                          ,0x97,L"Algo::HeapifyInternal called with negative count"), bVar28)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar29 = (param_2 + -2) / 2;
  HeapSiftDown<FRigModuleReference,int,_UModularRigController::ReorderModule_::__l2::<lambda_1>,TReversePredicate<TLess<void>_>_>
            (param_1,iVar29,param_2,p<Var30,&local_308);
  while (iVar29 != 0) {
    iVar29 = iVar29 + -1;
    HeapSiftDown<FRigModuleReference,int,_UModularRigController::ReorderModule_::__l2::<lambda_1>,TReversePredicate<TLess<void>_>_>
              (param_1,iVar29,param_2,p<Var30,&local_308);
  }
  pFVar35 = (p<Var30->AllModuleNames).AllocatorInstance.Data;
  if (pFVar35 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar35);
  }
  iVar29 = param_2 + -1;
  if (0 < iVar29) {
    pFVar37 = param_1 + iVar29;
    do {
      lVar36 = 5;
      pFVar27 = param_1;
      pFVar26 = local_2e8;
      do {
        pFVar33 = pFVar26;
        pFVar31 = pFVar27;
        pFVar26 = pFVar33 + 0x10;
        FVar2 = (FName)(pFVar31->ShortName_DEPRECATED).Data.AllocatorInstance.Data;
        iVar5 = (pFVar31->ShortName_DEPRECATED).Data.ArrayNum;
        iVar6 = (pFVar31->ShortName_DEPRECATED).Data.ArrayMax;
        FVar3 = *(FName *)&pFVar31->bShortNameBasedOnPath_DEPRECATED;
        *pFVar33 = pFVar31->Name;
        pFVar33[1] = FVar2;
        FVar2 = (FName)(pFVar31->ParentPath_DEPRECATED).Data.AllocatorInstance.Data;
        iVar7 = (pFVar31->ParentPath_DEPRECATED).Data.ArrayNum;
        iVar8 = (pFVar31->ParentPath_DEPRECATED).Data.ArrayMax;
        pFVar33[2].ComparisonIndex = (FNameEntryId)iVar5;
        pFVar33[2].Number = iVar6;
        pFVar33[3] = FVar3;
        FVar3 = pFVar31->ParentModuleName;
        uVar9 = *(undefined4 *)&(pFVar31->Class).SoftObjectPtr.field_0x0;
        uVar10 = *(undefined4 *)&(pFVar31->Class).SoftObjectPtr.field_0x4;
        pFVar33[4] = FVar2;
        pFVar33[5].ComparisonIndex = (FNameEntryId)iVar7;
        pFVar33[5].Number = iVar8;
        uVar11 = *(undefined4 *)&(pFVar31->Class).SoftObjectPtr.field_0x8;
        uVar12 = *(undefined4 *)&(pFVar31->Class).SoftObjectPtr.field_0xc;
        uVar13 = *(undefined4 *)&(pFVar31->Class).SoftObjectPtr.field_0x10;
        uVar14 = *(undefined4 *)&(pFVar31->Class).SoftObjectPtr.field_0x14;
        pFVar33[6] = FVar3;
        pFVar33[7].ComparisonIndex = (FNameEntryId)uVar9;
        pFVar33[7].Number = uVar10;
        uVar9 = *(undefined4 *)&(pFVar31->Class).SoftObjectPtr.field_0x18;
        uVar10 = *(undefined4 *)&(pFVar31->Class).SoftObjectPtr.field_0x1c;
        uVar15 = *(undefined4 *)&(pFVar31->Class).SoftObjectPtr.field_0x20;
        uVar16 = *(undefined4 *)&(pFVar31->Class).SoftObjectPtr.field_0x24;
        pFVar33[8].ComparisonIndex = (FNameEntryId)uVar11;
        pFVar33[8].Number = uVar12;
        pFVar33[9].ComparisonIndex = (FNameEntryId)uVar13;
        pFVar33[9].Number = uVar14;
        uVar11 = *(undefined4 *)&(pFVar31->Connections_DEPRECATED).field_0x0;
        uVar12 = *(undefined4 *)&(pFVar31->Connections_DEPRECATED).field_0x4;
        uVar13 = *(undefined4 *)&(pFVar31->Connections_DEPRECATED).field_0x8;
        uVar14 = *(undefined4 *)&(pFVar31->Connections_DEPRECATED).field_0xc;
        pFVar33[10].ComparisonIndex = (FNameEntryId)uVar9;
        pFVar33[10].Number = uVar10;
        pFVar33[0xb].ComparisonIndex = (FNameEntryId)uVar15;
        pFVar33[0xb].Number = uVar16;
        uVar9 = *(undefined4 *)&(pFVar31->Connections_DEPRECATED).field_0x10;
        uVar10 = *(undefined4 *)&(pFVar31->Connections_DEPRECATED).field_0x14;
        uVar15 = *(undefined4 *)&(pFVar31->Connections_DEPRECATED).field_0x18;
        uVar16 = *(undefined4 *)&(pFVar31->Connections_DEPRECATED).field_0x1c;
        pFVar33[0xc].ComparisonIndex = (FNameEntryId)uVar11;
        pFVar33[0xc].Number = uVar12;
        pFVar33[0xd].ComparisonIndex = (FNameEntryId)uVar13;
        pFVar33[0xd].Number = uVar14;
        pFVar33[0xe].ComparisonIndex = (FNameEntryId)uVar9;
        pFVar33[0xe].Number = uVar10;
        pFVar33[0xf].ComparisonIndex = (FNameEntryId)uVar15;
        pFVar33[0xf].Number = uVar16;
        lVar36 = lVar36 + -1;
        pFVar27 = (FRigModuleReference *)&(pFVar31->Connections_DEPRECATED).field_0x20;
      } while (lVar36 != 0);
      uVar9 = *(undefined4 *)&(pFVar31->Connections_DEPRECATED).field_0x24;
      uVar10 = *(undefined4 *)&(pFVar31->Connections_DEPRECATED).field_0x28;
      uVar11 = *(undefined4 *)&(pFVar31->Connections_DEPRECATED).field_0x2c;
      lVar36 = 5;
      uVar12 = *(undefined4 *)&(pFVar31->Connections_DEPRECATED).field_0x30;
      uVar13 = *(undefined4 *)&(pFVar31->Connections_DEPRECATED).field_0x34;
      uVar14 = *(undefined4 *)&(pFVar31->Connections_DEPRECATED).field_0x38;
      uVar15 = *(undefined4 *)&(pFVar31->Connections_DEPRECATED).field_0x3c;
      pFVar26->ComparisonIndex =
           (FNameEntryId)*(undefined4 *)&(pFVar31->Connections_DEPRECATED).field_0x20;
      pFVar26->Number = uVar9;
      pFVar33[0x11].ComparisonIndex = (FNameEntryId)uVar10;
      pFVar33[0x11].Number = uVar11;
      uVar9 = *(undefined4 *)&(pFVar31->Connections_DEPRECATED).field_0x40;
      uVar10 = *(undefined4 *)&(pFVar31->Connections_DEPRECATED).field_0x44;
      uVar11 = *(undefined4 *)&(pFVar31->Connections_DEPRECATED).field_0x48;
      uVar16 = *(undefined4 *)&(pFVar31->Connections_DEPRECATED).field_0x4c;
      pFVar33[0x12].ComparisonIndex = (FNameEntryId)uVar12;
      pFVar33[0x12].Number = uVar13;
      pFVar33[0x13].ComparisonIndex = (FNameEntryId)uVar14;
      pFVar33[0x13].Number = uVar15;
      uVar12 = *(undefined4 *)&(pFVar31->ConfigValues_DEPRECATED).field_0x0;
      uVar13 = *(undefined4 *)&(pFVar31->ConfigValues_DEPRECATED).field_0x4;
      uVar14 = *(undefined4 *)&(pFVar31->ConfigValues_DEPRECATED).field_0x8;
      uVar15 = *(undefined4 *)&(pFVar31->ConfigValues_DEPRECATED).field_0xc;
      pFVar33[0x14].ComparisonIndex = (FNameEntryId)uVar9;
      pFVar33[0x14].Number = uVar10;
      pFVar33[0x15].ComparisonIndex = (FNameEntryId)uVar11;
      pFVar33[0x15].Number = uVar16;
      uVar9 = *(undefined4 *)&(pFVar31->ConfigValues_DEPRECATED).field_0x10;
      uVar10 = *(undefined4 *)&(pFVar31->ConfigValues_DEPRECATED).field_0x14;
      uVar11 = *(undefined4 *)&(pFVar31->ConfigValues_DEPRECATED).field_0x18;
      uVar16 = *(undefined4 *)&(pFVar31->ConfigValues_DEPRECATED).field_0x1c;
      pFVar33[0x16].ComparisonIndex = (FNameEntryId)uVar12;
      pFVar33[0x16].Number = uVar13;
      pFVar33[0x17].ComparisonIndex = (FNameEntryId)uVar14;
      pFVar33[0x17].Number = uVar15;
      pFVar33[0x18].ComparisonIndex = (FNameEntryId)uVar9;
      pFVar33[0x18].Number = uVar10;
      pFVar33[0x19].ComparisonIndex = (FNameEntryId)uVar11;
      pFVar33[0x19].Number = uVar16;
      pFVar27 = param_1;
      pFVar31 = pFVar37;
      do {
        pFVar34 = pFVar31;
        pFVar32 = pFVar27;
        pFVar27 = (FRigModuleReference *)&(pFVar32->Connections_DEPRECATED).field_0x20;
        pFVar35 = (pFVar34->ShortName_DEPRECATED).Data.AllocatorInstance.Data;
        pFVar31 = (FRigModuleReference *)&(pFVar34->Connections_DEPRECATED).field_0x20;
        pFVar32->Name = pFVar34->Name;
        (pFVar32->ShortName_DEPRECATED).Data.AllocatorInstance.Data = pFVar35;
        iVar5 = (pFVar34->ShortName_DEPRECATED).Data.ArrayMax;
        bVar28 = pFVar34->bShortNameBasedOnPath_DEPRECATED;
        uVar17 = *(undefined7 *)&pFVar34->field_0x19;
        (pFVar32->ShortName_DEPRECATED).Data.ArrayNum =
             (pFVar34->ShortName_DEPRECATED).Data.ArrayNum;
        (pFVar32->ShortName_DEPRECATED).Data.ArrayMax = iVar5;
        pFVar32->bShortNameBasedOnPath_DEPRECATED = bVar28;
        *(undefined7 *)&pFVar32->field_0x19 = uVar17;
        iVar5 = (pFVar34->ParentPath_DEPRECATED).Data.ArrayNum;
        iVar6 = (pFVar34->ParentPath_DEPRECATED).Data.ArrayMax;
        (pFVar32->ParentPath_DEPRECATED).Data.AllocatorInstance.Data =
             (pFVar34->ParentPath_DEPRECATED).Data.AllocatorInstance.Data;
        (pFVar32->ParentPath_DEPRECATED).Data.ArrayNum = iVar5;
        (pFVar32->ParentPath_DEPRECATED).Data.ArrayMax = iVar6;
        uVar4 = *(undefined8 *)&(pFVar34->Class).SoftObjectPtr;
        pFVar32->ParentModuleName = pFVar34->ParentModuleName;
        *(undefined8 *)&(pFVar32->Class).SoftObjectPtr = uVar4;
        uVar4 = *(undefined8 *)&(pFVar34->Class).SoftObjectPtr.field_0x10;
        *(undefined8 *)&(pFVar32->Class).SoftObjectPtr.field_0x8 =
             *(undefined8 *)&(pFVar34->Class).SoftObjectPtr.field_0x8;
        *(undefined8 *)&(pFVar32->Class).SoftObjectPtr.field_0x10 = uVar4;
        uVar4 = *(undefined8 *)&(pFVar34->Class).SoftObjectPtr.field_0x20;
        *(undefined8 *)&(pFVar32->Class).SoftObjectPtr.field_0x18 =
             *(undefined8 *)&(pFVar34->Class).SoftObjectPtr.field_0x18;
        *(undefined8 *)&(pFVar32->Class).SoftObjectPtr.field_0x20 = uVar4;
        uVar4 = *(undefined8 *)&(pFVar34->Connections_DEPRECATED).field_0x8;
        *(undefined8 *)&pFVar32->Connections_DEPRECATED =
             *(undefined8 *)&pFVar34->Connections_DEPRECATED;
        *(undefined8 *)&(pFVar32->Connections_DEPRECATED).field_0x8 = uVar4;
        uVar4 = *(undefined8 *)&(pFVar34->Connections_DEPRECATED).field_0x18;
        *(undefined8 *)&(pFVar32->Connections_DEPRECATED).field_0x10 =
             *(undefined8 *)&(pFVar34->Connections_DEPRECATED).field_0x10;
        *(undefined8 *)&(pFVar32->Connections_DEPRECATED).field_0x18 = uVar4;
        lVar36 = lVar36 + -1;
      } while (lVar36 != 0);
      uVar4 = *(undefined8 *)&(pFVar34->Connections_DEPRECATED).field_0x28;
      lVar36 = 5;
      *(undefined8 *)pFVar27 = *(undefined8 *)pFVar31;
      *(undefined8 *)&(pFVar32->Connections_DEPRECATED).field_0x28 = uVar4;
      uVar4 = *(undefined8 *)&(pFVar34->Connections_DEPRECATED).field_0x38;
      *(undefined8 *)&(pFVar32->Connections_DEPRECATED).field_0x30 =
           *(undefined8 *)&(pFVar34->Connections_DEPRECATED).field_0x30;
      *(undefined8 *)&(pFVar32->Connections_DEPRECATED).field_0x38 = uVar4;
      uVar4 = *(undefined8 *)&(pFVar34->Connections_DEPRECATED).field_0x48;
      *(undefined8 *)&(pFVar32->Connections_DEPRECATED).field_0x40 =
           *(undefined8 *)&(pFVar34->Connections_DEPRECATED).field_0x40;
      *(undefined8 *)&(pFVar32->Connections_DEPRECATED).field_0x48 = uVar4;
      uVar4 = *(undefined8 *)&(pFVar34->ConfigValues_DEPRECATED).field_0x8;
      *(undefined8 *)&pFVar32->ConfigValues_DEPRECATED =
           *(undefined8 *)&pFVar34->ConfigValues_DEPRECATED;
      *(undefined8 *)&(pFVar32->ConfigValues_DEPRECATED).field_0x8 = uVar4;
      uVar4 = *(undefined8 *)&(pFVar34->ConfigValues_DEPRECATED).field_0x18;
      *(undefined8 *)&(pFVar32->ConfigValues_DEPRECATED).field_0x10 =
           *(undefined8 *)&(pFVar34->ConfigValues_DEPRECATED).field_0x10;
      *(undefined8 *)&(pFVar32->ConfigValues_DEPRECATED).field_0x18 = uVar4;
      pFVar26 = local_2e8;
      pFVar27 = pFVar37;
      do {
        pFVar31 = pFVar27;
        pFVar33 = pFVar26;
        FVar2 = pFVar33[1];
        FVar18.Value = pFVar33[2].ComparisonIndex.Value;
        uVar19 = pFVar33[2].Number;
        FVar3 = pFVar33[3];
        pFVar26 = pFVar33 + 0x10;
        pFVar31->Name = *pFVar33;
        (pFVar31->ShortName_DEPRECATED).Data.AllocatorInstance.Data =
             (FScriptContainerElement *)FVar2;
        FVar2 = pFVar33[4];
        FVar20.Value = pFVar33[5].ComparisonIndex.Value;
        uVar21 = pFVar33[5].Number;
        (pFVar31->ShortName_DEPRECATED).Data.ArrayNum = FVar18.Value;
        (pFVar31->ShortName_DEPRECATED).Data.ArrayMax = uVar19;
        *(FName *)&pFVar31->bShortNameBasedOnPath_DEPRECATED = FVar3;
        FVar3 = pFVar33[6];
        FVar18.Value = pFVar33[7].ComparisonIndex.Value;
        uVar19 = pFVar33[7].Number;
        (pFVar31->ParentPath_DEPRECATED).Data.AllocatorInstance.Data =
             (FScriptContainerElement *)FVar2;
        (pFVar31->ParentPath_DEPRECATED).Data.ArrayNum = FVar20.Value;
        (pFVar31->ParentPath_DEPRECATED).Data.ArrayMax = uVar21;
        FVar20.Value = pFVar33[8].ComparisonIndex.Value;
        uVar21 = pFVar33[8].Number;
        FVar22.Value = pFVar33[9].ComparisonIndex.Value;
        uVar23 = pFVar33[9].Number;
        pFVar31->ParentModuleName = FVar3;
        *(uint *)&(pFVar31->Class).SoftObjectPtr.field_0x0 = FVar18.Value;
        *(uint *)&(pFVar31->Class).SoftObjectPtr.field_0x4 = uVar19;
        FVar18.Value = pFVar33[10].ComparisonIndex.Value;
        uVar19 = pFVar33[10].Number;
        FVar24.Value = pFVar33[0xb].ComparisonIndex.Value;
        uVar25 = pFVar33[0xb].Number;
        *(uint *)&(pFVar31->Class).SoftObjectPtr.field_0x8 = FVar20.Value;
        *(uint *)&(pFVar31->Class).SoftObjectPtr.field_0xc = uVar21;
        *(uint *)&(pFVar31->Class).SoftObjectPtr.field_0x10 = FVar22.Value;
        *(uint *)&(pFVar31->Class).SoftObjectPtr.field_0x14 = uVar23;
        FVar20.Value = pFVar33[0xc].ComparisonIndex.Value;
        uVar21 = pFVar33[0xc].Number;
        FVar22.Value = pFVar33[0xd].ComparisonIndex.Value;
        uVar23 = pFVar33[0xd].Number;
        *(uint *)&(pFVar31->Class).SoftObjectPtr.field_0x18 = FVar18.Value;
        *(uint *)&(pFVar31->Class).SoftObjectPtr.field_0x1c = uVar19;
        *(uint *)&(pFVar31->Class).SoftObjectPtr.field_0x20 = FVar24.Value;
        *(uint *)&(pFVar31->Class).SoftObjectPtr.field_0x24 = uVar25;
        FVar18.Value = pFVar33[0xe].ComparisonIndex.Value;
        uVar19 = pFVar33[0xe].Number;
        FVar24.Value = pFVar33[0xf].ComparisonIndex.Value;
        uVar25 = pFVar33[0xf].Number;
        *(uint *)&(pFVar31->Connections_DEPRECATED).field_0x0 = FVar20.Value;
        *(uint *)&(pFVar31->Connections_DEPRECATED).field_0x4 = uVar21;
        *(uint *)&(pFVar31->Connections_DEPRECATED).field_0x8 = FVar22.Value;
        *(uint *)&(pFVar31->Connections_DEPRECATED).field_0xc = uVar23;
        *(uint *)&(pFVar31->Connections_DEPRECATED).field_0x10 = FVar18.Value;
        *(uint *)&(pFVar31->Connections_DEPRECATED).field_0x14 = uVar19;
        *(uint *)&(pFVar31->Connections_DEPRECATED).field_0x18 = FVar24.Value;
        *(uint *)&(pFVar31->Connections_DEPRECATED).field_0x1c = uVar25;
        lVar36 = lVar36 + -1;
        pFVar27 = (FRigModuleReference *)&(pFVar31->Connections_DEPRECATED).field_0x20;
      } while (lVar36 != 0);
      uVar19 = pFVar26->Number;
      FVar18.Value = pFVar33[0x11].ComparisonIndex.Value;
      uVar21 = pFVar33[0x11].Number;
      FVar20.Value = pFVar33[0x12].ComparisonIndex.Value;
      uVar23 = pFVar33[0x12].Number;
      FVar22.Value = pFVar33[0x13].ComparisonIndex.Value;
      uVar25 = pFVar33[0x13].Number;
      *(uint *)&(pFVar31->Connections_DEPRECATED).field_0x20 = (pFVar26->ComparisonIndex).Value;
      *(uint *)&(pFVar31->Connections_DEPRECATED).field_0x24 = uVar19;
      *(uint *)&(pFVar31->Connections_DEPRECATED).field_0x28 = FVar18.Value;
      *(uint *)&(pFVar31->Connections_DEPRECATED).field_0x2c = uVar21;
      FVar18.Value = pFVar33[0x14].ComparisonIndex.Value;
      uVar19 = pFVar33[0x14].Number;
      FVar24.Value = pFVar33[0x15].ComparisonIndex.Value;
      uVar21 = pFVar33[0x15].Number;
      *(uint *)&(pFVar31->Connections_DEPRECATED).field_0x30 = FVar20.Value;
      *(uint *)&(pFVar31->Connections_DEPRECATED).field_0x34 = uVar23;
      *(uint *)&(pFVar31->Connections_DEPRECATED).field_0x38 = FVar22.Value;
      *(uint *)&(pFVar31->Connections_DEPRECATED).field_0x3c = uVar25;
      FVar20.Value = pFVar33[0x16].ComparisonIndex.Value;
      uVar23 = pFVar33[0x16].Number;
      FVar22.Value = pFVar33[0x17].ComparisonIndex.Value;
      uVar25 = pFVar33[0x17].Number;
      *(uint *)&(pFVar31->Connections_DEPRECATED).field_0x40 = FVar18.Value;
      *(uint *)&(pFVar31->Connections_DEPRECATED).field_0x44 = uVar19;
      *(uint *)&(pFVar31->Connections_DEPRECATED).field_0x48 = FVar24.Value;
      *(uint *)&(pFVar31->Connections_DEPRECATED).field_0x4c = uVar21;
      FVar18.Value = pFVar33[0x18].ComparisonIndex.Value;
      uVar19 = pFVar33[0x18].Number;
      FVar24.Value = pFVar33[0x19].ComparisonIndex.Value;
      uVar21 = pFVar33[0x19].Number;
      *(uint *)&(pFVar31->ConfigValues_DEPRECATED).field_0x0 = FVar20.Value;
      *(uint *)&(pFVar31->ConfigValues_DEPRECATED).field_0x4 = uVar23;
      *(uint *)&(pFVar31->ConfigValues_DEPRECATED).field_0x8 = FVar22.Value;
      *(uint *)&(pFVar31->ConfigValues_DEPRECATED).field_0xc = uVar25;
      *(uint *)&(pFVar31->ConfigValues_DEPRECATED).field_0x10 = FVar18.Value;
      *(uint *)&(pFVar31->ConfigValues_DEPRECATED).field_0x14 = uVar19;
      *(uint *)&(pFVar31->ConfigValues_DEPRECATED).field_0x18 = FVar24.Value;
      *(uint *)&(pFVar31->ConfigValues_DEPRECATED).field_0x1c = uVar21;
      HeapSiftDown<FRigModuleReference,int,_UModularRigController::ReorderModule_::__l2::<lambda_1>,TReversePredicate<TLess<void>_>_>
                (param_1,0,iVar29,param_3,&local_300);
      iVar29 = iVar29 + -1;
      pFVar37 = pFVar37 + -1;
    } while (0 < iVar29);
  }
  pFVar35 = (param_3->AllModuleNames).AllocatorInstance.Data;
LAB_14a21762d:
  if (pFVar35 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar35);
  }
  return;
}

// HeapifyInternal<int,int,``FControlRigStats::Dump'::__l2::FCounterTree::Dump'::__l2::<lambda_1>,TReversePredicate<TLess<void>_>_> @ 14a217660

void __cdecl
AlgoImpl::
HeapifyInternal<int,int,__FControlRigStats::Dump_::__l2::FCounterTree::Dump_::__l2::<lambda_1>,TReversePredicate<TLess<void>_>_>
          (int *param_1,int param_2,<lambda_1> param_3,TReversePredicate<TLess<void>_> param_4)

{
  int *piVar1;
  int iVar2;
  double dVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  double dVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  
  if (param_2 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  dVar7 = __real_40f86a0000000000;
  iVar9 = (param_2 + -2) / 2;
  iVar12 = iVar9 * 2;
  do {
    if (iVar12 + 1 < param_2) {
      piVar1 = &(param_3.LocalChildren)->ArrayNum;
      iVar6 = iVar9;
      iVar2 = iVar12;
      do {
        iVar13 = iVar2;
        if (iVar2 + 2 < param_2) {
          uVar11 = param_1[(longlong)iVar2 + 2];
          uVar10 = 0;
          if ((int)uVar11 < *piVar1) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          dVar3 = *(double *)
                   (*(longlong *)
                     (((param_3.LocalChildren)->AllocatorInstance).Data + (longlong)(int)uVar11 * 8)
                   + 8);
          uVar11 = param_1[(longlong)iVar2 + 1];
          uVar10 = 0;
          if ((int)uVar11 < *piVar1) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar13 = iVar2 + 1;
          if (0x7fffffff - (int)(dVar3 * dVar7) <
              0x7fffffff -
              (int)(*(double *)
                     (*(longlong *)
                       (((param_3.LocalChildren)->AllocatorInstance).Data +
                       (longlong)(int)uVar11 * 8) + 8) * dVar7)) {
            iVar13 = iVar2;
          }
        }
        uVar11 = param_1[iVar6];
        uVar10 = 0;
        if ((int)uVar11 < *piVar1) {
          uVar10 = ~uVar11 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar10 = param_1[(longlong)iVar13 + 1];
        dVar3 = *(double *)
                 (*(longlong *)
                   (((param_3.LocalChildren)->AllocatorInstance).Data + (longlong)(int)uVar11 * 8) +
                 8);
        uVar11 = 0;
        if ((int)uVar10 < *piVar1) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (0x7fffffff -
            (int)(*(double *)
                   (*(longlong *)
                     (((param_3.LocalChildren)->AllocatorInstance).Data + (longlong)(int)uVar10 * 8)
                   + 8) * dVar7) <= 0x7fffffff - (int)(dVar3 * dVar7)) break;
        iVar4 = param_1[iVar6];
        iVar2 = (iVar13 + 1) * 2;
        param_1[iVar6] = param_1[(longlong)iVar13 + 1];
        param_1[(longlong)iVar13 + 1] = iVar4;
        iVar6 = iVar13 + 1;
      } while (iVar2 + 1 < param_2);
    }
    if (iVar9 == 0) {
      return;
    }
    iVar9 = iVar9 + -1;
    iVar12 = iVar12 + -2;
  } while( true );
}

// InternalConstructor<AControlRigControlActor> @ 14a217970

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<AControlRigControlActor>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  undefined1 *this;
  AControlRigControlActor *this_00;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  USceneComponent *pUVar5;
  FName local_res8;
  
  this_00 = (AControlRigControlActor *)param_1->Obj;
  if (this_00 != (AControlRigControlActor *)0x0) {
    AActor::AActor((AActor *)this_00,param_1);
    this_00->bRefreshOnTick = true;
    this_00->bIsSelectable = true;
    this_00->_padding_ = (longlong)&___7AControlRigControlActor__6B_;
    (this_00->ActorToTrack).field0_0x0.DebugPtr = (AActor *)0x0;
    (this_00->ControlRigClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
    (this_00->MaterialOverride).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
    FString::FString(&this_00->ColorParameter,L"Color");
    this = &(this_00->ControlRig).SoftObjectPtr.field_0x18;
    this_00->bCastShadows = false;
    *(undefined8 *)this = 0;
    *(undefined8 *)&(this_00->ControlRig).SoftObjectPtr.field_0x20 = 0;
    (this_00->ActorRootComponent).field0_0x0.DebugPtr = (USceneComponent *)0x0;
    *(undefined8 *)&(this_00->ControlRig).SoftObjectPtr = 0;
    *(undefined8 *)&(this_00->ControlRig).SoftObjectPtr.field_0x10 = 0;
    *(undefined8 *)&(this_00->ControlRig).SoftObjectPtr.field_0x8 = 0;
    FUtf8String::Reset((FUtf8String *)this,0);
    (this_00->ControlNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->ControlNames).ArrayNum = 0;
    (this_00->ControlNames).ArrayMax = 0;
    (this_00->ShapeTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->ShapeTransforms).ArrayNum = 0;
    (this_00->ShapeTransforms).ArrayMax = 0;
    (this_00->Components).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->Components).ArrayNum = 0;
    (this_00->Components).ArrayMax = 0;
    (this_00->Materials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->Materials).ArrayNum = 0;
    (this_00->Materials).ArrayMax = 0;
    (this_00->ColorParameterName).ComparisonIndex = 0;
    (this_00->ColorParameterName).Number = 0;
    pFVar3 = FName::FName(&local_res8,L"SceneComponent0");
    FVar2 = *pFVar3;
    pUVar4 = Z_Construct_UClass_USceneComponent_NoRegister();
    pUVar5 = (USceneComponent *)
             UObject::CreateDefaultSubobject((UObject *)this_00,FVar2,pUVar4,pUVar4,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (USceneComponent *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this_00->ActorRootComponent).field0_0x0.DebugPtr = pUVar5;
    AActor::SetRootComponent((AActor *)this_00,pUVar5);
    pbVar1 = (byte *)((longlong)&this_00->_padding_ + 2);
    *pbVar1 = *pbVar1 | 7;
    pbVar1 = (byte *)((longlong)&this_00->_padding_ + 2);
    *pbVar1 = *pbVar1 | 1;
    *(undefined1 *)&this_00->_padding_ = 5;
    AActor::SetActorEnableCollision((AActor *)this_00,false);
    AControlRigControlActor::Refresh(this_00);
  }
  return;
}

// InternalConstructor<AControlRigShapeActor> @ 14a217ae0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl InternalConstructor<AControlRigShapeActor>(FObjectInitializer *param_1)

{
  if ((AControlRigShapeActor *)param_1->Obj != (AControlRigShapeActor *)0x0) {
    AControlRigShapeActor::AControlRigShapeActor((AControlRigShapeActor *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UAnimNodeControlRigLibrary> @ 14a217b00

void __cdecl InternalConstructor<UAnimNodeControlRigLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UAnimNodeControlRigLibrary__6B_;
  }
  return;
}

// InternalConstructor<UControlRig> @ 14a217b30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl InternalConstructor<UControlRig>(FObjectInitializer *param_1)

{
  if ((UControlRig *)param_1->Obj != (UControlRig *)0x0) {
    UControlRig::UControlRig((UControlRig *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UControlRigAnimInstance> @ 14a217b50

void __cdecl InternalConstructor<UControlRigAnimInstance>(FObjectInitializer *param_1)

{
  UAnimInstance *this;
  
  this = (UAnimInstance *)param_1->Obj;
  if (this != (UAnimInstance *)0x0) {
    UAnimInstance::UAnimInstance(this,param_1);
    this->bUseMultiThreadedAnimationUpdate = '\0';
    *(undefined ***)this = &___7UControlRigAnimInstance__6B_;
  }
  return;
}

// InternalConstructor<UControlRigBlueprintGeneratedClass> @ 14a217b90

void __cdecl InternalConstructor<UControlRigBlueprintGeneratedClass>(FObjectInitializer *param_1)

{
  URigVMBlueprintGeneratedClass *this;
  
  this = (URigVMBlueprintGeneratedClass *)param_1->Obj;
  if (this != (URigVMBlueprintGeneratedClass *)0x0) {
    URigVMBlueprintGeneratedClass::URigVMBlueprintGeneratedClass(this,param_1);
    this->_padding_ = (longlong)&UControlRigBlueprintGeneratedClass::_vftable__for__UClass__;
    this[1]._padding_ = 0;
    this->_padding_ =
         (longlong)
         &UControlRigBlueprintGeneratedClass::_vftable__for__IBlueprintPropertyGuidProvider__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UControlRigBlueprintGeneratedClass__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FName::FName((FName *)((longlong)&this[1]._padding_ + 4),L"Control Rig");
    FRigModuleSettings::FRigModuleSettings((FRigModuleSettings *)&this[1]._padding_);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UControlRigComponent> @ 14a217c50

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl InternalConstructor<UControlRigComponent>(FObjectInitializer *param_1)

{
  if ((UControlRigComponent *)param_1->Obj != (UControlRigComponent *)0x0) {
    UControlRigComponent::UControlRigComponent((UControlRigComponent *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UControlRigOverrideAsset> @ 14a217c70

void __cdecl InternalConstructor<UControlRigOverrideAsset>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UControlRigOverrideAsset__6B_;
    FControlRigOverrideContainer::FControlRigOverrideContainer
              ((FControlRigOverrideContainer *)(this + 1));
    *(undefined8 *)&this[10].field_0x8 = 2;
    *(undefined8 *)&this[9].field_0x18 = 0;
    *(undefined8 *)&this[9].field_0x20 = 0;
    *(undefined8 *)(this + 10) = 0;
  }
  return;
}

// InternalConstructor<UControlRigReplay> @ 14a217cd0

void __cdecl InternalConstructor<UControlRigReplay>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this == (UObject *)0x0) {
    return;
  }
  UObject::UObject(this);
  *(undefined ***)this = &___7UControlRigReplay__6B_;
  FText::FText((FText *)(this + 1));
  *(undefined8 *)&this[1].field_0x10 = 0;
  *(undefined8 *)&this[1].field_0x18 = 0;
  *(undefined8 *)&this[1].field_0x20 = 0;
  *(undefined8 *)(this + 2) = 0;
  *(undefined8 *)&this[2].field_0x8 = 0;
  *(undefined8 *)&this[2].field_0x10 = 0;
  *(undefined8 *)&this[2].field_0x18 = 0;
  *(undefined8 *)&this[2].field_0x20 = 0;
  FControlRigReplayTracks::FControlRigReplayTracks((FControlRigReplayTracks *)(this + 3));
  FControlRigReplayTracks::FControlRigReplayTracks((FControlRigReplayTracks *)&this[0xc].field_0x10)
  ;
  *(undefined4 *)(this + 0x16) = 0x1010101;
  *(undefined8 *)&this[0x15].field_0x20 = 0x3f50624dd2f1a9fc;
  *(undefined8 *)&this[0x18].field_0x8 = 0xbff0000000000000;
  *(undefined8 *)&this[0x16].field_0x8 = 0;
  *(undefined8 *)&this[0x16].field_0x10 = 0;
  this[0x16].field_0x18 = 1;
  *(undefined8 *)&this[0x16].field_0x1c = 0;
  *(undefined8 *)&this[0x16].field_0x24 = 0;
  *(undefined8 *)&this[0x17].field_0x8 = 0;
  *(undefined8 *)&this[0x17].field_0x10 = 0;
  *(undefined8 *)&this[0x17].field_0x18 = 0;
  *(undefined8 *)&this[0x17].field_0x20 = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined2 *)&this[0x18].field_0x10 = 0;
  this[0x18].field_0x12 = 0;
  *(undefined8 *)&this[0x18].field_0x18 = 0;
  *(undefined8 *)&this[0x18].field_0x20 = 0;
  this[0xc].field_0x8 = 1;
  this[0x15].field_0x18 = 0;
  return;
}

// InternalConstructor<UControlRigShapeLibrary> @ 14a217cf0

void __cdecl InternalConstructor<UControlRigShapeLibrary>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UControlRigShapeLibrary__6B_;
    FControlRigShapeDefinition::FControlRigShapeDefinition
              ((FControlRigShapeDefinition *)&this[1].field_0x8);
    *(undefined8 *)&this[5].field_0x20 = 0;
    *(undefined8 *)(this + 6) = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined8 *)&this[5].field_0x18 = 0;
    *(undefined8 *)&this[5].field_0x10 = 0;
    FUtf8String::Reset((FUtf8String *)&this[5].field_0x20,0);
    *(undefined8 *)&this[6].field_0x8 = 0;
    *(undefined8 *)&this[6].field_0x20 = 0;
    *(undefined8 *)(this + 7) = 0;
    *(undefined8 *)&this[6].field_0x18 = 0;
    *(undefined8 *)&this[6].field_0x10 = 0;
    FUtf8String::Reset((FUtf8String *)&this[6].field_0x20,0);
    *(undefined8 *)&this[7].field_0x8 = 0;
    *(undefined8 *)&this[7].field_0x10 = 0;
    *(undefined8 *)&this[7].field_0x18 = 0;
    *(undefined8 *)&this[7].field_0x20 = 0;
    *(undefined8 *)(this + 8) = 0;
  }
  return;
}

// InternalConstructor<UControlRigShapeLibraryLink> @ 14a217db0

void __cdecl InternalConstructor<UControlRigShapeLibraryLink>(FObjectInitializer *param_1)

{
  UNameSpacedUserData *this;
  
  this = (UNameSpacedUserData *)param_1->Obj;
  if (this != (UNameSpacedUserData *)0x0) {
    UNameSpacedUserData::UNameSpacedUserData(this,param_1);
    this->_padding_ = (longlong)&___7UControlRigShapeLibraryLink__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1]._padding_,0);
    this[1].NameSpace.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].NameSpace.Data.ArrayNum = 0;
    this[1].NameSpace.Data.ArrayMax = 0;
    *(undefined8 *)&this[1].CachedUserData = 0;
  }
  return;
}

// InternalConstructor<UControlRigTestData> @ 14a217e30

void __cdecl InternalConstructor<UControlRigTestData>(FObjectInitializer *param_1)

{
  UControlRigReplay *this;
  
  this = (UControlRigReplay *)param_1->Obj;
  if (this != (UControlRigReplay *)0x0) {
    UControlRigReplay::UControlRigReplay(this);
    this->_padding_ = (longlong)&___7UControlRigTestData__6B_;
    FControlRigTestDataFrame::FControlRigTestDataFrame((FControlRigTestDataFrame *)(this + 1));
    *(undefined4 *)&this[1].InputTracks.MetadataToTrackName.field_0x10 = 0xffffffff;
    *(undefined8 *)&this[1].InputTracks.ComponentKeyToTrackName.field_0x30 = 0;
    *(undefined8 *)&this[1].InputTracks.ComponentKeyToTrackName.field_0x38 = 0;
    *(undefined8 *)&this[1].InputTracks.ComponentKeyToTrackName.field_0x40 = 0;
    *(undefined8 *)&this[1].InputTracks.ComponentKeyToTrackName.field_0x48 = 0;
    *(undefined8 *)&this[1].InputTracks.MetadataToTrackName = 0;
    *(undefined8 *)&this[1].InputTracks.MetadataToTrackName.field_0x8 = 0;
    this[1].InputTracks.MetadataToTrackName.field_0x14 = 0;
  }
  return;
}

// InternalConstructor<UControlRigValidationPass> @ 14a217eb0

void __cdecl InternalConstructor<UControlRigValidationPass>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UControlRigValidationPass__6B_;
  }
  return;
}

// InternalConstructor<UControlRigValidator> @ 14a217ee0

void __cdecl InternalConstructor<UControlRigValidator>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UControlRigValidator__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined4 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined4 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<UModularRig> @ 14a217f40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl InternalConstructor<UModularRig>(FObjectInitializer *param_1)

{
  UControlRig *this;
  
  this = (UControlRig *)param_1->Obj;
  if (this != (UControlRig *)0x0) {
    UControlRig::UControlRig(this,param_1);
    this->_padding_ = (longlong)&UModularRig::_vftable__for__UObject__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UModularRig::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UModularRig::_vftable__for__INodeMappingProviderInterface__;
    this->_padding_ = (longlong)&UModularRig::_vftable__for__IRigHierarchyProvider__;
    this->_padding_ = (longlong)&UModularRig::_vftable__for__IMeshDeformerProducer__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 1;
    FModularRigModel::FModularRigModel((FModularRigModel *)&this[1]._padding_);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UModularRigController> @ 14a218070

void __cdecl InternalConstructor<UModularRigController>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined2 *)(this + 2) = 0x100;
    *(undefined ***)this = &___7UModularRigController__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 2;
  }
  return;
}

// InternalConstructor<UTransformableControlHandle> @ 14a2180c0

void __cdecl InternalConstructor<UTransformableControlHandle>(FObjectInitializer *param_1)

{
  UTransformableHandle *this;
  double dVar1;
  undefined8 local_res8;
  
  this = (UTransformableHandle *)param_1->Obj;
  if (this != (UTransformableHandle *)0x0) {
    UTransformableHandle::UTransformableHandle(this,param_1);
    this->_padding_ = (longlong)&___7UTransformableControlHandle__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1]._padding_,0);
    this[1].bNotifying = false;
    *(undefined3 *)&this[1].field_0x29 = 0;
    this[1].ConstraintBindingID.Guid.A = 0;
    *(undefined8 *)&this[1].ConstraintBindingID.Guid.D = 0;
    *(undefined8 *)&this[1].ConstraintBindingID.ResolveParentIndex = 0;
    *(undefined8 *)&this[1].OnHandleModified = 0;
    local_res8 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&this[1].OnHandleModified,(FObjectPtr)&local_res8);
    *(undefined8 *)&this[1].OnHandleModified.field_0x10 = 0;
    this[2]._padding_ = 0;
    *(double (*) [2])&this[2]._padding_ =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *(double (*) [2])&this[2].ConstraintBindingID.Guid.B =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *(double (*) [2])&this[2].ConstraintBindingID.ResolveParentIndex =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    dVar1 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
    *(double *)&this[2].OnHandleModified.field_0x8 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
    *(double *)&this[2].OnHandleModified.field_0x10 = dVar1;
    *(double (*) [2])&this[2].OnHandleModified.field_0x18 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    dVar1 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    this[3]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
    this[3]._padding_ = (longlong)dVar1;
  }
  return;
}

// InternalVTableHelperCtorCaller<AControlRigControlActor> @ 14a2181b0

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

UObject * __cdecl InternalVTableHelperCtorCaller<AControlRigControlActor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AControlRigControlActor::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7AControlRigControlActor__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    *(undefined8 *)&this[1].field_0x58 = 0;
    this[1].RemoteRole = '\0';
    this[1].ActorCategory = '\0';
    *(undefined2 *)&this[1].field_0x62 = 0;
    this[1].InitialLifeSpan = 0.0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick.Target = (AActor *)0x0;
    this[1].PrimaryActorTick._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1].field_0x58,0);
    this[1].CustomTimeDilation = 0.0;
    this[1].RayTracingGroupId = 0;
    this[1].AttachmentReplication.AttachParent.field0_0x0.DebugPtr = (AActor *)0x0;
    *(undefined8 *)&this[1].AttachmentReplication.LocationOffset = 0;
    *(undefined8 *)&this[1].AttachmentReplication.LocationOffset.field_0x8 = 0;
    *(undefined8 *)&this[1].AttachmentReplication.LocationOffset.field_0x10 = 0;
    *(undefined8 *)&this[1].AttachmentReplication.RelativeScale3D = 0;
    *(undefined8 *)&this[1].AttachmentReplication.RelativeScale3D.field_0x8 = 0;
    *(undefined8 *)&this[1].AttachmentReplication.RelativeScale3D.field_0x10 = 0;
    this[1].AttachmentReplication.RotationOffset.Pitch = 0.0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AControlRigShapeActor> @ 14a218300

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

UObject * __cdecl InternalVTableHelperCtorCaller<AControlRigShapeActor>(FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  AActor *this;
  
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = AControlRigShapeActor::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar5,pUVar4,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&AControlRigShapeActor::_vftable__for__AActor__;
    this[1]._padding_ = (longlong)&AControlRigShapeActor::_vftable__for__IViewportSelectableObject__
    ;
    this[1]._padding_ = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined8 *)((longlong)&this[1].PrimaryActorTick._padding_ + 4) = 0;
    *(undefined8 *)((longlong)&this[1].PrimaryActorTick._padding_ + 4) = 0;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    this[1].PrimaryActorTick.Target = (AActor *)(double)GlobalVectorConstants::Float0001.m128_f32[0]
    ;
    *(double *)&this[1].field_0x58 = (double)fVar1;
    *(double *)&this[1].RemoteRole = (double)fVar2;
    *(double *)&this[1].CustomTimeDilation = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    this[1].AttachmentReplication.AttachParent.field0_0x0 =
         (TObjectPtr<AActor>_u_0)(double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)&this[1].AttachmentReplication.LocationOffset = (double)fVar1;
    *(double *)&this[1].AttachmentReplication.LocationOffset.field_0x8 = (double)fVar2;
    *(double *)&this[1].AttachmentReplication.LocationOffset.field_0x10 = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)&this[1].AttachmentReplication.RelativeScale3D =
         (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&this[1].AttachmentReplication.RelativeScale3D.field_0x8 = (double)fVar1;
    *(double *)&this[1].AttachmentReplication.RelativeScale3D.field_0x10 = (double)fVar2;
    this[1].AttachmentReplication.RotationOffset.Pitch = (double)fVar3;
    *(undefined1 *)&this[1].AttachmentReplication.RotationOffset.Yaw = 0;
    *(undefined8 *)((longlong)&this[1].AttachmentReplication.RotationOffset.Yaw + 4) = 0;
    *(undefined2 *)((longlong)&this[1].AttachmentReplication.RotationOffset.Roll + 4) = 0xffff;
    this[1].AttachmentReplication.AttachSocket.ComparisonIndex.Value = 0xffffffff;
    this[1].AttachmentReplication.AttachComponent.field0_0x0.DebugPtr = (USceneComponent *)0x0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimNodeControlRigLibrary> @ 14a218470

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAnimNodeControlRigLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimNodeControlRigLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAnimNodeControlRigLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UControlRig> @ 14a218520

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UControlRig>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UControlRig *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UControlRig::GetPrivateStaticClass();
  pUVar3 = (UControlRig *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UControlRig *)0x0) {
    pUVar3 = UControlRig::UControlRig(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UControlRigAnimInstance> @ 14a2185c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UControlRigAnimInstance>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAnimInstance *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UControlRigAnimInstance::GetPrivateStaticClass();
  this = (UAnimInstance *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAnimInstance *)0x0) {
    UAnimInstance::UAnimInstance(this,param_1);
    *(undefined ***)this = &___7UControlRigAnimInstance__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UControlRigBlueprintGeneratedClass> @ 14a218670

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UControlRigBlueprintGeneratedClass>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  URigVMBlueprintGeneratedClass *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UControlRigBlueprintGeneratedClass::GetPrivateStaticClass();
  this = (URigVMBlueprintGeneratedClass *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (URigVMBlueprintGeneratedClass *)0x0) {
    URigVMBlueprintGeneratedClass::URigVMBlueprintGeneratedClass(this,param_1);
    this->_padding_ = (longlong)&UControlRigBlueprintGeneratedClass::_vftable__for__UClass__;
    this[1]._padding_ = 0;
    this->_padding_ =
         (longlong)
         &UControlRigBlueprintGeneratedClass::_vftable__for__IBlueprintPropertyGuidProvider__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UControlRigBlueprintGeneratedClass__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FName::FName((FName *)((longlong)&this[1]._padding_ + 4),L"Control Rig");
    FRigModuleSettings::FRigModuleSettings((FRigModuleSettings *)&this[1]._padding_);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UControlRigComponent> @ 14a2187a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UControlRigComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UControlRigComponent *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UControlRigComponent::GetPrivateStaticClass();
  pUVar3 = (UControlRigComponent *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UControlRigComponent *)0x0) {
    pUVar3 = UControlRigComponent::UControlRigComponent(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UControlRigOverrideAsset> @ 14a218840

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UControlRigOverrideAsset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UControlRigOverrideAsset::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UControlRigOverrideAsset__6B_;
    FControlRigOverrideContainer::FControlRigOverrideContainer
              ((FControlRigOverrideContainer *)(pUVar1 + 1));
    *(undefined8 *)&pUVar1[9].field_0x18 = 0;
    *(undefined8 *)&pUVar1[9].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 10) = 0;
    *(undefined8 *)&pUVar1[10].field_0x8 = 2;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UControlRigReplay> @ 14a218920

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UControlRigReplay>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UControlRigReplay *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UControlRigReplay::GetPrivateStaticClass();
  pUVar3 = (UControlRigReplay *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UControlRigReplay *)0x0) {
    pUVar3 = UControlRigReplay::UControlRigReplay(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UControlRigShapeLibrary> @ 14a2189c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UControlRigShapeLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UControlRigShapeLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UControlRigShapeLibrary__6B_;
    FControlRigShapeDefinition::FControlRigShapeDefinition
              ((FControlRigShapeDefinition *)&pUVar1[1].field_0x8);
    *(undefined8 *)&pUVar1[5].field_0x8 = 0;
    *(undefined8 *)&pUVar1[5].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 6) = 0;
    *(undefined8 *)&pUVar1[5].field_0x18 = 0;
    *(undefined8 *)&pUVar1[5].field_0x10 = 0;
    FUtf8String::Reset((FUtf8String *)&pUVar1[5].field_0x20,0);
    *(undefined8 *)&pUVar1[6].field_0x8 = 0;
    *(undefined8 *)&pUVar1[6].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 7) = 0;
    *(undefined8 *)&pUVar1[6].field_0x18 = 0;
    *(undefined8 *)&pUVar1[6].field_0x10 = 0;
    FUtf8String::Reset((FUtf8String *)&pUVar1[6].field_0x20,0);
    *(undefined8 *)&pUVar1[7].field_0x8 = 0;
    *(undefined8 *)&pUVar1[7].field_0x10 = 0;
    *(undefined8 *)&pUVar1[7].field_0x18 = 0;
    *(undefined8 *)&pUVar1[7].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 8) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UControlRigShapeLibraryLink> @ 14a218af0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UControlRigShapeLibraryLink>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNameSpacedUserData *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UControlRigShapeLibraryLink::GetPrivateStaticClass();
  this = (UNameSpacedUserData *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNameSpacedUserData *)0x0) {
    UNameSpacedUserData::UNameSpacedUserData(this,param_1);
    this->_padding_ = (longlong)&___7UControlRigShapeLibraryLink__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1]._padding_,0);
    this[1].NameSpace.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].NameSpace.Data.ArrayNum = 0;
    this[1].NameSpace.Data.ArrayMax = 0;
    *(undefined8 *)&this[1].CachedUserData = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UControlRigTestData> @ 14a218be0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UControlRigTestData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UControlRigReplay *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UControlRigTestData::GetPrivateStaticClass();
  this = (UControlRigReplay *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UControlRigReplay *)0x0) {
    UControlRigReplay::UControlRigReplay(this,param_1);
    this->_padding_ = (longlong)&___7UControlRigTestData__6B_;
    FControlRigTestDataFrame::FControlRigTestDataFrame((FControlRigTestDataFrame *)(this + 1));
    *(undefined8 *)&this[1].InputTracks.ComponentKeyToTrackName.field_0x30 = 0;
    *(undefined8 *)&this[1].InputTracks.ComponentKeyToTrackName.field_0x38 = 0;
    *(undefined8 *)&this[1].InputTracks.ComponentKeyToTrackName.field_0x40 = 0;
    *(undefined8 *)&this[1].InputTracks.ComponentKeyToTrackName.field_0x48 = 0;
    *(undefined8 *)&this[1].InputTracks.MetadataToTrackName = 0;
    *(undefined8 *)&this[1].InputTracks.MetadataToTrackName.field_0x8 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UControlRigValidationPass> @ 14a218cc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UControlRigValidationPass>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UControlRigValidationPass::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UControlRigValidationPass__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UControlRigValidator> @ 14a218d70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UControlRigValidator>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UControlRigValidator::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UControlRigValidator__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined4 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined4 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UModularRig> @ 14a218e40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UModularRig>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UControlRig *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UModularRig::GetPrivateStaticClass();
  this = (UControlRig *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UControlRig *)0x0) {
    UControlRig::UControlRig(this,param_1);
    this->_padding_ = (longlong)&UModularRig::_vftable__for__UObject__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UModularRig::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UModularRig::_vftable__for__INodeMappingProviderInterface__;
    this->_padding_ = (longlong)&UModularRig::_vftable__for__IRigHierarchyProvider__;
    this->_padding_ = (longlong)&UModularRig::_vftable__for__IMeshDeformerProducer__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 1;
    FModularRigModel::FModularRigModel((FModularRigModel *)&this[1]._padding_);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UModularRigController> @ 14a218fe0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UModularRigController>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UModularRigController::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UModularRigController__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 2;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTransformableControlHandle> @ 14a2190a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UTransformableControlHandle>(FVTableHelper *param_1)

{
  double dVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UTransformableHandle *this;
  undefined8 local_res10;
  
  local_res10 = 0;
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UTransformableControlHandle::GetPrivateStaticClass();
  this = (UTransformableHandle *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UTransformableHandle *)0x0) {
    UTransformableHandle::UTransformableHandle(this,param_1);
    this->_padding_ = (longlong)&___7UTransformableControlHandle__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1]._padding_,0);
    this[1].bNotifying = false;
    *(undefined3 *)&this[1].field_0x29 = 0;
    this[1].ConstraintBindingID.Guid.A = 0;
    *(undefined8 *)&this[1].ConstraintBindingID.Guid.D = 0;
    *(undefined8 *)&this[1].ConstraintBindingID.ResolveParentIndex = 0;
    *(undefined8 *)&this[1].OnHandleModified = 0;
    local_res10 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&this[1].OnHandleModified,(FObjectPtr)&local_res10);
    *(undefined8 *)&this[1].OnHandleModified.field_0x10 = 0;
    this[2]._padding_ = 0;
    *(double (*) [2])&this[2]._padding_ =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *(double (*) [2])&this[2].ConstraintBindingID.Guid.B =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *(double (*) [2])&this[2].ConstraintBindingID.ResolveParentIndex =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    dVar1 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
    *(double *)&this[2].OnHandleModified.field_0x8 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
    *(double *)&this[2].OnHandleModified.field_0x10 = dVar1;
    *(double (*) [2])&this[2].OnHandleModified.field_0x18 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    dVar1 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    this[3]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
    this[3]._padding_ = (longlong)dVar1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<int,int,``FControlRigStats::Dump'::__l2::FCounterTree::Dump'::__l2::<lambda_1>,TLess<void>_> @ 14a219200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<int,int,__FControlRigStats::Dump_::__l2::FCounterTree::Dump_::__l2::<lambda_1>,TLess<void>_>
          (int *param_1,int param_2,<lambda_1> param_3,TLess<void> param_4)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  uint *puVar10;
  int **ppiVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  float fVar15;
  undefined1 auStackY_3d8 [32];
  TLess<void> local_3a8 [8];
  TLess<void> local_3a0;
  uint *local_398;
  int local_390;
  int **local_388;
  <lambda_1> local_380;
  TReversePredicate<TLess<void>_> local_378 [3];
  int *local_360;
  int *local_358;
  int *local_350;
  undefined4 local_348;
  undefined1 local_340 [744];
  ulonglong local_58;
  
  if (1 < param_2) {
    local_58 = __security_cookie.value ^ (ulonglong)auStackY_3d8;
    local_350 = param_1 + (longlong)param_2 + -1;
    local_3a0 = param_4;
    local_358 = param_1;
    fVar15 = logf((float)param_2 * (float)param_2);
    local_348 = (undefined4)(longlong)fVar15;
    memset(local_340,0,0x2e8);
    dVar3 = __real_40f86a0000000000;
    ppiVar11 = &local_358;
    do {
      local_398 = (uint *)ppiVar11[1];
      puVar8 = (uint *)*ppiVar11;
      local_360 = ppiVar11[2];
      iVar7 = (int)((longlong)local_398 - (longlong)puVar8 >> 2) + 1;
      local_390 = (int)local_360;
      puVar10 = puVar8;
      local_388 = ppiVar11;
      if ((int)local_360 != 0) {
LAB_14a2192e5:
        puVar14 = local_398;
        if (8 < iVar7) {
          if (iVar7 < 0) {
            iVar7 = iVar7 + 1;
          }
          puVar12 = local_398 + 1;
          uVar6 = puVar10[iVar7 >> 1];
          puVar10[iVar7 >> 1] = *puVar10;
          *puVar10 = uVar6;
          puVar8 = puVar10;
LAB_14a219320:
          puVar8 = puVar8 + 1;
          if (puVar8 <= puVar14) goto code_r0x00014a21932d;
          goto LAB_14a219401;
        }
        if (puVar10 < local_398) {
          do {
            puVar8 = local_398;
            puVar14 = puVar10 + 1;
            puVar12 = puVar10;
            if (puVar10 + 1 <= local_398) {
              do {
                uVar6 = *puVar14;
                uVar5 = 0;
                if ((int)uVar6 < (param_3.LocalChildren)->ArrayNum) {
                  uVar5 = ~uVar6 >> 0x1f;
                }
                if ((uVar5 == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), puVar8 = local_398, bVar4)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                uVar5 = *puVar12;
                dVar1 = *(double *)
                         (*(longlong *)
                           (((param_3.LocalChildren)->AllocatorInstance).Data +
                           (longlong)(int)uVar6 * 8) + 8);
                uVar6 = 0;
                if ((int)uVar5 < (param_3.LocalChildren)->ArrayNum) {
                  uVar6 = ~uVar5 >> 0x1f;
                }
                if ((uVar6 == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), puVar8 = local_398, bVar4)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                if (0x7fffffff -
                    (int)(*(double *)
                           (*(longlong *)
                             (((param_3.LocalChildren)->AllocatorInstance).Data +
                             (longlong)(int)uVar5 * 8) + 8) * dVar3) <
                    0x7fffffff - (int)(dVar1 * dVar3)) {
                  puVar12 = puVar14;
                }
                puVar14 = puVar14 + 1;
              } while (puVar14 <= puVar8);
            }
            uVar6 = *puVar12;
            local_398 = puVar8 + -1;
            *puVar12 = *puVar8;
            *puVar8 = uVar6;
            ppiVar11 = local_388;
          } while (puVar10 < local_398);
        }
        goto LAB_14a219796;
      }
LAB_14a2195ad:
      local_3a8[0] = param_4;
      local_380.LocalChildren = param_3.LocalChildren;
      if (iVar7 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Num >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                           ,0xb9,L"Algo::HeapSortInternal called with negative count");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
LAB_14a21972d:
        local_378[0].Predicate = local_3a8;
        HeapifyInternal<int,int,__FControlRigStats::Dump_::__l2::FCounterTree::Dump_::__l2::<lambda_1>,TReversePredicate<TLess<void>_>_>
                  ((int *)puVar8,iVar7,param_3,local_3a8);
        iVar7 = iVar7 + -1;
        if (0 < iVar7) {
          lVar9 = (longlong)iVar7 * 4;
          do {
            uVar6 = *puVar8;
            *puVar8 = *(uint *)(lVar9 + (longlong)puVar8);
            *(uint *)(lVar9 + (longlong)puVar8) = uVar6;
            HeapSiftDown<int,int,__FControlRigStats::Dump_::__l2::FCounterTree::Dump_::__l2::<lambda_1>,TReversePredicate<TLess<void>_>_>
                      ((int *)puVar8,0,iVar7,&local_380,local_378);
            iVar7 = iVar7 + -1;
            lVar9 = lVar9 + -4;
          } while (0 < iVar7);
        }
      }
      else if (iVar7 != 0) goto LAB_14a21972d;
LAB_14a219796:
      ppiVar11 = ppiVar11 + -3;
    } while (&local_358 <= ppiVar11);
  }
  return;
code_r0x00014a21932d:
  uVar6 = *puVar8;
  uVar5 = 0;
  if ((int)uVar6 < (param_3.LocalChildren)->ArrayNum) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar5 = *puVar10;
  dVar1 = *(double *)
           (*(longlong *)
             (((param_3.LocalChildren)->AllocatorInstance).Data + (longlong)(int)uVar6 * 8) + 8);
  uVar6 = 0;
  if ((int)uVar5 < (param_3.LocalChildren)->ArrayNum) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (0x7fffffff - (int)(dVar1 * dVar3) <=
      0x7fffffff -
      (int)(*(double *)
             (*(longlong *)
               (((param_3.LocalChildren)->AllocatorInstance).Data + (longlong)(int)uVar5 * 8) + 8) *
           dVar3)) goto LAB_14a219320;
LAB_14a219401:
  do {
    puVar13 = puVar12;
    puVar12 = puVar13 + -1;
    if (puVar12 <= puVar10) break;
    uVar6 = *puVar10;
    uVar5 = 0;
    if ((int)uVar6 < (param_3.LocalChildren)->ArrayNum) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar5 = *puVar12;
    dVar1 = *(double *)
             (*(longlong *)
               (((param_3.LocalChildren)->AllocatorInstance).Data + (longlong)(int)uVar6 * 8) + 8);
    uVar6 = 0;
    if ((int)uVar5 < (param_3.LocalChildren)->ArrayNum) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  } while (0x7fffffff - (int)(dVar1 * dVar3) <=
           0x7fffffff -
           (int)(*(double *)
                  (*(longlong *)
                    (((param_3.LocalChildren)->AllocatorInstance).Data + (longlong)(int)uVar5 * 8) +
                  8) * dVar3));
  if (puVar8 <= puVar12) {
    uVar6 = *puVar8;
    *puVar8 = *puVar12;
    *puVar12 = uVar6;
    goto LAB_14a219320;
  }
  uVar6 = *puVar10;
  *puVar10 = *puVar12;
  local_390 = local_390 + -1;
  *puVar12 = uVar6;
  param_4 = local_3a0;
  if ((longlong)((longlong)puVar12 + (-4 - (longlong)puVar10) & 0xfffffffffffffffcU) <
      (longlong)((longlong)puVar14 - (longlong)puVar8 & 0xfffffffffffffffcU)) {
    if (puVar8 < local_398) {
      *ppiVar11 = (int *)puVar8;
      ppiVar11[1] = (int *)local_398;
      *(int *)(ppiVar11 + 2) = local_390;
      ppiVar11 = ppiVar11 + 3;
      local_388 = ppiVar11;
    }
    if (puVar12 <= puVar10 + 1) goto LAB_14a219796;
    local_398 = puVar13 + -2;
    puVar8 = puVar10;
  }
  else {
    if (puVar10 + 1 < puVar12) {
      *ppiVar11 = (int *)puVar10;
      ppiVar11[1] = (int *)(puVar13 + -2);
      *(int *)(ppiVar11 + 2) = local_390;
      ppiVar11 = ppiVar11 + 3;
      local_388 = ppiVar11;
    }
    if (local_398 <= puVar8) goto LAB_14a219796;
  }
  iVar7 = (int)((longlong)local_398 - (longlong)puVar8 >> 2) + 1;
  puVar10 = puVar8;
  if (local_390 == 0) goto LAB_14a2195ad;
  goto LAB_14a2192e5;
}

// IntroSortInternal<FRigModuleReference,int,`UModularRigController::ReorderModule'::__l2::<lambda_1>,TLess<void>_> @ 14a219810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FRigModuleReference,int,_UModularRigController::ReorderModule_::__l2::<lambda_1>,TLess<void>_>
          (FRigModuleReference *param_1,int param_2,<lambda_1> *param_3,TLess<void> param_4)

{
  FRigModuleReference *pFVar1;
  FName FVar2;
  FName FVar3;
  undefined8 uVar4;
  FName FVar5;
  FName FVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  bool bVar18;
  undefined7 uVar19;
  FNameEntryId FVar20;
  uint uVar21;
  FNameEntryId FVar22;
  uint uVar23;
  FNameEntryId FVar24;
  uint uVar25;
  FNameEntryId FVar26;
  uint uVar27;
  FName *pFVar28;
  FRigModuleReference *pFVar29;
  FRigModuleReference *pFVar30;
  FRigModuleReference *pFVar31;
  FRigModuleReference *pFVar32;
  FRigModuleReference *pFVar33;
  FName *pFVar34;
  FName *pFVar35;
  FRigModuleReference *pFVar36;
  FScriptContainerElement *pFVar37;
  int iVar38;
  FRigModuleReference *pFVar39;
  int iVar40;
  longlong lVar41;
  FRigModuleReference *pFVar42;
  FRigModuleReference **ppFVar43;
  FRigModuleReference *pFVar44;
  float fVar45;
  undefined1 auStackY_698 [32];
  <lambda_1> local_650 [2];
  FRigModuleReference *local_630;
  FName local_628 [90];
  FRigModuleReference *local_358;
  FRigModuleReference *local_350;
  undefined4 local_348;
  undefined1 local_340 [744];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_698;
  if (param_2 < 2) {
    pFVar37 = (param_3->AllModuleNames).AllocatorInstance.Data;
  }
  else {
    local_350 = param_1 + (longlong)param_2 + -1;
    local_358 = param_1;
    fVar45 = logf((float)param_2 * (float)param_2);
    local_348 = (undefined4)(longlong)fVar45;
    memset(local_340,0,0x2e8);
    ppFVar43 = &local_358;
    do {
      pFVar39 = ppFVar43[1];
      pFVar32 = *ppFVar43;
      pFVar1 = ppFVar43[2];
      local_630._0_4_ = (int)pFVar1;
      iVar40 = (int)(((longlong)pFVar39 - (longlong)pFVar32) / 0x2d0) + 1;
      pFVar44 = pFVar32;
      if ((int)local_630 != 0) {
LAB_14a219921:
        if (8 < iVar40) {
          lVar41 = 5;
          pFVar32 = pFVar44 + iVar40 / 2;
          pFVar35 = local_628;
          do {
            pFVar28 = pFVar35;
            pFVar42 = pFVar32;
            pFVar35 = pFVar28 + 0x10;
            FVar2 = (FName)(pFVar42->ShortName_DEPRECATED).Data.AllocatorInstance.Data;
            iVar38 = (pFVar42->ShortName_DEPRECATED).Data.ArrayNum;
            iVar7 = (pFVar42->ShortName_DEPRECATED).Data.ArrayMax;
            FVar3 = *(FName *)&pFVar42->bShortNameBasedOnPath_DEPRECATED;
            *pFVar28 = pFVar42->Name;
            pFVar28[1] = FVar2;
            FVar2 = (FName)(pFVar42->ParentPath_DEPRECATED).Data.AllocatorInstance.Data;
            iVar8 = (pFVar42->ParentPath_DEPRECATED).Data.ArrayNum;
            iVar9 = (pFVar42->ParentPath_DEPRECATED).Data.ArrayMax;
            pFVar28[2].ComparisonIndex = (FNameEntryId)iVar38;
            pFVar28[2].Number = iVar7;
            pFVar28[3] = FVar3;
            FVar3 = pFVar42->ParentModuleName;
            uVar10 = *(undefined4 *)&(pFVar42->Class).SoftObjectPtr.field_0x0;
            uVar11 = *(undefined4 *)&(pFVar42->Class).SoftObjectPtr.field_0x4;
            pFVar28[4] = FVar2;
            pFVar28[5].ComparisonIndex = (FNameEntryId)iVar8;
            pFVar28[5].Number = iVar9;
            uVar12 = *(undefined4 *)&(pFVar42->Class).SoftObjectPtr.field_0x8;
            uVar13 = *(undefined4 *)&(pFVar42->Class).SoftObjectPtr.field_0xc;
            uVar14 = *(undefined4 *)&(pFVar42->Class).SoftObjectPtr.field_0x10;
            uVar15 = *(undefined4 *)&(pFVar42->Class).SoftObjectPtr.field_0x14;
            pFVar28[6] = FVar3;
            pFVar28[7].ComparisonIndex = (FNameEntryId)uVar10;
            pFVar28[7].Number = uVar11;
            uVar10 = *(undefined4 *)&(pFVar42->Class).SoftObjectPtr.field_0x18;
            uVar11 = *(undefined4 *)&(pFVar42->Class).SoftObjectPtr.field_0x1c;
            uVar16 = *(undefined4 *)&(pFVar42->Class).SoftObjectPtr.field_0x20;
            uVar17 = *(undefined4 *)&(pFVar42->Class).SoftObjectPtr.field_0x24;
            pFVar28[8].ComparisonIndex = (FNameEntryId)uVar12;
            pFVar28[8].Number = uVar13;
            pFVar28[9].ComparisonIndex = (FNameEntryId)uVar14;
            pFVar28[9].Number = uVar15;
            uVar12 = *(undefined4 *)&(pFVar42->Connections_DEPRECATED).field_0x0;
            uVar13 = *(undefined4 *)&(pFVar42->Connections_DEPRECATED).field_0x4;
            uVar14 = *(undefined4 *)&(pFVar42->Connections_DEPRECATED).field_0x8;
            uVar15 = *(undefined4 *)&(pFVar42->Connections_DEPRECATED).field_0xc;
            pFVar28[10].ComparisonIndex = (FNameEntryId)uVar10;
            pFVar28[10].Number = uVar11;
            pFVar28[0xb].ComparisonIndex = (FNameEntryId)uVar16;
            pFVar28[0xb].Number = uVar17;
            uVar10 = *(undefined4 *)&(pFVar42->Connections_DEPRECATED).field_0x10;
            uVar11 = *(undefined4 *)&(pFVar42->Connections_DEPRECATED).field_0x14;
            uVar16 = *(undefined4 *)&(pFVar42->Connections_DEPRECATED).field_0x18;
            uVar17 = *(undefined4 *)&(pFVar42->Connections_DEPRECATED).field_0x1c;
            pFVar28[0xc].ComparisonIndex = (FNameEntryId)uVar12;
            pFVar28[0xc].Number = uVar13;
            pFVar28[0xd].ComparisonIndex = (FNameEntryId)uVar14;
            pFVar28[0xd].Number = uVar15;
            pFVar28[0xe].ComparisonIndex = (FNameEntryId)uVar10;
            pFVar28[0xe].Number = uVar11;
            pFVar28[0xf].ComparisonIndex = (FNameEntryId)uVar16;
            pFVar28[0xf].Number = uVar17;
            lVar41 = lVar41 + -1;
            pFVar32 = (FRigModuleReference *)&(pFVar42->Connections_DEPRECATED).field_0x20;
          } while (lVar41 != 0);
          uVar10 = *(undefined4 *)&(pFVar42->Connections_DEPRECATED).field_0x24;
          uVar11 = *(undefined4 *)&(pFVar42->Connections_DEPRECATED).field_0x28;
          uVar12 = *(undefined4 *)&(pFVar42->Connections_DEPRECATED).field_0x2c;
          uVar13 = *(undefined4 *)&(pFVar42->Connections_DEPRECATED).field_0x30;
          uVar14 = *(undefined4 *)&(pFVar42->Connections_DEPRECATED).field_0x34;
          uVar15 = *(undefined4 *)&(pFVar42->Connections_DEPRECATED).field_0x38;
          uVar16 = *(undefined4 *)&(pFVar42->Connections_DEPRECATED).field_0x3c;
          pFVar35->ComparisonIndex =
               (FNameEntryId)*(undefined4 *)&(pFVar42->Connections_DEPRECATED).field_0x20;
          pFVar35->Number = uVar10;
          pFVar28[0x11].ComparisonIndex = (FNameEntryId)uVar11;
          pFVar28[0x11].Number = uVar12;
          uVar10 = *(undefined4 *)&(pFVar42->Connections_DEPRECATED).field_0x40;
          uVar11 = *(undefined4 *)&(pFVar42->Connections_DEPRECATED).field_0x44;
          uVar12 = *(undefined4 *)&(pFVar42->Connections_DEPRECATED).field_0x48;
          uVar17 = *(undefined4 *)&(pFVar42->Connections_DEPRECATED).field_0x4c;
          pFVar28[0x12].ComparisonIndex = (FNameEntryId)uVar13;
          pFVar28[0x12].Number = uVar14;
          pFVar28[0x13].ComparisonIndex = (FNameEntryId)uVar15;
          pFVar28[0x13].Number = uVar16;
          uVar13 = *(undefined4 *)&(pFVar42->ConfigValues_DEPRECATED).field_0x0;
          uVar14 = *(undefined4 *)&(pFVar42->ConfigValues_DEPRECATED).field_0x4;
          uVar15 = *(undefined4 *)&(pFVar42->ConfigValues_DEPRECATED).field_0x8;
          uVar16 = *(undefined4 *)&(pFVar42->ConfigValues_DEPRECATED).field_0xc;
          pFVar28[0x14].ComparisonIndex = (FNameEntryId)uVar10;
          pFVar28[0x14].Number = uVar11;
          pFVar28[0x15].ComparisonIndex = (FNameEntryId)uVar12;
          pFVar28[0x15].Number = uVar17;
          uVar10 = *(undefined4 *)&(pFVar42->ConfigValues_DEPRECATED).field_0x10;
          uVar11 = *(undefined4 *)&(pFVar42->ConfigValues_DEPRECATED).field_0x14;
          uVar12 = *(undefined4 *)&(pFVar42->ConfigValues_DEPRECATED).field_0x18;
          uVar17 = *(undefined4 *)&(pFVar42->ConfigValues_DEPRECATED).field_0x1c;
          pFVar28[0x16].ComparisonIndex = (FNameEntryId)uVar13;
          pFVar28[0x16].Number = uVar14;
          pFVar28[0x17].ComparisonIndex = (FNameEntryId)uVar15;
          pFVar28[0x17].Number = uVar16;
          pFVar28[0x18].ComparisonIndex = (FNameEntryId)uVar10;
          pFVar28[0x18].Number = uVar11;
          pFVar28[0x19].ComparisonIndex = (FNameEntryId)uVar12;
          pFVar28[0x19].Number = uVar17;
          lVar41 = 5;
          pFVar32 = pFVar44 + iVar40 / 2;
          pFVar42 = pFVar44;
          do {
            pFVar33 = pFVar42;
            pFVar29 = pFVar32;
            pFVar32 = (FRigModuleReference *)&(pFVar29->Connections_DEPRECATED).field_0x20;
            pFVar37 = (pFVar33->ShortName_DEPRECATED).Data.AllocatorInstance.Data;
            pFVar42 = (FRigModuleReference *)&(pFVar33->Connections_DEPRECATED).field_0x20;
            pFVar29->Name = pFVar33->Name;
            (pFVar29->ShortName_DEPRECATED).Data.AllocatorInstance.Data = pFVar37;
            iVar40 = (pFVar33->ShortName_DEPRECATED).Data.ArrayMax;
            bVar18 = pFVar33->bShortNameBasedOnPath_DEPRECATED;
            uVar19 = *(undefined7 *)&pFVar33->field_0x19;
            (pFVar29->ShortName_DEPRECATED).Data.ArrayNum =
                 (pFVar33->ShortName_DEPRECATED).Data.ArrayNum;
            (pFVar29->ShortName_DEPRECATED).Data.ArrayMax = iVar40;
            pFVar29->bShortNameBasedOnPath_DEPRECATED = bVar18;
            *(undefined7 *)&pFVar29->field_0x19 = uVar19;
            iVar40 = (pFVar33->ParentPath_DEPRECATED).Data.ArrayNum;
            iVar38 = (pFVar33->ParentPath_DEPRECATED).Data.ArrayMax;
            (pFVar29->ParentPath_DEPRECATED).Data.AllocatorInstance.Data =
                 (pFVar33->ParentPath_DEPRECATED).Data.AllocatorInstance.Data;
            (pFVar29->ParentPath_DEPRECATED).Data.ArrayNum = iVar40;
            (pFVar29->ParentPath_DEPRECATED).Data.ArrayMax = iVar38;
            uVar4 = *(undefined8 *)&(pFVar33->Class).SoftObjectPtr;
            pFVar29->ParentModuleName = pFVar33->ParentModuleName;
            *(undefined8 *)&(pFVar29->Class).SoftObjectPtr = uVar4;
            uVar4 = *(undefined8 *)&(pFVar33->Class).SoftObjectPtr.field_0x10;
            *(undefined8 *)&(pFVar29->Class).SoftObjectPtr.field_0x8 =
                 *(undefined8 *)&(pFVar33->Class).SoftObjectPtr.field_0x8;
            *(undefined8 *)&(pFVar29->Class).SoftObjectPtr.field_0x10 = uVar4;
            uVar4 = *(undefined8 *)&(pFVar33->Class).SoftObjectPtr.field_0x20;
            *(undefined8 *)&(pFVar29->Class).SoftObjectPtr.field_0x18 =
                 *(undefined8 *)&(pFVar33->Class).SoftObjectPtr.field_0x18;
            *(undefined8 *)&(pFVar29->Class).SoftObjectPtr.field_0x20 = uVar4;
            uVar4 = *(undefined8 *)&(pFVar33->Connections_DEPRECATED).field_0x8;
            *(undefined8 *)&pFVar29->Connections_DEPRECATED =
                 *(undefined8 *)&pFVar33->Connections_DEPRECATED;
            *(undefined8 *)&(pFVar29->Connections_DEPRECATED).field_0x8 = uVar4;
            uVar4 = *(undefined8 *)&(pFVar33->Connections_DEPRECATED).field_0x18;
            *(undefined8 *)&(pFVar29->Connections_DEPRECATED).field_0x10 =
                 *(undefined8 *)&(pFVar33->Connections_DEPRECATED).field_0x10;
            *(undefined8 *)&(pFVar29->Connections_DEPRECATED).field_0x18 = uVar4;
            lVar41 = lVar41 + -1;
          } while (lVar41 != 0);
          uVar4 = *(undefined8 *)&(pFVar33->Connections_DEPRECATED).field_0x28;
          lVar41 = 5;
          *(undefined8 *)pFVar32 = *(undefined8 *)pFVar42;
          *(undefined8 *)&(pFVar29->Connections_DEPRECATED).field_0x28 = uVar4;
          uVar4 = *(undefined8 *)&(pFVar33->Connections_DEPRECATED).field_0x38;
          *(undefined8 *)&(pFVar29->Connections_DEPRECATED).field_0x30 =
               *(undefined8 *)&(pFVar33->Connections_DEPRECATED).field_0x30;
          *(undefined8 *)&(pFVar29->Connections_DEPRECATED).field_0x38 = uVar4;
          uVar4 = *(undefined8 *)&(pFVar33->Connections_DEPRECATED).field_0x48;
          *(undefined8 *)&(pFVar29->Connections_DEPRECATED).field_0x40 =
               *(undefined8 *)&(pFVar33->Connections_DEPRECATED).field_0x40;
          *(undefined8 *)&(pFVar29->Connections_DEPRECATED).field_0x48 = uVar4;
          uVar4 = *(undefined8 *)&(pFVar33->ConfigValues_DEPRECATED).field_0x8;
          *(undefined8 *)&pFVar29->ConfigValues_DEPRECATED =
               *(undefined8 *)&pFVar33->ConfigValues_DEPRECATED;
          *(undefined8 *)&(pFVar29->ConfigValues_DEPRECATED).field_0x8 = uVar4;
          uVar4 = *(undefined8 *)&(pFVar33->ConfigValues_DEPRECATED).field_0x18;
          *(undefined8 *)&(pFVar29->ConfigValues_DEPRECATED).field_0x10 =
               *(undefined8 *)&(pFVar33->ConfigValues_DEPRECATED).field_0x10;
          *(undefined8 *)&(pFVar29->ConfigValues_DEPRECATED).field_0x18 = uVar4;
          pFVar32 = pFVar44;
          pFVar35 = local_628;
          do {
            pFVar28 = (FName *)&(pFVar32->Connections_DEPRECATED).field_0x20;
            FVar2 = pFVar35[1];
            FVar20.Value = pFVar35[2].ComparisonIndex.Value;
            uVar21 = pFVar35[2].Number;
            FVar3 = pFVar35[3];
            pFVar34 = pFVar35 + 0x10;
            pFVar32->Name = *pFVar35;
            (pFVar32->ShortName_DEPRECATED).Data.AllocatorInstance.Data =
                 (FScriptContainerElement *)FVar2;
            FVar2 = pFVar35[4];
            FVar22.Value = pFVar35[5].ComparisonIndex.Value;
            uVar23 = pFVar35[5].Number;
            (pFVar32->ShortName_DEPRECATED).Data.ArrayNum = FVar20.Value;
            (pFVar32->ShortName_DEPRECATED).Data.ArrayMax = uVar21;
            *(FName *)&pFVar32->bShortNameBasedOnPath_DEPRECATED = FVar3;
            FVar3 = pFVar35[6];
            FVar20.Value = pFVar35[7].ComparisonIndex.Value;
            uVar21 = pFVar35[7].Number;
            (pFVar32->ParentPath_DEPRECATED).Data.AllocatorInstance.Data =
                 (FScriptContainerElement *)FVar2;
            (pFVar32->ParentPath_DEPRECATED).Data.ArrayNum = FVar22.Value;
            (pFVar32->ParentPath_DEPRECATED).Data.ArrayMax = uVar23;
            FVar22.Value = pFVar35[8].ComparisonIndex.Value;
            uVar23 = pFVar35[8].Number;
            FVar24.Value = pFVar35[9].ComparisonIndex.Value;
            uVar25 = pFVar35[9].Number;
            pFVar32->ParentModuleName = FVar3;
            *(uint *)&(pFVar32->Class).SoftObjectPtr.field_0x0 = FVar20.Value;
            *(uint *)&(pFVar32->Class).SoftObjectPtr.field_0x4 = uVar21;
            FVar20.Value = pFVar35[10].ComparisonIndex.Value;
            uVar21 = pFVar35[10].Number;
            FVar26.Value = pFVar35[0xb].ComparisonIndex.Value;
            uVar27 = pFVar35[0xb].Number;
            *(uint *)&(pFVar32->Class).SoftObjectPtr.field_0x8 = FVar22.Value;
            *(uint *)&(pFVar32->Class).SoftObjectPtr.field_0xc = uVar23;
            *(uint *)&(pFVar32->Class).SoftObjectPtr.field_0x10 = FVar24.Value;
            *(uint *)&(pFVar32->Class).SoftObjectPtr.field_0x14 = uVar25;
            FVar22.Value = pFVar35[0xc].ComparisonIndex.Value;
            uVar23 = pFVar35[0xc].Number;
            FVar24.Value = pFVar35[0xd].ComparisonIndex.Value;
            uVar25 = pFVar35[0xd].Number;
            *(uint *)&(pFVar32->Class).SoftObjectPtr.field_0x18 = FVar20.Value;
            *(uint *)&(pFVar32->Class).SoftObjectPtr.field_0x1c = uVar21;
            *(uint *)&(pFVar32->Class).SoftObjectPtr.field_0x20 = FVar26.Value;
            *(uint *)&(pFVar32->Class).SoftObjectPtr.field_0x24 = uVar27;
            FVar20.Value = pFVar35[0xe].ComparisonIndex.Value;
            uVar21 = pFVar35[0xe].Number;
            FVar26.Value = pFVar35[0xf].ComparisonIndex.Value;
            uVar27 = pFVar35[0xf].Number;
            *(uint *)&(pFVar32->Connections_DEPRECATED).field_0x0 = FVar22.Value;
            *(uint *)&(pFVar32->Connections_DEPRECATED).field_0x4 = uVar23;
            *(uint *)&(pFVar32->Connections_DEPRECATED).field_0x8 = FVar24.Value;
            *(uint *)&(pFVar32->Connections_DEPRECATED).field_0xc = uVar25;
            *(uint *)&(pFVar32->Connections_DEPRECATED).field_0x10 = FVar20.Value;
            *(uint *)&(pFVar32->Connections_DEPRECATED).field_0x14 = uVar21;
            *(uint *)&(pFVar32->Connections_DEPRECATED).field_0x18 = FVar26.Value;
            *(uint *)&(pFVar32->Connections_DEPRECATED).field_0x1c = uVar27;
            lVar41 = lVar41 + -1;
            pFVar32 = (FRigModuleReference *)pFVar28;
            pFVar35 = pFVar34;
          } while (lVar41 != 0);
          pFVar42 = pFVar39 + 1;
          pFVar32 = pFVar44;
          do {
            FVar2 = pFVar34[1];
            FVar3 = pFVar34[2];
            FVar5 = pFVar34[3];
            *pFVar28 = *pFVar34;
            pFVar28[1] = FVar2;
            FVar2 = pFVar34[4];
            FVar6 = pFVar34[5];
            pFVar28[2] = FVar3;
            pFVar28[3] = FVar5;
            FVar3 = pFVar34[6];
            FVar5 = pFVar34[7];
            pFVar28[4] = FVar2;
            pFVar28[5] = FVar6;
            FVar2 = pFVar34[8];
            FVar6 = pFVar34[9];
            pFVar28[6] = FVar3;
            pFVar28[7] = FVar5;
            pFVar28[8] = FVar2;
            pFVar28[9] = FVar6;
            do {
              pFVar32 = pFVar32 + 1;
              if (pFVar39 < pFVar32) break;
              pFVar28 = (FName *)(param_3->AllModuleNames).AllocatorInstance.Data;
              pFVar35 = pFVar28 + (param_3->AllModuleNames).ArrayNum;
              if (pFVar28 != pFVar35) {
                pFVar34 = pFVar28;
                do {
                  if (*pFVar34 == pFVar32->Name) {
                    iVar40 = (int)((longlong)pFVar34 - (longlong)pFVar28 >> 3);
                    goto LAB_14a219b26;
                  }
                  pFVar34 = pFVar34 + 1;
                } while (pFVar34 != pFVar35);
              }
              iVar38 = -1;
              iVar40 = -1;
              if (pFVar28 != pFVar35) {
LAB_14a219b26:
                iVar38 = iVar40;
                pFVar34 = pFVar28;
                do {
                  if (*pFVar34 == pFVar44->Name) {
                    iVar40 = (int)((longlong)pFVar34 - (longlong)pFVar28 >> 3);
                    goto LAB_14a219b47;
                  }
                  pFVar34 = pFVar34 + 1;
                } while (pFVar34 != pFVar35);
              }
              iVar40 = -1;
LAB_14a219b47:
            } while (iVar38 <= iVar40);
            do {
              pFVar29 = pFVar42;
              pFVar42 = pFVar29 + -1;
              if (pFVar42 <= pFVar44) break;
              pFVar28 = (FName *)(param_3->AllModuleNames).AllocatorInstance.Data;
              pFVar35 = pFVar28 + (param_3->AllModuleNames).ArrayNum;
              if (pFVar28 != pFVar35) {
                pFVar34 = pFVar28;
                do {
                  if (*pFVar34 == pFVar44->Name) {
                    iVar40 = (int)((longlong)pFVar34 - (longlong)pFVar28 >> 3);
                    goto LAB_14a219b93;
                  }
                  pFVar34 = pFVar34 + 1;
                } while (pFVar34 != pFVar35);
              }
              iVar38 = -1;
              iVar40 = -1;
              if (pFVar28 != pFVar35) {
LAB_14a219b93:
                iVar38 = iVar40;
                pFVar34 = pFVar28;
                do {
                  if (*pFVar34 == pFVar42->Name) {
                    iVar40 = (int)((longlong)pFVar34 - (longlong)pFVar28 >> 3);
                    goto LAB_14a219bad;
                  }
                  pFVar34 = pFVar34 + 1;
                } while (pFVar34 != pFVar35);
              }
              iVar40 = -1;
LAB_14a219bad:
            } while (iVar38 <= iVar40);
            lVar41 = 5;
            pFVar33 = pFVar44;
            pFVar31 = pFVar32;
            pFVar35 = local_628;
            if (pFVar42 < pFVar32) goto LAB_14a219d71;
            do {
              pFVar28 = pFVar35;
              pFVar29 = pFVar31;
              pFVar35 = pFVar28 + 0x10;
              FVar2 = (FName)(pFVar29->ShortName_DEPRECATED).Data.AllocatorInstance.Data;
              iVar40 = (pFVar29->ShortName_DEPRECATED).Data.ArrayNum;
              iVar38 = (pFVar29->ShortName_DEPRECATED).Data.ArrayMax;
              FVar3 = *(FName *)&pFVar29->bShortNameBasedOnPath_DEPRECATED;
              *pFVar28 = pFVar29->Name;
              pFVar28[1] = FVar2;
              FVar2 = (FName)(pFVar29->ParentPath_DEPRECATED).Data.AllocatorInstance.Data;
              iVar7 = (pFVar29->ParentPath_DEPRECATED).Data.ArrayNum;
              iVar8 = (pFVar29->ParentPath_DEPRECATED).Data.ArrayMax;
              pFVar28[2].ComparisonIndex = (FNameEntryId)iVar40;
              pFVar28[2].Number = iVar38;
              pFVar28[3] = FVar3;
              FVar3 = pFVar29->ParentModuleName;
              uVar10 = *(undefined4 *)&(pFVar29->Class).SoftObjectPtr.field_0x0;
              uVar11 = *(undefined4 *)&(pFVar29->Class).SoftObjectPtr.field_0x4;
              pFVar28[4] = FVar2;
              pFVar28[5].ComparisonIndex = (FNameEntryId)iVar7;
              pFVar28[5].Number = iVar8;
              uVar12 = *(undefined4 *)&(pFVar29->Class).SoftObjectPtr.field_0x8;
              uVar13 = *(undefined4 *)&(pFVar29->Class).SoftObjectPtr.field_0xc;
              uVar14 = *(undefined4 *)&(pFVar29->Class).SoftObjectPtr.field_0x10;
              uVar15 = *(undefined4 *)&(pFVar29->Class).SoftObjectPtr.field_0x14;
              pFVar28[6] = FVar3;
              pFVar28[7].ComparisonIndex = (FNameEntryId)uVar10;
              pFVar28[7].Number = uVar11;
              uVar10 = *(undefined4 *)&(pFVar29->Class).SoftObjectPtr.field_0x18;
              uVar11 = *(undefined4 *)&(pFVar29->Class).SoftObjectPtr.field_0x1c;
              uVar16 = *(undefined4 *)&(pFVar29->Class).SoftObjectPtr.field_0x20;
              uVar17 = *(undefined4 *)&(pFVar29->Class).SoftObjectPtr.field_0x24;
              pFVar28[8].ComparisonIndex = (FNameEntryId)uVar12;
              pFVar28[8].Number = uVar13;
              pFVar28[9].ComparisonIndex = (FNameEntryId)uVar14;
              pFVar28[9].Number = uVar15;
              uVar12 = *(undefined4 *)&(pFVar29->Connections_DEPRECATED).field_0x0;
              uVar13 = *(undefined4 *)&(pFVar29->Connections_DEPRECATED).field_0x4;
              uVar14 = *(undefined4 *)&(pFVar29->Connections_DEPRECATED).field_0x8;
              uVar15 = *(undefined4 *)&(pFVar29->Connections_DEPRECATED).field_0xc;
              pFVar28[10].ComparisonIndex = (FNameEntryId)uVar10;
              pFVar28[10].Number = uVar11;
              pFVar28[0xb].ComparisonIndex = (FNameEntryId)uVar16;
              pFVar28[0xb].Number = uVar17;
              uVar10 = *(undefined4 *)&(pFVar29->Connections_DEPRECATED).field_0x10;
              uVar11 = *(undefined4 *)&(pFVar29->Connections_DEPRECATED).field_0x14;
              uVar16 = *(undefined4 *)&(pFVar29->Connections_DEPRECATED).field_0x18;
              uVar17 = *(undefined4 *)&(pFVar29->Connections_DEPRECATED).field_0x1c;
              pFVar28[0xc].ComparisonIndex = (FNameEntryId)uVar12;
              pFVar28[0xc].Number = uVar13;
              pFVar28[0xd].ComparisonIndex = (FNameEntryId)uVar14;
              pFVar28[0xd].Number = uVar15;
              pFVar28[0xe].ComparisonIndex = (FNameEntryId)uVar10;
              pFVar28[0xe].Number = uVar11;
              pFVar28[0xf].ComparisonIndex = (FNameEntryId)uVar16;
              pFVar28[0xf].Number = uVar17;
              lVar41 = lVar41 + -1;
              pFVar31 = (FRigModuleReference *)&(pFVar29->Connections_DEPRECATED).field_0x20;
            } while (lVar41 != 0);
            uVar10 = *(undefined4 *)&(pFVar29->Connections_DEPRECATED).field_0x24;
            uVar11 = *(undefined4 *)&(pFVar29->Connections_DEPRECATED).field_0x28;
            uVar12 = *(undefined4 *)&(pFVar29->Connections_DEPRECATED).field_0x2c;
            lVar41 = 5;
            uVar13 = *(undefined4 *)&(pFVar29->Connections_DEPRECATED).field_0x30;
            uVar14 = *(undefined4 *)&(pFVar29->Connections_DEPRECATED).field_0x34;
            uVar15 = *(undefined4 *)&(pFVar29->Connections_DEPRECATED).field_0x38;
            uVar16 = *(undefined4 *)&(pFVar29->Connections_DEPRECATED).field_0x3c;
            pFVar35->ComparisonIndex =
                 (FNameEntryId)*(undefined4 *)&(pFVar29->Connections_DEPRECATED).field_0x20;
            pFVar35->Number = uVar10;
            pFVar28[0x11].ComparisonIndex = (FNameEntryId)uVar11;
            pFVar28[0x11].Number = uVar12;
            uVar10 = *(undefined4 *)&(pFVar29->Connections_DEPRECATED).field_0x40;
            uVar11 = *(undefined4 *)&(pFVar29->Connections_DEPRECATED).field_0x44;
            uVar12 = *(undefined4 *)&(pFVar29->Connections_DEPRECATED).field_0x48;
            uVar17 = *(undefined4 *)&(pFVar29->Connections_DEPRECATED).field_0x4c;
            pFVar28[0x12].ComparisonIndex = (FNameEntryId)uVar13;
            pFVar28[0x12].Number = uVar14;
            pFVar28[0x13].ComparisonIndex = (FNameEntryId)uVar15;
            pFVar28[0x13].Number = uVar16;
            uVar13 = *(undefined4 *)&(pFVar29->ConfigValues_DEPRECATED).field_0x0;
            uVar14 = *(undefined4 *)&(pFVar29->ConfigValues_DEPRECATED).field_0x4;
            uVar15 = *(undefined4 *)&(pFVar29->ConfigValues_DEPRECATED).field_0x8;
            uVar16 = *(undefined4 *)&(pFVar29->ConfigValues_DEPRECATED).field_0xc;
            pFVar28[0x14].ComparisonIndex = (FNameEntryId)uVar10;
            pFVar28[0x14].Number = uVar11;
            pFVar28[0x15].ComparisonIndex = (FNameEntryId)uVar12;
            pFVar28[0x15].Number = uVar17;
            uVar10 = *(undefined4 *)&(pFVar29->ConfigValues_DEPRECATED).field_0x10;
            uVar11 = *(undefined4 *)&(pFVar29->ConfigValues_DEPRECATED).field_0x14;
            uVar12 = *(undefined4 *)&(pFVar29->ConfigValues_DEPRECATED).field_0x18;
            uVar17 = *(undefined4 *)&(pFVar29->ConfigValues_DEPRECATED).field_0x1c;
            pFVar28[0x16].ComparisonIndex = (FNameEntryId)uVar13;
            pFVar28[0x16].Number = uVar14;
            pFVar28[0x17].ComparisonIndex = (FNameEntryId)uVar15;
            pFVar28[0x17].Number = uVar16;
            pFVar28[0x18].ComparisonIndex = (FNameEntryId)uVar10;
            pFVar28[0x18].Number = uVar11;
            pFVar28[0x19].ComparisonIndex = (FNameEntryId)uVar12;
            pFVar28[0x19].Number = uVar17;
            pFVar29 = pFVar32;
            pFVar33 = pFVar42;
            do {
              pFVar30 = pFVar33;
              pFVar31 = pFVar29;
              pFVar29 = (FRigModuleReference *)&(pFVar31->Connections_DEPRECATED).field_0x20;
              pFVar37 = (pFVar30->ShortName_DEPRECATED).Data.AllocatorInstance.Data;
              pFVar33 = (FRigModuleReference *)&(pFVar30->Connections_DEPRECATED).field_0x20;
              pFVar31->Name = pFVar30->Name;
              (pFVar31->ShortName_DEPRECATED).Data.AllocatorInstance.Data = pFVar37;
              iVar40 = (pFVar30->ShortName_DEPRECATED).Data.ArrayMax;
              bVar18 = pFVar30->bShortNameBasedOnPath_DEPRECATED;
              uVar19 = *(undefined7 *)&pFVar30->field_0x19;
              (pFVar31->ShortName_DEPRECATED).Data.ArrayNum =
                   (pFVar30->ShortName_DEPRECATED).Data.ArrayNum;
              (pFVar31->ShortName_DEPRECATED).Data.ArrayMax = iVar40;
              pFVar31->bShortNameBasedOnPath_DEPRECATED = bVar18;
              *(undefined7 *)&pFVar31->field_0x19 = uVar19;
              iVar40 = (pFVar30->ParentPath_DEPRECATED).Data.ArrayNum;
              iVar38 = (pFVar30->ParentPath_DEPRECATED).Data.ArrayMax;
              (pFVar31->ParentPath_DEPRECATED).Data.AllocatorInstance.Data =
                   (pFVar30->ParentPath_DEPRECATED).Data.AllocatorInstance.Data;
              (pFVar31->ParentPath_DEPRECATED).Data.ArrayNum = iVar40;
              (pFVar31->ParentPath_DEPRECATED).Data.ArrayMax = iVar38;
              uVar4 = *(undefined8 *)&(pFVar30->Class).SoftObjectPtr;
              pFVar31->ParentModuleName = pFVar30->ParentModuleName;
              *(undefined8 *)&(pFVar31->Class).SoftObjectPtr = uVar4;
              uVar4 = *(undefined8 *)&(pFVar30->Class).SoftObjectPtr.field_0x10;
              *(undefined8 *)&(pFVar31->Class).SoftObjectPtr.field_0x8 =
                   *(undefined8 *)&(pFVar30->Class).SoftObjectPtr.field_0x8;
              *(undefined8 *)&(pFVar31->Class).SoftObjectPtr.field_0x10 = uVar4;
              uVar4 = *(undefined8 *)&(pFVar30->Class).SoftObjectPtr.field_0x20;
              *(undefined8 *)&(pFVar31->Class).SoftObjectPtr.field_0x18 =
                   *(undefined8 *)&(pFVar30->Class).SoftObjectPtr.field_0x18;
              *(undefined8 *)&(pFVar31->Class).SoftObjectPtr.field_0x20 = uVar4;
              uVar4 = *(undefined8 *)&(pFVar30->Connections_DEPRECATED).field_0x8;
              *(undefined8 *)&pFVar31->Connections_DEPRECATED =
                   *(undefined8 *)&pFVar30->Connections_DEPRECATED;
              *(undefined8 *)&(pFVar31->Connections_DEPRECATED).field_0x8 = uVar4;
              uVar4 = *(undefined8 *)&(pFVar30->Connections_DEPRECATED).field_0x18;
              *(undefined8 *)&(pFVar31->Connections_DEPRECATED).field_0x10 =
                   *(undefined8 *)&(pFVar30->Connections_DEPRECATED).field_0x10;
              *(undefined8 *)&(pFVar31->Connections_DEPRECATED).field_0x18 = uVar4;
              lVar41 = lVar41 + -1;
            } while (lVar41 != 0);
            uVar4 = *(undefined8 *)&(pFVar30->Connections_DEPRECATED).field_0x28;
            lVar41 = 5;
            *(undefined8 *)pFVar29 = *(undefined8 *)pFVar33;
            *(undefined8 *)&(pFVar31->Connections_DEPRECATED).field_0x28 = uVar4;
            uVar4 = *(undefined8 *)&(pFVar30->Connections_DEPRECATED).field_0x38;
            *(undefined8 *)&(pFVar31->Connections_DEPRECATED).field_0x30 =
                 *(undefined8 *)&(pFVar30->Connections_DEPRECATED).field_0x30;
            *(undefined8 *)&(pFVar31->Connections_DEPRECATED).field_0x38 = uVar4;
            uVar4 = *(undefined8 *)&(pFVar30->Connections_DEPRECATED).field_0x48;
            *(undefined8 *)&(pFVar31->Connections_DEPRECATED).field_0x40 =
                 *(undefined8 *)&(pFVar30->Connections_DEPRECATED).field_0x40;
            *(undefined8 *)&(pFVar31->Connections_DEPRECATED).field_0x48 = uVar4;
            uVar4 = *(undefined8 *)&(pFVar30->ConfigValues_DEPRECATED).field_0x8;
            *(undefined8 *)&pFVar31->ConfigValues_DEPRECATED =
                 *(undefined8 *)&pFVar30->ConfigValues_DEPRECATED;
            *(undefined8 *)&(pFVar31->ConfigValues_DEPRECATED).field_0x8 = uVar4;
            uVar4 = *(undefined8 *)&(pFVar30->ConfigValues_DEPRECATED).field_0x18;
            *(undefined8 *)&(pFVar31->ConfigValues_DEPRECATED).field_0x10 =
                 *(undefined8 *)&(pFVar30->ConfigValues_DEPRECATED).field_0x10;
            *(undefined8 *)&(pFVar31->ConfigValues_DEPRECATED).field_0x18 = uVar4;
            pFVar29 = pFVar42;
            pFVar35 = local_628;
            do {
              pFVar28 = (FName *)&(pFVar29->Connections_DEPRECATED).field_0x20;
              FVar2 = pFVar35[1];
              FVar20.Value = pFVar35[2].ComparisonIndex.Value;
              uVar21 = pFVar35[2].Number;
              FVar3 = pFVar35[3];
              pFVar34 = pFVar35 + 0x10;
              pFVar29->Name = *pFVar35;
              (pFVar29->ShortName_DEPRECATED).Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)FVar2;
              FVar2 = pFVar35[4];
              FVar22.Value = pFVar35[5].ComparisonIndex.Value;
              uVar23 = pFVar35[5].Number;
              (pFVar29->ShortName_DEPRECATED).Data.ArrayNum = FVar20.Value;
              (pFVar29->ShortName_DEPRECATED).Data.ArrayMax = uVar21;
              *(FName *)&pFVar29->bShortNameBasedOnPath_DEPRECATED = FVar3;
              FVar3 = pFVar35[6];
              FVar20.Value = pFVar35[7].ComparisonIndex.Value;
              uVar21 = pFVar35[7].Number;
              (pFVar29->ParentPath_DEPRECATED).Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)FVar2;
              (pFVar29->ParentPath_DEPRECATED).Data.ArrayNum = FVar22.Value;
              (pFVar29->ParentPath_DEPRECATED).Data.ArrayMax = uVar23;
              FVar22.Value = pFVar35[8].ComparisonIndex.Value;
              uVar23 = pFVar35[8].Number;
              FVar24.Value = pFVar35[9].ComparisonIndex.Value;
              uVar25 = pFVar35[9].Number;
              pFVar29->ParentModuleName = FVar3;
              *(uint *)&(pFVar29->Class).SoftObjectPtr.field_0x0 = FVar20.Value;
              *(uint *)&(pFVar29->Class).SoftObjectPtr.field_0x4 = uVar21;
              FVar20.Value = pFVar35[10].ComparisonIndex.Value;
              uVar21 = pFVar35[10].Number;
              FVar26.Value = pFVar35[0xb].ComparisonIndex.Value;
              uVar27 = pFVar35[0xb].Number;
              *(uint *)&(pFVar29->Class).SoftObjectPtr.field_0x8 = FVar22.Value;
              *(uint *)&(pFVar29->Class).SoftObjectPtr.field_0xc = uVar23;
              *(uint *)&(pFVar29->Class).SoftObjectPtr.field_0x10 = FVar24.Value;
              *(uint *)&(pFVar29->Class).SoftObjectPtr.field_0x14 = uVar25;
              FVar22.Value = pFVar35[0xc].ComparisonIndex.Value;
              uVar23 = pFVar35[0xc].Number;
              FVar24.Value = pFVar35[0xd].ComparisonIndex.Value;
              uVar25 = pFVar35[0xd].Number;
              *(uint *)&(pFVar29->Class).SoftObjectPtr.field_0x18 = FVar20.Value;
              *(uint *)&(pFVar29->Class).SoftObjectPtr.field_0x1c = uVar21;
              *(uint *)&(pFVar29->Class).SoftObjectPtr.field_0x20 = FVar26.Value;
              *(uint *)&(pFVar29->Class).SoftObjectPtr.field_0x24 = uVar27;
              FVar20.Value = pFVar35[0xe].ComparisonIndex.Value;
              uVar21 = pFVar35[0xe].Number;
              FVar26.Value = pFVar35[0xf].ComparisonIndex.Value;
              uVar27 = pFVar35[0xf].Number;
              *(uint *)&(pFVar29->Connections_DEPRECATED).field_0x0 = FVar22.Value;
              *(uint *)&(pFVar29->Connections_DEPRECATED).field_0x4 = uVar23;
              *(uint *)&(pFVar29->Connections_DEPRECATED).field_0x8 = FVar24.Value;
              *(uint *)&(pFVar29->Connections_DEPRECATED).field_0xc = uVar25;
              *(uint *)&(pFVar29->Connections_DEPRECATED).field_0x10 = FVar20.Value;
              *(uint *)&(pFVar29->Connections_DEPRECATED).field_0x14 = uVar21;
              *(uint *)&(pFVar29->Connections_DEPRECATED).field_0x18 = FVar26.Value;
              *(uint *)&(pFVar29->Connections_DEPRECATED).field_0x1c = uVar27;
              lVar41 = lVar41 + -1;
              pFVar29 = (FRigModuleReference *)pFVar28;
              pFVar35 = pFVar34;
            } while (lVar41 != 0);
          } while( true );
        }
        if (pFVar44 < pFVar39) {
          do {
            pFVar32 = pFVar44;
            if (pFVar44 + 1 <= pFVar39) {
              pFVar28 = (FName *)(param_3->AllModuleNames).AllocatorInstance.Data;
              pFVar35 = pFVar28 + (param_3->AllModuleNames).ArrayNum;
              pFVar42 = pFVar44;
              pFVar29 = pFVar44 + 1;
              do {
                if (pFVar28 != pFVar35) {
                  pFVar34 = pFVar28;
                  do {
                    if (*pFVar34 == pFVar29->Name) {
                      iVar40 = (int)((longlong)pFVar34 - (longlong)pFVar28 >> 3);
                      goto LAB_14a21a04f;
                    }
                    pFVar34 = pFVar34 + 1;
                  } while (pFVar34 != pFVar35);
                }
                iVar38 = -1;
                iVar40 = -1;
                if (pFVar28 != pFVar35) {
LAB_14a21a04f:
                  iVar38 = iVar40;
                  pFVar34 = pFVar28;
                  do {
                    if (*pFVar34 == pFVar42->Name) {
                      iVar40 = (int)((longlong)pFVar34 - (longlong)pFVar28 >> 3);
                      goto LAB_14a21a069;
                    }
                    pFVar34 = pFVar34 + 1;
                  } while (pFVar34 != pFVar35);
                }
                iVar40 = -1;
LAB_14a21a069:
                pFVar32 = pFVar29;
                if (iVar38 <= iVar40) {
                  pFVar32 = pFVar42;
                }
                pFVar29 = pFVar29 + 1;
                pFVar42 = pFVar32;
              } while (pFVar29 <= pFVar39);
            }
            pFVar29 = pFVar39 + -1;
            lVar41 = 5;
            pFVar42 = pFVar32;
            pFVar35 = local_628;
            do {
              pFVar28 = pFVar35;
              pFVar33 = pFVar42;
              pFVar35 = pFVar28 + 0x10;
              FVar2 = (FName)(pFVar33->ShortName_DEPRECATED).Data.AllocatorInstance.Data;
              iVar40 = (pFVar33->ShortName_DEPRECATED).Data.ArrayNum;
              iVar38 = (pFVar33->ShortName_DEPRECATED).Data.ArrayMax;
              FVar3 = *(FName *)&pFVar33->bShortNameBasedOnPath_DEPRECATED;
              *pFVar28 = pFVar33->Name;
              pFVar28[1] = FVar2;
              FVar2 = (FName)(pFVar33->ParentPath_DEPRECATED).Data.AllocatorInstance.Data;
              iVar7 = (pFVar33->ParentPath_DEPRECATED).Data.ArrayNum;
              iVar8 = (pFVar33->ParentPath_DEPRECATED).Data.ArrayMax;
              pFVar28[2].ComparisonIndex = (FNameEntryId)iVar40;
              pFVar28[2].Number = iVar38;
              pFVar28[3] = FVar3;
              FVar3 = pFVar33->ParentModuleName;
              uVar10 = *(undefined4 *)&(pFVar33->Class).SoftObjectPtr.field_0x0;
              uVar11 = *(undefined4 *)&(pFVar33->Class).SoftObjectPtr.field_0x4;
              pFVar28[4] = FVar2;
              pFVar28[5].ComparisonIndex = (FNameEntryId)iVar7;
              pFVar28[5].Number = iVar8;
              uVar12 = *(undefined4 *)&(pFVar33->Class).SoftObjectPtr.field_0x8;
              uVar13 = *(undefined4 *)&(pFVar33->Class).SoftObjectPtr.field_0xc;
              uVar14 = *(undefined4 *)&(pFVar33->Class).SoftObjectPtr.field_0x10;
              uVar15 = *(undefined4 *)&(pFVar33->Class).SoftObjectPtr.field_0x14;
              pFVar28[6] = FVar3;
              pFVar28[7].ComparisonIndex = (FNameEntryId)uVar10;
              pFVar28[7].Number = uVar11;
              uVar10 = *(undefined4 *)&(pFVar33->Class).SoftObjectPtr.field_0x18;
              uVar11 = *(undefined4 *)&(pFVar33->Class).SoftObjectPtr.field_0x1c;
              uVar16 = *(undefined4 *)&(pFVar33->Class).SoftObjectPtr.field_0x20;
              uVar17 = *(undefined4 *)&(pFVar33->Class).SoftObjectPtr.field_0x24;
              pFVar28[8].ComparisonIndex = (FNameEntryId)uVar12;
              pFVar28[8].Number = uVar13;
              pFVar28[9].ComparisonIndex = (FNameEntryId)uVar14;
              pFVar28[9].Number = uVar15;
              uVar12 = *(undefined4 *)&(pFVar33->Connections_DEPRECATED).field_0x0;
              uVar13 = *(undefined4 *)&(pFVar33->Connections_DEPRECATED).field_0x4;
              uVar14 = *(undefined4 *)&(pFVar33->Connections_DEPRECATED).field_0x8;
              uVar15 = *(undefined4 *)&(pFVar33->Connections_DEPRECATED).field_0xc;
              pFVar28[10].ComparisonIndex = (FNameEntryId)uVar10;
              pFVar28[10].Number = uVar11;
              pFVar28[0xb].ComparisonIndex = (FNameEntryId)uVar16;
              pFVar28[0xb].Number = uVar17;
              uVar10 = *(undefined4 *)&(pFVar33->Connections_DEPRECATED).field_0x10;
              uVar11 = *(undefined4 *)&(pFVar33->Connections_DEPRECATED).field_0x14;
              uVar16 = *(undefined4 *)&(pFVar33->Connections_DEPRECATED).field_0x18;
              uVar17 = *(undefined4 *)&(pFVar33->Connections_DEPRECATED).field_0x1c;
              pFVar28[0xc].ComparisonIndex = (FNameEntryId)uVar12;
              pFVar28[0xc].Number = uVar13;
              pFVar28[0xd].ComparisonIndex = (FNameEntryId)uVar14;
              pFVar28[0xd].Number = uVar15;
              pFVar28[0xe].ComparisonIndex = (FNameEntryId)uVar10;
              pFVar28[0xe].Number = uVar11;
              pFVar28[0xf].ComparisonIndex = (FNameEntryId)uVar16;
              pFVar28[0xf].Number = uVar17;
              lVar41 = lVar41 + -1;
              pFVar42 = (FRigModuleReference *)&(pFVar33->Connections_DEPRECATED).field_0x20;
            } while (lVar41 != 0);
            uVar10 = *(undefined4 *)&(pFVar33->Connections_DEPRECATED).field_0x24;
            uVar11 = *(undefined4 *)&(pFVar33->Connections_DEPRECATED).field_0x28;
            uVar12 = *(undefined4 *)&(pFVar33->Connections_DEPRECATED).field_0x2c;
            uVar13 = *(undefined4 *)&(pFVar33->Connections_DEPRECATED).field_0x30;
            uVar14 = *(undefined4 *)&(pFVar33->Connections_DEPRECATED).field_0x34;
            uVar15 = *(undefined4 *)&(pFVar33->Connections_DEPRECATED).field_0x38;
            uVar16 = *(undefined4 *)&(pFVar33->Connections_DEPRECATED).field_0x3c;
            pFVar35->ComparisonIndex =
                 (FNameEntryId)*(undefined4 *)&(pFVar33->Connections_DEPRECATED).field_0x20;
            pFVar35->Number = uVar10;
            pFVar28[0x11].ComparisonIndex = (FNameEntryId)uVar11;
            pFVar28[0x11].Number = uVar12;
            uVar10 = *(undefined4 *)&(pFVar33->Connections_DEPRECATED).field_0x40;
            uVar11 = *(undefined4 *)&(pFVar33->Connections_DEPRECATED).field_0x44;
            uVar12 = *(undefined4 *)&(pFVar33->Connections_DEPRECATED).field_0x48;
            uVar17 = *(undefined4 *)&(pFVar33->Connections_DEPRECATED).field_0x4c;
            pFVar28[0x12].ComparisonIndex = (FNameEntryId)uVar13;
            pFVar28[0x12].Number = uVar14;
            pFVar28[0x13].ComparisonIndex = (FNameEntryId)uVar15;
            pFVar28[0x13].Number = uVar16;
            uVar13 = *(undefined4 *)&(pFVar33->ConfigValues_DEPRECATED).field_0x0;
            uVar14 = *(undefined4 *)&(pFVar33->ConfigValues_DEPRECATED).field_0x4;
            uVar15 = *(undefined4 *)&(pFVar33->ConfigValues_DEPRECATED).field_0x8;
            uVar16 = *(undefined4 *)&(pFVar33->ConfigValues_DEPRECATED).field_0xc;
            pFVar28[0x14].ComparisonIndex = (FNameEntryId)uVar10;
            pFVar28[0x14].Number = uVar11;
            pFVar28[0x15].ComparisonIndex = (FNameEntryId)uVar12;
            pFVar28[0x15].Number = uVar17;
            uVar10 = *(undefined4 *)&(pFVar33->ConfigValues_DEPRECATED).field_0x10;
            uVar11 = *(undefined4 *)&(pFVar33->ConfigValues_DEPRECATED).field_0x14;
            uVar12 = *(undefined4 *)&(pFVar33->ConfigValues_DEPRECATED).field_0x18;
            uVar17 = *(undefined4 *)&(pFVar33->ConfigValues_DEPRECATED).field_0x1c;
            pFVar28[0x16].ComparisonIndex = (FNameEntryId)uVar13;
            pFVar28[0x16].Number = uVar14;
            pFVar28[0x17].ComparisonIndex = (FNameEntryId)uVar15;
            pFVar28[0x17].Number = uVar16;
            pFVar28[0x18].ComparisonIndex = (FNameEntryId)uVar10;
            pFVar28[0x18].Number = uVar11;
            pFVar28[0x19].ComparisonIndex = (FNameEntryId)uVar12;
            pFVar28[0x19].Number = uVar17;
            lVar41 = 5;
            pFVar42 = pFVar39;
            do {
              pFVar31 = pFVar32;
              pFVar33 = pFVar42;
              pFVar32 = (FRigModuleReference *)&(pFVar31->Connections_DEPRECATED).field_0x20;
              pFVar37 = (pFVar33->ShortName_DEPRECATED).Data.AllocatorInstance.Data;
              pFVar42 = (FRigModuleReference *)&(pFVar33->Connections_DEPRECATED).field_0x20;
              pFVar31->Name = pFVar33->Name;
              (pFVar31->ShortName_DEPRECATED).Data.AllocatorInstance.Data = pFVar37;
              iVar40 = (pFVar33->ShortName_DEPRECATED).Data.ArrayMax;
              bVar18 = pFVar33->bShortNameBasedOnPath_DEPRECATED;
              uVar19 = *(undefined7 *)&pFVar33->field_0x19;
              (pFVar31->ShortName_DEPRECATED).Data.ArrayNum =
                   (pFVar33->ShortName_DEPRECATED).Data.ArrayNum;
              (pFVar31->ShortName_DEPRECATED).Data.ArrayMax = iVar40;
              pFVar31->bShortNameBasedOnPath_DEPRECATED = bVar18;
              *(undefined7 *)&pFVar31->field_0x19 = uVar19;
              iVar40 = (pFVar33->ParentPath_DEPRECATED).Data.ArrayNum;
              iVar38 = (pFVar33->ParentPath_DEPRECATED).Data.ArrayMax;
              (pFVar31->ParentPath_DEPRECATED).Data.AllocatorInstance.Data =
                   (pFVar33->ParentPath_DEPRECATED).Data.AllocatorInstance.Data;
              (pFVar31->ParentPath_DEPRECATED).Data.ArrayNum = iVar40;
              (pFVar31->ParentPath_DEPRECATED).Data.ArrayMax = iVar38;
              uVar4 = *(undefined8 *)&(pFVar33->Class).SoftObjectPtr;
              pFVar31->ParentModuleName = pFVar33->ParentModuleName;
              *(undefined8 *)&(pFVar31->Class).SoftObjectPtr = uVar4;
              uVar4 = *(undefined8 *)&(pFVar33->Class).SoftObjectPtr.field_0x10;
              *(undefined8 *)&(pFVar31->Class).SoftObjectPtr.field_0x8 =
                   *(undefined8 *)&(pFVar33->Class).SoftObjectPtr.field_0x8;
              *(undefined8 *)&(pFVar31->Class).SoftObjectPtr.field_0x10 = uVar4;
              uVar4 = *(undefined8 *)&(pFVar33->Class).SoftObjectPtr.field_0x20;
              *(undefined8 *)&(pFVar31->Class).SoftObjectPtr.field_0x18 =
                   *(undefined8 *)&(pFVar33->Class).SoftObjectPtr.field_0x18;
              *(undefined8 *)&(pFVar31->Class).SoftObjectPtr.field_0x20 = uVar4;
              uVar4 = *(undefined8 *)&(pFVar33->Connections_DEPRECATED).field_0x8;
              *(undefined8 *)&pFVar31->Connections_DEPRECATED =
                   *(undefined8 *)&pFVar33->Connections_DEPRECATED;
              *(undefined8 *)&(pFVar31->Connections_DEPRECATED).field_0x8 = uVar4;
              uVar4 = *(undefined8 *)&(pFVar33->Connections_DEPRECATED).field_0x18;
              *(undefined8 *)&(pFVar31->Connections_DEPRECATED).field_0x10 =
                   *(undefined8 *)&(pFVar33->Connections_DEPRECATED).field_0x10;
              *(undefined8 *)&(pFVar31->Connections_DEPRECATED).field_0x18 = uVar4;
              lVar41 = lVar41 + -1;
            } while (lVar41 != 0);
            uVar4 = *(undefined8 *)&(pFVar33->Connections_DEPRECATED).field_0x28;
            lVar41 = 5;
            *(undefined8 *)pFVar32 = *(undefined8 *)pFVar42;
            *(undefined8 *)&(pFVar31->Connections_DEPRECATED).field_0x28 = uVar4;
            uVar4 = *(undefined8 *)&(pFVar33->Connections_DEPRECATED).field_0x38;
            *(undefined8 *)&(pFVar31->Connections_DEPRECATED).field_0x30 =
                 *(undefined8 *)&(pFVar33->Connections_DEPRECATED).field_0x30;
            *(undefined8 *)&(pFVar31->Connections_DEPRECATED).field_0x38 = uVar4;
            uVar4 = *(undefined8 *)&(pFVar33->Connections_DEPRECATED).field_0x48;
            *(undefined8 *)&(pFVar31->Connections_DEPRECATED).field_0x40 =
                 *(undefined8 *)&(pFVar33->Connections_DEPRECATED).field_0x40;
            *(undefined8 *)&(pFVar31->Connections_DEPRECATED).field_0x48 = uVar4;
            uVar4 = *(undefined8 *)&(pFVar33->ConfigValues_DEPRECATED).field_0x8;
            *(undefined8 *)&pFVar31->ConfigValues_DEPRECATED =
                 *(undefined8 *)&pFVar33->ConfigValues_DEPRECATED;
            *(undefined8 *)&(pFVar31->ConfigValues_DEPRECATED).field_0x8 = uVar4;
            uVar4 = *(undefined8 *)&(pFVar33->ConfigValues_DEPRECATED).field_0x18;
            *(undefined8 *)&(pFVar31->ConfigValues_DEPRECATED).field_0x10 =
                 *(undefined8 *)&(pFVar33->ConfigValues_DEPRECATED).field_0x10;
            *(undefined8 *)&(pFVar31->ConfigValues_DEPRECATED).field_0x18 = uVar4;
            pFVar35 = local_628;
            do {
              pFVar32 = pFVar39;
              pFVar28 = pFVar35;
              FVar2 = pFVar28[1];
              FVar20.Value = pFVar28[2].ComparisonIndex.Value;
              uVar21 = pFVar28[2].Number;
              FVar3 = pFVar28[3];
              pFVar35 = pFVar28 + 0x10;
              pFVar32->Name = *pFVar28;
              (pFVar32->ShortName_DEPRECATED).Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)FVar2;
              FVar2 = pFVar28[4];
              FVar22.Value = pFVar28[5].ComparisonIndex.Value;
              uVar23 = pFVar28[5].Number;
              (pFVar32->ShortName_DEPRECATED).Data.ArrayNum = FVar20.Value;
              (pFVar32->ShortName_DEPRECATED).Data.ArrayMax = uVar21;
              *(FName *)&pFVar32->bShortNameBasedOnPath_DEPRECATED = FVar3;
              FVar3 = pFVar28[6];
              FVar20.Value = pFVar28[7].ComparisonIndex.Value;
              uVar21 = pFVar28[7].Number;
              (pFVar32->ParentPath_DEPRECATED).Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)FVar2;
              (pFVar32->ParentPath_DEPRECATED).Data.ArrayNum = FVar22.Value;
              (pFVar32->ParentPath_DEPRECATED).Data.ArrayMax = uVar23;
              FVar22.Value = pFVar28[8].ComparisonIndex.Value;
              uVar23 = pFVar28[8].Number;
              FVar24.Value = pFVar28[9].ComparisonIndex.Value;
              uVar25 = pFVar28[9].Number;
              pFVar32->ParentModuleName = FVar3;
              *(uint *)&(pFVar32->Class).SoftObjectPtr.field_0x0 = FVar20.Value;
              *(uint *)&(pFVar32->Class).SoftObjectPtr.field_0x4 = uVar21;
              FVar20.Value = pFVar28[10].ComparisonIndex.Value;
              uVar21 = pFVar28[10].Number;
              FVar26.Value = pFVar28[0xb].ComparisonIndex.Value;
              uVar27 = pFVar28[0xb].Number;
              *(uint *)&(pFVar32->Class).SoftObjectPtr.field_0x8 = FVar22.Value;
              *(uint *)&(pFVar32->Class).SoftObjectPtr.field_0xc = uVar23;
              *(uint *)&(pFVar32->Class).SoftObjectPtr.field_0x10 = FVar24.Value;
              *(uint *)&(pFVar32->Class).SoftObjectPtr.field_0x14 = uVar25;
              FVar22.Value = pFVar28[0xc].ComparisonIndex.Value;
              uVar23 = pFVar28[0xc].Number;
              FVar24.Value = pFVar28[0xd].ComparisonIndex.Value;
              uVar25 = pFVar28[0xd].Number;
              *(uint *)&(pFVar32->Class).SoftObjectPtr.field_0x18 = FVar20.Value;
              *(uint *)&(pFVar32->Class).SoftObjectPtr.field_0x1c = uVar21;
              *(uint *)&(pFVar32->Class).SoftObjectPtr.field_0x20 = FVar26.Value;
              *(uint *)&(pFVar32->Class).SoftObjectPtr.field_0x24 = uVar27;
              FVar20.Value = pFVar28[0xe].ComparisonIndex.Value;
              uVar21 = pFVar28[0xe].Number;
              FVar26.Value = pFVar28[0xf].ComparisonIndex.Value;
              uVar27 = pFVar28[0xf].Number;
              *(uint *)&(pFVar32->Connections_DEPRECATED).field_0x0 = FVar22.Value;
              *(uint *)&(pFVar32->Connections_DEPRECATED).field_0x4 = uVar23;
              *(uint *)&(pFVar32->Connections_DEPRECATED).field_0x8 = FVar24.Value;
              *(uint *)&(pFVar32->Connections_DEPRECATED).field_0xc = uVar25;
              *(uint *)&(pFVar32->Connections_DEPRECATED).field_0x10 = FVar20.Value;
              *(uint *)&(pFVar32->Connections_DEPRECATED).field_0x14 = uVar21;
              *(uint *)&(pFVar32->Connections_DEPRECATED).field_0x18 = FVar26.Value;
              *(uint *)&(pFVar32->Connections_DEPRECATED).field_0x1c = uVar27;
              lVar41 = lVar41 + -1;
              pFVar39 = (FRigModuleReference *)&(pFVar32->Connections_DEPRECATED).field_0x20;
            } while (lVar41 != 0);
            uVar21 = pFVar35->Number;
            FVar20.Value = pFVar28[0x11].ComparisonIndex.Value;
            uVar23 = pFVar28[0x11].Number;
            FVar22.Value = pFVar28[0x12].ComparisonIndex.Value;
            uVar25 = pFVar28[0x12].Number;
            FVar24.Value = pFVar28[0x13].ComparisonIndex.Value;
            uVar27 = pFVar28[0x13].Number;
            *(uint *)&(pFVar32->Connections_DEPRECATED).field_0x20 =
                 (pFVar35->ComparisonIndex).Value;
            *(uint *)&(pFVar32->Connections_DEPRECATED).field_0x24 = uVar21;
            *(uint *)&(pFVar32->Connections_DEPRECATED).field_0x28 = FVar20.Value;
            *(uint *)&(pFVar32->Connections_DEPRECATED).field_0x2c = uVar23;
            FVar20.Value = pFVar28[0x14].ComparisonIndex.Value;
            uVar21 = pFVar28[0x14].Number;
            FVar26.Value = pFVar28[0x15].ComparisonIndex.Value;
            uVar23 = pFVar28[0x15].Number;
            *(uint *)&(pFVar32->Connections_DEPRECATED).field_0x30 = FVar22.Value;
            *(uint *)&(pFVar32->Connections_DEPRECATED).field_0x34 = uVar25;
            *(uint *)&(pFVar32->Connections_DEPRECATED).field_0x38 = FVar24.Value;
            *(uint *)&(pFVar32->Connections_DEPRECATED).field_0x3c = uVar27;
            FVar22.Value = pFVar28[0x16].ComparisonIndex.Value;
            uVar25 = pFVar28[0x16].Number;
            FVar24.Value = pFVar28[0x17].ComparisonIndex.Value;
            uVar27 = pFVar28[0x17].Number;
            *(uint *)&(pFVar32->Connections_DEPRECATED).field_0x40 = FVar20.Value;
            *(uint *)&(pFVar32->Connections_DEPRECATED).field_0x44 = uVar21;
            *(uint *)&(pFVar32->Connections_DEPRECATED).field_0x48 = FVar26.Value;
            *(uint *)&(pFVar32->Connections_DEPRECATED).field_0x4c = uVar23;
            FVar20.Value = pFVar28[0x18].ComparisonIndex.Value;
            uVar21 = pFVar28[0x18].Number;
            FVar26.Value = pFVar28[0x19].ComparisonIndex.Value;
            uVar23 = pFVar28[0x19].Number;
            *(uint *)&(pFVar32->ConfigValues_DEPRECATED).field_0x0 = FVar22.Value;
            *(uint *)&(pFVar32->ConfigValues_DEPRECATED).field_0x4 = uVar25;
            *(uint *)&(pFVar32->ConfigValues_DEPRECATED).field_0x8 = FVar24.Value;
            *(uint *)&(pFVar32->ConfigValues_DEPRECATED).field_0xc = uVar27;
            *(uint *)&(pFVar32->ConfigValues_DEPRECATED).field_0x10 = FVar20.Value;
            *(uint *)&(pFVar32->ConfigValues_DEPRECATED).field_0x14 = uVar21;
            *(uint *)&(pFVar32->ConfigValues_DEPRECATED).field_0x18 = FVar26.Value;
            *(uint *)&(pFVar32->ConfigValues_DEPRECATED).field_0x1c = uVar23;
            pFVar39 = pFVar29;
          } while (pFVar44 < pFVar29);
        }
        goto LAB_14a21a2ae;
      }
LAB_14a219fcb:
      local_650[0].AllModuleNames.ArrayNum = (param_3->AllModuleNames).ArrayNum;
      lVar41 = (longlong)local_650[0].AllModuleNames.ArrayNum;
      pFVar37 = (param_3->AllModuleNames).AllocatorInstance.Data;
      local_650[0].AllModuleNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_630 = pFVar1;
      if (local_650[0].AllModuleNames.ArrayNum == 0) {
        local_650[0].AllModuleNames.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,local_650[0].AllModuleNames.ArrayNum,0,(ForAnyElementType *)local_650,
                   local_650[0].AllModuleNames.ArrayNum,&local_650[0].AllModuleNames.ArrayMax);
        memcpy(local_650[0].AllModuleNames.AllocatorInstance.Data,pFVar37,lVar41 << 3);
      }
      HeapSortInternal<FRigModuleReference,int,_UModularRigController::ReorderModule_::__l2::<lambda_1>,TLess<void>_>
                (pFVar32,iVar40,local_650,param_4);
      pFVar1 = local_630;
LAB_14a21a2ae:
      local_630 = pFVar1;
      ppFVar43 = ppFVar43 + -3;
    } while (&local_358 <= ppFVar43);
    pFVar37 = (param_3->AllModuleNames).AllocatorInstance.Data;
  }
  if (pFVar37 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar37);
  }
  return;
LAB_14a219d71:
  do {
    pFVar28 = pFVar35;
    pFVar31 = pFVar33;
    pFVar35 = pFVar28 + 0x10;
    FVar2 = (FName)(pFVar31->ShortName_DEPRECATED).Data.AllocatorInstance.Data;
    iVar40 = (pFVar31->ShortName_DEPRECATED).Data.ArrayNum;
    iVar38 = (pFVar31->ShortName_DEPRECATED).Data.ArrayMax;
    FVar3 = *(FName *)&pFVar31->bShortNameBasedOnPath_DEPRECATED;
    *pFVar28 = pFVar31->Name;
    pFVar28[1] = FVar2;
    FVar2 = (FName)(pFVar31->ParentPath_DEPRECATED).Data.AllocatorInstance.Data;
    iVar7 = (pFVar31->ParentPath_DEPRECATED).Data.ArrayNum;
    iVar8 = (pFVar31->ParentPath_DEPRECATED).Data.ArrayMax;
    pFVar28[2].ComparisonIndex = (FNameEntryId)iVar40;
    pFVar28[2].Number = iVar38;
    pFVar28[3] = FVar3;
    FVar3 = pFVar31->ParentModuleName;
    uVar10 = *(undefined4 *)&(pFVar31->Class).SoftObjectPtr.field_0x0;
    uVar11 = *(undefined4 *)&(pFVar31->Class).SoftObjectPtr.field_0x4;
    pFVar28[4] = FVar2;
    pFVar28[5].ComparisonIndex = (FNameEntryId)iVar7;
    pFVar28[5].Number = iVar8;
    uVar12 = *(undefined4 *)&(pFVar31->Class).SoftObjectPtr.field_0x8;
    uVar13 = *(undefined4 *)&(pFVar31->Class).SoftObjectPtr.field_0xc;
    uVar14 = *(undefined4 *)&(pFVar31->Class).SoftObjectPtr.field_0x10;
    uVar15 = *(undefined4 *)&(pFVar31->Class).SoftObjectPtr.field_0x14;
    pFVar28[6] = FVar3;
    pFVar28[7].ComparisonIndex = (FNameEntryId)uVar10;
    pFVar28[7].Number = uVar11;
    uVar10 = *(undefined4 *)&(pFVar31->Class).SoftObjectPtr.field_0x18;
    uVar11 = *(undefined4 *)&(pFVar31->Class).SoftObjectPtr.field_0x1c;
    uVar16 = *(undefined4 *)&(pFVar31->Class).SoftObjectPtr.field_0x20;
    uVar17 = *(undefined4 *)&(pFVar31->Class).SoftObjectPtr.field_0x24;
    pFVar28[8].ComparisonIndex = (FNameEntryId)uVar12;
    pFVar28[8].Number = uVar13;
    pFVar28[9].ComparisonIndex = (FNameEntryId)uVar14;
    pFVar28[9].Number = uVar15;
    uVar12 = *(undefined4 *)&(pFVar31->Connections_DEPRECATED).field_0x0;
    uVar13 = *(undefined4 *)&(pFVar31->Connections_DEPRECATED).field_0x4;
    uVar14 = *(undefined4 *)&(pFVar31->Connections_DEPRECATED).field_0x8;
    uVar15 = *(undefined4 *)&(pFVar31->Connections_DEPRECATED).field_0xc;
    pFVar28[10].ComparisonIndex = (FNameEntryId)uVar10;
    pFVar28[10].Number = uVar11;
    pFVar28[0xb].ComparisonIndex = (FNameEntryId)uVar16;
    pFVar28[0xb].Number = uVar17;
    uVar10 = *(undefined4 *)&(pFVar31->Connections_DEPRECATED).field_0x10;
    uVar11 = *(undefined4 *)&(pFVar31->Connections_DEPRECATED).field_0x14;
    uVar16 = *(undefined4 *)&(pFVar31->Connections_DEPRECATED).field_0x18;
    uVar17 = *(undefined4 *)&(pFVar31->Connections_DEPRECATED).field_0x1c;
    pFVar28[0xc].ComparisonIndex = (FNameEntryId)uVar12;
    pFVar28[0xc].Number = uVar13;
    pFVar28[0xd].ComparisonIndex = (FNameEntryId)uVar14;
    pFVar28[0xd].Number = uVar15;
    pFVar28[0xe].ComparisonIndex = (FNameEntryId)uVar10;
    pFVar28[0xe].Number = uVar11;
    pFVar28[0xf].ComparisonIndex = (FNameEntryId)uVar16;
    pFVar28[0xf].Number = uVar17;
    lVar41 = lVar41 + -1;
    pFVar33 = (FRigModuleReference *)&(pFVar31->Connections_DEPRECATED).field_0x20;
  } while (lVar41 != 0);
  uVar10 = *(undefined4 *)&(pFVar31->Connections_DEPRECATED).field_0x24;
  uVar11 = *(undefined4 *)&(pFVar31->Connections_DEPRECATED).field_0x28;
  uVar12 = *(undefined4 *)&(pFVar31->Connections_DEPRECATED).field_0x2c;
  lVar41 = 5;
  uVar13 = *(undefined4 *)&(pFVar31->Connections_DEPRECATED).field_0x30;
  uVar14 = *(undefined4 *)&(pFVar31->Connections_DEPRECATED).field_0x34;
  uVar15 = *(undefined4 *)&(pFVar31->Connections_DEPRECATED).field_0x38;
  uVar16 = *(undefined4 *)&(pFVar31->Connections_DEPRECATED).field_0x3c;
  pFVar35->ComparisonIndex =
       (FNameEntryId)*(undefined4 *)&(pFVar31->Connections_DEPRECATED).field_0x20;
  pFVar35->Number = uVar10;
  pFVar28[0x11].ComparisonIndex = (FNameEntryId)uVar11;
  pFVar28[0x11].Number = uVar12;
  uVar10 = *(undefined4 *)&(pFVar31->Connections_DEPRECATED).field_0x40;
  uVar11 = *(undefined4 *)&(pFVar31->Connections_DEPRECATED).field_0x44;
  uVar12 = *(undefined4 *)&(pFVar31->Connections_DEPRECATED).field_0x48;
  uVar17 = *(undefined4 *)&(pFVar31->Connections_DEPRECATED).field_0x4c;
  pFVar28[0x12].ComparisonIndex = (FNameEntryId)uVar13;
  pFVar28[0x12].Number = uVar14;
  pFVar28[0x13].ComparisonIndex = (FNameEntryId)uVar15;
  pFVar28[0x13].Number = uVar16;
  uVar13 = *(undefined4 *)&(pFVar31->ConfigValues_DEPRECATED).field_0x0;
  uVar14 = *(undefined4 *)&(pFVar31->ConfigValues_DEPRECATED).field_0x4;
  uVar15 = *(undefined4 *)&(pFVar31->ConfigValues_DEPRECATED).field_0x8;
  uVar16 = *(undefined4 *)&(pFVar31->ConfigValues_DEPRECATED).field_0xc;
  pFVar28[0x14].ComparisonIndex = (FNameEntryId)uVar10;
  pFVar28[0x14].Number = uVar11;
  pFVar28[0x15].ComparisonIndex = (FNameEntryId)uVar12;
  pFVar28[0x15].Number = uVar17;
  uVar10 = *(undefined4 *)&(pFVar31->ConfigValues_DEPRECATED).field_0x10;
  uVar11 = *(undefined4 *)&(pFVar31->ConfigValues_DEPRECATED).field_0x14;
  uVar12 = *(undefined4 *)&(pFVar31->ConfigValues_DEPRECATED).field_0x18;
  uVar17 = *(undefined4 *)&(pFVar31->ConfigValues_DEPRECATED).field_0x1c;
  pFVar28[0x16].ComparisonIndex = (FNameEntryId)uVar13;
  pFVar28[0x16].Number = uVar14;
  pFVar28[0x17].ComparisonIndex = (FNameEntryId)uVar15;
  pFVar28[0x17].Number = uVar16;
  pFVar28[0x18].ComparisonIndex = (FNameEntryId)uVar10;
  pFVar28[0x18].Number = uVar11;
  pFVar28[0x19].ComparisonIndex = (FNameEntryId)uVar12;
  pFVar28[0x19].Number = uVar17;
  pFVar33 = pFVar44;
  pFVar31 = pFVar42;
  do {
    pFVar36 = pFVar31;
    pFVar30 = pFVar33;
    pFVar33 = (FRigModuleReference *)&(pFVar30->Connections_DEPRECATED).field_0x20;
    pFVar37 = (pFVar36->ShortName_DEPRECATED).Data.AllocatorInstance.Data;
    pFVar31 = (FRigModuleReference *)&(pFVar36->Connections_DEPRECATED).field_0x20;
    pFVar30->Name = pFVar36->Name;
    (pFVar30->ShortName_DEPRECATED).Data.AllocatorInstance.Data = pFVar37;
    iVar40 = (pFVar36->ShortName_DEPRECATED).Data.ArrayMax;
    bVar18 = pFVar36->bShortNameBasedOnPath_DEPRECATED;
    uVar19 = *(undefined7 *)&pFVar36->field_0x19;
    (pFVar30->ShortName_DEPRECATED).Data.ArrayNum = (pFVar36->ShortName_DEPRECATED).Data.ArrayNum;
    (pFVar30->ShortName_DEPRECATED).Data.ArrayMax = iVar40;
    pFVar30->bShortNameBasedOnPath_DEPRECATED = bVar18;
    *(undefined7 *)&pFVar30->field_0x19 = uVar19;
    iVar40 = (pFVar36->ParentPath_DEPRECATED).Data.ArrayNum;
    iVar38 = (pFVar36->ParentPath_DEPRECATED).Data.ArrayMax;
    (pFVar30->ParentPath_DEPRECATED).Data.AllocatorInstance.Data =
         (pFVar36->ParentPath_DEPRECATED).Data.AllocatorInstance.Data;
    (pFVar30->ParentPath_DEPRECATED).Data.ArrayNum = iVar40;
    (pFVar30->ParentPath_DEPRECATED).Data.ArrayMax = iVar38;
    uVar4 = *(undefined8 *)&(pFVar36->Class).SoftObjectPtr;
    pFVar30->ParentModuleName = pFVar36->ParentModuleName;
    *(undefined8 *)&(pFVar30->Class).SoftObjectPtr = uVar4;
    uVar4 = *(undefined8 *)&(pFVar36->Class).SoftObjectPtr.field_0x10;
    *(undefined8 *)&(pFVar30->Class).SoftObjectPtr.field_0x8 =
         *(undefined8 *)&(pFVar36->Class).SoftObjectPtr.field_0x8;
    *(undefined8 *)&(pFVar30->Class).SoftObjectPtr.field_0x10 = uVar4;
    uVar4 = *(undefined8 *)&(pFVar36->Class).SoftObjectPtr.field_0x20;
    *(undefined8 *)&(pFVar30->Class).SoftObjectPtr.field_0x18 =
         *(undefined8 *)&(pFVar36->Class).SoftObjectPtr.field_0x18;
    *(undefined8 *)&(pFVar30->Class).SoftObjectPtr.field_0x20 = uVar4;
    uVar4 = *(undefined8 *)&(pFVar36->Connections_DEPRECATED).field_0x8;
    *(undefined8 *)&pFVar30->Connections_DEPRECATED =
         *(undefined8 *)&pFVar36->Connections_DEPRECATED;
    *(undefined8 *)&(pFVar30->Connections_DEPRECATED).field_0x8 = uVar4;
    uVar4 = *(undefined8 *)&(pFVar36->Connections_DEPRECATED).field_0x18;
    *(undefined8 *)&(pFVar30->Connections_DEPRECATED).field_0x10 =
         *(undefined8 *)&(pFVar36->Connections_DEPRECATED).field_0x10;
    *(undefined8 *)&(pFVar30->Connections_DEPRECATED).field_0x18 = uVar4;
    lVar41 = lVar41 + -1;
  } while (lVar41 != 0);
  uVar4 = *(undefined8 *)&(pFVar36->Connections_DEPRECATED).field_0x28;
  lVar41 = 5;
  *(undefined8 *)pFVar33 = *(undefined8 *)pFVar31;
  *(undefined8 *)&(pFVar30->Connections_DEPRECATED).field_0x28 = uVar4;
  uVar4 = *(undefined8 *)&(pFVar36->Connections_DEPRECATED).field_0x38;
  *(undefined8 *)&(pFVar30->Connections_DEPRECATED).field_0x30 =
       *(undefined8 *)&(pFVar36->Connections_DEPRECATED).field_0x30;
  *(undefined8 *)&(pFVar30->Connections_DEPRECATED).field_0x38 = uVar4;
  uVar4 = *(undefined8 *)&(pFVar36->Connections_DEPRECATED).field_0x48;
  *(undefined8 *)&(pFVar30->Connections_DEPRECATED).field_0x40 =
       *(undefined8 *)&(pFVar36->Connections_DEPRECATED).field_0x40;
  *(undefined8 *)&(pFVar30->Connections_DEPRECATED).field_0x48 = uVar4;
  uVar4 = *(undefined8 *)&(pFVar36->ConfigValues_DEPRECATED).field_0x8;
  *(undefined8 *)&pFVar30->ConfigValues_DEPRECATED =
       *(undefined8 *)&pFVar36->ConfigValues_DEPRECATED;
  *(undefined8 *)&(pFVar30->ConfigValues_DEPRECATED).field_0x8 = uVar4;
  uVar4 = *(undefined8 *)&(pFVar36->ConfigValues_DEPRECATED).field_0x18;
  *(undefined8 *)&(pFVar30->ConfigValues_DEPRECATED).field_0x10 =
       *(undefined8 *)&(pFVar36->ConfigValues_DEPRECATED).field_0x10;
  *(undefined8 *)&(pFVar30->ConfigValues_DEPRECATED).field_0x18 = uVar4;
  pFVar33 = pFVar42;
  pFVar35 = local_628;
  do {
    pFVar28 = pFVar35;
    pFVar31 = pFVar33;
    FVar2 = pFVar28[1];
    FVar20.Value = pFVar28[2].ComparisonIndex.Value;
    uVar21 = pFVar28[2].Number;
    FVar3 = pFVar28[3];
    pFVar35 = pFVar28 + 0x10;
    pFVar31->Name = *pFVar28;
    (pFVar31->ShortName_DEPRECATED).Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar2;
    FVar2 = pFVar28[4];
    FVar22.Value = pFVar28[5].ComparisonIndex.Value;
    uVar23 = pFVar28[5].Number;
    (pFVar31->ShortName_DEPRECATED).Data.ArrayNum = FVar20.Value;
    (pFVar31->ShortName_DEPRECATED).Data.ArrayMax = uVar21;
    *(FName *)&pFVar31->bShortNameBasedOnPath_DEPRECATED = FVar3;
    FVar3 = pFVar28[6];
    FVar20.Value = pFVar28[7].ComparisonIndex.Value;
    uVar21 = pFVar28[7].Number;
    (pFVar31->ParentPath_DEPRECATED).Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar2;
    (pFVar31->ParentPath_DEPRECATED).Data.ArrayNum = FVar22.Value;
    (pFVar31->ParentPath_DEPRECATED).Data.ArrayMax = uVar23;
    FVar22.Value = pFVar28[8].ComparisonIndex.Value;
    uVar23 = pFVar28[8].Number;
    FVar24.Value = pFVar28[9].ComparisonIndex.Value;
    uVar25 = pFVar28[9].Number;
    pFVar31->ParentModuleName = FVar3;
    *(uint *)&(pFVar31->Class).SoftObjectPtr.field_0x0 = FVar20.Value;
    *(uint *)&(pFVar31->Class).SoftObjectPtr.field_0x4 = uVar21;
    FVar20.Value = pFVar28[10].ComparisonIndex.Value;
    uVar21 = pFVar28[10].Number;
    FVar26.Value = pFVar28[0xb].ComparisonIndex.Value;
    uVar27 = pFVar28[0xb].Number;
    *(uint *)&(pFVar31->Class).SoftObjectPtr.field_0x8 = FVar22.Value;
    *(uint *)&(pFVar31->Class).SoftObjectPtr.field_0xc = uVar23;
    *(uint *)&(pFVar31->Class).SoftObjectPtr.field_0x10 = FVar24.Value;
    *(uint *)&(pFVar31->Class).SoftObjectPtr.field_0x14 = uVar25;
    FVar22.Value = pFVar28[0xc].ComparisonIndex.Value;
    uVar23 = pFVar28[0xc].Number;
    FVar24.Value = pFVar28[0xd].ComparisonIndex.Value;
    uVar25 = pFVar28[0xd].Number;
    *(uint *)&(pFVar31->Class).SoftObjectPtr.field_0x18 = FVar20.Value;
    *(uint *)&(pFVar31->Class).SoftObjectPtr.field_0x1c = uVar21;
    *(uint *)&(pFVar31->Class).SoftObjectPtr.field_0x20 = FVar26.Value;
    *(uint *)&(pFVar31->Class).SoftObjectPtr.field_0x24 = uVar27;
    FVar20.Value = pFVar28[0xe].ComparisonIndex.Value;
    uVar21 = pFVar28[0xe].Number;
    FVar26.Value = pFVar28[0xf].ComparisonIndex.Value;
    uVar27 = pFVar28[0xf].Number;
    *(uint *)&(pFVar31->Connections_DEPRECATED).field_0x0 = FVar22.Value;
    *(uint *)&(pFVar31->Connections_DEPRECATED).field_0x4 = uVar23;
    *(uint *)&(pFVar31->Connections_DEPRECATED).field_0x8 = FVar24.Value;
    *(uint *)&(pFVar31->Connections_DEPRECATED).field_0xc = uVar25;
    *(uint *)&(pFVar31->Connections_DEPRECATED).field_0x10 = FVar20.Value;
    *(uint *)&(pFVar31->Connections_DEPRECATED).field_0x14 = uVar21;
    *(uint *)&(pFVar31->Connections_DEPRECATED).field_0x18 = FVar26.Value;
    *(uint *)&(pFVar31->Connections_DEPRECATED).field_0x1c = uVar27;
    lVar41 = lVar41 + -1;
    pFVar33 = (FRigModuleReference *)&(pFVar31->Connections_DEPRECATED).field_0x20;
  } while (lVar41 != 0);
  uVar21 = pFVar35->Number;
  FVar20.Value = pFVar28[0x11].ComparisonIndex.Value;
  uVar23 = pFVar28[0x11].Number;
  local_630._0_4_ = (int)local_630 + -1;
  FVar22.Value = pFVar28[0x12].ComparisonIndex.Value;
  uVar25 = pFVar28[0x12].Number;
  FVar24.Value = pFVar28[0x13].ComparisonIndex.Value;
  uVar27 = pFVar28[0x13].Number;
  *(uint *)&(pFVar31->Connections_DEPRECATED).field_0x20 = (pFVar35->ComparisonIndex).Value;
  *(uint *)&(pFVar31->Connections_DEPRECATED).field_0x24 = uVar21;
  *(uint *)&(pFVar31->Connections_DEPRECATED).field_0x28 = FVar20.Value;
  *(uint *)&(pFVar31->Connections_DEPRECATED).field_0x2c = uVar23;
  FVar20.Value = pFVar28[0x14].ComparisonIndex.Value;
  uVar21 = pFVar28[0x14].Number;
  FVar26.Value = pFVar28[0x15].ComparisonIndex.Value;
  uVar23 = pFVar28[0x15].Number;
  *(uint *)&(pFVar31->Connections_DEPRECATED).field_0x30 = FVar22.Value;
  *(uint *)&(pFVar31->Connections_DEPRECATED).field_0x34 = uVar25;
  *(uint *)&(pFVar31->Connections_DEPRECATED).field_0x38 = FVar24.Value;
  *(uint *)&(pFVar31->Connections_DEPRECATED).field_0x3c = uVar27;
  FVar22.Value = pFVar28[0x16].ComparisonIndex.Value;
  uVar25 = pFVar28[0x16].Number;
  FVar24.Value = pFVar28[0x17].ComparisonIndex.Value;
  uVar27 = pFVar28[0x17].Number;
  *(uint *)&(pFVar31->Connections_DEPRECATED).field_0x40 = FVar20.Value;
  *(uint *)&(pFVar31->Connections_DEPRECATED).field_0x44 = uVar21;
  *(uint *)&(pFVar31->Connections_DEPRECATED).field_0x48 = FVar26.Value;
  *(uint *)&(pFVar31->Connections_DEPRECATED).field_0x4c = uVar23;
  FVar20.Value = pFVar28[0x18].ComparisonIndex.Value;
  uVar21 = pFVar28[0x18].Number;
  FVar26.Value = pFVar28[0x19].ComparisonIndex.Value;
  uVar23 = pFVar28[0x19].Number;
  *(uint *)&(pFVar31->ConfigValues_DEPRECATED).field_0x0 = FVar22.Value;
  *(uint *)&(pFVar31->ConfigValues_DEPRECATED).field_0x4 = uVar25;
  *(uint *)&(pFVar31->ConfigValues_DEPRECATED).field_0x8 = FVar24.Value;
  *(uint *)&(pFVar31->ConfigValues_DEPRECATED).field_0xc = uVar27;
  *(uint *)&(pFVar31->ConfigValues_DEPRECATED).field_0x10 = FVar20.Value;
  *(uint *)&(pFVar31->ConfigValues_DEPRECATED).field_0x14 = uVar21;
  *(uint *)&(pFVar31->ConfigValues_DEPRECATED).field_0x18 = FVar26.Value;
  *(uint *)&(pFVar31->ConfigValues_DEPRECATED).field_0x1c = uVar23;
  if (((longlong)pFVar42 + (-0x2d0 - (longlong)pFVar44)) / 0x2d0 <
      ((longlong)pFVar39 - (longlong)pFVar32) / 0x2d0) {
    if (pFVar32 < pFVar39) {
      *ppFVar43 = pFVar32;
      ppFVar43[1] = pFVar39;
      *(int *)(ppFVar43 + 2) = (int)local_630;
      ppFVar43 = ppFVar43 + 3;
    }
    if (pFVar42 <= pFVar44 + 1) goto LAB_14a21a2ae;
    pFVar39 = pFVar29 + -2;
    pFVar32 = pFVar44;
  }
  else {
    if (pFVar44 + 1 < pFVar42) {
      *ppFVar43 = pFVar44;
      ppFVar43[1] = pFVar29 + -2;
      *(int *)(ppFVar43 + 2) = (int)local_630;
      ppFVar43 = ppFVar43 + 3;
    }
    if (pFVar39 <= pFVar32) goto LAB_14a21a2ae;
  }
  iVar40 = (int)(((longlong)pFVar39 - (longlong)pFVar32) / 0x2d0) + 1;
  pFVar44 = pFVar32;
  if ((int)local_630 == 0) goto LAB_14a219fcb;
  goto LAB_14a219921;
}

// IsObjectPtrEqual<UControlRig,UControlRig_*,0> @ 14a21a370

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UControlRig,UControlRig_*,0>
          (TObjectPtr<UControlRig> *param_1,UControlRig **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UControlRig *)0x0) {
    return *param_2 == (UControlRig *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UControlRig,UControlRig_const_*,0> @ 14a21a390

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UControlRig,UControlRig_const_*,0>
          (TObjectPtr<UControlRig> *param_1,UControlRig **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UControlRig *)0x0) {
    return *param_2 == (UControlRig *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UControlRigOverrideAsset,UControlRigOverrideAsset_*,0> @ 14a21a3b0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UControlRigOverrideAsset,UControlRigOverrideAsset_*,0>
          (TObjectPtr<UControlRigOverrideAsset> *param_1,UControlRigOverrideAsset **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UControlRigOverrideAsset *)0x0) {
    return *param_2 == (UControlRigOverrideAsset *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UControlRigOverrideAsset,UControlRigOverrideAsset_const_*,0> @ 14a21a3d0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UControlRigOverrideAsset,UControlRigOverrideAsset_const_*,0>
          (TObjectPtr<UControlRigOverrideAsset> *param_1,UControlRigOverrideAsset **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UControlRigOverrideAsset *)0x0) {
    return *param_2 == (UControlRigOverrideAsset *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<USceneComponent,UControlRigComponent_*,0> @ 14a21a3f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<USceneComponent,UControlRigComponent_*,0>
          (TObjectPtr<USceneComponent> *param_1,UControlRigComponent **param_2)

{
  if ((UControlRigComponent *)(param_1->field0_0x0).DebugPtr == (UControlRigComponent *)0x0) {
    return *param_2 == (UControlRigComponent *)0x0;
  }
  return (UControlRigComponent *)(param_1->field0_0x0).DebugPtr == *param_2;
}

// MakeShared<FControlRigObjectBinding,1> @ 14a21a410

TSharedRef<FControlRigObjectBinding,1> * __cdecl
MakeShared<FControlRigObjectBinding,1>
          (TSharedRef<FControlRigObjectBinding,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FControlRigObjectBinding,1> *pTVar4;
  
  pTVar3 = operator_new(0x60);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FControlRigObjectBinding *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFControlRigObjectBinding___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FControlRigObjectBinding__6B_;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[3]._padding_ = 0;
    pTVar3[4]._padding_ = 0;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[5]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x2;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[5].SharedReferenceCount = (atomic<int>)0x2;
    pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
    __return_storage_ptr__->Object = (FControlRigObjectBinding *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((FControlRigObjectBinding *)(pTVar3 + 1) == (FControlRigObjectBinding *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FControlRigObjectBinding,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MutableView<TObjectPtr<UControlRig>_> @ 14a21ac10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TMutableView<TObjectPtr<UControlRig>_> __cdecl
MutableView<TObjectPtr<UControlRig>_>(TObjectPtr<UControlRig> *param_1)

{
  TObjectPtr<UControlRig>_u_0 in_RDX;
  
  param_1->field0_0x0 = in_RDX;
  return (TMutableView<TObjectPtr<UControlRig>_>)(UControlRig **)param_1;
}

// NewObject<UAnimationDataSourceRegistry> @ 14a21ac20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAnimationDataSourceRegistry * __cdecl
NewObject<UAnimationDataSourceRegistry>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UAnimationDataSourceRegistry *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UAnimationDataSourceRegistry_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UAnimationDataSourceRegistry *)
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

// NewObject<UControlRig> @ 14a21ad10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UControlRig * __cdecl
NewObject<UControlRig>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UControlRig *pUVar2;
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
  pUVar1 = UControlRig::StaticClass();
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
  pUVar2 = (UControlRig *)
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

// NewObject<UControlRigValidationPass> @ 14a21ae10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UControlRigValidationPass * __cdecl
NewObject<UControlRigValidationPass>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UObject *pUVar2;
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
  pUVar1 = UControlRigValidationPass::StaticClass();
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
  pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return (UControlRigValidationPass *)pUVar2;
}

// NewObject<UDataAssetLink> @ 14a21af10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDataAssetLink * __cdecl
NewObject<UDataAssetLink>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDataAssetLink *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UDataAssetLink_NoRegister();
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
  pUVar2 = (UDataAssetLink *)
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

// NewObject<UModularRigController> @ 14a21b010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UModularRigController * __cdecl
NewObject<UModularRigController>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UModularRigController *pUVar2;
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
  pUVar1 = UModularRigController::StaticClass();
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
  pUVar2 = (UModularRigController *)
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

// NewObject<URigHierarchy> @ 14a21b110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

URigHierarchy * __cdecl
NewObject<URigHierarchy>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  URigHierarchy *pUVar2;
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
  pUVar1 = Z_Construct_UClass_URigHierarchy_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (URigHierarchy *)
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

// NewObject<UStaticMeshComponent> @ 14a21b200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UStaticMeshComponent * __cdecl NewObject<UStaticMeshComponent>(UObject *param_1)

{
  UClass *pUVar1;
  UStaticMeshComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UStaticMeshComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UTransformableControlHandle> @ 14a21b2a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UTransformableControlHandle * __cdecl
NewObject<UTransformableControlHandle>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UTransformableControlHandle *pUVar2;
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
  pUVar1 = UTransformableControlHandle::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UTransformableControlHandle *)
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

// StaticEnum<enum_ECRSimConstraintType> @ 14a21cb30

UEnum * __cdecl StaticEnum<enum_ECRSimConstraintType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECRSimConstraintType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_ECRSimConstraintType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_ECRSimConstraintType,(UObject *)pUVar1,
                       L"ECRSimConstraintType");
  }
  return Z_Registration_Info_UEnum_ECRSimConstraintType.OuterSingleton;
}

// StaticEnum<enum_ECRSimPointForceType> @ 14a21cb70

UEnum * __cdecl StaticEnum<enum_ECRSimPointForceType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECRSimPointForceType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_ECRSimPointForceType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_ECRSimPointForceType,(UObject *)pUVar1,
                       L"ECRSimPointForceType");
  }
  return Z_Registration_Info_UEnum_ECRSimPointForceType.OuterSingleton;
}

// StaticEnum<enum_ECRSimSoftCollisionType> @ 14a21cbb0

UEnum * __cdecl StaticEnum<enum_ECRSimSoftCollisionType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECRSimSoftCollisionType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_ECRSimSoftCollisionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_ECRSimSoftCollisionType,(UObject *)pUVar1,
                       L"ECRSimSoftCollisionType");
  }
  return Z_Registration_Info_UEnum_ECRSimSoftCollisionType.OuterSingleton;
}

// StaticEnum<enum_EControlRigComponentMapDirection> @ 14a21cbf0

UEnum * __cdecl StaticEnum<enum_EControlRigComponentMapDirection>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EControlRigComponentMapDirection.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_EControlRigComponentMapDirection.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_EControlRigComponentMapDirection,
                       (UObject *)pUVar1,L"EControlRigComponentMapDirection");
  }
  return Z_Registration_Info_UEnum_EControlRigComponentMapDirection.OuterSingleton;
}

// StaticEnum<enum_EControlRigComponentSpace> @ 14a21cc30

UEnum * __cdecl StaticEnum<enum_EControlRigComponentSpace>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EControlRigComponentSpace.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_EControlRigComponentSpace.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_EControlRigComponentSpace,(UObject *)pUVar1,
                       L"EControlRigComponentSpace");
  }
  return Z_Registration_Info_UEnum_EControlRigComponentSpace.OuterSingleton;
}

// StaticEnum<enum_EControlRigReplayPlaybackMode> @ 14a21cc70

UEnum * __cdecl StaticEnum<enum_EControlRigReplayPlaybackMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EControlRigReplayPlaybackMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_EControlRigReplayPlaybackMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_EControlRigReplayPlaybackMode,(UObject *)pUVar1,
                       L"EControlRigReplayPlaybackMode");
  }
  return Z_Registration_Info_UEnum_EControlRigReplayPlaybackMode.OuterSingleton;
}

// StaticEnum<enum_EControlRigVectorKind> @ 14a21ccb0

UEnum * __cdecl StaticEnum<enum_EControlRigVectorKind>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EControlRigVectorKind.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_EControlRigVectorKind.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_EControlRigVectorKind,(UObject *)pUVar1,
                       L"EControlRigVectorKind");
  }
  return Z_Registration_Info_UEnum_EControlRigVectorKind.OuterSingleton;
}

// StaticEnum<enum_EModularRigNotification> @ 14a21ccf0

UEnum * __cdecl StaticEnum<enum_EModularRigNotification>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EModularRigNotification.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_EModularRigNotification.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_EModularRigNotification,(UObject *)pUVar1,
                       L"EModularRigNotification");
  }
  return Z_Registration_Info_UEnum_EModularRigNotification.OuterSingleton;
}

// StaticEnum<enum_ERigExecutionType> @ 14a21cd30

UEnum * __cdecl StaticEnum<enum_ERigExecutionType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERigExecutionType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_ERigExecutionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigExecutionType,(UObject *)pUVar1,
                       L"ERigExecutionType");
  }
  return Z_Registration_Info_UEnum_ERigExecutionType.OuterSingleton;
}

// StaticEnum<enum_ETransformGetterType> @ 14a21cd70

UEnum * __cdecl StaticEnum<enum_ETransformGetterType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETransformGetterType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_ETransformGetterType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_ETransformGetterType,(UObject *)pUVar1,
                       L"ETransformGetterType");
  }
  return Z_Registration_Info_UEnum_ETransformGetterType.OuterSingleton;
}

// StaticEnum<enum_ETransformSpaceMode> @ 14a21cdb0

UEnum * __cdecl StaticEnum<enum_ETransformSpaceMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETransformSpaceMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UEnum_ETransformSpaceMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ControlRig_ETransformSpaceMode,(UObject *)pUVar1,
                       L"ETransformSpaceMode");
  }
  return Z_Registration_Info_UEnum_ETransformSpaceMode.OuterSingleton;
}

// ToRawPtrTArrayUnsafe<TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_>_&,TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_>_> @ 14a21cdf0

TArray<UAssetUserData_*,TSizedDefaultAllocator<32>_> * __cdecl
ToRawPtrTArrayUnsafe<TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_>_&,TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_>_>
          (TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_> *param_1)

{
  return (TArray<UAssetUserData_*,TSizedDefaultAllocator<32>_> *)param_1;
}

// ~TFunction_OwnedObject<`FModularRigModel::FindModuleInstancesOfClass'::__l2::<lambda_1>,0,0> @ 14a223750

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FModularRigModel::FindModuleInstancesOfClass'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FModularRigModel::FindModuleInstancesOfClass_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FModularRigModel::FindModuleInstancesOfClass'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularRigController::GetAllModules'::__l2::<lambda_1>,0,0> @ 14a223770

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigController::GetAllModules'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularRigController::GetAllModules_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularRigController::GetAllModules'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularRig::GetControlsInOrder'::__l2::<lambda_1>,0,0> @ 14a223790

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRig::GetControlsInOrder'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularRig::GetControlsInOrder_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularRig::GetControlsInOrder'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularRigController::GetPossibleBindings'::__l2::<lambda_1>,0,1> @ 14a2237b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigController::GetPossibleBindings'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UModularRigController::GetPossibleBindings_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularRigController::GetPossibleBindings'::`2'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularRig::GetPreloadDependencies'::__l2::<lambda_1>,0,0> @ 14a2237d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRig::GetPreloadDependencies'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularRig::GetPreloadDependencies_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularRig::GetPreloadDependencies'::`2'::<lambda_1>,0,0>::_vftable_
  ;
  return;
}

// ~TFunction_OwnedObject<`UModularRigController::ImportModuleSettingsFromString'::__l2::<lambda_1>,0,0> @ 14a2237f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigController::ImportModuleSettingsFromString'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UModularRigController::ImportModuleSettingsFromString_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularRigController::ImportModuleSettingsFromString'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UControlRigReplay::PerformTest'::__l2::<lambda_1>,0,1> @ 14a223810

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UControlRigReplay::PerformTest'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UControlRigReplay::PerformTest_::__l2::<lambda_1>,0,1>(void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UControlRigReplay::PerformTest'::`2'::<lambda_1>,0,1>::_vftable_;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
                    /* WARNING: Could not recover jumptable at 0x00014a223833. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UModularRigController::RefreshModuleVariables'::__l2::<lambda_1>,0,1> @ 14a223840

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigController::RefreshModuleVariables'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UModularRigController::RefreshModuleVariables_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularRigController::RefreshModuleVariables'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularRigController::RefreshModuleVariables'::__l2::<lambda_1>,0,0> @ 14a223860

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigController::RefreshModuleVariables'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularRigController::RefreshModuleVariables_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularRigController::RefreshModuleVariables'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FControlRigReplayTracks::RestoreComponents'::__l2::<lambda_1>,0,1> @ 14a223880

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::RestoreComponents'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FControlRigReplayTracks::RestoreComponents_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FControlRigReplayTracks::RestoreComponents'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if (*(longlong *)((longlong)this + 0x30) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x40);
    if (*(longlong **)((longlong)this + 0x58) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x58);
    }
                    /* WARNING: Could not recover jumptable at 0x00014a2238a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FControlRigReplayTracks::RestoreHierarchy'::__l2::<lambda_1>,0,1> @ 14a2238b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::RestoreHierarchy'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FControlRigReplayTracks::RestoreHierarchy_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FControlRigReplayTracks::RestoreHierarchy'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if (*(longlong *)((longlong)this + 0x30) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x40);
    if (*(longlong **)((longlong)this + 0x58) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x58);
    }
                    /* WARNING: Could not recover jumptable at 0x00014a2238d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FControlRigReplayTracks::RestoreMetaData'::__l2::<lambda_1>,0,1> @ 14a2238e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::RestoreMetaData'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FControlRigReplayTracks::RestoreMetaData_::__l2::<lambda_1>,0,1>(void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FControlRigReplayTracks::RestoreMetaData'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if (*(longlong *)((longlong)this + 0x30) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x40);
    if (*(longlong **)((longlong)this + 0x58) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x58);
    }
                    /* WARNING: Could not recover jumptable at 0x00014a223903. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FControlRigReplayTracks::RestorePose'::__l2::<lambda_1>,0,1> @ 14a223910

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::RestorePose'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FControlRigReplayTracks::RestorePose_::__l2::<lambda_1>,0,1>(void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FControlRigReplayTracks::RestorePose'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if (*(longlong *)((longlong)this + 0x30) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x40);
    if (*(longlong **)((longlong)this + 0x58) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x58);
    }
                    /* WARNING: Could not recover jumptable at 0x00014a223933. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FModularRigModel::SortModuleNames'::__l2::<lambda_1>,0,0> @ 14a223940

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FModularRigModel::SortModuleNames'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FModularRigModel::SortModuleNames_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FModularRigModel::SortModuleNames'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FControlRigReplayTracks::StoreComponents'::__l2::<lambda_1>,0,0> @ 14a223960

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::StoreComponents'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FControlRigReplayTracks::StoreComponents_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FControlRigReplayTracks::StoreComponents'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FControlRigReplayTracks::StoreHierarchy'::__l2::<lambda_1>,0,1> @ 14a223980

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::StoreHierarchy'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FControlRigReplayTracks::StoreHierarchy_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FControlRigReplayTracks::StoreHierarchy'::`2'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FControlRigReplayTracks::StoreMetaData'::__l2::<lambda_1>,0,0> @ 14a2239a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::StoreMetaData'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FControlRigReplayTracks::StoreMetaData_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FControlRigReplayTracks::StoreMetaData'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FControlRigReplayTracks::StorePose'::__l2::<lambda_1>,0,0> @ 14a2239c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::StorePose'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FControlRigReplayTracks::StorePose_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FControlRigReplayTracks::StorePose'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularRigController::SwapModulesOfClass'::__l2::<lambda_1>,0,1> @ 14a2239e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigController::SwapModulesOfClass'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UModularRigController::SwapModulesOfClass_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularRigController::SwapModulesOfClass'::`2'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularRig::UpdateSupportedEvents'::__l2::<lambda_1>,0,0> @ 14a223a00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRig::UpdateSupportedEvents'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularRig::UpdateSupportedEvents_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularRig::UpdateSupportedEvents'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`URigHierarchy::GetElementsOfType<FRigBoneElement>'::__l5::<lambda_1>,0,0> @ 14a223a20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetElementsOfType<FRigBoneElement>'::__l5::<lambda_1>,0,0>::
~TFunction_OwnedObject<_URigHierarchy::GetElementsOfType<FRigBoneElement>_::__l5::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4____GetElementsOfType_UFRigBoneElement___URigHierarchy__QEBA_AV__TArray_PEAUFRigBoneElement__V__TSizedDefaultAllocator__0CA______N_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`URigHierarchy::GetElementsOfType<FRigConnectorElement>'::__l5::<lambda_1>,0,0> @ 14a223a40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetElementsOfType<FRigConnectorElement>'::__l5::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_URigHierarchy::GetElementsOfType<FRigConnectorElement>_::__l5::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4____GetElementsOfType_UFRigConnectorElement___URigHierarchy__QEBA_AV__TArray_PEAUFRigConnectorElement__V__TSizedDefaultAllocator__0CA______N_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`URigHierarchy::GetElementsOfType<FRigControlElement>'::__l5::<lambda_1>,0,0> @ 14a223a60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetElementsOfType<FRigControlElement>'::__l5::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_URigHierarchy::GetElementsOfType<FRigControlElement>_::__l5::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4____GetElementsOfType_UFRigControlElement___URigHierarchy__QEBA_AV__TArray_PEAUFRigControlElement__V__TSizedDefaultAllocator__0CA______N_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`URigHierarchy::GetElementsOfType<FRigCurveElement>'::__l5::<lambda_1>,0,0> @ 14a223a80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetElementsOfType<FRigCurveElement>'::__l5::<lambda_1>,0,0>::
~TFunction_OwnedObject<_URigHierarchy::GetElementsOfType<FRigCurveElement>_::__l5::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4____GetElementsOfType_UFRigCurveElement___URigHierarchy__QEBA_AV__TArray_PEAUFRigCurveElement__V__TSizedDefaultAllocator__0CA______N_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`FControlRigReplayTracks::ForEachElement'::__l5::<lambda_1>,0,1> @ 14a223aa0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::ForEachElement'::__l5::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FControlRigReplayTracks::ForEachElement_::__l5::<lambda_1>,0,1>(void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FControlRigReplayTracks::ForEachElement'::`5'::<lambda_1>,0,1>::
        _vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014a223ac3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FControlRigReplayTracks::RestoreComponents'::__l5::<lambda_1>,0,1> @ 14a223ad0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::RestoreComponents'::__l5::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FControlRigReplayTracks::RestoreComponents_::__l5::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FControlRigReplayTracks::RestoreComponents'::`5'::<lambda_1>,0,1>::
        _vftable_;
  if (*(longlong *)((longlong)this + 0x30) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x40);
    if (*(longlong **)((longlong)this + 0x58) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x58);
    }
                    /* WARNING: Could not recover jumptable at 0x00014a223af3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FControlRigReplayTracks::StoreComponents'::__l5::<lambda_1>,0,0> @ 14a223b00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::StoreComponents'::__l5::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FControlRigReplayTracks::StoreComponents_::__l5::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FControlRigReplayTracks::StoreComponents'::`5'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularRig::UpdateModuleHierarchyFromCDO'::__l5::<lambda_1>,0,0> @ 14a223b20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRig::UpdateModuleHierarchyFromCDO'::__l5::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UModularRig::UpdateModuleHierarchyFromCDO_::__l5::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularRig::UpdateModuleHierarchyFromCDO'::`5'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FModularRigModel::PatchModelsOnLoad'::__l7::<lambda_1>,0,0> @ 14a223b40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FModularRigModel::PatchModelsOnLoad'::__l7::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FModularRigModel::PatchModelsOnLoad_::__l7::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FModularRigModel::PatchModelsOnLoad'::`7'::<lambda_1>,0,0>::_vftable_
  ;
  return;
}

// ~TFunction_OwnedObject<`UTransformableControlHandle::OnControlModified'::__l17::<lambda_1>,0,0> @ 14a223b60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTransformableControlHandle::OnControlModified'::__l17::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UTransformableControlHandle::OnControlModified_::__l17::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UTransformableControlHandle::OnControlModified'::`17'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``UControlRigReplay::StartReplay'::__l2::<lambda_3>::operator()'::__l11::<lambda_1>,0,0> @ 14a223b80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UControlRigReplay::StartReplay'::__l2::<lambda_3>::operator()'::__l11::<lambda_1>,0,0>
::
~TFunction_OwnedObject<__UControlRigReplay::StartReplay_::__l2::<lambda_3>::operator()_::__l11::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UControlRigReplay::StartReplay'::`2'::<lambda_3>::operator()'::`11'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UTransformableControlHandle::GetEvaluationTask'::__l14::<lambda_1>,0,1> @ 14a223ba0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTransformableControlHandle::GetEvaluationTask'::__l14::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UTransformableControlHandle::GetEvaluationTask_::__l14::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UTransformableControlHandle::GetEvaluationTask'::`14'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UControlRig::Execute'::__l2::<lambda_2>,0,0> @ 14a223bc0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UControlRig::Execute'::__l2::<lambda_2>,0,0>::
~TFunction_OwnedObject<_UControlRig::Execute_::__l2::<lambda_2>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UControlRig::Execute'::`2'::<lambda_2>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UTransformableControlHandle::OnControlModified'::__l30::<lambda_2>,0,0> @ 14a223be0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTransformableControlHandle::OnControlModified'::__l30::<lambda_2>,0,0>::
~TFunction_OwnedObject<_UTransformableControlHandle::OnControlModified_::__l30::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UTransformableControlHandle::OnControlModified'::`30'::<lambda_2>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UControlRigReplay::ValidateExpectedResults'::__l92::<lambda_2>,0,1> @ 14a223c00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UControlRigReplay::ValidateExpectedResults'::__l92::<lambda_2>,0,1>::
~TFunction_OwnedObject<_UControlRigReplay::ValidateExpectedResults_::__l92::<lambda_2>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UControlRigReplay::ValidateExpectedResults'::`92'::<lambda_2>,0,1>::
        _vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014a223c23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FControlRigModule::RegisterTransformableCustomization'::__l2::<lambda_3>,0,0> @ 14a223c30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigModule::RegisterTransformableCustomization'::__l2::<lambda_3>,0,0>
::
~TFunction_OwnedObject<_FControlRigModule::RegisterTransformableCustomization_::__l2::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FControlRigModule::RegisterTransformableCustomization'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularRigController::ImportModuleSettingsFromString'::__l105::<lambda_3>,0,1> @ 14a223c50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigController::ImportModuleSettingsFromString'::__l105::<lambda_3>,0,1>
::
~TFunction_OwnedObject<_UModularRigController::ImportModuleSettingsFromString_::__l105::<lambda_3>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularRigController::ImportModuleSettingsFromString'::`105'::<lambda_3>,0,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FControlRigModule::RegisterTransformableCustomization'::__l2::<lambda_4>,0,0> @ 14a223c90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigModule::RegisterTransformableCustomization'::__l2::<lambda_4>,0,0>
::
~TFunction_OwnedObject<_FControlRigModule::RegisterTransformableCustomization_::__l2::<lambda_4>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FControlRigModule::RegisterTransformableCustomization'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UModularRigController::ImportModuleSettingsFromString'::__l149::<lambda_4>,0,1> @ 14a223cb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigController::ImportModuleSettingsFromString'::__l149::<lambda_4>,0,1>
::
~TFunction_OwnedObject<_UModularRigController::ImportModuleSettingsFromString_::__l149::<lambda_4>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularRigController::ImportModuleSettingsFromString'::`149'::<lambda_4>,0,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
    return;
  }
  return;
}

// operator() @ 14a22e8f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
``UControlRigReplay::StartReplay'::__l2::<lambda_3>::operator()'::__l11::<lambda_1>::operator()
          (void *this,Type param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  
  if (param_1 == Error) {
    if (1 < (byte)LogControlRig._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
    }
  }
  else if ((param_1 == PerformanceWarning) || (param_1 == Warning)) {
    if (2 < (byte)LogControlRig._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
    }
  }
  else if (3 < (byte)LogControlRig._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
  }
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator() @ 14a22f350

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall <lambda_25>::operator()(<lambda_25> *this,IConsoleVariable *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  EInternalObjectFlags EVar6;
  uint uVar7;
  UClass *pUVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  TObjectIterator<UControlRigOverrideAsset> local_48;
  FDestructionSentinel local_30;
  
  local_48.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ObjectArray.ArrayNum = 0;
  local_48.ObjectArray.ArrayMax = 0;
  local_48.Index = 0xffffffff;
  EVar6 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar8 = UControlRigOverrideAsset::StaticClass();
  GetObjectsOfClass(pUVar8,&local_48.ObjectArray,true,RF_ClassDefaultObject,
                    EVar6 | (PendingConstruction|Unreachable|Garbage|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UControlRigOverrideAsset>::Advance(&local_48);
    lVar10 = (longlong)local_48.Index;
    if (local_48.Index < 0) break;
    if (local_48.ObjectArray.ArrayNum <= local_48.Index) break;
    uVar9 = 0;
    if (local_48.Index < local_48.ObjectArray.ArrayNum) {
      uVar9 = (uint)~local_48.Index >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    lVar10 = *(longlong *)(local_48.ObjectArray.AllocatorInstance.Data + lVar10 * 8);
    if ((lVar10 != 0) && ((*(uint *)(lVar10 + 8) >> 0x1e & 1) == 0)) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar10 + 0x180),
                 (FWriteAccessScope *)&local_30);
      *(int *)(lVar10 + 0x19c) = *(int *)(lVar10 + 0x19c) + 1;
      bVar3 = false;
      uVar9 = *(int *)(lVar10 + 400) - 1;
      if (-1 < (int)uVar9) {
        lVar11 = (longlong)(int)uVar9 << 4;
        do {
          uVar7 = 0;
          if ((int)uVar9 < *(int *)(lVar10 + 400)) {
            uVar7 = ~uVar9 >> 0x1f;
          }
          if (uVar7 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          if ((*(int *)(lVar11 + 8 + *(longlong *)(lVar10 + 0x188)) == 0) ||
             (plVar1 = *(longlong **)(lVar11 + *(longlong *)(lVar10 + 0x188)),
             plVar1 == (longlong *)0x0)) {
LAB_14a22f4c7:
            bVar3 = true;
          }
          else {
            cVar5 = (**(code **)(*plVar1 + 0x68))();
            if (cVar5 == '\0') goto LAB_14a22f4c7;
          }
          lVar11 = lVar11 + -0x10;
          uVar9 = uVar9 - 1;
        } while (-1 < (int)uVar9);
      }
      *(int *)(lVar10 + 0x19c) = *(int *)(lVar10 + 0x19c) + -1;
      if (bVar3) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(lVar10 + 0x180),false);
      }
      if (local_30.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
      }
    }
  }
  if (local_48.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ObjectArray.AllocatorInstance.Data);
  }
  return;
}

// `vector_deleting_destructor'`adjustor{704}' @ 14a2340dc

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl AControlRigShapeActor::`vector deleting
   destructor'`adjustor{704}' (unsigned int) __ptr64 */

void * __thiscall
AControlRigShapeActor::_vector_deleting_destructor__adjustor_704__
          (AControlRigShapeActor *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((AControlRigShapeActor *)&this[-1].field_0xf0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14a2340f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UControlRig::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UControlRig::_vector_deleting_destructor__adjustor_40__(UControlRig *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UControlRig *)&this[-1].RigModuleSettings.ExposedConnectors.ArrayNum,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{656}' @ 14a234100

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UControlRig::`vector deleting
   destructor'`adjustor{656}' (unsigned int) __ptr64 */

void * __thiscall
UControlRig::_vector_deleting_destructor__adjustor_656__(UControlRig *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UControlRig *)&this[-1].OverrideAssetsChangedDelegate.field_0x18,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{664}' @ 14a234114

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UControlRig::`vector deleting
   destructor'`adjustor{664}' (unsigned int) __ptr64 */

void * __thiscall
UControlRig::_vector_deleting_destructor__adjustor_664__(UControlRig *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UControlRig *)&this[-1].OverrideAssetsChangedDelegate.field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{672}' @ 14a234128

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UControlRig::`vector deleting
   destructor'`adjustor{672}' (unsigned int) __ptr64 */

void * __thiscall
UControlRig::_vector_deleting_destructor__adjustor_672__(UControlRig *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UControlRig *)&this[-1].OverrideAssetsChangedDelegate.field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{520}' @ 14a23413c

/* [thunk]:public: virtual void * __ptr64 __cdecl UControlRigBlueprintGeneratedClass::`vector
   deleting destructor'`adjustor{520}' (unsigned int) __ptr64 */

void * __thiscall
UControlRigBlueprintGeneratedClass::_vector_deleting_destructor__adjustor_520__
          (UControlRigBlueprintGeneratedClass *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UControlRigBlueprintGeneratedClass *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{880}' @ 14a234150

/* [thunk]:public: virtual void * __ptr64 __cdecl UControlRigBlueprintGeneratedClass::`vector
   deleting destructor'`adjustor{880}' (unsigned int) __ptr64 */

void * __thiscall
UControlRigBlueprintGeneratedClass::_vector_deleting_destructor__adjustor_880__
          (UControlRigBlueprintGeneratedClass *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UControlRigBlueprintGeneratedClass *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{592}' @ 14a234164

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UControlRigComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UControlRigComponent::_vector_deleting_destructor__adjustor_592__
          (UControlRigComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UControlRigComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 14a234178

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UControlRigComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UControlRigComponent::_vector_deleting_destructor__adjustor_600__
          (UControlRigComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UControlRigComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 14a23418c

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UControlRigComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UControlRigComponent::_vector_deleting_destructor__adjustor_608__
          (UControlRigComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UControlRigComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14a2341a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UControlRigComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UControlRigComponent::_vector_deleting_destructor__adjustor_40__
          (UControlRigComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UControlRigComponent *)&this[-1].LastInputTransforms,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14a2341b0

/* [thunk]:public: virtual void * __ptr64 __cdecl UModularRig::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UModularRig::_vector_deleting_destructor__adjustor_40__(UModularRig *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UModularRig *)&this[-1].LastExecutedElements.ArrayNum,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{656}' @ 14a2341c0

/* [thunk]:public: virtual void * __ptr64 __cdecl UModularRig::`vector deleting
   destructor'`adjustor{656}' (unsigned int) __ptr64 */

void * __thiscall
UModularRig::_vector_deleting_destructor__adjustor_656__(UModularRig *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UModularRig *)&this[-1].field_0xb90,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{664}' @ 14a2341d4

/* [thunk]:public: virtual void * __ptr64 __cdecl UModularRig::`vector deleting
   destructor'`adjustor{664}' (unsigned int) __ptr64 */

void * __thiscall
UModularRig::_vector_deleting_destructor__adjustor_664__(UModularRig *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UModularRig *)&this[-1].field_0xb88,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{672}' @ 14a2341e8

/* [thunk]:public: virtual void * __ptr64 __cdecl UModularRig::`vector deleting
   destructor'`adjustor{672}' (unsigned int) __ptr64 */

void * __thiscall
UModularRig::_vector_deleting_destructor__adjustor_672__(UModularRig *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UModularRig *)&this[-1].field_0xb80,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14a234200

void * __thiscall
FSampleTrack<unsigned_int>::_scalar_deleting_destructor_
          (FSampleTrack<unsigned_int> *this,uint param_1)

{
  *(undefined ***)this = &___7__FSampleTrackShared_I_Internal_ControlRig_UE__6B_;
  if (*(void **)&this->field_0xa8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xa8);
  }
  FSampleTrackBase::~FSampleTrackBase((FSampleTrackBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a234260

void * __thiscall
FSampleTrack<TArray<int,TSizedDefaultAllocator<32>_>_>::_scalar_deleting_destructor_
          (FSampleTrack<TArray<int,TSizedDefaultAllocator<32>_>_> *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__FSampleTrackShared_V__TArray_HV__TSizedDefaultAllocator__0CA______Internal_ControlRig_UE__6B_
  ;
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<int,TSizedDefaultAllocator<32>_> **)&this->field_0xa8,
             *(int *)&this->field_0xb0);
  if (*(void **)&this->field_0xa8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xa8);
  }
  FSampleTrackBase::~FSampleTrackBase((FSampleTrackBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2342d0

void * __thiscall
FSampleTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>::_scalar_deleting_destructor_
          (FSampleTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_> *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__FSampleTrackShared_V__TArray_UFRigElementKey__V__TSizedDefaultAllocator__0CA______Internal_ControlRig_UE__6B_
  ;
  DestructItems<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<FRigElementKey,TSizedDefaultAllocator<32>_> **)&this->field_0xa8,
             *(int *)&this->field_0xb0);
  if (*(void **)&this->field_0xa8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xa8);
  }
  FSampleTrackBase::~FSampleTrackBase((FSampleTrackBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a234340

void * __thiscall
FSampleTrack<FName>::_scalar_deleting_destructor_(FSampleTrack<FName> *this,uint param_1)

{
  *(undefined ***)this = &___7__FSampleTrackShared_VFName___Internal_ControlRig_UE__6B_;
  if (*(void **)&this->field_0xa8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xa8);
  }
  FSampleTrackBase::~FSampleTrackBase((FSampleTrackBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2343a0

void * __thiscall
UE::ControlRig::Internal::FSampleTrackShared<unsigned_int>::_scalar_deleting_destructor_
          (FSampleTrackShared<unsigned_int> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7__FSampleTrackShared_I_Internal_ControlRig_UE__6B_;
  pFVar1 = (this->ValuesStorage).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSampleTrackBase::~FSampleTrackBase((FSampleTrackBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a234400

void * __thiscall
UE::ControlRig::Internal::FSampleTrackShared<TArray<int,TSizedDefaultAllocator<32>_>_>::
_scalar_deleting_destructor_
          (FSampleTrackShared<TArray<int,TSizedDefaultAllocator<32>_>_> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__FSampleTrackShared_V__TArray_HV__TSizedDefaultAllocator__0CA______Internal_ControlRig_UE__6B_
  ;
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(this->ValuesStorage).AllocatorInstance.Data
             ,(this->ValuesStorage).ArrayNum);
  pFVar1 = (this->ValuesStorage).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSampleTrackBase::~FSampleTrackBase((FSampleTrackBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a234470

void * __thiscall
UE::ControlRig::Internal::FSampleTrackShared<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>::
_scalar_deleting_destructor_
          (FSampleTrackShared<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_> *this,
          uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__FSampleTrackShared_V__TArray_UFRigElementKey__V__TSizedDefaultAllocator__0CA______Internal_ControlRig_UE__6B_
  ;
  DestructItems<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)
             (this->ValuesStorage).AllocatorInstance.Data,(this->ValuesStorage).ArrayNum);
  pFVar1 = (this->ValuesStorage).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSampleTrackBase::~FSampleTrackBase((FSampleTrackBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2344e0

void * __thiscall
UE::ControlRig::Internal::FSampleTrackShared<FName>::_scalar_deleting_destructor_
          (FSampleTrackShared<FName> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7__FSampleTrackShared_VFName___Internal_ControlRig_UE__6B_;
  pFVar1 = (this->ValuesStorage).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSampleTrackBase::~FSampleTrackBase((FSampleTrackBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a234540

void * __thiscall
IBaseDelegateInstance<TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a234570

void * __thiscall
IBaseDelegateInstance<void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2345a0

void * __thiscall
IBaseDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2345d0

void * __thiscall
IBaseDelegateInstance<void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a234600

void * __thiscall
IBaseDelegateInstance<void___cdecl(URigHierarchy_*,FRigEventContext_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(URigHierarchy_*,FRigEventContext_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a234630

void * __thiscall
IBaseDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a234660

void * __thiscall
IBaseDelegateInstance<void___cdecl(FControlRigExecuteContext_const_*,FString_const_&,UControlRigShapeLibrary_*,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FControlRigExecuteContext_const_*,FString_const_&,UControlRigShapeLibrary_*,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a234690

void * __thiscall
IBaseDelegateInstance<void___cdecl(UControlRigOverrideAsset_const_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UControlRigOverrideAsset_const_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2346c0

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_ERigHierarchyNotification,URigHierarchy_*,FRigNotificationSubject_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2346f0

void * __thiscall
IBaseDelegateInstance<bool___cdecl(FName_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<bool___cdecl(FName_const_&),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a234720

void * __thiscall
TBaseFunctorDelegateInstance<TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,`FAnimNode_ControlRigBase::UpdateGetAssetUserDataDelegate'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a234750

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartRecording'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a234780

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartRecording'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2347b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartReplay'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2347e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartReplay'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a234810

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartRecording'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a234840

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartRecording'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a234870

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartReplay'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2348a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartReplay'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2348d0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartRecording'::__l2::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a234900

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartRecording'::__l2::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a234930

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartReplay'::__l2::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a234960

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartReplay'::__l2::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a234990

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FAnimNode_ControlRig,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FAnimNode_ControlRig,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2349c0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FControlEvaluationGraphBinding,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FControlEvaluationGraphBinding,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2349f0

void * __thiscall
TBaseUObjectMethodDelegateInstance<1,UControlRig_const_,bool___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<1,UControlRig_const_,bool___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a234a20

void * __thiscall
TBaseUObjectMethodDelegateInstance<1,UControlRigReplay_const_,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<1,UControlRigReplay_const_,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a234a50

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AControlRigControlActor,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,AControlRigControlActor,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a234a80

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a234ab0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(URigHierarchy_*,FRigEventContext_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(URigHierarchy_*,FRigEventContext_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a234ae0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(FControlRigExecuteContext_const_*,FString_const_&,UControlRigShapeLibrary_*,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(FControlRigExecuteContext_const_*,FString_const_&,UControlRigShapeLibrary_*,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a234b10

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRigOverrideAsset_const_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRigOverrideAsset_const_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a234b40

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(enum_ERigHierarchyNotification,URigHierarchy_*,FRigNotificationSubject_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a234b70

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a234ba0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a234bd0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRigValidator,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UControlRigValidator,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a234c00

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a234c30

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a234c60

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a234c90

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(enum_ERigHierarchyNotification,URigHierarchy_*,FRigNotificationSubject_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a234cc0

void * __thiscall
TCommonDelegateInstanceState<TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a234cf0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a234d20

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a234d50

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a234d80

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(URigHierarchy_*,FRigEventContext_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(URigHierarchy_*,FRigEventContext_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a234db0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a234de0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FControlRigExecuteContext_const_*,FString_const_&,UControlRigShapeLibrary_*,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FControlRigExecuteContext_const_*,FString_const_&,UControlRigShapeLibrary_*,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a234e10

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UControlRigOverrideAsset_const_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UControlRigOverrideAsset_const_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a234e40

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_ERigHierarchyNotification,URigHierarchy_*,FRigNotificationSubject_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a234e70

void * __thiscall
TCommonDelegateInstanceState<bool___cdecl(FName_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<bool___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a234ea0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FModularRigModel::FindModuleInstancesOfClass'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FModularRigModel::FindModuleInstancesOfClass'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a234ee0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigController::GetAllModules'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularRigController::GetAllModules'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a234f20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRig::GetControlsInOrder'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularRig::GetControlsInOrder'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a234f60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigController::GetPossibleBindings'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularRigController::GetPossibleBindings'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a234fa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRig::GetPreloadDependencies'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularRig::GetPreloadDependencies'::`2'::<lambda_1>,0,0>::_vftable_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a234fe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigController::ImportModuleSettingsFromString'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularRigController::ImportModuleSettingsFromString'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a235020

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UControlRigReplay::PerformTest'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UControlRigReplay::PerformTest'::`2'::<lambda_1>,0,1>::_vftable_;
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

// `scalar_deleting_destructor' @ 14a235080

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigController::RefreshModuleVariables'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularRigController::RefreshModuleVariables'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2350c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigController::RefreshModuleVariables'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularRigController::RefreshModuleVariables'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a235100

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::RestoreComponents'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FControlRigReplayTracks::RestoreComponents'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if (*(longlong *)((longlong)this + 0x30) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x40);
    if (*(longlong **)((longlong)this + 0x58) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x58);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a235160

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::RestoreHierarchy'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FControlRigReplayTracks::RestoreHierarchy'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if (*(longlong *)((longlong)this + 0x30) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x40);
    if (*(longlong **)((longlong)this + 0x58) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x58);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2351c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::RestoreMetaData'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FControlRigReplayTracks::RestoreMetaData'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if (*(longlong *)((longlong)this + 0x30) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x40);
    if (*(longlong **)((longlong)this + 0x58) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x58);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a235220

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::RestorePose'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FControlRigReplayTracks::RestorePose'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if (*(longlong *)((longlong)this + 0x30) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x40);
    if (*(longlong **)((longlong)this + 0x58) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x58);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a235280

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FModularRigModel::SortModuleNames'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FModularRigModel::SortModuleNames'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2352c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::StoreComponents'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FControlRigReplayTracks::StoreComponents'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a235300

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::StoreHierarchy'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FControlRigReplayTracks::StoreHierarchy'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a235340

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::StoreMetaData'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FControlRigReplayTracks::StoreMetaData'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a235380

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::StorePose'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FControlRigReplayTracks::StorePose'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2353c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigController::SwapModulesOfClass'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularRigController::SwapModulesOfClass'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a235400

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRig::UpdateSupportedEvents'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularRig::UpdateSupportedEvents'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a235440

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetElementsOfType<FRigBoneElement>'::__l5::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4____GetElementsOfType_UFRigBoneElement___URigHierarchy__QEBA_AV__TArray_PEAUFRigBoneElement__V__TSizedDefaultAllocator__0CA______N_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a235480

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetElementsOfType<FRigConnectorElement>'::__l5::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4____GetElementsOfType_UFRigConnectorElement___URigHierarchy__QEBA_AV__TArray_PEAUFRigConnectorElement__V__TSizedDefaultAllocator__0CA______N_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2354c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetElementsOfType<FRigControlElement>'::__l5::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4____GetElementsOfType_UFRigControlElement___URigHierarchy__QEBA_AV__TArray_PEAUFRigControlElement__V__TSizedDefaultAllocator__0CA______N_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a235500

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetElementsOfType<FRigCurveElement>'::__l5::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4____GetElementsOfType_UFRigCurveElement___URigHierarchy__QEBA_AV__TArray_PEAUFRigCurveElement__V__TSizedDefaultAllocator__0CA______N_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a235540

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::ForEachElement'::__l5::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FControlRigReplayTracks::ForEachElement'::`5'::<lambda_1>,0,1>::
        _vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2355a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::RestoreComponents'::__l5::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FControlRigReplayTracks::RestoreComponents'::`5'::<lambda_1>,0,1>::
        _vftable_;
  if (*(longlong *)((longlong)this + 0x30) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x40);
    if (*(longlong **)((longlong)this + 0x58) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x58);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a235600

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::StoreComponents'::__l5::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FControlRigReplayTracks::StoreComponents'::`5'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a235640

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRig::UpdateModuleHierarchyFromCDO'::__l5::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularRig::UpdateModuleHierarchyFromCDO'::`5'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a235680

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FModularRigModel::PatchModelsOnLoad'::__l7::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FModularRigModel::PatchModelsOnLoad'::`7'::<lambda_1>,0,0>::_vftable_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2356c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTransformableControlHandle::OnControlModified'::__l17::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UTransformableControlHandle::OnControlModified'::`17'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a235700

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UControlRigReplay::StartReplay'::__l2::<lambda_3>::operator()'::__l11::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UControlRigReplay::StartReplay'::`2'::<lambda_3>::operator()'::`11'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a235740

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTransformableControlHandle::GetEvaluationTask'::__l14::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UTransformableControlHandle::GetEvaluationTask'::`14'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a235780

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UControlRig::Execute'::__l2::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UControlRig::Execute'::`2'::<lambda_2>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2357c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTransformableControlHandle::OnControlModified'::__l30::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UTransformableControlHandle::OnControlModified'::`30'::<lambda_2>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a235800

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UControlRigReplay::ValidateExpectedResults'::__l92::<lambda_2>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UControlRigReplay::ValidateExpectedResults'::`92'::<lambda_2>,0,1>::
        _vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a235860

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigModule::RegisterTransformableCustomization'::__l2::<lambda_3>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FControlRigModule::RegisterTransformableCustomization'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2358a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigController::ImportModuleSettingsFromString'::__l105::<lambda_3>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularRigController::ImportModuleSettingsFromString'::`105'::<lambda_3>,0,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a235900

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigModule::RegisterTransformableCustomization'::__l2::<lambda_4>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FControlRigModule::RegisterTransformableCustomization'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a235940

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigController::ImportModuleSettingsFromString'::__l149::<lambda_4>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UModularRigController::ImportModuleSettingsFromString'::`149'::<lambda_4>,0,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2359a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FControlRigObjectBinding,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FControlRigObjectBinding,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2359e0

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
AControlRigControlActor::_scalar_deleting_destructor_(AControlRigControlActor *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7AControlRigControlActor__6B_;
  RemoveUnbindDelegate(this);
  pFVar1 = (this->Materials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Components).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ShapeTransforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ControlNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->ControlRig).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar1 = (this->ColorParameter).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x370);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a235ab0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void * __thiscall
AControlRigShapeActor::_scalar_deleting_destructor_(AControlRigShapeActor *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &___7IViewportSelectableObject__6B_;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x3b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a235b20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void * __thiscall
FAnimNode_ControlRig::_scalar_deleting_destructor_(FAnimNode_ControlRig *this,uint param_1)

{
  ~FAnimNode_ControlRig(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x4b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a235b60

void * __thiscall
FAnimNode_ControlRigBase::_scalar_deleting_destructor_(FAnimNode_ControlRigBase *this,uint param_1)

{
  ~FAnimNode_ControlRigBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x228);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a235ba0

void * __thiscall
FAnimNode_ControlRig_ExternalSource::_scalar_deleting_destructor_
          (FAnimNode_ControlRig_ExternalSource *this,uint param_1)

{
  FAnimNode_ControlRigBase::~FAnimNode_ControlRigBase((FAnimNode_ControlRigBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x230);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a235be0

void * __thiscall
FControlRigObjectBinding::_scalar_deleting_destructor_(FControlRigObjectBinding *this,uint param_1)

{
  ~FControlRigObjectBinding(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a235c20

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FControlRigOverrideValueErrorPipe::_scalar_deleting_destructor_
          (FControlRigOverrideValueErrorPipe *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->ReportFunction != 0) {
    plVar1 = *(longlong **)&(this->ReportFunction).field_0x28;
    plVar2 = (longlong *)&(this->ReportFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  FOutputDevice::~FOutputDevice((FOutputDevice *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a235c80

void * __thiscall
FControlRigReplayTracks::_scalar_deleting_destructor_(FControlRigReplayTracks *this,uint param_1)

{
  ~FControlRigReplayTracks(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x178);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a235cc0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
FControlRigSceneProxy::_scalar_deleting_destructor_(FControlRigSceneProxy *this,uint param_1)

{
  FPrimitiveSceneProxy::~FPrimitiveSceneProxy((FPrimitiveSceneProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x290);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a235d00

void * __thiscall
`FControlRigTestDataFrame::RestoreVariables'::__l2::FControlRigTestDataFrame_ErrorPipe::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  DestructItems<FString,int>(*(FString **)((longlong)this + 0x10),*(int *)((longlong)this + 0x18));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  FOutputDevice::~FOutputDevice(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a235d60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void * __thiscall FRigBaseElement::_scalar_deleting_destructor_(FRigBaseElement *this,uint param_1)

{
  ~FRigBaseElement(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a235da0

void * __thiscall
FRigControlElement::_scalar_deleting_destructor_(FRigControlElement *this,uint param_1)

{
  *(undefined ***)this = &___7FRigControlElement__6B_;
  FRigControlSettings::~FRigControlSettings(&this->Settings);
  FRigMultiParentElement::~FRigMultiParentElement((FRigMultiParentElement *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x590);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a235e00

void * __thiscall
FRigMultiParentElement::_scalar_deleting_destructor_(FRigMultiParentElement *this,uint param_1)

{
  ~FRigMultiParentElement(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x230);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a235e40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void * __thiscall
FRigTransformElement::_scalar_deleting_destructor_(FRigTransformElement *this,uint param_1)

{
  ForElementType<FRigTransformElement::FElementToDirty> FVar1;
  
  this->_padding_ = (longlong)&___7FRigTransformElement__6B_;
  FVar1 = (this->ElementsToDirty).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FRigTransformElement::FElementToDirty>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FRigBaseElement::~FRigBaseElement((FRigBaseElement *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a235ea0

void * __thiscall
FSampleTrackBase::_scalar_deleting_destructor_(FSampleTrackBase *this,uint param_1)

{
  ~FSampleTrackBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a235ee0

void * __thiscall
FSampleTrackHost::_scalar_deleting_destructor_(FSampleTrackHost *this,uint param_1)

{
  FSampleTrackContainer *this_00;
  
  this->_padding_ = (longlong)&___7FSampleTrackHost__6B_;
  this_00 = (this->Container).Ptr;
  if (this_00 != (FSampleTrackContainer *)0x0) {
    FSampleTrackContainer::~FSampleTrackContainer(this_00);
    ::operator_delete(this_00,0x98);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a235f50

void * __thiscall
IRigDependenciesProvider::_scalar_deleting_destructor_(IRigDependenciesProvider *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a235f80

void * __thiscall
IRigHierarchyProvider::_scalar_deleting_destructor_(IRigHierarchyProvider *this,uint param_1)

{
  *this = (IRigHierarchyProvider)&___7IRigHierarchyProvider__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a235fc0

void * __thiscall
IViewportSelectableObject::_scalar_deleting_destructor_
          (IViewportSelectableObject *this,uint param_1)

{
  *this = (IViewportSelectableObject)&___7IViewportSelectableObject__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a236000

void * __thiscall
UAnimNodeControlRigLibrary::_scalar_deleting_destructor_
          (UAnimNodeControlRigLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UAnimNodeControlRigLibrary__6B_;
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

// `scalar_deleting_destructor' @ 14a236060

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void * __thiscall UControlRig::_scalar_deleting_destructor_(UControlRig *this,uint param_1)

{
  ~UControlRig(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xc50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2360c0

void * __thiscall
UControlRigAnimInstance::_scalar_deleting_destructor_(UControlRigAnimInstance *this,uint param_1)

{
  *(undefined ***)this = &___7UControlRigAnimInstance__6B_;
  UAnimInstance::~UAnimInstance((UAnimInstance *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x430);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a236120

void * __thiscall
UControlRigBlueprintGeneratedClass::_scalar_deleting_destructor_
          (UControlRigBlueprintGeneratedClass *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UClass__;
  this->_padding_ = (longlong)&_vftable__for__IBlueprintPropertyGuidProvider__;
  this->_padding_ = (longlong)&___7UControlRigBlueprintGeneratedClass__6B_;
  pFVar1 = (this->CustomThumbnail).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FModuleReferenceData,int>
            ((FModuleReferenceData *)(this->ModuleReferenceData).AllocatorInstance.Data,
             (this->ModuleReferenceData).ArrayNum);
  pFVar1 = (this->ModuleReferenceData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FRigModuleSettings::~FRigModuleSettings(&this->RigModuleSettings);
  pFVar1 = (this->PreviewSkeletalMesh).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  URigVMBlueprintGeneratedClass::~URigVMBlueprintGeneratedClass
            ((URigVMBlueprintGeneratedClass *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x4a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2361f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void * __thiscall
UControlRigComponent::_scalar_deleting_destructor_(UControlRigComponent *this,uint param_1)

{
  ~UControlRigComponent(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x720);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a236250

void * __thiscall
UControlRigOverrideAsset::_scalar_deleting_destructor_(UControlRigOverrideAsset *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UControlRigOverrideAsset__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OverrideChangedDelegate).field_0x8,
             *(int *)&(this->OverrideChangedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OverrideChangedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OverrideChangedDelegate);
  FControlRigOverrideContainer::~FControlRigOverrideContainer(&this->Overrides);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a236300

void * __thiscall
UControlRigReplay::_scalar_deleting_destructor_(UControlRigReplay *this,uint param_1)

{
  ~UControlRigReplay(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,1000);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a236360

void * __thiscall
UControlRigShapeLibrary::_scalar_deleting_destructor_(UControlRigShapeLibrary *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  *(undefined ***)this = &___7UControlRigShapeLibrary__6B_;
  pFVar1 = (this->NameList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FControlRigShapeDefinition,int>
            ((FControlRigShapeDefinition *)(this->Shapes).AllocatorInstance.Data,
             (this->Shapes).ArrayNum);
  pFVar1 = (this->Shapes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->XRayMaterial).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->DefaultMaterial).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->DefaultShape).StaticMesh.SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a236430

void * __thiscall
UControlRigShapeLibraryLink::_scalar_deleting_destructor_
          (UControlRigShapeLibraryLink *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UControlRigShapeLibraryLink__6B_;
  pFVar1 = (this->ShapeNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->ShapeLibrary).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UNameSpacedUserData::~UNameSpacedUserData((UNameSpacedUserData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2364c0

void * __thiscall
UControlRigTestData::_scalar_deleting_destructor_(UControlRigTestData *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UControlRigTestData__6B_;
  pFVar1 = (this->EventQueue).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FControlRigTestDataFrame,int>
            ((FControlRigTestDataFrame *)(this->OutputFrames).AllocatorInstance.Data,
             (this->OutputFrames).ArrayNum);
  pFVar1 = (this->OutputFrames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FControlRigTestDataFrame,int>
            ((FControlRigTestDataFrame *)(this->InputFrames).AllocatorInstance.Data,
             (this->InputFrames).ArrayNum);
  pFVar1 = (this->InputFrames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FControlRigTestDataFrame::~FControlRigTestDataFrame(&this->Initial);
  UControlRigReplay::~UControlRigReplay((UControlRigReplay *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x528);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a236590

void * __thiscall
UControlRigValidationPass::_scalar_deleting_destructor_
          (UControlRigValidationPass *this,uint param_1)

{
  *(undefined ***)this = &___7UControlRigValidationPass__6B_;
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

// `scalar_deleting_destructor' @ 14a2365f0

void * __thiscall
UControlRigValidator::_scalar_deleting_destructor_(UControlRigValidator *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UControlRigValidator__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ValidationContext).ReportDelegate)
  ;
  pvVar1 = *(void **)&(this->ValidationContext).ReportDelegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ValidationContext).ReportDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ValidationContext);
  pvVar1 = *(void **)&(this->ValidationContext).ClearDelegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ValidationContext);
  pFVar2 = (this->Passes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0x78);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2366b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void * __thiscall UModularRig::_scalar_deleting_destructor_(UModularRig *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  void *pvVar5;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x290 = &_vftable__for__INodeMappingProviderInterface__;
  *(undefined ***)&this->field_0x298 = &_vftable__for__IRigHierarchyProvider__;
  *(undefined ***)&this->field_0x2a0 = &_vftable__for__IMeshDeformerProducer__;
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->LastExecutionQueueLock);
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
    ReleaseSRWLockExclusive((PSRWLOCK)&this->LastExecutionQueueLock);
  }
  pFVar1 = (this->LastExecutionQueue).Elements.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LastExecutedElements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->PreviousModuleRigs).field_0x48 = 0;
  pvVar5 = *(void **)&(this->PreviousModuleRigs).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UControlRig_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UControlRig_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UControlRig_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PreviousModuleRigs);
  pFVar1 = (this->ExecutionQueue).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FModularRigModel::~FModularRigModel(&this->ModularRigModel);
  pFVar1 = (this->SupportedEvents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RootModules).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FRigModuleInstance,int>
            ((FRigModuleInstance *)(this->Modules).AllocatorInstance.Data,(this->Modules).ArrayNum);
  pFVar1 = (this->Modules).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UControlRig::~UControlRig((UControlRig *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a236850

void * __thiscall
UModularRigController::_scalar_deleting_destructor_(UModularRigController *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UModularRigController__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ModifiedEvent).field_0x8,*(int *)&(this->ModifiedEvent).field_0x10);
  pvVar1 = *(void **)&(this->ModifiedEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ModifiedEvent);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a2368f0

void * __thiscall
UTransformableControlHandle::_scalar_deleting_destructor_
          (UTransformableControlHandle *this,uint param_1)

{
  longlong *plVar1;
  void *pvVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7UTransformableControlHandle__6B_;
  UnregisterDelegates(this);
  if (*(longlong *)&(this->EvaluationTask).PostEvaluationFunction != 0) {
    plVar1 = *(longlong **)&(this->EvaluationTask).PostEvaluationFunction.field_0x28;
    plVar3 = (longlong *)&(this->EvaluationTask).PostEvaluationFunction.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  pvVar2 = *(void **)&(this->ControlRig).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UTransformableHandle::~UTransformableHandle((UTransformableHandle *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x150);
  }
  return this;
}

// AreCompatible @ 14a241030

bool __cdecl RigVMTypeUtils::AreCompatible(FProperty *param_1,FProperty *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  
  bVar2 = (**(code **)(param_1->_padding_ + 0x1a0))();
  if (bVar2 == 0) {
    if ((param_2 != (FProperty *)0x0) && ((*(uint *)(param_2->_padding_ + 0x18) >> 8 & 1) != 0)) {
      return (bool)((byte)((ulonglong)*(undefined8 *)(param_1->_padding_ + 0x18) >> 0x20) & 1);
    }
    if (param_2 != (FProperty *)0x0) {
      if ((*(ulonglong *)(param_2->_padding_ + 0x18) & 0x100000000) != 0) {
        return (bool)((byte)((uint)*(undefined4 *)(param_1->_padding_ + 0x18) >> 8) & 1);
      }
      if ((*(byte *)(param_2->_padding_ + 0x18) & 0x40) != 0) {
        return (bool)(*(byte *)(param_1->_padding_ + 0x1e) & 1);
      }
      if ((*(ulonglong *)(param_2->_padding_ + 0x18) & 0x1000000000000) == 0) {
        if (param_2 == (FProperty *)0x0) {
          return false;
        }
        if ((*(uint *)(param_2->_padding_ + 0x18) >> 0x15 & 1) == 0) {
          return false;
        }
        if ((*(uint *)(param_1->_padding_ + 0x18) >> 0x15 & 1) == 0) {
          return false;
        }
        uVar1 = *(ulonglong *)(*(longlong *)(param_2[1]._padding_ + 8) + 0x18);
        if ((uVar1 >> 8 & 1) != 0) {
          return (bool)((byte)((ulonglong)
                               *(undefined8 *)(*(longlong *)(param_1[1]._padding_ + 8) + 0x18) >>
                              0x20) & 1);
        }
        if ((uVar1 & 0x100000000) != 0) {
          return (bool)((byte)((uint)*(undefined4 *)(*(longlong *)(param_1[1]._padding_ + 8) + 0x18)
                              >> 8) & 1);
        }
        if (param_2[1]._padding_ == 0) {
          return false;
        }
        if ((uVar1 & 0x40) != 0) {
          return (bool)(*(byte *)(*(longlong *)(param_1[1]._padding_ + 8) + 0x1e) & 1);
        }
        if ((uVar1 & 0x1000000000000) == 0) {
          return false;
        }
        bVar2 = *(byte *)(*(longlong *)(param_1[1]._padding_ + 8) + 0x18);
      }
      else {
        bVar2 = *(byte *)(param_1->_padding_ + 0x18);
      }
      bVar2 = bVar2 >> 6 & 1;
    }
  }
  return (bool)bVar2;
}

// CleanupCPPType @ 14a245c50

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

// EmptyLinkFunctionForGeneratedCodeAnimNode_ControlRig @ 14a251b30

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNode_ControlRig(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNode_ControlRigBase @ 14a251b40

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNode_ControlRigBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNode_ControlRig_ExternalSource @ 14a251b50

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNode_ControlRig_ExternalSource(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNode_ControlRig_Library @ 14a251b60

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNode_ControlRig_Library(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCRSimContainer @ 14a251b70

void __cdecl EmptyLinkFunctionForGeneratedCodeCRSimContainer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCRSimLinearSpring @ 14a251b80

void __cdecl EmptyLinkFunctionForGeneratedCodeCRSimLinearSpring(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCRSimPointConstraint @ 14a251b90

void __cdecl EmptyLinkFunctionForGeneratedCodeCRSimPointConstraint(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCRSimPointContainer @ 14a251ba0

void __cdecl EmptyLinkFunctionForGeneratedCodeCRSimPointContainer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCRSimPointForce @ 14a251bb0

void __cdecl EmptyLinkFunctionForGeneratedCodeCRSimPointForce(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCRSimSoftCollision @ 14a251bc0

void __cdecl EmptyLinkFunctionForGeneratedCodeCRSimSoftCollision(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeControlRig @ 14a251bd0

void __cdecl EmptyLinkFunctionForGeneratedCodeControlRig(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeControlRigAnimInstance @ 14a251be0

void __cdecl EmptyLinkFunctionForGeneratedCodeControlRigAnimInstance(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeControlRigAssetUserData @ 14a251bf0

void __cdecl EmptyLinkFunctionForGeneratedCodeControlRigAssetUserData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeControlRigBlueprintGeneratedClass @ 14a251c00

void __cdecl EmptyLinkFunctionForGeneratedCodeControlRigBlueprintGeneratedClass(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeControlRigComponent @ 14a251c10

void __cdecl EmptyLinkFunctionForGeneratedCodeControlRigComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeControlRigControlActor @ 14a251c20

void __cdecl EmptyLinkFunctionForGeneratedCodeControlRigControlActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeControlRigDefines @ 14a251c30

void __cdecl EmptyLinkFunctionForGeneratedCodeControlRigDefines(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeControlRigGizmoActor @ 14a251c40

void __cdecl EmptyLinkFunctionForGeneratedCodeControlRigGizmoActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeControlRigGizmoLibrary @ 14a251c50

void __cdecl EmptyLinkFunctionForGeneratedCodeControlRigGizmoLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeControlRigIOSettings @ 14a251c60

void __cdecl EmptyLinkFunctionForGeneratedCodeControlRigIOSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeControlRigOverride @ 14a251c70

void __cdecl EmptyLinkFunctionForGeneratedCodeControlRigOverride(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeControlRigReplay @ 14a251c80

void __cdecl EmptyLinkFunctionForGeneratedCodeControlRigReplay(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeControlRigTestData @ 14a251c90

void __cdecl EmptyLinkFunctionForGeneratedCodeControlRigTestData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeControlRigTransformableHandle @ 14a251ca0

void __cdecl EmptyLinkFunctionForGeneratedCodeControlRigTransformableHandle(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeControlRigValidationPass @ 14a251cb0

void __cdecl EmptyLinkFunctionForGeneratedCodeControlRigValidationPass(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeControlRig_init @ 14a251cc0

void __cdecl EmptyLinkFunctionForGeneratedCodeControlRig_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeModularRig @ 14a251cd0

void __cdecl EmptyLinkFunctionForGeneratedCodeModularRig(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeModularRigController @ 14a251ce0

void __cdecl EmptyLinkFunctionForGeneratedCodeModularRigController(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeModularRigModel @ 14a251cf0

void __cdecl EmptyLinkFunctionForGeneratedCodeModularRigModel(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneControlRigInstanceData @ 14a251d00

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneControlRigInstanceData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigUnit_DebugBase @ 14a251d10

void __cdecl EmptyLinkFunctionForGeneratedCodeRigUnit_DebugBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigUnit_HighlevelBase @ 14a251d20

void __cdecl EmptyLinkFunctionForGeneratedCodeRigUnit_HighlevelBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeStructReference @ 14a251d30

void __cdecl EmptyLinkFunctionForGeneratedCodeStructReference(void)

{
  return;
}

// FControlRigComponentDelegate_DelegateWrapper @ 14a25a000

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FControlRigComponentDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          UControlRigComponent *param_2)

{
  UControlRigComponent *local_res10 [3];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// GetCPPTypeFromProperty @ 14a25fb70

FString * __cdecl
RigVMTypeUtils::GetCPPTypeFromProperty(FString *__return_storage_ptr__,FProperty *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  int iVar4;
  wchar_t *local_18;
  undefined8 local_10;
  
  if (param_1 == (FProperty *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InProperty",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMTypeUtils.h"
                       ,0x1ca,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_18 = (wchar_t *)0x0;
  local_10 = 0;
  (**(code **)(param_1->_padding_ + 0x68))(param_1,__return_storage_ptr__,&local_18,0);
  iVar4 = (int)local_10 + -1;
  if ((int)local_10 == 0) {
    iVar4 = 0;
  }
  ::FString::AppendChars(__return_storage_ptr__,local_18,iVar4);
  CleanupCPPType(__return_storage_ptr__);
  if (local_18 != (wchar_t *)0x0) {
    FMemory::Free(local_18);
  }
  return __return_storage_ptr__;
}

// GetTypeHash @ 14a26c770

uint __cdecl GetTypeHash(FControlRigOverrideContainer *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  
  iVar1 = (param_1->Values).ArrayNum;
  pFVar5 = (param_1->Values).AllocatorInstance.Data;
  uVar2 = (uint)param_1->bUsesKeyForSubject;
  pFVar4 = pFVar5 + (longlong)iVar1 * 0x58;
  while( true ) {
    if ((param_1->Values).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FControlRigOverrideValue_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar5 == pFVar4) break;
    uVar3 = *(uint *)(pFVar5 + 0x28);
    uVar2 = uVar2 - uVar3 ^ uVar3 >> 0xd;
    uVar6 = (-0x61c88647 - uVar2) - uVar3 ^ uVar2 << 8;
    uVar3 = (uVar3 - uVar6) - uVar2 ^ uVar6 >> 0xd;
    uVar2 = (uVar2 - uVar3) - uVar6 ^ uVar3 >> 0xc;
    uVar6 = (uVar6 - uVar2) - uVar3 ^ uVar2 << 0x10;
    uVar3 = (uVar3 - uVar6) - uVar2 ^ uVar6 >> 5;
    uVar2 = (uVar2 - uVar3) - uVar6 ^ uVar3 >> 3;
    uVar6 = (uVar6 - uVar2) - uVar3 ^ uVar2 << 10;
    uVar2 = (uVar3 - uVar6) - uVar2 ^ uVar6 >> 0xf;
    pFVar5 = pFVar5 + 0x58;
  }
  return uVar2;
}

// GetTypeHash @ 14a26c860

uint __cdecl GetTypeHash(FControlRigOverrideValue *param_1)

{
  return param_1->Hash;
}

// GetTypeHash @ 14a26c870

uint __cdecl GetTypeHash(FFieldPath *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  
  pFVar6 = (param_1->Path).AllocatorInstance.Data;
  iVar2 = (param_1->Path).ArrayNum;
  uVar5 = 0;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->Path).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar6 == pFVar1) break;
    uVar3 = *(undefined8 *)pFVar6;
    uVar4 = GetTypeHash((FNameEntryId)(uint)uVar3);
    uVar4 = uVar4 + (int)((ulonglong)uVar3 >> 0x20);
    uVar5 = uVar5 - uVar4 ^ uVar4 >> 0xd;
    uVar7 = (-0x61c88647 - uVar4) - uVar5 ^ uVar5 << 8;
    uVar4 = (uVar4 - uVar7) - uVar5 ^ uVar7 >> 0xd;
    uVar5 = (uVar5 - uVar4) - uVar7 ^ uVar4 >> 0xc;
    uVar7 = (uVar7 - uVar5) - uVar4 ^ uVar5 << 0x10;
    uVar4 = (uVar4 - uVar7) - uVar5 ^ uVar7 >> 5;
    uVar5 = (uVar5 - uVar4) - uVar7 ^ uVar4 >> 3;
    uVar7 = (uVar7 - uVar5) - uVar4 ^ uVar5 << 10;
    uVar5 = (uVar4 - uVar7) - uVar5 ^ uVar7 >> 0xf;
    pFVar6 = pFVar6 + 8;
  }
  return uVar5;
}

// GetTypeHash @ 14a26c970

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

uint __cdecl GetTypeHash(FRigModuleExecutionElement *param_1)

{
  FName FVar1;
  FName FVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  FVar1 = param_1->EventName;
  uVar3 = GetTypeHash(FVar1.ComparisonIndex.Value);
  FVar2 = param_1->ModuleName;
  uVar4 = GetTypeHash(FVar2.ComparisonIndex.Value);
  uVar4 = uVar4 + FVar2.Number;
  uVar6 = (uVar3 + FVar1.Number) - uVar4 ^ uVar4 >> 0xd;
  uVar3 = (-0x61c88647 - uVar4) - uVar6 ^ uVar6 << 8;
  uVar7 = (uVar4 - uVar3) - uVar6 ^ uVar3 >> 0xd;
  uVar4 = (uVar6 - uVar7) - uVar3 ^ uVar7 >> 0xc;
  uVar3 = (uVar3 - uVar4) - uVar7 ^ uVar4 << 0x10;
  uVar6 = (uVar7 - uVar3) - uVar4 ^ uVar3 >> 5;
  uVar4 = (uVar4 - uVar6) - uVar3 ^ uVar6 >> 3;
  uVar3 = (uVar3 - uVar4) - uVar6 ^ uVar4 << 10;
  uVar3 = (uVar6 - uVar3) - uVar4 ^ uVar3 >> 0xf;
  iVar5 = uVar3 - param_1->bExecuted;
  uVar6 = 0x9e3779b9 - uVar3 ^ iVar5 * 0x100;
  uVar4 = (param_1->bExecuted - uVar6) - iVar5 ^ uVar6 >> 0xd;
  uVar3 = (iVar5 - uVar4) - uVar6 ^ uVar4 >> 0xc;
  uVar6 = (uVar6 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar3) - uVar6 ^ uVar6 >> 5;
  uVar3 = (uVar3 - uVar4) - uVar6 ^ uVar4 >> 3;
  uVar6 = (uVar6 - uVar3) - uVar4 ^ uVar3 << 10;
  return (uVar4 - uVar6) - uVar3 ^ uVar6 >> 0xf;
}

// GetTypeHash @ 14a26cac0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

uint __cdecl GetTypeHash(FRigModuleExecutionQueue *param_1)

{
  FRigModuleExecutionElement *pFVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  FRigModuleExecutionElement *pFVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  
  iVar2 = (param_1->Elements).ArrayNum;
  uVar4 = 0;
  pFVar5 = (FRigModuleExecutionElement *)(param_1->Elements).AllocatorInstance.Data;
  pFVar1 = pFVar5 + iVar2;
  while( true ) {
    if ((param_1->Elements).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FRigModuleExecutionElement_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    uVar3 = GetTypeHash(pFVar5);
    uVar4 = uVar4 - uVar3 ^ uVar3 >> 0xd;
    uVar6 = (-0x61c88647 - uVar4) - uVar3 ^ uVar4 << 8;
    uVar3 = (uVar3 - uVar6) - uVar4 ^ uVar6 >> 0xd;
    uVar4 = (uVar4 - uVar3) - uVar6 ^ uVar3 >> 0xc;
    uVar6 = (uVar6 - uVar4) - uVar3 ^ uVar4 << 0x10;
    uVar3 = (uVar3 - uVar6) - uVar4 ^ uVar6 >> 5;
    uVar4 = (uVar4 - uVar3) - uVar6 ^ uVar3 >> 3;
    uVar6 = (uVar6 - uVar4) - uVar3 ^ uVar4 << 10;
    uVar4 = (uVar3 - uVar6) - uVar4 ^ uVar6 >> 0xf;
    pFVar5 = pFVar5 + 1;
  }
  return uVar4;
}

// Z_Construct_UClass_AControlRigControlActor_NoRegister @ 14a2ad4e0

UClass * __cdecl Z_Construct_UClass_AControlRigControlActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AControlRigControlActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigControlActor",
               &Z_Registration_Info_UClass_AControlRigControlActor.InnerSingleton,
               AControlRigControlActor::StaticRegisterNativesAControlRigControlActor,0x370,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AControlRigControlActor>,
               InternalVTableHelperCtorCaller<AControlRigControlActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AControlRigControlActor.InnerSingleton;
}

// Z_Construct_UClass_AControlRigShapeActor_NoRegister @ 14a2ad5a0

UClass * __cdecl Z_Construct_UClass_AControlRigShapeActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AControlRigShapeActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigShapeActor",
               &Z_Registration_Info_UClass_AControlRigShapeActor.InnerSingleton,
               AControlRigShapeActor::StaticRegisterNativesAControlRigShapeActor,0x3b0,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AControlRigShapeActor>,
               InternalVTableHelperCtorCaller<AControlRigShapeActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AControlRigShapeActor.InnerSingleton;
}

// Z_Construct_UClass_UAnimNodeControlRigLibrary_NoRegister @ 14a2ad660

UClass * __cdecl Z_Construct_UClass_UAnimNodeControlRigLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNodeControlRigLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"AnimNodeControlRigLibrary",
               &Z_Registration_Info_UClass_UAnimNodeControlRigLibrary.InnerSingleton,
               UAnimNodeControlRigLibrary::StaticRegisterNativesUAnimNodeControlRigLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimNodeControlRigLibrary>,
               InternalVTableHelperCtorCaller<UAnimNodeControlRigLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNodeControlRigLibrary.InnerSingleton;
}

// Z_Construct_UClass_UControlRigAnimInstance_NoRegister @ 14a2ad720

UClass * __cdecl Z_Construct_UClass_UControlRigAnimInstance_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRigAnimInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigAnimInstance",
               &Z_Registration_Info_UClass_UControlRigAnimInstance.InnerSingleton,
               UControlRigAnimInstance::StaticRegisterNativesUControlRigAnimInstance,0x430,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UControlRigAnimInstance>,
               InternalVTableHelperCtorCaller<UControlRigAnimInstance>,local_res8,
               UAnimInstance::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRigAnimInstance.InnerSingleton;
}

// Z_Construct_UClass_UControlRigBlueprintGeneratedClass_NoRegister @ 14a2ad7e0

UClass * __cdecl Z_Construct_UClass_UControlRigBlueprintGeneratedClass_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRigBlueprintGeneratedClass.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UClass::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigBlueprintGeneratedClass",
               &Z_Registration_Info_UClass_UControlRigBlueprintGeneratedClass.InnerSingleton,
               UControlRigBlueprintGeneratedClass::
               StaticRegisterNativesUControlRigBlueprintGeneratedClass,0x4a0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UControlRigBlueprintGeneratedClass>,
               InternalVTableHelperCtorCaller<UControlRigBlueprintGeneratedClass>,local_res8,
               URigVMBlueprintGeneratedClass::StaticClass,UPackage::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRigBlueprintGeneratedClass.InnerSingleton;
}

// Z_Construct_UClass_UControlRigShapeLibraryLink_NoRegister @ 14a2ad8a0

UClass * __cdecl Z_Construct_UClass_UControlRigShapeLibraryLink_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRigShapeLibraryLink.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigShapeLibraryLink",
               &Z_Registration_Info_UClass_UControlRigShapeLibraryLink.InnerSingleton,
               UControlRigShapeLibraryLink::StaticRegisterNativesUControlRigShapeLibraryLink,0x140,8
               ,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UControlRigShapeLibraryLink>,
               InternalVTableHelperCtorCaller<UControlRigShapeLibraryLink>,local_res8,
               UNameSpacedUserData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRigShapeLibraryLink.InnerSingleton;
}

// Z_Construct_UClass_UControlRigTestData_NoRegister @ 14a2ad960

UClass * __cdecl Z_Construct_UClass_UControlRigTestData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRigTestData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigTestData",
               &Z_Registration_Info_UClass_UControlRigTestData.InnerSingleton,
               UControlRigTestData::StaticRegisterNativesUControlRigTestData,0x528,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",InternalConstructor<UControlRigTestData>,
               InternalVTableHelperCtorCaller<UControlRigTestData>,local_res8,
               UControlRigReplay::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRigTestData.InnerSingleton;
}

// Z_Construct_UClass_UControlRigValidator_NoRegister @ 14a2ada20

UClass * __cdecl Z_Construct_UClass_UControlRigValidator_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRigValidator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigValidator",
               &Z_Registration_Info_UClass_UControlRigValidator.InnerSingleton,
               UControlRigValidator::StaticRegisterNativesUControlRigValidator,0x78,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UControlRigValidator>,
               InternalVTableHelperCtorCaller<UControlRigValidator>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRigValidator.InnerSingleton;
}

// Z_Construct_UClass_UModularRigController_NoRegister @ 14a2adad0

UClass * __cdecl Z_Construct_UClass_UModularRigController_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModularRigController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ModularRigController",
               &Z_Registration_Info_UClass_UModularRigController.InnerSingleton,
               UModularRigController::StaticRegisterNativesUModularRigController,0x58,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UModularRigController>,
               InternalVTableHelperCtorCaller<UModularRigController>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModularRigController.InnerSingleton;
}

// Z_Construct_UClass_UModularRig_NoRegister @ 14a2adb80

UClass * __cdecl Z_Construct_UClass_UModularRig_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModularRig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ModularRig",
               &Z_Registration_Info_UClass_UModularRig.InnerSingleton,
               UModularRig::StaticRegisterNativesUModularRig,0xe20,0x10,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UModularRig>,InternalVTableHelperCtorCaller<UModularRig>,
               local_res8,UControlRig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModularRig.InnerSingleton;
}

// Z_Construct_UEnum_ControlRig_EControlRigVectorKind @ 14a2adc40

UEnum * __cdecl Z_Construct_UEnum_ControlRig_EControlRigVectorKind(void)

{
  if (Z_Registration_Info_UEnum_EControlRigVectorKind.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EControlRigVectorKind.InnerSingleton,
               &Z_Construct_UEnum_ControlRig_EControlRigVectorKind_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EControlRigVectorKind.InnerSingleton;
}

// Z_Construct_UEnum_ControlRig_EModularRigNotification @ 14a2adc80

UEnum * __cdecl Z_Construct_UEnum_ControlRig_EModularRigNotification(void)

{
  if (Z_Registration_Info_UEnum_EModularRigNotification.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EModularRigNotification.InnerSingleton,
               &Z_Construct_UEnum_ControlRig_EModularRigNotification_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EModularRigNotification.InnerSingleton;
}

// Z_Construct_UEnum_ControlRig_ETransformGetterType @ 14a2adcc0

UEnum * __cdecl Z_Construct_UEnum_ControlRig_ETransformGetterType(void)

{
  if (Z_Registration_Info_UEnum_ETransformGetterType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETransformGetterType.InnerSingleton,
               &Z_Construct_UEnum_ControlRig_ETransformGetterType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ETransformGetterType.InnerSingleton;
}

// Z_Construct_UEnum_ControlRig_ETransformSpaceMode @ 14a2add00

UEnum * __cdecl Z_Construct_UEnum_ControlRig_ETransformSpaceMode(void)

{
  if (Z_Registration_Info_UEnum_ETransformSpaceMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETransformSpaceMode.InnerSingleton,
               &Z_Construct_UEnum_ControlRig_ETransformSpaceMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ETransformSpaceMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FAnimNode_ControlRig @ 14a2add40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNode_ControlRig(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_ControlRig.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNode_ControlRig.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNode_ControlRig.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FAnimNode_ControlRig.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FAnimNode_ControlRig_ExternalSource @ 14a2addc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNode_ControlRig_ExternalSource(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_ControlRig_ExternalSource.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNode_ControlRig_ExternalSource.InnerSingleton
               ,&Z_Construct_UScriptStruct_FAnimNode_ControlRig_ExternalSource_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNode_ControlRig_ExternalSource.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNode_ControlRig_ExternalSource.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FCRSimPointContainer @ 14a2ade40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCRSimPointContainer(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCRSimPointContainer.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCRSimPointContainer.InnerSingleton,
               &Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCRSimPointContainer.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FCRSimPointContainer.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FControlRigAnimInstanceProxy @ 14a2adec0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FControlRigAnimInstanceProxy(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FControlRigAnimInstanceProxy.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FControlRigAnimInstanceProxy.InnerSingleton,
               &Z_Construct_UScriptStruct_FControlRigAnimInstanceProxy_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FControlRigAnimInstanceProxy.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FControlRigAnimInstanceProxy.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FControlRigOverrideValue @ 14a2adf40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FControlRigOverrideValue(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FControlRigOverrideValue.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FControlRigOverrideValue.InnerSingleton,
               &Z_Construct_UScriptStruct_FControlRigOverrideValue_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FControlRigOverrideValue.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FControlRigOverrideValue.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FControlRigValidationContext @ 14a2adfc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FControlRigValidationContext(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FControlRigValidationContext.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FControlRigValidationContext.InnerSingleton,
               &Z_Construct_UScriptStruct_FControlRigValidationContext_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FControlRigValidationContext.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FControlRigValidationContext.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FControlShapeActorCreationParam @ 14a2ae040

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FControlShapeActorCreationParam(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FControlShapeActorCreationParam.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FControlShapeActorCreationParam.InnerSingleton,
               &Z_Construct_UScriptStruct_FControlShapeActorCreationParam_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FControlShapeActorCreationParam.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FControlShapeActorCreationParam.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FModularRigModuleSettingsSetForClipboard @ 14a2ae0c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FModularRigModuleSettingsSetForClipboard(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FModularRigModuleSettingsSetForClipboard.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FModularRigModuleSettingsSetForClipboard.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FModularRigModuleSettingsSetForClipboard_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FModularRigModuleSettingsSetForClipboard.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FModularRigModuleSettingsSetForClipboard.InnerSingleton
    ;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData @ 14a2ae140

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneControlRigInstanceData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneControlRigInstanceData.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneControlRigInstanceData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneControlRigInstanceData.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FRigModuleExecutionQueue @ 14a2ae1c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigModuleExecutionQueue(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigModuleExecutionQueue.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigModuleExecutionQueue.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigModuleExecutionQueue_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigModuleExecutionQueue.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigModuleExecutionQueue.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FRigUnit_DebugBase @ 14a2ae240

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigUnit_DebugBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_DebugBase.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigUnit_DebugBase.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigUnit_DebugBase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigUnit_DebugBase.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigUnit_DebugBase.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FRigUnit_DebugBaseMutable @ 14a2ae2c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigUnit_DebugBaseMutable(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_DebugBaseMutable.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigUnit_DebugBaseMutable.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigUnit_DebugBaseMutable_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigUnit_DebugBaseMutable.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigUnit_DebugBaseMutable.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FRigUnit_HighlevelBase @ 14a2ae340

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigUnit_HighlevelBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HighlevelBase.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigUnit_HighlevelBase.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigUnit_HighlevelBase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HighlevelBase.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigUnit_HighlevelBase.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable @ 14a2ae3c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HighlevelBaseMutable.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigUnit_HighlevelBaseMutable.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HighlevelBaseMutable.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigUnit_HighlevelBaseMutable.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FStructReference @ 14a2ae440

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStructReference(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStructReference.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStructReference.InnerSingleton,
               &Z_Construct_UScriptStruct_FStructReference_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStructReference.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStructReference.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// IMPLEMENT_MODULE_ControlRig @ 14a2b80c0

void __cdecl IMPLEMENT_MODULE_ControlRig(void)

{
  return;
}

// GroundTruthStatus'' @ 15041d040

void __cdecl `dynamic_atexit_destructor_for_'UControlRigReplay::GroundTruthStatus__(void)

{
  if (UControlRigReplay::GroundTruthStatus.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015041d04f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*UControlRigReplay::GroundTruthStatus.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// GroundTruthStatusTooltip'' @ 15041d060

void __cdecl `dynamic_atexit_destructor_for_'UControlRigReplay::GroundTruthStatusTooltip__(void)

{
  if (UControlRigReplay::GroundTruthStatusTooltip.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015041d06f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*UControlRigReplay::GroundTruthStatusTooltip.TextData.Reference + 0x10))
              ();
    return;
  }
  return;
}

// LiveStatus'' @ 15041d080

void __cdecl `dynamic_atexit_destructor_for_'UControlRigReplay::LiveStatus__(void)

{
  if (UControlRigReplay::LiveStatus.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015041d08f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*UControlRigReplay::LiveStatus.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// LiveStatusTooltip'' @ 15041d0a0

void __cdecl `dynamic_atexit_destructor_for_'UControlRigReplay::LiveStatusTooltip__(void)

{
  if (UControlRigReplay::LiveStatusTooltip.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015041d0af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*UControlRigReplay::LiveStatusTooltip.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// PathSeparator'' @ 15041d0c0

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

// ReplayInputsStatus'' @ 15041d0e0

void __cdecl `dynamic_atexit_destructor_for_'UControlRigReplay::ReplayInputsStatus__(void)

{
  if (UControlRigReplay::ReplayInputsStatus.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015041d0ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*UControlRigReplay::ReplayInputsStatus.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// ReplayInputsStatusTooltip'' @ 15041d100

void __cdecl `dynamic_atexit_destructor_for_'UControlRigReplay::ReplayInputsStatusTooltip__(void)

{
  if (UControlRigReplay::ReplayInputsStatusTooltip.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015041d10f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*UControlRigReplay::ReplayInputsStatusTooltip.TextData.Reference + 0x10))
              ();
    return;
  }
  return;
}

// RootNodeID'' @ 15041d120

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

// `dynamic_atexit_destructor_for_'ActorSpawnParameters'' @ 15041d140

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
`FControlRigShapeHelper::GetDefaultSpawnParameter'::__l2::
_dynamic_atexit_destructor_for__ActorSpawnParameters__(void)

{
  longlong *plVar1;
  
  if (ActorSpawnParameters.CustomPreSpawnInitalization._0_8_ != 0) {
    plVar1 = (longlong *)&ActorSpawnParameters.CustomPreSpawnInitalization.field_0x10;
    if (ActorSpawnParameters.CustomPreSpawnInitalization._40_8_ != 0) {
      plVar1 = (longlong *)ActorSpawnParameters.CustomPreSpawnInitalization._40_8_;
    }
                    /* WARNING: Could not recover jumptable at 0x00015041d162. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimNodeControlRigDebug'' @ 15041d170

void __cdecl _dynamic_atexit_destructor_for__CVarAnimNodeControlRigDebug__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAnimNodeControlRigDebug);
  return;
}

// `dynamic_atexit_destructor_for_'CVarControlRigCreateFloatControlsForCurves'' @ 15041d190

void __cdecl _dynamic_atexit_destructor_for__CVarControlRigCreateFloatControlsForCurves__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarControlRigCreateFloatControlsForCurves);
  return;
}

// `dynamic_atexit_destructor_for_'CVarControlRigDisableExecutionAnimNode'' @ 15041d1b0

void __cdecl _dynamic_atexit_destructor_for__CVarControlRigDisableExecutionAnimNode__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarControlRigDisableExecutionAnimNode);
  return;
}

// `dynamic_atexit_destructor_for_'CVarControlRigDisableExecutionComponent'' @ 15041d1d0

void __cdecl _dynamic_atexit_destructor_for__CVarControlRigDisableExecutionComponent__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarControlRigDisableExecutionComponent);
  return;
}

// `dynamic_atexit_destructor_for_'CVarControlRigDisableTickDependencyCheck'' @ 15041d1f0

void __cdecl _dynamic_atexit_destructor_for__CVarControlRigDisableTickDependencyCheck__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarControlRigDisableTickDependencyCheck);
  return;
}

// `dynamic_atexit_destructor_for_'CVarControlRigEnableDrawInterfaceInGame'' @ 15041d210

void __cdecl _dynamic_atexit_destructor_for__CVarControlRigEnableDrawInterfaceInGame__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarControlRigEnableDrawInterfaceInGame);
  return;
}

// `dynamic_atexit_destructor_for_'CVarControlRigEnableOverrides'' @ 15041d230

void __cdecl _dynamic_atexit_destructor_for__CVarControlRigEnableOverrides__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarControlRigEnableOverrides);
  return;
}

// `dynamic_atexit_destructor_for_'ContainsInvalidCharactersMessage'' @ 15041d250

void __cdecl
`UModularRigController::IsNameAvailable'::__l8::
_dynamic_atexit_destructor_for__ContainsInvalidCharactersMessage__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ContainsInvalidCharactersMessage.Data.AllocatorInstance.Data;
  if (ContainsInvalidCharactersMessage.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0
     ) {
    return;
  }
  if (ContainsInvalidCharactersMessage.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
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

// `dynamic_atexit_destructor_for_'ControlRigProfilingLog'' @ 15041d270

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__ControlRigProfilingLog__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&ControlRigProfilingLog);
  return;
}

// `dynamic_atexit_destructor_for_'CtrlPrefix'' @ 15041d290

void __cdecl
`UControlRig::CreateRigControlsForCurveContainer'::__l5::
_dynamic_atexit_destructor_for__CtrlPrefix__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = CtrlPrefix.Data.AllocatorInstance.Data;
  if (CtrlPrefix.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (CtrlPrefix.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'DefaultRigUnitInstance'' @ 15041d2b0

void __cdecl
`UControlRig::GetRigUnitInstanceFromScope'::__l2::
_dynamic_atexit_destructor_for__DefaultRigUnitInstance__(void)

{
  FStructOnScope::~FStructOnScope(&DefaultRigUnitInstance);
  return;
}

// `dynamic_atexit_destructor_for_'EmptyElementKeys'' @ 15041d2d0

void __cdecl
`FControlRigReplayTracks::GetElementKeys'::__l2::_dynamic_atexit_destructor_for__EmptyElementKeys__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EmptyElementKeys.AllocatorInstance.Data;
  if (EmptyElementKeys.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EmptyElementKeys.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EmptyKeys'' @ 15041d2f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`FModularRigConnections::FindTargetsFromConnector'::__l2::
_dynamic_atexit_destructor_for__EmptyKeys__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _EmptyKeys;
  if (_EmptyKeys == (void *)0x0) {
    return;
  }
  if (_EmptyKeys != (void *)0x0) {
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

// `dynamic_atexit_destructor_for_'EmptyMetadataNames'' @ 15041d310

void __cdecl
`FControlRigReplayTracks::GetMetadataNames'::__l2::
_dynamic_atexit_destructor_for__EmptyMetadataNames__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EmptyMetadataNames.AllocatorInstance.Data;
  if (EmptyMetadataNames.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EmptyMetadataNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EmptyPath'' @ 15041d330

void __cdecl
`FControlRigOverrideValue::GetPath'::__l2::_dynamic_atexit_destructor_for__EmptyPath__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EmptyPath.Data.AllocatorInstance.Data;
  if (EmptyPath.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EmptyPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EmptyPath'' @ 15041d350

void __cdecl
`FControlRigOverrideValue::ToString'::__l2::_dynamic_atexit_destructor_for__EmptyPath__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EmptyPath.Data.AllocatorInstance.Data;
  if (EmptyPath.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EmptyPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EmptyPrefix'' @ 15041d370

void __cdecl
`UControlRig::GetRigModulePrefix'::__l2::_dynamic_atexit_destructor_for__EmptyPrefix__(void)

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

// `dynamic_atexit_destructor_for_'EmptyRedirector'' @ 15041d390

void __cdecl
`UControlRig::GetElementKeyRedirector'::__l2::_dynamic_atexit_destructor_for__EmptyRedirector__
          (void)

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

// `dynamic_atexit_destructor_for_'EmptyRigDependenciesProvider'' @ 15041d3f0

void __cdecl
`UControlRig::SwitchToParent'::__l16::_dynamic_atexit_destructor_for__EmptyRigDependenciesProvider__
          (void)

{
  return;
}

// `dynamic_atexit_destructor_for_'GControlRigStats'' @ 15041d400

void __cdecl _dynamic_atexit_destructor_for__GControlRigStats__(void)

{
  GControlRigStats.Counters._72_4_ = 0;
  if (GControlRigStats.Counters._64_8_ != 0) {
    FMemory::Free((void *)GControlRigStats.Counters._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GControlRigStats.Counters);
  if (GControlRigStats.Stack.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(GControlRigStats.Stack.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterControlRigObjectVersion'' @ 15041d450

void __cdecl _dynamic_atexit_destructor_for__GRegisterControlRigObjectVersion__(void)

{
  FCurrentCustomVersions::Unregister((FGuid *)&GRegisterControlRigObjectVersion);
  return;
}

// `dynamic_atexit_destructor_for_'LogControlRig'' @ 15041d470

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogControlRig__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogControlRig);
  return;
}

// `dynamic_atexit_destructor_for_'NameAlreadyInUse'' @ 15041d490

void __cdecl
`UModularRigController::IsNameAvailable'::__l2::_dynamic_atexit_destructor_for__NameAlreadyInUse__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = NameAlreadyInUse.Data.AllocatorInstance.Data;
  if (NameAlreadyInUse.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (NameAlreadyInUse.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'NotificationLock'' @ 15041d4b0

void __cdecl UE::Private::_dynamic_atexit_destructor_for__NotificationLock__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015041d4b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&NotificationLock);
  return;
}

// `dynamic_atexit_destructor_for_'NotifyingRigs'' @ 15041d4d0

void __cdecl UE::Private::_dynamic_atexit_destructor_for__NotifyingRigs__(void)

{
  NotifyingRigs.HashSize = 0;
  if (NotifyingRigs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)NotifyingRigs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<UControlRig_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UControlRig_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&NotifyingRigs.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'PropertyString'' @ 15041d510

void __cdecl
`FControlRigOverrideValue::GetPropertyHash'::__l8::_dynamic_atexit_destructor_for__PropertyString__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::PropertyString.Data.AllocatorInstance.Data;
  if (::PropertyString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::PropertyString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'PropertyString'' @ 15041d530

void __cdecl
`FControlRigOverrideValue::GetPropertyHash'::__l17::_dynamic_atexit_destructor_for__PropertyString__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::PropertyString.Data.AllocatorInstance.Data;
  if (::PropertyString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::PropertyString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'PropertyString'' @ 15041d550

void __cdecl
`FControlRigOverrideValue::GetPropertyHash'::__l20::_dynamic_atexit_destructor_for__PropertyString__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::PropertyString.Data.AllocatorInstance.Data;
  if (::PropertyString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::PropertyString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'PropertyString'' @ 15041d570

void __cdecl
`FControlRigOverrideValue::GetPropertyHash'::__l23::_dynamic_atexit_destructor_for__PropertyString__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::PropertyString.Data.AllocatorInstance.Data;
  if (::PropertyString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::PropertyString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'PropertyString'' @ 15041d590

void __cdecl
`FControlRigOverrideValue::GetPropertyHash'::__l26::_dynamic_atexit_destructor_for__PropertyString__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::PropertyString.Data.AllocatorInstance.Data;
  if (::PropertyString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::PropertyString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'PropertyString'' @ 15041d5b0

void __cdecl
`FControlRigOverrideValue::GetPropertyHash'::__l29::_dynamic_atexit_destructor_for__PropertyString__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::PropertyString.Data.AllocatorInstance.Data;
  if (::PropertyString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::PropertyString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'PropertyString'' @ 15041d5d0

void __cdecl
`FControlRigOverrideValue::GetPropertyHash'::__l32::_dynamic_atexit_destructor_for__PropertyString__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::PropertyString.Data.AllocatorInstance.Data;
  if (::PropertyString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::PropertyString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'PropertyString'' @ 15041d5f0

void __cdecl
`FControlRigOverrideValue::GetPropertyHash'::__l35::_dynamic_atexit_destructor_for__PropertyString__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::PropertyString.Data.AllocatorInstance.Data;
  if (::PropertyString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::PropertyString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'PropertyString'' @ 15041d610

void __cdecl
`FControlRigOverrideValue::GetPropertyHash'::__l38::_dynamic_atexit_destructor_for__PropertyString__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::PropertyString.Data.AllocatorInstance.Data;
  if (::PropertyString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::PropertyString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'PropertyString'' @ 15041d630

void __cdecl
`FControlRigOverrideValue::GetPropertyHash'::__l41::_dynamic_atexit_destructor_for__PropertyString__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::PropertyString.Data.AllocatorInstance.Data;
  if (::PropertyString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::PropertyString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'PropertyString'' @ 15041d650

void __cdecl
`FControlRigOverrideValue::GetPropertyHash'::__l44::_dynamic_atexit_destructor_for__PropertyString__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::PropertyString.Data.AllocatorInstance.Data;
  if (::PropertyString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::PropertyString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'PropertyString'' @ 15041d670

void __cdecl
`FControlRigOverrideValue::GetPropertyHash'::__l50::_dynamic_atexit_destructor_for__PropertyString__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::PropertyString.Data.AllocatorInstance.Data;
  if (::PropertyString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::PropertyString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'PropertyString'' @ 15041d690

void __cdecl
`FControlRigOverrideValue::GetPropertyHash'::__l56::_dynamic_atexit_destructor_for__PropertyString__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::PropertyString.Data.AllocatorInstance.Data;
  if (::PropertyString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::PropertyString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'PropertyString'' @ 15041d6b0

void __cdecl
`FControlRigOverrideValue::GetPropertyHash'::__l59::_dynamic_atexit_destructor_for__PropertyString__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::PropertyString.Data.AllocatorInstance.Data;
  if (::PropertyString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::PropertyString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'PropertyString'' @ 15041d6d0

void __cdecl
`FControlRigOverrideValue::GetPropertyHash'::__l65::_dynamic_atexit_destructor_for__PropertyString__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::PropertyString.Data.AllocatorInstance.Data;
  if (::PropertyString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::PropertyString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'PropertyString'' @ 15041d6f0

void __cdecl
`FControlRigOverrideValue::GetPropertyHash'::__l11::_dynamic_atexit_destructor_for__PropertyString__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::PropertyString.Data.AllocatorInstance.Data;
  if (::PropertyString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::PropertyString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'PropertyString'' @ 15041d710

void __cdecl
`FControlRigOverrideValue::GetPropertyHash'::__l14::_dynamic_atexit_destructor_for__PropertyString__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::PropertyString.Data.AllocatorInstance.Data;
  if (::PropertyString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::PropertyString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'SingletonTrackIndex'' @ 15041d730

void __cdecl
`FControlRigReplayTracks::GetElementKeys'::__l5::
_dynamic_atexit_destructor_for__SingletonTrackIndex__(void)

{
  ForElementType<int> FVar1;
  FLowLevelMemTracker *this;
  
  FVar1 = SingletonTrackIndex.Samples.AllocatorInstance.SecondaryData;
  if (SingletonTrackIndex.Samples.AllocatorInstance.SecondaryData == (ForElementType<int>)0x0) {
    return;
  }
  if (SingletonTrackIndex.Samples.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,(void *)FVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1);
  }
  return;
}

// `dynamic_atexit_destructor_for_'gPendingSkeletalMeshes'' @ 15041d750

void __cdecl _dynamic_atexit_destructor_for__gPendingSkeletalMeshes__(void)

{
  gPendingSkeletalMeshes._72_4_ = 0;
  if (gPendingSkeletalMeshes._64_8_ != 0) {
    FMemory::Free((void *)gPendingSkeletalMeshes._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UControlRigComponent,FWeakObjectPtr>,TArray<FSkeletalMeshToMap,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UControlRigComponent,FWeakObjectPtr>,TArray<FSkeletalMeshToMap,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UControlRigComponent,FWeakObjectPtr>,TArray<FSkeletalMeshToMap,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&gPendingSkeletalMeshes);
  return;
}

// `dynamic_atexit_destructor_for_'gPendingSkeletalMeshesLock'' @ 15041d790

void __cdecl _dynamic_atexit_destructor_for__gPendingSkeletalMeshesLock__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015041d797. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&gPendingSkeletalMeshesLock);
  return;
}

