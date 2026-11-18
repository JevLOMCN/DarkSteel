// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 14

// SCanvas @ 1429b9fd0

SCanvas * __thiscall SCanvas::SCanvas(SCanvas *this)

{
  EWidgetUpdateFlags EVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  SCanvas *pSVar6;
  EWidgetUpdateFlags EVar7;
  FName local_res8 [4];
  
  SPanel::SPanel((SPanel *)this);
  this->_padding_ = (longlong)&___7SCanvas__6B_;
  pFVar5 = ::FName::FName(local_res8,8,L"Children",FNAME_Add);
  FVar2 = *pFVar5;
  (this->Children)._padding_ = (longlong)&___7FChildren__6B_;
  (this->Children)._padding_ = (longlong)this;
  (this->Children)._padding_ = (longlong)FVar2;
  *(undefined2 *)&(this->Children)._padding_ = 0xdc00;
  if (FVar2 == (FName)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Name.IsNone()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\ChildrenBase.h"
                       ,0x28,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pSVar6 = (SCanvas *)(*pcVar3)();
      return pSVar6;
    }
  }
  (this->Children)._padding_ = (longlong)&___7__TPanelChildren_VFSlot_SCanvas____6B_;
  (this->Children).Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Children).Children.ArrayNum = 0;
  (this->Children).Children.ArrayMax = 0;
  EVar1 = (EWidgetUpdateFlags)this->_padding_;
  EVar7 = EVar1 & ~NeedsTick;
  *(EWidgetUpdateFlags *)&this->_padding_ = EVar7;
  FWidgetProxyHandle::UpdateWidgetFlags
            ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar1,EVar7);
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  return this;
}

// ~SCanvas @ 1429bf1d0

void __thiscall SCanvas::~SCanvas(SCanvas *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7SCanvas__6B_;
  DestructItems<TUniquePtr<SCanvas::FSlot,TDefaultDelete<SCanvas::FSlot>_>,int>
            ((TUniquePtr<SCanvas::FSlot,TDefaultDelete<SCanvas::FSlot>_> *)
             (this->Children).Children.AllocatorInstance.Data,(this->Children).Children.ArrayNum);
  pFVar1 = (this->Children).Children.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FChildren::~FChildren((FChildren *)&this->Children);
  SPanel::~SPanel((SPanel *)this);
  return;
}

// AddSlot @ 1429c5a60

FScopedWidgetSlotArguments * __thiscall
SCanvas::AddSlot(SCanvas *this,FScopedWidgetSlotArguments *__return_storage_ptr__)

{
  FSlot *this_00;
  FSlot *local_res8;
  
  this_00 = ::operator_new(0x50);
  local_res8 = (FSlot *)0x0;
  if (this_00 != (FSlot *)0x0) {
    local_res8 = FSlot::FSlot(this_00);
  }
  FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)__return_storage_ptr__,(FSlot *)&local_res8);
  __return_storage_ptr__->Index = -1;
  __return_storage_ptr__->Children = &this->Children;
  *(undefined8 *)&__return_storage_ptr__->Added = 0;
  *(undefined8 *)&(__return_storage_ptr__->Added).field_0x28 = 0;
  return __return_storage_ptr__;
}

// ClearChildren @ 1429cd0d0

void __thiscall SCanvas::ClearChildren(SCanvas *this)

