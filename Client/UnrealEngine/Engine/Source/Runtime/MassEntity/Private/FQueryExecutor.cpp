// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 5

// FQueryExecutor @ 1471dba50

FQueryExecutor * __thiscall UE::Mass::FQueryExecutor::FQueryExecutor(FQueryExecutor *this)

{
  this->_padding_ = (longlong)&___7FQueryExecutor_Mass_UE__6B_;
  (this->BoundQuery).Val = &DummyQuery;
  (this->LogOwner).WeakPtr = (FWeakObjectPtr)0x0;
  this->DebugSize = 0;
  return this;
}

// FQueryExecutor @ 1471dba80

FQueryExecutor * __thiscall
UE::Mass::FQueryExecutor::FQueryExecutor
          (FQueryExecutor *this,FMassEntityQuery *param_1,UObject *param_2)

{
  UObject *local_res8;
  
  (this->BoundQuery).Val = param_1;
  this->_padding_ = (longlong)&___7FQueryExecutor_Mass_UE__6B_;
  if (param_1 != (FMassEntityQuery *)0x0) {
    if ((GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
      GC::MarkAsReachable(param_2);
    }
    (this->LogOwner).WeakPtr = (FWeakObjectPtr)0x0;
    local_res8 = param_2;
    if ((GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
      GC::MarkAsReachable(param_2);
    }
    FWeakObjectPtr::operator=(&(this->LogOwner).WeakPtr,(FObjectPtr)&local_res8);
    this->DebugSize = 0;
    return this;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// CallExecute @ 147200950

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UE::Mass::FQueryExecutor::CallExecute(FQueryExecutor *this,FMassExecutionContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->AccessorsPtr != (FQueryDefinitionBase *)0x0) &&
     ((FQueryExecutor *)((longlong)&this->_padding_ + (ulonglong)this->DebugSize) < this)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExecutorStart <= AccessorsStart && AccessorsStart <= ExecutorEnd",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassQueryExecutor.cpp"
                       ,0x2f,
                       L"Accessors assigned to a FQueryExecutor must be member variables of that struct."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (**(code **)((longlong)*this->AccessorsPtr + 8))(this->AccessorsPtr,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001472009b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 8))(this,param_1);
  return;
}

// ConfigureQuery @ 147206590

void __thiscall
UE::Mass::FQueryExecutor::ConfigureQuery(FQueryExecutor *this,FMassSubsystemRequirements *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001472065a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*this->AccessorsPtr)(this->AccessorsPtr,(this->BoundQuery).Val,param_1);
  return;
}

// ValidateAccessors @ 147254170

void __thiscall UE::Mass::FQueryExecutor::ValidateAccessors(FQueryExecutor *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->AccessorsPtr != (FQueryDefinitionBase *)0x0) &&
     ((FQueryExecutor *)((longlong)&this->_padding_ + (ulonglong)this->DebugSize) < this)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExecutorStart <= AccessorsStart && AccessorsStart <= ExecutorEnd",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassQueryExecutor.cpp"
                       ,0x2f,
                       L"Accessors assigned to a FQueryExecutor must be member variables of that struct."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

