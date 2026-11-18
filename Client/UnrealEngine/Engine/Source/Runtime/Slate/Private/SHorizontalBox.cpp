// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 5

// SHorizontalBox @ 1426fe860

SHorizontalBox * __thiscall SHorizontalBox::SHorizontalBox(SHorizontalBox *this)

{
  EWidgetUpdateFlags EVar1;
  EWidgetUpdateFlags EVar2;
  
  SBoxPanel::SBoxPanel((SBoxPanel *)this,Orient_Horizontal);
  EVar1 = this->field_0x38;
  *(undefined ***)this = &___7SHorizontalBox__6B_;
  EVar2 = EVar1 & ~NeedsTick;
  this->field_0x38 = EVar2;
  FWidgetProxyHandle::UpdateWidgetFlags
            ((FWidgetProxyHandle *)&this->field_0x18,(SWidget *)this,EVar1,EVar2);
  this->field_0x30 = this->field_0x30 & 0xfe;
  return this;
}

// GetWidgetClass @ 1427461e0

FSlateWidgetClassData * __thiscall SHorizontalBox::GetWidgetClass(SHorizontalBox *this)

{
  FName *pFVar1;
  TIdentity<SBoxPanel> local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SHorizontalBox::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SHorizontalBox::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SHorizontalBox::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName((FName *)&local_res10,"SHorizontalBox");
      FSlateWidgetClassData::FSlateWidgetClassData<SBoxPanel>
                (&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SHorizontalBox::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance,local_res10,*pFVar1,PrivateRegisterAttributes);
      atexit(`SHorizontalBox::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SHorizontalBox::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SHorizontalBox::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SHorizontalBox::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// Slot @ 14278a9a0

FSlotArguments * __cdecl SHorizontalBox::Slot(FSlotArguments *__return_storage_ptr__)

{
  FSlot *this;
  FSlot *local_res8 [4];
  
  this = ::operator_new(0x58);
  local_res8[0] = (FSlot *)0x0;
  if (this != (FSlot *)0x0) {
    *(undefined8 *)this = 0;
    *(undefined8 *)&this->field_0x8 = 0;
    *(undefined8 *)&this->field_0x10 = 0;
    *(undefined8 *)&this->field_0x18 = 0;
    *(undefined8 *)&this->field_0x20 = 0;
    *(undefined8 *)&this->field_0x28 = 0;
    *(undefined8 *)&this->field_0x30 = 0;
    *(undefined8 *)&this->field_0x38 = 0;
    *(undefined8 *)&this->field_0x40 = 0;
    *(undefined8 *)&this->field_0x48 = 0;
    *(undefined8 *)&this->field_0x50 = 0;
    local_res8[0] = FSlot::FSlot(this);
  }
  FSlot::FSlotArguments::FSlotArguments(__return_storage_ptr__,(FSlot *)local_res8);
  return __return_storage_ptr__;
}

// AddSlot @ 1427c9f70

FScopedWidgetSlotArguments<SHorizontalBox::FSlot> * __thiscall
SHorizontalBox::AddSlot
          (SHorizontalBox *this,
          FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *__return_storage_ptr__)

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
       (longlong)&___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
  __return_storage_ptr__->Children = (TPanelChildren<SBoxPanel::FSlot> *)&this->field_0x218;
  return __return_storage_ptr__;
}

// InsertSlot @ 1429520f0

FScopedWidgetSlotArguments<SHorizontalBox::FSlot> * __thiscall
SHorizontalBox::InsertSlot
          (SHorizontalBox *this,
          FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *__return_storage_ptr__,int param_1)

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
  __return_storage_ptr__->Index = param_1;
  __return_storage_ptr__->_padding_ =
       (longlong)&___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
  __return_storage_ptr__->Children = (TPanelChildren<SBoxPanel::FSlot> *)&this->field_0x218;
  return __return_storage_ptr__;
}

