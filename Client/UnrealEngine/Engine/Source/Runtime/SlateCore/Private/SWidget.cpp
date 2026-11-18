// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 161

// GetMetaData<FNavigationMetaData> @ 1424e6bb0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FNavigationMetaData,1> * __thiscall
SWidget::GetMetaData<FNavigationMetaData>
          (SWidget *this,TSharedPtr<FNavigationMetaData,1> *__return_storage_ptr__)

{
  longlong *plVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  FNavigationMetaData *pFVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_SlateGetMetaData> FVar10;
  ulonglong uVar11;
  uint uVar12;
  FColor_u_0 FVar13;
  FName FVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  FColor_u_0 local_res8;
  uint uStackX_c;
  FName local_res18 [2];
  
  FVar10 = StatPtr_STAT_SlateGetMetaData;
  if (StatPtr_STAT_SlateGetMetaData == (FThreadSafeStaticStat<FStat_STAT_SlateGetMetaData>)0x0) {
    pFVar9 = ::FName::FName(local_res18,"STAT_SlateGetMetaData");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_SlateGetMetaData>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateGetMetaData,*pFVar9,
                        L"SWidget MetaData","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar10;
  bVar5 = false;
  bVar7 = false;
  FVar13.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Bits != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.Bits = FVar13.Bits;
        uStackX_c = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8._s_0,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Widgets\\SWidget.h"
                   ,0x541);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.Bits = FVar13.Bits;
      uStackX_c = uVar12;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar6 = true;
      goto LAB_1424e6d07;
    }
  }
  bVar6 = false;
  FVar14.ComparisonIndex.Value = 0;
  FVar14.Number = 0;
LAB_1424e6d07:
  local_res18[0].ComparisonIndex.Value = (this->MetaData).ArrayNum;
  uVar11 = (ulonglong)(int)local_res18[0].ComparisonIndex.Value;
  pFVar16 = (this->MetaData).AllocatorInstance.Data;
  pFVar15 = pFVar16 + uVar11 * 0x10;
  while( true ) {
    if ((this->MetaData).ArrayNum != (int)uVar11) {
      `TCheckedPointerIterator<TSharedRef<ISlateMetaData,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar16 == pFVar15) break;
    plVar1 = *(longlong **)pFVar16;
    pcVar2 = *(code **)(*plVar1 + 8);
    pFVar9 = FNavigationMetaData::GetTypeId();
    cVar8 = (*pcVar2)(plVar1,pFVar9);
    if (cVar8 != '\0') {
      pTVar3 = *(TReferenceControllerBase<1> **)(pFVar16 + 8);
      pFVar4 = *(FNavigationMetaData **)pFVar16;
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
LAB_1424e6da2:
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
    uVar11 = (ulonglong)local_res18[0].ComparisonIndex.Value;
    pFVar16 = pFVar16 + 0x10;
  }
  __return_storage_ptr__->Object = (FNavigationMetaData *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  goto LAB_1424e6da2;
}

// GetRenderTransformWithRespectToFlowDirection @ 14250ebe0

TOptional<TTransform2<float>_> * __thiscall
SWidget::GetRenderTransformWithRespectToFlowDirection
          (SWidget *this,TOptional<TTransform2<float>_> *__return_storage_ptr__)

{
  undefined8 uVar1;
  bool bVar2;
  float afVar3 [2];
  float afVar4 [2];
  TVector2<float>_u_0 TVar5;
  
  if (GSlateFlowDirection == LeftToRight) {
    __return_storage_ptr__->bIsSet = false;
    bVar2 = (bool)(this->RenderTransformAttribute).field_0x18;
    __return_storage_ptr__->bIsSet = bVar2;
    if (bVar2 != false) {
      afVar3 = *(float (*) [2])&(this->RenderTransformAttribute).field_0x8;
      (__return_storage_ptr__->TypedValue).M.M[0] = *(float (*) [2])&this->RenderTransformAttribute;
      (__return_storage_ptr__->TypedValue).M.M[1] = afVar3;
      (__return_storage_ptr__->TypedValue).Trans.field0_0x0 =
           *(TVector2<float>_u_0 *)&(this->RenderTransformAttribute).field_0x10;
      return __return_storage_ptr__;
    }
  }
  else {
    bVar2 = (bool)(this->RenderTransformAttribute).field_0x18;
    if (bVar2 != false) {
      uVar1 = *(undefined8 *)&(this->RenderTransformAttribute).field_0x10;
      afVar3 = *(float (*) [2])&this->RenderTransformAttribute;
      afVar4 = *(float (*) [2])&(this->RenderTransformAttribute).field_0x8;
      __return_storage_ptr__->bIsSet = bVar2;
      TVar5._s_0.Y = (float)(int)((ulonglong)uVar1 >> 0x20);
      TVar5._s_0.X = (float)((uint)uVar1 ^ __xmm_80000000800000008000000080000000);
      (__return_storage_ptr__->TypedValue).M.M[0] = afVar3;
      (__return_storage_ptr__->TypedValue).M.M[1] = afVar4;
      (__return_storage_ptr__->TypedValue).Trans.field0_0x0 = TVar5;
      return __return_storage_ptr__;
    }
    __return_storage_ptr__->bIsSet = false;
  }
  return __return_storage_ptr__;
}

// Advanced_AsInvalidationRoot @ 1425663e0

FSlateInvalidationRoot * __thiscall SWidget::Advanced_AsInvalidationRoot(SWidget *this)

{
  return (FSlateInvalidationRoot *)0x0;
}

// Advanced_IsInvalidationRoot @ 1425663f0

bool __thiscall SWidget::Advanced_IsInvalidationRoot(SWidget *this)

{
  return false;
}

// Advanced_IsWindow @ 142566400

bool __thiscall SWidget::Advanced_IsWindow(SWidget *this)

{
  return false;
}

// CacheVolatility @ 142568630

void __thiscall SWidget::CacheVolatility(SWidget *this)

{
  char cVar1;
  
  if (this->bForceVolatile == '\0') {
    cVar1 = (**(code **)(this->_padding_ + 0x228))();
    if (cVar1 == '\0') {
      this->bCachedVolatile = '\0';
      return;
    }
  }
  this->bCachedVolatile = '\0';
  this->bCachedVolatile = '\x01';
  return;
}

// ComputeVolatility @ 142568830

bool __thiscall SWidget::ComputeVolatility(SWidget *this)

{
  return false;
}

// CustomPrepass @ 14257c120

bool __thiscall SWidget::CustomPrepass(SWidget *this,float param_1)

{
  return false;
}

// Debug_GetChildrenForReflector @ 14257c130

FChildren * __thiscall SWidget::Debug_GetChildrenForReflector(SWidget *this)

{
  FChildren *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014257c133. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FChildren *)(**(code **)(this->_padding_ + 0x188))();
  return pFVar1;
}

// GetAllChildren @ 14257e740

FChildren * __thiscall SWidget::GetAllChildren(SWidget *this)

{
  FChildren *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014257e743. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FChildren *)(**(code **)(this->_padding_ + 0x180))();
  return pFVar1;
}

// GetPrivateWidgetClass @ 142582d30

FSlateWidgetClassData * __cdecl SWidget::GetPrivateWidgetClass(void)

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

// GetWidgetClass @ 14258a240

FSlateWidgetClassData * __thiscall SWidget::GetWidgetClass(SWidget *this)

{
  FName *pFVar1;
  int *piVar2;
  FInitializer FStackX_8;
  FName FStackX_10;
  FName FStackX_18;
  
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar2 < `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWidget::GetPrivateWidgetClass(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWidget::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWidget::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(&FStackX_10,"SWidget");
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
          pFVar1 = ::FName::FName(&FStackX_18,L"FSlateControlledConstruction");
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
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWidget::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,
                 &`public:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_FSlateControlledConstruction::StaticWidgetClass(void)'
                  ::__l2::Instance.Descriptor);
      PrivateRegisterAttributes(&FStackX_8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
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

// IsInteractable @ 14258bd80

bool __thiscall SWidget::IsInteractable(SWidget *this)

{
  return false;
}

// ValidatePathToChild @ 1425ab7c0

bool __thiscall SWidget::ValidatePathToChild(SWidget *this,SWidget *param_1)

{
  return true;
}

// GetMetaData<UE::Slate::FActiveTimersMetaData> @ 1425b5810

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::Slate::FActiveTimersMetaData,1> * __thiscall
SWidget::GetMetaData<UE::Slate::FActiveTimersMetaData>
          (SWidget *this,TSharedPtr<UE::Slate::FActiveTimersMetaData,1> *__return_storage_ptr__)

{
  longlong *plVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  FActiveTimersMetaData *pFVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_SlateGetMetaData> FVar10;
  ulonglong uVar11;
  uint uVar12;
  FColor_u_0 FVar13;
  FName FVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  FColor_u_0 local_res8;
  uint uStackX_c;
  FName local_res18 [2];
  
  FVar10 = StatPtr_STAT_SlateGetMetaData;
  if (StatPtr_STAT_SlateGetMetaData == (FThreadSafeStaticStat<FStat_STAT_SlateGetMetaData>)0x0) {
    pFVar9 = ::FName::FName(local_res18,"STAT_SlateGetMetaData");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_SlateGetMetaData>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateGetMetaData,*pFVar9,
                        L"SWidget MetaData","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar10;
  bVar5 = false;
  bVar7 = false;
  FVar13.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Bits != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.Bits = FVar13.Bits;
        uStackX_c = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8._s_0,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Widgets\\SWidget.h"
                   ,0x541);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.Bits = FVar13.Bits;
      uStackX_c = uVar12;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar6 = true;
      goto LAB_1425b5967;
    }
  }
  bVar6 = false;
  FVar14.ComparisonIndex.Value = 0;
  FVar14.Number = 0;
LAB_1425b5967:
  local_res18[0].ComparisonIndex.Value = (this->MetaData).ArrayNum;
  uVar11 = (ulonglong)(int)local_res18[0].ComparisonIndex.Value;
  pFVar16 = (this->MetaData).AllocatorInstance.Data;
  pFVar15 = pFVar16 + uVar11 * 0x10;
  while( true ) {
    if ((this->MetaData).ArrayNum != (int)uVar11) {
      `TCheckedPointerIterator<TSharedRef<ISlateMetaData,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar16 == pFVar15) break;
    plVar1 = *(longlong **)pFVar16;
    pcVar2 = *(code **)(*plVar1 + 8);
    pFVar9 = UE::Slate::FActiveTimersMetaData::GetTypeId();
    cVar8 = (*pcVar2)(plVar1,pFVar9);
    if (cVar8 != '\0') {
      pTVar3 = *(TReferenceControllerBase<1> **)(pFVar16 + 8);
      pFVar4 = *(FActiveTimersMetaData **)pFVar16;
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
LAB_1425b5a02:
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
    uVar11 = (ulonglong)local_res18[0].ComparisonIndex.Value;
    pFVar16 = pFVar16 + 0x10;
  }
  __return_storage_ptr__->Object = (FActiveTimersMetaData *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  goto LAB_1425b5a02;
}

// GetMetaData<FReflectionMetaData> @ 1425b5a50

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FReflectionMetaData,1> * __thiscall
SWidget::GetMetaData<FReflectionMetaData>
          (SWidget *this,TSharedPtr<FReflectionMetaData,1> *__return_storage_ptr__)

{
  longlong *plVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  FReflectionMetaData *pFVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_SlateGetMetaData> FVar10;
  ulonglong uVar11;
  uint uVar12;
  FColor_u_0 FVar13;
  FName FVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  FColor_u_0 local_res8;
  uint uStackX_c;
  FName local_res18 [2];
  
  FVar10 = StatPtr_STAT_SlateGetMetaData;
  if (StatPtr_STAT_SlateGetMetaData == (FThreadSafeStaticStat<FStat_STAT_SlateGetMetaData>)0x0) {
    pFVar9 = ::FName::FName(local_res18,"STAT_SlateGetMetaData");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_SlateGetMetaData>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateGetMetaData,*pFVar9,
                        L"SWidget MetaData","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar10;
  bVar5 = false;
  bVar7 = false;
  FVar13.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Bits != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.Bits = FVar13.Bits;
        uStackX_c = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8._s_0,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Widgets\\SWidget.h"
                   ,0x541);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.Bits = FVar13.Bits;
      uStackX_c = uVar12;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar6 = true;
      goto LAB_1425b5ba7;
    }
  }
  bVar6 = false;
  FVar14.ComparisonIndex.Value = 0;
  FVar14.Number = 0;
LAB_1425b5ba7:
  local_res18[0].ComparisonIndex.Value = (this->MetaData).ArrayNum;
  uVar11 = (ulonglong)(int)local_res18[0].ComparisonIndex.Value;
  pFVar16 = (this->MetaData).AllocatorInstance.Data;
  pFVar15 = pFVar16 + uVar11 * 0x10;
  while( true ) {
    if ((this->MetaData).ArrayNum != (int)uVar11) {
      `TCheckedPointerIterator<TSharedRef<ISlateMetaData,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar16 == pFVar15) break;
    plVar1 = *(longlong **)pFVar16;
    pcVar2 = *(code **)(*plVar1 + 8);
    pFVar9 = FReflectionMetaData::GetTypeId();
    cVar8 = (*pcVar2)(plVar1,pFVar9);
    if (cVar8 != '\0') {
      pTVar3 = *(TReferenceControllerBase<1> **)(pFVar16 + 8);
      pFVar4 = *(FReflectionMetaData **)pFVar16;
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
LAB_1425b5c42:
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
    uVar11 = (ulonglong)local_res18[0].ComparisonIndex.Value;
    pFVar16 = pFVar16 + 0x10;
  }
  __return_storage_ptr__->Object = (FReflectionMetaData *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  goto LAB_1425b5c42;
}

// GetMetaData<FSlateCursorMetaData> @ 1425b5c90

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FSlateCursorMetaData,1> * __thiscall
SWidget::GetMetaData<FSlateCursorMetaData>
          (SWidget *this,TSharedPtr<FSlateCursorMetaData,1> *__return_storage_ptr__)

{
  longlong *plVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSlateCursorMetaData *pFVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_SlateGetMetaData> FVar10;
  ulonglong uVar11;
  uint uVar12;
  FColor_u_0 FVar13;
  FName FVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  FColor_u_0 local_res8;
  uint uStackX_c;
  FName local_res18 [2];
  
  FVar10 = StatPtr_STAT_SlateGetMetaData;
  if (StatPtr_STAT_SlateGetMetaData == (FThreadSafeStaticStat<FStat_STAT_SlateGetMetaData>)0x0) {
    pFVar9 = ::FName::FName(local_res18,"STAT_SlateGetMetaData");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_SlateGetMetaData>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateGetMetaData,*pFVar9,
                        L"SWidget MetaData","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar10;
  bVar5 = false;
  bVar7 = false;
  FVar13.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Bits != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.Bits = FVar13.Bits;
        uStackX_c = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8._s_0,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Widgets\\SWidget.h"
                   ,0x541);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.Bits = FVar13.Bits;
      uStackX_c = uVar12;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar6 = true;
      goto LAB_1425b5de7;
    }
  }
  bVar6 = false;
  FVar14.ComparisonIndex.Value = 0;
  FVar14.Number = 0;
LAB_1425b5de7:
  local_res18[0].ComparisonIndex.Value = (this->MetaData).ArrayNum;
  uVar11 = (ulonglong)(int)local_res18[0].ComparisonIndex.Value;
  pFVar16 = (this->MetaData).AllocatorInstance.Data;
  pFVar15 = pFVar16 + uVar11 * 0x10;
  while( true ) {
    if ((this->MetaData).ArrayNum != (int)uVar11) {
      `TCheckedPointerIterator<TSharedRef<ISlateMetaData,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar16 == pFVar15) break;
    plVar1 = *(longlong **)pFVar16;
    pcVar2 = *(code **)(*plVar1 + 8);
    pFVar9 = FSlateCursorMetaData::GetTypeId();
    cVar8 = (*pcVar2)(plVar1,pFVar9);
    if (cVar8 != '\0') {
      pTVar3 = *(TReferenceControllerBase<1> **)(pFVar16 + 8);
      pFVar4 = *(FSlateCursorMetaData **)pFVar16;
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
LAB_1425b5e82:
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
    uVar11 = (ulonglong)local_res18[0].ComparisonIndex.Value;
    pFVar16 = pFVar16 + 0x10;
  }
  __return_storage_ptr__->Object = (FSlateCursorMetaData *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  goto LAB_1425b5e82;
}

// GetMetaData<FSlateMouseEventsMetaData> @ 1425b5ed0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FSlateMouseEventsMetaData,1> * __thiscall
SWidget::GetMetaData<FSlateMouseEventsMetaData>
          (SWidget *this,TSharedPtr<FSlateMouseEventsMetaData,1> *__return_storage_ptr__)

{
  longlong *plVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSlateMouseEventsMetaData *pFVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_SlateGetMetaData> FVar10;
  ulonglong uVar11;
  uint uVar12;
  FColor_u_0 FVar13;
  FName FVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  FColor_u_0 local_res8;
  uint uStackX_c;
  FName local_res18 [2];
  
  FVar10 = StatPtr_STAT_SlateGetMetaData;
  if (StatPtr_STAT_SlateGetMetaData == (FThreadSafeStaticStat<FStat_STAT_SlateGetMetaData>)0x0) {
    pFVar9 = ::FName::FName(local_res18,"STAT_SlateGetMetaData");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_SlateGetMetaData>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateGetMetaData,*pFVar9,
                        L"SWidget MetaData","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar10;
  bVar5 = false;
  bVar7 = false;
  FVar13.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Bits != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.Bits = FVar13.Bits;
        uStackX_c = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8._s_0,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Widgets\\SWidget.h"
                   ,0x541);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.Bits = FVar13.Bits;
      uStackX_c = uVar12;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar6 = true;
      goto LAB_1425b6027;
    }
  }
  bVar6 = false;
  FVar14.ComparisonIndex.Value = 0;
  FVar14.Number = 0;
LAB_1425b6027:
  local_res18[0].ComparisonIndex.Value = (this->MetaData).ArrayNum;
  uVar11 = (ulonglong)(int)local_res18[0].ComparisonIndex.Value;
  pFVar16 = (this->MetaData).AllocatorInstance.Data;
  pFVar15 = pFVar16 + uVar11 * 0x10;
  while( true ) {
    if ((this->MetaData).ArrayNum != (int)uVar11) {
      `TCheckedPointerIterator<TSharedRef<ISlateMetaData,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar16 == pFVar15) break;
    plVar1 = *(longlong **)pFVar16;
    pcVar2 = *(code **)(*plVar1 + 8);
    pFVar9 = FSlateMouseEventsMetaData::GetTypeId();
    cVar8 = (*pcVar2)(plVar1,pFVar9);
    if (cVar8 != '\0') {
      pTVar3 = *(TReferenceControllerBase<1> **)(pFVar16 + 8);
      pFVar4 = *(FSlateMouseEventsMetaData **)pFVar16;
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
LAB_1425b60c2:
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
    uVar11 = (ulonglong)local_res18[0].ComparisonIndex.Value;
    pFVar16 = pFVar16 + 0x10;
  }
  __return_storage_ptr__->Object = (FSlateMouseEventsMetaData *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  goto LAB_1425b60c2;
}

// GetMetaData<FSlateToolTipMetaData> @ 1425b6110

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FSlateToolTipMetaData,1> * __thiscall
SWidget::GetMetaData<FSlateToolTipMetaData>
          (SWidget *this,TSharedPtr<FSlateToolTipMetaData,1> *__return_storage_ptr__)

{
  longlong *plVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSlateToolTipMetaData *pFVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_SlateGetMetaData> FVar10;
  ulonglong uVar11;
  uint uVar12;
  FColor_u_0 FVar13;
  FName FVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  FColor_u_0 local_res8;
  uint uStackX_c;
  FName local_res18 [2];
  
  FVar10 = StatPtr_STAT_SlateGetMetaData;
  if (StatPtr_STAT_SlateGetMetaData == (FThreadSafeStaticStat<FStat_STAT_SlateGetMetaData>)0x0) {
    pFVar9 = ::FName::FName(local_res18,"STAT_SlateGetMetaData");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_SlateGetMetaData>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateGetMetaData,*pFVar9,
                        L"SWidget MetaData","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar10;
  bVar5 = false;
  bVar7 = false;
  FVar13.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Bits != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.Bits = FVar13.Bits;
        uStackX_c = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8._s_0,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Widgets\\SWidget.h"
                   ,0x541);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.Bits = FVar13.Bits;
      uStackX_c = uVar12;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar6 = true;
      goto LAB_1425b6267;
    }
  }
  bVar6 = false;
  FVar14.ComparisonIndex.Value = 0;
  FVar14.Number = 0;
LAB_1425b6267:
  local_res18[0].ComparisonIndex.Value = (this->MetaData).ArrayNum;
  uVar11 = (ulonglong)(int)local_res18[0].ComparisonIndex.Value;
  pFVar16 = (this->MetaData).AllocatorInstance.Data;
  pFVar15 = pFVar16 + uVar11 * 0x10;
  while( true ) {
    if ((this->MetaData).ArrayNum != (int)uVar11) {
      `TCheckedPointerIterator<TSharedRef<ISlateMetaData,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar16 == pFVar15) break;
    plVar1 = *(longlong **)pFVar16;
    pcVar2 = *(code **)(*plVar1 + 8);
    pFVar9 = FSlateToolTipMetaData::GetTypeId();
    cVar8 = (*pcVar2)(plVar1,pFVar9);
    if (cVar8 != '\0') {
      pTVar3 = *(TReferenceControllerBase<1> **)(pFVar16 + 8);
      pFVar4 = *(FSlateToolTipMetaData **)pFVar16;
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
LAB_1425b6302:
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
    uVar11 = (ulonglong)local_res18[0].ComparisonIndex.Value;
    pFVar16 = pFVar16 + 0x10;
  }
  __return_storage_ptr__->Object = (FSlateToolTipMetaData *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  goto LAB_1425b6302;
}

// GetMetaData<FTagMetaData> @ 1425b6350

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FTagMetaData,1> * __thiscall
SWidget::GetMetaData<FTagMetaData>(SWidget *this,TSharedPtr<FTagMetaData,1> *__return_storage_ptr__)

{
  longlong *plVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  FTagMetaData *pFVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_SlateGetMetaData> FVar10;
  ulonglong uVar11;
  uint uVar12;
  FColor_u_0 FVar13;
  FName FVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  FColor_u_0 local_res8;
  uint uStackX_c;
  FName local_res18 [2];
  
  FVar10 = StatPtr_STAT_SlateGetMetaData;
  if (StatPtr_STAT_SlateGetMetaData == (FThreadSafeStaticStat<FStat_STAT_SlateGetMetaData>)0x0) {
    pFVar9 = ::FName::FName(local_res18,"STAT_SlateGetMetaData");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_SlateGetMetaData>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateGetMetaData,*pFVar9,
                        L"SWidget MetaData","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar10;
  bVar5 = false;
  bVar7 = false;
  FVar13.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Bits != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.Bits = FVar13.Bits;
        uStackX_c = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8._s_0,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Widgets\\SWidget.h"
                   ,0x541);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.Bits = FVar13.Bits;
      uStackX_c = uVar12;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar6 = true;
      goto LAB_1425b64a7;
    }
  }
  bVar6 = false;
  FVar14.ComparisonIndex.Value = 0;
  FVar14.Number = 0;
LAB_1425b64a7:
  local_res18[0].ComparisonIndex.Value = (this->MetaData).ArrayNum;
  uVar11 = (ulonglong)(int)local_res18[0].ComparisonIndex.Value;
  pFVar16 = (this->MetaData).AllocatorInstance.Data;
  pFVar15 = pFVar16 + uVar11 * 0x10;
  while( true ) {
    if ((this->MetaData).ArrayNum != (int)uVar11) {
      `TCheckedPointerIterator<TSharedRef<ISlateMetaData,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar16 == pFVar15) break;
    plVar1 = *(longlong **)pFVar16;
    pcVar2 = *(code **)(*plVar1 + 8);
    pFVar9 = FTagMetaData::GetTypeId();
    cVar8 = (*pcVar2)(plVar1,pFVar9);
    if (cVar8 != '\0') {
      pTVar3 = *(TReferenceControllerBase<1> **)(pFVar16 + 8);
      pFVar4 = *(FTagMetaData **)pFVar16;
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
LAB_1425b6542:
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
    uVar11 = (ulonglong)local_res18[0].ComparisonIndex.Value;
    pFVar16 = pFVar16 + 0x10;
  }
  __return_storage_ptr__->Object = (FTagMetaData *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  goto LAB_1425b6542;
}

// RemoveMetaData<UE::Slate::FActiveTimersMetaData> @ 1425b9a40

int __thiscall
SWidget::RemoveMetaData<UE::Slate::FActiveTimersMetaData>
          (SWidget *this,TSharedRef<UE::Slate::FActiveTimersMetaData,1> *param_1)

{
  TArray<TSharedRef<ISlateMetaData,1>,TSizedDefaultAllocator<32>_> *this_00;
  FActiveTimersMetaData *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  
  pFVar1 = param_1->Object;
  this_00 = &this->MetaData;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar3 = (this_00->AllocatorInstance).Data;
  pFVar9 = pFVar3;
  while( true ) {
    if (pFVar9 == pFVar3 + (longlong)(this->MetaData).ArrayNum * 0x10) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      return 0;
    }
    if (*(FActiveTimersMetaData **)pFVar9 == pFVar1) break;
    pFVar9 = pFVar9 + 0x10;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  uVar8 = (uint)((longlong)pFVar9 - (longlong)pFVar3 >> 4);
  if (uVar8 == 0xffffffff) {
    return 0;
  }
  if (((uVar8 == 0) && (this->bHasRegisteredSlateAttribute != 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index != 0 || !HasRegisteredSlateAttribute()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Widgets\\SWidget.h"
                         ,0x579,L"The first slot is reserved for SlateAttribute"), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  uVar7 = 0;
  if ((int)(uVar8 + 1) <= (this->MetaData).ArrayNum) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  TArray<TSharedRef<ISlateMetaData,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
            (this_00,uVar8,1);
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,&this_00->AllocatorInstance,(this->MetaData).ArrayNum,&(this->MetaData).ArrayMax
            );
  return 1;
}

// RemoveMetaData<FSlateToolTipMetaData> @ 1425b9b90

bool __thiscall SWidget::RemoveMetaData<FSlateToolTipMetaData>(SWidget *this)

{
  TArray<TSharedRef<ISlateMetaData,1>,TSizedDefaultAllocator<32>_> *this_00;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  FName *pFVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar8 = (this->MetaData).ArrayNum - 1;
  if (-1 < (int)uVar8) {
    this_00 = &this->MetaData;
    lVar9 = (longlong)(int)uVar8 << 4;
    do {
      uVar6 = 0;
      if ((int)uVar8 < (this->MetaData).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      plVar1 = *(longlong **)((this_00->AllocatorInstance).Data + lVar9);
      pcVar2 = *(code **)(*plVar1 + 8);
      pFVar7 = FSlateToolTipMetaData::GetTypeId();
      cVar5 = (*pcVar2)(plVar1,pFVar7);
      if (cVar5 != '\0') {
        if (((uVar8 == 0) && (this->bHasRegisteredSlateAttribute != 0)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index != 0 || !HasRegisteredSlateAttribute()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Widgets\\SWidget.h"
                               ,0x59a,L"The first slot is reserved for SlateAttribute"), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        uVar6 = 0;
        if ((int)uVar8 < (this->MetaData).ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        TArray<TSharedRef<ISlateMetaData,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (this_00,uVar8);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&this_00->AllocatorInstance,(this->MetaData).ArrayNum,
                   &(this->MetaData).ArrayMax);
        return true;
      }
      lVar9 = lVar9 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  return false;
}

// SWidget @ 1425bf2a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

SWidget * __thiscall SWidget::SWidget(SWidget *this)

{
  TSlateAttribute<EVisibility,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *pTVar1;
  undefined1 *puVar2;
  TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *pTVar3;
  TSlateAttribute<UE::Math::TVector2<double>,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  *pTVar4;
  undefined1 *puVar5;
  TSlateAttribute<TOptional<TTransform2<float>_>,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  *pTVar6;
  FName FVar7;
  LARGE_INTEGER LVar8;
  code *pcVar9;
  float fVar10;
  TVector2<double> TVar11;
  bool bVar12;
  int iVar13;
  SWidget *pSVar14;
  FSlateWidgetClassData *pFVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_SlateTotalWidgets> FVar17;
  FThreadStats *pFVar18;
  FThreadStatsPool *pFVar19;
  FThreadSafeStaticStat<FStat_STAT_SlateTotalWidgetsPerFrame> FVar20;
  FScriptContainerElement *pFVar21;
  FScriptContainerElement *pFVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStackY_f8 [32];
  undefined1 local_98;
  undefined1 local_97;
  undefined1 local_96;
  undefined1 local_95;
  undefined1 local_94;
  undefined1 local_93 [3];
  FName local_90;
  FName local_88;
  LARGE_INTEGER local_80;
  FStatMessage local_78;
  FStatMessage local_68;
  FName local_58;
  FName local_50;
  LARGE_INTEGER *local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7SWidget__6B_;
  FSlateInvalidationRootHandle::FSlateInvalidationRootHandle
            (&(this->FastPathProxyHandle).InvalidationRootHandle);
  pTVar1 = &this->VisibilityAttribute;
  (this->FastPathProxyHandle).WidgetIndex = FSlateInvalidationWidgetIndex::Invalid;
  (this->FastPathProxyHandle).WidgetSortOrder.Order = 0;
  this->bHasRelativeLayoutScale = '\0';
  this->bVolatilityAlwaysInvalidatesPrepass = '\0';
  this->bCanChildrenBeAccessible = '\x01';
  puVar2 = &this->field_0x30;
  this->bCanSupportFocus = '\x01';
  this->bHasCustomPrepass = '\0';
  this->bPrepassLayoutScaleMultiplierSet = '\0';
  this->bDesiredSizeSet = '\0';
  this->bHasActiveTimers = '\0';
  this->bIsHoveredAttributeSet = '\0';
  this->bIsDeclarativeSyntaxConstructionCompleted = '\0';
  this->bEnabledAttributesUpdate = '\x01';
  this->bHasRegisteredSlateAttribute = '\0';
  this->bNeedsPrepass = '\x01';
  this->bInheritedVolatility = '\0';
  this->bCachedVolatile = '\0';
  this->bForceVolatile = '\0';
  this->bToolTipForceFieldEnabled = '\0';
  this->bClippingProxy = '\0';
  this->bCanHaveChildren = '\x01';
  this->AccessibleBehavior = NotAccessible;
  this->AccessibleSummaryBehavior = Auto;
  this->Clipping = Inherit;
  this->PixelSnappingMethod = Inherit;
  this->FlowDirectionPreference = Inherit;
  this->UpdateFlags = NeedsTick;
  pTVar1->field_0x0 = EVisibility::Visible.Value.Value;
  if (((pTVar1 < this) || (this + 1 <= pTVar1)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                          ,0x15,
                          L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                         ), bVar12)) {
    pcVar9 = (code *)swi(3);
    pSVar14 = (SWidget *)(*pcVar9)();
    return pSVar14;
  }
  iVar23 = (int)this;
  pcVar9 = *(code **)(this->_padding_ + 8);
  if (pcVar9 == GetWidgetClass) {
    pFVar15 = GetPrivateWidgetClass();
  }
  else {
    pFVar15 = (FSlateWidgetClassData *)(*pcVar9)(this);
  }
  pFVar21 = (pFVar15->Descriptor).Attributes.AllocatorInstance.Data;
  pFVar22 = pFVar21 + (longlong)(pFVar15->Descriptor).Attributes.ArrayNum * 0x58;
  for (; pFVar21 != pFVar22; pFVar21 = pFVar21 + 0x58) {
    if ((*(int *)(pFVar21 + 8) == (int)pTVar1 - iVar23) &&
       (pFVar21[0x50] == (FScriptContainerElement)0x0)) goto LAB_1425bf3a9;
  }
  local_98 = 0;
  `SlateAttributePrivate::
  TSlateMemberAttribute<EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  ::VerifyAttributeAddress<SWidget,void>'::__l2::<lambda_1>::operator()(&local_98);
LAB_1425bf3a9:
  pTVar3 = &this->EnabledStateAttribute;
  pTVar3->field_0x0 = 1;
  if (((pTVar3 < this) || (this + 1 <= pTVar3)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                          ,0x15,
                          L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                         ), bVar12)) {
    pcVar9 = (code *)swi(3);
    pSVar14 = (SWidget *)(*pcVar9)();
    return pSVar14;
  }
  pcVar9 = *(code **)(this->_padding_ + 8);
  if (pcVar9 == GetWidgetClass) {
    pFVar15 = GetPrivateWidgetClass();
  }
  else {
    pFVar15 = (FSlateWidgetClassData *)(*pcVar9)(this);
  }
  pFVar21 = (pFVar15->Descriptor).Attributes.AllocatorInstance.Data;
  pFVar22 = pFVar21 + (longlong)(pFVar15->Descriptor).Attributes.ArrayNum * 0x58;
  for (; pFVar21 != pFVar22; pFVar21 = pFVar21 + 0x58) {
    if ((*(int *)(pFVar21 + 8) == (int)pTVar3 - iVar23) &&
       (pFVar21[0x50] == (FScriptContainerElement)0x0)) goto LAB_1425bf435;
  }
  local_97 = 0;
  `SlateAttributePrivate::
  TSlateMemberAttribute<bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  ::VerifyAttributeAddress<SWidget,void>'::__l2::<lambda_1>::operator()(&local_97);
LAB_1425bf435:
  pTVar3 = &this->HoveredAttribute;
  pTVar3->field_0x0 = 0;
  if (((pTVar3 < this) || (this + 1 <= pTVar3)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                          ,0x15,
                          L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                         ), bVar12)) {
    pcVar9 = (code *)swi(3);
    pSVar14 = (SWidget *)(*pcVar9)();
    return pSVar14;
  }
  pcVar9 = *(code **)(this->_padding_ + 8);
  if (pcVar9 == GetWidgetClass) {
    pFVar15 = GetPrivateWidgetClass();
  }
  else {
    pFVar15 = (FSlateWidgetClassData *)(*pcVar9)(this);
  }
  pFVar21 = (pFVar15->Descriptor).Attributes.AllocatorInstance.Data;
  pFVar22 = pFVar21 + (longlong)(pFVar15->Descriptor).Attributes.ArrayNum * 0x58;
  for (; pFVar21 != pFVar22; pFVar21 = pFVar21 + 0x58) {
    if ((*(int *)(pFVar21 + 8) == (int)pTVar3 - iVar23) &&
       (pFVar21[0x50] == (FScriptContainerElement)0x0)) goto LAB_1425bf4c1;
  }
  local_96 = 0;
  `SlateAttributePrivate::
  TSlateMemberAttribute<bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  ::VerifyAttributeAddress<SWidget,void>'::__l2::<lambda_1>::operator()(&local_96);
LAB_1425bf4c1:
  this->PrepassLayoutScaleMultiplierValue = 1.0;
  (this->PersistentState).PaintParent.Object = (SWidget *)0x0;
  (this->PersistentState).PaintParent.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PersistentState).InitialClipState.bIsSet = false;
  FGeometry::FGeometry(&(this->PersistentState).AllottedGeometry);
  FGeometry::FGeometry(&(this->PersistentState).DesktopGeometry);
  (this->PersistentState).CullingBounds.Left = -1.0;
  pTVar4 = &this->RenderTransformPivotAttribute;
  (this->PersistentState).CullingBounds.Top = -1.0;
  (this->PersistentState).CullingBounds.Right = -1.0;
  (this->PersistentState).CullingBounds.Bottom = -1.0;
  (this->PersistentState).WidgetStyle.ColorAndOpacityTint.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  (this->PersistentState).WidgetStyle.ForegroundColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  fVar10 = FLinearColor::White.field0_0x0._0_4_;
  fVar24 = FLinearColor::White.field0_0x0._4_4_;
  fVar25 = FLinearColor::White.field0_0x0._8_4_;
  fVar26 = FLinearColor::White.field0_0x0._12_4_;
  (this->PersistentState).CachedElementHandle.Ptr.Object = (FSlateCachedElementList *)0x0;
  (this->PersistentState).CachedElementHandle.Ptr.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  fVar24 = fVar24 * _UNK_15092fd54;
  fVar25 = fVar25 * _UNK_15092fd58;
  fVar26 = fVar26 * _UNK_15092fd5c;
  (this->PersistentState).WidgetStyle.SubduedForeground.field0_0x0._s_0.R =
       fVar10 * ___xmm_3f19999a3f19999a3f19999a3f19999a;
  (this->PersistentState).WidgetStyle.SubduedForeground.field0_0x0._s_0.G = fVar24;
  (this->PersistentState).WidgetStyle.SubduedForeground.field0_0x0._s_0.B = fVar25;
  (this->PersistentState).WidgetStyle.SubduedForeground.field0_0x0._s_0.A = fVar26;
  (this->PersistentState).LayerId = 0;
  (this->PersistentState).OutgoingLayerId = 0;
  (this->PersistentState).IncomingUserIndex = -1;
  (this->PersistentState).IncomingFlowDirection = LeftToRight;
  puVar5 = &(this->PersistentState).field_0x12b;
  (this->PersistentState).bParentEnabled = '\x01';
  (this->PersistentState).bIsInGameLayer = '\0';
  (this->PersistentState).bDeferredPainting = '\0';
  (this->PersistentState).bInheritedHittestability = '\0';
  (this->PersistentState).InitialPixelSnappingMethod = Inherit;
  (this->DesiredSize).field0_0x0 = (TVector2<float>_u_0)0x0;
  TVar11 = UE::Math::TVector2<double>::ZeroVector;
  *pTVar4 = (TSlateAttribute<UE::Math::TVector2<double>,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
             )UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  iVar13 = _finite(TVar11.field0_0x0._0_8_);
  if ((iVar13 == 0) ||
     (iVar13 = _finite(*(double *)&(this->RenderTransformPivotAttribute).field_0x8), iVar13 == 0)) {
    local_95 = 0;
    `SlateAttributePrivate::
    TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::VerifyNan'::__l17::<lambda_1>::operator()(&local_95);
  }
  if (((pTVar4 < this) || (this + 1 <= pTVar4)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                          ,0x15,
                          L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                         ), bVar12)) {
    pcVar9 = (code *)swi(3);
    pSVar14 = (SWidget *)(*pcVar9)();
    return pSVar14;
  }
  pcVar9 = *(code **)(this->_padding_ + 8);
  if (pcVar9 == GetWidgetClass) {
    pFVar15 = GetPrivateWidgetClass();
  }
  else {
    pFVar15 = (FSlateWidgetClassData *)(*pcVar9)(this);
  }
  pFVar21 = (pFVar15->Descriptor).Attributes.AllocatorInstance.Data;
  pFVar22 = pFVar21 + (longlong)(pFVar15->Descriptor).Attributes.ArrayNum * 0x58;
  for (; pFVar21 != pFVar22; pFVar21 = pFVar21 + 0x58) {
    if ((*(int *)(pFVar21 + 8) == (int)pTVar4 - iVar23) &&
       (pFVar21[0x50] == (FScriptContainerElement)0x0)) goto LAB_1425bf644;
  }
  local_94 = 0;
  `SlateAttributePrivate::
  TSlateMemberAttribute<UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  ::VerifyAttributeAddress<SWidget,void>'::__l2::<lambda_1>::operator()(&local_94);
LAB_1425bf644:
  pTVar6 = &this->RenderTransformAttribute;
  (this->RenderTransformAttribute).field_0x18 = 0;
  if (((pTVar6 < this) || (this + 1 <= pTVar6)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                          ,0x15,
                          L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                         ), bVar12)) {
    pcVar9 = (code *)swi(3);
    pSVar14 = (SWidget *)(*pcVar9)();
    return pSVar14;
  }
  pcVar9 = *(code **)(this->_padding_ + 8);
  if (pcVar9 == GetWidgetClass) {
    pFVar15 = GetPrivateWidgetClass();
  }
  else {
    pFVar15 = (FSlateWidgetClassData *)(*pcVar9)(this);
  }
  pFVar21 = (pFVar15->Descriptor).Attributes.AllocatorInstance.Data;
  pFVar22 = pFVar21 + (longlong)(pFVar15->Descriptor).Attributes.ArrayNum * 0x58;
  for (; pFVar21 != pFVar22; pFVar21 = pFVar21 + 0x58) {
    if ((*(int *)(pFVar21 + 8) == (int)pTVar6 - iVar23) &&
       (pFVar21[0x50] == (FScriptContainerElement)0x0)) goto LAB_1425bf6d0;
  }
  `SlateAttributePrivate::
  TSlateMemberAttribute<TOptional<TTransform2<float>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  ::VerifyAttributeAddress<SWidget,void>'::__l2::<lambda_1>::operator()(local_93);
LAB_1425bf6d0:
  (this->CullingBoundsExtension).Left = 0.0;
  (this->CullingBoundsExtension).Top = 0.0;
  (this->CullingBoundsExtension).Right = 0.0;
  (this->CullingBoundsExtension).Bottom = 0.0;
  (this->MetaData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MetaData).ArrayNum = 0;
  (this->MetaData).ArrayMax = 0;
  (this->ParentWidgetPtr).Object = (SWidget *)0x0;
  (this->ParentWidgetPtr).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Tag).ComparisonIndex = 0;
  (this->Tag).Number = 0;
  (this->TypeOfWidget).ComparisonIndex = 0;
  (this->TypeOfWidget).Number = 0;
  (this->CreatedInLocation).ComparisonIndex = 0;
  (this->CreatedInLocation).Number = 0;
  this->RenderOpacity = 1.0;
  this->LastPaintFrame = 0;
  this->LastPrepassFrame = 0;
  this->Debug_DestroyedTag = 0xdc;
  this->Debug_LastTraceInfoSent = '\0';
  SlateTraceMetaData::UniqueIdGenerator = SlateTraceMetaData::UniqueIdGenerator + 1;
  this->UniqueIdentifier = SlateTraceMetaData::UniqueIdGenerator;
  (this->StatID).StatIdPtr = &TStatId::TStatId_NAME_None;
  this->AllocSize = 0;
  if (GIsRunning != false) {
    FVar17 = StatPtr_STAT_SlateTotalWidgets;
    if (StatPtr_STAT_SlateTotalWidgets == (FThreadSafeStaticStat<FStat_STAT_SlateTotalWidgets>)0x0)
    {
      pFVar16 = ::FName::FName(&local_58,"STAT_SlateTotalWidgets");
      FVar17 = (FThreadSafeStaticStat<FStat_STAT_SlateTotalWidgets>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateTotalWidgets,*pFVar16,
                          L"Total Widgets","STATGROUP_SlateMemory","STATCAT_Advanced",
                          L"Slate Memory",true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar7 = *(FName *)FVar17;
    local_90 = FVar7;
    if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar18 == (FThreadStats *)0x0) {
        pFVar19 = FThreadStatsPool::Get();
        pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
      }
      local_78.NameAndInfo.Number = FVar7.Number & 0xffffafff | 0xa000;
      local_78.StatData.Pad[0] = '\x01';
      local_78.StatData.Pad[1] = '\0';
      local_78.StatData.Pad[2] = '\0';
      local_78.StatData.Pad[3] = '\0';
      local_78.StatData.Pad[4] = '\0';
      local_78.StatData.Pad[5] = '\0';
      local_78.StatData.Pad[6] = '\0';
      local_78.StatData.Pad[7] = '\0';
      local_90 = FVar7;
      local_78.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar18,&local_78);
      FStatsTrace::Add(&local_90,1);
      if (pFVar18->ScopeCount == 0) {
        FThreadStats::Flush(pFVar18,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar18,false,false);
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FVar20 = StatPtr_STAT_SlateTotalWidgetsPerFrame;
      if (StatPtr_STAT_SlateTotalWidgetsPerFrame ==
          (FThreadSafeStaticStat<FStat_STAT_SlateTotalWidgetsPerFrame>)0x0) {
        pFVar16 = ::FName::FName(&local_50,"STAT_SlateTotalWidgetsPerFrame");
        FVar20 = (FThreadSafeStaticStat<FStat_STAT_SlateTotalWidgetsPerFrame>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateTotalWidgetsPerFrame,
                            *pFVar16,L"Widgets Created (Per Frame)","STATGROUP_Slate",
                            "STATCAT_Advanced",L"Slate",true,true,ST_int64,false,false,MCR_Invalid);
      }
      FVar7 = *(FName *)FVar20;
      local_90 = FVar7;
      if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar18 == (FThreadStats *)0x0) {
          pFVar19 = FThreadStatsPool::Get();
          pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
        }
        local_68.NameAndInfo.Number = FVar7.Number & 0xffffafff | 0xa000;
        local_68.StatData.Pad[0] = '\x01';
        local_68.StatData.Pad[1] = '\0';
        local_68.StatData.Pad[2] = '\0';
        local_68.StatData.Pad[3] = '\0';
        local_68.StatData.Pad[4] = '\0';
        local_68.StatData.Pad[5] = '\0';
        local_68.StatData.Pad[6] = '\0';
        local_68.StatData.Pad[7] = '\0';
        local_88 = FVar7;
        local_68.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar18,&local_68);
        FStatsTrace::Add(&local_88,1);
        if (pFVar18->ScopeCount == 0) {
          FThreadStats::Flush(pFVar18,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar18,false,false);
        }
      }
    }
  }
  SlateTraceDetail::GWidgetCount = SlateTraceDetail::GWidgetCount + 1;
  if ((-1 < SlateChannel->Enabled) &&
     (LVar8 = (LARGE_INTEGER)this->UniqueIdentifier, -1 < SlateChannel->Enabled)) {
    UE::Trace::Private::FLogScope::Enter<FSlateTraceAddWidgetFields>((TLogScope<0> *)&local_48);
    QueryPerformanceCounter(&local_80);
    *local_48 = local_80;
    local_48[1] = LVar8;
    *(undefined8 *)(local_40 + 0x28) = *(undefined8 *)(local_40 + 0x20);
  }
  return this;
}

// ~SWidget @ 1425c1dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall SWidget::~SWidget(SWidget *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  FSlateAccessibleMessageHandler *this_00;
  LARGE_INTEGER LVar6;
  FName FVar7;
  uchar auVar8 [8];
  FScriptContainerElement *pFVar9;
  longlong *plVar10;
  code *pcVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  bool bVar14;
  FSlateApplicationBase *this_01;
  FSlateInvalidationRoot *this_02;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_SlateTotalWidgets> FVar16;
  FThreadStats *pFVar17;
  FThreadStatsPool *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_SlateSWidgetAllocSize> FVar19;
  uint uVar20;
  TSharedRef<FActiveTimerHandle,1> *pTVar21;
  TSharedRef<FActiveTimerHandle,1> *pTVar22;
  undefined1 auStackY_138 [32];
  undefined1 local_d8 [8];
  FName local_d0;
  TSharedPtr<UE::Slate::FActiveTimersMetaData,1> local_c8;
  SWidget *local_b8;
  LARGE_INTEGER local_b0;
  FName local_a8;
  FName local_a0;
  FStatMessage local_98;
  FStatMessage local_88;
  FSlateInvalidationRootHandle local_78;
  FSlateInvalidationWidgetIndex local_68;
  undefined4 uStack_64;
  FName local_60;
  FName local_58;
  FSlateInvalidationRootHandle local_50;
  LARGE_INTEGER *local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_138;
  this->_padding_ = (longlong)&___7SWidget__6B_;
  if (this->Debug_DestroyedTag != 0xdc) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  this->bHasRegisteredSlateAttribute = '\0';
  this->Debug_DestroyedTag = 0xa3;
  if (FSlateApplicationBase::CurrentBaseApplication.Object != (FSlateApplicationBase *)0x0) {
    this_01 = FSlateApplicationBase::Get();
    if (this->bHasActiveTimers != '\0') {
      GetMetaData<UE::Slate::FActiveTimersMetaData>(this,&local_c8);
      if (local_c8.Object == (FActiveTimersMetaData *)0x0) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("ActiveTimersMetaData",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\SWidget.cpp"
                            ,0x129,L"");
        if (bVar14) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar14) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      iVar4 = ((local_c8.Object)->ActiveTimers).ArrayNum;
      pTVar21 = (TSharedRef<FActiveTimerHandle,1> *)
                ((local_c8.Object)->ActiveTimers).AllocatorInstance.Data;
      pTVar22 = pTVar21 + iVar4;
      while( true ) {
        if (((local_c8.Object)->ActiveTimers).ArrayNum != iVar4) {
          local_d8[0] = 0;
          `TCheckedPointerIterator<TSharedRef<FActiveTimerHandle,1>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_d8);
        }
        if (pTVar21 == pTVar22) break;
        FSlateApplicationBase::UnRegisterActiveTimer(this_01,pTVar21);
        pTVar21 = pTVar21 + 1;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c8.SharedReferenceCount.ReferenceController);
    }
    pTVar5 = (this_01->AccessibleMessageHandler).SharedReferenceCount.ReferenceController;
    this_00 = (this_01->AccessibleMessageHandler).Object;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSlateAccessibleMessageHandler::OnWidgetRemoved(this_00,this);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    AcquireSRWLockExclusive((PSRWLOCK)&AccessibleText.RWLock);
    local_d0 = (FName)this;
    if (AccessibleText.AnnotationMap._8_4_ != AccessibleText.AnnotationMap._52_4_) {
      uVar20 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) *
               -0x7a143595;
      uVar20 = (uVar20 >> 0xd ^ uVar20) * -0x3d4d51cb;
      TSet<TTuple<SWidget_const_*,TAttribute<FText>_>,TDefaultMapHashableKeyFuncs<SWidget_const_*,TAttribute<FText>,0>,FDefaultSetAllocator>
      ::RemoveImpl<SWidget_const_*>
                ((TSet<TTuple<SWidget_const_*,TAttribute<FText>_>,TDefaultMapHashableKeyFuncs<SWidget_const_*,TAttribute<FText>,0>,FDefaultSetAllocator>
                  *)&AccessibleText,uVar20 >> 0x10 ^ uVar20,(SWidget **)&local_d0);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&AccessibleText.RWLock);
    AcquireSRWLockExclusive((PSRWLOCK)&AccessibleSummaryText.RWLock);
    local_b8 = this;
    if (AccessibleSummaryText.AnnotationMap._8_4_ != AccessibleSummaryText.AnnotationMap._52_4_) {
      uVar20 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) *
               -0x7a143595;
      uVar20 = (uVar20 >> 0xd ^ uVar20) * -0x3d4d51cb;
      TSet<TTuple<SWidget_const_*,TAttribute<FText>_>,TDefaultMapHashableKeyFuncs<SWidget_const_*,TAttribute<FText>,0>,FDefaultSetAllocator>
      ::RemoveImpl<SWidget_const_*>
                ((TSet<TTuple<SWidget_const_*,TAttribute<FText>_>,TDefaultMapHashableKeyFuncs<SWidget_const_*,TAttribute<FText>,0>,FDefaultSetAllocator>
                  *)&AccessibleSummaryText,uVar20 >> 0x10 ^ uVar20,&local_b8);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&AccessibleSummaryText.RWLock);
  }
  local_50.InvalidationRoot = (this->FastPathProxyHandle).InvalidationRootHandle.InvalidationRoot;
  local_50.UniqueId = (this->FastPathProxyHandle).InvalidationRootHandle.UniqueId;
  local_50._12_4_ = *(undefined4 *)&(this->FastPathProxyHandle).InvalidationRootHandle.field_0xc;
  this_02 = FSlateInvalidationRootHandle::GetInvalidationRoot(&local_50);
  if (this_02 != (FSlateInvalidationRoot *)0x0) {
    FSlateInvalidationRoot::OnWidgetDestroyed(this_02,this);
  }
  FSlateInvalidationRootHandle::FSlateInvalidationRootHandle(&local_78);
  local_68 = FSlateInvalidationWidgetIndex::Invalid;
  uStack_64 = 0;
  uVar13 = (ulonglong)(uint)FSlateInvalidationWidgetIndex::Invalid;
  (this->FastPathProxyHandle).InvalidationRootHandle.InvalidationRoot = local_78.InvalidationRoot;
  (this->FastPathProxyHandle).InvalidationRootHandle.UniqueId = local_78.UniqueId;
  *(undefined4 *)&(this->FastPathProxyHandle).InvalidationRootHandle.field_0xc = local_78._12_4_;
  uVar12 = (undefined4)uVar13;
  (this->FastPathProxyHandle).WidgetIndex.ArrayIndex = (short)uVar12;
  (this->FastPathProxyHandle).WidgetIndex.ElementIndex = (short)((uint)uVar12 >> 0x10);
  (this->FastPathProxyHandle).WidgetSortOrder =
       (FSlateInvalidationWidgetSortOrder)(int)(uVar13 >> 0x20);
  FSlateCachedElementsHandle::RemoveFromCache(&(this->PersistentState).CachedElementHandle);
  if (-1 < SlateChannel->Enabled) {
    LVar6 = (LARGE_INTEGER)this->UniqueIdentifier;
    if (-1 < SlateChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<FSlateTraceRemoveWidgetFields>((TLogScope<0> *)&local_40)
      ;
      QueryPerformanceCounter(&local_b0);
      *local_40 = local_b0;
      local_40[1] = LVar6;
      *(undefined8 *)(local_38 + 0x28) = *(undefined8 *)(local_38 + 0x20);
    }
    if (SlateTraceDetail::GWidgetCount == 0) {
      bVar14 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_96221999168224740>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Trace\\SlateTrace.cpp"
                          ,0x21c,"SlateTraceDetail::GWidgetCount > 0");
      if (bVar14) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
  }
  SlateTraceDetail::GWidgetCount = SlateTraceDetail::GWidgetCount - 1;
  FVar16 = StatPtr_STAT_SlateTotalWidgets;
  if (StatPtr_STAT_SlateTotalWidgets == (FThreadSafeStaticStat<FStat_STAT_SlateTotalWidgets>)0x0) {
    pFVar15 = ::FName::FName(&local_60,"STAT_SlateTotalWidgets");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_SlateTotalWidgets>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateTotalWidgets,*pFVar15,
                        L"Total Widgets","STATGROUP_SlateMemory","STATCAT_Advanced",L"Slate Memory",
                        true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar7 = *(FName *)FVar16;
  local_d0 = FVar7;
  if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar17 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar17 == (FThreadStats *)0x0) {
      pFVar18 = FThreadStatsPool::Get();
      pFVar17 = FThreadStatsPool::GetFromPool(pFVar18);
    }
    local_98.NameAndInfo.Number = FVar7.Number & 0xffffbfff | 0xb000;
    local_98.StatData.Pad[0] = '\x01';
    local_98.StatData.Pad[1] = '\0';
    local_98.StatData.Pad[2] = '\0';
    local_98.StatData.Pad[3] = '\0';
    local_98.StatData.Pad[4] = '\0';
    local_98.StatData.Pad[5] = '\0';
    local_98.StatData.Pad[6] = '\0';
    local_98.StatData.Pad[7] = '\0';
    local_a8 = FVar7;
    local_98.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar17,&local_98);
    FStatsTrace::Add(&local_a8,-1);
    if (pFVar17->ScopeCount == 0) {
      FThreadStats::Flush(pFVar17,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar17,false,false);
    }
  }
  auVar8 = (uchar  [8])this->AllocSize;
  if (auVar8 != (uchar  [8])0x0) {
    FVar19 = StatPtr_STAT_SlateSWidgetAllocSize;
    if (StatPtr_STAT_SlateSWidgetAllocSize ==
        (FThreadSafeStaticStat<FStat_STAT_SlateSWidgetAllocSize>)0x0) {
      pFVar15 = ::FName::FName(&local_58,"STAT_SlateSWidgetAllocSize");
      FVar19 = (FThreadSafeStaticStat<FStat_STAT_SlateSWidgetAllocSize>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateSWidgetAllocSize,*pFVar15,
                          L"SWidget Total Allocated Size","STATGROUP_SlateMemory","STATCAT_Advanced"
                          ,L"Slate Memory",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar7 = *(FName *)FVar19;
    local_d0 = FVar7;
    if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar17 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar17 == (FThreadStats *)0x0) {
        pFVar18 = FThreadStatsPool::Get();
        pFVar17 = FThreadStatsPool::GetFromPool(pFVar18);
      }
      local_88.NameAndInfo.Number = FVar7.Number & 0xffffbfff | 0xb000;
      local_a0 = FVar7;
      local_88.StatData.Pad = auVar8;
      local_88.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar17,&local_88);
      FStatsTrace::Add(&local_a0,-(longlong)auVar8);
      if (pFVar17->ScopeCount == 0) {
        FThreadStats::Flush(pFVar17,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar17,false,false);
      }
    }
  }
  pTVar5 = (this->ParentWidgetPtr).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  DestructItems<TSharedRef<ISlateMetaData,1>,int>
            ((TSharedRef<ISlateMetaData,1> *)(this->MetaData).AllocatorInstance.Data,
             (this->MetaData).ArrayNum);
  pFVar9 = (this->MetaData).AllocatorInstance.Data;
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  FSlateWidgetPersistentState::~FSlateWidgetPersistentState(&this->PersistentState);
  plVar10 = (longlong *)this->_padding_;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar10 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar10 + 8))(plVar10,1);
    }
  }
  return;
}

