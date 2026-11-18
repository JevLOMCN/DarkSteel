// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// FRHIBreadcrumbEventManual<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>,FString_&> @ 14546b340

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRHIBreadcrumbEventManual * __thiscall
FRHIBreadcrumbEventManual::
FRHIBreadcrumbEventManual<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>,FString_&>
          (FRHIBreadcrumbEventManual *this,FRHIComputeCommandList *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>_const_*,std::tuple<FString_&>_>
          *param_2)

{
  byte bVar1;
  TRHIBreadcrumbDesc<3,FString> *pTVar2;
  FRHIBreadcrumbNode *pFVar3;
  FRHIBreadcrumbNode *pFVar4;
  code *pcVar5;
  bool bVar6;
  DWORD DVar7;
  FRHIBreadcrumbAllocator *this_00;
  TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>_> *pTVar8;
  FRHIBreadcrumbEventManual *pFVar9;
  
  this_00 = FRHIComputeCommandList::GetBreadcrumbAllocator(param_1);
  pTVar2 = (param_2->_Myfirst)._Val;
  if (pTVar2 == (TRHIBreadcrumbDesc<3,FString> *)0x0) {
    pTVar8 = (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>_> *)0x0;
  }
  else {
    pTVar8 = FRHIBreadcrumbAllocator::
             Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>_const_&,FString_&>
                       (this_00,this_00,pTVar2,(FString *)param_2->_padding_);
  }
  FRHIBreadcrumbNodeRef::FRHIBreadcrumbNodeRef(&this->Node,(FRHIBreadcrumbNode *)pTVar8);
  bVar1 = param_1->field_0x6a;
  if ((bVar1 != 0) && ((bVar1 & bVar1 - 1) != 0)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2a5,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FRHIBreadcrumbEventManual *)(*pcVar5)();
      return pFVar9;
    }
  }
  this->Pipeline = param_1->field_0x6a;
  DVar7 = GetCurrentThreadId();
  this->ThreadId = DVar7;
  if (this->Pipeline == None) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pipeline != ERHIPipeline::None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                       ,0xef,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FRHIBreadcrumbEventManual *)(*pcVar5)();
      return pFVar9;
    }
  }
  pFVar3 = (this->Node).Node;
  pFVar4 = *(FRHIBreadcrumbNode **)&param_1->field_0x2f8;
  if ((pFVar3->Parent != (FRHIBreadcrumbNode *)0x0) &&
     (pFVar3->Parent != FRHIBreadcrumbNode::Sentinel)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent == nullptr || Parent == FRHIBreadcrumbNode::Sentinel",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIBreadcrumbs.h"
                       ,0x282,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FRHIBreadcrumbEventManual *)(*pcVar5)();
      return pFVar9;
    }
  }
  pFVar3->Parent = pFVar4;
  if ((pFVar4 != (FRHIBreadcrumbNode *)0x0) && (pFVar4 != FRHIBreadcrumbNode::Sentinel)) {
    if (pFVar4->Allocator != pFVar3->Allocator) {
      FRHIBreadcrumbAllocatorArray::AddUnique(&pFVar3->Allocator->Parents,pFVar4->Allocator);
    }
  }
  FRHIComputeCommandList::BeginBreadcrumbCPU(param_1,(this->Node).Node,true);
  bVar1 = param_1->field_0x6a;
  if ((bVar1 != 0) && ((bVar1 & bVar1 - 1) != 0)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2a5,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FRHIBreadcrumbEventManual *)(*pcVar5)();
      return pFVar9;
    }
  }
  FRHIComputeCommandList::BeginBreadcrumbGPU(param_1,(this->Node).Node,param_1->field_0x6a);
  return this;
}

// FRHIBreadcrumbEventManual<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_> @ 14546b4e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRHIBreadcrumbEventManual * __thiscall
FRHIBreadcrumbEventManual::
FRHIBreadcrumbEventManual<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_>
          (FRHIBreadcrumbEventManual *this,FRHIComputeCommandList *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_const_*,std::tuple<>_> *param_2
          )