{
  int *piVar1;
  TArray<TUniquePtr<SCanvas::FSlot,TDefaultDelete<SCanvas::FSlot>_>,TSizedDefaultAllocator<32>_>
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
  DestructItems<TUniquePtr<SCanvas::FSlot,TDefaultDelete<SCanvas::FSlot>_>,int>
            ((TUniquePtr<SCanvas::FSlot,TDefaultDelete<SCanvas::FSlot>_> *)
             (pTVar2->AllocatorInstance).Data,0);
  (this->Children).Children.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  DestructItems<TUniquePtr<SCanvas::FSlot,TDefaultDelete<SCanvas::FSlot>_>,int>
            ((TUniquePtr<SCanvas::FSlot,TDefaultDelete<SCanvas::FSlot>_> *)local_18.Data,
             (int)local_10);
  uVar4 = local_10 >> 0x20;
  local_10 = local_10 & 0xffffffff00000000;
  iVar5 = 0;
  if ((int)uVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&local_18,0,(int *)((longlong)&local_10 + 4));
    iVar5 = (int)local_10;
  }
  if (pTVar2 != (TArray<TUniquePtr<SCanvas::FSlot,TDefaultDelete<SCanvas::FSlot>_>,TSizedDefaultAllocator<32>_>
                 *)&local_18) {
    DestructItems<TUniquePtr<SCanvas::FSlot,TDefaultDelete<SCanvas::FSlot>_>,int>
              ((TUniquePtr<SCanvas::FSlot,TDefaultDelete<SCanvas::FSlot>_> *)
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
  DestructItems<TUniquePtr<SCanvas::FSlot,TDefaultDelete<SCanvas::FSlot>_>,int>
            ((TUniquePtr<SCanvas::FSlot,TDefaultDelete<SCanvas::FSlot>_> *)local_18.Data,iVar5);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// ComputeDesiredSize @ 1429ce740

TVector2<double> * __thiscall
SCanvas::ComputeDesiredSize(SCanvas *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  return __return_storage_ptr__;
}

// Construct @ 1429d0900

void __thiscall SCanvas::Construct(SCanvas *this,FArguments *param_1)

{
  TArray<SCanvas::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (param_1->_Slots).AllocatorInstance.Data;
  (param_1->_Slots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = (param_1->_Slots).ArrayNum;
  local_18.ArrayMax = (param_1->_Slots).ArrayMax;
  (param_1->_Slots).ArrayNum = 0;
  (param_1->_Slots).ArrayMax = 0;
  TPanelChildren<SCanvas::FSlot>::AddSlots(&this->Children,&local_18);
  return;
}

// GetChildren @ 1429ea5c0

FChildren * __thiscall SCanvas::GetChildren(SCanvas *this)

{
  return (FChildren *)&this->Children;
}

// GetPrivateWidgetClass @ 1429ecf30

FSlateWidgetClassData * __cdecl SCanvas::GetPrivateWidgetClass(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FAttributeEntry *this;
  FInitializer local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FContainerInitializer local_68;
  undefined1 local_58 [8];
  ForAnyElementType local_50;
  ulonglong uStack_48;
  FAttributeEntry local_40;
  
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCanvas::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__ <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c)) {
    return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCanvas::GetPrivateWidgetClass(void)'
            ::__l2::WidgetClassDataInstance;
  }
  _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCanvas::GetPrivateWidgetClass(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCanvas::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__ != -1) {
    return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCanvas::GetPrivateWidgetClass(void)'
            ::__l2::WidgetClassDataInstance;
  }
  pFVar1 = ::FName::FName(&local_res10,"SCanvas");
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCanvas::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCanvas::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCanvas::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCanvas::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCanvas::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
       (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCanvas::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCanvas::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
  pFVar2 = SWidget::GetPrivateWidgetClass();
  FSlateAttributeDescriptor::FInitializer::FInitializer
            (&local_res8,
             &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCanvas::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
  pFVar1 = ::FName::FName(&local_res18,8,L"Children",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddContainer(&local_res8,&local_68,*pFVar1,0x218);
  local_58[0] = Paint;
  local_50.Data = (FScriptContainerElement *)0x0;
  uStack_48 = 0;
  pFVar1 = ::FName::FName(&local_res18,"Slot.Size");
  FSlateAttributeDescriptor::FContainerInitializer::AddContainedAttribute
            (&local_68,&local_40,*pFVar1,0x20,(FInvalidateWidgetReasonAttribute *)local_58);
  if ((int)uStack_48 != 0) {
    if (local_50.Data == (FScriptContainerElement *)0x0) goto LAB_1429ed0cb;
    (*(code *)**(undefined8 **)local_50.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_50,0,0,0x10);
    uStack_48 = uStack_48 & 0xffffffff00000000;
  }
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
LAB_1429ed0cb:
  local_58[0] = Paint;
  local_50.Data = (FScriptContainerElement *)0x0;
  uStack_48 = 0;
  pFVar1 = ::FName::FName(&local_res18,"Slot.Position");
  this = FSlateAttributeDescriptor::FContainerInitializer::AddContainedAttribute
                   (&local_68,&local_40,*pFVar1,0x10,(FInvalidateWidgetReasonAttribute *)local_58);
  pFVar1 = ::FName::FName(&local_res20,"Slot.Size");
  FSlateAttributeDescriptor::FContainerInitializer::FAttributeEntry::UpdatePrerequisite
            (this,*pFVar1);
  if (((int)uStack_48 != 0) && (local_50.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_50.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_50,0,0,0x10);
    uStack_48 = uStack_48 & 0xffffffff00000000;
  }
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  FSlateAttributeDescriptor::FInitializer::~FInitializer(&local_res8);
  atexit(`SCanvas::GetPrivateWidgetClass'::__l2::
         _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
  _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCanvas::GetPrivateWidgetClass(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCanvas::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// GetWidgetClass @ 1429efe90

FSlateWidgetClassData * __thiscall SCanvas::GetWidgetClass(SCanvas *this)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FAttributeEntry *this_00;
  FInitializer FStackX_8;
  FName FStackX_10;
  FName FStackX_18;
  FName FStackX_20;
  FContainerInitializer FStack_68;
  undefined1 auStack_58 [8];
  ForAnyElementType FStack_50;
  ulonglong uStack_48;
  FAttributeEntry FStack_40;
  
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCanvas::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__ <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c)) {
    return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCanvas::GetPrivateWidgetClass(void)'
            ::__l2::WidgetClassDataInstance;
  }
  _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCanvas::GetPrivateWidgetClass(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCanvas::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__ != -1) {
    return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCanvas::GetPrivateWidgetClass(void)'
            ::__l2::WidgetClassDataInstance;
  }
  pFVar1 = ::FName::FName(&FStackX_10,"SCanvas");
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCanvas::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCanvas::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCanvas::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCanvas::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCanvas::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
       (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCanvas::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCanvas::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
  pFVar2 = SWidget::GetPrivateWidgetClass();
  FSlateAttributeDescriptor::FInitializer::FInitializer
            (&FStackX_8,
             &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCanvas::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
  pFVar1 = ::FName::FName(&FStackX_18,8,L"Children",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddContainer(&FStackX_8,&FStack_68,*pFVar1,0x218);
  auStack_58[0] = Paint;
  FStack_50.Data = (FScriptContainerElement *)0x0;
  uStack_48 = 0;
  pFVar1 = ::FName::FName(&FStackX_18,"Slot.Size");
  FSlateAttributeDescriptor::FContainerInitializer::AddContainedAttribute
            (&FStack_68,&FStack_40,*pFVar1,0x20,(FInvalidateWidgetReasonAttribute *)auStack_58);
  if ((int)uStack_48 != 0) {
    if (FStack_50.Data == (FScriptContainerElement *)0x0) goto LAB_1429ed0cb;
    (*(code *)**(undefined8 **)FStack_50.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_50,0,0,0x10);
    uStack_48 = uStack_48 & 0xffffffff00000000;
  }
  if (FStack_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_50.Data);
  }
LAB_1429ed0cb:
  auStack_58[0] = Paint;
  FStack_50.Data = (FScriptContainerElement *)0x0;
  uStack_48 = 0;
  pFVar1 = ::FName::FName(&FStackX_18,"Slot.Position");
  this_00 = FSlateAttributeDescriptor::FContainerInitializer::AddContainedAttribute
                      (&FStack_68,&FStack_40,*pFVar1,0x10,
                       (FInvalidateWidgetReasonAttribute *)auStack_58);
  pFVar1 = ::FName::FName(&FStackX_20,"Slot.Size");
  FSlateAttributeDescriptor::FContainerInitializer::FAttributeEntry::UpdatePrerequisite
            (this_00,*pFVar1);
  if (((int)uStack_48 != 0) && (FStack_50.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_50.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_50,0,0,0x10);
    uStack_48 = uStack_48 & 0xffffffff00000000;
  }
  if (FStack_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_50.Data);
  }
  FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
  atexit(`SCanvas::GetPrivateWidgetClass'::__l2::
         _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
  _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCanvas::GetPrivateWidgetClass(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCanvas::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// OnArrangeChildren @ 1429f80a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SCanvas::OnArrangeChildren(SCanvas *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStackY_128 [32];
  FSlateLayoutTransform local_f0;
  FDeprecateVector2DParameter local_e0;
  double dStack_d8;
  double local_d0;
  double dStack_c8;
  FArrangedWidget local_b8;
  ulonglong local_68;
  
  dVar4 = __real_bfe0000000000000;
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_128;
  iVar9 = (this->Children).Children.ArrayNum;
  if (0 < iVar9) {
    uVar7 = 0;
    lVar8 = 0;
    uVar12 = (uint)__xmm_80000000000000008000000000000000;
    uVar13 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    do {
      uVar6 = 0;
      if ((int)uVar7 < iVar9) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      dVar11 = 0.0;
      lVar2 = *(longlong *)((this->Children).Children.AllocatorInstance.Data + lVar8);
      auVar1 = *(undefined1 (*) [16])(lVar2 + 0x40);
      if (*(int *)(lVar2 + 0x28) == 2) {
        dVar11 = auVar1._0_8_ * dVar4;
      }
      else if (*(int *)(lVar2 + 0x28) == 3) {
        dVar11 = (double)CONCAT44(auVar1._4_4_ ^ uVar13,auVar1._0_4_ ^ uVar12);
      }
      dVar10 = 0.0;
      dStack_d8 = auVar1._8_8_;
      if (*(int *)(lVar2 + 0x2c) == 2) {
        dVar10 = dStack_d8 * dVar4;
      }
      else if (*(int *)(lVar2 + 0x2c) == 3) {
        dVar10 = (double)CONCAT44(auVar1._12_4_ ^ uVar13,auVar1._8_4_ ^ uVar12);
      }
      local_d0 = *(double *)(lVar2 + 0x30);
      dStack_c8 = *(double *)(lVar2 + 0x38);
      local_f0.Scale = 1.0;
      local_f0.Translation.field0_0x0._s_0.X = (float)(dVar11 + local_d0);
      local_e0._4_4_ = (float)dStack_d8;
      local_e0._0_4_ = (float)auVar1._0_8_;
      local_f0.Translation.field0_0x0._s_0.Y = (float)(dVar10 + dStack_c8);
      FGeometry::MakeChild
                (param_1,&local_b8,(TSharedRef<SWidget,1> *)(lVar2 + 0x10),&local_e0,&local_f0);
      FArrangedChildren::AddWidget(param_2,&local_b8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b8.Widget.SharedReferenceCount.ReferenceController);
      iVar9 = (this->Children).Children.ArrayNum;
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < iVar9);
  }
  return;
}

// OnPaint @ 1429fd6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SCanvas::OnPaint(SCanvas *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
                FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ForElementType<FArrangedWidget> FVar5;
  uint uVar6;
  FArrangedWidget *pFVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStackY_1f8 [32];
  FPaintArgs local_1b0;
  FArrangedChildren local_180;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_180.VisibilityFilter = (EVisibility)EVisibility::Visible.Value.Value;
  local_180.Array.AllocatorInstance.SecondaryData = (ForElementType<FArrangedWidget>)0x0;
  local_180.Array.ArrayNum = 0;
  local_180.Array.ArrayMax = 4;
  local_180.bAllow3DWidgets = false;
  SWidget::ArrangeChildren((SWidget *)this,param_2,&local_180,false);
  if ((param_7) && (*(char *)((longlong)&this->_padding_ + 2) != '\0')) {
    bVar9 = true;
  }
  else {
    bVar9 = false;
  }
  local_1b0.RootGrid = param_1->RootGrid;
  local_1b0.CurrentGrid = param_1->CurrentGrid;
  local_1b0.WindowOffset.field0_0x0 = (param_1->WindowOffset).field0_0x0;
  local_1b0.CurrentTime = param_1->CurrentTime;
  local_1b0.DeltaTime = param_1->DeltaTime;
  local_1b0._44_4_ = *(undefined4 *)&param_1->field_0x2c;
  uVar6 = 0;
  local_1b0.PaintParentPtr = (SWidget *)this;
  if (0 < local_180.Array.ArrayNum) {
    lVar8 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar6 < local_180.Array.ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
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
      FVar5 = (ForElementType<FArrangedWidget>)&local_180.Array;
      if (local_180.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
        FVar5 = local_180.Array.AllocatorInstance.SecondaryData;
      }
      pFVar7 = (FArrangedWidget *)((longlong)FVar5 + lVar8);
      bVar2 = SWidget::IsChildWidgetCulled((SWidget *)this,param_3,pFVar7);
      iVar4 = param_5;
      if ((!bVar2) &&
         (iVar4 = SWidget::Paint((pFVar7->Widget).Object,&local_1b0,(FGeometry *)pFVar7,param_3,
                                 param_4,param_5 + 1,param_6,bVar9), iVar4 < param_5)) {
        iVar4 = param_5;
      }
      param_5 = iVar4;
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 0x48;
    } while ((int)uVar6 < local_180.Array.ArrayNum);
  }
  FVar5 = (ForElementType<FArrangedWidget>)&local_180.Array;
  if (local_180.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
    FVar5 = local_180.Array.AllocatorInstance.SecondaryData;
  }
  DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar5,local_180.Array.ArrayNum);
  if (local_180.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)local_180.Array.AllocatorInstance.SecondaryData);
  }
  return param_5;
}

// PrivateRegisterAttributes @ 142a02cf0

void __cdecl SCanvas::PrivateRegisterAttributes(FInitializer *param_1)

{
  FName *pFVar1;
  FAttributeEntry *this;
  FName local_res10;
  FName local_res18;
  FContainerInitializer local_48;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  ulonglong uStack_28;
  FAttributeEntry local_20;
  
  pFVar1 = ::FName::FName(&local_res10,8,L"Children",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddContainer(param_1,&local_48,*pFVar1,0x218);
  local_38[0] = Paint;
  local_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(&local_res10,"Slot.Size");
  FSlateAttributeDescriptor::FContainerInitializer::AddContainedAttribute
            (&local_48,&local_20,*pFVar1,0x20,(FInvalidateWidgetReasonAttribute *)local_38);
  if ((int)uStack_28 != 0) {
    if (local_30.Data == (FScriptContainerElement *)0x0) goto LAB_142a02db2;
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
LAB_142a02db2:
  local_38[0] = Paint;
  local_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(&local_res10,"Slot.Position");
  this = FSlateAttributeDescriptor::FContainerInitializer::AddContainedAttribute
                   (&local_48,&local_20,*pFVar1,0x10,(FInvalidateWidgetReasonAttribute *)local_38);
  pFVar1 = ::FName::FName(&local_res18,"Slot.Size");
  FSlateAttributeDescriptor::FContainerInitializer::FAttributeEntry::UpdatePrerequisite
            (this,*pFVar1);
  if ((int)uStack_28 != 0) {
    if (local_30.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  return;
}

// RemoveSlot @ 142a05bb0

int __thiscall SCanvas::RemoveSlot(SCanvas *this,TSharedRef<SWidget,1> *param_1)

{
  int iVar1;
  
  iVar1 = TPanelChildren<SCanvas::FSlot>::Remove(&this->Children,param_1);
  return iVar1;
}

// Slot @ 142a0e3b0

FSlotArguments * __cdecl SCanvas::Slot(FSlotArguments *__return_storage_ptr__)

{
  FSlot *this;
  FSlot *local_res8 [4];
  
  this = ::operator_new(0x50);
  local_res8[0] = (FSlot *)0x0;
  if (this != (FSlot *)0x0) {
    local_res8[0] = FSlot::FSlot(this);
  }
  FSlot::FSlotArguments::FSlotArguments(__return_storage_ptr__,(FSlot *)local_res8);
  return __return_storage_ptr__;
}

