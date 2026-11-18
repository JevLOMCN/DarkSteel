// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 404

// ContextName'' @ 140f43680

void __cdecl `dynamic_initializer_for_'FUIContentContext::ContextName__(void)

{
  ::FName::FName(&FUIContentContext::ContextName,"ContentContext");
  return;
}

// ContextName'' @ 140f436a0

void __cdecl `dynamic_initializer_for_'FUIIdentifierContext::ContextName__(void)

{
  ::FName::FName(&FUIIdentifierContext::ContextName,"IdentifierContext");
  return;
}

// DisplayMultiboxHooks'' @ 140f436c0

void __cdecl `dynamic_initializer_for_'FMultiBoxSettings::DisplayMultiboxHooks__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FMultiBoxSettings::DisplayMultiboxHooks__);
  return;
}

// MenuSearchFieldVisibilityThreshold'' @ 140f436e0

void __cdecl `dynamic_initializer_for_'FMultiBoxSettings::MenuSearchFieldVisibilityThreshold__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FMultiBoxSettings::MenuSearchFieldVisibilityThreshold__);
  return;
}

// None'' @ 140f43700

void __cdecl `dynamic_initializer_for_'FMultiBoxCustomization::None__(void)

{
  FMultiBoxCustomization::None.CustomizationName.ComparisonIndex.Value = 0;
  FMultiBoxCustomization::None.CustomizationName.Number = 0;
  return;
}

// ToolTipConstructor'' @ 140f43720

void __cdecl `dynamic_initializer_for_'FMultiBoxSettings::ToolTipConstructor__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_28;
  undefined8 local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FMultiBoxSettings::ToolTipConstructor,(FWriteAccessScope *)&local_28);
  local_10 = 0x155056f18;
  puVar1 = UE::Core::Private::DelegateAllocate
                     (0x20,(FDelegateAllocation *)&FMultiBoxSettings::ToolTipConstructor.field_0x8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSToolTip___00__AEBV__TAttribute_VFText____AEBV__TSharedPtr_VSWidget___00__AEBV__TSharedPtr___CBVFUICommandInfo___00___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_VSToolTip___00__AEBV__TAttribute_VFText____AEBV__TSharedPtr_VSWidget___00__AEBV__TSharedPtr___CBVFUICommandInfo___00___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = FMultiBoxSettings::ConstructDefaultToolTip;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  atexit(`dynamic_atexit_destructor_for_'FMultiBoxSettings::ToolTipConstructor__);
  return;
}

// UseSmallToolBarIcons'' @ 140f437b0

void __cdecl `dynamic_initializer_for_'FMultiBoxSettings::UseSmallToolBarIcons__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FMultiBoxSettings::UseSmallToolBarIcons__);
  return;
}

// `dynamic_initializer_for_'CVarFrictionCoefficient'' @ 140f437d0

void __cdecl _dynamic_initializer_for__CVarFrictionCoefficient__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarFrictionCoefficient,L"Slate.InertialScroll.FrictionCoefficient",
             &FrictionCoefficient,L"This is the percentage of velocity loss per second.",0);
  atexit(_dynamic_atexit_destructor_for__CVarFrictionCoefficient__);
  return;
}

// `dynamic_initializer_for_'CVarStaticVelocityDrag'' @ 140f43820

void __cdecl _dynamic_initializer_for__CVarStaticVelocityDrag__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarStaticVelocityDrag,L"Slate.InertialScroll.StaticVelocityDrag",&StaticVelocityDrag,
             L"This is a constant amount of velocity lost per second.",0);
  atexit(_dynamic_atexit_destructor_for__CVarStaticVelocityDrag__);
  return;
}

// `dynamic_initializer_for_'ClassRegistration__SPrioritizedWrapBox'' @ 140f43870

void __cdecl _dynamic_initializer_for__ClassRegistration__SPrioritizedWrapBox__(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName FStackX_10;
  FName aFStackX_18 [2];
  FContainerInitializer FStack_58;
  FAttributeEntry FStack_48;
  undefined1 auStack_38 [8];
  ForAnyElementType FStack_30;
  ulonglong uStack_28;
  
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPrioritizedWrapBox::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__ <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c)) {
    return;
  }
  _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPrioritizedWrapBox::GetPrivateWidgetClass(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPrioritizedWrapBox::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__ != -1) {
    return;
  }
  pFVar1 = FName::FName(&FStackX_10,"SPrioritizedWrapBox");
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPrioritizedWrapBox::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPrioritizedWrapBox::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPrioritizedWrapBox::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPrioritizedWrapBox::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPrioritizedWrapBox::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
       (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPrioritizedWrapBox::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPrioritizedWrapBox::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
  pFVar2 = SWidget::GetPrivateWidgetClass();
  FSlateAttributeDescriptor::FInitializer::FInitializer
            (&FStackX_8,
             &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPrioritizedWrapBox::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
  pFVar1 = FName::FName(aFStackX_18,5,L"Slots",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddContainer(&FStackX_8,&FStack_58,*pFVar1,0x230);
  SPrioritizedWrapBox::FSlot::RegisterAttributes(&FStack_58);
  auStack_38[0] = Layout;
  FStack_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = FName::FName(aFStackX_18,0xd,L"PreferredSize",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (&FStackX_8,&FStack_48,*pFVar1,0x218,(FInvalidateWidgetReasonAttribute *)auStack_38);
  if ((int)uStack_28 != 0) {
    if (FStack_30.Data == (FScriptContainerElement *)0x0) goto LAB_142813f2c;
    (*(code *)**(undefined8 **)FStack_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
  }
  if (FStack_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_30.Data);
  }
LAB_142813f2c:
  auStack_38[0] = Layout;
  FStack_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = FName::FName(aFStackX_18,0xd,L"MinLineHeight",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (&FStackX_8,&FStack_48,*pFVar1,0x21c,(FInvalidateWidgetReasonAttribute *)auStack_38);
  if (((int)uStack_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
  }
  if (FStack_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_30.Data);
  }
  FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
  atexit(`SPrioritizedWrapBox::GetPrivateWidgetClass'::__l2::
         _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
  _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPrioritizedWrapBox::GetPrivateWidgetClass(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  return;
}

// TFunction<int___cdecl(void)><`SMultiBoxWidget::BuildMultiBoxWidget'::__l25::<lambda_2>_> @ 1427957d0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TFunction<int___cdecl(void)> * __thiscall
TFunction<int___cdecl(void)>::
TFunction<int___cdecl(void)><_SMultiBoxWidget::BuildMultiBoxWidget_::__l25::<lambda_2>_>
          (TFunction<int___cdecl(void)> *this,<lambda_2> *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)&this->field_0x10 =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`SMultiBoxWidget::BuildMultiBoxWidget'::`25'::<lambda_2>,0,0>::
        _vftable_;
  *(SMultiBoxWidget **)&this->field_0x18 = param_1->__this;
  if (&this->field_0x18 != (undefined1 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<`SMultiBoxWidget::BuildMultiBoxWidget'::__l25::<lambda_2>,int>::Call;
  }
  return this;
}

// AllOf<TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_>,``UE::Slate::PrioritizedWrapBox::FChildArranger::GetDesiredSize<0>'::__l11::<lambda_6>::operator()'::__l6::<lambda_1>_> @ 142797c50

bool __cdecl
Algo::
AllOf<TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_>,__UE::Slate::PrioritizedWrapBox::FChildArranger::GetDesiredSize<0>_::__l11::<lambda_6>::operator()_::__l6::<lambda_1>_>
          (TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_>
           *param_1,<lambda_1> param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x78;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    if (param_2.PriorityToMatch != *(int *)(pFVar3 + 4)) {
      return false;
    }
    pFVar3 = pFVar3 + 0x78;
  }
  return true;
}

// ArrangeChildrenInStack<0,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>,UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy> @ 142797f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl
ArrangeChildrenInStack<0,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>,UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy>
          (EFlowDirection param_1,
          TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int> *param_2,
          FGeometry *param_3,FArrangedChildren *param_4,float param_5,bool param_6,
          TVector2<double> *param_7)

{
  ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>,UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy>(EFlowDirection,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
  *pFVar1;
  TArray<FArrangedWidget,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar2;
  int *piVar3;
  undefined8 *puVar4;
  float fVar5;
  TEnumAsByte<EVisibility::Private> TVar6;
  ForElementType<FArrangedWidget> FVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  bool bVar18;
  SWidget *pSVar19;
  FDeprecateSlateVector2D FVar20;
  FArrangedChildren *pFVar21;
  int iVar22;
  int iVar23;
  bool bVar24;
  EVisibility EVar25;
  bool bVar26;
  int iVar27;
  longlong lVar28;
  float *pfVar29;
  ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>,UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy>(EFlowDirection,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
  FVar30;
  FSlotProxy *pFVar31;
  ForElementType<FArrangedWidget> FVar32;
  ulonglong uVar33;
  uchar *puVar34;
  FSharedReferencer<1> FVar35;
  int iVar36;
  longlong lVar37;
  uint uVar38;
  float fVar39;
  uint uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auStackY_448 [32];
  undefined1 local_3f5;
  undefined1 local_3f4;
  undefined1 local_3f3;
  undefined1 local_3f2 [2];
  uint local_3f0;
  TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int> *local_3e8;
  undefined8 local_3e0;
  FGeometry *local_3d8;
  undefined8 local_3d0;
  FArrangedChildren *local_3c8;
  FSlateLayoutTransform local_3c0;
  undefined8 local_3b4;
  undefined8 uStack_3ac;
  undefined8 local_3a4;
  uint uStack_39c;
  undefined4 uStack_398;
  TVector2<double> *local_390;
  SWidget *local_388;
  TReferenceControllerBase<1> *local_380;
  SWidget *local_378;
  TReferenceControllerBase<1> *local_370;
  TSharedRef<SWidget,1> local_368;
  float local_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 local_310;
  TReferenceControllerBase<1> *local_308;
  ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>,UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy>(EFlowDirection,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
  local_2f8;
  int local_f0;
  int local_ec;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_448;
  uVar38 = param_2->ArrayNum;
  uVar33 = (ulonglong)uVar38;
  local_390 = param_7;
  local_3f0 = 0;
  if (uVar38 != 0) {
    fVar45 = 0.0;
    fVar46 = 0.0;
    fVar47 = 0.0;
    fVar48 = 0.0;
    local_2f8.SecondaryData =
         (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>,UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy>(EFlowDirection,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
          )0x0;
    local_ec = 0x10;
    local_3b4 = 0;
    uStack_3ac = 0;
    local_3a4 = 0;
    uStack_39c = uStack_39c & 0xffffff00;
    uStack_398 = 0;
    local_3e8 = param_2;
    local_3d8 = param_3;
    local_3c8 = param_4;
    if ((int)uVar38 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar33);
    }
    local_f0 = 0;
    if ((uVar38 == 0x10) ||
       (UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<_ArrangeChildrenInStack<0,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>,UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy>_::__l2::FStretchItem>_>
                  (0x20,4,uVar38,&local_2f8,0,&local_ec), 0 < (int)uVar38)) {
      do {
        FVar30 = (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>,UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy>(EFlowDirection,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                  )&local_2f8;
        if (local_2f8.SecondaryData !=
            (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>,UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy>(EFlowDirection,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
             )0x0) {
          FVar30 = local_2f8.SecondaryData;
        }
        if ((ulonglong)FVar30 <= &local_3b4) {
          FVar30 = (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>,UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy>(EFlowDirection,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                    )&local_2f8;
          if (local_2f8.SecondaryData !=
              (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>,UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy>(EFlowDirection,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
               )0x0) {
            FVar30 = local_2f8.SecondaryData;
          }
          if ((&local_3b4 < (undefined8 *)((longlong)local_ec * 0x20 + (longlong)FVar30)) &&
             (bVar24 = FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar24)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        if (local_f0 == local_ec) {
          local_f0 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<_ArrangeChildrenInStack<0,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>,UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy>_::__l2::FStretchItem>_>
                               (0x420,&local_2f8,&local_ec);
        }
        lVar28 = (longlong)local_f0;
        local_f0 = local_f0 + 1;
        FVar30 = (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>,UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy>(EFlowDirection,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                  )&local_2f8;
        if (local_2f8.SecondaryData !=
            (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>,UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy>(EFlowDirection,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
             )0x0) {
          FVar30 = local_2f8.SecondaryData;
        }
        puVar4 = (undefined8 *)(lVar28 * 0x20 + (longlong)FVar30);
        *puVar4 = local_3b4;
        puVar4[1] = uStack_3ac;
        puVar4 = (undefined8 *)(lVar28 * 0x20 + 0x10 + (longlong)FVar30);
        *puVar4 = local_3a4;
        puVar4[1] = CONCAT44(uStack_398,uStack_39c);
        uVar33 = uVar33 - 1;
      } while (uVar33 != 0);
    }
    fVar43 = __real_7f7fffff;
    iVar27 = param_2->ArrayNum;
    bVar24 = false;
    uVar38 = 0;
    bVar18 = false;
    bVar17 = false;
    if (0 < iVar27) {
      lVar37 = 0;
      lVar28 = 0;
      EVar25.Value.Value = EVisibility::Collapsed.Value.Value;
      do {
        uVar40 = 0;
        if ((int)uVar38 < iVar27) {
          uVar40 = ~uVar38 >> 0x1f;
        }
        if ((uVar40 == 0) &&
           (bVar26 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), EVar25 = EVisibility::Collapsed, bVar26)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar31 = param_2->DataPtr;
        if ((TEnumAsByte<EVisibility::Private>)*(uchar *)((longlong)&pFVar31->_padding_ + lVar28) !=
            EVar25.Value.Value) {
          pfVar29 = (float *)((longlong)&pFVar31->_padding_ + lVar28 + 4);
          local_358 = *pfVar29;
          fStack_354 = pfVar29[1];
          fStack_350 = pfVar29[2];
          fStack_34c = pfVar29[3];
          local_3e0 = *(FDeprecateSlateVector2D *)((longlong)&pFVar31->_padding_ + lVar28 + 4);
          bVar24 = true;
          fVar44 = *(float *)((longlong)&pFVar31->_padding_ + lVar28);
          fVar49 = *(float *)((longlong)&pFVar31->_padding_ + lVar28 + 4);
          uVar40 = 0;
          if ((int)uVar38 < local_f0) {
            uVar40 = ~uVar38 >> 0x1f;
          }
          fVar45 = fVar45 + fStack_350 + local_358;
          if ((uVar40 == 0) &&
             (bVar26 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          FVar30 = (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>,UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy>(EFlowDirection,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                    )&local_2f8;
          if (local_2f8.SecondaryData !=
              (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>,UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy>(EFlowDirection,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
               )0x0) {
            FVar30 = local_2f8.SecondaryData;
          }
          *(float *)(lVar37 + 8 + (longlong)FVar30) = fVar44;
          *(float *)(lVar37 + 0xc + (longlong)FVar30) = fVar49;
          iVar27 = *(int *)((longlong)&pFVar31->_padding_ + lVar28);
          *(int *)(lVar37 + 0x1c + (longlong)FVar30) = iVar27;
          if (fVar49 <= 0.0) {
            fVar49 = fVar43;
          }
          fVar39 = (float)local_3e0;
          if (fVar49 <= (float)local_3e0) {
            fVar39 = fVar49;
          }
          if (fVar44 <= 0.0) {
            fVar44 = 0.0;
          }
          if (fVar39 <= fVar44) {
            fVar39 = fVar44;
          }
          if (iVar27 == 1) {
            pfVar29 = TAttribute<float>::Get
                                ((TAttribute<float> *)((longlong)&pFVar31->_padding_ + lVar28));
            fVar47 = fVar47 + fVar39;
            bVar17 = true;
            fVar44 = *pfVar29;
            *(float *)(lVar37 + 0x10 + (longlong)FVar30) = fVar44;
            fVar46 = fVar46 + fVar44;
            *(float *)(lVar37 + 0x14 + (longlong)FVar30) = fVar44;
            fVar48 = fVar48 + fVar44;
            *(undefined8 *)(lVar37 + (longlong)FVar30) = 0;
            EVar25 = EVisibility::Collapsed;
          }
          else if (iVar27 == 2) {
            pfVar29 = TAttribute<float>::Get
                                ((TAttribute<float> *)((longlong)&pFVar31->_padding_ + lVar28));
            fVar44 = *pfVar29;
            if (fVar44 <= 0.0) {
              fVar44 = 0.0;
            }
            *(float *)(lVar37 + 0x10 + (longlong)FVar30) = fVar44;
            pfVar29 = TAttribute<float>::Get
                                ((TAttribute<float> *)((longlong)&pFVar31->_padding_ + lVar28));
            fVar46 = fVar46 + *(float *)(lVar37 + 0x10 + (longlong)FVar30);
            fVar47 = fVar47 + fVar39;
            bVar18 = true;
            fVar44 = *pfVar29;
            if (fVar44 <= 0.0) {
              fVar44 = 0.0;
            }
            *(float *)(lVar37 + (longlong)FVar30) = fVar39;
            *(float *)(lVar37 + 4 + (longlong)FVar30) = fVar39;
            *(float *)(lVar37 + 0x14 + (longlong)FVar30) = fVar44;
            fVar48 = fVar48 + fVar44;
            EVar25 = EVisibility::Collapsed;
          }
          else {
            *(float *)(lVar37 + (longlong)FVar30) = fVar39;
            fVar45 = fVar45 + fVar39;
            *(float *)(lVar37 + 4 + (longlong)FVar30) = fVar39;
            *(undefined8 *)(lVar37 + 0x10 + (longlong)FVar30) = 0;
            EVar25.Value.Value = EVisibility::Collapsed.Value.Value;
          }
        }
        iVar36 = local_f0;
        uVar38 = uVar38 + 1;
        lVar28 = lVar28 + 0xd0;
        lVar37 = lVar37 + 0x20;
        iVar27 = local_3e8->ArrayNum;
        param_2 = local_3e8;
      } while ((int)uVar38 < iVar27);
      if (bVar24) {
        fVar44 = fVar47;
        if (param_6) {
          fVar44 = 0.0;
        }
        local_3e0 = local_3d8->Size;
        fVar49 = (float)local_3e0 - fVar45;
        if ((float)local_3e0 - fVar45 <= fVar44) {
          fVar49 = fVar44;
        }
        if ((bVar17) && (0.0 < fVar46)) {
          lVar28 = (longlong)local_f0;
          fVar45 = 0.0;
          FVar30 = (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>,UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy>(EFlowDirection,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                    )&local_2f8;
          if (local_2f8.SecondaryData !=
              (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>,UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy>(EFlowDirection,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
               )0x0) {
            FVar30 = local_2f8.SecondaryData;
          }
          puVar34 = (uchar *)((longlong)FVar30 + 0x10);
          while( true ) {
            if (local_f0 != iVar36) {
              local_3f5 = 0;
              `TCheckedPointerIterator<`ArrangeChildrenInStack<0,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>,UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy>'::__l2::FStretchItem,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(&local_3f5);
            }
            if ((ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>,UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy>(EFlowDirection,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                 *)(puVar34 + -0x10) ==
                (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>,UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy>(EFlowDirection,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                 *)(lVar28 * 0x20 + (longlong)FVar30)) break;
            if (*(float *)(puVar34 + 0xc) == 1.4013e-45) {
              fVar44 = *(float *)(puVar34 + -8);
              fVar39 = (fVar49 * *(float *)puVar34) / fVar46;
              fVar42 = *(float *)(puVar34 + -4);
              if (*(float *)(puVar34 + -4) <= 0.0) {
                fVar42 = fVar43;
              }
              if (fVar42 <= fVar39) {
                fVar39 = fVar42;
              }
              if (fVar44 <= 0.0) {
                fVar44 = 0.0;
              }
              if (fVar39 <= fVar44) {
                fVar39 = fVar44;
              }
              *(float *)((ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>,UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy>(EFlowDirection,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                          *)(puVar34 + -0x10))->InlineData = fVar39;
              fVar45 = fVar45 + fVar39;
            }
            puVar34 = puVar34 + 0x20;
          }
          fVar49 = fVar49 - fVar45;
        }
        iVar27 = local_f0;
        uVar38 = __xmm_7fffffff7fffffff7fffffff7fffffff;
        fVar45 = __real_322bcc77;
        bVar24 = fVar49 <= fVar47;
        if (!bVar24) {
          fVar48 = fVar46;
        }
        if ((bVar18) && (0.0 < fVar48)) {
          lVar28 = (longlong)local_f0;
          iVar36 = 0;
          FVar30 = (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>,UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy>(EFlowDirection,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                    )&local_2f8;
          if (local_2f8.SecondaryData !=
              (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>,UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy>(EFlowDirection,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
               )0x0) {
            FVar30 = local_2f8.SecondaryData;
          }
          puVar34 = (uchar *)((longlong)FVar30 + 0x18);
          while( true ) {
            if (local_f0 != iVar27) {
              local_3f4 = 0;
              `TCheckedPointerIterator<`ArrangeChildrenInStack<0,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>,UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy>'::__l2::FStretchItem,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(&local_3f4);
            }
            fVar48 = __real_38d1b717;
            if ((ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>,UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy>(EFlowDirection,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                 *)(puVar34 + -0x18) ==
                (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>,UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy>(EFlowDirection,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                 *)(lVar28 * 0x20 + (longlong)FVar30)) break;
            if (*(int *)(puVar34 + 4) == 2) {
              fVar49 = fVar49 - *(float *)((ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>,UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy>(EFlowDirection,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                                            *)(puVar34 + -0x18))->InlineData;
              iVar36 = iVar36 + 1;
              if (bVar24) {
                uVar40 = *(uint *)(puVar34 + -4);
              }
              else {
                uVar40 = *(uint *)(puVar34 + -8);
              }
              *puVar34 = (float)(uVar40 & uVar38) <= fVar45 | *puVar34;
            }
            puVar34 = puVar34 + 0x20;
          }
          iVar27 = 5;
          if (iVar36 < 5) {
            iVar27 = iVar36;
          }
          iVar36 = 0;
          if (0 < iVar27) {
            do {
              iVar22 = local_f0;
              fVar46 = 0.0;
              if ((float)((uint)fVar49 & uVar38) <= fVar45) break;
              lVar28 = (longlong)local_f0;
              fVar47 = 0.0;
              FVar30 = (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>,UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy>(EFlowDirection,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                        )&local_2f8;
              if (local_2f8.SecondaryData !=
                  (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>,UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy>(EFlowDirection,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                   )0x0) {
                FVar30 = local_2f8.SecondaryData;
              }
              puVar34 = (uchar *)((longlong)FVar30 + 0x18);
              while( true ) {
                if (local_f0 != iVar22) {
                  local_3f3 = 0;
                  `TCheckedPointerIterator<`ArrangeChildrenInStack<0,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>,UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy>'::__l2::FStretchItem,int,0>
                  ::operator!='::__l2::<lambda_1>::operator()(&local_3f3);
                }
                iVar23 = local_f0;
                if ((ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>,UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy>(EFlowDirection,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                     *)(puVar34 + -0x18) ==
                    (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>,UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy>(EFlowDirection,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                     *)(lVar28 * 0x20 + (longlong)FVar30)) break;
                if ((*(int *)(puVar34 + 4) == 2) && (*puVar34 == '\0')) {
                  fVar46 = fVar46 + *(float *)(puVar34 + -8);
                  fVar47 = fVar47 + *(float *)(puVar34 + -0x14) * *(float *)(puVar34 + -4);
                }
                puVar34 = puVar34 + 0x20;
              }
              fVar43 = fVar47;
              if (!bVar24) {
                fVar43 = fVar46;
              }
              if (fVar43 < fVar48) break;
              lVar28 = (longlong)local_f0;
              fVar43 = 0.0;
              FVar30 = (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>,UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy>(EFlowDirection,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                        )&local_2f8;
              if (local_2f8.SecondaryData !=
                  (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>,UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy>(EFlowDirection,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                   )0x0) {
                FVar30 = local_2f8.SecondaryData;
              }
              puVar34 = (uchar *)((longlong)FVar30 + 0x10);
              while( true ) {
                if (local_f0 != iVar23) {
                  local_3f2[0] = 0;
                  `TCheckedPointerIterator<`ArrangeChildrenInStack<0,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>,UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy>'::__l2::FStretchItem,int,0>
                  ::operator!='::__l2::<lambda_1>::operator()(local_3f2);
                }
                pFVar1 = (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>,UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy>(EFlowDirection,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                          *)(puVar34 + -0x10);
                if (pFVar1 == (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>,UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy>(EFlowDirection,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                               *)(lVar28 * 0x20 + (longlong)FVar30)) break;
                if ((*(float *)(puVar34 + 0xc) == 2.8026e-45) && (puVar34[8] == '\0')) {
                  if (bVar24) {
                    fVar44 = (*(float *)(puVar34 + -0xc) * *(float *)(puVar34 + 4)) / fVar47;
                  }
                  else {
                    fVar44 = *(float *)puVar34 / fVar46;
                  }
                  fVar44 = fVar44 * fVar49;
                  if ((float)((uint)fVar44 & uVar38) <= fVar45) {
                    puVar34[8] = '\x01';
                    puVar34 = puVar34 + 0x20;
                  }
                  else {
                    fVar39 = *(float *)pFVar1->InlineData;
                    fVar42 = *(float *)(puVar34 + -8);
                    fVar41 = fVar44 + fVar39;
                    fVar5 = *(float *)(puVar34 + -4);
                    if (fVar41 <= fVar42) {
                      puVar34[8] = '\x01';
                      *(float *)pFVar1->InlineData = fVar42;
                      puVar34 = puVar34 + 0x20;
                      fVar43 = fVar43 + (fVar42 - fVar39);
                    }
                    else {
                      if ((fVar5 <= 0.0) || (fVar41 < fVar5)) {
                        *(float *)pFVar1->InlineData = fVar41;
                        fVar43 = fVar43 + fVar44;
                        goto LAB_1427987b7;
                      }
                      puVar34[8] = '\x01';
                      *(float *)pFVar1->InlineData = fVar5;
                      puVar34 = puVar34 + 0x20;
                      fVar43 = fVar43 + (fVar5 - fVar39);
                    }
                  }
                }
                else {
LAB_1427987b7:
                  puVar34 = puVar34 + 0x20;
                }
              }
              iVar36 = iVar36 + 1;
              fVar49 = fVar49 - fVar43;
            } while (iVar36 < iVar27);
          }
        }
        pFVar21 = local_3c8;
        fVar48 = 0.0;
        iVar27 = (local_3c8->Array).ArrayNum;
        pTVar2 = &local_3c8->Array;
        uVar38 = local_3e8->ArrayNum + iVar27;
        if ((int)uVar38 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar38);
        }
        piVar3 = &(local_3c8->Array).ArrayMax;
        if (*piVar3 < (int)uVar38) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>_>
                    (0x48,8,uVar38,&pTVar2->AllocatorInstance,iVar27,piVar3);
        }
        fVar45 = __real_3f000000;
        dVar11 = __real_47efffffe0000000;
        dVar12 = __real_47efffffe0000000;
        dVar14 = __real_3810000000000000;
        dVar16 = __real_3810000000000000;
        if ((param_1 == LeftToRight) || (param_1 != RightToLeft)) {
          uVar38 = 0;
        }
        else {
          uVar38 = local_3e8->ArrayNum - 1;
        }
        while ((fVar46 = 0.0, -1 < (int)uVar38 && ((int)uVar38 < local_3e8->ArrayNum))) {
          pFVar31 = TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>::
                    operator[](local_3e8,uVar38);
          TVar6.Value = (uchar)pFVar31->_padding_;
          uVar40 = 0;
          if ((int)uVar38 < local_f0) {
            uVar40 = ~uVar38 >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar24 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          FVar35.ReferenceController =
               SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
          pSVar19 = SNullWidget::NullWidget.Object;
          fVar47 = *(float *)((longlong)&pFVar31->_padding_ + 4);
          fVar43 = *(float *)&pFVar31->_padding_;
          fVar44 = *(float *)((longlong)&pFVar31->_padding_ + 4);
          fVar49 = *(float *)&pFVar31->_padding_;
          FVar30 = (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>,UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy>(EFlowDirection,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                    )&local_2f8;
          if (local_2f8.SecondaryData !=
              (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>,UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy>(EFlowDirection,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
               )0x0) {
            FVar30 = local_2f8.SecondaryData;
          }
          fVar39 = *(float *)((longlong)(int)uVar38 * 0x20 + (longlong)FVar30);
          fVar42 = fVar44;
          if (param_1 == RightToLeft) {
            fVar42 = fVar47;
            fVar47 = fVar44;
          }
          iVar27 = *(int *)((longlong)&pFVar31->_padding_ + 4);
          local_3d0 = local_3d8->Size;
          fVar44 = fVar47 + fVar42 + fVar39;
          if ((param_1 == LeftToRight) || (param_1 != RightToLeft)) {
LAB_142798987:
            if (iVar27 == 0) {
LAB_1427989d5:
              local_3e0._0_4_ = fVar39;
              if (fVar39 <= 0.0) {
                local_3e0._0_4_ = 0.0;
              }
            }
            else {
              local_3e0._0_4_ = *(float *)((longlong)&pFVar31->_padding_ + 4);
              if (fVar39 <= (float)local_3e0) {
                local_3e0._0_4_ = fVar39;
              }
              if ((float)local_3e0 <= 0.0) {
                local_3e0._0_4_ = fVar46;
              }
              if (iVar27 != 1) {
                if (iVar27 == 2) {
                  fVar47 = ((fVar44 - (float)local_3e0) * fVar45 + fVar47) - fVar42;
                }
                else {
                  if (iVar27 != 3) goto LAB_1427989d5;
                  fVar47 = (fVar44 - (float)local_3e0) - fVar42;
                }
              }
            }
          }
          else if (iVar27 == 1) {
            local_3e0._0_4_ = *(float *)((longlong)&pFVar31->_padding_ + 4);
            if (fVar39 <= (float)local_3e0) {
              local_3e0._0_4_ = fVar39;
            }
            if ((float)local_3e0 <= 0.0) {
              local_3e0._0_4_ = fVar46;
            }
            fVar47 = (fVar44 - (float)local_3e0) - fVar42;
          }
          else {
            if (iVar27 != 3) goto LAB_142798987;
            local_3e0._0_4_ = *(float *)((longlong)&pFVar31->_padding_ + 4);
            if (fVar39 <= (float)local_3e0) {
              local_3e0._0_4_ = fVar39;
            }
            if ((float)local_3e0 <= 0.0) {
              local_3e0._0_4_ = fVar46;
            }
          }
          iVar27 = (int)pFVar31->_padding_;
          fVar39 = local_3d0._4_4_ - (fVar43 + fVar49);
          if (iVar27 == 0) {
LAB_142798a47:
            local_3e0._4_4_ = fVar39;
            if (fVar39 <= 0.0) {
              local_3e0._4_4_ = 0.0;
            }
          }
          else {
            local_3e0._4_4_ = *(float *)&pFVar31->_padding_;
            if (fVar39 <= *(float *)&pFVar31->_padding_) {
              local_3e0._4_4_ = fVar39;
            }
            if (local_3e0._4_4_ <= 0.0) {
              local_3e0._4_4_ = fVar46;
            }
            if (iVar27 != 1) {
              if (iVar27 == 2) {
                fVar43 = ((local_3d0._4_4_ - local_3e0._4_4_) * fVar45 + fVar43) - fVar49;
              }
              else {
                if (iVar27 != 3) goto LAB_142798a47;
                fVar43 = (local_3d0._4_4_ - local_3e0._4_4_) - fVar49;
              }
            }
          }
          local_368.Object = (SWidget *)pFVar31->_padding_;
          fVar46 = fVar48 + fVar47 + param_5;
          dVar9 = (double)fVar43;
          if (dVar11 <= (double)fVar43) {
            dVar9 = dVar11;
          }
          dVar10 = (double)fVar46;
          if (dVar12 <= (double)fVar46) {
            dVar10 = dVar12;
          }
          dVar13 = (double)(fVar46 + (float)local_3e0);
          if ((double)(fVar46 + (float)local_3e0) <= dVar14) {
            dVar13 = dVar14;
          }
          dVar15 = (double)(fVar43 + local_3e0._4_4_);
          if ((double)(fVar43 + local_3e0._4_4_) <= dVar16) {
            dVar15 = dVar16;
          }
          if (local_368.Object == (SWidget *)0x0) {
            local_3f0 = local_3f0 | 2;
            local_378 = SNullWidget::NullWidget.Object;
            local_370 = SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
            local_368.Object = pSVar19;
            if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
              SharedReferenceCount =
                   (atomic<int>)
                   ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                         SharedReferenceCount + 1);
              UNLOCK();
            }
          }
          else {
            FVar35.ReferenceController = (TReferenceControllerBase<1> *)pFVar31->_padding_;
            local_3f0 = local_3f0 | 1;
            local_388 = local_368.Object;
            local_380 = FVar35.ReferenceController;
            if (FVar35.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (FVar35.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)(FVar35.ReferenceController)->SharedReferenceCount + 1);
              UNLOCK();
            }
          }
          if (FVar35.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FVar35.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar35.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_368.SharedReferenceCount.ReferenceController = FVar35.ReferenceController;
          if ((local_3f0 & 2) != 0) {
            local_3f0 = local_3f0 & 0xfffffffd;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_370);
          }
          if ((local_3f0 & 1) != 0) {
            local_3f0 = local_3f0 & 0xfffffffe;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_380);
          }
          FVar20 = local_3e0;
          local_3d0 = local_3e0;
          local_3c0.Scale = 1.0;
          local_3c0.Translation.field0_0x0._s_0.X = fVar46;
          local_3c0.Translation.field0_0x0._s_0.Y = fVar43;
          FGeometry::MakeChild
                    (local_3d8,(FArrangedWidget *)&local_348,&local_368,
                     (FDeprecateVector2DParameter *)&local_3d0,&local_3c0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar35.ReferenceController);
          if (((local_3c8->VisibilityFilter).Value.Value & TVar6.Value) != 0) {
            FVar7 = (pFVar21->Array).AllocatorInstance.SecondaryData;
            FVar32 = (ForElementType<FArrangedWidget>)pTVar2;
            if (FVar7 != (ForElementType<FArrangedWidget>)0x0) {
              FVar32 = FVar7;
            }
            if ((ulonglong)FVar32 <= &local_348) {
              FVar32 = (ForElementType<FArrangedWidget>)pTVar2;
              if (FVar7 != (ForElementType<FArrangedWidget>)0x0) {
                FVar32 = FVar7;
              }
              if ((&local_348 < (ulonglong)((longlong)FVar32 + (longlong)*piVar3 * 0x48)) &&
                 (bVar24 = FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar24)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            iVar27 = (pFVar21->Array).ArrayNum;
            if (iVar27 == *piVar3) {
              iVar27 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>_>
                                 (0x848,&pTVar2->AllocatorInstance,piVar3);
            }
            (pFVar21->Array).ArrayNum = iVar27 + 1;
            FVar7 = (pFVar21->Array).AllocatorInstance.SecondaryData;
            lVar28 = (longlong)iVar27;
            FVar32 = (ForElementType<FArrangedWidget>)pTVar2;
            if (FVar7 != (ForElementType<FArrangedWidget>)0x0) {
              FVar32 = FVar7;
            }
            puVar4 = (undefined8 *)((longlong)FVar32 + lVar28 * 0x48);
            *puVar4 = local_348;
            puVar4[1] = uStack_340;
            *(undefined8 *)((uchar *)((longlong)FVar32 + 0x10) + lVar28 * 0x48) = local_338;
            *(undefined8 *)((uchar *)((longlong)FVar32 + 0x10) + lVar28 * 0x48 + 8) = uStack_330;
            *(undefined8 *)((uchar *)((longlong)FVar32 + 0x20) + lVar28 * 0x48) = local_328;
            *(undefined8 *)((uchar *)((longlong)FVar32 + 0x20) + lVar28 * 0x48 + 8) = uStack_320;
            *(undefined8 *)((uchar *)((longlong)FVar32 + 0x30) + lVar28 * 0x48) = local_318;
            *(undefined8 *)((uchar *)((longlong)FVar32 + 0x38) + lVar28 * 0x48) = local_310;
            *(TReferenceControllerBase<1> **)((uchar *)((longlong)FVar32 + 0x40) + lVar28 * 0x48) =
                 local_308;
            if (local_308 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              local_308->SharedReferenceCount =
                   (atomic<int>)((int)local_308->SharedReferenceCount + 1);
              UNLOCK();
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_308);
          pFVar31 = TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>::
                    operator[](local_3e8,uVar38);
          *(FDeprecateSlateVector2D *)((longlong)&pFVar31->_padding_ + 4) = FVar20;
          if ((TEnumAsByte<EVisibility::Private>)TVar6.Value != EVisibility::Collapsed.Value.Value)
          {
            fVar48 = fVar48 + fVar44;
          }
          dVar11 = dVar9;
          dVar12 = dVar10;
          dVar14 = dVar13;
          dVar16 = dVar15;
          if ((param_1 == LeftToRight) || (param_1 != RightToLeft)) {
            uVar38 = uVar38 + 1;
          }
          else {
            uVar38 = uVar38 - 1;
          }
        }
        (local_390->field0_0x0)._s_0.X = dVar14 - dVar12;
        (local_390->field0_0x0)._s_0.Y = dVar16 - dVar11;
      }
    }
    if (local_2f8.SecondaryData !=
        (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>,UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy>(EFlowDirection,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
         )0x0) {
      FMemory::Free((void *)local_2f8.SecondaryData);
    }
  }
  return;
}

// ConstructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,int> @ 142799d30

void __cdecl
ConstructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,int>
          (void *param_1,FBlock *param_2,int param_3)

{
  int iVar1;
  ForElementType<int> *_Dst;
  ForElementType<int> *pFVar2;
  int *piVar3;
  ForElementType<int> _Src;
  
  if (param_3 != 0) {
    pFVar2 = &(param_2->SlotIndices).AllocatorInstance.SecondaryData;
    piVar3 = (int *)((longlong)param_1 + 0x74);
    do {
      piVar3[-0x1d] = *(int *)((longlong)piVar3 + (longlong)param_2 + (-0x74 - (longlong)param_1));
      piVar3[-0x1c] = *(int *)&pFVar2[-0xd].field_0x4;
      *(undefined1 *)(piVar3 + -0x1b) = *(undefined1 *)(pFVar2 + -0xc);
      *(undefined1 *)((longlong)piVar3 + -0x6b) = pFVar2[-0xc].field_0x1;
      *(undefined1 *)((longlong)piVar3 + -0x6a) = pFVar2[-0xc].field_0x2;
      *(undefined1 *)((longlong)piVar3 + -0x69) = pFVar2[-0xc].field_0x3;
      *(undefined8 *)(piVar3 + -0x1a) = *(undefined8 *)&pFVar2[-0xc].field_0x4;
      *(undefined8 *)(piVar3 + -0x18) = *(undefined8 *)&pFVar2[-0xb].field_0x4;
      piVar3[-0x16] = *(int *)&pFVar2[-10].field_0x4;
      piVar3[-0x15] = *(int *)(pFVar2 + -9);
      piVar3[-0x14] = *(int *)&pFVar2[-9].field_0x4;
      piVar3[-3] = 0;
      piVar3[-2] = 0;
      _Src = *pFVar2;
      iVar1 = *(int *)(pFVar2 + 1);
      piVar3[-1] = iVar1;
      if (_Src == (ForElementType<int>)0x0) {
        _Src = (ForElementType<int>)(pFVar2 + -8);
      }
      if (iVar1 == 0) {
        *piVar3 = 0x10;
      }
      else {
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                  (4,4,iVar1,0,(ForElementType<int> *)(piVar3 + -0x13),iVar1,piVar3);
        _Dst = *(ForElementType<int> **)(piVar3 + -3);
        if (*(ForElementType<int> **)(piVar3 + -3) == (ForElementType<int> *)0x0) {
          _Dst = (ForElementType<int> *)(piVar3 + -0x13);
        }
        memcpy(_Dst,(void *)_Src,(longlong)iVar1 << 2);
      }
      piVar3 = piVar3 + 0x1e;
      pFVar2 = pFVar2 + 0xf;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlockLine,UE::Slate::PrioritizedWrapBox::FChildArranger::FBlockLine,int> @ 142799e70

void __cdecl
ConstructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlockLine,UE::Slate::PrioritizedWrapBox::FChildArranger::FBlockLine,int>
          (void *param_1,FBlockLine *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  float fVar2;
  FBlock *pFVar3;
  float *pfVar4;
  float *pfVar5;
  
  if (param_3 != 0) {
    pfVar4 = &param_2->MinLength;
    pfVar5 = (float *)((longlong)param_1 + 4);
    do {
      pFVar1 = (ForAnyElementType *)(pfVar5 + 5);
      *(int *)((longlong)param_1 + (-4 - (longlong)param_2) + (longlong)pfVar4) =
           ((FBlockLine *)(pfVar4 + -1))->Index;
      *pfVar5 = *pfVar4;
      pfVar5[1] = pfVar4[1];
      pfVar5[2] = pfVar4[2];
      pfVar5[3] = pfVar4[3];
      pFVar1->Data = (FScriptContainerElement *)0x0;
      fVar2 = pfVar4[7];
      pFVar3 = (FBlock *)
               (((TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_>
                  *)(pfVar4 + 5))->AllocatorInstance).Data;
      pfVar5[7] = fVar2;
      if (fVar2 == 0.0) {
        pfVar5[8] = 0.0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x78,8,(int)fVar2,0,pFVar1,(int)fVar2,(int *)(pfVar5 + 8));
        ConstructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,int>
                  (pFVar1->Data,pFVar3,(int)fVar2);
      }
      pfVar5 = pfVar5 + 10;
      pfVar4 = pfVar4 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSharedPtr<FExtensionBase_const_,1>,TSharedPtr<FExtensionBase_const_,1>,int> @ 142799f60

void __cdecl
ConstructItems<TSharedPtr<FExtensionBase_const_,1>,TSharedPtr<FExtensionBase_const_,1>,int>
          (void *param_1,TSharedPtr<FExtensionBase_const_,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FExtensionBase **)(lVar2 + (longlong)param_2) = param_2->Object;
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

// ConstructItems<TSharedPtr<SWidget,1>,TSharedPtr<SWidget,1>,int> @ 142799fa0

void __cdecl
ConstructItems<TSharedPtr<SWidget,1>,TSharedPtr<SWidget,1>,int>
          (void *param_1,TSharedPtr<SWidget,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(SWidget **)(lVar2 + (longlong)param_2) = param_2->Object;
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

// ConstructItems<TSharedRef<FMultiBlock_const_,1>,TSharedRef<FMultiBlock_const_,1>,int> @ 142799fe0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl
ConstructItems<TSharedRef<FMultiBlock_const_,1>,TSharedRef<FMultiBlock_const_,1>,int>
          (void *param_1,TSharedRef<FMultiBlock_const_,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FMultiBlock **)(lVar2 + (longlong)param_2) = param_2->Object;
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

// ConstructItems<TSharedRef<SNotificationList,1>,TSharedRef<SNotificationList,1>,int> @ 14279a020

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
ConstructItems<TSharedRef<SNotificationList,1>,TSharedRef<SNotificationList,1>,int>
          (void *param_1,TSharedRef<SNotificationList,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(SNotificationList **)(lVar2 + (longlong)param_2) = param_2->Object;
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

// ConstructItems<FText,FText,int> @ 14279a060

void __cdecl ConstructItems<FText,FText,int>(void *param_1,FText *param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 local_res18 [8];
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(longlong *)param_1 = 0;
      plVar1 = *(longlong **)(lVar2 + (longlong)param_1);
      *(longlong **)param_1 = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,local_res18);
      }
      *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 0x10);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// CreateLambda<`SToolBarComboButtonBlock::BuildMultiBlockWidget'::__l35::<lambda_1>_> @ 14279af60

TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
CreateLambda<_SToolBarComboButtonBlock::BuildMultiBlockWidget_::__l35::<lambda_1>_>
          (TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          <lambda_1> *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_28);
  local_10 = puVar1;
  puVar2 = UE::Core::Private::DelegateAllocate(0x3f60,(FDelegateAllocation *)puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFMargin__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`SToolBarComboButtonBlock::BuildMultiBlockWidget'::`35'::<lambda_1>_>
               ::_vftable_;
    *(bool *)(puVar2 + 4) = param_1->bIsSplitButton;
    FText::FText((FText *)(puVar2 + 5),&(param_1->Label).Value);
    *(bool *)(puVar2 + 7) = (param_1->Label).bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar2 + 8),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->Label).Getter);
    FToolBarStyle::FToolBarStyle((FToolBarStyle *)(puVar2 + 0xc),&param_1->ToolBarStyle);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return __return_storage_ptr__;
}

// CreateLambda<`SToolBarButtonBlock::BuildMultiBlockWidget'::__l37::<lambda_2>_> @ 14279b050

TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
CreateLambda<_SToolBarButtonBlock::BuildMultiBlockWidget_::__l37::<lambda_2>_>
          (TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          <lambda_2> *param_1)

{
  undefined1 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_28);
  local_10 = puVar1;
  puVar4 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)puVar1);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFMargin__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`SToolBarButtonBlock::BuildMultiBlockWidget'::`37'::<lambda_2>_>
               ::_vftable_;
    puVar4[3] = (param_1->TextBlock).Object;
    pTVar2 = (param_1->TextBlock).SharedReferenceCount.ReferenceController;
    puVar4[4] = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined8 *)&(param_1->InitialPadding).Right;
    puVar4[5] = *(undefined8 *)&param_1->InitialPadding;
    puVar4[6] = uVar3;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return __return_storage_ptr__;
}

// CreateLambda<`SToolBarComboButtonBlock::BuildMultiBlockWidget'::__l37::<lambda_2>_> @ 14279b110

TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
CreateLambda<_SToolBarComboButtonBlock::BuildMultiBlockWidget_::__l37::<lambda_2>_>
          (TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          <lambda_2> *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_28);
  local_10 = puVar1;
  puVar2 = UE::Core::Private::DelegateAllocate(0x3f50,(FDelegateAllocation *)puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFMargin__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`SToolBarComboButtonBlock::BuildMultiBlockWidget'::`37'::<lambda_2>_>
               ::_vftable_;
    FText::FText((FText *)(puVar2 + 4),(FText *)param_1);
    *(bool *)(puVar2 + 6) = (param_1->Label).bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar2 + 7),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->Label).Getter);
    FToolBarStyle::FToolBarStyle((FToolBarStyle *)(puVar2 + 10),&param_1->ToolBarStyle);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return __return_storage_ptr__;
}

// DefaultConstructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,int> @ 14279bf60

void __cdecl
DefaultConstructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,int>
          (void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)(puVar1 + -2) = 0xffffffffffffffff;
      *puVar1 = 1;
      ((TVector2<float>_u_0 *)(puVar1 + 1))->_s_0 =
           (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      ((TVector2<float>_u_0 *)(puVar1 + 3))->_s_0 =
           (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      *(undefined8 *)(puVar1 + 5) = 0;
      puVar1[7] = 0;
      *(undefined8 *)(puVar1 + 0x18) = 0;
      puVar1[0x1a] = 0;
      puVar1[0x1b] = 0x10;
      param_2 = param_2 + -1;
      puVar1 = puVar1 + 0x1e;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlockLine,int> @ 14279bfc0

void __cdecl
DefaultConstructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlockLine,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x20);
    do {
      *(undefined4 *)(puVar1 + -4) = 0xffffffff;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Slate::FClippingInfo,int> @ 14279bff0

void __cdecl DefaultConstructItems<UE::Slate::FClippingInfo,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 200);
    do {
      puVar1[-0x19] = 0;
      puVar1[-0x18] = 0;
      *(undefined4 *)(puVar1 + -0x17) = 0;
      *(undefined1 *)((longlong)puVar1 + -0xb4) = 0;
      puVar1[-0x14] = 0;
      puVar1[-0x16] = 0;
      puVar1[-0x15] = 0;
      *(undefined2 *)(puVar1 + -0x13) = 0;
      puVar1[-0x10] = 0;
      puVar1[-0x12] = 0;
      puVar1[-0x11] = 0;
      *(undefined2 *)(puVar1 + -0xf) = 0;
      puVar1[-0xc] = 0;
      puVar1[-0xe] = 0;
      puVar1[-0xd] = 0;
      *(undefined2 *)(puVar1 + -0xb) = 0;
      puVar1[-8] = 0;
      puVar1[-10] = 0;
      puVar1[-9] = 0;
      *(undefined4 *)(puVar1 + -7) = 0;
      *(undefined1 *)((longlong)puVar1 + -0x34) = 0;
      puVar1[-4] = 0;
      puVar1[-6] = 0;
      puVar1[-5] = 0;
      *(undefined2 *)(puVar1 + -3) = 0;
      *puVar1 = 0;
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *(undefined1 *)((longlong)puVar1 + 9) = 0;
      *(undefined1 *)((longlong)puVar1 + 0xb) = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      *(undefined2 *)(puVar1 + 4) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x22) = 0;
      puVar1 = puVar1 + 0x1e;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int> @ 14279c0c0

/* WARNING: Type propagation algorithm not settling */

void __cdecl
DefaultConstructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>
          (void *param_1,int param_2)

{
  FAuto *pFVar1;
  longlong lVar2;
  undefined1 local_58 [16];
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  if (param_2 != 0) {
    lVar2 = (longlong)param_1 + 8;
    do {
      *(undefined8 *)(lVar2 + -4) = 0;
      *(undefined8 *)(lVar2 + 4) = 0;
      *(undefined4 *)(lVar2 + -8) = 0xffffffff;
      ((TVector2<float>_u_0 *)(lVar2 + 0xc))->_s_0 =
           (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      ((TVector2<float>_u_0 *)(lVar2 + 0x14))->_s_0 =
           (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      pFVar1 = FAuto::FAuto((FAuto *)local_58);
      *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)pFVar1;
      *(undefined4 *)(lVar2 + 0x28) = *(undefined4 *)&pFVar1->field_0x8;
      *(undefined1 *)(lVar2 + 0x2c) = pFVar1->field_0xc;
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x30),
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar1->field_0x10);
      *(undefined4 *)(lVar2 + 0x48) = *(undefined4 *)&pFVar1->field_0x28;
      *(undefined1 *)(lVar2 + 0x4c) = pFVar1->field_0x2c;
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x50),
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar1->field_0x30);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
      if ((void *)local_28._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_28._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_28);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_48);
      if ((void *)local_48._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_48._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_48);
      *(undefined8 *)(lVar2 + 0x68) = 0;
      ((TEnumAsByte<EVisibility::Private> *)(lVar2 + 0x70))->Value =
           (uchar)EVisibility::Visible.Value.Value;
      *(undefined1 *)(lVar2 + 0x94) = 0;
      *(undefined8 *)(lVar2 + 0x74) = 0;
      ((TVector2<float>_u_0 *)(lVar2 + 0x98))->_s_0 =
           (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      *(undefined8 *)(lVar2 + 0xa0) = 0;
      *(undefined8 *)(lVar2 + 0xa8) = 0;
      *(undefined1 *)(lVar2 + 0xb8) = 0;
      *(undefined2 *)(lVar2 + 0xb0) = 0;
      *(undefined4 *)(lVar2 + 0xbc) = 0xffffffff;
      *(undefined2 *)(lVar2 + 0xc0) = 0;
      lVar2 = lVar2 + 0xd0;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,int> @ 14279c430

void __cdecl
DestructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,int>
          (FBlock *param_1,int param_2)

{
  ForElementType<int> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->SlotIndices).AllocatorInstance.SecondaryData;
    do {
      if (*pFVar1 != (ForElementType<int>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      pFVar1 = pFVar1 + 0xf;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlockLine,int> @ 14279c470

void __cdecl
DestructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlockLine,int>
          (FBlockLine *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Blocks;
    do {
      DestructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,int>
                ((FBlock *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_>
                *)((longlong)(pTVar2 + 2) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Slate::FClippingInfo,int> @ 14279c4c0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl DestructItems<UE::Slate::FClippingInfo,int>(FClippingInfo *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Widget).SharedReferenceCount;
    do {
      FMenuEntryResizeParams::~FMenuEntryResizeParams((FMenuEntryResizeParams *)(pFVar1 + 1));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 0x1e;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FSlateNotificationManager::FRegionalNotificationList,int> @ 14279c510

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
DestructItems<FSlateNotificationManager::FRegionalNotificationList,int>
          (FRegionalNotificationList *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    DestructItems<TSharedRef<SNotificationList,1>,int>
              ((TSharedRef<SNotificationList,1> *)(param_1->Notifications).AllocatorInstance.Data,
               (param_1->Notifications).ArrayNum);
    pFVar1 = (param_1->Notifications).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<SPrioritizedWrapBox::FSlot::FSlotArguments,int> @ 14279c560

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl
DestructItems<SPrioritizedWrapBox::FSlot::FSlotArguments,int>(FSlotArguments *param_1,int param_2)

{
  undefined8 *puVar1;
  TAttribute<UE::Slate::PrioritizedWrapBox::EWrapMode> *pTVar2;
  TDelegate<UE::Slate::PrioritizedWrapBox::EWrapMode___cdecl(void),FDefaultDelegateUserPolicy> *this
  ;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->_WrapMode;
    do {
      this = &pTVar2->Getter;
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
      if (*(void **)&this->field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&this->field_0x8);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)this);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)(this + -2) + 0x10));
      if (*(void **)(this + -1) != (void *)0x0) {
        FMemory::Free(*(void **)(this + -1));
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)((longlong)(this + -2) + 0x10));
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)(this + -3) + 8));
      if (*(void **)((longlong)(this + -3) + 0x10) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(this + -3) + 0x10));
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)((longlong)(this + -3) + 8));
      TResizingWidgetSlotMixin<SPrioritizedWrapBox::FSlot>::FSlotArgumentsMixin::
      ~FSlotArgumentsMixin((FSlotArgumentsMixin *)(this + -9));
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)(this + -0xb) + 8));
      if (*(void **)((longlong)(this + -0xb) + 0x10) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(this + -0xb) + 0x10));
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)((longlong)(this + -0xb) + 8));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)(this + -0xc));
      puVar1 = *(undefined8 **)((longlong)(this + -0xd) + 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      pTVar2 = (TAttribute<UE::Slate::PrioritizedWrapBox::EWrapMode> *)(this + 0xe);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<SScrollBox::FSlot::FSlotArguments,int> @ 14279c660

void __cdecl
DestructItems<SScrollBox::FSlot::FSlotArguments,int>(FSlotArguments *param_1,int param_2)

{
  undefined8 *puVar1;
  TDelegateBase<FNotThreadSafeDelegateMode> *this;
  
  if (param_2 != 0) {
    this = (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->field_0x30;
    do {
      TResizingWidgetSlotMixin<SScrollBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
                ((FSlotArgumentsMixin *)&this[1].field_0x10);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this);
      if (*(void **)&this->field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&this->field_0x8);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)this);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)&this[-2].field_0x10);
      puVar1 = *(undefined8 **)(this + -2);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      this = (TDelegateBase<FNotThreadSafeDelegateMode> *)&this[9].field_0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<SUniformToolbarPanel::FSlot::FSlotArguments,int> @ 14279c6e0

void __cdecl
DestructItems<SUniformToolbarPanel::FSlot::FSlotArguments,int>(FSlotArguments *param_1,int param_2)

{
  undefined8 *puVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&param_1->field_0x10);
    puVar1 = *(undefined8 **)param_1;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<SUniformWrapPanel::FSlot::FSlotArguments,int> @ 14279c730

void __cdecl
DestructItems<SUniformWrapPanel::FSlot::FSlotArguments,int>(FSlotArguments *param_1,int param_2)

{
  undefined8 *puVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&param_1->field_0x10);
    puVar1 = *(undefined8 **)param_1;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int> @ 14279c780

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl
DestructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>
          (FSlotProxy *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FSlotProxy::~FSlotProxy((FSlotProxy *)param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TSharedPtr<FExtensionBase_const_,1>,int> @ 14279c7c0

void __cdecl
DestructItems<TSharedPtr<FExtensionBase_const_,1>,int>
          (TSharedPtr<FExtensionBase_const_,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<IAsyncTaskNotificationImpl,1>,int> @ 14279c800

void __cdecl
DestructItems<TSharedPtr<IAsyncTaskNotificationImpl,1>,int>
          (TSharedPtr<IAsyncTaskNotificationImpl,1> *param_1,int param_2)

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

// DestructItems<TSharedRef<FMultiBlock_const_,1>,int> @ 14279c840

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl
DestructItems<TSharedRef<FMultiBlock_const_,1>,int>
          (TSharedRef<FMultiBlock_const_,1> *param_1,int param_2)

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

// DestructItems<TSharedRef<SNotificationList,1>,int> @ 14279c880

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
DestructItems<TSharedRef<SNotificationList,1>,int>
          (TSharedRef<SNotificationList,1> *param_1,int param_2)

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

// DestructItems<TUniquePtr<SUniformToolbarPanel::FSlot,TDefaultDelete<SUniformToolbarPanel::FSlot>_>,int> @ 14279c8c0

void __cdecl
DestructItems<TUniquePtr<SUniformToolbarPanel::FSlot,TDefaultDelete<SUniformToolbarPanel::FSlot>_>,int>
          (TUniquePtr<SUniformToolbarPanel::FSlot,TDefaultDelete<SUniformToolbarPanel::FSlot>_>
           *param_1,int param_2)

{
  FSlot *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FSlot *)0x0) {
      (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<SPrioritizedWrapBox::FSlot,TDefaultDelete<SPrioritizedWrapBox::FSlot>_>,int> @ 14279c900

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl
DestructItems<TUniquePtr<SPrioritizedWrapBox::FSlot,TDefaultDelete<SPrioritizedWrapBox::FSlot>_>,int>
          (TUniquePtr<SPrioritizedWrapBox::FSlot,TDefaultDelete<SPrioritizedWrapBox::FSlot>_>
           *param_1,int param_2)

{
  FSlot *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FSlot *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// GetTypeHash<FMultiBlock_const_,1> @ 1427a2d30

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

uint __cdecl GetTypeHash<FMultiBlock_const_,1>(TSharedPtr<FMultiBlock_const_,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// GetTypeHash<SWidget,1> @ 1427a2d60

uint __cdecl GetTypeHash<SWidget,1>(TSharedRef<SWidget,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// LowerBoundInternal<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,int,UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,FIdentityFunctor,TDereferenceWrapper<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TLess<void>_>_> @ 1427a3660

int __cdecl
AlgoImpl::
LowerBoundInternal<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,int,UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,FIdentityFunctor,TDereferenceWrapper<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TLess<void>_>_>
          (FBlock *param_1,int param_2,FBlock *param_3,FIdentityFunctor param_4,
          TDereferenceWrapper<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TLess<void>_>
          param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (param_1[iVar1].SequentialIndex < param_3->SequentialIndex) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// LowerBoundInternal<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,int,UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,FIdentityFunctor,TDereferenceWrapper<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,`UE::Slate::PrioritizedWrapBox::FChildArranger::UpdateBlocks'::__l2::<lambda_2>_>_> @ 1427a36b0

int __cdecl
AlgoImpl::
LowerBoundInternal<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,int,UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,FIdentityFunctor,TDereferenceWrapper<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,_UE::Slate::PrioritizedWrapBox::FChildArranger::UpdateBlocks_::__l2::<lambda_2>_>_>
          (FBlock *param_1,int param_2,FBlock *param_3,FIdentityFunctor param_4,
          TDereferenceWrapper<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,_private:_void___cdecl_UE::Slate::PrioritizedWrapBox::FChildArranger::UpdateBlocks(TPanelChildren<SPrioritizedWrapBox::FSlot>_const_&,float)_::_2_::<lambda_2>_>
          param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  FBlock *pFVar5;
  int iVar6;
  bool bVar7;
  
  iVar6 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar6;
      pFVar5 = param_1 + iVar1;
      if ((pFVar5->bCanWrap == false) && (pFVar5->bForceNewLine == false)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if ((param_3->bCanWrap == false) && (param_3->bForceNewLine == false)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar7) {
        if (bVar4) {
          bVar7 = SBORROW4(pFVar5->SequentialIndex,param_3->SequentialIndex);
          iVar2 = pFVar5->SequentialIndex - param_3->SequentialIndex;
          goto LAB_1427a3749;
        }
        bVar7 = false;
      }
      else if (bVar4) {
        bVar7 = true;
      }
      else {
        bVar7 = SBORROW4(pFVar5->SequentialIndex,param_3->SequentialIndex);
        iVar2 = pFVar5->SequentialIndex - param_3->SequentialIndex;
LAB_1427a3749:
        bVar7 = bVar7 != iVar2 < 0;
      }
      if (bVar7) {
        iVar6 = iVar1 + (param_2 & 1U);
      }
      uVar3 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar3 != 0);
  }
  return iVar6;
}

// MakeRequiredArgs<TSharedRef<STableViewBase,1>_const_&> @ 1427a3780

T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<STableViewBase,1>_const_&>
          (TSharedRef<STableViewBase,1> *param_1)

{
  STableViewBase *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>)param_1;
}

// MakeRequiredArgs<TSharedRef<SListView<TSharedPtr<SWidget,1>_>,1>_> @ 1427a3790

T1RequiredArgs<TSharedRef<SListView<TSharedPtr<SWidget,1>_>,1>_&&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<SListView<TSharedPtr<SWidget,1>_>,1>_>
          (TSharedRef<SListView<TSharedPtr<SWidget,1>_>,1> *param_1)

{
  SListView<TSharedPtr<SWidget,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<SListView<TSharedPtr<SWidget,1>_>,1>_&&>)param_1;
}

// MakeRequiredArgs<TSharedRef<STableRow<TSharedPtr<SWidget,1>_>,1>_> @ 1427a37a0

T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<SWidget,1>_>,1>_&&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<STableRow<TSharedPtr<SWidget,1>_>,1>_>
          (TSharedRef<STableRow<TSharedPtr<SWidget,1>_>,1> *param_1)

{
  STableRow<TSharedPtr<SWidget,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<SWidget,1>_>,1>_&&>)param_1;
}

// MakeRequiredArgs<TSharedRef<FLinkedBoxManager,1>_> @ 1427a37b0

T1RequiredArgs<TSharedRef<FLinkedBoxManager,1>_&&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<FLinkedBoxManager,1>_>
          (TSharedRef<FLinkedBoxManager,1> *param_1)

{
  FLinkedBoxManager *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<FLinkedBoxManager,1>_&&>)param_1;
}

// MakeShared<STableRow<TSharedPtr<SWidget,1>_>,1> @ 1427a37c0

TSharedRef<STableRow<TSharedPtr<SWidget,1>_>,1> * __cdecl
MakeShared<STableRow<TSharedPtr<SWidget,1>_>,1>
          (TSharedRef<STableRow<TSharedPtr<SWidget,1>_>,1> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  pTVar2 = operator_new(0x408);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__STableRow_V__TSharedPtr_VSWidget___00_____00_SharedPointerInternals__6B_
    ;
    pTVar2[1]._padding_ = (longlong)&___7ITableRow__6B_;
    SBorder::SBorder((SBorder *)&pTVar2[1].SharedReferenceCount);
    pTVar2[1]._padding_ = (longlong)&STableRow<TSharedPtr<SWidget,1>_>::_vftable__for__ITableRow__;
    *(undefined ***)&pTVar2[1].SharedReferenceCount =
         &STableRow<TSharedPtr<SWidget,1>_>::_vftable__for__SBorder__;
    puVar1 = &pTVar2[4].SharedReferenceCount.field_0x2;
    *puVar1 = *puVar1 | 4;
    pTVar2[0x2f].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x2f].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[0x30]._padding_ = 0;
    pTVar2[0x30].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar2[0x31]._padding_ = 0;
    pTVar2[0x32].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x32].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[0x33]._padding_ = 0;
    pTVar2[0x33].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x33].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[0x34]._padding_ = 0;
    pTVar2[0x34].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x35]._padding_ = 0;
    pTVar2[0x35].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x35].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar2[0x36]._padding_ = 0;
    pTVar2[0x36].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x36].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[0x37]._padding_ = 0;
    pTVar2[0x37].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)((longlong)&pTVar2[0x38]._padding_ + 4) = 0;
    pTVar2[0x38].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x38].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[0x39]._padding_ = 0;
    pTVar2[0x39].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3a]._padding_ = 0;
    pTVar2[0x3a].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3a].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar2[0x3b]._padding_ = 0;
    pTVar2[0x3b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3b].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3c]._padding_ = 0;
    pTVar2[0x3c].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3d]._padding_ = 0;
    pTVar2[0x3d].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3d].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar2[0x3e]._padding_ = 0;
    pTVar2[0x3f]._padding_ = 0;
    pTVar2[0x3f].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3f].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)&pTVar2[0x30].WeakReferenceCount = 1;
    pTVar2[4].SharedReferenceCount.field_0x3 = 2;
  }
  TSharedRef<STableRow<TSharedPtr<SWidget,1>_>,1>::TSharedRef<STableRow<TSharedPtr<SWidget,1>_>,1>
            (__return_storage_ptr__,(STableRow<TSharedPtr<SWidget,1>_> *)(pTVar2 + 1),pTVar2);
  return __return_storage_ptr__;
}

// MakeShared<FTagMetaData,1,FTagMetaData_&> @ 1427a3930

TSharedRef<FTagMetaData,1> * __cdecl
MakeShared<FTagMetaData,1,FTagMetaData_&>
          (TSharedRef<FTagMetaData,1> *__return_storage_ptr__,FTagMetaData *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FTagMetaData,1> *pTVar5;
  
  pTVar4 = operator_new(0x20);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FTagMetaData *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFTagMetaData___00_SharedPointerInternals__6B_;
    pTVar4[1]._padding_ = (longlong)&___7FTagMetaData__6B_;
    uVar2 = (param_1->Tag).Number;
    pTVar4[1].SharedReferenceCount = (atomic<int>)(param_1->Tag).ComparisonIndex.Value;
    pTVar4[1].WeakReferenceCount = (atomic<int>)uVar2;
    __return_storage_ptr__->Object = (FTagMetaData *)(pTVar4 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TSharedRef<FTagMetaData,1> *)(*pcVar1)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<FTagMetaData,1,FName_&> @ 1427a39f0

TSharedRef<FTagMetaData,1> * __cdecl
MakeShared<FTagMetaData,1,FName_&>
          (TSharedRef<FTagMetaData,1> *__return_storage_ptr__,FName *param_1)

{
  code *pcVar1;
  FNameEntryId FVar2;
  uint uVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSharedRef<FTagMetaData,1> *pTVar6;
  
  pTVar5 = operator_new(0x20);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FTagMetaData *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFTagMetaData___00_SharedPointerInternals__6B_;
    FVar2.Value = (param_1->ComparisonIndex).Value;
    uVar3 = param_1->Number;
    pTVar5[1]._padding_ = (longlong)&___7FTagMetaData__6B_;
    pTVar5[1].SharedReferenceCount = (atomic<int>)FVar2.Value;
    pTVar5[1].WeakReferenceCount = (atomic<int>)uVar3;
    __return_storage_ptr__->Object = (FTagMetaData *)(pTVar5 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
    if (pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TSharedRef<FTagMetaData,1> *)(*pcVar1)();
        return pTVar6;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<FToolBarSeparatorBlock,1,FName_&> @ 1427a3ab0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<FToolBarSeparatorBlock,1> * __cdecl
MakeShared<FToolBarSeparatorBlock,1,FName_&>
          (TSharedRef<FToolBarSeparatorBlock,1> *__return_storage_ptr__,FName *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedPtr<FUICommandList_const_,1> local_28;
  TSharedPtr<FUICommandInfo_const_,1> local_18;
  
  pTVar1 = operator_new(0x1d8);
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    pTVar1 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar1->SharedReferenceCount = (atomic<int>)0x1;
    pTVar1->WeakReferenceCount = (atomic<int>)0x1;
    pTVar1->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFToolBarSeparatorBlock___00_SharedPointerInternals__6B_
    ;
    local_28.Object = (FUICommandList *)0x0;
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_18.Object = (FUICommandInfo *)0x0;
    local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FMultiBlock::FMultiBlock
              ((FMultiBlock *)(pTVar1 + 1),&local_18,&local_28,*param_1,Separator,false);
    pTVar1[1]._padding_ = (longlong)&___7FToolBarSeparatorBlock__6B_;
  }
  TSharedRef<FToolBarSeparatorBlock,1>::TSharedRef<FToolBarSeparatorBlock,1>
            (__return_storage_ptr__,(FToolBarSeparatorBlock *)(pTVar1 + 1),pTVar1);
  return __return_storage_ptr__;
}

// MakeShared<FWidgetBlock,1,TSharedRef<SWidget,1>_&,FText_const_&,TAttribute<FText>_const_&,FMenuEntryStyleParams_&> @ 1427a3b70

TSharedRef<FWidgetBlock,1> * __cdecl
MakeShared<FWidgetBlock,1,TSharedRef<SWidget,1>_&,FText_const_&,TAttribute<FText>_const_&,FMenuEntryStyleParams_&>
          (TSharedRef<FWidgetBlock,1> *__return_storage_ptr__,TSharedRef<SWidget,1> *param_1,
          FText *param_2,TAttribute<FText> *param_3,FMenuEntryStyleParams *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *local_68;
  TReferenceControllerBase<1> *local_60;
  bool local_58;
  undefined1 local_50 [40];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  pTVar1 = operator_new(0x348);
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    pTVar1 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar1->SharedReferenceCount = (atomic<int>)0x1;
    pTVar1->WeakReferenceCount = (atomic<int>)0x1;
    pTVar1->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFWidgetBlock___00_SharedPointerInternals__6B_;
    FSlateIcon::FSlateIcon((FSlateIcon *)local_50);
    local_50[0x20] = false;
    local_18 = 0;
    local_68 = param_1->Object;
    local_60 = (param_1->SharedReferenceCount).ReferenceController;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    if (local_60 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_60->SharedReferenceCount = (atomic<int>)((int)local_60->SharedReferenceCount + 1);
      UNLOCK();
    }
    FWidgetBlock::FWidgetBlock
              ((FWidgetBlock *)(pTVar1 + 1),(TSharedRef<SWidget,1> *)&local_68,param_2,param_3,
               param_4,(TAttribute<FSlateIcon> *)local_50);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_68);
    if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
      local_18 = local_18 & 0xffffffff00000000;
    }
    if (local_58 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_60,(FDestructionSentinel *)&local_68);
    }
    if (FStack_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  }
  TSharedRef<FWidgetBlock,1>::TSharedRef<FWidgetBlock,1>
            (__return_storage_ptr__,(FWidgetBlock *)(pTVar1 + 1),pTVar1);
  return __return_storage_ptr__;
}

// MakeTDecl<STableRow<TSharedPtr<SWidget,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<SWidget,1>_>,1>_&&>_> @ 1427a3cf0

