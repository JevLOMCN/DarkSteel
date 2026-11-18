// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 8

// ~TRDGEventScopeGuard<FRDGScope_RHI> @ 14472ed00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>
          (TRDGEventScopeGuard<FRDGScope_RHI> *this)

{
  uint *puVar1;
  bool local_res8 [32];
  <lambda_1> local_18;
  
  if (this->Scope != (FRDGScope *)0x0) {
    if ((this->State->ScopeState).bImmediate != false) {
      FRDGScope::EndGPU(this->Scope,(FRHIComputeCommandList *)this->State->RHICmdList);
      local_res8[0] = false;
      local_18.RHICmdList = (FRHIComputeCommandList *)this->State->RHICmdList;
      local_18.bPreScope = local_res8;
      FRDGScope::TStorage<FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
      Dispatch<_FRDGScope::EndCPU_::__l2::<lambda_1>_>(&this->Scope->Impl,&local_18);
    }
    FRDGScope::ImmediateEnd(this->Scope,this->State);
    puVar1 = &(this->State->ScopeState).Mask;
    *puVar1 = *puVar1 & 0xfffffffb;
    (this->State->ScopeState).Current = ((this->State->ScopeState).Current)->Parent;
  }
  return;
}

// TRDGEventScopeGuard<FRDGScope_CSVExclusive><char_const_(&)[19]> @ 1447e1690

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGEventScopeGuard<FRDGScope_CSVExclusive> * __thiscall
TRDGEventScopeGuard<FRDGScope_CSVExclusive>::
TRDGEventScopeGuard<FRDGScope_CSVExclusive><char_const_(&)[19]>
          (TRDGEventScopeGuard<FRDGScope_CSVExclusive> *this,FRDGScopeState *param_1,
          ERDGScopeFlags param_2,char (*param_3) [19])

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  FRDGScope *pFVar4;
  TRDGEventScopeGuard<FRDGScope_CSVExclusive> *pTVar5;
  ulonglong uVar6;
  
  this->State = param_1;
  pFVar4 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                     (&(param_1->Allocators).Root,(FRDGScope **)param_1);
  this->Scope = pFVar4;
  if ((param_2 & Final) != None) {
    puVar1 = &(param_1->ScopeState).Mask;
    *puVar1 = *puVar1 | 8;
  }
  (param_1->ScopeState).Current = this->Scope;
  pFVar4 = this->Scope;
  uVar6 = (ulonglong)(pFVar4->Impl).Impl.TypeIndex;
  if (3 < uVar6) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TRDGEventScopeGuard<FRDGScope_CSVExclusive> *)(*pcVar2)();
      return pTVar5;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[uVar6])(&pFVar4->Impl);
  (pFVar4->Impl).Impl._padding_ = (longlong)param_3;
  FCsvProfiler::BeginExclusiveStat(*param_3,(char *)0x0);
  (pFVar4->Impl).Impl.TypeIndex = '\x03';
  if ((param_1->ScopeState).bImmediate != false) {
    FRDGScope::BeginCPU(this->Scope,(FRHIComputeCommandList *)param_1->RHICmdList,false);
    FRDGScope::BeginGPU(this->Scope,(FRHIComputeCommandList *)param_1->RHICmdList);
  }
  return this;
}

// TRDGEventScopeGuard<FRDGScope_CSVExclusive><char_const_(&)[37]> @ 1447e1780

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGEventScopeGuard<FRDGScope_CSVExclusive> * __thiscall
TRDGEventScopeGuard<FRDGScope_CSVExclusive>::
TRDGEventScopeGuard<FRDGScope_CSVExclusive><char_const_(&)[37]>
          (TRDGEventScopeGuard<FRDGScope_CSVExclusive> *this,FRDGScopeState *param_1,
          ERDGScopeFlags param_2,char (*param_3) [37])

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  FRDGScope *pFVar4;
  TRDGEventScopeGuard<FRDGScope_CSVExclusive> *pTVar5;
  ulonglong uVar6;
  
  this->State = param_1;
  pFVar4 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                     (&(param_1->Allocators).Root,(FRDGScope **)param_1);
  this->Scope = pFVar4;
  if ((param_2 & Final) != None) {
    puVar1 = &(param_1->ScopeState).Mask;
    *puVar1 = *puVar1 | 8;
  }
  (param_1->ScopeState).Current = this->Scope;
  pFVar4 = this->Scope;
  uVar6 = (ulonglong)(pFVar4->Impl).Impl.TypeIndex;
  if (3 < uVar6) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TRDGEventScopeGuard<FRDGScope_CSVExclusive> *)(*pcVar2)();
      return pTVar5;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[uVar6])(&pFVar4->Impl);
  (pFVar4->Impl).Impl._padding_ = (longlong)param_3;
  FCsvProfiler::BeginExclusiveStat(*param_3,(char *)0x0);
  (pFVar4->Impl).Impl.TypeIndex = '\x03';
  if ((param_1->ScopeState).bImmediate != false) {
    FRDGScope::BeginCPU(this->Scope,(FRHIComputeCommandList *)param_1->RHICmdList,false);
    FRDGScope::BeginGPU(this->Scope,(FRHIComputeCommandList *)param_1->RHICmdList);
  }
  return this;
}

