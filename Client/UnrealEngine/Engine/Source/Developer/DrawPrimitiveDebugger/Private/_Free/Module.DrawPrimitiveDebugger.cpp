// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DrawPrimitiveDebugger
// Functions: 140

// DefaultUndeterminedString'' @ 1410aeee0

void __cdecl `dynamic_initializer_for_'SNumericEntryBox<int>::DefaultUndeterminedString__(void)

{
  FText::FromString(&SNumericEntryBox<int>::DefaultUndeterminedString,L"---");
  atexit(`dynamic_atexit_destructor_for_'SNumericEntryBox<int>::DefaultUndeterminedString__);
  return;
}

// `dynamic_initializer_for_'FalseTextValue'' @ 1410aef10

void __cdecl _dynamic_initializer_for__FalseTextValue__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&FalseTextValue,L"PRIMITIVE_DEBUGGER",L"DetailPanel_False",L"false");
  atexit(_dynamic_atexit_destructor_for__FalseTextValue__);
  return;
}

// `dynamic_initializer_for_'InvalidTextValue'' @ 1410aef50

void __cdecl _dynamic_initializer_for__InvalidTextValue__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&InvalidTextValue,L"PRIMITIVE_DEBUGGER",L"DetailPanel_InvalidValue",L"INVALID");
  atexit(_dynamic_atexit_destructor_for__InvalidTextValue__);
  return;
}

// `dynamic_initializer_for_'LogDrawPrimitiveDebugger'' @ 1410aef90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogDrawPrimitiveDebugger__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogDrawPrimitiveDebugger,L"LogDrawPrimitiveDebugger",All,All);
  atexit(_dynamic_atexit_destructor_for__LogDrawPrimitiveDebugger__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantDrawPrimitiveDebugger'' @ 1410aefd0

void __cdecl _dynamic_initializer_for__ModuleRegistrantDrawPrimitiveDebugger__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "DrawPrimitiveDebugger";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"DrawPrimitiveDebugger",0x15);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FDrawPrimitiveDebuggerModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'PlaceholderValue'' @ 1410af020

void __cdecl _dynamic_initializer_for__PlaceholderValue__(void)

{
  FText::FromString(&PlaceholderValue,L"-");
  atexit(_dynamic_atexit_destructor_for__PlaceholderValue__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PrimitiveDebuggerMakeCell'' @ 1410af050

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PrimitiveDebuggerMakeCell__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PrimitiveDebuggerMakeCell ==
      (FThreadSafeStaticStat<FStat_STAT_PrimitiveDebuggerMakeCell>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PrimitiveDebuggerMakeCell");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PrimitiveDebuggerMakeCell,*pFVar1,
               L"Primitive Debugger - UI Make Cell","STATGROUP_PrimitiveDebugger","STATCAT_Advanced"
               ,L"PrimitiveDebugger",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PrimitiveDebuggerMakeCellActor'' @ 1410af0e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PrimitiveDebuggerMakeCellActor__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PrimitiveDebuggerMakeCellActor ==
      (FThreadSafeStaticStat<FStat_STAT_PrimitiveDebuggerMakeCellActor>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PrimitiveDebuggerMakeCellActor");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PrimitiveDebuggerMakeCellActor,*pFVar1,
               L"Primitive Debugger - UI Make Cell: Actor","STATGROUP_PrimitiveDebugger",
               "STATCAT_Advanced",L"PrimitiveDebugger",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PrimitiveDebuggerMakeCellActorClass'' @ 1410af170

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PrimitiveDebuggerMakeCellActorClass__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PrimitiveDebuggerMakeCellActorClass ==
      (FThreadSafeStaticStat<FStat_STAT_PrimitiveDebuggerMakeCellActorClass>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PrimitiveDebuggerMakeCellActorClass");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PrimitiveDebuggerMakeCellActorClass,
               *pFVar1,L"Primitive Debugger - UI Make Cell: ActorClass",
               "STATGROUP_PrimitiveDebugger","STATCAT_Advanced",L"PrimitiveDebugger",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PrimitiveDebuggerMakeCellName'' @ 1410af200

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PrimitiveDebuggerMakeCellName__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PrimitiveDebuggerMakeCellName ==
      (FThreadSafeStaticStat<FStat_STAT_PrimitiveDebuggerMakeCellName>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PrimitiveDebuggerMakeCellName");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PrimitiveDebuggerMakeCellName,*pFVar1,
               L"Primitive Debugger - UI Make Cell: Name","STATGROUP_PrimitiveDebugger",
               "STATCAT_Advanced",L"PrimitiveDebugger",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PrimitiveDebuggerMakeCellPinned'' @ 1410af290

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PrimitiveDebuggerMakeCellPinned__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PrimitiveDebuggerMakeCellPinned ==
      (FThreadSafeStaticStat<FStat_STAT_PrimitiveDebuggerMakeCellPinned>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PrimitiveDebuggerMakeCellPinned");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PrimitiveDebuggerMakeCellPinned,*pFVar1,
               L"Primitive Debugger - UI Make Cell: Pinned","STATGROUP_PrimitiveDebugger",
               "STATCAT_Advanced",L"PrimitiveDebugger",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PrimitiveDebuggerMakeCellVisible'' @ 1410af320

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PrimitiveDebuggerMakeCellVisible__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PrimitiveDebuggerMakeCellVisible ==
      (FThreadSafeStaticStat<FStat_STAT_PrimitiveDebuggerMakeCellVisible>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PrimitiveDebuggerMakeCellVisible");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PrimitiveDebuggerMakeCellVisible,*pFVar1,
               L"Primitive Debugger - UI Make Cell: Visible","STATGROUP_PrimitiveDebugger",
               "STATCAT_Advanced",L"PrimitiveDebugger",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PrimitiveDebuggerRefresh'' @ 1410af3b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PrimitiveDebuggerRefresh__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PrimitiveDebuggerRefresh ==
      (FThreadSafeStaticStat<FStat_STAT_PrimitiveDebuggerRefresh>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PrimitiveDebuggerRefresh");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PrimitiveDebuggerRefresh,*pFVar1,
               L"Primitive Debugger - Process Primitives Refresh","STATGROUP_PrimitiveDebugger",
               "STATCAT_Advanced",L"PrimitiveDebugger",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PrimitiveDebuggerRefreshGather'' @ 1410af440

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PrimitiveDebuggerRefreshGather__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PrimitiveDebuggerRefreshGather ==
      (FThreadSafeStaticStat<FStat_STAT_PrimitiveDebuggerRefreshGather>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PrimitiveDebuggerRefreshGather");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PrimitiveDebuggerRefreshGather,*pFVar1,
               L"Primitive Debugger - Process Primitives Gather","STATGROUP_PrimitiveDebugger",
               "STATCAT_Advanced",L"PrimitiveDebugger",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PrimitiveDebuggerUpdateVis'' @ 1410af4d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PrimitiveDebuggerUpdateVis__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PrimitiveDebuggerUpdateVis ==
      (FThreadSafeStaticStat<FStat_STAT_PrimitiveDebuggerUpdateVis>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PrimitiveDebuggerUpdateVis");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PrimitiveDebuggerUpdateVis,*pFVar1,
               L"Primitive Debugger - Process Primitives Update Visible",
               "STATGROUP_PrimitiveDebugger","STATCAT_Advanced",L"PrimitiveDebugger",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'SummonDebuggerCmd'' @ 1410af560

void __cdecl _dynamic_initializer_for__SummonDebuggerCmd__(void)

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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_24>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&SummonDebuggerCmd,L"PrimitiveDebugger.Open",L"Summons the primitive debugger window.",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,0);
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
  atexit(_dynamic_atexit_destructor_for__SummonDebuggerCmd__);
  return;
}

// `dynamic_initializer_for_'TakeSnapshotCmd'' @ 1410af690

void __cdecl _dynamic_initializer_for__TakeSnapshotCmd__(void)

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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_25>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&TakeSnapshotCmd,L"PrimitiveDebugger.Snapshot",
             L"Captures the primitives rendered on the next frame for the primitive debugger.",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,0);
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
  atexit(_dynamic_atexit_destructor_for__TakeSnapshotCmd__);
  return;
}

// `dynamic_initializer_for_'TrueTextValue'' @ 1410af7c0

void __cdecl _dynamic_initializer_for__TrueTextValue__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&TrueTextValue,L"PRIMITIVE_DEBUGGER",L"DetailPanel_True",L"true");
  atexit(_dynamic_atexit_destructor_for__TrueTextValue__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Developer_DrawPrimitiveDebugger_Public_DrawPrimitiveDebuggerConfig_h__Script_DrawPrimitiveDebugger_359751877'' @ 1410af800

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Developer_DrawPrimitiveDebugger_Public_DrawPrimitiveDebuggerConfig_h__Script_DrawPrimitiveDebugger_359751877__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DrawPrimitiveDebugger",
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_DrawPrimitiveDebugger_Public_DrawPrimitiveDebuggerConfig_h__Script_DrawPrimitiveDebugger_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_DrawPrimitiveDebugger'' @ 1410af840

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_DrawPrimitiveDebugger__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xf09d2872;
  local_res8[0].DeclarationsHash = 0xcaf29804;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_DrawPrimitiveDebugger,L"/Script/DrawPrimitiveDebugger",
             &Z_Registration_Info_UPackage__Script_DrawPrimitiveDebugger,local_res8);
  return;
}

// Z_Construct_UPackage__Script_DrawPrimitiveDebugger @ 146cfa140

UPackage * __cdecl Z_Construct_UPackage__Script_DrawPrimitiveDebugger(void)

{
  if (Z_Registration_Info_UPackage__Script_DrawPrimitiveDebugger.OuterSingleton == (UPackage *)0x0)
  {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_DrawPrimitiveDebugger.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_DrawPrimitiveDebugger.OuterSingleton;
}

// Z_Construct_UClass_UDrawPrimitiveDebuggerUserSettings @ 146cfa240

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDrawPrimitiveDebuggerUserSettings(void)

{
  if (Z_Registration_Info_UClass_UDrawPrimitiveDebuggerUserSettings.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDrawPrimitiveDebuggerUserSettings.OuterSingleton,
               &Z_Construct_UClass_UDrawPrimitiveDebuggerUserSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDrawPrimitiveDebuggerUserSettings.OuterSingleton;
}

// `scalar_deleting_destructor' @ 146cfa280

void * __thiscall
IDrawPrimitiveDebugger::_scalar_deleting_destructor_(IDrawPrimitiveDebugger *this,uint param_1)

{
  *this = (IDrawPrimitiveDebugger)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cfa7a0

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
FDrawPrimitiveDebuggerModule::_scalar_deleting_destructor_
          (FDrawPrimitiveDebuggerModule *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DebuggerTab).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DebuggerWidget).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cfaa60

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_24>_>::
_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_24>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cfacf0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_25>_>::
_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_25>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Cast<USkinnedMeshComponent,UObject> @ 146cfc070

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

USkinnedMeshComponent * __cdecl Cast<USkinnedMeshComponent,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      return (USkinnedMeshComponent *)param_1;
    }
  }
  return (USkinnedMeshComponent *)0x0;
}

// Cast<USkinnedMeshComponent,UPrimitiveComponent> @ 146cfc0c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

USkinnedMeshComponent * __cdecl
Cast<USkinnedMeshComponent,UPrimitiveComponent>(UPrimitiveComponent *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UPrimitiveComponent *)0x0) {
    pUVar2 = Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      return (USkinnedMeshComponent *)param_1;
    }
  }
  return (USkinnedMeshComponent *)0x0;
}

// Cast<UStaticMeshComponent,UObject> @ 146cfc110

UStaticMeshComponent * __cdecl Cast<UStaticMeshComponent,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      return (UStaticMeshComponent *)param_1;
    }
  }
  return (UStaticMeshComponent *)0x0;
}