TSlateDecl<STableRow<TSharedPtr<SWidget,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<SWidget,1>_>,1>_&&>_>
* __cdecl MakeTDecl<STableRow<TSharedPtr<SWidget,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<SWidget,1>_>,1>_&&>_>
                    (TSlateDecl<STableRow<TSharedPtr<SWidget,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<SWidget,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<SListView<TSharedPtr<SWidget,1>_>,1>_&&> *param_4)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<STableRow<TSharedPtr<SWidget,1>_>,1> *pTVar3;
  TSlateDecl<STableRow<TSharedPtr<SWidget,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<SWidget,1>_>,1>_&&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_48;
  FMemScope local_40;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *local_20;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (STableRow<TSharedPtr<SWidget,1>_> *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = MakeShared<STableRow<TSharedPtr<SWidget,1>_>,1>
                     ((TSharedRef<STableRow<TSharedPtr<SWidget,1>_>,1> *)(local_38 + 0x10));
  local_38._8_8_ = (pTVar3->SharedReferenceCount).ReferenceController;
  local_38._0_8_ = pTVar3->Object;
  if ((TReferenceControllerBase<1> *)local_38._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_38._8_8_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_38._8_8_)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<STableRow<TSharedPtr<SWidget,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<SWidget,1>_>,1>_&&>_>
       *)local_38) {
    (__return_storage_ptr__->_Widget).Object = (STableRow<TSharedPtr<SWidget,1>_> *)local_38._0_8_;
    local_38._0_8_ = (STableRow<TSharedPtr<SWidget,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_38 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_38._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  if ((__return_storage_ptr__->_Widget).Object == (STableRow<TSharedPtr<SWidget,1>_> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<STableRow<TSharedPtr<SWidget,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<SWidget,1>_>,1>_&&>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x3f8);
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STableRow<TSharedPtr<SWidget,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_> @ 1427a3e50

TSlateDecl<STableRow<TSharedPtr<SWidget,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
* __cdecl MakeTDecl<STableRow<TSharedPtr<SWidget,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                    (TSlateDecl<STableRow<TSharedPtr<SWidget,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> *param_4)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<STableRow<TSharedPtr<SWidget,1>_>,1> *pTVar3;
  TSlateDecl<STableRow<TSharedPtr<SWidget,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_48;
  FMemScope local_40;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *local_20;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (STableRow<TSharedPtr<SWidget,1>_> *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = MakeShared<STableRow<TSharedPtr<SWidget,1>_>,1>
                     ((TSharedRef<STableRow<TSharedPtr<SWidget,1>_>,1> *)(local_38 + 0x10));
  local_38._8_8_ = (pTVar3->SharedReferenceCount).ReferenceController;
  local_38._0_8_ = pTVar3->Object;
  if ((TReferenceControllerBase<1> *)local_38._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_38._8_8_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_38._8_8_)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<STableRow<TSharedPtr<SWidget,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
       *)local_38) {
    (__return_storage_ptr__->_Widget).Object = (STableRow<TSharedPtr<SWidget,1>_> *)local_38._0_8_;
    local_38._0_8_ = (STableRow<TSharedPtr<SWidget,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_38 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_38._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  if ((__return_storage_ptr__->_Widget).Object == (STableRow<TSharedPtr<SWidget,1>_> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<STableRow<TSharedPtr<SWidget,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x3f8);
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STileView<TSharedPtr<SWidget,1>_>,RequiredArgs::T0RequiredArgs> @ 1427a3fb0

TSlateDecl<STileView<TSharedPtr<SWidget,1>_>,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<STileView<TSharedPtr<SWidget,1>_>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<STileView<TSharedPtr<SWidget,1>_>,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<STileView<TSharedPtr<SWidget,1>_>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STileView<TSharedPtr<SWidget,1>_>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SButtonRowBlock,RequiredArgs::T0RequiredArgs> @ 1427a4060

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSlateDecl<SButtonRowBlock,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SButtonRowBlock,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SButtonRowBlock,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<SButtonRowBlock,RequiredArgs::T0RequiredArgs> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FLLMScope local_res8 [2];
  FName local_58;
  FMemScope local_50;
  undefined1 local_48 [24];
  TReferenceControllerBase<1> *pTStack_30;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_58 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_50,&local_58,true);
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (SButtonRowBlock *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x308);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSButtonRowBlock___00_SharedPointerInternals__6B_;
    memset(pTVar3 + 1,0,0x2f8);
    SMultiBlockBaseWidget::SMultiBlockBaseWidget((SMultiBlockBaseWidget *)(pTVar3 + 1));
    pTVar3[1]._padding_ = (longlong)&SButtonRowBlock::_vftable__for__IMultiBlockBaseWidget__;
    *(undefined ***)&pTVar3[1].SharedReferenceCount =
         &SButtonRowBlock::_vftable__for__SCompoundWidget__;
    pTVar3[0x2f].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x2f].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x30]._padding_ = 0;
    pTVar5 = pTVar3;
  }
  TSharedRef<SButtonRowBlock,1>::TSharedRef<SButtonRowBlock,1>
            ((TSharedRef<SButtonRowBlock,1> *)(local_48 + 0x10),(SButtonRowBlock *)(pTVar5 + 1),
             pTVar5);
  local_48._0_8_ = local_48._16_8_;
  local_48._8_8_ = pTStack_30;
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ != (TSlateDecl<SButtonRowBlock,RequiredArgs::T0RequiredArgs> *)local_48
     ) {
    (__return_storage_ptr__->_Widget).Object = (SButtonRowBlock *)local_48._16_8_;
    local_48._0_8_ = (SButtonRowBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_48 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  if (((__return_storage_ptr__->_Widget).Object == (SButtonRowBlock *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSlateDecl<SButtonRowBlock,RequiredArgs::T0RequiredArgs> *)(*pcVar1)();
    return pTVar4;
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x2f8);
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SCheckBoxStack,RequiredArgs::T0RequiredArgs> @ 1427a4240

TSlateDecl<SCheckBoxStack,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SCheckBoxStack,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SCheckBoxStack,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SCheckBoxStack,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SCheckBoxStack,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SClippingHorizontalBox,RequiredArgs::T0RequiredArgs> @ 1427a42f0

TSlateDecl<SClippingHorizontalBox,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SClippingHorizontalBox,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SClippingHorizontalBox,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SClippingHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SClippingHorizontalBox,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SClippingVerticalBox,RequiredArgs::T0RequiredArgs> @ 1427a43a0

TSlateDecl<SClippingVerticalBox,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SClippingVerticalBox,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SClippingVerticalBox,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SClippingVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SClippingVerticalBox,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SColorBlock,RequiredArgs::T0RequiredArgs> @ 1427a4450

TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SColorBlock,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SComboButton,RequiredArgs::T0RequiredArgs> @ 1427a4500

TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SComboButton,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SCustomToolbarPreviewWidget,RequiredArgs::T0RequiredArgs> @ 1427a45b0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSlateDecl<SCustomToolbarPreviewWidget,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SCustomToolbarPreviewWidget,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SCustomToolbarPreviewWidget,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<SCustomToolbarPreviewWidget,RequiredArgs::T0RequiredArgs> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FLLMScope local_res8 [2];
  FName local_58;
  FMemScope local_50;
  undefined1 local_48 [24];
  TReferenceControllerBase<1> *pTStack_30;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_58 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_50,&local_58,true);
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (SCustomToolbarPreviewWidget *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x308);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSCustomToolbarPreviewWidget___00_SharedPointerInternals__6B_
    ;
    memset(pTVar3 + 1,0,0x2f8);
    SMultiBlockBaseWidget::SMultiBlockBaseWidget((SMultiBlockBaseWidget *)(pTVar3 + 1));
    pTVar3[1]._padding_ =
         (longlong)&SCustomToolbarPreviewWidget::_vftable__for__IMultiBlockBaseWidget__;
    *(undefined ***)&pTVar3[1].SharedReferenceCount =
         &SCustomToolbarPreviewWidget::_vftable__for__SCompoundWidget__;
    pTVar3[0x2f].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x2f].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x30]._padding_ = 0;
    pTVar5 = pTVar3;
  }
  TSharedRef<SCustomToolbarPreviewWidget,1>::TSharedRef<SCustomToolbarPreviewWidget,1>
            ((TSharedRef<SCustomToolbarPreviewWidget,1> *)(local_48 + 0x10),
             (SCustomToolbarPreviewWidget *)(pTVar5 + 1),pTVar5);
  local_48._0_8_ = local_48._16_8_;
  local_48._8_8_ = pTStack_30;
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<SCustomToolbarPreviewWidget,RequiredArgs::T0RequiredArgs> *)local_48) {
    (__return_storage_ptr__->_Widget).Object = (SCustomToolbarPreviewWidget *)local_48._16_8_;
    local_48._0_8_ = (SCustomToolbarPreviewWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_48 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  if (((__return_storage_ptr__->_Widget).Object == (SCustomToolbarPreviewWidget *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSlateDecl<SCustomToolbarPreviewWidget,RequiredArgs::T0RequiredArgs> *)(*pcVar1)();
    return pTVar4;
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x2f8);
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SEditableTextBlock,RequiredArgs::T0RequiredArgs> @ 1427a4790

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSlateDecl<SEditableTextBlock,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SEditableTextBlock,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SEditableTextBlock,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<SEditableTextBlock,RequiredArgs::T0RequiredArgs> *pTVar4;
  FLLMScope local_res8 [2];
  FName local_58;
  FMemScope local_50;
  undefined1 local_48 [24];
  TReferenceControllerBase<1> *pTStack_30;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_58 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_50,&local_58,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (SEditableTextBlock *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x2f8);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSEditableTextBlock___00_SharedPointerInternals__6B_;
    memset(pTVar3 + 1,0,0x2e8);
    SMultiBlockBaseWidget::SMultiBlockBaseWidget((SMultiBlockBaseWidget *)(pTVar3 + 1));
    pTVar3[1]._padding_ = (longlong)&SEditableTextBlock::_vftable__for__IMultiBlockBaseWidget__;
    *(undefined ***)&pTVar3[1].SharedReferenceCount =
         &SEditableTextBlock::_vftable__for__SCompoundWidget__;
  }
  TSharedRef<SEditableTextBlock,1>::TSharedRef<SEditableTextBlock,1>
            ((TSharedRef<SEditableTextBlock,1> *)(local_48 + 0x10),
             (SEditableTextBlock *)(pTVar3 + 1),pTVar3);
  local_48._0_8_ = local_48._16_8_;
  local_48._8_8_ = pTStack_30;
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<SEditableTextBlock,RequiredArgs::T0RequiredArgs> *)local_48) {
    (__return_storage_ptr__->_Widget).Object = (SEditableTextBlock *)local_48._16_8_;
    local_48._0_8_ = (SEditableTextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_48 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  if ((__return_storage_ptr__->_Widget).Object == (SEditableTextBlock *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<SEditableTextBlock,RequiredArgs::T0RequiredArgs> *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->field_0x8,param_1,param_2,
             param_3,0x2e8);
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs> @ 1427a4960

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<SWidget,1>_>,1>_&&>_> @ 1427a4a10

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<SWidget,1>_>,1>_&&>_>
* __cdecl MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<SWidget,1>_>,1>_&&>_>
                    (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<SWidget,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<SWidget,1>_>,1>_&&> *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<SWidget,1>_>,1>_&&>_>
  ::
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<SWidget,1>_>,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SGroupMarkerBlock,RequiredArgs::T0RequiredArgs> @ 1427a4ac0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSlateDecl<SGroupMarkerBlock,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SGroupMarkerBlock,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SGroupMarkerBlock,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<SGroupMarkerBlock,RequiredArgs::T0RequiredArgs> *pTVar4;
  FLLMScope local_res8 [2];
  FName local_58;
  FMemScope local_50;
  undefined1 local_48 [24];
  TReferenceControllerBase<1> *pTStack_30;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_58 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_50,&local_58,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (SGroupMarkerBlock *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x2f8);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSGroupMarkerBlock___00_SharedPointerInternals__6B_;
    memset(pTVar3 + 1,0,0x2e8);
    SMultiBlockBaseWidget::SMultiBlockBaseWidget((SMultiBlockBaseWidget *)(pTVar3 + 1));
    pTVar3[1]._padding_ = (longlong)&SGroupMarkerBlock::_vftable__for__IMultiBlockBaseWidget__;
    *(undefined ***)&pTVar3[1].SharedReferenceCount =
         &SGroupMarkerBlock::_vftable__for__SCompoundWidget__;
  }
  TSharedRef<SGroupMarkerBlock,1>::TSharedRef<SGroupMarkerBlock,1>
            ((TSharedRef<SGroupMarkerBlock,1> *)(local_48 + 0x10),(SGroupMarkerBlock *)(pTVar3 + 1),
             pTVar3);
  local_48._0_8_ = local_48._16_8_;
  local_48._8_8_ = pTStack_30;
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<SGroupMarkerBlock,RequiredArgs::T0RequiredArgs> *)local_48) {
    (__return_storage_ptr__->_Widget).Object = (SGroupMarkerBlock *)local_48._16_8_;
    local_48._0_8_ = (SGroupMarkerBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_48 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  if ((__return_storage_ptr__->_Widget).Object == (SGroupMarkerBlock *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<SGroupMarkerBlock,RequiredArgs::T0RequiredArgs> *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->field_0x8,param_1,param_2,
             param_3,0x2e8);
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SHeadingBlock,RequiredArgs::T0RequiredArgs> @ 1427a4c90

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSlateDecl<SHeadingBlock,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SHeadingBlock,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SHeadingBlock,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<SHeadingBlock,RequiredArgs::T0RequiredArgs> *pTVar4;
  FLLMScope local_res8 [2];
  FName local_58;
  FMemScope local_50;
  undefined1 local_48 [24];
  TReferenceControllerBase<1> *pTStack_30;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_58 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_50,&local_58,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (SHeadingBlock *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x2f8);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSHeadingBlock___00_SharedPointerInternals__6B_;
    memset(pTVar3 + 1,0,0x2e8);
    SMultiBlockBaseWidget::SMultiBlockBaseWidget((SMultiBlockBaseWidget *)(pTVar3 + 1));
    pTVar3[1]._padding_ = (longlong)&SHeadingBlock::_vftable__for__IMultiBlockBaseWidget__;
    *(undefined ***)&pTVar3[1].SharedReferenceCount =
         &SHeadingBlock::_vftable__for__SCompoundWidget__;
  }
  TSharedRef<SHeadingBlock,1>::TSharedRef<SHeadingBlock,1>
            ((TSharedRef<SHeadingBlock,1> *)(local_48 + 0x10),(SHeadingBlock *)(pTVar3 + 1),pTVar3);
  local_48._0_8_ = local_48._16_8_;
  local_48._8_8_ = pTStack_30;
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ != (TSlateDecl<SHeadingBlock,RequiredArgs::T0RequiredArgs> *)local_48)
  {
    (__return_storage_ptr__->_Widget).Object = (SHeadingBlock *)local_48._16_8_;
    local_48._0_8_ = (SHeadingBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_48 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  if ((__return_storage_ptr__->_Widget).Object == (SHeadingBlock *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<SHeadingBlock,RequiredArgs::T0RequiredArgs> *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->field_0x8,param_1,param_2,
             param_3,0x2e8);
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SLayeredImage,RequiredArgs::T0RequiredArgs> @ 1427a4e60

TSlateDecl<SLayeredImage,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SLayeredImage,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SLayeredImage,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SLayeredImage,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SLayeredImage,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SLinkedBox,RequiredArgs::T1RequiredArgs<TSharedRef<FLinkedBoxManager,1>_&&>_> @ 1427a4f10

TSlateDecl<SLinkedBox,RequiredArgs::T1RequiredArgs<TSharedRef<FLinkedBoxManager,1>_&&>_> * __cdecl
MakeTDecl<SLinkedBox,RequiredArgs::T1RequiredArgs<TSharedRef<FLinkedBoxManager,1>_&&>_>
          (TSlateDecl<SLinkedBox,RequiredArgs::T1RequiredArgs<TSharedRef<FLinkedBoxManager,1>_&&>_>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
          T1RequiredArgs<TSharedRef<FLinkedBoxManager,1>_&&> *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SLinkedBox,RequiredArgs::T1RequiredArgs<TSharedRef<FLinkedBoxManager,1>_&&>_>::
  TSlateDecl<SLinkedBox,RequiredArgs::T1RequiredArgs<TSharedRef<FLinkedBoxManager,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs> @ 1427a4fc0

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SMenuEntryBlock,RequiredArgs::T0RequiredArgs> @ 1427a5070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSlateDecl<SMenuEntryBlock,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SMenuEntryBlock,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SMenuEntryBlock,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<SMenuEntryBlock,RequiredArgs::T0RequiredArgs> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FLLMScope local_res8 [2];
  FName local_58;
  FMemScope local_50;
  undefined1 local_48 [24];
  TReferenceControllerBase<1> *pTStack_30;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_58 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_50,&local_58,true);
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (SMenuEntryBlock *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x330);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSMenuEntryBlock___00_SharedPointerInternals__6B_;
    memset(pTVar3 + 1,0,800);
    SMultiBlockBaseWidget::SMultiBlockBaseWidget((SMultiBlockBaseWidget *)(pTVar3 + 1));
    pTVar3[1]._padding_ = (longlong)&SMenuEntryBlock::_vftable__for__IMultiBlockBaseWidget__;
    *(undefined ***)&pTVar3[1].SharedReferenceCount =
         &SMenuEntryBlock::_vftable__for__SCompoundWidget__;
    pTVar3[0x2f].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x2f].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x30]._padding_ = 0;
    pTVar3[0x31].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x31].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x32]._padding_ = 0;
    pTVar5 = pTVar3;
  }
  TSharedRef<SMenuEntryBlock,1>::TSharedRef<SMenuEntryBlock,1>
            ((TSharedRef<SMenuEntryBlock,1> *)(local_48 + 0x10),(SMenuEntryBlock *)(pTVar5 + 1),
             pTVar5);
  local_48._0_8_ = local_48._16_8_;
  local_48._8_8_ = pTStack_30;
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ != (TSlateDecl<SMenuEntryBlock,RequiredArgs::T0RequiredArgs> *)local_48
     ) {
    (__return_storage_ptr__->_Widget).Object = (SMenuEntryBlock *)local_48._16_8_;
    local_48._0_8_ = (SMenuEntryBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_48 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  if (((__return_storage_ptr__->_Widget).Object == (SMenuEntryBlock *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSlateDecl<SMenuEntryBlock,RequiredArgs::T0RequiredArgs> *)(*pcVar1)();
    return pTVar4;
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,800);
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SMenuEntryButton,RequiredArgs::T0RequiredArgs> @ 1427a5260

TSlateDecl<SMenuEntryButton,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SMenuEntryButton,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SMenuEntryButton,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SMenuEntryButton,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SMenuEntryButton,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SMenuSeparatorBlock,RequiredArgs::T0RequiredArgs> @ 1427a5310

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSlateDecl<SMenuSeparatorBlock,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SMenuSeparatorBlock,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SMenuSeparatorBlock,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<SMenuSeparatorBlock,RequiredArgs::T0RequiredArgs> *pTVar4;
  FLLMScope local_res8 [2];
  FName local_58;
  FMemScope local_50;
  undefined1 local_48 [24];
  TReferenceControllerBase<1> *pTStack_30;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_58 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_50,&local_58,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (SMenuSeparatorBlock *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x2f8);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSMenuSeparatorBlock___00_SharedPointerInternals__6B_;
    memset(pTVar3 + 1,0,0x2e8);
    SMultiBlockBaseWidget::SMultiBlockBaseWidget((SMultiBlockBaseWidget *)(pTVar3 + 1));
    pTVar3[1]._padding_ = (longlong)&SMenuSeparatorBlock::_vftable__for__IMultiBlockBaseWidget__;
    *(undefined ***)&pTVar3[1].SharedReferenceCount =
         &SMenuSeparatorBlock::_vftable__for__SCompoundWidget__;
  }
  TSharedRef<SMenuSeparatorBlock,1>::TSharedRef<SMenuSeparatorBlock,1>
            ((TSharedRef<SMenuSeparatorBlock,1> *)(local_48 + 0x10),
             (SMenuSeparatorBlock *)(pTVar3 + 1),pTVar3);
  local_48._0_8_ = local_48._16_8_;
  local_48._8_8_ = pTStack_30;
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<SMenuSeparatorBlock,RequiredArgs::T0RequiredArgs> *)local_48) {
    (__return_storage_ptr__->_Widget).Object = (SMenuSeparatorBlock *)local_48._16_8_;
    local_48._0_8_ = (SMenuSeparatorBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_48 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  if ((__return_storage_ptr__->_Widget).Object == (SMenuSeparatorBlock *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<SMenuSeparatorBlock,RequiredArgs::T0RequiredArgs> *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->field_0x8,param_1,param_2,
             param_3,0x2e8);
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SMenuSpacerBlock,RequiredArgs::T0RequiredArgs> @ 1427a54e0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSlateDecl<SMenuSpacerBlock,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SMenuSpacerBlock,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SMenuSpacerBlock,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<SMenuSpacerBlock,RequiredArgs::T0RequiredArgs> *pTVar4;
  FLLMScope local_res8 [2];
  FName local_58;
  FMemScope local_50;
  undefined1 local_48 [24];
  TReferenceControllerBase<1> *pTStack_30;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_58 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_50,&local_58,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (SMenuSpacerBlock *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x2f8);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSMenuSpacerBlock___00_SharedPointerInternals__6B_;
    memset(pTVar3 + 1,0,0x2e8);
    SMultiBlockBaseWidget::SMultiBlockBaseWidget((SMultiBlockBaseWidget *)(pTVar3 + 1));
    pTVar3[1]._padding_ = (longlong)&SMenuSpacerBlock::_vftable__for__IMultiBlockBaseWidget__;
    *(undefined ***)&pTVar3[1].SharedReferenceCount =
         &SMenuSpacerBlock::_vftable__for__SCompoundWidget__;
  }
  TSharedRef<SMenuSpacerBlock,1>::TSharedRef<SMenuSpacerBlock,1>
            ((TSharedRef<SMenuSpacerBlock,1> *)(local_48 + 0x10),(SMenuSpacerBlock *)(pTVar3 + 1),
             pTVar3);
  local_48._0_8_ = local_48._16_8_;
  local_48._8_8_ = pTStack_30;
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<SMenuSpacerBlock,RequiredArgs::T0RequiredArgs> *)local_48) {
    (__return_storage_ptr__->_Widget).Object = (SMenuSpacerBlock *)local_48._16_8_;
    local_48._0_8_ = (SMenuSpacerBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_48 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  if ((__return_storage_ptr__->_Widget).Object == (SMenuSpacerBlock *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<SMenuSpacerBlock,RequiredArgs::T0RequiredArgs> *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->field_0x8,param_1,param_2,
             param_3,0x2e8);
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SMultiBoxWidget,RequiredArgs::T0RequiredArgs> @ 1427a56b0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSlateDecl<SMultiBoxWidget,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SMultiBoxWidget,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SMultiBoxWidget,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SMultiBoxWidget,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SMultiBoxWidget,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SNotificationList,RequiredArgs::T0RequiredArgs> @ 1427a5760

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SNotificationList,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SNotificationList,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SNotificationList,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SNotificationList,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SNotificationList,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SPrioritizedWrapBox,RequiredArgs::T0RequiredArgs> @ 1427a5810

TSlateDecl<SPrioritizedWrapBox,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SPrioritizedWrapBox,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SPrioritizedWrapBox,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SPrioritizedWrapBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SPrioritizedWrapBox,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SScrollBox,RequiredArgs::T0RequiredArgs> @ 1427a58c0

TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SScrollBox,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,char *param_1
          ,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SSearchBox,RequiredArgs::T0RequiredArgs> @ 1427a5970

TSlateDecl<SSearchBox,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SSearchBox,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SSearchBox,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,char *param_1
          ,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SSearchBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSearchBox,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SSeparator,RequiredArgs::T0RequiredArgs> @ 1427a5a20

TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SSeparator,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,char *param_1
          ,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SSubMenuButton,RequiredArgs::T0RequiredArgs> @ 1427a5ad0

TSlateDecl<SSubMenuButton,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SSubMenuButton,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SSubMenuButton,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SSubMenuButton,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSubMenuButton,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SToolBarButtonBlock,RequiredArgs::T0RequiredArgs> @ 1427a5b80

TSlateDecl<SToolBarButtonBlock,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SToolBarButtonBlock,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SToolBarButtonBlock,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<SToolBarButtonBlock,RequiredArgs::T0RequiredArgs> *pTVar4;
  FLLMScope local_res8 [2];
  FName local_58;
  FMemScope local_50;
  undefined1 local_48 [24];
  TReferenceControllerBase<1> *pTStack_30;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_58 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_50,&local_58,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (SToolBarButtonBlock *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x350);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSToolBarButtonBlock___00_SharedPointerInternals__6B_;
    memset(pTVar3 + 1,0,0x340);
    SToolBarButtonBlock::SToolBarButtonBlock((SToolBarButtonBlock *)(pTVar3 + 1));
  }
  TSharedRef<SToolBarButtonBlock,1>::TSharedRef<SToolBarButtonBlock,1>
            ((TSharedRef<SToolBarButtonBlock,1> *)(local_48 + 0x10),
             (SToolBarButtonBlock *)(pTVar3 + 1),pTVar3);
  local_48._0_8_ = local_48._16_8_;
  local_48._8_8_ = pTStack_30;
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<SToolBarButtonBlock,RequiredArgs::T0RequiredArgs> *)local_48) {
    (__return_storage_ptr__->_Widget).Object = (SToolBarButtonBlock *)local_48._16_8_;
    local_48._0_8_ = (SToolBarButtonBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_48 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  if ((__return_storage_ptr__->_Widget).Object == (SToolBarButtonBlock *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<SToolBarButtonBlock,RequiredArgs::T0RequiredArgs> *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x340);
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SToolBarComboButtonBlock,RequiredArgs::T0RequiredArgs> @ 1427a5d30

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSlateDecl<SToolBarComboButtonBlock,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SToolBarComboButtonBlock,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SToolBarComboButtonBlock,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__
          ,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<SToolBarComboButtonBlock,RequiredArgs::T0RequiredArgs> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FLLMScope local_res8 [2];
  FName local_58;
  FMemScope local_50;
  undefined1 local_48 [24];
  TReferenceControllerBase<1> *pTStack_30;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_58 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_50,&local_58,true);
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (SToolBarComboButtonBlock *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x390);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSToolBarComboButtonBlock___00_SharedPointerInternals__6B_
    ;
    memset(pTVar3 + 1,0,0x380);
    SMultiBlockBaseWidget::SMultiBlockBaseWidget((SMultiBlockBaseWidget *)(pTVar3 + 1));
    pTVar3[1]._padding_ =
         (longlong)&SToolBarComboButtonBlock::_vftable__for__IMultiBlockBaseWidget__;
    pTVar3[0x2f].SharedReferenceCount.field_0x1 = 0;
    *(undefined ***)&pTVar3[1].SharedReferenceCount =
         &SToolBarComboButtonBlock::_vftable__for__SCompoundWidget__;
    FSlateIcon::FSlateIcon((FSlateIcon *)(pTVar3 + 0x30));
    *(undefined1 *)&pTVar3[0x32]._padding_ = 0;
    pTVar3[0x33].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x33].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x32].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x32].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x33]._padding_ = 0;
    pTVar3[0x34].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x34].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x35]._padding_ = 0;
    pTVar3[0x35].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x35].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x36]._padding_ = 0;
    pTVar3[0x36].SharedReferenceCount = (atomic<int>)0x3f800000;
    pTVar3[0x36].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[0x37]._padding_ = 0x3f800000;
    *(undefined4 *)((longlong)&pTVar3[0x37]._padding_ + 4) = 0x3f800000;
    *(undefined1 *)&pTVar3[0x37].SharedReferenceCount = 0;
    pTVar3[0x38]._padding_ = 0;
    pTVar3[0x38].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x38].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5 = pTVar3;
  }
  TSharedRef<SToolBarComboButtonBlock,1>::TSharedRef<SToolBarComboButtonBlock,1>
            ((TSharedRef<SToolBarComboButtonBlock,1> *)(local_48 + 0x10),
             (SToolBarComboButtonBlock *)(pTVar5 + 1),pTVar5);
  local_48._0_8_ = local_48._16_8_;
  local_48._8_8_ = pTStack_30;
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<SToolBarComboButtonBlock,RequiredArgs::T0RequiredArgs> *)local_48) {
    (__return_storage_ptr__->_Widget).Object = (SToolBarComboButtonBlock *)local_48._16_8_;
    local_48._0_8_ = (SToolBarComboButtonBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_48 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  if (((__return_storage_ptr__->_Widget).Object == (SToolBarComboButtonBlock *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSlateDecl<SToolBarComboButtonBlock,RequiredArgs::T0RequiredArgs> *)(*pcVar1)();
    return pTVar4;
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x380);
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SToolBarSeparatorBlock,RequiredArgs::T0RequiredArgs> @ 1427a5f80

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSlateDecl<SToolBarSeparatorBlock,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SToolBarSeparatorBlock,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SToolBarSeparatorBlock,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<SToolBarSeparatorBlock,RequiredArgs::T0RequiredArgs> *pTVar4;
  FLLMScope local_res8 [2];
  FName local_58;
  FMemScope local_50;
  undefined1 local_48 [24];
  TReferenceControllerBase<1> *pTStack_30;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_58 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_50,&local_58,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (SToolBarSeparatorBlock *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x2f8);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSToolBarSeparatorBlock___00_SharedPointerInternals__6B_
    ;
    memset(pTVar3 + 1,0,0x2e8);
    SMultiBlockBaseWidget::SMultiBlockBaseWidget((SMultiBlockBaseWidget *)(pTVar3 + 1));
    pTVar3[1]._padding_ = (longlong)&SToolBarSeparatorBlock::_vftable__for__IMultiBlockBaseWidget__;
    *(undefined ***)&pTVar3[1].SharedReferenceCount =
         &SToolBarSeparatorBlock::_vftable__for__SCompoundWidget__;
  }
  TSharedRef<SToolBarSeparatorBlock,1>::TSharedRef<SToolBarSeparatorBlock,1>
            ((TSharedRef<SToolBarSeparatorBlock,1> *)(local_48 + 0x10),
             (SToolBarSeparatorBlock *)(pTVar3 + 1),pTVar3);
  local_48._0_8_ = local_48._16_8_;
  local_48._8_8_ = pTStack_30;
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<SToolBarSeparatorBlock,RequiredArgs::T0RequiredArgs> *)local_48) {
    (__return_storage_ptr__->_Widget).Object = (SToolBarSeparatorBlock *)local_48._16_8_;
    local_48._0_8_ = (SToolBarSeparatorBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_48 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  if ((__return_storage_ptr__->_Widget).Object == (SToolBarSeparatorBlock *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<SToolBarSeparatorBlock,RequiredArgs::T0RequiredArgs> *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->field_0x8,param_1,param_2,
             param_3,0x2e8);
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SToolBarStackButtonBlock,RequiredArgs::T0RequiredArgs> @ 1427a6150

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSlateDecl<SToolBarStackButtonBlock,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SToolBarStackButtonBlock,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SToolBarStackButtonBlock,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__
          ,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<SToolBarStackButtonBlock,RequiredArgs::T0RequiredArgs> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FLLMScope local_res8 [2];
  FName local_58;
  FMemScope local_50;
  undefined1 local_48 [24];
  TReferenceControllerBase<1> *pTStack_30;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_58 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_50,&local_58,true);
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (SToolBarStackButtonBlock *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x388);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSToolBarStackButtonBlock___00_SharedPointerInternals__6B_
    ;
    memset(pTVar3 + 1,0,0x378);
    SMultiBlockBaseWidget::SMultiBlockBaseWidget((SMultiBlockBaseWidget *)(pTVar3 + 1));
    pTVar3[1]._padding_ =
         (longlong)&SToolBarStackButtonBlock::_vftable__for__IMultiBlockBaseWidget__;
    pTVar3[0x2f].SharedReferenceCount.field_0x1 = 0;
    *(undefined ***)&pTVar3[1].SharedReferenceCount =
         &SToolBarStackButtonBlock::_vftable__for__SCompoundWidget__;
    *(undefined2 *)&pTVar3[0x30]._padding_ = 0x19;
    pTVar3[0x31].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x31].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x30].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x30].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x31]._padding_ = 0;
    FSlateIcon::FSlateIcon((FSlateIcon *)(pTVar3 + 0x32));
    *(undefined1 *)&pTVar3[0x34]._padding_ = 0;
    pTVar3[0x35].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x35].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x34].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x34].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x35]._padding_ = 0;
    pTVar3[0x36]._padding_ = 0;
    pTVar3[0x36].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x36].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x37]._padding_ = 0x3f800000;
    pTVar3[0x37].SharedReferenceCount = (atomic<int>)0x3f800000;
    pTVar3[0x37].WeakReferenceCount = (atomic<int>)0x3f800000;
    *(undefined1 *)&pTVar3[0x38]._padding_ = 0;
    pTVar5 = pTVar3;
  }
  TSharedRef<SToolBarStackButtonBlock,1>::TSharedRef<SToolBarStackButtonBlock,1>
            ((TSharedRef<SToolBarStackButtonBlock,1> *)(local_48 + 0x10),
             (SToolBarStackButtonBlock *)(pTVar5 + 1),pTVar5);
  local_48._0_8_ = local_48._16_8_;
  local_48._8_8_ = pTStack_30;
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<SToolBarStackButtonBlock,RequiredArgs::T0RequiredArgs> *)local_48) {
    (__return_storage_ptr__->_Widget).Object = (SToolBarStackButtonBlock *)local_48._16_8_;
    local_48._0_8_ = (SToolBarStackButtonBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_48 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  if (((__return_storage_ptr__->_Widget).Object == (SToolBarStackButtonBlock *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSlateDecl<SToolBarStackButtonBlock,RequiredArgs::T0RequiredArgs> *)(*pcVar1)();
    return pTVar4;
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x378);
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SUniformToolbarButtonBlock,RequiredArgs::T0RequiredArgs> @ 1427a63c0

TSlateDecl<SUniformToolbarButtonBlock,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SUniformToolbarButtonBlock,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SUniformToolbarButtonBlock,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<SUniformToolbarButtonBlock,RequiredArgs::T0RequiredArgs> *pTVar4;
  FLLMScope local_res8 [2];
  FName local_58;
  FMemScope local_50;
  undefined1 local_48 [24];
  TReferenceControllerBase<1> *pTStack_30;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_58 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_50,&local_58,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (SUniformToolbarButtonBlock *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x350);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSUniformToolbarButtonBlock___00_SharedPointerInternals__6B_
    ;
    memset(pTVar3 + 1,0,0x340);
    SToolBarButtonBlock::SToolBarButtonBlock((SToolBarButtonBlock *)(pTVar3 + 1));
    pTVar3[1]._padding_ =
         (longlong)&SUniformToolbarButtonBlock::_vftable__for__IMultiBlockBaseWidget__;
    *(undefined ***)&pTVar3[1].SharedReferenceCount =
         &SUniformToolbarButtonBlock::_vftable__for__SCompoundWidget__;
  }
  TSharedRef<SUniformToolbarButtonBlock,1>::TSharedRef<SUniformToolbarButtonBlock,1>
            ((TSharedRef<SUniformToolbarButtonBlock,1> *)(local_48 + 0x10),
             (SUniformToolbarButtonBlock *)(pTVar3 + 1),pTVar3);
  local_48._0_8_ = local_48._16_8_;
  local_48._8_8_ = pTStack_30;
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<SUniformToolbarButtonBlock,RequiredArgs::T0RequiredArgs> *)local_48) {
    (__return_storage_ptr__->_Widget).Object = (SUniformToolbarButtonBlock *)local_48._16_8_;
    local_48._0_8_ = (SUniformToolbarButtonBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_48 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  if ((__return_storage_ptr__->_Widget).Object == (SUniformToolbarButtonBlock *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<SUniformToolbarButtonBlock,RequiredArgs::T0RequiredArgs> *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->field_0x8,param_1,param_2,
             param_3,0x340);
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SUniformWrapPanel,RequiredArgs::T0RequiredArgs> @ 1427a6590

TSlateDecl<SUniformWrapPanel,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SUniformWrapPanel,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SUniformWrapPanel,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SUniformWrapPanel,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SUniformWrapPanel,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SWidgetBlock,RequiredArgs::T0RequiredArgs> @ 1427a6640

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSlateDecl<SWidgetBlock,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SWidgetBlock,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SWidgetBlock,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<SWidgetBlock,RequiredArgs::T0RequiredArgs> *pTVar4;
  FLLMScope local_res8 [2];
  FName local_58;
  FMemScope local_50;
  undefined1 local_48 [24];
  TReferenceControllerBase<1> *pTStack_30;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_58 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_50,&local_58,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (SWidgetBlock *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x2f8);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSWidgetBlock___00_SharedPointerInternals__6B_;
    memset(pTVar3 + 1,0,0x2e8);
    SMultiBlockBaseWidget::SMultiBlockBaseWidget((SMultiBlockBaseWidget *)(pTVar3 + 1));
    pTVar3[1]._padding_ = (longlong)&SWidgetBlock::_vftable__for__IMultiBlockBaseWidget__;
    *(undefined ***)&pTVar3[1].SharedReferenceCount =
         &SWidgetBlock::_vftable__for__SCompoundWidget__;
  }
  TSharedRef<SWidgetBlock,1>::TSharedRef<SWidgetBlock,1>
            ((TSharedRef<SWidgetBlock,1> *)(local_48 + 0x10),(SWidgetBlock *)(pTVar3 + 1),pTVar3);
  local_48._0_8_ = local_48._16_8_;
  local_48._8_8_ = pTStack_30;
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ != (TSlateDecl<SWidgetBlock,RequiredArgs::T0RequiredArgs> *)local_48) {
    (__return_storage_ptr__->_Widget).Object = (SWidgetBlock *)local_48._16_8_;
    local_48._0_8_ = (SWidgetBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_48 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  if ((__return_storage_ptr__->_Widget).Object == (SWidgetBlock *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<SWidgetBlock,RequiredArgs::T0RequiredArgs> *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->field_0x8,param_1,param_2,
             param_3,0x2e8);
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// Merge<UE::Slate::FClippingInfo_*,FIdentityFunctor,TDereferenceWrapper<UE::Slate::FClippingInfo_*,`UE::Slate::PrioritizedResize'::__l17::<lambda_1>_>_> @ 1427a6810

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl
AlgoImpl::
Merge<UE::Slate::FClippingInfo_*,FIdentityFunctor,TDereferenceWrapper<UE::Slate::FClippingInfo_*,_UE::Slate::PrioritizedResize_::__l17::<lambda_1>_>_>
          (FClippingInfo **param_1,int param_2,int param_3,FIdentityFunctor param_4,
          TDereferenceWrapper<UE::Slate::FClippingInfo_*,_void___cdecl_UE::Slate::PrioritizedResize(float,float,FMargin_const_&,int,TArray<UE::Slate::FClippingInfo,TSizedDefaultAllocator<32>_>_&,TOptional<float>_&)_::_17_::<lambda_1>_>
          param_5)

{
  FClippingInfo **ppFVar1;
  FClippingInfo *pFVar2;
  int iVar3;
  int *piVar4;
  FClippingInfo **ppFVar5;
  FClippingInfo **ppFVar7;
  int iVar8;
  FClippingInfo **ppFVar9;
  FClippingInfo **ppFVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int local_48;
  FClippingInfo **ppFVar6;
  
  local_48 = 0;
  if (0 < param_2) {
    do {
      if (param_3 <= param_2) {
        return;
      }
      iVar3 = 0;
      if (0 < param_2 - local_48) {
        uVar12 = param_2 - local_48;
        do {
          iVar11 = (uVar12 >> 1) + iVar3;
          pFVar2 = param_1[(longlong)iVar11 + (longlong)local_48];
          if ((param_1[param_2]->ResizeParams).ClippingPriority.bIsSet == false) {
            piVar4 = &FMenuEntryResizeParams::DefaultClippingPriority;
          }
          else {
            piVar4 = TAttribute<int>::Get(&(param_1[param_2]->ResizeParams).ClippingPriority);
          }
          iVar8 = *piVar4;
          if ((pFVar2->ResizeParams).ClippingPriority.bIsSet == false) {
            piVar4 = &FMenuEntryResizeParams::DefaultClippingPriority;
          }
          else {
            piVar4 = TAttribute<int>::Get(&(pFVar2->ResizeParams).ClippingPriority);
          }
          if (iVar8 <= *piVar4) {
            iVar3 = iVar11 + (uVar12 & 1);
          }
          uVar13 = uVar12 >> 1;
          uVar12 = uVar12 >> 1;
        } while (uVar13 != 0);
      }
      local_48 = local_48 + iVar3;
      if (param_2 <= local_48) {
        return;
      }
      uVar12 = param_3 - param_2;
      iVar3 = 0;
      iVar11 = 0;
      ppFVar1 = param_1 + local_48;
      if (0 < (int)uVar12) {
        do {
          pFVar2 = *ppFVar1;
          uVar13 = uVar12 >> 1;
          if ((param_1[(longlong)(int)(uVar13 + iVar3) + (longlong)param_2]->ResizeParams).
              ClippingPriority.bIsSet == false) {
            piVar4 = &FMenuEntryResizeParams::DefaultClippingPriority;
          }
          else {
            piVar4 = TAttribute<int>::Get
                               (&(param_1[(longlong)(int)(uVar13 + iVar3) + (longlong)param_2]->
                                 ResizeParams).ClippingPriority);
          }
          iVar8 = *piVar4;
          if ((pFVar2->ResizeParams).ClippingPriority.bIsSet == false) {
            piVar4 = &FMenuEntryResizeParams::DefaultClippingPriority;
          }
          else {
            piVar4 = TAttribute<int>::Get(&(pFVar2->ResizeParams).ClippingPriority);
          }
          iVar11 = iVar3;
          if (*piVar4 < iVar8) {
            iVar11 = uVar13 + iVar3 + (uVar12 & 1);
          }
          uVar12 = uVar13;
          iVar3 = iVar11;
        } while (uVar13 != 0);
      }
      iVar8 = (iVar11 - local_48) + param_2;
      iVar3 = param_2 - local_48;
      if ((iVar3 != 0) && (iVar3 < iVar8)) {
        ppFVar5 = ppFVar1 + iVar3;
        ppFVar9 = ppFVar1;
        ppFVar6 = ppFVar1 + iVar3;
        do {
          while( true ) {
            ppFVar7 = ppFVar5 + 1;
            ppFVar10 = ppFVar9 + 1;
            pFVar2 = *ppFVar9;
            *ppFVar9 = *ppFVar5;
            *ppFVar5 = pFVar2;
            ppFVar9 = ppFVar10;
            if (ppFVar7 == ppFVar1 + iVar8) break;
            ppFVar5 = ppFVar7;
            if (ppFVar10 == ppFVar6) {
              ppFVar6 = ppFVar7;
            }
          }
          ppFVar5 = ppFVar6;
        } while (ppFVar10 != ppFVar6);
      }
      local_48 = local_48 + 1 + iVar11;
      param_2 = param_2 + iVar11;
    } while (local_48 < param_2);
  }
  return;
}

// Merge<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,FIdentityFunctor,TDereferenceWrapper<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TLess<void>_>_> @ 1427a6a40

void __cdecl
AlgoImpl::
Merge<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,FIdentityFunctor,TDereferenceWrapper<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TLess<void>_>_>
          (FBlock *param_1,int param_2,int param_3,FIdentityFunctor param_4,
          TDereferenceWrapper<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TLess<void>_>
          param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if (0 < param_2) {
    iVar3 = 0;
    do {
      if (param_3 <= param_2) {
        return;
      }
      iVar5 = 0;
      if (0 < param_2 - iVar3) {
        uVar4 = param_2 - iVar3;
        do {
          iVar1 = (uVar4 >> 1) + iVar5;
          if (param_1[(longlong)iVar1 + (longlong)iVar3].SequentialIndex <=
              param_1[param_2].SequentialIndex) {
            iVar5 = iVar1 + (uVar4 & 1);
          }
          uVar2 = uVar4 >> 1;
          uVar4 = uVar4 >> 1;
        } while (uVar2 != 0);
      }
      iVar3 = iVar3 + iVar5;
      if (param_2 <= iVar3) {
        return;
      }
      iVar5 = 0;
      if (0 < param_3 - param_2) {
        uVar4 = param_3 - param_2;
        iVar5 = 0;
        do {
          uVar2 = uVar4 >> 1;
          if (param_1[(longlong)(int)(uVar2 + iVar5) + (longlong)param_2].SequentialIndex <
              param_1[iVar3].SequentialIndex) {
            iVar5 = uVar2 + iVar5 + (uVar4 & 1);
          }
          uVar4 = uVar2;
        } while (uVar2 != 0);
      }
      RotateInternal<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock>
                (param_1 + iVar3,(iVar5 - iVar3) + param_2,param_2 - iVar3);
      param_2 = param_2 + iVar5;
      iVar3 = iVar3 + 1 + iVar5;
    } while (iVar3 < param_2);
  }
  return;
}

// Merge<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,FIdentityFunctor,TDereferenceWrapper<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,`UE::Slate::PrioritizedWrapBox::FChildArranger::UpdateBlocks'::__l2::<lambda_2>_>_> @ 1427a6b60

void __cdecl
AlgoImpl::
Merge<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,FIdentityFunctor,TDereferenceWrapper<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,_UE::Slate::PrioritizedWrapBox::FChildArranger::UpdateBlocks_::__l2::<lambda_2>_>_>
          (FBlock *param_1,int param_2,int param_3,FIdentityFunctor param_4,
          TDereferenceWrapper<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,_private:_void___cdecl_UE::Slate::PrioritizedWrapBox::FChildArranger::UpdateBlocks(TPanelChildren<SPrioritizedWrapBox::FSlot>_const_&,float)_::_2_::<lambda_2>_>
          param_5)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  FBlock *pFVar4;
  int iVar5;
  uint uVar6;
  FBlock *pFVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  
  if (0 < param_2) {
    iVar9 = 0;
    do {
      if (param_3 <= param_2) {
        return;
      }
      iVar5 = 0;
      pFVar7 = param_1 + param_2;
      if (0 < param_2 - iVar9) {
        uVar8 = param_2 - iVar9;
        do {
          iVar2 = (uVar8 >> 1) + iVar5;
          pFVar4 = param_1 + (longlong)iVar2 + (longlong)iVar9;
          if ((pFVar7->bCanWrap == false) && (pFVar7->bForceNewLine == false)) {
            bVar10 = false;
          }
          else {
            bVar10 = true;
          }
          if ((pFVar4->bCanWrap == false) && (pFVar4->bForceNewLine == false)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar10) {
            bVar10 = false;
            if (bVar3) {
              bVar10 = SBORROW4(pFVar7->SequentialIndex,pFVar4->SequentialIndex);
              iVar1 = pFVar7->SequentialIndex - pFVar4->SequentialIndex;
              goto LAB_1427a6c37;
            }
          }
          else if (bVar3) {
            bVar10 = true;
          }
          else {
            bVar10 = SBORROW4(pFVar7->SequentialIndex,pFVar4->SequentialIndex);
            iVar1 = pFVar7->SequentialIndex - pFVar4->SequentialIndex;
LAB_1427a6c37:
            bVar10 = bVar10 != iVar1 < 0;
          }
          if (!bVar10) {
            iVar5 = iVar2 + (uVar8 & 1);
          }
          uVar6 = uVar8 >> 1;
          uVar8 = uVar8 >> 1;
        } while (uVar6 != 0);
      }
      iVar9 = iVar9 + iVar5;
      if (param_2 <= iVar9) {
        return;
      }
      iVar5 = 0;
      pFVar7 = param_1 + iVar9;
      if (0 < param_3 - param_2) {
        uVar8 = param_3 - param_2;
        iVar5 = 0;
        do {
          uVar6 = uVar8 >> 1;
          pFVar4 = param_1 + (longlong)(int)(uVar6 + iVar5) + (longlong)param_2;
          if ((pFVar4->bCanWrap == false) && (pFVar4->bForceNewLine == false)) {
            bVar10 = false;
          }
          else {
            bVar10 = true;
          }
          if ((pFVar7->bCanWrap == false) && (pFVar7->bForceNewLine == false)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar10) {
            if (bVar3) {
              bVar10 = SBORROW4(pFVar4->SequentialIndex,pFVar7->SequentialIndex);
              iVar2 = pFVar4->SequentialIndex - pFVar7->SequentialIndex;
              goto LAB_1427a6cef;
            }
            bVar10 = false;
          }
          else if (bVar3) {
            bVar10 = true;
          }
          else {
            bVar10 = SBORROW4(pFVar4->SequentialIndex,pFVar7->SequentialIndex);
            iVar2 = pFVar4->SequentialIndex - pFVar7->SequentialIndex;
LAB_1427a6cef:
            bVar10 = bVar10 != iVar2 < 0;
          }
          if (bVar10) {
            iVar5 = uVar6 + iVar5 + (uVar8 & 1);
          }
          uVar8 = uVar6;
        } while (uVar6 != 0);
      }
      RotateInternal<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock>
                (param_1 + iVar9,(iVar5 - iVar9) + param_2,param_2 - iVar9);
      iVar9 = iVar9 + 1 + iVar5;
      param_2 = param_2 + iVar5;
    } while (iVar9 < param_2);
  }
  return;
}

// Merge<UE::Slate::FClippingInfo,FIdentityFunctor,TDereferenceWrapper<UE::Slate::FClippingInfo,`UE::Slate::PrioritizedResize'::__l2::<lambda_2>_>_> @ 1427a6d60

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl
AlgoImpl::
Merge<UE::Slate::FClippingInfo,FIdentityFunctor,TDereferenceWrapper<UE::Slate::FClippingInfo,_UE::Slate::PrioritizedResize_::__l2::<lambda_2>_>_>
          (FClippingInfo *param_1,int param_2,int param_3,FIdentityFunctor param_4,
          TDereferenceWrapper<UE::Slate::FClippingInfo,_void___cdecl_UE::Slate::PrioritizedResize(float,float,FMargin_const_&,int,TArray<UE::Slate::FClippingInfo,TSizedDefaultAllocator<32>_>_&,TOptional<float>_&)_::_2_::<lambda_2>_>
          param_5)

{
  SWidget *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  double dVar21;
  double dVar22;
  TReferenceControllerBase<1> *pTVar23;
  undefined8 uVar24;
  double dVar25;
  bool bVar26;
  undefined1 uVar27;
  short sVar28;
  undefined2 uVar29;
  TOptional<bool> TVar30;
  undefined4 uVar31;
  bool bVar32;
  bool bVar33;
  undefined5 uVar34;
  int iVar35;
  bool bVar36;
  undefined1 uVar37;
  short sVar38;
  bool bVar39;
  bool bVar40;
  undefined2 uVar41;
  int iVar42;
  bool bVar43;
  bool bVar44;
  undefined2 uVar45;
  int iVar46;
  bool bVar47;
  bool bVar48;
  undefined2 uVar49;
  int iVar50;
  int iVar51;
  bool bVar52;
  undefined1 uVar53;
  short sVar54;
  EWrapMode EVar55;
  bool bVar56;
  undefined2 uVar57;
  int iVar58;
  TOptional<UE::Slate::PrioritizedWrapBox::EVerticalOverflowBehavior> TVar59;
  TOptional<bool> TVar60;
  undefined4 uVar61;
  bool bVar62;
  bool bVar63;
  bool bVar64;
  undefined5 uVar65;
  int iVar66;
  int iVar67;
  int iVar68;
  FClippingInfo *pFVar69;
  FClippingInfo *pFVar71;
  int iVar72;
  uint uVar73;
  uint uVar74;
  FClippingInfo *pFVar75;
  FClippingInfo *pFVar76;
  FClippingInfo *pFVar77;
  FClippingInfo *pFVar70;
  
  if (0 < param_2) {
    iVar72 = 0;
    do {
      if (param_3 <= param_2) {
        return;
      }
      iVar66 = 0;
      if (0 < param_2 - iVar72) {
        uVar73 = param_2 - iVar72;
        iVar67 = 0;
        do {
          uVar74 = uVar73 >> 1;
          iVar66 = uVar74 + iVar67 + (uVar73 & 1);
          if (param_1[param_2].X < param_1[(longlong)(int)(uVar74 + iVar67) + (longlong)iVar72].X) {
            iVar66 = iVar67;
          }
          uVar73 = uVar74;
          iVar67 = iVar66;
        } while (uVar74 != 0);
      }
      iVar72 = iVar72 + iVar66;
      if (param_2 <= iVar72) {
        return;
      }
      iVar66 = 0;
      pFVar75 = param_1 + iVar72;
      if (0 < param_3 - param_2) {
        uVar73 = param_3 - param_2;
        do {
          iVar67 = (uVar73 >> 1) + iVar66;
          if (param_1[(longlong)iVar67 + (longlong)param_2].X <= pFVar75->X &&
              pFVar75->X != param_1[(longlong)iVar67 + (longlong)param_2].X) {
            iVar66 = iVar67 + (uVar73 & 1);
          }
          uVar74 = uVar73 >> 1;
          uVar73 = uVar73 >> 1;
        } while (uVar74 != 0);
      }
      iVar68 = (iVar66 - iVar72) + param_2;
      iVar67 = param_2 - iVar72;
      if ((iVar67 != 0) && (iVar67 < iVar68)) {
        pFVar69 = pFVar75 + iVar67;
        pFVar76 = pFVar75;
        pFVar70 = pFVar75 + iVar67;
        do {
          while( true ) {
            pFVar71 = pFVar69 + 1;
            pFVar77 = pFVar76 + 1;
            pSVar1 = (pFVar76->Widget).Object;
            pTVar2 = (pFVar76->Widget).SharedReferenceCount.ReferenceController;
            iVar35 = (pFVar76->ResizeParams).ClippingPriority.Value;
            bVar36 = (pFVar76->ResizeParams).ClippingPriority.bIsSet;
            uVar37 = (pFVar76->ResizeParams).ClippingPriority.field_0x5;
            sVar38 = (pFVar76->ResizeParams).ClippingPriority._padding_;
            uVar3 = *(undefined8 *)&(pFVar76->ResizeParams).ClippingPriority.Getter;
            uVar4 = *(undefined8 *)&(pFVar76->ResizeParams).ClippingPriority.Getter.field_0x8;
            uVar5 = *(undefined8 *)&(pFVar76->ResizeParams).ClippingPriority.Getter.field_0x10;
            bVar39 = (pFVar76->ResizeParams).AllowClipping.Value;
            bVar40 = (pFVar76->ResizeParams).AllowClipping.bIsSet;
            uVar41 = *(undefined2 *)&(pFVar76->ResizeParams).AllowClipping.field_0x2;
            iVar42 = (pFVar76->ResizeParams).AllowClipping._padding_;
            uVar6 = *(undefined8 *)&(pFVar76->ResizeParams).AllowClipping.Getter;
            uVar7 = *(undefined8 *)&(pFVar76->ResizeParams).AllowClipping.Getter.field_0x8;
            uVar8 = *(undefined8 *)&(pFVar76->ResizeParams).AllowClipping.Getter.field_0x10;
            bVar43 = (pFVar76->ResizeParams).VisibleInOverflow.Value;
            bVar44 = (pFVar76->ResizeParams).VisibleInOverflow.bIsSet;
            uVar45 = *(undefined2 *)&(pFVar76->ResizeParams).VisibleInOverflow.field_0x2;
            iVar46 = (pFVar76->ResizeParams).VisibleInOverflow._padding_;
            uVar9 = *(undefined8 *)&(pFVar76->ResizeParams).VisibleInOverflow.Getter;
            uVar10 = *(undefined8 *)&(pFVar76->ResizeParams).VisibleInOverflow.Getter.field_0x8;
            uVar11 = *(undefined8 *)&(pFVar76->ResizeParams).VisibleInOverflow.Getter.field_0x10;
            bVar47 = (pFVar76->ResizeParams).Wrapping.Allow.Value;
            bVar48 = (pFVar76->ResizeParams).Wrapping.Allow.bIsSet;
            uVar49 = *(undefined2 *)&(pFVar76->ResizeParams).Wrapping.Allow.field_0x2;
            iVar50 = (pFVar76->ResizeParams).Wrapping.Allow._padding_;
            uVar12 = *(undefined8 *)&(pFVar76->ResizeParams).Wrapping.Allow.Getter;
            uVar13 = *(undefined8 *)&(pFVar76->ResizeParams).Wrapping.Allow.Getter.field_0x8;
            uVar14 = *(undefined8 *)&(pFVar76->ResizeParams).Wrapping.Allow.Getter.field_0x10;
            iVar51 = (pFVar76->ResizeParams).Wrapping.Priority.Value;
            bVar52 = (pFVar76->ResizeParams).Wrapping.Priority.bIsSet;
            uVar53 = (pFVar76->ResizeParams).Wrapping.Priority.field_0x5;
            sVar54 = (pFVar76->ResizeParams).Wrapping.Priority._padding_;
            uVar15 = *(undefined8 *)&(pFVar76->ResizeParams).Wrapping.Priority.Getter;
            uVar16 = *(undefined8 *)&(pFVar76->ResizeParams).Wrapping.Priority.Getter.field_0x8;
            uVar17 = *(undefined8 *)&(pFVar76->ResizeParams).Wrapping.Priority.Getter.field_0x10;
            EVar55 = (pFVar76->ResizeParams).Wrapping.Mode.Value;
            bVar56 = (pFVar76->ResizeParams).Wrapping.Mode.bIsSet;
            uVar57 = *(undefined2 *)&(pFVar76->ResizeParams).Wrapping.Mode.field_0x2;
            iVar58 = (pFVar76->ResizeParams).Wrapping.Mode._padding_;
            uVar18 = *(undefined8 *)&(pFVar76->ResizeParams).Wrapping.Mode.Getter;
            uVar19 = *(undefined8 *)&(pFVar76->ResizeParams).Wrapping.Mode.Getter.field_0x8;
            uVar20 = *(undefined8 *)&(pFVar76->ResizeParams).Wrapping.Mode.Getter.field_0x10;
            TVar59 = (pFVar76->ResizeParams).Wrapping.VerticalOverflowBehavior;
            TVar60 = (pFVar76->ResizeParams).Wrapping.ForceNewLine;
            uVar61 = *(undefined4 *)&(pFVar76->ResizeParams).Wrapping.field_0x64;
            dVar21 = pFVar76->X;
            dVar22 = pFVar76->Width;
            bVar62 = pFVar76->bIsStretchable;
            bVar63 = pFVar76->bAppearsInOverflow;
            bVar64 = pFVar76->bWasClipped;
            uVar65 = *(undefined5 *)&pFVar76->field_0xeb;
            pTVar23 = (pFVar69->Widget).SharedReferenceCount.ReferenceController;
            (pFVar76->Widget).Object = (pFVar69->Widget).Object;
            (pFVar76->Widget).SharedReferenceCount.ReferenceController = pTVar23;
            bVar26 = (pFVar69->ResizeParams).ClippingPriority.bIsSet;
            uVar27 = (pFVar69->ResizeParams).ClippingPriority.field_0x5;
            sVar28 = (pFVar69->ResizeParams).ClippingPriority._padding_;
            uVar24 = *(undefined8 *)&(pFVar69->ResizeParams).ClippingPriority.Getter;
            (pFVar76->ResizeParams).ClippingPriority.Value =
                 (pFVar69->ResizeParams).ClippingPriority.Value;
            (pFVar76->ResizeParams).ClippingPriority.bIsSet = bVar26;
            (pFVar76->ResizeParams).ClippingPriority.field_0x5 = uVar27;
            (pFVar76->ResizeParams).ClippingPriority._padding_ = sVar28;
            *(undefined8 *)&(pFVar76->ResizeParams).ClippingPriority.Getter = uVar24;
            uVar24 = *(undefined8 *)&(pFVar69->ResizeParams).ClippingPriority.Getter.field_0x10;
            *(undefined8 *)&(pFVar76->ResizeParams).ClippingPriority.Getter.field_0x8 =
                 *(undefined8 *)&(pFVar69->ResizeParams).ClippingPriority.Getter.field_0x8;
            *(undefined8 *)&(pFVar76->ResizeParams).ClippingPriority.Getter.field_0x10 = uVar24;
            bVar26 = (pFVar69->ResizeParams).AllowClipping.bIsSet;
            uVar29 = *(undefined2 *)&(pFVar69->ResizeParams).AllowClipping.field_0x2;
            iVar67 = (pFVar69->ResizeParams).AllowClipping._padding_;
            uVar24 = *(undefined8 *)&(pFVar69->ResizeParams).AllowClipping.Getter;
            (pFVar76->ResizeParams).AllowClipping.Value =
                 (pFVar69->ResizeParams).AllowClipping.Value;
            (pFVar76->ResizeParams).AllowClipping.bIsSet = bVar26;
            *(undefined2 *)&(pFVar76->ResizeParams).AllowClipping.field_0x2 = uVar29;
            (pFVar76->ResizeParams).AllowClipping._padding_ = iVar67;
            *(undefined8 *)&(pFVar76->ResizeParams).AllowClipping.Getter = uVar24;
            uVar24 = *(undefined8 *)&(pFVar69->ResizeParams).AllowClipping.Getter.field_0x10;
            *(undefined8 *)&(pFVar76->ResizeParams).AllowClipping.Getter.field_0x8 =
                 *(undefined8 *)&(pFVar69->ResizeParams).AllowClipping.Getter.field_0x8;
            *(undefined8 *)&(pFVar76->ResizeParams).AllowClipping.Getter.field_0x10 = uVar24;
            bVar26 = (pFVar69->ResizeParams).VisibleInOverflow.bIsSet;
            uVar29 = *(undefined2 *)&(pFVar69->ResizeParams).VisibleInOverflow.field_0x2;
            iVar67 = (pFVar69->ResizeParams).VisibleInOverflow._padding_;
            uVar24 = *(undefined8 *)&(pFVar69->ResizeParams).VisibleInOverflow.Getter;
            (pFVar76->ResizeParams).VisibleInOverflow.Value =
                 (pFVar69->ResizeParams).VisibleInOverflow.Value;
            (pFVar76->ResizeParams).VisibleInOverflow.bIsSet = bVar26;
            *(undefined2 *)&(pFVar76->ResizeParams).VisibleInOverflow.field_0x2 = uVar29;
            (pFVar76->ResizeParams).VisibleInOverflow._padding_ = iVar67;
            *(undefined8 *)&(pFVar76->ResizeParams).VisibleInOverflow.Getter = uVar24;
            uVar24 = *(undefined8 *)&(pFVar69->ResizeParams).VisibleInOverflow.Getter.field_0x10;
            *(undefined8 *)&(pFVar76->ResizeParams).VisibleInOverflow.Getter.field_0x8 =
                 *(undefined8 *)&(pFVar69->ResizeParams).VisibleInOverflow.Getter.field_0x8;
            *(undefined8 *)&(pFVar76->ResizeParams).VisibleInOverflow.Getter.field_0x10 = uVar24;
            bVar26 = (pFVar69->ResizeParams).Wrapping.Allow.bIsSet;
            uVar29 = *(undefined2 *)&(pFVar69->ResizeParams).Wrapping.Allow.field_0x2;
            iVar67 = (pFVar69->ResizeParams).Wrapping.Allow._padding_;
            uVar24 = *(undefined8 *)&(pFVar69->ResizeParams).Wrapping.Allow.Getter;
            (pFVar76->ResizeParams).Wrapping.Allow.Value =
                 (pFVar69->ResizeParams).Wrapping.Allow.Value;
            (pFVar76->ResizeParams).Wrapping.Allow.bIsSet = bVar26;
            *(undefined2 *)&(pFVar76->ResizeParams).Wrapping.Allow.field_0x2 = uVar29;
            (pFVar76->ResizeParams).Wrapping.Allow._padding_ = iVar67;
            *(undefined8 *)&(pFVar76->ResizeParams).Wrapping.Allow.Getter = uVar24;
            uVar24 = *(undefined8 *)&(pFVar69->ResizeParams).Wrapping.Allow.Getter.field_0x10;
            *(undefined8 *)&(pFVar76->ResizeParams).Wrapping.Allow.Getter.field_0x8 =
                 *(undefined8 *)&(pFVar69->ResizeParams).Wrapping.Allow.Getter.field_0x8;
            *(undefined8 *)&(pFVar76->ResizeParams).Wrapping.Allow.Getter.field_0x10 = uVar24;
            bVar26 = (pFVar69->ResizeParams).Wrapping.Priority.bIsSet;
            uVar27 = (pFVar69->ResizeParams).Wrapping.Priority.field_0x5;
            sVar28 = (pFVar69->ResizeParams).Wrapping.Priority._padding_;
            uVar24 = *(undefined8 *)&(pFVar69->ResizeParams).Wrapping.Priority.Getter;
            (pFVar76->ResizeParams).Wrapping.Priority.Value =
                 (pFVar69->ResizeParams).Wrapping.Priority.Value;
            (pFVar76->ResizeParams).Wrapping.Priority.bIsSet = bVar26;
            (pFVar76->ResizeParams).Wrapping.Priority.field_0x5 = uVar27;
            (pFVar76->ResizeParams).Wrapping.Priority._padding_ = sVar28;
            *(undefined8 *)&(pFVar76->ResizeParams).Wrapping.Priority.Getter = uVar24;
            uVar24 = *(undefined8 *)&(pFVar69->ResizeParams).Wrapping.Priority.Getter.field_0x10;
            *(undefined8 *)&(pFVar76->ResizeParams).Wrapping.Priority.Getter.field_0x8 =
                 *(undefined8 *)&(pFVar69->ResizeParams).Wrapping.Priority.Getter.field_0x8;
            *(undefined8 *)&(pFVar76->ResizeParams).Wrapping.Priority.Getter.field_0x10 = uVar24;
            bVar26 = (pFVar69->ResizeParams).Wrapping.Mode.bIsSet;
            uVar29 = *(undefined2 *)&(pFVar69->ResizeParams).Wrapping.Mode.field_0x2;
            iVar67 = (pFVar69->ResizeParams).Wrapping.Mode._padding_;
            uVar24 = *(undefined8 *)&(pFVar69->ResizeParams).Wrapping.Mode.Getter;
            (pFVar76->ResizeParams).Wrapping.Mode.Value =
                 (pFVar69->ResizeParams).Wrapping.Mode.Value;
            (pFVar76->ResizeParams).Wrapping.Mode.bIsSet = bVar26;
            *(undefined2 *)&(pFVar76->ResizeParams).Wrapping.Mode.field_0x2 = uVar29;
            (pFVar76->ResizeParams).Wrapping.Mode._padding_ = iVar67;
            *(undefined8 *)&(pFVar76->ResizeParams).Wrapping.Mode.Getter = uVar24;
            uVar24 = *(undefined8 *)&(pFVar69->ResizeParams).Wrapping.Mode.Getter.field_0x10;
            *(undefined8 *)&(pFVar76->ResizeParams).Wrapping.Mode.Getter.field_0x8 =
                 *(undefined8 *)&(pFVar69->ResizeParams).Wrapping.Mode.Getter.field_0x8;
            *(undefined8 *)&(pFVar76->ResizeParams).Wrapping.Mode.Getter.field_0x10 = uVar24;
            TVar30 = (pFVar69->ResizeParams).Wrapping.ForceNewLine;
            uVar31 = *(undefined4 *)&(pFVar69->ResizeParams).Wrapping.field_0x64;
            dVar25 = pFVar69->X;
            (pFVar76->ResizeParams).Wrapping.VerticalOverflowBehavior =
                 (pFVar69->ResizeParams).Wrapping.VerticalOverflowBehavior;
            (pFVar76->ResizeParams).Wrapping.ForceNewLine = TVar30;
            *(undefined4 *)&(pFVar76->ResizeParams).Wrapping.field_0x64 = uVar31;
            pFVar76->X = dVar25;
            bVar26 = pFVar69->bIsStretchable;
            bVar32 = pFVar69->bAppearsInOverflow;
            bVar33 = pFVar69->bWasClipped;
            uVar34 = *(undefined5 *)&pFVar69->field_0xeb;
            pFVar76->Width = pFVar69->Width;
            pFVar76->bIsStretchable = bVar26;
            pFVar76->bAppearsInOverflow = bVar32;
            pFVar76->bWasClipped = bVar33;
            *(undefined5 *)&pFVar76->field_0xeb = uVar34;
            (pFVar69->Widget).Object = pSVar1;
            (pFVar69->Widget).SharedReferenceCount.ReferenceController = pTVar2;
            (pFVar69->ResizeParams).ClippingPriority.Value = iVar35;
            (pFVar69->ResizeParams).ClippingPriority.bIsSet = bVar36;
            (pFVar69->ResizeParams).ClippingPriority.field_0x5 = uVar37;
            (pFVar69->ResizeParams).ClippingPriority._padding_ = sVar38;
            *(undefined8 *)&(pFVar69->ResizeParams).ClippingPriority.Getter = uVar3;
            *(undefined8 *)&(pFVar69->ResizeParams).ClippingPriority.Getter.field_0x8 = uVar4;
            *(undefined8 *)&(pFVar69->ResizeParams).ClippingPriority.Getter.field_0x10 = uVar5;
            (pFVar69->ResizeParams).AllowClipping.Value = bVar39;
            (pFVar69->ResizeParams).AllowClipping.bIsSet = bVar40;
            *(undefined2 *)&(pFVar69->ResizeParams).AllowClipping.field_0x2 = uVar41;
            (pFVar69->ResizeParams).AllowClipping._padding_ = iVar42;
            *(undefined8 *)&(pFVar69->ResizeParams).AllowClipping.Getter = uVar6;
            *(undefined8 *)&(pFVar69->ResizeParams).AllowClipping.Getter.field_0x8 = uVar7;
            *(undefined8 *)&(pFVar69->ResizeParams).AllowClipping.Getter.field_0x10 = uVar8;
            (pFVar69->ResizeParams).VisibleInOverflow.Value = bVar43;
            (pFVar69->ResizeParams).VisibleInOverflow.bIsSet = bVar44;
            *(undefined2 *)&(pFVar69->ResizeParams).VisibleInOverflow.field_0x2 = uVar45;
            (pFVar69->ResizeParams).VisibleInOverflow._padding_ = iVar46;
            *(undefined8 *)&(pFVar69->ResizeParams).VisibleInOverflow.Getter = uVar9;
            *(undefined8 *)&(pFVar69->ResizeParams).VisibleInOverflow.Getter.field_0x8 = uVar10;
            *(undefined8 *)&(pFVar69->ResizeParams).VisibleInOverflow.Getter.field_0x10 = uVar11;
            (pFVar69->ResizeParams).Wrapping.Allow.Value = bVar47;
            (pFVar69->ResizeParams).Wrapping.Allow.bIsSet = bVar48;
            *(undefined2 *)&(pFVar69->ResizeParams).Wrapping.Allow.field_0x2 = uVar49;
            (pFVar69->ResizeParams).Wrapping.Allow._padding_ = iVar50;
            *(undefined8 *)&(pFVar69->ResizeParams).Wrapping.Allow.Getter = uVar12;
            *(undefined8 *)&(pFVar69->ResizeParams).Wrapping.Allow.Getter.field_0x8 = uVar13;
            *(undefined8 *)&(pFVar69->ResizeParams).Wrapping.Allow.Getter.field_0x10 = uVar14;
            (pFVar69->ResizeParams).Wrapping.Priority.Value = iVar51;
            (pFVar69->ResizeParams).Wrapping.Priority.bIsSet = bVar52;
            (pFVar69->ResizeParams).Wrapping.Priority.field_0x5 = uVar53;
            (pFVar69->ResizeParams).Wrapping.Priority._padding_ = sVar54;
            *(undefined8 *)&(pFVar69->ResizeParams).Wrapping.Priority.Getter = uVar15;
            *(undefined8 *)&(pFVar69->ResizeParams).Wrapping.Priority.Getter.field_0x8 = uVar16;
            *(undefined8 *)&(pFVar69->ResizeParams).Wrapping.Priority.Getter.field_0x10 = uVar17;
            (pFVar69->ResizeParams).Wrapping.Mode.Value = EVar55;
            (pFVar69->ResizeParams).Wrapping.Mode.bIsSet = bVar56;
            *(undefined2 *)&(pFVar69->ResizeParams).Wrapping.Mode.field_0x2 = uVar57;
            (pFVar69->ResizeParams).Wrapping.Mode._padding_ = iVar58;
            *(undefined8 *)&(pFVar69->ResizeParams).Wrapping.Mode.Getter = uVar18;
            *(undefined8 *)&(pFVar69->ResizeParams).Wrapping.Mode.Getter.field_0x8 = uVar19;
            *(undefined8 *)&(pFVar69->ResizeParams).Wrapping.Mode.Getter.field_0x10 = uVar20;
            (pFVar69->ResizeParams).Wrapping.VerticalOverflowBehavior = TVar59;
            (pFVar69->ResizeParams).Wrapping.ForceNewLine = TVar60;
            *(undefined4 *)&(pFVar69->ResizeParams).Wrapping.field_0x64 = uVar61;
            pFVar69->X = dVar21;
            pFVar69->Width = dVar22;
            pFVar69->bIsStretchable = bVar62;
            pFVar69->bAppearsInOverflow = bVar63;
            pFVar69->bWasClipped = bVar64;
            *(undefined5 *)&pFVar69->field_0xeb = uVar65;
            pFVar76 = pFVar77;
            if (pFVar71 == pFVar75 + iVar68) break;
            pFVar69 = pFVar71;
            if (pFVar77 == pFVar70) {
              pFVar70 = pFVar71;
            }
          }
          pFVar69 = pFVar70;
        } while (pFVar77 != pFVar70);
      }
      param_2 = param_2 + iVar66;
      iVar72 = iVar72 + 1 + iVar66;
    } while (iVar72 < param_2);
  }
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<`ArrangeChildrenInStack<0,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>,UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy>'::__l2::FStretchItem>_> @ 1427a76d0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<_ArrangeChildrenInStack<0,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>,UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy>_::__l2::FStretchItem>_>
          (ushort param_1,
          ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>,UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy>(EFlowDirection,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x11) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<`ArrangeChildrenInStack<0,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>,UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy>'::__l2::FStretchItem>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<`ArrangeChildrenInStack<0,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>,UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy>'::__l2::FStretchItem>_> @ 1427a7820

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<_ArrangeChildrenInStack<0,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>,UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy>_::__l2::FStretchItem>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>,UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy>(EFlowDirection,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
          *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x11) {
      iVar1 = 0x10;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<`ArrangeChildrenInStack<0,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>,UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy>'::__l2::FStretchItem>
    ::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// RotateInternal<UE::Slate::FClippingInfo_*> @ 1427a7c10

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

int __cdecl
AlgoImpl::RotateInternal<UE::Slate::FClippingInfo_*>
          (FClippingInfo **param_1,int param_2,int param_3)

{
  FClippingInfo *pFVar1;
  FClippingInfo **ppFVar2;
  FClippingInfo **ppFVar4;
  FClippingInfo **ppFVar5;
  FClippingInfo **ppFVar6;
  FClippingInfo **ppFVar3;
  
  if (param_3 != 0) {
    if (param_2 <= param_3) {
      return 0;
    }
    ppFVar2 = param_1 + param_3;
    ppFVar5 = param_1;
    ppFVar3 = param_1 + param_3;
    do {
      while( true ) {
        ppFVar4 = ppFVar2 + 1;
        ppFVar6 = ppFVar5 + 1;
        pFVar1 = *ppFVar5;
        *ppFVar5 = *ppFVar2;
        *ppFVar2 = pFVar1;
        ppFVar5 = ppFVar6;
        if (ppFVar4 == param_1 + param_2) break;
        ppFVar2 = ppFVar4;
        if (ppFVar6 == ppFVar3) {
          ppFVar3 = ppFVar4;
        }
      }
      ppFVar2 = ppFVar3;
    } while (ppFVar6 != ppFVar3);
    param_2 = param_2 - param_3;
  }
  return param_2;
}

// RotateInternal<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock> @ 1427a7c90

int __cdecl
AlgoImpl::RotateInternal<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock>
          (FBlock *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ForElementType<int> FVar13;
  ForElementType<int> FVar14;
  int iVar15;
  float fVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  int iVar21;
  int iVar22;
  FBlock *pFVar23;
  FBlock *pFVar25;
  FBlock *pFVar26;
  FBlock *pFVar27;
  FBlock *pFVar24;
  
  if (param_3 != 0) {
    if (param_2 <= param_3) {
      return 0;
    }
    pFVar23 = param_1 + param_3;
    pFVar26 = param_1;
    pFVar24 = param_1 + param_3;
    do {
      while( true ) {
        pFVar25 = pFVar23 + 1;
        pFVar27 = pFVar26 + 1;
        iVar21 = (pFVar26->SlotIndices).ArrayNum;
        iVar22 = (pFVar26->SlotIndices).ArrayMax;
        iVar15 = pFVar23->WrapPriority;
        uVar1 = *(undefined8 *)&pFVar23->bCanWrap;
        iVar17 = pFVar26->SequentialIndex;
        iVar18 = pFVar26->WrapPriority;
        uVar2 = *(undefined8 *)&pFVar26->bCanWrap;
        uVar3 = *(undefined8 *)((longlong)&(pFVar26->DesiredSize).field0_0x0 + 4);
        uVar4 = *(undefined8 *)((longlong)&(pFVar26->AdjustedSize).field0_0x0 + 4);
        fVar19 = pFVar26->ReserveLength;
        fVar20 = pFVar26->Area;
        uVar5 = *(undefined8 *)(pFVar26->SlotIndices).AllocatorInstance.InlineData;
        uVar6 = *(undefined8 *)((pFVar26->SlotIndices).AllocatorInstance.InlineData + 8);
        uVar7 = *(undefined8 *)((pFVar26->SlotIndices).AllocatorInstance.InlineData + 0x10);
        uVar8 = *(undefined8 *)((pFVar26->SlotIndices).AllocatorInstance.InlineData + 0x18);
        uVar9 = *(undefined8 *)((pFVar26->SlotIndices).AllocatorInstance.InlineData + 0x20);
        uVar10 = *(undefined8 *)((pFVar26->SlotIndices).AllocatorInstance.InlineData + 0x28);
        uVar11 = *(undefined8 *)((pFVar26->SlotIndices).AllocatorInstance.InlineData + 0x30);
        uVar12 = *(undefined8 *)((pFVar26->SlotIndices).AllocatorInstance.InlineData + 0x38);
        FVar13 = (pFVar26->SlotIndices).AllocatorInstance.SecondaryData;
        pFVar26->SequentialIndex = pFVar23->SequentialIndex;
        pFVar26->WrapPriority = iVar15;
        *(undefined8 *)&pFVar26->bCanWrap = uVar1;
        uVar1 = *(undefined8 *)((longlong)&(pFVar23->AdjustedSize).field0_0x0 + 4);
        *(undefined8 *)((longlong)&(pFVar26->DesiredSize).field0_0x0 + 4) =
             *(undefined8 *)((longlong)&(pFVar23->DesiredSize).field0_0x0 + 4);
        *(undefined8 *)((longlong)&(pFVar26->AdjustedSize).field0_0x0 + 4) = uVar1;
        fVar16 = pFVar23->Area;
        uVar1 = *(undefined8 *)(pFVar23->SlotIndices).AllocatorInstance.InlineData;
        pFVar26->ReserveLength = pFVar23->ReserveLength;
        pFVar26->Area = fVar16;
        *(undefined8 *)(pFVar26->SlotIndices).AllocatorInstance.InlineData = uVar1;
        uVar1 = *(undefined8 *)((pFVar23->SlotIndices).AllocatorInstance.InlineData + 0x10);
        *(undefined8 *)((pFVar26->SlotIndices).AllocatorInstance.InlineData + 8) =
             *(undefined8 *)((pFVar23->SlotIndices).AllocatorInstance.InlineData + 8);
        *(undefined8 *)((pFVar26->SlotIndices).AllocatorInstance.InlineData + 0x10) = uVar1;
        uVar1 = *(undefined8 *)((pFVar23->SlotIndices).AllocatorInstance.InlineData + 0x20);
        *(undefined8 *)((pFVar26->SlotIndices).AllocatorInstance.InlineData + 0x18) =
             *(undefined8 *)((pFVar23->SlotIndices).AllocatorInstance.InlineData + 0x18);
        *(undefined8 *)((pFVar26->SlotIndices).AllocatorInstance.InlineData + 0x20) = uVar1;
        uVar1 = *(undefined8 *)((pFVar23->SlotIndices).AllocatorInstance.InlineData + 0x30);
        *(undefined8 *)((pFVar26->SlotIndices).AllocatorInstance.InlineData + 0x28) =
             *(undefined8 *)((pFVar23->SlotIndices).AllocatorInstance.InlineData + 0x28);
        *(undefined8 *)((pFVar26->SlotIndices).AllocatorInstance.InlineData + 0x30) = uVar1;
        FVar14 = (pFVar23->SlotIndices).AllocatorInstance.SecondaryData;
        *(undefined8 *)((pFVar26->SlotIndices).AllocatorInstance.InlineData + 0x38) =
             *(undefined8 *)((pFVar23->SlotIndices).AllocatorInstance.InlineData + 0x38);
        (pFVar26->SlotIndices).AllocatorInstance.SecondaryData = FVar14;
        iVar15 = (pFVar23->SlotIndices).ArrayMax;
        (pFVar26->SlotIndices).ArrayNum = (pFVar23->SlotIndices).ArrayNum;
        (pFVar26->SlotIndices).ArrayMax = iVar15;
        pFVar23->SequentialIndex = iVar17;
        pFVar23->WrapPriority = iVar18;
        *(undefined8 *)&pFVar23->bCanWrap = uVar2;
        *(undefined8 *)((longlong)&(pFVar23->DesiredSize).field0_0x0 + 4) = uVar3;
        *(undefined8 *)((longlong)&(pFVar23->AdjustedSize).field0_0x0 + 4) = uVar4;
        pFVar23->ReserveLength = fVar19;
        pFVar23->Area = fVar20;
        *(undefined8 *)(pFVar23->SlotIndices).AllocatorInstance.InlineData = uVar5;
        *(undefined8 *)((pFVar23->SlotIndices).AllocatorInstance.InlineData + 8) = uVar6;
        *(undefined8 *)((pFVar23->SlotIndices).AllocatorInstance.InlineData + 0x10) = uVar7;
        *(undefined8 *)((pFVar23->SlotIndices).AllocatorInstance.InlineData + 0x18) = uVar8;
        *(undefined8 *)((pFVar23->SlotIndices).AllocatorInstance.InlineData + 0x20) = uVar9;
        *(undefined8 *)((pFVar23->SlotIndices).AllocatorInstance.InlineData + 0x28) = uVar10;
        *(undefined8 *)((pFVar23->SlotIndices).AllocatorInstance.InlineData + 0x30) = uVar11;
        *(undefined8 *)((pFVar23->SlotIndices).AllocatorInstance.InlineData + 0x38) = uVar12;
        (pFVar23->SlotIndices).AllocatorInstance.SecondaryData = FVar13;
        (pFVar23->SlotIndices).ArrayNum = iVar21;
        (pFVar23->SlotIndices).ArrayMax = iVar22;
        pFVar26 = pFVar27;
        if (pFVar25 == param_1 + param_2) break;
        pFVar23 = pFVar25;
        if (pFVar27 == pFVar24) {
          pFVar24 = pFVar25;
        }
      }
      pFVar23 = pFVar24;
    } while (pFVar27 != pFVar24);
    param_2 = param_2 - param_3;
  }
  return param_2;
}

// RotateInternal<UE::Slate::FClippingInfo> @ 1427a7dc0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

int __cdecl
AlgoImpl::RotateInternal<UE::Slate::FClippingInfo>(FClippingInfo *param_1,int param_2,int param_3)

{
  SWidget *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  double dVar21;
  double dVar22;
  TReferenceControllerBase<1> *pTVar23;
  undefined8 uVar24;
  double dVar25;
  bool bVar26;
  undefined1 uVar27;
  short sVar28;
  undefined2 uVar29;
  int iVar30;
  TOptional<bool> TVar31;
  undefined4 uVar32;
  bool bVar33;
  bool bVar34;
  undefined5 uVar35;
  int iVar36;
  bool bVar37;
  undefined1 uVar38;
  short sVar39;
  bool bVar40;
  bool bVar41;
  undefined2 uVar42;
  int iVar43;
  bool bVar44;
  bool bVar45;
  undefined2 uVar46;
  int iVar47;
  bool bVar48;
  bool bVar49;
  undefined2 uVar50;
  int iVar51;
  int iVar52;
  bool bVar53;
  undefined1 uVar54;
  short sVar55;
  EWrapMode EVar56;
  bool bVar57;
  undefined2 uVar58;
  int iVar59;
  TOptional<UE::Slate::PrioritizedWrapBox::EVerticalOverflowBehavior> TVar60;
  TOptional<bool> TVar61;
  undefined4 uVar62;
  bool bVar63;
  bool bVar64;
  bool bVar65;
  undefined5 uVar66;
  FClippingInfo *pFVar67;
  FClippingInfo *pFVar69;
  FClippingInfo *pFVar70;
  FClippingInfo *pFVar71;
  FClippingInfo *pFVar68;
  
  if (param_3 != 0) {
    if (param_2 <= param_3) {
      return 0;
    }
    pFVar67 = param_1 + param_3;
    pFVar70 = param_1;
    pFVar68 = param_1 + param_3;
    do {
      while( true ) {
        pFVar69 = pFVar67 + 1;
        pFVar71 = pFVar70 + 1;
        pSVar1 = (pFVar70->Widget).Object;
        pTVar2 = (pFVar70->Widget).SharedReferenceCount.ReferenceController;
        iVar36 = (pFVar70->ResizeParams).ClippingPriority.Value;
        bVar37 = (pFVar70->ResizeParams).ClippingPriority.bIsSet;
        uVar38 = (pFVar70->ResizeParams).ClippingPriority.field_0x5;
        sVar39 = (pFVar70->ResizeParams).ClippingPriority._padding_;
        uVar3 = *(undefined8 *)&(pFVar70->ResizeParams).ClippingPriority.Getter;
        uVar4 = *(undefined8 *)&(pFVar70->ResizeParams).ClippingPriority.Getter.field_0x8;
        uVar5 = *(undefined8 *)&(pFVar70->ResizeParams).ClippingPriority.Getter.field_0x10;
        bVar40 = (pFVar70->ResizeParams).AllowClipping.Value;
        bVar41 = (pFVar70->ResizeParams).AllowClipping.bIsSet;
        uVar42 = *(undefined2 *)&(pFVar70->ResizeParams).AllowClipping.field_0x2;
        iVar43 = (pFVar70->ResizeParams).AllowClipping._padding_;
        uVar6 = *(undefined8 *)&(pFVar70->ResizeParams).AllowClipping.Getter;
        uVar7 = *(undefined8 *)&(pFVar70->ResizeParams).AllowClipping.Getter.field_0x8;
        uVar8 = *(undefined8 *)&(pFVar70->ResizeParams).AllowClipping.Getter.field_0x10;
        bVar44 = (pFVar70->ResizeParams).VisibleInOverflow.Value;
        bVar45 = (pFVar70->ResizeParams).VisibleInOverflow.bIsSet;
        uVar46 = *(undefined2 *)&(pFVar70->ResizeParams).VisibleInOverflow.field_0x2;
        iVar47 = (pFVar70->ResizeParams).VisibleInOverflow._padding_;
        uVar9 = *(undefined8 *)&(pFVar70->ResizeParams).VisibleInOverflow.Getter;
        uVar10 = *(undefined8 *)&(pFVar70->ResizeParams).VisibleInOverflow.Getter.field_0x8;
        uVar11 = *(undefined8 *)&(pFVar70->ResizeParams).VisibleInOverflow.Getter.field_0x10;
        bVar48 = (pFVar70->ResizeParams).Wrapping.Allow.Value;
        bVar49 = (pFVar70->ResizeParams).Wrapping.Allow.bIsSet;
        uVar50 = *(undefined2 *)&(pFVar70->ResizeParams).Wrapping.Allow.field_0x2;
        iVar51 = (pFVar70->ResizeParams).Wrapping.Allow._padding_;
        uVar12 = *(undefined8 *)&(pFVar70->ResizeParams).Wrapping.Allow.Getter;
        uVar13 = *(undefined8 *)&(pFVar70->ResizeParams).Wrapping.Allow.Getter.field_0x8;
        uVar14 = *(undefined8 *)&(pFVar70->ResizeParams).Wrapping.Allow.Getter.field_0x10;
        iVar52 = (pFVar70->ResizeParams).Wrapping.Priority.Value;
        bVar53 = (pFVar70->ResizeParams).Wrapping.Priority.bIsSet;
        uVar54 = (pFVar70->ResizeParams).Wrapping.Priority.field_0x5;
        sVar55 = (pFVar70->ResizeParams).Wrapping.Priority._padding_;
        uVar15 = *(undefined8 *)&(pFVar70->ResizeParams).Wrapping.Priority.Getter;
        uVar16 = *(undefined8 *)&(pFVar70->ResizeParams).Wrapping.Priority.Getter.field_0x8;
        uVar17 = *(undefined8 *)&(pFVar70->ResizeParams).Wrapping.Priority.Getter.field_0x10;
        EVar56 = (pFVar70->ResizeParams).Wrapping.Mode.Value;
        bVar57 = (pFVar70->ResizeParams).Wrapping.Mode.bIsSet;
        uVar58 = *(undefined2 *)&(pFVar70->ResizeParams).Wrapping.Mode.field_0x2;
        iVar59 = (pFVar70->ResizeParams).Wrapping.Mode._padding_;
        uVar18 = *(undefined8 *)&(pFVar70->ResizeParams).Wrapping.Mode.Getter;
        uVar19 = *(undefined8 *)&(pFVar70->ResizeParams).Wrapping.Mode.Getter.field_0x8;
        uVar20 = *(undefined8 *)&(pFVar70->ResizeParams).Wrapping.Mode.Getter.field_0x10;
        TVar60 = (pFVar70->ResizeParams).Wrapping.VerticalOverflowBehavior;
        TVar61 = (pFVar70->ResizeParams).Wrapping.ForceNewLine;
        uVar62 = *(undefined4 *)&(pFVar70->ResizeParams).Wrapping.field_0x64;
        dVar21 = pFVar70->X;
        dVar22 = pFVar70->Width;
        bVar63 = pFVar70->bIsStretchable;
        bVar64 = pFVar70->bAppearsInOverflow;
        bVar65 = pFVar70->bWasClipped;
        uVar66 = *(undefined5 *)&pFVar70->field_0xeb;
        pTVar23 = (pFVar67->Widget).SharedReferenceCount.ReferenceController;
        (pFVar70->Widget).Object = (pFVar67->Widget).Object;
        (pFVar70->Widget).SharedReferenceCount.ReferenceController = pTVar23;
        bVar26 = (pFVar67->ResizeParams).ClippingPriority.bIsSet;
        uVar27 = (pFVar67->ResizeParams).ClippingPriority.field_0x5;
        sVar28 = (pFVar67->ResizeParams).ClippingPriority._padding_;
        uVar24 = *(undefined8 *)&(pFVar67->ResizeParams).ClippingPriority.Getter;
        (pFVar70->ResizeParams).ClippingPriority.Value =
             (pFVar67->ResizeParams).ClippingPriority.Value;
        (pFVar70->ResizeParams).ClippingPriority.bIsSet = bVar26;
        (pFVar70->ResizeParams).ClippingPriority.field_0x5 = uVar27;
        (pFVar70->ResizeParams).ClippingPriority._padding_ = sVar28;
        *(undefined8 *)&(pFVar70->ResizeParams).ClippingPriority.Getter = uVar24;
        uVar24 = *(undefined8 *)&(pFVar67->ResizeParams).ClippingPriority.Getter.field_0x10;
        *(undefined8 *)&(pFVar70->ResizeParams).ClippingPriority.Getter.field_0x8 =
             *(undefined8 *)&(pFVar67->ResizeParams).ClippingPriority.Getter.field_0x8;
        *(undefined8 *)&(pFVar70->ResizeParams).ClippingPriority.Getter.field_0x10 = uVar24;
        bVar26 = (pFVar67->ResizeParams).AllowClipping.bIsSet;
        uVar29 = *(undefined2 *)&(pFVar67->ResizeParams).AllowClipping.field_0x2;
        iVar30 = (pFVar67->ResizeParams).AllowClipping._padding_;
        uVar24 = *(undefined8 *)&(pFVar67->ResizeParams).AllowClipping.Getter;
        (pFVar70->ResizeParams).AllowClipping.Value = (pFVar67->ResizeParams).AllowClipping.Value;
        (pFVar70->ResizeParams).AllowClipping.bIsSet = bVar26;
        *(undefined2 *)&(pFVar70->ResizeParams).AllowClipping.field_0x2 = uVar29;
        (pFVar70->ResizeParams).AllowClipping._padding_ = iVar30;
        *(undefined8 *)&(pFVar70->ResizeParams).AllowClipping.Getter = uVar24;
        uVar24 = *(undefined8 *)&(pFVar67->ResizeParams).AllowClipping.Getter.field_0x10;
        *(undefined8 *)&(pFVar70->ResizeParams).AllowClipping.Getter.field_0x8 =
             *(undefined8 *)&(pFVar67->ResizeParams).AllowClipping.Getter.field_0x8;
        *(undefined8 *)&(pFVar70->ResizeParams).AllowClipping.Getter.field_0x10 = uVar24;
        bVar26 = (pFVar67->ResizeParams).VisibleInOverflow.bIsSet;
        uVar29 = *(undefined2 *)&(pFVar67->ResizeParams).VisibleInOverflow.field_0x2;
        iVar30 = (pFVar67->ResizeParams).VisibleInOverflow._padding_;
        uVar24 = *(undefined8 *)&(pFVar67->ResizeParams).VisibleInOverflow.Getter;
        (pFVar70->ResizeParams).VisibleInOverflow.Value =
             (pFVar67->ResizeParams).VisibleInOverflow.Value;
        (pFVar70->ResizeParams).VisibleInOverflow.bIsSet = bVar26;
        *(undefined2 *)&(pFVar70->ResizeParams).VisibleInOverflow.field_0x2 = uVar29;
        (pFVar70->ResizeParams).VisibleInOverflow._padding_ = iVar30;
        *(undefined8 *)&(pFVar70->ResizeParams).VisibleInOverflow.Getter = uVar24;
        uVar24 = *(undefined8 *)&(pFVar67->ResizeParams).VisibleInOverflow.Getter.field_0x10;
        *(undefined8 *)&(pFVar70->ResizeParams).VisibleInOverflow.Getter.field_0x8 =
             *(undefined8 *)&(pFVar67->ResizeParams).VisibleInOverflow.Getter.field_0x8;
        *(undefined8 *)&(pFVar70->ResizeParams).VisibleInOverflow.Getter.field_0x10 = uVar24;
        bVar26 = (pFVar67->ResizeParams).Wrapping.Allow.bIsSet;
        uVar29 = *(undefined2 *)&(pFVar67->ResizeParams).Wrapping.Allow.field_0x2;
        iVar30 = (pFVar67->ResizeParams).Wrapping.Allow._padding_;
        uVar24 = *(undefined8 *)&(pFVar67->ResizeParams).Wrapping.Allow.Getter;
        (pFVar70->ResizeParams).Wrapping.Allow.Value = (pFVar67->ResizeParams).Wrapping.Allow.Value;
        (pFVar70->ResizeParams).Wrapping.Allow.bIsSet = bVar26;
        *(undefined2 *)&(pFVar70->ResizeParams).Wrapping.Allow.field_0x2 = uVar29;
        (pFVar70->ResizeParams).Wrapping.Allow._padding_ = iVar30;
        *(undefined8 *)&(pFVar70->ResizeParams).Wrapping.Allow.Getter = uVar24;
        uVar24 = *(undefined8 *)&(pFVar67->ResizeParams).Wrapping.Allow.Getter.field_0x10;
        *(undefined8 *)&(pFVar70->ResizeParams).Wrapping.Allow.Getter.field_0x8 =
             *(undefined8 *)&(pFVar67->ResizeParams).Wrapping.Allow.Getter.field_0x8;
        *(undefined8 *)&(pFVar70->ResizeParams).Wrapping.Allow.Getter.field_0x10 = uVar24;
        bVar26 = (pFVar67->ResizeParams).Wrapping.Priority.bIsSet;
        uVar27 = (pFVar67->ResizeParams).Wrapping.Priority.field_0x5;
        sVar28 = (pFVar67->ResizeParams).Wrapping.Priority._padding_;
        uVar24 = *(undefined8 *)&(pFVar67->ResizeParams).Wrapping.Priority.Getter;
        (pFVar70->ResizeParams).Wrapping.Priority.Value =
             (pFVar67->ResizeParams).Wrapping.Priority.Value;
        (pFVar70->ResizeParams).Wrapping.Priority.bIsSet = bVar26;
        (pFVar70->ResizeParams).Wrapping.Priority.field_0x5 = uVar27;
        (pFVar70->ResizeParams).Wrapping.Priority._padding_ = sVar28;
        *(undefined8 *)&(pFVar70->ResizeParams).Wrapping.Priority.Getter = uVar24;
        uVar24 = *(undefined8 *)&(pFVar67->ResizeParams).Wrapping.Priority.Getter.field_0x10;
        *(undefined8 *)&(pFVar70->ResizeParams).Wrapping.Priority.Getter.field_0x8 =
             *(undefined8 *)&(pFVar67->ResizeParams).Wrapping.Priority.Getter.field_0x8;
        *(undefined8 *)&(pFVar70->ResizeParams).Wrapping.Priority.Getter.field_0x10 = uVar24;
        bVar26 = (pFVar67->ResizeParams).Wrapping.Mode.bIsSet;
        uVar29 = *(undefined2 *)&(pFVar67->ResizeParams).Wrapping.Mode.field_0x2;
        iVar30 = (pFVar67->ResizeParams).Wrapping.Mode._padding_;
        uVar24 = *(undefined8 *)&(pFVar67->ResizeParams).Wrapping.Mode.Getter;
        (pFVar70->ResizeParams).Wrapping.Mode.Value = (pFVar67->ResizeParams).Wrapping.Mode.Value;
        (pFVar70->ResizeParams).Wrapping.Mode.bIsSet = bVar26;
        *(undefined2 *)&(pFVar70->ResizeParams).Wrapping.Mode.field_0x2 = uVar29;
        (pFVar70->ResizeParams).Wrapping.Mode._padding_ = iVar30;
        *(undefined8 *)&(pFVar70->ResizeParams).Wrapping.Mode.Getter = uVar24;
        uVar24 = *(undefined8 *)&(pFVar67->ResizeParams).Wrapping.Mode.Getter.field_0x10;
        *(undefined8 *)&(pFVar70->ResizeParams).Wrapping.Mode.Getter.field_0x8 =
             *(undefined8 *)&(pFVar67->ResizeParams).Wrapping.Mode.Getter.field_0x8;
        *(undefined8 *)&(pFVar70->ResizeParams).Wrapping.Mode.Getter.field_0x10 = uVar24;
        TVar31 = (pFVar67->ResizeParams).Wrapping.ForceNewLine;
        uVar32 = *(undefined4 *)&(pFVar67->ResizeParams).Wrapping.field_0x64;
        dVar25 = pFVar67->X;
        (pFVar70->ResizeParams).Wrapping.VerticalOverflowBehavior =
             (pFVar67->ResizeParams).Wrapping.VerticalOverflowBehavior;
        (pFVar70->ResizeParams).Wrapping.ForceNewLine = TVar31;
        *(undefined4 *)&(pFVar70->ResizeParams).Wrapping.field_0x64 = uVar32;
        pFVar70->X = dVar25;
        bVar26 = pFVar67->bIsStretchable;
        bVar33 = pFVar67->bAppearsInOverflow;
        bVar34 = pFVar67->bWasClipped;
        uVar35 = *(undefined5 *)&pFVar67->field_0xeb;
        pFVar70->Width = pFVar67->Width;
        pFVar70->bIsStretchable = bVar26;
        pFVar70->bAppearsInOverflow = bVar33;
        pFVar70->bWasClipped = bVar34;
        *(undefined5 *)&pFVar70->field_0xeb = uVar35;
        (pFVar67->Widget).Object = pSVar1;
        (pFVar67->Widget).SharedReferenceCount.ReferenceController = pTVar2;
        (pFVar67->ResizeParams).ClippingPriority.Value = iVar36;
        (pFVar67->ResizeParams).ClippingPriority.bIsSet = bVar37;
        (pFVar67->ResizeParams).ClippingPriority.field_0x5 = uVar38;
        (pFVar67->ResizeParams).ClippingPriority._padding_ = sVar39;
        *(undefined8 *)&(pFVar67->ResizeParams).ClippingPriority.Getter = uVar3;
        *(undefined8 *)&(pFVar67->ResizeParams).ClippingPriority.Getter.field_0x8 = uVar4;
        *(undefined8 *)&(pFVar67->ResizeParams).ClippingPriority.Getter.field_0x10 = uVar5;
        (pFVar67->ResizeParams).AllowClipping.Value = bVar40;
        (pFVar67->ResizeParams).AllowClipping.bIsSet = bVar41;
        *(undefined2 *)&(pFVar67->ResizeParams).AllowClipping.field_0x2 = uVar42;
        (pFVar67->ResizeParams).AllowClipping._padding_ = iVar43;
        *(undefined8 *)&(pFVar67->ResizeParams).AllowClipping.Getter = uVar6;
        *(undefined8 *)&(pFVar67->ResizeParams).AllowClipping.Getter.field_0x8 = uVar7;
        *(undefined8 *)&(pFVar67->ResizeParams).AllowClipping.Getter.field_0x10 = uVar8;
        (pFVar67->ResizeParams).VisibleInOverflow.Value = bVar44;
        (pFVar67->ResizeParams).VisibleInOverflow.bIsSet = bVar45;
        *(undefined2 *)&(pFVar67->ResizeParams).VisibleInOverflow.field_0x2 = uVar46;
        (pFVar67->ResizeParams).VisibleInOverflow._padding_ = iVar47;
        *(undefined8 *)&(pFVar67->ResizeParams).VisibleInOverflow.Getter = uVar9;
        *(undefined8 *)&(pFVar67->ResizeParams).VisibleInOverflow.Getter.field_0x8 = uVar10;
        *(undefined8 *)&(pFVar67->ResizeParams).VisibleInOverflow.Getter.field_0x10 = uVar11;
        (pFVar67->ResizeParams).Wrapping.Allow.Value = bVar48;
        (pFVar67->ResizeParams).Wrapping.Allow.bIsSet = bVar49;
        *(undefined2 *)&(pFVar67->ResizeParams).Wrapping.Allow.field_0x2 = uVar50;
        (pFVar67->ResizeParams).Wrapping.Allow._padding_ = iVar51;
        *(undefined8 *)&(pFVar67->ResizeParams).Wrapping.Allow.Getter = uVar12;
        *(undefined8 *)&(pFVar67->ResizeParams).Wrapping.Allow.Getter.field_0x8 = uVar13;
        *(undefined8 *)&(pFVar67->ResizeParams).Wrapping.Allow.Getter.field_0x10 = uVar14;
        (pFVar67->ResizeParams).Wrapping.Priority.Value = iVar52;
        (pFVar67->ResizeParams).Wrapping.Priority.bIsSet = bVar53;
        (pFVar67->ResizeParams).Wrapping.Priority.field_0x5 = uVar54;
        (pFVar67->ResizeParams).Wrapping.Priority._padding_ = sVar55;
        *(undefined8 *)&(pFVar67->ResizeParams).Wrapping.Priority.Getter = uVar15;
        *(undefined8 *)&(pFVar67->ResizeParams).Wrapping.Priority.Getter.field_0x8 = uVar16;
        *(undefined8 *)&(pFVar67->ResizeParams).Wrapping.Priority.Getter.field_0x10 = uVar17;
        (pFVar67->ResizeParams).Wrapping.Mode.Value = EVar56;
        (pFVar67->ResizeParams).Wrapping.Mode.bIsSet = bVar57;
        *(undefined2 *)&(pFVar67->ResizeParams).Wrapping.Mode.field_0x2 = uVar58;
        (pFVar67->ResizeParams).Wrapping.Mode._padding_ = iVar59;
        *(undefined8 *)&(pFVar67->ResizeParams).Wrapping.Mode.Getter = uVar18;
        *(undefined8 *)&(pFVar67->ResizeParams).Wrapping.Mode.Getter.field_0x8 = uVar19;
        *(undefined8 *)&(pFVar67->ResizeParams).Wrapping.Mode.Getter.field_0x10 = uVar20;
        (pFVar67->ResizeParams).Wrapping.VerticalOverflowBehavior = TVar60;
        (pFVar67->ResizeParams).Wrapping.ForceNewLine = TVar61;
        *(undefined4 *)&(pFVar67->ResizeParams).Wrapping.field_0x64 = uVar62;
        pFVar67->X = dVar21;
        pFVar67->Width = dVar22;
        pFVar67->bIsStretchable = bVar63;
        pFVar67->bAppearsInOverflow = bVar64;
        pFVar67->bWasClipped = bVar65;
        *(undefined5 *)&pFVar67->field_0xeb = uVar66;
        pFVar70 = pFVar71;
        if (pFVar69 == param_1 + param_2) break;
        pFVar67 = pFVar69;
        if (pFVar71 == pFVar68) {
          pFVar68 = pFVar69;
        }
      }
      pFVar67 = pFVar68;
    } while (pFVar71 != pFVar68);
    param_2 = param_2 - param_3;
  }
  return param_2;
}

// StableSortInternal<UE::Slate::FClippingInfo_*,FIdentityFunctor,TDereferenceWrapper<UE::Slate::FClippingInfo_*,`UE::Slate::PrioritizedResize'::__l17::<lambda_1>_>_> @ 1427a8030

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl
AlgoImpl::
StableSortInternal<UE::Slate::FClippingInfo_*,FIdentityFunctor,TDereferenceWrapper<UE::Slate::FClippingInfo_*,_UE::Slate::PrioritizedResize_::__l17::<lambda_1>_>_>
          (FClippingInfo **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::Slate::FClippingInfo_*,_void___cdecl_UE::Slate::PrioritizedResize(float,float,FMargin_const_&,int,TArray<UE::Slate::FClippingInfo,TSizedDefaultAllocator<32>_>_&,TOptional<float>_&)_::_17_::<lambda_1>_>
          param_4)

{
  int iVar1;
  FClippingInfo *pFVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  
  if (0 < param_2) {
    lVar7 = 0;
    iVar4 = 1;
    do {
      if (iVar4 < param_2) {
        pFVar2 = param_1[lVar7];
        if ((param_1[lVar7 + 1]->ResizeParams).ClippingPriority.bIsSet == false) {
          piVar3 = &FMenuEntryResizeParams::DefaultClippingPriority;
        }
        else {
          piVar3 = TAttribute<int>::Get(&(param_1[lVar7 + 1]->ResizeParams).ClippingPriority);
        }
        iVar1 = *piVar3;
        if ((pFVar2->ResizeParams).ClippingPriority.bIsSet == false) {
          piVar3 = &FMenuEntryResizeParams::DefaultClippingPriority;
        }
        else {
          piVar3 = TAttribute<int>::Get(&(pFVar2->ResizeParams).ClippingPriority);
        }
        if (*piVar3 < iVar1) {
          pFVar2 = param_1[lVar7];
          param_1[lVar7] = param_1[lVar7 + 1];
          param_1[lVar7 + 1] = pFVar2;
        }
      }
      iVar4 = iVar4 + 2;
      lVar7 = lVar7 + 2;
    } while (lVar7 < param_2);
  }
  iVar4 = 2;
  if (2 < param_2) {
    do {
      iVar1 = iVar4 * 2;
      iVar5 = 0;
      iVar6 = param_2;
      do {
        iVar8 = iVar6;
        if (iVar1 <= iVar6) {
          iVar8 = iVar1;
        }
        Merge<UE::Slate::FClippingInfo_*,FIdentityFunctor,TDereferenceWrapper<UE::Slate::FClippingInfo_*,_UE::Slate::PrioritizedResize_::__l17::<lambda_1>_>_>
                  (param_1 + iVar5,iVar4,iVar8,param_3,param_4);
        iVar5 = iVar5 + iVar1;
        iVar6 = iVar6 + iVar4 * -2;
      } while (iVar5 < param_2);
      iVar4 = iVar1;
    } while (iVar1 < param_2);
  }
  return;
}

// StableSortInternal<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,FIdentityFunctor,TDereferenceWrapper<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TLess<void>_>_> @ 1427a8160

void __cdecl
AlgoImpl::
StableSortInternal<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,FIdentityFunctor,TDereferenceWrapper<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TLess<void>_>_>
          (FBlock *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TLess<void>_>
          param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ForElementType<int> FVar14;
  ForElementType<int> FVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  FBlock *pFVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  longlong lVar28;
  int iVar29;
  int iVar30;
  int local_a8;
  
  uVar21 = (ulonglong)param_2;
  if (0 < param_2) {
    iVar26 = 1;
    lVar28 = (uVar21 - 1 >> 1) + 1;
    pFVar23 = param_1;
    do {
      if ((iVar26 < param_2) && (pFVar23[1].SequentialIndex < pFVar23->SequentialIndex)) {
        iVar30 = pFVar23[1].WrapPriority;
        uVar2 = *(undefined8 *)&pFVar23[1].bCanWrap;
        iVar29 = pFVar23->SequentialIndex;
        iVar24 = pFVar23->WrapPriority;
        uVar3 = *(undefined8 *)&pFVar23->bCanWrap;
        uVar4 = *(undefined8 *)((longlong)&(pFVar23->DesiredSize).field0_0x0 + 4);
        uVar5 = *(undefined8 *)((longlong)&(pFVar23->AdjustedSize).field0_0x0 + 4);
        fVar17 = pFVar23->ReserveLength;
        fVar18 = pFVar23->Area;
        uVar6 = *(undefined8 *)(pFVar23->SlotIndices).AllocatorInstance.InlineData;
        uVar7 = *(undefined8 *)((pFVar23->SlotIndices).AllocatorInstance.InlineData + 8);
        uVar8 = *(undefined8 *)((pFVar23->SlotIndices).AllocatorInstance.InlineData + 0x10);
        uVar9 = *(undefined8 *)((pFVar23->SlotIndices).AllocatorInstance.InlineData + 0x18);
        uVar10 = *(undefined8 *)((pFVar23->SlotIndices).AllocatorInstance.InlineData + 0x20);
        uVar11 = *(undefined8 *)((pFVar23->SlotIndices).AllocatorInstance.InlineData + 0x28);
        uVar12 = *(undefined8 *)((pFVar23->SlotIndices).AllocatorInstance.InlineData + 0x30);
        uVar13 = *(undefined8 *)((pFVar23->SlotIndices).AllocatorInstance.InlineData + 0x38);
        FVar14 = (pFVar23->SlotIndices).AllocatorInstance.SecondaryData;
        iVar25 = (pFVar23->SlotIndices).ArrayNum;
        iVar20 = (pFVar23->SlotIndices).ArrayMax;
        pFVar23->SequentialIndex = pFVar23[1].SequentialIndex;
        pFVar23->WrapPriority = iVar30;
        *(undefined8 *)&pFVar23->bCanWrap = uVar2;
        uVar2 = *(undefined8 *)((longlong)&pFVar23[1].AdjustedSize.field0_0x0 + 4);
        *(undefined8 *)((longlong)&(pFVar23->DesiredSize).field0_0x0 + 4) =
             *(undefined8 *)((longlong)&pFVar23[1].DesiredSize.field0_0x0 + 4);
        *(undefined8 *)((longlong)&(pFVar23->AdjustedSize).field0_0x0 + 4) = uVar2;
        fVar16 = pFVar23[1].Area;
        uVar2 = *(undefined8 *)pFVar23[1].SlotIndices.AllocatorInstance.InlineData;
        pFVar23->ReserveLength = pFVar23[1].ReserveLength;
        pFVar23->Area = fVar16;
        *(undefined8 *)(pFVar23->SlotIndices).AllocatorInstance.InlineData = uVar2;
        uVar2 = *(undefined8 *)(pFVar23[1].SlotIndices.AllocatorInstance.InlineData + 0x10);
        *(undefined8 *)((pFVar23->SlotIndices).AllocatorInstance.InlineData + 8) =
             *(undefined8 *)(pFVar23[1].SlotIndices.AllocatorInstance.InlineData + 8);
        *(undefined8 *)((pFVar23->SlotIndices).AllocatorInstance.InlineData + 0x10) = uVar2;
        uVar2 = *(undefined8 *)(pFVar23[1].SlotIndices.AllocatorInstance.InlineData + 0x20);
        *(undefined8 *)((pFVar23->SlotIndices).AllocatorInstance.InlineData + 0x18) =
             *(undefined8 *)(pFVar23[1].SlotIndices.AllocatorInstance.InlineData + 0x18);
        *(undefined8 *)((pFVar23->SlotIndices).AllocatorInstance.InlineData + 0x20) = uVar2;
        uVar2 = *(undefined8 *)(pFVar23[1].SlotIndices.AllocatorInstance.InlineData + 0x30);
        *(undefined8 *)((pFVar23->SlotIndices).AllocatorInstance.InlineData + 0x28) =
             *(undefined8 *)(pFVar23[1].SlotIndices.AllocatorInstance.InlineData + 0x28);
        *(undefined8 *)((pFVar23->SlotIndices).AllocatorInstance.InlineData + 0x30) = uVar2;
        FVar15 = pFVar23[1].SlotIndices.AllocatorInstance.SecondaryData;
        *(undefined8 *)((pFVar23->SlotIndices).AllocatorInstance.InlineData + 0x38) =
             *(undefined8 *)(pFVar23[1].SlotIndices.AllocatorInstance.InlineData + 0x38);
        (pFVar23->SlotIndices).AllocatorInstance.SecondaryData = FVar15;
        iVar30 = pFVar23[1].SlotIndices.ArrayMax;
        (pFVar23->SlotIndices).ArrayNum = pFVar23[1].SlotIndices.ArrayNum;
        (pFVar23->SlotIndices).ArrayMax = iVar30;
        pFVar23[1].SequentialIndex = iVar29;
        pFVar23[1].WrapPriority = iVar24;
        *(undefined8 *)&pFVar23[1].bCanWrap = uVar3;
        *(undefined8 *)((longlong)&pFVar23[1].DesiredSize.field0_0x0 + 4) = uVar4;
        *(undefined8 *)((longlong)&pFVar23[1].AdjustedSize.field0_0x0 + 4) = uVar5;
        pFVar23[1].ReserveLength = fVar17;
        pFVar23[1].Area = fVar18;
        *(undefined8 *)pFVar23[1].SlotIndices.AllocatorInstance.InlineData = uVar6;
        *(undefined8 *)(pFVar23[1].SlotIndices.AllocatorInstance.InlineData + 8) = uVar7;
        *(undefined8 *)(pFVar23[1].SlotIndices.AllocatorInstance.InlineData + 0x10) = uVar8;
        *(undefined8 *)(pFVar23[1].SlotIndices.AllocatorInstance.InlineData + 0x18) = uVar9;
        *(undefined8 *)(pFVar23[1].SlotIndices.AllocatorInstance.InlineData + 0x20) = uVar10;
        *(undefined8 *)(pFVar23[1].SlotIndices.AllocatorInstance.InlineData + 0x28) = uVar11;
        *(undefined8 *)(pFVar23[1].SlotIndices.AllocatorInstance.InlineData + 0x30) = uVar12;
        *(undefined8 *)(pFVar23[1].SlotIndices.AllocatorInstance.InlineData + 0x38) = uVar13;
        pFVar23[1].SlotIndices.AllocatorInstance.SecondaryData = FVar14;
        pFVar23[1].SlotIndices.ArrayNum = iVar25;
        pFVar23[1].SlotIndices.ArrayMax = iVar20;
      }
      iVar26 = iVar26 + 2;
      pFVar23 = pFVar23 + 2;
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
  }
  local_a8 = 2;
  uVar22 = uVar21;
  if (2 < param_2) {
    do {
      iVar26 = local_a8 * 2;
      lVar28 = 0;
      uVar22 = uVar22 & 0xffffffff;
      pFVar23 = param_1;
      do {
        iVar29 = (int)uVar22;
        iVar30 = iVar29;
        if (iVar26 <= iVar29) {
          iVar30 = iVar26;
        }
        iVar25 = 0;
        iVar24 = local_a8;
        if (0 < local_a8) {
          do {
            if (iVar30 <= iVar24) break;
            iVar20 = 0;
            if (0 < iVar24 - iVar25) {
              uVar19 = iVar24 - iVar25;
              do {
                uVar27 = uVar19 >> 1;
                if (pFVar23[(longlong)(int)(uVar27 + iVar20) + (longlong)iVar25].SequentialIndex <=
                    pFVar23[iVar24].SequentialIndex) {
                  iVar20 = (uVar19 & 1) + uVar27 + iVar20;
                }
                uVar19 = uVar27;
              } while (uVar27 != 0);
            }
            iVar25 = iVar25 + iVar20;
            if (iVar24 <= iVar25) break;
            iVar20 = 0;
            if (0 < iVar30 - iVar24) {
              uVar19 = iVar30 - iVar24;
              do {
                iVar1 = (uVar19 >> 1) + iVar20;
                if (pFVar23[(longlong)iVar1 + (longlong)iVar24].SequentialIndex <
                    pFVar23[iVar25].SequentialIndex) {
                  iVar20 = (uVar19 & 1) + iVar1;
                }
                uVar27 = uVar19 >> 1;
                uVar19 = uVar19 >> 1;
              } while (uVar27 != 0);
            }
            RotateInternal<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock>
                      (pFVar23 + iVar25,(iVar20 - iVar25) + iVar24,iVar24 - iVar25);
            iVar24 = iVar24 + iVar20;
            iVar25 = iVar25 + 1 + iVar20;
          } while (iVar25 < iVar24);
        }
        uVar22 = (ulonglong)(uint)(iVar29 + local_a8 * -2);
        lVar28 = lVar28 + (longlong)local_a8 * 2;
        pFVar23 = pFVar23 + (longlong)local_a8 * 2;
      } while (lVar28 < (longlong)uVar21);
      uVar22 = (ulonglong)(uint)param_2;
      local_a8 = iVar26;
    } while (iVar26 < param_2);
  }
  return;
}

// StableSortInternal<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,FIdentityFunctor,TDereferenceWrapper<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,`UE::Slate::PrioritizedWrapBox::FChildArranger::UpdateBlocks'::__l2::<lambda_2>_>_> @ 1427a84d0

void __cdecl
AlgoImpl::
StableSortInternal<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,FIdentityFunctor,TDereferenceWrapper<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,_UE::Slate::PrioritizedWrapBox::FChildArranger::UpdateBlocks_::__l2::<lambda_2>_>_>
          (FBlock *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,_private:_void___cdecl_UE::Slate::PrioritizedWrapBox::FChildArranger::UpdateBlocks(TPanelChildren<SPrioritizedWrapBox::FSlot>_const_&,float)_::_2_::<lambda_2>_>
          param_4)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ForElementType<int> FVar16;
  undefined8 uVar17;
  bool bVar18;
  bool *pbVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  longlong lVar24;
  bool bVar25;
  
  if (0 < param_2) {
    pbVar19 = &param_1[1].bForceNewLine;
    iVar23 = 1;
    lVar24 = ((longlong)param_2 - 1U >> 1) + 1;
    do {
      if (iVar23 < param_2) {
        if ((pbVar19[-1] == false) && (*pbVar19 == false)) {
          bVar25 = false;
        }
        else {
          bVar25 = true;
        }
        if ((pbVar19[-0x79] == false) && (pbVar19[-0x78] == false)) {
          bVar18 = false;
        }
        else {
          bVar18 = true;
        }
        if (bVar25) {
          if (bVar18) {
            bVar25 = SBORROW4(((FBlock *)(pbVar19 + -9))->SequentialIndex,*(int *)(pbVar19 + -0x81))
            ;
            iVar2 = ((FBlock *)(pbVar19 + -9))->SequentialIndex - *(int *)(pbVar19 + -0x81);
            goto LAB_1427a857b;
          }
        }
        else {
          if (!bVar18) {
            bVar25 = SBORROW4(((FBlock *)(pbVar19 + -9))->SequentialIndex,*(int *)(pbVar19 + -0x81))
            ;
            iVar2 = ((FBlock *)(pbVar19 + -9))->SequentialIndex - *(int *)(pbVar19 + -0x81);
LAB_1427a857b:
            if (bVar25 == iVar2 < 0) goto LAB_1427a8614;
          }
          uVar3 = *(undefined8 *)(pbVar19 + -0x81);
          uVar4 = *(undefined8 *)(pbVar19 + -0x79);
          uVar5 = *(undefined8 *)(pbVar19 + -0x71);
          uVar6 = *(undefined8 *)(pbVar19 + -0x69);
          uVar7 = *(undefined8 *)(pbVar19 + -0x61);
          uVar8 = *(undefined8 *)(pbVar19 + -0x59);
          uVar9 = *(undefined8 *)(pbVar19 + -0x51);
          uVar10 = *(undefined8 *)(pbVar19 + -0x49);
          uVar11 = *(undefined8 *)(pbVar19 + -0x41);
          uVar12 = *(undefined8 *)(pbVar19 + -0x39);
          uVar13 = *(undefined8 *)(pbVar19 + -0x31);
          uVar14 = *(undefined8 *)(pbVar19 + -0x29);
          uVar15 = *(undefined8 *)(pbVar19 + -0x21);
          FVar16 = *(ForElementType<int> *)(pbVar19 + -0x19);
          uVar1 = *(undefined8 *)(pbVar19 + -0x11);
          *(undefined8 *)(pbVar19 + -0x81) = *(undefined8 *)(pbVar19 + -9);
          *(undefined8 *)(pbVar19 + -0x79) = *(undefined8 *)(pbVar19 + -1);
          *(undefined8 *)(pbVar19 + -0x71) = *(undefined8 *)(pbVar19 + 7);
          *(undefined8 *)(pbVar19 + -0x69) = *(undefined8 *)(pbVar19 + 0xf);
          uVar17 = *(undefined8 *)
                    (((TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                     (pbVar19 + 0x1f))->AllocatorInstance).InlineData;
          *(undefined8 *)(pbVar19 + -0x61) = *(undefined8 *)(pbVar19 + 0x17);
          *(undefined8 *)(pbVar19 + -0x59) = uVar17;
          *(undefined8 *)(pbVar19 + -0x51) = *(undefined8 *)(pbVar19 + 0x27);
          *(undefined8 *)(pbVar19 + -0x49) = *(undefined8 *)(pbVar19 + 0x2f);
          *(undefined8 *)(pbVar19 + -0x41) = *(undefined8 *)(pbVar19 + 0x37);
          *(undefined8 *)(pbVar19 + -0x39) = *(undefined8 *)(pbVar19 + 0x3f);
          *(undefined8 *)(pbVar19 + -0x31) = *(undefined8 *)(pbVar19 + 0x47);
          *(undefined8 *)(pbVar19 + -0x29) = *(undefined8 *)(pbVar19 + 0x4f);
          *(undefined8 *)(pbVar19 + -0x21) = *(undefined8 *)(pbVar19 + 0x57);
          *(ForElementType<int> *)(pbVar19 + -0x19) = *(ForElementType<int> *)(pbVar19 + 0x5f);
          *(undefined8 *)(pbVar19 + -0x11) = *(undefined8 *)(pbVar19 + 0x67);
          ((FBlock *)(pbVar19 + -9))->SequentialIndex = (int)uVar3;
          ((FBlock *)(pbVar19 + -9))->WrapPriority = (int)((ulonglong)uVar3 >> 0x20);
          *(undefined8 *)(pbVar19 + -1) = uVar4;
          *(undefined8 *)(pbVar19 + 7) = uVar5;
          *(undefined8 *)(pbVar19 + 0xf) = uVar6;
          *(undefined8 *)(pbVar19 + 0x17) = uVar7;
          *(undefined8 *)
           (((TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
            (pbVar19 + 0x1f))->AllocatorInstance).InlineData = uVar8;
          *(undefined8 *)(pbVar19 + 0x27) = uVar9;
          *(undefined8 *)(pbVar19 + 0x2f) = uVar10;
          *(undefined8 *)(pbVar19 + 0x37) = uVar11;
          *(undefined8 *)(pbVar19 + 0x3f) = uVar12;
          *(undefined8 *)(pbVar19 + 0x47) = uVar13;
          *(undefined8 *)(pbVar19 + 0x4f) = uVar14;
          *(undefined8 *)(pbVar19 + 0x57) = uVar15;
          *(ForElementType<int> *)(pbVar19 + 0x5f) = FVar16;
          *(undefined8 *)(pbVar19 + 0x67) = uVar1;
        }
      }
LAB_1427a8614:
      iVar23 = iVar23 + 2;
      pbVar19 = pbVar19 + 0xf0;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
  }
  iVar23 = 2;
  if (2 < param_2) {
    do {
      iVar2 = iVar23 * 2;
      iVar21 = 0;
      iVar20 = param_2;
      do {
        iVar22 = iVar20;
        if (iVar2 <= iVar20) {
          iVar22 = iVar2;
        }
        Merge<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,FIdentityFunctor,TDereferenceWrapper<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,_UE::Slate::PrioritizedWrapBox::FChildArranger::UpdateBlocks_::__l2::<lambda_2>_>_>
                  (param_1 + iVar21,iVar23,iVar22,param_3,param_4);
        iVar21 = iVar21 + iVar2;
        iVar20 = iVar20 + iVar23 * -2;
      } while (iVar21 < param_2);
      iVar23 = iVar2;
    } while (iVar2 < param_2);
  }
  return;
}

// StableSortInternal<UE::Slate::FClippingInfo,FIdentityFunctor,TDereferenceWrapper<UE::Slate::FClippingInfo,`UE::Slate::PrioritizedResize'::__l2::<lambda_2>_>_> @ 1427a8700

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl
AlgoImpl::
StableSortInternal<UE::Slate::FClippingInfo,FIdentityFunctor,TDereferenceWrapper<UE::Slate::FClippingInfo,_UE::Slate::PrioritizedResize_::__l2::<lambda_2>_>_>
          (FClippingInfo *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::Slate::FClippingInfo,_void___cdecl_UE::Slate::PrioritizedResize(float,float,FMargin_const_&,int,TArray<UE::Slate::FClippingInfo,TSizedDefaultAllocator<32>_>_&,TOptional<float>_&)_::_2_::<lambda_2>_>
          param_4)

{
  int iVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  double dVar22;
  double dVar23;
  TReferenceControllerBase<1> *pTVar24;
  undefined8 uVar25;
  double dVar26;
  FClippingInfo *pFVar27;
  bool bVar28;
  undefined1 uVar29;
  short sVar30;
  undefined2 uVar31;
  TOptional<bool> TVar32;
  undefined4 uVar33;
  bool bVar34;
  bool bVar35;
  undefined5 uVar36;
  bool bVar37;
  undefined1 uVar38;
  short sVar39;
  bool bVar40;
  bool bVar41;
  undefined2 uVar42;
  bool bVar43;
  bool bVar44;
  undefined2 uVar45;
  bool bVar46;
  bool bVar47;
  undefined2 uVar48;
  int iVar49;
  int iVar50;
  bool bVar51;
  undefined1 uVar52;
  short sVar53;
  EWrapMode EVar54;
  bool bVar55;
  undefined2 uVar56;
  int iVar57;
  TOptional<UE::Slate::PrioritizedWrapBox::EVerticalOverflowBehavior> TVar58;
  TOptional<bool> TVar59;
  undefined4 uVar60;
  bool bVar61;
  bool bVar62;
  bool bVar63;
  undefined5 uVar64;
  int iVar65;
  int iVar66;
  int iVar67;
  FClippingInfo *pFVar68;
  int iVar69;
  longlong lVar70;
  
  if (0 < param_2) {
    pFVar68 = param_1 + 1;
    iVar69 = 1;
    lVar70 = ((longlong)param_2 - 1U >> 1) + 1;
    do {
      if ((iVar69 < param_2) && (pFVar68->X <= pFVar68[-1].X && pFVar68[-1].X != pFVar68->X)) {
        pSVar2 = pFVar68[-1].Widget.Object;
        pTVar3 = pFVar68[-1].Widget.SharedReferenceCount.ReferenceController;
        iVar65 = pFVar68[-1].ResizeParams.ClippingPriority.Value;
        bVar37 = pFVar68[-1].ResizeParams.ClippingPriority.bIsSet;
        uVar38 = pFVar68[-1].ResizeParams.ClippingPriority.field_0x5;
        sVar39 = pFVar68[-1].ResizeParams.ClippingPriority._padding_;
        uVar4 = *(undefined8 *)&pFVar68[-1].ResizeParams.ClippingPriority.Getter;
        uVar5 = *(undefined8 *)&pFVar68[-1].ResizeParams.ClippingPriority.Getter.field_0x8;
        uVar6 = *(undefined8 *)&pFVar68[-1].ResizeParams.ClippingPriority.Getter.field_0x10;
        bVar40 = pFVar68[-1].ResizeParams.AllowClipping.Value;
        bVar41 = pFVar68[-1].ResizeParams.AllowClipping.bIsSet;
        uVar42 = *(undefined2 *)&pFVar68[-1].ResizeParams.AllowClipping.field_0x2;
        iVar66 = pFVar68[-1].ResizeParams.AllowClipping._padding_;
        uVar7 = *(undefined8 *)&pFVar68[-1].ResizeParams.AllowClipping.Getter;
        uVar8 = *(undefined8 *)&pFVar68[-1].ResizeParams.AllowClipping.Getter.field_0x8;
        uVar9 = *(undefined8 *)&pFVar68[-1].ResizeParams.AllowClipping.Getter.field_0x10;
        bVar43 = pFVar68[-1].ResizeParams.VisibleInOverflow.Value;
        bVar44 = pFVar68[-1].ResizeParams.VisibleInOverflow.bIsSet;
        uVar45 = *(undefined2 *)&pFVar68[-1].ResizeParams.VisibleInOverflow.field_0x2;
        iVar67 = pFVar68[-1].ResizeParams.VisibleInOverflow._padding_;
        uVar10 = *(undefined8 *)&pFVar68[-1].ResizeParams.VisibleInOverflow.Getter;
        uVar11 = *(undefined8 *)&pFVar68[-1].ResizeParams.VisibleInOverflow.Getter.field_0x8;
        uVar12 = *(undefined8 *)&pFVar68[-1].ResizeParams.VisibleInOverflow.Getter.field_0x10;
        pFVar27 = pFVar68 + -1;
        bVar46 = (pFVar27->ResizeParams).Wrapping.Allow.Value;
        bVar47 = (pFVar27->ResizeParams).Wrapping.Allow.bIsSet;
        uVar48 = *(undefined2 *)&(pFVar27->ResizeParams).Wrapping.Allow.field_0x2;
        iVar49 = (pFVar27->ResizeParams).Wrapping.Allow._padding_;
        uVar13 = *(undefined8 *)&pFVar68[-1].ResizeParams.Wrapping.Allow.Getter;
        uVar14 = *(undefined8 *)&pFVar68[-1].ResizeParams.Wrapping.Allow.Getter.field_0x8;
        uVar15 = *(undefined8 *)&pFVar68[-1].ResizeParams.Wrapping.Allow.Getter.field_0x10;
        pFVar27 = pFVar68 + -1;
        iVar50 = (pFVar27->ResizeParams).Wrapping.Priority.Value;
        bVar51 = (pFVar27->ResizeParams).Wrapping.Priority.bIsSet;
        uVar52 = (pFVar27->ResizeParams).Wrapping.Priority.field_0x5;
        sVar53 = (pFVar27->ResizeParams).Wrapping.Priority._padding_;
        uVar16 = *(undefined8 *)&pFVar68[-1].ResizeParams.Wrapping.Priority.Getter;
        uVar17 = *(undefined8 *)&pFVar68[-1].ResizeParams.Wrapping.Priority.Getter.field_0x8;
        uVar18 = *(undefined8 *)&pFVar68[-1].ResizeParams.Wrapping.Priority.Getter.field_0x10;
        pFVar27 = pFVar68 + -1;
        EVar54 = (pFVar27->ResizeParams).Wrapping.Mode.Value;
        bVar55 = (pFVar27->ResizeParams).Wrapping.Mode.bIsSet;
        uVar56 = *(undefined2 *)&(pFVar27->ResizeParams).Wrapping.Mode.field_0x2;
        iVar57 = (pFVar27->ResizeParams).Wrapping.Mode._padding_;
        uVar19 = *(undefined8 *)&pFVar68[-1].ResizeParams.Wrapping.Mode.Getter;
        uVar20 = *(undefined8 *)&pFVar68[-1].ResizeParams.Wrapping.Mode.Getter.field_0x8;
        uVar21 = *(undefined8 *)&pFVar68[-1].ResizeParams.Wrapping.Mode.Getter.field_0x10;
        TVar58 = pFVar68[-1].ResizeParams.Wrapping.VerticalOverflowBehavior;
        TVar59 = pFVar68[-1].ResizeParams.Wrapping.ForceNewLine;
        uVar60 = *(undefined4 *)&pFVar68[-1].ResizeParams.Wrapping.field_0x64;
        dVar22 = pFVar68[-1].X;
        dVar23 = pFVar68[-1].Width;
        bVar61 = pFVar68[-1].bIsStretchable;
        bVar62 = pFVar68[-1].bAppearsInOverflow;
        bVar63 = pFVar68[-1].bWasClipped;
        uVar64 = *(undefined5 *)&pFVar68[-1].field_0xeb;
        pTVar24 = (pFVar68->Widget).SharedReferenceCount.ReferenceController;
        pFVar68[-1].Widget.Object = (pFVar68->Widget).Object;
        pFVar68[-1].Widget.SharedReferenceCount.ReferenceController = pTVar24;
        bVar28 = (pFVar68->ResizeParams).ClippingPriority.bIsSet;
        uVar29 = (pFVar68->ResizeParams).ClippingPriority.field_0x5;
        sVar30 = (pFVar68->ResizeParams).ClippingPriority._padding_;
        uVar25 = *(undefined8 *)&(pFVar68->ResizeParams).ClippingPriority.Getter;
        pFVar68[-1].ResizeParams.ClippingPriority.Value =
             (pFVar68->ResizeParams).ClippingPriority.Value;
        pFVar68[-1].ResizeParams.ClippingPriority.bIsSet = bVar28;
        pFVar68[-1].ResizeParams.ClippingPriority.field_0x5 = uVar29;
        pFVar68[-1].ResizeParams.ClippingPriority._padding_ = sVar30;
        *(undefined8 *)&pFVar68[-1].ResizeParams.ClippingPriority.Getter = uVar25;
        uVar25 = *(undefined8 *)&(pFVar68->ResizeParams).ClippingPriority.Getter.field_0x10;
        *(undefined8 *)&pFVar68[-1].ResizeParams.ClippingPriority.Getter.field_0x8 =
             *(undefined8 *)&(pFVar68->ResizeParams).ClippingPriority.Getter.field_0x8;
        *(undefined8 *)&pFVar68[-1].ResizeParams.ClippingPriority.Getter.field_0x10 = uVar25;
        bVar28 = (pFVar68->ResizeParams).AllowClipping.bIsSet;
        uVar31 = *(undefined2 *)&(pFVar68->ResizeParams).AllowClipping.field_0x2;
        iVar1 = (pFVar68->ResizeParams).AllowClipping._padding_;
        uVar25 = *(undefined8 *)&(pFVar68->ResizeParams).AllowClipping.Getter;
        pFVar68[-1].ResizeParams.AllowClipping.Value = (pFVar68->ResizeParams).AllowClipping.Value;
        pFVar68[-1].ResizeParams.AllowClipping.bIsSet = bVar28;
        *(undefined2 *)&pFVar68[-1].ResizeParams.AllowClipping.field_0x2 = uVar31;
        pFVar68[-1].ResizeParams.AllowClipping._padding_ = iVar1;
        *(undefined8 *)&pFVar68[-1].ResizeParams.AllowClipping.Getter = uVar25;
        uVar25 = *(undefined8 *)&(pFVar68->ResizeParams).AllowClipping.Getter.field_0x10;
        *(undefined8 *)&pFVar68[-1].ResizeParams.AllowClipping.Getter.field_0x8 =
             *(undefined8 *)&(pFVar68->ResizeParams).AllowClipping.Getter.field_0x8;
        *(undefined8 *)&pFVar68[-1].ResizeParams.AllowClipping.Getter.field_0x10 = uVar25;
        bVar28 = (pFVar68->ResizeParams).VisibleInOverflow.bIsSet;
        uVar31 = *(undefined2 *)&(pFVar68->ResizeParams).VisibleInOverflow.field_0x2;
        iVar1 = (pFVar68->ResizeParams).VisibleInOverflow._padding_;
        uVar25 = *(undefined8 *)&(pFVar68->ResizeParams).VisibleInOverflow.Getter;
        pFVar68[-1].ResizeParams.VisibleInOverflow.Value =
             (pFVar68->ResizeParams).VisibleInOverflow.Value;
        pFVar68[-1].ResizeParams.VisibleInOverflow.bIsSet = bVar28;
        *(undefined2 *)&pFVar68[-1].ResizeParams.VisibleInOverflow.field_0x2 = uVar31;
        pFVar68[-1].ResizeParams.VisibleInOverflow._padding_ = iVar1;
        *(undefined8 *)&pFVar68[-1].ResizeParams.VisibleInOverflow.Getter = uVar25;
        uVar25 = *(undefined8 *)&(pFVar68->ResizeParams).VisibleInOverflow.Getter.field_0x10;
        *(undefined8 *)&pFVar68[-1].ResizeParams.VisibleInOverflow.Getter.field_0x8 =
             *(undefined8 *)&(pFVar68->ResizeParams).VisibleInOverflow.Getter.field_0x8;
        *(undefined8 *)&pFVar68[-1].ResizeParams.VisibleInOverflow.Getter.field_0x10 = uVar25;
        bVar28 = (pFVar68->ResizeParams).Wrapping.Allow.bIsSet;
        uVar31 = *(undefined2 *)&(pFVar68->ResizeParams).Wrapping.Allow.field_0x2;
        iVar1 = (pFVar68->ResizeParams).Wrapping.Allow._padding_;
        uVar25 = *(undefined8 *)&(pFVar68->ResizeParams).Wrapping.Allow.Getter;
        pFVar27 = pFVar68 + -1;
        (pFVar27->ResizeParams).Wrapping.Allow.Value = (pFVar68->ResizeParams).Wrapping.Allow.Value;
        (pFVar27->ResizeParams).Wrapping.Allow.bIsSet = bVar28;
        *(undefined2 *)&(pFVar27->ResizeParams).Wrapping.Allow.field_0x2 = uVar31;
        (pFVar27->ResizeParams).Wrapping.Allow._padding_ = iVar1;
        *(undefined8 *)&pFVar68[-1].ResizeParams.Wrapping.Allow.Getter = uVar25;
        uVar25 = *(undefined8 *)&(pFVar68->ResizeParams).Wrapping.Allow.Getter.field_0x10;
        *(undefined8 *)&pFVar68[-1].ResizeParams.Wrapping.Allow.Getter.field_0x8 =
             *(undefined8 *)&(pFVar68->ResizeParams).Wrapping.Allow.Getter.field_0x8;
        *(undefined8 *)&pFVar68[-1].ResizeParams.Wrapping.Allow.Getter.field_0x10 = uVar25;
        bVar28 = (pFVar68->ResizeParams).Wrapping.Priority.bIsSet;
        uVar29 = (pFVar68->ResizeParams).Wrapping.Priority.field_0x5;
        sVar30 = (pFVar68->ResizeParams).Wrapping.Priority._padding_;
        uVar25 = *(undefined8 *)&(pFVar68->ResizeParams).Wrapping.Priority.Getter;
        pFVar27 = pFVar68 + -1;
        (pFVar27->ResizeParams).Wrapping.Priority.Value =
             (pFVar68->ResizeParams).Wrapping.Priority.Value;
        (pFVar27->ResizeParams).Wrapping.Priority.bIsSet = bVar28;
        (pFVar27->ResizeParams).Wrapping.Priority.field_0x5 = uVar29;
        (pFVar27->ResizeParams).Wrapping.Priority._padding_ = sVar30;
        *(undefined8 *)&pFVar68[-1].ResizeParams.Wrapping.Priority.Getter = uVar25;
        uVar25 = *(undefined8 *)&(pFVar68->ResizeParams).Wrapping.Priority.Getter.field_0x10;
        *(undefined8 *)&pFVar68[-1].ResizeParams.Wrapping.Priority.Getter.field_0x8 =
             *(undefined8 *)&(pFVar68->ResizeParams).Wrapping.Priority.Getter.field_0x8;
        *(undefined8 *)&pFVar68[-1].ResizeParams.Wrapping.Priority.Getter.field_0x10 = uVar25;
        bVar28 = (pFVar68->ResizeParams).Wrapping.Mode.bIsSet;
        uVar31 = *(undefined2 *)&(pFVar68->ResizeParams).Wrapping.Mode.field_0x2;
        iVar1 = (pFVar68->ResizeParams).Wrapping.Mode._padding_;
        uVar25 = *(undefined8 *)&(pFVar68->ResizeParams).Wrapping.Mode.Getter;
        pFVar27 = pFVar68 + -1;
        (pFVar27->ResizeParams).Wrapping.Mode.Value = (pFVar68->ResizeParams).Wrapping.Mode.Value;
        (pFVar27->ResizeParams).Wrapping.Mode.bIsSet = bVar28;
        *(undefined2 *)&(pFVar27->ResizeParams).Wrapping.Mode.field_0x2 = uVar31;
        (pFVar27->ResizeParams).Wrapping.Mode._padding_ = iVar1;
        *(undefined8 *)&pFVar68[-1].ResizeParams.Wrapping.Mode.Getter = uVar25;
        uVar25 = *(undefined8 *)&(pFVar68->ResizeParams).Wrapping.Mode.Getter.field_0x10;
        *(undefined8 *)&pFVar68[-1].ResizeParams.Wrapping.Mode.Getter.field_0x8 =
             *(undefined8 *)&(pFVar68->ResizeParams).Wrapping.Mode.Getter.field_0x8;
        *(undefined8 *)&pFVar68[-1].ResizeParams.Wrapping.Mode.Getter.field_0x10 = uVar25;
        TVar32 = (pFVar68->ResizeParams).Wrapping.ForceNewLine;
        uVar33 = *(undefined4 *)&(pFVar68->ResizeParams).Wrapping.field_0x64;
        dVar26 = pFVar68->X;
        pFVar68[-1].ResizeParams.Wrapping.VerticalOverflowBehavior =
             (pFVar68->ResizeParams).Wrapping.VerticalOverflowBehavior;
        pFVar68[-1].ResizeParams.Wrapping.ForceNewLine = TVar32;
        *(undefined4 *)&pFVar68[-1].ResizeParams.Wrapping.field_0x64 = uVar33;
        pFVar68[-1].X = dVar26;
        bVar28 = pFVar68->bIsStretchable;
        bVar34 = pFVar68->bAppearsInOverflow;
        bVar35 = pFVar68->bWasClipped;
        uVar36 = *(undefined5 *)&pFVar68->field_0xeb;
        pFVar68[-1].Width = pFVar68->Width;
        pFVar68[-1].bIsStretchable = bVar28;
        pFVar68[-1].bAppearsInOverflow = bVar34;
        pFVar68[-1].bWasClipped = bVar35;
        *(undefined5 *)&pFVar68[-1].field_0xeb = uVar36;
        (pFVar68->Widget).Object = pSVar2;
        (pFVar68->Widget).SharedReferenceCount.ReferenceController = pTVar3;
        (pFVar68->ResizeParams).ClippingPriority.Value = iVar65;
        (pFVar68->ResizeParams).ClippingPriority.bIsSet = bVar37;
        (pFVar68->ResizeParams).ClippingPriority.field_0x5 = uVar38;
        (pFVar68->ResizeParams).ClippingPriority._padding_ = sVar39;
        *(undefined8 *)&(pFVar68->ResizeParams).ClippingPriority.Getter = uVar4;
        *(undefined8 *)&(pFVar68->ResizeParams).ClippingPriority.Getter.field_0x8 = uVar5;
        *(undefined8 *)&(pFVar68->ResizeParams).ClippingPriority.Getter.field_0x10 = uVar6;
        (pFVar68->ResizeParams).AllowClipping.Value = bVar40;
        (pFVar68->ResizeParams).AllowClipping.bIsSet = bVar41;
        *(undefined2 *)&(pFVar68->ResizeParams).AllowClipping.field_0x2 = uVar42;
        (pFVar68->ResizeParams).AllowClipping._padding_ = iVar66;
        *(undefined8 *)&(pFVar68->ResizeParams).AllowClipping.Getter = uVar7;
        *(undefined8 *)&(pFVar68->ResizeParams).AllowClipping.Getter.field_0x8 = uVar8;
        *(undefined8 *)&(pFVar68->ResizeParams).AllowClipping.Getter.field_0x10 = uVar9;
        (pFVar68->ResizeParams).VisibleInOverflow.Value = bVar43;
        (pFVar68->ResizeParams).VisibleInOverflow.bIsSet = bVar44;
        *(undefined2 *)&(pFVar68->ResizeParams).VisibleInOverflow.field_0x2 = uVar45;
        (pFVar68->ResizeParams).VisibleInOverflow._padding_ = iVar67;
        *(undefined8 *)&(pFVar68->ResizeParams).VisibleInOverflow.Getter = uVar10;
        *(undefined8 *)&(pFVar68->ResizeParams).VisibleInOverflow.Getter.field_0x8 = uVar11;
        *(undefined8 *)&(pFVar68->ResizeParams).VisibleInOverflow.Getter.field_0x10 = uVar12;
        (pFVar68->ResizeParams).Wrapping.Allow.Value = bVar46;
        (pFVar68->ResizeParams).Wrapping.Allow.bIsSet = bVar47;
        *(undefined2 *)&(pFVar68->ResizeParams).Wrapping.Allow.field_0x2 = uVar48;
        (pFVar68->ResizeParams).Wrapping.Allow._padding_ = iVar49;
        *(undefined8 *)&(pFVar68->ResizeParams).Wrapping.Allow.Getter = uVar13;
        *(undefined8 *)&(pFVar68->ResizeParams).Wrapping.Allow.Getter.field_0x8 = uVar14;
        *(undefined8 *)&(pFVar68->ResizeParams).Wrapping.Allow.Getter.field_0x10 = uVar15;
        (pFVar68->ResizeParams).Wrapping.Priority.Value = iVar50;
        (pFVar68->ResizeParams).Wrapping.Priority.bIsSet = bVar51;
        (pFVar68->ResizeParams).Wrapping.Priority.field_0x5 = uVar52;
        (pFVar68->ResizeParams).Wrapping.Priority._padding_ = sVar53;
        *(undefined8 *)&(pFVar68->ResizeParams).Wrapping.Priority.Getter = uVar16;
        *(undefined8 *)&(pFVar68->ResizeParams).Wrapping.Priority.Getter.field_0x8 = uVar17;
        *(undefined8 *)&(pFVar68->ResizeParams).Wrapping.Priority.Getter.field_0x10 = uVar18;
        (pFVar68->ResizeParams).Wrapping.Mode.Value = EVar54;
        (pFVar68->ResizeParams).Wrapping.Mode.bIsSet = bVar55;
        *(undefined2 *)&(pFVar68->ResizeParams).Wrapping.Mode.field_0x2 = uVar56;
        (pFVar68->ResizeParams).Wrapping.Mode._padding_ = iVar57;
        *(undefined8 *)&(pFVar68->ResizeParams).Wrapping.Mode.Getter = uVar19;
        *(undefined8 *)&(pFVar68->ResizeParams).Wrapping.Mode.Getter.field_0x8 = uVar20;
        *(undefined8 *)&(pFVar68->ResizeParams).Wrapping.Mode.Getter.field_0x10 = uVar21;
        (pFVar68->ResizeParams).Wrapping.VerticalOverflowBehavior = TVar58;
        (pFVar68->ResizeParams).Wrapping.ForceNewLine = TVar59;
        *(undefined4 *)&(pFVar68->ResizeParams).Wrapping.field_0x64 = uVar60;
        pFVar68->X = dVar22;
        pFVar68->Width = dVar23;
        pFVar68->bIsStretchable = bVar61;
        pFVar68->bAppearsInOverflow = bVar62;
        pFVar68->bWasClipped = bVar63;
        *(undefined5 *)&pFVar68->field_0xeb = uVar64;
      }
      iVar69 = iVar69 + 2;
      pFVar68 = pFVar68 + 2;
      lVar70 = lVar70 + -1;
    } while (lVar70 != 0);
  }
  iVar69 = 2;
  if (2 < param_2) {
    do {
      iVar1 = iVar69 * 2;
      iVar66 = 0;
      iVar65 = param_2;
      do {
        iVar67 = iVar65;
        if (iVar1 <= iVar65) {
          iVar67 = iVar1;
        }
        Merge<UE::Slate::FClippingInfo,FIdentityFunctor,TDereferenceWrapper<UE::Slate::FClippingInfo,_UE::Slate::PrioritizedResize_::__l2::<lambda_2>_>_>
                  (param_1 + iVar66,iVar69,iVar67,param_3,param_4);
        iVar66 = iVar66 + iVar1;
        iVar65 = iVar65 + iVar69 * -2;
      } while (iVar66 < param_2);
      iVar69 = iVar1;
    } while (iVar1 < param_2);
  }
  return;
}

// UpperBoundInternal<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,int,UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,FIdentityFunctor,TDereferenceWrapper<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TLess<void>_>_> @ 1427a8db0

int __cdecl
AlgoImpl::
UpperBoundInternal<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,int,UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,FIdentityFunctor,TDereferenceWrapper<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TLess<void>_>_>
          (FBlock *param_1,int param_2,FBlock *param_3,FIdentityFunctor param_4,
          TDereferenceWrapper<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TLess<void>_>
          param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (param_1[iVar1].SequentialIndex <= param_3->SequentialIndex) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// UpperBoundInternal<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,int,UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,FIdentityFunctor,TDereferenceWrapper<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,`UE::Slate::PrioritizedWrapBox::FChildArranger::UpdateBlocks'::__l2::<lambda_2>_>_> @ 1427a8e00

int __cdecl
AlgoImpl::
UpperBoundInternal<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,int,UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,FIdentityFunctor,TDereferenceWrapper<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,_UE::Slate::PrioritizedWrapBox::FChildArranger::UpdateBlocks_::__l2::<lambda_2>_>_>
          (FBlock *param_1,int param_2,FBlock *param_3,FIdentityFunctor param_4,
          TDereferenceWrapper<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,_private:_void___cdecl_UE::Slate::PrioritizedWrapBox::FChildArranger::UpdateBlocks(TPanelChildren<SPrioritizedWrapBox::FSlot>_const_&,float)_::_2_::<lambda_2>_>
          param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  FBlock *pFVar5;
  int iVar6;
  bool bVar7;
  
  iVar6 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar6;
      pFVar5 = param_1 + iVar1;
      if ((param_3->bCanWrap == false) && (param_3->bForceNewLine == false)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if ((pFVar5->bCanWrap == false) && (pFVar5->bForceNewLine == false)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar7) {
        if (bVar4) {
          bVar7 = SBORROW4(param_3->SequentialIndex,pFVar5->SequentialIndex);
          iVar2 = param_3->SequentialIndex - pFVar5->SequentialIndex;
          goto LAB_1427a8e97;
        }
        bVar7 = false;
      }
      else if (bVar4) {
        bVar7 = true;
      }
      else {
        bVar7 = SBORROW4(param_3->SequentialIndex,pFVar5->SequentialIndex);
        iVar2 = param_3->SequentialIndex - pFVar5->SequentialIndex;
LAB_1427a8e97:
        bVar7 = bVar7 != iVar2 < 0;
      }
      if (!bVar7) {
        iVar6 = iVar1 + (param_2 & 1U);
      }
      uVar3 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar3 != 0);
  }
  return iVar6;
}

// _Atomic_address_as<char,std::_Atomic_padded<enum_EAsyncTaskNotificationPromptAction>_> @ 1427a8f10

char * __cdecl
std::_Atomic_address_as<char,std::_Atomic_padded<enum_EAsyncTaskNotificationPromptAction>_>
          (_Atomic_padded<EAsyncTaskNotificationPromptAction> *param_1)

{
  return (char *)param_1;
}

// _Atomic_address_as<char,std::_Atomic_padded<enum_EAsyncTaskNotificationPromptAction>_> @ 1427a8f20

char * __cdecl
std::_Atomic_address_as<char,std::_Atomic_padded<enum_EAsyncTaskNotificationPromptAction>_>
          (_Atomic_padded<EAsyncTaskNotificationPromptAction> *param_1)

{
  return (char *)param_1;
}

// _Atomic_reinterpret_as<char,enum_EAsyncTaskNotificationPromptAction> @ 1427a8f30

char __cdecl
std::_Atomic_reinterpret_as<char,enum_EAsyncTaskNotificationPromptAction>
          (EAsyncTaskNotificationPromptAction *param_1)

{
  return *param_1;
}

// TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`SToolBarComboButtonBlock::BuildMultiBlockWidget'::__l35::<lambda_1>_> @ 1427a9880

TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,_public:_virtual_void___cdecl_SToolBarComboButtonBlock::BuildMultiBlockWidget(ISlateStyle_const_*,FName_const_&)_::_35_::<lambda_1>_>
* __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`SToolBarComboButtonBlock::BuildMultiBlockWidget'::__l35::<lambda_1>_>
::
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,_SToolBarComboButtonBlock::BuildMultiBlockWidget_::__l35::<lambda_1>_>
          (void *this,
          TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,_public:_virtual_void___cdecl_SToolBarComboButtonBlock::BuildMultiBlockWidget(ISlateStyle_const_*,FName_const_&)_::_35_::<lambda_1>_>
          *param_1)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  *(undefined ***)this =
       &___7__TCommonDelegateInstanceState___A6A_AUFMargin__XZUFDefaultDelegateUserPolicy____V__6B_;
  *(longlong *)((longlong)this + 0x10) = param_1->_padding_;
  *(undefined ***)this =
       &TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`SToolBarComboButtonBlock::BuildMultiBlockWidget'::`35'::<lambda_1>_>
        ::_vftable_;
  *(bool *)((longlong)this + 0x20) = (param_1->Functor).bIsSplitButton;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  pIVar1 = (param_1->Functor).Label.Value.TextData.Reference;
  *(ITextData **)((longlong)this + 0x28) = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  *(uint *)((longlong)this + 0x30) = (param_1->Functor).Label.Value.Flags;
  *(bool *)((longlong)this + 0x38) = (param_1->Functor).Label.bIsSet;
  *(undefined8 *)((longlong)this + 0x40) = 0;
  *(undefined8 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x50) = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 0x40),
             &(param_1->Functor).Label.Getter);
  FToolBarStyle::FToolBarStyle
            ((FToolBarStyle *)((longlong)this + 0x60),&(param_1->Functor).ToolBarStyle);
  return this;
}

// TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`SToolBarComboButtonBlock::BuildMultiBlockWidget'::__l37::<lambda_2>_> @ 1427a9920

TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,_public:_virtual_void___cdecl_SToolBarComboButtonBlock::BuildMultiBlockWidget(ISlateStyle_const_*,FName_const_&)_::_37_::<lambda_2>_>
* __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`SToolBarComboButtonBlock::BuildMultiBlockWidget'::__l37::<lambda_2>_>
::
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,_SToolBarComboButtonBlock::BuildMultiBlockWidget_::__l37::<lambda_2>_>
          (void *this,
          TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,_public:_virtual_void___cdecl_SToolBarComboButtonBlock::BuildMultiBlockWidget(ISlateStyle_const_*,FName_const_&)_::_37_::<lambda_2>_>
          *param_1)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  *(undefined ***)this =
       &___7__TCommonDelegateInstanceState___A6A_AUFMargin__XZUFDefaultDelegateUserPolicy____V__6B_;
  *(longlong *)((longlong)this + 0x10) = param_1->_padding_;
  *(undefined ***)this =
       &TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`SToolBarComboButtonBlock::BuildMultiBlockWidget'::`37'::<lambda_2>_>
        ::_vftable_;
  *(undefined8 *)((longlong)this + 0x20) = 0;
  pIVar1 = (param_1->Functor).Label.Value.TextData.Reference;
  *(ITextData **)((longlong)this + 0x20) = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  *(uint *)((longlong)this + 0x28) = (param_1->Functor).Label.Value.Flags;
  *(bool *)((longlong)this + 0x30) = (param_1->Functor).Label.bIsSet;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined8 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x48) = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 0x38),
             &(param_1->Functor).Label.Getter);
  FToolBarStyle::FToolBarStyle
            ((FToolBarStyle *)((longlong)this + 0x50),&(param_1->Functor).ToolBarStyle);
  return this;
}

// TBaseFunctorDelegateInstance<FMenuEntryResizeParams___cdecl(void),FDefaultDelegateUserPolicy,`UE::Slate::Private::ApplySectionOverridesToBlock'::__l14::<lambda_1>_> @ 1427a99c0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TBaseFunctorDelegateInstance<FMenuEntryResizeParams___cdecl(void),FDefaultDelegateUserPolicy,_void___cdecl_UE::Slate::Private::ApplySectionOverridesToBlock(TSharedRef<FMultiBlock,1>_const_&,TAttribute<FMenuEntryResizeParams>_const_&)_::_14_::<lambda_1>_>
* __thiscall
TBaseFunctorDelegateInstance<FMenuEntryResizeParams___cdecl(void),FDefaultDelegateUserPolicy,`UE::Slate::Private::ApplySectionOverridesToBlock'::__l14::<lambda_1>_>
::
TBaseFunctorDelegateInstance<FMenuEntryResizeParams___cdecl(void),FDefaultDelegateUserPolicy,_UE::Slate::Private::ApplySectionOverridesToBlock_::__l14::<lambda_1>_>
          (void *this,
          TBaseFunctorDelegateInstance<FMenuEntryResizeParams___cdecl(void),FDefaultDelegateUserPolicy,_void___cdecl_UE::Slate::Private::ApplySectionOverridesToBlock(TSharedRef<FMultiBlock,1>_const_&,TAttribute<FMenuEntryResizeParams>_const_&)_::_14_::<lambda_1>_>
          *param_1)

{
  *(undefined ***)this =
       &
       ___7__TCommonDelegateInstanceState___A6A_AUFMenuEntryResizeParams__XZUFDefaultDelegateUserPolicy____V__6B_
  ;
  *(longlong *)((longlong)this + 0x10) = param_1->_padding_;
  *(undefined ***)this =
       &TBaseFunctorDelegateInstance<FMenuEntryResizeParams___cdecl(void),FDefaultDelegateUserPolicy,`UE::Slate::Private::ApplySectionOverridesToBlock'::`14'::<lambda_1>_>
        ::_vftable_;
  FMenuEntryResizeParams::FMenuEntryResizeParams
            ((FMenuEntryResizeParams *)((longlong)this + 0x18),
             (FMenuEntryResizeParams *)&param_1->Functor);
  *(bool *)((longlong)this + 0xe0) = (param_1->Functor).BlockResizeParamsAttribute.bIsSet;
  *(undefined8 *)((longlong)this + 0xe8) = 0;
  *(undefined8 *)((longlong)this + 0xf0) = 0;
  *(undefined4 *)((longlong)this + 0xf8) = 0;
  TDelegate<FMenuEntryResizeParams___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FMenuEntryResizeParams___cdecl(void),FDefaultDelegateUserPolicy> *)
             ((longlong)this + 0xe8),&(param_1->Functor).BlockResizeParamsAttribute.Getter);
  FMenuEntryResizeParams::FMenuEntryResizeParams
            ((FMenuEntryResizeParams *)((longlong)this + 0x100),
             &(param_1->Functor).SectionResizeParams);
  return this;
}

