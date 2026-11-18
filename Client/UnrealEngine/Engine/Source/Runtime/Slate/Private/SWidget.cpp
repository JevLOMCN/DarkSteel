// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 5

// GetMetaData<FNavigationTransitionMetadata> @ 14269f8a0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FNavigationTransitionMetadata,1> * __thiscall
SWidget::GetMetaData<FNavigationTransitionMetadata>
          (SWidget *this,TSharedPtr<FNavigationTransitionMetadata,1> *__return_storage_ptr__)

{
  longlong *plVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  FNavigationTransitionMetadata *pFVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_SlateGetMetaData> FVar11;
  ulonglong uVar12;
  FColor_u_0 FVar13;
  FName FVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  FColor_u_0 local_res8;
  uint uStackX_c;
  FName local_res18;
  longlong *local_res20;
  
  FVar11 = StatPtr_STAT_SlateGetMetaData;
  if (StatPtr_STAT_SlateGetMetaData == (FThreadSafeStaticStat<FStat_STAT_SlateGetMetaData>)0x0) {
    pFVar10 = ::FName::FName(&local_res18,"STAT_SlateGetMetaData");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_SlateGetMetaData>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateGetMetaData,*pFVar10,
                        L"SWidget MetaData","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar11;
  bVar5 = false;
  bVar7 = false;
  FVar13.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar13.Bits != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.Bits = FVar13.Bits;
        uStackX_c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8._s_0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Widgets\\SWidget.h"
                   ,0x541);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.Bits = FVar13.Bits;
      uStackX_c = uVar9;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar6 = true;
      goto LAB_14269f9f6;
    }
  }
  bVar6 = false;
  FVar14.ComparisonIndex.Value = 0;
  FVar14.Number = 0;