// ConstructItems<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,int> @ 146cfc160

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
ConstructItems<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,int>
          (void *param_1,TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FPrimitiveInfo **)(lVar2 + (longlong)param_2) = param_2->Object;
      pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)param_2) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,int> @ 146cfc7d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
DestructItems<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,int>
          (TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *param_1,int param_2)

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

// ForEachComponent_Internal<UPrimitiveComponent,1,1,`AActor::GetComponents<UPrimitiveComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 146cfd460

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
ForEachComponent_Internal<UPrimitiveComponent,1,1,_AActor::GetComponents<UPrimitiveComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
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
  UPrimitiveComponent *pUVar8;
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
  pUVar14 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
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
    if (bVar12) goto LAB_146cfd583;
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
LAB_146cfd583:
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
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180) goto LAB_146cfd61d;
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
LAB_146cfd61d:
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
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_146cfd720;
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
LAB_146cfd720:
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
        ForEachComponent_Internal<UPrimitiveComponent,1,1,_AActor::GetComponents<UPrimitiveComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_190,<Var10);
        FVar19 = (ForElementType<AActor_*>)((longlong)FVar19 + 8);
      }
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UPrimitiveComponent **)
              (*(longlong *)&pTVar11->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
    if (pUVar8 != (UPrimitiveComponent *)0x0) {
      `AActor::GetComponents<UPrimitiveComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>::
      operator()(&local_res18,pUVar8);
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar13->_padding_;
      if (((iVar5 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar13->_padding_)) && (local_1a0 = *(longlong *)&pUVar8->field_0x258, local_1a0 != 0))
      {
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

// ForEachComponent_Internal<UPrimitiveComponent,1,0,`AActor::GetComponents<UPrimitiveComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 146cfd990

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
ForEachComponent_Internal<UPrimitiveComponent,1,0,_AActor::GetComponents<UPrimitiveComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  UPrimitiveComponent *pUVar4;
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
  TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *local_res18;
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
  pUVar10 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
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
    if (bVar6) goto LAB_146cfda96;
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
LAB_146cfda96:
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_146cfdb1d;
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
LAB_146cfdb1d:
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
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_146cfdc21;
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
LAB_146cfdc21:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pUVar4 = *(UPrimitiveComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar4 != (UPrimitiveComponent *)0x0) {
      `AActor::GetComponents<UPrimitiveComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>::
      operator()(&local_res18,pUVar4);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<UPrimitiveComponent,0,1,`AActor::GetComponents<UPrimitiveComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 146cfdca0

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
ForEachComponent_Internal<UPrimitiveComponent,0,1,_AActor::GetComponents<UPrimitiveComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  UPrimitiveComponent *pUVar8;
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
  pUVar14 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
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
    if (bVar13) goto LAB_146cfdd93;
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
LAB_146cfdd93:
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
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_178) goto LAB_146cfde40;
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
LAB_146cfde40:
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
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar17) goto LAB_146cfdf50;
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
LAB_146cfdf50:
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
        ForEachComponent_Internal<UPrimitiveComponent,0,1,_AActor::GetComponents<UPrimitiveComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_188,<Var10);
        FVar18 = (ForElementType<AActor_*>)((longlong)FVar18 + 8);
      }
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_100.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UPrimitiveComponent **)
              (*(longlong *)&pTVar12->Elements + (longlong)TStack_148.CurrentBitIndex * 0x10);
    if (pUVar8 != (UPrimitiveComponent *)0x0) {
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) +
           (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
        `AActor::GetComponents<UPrimitiveComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>::
        operator()(&local_res18,pUVar8);
      }
      pUVar14 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar14->_padding_;
      if (((iVar4 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar14->_padding_)) && (local_1a0 = *(longlong *)&pUVar8->field_0x258, local_1a0 != 0))
      {
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

// ForEachComponent_Internal<UPrimitiveComponent,0,0,`AActor::GetComponents<UPrimitiveComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 146cfe1e0

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
ForEachComponent_Internal<UPrimitiveComponent,0,0,_AActor::GetComponents<UPrimitiveComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  UPrimitiveComponent *pUVar6;
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
  TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *local_res18;
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
  pUVar12 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
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
    if (bVar9) goto LAB_146cfe2be;
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
LAB_146cfe2be:
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
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar14) goto LAB_146cfe34f;
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
LAB_146cfe34f:
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
      goto LAB_146cfe460;
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
LAB_146cfe460:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    pUVar6 = *(UPrimitiveComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar6 != (UPrimitiveComponent *)0x0) {
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) +
           (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
        `AActor::GetComponents<UPrimitiveComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>::
        operator()(&local_res18,pUVar6);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachPrimitive<`SDrawPrimitiveDebugger::Refresh'::__l3::<lambda_1>_> @ 146cfe500

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FViewDebugInfo::ForEachPrimitive<_SDrawPrimitiveDebugger::Refresh_::__l3::<lambda_1>_>
          (FViewDebugInfo *this,<lambda_1> *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  code *pcVar3;
  <lambda_1> *this_00;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar13;
  uint uVar14;
  uint *puVar16;
  ulonglong uVar17;
  undefined1 local_res8 [8];
  <lambda_1> *local_res10;
  int local_res18;
  FPlatformRWLock *local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  ulonglong uVar12;
  ulonglong uVar15;
  
  local_res20 = &this->Lock;
  uVar17 = 0;
  local_res10 = param_1;
  AcquireSRWLockShared((PSRWLOCK)local_res20);
  uVar2 = *(uint *)&(this->Primitives).field_0x28;
  puVar1 = &(this->Primitives).field_0x10;
  uVar11 = 0;
  uVar5 = 1;
  uVar14 = 0;
  uVar6 = uVar11;
  if (uVar2 != 0) {
    puVar16 = *(uint **)&(this->Primitives).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar6 = *puVar16;
    uVar12 = uVar17;
    uVar15 = uVar17;
    uVar14 = 0;
    uVar11 = 0;
    while (uVar6 == 0) {
      iVar9 = (int)uVar12;
      uVar14 = (int)uVar15 + 0x20;
      uVar15 = (ulonglong)uVar14;
      uVar11 = iVar9 + 1;
      uVar12 = (ulonglong)uVar11;
      uVar6 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar11)
      goto LAB_146cfe5bd;
      uVar6 = puVar16[(longlong)iVar9 + 1];
    }
    uVar5 = -uVar6 & uVar6;
    uVar12 = (ulonglong)uVar5 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    uVar6 = (uVar14 - 1) + local_res18;
    if ((int)uVar2 < (int)uVar6) {
      uVar6 = uVar2;
    }
  }
LAB_146cfe5bd:
  uVar7 = *(uint *)&(this->Primitives).field_0x28;
  uVar10 = uVar7 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar5,uVar11);
  TStack_70.CurrentBitIndex = uVar6;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)uVar7 >> 5;
  TStack_70._28_4_ = uVar6;
  TStack_70.BaseBitIndex = uVar14;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(this->Primitives).field_0x8 -
                       *(int *)&(this->Primitives).field_0x34);
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar7 < 0) || ((int)uVar2 < (int)uVar7)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = local_res10;
  uVar2 = *(uint *)&(this->Primitives).field_0x28;
  if (uVar7 != uVar2) {
    puVar13 = *(undefined1 **)&(this->Primitives).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar7 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar9 * 4);
    while (uVar14 == 0) {
      lVar8 = (longlong)iVar9;
      uVar10 = uVar10 + 0x20;
      iVar9 = iVar9 + 1;
      uVar7 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_146cfe6c0;
      uVar14 = *(uint *)(puVar13 + lVar8 * 4 + 4);
    }
    uVar12 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar7 = (int)lVar8 + -1 + uVar10;
    if ((int)uVar2 < (int)uVar7) {
      uVar7 = uVar2;
    }
  }
