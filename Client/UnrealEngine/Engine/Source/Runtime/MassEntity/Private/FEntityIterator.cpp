// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 4

// FEntityIterator @ 1471d5f30

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FEntityIterator * __thiscall
FMassExecutionContext::FEntityIterator::FEntityIterator
          (FEntityIterator *this,FMassExecutionContext *param_1)

{
  FQueryTransientRuntime *pFVar1;
  
  this->ExecutionContext = param_1;
  pFVar1 = FQueryTransientRuntime::GetDummyInstance();
  this->QueryRuntime = pFVar1;
  this->EntityIndex = -1;
  this->NumEntities = -1;
  this->SerialNumber = 0;
  return this;
}

// FEntityIterator @ 1471d5f70

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FEntityIterator * __thiscall
FMassExecutionContext::FEntityIterator::FEntityIterator
          (FEntityIterator *this,FMassExecutionContext *param_1,FQueryTransientRuntime *param_2)

{
  int iVar1;
  
  this->EntityIndex = -1;
  this->ExecutionContext = param_1;
  this->QueryRuntime = param_2;
  iVar1 = (param_1->EntityListView).ArrayNum;
  this->NumEntities = iVar1;
  this->SerialNumber = param_2->IteratorSerialNumber;
  this->EntityIndex = 0;
  if (((param_2->bCheckProcessorBreaks != false) || (param_2->BreakFragmentsCount != 0)) &&
     (0 < iVar1)) {
    TestBreakpoints(this);
  }
  return this;
}

// FEntityIterator @ 1471d5fd0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FEntityIterator * __thiscall
FMassExecutionContext::FEntityIterator::FEntityIterator(FEntityIterator *this)

{
  code *pcVar1;
  bool bVar2;
  FQueryTransientRuntime *pFVar3;
  TSharedRef<FMassEntityManager,1> *pTVar4;
  FMassEntityManager *this_00;
  FEntityIterator *pFVar5;
  TRawPtrProxy<FMassEntityManager> local_res8;
  TSharedRef<FMassEntityManager,1> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      this_00 = ::operator_new(0x7d8);
      if (this_00 == (FMassEntityManager *)0x0) {
        local_res8.Object = (FMassEntityManager *)0x0;
      }
      else {
        local_res8.Object = FMassEntityManager::FMassEntityManager(this_00,(UObject *)0x0);
        if ((((local_res8.Object != (FMassEntityManager *)0x0) &&
             ((local_res8.Object)->_padding_ != 0)) && ((local_res8.Object)->_padding_ != 0)) &&
           (0 < *(int *)((local_res8.Object)->_padding_ + 8))) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InObject || !InObject->DoesSharedInstanceExist()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x7a5,L"Trying to share an already-shared object");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            pFVar5 = (FEntityIterator *)(*pcVar1)();
            return pFVar5;
          }
        }
      }
      pTVar4 = TSharedRef<FMassEntityManager,1>::
               TSharedRef<FMassEntityManager,1><FMassEntityManager>(&local_18,&local_res8);
      FMassExecutionContext(&DummyContext,pTVar4->Object,0.0,true);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      atexit(`FMassExecutionContext::GetDummyInstance'::__l2::
             _dynamic_atexit_destructor_for__DummyContext__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  this->ExecutionContext = &DummyContext;
  pFVar3 = FQueryTransientRuntime::GetDummyInstance();
  this->QueryRuntime = pFVar3;
  this->EntityIndex = -1;
  this->NumEntities = -1;
  this->SerialNumber = 0;
  return this;
}

// TestBreakpoints @ 147251b10

/* WARNING: Removing unreachable block (ram,0x000147251ca5) */
/* WARNING: Removing unreachable block (ram,0x000147251bdc) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall FMassExecutionContext::FEntityIterator::TestBreakpoints(FEntityIterator *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 local_74 [4];
  FMassEntityHandle *local_68;
  TStaticArray<UScriptStruct_const_*,8,4294967295> *local_60;
  longlong local_58;
  FMassEntityManager *local_50;
  FMassExecutionContext *local_48;
  longlong local_40;
  FMassEntityHandle local_38;
  TStaticArray<UScriptStruct_const_*,8,4294967295> *local_30;
  bool *local_28;
  FMassEntityHandle *local_20;
  FMassEntityHandle local_18;
  
  local_50 = GetEntityManagerChecked(this->ExecutionContext);
  local_48 = this->ExecutionContext;
  GetEntity(local_48,(int)&stack0xffffffffffffffa8);
  if (this->QueryRuntime->bCheckProcessorBreaks != false) {
    local_40 = local_58;
    local_38 = (FMassEntityHandle)DebugGetProcessor(this->ExecutionContext);
    FMassDebugger::ShouldProcessorBreak
              ((FMassEntityManager *)local_74,(UMassProcessor *)local_50,local_38);
    bVar2 = UE::Mass::Debug::FBreakpointHandle::operator_bool((FBreakpointHandle *)local_74);
    if (bVar2) {
      bVar2 = FWindowsPlatformMisc::IsDebuggerPresent();
      if (!bVar2) {
        return;
      }
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_68 = (FMassEntityHandle *)&this->QueryRuntime->FragmentTypesToBreakOn;
  local_28 = &this->QueryRuntime->bCheckProcessorBreaks;
  local_60 = (TStaticArray<UScriptStruct_const_*,8,4294967295> *)local_68;
  local_30 = (TStaticArray<UScriptStruct_const_*,8,4294967295> *)local_68;
  local_20 = (FMassEntityHandle *)local_28;
  while( true ) {
    if (local_68 == local_20) {
      return;
    }
    local_18 = *local_68;
    FMassDebugger::ShouldBreakOnFragmentWrite
              ((FMassEntityManager *)&stack0xffffffffffffff90,(UScriptStruct *)local_50,local_18);
    bVar2 = UE::Mass::Debug::FBreakpointHandle::operator_bool
                      ((FBreakpointHandle *)&stack0xffffffffffffff90);
    if (bVar2) break;
    local_68 = local_68 + 1;
  }
  bVar2 = FWindowsPlatformMisc::IsDebuggerPresent();
  if (!bVar2) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

