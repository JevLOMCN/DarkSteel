// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 2

// FRHIBreadcrumbEventManual<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>,FString_&&> @ 145d73dc0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRHIBreadcrumbEventManual * __thiscall
FRHIBreadcrumbEventManual::
FRHIBreadcrumbEventManual<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>,FString_&&>
          (FRHIBreadcrumbEventManual *this,FRHIComputeCommandList *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>_const_*,std::tuple<FString_&&>_>
          *param_2)

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
           AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>,FString_&&>
                     (this_00,param_2);
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

// FRHIBreadcrumbEventManual<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>,FString_const_&> @ 145d73f50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRHIBreadcrumbEventManual * __thiscall
FRHIBreadcrumbEventManual::
FRHIBreadcrumbEventManual<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>,FString_const_&>
          (FRHIBreadcrumbEventManual *this,FRHIComputeCommandList *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>_const_*,std::tuple<FString_const_&>_>
          *param_2)

{
  byte bVar1;
  FRHIBreadcrumbAllocator *this_00;
  undefined8 *puVar2;
  FRHIBreadcrumbNode *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  DWORD DVar7;
  FRHIBreadcrumbAllocator *pFVar8;
  FRHIBreadcrumbNode *pFVar9;
  FRHIBreadcrumbEventManual *pFVar10;
  wchar_t *_Source;
  FMetadataSerializer local_38;
  
  pFVar8 = FRHIComputeCommandList::GetBreadcrumbAllocator(param_1);
  this_00 = (FRHIBreadcrumbAllocator *)(param_2->_Myfirst)._Val;
  if (this_00 == (FRHIBreadcrumbAllocator *)0x0) {
    pFVar9 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    puVar2 = (undefined8 *)param_2->_padding_;
    pFVar9 = FMemStackBase::Alloc(&pFVar8->Inner,0x150,8);
    pFVar9->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar9->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar9->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar9->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar9->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar9->Allocator = pFVar8;
    pFVar9->Data = (FRHIBreadcrumbData *)this_00;
    pFVar9->TraceCpuSpecId = 0;
    pFVar9->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar6 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar9->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar9->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar9->ID = uVar6;
    if (*(int *)(puVar2 + 1) == 0) {
      _Source = L"";
    }
    else {
      _Source = (wchar_t *)*puVar2;
    }
    wcsncpy((wchar_t *)(pFVar9 + 1),_Source,0x7f);
    *(undefined2 *)((longlong)pFVar9[4].NextPtrs.Elements + 0xe) = 0;
    pFVar9->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__02VFString___Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar9[4].Allocator = this_00;
    uVar6 = UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>::GetTraceCpuSpec
                      ((TRHIBreadcrumbDesc<3,FString> *)this_00);
    pFVar9->TraceCpuSpecId = uVar6;
    if (uVar6 != 0) {
      UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_38);
      UE::RHI::GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(wchar_t *)(pFVar9 + 1));
      uVar6 = FCpuProfilerTrace::OutputMetadata(pFVar9->TraceCpuSpecId,&local_38.CborData);
      pFVar9->TraceCpuMetadataId = uVar6;
      UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_38);
    }
  }
  FRHIBreadcrumbNodeRef::FRHIBreadcrumbNodeRef(&this->Node,pFVar9);
  bVar1 = param_1->field_0x6a;
  if (((bVar1 != 0) && ((bVar1 & bVar1 - 1) != 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x2a5,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FRHIBreadcrumbEventManual *)(*pcVar4)();
    return pFVar10;
  }
  this->Pipeline = param_1->field_0x6a;
  DVar7 = GetCurrentThreadId();
  this->ThreadId = DVar7;
  if ((this->Pipeline == None) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pipeline != ERHIPipeline::None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                         ,0xef,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FRHIBreadcrumbEventManual *)(*pcVar4)();
    return pFVar10;
  }
  pFVar9 = (this->Node).Node;
  pFVar3 = *(FRHIBreadcrumbNode **)&param_1->field_0x2f8;
  if (((pFVar9->Parent != (FRHIBreadcrumbNode *)0x0) &&
      (pFVar9->Parent != FRHIBreadcrumbNode::Sentinel)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent == nullptr || Parent == FRHIBreadcrumbNode::Sentinel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIBreadcrumbs.h"
                         ,0x282,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FRHIBreadcrumbEventManual *)(*pcVar4)();
    return pFVar10;
  }
  pFVar9->Parent = pFVar3;
  if ((pFVar3 != (FRHIBreadcrumbNode *)0x0) && (pFVar3 != FRHIBreadcrumbNode::Sentinel)) {
    if (pFVar3->Allocator != pFVar9->Allocator) {
      FRHIBreadcrumbAllocatorArray::AddUnique(&pFVar9->Allocator->Parents,pFVar3->Allocator);
    }
  }
  FRHIComputeCommandList::BeginBreadcrumbCPU(param_1,(this->Node).Node,true);
  bVar1 = param_1->field_0x6a;
  if (((bVar1 != 0) && ((bVar1 & bVar1 - 1) != 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x2a5,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FRHIBreadcrumbEventManual *)(*pcVar4)();
    return pFVar10;
  }
  FRHIComputeCommandList::BeginBreadcrumbGPU(param_1,(this->Node).Node,param_1->field_0x6a);
  return this;
}