LAB_146cfe6c0:
  while( true ) {
    if (*(int *)&(this->Primitives).field_0x8 - *(int *)&(this->Primitives).field_0x34 !=
        (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TTuple<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_70.CurrentBitIndex == uVar7) &&
       (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar8 = *(longlong *)&this->Primitives + (longlong)TStack_70.CurrentBitIndex * 0x78;
    if (*(ulonglong *)(lVar8 + 0x28) != uVar17) {
      `SDrawPrimitiveDebugger::Refresh'::__l3::<lambda_1>::operator()
                (this_00,(FPrimitiveInfo *)(lVar8 + 8));
      uVar17 = *(ulonglong *)(lVar8 + 0x28);
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  ReleaseSRWLockShared((PSRWLOCK)local_res20);
  return;
}

// GetTypeHash<FViewDebugInfo::FPrimitiveInfo_const_,1> @ 146cfea70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uint __cdecl
GetTypeHash<FViewDebugInfo::FPrimitiveInfo_const_,1>
          (TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// HeapSortInternal<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,`SDrawPrimitiveDebugger::SortRows'::__l2::<lambda_1>_>_> @ 146cfeaf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
AlgoImpl::
HeapSortInternal<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,_SDrawPrimitiveDebugger::SortRows_::__l2::<lambda_1>_>_>
          (TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *param_1,int param_2,
          FIdentityFunctor param_3,
          TDereferenceWrapper<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,_public:_void___cdecl_SDrawPrimitiveDebugger::SortRows(void)_::_2_::<lambda_1>_>
          param_4)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  FPrimitiveInfo *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *pTVar11;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *pTVar12;
  longlong lVar13;
  int iVar14;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *pTVar15;
  <lambda_1> *local_res20;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> local_68;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> local_58;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> local_48;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> local_38;
  
  local_res20 = param_4.Predicate;
  if (param_2 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,_SDrawPrimitiveDebugger::SortRows_::__l2::<lambda_1>_>_>_>
            (param_1,param_2,param_3,
             (TDereferenceWrapper<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,_public:_void___cdecl_SDrawPrimitiveDebugger::SortRows(void)_::_2_::<lambda_1>_>
              *)&local_res20);
  iVar14 = param_2 + -1;
  lVar13 = (longlong)iVar14;
  if (0 < iVar14) {
    pTVar15 = param_1 + lVar13;
    do {
      pTVar5 = (pTVar15->SharedReferenceCount).ReferenceController;
      pFVar6 = param_1->Object;
      pTVar7 = (param_1->SharedReferenceCount).ReferenceController;
      param_1->Object = pTVar15->Object;
      (param_1->SharedReferenceCount).ReferenceController = pTVar5;
      pTVar15->Object = pFVar6;
      (pTVar15->SharedReferenceCount).ReferenceController = pTVar7;
      iVar10 = 0;
      if (1 < iVar14) {
        do {
          iVar4 = iVar10 * 2;
          iVar9 = iVar4 + 1;
          if (iVar4 + 2 < iVar14) {
            lVar1 = (longlong)iVar4 + 1;
            lVar2 = (longlong)iVar4 + 2;
            local_68.Object = param_1[lVar1].Object;
            local_68.SharedReferenceCount.ReferenceController =
                 param_1[lVar1].SharedReferenceCount.ReferenceController;
            if (local_68.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                   1);
              UNLOCK();
            }
            local_58.Object = param_1[lVar2].Object;
            local_58.SharedReferenceCount.ReferenceController =
                 param_1[lVar2].SharedReferenceCount.ReferenceController;
            if (local_58.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                   1);
              UNLOCK();
            }
            bVar8 = `SDrawPrimitiveDebugger::SortRows'::__l2::<lambda_1>::operator()
                              (local_res20,&local_58,&local_68);
            if (bVar8) {
              iVar9 = iVar4;
            }
            iVar9 = iVar9 + 1;
          }
          pTVar12 = param_1 + iVar10;
          pTVar11 = param_1 + iVar9;
          local_48.Object = pTVar11->Object;
          local_48.SharedReferenceCount.ReferenceController =
               (pTVar11->SharedReferenceCount).ReferenceController;
          if (local_48.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          local_38.Object = pTVar12->Object;
          local_38.SharedReferenceCount.ReferenceController =
               (pTVar12->SharedReferenceCount).ReferenceController;
          if (local_38.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          bVar8 = `SDrawPrimitiveDebugger::SortRows'::__l2::<lambda_1>::operator()
                            (local_res20,&local_38,&local_48);
          if (!bVar8) break;
          pTVar5 = (pTVar11->SharedReferenceCount).ReferenceController;
          pFVar6 = pTVar12->Object;
          pTVar7 = (pTVar12->SharedReferenceCount).ReferenceController;
          pTVar12->Object = pTVar11->Object;
          (pTVar12->SharedReferenceCount).ReferenceController = pTVar5;
          pTVar11->Object = pFVar6;
          (pTVar11->SharedReferenceCount).ReferenceController = pTVar7;
          iVar10 = iVar9;
        } while (iVar9 * 2 + 1 < iVar14);
      }
      iVar14 = iVar14 + -1;
      lVar13 = lVar13 + -1;
      pTVar15 = pTVar15 + -1;
    } while (0 < lVar13);
  }
  return;
}

// HeapifyInternal<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,`SDrawPrimitiveDebugger::SortRows'::__l2::<lambda_1>_>_>_> @ 146cfecf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
AlgoImpl::
HeapifyInternal<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,_SDrawPrimitiveDebugger::SortRows_::__l2::<lambda_1>_>_>_>
          (TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *param_1,int param_2,
          FIdentityFunctor param_3,
          TReversePredicate<TDereferenceWrapper<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,_public:_void___cdecl_SDrawPrimitiveDebugger::SortRows(void)_::_2_::<lambda_1>_>_>
          param_4)

{
  longlong lVar1;
  longlong lVar2;
  <lambda_1> *p<Var3;
  code *pcVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  FPrimitiveInfo *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *pTVar12;
  int iVar13;
  int iVar14;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *pTVar15;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> local_68;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> local_58;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> local_48;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> local_38;
  
  if (param_2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar10 = (param_2 + -2) / 2;
  iVar11 = iVar10 * 2 + 1;
  iVar5 = iVar11;
  iVar14 = iVar10;
  do {
    while (param_2 <= iVar11) {
LAB_146cfee75:
      if (iVar14 == 0) {
        return;
      }
      iVar10 = iVar14 + -1;
      iVar11 = iVar5 + -2;
      iVar5 = iVar11;
      iVar14 = iVar10;
    }
    iVar11 = iVar10 * 2;
    iVar13 = iVar11 + 1;
    if (iVar11 + 2 < param_2) {
      p<Var3 = (param_4.Predicate)->Predicate;
      lVar1 = (longlong)iVar11 + 1;
      lVar2 = (longlong)iVar11 + 2;
      local_68.Object = param_1[lVar1].Object;
      local_68.SharedReferenceCount.ReferenceController =
           param_1[lVar1].SharedReferenceCount.ReferenceController;
      if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_58.Object = param_1[lVar2].Object;
      local_58.SharedReferenceCount.ReferenceController =
           param_1[lVar2].SharedReferenceCount.ReferenceController;
      if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar9 = `SDrawPrimitiveDebugger::SortRows'::__l2::<lambda_1>::operator()
                        (p<Var3,&local_58,&local_68);
      if (bVar9) {
        iVar13 = iVar11;
      }
      iVar13 = iVar13 + 1;
    }
    p<Var3 = (param_4.Predicate)->Predicate;
    pTVar12 = param_1 + iVar10;
    pTVar15 = param_1 + iVar13;
    local_48.Object = pTVar15->Object;
    local_48.SharedReferenceCount.ReferenceController =
         (pTVar15->SharedReferenceCount).ReferenceController;
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38.Object = pTVar12->Object;
    local_38.SharedReferenceCount.ReferenceController =
         (pTVar12->SharedReferenceCount).ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar9 = `SDrawPrimitiveDebugger::SortRows'::__l2::<lambda_1>::operator()
                      (p<Var3,&local_38,&local_48);
    if (!bVar9) goto LAB_146cfee75;
    pTVar6 = (pTVar15->SharedReferenceCount).ReferenceController;
    iVar11 = iVar13 * 2 + 1;
    pFVar7 = pTVar12->Object;
    pTVar8 = (pTVar12->SharedReferenceCount).ReferenceController;
    pTVar12->Object = pTVar15->Object;
    (pTVar12->SharedReferenceCount).ReferenceController = pTVar6;
    pTVar15->Object = pFVar7;
    (pTVar15->SharedReferenceCount).ReferenceController = pTVar8;
    iVar10 = iVar13;
  } while( true );
}

// InternalConstructor<UDrawPrimitiveDebuggerUserSettings> @ 146cfef40

void __cdecl InternalConstructor<UDrawPrimitiveDebuggerUserSettings>(FObjectInitializer *param_1)

{
  UDeveloperSettings *this;
  
  this = (UDeveloperSettings *)param_1->Obj;
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 10;
    this->_padding_ = (longlong)&___7UDrawPrimitiveDebuggerUserSettings__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UDrawPrimitiveDebuggerUserSettings> @ 146cfef80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDrawPrimitiveDebuggerUserSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDeveloperSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDrawPrimitiveDebuggerUserSettings::GetPrivateStaticClass();
  this = (UDeveloperSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 10;
    this->_padding_ = (longlong)&___7UDrawPrimitiveDebuggerUserSettings__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,`SDrawPrimitiveDebugger::SortRows'::__l2::<lambda_1>_>_> @ 146cff040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
AlgoImpl::
IntroSortInternal<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,_SDrawPrimitiveDebugger::SortRows_::__l2::<lambda_1>_>_>
          (TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *param_1,int param_2,
          FIdentityFunctor param_3,
          TDereferenceWrapper<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,_public:_void___cdecl_SDrawPrimitiveDebugger::SortRows(void)_::_2_::<lambda_1>_>
          param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  FPrimitiveInfo *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  int iVar5;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *pTVar6;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *pTVar7;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> **ppTVar8;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *pTVar9;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *pTVar10;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *pTVar11;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *pTVar12;
  float fVar13;
  undefined1 auStack_3f8 [32];
  int local_3d8;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> **local_3d0;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> local_3c8;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> local_3b8;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> local_3a8;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> local_398;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> local_388;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> local_378 [2];
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *local_358;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *local_348;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_3f8;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar13 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar13;
    memset(local_330,0,0x2e8);
    ppTVar8 = &local_348;
    do {
      pTVar9 = ppTVar8[1];
      pTVar12 = *ppTVar8;
      local_358 = ppTVar8[2];
      iVar5 = (int)((longlong)pTVar9 - (longlong)pTVar12 >> 4) + 1;
      local_3d8 = (int)local_358;
      pTVar11 = pTVar12;
      local_3d0 = ppTVar8;
      if ((int)local_358 != 0) {
LAB_146cff101:
        if (8 < iVar5) {
          pTVar1 = (pTVar11->SharedReferenceCount).ReferenceController;
          pTVar6 = pTVar9 + 1;
          pFVar2 = pTVar11[iVar5 / 2].Object;
          pTVar3 = pTVar11[iVar5 / 2].SharedReferenceCount.ReferenceController;
          pTVar11[iVar5 / 2].Object = pTVar11->Object;
          pTVar11[iVar5 / 2].SharedReferenceCount.ReferenceController = pTVar1;
          pTVar11->Object = pFVar2;
          (pTVar11->SharedReferenceCount).ReferenceController = pTVar3;
          pTVar12 = pTVar11;
LAB_146cff130:
          pTVar10 = pTVar12;
          pTVar12 = pTVar10 + 1;
          if (pTVar12 <= pTVar9) goto code_r0x000146cff139;
          goto LAB_146cff183;
        }
        for (; pTVar6 = pTVar11, pTVar12 = pTVar11, pTVar11 < pTVar9; pTVar9 = pTVar9 + -1) {
          while (pTVar10 = pTVar6, pTVar12 = pTVar12 + 1, pTVar12 <= pTVar9) {
            local_388.Object = pTVar12->Object;
            local_388.SharedReferenceCount.ReferenceController =
                 (pTVar12->SharedReferenceCount).ReferenceController;
            if (local_388.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_388.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_388.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            local_378[0].Object = pTVar10->Object;
            local_378[0].SharedReferenceCount.ReferenceController =
                 (pTVar10->SharedReferenceCount).ReferenceController;
            if (local_378[0].SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_378[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_378[0].SharedReferenceCount.ReferenceController)->
                         SharedReferenceCount + 1);
              UNLOCK();
            }
            bVar4 = `SDrawPrimitiveDebugger::SortRows'::__l2::<lambda_1>::operator()
                              (param_4.Predicate,local_378,&local_388);
            pTVar6 = pTVar12;
            if (!bVar4) {
              pTVar6 = pTVar10;
            }
          }
          pFVar2 = pTVar10->Object;
          pTVar1 = (pTVar10->SharedReferenceCount).ReferenceController;
          pTVar3 = (pTVar9->SharedReferenceCount).ReferenceController;
          pTVar10->Object = pTVar9->Object;
          (pTVar10->SharedReferenceCount).ReferenceController = pTVar3;
          pTVar9->Object = pFVar2;
          (pTVar9->SharedReferenceCount).ReferenceController = pTVar1;
          ppTVar8 = local_3d0;
        }
        goto LAB_146cff29c;
      }
LAB_146cff28b:
      HeapSortInternal<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,_SDrawPrimitiveDebugger::SortRows_::__l2::<lambda_1>_>_>
                (pTVar12,iVar5,param_3,param_4);
LAB_146cff29c:
      ppTVar8 = ppTVar8 + -3;
    } while (&local_348 <= ppTVar8);
  }
  return;
code_r0x000146cff139:
  local_3c8.Object = pTVar12->Object;
  local_3c8.SharedReferenceCount.ReferenceController =
       pTVar10[1].SharedReferenceCount.ReferenceController;
  if (local_3c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3b8.Object = pTVar11->Object;
  local_3b8.SharedReferenceCount.ReferenceController =
       (pTVar11->SharedReferenceCount).ReferenceController;
  if (local_3b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar4 = `SDrawPrimitiveDebugger::SortRows'::__l2::<lambda_1>::operator()
                    (param_4.Predicate,&local_3b8,&local_3c8);
  if (!bVar4) goto LAB_146cff130;
LAB_146cff183:
  do {
    pTVar7 = pTVar6;
    pTVar6 = pTVar7 + -1;
    if (pTVar6 <= pTVar11) break;
    local_3a8.Object = pTVar11->Object;
    local_3a8.SharedReferenceCount.ReferenceController =
         (pTVar11->SharedReferenceCount).ReferenceController;
    if (local_3a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_3a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_3a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_398.Object = pTVar6->Object;
    local_398.SharedReferenceCount.ReferenceController =
         pTVar7[-1].SharedReferenceCount.ReferenceController;
    if (local_398.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_398.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_398.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar4 = `SDrawPrimitiveDebugger::SortRows'::__l2::<lambda_1>::operator()
                      (param_4.Predicate,&local_398,&local_3a8);
  } while (!bVar4);
  pTVar1 = pTVar7[-1].SharedReferenceCount.ReferenceController;
  if (pTVar12 <= pTVar6) {
    pFVar2 = pTVar12->Object;
    pTVar3 = pTVar10[1].SharedReferenceCount.ReferenceController;
    pTVar12->Object = pTVar6->Object;
    pTVar10[1].SharedReferenceCount.ReferenceController = pTVar1;
    pTVar6->Object = pFVar2;
    pTVar7[-1].SharedReferenceCount.ReferenceController = pTVar3;
    goto LAB_146cff130;
  }
  pFVar2 = pTVar11->Object;
  pTVar3 = (pTVar11->SharedReferenceCount).ReferenceController;
  local_3d8 = local_3d8 + -1;
  pTVar11->Object = pTVar6->Object;
  (pTVar11->SharedReferenceCount).ReferenceController = pTVar1;
  pTVar6->Object = pFVar2;
  pTVar7[-1].SharedReferenceCount.ReferenceController = pTVar3;
  if ((longlong)((longlong)pTVar6 + (-0x10 - (longlong)pTVar11) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pTVar9 - (longlong)pTVar12 & 0xfffffffffffffff0U)) {
    if (pTVar12 < pTVar9) {
      *ppTVar8 = pTVar12;
      ppTVar8[1] = pTVar9;
      *(int *)(ppTVar8 + 2) = local_3d8;
      ppTVar8 = ppTVar8 + 3;
      local_3d0 = ppTVar8;
    }
    if (pTVar6 <= pTVar11 + 1) goto LAB_146cff29c;
    pTVar9 = pTVar7 + -2;
    pTVar12 = pTVar11;
  }
  else {
    if (pTVar11 + 1 < pTVar6) {
      *ppTVar8 = pTVar11;
      ppTVar8[1] = pTVar7 + -2;
      *(int *)(ppTVar8 + 2) = local_3d8;
      ppTVar8 = ppTVar8 + 3;
      local_3d0 = ppTVar8;
    }
    if (pTVar9 <= pTVar12) goto LAB_146cff29c;
  }
  iVar5 = (int)((longlong)pTVar9 - (longlong)pTVar12 >> 4) + 1;
  pTVar11 = pTVar12;
  if (local_3d8 == 0) goto LAB_146cff28b;
  goto LAB_146cff101;
}

// MakeRequiredArgs<TSharedRef<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>_> @ 146cffa40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>_&&>
__cdecl RequiredArgs::
        MakeRequiredArgs<TSharedRef<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>_>
                  (TSharedRef<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>
                   *param_1)

{
  SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>_&&>
          )param_1;
}

// MakeRequiredArgs<TSharedRef<STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>_> @ 146cffa50

T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>_&&>
__cdecl RequiredArgs::
        MakeRequiredArgs<TSharedRef<STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>_>
                  (TSharedRef<STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>
                   *param_1)

{
  STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>_&&>
          )param_1;
}

