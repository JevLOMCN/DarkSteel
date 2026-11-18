// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 1

// ~TOptional<FRHIBreadcrumbScope> @ 14ea969a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TOptional<FRHIBreadcrumbScope>::~TOptional<FRHIBreadcrumbScope>
          (TOptional<FRHIBreadcrumbScope> *this)

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
  undefined8 uStack_48;
  FRHIBreadcrumbNode *pFStack_40;
  ERHIPipeline EStack_38;
  undefined7 uStack_37;
  
  if (this->bIsSet == false) {
    return;
  }
  if ((this->TypedValue).Node != (FRHIBreadcrumbNode *)0x0) {
    for (EVar10 = ((this->TypedValue).RHICmdList)->field_0x6a; EVar10 != None;
        EVar10 = EVar10 & EVar10 - Graphics) {
      pFVar3 = (this->TypedValue).Node;
      this_00 = (FRHICommandListBase *)(this->TypedValue).RHICmdList;
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
      if (&uStack_48 != puVar1) {
        *puVar1 = pFVar3->Parent;
        *(undefined1 *)(puVar1 + 1) = 1;
      }
      pFStack_40 = pFVar3;
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
        pFVar7[1]._padding_ = (longlong)pFStack_40;
        pFVar7[1].Next = (FRHICommandBase *)CONCAT71(uStack_37,EStack_38);
      }
      else {
        `FRHIComputeCommandList::EndBreadcrumbGPU'::__l2::<lambda_1>::operator()
                  (&pFStack_40,this_00);
      }
    }
    FRHIComputeCommandList::EndBreadcrumbCPU
              ((this->TypedValue).RHICmdList,(this->TypedValue).Node,true);
  }
  return;
}

