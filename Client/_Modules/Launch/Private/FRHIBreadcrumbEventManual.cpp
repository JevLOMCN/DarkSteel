// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Launch
// Functions: 2

// FRHIBreadcrumbEventManual<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9,std::tuple<wchar_t_const_(&)[13],unsigned___int64>_>,unsigned___int64_&> @ 148d98600

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRHIBreadcrumbEventManual * __thiscall
FRHIBreadcrumbEventManual::
FRHIBreadcrumbEventManual<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9,std::tuple<wchar_t_const_(&)[13],unsigned___int64>_>,unsigned___int64_&>
          (FRHIBreadcrumbEventManual *this,FRHIComputeCommandList *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9,std::tuple<wchar_t_const_(&)[13],unsigned___int64>_>_const_*,std::tuple<unsigned___int64_&>_>
          *param_2)

{
  byte bVar1;
  TRHIBreadcrumbDesc<9,std::tuple<wchar_t_const_(&)[13],unsigned___int64>_> *pTVar2;
  ulong64 *puVar3;
  FRHIBreadcrumbNode *pFVar4;
  FRHIBreadcrumbNode *pFVar5;
  code *pcVar6;
  bool bVar7;
  DWORD DVar8;
  FRHIBreadcrumbAllocator *pFVar9;
  TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9,std::tuple<wchar_t_const_(&)[13],unsigned___int64>_>_>
  *pTVar10;
  FRHIBreadcrumbEventManual *pFVar11;
  
  pFVar9 = FRHIComputeCommandList::GetBreadcrumbAllocator(param_1);
  pTVar2 = (param_2->_Myfirst)._Val;
  if (pTVar2 == (TRHIBreadcrumbDesc<9,std::tuple<wchar_t_const_(&)[13],unsigned___int64>_> *)0x0) {
    pTVar10 = (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9,std::tuple<wchar_t_const_(&)[13],unsigned___int64>_>_>
               *)0x0;
  }
  else {
    puVar3 = (ulong64 *)param_2->_padding_;
    pTVar10 = FMemStackBase::Alloc(&pFVar9->Inner,0x58,8);
    pTVar10 = UE::RHI::Breadcrumbs::Private::
              TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9,std::tuple<wchar_t_const_(&)[13],unsigned___int64>_>_>
              ::
              TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9,std::tuple<wchar_t_const_(&)[13],unsigned___int64>_>_><unsigned___int64_&>
                        (pTVar10,pFVar9,pTVar2,puVar3);
  }
  FRHIBreadcrumbNodeRef::FRHIBreadcrumbNodeRef(&this->Node,(FRHIBreadcrumbNode *)pTVar10);
  bVar1 = param_1->field_0x6a;
  if ((bVar1 != 0) && ((bVar1 & bVar1 - 1) != 0)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2a5,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar11 = (FRHIBreadcrumbEventManual *)(*pcVar6)();
      return pFVar11;
    }
  }
  this->Pipeline = param_1->field_0x6a;
  DVar8 = GetCurrentThreadId();
  this->ThreadId = DVar8;
  if (this->Pipeline == None) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pipeline != ERHIPipeline::None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                       ,0xef,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar11 = (FRHIBreadcrumbEventManual *)(*pcVar6)();
      return pFVar11;
    }
  }
  pFVar4 = (this->Node).Node;
  pFVar5 = *(FRHIBreadcrumbNode **)&param_1->field_0x2f8;
  if ((pFVar4->Parent != (FRHIBreadcrumbNode *)0x0) &&
     (pFVar4->Parent != FRHIBreadcrumbNode::Sentinel)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent == nullptr || Parent == FRHIBreadcrumbNode::Sentinel",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIBreadcrumbs.h"
                       ,0x282,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar11 = (FRHIBreadcrumbEventManual *)(*pcVar6)();
      return pFVar11;
    }
  }
  pFVar4->Parent = pFVar5;
  if ((pFVar5 != (FRHIBreadcrumbNode *)0x0) && (pFVar5 != FRHIBreadcrumbNode::Sentinel)) {
    if (pFVar5->Allocator != pFVar4->Allocator) {
      FRHIBreadcrumbAllocatorArray::AddUnique(&pFVar4->Allocator->Parents,pFVar5->Allocator);
    }
  }
  FRHIComputeCommandList::BeginBreadcrumbCPU(param_1,(this->Node).Node,true);
  bVar1 = param_1->field_0x6a;
  if ((bVar1 != 0) && ((bVar1 & bVar1 - 1) != 0)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2a5,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar11 = (FRHIBreadcrumbEventManual *)(*pcVar6)();
      return pFVar11;
    }
  }
  FRHIComputeCommandList::BeginBreadcrumbGPU(param_1,(this->Node).Node,param_1->field_0x6a);
  return this;
}