// operator() @ 1425c3b70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`SWidget::UpdateFastPathVisibility'::__l2::<lambda_1>::operator()(void *this,SWidget *param_1)

{
  longlong lVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  FWidgetProxy *pFVar5;
  longlong *plVar6;
  int iVar7;
  byte bVar8;
  FSlateInvalidationWidgetVisibility_u_0 FVar9;
  FHittestGrid *this_00;
  FSlateInvalidationWidgetVisibility_u_0 local_38 [8];
  FHittestGrid *local_30;
  longlong local_28;
  TReferenceControllerBase<1> *local_20;
  SWidget *local_18;
  
  this_00 = *(FHittestGrid **)((longlong)this + 8);
  iVar7 = 0;
  bVar8 = 0;
  if ((*(uchar *)&param_1->VisibilityAttribute & 0x19) != 0) {
    bVar8 = 2;
  }
  bVar2 = 0;
  if ((TEnumAsByte<EVisibility::Private>)*(uchar *)&param_1->VisibilityAttribute ==
      EVisibility::Collapsed.Value.Value) {
    bVar2 = 8;
  }
  FVar9.Flags = bVar8 | bVar2 | -((*(byte *)this & 0xc) != 0) & 4U | (*(byte *)this & 3) == 3;
  bVar3 = FWidgetProxyHandle::IsValid(&param_1->FastPathProxyHandle,param_1);
  if (bVar3) {
    this_00 = ((param_1->FastPathProxyHandle).InvalidationRootHandle.InvalidationRoot)->
              RootHittestGrid;
    pFVar5 = FWidgetProxyHandle::GetProxy(&param_1->FastPathProxyHandle);
    (pFVar5->Visibility).field0_0x0.Flags = (uchar)FVar9;
  }
  if (this_00 != (FHittestGrid *)0x0) {
    FHittestGrid::RemoveWidget(this_00,param_1);
  }
  FSlateCachedElementsHandle::ClearCachedElements(&(param_1->PersistentState).CachedElementHandle);
  plVar6 = (longlong *)(**(code **)(param_1->_padding_ + 0x188))(param_1);
  local_38[0].Flags = FVar9.Flags;
  local_30 = this_00;
  if (*(char *)((longlong)plVar6 + 0x19) != -0x24) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  lVar1 = plVar6[3];
  *(undefined1 *)(plVar6 + 3) = 1;
  iVar4 = (**(code **)*plVar6)(plVar6);
  if (0 < iVar4) {
    do {
      (**(code **)(*plVar6 + 0x38))(plVar6,&local_28,iVar7);
      operator()(local_38,local_18);
      if (local_28 != 0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_20);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar4);
  }
  *(char *)(plVar6 + 3) = (char)lVar1;
  return;
}

// AddMetadataInternal @ 1425c8c10

void __thiscall SWidget::AddMetadataInternal(SWidget *this,TSharedRef<ISlateMetaData,1> *param_1)

{
  int *piVar1;
  TArray<TSharedRef<ISlateMetaData,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  TSharedRef<ISlateMetaData,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  ISlateMetaData *pIVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  FName *pFVar10;
  FScriptContainerElement *pFVar11;
  
  pTVar2 = &this->MetaData;
  pTVar3 = (TSharedRef<ISlateMetaData,1> *)(pTVar2->AllocatorInstance).Data;
  if ((pTVar3 <= param_1) && (param_1 < pTVar3 + (this->MetaData).ArrayMax)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar9 = (this->MetaData).ArrayNum;
  piVar1 = &(this->MetaData).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->MetaData).ArrayNum = iVar9 + 1;
  pFVar11 = (pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
  *(ISlateMetaData **)pFVar11 = param_1->Object;
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar11 + 8) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((iVar9 == 0) && (this->bHasRegisteredSlateAttribute != 0)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index != 0 || !HasRegisteredSlateAttribute()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\SWidget.cpp"
                       ,0x79a,L"The first slot is reserved for SlateAttribute");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pIVar5 = param_1->Object;
  pcVar6 = *(code **)((longlong)*pIVar5 + 8);
  pFVar10 = FReflectionMetaData::GetTypeId();
  cVar8 = (*pcVar6)(pIVar5,pFVar10);
  if (cVar8 != '\0') {
    FSlateTrace::UpdateWidgetInfo(this);
  }
  return;
}

// ArrangeChildren @ 1425cb080

void __thiscall
SWidget::ArrangeChildren(SWidget *this,FGeometry *param_1,FArrangedChildren *param_2,bool param_3)

