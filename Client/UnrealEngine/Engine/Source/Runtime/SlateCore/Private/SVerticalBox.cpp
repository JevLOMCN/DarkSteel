// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 8

// SVerticalBox @ 1425bf1b0

SVerticalBox * __thiscall SVerticalBox::SVerticalBox(SVerticalBox *this)

{
  EWidgetUpdateFlags EVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  SVerticalBox *pSVar6;
  EWidgetUpdateFlags EVar7;
  FName local_res8 [4];
  
  SWidget::SWidget((SWidget *)this);
  *(undefined ***)this = &___7SBoxPanel__6B_;
  pFVar5 = ::FName::FName(local_res8,8,L"Children",FNAME_Add);
  FVar2 = *pFVar5;
  *(undefined ***)&this->field_0x218 = &___7FChildren__6B_;
  *(SVerticalBox **)&this->field_0x220 = this;
  *(uint *)&this->field_0x228 = FVar2.ComparisonIndex.Value;
  *(uint *)&this->field_0x22c = FVar2.Number;
  *(undefined2 *)&this->field_0x230 = 0xdc00;
  if (FVar2 == (FName)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Name.IsNone()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\ChildrenBase.h"
                       ,0x28,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pSVar6 = (SVerticalBox *)(*pcVar3)();
      return pSVar6;
    }
  }
  *(undefined ***)&this->field_0x218 = &___7__TPanelChildren_VFSlot_SBoxPanel____6B_;
  *(undefined8 *)&this->field_0x238 = 0;
  *(undefined8 *)&this->field_0x240 = 0;
  EVar1 = this->field_0x38;
  *(undefined4 *)&this->field_0x248 = 1;
  EVar7 = EVar1 & ~NeedsTick;
  *(undefined ***)this = &___7SVerticalBox__6B_;
  this->field_0x38 = EVar7;
  FWidgetProxyHandle::UpdateWidgetFlags
            ((FWidgetProxyHandle *)&this->field_0x18,(SWidget *)this,EVar1,EVar7);
  this->field_0x30 = this->field_0x30 & 0xfe;
  return this;
}

// AddSlot @ 1425c9960

FScopedWidgetSlotArguments<SVerticalBox::FSlot> * __thiscall
SVerticalBox::AddSlot
          (SVerticalBox *this,
          FScopedWidgetSlotArguments<SVerticalBox::FSlot> *__return_storage_ptr__)

{
  FSlot *this_00;
  FSlot *local_res8;
  
  this_00 = ::operator_new(0x58);
  local_res8 = (FSlot *)0x0;
  if (this_00 != (FSlot *)0x0) {
    *(undefined8 *)this_00 = 0;
    *(undefined8 *)&this_00->field_0x8 = 0;
    *(undefined8 *)&this_00->field_0x10 = 0;
    *(undefined8 *)&this_00->field_0x18 = 0;
    *(undefined8 *)&this_00->field_0x20 = 0;
    *(undefined8 *)&this_00->field_0x28 = 0;
    *(undefined8 *)&this_00->field_0x30 = 0;
    *(undefined8 *)&this_00->field_0x38 = 0;
    *(undefined8 *)&this_00->field_0x40 = 0;
    *(undefined8 *)&this_00->field_0x48 = 0;
    *(undefined8 *)&this_00->field_0x50 = 0;
    local_res8 = FSlot::FSlot(this_00);
  }
  FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&__return_storage_ptr__->_padding_,(FSlot *)&local_res8);
  __return_storage_ptr__->Index = -1;
  __return_storage_ptr__->_padding_ =
       (longlong)&___7__FScopedWidgetSlotArguments_VFSlot_SVerticalBox___SBoxPanel__6B_;
  __return_storage_ptr__->Children = (TPanelChildren<SBoxPanel::FSlot> *)&this->field_0x218;
  return __return_storage_ptr__;
}

// Construct @ 1425d4b40

