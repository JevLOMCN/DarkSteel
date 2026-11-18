// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// FSlateWidgetClassData<SBoxPanel> @ 1426e77c0

FSlateWidgetClassData * __thiscall
FSlateWidgetClassData::FSlateWidgetClassData<SBoxPanel>
          (FSlateWidgetClassData *this,TIdentity<SBoxPanel> param_1,FName param_2,
          _func___cdecl_void_FInitializer_ptr *param_3)

{
  longlong lVar1;
  void *pvVar2;
  FName *pFVar3;
  FSlateWidgetClassData *pFVar4;
  ulonglong uVar5;
  FInitializer local_res8 [2];
  FInitializer local_res18;
  FName local_res20;
  
  pvVar2 = ThreadLocalStoragePointer;
  uVar5 = (ulonglong)_tls_index;
  (this->Descriptor).Attributes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Descriptor).Attributes.ArrayNum = 0;
  (this->Descriptor).Attributes.ArrayMax = 0;
  (this->Descriptor).Containers.AllocatorInstance.SecondaryData =
       (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
  lVar1 = *(longlong *)((longlong)pvVar2 + uVar5 * 8);
  (this->Descriptor).Containers.ArrayNum = 0;
  (this->Descriptor).Containers.ArrayMax = 1;
  this->WidgetType = param_2;
  if (*(int *)(lVar1 + 0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar3 = ::FName::FName(&local_res20,"SBoxPanel");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar3;
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
      pFVar4 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (local_res8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar4->Descriptor);
      SBoxPanel::PrivateRegisterAttributes(local_res8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(local_res8);
      atexit(`SBoxPanel::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FSlateAttributeDescriptor::FInitializer::FInitializer
            (&local_res18,&this->Descriptor,
             &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance.Descriptor);
  (*param_3)(&local_res18);
  FSlateAttributeDescriptor::FInitializer::~FInitializer(&local_res18);
  return this;
}

