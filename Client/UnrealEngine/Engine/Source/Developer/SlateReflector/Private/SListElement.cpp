// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 2

// operator() @ 142e19210

TSharedRef<SWidget,1> * __thiscall
`SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn'::__l2::<lambda_1>::
operator()(void *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          TArray<FNavigationSimulationWidgetNodeItem,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_1,EUINavigation param_2,FText *param_3,FSlateColor *param_4)

{
  atomic<int> *paVar1;
  TReferenceControllerBase<1> *pTVar2;
  FSharedReferencer<1> FVar3;
  ForElementType<FNavigationSimulationWidgetNodeItem> FVar4;
  FArguments *pFVar5;
  TAttribute<FText> *pTVar6;
  TSharedRef<STextBlock,1> *pTVar7;
  ForElementType<FNavigationSimulationWidgetNodeItem> FVar8;
  FLLMScope local_res18 [2];
  T0RequiredArgs local_res20 [8];
  FName local_5f8;
  FMemScope local_5f0;
  FLinearColor_u_0 local_5e8;
  undefined4 local_5d8;
  undefined1 local_5d4;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  TSharedRef<STextBlock,1> local_5b8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_5a8;
  TAttribute<FText> local_590;
  FArguments local_560;
  
  FVar8 = (param_1->AllocatorInstance).SecondaryData;
  FVar4 = (ForElementType<FNavigationSimulationWidgetNodeItem>)param_1;
  if (FVar8 != (ForElementType<FNavigationSimulationWidgetNodeItem>)0x0) {
    FVar4 = FVar8;
  }
  FVar8 = (ForElementType<FNavigationSimulationWidgetNodeItem>)
          ((longlong)param_1->ArrayNum * 0x220 + (longlong)FVar4);
  do {
    if (FVar4 == FVar8) {
LAB_142e19253:
      __return_storage_ptr__->Object = SNullWidget::NullWidget.Object;
      FVar3 = SNullWidget::NullWidget.SharedReferenceCount;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
      if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(FVar3.ReferenceController)->SharedReferenceCount;
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
      }
      return __return_storage_ptr__;
    }
    if (*(EUINavigation *)FVar4 == param_2) {
      if (*(longlong *)((longlong)FVar4 + 8) != 0) {
        pFVar5 = STextBlock::FArguments::FArguments(&local_560);
        pTVar6 = TAttribute<FText>::TAttribute<FText><FText>(&local_590,param_3);
        pFVar5 = STextBlock::FArguments::Text(pFVar5,pTVar6);
        local_5d4 = 1;
        local_5d0 = 0;
        uStack_5c8 = 0;
        local_5e8._0_8_ = *(undefined8 *)&(param_4->SpecifiedColor).field0_0x0;
        local_5e8._8_8_ = *(undefined8 *)((longlong)&(param_4->SpecifiedColor).field0_0x0 + 8);
        local_5d8._0_1_ = param_4->ColorUseRule;
        local_5d8._1_1_ = param_4->ColorTableId;
        local_5d8._2_2_ = *(undefined2 *)&param_4->field_0x12;
        local_5c0 = 0;
        pFVar5 = STextBlock::FArguments::ColorAndOpacity
                           (pFVar5,(TAttribute<FSlateColor> *)&local_5e8._s_0);
        FLLMScope::FLLMScope
                  (local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
        local_5f8 = LLMTagDeclaration_UI_Slate.UniqueName;
        FMemScope::FMemScope(&local_5f0,&local_5f8,true);
        TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
        TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                  (&local_5a8,"STextBlock",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SNavigationSimulationList.cpp"
                   ,0x48,local_res20);
        FMemScope::~FMemScope(&local_5f0);
        FLLMScope::~FLLMScope(local_res18);
        pTVar7 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                           (&local_5a8,&local_5b8,pFVar5);
        __return_storage_ptr__->Object = (SWidget *)pTVar7->Object;
        pTVar2 = (pTVar7->SharedReferenceCount).ReferenceController;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_5b8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_5a8._Widget.SharedReferenceCount.ReferenceController);
        STextBlock::FArguments::~FArguments(&local_560);
        return __return_storage_ptr__;
      }
      goto LAB_142e19253;
    }
    FVar4 = (ForElementType<FNavigationSimulationWidgetNodeItem>)((longlong)FVar4 + 0x220);
  } while( true );
}

// GenerateWidgetForColumn @ 142e91800

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedRef<SWidget,1> * __thiscall
SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn
          (SListElement *this,TSharedRef<SWidget,1> *__return_storage_ptr__,FName *param_1)

{
  atomic<int> *paVar1;
  longlong lVar2;
  FName FVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  FArguments *pFVar8;
  TSharedRef<SWidget,1> *pTVar9;
  TSharedRef<STextBlock,1> *pTVar10;
  FNavigationSimulationWidgetNode *pFVar11;
  undefined1 local_res18 [8];
  T0RequiredArgs local_res20 [8];
  FLLMScope local_698 [2];
  FText local_690;
  bool local_680;
  undefined1 local_678 [8];
  ForAnyElementType FStack_670;
  ulonglong local_668;
  FLinearColor_u_0 local_660;
  undefined1 local_650;
  undefined1 local_64c [4];
  FName local_648;
  FMemScope local_640;
  FDestructionSentinel local_638;
  FLinearColor_u_0 local_620;
  undefined1 local_610;
  FLinearColor_u_0 local_60c;
  undefined1 local_5fc;
  FLinearColor_u_0 local_5f8;
  undefined1 local_5e8;
  FLinearColor_u_0 local_5e4;
  undefined1 local_5d4;
  FLinearColor_u_0 local_5d0;
  undefined1 local_5c0;
  TSharedRef<STextBlock,1> local_5b8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_5a8;
  FArguments local_590;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar2 + 0x9d4c) <
      `public:_virtual_class_TSharedRef<SWidget,1>___cdecl_SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn(FName_const&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_TSharedRef<SWidget,1>___cdecl_SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn(FName_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_TSharedRef<SWidget,1>___cdecl_SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn(FName_const&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&`public:_virtual_class_TSharedRef<SWidget,1>___cdecl_SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn(FName_const&___ptr64)___ptr64'
                  ::__l2::Text_Left,L"SSlateNavigationSimulation",L"ShortNavigation_Left",L"L");
      atexit(`SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn'::__l2::
             _dynamic_atexit_destructor_for__Text_Left__);
      _Init_thread_footer(&`public:_virtual_class_TSharedRef<SWidget,1>___cdecl_SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn(FName_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*(int *)(lVar2 + 0x9d4c) <
      `public:_virtual_class_TSharedRef<SWidget,1>___cdecl_SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn(FName_const&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_1__) {
    _Init_thread_header(&`public:_virtual_class_TSharedRef<SWidget,1>___cdecl_SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn(FName_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_1__);
    if (`public:_virtual_class_TSharedRef<SWidget,1>___cdecl_SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn(FName_const&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_1__ == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&`public:_virtual_class_TSharedRef<SWidget,1>___cdecl_SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn(FName_const&___ptr64)___ptr64'
                  ::__l2::Text_Right,L"SSlateNavigationSimulation",L"ShortNavigation_Right",L"R");
      atexit(`SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn'::__l2::
             _dynamic_atexit_destructor_for__Text_Right__);
      _Init_thread_footer(&`public:_virtual_class_TSharedRef<SWidget,1>___cdecl_SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn(FName_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_1__);
    }
  }
  if (*(int *)(lVar2 + 0x9d4c) <
      `public:_virtual_class_TSharedRef<SWidget,1>___cdecl_SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn(FName_const&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_2__) {
    _Init_thread_header(&`public:_virtual_class_TSharedRef<SWidget,1>___cdecl_SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn(FName_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_2__);
    if (`public:_virtual_class_TSharedRef<SWidget,1>___cdecl_SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn(FName_const&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_2__ == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&`public:_virtual_class_TSharedRef<SWidget,1>___cdecl_SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn(FName_const&___ptr64)___ptr64'
                  ::__l2::Text_Up,L"SSlateNavigationSimulation",L"ShortNavigation_Up",L"U");
      atexit(`SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn'::__l2::
             _dynamic_atexit_destructor_for__Text_Up__);
      _Init_thread_footer(&`public:_virtual_class_TSharedRef<SWidget,1>___cdecl_SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn(FName_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_2__);
    }
  }
  if (*(int *)(lVar2 + 0x9d4c) <
      `public:_virtual_class_TSharedRef<SWidget,1>___cdecl_SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn(FName_const&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_3__) {
    _Init_thread_header(&`public:_virtual_class_TSharedRef<SWidget,1>___cdecl_SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn(FName_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_3__);
    if (`public:_virtual_class_TSharedRef<SWidget,1>___cdecl_SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn(FName_const&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_3__ == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&`public:_virtual_class_TSharedRef<SWidget,1>___cdecl_SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn(FName_const&___ptr64)___ptr64'
                  ::__l2::Text_Down,L"SSlateNavigationSimulation",L"ShortNavigation_Down",L"D");
      atexit(`SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn'::__l2::
             _dynamic_atexit_destructor_for__Text_Down__);
      _Init_thread_footer(&`public:_virtual_class_TSharedRef<SWidget,1>___cdecl_SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn(FName_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_3__);
    }
  }
  if (*(int *)(lVar2 + 0x9d4c) <
      `public:_virtual_class_TSharedRef<SWidget,1>___cdecl_SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn(FName_const&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_4__) {
    _Init_thread_header(&`public:_virtual_class_TSharedRef<SWidget,1>___cdecl_SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn(FName_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_4__);
    if (`public:_virtual_class_TSharedRef<SWidget,1>___cdecl_SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn(FName_const&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_4__ == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&`public:_virtual_class_TSharedRef<SWidget,1>___cdecl_SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn(FName_const&___ptr64)___ptr64'
                  ::__l2::Text_Previous,L"SSlateNavigationSimulation",L"ShortNavigation_Previous",
                 L"P");
      atexit(`SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn'::__l2::
             _dynamic_atexit_destructor_for__Text_Previous__);
      _Init_thread_footer(&`public:_virtual_class_TSharedRef<SWidget,1>___cdecl_SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn(FName_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_4__);
    }
  }
  if (*(int *)(lVar2 + 0x9d4c) <
      `public:_virtual_class_TSharedRef<SWidget,1>___cdecl_SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn(FName_const&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_5__) {
    _Init_thread_header(&`public:_virtual_class_TSharedRef<SWidget,1>___cdecl_SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn(FName_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_5__);
    if (`public:_virtual_class_TSharedRef<SWidget,1>___cdecl_SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn(FName_const&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_5__ == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&`public:_virtual_class_TSharedRef<SWidget,1>___cdecl_SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn(FName_const&___ptr64)___ptr64'
                  ::__l2::Text_Next,L"SSlateNavigationSimulation",L"ShortNavigation_Next",L"N");
      atexit(`SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn'::__l2::
             _dynamic_atexit_destructor_for__Text_Next__);
      _Init_thread_footer(&`public:_virtual_class_TSharedRef<SWidget,1>___cdecl_SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn(FName_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_5__);
    }
  }
  FVar3 = *param_1;
  local_res18[0] = 0;
  if (FVar3 == HeaderRow_Widget) {
    pFVar8 = STextBlock::FArguments::FArguments(&local_590);
    if ((this->WidgetItem).Object == (FNavigationSimulationWidgetNode *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TSharedRef<SWidget,1> *)(*pcVar5)();
        return pTVar9;
      }
    }
    pFVar11 = (this->WidgetItem).Object;
    local_690.TextData.Reference =
         (pFVar11->NavigationSource).WidgetTypeAndShortName.TextData.Reference;
    if (local_690.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_690.TextData.Reference + 8))
                (local_690.TextData.Reference,local_64c);
    }
    local_690.Flags = (pFVar11->NavigationSource).WidgetTypeAndShortName.Flags;
    local_680 = true;
    local_668 = 0;
    local_678 = (undefined1  [8])0x0;
    FStack_670.Data = (FScriptContainerElement *)0x0;
    FText::operator=(&(pFVar8->_Text).Value,&local_690);
    (pFVar8->_Text).bIsSet = local_680;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar8->_Text).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_678);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_678,
               (FWriteAccessScope *)&local_638);
    if (((int)local_668 != 0) && (FStack_670.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_670.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_670,0,0,0x10);
      local_668 = local_668 & 0xffffffff00000000;
    }
    if (local_638.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_638.Accessor,&local_638);
    }
    if (FStack_670.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_670.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_678);
    if (local_690.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_690.TextData.Reference + 0x10))();
    }
    FLLMScope::FLLMScope(local_698,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_648 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_640,&local_648,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_5a8,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SNavigationSimulationList.cpp"
               ,0x51,local_res20);
    FMemScope::~FMemScope(&local_640);
    FLLMScope::~FLLMScope(local_698);
    pTVar10 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_5a8,&local_5b8,pFVar8);
    __return_storage_ptr__->Object = (SWidget *)pTVar10->Object;
    pTVar4 = (pTVar10->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5b8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5a8._Widget.SharedReferenceCount.ReferenceController);
    STextBlock::FArguments::~FArguments(&local_590);
  }
  else if (FVar3 == HeaderRow_Navigation_Left) {
    local_650 = 0;
    local_660._s_0.R = (float)((uint)FColor::Cyan.field0_0x0 >> 0x10 & 0xff) * __real_3b808081;
    local_660._s_0.G = (float)((uint)FColor::Cyan.field0_0x0 >> 8 & 0xff) * __real_3b808081;
    local_660._s_0.B = (float)((uint)FColor::Cyan.field0_0x0 & 0xff) * __real_3b808081;
    local_660._s_0.A = (float)((uint)FColor::Cyan.field0_0x0 >> 0x18) * __real_3b808081;
    if ((this->WidgetItem).Object == (FNavigationSimulationWidgetNode *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TSharedRef<SWidget,1> *)(*pcVar5)();
        return pTVar9;
      }
    }
    `SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn'::__l2::<lambda_1>::
    operator()(local_res18,__return_storage_ptr__,&((this->WidgetItem).Object)->Simulations,Left,
               &`public:_virtual_class_TSharedRef<SWidget,1>___cdecl_SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn(FName_const&___ptr64)___ptr64'
                ::__l2::Text_Left,(FSlateColor *)&local_660._s_0);
  }
  else if (FVar3 == HeaderRow_Navigation_Right) {
    local_610 = 0;
    local_620 = FLinearColor::Yellow.field0_0x0;
    pFVar11 = TSharedPtr<FNavigationSimulationWidgetNode,1>::operator->(&this->WidgetItem);
    `SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn'::__l2::<lambda_1>::
    operator()(local_res18,__return_storage_ptr__,&pFVar11->Simulations,Right,
               &`public:_virtual_class_TSharedRef<SWidget,1>___cdecl_SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn(FName_const&___ptr64)___ptr64'
                ::__l2::Text_Right,(FSlateColor *)&local_620._s_0);
  }
  else if (FVar3 == HeaderRow_Navigation_Up) {
    local_5fc = 0;
    local_60c = FLinearColor::Red.field0_0x0;
    pFVar11 = TSharedPtr<FNavigationSimulationWidgetNode,1>::operator->(&this->WidgetItem);
    `SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn'::__l2::<lambda_1>::
    operator()(local_res18,__return_storage_ptr__,&pFVar11->Simulations,Up,
               &`public:_virtual_class_TSharedRef<SWidget,1>___cdecl_SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn(FName_const&___ptr64)___ptr64'
                ::__l2::Text_Up,(FSlateColor *)&local_60c._s_0);
  }
  else if (FVar3 == HeaderRow_Navigation_Down) {
    local_5e8 = 0;
    local_5f8 = FLinearColor::Blue.field0_0x0;
    pFVar11 = TSharedPtr<FNavigationSimulationWidgetNode,1>::operator->(&this->WidgetItem);
    `SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn'::__l2::<lambda_1>::
    operator()(local_res18,__return_storage_ptr__,&pFVar11->Simulations,Down,
               &`public:_virtual_class_TSharedRef<SWidget,1>___cdecl_SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn(FName_const&___ptr64)___ptr64'
                ::__l2::Text_Down,(FSlateColor *)&local_5f8._s_0);
  }
  else if (FVar3 == HeaderRow_Navigation_Previous) {
    local_5e4._0_8_ = ___xmm_3f8000003f800000000000003f800000;
    local_5e4._8_8_ = _UNK_15090c6d8;
    local_5d4 = 0;
    pFVar11 = TSharedPtr<FNavigationSimulationWidgetNode,1>::operator->(&this->WidgetItem);
    `SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn'::__l2::<lambda_1>::
    operator()(local_res18,__return_storage_ptr__,&pFVar11->Simulations,Previous,
               &`public:_virtual_class_TSharedRef<SWidget,1>___cdecl_SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn(FName_const&___ptr64)___ptr64'
                ::__l2::Text_Previous,(FSlateColor *)&local_5e4._s_0);
  }
  else if (FVar3 == HeaderRow_Navigation_Next) {
    local_5d0._0_8_ = ___xmm_3f8000003f800000000000003f800000;
    local_5d0._8_8_ = _UNK_15090c6d8;
    local_5c0 = 0;
    pFVar11 = TSharedPtr<FNavigationSimulationWidgetNode,1>::operator->(&this->WidgetItem);
    `SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn'::__l2::<lambda_1>::
    operator()(local_res18,__return_storage_ptr__,&pFVar11->Simulations,Next,
               &`public:_virtual_class_TSharedRef<SWidget,1>___cdecl_SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn(FName_const&___ptr64)___ptr64'
                ::__l2::Text_Next,(FSlateColor *)&local_5d0._s_0);
  }
  else {
    __return_storage_ptr__->Object = SNullWidget::NullWidget.Object;
    FVar6 = SNullWidget::NullWidget.SharedReferenceCount;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar6.ReferenceController)->SharedReferenceCount;
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
    }
  }
  return __return_storage_ptr__;
}

