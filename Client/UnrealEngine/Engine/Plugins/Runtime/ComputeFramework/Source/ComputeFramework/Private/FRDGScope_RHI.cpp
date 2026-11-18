// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 1

// FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[9],wchar_t_const_*_&&,wchar_t_const_*_&&,wchar_t_const_*_&&>_>,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[9],wchar_t_const_*_&&,wchar_t_const_*_&&,wchar_t_const_*_&&>_> @ 1494be140

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRDGScope_RHI * __thiscall
FRDGScope_RHI::
FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[9],wchar_t_const_*_&&,wchar_t_const_*_&&,wchar_t_const_*_&&>_>,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[9],wchar_t_const_*_&&,wchar_t_const_*_&&,wchar_t_const_*_&&>_>
          (FRDGScope_RHI *this,FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[9],wchar_t_const_*_&&,wchar_t_const_*_&&,wchar_t_const_*_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[9],wchar_t_const_*_&&,wchar_t_const_*_&&,wchar_t_const_*_&&>_>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FRHIBreadcrumbAllocator *pFVar1;
  atomic<unsigned_int> aVar2;
  bool bVar3;
  uint uVar4;
  FRHIBreadcrumbAllocator *pFVar5;
  FRHIBreadcrumbNode *pFVar6;
  FMetadataSerializer local_38;
  
  pFVar5 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pFVar1 = (FRHIBreadcrumbAllocator *)(param_2->_Myfirst)._Val;
  if (pFVar1 == (FRHIBreadcrumbAllocator *)0x0) {
    pFVar6 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar6 = FMemStackBase::Alloc(&pFVar5->Inner,0x150,8);
    pFVar6->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar6->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar6->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar6->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar6->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar6->Allocator = pFVar5;
    pFVar6->Data = (FRHIBreadcrumbData *)pFVar1;
    pFVar6->TraceCpuSpecId = 0;
    aVar2 = FRHIBreadcrumbNode::NextID;
    pFVar6->TraceCpuMetadataId = 0;
    LOCK();
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    UNLOCK();
    pFVar6->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar6->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar6->ID = (uint)aVar2 | 0x80000000;
    TCString<wchar_t>::SnprintfImpl((wchar_t *)(pFVar6 + 1),0x80,(wchar_t *)param_2->_padding_);
    pFVar6[4].Allocator = pFVar1;
    pFVar6->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A_V__tuple_AEAUFRDGFormatTag_Private_Breadcrumbs_RHI_UE__AEAY08__CB_W__QEAPEB_W__QEAPEB_W__QEAPEB_W_std___Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    if ((*(int *)&(pFVar1->Parents).field_0x1c == 0) &&
       (bVar3 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar3)) {
      lpCriticalSection = (FWindowsRecursiveMutex *)&(pFVar1->Inner).TopChunk;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (*(int *)&(pFVar1->Parents).field_0x1c == 0) {
        uVar4 = FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)(pFVar1->Inner).End,(char *)pFVar1->_padding_,
                           (uint)pFVar1->_padding_);
        LOCK();
        *(uint *)&(pFVar1->Parents).field_0x1c = uVar4;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    uVar4 = *(uint *)&(pFVar1->Parents).field_0x1c;
    pFVar6->TraceCpuSpecId = uVar4;
    if (uVar4 != 0) {
      UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_38);
      UE::RHI::GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(wchar_t *)(pFVar6 + 1));
      uVar4 = FCpuProfilerTrace::OutputMetadata(pFVar6->TraceCpuSpecId,&local_38.CborData);
      pFVar6->TraceCpuMetadataId = uVar4;
      UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_38);
    }
  }
  FRDGScope_RHI(this,param_1,pFVar6);
  return this;
}