// MakeShared<FViewDebugInfo::FPrimitiveInfo_const_,1,FViewDebugInfo::FPrimitiveInfo_const_&> @ 146cffa60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSharedRef<FViewDebugInfo::FPrimitiveInfo_const_,1> * __cdecl
MakeShared<FViewDebugInfo::FPrimitiveInfo_const_,1,FViewDebugInfo::FPrimitiveInfo_const_&>
          (TSharedRef<FViewDebugInfo::FPrimitiveInfo_const_,1> *__return_storage_ptr__,
          FPrimitiveInfo *param_1)

{
  int *piVar1;
  int iVar2;
  FWeakObjectPtr FVar3;
  FPrimitiveLODStats *pFVar4;
  FScriptContainerElement *_Src;
  code *pcVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedRef<FViewDebugInfo::FPrimitiveInfo_const_,1> *pTVar8;
  
  pTVar7 = operator_new(0x78);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FPrimitiveInfo *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController___CBUFPrimitiveInfo_FViewDebugInfo___00_SharedPointerInternals__6B_
    ;
    pTVar7[1]._padding_ = (longlong)(param_1->Owner).WeakPtr;
    pTVar7[1].SharedReferenceCount = (atomic<int>)(param_1->ComponentId).PrimIDValue;
    pTVar7[2]._padding_ = (longlong)param_1->ComponentInterface;
    FVar3 = (param_1->ComponentUObject).WeakPtr;
    pTVar7[2].SharedReferenceCount = (atomic<int>)FVar3.ObjectIndex;
    pTVar7[2].WeakReferenceCount = (atomic<int>)FVar3.ObjectSerialNumber;
    pTVar7[3]._padding_ = (longlong)param_1->PrimitiveSceneInfo;
    FString::FString((FString *)&pTVar7[3].SharedReferenceCount,&param_1->Name);
    pTVar7[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[4].WeakReferenceCount = (atomic<int>)0x0;
    piVar1 = (int *)((longlong)&pTVar7[5]._padding_ + 4);
    iVar2 = (param_1->Stats).LODStats.ArrayNum;
    pFVar4 = (FPrimitiveLODStats *)(param_1->Stats).LODStats.AllocatorInstance.Data;
    *(int *)&pTVar7[5]._padding_ = iVar2;
    if (iVar2 == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar2,0,(ForAnyElementType *)&pTVar7[4].SharedReferenceCount,iVar2,piVar1);
      ConstructItems<FPrimitiveLODStats,FPrimitiveLODStats,int>
                (*(void **)&pTVar7[4].SharedReferenceCount,pFVar4,iVar2);
    }
    pTVar7[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[5].WeakReferenceCount = (atomic<int>)0x0;
    piVar1 = (int *)((longlong)&pTVar7[6]._padding_ + 4);
    iVar2 = (param_1->Materials).ArrayNum;
    _Src = (param_1->Materials).AllocatorInstance.Data;
    *(int *)&pTVar7[6]._padding_ = iVar2;
    if (iVar2 == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar2,0,(ForAnyElementType *)&pTVar7[5].SharedReferenceCount,iVar2,piVar1);
      memcpy(*(void **)&pTVar7[5].SharedReferenceCount,_Src,(longlong)iVar2 << 3);
    }
    FVar3 = (param_1->OverlayMaterial).WeakPtr;
    pTVar7[6].SharedReferenceCount = (atomic<int>)FVar3.ObjectIndex;
    pTVar7[6].WeakReferenceCount = (atomic<int>)FVar3.ObjectSerialNumber;
    *(int *)&pTVar7[7]._padding_ = param_1->LODAtLastCapture;
    __return_storage_ptr__->Object = (FPrimitiveInfo *)(pTVar7 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
    if ((FPrimitiveInfo *)(pTVar7 + 1) == (FPrimitiveInfo *)0x0) {
      bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSharedRef<FViewDebugInfo::FPrimitiveInfo_const_,1> *)(*pcVar5)();
        return pTVar8;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeTDecl<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,RequiredArgs::T0RequiredArgs> @ 146cffc20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSlateDecl<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,RequiredArgs::T0RequiredArgs>
* __cdecl MakeTDecl<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,RequiredArgs::T0RequiredArgs>
                    (TSlateDecl<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,RequiredArgs::T0RequiredArgs>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,RequiredArgs::T0RequiredArgs>
  ::
  TSlateDecl<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>_&&>_> @ 146cffcd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSlateDecl<STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>_&&>_>
* __cdecl MakeTDecl<STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>_&&>_>
                    (TSlateDecl<STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>_&&>
                    *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>_&&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_48;
  FMemScope local_40;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object =
       (STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x408);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__STableRow_V__TSharedPtr___CBUFPrimitiveInfo_FViewDebugInfo___00_____00_SharedPointerInternals__6B_
    ;
    STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::
    STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>
              ((STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)(pTVar3 + 1));
  }
  TSharedRef<STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>::
  TSharedRef<STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>
            ((TSharedRef<STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1> *)
             (local_38 + 0x10),
             (STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)(pTVar3 + 1),pTVar3)
  ;
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>_&&>_>
       *)local_38) {
    (__return_storage_ptr__->_Widget).Object =
         (STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)local_38._16_8_;
    local_38._0_8_ = (STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_38 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_38._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  if ((__return_storage_ptr__->_Widget).Object ==
      (STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>_&&>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x3f8);
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SDrawPrimitiveDebugger,RequiredArgs::T0RequiredArgs> @ 146cffe80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSlateDecl<SDrawPrimitiveDebugger,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SDrawPrimitiveDebugger,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SDrawPrimitiveDebugger,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SDrawPrimitiveDebugger,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SDrawPrimitiveDebugger,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SDrawPrimitiveDebuggerListViewRow,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_> @ 146cfff30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSlateDecl<SDrawPrimitiveDebuggerListViewRow,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
* __cdecl MakeTDecl<SDrawPrimitiveDebuggerListViewRow,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                    (TSlateDecl<SDrawPrimitiveDebuggerListViewRow,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<SDrawPrimitiveDebuggerListViewRow,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FLLMScope local_res8 [2];
  FName local_58;
  FMemScope local_50;
  undefined1 local_48 [24];
  TReferenceControllerBase<1> *pTStack_30;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_58 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_50,&local_58,true);
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (SDrawPrimitiveDebuggerListViewRow *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x488);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSDrawPrimitiveDebuggerListViewRow___00_SharedPointerInternals__6B_
    ;
    memset(pTVar3 + 1,0,0x478);
    STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::
    STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>
              ((STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)(pTVar3 + 1));
    pTVar3[0x40].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x40].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x41]._padding_ = 0;
    pTVar3[0x41].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x41].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x42]._padding_ = 0;
    pTVar3[0x43].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x43].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[0x44]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar3[0x44]._padding_ + 4) = 0x80;
    pTVar3[0x44].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar3[0x44].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x45].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x45].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[0x46]._padding_ = 0;
    pTVar3[1]._padding_ = (longlong)&SDrawPrimitiveDebuggerListViewRow::_vftable__for__ITableRow__;
    *(undefined ***)&pTVar3[1].SharedReferenceCount =
         &SDrawPrimitiveDebuggerListViewRow::_vftable__for__SBorder__;
    pTVar3[0x46].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x46].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x47]._padding_ = 0;
    pTVar3[0x47].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x47].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x48]._padding_ = 0;
    pTVar5 = pTVar3;
  }
  TSharedRef<SDrawPrimitiveDebuggerListViewRow,1>::TSharedRef<SDrawPrimitiveDebuggerListViewRow,1>
            ((TSharedRef<SDrawPrimitiveDebuggerListViewRow,1> *)(local_48 + 0x10),
             (SDrawPrimitiveDebuggerListViewRow *)(pTVar5 + 1),pTVar5);
  local_48._0_8_ = local_48._16_8_;
  local_48._8_8_ = pTStack_30;
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<SDrawPrimitiveDebuggerListViewRow,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
       *)local_48) {
    (__return_storage_ptr__->_Widget).Object = (SDrawPrimitiveDebuggerListViewRow *)local_48._16_8_;
    local_48._0_8_ = (SDrawPrimitiveDebuggerListViewRow *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_48 + 8));
  }
  TSharedPtr<SDrawPrimitiveDebuggerListViewRow,1>::~TSharedPtr<SDrawPrimitiveDebuggerListViewRow,1>
            ((TSharedPtr<SDrawPrimitiveDebuggerListViewRow,1> *)local_48);
  TSharedRef<SDrawPrimitiveDebuggerListViewRow,1>::~TSharedRef<SDrawPrimitiveDebuggerListViewRow,1>
            ((TSharedRef<SDrawPrimitiveDebuggerListViewRow,1> *)(local_48 + 0x10));
  if (((__return_storage_ptr__->_Widget).Object == (SDrawPrimitiveDebuggerListViewRow *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSlateDecl<SDrawPrimitiveDebuggerListViewRow,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
              *)(*pcVar1)();
    return pTVar4;
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x478);
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>_&&>_> @ 146d00180

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>_&&>_>
* __cdecl MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>_&&>_>
                    (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>_&&>
                    *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>_&&>_>
  ::
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SPrimitiveDebuggerDetailView,RequiredArgs::T0RequiredArgs> @ 146d00230

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSlateDecl<SPrimitiveDebuggerDetailView,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SPrimitiveDebuggerDetailView,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SPrimitiveDebuggerDetailView,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SPrimitiveDebuggerDetailView,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SPrimitiveDebuggerDetailView,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// RemoveAll<`SDrawPrimitiveDebugger::HandleActorCleanup'::__l2::<lambda_1>_> @ 146d00dc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall
TArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,TSizedDefaultAllocator<32>_>::
RemoveAll<_SDrawPrimitiveDebugger::HandleActorCleanup_::__l2::<lambda_1>_>
          (TArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,TSizedDefaultAllocator<32>_>
           *this,<lambda_1> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> local_48;
  
  iVar1 = this->ArrayNum;
  lVar6 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  local_48.Object = *(FPrimitiveInfo **)pFVar2;
  local_48.SharedReferenceCount.ReferenceController = *(TReferenceControllerBase<1> **)(pFVar2 + 8);
  uVar9 = 0;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar3 = `SDrawPrimitiveDebugger::HandleActorCleanup'::__l2::<lambda_1>::operator()
                    (param_1,&local_48);
  bVar3 = !bVar3;
  uVar10 = uVar9;
  uVar12 = uVar9;
  do {
    iVar8 = (int)uVar9;
    uVar10 = uVar10 + 1;
    uVar9 = (ulonglong)(iVar8 + 1);
    if ((longlong)uVar10 < lVar6) {
      pFVar7 = pFVar2 + uVar10 * 0x10;
      do {
        local_48.Object = *(FPrimitiveInfo **)pFVar7;
        local_48.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(pFVar7 + 8);
        if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        bVar4 = `SDrawPrimitiveDebugger::HandleActorCleanup'::__l2::<lambda_1>::operator()
                          (param_1,&local_48);
        if (bVar3 != !bVar4) break;
        uVar9 = (ulonglong)((int)uVar9 + 1);
        uVar10 = uVar10 + 1;
        pFVar7 = pFVar7 + 0x10;
      } while ((longlong)uVar10 < lVar6);
    }
    iVar5 = (int)uVar9 - iVar8;
    if (bVar3 == false) {
      DestructItems<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,int>
                ((TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *)
                 (pFVar2 + (longlong)iVar8 * 0x10),iVar5);
    }
    else {
      iVar11 = (int)uVar12;
      if (iVar11 != iVar8) {
        memmove(pFVar2 + (longlong)iVar11 * 0x10,pFVar2 + (longlong)iVar8 * 0x10,
                (longlong)iVar5 << 4);
      }
      uVar12 = (ulonglong)(uint)(iVar11 + iVar5);
    }
    bVar3 = (bool)(bVar3 ^ 1);
    if (lVar6 <= (longlong)uVar10) {
      this->ArrayNum = (int)uVar12;
      return iVar1 - (int)uVar12;
    }
  } while( true );
}