// TRDGEventScopeGuard<FRDGScope_CSVExclusive><char_const_(&)[14]> @ 1447e1870

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGEventScopeGuard<FRDGScope_CSVExclusive> * __thiscall
TRDGEventScopeGuard<FRDGScope_CSVExclusive>::
TRDGEventScopeGuard<FRDGScope_CSVExclusive><char_const_(&)[14]>
          (TRDGEventScopeGuard<FRDGScope_CSVExclusive> *this,FRDGScopeState *param_1,
          ERDGScopeFlags param_2,char (*param_3) [14])

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  FRDGScope *pFVar4;
  TRDGEventScopeGuard<FRDGScope_CSVExclusive> *pTVar5;
  ulonglong uVar6;
  
  this->State = param_1;
  pFVar4 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                     (&(param_1->Allocators).Root,(FRDGScope **)param_1);
  this->Scope = pFVar4;
  if ((param_2 & Final) != None) {
    puVar1 = &(param_1->ScopeState).Mask;
    *puVar1 = *puVar1 | 8;
  }
  (param_1->ScopeState).Current = this->Scope;
  pFVar4 = this->Scope;
  uVar6 = (ulonglong)(pFVar4->Impl).Impl.TypeIndex;
  if (3 < uVar6) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TRDGEventScopeGuard<FRDGScope_CSVExclusive> *)(*pcVar2)();
      return pTVar5;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[uVar6])(&pFVar4->Impl);
  (pFVar4->Impl).Impl._padding_ = (longlong)param_3;
  FCsvProfiler::BeginExclusiveStat(*param_3,(char *)0x0);
  (pFVar4->Impl).Impl.TypeIndex = '\x03';
  if ((param_1->ScopeState).bImmediate != false) {
    FRDGScope::BeginCPU(this->Scope,(FRHIComputeCommandList *)param_1->RHICmdList,false);
    FRDGScope::BeginGPU(this->Scope,(FRHIComputeCommandList *)param_1->RHICmdList);
  }
  return this;
}

// TRDGEventScopeGuard<FRDGScope_CSVExclusive><char_const_(&)[15]> @ 1447e1960

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGEventScopeGuard<FRDGScope_CSVExclusive> * __thiscall
TRDGEventScopeGuard<FRDGScope_CSVExclusive>::
TRDGEventScopeGuard<FRDGScope_CSVExclusive><char_const_(&)[15]>
          (TRDGEventScopeGuard<FRDGScope_CSVExclusive> *this,FRDGScopeState *param_1,
          ERDGScopeFlags param_2,char (*param_3) [15])

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  FRDGScope *pFVar4;
  TRDGEventScopeGuard<FRDGScope_CSVExclusive> *pTVar5;
  ulonglong uVar6;
  
  this->State = param_1;
  pFVar4 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                     (&(param_1->Allocators).Root,(FRDGScope **)param_1);
  this->Scope = pFVar4;
  if ((param_2 & Final) != None) {
    puVar1 = &(param_1->ScopeState).Mask;
    *puVar1 = *puVar1 | 8;
  }
  (param_1->ScopeState).Current = this->Scope;
  pFVar4 = this->Scope;
  uVar6 = (ulonglong)(pFVar4->Impl).Impl.TypeIndex;
  if (3 < uVar6) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TRDGEventScopeGuard<FRDGScope_CSVExclusive> *)(*pcVar2)();
      return pTVar5;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[uVar6])(&pFVar4->Impl);
  (pFVar4->Impl).Impl._padding_ = (longlong)param_3;
  FCsvProfiler::BeginExclusiveStat(*param_3,(char *)0x0);
  (pFVar4->Impl).Impl.TypeIndex = '\x03';
  if ((param_1->ScopeState).bImmediate != false) {
    FRDGScope::BeginCPU(this->Scope,(FRHIComputeCommandList *)param_1->RHICmdList,false);
    FRDGScope::BeginGPU(this->Scope,(FRHIComputeCommandList *)param_1->RHICmdList);
  }
  return this;
}

// ~TRDGEventScopeGuard<FRDGScope_CSVExclusive> @ 1447f5fa0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGEventScopeGuard<FRDGScope_CSVExclusive>::~TRDGEventScopeGuard<FRDGScope_CSVExclusive>
          (TRDGEventScopeGuard<FRDGScope_CSVExclusive> *this)

