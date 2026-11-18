// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 24

// operator() @ 144733050

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FRHIComputeCommandList::BeginBreadcrumbGPU'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  ERHIPipeline EVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  FRHIBreadcrumbRange local_18;
  
  EVar1 = *(ERHIPipeline *)((longlong)this + 8);
  if ((EVar1 == Graphics) || (lVar4 = 0x130, EVar1 != AsyncCompute)) {
    lVar4 = 0x100;
  }
  local_18.First = *(FRHIBreadcrumbNode **)this;
  local_18.Last = local_18.First;
  FRHIBreadcrumbRange::InsertAfter
            ((FRHIBreadcrumbRange *)((longlong)&(param_1->MemManager).NumMarks + lVar4),&local_18,
             *(FRHIBreadcrumbNode **)((longlong)&(param_1->MemManager).TopMark + lVar4),EVar1);
  *(undefined8 *)((longlong)&(param_1->MemManager).TopMark + lVar4) = *(undefined8 *)this;
  puVar3 = (undefined8 *)((longlong)&(param_1->MemManager).End + lVar4);
  *(undefined8 *)((longlong)&(param_1->MemManager).Top + lVar4) = *(undefined8 *)this;
  if (this != puVar3) {
    *puVar3 = *(undefined8 *)this;
    *(undefined1 *)(puVar3 + 1) = 1;
  }
  if ((*(char *)((longlong)this + 8) == '\x01') ||
     (lVar4 = 0x58, *(char *)((longlong)this + 8) != '\x02')) {
    lVar4 = 0x50;
  }
  plVar2 = *(longlong **)((longlong)&(param_1->MemManager).Top + lVar4);
                    /* WARNING: Could not recover jumptable at 0x0001447330fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 200))(plVar2,*(undefined8 *)this);
  return;
}

// operator() @ 144733590

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FRHIComputeCommandList::EndBreadcrumbCPU'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  FRHIBreadcrumbNode *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  pFVar1 = *(FRHIBreadcrumbNode **)(*(longlong *)this + 8);
  (param_1->PersistentState).LocalBreadcrumb = pFVar1;
  if (pFVar1 == FRHIBreadcrumbNode::Sentinel) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExecutingCmdList.PersistentState.LocalBreadcrumb != FRHIBreadcrumbNode::Sentinel"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0xcea,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(char *)((longlong)this + 8) != '\0') {
    pFVar1 = *(FRHIBreadcrumbNode **)(*(longlong *)this + 8);
    (param_1->CPUBreadcrumbState).Current = pFVar1;
    if (pFVar1 == FRHIBreadcrumbNode::Sentinel) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExecutingCmdList.CPUBreadcrumbState.Current != FRHIBreadcrumbNode::Sentinel"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0xcef,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (*(int *)(*(longlong *)this + 0x38) != 0) {
      if (*(int *)(*(longlong *)this + 0x3c) != 0) {
        FCpuProfilerTrace::OutputEndEventWithMetadata();
        return;
      }
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// operator() @ 144733660

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FRHIComputeCommandList::EndBreadcrumbGPU'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  FRHIBreadcrumbNode *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  longlong local_18 [2];
  
  if ((*(char *)((longlong)this + 8) == '\x01') ||
     (lVar6 = 0x130, *(char *)((longlong)this + 8) != '\x02')) {
    lVar6 = 0x100;
  }
  plVar3 = (longlong *)((longlong)&(param_1->MemManager).Top + lVar6);
  pFVar2 = *(FRHIBreadcrumbNode **)(*(longlong *)this + 8);
  *plVar3 = (longlong)pFVar2;
  if ((pFVar2 == FRHIBreadcrumbNode::Sentinel) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("State.Current != FRHIBreadcrumbNode::Sentinel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0xd27,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  plVar1 = plVar3 + 1;
  if (local_18 != plVar1) {
    *plVar1 = *(longlong *)(*(longlong *)this + 8);
    *(undefined1 *)(plVar3 + 2) = 1;
  }
  if ((char)plVar3[2] == '\x01') {
    bVar5 = (FRHIBreadcrumbNode *)*plVar1 != FRHIBreadcrumbNode::Sentinel;
  }
  else {
    bVar5 = true;
  }
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("State.Latest != FRHIBreadcrumbNode::Sentinel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0xd2a,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((*(char *)((longlong)this + 8) == '\x01') ||
     (lVar6 = 0x58, *(char *)((longlong)this + 8) != '\x02')) {
    lVar6 = 0x50;
  }
  plVar3 = *(longlong **)((longlong)&(param_1->MemManager).Top + lVar6);
                    /* WARNING: Could not recover jumptable at 0x000144733768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0xd0))(plVar3,*(undefined8 *)this);
  return;
}

// BeginBreadcrumbCPU @ 14473fb90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRHIComputeCommandList::BeginBreadcrumbCPU
          (FRHIComputeCommandList *this,FRHIBreadcrumbNode *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined7 uStack_f;
  
  if (((param_1 == (FRHIBreadcrumbNode *)0x0) || (param_1 == FRHIBreadcrumbNode::Sentinel)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Breadcrumb && Breadcrumb != FRHIBreadcrumbNode::Sentinel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0xcb4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FRHIBreadcrumbAllocatorArray::AddUnique
            ((FRHIBreadcrumbAllocatorArray *)&this->field_0x160,param_1->Allocator);
  if (((GRHICommandList.bLatchedBypass == false) || ((this->field_0x29b & 0x20) == 0)) &&
     (this->field_0x64 == '\0')) {
    if (param_1->TraceCpuSpecId != 0) {
      if (param_1->TraceCpuMetadataId == 0) {
        FCpuProfilerTrace::OutputBeginEvent(param_1->TraceCpuSpecId);
      }
      else {
        FCpuProfilerTrace::OutputBeginEventWithMetadata(param_1->TraceCpuMetadataId);
      }
    }
    *(FRHIBreadcrumbNode **)&this->field_0x2f8 = param_1;
    if ((param_2) &&
       (*(FRHIBreadcrumbNode **)&this->field_0xe0 = param_1,
       param_1->Parent == FRHIBreadcrumbNode::Sentinel)) {
      FRHIBreadcrumbList::Append((FRHIBreadcrumbList *)&this->field_0xe8,param_1);
    }
  }
  if (((GRHICommandList.bLatchedBypass == false) || ((this->field_0x29b & 0x20) == 0)) &&
     (this->field_0x64 == '\0')) {
    puVar3 = FMemStackBase::Alloc((FMemStackBase *)this,0x20,8);
    *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
    **(undefined8 **)&this->field_0x30 = puVar3;
    *(undefined8 **)&this->field_0x30 = puVar3 + 1;
    puVar3[1] = 0;
    *puVar3 = &
              ___7__TRHILambdaCommand_NoMarker_VFRHIComputeCommandList__V<lambda_1>__1__BeginBreadcrumbCPU_1_QEAAXPEAUFRHIBreadcrumbNode___N_Z___6B_
    ;
    puVar3[2] = param_1;
    puVar3[3] = CONCAT71(uStack_f,param_2);
  }
  else {
    *(FRHIBreadcrumbNode **)&this->field_0x2f8 = param_1;
    if (param_2) {
      *(FRHIBreadcrumbNode **)&this->field_0xe0 = param_1;
      if (param_1->TraceCpuSpecId != 0) {
        if (param_1->TraceCpuMetadataId == 0) {
          FCpuProfilerTrace::OutputBeginEvent(param_1->TraceCpuSpecId);
          return;
        }
        FCpuProfilerTrace::OutputBeginEventWithMetadata(param_1->TraceCpuMetadataId);
        return;
      }
    }
  }
  return;
}

// BeginBreadcrumbGPU @ 14473fd40

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIComputeCommandList::BeginBreadcrumbGPU
          (FRHIComputeCommandList *this,FRHIBreadcrumbNode *param_1,ERHIPipeline param_2)

{
  atomic<unsigned_char> aVar1;
  code *pcVar2;
  bool bVar3;
  atomic<unsigned_char> aVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 local_res10;
  FRHIBreadcrumbNode *local_28;
  ERHIPipeline EStack_20;
  undefined7 uStack_1f;
  
  if (((param_1 == (FRHIBreadcrumbNode *)0x0) || (param_1 == FRHIBreadcrumbNode::Sentinel)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Breadcrumb && Breadcrumb != FRHIBreadcrumbNode::Sentinel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0xcf8,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((param_2 == None) || ((param_2 & param_2 - Graphics) != None)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSingleRHIPipeline(Pipeline)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0xcf9,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((this->field_0x6a & param_2) != param_2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("EnumHasAllFlags(ActivePipelines, Pipeline)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0xcfa,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  aVar4 = param_1->BeginPipes;
  do {
    LOCK();
    aVar1 = param_1->BeginPipes;
    bVar3 = aVar4 == aVar1;
    if (bVar3) {
      param_1->BeginPipes = (atomic<unsigned_char>)((byte)aVar4 | param_2);
      aVar1 = aVar4;
    }
    aVar4 = aVar1;
    UNLOCK();
  } while (!bVar3);
  if (((param_2 & (byte)aVar4) != None) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!EnumHasAnyFlags(ERHIPipeline(Breadcrumb->BeginPipes.fetch_or(std::underlying_type_t<ERHIPipeline>(Pipeline))), Pipeline)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0xcfc,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FRHIBreadcrumbAllocatorArray::AddUnique
            ((FRHIBreadcrumbAllocatorArray *)&this->field_0x160,param_1->Allocator);
  if ((param_2 == Graphics) || (lVar5 = 0x130, param_2 != AsyncCompute)) {
    lVar5 = 0x100;
  }
  *(FRHIBreadcrumbNode **)(&this->field_0x0 + lVar5) = param_1;
  puVar6 = (undefined8 *)(&this->field_0x8 + lVar5);
  if (&local_res10 != puVar6) {
    *puVar6 = param_1;
    *(undefined1 *)(puVar6 + 1) = 1;
  }
  local_28 = param_1;
  EStack_20 = param_2;
  if (((GRHICommandList.bLatchedBypass == false) || ((this->field_0x29b & 0x20) == 0)) &&
     (this->field_0x64 == '\0')) {
    puVar6 = FMemStackBase::Alloc((FMemStackBase *)this,0x28,8);
    *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
    **(undefined8 **)&this->field_0x30 = puVar6;
    *(undefined8 **)&this->field_0x30 = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &
              ___7__TRHILambdaCommand_VFRHIComputeCommandList__V<lambda_1>__1__BeginBreadcrumbGPU_1_QEAAXPEAUFRHIBreadcrumbNode__W4ERHIPipeline___Z___6B_
    ;
    puVar6[4] = L"BeginBreadcrumbGPU";
    puVar6[2] = local_28;
    puVar6[3] = CONCAT71(uStack_1f,EStack_20);
    return;
  }
  `FRHIComputeCommandList::BeginBreadcrumbGPU'::__l2::<lambda_1>::operator()
            (&local_28,(FRHICommandListBase *)this);
  return;
}

// DispatchComputeShader @ 1447529f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIComputeCommandList::DispatchComputeShader
          (FRHIComputeCommandList *this,uint param_1,uint param_2,uint param_3)

{
  IRHIComputeContext *pIVar1;
  undefined8 *puVar2;
  
  if ((GRHICommandList.bLatchedBypass) && ((this->field_0x29b & 0x20) != 0)) {
    pIVar1 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)this);
    (**(code **)(pIVar1->_padding_ + 0x18))(pIVar1,param_1,param_2,param_3);
  }
  else {
    puVar2 = FMemStackBase::Alloc((FMemStackBase *)this,0x20,8);
    *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
    **(undefined8 **)&this->field_0x30 = puVar2;
    *(undefined8 **)&this->field_0x30 = puVar2 + 1;
    puVar2[1] = 0;
    *puVar2 = &___7FRHICommandDispatchComputeShader__6B_;
    *(uint *)(puVar2 + 2) = param_1;
    *(uint *)((longlong)puVar2 + 0x14) = param_2;
    *(uint *)(puVar2 + 3) = param_3;
  }
  return;
}

// EndBreadcrumbGPU @ 1447540b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIComputeCommandList::EndBreadcrumbGPU
          (FRHIComputeCommandList *this,FRHIBreadcrumbNode *param_1,ERHIPipeline param_2)

{
  atomic<unsigned_char> aVar1;
  code *pcVar2;
  bool bVar3;
  atomic<unsigned_char> aVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 local_28;
  FRHIBreadcrumbNode *local_20;
  ERHIPipeline EStack_18;
  undefined7 uStack_17;
  
  if (((param_1 == (FRHIBreadcrumbNode *)0x0) || (param_1 == FRHIBreadcrumbNode::Sentinel)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Breadcrumb && Breadcrumb != FRHIBreadcrumbNode::Sentinel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0xd15,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((param_2 == None) || ((param_2 & param_2 - Graphics) != None)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSingleRHIPipeline(Pipeline)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0xd16,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((this->field_0x6a & param_2) != param_2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("EnumHasAllFlags(ActivePipelines, Pipeline)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0xd17,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  aVar4 = param_1->EndPipes;
  do {
    LOCK();
    aVar1 = param_1->EndPipes;
    bVar3 = aVar4 == aVar1;
    if (bVar3) {
      param_1->EndPipes = (atomic<unsigned_char>)((byte)aVar4 | param_2);
      aVar1 = aVar4;
    }
    aVar4 = aVar1;
    UNLOCK();
  } while (!bVar3);
  if (((param_2 & (byte)aVar4) != None) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!EnumHasAnyFlags(ERHIPipeline(Breadcrumb->EndPipes.fetch_or(std::underlying_type_t<ERHIPipeline>(Pipeline))), Pipeline)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0xd19,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FRHIBreadcrumbAllocatorArray::AddUnique
            ((FRHIBreadcrumbAllocatorArray *)&this->field_0x160,param_1->Allocator);
  if ((param_2 == Graphics) || (lVar6 = 0x130, param_2 != AsyncCompute)) {
    lVar6 = 0x100;
  }
  *(FRHIBreadcrumbNode **)(&this->field_0x0 + lVar6) = param_1->Parent;
  puVar5 = (undefined8 *)(&this->field_0x8 + lVar6);
  if (&local_28 != puVar5) {
    *puVar5 = param_1->Parent;
    *(undefined1 *)(puVar5 + 1) = 1;
  }
  local_20 = param_1;
  EStack_18 = param_2;
  if (((GRHICommandList.bLatchedBypass == false) || ((this->field_0x29b & 0x20) == 0)) &&
     (this->field_0x64 == '\0')) {
    puVar5 = FMemStackBase::Alloc((FMemStackBase *)this,0x28,8);
    *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
    **(undefined8 **)&this->field_0x30 = puVar5;
    *(undefined8 **)&this->field_0x30 = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &
              ___7__TRHILambdaCommand_VFRHIComputeCommandList__V<lambda_1>__1__EndBreadcrumbGPU_1_QEAAXPEAUFRHIBreadcrumbNode__W4ERHIPipeline___Z___6B_
    ;
    puVar5[4] = L"EndBreadcrumbGPU";
    puVar5[2] = local_20;
    puVar5[3] = CONCAT71(uStack_17,EStack_18);
    return;
  }
  `FRHIComputeCommandList::EndBreadcrumbGPU'::__l2::<lambda_1>::operator()
            (&local_20,(FRHICommandListBase *)this);
  return;
}

// SetBatchedShaderUnbinds @ 14478dd40

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIComputeCommandList::SetBatchedShaderUnbinds
          (FRHIComputeCommandList *this,FRHIComputeShader *param_1,FRHIBatchedShaderUnbinds *param_2
          )

{
  int iVar1;
  FScriptContainerElement *_Src;
  IRHIComputeContext *pIVar2;
  undefined8 *puVar3;
  void *_Dst;
  undefined4 uStack_3c;
  
  iVar1 = (param_2->Unbinds).ArrayNum;
  if (0 < iVar1) {
    _Src = (param_2->Unbinds).AllocatorInstance.Data;
    if (GRHIGlobals.NeedsShaderUnbinds) {
      if ((GRHICommandList.bLatchedBypass) && ((this->field_0x29b & 0x20) != 0)) {
        pIVar2 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)this);
        (**(code **)(pIVar2->_padding_ + 0xa8))(pIVar2,param_1);
      }
      else {
        puVar3 = FMemStackBase::Alloc((FMemStackBase *)this,0x28,8);
        *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
        **(undefined8 **)&this->field_0x30 = puVar3;
        *(undefined8 **)&this->field_0x30 = puVar3 + 1;
        _Dst = FMemStackBase::Alloc((FMemStackBase *)this,(longlong)iVar1 << 2,2);
        memcpy(_Dst,_Src,(longlong)iVar1 << 2);
        puVar3[1] = 0;
        puVar3[3] = _Dst;
        puVar3[4] = CONCAT44(uStack_3c,iVar1);
        *puVar3 = &___7__FRHICommandSetShaderUnbinds_VFRHIComputeShader____6B_;
        puVar3[2] = param_1;
      }
    }
    (param_2->Unbinds).ArrayNum = 0;
    if ((param_2->Unbinds).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,2,0,(ForAnyElementType *)param_2,0,&(param_2->Unbinds).ArrayMax);
    }
  }
  return;
}

// SetGPUMask @ 14478e110

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FRHIComputeCommandList::SetGPUMask(FRHIComputeCommandList *this,FRHIGPUMask param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  if (*(uint *)&this->field_0x29c != param_1.GPUMask) {
    *(uint *)&this->field_0x29c = param_1.GPUMask;
    if ((GRHICommandList.bLatchedBypass == false) || ((this->field_0x29b & 0x20) == 0)) {
      puVar3 = FMemStackBase::Alloc((FMemStackBase *)this,0x18,8);
      *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
      **(undefined8 **)&this->field_0x30 = puVar3;
      uVar1 = *(undefined4 *)&this->field_0x29c;
      *(undefined8 **)&this->field_0x30 = puVar3 + 1;
      puVar3[1] = 0;
      *puVar3 = &___7FRHICommandSetGPUMask__6B_;
      *(undefined4 *)(puVar3 + 2) = uVar1;
      return;
    }
    for (plVar4 = (longlong *)&this->field_0x50; plVar4 != (longlong *)&this->field_0x60;
        plVar4 = plVar4 + 1) {
      plVar2 = (longlong *)*plVar4;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0xe8))(plVar2,*(undefined4 *)&this->field_0x29c);
      }
    }
  }
  return;
}

// SetStaticUniformBuffers @ 14478e630

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIComputeCommandList::SetStaticUniformBuffers
          (FRHIComputeCommandList *this,FUniformBufferStaticBindings *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  IRHIComputeContext *pIVar1;
  undefined8 *puVar2;
  
  if ((GRHICommandList.bLatchedBypass) && ((this->field_0x29b & 0x20) != 0)) {
    pIVar1 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)this);
    UNRECOVERED_JUMPTABLE = *(code **)(pIVar1->_padding_ + 0xb0);
                    /* WARNING: Could not recover jumptable at 0x00014478e671. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(pIVar1,param_1,UNRECOVERED_JUMPTABLE);
    return;
  }
  puVar2 = FMemStackBase::Alloc((FMemStackBase *)this,0x88,8);
  *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
  **(undefined8 **)&this->field_0x30 = puVar2;
  *(undefined8 **)&this->field_0x30 = puVar2 + 1;
  puVar2[1] = 0;
  *puVar2 = &___7FRHICommandSetStaticUniformBuffers__6B_;
  FUniformBufferStaticBindings::FUniformBufferStaticBindings
            ((FUniformBufferStaticBindings *)(puVar2 + 2),param_1);
  return;
}

// EndBreadcrumbCPU @ 14480dee0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIComputeCommandList::EndBreadcrumbCPU
          (FRHIComputeCommandList *this,FRHIBreadcrumbNode *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  FRHIBreadcrumbNode *local_18;
  undefined1 uStack_10;
  undefined7 uStack_f;
  
  if ((param_1 == (FRHIBreadcrumbNode *)0x0) || (param_1 == FRHIBreadcrumbNode::Sentinel)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Breadcrumb && Breadcrumb != FRHIBreadcrumbNode::Sentinel",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0xcd7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRHIBreadcrumbAllocatorArray::AddUnique
            ((FRHIBreadcrumbAllocatorArray *)&this->field_0x160,param_1->Allocator);
  if (((GRHICommandList.bLatchedBypass == false) || ((this->field_0x29b & 0x20) == 0)) &&
     (this->field_0x64 == '\0')) {
    if (param_1->TraceCpuSpecId != 0) {
      if (param_1->TraceCpuMetadataId == 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      else {
        FCpuProfilerTrace::OutputEndEventWithMetadata();
      }
    }
    *(FRHIBreadcrumbNode **)&this->field_0x2f8 = param_1->Parent;
    if (param_2) {
      *(FRHIBreadcrumbNode **)&this->field_0xe0 = param_1->Parent;
    }
  }
  local_18 = param_1;
  uStack_10 = param_2;
  if (((GRHICommandList.bLatchedBypass == false) || ((this->field_0x29b & 0x20) == 0)) &&
     (this->field_0x64 == '\0')) {
    puVar3 = FMemStackBase::Alloc((FMemStackBase *)this,0x20,8);
    *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
    **(undefined8 **)&this->field_0x30 = puVar3;
    *(undefined8 **)&this->field_0x30 = puVar3 + 1;
    puVar3[1] = 0;
    *puVar3 = &
              ___7__TRHILambdaCommand_NoMarker_VFRHIComputeCommandList__V<lambda_1>__1__EndBreadcrumbCPU_1_QEAAXPEAUFRHIBreadcrumbNode___N_Z___6B_
    ;
    puVar3[2] = local_18;
    puVar3[3] = CONCAT71(uStack_f,uStack_10);
    return;
  }
  `FRHIComputeCommandList::EndBreadcrumbCPU'::__l2::<lambda_1>::operator()
            (&local_18,(FRHICommandListBase *)this);
  return;
}

// GetBreadcrumbAllocator @ 144813600

FRHIBreadcrumbAllocator * __thiscall
FRHIComputeCommandList::GetBreadcrumbAllocator(FRHIComputeCommandList *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FRHIBreadcrumbAllocator,1> *pTVar4;
  FRHIBreadcrumbAllocator *pFVar5;
  FRHIBreadcrumbAllocator *local_28;
  FSharedReferencer<1> local_20;
  TSharedRef<FRHIBreadcrumbAllocator,1> local_18;
  
  puVar1 = &this->field_0x190;
  if (*(longlong *)puVar1 == 0) {
    pTVar4 = MakeShared<FRHIBreadcrumbAllocator,1>(&local_18);
    local_20.ReferenceController = (pTVar4->SharedReferenceCount).ReferenceController;
    local_28 = pTVar4->Object;
    if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_20.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((FRHIBreadcrumbAllocator **)puVar1 != &local_28) {
      *(FRHIBreadcrumbAllocator **)puVar1 = local_28;
      local_28 = (FRHIBreadcrumbAllocator *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->field_0x198,&local_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    if (*(longlong *)puVar1 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FRHIBreadcrumbAllocator *)(*pcVar2)();
        return pFVar5;
      }
    }
  }
  return *(FRHIBreadcrumbAllocator **)puVar1;
}

// DispatchIndirectComputeShader @ 14490d6f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIComputeCommandList::DispatchIndirectComputeShader
          (FRHIComputeCommandList *this,FRHIBuffer *param_1,uint param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  IRHIComputeContext *pIVar1;
  undefined8 *puVar2;
  
  if ((GRHICommandList.bLatchedBypass) && ((this->field_0x29b & 0x20) != 0)) {
    pIVar1 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)this);
    UNRECOVERED_JUMPTABLE = *(code **)(pIVar1->_padding_ + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00014490d73e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(pIVar1,param_1,param_2,UNRECOVERED_JUMPTABLE);
    return;
  }
  puVar2 = FMemStackBase::Alloc((FMemStackBase *)this,0x20,8);
  *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
  **(undefined8 **)&this->field_0x30 = puVar2;
  *(undefined8 **)&this->field_0x30 = puVar2 + 1;
  puVar2[1] = 0;
  puVar2[2] = param_1;
  *puVar2 = &___7FRHICommandDispatchIndirectComputeShader__6B_;
  *(uint *)(puVar2 + 3) = param_2;
  return;
}

// BuildAccelerationStructures @ 144a6b650

/* WARNING: Enum "EVertexElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIComputeCommandList::BuildAccelerationStructures
          (FRHIComputeCommandList *this,
          TArrayView<FRayTracingGeometryBuildParams_const_,int> *param_1,FRHIBufferRange *param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  ulong64 uVar4;
  bool bVar5;
  uint uVar6;
  IRHIComputeContext *pIVar7;
  void *_Dst;
  void *_Dst_00;
  undefined8 *puVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 *local_98;
  void *local_90;
  int iStack_88;
  undefined4 uStack_84;
  void *local_80;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 local_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  void *local_58;
  undefined8 uStack_50;
  void *local_48;
  undefined8 uStack_40;
  
  if ((GRHICommandList.bLatchedBypass) && ((this->field_0x29b & 0x20) != 0)) {
    pIVar7 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)this);
    local_68 = *(undefined4 *)&param_1->DataPtr;
    uStack_64 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
    iStack_60 = param_1->ArrayNum;
    uStack_5c = *(undefined4 *)&param_1->field_0xc;
    (**(code **)(pIVar7->_padding_ + 0x138))(pIVar7,&local_68,param_2);
    return;
  }
  iVar2 = param_1->ArrayNum;
  _Dst = FMemStackBase::Alloc((FMemStackBase *)this,(longlong)iVar2 << 5,8);
  memcpy(_Dst,param_1->DataPtr,(longlong)iVar2 << 5);
  uVar10 = 0;
  if (0 < iVar2) {
    lVar11 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar10 < iVar2) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(int *)((longlong)&(param_1->DataPtr->Segments).ArrayNum + lVar11) != 0) {
        uVar6 = 0;
        if ((int)uVar10 < iVar2) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        puVar8 = (undefined8 *)((longlong)&(param_1->DataPtr->Segments).DataPtr + lVar11);
        local_58 = (void *)*puVar8;
        uStack_50 = puVar8[1];
        iVar9 = (int)*(undefined8 *)((longlong)&(param_1->DataPtr->Segments).ArrayNum + lVar11);
        local_48 = local_58;
        uStack_40 = uStack_50;
        if (iVar9 == 0) {
          _Dst_00 = (void *)0x0;
        }
        else {
          _Dst_00 = FMemStackBase::Alloc((FMemStackBase *)this,(longlong)iVar9 * 0x28,8);
          memcpy(_Dst_00,local_58,(longlong)iVar9 * 0x28);
          if ((iVar9 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        puVar8 = (undefined8 *)(lVar11 + 0x10 + (longlong)_Dst);
        *puVar8 = _Dst_00;
        puVar8[1] = CONCAT44(uStack_84,iVar9);
        local_90 = _Dst_00;
        iStack_88 = iVar9;
      }
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 0x20;
    } while ((int)uVar10 < iVar2);
  }
  puVar8 = FMemStackBase::Alloc((FMemStackBase *)this,0x40,8);
  *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
  **(undefined8 **)&this->field_0x30 = puVar8;
  *(undefined8 **)&this->field_0x30 = puVar8 + 1;
  if ((iVar2 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar8[1] = 0;
  *puVar8 = &___7FRHICommandBuildAccelerationStructures__6B_;
  puVar8[2] = _Dst;
  puVar8[3] = CONCAT44(uStack_74,iVar2);
  uVar4 = param_2->Offset;
  puVar8[4] = param_2->Buffer;
  puVar8[5] = uVar4;
  puVar8[6] = param_2->Size;
  puVar8[7] = param_2->Buffer;
  local_80 = _Dst;
  iStack_78 = iVar2;
  FRHICommandListBase::RHIThreadFence((FRHICommandListBase *)this,SUB81(&local_98,0));
  if (local_98 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_98 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (local_98 != (undefined8 *)0x0)) {
      (**(code **)*local_98)(local_98,1);
    }
  }
  return;
}

// SetBatchedShaderParameters @ 144aafcf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIComputeCommandList::SetBatchedShaderParameters
          (FRHIComputeCommandList *this,FRHIComputeShader *param_1,
          FRHIBatchedShaderParameters *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uchar *puVar5;
  FRHIShaderParameter *pFVar6;
  FRHIShaderParameterResource *pFVar7;
  FRHIShaderParameterResource *pFVar8;
  code *pcVar9;
  bool bVar10;
  IRHIComputeContext *pIVar11;
  undefined8 *puVar12;
  undefined4 local_c8;
  undefined4 uStack_c4;
  uint uStack_bc;
  uint uStack_ac;
  undefined4 uStack_9c;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_6c;
  undefined4 uStack_5c;
  undefined4 uStack_4c;
  FRHIShaderParameterResource *local_48;
  undefined8 uStack_40;
  FRHIShaderParameterResource *local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  
  if (0 < (param_2->BindlessParameters).ArrayNum + (param_2->ResourceParameters).ArrayNum +
          (param_2->Parameters).ArrayNum) {
    if ((GRHICommandList.bLatchedBypass) && ((this->field_0x29b & 0x20) != 0)) {
      pIVar11 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)this);
      local_48 = (param_2->BindlessParameters).DataPtr;
      puVar5 = (param_2->ParametersData).DataPtr;
      local_38 = (param_2->ResourceParameters).DataPtr;
      uStack_40 = CONCAT44(uStack_9c,(param_2->BindlessParameters).ArrayNum);
      pFVar6 = (param_2->Parameters).DataPtr;
      uStack_30 = CONCAT44(uStack_8c,(param_2->ResourceParameters).ArrayNum);
      iStack_20 = (param_2->Parameters).ArrayNum;
      iStack_10 = (param_2->ParametersData).ArrayNum;
      local_88 = SUB84(pFVar6,0);
      uStack_84 = (undefined4)((ulonglong)pFVar6 >> 0x20);
      local_c8 = SUB84(puVar5,0);
      uStack_c4 = (undefined4)((ulonglong)puVar5 >> 0x20);
      local_28 = local_88;
      uStack_24 = uStack_84;
      local_18 = local_c8;
      uStack_14 = uStack_c4;
      (**(code **)(pIVar11->_padding_ + 0xa0))
                (pIVar11,param_1,&local_18,&local_28,&local_38,&local_48);
      param_2->Allocator->AttachedParameters = (FRHIBatchedShaderParameters *)0x0;
      (param_2->ParametersData).DataPtr = (uchar *)0x0;
      *(ulonglong *)&(param_2->ParametersData).ArrayNum = (ulonglong)uStack_bc << 0x20;
      (param_2->Parameters).DataPtr = (FRHIShaderParameter *)0x0;
      *(ulonglong *)&(param_2->Parameters).ArrayNum = (ulonglong)uStack_bc << 0x20;
      (param_2->ResourceParameters).DataPtr = (FRHIShaderParameterResource *)0x0;
      *(ulonglong *)&(param_2->ResourceParameters).ArrayNum = (ulonglong)uStack_bc << 0x20;
    }
    else {
      if ((FRHICommandListBase *)this != param_2->Allocator->RHICmdList) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("this == &ShaderParameters.Allocator.RHICmdList",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                            ,0x4f6,L"");
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      puVar12 = FMemStackBase::Alloc((FMemStackBase *)this,0x58,8);
      *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
      **(undefined8 **)&this->field_0x30 = puVar12;
      *(undefined8 **)&this->field_0x30 = puVar12 + 1;
      pFVar7 = (param_2->BindlessParameters).DataPtr;
      iVar1 = (param_2->ResourceParameters).ArrayNum;
      iVar2 = (param_2->BindlessParameters).ArrayNum;
      pFVar8 = (param_2->ResourceParameters).DataPtr;
      iVar3 = (param_2->Parameters).ArrayNum;
      puVar5 = (param_2->ParametersData).DataPtr;
      iVar4 = (param_2->ParametersData).ArrayNum;
      puVar12[5] = (param_2->Parameters).DataPtr;
      puVar12[6] = CONCAT44(uStack_5c,iVar3);
      puVar12[2] = param_1;
      *puVar12 = &___7__FRHICommandSetShaderParameters_VFRHIComputeShader____6B_;
      puVar12[9] = pFVar7;
      puVar12[10] = CONCAT44(uStack_ac,iVar2);
      puVar12[3] = puVar5;
      puVar12[4] = CONCAT44(uStack_6c,iVar4);
      puVar12[1] = 0;
      puVar12[7] = pFVar8;
      puVar12[8] = CONCAT44(uStack_4c,iVar1);
      param_2->Allocator->AttachedParameters = (FRHIBatchedShaderParameters *)0x0;
      (param_2->ParametersData).DataPtr = (uchar *)0x0;
      *(ulonglong *)&(param_2->ParametersData).ArrayNum = (ulonglong)uStack_ac << 0x20;
      (param_2->Parameters).DataPtr = (FRHIShaderParameter *)0x0;
      *(ulonglong *)&(param_2->Parameters).ArrayNum = (ulonglong)uStack_ac << 0x20;
      (param_2->ResourceParameters).DataPtr = (FRHIShaderParameterResource *)0x0;
      *(ulonglong *)&(param_2->ResourceParameters).ArrayNum = (ulonglong)uStack_ac << 0x20;
      uStack_bc = uStack_ac;
    }
    *(undefined4 *)&(param_2->BindlessParameters).DataPtr = 0;
    *(undefined4 *)((longlong)&(param_2->BindlessParameters).DataPtr + 4) = 0;
    (param_2->BindlessParameters).ArrayNum = 0;
    *(uint *)&(param_2->BindlessParameters).field_0xc = uStack_bc;
  }
  return;
}

// TransferResources @ 144da35f0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FRHIComputeCommandList::TransferResources
          (FRHIComputeCommandList *this,TArrayView<FTransferResourceParams_const_,int> *param_1)

{
  FRHIGPUMask FVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  code *pcVar5;
  FTransferResourceParams *pFVar6;
  bool bVar7;
  int iVar8;
  IRHIComputeContext *pIVar9;
  void *_Dst;
  undefined8 *puVar10;
  TArrayView<FRHITransitionInfo_const_,int> *pTVar11;
  int iVar12;
  FTransferResourceParams *pFVar13;
  longlong *plVar14;
  undefined4 uStack_27c;
  FTransferResourceParams *local_278;
  int iStack_270;
  undefined4 uStack_26c;
  FTransferResourceParams *local_268;
  int iStack_260;
  undefined4 uStack_25c;
  FRHITransitionInfo *local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  FRHITransitionInfo local_248;
  undefined1 local_218 [52];
  undefined2 local_1e4;
  FRHIBuffer *local_1e0;
  undefined1 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined1 local_1cc;
  undefined1 local_1c0;
  FRHITransitionInfo local_1b8;
  FRHITransitionInfo local_188;
  undefined1 local_158 [52];
  undefined2 local_124;
  FRHIBuffer *local_120;
  undefined1 local_118;
  undefined8 local_114;
  undefined1 local_10c;
  undefined1 local_100;
  FRHITransitionInfo local_f8;
  TArrayView<FRHITransitionInfo_const_,int> local_c8;
  TArrayView<FRHITransitionInfo_const_,int> local_b8;
  TArrayView<FRHITransitionInfo_const_,int> local_a8;
  TArrayView<FRHITransitionInfo_const_,int> local_98;
  TArrayView<FRHITransitionInfo_const_,int> local_88;
  TArrayView<FRHITransitionInfo_const_,int> local_78;
  TArrayView<FRHITransitionInfo_const_,int> local_68;
  TArrayView<FRHITransitionInfo_const_,int> local_58 [2];
  
  FVar1.GPUMask = *(uint *)&this->field_0x29c;
  if ((GRHIGlobals.NeedsExtraTransitions) && (this->field_0x69 != '\0')) {
    pFVar13 = param_1->DataPtr;
    pFVar6 = pFVar13 + param_1->ArrayNum;
    for (; pFVar13 != pFVar6; pFVar13 = pFVar13 + 1) {
      iVar8 = 1 << ((byte)pFVar13->SrcGPUIndex & 0x1f);
      iVar12 = 1 << ((byte)pFVar13->DestGPUIndex & 0x1f);
      if ((pFVar13->Texture).Reference == (FRHITexture *)0x0) {
        if (*(int *)&this->field_0x29c != iVar8) {
          *(int *)&this->field_0x29c = iVar8;
          if ((GRHICommandList.bLatchedBypass == false) || ((this->field_0x29b & 0x20) == 0)) {
            puVar10 = FMemStackBase::Alloc((FMemStackBase *)this,0x18,8);
            *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
            **(undefined8 **)&this->field_0x30 = puVar10;
            uVar2 = *(undefined4 *)&this->field_0x29c;
            *(undefined8 **)&this->field_0x30 = puVar10 + 1;
            puVar10[1] = 0;
            *puVar10 = &___7FRHICommandSetGPUMask__6B_;
            *(undefined4 *)(puVar10 + 2) = uVar2;
          }
          else {
            for (plVar14 = (longlong *)&this->field_0x50; plVar14 != (longlong *)&this->field_0x60;
                plVar14 = plVar14 + 1) {
              plVar3 = (longlong *)*plVar14;
              if (plVar3 != (longlong *)0x0) {
                (**(code **)(*plVar3 + 0xe8))(plVar3,*(undefined4 *)&this->field_0x29c);
              }
            }
          }
        }
        local_1e0 = (pFVar13->Buffer).Reference;
        local_278 = (FTransferResourceParams *)(local_218 + 0x30);
        iStack_270 = 1;
        local_a8._12_4_ = uStack_26c;
        local_a8.ArrayNum = 1;
        local_218[0x30] = true;
        local_218[0x31] = true;
        local_218._50_2_ = 0xffff;
        local_1e4 = 0xffff;
        local_1d8 = 2;
        local_1d4 = 0;
        local_1d0 = 0x80;
        local_1cc = 2;
        local_1c0 = 0;
        local_a8.DataPtr = (FRHITransitionInfo *)local_278;
        FRHICommandListBase::TransitionInternal
                  ((FRHICommandListBase *)this,&local_a8,AllowDuringRenderPass);
        if (*(int *)&this->field_0x29c != iVar12) {
          *(int *)&this->field_0x29c = iVar12;
          if ((GRHICommandList.bLatchedBypass == false) || ((this->field_0x29b & 0x20) == 0)) {
            puVar10 = FMemStackBase::Alloc((FMemStackBase *)this,0x18,8);
            *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
            **(undefined8 **)&this->field_0x30 = puVar10;
            uVar2 = *(undefined4 *)&this->field_0x29c;
            *(undefined8 **)&this->field_0x30 = puVar10 + 1;
            puVar10[1] = 0;
            *puVar10 = &___7FRHICommandSetGPUMask__6B_;
            *(undefined4 *)(puVar10 + 2) = uVar2;
          }
          else {
            for (plVar14 = (longlong *)&this->field_0x50; plVar14 != (longlong *)&this->field_0x60;
                plVar14 = plVar14 + 1) {
              plVar3 = (longlong *)*plVar14;
              if (plVar3 != (longlong *)0x0) {
                (**(code **)(*plVar3 + 0xe8))(plVar3,*(undefined4 *)&this->field_0x29c);
              }
            }
          }
        }
        local_1b8.field1_0x8 = (FRHITransitionInfo_u_8)(pFVar13->Buffer).Reference;
        pTVar11 = &local_98;
        local_98.DataPtr = &local_1b8;
        local_98._12_4_ = uStack_27c;
        local_98.ArrayNum = 1;
        local_1b8._padding_._0_4_ = 0xffffffff;
        local_1b8._padding_._4_2_ = 0xffff;
        local_1b8.Type = Buffer;
        local_1b8.AccessBefore = None;
        local_1b8.AccessAfter = CopyDest;
        local_1b8.Flags = IgnoreAfterState;
        local_1b8.CommitInfo.bIsSet = false;
      }
      else {
        if (*(int *)&this->field_0x29c != iVar8) {
          *(int *)&this->field_0x29c = iVar8;
          if ((GRHICommandList.bLatchedBypass == false) || ((this->field_0x29b & 0x20) == 0)) {
            puVar10 = FMemStackBase::Alloc((FMemStackBase *)this,0x18,8);
            *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
            **(undefined8 **)&this->field_0x30 = puVar10;
            uVar2 = *(undefined4 *)&this->field_0x29c;
            *(undefined8 **)&this->field_0x30 = puVar10 + 1;
            puVar10[1] = 0;
            *puVar10 = &___7FRHICommandSetGPUMask__6B_;
            *(undefined4 *)(puVar10 + 2) = uVar2;
          }
          else {
            for (plVar14 = (longlong *)&this->field_0x50; plVar14 != (longlong *)&this->field_0x60;
                plVar14 = plVar14 + 1) {
              plVar3 = (longlong *)*plVar14;
              if (plVar3 != (longlong *)0x0) {
                (**(code **)(*plVar3 + 0xe8))(plVar3,*(undefined4 *)&this->field_0x29c);
              }
            }
          }
        }
        local_248.field1_0x8.Resource = (FRHIResource *)(pFVar13->Texture).Reference;
        local_258 = &local_248;
        uStack_250 = 1;
        local_c8._12_4_ = uStack_24c;
        local_c8.ArrayNum = 1;
        local_248._padding_._0_4_ = 0xffffffff;
        local_248._padding_._4_2_ = 0xffff;
        local_248.Type = Texture;
        local_248.AccessBefore = None;
        local_248.AccessAfter = CopySrc;
        local_248.Flags = IgnoreAfterState;
        local_248.CommitInfo.bIsSet = false;
        local_c8.DataPtr = local_258;
        FRHICommandListBase::TransitionInternal
                  ((FRHICommandListBase *)this,&local_c8,AllowDuringRenderPass);
        if (*(int *)&this->field_0x29c != iVar12) {
          *(int *)&this->field_0x29c = iVar12;
          if ((GRHICommandList.bLatchedBypass == false) || ((this->field_0x29b & 0x20) == 0)) {
            puVar10 = FMemStackBase::Alloc((FMemStackBase *)this,0x18,8);
            *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
            **(undefined8 **)&this->field_0x30 = puVar10;
            uVar2 = *(undefined4 *)&this->field_0x29c;
            *(undefined8 **)&this->field_0x30 = puVar10 + 1;
            puVar10[1] = 0;
            *puVar10 = &___7FRHICommandSetGPUMask__6B_;
            *(undefined4 *)(puVar10 + 2) = uVar2;
          }
          else {
            for (plVar14 = (longlong *)&this->field_0x50; plVar14 != (longlong *)&this->field_0x60;
                plVar14 = plVar14 + 1) {
              plVar3 = (longlong *)*plVar14;
              if (plVar3 != (longlong *)0x0) {
                (**(code **)(*plVar3 + 0xe8))(plVar3,*(undefined4 *)&this->field_0x29c);
              }
            }
          }
        }
        local_218._8_8_ = (pFVar13->Texture).Reference;
        pTVar11 = &local_b8;
        local_268 = (FTransferResourceParams *)local_218;
        iStack_260 = 1;
        local_b8.ArrayNum = 1;
        local_b8._12_4_ = uStack_25c;
        local_218._0_4_ = 0xffffffff;
        local_218._4_2_ = 0xffff;
        local_218[0x10] = 1;
        local_218._20_4_ = 0;
        local_218._24_4_ = 0x2000;
        local_218[0x1c] = 2;
        local_218[0x28] = 0;
        local_b8.DataPtr = (FRHITransitionInfo *)local_268;
      }
      FRHICommandListBase::TransitionInternal
                ((FRHICommandListBase *)this,pTVar11,AllowDuringRenderPass);
    }
  }
  SetGPUMask(this,FVar1);
  if ((GRHICommandList.bLatchedBypass == false) || ((this->field_0x29b & 0x20) == 0)) {
    puVar10 = FMemStackBase::Alloc((FMemStackBase *)this,0x20,8);
    *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
    pFVar6 = param_1->DataPtr;
    iStack_260 = param_1->ArrayNum;
    uStack_25c = *(undefined4 *)&param_1->field_0xc;
    uVar4 = *(undefined8 *)&param_1->ArrayNum;
    **(undefined8 **)&this->field_0x30 = puVar10;
    *(undefined8 **)&this->field_0x30 = puVar10 + 1;
    iVar8 = (int)uVar4;
    local_268 = pFVar6;
    if (iVar8 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = FMemStackBase::Alloc((FMemStackBase *)this,(longlong)iVar8 * 0x48,8);
      memcpy(_Dst,pFVar6,(longlong)iVar8 * 0x48);
      if ((iVar8 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    *puVar10 = &___7FRHICommandTransferResources__6B_;
    puVar10[1] = 0;
    puVar10[2] = _Dst;
    puVar10[3] = CONCAT44(uStack_27c,iVar8);
  }
  else {
    pIVar9 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)this);
    local_278 = param_1->DataPtr;
    iStack_270 = param_1->ArrayNum;
    uStack_26c = *(undefined4 *)&param_1->field_0xc;
    (**(code **)(pIVar9->_padding_ + 0xf8))(pIVar9,&local_278);
  }
  if ((GRHIGlobals.NeedsExtraTransitions != false) && (this->field_0x69 != '\0')) {
    pFVar13 = param_1->DataPtr;
    pFVar6 = pFVar13 + param_1->ArrayNum;
    for (; pFVar13 != pFVar6; pFVar13 = pFVar13 + 1) {
      iVar8 = 1 << ((byte)pFVar13->SrcGPUIndex & 0x1f);
      iVar12 = 1 << ((byte)pFVar13->DestGPUIndex & 0x1f);
      if ((pFVar13->Texture).Reference == (FRHITexture *)0x0) {
        if (*(int *)&this->field_0x29c != iVar8) {
          *(int *)&this->field_0x29c = iVar8;
          if ((GRHICommandList.bLatchedBypass == false) || ((this->field_0x29b & 0x20) == 0)) {
            puVar10 = FMemStackBase::Alloc((FMemStackBase *)this,0x18,8);
            *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
            **(undefined8 **)&this->field_0x30 = puVar10;
            uVar2 = *(undefined4 *)&this->field_0x29c;
            *(undefined8 **)&this->field_0x30 = puVar10 + 1;
            puVar10[1] = 0;
            *puVar10 = &___7FRHICommandSetGPUMask__6B_;
            *(undefined4 *)(puVar10 + 2) = uVar2;
          }
          else {
            for (plVar14 = (longlong *)&this->field_0x50; plVar14 != (longlong *)&this->field_0x60;
                plVar14 = plVar14 + 1) {
              plVar3 = (longlong *)*plVar14;
              if (plVar3 != (longlong *)0x0) {
                (**(code **)(*plVar3 + 0xe8))(plVar3,*(undefined4 *)&this->field_0x29c);
              }
            }
          }
        }
        local_120 = (pFVar13->Buffer).Reference;
        local_268 = (FTransferResourceParams *)(local_158 + 0x30);
        iStack_260 = 1;
        local_68.ArrayNum = 1;
        local_68._12_4_ = uStack_25c;
        local_158[0x30] = true;
        local_158[0x31] = true;
        local_158._50_2_ = 0xffff;
        local_124 = 0xffff;
        local_118 = 2;
        local_114 = 0x80;
        local_10c = 2;
        local_100 = 0;
        local_68.DataPtr = (FRHITransitionInfo *)local_268;
        FRHICommandListBase::TransitionInternal
                  ((FRHICommandListBase *)this,&local_68,AllowDuringRenderPass);
        if (*(int *)&this->field_0x29c != iVar12) {
          *(int *)&this->field_0x29c = iVar12;
          if ((GRHICommandList.bLatchedBypass == false) || ((this->field_0x29b & 0x20) == 0)) {
            puVar10 = FMemStackBase::Alloc((FMemStackBase *)this,0x18,8);
            *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
            **(undefined8 **)&this->field_0x30 = puVar10;
            uVar2 = *(undefined4 *)&this->field_0x29c;
            *(undefined8 **)&this->field_0x30 = puVar10 + 1;
            puVar10[1] = 0;
            *puVar10 = &___7FRHICommandSetGPUMask__6B_;
            *(undefined4 *)(puVar10 + 2) = uVar2;
          }
          else {
            for (plVar14 = (longlong *)&this->field_0x50; plVar14 != (longlong *)&this->field_0x60;
                plVar14 = plVar14 + 1) {
              plVar3 = (longlong *)*plVar14;
              if (plVar3 != (longlong *)0x0) {
                (**(code **)(*plVar3 + 0xe8))(plVar3,*(undefined4 *)&this->field_0x29c);
              }
            }
          }
        }
        local_f8.field1_0x8 = (FRHITransitionInfo_u_8)(pFVar13->Buffer).Reference;
        pTVar11 = local_58;
        local_258 = &local_f8;
        uStack_250 = 1;
        local_58[0]._12_4_ = uStack_24c;
        local_58[0].ArrayNum = 1;
        local_f8._padding_._0_4_ = 0xffffffff;
        local_f8._padding_._4_2_ = 0xffff;
        local_f8.Type = Buffer;
        local_f8.AccessBefore = CopyDest;
        local_f8.AccessAfter = None;
        local_f8.Flags = IgnoreAfterState;
        local_f8.CommitInfo.bIsSet = false;
        local_58[0].DataPtr = local_258;
      }
      else {
        if (*(int *)&this->field_0x29c != iVar8) {
          *(int *)&this->field_0x29c = iVar8;
          if ((GRHICommandList.bLatchedBypass == false) || ((this->field_0x29b & 0x20) == 0)) {
            puVar10 = FMemStackBase::Alloc((FMemStackBase *)this,0x18,8);
            *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
            **(undefined8 **)&this->field_0x30 = puVar10;
            uVar2 = *(undefined4 *)&this->field_0x29c;
            *(undefined8 **)&this->field_0x30 = puVar10 + 1;
            puVar10[1] = 0;
            *puVar10 = &___7FRHICommandSetGPUMask__6B_;
            *(undefined4 *)(puVar10 + 2) = uVar2;
          }
          else {
            for (plVar14 = (longlong *)&this->field_0x50; plVar14 != (longlong *)&this->field_0x60;
                plVar14 = plVar14 + 1) {
              plVar3 = (longlong *)*plVar14;
              if (plVar3 != (longlong *)0x0) {
                (**(code **)(*plVar3 + 0xe8))(plVar3,*(undefined4 *)&this->field_0x29c);
              }
            }
          }
        }
        local_188.field1_0x8.Resource = (FRHIResource *)(pFVar13->Texture).Reference;
        local_88.DataPtr = &local_188;
        local_88._12_4_ = uStack_27c;
        local_88.ArrayNum = 1;
        local_188._padding_._0_4_ = 0xffffffff;
        local_188._padding_._4_2_ = 0xffff;
        local_188.Type = Texture;
        local_188.AccessBefore = CopySrc;
        local_188.AccessAfter = None;
        local_188.Flags = IgnoreAfterState;
        local_188.CommitInfo.bIsSet = false;
        FRHICommandListBase::TransitionInternal
                  ((FRHICommandListBase *)this,&local_88,AllowDuringRenderPass);
        if (*(int *)&this->field_0x29c != iVar12) {
          *(int *)&this->field_0x29c = iVar12;
          if ((GRHICommandList.bLatchedBypass == false) || ((this->field_0x29b & 0x20) == 0)) {
            puVar10 = FMemStackBase::Alloc((FMemStackBase *)this,0x18,8);
            *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
            **(undefined8 **)&this->field_0x30 = puVar10;
            uVar2 = *(undefined4 *)&this->field_0x29c;
            *(undefined8 **)&this->field_0x30 = puVar10 + 1;
            puVar10[1] = 0;
            *puVar10 = &___7FRHICommandSetGPUMask__6B_;
            *(undefined4 *)(puVar10 + 2) = uVar2;
          }
          else {
            for (plVar14 = (longlong *)&this->field_0x50; plVar14 != (longlong *)&this->field_0x60;
                plVar14 = plVar14 + 1) {
              plVar3 = (longlong *)*plVar14;
              if (plVar3 != (longlong *)0x0) {
                (**(code **)(*plVar3 + 0xe8))(plVar3,*(undefined4 *)&this->field_0x29c);
              }
            }
          }
        }
        local_158._8_8_ = (pFVar13->Texture).Reference;
        pTVar11 = &local_78;
        local_278 = (FTransferResourceParams *)local_158;
        iStack_270 = 1;
        local_78._12_4_ = uStack_26c;
        local_78.ArrayNum = 1;
        local_158._0_4_ = 0xffffffff;
        local_158._4_2_ = 0xffff;
        local_158[0x10] = 1;
        local_158._20_8_ = 0x2000;
        local_158[0x1c] = 2;
        local_158[0x28] = 0;
        local_78.DataPtr = (FRHITransitionInfo *)local_278;
      }
      FRHICommandListBase::TransitionInternal
                ((FRHICommandListBase *)this,pTVar11,AllowDuringRenderPass);
    }
  }
  SetGPUMask(this,FVar1);
  return;
}

// SetUniformBufferDynamicOffset @ 144f2ab90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIComputeCommandList::SetUniformBufferDynamicOffset
          (FRHIComputeCommandList *this,uchar param_1,uint param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  IRHICommandContext *pIVar1;
  undefined8 *puVar2;
  
  if ((GRHICommandList.bLatchedBypass) && ((this->field_0x29b & 0x20) != 0)) {
    pIVar1 = FRHICommandListBase::GetContext((FRHICommandListBase *)this);
    UNRECOVERED_JUMPTABLE = *(code **)(pIVar1->_padding_ + 0xc0);
                    /* WARNING: Could not recover jumptable at 0x000144f2abe2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(pIVar1,param_1,param_2,UNRECOVERED_JUMPTABLE);
    return;
  }
  puVar2 = FMemStackBase::Alloc((FMemStackBase *)this,0x18,8);
  *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
  **(undefined8 **)&this->field_0x30 = puVar2;
  *(undefined8 **)&this->field_0x30 = puVar2 + 1;
  puVar2[1] = 0;
  *(uchar *)((longlong)puVar2 + 0x14) = param_1;
  *puVar2 = &___7FRHICommandSetUniformBufferDynamicOffset__6B_;
  *(uint *)(puVar2 + 2) = param_2;
  return;
}

// DispatchComputeShaderBundle @ 144f8e9d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIComputeCommandList::DispatchComputeShaderBundle
          (FRHIComputeCommandList *this,
          TFunction<void___cdecl(FRHICommandDispatchComputeShaderBundle_&)> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int *piVar6;
  int *piVar7;
  longlong *plVar8;
  FRHICommandDispatchComputeShaderBundle local_58;
  
  this->field_0x67 = 1;
  if ((GRHICommandList.bLatchedBypass == false) || ((this->field_0x29b & 0x20) == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    local_58.bEmulated = true;
    local_58._padding_ = 0;
    local_58._padding_ = (longlong)&___7FRHICommandDispatchComputeShaderBundle__6B_;
    local_58.ShaderBundle = (FRHIShaderBundle *)0x0;
    local_58.RecordArgBuffer = (FRHIBuffer *)0x0;
    local_58.SharedBindlessParameters.DataPtr = (FRHIShaderParameterResource *)0x0;
    local_58.SharedBindlessParameters.ArrayNum = 0;
    local_58.Dispatches.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Dispatches.ArrayNum = 0;
    local_58.Dispatches.ArrayMax = 0;
    UE::Core::Private::Function::CheckCallable(*(void **)param_1);
    pcVar2 = *(code **)param_1;
    plVar8 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar8 = *(longlong **)&param_1->field_0x28;
    }
    uVar4 = (**(code **)(*plVar8 + 8))(plVar8);
    (*pcVar2)(uVar4,&local_58);
    FRHICommandDispatchComputeShaderBundle::Execute(&local_58,(FRHICommandListBase *)this);
    if (local_58.Dispatches.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Dispatches.AllocatorInstance.Data);
      return;
    }
  }
  else {
    puVar5 = FMemStackBase::Alloc((FMemStackBase *)this,0x48,8);
    *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
    **(undefined8 **)&this->field_0x30 = puVar5;
    *(undefined8 **)&this->field_0x30 = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &___7FRHICommandDispatchComputeShaderBundle__6B_;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    *(undefined4 *)(puVar5 + 5) = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    *(undefined1 *)(puVar5 + 8) = 1;
    UE::Core::Private::Function::CheckCallable(*(void **)param_1);
    pcVar2 = *(code **)param_1;
    plVar8 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar8 = *(longlong **)&param_1->field_0x28;
    }
    uVar4 = (**(code **)(*plVar8 + 8))(plVar8);
    (*pcVar2)(uVar4,puVar5);
    piVar6 = (int *)puVar5[6];
    iVar1 = *(int *)(puVar5 + 7);
    if ((iVar1 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    piVar7 = piVar6 + (longlong)iVar1 * 0x22;
    for (; piVar6 != piVar7; piVar6 = piVar6 + 0x22) {
      if (*piVar6 != -1) {
        if (((char)piVar6[0x1c] == '\0') &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((this != *(FRHIComputeCommandList **)(*(longlong *)(piVar6 + 10) + 8)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("this == &ShaderParameters.Allocator.RHICmdList",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                               ,0x4f6,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
  }
  return;
}

// DispatchGraphicsShaderBundle @ 144f901e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIComputeCommandList::DispatchGraphicsShaderBundle
          (FRHIComputeCommandList *this,
          TFunction<void___cdecl(FRHICommandDispatchGraphicsShaderBundle_&)> *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  FRHICommandDispatchGraphicsShaderBundle local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  this->field_0x67 = 1;
  if ((GRHICommandList.bLatchedBypass == false) || ((this->field_0x29b & 0x20) == 0)) {
    puVar3 = FMemStackBase::Alloc((FMemStackBase *)this,0x78,8);
    *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
    **(undefined8 **)&this->field_0x30 = puVar3;
    *(undefined8 **)&this->field_0x30 = puVar3 + 1;
    puVar3[1] = 0;
    *puVar3 = &___7FRHICommandDispatchGraphicsShaderBundle__6B_;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    *(undefined4 *)(puVar3 + 6) = 0;
    *(undefined4 *)((longlong)puVar3 + 0x34) = 0x3f800000;
    *(undefined4 *)(puVar3 + 7) = 0x3f800000;
    *(undefined4 *)((longlong)puVar3 + 0x3c) = 0x3f800000;
    *(undefined4 *)(puVar3 + 8) = 0x3f800000;
    *(undefined8 *)((longlong)puVar3 + 0x44) = 0x3f800000;
    *(undefined1 *)((longlong)puVar3 + 0x4c) = 0;
    puVar3[10] = 0;
    *(undefined4 *)(puVar3 + 0xb) = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    *(undefined1 *)(puVar3 + 0xe) = 1;
    UE::Core::Private::Function::CheckCallable(*(void **)param_1);
    pcVar1 = *(code **)param_1;
    plVar4 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_1->field_0x28;
    }
    uVar2 = (**(code **)(*plVar4 + 8))();
    (*pcVar1)(uVar2,puVar3);
  }
  else {
    local_a8.BundleState.BlendFactor[2] = 1.0;
    local_a8._padding_ = 0;
    local_a8._padding_ = (longlong)&___7FRHICommandDispatchGraphicsShaderBundle__6B_;
    local_a8.ShaderBundle = (FRHIShaderBundle *)0x0;
    local_a8.RecordArgBuffer = (FRHIBuffer *)0x0;
    local_a8.BundleState.DepthMin = ___xmm_3f8000003f8000003f80000000000000;
    local_a8.BundleState.DepthMax = _UNK_15090c6e4;
    local_a8.BundleState.BlendFactor[0] = _UNK_15090c6e8;
    local_a8.BundleState.BlendFactor[1] = _UNK_15090c6ec;
    local_a8.BundleState.ViewRect.field0_0x0._s_0.Min.field0_0x0 =
         (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
    local_a8.BundleState.ViewRect.field0_0x0._s_0.Max.field0_0x0 =
         (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
    local_a8.BundleState.BlendFactor[3] = 1.0;
    local_a8.BundleState.PrimitiveType = PT_TriangleList;
    local_a8.BundleState.StencilRef = '\0';
    local_a8.SharedBindlessParameters.DataPtr = (FRHIShaderParameterResource *)0x0;
    local_a8.SharedBindlessParameters.ArrayNum = 0;
    local_a8.Dispatches.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.Dispatches.ArrayNum = 0;
    local_a8.Dispatches.ArrayMax = 0;
    local_a8.bEmulated = true;
    UE::Core::Private::Function::CheckCallable(*(void **)param_1);
    pcVar1 = *(code **)param_1;
    plVar4 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_1->field_0x28;
    }
    uVar2 = (**(code **)(*plVar4 + 8))();
    (*pcVar1)(uVar2,&local_a8);
    FRHICommandDispatchGraphicsShaderBundle::Execute(&local_a8,(FRHICommandListBase *)this);
    if (local_a8.Dispatches.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Dispatches.AllocatorInstance.Data);
    }
  }
  return;
}

// BuildAccelerationStructures @ 145370880

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIComputeCommandList::BuildAccelerationStructures
          (FRHIComputeCommandList *this,TArrayView<FRayTracingSceneBuildParams_const_,int> *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  IRHIComputeContext *pIVar5;
  void *_Dst;
  void *pvVar6;
  undefined8 *puVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  undefined8 *local_a8;
  void *local_a0;
  int iStack_98;
  undefined4 uStack_94;
  void *local_90;
  int iStack_88;
  undefined4 uStack_84;
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  void *local_68;
  undefined8 uStack_60;
  void *local_58;
  undefined8 uStack_50;
  void *local_48;
  undefined8 uStack_40;
  
  if ((GRHICommandList.bLatchedBypass) && ((this->field_0x29b & 0x20) != 0)) {
    pIVar5 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)this);
    local_78 = *(undefined4 *)&param_1->DataPtr;
    uStack_74 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
    iStack_70 = param_1->ArrayNum;
    uStack_6c = *(undefined4 *)&param_1->field_0xc;
    (**(code **)(pIVar5->_padding_ + 0x130))(pIVar5,&local_78);
    return;
  }
  iVar8 = param_1->ArrayNum;
  uVar9 = (ulonglong)iVar8;
  _Dst = FMemStackBase::Alloc((FMemStackBase *)this,uVar9 * 0x70,8);
  memcpy(_Dst,param_1->DataPtr,uVar9 * 0x70);
  uVar10 = 0;
  if (0 < iVar8) {
    lVar11 = 0;
    do {
      iVar8 = (int)uVar9;
      uVar13 = ~uVar10 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar10 < iVar8) {
        uVar4 = uVar13;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)((longlong)&(param_1->DataPtr->ReferencedGeometries).ArrayNum + lVar11) != 0) {
        uVar4 = 0;
        if ((int)uVar10 < iVar8) {
          uVar4 = uVar13;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        puVar7 = (undefined8 *)
                 ((longlong)&(param_1->DataPtr->ReferencedGeometries).DataPtr + lVar11);
        local_68 = (void *)*puVar7;
        uStack_60 = puVar7[1];
        iVar12 = (int)*(undefined8 *)
                       ((longlong)&(param_1->DataPtr->ReferencedGeometries).ArrayNum + lVar11);
        local_58 = local_68;
        uStack_50 = uStack_60;
        if (iVar12 == 0) {
          pvVar6 = (void *)0x0;
        }
        else {
          pvVar6 = FMemStackBase::Alloc((FMemStackBase *)this,(longlong)iVar12 << 3,8);
          memcpy(pvVar6,local_68,(longlong)iVar12 << 3);
          if ((iVar12 < 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        puVar7 = (undefined8 *)((longlong)_Dst + lVar11 + 0x48);
        *puVar7 = pvVar6;
        puVar7[1] = CONCAT44(uStack_94,iVar12);
        local_a0 = pvVar6;
        iStack_98 = iVar12;
      }
      uVar9 = uVar9 & 0xffffffff;
      uVar4 = 0;
      if ((int)uVar10 < iVar8) {
        uVar4 = uVar13;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)((longlong)&(param_1->DataPtr->PerInstanceGeometries).ArrayNum + lVar11) != 0) {
        uVar4 = 0;
        if ((int)uVar10 < iVar8) {
          uVar4 = uVar13;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        puVar7 = (undefined8 *)
                 ((longlong)&(param_1->DataPtr->PerInstanceGeometries).DataPtr + lVar11);
        local_68 = (void *)*puVar7;
        uStack_60 = puVar7[1];
        iVar12 = (int)*(undefined8 *)
                       ((longlong)&(param_1->DataPtr->PerInstanceGeometries).ArrayNum + lVar11);
        local_48 = local_68;
        uStack_40 = uStack_60;
        if (iVar12 == 0) {
          pvVar6 = (void *)0x0;
        }
        else {
          pvVar6 = FMemStackBase::Alloc((FMemStackBase *)this,(longlong)iVar12 << 3,8);
          memcpy(pvVar6,local_68,(longlong)iVar12 << 3);
          if ((iVar12 < 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        puVar7 = (undefined8 *)((longlong)_Dst + lVar11 + 0x58);
        *puVar7 = pvVar6;
        puVar7[1] = CONCAT44(uStack_84,iVar12);
        local_90 = pvVar6;
        iStack_88 = iVar12;
      }
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 0x70;
    } while ((int)uVar10 < iVar8);
  }
  puVar7 = FMemStackBase::Alloc((FMemStackBase *)this,0x20,8);
  *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
  **(undefined8 **)&this->field_0x30 = puVar7;
  *(undefined8 **)&this->field_0x30 = puVar7 + 1;
  local_90 = _Dst;
  iStack_88 = iVar8;
  if ((iVar8 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  puVar7[1] = 0;
  *puVar7 = &___7FRHICommandBuildSceneAccelerationStructures__6B_;
  puVar7[2] = local_90;
  puVar7[3] = CONCAT44(uStack_84,iStack_88);
  FRHICommandListBase::RHIThreadFence((FRHICommandListBase *)this,SUB81(&local_a8,0));
  if (local_a8 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_a8 + 6);
    iVar8 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar8 == 1) && (local_a8 != (undefined8 *)0x0)) {
      (**(code **)*local_a8)(local_a8,1);
    }
  }
  return;
}

// CrossGPUTransfer @ 1454ea040

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FRHIComputeCommandList::CrossGPUTransfer
          (FRHIComputeCommandList *this,TArrayView<FTransferResourceParams_const_,int> *param_1,
          TArrayView<FCrossGPUTransferFence_*_const,int> *param_2,
          TArrayView<FCrossGPUTransferFence_*_const,int> *param_3)

{
  FRHITransitionInfo_u_8 *pFVar1;
  FRHIGPUMask FVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  code *pcVar6;
  FCrossGPUTransferFence **ppFVar7;
  FTransferResourceParams *_Src;
  bool bVar8;
  int iVar9;
  IRHIComputeContext *pIVar10;
  void *_Dst;
  void *_Dst_00;
  void *_Dst_01;
  undefined8 *puVar11;
  TArrayView<FRHITransitionInfo_const_,int> *pTVar12;
  longlong *plVar13;
  int iVar14;
  int iVar15;
  FRHITransitionInfo_u_8 *pFVar16;
  undefined1 *local_1f8;
  undefined4 uStack_1ec;
  undefined4 uStack_1dc;
  undefined4 uStack_1cc;
  undefined4 uStack_1bc;
  FRHITransitionInfo local_1b8;
  FRHITransitionInfo local_188;
  FRHITransitionInfo local_158;
  FRHITransitionInfo local_128;
  TArrayView<FRHITransitionInfo_const_,int> local_f8;
  TArrayView<FRHITransitionInfo_const_,int> local_e8;
  FCrossGPUTransferFence **local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  TArrayView<FRHITransitionInfo_const_,int> local_a8;
  TArrayView<FRHITransitionInfo_const_,int> local_98;
  FCrossGPUTransferFence **local_88;
  undefined8 uStack_80;
  FCrossGPUTransferFence **local_78;
  undefined8 uStack_70;
  FTransferResourceParams *local_68;
  undefined8 uStack_60;
  
  FVar2.GPUMask = *(uint *)&this->field_0x29c;
  if ((GRHIGlobals.NeedsExtraTransitions) && (this->field_0x69 != '\0')) {
    pFVar16 = (FRHITransitionInfo_u_8 *)param_1->DataPtr;
    pFVar1 = pFVar16 + (longlong)param_1->ArrayNum * 9;
    for (; pFVar16 != pFVar1; pFVar16 = pFVar16 + 9) {
      iVar9 = 1 << ((byte)*(uint *)(pFVar16 + 5) & 0x1f);
      if (*(int *)&this->field_0x29c != iVar9) {
        *(int *)&this->field_0x29c = iVar9;
        if ((GRHICommandList.bLatchedBypass == false) || ((this->field_0x29b & 0x20) == 0)) {
          puVar11 = FMemStackBase::Alloc((FMemStackBase *)this,0x18,8);
          *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
          **(undefined8 **)&this->field_0x30 = puVar11;
          uVar3 = *(undefined4 *)&this->field_0x29c;
          *(undefined8 **)&this->field_0x30 = puVar11 + 1;
          puVar11[1] = 0;
          *puVar11 = &___7FRHICommandSetGPUMask__6B_;
          *(undefined4 *)(puVar11 + 2) = uVar3;
        }
        else {
          for (plVar13 = (longlong *)&this->field_0x50; plVar13 != (longlong *)&this->field_0x60;
              plVar13 = plVar13 + 1) {
            plVar4 = (longlong *)*plVar13;
            if (plVar4 != (longlong *)0x0) {
              (**(code **)(*plVar4 + 0xe8))(plVar4,*(undefined4 *)&this->field_0x29c);
            }
          }
        }
      }
      if (pFVar16->Resource == (FRHIResource *)0x0) {
        local_188.field1_0x8 = pFVar16[1];
        pTVar12 = &local_e8;
        local_e8.DataPtr = &local_188;
        local_e8._12_4_ = uStack_1dc;
        local_e8.ArrayNum = 1;
        local_188._padding_._0_4_ = 0xffffffff;
        local_188._padding_._4_2_ = 0xffff;
        local_188.Type = Buffer;
        local_188.AccessBefore = None;
        local_188.AccessAfter = CopySrc;
        local_188.Flags = IgnoreAfterState;
        local_188.CommitInfo.bIsSet = false;
      }
      else {
        pTVar12 = &local_f8;
        local_f8.DataPtr = &local_1b8;
        local_f8._12_4_ = uStack_1ec;
        local_f8.ArrayNum = 1;
        local_1b8._padding_._0_4_ = 0xffffffff;
        local_1b8._padding_._4_2_ = 0xffff;
        local_1b8.Type = Texture;
        local_1b8.AccessBefore = None;
        local_1b8.AccessAfter = CopySrc;
        local_1b8.Flags = IgnoreAfterState;
        local_1b8.CommitInfo.bIsSet = false;
        local_1b8.field1_0x8.Resource = pFVar16->Resource;
      }
      FRHICommandListBase::TransitionInternal
                ((FRHICommandListBase *)this,pTVar12,AllowDuringRenderPass);
    }
  }
  local_1f8 = &this->field_0x69;
  SetGPUMask(this,FVar2);
  if ((GRHICommandList.bLatchedBypass == false) || ((this->field_0x29b & 0x20) == 0)) {
    puVar11 = FMemStackBase::Alloc((FMemStackBase *)this,0x40,8);
    ppFVar7 = param_3->DataPtr;
    uStack_80 = *(undefined8 *)&param_3->ArrayNum;
    *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
    uVar5 = *(undefined8 *)&param_3->ArrayNum;
    **(undefined8 **)&this->field_0x30 = puVar11;
    *(undefined8 **)&this->field_0x30 = puVar11 + 1;
    iVar9 = (int)uVar5;
    local_88 = ppFVar7;
    if (iVar9 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = FMemStackBase::Alloc((FMemStackBase *)this,(longlong)iVar9 << 3,8);
      memcpy(_Dst,ppFVar7,(longlong)iVar9 << 3);
      if ((iVar9 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    ppFVar7 = param_2->DataPtr;
    uStack_70 = *(undefined8 *)&param_2->ArrayNum;
    iVar14 = (int)*(undefined8 *)&param_2->ArrayNum;
    local_78 = ppFVar7;
    if (iVar14 == 0) {
      _Dst_00 = (void *)0x0;
    }
    else {
      _Dst_00 = FMemStackBase::Alloc((FMemStackBase *)this,(longlong)iVar14 << 3,8);
      memcpy(_Dst_00,ppFVar7,(longlong)iVar14 << 3);
      if ((iVar14 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    _Src = param_1->DataPtr;
    uStack_60 = *(undefined8 *)&param_1->ArrayNum;
    iVar15 = (int)*(undefined8 *)&param_1->ArrayNum;
    local_68 = _Src;
    if (iVar15 == 0) {
      _Dst_01 = (void *)0x0;
    }
    else {
      _Dst_01 = FMemStackBase::Alloc((FMemStackBase *)this,(longlong)iVar15 * 0x48,8);
      memcpy(_Dst_01,_Src,(longlong)iVar15 * 0x48);
      if ((iVar15 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    puVar11[1] = 0;
    *puVar11 = &___7FRHICommandCrossGPUTransfer__6B_;
    puVar11[2] = _Dst_01;
    puVar11[3] = CONCAT44(uStack_1dc,iVar15);
    puVar11[4] = _Dst_00;
    puVar11[5] = CONCAT44(uStack_1cc,iVar14);
    puVar11[6] = _Dst;
    puVar11[7] = CONCAT44(uStack_1bc,iVar9);
  }
  else {
    pIVar10 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)this);
    local_d8 = param_3->DataPtr;
    uStack_d0 = *(undefined8 *)&param_3->ArrayNum;
    local_c8 = *(undefined4 *)&param_2->DataPtr;
    uStack_c4 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
    iStack_c0 = param_2->ArrayNum;
    uStack_bc = *(undefined4 *)&param_2->field_0xc;
    local_b8 = *(undefined4 *)&param_1->DataPtr;
    uStack_b4 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
    iStack_b0 = param_1->ArrayNum;
    uStack_ac = *(undefined4 *)&param_1->field_0xc;
    (**(code **)(pIVar10->_padding_ + 0x110))(pIVar10,&local_b8,&local_c8,&local_d8);
  }
  if ((GRHIGlobals.NeedsExtraTransitions != false) && (*local_1f8 != '\0')) {
    pFVar16 = (FRHITransitionInfo_u_8 *)param_1->DataPtr;
    pFVar1 = pFVar16 + (longlong)param_1->ArrayNum * 9;
    for (; pFVar16 != pFVar1; pFVar16 = pFVar16 + 9) {
      iVar9 = 1 << ((byte)*(uint *)(pFVar16 + 5) & 0x1f);
      if (*(int *)&this->field_0x29c != iVar9) {
        *(int *)&this->field_0x29c = iVar9;
        if ((GRHICommandList.bLatchedBypass == false) || ((this->field_0x29b & 0x20) == 0)) {
          puVar11 = FMemStackBase::Alloc((FMemStackBase *)this,0x18,8);
          *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
          **(undefined8 **)&this->field_0x30 = puVar11;
          uVar3 = *(undefined4 *)&this->field_0x29c;
          *(undefined8 **)&this->field_0x30 = puVar11 + 1;
          puVar11[1] = 0;
          *puVar11 = &___7FRHICommandSetGPUMask__6B_;
          *(undefined4 *)(puVar11 + 2) = uVar3;
        }
        else {
          for (plVar13 = (longlong *)&this->field_0x50; plVar13 != (longlong *)&this->field_0x60;
              plVar13 = plVar13 + 1) {
            plVar4 = (longlong *)*plVar13;
            if (plVar4 != (longlong *)0x0) {
              (**(code **)(*plVar4 + 0xe8))(plVar4,*(undefined4 *)&this->field_0x29c);
            }
          }
        }
      }
      if (pFVar16->Resource == (FRHIResource *)0x0) {
        local_128.field1_0x8 = pFVar16[1];
        pTVar12 = &local_98;
        local_98.DataPtr = &local_128;
        local_98._12_4_ = uStack_1cc;
        local_98.ArrayNum = 1;
        local_128._padding_._0_4_ = 0xffffffff;
        local_128._padding_._4_2_ = 0xffff;
        local_128.Type = Buffer;
        local_128.AccessBefore = CopySrc;
        local_128.AccessAfter = None;
        local_128.Flags = IgnoreAfterState;
        local_128.CommitInfo.bIsSet = false;
      }
      else {
        pTVar12 = &local_a8;
        local_a8.DataPtr = &local_158;
        local_a8._12_4_ = uStack_1bc;
        local_a8.ArrayNum = 1;
        local_158._padding_._0_4_ = 0xffffffff;
        local_158._padding_._4_2_ = 0xffff;
        local_158.Type = Texture;
        local_158.AccessBefore = CopySrc;
        local_158.AccessAfter = None;
        local_158.Flags = IgnoreAfterState;
        local_158.CommitInfo.bIsSet = false;
        local_158.field1_0x8.Resource = pFVar16->Resource;
      }
      FRHICommandListBase::TransitionInternal
                ((FRHICommandListBase *)this,pTVar12,AllowDuringRenderPass);
    }
  }
  SetGPUMask(this,FVar2);
  return;
}

// CrossGPUTransferSignal @ 1454ea660

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FRHIComputeCommandList::CrossGPUTransferSignal
          (FRHIComputeCommandList *this,TArrayView<FTransferResourceParams_const_,int> *param_1,
          TArrayView<FCrossGPUTransferFence_*_const,int> *param_2)

{
  FRHITransitionInfo_u_8 *pFVar1;
  FRHIGPUMask FVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  code *pcVar6;
  FCrossGPUTransferFence **_Src;
  FTransferResourceParams *_Src_00;
  bool bVar7;
  int iVar8;
  IRHIComputeContext *pIVar9;
  void *_Dst;
  void *_Dst_00;
  undefined8 *puVar10;
  TArrayView<FRHITransitionInfo_const_,int> *pTVar11;
  longlong *plVar12;
  int iVar13;
  FRHITransitionInfo_u_8 *pFVar14;
  undefined1 *local_res20;
  undefined4 uStack_1ac;
  undefined4 uStack_19c;
  FRHITransitionInfo local_198;
  FRHITransitionInfo local_168;
  FRHITransitionInfo local_138;
  FRHITransitionInfo local_108;
  TArrayView<FRHITransitionInfo_const_,int> local_d8;
  TArrayView<FRHITransitionInfo_const_,int> local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  TArrayView<FRHITransitionInfo_const_,int> local_98;
  TArrayView<FRHITransitionInfo_const_,int> local_88;
  FCrossGPUTransferFence **local_78;
  undefined8 uStack_70;
  FTransferResourceParams *local_68;
  undefined8 uStack_60;
  
  FVar2.GPUMask = *(uint *)&this->field_0x29c;
  if ((GRHIGlobals.NeedsExtraTransitions) && (this->field_0x69 != '\0')) {
    pFVar14 = (FRHITransitionInfo_u_8 *)param_1->DataPtr;
    pFVar1 = pFVar14 + (longlong)param_1->ArrayNum * 9;
    for (; pFVar14 != pFVar1; pFVar14 = pFVar14 + 9) {
      iVar8 = 1 << ((byte)*(uint *)((longlong)pFVar14 + 0x2c) & 0x1f);
      if (*(int *)&this->field_0x29c != iVar8) {
        *(int *)&this->field_0x29c = iVar8;
        if ((GRHICommandList.bLatchedBypass == false) || ((this->field_0x29b & 0x20) == 0)) {
          puVar10 = FMemStackBase::Alloc((FMemStackBase *)this,0x18,8);
          *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
          **(undefined8 **)&this->field_0x30 = puVar10;
          uVar3 = *(undefined4 *)&this->field_0x29c;
          *(undefined8 **)&this->field_0x30 = puVar10 + 1;
          puVar10[1] = 0;
          *puVar10 = &___7FRHICommandSetGPUMask__6B_;
          *(undefined4 *)(puVar10 + 2) = uVar3;
        }
        else {
          for (plVar12 = (longlong *)&this->field_0x50; plVar12 != (longlong *)&this->field_0x60;
              plVar12 = plVar12 + 1) {
            plVar4 = (longlong *)*plVar12;
            if (plVar4 != (longlong *)0x0) {
              (**(code **)(*plVar4 + 0xe8))(plVar4,*(undefined4 *)&this->field_0x29c);
            }
          }
        }
      }
      if (pFVar14->Resource == (FRHIResource *)0x0) {
        local_168.field1_0x8 = pFVar14[1];
        pTVar11 = &local_c8;
        local_c8.DataPtr = &local_168;
        local_c8._12_4_ = uStack_19c;
        local_c8.ArrayNum = 1;
        local_168._padding_._0_4_ = 0xffffffff;
        local_168._padding_._4_2_ = 0xffff;
        local_168.Type = Buffer;
        local_168.AccessBefore = None;
        local_168.AccessAfter = CopyDest;
        local_168.Flags = IgnoreAfterState;
        local_168.CommitInfo.bIsSet = false;
      }
      else {
        local_d8.DataPtr = &local_198;
        local_d8._12_4_ = uStack_1ac;
        local_d8.ArrayNum = 1;
        local_198._padding_._0_4_ = 0xffffffff;
        local_198._padding_._4_2_ = 0xffff;
        local_198.Type = Texture;
        local_198.AccessBefore = None;
        local_198.AccessAfter = CopyDest;
        local_198.Flags = IgnoreAfterState;
        local_198.CommitInfo.bIsSet = false;
        pTVar11 = &local_d8;
        local_198.field1_0x8.Resource = pFVar14->Resource;
      }
      FRHICommandListBase::TransitionInternal
                ((FRHICommandListBase *)this,pTVar11,AllowDuringRenderPass);
    }
  }
  local_res20 = &this->field_0x69;
  SetGPUMask(this,FVar2);
  if ((GRHICommandList.bLatchedBypass == false) || ((this->field_0x29b & 0x20) == 0)) {
    puVar10 = FMemStackBase::Alloc((FMemStackBase *)this,0x30,8);
    _Src = param_2->DataPtr;
    uStack_70 = *(undefined8 *)&param_2->ArrayNum;
    *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
    uVar5 = *(undefined8 *)&param_2->ArrayNum;
    **(undefined8 **)&this->field_0x30 = puVar10;
    *(undefined8 **)&this->field_0x30 = puVar10 + 1;
    iVar8 = (int)uVar5;
    local_78 = _Src;
    if (iVar8 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = FMemStackBase::Alloc((FMemStackBase *)this,(longlong)iVar8 << 3,8);
      memcpy(_Dst,_Src,(longlong)iVar8 << 3);
      if ((iVar8 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    _Src_00 = param_1->DataPtr;
    uStack_60 = *(undefined8 *)&param_1->ArrayNum;
    iVar13 = (int)*(undefined8 *)&param_1->ArrayNum;
    local_68 = _Src_00;
    if (iVar13 == 0) {
      _Dst_00 = (void *)0x0;
    }
    else {
      _Dst_00 = FMemStackBase::Alloc((FMemStackBase *)this,(longlong)iVar13 * 0x48,8);
      memcpy(_Dst_00,_Src_00,(longlong)iVar13 * 0x48);
      if ((iVar13 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    puVar10[1] = 0;
    *puVar10 = &___7FRHICommandCrossGPUTransferSignal__6B_;
    puVar10[2] = _Dst_00;
    puVar10[3] = CONCAT44(uStack_19c,iVar13);
    puVar10[4] = _Dst;
    puVar10[5] = CONCAT44(uStack_1ac,iVar8);
  }
  else {
    pIVar9 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)this);
    local_b8 = *(undefined4 *)&param_2->DataPtr;
    uStack_b4 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
    iStack_b0 = param_2->ArrayNum;
    uStack_ac = *(undefined4 *)&param_2->field_0xc;
    local_a8 = *(undefined4 *)&param_1->DataPtr;
    uStack_a4 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
    iStack_a0 = param_1->ArrayNum;
    uStack_9c = *(undefined4 *)&param_1->field_0xc;
    (**(code **)(pIVar9->_padding_ + 0x118))(pIVar9,&local_a8,&local_b8);
  }
  if ((GRHIGlobals.NeedsExtraTransitions != false) && (*local_res20 != '\0')) {
    pFVar14 = (FRHITransitionInfo_u_8 *)param_1->DataPtr;
    pFVar1 = pFVar14 + (longlong)param_1->ArrayNum * 9;
    for (; pFVar14 != pFVar1; pFVar14 = pFVar14 + 9) {
      iVar8 = 1 << ((byte)*(uint *)((longlong)pFVar14 + 0x2c) & 0x1f);
      if (*(int *)&this->field_0x29c != iVar8) {
        *(int *)&this->field_0x29c = iVar8;
        if ((GRHICommandList.bLatchedBypass == false) || ((this->field_0x29b & 0x20) == 0)) {
          puVar10 = FMemStackBase::Alloc((FMemStackBase *)this,0x18,8);
          *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
          **(undefined8 **)&this->field_0x30 = puVar10;
          uVar3 = *(undefined4 *)&this->field_0x29c;
          *(undefined8 **)&this->field_0x30 = puVar10 + 1;
          puVar10[1] = 0;
          *puVar10 = &___7FRHICommandSetGPUMask__6B_;
          *(undefined4 *)(puVar10 + 2) = uVar3;
        }
        else {
          for (plVar12 = (longlong *)&this->field_0x50; plVar12 != (longlong *)&this->field_0x60;
              plVar12 = plVar12 + 1) {
            plVar4 = (longlong *)*plVar12;
            if (plVar4 != (longlong *)0x0) {
              (**(code **)(*plVar4 + 0xe8))(plVar4,*(undefined4 *)&this->field_0x29c);
            }
          }
        }
      }
      if (pFVar14->Resource == (FRHIResource *)0x0) {
        local_108.field1_0x8 = pFVar14[1];
        pTVar11 = &local_88;
        local_88.DataPtr = &local_108;
        local_88._12_4_ = uStack_1ac;
        local_88.ArrayNum = 1;
        local_108._padding_._0_4_ = 0xffffffff;
        local_108._padding_._4_2_ = 0xffff;
        local_108.Type = Buffer;
        local_108.AccessBefore = CopyDest;
        local_108.AccessAfter = None;
        local_108.Flags = IgnoreAfterState;
        local_108.CommitInfo.bIsSet = false;
      }
      else {
        pTVar11 = &local_98;
        local_98.DataPtr = &local_138;
        local_98._12_4_ = uStack_19c;
        local_98.ArrayNum = 1;
        local_138._padding_._0_4_ = 0xffffffff;
        local_138._padding_._4_2_ = 0xffff;
        local_138.Type = Texture;
        local_138.AccessBefore = CopyDest;
        local_138.AccessAfter = None;
        local_138.Flags = IgnoreAfterState;
        local_138.CommitInfo.bIsSet = false;
        local_138.field1_0x8.Resource = pFVar14->Resource;
      }
      FRHICommandListBase::TransitionInternal
                ((FRHICommandListBase *)this,pTVar11,AllowDuringRenderPass);
    }
  }
  SetGPUMask(this,FVar2);
  return;
}

// BeginUAVOverlap @ 1458deb70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIComputeCommandList::BeginUAVOverlap
          (FRHIComputeCommandList *this,FRHIUnorderedAccessView *param_1)

{
  IRHIComputeContext *pIVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FRHIUnorderedAccessView *local_res10 [3];
  FRHIUnorderedAccessView **local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = local_res10;
  uStack_10 = 1;
  local_res10[0] = param_1;
  if ((GRHICommandList.bLatchedBypass) && ((this->field_0x29b & 0x20) != 0)) {
    pIVar1 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)this);
    (**(code **)(pIVar1->_padding_ + 0x80))(pIVar1,&local_18);
    return;
  }
  puVar2 = FMemStackBase::Alloc((FMemStackBase *)this,8,8);
  *puVar2 = local_res10[0];
  puVar3 = FMemStackBase::Alloc((FMemStackBase *)this,0x20,8);
  *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
  **(undefined8 **)&this->field_0x30 = puVar3;
  *(undefined8 **)&this->field_0x30 = puVar3 + 1;
  puVar3[1] = 0;
  *puVar3 = &___7FRHICommandBeginSpecificUAVOverlap__6B_;
  puVar3[2] = puVar2;
  puVar3[3] = CONCAT44(uStack_c,1);
  return;
}

// EndUAVOverlap @ 1458ecf60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIComputeCommandList::EndUAVOverlap(FRHIComputeCommandList *this,FRHIUnorderedAccessView *param_1)

{
  IRHIComputeContext *pIVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FRHIUnorderedAccessView *local_res10 [3];
  FRHIUnorderedAccessView **local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = local_res10;
  uStack_10 = 1;
  local_res10[0] = param_1;
  if ((GRHICommandList.bLatchedBypass) && ((this->field_0x29b & 0x20) != 0)) {
    pIVar1 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)this);
    (**(code **)(pIVar1->_padding_ + 0x90))(pIVar1,&local_18);
    return;
  }
  puVar2 = FMemStackBase::Alloc((FMemStackBase *)this,8,8);
  *puVar2 = local_res10[0];
  puVar3 = FMemStackBase::Alloc((FMemStackBase *)this,0x20,8);
  *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
  **(undefined8 **)&this->field_0x30 = puVar3;
  *(undefined8 **)&this->field_0x30 = puVar3 + 1;
  puVar3[1] = 0;
  *puVar3 = &___7FRHICommandEndSpecificUAVOverlap__6B_;
  puVar3[2] = puVar2;
  puVar3[3] = CONCAT44(uStack_c,1);
  return;
}

