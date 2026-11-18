// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 8

// FScopedCapture @ 145d8e380

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FScopedCapture * __thiscall
RenderCaptureInterface::FScopedCapture::FScopedCapture
          (FScopedCapture *this,bool param_1,FRDGBuilder *param_2,wchar_t *param_3,wchar_t *param_4)

{
  int *piVar1;
  char cVar2;
  FRDGBuilder *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScopedCapture *pFVar7;
  FString *pFVar8;
  void *this_00;
  TRDGEmptyLambdaPass<_public:___cdecl_RenderCaptureInterface::FScopedCapture::FScopedCapture(bool,FRDGBuilder_&,wchar_t_const_*,wchar_t_const_*)_::_12_::<lambda_1>_>
  *pTVar9;
  FRDGScope *pFVar10;
  FRHIBreadcrumbAllocator *this_01;
  FRHIBreadcrumbNode *pFVar11;
  ulonglong uVar12;
  <lambda_1> local_res8 [2];
  <lambda_1> local_b8;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>_const_*,std::tuple<FString_&&>_>
  local_a8;
  FString local_98;
  FString local_88;
  FRDGEventName local_78;
  uint uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  
  if ((param_1) && (bVar5 = IRenderCaptureProvider::IsAvailable(), bVar5)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  this->bCapture = bVar5;
  this->GraphBuilder = param_2;
  this->RHICommandList = (FRHICommandList *)0x0;
  this->bEvent = param_3 != (wchar_t *)0x0;
  (this->RDGEvent).bIsSet = false;
  (this->RHIBreadcrumb).Ptr = (TOptional<FRHIBreadcrumbEventManual> *)0x0;
  if (((GIsThreadedRendering != false) && (bVar5 = IsInRenderingThread(), !bVar5)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GIsThreadedRendering || IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderCaptureInterface.cpp"
                         ,0x49,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FScopedCapture *)(*pcVar4)();
    return pFVar7;
  }
  if (this->bCapture != false) {
    pFVar3 = this->GraphBuilder;
    pFVar8 = ::FString::FString(&local_98,param_4);
    local_78.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.FormattedEventName.Data.ArrayNum = 0;
    local_78.FormattedEventName.Data.ArrayMax = 0;
    local_b8.FileName.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.FileName.Data.ArrayNum = (pFVar8->Data).ArrayNum;
    local_b8.FileName.Data.ArrayMax = (pFVar8->Data).ArrayMax;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
    local_78.EventFormat = L"BeginCapture";
    FRDGUserValidation::ValidateAddPass(&pFVar3->UserValidation,&local_78,NeverCull);
    FRDGBuilder::FlushAccessModeQueue(pFVar3);
    this_00 = FMemStackBase::Alloc((FMemStackBase *)&pFVar3->_padding_,0x198,8);
    pTVar9 = TRDGEmptyLambdaPass<`RenderCaptureInterface::FScopedCapture::FScopedCapture'::__l12::<lambda_1>_>
             ::
             TRDGEmptyLambdaPass<_RenderCaptureInterface::FScopedCapture::FScopedCapture_::__l12::<lambda_1>_>
                       (this_00,&local_78,NeverCull,&local_b8);
    piVar1 = &(pFVar3->Passes).Array.ArrayMax;
    iVar6 = (pFVar3->Passes).Array.ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                        (0x808,(ForElementType<FRDGPass_*> *)&pFVar3->Passes,piVar1);
    }
    (pFVar3->Passes).Array.ArrayNum = iVar6 + 1;
    (pFVar3->Passes).Array.AllocatorInstance.Data[iVar6] = (FRDGPass *)pTVar9;
    *(int *)&pTVar9->field_0x4c = (pFVar3->Passes).Array.ArrayNum + -1;
    FRDGBuilder::SetupEmptyPass(pFVar3,(FRDGPass *)pTVar9);
    if (local_78.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.FormattedEventName.Data.AllocatorInstance.Data);
    }
    if (local_b8.FileName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.FileName.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (this->bEvent != false) {
      cVar2 = *(char *)((longlong)&this->GraphBuilder->_padding_ + 6);
      if ((cVar2 != '\0') && ((cVar2 != '\x01' || ((this->GraphBuilder->_padding_ & 4) == 0)))) {
        pFVar8 = ::FString::FString(&local_88,param_3);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          local_50 = 0;
          uStack_4c = 0;
          ::Desc._12_8_ = ZEXT48(uStack_54);
          ::Desc._padding_._4_4_ = 0;
          ::Desc._padding_ = (longlong)u_FScopedCapture;
          ::Desc._padding_ = (longlong)u__s;
          ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
          ::Desc._padding_._0_4_ = 0x56;
          InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
          ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
          ::Desc.TraceGpuSpecId = 0;
          ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
          atexit(```RenderCaptureInterface::FScopedCapture::FScopedCapture'::__l17::<lambda_2>::
                 operator()<FString>'::__l3::<lambda_1>::operator()<FString>'::__l2::
                 _dynamic_atexit_destructor_for__Desc__);
          _Init_thread_footer(&::_TSS0);
        }
        pFVar3 = this->GraphBuilder;
        local_a8._Myfirst._Val = &::Desc;
        local_a8._padding_ = (longlong)pFVar8;
        if ((this->RDGEvent).bIsSet != false) {
          TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>
                    (&(this->RDGEvent).TypedValue);
        }
        (this->RDGEvent).TypedValue.State = (FRDGScopeState *)pFVar3;
        pFVar10 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                            ((FRDGAllocator *)&pFVar3->_padding_,(FRDGScope **)pFVar3);
        (this->RDGEvent).TypedValue.Scope = pFVar10;
        ((FState *)&pFVar3->_padding_)->Current = pFVar10;
        pFVar10 = (this->RDGEvent).TypedValue.Scope;
        uVar12 = (ulonglong)(pFVar10->Impl).Impl.TypeIndex;
        if ((3 < uVar12) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FScopedCapture *)(*pcVar4)();
          return pFVar7;
        }
        (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
          ::__l2::Destructors[uVar12])(&pFVar10->Impl);
        this_01 = FRDGScopeState::GetBreadcrumbAllocator((FRDGScopeState *)pFVar3);
        pFVar11 = FRHIBreadcrumbAllocator::
                  AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>,FString_&&>
                            (this_01,&local_a8);
        FRDGScope_RHI::FRDGScope_RHI
                  ((FRDGScope_RHI *)&pFVar10->Impl,(FRDGScopeState *)pFVar3,pFVar11);
        (pFVar10->Impl).Impl.TypeIndex = '\x02';
        if (*(bool *)((longlong)&pFVar3->_padding_ + 4) != false) {
          FRDGScope::BeginCPU((this->RDGEvent).TypedValue.Scope,
                              (FRHIComputeCommandList *)pFVar3->_padding_,false);
          local_res8[0].RHICmdList = (FRHIComputeCommandList *)pFVar3->_padding_;
          FRDGScope::TStorage<FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
          Dispatch<_FRDGScope::BeginGPU_::__l2::<lambda_1>_>
                    (&((this->RDGEvent).TypedValue.Scope)->Impl,local_res8);
        }
        (this->RDGEvent).bIsSet = true;
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return this;
}