void __thiscall SVerticalBox::Construct(SVerticalBox *this,FArguments *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FSlotArguments *pFVar6;
  FSlotArguments *pFVar7;
  undefined1 local_res8 [8];
  undefined8 *local_38 [2];
  
  uVar4 = (param_1->_Slots).ArrayNum;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if (*(int *)&this->field_0x244 < (int)uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar4,(ForAnyElementType *)&this->field_0x238,*(int *)&this->field_0x240,
               (int *)&this->field_0x244);
  }
  iVar1 = (param_1->_Slots).ArrayNum;
  pFVar6 = (FSlotArguments *)(param_1->_Slots).AllocatorInstance.Data;
  pFVar7 = pFVar6 + iVar1;
  while( true ) {
    if ((param_1->_Slots).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<SVerticalBox::FSlot::FSlotArguments_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar7) break;
    local_38[0] = *(undefined8 **)pFVar6;
    *(undefined8 *)pFVar6 = 0;
    if (local_38[0] == (undefined8 *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewSlot.Get()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                         ,0x1fd,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((*(undefined8 ***)&this->field_0x238 <= local_38) &&
       (local_38 < *(undefined8 ***)&this->field_0x238 + *(int *)&this->field_0x244)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar4 = *(uint *)&this->field_0x240;
    if (uVar4 == *(uint *)&this->field_0x244) {
      uVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&this->field_0x238,(int *)&this->field_0x244);
    }
    *(uint *)&this->field_0x240 = uVar4 + 1;
    *(undefined8 **)((longlong)(int)uVar4 * 8 + *(longlong *)&this->field_0x238) = local_38[0];
    local_38[0] = (undefined8 *)0x0;
    uVar5 = 0;
    if ((int)uVar4 < *(int *)&this->field_0x240) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if (uVar5 == 0) {
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
    SBoxPanel::TSlot<SBoxPanel::FSlot>::Construct
              (*(TSlot<SBoxPanel::FSlot> **)
                ((longlong)(int)uVar4 * 8 + *(longlong *)&this->field_0x238),
               (FChildren *)&this->field_0x218,pFVar6);
    if (local_38[0] != (undefined8 *)0x0) {
      (**(code **)*local_38[0])(local_38[0],1);
    }
    pFVar6 = pFVar6 + 1;
  }
  return;
}

// GetPrivateWidgetClass @ 1425e2c70

FSlateWidgetClassData * __cdecl SVerticalBox::GetPrivateWidgetClass(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer local_res8;
  FName local_res10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SVerticalBox::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SVerticalBox::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SVerticalBox::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(local_res10,"SVerticalBox");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SVerticalBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SVerticalBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SVerticalBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SVerticalBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SVerticalBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SVerticalBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SVerticalBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SBoxPanel::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&local_res8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SVerticalBox::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&local_res8);
      atexit(`SVerticalBox::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SVerticalBox::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SVerticalBox::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SVerticalBox::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// GetSlot @ 1425e3460

FSlot * __thiscall SVerticalBox::GetSlot(SVerticalBox *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FSlot *pFVar3;
  FSlot *pFVar4;
  
  if ((param_1 < 0) || (*(int *)&this->field_0x240 <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("this->IsValidSlotIndex(SlotIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\SBoxPanel.cpp"
                       ,0x53,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSlot *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar4 = TPanelChildren<SBoxPanel::FSlot>::operator[]
                     ((TPanelChildren<SBoxPanel::FSlot> *)&this->field_0x218,param_1);
  return (FSlot *)pFVar4;
}

// GetSlot @ 1425e34c0

FSlot * __thiscall SVerticalBox::GetSlot(SVerticalBox *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FSlot *pFVar3;
  FSlot *pFVar4;
  
  if ((param_1 < 0) || (*(int *)&this->field_0x240 <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("this->IsValidSlotIndex(SlotIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\SBoxPanel.cpp"
                       ,0x5a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSlot *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar4 = TPanelChildren<SBoxPanel::FSlot>::operator[]
                     ((TPanelChildren<SBoxPanel::FSlot> *)&this->field_0x218,param_1);
  return (FSlot *)pFVar4;
}

// GetWidgetClass @ 1425e45e0

FSlateWidgetClassData * __thiscall SVerticalBox::GetWidgetClass(SVerticalBox *this)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName aFStackX_10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SVerticalBox::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SVerticalBox::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SVerticalBox::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(aFStackX_10,"SVerticalBox");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SVerticalBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SVerticalBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SVerticalBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SVerticalBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SVerticalBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SVerticalBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SVerticalBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SBoxPanel::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SVerticalBox::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`SVerticalBox::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SVerticalBox::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SVerticalBox::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SVerticalBox::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// PrivateRegisterAttributes @ 1425f4b90

void __cdecl SVerticalBox::PrivateRegisterAttributes(FInitializer *param_1)

{
  return;
}