// ~TFunction_OwnedObject<`FToolBarBuilder::AddToolBarWidget'::__l2::<lambda_1>,0,1> @ 1427b70c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FToolBarBuilder::AddToolBarWidget'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FToolBarBuilder::AddToolBarWidget_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FToolBarBuilder::AddToolBarWidget'::`2'::<lambda_1>,0,1>::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  return;
}

// ~TFunction_OwnedObject<`SToolBarButtonBlock::BuildMultiBlockWidget'::__l2::<lambda_1>,0,1> @ 1427b70e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SToolBarButtonBlock::BuildMultiBlockWidget'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_SToolBarButtonBlock::BuildMultiBlockWidget_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`SToolBarButtonBlock::BuildMultiBlockWidget'::`2'::<lambda_1>,0,1>::
        _vftable_;
  `SToolBarButtonBlock::BuildMultiBlockWidget'::__l2::<lambda_1>::~<lambda_1>
            ((void *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`SClippingVerticalBox::InitializeWrapButton'::__l2::<lambda_1>,0,0> @ 1427b7100

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SClippingVerticalBox::InitializeWrapButton'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_SClippingVerticalBox::InitializeWrapButton_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`SClippingVerticalBox::InitializeWrapButton'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`SMultiBoxWidget::AddBlockWidget'::__l21::<lambda_1>,0,1> @ 1427b7120

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SMultiBoxWidget::AddBlockWidget'::__l21::<lambda_1>,0,1>::
~TFunction_OwnedObject<_SMultiBoxWidget::AddBlockWidget_::__l21::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`SMultiBoxWidget::AddBlockWidget'::`21'::<lambda_1>,0,1>::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  return;
}

