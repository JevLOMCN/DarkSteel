// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 55

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9>_const_*,std::tuple<>_>_> @ 14471b340

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9>_const_*,std::tuple<>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9>_const_*,std::tuple<>_> *param_2
          )

{
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar1;
  TRHIBreadcrumbDesc<9> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FMetadataSerializer local_28;
  
  bVar1 = this->TypeIndex;
  if (3 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[bVar1])(this);
  pFVar7 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pTVar2 = (param_2->_Myfirst)._Val;
  if (pTVar2 == (TRHIBreadcrumbDesc<9> *)0x0) {
    pFVar8 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
    pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar8->Allocator = pFVar7;
    pFVar8->Data = (FRHIBreadcrumbData *)pTVar2;
    pFVar8->TraceCpuSpecId = 0;
    pFVar8->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar8->ID = uVar5;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__08__V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar8[1]._padding_ = (longlong)pTVar2;
    if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar4) {
        lpCriticalSection = &pTVar2->Cs;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar6 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)pTVar2->_padding_,(char *)pTVar2->_padding_,
                             (uint)pTVar2->_padding_);
          LOCK();
          pTVar2->TraceCpuSpecId = aVar6;
          UNLOCK();
          UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
          FCpuProfilerTrace::OutputEventMetadataSpec
                    ((uint)pTVar2->TraceCpuSpecId,(wchar_t *)pTVar2->_padding_,
                     (wchar_t *)pTVar2->_padding_,&local_28.CborData);
          UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    pFVar8->TraceCpuSpecId = (uint)pTVar2->TraceCpuSpecId;
  }
  FRDGScope_RHI::FRDGScope_RHI((FRDGScope_RHI *)this,param_1,pFVar8);
  this->TypeIndex = '\x02';
  return;
}

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[18],wchar_t_const_*_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[18],wchar_t_const_*_&&>_>_>_> @ 14471b4f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[18],wchar_t_const_*_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[18],wchar_t_const_*_&&>_>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[18],wchar_t_const_*_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[18],wchar_t_const_*_&&>_>_>
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
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A_V__tuple_AEAUFRDGFormatTag_Private_Breadcrumbs_RHI_UE__AEAY0BC___CB_W__QEAPEB_W_std___Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<17>_const_*,std::tuple<>_>_> @ 14471b6c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<17>_const_*,std::tuple<>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<17>_const_*,std::tuple<>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar1;
  TRHIBreadcrumbDesc<17> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FMetadataSerializer local_28;
  
  bVar1 = this->TypeIndex;
  if (3 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[bVar1])(this);
  pFVar7 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pTVar2 = (param_2->_Myfirst)._Val;
  if (pTVar2 == (TRHIBreadcrumbDesc<17> *)0x0) {
    pFVar8 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
    pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar8->Allocator = pFVar7;
    pFVar8->Data = (FRHIBreadcrumbData *)pTVar2;
    pFVar8->TraceCpuSpecId = 0;
    pFVar8->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar8->ID = uVar5;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0BB___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar8[1]._padding_ = (longlong)pTVar2;
    if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar4) {
        lpCriticalSection = &pTVar2->Cs;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar6 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)pTVar2->_padding_,(char *)pTVar2->_padding_,
                             (uint)pTVar2->_padding_);
          LOCK();
          pTVar2->TraceCpuSpecId = aVar6;
          UNLOCK();
          UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
          FCpuProfilerTrace::OutputEventMetadataSpec
                    ((uint)pTVar2->TraceCpuSpecId,(wchar_t *)pTVar2->_padding_,
                     (wchar_t *)pTVar2->_padding_,&local_28.CborData);
          UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    pFVar8->TraceCpuSpecId = (uint)pTVar2->TraceCpuSpecId;
  }
  FRDGScope_RHI::FRDGScope_RHI((FRDGScope_RHI *)this,param_1,pFVar8);
  this->TypeIndex = '\x02';
  return;
}

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<19>_const_*,std::tuple<>_>_> @ 14471b870

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<19>_const_*,std::tuple<>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<19>_const_*,std::tuple<>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar1;
  TRHIBreadcrumbDesc<19> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FMetadataSerializer local_28;
  
  bVar1 = this->TypeIndex;
  if (3 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[bVar1])(this);
  pFVar7 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pTVar2 = (param_2->_Myfirst)._Val;
  if (pTVar2 == (TRHIBreadcrumbDesc<19> *)0x0) {
    pFVar8 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
    pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar8->Allocator = pFVar7;
    pFVar8->Data = (FRHIBreadcrumbData *)pTVar2;
    pFVar8->TraceCpuSpecId = 0;
    pFVar8->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar8->ID = uVar5;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0BD___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar8[1]._padding_ = (longlong)pTVar2;
    if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar4) {
        lpCriticalSection = &pTVar2->Cs;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar6 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)pTVar2->_padding_,(char *)pTVar2->_padding_,
                             (uint)pTVar2->_padding_);
          LOCK();
          pTVar2->TraceCpuSpecId = aVar6;
          UNLOCK();
          UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
          FCpuProfilerTrace::OutputEventMetadataSpec
                    ((uint)pTVar2->TraceCpuSpecId,(wchar_t *)pTVar2->_padding_,
                     (wchar_t *)pTVar2->_padding_,&local_28.CborData);
          UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    pFVar8->TraceCpuSpecId = (uint)pTVar2->TraceCpuSpecId;
  }
  FRDGScope_RHI::FRDGScope_RHI((FRDGScope_RHI *)this,param_1,pFVar8);
  this->TypeIndex = '\x02';
  return;
}

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<20>_const_*,std::tuple<>_>_> @ 14471ba20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<20>_const_*,std::tuple<>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<20>_const_*,std::tuple<>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar1;
  TRHIBreadcrumbDesc<20> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FMetadataSerializer local_28;
  
  bVar1 = this->TypeIndex;
  if (3 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[bVar1])(this);
  pFVar7 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pTVar2 = (param_2->_Myfirst)._Val;
  if (pTVar2 == (TRHIBreadcrumbDesc<20> *)0x0) {
    pFVar8 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
    pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar8->Allocator = pFVar7;
    pFVar8->Data = (FRHIBreadcrumbData *)pTVar2;
    pFVar8->TraceCpuSpecId = 0;
    pFVar8->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar8->ID = uVar5;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0BE___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar8[1]._padding_ = (longlong)pTVar2;
    if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar4) {
        lpCriticalSection = &pTVar2->Cs;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar6 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)pTVar2->_padding_,(char *)pTVar2->_padding_,
                             (uint)pTVar2->_padding_);
          LOCK();
          pTVar2->TraceCpuSpecId = aVar6;
          UNLOCK();
          UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
          FCpuProfilerTrace::OutputEventMetadataSpec
                    ((uint)pTVar2->TraceCpuSpecId,(wchar_t *)pTVar2->_padding_,
                     (wchar_t *)pTVar2->_padding_,&local_28.CborData);
          UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    pFVar8->TraceCpuSpecId = (uint)pTVar2->TraceCpuSpecId;
  }
  FRDGScope_RHI::FRDGScope_RHI((FRDGScope_RHI *)this,param_1,pFVar8);
  this->TypeIndex = '\x02';
  return;
}

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<21>_const_*,std::tuple<>_>_> @ 14471bbd0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<21>_const_*,std::tuple<>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<21>_const_*,std::tuple<>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar1;
  TRHIBreadcrumbDesc<21> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FMetadataSerializer local_28;
  
  bVar1 = this->TypeIndex;
  if (3 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[bVar1])(this);
  pFVar7 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pTVar2 = (param_2->_Myfirst)._Val;
  if (pTVar2 == (TRHIBreadcrumbDesc<21> *)0x0) {
    pFVar8 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
    pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar8->Allocator = pFVar7;
    pFVar8->Data = (FRHIBreadcrumbData *)pTVar2;
    pFVar8->TraceCpuSpecId = 0;
    pFVar8->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar8->ID = uVar5;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0BF___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar8[1]._padding_ = (longlong)pTVar2;
    if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar4) {
        lpCriticalSection = &pTVar2->Cs;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar6 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)pTVar2->_padding_,(char *)pTVar2->_padding_,
                             (uint)pTVar2->_padding_);
          LOCK();
          pTVar2->TraceCpuSpecId = aVar6;
          UNLOCK();
          UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
          FCpuProfilerTrace::OutputEventMetadataSpec
                    ((uint)pTVar2->TraceCpuSpecId,(wchar_t *)pTVar2->_padding_,
                     (wchar_t *)pTVar2->_padding_,&local_28.CborData);
          UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    pFVar8->TraceCpuSpecId = (uint)pTVar2->TraceCpuSpecId;
  }
  FRDGScope_RHI::FRDGScope_RHI((FRDGScope_RHI *)this,param_1,pFVar8);
  this->TypeIndex = '\x02';
  return;
}

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<22>_const_*,std::tuple<>_>_> @ 14471bd80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<22>_const_*,std::tuple<>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<22>_const_*,std::tuple<>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar1;
  TRHIBreadcrumbDesc<22> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FMetadataSerializer local_28;
  
  bVar1 = this->TypeIndex;
  if (3 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[bVar1])(this);
  pFVar7 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pTVar2 = (param_2->_Myfirst)._Val;
  if (pTVar2 == (TRHIBreadcrumbDesc<22> *)0x0) {
    pFVar8 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
    pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar8->Allocator = pFVar7;
    pFVar8->Data = (FRHIBreadcrumbData *)pTVar2;
    pFVar8->TraceCpuSpecId = 0;
    pFVar8->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar8->ID = uVar5;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0BG___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar8[1]._padding_ = (longlong)pTVar2;
    if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar4) {
        lpCriticalSection = &pTVar2->Cs;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar6 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)pTVar2->_padding_,(char *)pTVar2->_padding_,
                             (uint)pTVar2->_padding_);
          LOCK();
          pTVar2->TraceCpuSpecId = aVar6;
          UNLOCK();
          UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
          FCpuProfilerTrace::OutputEventMetadataSpec
                    ((uint)pTVar2->TraceCpuSpecId,(wchar_t *)pTVar2->_padding_,
                     (wchar_t *)pTVar2->_padding_,&local_28.CborData);
          UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    pFVar8->TraceCpuSpecId = (uint)pTVar2->TraceCpuSpecId;
  }
  FRDGScope_RHI::FRDGScope_RHI((FRDGScope_RHI *)this,param_1,pFVar8);
  this->TypeIndex = '\x02';
  return;
}

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<23>_const_*,std::tuple<>_>_> @ 14471bf30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<23>_const_*,std::tuple<>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<23>_const_*,std::tuple<>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar1;
  TRHIBreadcrumbDesc<23> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FMetadataSerializer local_28;
  
  bVar1 = this->TypeIndex;
  if (3 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[bVar1])(this);
  pFVar7 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pTVar2 = (param_2->_Myfirst)._Val;
  if (pTVar2 == (TRHIBreadcrumbDesc<23> *)0x0) {
    pFVar8 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
    pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar8->Allocator = pFVar7;
    pFVar8->Data = (FRHIBreadcrumbData *)pTVar2;
    pFVar8->TraceCpuSpecId = 0;
    pFVar8->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar8->ID = uVar5;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0BH___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar8[1]._padding_ = (longlong)pTVar2;
    if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar4) {
        lpCriticalSection = &pTVar2->Cs;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar6 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)pTVar2->_padding_,(char *)pTVar2->_padding_,
                             (uint)pTVar2->_padding_);
          LOCK();
          pTVar2->TraceCpuSpecId = aVar6;
          UNLOCK();
          UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
          FCpuProfilerTrace::OutputEventMetadataSpec
                    ((uint)pTVar2->TraceCpuSpecId,(wchar_t *)pTVar2->_padding_,
                     (wchar_t *)pTVar2->_padding_,&local_28.CborData);
          UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    pFVar8->TraceCpuSpecId = (uint)pTVar2->TraceCpuSpecId;
  }
  FRDGScope_RHI::FRDGScope_RHI((FRDGScope_RHI *)this,param_1,pFVar8);
  this->TypeIndex = '\x02';
  return;
}

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<26>_const_*,std::tuple<>_>_> @ 14471c0e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<26>_const_*,std::tuple<>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<26>_const_*,std::tuple<>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar1;
  TRHIBreadcrumbDesc<26> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FMetadataSerializer local_28;
  
  bVar1 = this->TypeIndex;
  if (3 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[bVar1])(this);
  pFVar7 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pTVar2 = (param_2->_Myfirst)._Val;
  if (pTVar2 == (TRHIBreadcrumbDesc<26> *)0x0) {
    pFVar8 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
    pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar8->Allocator = pFVar7;
    pFVar8->Data = (FRHIBreadcrumbData *)pTVar2;
    pFVar8->TraceCpuSpecId = 0;
    pFVar8->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar8->ID = uVar5;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0BK___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar8[1]._padding_ = (longlong)pTVar2;
    if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar4) {
        lpCriticalSection = &pTVar2->Cs;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar6 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)pTVar2->_padding_,(char *)pTVar2->_padding_,
                             (uint)pTVar2->_padding_);
          LOCK();
          pTVar2->TraceCpuSpecId = aVar6;
          UNLOCK();
          UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
          FCpuProfilerTrace::OutputEventMetadataSpec
                    ((uint)pTVar2->TraceCpuSpecId,(wchar_t *)pTVar2->_padding_,
                     (wchar_t *)pTVar2->_padding_,&local_28.CborData);
          UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    pFVar8->TraceCpuSpecId = (uint)pTVar2->TraceCpuSpecId;
  }
  FRDGScope_RHI::FRDGScope_RHI((FRDGScope_RHI *)this,param_1,pFVar8);
  this->TypeIndex = '\x02';
  return;
}

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<33>_const_*,std::tuple<>_>_> @ 14471c290

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<33>_const_*,std::tuple<>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<33>_const_*,std::tuple<>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar1;
  TRHIBreadcrumbDesc<33> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FMetadataSerializer local_28;
  
  bVar1 = this->TypeIndex;
  if (3 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[bVar1])(this);
  pFVar7 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pTVar2 = (param_2->_Myfirst)._Val;
  if (pTVar2 == (TRHIBreadcrumbDesc<33> *)0x0) {
    pFVar8 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
    pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar8->Allocator = pFVar7;
    pFVar8->Data = (FRHIBreadcrumbData *)pTVar2;
    pFVar8->TraceCpuSpecId = 0;
    pFVar8->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar8->ID = uVar5;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0CB___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar8[1]._padding_ = (longlong)pTVar2;
    if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar4) {
        lpCriticalSection = &pTVar2->Cs;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar6 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)pTVar2->_padding_,(char *)pTVar2->_padding_,
                             (uint)pTVar2->_padding_);
          LOCK();
          pTVar2->TraceCpuSpecId = aVar6;
          UNLOCK();
          UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
          FCpuProfilerTrace::OutputEventMetadataSpec
                    ((uint)pTVar2->TraceCpuSpecId,(wchar_t *)pTVar2->_padding_,
                     (wchar_t *)pTVar2->_padding_,&local_28.CborData);
          UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    pFVar8->TraceCpuSpecId = (uint)pTVar2->TraceCpuSpecId;
  }
  FRDGScope_RHI::FRDGScope_RHI((FRDGScope_RHI *)this,param_1,pFVar8);
  this->TypeIndex = '\x02';
  return;
}

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<34>_const_*,std::tuple<>_>_> @ 14471c440

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<34>_const_*,std::tuple<>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<34>_const_*,std::tuple<>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar1;
  TRHIBreadcrumbDesc<34> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FMetadataSerializer local_28;
  
  bVar1 = this->TypeIndex;
  if (3 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[bVar1])(this);
  pFVar7 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pTVar2 = (param_2->_Myfirst)._Val;
  if (pTVar2 == (TRHIBreadcrumbDesc<34> *)0x0) {
    pFVar8 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
    pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar8->Allocator = pFVar7;
    pFVar8->Data = (FRHIBreadcrumbData *)pTVar2;
    pFVar8->TraceCpuSpecId = 0;
    pFVar8->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar8->ID = uVar5;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0CC___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar8[1]._padding_ = (longlong)pTVar2;
    if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar4) {
        lpCriticalSection = &pTVar2->Cs;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar6 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)pTVar2->_padding_,(char *)pTVar2->_padding_,
                             (uint)pTVar2->_padding_);
          LOCK();
          pTVar2->TraceCpuSpecId = aVar6;
          UNLOCK();
          UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
          FCpuProfilerTrace::OutputEventMetadataSpec
                    ((uint)pTVar2->TraceCpuSpecId,(wchar_t *)pTVar2->_padding_,
                     (wchar_t *)pTVar2->_padding_,&local_28.CborData);
          UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    pFVar8->TraceCpuSpecId = (uint)pTVar2->TraceCpuSpecId;
  }
  FRDGScope_RHI::FRDGScope_RHI((FRDGScope_RHI *)this,param_1,pFVar8);
  this->TypeIndex = '\x02';
  return;
}

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<12>_const_*,std::tuple<>_>_> @ 14471c5f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<12>_const_*,std::tuple<>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<12>_const_*,std::tuple<>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar1;
  TRHIBreadcrumbDesc<12> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FMetadataSerializer local_28;
  
  bVar1 = this->TypeIndex;
  if (3 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[bVar1])(this);
  pFVar7 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pTVar2 = (param_2->_Myfirst)._Val;
  if (pTVar2 == (TRHIBreadcrumbDesc<12> *)0x0) {
    pFVar8 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
    pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar8->Allocator = pFVar7;
    pFVar8->Data = (FRHIBreadcrumbData *)pTVar2;
    pFVar8->TraceCpuSpecId = 0;
    pFVar8->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar8->ID = uVar5;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0M___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar8[1]._padding_ = (longlong)pTVar2;
    if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar4) {
        lpCriticalSection = &pTVar2->Cs;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar6 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)pTVar2->_padding_,(char *)pTVar2->_padding_,
                             (uint)pTVar2->_padding_);
          LOCK();
          pTVar2->TraceCpuSpecId = aVar6;
          UNLOCK();
          UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
          FCpuProfilerTrace::OutputEventMetadataSpec
                    ((uint)pTVar2->TraceCpuSpecId,(wchar_t *)pTVar2->_padding_,
                     (wchar_t *)pTVar2->_padding_,&local_28.CborData);
          UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    pFVar8->TraceCpuSpecId = (uint)pTVar2->TraceCpuSpecId;
  }
  FRDGScope_RHI::FRDGScope_RHI((FRDGScope_RHI *)this,param_1,pFVar8);
  this->TypeIndex = '\x02';
  return;
}

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<14>_const_*,std::tuple<>_>_> @ 14471c7a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<14>_const_*,std::tuple<>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<14>_const_*,std::tuple<>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar1;
  TRHIBreadcrumbDesc<14> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FMetadataSerializer local_28;
  
  bVar1 = this->TypeIndex;
  if (3 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[bVar1])(this);
  pFVar7 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pTVar2 = (param_2->_Myfirst)._Val;
  if (pTVar2 == (TRHIBreadcrumbDesc<14> *)0x0) {
    pFVar8 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
    pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar8->Allocator = pFVar7;
    pFVar8->Data = (FRHIBreadcrumbData *)pTVar2;
    pFVar8->TraceCpuSpecId = 0;
    pFVar8->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar8->ID = uVar5;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0O___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar8[1]._padding_ = (longlong)pTVar2;
    if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar4) {
        lpCriticalSection = &pTVar2->Cs;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar6 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)pTVar2->_padding_,(char *)pTVar2->_padding_,
                             (uint)pTVar2->_padding_);
          LOCK();
          pTVar2->TraceCpuSpecId = aVar6;
          UNLOCK();
          UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
          FCpuProfilerTrace::OutputEventMetadataSpec
                    ((uint)pTVar2->TraceCpuSpecId,(wchar_t *)pTVar2->_padding_,
                     (wchar_t *)pTVar2->_padding_,&local_28.CborData);
          UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    pFVar8->TraceCpuSpecId = (uint)pTVar2->TraceCpuSpecId;
  }
  FRDGScope_RHI::FRDGScope_RHI((FRDGScope_RHI *)this,param_1,pFVar8);
  this->TypeIndex = '\x02';
  return;
}

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<15>_const_*,std::tuple<>_>_> @ 14471c950

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<15>_const_*,std::tuple<>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<15>_const_*,std::tuple<>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar1;
  TRHIBreadcrumbDesc<15> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FMetadataSerializer local_28;
  
  bVar1 = this->TypeIndex;
  if (3 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[bVar1])(this);
  pFVar7 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pTVar2 = (param_2->_Myfirst)._Val;
  if (pTVar2 == (TRHIBreadcrumbDesc<15> *)0x0) {
    pFVar8 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
    pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar8->Allocator = pFVar7;
    pFVar8->Data = (FRHIBreadcrumbData *)pTVar2;
    pFVar8->TraceCpuSpecId = 0;
    pFVar8->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar8->ID = uVar5;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0P___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar8[1]._padding_ = (longlong)pTVar2;
    if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar4) {
        lpCriticalSection = &pTVar2->Cs;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar6 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)pTVar2->_padding_,(char *)pTVar2->_padding_,
                             (uint)pTVar2->_padding_);
          LOCK();
          pTVar2->TraceCpuSpecId = aVar6;
          UNLOCK();
          UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
          FCpuProfilerTrace::OutputEventMetadataSpec
                    ((uint)pTVar2->TraceCpuSpecId,(wchar_t *)pTVar2->_padding_,
                     (wchar_t *)pTVar2->_padding_,&local_28.CborData);
          UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    pFVar8->TraceCpuSpecId = (uint)pTVar2->TraceCpuSpecId;
  }
  FRDGScope_RHI::FRDGScope_RHI((FRDGScope_RHI *)this,param_1,pFVar8);
  this->TypeIndex = '\x02';
  return;
}

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<4>_const_*,std::tuple<>_>_> @ 1447ee8d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<4>_const_*,std::tuple<>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<4>_const_*,std::tuple<>_> *param_2
          )