// FRHIBreadcrumbEventManual<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<23,std::tuple<wchar_t_const_(&)[13],unsigned___int64>,std::tuple<wchar_t_const_(&)[17],int>_>,unsigned___int64_&,int_&&> @ 148d987d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRHIBreadcrumbEventManual * __thiscall
FRHIBreadcrumbEventManual::
FRHIBreadcrumbEventManual<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<23,std::tuple<wchar_t_const_(&)[13],unsigned___int64>,std::tuple<wchar_t_const_(&)[17],int>_>,unsigned___int64_&,int_&&>
          (FRHIBreadcrumbEventManual *this,FRHIComputeCommandList *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<23,std::tuple<wchar_t_const_(&)[13],unsigned___int64>,std::tuple<wchar_t_const_(&)[17],int>_>_const_*,std::tuple<unsigned___int64_&,int_&&>_>
          *param_2)

{
  byte bVar1;
  TRHIBreadcrumbDesc<23,std::tuple<wchar_t_const_(&)[13],unsigned___int64>,std::tuple<wchar_t_const_(&)[17],int>_>
  *pTVar2;
  int *piVar3;
  ulong64 *puVar4;
  FRHIBreadcrumbNode *pFVar5;
  FRHIBreadcrumbNode *pFVar6;
  code *pcVar7;
  bool bVar8;
  DWORD DVar9;
  FRHIBreadcrumbAllocator *pFVar10;
  TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<23,std::tuple<wchar_t_const_(&)[13],unsigned___int64>,std::tuple<wchar_t_const_(&)[17],int>_>_>
  *pTVar11;
  FRHIBreadcrumbEventManual *pFVar12;
  
  pFVar10 = FRHIComputeCommandList::GetBreadcrumbAllocator(param_1);
  pTVar2 = (param_2->_Myfirst)._Val;
  if (pTVar2 == (TRHIBreadcrumbDesc<23,std::tuple<wchar_t_const_(&)[13],unsigned___int64>,std::tuple<wchar_t_const_(&)[17],int>_>
                 *)0x0) {
    pTVar11 = (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<23,std::tuple<wchar_t_const_(&)[13],unsigned___int64>,std::tuple<wchar_t_const_(&)[17],int>_>_>
               *)0x0;
  }
  else {
    piVar3 = (int *)param_2->_padding_;
    puVar4 = (ulong64 *)param_2->_padding_;
    pTVar11 = FMemStackBase::Alloc(&pFVar10->Inner,0x60,8);
    pTVar11 = UE::RHI::Breadcrumbs::Private::
              TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<23,std::tuple<wchar_t_const_(&)[13],unsigned___int64>,std::tuple<wchar_t_const_(&)[17],int>_>_>
              ::
              TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<23,std::tuple<wchar_t_const_(&)[13],unsigned___int64>,std::tuple<wchar_t_const_(&)[17],int>_>_><unsigned___int64_&,int_&>
                        (pTVar11,pFVar10,pTVar2,puVar4,piVar3);
  }
  FRHIBreadcrumbNodeRef::FRHIBreadcrumbNodeRef(&this->Node,(FRHIBreadcrumbNode *)pTVar11);
  bVar1 = param_1->field_0x6a;
  if ((bVar1 != 0) && ((bVar1 & bVar1 - 1) != 0)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2a5,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar12 = (FRHIBreadcrumbEventManual *)(*pcVar7)();
      return pFVar12;
    }
  }
  this->Pipeline = param_1->field_0x6a;
  DVar9 = GetCurrentThreadId();
  this->ThreadId = DVar9;
  if (this->Pipeline == None) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pipeline != ERHIPipeline::None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                       ,0xef,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar12 = (FRHIBreadcrumbEventManual *)(*pcVar7)();
      return pFVar12;
    }
  }
  pFVar5 = (this->Node).Node;
  pFVar6 = *(FRHIBreadcrumbNode **)&param_1->field_0x2f8;
  if ((pFVar5->Parent != (FRHIBreadcrumbNode *)0x0) &&
     (pFVar5->Parent != FRHIBreadcrumbNode::Sentinel)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent == nullptr || Parent == FRHIBreadcrumbNode::Sentinel",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIBreadcrumbs.h"
                       ,0x282,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar12 = (FRHIBreadcrumbEventManual *)(*pcVar7)();
      return pFVar12;
    }
  }
  pFVar5->Parent = pFVar6;
  if ((pFVar6 != (FRHIBreadcrumbNode *)0x0) && (pFVar6 != FRHIBreadcrumbNode::Sentinel)) {
    if (pFVar6->Allocator != pFVar5->Allocator) {
      FRHIBreadcrumbAllocatorArray::AddUnique(&pFVar5->Allocator->Parents,pFVar6->Allocator);
    }
  }
  FRHIComputeCommandList::BeginBreadcrumbCPU(param_1,(this->Node).Node,true);
  bVar1 = param_1->field_0x6a;
  if ((bVar1 != 0) && ((bVar1 & bVar1 - 1) != 0)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2a5,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar12 = (FRHIBreadcrumbEventManual *)(*pcVar7)();
      return pFVar12;
    }
  }
  FRHIComputeCommandList::BeginBreadcrumbGPU(param_1,(this->Node).Node,param_1->field_0x6a);
  return this;
}