// Sort<`SDrawPrimitiveDebugger::SortRows'::__l2::<lambda_1>_> @ 146d015f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,TSizedDefaultAllocator<32>_>::
Sort<_SDrawPrimitiveDebugger::SortRows_::__l2::<lambda_1>_>
          (TArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,TSizedDefaultAllocator<32>_>
           *this,<lambda_1> *param_1)

{
  FIdentityFunctor local_res8;
  
  AlgoImpl::
  IntroSortInternal<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,_SDrawPrimitiveDebugger::SortRows_::__l2::<lambda_1>_>_>
            ((TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *)(this->AllocatorInstance).Data,
             this->ArrayNum,local_res8,
             (TDereferenceWrapper<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,_public:_void___cdecl_SDrawPrimitiveDebugger::SortRows(void)_::_2_::<lambda_1>_>
              )param_1);
  return;
}

// get<1,TTuple<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry>_&> @ 146d01ad0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveDebuggerEntry * __cdecl
get<1,TTuple<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry>_&>
          (TTuple<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry> *param_1)

{
  return (FPrimitiveDebuggerEntry *)&param_1->field_0x8;
}

// get<1,TTuple<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo>_const_&> @ 146d01b20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveInfo * __cdecl
get<1,TTuple<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo>_const_&>
          (TTuple<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo> *param_1)