{
  if (param_3) {
    FSlateAttributeMetaData::UpdateChildrenOnlyVisibilityAttributes(this,DelayInvalidation,false);
  }
                    /* WARNING: Could not recover jumptable at 0x0001425cb0c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x240))(this,param_1,param_2);
  return;
}

// AssignParentWidget @ 1425ce0c0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall SWidget::AssignParentWidget(SWidget *this,TSharedPtr<SWidget,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  FSlateAccessibleMessageHandler *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  
  if ((param_1->Object != (SWidget *)0x0) && (param_1->Object == SNullWidget::NullWidget.Object)) {
    local_res8[0] = 0;
    `SWidget::AssignParentWidget'::__l2::<lambda_1>::operator()(local_res8);
  }
  if (this == SNullWidget::NullWidget.Object) {
    local_res10[0] = 0;
    `SWidget::AssignParentWidget'::__l2::<lambda_2>::operator()(local_res10);
  }
  if (param_1->Object == (SWidget *)0x0) {
    local_res18[0] = 0;
    `SWidget::AssignParentWidget'::__l2::<lambda_3>::operator()(local_res18);
  }
  (this->ParentWidgetPtr).Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (this->ParentWidgetPtr).WeakReferenceCount.ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->ParentWidgetPtr).WeakReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    (this->ParentWidgetPtr).WeakReferenceCount.ReferenceController = pTVar3;
  }
  if (FSlateApplicationBase::CurrentBaseApplication.Object != (FSlateApplicationBase *)0x0) {
    if (FSlateApplicationBase::CurrentBaseApplication.Object == (FSlateApplicationBase *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentBaseApplication.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Application\\SlateApplicationBase.h"
                         ,0x22a,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (FSlateApplicationBase::CurrentBaseApplication.Object == (FSlateApplicationBase *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pTVar3 = ((FSlateApplicationBase::CurrentBaseApplication.Object)->AccessibleMessageHandler).
             SharedReferenceCount.ReferenceController;
    pFVar5 = ((FSlateApplicationBase::CurrentBaseApplication.Object)->AccessibleMessageHandler).
             Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar5->bDirty = true;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  if (param_1->Object != (SWidget *)0x0) {
    Invalidate(param_1->Object,ChildOrder);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// CacheDesiredSize @ 1425d10e0

void __thiscall SWidget::CacheDesiredSize(SWidget *this,float param_1)

{
  double dVar1;
  double dVar2;
  TVector2<float>_u_0 TVar3;
  double *pdVar4;
  undefined1 local_18 [16];
  
  pdVar4 = (double *)(**(code **)(this->_padding_ + 0x170))(this,local_18,param_1);
  dVar1 = *pdVar4;
  dVar2 = pdVar4[1];
  this->bDesiredSizeSet = '\x01';
  TVar3._s_0.Y = (float)dVar2;
  TVar3._s_0.X = (float)dVar1;
  (this->DesiredSize).field0_0x0 = TVar3;
  return;
}

// CalculateCullingAndClippingRules @ 1425d1140

FSlateRect * __thiscall
SWidget::CalculateCullingAndClippingRules
          (SWidget *this,FSlateRect *__return_storage_ptr__,FGeometry *param_1,FSlateRect *param_2,
          bool *param_3,bool *param_4,bool *param_5)

{
  EWidgetClipping EVar1;
  bool *pbVar2;
  bool *pbVar3;
  bool bVar4;
  TVector2<float>_u_0 TVar5;
  FSlateRotatedRect *this_00;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  FSlateRect local_48;
  TVector2<float>_u_0 local_38;
  float local_30;
  undefined8 local_2c;
  float local_24;
  FSlateRotatedRect local_20;
  
  pbVar3 = param_5;
  pbVar2 = param_3;
  *param_3 = false;
  *param_5 = true;
  *param_4 = false;
  if (this->bClippingProxy != '\0') goto LAB_1425d120e;
  EVar1 = this->Clipping;
  if (EVar1 == ClipToBounds) {
    *param_3 = true;
  }
  else {
    if (EVar1 == ClipToBoundsWithoutIntersecting) {
      *param_3 = true;
      *param_5 = false;
    }
    else if (EVar1 == ClipToBoundsAlways) {
      *param_3 = true;
      *param_4 = true;
    }
    else if (EVar1 == OnDemand) {
      TVar5 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      if (this->bDesiredSizeSet != '\0') {
        TVar5._s_0 = *(TVector2<float>_u_0 *)&(this->DesiredSize).field0_0x0._s_0;
      }
      param_3._0_4_ = TVar5._s_0.X;
      param_5._0_4_ = SUB84(param_1->Size,0);
      if (param_5._0_4_ < param_3._0_4_ - __real_3f800000) {
LAB_1425d1209:
        bVar4 = true;
      }
      else {
        param_3._4_4_ = TVar5._s_0.Y;
        param_5._4_4_ = SUB84(param_1->Size,4);
        if (param_5._4_4_ < param_3._4_4_ - __real_3f800000) goto LAB_1425d1209;
        bVar4 = false;
      }
      *pbVar2 = bVar4;
    }
LAB_1425d120e:
    if (*pbVar2 == false) {
      local_48.Left = param_2->Left;
      local_48.Top = param_2->Top;
      local_48.Right = param_2->Right;
      local_48.Bottom = param_2->Bottom;
      goto LAB_1425d135b;
    }
  }
  param_5._0_4_ = SUB84(param_1->Size,0);
  param_3._0_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
  local_38._s_0.X = param_3._0_4_ - (this->CullingBoundsExtension).Left;
  param_3._4_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
  local_38._s_0.Y = param_3._4_4_ - (this->CullingBoundsExtension).Top;
  local_2c = 0;
  local_30 = (param_5._0_4_ + (this->CullingBoundsExtension).Right) - local_38._s_0.X;
  param_5._4_4_ = SUB84(param_1->Size,4);
  local_24 = (param_5._4_4_ + (this->CullingBoundsExtension).Bottom) - local_38._s_0.Y;
  this_00 = TransformRect<TTransform2<float>_>
                      (&local_20,&param_1->AccumulatedRenderTransform,
                       (FSlateRotatedRect *)&local_38._s_0);
  FSlateRotatedRect::ToBoundingRect(this_00,&local_48);
  if (*pbVar3 != false) {
    fVar8 = param_2->Bottom;
    if (local_48.Bottom <= param_2->Bottom) {
      fVar8 = local_48.Bottom;
    }
    fVar9 = param_2->Top;
    if (param_2->Top <= local_48.Top) {
      fVar9 = local_48.Top;
    }
    fVar6 = param_2->Right;
    if (local_48.Right <= param_2->Right) {
      fVar6 = local_48.Right;
    }
    fVar7 = param_2->Left;
    if (param_2->Left <= local_48.Left) {
      fVar7 = local_48.Left;
    }
    if ((fVar8 < fVar9) || (fVar6 < fVar7)) {
      fVar8 = 0.0;
      fVar6 = 0.0;
      fVar9 = 0.0;
      fVar7 = 0.0;
    }
    __return_storage_ptr__->Left = fVar7;
    __return_storage_ptr__->Top = fVar9;
    __return_storage_ptr__->Right = fVar6;
    __return_storage_ptr__->Bottom = fVar8;
    return __return_storage_ptr__;
  }
LAB_1425d135b:
  __return_storage_ptr__->Left = local_48.Left;
  __return_storage_ptr__->Top = local_48.Top;
  __return_storage_ptr__->Right = local_48.Right;
  __return_storage_ptr__->Bottom = local_48.Bottom;
  return __return_storage_ptr__;
}

// CanChildrenBeAccessible @ 1425d1420

bool __thiscall SWidget::CanChildrenBeAccessible(SWidget *this)

{
  return this->bCanChildrenBeAccessible;
}

// ConditionallyDetatchParentWidget @ 1425d2390

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall SWidget::ConditionallyDetatchParentWidget(SWidget *this,SWidget *param_1)

{
  atomic<int> *paVar1;
  TWeakPtr<SWidget,1> *pTVar2;
  atomic<int> aVar3;
  SWidget *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  FSlateAccessibleMessageHandler *pFVar6;
  atomic<int> aVar7;
  FSlateApplicationBase *pFVar8;
  FSlateInvalidationRoot *pFVar9;
  SWidget *pSVar10;
  SWidget *this_00;
  bool bVar11;
  undefined1 local_res8 [8];
  FSlateInvalidationRootHandle local_28;
  undefined8 local_18 [2];
  
  if (this == SNullWidget::NullWidget.Object) {
    `SWidget::ConditionallyDetatchParentWidget'::__l2::<lambda_1>::operator()(local_res8);
  }
  pTVar2 = &this->ParentWidgetPtr;
  pSVar4 = (SWidget *)(this->ParentWidgetPtr).WeakReferenceCount.ReferenceController;
  pSVar10 = pSVar4;
  this_00 = (SWidget *)0x0;
  if (pSVar4 != (SWidget *)0x0) {
    aVar3 = *(atomic<int> *)&pSVar4->_padding_;
    do {
      pSVar10 = (SWidget *)0x0;
      this_00 = (SWidget *)0x0;
      if (aVar3 == (atomic<int>)0x0) goto LAB_1425d23f5;
      LOCK();
      aVar7 = *(atomic<int> *)&pSVar4->_padding_;
      bVar11 = aVar3 == aVar7;
      if (bVar11) {
        *(atomic<int> *)&pSVar4->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar7 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar7;
    } while (!bVar11);
    pSVar10 = pSVar4;
    this_00 = pTVar2->Object;
  }
LAB_1425d23f5:
  if (this_00 == param_1) {
    if (pTVar2 != (TWeakPtr<SWidget,1> *)local_18) {
      pTVar5 = (this->ParentWidgetPtr).WeakReferenceCount.ReferenceController;
      pTVar2->Object = (SWidget *)0x0;
      (this->ParentWidgetPtr).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar5->WeakReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
        }
      }
    }
    if (FSlateApplicationBase::CurrentBaseApplication.Object != (FSlateApplicationBase *)0x0) {
      pFVar8 = FSlateApplicationBase::Get();
      pTVar5 = (pFVar8->AccessibleMessageHandler).SharedReferenceCount.ReferenceController;
      pFVar6 = (pFVar8->AccessibleMessageHandler).Object;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar6->bDirty = true;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    }
    if (this_00 != (SWidget *)0x0) {
      Invalidate(this_00,ChildOrder);
    }
    local_28.InvalidationRoot = (this->FastPathProxyHandle).InvalidationRootHandle.InvalidationRoot;
    local_28.UniqueId = (this->FastPathProxyHandle).InvalidationRootHandle.UniqueId;
    local_28._12_4_ = *(undefined4 *)&(this->FastPathProxyHandle).InvalidationRootHandle.field_0xc;
    pFVar9 = FSlateInvalidationRootHandle::GetInvalidationRoot(&local_28);
    if (pFVar9 != (FSlateInvalidationRoot *)0x0) {
      FGenericPlatformMisc::BeginNamedEvent(&FColor::Red,"SWidget_InvalidateChildRemovedFromTree");
      if (-1 < CpuChannel->Enabled) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId713,"SWidget_InvalidateChildRemovedFromTree",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\SWidget.cpp"
                   ,0x2c9);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId713);
        UpdateFastPathWidgetRemoved(this,pFVar9->RootHittestGrid);
        FCpuProfilerTrace::OutputEndEvent();
        FGenericPlatformMisc::EndNamedEvent();
        bVar11 = true;
        goto LAB_1425d2520;
      }
      UpdateFastPathWidgetRemoved(this,pFVar9->RootHittestGrid);
      FGenericPlatformMisc::EndNamedEvent();
    }
    bVar11 = true;
  }
  else {
    bVar11 = false;
  }
LAB_1425d2520:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar10);
  return bVar11;
}

// CreateAccessibleWidget @ 1425d8db0

TSharedRef<FSlateAccessibleWidget,1> * __thiscall
SWidget::CreateAccessibleWidget
          (SWidget *this,TSharedRef<FSlateAccessibleWidget,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FSlateAccessibleWidget *pFVar3;
  TSharedRef<SWidget,1> *pTVar4;
  TSharedRef<FSlateAccessibleWidget,1> *pTVar5;
  bool bVar6;
  TRawPtrProxy<FSlateAccessibleWidget> local_res10;
  TWeakPtr<SWidget,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  bVar6 = false;
  local_res10.Object = local_res10.Object & 0xffffffff00000000;
  pFVar3 = ::operator_new(0x68);
  if (pFVar3 == (FSlateAccessibleWidget *)0x0) {
    pFVar3 = (FSlateAccessibleWidget *)0x0;
  }
  else {
    pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
    local_28.Object = pTVar4->Object;
    local_28.WeakReferenceCount.ReferenceController =
         (pTVar4->SharedReferenceCount).ReferenceController;
    if (local_28.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    pFVar3 = FSlateAccessibleWidget::FSlateAccessibleWidget(pFVar3,&local_28,Unknown);
    bVar6 = true;
    if ((((pFVar3 != (FSlateAccessibleWidget *)0x0) && (pFVar3->_padding_ != 0)) &&
        (pFVar3->_padding_ != 0)) && (0 < *(int *)(pFVar3->_padding_ + 8))) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TSharedRef<FSlateAccessibleWidget,1> *)(*pcVar1)();
        return pTVar5;
      }
    }
  }
  local_res10.Object = pFVar3;
  TSharedRef<FSlateAccessibleWidget,1>::TSharedRef<FSlateAccessibleWidget,1><FSlateAccessibleWidget>
            (__return_storage_ptr__,&local_res10);
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// CreateStatID @ 1425d9850

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWidget::CreateStatID(SWidget *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_Slate_CreateStatID> FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  ForAnyElementType FVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  LARGE_INTEGER local_res8;
  FName local_res10;
  undefined4 local_res18 [2];
  FName local_res20;
  TStatIdData *local_98;
  FStatMessage local_90;
  FName local_80;
  FString local_70;
  FName *local_60;
  undefined4 *local_58;
  LARGE_INTEGER *local_50;
  FName *local_48;
  
  FVar11.Value = 0;
  FVar6 = StatPtr_STAT_Slate_CreateStatID;
  if (StatPtr_STAT_Slate_CreateStatID == (FThreadSafeStaticStat<FStat_STAT_Slate_CreateStatID>)0x0)
  {
    pFVar5 = ::FName::FName(&local_res10,"STAT_Slate_CreateStatID");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_Slate_CreateStatID>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Slate_CreateStatID,*pFVar5,
                       L"SWidget::CreateStatID","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,
                       true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar7 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar9.Value;
        local_res8.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\SWidget.cpp"
                   ,0x95);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar9.Value;
      local_res8.s.HighPart = uVar7;
      local_80 = FVar10;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = local_80.ComparisonIndex.Value;
      goto LAB_1425d998b;
    }
  }
  bVar3 = false;
  FVar10 = local_80;
LAB_1425d998b:
  if (this == (SWidget *)0x0) {
    ::FString::FString(&local_70,L"None");
  }
  else {
    FReflectionMetaData::GetWidgetDebugInfo(&local_70,this);
  }
  local_res10.ComparisonIndex.Value._0_1_ = 1;
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_70.Data.ArrayNum != 0) {
    FVar8.Data = local_70.Data.AllocatorInstance.Data;
  }
  local_res8.s.LowPart._0_1_ = 1;
  local_res18[0] = 2;
  pFVar5 = ::FName::FName((FName *)&local_90,(wchar_t *)FVar8.Data);
  local_res20 = *pFVar5;
  local_60 = &local_res20;
  local_58 = local_res18;
  local_50 = &local_res8;
  local_48 = &local_res10;
  `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_Slate>'::__l2::<lambda_1>::operator()
            (&local_60);
  (this->StatID).StatIdPtr = local_98;
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_90.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_90.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res8);
      local_90.StatData.Pad[4] = '\0';
      local_90.StatData.Pad[5] = '\0';
      local_90.StatData.Pad[6] = '\0';
      local_90.StatData.Pad[7] = '\0';
      local_90.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_90.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_90.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_90.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_90);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// EnableToolTipForceField @ 1425dac20

void __thiscall SWidget::EnableToolTipForceField(SWidget *this,bool param_1)

{
  this->bToolTipForceFieldEnabled = '\0';
  this->field_0x30 = this->field_0x30 | param_1 << 3;
  return;
}

// ExecuteActiveTimers @ 1425db390

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall SWidget::ExecuteActiveTimers(SWidget *this,double param_1,float param_2)

{
  int *piVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  EWidgetUpdateFlags EVar4;
  FActiveTimersMetaData *pFVar5;
  FScriptContainerElement *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  code *pcVar8;
  bool bVar9;
  EActiveTimerReturnType EVar10;
  uint uVar11;
  atomic<int> aVar12;
  TSharedPtr<UE::Slate::FActiveTimersMetaData,1> *pTVar13;
  FSlateApplicationBase *this_00;
  ulonglong uVar14;
  TSharedRef<FActiveTimerHandle,1> *_Dst;
  TReferenceControllerBase<1> *pTVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  EWidgetUpdateFlags EVar18;
  uint uVar19;
  ulonglong uVar20;
  FActiveTimerHandle *pFVar21;
  TSharedRef<UE::Slate::FActiveTimersMetaData,1> local_88;
  TSharedRef<FActiveTimerHandle,1> local_78;
  TSharedPtr<UE::Slate::FActiveTimersMetaData,1> local_68 [3];
  
  if ((this->bHasActiveTimers == '\0') &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("bHasActiveTimers",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\SWidget.cpp"
                         ,0x749,
                         L"The flag EWidgetUpdateFlags::NeedsActiveTimerUpdate should match with the bHasActiveTimers flag"
                        ), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar13 = GetMetaData<UE::Slate::FActiveTimersMetaData>(this,local_68);
  if ((pTVar13->Object == (FActiveTimersMetaData *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_88.SharedReferenceCount.ReferenceController =
       (pTVar13->SharedReferenceCount).ReferenceController;
  pFVar5 = pTVar13->Object;
  (pTVar13->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar13->Object = (FActiveTimersMetaData *)0x0;
  local_88.Object = pFVar5;
  if ((pFVar5 == (FActiveTimersMetaData *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68[0].SharedReferenceCount.ReferenceController);
  uVar14 = 0;
  uVar20 = uVar14;
  if (0 < (pFVar5->ActiveTimers).ArrayNum) {
    do {
      uVar19 = (uint)uVar14;
      uVar11 = 0;
      if ((int)uVar19 < (pFVar5->ActiveTimers).ArrayNum) {
        uVar11 = ~uVar19 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar6 = (pFVar5->ActiveTimers).AllocatorInstance.Data;
      pTVar7 = *(TReferenceControllerBase<1> **)(pFVar6 + uVar20 + 8);
      pFVar21 = *(FActiveTimerHandle **)(pFVar6 + uVar20);
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
        UNLOCK();
      }
      uVar11 = 0;
      if ((int)uVar19 < (pFVar5->ActiveTimers).ArrayNum) {
        uVar11 = ~uVar19 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      EVar10 = FActiveTimerHandle::ExecuteIfPending
                         (*(FActiveTimerHandle **)
                           ((pFVar5->ActiveTimers).AllocatorInstance.Data + uVar20),param_1,param_2)
      ;
      if (EVar10 == Continue) {
        uVar14 = (ulonglong)(uVar19 + 1);
        uVar20 = uVar20 + 0x10;
      }
      else {
        if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
          aVar3 = pTVar7->SharedReferenceCount;
          do {
            if (aVar3 == (atomic<int>)0x0) {
              pTVar15 = (TReferenceControllerBase<1> *)0x0;
              goto LAB_1425db6cc;
            }
            LOCK();
            aVar12 = pTVar7->SharedReferenceCount;
            bVar9 = aVar3 == aVar12;
            if (bVar9) {
              pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
              aVar12 = aVar3;
            }
            UNLOCK();
            aVar3 = aVar12;
          } while (!bVar9);
        }
        if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
          pFVar21 = (FActiveTimerHandle *)0x0;
        }
        pTVar15 = pTVar7;
        if (pFVar21 != (FActiveTimerHandle *)0x0) {
          if (FSlateApplicationBase::CurrentBaseApplication.Object != (FSlateApplicationBase *)0x0)
          {
            this_00 = FSlateApplicationBase::Get();
            if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_78.Object = pFVar21;
            local_78.SharedReferenceCount.ReferenceController = pTVar7;
            if ((pFVar21 == (FActiveTimerHandle *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x25d,L""), bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            FSlateApplicationBase::UnRegisterActiveTimer(this_00,&local_78);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_78.SharedReferenceCount.ReferenceController);
          }
          if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
            UNLOCK();
          }
          pFVar6 = (pFVar5->ActiveTimers).AllocatorInstance.Data;
          for (pFVar17 = pFVar6;
              pFVar17 != pFVar6 + (longlong)(pFVar5->ActiveTimers).ArrayNum * 0x10;
              pFVar17 = pFVar17 + 0x10) {
            if (*(FActiveTimerHandle **)pFVar17 == pFVar21) {
              iVar16 = (int)((longlong)pFVar17 - (longlong)pFVar6 >> 4);
              if (iVar16 != -1) {
                _Dst = (TSharedRef<FActiveTimerHandle,1> *)(pFVar6 + (longlong)iVar16 * 0x10);
                DestructItems<TSharedRef<FActiveTimerHandle,1>,int>(_Dst,1);
                memmove(_Dst,_Dst + 1,
                        (longlong)(((pFVar5->ActiveTimers).ArrayNum - iVar16) + -1) << 4);
                piVar1 = &(pFVar5->ActiveTimers).ArrayNum;
                *piVar1 = *piVar1 + -1;
              }
              break;
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar7);
        }
LAB_1425db6cc:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15)
        ;
      }
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar2 = &pTVar7->WeakReferenceCount;
        aVar3 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
        }
      }
    } while ((int)uVar14 < (pFVar5->ActiveTimers).ArrayNum);
  }
  if ((pFVar5->ActiveTimers).ArrayNum == 0) {
    RemoveMetaData<UE::Slate::FActiveTimersMetaData>(this,&local_88);
    EVar4 = this->UpdateFlags;
    this->bHasActiveTimers = '\0';
    EVar18 = EVar4 & ~NeedsActiveTimerUpdate;
    this->UpdateFlags = EVar18;
    FWidgetProxyHandle::UpdateWidgetFlags(&this->FastPathProxyHandle,this,EVar4,EVar18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  return;
}

// FindChildGeometries @ 1425dbdb0

bool __thiscall
SWidget::FindChildGeometries
          (SWidget *this,FGeometry *param_1,
          TSet<TSharedRef<SWidget,1>,DefaultKeyFuncs<TSharedRef<SWidget,1>,0>,FDefaultSetAllocator>
          *param_2,TMap<TSharedRef<SWidget,1>,FArrangedWidget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedRef<SWidget,1>,FArrangedWidget,0>_>
                   *param_3)

{
  FindChildGeometries_Helper(this,param_1,param_2,param_3);
  return *(int *)&param_3->field_0x8 - *(int *)&param_3->field_0x34 ==
         *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
}

// FindChildGeometries_Helper @ 1425dbdf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
SWidget::FindChildGeometries_Helper
          (SWidget *this,FGeometry *param_1,
          TSet<TSharedRef<SWidget,1>,DefaultKeyFuncs<TSharedRef<SWidget,1>,0>,FDefaultSetAllocator>
          *param_2,TMap<TSharedRef<SWidget,1>,FArrangedWidget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedRef<SWidget,1>,FArrangedWidget,0>_>
                   *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FGeometry *pFVar5;
  uint uVar6;
  FArrangedWidget *pFVar7;
  uint uVar8;
  FArrangedWidget *pFVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_208 [32];
  longlong local_1e8;
  longlong local_1e0;
  TSet<TTuple<TSharedRef<SWidget,1>,FArrangedWidget>,TDefaultMapHashableKeyFuncs<TSharedRef<SWidget,1>,FArrangedWidget,0>,FDefaultSetAllocator>
  *local_1d8;
  TSet<TSharedRef<SWidget,1>,DefaultKeyFuncs<TSharedRef<SWidget,1>,0>,FDefaultSetAllocator>
  *local_1d0;
  TPairInitializer<TSharedRef<SWidget,1>_const_&,FArrangedWidget_const_&> local_1c8;
  TSharedRef<SWidget_const_,1> local_1b8;
  ulonglong *local_1a8;
  longlong local_1a0;
  uchar local_198 [8];
  FArrangedWidget local_190 [4];
  FArrangedWidget *local_70;
  uint local_68;
  undefined4 local_64;
  undefined1 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_208;
  local_198[0] = (uchar)EVisibility::Visible.Value.Value;
  local_70 = (FArrangedWidget *)0x0;
  local_68 = 0;
  local_60 = 0;
  local_64 = 4;
  local_1d8 = (TSet<TTuple<TSharedRef<SWidget,1>,FArrangedWidget>,TDefaultMapHashableKeyFuncs<TSharedRef<SWidget,1>,FArrangedWidget,0>,FDefaultSetAllocator>
               *)param_3;
  local_1d0 = param_2;
  (**(code **)(this->_padding_ + 0x240))(this,param_1,local_198);
  pFVar7 = (FArrangedWidget *)(longlong)(int)local_68;
  uVar8 = 0;
  local_1c8.Value = pFVar7;
  if (0 < (int)local_68) {
    lVar11 = 0;
    pFVar9 = pFVar7;
    do {
      uVar6 = 0;
      if ((int)uVar8 < (int)pFVar7) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if (uVar6 == 0) {
        local_1e0 = (longlong)(int)pFVar7;
        local_1e8 = (longlong)(int)uVar8;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar7 = local_190;
      if (local_70 != (FArrangedWidget *)0x0) {
        pFVar7 = local_70;
      }
      lVar10 = (longlong)((pFVar7->Geometry).AccumulatedRenderTransform.M.M + -4) + 4 + lVar11;
      pTVar1 = *(TReferenceControllerBase<1> **)(lVar10 + 0x40);
      local_1b8.Object = *(SWidget **)(lVar10 + 0x38);
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar6 = ((uint)((ulonglong)local_1b8.Object >> 0x14) & 0xffff ^
              (uint)((ulonglong)local_1b8.Object >> 4)) * -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      local_1b8.SharedReferenceCount.ReferenceController = pTVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      iVar4 = TSet<TSharedRef<SWidget,1>,DefaultKeyFuncs<TSharedRef<SWidget,1>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<TSharedRef<SWidget_const_,1>_>
                        (local_1d0,uVar6 >> 0x10 ^ uVar6,&local_1b8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      if (iVar4 != -1) {
        local_1a8 = (ulonglong *)(lVar10 + 0x38);
        local_1a0 = lVar10;
        TSet<TTuple<TSharedRef<SWidget,1>,FArrangedWidget>,TDefaultMapHashableKeyFuncs<TSharedRef<SWidget,1>,FArrangedWidget,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<TSharedRef<SWidget,1>_const_&,FArrangedWidget_const_&>_>
                  (local_1d8,&local_1c8,(bool *)&local_1a8);
      }
      pFVar7 = (FArrangedWidget *)(ulonglong)local_68;
      uVar8 = uVar8 + 1;
      lVar11 = lVar11 + 0x48;
      pFVar9 = (FArrangedWidget *)
               ((longlong)&pFVar9[-1].Widget.SharedReferenceCount.ReferenceController + 7);
      param_2 = local_1d0;
      param_3 = (TMap<TSharedRef<SWidget,1>,FArrangedWidget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedRef<SWidget,1>,FArrangedWidget,0>_>
                 *)local_1d8;
    } while (pFVar9 != (FArrangedWidget *)0x0);
  }
  uVar8 = (uint)pFVar7;
  if ((*(int *)&(((TSet<TTuple<TSharedRef<SWidget,1>,FArrangedWidget>,TDefaultMapHashableKeyFuncs<TSharedRef<SWidget,1>,FArrangedWidget,0>,FDefaultSetAllocator>
                   *)param_3)->Elements).field_0x8 -
       *(int *)&(((TSet<TTuple<TSharedRef<SWidget,1>,FArrangedWidget>,TDefaultMapHashableKeyFuncs<TSharedRef<SWidget,1>,FArrangedWidget,0>,FDefaultSetAllocator>
                   *)param_3)->Elements).field_0x34 !=
       *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34) &&
     (uVar6 = 0, 0 < (longlong)local_1c8.Value)) {
    lVar11 = 0;
    pFVar9 = local_1c8.Value;
    do {
      uVar8 = 0;
      if ((int)uVar6 < (int)pFVar7) {
        uVar8 = ~uVar6 >> 0x1f;
      }
      if (uVar8 == 0) {
        local_1e0 = (longlong)(int)pFVar7;
        local_1e8 = (longlong)(int)uVar6;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar7 = local_190;
      if (local_70 != (FArrangedWidget *)0x0) {
        pFVar7 = local_70;
      }
      pFVar5 = (FGeometry *)
               ((longlong)((pFVar7->Geometry).AccumulatedRenderTransform.M.M + -4) + 4 + lVar11);
      FindChildGeometries_Helper((SWidget *)pFVar5[1].Size,pFVar5,param_2,param_3);
      pFVar7 = (FArrangedWidget *)(ulonglong)local_68;
      uVar6 = uVar6 + 1;
      lVar11 = lVar11 + 0x48;
      pFVar9 = (FArrangedWidget *)
               ((longlong)&pFVar9[-1].Widget.SharedReferenceCount.ReferenceController + 7);
      uVar8 = local_68;
    } while (pFVar9 != (FArrangedWidget *)0x0);
  }
  pFVar7 = local_190;
  if (local_70 != (FArrangedWidget *)0x0) {
    pFVar7 = local_70;
  }
  DestructItems<FArrangedWidget,int>(pFVar7,uVar8);
  if (local_70 != (FArrangedWidget *)0x0) {
    FMemory::Free(local_70);
  }
  return;
}

// FindChildGeometry @ 1425dc0f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FGeometry * __thiscall
SWidget::FindChildGeometry
          (SWidget *this,FGeometry *__return_storage_ptr__,FGeometry *param_1,
          TSharedRef<SWidget,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  FGeometry *pFVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  undefined1 auStackY_138 [32];
  TSharedRef<SWidget_const_,1> local_108;
  TSharedRef<SWidget,1> local_f8;
  undefined1 local_e8 [32];
  void *local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  pFVar8 = (FScriptContainerElement *)0x0;
  local_6c = 0x80;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  TSet<TSharedRef<SWidget,1>,DefaultKeyFuncs<TSharedRef<SWidget,1>,0>,FDefaultSetAllocator>::
  Emplace<TSharedRef<SWidget,1>_const_&>
            ((TSet<TSharedRef<SWidget,1>,DefaultKeyFuncs<TSharedRef<SWidget,1>,0>,FDefaultSetAllocator>
              *)local_98,&local_f8,(bool *)param_2);
  local_e8._0_8_ = (FScriptContainerElement *)0x0;
  local_e8._8_8_ = 0;
  local_c8 = (void *)0x0;
  local_c0 = 0;
  local_bc = 0x80;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = (ForElementType<FSetElementId>)0x0;
  local_a0 = 0;
  FindChildGeometries_Helper
            (this,param_1,
             (TSet<TSharedRef<SWidget,1>,DefaultKeyFuncs<TSharedRef<SWidget,1>,0>,FDefaultSetAllocator>
              *)local_98,
             (TMap<TSharedRef<SWidget,1>,FArrangedWidget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedRef<SWidget,1>,FArrangedWidget,0>_>
              *)local_e8);
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  local_108.Object = param_2->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar7 = ((uint)((ulonglong)local_108.Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)local_108.Object >> 4)) * -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  local_108.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  iVar5 = TSet<TTuple<TSharedRef<SWidget,1>,FArrangedWidget>,TDefaultMapHashableKeyFuncs<TSharedRef<SWidget,1>,FArrangedWidget,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TSharedRef<SWidget_const_,1>_>
                    ((TSet<TTuple<TSharedRef<SWidget,1>,FArrangedWidget>,TDefaultMapHashableKeyFuncs<TSharedRef<SWidget,1>,FArrangedWidget,0>,FDefaultSetAllocator>
                      *)local_e8,uVar7 >> 0x10 ^ uVar7,&local_108);
  if (iVar5 == -1) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  else {
    pFVar8 = (FScriptContainerElement *)(local_e8._0_8_ + (longlong)iVar5 * 0x60);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    if (pFVar8 != (FScriptContainerElement *)0x0) goto LAB_1425dc252;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FGeometry *)(*pcVar2)();
    return pFVar6;
  }
LAB_1425dc252:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  uVar3 = *(undefined8 *)(pFVar8 + 0x18);
  __return_storage_ptr__->Size = *(FDeprecateSlateVector2D *)(pFVar8 + 0x10);
  *(undefined8 *)&__return_storage_ptr__->Scale = uVar3;
  uVar3 = *(undefined8 *)(pFVar8 + 0x28);
  *(undefined8 *)((longlong)&(__return_storage_ptr__->AbsolutePosition).field0_0x0 + 4) =
       *(undefined8 *)(pFVar8 + 0x20);
  *(undefined8 *)((longlong)&(__return_storage_ptr__->Position).field0_0x0 + 4) = uVar3;
  uVar3 = *(undefined8 *)(pFVar8 + 0x38);
  *(undefined8 *)((__return_storage_ptr__->AccumulatedRenderTransform).M.M[0] + 1) =
       *(undefined8 *)(pFVar8 + 0x30);
  *(undefined8 *)((__return_storage_ptr__->AccumulatedRenderTransform).M.M[1] + 1) = uVar3;
  *(undefined8 *)
   ((longlong)&(__return_storage_ptr__->AccumulatedRenderTransform).Trans.field0_0x0 + 4) =
       *(undefined8 *)(pFVar8 + 0x40);
  local_a0 = 0;
  if (local_a8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a8);
  }
  TSparseArray<TSparseSetElement<TTuple<TSharedRef<SWidget,1>,FArrangedWidget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TSharedRef<SWidget,1>,FArrangedWidget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_e8,0,local_e8._8_4_);
  iVar5 = SUB84(local_e8._8_8_,4);
  local_e8._8_8_ = local_e8._8_8_ & 0xffffffff00000000;
  if (iVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,(ForAnyElementType *)local_e8,0,(int *)(local_e8 + 0xc));
  }
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_c0 = 0;
  if (0x80 < local_bc) {
    local_bc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),0);
  }
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_e8._0_8_);
  }
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  TSparseArray<TSparseSetElement<TSharedRef<SWidget,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TSharedRef<SWidget,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,0,local_98._8_4_);
  iVar5 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// FindChildUnderMouse @ 1425dc3e0

int __cdecl SWidget::FindChildUnderMouse(FArrangedChildren *param_1,FPointerEvent *param_2)

{
  int iVar1;
  FDeprecateSlateVector2D local_res10 [3];
  
  local_res10[0] = param_2->ScreenSpacePosition;
  iVar1 = FindChildUnderPosition(param_1,(FDeprecateVector2DParameter *)local_res10);
  return iVar1;
}

// FindChildUnderPosition @ 1425dc410

int __cdecl
SWidget::FindChildUnderPosition(FArrangedChildren *param_1,FDeprecateVector2DParameter *param_2)

{
  ForElementType<FArrangedWidget> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ForElementType<FArrangedWidget> FVar6;
  uint uVar7;
  longlong lVar8;
  undefined4 local_res8;
  undefined4 uStackX_c;
  TVector2<float>_u_0 local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  FSlateRotatedRect local_20;
  
  uVar7 = (param_1->Array).ArrayNum - 1;
  if (-1 < (int)uVar7) {
    lVar8 = (longlong)(int)uVar7 * 0x48;
    do {
      uVar4 = 0;
      if ((int)uVar7 < (param_1->Array).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      FVar1 = (param_1->Array).AllocatorInstance.SecondaryData;
      local_38 = (TVector2<float>_u_0)0x0;
      local_2c = 0;
      FVar6 = (ForElementType<FArrangedWidget>)&param_1->Array;
      if (FVar1 != (ForElementType<FArrangedWidget>)0x0) {
        FVar6 = FVar1;
      }
      local_res8 = (undefined4)*(undefined8 *)(lVar8 + (longlong)FVar6);
      local_30 = local_res8;
      uStackX_c = (undefined4)((ulonglong)*(undefined8 *)(lVar8 + (longlong)FVar6) >> 0x20);
      local_24 = uStackX_c;
      TransformRect<TTransform2<float>_>
                (&local_20,
                 (TTransform2<float> *)((longlong)FVar6 + (longlong)(int)uVar7 * 0x48 + 0x1c),
                 (FSlateRotatedRect *)&local_38._s_0);
      bVar3 = FSlateRotatedRect::IsUnderLocation(&local_20,*param_2);
      if (bVar3) {
        return uVar7;
      }
      lVar8 = lVar8 + -0x48;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  return -1;
}

// GetAccessibleBehavior @ 1425dd380

EAccessibleBehavior __thiscall SWidget::GetAccessibleBehavior(SWidget *this,EAccessibleType param_1)

{
  if (param_1 == Main) {
    return this->AccessibleBehavior;
  }
  return this->AccessibleSummaryBehavior;
}

// GetAccessibleSummary @ 1425dd3a0

FText * __thiscall SWidget::GetAccessibleSummary(SWidget *this,FText *__return_storage_ptr__)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  FText local_48;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  FTextBuilder local_28;
  
  iVar5 = 0;
  local_28.Lines.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Lines.ArrayNum = 0;
  local_28.Lines.ArrayMax = 0;
  local_28.IndentCount = 0;
  plVar3 = (longlong *)(**(code **)(this->_padding_ + 0x180))();
  if (plVar3 != (longlong *)0x0) {
    iVar2 = (**(code **)*plVar3)(plVar3);
    if (0 < iVar2) {
      do {
        puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3,local_38,iVar5);
        GetAccessibleText((SWidget *)*puVar4,&local_48,Summary);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_30);
        bVar1 = FText::IsEmpty(&local_48);
        if (!bVar1) {
          FTextBuilder::AppendLine(&local_28,&local_48);
        }
        if (local_48.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
        }
        iVar5 = iVar5 + 1;
        iVar2 = (**(code **)*plVar3)(plVar3);
      } while (iVar5 < iVar2);
    }
  }
  FTextBuilder::ToText(&local_28,__return_storage_ptr__);
  DestructItems<FText,int>((FText *)local_28.Lines.AllocatorInstance.Data,local_28.Lines.ArrayNum);
  if ((FText *)local_28.Lines.AllocatorInstance.Data != (FText *)0x0) {
    FMemory::Free(local_28.Lines.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAccessibleText @ 1425dd490

FText * __thiscall
SWidget::GetAccessibleText(SWidget *this,FText *__return_storage_ptr__,EAccessibleType param_1)

{
  EAccessibleBehavior EVar1;
  TReferenceControllerBase<1> *pTVar2;
  IToolTip *pIVar3;
  ITextData *pIVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  FText *pFVar8;
  TSharedPtr<IToolTip,1> *pTVar9;
  undefined8 *puVar10;
  TAttribute<FText> *this_00;
  TWidgetSparseAnnotation<TAttribute<FText>_> *this_01;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FText local_48;
  TSharedPtr<FSlateToolTipMetaData,1> local_38;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  
  cVar7 = *(char *)((0x34 - (ulonglong)(param_1 != Main)) + (longlong)this);
  EVar1 = (&this->AccessibleBehavior)[param_1 != Main];
  if (EVar1 == Auto) {
    (**(code **)(this->_padding_ + 0x1d0))(this,&local_48);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      FText::FText(__return_storage_ptr__,&local_48);
LAB_1425dd6e4:
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      }
      return __return_storage_ptr__;
    }
    if ((cVar7 == '\0') || (cVar7 == '\x02')) {
      GetAccessibleSummary(this,__return_storage_ptr__);
      goto LAB_1425dd6e4;
    }
    if ((cVar7 == '\x03') || (cVar7 == '\x04')) {
      GetAccessibleText(this,__return_storage_ptr__,param_1 == Main);
      goto LAB_1425dd6e4;
    }
  }
  else {
    if (EVar1 == Summary) {
      GetAccessibleSummary(this,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
    if (EVar1 == Custom) {
      this_01 = &AccessibleText;
      if (param_1 != Main) {
        this_01 = &AccessibleSummaryText;
      }
      this_00 = TWidgetSparseAnnotation<TAttribute<FText>_>::Find(this_01,this);
      pFVar8 = FText::GetEmpty();
      if (this_00->bIsSet != false) {
        pFVar8 = TAttribute<FText>::Get(this_00);
      }
      (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
      pIVar4 = (pFVar8->TextData).Reference;
      (__return_storage_ptr__->TextData).Reference = pIVar4;
      if (pIVar4 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res18);
      }
      goto LAB_1425dd616;
    }
    if (EVar1 == ToolTip) {
      GetMetaData<FSlateToolTipMetaData>(this,&local_38);
      if (local_38.Object != (FSlateToolTipMetaData *)0x0) {
        if (local_38.Object == (FSlateToolTipMetaData *)0x0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            pFVar8 = (FText *)(*pcVar5)();
            return pFVar8;
          }
        }
        pTVar9 = TAttribute<TSharedPtr<IToolTip,1>_>::Get(&(local_38.Object)->ToolTip);
        pTVar2 = (pTVar9->SharedReferenceCount).ReferenceController;
        pIVar3 = pTVar9->Object;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pIVar3 != (IToolTip *)0x0) {
          cVar7 = (**(code **)((longlong)*pIVar3 + 0x20))(pIVar3);
          if (cVar7 == '\0') {
            puVar10 = (undefined8 *)(**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_28);
            GetAccessibleText((SWidget *)*puVar10,__return_storage_ptr__,Main);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_20);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar2);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_38.SharedReferenceCount.ReferenceController);
            return __return_storage_ptr__;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
    }
  }
  pFVar8 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar4 = (pFVar8->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar4;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res20);
    __return_storage_ptr__->Flags = pFVar8->Flags;
    return __return_storage_ptr__;
  }
LAB_1425dd616:
  __return_storage_ptr__->Flags = pFVar8->Flags;
  return __return_storage_ptr__;
}

// GetCachedGeometry @ 1425de540

FGeometry * __thiscall SWidget::GetCachedGeometry(SWidget *this)

{
  return &(this->PersistentState).DesktopGeometry;
}

// GetCreatedInLocation @ 1425e0350

FName __thiscall SWidget::GetCreatedInLocation(SWidget *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->CreatedInLocation;
  return in_RDX;
}

// GetCursor @ 1425e08c0

TOptional<EMouseCursor::Type> __thiscall SWidget::GetCursor(SWidget *this)

{
  code *pcVar1;
  bool bVar2;
  TOptional<EMouseCursor::Type> TVar3;
  TOptional<EMouseCursor::Type> *pTVar4;
  TOptional<EMouseCursor::Type> in_RDX;
  TSharedPtr<FSlateCursorMetaData,1> local_18;
  
  GetMetaData<FSlateCursorMetaData>(this,&local_18);
  if (local_18.Object == (FSlateCursorMetaData *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    *(undefined1 *)((longlong)in_RDX + 4) = None;
    return in_RDX;
  }
  if (local_18.Object == (FSlateCursorMetaData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3 = (TOptional<EMouseCursor::Type>)(*pcVar1)();
      return TVar3;
    }
  }
  pTVar4 = TAttribute<TOptional<enum_EMouseCursor::Type>_>::Get(&(local_18.Object)->Cursor);
  *(undefined1 *)((longlong)in_RDX + 4) = None;
  bVar2 = pTVar4->bIsSet;
  *(bool *)((longlong)in_RDX + 4) = bVar2;
  if (bVar2 != false) {
    *(Type *)in_RDX = pTVar4->TypedValue;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return in_RDX;
}

// GetDefaultAccessibleText @ 1425e09a0

TOptional<FText> * __thiscall
SWidget::GetDefaultAccessibleText
          (SWidget *this,TOptional<FText> *__return_storage_ptr__,EAccessibleType param_1)

{
  (__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
  (__return_storage_ptr__->field0_0x0).TypedValue.Flags = 0;
  return __return_storage_ptr__;
}

// GetDesiredSize @ 1425e0e20

FDeprecateSlateVector2D __thiscall SWidget::GetDesiredSize(SWidget *this)

{
  FDeprecateSlateVector2D in_RDX;
  
  if (this->bDesiredSizeSet != '\0') {
    *(TVector2<float>_u_0 *)in_RDX = (this->DesiredSize).field0_0x0;
    return in_RDX;
  }
  *(TVector2<float>_u_0 *)in_RDX =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  return in_RDX;
}

// GetDisabledForegroundColor @ 1425e0e80

FSlateColor * __thiscall
SWidget::GetDisabledForegroundColor(SWidget *this,FSlateColor *__return_storage_ptr__)

{
  (**(code **)(this->_padding_ + 0x1f8))();
  return __return_storage_ptr__;
}

// GetFocusBrush @ 1425e0ff0

FSlateBrush * __thiscall SWidget::GetFocusBrush(SWidget *this)

{
  code *pcVar1;
  ISlateStyle *pIVar2;
  FName *pFVar3;
  FSlateBrush *pFVar4;
  FName local_res10 [3];
  
  pIVar2 = FAppStyle::Get();
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x50);
  pFVar3 = ::FName::FName(local_res10,"FocusRectangle");
  pFVar4 = (FSlateBrush *)(*pcVar1)(pIVar2,*pFVar3,0,0);
  return pFVar4;
}

// GetForegroundColor @ 1425e10f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FSlateColor * __thiscall
SWidget::GetForegroundColor(SWidget *this,FSlateColor *__return_storage_ptr__)

{
  undefined4 uVar1;
  EStyleColor EVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      NoColor.SpecifiedColor.field0_0x0 =
           (FLinearColor_u_0)(FLinearColor_u_0)___xmm_3f8000003f800000000000003f800000;
      NoColor.ColorUseRule = UseColor_Foreground;
      NoColor.ColorTableId = Black;
      _Init_thread_footer(&::_TSS0);
    }
  }
  uVar1 = NoColor._16_4_;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)NoColor.SpecifiedColor.field0_0x0;
  uVar4 = NoColor._16_4_;
  NoColor.ColorUseRule = (ESlateColorStylingMode)uVar1;
  NoColor.ColorTableId = SUB41(uVar1,1);
  EVar2 = NoColor.ColorTableId;
  NoColor._18_2_ = SUB42(uVar1,2);
  uVar3 = NoColor._18_2_;
  __return_storage_ptr__->ColorUseRule = NoColor.ColorUseRule;
  NoColor._16_4_ = uVar4;
  __return_storage_ptr__->ColorTableId = EVar2;
  *(undefined2 *)&__return_storage_ptr__->field_0x12 = uVar3;
  return __return_storage_ptr__;
}

// GetPaintSpaceGeometry @ 1425e20f0

FGeometry * __thiscall SWidget::GetPaintSpaceGeometry(SWidget *this)

{
  return &(this->PersistentState).AllottedGeometry;
}

// GetReadableLocation @ 1425e2d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall SWidget::GetReadableLocation(SWidget *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  size_t sVar3;
  void *pvVar4;
  TStringBuilderBase<wchar_t> *this_00;
  wchar_t *pwVar5;
  ulong64 uVar6;
  int iVar7;
  undefined1 auStack_2a8 [32];
  FString local_288;
  FString local_270;
  TStringBuilderBase<wchar_t> local_258;
  wchar_t local_238 [256];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_2a8;
  local_258.Base = local_238;
  local_258.bIsDynamic = false;
  local_258.bIsExternal = false;
  local_258.CurPos = local_238;
  local_258.End = (wchar_t *)local_38;
  pFVar2 = ::FName::GetPlainNameString(&this->CreatedInLocation,&local_288);
  pFVar2 = FPaths::GetCleanFilename(&local_270,pFVar2);
  iVar7 = 0;
  if ((pFVar2->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    if ((FScriptContainerElement *)pwVar5 == (FScriptContainerElement *)0x0) goto LAB_1425e2df5;
  }
  sVar3 = wcslen(pwVar5);
  iVar7 = (int)sVar3;
LAB_1425e2df5:
  uVar6 = (ulong64)iVar7;
  if (local_258.End < local_258.CurPos + uVar6) {
    TStringBuilderBase<wchar_t>::Extend(&local_258,uVar6);
  }
  if (iVar7 != 0) {
    pvVar4 = FGenericPlatformString::Memcpy(local_258.CurPos,pwVar5,uVar6 * 2);
    local_258.CurPos = (wchar_t *)((longlong)pvVar4 + uVar6 * 2);
  }
  if (local_258.End < local_258.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_258,1);
  }
  local_258.CurPos = FGenericPlatformString::Convert<char,wchar_t>(local_258.CurPos,1,"(",1);
  this_00 = TStringBuilderBase<wchar_t>::AppendfImpl(&local_258,L"%d");
  if (this_00->End < this_00->CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(this_00,1);
  }
  pwVar5 = FGenericPlatformString::Convert<char,wchar_t>(this_00->CurPos,1,")",1);
  this_00->CurPos = pwVar5;
  if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_270.Data.AllocatorInstance.Data);
  }
  if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data.AllocatorInstance.Data);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar2 = ::FString::ConstructFromPtrSize
                     (&local_288,local_258.Base,
                      (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1));
  if (__return_storage_ptr__ != pFVar2) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_258);
  return __return_storage_ptr__;
}

// GetRelativeLayoutScale @ 1425e3000

float __thiscall SWidget::GetRelativeLayoutScale(SWidget *this,int param_1,float param_2)

{
  return __real_3f800000;
}

// GetTag @ 1425e3aa0

FName __thiscall SWidget::GetTag(SWidget *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->Tag;
  return in_RDX;
}

// GetTickSpaceGeometry @ 1425e3ac0

FGeometry * __thiscall SWidget::GetTickSpaceGeometry(SWidget *this)

{
  return &(this->PersistentState).DesktopGeometry;
}

// GetToolTip @ 1425e3c00

TSharedPtr<IToolTip,1> * __thiscall
SWidget::GetToolTip(SWidget *this,TSharedPtr<IToolTip,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<IToolTip,1> *pTVar4;
  TSharedPtr<FSlateToolTipMetaData,1> local_18;
  
  GetMetaData<FSlateToolTipMetaData>(this,&local_18);
  if (local_18.Object == (FSlateToolTipMetaData *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    __return_storage_ptr__->Object = (IToolTip *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  if (local_18.Object == (FSlateToolTipMetaData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<IToolTip,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pTVar4 = TAttribute<TSharedPtr<IToolTip,1>_>::Get(&(local_18.Object)->ToolTip);
  __return_storage_ptr__->Object = pTVar4->Object;
  pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetType @ 1425e3e60

FName __thiscall SWidget::GetType(SWidget *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->TypeOfWidget;
  return in_RDX;
}

// GetTypeAsString @ 1425e3e80

FString * __thiscall SWidget::GetTypeAsString(SWidget *this,FString *__return_storage_ptr__)

{
  ::FName::ToString(&this->TypeOfWidget,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetWindowZoneOverride @ 1425e5890

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall SWidget::GetWindowZoneOverride(SWidget *this)

{
  return NotInWindow;
}

// HasAnyUserFocus @ 1425e5e10

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TOptional<EFocusCause> __thiscall SWidget::HasAnyUserFocus(SWidget *this)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  FSlateApplicationBase *pFVar3;
  TSharedRef<SWidget_const_,1> *pTVar4;
  TOptional<EFocusCause> in_DX;
  TSharedRef<SWidget_const_,1> local_18;
  
  pFVar3 = FSlateApplicationBase::Get();
  pcVar1 = *(code **)(*(longlong *)pFVar3 + 0x198);
  pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
  pTVar2 = (pTVar4->SharedReferenceCount).ReferenceController;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar1)(pFVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return in_DX;
}

// HasAnyUserFocusOrFocusedDescendants @ 1425e5ed0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall SWidget::HasAnyUserFocusOrFocusedDescendants(SWidget *this)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  char cVar4;
  FSlateApplicationBase *pFVar5;
  TSharedRef<SWidget_const_,1> *pTVar6;
  undefined1 local_res8;
  char local_res9;
  SWidget *local_38;
  TReferenceControllerBase<1> *local_30;
  TSharedRef<SWidget_const_,1> local_28;
  
  pFVar5 = FSlateApplicationBase::Get();
  pcVar1 = *(code **)(*(longlong *)pFVar5 + 0x198);
  pTVar6 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_28);
  pTVar2 = (pTVar6->SharedReferenceCount).ReferenceController;
  pSVar3 = pTVar6->Object;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar3;
  local_30 = pTVar2;
  (*pcVar1)(pFVar5,&local_res8,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_res9 == '\0') {
    pFVar5 = FSlateApplicationBase::Get();
    pcVar1 = *(code **)(*(longlong *)pFVar5 + 0xf8);
    pTVar6 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_28);
    local_38 = pTVar6->Object;
    local_30 = (pTVar6->SharedReferenceCount).ReferenceController;
    if (local_30 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    cVar4 = (*pcVar1)(pFVar5,&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
    if (cVar4 == '\0') {
      return false;
    }
  }
  return true;
}

// HasFocusedDescendants @ 1425e6000

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall SWidget::HasFocusedDescendants(SWidget *this)

{
  code *pcVar1;
  undefined1 uVar2;
  FSlateApplicationBase *pFVar3;
  TSharedRef<SWidget_const_,1> *pTVar4;
  SWidget *local_28;
  TReferenceControllerBase<1> *local_20;
  TSharedRef<SWidget_const_,1> local_18;
  
  pFVar3 = FSlateApplicationBase::Get();
  pcVar1 = *(code **)(*(longlong *)pFVar3 + 0xf8);
  pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
  local_28 = pTVar4->Object;
  local_20 = (pTVar4->SharedReferenceCount).ReferenceController;
  if (local_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  uVar2 = (*pcVar1)(pFVar3,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  return (bool)uVar2;
}

// HasKeyboardFocus @ 1425e60b0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall SWidget::HasKeyboardFocus(SWidget *this)

{
  SWidget *pSVar1;
  FSlateApplicationBase *pFVar2;
  longlong *plVar3;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pFVar2 = FSlateApplicationBase::Get();
  plVar3 = (longlong *)(**(code **)(*(longlong *)pFVar2 + 0x98))(pFVar2,local_18);
  pSVar1 = (SWidget *)*plVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return pSVar1 == this;
}

// HasMouseCapture @ 1425e6140

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall SWidget::HasMouseCapture(SWidget *this)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  undefined1 uVar4;
  FSlateApplicationBase *pFVar5;
  TSharedRef<SWidget_const_,1> *pTVar6;
  SWidget *local_28;
  TReferenceControllerBase<1> *local_20;
  TSharedRef<SWidget_const_,1> local_18;
  
  pFVar5 = FSlateApplicationBase::Get();
  pcVar1 = *(code **)(*(longlong *)pFVar5 + 0x180);
  pTVar6 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
  pTVar2 = (pTVar6->SharedReferenceCount).ReferenceController;
  pSVar3 = pTVar6->Object;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar3;
  local_20 = pTVar2;
  uVar4 = (*pcVar1)(pFVar5,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return (bool)uVar4;
}

// HasMouseCaptureByUser @ 1425e61f0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall SWidget::HasMouseCaptureByUser(SWidget *this,int param_1,TOptional<int> param_2)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  undefined1 uVar4;
  FSlateApplicationBase *pFVar5;
  TSharedRef<SWidget_const_,1> *pTVar6;
  undefined4 local_res8;
  char local_resc;
  SWidget *local_38;
  TReferenceControllerBase<1> *local_30;
  TSharedRef<SWidget_const_,1> local_28;
  
  pFVar5 = FSlateApplicationBase::Get();
  pcVar1 = *(code **)(*(longlong *)pFVar5 + 0x188);
  local_resc = *(char *)((longlong)param_2 + 4);
  if (local_resc != '\0') {
    local_res8 = *(undefined4 *)param_2;
  }
  pTVar6 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_28);
  pTVar2 = (pTVar6->SharedReferenceCount).ReferenceController;
  pSVar3 = pTVar6->Object;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar3;
  local_30 = pTVar2;
  uVar4 = (*pcVar1)(pFVar5,&local_38,param_1,&local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return (bool)uVar4;
}

// HasUserFocus @ 1425e6660

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TOptional<EFocusCause> __thiscall SWidget::HasUserFocus(SWidget *this,int param_1)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  FSlateApplicationBase *pFVar4;
  TSharedRef<SWidget_const_,1> *pTVar5;
  undefined4 in_register_00000014;
  undefined4 in_R8D;
  SWidget *local_38;
  TReferenceControllerBase<1> *local_30;
  TSharedRef<SWidget_const_,1> local_28;
  
  pFVar4 = FSlateApplicationBase::Get();
  pcVar1 = *(code **)(*(longlong *)pFVar4 + 400);
  pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_28);
  pTVar2 = (pTVar5->SharedReferenceCount).ReferenceController;
  pSVar3 = pTVar5->Object;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar3;
  local_30 = pTVar2;
  (*pcVar1)(pFVar4,CONCAT44(in_register_00000014,param_1),&local_38,in_R8D);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return SUB42(param_1,0);
}

// HasUserFocusedDescendants @ 1425e6720

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall SWidget::HasUserFocusedDescendants(SWidget *this,int param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  FSlateApplicationBase *pFVar3;
  TSharedRef<SWidget_const_,1> *pTVar4;
  SWidget *local_28;
  TReferenceControllerBase<1> *local_20;
  TSharedRef<SWidget_const_,1> local_18;
  
  pFVar3 = FSlateApplicationBase::Get();
  pcVar1 = *(code **)(*(longlong *)pFVar3 + 0xf0);
  pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
  local_28 = pTVar4->Object;
  local_20 = (pTVar4->SharedReferenceCount).ReferenceController;
  if (local_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  uVar2 = (*pcVar1)(pFVar3,&local_28,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  return (bool)uVar2;
}

// Invalidate @ 1425e84f0

void __thiscall SWidget::Invalidate(SWidget *this,EInvalidateWidgetReason param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  SWidget *pSVar4;
  code *pcVar5;
  atomic<int> aVar6;
  bool bVar7;
  char cVar8;
  bool bVar9;
  atomic<int> aVar10;
  byte bVar11;
  byte bVar12;
  EInvalidateWidgetReason EVar13;
  TReferenceControllerBase<1> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  bool bVar16;
  
  bVar7 = IsInGameThread();
  if (((!bVar7) && (bVar7 = IsInSlateThread(), !bVar7)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread() || IsInSlateThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\SWidget.cpp"
                         ,0x4e7,
                         L"Slate can only be accessed from the GameThread or the SlateLoadingThread!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_1 == None) || (this->bIsDeclarativeSyntaxConstructionCompleted == '\0')) {
    return;
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Orange,"SWidget::Invalidate");
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1262,"SWidget::Invalidate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\SWidget.cpp"
               ,0x4ee);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1262);
  }
  puVar1 = &this->field_0x30;
  EVar13 = param_1 | PaintAndVolatility;
  if ((param_1 & Volatility) == None) {
    EVar13 = param_1;
  }
  if ((char)EVar13 < '\0') {
    this->bNeedsPrepass = '\x01';
    EVar13 = EVar13 | Layout;
  }
  if (((EVar13 & ChildOrder) != None) || (this->bPrepassLayoutScaleMultiplierSet == '\0')) {
    this->bNeedsPrepass = '\x01';
    EVar13 = EVar13 | (Prepass|Layout);
  }
  pTVar15 = (TReferenceControllerBase<1> *)0x0;
  if ((EVar13 & Volatility) == None) {
    bVar16 = false;
  }
  else {
    if ((this->bForceVolatile == '\0') &&
       (cVar8 = (**(code **)(this->_padding_ + 0x228))(this), cVar8 == '\0')) {
      bVar11 = 0;
      bVar12 = 0;
    }
    else {
      bVar11 = 1;
      bVar12 = 0x20;
    }
    this->bCachedVolatile = bVar12 >> 5;
    bVar16 = this->bCachedVolatile != bVar11;
  }
  bVar9 = FWidgetProxyHandle::IsValid(&this->FastPathProxyHandle,this);
  if (bVar9) {
    if (bVar16) {
      FGenericPlatformMisc::BeginNamedEvent(&FColor::Red,"SWidget_UpdateFastPathVolatility");
      bVar16 = -1 < CpuChannel->Enabled;
      if (bVar16) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1289,"SWidget_UpdateFastPathVolatility",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\SWidget.cpp"
                   ,0x509);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1289);
      }
      pTVar3 = (this->ParentWidgetPtr).WeakReferenceCount.ReferenceController;
      pTVar14 = pTVar3;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        aVar6 = pTVar3->SharedReferenceCount;
        do {
          pTVar14 = pTVar15;
          if (aVar6 == (atomic<int>)0x0) goto LAB_1425e86e2;
          LOCK();
          aVar10 = pTVar3->SharedReferenceCount;
          bVar9 = aVar6 == aVar10;
          if (bVar9) {
            pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
            aVar10 = aVar6;
          }
          UNLOCK();
          aVar6 = aVar10;
        } while (!bVar9);
        pSVar4 = (this->ParentWidgetPtr).Object;
        pTVar14 = pTVar3;
        if ((pSVar4 != (SWidget *)0x0) &&
           ((pSVar4->bCachedVolatile != '\0' ||
            (pTVar15 = (TReferenceControllerBase<1> *)0x0, pSVar4->bInheritedVolatility != '\0'))))
        {
          pTVar15 = (TReferenceControllerBase<1> *)&DAT_00000001;
        }
      }
LAB_1425e86e2:
      UpdateFastPathVolatility(this,SUB81(pTVar15,0));
      if (((this->bCachedVolatile == '\x01' && this->bInheritedVolatility == '\0') &&
          ((this->UpdateFlags & NeedsVolatilePaint) == None)) &&
         (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_1812382117653379825>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\SWidget.cpp"
                             ,0x50f,
                             "!IsVolatile() || IsVolatileIndirectly() || EnumHasAnyFlags(UpdateFlags, EWidgetUpdateFlags::NeedsVolatilePaint)"
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
      if (bVar16) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FGenericPlatformMisc::EndNamedEvent();
    }
    FWidgetProxyHandle::MarkWidgetDirty_NoCheck(&this->FastPathProxyHandle,EVar13);
  }
  else {
    FSlateDebugging::BroadcastWidgetInvalidate(this,(SWidget *)0x0,EVar13);
    FSlateTrace::WidgetInvalidated(this,(SWidget *)0x0,EVar13);
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// InvalidateChildRemovedFromTree @ 1425e87d0

void __thiscall SWidget::InvalidateChildRemovedFromTree(SWidget *this,SWidget *param_1)

{
  FSlateInvalidationRoot *pFVar1;
  FSlateInvalidationRootHandle local_18;
  
  local_18.InvalidationRoot = (param_1->FastPathProxyHandle).InvalidationRootHandle.InvalidationRoot
  ;
  local_18.UniqueId = (param_1->FastPathProxyHandle).InvalidationRootHandle.UniqueId;
  local_18._12_4_ = *(undefined4 *)&(param_1->FastPathProxyHandle).InvalidationRootHandle.field_0xc;
  pFVar1 = FSlateInvalidationRootHandle::GetInvalidationRoot(&local_18);
  if (pFVar1 != (FSlateInvalidationRoot *)0x0) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Red,"SWidget_InvalidateChildRemovedFromTree");
    if (CpuChannel->Enabled < 0) {
      UpdateFastPathWidgetRemoved(param_1,pFVar1->RootHittestGrid);
      FGenericPlatformMisc::EndNamedEvent();
      return;
    }
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId713,"SWidget_InvalidateChildRemovedFromTree",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\SWidget.cpp"
               ,0x2c9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId713);
    UpdateFastPathWidgetRemoved(param_1,pFVar1->RootHittestGrid);
    FCpuProfilerTrace::OutputEndEvent();
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

// IsAccessible @ 1425e8e70

bool __thiscall SWidget::IsAccessible(SWidget *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  SWidget *pSVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  SWidget *pSVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  
  if (this->AccessibleBehavior == NotAccessible) {
    return false;
  }
  pTVar8 = (this->ParentWidgetPtr).WeakReferenceCount.ReferenceController;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar8->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1425e8ec0;
      }
      LOCK();
      aVar4 = pTVar8->SharedReferenceCount;
      bVar10 = aVar2 == aVar4;
      if (bVar10) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar10);
    pSVar3 = (this->ParentWidgetPtr).Object;
    while (pSVar3 != (SWidget *)0x0) {
      if (pSVar3->bCanChildrenBeAccessible == '\0') {
        bVar10 = false;
        goto LAB_1425e8ec2;
      }
      pSVar7 = (SWidget *)0x0;
      pTVar5 = (pSVar3->ParentWidgetPtr).WeakReferenceCount.ReferenceController;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        aVar2 = pTVar5->SharedReferenceCount;
        do {
          if (aVar2 == (atomic<int>)0x0) {
            pTVar5 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_1425e8f23;
          }
          LOCK();
          aVar4 = pTVar5->SharedReferenceCount;
          bVar10 = aVar2 == aVar4;
          if (bVar10) {
            pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
            aVar4 = aVar2;
          }
          UNLOCK();
          aVar2 = aVar4;
        } while (!bVar10);
        pSVar7 = (pSVar3->ParentWidgetPtr).Object;
      }
LAB_1425e8f23:
      pTVar6 = pTVar5;
      pTVar9 = pTVar8;
      if (pTVar5 != pTVar8) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        pTVar9 = pTVar5;
        if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar8->SharedReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)pTVar8->_padding_)(pTVar8);
            LOCK();
            paVar1 = &pTVar8->WeakReferenceCount;
            aVar2 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar2 == (atomic<int>)0x1) {
              (**(code **)(pTVar8->_padding_ + 8))(pTVar8,1);
              pTVar6 = (TReferenceControllerBase<1> *)0x0;
            }
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      pTVar8 = pTVar9;
      pSVar3 = pSVar7;
    }
  }
LAB_1425e8ec0:
  bVar10 = true;
LAB_1425e8ec2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return bVar10;
}

// IsChildWidgetCulled @ 1425e90e0

bool __thiscall
SWidget::IsChildWidgetCulled(SWidget *this,FSlateRect *param_1,FArrangedWidget *param_2)

{
  float fVar1;
  FDeprecateSlateVector2D FVar2;
  FSlateRotatedRect *this_00;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_res20;
  float fStackX_24;
  undefined1 local_88 [8];
  float fStack_80;
  float local_7c;
  undefined8 local_78;
  TVector2<float>_u_0 local_70;
  TVector2<float>_u_0 TStack_68;
  FSlateRotatedRect local_60 [3];
  
  if (!GSlateIsOnFastUpdatePath) {
    local_78 = (TVector2<float>_u_0)0x0;
    local_70._s_0.Y = 0.0;
    TStack_68._s_0.X = 0.0;
    FVar2 = (param_2->Geometry).Size;
    fVar4 = (param_1->Right - param_1->Left) * __real_3f000000 * GCullingSlackFillPercent;
    fVar3 = (param_1->Bottom - param_1->Top) * __real_3f000000 * GCullingSlackFillPercent;
    local_res20 = FVar2._0_4_;
    fVar6 = param_1->Left - fVar4;
    fStackX_24 = FVar2._4_4_;
    fVar4 = fVar4 + param_1->Right;
    fVar5 = param_1->Top - fVar3;
    local_70._s_0.X = local_res20;
    fVar3 = fVar3 + param_1->Bottom;
    TStack_68._s_0.Y = fStackX_24;
    this_00 = TransformRect<TTransform2<float>_>
                        (local_60,&(param_2->Geometry).AccumulatedRenderTransform,
                         (FSlateRotatedRect *)&local_78);
    FSlateRotatedRect::ToBoundingRect(this_00,(FSlateRect *)local_88);
    if ((((fStack_80 < fVar6) || (fVar4 < (float)local_88._0_4_)) || (local_7c < fVar5)) ||
       (fVar3 < (float)local_88._4_4_)) {
      fVar1 = (param_2->Geometry).Scale;
      FVar2 = (param_2->Geometry).Size;
      local_res20 = FVar2._0_4_;
      unique0x00023d00 = (param_2->Geometry).AbsolutePosition.field0_0x0._s_0;
      fStackX_24 = FVar2._4_4_;
      local_70._s_0.X = fVar1 * local_res20;
      local_78._4_4_ = fVar1 * 0.0 + fStack_80;
      local_78._0_4_ = fVar1 * 0.0 + (float)local_88._4_4_;
      local_70._s_0.Y = fVar1 * 0.0;
      TStack_68._s_0.X = fVar1 * 0.0;
      TStack_68._s_0.Y = fVar1 * fStackX_24;
      FSlateRotatedRect::ToBoundingRect((FSlateRotatedRect *)&local_78,(FSlateRect *)local_88);
      if (((fStack_80 < fVar6) || (fVar4 < (float)local_88._0_4_)) ||
         ((local_7c < fVar5 || (fVar3 < (float)local_88._4_4_)))) {
        return ((param_2->Widget).Object)->Clipping != ClipToBoundsWithoutIntersecting;
      }
    }
  }
  return false;
}

// IsDirectlyHovered @ 1425e9490

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall SWidget::IsDirectlyHovered(SWidget *this)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  undefined1 uVar4;
  FSlateApplicationBase *pFVar5;
  TSharedRef<SWidget_const_,1> *pTVar6;
  SWidget *local_28;
  TReferenceControllerBase<1> *local_20;
  TSharedRef<SWidget_const_,1> local_18;
  
  pFVar5 = FSlateApplicationBase::Get();
  pcVar1 = *(code **)(*(longlong *)pFVar5 + 0x1a0);
  pTVar6 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
  pTVar2 = (pTVar6->SharedReferenceCount).ReferenceController;
  pSVar3 = pTVar6->Object;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar3;
  local_20 = pTVar2;
  uVar4 = (*pcVar1)(pFVar5,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return (bool)uVar4;
}

// OnAnalogValueChanged @ 1425eb900

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FReply * __thiscall
SWidget::OnAnalogValueChanged
          (SWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FAnalogInputEvent *param_2)

{
  char cVar1;
  EUINavigation EVar2;
  FSlateApplicationBase *pFVar3;
  FReply *pFVar4;
  FReply local_c8;
  
  if ((this->bCanSupportFocus != 0) &&
     (cVar1 = (**(code **)(this->_padding_ + 0x198))(), cVar1 != '\0')) {
    pFVar3 = FSlateApplicationBase::Get();
    EVar2 = (**(code **)(*(longlong *)pFVar3 + 0xa8))(pFVar3);
    if (EVar2 != Invalid) {
      FReply::FReply(&local_c8,true);
      pFVar4 = FReply::SetNavigation(&local_c8,EVar2,Controller,FocusedWidget);
      FReply::FReply(__return_storage_ptr__,pFVar4);
      FReply::~FReply(&local_c8);
      return __return_storage_ptr__;
    }
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnClippingChanged @ 1425ecc50

void __thiscall SWidget::OnClippingChanged(SWidget *this)

{
  return;
}

// OnCursorQuery @ 1425ecc60

/* WARNING: Enum "Type": Some values do not have unique names */

FCursorReply * __thiscall
SWidget::OnCursorQuery
          (SWidget *this,FCursorReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  Type *pTVar4;
  bool bVar5;
  Type local_res8;
  char local_resc;
  undefined8 local_90;
  TReferenceControllerBase<1> *pTStack_88;
  undefined8 local_80;
  TReferenceControllerBase<1> *pTStack_78;
  undefined8 local_70;
  TReferenceControllerBase<1> *pTStack_68;
  Type local_60 [2];
  undefined1 local_58;
  undefined8 local_50;
  TReferenceControllerBase<1> *pTStack_48;
  undefined8 local_40;
  TReferenceControllerBase<1> *pTStack_38;
  undefined8 local_30;
  TReferenceControllerBase<1> *pTStack_28;
  Type local_20 [2];
  
  (**(code **)(this->_padding_ + 0x1d8))(this,&local_res8);
  bVar5 = local_resc == '\0';
  if (bVar5) {
    local_60[0] = Default;
    puVar1 = &local_90;
    local_90 = 0;
    pTStack_88 = (TReferenceControllerBase<1> *)0x0;
    puVar2 = &local_80;
    local_80 = 0;
    pTStack_78 = (TReferenceControllerBase<1> *)0x0;
    puVar3 = &local_70;
    local_70 = 0;
    pTStack_68 = (TReferenceControllerBase<1> *)0x0;
    pTVar4 = local_60;
  }
  else {
    puVar1 = &local_50;
    local_20[0] = local_res8;
    puVar2 = &local_40;
    local_58 = 1;
    local_50 = 0;
    pTStack_48 = (TReferenceControllerBase<1> *)0x0;
    puVar3 = &local_30;
    local_40 = 0;
    pTStack_38 = (TReferenceControllerBase<1> *)0x0;
    pTVar4 = local_20;
    local_30 = 0;
    pTStack_28 = (TReferenceControllerBase<1> *)0x0;
  }
  *(bool *)&__return_storage_ptr__->_padding_ = !bVar5;
  __return_storage_ptr__->_padding_ = puVar1[1];
  (__return_storage_ptr__->CursorWindow).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)puVar2[1];
  (__return_storage_ptr__->CursorWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)puVar3[1];
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar3[1] = 0;
  *puVar3 = 0;
  __return_storage_ptr__->MouseCursor = *pTVar4;
  __return_storage_ptr__->_padding_ = 0;
  (__return_storage_ptr__->CursorWindow).Object = (SWindow *)0x0;
  (__return_storage_ptr__->CursorWidget).Object = (SWidget *)0x0;
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_68);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_78);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_88);
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_48);
  }
  return __return_storage_ptr__;
}