{
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar1;
  TRHIBreadcrumbDesc<4> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FMetadataSerializer local_28;
  
  bVar1 = this->TypeIndex;
  if (3 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[bVar1])(this);
  pFVar7 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pTVar2 = (param_2->_Myfirst)._Val;
  if (pTVar2 == (TRHIBreadcrumbDesc<4> *)0x0) {
    pFVar8 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
    pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar8->Allocator = pFVar7;
    pFVar8->Data = (FRHIBreadcrumbData *)pTVar2;
    pFVar8->TraceCpuSpecId = 0;
    pFVar8->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar8->ID = uVar5;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__03__V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar8[1]._padding_ = (longlong)pTVar2;
    if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar4) {
        lpCriticalSection = &pTVar2->Cs;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar6 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)pTVar2->_padding_,(char *)pTVar2->_padding_,
                             (uint)pTVar2->_padding_);
          LOCK();
          pTVar2->TraceCpuSpecId = aVar6;
          UNLOCK();
          UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
          FCpuProfilerTrace::OutputEventMetadataSpec
                    ((uint)pTVar2->TraceCpuSpecId,(wchar_t *)pTVar2->_padding_,
                     (wchar_t *)pTVar2->_padding_,&local_28.CborData);
          UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    pFVar8->TraceCpuSpecId = (uint)pTVar2->TraceCpuSpecId;
  }
  FRDGScope_RHI::FRDGScope_RHI((FRDGScope_RHI *)this,param_1,pFVar8);
  this->TypeIndex = '\x02';
  return;
}

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<5>_const_*,std::tuple<>_>_> @ 1447eea80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<5>_const_*,std::tuple<>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<5>_const_*,std::tuple<>_> *param_2
          )

