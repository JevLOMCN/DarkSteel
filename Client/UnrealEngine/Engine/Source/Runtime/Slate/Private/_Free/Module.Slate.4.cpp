// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 307

// `dynamic_initializer_for_'CVarDefaultTextFlowDirection'' @ 140f43880

void __cdecl _dynamic_initializer_for__CVarDefaultTextFlowDirection__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarDefaultTextFlowDirection,L"Slate.DefaultTextFlowDirection",local_res8,
             L"0: Auto (default), 1: LeftToRight, 2: RightToLeft.",0);
  atexit(_dynamic_atexit_destructor_for__CVarDefaultTextFlowDirection__);
  return;
}

// `dynamic_initializer_for_'CVarSlateShowTextDebugging'' @ 140f438d0

void __cdecl _dynamic_initializer_for__CVarSlateShowTextDebugging__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSlateShowTextDebugging,L"Slate.ShowTextDebugging",&GShowTextDebugging,
             L"Show debugging painting for text rendering.",0);
  atexit(_dynamic_atexit_destructor_for__CVarSlateShowTextDebugging__);
  return;
}

// `dynamic_initializer_for_'ClassRegistration__SButton'' @ 140f43920

void __cdecl _dynamic_initializer_for__ClassRegistration__SButton__(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName aFStackX_10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SButton::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SButton::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SButton::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = FName::FName(aFStackX_10,"SButton");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SButton::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SButton::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SButton::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SButton::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SButton::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SButton::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SButton::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SBorder::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SButton::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      SButton::PrivateRegisterAttributes(&FStackX_8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`SButton::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SButton::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return;
    }
  }
  return;
}

// `dynamic_initializer_for_'ClassRegistration__SCircularThrobber'' @ 140f43930

void __cdecl _dynamic_initializer_for__ClassRegistration__SCircularThrobber__(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName FStackX_10;
  FName FStackX_18;
  FAttributeEntry FStack_38;
  undefined1 auStack_28 [8];
  ForAnyElementType FStack_20;
  ulonglong uStack_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCircularThrobber::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCircularThrobber::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCircularThrobber::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = FName::FName(&FStackX_10,"SCircularThrobber");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCircularThrobber::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCircularThrobber::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCircularThrobber::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCircularThrobber::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCircularThrobber::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCircularThrobber::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCircularThrobber::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCircularThrobber::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      auStack_28[0] = Paint;
      FStack_20.Data = (FScriptContainerElement *)0x0;
      uStack_18 = 0;
      pFVar1 = FName::FName(&FStackX_18,0xf,L"ColorAndOpacity",FNAME_Add);
      FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
                (&FStackX_8,&FStack_38,*pFVar1,0x2ac,(FInvalidateWidgetReasonAttribute *)auStack_28)
      ;
      if (((int)uStack_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_20.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
        uStack_18 = uStack_18 & 0xffffffff00000000;
      }
      if (FStack_20.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_20.Data);
      }
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`SCircularThrobber::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCircularThrobber::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return;
    }
  }
  return;
}

// `dynamic_initializer_for_'ClassRegistration__SColorBlock'' @ 140f43940

void __cdecl _dynamic_initializer_for__ClassRegistration__SColorBlock__(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName aFStackX_10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorBlock::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorBlock::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorBlock::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = FName::FName(aFStackX_10,"SColorBlock");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorBlock::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorBlock::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorBlock::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorBlock::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorBlock::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorBlock::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorBlock::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorBlock::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      SColorBlock::PrivateRegisterAttributes(&FStackX_8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`SColorBlock::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorBlock::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return;
    }
  }
  return;
}

// `dynamic_initializer_for_'ClassRegistration__SColorGradingWheel'' @ 140f43950

void __cdecl _dynamic_initializer_for__ClassRegistration__SColorGradingWheel__(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName aFStackX_10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorGradingWheel::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorGradingWheel::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = FName::FName(aFStackX_10,"SColorGradingWheel");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorGradingWheel::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      SColorGradingWheel::PrivateRegisterAttributes(&FStackX_8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`SColorGradingWheel::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorGradingWheel::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return;
    }
  }
  return;
}

// `dynamic_initializer_for_'EscapedCharacters'' @ 140f43960

void __cdecl CharRangeConstants::_dynamic_initializer_for__EscapedCharacters__(void)

{
  ::FString::FString(&EscapedCharacters,L"-\\");
  atexit(_dynamic_atexit_destructor_for__EscapedCharacters__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantSlate'' @ 140f43990

void __cdecl _dynamic_initializer_for__ModuleRegistrantSlate__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "Slate";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"Slate",5);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FSlateModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'SButtonTypeName'' @ 140f439e0

void __cdecl _dynamic_initializer_for__SButtonTypeName__(void)

{
  FName::FName(&SButtonTypeName,"SButton");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SlateTextLayout'' @ 140f43a00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SlateTextLayout__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SlateTextLayout == (FThreadSafeStaticStat<FStat_STAT_SlateTextLayout>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SlateTextLayout");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateTextLayout,*pFVar1,L"Text Layout",
               "STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'UnescapeHelper'' @ 140f43a90

void __cdecl _dynamic_initializer_for__UnescapeHelper__(void)

{
  FUnescapeHelper::FUnescapeHelper(&UnescapeHelper);
  atexit(_dynamic_atexit_destructor_for__UnescapeHelper__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ButtonWidgetStyle_h__Script_Slate_1518449980'' @ 140f43ac0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ButtonWidgetStyle_h__Script_Slate_1518449980__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Slate",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ButtonWidgetStyle_h__Script_Slate_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_CheckBoxWidgetStyle_h__Script_Slate_2631909344'' @ 140f43b00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_CheckBoxWidgetStyle_h__Script_Slate_2631909344__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Slate",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_CheckBoxWidgetStyle_h__Script_Slate_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ComboBoxWidgetStyle_h__Script_Slate_4225819068'' @ 140f43b40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ComboBoxWidgetStyle_h__Script_Slate_4225819068__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Slate",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ComboBoxWidgetStyle_h__Script_Slate_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ComboButtonWidgetStyle_h__Script_Slate_1983045662'' @ 140f43b80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ComboButtonWidgetStyle_h__Script_Slate_1983045662__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Slate",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ComboButtonWidgetStyle_h__Script_Slate_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_EditableTextBoxWidgetStyle_h__Script_Slate_3969335814'' @ 140f43bc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_EditableTextBoxWidgetStyle_h__Script_Slate_3969335814__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Slate",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_EditableTextBoxWidgetStyle_h__Script_Slate_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_EditableTextWidgetStyle_h__Script_Slate_1001892426'' @ 140f43c00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_EditableTextWidgetStyle_h__Script_Slate_1001892426__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Slate",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_EditableTextWidgetStyle_h__Script_Slate_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ProgressWidgetStyle_h__Script_Slate_1839205972'' @ 140f43c40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ProgressWidgetStyle_h__Script_Slate_1839205972__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Slate",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ProgressWidgetStyle_h__Script_Slate_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ScrollBarWidgetStyle_h__Script_Slate_1230329178'' @ 140f43c80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ScrollBarWidgetStyle_h__Script_Slate_1230329178__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Slate",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ScrollBarWidgetStyle_h__Script_Slate_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ScrollBoxWidgetStyle_h__Script_Slate_4023355918'' @ 140f43cc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ScrollBoxWidgetStyle_h__Script_Slate_4023355918__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Slate",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ScrollBoxWidgetStyle_h__Script_Slate_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_SpinBoxWidgetStyle_h__Script_Slate_3679186308'' @ 140f43d00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_SpinBoxWidgetStyle_h__Script_Slate_3679186308__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Slate",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_SpinBoxWidgetStyle_h__Script_Slate_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_TextBlockWidgetStyle_h__Script_Slate_45770680'' @ 140f43d40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_TextBlockWidgetStyle_h__Script_Slate_45770680__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Slate",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_TextBlockWidgetStyle_h__Script_Slate_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Text_CharRangeList_h__Script_Slate_2976997772'' @ 140f43d80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Text_CharRangeList_h__Script_Slate_2976997772__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Slate",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Text_CharRangeList_h__Script_Slate_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Text_TextLayout_h__Script_Slate_1973845792'' @ 140f43dc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Text_TextLayout_h__Script_Slate_1973845792__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Slate",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Text_TextLayout_h__Script_Slate_Statics
             ::EnumInfo,3);
  return;
}

// Z_Construct_UClass_UEditableTextWidgetStyle @ 14283bc50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEditableTextWidgetStyle(void)

{
  if (Z_Registration_Info_UClass_UEditableTextWidgetStyle.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEditableTextWidgetStyle.OuterSingleton,
               &Z_Construct_UClass_UEditableTextWidgetStyle_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEditableTextWidgetStyle.OuterSingleton;
}

// Z_Construct_UClass_UProgressWidgetStyle @ 14283bd50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UProgressWidgetStyle(void)

{
  if (Z_Registration_Info_UClass_UProgressWidgetStyle.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UProgressWidgetStyle.OuterSingleton,
               &Z_Construct_UClass_UProgressWidgetStyle_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UProgressWidgetStyle.OuterSingleton;
}

// Z_Construct_UClass_UScrollBarWidgetStyle @ 14283be50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UScrollBarWidgetStyle(void)

{
  if (Z_Registration_Info_UClass_UScrollBarWidgetStyle.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UScrollBarWidgetStyle.OuterSingleton,
               &Z_Construct_UClass_UScrollBarWidgetStyle_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UScrollBarWidgetStyle.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14283bed0

void * __thiscall FSlateModule::_scalar_deleting_destructor_(FSlateModule *this,uint param_1)

{
  *this = (FSlateModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UScrollBoxWidgetStyle @ 14283bfd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UScrollBoxWidgetStyle(void)

{
  if (Z_Registration_Info_UClass_UScrollBoxWidgetStyle.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UScrollBoxWidgetStyle.OuterSingleton,
               &Z_Construct_UClass_UScrollBoxWidgetStyle_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UScrollBoxWidgetStyle.OuterSingleton;
}

// Z_Construct_UClass_USpinBoxWidgetStyle @ 14283c0d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USpinBoxWidgetStyle(void)

{
  if (Z_Registration_Info_UClass_USpinBoxWidgetStyle.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USpinBoxWidgetStyle.OuterSingleton,
               &Z_Construct_UClass_USpinBoxWidgetStyle_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USpinBoxWidgetStyle.OuterSingleton;
}

// Z_Construct_UClass_UTextBlockWidgetStyle @ 14283c1d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTextBlockWidgetStyle(void)

{
  if (Z_Registration_Info_UClass_UTextBlockWidgetStyle.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTextBlockWidgetStyle.OuterSingleton,
               &Z_Construct_UClass_UTextBlockWidgetStyle_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTextBlockWidgetStyle.OuterSingleton;
}

// Z_Construct_UScriptStruct_FCharRange @ 14283c290

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCharRange(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCharRange.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCharRange.InnerSingleton,
               &Z_Construct_UScriptStruct_FCharRange_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCharRange.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCharRange.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 14283c310

void * __cdecl Z_Construct_UScriptStruct_FCharRange_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCharRange,&UE::CoreUObject::Private::Construct<FCharRange>,&UE::CoreUObject::Private::ConstructForTests<FCharRange>,&UE::CoreUObject::Private::Destruct<FCharRange>,&UE::CoreUObject::Private::Copy<FCharRange>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 2;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14283c350

void * __cdecl Z_Construct_UScriptStruct_FCharRangeList_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCharRangeList,&UE::CoreUObject::Private::Construct<FCharRangeList>,&UE::CoreUObject::Private::ConstructForTests<FCharRangeList>,&UE::CoreUObject::Private::Destruct<FCharRangeList>,&UE::CoreUObject::Private::Copy<FCharRangeList>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// ETextJustify_StaticEnum @ 14283c390

UEnum * __cdecl ETextJustify_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETextJustify.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Slate();
    Z_Registration_Info_UEnum_ETextJustify.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Slate_ETextJustify,(UObject *)pUVar1,L"ETextJustify");
  }
  return Z_Registration_Info_UEnum_ETextJustify.OuterSingleton;
}

// ETextWrappingPolicy_StaticEnum @ 14283c3d0

UEnum * __cdecl ETextWrappingPolicy_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETextWrappingPolicy.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Slate();
    Z_Registration_Info_UEnum_ETextWrappingPolicy.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Slate_ETextWrappingPolicy,(UObject *)pUVar1,
                       L"ETextWrappingPolicy");
  }
  return Z_Registration_Info_UEnum_ETextWrappingPolicy.OuterSingleton;
}

// ETextFlowDirection_StaticEnum @ 14283c410

UEnum * __cdecl ETextFlowDirection_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETextFlowDirection.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Slate();
    Z_Registration_Info_UEnum_ETextFlowDirection.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Slate_ETextFlowDirection,(UObject *)pUVar1,
                       L"ETextFlowDirection");
  }
  return Z_Registration_Info_UEnum_ETextFlowDirection.OuterSingleton;
}

// Z_Construct_UClass_UButtonWidgetStyle @ 14283c690

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UButtonWidgetStyle(void)

{
  if (Z_Registration_Info_UClass_UButtonWidgetStyle.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UButtonWidgetStyle.OuterSingleton,
               &Z_Construct_UClass_UButtonWidgetStyle_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UButtonWidgetStyle.OuterSingleton;
}

// Z_Construct_UClass_UCheckBoxWidgetStyle @ 14283c790

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCheckBoxWidgetStyle(void)

{
  if (Z_Registration_Info_UClass_UCheckBoxWidgetStyle.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCheckBoxWidgetStyle.OuterSingleton,
               &Z_Construct_UClass_UCheckBoxWidgetStyle_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCheckBoxWidgetStyle.OuterSingleton;
}

// Z_Construct_UClass_UComboBoxWidgetStyle @ 14283c890

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UComboBoxWidgetStyle(void)

{
  if (Z_Registration_Info_UClass_UComboBoxWidgetStyle.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UComboBoxWidgetStyle.OuterSingleton,
               &Z_Construct_UClass_UComboBoxWidgetStyle_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UComboBoxWidgetStyle.OuterSingleton;
}

// Z_Construct_UClass_UComboButtonWidgetStyle @ 14283c990

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UComboButtonWidgetStyle(void)

{
  if (Z_Registration_Info_UClass_UComboButtonWidgetStyle.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UComboButtonWidgetStyle.OuterSingleton,
               &Z_Construct_UClass_UComboButtonWidgetStyle_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UComboButtonWidgetStyle.OuterSingleton;
}

// Z_Construct_UClass_UEditableTextBoxWidgetStyle @ 14283ca90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEditableTextBoxWidgetStyle(void)

{
  if (Z_Registration_Info_UClass_UEditableTextBoxWidgetStyle.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEditableTextBoxWidgetStyle.OuterSingleton,
               &Z_Construct_UClass_UEditableTextBoxWidgetStyle_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEditableTextBoxWidgetStyle.OuterSingleton;
}

// CompareItems<FLinearColor,int> @ 14283e8a0

bool __cdecl CompareItems<FLinearColor,int>(FLinearColor *param_1,FLinearColor *param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  
  if (param_3 != 0) {
    pfVar2 = &(param_2->field0_0x0)._s_0.B;
    pfVar1 = &(param_1->field0_0x0)._s_0.B;
    do {
      if ((((*(float *)((longlong)param_2 + (-8 - (longlong)param_1) + (longlong)pfVar1) !=
             ((FLinearColor_u_0_s_0 *)(pfVar1 + -2))->R) || (pfVar2[-1] != pfVar1[-1])) ||
          (*pfVar2 != *pfVar1)) || (pfVar2[1] != pfVar1[1])) {
        return false;
      }
      pfVar2 = pfVar2 + 4;
      pfVar1 = pfVar1 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructItems<FTextLayout::FLineViewHighlight,FTextLayout::FLineViewHighlight,int> @ 14283e900

void __cdecl
ConstructItems<FTextLayout::FLineViewHighlight,FTextLayout::FLineViewHighlight,int>
          (void *param_1,FLineViewHighlight *param_2,int param_3)

{
  undefined8 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  TSharedPtr<ILineHighlighter,1> *pTVar5;
  
  if (param_3 != 0) {
    pTVar5 = &param_2->Highlighter;
    puVar4 = (undefined8 *)((longlong)param_1 + 0x18);
    do {
      puVar1 = (undefined8 *)((longlong)puVar4 + (longlong)param_2 + (-0x18 - (longlong)param_1));
      uVar3 = puVar1[1];
      puVar4[-3] = *puVar1;
      puVar4[-2] = uVar3;
      *(undefined4 *)(puVar4 + -1) = *(undefined4 *)((longlong)(pTVar5 + -1) + 8);
      *puVar4 = pTVar5->Object;
      pTVar2 = (pTVar5->SharedReferenceCount).ReferenceController;
      puVar4[1] = pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar5 = (TSharedPtr<ILineHighlighter,1> *)((longlong)(pTVar5 + 2) + 8);
      puVar4 = puVar4 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<IRichTextMarkupWriter::FRichTextRun,IRichTextMarkupWriter::FRichTextRun,int> @ 14283e950

void __cdecl
ConstructItems<IRichTextMarkupWriter::FRichTextRun,IRichTextMarkupWriter::FRichTextRun,int>
          (void *param_1,FRichTextRun *param_2,int param_3)

{
  longlong lVar1;
  FString *pFVar2;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 + 0x1c;
    pFVar2 = &param_2->Text;
    do {
      FString::FString((FString *)
                       ((longlong)param_1 + (-0x60 - (longlong)param_2) + (longlong)pFVar2),
                       (FString *)(pFVar2 + -6));
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined4 *)(lVar1 + 0x1c) = 0;
      *(undefined4 *)(lVar1 + 0x20) = 0x80;
      *(undefined4 *)(lVar1 + 0x24) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x28) = 0;
      *(undefined8 *)(lVar1 + 0x34) = 0;
      *(undefined4 *)(lVar1 + 0x3c) = 0;
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                   *)(lVar1 + -0xc),
                  (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                   *)(pFVar2 + -5));
      FString::FString((FString *)(lVar1 + 0x44),pFVar2);
      pFVar2 = pFVar2 + 7;
      lVar1 = lVar1 + 0x70;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FSyntaxTokenizer::FRule,FSyntaxTokenizer::FRule,int> @ 14283ea10

void __cdecl
ConstructItems<FSyntaxTokenizer::FRule,FSyntaxTokenizer::FRule,int>
          (void *param_1,FRule *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      FString::FString((FString *)(lVar1 + (longlong)param_2),&param_2->MatchText);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FTextLineHighlight,FTextLineHighlight,int> @ 14283ea60

void __cdecl
ConstructItems<FTextLineHighlight,FTextLineHighlight,int>
          (void *param_1,FTextLineHighlight *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  int *piVar2;
  int *piVar3;
  
  if (param_3 != 0) {
    piVar3 = &param_2->ZOrder;
    piVar2 = (int *)((longlong)param_1 + 0xc);
    do {
      piVar2[-3] = *(int *)((longlong)piVar2 + (longlong)param_2 + (-0xc - (longlong)param_1));
      *(FTextRange *)(piVar2 + -2) = *(FTextRange *)(piVar3 + -2);
      *piVar2 = *piVar3;
      *(ILineHighlighter **)(piVar2 + 1) = ((TSharedRef<ILineHighlighter,1> *)(piVar3 + 1))->Object;
      pTVar1 = ((FSharedReferencer<1> *)(piVar3 + 3))->ReferenceController;
      *(TReferenceControllerBase<1> **)(piVar2 + 3) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      piVar3 = piVar3 + 8;
      piVar2 = piVar2 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FTextRunParseResults,FTextRunParseResults,int> @ 14283eac0

void __cdecl
ConstructItems<FTextRunParseResults,FTextRunParseResults,int>
          (void *param_1,FTextRunParseResults *param_2,int param_3)

{
  FTextRange *pFVar1;
  FTextRange *pFVar2;
  
  if (param_3 != 0) {
    pFVar1 = (FTextRange *)((longlong)param_1 + 0x18);
    pFVar2 = &param_2->ContentRange;
    do {
      FString::FString((FString *)
                       ((longlong)param_1 + (-0x18 - (longlong)param_2) + (longlong)pFVar2),
                       (FString *)(pFVar2 + -3));
      pFVar1[-1] = pFVar2[-1];
      *pFVar1 = *pFVar2;
      *(undefined8 *)
       &((TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
          *)(pFVar1 + 1))->Elements = 0;
      pFVar1[2].BeginIndex = 0;
      pFVar1[2].EndIndex = 0;
      pFVar1[5].BeginIndex = 0;
      pFVar1[5].EndIndex = 0;
      pFVar1[6].BeginIndex = 0;
      pFVar1[6].EndIndex = 0x80;
      pFVar1[7].BeginIndex = -1;
      pFVar1[7].EndIndex = 0;
      pFVar1[9].BeginIndex = 0;
      pFVar1[9].EndIndex = 0;
      pFVar1[10].BeginIndex = 0;
      TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
                   *)(pFVar1 + 1),
                  (TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
                   *)(pFVar2 + 1));
      pFVar1 = pFVar1 + 0xe;
      pFVar2 = pFVar2 + 0xe;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FTextRunRenderer,FTextRunRenderer,int> @ 14283eb80

void __cdecl
ConstructItems<FTextRunRenderer,FTextRunRenderer,int>
          (void *param_1,FTextRunRenderer *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 *puVar2;
  TSharedRef<IRunRenderer,1> *pTVar3;
  
  if (param_3 != 0) {
    pTVar3 = &param_2->Renderer;
    puVar2 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      *(undefined4 *)(puVar2 + -2) =
           *(undefined4 *)((longlong)puVar2 + (longlong)param_2 + (-0x10 - (longlong)param_1));
      *(FTextRange *)((longlong)puVar2 + -0xc) = ((FTextRunRenderer *)(pTVar3 + -1))->Range;
      *puVar2 = pTVar3->Object;
      pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
      puVar2[1] = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar3 = pTVar3 + 2;
      puVar2 = puVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<ISyntaxTokenizer::FTokenizedLine,ISyntaxTokenizer::FTokenizedLine,int> @ 14283ebd0

void __cdecl
ConstructItems<ISyntaxTokenizer::FTokenizedLine,ISyntaxTokenizer::FTokenizedLine,int>
          (void *param_1,FTokenizedLine *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  FTokenizedLine *pFVar3;
  TArray<ISyntaxTokenizer::FToken,TSizedDefaultAllocator<32>_> *pTVar4;
  ForAnyElementType *pFVar5;
  
  if (param_3 != 0) {
    pFVar5 = (ForAnyElementType *)((longlong)param_1 + 8);
    pFVar3 = param_2;
    do {
      pTVar4 = &pFVar3->Tokens;
      *(undefined8 *)((longlong)param_1 + (-8 - (longlong)param_2) + (longlong)pTVar4) =
           *(undefined8 *)((longlong)(pTVar4 + -1) + 8);
      piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
      pFVar5->Data = (FScriptContainerElement *)0x0;
      iVar2 = pTVar4->ArrayNum;
      _Src = (pTVar4->AllocatorInstance).Data;
      *(int *)&pFVar5[1].Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,iVar2,0,pFVar5,iVar2,piVar1);
        memcpy(pFVar5->Data,_Src,(longlong)iVar2 * 0xc);
      }
      pFVar3 = (FTokenizedLine *)(pTVar4 + 1);
      pFVar5 = pFVar5 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSharedRef<ILayoutBlock,1>,TSharedRef<ILayoutBlock,1>,int> @ 14283eca0

void __cdecl
ConstructItems<TSharedRef<ILayoutBlock,1>,TSharedRef<ILayoutBlock,1>,int>
          (void *param_1,TSharedRef<ILayoutBlock,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(ILayoutBlock **)(lVar2 + (longlong)param_2) = param_2->Object;
      pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)param_2) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FTextLayout::FRunModel,FTextLayout::FRunModel,int> @ 14283ece0

void __cdecl
ConstructItems<FTextLayout::FRunModel,FTextLayout::FRunModel,int>
          (void *param_1,FRunModel *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  FScriptContainerElement *_Src_00;
  int *piVar3;
  int *piVar4;
  
  if (param_3 != 0) {
    piVar3 = &(param_2->MeasuredRangeSizes).ArrayNum;
    piVar4 = (int *)((longlong)param_1 + 0x28);
    do {
      *(undefined8 *)((longlong)piVar3 + (longlong)param_1 + (-0x28 - (longlong)param_2)) =
           *(undefined8 *)(piVar3 + -10);
      lVar2 = *(longlong *)(piVar3 + -8);
      *(longlong *)(piVar4 + -8) = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      piVar4[-6] = 0;
      piVar4[-5] = 0;
      iVar1 = piVar3[-4];
      _Src = *(void **)(piVar3 + -6);
      piVar4[-4] = iVar1;
      if (iVar1 == 0) {
        piVar4[-3] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar1,0,(ForAnyElementType *)(piVar4 + -6),iVar1,piVar4 + -3);
        memcpy(((ForAnyElementType *)(piVar4 + -6))->Data,_Src,(longlong)iVar1 << 3);
      }
      piVar4[-2] = 0;
      piVar4[-1] = 0;
      iVar1 = *piVar3;
      _Src_00 = (((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)(piVar3 + -2))->
                AllocatorInstance).Data;
      *piVar4 = iVar1;
      if (iVar1 == 0) {
        piVar4[1] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar1,0,(ForAnyElementType *)(piVar4 + -2),iVar1,piVar4 + 1);
        memcpy(((ForAnyElementType *)(piVar4 + -2))->Data,_Src_00,(longlong)iVar1 << 4);
      }
      piVar3 = piVar3 + 0xc;
      piVar4 = piVar4 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<FTextLayout::FLineModel,int> @ 14283f850

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __cdecl DestructItems<FTextLayout::FLineModel,int>(FLineModel *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FTextLineHighlight,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->LineHighlights;
    do {
      DestructItems<FTextLineHighlight,int>
                ((FTextLineHighlight *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<FTextRunRenderer,int>
                ((FTextRunRenderer *)
                 (((TArray<FTextRunRenderer,TSizedDefaultAllocator<32>_> *)(pTVar2 + -1))->
                 AllocatorInstance).Data,
                 ((TArray<FTextRunRenderer,TSizedDefaultAllocator<32>_> *)(pTVar2 + -1))->ArrayNum);
      pFVar1 = (((TArray<FTextRunRenderer,TSizedDefaultAllocator<32>_> *)(pTVar2 + -1))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<FTextLayout::FBreakCandidate,TSizedDefaultAllocator<32>_> *)(pTVar2 + -2))
               ->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<FTextLayout::FRunModel,int>
                ((FRunModel *)
                 (((TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_> *)(pTVar2 + -3))->
                 AllocatorInstance).Data,
                 ((TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_> *)(pTVar2 + -3))->
                 ArrayNum);
      pFVar1 = (((TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_> *)(pTVar2 + -3))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (((FSharedReferencer<1> *)(pTVar2 + -4))->ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (((FSharedReferencer<1> *)(pTVar2 + -5))->ReferenceController);
      pTVar2 = pTVar2 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FTextLayout::FLineView,int> @ 14283f900

void __cdecl DestructItems<FTextLayout::FLineView,int>(FLineView *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FTextLayout::FLineViewHighlight,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->OverlayHighlights;
    do {
      DestructItems<FTextLayout::FLineViewHighlight,int>
                ((FLineViewHighlight *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<FTextLayout::FLineViewHighlight,int>
                ((FLineViewHighlight *)pTVar2[-1].AllocatorInstance.Data,pTVar2[-1].ArrayNum);
      pFVar1 = pTVar2[-1].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<TSharedRef<ILayoutBlock,1>,int>
                ((TSharedRef<ILayoutBlock,1> *)
                 (((FLineView *)(pTVar2 + -2))->Blocks).AllocatorInstance.Data,
                 (((FLineView *)(pTVar2 + -2))->Blocks).ArrayNum);
      pFVar1 = (((FLineView *)(pTVar2 + -2))->Blocks).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<FTextLayout::FLineViewHighlight,TSizedDefaultAllocator<32>_> *)
               ((longlong)(pTVar2 + 6) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FTextLayout::FLineViewHighlight,int> @ 14283f980

void __cdecl
DestructItems<FTextLayout::FLineViewHighlight,int>(FLineViewHighlight *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Highlighter).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FTextLayout::FNewLineData,int> @ 14283f9c0

void __cdecl DestructItems<FTextLayout::FNewLineData,int>(FNewLineData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<TSharedRef<IRun,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Runs;
    do {
      DestructItems<TSharedRef<IRun,1>,int>
                ((TSharedRef<IRun,1> *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((((FNewLineData *)(pTVar2 + -1))->Text).SharedReferenceCount.ReferenceController);
      pTVar2 = pTVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<IRichTextMarkupWriter::FRichTextLine,int> @ 14283fa10

void __cdecl
DestructItems<IRichTextMarkupWriter::FRichTextLine,int>(FRichTextLine *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    DestructItems<IRichTextMarkupWriter::FRichTextRun,int>
              ((FRichTextRun *)(param_1->Runs).AllocatorInstance.Data,(param_1->Runs).ArrayNum);
    pFVar1 = (param_1->Runs).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<IRichTextMarkupWriter::FRichTextRun,int> @ 14283fa60

void __cdecl
DestructItems<IRichTextMarkupWriter::FRichTextRun,int>(FRichTextRun *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->Info).MetaData.field_0x40;
    do {
      if ((void *)puVar1[2] != (void *)0x0) {
        FMemory::Free((void *)puVar1[2]);
      }
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      if ((void *)puVar1[-10] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-10]);
      }
      puVar1 = puVar1 + 0xe;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FSyntaxTokenizer::FRule,int> @ 14283fae0

void __cdecl DestructItems<FSyntaxTokenizer::FRule,int>(FRule *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->MatchText).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FTextLineHighlight,int> @ 14283fb20

void __cdecl DestructItems<FTextLineHighlight,int>(FTextLineHighlight *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Highlighter).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FTextLineParseResults,int> @ 14283fb60

void __cdecl DestructItems<FTextLineParseResults,int>(FTextLineParseResults *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FTextRunParseResults,TSizedDefaultAllocator<32>_> *pTVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pTVar2 = &param_1->Runs;
    DestructItems<FTextRunParseResults,int>
              ((FTextRunParseResults *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
    pFVar1 = (pTVar2->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = (FTextLineParseResults *)(pTVar2 + 1);
  }
  return;
}

// DestructItems<FTextRunParseResults,int> @ 14283fbb0

void __cdecl DestructItems<FTextRunParseResults,int>(FTextRunParseResults *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->MetaData).field_0x40;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FTextRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FTextRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FTextRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      if ((void *)puVar1[-0xc] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0xc]);
      }
      puVar1 = puVar1 + 0xe;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FTextRunRenderer,int> @ 14283fc20

void __cdecl DestructItems<FTextRunRenderer,int>(FTextRunRenderer *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Renderer).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<ISyntaxTokenizer::FTokenizedLine,int> @ 14283fc60

void __cdecl
DestructItems<ISyntaxTokenizer::FTokenizedLine,int>(FTokenizedLine *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Tokens).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = (FTokenizedLine *)(&param_1->Tokens + 1);
  }
  return;
}

// DestructItems<TSharedRef<ILayoutBlock,1>,int> @ 14283fca0

void __cdecl
DestructItems<TSharedRef<ILayoutBlock,1>,int>(TSharedRef<ILayoutBlock,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedRef<IRun,1>,int> @ 14283fce0

void __cdecl DestructItems<TSharedRef<IRun,1>,int>(TSharedRef<IRun,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedRef<ITextDecorator,1>,int> @ 14283fd20

void __cdecl
DestructItems<TSharedRef<ITextDecorator,1>,int>(TSharedRef<ITextDecorator,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FTextLayout::FRunModel,int> @ 14283fd60

void __cdecl DestructItems<FTextLayout::FRunModel,int>(FRunModel *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FTextRange,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->MeasuredRanges;
    do {
      pFVar1 = (((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)(pTVar2 + 1))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((((FRunModel *)(pTVar2 + -1))->Run).SharedReferenceCount.ReferenceController);
      pTVar2 = pTVar2 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// HeapSortInternal<TextBiDi::FTextDirectionInfo,int,FIdentityFunctor,TDereferenceWrapper<TextBiDi::FTextDirectionInfo,`FTextLayout::CreateLineViewBlocks'::__l2::<lambda_1>_>_> @ 142840a20

void __cdecl
AlgoImpl::
HeapSortInternal<TextBiDi::FTextDirectionInfo,int,FIdentityFunctor,TDereferenceWrapper<TextBiDi::FTextDirectionInfo,_FTextLayout::CreateLineViewBlocks_::__l2::<lambda_1>_>_>
          (FTextDirectionInfo *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TextBiDi::FTextDirectionInfo,_private:_void___cdecl_FTextLayout::CreateLineViewBlocks(int,int,float,TOptional<float>_const_&,int_&,int_&,int_&,TArray<TSharedRef<ILayoutBlock,1>,TSizedDefaultAllocator<32>_>_&)_::_2_::<lambda_1>_>
          param_4)

{
  FTextDirectionInfo *pFVar1;
  FTextDirectionInfo *pFVar2;
  code *pcVar3;
  undefined3 uVar4;
  int iVar5;
  ETextDirection EVar6;
  undefined3 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  FTextDirectionInfo *pFVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  
  if (param_2 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar9 = (param_2 + -2) / 2;
  iVar10 = iVar9 * 2 + 1;
  iVar13 = iVar10;
  iVar14 = iVar9;
  do {
    while (param_2 <= iVar10) {
LAB_142840b2d:
      if (iVar14 == 0) {
        iVar10 = param_2 + -1;
        lVar15 = (longlong)iVar10;
        if (0 < iVar10) {
          pFVar12 = param_1 + lVar15;
          do {
            iVar13 = pFVar12->Length;
            iVar9 = param_1->StartIndex;
            iVar14 = param_1->Length;
            EVar6 = param_1->TextDirection;
            uVar7 = *(undefined3 *)&param_1->field_0x9;
            param_1->StartIndex = pFVar12->StartIndex;
            param_1->Length = iVar13;
            uVar4 = *(undefined3 *)&pFVar12->field_0x9;
            param_1->TextDirection = pFVar12->TextDirection;
            *(undefined3 *)&param_1->field_0x9 = uVar4;
            pFVar12->StartIndex = iVar9;
            pFVar12->Length = iVar14;
            pFVar12->TextDirection = EVar6;
            *(undefined3 *)&pFVar12->field_0x9 = uVar7;
            iVar13 = 0;
            if (1 < iVar10) {
              do {
                iVar14 = iVar13 * 2;
                iVar9 = iVar14 + 1;
                if (iVar14 + 2 < iVar10) {
                  if (param_1[(longlong)iVar14 + 2].StartIndex < param_1[iVar9].StartIndex) {
                    iVar9 = iVar14;
                  }
                  iVar9 = iVar9 + 1;
                }
                pFVar1 = param_1 + iVar9;
                pFVar2 = param_1 + iVar13;
                if (pFVar1->StartIndex <= param_1[iVar13].StartIndex) break;
                iVar14 = pFVar2->StartIndex;
                iVar11 = pFVar2->Length;
                EVar6 = pFVar2->TextDirection;
                uVar7 = *(undefined3 *)&pFVar2->field_0x9;
                iVar13 = pFVar1->Length;
                pFVar2->StartIndex = pFVar1->StartIndex;
                pFVar2->Length = iVar13;
                uVar4 = *(undefined3 *)&pFVar1->field_0x9;
                pFVar2->TextDirection = pFVar1->TextDirection;
                *(undefined3 *)&pFVar2->field_0x9 = uVar4;
                pFVar1->StartIndex = iVar14;
                pFVar1->Length = iVar11;
                pFVar1->TextDirection = EVar6;
                *(undefined3 *)&pFVar1->field_0x9 = uVar7;
                iVar13 = iVar9;
              } while (iVar9 * 2 + 1 < iVar10);
            }
            iVar10 = iVar10 + -1;
            lVar15 = lVar15 + -1;
            pFVar12 = pFVar12 + -1;
          } while (0 < lVar15);
        }
        return;
      }
      iVar9 = iVar14 + -1;
      iVar10 = iVar13 + -2;
      iVar13 = iVar10;
      iVar14 = iVar9;
    }
    iVar10 = iVar9 * 2;
    iVar11 = iVar10 + 1;
    if (iVar10 + 2 < param_2) {
      if (param_1[(longlong)iVar10 + 2].StartIndex < param_1[iVar11].StartIndex) {
        iVar11 = iVar10;
      }
      iVar11 = iVar11 + 1;
    }
    pFVar12 = param_1 + iVar11;
    pFVar1 = param_1 + iVar9;
    if (pFVar12->StartIndex <= param_1[iVar9].StartIndex) goto LAB_142840b2d;
    iVar9 = pFVar1->StartIndex;
    iVar5 = pFVar1->Length;
    EVar6 = pFVar1->TextDirection;
    uVar7 = *(undefined3 *)&pFVar1->field_0x9;
    iVar10 = pFVar12->Length;
    pFVar1->StartIndex = pFVar12->StartIndex;
    pFVar1->Length = iVar10;
    uVar4 = *(undefined3 *)&pFVar12->field_0x9;
    pFVar1->TextDirection = pFVar12->TextDirection;
    *(undefined3 *)&pFVar1->field_0x9 = uVar4;
    iVar10 = iVar11 * 2 + 1;
    pFVar12->StartIndex = iVar9;
    pFVar12->Length = iVar5;
    pFVar12->TextDirection = EVar6;
    *(undefined3 *)&pFVar12->field_0x9 = uVar7;
    iVar9 = iVar11;
  } while( true );
}

// InternalConstructor<UButtonWidgetStyle> @ 142840c40

void __cdecl InternalConstructor<UButtonWidgetStyle>(FObjectInitializer *param_1)

{
  USlateWidgetStyleContainerBase *this;
  
  this = (USlateWidgetStyleContainerBase *)param_1->Obj;
  if (this != (USlateWidgetStyleContainerBase *)0x0) {
    USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase(this,param_1);
    *(undefined ***)this = &UButtonWidgetStyle::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UButtonWidgetStyle::_vftable__for__ISlateWidgetStyleContainerInterface__;
    FButtonStyle::FButtonStyle((FButtonStyle *)(this + 1));
    return;
  }
  return;
}

// InternalConstructor<UCheckBoxWidgetStyle> @ 142840c90

void __cdecl InternalConstructor<UCheckBoxWidgetStyle>(FObjectInitializer *param_1)

{
  USlateWidgetStyleContainerBase *this;
  
  this = (USlateWidgetStyleContainerBase *)param_1->Obj;
  if (this != (USlateWidgetStyleContainerBase *)0x0) {
    USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase(this,param_1);
    *(undefined ***)this = &UCheckBoxWidgetStyle::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UCheckBoxWidgetStyle::_vftable__for__ISlateWidgetStyleContainerInterface__;
    FCheckBoxStyle::FCheckBoxStyle((FCheckBoxStyle *)(this + 1));
    return;
  }
  return;
}

// InternalConstructor<UComboBoxWidgetStyle> @ 142840ce0

void __cdecl InternalConstructor<UComboBoxWidgetStyle>(FObjectInitializer *param_1)

{
  USlateWidgetStyleContainerBase *this;
  
  this = (USlateWidgetStyleContainerBase *)param_1->Obj;
  if (this != (USlateWidgetStyleContainerBase *)0x0) {
    USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase(this,param_1);
    *(undefined ***)this = &UComboBoxWidgetStyle::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UComboBoxWidgetStyle::_vftable__for__ISlateWidgetStyleContainerInterface__;
    FComboBoxStyle::FComboBoxStyle((FComboBoxStyle *)(this + 1));
    return;
  }
  return;
}

// InternalConstructor<UComboButtonWidgetStyle> @ 142840d30

void __cdecl InternalConstructor<UComboButtonWidgetStyle>(FObjectInitializer *param_1)

{
  USlateWidgetStyleContainerBase *this;
  
  this = (USlateWidgetStyleContainerBase *)param_1->Obj;
  if (this != (USlateWidgetStyleContainerBase *)0x0) {
    USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase(this,param_1);
    *(undefined ***)this = &UComboButtonWidgetStyle::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UComboButtonWidgetStyle::_vftable__for__ISlateWidgetStyleContainerInterface__;
    FComboButtonStyle::FComboButtonStyle((FComboButtonStyle *)(this + 1));
    return;
  }
  return;
}

// InternalConstructor<UEditableTextBoxWidgetStyle> @ 142840d80

void __cdecl InternalConstructor<UEditableTextBoxWidgetStyle>(FObjectInitializer *param_1)

{
  USlateWidgetStyleContainerBase *this;
  
  this = (USlateWidgetStyleContainerBase *)param_1->Obj;
  if (this != (USlateWidgetStyleContainerBase *)0x0) {
    USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase(this,param_1);
    *(undefined ***)this = &UEditableTextBoxWidgetStyle::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UEditableTextBoxWidgetStyle::_vftable__for__ISlateWidgetStyleContainerInterface__;
    FEditableTextBoxStyle::FEditableTextBoxStyle((FEditableTextBoxStyle *)(this + 1));
    return;
  }
  return;
}

// InternalConstructor<UEditableTextWidgetStyle> @ 142840dd0

void __cdecl InternalConstructor<UEditableTextWidgetStyle>(FObjectInitializer *param_1)

{
  USlateWidgetStyleContainerBase *this;
  
  this = (USlateWidgetStyleContainerBase *)param_1->Obj;
  if (this != (USlateWidgetStyleContainerBase *)0x0) {
    USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase(this,param_1);
    *(undefined ***)this = &UEditableTextWidgetStyle::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UEditableTextWidgetStyle::_vftable__for__ISlateWidgetStyleContainerInterface__;
    FEditableTextStyle::FEditableTextStyle((FEditableTextStyle *)(this + 1));
    return;
  }
  return;
}

// InternalConstructor<UProgressWidgetStyle> @ 142840e20

void __cdecl InternalConstructor<UProgressWidgetStyle>(FObjectInitializer *param_1)

{
  USlateWidgetStyleContainerBase *this;
  
  this = (USlateWidgetStyleContainerBase *)param_1->Obj;
  if (this != (USlateWidgetStyleContainerBase *)0x0) {
    USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase(this,param_1);
    *(undefined ***)this = &UProgressWidgetStyle::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UProgressWidgetStyle::_vftable__for__ISlateWidgetStyleContainerInterface__;
    FProgressBarStyle::FProgressBarStyle((FProgressBarStyle *)(this + 1));
    return;
  }
  return;
}

// InternalConstructor<UScrollBarWidgetStyle> @ 142840e70

void __cdecl InternalConstructor<UScrollBarWidgetStyle>(FObjectInitializer *param_1)

{
  USlateWidgetStyleContainerBase *this;
  
  this = (USlateWidgetStyleContainerBase *)param_1->Obj;
  if (this != (USlateWidgetStyleContainerBase *)0x0) {
    USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase(this,param_1);
    *(undefined ***)this = &UScrollBarWidgetStyle::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UScrollBarWidgetStyle::_vftable__for__ISlateWidgetStyleContainerInterface__;
    FScrollBarStyle::FScrollBarStyle((FScrollBarStyle *)(this + 1));
    return;
  }
  return;
}

// InternalConstructor<UScrollBoxWidgetStyle> @ 142840ec0

void __cdecl InternalConstructor<UScrollBoxWidgetStyle>(FObjectInitializer *param_1)

{
  USlateWidgetStyleContainerBase *this;
  
  this = (USlateWidgetStyleContainerBase *)param_1->Obj;
  if (this != (USlateWidgetStyleContainerBase *)0x0) {
    USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase(this,param_1);
    *(undefined ***)this = &UScrollBoxWidgetStyle::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UScrollBoxWidgetStyle::_vftable__for__ISlateWidgetStyleContainerInterface__;
    FScrollBoxStyle::FScrollBoxStyle((FScrollBoxStyle *)(this + 1));
    return;
  }
  return;
}

// InternalConstructor<USpinBoxWidgetStyle> @ 142840f10

void __cdecl InternalConstructor<USpinBoxWidgetStyle>(FObjectInitializer *param_1)

{
  USlateWidgetStyleContainerBase *this;
  
  this = (USlateWidgetStyleContainerBase *)param_1->Obj;
  if (this != (USlateWidgetStyleContainerBase *)0x0) {
    USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase(this,param_1);
    *(undefined ***)this = &USpinBoxWidgetStyle::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &USpinBoxWidgetStyle::_vftable__for__ISlateWidgetStyleContainerInterface__;
    FSpinBoxStyle::FSpinBoxStyle((FSpinBoxStyle *)(this + 1));
    return;
  }
  return;
}

// InternalConstructor<UTextBlockWidgetStyle> @ 142840f60

void __cdecl InternalConstructor<UTextBlockWidgetStyle>(FObjectInitializer *param_1)

{
  USlateWidgetStyleContainerBase *this;
  
  this = (USlateWidgetStyleContainerBase *)param_1->Obj;
  if (this != (USlateWidgetStyleContainerBase *)0x0) {
    USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase(this,param_1);
    *(undefined ***)this = &UTextBlockWidgetStyle::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UTextBlockWidgetStyle::_vftable__for__ISlateWidgetStyleContainerInterface__;
    FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)(this + 1));
    return;
  }
  return;
}

// InternalVTableHelperCtorCaller<UButtonWidgetStyle> @ 142840fb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UButtonWidgetStyle>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USlateWidgetStyleContainerBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UButtonWidgetStyle::GetPrivateStaticClass();
  this = (USlateWidgetStyleContainerBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USlateWidgetStyleContainerBase *)0x0) {
    USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase(this,param_1);
    *(undefined ***)this = &UButtonWidgetStyle::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UButtonWidgetStyle::_vftable__for__ISlateWidgetStyleContainerInterface__;
    FButtonStyle::FButtonStyle((FButtonStyle *)(this + 1));
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCheckBoxWidgetStyle> @ 142841070

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCheckBoxWidgetStyle>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USlateWidgetStyleContainerBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCheckBoxWidgetStyle::GetPrivateStaticClass();
  this = (USlateWidgetStyleContainerBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USlateWidgetStyleContainerBase *)0x0) {
    USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase(this,param_1);
    *(undefined ***)this = &UCheckBoxWidgetStyle::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UCheckBoxWidgetStyle::_vftable__for__ISlateWidgetStyleContainerInterface__;
    FCheckBoxStyle::FCheckBoxStyle((FCheckBoxStyle *)(this + 1));
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UComboBoxWidgetStyle> @ 142841130

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UComboBoxWidgetStyle>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USlateWidgetStyleContainerBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UComboBoxWidgetStyle::GetPrivateStaticClass();
  this = (USlateWidgetStyleContainerBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USlateWidgetStyleContainerBase *)0x0) {
    USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase(this,param_1);
    *(undefined ***)this = &UComboBoxWidgetStyle::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UComboBoxWidgetStyle::_vftable__for__ISlateWidgetStyleContainerInterface__;
    FComboBoxStyle::FComboBoxStyle((FComboBoxStyle *)(this + 1));
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UComboButtonWidgetStyle> @ 1428411f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UComboButtonWidgetStyle>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USlateWidgetStyleContainerBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UComboButtonWidgetStyle::GetPrivateStaticClass();
  this = (USlateWidgetStyleContainerBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USlateWidgetStyleContainerBase *)0x0) {
    USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase(this,param_1);
    *(undefined ***)this = &UComboButtonWidgetStyle::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UComboButtonWidgetStyle::_vftable__for__ISlateWidgetStyleContainerInterface__;
    FComboButtonStyle::FComboButtonStyle((FComboButtonStyle *)(this + 1));
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEditableTextBoxWidgetStyle> @ 1428412b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UEditableTextBoxWidgetStyle>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USlateWidgetStyleContainerBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEditableTextBoxWidgetStyle::GetPrivateStaticClass();
  this = (USlateWidgetStyleContainerBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USlateWidgetStyleContainerBase *)0x0) {
    USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase(this,param_1);
    *(undefined ***)this = &UEditableTextBoxWidgetStyle::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UEditableTextBoxWidgetStyle::_vftable__for__ISlateWidgetStyleContainerInterface__;
    FEditableTextBoxStyle::FEditableTextBoxStyle((FEditableTextBoxStyle *)(this + 1));
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEditableTextWidgetStyle> @ 142841370

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UEditableTextWidgetStyle>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USlateWidgetStyleContainerBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEditableTextWidgetStyle::GetPrivateStaticClass();
  this = (USlateWidgetStyleContainerBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USlateWidgetStyleContainerBase *)0x0) {
    USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase(this,param_1);
    *(undefined ***)this = &UEditableTextWidgetStyle::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UEditableTextWidgetStyle::_vftable__for__ISlateWidgetStyleContainerInterface__;
    FEditableTextStyle::FEditableTextStyle((FEditableTextStyle *)(this + 1));
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UProgressWidgetStyle> @ 142841430

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UProgressWidgetStyle>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USlateWidgetStyleContainerBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UProgressWidgetStyle::GetPrivateStaticClass();
  this = (USlateWidgetStyleContainerBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USlateWidgetStyleContainerBase *)0x0) {
    USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase(this,param_1);
    *(undefined ***)this = &UProgressWidgetStyle::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UProgressWidgetStyle::_vftable__for__ISlateWidgetStyleContainerInterface__;
    FProgressBarStyle::FProgressBarStyle((FProgressBarStyle *)(this + 1));
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UScrollBarWidgetStyle> @ 1428414f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UScrollBarWidgetStyle>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USlateWidgetStyleContainerBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UScrollBarWidgetStyle::GetPrivateStaticClass();
  this = (USlateWidgetStyleContainerBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USlateWidgetStyleContainerBase *)0x0) {
    USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase(this,param_1);
    *(undefined ***)this = &UScrollBarWidgetStyle::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UScrollBarWidgetStyle::_vftable__for__ISlateWidgetStyleContainerInterface__;
    FScrollBarStyle::FScrollBarStyle((FScrollBarStyle *)(this + 1));
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UScrollBoxWidgetStyle> @ 1428415b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UScrollBoxWidgetStyle>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USlateWidgetStyleContainerBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UScrollBoxWidgetStyle::GetPrivateStaticClass();
  this = (USlateWidgetStyleContainerBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USlateWidgetStyleContainerBase *)0x0) {
    USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase(this,param_1);
    *(undefined ***)this = &UScrollBoxWidgetStyle::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UScrollBoxWidgetStyle::_vftable__for__ISlateWidgetStyleContainerInterface__;
    FScrollBoxStyle::FScrollBoxStyle((FScrollBoxStyle *)(this + 1));
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USpinBoxWidgetStyle> @ 142841670

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USpinBoxWidgetStyle>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USlateWidgetStyleContainerBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USpinBoxWidgetStyle::GetPrivateStaticClass();
  this = (USlateWidgetStyleContainerBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USlateWidgetStyleContainerBase *)0x0) {
    USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase(this,param_1);
    *(undefined ***)this = &USpinBoxWidgetStyle::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &USpinBoxWidgetStyle::_vftable__for__ISlateWidgetStyleContainerInterface__;
    FSpinBoxStyle::FSpinBoxStyle((FSpinBoxStyle *)(this + 1));
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTextBlockWidgetStyle> @ 142841730

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UTextBlockWidgetStyle>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USlateWidgetStyleContainerBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTextBlockWidgetStyle::GetPrivateStaticClass();
  this = (USlateWidgetStyleContainerBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USlateWidgetStyleContainerBase *)0x0) {
    USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase(this,param_1);
    *(undefined ***)this = &UTextBlockWidgetStyle::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UTextBlockWidgetStyle::_vftable__for__ISlateWidgetStyleContainerInterface__;
    FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)(this + 1));
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<TextBiDi::FTextDirectionInfo,int,FIdentityFunctor,TDereferenceWrapper<TextBiDi::FTextDirectionInfo,`FTextLayout::CreateLineViewBlocks'::__l2::<lambda_1>_>_> @ 1428417f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TextBiDi::FTextDirectionInfo,int,FIdentityFunctor,TDereferenceWrapper<TextBiDi::FTextDirectionInfo,_FTextLayout::CreateLineViewBlocks_::__l2::<lambda_1>_>_>
          (FTextDirectionInfo *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TextBiDi::FTextDirectionInfo,_private:_void___cdecl_FTextLayout::CreateLineViewBlocks(int,int,float,TOptional<float>_const_&,int_&,int_&,int_&,TArray<TSharedRef<ILayoutBlock,1>,TSizedDefaultAllocator<32>_>_&)_::_2_::<lambda_1>_>
          param_4)

{
  undefined4 uVar1;
  FTextDirectionInfo *pFVar2;
  undefined4 uVar3;
  int iVar4;
  undefined3 uVar5;
  int iVar6;
  int iVar7;
  ETextDirection EVar8;
  undefined3 uVar9;
  longlong lVar10;
  int iVar11;
  FTextDirectionInfo *pFVar12;
  FTextDirectionInfo *pFVar13;
  FTextDirectionInfo *pFVar14;
  FTextDirectionInfo *pFVar15;
  FTextDirectionInfo *pFVar16;
  FTextDirectionInfo *pFVar17;
  FTextDirectionInfo **ppFVar18;
  float fVar19;
  undefined1 auStack_378 [48];
  FTextDirectionInfo *local_348;
  FTextDirectionInfo *local_338;
  FTextDirectionInfo *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar19 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar19;
    memset(local_320,0,0x2e8);
    ppFVar18 = &local_338;
    do {
      pFVar12 = ppFVar18[1];
      pFVar17 = *ppFVar18;
      pFVar2 = ppFVar18[2];
      local_348._0_4_ = (int)pFVar2;
      iVar11 = (int)(((longlong)pFVar12 - (longlong)pFVar17) / 0xc) + 1;
      pFVar16 = pFVar17;
      if ((int)local_348 != 0) {
LAB_1428418c0:
        if (8 < iVar11) {
          iVar4 = pFVar16->Length;
          pFVar14 = pFVar12 + 1;
          iVar11 = iVar11 / 2;
          iVar6 = pFVar16[iVar11].StartIndex;
          iVar7 = pFVar16[iVar11].Length;
          EVar8 = pFVar16[iVar11].TextDirection;
          uVar9 = *(undefined3 *)&pFVar16[iVar11].field_0x9;
          pFVar16[iVar11].StartIndex = pFVar16->StartIndex;
          pFVar16[iVar11].Length = iVar4;
          uVar5 = *(undefined3 *)&pFVar16->field_0x9;
          pFVar16[iVar11].TextDirection = pFVar16->TextDirection;
          *(undefined3 *)&pFVar16[iVar11].field_0x9 = uVar5;
          pFVar16->StartIndex = iVar6;
          pFVar16->Length = iVar7;
          pFVar16->TextDirection = EVar8;
          *(undefined3 *)&pFVar16->field_0x9 = uVar9;
          pFVar17 = pFVar16;
LAB_142841906:
          pFVar13 = pFVar17;
          pFVar17 = pFVar13 + 1;
          if (pFVar17 <= pFVar12) goto code_r0x00014284190f;
          goto LAB_142841917;
        }
        for (; pFVar17 = pFVar16, pFVar2 = pFVar16, pFVar16 < pFVar12; pFVar12 = pFVar12 + -1) {
          while (pFVar2 = pFVar2 + 1, pFVar2 <= pFVar12) {
            if (pFVar17->StartIndex < pFVar2->StartIndex) {
              pFVar17 = pFVar2;
            }
          }
          iVar4 = pFVar17->StartIndex;
          iVar6 = pFVar17->Length;
          EVar8 = pFVar17->TextDirection;
          uVar9 = *(undefined3 *)&pFVar17->field_0x9;
          iVar11 = pFVar12->Length;
          pFVar17->StartIndex = pFVar12->StartIndex;
          pFVar17->Length = iVar11;
          uVar5 = *(undefined3 *)&pFVar12->field_0x9;
          pFVar17->TextDirection = pFVar12->TextDirection;
          *(undefined3 *)&pFVar17->field_0x9 = uVar5;
          pFVar12->StartIndex = iVar4;
          pFVar12->Length = iVar6;
          pFVar12->TextDirection = EVar8;
          *(undefined3 *)&pFVar12->field_0x9 = uVar9;
        }
        goto LAB_142841a2b;
      }
LAB_142841a1c:
      local_348 = pFVar2;
      HeapSortInternal<TextBiDi::FTextDirectionInfo,int,FIdentityFunctor,TDereferenceWrapper<TextBiDi::FTextDirectionInfo,_FTextLayout::CreateLineViewBlocks_::__l2::<lambda_1>_>_>
                (pFVar17,iVar11,param_3,param_4);
LAB_142841a2b:
      ppFVar18 = ppFVar18 + -3;
    } while (&local_338 <= ppFVar18);
  }
  return;
code_r0x00014284190f:
  if (pFVar17->StartIndex <= pFVar16->StartIndex) goto LAB_142841906;
LAB_142841917:
  do {
    pFVar15 = pFVar14;
    pFVar14 = pFVar15 + -1;
    if (pFVar14 <= pFVar16) break;
  } while (pFVar16->StartIndex <= pFVar14->StartIndex);
  uVar1 = pFVar14->StartIndex;
  uVar3 = pFVar14->Length;
  if (pFVar17 <= pFVar14) {
    iVar11 = pFVar17->StartIndex;
    iVar4 = pFVar17->Length;
    EVar8 = pFVar13[1].TextDirection;
    uVar9 = *(undefined3 *)&pFVar13[1].field_0x9;
    pFVar17->StartIndex = uVar1;
    pFVar17->Length = uVar3;
    uVar5 = *(undefined3 *)&pFVar15[-1].field_0x9;
    pFVar13[1].TextDirection = pFVar15[-1].TextDirection;
    *(undefined3 *)&pFVar13[1].field_0x9 = uVar5;
    pFVar14->StartIndex = iVar11;
    pFVar14->Length = iVar4;
    pFVar15[-1].TextDirection = EVar8;
    *(undefined3 *)&pFVar15[-1].field_0x9 = uVar9;
    goto LAB_142841906;
  }
  EVar8 = pFVar16->TextDirection;
  uVar9 = *(undefined3 *)&pFVar16->field_0x9;
  local_348._0_4_ = (int)local_348 + -1;
  iVar11 = pFVar16->StartIndex;
  iVar4 = pFVar16->Length;
  pFVar16->StartIndex = uVar1;
  pFVar16->Length = uVar3;
  uVar5 = *(undefined3 *)&pFVar15[-1].field_0x9;
  pFVar16->TextDirection = pFVar15[-1].TextDirection;
  *(undefined3 *)&pFVar16->field_0x9 = uVar5;
  pFVar14->StartIndex = iVar11;
  pFVar14->Length = iVar4;
  pFVar15[-1].TextDirection = EVar8;
  *(undefined3 *)&pFVar15[-1].field_0x9 = uVar9;
  lVar10 = (longlong)pFVar14 + (-0xc - (longlong)pFVar16);
  lVar10 = lVar10 / 6 + (lVar10 >> 0x3f);
  if ((lVar10 >> 1) - (lVar10 >> 0x3f) < ((longlong)pFVar12 - (longlong)pFVar17) / 0xc) {
    if (pFVar17 < pFVar12) {
      *ppFVar18 = pFVar17;
      ppFVar18[1] = pFVar12;
      *(int *)(ppFVar18 + 2) = (int)local_348;
      ppFVar18 = ppFVar18 + 3;
    }
    if (pFVar14 <= pFVar16 + 1) goto LAB_142841a2b;
    pFVar12 = pFVar15 + -2;
    pFVar17 = pFVar16;
  }
  else {
    if (pFVar16 + 1 < pFVar14) {
      *ppFVar18 = pFVar16;
      ppFVar18[1] = pFVar15 + -2;
      *(int *)(ppFVar18 + 2) = (int)local_348;
      ppFVar18 = ppFVar18 + 3;
    }
    if (pFVar12 <= pFVar17) goto LAB_142841a2b;
  }
  iVar11 = (int)(((longlong)pFVar12 - (longlong)pFVar17) / 0xc) + 1;
  pFVar16 = pFVar17;
  if ((int)local_348 == 0) goto LAB_142841a1c;
  goto LAB_1428418c0;
}

// MakeRequiredArgs<TSharedRef<FSlateHyperlinkRun::FWidgetViewModel,1>_&> @ 142841ae0

T1RequiredArgs<TSharedRef<FSlateHyperlinkRun::FWidgetViewModel,1>_&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<FSlateHyperlinkRun::FWidgetViewModel,1>_&>
          (TSharedRef<FSlateHyperlinkRun::FWidgetViewModel,1> *param_1)

{
  FWidgetViewModel *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<FSlateHyperlinkRun::FWidgetViewModel,1>_&>)param_1;
}

// MakeTDecl<SEditableText,RequiredArgs::T0RequiredArgs> @ 142841af0

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SEditableText,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SPopupErrorText,RequiredArgs::T0RequiredArgs> @ 142841ba0

TSlateDecl<SPopupErrorText,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SPopupErrorText,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SPopupErrorText,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SPopupErrorText,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SPopupErrorText,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SRichTextHyperlink,RequiredArgs::T1RequiredArgs<TSharedRef<FSlateHyperlinkRun::FWidgetViewModel,1>_&>_> @ 142841c50

TSlateDecl<SRichTextHyperlink,RequiredArgs::T1RequiredArgs<TSharedRef<FSlateHyperlinkRun::FWidgetViewModel,1>_&>_>
* __cdecl MakeTDecl<SRichTextHyperlink,RequiredArgs::T1RequiredArgs<TSharedRef<FSlateHyperlinkRun::FWidgetViewModel,1>_&>_>
                    (TSlateDecl<SRichTextHyperlink,RequiredArgs::T1RequiredArgs<TSharedRef<FSlateHyperlinkRun::FWidgetViewModel,1>_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<FSlateHyperlinkRun::FWidgetViewModel,1>_&> *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SRichTextHyperlink,RequiredArgs::T1RequiredArgs<TSharedRef<FSlateHyperlinkRun::FWidgetViewModel,1>_&>_>
  ::
  TSlateDecl<SRichTextHyperlink,RequiredArgs::T1RequiredArgs<TSharedRef<FSlateHyperlinkRun::FWidgetViewModel,1>_&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// StaticEnum<enum_ETextFlowDirection> @ 142841e50

UEnum * __cdecl StaticEnum<enum_ETextFlowDirection>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETextFlowDirection.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Slate();
    Z_Registration_Info_UEnum_ETextFlowDirection.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Slate_ETextFlowDirection,(UObject *)pUVar1,
                       L"ETextFlowDirection");
  }
  return Z_Registration_Info_UEnum_ETextFlowDirection.OuterSingleton;
}

// StaticEnum<enum_ETextWrappingPolicy> @ 142841e90

UEnum * __cdecl StaticEnum<enum_ETextWrappingPolicy>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETextWrappingPolicy.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Slate();
    Z_Registration_Info_UEnum_ETextWrappingPolicy.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Slate_ETextWrappingPolicy,(UObject *)pUVar1,
                       L"ETextWrappingPolicy");
  }
  return Z_Registration_Info_UEnum_ETextWrappingPolicy.OuterSingleton;
}

// StaticEnum<enum_ETextJustify::Type> @ 142841ed0

UEnum * __cdecl StaticEnum<enum_ETextJustify::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETextJustify.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Slate();
    Z_Registration_Info_UEnum_ETextJustify.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Slate_ETextJustify,(UObject *)pUVar1,L"ETextJustify");
  }
  return Z_Registration_Info_UEnum_ETextJustify.OuterSingleton;
}

// `vcall'{600,{flat}}'_}' @ 14284c914

/* [thunk]: __cdecl SComboButton::`vcall'{600,{flat}}' }' */

void __thiscall SComboButton::_vcall__600__flat______(SComboButton *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014284c917. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 600))();
  return;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14284c924

/* [thunk]:public: virtual void * __ptr64 __cdecl UButtonWidgetStyle::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UButtonWidgetStyle::_vector_deleting_destructor__adjustor_40__
          (UButtonWidgetStyle *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UButtonWidgetStyle *)
                      &this[-1].ButtonStyle.ClickedSlateSound.LegacyResourceObject_DEPRECATED,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14284c934

/* [thunk]:public: virtual void * __ptr64 __cdecl UCheckBoxWidgetStyle::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UCheckBoxWidgetStyle::_vector_deleting_destructor__adjustor_40__
          (UCheckBoxWidgetStyle *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UCheckBoxWidgetStyle *)
                      &this[-1].CheckBoxStyle.UncheckedSlateSound.LegacyResourceObject_DEPRECATED,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14284c944

/* [thunk]:public: virtual void * __ptr64 __cdecl UComboBoxWidgetStyle::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UComboBoxWidgetStyle::_vector_deleting_destructor__adjustor_40__
          (UComboBoxWidgetStyle *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UComboBoxWidgetStyle *)
                      &this[-1].ComboBoxStyle.SelectionChangeSlateSound.
                       LegacyResourceObject_DEPRECATED,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14284c954

/* [thunk]:public: virtual void * __ptr64 __cdecl UComboButtonWidgetStyle::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UComboButtonWidgetStyle::_vector_deleting_destructor__adjustor_40__
          (UComboButtonWidgetStyle *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UComboButtonWidgetStyle *)&this[-1].ComboButtonStyle.ContentPadding.Right,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14284c964

/* [thunk]:public: virtual void * __ptr64 __cdecl UEditableTextBoxWidgetStyle::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UEditableTextBoxWidgetStyle::_vector_deleting_destructor__adjustor_40__
          (UEditableTextBoxWidgetStyle *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UEditableTextBoxWidgetStyle *)
                      &this[-1].EditableTextBoxStyle.ScrollBarStyle.DraggedThumbImage.ResourceHandle
                      ,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14284c974

/* [thunk]:public: virtual void * __ptr64 __cdecl UEditableTextWidgetStyle::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UEditableTextWidgetStyle::_vector_deleting_destructor__adjustor_40__
          (UEditableTextWidgetStyle *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UEditableTextWidgetStyle *)
                      &this[-1].EditableTextStyle.CaretImage.UVRegion.Max,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14284c984

/* [thunk]:public: virtual void * __ptr64 __cdecl UProgressWidgetStyle::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UProgressWidgetStyle::_vector_deleting_destructor__adjustor_40__
          (UProgressWidgetStyle *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UProgressWidgetStyle *)&this[-1].ProgressBarStyle.MarqueeImage.ResourceHandle
                      ,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14284c994

/* [thunk]:public: virtual void * __ptr64 __cdecl UScrollBarWidgetStyle::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UScrollBarWidgetStyle::_vector_deleting_destructor__adjustor_40__
          (UScrollBarWidgetStyle *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UScrollBarWidgetStyle *)
                      &this[-1].ScrollBarStyle.DraggedThumbImage.ResourceHandle,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14284c9a4

/* [thunk]:public: virtual void * __ptr64 __cdecl UScrollBoxWidgetStyle::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UScrollBoxWidgetStyle::_vector_deleting_destructor__adjustor_40__
          (UScrollBoxWidgetStyle *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UScrollBoxWidgetStyle *)
                      &this[-1].ScrollBoxStyle.RightShadowBrush.ResourceName,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14284c9b4

/* [thunk]:public: virtual void * __ptr64 __cdecl USpinBoxWidgetStyle::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
USpinBoxWidgetStyle::_vector_deleting_destructor__adjustor_40__
          (USpinBoxWidgetStyle *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((USpinBoxWidgetStyle *)&this[-1].SpinBoxStyle.TextPadding.Top,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14284c9c4

/* [thunk]:public: virtual void * __ptr64 __cdecl UTextBlockWidgetStyle::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UTextBlockWidgetStyle::_vector_deleting_destructor__adjustor_40__
          (UTextBlockWidgetStyle *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UTextBlockWidgetStyle *)
                      &this[-1].TextBlockStyle.UnderlineBrush.ResourceHandle,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14284c9e0

void * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::_scalar_deleting_destructor_
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
           *this,uint param_1)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284ca40

void * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Math::TVector4<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector4<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::_scalar_deleting_destructor_
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector4<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
           *this,uint param_1)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284caa0

void * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FLinearColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FLinearColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::_scalar_deleting_destructor_
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FLinearColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
           *this,uint param_1)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284cb00

void * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::_scalar_deleting_destructor_
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
           *this,uint param_1)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284cb60

void * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_EColorBlockAlphaDisplayMode,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_EColorBlockAlphaDisplayMode,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284cbc0

void * __thiscall
IBaseDelegateInstance<TOptional<UE::Math::TVector2<double>_>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TOptional<UE::Math::TVector2<double>_>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284cbf0

void * __thiscall
IBaseDelegateInstance<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284cc20

void * __thiscall
IBaseDelegateInstance<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284cc50

void * __thiscall
IBaseDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284cc80

void * __thiscall
TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`SEditableText::Construct'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284ccb0

void * __thiscall
TBaseFunctorDelegateInstance<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,`SEditableText::EnsureActiveTick'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284cce0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284cd10

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284cd40

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284cd70

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_4>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284cda0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_5>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284cdd0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_6>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284ce00

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_7>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284ce30

void * __thiscall
TBaseSPMethodDelegateInstance<1,SCheckBox_const_,1,FMargin___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SCheckBox_const_,1,FMargin___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284ce90

void * __thiscall
TBaseSPMethodDelegateInstance<1,SCheckBox_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SCheckBox_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284cef0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SCheckBox_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SCheckBox_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284cf50

void * __thiscall
TBaseSPMethodDelegateInstance<1,SComboButton_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FText>_>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SComboButton_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FText>_>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)this->_padding_ + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284cff0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SDockTab_const_,1,TOptional<UE::Math::TVector2<double>_>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SDockTab_const_,1,TOptional<UE::Math::TVector2<double>_>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284d050

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SEditableTextBox_const_,1,FMargin___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SEditableTextBox_const_,1,FMargin___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284d0b0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SEditableTextBox_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SEditableTextBox_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284d110

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SEditableTextBox_const_,1,FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SEditableTextBox_const_,1,FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284d170

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SEditableTextBox_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SEditableTextBox_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284d1d0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SThrobber_const_,1,UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy,int>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SThrobber_const_,1,UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy,int>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284d230

void * __thiscall
TBaseSPMethodDelegateInstance<1,SThrobber_const_,1,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy,int>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SThrobber_const_,1,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy,int>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284d290

void * __thiscall
TBaseSPMethodDelegateInstance<1,SThrobber_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SThrobber_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284d2f0

void * __thiscall
TBaseSPMethodDelegateInstance<0,FSlateHyperlinkRun,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,FSlateHyperlinkRun,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284d350

void * __thiscall
TBaseSPMethodDelegateInstance<0,SComboButton,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SComboButton,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284d3b0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SDockTab,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SDockTab,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284d410

void * __thiscall
TBaseSPMethodDelegateInstance<0,SDockTab,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284d470

void * __thiscall
TBaseSPMethodDelegateInstance<0,SEditableLabel,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284d4d0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SEditableTextBox,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SEditableTextBox,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284d530

void * __thiscall
TBaseSPMethodDelegateInstance<0,SEditableTextBox,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284d590

void * __thiscall
TBaseSPMethodDelegateInstance<0,SHyperlink,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SHyperlink,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284d5f0

void * __thiscall
TCommonDelegateInstanceState<TOptional<UE::Math::TVector2<double>_>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TOptional<UE::Math::TVector2<double>_>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284d620

void * __thiscall
TCommonDelegateInstanceState<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy,int>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy,int>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284d650

void * __thiscall
TCommonDelegateInstanceState<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy,int>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy,int>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284d680

void * __thiscall
TCommonDelegateInstanceState<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284d6b0

void * __thiscall
TCommonDelegateInstanceState<FString___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FString___cdecl(void),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284d6e0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FShapedTextCache,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FShapedTextCache,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284d720

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FTrackedMetaData,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FTrackedMetaData,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284d760

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SEditableText,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SEditableText,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x5c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284d7a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SPopupErrorText,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SPopupErrorText,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x428);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284d7e0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SRichTextHyperlink,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SRichTextHyperlink,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x4e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284d820

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDefaultLayoutBlock,SharedPointerInternals::DefaultDeleter<FDefaultLayoutBlock>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDefaultLayoutBlock,SharedPointerInternals::DefaultDeleter<FDefaultLayoutBlock>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284d860

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDefaultRichTextMarkupParser,SharedPointerInternals::DefaultDeleter<FDefaultRichTextMarkupParser>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDefaultRichTextMarkupParser,SharedPointerInternals::DefaultDeleter<FDefaultRichTextMarkupParser>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284d8a0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDefaultRichTextMarkupWriter,SharedPointerInternals::DefaultDeleter<FDefaultRichTextMarkupWriter>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDefaultRichTextMarkupWriter,SharedPointerInternals::DefaultDeleter<FDefaultRichTextMarkupWriter>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284d8e0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FExtender,SharedPointerInternals::DefaultDeleter<FExtender>,1>::
_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FExtender,SharedPointerInternals::DefaultDeleter<FExtender>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284d920

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FHyperlinkDecorator,SharedPointerInternals::DefaultDeleter<FHyperlinkDecorator>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FHyperlinkDecorator,SharedPointerInternals::DefaultDeleter<FHyperlinkDecorator>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284d960

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FImageDecorator,SharedPointerInternals::DefaultDeleter<FImageDecorator>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FImageDecorator,SharedPointerInternals::DefaultDeleter<FImageDecorator>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284d9a0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FPlainTextLayoutMarshaller,SharedPointerInternals::DefaultDeleter<FPlainTextLayoutMarshaller>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FPlainTextLayoutMarshaller,SharedPointerInternals::DefaultDeleter<FPlainTextLayoutMarshaller>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284d9e0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FRichTextLayoutMarshaller,SharedPointerInternals::DefaultDeleter<FRichTextLayoutMarshaller>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FRichTextLayoutMarshaller,SharedPointerInternals::DefaultDeleter<FRichTextLayoutMarshaller>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284da20

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FRichTextSyntaxHighlighterTextLayoutMarshaller,SharedPointerInternals::DefaultDeleter<FRichTextSyntaxHighlighterTextLayoutMarshaller>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FRichTextSyntaxHighlighterTextLayoutMarshaller,SharedPointerInternals::DefaultDeleter<FRichTextSyntaxHighlighterTextLayoutMarshaller>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284da60

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FShapedGlyphSequence,SharedPointerInternals::DefaultDeleter<FShapedGlyphSequence>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FShapedGlyphSequence,SharedPointerInternals::DefaultDeleter<FShapedGlyphSequence>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284daa0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateHyperlinkRun,SharedPointerInternals::DefaultDeleter<FSlateHyperlinkRun>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FSlateHyperlinkRun,SharedPointerInternals::DefaultDeleter<FSlateHyperlinkRun>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284dae0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateImageRun,SharedPointerInternals::DefaultDeleter<FSlateImageRun>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FSlateImageRun,SharedPointerInternals::DefaultDeleter<FSlateImageRun>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284db20

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlatePasswordRun,SharedPointerInternals::DefaultDeleter<FSlatePasswordRun>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FSlatePasswordRun,SharedPointerInternals::DefaultDeleter<FSlatePasswordRun>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284db60

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateTextHighlightRunRenderer,SharedPointerInternals::DefaultDeleter<FSlateTextHighlightRunRenderer>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FSlateTextHighlightRunRenderer,SharedPointerInternals::DefaultDeleter<FSlateTextHighlightRunRenderer>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284dba0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateTextLayout,SharedPointerInternals::DefaultDeleter<FSlateTextLayout>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FSlateTextLayout,SharedPointerInternals::DefaultDeleter<FSlateTextLayout>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284dbe0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateTextRun,SharedPointerInternals::DefaultDeleter<FSlateTextRun>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FSlateTextRun,SharedPointerInternals::DefaultDeleter<FSlateTextRun>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284dc20

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateTextStrikeLineHighlighter,SharedPointerInternals::DefaultDeleter<FSlateTextStrikeLineHighlighter>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FSlateTextStrikeLineHighlighter,SharedPointerInternals::DefaultDeleter<FSlateTextStrikeLineHighlighter>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284dc60

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateTextUnderlineLineHighlighter,SharedPointerInternals::DefaultDeleter<FSlateTextUnderlineLineHighlighter>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FSlateTextUnderlineLineHighlighter,SharedPointerInternals::DefaultDeleter<FSlateTextUnderlineLineHighlighter>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284dca0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateWidgetRun,SharedPointerInternals::DefaultDeleter<FSlateWidgetRun>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FSlateWidgetRun,SharedPointerInternals::DefaultDeleter<FSlateWidgetRun>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284dce0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FString,SharedPointerInternals::DefaultDeleter<FString>,1>::
_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FString,SharedPointerInternals::DefaultDeleter<FString>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284dd20

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSyntaxTokenizer,SharedPointerInternals::DefaultDeleter<FSyntaxTokenizer>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FSyntaxTokenizer,SharedPointerInternals::DefaultDeleter<FSyntaxTokenizer>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284dd60

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FWidgetDecorator,SharedPointerInternals::DefaultDeleter<FWidgetDecorator>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FWidgetDecorator,SharedPointerInternals::DefaultDeleter<FWidgetDecorator>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284dda0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FWidgetLayoutBlock,SharedPointerInternals::DefaultDeleter<FWidgetLayoutBlock>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FWidgetLayoutBlock,SharedPointerInternals::DefaultDeleter<FWidgetLayoutBlock>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284dde0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateHyperlinkRun::FWidgetViewModel,SharedPointerInternals::DefaultDeleter<FSlateHyperlinkRun::FWidgetViewModel>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FSlateHyperlinkRun::FWidgetViewModel,SharedPointerInternals::DefaultDeleter<FSlateHyperlinkRun::FWidgetViewModel>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284de20

void * __thiscall
TSlotlessChildren<SWidget>::_scalar_deleting_destructor_
          (TSlotlessChildren<SWidget> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TSharedRef<SWidget,1>,int>
            ((TSharedRef<SWidget,1> *)(this->Children).AllocatorInstance.Data,
             (this->Children).ArrayNum);
  pFVar1 = (this->Children).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FChildren::~FChildren((FChildren *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284de80

void * __thiscall
FBaseTextLayoutMarshaller::_scalar_deleting_destructor_
          (FBaseTextLayoutMarshaller *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ITextLayoutMarshaller__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284dec0

void * __thiscall
FDefaultLayoutBlock::_scalar_deleting_destructor_(FDefaultLayoutBlock *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FDefaultLayoutBlock__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Renderer).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)(this->TextContext)._padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Run).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7ILayoutBlock__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284df30

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void * __thiscall
FDefaultRichTextMarkupParser::_scalar_deleting_destructor_
          (FDefaultRichTextMarkupParser *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AttributeRegexPattern).Implementation.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ElementRegexPattern).Implementation.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->EscapeSequenceRegexPattern).Implementation.SharedReferenceCount.
             ReferenceController);
  this->_padding_ = (longlong)&___7IRichTextMarkupParser__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284df90

void * __thiscall
FDefaultRichTextMarkupWriter::_scalar_deleting_destructor_
          (FDefaultRichTextMarkupWriter *this,uint param_1)

{
  *this = (FDefaultRichTextMarkupWriter)&___7IRichTextMarkupWriter__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284dfd0

void * __thiscall
FHyperlinkDecorator::_scalar_deleting_destructor_(FHyperlinkDecorator *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FHyperlinkDecorator__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ToolTipDelegate);
  pvVar1 = *(void **)&(this->ToolTipDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ToolTipDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ToolTipTextDelegate);
  pvVar1 = *(void **)&(this->ToolTipTextDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ToolTipTextDelegate);
  pFVar2 = (this->Id).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->NavigateDelegate);
  pvVar1 = *(void **)&(this->NavigateDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->NavigateDelegate);
  this->_padding_ = (longlong)&___7ITextDecorator__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284e0a0

void * __thiscall FImageDecorator::_scalar_deleting_destructor_(FImageDecorator *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FImageDecorator__6B_;
  pFVar1 = (this->RunName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7ITextDecorator__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284e100

void * __thiscall
FPlainTextLayoutMarshaller::_scalar_deleting_destructor_
          (FPlainTextLayoutMarshaller *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FPlainTextLayoutMarshaller__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->bIsPassword).Getter);
  pvVar1 = *(void **)&(this->bIsPassword).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->bIsPassword).Getter);
  this->_padding_ = (longlong)&___7ITextLayoutMarshaller__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284e180

void * __thiscall
FRichTextLayoutMarshaller::_scalar_deleting_destructor_
          (FRichTextLayoutMarshaller *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FRichTextLayoutMarshaller__6B_;
  DestructItems<TSharedRef<ITextDecorator,1>,int>
            ((TSharedRef<ITextDecorator,1> *)(this->InlineDecorators).AllocatorInstance.Data,
             (this->InlineDecorators).ArrayNum);
  pFVar1 = (this->InlineDecorators).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedRef<ITextDecorator,1>,int>
            ((TSharedRef<ITextDecorator,1> *)(this->Decorators).AllocatorInstance.Data,
             (this->Decorators).ArrayNum);
  pFVar1 = (this->Decorators).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Writer).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Parser).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7ITextLayoutMarshaller__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284e210

void * __thiscall
FRichTextSyntaxHighlighterTextLayoutMarshaller::_scalar_deleting_destructor_
          (FRichTextSyntaxHighlighterTextLayoutMarshaller *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FRichTextSyntaxHighlighterTextLayoutMarshaller__6B_;
  FTextBlockStyle::~FTextBlockStyle(&(this->SyntaxTextStyle).NodeAttributeValueTextStyle);
  FTextBlockStyle::~FTextBlockStyle(&(this->SyntaxTextStyle).NodeAttribueAssignmentTextStyle);
  FTextBlockStyle::~FTextBlockStyle(&(this->SyntaxTextStyle).NodeAttributeKeyTextStyle);
  FTextBlockStyle::~FTextBlockStyle(&(this->SyntaxTextStyle).NodeTextStyle);
  FTextBlockStyle::~FTextBlockStyle(&(this->SyntaxTextStyle).NormalTextStyle);
  this->_padding_ = (longlong)&___7FSyntaxHighlighterTextLayoutMarshaller__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  this->_padding_ = (longlong)&___7FPlainTextLayoutMarshaller__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  this->_padding_ = (longlong)&___7ITextLayoutMarshaller__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xeb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284e2e0

void * __thiscall
FSlateAccessibleButton::_scalar_deleting_destructor_(FSlateAccessibleButton *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__FSlateAccessibleWidget__;
  *(undefined ***)&this->field_0x68 = &_vftable__for__IAccessibleActivatable__;
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284e330

void * __thiscall
FSlateAccessibleCheckBox::_scalar_deleting_destructor_(FSlateAccessibleCheckBox *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__FSlateAccessibleWidget__;
  *(undefined ***)&this->field_0x68 = &_vftable__for__IAccessibleActivatable__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IAccessibleProperty__;
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284e390

void * __thiscall
FSlateAccessibleEditableText::_scalar_deleting_destructor_
          (FSlateAccessibleEditableText *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284e3d0

void * __thiscall
FSlateAccessibleEditableTextBox::_scalar_deleting_destructor_
          (FSlateAccessibleEditableTextBox *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284e410

void * __thiscall
FSlateAccessibleHyperlink::_scalar_deleting_destructor_
          (FSlateAccessibleHyperlink *this,uint param_1)

{
  *(undefined ***)this = &FSlateAccessibleButton::_vftable__for__FSlateAccessibleWidget__;
  *(undefined ***)&this->field_0x68 =
       &FSlateAccessibleButton::_vftable__for__IAccessibleActivatable__;
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284e460

void * __thiscall
FSlateHyperlinkRun::_scalar_deleting_destructor_(FSlateHyperlinkRun *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  longlong *plVar5;
  
  *(undefined ***)this = &___7FSlateHyperlinkRun__6B_;
  DestructItems<TSharedRef<SWidget,1>,int>
            ((TSharedRef<SWidget,1> *)(this->Children).AllocatorInstance.Data,
             (this->Children).ArrayNum);
  pFVar3 = (this->Children).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ViewModel).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->TooltipTextDelegate);
  pvVar4 = *(void **)&(this->TooltipTextDelegate).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->TooltipTextDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->TooltipDelegate);
  pvVar4 = *(void **)&(this->TooltipDelegate).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->TooltipDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->NavigateDelegate);
  pvVar4 = *(void **)&(this->NavigateDelegate).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->NavigateDelegate);
  FHyperlinkStyle::~FHyperlinkStyle(&this->Style);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Text).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->RunInfo).MetaData.field_0x48 = 0;
  pvVar4 = *(void **)&(this->RunInfo).MetaData.field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->RunInfo).MetaData);
  pFVar3 = (this->RunInfo).Name.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  plVar5 = *(longlong **)&this->field_0x10;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  *(undefined ***)this = &___7IRun__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x790);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284e5d0

void * __thiscall FSlateImageRun::_scalar_deleting_destructor_(FSlateImageRun *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  FSlateDynamicImageBrush *this_00;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  
  this->_padding_ = (longlong)&___7FSlateImageRun__6B_;
  this_00 = (this->DynamicBrush).Object;
  if (this_00 != (FSlateDynamicImageBrush *)0x0) {
    FSlateDynamicImageBrush::ReleaseResource(this_00);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DynamicBrush).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Baseline).Getter);
  pvVar3 = *(void **)&(this->Baseline).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Baseline).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Text).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->RunInfo).MetaData.field_0x48 = 0;
  pvVar3 = *(void **)&(this->RunInfo).MetaData.field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->RunInfo).MetaData);
  pFVar4 = (this->RunInfo).Name.Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  this->_padding_ = (longlong)&___7IRun__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284e6d0

void * __thiscall
FSlatePasswordRun::_scalar_deleting_destructor_(FSlatePasswordRun *this,uint param_1)

{
  *(undefined ***)this = &___7FSlatePasswordRun__6B_;
  FSlateTextRun::~FSlateTextRun((FSlateTextRun *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x380);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284e720

void * __thiscall
FSlateTextHighlightRunRenderer::_scalar_deleting_destructor_
          (FSlateTextHighlightRunRenderer *this,uint param_1)

{
  *this = (FSlateTextHighlightRunRenderer)&___7IRunRenderer__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284e760

void * __thiscall
FSlateTextLayout::_scalar_deleting_destructor_(FSlateTextLayout *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->bIsPassword).Getter);
  pvVar1 = *(void **)&(this->bIsPassword).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->bIsPassword).Getter);
  DestructItems<TSharedRef<SWidget,1>,int>
            ((TSharedRef<SWidget,1> *)(this->Children).Children.AllocatorInstance.Data,
             (this->Children).Children.ArrayNum);
  pFVar2 = (this->Children).Children.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FChildren::~FChildren((FChildren *)&this->Children);
  FTextBlockStyle::~FTextBlockStyle(&this->DefaultTextStyle);
  FTextLayout::~FTextLayout((FTextLayout *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x4a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284e810

void * __thiscall FSlateTextRun::_scalar_deleting_destructor_(FSlateTextRun *this,uint param_1)

{
  ~FSlateTextRun(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x380);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284e850

void * __thiscall
FSlateTextStrikeLineHighlighter::_scalar_deleting_destructor_
          (FSlateTextStrikeLineHighlighter *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0xf8);
  *(undefined ***)&this->field_0x10 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0xb0);
  *(undefined ***)this = &___7ILineHighlighter__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284e8c0

void * __thiscall
FSlateTextUnderlineLineHighlighter::_scalar_deleting_destructor_
          (FSlateTextUnderlineLineHighlighter *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0xf8);
  *(undefined ***)&this->field_0x10 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0xb0);
  *(undefined ***)this = &___7ILineHighlighter__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284e930

void * __thiscall FSlateWidgetRun::_scalar_deleting_destructor_(FSlateWidgetRun *this,uint param_1)

{
  ~FSlateWidgetRun(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284e970

void * __thiscall
FSyntaxHighlighterTextLayoutMarshaller::_scalar_deleting_destructor_
          (FSyntaxHighlighterTextLayoutMarshaller *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FSyntaxHighlighterTextLayoutMarshaller__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Tokenizer).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FPlainTextLayoutMarshaller__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  this->_padding_ = (longlong)&___7ITextLayoutMarshaller__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284ea00

void * __thiscall
FSyntaxTokenizer::_scalar_deleting_destructor_(FSyntaxTokenizer *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FSyntaxTokenizer__6B_;
  DestructItems<FSyntaxTokenizer::FRule,int>
            ((FRule *)(this->Rules).AllocatorInstance.Data,(this->Rules).ArrayNum);
  pFVar1 = (this->Rules).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7ISyntaxTokenizer__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284ea70

void * __thiscall FTextLayout::_scalar_deleting_destructor_(FTextLayout *this,uint param_1)

{
  ~FTextLayout(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284eab0

void * __thiscall
FWidgetDecorator::_scalar_deleting_destructor_(FWidgetDecorator *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FWidgetDecorator__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CreateWidgetDelegate);
  pvVar1 = *(void **)&(this->CreateWidgetDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->CreateWidgetDelegate);
  pFVar2 = (this->RunName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7ITextDecorator__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284eb40

void * __thiscall
FWidgetLayoutBlock::_scalar_deleting_destructor_(FWidgetLayoutBlock *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FWidgetLayoutBlock__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Renderer).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)(this->TextContext)._padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Widget).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Run).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7ILayoutBlock__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284ebb0

void * __thiscall ILayoutBlock::_scalar_deleting_destructor_(ILayoutBlock *this,uint param_1)

{
  *this = (ILayoutBlock)&___7ILayoutBlock__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284ebf0

void * __thiscall
ILineHighlighter::_scalar_deleting_destructor_(ILineHighlighter *this,uint param_1)

{
  *this = (ILineHighlighter)&___7ILineHighlighter__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284ec30

void * __thiscall
IRichTextMarkupParser::_scalar_deleting_destructor_(IRichTextMarkupParser *this,uint param_1)

{
  *this = (IRichTextMarkupParser)&___7IRichTextMarkupParser__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284ec70

void * __thiscall
IRichTextMarkupWriter::_scalar_deleting_destructor_(IRichTextMarkupWriter *this,uint param_1)

{
  *this = (IRichTextMarkupWriter)&___7IRichTextMarkupWriter__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284ecb0

void * __thiscall IRun::_scalar_deleting_destructor_(IRun *this,uint param_1)

{
  *this = (IRun)&___7IRun__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284ecf0

void * __thiscall IRunRenderer::_scalar_deleting_destructor_(IRunRenderer *this,uint param_1)

{
  *this = (IRunRenderer)&___7IRunRenderer__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284ed30

void * __thiscall
ISlateLineHighlighter::_scalar_deleting_destructor_(ISlateLineHighlighter *this,uint param_1)

{
  *this = (ISlateLineHighlighter)&___7ILineHighlighter__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284ed70

void * __thiscall ISlateRun::_scalar_deleting_destructor_(ISlateRun *this,uint param_1)

{
  *this = (ISlateRun)&___7IRun__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284edb0

void * __thiscall
ISlateRunRenderer::_scalar_deleting_destructor_(ISlateRunRenderer *this,uint param_1)

{
  *this = (ISlateRunRenderer)&___7IRunRenderer__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284edf0

void * __thiscall
ISlateTextLineHighlighter::_scalar_deleting_destructor_
          (ISlateTextLineHighlighter *this,uint param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->FontInfo).CompositeFont.SharedReferenceCount.ReferenceController);
  pTVar1 = (this->LineBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->LineBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  this->_padding_ = (longlong)&___7ILineHighlighter__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284ee60

void * __thiscall
ISyntaxTokenizer::_scalar_deleting_destructor_(ISyntaxTokenizer *this,uint param_1)

{
  *this = (ISyntaxTokenizer)&___7ISyntaxTokenizer__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284eea0

void * __thiscall ITextDecorator::_scalar_deleting_destructor_(ITextDecorator *this,uint param_1)

{
  *this = (ITextDecorator)&___7ITextDecorator__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284eee0

void * __thiscall
ITextLayoutMarshaller::_scalar_deleting_destructor_(ITextLayoutMarshaller *this,uint param_1)

{
  *this = (ITextLayoutMarshaller)&___7ITextLayoutMarshaller__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284ef20

void * __thiscall SButton::_scalar_deleting_destructor_(SButton *this,uint param_1)

{
  ~SButton(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x4b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284ef80

void * __thiscall SCheckBox::_scalar_deleting_destructor_(SCheckBox *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7SCheckBox__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ContentContainer).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGetMenuContent);
  pvVar1 = *(void **)&(this->OnGetMenuContent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGetMenuContent);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->BorderBackgroundColorOverride).Getter);
  pvVar1 = *(void **)&(this->BorderBackgroundColorOverride).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->BorderBackgroundColorOverride).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ForegroundColorOverride).Getter);
  pvVar1 = *(void **)&(this->ForegroundColorOverride).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ForegroundColorOverride).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->PaddingOverride).Getter);
  pvVar1 = *(void **)&(this->PaddingOverride).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->PaddingOverride).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnCheckStateChanged);
  pvVar1 = *(void **)&(this->OnCheckStateChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCheckStateChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->IsCheckboxChecked).Getter);
  pvVar1 = *(void **)&(this->IsCheckboxChecked).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->IsCheckboxChecked).Getter);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x470);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284f100

void * __thiscall
SCircularThrobber::_scalar_deleting_destructor_(SCircularThrobber *this,uint param_1)

{
  this->_padding_ = (longlong)&___7SCircularThrobber__6B_;
  FCurveSequence::~FCurveSequence(&this->Sequence);
  SLeafWidget::~SLeafWidget((SLeafWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284f170

void * __thiscall SColorBlock::_scalar_deleting_destructor_(SColorBlock *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7SColorBlock__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->MouseButtonDownHandler);
  pvVar1 = *(void **)&(this->MouseButtonDownHandler).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MouseButtonDownHandler);
  SLeafWidget::~SLeafWidget((SLeafWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x280);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284f210

void * __thiscall
SColorGradingWheel::_scalar_deleting_destructor_(SColorGradingWheel *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7SColorGradingWheel__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnValueChanged);
  pvVar1 = *(void **)&(this->OnValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnMouseCaptureEnd);
  pvVar1 = *(void **)&(this->OnMouseCaptureEnd).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMouseCaptureEnd);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnMouseCaptureBegin);
  pvVar1 = *(void **)&(this->OnMouseCaptureBegin).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMouseCaptureBegin);
  SLeafWidget::~SLeafWidget((SLeafWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x290);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284f300

void * __thiscall SColorSpectrum::_scalar_deleting_destructor_(SColorSpectrum *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7SColorSpectrum__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnValueChanged);
  pvVar1 = *(void **)&(this->OnValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnMouseCaptureEnd);
  pvVar1 = *(void **)&(this->OnMouseCaptureEnd).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMouseCaptureEnd);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnMouseCaptureBegin);
  pvVar1 = *(void **)&(this->OnMouseCaptureBegin).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMouseCaptureBegin);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->CtrlMultiplier).Getter);
  pvVar1 = *(void **)&(this->CtrlMultiplier).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->CtrlMultiplier).Getter);
  SLeafWidget::~SLeafWidget((SLeafWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284f420

void * __thiscall SColorWheel::_scalar_deleting_destructor_(SColorWheel *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7SColorWheel__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnValueChanged);
  pvVar1 = *(void **)&(this->OnValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnMouseCaptureEnd);
  pvVar1 = *(void **)&(this->OnMouseCaptureEnd).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMouseCaptureEnd);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnMouseCaptureBegin);
  pvVar1 = *(void **)&(this->OnMouseCaptureBegin).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMouseCaptureBegin);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->CtrlMultiplier).Getter);
  pvVar1 = *(void **)&(this->CtrlMultiplier).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->CtrlMultiplier).Getter);
  SLeafWidget::~SLeafWidget((SLeafWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284f540

void * __thiscall
SComplexGradient::_scalar_deleting_destructor_(SComplexGradient *this,uint param_1)

{
  this->_padding_ = (longlong)&___7SComplexGradient__6B_;
  if (*(void **)&this->GradientColors != (void *)0x0) {
    FMemory::Free(*(void **)&this->GradientColors);
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284f5c0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall SDockTab::_scalar_deleting_destructor_(SDockTab *this,uint param_1)

{
  ~SDockTab(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x6d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284f620

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall SEditableText::_scalar_deleting_destructor_(SEditableText *this,uint param_1)

{
  ~SEditableText(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x5b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284f680

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SEditableTextBox::_scalar_deleting_destructor_(SEditableTextBox *this,uint param_1)

{
  ~SEditableTextBox(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x520);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284f6e0

void * __thiscall SHyperlink::_scalar_deleting_destructor_(SHyperlink *this,uint param_1)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnNavigate);
  pvVar1 = *(void **)&(this->OnNavigate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnNavigate);
  SButton::~SButton((SButton *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x4c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284f770

void * __thiscall SPopupErrorText::_scalar_deleting_destructor_(SPopupErrorText *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ErrorText).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->HasErrorSymbol).SharedReferenceCount.ReferenceController);
  SComboButton::~SComboButton((SComboButton *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x418);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284f7e0

void * __thiscall
SRichTextHyperlink::_scalar_deleting_destructor_(SRichTextHyperlink *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ViewModel).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  SButton::~SButton((SButton *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x4d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284f880

void * __thiscall SSimpleGradient::_scalar_deleting_destructor_(SSimpleGradient *this,uint param_1)

{
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284f8e0

void * __thiscall
UButtonWidgetStyle::_scalar_deleting_destructor_(UButtonWidgetStyle *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FButtonStyle::~FButtonStyle(&this->ButtonStyle);
  USlateWidgetStyleContainerBase::~USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x3c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284f960

void * __thiscall
UCheckBoxWidgetStyle::_scalar_deleting_destructor_(UCheckBoxWidgetStyle *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FCheckBoxStyle::~FCheckBoxStyle(&this->CheckBoxStyle);
  USlateWidgetStyleContainerBase::~USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x980);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284f9e0

void * __thiscall
UComboBoxWidgetStyle::_scalar_deleting_destructor_(UComboBoxWidgetStyle *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FComboBoxStyle::~FComboBoxStyle(&this->ComboBoxStyle);
  USlateWidgetStyleContainerBase::~USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x5f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284fa60

void * __thiscall
UComboButtonWidgetStyle::_scalar_deleting_destructor_(UComboButtonWidgetStyle *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FComboButtonStyle::~FComboButtonStyle(&this->ComboButtonStyle);
  USlateWidgetStyleContainerBase::~USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x590);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284fae0

void * __thiscall
UEditableTextBoxWidgetStyle::_scalar_deleting_destructor_
          (UEditableTextBoxWidgetStyle *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FEditableTextBoxStyle::~FEditableTextBoxStyle(&this->EditableTextBoxStyle);
  USlateWidgetStyleContainerBase::~USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xcb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284fb60

void * __thiscall
UEditableTextWidgetStyle::_scalar_deleting_destructor_(UEditableTextWidgetStyle *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FEditableTextStyle::~FEditableTextStyle(&this->EditableTextStyle);
  USlateWidgetStyleContainerBase::~USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284fbe0

void * __thiscall
UProgressWidgetStyle::_scalar_deleting_destructor_(UProgressWidgetStyle *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FProgressBarStyle::~FProgressBarStyle(&this->ProgressBarStyle);
  USlateWidgetStyleContainerBase::~USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x260);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284fc60

void * __thiscall
UScrollBarWidgetStyle::_scalar_deleting_destructor_(UScrollBarWidgetStyle *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FScrollBarStyle::~FScrollBarStyle(&this->ScrollBarStyle);
  USlateWidgetStyleContainerBase::~USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x680);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284fce0

void * __thiscall
UScrollBoxWidgetStyle::_scalar_deleting_destructor_(UScrollBoxWidgetStyle *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FScrollBoxStyle::~FScrollBoxStyle(&this->ScrollBoxStyle);
  USlateWidgetStyleContainerBase::~USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,800);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284fd60

void * __thiscall
USpinBoxWidgetStyle::_scalar_deleting_destructor_(USpinBoxWidgetStyle *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FSpinBoxStyle::~FSpinBoxStyle(&this->SpinBoxStyle);
  USlateWidgetStyleContainerBase::~USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x550);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14284fde0

void * __thiscall
UTextBlockWidgetStyle::_scalar_deleting_destructor_(UTextBlockWidgetStyle *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FTextBlockStyle::~FTextBlockStyle(&this->TextBlockStyle);
  USlateWidgetStyleContainerBase::~USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x310);
  }
  return this;
}

// CalculateOffsetMeasureRange @ 142857130

FTextRange __cdecl
RunUtils::CalculateOffsetMeasureRange(int param_1,FTextRange *param_2,ETextDirection param_3)

{
  int iVar1;
  FTextRange FVar2;
  FTextRange FVar3;
  int iVar4;
  int in_register_0000000c;
  undefined7 in_register_00000081;
  char in_R9B;
  
  iVar1 = *(int *)CONCAT71(in_register_00000081,param_3);
  iVar4 = iVar1 + (int)param_2;
  if (in_R9B == '\0') {
    *(int *)(CONCAT44(in_register_0000000c,param_1) + 4) = iVar4;
    FVar2.EndIndex = in_register_0000000c;
    FVar2.BeginIndex = param_1;
    *(int *)CONCAT44(in_register_0000000c,param_1) = iVar1;
    return FVar2;
  }
  *(int *)CONCAT44(in_register_0000000c,param_1) = iVar4;
  *(undefined4 *)(CONCAT44(in_register_0000000c,param_1) + 4) =
       *(undefined4 *)(CONCAT71(in_register_00000081,param_3) + 4);
  FVar3.EndIndex = in_register_0000000c;
  FVar3.BeginIndex = param_1;
  return FVar3;
}

// CalculateTextHitPoint @ 1428571d0

ETextHitPoint __cdecl
RunUtils::CalculateTextHitPoint(int param_1,FTextRange *param_2,ETextDirection param_3)

{
  ETextHitPoint EVar1;
  
  EVar1 = WithinText;
  if (param_1 == param_2->EndIndex) {
    EVar1 = RightGutter;
  }
  return EVar1;
}

// EmptyLinkFunctionForGeneratedCodeButtonWidgetStyle @ 14286ef30

void __cdecl EmptyLinkFunctionForGeneratedCodeButtonWidgetStyle(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCharRangeList @ 14286ef40

void __cdecl EmptyLinkFunctionForGeneratedCodeCharRangeList(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCheckBoxWidgetStyle @ 14286ef50

void __cdecl EmptyLinkFunctionForGeneratedCodeCheckBoxWidgetStyle(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeComboBoxWidgetStyle @ 14286ef60

void __cdecl EmptyLinkFunctionForGeneratedCodeComboBoxWidgetStyle(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeComboButtonWidgetStyle @ 14286ef70

void __cdecl EmptyLinkFunctionForGeneratedCodeComboButtonWidgetStyle(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEditableTextBoxWidgetStyle @ 14286ef80

void __cdecl EmptyLinkFunctionForGeneratedCodeEditableTextBoxWidgetStyle(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEditableTextWidgetStyle @ 14286ef90

void __cdecl EmptyLinkFunctionForGeneratedCodeEditableTextWidgetStyle(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeProgressWidgetStyle @ 14286efa0

void __cdecl EmptyLinkFunctionForGeneratedCodeProgressWidgetStyle(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeScrollBarWidgetStyle @ 14286efb0

void __cdecl EmptyLinkFunctionForGeneratedCodeScrollBarWidgetStyle(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeScrollBoxWidgetStyle @ 14286efc0

void __cdecl EmptyLinkFunctionForGeneratedCodeScrollBoxWidgetStyle(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSpinBoxWidgetStyle @ 14286efd0

void __cdecl EmptyLinkFunctionForGeneratedCodeSpinBoxWidgetStyle(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTextBlockWidgetStyle @ 14286efe0

void __cdecl EmptyLinkFunctionForGeneratedCodeTextBlockWidgetStyle(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTextLayout @ 14286eff0

void __cdecl EmptyLinkFunctionForGeneratedCodeTextLayout(void)

{
  return;
}

// FindCharacterIndexAtOffset @ 142871b30

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

int __cdecl
ShapedTextCacheUtil::FindCharacterIndexAtOffset
          (TSharedRef<FShapedTextCache,1> *param_1,FCachedShapedTextKey *param_2,FTextRange *param_3
          ,wchar_t *param_4,int param_5)

{
  FShapedTextCache *pFVar1;
  FSlateFontCache *pFVar2;
  code *pcVar3;
  FShapedGlyphSequence *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  atomic<int> aVar6;
  atomic<int> aVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  TSharedRef<FShapedGlyphSequence_const_,1> *pTVar12;
  TOptional<FShapedGlyphSequence::FGlyphOffsetResult> *pTVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  TReferenceControllerBase<1> *pTVar16;
  bool bVar17;
  TOptional<FShapedGlyphSequence::FGlyphOffsetResult> local_1e8;
  TSharedRef<IBreakIterator,1> local_1d0;
  FString local_1c0;
  FTextRange local_1b0;
  FTextRange local_1a8;
  TSharedRef<FShapedGlyphSequence_const_,1> local_1a0;
  TSharedRef<FShapedGlyphSequence_const_,1> local_190;
  TSharedRef<FShapedGlyphSequence_const_,1> local_180;
  FGlyphOffsetResult local_170;
  FGlyphOffsetResult local_160;
  TSharedRef<FShapedGlyphSequence_const_,1> local_150;
  FCachedShapedTextKey local_138;
  FGlyphOffsetResult local_c8;
  FCachedShapedTextKey local_b8;
  
  pFVar1 = param_1->Object;
  pTVar16 = (pFVar1->FontCachePtr).WeakReferenceCount.ReferenceController;
  if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
    aVar6 = pTVar16->SharedReferenceCount;
    do {
      if (aVar6 == (atomic<int>)0x0) {
        pTVar16 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142871b82;
      }
      LOCK();
      aVar7 = pTVar16->SharedReferenceCount;
      bVar17 = aVar6 == aVar7;
      if (bVar17) {
        pTVar16->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar7 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar7;
    } while (!bVar17);
    pFVar2 = (pFVar1->FontCachePtr).Object;
    if (pFVar2 != (FSlateFontCache *)0x0) {
      FShapedTextCache::FindOrAddShapedText(param_1->Object,&local_1a0,param_2,param_4);
      FShapedGlyphSequence::GetGlyphAtOffset
                (local_1a0.Object,&local_1e8,pFVar2,param_3->BeginIndex,param_3->EndIndex,param_5,0,
                 true);
      if (local_1e8.bIsSet == false) {
        local_b8.TextRange = param_2->TextRange;
        local_b8.Scale = param_2->Scale;
        local_b8.TextContext = param_2->TextContext;
        FSlateFontInfo::FSlateFontInfo(&local_b8.FontInfo,&param_2->FontInfo);
        local_b8.TextRange = *param_3;
        pTVar12 = FShapedTextCache::FindOrAddShapedText
                            (param_1->Object,&local_150,&local_b8,param_4);
        pFVar4 = pTVar12->Object;
        pTVar5 = (pTVar12->SharedReferenceCount).ReferenceController;
        pTVar12->Object = local_1a0.Object;
        (pTVar12->SharedReferenceCount).ReferenceController =
             local_1a0.SharedReferenceCount.ReferenceController;
        local_1a0.Object = pFVar4;
        local_1a0.SharedReferenceCount.ReferenceController = pTVar5;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_150.SharedReferenceCount.ReferenceController);
        pTVar13 = (TOptional<FShapedGlyphSequence::FGlyphOffsetResult> *)
                  FShapedGlyphSequence::GetGlyphAtOffset(pFVar4,&local_c8,pFVar2,param_5,0);
        if (pTVar13 != &local_1e8) {
          local_1e8.TypedValue.Glyph = (pTVar13->TypedValue).Glyph;
          local_1e8.TypedValue.GlyphOffset = (pTVar13->TypedValue).GlyphOffset;
          local_1e8.TypedValue.CharacterIndex = (pTVar13->TypedValue).CharacterIndex;
          local_1e8.bIsSet = true;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b8.FontInfo.CompositeFont.SharedReferenceCount.ReferenceController);
        if (local_1e8.bIsSet == false) {
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("GlyphOffsetResult.IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\ShapedTextCache.cpp"
                              ,0xa1,L"");
          if (bVar17) {
            pcVar3 = (code *)swi(3);
            iVar8 = (*pcVar3)();
            return iVar8;
          }
          if ((local_1e8.bIsSet == false) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar17)) {
            pcVar3 = (code *)swi(3);
            iVar8 = (*pcVar3)();
            return iVar8;
          }
        }
      }
      if ((local_1e8.TypedValue.Glyph == (FShapedGlyphEntry *)0x0) ||
         ((local_1e8.TypedValue.Glyph)->NumGraphemeClustersInGlyph < 2)) {
        iVar8 = local_1e8.TypedValue.CharacterIndex;
      }
      else {
        ::FString::ConstructFromPtrSize
                  (&local_1c0,param_4 + (local_1e8.TypedValue.Glyph)->SourceIndex,
                   (uint)(local_1e8.TypedValue.Glyph)->NumCharactersInGlyph);
        FBreakIterator::CreateCharacterBoundaryIterator(&local_1d0);
        (**(code **)((longlong)*local_1d0.Object + 0x18))(local_1d0.Object,&local_1c0);
        local_138.TextRange = param_2->TextRange;
        local_138.Scale = param_2->Scale;
        local_138.TextContext = param_2->TextContext;
        FSlateFontInfo::FSlateFontInfo(&local_138.FontInfo,&param_2->FontInfo);
        uVar14 = local_1c0.Data.ArrayNum - 1;
        if (local_1c0.Data.ArrayNum == 0) {
          uVar14 = 0;
        }
        iVar8 = local_1e8.TypedValue.GlyphOffset;
        local_138.TextRange = (FTextRange)((ulonglong)uVar14 << 0x20);
        if ((local_1e8.TypedValue.Glyph)->TextDirection == LeftToRight) {
          iVar9 = (**(code **)((longlong)*local_1d0.Object + 0x60))();
          iVar10 = (**(code **)((longlong)*local_1d0.Object + 0x78))();
          iVar11 = local_1b0.BeginIndex;
          while (local_1b0.BeginIndex = iVar9, iVar10 != -1) {
            pFVar15 = (FScriptContainerElement *)L"";
            if (local_1c0.Data.ArrayNum != 0) {
              pFVar15 = local_1c0.Data.AllocatorInstance.Data;
            }
            local_1b0.EndIndex = iVar10;
            GetShapedTextSubSequence
                      (&local_190,param_1,&local_138,&local_1b0,(wchar_t *)pFVar15,
                       (local_1e8.TypedValue.Glyph)->TextDirection);
            pFVar4 = local_190.Object;
            FShapedGlyphSequence::GetGlyphAtOffset(local_190.Object,&local_170,pFVar2,param_5,iVar8)
            ;
            if (local_170.Glyph != (FShapedGlyphEntry *)0x0) {
              iVar8 = (local_1e8.TypedValue.Glyph)->SourceIndex + local_170.CharacterIndex;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_190.SharedReferenceCount.ReferenceController);
              goto LAB_142871f58;
            }
            iVar11 = FShapedGlyphSequence::GetMeasuredWidth(pFVar4);
            iVar8 = iVar8 + iVar11;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_190.SharedReferenceCount.ReferenceController);
            iVar11 = (**(code **)((longlong)*local_1d0.Object + 0x78))();
            iVar9 = iVar10;
            iVar10 = iVar11;
            iVar11 = local_1b0.BeginIndex;
          }
          iVar8 = (uint)(local_1e8.TypedValue.Glyph)->NumCharactersInGlyph +
                  (local_1e8.TypedValue.Glyph)->SourceIndex;
          local_1b0.BeginIndex = iVar11;
        }
        else {
          iVar10 = (**(code **)((longlong)*local_1d0.Object + 0x68))();
          iVar11 = (**(code **)((longlong)*local_1d0.Object + 0x70))();
          while (iVar11 != -1) {
            pFVar15 = (FScriptContainerElement *)L"";
            if (local_1c0.Data.ArrayNum != 0) {
              pFVar15 = local_1c0.Data.AllocatorInstance.Data;
            }
            local_1a8.BeginIndex = iVar11;
            local_1a8.EndIndex = iVar10;
            GetShapedTextSubSequence
                      (&local_180,param_1,&local_138,&local_1a8,(wchar_t *)pFVar15,
                       (local_1e8.TypedValue.Glyph)->TextDirection);
            pFVar4 = local_180.Object;
            FShapedGlyphSequence::GetGlyphAtOffset(local_180.Object,&local_160,pFVar2,param_5,iVar8)
            ;
            if (local_160.Glyph != (FShapedGlyphEntry *)0x0) {
              if (iVar10 != -1) {
                local_160.CharacterIndex = iVar10;
              }
              iVar8 = local_160.CharacterIndex + (local_1e8.TypedValue.Glyph)->SourceIndex;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_180.SharedReferenceCount.ReferenceController);
              goto LAB_142871f58;
            }
            iVar10 = FShapedGlyphSequence::GetMeasuredWidth(pFVar4);
            iVar8 = iVar8 + iVar10;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_180.SharedReferenceCount.ReferenceController);
            iVar9 = (**(code **)((longlong)*local_1d0.Object + 0x70))();
            iVar10 = iVar11;
            iVar11 = iVar9;
          }
          iVar8 = (local_1e8.TypedValue.Glyph)->SourceIndex;
        }
LAB_142871f58:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_138.FontInfo.CompositeFont.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1d0.SharedReferenceCount.ReferenceController);
        if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1a0.SharedReferenceCount.ReferenceController);
      goto LAB_142871b87;
    }
  }
LAB_142871b82:
  iVar8 = -1;
LAB_142871b87:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  return iVar8;
}

// GetDefaultTextFlowDirection @ 1428762c0

ETextFlowDirection __cdecl GetDefaultTextFlowDirection(void)

{
  uint uVar1;
  ETextFlowDirection EVar2;
  
  uVar1 = (**(code **)(*(longlong *)CVarDefaultTextFlowDirection._padding_ + 200))();
  EVar2 = Auto;
  if (uVar1 < 3) {
    EVar2 = (ETextFlowDirection)uVar1;
  }
  return EVar2;
}

// GetRangeAsTextFromLine @ 142879c00

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __cdecl GetRangeAsTextFromLine(FString *param_1,FLineModel *param_2,FTextRange *param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  undefined8 local_res10;
  int local_res20;
  int iStackX_24;
  
  uVar9 = 0;
  uVar10 = uVar9;
  if (0 < (param_2->Runs).ArrayNum) {
    do {
      uVar8 = (uint)uVar9;
      uVar6 = 0;
      if ((int)uVar8 < (param_2->Runs).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (param_2->Runs).AllocatorInstance.Data;
      plVar3 = *(longlong **)(pFVar2 + uVar10);
      (**(code **)(*plVar3 + 8))(plVar3,&local_res20);
      iVar1 = param_3->EndIndex;
      iVar11 = param_3->BeginIndex;
      if (param_3->BeginIndex < local_res20) {
        iVar11 = local_res20;
      }
      iVar7 = iVar1;
      if (iStackX_24 < iVar1) {
        iVar7 = iStackX_24;
      }
      if (iVar11 < iVar7) {
        local_res10 = CONCAT44(iVar7,iVar11);
      }
      else {
        local_res10 = 0;
        iVar11 = 0;
      }
      if ((int)((ulonglong)local_res10 >> 0x20) - iVar11 < 1) {
        if (iVar1 < local_res20) {
          return;
        }
      }
      else {
        plVar3 = *(longlong **)(pFVar2 + uVar10);
        (**(code **)(*plVar3 + 0x80))(plVar3,param_1,&local_res10);
      }
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar10 = uVar10 + 0x30;
    } while ((int)(uVar8 + 1) < (param_2->Runs).ArrayNum);
  }
  return;
}

// GetShapedGlyphKerning @ 14287a470

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

schar __cdecl
ShapedTextCacheUtil::GetShapedGlyphKerning
          (TSharedRef<FShapedTextCache,1> *param_1,FCachedShapedTextKey *param_2,int param_3,
          wchar_t *param_4)

{
  FShapedGlyphSequence *this;
  TReferenceControllerBase<1> *pTVar1;
  TOptional<signed_char> TVar2;
  TSharedRef<FShapedGlyphSequence_const_,1> *pTVar3;
  undefined6 extraout_var;
  schar sVar5;
  int local_res8;
  int iStackX_c;
  schar local_c8;
  char local_c7;
  TSharedRef<FShapedGlyphSequence_const_,1> local_c0;
  TSharedRef<FShapedGlyphSequence_const_,1> local_b0;
  FCachedShapedTextKey local_98;
  schar *psVar4;
  
  FShapedTextCache::FindOrAddShapedText(param_1->Object,&local_c0,param_2,param_4);
  FShapedGlyphSequence::GetKerning(local_c0.Object,(int)&local_c8);
  sVar5 = local_c8;
  if (local_c7 == '\0') {
    local_98.TextRange = param_2->TextRange;
    local_98.Scale = param_2->Scale;
    local_98.TextContext = param_2->TextContext;
    FSlateFontInfo::FSlateFontInfo(&local_98.FontInfo,&param_2->FontInfo);
    iStackX_c = param_3 + 2;
    local_98.TextRange.EndIndex = iStackX_c;
    local_98.TextRange.BeginIndex = param_3;
    local_res8 = param_3;
    pTVar3 = FShapedTextCache::FindOrAddShapedText(param_1->Object,&local_b0,&local_98,param_4);
    this = pTVar3->Object;
    pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
    pTVar3->Object = local_c0.Object;
    (pTVar3->SharedReferenceCount).ReferenceController =
         local_c0.SharedReferenceCount.ReferenceController;
    local_c0.Object = this;
    local_c0.SharedReferenceCount.ReferenceController = pTVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b0.SharedReferenceCount.ReferenceController);
    TVar2 = FShapedGlyphSequence::GetKerning(this,(int)&local_res8);
    psVar4 = (schar *)CONCAT62(extraout_var,TVar2);
    if (psVar4 != &local_c8) {
      if (psVar4[1] == '\0') {
        if (local_c7 != '\0') {
          local_c7 = '\0';
        }
      }
      else {
        local_c8 = *psVar4;
        local_c7 = '\x01';
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.FontInfo.CompositeFont.SharedReferenceCount.ReferenceController);
    sVar5 = local_c8;
    if (local_c7 == '\0') {
      sVar5 = '\0';
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedReferenceCount.ReferenceController);
  return sVar5;
}

// GetShapedTextSubSequence @ 14287a5b0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSharedRef<FShapedGlyphSequence_const_,1> * __cdecl
ShapedTextCacheUtil::GetShapedTextSubSequence
          (TSharedRef<FShapedGlyphSequence_const_,1> *__return_storage_ptr__,
          TSharedRef<FShapedTextCache,1> *param_1,FCachedShapedTextKey *param_2,FTextRange *param_3,
          wchar_t *param_4,ETextDirection param_5)

{
  FShapedTextCache *pFVar1;
  code *pcVar2;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TSharedRef<FShapedGlyphSequence_const_,1> *pTVar7;
  TSharedPtr<FShapedGlyphSequence_const_,1> *pTVar8;
  FShapedGlyphSequence *this;
  FShapedGlyphSequence *this_00;
  longlong lVar9;
  TReferenceControllerBase<1> *pTVar10;
  FLLMScope local_res8 [2];
  TPairInitializer<FCachedShapedTextKey_const_&,TSharedPtr<FShapedGlyphSequence_const_,1>_&&>
  local_res10;
  FMemScope local_res20;
  TSharedPtr<FShapedGlyphSequence_const_,1> local_118;
  FShapedGlyphSequence *local_108;
  TReferenceControllerBase<1> *local_100;
  undefined8 local_f8;
  FSharedReferencer<1> local_f0;
  FCachedShapedTextKey *local_e8;
  FShapedGlyphSequence **local_e0;
  TSharedRef<FShapedGlyphSequence_const_,1> local_d8;
  TSharedPtr<FShapedGlyphSequence_const_,1> local_c8;
  TSharedRef<FShapedGlyphSequence_const_,1> local_b8;
  FCachedShapedTextKey local_a8;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Text.UniqueName,false,None,Default,true);
  local_res10.Value =
       (TSharedPtr<FShapedGlyphSequence_const_,1> *)LLMTagDeclaration_UI_Text.UniqueName;
  FMemScope::FMemScope(&local_res20,(FName *)&local_res10.Value,true);
  pTVar7 = FShapedTextCache::FindOrAddShapedText(param_1->Object,&local_d8,param_2,param_4);
  local_118.SharedReferenceCount.ReferenceController =
       (pTVar7->SharedReferenceCount).ReferenceController;
  this = pTVar7->Object;
  if (local_118.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_118.Object = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SharedReferenceCount.ReferenceController);
  if (((param_2->TextRange).BeginIndex == param_3->BeginIndex) &&
     (this_00 = this, (param_2->TextRange).EndIndex == param_3->EndIndex)) goto LAB_14287a908;
  local_a8.TextRange = param_2->TextRange;
  local_a8.Scale = param_2->Scale;
  local_a8.TextContext = param_2->TextContext;
  FSlateFontInfo::FSlateFontInfo(&local_a8.FontInfo,&param_2->FontInfo);
  local_a8.TextRange = *param_3;
  pFVar1 = param_1->Object;
  uVar5 = ::GetTypeHash(&local_a8);
  iVar6 = TSet<TTuple<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>_>,TDefaultMapHashableKeyFuncs<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FCachedShapedTextKey>
                    ((TSet<TTuple<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>_>,TDefaultMapHashableKeyFuncs<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>,0>,FDefaultSetAllocator>
                      *)&pFVar1->CachedShapedText,uVar5,&local_a8);
  if ((iVar6 == -1) ||
     (lVar9 = (longlong)iVar6 * 0x88 + *(longlong *)&pFVar1->CachedShapedText, lVar9 == 0)) {
    pTVar10 = (TReferenceControllerBase<1> *)0x0;
LAB_14287a724:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    if (this == (FShapedGlyphSequence *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TSharedRef<FShapedGlyphSequence_const_,1> *)(*pcVar2)();
        return pTVar7;
      }
    }
    pTVar8 = FShapedGlyphSequence::GetSubSequence
                       (this,&local_c8,param_3->BeginIndex,param_3->EndIndex);
    if (&local_118 != pTVar8) {
      local_118.Object = pTVar8->Object;
      pTVar8->Object = (FShapedGlyphSequence *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_118.SharedReferenceCount,&pTVar8->SharedReferenceCount);
      this = local_118.Object;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.SharedReferenceCount.ReferenceController);
    pFVar1 = param_1->Object;
    if (this == (FShapedGlyphSequence *)0x0) {
      pTVar7 = FShapedTextCache::FindOrAddShapedText(pFVar1,&local_b8,&local_a8,param_4,param_5);
      local_f0.ReferenceController = (pTVar7->SharedReferenceCount).ReferenceController;
      local_118.Object = pTVar7->Object;
      if (local_f0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_f0.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_f0.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_f8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_118.SharedReferenceCount,&local_f0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_f0.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b8.SharedReferenceCount.ReferenceController);
      this_00 = local_118.Object;
    }
    else {
      if (this == (FShapedGlyphSequence *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pTVar7 = (TSharedRef<FShapedGlyphSequence_const_,1> *)(*pcVar2)();
          return pTVar7;
        }
      }
      FVar3.ReferenceController = local_118.SharedReferenceCount.ReferenceController;
      if (local_118.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (this == (FShapedGlyphSequence *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pTVar7 = (TSharedRef<FShapedGlyphSequence_const_,1> *)(*pcVar2)();
          return pTVar7;
        }
      }
      local_100 = FVar3.ReferenceController;
      if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar3.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar3.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_e8 = &local_a8;
      local_e0 = &local_108;
      local_108 = this;
      TSet<TTuple<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>_>,TDefaultMapHashableKeyFuncs<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FCachedShapedTextKey_const_&,TSharedPtr<FShapedGlyphSequence_const_,1>_&&>_>
                ((TSet<TTuple<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>_>,TDefaultMapHashableKeyFuncs<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>,0>,FDefaultSetAllocator>
                  *)&pFVar1->CachedShapedText,&local_res10,(bool *)&local_e8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_100)
      ;
      if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar3.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar3.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar3.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar3.ReferenceController);
      this_00 = this;
    }
    pTVar10 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    this_00 = *(FShapedGlyphSequence **)(lVar9 + 0x70);
    pTVar10 = *(TReferenceControllerBase<1> **)(lVar9 + 0x78);
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 == (FShapedGlyphSequence *)0x0) goto LAB_14287a724;
    bVar4 = FShapedGlyphSequence::IsDirty(this_00);
    if (bVar4) goto LAB_14287a724;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    FVar3.ReferenceController = local_118.SharedReferenceCount.ReferenceController;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_118.Object = this_00;
    local_118.SharedReferenceCount.ReferenceController = pTVar10;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar3.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.FontInfo.CompositeFont.SharedReferenceCount.ReferenceController);
LAB_14287a908:
  if (this_00 == (FShapedGlyphSequence *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShapedText.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\ShapedTextCache.cpp"
                       ,0x113,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TSharedRef<FShapedGlyphSequence_const_,1> *)(*pcVar2)();
      return pTVar7;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TSharedRef<FShapedGlyphSequence_const_,1> *)(*pcVar2)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = this_00;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_118.SharedReferenceCount.ReferenceController;
  if (local_118.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FShapedGlyphSequence *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TSharedRef<FShapedGlyphSequence_const_,1> *)(*pcVar2)();
      return pTVar7;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_118.SharedReferenceCount.ReferenceController);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// GetTypeHash @ 14287cf20

uint __cdecl GetTypeHash(FCachedShapedTextKey *param_1)

{
  ETextShapingMethod EVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar5 = (param_1->TextRange).BeginIndex;
  uVar8 = (param_1->TextRange).EndIndex;
  uVar6 = uVar5 >> 0xd ^ -uVar5;
  uVar4 = (-0x61c88647 - uVar6) - uVar5 ^ uVar6 << 8;
  uVar7 = (uVar5 - uVar4) - uVar6 ^ uVar4 >> 0xd;
  uVar6 = (uVar6 - uVar7) - uVar4 ^ uVar7 >> 0xc;
  uVar5 = (uVar4 - uVar6) - uVar7 ^ uVar6 << 0x10;
  uVar7 = (uVar7 - uVar5) - uVar6 ^ uVar5 >> 5;
  uVar4 = (uVar6 - uVar7) - uVar5 ^ uVar7 >> 3;
  uVar5 = (uVar5 - uVar4) - uVar7 ^ uVar4 << 10;
  uVar4 = ((uVar7 - uVar5) - uVar4 ^ uVar5 >> 0xf) - uVar8 ^ uVar8 >> 0xd;
  uVar5 = (-0x61c88647 - uVar4) - uVar8 ^ uVar4 << 8;
  uVar6 = (uVar8 - uVar5) - uVar4 ^ uVar5 >> 0xd;
  uVar8 = (uVar4 - uVar6) - uVar5 ^ uVar6 >> 0xc;
  uVar5 = (uVar5 - uVar8) - uVar6 ^ uVar8 << 0x10;
  uVar4 = (uVar6 - uVar5) - uVar8 ^ uVar5 >> 5;
  fVar2 = param_1->Scale;
  uVar8 = (uVar8 - uVar4) - uVar5 ^ uVar4 >> 3;
  uVar5 = (uVar5 - uVar8) - uVar4 ^ uVar8 << 10;
  uVar4 = (uVar4 - uVar5) - uVar8 ^ uVar5 >> 0xf;
  uVar8 = uVar4 >> 0xd ^ -uVar4;
  uVar5 = (-0x61c88647 - uVar8) - uVar4 ^ uVar8 << 8;
  uVar4 = (uVar4 - uVar5) - uVar8 ^ uVar5 >> 0xd;
  uVar8 = (uVar8 - uVar4) - uVar5 ^ uVar4 >> 0xc;
  uVar5 = (uVar5 - uVar8) - uVar4 ^ uVar8 << 0x10;
  uVar4 = (uVar4 - uVar5) - uVar8 ^ uVar5 >> 5;
  uVar8 = (uVar8 - uVar4) - uVar5 ^ uVar4 >> 3;
  uVar5 = (uVar5 - uVar8) - uVar4 ^ uVar8 << 10;
  uVar4 = ((uVar4 - uVar5) - uVar8 ^ uVar5 >> 0xf) - (int)fVar2 ^ (uint)fVar2 >> 0xd;
  uVar8 = (-0x61c88647 - uVar4) - (int)fVar2 ^ uVar4 << 8;
  uVar5 = ((int)fVar2 - uVar8) - uVar4 ^ uVar8 >> 0xd;
  uVar6 = (uVar4 - uVar8) - uVar5 ^ uVar5 >> 0xc;
  uVar8 = (uVar8 - uVar6) - uVar5 ^ uVar6 << 0x10;
  uVar4 = (uVar5 - uVar8) - uVar6 ^ uVar8 >> 5;
  uVar9 = (uVar6 - uVar4) - uVar8 ^ uVar4 >> 3;
  uVar7 = (uVar8 - uVar9) - uVar4 ^ uVar9 << 10;
  EVar1 = (param_1->TextContext).TextShapingMethod;
  uVar8 = (uint)EVar1 * -0x100 ^ 0x9e3779b9;
  uVar6 = ((uint)EVar1 + (uint)EVar1) - uVar8 ^ uVar8 >> 0xd;
  uVar5 = (-uVar6 - (uint)EVar1) - uVar8 ^ uVar6 >> 0xc;
  uVar8 = (uVar8 - uVar5) - uVar6 ^ uVar5 << 0x10;
  uVar6 = (uVar6 - uVar5) - uVar8 ^ uVar8 >> 5;
  uVar5 = (uVar5 - uVar6) - uVar8 ^ uVar6 >> 3;
  uVar8 = (uVar8 - uVar5) - uVar6 ^ uVar5 << 10;
  uVar8 = (uVar6 - uVar8) - uVar5 ^ uVar8 >> 0xf;
  uVar5 = (uint)(param_1->TextContext).BaseDirection;
  iVar3 = uVar8 - uVar5;
  uVar8 = iVar3 * 0x100 ^ 0x9e3779b9 - uVar8;
  uVar6 = (uVar5 - uVar8) - iVar3 ^ uVar8 >> 0xd;
  uVar5 = (iVar3 - uVar6) - uVar8 ^ uVar6 >> 0xc;
  uVar8 = (uVar8 - uVar5) - uVar6 ^ uVar5 << 0x10;
  uVar6 = (uVar6 - uVar5) - uVar8 ^ uVar8 >> 5;
  uVar5 = (uVar5 - uVar6) - uVar8 ^ uVar6 >> 3;
  uVar8 = (uVar8 - uVar5) - uVar6 ^ uVar5 << 10;
  uVar6 = (uVar6 - uVar8) - uVar5 ^ uVar8 >> 0xf;
  uVar8 = ((uVar4 - uVar7) - uVar9 ^ uVar7 >> 0xf) - uVar6 ^ uVar6 >> 0xd;
  uVar5 = (-0x61c88647 - uVar8) - uVar6 ^ uVar8 << 8;
  uVar4 = (uVar6 - uVar5) - uVar8 ^ uVar5 >> 0xd;
  uVar8 = (uVar8 - uVar4) - uVar5 ^ uVar4 >> 0xc;
  uVar5 = (uVar5 - uVar8) - uVar4 ^ uVar8 << 0x10;
  uVar6 = (uVar4 - uVar5) - uVar8 ^ uVar5 >> 5;
  uVar4 = (uVar8 - uVar6) - uVar5 ^ uVar6 >> 3;
  uVar8 = (uVar5 - uVar4) - uVar6 ^ uVar4 << 10;
  uVar5 = GetTypeHash(&param_1->FontInfo);
  uVar4 = ((uVar6 - uVar8) - uVar4 ^ uVar8 >> 0xf) - uVar5 ^ uVar5 >> 0xd;
  uVar8 = (-0x61c88647 - uVar5) - uVar4 ^ uVar4 << 8;
  uVar5 = (uVar5 - uVar8) - uVar4 ^ uVar8 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar8 ^ uVar5 >> 0xc;
  uVar8 = (uVar8 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar8) - uVar4 ^ uVar8 >> 5;
  uVar4 = (uVar4 - uVar5) - uVar8 ^ uVar5 >> 3;
  uVar8 = (uVar8 - uVar4) - uVar5 ^ uVar4 << 10;
  return (uVar5 - uVar8) - uVar4 ^ uVar8 >> 0xf;
}

// IsEllipsisPolicy @ 142881c40

bool __cdecl SlateTextUtils::IsEllipsisPolicy(ETextOverflowPolicy *param_1)

{
  if ((*param_1 != Ellipsis) && (1 < (byte)(*param_1 - MultilineEllipsis))) {
    return false;
  }
  return true;
}

// MeasureShapedText @ 142884890

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TVector2<double> * __cdecl
ShapedTextCacheUtil::MeasureShapedText
          (TVector2<double> *__return_storage_ptr__,TSharedRef<FShapedTextCache,1> *param_1,
          FCachedShapedTextKey *param_2,FTextRange *param_3,wchar_t *param_4)

{
  ushort uVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  TSharedRef<FShapedGlyphSequence_const_,1> *pTVar5;
  TVector2<double> *pTVar6;
  FShapedGlyphSequence *this;
  int local_res8;
  char local_resc;
  TSharedRef<FShapedGlyphSequence_const_,1> local_b8;
  TSharedRef<FShapedGlyphSequence_const_,1> local_a8;
  FCachedShapedTextKey local_98;
  
  FShapedTextCache::FindOrAddShapedText(param_1->Object,&local_b8,param_2,param_4);
  this = local_b8.Object;
  FShapedGlyphSequence::GetMeasuredWidth
            (local_b8.Object,(int)&local_res8,param_3->BeginIndex,SUB41(param_3->EndIndex,0));
  if (local_resc == '\0') {
    local_98.TextRange = param_2->TextRange;
    local_98.Scale = param_2->Scale;
    local_98.TextContext = param_2->TextContext;
    FSlateFontInfo::FSlateFontInfo(&local_98.FontInfo,&param_2->FontInfo);
    local_98.TextRange = *param_3;
    pTVar5 = FShapedTextCache::FindOrAddShapedText(param_1->Object,&local_a8,&local_98,param_4);
    this = pTVar5->Object;
    pTVar3 = (pTVar5->SharedReferenceCount).ReferenceController;
    pTVar5->Object = local_b8.Object;
    (pTVar5->SharedReferenceCount).ReferenceController =
         local_b8.SharedReferenceCount.ReferenceController;
    local_b8.Object = this;
    local_b8.SharedReferenceCount.ReferenceController = pTVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
    local_res8 = FShapedGlyphSequence::GetMeasuredWidth(this);
    local_resc = '\x01';
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.FontInfo.CompositeFont.SharedReferenceCount.ReferenceController);
    if (local_resc == '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("MeasuredWidth.IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\ShapedTextCache.cpp"
                         ,0x86,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TVector2<double> *)(*pcVar2)();
        return pTVar6;
      }
    }
  }
  uVar1 = this->MaxTextHeight;
  if (local_resc == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TVector2<double> *)(*pcVar2)();
      return pTVar6;
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)local_res8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// Z_Construct_UClass_UButtonWidgetStyle_NoRegister @ 1428a03a0

UClass * __cdecl Z_Construct_UClass_UButtonWidgetStyle_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UButtonWidgetStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Slate",L"ButtonWidgetStyle",
               &Z_Registration_Info_UClass_UButtonWidgetStyle.InnerSingleton,
               UButtonWidgetStyle::StaticRegisterNativesUButtonWidgetStyle,0x3c0,0x10,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UButtonWidgetStyle>,
               InternalVTableHelperCtorCaller<UButtonWidgetStyle>,local_res8,
               USlateWidgetStyleContainerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UButtonWidgetStyle.InnerSingleton;
}

// Z_Construct_UClass_UCheckBoxWidgetStyle_NoRegister @ 1428a0460

UClass * __cdecl Z_Construct_UClass_UCheckBoxWidgetStyle_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCheckBoxWidgetStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Slate",L"CheckBoxWidgetStyle",
               &Z_Registration_Info_UClass_UCheckBoxWidgetStyle.InnerSingleton,
               UCheckBoxWidgetStyle::StaticRegisterNativesUCheckBoxWidgetStyle,0x980,0x10,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UCheckBoxWidgetStyle>,
               InternalVTableHelperCtorCaller<UCheckBoxWidgetStyle>,local_res8,
               USlateWidgetStyleContainerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCheckBoxWidgetStyle.InnerSingleton;
}

// Z_Construct_UClass_UComboBoxWidgetStyle_NoRegister @ 1428a0520

UClass * __cdecl Z_Construct_UClass_UComboBoxWidgetStyle_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComboBoxWidgetStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Slate",L"ComboBoxWidgetStyle",
               &Z_Registration_Info_UClass_UComboBoxWidgetStyle.InnerSingleton,
               UComboBoxWidgetStyle::StaticRegisterNativesUComboBoxWidgetStyle,0x5f0,0x10,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UComboBoxWidgetStyle>,
               InternalVTableHelperCtorCaller<UComboBoxWidgetStyle>,local_res8,
               USlateWidgetStyleContainerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComboBoxWidgetStyle.InnerSingleton;
}

// Z_Construct_UClass_UComboButtonWidgetStyle_NoRegister @ 1428a05e0

UClass * __cdecl Z_Construct_UClass_UComboButtonWidgetStyle_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComboButtonWidgetStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Slate",L"ComboButtonWidgetStyle",
               &Z_Registration_Info_UClass_UComboButtonWidgetStyle.InnerSingleton,
               UComboButtonWidgetStyle::StaticRegisterNativesUComboButtonWidgetStyle,0x590,0x10,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UComboButtonWidgetStyle>
               ,InternalVTableHelperCtorCaller<UComboButtonWidgetStyle>,local_res8,
               USlateWidgetStyleContainerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComboButtonWidgetStyle.InnerSingleton;
}

// Z_Construct_UClass_UEditableTextBoxWidgetStyle_NoRegister @ 1428a06a0

UClass * __cdecl Z_Construct_UClass_UEditableTextBoxWidgetStyle_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditableTextBoxWidgetStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Slate",L"EditableTextBoxWidgetStyle",
               &Z_Registration_Info_UClass_UEditableTextBoxWidgetStyle.InnerSingleton,
               UEditableTextBoxWidgetStyle::StaticRegisterNativesUEditableTextBoxWidgetStyle,0xcb0,
               0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEditableTextBoxWidgetStyle>,
               InternalVTableHelperCtorCaller<UEditableTextBoxWidgetStyle>,local_res8,
               USlateWidgetStyleContainerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditableTextBoxWidgetStyle.InnerSingleton;
}

// Z_Construct_UClass_UEditableTextWidgetStyle_NoRegister @ 1428a0760

UClass * __cdecl Z_Construct_UClass_UEditableTextWidgetStyle_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditableTextWidgetStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Slate",L"EditableTextWidgetStyle",
               &Z_Registration_Info_UClass_UEditableTextWidgetStyle.InnerSingleton,
               UEditableTextWidgetStyle::StaticRegisterNativesUEditableTextWidgetStyle,0x2c0,0x10,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEditableTextWidgetStyle>,
               InternalVTableHelperCtorCaller<UEditableTextWidgetStyle>,local_res8,
               USlateWidgetStyleContainerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditableTextWidgetStyle.InnerSingleton;
}

// Z_Construct_UClass_UProgressWidgetStyle_NoRegister @ 1428a0820

UClass * __cdecl Z_Construct_UClass_UProgressWidgetStyle_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProgressWidgetStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Slate",L"ProgressWidgetStyle",
               &Z_Registration_Info_UClass_UProgressWidgetStyle.InnerSingleton,
               UProgressWidgetStyle::StaticRegisterNativesUProgressWidgetStyle,0x260,0x10,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UProgressWidgetStyle>,
               InternalVTableHelperCtorCaller<UProgressWidgetStyle>,local_res8,
               USlateWidgetStyleContainerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProgressWidgetStyle.InnerSingleton;
}

// Z_Construct_UClass_UScrollBarWidgetStyle_NoRegister @ 1428a08e0

UClass * __cdecl Z_Construct_UClass_UScrollBarWidgetStyle_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UScrollBarWidgetStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Slate",L"ScrollBarWidgetStyle",
               &Z_Registration_Info_UClass_UScrollBarWidgetStyle.InnerSingleton,
               UScrollBarWidgetStyle::StaticRegisterNativesUScrollBarWidgetStyle,0x680,0x10,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UScrollBarWidgetStyle>,
               InternalVTableHelperCtorCaller<UScrollBarWidgetStyle>,local_res8,
               USlateWidgetStyleContainerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UScrollBarWidgetStyle.InnerSingleton;
}

// Z_Construct_UClass_UScrollBoxWidgetStyle_NoRegister @ 1428a09a0

UClass * __cdecl Z_Construct_UClass_UScrollBoxWidgetStyle_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UScrollBoxWidgetStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Slate",L"ScrollBoxWidgetStyle",
               &Z_Registration_Info_UClass_UScrollBoxWidgetStyle.InnerSingleton,
               UScrollBoxWidgetStyle::StaticRegisterNativesUScrollBoxWidgetStyle,800,0x10,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UScrollBoxWidgetStyle>,
               InternalVTableHelperCtorCaller<UScrollBoxWidgetStyle>,local_res8,
               USlateWidgetStyleContainerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UScrollBoxWidgetStyle.InnerSingleton;
}

// Z_Construct_UClass_USpinBoxWidgetStyle_NoRegister @ 1428a0a60

UClass * __cdecl Z_Construct_UClass_USpinBoxWidgetStyle_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USpinBoxWidgetStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Slate",L"SpinBoxWidgetStyle",
               &Z_Registration_Info_UClass_USpinBoxWidgetStyle.InnerSingleton,
               USpinBoxWidgetStyle::StaticRegisterNativesUSpinBoxWidgetStyle,0x550,0x10,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<USpinBoxWidgetStyle>,
               InternalVTableHelperCtorCaller<USpinBoxWidgetStyle>,local_res8,
               USlateWidgetStyleContainerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USpinBoxWidgetStyle.InnerSingleton;
}

// Z_Construct_UClass_UTextBlockWidgetStyle_NoRegister @ 1428a0b20

UClass * __cdecl Z_Construct_UClass_UTextBlockWidgetStyle_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextBlockWidgetStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Slate",L"TextBlockWidgetStyle",
               &Z_Registration_Info_UClass_UTextBlockWidgetStyle.InnerSingleton,
               UTextBlockWidgetStyle::StaticRegisterNativesUTextBlockWidgetStyle,0x310,0x10,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UTextBlockWidgetStyle>,
               InternalVTableHelperCtorCaller<UTextBlockWidgetStyle>,local_res8,
               USlateWidgetStyleContainerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextBlockWidgetStyle.InnerSingleton;
}

// Z_Construct_UEnum_Slate_ETextFlowDirection @ 1428a0be0

UEnum * __cdecl Z_Construct_UEnum_Slate_ETextFlowDirection(void)

{
  if (Z_Registration_Info_UEnum_ETextFlowDirection.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETextFlowDirection.InnerSingleton,
               &Z_Construct_UEnum_Slate_ETextFlowDirection_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ETextFlowDirection.InnerSingleton;
}

// Z_Construct_UEnum_Slate_ETextJustify @ 1428a0c20

UEnum * __cdecl Z_Construct_UEnum_Slate_ETextJustify(void)

{
  if (Z_Registration_Info_UEnum_ETextJustify.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETextJustify.InnerSingleton,
               &Z_Construct_UEnum_Slate_ETextJustify_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ETextJustify.InnerSingleton;
}

// Z_Construct_UEnum_Slate_ETextWrappingPolicy @ 1428a0c60

UEnum * __cdecl Z_Construct_UEnum_Slate_ETextWrappingPolicy(void)

{
  if (Z_Registration_Info_UEnum_ETextWrappingPolicy.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETextWrappingPolicy.InnerSingleton,
               &Z_Construct_UEnum_Slate_ETextWrappingPolicy_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ETextWrappingPolicy.InnerSingleton;
}

// Z_Construct_UScriptStruct_FCharRangeList @ 1428a0ca0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCharRangeList(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCharRangeList.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCharRangeList.InnerSingleton,
               &Z_Construct_UScriptStruct_FCharRangeList_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCharRangeList.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCharRangeList.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// IMPLEMENT_MODULE_Slate @ 1428a0d20

void __cdecl IMPLEMENT_MODULE_Slate(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarDefaultTextFlowDirection'' @ 15035ccd0

void __cdecl _dynamic_atexit_destructor_for__CVarDefaultTextFlowDirection__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDefaultTextFlowDirection);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSlateShowTextDebugging'' @ 15035ccf0

void __cdecl _dynamic_atexit_destructor_for__CVarSlateShowTextDebugging__(void)

{
  CVarSlateShowTextDebugging._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSlateShowTextDebugging);
  return;
}

// `dynamic_atexit_destructor_for_'EmptyString'' @ 15035cd10

void __cdecl
`FSlateAccessibleEditableText::GetText'::__l2::_dynamic_atexit_destructor_for__EmptyString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::EmptyString.Data.AllocatorInstance.Data;
  if (::EmptyString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::EmptyString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'EmptyString'' @ 15035cd30

void __cdecl
`FSlateAccessibleEditableTextBox::GetText'::__l2::_dynamic_atexit_destructor_for__EmptyString__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::EmptyString.Data.AllocatorInstance.Data;
  if (::EmptyString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::EmptyString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'EmptyString'' @ 15035cd50

void __cdecl
`FSlateAccessibleTextBlock::GetText'::__l7::_dynamic_atexit_destructor_for__EmptyString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::EmptyString.Data.AllocatorInstance.Data;
  if (::EmptyString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::EmptyString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'EscapeCharacters'' @ 15035cd70

void __cdecl
`FDefaultRichTextMarkupWriter::EscapeText'::__l2::_dynamic_atexit_destructor_for__EscapeCharacters__
          (void)

{
  if (EscapeCharacters[3]._8_8_ != 0) {
    FMemory::Free((void *)EscapeCharacters[3]._8_8_);
  }
  if (EscapeCharacters[2]._8_8_ != 0) {
    FMemory::Free((void *)EscapeCharacters[2]._8_8_);
  }
  if (EscapeCharacters[1]._8_8_ != 0) {
    FMemory::Free((void *)EscapeCharacters[1]._8_8_);
  }
  if (EscapeCharacters[0]._8_8_ != 0) {
    FMemory::Free((void *)EscapeCharacters[0]._8_8_);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'EscapedCharacters'' @ 15035cdd0

void __cdecl CharRangeConstants::_dynamic_atexit_destructor_for__EscapedCharacters__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EscapedCharacters.Data.AllocatorInstance.Data;
  if (EscapedCharacters.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EscapedCharacters.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'GradientStops'' @ 15035cdf0

void __cdecl `SDockTab::Construct'::__l2::_dynamic_atexit_destructor_for__GradientStops__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GradientStops.AllocatorInstance.Data;
  if (GradientStops.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (GradientStops.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'NoChildren'' @ 15035ce10

void __cdecl `FSlateImageRun::GetChildren'::__l2::_dynamic_atexit_destructor_for__NoChildren__(void)

{
  DestructItems<TSharedRef<SWidget,1>,int>
            ((TSharedRef<SWidget,1> *)NoChildren.AllocatorInstance.Data,NoChildren.ArrayNum);
  if (NoChildren.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(NoChildren.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'NoChildren'' @ 15035ce50

void __cdecl `FSlateTextRun::GetChildren'::__l2::_dynamic_atexit_destructor_for__NoChildren__(void)

{
  DestructItems<TSharedRef<SWidget,1>,int>
            ((TSharedRef<SWidget,1> *)NoChildren.AllocatorInstance.Data,NoChildren.ArrayNum);
  if (NoChildren.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(NoChildren.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'NullSlot'' @ 15035ce90

void __cdecl
`TSlotlessChildren<SWidget>::GetSlotAt'::__l2::_dynamic_atexit_destructor_for__NullSlot__(void)

{
  FSlotBase::~FSlotBase
            ((FSlotBase *)
             &`private:_virtual_class_FSlotBase_const&___ptr64___cdecl_TSlotlessChildren<SWidget>::GetSlotAt(int)const___ptr64'
              ::__l2::NullSlot);
  return;
}

// `dynamic_atexit_destructor_for_'Parser'' @ 15035ceb0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl
`FDefaultRichTextMarkupParser::GetStaticInstance'::__l2::_dynamic_atexit_destructor_for__Parser__
          (void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (::Parser.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'UnescapeHelper'' @ 15035ced0

void __cdecl _dynamic_atexit_destructor_for__UnescapeHelper__(void)

{
  DestructItems<FString,int>
            ((FString *)UnescapeHelper.UnescapedCharacters.AllocatorInstance.Data,
             UnescapeHelper.UnescapedCharacters.ArrayNum);
  if (UnescapeHelper.UnescapedCharacters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(UnescapeHelper.UnescapedCharacters.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)UnescapeHelper.EscapeSequences.AllocatorInstance.Data,
             UnescapeHelper.EscapeSequences.ArrayNum);
  if (UnescapeHelper.EscapeSequences.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(UnescapeHelper.EscapeSequences.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'WidgetClassDataInstance'' @ 15035cf30

void __cdecl
`SCircularThrobber::GetPrivateWidgetClass'::__l2::
_dynamic_atexit_destructor_for__WidgetClassDataInstance__(void)

{
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCircularThrobber::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData !=
      (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0) {
    FMemory::Free((void *)`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCircularThrobber::GetPrivateWidgetClass(void)'
                          ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.
                          SecondaryData);
  }
  DestructItems<FSlateAttributeDescriptor::FAttribute,int>
            ((FAttribute *)
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCircularThrobber::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data,
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCircularThrobber::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum);
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCircularThrobber::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCircularThrobber::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'WidgetClassDataInstance'' @ 15035cf80

void __cdecl
`SColorBlock::GetPrivateWidgetClass'::__l2::
_dynamic_atexit_destructor_for__WidgetClassDataInstance__(void)

{
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorBlock::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData !=
      (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0) {
    FMemory::Free((void *)`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorBlock::GetPrivateWidgetClass(void)'
                          ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.
                          SecondaryData);
  }
  DestructItems<FSlateAttributeDescriptor::FAttribute,int>
            ((FAttribute *)
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorBlock::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data,
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorBlock::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum);
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorBlock::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorBlock::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'WidgetClassDataInstance'' @ 15035cfd0

void __cdecl
`SColorGradingWheel::GetPrivateWidgetClass'::__l2::
_dynamic_atexit_destructor_for__WidgetClassDataInstance__(void)

{
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData !=
      (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0) {
    FMemory::Free((void *)`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorGradingWheel::GetPrivateWidgetClass(void)'
                          ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.
                          SecondaryData);
  }
  DestructItems<FSlateAttributeDescriptor::FAttribute,int>
            ((FAttribute *)
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorGradingWheel::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data,
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorGradingWheel::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum);
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorGradingWheel::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Writer'' @ 15035d020

void __cdecl
`FDefaultRichTextMarkupWriter::GetStaticInstance'::__l2::_dynamic_atexit_destructor_for__Writer__
          (void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (Writer.SharedReferenceCount.ReferenceController);
  return;
}

