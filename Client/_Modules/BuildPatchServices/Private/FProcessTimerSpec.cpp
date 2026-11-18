// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 7

// GetTestFlags @ 1432f8050

EAutomationTestFlags __thiscall FProcessTimerSpec::GetTestFlags(FProcessTimerSpec *this)

{
  return ProductFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// GetTestSourceFileName @ 1432f8060

FString * __thiscall
FProcessTimerSpec::GetTestSourceFileName(FProcessTimerSpec *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Tests\\Unit\\ProcessTimer.spec.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1432f8090

int __thiscall FProcessTimerSpec::GetTestSourceFileLine(FProcessTimerSpec *this)

{
  return 10;
}

// GetBeautifiedTestName @ 1432f80a0

FString * __thiscall
FProcessTimerSpec::GetBeautifiedTestName(FProcessTimerSpec *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"BuildPatchServices.Unit");
  return __return_storage_ptr__;
}

// Define @ 1432f80d0

void __thiscall FProcessTimerSpec::Define(FProcessTimerSpec *this)

{
  FString local_48;
  code *local_38 [2];
  undefined **local_28;
  FProcessTimerSpec *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FProcessTimerSpec::Define'::`2'::<lambda_1>,0,0>::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FProcessTimerSpec::Define'::__l2::<lambda_1>,void>::Call;
  local_20 = this;
  FAutomationSpecBase::BeforeEach
            ((FAutomationSpecBase *)this,(TFunction<void___cdecl(void)> *)local_38);
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FProcessTimerSpec::Define'::`2'::<lambda_2>,0,0>::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FProcessTimerSpec::Define'::__l2::<lambda_2>,void>::Call;
  local_20 = this;
  ::FString::FString(&local_48,"ProcessTimer");
  FAutomationSpecBase::Describe
            ((FAutomationSpecBase *)this,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FProcessTimerSpec::Define'::`2'::<lambda_3>,0,0>::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FProcessTimerSpec::Define'::__l2::<lambda_3>,void>::Call;
  local_20 = this;
  FAutomationSpecBase::AfterEach
            ((FAutomationSpecBase *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// operator() @ 143303f50

void __thiscall `FProcessTimerSpec::Define'::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  LPCRITICAL_SECTION lpCriticalSection_00;
  
  BuildPatchServices::FMockCyclesProvider::Reset();
  lVar1 = *(longlong *)this;
  lpCriticalSection_00 = ::operator_new(0x40);
  if (lpCriticalSection_00 == (LPCRITICAL_SECTION)0x0) {
    lpCriticalSection_00 = (LPCRITICAL_SECTION)0x0;
  }
  else {
    InitializeCriticalSectionAndSpinCount(lpCriticalSection_00,4000);
    lpCriticalSection_00[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    lpCriticalSection_00[1].LockCount = 0;
    lpCriticalSection_00[1].RecursionCount = 0;
    *(undefined2 *)&lpCriticalSection_00[1].OwningThread = 0;
  }
  lpCriticalSection = *(LPCRITICAL_SECTION *)(lVar1 + 0x198);
  if ((lpCriticalSection != lpCriticalSection_00) &&
     (*(LPCRITICAL_SECTION *)(lVar1 + 0x198) = lpCriticalSection_00,
     lpCriticalSection != (LPCRITICAL_SECTION)0x0)) {
    DeleteCriticalSection(lpCriticalSection);
    ::operator_delete(lpCriticalSection,0x40);
  }
  return;
}

// AdvanceTime @ 1433173c0

void __thiscall FProcessTimerSpec::AdvanceTime(FProcessTimerSpec *this,double param_1)

{
  longlong lVar1;
  double dVar2;
  
  dVar2 = param_1 / BuildPatchServices::FMockCyclesProvider::SecondsPerCycle +
          (double)BuildPatchServices::FMockCyclesProvider::CurrentCycles;
  lVar1 = 0;
  if ((__real_43e0000000000000 <= dVar2) &&
     (dVar2 = dVar2 - __real_43e0000000000000, dVar2 < __real_43e0000000000000)) {
    lVar1 = -0x8000000000000000;
  }
  BuildPatchServices::FMockCyclesProvider::CurrentCycles = (longlong)dVar2 + lVar1;
  return;
}