{
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar1;
  TRHIBreadcrumbDesc<5> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FMetadataSerializer local_28;
  
  bVar1 = this->TypeIndex;
  if (3 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[bVar1])(this);
  pFVar7 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pTVar2 = (param_2->_Myfirst)._Val;
  if (pTVar2 == (TRHIBreadcrumbDesc<5> *)0x0) {
    pFVar8 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
    pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar8->Allocator = pFVar7;
    pFVar8->Data = (FRHIBreadcrumbData *)pTVar2;
    pFVar8->TraceCpuSpecId = 0;
    pFVar8->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar8->ID = uVar5;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__04__V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar8[1]._padding_ = (longlong)pTVar2;
    if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar4) {
        lpCriticalSection = &pTVar2->Cs;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar6 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)pTVar2->_padding_,(char *)pTVar2->_padding_,
                             (uint)pTVar2->_padding_);
          LOCK();
          pTVar2->TraceCpuSpecId = aVar6;
          UNLOCK();
          UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
          FCpuProfilerTrace::OutputEventMetadataSpec
                    ((uint)pTVar2->TraceCpuSpecId,(wchar_t *)pTVar2->_padding_,
                     (wchar_t *)pTVar2->_padding_,&local_28.CborData);
          UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    pFVar8->TraceCpuSpecId = (uint)pTVar2->TraceCpuSpecId;
  }
  FRDGScope_RHI::FRDGScope_RHI((FRDGScope_RHI *)this,param_1,pFVar8);
  this->TypeIndex = '\x02';
  return;
}

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<6>_const_*,std::tuple<>_>_> @ 1447eec30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<6>_const_*,std::tuple<>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<6>_const_*,std::tuple<>_> *param_2
          )