{
  byte bVar1;
  FRHIBreadcrumbNode *pFVar2;
  code *pcVar3;
  bool bVar4;
  DWORD DVar5;
  FRHIBreadcrumbAllocator *this_00;
  FRHIBreadcrumbNode *pFVar6;
  FRHIBreadcrumbEventManual *pFVar7;
  
  this_00 = FRHIComputeCommandList::GetBreadcrumbAllocator(param_1);
  pFVar6 = FRHIBreadcrumbAllocator::
           AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_>(this_00,param_2);
  FRHIBreadcrumbNodeRef::FRHIBreadcrumbNodeRef(&this->Node,pFVar6);
  bVar1 = param_1->field_0x6a;
  if ((bVar1 != 0) && ((bVar1 & bVar1 - 1) != 0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2a5,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FRHIBreadcrumbEventManual *)(*pcVar3)();
      return pFVar7;
    }
  }
  this->Pipeline = param_1->field_0x6a;
  DVar5 = GetCurrentThreadId();
  this->ThreadId = DVar5;
  if (this->Pipeline == None) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pipeline != ERHIPipeline::None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                       ,0xef,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FRHIBreadcrumbEventManual *)(*pcVar3)();
      return pFVar7;
    }
  }
  pFVar6 = (this->Node).Node;
  pFVar2 = *(FRHIBreadcrumbNode **)&param_1->field_0x2f8;
  if ((pFVar6->Parent != (FRHIBreadcrumbNode *)0x0) &&
     (pFVar6->Parent != FRHIBreadcrumbNode::Sentinel)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent == nullptr || Parent == FRHIBreadcrumbNode::Sentinel",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIBreadcrumbs.h"
                       ,0x282,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FRHIBreadcrumbEventManual *)(*pcVar3)();
      return pFVar7;
    }
  }
  pFVar6->Parent = pFVar2;
  if ((pFVar2 != (FRHIBreadcrumbNode *)0x0) && (pFVar2 != FRHIBreadcrumbNode::Sentinel)) {
    if (pFVar2->Allocator != pFVar6->Allocator) {
      FRHIBreadcrumbAllocatorArray::AddUnique(&pFVar6->Allocator->Parents,pFVar2->Allocator);
    }
  }
  FRHIComputeCommandList::BeginBreadcrumbCPU(param_1,(this->Node).Node,true);
  bVar1 = param_1->field_0x6a;
  if ((bVar1 != 0) && ((bVar1 & bVar1 - 1) != 0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2a5,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FRHIBreadcrumbEventManual *)(*pcVar3)();
      return pFVar7;
    }
  }
  FRHIComputeCommandList::BeginBreadcrumbGPU(param_1,(this->Node).Node,param_1->field_0x6a);
  return this;
}

// End @ 1454a1560

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRHIBreadcrumbEventManual::End(FRHIBreadcrumbEventManual *this,FRHIComputeCommandList *param_1)

{
  byte bVar1;
  ERHIPipeline EVar2;
  code *pcVar3;
  bool bVar4;
  DWORD DVar5;
  TSharedPtr<FRHIBreadcrumbAllocator,1> *pTVar6;
  FString local_48;
  FString local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  FSharedReferencer<1> local_18 [2];
  
  if (((this->Node).Node == (FRHIBreadcrumbNode *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Node",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                         ,0xf9,L"Manual breadcrumb was already ended."), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar1 = param_1->field_0x6a;
  if (((bVar1 != 0) && ((bVar1 & bVar1 - 1) != 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x2a5,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EVar2 = param_1->field_0x6a;
  if (this->Pipeline != EVar2) {
    if (((EVar2 != None) && ((EVar2 & EVar2 - Graphics) != None)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x2a5,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    GetRHIPipelineName(&local_38,param_1->field_0x6a);
    GetRHIPipelineName(&local_48,this->Pipeline);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pipeline == RHICmdList.GetPipeline()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                       ,0xfe,
                       L"Manual breadcrumb was started and ended on different pipelines. Start: %s, End: %s"
                      );
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  DVar5 = GetCurrentThreadId();
  if ((this->ThreadId != DVar5) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ThreadId == FPlatformTLS::GetCurrentThreadId()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                         ,0x100,L"Manual breadcrumbs must be started and ended on the same thread.")
     , bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar1 = param_1->field_0x6a;
  if (((bVar1 != 0) && ((bVar1 & bVar1 - 1) != 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x2a5,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHIComputeCommandList::EndBreadcrumbGPU(param_1,(this->Node).Node,param_1->field_0x6a);
  FRHIComputeCommandList::EndBreadcrumbCPU(param_1,(this->Node).Node,true);
  (this->Node).Node = (FRHIBreadcrumbNode *)0x0;
  pTVar6 = &(this->Node).AllocatorRef;
  local_18[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  uStack_20 = 0;
  if (pTVar6 != (TSharedPtr<FRHIBreadcrumbAllocator,1> *)&uStack_20) {
    pTVar6->Object = (FRHIBreadcrumbAllocator *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Node).AllocatorRef.SharedReferenceCount,local_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18[0].ReferenceController);
  return;
}

