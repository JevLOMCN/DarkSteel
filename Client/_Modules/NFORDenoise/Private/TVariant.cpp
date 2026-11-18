// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NFORDenoise
// Functions: 1

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[27],wchar_t_const_*_const_&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[27],wchar_t_const_*_const_&>_>_>_> @ 14e9cf8c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[27],wchar_t_const_*_const_&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[27],wchar_t_const_*_const_&>_>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[27],wchar_t_const_*_const_&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[27],wchar_t_const_*_const_&>_>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar1;
  FRHIBreadcrumbAllocator *pFVar2;
  code *pcVar3;
  atomic<unsigned_int> aVar4;
  bool bVar5;
  uint uVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FMetadataSerializer local_38;
  
  bVar1 = this->TypeIndex;
  if ((3 < (ulonglong)bVar1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[bVar1])(this);
  pFVar7 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pFVar2 = (FRHIBreadcrumbAllocator *)(param_2->_Myfirst)._Val;
  if (pFVar2 == (FRHIBreadcrumbAllocator *)0x0) {
    pFVar8 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x150,8);
    pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar8->Allocator = pFVar7;
    pFVar8->Data = (FRHIBreadcrumbData *)pFVar2;
    pFVar8->TraceCpuSpecId = 0;
    aVar4 = FRHIBreadcrumbNode::NextID;
    pFVar8->TraceCpuMetadataId = 0;
    LOCK();
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    UNLOCK();
    pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar8->ID = (uint)aVar4 | 0x80000000;
    TCString<wchar_t>::SnprintfImpl((wchar_t *)(pFVar8 + 1),0x80,(wchar_t *)param_2->_padding_);
    pFVar8[4].Allocator = pFVar2;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A_V__tuple_AEAUFRDGFormatTag_Private_Breadcrumbs_RHI_UE__AEAY0BL___CB_WAEBQEB_W_std___Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    if ((*(int *)&(pFVar2->Parents).field_0x1c == 0) &&
       (bVar5 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar5)) {
      lpCriticalSection = (FWindowsRecursiveMutex *)&(pFVar2->Inner).TopChunk;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (*(int *)&(pFVar2->Parents).field_0x1c == 0) {
        uVar6 = FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)(pFVar2->Inner).End,(char *)pFVar2->_padding_,
                           (uint)pFVar2->_padding_);
        LOCK();
        *(uint *)&(pFVar2->Parents).field_0x1c = uVar6;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    uVar6 = *(uint *)&(pFVar2->Parents).field_0x1c;
    pFVar8->TraceCpuSpecId = uVar6;
    if (uVar6 != 0) {
      UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_38);
      UE::RHI::GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(wchar_t *)(pFVar8 + 1));
      uVar6 = FCpuProfilerTrace::OutputMetadata(pFVar8->TraceCpuSpecId,&local_38.CborData);
      pFVar8->TraceCpuMetadataId = uVar6;
      UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_38);
    }
  }
  FRDGScope_RHI::FRDGScope_RHI((FRDGScope_RHI *)this,param_1,pFVar8);
  this->TypeIndex = '\x02';
  return;
}

