// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 6

// GetDefaultDecorator @ 14273d300

TSharedPtr<SWidget,1> * __thiscall
FUICommandDragDropOp::GetDefaultDecorator
          (FUICommandDragDropOp *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  FArguments *pFVar5;
  FText *pFVar6;
  TSharedRef<STextBlock,1> *pTVar7;
  FArguments *pFVar8;
  ISlateStyle *pIVar9;
  FName *pFVar10;
  TSharedPtr<SWidget,1> *pTVar11;
  TSharedRef<SBorder,1> *pTVar12;
  STextBlock *pSVar13;
  T0RequiredArgs local_res8 [8];
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [2];
  FLLMScope local_res20 [2];
  FSharedReferencer<1> local_a90;
  FSlateBrush *local_a88;
  undefined1 local_a80;
  undefined1 local_a78 [8];
  ForAnyElementType FStack_a70;
  ulonglong local_a68;
  FName local_a60;
  FMemScope local_a58;
  FName local_a50;
  FMemScope local_a48;
  undefined8 local_a40;
  FSharedReferencer<1> local_a38;
  FDestructionSentinel local_a30;
  TAttribute<FText> local_a18;
  FName local_9e8;
  TSharedRef<STextBlock,1> local_9e0;
  FText local_9d0;
  SWidget *local_9c0;
  TReferenceControllerBase<1> *pTStack_9b8;
  TSharedRef<SBorder,1> local_9b0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_9a0;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_988;
  FArguments local_970;
  FArguments local_590;
  
  pSVar13 = (STextBlock *)(this->CustomDecorator).Object;
  local_a90.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pSVar13 == (STextBlock *)0x0) {
    pFVar5 = STextBlock::FArguments::FArguments(&local_590);
    pFVar6 = FText::FromName(&local_9d0,&this->ItemName);
    FText::FText(&local_a18.Value,pFVar6);
    local_a18.bIsSet = true;
    local_a18.Getter._16_8_ = 0;
    local_a18.Getter._0_8_ = 0;
    local_a18.Getter._8_8_ = 0;
    pFVar5 = STextBlock::FArguments::Text(pFVar5,&local_a18);
    FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_a60 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_a58,&local_a60,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_9a0,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Commands\\UICommandDragDropOp.cpp"
               ,0x2c,local_res8);
    FMemScope::~FMemScope(&local_a58);
    FLLMScope::~FLLMScope(local_res18);
    pTVar7 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                       (&local_9a0,&local_9e0,pFVar5);
    local_a38.ReferenceController = (pTVar7->SharedReferenceCount).ReferenceController;
    pSVar13 = pTVar7->Object;
    if (local_a38.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a38.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_a38.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_a40 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_a90,&local_a38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a38.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_9e0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_9a0._Widget.SharedReferenceCount.ReferenceController);
    if (local_9d0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_9d0.TextData.Reference + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_590);
  }
  else {
    local_a90.ReferenceController = (this->CustomDecorator).SharedReferenceCount.ReferenceController
    ;
    if (local_a90.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a90.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_a90.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  pFVar8 = SBorder::FArguments::FArguments(&local_970);
  pIVar9 = FAppStyle::Get();
  pcVar1 = *(code **)((longlong)*pIVar9 + 0x50);
  pFVar10 = ::FName::FName(&local_9e8,"ToolPanel.GroupBorder");
  local_a88 = (FSlateBrush *)(*pcVar1)(pIVar9,*pFVar10);
  local_a80 = 1;
  local_a68 = 0;
  local_a78 = (undefined1  [8])0x0;
  FStack_a70.Data = (FScriptContainerElement *)0x0;
  (pFVar8->_BorderImage).Value = local_a88;
  (pFVar8->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar8->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a78);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a78,
             (FWriteAccessScope *)&local_a30);
  if (((int)local_a68 != 0) && (FStack_a70.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_a70.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_a70,0,0,0x10);
    local_a68 = local_a68 & 0xffffffff00000000;
  }
  if (local_a30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a30.Accessor,&local_a30);
  }
  if (FStack_a70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a70.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a78);
  if (pSVar13 == (STextBlock *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar11 = (TSharedPtr<SWidget,1> *)(*pcVar1)();
      return pTVar11;
    }
  }
  FVar3.ReferenceController = local_a90.ReferenceController;
  if (local_a90.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a90.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_a90.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar13 == (STextBlock *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar11 = (TSharedPtr<SWidget,1> *)(*pcVar1)();
      return pTVar11;
    }
  }
  if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar3.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar3.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_9c0 = (pFVar8->_Content).Widget.Object;
  pTStack_9b8 = (pFVar8->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar8->_Content).Widget.Object = (SWidget *)pSVar13;
  (pFVar8->_Content).Widget.SharedReferenceCount.ReferenceController = FVar3.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_9b8);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_a50 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_a48,&local_a50,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_988,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Commands\\UICommandDragDropOp.cpp"
             ,0x31,local_res10);
  FMemScope::~FMemScope(&local_a48);
  FLLMScope::~FLLMScope(local_res20);
  pTVar12 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_988,&local_9b0,pFVar8);
  __return_storage_ptr__->Object = (SWidget *)pTVar12->Object;
  pTVar2 = (pTVar12->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9b0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_988._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar3.ReferenceController);
  SBorder::FArguments::~FArguments(&local_970);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a90.ReferenceController);
  return __return_storage_ptr__;
}