{
  uint *puVar1;
  
  if (this->Scope != (FRDGScope *)0x0) {
    if ((this->State->ScopeState).bImmediate != false) {
      FRDGScope::EndGPU(this->Scope,(FRHIComputeCommandList *)this->State->RHICmdList);
      FRDGScope::EndCPU(this->Scope,(FRHIComputeCommandList *)this->State->RHICmdList,false);
    }
    FRDGScope::ImmediateEnd(this->Scope,this->State);
    puVar1 = &(this->State->ScopeState).Mask;
    *puVar1 = *puVar1 & 0xfffffff7;
    (this->State->ScopeState).Current = ((this->State->ScopeState).Current)->Parent;
  }
  return;
}

// TRDGEventScopeGuard<FRDGScope_CSVExclusive><char_const_(&)[30]> @ 144f4ba20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGEventScopeGuard<FRDGScope_CSVExclusive> * __thiscall
TRDGEventScopeGuard<FRDGScope_CSVExclusive>::
TRDGEventScopeGuard<FRDGScope_CSVExclusive><char_const_(&)[30]>
          (TRDGEventScopeGuard<FRDGScope_CSVExclusive> *this,FRDGScopeState *param_1,
          ERDGScopeFlags param_2,char (*param_3) [30])

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  FRDGScope *pFVar4;
  TRDGEventScopeGuard<FRDGScope_CSVExclusive> *pTVar5;
  ulonglong uVar6;
  
  this->State = param_1;
  pFVar4 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                     (&(param_1->Allocators).Root,(FRDGScope **)param_1);
  this->Scope = pFVar4;
  if ((param_2 & Final) != None) {
    puVar1 = &(param_1->ScopeState).Mask;
    *puVar1 = *puVar1 | 8;
  }
  (param_1->ScopeState).Current = this->Scope;
  pFVar4 = this->Scope;
  uVar6 = (ulonglong)(pFVar4->Impl).Impl.TypeIndex;
  if (3 < uVar6) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TRDGEventScopeGuard<FRDGScope_CSVExclusive> *)(*pcVar2)();
      return pTVar5;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[uVar6])(&pFVar4->Impl);
  (pFVar4->Impl).Impl._padding_ = (longlong)param_3;
  FCsvProfiler::BeginExclusiveStat(*param_3,(char *)0x0);
  (pFVar4->Impl).Impl.TypeIndex = '\x03';
  if ((param_1->ScopeState).bImmediate != false) {
    FRDGScope::BeginCPU(this->Scope,(FRHIComputeCommandList *)param_1->RHICmdList,false);
    FRDGScope::BeginGPU(this->Scope,(FRHIComputeCommandList *)param_1->RHICmdList);
  }
  return this;
}

// TRDGEventScopeGuard<FRDGScope_CSVExclusive><char_const_(&)[21]> @ 145189d80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGEventScopeGuard<FRDGScope_CSVExclusive> * __thiscall
TRDGEventScopeGuard<FRDGScope_CSVExclusive>::
TRDGEventScopeGuard<FRDGScope_CSVExclusive><char_const_(&)[21]>
          (TRDGEventScopeGuard<FRDGScope_CSVExclusive> *this,FRDGScopeState *param_1,
          ERDGScopeFlags param_2,char (*param_3) [21])

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  FRDGScope *pFVar4;
  TRDGEventScopeGuard<FRDGScope_CSVExclusive> *pTVar5;
  ulonglong uVar6;
  
  this->State = param_1;
  pFVar4 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                     (&(param_1->Allocators).Root,(FRDGScope **)param_1);
  this->Scope = pFVar4;
  if ((param_2 & Final) != None) {
    puVar1 = &(param_1->ScopeState).Mask;
    *puVar1 = *puVar1 | 8;
  }
  (param_1->ScopeState).Current = this->Scope;
  pFVar4 = this->Scope;
  uVar6 = (ulonglong)(pFVar4->Impl).Impl.TypeIndex;
  if (3 < uVar6) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TRDGEventScopeGuard<FRDGScope_CSVExclusive> *)(*pcVar2)();
      return pTVar5;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[uVar6])(&pFVar4->Impl);
  (pFVar4->Impl).Impl._padding_ = (longlong)param_3;
  FCsvProfiler::BeginExclusiveStat(*param_3,(char *)0x0);
  (pFVar4->Impl).Impl.TypeIndex = '\x03';
  if ((param_1->ScopeState).bImmediate != false) {
    FRDGScope::BeginCPU(this->Scope,(FRHIComputeCommandList *)param_1->RHICmdList,false);
    FRDGScope::BeginGPU(this->Scope,(FRHIComputeCommandList *)param_1->RHICmdList);
  }
  return this;
}

