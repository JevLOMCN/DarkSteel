// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 6

// BeginCPU @ 14473ff30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FRDGScope::BeginCPU(FRDGScope *this,FRHIComputeCommandList *param_1,bool param_2)

{
  uchar uVar1;
  FRHIBreadcrumbNode *pFVar2;
  code *pcVar3;
  bool bVar4;
  ERHIPipeline EVar5;
  
  uVar1 = (this->Impl).Impl.TypeIndex;
  if (uVar1 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphEvent.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (uVar1 != '\x01') {
    if (uVar1 == '\x02') {
      pFVar2 = (FRHIBreadcrumbNode *)(this->Impl).Impl._padding_;
      if (pFVar2 != (FRHIBreadcrumbNode *)0x0) {
        FRHIComputeCommandList::BeginBreadcrumbCPU(param_1,pFVar2,!param_2);
        if (!param_2) {
          EVar5 = FRHICommandListBase::GetPipeline((FRHICommandListBase *)param_1);
          FRHIComputeCommandList::BeginBreadcrumbGPU
                    (param_1,(FRHIBreadcrumbNode *)(this->Impl).Impl._padding_,EVar5);
          return;
        }
      }
    }
    else if (uVar1 == '\x03') {
      FCsvProfiler::BeginExclusiveStat((char *)(this->Impl).Impl._padding_,(char *)0x0);
    }
  }
  return;
}

// BeginGPU @ 144740000

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FRDGScope::BeginGPU(FRDGScope *this,FRHIComputeCommandList *param_1)

{
  uchar uVar1;
  code *pcVar2;
  bool bVar3;
  
  uVar1 = (this->Impl).Impl.TypeIndex;
  if (uVar1 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphEvent.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if (uVar1 == '\x01') {
      FRDGScope_Budget::BeginGPU((FRDGScope_Budget *)&this->Impl,param_1);
      return;
    }
    if (uVar1 != '\x02') {
      return;
    }
  }
  return;
}

// EndGPU @ 1447542a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FRDGScope::EndGPU(FRDGScope *this,FRHIComputeCommandList *param_1)

{
  uchar uVar1;
  code *pcVar2;
  bool bVar3;
  
  uVar1 = (this->Impl).Impl.TypeIndex;
  if (uVar1 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphEvent.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if (uVar1 == '\x01') {
      FRDGScope_Budget::EndGPU((FRDGScope_Budget *)&this->Impl,param_1);
      return;
    }
    if (uVar1 != '\x02') {
      return;
    }
  }
  return;
}

// ImmediateEnd @ 14477a330

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FRDGScope::ImmediateEnd(FRDGScope *this,FRDGScopeState *param_1)

{
  TStorage<FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this_00;
  uchar uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  
  uVar1 = (this->Impl).Impl.TypeIndex;
  this_00 = &this->Impl;
  if (uVar1 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphEvent.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    if (uVar1 == '\x01') {
      FRDGScope_Budget::ImmediateEnd((FRDGScope_Budget *)this_00,param_1);
      return;
    }
    if (uVar1 == '\x02') {
      lVar2 = (this_00->Impl)._padding_;
      if (lVar2 != 0) {
        if (*(int *)(lVar2 + 0x38) != 0) {
          if (*(int *)(lVar2 + 0x3c) == 0) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          else {
            FCpuProfilerTrace::OutputEndEventWithMetadata();
          }
        }
        *param_1->CurrentBreadcrumbRef = *(FRHIBreadcrumbNode **)((this_00->Impl)._padding_ + 8);
        return;
      }
    }
    else if (uVar1 == '\x03') {
      FCsvProfiler::EndExclusiveStat((char *)(this_00->Impl)._padding_);
    }
  }
  return;
}

// EndCPU @ 14480e020

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FRDGScope::EndCPU(FRDGScope *this,FRHIComputeCommandList *param_1,bool param_2)

{
  uchar uVar1;
  code *pcVar2;
  bool bVar3;
  ERHIPipeline EVar4;
  
  uVar1 = (this->Impl).Impl.TypeIndex;
  if (uVar1 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphEvent.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (uVar1 != '\x01') {
    if (uVar1 == '\x02') {
      if ((this->Impl).Impl._padding_ != 0) {
        if (!param_2) {
          EVar4 = FRHICommandListBase::GetPipeline((FRHICommandListBase *)param_1);
          FRHIComputeCommandList::EndBreadcrumbGPU
                    (param_1,(FRHIBreadcrumbNode *)(this->Impl).Impl._padding_,EVar4);
        }
        FRHIComputeCommandList::EndBreadcrumbCPU
                  (param_1,(FRHIBreadcrumbNode *)(this->Impl).Impl._padding_,!param_2);
        return;
      }
    }
    else if (uVar1 == '\x03') {
      FCsvProfiler::EndExclusiveStat((char *)(this->Impl).Impl._padding_);
    }
  }
  return;
}

// FRDGScope @ 14574eac0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGScope * __thiscall
DynamicRenderScaling::FRDGScope::FRDGScope(FRDGScope *this,FRDGScopeState *param_1,FBudget *param_2)

{
  byte bVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FRDGScope *pFVar5;
  FRDGScope *pFVar6;
  
  *(FRDGScopeState **)this = param_1;
  pFVar5 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                     (&(param_1->Allocators).Root,(FRDGScope **)param_1);
  *(FRDGScope **)&this->field_0x8 = pFVar5;
  (param_1->ScopeState).Current = pFVar5;
  lVar2 = *(longlong *)&this->field_0x8;
  bVar1 = *(byte *)(lVar2 + 0x48);
  if (3 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FRDGScope *)(*pcVar3)();
      return pFVar6;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[bVar1])((void *)(lVar2 + 0x38));
  FRDGScope_Budget::FRDGScope_Budget((FRDGScope_Budget *)(lVar2 + 0x38),param_1,param_2);
  *(undefined1 *)(lVar2 + 0x48) = 1;
  if ((param_1->ScopeState).bImmediate != false) {
    ::FRDGScope::BeginCPU
              (*(FRDGScope **)&this->field_0x8,(FRHIComputeCommandList *)param_1->RHICmdList,false);
    ::FRDGScope::BeginGPU
              (*(FRDGScope **)&this->field_0x8,(FRHIComputeCommandList *)param_1->RHICmdList);
  }
  return this;
}