// FScopedCapture @ 145d8e730

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FScopedCapture * __thiscall
RenderCaptureInterface::FScopedCapture::FScopedCapture
          (FScopedCapture *this,bool param_1,FRHICommandList *param_2,wchar_t *param_3,
          wchar_t *param_4)

{
  TUniquePtr<TOptional<FRHIBreadcrumbEventManual>,TDefaultDelete<TOptional<FRHIBreadcrumbEventManual>_>_>
  *pTVar1;
  FRHICommandList *pFVar2;
  FRHIComputeCommandList *pFVar3;
  code *pcVar4;
  bool bVar5;
  FScopedCapture *pFVar6;
  IRenderCaptureProvider *pIVar7;
  FString *pFVar8;
  TOptional<FRHIBreadcrumbEventManual> *pTVar9;
  TOptional<FRHIBreadcrumbEventManual> *pTVar10;
  longlong local_88;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>_const_*,std::tuple<FString_&&>_>
  local_80;
  FString local_70;
  FString local_60;
  uint uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  
  if (((param_1) && (bVar5 = IRenderCaptureProvider::IsAvailable(), bVar5)) &&
     ((param_2->field_0x29b & 0x20) != 0)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  this->RHICommandList = param_2;
  pTVar1 = &this->RHIBreadcrumb;
  this->bCapture = bVar5;
  pTVar10 = (TOptional<FRHIBreadcrumbEventManual> *)0x0;
  this->bEvent = param_3 != (wchar_t *)0x0;
  this->GraphBuilder = (FRDGBuilder *)0x0;
  (this->RDGEvent).bIsSet = false;
  pTVar1->Ptr = (TOptional<FRHIBreadcrumbEventManual> *)0x0;
  if (bVar5 == false) {
    return this;
  }
  if (((GIsThreadedRendering != false) && (bVar5 = IsInRenderingThread(), !bVar5)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GIsThreadedRendering || IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderCaptureInterface.cpp"
                         ,0x35,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar6 = (FScopedCapture *)(*pcVar4)();
    return pFVar6;
  }
  pIVar7 = IRenderCaptureProvider::Get();
  pcVar4 = *(code **)((longlong)*pIVar7 + 0x10);
  pFVar8 = ::FString::FString(&local_70,param_4);
  pFVar2 = this->RHICommandList;
  if (((pFVar2->field_0x29b & 0x20) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("RHICmdList.IsImmediate()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x122e,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar6 = (FScopedCapture *)(*pcVar4)();
    return pFVar6;
  }
  (*pcVar4)(pIVar7,pFVar2,1,pFVar8);
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  if (this->bEvent == false) {
    return this;
  }
  pTVar9 = ::operator_new(0x28);
  if (pTVar9 != (TOptional<FRHIBreadcrumbEventManual> *)0x0) {
    pTVar9->bIsSet = false;
    pTVar10 = pTVar9;
  }
  if (pTVar1 == (TUniquePtr<TOptional<FRHIBreadcrumbEventManual>,TDefaultDelete<TOptional<FRHIBreadcrumbEventManual>_>_>
                 *)&local_88) {
    if (pTVar10 == (TOptional<FRHIBreadcrumbEventManual> *)0x0) goto LAB_145d8e931;
    pTVar9 = pTVar10;
    if (pTVar10->bIsSet != false) {
      if (((pTVar10->TypedValue).Node.Node != (FRHIBreadcrumbNode *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!Node",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                             ,0x10a,L"Manual breadcrumb was destructed before it was ended."), bVar5
         )) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FScopedCapture *)(*pcVar4)();
        return pFVar6;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pTVar10->TypedValue).Node.AllocatorRef.SharedReferenceCount.ReferenceController);
    }
  }
  else {
    pTVar9 = pTVar1->Ptr;
    pTVar1->Ptr = pTVar10;
    if (pTVar9 == (TOptional<FRHIBreadcrumbEventManual> *)0x0) goto LAB_145d8e931;
    if (pTVar9->bIsSet != false) {
      if (((pTVar9->TypedValue).Node.Node != (FRHIBreadcrumbNode *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!Node",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                             ,0x10a,L"Manual breadcrumb was destructed before it was ended."), bVar5
         )) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FScopedCapture *)(*pcVar4)();
        return pFVar6;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pTVar9->TypedValue).Node.AllocatorRef.SharedReferenceCount.ReferenceController);
    }
  }
  ::operator_delete(pTVar9,0x28);
LAB_145d8e931:
  pTVar10 = pTVar1->Ptr;
  pFVar8 = ::FString::FString(&local_60,param_3);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_40 = 0;
    uStack_3c = 0;
    ::Desc._12_8_ = ZEXT48(uStack_44);
    ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
    ::Desc._padding_._4_4_ = 0;
    ::Desc._padding_ = (longlong)u_FScopedCapture;
    ::Desc._padding_ = (longlong)u__s;
    ::Desc._padding_._0_4_ = 0x3d;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
    ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    ::Desc.TraceGpuSpecId = 0;
    ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(``RenderCaptureInterface::FScopedCapture::FScopedCapture'::__l15::<lambda_1>::
           operator()<FString>'::__l2::_dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar3 = (FRHIComputeCommandList *)this->RHICommandList;
  local_80._Myfirst._Val = &::Desc;
  local_80._padding_ = (longlong)pFVar8;
  if (pTVar10->bIsSet != false) {
    if (((pTVar10->TypedValue).Node.Node != (FRHIBreadcrumbNode *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Node",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                           ,0x10a,L"Manual breadcrumb was destructed before it was ended."), bVar5))
    {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FScopedCapture *)(*pcVar4)();
      return pFVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar10->TypedValue).Node.AllocatorRef.SharedReferenceCount.ReferenceController);
  }
  FRHIBreadcrumbEventManual::
  FRHIBreadcrumbEventManual<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>,FString_&&>
            (&pTVar10->TypedValue,pFVar3,&local_80);
  pTVar10->bIsSet = true;
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  return this;
}

// FScopedCapture @ 145d8eac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FScopedCapture * __thiscall
RenderCaptureInterface::FScopedCapture::FScopedCapture
          (FScopedCapture *this,bool param_1,wchar_t *param_2,wchar_t *param_3)

{
  TUniquePtr<TOptional<FRHIBreadcrumbEventManual>,TDefaultDelete<TOptional<FRHIBreadcrumbEventManual>_>_>
  *pTVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  FScopedCapture *pFVar10;
  TOptional<FRHIBreadcrumbEventManual> *pTVar11;
  FString *pFVar12;
  FString *pFVar13;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar14;
  code **ppcVar15;
  TOptional<FRHIBreadcrumbEventManual> *pTVar16;
  ulonglong uVar17;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  FScopedCapture *local_f0;
  longlong local_e8;
  FString local_e0;
  FString local_d0;
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  undefined1 local_88 [40];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_f0 = this;
  if ((param_1) && (bVar9 = IRenderCaptureProvider::IsAvailable(), bVar9)) {
    bVar9 = true;
  }
  else {
    bVar9 = false;
  }
  this->bCapture = bVar9;
  pTVar1 = &this->RHIBreadcrumb;
  pTVar16 = (TOptional<FRHIBreadcrumbEventManual> *)0x0;
  this->bEvent = param_2 != (wchar_t *)0x0;
  this->RHICommandList = (FRHICommandList *)0x0;
  this->GraphBuilder = (FRDGBuilder *)0x0;
  (this->RDGEvent).bIsSet = false;
  pTVar1->Ptr = (TOptional<FRHIBreadcrumbEventManual> *)0x0;
  if (((GIsThreadedRendering != false) && (bVar9 = IsInRenderingThread(), bVar9)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GIsThreadedRendering || !IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderCaptureInterface.cpp"
                         ,0x10,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    pFVar10 = (FScopedCapture *)(*pcVar8)();
    return pFVar10;
  }
  if (this->bCapture == false) {
    return this;
  }
  pTVar11 = ::operator_new(0x28);
  if (pTVar11 != (TOptional<FRHIBreadcrumbEventManual> *)0x0) {
    pTVar11->bIsSet = false;
    pTVar16 = pTVar11;
  }
  if (pTVar1 == (TUniquePtr<TOptional<FRHIBreadcrumbEventManual>,TDefaultDelete<TOptional<FRHIBreadcrumbEventManual>_>_>
                 *)&local_e8) {
    if (pTVar16 == (TOptional<FRHIBreadcrumbEventManual> *)0x0) goto LAB_145d8ec39;
    pTVar11 = pTVar16;
    if (pTVar16->bIsSet != false) {
      if (((pTVar16->TypedValue).Node.Node != (FRHIBreadcrumbNode *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("!Node",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                             ,0x10a,L"Manual breadcrumb was destructed before it was ended."), bVar9
         )) {
        pcVar8 = (code *)swi(3);
        pFVar10 = (FScopedCapture *)(*pcVar8)();
        return pFVar10;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pTVar16->TypedValue).Node.AllocatorRef.SharedReferenceCount.ReferenceController);
    }
  }
  else {
    pTVar11 = pTVar1->Ptr;
    pTVar1->Ptr = pTVar16;
    if (pTVar11 == (TOptional<FRHIBreadcrumbEventManual> *)0x0) goto LAB_145d8ec39;
    if (pTVar11->bIsSet != false) {
      if (((pTVar11->TypedValue).Node.Node != (FRHIBreadcrumbNode *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("!Node",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                             ,0x10a,L"Manual breadcrumb was destructed before it was ended."), bVar9
         )) {
        pcVar8 = (code *)swi(3);
        pFVar10 = (FScopedCapture *)(*pcVar8)();
        return pFVar10;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pTVar11->TypedValue).Node.AllocatorRef.SharedReferenceCount.ReferenceController);
    }
  }
  ::operator_delete(pTVar11,0x28);
LAB_145d8ec39:
  pFVar12 = ::FString::FString(&local_d0,param_3);
  pFVar13 = ::FString::FString(&local_e0,param_2);
  local_f8 = this->bEvent;
  pFVar6 = (pFVar12->Data).AllocatorInstance.Data;
  pTVar16 = pTVar1->Ptr;
  (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = (pFVar12->Data).ArrayNum;
  iVar3 = (pFVar12->Data).ArrayMax;
  (pFVar12->Data).ArrayNum = 0;
  (pFVar12->Data).ArrayMax = 0;
  pFVar7 = (pFVar13->Data).AllocatorInstance.Data;
  (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar4 = (pFVar13->Data).ArrayNum;
  iVar5 = (pFVar13->Data).ArrayMax;
  (pFVar13->Data).ArrayNum = 0;
  (pFVar13->Data).ArrayMax = 0;
  local_b8[0] = (code *)0x0;
  local_90 = FMemory::Malloc(0x38,8);
  local_90[1] = (code *)pFVar6;
  *local_90 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`RenderCaptureInterface::FScopedCapture::FScopedCapture'::`12'::<lambda_1>,1,1>
                       ::_vftable_;
  *(int *)(local_90 + 2) = iVar2;
  *(int *)((longlong)local_90 + 0x14) = iVar3;
  local_90[3] = (code *)pFVar7;
  *(int *)(local_90 + 4) = iVar4;
  *(int *)((longlong)local_90 + 0x24) = iVar5;
  *(undefined1 *)(local_90 + 6) = local_f8;
  local_90[5] = (code *)pTVar16;
  if (local_90 != (code **)&DAT_fffffffffffffff8) {
    local_b8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`RenderCaptureInterface::FScopedCapture::FScopedCapture'::__l12::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_RenderCaptureInterface::FScopedCapture::FScopedCapture_::__l12::TSTR_BeginCaptureCommand24>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_88._0_8_ = local_b8[0];
    local_60 = local_90;
    local_90 = (code **)0x0;
    local_88._16_8_ = local_a8[0];
    local_88._24_8_ = local_a8[1];
    local_88._32_8_ = local_a8[2];
    local_b8[0] = (code *)0x0;
    local_58 = 2;
    pFVar14 = (FRenderCommandTag *)
              TRenderCommandTag<`RenderCaptureInterface::FScopedCapture::FScopedCapture'::__l12::TSTR_BeginCaptureCommand24>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_88,pFVar14);
    uVar17 = (ulonglong)local_58;
    if ((2 < uVar17) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      pFVar10 = (FScopedCapture *)(*pcVar8)();
      return pFVar10;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar17] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_88._0_8_ != (code *)0x0) {
        ppcVar15 = (code **)(local_88 + 0x10);
        if (local_60 != (code **)0x0) {
          ppcVar15 = local_60;
        }
        (**(code **)(*ppcVar15 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar17])(local_88);
    }
  }
  if (local_b8[0] != (code *)0x0) {
    ppcVar15 = local_b8 + 2;
    if (local_90 != (code **)0x0) {
      ppcVar15 = local_90;
    }
    (**(code **)(*ppcVar15 + 0x10))();
  }
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  return local_f0;
}

// ~<lambda_2> @ 145d8f050

void __thiscall
`RenderCaptureInterface::FScopedCapture::~FScopedCapture'::__l34::<lambda_2>::~<lambda_2>
          (void *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  
  plVar1 = *(longlong **)((longlong)this + 8);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  if ((char)plVar1[4] != '\0') {
    if (*plVar1 != 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Node",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                         ,0x10a,L"Manual breadcrumb was destructed before it was ended.");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)plVar1[2]);
  }
  ::operator_delete(plVar1,0x28);
  return;
}

// ~FScopedCapture @ 145d911e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall RenderCaptureInterface::FScopedCapture::~FScopedCapture(FScopedCapture *this)

{
  int *piVar1;
  FRDGBuilder *this_00;
  TOptional<FRHIBreadcrumbEventManual> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  void *this_01;
  TRDGEmptyLambdaPass<_public:___cdecl_RenderCaptureInterface::FScopedCapture::~FScopedCapture(void)_::_8_::<lambda_1>_>
  *pTVar6;
  FRHIBreadcrumbEventManual *this_02;
  IRenderCaptureProvider *pIVar7;
  FRHICommandListImmediate *pFVar8;
  FRenderCommandList *this_03;
  FCommandList *this_04;
  FRenderCommandTag *pFVar9;
  undefined ***pppuVar10;
  ulonglong uVar11;
  undefined1 auStack_e8 [32];
  <lambda_1> local_c8 [8];
  FRDGEventName local_c0;
  code *local_98 [2];
  undefined **local_88 [2];
  TOptional<FRHIBreadcrumbEventManual> *local_78;
  undefined ***local_70;
  undefined1 local_68 [16];
  undefined **local_58 [2];
  TOptional<FRHIBreadcrumbEventManual> *local_48;
  undefined ***local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (this->bCapture != false) {
    if (this->GraphBuilder == (FRDGBuilder *)0x0) {
      if (this->RHICommandList == (FRHICommandList *)0x0) {
        if (GIsThreadedRendering) {
          bVar4 = IsInRenderingThread();
          if (bVar4) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("!GIsThreadedRendering || !IsInRenderingThread()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderCaptureInterface.cpp"
                               ,0x81,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
        }
        local_88[1]._0_1_ = this->bEvent;
        local_78 = (this->RHIBreadcrumb).Ptr;
        local_98[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`RenderCaptureInterface::FScopedCapture::~FScopedCapture'::__l34::<lambda_2>,void,FRHICommandListImmediate_&>
                      ::Call;
        (this->RHIBreadcrumb).Ptr = (TOptional<FRHIBreadcrumbEventManual> *)0x0;
        local_70 = (undefined ***)0x0;
        local_88[0] = &UE::Core::Private::Function::
                       TFunction_OwnedObject<`RenderCaptureInterface::FScopedCapture::~FScopedCapture'::`34'::<lambda_2>,1,0>
                       ::_vftable_;
        this_03 = FRenderCommandList::GetInstanceTLS();
        if (this_03 == (FRenderCommandList *)0x0) {
          FRenderThreadCommandPipe::
          Enqueue<TRenderCommandTag<_RenderCaptureInterface::FScopedCapture::~FScopedCapture_::__l34::TSTR_EndCaptureCommand131>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                    ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
        }
        else {
          this_04 = FRenderCommandList::GetRenderThread(this_03);
          local_58[1]._1_7_ = local_88[1]._1_7_;
          local_58[1]._0_1_ = local_88[1]._0_1_;
          local_68._0_8_ = local_98[0];
          local_40 = local_70;
          local_58[0] = local_88[0];
          local_48 = local_78;
          local_98[0] = (code *)0x0;
          local_38 = 2;
          pFVar9 = (FRenderCommandTag *)
                   TRenderCommandTag<`RenderCaptureInterface::FScopedCapture::~FScopedCapture'::__l34::TSTR_EndCaptureCommand131>
                   ::Get();
          UE::RenderCommandPipe::FCommandList::Enqueue
                    (this_04,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                              *)local_68,pFVar9);
          uVar11 = (ulonglong)local_38;
          if (2 < uVar11) {
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
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar11] ==
              UE::Core::Private::
              TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
              Destruct) {
            if ((code *)local_68._0_8_ != (code *)0x0) {
              pppuVar10 = (undefined ***)(local_68 + 0x10);
              if (local_40 != (undefined ***)0x0) {
                pppuVar10 = local_40;
              }
              (*(code *)(*pppuVar10)[2])();
            }
          }
          else {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar11])(local_68);
          }
        }
        if (local_98[0] != (code *)0x0) {
          pppuVar10 = local_88;
          if (local_70 != (undefined ***)0x0) {
            pppuVar10 = local_70;
          }
          (*(code *)(*pppuVar10)[2])();
        }
      }
      else {
        if (GIsThreadedRendering) {
          bVar4 = IsInRenderingThread();
          if (!bVar4) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("!GIsThreadedRendering || IsInRenderingThread()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderCaptureInterface.cpp"
                               ,0x74,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
        }
        if (this->bEvent != false) {
          this_02 = TOptional<FRHIBreadcrumbEventManual>::operator->((this->RHIBreadcrumb).Ptr);
          FRHIBreadcrumbEventManual::End(this_02,(FRHIComputeCommandList *)this->RHICommandList);
        }
        pIVar7 = IRenderCaptureProvider::Get();
        pcVar3 = *(code **)((longlong)*pIVar7 + 0x18);
        pFVar8 = FRHICommandListImmediate::Get((FRHICommandListBase *)this->RHICommandList);
        (*pcVar3)(pIVar7,pFVar8);
      }
    }
    else {
      if (GIsThreadedRendering) {
        bVar4 = IsInRenderingThread();
        if (!bVar4) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!GIsThreadedRendering || IsInRenderingThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderCaptureInterface.cpp"
                             ,0x61,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
      }
      if ((this->bEvent != false) && ((this->RDGEvent).bIsSet != false)) {
        TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>
                  (&(this->RDGEvent).TypedValue);
        (this->RDGEvent).bIsSet = false;
      }
      this_00 = this->GraphBuilder;
      local_c0.EventFormat = L"EndCapture";
      local_c0.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c0.FormattedEventName.Data.ArrayNum = 0;
      local_c0.FormattedEventName.Data.ArrayMax = 0;
      FRDGUserValidation::ValidateAddPass(&this_00->UserValidation,&local_c0,NeverCull);
      FRDGBuilder::FlushAccessModeQueue(this_00);
      this_01 = FMemStackBase::Alloc((FMemStackBase *)&this_00->_padding_,400,8);
      pTVar6 = TRDGEmptyLambdaPass<`RenderCaptureInterface::FScopedCapture::~FScopedCapture'::__l8::<lambda_1>_>
               ::
               TRDGEmptyLambdaPass<_RenderCaptureInterface::FScopedCapture::~FScopedCapture_::__l8::<lambda_1>_>
                         (this_01,&local_c0,NeverCull,local_c8);
      piVar1 = &(this_00->Passes).Array.ArrayMax;
      iVar5 = (this_00->Passes).Array.ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                          (0x808,(ForElementType<FRDGPass_*> *)&this_00->Passes,piVar1);
      }
      (this_00->Passes).Array.ArrayNum = iVar5 + 1;
      (this_00->Passes).Array.AllocatorInstance.Data[iVar5] = (FRDGPass *)pTVar6;
      *(int *)&pTVar6->field_0x4c = (this_00->Passes).Array.ArrayNum + -1;
      FRDGBuilder::SetupEmptyPass(this_00,(FRDGPass *)pTVar6);
      if (local_c0.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_c0.FormattedEventName.Data.AllocatorInstance.Data);
      }
    }
  }
  pTVar2 = (this->RHIBreadcrumb).Ptr;
  if (pTVar2 != (TOptional<FRHIBreadcrumbEventManual> *)0x0) {
    if (pTVar2->bIsSet != false) {
      if ((pTVar2->TypedValue).Node.Node != (FRHIBreadcrumbNode *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Node",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                           ,0x10a,L"Manual breadcrumb was destructed before it was ended.");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pTVar2->TypedValue).Node.AllocatorRef.SharedReferenceCount.ReferenceController);
    }
    ::operator_delete(pTVar2,0x28);
  }
  if ((this->RDGEvent).bIsSet != false) {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>
              (&(this->RDGEvent).TypedValue);
  }
  return;
}

// operator() @ 145d94940

void __thiscall
`RenderCaptureInterface::FScopedCapture::~FScopedCapture'::__l8::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  IRenderCaptureProvider *pIVar1;
  
  pIVar1 = IRenderCaptureProvider::Get();
                    /* WARNING: Could not recover jumptable at 0x000145d94960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1,param_1,*(code **)((longlong)*pIVar1 + 0x18));
  return;
}

// operator() @ 145d95070

void __thiscall
`RenderCaptureInterface::FScopedCapture::FScopedCapture'::__l12::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  void *_Src;
  code *pcVar1;
  IRenderCaptureProvider *pIVar2;
  longlong lVar3;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  pIVar2 = IRenderCaptureProvider::Get();
  local_10 = *(int *)((longlong)this + 8);
  lVar3 = (longlong)local_10;
  _Src = *(void **)this;
  local_18.Data = (FScriptContainerElement *)0x0;
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x10);
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_10,0,&local_18,local_10,&local_c);
    memcpy(local_18.Data,_Src,lVar3 * 2);
  }
  (*pcVar1)(pIVar2,param_1,1,&local_18);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// operator() @ 145d95140

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
`RenderCaptureInterface::FScopedCapture::FScopedCapture'::__l12::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FRHIBreadcrumbEventManual *this_00;
  code *pcVar1;
  bool bVar2;
  IRenderCaptureProvider *pIVar3;
  longlong lVar4;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>_const_*,std::tuple<FString_const_&>_>
  local_38;
  uint uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  pIVar3 = IRenderCaptureProvider::Get();
  (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3,param_1,1,this);
  if (*(char *)((longlong)this + 0x28) != '\0') {
    this_00 = *(FRHIBreadcrumbEventManual **)((longlong)this + 0x20);
    lVar4 = (longlong)this + 0x10;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        ::Desc._padding_._0_4_ = 0x26;
        local_18 = 0;
        uStack_14 = 0;
        ::Desc._12_8_ = ZEXT48(uStack_1c);
        ::Desc._padding_._4_4_ = 0;
        ::Desc._padding_ = (longlong)u_FScopedCapture;
        ::Desc._padding_ = (longlong)u__s;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```RenderCaptureInterface::FScopedCapture::FScopedCapture'::__l12::Desc::operator()'
               ::__l5::<lambda_1>::operator()<FString_const_&>'::__l2::
               _dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    local_38._Myfirst._Val = &::Desc;
    local_38._padding_ = lVar4;
    if (*(char *)&this_00[1].Node.Node != '\0') {
      if ((this_00->Node).Node != (FRHIBreadcrumbNode *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Node",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                           ,0x10a,L"Manual breadcrumb was destructed before it was ended.");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((this_00->Node).AllocatorRef.SharedReferenceCount.ReferenceController);
    }
    FRHIBreadcrumbEventManual::
    FRHIBreadcrumbEventManual<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>,FString_const_&>
              (this_00,(FRHIComputeCommandList *)param_1,&local_38);
    *(undefined1 *)&this_00[1].Node.Node = 1;
  }
  return;
}