{
  return (FPrimitiveInfo *)&param_1->field_0x8;
}

// get<0,TTuple<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry>_&> @ 146d01b30

FPrimitiveComponentId * __cdecl
get<0,TTuple<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry>_&>
          (TTuple<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry> *param_1)

{
  return (FPrimitiveComponentId *)param_1;
}

// get<0,TTuple<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo>_const_&> @ 146d01b70

FPrimitiveComponentId * __cdecl
get<0,TTuple<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo>_const_&>
          (TTuple<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo> *param_1)

{
  return (FPrimitiveComponentId *)param_1;
}

// operator[] @ 146d065b0

FArguments * __thiscall
NamedSlotProperty<SExpandableArea::FArguments>::operator[]
          (NamedSlotProperty<SExpandableArea::FArguments> *this,TSharedRef<SWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TAlwaysValidWidget *pTVar2;
  SWidget *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pTVar2 = this->SlotContent;
  pSVar3 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (pTVar2->Widget).SharedReferenceCount.ReferenceController;
  (pTVar2->Widget).Object = pSVar3;
  (pTVar2->Widget).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return this->OwnerDeclaration;
}

// operator_UClass_* @ 146d066e0

UClass * __thiscall
ObjectPtr_Private::TNonAccessTrackedObjectPtr<UClass>::operator_UClass__
          (TNonAccessTrackedObjectPtr<UClass> *this)