// ~TFunction_OwnedObject<`FToolBarBuilder::AddToolBarWidget'::__l2::<lambda_2>,0,0> @ 1427b7140

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FToolBarBuilder::AddToolBarWidget'::__l2::<lambda_2>,0,0>::
~TFunction_OwnedObject<_FToolBarBuilder::AddToolBarWidget_::__l2::<lambda_2>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FToolBarBuilder::AddToolBarWidget'::`2'::<lambda_2>,0,0>::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`SMultiBoxWidget::BuildMultiBoxWidget'::__l25::<lambda_2>,0,0> @ 1427b7160

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SMultiBoxWidget::BuildMultiBoxWidget'::__l25::<lambda_2>,0,0>::
~TFunction_OwnedObject<_SMultiBoxWidget::BuildMultiBoxWidget_::__l25::<lambda_2>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`SMultiBoxWidget::BuildMultiBoxWidget'::`25'::<lambda_2>,0,0>::
        _vftable_;
  return;
}

// `vcall'{152,{flat}}'_}' @ 1427bf1e4

/* [thunk]: __cdecl STableRow<class TSharedPtr<class SWidget,1> >::`vcall'{152,{flat}}' }' */

void __thiscall
STableRow<TSharedPtr<SWidget,1>_>::_vcall__152__flat______(STableRow<TSharedPtr<SWidget,1>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001427bf1e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x98))();
  return;
}