{
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar1;
  TRHIBreadcrumbDesc<6> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FMetadataSerializer local_28;
  
  bVar1 = this->TypeIndex;
  if (3 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[bVar1])(this);
  pFVar7 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pTVar2 = (param_2->_Myfirst)._Val;
  if (pTVar2 == (TRHIBreadcrumbDesc<6> *)0x0) {
    pFVar8 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
    pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar8->Allocator = pFVar7;
    pFVar8->Data = (FRHIBreadcrumbData *)pTVar2;
    pFVar8->TraceCpuSpecId = 0;
    pFVar8->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar8->ID = uVar5;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__05__V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar8[1]._padding_ = (longlong)pTVar2;
    if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar4) {
        lpCriticalSection = &pTVar2->Cs;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar6 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)pTVar2->_padding_,(char *)pTVar2->_padding_,
                             (uint)pTVar2->_padding_);
          LOCK();
          pTVar2->TraceCpuSpecId = aVar6;
          UNLOCK();
          UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
          FCpuProfilerTrace::OutputEventMetadataSpec
                    ((uint)pTVar2->TraceCpuSpecId,(wchar_t *)pTVar2->_padding_,
                     (wchar_t *)pTVar2->_padding_,&local_28.CborData);
          UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    pFVar8->TraceCpuSpecId = (uint)pTVar2->TraceCpuSpecId;
  }
  FRDGScope_RHI::FRDGScope_RHI((FRDGScope_RHI *)this,param_1,pFVar8);
  this->TypeIndex = '\x02';
  return;
}

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<10>_const_*,std::tuple<>_>_> @ 1447eede0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<10>_const_*,std::tuple<>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<10>_const_*,std::tuple<>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar1;
  TRHIBreadcrumbDesc<10> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FMetadataSerializer local_28;
  
  bVar1 = this->TypeIndex;
  if (3 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[bVar1])(this);
  pFVar7 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pTVar2 = (param_2->_Myfirst)._Val;
  if (pTVar2 == (TRHIBreadcrumbDesc<10> *)0x0) {
    pFVar8 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
    pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar8->Allocator = pFVar7;
    pFVar8->Data = (FRHIBreadcrumbData *)pTVar2;
    pFVar8->TraceCpuSpecId = 0;
    pFVar8->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar8->ID = uVar5;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__09__V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar8[1]._padding_ = (longlong)pTVar2;
    if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar4) {
        lpCriticalSection = &pTVar2->Cs;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar6 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)pTVar2->_padding_,(char *)pTVar2->_padding_,
                             (uint)pTVar2->_padding_);
          LOCK();
          pTVar2->TraceCpuSpecId = aVar6;
          UNLOCK();
          UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
          FCpuProfilerTrace::OutputEventMetadataSpec
                    ((uint)pTVar2->TraceCpuSpecId,(wchar_t *)pTVar2->_padding_,
                     (wchar_t *)pTVar2->_padding_,&local_28.CborData);
          UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    pFVar8->TraceCpuSpecId = (uint)pTVar2->TraceCpuSpecId;
  }
  FRDGScope_RHI::FRDGScope_RHI((FRDGScope_RHI *)this,param_1,pFVar8);
  this->TypeIndex = '\x02';
  return;
}

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<16>_const_*,std::tuple<>_>_> @ 1447eef90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<16>_const_*,std::tuple<>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<16>_const_*,std::tuple<>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar1;
  TRHIBreadcrumbDesc<16> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FMetadataSerializer local_28;
  
  bVar1 = this->TypeIndex;
  if (3 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[bVar1])(this);
  pFVar7 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pTVar2 = (param_2->_Myfirst)._Val;
  if (pTVar2 == (TRHIBreadcrumbDesc<16> *)0x0) {
    pFVar8 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
    pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar8->Allocator = pFVar7;
    pFVar8->Data = (FRHIBreadcrumbData *)pTVar2;
    pFVar8->TraceCpuSpecId = 0;
    pFVar8->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar8->ID = uVar5;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0BA___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar8[1]._padding_ = (longlong)pTVar2;
    if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar4) {
        lpCriticalSection = &pTVar2->Cs;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar6 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)pTVar2->_padding_,(char *)pTVar2->_padding_,
                             (uint)pTVar2->_padding_);
          LOCK();
          pTVar2->TraceCpuSpecId = aVar6;
          UNLOCK();
          UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
          FCpuProfilerTrace::OutputEventMetadataSpec
                    ((uint)pTVar2->TraceCpuSpecId,(wchar_t *)pTVar2->_padding_,
                     (wchar_t *)pTVar2->_padding_,&local_28.CborData);
          UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    pFVar8->TraceCpuSpecId = (uint)pTVar2->TraceCpuSpecId;
  }
  FRDGScope_RHI::FRDGScope_RHI((FRDGScope_RHI *)this,param_1,pFVar8);
  this->TypeIndex = '\x02';
  return;
}

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<18>_const_*,std::tuple<>_>_> @ 1447ef140

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<18>_const_*,std::tuple<>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<18>_const_*,std::tuple<>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar1;
  TRHIBreadcrumbDesc<18> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FMetadataSerializer local_28;
  
  bVar1 = this->TypeIndex;
  if (3 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[bVar1])(this);
  pFVar7 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pTVar2 = (param_2->_Myfirst)._Val;
  if (pTVar2 == (TRHIBreadcrumbDesc<18> *)0x0) {
    pFVar8 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
    pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar8->Allocator = pFVar7;
    pFVar8->Data = (FRHIBreadcrumbData *)pTVar2;
    pFVar8->TraceCpuSpecId = 0;
    pFVar8->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar8->ID = uVar5;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0BC___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar8[1]._padding_ = (longlong)pTVar2;
    if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar4) {
        lpCriticalSection = &pTVar2->Cs;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar6 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)pTVar2->_padding_,(char *)pTVar2->_padding_,
                             (uint)pTVar2->_padding_);
          LOCK();
          pTVar2->TraceCpuSpecId = aVar6;
          UNLOCK();
          UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
          FCpuProfilerTrace::OutputEventMetadataSpec
                    ((uint)pTVar2->TraceCpuSpecId,(wchar_t *)pTVar2->_padding_,
                     (wchar_t *)pTVar2->_padding_,&local_28.CborData);
          UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    pFVar8->TraceCpuSpecId = (uint)pTVar2->TraceCpuSpecId;
  }
  FRDGScope_RHI::FRDGScope_RHI((FRDGScope_RHI *)this,param_1,pFVar8);
  this->TypeIndex = '\x02';
  return;
}

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<13>_const_*,std::tuple<>_>_> @ 1447ef2f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<13>_const_*,std::tuple<>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<13>_const_*,std::tuple<>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar1;
  TRHIBreadcrumbDesc<13> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FMetadataSerializer local_28;
  
  bVar1 = this->TypeIndex;
  if (3 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[bVar1])(this);
  pFVar7 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pTVar2 = (param_2->_Myfirst)._Val;
  if (pTVar2 == (TRHIBreadcrumbDesc<13> *)0x0) {
    pFVar8 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
    pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar8->Allocator = pFVar7;
    pFVar8->Data = (FRHIBreadcrumbData *)pTVar2;
    pFVar8->TraceCpuSpecId = 0;
    pFVar8->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar8->ID = uVar5;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0N___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar8[1]._padding_ = (longlong)pTVar2;
    if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar4) {
        lpCriticalSection = &pTVar2->Cs;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar6 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)pTVar2->_padding_,(char *)pTVar2->_padding_,
                             (uint)pTVar2->_padding_);
          LOCK();
          pTVar2->TraceCpuSpecId = aVar6;
          UNLOCK();
          UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
          FCpuProfilerTrace::OutputEventMetadataSpec
                    ((uint)pTVar2->TraceCpuSpecId,(wchar_t *)pTVar2->_padding_,
                     (wchar_t *)pTVar2->_padding_,&local_28.CborData);
          UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    pFVar8->TraceCpuSpecId = (uint)pTVar2->TraceCpuSpecId;
  }
  FRDGScope_RHI::FRDGScope_RHI((FRDGScope_RHI *)this,param_1,pFVar8);
  this->TypeIndex = '\x02';
  return;
}

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[36],wchar_t_const_*_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[36],wchar_t_const_*_&&>_>_>_> @ 144855f90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[36],wchar_t_const_*_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[36],wchar_t_const_*_&&>_>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[36],wchar_t_const_*_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[36],wchar_t_const_*_&&>_>_>
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
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A_V__tuple_AEAUFRDGFormatTag_Private_Breadcrumbs_RHI_UE__AEAY0CE___CB_W__QEAPEB_W_std___Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<24>_const_*,std::tuple<>_>_> @ 144856160

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<24>_const_*,std::tuple<>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<24>_const_*,std::tuple<>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar1;
  TRHIBreadcrumbDesc<24> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FMetadataSerializer local_28;
  
  bVar1 = this->TypeIndex;
  if (3 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[bVar1])(this);
  pFVar7 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pTVar2 = (param_2->_Myfirst)._Val;
  if (pTVar2 == (TRHIBreadcrumbDesc<24> *)0x0) {
    pFVar8 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
    pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar8->Allocator = pFVar7;
    pFVar8->Data = (FRHIBreadcrumbData *)pTVar2;
    pFVar8->TraceCpuSpecId = 0;
    pFVar8->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar8->ID = uVar5;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0BI___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar8[1]._padding_ = (longlong)pTVar2;
    if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar4) {
        lpCriticalSection = &pTVar2->Cs;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar6 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)pTVar2->_padding_,(char *)pTVar2->_padding_,
                             (uint)pTVar2->_padding_);
          LOCK();
          pTVar2->TraceCpuSpecId = aVar6;
          UNLOCK();
          UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
          FCpuProfilerTrace::OutputEventMetadataSpec
                    ((uint)pTVar2->TraceCpuSpecId,(wchar_t *)pTVar2->_padding_,
                     (wchar_t *)pTVar2->_padding_,&local_28.CborData);
          UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    pFVar8->TraceCpuSpecId = (uint)pTVar2->TraceCpuSpecId;
  }
  FRDGScope_RHI::FRDGScope_RHI((FRDGScope_RHI *)this,param_1,pFVar8);
  this->TypeIndex = '\x02';
  return;
}

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<25>_const_*,std::tuple<>_>_> @ 144856310

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<25>_const_*,std::tuple<>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<25>_const_*,std::tuple<>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar1;
  TRHIBreadcrumbDesc<25> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FMetadataSerializer local_28;
  
  bVar1 = this->TypeIndex;
  if (3 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[bVar1])(this);
  pFVar7 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pTVar2 = (param_2->_Myfirst)._Val;
  if (pTVar2 == (TRHIBreadcrumbDesc<25> *)0x0) {
    pFVar8 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
    pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar8->Allocator = pFVar7;
    pFVar8->Data = (FRHIBreadcrumbData *)pTVar2;
    pFVar8->TraceCpuSpecId = 0;
    pFVar8->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar8->ID = uVar5;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0BJ___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar8[1]._padding_ = (longlong)pTVar2;
    if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar4) {
        lpCriticalSection = &pTVar2->Cs;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar6 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)pTVar2->_padding_,(char *)pTVar2->_padding_,
                             (uint)pTVar2->_padding_);
          LOCK();
          pTVar2->TraceCpuSpecId = aVar6;
          UNLOCK();
          UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
          FCpuProfilerTrace::OutputEventMetadataSpec
                    ((uint)pTVar2->TraceCpuSpecId,(wchar_t *)pTVar2->_padding_,
                     (wchar_t *)pTVar2->_padding_,&local_28.CborData);
          UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    pFVar8->TraceCpuSpecId = (uint)pTVar2->TraceCpuSpecId;
  }
  FRDGScope_RHI::FRDGScope_RHI((FRDGScope_RHI *)this,param_1,pFVar8);
  this->TypeIndex = '\x02';
  return;
}

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<28>_const_*,std::tuple<>_>_> @ 1448564c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<28>_const_*,std::tuple<>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<28>_const_*,std::tuple<>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar1;
  TRHIBreadcrumbDesc<28> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FMetadataSerializer local_28;
  
  bVar1 = this->TypeIndex;
  if (3 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[bVar1])(this);
  pFVar7 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pTVar2 = (param_2->_Myfirst)._Val;
  if (pTVar2 == (TRHIBreadcrumbDesc<28> *)0x0) {
    pFVar8 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
    pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar8->Allocator = pFVar7;
    pFVar8->Data = (FRHIBreadcrumbData *)pTVar2;
    pFVar8->TraceCpuSpecId = 0;
    pFVar8->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar8->ID = uVar5;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0BM___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar8[1]._padding_ = (longlong)pTVar2;
    if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar4) {
        lpCriticalSection = &pTVar2->Cs;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar6 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)pTVar2->_padding_,(char *)pTVar2->_padding_,
                             (uint)pTVar2->_padding_);
          LOCK();
          pTVar2->TraceCpuSpecId = aVar6;
          UNLOCK();
          UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
          FCpuProfilerTrace::OutputEventMetadataSpec
                    ((uint)pTVar2->TraceCpuSpecId,(wchar_t *)pTVar2->_padding_,
                     (wchar_t *)pTVar2->_padding_,&local_28.CborData);
          UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    pFVar8->TraceCpuSpecId = (uint)pTVar2->TraceCpuSpecId;
  }
  FRDGScope_RHI::FRDGScope_RHI((FRDGScope_RHI *)this,param_1,pFVar8);
  this->TypeIndex = '\x02';
  return;
}

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31>_const_*,std::tuple<>_>_> @ 144856670

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31>_const_*,std::tuple<>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31>_const_*,std::tuple<>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar1;
  TRHIBreadcrumbDesc<31> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FMetadataSerializer local_28;
  
  bVar1 = this->TypeIndex;
  if (3 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[bVar1])(this);
  pFVar7 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pTVar2 = (param_2->_Myfirst)._Val;
  if (pTVar2 == (TRHIBreadcrumbDesc<31> *)0x0) {
    pFVar8 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
    pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar8->Allocator = pFVar7;
    pFVar8->Data = (FRHIBreadcrumbData *)pTVar2;
    pFVar8->TraceCpuSpecId = 0;
    pFVar8->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar8->ID = uVar5;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0BP___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar8[1]._padding_ = (longlong)pTVar2;
    if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar4) {
        lpCriticalSection = &pTVar2->Cs;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar6 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)pTVar2->_padding_,(char *)pTVar2->_padding_,
                             (uint)pTVar2->_padding_);
          LOCK();
          pTVar2->TraceCpuSpecId = aVar6;
          UNLOCK();
          UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
          FCpuProfilerTrace::OutputEventMetadataSpec
                    ((uint)pTVar2->TraceCpuSpecId,(wchar_t *)pTVar2->_padding_,
                     (wchar_t *)pTVar2->_padding_,&local_28.CborData);
          UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    pFVar8->TraceCpuSpecId = (uint)pTVar2->TraceCpuSpecId;
  }
  FRDGScope_RHI::FRDGScope_RHI((FRDGScope_RHI *)this,param_1,pFVar8);
  this->TypeIndex = '\x02';
  return;
}

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<39>_const_*,std::tuple<>_>_> @ 144856820

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<39>_const_*,std::tuple<>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<39>_const_*,std::tuple<>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar1;
  TRHIBreadcrumbDesc<39> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FMetadataSerializer local_28;
  
  bVar1 = this->TypeIndex;
  if (3 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[bVar1])(this);
  pFVar7 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pTVar2 = (param_2->_Myfirst)._Val;
  if (pTVar2 == (TRHIBreadcrumbDesc<39> *)0x0) {
    pFVar8 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
    pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar8->Allocator = pFVar7;
    pFVar8->Data = (FRHIBreadcrumbData *)pTVar2;
    pFVar8->TraceCpuSpecId = 0;
    pFVar8->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar8->ID = uVar5;
    pFVar8->_padding_ =
         (longlong)
         &UE::RHI::Breadcrumbs::Private::
          TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<39>_>::_vftable_;
    pFVar8[1]._padding_ = (longlong)pTVar2;
    if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar4) {
        lpCriticalSection = &pTVar2->Cs;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar6 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)pTVar2->_padding_,(char *)pTVar2->_padding_,
                             (uint)pTVar2->_padding_);
          LOCK();
          pTVar2->TraceCpuSpecId = aVar6;
          UNLOCK();
          UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
          FCpuProfilerTrace::OutputEventMetadataSpec
                    ((uint)pTVar2->TraceCpuSpecId,(wchar_t *)pTVar2->_padding_,
                     (wchar_t *)pTVar2->_padding_,&local_28.CborData);
          UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    pFVar8->TraceCpuSpecId = (uint)pTVar2->TraceCpuSpecId;
  }
  FRDGScope_RHI::FRDGScope_RHI((FRDGScope_RHI *)this,param_1,pFVar8);
  this->TypeIndex = '\x02';
  return;
}

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<11>_const_*,std::tuple<>_>_> @ 1448569d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<11>_const_*,std::tuple<>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<11>_const_*,std::tuple<>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar1;
  TRHIBreadcrumbDesc<11> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FMetadataSerializer local_28;
  
  bVar1 = this->TypeIndex;
  if (3 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[bVar1])(this);
  pFVar7 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pTVar2 = (param_2->_Myfirst)._Val;
  if (pTVar2 == (TRHIBreadcrumbDesc<11> *)0x0) {
    pFVar8 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
    pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar8->Allocator = pFVar7;
    pFVar8->Data = (FRHIBreadcrumbData *)pTVar2;
    pFVar8->TraceCpuSpecId = 0;
    pFVar8->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar8->ID = uVar5;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0L___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar8[1]._padding_ = (longlong)pTVar2;
    if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar4) {
        lpCriticalSection = &pTVar2->Cs;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar6 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)pTVar2->_padding_,(char *)pTVar2->_padding_,
                             (uint)pTVar2->_padding_);
          LOCK();
          pTVar2->TraceCpuSpecId = aVar6;
          UNLOCK();
          UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
          FCpuProfilerTrace::OutputEventMetadataSpec
                    ((uint)pTVar2->TraceCpuSpecId,(wchar_t *)pTVar2->_padding_,
                     (wchar_t *)pTVar2->_padding_,&local_28.CborData);
          UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    pFVar8->TraceCpuSpecId = (uint)pTVar2->TraceCpuSpecId;
  }
  FRDGScope_RHI::FRDGScope_RHI((FRDGScope_RHI *)this,param_1,pFVar8);
  this->TypeIndex = '\x02';
  return;
}

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[10],wchar_t_const_*_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[10],wchar_t_const_*_&&>_>_>_> @ 1448e38e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[10],wchar_t_const_*_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[10],wchar_t_const_*_&&>_>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[10],wchar_t_const_*_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[10],wchar_t_const_*_&&>_>_>
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
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A_V__tuple_AEAUFRDGFormatTag_Private_Breadcrumbs_RHI_UE__AEAY09__CB_W__QEAPEB_W_std___Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<30>_const_*,std::tuple<>_>_> @ 1448e3ab0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<30>_const_*,std::tuple<>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<30>_const_*,std::tuple<>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar1;
  TRHIBreadcrumbDesc<30> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FMetadataSerializer local_28;
  
  bVar1 = this->TypeIndex;
  if (3 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[bVar1])(this);
  pFVar7 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pTVar2 = (param_2->_Myfirst)._Val;
  if (pTVar2 == (TRHIBreadcrumbDesc<30> *)0x0) {
    pFVar8 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
    pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar8->Allocator = pFVar7;
    pFVar8->Data = (FRHIBreadcrumbData *)pTVar2;
    pFVar8->TraceCpuSpecId = 0;
    pFVar8->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar8->ID = uVar5;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0BO___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar8[1]._padding_ = (longlong)pTVar2;
    if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar4) {
        lpCriticalSection = &pTVar2->Cs;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar6 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)pTVar2->_padding_,(char *)pTVar2->_padding_,
                             (uint)pTVar2->_padding_);
          LOCK();
          pTVar2->TraceCpuSpecId = aVar6;
          UNLOCK();
          UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
          FCpuProfilerTrace::OutputEventMetadataSpec
                    ((uint)pTVar2->TraceCpuSpecId,(wchar_t *)pTVar2->_padding_,
                     (wchar_t *)pTVar2->_padding_,&local_28.CborData);
          UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    pFVar8->TraceCpuSpecId = (uint)pTVar2->TraceCpuSpecId;
  }
  FRDGScope_RHI::FRDGScope_RHI((FRDGScope_RHI *)this,param_1,pFVar8);
  this->TypeIndex = '\x02';
  return;
}

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<42>_const_*,std::tuple<>_>_> @ 1448e3c60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<42>_const_*,std::tuple<>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<42>_const_*,std::tuple<>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar1;
  TRHIBreadcrumbDesc<42> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FMetadataSerializer local_28;
  
  bVar1 = this->TypeIndex;
  if (3 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[bVar1])(this);
  pFVar7 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pTVar2 = (param_2->_Myfirst)._Val;
  if (pTVar2 == (TRHIBreadcrumbDesc<42> *)0x0) {
    pFVar8 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
    pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar8->Allocator = pFVar7;
    pFVar8->Data = (FRHIBreadcrumbData *)pTVar2;
    pFVar8->TraceCpuSpecId = 0;
    pFVar8->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar8->ID = uVar5;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0CK___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar8[1]._padding_ = (longlong)pTVar2;
    if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar4) {
        lpCriticalSection = &pTVar2->Cs;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar6 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)pTVar2->_padding_,(char *)pTVar2->_padding_,
                             (uint)pTVar2->_padding_);
          LOCK();
          pTVar2->TraceCpuSpecId = aVar6;
          UNLOCK();
          UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
          FCpuProfilerTrace::OutputEventMetadataSpec
                    ((uint)pTVar2->TraceCpuSpecId,(wchar_t *)pTVar2->_padding_,
                     (wchar_t *)pTVar2->_padding_,&local_28.CborData);
          UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    pFVar8->TraceCpuSpecId = (uint)pTVar2->TraceCpuSpecId;
  }
  FRDGScope_RHI::FRDGScope_RHI((FRDGScope_RHI *)this,param_1,pFVar8);
  this->TypeIndex = '\x02';
  return;
}

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<49>_const_*,std::tuple<>_>_> @ 1448e3e10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<49>_const_*,std::tuple<>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<49>_const_*,std::tuple<>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar1;
  TRHIBreadcrumbDesc<49> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FMetadataSerializer local_28;
  
  bVar1 = this->TypeIndex;
  if (3 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[bVar1])(this);
  pFVar7 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pTVar2 = (param_2->_Myfirst)._Val;
  if (pTVar2 == (TRHIBreadcrumbDesc<49> *)0x0) {
    pFVar8 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
    pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar8->Allocator = pFVar7;
    pFVar8->Data = (FRHIBreadcrumbData *)pTVar2;
    pFVar8->TraceCpuSpecId = 0;
    pFVar8->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar8->ID = uVar5;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0DB___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar8[1]._padding_ = (longlong)pTVar2;
    if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar4) {
        lpCriticalSection = &pTVar2->Cs;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar6 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)pTVar2->_padding_,(char *)pTVar2->_padding_,
                             (uint)pTVar2->_padding_);
          LOCK();
          pTVar2->TraceCpuSpecId = aVar6;
          UNLOCK();
          UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
          FCpuProfilerTrace::OutputEventMetadataSpec
                    ((uint)pTVar2->TraceCpuSpecId,(wchar_t *)pTVar2->_padding_,
                     (wchar_t *)pTVar2->_padding_,&local_28.CborData);
          UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    pFVar8->TraceCpuSpecId = (uint)pTVar2->TraceCpuSpecId;
  }
  FRDGScope_RHI::FRDGScope_RHI((FRDGScope_RHI *)this,param_1,pFVar8);
  this->TypeIndex = '\x02';
  return;
}

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<32>_const_*,std::tuple<>_>_> @ 144991040

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<32>_const_*,std::tuple<>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<32>_const_*,std::tuple<>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar1;
  TRHIBreadcrumbDesc<32> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FMetadataSerializer local_28;
  
  bVar1 = this->TypeIndex;
  if (3 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[bVar1])(this);
  pFVar7 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pTVar2 = (param_2->_Myfirst)._Val;
  if (pTVar2 == (TRHIBreadcrumbDesc<32> *)0x0) {
    pFVar8 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
    pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar8->Allocator = pFVar7;
    pFVar8->Data = (FRHIBreadcrumbData *)pTVar2;
    pFVar8->TraceCpuSpecId = 0;
    pFVar8->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar8->ID = uVar5;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0CA___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar8[1]._padding_ = (longlong)pTVar2;
    if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar4) {
        lpCriticalSection = &pTVar2->Cs;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar6 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)pTVar2->_padding_,(char *)pTVar2->_padding_,
                             (uint)pTVar2->_padding_);
          LOCK();
          pTVar2->TraceCpuSpecId = aVar6;
          UNLOCK();
          UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
          FCpuProfilerTrace::OutputEventMetadataSpec
                    ((uint)pTVar2->TraceCpuSpecId,(wchar_t *)pTVar2->_padding_,
                     (wchar_t *)pTVar2->_padding_,&local_28.CborData);
          UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    pFVar8->TraceCpuSpecId = (uint)pTVar2->TraceCpuSpecId;
  }
  FRDGScope_RHI::FRDGScope_RHI((FRDGScope_RHI *)this,param_1,pFVar8);
  this->TypeIndex = '\x02';
  return;
}

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<40>_const_*,std::tuple<>_>_> @ 1449911f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<40>_const_*,std::tuple<>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<40>_const_*,std::tuple<>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar1;
  TRHIBreadcrumbDesc<40> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FMetadataSerializer local_28;
  
  bVar1 = this->TypeIndex;
  if (3 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[bVar1])(this);
  pFVar7 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pTVar2 = (param_2->_Myfirst)._Val;
  if (pTVar2 == (TRHIBreadcrumbDesc<40> *)0x0) {
    pFVar8 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
    pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar8->Allocator = pFVar7;
    pFVar8->Data = (FRHIBreadcrumbData *)pTVar2;
    pFVar8->TraceCpuSpecId = 0;
    pFVar8->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar8->ID = uVar5;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0CI___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar8[1]._padding_ = (longlong)pTVar2;
    if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar4) {
        lpCriticalSection = &pTVar2->Cs;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar6 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)pTVar2->_padding_,(char *)pTVar2->_padding_,
                             (uint)pTVar2->_padding_);
          LOCK();
          pTVar2->TraceCpuSpecId = aVar6;
          UNLOCK();
          UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
          FCpuProfilerTrace::OutputEventMetadataSpec
                    ((uint)pTVar2->TraceCpuSpecId,(wchar_t *)pTVar2->_padding_,
                     (wchar_t *)pTVar2->_padding_,&local_28.CborData);
          UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    pFVar8->TraceCpuSpecId = (uint)pTVar2->TraceCpuSpecId;
  }
  FRDGScope_RHI::FRDGScope_RHI((FRDGScope_RHI *)this,param_1,pFVar8);
  this->TypeIndex = '\x02';
  return;
}

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[3],wchar_t_const_*_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[3],wchar_t_const_*_&&>_>_>_> @ 144a55800

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[3],wchar_t_const_*_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[3],wchar_t_const_*_&&>_>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[3],wchar_t_const_*_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[3],wchar_t_const_*_&&>_>_>
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
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A_V__tuple_AEAUFRDGFormatTag_Private_Breadcrumbs_RHI_UE__AEAY02__CB_W__QEAPEB_W_std___Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<27>_const_*,std::tuple<>_>_> @ 144a559d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<27>_const_*,std::tuple<>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<27>_const_*,std::tuple<>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar1;
  TRHIBreadcrumbDesc<27> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FMetadataSerializer local_28;
  
  bVar1 = this->TypeIndex;
  if (3 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[bVar1])(this);
  pFVar7 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pTVar2 = (param_2->_Myfirst)._Val;
  if (pTVar2 == (TRHIBreadcrumbDesc<27> *)0x0) {
    pFVar8 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
    pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar8->Allocator = pFVar7;
    pFVar8->Data = (FRHIBreadcrumbData *)pTVar2;
    pFVar8->TraceCpuSpecId = 0;
    pFVar8->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar8->ID = uVar5;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0BL___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar8[1]._padding_ = (longlong)pTVar2;
    if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar4) {
        lpCriticalSection = &pTVar2->Cs;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar6 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)pTVar2->_padding_,(char *)pTVar2->_padding_,
                             (uint)pTVar2->_padding_);
          LOCK();
          pTVar2->TraceCpuSpecId = aVar6;
          UNLOCK();
          UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
          FCpuProfilerTrace::OutputEventMetadataSpec
                    ((uint)pTVar2->TraceCpuSpecId,(wchar_t *)pTVar2->_padding_,
                     (wchar_t *)pTVar2->_padding_,&local_28.CborData);
          UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    pFVar8->TraceCpuSpecId = (uint)pTVar2->TraceCpuSpecId;
  }
  FRDGScope_RHI::FRDGScope_RHI((FRDGScope_RHI *)this,param_1,pFVar8);
  this->TypeIndex = '\x02';
  return;
}

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<29>_const_*,std::tuple<>_>_> @ 144a55b80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<29>_const_*,std::tuple<>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<29>_const_*,std::tuple<>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar1;
  TRHIBreadcrumbDesc<29> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FMetadataSerializer local_28;
  
  bVar1 = this->TypeIndex;
  if (3 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[bVar1])(this);
  pFVar7 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pTVar2 = (param_2->_Myfirst)._Val;
  if (pTVar2 == (TRHIBreadcrumbDesc<29> *)0x0) {
    pFVar8 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
    pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar8->Allocator = pFVar7;
    pFVar8->Data = (FRHIBreadcrumbData *)pTVar2;
    pFVar8->TraceCpuSpecId = 0;
    pFVar8->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar8->ID = uVar5;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0BN___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar8[1]._padding_ = (longlong)pTVar2;
    if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar4) {
        lpCriticalSection = &pTVar2->Cs;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar6 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)pTVar2->_padding_,(char *)pTVar2->_padding_,
                             (uint)pTVar2->_padding_);
          LOCK();
          pTVar2->TraceCpuSpecId = aVar6;
          UNLOCK();
          UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
          FCpuProfilerTrace::OutputEventMetadataSpec
                    ((uint)pTVar2->TraceCpuSpecId,(wchar_t *)pTVar2->_padding_,
                     (wchar_t *)pTVar2->_padding_,&local_28.CborData);
          UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    pFVar8->TraceCpuSpecId = (uint)pTVar2->TraceCpuSpecId;
  }
  FRDGScope_RHI::FRDGScope_RHI((FRDGScope_RHI *)this,param_1,pFVar8);
  this->TypeIndex = '\x02';
  return;
}

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<37>_const_*,std::tuple<>_>_> @ 144af71a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<37>_const_*,std::tuple<>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<37>_const_*,std::tuple<>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar1;
  TRHIBreadcrumbDesc<37> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FMetadataSerializer local_28;
  
  bVar1 = this->TypeIndex;
  if (3 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[bVar1])(this);
  pFVar7 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pTVar2 = (param_2->_Myfirst)._Val;
  if (pTVar2 == (TRHIBreadcrumbDesc<37> *)0x0) {
    pFVar8 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
    pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar8->Allocator = pFVar7;
    pFVar8->Data = (FRHIBreadcrumbData *)pTVar2;
    pFVar8->TraceCpuSpecId = 0;
    pFVar8->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar8->ID = uVar5;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0CF___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar8[1]._padding_ = (longlong)pTVar2;
    if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar4) {
        lpCriticalSection = &pTVar2->Cs;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar6 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)pTVar2->_padding_,(char *)pTVar2->_padding_,
                             (uint)pTVar2->_padding_);
          LOCK();
          pTVar2->TraceCpuSpecId = aVar6;
          UNLOCK();
          UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
          FCpuProfilerTrace::OutputEventMetadataSpec
                    ((uint)pTVar2->TraceCpuSpecId,(wchar_t *)pTVar2->_padding_,
                     (wchar_t *)pTVar2->_padding_,&local_28.CborData);
          UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    pFVar8->TraceCpuSpecId = (uint)pTVar2->TraceCpuSpecId;
  }
  FRDGScope_RHI::FRDGScope_RHI((FRDGScope_RHI *)this,param_1,pFVar8);
  this->TypeIndex = '\x02';
  return;
}

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<7>_const_*,std::tuple<>_>_> @ 144b8f250

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<7>_const_*,std::tuple<>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<7>_const_*,std::tuple<>_> *param_2
          )