// IsOfTypeImpl @ 14274d290

bool __thiscall FUICommandDragDropOp::IsOfTypeImpl(FUICommandDragDropOp *this,FString *param_1)

{
  int iVar1;
  bool bVar2;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_FString_const&___ptr64___cdecl_FUICommandDragDropOp::GetTypeId(void)'::
       __l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FString_const&___ptr64___cdecl_FUICommandDragDropOp::GetTypeId(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FString_const&___ptr64___cdecl_FUICommandDragDropOp::GetTypeId(void)'::
     __l2::_thread_safe_static_guard_0__ == -1)) {
    ::FString::FString(&`public:_static_class_FString_const&___ptr64___cdecl_FUICommandDragDropOp::GetTypeId(void)'
                        ::__l2::Type,L"FUICommandDragDropOp");
    atexit(`FUICommandDragDropOp::GetTypeId'::__l2::_dynamic_atexit_destructor_for__Type__);
    _Init_thread_footer(&`public:_static_class_FString_const&___ptr64___cdecl_FUICommandDragDropOp::GetTypeId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  iVar1 = (param_1->Data).ArrayNum;
  if (`public:_static_class_FString_const&___ptr64___cdecl_FUICommandDragDropOp::GetTypeId(void)'::
      __l2::Type.Data.ArrayNum == iVar1) {
    if (`public:_static_class_FString_const&___ptr64___cdecl_FUICommandDragDropOp::GetTypeId(void)'
        ::__l2::Type.Data.ArrayNum < 2) {
      return true;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)
                       `public:_static_class_FString_const&___ptr64___cdecl_FUICommandDragDropOp::GetTypeId(void)'
                       ::__l2::Type.Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->Data).AllocatorInstance.Data);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = `public:_static_class_FString_const&___ptr64___cdecl_FUICommandDragDropOp::GetTypeId(void)'
            ::__l2::Type.Data.ArrayNum + iVar1 == 1;
  }
  if (bVar2) {
    return true;
  }
  return false;
}

// New @ 14275ce10

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FUICommandDragDropOp,1> * __cdecl
FUICommandDragDropOp::New
          (TSharedRef<FUICommandDragDropOp,1> *__return_storage_ptr__,FName param_1,
          EMultiBlockType param_2,bool param_3,FName param_4,TSharedPtr<SWidget,1> *param_5,
          TVector2<double> *param_6)

{
  FSharedReferencer<1> *pFVar1;
  SWidget *pSVar2;
  SWindow *pSVar3;
  code *pcVar4;
  TOptional<EMouseCursor::Type> TVar5;
  bool bVar6;
  FDragDropOperation *this;
  TSharedRef<FUICommandDragDropOp,1> *pTVar7;
  atomic<int> *paVar8;
  
  this = ::operator_new(0x90);
  pFVar1 = &param_5->SharedReferenceCount;
  if (this == (FDragDropOperation *)0x0) {
    this = (FDragDropOperation *)0x0;
  }
  else {
    pSVar2 = param_5->Object;
    pSVar3 = (SWindow *)pFVar1->ReferenceController;
    if (pSVar3 == (SWindow *)0x0) {
      paVar8 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar8 = (atomic<int> *)&pSVar3->_padding_;
      LOCK();
      *paVar8 = (atomic<int>)((int)*paVar8 + 1);
      UNLOCK();
    }
    FDragDropOperation::FDragDropOperation(this);
    this[1]._padding_ = (longlong)param_1;
    this->_padding_ = (longlong)&___7FUICommandDragDropOp__6B_;
    *(EMultiBlockType *)&this[1]._padding_ = param_2;
    *(FName *)((longlong)&this[1]._padding_ + 4) = param_4;
    *(bool *)((longlong)&this[1]._padding_ + 1) = param_3;
    *(SWidget **)&this[1].bCreateNewWindow = pSVar2;
    this[1].CursorDecoratorWindow.Object = pSVar3;
    if (pSVar3 != (SWindow *)0x0) {
      LOCK();
      *paVar8 = (atomic<int>)((int)*paVar8 + 1);
      UNLOCK();
    }
    TVar5 = (TOptional<EMouseCursor::Type>)(param_6->field0_0x0)._s_0.Y;
    this[1].CursorDecoratorWindow.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)(param_6->field0_0x0)._s_0.X;
    this[1].MouseCursor = TVar5;
    this[1].MouseCursorOverride.TypedValue = None;
    this[1].MouseCursorOverride.bIsSet = false;
    *(undefined3 *)&this[1].MouseCursorOverride.field_0x5 = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar3);
    if (((this->_padding_ != 0) && (this->_padding_ != 0)) && (0 < *(int *)(this->_padding_ + 8))) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSharedRef<FUICommandDragDropOp,1> *)(*pcVar4)();
        return pTVar7;
      }
    }
  }
  param_5 = (TSharedPtr<SWidget,1> *)this;
  TSharedRef<FUICommandDragDropOp,1>::TSharedRef<FUICommandDragDropOp,1><FUICommandDragDropOp>
            (__return_storage_ptr__,(TRawPtrProxy<FUICommandDragDropOp> *)&param_5);
  (**(code **)(__return_storage_ptr__->Object->_padding_ + 0x58))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (pFVar1->ReferenceController);
  return __return_storage_ptr__;
}

// OnDragged @ 142763200

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FUICommandDragDropOp::OnDragged(FUICommandDragDropOp *this,FDragDropEvent *param_1)

{
  code *pcVar1;
  FDeprecateVector2DParameter FVar2;
  bool bVar3;
  
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SWindow::SetOpacity((SWindow *)this->_padding_,__real_3f59999a);
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FVar2._4_4_ = (float)(this->Offset).field0_0x0._s_0.Y +
                *(float *)((longlong)&param_1->_padding_ + 4);
  FVar2._0_4_ = (float)(this->Offset).field0_0x0._s_0.X + *(float *)&param_1->_padding_;
  SWindow::MoveWindowTo((SWindow *)this->_padding_,FVar2);
  return;
}

// OnDrop @ 1427635c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FUICommandDragDropOp::OnDrop(FUICommandDragDropOp *this,bool param_1,FPointerEvent *param_2)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  FDragDropOperation::OnDrop((FDragDropOperation *)this,param_1,param_2);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnDropNotification,
             &local_28);
  if ((*(int *)&(this->OnDropNotification).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnDropNotification).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// GetTypeId @ 142815ed0

FString * __cdecl FUICommandDragDropOp::GetTypeId(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FString_const&___ptr64___cdecl_FUICommandDragDropOp::GetTypeId(void)'::
      __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FString_const&___ptr64___cdecl_FUICommandDragDropOp::GetTypeId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FString_const&___ptr64___cdecl_FUICommandDragDropOp::GetTypeId(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::FString(&`public:_static_class_FString_const&___ptr64___cdecl_FUICommandDragDropOp::GetTypeId(void)'
                          ::__l2::Type,L"FUICommandDragDropOp");
      atexit(`FUICommandDragDropOp::GetTypeId'::__l2::_dynamic_atexit_destructor_for__Type__);
      _Init_thread_footer(&`public:_static_class_FString_const&___ptr64___cdecl_FUICommandDragDropOp::GetTypeId(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FString_const&___ptr64___cdecl_FUICommandDragDropOp::GetTypeId(void)'
              ::__l2::Type;
    }
  }
  return &`public:_static_class_FString_const&___ptr64___cdecl_FUICommandDragDropOp::GetTypeId(void)'
          ::__l2::Type;
}