// `vector_deleting_destructor'`adjustor{680}' @ 1427bf1f4

/* [thunk]:public: virtual void * __ptr64 __cdecl SListView<class TSharedPtr<class SWidget,1>
   >::`vector deleting destructor'`adjustor{680}' (unsigned int) __ptr64 */

void * __thiscall
SListView<TSharedPtr<SWidget,1>_>::_vector_deleting_destructor__adjustor_680__
          (SListView<TSharedPtr<SWidget,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SListView<TSharedPtr<SWidget,1>_> *)&this[-1].OnGenerateRow.field_0x10,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 1427bf208

/* [thunk]:public: virtual void * __ptr64 __cdecl STableRow<class TSharedPtr<class SWidget,1>
   >::`vector deleting destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
STableRow<TSharedPtr<SWidget,1>_>::_vector_deleting_destructor__adjustor_8__
          (STableRow<TSharedPtr<SWidget,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((STableRow<TSharedPtr<SWidget,1>_> *)&this[-1].bChangedSelectionOnMouseDown,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{680}' @ 1427bf218

/* [thunk]:public: virtual void * __ptr64 __cdecl STileView<class TSharedPtr<class SWidget,1>
   >::`vector deleting destructor'`adjustor{680}' (unsigned int) __ptr64 */

