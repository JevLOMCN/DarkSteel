// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 12

// SBoxPanel @ 1425be8c0

SBoxPanel * __thiscall SBoxPanel::SBoxPanel(SBoxPanel *this,EOrientation param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  SBoxPanel *pSVar5;
  FName local_res8;
  
  SWidget::SWidget((SWidget *)this);
  this->_padding_ = (longlong)&___7SBoxPanel__6B_;
  pFVar4 = ::FName::FName(&local_res8,8,L"Children",FNAME_Add);
  FVar1 = *pFVar4;
  (this->Children)._padding_ = (longlong)&___7FChildren__6B_;
  (this->Children)._padding_ = (longlong)this;
  (this->Children)._padding_ = (longlong)FVar1;
  *(undefined2 *)&(this->Children)._padding_ = 0xdc00;
  if (FVar1 == (FName)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Name.IsNone()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\ChildrenBase.h"
                       ,0x28,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pSVar5 = (SBoxPanel *)(*pcVar2)();
      return pSVar5;
    }
  }
  (this->Children)._padding_ = (longlong)&___7__TPanelChildren_VFSlot_SBoxPanel____6B_;
  (this->Children).Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Children).Children.ArrayNum = 0;
  (this->Children).Children.ArrayMax = 0;
  this->Orientation = param_1;
  return this;
}

// SBoxPanel @ 1425be990

SBoxPanel * __thiscall SBoxPanel::SBoxPanel(SBoxPanel *this)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  SBoxPanel *pSVar5;
  FName local_res8 [4];
  
  SWidget::SWidget((SWidget *)this);
  this->_padding_ = (longlong)&___7SBoxPanel__6B_;
  pFVar4 = ::FName::FName(local_res8,8,L"Children",FNAME_Add);
  FVar1 = *pFVar4;
  (this->Children)._padding_ = (longlong)&___7FChildren__6B_;
  (this->Children)._padding_ = (longlong)this;
  (this->Children)._padding_ = (longlong)FVar1;
  *(undefined2 *)&(this->Children)._padding_ = 0xdc00;
  if (FVar1 == (FName)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Name.IsNone()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\ChildrenBase.h"
                       ,0x28,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pSVar5 = (SBoxPanel *)(*pcVar2)();
      return pSVar5;
    }
  }
  (this->Children)._padding_ = (longlong)&___7__TPanelChildren_VFSlot_SBoxPanel____6B_;
  (this->Children).Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Children).Children.ArrayNum = 0;
  (this->Children).Children.ArrayMax = 0;
  this->Orientation = Orient_Horizontal;
  return this;
}

// ~SBoxPanel @ 1425c1ba0

void __thiscall SBoxPanel::~SBoxPanel(SBoxPanel *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7SBoxPanel__6B_;
  DestructItems<TUniquePtr<SBoxPanel::FSlot,TDefaultDelete<SBoxPanel::FSlot>_>,int>
            ((TUniquePtr<SBoxPanel::FSlot,TDefaultDelete<SBoxPanel::FSlot>_> *)
             (this->Children).Children.AllocatorInstance.Data,(this->Children).Children.ArrayNum);
  pFVar1 = (this->Children).Children.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FChildren::~FChildren((FChildren *)&this->Children);
  this->_padding_ = (longlong)&___7SPanel__6B_;
  SWidget::~SWidget((SWidget *)this);
  return;
}

// ClearChildren @ 1425d1730

void __thiscall SBoxPanel::ClearChildren(SBoxPanel *this)

