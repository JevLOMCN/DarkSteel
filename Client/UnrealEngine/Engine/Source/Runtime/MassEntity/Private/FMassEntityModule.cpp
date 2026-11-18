// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 2

// StartupModule @ 1471b5d00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall FMassEntityModule::StartupModule(FMassEntityModule *this)

{
  UScriptStruct *pUVar1;
  FModuleManager *this_00;
  FName *pFVar2;
  UPackage *pUVar3;
  FName local_res10;
  UScriptStruct *local_res18 [2];
  
  this_00 = FModuleManager::Get();
  pFVar2 = ::FName::FName(&local_res10,"MassEntityTestSuite");
  FModuleManager::LoadModule(this_00,*pFVar2,None);
  if (4 < (byte)LogMass._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      TMulticastDelegateRegistration<void___cdecl(UE::Mass::FTypeManager_&),FDefaultDelegateUserPolicy>
      ::AddStatic<>((TMulticastDelegateRegistration<void___cdecl(UE::Mass::FTypeManager_&),FDefaultDelegateUserPolicy>
                     *)&UE::Mass::FTypeManager::OnRegisterBuiltInTypes,
                    (_func___cdecl_void_FTypeManager_ptr *)&BuildInRelationHandlesInitializer);
      if (Z_Registration_Info_UScriptStruct_FMassChildOfRelation.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar3 = Z_Construct_UPackage__Script_MassEntity();
        Z_Registration_Info_UScriptStruct_FMassChildOfRelation.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FMassChildOfRelation,(UObject *)pUVar3,
                             L"MassChildOfRelation");
        if (Z_Registration_Info_UScriptStruct_FMassChildOfRelation.OuterSingleton ==
            (UScriptStruct *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
      }
      pUVar1 = Z_Registration_Info_UScriptStruct_FMassChildOfRelation.OuterSingleton;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable
                  ((UObject *)Z_Registration_Info_UScriptStruct_FMassChildOfRelation.OuterSingleton)
        ;
      }
      local_res10.ComparisonIndex.Value = 0;
      local_res10.Number = 0;
      local_res18[0] = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UScriptStruct *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res10,(FObjectPtr)local_res18);
      UE::Mass::Relations::ChildOfHandle.TypeKey.ObjectKey =
           (TObjectKey<UStruct_const_>)(TObjectKey<UStruct_const_>)local_res10;
      atexit(`UE::Mass::Relations::RegisterChildOfRelation'::__l2::
             _dynamic_atexit_destructor_for__BuildInRelationHandlesInitializer__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return;
}

// ShutdownModule @ 1471b5e60

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall FMassEntityModule::ShutdownModule(FMassEntityModule *this)

{
  bool bVar1;
  int iVar2;
  ForAnyElementType this_00;
  FEnvironment *pFVar3;
  undefined1 local_res10 [8];
  
  iVar2 = FMassDebugger::ActiveEnvironments.ArrayNum;
  pFVar3 = (FEnvironment *)
           (FMassDebugger::ActiveEnvironments.AllocatorInstance.Data +
           (longlong)FMassDebugger::ActiveEnvironments.ArrayNum * 0x140);
  this_00.Data = FMassDebugger::ActiveEnvironments.AllocatorInstance.Data;
  while( true ) {
    if (FMassDebugger::ActiveEnvironments.ArrayNum != iVar2) {
      `TCheckedPointerIterator<FMassDebugger::FEnvironment,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if ((FEnvironment *)this_00.Data == pFVar3) break;
    FMassDebugger::FEnvironment::ClearBreakpoints((FEnvironment *)this_00.Data);
    this_00.Data = this_00.Data + 0x140;
  }
  UE::Mass::Debug::FBreakpoint::bHasBreakpoint = false;
  DestructItems<FMassDebugger::FEnvironment,int>
            ((FEnvironment *)FMassDebugger::ActiveEnvironments.AllocatorInstance.Data,
             FMassDebugger::ActiveEnvironments.ArrayNum);
  FMassDebugger::ActiveEnvironments.ArrayNum = 0;
  if (FMassDebugger::ActiveEnvironments.ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x140,8,0,&FMassDebugger::ActiveEnvironments.AllocatorInstance,0,
               &FMassDebugger::ActiveEnvironments.ArrayMax);
  }
  bVar1 = 1 < (int)FMassDebugger::FragmentsByName._72_4_;
  if (!bVar1) {
    TSet<TTuple<FName,UScriptStruct_const_*>,TDefaultMapHashableKeyFuncs<FName,UScriptStruct_const_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,UScriptStruct_const_*>,TDefaultMapHashableKeyFuncs<FName,UScriptStruct_const_*,0>,FDefaultSetAllocator>
                      *)&FMassDebugger::FragmentsByName);
  }
  FMassDebugger::FragmentsByName._8_4_ = 0;
  if (FMassDebugger::FragmentsByName._12_4_ != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&FMassDebugger::FragmentsByName,0,
               (int *)&FMassDebugger::FragmentsByName.field_0xc);
  }
  FMassDebugger::FragmentsByName._48_4_ = 0xffffffff;
  FMassDebugger::FragmentsByName._52_4_ = 0;
  FMassDebugger::FragmentsByName._40_4_ = 0;
  if (0x80 < (uint)FMassDebugger::FragmentsByName._44_4_) {
    FMassDebugger::FragmentsByName._44_4_ = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&FMassDebugger::FragmentsByName.field_0x10,0)
    ;
  }
  if (bVar1) {
    FMassDebugger::FragmentsByName._72_4_ = 1;
    TSet<TTuple<FName,UScriptStruct_const_*>,TDefaultMapHashableKeyFuncs<FName,UScriptStruct_const_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,UScriptStruct_const_*>,TDefaultMapHashableKeyFuncs<FName,UScriptStruct_const_*,0>,FDefaultSetAllocator>
              *)&FMassDebugger::FragmentsByName);
  }
  return;
}

