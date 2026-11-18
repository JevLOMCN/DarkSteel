// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 2

// SStackBox @ 146988800

SStackBox * __thiscall SStackBox::SStackBox(SStackBox *this)

{
  EWidgetUpdateFlags EVar1;
  EWidgetUpdateFlags EVar2;
  
  SBoxPanel::SBoxPanel((SBoxPanel *)this);
  EVar1 = this->field_0x38;
  *(undefined ***)this = &___7SStackBox__6B_;
  EVar2 = EVar1 & ~NeedsTick;
  this->field_0x38 = EVar2;
  FWidgetProxyHandle::UpdateWidgetFlags
            ((FWidgetProxyHandle *)&this->field_0x18,(SWidget *)this,EVar1,EVar2);
  this->field_0x30 = this->field_0x30 & 0xfe;
  return this;
}

// GetWidgetClass @ 1469da2a0

FSlateWidgetClassData * __thiscall SStackBox::GetWidgetClass(SStackBox *this)

{
  FName *pFVar1;
  TIdentity<SBoxPanel> local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SStackBox::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SStackBox::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SStackBox::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName((FName *)&local_res10,"SStackBox");
      FSlateWidgetClassData::FSlateWidgetClassData<SBoxPanel>
                (&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SStackBox::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance,local_res10,*pFVar1,PrivateRegisterAttributes);
      atexit(`SStackBox::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SStackBox::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SStackBox::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SStackBox::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