{
  int *piVar1;
  TArray<TUniquePtr<SBoxPanel::FSlot,TDefaultDelete<SBoxPanel::FSlot>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  int iVar5;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  pTVar2 = &(this->Children).Children;
  local_18.Data = (pTVar2->AllocatorInstance).Data;
  piVar1 = &(this->Children).Children.ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_10._0_4_ = (this->Children).Children.ArrayNum;
  local_10._4_4_ = (this->Children).Children.ArrayMax;
  *piVar1 = 0;
  (this->Children).Children.ArrayNum = 0;
  DestructItems<TUniquePtr<SBoxPanel::FSlot,TDefaultDelete<SBoxPanel::FSlot>_>,int>
            ((TUniquePtr<SBoxPanel::FSlot,TDefaultDelete<SBoxPanel::FSlot>_> *)
             (pTVar2->AllocatorInstance).Data,0);
  (this->Children).Children.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  DestructItems<TUniquePtr<SBoxPanel::FSlot,TDefaultDelete<SBoxPanel::FSlot>_>,int>
            ((TUniquePtr<SBoxPanel::FSlot,TDefaultDelete<SBoxPanel::FSlot>_> *)local_18.Data,
             (int)local_10);
  uVar4 = local_10 >> 0x20;
  local_10 = local_10 & 0xffffffff00000000;
  iVar5 = 0;
  if ((int)uVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&local_18,0,(int *)((longlong)&local_10 + 4));
    iVar5 = (int)local_10;
  }
  if (pTVar2 != (TArray<TUniquePtr<SBoxPanel::FSlot,TDefaultDelete<SBoxPanel::FSlot>_>,TSizedDefaultAllocator<32>_>
                 *)&local_18) {
    DestructItems<TUniquePtr<SBoxPanel::FSlot,TDefaultDelete<SBoxPanel::FSlot>_>,int>
              ((TUniquePtr<SBoxPanel::FSlot,TDefaultDelete<SBoxPanel::FSlot>_> *)
               (pTVar2->AllocatorInstance).Data,(this->Children).Children.ArrayNum);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = local_18.Data;
    (this->Children).Children.ArrayNum = (int)local_10;
    *piVar1 = local_10._4_4_;
    local_10 = 0;
    local_18.Data = (FScriptContainerElement *)0x0;
    iVar5 = 0;
  }
  DestructItems<TUniquePtr<SBoxPanel::FSlot,TDefaultDelete<SBoxPanel::FSlot>_>,int>
            ((TUniquePtr<SBoxPanel::FSlot,TDefaultDelete<SBoxPanel::FSlot>_> *)local_18.Data,iVar5);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// ComputeDesiredSize @ 1425d1bf0

TVector2<double> * __thiscall
SBoxPanel::ComputeDesiredSize
          (SBoxPanel *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  TVector2<double> *pTVar7;
  TVector2<float>_u_0 TVar8;
  double *pdVar9;
  uint uVar10;
  TVector2<float>_u_0 TVar11;
  EVisibility EVar12;
  uint uVar13;
  longlong lVar14;
  float fVar15;
  float local_res8;
  float fStackX_c;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  
  uVar13 = 0;
  if (this->Orientation == Orient_Horizontal) {
    local_38 = 0.0;
    dStack_30 = 0.0;
    if (0 < (this->Children).Children.ArrayNum) {
      lVar14 = 0;
      TVar8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      EVar12.Value.Value = EVisibility::Collapsed.Value.Value;
      do {
        uVar10 = 0;
        if ((int)uVar13 < (this->Children).Children.ArrayNum) {
          uVar10 = ~uVar13 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , TVar8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0,
           EVar12 = EVisibility::Collapsed, bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TVector2<double> *)(*pcVar4)();
          return pTVar7;
        }
        lVar2 = *(longlong *)((this->Children).Children.AllocatorInstance.Data + lVar14);
        lVar3 = *(longlong *)(lVar2 + 0x10);
        if ((TEnumAsByte<EVisibility::Private>)*(uchar *)(lVar3 + 0x39) != EVar12.Value.Value) {
          TVar11 = TVar8;
          if ((*(byte *)(lVar3 + 0x31) & 0x20) != 0) {
            TVar11._s_0 = *(TVector2<float>_u_0 *)&((TVector2<float>_u_0 *)(lVar3 + 0x170))->_s_0;
          }
          local_res8 = TVar11._s_0.X;
          fStackX_c = TVar11._s_0.Y;
          dVar5 = (double)(*(float *)(lVar2 + 0x34) + *(float *)(lVar2 + 0x2c) + fStackX_c);
          if (dVar5 <= dStack_30) {
            dVar5 = dStack_30;
          }
          dStack_30 = dVar5;
          fVar1 = *(float *)(lVar2 + 0x4c);
          if ((0.0 < fVar1) && (local_res8 <= fVar1)) {
            local_res8 = fVar1;
          }
          fVar1 = *(float *)(lVar2 + 0x50);
          fVar15 = local_res8;
          if ((0.0 < fVar1) && (fVar15 = fVar1, local_res8 <= fVar1)) {
            fVar15 = local_res8;
          }
          local_38 = local_38 +
                     (double)(*(float *)(lVar2 + 0x30) + *(float *)(lVar2 + 0x28) + fVar15);
        }
        uVar13 = uVar13 + 1;
        lVar14 = lVar14 + 8;
      } while ((int)uVar13 < (this->Children).Children.ArrayNum);
    }
    pdVar9 = &local_38;
  }
  else {
    local_28 = 0.0;
    dStack_20 = 0.0;
    if (0 < (this->Children).Children.ArrayNum) {
      lVar14 = 0;
      TVar8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      EVar12.Value.Value = EVisibility::Collapsed.Value.Value;
      do {
        uVar10 = 0;
        if ((int)uVar13 < (this->Children).Children.ArrayNum) {
          uVar10 = ~uVar13 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , TVar8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0,
           EVar12 = EVisibility::Collapsed, bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TVector2<double> *)(*pcVar4)();
          return pTVar7;
        }
        lVar2 = *(longlong *)((this->Children).Children.AllocatorInstance.Data + lVar14);
        lVar3 = *(longlong *)(lVar2 + 0x10);
        if ((TEnumAsByte<EVisibility::Private>)*(uchar *)(lVar3 + 0x39) != EVar12.Value.Value) {
          TVar11 = TVar8;
          if ((*(byte *)(lVar3 + 0x31) & 0x20) != 0) {
            TVar11._s_0 = *(TVector2<float>_u_0 *)&((TVector2<float>_u_0 *)(lVar3 + 0x170))->_s_0;
          }
          fStackX_c = TVar11._s_0.Y;
          local_res8 = TVar11._s_0.X;
          dVar5 = (double)(*(float *)(lVar2 + 0x30) + *(float *)(lVar2 + 0x28) + local_res8);
          if (dVar5 <= local_28) {
            dVar5 = local_28;
          }
          local_28 = dVar5;
          fVar1 = *(float *)(lVar2 + 0x4c);
          if ((0.0 < fVar1) && (fStackX_c <= fVar1)) {
            fStackX_c = fVar1;
          }
          fVar1 = *(float *)(lVar2 + 0x50);
          fVar15 = fStackX_c;
          if ((0.0 < fVar1) && (fVar15 = fVar1, fStackX_c <= fVar1)) {
            fVar15 = fStackX_c;
          }
          dStack_20 = dStack_20 +
                      (double)(*(float *)(lVar2 + 0x34) + *(float *)(lVar2 + 0x2c) + fVar15);
        }
        uVar13 = uVar13 + 1;
        lVar14 = lVar14 + 8;
      } while ((int)uVar13 < (this->Children).Children.ArrayNum);
    }
    pdVar9 = &local_28;
  }
  dVar5 = pdVar9[1];
  (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar9;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5;
  return __return_storage_ptr__;
}

