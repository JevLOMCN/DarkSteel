// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FRHIBreadcrumbScope @ 1447f4e50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRHIBreadcrumbScope * __thiscall
FRHIBreadcrumbScope::FRHIBreadcrumbScope
          (FRHIBreadcrumbScope *this,FRHIComputeCommandList *param_1,FRHIBreadcrumbNode *param_2)

{
  atomic<unsigned_char> aVar1;
  FRHIBreadcrumbNode *pFVar2;
  code *pcVar3;
  bool bVar4;
  atomic<unsigned_char> aVar5;
  FRHIBreadcrumbScope *pFVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  byte bVar10;
  byte bVar11;
  undefined8 local_48;
  FRHIBreadcrumbNode *local_40;
  byte bStack_38;
  undefined7 uStack_37;
  
  this->RHICmdList = param_1;
  this->Node = param_2;
  if (param_2 == (FRHIBreadcrumbNode *)0x0) {
    return this;
  }
  pFVar2 = *(FRHIBreadcrumbNode **)&param_1->field_0x2f8;
  if (((param_2->Parent != (FRHIBreadcrumbNode *)0x0) &&
      (param_2->Parent != FRHIBreadcrumbNode::Sentinel)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent == nullptr || Parent == FRHIBreadcrumbNode::Sentinel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIBreadcrumbs.h"
                         ,0x282,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FRHIBreadcrumbScope *)(*pcVar3)();
    return pFVar6;
  }
  param_2->Parent = pFVar2;
  if ((pFVar2 != (FRHIBreadcrumbNode *)0x0) && (pFVar2 != FRHIBreadcrumbNode::Sentinel)) {
    if (pFVar2->Allocator != param_2->Allocator) {
      FRHIBreadcrumbAllocatorArray::AddUnique(&param_2->Allocator->Parents,pFVar2->Allocator);
    }
  }
  FRHIComputeCommandList::BeginBreadcrumbCPU(param_1,param_2,true);
  bVar10 = param_1->field_0x6a;
  if (bVar10 == 0) {
    return this;
  }
  while( true ) {
    bVar11 = -bVar10 & bVar10;
    if ((param_2 == FRHIBreadcrumbNode::Sentinel) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Breadcrumb && Breadcrumb != FRHIBreadcrumbNode::Sentinel",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0xcf8,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FRHIBreadcrumbScope *)(*pcVar3)();
      return pFVar6;
    }
    if (((bVar11 == 0) || ((bVar11 & bVar11 - 1) != 0)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSingleRHIPipeline(Pipeline)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0xcf9,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FRHIBreadcrumbScope *)(*pcVar3)();
      return pFVar6;
    }
    if (((bVar11 & param_1->field_0x6a) != bVar11) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumHasAllFlags(ActivePipelines, Pipeline)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0xcfa,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FRHIBreadcrumbScope *)(*pcVar3)();
      return pFVar6;
    }
    aVar5 = param_2->BeginPipes;
    do {
      LOCK();
      aVar1 = param_2->BeginPipes;
      bVar4 = aVar5 == aVar1;
      if (bVar4) {
        param_2->BeginPipes = (atomic<unsigned_char>)((byte)aVar5 | bVar11);
        aVar1 = aVar5;
      }
      aVar5 = aVar1;
      UNLOCK();
    } while (!bVar4);
    if (((bVar11 & (byte)aVar5) != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!EnumHasAnyFlags(ERHIPipeline(Breadcrumb->BeginPipes.fetch_or(std::underlying_type_t<ERHIPipeline>(Pipeline))), Pipeline)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0xcfc,L""), bVar4)) break;
    FRHIBreadcrumbAllocatorArray::AddUnique
              ((FRHIBreadcrumbAllocatorArray *)&param_1->field_0x160,param_2->Allocator);
    if ((bVar11 == 1) || (bVar11 != 2)) {
      lVar9 = 8;
      lVar7 = 0;
    }
    else {
      lVar9 = 0x38;
      lVar7 = 0x30;
    }
    *(FRHIBreadcrumbNode **)(&param_1->field_0x100 + lVar7) = param_2;
    puVar8 = (undefined8 *)(&param_1->field_0x100 + lVar9);
    if (&local_48 != puVar8) {
      *puVar8 = param_2;
      *(undefined1 *)(puVar8 + 1) = 1;
    }
    local_40 = param_2;
    bStack_38 = bVar11;
    if (((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
       (param_1->field_0x64 == '\0')) {
      puVar8 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x28,8);
      *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
      **(undefined8 **)&param_1->field_0x30 = puVar8;
      *(undefined8 **)&param_1->field_0x30 = puVar8 + 1;
      puVar8[1] = 0;
      puVar8[4] = L"BeginBreadcrumbGPU";
      *puVar8 = &
                ___7__TRHILambdaCommand_VFRHIComputeCommandList__V<lambda_1>__1__BeginBreadcrumbGPU_1_QEAAXPEAUFRHIBreadcrumbNode__W4ERHIPipeline___Z___6B_
      ;
      puVar8[2] = local_40;
      puVar8[3] = CONCAT71(uStack_37,bStack_38);
    }
    else {
      `FRHIComputeCommandList::BeginBreadcrumbGPU'::__l2::<lambda_1>::operator()
                (&local_40,(FRHICommandListBase *)param_1);
    }
    bVar10 = bVar10 & bVar10 - 1;
    if (bVar10 == 0) {
      return this;
    }
  }
  pcVar3 = (code *)swi(3);
  pFVar6 = (FRHIBreadcrumbScope *)(*pcVar3)();
  return pFVar6;
}

// ~FRHIBreadcrumbScope @ 1447f66b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FRHIBreadcrumbScope::~FRHIBreadcrumbScope(FRHIBreadcrumbScope *this)

{
  undefined8 *puVar1;
  atomic<unsigned_char> aVar2;
  FRHIBreadcrumbNode *pFVar3;
  FRHICommandListBase *this_00;
  code *pcVar4;
  bool bVar5;
  atomic<unsigned_char> aVar6;
  FRHICommandBase *pFVar7;
  longlong lVar8;
  longlong lVar9;
  ERHIPipeline EVar10;
  ERHIPipeline EVar11;
  undefined8 local_48;
  FRHIBreadcrumbNode *local_40;
  ERHIPipeline EStack_38;
  undefined7 uStack_37;
  
  if (this->Node != (FRHIBreadcrumbNode *)0x0) {
    for (EVar10 = this->RHICmdList->field_0x6a; EVar10 != None; EVar10 = EVar10 & EVar10 - Graphics)
    {
      pFVar3 = this->Node;
      this_00 = (FRHICommandListBase *)this->RHICmdList;
      EVar11 = -EVar10 & EVar10;
      if (((pFVar3 == (FRHIBreadcrumbNode *)0x0) || (pFVar3 == FRHIBreadcrumbNode::Sentinel)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Breadcrumb && Breadcrumb != FRHIBreadcrumbNode::Sentinel",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                             ,0xd15,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (((EVar11 == None) || ((EVar11 & EVar11 - Graphics) != None)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSingleRHIPipeline(Pipeline)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                             ,0xd16,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (((this_00->ActivePipelines & EVar11) != EVar11) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("EnumHasAllFlags(ActivePipelines, Pipeline)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                             ,0xd17,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      aVar6 = pFVar3->EndPipes;
      do {
        LOCK();
        aVar2 = pFVar3->EndPipes;
        bVar5 = aVar6 == aVar2;
        if (bVar5) {
          pFVar3->EndPipes = (atomic<unsigned_char>)((byte)aVar6 | EVar11);
          aVar2 = aVar6;
        }
        aVar6 = aVar2;
        UNLOCK();
      } while (!bVar5);
      if (((EVar11 & (byte)aVar6) != None) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!EnumHasAnyFlags(ERHIPipeline(Breadcrumb->EndPipes.fetch_or(std::underlying_type_t<ERHIPipeline>(Pipeline))), Pipeline)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                             ,0xd19,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FRHIBreadcrumbAllocatorArray::AddUnique(&this_00->BreadcrumbAllocatorRefs,pFVar3->Allocator);
      if ((EVar11 == Graphics) || (EVar11 != AsyncCompute)) {
        lVar8 = 0x100;
        lVar9 = 0x108;
      }
      else {
        lVar8 = 0x130;
        lVar9 = 0x138;
      }
      *(FRHIBreadcrumbNode **)((longlong)&(this_00->MemManager).Top + lVar8) = pFVar3->Parent;
      puVar1 = (undefined8 *)((longlong)&(this_00->MemManager).Top + lVar9);
      if (&local_48 != puVar1) {
        *puVar1 = pFVar3->Parent;
        *(undefined1 *)(puVar1 + 1) = 1;
      }
      local_40 = pFVar3;
      EStack_38 = EVar11;
      if (((GRHICommandList.bLatchedBypass == false) ||
          ((this_00->PersistentState).bImmediate == '\0')) && (this_00->bExecuting == false)) {
        pFVar7 = FMemStackBase::Alloc((FMemStackBase *)this_00,0x28,8);
        this_00->NumCommands = this_00->NumCommands + 1;
        *this_00->CommandLink = pFVar7;
        this_00->CommandLink = &pFVar7->Next;
        pFVar7->Next = (FRHICommandBase *)0x0;
        pFVar7[2]._padding_ = (longlong)L"EndBreadcrumbGPU";
        pFVar7->_padding_ =
             (longlong)
             &
             ___7__TRHILambdaCommand_VFRHIComputeCommandList__V<lambda_1>__1__EndBreadcrumbGPU_1_QEAAXPEAUFRHIBreadcrumbNode__W4ERHIPipeline___Z___6B_
        ;
        pFVar7[1]._padding_ = (longlong)local_40;
        pFVar7[1].Next = (FRHICommandBase *)CONCAT71(uStack_37,EStack_38);
      }
      else {
        `FRHIComputeCommandList::EndBreadcrumbGPU'::__l2::<lambda_1>::operator()(&local_40,this_00);
      }
    }
    FRHIComputeCommandList::EndBreadcrumbCPU(this->RHICmdList,this->Node,true);
  }
  return;
}

