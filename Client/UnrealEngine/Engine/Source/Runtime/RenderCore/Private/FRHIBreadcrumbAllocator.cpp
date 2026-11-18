// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>,FString_&&> @ 145d7a3b0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRHIBreadcrumbNode * __thiscall
FRHIBreadcrumbAllocator::
AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>,FString_&&>
          (FRHIBreadcrumbAllocator *this,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>_const_*,std::tuple<FString_&&>_>
          *param_1)

{
  FRHIBreadcrumbAllocator *this_00;
  undefined8 *puVar1;
  uint uVar2;
  FRHIBreadcrumbNode *pFVar3;
  wchar_t *_Source;
  FMetadataSerializer local_28;
  
  this_00 = (FRHIBreadcrumbAllocator *)(param_1->_Myfirst)._Val;
  if (this_00 == (FRHIBreadcrumbAllocator *)0x0) {
    return (FRHIBreadcrumbNode *)0x0;
  }
  puVar1 = (undefined8 *)param_1->_padding_;
  pFVar3 = FMemStackBase::Alloc(&this->Inner,0x150,8);
  pFVar3->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar3->Parent = FRHIBreadcrumbNode::Sentinel;
  pFVar3->ListLink = (FRHIBreadcrumbNode *)0x0;
  (pFVar3->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar3->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar3->Allocator = this;
  pFVar3->Data = (FRHIBreadcrumbData *)this_00;
  pFVar3->TraceCpuSpecId = 0;
  pFVar3->TraceCpuMetadataId = 0;
  LOCK();
  UNLOCK();
  uVar2 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar3->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar3->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar3->ID = uVar2;
  if (*(int *)(puVar1 + 1) == 0) {
    _Source = L"";
  }
  else {
    _Source = (wchar_t *)*puVar1;
  }
  wcsncpy((wchar_t *)(pFVar3 + 1),_Source,0x7f);
  *(undefined2 *)((longlong)pFVar3[4].NextPtrs.Elements + 0xe) = 0;
  pFVar3->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__02VFString___Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar3[4].Allocator = this_00;
  uVar2 = UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>::GetTraceCpuSpec
                    ((TRHIBreadcrumbDesc<3,FString> *)this_00);
  pFVar3->TraceCpuSpecId = uVar2;
  if (uVar2 != 0) {
    UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
    UE::RHI::GPUProfiler::FMetadataSerializer::AppendValue(&local_28,(wchar_t *)(pFVar3 + 1));
    uVar2 = FCpuProfilerTrace::OutputMetadata(pFVar3->TraceCpuSpecId,&local_28.CborData);
    pFVar3->TraceCpuMetadataId = uVar2;
    UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
  }
  return pFVar3;
}