{
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar1;
  TRHIBreadcrumbDesc<7> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FMetadataSerializer local_28;
  
  bVar1 = this->TypeIndex;
  if (3 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[bVar1])(this);
  pFVar7 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pTVar2 = (param_2->_Myfirst)._Val;
  if (pTVar2 == (TRHIBreadcrumbDesc<7> *)0x0) {
    pFVar8 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
    pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar8->Allocator = pFVar7;
    pFVar8->Data = (FRHIBreadcrumbData *)pTVar2;
    pFVar8->TraceCpuSpecId = 0;
    pFVar8->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar8->ID = uVar5;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__06__V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar8[1]._padding_ = (longlong)pTVar2;
    if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar4) {
        lpCriticalSection = &pTVar2->Cs;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar6 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)pTVar2->_padding_,(char *)pTVar2->_padding_,
                             (uint)pTVar2->_padding_);
          LOCK();
          pTVar2->TraceCpuSpecId = aVar6;
          UNLOCK();
          UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
          FCpuProfilerTrace::OutputEventMetadataSpec
                    ((uint)pTVar2->TraceCpuSpecId,(wchar_t *)pTVar2->_padding_,
                     (wchar_t *)pTVar2->_padding_,&local_28.CborData);
          UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    pFVar8->TraceCpuSpecId = (uint)pTVar2->TraceCpuSpecId;
  }
  FRDGScope_RHI::FRDGScope_RHI((FRDGScope_RHI *)this,param_1,pFVar8);
  this->TypeIndex = '\x02';
  return;
}

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[35],wchar_t_const_*_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[35],wchar_t_const_*_&&>_>_>_> @ 144b8f400

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[35],wchar_t_const_*_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[35],wchar_t_const_*_&&>_>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[35],wchar_t_const_*_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[35],wchar_t_const_*_&&>_>_>
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
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A_V__tuple_AEAUFRDGFormatTag_Private_Breadcrumbs_RHI_UE__AEAY0CD___CB_W__QEAPEB_W_std___Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[43],wchar_t_const_*_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[43],wchar_t_const_*_&&>_>_>_> @ 144b8f5d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[43],wchar_t_const_*_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[43],wchar_t_const_*_&&>_>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[43],wchar_t_const_*_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[43],wchar_t_const_*_&&>_>_>
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
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A_V__tuple_AEAUFRDGFormatTag_Private_Breadcrumbs_RHI_UE__AEAY0CL___CB_W__QEAPEB_W_std___Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<8>_const_*,std::tuple<>_>_> @ 144d39100

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<8>_const_*,std::tuple<>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<8>_const_*,std::tuple<>_> *param_2
          )

