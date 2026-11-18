// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 5

// Construct @ 1425d48c0

void __thiscall SStackBox::Construct(SStackBox *this,FArguments *param_1)

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
  
  if (*(EOrientation *)&this->field_0x248 != param_1->_Orientation) {
    *(EOrientation *)&this->field_0x248 = param_1->_Orientation;
    SWidget::Invalidate((SWidget *)this,Layout);
  }
  uVar4 = (param_1->_Slots).ArrayNum;
  if (-1 < (int)uVar4) {
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
        `TCheckedPointerIterator<SStackBox::FSlot::FSlotArguments_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
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
                  (*(longlong *)&this->field_0x238 + (longlong)(int)uVar4 * 8),
                 (FChildren *)&this->field_0x218,pFVar6);
      if (local_38[0] != (undefined8 *)0x0) {
        (**(code **)*local_38[0])(local_38[0],1);
      }
      pFVar6 = pFVar6 + 1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
}

// GetPrivateWidgetClass @ 1425e2b90

FSlateWidgetClassData * __cdecl SStackBox::GetPrivateWidgetClass(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer local_res8;
  FName local_res10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SStackBox::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SStackBox::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SStackBox::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(local_res10,"SStackBox");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SStackBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SStackBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SStackBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SStackBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SStackBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SStackBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SStackBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SBoxPanel::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&local_res8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SStackBox::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&local_res8);
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

// GetSlot @ 1425e33a0

FSlot * __thiscall SStackBox::GetSlot(SStackBox *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FSlot *pFVar3;
  FSlot *pFVar4;
  
  if ((param_1 < 0) || (*(int *)&this->field_0x240 <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("this->IsValidSlotIndex(SlotIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\SBoxPanel.cpp"
                       ,0x61,L"");
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

// GetSlot @ 1425e3400

FSlot * __thiscall SStackBox::GetSlot(SStackBox *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FSlot *pFVar3;
  FSlot *pFVar4;
  
  if ((param_1 < 0) || (*(int *)&this->field_0x240 <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("this->IsValidSlotIndex(SlotIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\SBoxPanel.cpp"
                       ,0x68,L"");
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

// PrivateRegisterAttributes @ 1425f4b80

void __cdecl SStackBox::PrivateRegisterAttributes(FInitializer *param_1)

{
  return;
}