// OnDragDetected @ 1425ed220

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SWidget::OnDragDetected
          (SWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnDragEnter @ 1425ed2e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWidget::OnDragEnter(SWidget *this,FGeometry *param_1,FDragDropEvent *param_2)

{
  return;
}

// OnDragLeave @ 1425ed3b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWidget::OnDragLeave(SWidget *this,FDragDropEvent *param_1)

{
  return;
}

// OnDragOver @ 1425ed860

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SWidget::OnDragOver(SWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
                   FDragDropEvent *param_2)

{
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnDrop @ 1425edbe0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SWidget::OnDrop(SWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
               FDragDropEvent *param_2)

{
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnFinishedKeyInput @ 1425edc10

void __thiscall SWidget::OnFinishedKeyInput(SWidget *this)

{
  return;
}

// OnFinishedPointerInput @ 1425edc20

void __thiscall SWidget::OnFinishedPointerInput(SWidget *this)

{
  return;
}

// OnFocusChanging @ 1425edc30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SWidget::OnFocusChanging
          (SWidget *this,FWeakWidgetPath *param_1,FWidgetPath *param_2,FFocusEvent *param_3)

{
  return;
}

// OnFocusLost @ 1425edc40

void __thiscall SWidget::OnFocusLost(SWidget *this,FFocusEvent *param_1)

{
  return;
}

// OnFocusReceived @ 1425edc50

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SWidget::OnFocusReceived
          (SWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,FFocusEvent *param_2)

{
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnKeyChar @ 1425ee4a0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SWidget::OnKeyChar(SWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
                  FCharacterEvent *param_2)

{
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnKeyDown @ 1425ee4d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FReply * __thiscall
SWidget::OnKeyDown(SWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
                  FKeyEvent *param_2)

{
  char cVar1;
  EUINavigation EVar2;
  bool bVar3;
  FSlateApplicationBase *pFVar4;
  FReply *pFVar5;
  FKey local_d8;
  FReply local_c0;
  
  if ((this->bCanSupportFocus != 0) &&
     (cVar1 = (**(code **)(this->_padding_ + 0x198))(), cVar1 != '\0')) {
    pFVar4 = FSlateApplicationBase::Get();
    EVar2 = (**(code **)(*(longlong *)pFVar4 + 0xa0))(pFVar4);
    if (EVar2 != Invalid) {
      local_d8.KeyName = (param_2->Key).KeyName;
      local_d8.KeyDetails.Object = (param_2->Key).KeyDetails.Object;
      local_d8.KeyDetails.SharedReferenceCount.ReferenceController =
           (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
      if (local_d8.KeyDetails.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_d8.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_d8.KeyDetails.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar3 = FKey::IsGamepadKey(&local_d8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.KeyDetails.SharedReferenceCount.ReferenceController);
      FReply::FReply(&local_c0,true);
      pFVar5 = FReply::SetNavigation(&local_c0,EVar2,bVar3,FocusedWidget);
      FReply::FReply(__return_storage_ptr__,pFVar5);
      FReply::~FReply(&local_c0);
      return __return_storage_ptr__;
    }
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnKeyUp @ 1425ee5c0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SWidget::OnKeyUp(SWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,FKeyEvent *param_2)

{
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMapCursor @ 1425ee5f0

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<TSharedRef<SWidget,1>_> * __thiscall
SWidget::OnMapCursor
          (SWidget *this,TOptional<TSharedRef<SWidget,1>_> *__return_storage_ptr__,
          FCursorReply *param_1)

{
  (__return_storage_ptr__->field0_0x0).TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->field0_0x0).TypedValue.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// OnMotionDetected @ 1425ee610

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SWidget::OnMotionDetected
          (SWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,FMotionEvent *param_2)

{
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMouseButtonDoubleClick @ 1425ee640

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SWidget::OnMouseButtonDoubleClick
          (SWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  FReply *pFVar5;
  TSharedPtr<FSlateMouseEventsMetaData,1> local_38;
  FReadAccessScope local_28;
  
  GetMetaData<FSlateMouseEventsMetaData>(this,&local_38);
  if (local_38.Object != (FSlateMouseEventsMetaData *)0x0) {
    if ((local_38.Object == (FSlateMouseEventsMetaData *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FReply *)(*pcVar2)();
      return pFVar5;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_38.Object)->MouseDoubleClickHandle,&local_28);
    if (((*(int *)&((local_38.Object)->MouseDoubleClickHandle).field_0x10 != 0) &&
        (plVar1 = *(longlong **)&((local_38.Object)->MouseDoubleClickHandle).field_0x8,
        plVar1 != (longlong *)0x0)) && (cVar4 = (**(code **)(*plVar1 + 0x38))(), cVar4 != '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      if ((local_38.Object == (FSlateMouseEventsMetaData *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FReply *)(*pcVar2)();
        return pFVar5;
      }
      TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
      ::Execute(&(local_38.Object)->MouseDoubleClickHandle,__return_storage_ptr__,param_1,param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMouseButtonDown @ 1425ee940

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SWidget::OnMouseButtonDown
          (SWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  FReply *pFVar5;
  TSharedPtr<FSlateMouseEventsMetaData,1> local_38;
  FReadAccessScope local_28;
  
  GetMetaData<FSlateMouseEventsMetaData>(this,&local_38);
  if (local_38.Object != (FSlateMouseEventsMetaData *)0x0) {
    if ((local_38.Object == (FSlateMouseEventsMetaData *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FReply *)(*pcVar2)();
      return pFVar5;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_38.Object)->MouseButtonDownHandle,&local_28);
    if (((*(int *)&((local_38.Object)->MouseButtonDownHandle).field_0x10 != 0) &&
        (plVar1 = *(longlong **)&((local_38.Object)->MouseButtonDownHandle).field_0x8,
        plVar1 != (longlong *)0x0)) && (cVar4 = (**(code **)(*plVar1 + 0x38))(), cVar4 != '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      if ((local_38.Object == (FSlateMouseEventsMetaData *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FReply *)(*pcVar2)();
        return pFVar5;
      }
      TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
      ::Execute(&(local_38.Object)->MouseButtonDownHandle,__return_storage_ptr__,param_1,param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 1425eebf0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SWidget::OnMouseButtonUp
          (SWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  FReply *pFVar5;
  TSharedPtr<FSlateMouseEventsMetaData,1> local_38;
  FReadAccessScope local_28;
  
  GetMetaData<FSlateMouseEventsMetaData>(this,&local_38);
  if (local_38.Object != (FSlateMouseEventsMetaData *)0x0) {
    if ((local_38.Object == (FSlateMouseEventsMetaData *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FReply *)(*pcVar2)();
      return pFVar5;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_38.Object)->MouseButtonUpHandle,&local_28);
    if (((*(int *)&((local_38.Object)->MouseButtonUpHandle).field_0x10 != 0) &&
        (plVar1 = *(longlong **)&((local_38.Object)->MouseButtonUpHandle).field_0x8,
        plVar1 != (longlong *)0x0)) && (cVar4 = (**(code **)(*plVar1 + 0x38))(), cVar4 != '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      if ((local_38.Object == (FSlateMouseEventsMetaData *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FReply *)(*pcVar2)();
        return pFVar5;
      }
      TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
      ::Execute(&(local_38.Object)->MouseButtonUpHandle,__return_storage_ptr__,param_1,param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMouseCaptureLost @ 1425eee50

void __thiscall SWidget::OnMouseCaptureLost(SWidget *this,FCaptureLostEvent *param_1)

{
  return;
}

// OnMouseEnter @ 1425eee60

void __thiscall SWidget::OnMouseEnter(SWidget *this,FGeometry *param_1,FPointerEvent *param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  FReadAccessScope *this_00;
  bool local_res8 [8];
  TSharedPtr<FSlateMouseEventsMetaData,1> local_48;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  if (this->bIsHoveredAttributeSet == '\0') {
    local_res8[0] = true;
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Set((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
           *)&this->HoveredAttribute,this,local_res8);
  }
  GetMetaData<FSlateMouseEventsMetaData>(this,&local_48);
  if (local_48.Object == (FSlateMouseEventsMetaData *)0x0) goto LAB_1425eef88;
  if (local_48.Object == (FSlateMouseEventsMetaData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(local_48.Object)->MouseEnterHandler,&local_38);
  if ((*(int *)&((local_48.Object)->MouseEnterHandler).field_0x10 == 0) ||
     (plVar4 = *(longlong **)&((local_48.Object)->MouseEnterHandler).field_0x8,
     plVar4 == (longlong *)0x0)) {
LAB_1425eef79:
    this_00 = &local_38;
  }
  else {
    cVar3 = (**(code **)(*plVar4 + 0x38))();
    if (cVar3 == '\0') goto LAB_1425eef79;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
    if (local_48.Object == (FSlateMouseEventsMetaData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_48.Object)->MouseEnterHandler,&local_20);
    if (*(int *)&((local_48.Object)->MouseEnterHandler).field_0x10 == 0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = *(longlong **)&((local_48.Object)->MouseEnterHandler).field_0x8;
    }
    (**(code **)(*plVar4 + 0x60))(plVar4,param_1,param_2);
    this_00 = &local_20;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (this_00);
LAB_1425eef88:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  return;
}

// OnMouseLeave @ 1425eefb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall SWidget::OnMouseLeave(SWidget *this,FPointerEvent *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  FReadAccessScope *this_00;
  bool local_res8 [8];
  TSharedPtr<FSlateMouseEventsMetaData,1> local_48;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  if (this->bIsHoveredAttributeSet == '\0') {
    local_res8[0] = false;
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Set((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
           *)&this->HoveredAttribute,this,local_res8);
  }
  GetMetaData<FSlateMouseEventsMetaData>(this,&local_48);
  if (local_48.Object == (FSlateMouseEventsMetaData *)0x0) goto LAB_1425ef0f5;
  if (local_48.Object == (FSlateMouseEventsMetaData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(local_48.Object)->MouseLeaveHandler,&local_38);
  if ((*(int *)&((local_48.Object)->MouseLeaveHandler).field_0x10 == 0) ||
     (plVar1 = *(longlong **)&((local_48.Object)->MouseLeaveHandler).field_0x8,
     plVar1 == (longlong *)0x0)) {
LAB_1425ef0e6:
    this_00 = &local_38;
  }
  else {
    cVar4 = (**(code **)(*plVar1 + 0x38))();
    if (cVar4 == '\0') goto LAB_1425ef0e6;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
    if (local_48.Object == (FSlateMouseEventsMetaData *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_48.Object)->MouseLeaveHandler,&local_20);
    if (*(int *)&((local_48.Object)->MouseLeaveHandler).field_0x10 == 0) {
      (**(code **)(_DAT_00000000 + 0x60))(0,param_1);
      this_00 = &local_20;
    }
    else {
      plVar1 = *(longlong **)&((local_48.Object)->MouseLeaveHandler).field_0x8;
      (**(code **)(*plVar1 + 0x60))(plVar1,param_1);
      this_00 = &local_20;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (this_00);
LAB_1425ef0f5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  return;
}

// OnMouseMove @ 1425ef120

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SWidget::OnMouseMove
          (SWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  FReply *pFVar5;
  TSharedPtr<FSlateMouseEventsMetaData,1> local_38;
  FReadAccessScope local_28;
  
  GetMetaData<FSlateMouseEventsMetaData>(this,&local_38);
  if (local_38.Object != (FSlateMouseEventsMetaData *)0x0) {
    if ((local_38.Object == (FSlateMouseEventsMetaData *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FReply *)(*pcVar2)();
      return pFVar5;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_38.Object)->MouseMoveHandle,&local_28);
    if (((*(int *)&((local_38.Object)->MouseMoveHandle).field_0x10 != 0) &&
        (plVar1 = *(longlong **)&((local_38.Object)->MouseMoveHandle).field_0x8,
        plVar1 != (longlong *)0x0)) && (cVar4 = (**(code **)(*plVar1 + 0x38))(), cVar4 != '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      if ((local_38.Object == (FSlateMouseEventsMetaData *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FReply *)(*pcVar2)();
        return pFVar5;
      }
      TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
      ::Execute(&(local_38.Object)->MouseMoveHandle,__return_storage_ptr__,param_1,param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMouseWheel @ 1425ef390

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SWidget::OnMouseWheel
          (SWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnNavigation @ 1425ef3c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FNavigationReply * __thiscall
SWidget::OnNavigation
          (SWidget *this,FNavigationReply *__return_storage_ptr__,FGeometry *param_1,
          FNavigationEvent *param_2)

{
  EUINavigation EVar1;
  EUINavigationRule EVar2;
  SWidget *pSVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  FNavigationReply *pFVar8;
  SWidget *pSVar9;
  SWidget *pSVar10;
  TSharedPtr<FNavigationMetaData,1> local_28;
  
  EVar1 = param_2->NavigationType;
  GetMetaData<FNavigationMetaData>(this,&local_28);
  if (local_28.Object == (FNavigationMetaData *)0x0) {
    (__return_storage_ptr__->EventHandler).Object = (SWidget *)0x0;
    (__return_storage_ptr__->EventHandler).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->FocusRecipient).Object = (SWidget *)0x0;
    (__return_storage_ptr__->FocusRecipient).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    *(undefined8 *)&(__return_storage_ptr__->FocusDelegate).field_0x10 = 0;
    *(undefined8 *)&__return_storage_ptr__->FocusDelegate = 0;
    *(undefined8 *)&(__return_storage_ptr__->FocusDelegate).field_0x8 = 0;
    __return_storage_ptr__->BoundaryRule = Escape;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    return __return_storage_ptr__;
  }
  if ((local_28.Object == (FNavigationMetaData *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FNavigationReply *)(*pcVar4)();
    return pFVar8;
  }
  pSVar3 = (SWidget *)
           (local_28.Object)->Rules[EVar1].FocusRecipient.WeakReferenceCount.ReferenceController;
  pSVar9 = pSVar3;
  pSVar10 = (SWidget *)0x0;
  if (pSVar3 != (SWidget *)0x0) {
    iVar5 = (int)pSVar3->_padding_;
    do {
      pSVar9 = (SWidget *)0x0;
      pSVar10 = (SWidget *)0x0;
      if (iVar5 == 0) goto LAB_1425ef465;
      LOCK();
      iVar7 = (int)pSVar3->_padding_;
      bVar6 = iVar5 == iVar7;
      if (bVar6) {
        *(int *)&pSVar3->_padding_ = iVar5 + 1;
        iVar7 = iVar5;
      }
      UNLOCK();
      iVar5 = iVar7;
    } while (!bVar6);
    pSVar9 = pSVar3;
    pSVar10 = (local_28.Object)->Rules[EVar1].FocusRecipient.Object;
  }
LAB_1425ef465:
  if ((local_28.Object == (FNavigationMetaData *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FNavigationReply *)(*pcVar4)();
    return pFVar8;
  }
  if (pSVar9 != (SWidget *)0x0) {
    LOCK();
    *(int *)&pSVar9->_padding_ = (int)pSVar9->_padding_ + 1;
    UNLOCK();
  }
  if ((local_28.Object == (FNavigationMetaData *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FNavigationReply *)(*pcVar4)();
    return pFVar8;
  }
  EVar2 = (local_28.Object)->Rules[EVar1].BoundaryRule;
  (__return_storage_ptr__->FocusRecipient).Object = pSVar10;
  (__return_storage_ptr__->EventHandler).Object = (SWidget *)0x0;
  (__return_storage_ptr__->EventHandler).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->FocusRecipient).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)pSVar9;
  if (pSVar9 != (SWidget *)0x0) {
    LOCK();
    *(int *)&pSVar9->_padding_ = (int)pSVar9->_padding_ + 1;
    UNLOCK();
  }
  *(undefined8 *)&__return_storage_ptr__->FocusDelegate = 0;
  *(undefined8 *)&(__return_storage_ptr__->FocusDelegate).field_0x8 = 0;
  *(undefined4 *)&(__return_storage_ptr__->FocusDelegate).field_0x10 = 0;
  TDelegate<TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&__return_storage_ptr__->FocusDelegate,&(local_28.Object)->Rules[EVar1].FocusDelegate);
  __return_storage_ptr__->BoundaryRule = EVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// OnPreviewKeyDown @ 1425f05f0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SWidget::OnPreviewKeyDown
          (SWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,FKeyEvent *param_2)

{
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnPreviewMouseButtonDown @ 1425f0620

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SWidget::OnPreviewMouseButtonDown
          (SWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnQueryPopupMethod @ 1425f0650

FPopupMethodReply * __thiscall
SWidget::OnQueryPopupMethod(SWidget *this,FPopupMethodReply *__return_storage_ptr__)

{
  *(undefined1 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->PopupMethod = CreateNewWindow;
  __return_storage_ptr__->ShouldThrottle = Yes;
  return __return_storage_ptr__;
}

// OnQueryShowFocus @ 1425f0670

TOptional<bool> __thiscall SWidget::OnQueryShowFocus(SWidget *this,EFocusCause param_1)

{
  undefined7 in_register_00000011;
  
  *(undefined1 *)(CONCAT71(in_register_00000011,param_1) + 1) = 0;
  return SUB82(CONCAT71(in_register_00000011,param_1),0);
}

// OnToolTipClosing @ 1425f0680

void __thiscall SWidget::OnToolTipClosing(SWidget *this)

{
  return;
}

// OnTouchEnded @ 1425f0690

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SWidget::OnTouchEnded
          (SWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnTouchFirstMove @ 1425f06c0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SWidget::OnTouchFirstMove
          (SWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnTouchForceChanged @ 1425f06f0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SWidget::OnTouchForceChanged
          (SWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnTouchGesture @ 1425f0720

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SWidget::OnTouchGesture
          (SWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnTouchMoved @ 1425f0750

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SWidget::OnTouchMoved
          (SWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnTouchStarted @ 1425f0780

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SWidget::OnTouchStarted
          (SWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnVisualizePopup @ 1425f09c0

TSharedPtr<FPopupLayer,1> * __thiscall
SWidget::OnVisualizePopup
          (SWidget *this,TSharedPtr<FPopupLayer,1> *__return_storage_ptr__,
          TSharedRef<SWidget,1> *param_1)

{
  __return_storage_ptr__->Object = (FPopupLayer *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// OnVisualizeTooltip @ 1425f0b30

bool __thiscall SWidget::OnVisualizeTooltip(SWidget *this,TSharedPtr<SWidget,1> *param_1)

{
  return false;
}

// Paint @ 1425f19d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

int __thiscall
SWidget::Paint(SWidget *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
              FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  TOptional<FSlateClippingState> *pTVar1;
  atomic<int> *paVar2;
  undefined1 *puVar3;
  float fVar4;
  atomic<int> aVar5;
  undefined8 uVar6;
  EWidgetClipping EVar7;
  undefined1 uVar8;
  EFlowDirectionPreference EVar9;
  FName FVar10;
  SWidget *pSVar11;
  FScriptContainerElement *pFVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  TReferenceControllerBase<1> *pTVar16;
  code *pcVar17;
  TVector2<float> *pTVar18;
  TVector2<float>_u_0 TVar19;
  float afVar20 [2];
  float afVar21 [2];
  float afVar22 [2];
  float afVar23 [2];
  FPaintArgs *pFVar24;
  bool bVar25;
  byte bVar26;
  EWidgetPixelSnapping EVar27;
  bool bVar28;
  char cVar29;
  EFlowDirection EVar30;
  int iVar31;
  atomic<int> aVar32;
  EConsoleVariableFlags EVar33;
  uint uVar34;
  int iVar35;
  FName *pFVar36;
  FThreadSafeStaticStat<FStat_STAT_SlateNumPaintedWidgets> FVar37;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FSlateRotatedRect *this_02;
  TStatId TVar38;
  TSharedRef<SWidget,1> *pTVar39;
  TOptional<FSlateClippingState> *pTVar40;
  FWidgetProxy *pFVar41;
  FChildren *this_03;
  UObject *this_04;
  UObject *pUVar42;
  UPackage *pUVar43;
  TEventRef<unsigned_int> TVar44;
  FWriteBuffer *pFVar45;
  ForElementType<TWeakPtr<SWidget_const_,1>_> FVar46;
  FLinearColor *pFVar47;
  FSlateApplicationBase *pFVar48;
  TSharedRef<SWidget_const_,1> *pTVar49;
  FSlateBrush *this_05;
  ulonglong uVar50;
  ulonglong uVar51;
  uint uVar52;
  uint uVar53;
  ForElementType<TWeakPtr<SWidget_const_,1>_> FVar54;
  EWidgetUpdateFlags EVar55;
  longlong lVar56;
  EWidgetUpdateFlags EVar57;
  byte bVar58;
  byte bVar59;
  LARGE_INTEGER LVar60;
  FSlateWindowElementList *pFVar61;
  float fVar62;
  float fVar63;
  undefined1 auStackY_6f8 [32];
  ForAnyElementType local_698;
  undefined8 local_690;
  undefined1 local_688;
  undefined1 local_687;
  undefined1 local_686;
  EWidgetPixelSnapping local_685;
  EWidgetUpdateFlags local_684;
  EFlowDirection local_683;
  undefined8 local_680;
  FGeometry *local_678;
  undefined8 local_670;
  uint local_664;
  FSlateWindowElementList *local_660;
  undefined8 local_658;
  undefined8 uStack_650;
  FCycleCounter local_648;
  FCycleCounter local_638;
  SWidget *local_628;
  TReferenceControllerBase<1> *local_620;
  SWidget *local_618;
  TReferenceControllerBase<1> *local_610;
  FLLMScope local_608;
  TVector2<float>_u_0 local_604;
  TVector2<float>_u_0 local_5fc;
  TVector2<float>_u_0 local_5f4;
  TVector2<float>_u_0 local_5ec;
  FSlateRect local_5e0;
  uint local_5d0;
  FWidgetStyle *local_5c8;
  FName local_5c0;
  FPaintArgs *local_5b8;
  undefined8 local_5b0;
  undefined8 local_5a8;
  undefined8 local_5a0;
  undefined8 local_598;
  undefined8 local_590;
  undefined8 local_588;
  FSlateRect *local_580;
  LARGE_INTEGER local_578;
  LARGE_INTEGER local_570;
  undefined8 local_568;
  undefined8 local_560;
  undefined8 local_558;
  FName local_550;
  byte local_548;
  TSharedPtr<FReflectionMetaData,1> local_540;
  SWidget *local_530;
  TReferenceControllerBase<1> *local_528;
  TVector2<float>_u_0 local_520;
  float local_518;
  undefined8 local_514;
  float local_50c;
  FName local_508;
  LARGE_INTEGER local_500;
  LARGE_INTEGER local_4f8;
  LARGE_INTEGER local_4f0;
  SWidget *local_4e8;
  <lambda_2> local_4e0;
  FMemScope local_4d8;
  SWidget **local_4d0;
  SWidget **local_4c8;
  LARGE_INTEGER local_4c0;
  FStatMessage local_4b8;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_4a8;
  TVector2<float>_u_0_s_0 local_494;
  FSourceLocation local_488;
  FSourceLocation local_468;
  TVector2<float>_u_0 local_448;
  TVector2<float>_u_0 local_440;
  TVector2<float>_u_0 local_438;
  TVector2<float>_u_0 local_430;
  byte local_428;
  TSharedRef<SWidget_const_,1> local_420;
  FSlateCachedElementsHandle local_410;
  FDestructionSentinel local_400;
  FDestructionSentinel local_3e8;
  FHittestGrid *local_3d0;
  FHittestGrid *pFStack_3c8;
  TVector2<float>_u_0 local_3c0;
  SWidget *pSStack_3b8;
  undefined1 local_3b0;
  undefined1 uStack_3af;
  undefined1 uStack_3ae;
  undefined1 uStack_3ad;
  undefined1 uStack_3ac;
  undefined1 uStack_3ab;
  undefined1 uStack_3aa;
  undefined1 uStack_3a9;
  undefined1 uStack_3a8;
  undefined1 uStack_3a7;
  undefined1 uStack_3a6;
  undefined1 uStack_3a5;
  byte bStack_3a4;
  undefined1 uStack_3a3;
  undefined1 uStack_3a2;
  undefined1 uStack_3a1;
  FName local_390 [2];
  FName local_380;
  FName local_378;
  TSharedRef<SWidget,1> local_370;
  TTransform2<float> local_358;
  TTransform2<float> local_340;
  FSlateClippingZone local_328;
  float local_300;
  float fStack_2fc;
  float fStack_2f8;
  float fStack_2f4;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  float local_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  FLinearColor local_2a0;
  FSlateRotatedRect local_290;
  TOptional<FSlateClippingState> local_278;
  FGeometry local_228;
  undefined4 *local_1f0;
  longlong local_1e8;
  TVector2<float>_u_0 local_1e0;
  float local_1d8;
  undefined8 local_1d4;
  FDeprecateSlateVector2D local_1cc;
  float local_1c4 [2];
  float afStack_1bc [2];
  TVector2<float>_u_0 local_1b4;
  byte local_1ac;
  TVector2<float>_u_0 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined4 local_190;
  float local_18c [2];
  float afStack_184 [2];
  undefined8 local_17c;
  byte local_174;
  TArray<TWeakPtr<SWidget_const_,1>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  local_170;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_6f8;
  local_660 = param_4;
  local_684 = this->UpdateFlags;
  local_5c8 = param_6;
  local_678 = param_2;
  local_5b8 = param_1;
  local_580 = param_3;
  if (FThreadStats::bPrimaryEnable) {
    FVar37 = StatPtr_STAT_SlateNumPaintedWidgets;
    if (StatPtr_STAT_SlateNumPaintedWidgets ==
        (FThreadSafeStaticStat<FStat_STAT_SlateNumPaintedWidgets>)0x0) {
      pFVar36 = ::FName::FName((FName *)&local_570.s,"STAT_SlateNumPaintedWidgets");
      FVar37 = (FThreadSafeStaticStat<FStat_STAT_SlateNumPaintedWidgets>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateNumPaintedWidgets,*pFVar36
                          ,L"SWidget::Paint (Count)","STATGROUP_Slate","STATCAT_Advanced",L"Slate",
                          true,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar10 = *(FName *)FVar37;
    local_680 = (TVector2<float>_u_0)FVar10;
    if (((FVar10 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_4b8.NameAndInfo.Number = FVar10.Number & 0xffffafff | 0xa000;
      local_4b8.StatData.Pad[0] = '\x01';
      local_4b8.StatData.Pad[1] = '\0';
      local_4b8.StatData.Pad[2] = '\0';
      local_4b8.StatData.Pad[3] = '\0';
      local_4b8.StatData.Pad[4] = '\0';
      local_4b8.StatData.Pad[5] = '\0';
      local_4b8.StatData.Pad[6] = '\0';
      local_4b8.StatData.Pad[7] = '\0';
      local_508 = FVar10;
      local_4b8.NameAndInfo.Index.Value = FVar10.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_4b8);
      FStatsTrace::Add(&local_508,1);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
        param_2 = local_678;
      }
      else {
        param_2 = local_678;
        if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
          param_2 = local_678;
        }
      }
    }
  }
  local_5d0 = SlateTraceDetail::GFramePaintCount;
  if (SlateChannel->Enabled < 0) {
    local_578.s = local_570.s;
  }
  else {
    QueryPerformanceCounter(&local_500);
    uVar50 = (ulonglong)SlateTraceDetail::WidgetUpdateStepsIndex;
    local_578 = local_500;
    if (0x3fff < uVar50 + 0x12) {
      SlateTraceDetail::FlushWidgetUpdateStepsBuffer();
      uVar50 = (ulonglong)SlateTraceDetail::WidgetUpdateStepsIndex;
    }
    uVar51 = uVar50;
    if (SlateTraceDetail::GScopedPaintCount == 0) {
      uVar51 = (ulonglong)((int)uVar50 + 1);
      SlateTraceDetail::WidgetUpdateStepsBuffer[uVar50] =
           SlateTraceDetail::kWidgetUpdateStepsCommand_NewRootPaint;
    }
    SlateTraceDetail::WidgetUpdateStepsBuffer[uVar51] =
         SlateTraceDetail::kWidgetUpdateStepsCommand_StartPaint;
    iVar31 = (int)uVar51;
    *(LARGE_INTEGER *)(SlateTraceDetail::WidgetUpdateStepsBuffer + (iVar31 + 1)) = local_500;
    *(ulong64 *)(SlateTraceDetail::WidgetUpdateStepsBuffer + (iVar31 + 9)) = this->UniqueIdentifier;
    SlateTraceDetail::WidgetUpdateStepsIndex = iVar31 + 0x11;
    FSlateTrace::ConditionallyUpdateWidgetInfo(this);
  }
  SlateTraceDetail::GScopedPaintCount = SlateTraceDetail::GScopedPaintCount + 1;
  bVar26 = 0;
  SlateTraceDetail::GFramePaintCount = SlateTraceDetail::GFramePaintCount + 1;
  if (this->bClippingProxy != '\0') goto LAB_1425f1e02;
  EVar7 = this->Clipping;
  if (EVar7 == ClipToBounds) goto LAB_1425f1cfe;
  if (EVar7 == ClipToBoundsWithoutIntersecting) {
    cVar29 = '\0';
    bVar58 = 0;
LAB_1425f1d07:
    bVar26 = 1;
    local_670 = param_2->Size;
    local_680 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    TVar19._s_0 = local_680;
    local_680._0_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
    local_520._s_0.X = (float)local_680._0_4_ - (this->CullingBoundsExtension).Left;
    local_680._4_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
    local_520._s_0.Y = local_680._4_4_ - (this->CullingBoundsExtension).Top;
    local_514 = 0;
    local_518 = ((float)local_670 + (this->CullingBoundsExtension).Right) - local_520._s_0.X;
    local_50c = (local_670._4_4_ + (this->CullingBoundsExtension).Bottom) - local_520._s_0.Y;
    local_680 = TVar19._s_0;
    this_02 = TransformRect<TTransform2<float>_>
                        (&local_290,&param_2->AccumulatedRenderTransform,
                         (FSlateRotatedRect *)&local_520._s_0);
    FSlateRotatedRect::ToBoundingRect(this_02,&local_5e0);
    if (bVar58 == 0) {
      local_658 = CONCAT44(local_5e0.Top,local_5e0.Left);
      uStack_650 = CONCAT44(local_5e0.Bottom,local_5e0.Right);
    }
    else {
      fVar62 = param_3->Bottom;
      if (local_5e0.Bottom <= param_3->Bottom) {
        fVar62 = local_5e0.Bottom;
      }
      fVar63 = param_3->Top;
      if (param_3->Top <= local_5e0.Top) {
        fVar63 = local_5e0.Top;
      }
      fVar4 = param_3->Right;
      if (local_5e0.Right <= param_3->Right) {
        fVar4 = local_5e0.Right;
      }
      if (local_5e0.Left <= param_3->Left) {
        local_5e0.Left = param_3->Left;
      }
      if ((fVar62 < fVar63) || (fVar4 < local_5e0.Left)) {
        local_658 = 0;
        uStack_650 = 0;
      }
      else {
        local_658 = CONCAT44(fVar63,local_5e0.Left);
        uStack_650 = CONCAT44(fVar62,fVar4);
      }
    }
  }
  else {
    if (EVar7 == ClipToBoundsAlways) {
      cVar29 = '\x01';
LAB_1425f1d03:
      bVar58 = 1;
      goto LAB_1425f1d07;
    }
    if (EVar7 == OnDemand) {
      local_568 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      if (this->bDesiredSizeSet != '\0') {
        local_568 = *(TVector2<float>_u_0 *)&(this->DesiredSize).field0_0x0._s_0;
      }
      local_560 = param_2->Size;
      if ((float)local_568 - __real_3f800000 <= (float)local_560) {
        if (local_568._4_4_ - __real_3f800000 <= local_560._4_4_) goto LAB_1425f1e02;
      }
LAB_1425f1cfe:
      cVar29 = '\0';
      goto LAB_1425f1d03;
    }
LAB_1425f1e02:
    cVar29 = '\0';
    local_658._0_4_ = param_3->Left;
    local_658._4_4_ = param_3->Top;
    uStack_650._0_4_ = param_3->Right;
    uStack_650._4_4_ = param_3->Bottom;
    bVar58 = 1;
  }
  local_494 = (param_1->WindowOffset).field0_0x0._s_0;
  local_228.Size._0_4_ = *(undefined4 *)&param_2->Size;
  local_228.Size._4_4_ = *(undefined4 *)&(param_2->Size).field_0x4;
  fVar62 = param_2->Scale;
  pTVar18 = &param_2->AbsolutePosition;
  local_228.AbsolutePosition.field0_0x0._s_0.X = (pTVar18->field0_0x0)._s_0.X;
  local_300 = (local_5c8->ColorAndOpacityTint).field0_0x0._s_0.R;
  fStack_2fc = (local_5c8->ColorAndOpacityTint).field0_0x0._s_0.G;
  fStack_2f8 = (local_5c8->ColorAndOpacityTint).field0_0x0._s_0.B;
  local_2f0 = *(undefined8 *)&(local_5c8->ForegroundColor).field0_0x0;
  uStack_2e8 = *(undefined8 *)((longlong)&(local_5c8->ForegroundColor).field0_0x0 + 8);
  local_2e0 = *(undefined8 *)&(local_5c8->SubduedForeground).field0_0x0;
  uStack_2d8 = *(undefined8 *)((longlong)&(local_5c8->SubduedForeground).field0_0x0 + 8);
  fStack_2f4 = (local_5c8->ColorAndOpacityTint).field0_0x0._s_0.A * this->RenderOpacity;
  uVar6 = *(undefined8 *)&(param_2->AbsolutePosition).field0_0x0._s_0.Y;
  local_680._0_4_ = (uint)*(float *)&pTVar18->field0_0x0;
  local_680._4_4_ = *(float *)((longlong)&pTVar18->field0_0x0 + 4);
  uVar13 = *(undefined8 *)&(param_2->Position).field0_0x0._s_0.Y;
  local_228.AbsolutePosition.field0_0x0._s_0.Y = (float)uVar6;
  local_228.Position.field0_0x0._s_0.X = (float)((ulonglong)uVar6 >> 0x20);
  local_228.Position.field0_0x0._s_0.Y = (float)uVar13;
  local_228.AccumulatedRenderTransform.M.M[0][0] = (float)((ulonglong)uVar13 >> 0x20);
  uVar6 = *(undefined8 *)&(param_2->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
  uVar13 = *(undefined8 *)((param_2->AccumulatedRenderTransform).M.M[0] + 1);
  uVar14 = *(undefined8 *)((param_2->AccumulatedRenderTransform).M.M[1] + 1);
  local_228.AccumulatedRenderTransform.Trans.field0_0x0._s_0.Y = (float)uVar6;
  local_228._52_4_ = SUB84((ulonglong)uVar6 >> 0x20,0);
  local_670._0_4_ = local_494.X + (float)local_680._0_4_;
  local_228.AccumulatedRenderTransform.M.M[0][1] = (float)uVar13;
  local_228.AccumulatedRenderTransform.M.M[1][0] = (float)((ulonglong)uVar13 >> 0x20);
  local_228.AccumulatedRenderTransform.M.M[1][1] = (float)uVar14;
  local_228.AccumulatedRenderTransform.Trans.field0_0x0._s_0.X = (float)((ulonglong)uVar14 >> 0x20);
  local_670._4_4_ = local_494.Y + local_680._4_4_;
  local_358.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
  local_358.M.M[0][1] = _UNK_15076b184;
  local_358.M.M[1][0] = _UNK_15076b188;
  local_358.M.M[1][1] = _UNK_15076b18c;
  local_358.Trans.field0_0x0 = (TVector2<float>_u_0)local_494;
  local_2d0 = local_300;
  fStack_2cc = fStack_2fc;
  fStack_2c8 = fStack_2f8;
  fStack_2c4 = fStack_2f4;
  local_2c0 = local_2f0;
  uStack_2b8 = uStack_2e8;
  local_2b0 = local_2e0;
  uStack_2a8 = uStack_2d8;
  local_228.Scale = fVar62;
  Concatenate<TTransform2<float>_>(&local_340,&local_228.AccumulatedRenderTransform,&local_358);
  EVar55 = None;
  local_228.AbsolutePosition.field0_0x0._s_0.X = (float)local_670;
  local_228.AbsolutePosition.field0_0x0._s_0.Y = local_670._4_4_;
  local_228.AccumulatedRenderTransform.M.M[0][0] = local_340.M.M[0][0];
  local_228.AccumulatedRenderTransform.M.M[0][1] = local_340.M.M[0][1];
  local_228.AccumulatedRenderTransform.M.M[1][0] = local_340.M.M[1][0];
  local_228.AccumulatedRenderTransform.M.M[1][1] = local_340.M.M[1][1];
  local_228.AccumulatedRenderTransform.Trans.field0_0x0._s_0.X = local_340.Trans.field0_0x0._0_4_;
  local_228.AccumulatedRenderTransform.Trans.field0_0x0._s_0.Y = local_340.Trans.field0_0x0._4_4_;
  LVar60 = local_570;
  local_228.Scale = fVar62;
  if ((-1 < SlateChannel->Enabled) &&
     ((this->UpdateFlags & (NeedsActiveTimerUpdate|NeedsTick)) != None)) {
    QueryPerformanceCounter(&local_4f8);
    EVar55 = this->UpdateFlags & (NeedsActiveTimerUpdate|NeedsTick);
    FSlateTrace::ConditionallyUpdateWidgetInfo(this);
    LVar60 = local_4f8;
  }
  SlateTraceDetail::GScopedUpdateCount = SlateTraceDetail::GScopedUpdateCount + 1;
  if ((this->UpdateFlags & NeedsActiveTimerUpdate) != None) {
    TVar38 = FThreadSafeStaticStatInner<FStat_STAT_SlateExecuteActiveTimers,1>::GetStatId
                       ((FThreadSafeStaticStatInner<FStat_STAT_SlateExecuteActiveTimers,1> *)
                        &StatPtr_STAT_SlateExecuteActiveTimers);
    local_488.Impl._Line = 0x59b;
    local_488.Impl._Column = 4;
    local_638.StatId.ComparisonIndex.Value = 0;
    local_638.StatId.Number = 0;
    local_638.EmittedEvent = 0;
    local_488.Impl._File =
         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\SWidget.cpp"
    ;
    local_488.Impl._Function =
         "int __cdecl SWidget::Paint(const class FPaintArgs &,const struct FGeometry &,const class FSlateRect &,class FSlateWindowElementList &,int,const class FWidgetStyle &,bool) const"
    ;
    FCycleCounter::Start
              (&local_638,*(TStatIdData **)&(TVar38.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false
               ,&local_488);
    ExecuteActiveTimers(this,param_1->CurrentTime,param_1->DeltaTime);
    if ((local_638.EmittedEvent & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_638.EmittedEvent & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_638.EmittedEvent & 4) != 0) {
      FThreadStats::AddMessage(local_638.StatId,CycleScopeEnd);
    }
    local_638.EmittedEvent = '\0';
  }
  if ((this->UpdateFlags & NeedsTick) != None) {
    if (FThreadStats::bPrimaryEnable != false) {
      TVar38 = FThreadSafeStaticStatInner<FStat_STAT_SlateNumTickedWidgets,1>::GetStatId
                         ((FThreadSafeStaticStatInner<FStat_STAT_SlateNumTickedWidgets,1> *)
                          &StatPtr_STAT_SlateNumTickedWidgets);
      local_680 = *(TVector2<float>_u_0 *)(TVar38.StatIdPtr)->Name;
      FThreadStats::AddMessage<__int64>((FName)local_680,Add,1,false);
    }
    TVar38 = FThreadSafeStaticStatInner<FStat_STAT_SlateTickWidgets,1>::GetStatId
                       ((FThreadSafeStaticStatInner<FStat_STAT_SlateTickWidgets,1> *)
                        &StatPtr_STAT_SlateTickWidgets);
    local_468.Impl._Line = 0x5a3;
    local_468.Impl._Column = 4;
    local_648.StatId.ComparisonIndex.Value = 0;
    local_648.StatId.Number = 0;
    local_648.EmittedEvent = 0;
    local_468.Impl._File =
         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\SWidget.cpp"
    ;
    local_468.Impl._Function =
         "int __cdecl SWidget::Paint(const class FPaintArgs &,const struct FGeometry &,const class FSlateRect &,class FSlateWindowElementList &,int,const class FWidgetStyle &,bool) const"
    ;
    FCycleCounter::Start
              (&local_648,*(TStatIdData **)&(TVar38.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false
               ,&local_468);
    FScopeCycleCounterSWidget::FScopeCycleCounterSWidget
              ((FScopeCycleCounterSWidget *)&local_550,this);
    (**(code **)(this->_padding_ + 0x10))
              (this,&local_228,SUB84(param_1->CurrentTime,0),param_1->DeltaTime);
    if ((local_548 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_548 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_548 & 4) != 0) {
      FThreadStats::AddMessage(local_550,CycleScopeEnd);
    }
    local_548 = 0;
    if ((local_648.EmittedEvent & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_648.EmittedEvent & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_648.EmittedEvent & 4) != 0) {
      FThreadStats::AddMessage(local_648.StatId,CycleScopeEnd);
    }
    local_648.EmittedEvent = '\0';
    param_1 = local_5b8;
  }
  SlateTraceDetail::GScopedUpdateCount = SlateTraceDetail::GScopedUpdateCount - 1;
  if (EVar55 != None) {
    QueryPerformanceCounter(&local_4f0);
    FSlateTrace::OutputWidgetUpdate(this,LVar60.QuadPart,local_4f0.QuadPart,EVar55,1);
  }
  uVar8 = param_1->field_0x2c;
  if ((param_1->bInheritedHittestability == 0) || (((byte)this->VisibilityAttribute & 0x10) == 0)) {
    bVar59 = 0;
  }
  else {
    bVar59 = 1;
  }
  local_664 = (uint)bVar26;
  if (GDebugCulling != false) {
    local_664 = 0;
  }
  pSVar11 = local_5b8->PaintParentPtr;
  if ((pSVar11 == this) &&
     (bVar25 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_1812382117653379657>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\SWidget.cpp"
                          ,0x5b7,"PaintParentPtr != this"), bVar25)) {
    pcVar17 = (code *)swi(3);
    iVar31 = (*pcVar17)();
    return iVar31;
  }
  if (pSVar11 != (SWidget *)0x0) {
    pTVar39 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&pSVar11->_padding_,&local_370);
    TWeakPtr<SWidget,1>::operator=<SWidget>(&(this->PersistentState).PaintParent,pTVar39);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_370.SharedReferenceCount.ReferenceController);
  }
  pTVar40 = FSlateWindowElementList::GetClippingState(local_660,&local_278);
  pTVar1 = &(this->PersistentState).InitialClipState;
  if (pTVar40 != pTVar1) {
    bVar25 = (this->PersistentState).InitialClipState.bIsSet;
    if (pTVar40->bIsSet == false) {
      if (bVar25 != false) {
        pFVar12 = (pTVar1->TypedValue).StencilQuads.AllocatorInstance.Data;
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar12);
        }
        (this->PersistentState).InitialClipState.bIsSet = false;
      }
    }
    else {
      if ((bVar25 != false) &&
         (pFVar12 = (pTVar1->TypedValue).StencilQuads.AllocatorInstance.Data,
         pFVar12 != (FScriptContainerElement *)0x0)) {
        FMemory::Free(pFVar12);
      }
      (pTVar1->TypedValue).StencilQuads.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar1->TypedValue).StencilQuads.AllocatorInstance.Data =
           (pTVar40->TypedValue).StencilQuads.AllocatorInstance.Data;
      (pTVar40->TypedValue).StencilQuads.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->PersistentState).InitialClipState.TypedValue.StencilQuads.ArrayNum =
           (pTVar40->TypedValue).StencilQuads.ArrayNum;
      (this->PersistentState).InitialClipState.TypedValue.StencilQuads.ArrayMax =
           (pTVar40->TypedValue).StencilQuads.ArrayMax;
      (pTVar40->TypedValue).StencilQuads.ArrayNum = 0;
      (pTVar40->TypedValue).StencilQuads.ArrayMax = 0;
      (this->PersistentState).InitialClipState.TypedValue.ScissorRect.bIsSet = false;
      bVar25 = (pTVar40->TypedValue).ScissorRect.bIsSet;
      (this->PersistentState).InitialClipState.TypedValue.ScissorRect.bIsSet = bVar25;
      if (bVar25 != false) {
        TVar19 = (pTVar40->TypedValue).ScissorRect.TypedValue.TopRight.field0_0x0;
        (this->PersistentState).InitialClipState.TypedValue.ScissorRect.TypedValue.TopLeft.
        field0_0x0 = (pTVar40->TypedValue).ScissorRect.TypedValue.TopLeft.field0_0x0;
        (this->PersistentState).InitialClipState.TypedValue.ScissorRect.TypedValue.TopRight.
        field0_0x0 = TVar19;
        TVar19 = (pTVar40->TypedValue).ScissorRect.TypedValue.BottomRight.field0_0x0;
        (this->PersistentState).InitialClipState.TypedValue.ScissorRect.TypedValue.BottomLeft.
        field0_0x0 = (pTVar40->TypedValue).ScissorRect.TypedValue.BottomLeft.field0_0x0;
        (this->PersistentState).InitialClipState.TypedValue.ScissorRect.TypedValue.BottomRight.
        field0_0x0 = TVar19;
        *(undefined4 *)
         &(this->PersistentState).InitialClipState.TypedValue.ScissorRect.TypedValue.field_0x20 =
             *(undefined4 *)&(pTVar40->TypedValue).ScissorRect.TypedValue.field_0x20;
      }
      (this->PersistentState).InitialClipState.TypedValue.Flags = (pTVar40->TypedValue).Flags;
      (this->PersistentState).InitialClipState.TypedValue.Debugging_StateIndex =
           (pTVar40->TypedValue).Debugging_StateIndex;
      (this->PersistentState).InitialClipState.TypedValue.Debugging_StateIndexFromFrame =
           (pTVar40->TypedValue).Debugging_StateIndexFromFrame;
      (this->PersistentState).InitialClipState.bIsSet = true;
    }
  }
  if ((local_278.bIsSet != false) &&
     (local_278.TypedValue.StencilQuads.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_278.TypedValue.StencilQuads.AllocatorInstance.Data);
  }
  pFVar24 = local_5b8;
  (this->PersistentState).LayerId = param_5;
  bVar26 = (this->PersistentState).field_0x12b & 0xfe | param_7;
  bVar26 = (uVar8 * '\x02' ^ bVar26) & 2 ^ bVar26;
  (this->PersistentState).field_0x12b = bVar26;
  (this->PersistentState).field_0x12b = (local_5b8->field_0x2c * '\x02' ^ bVar26) & 4 ^ bVar26;
  FGeometry::operator=(&(this->PersistentState).AllottedGeometry,local_678);
  FGeometry::operator=(&(this->PersistentState).DesktopGeometry,&local_228);
  pFVar61 = local_660;
  uVar6 = *(undefined8 *)((longlong)&(local_5c8->ColorAndOpacityTint).field0_0x0 + 8);
  *(undefined8 *)&(this->PersistentState).WidgetStyle.ColorAndOpacityTint.field0_0x0 =
       *(undefined8 *)&(local_5c8->ColorAndOpacityTint).field0_0x0;
  *(undefined8 *)((longlong)&(this->PersistentState).WidgetStyle.ColorAndOpacityTint.field0_0x0 + 8)
       = uVar6;
  uVar6 = *(undefined8 *)((longlong)&(local_5c8->ForegroundColor).field0_0x0 + 8);
  *(undefined8 *)&(this->PersistentState).WidgetStyle.ForegroundColor.field0_0x0 =
       *(undefined8 *)&(local_5c8->ForegroundColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->PersistentState).WidgetStyle.ForegroundColor.field0_0x0 + 8) =
       uVar6;
  uVar6 = *(undefined8 *)((longlong)&(local_5c8->SubduedForeground).field0_0x0 + 8);
  *(undefined8 *)&(this->PersistentState).WidgetStyle.SubduedForeground.field0_0x0 =
       *(undefined8 *)&(local_5c8->SubduedForeground).field0_0x0;
  *(undefined8 *)((longlong)&(this->PersistentState).WidgetStyle.SubduedForeground.field0_0x0 + 8) =
       uVar6;
  fVar62 = local_580->Top;
  fVar63 = local_580->Right;
  fVar4 = local_580->Bottom;
  (this->PersistentState).CullingBounds.Left = local_580->Left;
  (this->PersistentState).CullingBounds.Top = fVar62;
  (this->PersistentState).CullingBounds.Right = fVar63;
  (this->PersistentState).CullingBounds.Bottom = fVar4;
  EVar27 = FSlateWindowElementList::GetPixelSnappingMethod(local_660);
  (this->PersistentState).InitialPixelSnappingMethod = EVar27;
  iVar31 = pFVar24->CurrentGrid->CurrentUserIndex;
  if ((0x7f < iVar31) &&
     (bVar25 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_1812382117653379634>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\SWidget.cpp"
                          ,0x5ce,"IncomingUserIndex <= std::numeric_limits<int8>::max()"), bVar25))
  {
    pcVar17 = (code *)swi(3);
    iVar31 = (*pcVar17)();
    return iVar31;
  }
  (this->PersistentState).IncomingUserIndex = (schar)iVar31;
  (this->PersistentState).IncomingFlowDirection = GSlateFlowDirection;
  bVar25 = FSlateWindowElementList::GetIsInGameLayer(pFVar61);
  (this->PersistentState).bIsInGameLayer = '\0';
  puVar3 = &(this->PersistentState).field_0x12b;
  *puVar3 = *puVar3 | bVar25 << 3;
  local_3d0 = pFVar24->RootGrid;
  pFStack_3c8 = pFVar24->CurrentGrid;
  local_3c0 = (pFVar24->WindowOffset).field0_0x0;
  local_3b0 = *(undefined1 *)&pFVar24->CurrentTime;
  uStack_3af = *(undefined1 *)((longlong)&pFVar24->CurrentTime + 1);
  uStack_3ae = *(undefined1 *)((longlong)&pFVar24->CurrentTime + 2);
  uStack_3ad = *(undefined1 *)((longlong)&pFVar24->CurrentTime + 3);
  uStack_3ac = *(undefined1 *)((longlong)&pFVar24->CurrentTime + 4);
  uStack_3ab = *(undefined1 *)((longlong)&pFVar24->CurrentTime + 5);
  uStack_3aa = *(undefined1 *)((longlong)&pFVar24->CurrentTime + 6);
  uStack_3a9 = *(undefined1 *)((longlong)&pFVar24->CurrentTime + 7);
  uStack_3a8 = *(undefined1 *)&pFVar24->DeltaTime;
  uStack_3a7 = *(undefined1 *)((longlong)&pFVar24->DeltaTime + 1);
  uStack_3a6 = *(undefined1 *)((longlong)&pFVar24->DeltaTime + 2);
  uStack_3a5 = *(undefined1 *)((longlong)&pFVar24->DeltaTime + 3);
  uStack_3a3 = pFVar24->field_0x2d;
  uStack_3a2 = pFVar24->field_0x2e;
  uStack_3a1 = pFVar24->field_0x2f;
  bStack_3a4 = pFVar24->field_0x2c & 0xfe | bVar59;
  pSStack_3b8 = this;
  bVar25 = FWidgetProxyHandle::IsValid(&this->FastPathProxyHandle,this);
  if (((bVar25) &&
      (bVar25 = FSlateCachedElementsHandle::HasCachedElements
                          (&(this->PersistentState).CachedElementHandle), bVar25)) &&
     (pFVar41 = FWidgetProxyHandle::GetProxy(&this->FastPathProxyHandle),
     ((pFVar41->Visibility).field0_0x0.Flags & 3) != 3)) {
    local_4e8 = this;
    `SWidget::Paint'::__l28::<lambda_1>::operator()(&local_4e8);
  }
  FSlateWindowElementList::PushPaintingWidget
            (pFVar61,this,param_5,&(this->PersistentState).CachedElementHandle);
  if (bVar59 != 0) {
    FHittestGrid::AddWidget
              (pFVar24->CurrentGrid,this,0,param_5,
               (FSlateInvalidationWidgetSortOrder)(this->FastPathProxyHandle).WidgetSortOrder.Order)
    ;
  }
  if ((char)local_664 != '\0') {
    FSlateClippingZone::FSlateClippingZone(&local_328,local_678);
    local_328.bAlwaysClip = cVar29;
    local_328.bIntersect = bVar58;
    FSlateWindowElementList::PushClip(pFVar61,&local_328);
  }
  local_685 = this->PixelSnappingMethod;
  if (local_685 != Inherit) {
    FSlateWindowElementList::PushPixelSnappingMethod(pFVar61,local_685);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FSlateDebugging::BeginWidgetPaint,(FWriteAccessScope *)&local_400);
  bVar25 = false;
  FSlateDebugging::BeginWidgetPaint._28_4_ = FSlateDebugging::BeginWidgetPaint._28_4_ + 1;
  uVar52 = FSlateDebugging::BeginWidgetPaint._16_4_ - 1;
  if (-1 < (int)uVar52) {
    lVar56 = (longlong)(int)uVar52 << 4;
    bVar25 = false;
    do {
      uVar53 = 0;
      if ((int)uVar52 < (int)FSlateDebugging::BeginWidgetPaint._16_4_) {
        uVar53 = ~uVar52 >> 0x1f;
      }
      if ((uVar53 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar17 = (code *)swi(3);
        iVar31 = (*pcVar17)();
        return iVar31;
      }
      if (((*(int *)(lVar56 + 8 + FSlateDebugging::BeginWidgetPaint._8_8_) == 0) ||
          (*(longlong **)(lVar56 + FSlateDebugging::BeginWidgetPaint._8_8_) == (longlong *)0x0)) ||
         (cVar29 = (**(code **)(**(longlong **)(lVar56 + FSlateDebugging::BeginWidgetPaint._8_8_) +
                               0x68))(), cVar29 == '\0')) {
        bVar25 = true;
      }
      lVar56 = lVar56 + -0x10;
      uVar52 = uVar52 - 1;
    } while (-1 < (int)uVar52);
  }
  FSlateDebugging::BeginWidgetPaint._28_4_ = FSlateDebugging::BeginWidgetPaint._28_4_ + -1;
  if (bVar25) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FSlateDebugging::BeginWidgetPaint,false);
  }
  if (local_400.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_400.Accessor,&local_400);
  }
  EVar9 = this->FlowDirectionPreference;
  if (EVar9 == Culture) {
    EVar30 = FLayoutLocalization::GetLocalizedLayoutDirection();
  }
  else if (EVar9 == LeftToRight) {
    EVar30 = LeftToRight;
  }
  else {
    EVar30 = GSlateFlowDirection;
    if (EVar9 == RightToLeft) {
      EVar30 = RightToLeft;
    }
  }
  local_683 = GSlateFlowDirection;
  local_170.AllocatorInstance.SecondaryData = (ForElementType<TWeakPtr<SWidget_const_,1>_>)0x0;
  local_170.ArrayNum = 0;
  local_170.ArrayMax = 0x10;
  GSlateFlowDirection = EVar30;
  if ((((GSlateIsOnFastUpdatePath != false) && (GSlateEnsureAllVisibleWidgetsPaint != false)) ||
      (GSlateEnsureOutgoingLayerId != false)) &&
     (cVar29 = (**(code **)(this->_padding_ + 0x210))(this), cVar29 == '\0')) {
    this_03 = (FChildren *)(**(code **)(this->_padding_ + 0x188))(this);
    local_4e0.DebugChildWidgetsToPaint = &local_170;
    FChildren::ForEachWidget<_SWidget::Paint_::__l43::<lambda_2>_>(this_03,&local_4e0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name1556,"UI/Slate/OnPaint");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(&local_608,LLMScope_Name1556,false,None,Default,true);
  FMemScope::FMemScope(&local_4d8,&LLMScope_Name1556,true);
  local_5c0.ComparisonIndex.Value = 0;
  local_5c0.Number = 0;
  local_670 = (FDeprecateSlateVector2D)0x0;
  local_680 = (TVector2<float>_u_0)0x0;
  if (-1 < AssetMetadataChannel->Enabled) {
    FReflectionMetaData::GetWidgetOrParentMetaData(&local_540,this);
    if (local_540.Object != (FReflectionMetaData *)0x0) {
      if ((local_540.Object == (FReflectionMetaData *)0x0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar25)) {
        pcVar17 = (code *)swi(3);
        iVar31 = (*pcVar17)();
        return iVar31;
      }
      this_04 = FWeakObjectPtr::Get(&((local_540.Object)->Asset).WeakPtr);
      if (this_04 != (UObject *)0x0) {
        if ((local_540.Object == (FReflectionMetaData *)0x0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar25)) {
          pcVar17 = (code *)swi(3);
          iVar31 = (*pcVar17)();
          return iVar31;
        }
        local_5c0 = (local_540.Object)->Name;
        pUVar42 = FWeakObjectPtr::Get(&((local_540.Object)->Class).WeakPtr);
        local_670 = *(FDeprecateSlateVector2D *)&pUVar42->field_0x18;
        pUVar43 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this_04);
        local_680 = (TVector2<float>_u_0)pUVar43->_padding_;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_540.SharedReferenceCount.ReferenceController);
  }
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_558 = 0;
    TVar44 = (TEventRef<unsigned_int>)&local_558;
  }
  else {
    TVar44 = FStringTrace::GetNameRef(local_390);
  }
  uVar6 = *(undefined8 *)TVar44;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_5b0 = 0;
    TVar44 = (TEventRef<unsigned_int>)&local_5b0;
  }
  else {
    TVar44 = FStringTrace::GetNameRef(&local_380);
  }
  uVar13 = *(undefined8 *)TVar44;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_5a8 = 0;
    TVar44 = (TEventRef<unsigned_int>)&local_5a8;
  }
  else {
    TVar44 = FStringTrace::GetNameRef(&local_378);
  }
  uVar14 = *(undefined8 *)TVar44;
  bVar25 = false;
  if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>((TLogScope<0> *)&local_1f0);
    bVar25 = true;
    *local_1f0 = (int)uVar6;
    local_1f0[1] = (int)uVar13;
    local_1f0[2] = (int)uVar14;
    *(undefined8 *)(local_1e8 + 0x28) = *(undefined8 *)(local_1e8 + 0x20);
  }
  pFVar61 = local_660;
  uVar52 = (**(code **)(this->_padding_ + 0x238))(this,&local_3d0,local_678,&local_658);
  if (bVar25) {
    lVar56 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar56 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar45 = *(FWriteBuffer **)(lVar56 + 0x20);
    if ((int)pFVar45 - *(int *)&pFVar45->Cursor < 1) {
      pFVar45 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar45->Cursor = '\n';
    pFVar45->Cursor = pFVar45->Cursor + 1;
    pFVar45->Committed = pFVar45->Cursor;
  }
  FMemScope::~FMemScope(&local_4d8);
  FLLMScope::~FLLMScope(&local_608);
  EVar55 = this->UpdateFlags;
  EVar57 = EVar55 & ~NeedsRepaint;
  this->UpdateFlags = EVar57;
  FWidgetProxyHandle::UpdateWidgetFlags(&this->FastPathProxyHandle,this,EVar55,EVar57);
  iVar31 = local_170.ArrayNum;
  this->LastPaintFrame = GFrameNumber;
  if ((GSlateIsOnFastUpdatePath != false) && (GSlateEnsureAllVisibleWidgetsPaint != false)) {
    FVar46 = (ForElementType<TWeakPtr<SWidget_const_,1>_>)&local_170;
    if (local_170.AllocatorInstance.SecondaryData !=
        (ForElementType<TWeakPtr<SWidget_const_,1>_>)0x0) {
      FVar46 = local_170.AllocatorInstance.SecondaryData;
    }
    FVar54 = (ForElementType<TWeakPtr<SWidget_const_,1>_>)
             ((longlong)FVar46 + (longlong)local_170.ArrayNum * 0x10);
    while( true ) {
      if (local_170.ArrayNum != iVar31) {
        local_688 = 0;
        `TCheckedPointerIterator<TWeakPtr<SWidget_const_,1>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_688);
      }
      pFVar61 = local_660;
      if (FVar46 == FVar54) break;
      local_620 = ((FWeakReferencer<1> *)((longlong)FVar46 + 8))->ReferenceController;
      local_628 = (SWidget *)0x0;
      if (local_620 != (TReferenceControllerBase<1> *)0x0) {
        aVar5 = local_620->SharedReferenceCount;
        do {
          if (aVar5 == (atomic<int>)0x0) {
            local_620 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_1425f2b49;
          }
          LOCK();
          aVar32 = local_620->SharedReferenceCount;
          bVar25 = aVar5 == aVar32;
          if (bVar25) {
            local_620->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
            aVar32 = aVar5;
          }
          UNLOCK();
          aVar5 = aVar32;
        } while (!bVar25);
      }
      if (local_620 != (TReferenceControllerBase<1> *)0x0) {
        local_628 = *(SWidget **)FVar46;
      }
LAB_1425f2b49:
      uVar6 = CVarSlateEnsureAllVisibleWidgetsPaint._8_8_;
      if (local_628 == (SWidget *)0x0) {
        local_598 = 0;
        EVar33 = (**(code **)(*(longlong *)CVarSlateEnsureAllVisibleWidgetsPaint._8_8_ + 0x18))
                           (CVarSlateEnsureAllVisibleWidgetsPaint._8_8_);
        IConsoleVariable::Set<bool>((IConsoleVariable *)uVar6,false,EVar33,(FName)0x0);
        local_687 = 0;
        `SWidget::Paint'::__l77::<lambda_4>::operator()(&local_687);
LAB_1425f2c22:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_620);
        FVar46 = (ForElementType<TWeakPtr<SWidget_const_,1>_>)((longlong)FVar46 + 0x10);
      }
      else {
        if ((local_628 == (SWidget *)0x0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar25)) {
          pcVar17 = (code *)swi(3);
          iVar31 = (*pcVar17)();
          return iVar31;
        }
        if ((((byte)local_628->VisibilityAttribute & 0x19) == 0) ||
           (local_628->LastPaintFrame == GFrameNumber)) goto LAB_1425f2c22;
        local_4d0 = &local_628;
        `SWidget::Paint'::__l75::<lambda_3>::operator()(&local_4d0);
        uVar6 = CVarSlateEnsureAllVisibleWidgetsPaint._8_8_;
        local_5a0 = 0;
        EVar33 = (**(code **)(*(longlong *)CVarSlateEnsureAllVisibleWidgetsPaint._8_8_ + 0x18))
                           (CVarSlateEnsureAllVisibleWidgetsPaint._8_8_);
        IConsoleVariable::Set<bool>((IConsoleVariable *)uVar6,false,EVar33,(FName)0x0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_620);
        FVar46 = (ForElementType<TWeakPtr<SWidget_const_,1>_>)((longlong)FVar46 + 0x10);
      }
    }
  }
  iVar31 = local_170.ArrayNum;
  if (GSlateEnsureOutgoingLayerId != false) {
    FVar46 = (ForElementType<TWeakPtr<SWidget_const_,1>_>)&local_170;
    if (local_170.AllocatorInstance.SecondaryData !=
        (ForElementType<TWeakPtr<SWidget_const_,1>_>)0x0) {
      FVar46 = local_170.AllocatorInstance.SecondaryData;
    }
    FVar54 = (ForElementType<TWeakPtr<SWidget_const_,1>_>)
             ((longlong)FVar46 + (longlong)local_170.ArrayNum * 0x10);
    while( true ) {
      if (local_170.ArrayNum != iVar31) {
        local_686 = 0;
        `TCheckedPointerIterator<TWeakPtr<SWidget_const_,1>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_686);
      }
      pFVar61 = local_660;
      if (FVar46 == FVar54) break;
      local_610 = ((FWeakReferencer<1> *)((longlong)FVar46 + 8))->ReferenceController;
      local_618 = (SWidget *)0x0;
      if (local_610 != (TReferenceControllerBase<1> *)0x0) {
        aVar5 = local_610->SharedReferenceCount;
        do {
          if (aVar5 == (atomic<int>)0x0) {
            local_610 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_1425f2ce9;
          }
          LOCK();
          aVar32 = local_610->SharedReferenceCount;
          bVar25 = aVar5 == aVar32;
          if (bVar25) {
            local_610->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
            aVar32 = aVar5;
          }
          UNLOCK();
          aVar5 = aVar32;
        } while (!bVar25);
      }
      if (local_610 != (TReferenceControllerBase<1> *)0x0) {
        local_618 = *(SWidget **)FVar46;
      }
LAB_1425f2ce9:
      if (local_618 != (SWidget *)0x0) {
        if ((local_618 == (SWidget *)0x0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar25)) {
          pcVar17 = (code *)swi(3);
          iVar31 = (*pcVar17)();
          return iVar31;
        }
        if (((((local_618->PersistentState).bDeferredPainting == '\0') &&
             (((byte)local_618->VisibilityAttribute & 0x19) != 0)) &&
            (local_618->LastPaintFrame == GFrameNumber)) &&
           ((int)uVar52 < (local_618->PersistentState).OutgoingLayerId)) {
          local_4c8 = &local_618;
          `SWidget::Paint'::__l93::<lambda_5>::operator()(&local_4c8);
          uVar6 = CVarSlateEnsureOutgoingLayerId._8_8_;
          local_590 = 0;
          EVar33 = (**(code **)(*(longlong *)CVarSlateEnsureOutgoingLayerId._8_8_ + 0x18))
                             (CVarSlateEnsureOutgoingLayerId._8_8_);
          IConsoleVariable::Set<bool>((IConsoleVariable *)uVar6,false,EVar33,(FName)0x0);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_610)
      ;
      FVar46 = (ForElementType<TWeakPtr<SWidget_const_,1>_>)((longlong)FVar46 + 0x10);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FSlateDebugging::EndWidgetPaint,(FWriteAccessScope *)&local_3e8);
  bVar25 = false;
  FSlateDebugging::EndWidgetPaint._28_4_ = FSlateDebugging::EndWidgetPaint._28_4_ + 1;
  uVar53 = FSlateDebugging::EndWidgetPaint._16_4_ - 1;
  if (-1 < (int)uVar53) {
    lVar56 = (longlong)(int)uVar53 << 4;
    bVar25 = false;
    do {
      uVar34 = 0;
      if ((int)uVar53 < (int)FSlateDebugging::EndWidgetPaint._16_4_) {
        uVar34 = ~uVar53 >> 0x1f;
      }
      if ((uVar34 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar17 = (code *)swi(3);
        iVar31 = (*pcVar17)();
        return iVar31;
      }
      if (((*(int *)(lVar56 + 8 + FSlateDebugging::EndWidgetPaint._8_8_) == 0) ||
          (plVar15 = *(longlong **)(lVar56 + FSlateDebugging::EndWidgetPaint._8_8_),
          plVar15 == (longlong *)0x0)) ||
         (cVar29 = (**(code **)(*plVar15 + 0x68))(plVar15,this,pFVar61,uVar52), cVar29 == '\0')) {
        bVar25 = true;
      }
      lVar56 = lVar56 + -0x10;
      uVar53 = uVar53 - 1;
    } while (-1 < (int)uVar53);
  }
  FSlateDebugging::EndWidgetPaint._28_4_ = FSlateDebugging::EndWidgetPaint._28_4_ + -1;
  if (bVar25) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FSlateDebugging::EndWidgetPaint,false);
  }
  if (local_3e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3e8.Accessor,&local_3e8);
  }
  if (GShowClipping == false) {
    if ((char)local_664 == '\0') goto LAB_1425f32aa;
  }
  else {
    if ((char)local_664 == '\0') goto LAB_1425f32aa;
    FSlateClippingZone::FSlateClippingZone((FSlateClippingZone *)&local_448._s_0,local_678);
    TVar19 = local_448;
    local_698.Data = (FScriptContainerElement *)0x0;
    local_690 = 0;
    iVar35 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&local_698,(int *)((longlong)&local_690 + 4));
    iVar31 = iVar35 + 1;
    *(TVector2<float>_u_0 *)(local_698.Data + (longlong)iVar35 * 8) = TVar19;
    local_604 = local_440;
    local_690._0_4_ = iVar31;
    if (((local_698.Data <= &local_604) &&
        (&local_604 < (TVector2<float>_u_0 *)(local_698.Data + (longlong)local_690._4_4_ * 8))) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar25)) {
      pcVar17 = (code *)swi(3);
      iVar31 = (*pcVar17)();
      return iVar31;
    }
    if ((int)local_690 == local_690._4_4_) {
      local_690._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x408,&local_698,(int *)((longlong)&local_690 + 4));
    }
    iVar31 = (int)local_690 + 1;
    *(TVector2<float>_u_0 *)(local_698.Data + (longlong)(int)local_690 * 8) = local_604;
    local_5fc = local_430;
    local_690._0_4_ = iVar31;
    if (((local_698.Data <= &local_5fc) &&
        (&local_5fc < (TVector2<float>_u_0 *)(local_698.Data + (longlong)local_690._4_4_ * 8))) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar25)) {
      pcVar17 = (code *)swi(3);
      iVar31 = (*pcVar17)();
      return iVar31;
    }
    if ((int)local_690 == local_690._4_4_) {
      local_690._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x408,&local_698,(int *)((longlong)&local_690 + 4));
    }
    iVar31 = (int)local_690 + 1;
    *(TVector2<float>_u_0 *)(local_698.Data + (longlong)(int)local_690 * 8) = local_5fc;
    local_5f4 = local_438;
    local_690._0_4_ = iVar31;
    if (((local_698.Data <= &local_5f4) &&
        (&local_5f4 < (TVector2<float>_u_0 *)(local_698.Data + (longlong)local_690._4_4_ * 8))) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar25)) {
      pcVar17 = (code *)swi(3);
      iVar31 = (*pcVar17)();
      return iVar31;
    }
    if ((int)local_690 == local_690._4_4_) {
      local_690._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x408,&local_698,(int *)((longlong)&local_690 + 4));
    }
    iVar31 = (int)local_690 + 1;
    *(TVector2<float>_u_0 *)(local_698.Data + (longlong)(int)local_690 * 8) = local_5f4;
    local_5ec = local_448;
    local_690._0_4_ = iVar31;
    if (((local_698.Data <= &local_5ec) &&
        (&local_5ec < (TVector2<float>_u_0 *)(local_698.Data + (longlong)local_690._4_4_ * 8))) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar25)) {
      pcVar17 = (code *)swi(3);
      iVar31 = (*pcVar17)();
      return iVar31;
    }
    if ((int)local_690 == local_690._4_4_) {
      local_690._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x408,&local_698,(int *)((longlong)&local_690 + 4));
    }
    afVar22 = _UNK_15076b188;
    afVar20 = ___xmm_3f80000000000000000000003f800000;
    local_4a8.ArrayNum = (int)local_690 + 1;
    local_1a8 = ___xmm_000000003f8000000000000000000000;
    uStack_1a0 = _UNK_150689538;
    local_198 = 0;
    *(TVector2<float>_u_0 *)(local_698.Data + (longlong)(int)local_690 * 8) = local_5ec;
    afVar23 = _UNK_15076b188;
    afVar21 = ___xmm_3f80000000000000000000003f800000;
    local_4a8.AllocatorInstance.Data = local_698.Data;
    local_4a8.ArrayMax = local_690._4_4_;
    local_17c = 0;
    local_698.Data = (FScriptContainerElement *)0x0;
    local_174 = local_174 & 0xfd | 1;
    local_690 = 0;
    pFVar47 = &FLinearColor::Red;
    if ((local_428 & 1) != 0) {
      pFVar47 = &FLinearColor::Yellow;
    }
    local_190 = 0;
    ___xmm_3f80000000000000000000003f800000 = afVar20[0];
    _UNK_15076b184 = afVar20[1];
    local_18c[0] = ___xmm_3f80000000000000000000003f800000;
    local_18c[1] = _UNK_15076b184;
    _UNK_15076b188 = afVar22[0];
    _UNK_15076b18c = afVar22[1];
    afStack_184[0] = _UNK_15076b188;
    afStack_184[1] = _UNK_15076b18c;
    local_588 = 0;
    ___xmm_3f80000000000000000000003f800000 = afVar21;
    _UNK_15076b188 = afVar23;
    FSlateDrawElement::MakeLines
              (pFVar61,uVar52,(FPaintGeometry *)&local_1a8._s_0,&local_4a8,None,pFVar47,true,
               __real_40000000);
    if (local_698.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_698.Data);
    }
  }
  FSlateWindowElementList::PopClip(pFVar61);
LAB_1425f32aa:
  if (local_685 != Inherit) {
    FSlateWindowElementList::PopPixelSnappingMethod(pFVar61);
  }
  if ((this->bCanSupportFocus != 0) &&
     (cVar29 = (**(code **)(this->_padding_ + 0x198))(this), cVar29 != '\0')) {
    pFVar48 = FSlateApplicationBase::Get();
    pcVar17 = *(code **)(*(longlong *)pFVar48 + 0x1a8);
    pTVar49 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_420);
    pTVar16 = (pTVar49->SharedReferenceCount).ReferenceController;
    pSVar11 = pTVar49->Object;
    if (pTVar16 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_420.SharedReferenceCount.ReferenceController);
    }
    else {
      LOCK();
      pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_420.SharedReferenceCount.ReferenceController);
      LOCK();
      pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_530 = pSVar11;
    local_528 = pTVar16;
    cVar29 = (*pcVar17)(pFVar48,&local_530);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
    if ((cVar29 != '\0') &&
       (this_05 = (FSlateBrush *)(**(code **)(this->_padding_ + 0x220))(this),
       this_05 != (FSlateBrush *)0x0)) {
      pFVar47 = FSlateBrush::GetTint(this_05,&local_2a0,local_5c8);
      local_1d4 = 0;
      local_1e0 = (local_678->AbsolutePosition).field0_0x0;
      local_1d8 = local_678->Scale;
      local_1b4 = (local_678->AccumulatedRenderTransform).Trans.field0_0x0;
      local_1cc = local_678->Size;
      local_1c4 = (local_678->AccumulatedRenderTransform).M.M[0];
      afStack_1bc = (local_678->AccumulatedRenderTransform).M.M[1];
      local_1ac = local_678->bHasRenderTransform * '\x02' | local_1ac & 0xfc;
      FSlateDrawElement::MakeBox
                (pFVar61,uVar52,(FPaintGeometry *)&local_1e0._s_0,this_05,None,pFVar47);
    }
  }
  FSlateWindowElementList::PopPaintingWidget(pFVar61,&local_410,this);
  if (pFVar61->bNeedsDeferredResolve != false) {
    uVar52 = FSlateWindowElementList::PaintDeferred(pFVar61,uVar52,local_580);
  }
  UpdateWidgetProxy(this,uVar52,&local_410);
  FSlateDebugging::BroadcastWidgetUpdatedByPaint(this,local_684);
  if (local_410.Ptr.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &(local_410.Ptr.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar5 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar5 == (atomic<int>)0x1) {
      (**(code **)((local_410.Ptr.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_410.Ptr.WeakReferenceCount.ReferenceController,1);
    }
  }
  FVar46 = (ForElementType<TWeakPtr<SWidget_const_,1>_>)&local_170;
  if (local_170.AllocatorInstance.SecondaryData != (ForElementType<TWeakPtr<SWidget_const_,1>_>)0x0)
  {
    FVar46 = local_170.AllocatorInstance.SecondaryData;
  }
  DestructItems<TWeakPtr<SWidget_const_,1>,int>
            ((TWeakPtr<SWidget_const_,1> *)FVar46,local_170.ArrayNum);
  if (local_170.AllocatorInstance.SecondaryData != (ForElementType<TWeakPtr<SWidget_const_,1>_>)0x0)
  {
    FMemory::Free((void *)local_170.AllocatorInstance.SecondaryData);
  }
  SlateTraceDetail::GScopedPaintCount = SlateTraceDetail::GScopedPaintCount - 1;
  GSlateFlowDirection = local_683;
  if (-1 < SlateChannel->Enabled) {
    QueryPerformanceCounter(&local_4c0);
    uVar50 = (ulonglong)SlateTraceDetail::WidgetUpdateStepsIndex;
    uVar53 = SlateTraceDetail::GFramePaintCount - local_5d0;
    if (0x3fff < uVar50 + 9) {
      SlateTraceDetail::FlushWidgetUpdateStepsBuffer();
      uVar50 = (ulonglong)SlateTraceDetail::WidgetUpdateStepsIndex;
    }
    bVar25 = SlateTraceDetail::GScopedPaintCount == 0;
    SlateTraceDetail::WidgetUpdateStepsBuffer[uVar50] =
         SlateTraceDetail::kWidgetUpdateStepsCommand_EndPaint;
    SlateTraceDetail::WidgetUpdateStepsIndex = (int)uVar50 + 9;
    ((LARGE_INTEGER *)(SlateTraceDetail::WidgetUpdateStepsBuffer + ((int)uVar50 + 1)))->QuadPart =
         (LONGLONG)local_4c0;
    if (bVar25) {
      EVar55 = NeedsRepaint;
      if (this->bCachedVolatile != '\0') {
        EVar55 = NeedsVolatilePaint;
      }
      FSlateTrace::OutputWidgetUpdate(this,local_578.QuadPart,local_4c0.QuadPart,EVar55,uVar53);
    }
  }
  return uVar52;
}

// Prepass_ChildLoop @ 1425f43a0

void __thiscall SWidget::Prepass_ChildLoop(SWidget *this,float param_1,FChildren *param_2)

{
  int local_res10 [6];
  <lambda_1> local_28;
  
  local_28.ChildIndex = local_res10;
  local_res10[0] = 0;
  local_28.Self = this;
  local_28.InLayoutScaleMultiplier = param_1;
  FChildren::ForEachWidget<_SWidget::Prepass_ChildLoop_::__l2::<lambda_1>_&>(param_2,&local_28);
  return;
}

// Prepass_Internal @ 1425f43e0

void __thiscall SWidget::Prepass_Internal(SWidget *this,float param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FChildren *this_00;
  float fVar7;
  int local_res10 [2];
  <lambda_1> local_38 [2];
  
  TMulticastDelegate<void___cdecl(SWidget_const_*),FDefaultDelegateUserPolicy>::Broadcast
            (&FSlateDebugging::BeginWidgetPrepass,this);
  puVar1 = &this->field_0x31;
  this->bPrepassLayoutScaleMultiplierSet = '\x01';
  cVar3 = '\x01';
  this->PrepassLayoutScaleMultiplierValue = param_1;
  if ((bool)this->bHasCustomPrepass) {
    cVar3 = (**(code **)(this->_padding_ + 0x160))(this,param_1);
  }
  if ((this->bCanHaveChildren != '\0') && (cVar3 != '\0')) {
    this_00 = (FChildren *)(**(code **)(this->_padding_ + 0x180))(this);
    iVar5 = (**(code **)this_00->_padding_)(this_00);
    local_38[0].ChildIndex = local_res10;
    local_res10[0] = 0;
    local_38[0].Self = this;
    local_38[0].InLayoutScaleMultiplier = param_1;
    FChildren::ForEachWidget<_SWidget::Prepass_ChildLoop_::__l2::<lambda_1>_&>(this_00,local_38);
    iVar6 = (**(code **)this_00->_padding_)(this_00);
    if ((iVar5 != iVar6) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1812382117653379366>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\SWidget.cpp"
                           ,0x6da,"NumChildren == MyChildren->Num()"), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  fVar7 = __real_3f800000;
  if (this->bPrepassLayoutScaleMultiplierSet != '\0') {
    fVar7 = this->PrepassLayoutScaleMultiplierValue;
  }
  (**(code **)(this->_padding_ + 0x168))(this,fVar7);
  this->bNeedsPrepass = '\0';
  this->LastPrepassFrame = GFrameNumber;
  TMulticastDelegate<void___cdecl(SWidget_const_*),FDefaultDelegateUserPolicy>::Broadcast
            (&FSlateDebugging::EndWidgetPrepass,this);
  return;
}

// PrivateRegisterAttributes @ 1425f4ba0

void __cdecl SWidget::PrivateRegisterAttributes(FInitializer *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  FName *pFVar6;
  FName *local_res10;
  FName local_res18;
  FName local_res20;
  ForAnyElementType local_180;
  ulonglong uStack_178;
  EInvalidateWidgetReason local_170;
  ForAnyElementType local_168;
  ulonglong uStack_160;
  EInvalidateWidgetReason local_158;
  ForAnyElementType local_150;
  ulonglong uStack_148;
  EInvalidateWidgetReason local_140;
  ForAnyElementType local_138;
  ulonglong uStack_130;
  EInvalidateWidgetReason local_128;
  ForAnyElementType local_120;
  ulonglong uStack_118;
  FAttributeEntry local_110;
  undefined1 local_100 [24];
  undefined1 local_e8 [24];
  undefined1 local_d0 [24];
  undefined1 local_b8 [24];
  undefined1 local_a0 [24];
  FName local_88;
  FName local_80;
  FName local_78;
  FAttributeEntry local_70;
  FAttributeEntry local_60;
  FAttributeEntry local_50;
  FAttributeEntry local_40;
  
  local_180.Data = (FScriptContainerElement *)0x0;
  uStack_178 = 0;
  pFVar6 = ::FName::FName(&local_res18,"Visibility");
  local_100[0] = Visibility;
  local_100._8_8_ = local_180.Data;
  local_100._16_4_ = (int)uStack_178;
  FSlateAttributeDescriptor::AddMemberAttribute
            (param_1->Descriptor,&local_110,*pFVar6,0x39,
             (FInvalidateWidgetReasonAttribute *)local_100);
  if ((-1 < local_110.AttributeIndex) &&
     (iVar1 = ((local_110.Descriptor)->Attributes).ArrayNum, local_110.AttributeIndex < iVar1)) {
    uVar5 = 0;
    if (local_110.AttributeIndex < iVar1) {
      uVar5 = (uint)~local_110.AttributeIndex >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar6 = (FName *)(((local_110.Descriptor)->Attributes).AllocatorInstance.Data +
                      (longlong)local_110.AttributeIndex * 0x58);
    ::FName::Equals(*pFVar6,"Visibility");
    if (((pFVar6[5].ComparisonIndex.Value & 0x20) == 0) &&
       (((pFVar6[7].ComparisonIndex.Value == 0 || (pFVar6[6] == (FName)0x0)) ||
        (cVar4 = (**(code **)(*(longlong *)pFVar6[6] + 0x38))(), cVar4 == '\0')))) {
      local_res10 = pFVar6;
      `FSlateAttributeDescriptor::SetAffectVisibility'::__l17::<lambda_1>::operator()(&local_res10);
    }
    *(undefined1 *)((longlong)&pFVar6[10].ComparisonIndex.Value + 1) = 1;
  }
  if ((int)uStack_178 == 0) {
LAB_1425f4d26:
    if (local_180.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Data);
    }
  }
  else if (local_180.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_180.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_180,0,0,0x10);
    uStack_178 = uStack_178 & 0xffffffff00000000;
    goto LAB_1425f4d26;
  }
  local_170 = None;
  local_168.Data = (FScriptContainerElement *)0x0;
  uStack_160 = 0;
  pFVar6 = ::FName::FName(&local_res20,"EnabledState");
  local_e8[0] = local_170;
  local_e8._8_8_ = local_168.Data;
  local_e8._16_4_ = (int)uStack_160;
  FSlateAttributeDescriptor::AddMemberAttribute
            (param_1->Descriptor,&local_70,*pFVar6,0x3a,(FInvalidateWidgetReasonAttribute *)local_e8
            );
  if ((int)uStack_160 == 0) {
LAB_1425f4dc7:
    if (local_168.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data);
    }
  }
  else if (local_168.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_168.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_168,0,0,0x10);
    uStack_160 = uStack_160 & 0xffffffff00000000;
    goto LAB_1425f4dc7;
  }
  local_158 = None;
  local_150.Data = (FScriptContainerElement *)0x0;
  uStack_148 = 0;
  pFVar6 = ::FName::FName(&local_88,"Hovered");
  local_d0[0] = local_158;
  local_d0._8_8_ = local_150.Data;
  local_d0._16_4_ = (int)uStack_148;
  FSlateAttributeDescriptor::AddMemberAttribute
            (param_1->Descriptor,&local_60,*pFVar6,0x3b,(FInvalidateWidgetReasonAttribute *)local_d0
            );
  if ((int)uStack_148 == 0) {
LAB_1425f4e65:
    if (local_150.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data);
    }
  }
  else if (local_150.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_150.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_150,0,0,0x10);
    uStack_148 = uStack_148 & 0xffffffff00000000;
    goto LAB_1425f4e65;
  }
  local_140 = RenderTransform|Layout;
  local_138.Data = (FScriptContainerElement *)0x0;
  uStack_130 = 0;
  pFVar6 = ::FName::FName(&local_80,"RenderTransform");
  local_b8[0] = local_140;
  local_b8._8_8_ = local_138.Data;
  local_b8._16_4_ = (int)uStack_130;
  FSlateAttributeDescriptor::AddMemberAttribute
            (param_1->Descriptor,&local_50,*pFVar6,0x188,
             (FInvalidateWidgetReasonAttribute *)local_b8);
  if ((int)uStack_130 != 0) {
    if (local_138.Data == (FScriptContainerElement *)0x0) goto LAB_1425f4f03;
    (*(code *)**(undefined8 **)local_138.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_138,0,0,0x10);
    uStack_130 = uStack_130 & 0xffffffff00000000;
  }
  if (local_138.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data);
  }
LAB_1425f4f03:
  local_128 = RenderTransform|Layout;
  local_120.Data = (FScriptContainerElement *)0x0;
  uStack_118 = 0;
  pFVar6 = ::FName::FName(&local_78,"RenderTransformPivot");
  local_a0[0] = local_128;
  local_a0._8_8_ = local_120.Data;
  local_a0._16_4_ = (int)uStack_118;
  FSlateAttributeDescriptor::AddMemberAttribute
            (param_1->Descriptor,&local_40,*pFVar6,0x178,
             (FInvalidateWidgetReasonAttribute *)local_a0);
  if (((int)uStack_118 != 0) && (local_120.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_120.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_120,0,0,0x10);
    uStack_118 = uStack_118 & 0xffffffff00000000;
  }
  if (local_120.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data);
  }
  return;
}

// RegisterActiveTimer @ 1425f6090

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSharedRef<FActiveTimerHandle,1> * __thiscall
SWidget::RegisterActiveTimer
          (SWidget *this,TSharedRef<FActiveTimerHandle,1> *__return_storage_ptr__,float param_1,
          TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
          *param_2)

{
  int *piVar1;
  EWidgetUpdateFlags EVar2;
  FActiveTimersMetaData *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FSlateApplicationBase *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy> *pTVar11;
  TSharedRef<FActiveTimerHandle,1> *pTVar12;
  TSharedPtr<UE::Slate::FActiveTimersMetaData,1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  EWidgetUpdateFlags EVar15;
  TReferenceControllerBase<1> *pTVar16;
  double dVar17;
  TSharedRef<ISlateMetaData,1> local_78;
  TSharedPtr<UE::Slate::FActiveTimersMetaData,1> local_68;
  undefined1 local_58 [64];
  
  pFVar9 = FSlateApplicationBase::Get();
  dVar17 = (double)(**(code **)(*(longlong *)pFVar9 + 0x60))(pFVar9);
  pTVar10 = ::operator_new(0x40);
  pTVar14 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FActiveTimerHandle *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar10->SharedReferenceCount = (atomic<int>)0x1;
    pTVar10->WeakReferenceCount = (atomic<int>)0x1;
    pTVar10->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFActiveTimerHandle___00_SharedPointerInternals__6B_;
    pTVar11 = TDelegate<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
              ::
              TDelegate<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
                        (local_58,param_2);
    FActiveTimerHandle::FActiveTimerHandle
              ((FActiveTimerHandle *)(pTVar10 + 1),param_1,pTVar11,dVar17 + (double)param_1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar10;
    __return_storage_ptr__->Object = (FActiveTimerHandle *)(pTVar10 + 1);
    if (((FActiveTimerHandle *)(pTVar10 + 1) == (FActiveTimerHandle *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pTVar12 = (TSharedRef<FActiveTimerHandle,1> *)(*pcVar6)();
      return pTVar12;
    }
  }
  pFVar9 = FSlateApplicationBase::Get();
  FSlateApplicationBase::RegisterActiveTimer(pFVar9,__return_storage_ptr__);
  if (this->bHasActiveTimers == '\0') {
    pTVar10 = ::operator_new(0x28);
    if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
      pTVar16 = (TReferenceControllerBase<1> *)&DAT_00000010;
    }
    else {
      pTVar10->SharedReferenceCount = (atomic<int>)0x1;
      pTVar16 = pTVar10 + 1;
      pTVar10->WeakReferenceCount = (atomic<int>)0x1;
      pTVar10->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFActiveTimersMetaData_Slate_UE___00_SharedPointerInternals__6B_
      ;
      pTVar10[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar10[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar10[2]._padding_ = 0;
      pTVar10[1]._padding_ = (longlong)&___7FActiveTimersMetaData_Slate_UE__6B_;
      pTVar14 = pTVar10;
      if ((pTVar16 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar12 = (TSharedRef<FActiveTimerHandle,1> *)(*pcVar6)();
        return pTVar12;
      }
    }
    if (((*(TSharedRef<FActiveTimerHandle,1> **)&pTVar16->SharedReferenceCount <=
          __return_storage_ptr__) &&
        (__return_storage_ptr__ <
         *(TSharedRef<FActiveTimerHandle,1> **)&pTVar16->SharedReferenceCount +
         *(int *)((longlong)&pTVar16[1]._padding_ + 4))) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      pTVar12 = (TSharedRef<FActiveTimerHandle,1> *)(*pcVar6)();
      return pTVar12;
    }
    iVar8 = (int)pTVar16[1]._padding_;
    piVar1 = (int *)((longlong)&pTVar16[1]._padding_ + 4);
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&pTVar16->SharedReferenceCount,piVar1);
    }
    *(int *)&pTVar16[1]._padding_ = iVar8 + 1;
    lVar5 = *(longlong *)&pTVar16->SharedReferenceCount;
    *(FActiveTimerHandle **)(lVar5 + (longlong)iVar8 * 0x10) = __return_storage_ptr__->Object;
    pTVar10 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)(lVar5 + 8 + (longlong)iVar8 * 0x10) = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_78.Object = (ISlateMetaData *)pTVar16;
    local_78.SharedReferenceCount.ReferenceController = pTVar14;
    AddMetadataInternal(this,&local_78);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
    this->bHasActiveTimers = '\x01';
    local_68.SharedReferenceCount.ReferenceController = pTVar14;
  }
  else {
    pTVar13 = GetMetaData<UE::Slate::FActiveTimersMetaData>(this,&local_68);
    if ((pTVar13->Object == (FActiveTimersMetaData *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pTVar12 = (TSharedRef<FActiveTimerHandle,1> *)(*pcVar6)();
      return pTVar12;
    }
    pFVar3 = pTVar13->Object;
    pTVar12 = (TSharedRef<FActiveTimerHandle,1> *)(pFVar3->ActiveTimers).AllocatorInstance.Data;
    if (((pTVar12 <= __return_storage_ptr__) &&
        (__return_storage_ptr__ < pTVar12 + (pFVar3->ActiveTimers).ArrayMax)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      pTVar12 = (TSharedRef<FActiveTimerHandle,1> *)(*pcVar6)();
      return pTVar12;
    }
    iVar8 = (pFVar3->ActiveTimers).ArrayNum;
    piVar1 = &(pFVar3->ActiveTimers).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(pFVar3->ActiveTimers).AllocatorInstance,piVar1);
    }
    (pFVar3->ActiveTimers).ArrayNum = iVar8 + 1;
    pFVar4 = (pFVar3->ActiveTimers).AllocatorInstance.Data;
    *(FActiveTimerHandle **)(pFVar4 + (longlong)iVar8 * 0x10) = __return_storage_ptr__->Object;
    pTVar14 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)(pFVar4 + (longlong)iVar8 * 0x10 + 8) = pTVar14;
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  EVar2 = this->UpdateFlags;
  EVar15 = EVar2 | NeedsActiveTimerUpdate;
  this->UpdateFlags = EVar15;
  FWidgetProxyHandle::UpdateWidgetFlags(&this->FastPathProxyHandle,this,EVar2,EVar15);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  if (*(void **)&param_2->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return __return_storage_ptr__;
}

// SWidgetConstruct @ 1425fa4a0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall SWidget::SWidgetConstruct(SWidget *this,FSlateBaseNamedArgs *param_1)

{
  TDelegate<TSharedPtr<IToolTip,1>___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  TArray<TSharedRef<ISlateMetaData,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSlateToolTipMetaData *pFVar4;
  IToolTip *pIVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TSharedPtr<FSlateToolTipMetaData,1> *pTVar10;
  FSlateApplicationBase *pFVar11;
  undefined8 *puVar12;
  TDelegate<TSharedPtr<IToolTip,1>___cdecl(void),FDefaultDelegateUserPolicy> *this_01;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  SWidget *local_res18;
  undefined1 local_268 [8];
  ForAnyElementType local_260;
  int local_258;
  IToolTip *local_250;
  FSharedReferencer<1> local_248;
  bool local_240;
  undefined1 local_238 [8];
  ForAnyElementType FStack_230;
  ulonglong local_228;
  FText local_220;
  undefined1 local_210;
  undefined1 local_208 [8];
  ForAnyElementType FStack_200;
  ulonglong local_1f8;
  undefined1 local_1f0 [32];
  undefined1 local_1d0 [8];
  ForAnyElementType FStack_1c8;
  int local_1c0;
  TRefCountPtr<ITextData> local_1b8;
  uint local_1b0;
  bool local_1a8;
  undefined1 local_1a0 [8];
  ForAnyElementType FStack_198;
  int local_190;
  undefined1 local_188 [8];
  undefined1 local_180 [24];
  FDestructionSentinel local_168;
  FDestructionSentinel local_150;
  FDestructionSentinel local_138;
  FDestructionSentinel local_120;
  FDestructionSentinel local_108;
  undefined1 local_f0 [32];
  undefined1 local_d0 [24];
  TVector2<double>_u_0 local_b8;
  undefined1 local_a8;
  undefined1 local_a0 [24];
  IToolTip *local_88;
  TReferenceControllerBase<1> *pTStack_80;
  TSharedPtr<FSlateToolTipMetaData,1> local_78;
  TSharedPtr<FSlateToolTipMetaData,1> local_68;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  FReadAccessScope local_48;
  
  local_188[0] = (param_1->_IsEnabled).Value;
  local_188[1] = (param_1->_IsEnabled).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_180,
             &(param_1->_IsEnabled).Getter);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->EnabledStateAttribute,this,(TAttribute<bool> *)local_188,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_180);
  if ((void *)local_180._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_180._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_180);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->VisibilityAttribute,this,&param_1->_Visibility,None);
  this->RenderOpacity = param_1->_RenderOpacity;
  local_f0[0x18] = (param_1->_RenderTransform).Value.bIsSet;
  if (local_f0[0x18] != false) {
    local_f0._0_8_ = (param_1->_RenderTransform).Value.TypedValue.M.M[0];
    local_f0._8_8_ = (param_1->_RenderTransform).Value.TypedValue.M.M[1];
    local_f0._16_8_ = (param_1->_RenderTransform).Value.TypedValue.Trans.field0_0x0;
  }
  local_f0[0x1c] = (param_1->_RenderTransform).bIsSet;
  TDelegate<TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy> *)
             local_d0,&(param_1->_RenderTransform).Getter);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,TOptional<TTransform2<float>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,TOptional<TTransform2<float>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->RenderTransformAttribute,this,
           (TAttribute<TOptional<TTransform2<float>_>_> *)local_f0,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_d0);
  if ((void *)local_d0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_d0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_d0);
  local_b8._s_0.X = (param_1->_RenderTransformPivot).Value.field0_0x0._s_0.X;
  local_b8._s_0.Y = (param_1->_RenderTransformPivot).Value.field0_0x0._s_0.Y;
  local_a8 = (param_1->_RenderTransformPivot).bIsSet;
  TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy> *)
             local_a0,&(param_1->_RenderTransformPivot).Getter);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->RenderTransformPivotAttribute,this,
           (TAttribute<UE::Math::TVector2<double>_> *)&local_b8._s_0,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_a0);
  if ((void *)local_a0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_a0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a0);
  pTVar1 = &this->MetaData;
  this->Tag = param_1->_Tag;
  this->field_0x30 = this->field_0x30 ^ (param_1->_ForceVolatile << 4 ^ this->field_0x30) & 0x10U;
  this->Clipping = param_1->_Clipping;
  this->FlowDirectionPreference = param_1->_FlowDirectionPreference;
  this->field_0x31 =
       this->field_0x31 ^ (param_1->_EnabledAttributesUpdate * '\x02' ^ this->field_0x31) & 2U;
  if ((pTVar1 == &param_1->MetaData) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar2 = (param_1->MetaData).ArrayNum;
  if (iVar2 != 0) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar2,&pTVar1->AllocatorInstance,&(this->MetaData).ArrayNum,
                       &(this->MetaData).ArrayMax);
    ConstructItems<TSharedRef<ISlateMetaData,1>,TSharedRef<ISlateMetaData,1>,int>
              ((pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 0x10,
               (TSharedRef<ISlateMetaData,1> *)(param_1->MetaData).AllocatorInstance.Data,iVar2);
  }
  if ((param_1->_ToolTip).bIsSet == false) {
    if ((param_1->_ToolTipText).bIsSet == false) goto LAB_1425fa9d3;
    pFVar11 = FSlateApplicationBase::Get();
    puVar12 = (undefined8 *)(**(code **)(*(longlong *)pFVar11 + 0x130))(pFVar11,local_58);
    local_250 = (IToolTip *)*puVar12;
    local_248.ReferenceController = (TReferenceControllerBase<1> *)puVar12[1];
    if (local_248.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_248.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_248.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_240 = true;
    local_228 = 0;
    local_238 = (undefined1  [8])0x0;
    FStack_230.Data = (FScriptContainerElement *)0x0;
    pTVar10 = ::Private::FindOrAddToolTipMetaData(&local_68,this);
    if ((pTVar10->Object == (FSlateToolTipMetaData *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar4 = pTVar10->Object;
    if (&pFVar4->ToolTip != (TAttribute<TSharedPtr<IToolTip,1>_> *)&local_250) {
      (pFVar4->ToolTip).Value.Object = local_250;
      local_250 = (IToolTip *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pFVar4->ToolTip).Value.SharedReferenceCount,&local_248);
    }
    (pFVar4->ToolTip).bIsSet = local_240;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar4->ToolTip).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_238);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_238,
               (FWriteAccessScope *)&local_150);
    if (((int)local_228 != 0) && (FStack_230.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_230.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_230,0,0,0x10);
      local_228 = local_228 & 0xffffffff00000000;
    }
    if (local_150.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_150.Accessor,&local_150);
    }
    if (FStack_230.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_230.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_238);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_248.ReferenceController);
  }
  else {
    pTVar10 = ::Private::FindOrAddToolTipMetaData(&local_78,this);
    if ((pTVar10->Object == (FSlateToolTipMetaData *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pTVar3 = (param_1->_ToolTip).Value.SharedReferenceCount.ReferenceController;
    pFVar4 = pTVar10->Object;
    pIVar5 = (param_1->_ToolTip).Value.Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_88 = (pFVar4->ToolTip).Value.Object;
    pTStack_80 = (pFVar4->ToolTip).Value.SharedReferenceCount.ReferenceController;
    (pFVar4->ToolTip).Value.Object = pIVar5;
    (pFVar4->ToolTip).Value.SharedReferenceCount.ReferenceController = pTVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_80);
    this_00 = &(param_1->_ToolTip).Getter;
    (pFVar4->ToolTip).bIsSet = (param_1->_ToolTip).bIsSet;
    this_01 = &(pFVar4->ToolTip).Getter;
    local_50 = local_78.SharedReferenceCount.ReferenceController;
    if (this_00 != this_01) {
      local_268 = (undefined1  [8])0x0;
      local_260.Data = (FScriptContainerElement *)0x0;
      local_258 = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_48);
      if ((*(int *)&(param_1->_ToolTip).Getter.field_0x10 != 0) &&
         (plVar6 = *(longlong **)&(param_1->_ToolTip).Getter.field_0x8, plVar6 != (longlong *)0x0))
      {
        (**(code **)(*plVar6 + 0x50))(plVar6,local_268);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_48);
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_01,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_268);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_268,
                 (FWriteAccessScope *)&local_168);
      if ((local_258 != 0) && (local_260.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_260.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_260,0,0,0x10);
        local_258 = 0;
      }
      if (local_168.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_168.Accessor,&local_168);
      }
      if (local_260.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_260.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_268);
      local_50 = local_78.SharedReferenceCount.ReferenceController;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
LAB_1425fa9d3:
  if ((param_1->_Cursor).bIsSet != false) {
    SetCursor(this,&param_1->_Cursor);
  }
  bVar8 = (param_1->_AccessibleText).bIsSet;
  if ((bVar8 != false) || ((param_1->_AccessibleParams).bIsSet != false)) {
    local_res18 = this;
    if (bVar8 == false) {
      if (((param_1->_AccessibleParams).bIsSet == false) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      `SWidget::SWidgetConstruct'::__l15::<lambda_1>::operator()
                (&local_res18,&(param_1->_AccessibleParams).TypedValue);
    }
    else {
      FText::FText(&local_220);
      local_1f0[0] = local_1f0[0] | 1;
      local_210 = 0;
      local_1f8 = 0;
      local_1f0[2] = Auto;
      local_1f0[1] = NotAccessible;
      local_1f0._8_8_ = (param_1->_AccessibleText).Value.TextData.Reference;
      local_208 = (undefined1  [8])0x0;
      FStack_200.Data = (FScriptContainerElement *)0x0;
      if ((ITextData *)local_1f0._8_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_1f0._8_8_ + 8))(local_1f0._8_8_,local_res8);
      }
      local_1f0._16_4_ = (param_1->_AccessibleText).Value.Flags;
      local_1f0[0x18] = (param_1->_AccessibleText).bIsSet;
      local_1d0 = (undefined1  [8])0x0;
      FStack_1c8.Data = (FScriptContainerElement *)0x0;
      local_1c0 = 0;
      TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_1d0,
                 &(param_1->_AccessibleText).Getter);
      local_1b8.Reference = local_220.TextData.Reference;
      if (local_220.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_220.TextData.Reference + 8))
                  (local_220.TextData.Reference,local_res10);
      }
      local_1b0 = local_220.Flags;
      local_1a8 = (bool)local_210;
      local_1a0 = (undefined1  [8])0x0;
      FStack_198.Data = (FScriptContainerElement *)0x0;
      local_190 = 0;
      TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_1a0,
                 (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_208);
      `SWidget::SWidgetConstruct'::__l15::<lambda_1>::operator()
                (&local_res18,(FAccessibleWidgetData *)local_1f0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a0,
                 (FWriteAccessScope *)&local_138);
      if ((local_190 != 0) && (FStack_198.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_198.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_198,0,0,0x10);
        local_190 = 0;
      }
      if (local_138.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_138.Accessor,&local_138);
      }
      if (FStack_198.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_198.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_1a0);
      if (local_1b8.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1b8.Reference + 0x10))();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1d0,
                 (FWriteAccessScope *)&local_120);
      if ((local_1c0 != 0) && (FStack_1c8.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_1c8.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1c8,0,0,0x10);
        local_1c0 = 0;
      }
      if (local_120.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_120.Accessor,&local_120);
      }
      if (FStack_1c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_1c8.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_1d0);
      if ((ITextData *)local_1f0._8_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_1f0._8_8_ + 0x10))();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_208,
                 (FWriteAccessScope *)&local_108);
      if (((int)local_1f8 != 0) && (FStack_200.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_200.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_200,0,0,0x10);
        local_1f8 = local_1f8 & 0xffffffff00000000;
      }
      if (local_108.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
      }
      if (FStack_200.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_200.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_208);
      if (local_220.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_220.TextData.Reference + 0x10))();
      }
    }
  }
  return;
}

// SetAccessibleBehavior @ 1425fb5b0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
SWidget::SetAccessibleBehavior
          (SWidget *this,EAccessibleBehavior param_1,TAttribute<FText> *param_2,
          EAccessibleType param_3)

{
  EAccessibleBehavior EVar1;
  TReferenceControllerBase<1> *pTVar2;
  FSlateAccessibleMessageHandler *pFVar3;
  TAttribute<FText> *this_00;
  FSlateApplicationBase *pFVar4;
  uint uVar5;
  TWidgetSparseAnnotation<TAttribute<FText>_> *pTVar6;
  EAccessibleBehavior *pEVar7;
  SWidget *local_28 [2];
  
  pEVar7 = &this->AccessibleBehavior + (param_3 != Main);
  if (param_1 == Custom) {
    pTVar6 = &AccessibleSummaryText;
    if (param_3 == Main) {
      pTVar6 = &AccessibleText;
    }
    local_28[0] = this;
    AcquireSRWLockExclusive((PSRWLOCK)&pTVar6->RWLock);
    uVar5 = ((uint)((ulonglong)local_28[0] >> 0x14) & 0xffff ^ (uint)((ulonglong)local_28[0] >> 4))
            * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    this_00 = TMapBase<SWidget_const_*,TAttribute<FText>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<SWidget_const_*,TAttribute<FText>,0>_>
              ::FindOrAddImpl<SWidget_const_*_const_&>
                        ((TMapBase<SWidget_const_*,TAttribute<FText>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<SWidget_const_*,TAttribute<FText>,0>_>
                          *)pTVar6,uVar5 >> 0x10 ^ uVar5,local_28);
    ReleaseSRWLockExclusive((PSRWLOCK)&pTVar6->RWLock);
    TAttribute<FText>::operator=(this_00,param_2);
  }
  else if (*pEVar7 == Custom) {
    pTVar6 = &AccessibleSummaryText;
    if (param_3 == Main) {
      pTVar6 = &AccessibleText;
    }
    TWidgetSparseAnnotation<TAttribute<FText>_>::Remove(pTVar6,this);
  }
  EVar1 = *pEVar7;
  if (((EVar1 != param_1) && (*pEVar7 = param_1, param_3 == Main)) &&
     ((EVar1 != NotAccessible) != (param_1 != NotAccessible))) {
    pFVar4 = FSlateApplicationBase::Get();
    pTVar2 = (pFVar4->AccessibleMessageHandler).SharedReferenceCount.ReferenceController;
    pFVar3 = (pFVar4->AccessibleMessageHandler).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar3->bDirty = true;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  return;
}

// SetCanChildrenBeAccessible @ 1425fbac0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall SWidget::SetCanChildrenBeAccessible(SWidget *this,bool param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FSlateAccessibleMessageHandler *pFVar2;
  FSlateApplicationBase *pFVar3;
  
  if (this->bCanChildrenBeAccessible != param_1) {
    this->field_0x32 = this->field_0x32 & 0xfb | param_1 << 2;
    pFVar3 = FSlateApplicationBase::Get();
    pTVar1 = (pFVar3->AccessibleMessageHandler).SharedReferenceCount.ReferenceController;
    pFVar2 = (pFVar3->AccessibleMessageHandler).Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar2->bDirty = true;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    return;
  }
  return;
}

// SetClipping @ 1425fbb20

void __thiscall SWidget::SetClipping(SWidget *this,EWidgetClipping param_1)

{
  if (this->Clipping != param_1) {
    this->Clipping = param_1;
    (**(code **)(this->_padding_ + 0x230))();
    Invalidate(this,Layout);
    return;
  }
  return;
}

// SetCursor @ 1425fbca0

void __thiscall
SWidget::SetCursor(SWidget *this,TAttribute<TOptional<EMouseCursor::Type>_> *param_1)

{
  TDelegate<TOptional<EMouseCursor::Type>___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  TDelegate<TOptional<EMouseCursor::Type>___cdecl(void),FDefaultDelegateUserPolicy> *this_01;
  longlong *plVar1;
  code *pcVar2;
  FSharedReferencer<1> FVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  TOptional<EMouseCursor::Type> *pTVar7;
  FName *pFVar8;
  uint uVar9;
  TArray<TSharedRef<ISlateMetaData,1>,TSizedDefaultAllocator<32>_> *this_02;
  longlong lVar10;
  FSlateCursorMetaData *pFVar11;
  TSharedPtr<FSlateCursorMetaData,1> local_b8;
  undefined1 local_a8 [8];
  ForAnyElementType local_a0;
  int local_98;
  undefined8 local_90;
  FSharedReferencer<1> local_88;
  TSharedRef<ISlateMetaData,1> local_80;
  FDestructionSentinel local_70;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  this_00 = &param_1->Getter;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_58);
  if (((*(int *)&(param_1->Getter).field_0x10 == 0) ||
      (plVar1 = *(longlong **)&(param_1->Getter).field_0x8, plVar1 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*plVar1 + 0x38))(), cVar4 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
    pTVar7 = TAttribute<TOptional<enum_EMouseCursor::Type>_>::Get(param_1);
    if (pTVar7->bIsSet == false) {
      uVar9 = (this->MetaData).ArrayNum - 1;
      if ((int)uVar9 < 0) {
        return;
      }
      this_02 = &this->MetaData;
      lVar10 = (longlong)(int)uVar9 << 4;
      while( true ) {
        uVar6 = 0;
        if ((int)uVar9 < (this->MetaData).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        plVar1 = *(longlong **)((this_02->AllocatorInstance).Data + lVar10);
        pcVar2 = *(code **)(*plVar1 + 8);
        pFVar8 = FSlateCursorMetaData::GetTypeId();
        cVar4 = (*pcVar2)(plVar1,pFVar8);
        if (cVar4 != '\0') break;
        lVar10 = lVar10 + -0x10;
        uVar9 = uVar9 - 1;
        if ((int)uVar9 < 0) {
          return;
        }
      }
      if (((uVar9 == 0) && (this->bHasRegisteredSlateAttribute != 0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index != 0 || !HasRegisteredSlateAttribute()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Widgets\\SWidget.h"
                             ,0x59a,L"The first slot is reserved for SlateAttribute"), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar6 = 0;
      if ((int)uVar9 < (this->MetaData).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      TArray<TSharedRef<ISlateMetaData,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                (this_02,uVar9);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&this_02->AllocatorInstance,(this->MetaData).ArrayNum,
                 &(this->MetaData).ArrayMax);
      return;
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
  }
  GetMetaData<FSlateCursorMetaData>(this,&local_b8);
  pFVar11 = local_b8.Object;
  if (local_b8.Object == (FSlateCursorMetaData *)0x0) {
    local_88.ReferenceController = ::operator_new(0x40);
    if (local_88.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      local_88.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar11 = (FSlateCursorMetaData *)&DAT_00000010;
    }
    else {
      (local_88.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      pFVar11 = (FSlateCursorMetaData *)(local_88.ReferenceController + 1);
      (local_88.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      (local_88.ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFSlateCursorMetaData___00_SharedPointerInternals__6B_
      ;
      local_88.ReferenceController[1]._padding_ = 0;
      local_88.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
      local_88.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
      local_88.ReferenceController[2]._padding_ = 0;
      local_88.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
      local_88.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
      local_88.ReferenceController[3]._padding_ = 0;
      local_88.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
      local_88.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
      local_88.ReferenceController[1]._padding_ = (longlong)&___7FSlateCursorMetaData__6B_;
      if ((pFVar11 == (FSlateCursorMetaData *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      LOCK();
      (local_88.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_88.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FVar3.ReferenceController = local_88.ReferenceController;
    local_90 = 0;
    local_b8.Object = pFVar11;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_b8.SharedReferenceCount,&local_88);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar3.ReferenceController);
    pFVar11 = local_b8.Object;
    if ((local_b8.Object == (FSlateCursorMetaData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FVar3.ReferenceController = local_b8.SharedReferenceCount.ReferenceController;
    if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar11 == (FSlateCursorMetaData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_80.Object = (ISlateMetaData *)pFVar11;
    local_80.SharedReferenceCount.ReferenceController = FVar3.ReferenceController;
    if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar3.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar3.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    AddMetadataInternal(this,&local_80);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_80.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar3.ReferenceController);
    if ((pFVar11 == (FSlateCursorMetaData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_1 != &pFVar11->Cursor) {
    if ((param_1->Value).bIsSet == false) {
      if ((pFVar11->Cursor).Value.bIsSet != false) {
        (pFVar11->Cursor).Value.bIsSet = false;
      }
    }
    else {
      (pFVar11->Cursor).Value.TypedValue = (param_1->Value).TypedValue;
      (pFVar11->Cursor).Value.bIsSet = true;
    }
  }
  this_01 = &(pFVar11->Cursor).Getter;
  (pFVar11->Cursor).bIsSet = param_1->bIsSet;
  if (this_00 != this_01) {
    local_a8 = (undefined1  [8])0x0;
    local_a0.Data = (FScriptContainerElement *)0x0;
    local_98 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_40);
    if ((*(int *)&(param_1->Getter).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(param_1->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_a8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_40);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_01,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_70);
    if ((local_98 != 0) && (local_a0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_a0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a0,0,0,0x10);
      local_98 = 0;
    }
    if (local_70.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
    }
    if (local_a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_a8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  return;
}

// SetDebugInfo @ 1425fc150

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SWidget::SetDebugInfo(SWidget *this,char *param_1,char *param_2,int param_3,ulong64 param_4)

{
  ulong64 uVar1;
  ulong64 uVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_SlateSWidgetAllocSize> FVar4;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FStatMessage local_38;
  
  ::FName::FName(&local_res8,param_1);
  uVar2 = param_4;
  this->TypeOfWidget = local_res8;
  this->AllocSize = param_4;
  if (param_4 != 0) {
    FVar4 = StatPtr_STAT_SlateSWidgetAllocSize;
    if (StatPtr_STAT_SlateSWidgetAllocSize ==
        (FThreadSafeStaticStat<FStat_STAT_SlateSWidgetAllocSize>)0x0) {
      pFVar3 = ::FName::FName((FName *)&param_4,"STAT_SlateSWidgetAllocSize");
      FVar4 = (FThreadSafeStaticStat<FStat_STAT_SlateSWidgetAllocSize>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateSWidgetAllocSize,*pFVar3,
                         L"SWidget Total Allocated Size","STATGROUP_SlateMemory","STATCAT_Advanced",
                         L"Slate Memory",true,false,ST_int64,false,false,MCR_Physical);
    }
    uVar1 = *(ulong64 *)FVar4;
    param_4 = uVar1;
    if (((uVar1 != 0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_38.NameAndInfo.Number = (uint)(uVar1 >> 0x20) & 0xffffafff | 0xa000;
      param_4._0_1_ = (undefined1)uVar2;
      param_4._1_1_ = SUB81(uVar2,1);
      param_4._2_1_ = SUB81(uVar2,2);
      param_4._3_1_ = SUB81(uVar2,3);
      param_4._4_1_ = SUB81(uVar2,4);
      param_4._5_1_ = SUB81(uVar2,5);
      param_4._6_1_ = SUB81(uVar2,6);
      param_4._7_1_ = SUB81(uVar2,7);
      local_38.StatData.Pad[0] = (undefined1)param_4;
      local_38.StatData.Pad[1] = param_4._1_1_;
      local_38.StatData.Pad[2] = param_4._2_1_;
      local_38.StatData.Pad[3] = param_4._3_1_;
      local_38.StatData.Pad[4] = param_4._4_1_;
      local_38.StatData.Pad[5] = param_4._5_1_;
      local_38.StatData.Pad[6] = param_4._6_1_;
      local_38.StatData.Pad[7] = param_4._7_1_;
      param_4 = uVar1;
      local_38.NameAndInfo.Index.Value = (uint)uVar1;
      FThreadStats::AddStatMessage(this_00,&local_38);
      FStatsTrace::Add((FName *)&param_4,uVar2);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  pFVar3 = ::FName::FName((FName *)&param_4,param_2);
  this->CreatedInLocation = *pFVar3;
  (this->CreatedInLocation).Number = param_3;
  FSlateTrace::UpdateWidgetInfo(this);
  return;
}

// SetFastPathProxyHandle @ 1425fc570

void __thiscall
SWidget::SetFastPathProxyHandle
          (SWidget *this,FWidgetProxyHandle *param_1,FSlateInvalidationWidgetVisibility param_2,
          bool param_3)

{
  EWidgetUpdateFlags EVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  FSlateInvalidationWidgetIndex FVar6;
  FSlateInvalidationWidgetSortOrder FVar7;
  bool bVar8;
  undefined7 in_register_00000081;
  EWidgetUpdateFlags EVar9;
  
  if ((this == SNullWidget::NullWidget.Object) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("this != &SNullWidget::NullWidget.Get()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\SWidget.cpp"
                         ,0x345,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar4 = (param_1->InvalidationRootHandle).UniqueId;
  uVar5 = *(undefined4 *)&(param_1->InvalidationRootHandle).field_0xc;
  (this->FastPathProxyHandle).InvalidationRootHandle.InvalidationRoot =
       (param_1->InvalidationRootHandle).InvalidationRoot;
  (this->FastPathProxyHandle).InvalidationRootHandle.UniqueId = iVar4;
  *(undefined4 *)&(this->FastPathProxyHandle).InvalidationRootHandle.field_0xc = uVar5;
  FVar6 = param_1->WidgetIndex;
  FVar7.Order = (param_1->WidgetSortOrder).Order;
  this->bInheritedVolatility = '\0';
  this->field_0x30 = this->field_0x30 | param_3 << 6;
  (this->FastPathProxyHandle).WidgetIndex = FVar6;
  (this->FastPathProxyHandle).WidgetSortOrder = (FSlateInvalidationWidgetSortOrder)FVar7.Order;
  if (((((*(byte *)CONCAT71(in_register_00000081,param_2.field0_0x0) & 3) != 3) &&
       (FSlateCachedElementsHandle::RemoveFromCache(&(this->PersistentState).CachedElementHandle),
       (this->PersistentState).CachedElementHandle.Ptr.Object != (FSlateCachedElementList *)0x0)) &&
      (pTVar2 = (this->PersistentState).CachedElementHandle.Ptr.WeakReferenceCount.
                ReferenceController, pTVar2 != (TReferenceControllerBase<1> *)0x0)) &&
     (((0 < (int)pTVar2->SharedReferenceCount &&
       (bVar8 = FSlateCachedElementsHandle::IsOwnedByWidget
                          (&(this->PersistentState).CachedElementHandle,this), !bVar8)) &&
      (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                         ("PersistentState.CachedElementHandle.IsOwnedByWidget(this)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\SWidget.cpp"
                          ,0x352,L""), bVar8)))) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EVar1 = this->UpdateFlags;
  if (this->bCachedVolatile == '\x01' && this->bInheritedVolatility == '\0') {
    EVar9 = EVar1 | NeedsVolatilePaint;
  }
  else {
    if ((EVar1 & NeedsVolatilePaint) == None) {
      return;
    }
    EVar9 = EVar1 & ~NeedsVolatilePaint;
  }
  this->UpdateFlags = EVar9;
  FWidgetProxyHandle::UpdateWidgetFlags(&this->FastPathProxyHandle,this,EVar1,EVar9);
  return;
}

// SetFastPathSortOrder @ 1425fc6b0

void __thiscall
SWidget::SetFastPathSortOrder(SWidget *this,FSlateInvalidationWidgetSortOrder param_1)

{
  FSlateInvalidationRoot *pFVar1;
  FSlateInvalidationRootHandle local_18;
  
  if (param_1.Order != (this->FastPathProxyHandle).WidgetSortOrder.Order) {
    (this->FastPathProxyHandle).WidgetSortOrder.Order = param_1.Order;
    local_18.InvalidationRoot = (this->FastPathProxyHandle).InvalidationRootHandle.InvalidationRoot;
    local_18.UniqueId = (this->FastPathProxyHandle).InvalidationRootHandle.UniqueId;
    local_18._12_4_ = *(undefined4 *)&(this->FastPathProxyHandle).InvalidationRootHandle.field_0xc;
    pFVar1 = FSlateInvalidationRootHandle::GetInvalidationRoot(&local_18);
    if ((pFVar1 != (FSlateInvalidationRoot *)0x0) &&
       (pFVar1->RootHittestGrid != (FHittestGrid *)0x0)) {
      FHittestGrid::UpdateWidget(pFVar1->RootHittestGrid,this,param_1);
    }
  }
  return;
}

// SetOnMouseButtonDown @ 1425fd080

void __thiscall
SWidget::SetOnMouseButtonDown
          (SWidget *this,
          TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
          *param_1)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FSlateMouseEventsMetaData,1> *pTVar3;
  TSharedPtr<FSlateMouseEventsMetaData,1> local_18;
  
  pTVar3 = ::Private::FindOrAddMouseEventsMetaData(&local_18,this);
  if (pTVar3->Object == (FSlateMouseEventsMetaData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&pTVar3->Object->MouseButtonDownHandle,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// SetOnMouseButtonUp @ 1425fd110

void __thiscall
SWidget::SetOnMouseButtonUp
          (SWidget *this,
          TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
          *param_1)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FSlateMouseEventsMetaData,1> *pTVar3;
  TSharedPtr<FSlateMouseEventsMetaData,1> local_18;
  
  pTVar3 = ::Private::FindOrAddMouseEventsMetaData(&local_18,this);
  if (pTVar3->Object == (FSlateMouseEventsMetaData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&pTVar3->Object->MouseButtonUpHandle,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// SetOnMouseDoubleClick @ 1425fd1a0

void __thiscall
SWidget::SetOnMouseDoubleClick
          (SWidget *this,
          TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
          *param_1)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FSlateMouseEventsMetaData,1> *pTVar3;
  TSharedPtr<FSlateMouseEventsMetaData,1> local_18;
  
  pTVar3 = ::Private::FindOrAddMouseEventsMetaData(&local_18,this);
  if (pTVar3->Object == (FSlateMouseEventsMetaData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&pTVar3->Object->MouseDoubleClickHandle,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// SetOnMouseEnter @ 1425fd230

void __thiscall
SWidget::SetOnMouseEnter
          (SWidget *this,
          TDelegate<void___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
          *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<FSlateMouseEventsMetaData,1> *pTVar4;
  TDelegate<void___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
  *this_00;
  TSharedPtr<FSlateMouseEventsMetaData,1> local_68;
  undefined1 local_58 [8];
  ForAnyElementType local_50;
  int local_48;
  FDestructionSentinel local_40;
  FReadAccessScope local_28;
  
  pTVar4 = ::Private::FindOrAddMouseEventsMetaData(&local_68,this);
  if (pTVar4->Object == (FSlateMouseEventsMetaData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this_00 = &pTVar4->Object->MouseEnterHandler;
  if (param_1 != this_00) {
    local_58 = (undefined1  [8])0x0;
    local_50.Data = (FScriptContainerElement *)0x0;
    local_48 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_28);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_58);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    if ((local_48 != 0) && (local_50.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_50.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_50,0,0,0x10);
      local_48 = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// SetOnMouseLeave @ 1425fd3a0

void __thiscall
SWidget::SetOnMouseLeave
          (SWidget *this,
          TDelegate<void___cdecl(FPointerEvent_const_&),FDefaultDelegateUserPolicy> *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<FSlateMouseEventsMetaData,1> *pTVar4;
  TDelegate<void___cdecl(FPointerEvent_const_&),FDefaultDelegateUserPolicy> *this_00;
  TSharedPtr<FSlateMouseEventsMetaData,1> local_68;
  undefined1 local_58 [8];
  ForAnyElementType local_50;
  int local_48;
  FDestructionSentinel local_40;
  FReadAccessScope local_28;
  
  pTVar4 = ::Private::FindOrAddMouseEventsMetaData(&local_68,this);
  if (pTVar4->Object == (FSlateMouseEventsMetaData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this_00 = &pTVar4->Object->MouseLeaveHandler;
  if (param_1 != this_00) {
    local_58 = (undefined1  [8])0x0;
    local_50.Data = (FScriptContainerElement *)0x0;
    local_48 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_28);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_58);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    if ((local_48 != 0) && (local_50.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_50.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_50,0,0,0x10);
      local_48 = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// SetOnMouseMove @ 1425fd510

void __thiscall
SWidget::SetOnMouseMove
          (SWidget *this,
          TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
          *param_1)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FSlateMouseEventsMetaData,1> *pTVar3;
  TSharedPtr<FSlateMouseEventsMetaData,1> local_18;
  
  pTVar3 = ::Private::FindOrAddMouseEventsMetaData(&local_18,this);
  if (pTVar3->Object == (FSlateMouseEventsMetaData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&pTVar3->Object->MouseMoveHandle,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// SetPixelSnapping @ 1425fd7b0

void __thiscall SWidget::SetPixelSnapping(SWidget *this,EWidgetPixelSnapping param_1)

{
  if (this->PixelSnappingMethod != param_1) {
    this->PixelSnappingMethod = param_1;
    Invalidate(this,Paint);
    return;
  }
  return;
}

// SetToolTip @ 1425fdb10

void __thiscall SWidget::SetToolTip(SWidget *this,TAttribute<TSharedPtr<IToolTip,1>_> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FSlateToolTipMetaData *pFVar2;
  IToolTip *pIVar3;
  longlong *plVar4;
  code *pcVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  TSharedPtr<FSlateToolTipMetaData,1> *pTVar8;
  TDelegate<TSharedPtr<IToolTip,1>___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  TSharedPtr<FSlateToolTipMetaData,1> local_68;
  undefined1 local_58 [8];
  ForAnyElementType local_50;
  int local_48;
  FDestructionSentinel local_40;
  FReadAccessScope local_28;
  
  if (param_1->bIsSet == false) {
    RemoveMetaData<FSlateToolTipMetaData>(this);
    return;
  }
  pTVar8 = ::Private::FindOrAddToolTipMetaData(&local_68,this);
  if (pTVar8->Object == (FSlateToolTipMetaData *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar1 = (param_1->Value).SharedReferenceCount.ReferenceController;
  pFVar2 = pTVar8->Object;
  pIVar3 = (param_1->Value).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (pFVar2->ToolTip).Value.SharedReferenceCount.ReferenceController;
  (pFVar2->ToolTip).Value.Object = pIVar3;
  (pFVar2->ToolTip).Value.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  (pFVar2->ToolTip).bIsSet = param_1->bIsSet;
  this_00 = &(pFVar2->ToolTip).Getter;
  if (&param_1->Getter != this_00) {
    local_58 = (undefined1  [8])0x0;
    local_50.Data = (FScriptContainerElement *)0x0;
    local_48 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,&local_28)
    ;
    if ((*(int *)&(param_1->Getter).field_0x10 != 0) &&
       (plVar4 = *(longlong **)&(param_1->Getter).field_0x8, plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x50))(plVar4,local_58);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    if ((local_48 != 0) && (local_50.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_50.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_50,0,0,0x10);
      local_48 = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  return;
}

// SetToolTipText @ 1425fdcb0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall SWidget::SetToolTipText(SWidget *this,TAttribute<FText> *param_1)

{
  FSlateToolTipMetaData *pFVar1;
  code *pcVar2;
  bool bVar3;
  FSlateApplicationBase *pFVar4;
  undefined8 *puVar5;
  TSharedPtr<FSlateToolTipMetaData,1> *pTVar6;
  TSharedPtr<FSlateToolTipMetaData,1> local_78;
  undefined1 local_68 [8];
  TReferenceControllerBase<1> *local_60;
  FDestructionSentinel local_58;
  IToolTip *local_40;
  FSharedReferencer<1> local_38;
  bool local_30;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  if (param_1->bIsSet == false) {
    RemoveMetaData<FSlateToolTipMetaData>(this);
  }
  else {
    pFVar4 = FSlateApplicationBase::Get();
    puVar5 = (undefined8 *)(**(code **)(*(longlong *)pFVar4 + 0x130))(pFVar4,local_68);
    local_40 = (IToolTip *)*puVar5;
    local_38.ReferenceController = (TReferenceControllerBase<1> *)puVar5[1];
    if (local_38.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_38.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_30 = true;
    local_18 = 0;
    local_28 = (undefined1  [8])0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    pTVar6 = ::Private::FindOrAddToolTipMetaData(&local_78,this);
    if (pTVar6->Object == (FSlateToolTipMetaData *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = pTVar6->Object;
    if (&pFVar1->ToolTip != (TAttribute<TSharedPtr<IToolTip,1>_> *)&local_40) {
      (pFVar1->ToolTip).Value.Object = local_40;
      local_40 = (IToolTip *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pFVar1->ToolTip).Value.SharedReferenceCount,&local_38);
    }
    (pFVar1->ToolTip).bIsSet = local_30;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar1->ToolTip).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_58);
    if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
      local_18 = local_18 & 0xffffffff00000000;
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    if (FStack_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
  }
  return;
}

// SetToolTipText @ 1425fde40

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall SWidget::SetToolTipText(SWidget *this,FText *param_1)

{
  FSlateToolTipMetaData *pFVar1;
  code *pcVar2;
  bool bVar3;
  FSlateApplicationBase *pFVar4;
  undefined8 *puVar5;
  TSharedPtr<FSlateToolTipMetaData,1> *pTVar6;
  TSharedPtr<FSlateToolTipMetaData,1> local_78;
  undefined1 local_68 [8];
  TReferenceControllerBase<1> *local_60;
  FDestructionSentinel local_58;
  IToolTip *local_40;
  FSharedReferencer<1> local_38;
  bool local_30;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  bVar3 = FText::IsEmptyOrWhitespace(param_1);
  if (bVar3) {
    RemoveMetaData<FSlateToolTipMetaData>(this);
  }
  else {
    pFVar4 = FSlateApplicationBase::Get();
    puVar5 = (undefined8 *)(**(code **)(*(longlong *)pFVar4 + 0x128))(pFVar4,local_68);
    local_40 = (IToolTip *)*puVar5;
    local_38.ReferenceController = (TReferenceControllerBase<1> *)puVar5[1];
    if (local_38.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_38.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_30 = true;
    local_18 = 0;
    local_28 = (undefined1  [8])0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    pTVar6 = ::Private::FindOrAddToolTipMetaData(&local_78,this);
    if (pTVar6->Object == (FSlateToolTipMetaData *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = pTVar6->Object;
    if (&pFVar1->ToolTip != (TAttribute<TSharedPtr<IToolTip,1>_> *)&local_40) {
      (pFVar1->ToolTip).Value.Object = local_40;
      local_40 = (IToolTip *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pFVar1->ToolTip).Value.SharedReferenceCount,&local_38);
    }
    (pFVar1->ToolTip).bIsSet = local_30;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar1->ToolTip).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_58);
    if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
      local_18 = local_18 & 0xffffffff00000000;
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    if (FStack_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
  }
  return;
}

// SetVisibility @ 1425fe8b0

void __thiscall SWidget::SetVisibility(SWidget *this,TAttribute<EVisibility> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->VisibilityAttribute,this,param_1,None);
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

// SlatePrepass @ 1425ff040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWidget::SlatePrepass(SWidget *this,float param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_SlatePrepass> FVar12;
  UObject *this_00;
  UObject *pUVar13;
  UPackage *pUVar14;
  TEventRef<unsigned_int> TVar15;
  FWriteBuffer *pFVar16;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FName FVar17;
  undefined1 auStackY_168 [32];
  FSlateCrashReporterScope local_104 [2];
  FName local_100;
  FColor_u_0 local_f8;
  FLLMScope local_f4;
  FName local_f0;
  undefined8 local_e8;
  FName local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  FName local_c0;
  TSharedPtr<FReflectionMetaData,1> local_b0;
  FMemScope local_a0;
  LARGE_INTEGER local_98;
  FStatMessage local_90;
  FName local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  undefined4 *local_60;
  longlong local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_168;
  UE::Slate::FSlateCrashReporterScope::FSlateCrashReporterScope
            (local_104,this,UE::Slate::FSlateCrashReporterScope::NAME_Prepass);
  FVar12 = StatPtr_STAT_SlatePrepass;
  if (StatPtr_STAT_SlatePrepass == (FThreadSafeStaticStat<FStat_STAT_SlatePrepass>)0x0) {
    pFVar11 = ::FName::FName(&local_80,"STAT_SlatePrepass");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_SlatePrepass>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlatePrepass,*pFVar11,
                        L"SlatePrepass","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar12;
  bVar7 = false;
  bVar9 = false;
  local_c0.ComparisonIndex.Value = 0;
  local_c0.Number = 0;
  if ((FVar17.ComparisonIndex.Value.Value != 0) || (FVar17.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_f8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_f8._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_e0.ComparisonIndex.Value = FVar17.ComparisonIndex.Value.Value;
        local_e0.Number = FVar17.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_e0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\SWidget.cpp"
                   ,0x2a2);
        bVar7 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_100 = FVar17;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar8 = true;
      goto LAB_1425ff1a6;
    }
  }
  bVar8 = false;
  FVar17 = local_c0;
LAB_1425ff1a6:
  if ((GSlateIsOnFastUpdatePath == false) || ((bool)this->bNeedsPrepass)) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        ::FName::FName(&LLMScope_Name678,"UI/Slate/Prepass");
        _Init_thread_footer(&::_TSS0);
      }
    }
    FLLMScope::FLLMScope(&local_f4,LLMScope_Name678,false,None,Default,true);
    FMemScope::FMemScope(&local_a0,&LLMScope_Name678,true);
    local_f0.ComparisonIndex.Value = 0;
    local_f0.Number = 0;
    local_e8 = 0;
    local_100.ComparisonIndex.Value = 0;
    local_100.Number = 0;
    if (-1 < AssetMetadataChannel->Enabled) {
      FReflectionMetaData::GetWidgetOrParentMetaData(&local_b0,this);
      if (local_b0.Object != (FReflectionMetaData *)0x0) {
        if (local_b0.Object == (FReflectionMetaData *)0x0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          if (bVar10) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        this_00 = FWeakObjectPtr::Get(&((local_b0.Object)->Asset).WeakPtr);
        if (this_00 != (UObject *)0x0) {
          if (local_b0.Object == (FReflectionMetaData *)0x0) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L"");
            if (bVar10) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          local_f0 = (local_b0.Object)->Name;
          pUVar13 = FWeakObjectPtr::Get(&((local_b0.Object)->Class).WeakPtr);
          local_e8 = *(undefined8 *)&pUVar13->field_0x18;
          pUVar14 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this_00);
          local_100 = (FName)pUVar14->_padding_;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b0.SharedReferenceCount.ReferenceController);
    }
    if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
      local_d8 = 0;
      TVar15 = (TEventRef<unsigned_int>)&local_d8;
    }
    else {
      TVar15 = FStringTrace::GetNameRef(&local_78);
    }
    uVar2 = *(undefined8 *)TVar15;
    if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
      local_d0 = 0;
      TVar15 = (TEventRef<unsigned_int>)&local_d0;
    }
    else {
      TVar15 = FStringTrace::GetNameRef(&local_70);
    }
    uVar3 = *(undefined8 *)TVar15;
    if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
      local_c8 = 0;
      TVar15 = (TEventRef<unsigned_int>)&local_c8;
    }
    else {
      TVar15 = FStringTrace::GetNameRef(&local_68);
    }
    uVar4 = *(undefined8 *)TVar15;
    bVar10 = false;
    if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
      UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>((TLogScope<0> *)&local_60);
      bVar10 = true;
      *local_60 = (int)uVar2;
      local_60[1] = (int)uVar3;
      local_60[2] = (int)uVar4;
      *(undefined8 *)(local_58 + 0x28) = *(undefined8 *)(local_58 + 0x20);
    }
    if ((this->bHasRegisteredSlateAttribute == '\x01' && this->bEnabledAttributesUpdate == '\x01')
       && (GSlateIsOnFastProcessInvalidation == false)) {
      FSlateAttributeMetaData::UpdateAllAttributes(this,AllowInvalidationIfConstructed);
    }
    Prepass_Internal(this,param_1);
    if (bVar10) {
      lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar5 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      pFVar16 = *(FWriteBuffer **)(lVar5 + 0x20);
      if ((int)pFVar16 - *(int *)&pFVar16->Cursor < 1) {
        pFVar16 = UE::Trace::Private::Writer_NextBuffer();
      }
      *pFVar16->Cursor = '\n';
      pFVar16->Cursor = pFVar16->Cursor + 1;
      pFVar16->Committed = pFVar16->Cursor;
    }
    FMemScope::~FMemScope(&local_a0);
    FLLMScope::~FLLMScope(&local_f4);
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_90.NameAndInfo.Index = FVar17.ComparisonIndex.Value;
      local_90.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_98);
      local_90.StatData.Pad[4] = '\0';
      local_90.StatData.Pad[5] = '\0';
      local_90.StatData.Pad[6] = '\0';
      local_90.StatData.Pad[7] = '\0';
      local_90.StatData.Pad[0] = local_98.s.LowPart._0_1_;
      local_90.StatData.Pad[1] = local_98.s.LowPart._1_1_;
      local_90.StatData.Pad[2] = local_98.s.LowPart._2_1_;
      local_90.StatData.Pad[3] = local_98.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_90);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  UE::Slate::FSlateCrashReporterScope::~FSlateCrashReporterScope(local_104);
  return;
}

// SlatePrepass @ 1425ff610

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall SWidget::SlatePrepass(SWidget *this)

{
  FSlateApplicationBase *pFVar1;
  float fVar2;
  
  pFVar1 = FSlateApplicationBase::Get();
  fVar2 = (float)(**(code **)(*(longlong *)pFVar1 + 0x58))(pFVar1);
  SlatePrepass(this,fVar2);
  return;
}

// SupportsKeyboardFocus @ 142600ca0

bool __thiscall SWidget::SupportsKeyboardFocus(SWidget *this)

{
  return false;
}

// Tick @ 1426017f0

void __thiscall SWidget::Tick(SWidget *this,FGeometry *param_1,double param_2,float param_3)

{
  return;
}

// ToString @ 142601ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall SWidget::ToString(SWidget *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  size_t sVar3;
  TStringBuilderBase<wchar_t> *this_00;
  wchar_t *pwVar4;
  FString *pFVar5;
  int iVar6;
  undefined1 auStack_268 [32];
  FString local_248;
  TStringBuilderBase<wchar_t> local_238;
  wchar_t local_218 [256];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_268;
  local_238.Base = local_218;
  local_238.bIsDynamic = false;
  local_238.bIsExternal = false;
  local_238.CurPos = local_218;
  local_238.End = (wchar_t *)local_18;
  ::FName::AppendString(&this->TypeOfWidget,&local_238);
  if (local_238.End < local_238.CurPos + 2) {
    TStringBuilderBase<wchar_t>::Extend(&local_238,2);
  }
  local_238.CurPos = FGenericPlatformString::Convert<char,wchar_t>(local_238.CurPos,2," [",2);
  plVar2 = (longlong *)(**(code **)(this->_padding_ + 0x1e8))(this,&local_248);
  iVar6 = 0;
  if ((int)plVar2[1] == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)*plVar2;
    if (pwVar4 == (wchar_t *)0x0) goto LAB_142601fa7;
  }
  sVar3 = wcslen(pwVar4);
  iVar6 = (int)sVar3;
LAB_142601fa7:
  this_00 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_238,pwVar4,iVar6);
  if (this_00->End < this_00->CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(this_00,1);
  }
  pwVar4 = FGenericPlatformString::Convert<char,wchar_t>(this_00->CurPos,1,"]",1);
  this_00->CurPos = pwVar4;
  if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data.AllocatorInstance.Data);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar5 = ::FString::ConstructFromPtrSize
                     (&local_248,local_238.Base,
                      (int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1));
  if (__return_storage_ptr__ != pFVar5) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar5->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_238);
  return __return_storage_ptr__;
}

// TranslateMouseCoordinateForCustomHitTestChild @ 142602270

TOptional<FVirtualPointerPosition> * __thiscall
SWidget::TranslateMouseCoordinateForCustomHitTestChild
          (SWidget *this,TOptional<FVirtualPointerPosition> *__return_storage_ptr__,SWidget *param_1
          ,FGeometry *param_2,TVector2<double> *param_3,TVector2<double> *param_4)

{
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// UnRegisterActiveTimer @ 142602990

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
SWidget::UnRegisterActiveTimer(SWidget *this,TSharedRef<FActiveTimerHandle,1> *param_1)

{
  EWidgetUpdateFlags EVar1;
  FActiveTimersMetaData *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  TSharedPtr<UE::Slate::FActiveTimersMetaData,1> *pTVar6;
  EWidgetUpdateFlags EVar7;
  TSharedRef<UE::Slate::FActiveTimersMetaData,1> local_28;
  TSharedPtr<UE::Slate::FActiveTimersMetaData,1> local_18;
  
  if (this->bHasActiveTimers != '\0') {
    pTVar6 = GetMetaData<UE::Slate::FActiveTimersMetaData>(this,&local_18);
    if (pTVar6->Object == (FActiveTimersMetaData *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar2 = pTVar6->Object;
    pTVar3 = (pTVar6->SharedReferenceCount).ReferenceController;
    (pTVar6->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar6->Object = (FActiveTimersMetaData *)0x0;
    local_28.Object = pFVar2;
    local_28.SharedReferenceCount.ReferenceController = pTVar3;
    if (pFVar2 == (FActiveTimersMetaData *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    TArray<TSharedRef<FActiveTimerHandle,1>,TSizedDefaultAllocator<32>_>::RemoveSingle
              (&pFVar2->ActiveTimers,param_1);
    if ((pFVar2->ActiveTimers).ArrayNum == 0) {
      RemoveMetaData<UE::Slate::FActiveTimersMetaData>(this,&local_28);
      EVar1 = this->UpdateFlags;
      this->bHasActiveTimers = '\0';
      EVar7 = EVar1 & ~NeedsActiveTimerUpdate;
      this->UpdateFlags = EVar7;
      FWidgetProxyHandle::UpdateWidgetFlags(&this->FastPathProxyHandle,this,EVar1,EVar7);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  if (FSlateApplicationBase::CurrentBaseApplication.Object != (FSlateApplicationBase *)0x0) {
    if (FSlateApplicationBase::CurrentBaseApplication.Object == (FSlateApplicationBase *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentBaseApplication.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Application\\SlateApplicationBase.h"
                         ,0x22a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (FSlateApplicationBase::CurrentBaseApplication.Object == (FSlateApplicationBase *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FSlateApplicationBase::UnRegisterActiveTimer
              (FSlateApplicationBase::CurrentBaseApplication.Object,param_1);
    return;
  }
  return;
}

// UpdateFastPathVisibility @ 142604a60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SWidget::UpdateFastPathVisibility
          (SWidget *this,FSlateInvalidationWidgetVisibility param_1,FHittestGrid *param_2)

{
  longlong lVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  FWidgetProxy *pFVar5;
  longlong *plVar6;
  undefined7 in_register_00000011;
  int iVar7;
  byte bVar8;
  FSlateInvalidationWidgetVisibility_u_0 FVar9;
  FSlateInvalidationWidgetVisibility_u_0 local_res8 [8];
  longlong local_38;
  TReferenceControllerBase<1> *local_30;
  SWidget *local_28;
  
  iVar7 = 0;
  bVar8 = 0;
  if ((*(uchar *)&this->VisibilityAttribute & 0x19) != 0) {
    bVar8 = 2;
  }
  bVar2 = 0;
  if ((TEnumAsByte<EVisibility::Private>)*(uchar *)&this->VisibilityAttribute ==
      EVisibility::Collapsed.Value.Value) {
    bVar2 = 8;
  }
  FVar9.Flags = bVar8 | bVar2 |
                -((*(byte *)CONCAT71(in_register_00000011,param_1.field0_0x0) & 0xc) != 0) & 4U |
                (*(byte *)CONCAT71(in_register_00000011,param_1.field0_0x0) & 3) == 3;
  bVar3 = FWidgetProxyHandle::IsValid(&this->FastPathProxyHandle,this);
  if (bVar3) {
    param_2 = ((this->FastPathProxyHandle).InvalidationRootHandle.InvalidationRoot)->RootHittestGrid
    ;
    pFVar5 = FWidgetProxyHandle::GetProxy(&this->FastPathProxyHandle);
    (pFVar5->Visibility).field0_0x0.Flags = (uchar)FVar9;
  }
  if (param_2 != (FHittestGrid *)0x0) {
    FHittestGrid::RemoveWidget(param_2,this);
  }
  FSlateCachedElementsHandle::ClearCachedElements(&(this->PersistentState).CachedElementHandle);
  plVar6 = (longlong *)(**(code **)(this->_padding_ + 0x188))(this);
  if (*(char *)((longlong)plVar6 + 0x19) != -0x24) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  lVar1 = plVar6[3];
  *(undefined1 *)(plVar6 + 3) = 1;
  iVar4 = (**(code **)*plVar6)(plVar6);
  if (0 < iVar4) {
    do {
      (**(code **)(*plVar6 + 0x38))(plVar6,&local_38,iVar7);
      local_res8[0].Flags = FVar9.Flags;
      UpdateFastPathVisibility
                (local_28,(FSlateInvalidationWidgetVisibility)SUB81(local_res8,0),param_2);
      if (local_38 != 0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_30);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar4);
  }
  *(char *)(plVar6 + 3) = (char)lVar1;
  return;
}

// UpdateFastPathVolatility @ 142604bc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWidget::UpdateFastPathVolatility(SWidget *this,bool param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  EWidgetUpdateFlags EVar6;
  EWidgetUpdateFlags EVar7;
  longlong local_28;
  TReferenceControllerBase<1> *local_20;
  SWidget *local_18;
  
  this->bInheritedVolatility = '\0';
  EVar6 = this->UpdateFlags;
  this->field_0x30 = this->field_0x30 | param_1 << 6;
  if (this->bCachedVolatile == '\x01' && this->bInheritedVolatility == '\0') {
    EVar7 = EVar6 | NeedsVolatilePaint;
    this->UpdateFlags = EVar7;
  }
  else {
    this->UpdateFlags = EVar6 | NeedsRepaint;
    FWidgetProxyHandle::UpdateWidgetFlags
              (&this->FastPathProxyHandle,this,EVar6,EVar6 | NeedsRepaint);
    EVar6 = this->UpdateFlags;
    EVar7 = EVar6 & ~NeedsVolatilePaint;
    this->UpdateFlags = EVar7;
  }
  FWidgetProxyHandle::UpdateWidgetFlags(&this->FastPathProxyHandle,this,EVar6,EVar7);
  if ((param_1) || (this->bCachedVolatile != '\0')) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  plVar3 = (longlong *)(**(code **)(this->_padding_ + 0x188))(this);
  if (*(char *)((longlong)plVar3 + 0x19) != -0x24) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  lVar1 = plVar3[3];
  *(undefined1 *)(plVar3 + 3) = 1;
  iVar2 = (**(code **)*plVar3)(plVar3);
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      (**(code **)(*plVar3 + 0x38))(plVar3,&local_28,iVar4);
      UpdateFastPathVolatility(local_18,bVar5);
      if (local_28 != 0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_20);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  *(char *)(plVar3 + 3) = (char)lVar1;
  return;
}

// UpdateFastPathWidgetRemoved @ 142604d00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWidget::UpdateFastPathWidgetRemoved(SWidget *this,FHittestGrid *param_1)

{
  undefined4 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  FSlateInvalidationRoot *this_00;
  longlong *plVar5;
  int iVar6;
  undefined1 local_28 [16];
  FSlateInvalidationWidgetIndex local_18;
  undefined4 uStack_14;
  
  local_28._0_8_ = (this->FastPathProxyHandle).InvalidationRootHandle.InvalidationRoot;
  local_28._8_8_ = *(undefined8 *)&(this->FastPathProxyHandle).InvalidationRootHandle.UniqueId;
  this_00 = FSlateInvalidationRootHandle::GetInvalidationRoot
                      ((FSlateInvalidationRootHandle *)local_28);
  if (this_00 != (FSlateInvalidationRoot *)0x0) {
    param_1 = ((this->FastPathProxyHandle).InvalidationRootHandle.InvalidationRoot)->RootHittestGrid
    ;
    FSlateInvalidationRoot::OnWidgetDestroyed(this_00,this);
  }
  FSlateInvalidationRootHandle::FSlateInvalidationRootHandle
            ((FSlateInvalidationRootHandle *)local_28);
  iVar6 = 0;
  local_18 = FSlateInvalidationWidgetIndex::Invalid;
  uStack_14 = 0;
  uVar2 = (ulonglong)(uint)FSlateInvalidationWidgetIndex::Invalid;
  (this->FastPathProxyHandle).InvalidationRootHandle.InvalidationRoot =
       (FSlateInvalidationRoot *)local_28._0_8_;
  *(undefined8 *)&(this->FastPathProxyHandle).InvalidationRootHandle.UniqueId = local_28._8_8_;
  uVar1 = (undefined4)uVar2;
  (this->FastPathProxyHandle).WidgetIndex.ArrayIndex = (short)uVar1;
  (this->FastPathProxyHandle).WidgetIndex.ElementIndex = (short)((uint)uVar1 >> 0x10);
  (this->FastPathProxyHandle).WidgetSortOrder =
       (FSlateInvalidationWidgetSortOrder)(int)(uVar2 >> 0x20);
  if (param_1 != (FHittestGrid *)0x0) {
    FHittestGrid::RemoveWidget(param_1,this);
  }
  FSlateCachedElementsHandle::RemoveFromCache(&(this->PersistentState).CachedElementHandle);
  plVar5 = (longlong *)(**(code **)(this->_padding_ + 0x188))(this);
  if (*(char *)((longlong)plVar5 + 0x19) != -0x24) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  lVar3 = plVar5[3];
  *(undefined1 *)(plVar5 + 3) = 1;
  iVar4 = (**(code **)*plVar5)(plVar5);
  if (0 < iVar4) {
    do {
      (**(code **)(*plVar5 + 0x38))(plVar5,local_28,iVar6);
      UpdateFastPathWidgetRemoved((SWidget *)CONCAT44(uStack_14,local_18),param_1);
      if ((FSlateInvalidationRoot *)local_28._0_8_ != (FSlateInvalidationRoot *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_28._8_8_);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar4);
  }
  *(char *)(plVar5 + 3) = (char)lVar3;
  return;
}

// UpdateWidgetProxy @ 142605850

void __thiscall
SWidget::UpdateWidgetProxy(SWidget *this,int param_1,FSlateCachedElementsHandle *param_2)

{
  atomic<int> *paVar1;
  FSlateCachedElementsHandle *this_00;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSlateCachedElementList *pFVar4;
  code *pcVar5;
  FWeakReferencer<1> *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  FWidgetProxy *pFVar9;
  SWidget *local_res8;
  SWidget *local_res18;
  SWidget *local_res20;
  SWidget *local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if ((((param_2->Ptr).Object != (FSlateCachedElementList *)0x0) &&
      (pTVar3 = (param_2->Ptr).WeakReferenceCount.ReferenceController,
      pTVar3 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar3->SharedReferenceCount)) {
    bVar8 = FSlateCachedElementsHandle::IsOwnedByWidget(param_2,this);
    if (!bVar8) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!CacheHandle.IsValid() || CacheHandle.IsOwnedByWidget(this)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\SWidget.cpp"
                         ,0x30a,L"");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  this_00 = &(this->PersistentState).CachedElementHandle;
  if ((((this_00->Ptr).Object != (FSlateCachedElementList *)0x0) &&
      (pTVar3 = (this->PersistentState).CachedElementHandle.Ptr.WeakReferenceCount.
                ReferenceController, pTVar3 != (TReferenceControllerBase<1> *)0x0)) &&
     (0 < (int)pTVar3->SharedReferenceCount)) {
    bVar8 = TWeakPtr<FSlateCachedElementList,1>::UEOpEquals<FSlateCachedElementList>
                      (&this_00->Ptr,&param_2->Ptr);
    if (!bVar8) {
      if ((((param_2->Ptr).Object != (FSlateCachedElementList *)0x0) &&
          (pTVar3 = (param_2->Ptr).WeakReferenceCount.ReferenceController,
          pTVar3 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar3->SharedReferenceCount))
      {
        local_res8 = this;
        `SWidget::UpdateWidgetProxy'::__l12::<lambda_1>::operator()(&local_res8);
      }
      FSlateCachedElementsHandle::RemoveFromCache(this_00);
    }
  }
  pTVar3 = (param_2->Ptr).WeakReferenceCount.ReferenceController;
  pFVar4 = (param_2->Ptr).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_30 = *(undefined4 *)&(this_00->Ptr).Object;
  uStack_2c = *(undefined4 *)((longlong)&(this->PersistentState).CachedElementHandle.Ptr.Object + 4)
  ;
  pFVar6 = &(this->PersistentState).CachedElementHandle.Ptr.WeakReferenceCount;
  uStack_28 = *(undefined4 *)&pFVar6->ReferenceController;
  uStack_24 = *(undefined4 *)
               ((longlong)
                &(this->PersistentState).CachedElementHandle.Ptr.WeakReferenceCount.
                 ReferenceController + 4);
  pTVar7 = pFVar6->ReferenceController;
  (this_00->Ptr).Object = pFVar4;
  (this->PersistentState).CachedElementHandle.Ptr.WeakReferenceCount.ReferenceController = pTVar3;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar7->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
    }
  }
  (this->PersistentState).OutgoingLayerId = param_1;
  bVar8 = FWidgetProxyHandle::IsValid(&this->FastPathProxyHandle,this);
  if (bVar8) {
    pFVar9 = FWidgetProxyHandle::GetProxy(&this->FastPathProxyHandle);
    (pFVar9->field7_0x17).PrivateDebugFlags = (pFVar9->field7_0x17).PrivateDebugFlags | 8;
    if (((bool)((pFVar9->Visibility).field0_0x0.Flags >> 1 & 1) !=
         (((byte)this->VisibilityAttribute & 0x19) != 0)) &&
       ((pFVar9->CurrentInvalidateReason & Visibility) == None)) {
      local_res18 = this;
      `SWidget::UpdateWidgetProxy'::__l15::<lambda_2>::operator()(&local_res18);
    }
    if (this->bCachedVolatile == '\x01' && this->bInheritedVolatility == '\0') {
      if ((this->UpdateFlags & NeedsVolatilePaint) == None) {
        local_res20 = this;
        `SWidget::UpdateWidgetProxy'::__l18::<lambda_3>::operator()(&local_res20);
        return;
      }
    }
    else if ((this->UpdateFlags & NeedsVolatilePaint) != None) {
      local_38 = this;
      `SWidget::UpdateWidgetProxy'::__l20::<lambda_4>::operator()(&local_38);
    }
  }
  return;
}

// operator() @ 150490540

bool __thiscall `SWidget::AssignParentWidget'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1812382117653380394>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1812382117653380394>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150490580

bool __thiscall
`SWidget::ConditionallyDetatchParentWidget'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1812382117653380371>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1812382117653380371>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150490ed0

bool __thiscall `SWidget::Paint'::__l28::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1812382117653379621>);
  if (bVar2) {
    if (*(SWidget **)this == (SWidget *)0x0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      FReflectionMetaData::GetWidgetDebugInfo(&local_18,*(SWidget **)this);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1812382117653379621>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150490f4a;
    }
  }
  bVar2 = false;
LAB_150490f4a:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150491150

bool __thiscall `SWidget::UpdateWidgetProxy'::__l12::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1812382117653380334>);
  if (bVar2) {
    if (*(SWidget **)this == (SWidget *)0x0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      FReflectionMetaData::GetWidgetPath(&local_18,*(SWidget **)this,true,false);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1812382117653380334>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504911d0;
    }
  }
  bVar2 = false;
LAB_1504911d0:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504912e0

bool __thiscall `SWidget::AssignParentWidget'::__l2::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1812382117653380393>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1812382117653380393>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150491760

bool __thiscall `SWidget::UpdateWidgetProxy'::__l15::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1812382117653380319>);
  if (bVar2) {
    if (*(SWidget **)this == (SWidget *)0x0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      FReflectionMetaData::GetWidgetPath(&local_18,*(SWidget **)this,true,false);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1812382117653380319>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504917e0;
    }
  }
  bVar2 = false;
LAB_1504917e0:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150491810

bool __thiscall `SWidget::AssignParentWidget'::__l2::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1812382117653380392>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1812382117653380392>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150491850

bool __thiscall `SWidget::UpdateWidgetProxy'::__l18::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1812382117653380314>);
  if (bVar2) {
    if (*(SWidget **)this == (SWidget *)0x0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      FReflectionMetaData::GetWidgetPath(&local_18,*(SWidget **)this,true,false);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1812382117653380314>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504918d0;
    }
  }
  bVar2 = false;
LAB_1504918d0:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504919f0

bool __thiscall `SWidget::Paint'::__l75::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_1812382117653379519>);
  if (bVar2) {
    if ((SWidget *)**(undefined8 **)this == (SWidget *)0x0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      FReflectionMetaData::GetWidgetPath(&local_18,(SWidget *)**(undefined8 **)this,true,false);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1812382117653379519>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150491a73;
    }
  }
  bVar2 = false;
LAB_150491a73:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150491ab0

bool __thiscall `SWidget::UpdateWidgetProxy'::__l20::<lambda_4>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1812382117653380308>);
  if (bVar2) {
    if (*(SWidget **)this == (SWidget *)0x0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      FReflectionMetaData::GetWidgetPath(&local_18,*(SWidget **)this,true,false);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1812382117653380308>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150491b30;
    }
  }
  bVar2 = false;
LAB_150491b30:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150491c00

bool __thiscall `SWidget::Paint'::__l77::<lambda_4>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_1812382117653379511>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1812382117653379511>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150491c40

bool __thiscall `SWidget::Paint'::__l93::<lambda_5>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_1812382117653379495>);
  if (bVar2) {
    if ((SWidget *)**(undefined8 **)this == (SWidget *)0x0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      FReflectionMetaData::GetWidgetPath(&local_18,(SWidget *)**(undefined8 **)this,true,false);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1812382117653379495>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150491cc3;
    }
  }
  bVar2 = false;
LAB_150491cc3:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