{
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar1;
  TRHIBreadcrumbDesc<8> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FMetadataSerializer local_28;
  
  bVar1 = this->TypeIndex;
  if (3 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[bVar1])(this);
  pFVar7 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pTVar2 = (param_2->_Myfirst)._Val;
  if (pTVar2 == (TRHIBreadcrumbDesc<8> *)0x0) {
    pFVar8 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
    pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar8->Allocator = pFVar7;
    pFVar8->Data = (FRHIBreadcrumbData *)pTVar2;
    pFVar8->TraceCpuSpecId = 0;
    pFVar8->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar8->ID = uVar5;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__07__V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar8[1]._padding_ = (longlong)pTVar2;
    if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar4) {
        lpCriticalSection = &pTVar2->Cs;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar6 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)pTVar2->_padding_,(char *)pTVar2->_padding_,
                             (uint)pTVar2->_padding_);
          LOCK();
          pTVar2->TraceCpuSpecId = aVar6;
          UNLOCK();
          UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
          FCpuProfilerTrace::OutputEventMetadataSpec
                    ((uint)pTVar2->TraceCpuSpecId,(wchar_t *)pTVar2->_padding_,
                     (wchar_t *)pTVar2->_padding_,&local_28.CborData);
          UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    pFVar8->TraceCpuSpecId = (uint)pTVar2->TraceCpuSpecId;
  }
  FRDGScope_RHI::FRDGScope_RHI((FRDGScope_RHI *)this,param_1,pFVar8);
  this->TypeIndex = '\x02';
  return;
}

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[21],wchar_t_const_*_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[21],wchar_t_const_*_&&>_>_>_> @ 144d392b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[21],wchar_t_const_*_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[21],wchar_t_const_*_&&>_>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[21],wchar_t_const_*_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[21],wchar_t_const_*_&&>_>_>
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
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A_V__tuple_AEAUFRDGFormatTag_Private_Breadcrumbs_RHI_UE__AEAY0BF___CB_W__QEAPEB_W_std___Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<36>_const_*,std::tuple<>_>_> @ 144df1080

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<36>_const_*,std::tuple<>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<36>_const_*,std::tuple<>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar1;
  TRHIBreadcrumbDesc<36> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FMetadataSerializer local_28;
  
  bVar1 = this->TypeIndex;
  if (3 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[bVar1])(this);
  pFVar7 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pTVar2 = (param_2->_Myfirst)._Val;
  if (pTVar2 == (TRHIBreadcrumbDesc<36> *)0x0) {
    pFVar8 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
    pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar8->Allocator = pFVar7;
    pFVar8->Data = (FRHIBreadcrumbData *)pTVar2;
    pFVar8->TraceCpuSpecId = 0;
    pFVar8->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar8->ID = uVar5;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0CE___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar8[1]._padding_ = (longlong)pTVar2;
    if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar4) {
        lpCriticalSection = &pTVar2->Cs;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar6 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)pTVar2->_padding_,(char *)pTVar2->_padding_,
                             (uint)pTVar2->_padding_);
          LOCK();
          pTVar2->TraceCpuSpecId = aVar6;
          UNLOCK();
          UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
          FCpuProfilerTrace::OutputEventMetadataSpec
                    ((uint)pTVar2->TraceCpuSpecId,(wchar_t *)pTVar2->_padding_,
                     (wchar_t *)pTVar2->_padding_,&local_28.CborData);
          UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    pFVar8->TraceCpuSpecId = (uint)pTVar2->TraceCpuSpecId;
  }
  FRDGScope_RHI::FRDGScope_RHI((FRDGScope_RHI *)this,param_1,pFVar8);
  this->TypeIndex = '\x02';
  return;
}

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<38>_const_*,std::tuple<>_>_> @ 144f61790

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<38>_const_*,std::tuple<>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<38>_const_*,std::tuple<>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar1;
  TRHIBreadcrumbDesc<38> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FMetadataSerializer local_28;
  
  bVar1 = this->TypeIndex;
  if (3 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[bVar1])(this);
  pFVar7 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pTVar2 = (param_2->_Myfirst)._Val;
  if (pTVar2 == (TRHIBreadcrumbDesc<38> *)0x0) {
    pFVar8 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
    pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar8->Allocator = pFVar7;
    pFVar8->Data = (FRHIBreadcrumbData *)pTVar2;
    pFVar8->TraceCpuSpecId = 0;
    pFVar8->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar8->ID = uVar5;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0CG___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar8[1]._padding_ = (longlong)pTVar2;
    if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar4) {
        lpCriticalSection = &pTVar2->Cs;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar6 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)pTVar2->_padding_,(char *)pTVar2->_padding_,
                             (uint)pTVar2->_padding_);
          LOCK();
          pTVar2->TraceCpuSpecId = aVar6;
          UNLOCK();
          UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
          FCpuProfilerTrace::OutputEventMetadataSpec
                    ((uint)pTVar2->TraceCpuSpecId,(wchar_t *)pTVar2->_padding_,
                     (wchar_t *)pTVar2->_padding_,&local_28.CborData);
          UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    pFVar8->TraceCpuSpecId = (uint)pTVar2->TraceCpuSpecId;
  }
  FRDGScope_RHI::FRDGScope_RHI((FRDGScope_RHI *)this,param_1,pFVar8);
  this->TypeIndex = '\x02';
  return;
}

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<50>_const_*,std::tuple<>_>_> @ 14502f490

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<50>_const_*,std::tuple<>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<50>_const_*,std::tuple<>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar1;
  TRHIBreadcrumbDesc<50> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FMetadataSerializer local_28;
  
  bVar1 = this->TypeIndex;
  if (3 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[bVar1])(this);
  pFVar7 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pTVar2 = (param_2->_Myfirst)._Val;
  if (pTVar2 == (TRHIBreadcrumbDesc<50> *)0x0) {
    pFVar8 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
    pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar8->Allocator = pFVar7;
    pFVar8->Data = (FRHIBreadcrumbData *)pTVar2;
    pFVar8->TraceCpuSpecId = 0;
    pFVar8->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar8->ID = uVar5;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0DC___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar8[1]._padding_ = (longlong)pTVar2;
    if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar4) {
        lpCriticalSection = &pTVar2->Cs;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar6 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)pTVar2->_padding_,(char *)pTVar2->_padding_,
                             (uint)pTVar2->_padding_);
          LOCK();
          pTVar2->TraceCpuSpecId = aVar6;
          UNLOCK();
          UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
          FCpuProfilerTrace::OutputEventMetadataSpec
                    ((uint)pTVar2->TraceCpuSpecId,(wchar_t *)pTVar2->_padding_,
                     (wchar_t *)pTVar2->_padding_,&local_28.CborData);
          UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    pFVar8->TraceCpuSpecId = (uint)pTVar2->TraceCpuSpecId;
  }
  FRDGScope_RHI::FRDGScope_RHI((FRDGScope_RHI *)this,param_1,pFVar8);
  this->TypeIndex = '\x02';
  return;
}

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[14],wchar_t_const_*_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[14],wchar_t_const_*_&&>_>_>_> @ 145125590

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[14],wchar_t_const_*_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[14],wchar_t_const_*_&&>_>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[14],wchar_t_const_*_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[14],wchar_t_const_*_&&>_>_>
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
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A_V__tuple_AEAUFRDGFormatTag_Private_Breadcrumbs_RHI_UE__AEAY0O___CB_W__QEAPEB_W_std___Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