{
  return (this->ObjectPtr).field0_0x0.DebugPtr;
}

// `vcall'{152,{flat}}'_}' @ 146d08194

/* [thunk]: __cdecl STableRow<class TSharedPtr<struct FViewDebugInfo::FPrimitiveInfo const ,1>
   >::`vcall'{152,{flat}}' }' */

void __thiscall
STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::_vcall__152__flat______
          (STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146d08197. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x98))();
  return;
}

// `vector_deleting_destructor'`adjustor{680}' @ 146d081a4

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl SListView<class TSharedPtr<struct
   FViewDebugInfo::FPrimitiveInfo const ,1> >::`vector deleting destructor'`adjustor{680}' (unsigned
   int) __ptr64 */

void * __thiscall
SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::
_vector_deleting_destructor__adjustor_680__
          (SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)
                      &this[-1].OnGenerateRow.field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 146d081b8

/* [thunk]:public: virtual void * __ptr64 __cdecl SMultiColumnTableRow<class TSharedPtr<struct
   FViewDebugInfo::FPrimitiveInfo const ,1> >::`vector deleting destructor'`adjustor{8}' (unsigned
   int) __ptr64 */

void * __thiscall
SMultiColumnTableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::
_vector_deleting_destructor__adjustor_8__
          (SMultiColumnTableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *this,
          uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SMultiColumnTableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)
                      &this[-1].ColumnIdToSlotContents.field_0x48,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 146d081c8

/* [thunk]:public: virtual void * __ptr64 __cdecl STableRow<class TSharedPtr<struct
   FViewDebugInfo::FPrimitiveInfo const ,1> >::`vector deleting destructor'`adjustor{8}' (unsigned
   int) __ptr64 */