LAB_14269f9f6:
  local_res18.ComparisonIndex.Value = (this->MetaData).ArrayNum;
  uVar12 = (ulonglong)(int)local_res18.ComparisonIndex.Value;
  pFVar15 = (this->MetaData).AllocatorInstance.Data;
  pFVar16 = pFVar15 + uVar12 * 0x10;
  local_res20 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  while( true ) {
    if ((this->MetaData).ArrayNum != (int)uVar12) {
      `TCheckedPointerIterator<TSharedRef<ISlateMetaData,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar15 == pFVar16) {
      __return_storage_ptr__->Object = (FNavigationTransitionMetadata *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      goto LAB_14269fae0;
    }
    plVar1 = *(longlong **)pFVar15;
    pcVar2 = *(code **)(*plVar1 + 8);
    if (*(int *)(*local_res20 + 0x9d4c) <
        `public:_static_class_FName_const&___ptr64___cdecl_FNavigationTransitionMetadata::GetTypeId(void)'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_FNavigationTransitionMetadata::GetTypeId(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_class_FName_const&___ptr64___cdecl_FNavigationTransitionMetadata::GetTypeId(void)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`public:_static_class_FName_const&___ptr64___cdecl_FNavigationTransitionMetadata::GetTypeId(void)'
                        ::__l2::Type,L"FNavigationTransitionMetadata");
        _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_FNavigationTransitionMetadata::GetTypeId(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    cVar8 = (*pcVar2)(plVar1,&`public:_static_class_FName_const&___ptr64___cdecl_FNavigationTransitionMetadata::GetTypeId(void)'
                              ::__l2::Type);
    if (cVar8 != '\0') break;
    uVar12 = (ulonglong)local_res18.ComparisonIndex.Value;
    pFVar15 = pFVar15 + 0x10;
  }
  pTVar3 = *(TReferenceControllerBase<1> **)(pFVar15 + 8);
  pFVar4 = *(FNavigationTransitionMetadata **)pFVar15;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = pFVar4;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    __return_storage_ptr__->Object = pFVar4;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
LAB_14269fae0:
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FThreadStats::AddMessage(FVar14,CycleScopeEnd);
  }
  return __return_storage_ptr__;
}

// StaticWidgetClass @ 1426df9a0

FSlateWidgetClassData * __cdecl SWidget::StaticWidgetClass(void)

{
  FName *pFVar1;
  int *piVar2;
  FInitializer local_res8;
  FName local_res10;
  FName local_res18;
  
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar2 < `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWidget::GetPrivateWidgetClass(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWidget::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWidget::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(&local_res10,"SWidget");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      if (*piVar2 < `public:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_FSlateControlledConstruction::StaticWidgetClass(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`public:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_FSlateControlledConstruction::StaticWidgetClass(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`public:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_FSlateControlledConstruction::StaticWidgetClass(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar1 = ::FName::FName(&local_res18,L"FSlateControlledConstruction");
          `public:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_FSlateControlledConstruction::StaticWidgetClass(void)'
          ::__l2::Instance.WidgetType = *pFVar1;
          `public:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_FSlateControlledConstruction::StaticWidgetClass(void)'
          ::__l2::Instance.Descriptor.Attributes.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          `public:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_FSlateControlledConstruction::StaticWidgetClass(void)'
          ::__l2::Instance.Descriptor.Attributes.ArrayNum = 0;
          `public:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_FSlateControlledConstruction::StaticWidgetClass(void)'
          ::__l2::Instance.Descriptor.Attributes.ArrayMax = 0;
          `public:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_FSlateControlledConstruction::StaticWidgetClass(void)'
          ::__l2::Instance.Descriptor.Containers.AllocatorInstance.SecondaryData =
               (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
          `public:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_FSlateControlledConstruction::StaticWidgetClass(void)'
          ::__l2::Instance.Descriptor.Containers.ArrayNum = 0;
          `public:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_FSlateControlledConstruction::StaticWidgetClass(void)'
          ::__l2::Instance.Descriptor.Containers.ArrayMax = 1;
          atexit(`FSlateControlledConstruction::StaticWidgetClass'::__l2::
                 _dynamic_atexit_destructor_for__Instance__);
          _Init_thread_footer(&`public:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_FSlateControlledConstruction::StaticWidgetClass(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&local_res8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWidget::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,
                 &`public:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_FSlateControlledConstruction::StaticWidgetClass(void)'
                  ::__l2::Instance.Descriptor);
      PrivateRegisterAttributes(&local_res8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&local_res8);
      atexit(`SWidget::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWidget::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWidget::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWidget::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// AddMetadata<FTagMetaData> @ 142797370

void __thiscall
SWidget::AddMetadata<FTagMetaData>(SWidget *this,TSharedRef<FTagMetaData,1> *param_1)

{
  TSharedRef<ISlateMetaData,1> local_18;
  
  local_18.Object = (ISlateMetaData *)param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddMetadataInternal(this,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// SetEnabled @ 142834f60

void __thiscall SWidget::SetEnabled(SWidget *this,TAttribute<bool> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->EnabledStateAttribute,this,param_1,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  return;
}

// GetVisibilityAttribute @ 1429efd60

TSlateAttributeRef<EVisibility,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> * __thiscall
SWidget::GetVisibilityAttribute
          (SWidget *this,
          TSlateAttributeRef<EVisibility,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
          *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  code *pcVar3;
  bool bVar4;
  TSharedRef<SWidget_const_,1> *pTVar5;
  TSlateAttributeRef<EVisibility,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *pTVar6;
  TSlateAttribute<EVisibility,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *pTVar7;
  TSharedRef<SWidget_const_,1> local_18;
  
  pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
  pTVar7 = &this->VisibilityAttribute;
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  pSVar2 = pTVar5->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    *(SWidget **)__return_storage_ptr__ = pSVar2;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    *(SWidget **)__return_storage_ptr__ = pSVar2;
    *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = pTVar1;
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  *(TSlateAttribute<EVisibility,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> **)
   &__return_storage_ptr__->field_0x10 = pTVar7;
  if ((pTVar7 < pSVar2) || (pSVar2 + 1 <= pTVar7)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&InAttribute >= (UPTRINT)&InWidget && (UPTRINT)&InAttribute < (UPTRINT)&InWidget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,99,L"The attribute is not a member of the widget.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSlateAttributeRef<EVisibility,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