void * __thiscall
STileView<TSharedPtr<SWidget,1>_>::_vector_deleting_destructor__adjustor_680__
          (STileView<TSharedPtr<SWidget,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((STileView<TSharedPtr<SWidget,1>_> *)&this[-1].field_0x768,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 1427bf22c

/* [thunk]:public: virtual void * __ptr64 __cdecl SButtonRowBlock::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
SButtonRowBlock::_vector_deleting_destructor__adjustor_8__(SButtonRowBlock *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SButtonRowBlock *)&this[-1].ToggleButton.SharedReferenceCount,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 1427bf23c

/* [thunk]:public: virtual void * __ptr64 __cdecl SCustomToolbarPreviewWidget::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
SCustomToolbarPreviewWidget::_vector_deleting_destructor__adjustor_8__
          (SCustomToolbarPreviewWidget *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SCustomToolbarPreviewWidget *)&this[-1].Content.SharedReferenceCount,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 1427bf24c

/* [thunk]:public: virtual void * __ptr64 __cdecl SEditableTextBlock::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
SEditableTextBlock::_vector_deleting_destructor__adjustor_8__(SEditableTextBlock *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((SEditableTextBlock *)&this[-1].field_0x2e0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 1427bf25c

/* [thunk]:public: virtual void * __ptr64 __cdecl SGroupMarkerBlock::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
SGroupMarkerBlock::_vector_deleting_destructor__adjustor_8__(SGroupMarkerBlock *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((SGroupMarkerBlock *)&this[-1].field_0x2e0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 1427bf26c

/* [thunk]:public: virtual void * __ptr64 __cdecl SHeadingBlock::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
SHeadingBlock::_vector_deleting_destructor__adjustor_8__(SHeadingBlock *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((SHeadingBlock *)&this[-1].field_0x2e0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 1427bf27c

/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl SMenuEntryBlock::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
SMenuEntryBlock::_vector_deleting_destructor__adjustor_8__(SMenuEntryBlock *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((SMenuEntryBlock *)&this[-1].MenuBarButtonStyle,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 1427bf28c

/* [thunk]:public: virtual void * __ptr64 __cdecl SMenuSeparatorBlock::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
SMenuSeparatorBlock::_vector_deleting_destructor__adjustor_8__
          (SMenuSeparatorBlock *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((SMenuSeparatorBlock *)&this[-1].field_0x2e0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 1427bf29c

/* [thunk]:public: virtual void * __ptr64 __cdecl SMenuSpacerBlock::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
SMenuSpacerBlock::_vector_deleting_destructor__adjustor_8__(SMenuSpacerBlock *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((SMenuSpacerBlock *)&this[-1].field_0x2e0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 1427bf2ac

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl SMultiBlockBaseWidget::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
SMultiBlockBaseWidget::_vector_deleting_destructor__adjustor_8__
          (SMultiBlockBaseWidget *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((SMultiBlockBaseWidget *)&this[-1].Location,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 1427bf2bc

/* [thunk]:public: virtual void * __ptr64 __cdecl SToolBarButtonBlock::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
SToolBarButtonBlock::_vector_deleting_destructor__adjustor_8__
          (SToolBarButtonBlock *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SToolBarButtonBlock *)&this[-1].TutorialHighlightName.Number,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 1427bf2cc

/* [thunk]:public: virtual void * __ptr64 __cdecl SToolBarComboButtonBlock::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
SToolBarComboButtonBlock::_vector_deleting_destructor__adjustor_8__
          (SToolBarComboButtonBlock *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((SToolBarComboButtonBlock *)&this[-1].BlockHovered,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 1427bf2dc

/* [thunk]:public: virtual void * __ptr64 __cdecl SToolBarSeparatorBlock::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
SToolBarSeparatorBlock::_vector_deleting_destructor__adjustor_8__
          (SToolBarSeparatorBlock *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((SToolBarSeparatorBlock *)&this[-1].field_0x2e0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 1427bf2ec

/* [thunk]:public: virtual void * __ptr64 __cdecl SToolBarStackButtonBlock::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
SToolBarStackButtonBlock::_vector_deleting_destructor__adjustor_8__
          (SToolBarStackButtonBlock *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SToolBarStackButtonBlock *)&this[-1].OpenForegroundColor.ColorUseRule,param_1
                     );
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 1427bf2fc

/* [thunk]:public: virtual void * __ptr64 __cdecl SUniformToolbarButtonBlock::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
SUniformToolbarButtonBlock::_vector_deleting_destructor__adjustor_8__
          (SUniformToolbarButtonBlock *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((SUniformToolbarButtonBlock *)&this[-1].field_0x338,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 1427bf30c

/* [thunk]:public: virtual void * __ptr64 __cdecl SWidgetBlock::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
SWidgetBlock::_vector_deleting_destructor__adjustor_8__(SWidgetBlock *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((SWidgetBlock *)&this[-1].field_0x2e0,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 1427bf320

void * __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedPtr<SWidget,1>_>::_scalar_deleting_destructor_
          (FArrayPointer<TSharedPtr<SWidget,1>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427bf350

void * __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<SWidget,1>_>::
_scalar_deleting_destructor_(FObservableArrayPointer<TSharedPtr<SWidget,1>_> *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDelegateHandle FVar4;
  code *pcVar5;
  bool bVar6;
  void *pvVar7;
  
  this->_padding_ =
       (longlong)
       &___7__FObservableArrayPointer_V__TSharedPtr_VSWidget___00___ItemsSource_Slate_UE__6B_;
  if ((((this->ListViewOwner).Object == (STableViewBase *)0x0) ||
      (pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController,
      pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ListViewOwner.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\IItemsSource.h"
                       ,0xa6,
                       L"The View widget has a source needed to be released to prevent bad memory access."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pvVar7 = (void *)(*pcVar5)();
      return pvVar7;
    }
  }
  FVar4.ID = (this->ArrayChangedHandle).ID;
  if (FVar4.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->ItemsSource->ArrayChangedDelegate,FVar4);
  }
  pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
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
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427bf410

void * __thiscall
SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::_scalar_deleting_destructor_
          (FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *this,uint param_1)

{
  ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427bf450

void * __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<SWidget,1>_>::_scalar_deleting_destructor_
          (FSharedObservableArray<TSharedPtr<SWidget,1>_> *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FDelegateHandle FVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  FVar3.ID = (this->ArrayChangedHandle).ID;
  this->_padding_ =
       (longlong)
       &___7__FSharedObservableArray_V__TSharedPtr_VSWidget___00___ItemsSource_Slate_UE__6B_;
  if (FVar3.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &((this->ItemsSource).Object)->ArrayChangedDelegate,FVar3);
  }
  pTVar4 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ItemsSource).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427bf4e0

void * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,enum_UE::Slate::PrioritizedWrapBox::EWrapMode,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,enum_UE::Slate::PrioritizedWrapBox::EWrapMode,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
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

// `scalar_deleting_destructor' @ 1427bf540

void * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
::_scalar_deleting_destructor_
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
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

// `scalar_deleting_destructor' @ 1427bf5a0

void * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::_scalar_deleting_destructor_
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// `scalar_deleting_destructor' @ 1427bf600

void * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TOptional<float>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<float>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::_scalar_deleting_destructor_
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<float>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// `scalar_deleting_destructor' @ 1427bf660

void * __thiscall
IBaseDelegateInstance<EVisibility___cdecl(enum_SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427bf690

void * __thiscall
IBaseDelegateInstance<FMenuEntryResizeParams___cdecl(TSharedRef<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<FMenuEntryResizeParams___cdecl(TSharedRef<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427bf6c0

void * __thiscall
IBaseDelegateInstance<FMenuEntryResizeParams___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<FMenuEntryResizeParams___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427bf6f0

void * __thiscall
IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<SWidget,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<SWidget,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427bf720

void * __thiscall
IBaseDelegateInstance<TSharedRef<SToolTip,1>___cdecl(TAttribute<FText>_const_&,TSharedPtr<SWidget,1>_const_&,TSharedPtr<FUICommandInfo_const_,1>_const_&,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedRef<SToolTip,1>___cdecl(TAttribute<FText>_const_&,TSharedPtr<SWidget,1>_const_&,TSharedPtr<FUICommandInfo_const_,1>_const_&,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427bf750

void * __thiscall
IBaseDelegateInstance<FString___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<FString___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427bf780

void * __thiscall
IBaseDelegateInstance<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427bf7b0

void * __thiscall
IBaseDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427bf7e0

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SWidget,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SWidget,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427bf810

void * __thiscall
IBaseDelegateInstance<bool___cdecl(enum_SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427bf840

void * __thiscall
UE::Slate::ItemsSource::IItemsSource<TSharedPtr<SWidget,1>_>::_scalar_deleting_destructor_
          (IItemsSource<TSharedPtr<SWidget,1>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427bf870

void * __thiscall
SListView<TSharedPtr<SWidget,1>_>::_scalar_deleting_destructor_
          (SListView<TSharedPtr<SWidget,1>_> *this,uint param_1)

{
  ~SListView<TSharedPtr<SWidget,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0xa00);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427bf8d0

void * __thiscall
STableRow<TSharedPtr<SWidget,1>_>::_scalar_deleting_destructor_
          (STableRow<TSharedPtr<SWidget,1>_> *this,uint param_1)

{
  ~STableRow<TSharedPtr<SWidget,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427bf930

void * __thiscall
STileView<TSharedPtr<SWidget,1>_>::_scalar_deleting_destructor_
          (STileView<TSharedPtr<SWidget,1>_> *this,uint param_1)

{
  SListView<TSharedPtr<SWidget,1>_>::~SListView<TSharedPtr<SWidget,1>_>
            ((SListView<TSharedPtr<SWidget,1>_> *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0xa10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427bf990

void * __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`SToolBarComboButtonBlock::BuildMultiBlockWidget'::__l35::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FToolBarStyle::~FToolBarStyle((FToolBarStyle *)((longlong)this + 0x60));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x40));
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x40));
  if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)this + 0x28) + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x3f60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427bfa10

void * __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`SToolBarButtonBlock::BuildMultiBlockWidget'::__l37::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427bfa50

void * __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`SToolBarComboButtonBlock::BuildMultiBlockWidget'::__l37::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FToolBarStyle::~FToolBarStyle((FToolBarStyle *)((longlong)this + 0x50));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x38));
  if (*(void **)((longlong)this + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x40));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x38));
  if (*(longlong **)((longlong)this + 0x20) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)this + 0x20) + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x3f50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427bfad0

void * __thiscall
TBaseFunctorDelegateInstance<FMenuEntryResizeParams___cdecl(TSharedRef<SWidget,1>_const_&),FDefaultDelegateUserPolicy,`SMultiBoxWidget::BuildMultiBoxWidget'::__l23::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427bfb00

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void * __thiscall
TBaseFunctorDelegateInstance<FMenuEntryResizeParams___cdecl(void),FDefaultDelegateUserPolicy,`UE::Slate::Private::ApplySectionOverridesToBlock'::__l14::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FMenuEntryResizeParams::~FMenuEntryResizeParams
            ((FMenuEntryResizeParams *)((longlong)this + 0x100));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0xe8));
  if (*(void **)((longlong)this + 0xf0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xf0));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0xe8));
  FMenuEntryResizeParams::~FMenuEntryResizeParams((FMenuEntryResizeParams *)((longlong)this + 0x18))
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427bfb90

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SClippingVerticalBox::InitializeWrapButton'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427bfbc0

void * __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,TFunction<int___cdecl(void)>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,TFunction<int___cdecl(void)>_>
           *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Functor != 0) {
    plVar1 = *(longlong **)&(this->Functor).field_0x28;
    plVar2 = (longlong *)&(this->Functor).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427bfc20

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,TFunction<bool___cdecl(void)>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,TFunction<bool___cdecl(void)>_>
           *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Functor != 0) {
    plVar1 = *(longlong **)&(this->Functor).field_0x28;
    plVar2 = (longlong *)&(this->Functor).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427bfc80

void * __thiscall
TBaseRawMethodDelegateInstance<1,SButtonRowBlock_const_,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<1,SButtonRowBlock_const_,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427bfcb0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<1,SMenuEntryBlock_const_,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<1,SMenuEntryBlock_const_,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427bfce0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<SWidget,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SWidget,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<SWidget,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SWidget,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427bfd10

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<SWidget,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SWidget,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<SWidget,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SWidget,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427bfd40

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FSlateNotificationManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FSlateNotificationManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427bfd70

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<SWidget,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<SWidget,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427bfdd0

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<SWidget,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<SWidget,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427bfe30

void * __thiscall
TBaseSPMethodDelegateInstance<1,FSlateAsyncTaskNotificationImpl_const_,1,EVisibility___cdecl(enum_SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427bfe90

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,FSlateAsyncTaskNotificationImpl_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,FSlateAsyncTaskNotificationImpl_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427bfef0

void * __thiscall
TBaseSPMethodDelegateInstance<1,FSlateAsyncTaskNotificationImpl_const_,1,bool___cdecl(enum_SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427bff50

void * __thiscall
TBaseSPMethodDelegateInstance<1,SButtonRowBlock_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SButtonRowBlock_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427bffb0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SButtonRowBlock_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,bool>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SButtonRowBlock_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,bool>
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

// `scalar_deleting_destructor' @ 1427c0010

void * __thiscall
TBaseSPMethodDelegateInstance<1,SButtonRowBlock_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c0070

void * __thiscall
TBaseSPMethodDelegateInstance<1,SButtonRowBlock_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SButtonRowBlock_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c00d0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SEditableTextBlock_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SEditableTextBlock_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c0130

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SMenuEntryBlock_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SMenuEntryBlock_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c0190

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SMenuEntryBlock_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SMenuEntryBlock_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c01f0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SMenuEntryBlock_const_,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SMenuEntryBlock_const_,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c0250

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SMenuEntryBlock_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FText>_>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SMenuEntryBlock_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FText>_>
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

// `scalar_deleting_destructor' @ 1427c02f0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SMenuEntryBlock_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c0350

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SMenuEntryBlock_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SMenuEntryBlock_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c03b0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SMenuEntryBlock_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy,FCheckBoxStyle_const_*>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SMenuEntryBlock_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy,FCheckBoxStyle_const_*>
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

// `scalar_deleting_destructor' @ 1427c0410

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SMenuEntryBlock_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SMenuEntryBlock_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c0470

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SMultiBoxWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SMultiBoxWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c04d0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SMultiBoxWidget_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SMultiBoxWidget_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c0530

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SMultiBoxWidget_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SMultiBoxWidget_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c0590

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSubMenuButton_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SSubMenuButton_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c05f0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSubMenuButton_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SSubMenuButton_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c0650

void * __thiscall
TBaseSPMethodDelegateInstance<1,SToolBarButtonBlock_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SToolBarButtonBlock_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c06b0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SToolBarButtonBlock_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,bool>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SToolBarButtonBlock_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,bool>
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

// `scalar_deleting_destructor' @ 1427c0710

void * __thiscall
TBaseSPMethodDelegateInstance<1,SToolBarButtonBlock_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SToolBarButtonBlock_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c0770

void * __thiscall
TBaseSPMethodDelegateInstance<1,SToolBarButtonBlock_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c07d0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SToolBarButtonBlock_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SToolBarButtonBlock_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c0830

void * __thiscall
TBaseSPMethodDelegateInstance<1,SToolBarButtonBlock_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SToolBarButtonBlock_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c0890

void * __thiscall
TBaseSPMethodDelegateInstance<1,SToolBarComboButtonBlock_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SToolBarComboButtonBlock_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c08f0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SToolBarComboButtonBlock_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,bool>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SToolBarComboButtonBlock_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,bool>
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

// `scalar_deleting_destructor' @ 1427c0950

void * __thiscall
TBaseSPMethodDelegateInstance<1,SToolBarComboButtonBlock_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SToolBarComboButtonBlock_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c09b0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SToolBarComboButtonBlock_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c0a10

void * __thiscall
TBaseSPMethodDelegateInstance<1,SToolBarComboButtonBlock_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SToolBarComboButtonBlock_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c0a70

void * __thiscall
TBaseSPMethodDelegateInstance<1,SToolBarComboButtonBlock_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SToolBarComboButtonBlock_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c0ad0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SToolBarStackButtonBlock_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SToolBarStackButtonBlock_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c0b30

void * __thiscall
TBaseSPMethodDelegateInstance<1,SToolBarStackButtonBlock_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,bool>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SToolBarStackButtonBlock_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,bool>
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

// `scalar_deleting_destructor' @ 1427c0b90

void * __thiscall
TBaseSPMethodDelegateInstance<1,SToolBarStackButtonBlock_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SToolBarStackButtonBlock_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c0bf0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SToolBarStackButtonBlock_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SToolBarStackButtonBlock_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c0c50

void * __thiscall
TBaseSPMethodDelegateInstance<1,SToolBarStackButtonBlock_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c0cb0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SToolBarStackButtonBlock_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SToolBarStackButtonBlock_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c0d10

void * __thiscall
TBaseSPMethodDelegateInstance<1,SToolBarStackButtonBlock_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SToolBarStackButtonBlock_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c0d70

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,FSlateAsyncTaskNotificationImpl,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,FSlateAsyncTaskNotificationImpl,1,void___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c0dd0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,FSlateAsyncTaskNotificationImpl,1,bool___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,FSlateAsyncTaskNotificationImpl,1,bool___cdecl(float),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c0e30

void * __thiscall
TBaseSPMethodDelegateInstance<0,SButtonRowBlock,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SButtonRowBlock,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c0e90

void * __thiscall
TBaseSPMethodDelegateInstance<0,SButtonRowBlock,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c0ef0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SCheckBoxStack,1,bool___cdecl(float),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SCheckBoxStack,1,bool___cdecl(float),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c0f50

void * __thiscall
TBaseSPMethodDelegateInstance<0,SClippingHorizontalBox,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c0fb0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SClippingHorizontalBox,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SClippingHorizontalBox,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c1010

void * __thiscall
TBaseSPMethodDelegateInstance<0,SClippingVerticalBox,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c1070

void * __thiscall
TBaseSPMethodDelegateInstance<0,SClippingVerticalBox,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SClippingVerticalBox,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c10d0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMenuEntryBlock,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SMenuEntryBlock,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c1130

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMenuEntryBlock,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,bool>
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

// `scalar_deleting_destructor' @ 1427c1190

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMenuEntryBlock,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c11f0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMultiBoxWidget,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<SWidget,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SMultiBoxWidget,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<SWidget,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c1250

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMultiBoxWidget,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SMultiBoxWidget,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c12b0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMultiBoxWidget,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SMultiBoxWidget,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c1310

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMultiBoxWidget,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c1370

void * __thiscall
TBaseSPMethodDelegateInstance<0,SToolBarButtonBlock,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SToolBarButtonBlock,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c13d0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SToolBarButtonBlock,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c1430

void * __thiscall
TBaseSPMethodDelegateInstance<0,SToolBarComboButtonBlock,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SToolBarComboButtonBlock,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c1490

void * __thiscall
TBaseSPMethodDelegateInstance<0,SToolBarComboButtonBlock,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c14f0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SToolBarStackButtonBlock,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SToolBarStackButtonBlock,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c1550

void * __thiscall
TBaseSPMethodDelegateInstance<0,SToolBarStackButtonBlock,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427c15b0

void * __thiscall
TBaseStaticDelegateInstance<TSharedRef<SToolTip,1>___cdecl(TAttribute<FText>_const_&,TSharedPtr<SWidget,1>_const_&,TSharedPtr<FUICommandInfo_const_,1>_const_&,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<TSharedRef<SToolTip,1>___cdecl(TAttribute<FText>_const_&,TSharedPtr<SWidget,1>_const_&,TSharedPtr<FUICommandInfo_const_,1>_const_&,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c15e0

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c1610

void * __thiscall
TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FText>,TSharedPtr<FUICommandInfo_const_,1>_>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FText>,TSharedPtr<FUICommandInfo_const_,1>_>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
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
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c1690

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
           *this,uint param_1)

{
  UE::Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
  ::
  ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
              *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c16d0

void * __thiscall
TBasicLayoutWidgetSlot<SPrioritizedWrapBox::FSlot>::_scalar_deleting_destructor_
          (TBasicLayoutWidgetSlot<SPrioritizedWrapBox::FSlot> *this,uint param_1)

{
  SWidget *pSVar1;
  
  *(undefined ***)this =
       &TWidgetSlotWithAttributeSupport<SPrioritizedWrapBox::FSlot>::
        _vftable__for__TSlotBase<SPrioritizedWrapBox::FSlot>__;
  *(undefined ***)&this->field_0x20 =
       &TWidgetSlotWithAttributeSupport<SPrioritizedWrapBox::FSlot>::
        _vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  pSVar1 = FSlotBase::GetOwnerWidget((FSlotBase *)this);
  if (pSVar1 != (SWidget *)0x0) {
    SlateAttributePrivate::ISlateAttributeContainer::RemoveContainerWidget
              ((ISlateAttributeContainer *)&this->field_0x20,pSVar1);
  }
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c1750

void * __thiscall
TCommonDelegateInstanceState<EVisibility___cdecl(enum_SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c1780

void * __thiscall
TCommonDelegateInstanceState<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,bool>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,bool>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c17b0

void * __thiscall
TCommonDelegateInstanceState<FMenuEntryResizeParams___cdecl(TSharedRef<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FMenuEntryResizeParams___cdecl(TSharedRef<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c17e0

void * __thiscall
TCommonDelegateInstanceState<FMenuEntryResizeParams___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FMenuEntryResizeParams___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c1810

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<SWidget,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<SWidget,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c1840

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<SToolTip,1>___cdecl(TAttribute<FText>_const_&,TSharedPtr<SWidget,1>_const_&,TSharedPtr<FUICommandInfo_const_,1>_const_&,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedRef<SToolTip,1>___cdecl(TAttribute<FText>_const_&,TSharedPtr<SWidget,1>_const_&,TSharedPtr<FUICommandInfo_const_,1>_const_&,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c1870

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c18a0

void * __thiscall
TCommonDelegateInstanceState<FString___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FString___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c18d0

void * __thiscall
TCommonDelegateInstanceState<FText___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FText>_>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FText___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FText>_>
           *this,uint param_1)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Payload).field_0x18);
  pvVar1 = *(void **)&(this->Payload).field_0x20;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Payload).field_0x18);
  if (*(longlong **)&this->Payload != (longlong *)0x0) {
    (**(code **)(**(longlong **)&this->Payload + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c1940

void * __thiscall
TCommonDelegateInstanceState<FText___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FText>,TSharedPtr<FUICommandInfo_const_,1>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FText___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FText>,TSharedPtr<FUICommandInfo_const_,1>_>
           *this,uint param_1)

{
  void *pvVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Payload).field_0x38);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Payload).field_0x18);
  pvVar1 = *(void **)&(this->Payload).field_0x20;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Payload).field_0x18);
  if (*(longlong **)&this->Payload != (longlong *)0x0) {
    (**(code **)(**(longlong **)&this->Payload + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c19c0

void * __thiscall
TCommonDelegateInstanceState<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,bool>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c19f0

void * __thiscall
TCommonDelegateInstanceState<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy,FCheckBoxStyle_const_*>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy,FCheckBoxStyle_const_*>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c1a20

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c1a50

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c1a80

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SWidget,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SWidget,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c1ab0

void * __thiscall
TCommonDelegateInstanceState<bool___cdecl(float),FDefaultDelegateUserPolicy,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<bool___cdecl(float),FDefaultDelegateUserPolicy,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
           *this,uint param_1)

{
  UE::Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
  ::
  ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
              *)&this->Payload);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c1af0

void * __thiscall
TCommonDelegateInstanceState<bool___cdecl(enum_SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c1b20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FToolBarBuilder::AddToolBarWidget'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FToolBarBuilder::AddToolBarWidget'::`2'::<lambda_1>,0,1>::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c1b70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SToolBarButtonBlock::BuildMultiBlockWidget'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`SToolBarButtonBlock::BuildMultiBlockWidget'::`2'::<lambda_1>,0,1>::
        _vftable_;
  `SToolBarButtonBlock::BuildMultiBlockWidget'::__l2::<lambda_1>::~<lambda_1>
            ((void *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c1bc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SClippingVerticalBox::InitializeWrapButton'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`SClippingVerticalBox::InitializeWrapButton'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c1c00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SMultiBoxWidget::AddBlockWidget'::__l21::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`SMultiBoxWidget::AddBlockWidget'::`21'::<lambda_1>,0,1>::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c1c50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FToolBarBuilder::AddToolBarWidget'::__l2::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FToolBarBuilder::AddToolBarWidget'::`2'::<lambda_2>,0,0>::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c1ca0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SMultiBoxWidget::BuildMultiBoxWidget'::__l25::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`SMultiBoxWidget::BuildMultiBoxWidget'::`25'::<lambda_2>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c1ce0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SMultiBoxWidget::FFlattenSearchableBlockInfo,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c1d20

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STableRow<TSharedPtr<SWidget,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STableRow<TSharedPtr<SWidget,1>_>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x408);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c1d60

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STileView<TSharedPtr<SWidget,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STileView<TSharedPtr<SWidget,1>_>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c1da0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<SWidget,1>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<SWidget,1>_>,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c1de0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FExtender,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FExtender,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c1e20

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FHeadingBlock,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FHeadingBlock,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c1e60

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FLinkedBoxManager,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FLinkedBoxManager,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c1ea0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMenuEntryBlock,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FMenuEntryBlock,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c1ee0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMenuSpacerBlock,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FMenuSpacerBlock,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c1f20

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FTagMetaData,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FTagMetaData,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c1f60

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FToolBarSeparatorBlock,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FToolBarSeparatorBlock,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c1fa0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FWidgetBlock,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FWidgetBlock,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x348);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c1fe0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SButtonRowBlock,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SButtonRowBlock,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x308);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c2020

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SCheckBoxStack,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SCheckBoxStack,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x498);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c2060

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SClippingHorizontalBox,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SClippingHorizontalBox,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c20a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SClippingVerticalBox,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SClippingVerticalBox,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c20e0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SColorBlock,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SColorBlock,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x290);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c2120

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SComboButton,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SComboButton,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c2160

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SCustomToolbarPreviewWidget,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SCustomToolbarPreviewWidget,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x308);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c21a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SEditableTextBlock,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SEditableTextBlock,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c21e0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SEditableTextBox,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SEditableTextBox,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x530);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c2220

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SExpanderArrow,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SExpanderArrow,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c2260

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SGroupMarkerBlock,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SGroupMarkerBlock,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c22a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SHeadingBlock,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SHeadingBlock,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c22e0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SLayeredImage,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SLayeredImage,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c2320

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SLinkedBox,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SLinkedBox,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c2360

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SMenuAnchor,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SMenuAnchor,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x358);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c23a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SMenuEntryBlock,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SMenuEntryBlock,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x330);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c23e0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SMenuEntryButton,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SMenuEntryButton,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x4c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c2420

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SMenuSeparatorBlock,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SMenuSeparatorBlock,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c2460

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SMenuSpacerBlock,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SMenuSpacerBlock,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c24a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SMultiBoxWidget,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SMultiBoxWidget,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x578);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c24e0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SNotificationList,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SNotificationList,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c2520

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SPrioritizedWrapBox,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SPrioritizedWrapBox,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x278);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c2560

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SScrollBox,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SScrollBox,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x480);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c25a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSearchBox,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SSearchBox,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x6d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c25e0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSeparator,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SSeparator,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c2620

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSubMenuButton,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SSubMenuButton,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x4e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c2660

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SToolBarButtonBlock,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SToolBarButtonBlock,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x350);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c26a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SToolBarComboButtonBlock,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SToolBarComboButtonBlock,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x390);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c26e0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SToolBarSeparatorBlock,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SToolBarSeparatorBlock,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c2720

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SToolBarStackButtonBlock,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SToolBarStackButtonBlock,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x388);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c2760

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SUniformToolbarButtonBlock,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SUniformToolbarButtonBlock,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x350);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c27a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SUniformWrapPanel,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SUniformWrapPanel,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x290);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c27e0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SWidgetBlock,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SWidgetBlock,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c2820

void * __thiscall
TPanelChildren<SUniformToolbarPanel::FSlot>::_scalar_deleting_destructor_
          (TPanelChildren<SUniformToolbarPanel::FSlot> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<SUniformToolbarPanel::FSlot,TDefaultDelete<SUniformToolbarPanel::FSlot>_>,int>
            ((TUniquePtr<SUniformToolbarPanel::FSlot,TDefaultDelete<SUniformToolbarPanel::FSlot>_> *
             )(this->Children).AllocatorInstance.Data,(this->Children).ArrayNum);
  pFVar1 = (this->Children).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FChildren::~FChildren((FChildren *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c2880

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void * __thiscall
TPanelChildren<SPrioritizedWrapBox::FSlot>::_scalar_deleting_destructor_
          (TPanelChildren<SPrioritizedWrapBox::FSlot> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<SPrioritizedWrapBox::FSlot,TDefaultDelete<SPrioritizedWrapBox::FSlot>_>,int>
            ((TUniquePtr<SPrioritizedWrapBox::FSlot,TDefaultDelete<SPrioritizedWrapBox::FSlot>_> *)
             (this->Children).AllocatorInstance.Data,(this->Children).ArrayNum);
  pFVar1 = (this->Children).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FChildren::~FChildren((FChildren *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c28e0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FButtonRowBlock,SharedPointerInternals::DefaultDeleter<FButtonRowBlock>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FButtonRowBlock,SharedPointerInternals::DefaultDeleter<FButtonRowBlock>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c2920

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDriverIdMetaData,SharedPointerInternals::DefaultDeleter<FDriverIdMetaData>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDriverIdMetaData,SharedPointerInternals::DefaultDeleter<FDriverIdMetaData>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c2960

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDropPreviewBlock,SharedPointerInternals::DefaultDeleter<FDropPreviewBlock>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDropPreviewBlock,SharedPointerInternals::DefaultDeleter<FDropPreviewBlock>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c29a0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FEditableTextBlock,SharedPointerInternals::DefaultDeleter<FEditableTextBlock>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FEditableTextBlock,SharedPointerInternals::DefaultDeleter<FEditableTextBlock>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c29e0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FGroupEndBlock,SharedPointerInternals::DefaultDeleter<FGroupEndBlock>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FGroupEndBlock,SharedPointerInternals::DefaultDeleter<FGroupEndBlock>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c2a20

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FGroupStartBlock,SharedPointerInternals::DefaultDeleter<FGroupStartBlock>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FGroupStartBlock,SharedPointerInternals::DefaultDeleter<FGroupStartBlock>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c2a60

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMenuBarExtension,SharedPointerInternals::DefaultDeleter<FMenuBarExtension>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FMenuBarExtension,SharedPointerInternals::DefaultDeleter<FMenuBarExtension>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c2aa0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMenuEntryBlock,SharedPointerInternals::DefaultDeleter<FMenuEntryBlock>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FMenuEntryBlock,SharedPointerInternals::DefaultDeleter<FMenuEntryBlock>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c2ae0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMenuExtension,SharedPointerInternals::DefaultDeleter<FMenuExtension>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FMenuExtension,SharedPointerInternals::DefaultDeleter<FMenuExtension>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c2b20

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMenuSeparatorBlock,SharedPointerInternals::DefaultDeleter<FMenuSeparatorBlock>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FMenuSeparatorBlock,SharedPointerInternals::DefaultDeleter<FMenuSeparatorBlock>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c2b60

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMultiBox,SharedPointerInternals::DefaultDeleter<FMultiBox>,1>::
_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FMultiBox,SharedPointerInternals::DefaultDeleter<FMultiBox>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c2ba0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FToolBarButtonBlock,SharedPointerInternals::DefaultDeleter<FToolBarButtonBlock>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FToolBarButtonBlock,SharedPointerInternals::DefaultDeleter<FToolBarButtonBlock>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c2be0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FToolBarComboButtonBlock,SharedPointerInternals::DefaultDeleter<FToolBarComboButtonBlock>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FToolBarComboButtonBlock,SharedPointerInternals::DefaultDeleter<FToolBarComboButtonBlock>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c2c20

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FToolBarExtension,SharedPointerInternals::DefaultDeleter<FToolBarExtension>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FToolBarExtension,SharedPointerInternals::DefaultDeleter<FToolBarExtension>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c2c60

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FToolBarStackButtonBlock,SharedPointerInternals::DefaultDeleter<FToolBarStackButtonBlock>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FToolBarStackButtonBlock,SharedPointerInternals::DefaultDeleter<FToolBarStackButtonBlock>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c2ca0

void * __thiscall
TSlotBase<SUniformToolbarPanel::FSlot>::_scalar_deleting_destructor_
          (TSlotBase<SUniformToolbarPanel::FSlot> *this,uint param_1)

{
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c2ce0

void * __thiscall
TSlotBase<SPrioritizedWrapBox::FSlot>::_scalar_deleting_destructor_
          (TSlotBase<SPrioritizedWrapBox::FSlot> *this,uint param_1)

{
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c2d20

void * __thiscall
TTableViewMetadata<TSharedPtr<SWidget,1>_>::_scalar_deleting_destructor_
          (TTableViewMetadata<TSharedPtr<SWidget,1>_> *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->OwnerTableView).WeakReferenceCount.ReferenceController;
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
  this->_padding_ = (longlong)&___7ISlateMetaData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c2d90

void * __thiscall
TWidgetSlotWithAttributeSupport<SPrioritizedWrapBox::FSlot>::_scalar_deleting_destructor_
          (TWidgetSlotWithAttributeSupport<SPrioritizedWrapBox::FSlot> *this,uint param_1)

{
  SWidget *pSVar1;
  
  *(undefined ***)this = &_vftable__for__TSlotBase<SPrioritizedWrapBox::FSlot>__;
  *(undefined ***)&this->field_0x20 =
       &_vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  pSVar1 = FSlotBase::GetOwnerWidget((FSlotBase *)this);
  if (pSVar1 != (SWidget *)0x0) {
    SlateAttributePrivate::ISlateAttributeContainer::RemoveContainerWidget
              ((ISlateAttributeContainer *)&this->field_0x20,pSVar1);
  }
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c2e10

void * __thiscall
FBaseMenuBuilder::_scalar_deleting_destructor_(FBaseMenuBuilder *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FMultiBoxBuilder__6B_;
  DestructItems<TSharedPtr<FExtender,1>,int>
            ((TSharedPtr<FExtender,1> *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  DestructItems<TSharedPtr<FUICommandList_const_,1>,int>
            ((TSharedPtr<FUICommandList_const_,1> *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c2e90

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void * __thiscall FButtonRowBlock::_scalar_deleting_destructor_(FButtonRowBlock *this,uint param_1)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ToolTipOverride).Getter);
  pvVar1 = *(void **)&(this->ToolTipOverride).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ToolTipOverride).Getter);
  pIVar2 = (this->ToolTipOverride).Value.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->LabelOverride).Getter);
  pvVar1 = *(void **)&(this->LabelOverride).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->LabelOverride).Getter);
  pIVar2 = (this->LabelOverride).Value.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  FMultiBlock::~FMultiBlock((FMultiBlock *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x250);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c2f50

void * __thiscall
FDriverIdMetaData::_scalar_deleting_destructor_(FDriverIdMetaData *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ISlateMetaData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c2f90

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void * __thiscall
FDropPreviewBlock::_scalar_deleting_destructor_(FDropPreviewBlock *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ActualWidget).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ActualBlock).SharedReferenceCount.ReferenceController);
  FMultiBlock::~FMultiBlock((FMultiBlock *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c2ff0

void * __thiscall
FEditableTextBlock::_scalar_deleting_destructor_(FEditableTextBlock *this,uint param_1)

{
  ~FEditableTextBlock(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c3030

void * __thiscall FExtensionBase::_scalar_deleting_destructor_(FExtensionBase *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FExtensionBase__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CommandList).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c3080

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void * __thiscall FGroupEndBlock::_scalar_deleting_destructor_(FGroupEndBlock *this,uint param_1)

{
  FMultiBlock::~FMultiBlock((FMultiBlock *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c30c0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void * __thiscall
FGroupStartBlock::_scalar_deleting_destructor_(FGroupStartBlock *this,uint param_1)

{
  FMultiBlock::~FMultiBlock((FMultiBlock *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c3100

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void * __thiscall FHeadingBlock::_scalar_deleting_destructor_(FHeadingBlock *this,uint param_1)

{
  ITextData *pIVar1;
  
  pIVar1 = (this->HeadingText).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  FMultiBlock::~FMultiBlock((FMultiBlock *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c3150

void * __thiscall
FMenuBarExtension::_scalar_deleting_destructor_(FMenuBarExtension *this,uint param_1)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->MenuBarExtensionDelegate);
  pvVar1 = *(void **)&(this->MenuBarExtensionDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MenuBarExtensionDelegate);
  this->_padding_ = (longlong)&___7FExtensionBase__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c31d0

void * __thiscall FMenuEntryBlock::_scalar_deleting_destructor_(FMenuEntryBlock *this,uint param_1)

{
  ~FMenuEntryBlock(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c3210

void * __thiscall FMenuExtension::_scalar_deleting_destructor_(FMenuExtension *this,uint param_1)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->MenuExtensionDelegate);
  pvVar1 = *(void **)&(this->MenuExtensionDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MenuExtensionDelegate);
  this->_padding_ = (longlong)&___7FExtensionBase__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c3290

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void * __thiscall
FMenuSeparatorBlock::_scalar_deleting_destructor_(FMenuSeparatorBlock *this,uint param_1)

{
  FMultiBlock::~FMultiBlock((FMultiBlock *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c32d0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void * __thiscall
FMenuSpacerBlock::_scalar_deleting_destructor_(FMenuSpacerBlock *this,uint param_1)

{
  FMultiBlock::~FMultiBlock((FMultiBlock *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c3310

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void * __thiscall FMultiBlock::_scalar_deleting_destructor_(FMultiBlock *this,uint param_1)

{
  ~FMultiBlock(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c3350

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void * __thiscall FMultiBox::_scalar_deleting_destructor_(FMultiBox *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  UObject *pUVar6;
  
  this->_padding_ = (longlong)&___7FMultiBox__6B_;
  pUVar6 = FWeakObjectPtr::Get(&(this->WeakToolMenu).WeakPtr);
  if (pUVar6 != (UObject *)0x0) {
    (**(code **)(*(longlong *)pUVar6 + 0x308))(pUVar6);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->EditSelectionChanged);
  pvVar3 = *(void **)&(this->EditSelectionChanged).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->EditSelectionChanged);
  DestructItems<TSharedRef<FMultiBlock_const_,1>,int>
            ((TSharedRef<FMultiBlock_const_,1> *)(this->Blocks).AllocatorInstance.Data,
             (this->Blocks).ArrayNum);
  pFVar4 = (this->Blocks).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<TSharedPtr<FUICommandList_const_,1>,int>
            ((TSharedPtr<FUICommandList_const_,1> *)(this->CommandLists).AllocatorInstance.Data,
             (this->CommandLists).ArrayNum);
  pFVar4 = (this->CommandLists).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ModifyBlockWidgetAfterMake);
  pvVar3 = *(void **)&(this->ModifyBlockWidgetAfterMake).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ModifyBlockWidgetAfterMake);
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c3450

void * __thiscall
SListView<TSharedPtr<SWidget,1>_>::FSlateAccessibleListView::_scalar_deleting_destructor_
          (FSlateAccessibleListView *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c3490

void * __thiscall
STableRow<TSharedPtr<SWidget,1>_>::FSlateAccessibleTableRow::_scalar_deleting_destructor_
          (FSlateAccessibleTableRow *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c34d0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FSlateAsyncTaskNotificationImpl::_scalar_deleting_destructor_
          (FSlateAsyncTaskNotificationImpl *this,uint param_1)

{
  ~FSlateAsyncTaskNotificationImpl(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x248);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c3510

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void * __thiscall
FSlimHorizontalUniformToolBarBuilder::_scalar_deleting_destructor_
          (FSlimHorizontalUniformToolBarBuilder *this,uint param_1)

{
  FToolBarBuilder::~FToolBarBuilder((FToolBarBuilder *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x158);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c3550

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void * __thiscall SPrioritizedWrapBox::FSlot::_scalar_deleting_destructor_(FSlot *this,uint param_1)

{
  SWidget *pSVar1;
  
  this->_padding_ =
       (longlong)
       &TWidgetSlotWithAttributeSupport<SPrioritizedWrapBox::FSlot>::
        _vftable__for__TSlotBase<SPrioritizedWrapBox::FSlot>__;
  this->_padding_ =
       (longlong)
       &TWidgetSlotWithAttributeSupport<SPrioritizedWrapBox::FSlot>::
        _vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  pSVar1 = FSlotBase::GetOwnerWidget((FSlotBase *)this);
  if (pSVar1 != (SWidget *)0x0) {
    SlateAttributePrivate::ISlateAttributeContainer::RemoveContainerWidget
              ((ISlateAttributeContainer *)&this->_padding_,pSVar1);
  }
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c35d0

void * __thiscall
SUniformToolbarPanel::FSlot::_scalar_deleting_destructor_(FSlot *this,uint param_1)

{
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c3610

void * __thiscall FTagMetaData::_scalar_deleting_destructor_(FTagMetaData *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ISlateMetaData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c3650

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void * __thiscall FToolBarBuilder::_scalar_deleting_destructor_(FToolBarBuilder *this,uint param_1)

{
  ~FToolBarBuilder(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x158);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c3690

void * __thiscall
FToolBarButtonBlock::_scalar_deleting_destructor_(FToolBarButtonBlock *this,uint param_1)

{
  ~FToolBarButtonBlock(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x328);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c36d0

void * __thiscall
FToolBarComboButtonBlock::_scalar_deleting_destructor_(FToolBarComboButtonBlock *this,uint param_1)

{
  ~FToolBarComboButtonBlock(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c3710

void * __thiscall
FToolBarExtension::_scalar_deleting_destructor_(FToolBarExtension *this,uint param_1)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ToolBarExtensionDelegate);
  pvVar1 = *(void **)&(this->ToolBarExtensionDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ToolBarExtensionDelegate);
  this->_padding_ = (longlong)&___7FExtensionBase__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c3790

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void * __thiscall
FToolBarSeparatorBlock::_scalar_deleting_destructor_(FToolBarSeparatorBlock *this,uint param_1)

{
  FMultiBlock::~FMultiBlock((FMultiBlock *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c37d0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void * __thiscall
FToolBarStackButtonBlock::_scalar_deleting_destructor_(FToolBarStackButtonBlock *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  
  pTVar3 = (this->CachedStackContent).WeakReferenceCount.ReferenceController;
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
  pTVar3 = (this->CachedStackIdentifier).WeakReferenceCount.ReferenceController;
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
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->MenuContentGenerator);
  pvVar4 = *(void **)&(this->MenuContentGenerator).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MenuContentGenerator);
  FMultiBlock::~FMultiBlock((FMultiBlock *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x208);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c3890

void * __thiscall
FUniformToolbarButtonBlock::_scalar_deleting_destructor_
          (FUniformToolbarButtonBlock *this,uint param_1)

{
  FToolBarButtonBlock::~FToolBarButtonBlock((FToolBarButtonBlock *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x328);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c38d0

void * __thiscall FWidgetBlock::_scalar_deleting_destructor_(FWidgetBlock *this,uint param_1)

{
  ~FWidgetBlock(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x338);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c3910

void * __thiscall
ITableViewMetadata::_scalar_deleting_destructor_(ITableViewMetadata *this,uint param_1)

{
  *this = (ITableViewMetadata)&___7ISlateMetaData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c3950

void * __thiscall SButtonRowBlock::_scalar_deleting_destructor_(SButtonRowBlock *this,uint param_1)

{
  ~SButtonRowBlock(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c39b0

void * __thiscall SCheckBoxStack::_scalar_deleting_destructor_(SCheckBoxStack *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->HoldPressHandle).WeakReferenceCount.ReferenceController;
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
  SCheckBox::~SCheckBox((SCheckBox *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x488);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c3a30

void * __thiscall
SClippingHorizontalBox::_scalar_deleting_destructor_(SClippingHorizontalBox *this,uint param_1)

{
  ~SClippingHorizontalBox(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c3a90

void * __thiscall
SClippingVerticalBox::_scalar_deleting_destructor_(SClippingVerticalBox *this,uint param_1)

{
  ~SClippingVerticalBox(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0xa20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c3af0

void * __thiscall SComboButton::_scalar_deleting_destructor_(SComboButton *this,uint param_1)

{
  ~SComboButton(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c3b50

void * __thiscall
SCustomToolbarPreviewWidget::_scalar_deleting_destructor_
          (SCustomToolbarPreviewWidget *this,uint param_1)

{
  ~SCustomToolbarPreviewWidget(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c3bb0

void * __thiscall
SEditableTextBlock::_scalar_deleting_destructor_(SEditableTextBlock *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x2d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x2c8);
  plVar3 = *(longlong **)&this->field_0x2b8;
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
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c3c50

void * __thiscall
SGroupMarkerBlock::_scalar_deleting_destructor_(SGroupMarkerBlock *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x2d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x2c8);
  plVar3 = *(longlong **)&this->field_0x2b8;
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
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c3cf0

void * __thiscall SHeadingBlock::_scalar_deleting_destructor_(SHeadingBlock *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x2d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x2c8);
  plVar3 = *(longlong **)&this->field_0x2b8;
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
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c3d90

void * __thiscall SLayeredImage::_scalar_deleting_destructor_(SLayeredImage *this,uint param_1)

{
  ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>
  FVar1;
  
  FVar1 = (this->Layers).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>
                )0x0) {
    FVar1 = (ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>
             )&this->Layers;
  }
  DestructItems<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>,int>
            ((TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>
              *)FVar1,(this->Layers).ArrayNum);
  FVar1 = (this->Layers).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>
                )0x0) {
    FMemory::Free((void *)FVar1);
  }
  SImage::~SImage((SImage *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c3e30

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall SMenuEntryBlock::_scalar_deleting_destructor_(SMenuEntryBlock *this,uint param_1)

{
  ~SMenuEntryBlock(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,800);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c3e90

void * __thiscall
SMenuEntryButton::_scalar_deleting_destructor_(SMenuEntryButton *this,uint param_1)

{
  SButton::~SButton((SButton *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x4b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c3ef0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall SMenuOwner::_scalar_deleting_destructor_(SMenuOwner *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->SummonedMenuAnchor).WeakReferenceCount.ReferenceController;
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
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c3f70

void * __thiscall
SMenuSeparatorBlock::_scalar_deleting_destructor_(SMenuSeparatorBlock *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x2d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x2c8);
  plVar3 = *(longlong **)&this->field_0x2b8;
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
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c4010

void * __thiscall
SMenuSpacerBlock::_scalar_deleting_destructor_(SMenuSpacerBlock *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x2d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x2c8);
  plVar3 = *(longlong **)&this->field_0x2b8;
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
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c40b0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void * __thiscall
SMultiBlockBaseWidget::_scalar_deleting_destructor_(SMultiBlockBaseWidget *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OptionsBlockWidget).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MultiBlock).SharedReferenceCount.ReferenceController);
  pTVar3 = (this->OwnerMultiBoxWidget).WeakReferenceCount.ReferenceController;
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
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c4150

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void * __thiscall SMultiBoxWidget::_scalar_deleting_destructor_(SMultiBoxWidget *this,uint param_1)

{
  ~SMultiBoxWidget(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x568);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c41b0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SNotificationList::_scalar_deleting_destructor_(SNotificationList *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LastNotification).SharedReferenceCount.ReferenceController);
  pTVar3 = (this->ParentWindowPtr).WeakReferenceCount.ReferenceController;
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MessageItemBoxPtr).SharedReferenceCount.ReferenceController);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c4250

void * __thiscall
SPrioritizedWrapBox::_scalar_deleting_destructor_(SPrioritizedWrapBox *this,uint param_1)

{
  ~SPrioritizedWrapBox(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x268);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c42b0

void * __thiscall SSearchBox::_scalar_deleting_destructor_(SSearchBox *this,uint param_1)

{
  ~SSearchBox(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x6c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c4310

void * __thiscall SSeparator::_scalar_deleting_destructor_(SSeparator *this,uint param_1)

{
  SBorder::~SBorder((SBorder *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c4370

void * __thiscall SSubMenuButton::_scalar_deleting_destructor_(SSubMenuButton *this,uint param_1)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ShouldAppearHovered).Getter);
  pvVar1 = *(void **)&(this->ShouldAppearHovered).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ShouldAppearHovered).Getter);
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

// `scalar_deleting_destructor' @ 1427c4400

void * __thiscall
SToolBarButtonBlock::_scalar_deleting_destructor_(SToolBarButtonBlock *this,uint param_1)

{
  ~SToolBarButtonBlock(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x340);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c4460

void * __thiscall
SToolBarComboButtonBlock::_scalar_deleting_destructor_(SToolBarComboButtonBlock *this,uint param_1)

{
  ~SToolBarComboButtonBlock(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x380);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c44c0

void * __thiscall
SToolBarSeparatorBlock::_scalar_deleting_destructor_(SToolBarSeparatorBlock *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x2d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x2c8);
  plVar3 = *(longlong **)&this->field_0x2b8;
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
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c4560

void * __thiscall
SToolBarStackButtonBlock::_scalar_deleting_destructor_(SToolBarStackButtonBlock *this,uint param_1)

{
  ~SToolBarStackButtonBlock(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x378);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c45c0

void * __thiscall
SUniformToolbarButtonBlock::_scalar_deleting_destructor_
          (SUniformToolbarButtonBlock *this,uint param_1)

{
  SToolBarButtonBlock::~SToolBarButtonBlock((SToolBarButtonBlock *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x340);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c4620

void * __thiscall
SUniformToolbarPanel::_scalar_deleting_destructor_(SUniformToolbarPanel *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MinUniformSize).Getter);
  pvVar1 = *(void **)&(this->MinUniformSize).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MinUniformSize).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MaxUniformSize).Getter);
  pvVar1 = *(void **)&(this->MaxUniformSize).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MaxUniformSize).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MinDesiredSlotSize).Getter);
  pvVar1 = *(void **)&(this->MinDesiredSlotSize).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MinDesiredSlotSize).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SlotPadding).Getter);
  pvVar1 = *(void **)&(this->SlotPadding).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->SlotPadding).Getter);
  DestructItems<TUniquePtr<SUniformToolbarPanel::FSlot,TDefaultDelete<SUniformToolbarPanel::FSlot>_>,int>
            ((TUniquePtr<SUniformToolbarPanel::FSlot,TDefaultDelete<SUniformToolbarPanel::FSlot>_> *
             )(this->Children).Children.AllocatorInstance.Data,(this->Children).Children.ArrayNum);
  pFVar2 = (this->Children).Children.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FChildren::~FChildren((FChildren *)&this->Children);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Dropdown).SharedReferenceCount.ReferenceController);
  SPanel::~SPanel((SPanel *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x318);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427c4770

void * __thiscall SWidgetBlock::_scalar_deleting_destructor_(SWidgetBlock *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x2d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x2c8);
  plVar3 = *(longlong **)&this->field_0x2b8;
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
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2e8);
  }
  return this;
}

// GenerateTutorialIdentifierName @ 14280c220

FName __cdecl
GenerateTutorialIdentifierName
          (FName param_1,FName param_2,TSharedPtr<FUICommandInfo_const_,1> *param_3,int param_4)

{
  TSharedPtr<FUICommandInfo_const_,1> *this;
  FString *pFVar1;
  FUICommandInfo *pFVar2;
  FName FVar3;
  undefined4 in_register_0000008c;
  FName local_res10;
  FName local_res18 [2];
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  this = (TSharedPtr<FUICommandInfo_const_,1> *)CONCAT44(in_register_0000008c,param_4);
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  local_res10 = param_2;
  local_res18[0] = (FName)param_3;
  if (param_2 != (FName)0x0) {
    pFVar1 = FName::ToString(&local_res10,&local_38);
    FString::ConcatFC(&local_58,pFVar1,L".");
    if ((FName)local_48.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    local_48.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    local_48.Data.ArrayNum = local_58.Data.ArrayNum;
    local_48.Data.ArrayMax = local_58.Data.ArrayMax;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if ((FName)local_38.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_res18[0] == (FName)0x0) {
    if ((this->Object == (FUICommandInfo *)0x0) || (this->Object->CommandName == (FName)0x0)) {
      FString::PrintfImpl(&local_58,L"MultiboxWidget%d");
      FString::ConcatFF(&local_38,&local_48,&local_58);
      FVar3 = (FName)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar3 = (FName)local_38.Data.AllocatorInstance;
      }
      FName::FName((FName *)param_1,(wchar_t *)FVar3);
      local_28.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
      if ((FName)local_38.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
        local_28.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
      }
    }
    else {
      pFVar2 = TSharedPtr<FUICommandInfo_const_,1>::operator->(this);
      local_58.Data.AllocatorInstance.Data = *(FScriptContainerElement **)&pFVar2->CommandName;
      pFVar1 = FName::ToString((FName *)&local_58,&local_28);
      FString::ConcatFF(&local_38,&local_48,pFVar1);
      FVar3 = (FName)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar3 = (FName)local_38.Data.AllocatorInstance;
      }
      FName::FName((FName *)param_1,(wchar_t *)FVar3);
      if ((FName)local_38.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    pFVar1 = FName::ToString(local_res18,&local_38);
    FString::ConcatFF(&local_58,&local_48,pFVar1);
    FVar3 = (FName)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar3 = (FName)local_58.Data.AllocatorInstance;
    }
    FName::FName((FName *)param_1,(wchar_t *)FVar3);
    local_28.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    if ((FName)local_58.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
      local_28.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    }
  }
  if ((FName)local_28.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FName)local_48.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return param_1;
}

// DisplayMultiboxHooks'' @ 15035c910

void __cdecl `dynamic_atexit_destructor_for_'FMultiBoxSettings::DisplayMultiboxHooks__(void)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &FMultiBoxSettings::DisplayMultiboxHooks.Getter);
  if (FMultiBoxSettings::DisplayMultiboxHooks.Getter._8_8_ != 0) {
    FMemory::Free((void *)FMultiBoxSettings::DisplayMultiboxHooks.Getter._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FMultiBoxSettings::DisplayMultiboxHooks.Getter);
  return;
}

// MenuSearchFieldVisibilityThreshold'' @ 15035c950

void __cdecl
`dynamic_atexit_destructor_for_'FMultiBoxSettings::MenuSearchFieldVisibilityThreshold__(void)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &FMultiBoxSettings::MenuSearchFieldVisibilityThreshold.Getter);
  if (FMultiBoxSettings::MenuSearchFieldVisibilityThreshold.Getter._8_8_ != 0) {
    FMemory::Free((void *)FMultiBoxSettings::MenuSearchFieldVisibilityThreshold.Getter._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &FMultiBoxSettings::MenuSearchFieldVisibilityThreshold.Getter);
  return;
}

// ToolTipConstructor'' @ 15035c990

void __cdecl `dynamic_atexit_destructor_for_'FMultiBoxSettings::ToolTipConstructor__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FMultiBoxSettings::ToolTipConstructor,(FWriteAccessScope *)&local_28);
  if ((FMultiBoxSettings::ToolTipConstructor._16_4_ != 0) &&
     (FMultiBoxSettings::ToolTipConstructor._8_8_ != 0)) {
    (*(code *)**(undefined8 **)FMultiBoxSettings::ToolTipConstructor._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FMultiBoxSettings::ToolTipConstructor.field_0x8,0,0,0x10);
    FMultiBoxSettings::ToolTipConstructor._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (FMultiBoxSettings::ToolTipConstructor._8_8_ != 0) {
    FMemory::Free((void *)FMultiBoxSettings::ToolTipConstructor._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FMultiBoxSettings::ToolTipConstructor);
  return;
}

// UseSmallToolBarIcons'' @ 15035ca30

void __cdecl `dynamic_atexit_destructor_for_'FMultiBoxSettings::UseSmallToolBarIcons__(void)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &FMultiBoxSettings::UseSmallToolBarIcons.Getter);
  if (FMultiBoxSettings::UseSmallToolBarIcons.Getter._8_8_ != 0) {
    FMemory::Free((void *)FMultiBoxSettings::UseSmallToolBarIcons.Getter._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FMultiBoxSettings::UseSmallToolBarIcons.Getter);
  return;
}

// `dynamic_atexit_destructor_for_'CVarFrictionCoefficient'' @ 15035ca70

void __cdecl _dynamic_atexit_destructor_for__CVarFrictionCoefficient__(void)

{
  CVarFrictionCoefficient._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarFrictionCoefficient);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStaticVelocityDrag'' @ 15035ca90

void __cdecl _dynamic_atexit_destructor_for__CVarStaticVelocityDrag__(void)

{
  CVarStaticVelocityDrag._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarStaticVelocityDrag);
  return;
}

// `dynamic_atexit_destructor_for_'EmptyTextAttribute'' @ 15035cab0

void __cdecl
`FToolBarBuilder::AddToolBarWidget'::__l2::_dynamic_atexit_destructor_for__EmptyTextAttribute__
          (void)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&EmptyTextAttribute.Getter);
  if (EmptyTextAttribute.Getter._8_8_ != 0) {
    FMemory::Free((void *)EmptyTextAttribute.Getter._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&EmptyTextAttribute.Getter);
  if (EmptyTextAttribute.Value.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015035caf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*EmptyTextAttribute.Value.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'EmptyTextAttribute'' @ 15035cb00

void __cdecl
`FToolBarBuilder::AddWidgetInternal'::__l2::_dynamic_atexit_destructor_for__EmptyTextAttribute__
          (void)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&EmptyTextAttribute.Getter);
  if (EmptyTextAttribute.Getter._8_8_ != 0) {
    FMemory::Free((void *)EmptyTextAttribute.Getter._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&EmptyTextAttribute.Getter);
  if (EmptyTextAttribute.Value.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015035cb40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*EmptyTextAttribute.Value.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Instance'' @ 15035cb50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`FSlateNotificationManager::Get'::__l2::_dynamic_atexit_destructor_for__Instance__(void)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FWeakReferencer<1> FVar3;
  
  ::Instance.CVarAllowNotifications._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&::Instance.CVarAllowNotifications);
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Instance.StagedNotificationCS);
  DestructItems<TSharedPtr<IAsyncTaskNotificationImpl,1>,int>
            ((TSharedPtr<IAsyncTaskNotificationImpl,1> *)
             ::Instance.StagedNotifications.AllocatorInstance.Data,
             ::Instance.StagedNotifications.ArrayNum);
  if (::Instance.StagedNotifications.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(::Instance.StagedNotifications.AllocatorInstance.Data);
  }
  FLockFreePointerListLIFOBase<FNotificationInfo,0,1>::
  ~FLockFreePointerListLIFOBase<FNotificationInfo,0,1>
            ((FLockFreePointerListLIFOBase<FNotificationInfo,0,1> *)&::Instance.PendingNotifications
            );
  DestructItems<FSlateNotificationManager::FRegionalNotificationList,int>
            ((FRegionalNotificationList *)::Instance.RegionalLists.AllocatorInstance.Data,
             ::Instance.RegionalLists.ArrayNum);
  if (::Instance.RegionalLists.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(::Instance.RegionalLists.AllocatorInstance.Data);
  }
  FVar3.ReferenceController = ::Instance.RootWindowPtr.WeakReferenceCount.ReferenceController;
  if (::Instance.RootWindowPtr.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(::Instance.RootWindowPtr.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x00015035cbf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((FVar3.ReferenceController)->_padding_ + 8))(FVar3.ReferenceController,1);
      return;
    }
  }
  return;
}

// `dynamic_atexit_destructor_for_'Name'' @ 15035cc10

void __cdecl
`SListView<TSharedPtr<SWidget,1>_>::GetDefaultAccessibleText'::__l2::
_dynamic_atexit_destructor_for__Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<SWidget,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
               ::__l2::Name.Data.AllocatorInstance.Data;
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<SWidget,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<SWidget,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'WidgetClassDataInstance'' @ 15035cc30

void __cdecl
`SButton::GetPrivateWidgetClass'::__l2::_dynamic_atexit_destructor_for__WidgetClassDataInstance__
          (void)

{
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SButton::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData !=
      (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0) {
    FMemory::Free((void *)`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SButton::GetPrivateWidgetClass(void)'
                          ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.
                          SecondaryData);
  }
  DestructItems<FSlateAttributeDescriptor::FAttribute,int>
            ((FAttribute *)
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SButton::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data,
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SButton::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum);
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SButton::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SButton::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'WidgetClassDataInstance'' @ 15035cc80

void __cdecl
`SPrioritizedWrapBox::GetPrivateWidgetClass'::__l2::
_dynamic_atexit_destructor_for__WidgetClassDataInstance__(void)

{
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPrioritizedWrapBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData !=
      (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0) {
    FMemory::Free((void *)`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPrioritizedWrapBox::GetPrivateWidgetClass(void)'
                          ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.
                          SecondaryData);
  }
  DestructItems<FSlateAttributeDescriptor::FAttribute,int>
            ((FAttribute *)
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPrioritizedWrapBox::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data,
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPrioritizedWrapBox::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum);
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPrioritizedWrapBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPrioritizedWrapBox::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data);
    return;
  }
  return;
}