// GetChildren @ 1425dfc90

FChildren * __thiscall SBoxPanel::GetChildren(SBoxPanel *this)

{
  return (FChildren *)&this->Children;
}

// GetPrivateWidgetClass @ 1425e2520

FSlateWidgetClassData * __cdecl SBoxPanel::GetPrivateWidgetClass(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer local_res8;
  FName local_res10;
  FName local_res18 [2];
  FContainerInitializer local_78;
  EInvalidateWidgetReason local_68;
  ForAnyElementType local_60;
  ulonglong uStack_58;
  undefined1 local_50 [24];
  FAttributeEntry local_38;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(&local_res10,"SBoxPanel");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&local_res8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      pFVar1 = ::FName::FName(local_res18,8,L"Children",FNAME_Add);
      FSlateAttributeDescriptor::FInitializer::AddContainer(&local_res8,&local_78,*pFVar1,0x218);
      local_68 = Layout;
      local_60.Data = (FScriptContainerElement *)0x0;
      uStack_58 = 0;
      pFVar1 = ::FName::FName(local_res18,"Slot.Padding");
      local_50[0] = local_68;
      local_50._8_8_ = local_60.Data;
      local_50._16_4_ = (int)uStack_58;
      FSlateAttributeDescriptor::AddContainedAttribute
                (local_78.Descriptor,&local_38,local_78.ContainerName,*pFVar1,8,
                 (FInvalidateWidgetReasonAttribute *)local_50);
      if (((int)uStack_58 != 0) && (local_60.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_60.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_60,0,0,0x10);
        uStack_58 = uStack_58 & 0xffffffff00000000;
      }
      if (local_60.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data);
      }
      TResizingWidgetSlotMixin<SBoxPanel::FSlot>::RegisterAttributesMixin(&local_78);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&local_res8);
      atexit(`SBoxPanel::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// GetWidgetClass @ 1425e45a0

FSlateWidgetClassData * __thiscall SBoxPanel::GetWidgetClass(SBoxPanel *this)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName FStackX_10;
  FName aFStackX_18 [2];
  FContainerInitializer FStack_78;
  EInvalidateWidgetReason EStack_68;
  ForAnyElementType FStack_60;
  ulonglong uStack_58;
  undefined1 auStack_50 [24];
  FAttributeEntry FStack_38;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(&FStackX_10,"SBoxPanel");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      pFVar1 = ::FName::FName(aFStackX_18,8,L"Children",FNAME_Add);
      FSlateAttributeDescriptor::FInitializer::AddContainer(&FStackX_8,&FStack_78,*pFVar1,0x218);
      EStack_68 = Layout;
      FStack_60.Data = (FScriptContainerElement *)0x0;
      uStack_58 = 0;
      pFVar1 = ::FName::FName(aFStackX_18,"Slot.Padding");
      auStack_50[0] = EStack_68;
      auStack_50._8_8_ = FStack_60.Data;
      auStack_50._16_4_ = (int)uStack_58;
      FSlateAttributeDescriptor::AddContainedAttribute
                (FStack_78.Descriptor,&FStack_38,FStack_78.ContainerName,*pFVar1,8,
                 (FInvalidateWidgetReasonAttribute *)auStack_50);
      if (((int)uStack_58 != 0) && (FStack_60.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_60.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_60,0,0,0x10);
        uStack_58 = uStack_58 & 0xffffffff00000000;
      }
      if (FStack_60.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_60.Data);
      }
      TResizingWidgetSlotMixin<SBoxPanel::FSlot>::RegisterAttributesMixin(&FStack_78);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`SBoxPanel::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// OnArrangeChildren @ 1425eb9a0

void __thiscall
SBoxPanel::OnArrangeChildren(SBoxPanel *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  TVector2<double> local_18;
  
  if (this->Orientation == Orient_Horizontal) {
    ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>
              (GSlateFlowDirection,&this->Children,param_1,param_2,0.0,true,&local_18);
    return;
  }
  ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>
            (GSlateFlowDirection,&this->Children,param_1,param_2,0.0,true,&local_18);
  return;
}

// PrivateRegisterAttributes @ 1425f4520

void __cdecl SBoxPanel::PrivateRegisterAttributes(FInitializer *param_1)

{
  FName *pFVar1;
  FName local_res10 [3];
  FContainerInitializer local_68;
  EInvalidateWidgetReason local_58;
  ForAnyElementType local_50;
  ulonglong uStack_48;
  undefined1 local_40 [24];
  FAttributeEntry local_28;
  
  pFVar1 = ::FName::FName(local_res10,8,L"Children",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddContainer(param_1,&local_68,*pFVar1,0x218);
  local_58 = Layout;
  local_50.Data = (FScriptContainerElement *)0x0;
  uStack_48 = 0;
  pFVar1 = ::FName::FName(local_res10,"Slot.Padding");
  local_40[0] = local_58;
  local_40._8_8_ = local_50.Data;
  local_40._16_4_ = (int)uStack_48;
  FSlateAttributeDescriptor::AddContainedAttribute
            (local_68.Descriptor,&local_28,local_68.ContainerName,*pFVar1,8,
             (FInvalidateWidgetReasonAttribute *)local_40);
  if ((int)uStack_48 != 0) {
    if (local_50.Data == (FScriptContainerElement *)0x0) goto LAB_1425f45fd;
    (*(code *)**(undefined8 **)local_50.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_50,0,0,0x10);
    uStack_48 = uStack_48 & 0xffffffff00000000;
  }
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
LAB_1425f45fd:
  TResizingWidgetSlotMixin<SBoxPanel::FSlot>::RegisterAttributesMixin(&local_68);
  return;
}

// RemoveSlot @ 1425f8910

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall SBoxPanel::RemoveSlot(SBoxPanel *this,TSharedRef<SWidget,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->Children).Children.ArrayNum) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->Children).Children.ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (param_1->Object ==
          *(SWidget **)
           (*(longlong *)((this->Children).Children.AllocatorInstance.Data + lVar6) + 0x10)) {
        TArray<TUniquePtr<SBoxPanel::FSlot,TDefaultDelete<SBoxPanel::FSlot>_>,TSizedDefaultAllocator<32>_>
        ::RemoveAt(&(this->Children).Children,uVar5,Default);
        return uVar5;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->Children).Children.ArrayNum);
  }
  return -1;
}

// SetOrientation @ 1425fd790

void __thiscall SBoxPanel::SetOrientation(SBoxPanel *this,EOrientation param_1)

{
  if (this->Orientation != param_1) {
    this->Orientation = param_1;
    SWidget::Invalidate((SWidget *)this,Layout);
    return;
  }
  return;
}