void * __thiscall
STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::
_vector_deleting_destructor__adjustor_8__
          (STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)
                      &this[-1].bChangedSelectionOnMouseDown,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 146d081d8

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl SDrawPrimitiveDebuggerListViewRow::`vector
   deleting destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
SDrawPrimitiveDebuggerListViewRow::_vector_deleting_destructor__adjustor_8__
          (SDrawPrimitiveDebuggerListViewRow *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SDrawPrimitiveDebuggerListViewRow *)
                      &this[-1].DrawPrimitiveDebugger.WeakReferenceCount,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 146d081f0

void * __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::
_scalar_deleting_destructor_
          (FArrayPointer<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d08220

void * __thiscall
UE::Slate::ItemsSource::
FObservableArrayPointer<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::
_scalar_deleting_destructor_
          (FObservableArrayPointer<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *this,
          uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDelegateHandle FVar4;
  code *pcVar5;
  bool bVar6;
  void *pvVar7;
  
  this->_padding_ =
       (longlong)
       &
       ___7__FObservableArrayPointer_V__TSharedPtr___CBUFPrimitiveInfo_FViewDebugInfo___00___ItemsSource_Slate_UE__6B_
  ;
  if ((((this->ListViewOwner).Object == (STableViewBase *)0x0) ||
      (pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController,
      pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ListViewOwner.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\IItemsSource.h"
                       ,0xa6,
                       L"The View widget has a source needed to be released to prevent bad memory access."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pvVar7 = (void *)(*pcVar5)();
      return pvVar7;
    }
  }
  FVar4.ID = (this->ArrayChangedHandle).ID;
  if (FVar4.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->ItemsSource->ArrayChangedDelegate,FVar4);
  }
  pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d082e0

void * __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>
::_scalar_deleting_destructor_
          (FSharedObservableArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *this,
          uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FDelegateHandle FVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  FVar3.ID = (this->ArrayChangedHandle).ID;
  this->_padding_ =
       (longlong)
       &
       ___7__FSharedObservableArray_V__TSharedPtr___CBUFPrimitiveInfo_FViewDebugInfo___00___ItemsSource_Slate_UE__6B_
  ;
  if (FVar3.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &((this->ItemsSource).Object)->ArrayChangedDelegate,FVar3);
  }
  pTVar4 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ItemsSource).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d08370

void * __thiscall
IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d083a0

void * __thiscall
IBaseDelegateInstance<FString___cdecl(TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<FString___cdecl(TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d083d0

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d08400

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d08430

void * __thiscall
UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::
_scalar_deleting_destructor_
          (IItemsSource<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d08460

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
SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::_scalar_deleting_destructor_
          (SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *this,uint param_1)

{
  ~SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0xa00);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d084c0

void * __thiscall
SMultiColumnTableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::
_scalar_deleting_destructor_
          (SMultiColumnTableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *this,
          uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->ColumnIdToSlotContents).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ColumnIdToSlotContents).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ColumnIdToSlotContents);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Box).SharedReferenceCount.ReferenceController);
  STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::
  ~STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>
            ((STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x458);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d08560

void * __thiscall
STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::_scalar_deleting_destructor_
          (STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *this,uint param_1)

{
  ~STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d085c0

void * __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d085f0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d08620

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d08650

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
TBaseRawMethodDelegateInstance<0,FDrawPrimitiveDebuggerModule,TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FDrawPrimitiveDebuggerModule,TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d08680

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
TBaseRawMethodDelegateInstance<0,FDrawPrimitiveDebuggerModule,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FDrawPrimitiveDebuggerModule,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d086b0

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
TBaseRawMethodDelegateInstance<0,FDrawPrimitiveDebuggerModule,void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FDrawPrimitiveDebuggerModule,void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d086e0

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
TBaseRawMethodDelegateInstance<0,FDrawPrimitiveDebuggerModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FDrawPrimitiveDebuggerModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d08710

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
TBaseRawMethodDelegateInstance<0,SDrawPrimitiveDebugger,void___cdecl(AActor_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,SDrawPrimitiveDebugger,void___cdecl(AActor_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d08740

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d087a0

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d08800

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
TBaseSPMethodDelegateInstance<1,SDrawPrimitiveDebugger_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SDrawPrimitiveDebugger_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d08860

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
TBaseSPMethodDelegateInstance<1,SDrawPrimitiveDebugger_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SDrawPrimitiveDebugger_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d088c0

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
TBaseSPMethodDelegateInstance<1,SDrawPrimitiveDebugger_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SDrawPrimitiveDebugger_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d08920

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
TBaseSPMethodDelegateInstance<1,SDrawPrimitiveDebugger_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SDrawPrimitiveDebugger_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d08990

void * __thiscall
TBaseSPMethodDelegateInstance<1,SDrawPrimitiveDebuggerListViewRow_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d089f0

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
TBaseSPMethodDelegateInstance<1,SPrimitiveDebuggerDetailView_const_,1,TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SPrimitiveDebuggerDetailView_const_,1,TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d08a50

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
TBaseSPMethodDelegateInstance<1,SPrimitiveDebuggerDetailView_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SPrimitiveDebuggerDetailView_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d08ab0

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
TBaseSPMethodDelegateInstance<1,SPrimitiveDebuggerDetailView_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SPrimitiveDebuggerDetailView_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d08b10

void * __thiscall
TBaseSPMethodDelegateInstance<1,SPrimitiveDebuggerDetailView_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d08b70

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
TBaseSPMethodDelegateInstance<1,SPrimitiveDebuggerDetailView_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SPrimitiveDebuggerDetailView_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d08bd0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d08c30

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
TBaseSPMethodDelegateInstance<0,SDrawPrimitiveDebugger,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SDrawPrimitiveDebugger,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d08c90

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
TBaseSPMethodDelegateInstance<0,SDrawPrimitiveDebugger,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SDrawPrimitiveDebugger,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d08cf0

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
TBaseSPMethodDelegateInstance<0,SDrawPrimitiveDebugger,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SDrawPrimitiveDebugger,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d08d50

void * __thiscall
TBaseSPMethodDelegateInstance<0,SDrawPrimitiveDebugger,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d08db0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SDrawPrimitiveDebugger,1,void___cdecl(TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d08e10

void * __thiscall
TBaseSPMethodDelegateInstance<0,SDrawPrimitiveDebugger,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x28);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d08e80

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
TBaseSPMethodDelegateInstance<0,SPrimitiveDebuggerDetailView,1,void___cdecl(int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SPrimitiveDebuggerDetailView,1,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d08ee0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SPrimitiveDebuggerDetailView,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d08f40

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
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d08f70

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d08fa0

void * __thiscall
TCommonDelegateInstanceState<FString___cdecl(TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FString___cdecl(TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d08fd0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d09000

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d09030

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d09070

void * __thiscall
TCommonDelegateInstanceState<bool___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<bool___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Payload).field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d090b0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FViewDebugInfo::FPrimitiveInfo_const_,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FViewDebugInfo::FPrimitiveInfo_const_,1> *this,uint param_1
          )

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d090f0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d09130

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x408);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d09170

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d091b0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SDrawPrimitiveDebugger,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SDrawPrimitiveDebugger,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x3e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d091f0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SDrawPrimitiveDebuggerListViewRow,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SDrawPrimitiveDebuggerListViewRow,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x488);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d09230

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SPrimitiveDebuggerDetailView,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SPrimitiveDebuggerDetailView,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x388);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d09270

void * __thiscall
TTableViewMetadata<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::
_scalar_deleting_destructor_
          (TTableViewMetadata<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *this,
          uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->OwnerTableView).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7ISlateMetaData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d092e0

void * __thiscall
SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::FSlateAccessibleListView::
_scalar_deleting_destructor_(FSlateAccessibleListView *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d09320

void * __thiscall
STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::FSlateAccessibleTableRow::
_scalar_deleting_destructor_(FSlateAccessibleTableRow *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d09360

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
SDrawPrimitiveDebugger::_scalar_deleting_destructor_(SDrawPrimitiveDebugger *this,uint param_1)

{
  ~SDrawPrimitiveDebugger(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FSlateControlledConstruction::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0x3d0);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d093c0

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
SDrawPrimitiveDebuggerListViewRow::_scalar_deleting_destructor_
          (SDrawPrimitiveDebuggerListViewRow *this,uint param_1)

{
  ~SDrawPrimitiveDebuggerListViewRow(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x478);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d09420

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
SPrimitiveDebuggerDetailView::_scalar_deleting_destructor_
          (SPrimitiveDebuggerDetailView *this,uint param_1)

{
  ~SPrimitiveDebuggerDetailView(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FSlateControlledConstruction::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0x378);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d09480

void * __thiscall
UDrawPrimitiveDebuggerUserSettings::_scalar_deleting_destructor_
          (UDrawPrimitiveDebuggerUserSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UDrawPrimitiveDebuggerUserSettings__6B_;
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeDrawPrimitiveDebuggerConfig @ 146d15970

void __cdecl EmptyLinkFunctionForGeneratedCodeDrawPrimitiveDebuggerConfig(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDrawPrimitiveDebugger_init @ 146d15980

void __cdecl EmptyLinkFunctionForGeneratedCodeDrawPrimitiveDebugger_init(void)

{
  return;
}

// GetMaxShaderPlatformChecked @ 146d1e870

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPlatform __cdecl GetMaxShaderPlatformChecked(void)

{
  return GMaxRHIShaderPlatform;
}

// GetTypeHash @ 146d224f0

uint __cdecl GetTypeHash(FPrimitiveComponentId param_1)

{
  return param_1.PrimIDValue;
}

// Z_Construct_UClass_UDrawPrimitiveDebuggerUserSettings_NoRegister @ 146d37330

UClass * __cdecl Z_Construct_UClass_UDrawPrimitiveDebuggerUserSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDrawPrimitiveDebuggerUserSettings.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DrawPrimitiveDebugger",L"DrawPrimitiveDebuggerUserSettings",
               &Z_Registration_Info_UClass_UDrawPrimitiveDebuggerUserSettings.InnerSingleton,
               UDrawPrimitiveDebuggerUserSettings::
               StaticRegisterNativesUDrawPrimitiveDebuggerUserSettings,0x40,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UDrawPrimitiveDebuggerUserSettings>,
               InternalVTableHelperCtorCaller<UDrawPrimitiveDebuggerUserSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDrawPrimitiveDebuggerUserSettings.InnerSingleton;
}

// IMPLEMENT_MODULE_DrawPrimitiveDebugger @ 146d373f0

void __cdecl IMPLEMENT_MODULE_DrawPrimitiveDebugger(void)

{
  return;
}

// DefaultUndeterminedString'' @ 1503e04f0

void __cdecl
`dynamic_atexit_destructor_for_'SNumericEntryBox<int>::DefaultUndeterminedString__(void)

{
  if (SNumericEntryBox<int>::DefaultUndeterminedString.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001503e04ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*SNumericEntryBox<int>::DefaultUndeterminedString.TextData.Reference +
                0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'FalseTextValue'' @ 1503e0510

void __cdecl _dynamic_atexit_destructor_for__FalseTextValue__(void)

{
  FText::~FText(&FalseTextValue);
  return;
}

// `dynamic_atexit_destructor_for_'InvalidTextValue'' @ 1503e0530

void __cdecl _dynamic_atexit_destructor_for__InvalidTextValue__(void)

{
  FText::~FText(&InvalidTextValue);
  return;
}

// `dynamic_atexit_destructor_for_'LogDrawPrimitiveDebugger'' @ 1503e0550

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogDrawPrimitiveDebugger__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogDrawPrimitiveDebugger);
  return;
}

// `dynamic_atexit_destructor_for_'Name'' @ 1503e0570

void __cdecl
`SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::GetDefaultAccessibleText'::__l2::
_dynamic_atexit_destructor_for__Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
               ::__l2::Name.Data.AllocatorInstance.Data;
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'PlaceholderValue'' @ 1503e0590

void __cdecl _dynamic_atexit_destructor_for__PlaceholderValue__(void)

{
  FText::~FText(&PlaceholderValue);
  return;
}

// `dynamic_atexit_destructor_for_'SummonDebuggerCmd'' @ 1503e05b0

void __cdecl _dynamic_atexit_destructor_for__SummonDebuggerCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&SummonDebuggerCmd);
  return;
}

// `dynamic_atexit_destructor_for_'TakeSnapshotCmd'' @ 1503e05d0

void __cdecl _dynamic_atexit_destructor_for__TakeSnapshotCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&TakeSnapshotCmd);
  return;
}

// `dynamic_atexit_destructor_for_'TrueTextValue'' @ 1503e05f0

void __cdecl _dynamic_atexit_destructor_for__TrueTextValue__(void)

{
  FText::~FText(&TrueTextValue);
  return;
}