// ~TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 145404df0

void __thiscall
TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
::
~TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
           *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  
  bVar1 = this->TypeIndex;
  if (2 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 1:
    if (*(longlong *)this != 0) {
      plVar4 = (longlong *)&this->field_0x10;
      if (*(longlong **)&this->field_0x28 != (longlong *)0x0) {
        plVar4 = *(longlong **)&this->field_0x28;
      }
                    /* WARNING: Could not recover jumptable at 0x0001446ec948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x10))();
      return;
    }
    return;
  case 2:
    if (*(longlong *)this != 0) {
      plVar4 = (longlong *)&this->field_0x10;
      if (*(longlong **)&this->field_0x28 != (longlong *)0x0) {
        plVar4 = *(longlong **)&this->field_0x28;
      }
                    /* WARNING: Could not recover jumptable at 0x0001446ec978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x10))();
      return;
    }
    return;
  }
  if (*(longlong *)this != 0) {
    plVar4 = (longlong *)&this->field_0x10;
    if (*(longlong **)&this->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&this->field_0x28;
    }
                    /* WARNING: Could not recover jumptable at 0x0001446ec9a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x10))();
    return;
  }
  return;
}

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<35>_const_*,std::tuple<>_>_> @ 145600b60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<35>_const_*,std::tuple<>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<35>_const_*,std::tuple<>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar1;
  TRHIBreadcrumbDesc<35> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FMetadataSerializer local_28;
  
  bVar1 = this->TypeIndex;
  if (3 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[bVar1])(this);
  pFVar7 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pTVar2 = (param_2->_Myfirst)._Val;
  if (pTVar2 == (TRHIBreadcrumbDesc<35> *)0x0) {
    pFVar8 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
    pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar8->Allocator = pFVar7;
    pFVar8->Data = (FRHIBreadcrumbData *)pTVar2;
    pFVar8->TraceCpuSpecId = 0;
    pFVar8->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar8->ID = uVar5;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0CD___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar8[1]._padding_ = (longlong)pTVar2;
    if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar4) {
        lpCriticalSection = &pTVar2->Cs;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar6 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)pTVar2->_padding_,(char *)pTVar2->_padding_,
                             (uint)pTVar2->_padding_);
          LOCK();
          pTVar2->TraceCpuSpecId = aVar6;
          UNLOCK();
          UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
          FCpuProfilerTrace::OutputEventMetadataSpec
                    ((uint)pTVar2->TraceCpuSpecId,(wchar_t *)pTVar2->_padding_,
                     (wchar_t *)pTVar2->_padding_,&local_28.CborData);
          UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    pFVar8->TraceCpuSpecId = (uint)pTVar2->TraceCpuSpecId;
  }
  FRDGScope_RHI::FRDGScope_RHI((FRDGScope_RHI *)this,param_1,pFVar8);
  this->TypeIndex = '\x02';
  return;
}

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<41>_const_*,std::tuple<>_>_> @ 1456607c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<41>_const_*,std::tuple<>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<41>_const_*,std::tuple<>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar1;
  TRHIBreadcrumbDesc<41> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FMetadataSerializer local_28;
  
  bVar1 = this->TypeIndex;
  if (3 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[bVar1])(this);
  pFVar7 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pTVar2 = (param_2->_Myfirst)._Val;
  if (pTVar2 == (TRHIBreadcrumbDesc<41> *)0x0) {
    pFVar8 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
    pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar8->Allocator = pFVar7;
    pFVar8->Data = (FRHIBreadcrumbData *)pTVar2;
    pFVar8->TraceCpuSpecId = 0;
    pFVar8->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar8->ID = uVar5;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0CJ___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar8[1]._padding_ = (longlong)pTVar2;
    if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar4) {
        lpCriticalSection = &pTVar2->Cs;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar6 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)pTVar2->_padding_,(char *)pTVar2->_padding_,
                             (uint)pTVar2->_padding_);
          LOCK();
          pTVar2->TraceCpuSpecId = aVar6;
          UNLOCK();
          UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
          FCpuProfilerTrace::OutputEventMetadataSpec
                    ((uint)pTVar2->TraceCpuSpecId,(wchar_t *)pTVar2->_padding_,
                     (wchar_t *)pTVar2->_padding_,&local_28.CborData);
          UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    pFVar8->TraceCpuSpecId = (uint)pTVar2->TraceCpuSpecId;
  }
  FRDGScope_RHI::FRDGScope_RHI((FRDGScope_RHI *)this,param_1,pFVar8);
  this->TypeIndex = '\x02';
  return;
}

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[3],wchar_t_const_*_&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[3],wchar_t_const_*_&>_>_>_> @ 14574b5a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[3],wchar_t_const_*_&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[3],wchar_t_const_*_&>_>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[3],wchar_t_const_*_&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[3],wchar_t_const_*_&>_>_>
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
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A_V__tuple_AEAUFRDGFormatTag_Private_Breadcrumbs_RHI_UE__AEAY02__CB_WAEAPEB_W_std___Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<43>_const_*,std::tuple<>_>_> @ 14574b770

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<43>_const_*,std::tuple<>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<43>_const_*,std::tuple<>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar1;
  TRHIBreadcrumbDesc<43> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FMetadataSerializer local_28;
  
  bVar1 = this->TypeIndex;
  if (3 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[bVar1])(this);
  pFVar7 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pTVar2 = (param_2->_Myfirst)._Val;
  if (pTVar2 == (TRHIBreadcrumbDesc<43> *)0x0) {
    pFVar8 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
    pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar8->Allocator = pFVar7;
    pFVar8->Data = (FRHIBreadcrumbData *)pTVar2;
    pFVar8->TraceCpuSpecId = 0;
    pFVar8->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar8->ID = uVar5;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0CL___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar8[1]._padding_ = (longlong)pTVar2;
    if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar4) {
        lpCriticalSection = &pTVar2->Cs;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar6 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)pTVar2->_padding_,(char *)pTVar2->_padding_,
                             (uint)pTVar2->_padding_);
          LOCK();
          pTVar2->TraceCpuSpecId = aVar6;
          UNLOCK();
          UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
          FCpuProfilerTrace::OutputEventMetadataSpec
                    ((uint)pTVar2->TraceCpuSpecId,(wchar_t *)pTVar2->_padding_,
                     (wchar_t *)pTVar2->_padding_,&local_28.CborData);
          UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    pFVar8->TraceCpuSpecId = (uint)pTVar2->TraceCpuSpecId;
  }
  FRDGScope_RHI::FRDGScope_RHI((FRDGScope_RHI *)this,param_1,pFVar8);
  this->TypeIndex = '\x02';
  return;
}

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<45>_const_*,std::tuple<>_>_> @ 14574b920

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<45>_const_*,std::tuple<>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<45>_const_*,std::tuple<>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar1;
  TRHIBreadcrumbDesc<45> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FMetadataSerializer local_28;
  
  bVar1 = this->TypeIndex;
  if (3 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[bVar1])(this);
  pFVar7 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pTVar2 = (param_2->_Myfirst)._Val;
  if (pTVar2 == (TRHIBreadcrumbDesc<45> *)0x0) {
    pFVar8 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
    pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar8->Allocator = pFVar7;
    pFVar8->Data = (FRHIBreadcrumbData *)pTVar2;
    pFVar8->TraceCpuSpecId = 0;
    pFVar8->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar8->ID = uVar5;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0CN___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar8[1]._padding_ = (longlong)pTVar2;
    if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar4) {
        lpCriticalSection = &pTVar2->Cs;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar6 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)pTVar2->_padding_,(char *)pTVar2->_padding_,
                             (uint)pTVar2->_padding_);
          LOCK();
          pTVar2->TraceCpuSpecId = aVar6;
          UNLOCK();
          UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
          FCpuProfilerTrace::OutputEventMetadataSpec
                    ((uint)pTVar2->TraceCpuSpecId,(wchar_t *)pTVar2->_padding_,
                     (wchar_t *)pTVar2->_padding_,&local_28.CborData);
          UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    pFVar8->TraceCpuSpecId = (uint)pTVar2->TraceCpuSpecId;
  }
  FRDGScope_RHI::FRDGScope_RHI((FRDGScope_RHI *)this,param_1,pFVar8);
  this->TypeIndex = '\x02';
  return;
}

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<46>_const_*,std::tuple<>_>_> @ 14574bad0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<46>_const_*,std::tuple<>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<46>_const_*,std::tuple<>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar1;
  TRHIBreadcrumbDesc<46> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FMetadataSerializer local_28;
  
  bVar1 = this->TypeIndex;
  if (3 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[bVar1])(this);
  pFVar7 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pTVar2 = (param_2->_Myfirst)._Val;
  if (pTVar2 == (TRHIBreadcrumbDesc<46> *)0x0) {
    pFVar8 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
    pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar8->Allocator = pFVar7;
    pFVar8->Data = (FRHIBreadcrumbData *)pTVar2;
    pFVar8->TraceCpuSpecId = 0;
    pFVar8->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar8->ID = uVar5;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0CO___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar8[1]._padding_ = (longlong)pTVar2;
    if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar4) {
        lpCriticalSection = &pTVar2->Cs;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar6 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)pTVar2->_padding_,(char *)pTVar2->_padding_,
                             (uint)pTVar2->_padding_);
          LOCK();
          pTVar2->TraceCpuSpecId = aVar6;
          UNLOCK();
          UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
          FCpuProfilerTrace::OutputEventMetadataSpec
                    ((uint)pTVar2->TraceCpuSpecId,(wchar_t *)pTVar2->_padding_,
                     (wchar_t *)pTVar2->_padding_,&local_28.CborData);
          UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    pFVar8->TraceCpuSpecId = (uint)pTVar2->TraceCpuSpecId;
  }
  FRDGScope_RHI::FRDGScope_RHI((FRDGScope_RHI *)this,param_1,pFVar8);
  this->TypeIndex = '\x02';
  return;
}

// Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<44>_const_*,std::tuple<>_>_> @ 1457bec00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<44>_const_*,std::tuple<>_>_>
          (TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *this,
          FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<44>_const_*,std::tuple<>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar1;
  TRHIBreadcrumbDesc<44> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FMetadataSerializer local_28;
  
  bVar1 = this->TypeIndex;
  if (3 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[bVar1])(this);
  pFVar7 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pTVar2 = (param_2->_Myfirst)._Val;
  if (pTVar2 == (TRHIBreadcrumbDesc<44> *)0x0) {
    pFVar8 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
    pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar8->Allocator = pFVar7;
    pFVar8->Data = (FRHIBreadcrumbData *)pTVar2;
    pFVar8->TraceCpuSpecId = 0;
    pFVar8->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar8->ID = uVar5;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0CM___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar8[1]._padding_ = (longlong)pTVar2;
    if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar4) {
        lpCriticalSection = &pTVar2->Cs;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar6 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)pTVar2->_padding_,(char *)pTVar2->_padding_,
                             (uint)pTVar2->_padding_);
          LOCK();
          pTVar2->TraceCpuSpecId = aVar6;
          UNLOCK();
          UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
          FCpuProfilerTrace::OutputEventMetadataSpec
                    ((uint)pTVar2->TraceCpuSpecId,(wchar_t *)pTVar2->_padding_,
                     (wchar_t *)pTVar2->_padding_,&local_28.CborData);
          UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    pFVar8->TraceCpuSpecId = (uint)pTVar2->TraceCpuSpecId;
  }
  FRDGScope_RHI::FRDGScope_RHI((FRDGScope_RHI *)this,param_1,pFVar8);
  this->TypeIndex = '\x02';
  return;
}

