// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 28

// FPropertyViewerImpl @ 14d836e30

FPropertyViewerImpl * __thiscall
UE::PropertyViewer::Private::FPropertyViewerImpl::FPropertyViewerImpl
          (FPropertyViewerImpl *this,FArguments *param_1)

{
  IFieldIterator *pIVar1;
  IFieldExpander *pIVar2;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Containers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Containers).ArrayNum = 0;
  (this->Containers).ArrayMax = 0;
  (this->NodeReferences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodeReferences).ArrayNum = 0;
  (this->NodeReferences).ArrayMax = 0;
  (this->SearchBoxWidget).Object = (SSearchBox *)0x0;
  (this->SearchBoxWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->TreeWidget).Object =
       (STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0;
  (this->TreeWidget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->TreeSource).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TreeSource).ArrayNum = 0;
  (this->TreeSource).ArrayMax = 0;
  (this->FilteredTreeSource).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilteredTreeSource).ArrayNum = 0;
  (this->FilteredTreeSource).ArrayMax = 0;
  (this->SearchFilter).Object =
       (TTextFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0;
  (this->SearchFilter).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->FilterHandler).Object =
       (TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0;
  (this->FilterHandler).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->OnGetPreSlot = 0;
  *(undefined8 *)&(this->OnGetPreSlot).field_0x8 = 0;
  *(undefined4 *)&(this->OnGetPreSlot).field_0x10 = 0;
  *(undefined8 *)&this->OnGetPostSlot = 0;
  *(undefined8 *)&(this->OnGetPostSlot).field_0x8 = 0;
  *(undefined4 *)&(this->OnGetPostSlot).field_0x10 = 0;
  *(undefined8 *)&this->OnContextMenuOpening = 0;
  *(undefined8 *)&(this->OnContextMenuOpening).field_0x8 = 0;
  *(undefined4 *)&(this->OnContextMenuOpening).field_0x10 = 0;
  *(undefined8 *)&this->OnSelectionChanged = 0;
  *(undefined8 *)&(this->OnSelectionChanged).field_0x8 = 0;
  *(undefined4 *)&(this->OnSelectionChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnDoubleClicked = 0;
  *(undefined8 *)&(this->OnDoubleClicked).field_0x8 = 0;
  *(undefined4 *)&(this->OnDoubleClicked).field_0x10 = 0;
  *(undefined8 *)&this->OnDragDetected = 0;
  *(undefined8 *)&(this->OnDragDetected).field_0x8 = 0;
  *(undefined4 *)&(this->OnDragDetected).field_0x10 = 0;
  *(undefined8 *)&this->OnGenerateContainer = 0;
  *(undefined8 *)&(this->OnGenerateContainer).field_0x8 = 0;
  *(undefined4 *)&(this->OnGenerateContainer).field_0x10 = 0;
  (this->OverrideIconColorSettings).bIsSet = false;
  this->FieldIterator = (IFieldIterator *)0x0;
  this->FieldExpander = (IFieldExpander *)0x0;
  this->bSanitizeName = false;
  this->bShowFieldIcon = false;
  this->bUseRows = false;
  this->bSortChildNode = false;
  this->NotifyHook = (INotifyHook *)0x0;
  this->bOwnFieldIterator = false;
  this->bOwnFieldExpander = false;
  pIVar1 = param_1->_FieldIterator;
  this->FieldIterator = pIVar1;
  this->FieldExpander = param_1->_FieldExpander;
  if (pIVar1 == (IFieldIterator *)0x0) {
    pIVar1 = ::operator_new(8);
    if (pIVar1 != (IFieldIterator *)0x0) {
      *pIVar1 = (IFieldIterator)&___7FFieldIterator_BlueprintVisible_PropertyViewer_UE__6B_;
    }
    this->FieldIterator = pIVar1;
    this->bOwnFieldIterator = true;
  }
  if (this->FieldExpander == (IFieldExpander *)0x0) {
    pIVar2 = ::operator_new(0x10);
    if (pIVar2 != (IFieldExpander *)0x0) {
      *pIVar2 = (IFieldExpander)0x0;
      pIVar2[1] = (IFieldExpander)0x0;
      *pIVar2 = (IFieldExpander)&___7FFieldExpander_Default_PropertyViewer_UE__6B_;
    }
    *(undefined2 *)(pIVar2 + 1) = 0x100;
    this->FieldExpander = pIVar2;
    this->bOwnFieldExpander = true;
  }
  this->NotifyHook = param_1->_NotifyHook;
  TDelegate<TSharedPtr<SWidget,1>___cdecl(UE::PropertyViewer::SPropertyViewer::FHandle,TArrayView<FFieldVariant_const_,int>),FDefaultDelegateUserPolicy>
  ::operator=(&this->OnGetPreSlot,&param_1->_OnGetPreSlot);
  TDelegate<TSharedPtr<SWidget,1>___cdecl(UE::PropertyViewer::SPropertyViewer::FHandle,TArrayView<FFieldVariant_const_,int>),FDefaultDelegateUserPolicy>
  ::operator=(&this->OnGetPostSlot,&param_1->_OnGetPostSlot);
  TDelegate<TSharedPtr<SWidget,1>___cdecl(UE::PropertyViewer::SPropertyViewer::FHandle,TArrayView<FFieldVariant_const_,int>),FDefaultDelegateUserPolicy>
  ::operator=(&this->OnContextMenuOpening,&param_1->_OnContextMenuOpening);
  TDelegate<void___cdecl(UE::PropertyViewer::SPropertyViewer::FHandle,TArrayView<FFieldVariant_const_,int>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
  ::operator=(&this->OnSelectionChanged,&param_1->_OnSelectionChanged);
  TDelegate<void___cdecl(UE::PropertyViewer::SPropertyViewer::FHandle,TArrayView<FFieldVariant_const_,int>),FDefaultDelegateUserPolicy>
  ::operator=(&this->OnDoubleClicked,&param_1->_OnDoubleClicked);
  TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&,UE::PropertyViewer::SPropertyViewer::FHandle,TArrayView<FFieldVariant_const_,int>),FDefaultDelegateUserPolicy>
  ::operator=(&this->OnDragDetected,&param_1->_OnDragDetected);
  TDelegate<TSharedRef<SWidget,1>___cdecl(UE::PropertyViewer::SPropertyViewer::FHandle,TOptional<FText>),FDefaultDelegateUserPolicy>
  ::operator=(&this->OnGenerateContainer,&param_1->_OnGenerateContainer);
  this->PropertyVisibility = param_1->_PropertyVisibility;
  this->bSanitizeName = param_1->_bSanitizeName;
  this->bShowFieldIcon = param_1->_bShowFieldIcon;
  this->bSortChildNode = param_1->_bSortChildNode;
  return this;
}

// ~FPropertyViewerImpl @ 14d83a810

void __thiscall
UE::PropertyViewer::Private::FPropertyViewerImpl::~FPropertyViewerImpl(FPropertyViewerImpl *this)

{
  int *piVar1;
  int iVar2;
  IFieldIterator *pIVar3;
  IFieldExpander *pIVar4;
  void *pvVar5;
  FScriptContainerElement *pFVar6;
  longlong *plVar7;
  
  if ((this->bOwnFieldIterator != false) &&
     (pIVar3 = this->FieldIterator, pIVar3 != (IFieldIterator *)0x0)) {
    (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3,1);
  }
  if ((this->bOwnFieldExpander != false) &&
     (pIVar4 = this->FieldExpander, pIVar4 != (IFieldExpander *)0x0)) {
    (**(code **)((longlong)*pIVar4 + 0x18))(pIVar4,1);
  }
  if ((this->OverrideIconColorSettings).bIsSet != false) {
    *(undefined4 *)&(this->OverrideIconColorSettings).TypedValue.StructColors.field_0x48 = 0;
    pvVar5 = *(void **)&(this->OverrideIconColorSettings).TypedValue.StructColors.field_0x40;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&(this->OverrideIconColorSettings).TypedValue.StructColors);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGenerateContainer);
  pvVar5 = *(void **)&(this->OnGenerateContainer).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGenerateContainer);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDragDetected);
  pvVar5 = *(void **)&(this->OnDragDetected).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDragDetected);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDoubleClicked);
  pvVar5 = *(void **)&(this->OnDoubleClicked).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDoubleClicked);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSelectionChanged);
  pvVar5 = *(void **)&(this->OnSelectionChanged).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSelectionChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnContextMenuOpening);
  pvVar5 = *(void **)&(this->OnContextMenuOpening).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnContextMenuOpening);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGetPostSlot);
  pvVar5 = *(void **)&(this->OnGetPostSlot).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGetPostSlot);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGetPreSlot);
  pvVar5 = *(void **)&(this->OnGetPreSlot).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGetPreSlot);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->FilterHandler).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SearchFilter).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,int>
            ((TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *)
             (this->FilteredTreeSource).AllocatorInstance.Data,(this->FilteredTreeSource).ArrayNum);
  pFVar6 = (this->FilteredTreeSource).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  DestructItems<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,int>
            ((TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *)
             (this->TreeSource).AllocatorInstance.Data,(this->TreeSource).ArrayNum);
  pFVar6 = (this->TreeSource).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TreeWidget).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SearchBoxWidget).SharedReferenceCount.ReferenceController);
  DestructItems<UE::PropertyViewer::Private::FTreeNode::FNodeReference,int>
            ((FNodeReference *)(this->NodeReferences).AllocatorInstance.Data,
             (this->NodeReferences).ArrayNum);
  pFVar6 = (this->NodeReferences).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  DestructItems<TSharedPtr<UE::PropertyViewer::Private::FContainer,1>,int>
            ((TSharedPtr<UE::PropertyViewer::Private::FContainer,1> *)
             (this->Containers).AllocatorInstance.Data,(this->Containers).ArrayNum);
  pFVar6 = (this->Containers).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  plVar7 = (longlong *)this->_padding_;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar7 + 8))(plVar7,1);
    }
  }
  return;
}

// operator() @ 14d83d530

void __thiscall
`UE::PropertyViewer::Private::FPropertyViewerImpl::Tick'::__l2::<lambda_1>::operator()
          (void *this,
          TSharedPtr<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1> *param_1,
          TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *param_2)

{
  TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  int iVar3;
  FTreeNode *pFVar4;
  code *pcVar5;
  atomic<int> aVar6;
  bool bVar7;
  atomic<int> aVar8;
  ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> FVar9;
  TReferenceControllerBase<1> *pTVar10;
  
  if ((param_2->Object == (FTreeNode *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = param_2->Object;
  pTVar10 = (pFVar4->ParentNode).WeakReferenceCount.ReferenceController;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar6 = pTVar10->SharedReferenceCount;
    do {
      if (aVar6 == (atomic<int>)0x0) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d83d595;
      }
      LOCK();
      aVar8 = pTVar10->SharedReferenceCount;
      bVar7 = aVar6 == aVar8;
      if (bVar7) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar8 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar8;
    } while (!bVar7);
    pFVar4 = (pFVar4->ParentNode).Object;
    if (pFVar4 != (FTreeNode *)0x0) {
      pTVar1 = &pFVar4->ChildNodes;
      piVar2 = &(pFVar4->ChildNodes).ArrayMax;
      iVar3 = (pFVar4->ChildNodes).ArrayNum;
      FVar9 = (pFVar4->ChildNodes).AllocatorInstance.SecondaryData;
      if ((pFVar4->ChildNodes).ArrayMax < 0) {
        if (FVar9 == (ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>)0x0) {
          FVar9 = (ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>)pTVar1;
        }
        DestructItems<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,int>
                  ((TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *)FVar9,iVar3);
        (pFVar4->ChildNodes).ArrayNum = 0;
        if (*piVar2 != 0) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_>
                    (0x10,8,0,&pTVar1->AllocatorInstance,0,piVar2);
        }
      }
      else {
        if (FVar9 == (ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>)0x0) {
          FVar9 = (ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>)pTVar1;
        }
        DestructItems<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,int>
                  ((TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *)FVar9,iVar3);
        (pFVar4->ChildNodes).ArrayNum = 0;
      }
      pFVar4->bChildGenerated = false;
    }
  }
LAB_14d83d595:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  if ((param_1->Object == (STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0)
     && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014d83d5df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1->Object + 0x248))();
  return;
}

// operator() @ 14d83d800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

EActiveTimerReturnType __thiscall
`UE::PropertyViewer::Private::FPropertyViewerImpl::Construct'::__l14::<lambda_1>::operator()
          (void *this,double param_1,float param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  longlong lVar3;
  SWidget *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  SWindow *pSVar6;
  TReferenceControllerBase<1> *pTVar7;
  code *pcVar8;
  EVisibility EVar9;
  bool bVar10;
  EActiveTimerReturnType EVar11;
  FSlateApplication *pFVar12;
  TSharedRef<SWindow,1> *pTVar13;
  ForElementType<FArrangedWidget> FVar14;
  undefined1 auStack_1b8 [32];
  TSharedRef<SWidget_const_,1> local_198;
  TSharedRef<SWindow,1> local_188;
  FWidgetPath local_178;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  if (*(longlong *)(*(longlong *)this + 0x30) == 0) {
    EVar11 = Continue;
  }
  else {
    FWidgetPath::FWidgetPath(&local_178);
    pFVar12 = FSlateApplication::Get();
    EVar9 = EVisibility::Visible;
    lVar3 = *(longlong *)this;
    if (*(longlong *)(lVar3 + 0x30) == 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L"");
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        EVar11 = (*pcVar8)();
        return EVar11;
      }
    }
    pSVar4 = *(SWidget **)(lVar3 + 0x30);
    pTVar5 = *(TReferenceControllerBase<1> **)(lVar3 + 0x38);
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pSVar4 == (SWidget *)0x0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L"");
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        EVar11 = (*pcVar8)();
        return EVar11;
      }
    }
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_198.Object = pSVar4;
    local_198.SharedReferenceCount.ReferenceController = pTVar5;
    FSlateApplication::GeneratePathToWidgetUnchecked(pFVar12,&local_198,&local_178,EVar9);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    bVar10 = FWidgetPath::IsValid(&local_178);
    if (bVar10) {
      pFVar12 = FSlateApplication::Get();
      (**(code **)(*(longlong *)pFVar12 + 0x148))(pFVar12,&local_178,2);
      pTVar13 = FWidgetPath::GetWindow(&local_178,&local_188);
      pSVar6 = pTVar13->Object;
      pTVar5 = *(TReferenceControllerBase<1> **)(*(longlong *)this + 0x38);
      pSVar4 = *(SWidget **)(*(longlong *)this + 0x30);
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      (pSVar6->WidgetToFocusOnActivate).Object = pSVar4;
      if (pTVar5 != (pSVar6->WidgetToFocusOnActivate).WeakReferenceCount.ReferenceController) {
        if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
          UNLOCK();
        }
        pTVar7 = (pSVar6->WidgetToFocusOnActivate).WeakReferenceCount.ReferenceController;
        if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar7->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
          }
        }
        (pSVar6->WidgetToFocusOnActivate).WeakReferenceCount.ReferenceController = pTVar5;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_188.SharedReferenceCount.ReferenceController);
    }
    if (local_178.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_178.VirtualPointerPositions.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_178.TopLevelWindow.SharedReferenceCount.ReferenceController);
    FVar14 = (ForElementType<FArrangedWidget>)&local_178.Widgets.Array;
    if (local_178.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FVar14 = local_178.Widgets.Array.AllocatorInstance.SecondaryData;
    }
    DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar14,local_178.Widgets.Array.ArrayNum);
    if (local_178.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FMemory::Free((void *)local_178.Widgets.Array.AllocatorInstance.SecondaryData);
    }
    EVar11 = Stop;
  }
  return EVar11;
}

// AddContainer @ 14d8413a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::PropertyViewer::Private::FPropertyViewerImpl::AddContainer
          (FPropertyViewerImpl *this,FHandle param_1,TOptional<FText> *param_2,UStruct *param_3)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedPtr<UE::PropertyViewer::Private::FContainer,1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TReferenceControllerBase<1> *pTVar7;
  FScriptContainerElement *pFVar8;
  atomic<int> aVar9;
  TReferenceControllerBase<1> *pTVar10;
  undefined1 local_res18 [16];
  undefined1 local_58 [8];
  UStruct *local_50;
  TSharedPtr<UE::PropertyViewer::Private::FContainer,1> local_48;
  
  pTVar7 = ::operator_new(0x48);
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    local_48.Object = ___xmm_00000000000000000000000000000010;
    local_48.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    aVar9 = (atomic<int>)0x0;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFContainer_Private_PropertyViewer_UE___00_SharedPointerInternals__6B_
    ;
    pTVar2 = *(TReferenceControllerBase<1> **)&param_2->field0_0x0;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      (**(code **)(pTVar2->_padding_ + 8))(pTVar2,local_res18);
      aVar9 = (atomic<int>)(param_2->field0_0x0).TypedValue.Flags;
      pTVar10 = pTVar2;
    }
    *(int *)&pTVar7[1]._padding_ = param_1.Id;
    if ((GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UStruct *)0x0)) {
      GC::MarkAsReachable((UObject *)param_3);
    }
    *(undefined8 *)((longlong)&pTVar7[1]._padding_ + 4) = 0;
    local_50 = param_3;
    if ((GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UStruct *)0x0)) {
      GC::MarkAsReachable((UObject *)param_3);
    }
    FWeakObjectPtr::operator=
              ((FWeakObjectPtr *)((longlong)&pTVar7[1]._padding_ + 4),(FObjectPtr)&local_50);
    *(undefined8 *)&pTVar7[1].WeakReferenceCount = 0;
    pTVar7[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[3]._padding_ = 0;
    pTVar7[3].SharedReferenceCount = (atomic<int>)0x0;
    if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
      *(undefined1 *)&pTVar7[4]._padding_ = 0;
    }
    else {
      pTVar7[3]._padding_ = (longlong)pTVar10;
      (**(code **)(pTVar10->_padding_ + 8))(pTVar10,local_58);
      pTVar7[3].SharedReferenceCount = aVar9;
      *(undefined1 *)&pTVar7[4]._padding_ = 0;
      (**(code **)(pTVar10->_padding_ + 0x10))(pTVar10);
    }
    if ((FContainer *)(pTVar7 + 1) == (FContainer *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    pTVar10 = pTVar7;
    local_48.Object = (FContainer *)(pTVar7 + 1);
    local_48.SharedReferenceCount.ReferenceController = pTVar7;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  pTVar3 = (TSharedPtr<UE::PropertyViewer::Private::FContainer,1> *)
           (this->Containers).AllocatorInstance.Data;
  if ((pTVar3 <= &local_48) && (&local_48 < pTVar3 + (this->Containers).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->Containers).ArrayNum;
  piVar1 = &(this->Containers).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->Containers).AllocatorInstance,piVar1);
  }
  pFVar8 = (this->Containers).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  (this->Containers).ArrayNum = iVar6 + 1;
  *(FContainer **)pFVar8 = local_48.Object;
  *(TReferenceControllerBase<1> **)(pFVar8 + 8) = local_48.SharedReferenceCount.ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddContainerInternal(this,param_1,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  if (*(longlong **)&param_2->field0_0x0 != (longlong *)0x0) {
    (**(code **)(**(longlong **)&param_2->field0_0x0 + 0x10))();
  }
  return;
}

// AddContainerInstance @ 14d8418b0

void __thiscall
UE::PropertyViewer::Private::FPropertyViewerImpl::AddContainerInstance
          (FPropertyViewerImpl *this,FHandle param_1,TOptional<FText> *param_2,UObject *param_3)

{
  int *piVar1;
  TSharedPtr<UE::PropertyViewer::Private::FContainer,1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FHandle local_res10 [4];
  UObject *local_res20;
  TSharedPtr<UE::PropertyViewer::Private::FContainer,1> local_28;
  
  local_res10[0].Id = param_1.Id;
  local_res20 = param_3;
  local_28.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)
       SharedPointerInternals::
       NewIntrusiveReferenceController<1,UE::PropertyViewer::Private::FContainer,UE::PropertyViewer::SPropertyViewer::FHandle_&,TOptional<FText>_&,UObject_*_&>
                 (local_res10,param_2,&local_res20);
  local_28.Object =
       (FContainer *)
       &((TIntrusiveReferenceController<UE::PropertyViewer::Private::FContainer,1> *)
        local_28.SharedReferenceCount.ReferenceController)->ObjectStorage;
  if (local_28.Object == (FContainer *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((TIntrusiveReferenceController<UE::PropertyViewer::Private::FContainer,1> *)
      local_28.SharedReferenceCount.ReferenceController !=
      (TIntrusiveReferenceController<UE::PropertyViewer::Private::FContainer,1> *)0x0) {
    LOCK();
    *(int *)&((TIntrusiveReferenceController<UE::PropertyViewer::Private::FContainer,1> *)
             local_28.SharedReferenceCount.ReferenceController)->_padding_ =
         (int)((TIntrusiveReferenceController<UE::PropertyViewer::Private::FContainer,1> *)
              local_28.SharedReferenceCount.ReferenceController)->_padding_ + 1;
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  pTVar2 = (TSharedPtr<UE::PropertyViewer::Private::FContainer,1> *)
           (this->Containers).AllocatorInstance.Data;
  if ((pTVar2 <= &local_28) && (&local_28 < pTVar2 + (this->Containers).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->Containers).ArrayNum;
  piVar1 = &(this->Containers).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->Containers).AllocatorInstance,piVar1);
  }
  pFVar6 = (this->Containers).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
  (this->Containers).ArrayNum = iVar5 + 1;
  *(FContainer **)pFVar6 = local_28.Object;
  *(TReferenceControllerBase<1> **)(pFVar6 + 8) = local_28.SharedReferenceCount.ReferenceController;
  if ((TIntrusiveReferenceController<UE::PropertyViewer::Private::FContainer,1> *)
      local_28.SharedReferenceCount.ReferenceController !=
      (TIntrusiveReferenceController<UE::PropertyViewer::Private::FContainer,1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddContainerInternal(this,local_res10[0],&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (*(longlong **)&param_2->field0_0x0 != (longlong *)0x0) {
    (**(code **)(**(longlong **)&param_2->field0_0x0 + 0x10))();
  }
  return;
}

// AddContainerInstance @ 14d841a30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::PropertyViewer::Private::FPropertyViewerImpl::AddContainerInstance
          (FPropertyViewerImpl *this,FHandle param_1,TOptional<FText> *param_2,
          UScriptStruct *param_3,void *param_4)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedPtr<UE::PropertyViewer::Private::FContainer,1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TReferenceControllerBase<1> *pTVar7;
  FScriptContainerElement *pFVar8;
  atomic<int> aVar9;
  TReferenceControllerBase<1> *pTVar10;
  undefined1 local_res18 [16];
  undefined1 local_58 [8];
  UScriptStruct *local_50;
  TSharedPtr<UE::PropertyViewer::Private::FContainer,1> local_48;
  
  pTVar7 = ::operator_new(0x48);
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    local_48.Object = ___xmm_00000000000000000000000000000010;
    local_48.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    aVar9 = (atomic<int>)0x0;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFContainer_Private_PropertyViewer_UE___00_SharedPointerInternals__6B_
    ;
    pTVar2 = *(TReferenceControllerBase<1> **)&param_2->field0_0x0;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      (**(code **)(pTVar2->_padding_ + 8))(pTVar2,local_res18);
      aVar9 = (atomic<int>)(param_2->field0_0x0).TypedValue.Flags;
      pTVar10 = pTVar2;
    }
    *(int *)&pTVar7[1]._padding_ = param_1.Id;
    if ((GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UScriptStruct *)0x0)) {
      GC::MarkAsReachable((UObject *)param_3);
    }
    *(undefined8 *)((longlong)&pTVar7[1]._padding_ + 4) = 0;
    local_50 = param_3;
    if ((GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UScriptStruct *)0x0)) {
      GC::MarkAsReachable((UObject *)param_3);
    }
    FWeakObjectPtr::operator=
              ((FWeakObjectPtr *)((longlong)&pTVar7[1]._padding_ + 4),(FObjectPtr)&local_50);
    *(void **)&pTVar7[2].SharedReferenceCount = param_4;
    *(undefined8 *)&pTVar7[1].WeakReferenceCount = 0;
    pTVar7[3]._padding_ = 0;
    pTVar7[3].SharedReferenceCount = (atomic<int>)0x0;
    if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
      *(undefined1 *)&pTVar7[4]._padding_ = 0;
    }
    else {
      pTVar7[3]._padding_ = (longlong)pTVar10;
      (**(code **)(pTVar10->_padding_ + 8))(pTVar10,local_58);
      pTVar7[3].SharedReferenceCount = aVar9;
      *(undefined1 *)&pTVar7[4]._padding_ = 0;
      (**(code **)(pTVar10->_padding_ + 0x10))(pTVar10);
    }
    if ((FContainer *)(pTVar7 + 1) == (FContainer *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    pTVar10 = pTVar7;
    local_48.Object = (FContainer *)(pTVar7 + 1);
    local_48.SharedReferenceCount.ReferenceController = pTVar7;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  pTVar3 = (TSharedPtr<UE::PropertyViewer::Private::FContainer,1> *)
           (this->Containers).AllocatorInstance.Data;
  if ((pTVar3 <= &local_48) && (&local_48 < pTVar3 + (this->Containers).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->Containers).ArrayNum;
  piVar1 = &(this->Containers).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->Containers).AllocatorInstance,piVar1);
  }
  pFVar8 = (this->Containers).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  (this->Containers).ArrayNum = iVar6 + 1;
  *(FContainer **)pFVar8 = local_48.Object;
  *(TReferenceControllerBase<1> **)(pFVar8 + 8) = local_48.SharedReferenceCount.ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddContainerInternal(this,param_1,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  if (*(longlong **)&param_2->field0_0x0 != (longlong *)0x0) {
    (**(code **)(**(longlong **)&param_2->field0_0x0 + 0x10))();
  }
  return;
}

// AddContainerInternal @ 14d841ce0

void __thiscall
UE::PropertyViewer::Private::FPropertyViewerImpl::AddContainerInternal
          (FPropertyViewerImpl *this,FHandle param_1,
          TSharedPtr<UE::PropertyViewer::Private::FContainer,1> *param_2)

{
  atomic<int> *paVar1;
  TArray<UE::PropertyViewer::Private::FTreeNode::FNodeReference,TSizedDefaultAllocator<32>_> *pTVar2
  ;
  int *piVar3;
  undefined1 *puVar4;
  atomic<int> aVar5;
  FContainer *pFVar6;
  longlong *plVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pSVar10;
  TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *this_00;
  code *pcVar11;
  FTreeNode *pFVar12;
  bool bVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  TOptional<FText> *pTVar16;
  longlong lVar17;
  longlong *plVar18;
  uint uVar19;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  TArray<UE::PropertyViewer::Private::FTreeNode::FNodeReference,TSizedDefaultAllocator<32>_>
  local_78;
  FTreeNode *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  TSharedRef<UE::PropertyViewer::Private::FTreeNode,1> local_58;
  FTreeNode *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  longlong local_38 [2];
  
  if (param_2->Object == (FContainer *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar13) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pFVar6 = param_2->Object;
  uVar19 = 0;
  plVar7 = *(longlong **)&(pFVar6->DisplayName).field0_0x0;
  plVar18 = (longlong *)0x0;
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 8))(plVar7,local_res8);
    uVar19 = (pFVar6->DisplayName).field0_0x0.TypedValue.Flags;
    plVar18 = plVar7;
  }
  MakeShared<UE::PropertyViewer::Private::FTreeNode,1>(&local_58);
  pFVar12 = local_58.Object;
  ((local_58.Object)->Container).Object = param_2->Object;
  pTVar8 = (param_2->SharedReferenceCount).ReferenceController;
  if (pTVar8 != ((local_58.Object)->Container).WeakReferenceCount.ReferenceController) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar9 = ((local_58.Object)->Container).WeakReferenceCount.ReferenceController;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar9->WeakReferenceCount;
      aVar5 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar5 == (atomic<int>)0x1) {
        (**(code **)(pTVar9->_padding_ + 8))(pTVar9,1);
      }
    }
    (pFVar12->Container).WeakReferenceCount.ReferenceController = pTVar8;
  }
  pFVar12 = local_58.Object;
  pTVar16 = &(local_58.Object)->OverrideDisplayName;
  if ((TOptional<FText> *)local_38 != pTVar16) {
    plVar7 = *(longlong **)&pTVar16->field0_0x0;
    if (plVar18 == (longlong *)0x0) {
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))();
        (pTVar16->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
        (pFVar12->OverrideDisplayName).field0_0x0.TypedValue.Flags = 0;
      }
    }
    else {
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))();
      }
      *(longlong **)&pTVar16->field0_0x0 = plVar18;
      (**(code **)(*plVar18 + 8))(plVar18,local_res18);
      (pFVar12->OverrideDisplayName).field0_0x0.TypedValue.Flags = uVar19;
      if ((pTVar16->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x171,
                            L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                           );
        if (bVar13) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
    }
  }
  if (plVar18 != (longlong *)0x0) {
    (**(code **)(*plVar18 + 0x10))(plVar18);
  }
  local_68 = local_58.Object;
  pTStack_60 = local_58.SharedReferenceCount.ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  pTVar2 = &this->NodeReferences;
  if (local_68 == (FTreeNode *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar13) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  Private::FTreeNode::BuildChildNodesRecursive
            (local_68,this->FieldIterator,this->FieldExpander,this->bSortChildNode,2,&local_78);
  if (pTVar2 == &local_78) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)this != (void*)&Source",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x986,L"");
    if (bVar13) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  lVar17 = (longlong)local_78.ArrayNum;
  if (local_78.ArrayNum != 0) {
    iVar14 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x18,8,local_78.ArrayNum,&pTVar2->AllocatorInstance,
                        &(this->NodeReferences).ArrayNum,&(this->NodeReferences).ArrayMax);
    memmove((pTVar2->AllocatorInstance).Data + (longlong)iVar14 * 0x18,
            local_78.AllocatorInstance.Data,lVar17 * 0x18);
    local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  }
  DestructItems<UE::PropertyViewer::Private::FTreeNode::FNodeReference,int>
            ((FNodeReference *)local_78.AllocatorInstance.Data,0);
  if ((FNodeReference *)local_78.AllocatorInstance.Data != (FNodeReference *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  pFVar15 = (this->TreeSource).AllocatorInstance.Data;
  if ((pFVar15 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 < pFVar15 + (longlong)(this->TreeSource).ArrayMax * 0x10)
     ) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  iVar14 = (this->TreeSource).ArrayNum;
  piVar3 = &(this->TreeSource).ArrayMax;
  if (iVar14 == *piVar3) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&(this->TreeSource).AllocatorInstance,piVar3);
  }
  pFVar15 = (this->TreeSource).AllocatorInstance.Data + (longlong)iVar14 * 0x10;
  (this->TreeSource).ArrayNum = iVar14 + 1;
  *(FTreeNode **)pFVar15 = local_68;
  *(TReferenceControllerBase<1> **)(pFVar15 + 8) = pTStack_60;
  if (pTStack_60 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_60->SharedReferenceCount = (atomic<int>)((int)pTStack_60->SharedReferenceCount + 1);
    UNLOCK();
  }
  pSVar10 = (this->TreeWidget).Object;
  if (pSVar10 != (STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) {
    puVar4 = &pSVar10->field_0x588;
    local_48 = local_68;
    pTStack_40 = pTStack_60;
    pcVar11 = *(code **)(*(longlong *)puVar4 + 0x50);
    if (pTStack_60 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_60->SharedReferenceCount = (atomic<int>)((int)pTStack_60->SharedReferenceCount + 1);
      UNLOCK();
    }
    (*pcVar11)(puVar4,&local_48,1);
  }
  this_00 = (this->FilterHandler).Object;
  if (this_00 != (TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) {
    TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::RefreshAndFilterTree
              (this_00);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  return;
}

// Construct @ 14d845340

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedRef<SWidget,1> * __thiscall
UE::PropertyViewer::Private::FPropertyViewerImpl::Construct
          (FPropertyViewerImpl *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          FArguments *param_1)

{
  int *piVar1;
  TSharedPtr<TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1> *pTVar2;
  int iVar3;
  Type TVar4;
  EPropertyVisibility EVar5;
  FPropertyViewerImpl *pFVar6;
  longlong *plVar7;
  SWidget *pSVar8;
  SBorder *pSVar9;
  TReferenceControllerBase<1> *pTVar10;
  code *pcVar11;
  bool bVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  FSharedReferencer<1> FVar16;
  bool bVar17;
  char cVar18;
  undefined8 *puVar19;
  TSharedRef<UE::PropertyViewer::Private::FPropertyViewerImpl,1> *pTVar20;
  ulong64 uVar21;
  FSlotArguments *pFVar22;
  TSharedRef<SWidget,1> *pTVar23;
  FArguments *pFVar24;
  TSharedRef<SHorizontalBox,1> *pTVar25;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *pFVar26;
  undefined1 *puVar27;
  TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy> *pTVar28;
  FSlotArguments *pFVar29;
  FArguments *pFVar30;
  ISlateStyle *pIVar31;
  FName *pFVar32;
  TSharedRef<SBorder,1> *pTVar33;
  FArguments *pFVar34;
  FSlotArguments *pFVar35;
  TSharedRef<SVerticalBox,1> *pTVar36;
  FSlotArguments *pFVar37;
  bool bVar38;
  TReferenceControllerBase<1> *pTVar39;
  TTextFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pTVar40;
  TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pTVar41;
  undefined4 local_res8;
  undefined4 uStackX_c;
  TSharedRef<SWidget,1> *local_res10;
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  SHorizontalBox *local_11b8;
  FSharedReferencer<1> FStack_11b0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_11a8;
  FDelegateAllocation local_11a0;
  FLLMScope local_1190;
  FLLMScope local_118c;
  FLLMScope local_1188 [2];
  undefined1 local_1180 [8];
  FDelegateAllocation local_1178;
  TTextFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *local_1168;
  FSharedReferencer<1> local_1160;
  undefined8 *local_1158;
  FSharedReferencer<1> FStack_1150;
  SBorder *local_1148;
  FSharedReferencer<1> local_1140;
  undefined8 local_1138;
  undefined8 uStack_1130;
  undefined1 local_1128;
  undefined1 local_1120 [8];
  ForAnyElementType FStack_1118;
  ulonglong local_1110;
  SHorizontalBox *local_1108;
  FSharedReferencer<1> FStack_1100;
  FSlateBrush *local_10f8;
  undefined1 local_10f0;
  undefined1 local_10e8 [8];
  void *pvStack_10e0;
  undefined8 local_10d8;
  undefined4 local_10d0 [2];
  undefined4 local_10c8 [2];
  undefined4 local_10c0 [2];
  undefined4 local_10b8 [2];
  undefined4 local_10b0 [2];
  FName local_10a8;
  FMemScope local_10a0;
  <lambda_1> local_1098;
  FName local_1090;
  FMemScope local_1088;
  FName local_1080;
  undefined8 local_1078;
  FSharedReferencer<1> local_1070;
  FMemScope local_1068;
  undefined1 local_1060 [8];
  void *local_1058;
  int local_1050;
  TAttribute<float> local_1048;
  TAttribute<float> local_1028;
  TAttribute<float> local_1008;
  FDestructionSentinel local_fe8;
  FDestructionSentinel local_fd0;
  FDestructionSentinel local_fb8;
  FDestructionSentinel local_fa0;
  FDestructionSentinel local_f88;
  FDelegateAllocation *local_f70;
  FDestructionSentinel local_f68;
  FDelegateAllocation *local_f50;
  TSharedRef<SBorder,1> local_f48;
  TSharedRef<SVerticalBox,1> local_f38;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_f28;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_f10;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_ef8;
  TSharedRef<SWidget,1> local_ee0;
  TSharedRef<UE::PropertyViewer::Private::FPropertyViewerImpl,1> local_ed0;
  FName local_ec0;
  TSharedRef<SHorizontalBox,1> local_eb8;
  TSharedRef<SWidget,1> local_ea8;
  TSharedRef<FActiveTimerHandle,1> local_e98;
  SWidget *local_e88;
  TReferenceControllerBase<1> *pTStack_e80;
  FReadAccessScope local_e78;
  FReadAccessScope local_e60;
  TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy> local_e48;
  undefined8 *local_e30 [2];
  TReferenceControllerBase<1> *local_e20;
  undefined1 local_e00 [40];
  FSlotArgumentsMixin local_dd8;
  FArguments local_d48;
  FArguments local_b40;
  FSlotArguments local_938;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_850;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_750;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_650;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_550;
  FArguments local_450;
  undefined8 uStack_48;
  
  uStack_48 = 0x14d845363;
  bVar12 = false;
  bVar38 = false;
  bVar17 = false;
  local_res8 = 0;
  local_11a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_11a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_11a0.DelegateSize = 0;
  local_res10 = __return_storage_ptr__;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_11a8,(FWriteAccessScope *)&local_f88);
  local_f70 = &local_11a0;
  puVar19 = Core::Private::DelegateAllocate(0x30,&local_11a0);
  if (puVar19 == (undefined8 *)0x0) {
    pTVar39 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    pTVar20 = TSharedFromThis<UE::PropertyViewer::Private::FPropertyViewerImpl,1>::AsShared
                        ((TSharedFromThis<UE::PropertyViewer::Private::FPropertyViewerImpl,1> *)this
                         ,&local_ed0);
    pTVar39 = (pTVar20->SharedReferenceCount).ReferenceController;
    pFVar6 = pTVar20->Object;
    if (pTVar39 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar39->SharedReferenceCount = (atomic<int>)((int)pTVar39->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar39->SharedReferenceCount = (atomic<int>)((int)pTVar39->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar19 = &
               ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__AEAV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar21 = FDelegateHandle::GenerateNewID();
    puVar19[2] = uVar21;
    *puVar19 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VFPropertyViewerImpl_Private_PropertyViewer_UE___00__A6AXV__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__AEAV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar19[3] = pFVar6;
    puVar19[4] = pTVar39;
    if (pTVar39 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar39->WeakReferenceCount = (atomic<int>)((int)pTVar39->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar12 = true;
    bVar38 = true;
    bVar17 = true;
    puVar19[5] = HandleGetFilterStrings;
  }
  pFVar29 = (FSlotArguments *)0x0;
  if (bVar17) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar39);
  }
  if (bVar38) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar39);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_ed0.SharedReferenceCount.ReferenceController);
  }
  if (local_f88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f88.Accessor,&local_f88);
  }
  pFVar22 = ::operator_new(0x410);
  if (pFVar22 == (FSlotArguments *)0x0) {
    pTVar40 = (TTextFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)&DAT_00000010;
    pFVar22 = pFVar29;
  }
  else {
    *(undefined4 *)&pFVar22->field_0x8 = 1;
    *(undefined4 *)&pFVar22->field_0xc = 1;
    local_1060 = (undefined1  [8])0x0;
    *(undefined ***)pFVar22 =
         &
         ___7__TIntrusiveReferenceController_V__TTextFilter_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00_____00_SharedPointerInternals__6B_
    ;
    local_1058 = (void *)0x0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_11a8,(FWriteAccessScope *)&local_fd0);
    if (local_1058 != (void *)0x0) {
      FMemory::Free(local_1058);
    }
    local_1058 = (void *)local_11a0.DelegateAllocator;
    local_1050 = local_11a0.DelegateSize;
    local_11a0.DelegateSize = 0;
    local_11a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    if (local_fd0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_fd0.Accessor,&local_fd0);
    }
    TTextFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::
    TTextFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
              ((TTextFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)
               &pFVar22->field_0x10,
               (TDelegate<void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
                *)local_1060);
    pTVar40 = (TTextFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)
              &pFVar22->field_0x10;
    if (pTVar40 == (TTextFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("InObject != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x246,L"");
      if (bVar17) {
        pcVar11 = (code *)swi(3);
        pTVar23 = (TSharedRef<SWidget,1> *)(*pcVar11)();
        return pTVar23;
      }
      goto LAB_14d8455d0;
    }
  }
  if (((pTVar40->_padding_ == 0) || (pTVar40->_padding_ == 0)) ||
     (*(int *)(pTVar40->_padding_ + 8) < 1)) {
    if (pFVar22 != (FSlotArguments *)0x0) {
      LOCK();
      *(int *)&pFVar22->field_0x8 = *(int *)&pFVar22->field_0x8 + 1;
      UNLOCK();
    }
    pTVar40->_padding_ = (longlong)pTVar40;
    if (pFVar22 != (FSlotArguments *)pTVar40->_padding_) {
      if (pFVar22 != (FSlotArguments *)0x0) {
        LOCK();
        *(int *)&pFVar22->field_0xc = *(int *)&pFVar22->field_0xc + 1;
        UNLOCK();
      }
      plVar7 = (longlong *)pTVar40->_padding_;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
      pTVar40->_padding_ = (longlong)pFVar22;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar22);
  }
LAB_14d8455d0:
  if (pFVar22 != (FSlotArguments *)0x0) {
    LOCK();
    *(int *)&pFVar22->field_0x8 = *(int *)&pFVar22->field_0x8 + 1;
    UNLOCK();
  }
  local_1168 = pTVar40;
  local_1160.ReferenceController = (TReferenceControllerBase<1> *)pFVar22;
  if (&this->SearchFilter !=
      (TSharedPtr<TTextFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1> *)
      &local_1168) {
    (this->SearchFilter).Object = pTVar40;
    local_1168 = (TTextFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SearchFilter).SharedReferenceCount,&local_1160);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1160.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar22);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_11a8,(FWriteAccessScope *)&local_fb8);
  if ((local_11a0.DelegateSize != 0) &&
     (local_11a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_11a0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_11a0,0,0,0x10);
    local_11a0.DelegateSize = 0;
  }
  if (local_fb8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_fb8.Accessor,&local_fb8);
  }
  if (local_11a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_11a0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_11a8.AccessDetector);
  FStack_1150.ReferenceController = ::operator_new(0xf0);
  if ((FSlotArguments *)FStack_1150.ReferenceController == (FSlotArguments *)0x0) {
    local_1158 = ___xmm_00000000000000000000000000000010;
    pTVar41 = (TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)
              &DAT_00000010;
    FStack_1150.ReferenceController = (TReferenceControllerBase<1> *)_UNK_150651568;
    pFVar22 = pFVar29;
  }
  else {
    *(undefined4 *)&((FSlotArguments *)FStack_1150.ReferenceController)->field_0x8 = 1;
    pTVar41 = (TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)
              &((FSlotArguments *)FStack_1150.ReferenceController)->field_0x10;
    *(undefined4 *)&((FSlotArguments *)FStack_1150.ReferenceController)->field_0xc = 1;
    *(undefined ***)FStack_1150.ReferenceController =
         &
         ___7__TIntrusiveReferenceController_V__TreeFilterHandler_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00_____00_SharedPointerInternals__6B_
    ;
    *(undefined8 *)&((FSlotArguments *)FStack_1150.ReferenceController)->field_0x30 = 0;
    *(undefined8 *)&((FSlotArguments *)FStack_1150.ReferenceController)->field_0x38 = 0;
    *(undefined4 *)&((FSlotArguments *)FStack_1150.ReferenceController)->field_0x40 = 0;
    *(undefined8 *)&((FSlotArguments *)FStack_1150.ReferenceController)->field_0x48 = 0;
    *(undefined8 *)&((FSlotArguments *)FStack_1150.ReferenceController)->field_0x50 = 0;
    *(undefined8 *)&((FSlotArguments *)FStack_1150.ReferenceController)->field_0x68 = 0;
    *(undefined4 *)&((FSlotArguments *)FStack_1150.ReferenceController)->field_0x70 = 0;
    *(undefined4 *)&((FSlotArguments *)FStack_1150.ReferenceController)->field_0x74 = 0x80;
    *(undefined4 *)&((FSlotArguments *)FStack_1150.ReferenceController)->field_0x78 = 0xffffffff;
    *(undefined4 *)&((FSlotArguments *)FStack_1150.ReferenceController)->field_0x7c = 0;
    *(undefined8 *)&((FSlotArguments *)FStack_1150.ReferenceController)->field_0x88 = 0;
    *(undefined4 *)&((FSlotArguments *)FStack_1150.ReferenceController)->field_0x90 = 0;
    *(undefined8 *)&((FSlotArguments *)FStack_1150.ReferenceController)->field_0x98 = 0;
    *(undefined8 *)&((FSlotArguments *)FStack_1150.ReferenceController)->field_0xa0 = 0;
    *(undefined8 *)&((FSlotArguments *)FStack_1150.ReferenceController)->field_0xb8 = 0;
    *(undefined4 *)&((FSlotArguments *)FStack_1150.ReferenceController)->field_0xc0 = 0;
    *(undefined4 *)&((FSlotArguments *)FStack_1150.ReferenceController)->field_0xc4 = 0x80;
    *(undefined4 *)&((FSlotArguments *)FStack_1150.ReferenceController)->field_0xc8 = 0xffffffff;
    *(undefined4 *)&((FSlotArguments *)FStack_1150.ReferenceController)->field_0xcc = 0;
    *(undefined8 *)&((FSlotArguments *)FStack_1150.ReferenceController)->field_0xd8 = 0;
    *(undefined4 *)&((FSlotArguments *)FStack_1150.ReferenceController)->field_0xe0 = 0;
    *(undefined8 *)&((FSlotArguments *)FStack_1150.ReferenceController)->field_0x10 = 0;
    *(undefined8 *)&((FSlotArguments *)FStack_1150.ReferenceController)->field_0x18 = 0;
    *(undefined8 *)&((FSlotArguments *)FStack_1150.ReferenceController)->field_0x20 = 0;
    *(undefined8 *)&((FSlotArguments *)FStack_1150.ReferenceController)->field_0x28 = 0;
    *(undefined2 *)((longlong)FStack_1150.ReferenceController + 0xe8) = 0;
    if ((pTVar41 == (TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0)
       && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar17)) {
      pcVar11 = (code *)swi(3);
      pTVar23 = (TSharedRef<SWidget,1> *)(*pcVar11)();
      return pTVar23;
    }
    LOCK();
    *(int *)&((FSlotArguments *)FStack_1150.ReferenceController)->field_0x8 =
         *(int *)&((FSlotArguments *)FStack_1150.ReferenceController)->field_0x8 + 1;
    UNLOCK();
    pFVar22 = (FSlotArguments *)FStack_1150.ReferenceController;
    local_1158 = (undefined8 *)pTVar41;
  }
  pTVar2 = &this->FilterHandler;
  if (pTVar2 != (TSharedPtr<TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>
                 *)&local_1158) {
    pTVar2->Object = pTVar41;
    local_1158 = (undefined8 *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->FilterHandler).SharedReferenceCount,&FStack_1150);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1150.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar22);
  if ((pTVar2->Object ==
       (TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar11 = (code *)swi(3);
    pTVar23 = (TSharedRef<SWidget,1> *)(*pcVar11)();
    return pTVar23;
  }
  pTVar2->Object->Filter =
       (IFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)(this->SearchFilter).Object
  ;
  if ((pTVar2->Object ==
       (TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar11 = (code *)swi(3);
    pTVar23 = (TSharedRef<SWidget,1> *)(*pcVar11)();
    return pTVar23;
  }
  pTVar41 = pTVar2->Object;
  pTVar41->RootItems = &this->TreeSource;
  pTVar41->TreeRootItems = &this->FilteredTreeSource;
  if ((pTVar2->Object ==
       (TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar11 = (code *)swi(3);
    pTVar23 = (TSharedRef<SWidget,1> *)(*pcVar11)();
    return pTVar23;
  }
  pTVar41 = pTVar2->Object;
  local_1180 = (undefined1  [8])0x0;
  local_1178.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_1178.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1180,
             (FWriteAccessScope *)&local_f68);
  local_f50 = &local_1178;
  puVar19 = Core::Private::DelegateAllocate(0x28,&local_1178);
  if (puVar19 != (undefined8 *)0x0) {
    *puVar19 = &
               ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__AEAV__TArray_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar21 = FDelegateHandle::GenerateNewID();
    puVar19[2] = uVar21;
    *puVar19 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFPropertyViewerImpl_Private_PropertyViewer_UE____A6AXV__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__AEAV__TArray_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar19[4] = HandleGetChildren;
    puVar19[3] = this;
  }
  if (local_f68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f68.Accessor,&local_f68);
  }
  TDelegate<void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
  ::operator=(&pTVar41->GetChildrenDelegate,
              (TDelegate<void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
               *)local_1180);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1180,
             (FWriteAccessScope *)&local_fa0);
  if ((local_1178.DelegateSize != 0) &&
     (local_1178.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_1178.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_1178,0,0,0x10);
    local_1178.DelegateSize = 0;
  }
  if (local_fa0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_fa0.Accessor,&local_fa0);
  }
  if (local_1178.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_1178.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1180);
  TOptional<UE::PropertyViewer::FFieldColorSettings_const_>::operator=
            (&this->OverrideIconColorSettings,&param_1->_OverrideIconColorSettings);
  local_11b8 = (SHorizontalBox *)0x0;
  FStack_11b0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (((param_1->_bShowSearchBox != false) ||
      ((param_1->_SearchBoxPreSlot).Widget.Object != SNullWidget::NullWidget.Object)) ||
     ((param_1->_SearchBoxPostSlot).Widget.Object != SNullWidget::NullWidget.Object)) {
    pFVar24 = SHorizontalBox::FArguments::FArguments(&local_d48);
    FLLMScope::FLLMScope(&local_1190,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_10a8 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_10a0,&local_10a8,true);
    TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
              (&local_f28,"SHorizontalBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SPropertyViewerImpl.cpp"
               ,0x213,(T0RequiredArgs *)&local_res8);
    FMemScope::~FMemScope(&local_10a0);
    FLLMScope::~FLLMScope(&local_1190);
    pTVar25 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_f28,&local_eb8,pFVar24);
    local_1070.ReferenceController = (pTVar25->SharedReferenceCount).ReferenceController;
    local_11b8 = pTVar25->Object;
    if (local_1070.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1070.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_1070.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1078 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_11b0,&local_1070);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1070.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_eb8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f28._Widget.SharedReferenceCount.ReferenceController);
    DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
              ((FSlotArguments *)local_d48._Slots.AllocatorInstance.Data,local_d48._Slots.ArrayNum);
    if ((FSlotArguments *)local_d48._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
      FMemory::Free(local_d48._Slots.AllocatorInstance.Data);
    }
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_d48);
    fVar13 = __real_40800000;
    if ((param_1->_SearchBoxPreSlot).Widget.Object != SNullWidget::NullWidget.Object) {
      if ((local_11b8 == (SHorizontalBox *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar17)) {
        pcVar11 = (code *)swi(3);
        pTVar23 = (TSharedRef<SWidget,1> *)(*pcVar11)();
        return pTVar23;
      }
      pFVar26 = SHorizontalBox::AddSlot(local_11b8,&local_850);
      pFVar22 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth
                          ((FSlotArguments *)&pFVar26->_padding_);
      puVar27 = &pFVar22->field_0x48;
      if (local_10d0 != (undefined4 *)puVar27) {
        *(undefined4 *)puVar27 = 1;
        pFVar22->field_0x4c = 1;
      }
      if (puVar27 == (undefined1 *)0x0) {
        pFVar22 = (FSlotArguments *)0x0;
      }
      if (local_10c8 != (undefined4 *)&pFVar22->field_0x50) {
        *(undefined4 *)&pFVar22->field_0x50 = 2;
        pFVar22->field_0x54 = 1;
      }
      pFVar37 = pFVar29;
      if (pFVar22 != (FSlotArguments *)0xffffffffffffffb8) {
        pFVar37 = pFVar22;
      }
      pFVar22 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                          ((FSlotArgumentsMixin *)&pFVar37->field_0x18,0.0,0.0,fVar13,0.0);
      TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                ((FSlotArguments *)pFVar22,&(param_1->_SearchBoxPreSlot).Widget);
      SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
      ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_850);
    }
    if (param_1->_bShowSearchBox == false) {
      if ((local_11b8 == (SHorizontalBox *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar17)) {
        pcVar11 = (code *)swi(3);
        pTVar23 = (TSharedRef<SWidget,1> *)(*pcVar11)();
        return pTVar23;
      }
      pFVar26 = SHorizontalBox::AddSlot(local_11b8,&local_650);
      local_1028.Value = 1.0;
      local_1028.bIsSet = true;
      local_1028.Getter._0_8_ = 0;
      local_1028.Getter._8_8_ = 0;
      local_1028.Getter._16_8_ = 0;
      pFVar22 = SHorizontalBox::FSlot::FSlotArguments::FillWidth
                          ((FSlotArguments *)&pFVar26->_padding_,&local_1028);
      TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                ((FSlotArguments *)pFVar22,&SNullWidget::NullWidget);
      SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
      ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_650);
    }
    else {
      if ((local_11b8 == (SHorizontalBox *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar17)) {
        pcVar11 = (code *)swi(3);
        pTVar23 = (TSharedRef<SWidget,1> *)(*pcVar11)();
        return pTVar23;
      }
      pFVar26 = SHorizontalBox::AddSlot(local_11b8,&local_750);
      local_1048.Value = 1.0;
      local_1048.bIsSet = true;
      local_1048.Getter._0_8_ = 0;
      local_1048.Getter._8_8_ = 0;
      local_1048.Getter._16_8_ = 0;
      pFVar22 = SHorizontalBox::FSlot::FSlotArguments::FillWidth
                          ((FSlotArguments *)&pFVar26->_padding_,&local_1048);
      if (local_10c0 != (undefined4 *)&pFVar22->field_0x50) {
        *(undefined4 *)&pFVar22->field_0x50 = 2;
        pFVar22->field_0x54 = 1;
      }
      if (pFVar22 == (FSlotArguments *)0xffffffffffffffb8) {
        pFVar22 = pFVar29;
      }
      pTVar23 = CreateSearch(this,&local_ea8);
      TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                ((FSlotArguments *)pFVar22,pTVar23);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_ea8.SharedReferenceCount.ReferenceController);
      SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
      ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_750);
      if (param_1->_bFocusSearchBox != false) {
        if ((local_11b8 == (SHorizontalBox *)0x0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar17)) {
          pcVar11 = (code *)swi(3);
          pTVar23 = (TSharedRef<SWidget,1> *)(*pcVar11)();
          return pTVar23;
        }
        local_1098.__this = this;
        pTVar28 = TDelegate<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
                  ::
                  CreateSPLambda<UE::PropertyViewer::Private::FPropertyViewerImpl,_UE::PropertyViewer::Private::FPropertyViewerImpl::Construct_::__l14::<lambda_1>_>
                            (&local_e48,this,&local_1098);
        SWidget::RegisterActiveTimer((SWidget *)local_11b8,&local_e98,0.0,pTVar28);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_e98.SharedReferenceCount.ReferenceController);
      }
    }
    if ((param_1->_SearchBoxPostSlot).Widget.Object != SNullWidget::NullWidget.Object) {
      if ((local_11b8 == (SHorizontalBox *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar17)) {
        pcVar11 = (code *)swi(3);
        pTVar23 = (TSharedRef<SWidget,1> *)(*pcVar11)();
        return pTVar23;
      }
      pFVar26 = SHorizontalBox::AddSlot(local_11b8,&local_550);
      pFVar22 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth
                          ((FSlotArguments *)&pFVar26->_padding_);
      puVar27 = &pFVar22->field_0x48;
      if (local_10b8 != (undefined4 *)puVar27) {
        *(undefined4 *)puVar27 = 3;
        pFVar22->field_0x4c = 1;
      }
      if (puVar27 == (undefined1 *)0x0) {
        pFVar22 = (FSlotArguments *)0x0;
      }
      if (local_10b0 != (undefined4 *)&pFVar22->field_0x50) {
        *(undefined4 *)&pFVar22->field_0x50 = 2;
        pFVar22->field_0x54 = 1;
      }
      if (pFVar22 != (FSlotArguments *)0xffffffffffffffb8) {
        pFVar29 = pFVar22;
      }
      pFVar29 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                          ((FSlotArgumentsMixin *)&pFVar29->field_0x18,fVar13,0.0,0.0,0.0);
      TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                ((FSlotArguments *)pFVar29,&(param_1->_SearchBoxPostSlot).Widget);
      SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
      ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_550);
    }
  }
  pFVar30 = SBorder::FArguments::FArguments(&local_450);
  pIVar31 = FAppStyle::Get();
  pcVar11 = *(code **)((longlong)*pIVar31 + 0x50);
  pFVar32 = ::FName::FName(&local_ec0,"Brushes.Recessed");
  local_10f8 = (FSlateBrush *)(*pcVar11)(pIVar31,*pFVar32,0,0);
  local_10f0 = 1;
  local_10d8 = 0;
  local_10e8 = (undefined1  [8])0x0;
  pvStack_10e0 = (void *)0x0;
  (pFVar30->_BorderImage).Value = local_10f8;
  (pFVar30->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar30->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_10e8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_10e8);
  if (pvStack_10e0 != (void *)0x0) {
    FMemory::Free(pvStack_10e0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_10e8);
  pFVar30 = SBorder::FArguments::Padding(pFVar30,0.0);
  TVar4 = param_1->_SelectionMode;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGetPostSlot,
             &local_e60);
  if (((*(int *)&(this->OnGetPostSlot).field_0x10 == 0) ||
      (plVar7 = *(longlong **)&(this->OnGetPostSlot).field_0x8, plVar7 == (longlong *)0x0)) ||
     (cVar18 = (**(code **)(*plVar7 + 0x38))(), cVar18 == '\0')) {
    bVar17 = false;
  }
  else {
    bVar17 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_e60);
  EVar5 = this->PropertyVisibility;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGetPreSlot,
             &local_e78);
  if (((*(int *)&(this->OnGetPreSlot).field_0x10 == 0) ||
      (plVar7 = *(longlong **)&(this->OnGetPreSlot).field_0x8, plVar7 == (longlong *)0x0)) ||
     (cVar18 = (**(code **)(*plVar7 + 0x38))(), cVar18 == '\0')) {
    bVar38 = false;
  }
  else {
    bVar38 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_e78);
  pTVar23 = CreateTree(this,&local_ee0,bVar38,EVar5 != Hidden,bVar17,TVar4);
  pTVar39 = (pTVar23->SharedReferenceCount).ReferenceController;
  pSVar8 = pTVar23->Object;
  if (pTVar39 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar39->SharedReferenceCount = (atomic<int>)((int)pTVar39->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_e88 = (pFVar30->_Content).Widget.Object;
  pTStack_e80 = (pFVar30->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar30->_Content).Widget.Object = pSVar8;
  (pFVar30->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar39;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_e80);
  FLLMScope::FLLMScope(&local_118c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1090 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1088,&local_1090,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_f10,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SPropertyViewerImpl.cpp"
             ,0x253,local_res18);
  FMemScope::~FMemScope(&local_1088);
  FLLMScope::~FLLMScope(&local_118c);
  pTVar33 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_f10,&local_f48,pFVar30);
  pTVar39 = (pTVar33->SharedReferenceCount).ReferenceController;
  pSVar9 = pTVar33->Object;
  if (pTVar39 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar39->SharedReferenceCount = (atomic<int>)((int)pTVar39->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f10._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ee0.SharedReferenceCount.ReferenceController);
  SBorder::FArguments::~FArguments(&local_450);
  pTVar23 = local_res10;
  if (local_11b8 == (SHorizontalBox *)0x0) {
    local_res10->Object = (SWidget *)pSVar9;
    (local_res10->SharedReferenceCount).ReferenceController = pTVar39;
    if (pTVar39 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar39->SharedReferenceCount = (atomic<int>)((int)pTVar39->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar39);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_11b0.ReferenceController);
  }
  else {
    pFVar34 = SVerticalBox::FArguments::FArguments(&local_b40);
    pFVar35 = SVerticalBox::Slot((FSlotArguments *)local_e30);
    uVar15 = _UNK_1509253f8;
    uVar14 = ___xmm_40800000408000004080000040800000;
    local_1128 = 1;
    local_1138 = ___xmm_40800000408000004080000040800000;
    uStack_1130 = _UNK_1509253f8;
    local_1110 = 0;
    local_1120 = (undefined1  [8])0x0;
    FStack_1118.Data = (FScriptContainerElement *)0x0;
    pFVar35->field_0x28 = 1;
    *(undefined8 *)&pFVar35->field_0x18 = uVar14;
    *(undefined8 *)&pFVar35->field_0x20 = uVar15;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar35->field_0x30,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1120);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1120,
               (FWriteAccessScope *)&local_fe8);
    if (((int)local_1110 != 0) && (FStack_1118.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_1118.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1118,0,0,0x10);
      local_1110 = local_1110 & 0xffffffff00000000;
    }
    if (local_fe8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_fe8.Accessor,&local_fe8);
    }
    if (FStack_1118.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1118.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1120);
    pFVar35 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar35);
    FVar16.ReferenceController = FStack_11b0.ReferenceController;
    if (FStack_11b0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_11b0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_11b0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      if (FStack_11b0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FStack_11b0.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FStack_11b0.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    local_1108 = local_11b8;
    FStack_1100.ReferenceController = FStack_11b0.ReferenceController;
    if (FStack_11b0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_11b0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_11b0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((SHorizontalBox **)&pFVar35->field_0x8 != &local_1108) {
      *(SHorizontalBox **)&pFVar35->field_0x8 = local_11b8;
      local_1108 = (SHorizontalBox *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar35->field_0x10,&FStack_1100);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_1100.ReferenceController);
    pFVar34 = SVerticalBox::FArguments::operator+(pFVar34,pFVar35);
    pFVar35 = SVerticalBox::Slot(&local_938);
    local_1008.Value = 1.0;
    local_1008.bIsSet = true;
    local_1008.Getter._16_8_ = 0;
    local_1008.Getter._0_8_ = 0;
    local_1008.Getter._8_8_ = 0;
    pFVar35 = SVerticalBox::FSlot::FSlotArguments::FillHeight(pFVar35,&local_1008);
    if (pTVar39 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar39->SharedReferenceCount = (atomic<int>)((int)pTVar39->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1148 = pSVar9;
    local_1140.ReferenceController = pTVar39;
    if ((SBorder **)&pFVar35->field_0x8 != &local_1148) {
      *(SBorder **)&pFVar35->field_0x8 = pSVar9;
      local_1148 = (SBorder *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar35->field_0x10,&local_1140);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1140.ReferenceController);
    pFVar34 = SVerticalBox::FArguments::operator+(pFVar34,pFVar35);
    FLLMScope::FLLMScope(local_1188,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_1080 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_1068,&local_1080,true);
    TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
              (&local_ef8,"SVerticalBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SPropertyViewerImpl.cpp"
               ,0x25c,local_res20);
    FMemScope::~FMemScope(&local_1068);
    FLLMScope::~FLLMScope(local_1188);
    pTVar36 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_ef8,&local_f38,pFVar34);
    pTVar23 = local_res10;
    local_res10->Object = (SWidget *)pTVar36->Object;
    pTVar10 = (pTVar36->SharedReferenceCount).ReferenceController;
    (local_res10->SharedReferenceCount).ReferenceController = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f38.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_ef8._Widget.SharedReferenceCount.ReferenceController);
    SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_938);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar16.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar16.ReferenceController);
    TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
              (&local_dd8);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e00);
    if ((void *)local_e00._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_e00._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_e00);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e20);
    if (local_e30[0] != (undefined8 *)0x0) {
      (**(code **)*local_e30[0])(local_e30[0],1);
    }
    DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
              ((FSlotArguments *)local_b40._Slots.AllocatorInstance.Data,local_b40._Slots.ArrayNum);
    if ((FSlotArguments *)local_b40._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
      FMemory::Free(local_b40._Slots.AllocatorInstance.Data);
    }
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_b40);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar39);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar16.ReferenceController);
  }
  return pTVar23;
}

// CreateSearch @ 14d85ab30

TSharedRef<SWidget,1> * __thiscall
UE::PropertyViewer::Private::FPropertyViewerImpl::CreateSearch
          (FPropertyViewerImpl *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  FPropertyViewerImpl *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  SSearchBox *pSVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  char cVar9;
  byte bVar10;
  FArguments *pFVar11;
  FText *pFVar12;
  undefined8 *puVar13;
  TSharedRef<UE::PropertyViewer::Private::FPropertyViewerImpl,1> *pTVar14;
  ulong64 uVar15;
  TSharedRef<SWidget,1> *pTVar16;
  TReferenceControllerBase<1> *pTVar17;
  undefined4 local_res8 [2];
  TReferenceControllerBase<1> *local_res10;
  FLLMScope local_res18 [2];
  FName local_res20;
  TSlateDecl<SSearchBox,RequiredArgs::T0RequiredArgs> local_4b8;
  FText local_4a0;
  bool local_490;
  undefined1 local_488 [8];
  ForAnyElementType FStack_480;
  ulonglong local_478;
  FMemScope local_470;
  FDestructionSentinel local_468;
  FDestructionSentinel local_450;
  undefined1 *local_438;
  TSharedRef<UE::PropertyViewer::Private::FPropertyViewerImpl,1> local_430;
  SSearchBox *local_420;
  TReferenceControllerBase<1> *pTStack_418;
  FText local_410;
  FArguments local_400;
  
  bVar5 = false;
  bVar4 = false;
  bVar8 = false;
  local_res8[0] = 0;
  local_res10 = (TReferenceControllerBase<1> *)__return_storage_ptr__;
  pFVar11 = SSearchBox::FArguments::FArguments(&local_400);
  pFVar12 = FText::AsLocalizable_Advanced_LocText
                      (&local_410,L"SPropertyViewerImpl",L"SearchHintText",L"Search");
  FText::FText(&local_4a0,pFVar12);
  local_490 = true;
  local_478 = 0;
  local_488 = (undefined1  [8])0x0;
  FStack_480.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar11->_HintText).Value,&local_4a0);
  (pFVar11->_HintText).bIsSet = local_490;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar11->_HintText).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_488);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_488,
             (FWriteAccessScope *)&local_468);
  if (((int)local_478 != 0) && (FStack_480.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_480.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_480,0,0,0x10);
    local_478 = local_478 & 0xffffffff00000000;
  }
  if (local_468.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_468.Accessor,&local_468);
  }
  if (FStack_480.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_480.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_488);
  if (local_4a0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_4a0.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar11->_OnTextChanged,
             (FWriteAccessScope *)&local_450);
  local_438 = &(pFVar11->_OnTextChanged).field_0x8;
  puVar13 = Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_438);
  pTVar17 = local_res10;
  if (puVar13 != (undefined8 *)0x0) {
    pTVar14 = TSharedFromThis<UE::PropertyViewer::Private::FPropertyViewerImpl,1>::AsShared
                        ((TSharedFromThis<UE::PropertyViewer::Private::FPropertyViewerImpl,1> *)this
                         ,&local_430);
    pTVar17 = (pTVar14->SharedReferenceCount).ReferenceController;
    pFVar2 = pTVar14->Object;
    if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar13 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar15 = FDelegateHandle::GenerateNewID();
    puVar13[2] = uVar15;
    *puVar13 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VFPropertyViewerImpl_Private_PropertyViewer_UE___00__A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar13[3] = pFVar2;
    puVar13[4] = pTVar17;
    if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar17->WeakReferenceCount = (atomic<int>)((int)pTVar17->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar5 = true;
    bVar4 = true;
    bVar8 = true;
    puVar13[5] = HandleSearchChanged;
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_430.SharedReferenceCount.ReferenceController);
  }
  if (local_450.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_450.Accessor,&local_450);
  }
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_470,&local_res20,true);
  TSlateDecl<SSearchBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSearchBox,RequiredArgs::T0RequiredArgs>
            (&local_4b8,"SSearchBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SPropertyViewerImpl.cpp"
             ,0x307,(T0RequiredArgs *)local_res8);
  FMemScope::~FMemScope(&local_470);
  FLLMScope::~FLLMScope(local_res18);
  if (local_4b8._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_4b8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_4b8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_420 = (this->SearchBoxWidget).Object;
  pTStack_418 = (this->SearchBoxWidget).SharedReferenceCount.ReferenceController;
  (this->SearchBoxWidget).Object = local_4b8._Widget.Object;
  (this->SearchBoxWidget).SharedReferenceCount.ReferenceController =
       local_4b8._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_418);
  pSVar6 = local_4b8._Widget.Object;
  if ((local_4b8._Widget.Object == (SSearchBox *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    pTVar16 = (TSharedRef<SWidget,1> *)(*pcVar3)();
    return pTVar16;
  }
  SWidget::SWidgetConstruct((SWidget *)local_4b8._Widget.Object,(FSlateBaseNamedArgs *)pFVar11);
  SSearchBox::Construct(local_4b8._Widget.Object,pFVar11);
  if ((local_4b8._Widget.Object == (SSearchBox *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    pTVar16 = (TSharedRef<SWidget,1> *)(*pcVar3)();
    return pTVar16;
  }
  if (((local_4b8._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar9 = (**(code **)((local_4b8._Widget.Object)->_padding_ + 0x228))(local_4b8._Widget.Object);
    bVar10 = 0;
    if (cVar9 == '\0') goto LAB_14d85aeb0;
  }
  bVar10 = 0x20;
LAB_14d85aeb0:
  *(byte *)&(local_4b8._Widget.Object)->_padding_ =
       (byte)(local_4b8._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_4b8._Widget.Object)->_padding_ =
       (byte)(local_4b8._Widget.Object)->_padding_ | bVar10;
  if ((local_4b8._Widget.Object == (SSearchBox *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    pTVar16 = (TSharedRef<SWidget,1> *)(*pcVar3)();
    return pTVar16;
  }
  pbVar1 = (byte *)((longlong)&(local_4b8._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_4b8._Widget.Object == (SSearchBox *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    pTVar16 = (TSharedRef<SWidget,1> *)(*pcVar3)();
    return pTVar16;
  }
  FVar7.ReferenceController = local_4b8._Widget.SharedReferenceCount.ReferenceController;
  local_4b8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_4b8._Widget.Object = (SSearchBox *)0x0;
  if ((pSVar6 == (SSearchBox *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    pTVar16 = (TSharedRef<SWidget,1> *)(*pcVar3)();
    return pTVar16;
  }
  pTVar17 = local_res10;
  local_res10->_padding_ = (longlong)pSVar6;
  ((FSharedReferencer<1> *)&local_res10->SharedReferenceCount)->ReferenceController =
       FVar7.ReferenceController;
  if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar7.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (local_410.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_410.TextData.Reference + 0x10))();
  }
  SSearchBox::FArguments::~FArguments(&local_400);
  return (TSharedRef<SWidget,1> *)pTVar17;
}

// CreateTree @ 14d85afd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UE::PropertyViewer::Private::FPropertyViewerImpl::CreateTree
          (FPropertyViewerImpl *this,TSharedRef<SWidget,1> *__return_storage_ptr__,bool param_1,
          bool param_2,bool param_3,Type param_4)

{
  byte *pbVar1;
  TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pTVar2;
  FPropertyViewerImpl *pFVar3;
  STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pSVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  FSharedReferencer<1> FVar8;
  bool bVar9;
  char cVar10;
  byte bVar11;
  bool bVar12;
  bool bVar13;
  FArguments *pFVar14;
  FArguments *pFVar15;
  FText *pFVar16;
  float *pfVar17;
  FArguments *pFVar18;
  TSharedRef<SWidget,1> *pTVar19;
  undefined8 *puVar20;
  ulong64 uVar21;
  TSharedRef<UE::PropertyViewer::Private::FPropertyViewerImpl,1> *pTVar22;
  TReferenceControllerBase<1> *pTVar23;
  TReferenceControllerBase<1> *pTVar24;
  SHeaderRow *pSVar25;
  T0RequiredArgs local_res8 [8];
  TReferenceControllerBase<1> *local_res10;
  undefined4 local_res20 [2];
  T0RequiredArgs local_1c98 [8];
  SHeaderRow *local_1c90;
  FSharedReferencer<1> FStack_1c88;
  FLLMScope local_1c80;
  FLLMScope local_1c7c;
  FLLMScope local_1c78 [2];
  TOptional<float> local_1c70;
  TSlateDecl<SHeaderRow,RequiredArgs::T0RequiredArgs> local_1c68;
  uchar local_1c50;
  undefined1 local_1c4f;
  undefined1 local_1c48 [8];
  void *pvStack_1c40;
  undefined8 local_1c38;
  float local_1c30;
  undefined1 local_1c2c;
  undefined1 local_1c28 [8];
  void *pvStack_1c20;
  undefined8 local_1c18;
  Type local_1c10;
  undefined1 local_1c0c;
  undefined1 local_1c08 [8];
  void *pvStack_1c00;
  undefined8 local_1bf8;
  Type local_1bf0;
  undefined1 local_1bec;
  undefined1 local_1be8 [8];
  void *pvStack_1be0;
  undefined8 local_1bd8;
  FName local_1bd0;
  FMemScope local_1bc8;
  FArguments *local_1bc0;
  FName local_1bb8;
  FMemScope local_1bb0;
  FName local_1ba8;
  FMemScope local_1ba0;
  undefined8 local_1b98;
  FSharedReferencer<1> local_1b90;
  TAttribute<float> local_1b88;
  TSlateDecl<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T0RequiredArgs>
  local_1b68;
  TSlateDecl<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T0RequiredArgs>
  local_1b50;
  FDestructionSentinel local_1b38;
  undefined1 *local_1b20;
  FDestructionSentinel local_1b18;
  undefined1 *local_1b00;
  TAttribute<FText> local_1af8;
  TAttribute<FText> local_1ac8;
  TAttribute<FText> local_1a98;
  SHeaderRow *local_1a68;
  TReferenceControllerBase<1> *pTStack_1a60;
  STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *local_1a58;
  TReferenceControllerBase<1> *pTStack_1a50;
  TSharedRef<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1> local_1a48;
  TSharedRef<UE::PropertyViewer::Private::FPropertyViewerImpl,1> local_1a38;
  FText local_1a28;
  STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *local_1a18;
  TReferenceControllerBase<1> *pTStack_1a10;
  TSharedRef<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1> local_1a08;
  FText local_19f8;
  FText local_19e8;
  SHeaderRow *local_19d8;
  TReferenceControllerBase<1> *pTStack_19d0;
  undefined1 local_19c8 [528];
  undefined1 local_17b8 [24];
  undefined1 local_17a0 [40];
  ForAnyElementType local_1778;
  undefined1 local_1768 [24];
  FArguments local_1750;
  FArguments local_12d8;
  FArguments local_e60;
  FArguments local_9e8;
  FArguments local_510;
  
  bVar7 = false;
  bVar6 = false;
  bVar12 = false;
  bVar13 = false;
  local_res20[0] = 0;
  local_1c90 = (SHeaderRow *)0x0;
  FStack_1c88.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_res10 = (TReferenceControllerBase<1> *)__return_storage_ptr__;
  if ((!param_2) && (!param_3)) {
    pSVar25 = (SHeaderRow *)0x0;
    goto LAB_14d85b6a6;
  }
  this->bUseRows = true;
  pFVar14 = SHeaderRow::FArguments::FArguments((FArguments *)local_19c8);
  local_1c50 = (uchar)EVisibility::Collapsed.Value.Value;
  local_1c4f = 1;
  local_1c38 = 0;
  local_1c48 = (undefined1  [8])0x0;
  pvStack_1c40 = (void *)0x0;
  *(TEnumAsByte<EVisibility::Private> *)&pFVar14->_padding_ = EVisibility::Collapsed.Value.Value;
  *(undefined1 *)((longlong)&pFVar14->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar14->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1c48);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1c48);
  if (pvStack_1c40 != (void *)0x0) {
    FMemory::Free(pvStack_1c40);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1c48);
  FLLMScope::FLLMScope(&local_1c80,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1bd0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1bc8,&local_1bd0,true);
  TSlateDecl<SHeaderRow,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHeaderRow,RequiredArgs::T0RequiredArgs>
            (&local_1c68,"SHeaderRow",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SPropertyViewerImpl.cpp"
             ,0x37b,(T0RequiredArgs *)local_res20);
  FMemScope::~FMemScope(&local_1bc8);
  FLLMScope::~FLLMScope(&local_1c80);
  pSVar25 = local_1c68._Widget.Object;
  if ((local_1c68._Widget.Object == (SHeaderRow *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar19 = (TSharedRef<SWidget,1> *)(*pcVar5)();
    return pTVar19;
  }
  SWidget::SWidgetConstruct((SWidget *)local_1c68._Widget.Object,(FSlateBaseNamedArgs *)pFVar14);
  SHeaderRow::Construct(local_1c68._Widget.Object,pFVar14);
  if ((local_1c68._Widget.Object == (SHeaderRow *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar19 = (TSharedRef<SWidget,1> *)(*pcVar5)();
    return pTVar19;
  }
  if (((local_1c68._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar10 = (**(code **)((local_1c68._Widget.Object)->_padding_ + 0x228))
                       (local_1c68._Widget.Object);
    bVar11 = 0;
    if (cVar10 != '\0') goto LAB_14d85b1cd;
  }
  else {
LAB_14d85b1cd:
    bVar11 = 0x20;
  }
  *(byte *)&(local_1c68._Widget.Object)->_padding_ =
       (byte)(local_1c68._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_1c68._Widget.Object)->_padding_ =
       (byte)(local_1c68._Widget.Object)->_padding_ | bVar11;
  if ((local_1c68._Widget.Object == (SHeaderRow *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar19 = (TSharedRef<SWidget,1> *)(*pcVar5)();
    return pTVar19;
  }
  pbVar1 = (byte *)((longlong)&(local_1c68._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_1c68._Widget.Object == (SHeaderRow *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar19 = (TSharedRef<SWidget,1> *)(*pcVar5)();
    return pTVar19;
  }
  FVar8.ReferenceController = local_1c68._Widget.SharedReferenceCount.ReferenceController;
  local_1c68._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1c68._Widget.Object = (SHeaderRow *)0x0;
  if ((pSVar25 == (SHeaderRow *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar19 = (TSharedRef<SWidget,1> *)(*pcVar5)();
    return pTVar19;
  }
  local_1b90.ReferenceController = FVar8.ReferenceController;
  if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1c90 = pSVar25;
  local_1b98 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_1c88,&local_1b90);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b90.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1768);
  if ((void *)local_1768._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1768._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1768);
  if (local_1778.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1778.Data);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_17a0);
  if ((void *)local_17a0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_17a0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_17a0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_17b8);
  if ((void *)local_17b8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_17b8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_17b8);
  if ((FScriptContainerElement *)local_19c8._512_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_19c8._512_8_);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_19c8);
  pSVar25 = local_1c90;
  if ((local_1c90 == (SHeaderRow *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar19 = (TSharedRef<SWidget,1> *)(*pcVar5)();
    return pTVar19;
  }
  pFVar15 = SHeaderRow::FColumn::FArguments::FArguments(&local_1750);
  pFVar15->_ColumnId = ColumnName_Field;
  pFVar16 = FText::AsLocalizable_Advanced_LocText
                      (&local_19f8,L"SPropertyViewerImpl",L"FieldName",L"Field Name");
  FText::FText(&local_1af8.Value,pFVar16);
  local_1af8.bIsSet = true;
  local_1af8.Getter._16_8_ = 0;
  local_1af8.Getter._0_8_ = 0;
  local_1af8.Getter._8_8_ = 0;
  pFVar15 = SHeaderRow::FColumn::FArguments::DefaultLabel(pFVar15,&local_1af8);
  local_1c2c = 1;
  local_1c30 = __real_3f400000;
  local_1c18 = 0;
  local_1c28 = (undefined1  [8])0x0;
  pvStack_1c20 = (void *)0x0;
  (pFVar15->_FillWidth).Value = __real_3f400000;
  (pFVar15->_FillWidth).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar15->_FillWidth).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1c28);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1c28);
  if (pvStack_1c20 != (void *)0x0) {
    FMemory::Free(pvStack_1c20);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1c28);
  SHeaderRow::AddColumn(pSVar25,pFVar15);
  if (local_19f8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_19f8.TextData.Reference + 0x10))();
  }
  SHeaderRow::FColumn::FArguments::~FArguments(&local_1750);
  if (param_2) {
    if ((pSVar25 == (SHeaderRow *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar19 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar19;
    }
    pFVar15 = SHeaderRow::FColumn::FArguments::FArguments(&local_12d8);
    pFVar15->_ColumnId = ColumnName_PropertyValue;
    local_1c70.TypedValue = 100.0;
    local_1c70.bIsSet = true;
    if (&local_1c70 != &pFVar15->_FillSized) {
      pfVar17 = TOptional<float>::GetValue(&local_1c70);
      (pFVar15->_FillSized).TypedValue = *pfVar17;
      (pFVar15->_FillSized).bIsSet = true;
    }
    pFVar16 = FText::AsLocalizable_Advanced_LocText
                        (&local_19e8,L"SPropertyViewerImpl",L"PropertyValue",L"Field Value");
    FText::FText(&local_1ac8.Value,pFVar16);
    local_1ac8.bIsSet = true;
    local_1ac8.Getter._16_8_ = 0;
    local_1ac8.Getter._0_8_ = 0;
    local_1ac8.Getter._8_8_ = 0;
    pFVar15 = SHeaderRow::FColumn::FArguments::DefaultLabel(pFVar15,&local_1ac8);
    local_1b88.Value = 0.25;
    local_1b88.bIsSet = true;
    local_1b88.Getter._16_8_ = 0;
    local_1b88.Getter._0_8_ = 0;
    local_1b88.Getter._8_8_ = 0;
    pFVar15 = SHeaderRow::FColumn::FArguments::FillWidth(pFVar15,&local_1b88);
    SHeaderRow::AddColumn(pSVar25,pFVar15);
    if (local_19e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_19e8.TextData.Reference + 0x10))();
    }
    SHeaderRow::FColumn::FArguments::~FArguments(&local_12d8);
  }
  if (param_3) {
    if ((pSVar25 == (SHeaderRow *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar19 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar19;
    }
    pFVar15 = SHeaderRow::FColumn::FArguments::FArguments(&local_e60);
    pFVar15->_ColumnId = ColumnName_FieldPostWidget;
    pFVar16 = FText::FText(&local_1a28);
    FText::FText(&local_1a98.Value,pFVar16);
    local_1a98.bIsSet = true;
    local_1a98.Getter._16_8_ = 0;
    local_1a98.Getter._0_8_ = 0;
    local_1a98.Getter._8_8_ = 0;
    pFVar15 = SHeaderRow::FColumn::FArguments::DefaultLabel(pFVar15,&local_1a98);
    SHeaderRow::AddColumn(pSVar25,pFVar15);
    if (local_1a28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1a28.TextData.Reference + 0x10))();
    }
    SHeaderRow::FColumn::FArguments::~FArguments(&local_e60);
  }
LAB_14d85b6a6:
  if ((this->FilterHandler).Object ==
      (TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) {
    pFVar18 = STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::FArguments::
              FArguments(&local_510);
    pFVar18 = STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::FArguments::
              TreeItemsSource(pFVar18,&this->TreeSource);
    local_1bf0 = param_4;
    local_1bec = 1;
    local_1bd8 = 0;
    local_1be8 = (undefined1  [8])0x0;
    pvStack_1be0 = (void *)0x0;
    (pFVar18->_SelectionMode).Value = param_4;
    (pFVar18->_SelectionMode).bIsSet = true;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar18->_SelectionMode).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1be8);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1be8);
    if (pvStack_1be0 != (void *)0x0) {
      FMemory::Free(pvStack_1be0);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1be8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar18->_OnGetChildren,
               (FWriteAccessScope *)&local_1b18);
    local_1b00 = &(pFVar18->_OnGetChildren).field_0x8;
    puVar20 = Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_1b00);
    pTVar24 = local_res10;
    if (puVar20 != (undefined8 *)0x0) {
      pTVar22 = TSharedFromThis<UE::PropertyViewer::Private::FPropertyViewerImpl,1>::AsShared
                          ((TSharedFromThis<UE::PropertyViewer::Private::FPropertyViewerImpl,1> *)
                           this,&local_1a38);
      pTVar24 = (pTVar22->SharedReferenceCount).ReferenceController;
      pFVar3 = pTVar22->Object;
      if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
        UNLOCK();
      }
      *puVar20 = &
                 ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__AEAV__TArray_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar21 = FDelegateHandle::GenerateNewID();
      puVar20[2] = uVar21;
      *puVar20 = &
                 ___7__TBaseSPMethodDelegateInstance__0A_VFPropertyViewerImpl_Private_PropertyViewer_UE___00__A6AXV__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__AEAV__TArray_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar20[3] = pFVar3;
      puVar20[4] = pTVar24;
      if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar24->WeakReferenceCount = (atomic<int>)((int)pTVar24->WeakReferenceCount + 1);
        UNLOCK();
      }
      bVar7 = true;
      bVar6 = true;
      bVar12 = true;
      puVar20[5] = HandleGetChildren;
    }
    if (bVar12) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
    }
    if (bVar6) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
    }
    if (bVar7) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1a38.SharedReferenceCount.ReferenceController);
    }
    if (local_1b18.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b18.Accessor,&local_1b18);
    }
    pFVar18 = STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::FArguments::
              OnGenerateRow<UE::PropertyViewer::Private::FPropertyViewerImpl>
                        (pFVar18,this,(pmf_43452e41)0x14d86e500);
    pFVar18 = STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::FArguments::
              OnSelectionChanged<UE::PropertyViewer::Private::FPropertyViewerImpl>
                        (pFVar18,this,(pmf_6902b847)0x14d870290);
    pFVar18 = STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::FArguments::
              OnContextMenuOpening<UE::PropertyViewer::Private::FPropertyViewerImpl>
                        (pFVar18,this,(pmf_a7d7b150)0x14d86dc70);
    pFVar18 = STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::FArguments::
              OnMouseButtonDoubleClick<UE::PropertyViewer::Private::FPropertyViewerImpl>
                        (pFVar18,this,(pmf_b066fb78)0x14d86e080);
    FVar8.ReferenceController = FStack_1c88.ReferenceController;
    if (FStack_1c88.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_1c88.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_1c88.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      (FStack_1c88.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_1c88.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_19d8 = (pFVar18->_HeaderRow).Object;
    pTStack_19d0 = (pFVar18->_HeaderRow).SharedReferenceCount.ReferenceController;
    (pFVar18->_HeaderRow).Object = pSVar25;
    (pFVar18->_HeaderRow).SharedReferenceCount.ReferenceController = FStack_1c88.ReferenceController
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (pTStack_19d0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar8.ReferenceController);
    FLLMScope::FLLMScope(local_1c78,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_1ba8 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_1ba0,&local_1ba8,true);
    TSlateDecl<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T0RequiredArgs>
    ::
    TSlateDecl<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T0RequiredArgs>
              (&local_1b68,"STreeView<TSharedPtr<FTreeNode>>",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SPropertyViewerImpl.cpp"
               ,0x3a8,local_1c98);
    FMemScope::~FMemScope(&local_1ba0);
    FLLMScope::~FLLMScope(local_1c78);
    if (local_1b68._Widget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1b68._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1b68._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1);
      UNLOCK();
    }
    local_1a18 = (this->TreeWidget).Object;
    pTStack_1a10 = (this->TreeWidget).SharedReferenceCount.ReferenceController;
    (this->TreeWidget).Object = local_1b68._Widget.Object;
    (this->TreeWidget).SharedReferenceCount.ReferenceController =
         local_1b68._Widget.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (pTStack_1a10);
    TSlateDecl<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T0RequiredArgs>
    ::operator<<=(&local_1b68,&local_1a08,pFVar18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1a08.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b68._Widget.SharedReferenceCount.ReferenceController);
    STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::FArguments::~FArguments
              (&local_510);
  }
  else {
    pFVar18 = STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::FArguments::
              FArguments(&local_9e8);
    pFVar18 = STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::FArguments::
              TreeItemsSource(pFVar18,&this->FilteredTreeSource);
    local_1c10 = param_4;
    local_1c0c = 1;
    local_1c08 = (undefined1  [8])0x0;
    pvStack_1c00 = (void *)0x0;
    local_1bf8 = 0;
    (pFVar18->_SelectionMode).Value = param_4;
    (pFVar18->_SelectionMode).bIsSet = true;
    local_1bc0 = pFVar18;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar18->_SelectionMode).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1c08);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1c08);
    if (pvStack_1c00 != (void *)0x0) {
      FMemory::Free(pvStack_1c00);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1c08);
    if (((this->FilterHandler).Object ==
         (TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      pTVar19 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar19;
    }
    pTVar24 = (this->FilterHandler).SharedReferenceCount.ReferenceController;
    pTVar2 = (this->FilterHandler).Object;
    if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pTVar2 == (TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0)
       && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x25d,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      pTVar19 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar19;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar18->_OnGetChildren,
               (FWriteAccessScope *)&local_1b38);
    local_1b20 = &(pFVar18->_OnGetChildren).field_0x8;
    puVar20 = Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_1b20);
    pTVar23 = local_res10;
    if (puVar20 != (undefined8 *)0x0) {
      if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
        UNLOCK();
      }
      *puVar20 = &
                 ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__AEAV__TArray_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar21 = FDelegateHandle::GenerateNewID();
      puVar20[2] = uVar21;
      *puVar20 = &
                 ___7__TBaseSPMethodDelegateInstance__0A_V__TreeFilterHandler_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00_____00__A6AXV__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__AEAV__TArray_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar20[3] = pTVar2;
      puVar20[4] = pTVar24;
      if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar24->WeakReferenceCount = (atomic<int>)((int)pTVar24->WeakReferenceCount + 1);
        UNLOCK();
      }
      bVar13 = true;
      puVar20[5] = TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::
                   OnGetFilteredChildren;
      pTVar23 = pTVar24;
    }
    if (bVar13) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
    }
    if (local_1b38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b38.Accessor,&local_1b38);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
    pFVar18 = STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::FArguments::
              OnGenerateRow<UE::PropertyViewer::Private::FPropertyViewerImpl>
                        (local_1bc0,this,(pmf_43452e41)0x14d86e500);
    pFVar18 = STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::FArguments::
              OnSelectionChanged<UE::PropertyViewer::Private::FPropertyViewerImpl>
                        (pFVar18,this,(pmf_6902b847)0x14d870290);
    pFVar18 = STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::FArguments::
              OnContextMenuOpening<UE::PropertyViewer::Private::FPropertyViewerImpl>
                        (pFVar18,this,(pmf_a7d7b150)0x14d86dc70);
    pFVar18 = STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::FArguments::
              OnMouseButtonDoubleClick<UE::PropertyViewer::Private::FPropertyViewerImpl>
                        (pFVar18,this,(pmf_b066fb78)0x14d86e080);
    FVar8.ReferenceController = FStack_1c88.ReferenceController;
    if (FStack_1c88.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_1c88.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_1c88.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      (FStack_1c88.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_1c88.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1a68 = (pFVar18->_HeaderRow).Object;
    pTStack_1a60 = (pFVar18->_HeaderRow).SharedReferenceCount.ReferenceController;
    (pFVar18->_HeaderRow).Object = pSVar25;
    (pFVar18->_HeaderRow).SharedReferenceCount.ReferenceController = FStack_1c88.ReferenceController
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (pTStack_1a60);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar8.ReferenceController);
    FLLMScope::FLLMScope(&local_1c7c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_1bb8 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_1bb0,&local_1bb8,true);
    TSlateDecl<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T0RequiredArgs>
    ::
    TSlateDecl<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T0RequiredArgs>
              (&local_1b50,"STreeView<TSharedPtr<FTreeNode>>",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SPropertyViewerImpl.cpp"
               ,0x39b,local_res8);
    FMemScope::~FMemScope(&local_1bb0);
    FLLMScope::~FLLMScope(&local_1c7c);
    if (local_1b50._Widget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1b50._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1b50._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1);
      UNLOCK();
    }
    local_1a58 = (this->TreeWidget).Object;
    pTStack_1a50 = (this->TreeWidget).SharedReferenceCount.ReferenceController;
    (this->TreeWidget).Object = local_1b50._Widget.Object;
    (this->TreeWidget).SharedReferenceCount.ReferenceController =
         local_1b50._Widget.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (pTStack_1a50);
    TSlateDecl<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T0RequiredArgs>
    ::operator<<=(&local_1b50,&local_1a48,pFVar18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1a48.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b50._Widget.SharedReferenceCount.ReferenceController);
    STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::FArguments::~FArguments
              (&local_9e8);
    if (((this->FilterHandler).Object ==
         (TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar5 = (code *)swi(3);
      pTVar19 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar19;
    }
    ((this->FilterHandler).Object)->TreeView = (this->TreeWidget).Object;
  }
  if (((this->TreeWidget).Object ==
       (STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar13)) {
    pcVar5 = (code *)swi(3);
    pTVar19 = (TSharedRef<SWidget,1> *)(*pcVar5)();
    return pTVar19;
  }
  pTVar24 = (this->TreeWidget).SharedReferenceCount.ReferenceController;
  pSVar4 = (this->TreeWidget).Object;
  if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar4 == (STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar13)) {
    pcVar5 = (code *)swi(3);
    pTVar19 = (TSharedRef<SWidget,1> *)(*pcVar5)();
    return pTVar19;
  }
  pTVar23 = local_res10;
  local_res10->_padding_ = (longlong)pSVar4;
  ((FSharedReferencer<1> *)&local_res10->SharedReferenceCount)->ReferenceController = pTVar24;
  if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1c88.ReferenceController);
  return (TSharedRef<SWidget,1> *)pTVar23;
}

// FindExistingChild @ 14d861940

TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> * __thiscall
UE::PropertyViewer::Private::FPropertyViewerImpl::FindExistingChild
          (FPropertyViewerImpl *this,
          TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *__return_storage_ptr__,
          TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *param_1,
          TArrayView<FFieldVariant_const_,int> *param_2)

{
  uint uVar1;
  int iVar2;
  FTreeNode *pFVar3;
  FFieldObjectUnion *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *pTVar8;
  ulonglong uVar9;
  FFieldVariant FVar10;
  int iVar11;
  ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> FVar12;
  int iVar13;
  ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> FVar14;
  undefined1 local_res20 [8];
  undefined4 uStack_4c;
  TArrayView<FFieldVariant_const_,int> local_48;
  
  if (param_2->ArrayNum == 0) {
    __return_storage_ptr__->Object = (FTreeNode *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  if ((param_1->Object == (FTreeNode *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *)(*pcVar6)();
    return pTVar8;
  }
  pFVar3 = param_1->Object;
  FVar12 = (pFVar3->ChildNodes).AllocatorInstance.SecondaryData;
  uVar1 = (pFVar3->ChildNodes).ArrayNum;
  uVar9 = (ulonglong)(int)uVar1;
  if (FVar12 == (ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>)0x0) {
    FVar12 = (ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>)
             &pFVar3->ChildNodes;
  }
  FVar14 = (ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>)
           ((longlong)FVar12 + uVar9 * 0x10);
  while( true ) {
    if ((pFVar3->ChildNodes).ArrayNum != (int)uVar9) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (FVar12 == FVar14) {
      __return_storage_ptr__->Object = (FTreeNode *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      return __return_storage_ptr__;
    }
    if ((*(longlong *)FVar12 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pTVar8 = (TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *)(*pcVar6)();
      return pTVar8;
    }
    FVar10 = Private::FTreeNode::GetField(*(FTreeNode **)FVar12);
    iVar2 = param_2->ArrayNum;
    if ((iVar2 < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar7)) break;
    pFVar4 = &param_2->DataPtr->Container;
                    /* WARNING: Load size is inaccurate */
    if (*FVar10.Container == pFVar4->Field) {
      if (iVar2 == 1) {
        __return_storage_ptr__->Object = *(FTreeNode **)FVar12;
        pTVar5 = ((FSharedReferencer<1> *)((longlong)FVar12 + 8))->ReferenceController;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
        if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
          UNLOCK();
        }
      }
      else {
        iVar11 = iVar2;
        if (iVar2 + -1 < iVar2) {
          iVar11 = iVar2 + -1;
        }
        iVar13 = 0;
        if (0 < iVar11) {
          iVar13 = iVar11;
        }
        if ((iVar13 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar8 = (TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *)(*pcVar6)();
          return pTVar8;
        }
        local_48._12_4_ = uStack_4c;
        local_48.ArrayNum = iVar13;
        local_48.DataPtr = (FFieldVariant *)(pFVar4 + ((longlong)iVar2 - (longlong)iVar13));
        FindExistingChild(this,__return_storage_ptr__,
                          (TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *)FVar12,&local_48);
      }
      return __return_storage_ptr__;
    }
    uVar9 = (ulonglong)uVar1;
    FVar12 = (ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>)
             ((longlong)FVar12 + 0x10);
  }
  pcVar6 = (code *)swi(3);
  pTVar8 = (TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *)(*pcVar6)();
  return pTVar8;
}

// GetSelectedItems @ 14d86c200

TArray<UE::PropertyViewer::SPropertyViewer::FSelectedItem,TSizedDefaultAllocator<32>_> * __thiscall
UE::PropertyViewer::Private::FPropertyViewerImpl::GetSelectedItems
          (FPropertyViewerImpl *this,
          TArray<UE::PropertyViewer::SPropertyViewer::FSelectedItem,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  atomic<int> aVar4;
  TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *pTVar5;
  bool bVar6;
  atomic<int> aVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  TArray<UE::PropertyViewer::SPropertyViewer::FSelectedItem,TSizedDefaultAllocator<32>_> *pTVar11;
  ulonglong uVar12;
  TArray<FFieldVariant,TSizedDefaultAllocator<32>_> *pTVar13;
  undefined1 *puVar14;
  undefined8 *puVar15;
  TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *pTVar16;
  FContainer *pFVar17;
  int *piVar18;
  FContainer *pFVar19;
  FTreeNode *this_00;
  FContainer *pFVar20;
  FContainer *pFVar21;
  FTreeNode *pFVar22;
  FScriptContainerElement *pFVar23;
  undefined1 local_res8 [8];
  TArray<UE::PropertyViewer::SPropertyViewer::FSelectedItem,TSizedDefaultAllocator<32>_>
  *local_res10;
  undefined1 local_res18 [8];
  uint local_res20;
  int local_c8 [2];
  FContainer *local_c0;
  undefined8 local_b8;
  FScriptContainerElement local_b0;
  undefined4 local_a8 [2];
  TArray<FFieldVariant,TSizedDefaultAllocator<32>_> *local_a0;
  undefined8 local_98;
  FScriptContainerElement local_90;
  TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *local_88;
  uint local_80;
  FTreeNode *local_78;
  TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *local_70;
  TReferenceControllerBase<1> *local_68;
  TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *local_60;
  TArray<FFieldVariant,TSizedDefaultAllocator<32>_> local_58;
  
  piVar18 = &__return_storage_ptr__->ArrayMax;
  pFVar21 = (FContainer *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar18 = 0;
  local_res10 = __return_storage_ptr__;
  if (((this->TreeWidget).Object ==
       (STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar11 = (TArray<UE::PropertyViewer::SPropertyViewer::FSelectedItem,TSizedDefaultAllocator<32>_>
               *)(*pcVar3)();
    return pTVar11;
  }
  puVar14 = &((this->TreeWidget).Object)->field_0x588;
  (**(code **)(*(longlong *)puVar14 + 0xd0))(puVar14,&local_88);
  uVar12 = (ulonglong)(int)local_80;
  local_60 = local_88 + uVar12;
  local_res20 = local_80;
  pTVar16 = local_88;
LAB_14d86c2a5:
  pTVar5 = local_60;
  local_70 = pTVar16;
  if (local_80 != (uint)uVar12) {
    local_res8[0] = 0;
    `TCheckedPointerIterator<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,int,0>::
    operator!='::__l2::<lambda_1>::operator()(local_res8);
  }
  if (pTVar16 == pTVar5) {
    DestructItems<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,int>(local_88,local_80);
    if (local_88 != (TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *)0x0) {
      FMemory::Free(local_88);
    }
    return __return_storage_ptr__;
  }
  local_68 = (pTVar16->SharedReferenceCount).ReferenceController;
  this_00 = pTVar16->Object;
  if (local_68 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_68->SharedReferenceCount = (atomic<int>)((int)local_68->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78 = this_00;
  if ((this_00 == (FTreeNode *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar11 = (TArray<UE::PropertyViewer::SPropertyViewer::FSelectedItem,TSizedDefaultAllocator<32>_>
               *)(*pcVar3)();
    return pTVar11;
  }
  pFVar19 = (FContainer *)(this_00->Container).WeakReferenceCount.ReferenceController;
  pFVar20 = pFVar19;
  if (pFVar19 == (FContainer *)0x0) {
LAB_14d86c332:
    if ((this_00 == (FTreeNode *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pTVar11 = (TArray<UE::PropertyViewer::SPropertyViewer::FSelectedItem,TSizedDefaultAllocator<32>_>
                 *)(*pcVar3)();
      return pTVar11;
    }
    pFVar19 = pFVar21;
    pFVar22 = this_00;
    if (this_00 != (FTreeNode *)0x0) {
      do {
        pFVar19 = (FContainer *)(pFVar22->Container).WeakReferenceCount.ReferenceController;
        pFVar17 = pFVar19;
        if (pFVar19 != (FContainer *)0x0) {
          aVar4 = *(atomic<int> *)&(pFVar19->Container).WeakPtr.ObjectSerialNumber;
          do {
            pFVar17 = pFVar21;
            if (aVar4 == (atomic<int>)0x0) goto LAB_14d86c595;
            paVar1 = (atomic<int> *)&(pFVar19->Container).WeakPtr.ObjectSerialNumber;
            LOCK();
            aVar7 = *paVar1;
            bVar6 = aVar4 == aVar7;
            if (bVar6) {
              *paVar1 = (atomic<int>)((int)aVar4 + 1);
              aVar7 = aVar4;
            }
            UNLOCK();
            aVar4 = aVar7;
          } while (!bVar6);
          pFVar21 = (pFVar22->Container).Object;
          pFVar17 = pFVar19;
          if (pFVar21 != (FContainer *)0x0) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            __return_storage_ptr__ = local_res10;
            LOCK();
            paVar1 = (atomic<int> *)&(pFVar19->Container).WeakPtr.ObjectSerialNumber;
            *paVar1 = (atomic<int>)((int)*paVar1 + 1);
            UNLOCK();
            pFVar2 = (local_res10->AllocatorInstance).Data;
            if (pFVar2 == pFVar2 + (longlong)local_res10->ArrayNum * 0x20) goto LAB_14d86c666;
            pFVar23 = pFVar2;
            goto LAB_14d86c655;
          }
        }
LAB_14d86c595:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar17);
        pFVar19 = (FContainer *)(pFVar22->ParentNode).WeakReferenceCount.ReferenceController;
        pFVar17 = pFVar19;
        if (pFVar19 == (FContainer *)0x0) goto LAB_14d86c5c5;
        aVar4 = *(atomic<int> *)&(pFVar19->Container).WeakPtr.ObjectSerialNumber;
        do {
          pFVar17 = pFVar21;
          if (aVar4 == (atomic<int>)0x0) goto LAB_14d86c5c5;
          paVar1 = (atomic<int> *)&(pFVar19->Container).WeakPtr.ObjectSerialNumber;
          LOCK();
          aVar7 = *paVar1;
          bVar6 = aVar4 == aVar7;
          if (bVar6) {
            *paVar1 = (atomic<int>)((int)aVar4 + 1);
            aVar7 = aVar4;
          }
          UNLOCK();
          aVar4 = aVar7;
        } while (!bVar6);
        pFVar22 = (pFVar22->ParentNode).Object;
        pFVar17 = pFVar19;
        if (pFVar22 == (FTreeNode *)0x0) goto LAB_14d86c5c5;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar19);
      } while( true );
    }
    goto LAB_14d86c5da;
  }
  aVar4 = *(atomic<int> *)&(pFVar19->Container).WeakPtr.ObjectSerialNumber;
  do {
    pFVar20 = pFVar21;
    if (aVar4 == (atomic<int>)0x0) goto LAB_14d86c332;
    paVar1 = (atomic<int> *)&(pFVar19->Container).WeakPtr.ObjectSerialNumber;
    LOCK();
    aVar7 = *paVar1;
    bVar6 = aVar4 == aVar7;
    if (bVar6) {
      *paVar1 = (atomic<int>)((int)aVar4 + 1);
      aVar7 = aVar4;
    }
    UNLOCK();
    aVar4 = aVar7;
  } while (!bVar6);
  pFVar17 = (this_00->Container).Object;
  pFVar20 = pFVar19;
  if (pFVar17 == (FContainer *)0x0) goto LAB_14d86c332;
  LOCK();
  paVar1 = (atomic<int> *)&(pFVar19->Container).WeakPtr.ObjectSerialNumber;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
  if (pFVar2 != pFVar2 + (longlong)__return_storage_ptr__->ArrayNum * 0x20) {
    pFVar23 = pFVar2;
    do {
      if (*(int *)pFVar23 == (pFVar17->Identifier).Id) {
        uVar9 = (uint)((longlong)pFVar23 - (longlong)pFVar2 >> 5);
        goto LAB_14d86c3a7;
      }
      pFVar23 = pFVar23 + 0x20;
    } while (pFVar23 != pFVar2 + (longlong)__return_storage_ptr__->ArrayNum * 0x20);
  }
  uVar9 = 0xffffffff;
LAB_14d86c3a7:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar19);
  if (uVar9 == 0xffffffff) {
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    local_b8 = 0;
    local_b0 = (FScriptContainerElement)0x0;
    local_c8[0] = (pFVar17->Identifier).Id;
    local_c0 = pFVar21;
    if (((pFVar2 <= (FScriptContainerElement *)local_c8) &&
        ((FScriptContainerElement *)local_c8 < pFVar2 + (longlong)*piVar18 * 0x20)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      pTVar11 = (TArray<UE::PropertyViewer::SPropertyViewer::FSelectedItem,TSizedDefaultAllocator<32>_>
                 *)(*pcVar3)();
      return pTVar11;
    }
    uVar9 = __return_storage_ptr__->ArrayNum;
    if (uVar9 == *piVar18) {
      uVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&__return_storage_ptr__->AllocatorInstance,piVar18);
    }
    pFVar21 = local_c0;
    __return_storage_ptr__->ArrayNum = uVar9 + 1;
    pFVar23 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x20;
    *(int *)pFVar23 = local_c8[0];
    pFVar2 = pFVar23 + 8;
    *(FScriptContainerElement **)&pFVar2->field_0x0 = (FScriptContainerElement *)0x0;
    iVar10 = (int)local_b8;
    *(int *)(pFVar23 + 0x10) = (int)local_b8;
    if ((int)local_b8 == 0) {
      *(int *)(pFVar23 + 0x14) = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,(int)local_b8,0,(ForAnyElementType *)pFVar2,(int)local_b8,
                 (int *)(pFVar23 + 0x14));
      ConstructItems<TArray<FFieldVariant,TSizedDefaultAllocator<32>_>,TArray<FFieldVariant,TSizedDefaultAllocator<32>_>,int>
                (*(FScriptContainerElement **)&pFVar2->field_0x0,
                 (TArray<FFieldVariant,TSizedDefaultAllocator<32>_> *)pFVar21,iVar10);
    }
    pFVar23[0x18] = local_b0;
    DestructItems<TArray<FFieldVariant,TSizedDefaultAllocator<32>_>,int>
              ((TArray<FFieldVariant,TSizedDefaultAllocator<32>_> *)local_c0,(int)local_b8);
    if (local_c0 != (FContainer *)0x0) {
      FMemory::Free(local_c0);
    }
    pFVar21 = (FContainer *)0x0;
    __return_storage_ptr__ = local_res10;
  }
  uVar8 = (uint)pFVar21;
  if ((int)uVar9 < __return_storage_ptr__->ArrayNum) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar11 = (TArray<UE::PropertyViewer::SPropertyViewer::FSelectedItem,TSizedDefaultAllocator<32>_>
               *)(*pcVar3)();
    return pTVar11;
  }
  (__return_storage_ptr__->AllocatorInstance).Data[(longlong)(int)uVar9 * 0x20 + 0x18] =
       (FScriptContainerElement)0x1;
  goto LAB_14d86c5f0;
  while (pFVar23 = pFVar23 + 0x20, pFVar23 != pFVar2 + (longlong)local_res10->ArrayNum * 0x20) {
LAB_14d86c655:
    if (*(int *)pFVar23 == (int)*(longlong *)&(pFVar21->Identifier).Id) {
      uVar9 = (uint)((longlong)pFVar23 - (longlong)pFVar2 >> 5);
      goto LAB_14d86c66b;
    }
  }
LAB_14d86c666:
  uVar9 = 0xffffffff;
LAB_14d86c66b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar19);
  if (uVar9 == 0xffffffff) {
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    piVar18 = &__return_storage_ptr__->ArrayMax;
    local_a0 = (TArray<FFieldVariant,TSizedDefaultAllocator<32>_> *)0x0;
    local_98 = 0;
    local_90 = (FScriptContainerElement)0x0;
    local_a8[0] = (undefined4)*(longlong *)&(pFVar21->Identifier).Id;
    if (((pFVar2 <= (FScriptContainerElement *)local_a8) &&
        ((FScriptContainerElement *)local_a8 < pFVar2 + (longlong)*piVar18 * 0x20)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      pTVar11 = (TArray<UE::PropertyViewer::SPropertyViewer::FSelectedItem,TSizedDefaultAllocator<32>_>
                 *)(*pcVar3)();
      return pTVar11;
    }
    uVar9 = __return_storage_ptr__->ArrayNum;
    if (uVar9 == *piVar18) {
      uVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&__return_storage_ptr__->AllocatorInstance,piVar18);
    }
    pTVar13 = local_a0;
    __return_storage_ptr__->ArrayNum = uVar9 + 1;
    pFVar23 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x20;
    pFVar2 = pFVar23 + 8;
    *(undefined4 *)pFVar23 = local_a8[0];
    *(FScriptContainerElement **)&pFVar2->field_0x0 = (FScriptContainerElement *)0x0;
    iVar10 = (int)local_98;
    *(int *)(pFVar23 + 0x10) = (int)local_98;
    if ((int)local_98 == 0) {
      *(int *)(pFVar23 + 0x14) = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,(int)local_98,0,(ForAnyElementType *)pFVar2,(int)local_98,
                 (int *)(pFVar23 + 0x14));
      ConstructItems<TArray<FFieldVariant,TSizedDefaultAllocator<32>_>,TArray<FFieldVariant,TSizedDefaultAllocator<32>_>,int>
                (*(FScriptContainerElement **)&pFVar2->field_0x0,pTVar13,iVar10);
    }
    pFVar23[0x18] = local_90;
    DestructItems<TArray<FFieldVariant,TSizedDefaultAllocator<32>_>,int>(local_a0,(int)local_98);
    this_00 = local_78;
    __return_storage_ptr__ = local_res10;
    if (local_a0 != (TArray<FFieldVariant,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_a0);
      this_00 = local_78;
      __return_storage_ptr__ = local_res10;
    }
  }
  pFVar21 = (FContainer *)0x0;
  uVar8 = 0;
  if ((int)uVar9 < __return_storage_ptr__->ArrayNum) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar11 = (TArray<UE::PropertyViewer::SPropertyViewer::FSelectedItem,TSizedDefaultAllocator<32>_>
               *)(*pcVar3)();
    return pTVar11;
  }
  pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
  pTVar13 = Private::FTreeNode::GetFieldPath(this_00,&local_58);
  if (((*(TArray<FFieldVariant,TSizedDefaultAllocator<32>_> **)
         (pFVar2 + (longlong)(int)uVar9 * 0x20 + 8) <= pTVar13) &&
      (pTVar13 < *(TArray<FFieldVariant,TSizedDefaultAllocator<32>_> **)
                  (pFVar2 + (longlong)(int)uVar9 * 0x20 + 8) +
                 *(int *)(pFVar2 + (longlong)(int)uVar9 * 0x20 + 0x14))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar11 = (TArray<UE::PropertyViewer::SPropertyViewer::FSelectedItem,TSizedDefaultAllocator<32>_>
               *)(*pcVar3)();
    return pTVar11;
  }
  iVar10 = *(int *)(pFVar2 + (longlong)(int)uVar9 * 0x20 + 0x10);
  if (iVar10 == *(int *)(pFVar2 + (longlong)(int)uVar9 * 0x20 + 0x14)) {
    iVar10 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,(ForAnyElementType *)(pFVar2 + (longlong)(int)uVar9 * 0x20 + 8),
                        (int *)(pFVar2 + (longlong)(int)uVar9 * 0x20 + 0x14));
  }
  *(int *)(pFVar2 + (longlong)(int)uVar9 * 0x20 + 0x10) = iVar10 + 1;
  puVar15 = (undefined8 *)
            ((longlong)iVar10 * 0x10 + *(longlong *)(pFVar2 + (longlong)(int)uVar9 * 0x20 + 8));
  *puVar15 = 0;
  *puVar15 = (pTVar13->AllocatorInstance).Data;
  (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *(int *)(puVar15 + 1) = pTVar13->ArrayNum;
  *(int *)((longlong)puVar15 + 0xc) = pTVar13->ArrayMax;
  pTVar13->ArrayNum = 0;
  pTVar13->ArrayMax = 0;
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  goto LAB_14d86c5e8;
LAB_14d86c5c5:
  local_res18[0] = 0;
  `UE::PropertyViewer::Private::FTreeNode::GetOwnerContainer'::__l12::<lambda_1>::operator()
            (local_res18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar17);
  pFVar19 = pFVar21;
LAB_14d86c5da:
  __return_storage_ptr__ = local_res10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pFVar21 = pFVar19;
LAB_14d86c5e8:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar19);
  pFVar19 = pFVar20;
LAB_14d86c5f0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar19);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_68);
  piVar18 = &__return_storage_ptr__->ArrayMax;
  pTVar16 = local_70 + 1;
  uVar12 = (ulonglong)local_res20;
  goto LAB_14d86c2a5;
}

// HandleContextMenuOpening @ 14d86dc70

/* WARNING: Removing unreachable block (ram,0x00014d86dd3e) */
/* WARNING: Removing unreachable block (ram,0x00014d86dd70) */
/* WARNING: Removing unreachable block (ram,0x00014d86dd71) */

TSharedPtr<SWidget,1> * __thiscall
UE::PropertyViewer::Private::FPropertyViewerImpl::HandleContextMenuOpening
          (FPropertyViewerImpl *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  TSharedPtr<SWidget,1> *pTVar4;
  FTreeNode *pFVar5;
  TArray<FFieldVariant,TSizedDefaultAllocator<32>_> *pTVar6;
  TArrayView<FFieldVariant_const_,int> *pTVar7;
  undefined1 *puVar8;
  int iVar9;
  longlong *plVar10;
  TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *local_98;
  int local_90;
  TSharedPtr<UE::PropertyViewer::Private::FContainer,1> local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  TArray<FFieldVariant,TSizedDefaultAllocator<32>_> local_58;
  FReadAccessScope local_48;
  FReadAccessScope local_30;
  TArrayView<FFieldVariant_const_,int> local_18;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnContextMenuOpening,
             &local_48);
  if (((*(int *)&(this->OnContextMenuOpening).field_0x10 == 0) ||
      (plVar10 = *(longlong **)&(this->OnContextMenuOpening).field_0x8, plVar10 == (longlong *)0x0))
     || (cVar2 = (**(code **)(*plVar10 + 0x38))(), cVar2 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    if (((this->TreeWidget).Object ==
         (STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<SWidget,1> *)(*pcVar1)();
      return pTVar4;
    }
    puVar8 = &((this->TreeWidget).Object)->field_0x588;
    (**(code **)(*(longlong *)puVar8 + 0xd0))(puVar8,&local_98);
    if ((local_90 == 1) && (local_98->Object != (FTreeNode *)0x0)) {
      plVar10 = (longlong *)0x0;
      pFVar5 = TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>::operator->(local_98);
      Private::FTreeNode::GetOwnerContainer(pFVar5,&local_88);
      if ((local_90 < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<SWidget,1> *)(*pcVar1)();
        return pTVar4;
      }
      pFVar5 = TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>::operator->(local_98);
      pTVar6 = Private::FTreeNode::GetFieldPath(pFVar5,&local_58);
      pTVar7 = TArrayView<FFieldVariant_const_,int>::
               TArrayView<FFieldVariant_const_,int><TArray<FFieldVariant,TSizedDefaultAllocator<32>_>,TArray<FFieldVariant,TSizedDefaultAllocator<32>_>_>
                         (&local_18,pTVar6);
      local_78 = pTVar7->DataPtr;
      uStack_70 = *(undefined8 *)&pTVar7->ArrayNum;
      iVar9 = 0;
      if (local_88.Object != (FContainer *)0x0) {
        if ((local_88.Object == (FContainer *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          pTVar4 = (TSharedPtr<SWidget,1> *)(*pcVar1)();
          return pTVar4;
        }
        iVar9 = ((local_88.Object)->Identifier).Id;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnContextMenuOpening,&local_30);
      if (*(int *)&(this->OnContextMenuOpening).field_0x10 != 0) {
        plVar10 = *(longlong **)&(this->OnContextMenuOpening).field_0x8;
      }
      local_68 = (undefined4)local_78;
      uStack_64 = local_78._4_4_;
      uStack_60 = (undefined4)uStack_70;
      uStack_5c = uStack_70._4_4_;
      (**(code **)(*plVar10 + 0x60))(plVar10,__return_storage_ptr__,iVar9,&local_68);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_30);
      if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
      DestructItems<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,int>(local_98,local_90);
      if (local_98 == (TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_98);
      return __return_storage_ptr__;
    }
    DestructItems<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,int>(local_98,local_90);
    if (local_98 != (TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *)0x0) {
      FMemory::Free(local_98);
    }
  }
  __return_storage_ptr__->Object = (SWidget *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// HandleDoubleClick @ 14d86e080

void __thiscall
UE::PropertyViewer::Private::FPropertyViewerImpl::HandleDoubleClick
          (FPropertyViewerImpl *this,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *param_1)

{
  TDelegate<void___cdecl(UE::PropertyViewer::SPropertyViewer::FHandle,TArrayView<FFieldVariant_const_,int>),FDefaultDelegateUserPolicy>
  *this_00;
  code *pcVar1;
  FFieldVariant *pFVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  TArray<FFieldVariant,TSizedDefaultAllocator<32>_> *pTVar6;
  TArrayView<FFieldVariant_const_,int> *pTVar7;
  longlong *plVar8;
  FReadAccessScope *this_01;
  int iVar9;
  TSharedPtr<UE::PropertyViewer::Private::FContainer,1> local_d8;
  TArray<FFieldVariant,TSizedDefaultAllocator<32>_> local_c8;
  FFieldVariant *local_b8;
  undefined8 uStack_b0;
  TArray<FFieldVariant,TSizedDefaultAllocator<32>_> local_a8;
  FFieldVariant *local_98;
  undefined8 uStack_90;
  FReadAccessScope local_88;
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  TArrayView<FFieldVariant_const_,int> local_40;
  TArrayView<FFieldVariant_const_,int> local_30 [2];
  
  this_00 = &this->OnDoubleClicked;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_88);
  if (((*(int *)&(this->OnDoubleClicked).field_0x10 == 0) ||
      (plVar8 = *(longlong **)&(this->OnDoubleClicked).field_0x8, plVar8 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*plVar8 + 0x38))(), cVar4 == '\0')) {
    this_01 = &local_88;
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
    if (param_1->Object != (FTreeNode *)0x0) {
      Private::FTreeNode::GetOwnerContainer(param_1->Object,&local_d8);
      if ((param_1->Object == (FTreeNode *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pTVar6 = Private::FTreeNode::GetFieldPath(param_1->Object,&local_a8);
      pTVar7 = TArrayView<FFieldVariant_const_,int>::
               TArrayView<FFieldVariant_const_,int><TArray<FFieldVariant,TSizedDefaultAllocator<32>_>,TArray<FFieldVariant,TSizedDefaultAllocator<32>_>_>
                         (&local_40,pTVar6);
      pFVar2 = pTVar7->DataPtr;
      uVar3 = *(undefined8 *)&pTVar7->ArrayNum;
      plVar8 = (longlong *)0x0;
      iVar9 = 0;
      if (local_d8.Object != (FContainer *)0x0) {
        if ((local_d8.Object == (FContainer *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar9 = ((local_d8.Object)->Identifier).Id;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_70);
      if (*(int *)&(this->OnDoubleClicked).field_0x10 != 0) {
        plVar8 = *(longlong **)&(this->OnDoubleClicked).field_0x8;
      }
      local_b8 = pFVar2;
      uStack_b0 = uVar3;
      (**(code **)(*plVar8 + 0x60))(plVar8,iVar9,&local_b8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_70);
      if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.SharedReferenceCount.ReferenceController);
      goto LAB_14d86e256;
    }
    plVar8 = (longlong *)0x0;
    local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.ArrayNum = 0;
    local_c8.ArrayMax = 0;
    pTVar7 = TArrayView<FFieldVariant_const_,int>::
             TArrayView<FFieldVariant_const_,int><TArray<FFieldVariant,TSizedDefaultAllocator<32>_>,TArray<FFieldVariant,TSizedDefaultAllocator<32>_>_>
                       (local_30,&local_c8);
    pFVar2 = pTVar7->DataPtr;
    uVar3 = *(undefined8 *)&pTVar7->ArrayNum;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_58);
    if (*(int *)&(this->OnDoubleClicked).field_0x10 != 0) {
      plVar8 = *(longlong **)&(this->OnDoubleClicked).field_0x8;
    }
    local_98 = pFVar2;
    uStack_90 = uVar3;
    (**(code **)(*plVar8 + 0x60))(plVar8,0,&local_98);
    this_01 = &local_58;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (this_01);
LAB_14d86e256:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// HandleDragDetected @ 14d86e280

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UE::PropertyViewer::Private::FPropertyViewerImpl::HandleDragDetected
          (FPropertyViewerImpl *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *param_3)

{
  TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&,UE::PropertyViewer::SPropertyViewer::FHandle,TArrayView<FFieldVariant_const_,int>),FDefaultDelegateUserPolicy>
  *this_00;
  code *pcVar1;
  FFieldVariant *pFVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  FReply *pFVar6;
  TArray<FFieldVariant,TSizedDefaultAllocator<32>_> *pTVar7;
  TArrayView<FFieldVariant_const_,int> *pTVar8;
  longlong *plVar9;
  int iVar10;
  TSharedPtr<UE::PropertyViewer::Private::FContainer,1> local_e8;
  TArray<FFieldVariant,TSizedDefaultAllocator<32>_> local_d8;
  FFieldVariant *local_c8;
  undefined8 uStack_c0;
  TArray<FFieldVariant,TSizedDefaultAllocator<32>_> local_b8;
  FFieldVariant *local_a8;
  undefined8 uStack_a0;
  FReadAccessScope local_98;
  FReadAccessScope local_80;
  FReadAccessScope local_68;
  TArrayView<FFieldVariant_const_,int> local_50;
  TArrayView<FFieldVariant_const_,int> local_40 [2];
  
  this_00 = &this->OnDragDetected;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_98);
  if (((*(int *)&(this->OnDragDetected).field_0x10 == 0) ||
      (plVar9 = *(longlong **)&(this->OnDragDetected).field_0x8, plVar9 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*plVar9 + 0x38))(), cVar4 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_98);
    FReply::FReply(__return_storage_ptr__,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_3->SharedReferenceCount).ReferenceController);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_98);
    if (param_3->Object == (FTreeNode *)0x0) {
      plVar9 = (longlong *)0x0;
      local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.ArrayNum = 0;
      local_d8.ArrayMax = 0;
      pTVar8 = TArrayView<FFieldVariant_const_,int>::
               TArrayView<FFieldVariant_const_,int><TArray<FFieldVariant,TSizedDefaultAllocator<32>_>,TArray<FFieldVariant,TSizedDefaultAllocator<32>_>_>
                         (local_40,&local_d8);
      pFVar2 = pTVar8->DataPtr;
      uVar3 = *(undefined8 *)&pTVar8->ArrayNum;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_68);
      if (*(int *)&(this->OnDragDetected).field_0x10 != 0) {
        plVar9 = *(longlong **)&(this->OnDragDetected).field_0x8;
      }
      local_a8 = pFVar2;
      uStack_a0 = uVar3;
      (**(code **)(*plVar9 + 0x60))(plVar9,__return_storage_ptr__,param_1,param_2,0,&local_a8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_68);
    }
    else {
      Private::FTreeNode::GetOwnerContainer(param_3->Object,&local_e8);
      if ((param_3->Object == (FTreeNode *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FReply *)(*pcVar1)();
        return pFVar6;
      }
      pTVar7 = Private::FTreeNode::GetFieldPath(param_3->Object,&local_b8);
      pTVar8 = TArrayView<FFieldVariant_const_,int>::
               TArrayView<FFieldVariant_const_,int><TArray<FFieldVariant,TSizedDefaultAllocator<32>_>,TArray<FFieldVariant,TSizedDefaultAllocator<32>_>_>
                         (&local_50,pTVar7);
      pFVar2 = pTVar8->DataPtr;
      uVar3 = *(undefined8 *)&pTVar8->ArrayNum;
      plVar9 = (longlong *)0x0;
      iVar10 = 0;
      if (local_e8.Object != (FContainer *)0x0) {
        if ((local_e8.Object == (FContainer *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FReply *)(*pcVar1)();
          return pFVar6;
        }
        iVar10 = ((local_e8.Object)->Identifier).Id;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_80);
      if (*(int *)&(this->OnDragDetected).field_0x10 != 0) {
        plVar9 = *(longlong **)&(this->OnDragDetected).field_0x8;
      }
      local_c8 = pFVar2;
      uStack_c0 = uVar3;
      (**(code **)(*plVar9 + 0x60))(plVar9,__return_storage_ptr__,param_1,param_2,iVar10,&local_c8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_80);
      if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e8.SharedReferenceCount.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_3->SharedReferenceCount).ReferenceController);
  }
  return __return_storage_ptr__;
}

// HandleGenerateRow @ 14d86e500

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<ITableRow,1> * __thiscall
UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGenerateRow
          (FPropertyViewerImpl *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,
          TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *param_1,
          TSharedRef<STableViewBase,1> *param_2)

{
  byte *pbVar1;
  TTextFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pTVar2;
  longlong *plVar3;
  FContainer *this_00;
  SMultiRowType *pSVar4;
  code *pcVar5;
  FFieldVariant *pFVar6;
  undefined8 uVar7;
  bool bVar8;
  atomic<int> aVar9;
  SWidget *pSVar10;
  char cVar11;
  bool bVar12;
  byte bVar13;
  bool bVar14;
  atomic<int> aVar15;
  FText *pFVar16;
  TSharedRef<ITableRow,1> *pTVar17;
  TArray<FFieldVariant,TSizedDefaultAllocator<32>_> *pTVar18;
  TArrayView<FFieldVariant_const_,int> *pTVar19;
  FTreeNode *pFVar20;
  FFieldClass *pFVar21;
  FArguments *pFVar22;
  TOptional<FText> *pTVar23;
  TOptional<UE::PropertyViewer::FFieldColorSettings_const_> *pTVar24;
  SFieldName *pSVar25;
  UStruct *pUVar26;
  UClass *pUVar27;
  FArguments *pFVar28;
  undefined8 *puVar29;
  TSharedRef<UE::PropertyViewer::Private::FPropertyViewerImpl,1> *pTVar30;
  ulong64 uVar31;
  TSlateDecl<_private:_class_TSharedRef<ITableRow,1>___cdecl_UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGenerateRow(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<STableViewBase,1>_const_&)_::_2_::SMultiRowType,RequiredArgs::T4RequiredArgs<TSharedRef<UE::PropertyViewer::Private::FPropertyViewerImpl,1>_&&,TSharedRef<STableViewBase,1>_const_&,TSharedRef<UE::PropertyViewer::Private::FTreeNode,1>_&&,TSharedRef<SWidget,1>_&>_>
  *pTVar32;
  FArguments *pFVar33;
  FSlot *this_01;
  FSlotArguments *pFVar34;
  TSharedRef<SHorizontalBox,1> *pTVar35;
  TSlateDecl<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *pTVar36;
  TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1> *pTVar37;
  longlong *plVar38;
  FSharedReferencer<1> FVar39;
  ITextData *pIVar40;
  atomic<int> *paVar41;
  TReferenceControllerBase<1> *pTVar42;
  TRefCountPtr<ITextData> TVar43;
  uint *puVar44;
  TReferenceControllerBase<1> *pTVar45;
  undefined4 local_res8;
  undefined4 uStackX_c;
  TSharedRef<ITableRow,1> *local_res10;
  FLLMScope local_res18 [2];
  TSharedRef<STableViewBase,1> *local_res20;
  SFieldName *local_2548;
  FSharedReferencer<1> FStack_2540;
  FTreeNode *local_2538;
  TReferenceControllerBase<1> *local_2530;
  FFieldObjectUnion local_2528;
  FLLMScope local_2520;
  FLLMScope local_251c;
  FLLMScope local_2518;
  FLLMScope local_2514;
  TSharedRef<SWidget,1> local_2510;
  SWidget *local_24f8;
  FSharedReferencer<1> FStack_24f0;
  FText local_24e8;
  FText local_24d8;
  TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UClass_const_*_&>_>
  local_24c8;
  TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UScriptStruct_const_*_&>_>
  local_24b0;
  TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<FProperty_*_&>_> local_2498
  ;
  TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UFunction_*_&>_> local_2480
  ;
  SWidget *local_2468;
  FSharedReferencer<1> local_2460;
  TSharedRef<UE::PropertyViewer::Private::FTreeNode,1> local_2458;
  SHorizontalBox *local_2448;
  TReferenceControllerBase<1> *pTStack_2440;
  T1RequiredArgs<UScriptStruct_const_*_&> local_2438;
  FMemScope local_2430;
  FFieldObjectUnion local_2428;
  FName local_2420;
  FMemScope local_2418;
  UFunction *local_2410;
  FName local_2408;
  T1RequiredArgs<UFunction_*_&> local_2400;
  FMemScope local_23f8;
  FPropertyViewerImpl *local_23f0;
  T1RequiredArgs<FProperty_*_&> local_23e8;
  FSlot *local_23e0;
  FName local_23d8;
  FMemScope local_23d0;
  T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> local_23c8;
  T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> local_23c0;
  undefined1 local_23b8 [8];
  FArguments *local_23b0;
  undefined1 local_23a8 [4];
  undefined1 local_23a4 [4];
  undefined1 local_23a0 [4];
  undefined1 local_239c [4];
  UClass *local_2398;
  FName local_2390;
  ITextData *local_2388;
  uint local_2380 [2];
  TSharedPtr<UE::PropertyViewer::Private::FContainer,1> local_2378;
  FText local_2368;
  undefined8 local_2358;
  FSharedReferencer<1> local_2350;
  SFieldName *local_2348;
  TReferenceControllerBase<1> *local_2340;
  undefined8 local_2338;
  FSharedReferencer<1> local_2330;
  undefined8 local_2328;
  FSharedReferencer<1> local_2320;
  undefined8 local_2318;
  FSharedReferencer<1> local_2310;
  undefined8 local_2308;
  FSharedReferencer<1> local_2300;
  TSharedPtr<UE::PropertyViewer::Private::FContainer,1> local_22f8;
  SFieldName *local_22e8;
  TReferenceControllerBase<1> *pTStack_22e0;
  T1RequiredArgs<UClass_const_*_&> local_22d8;
  FMemScope local_22d0;
  UScriptStruct *local_22c8;
  FName local_22c0;
  TAttribute<float> local_22b8;
  TSharedRef<UE::PropertyViewer::SFieldName,1> local_2298;
  SWidget *local_2288;
  TReferenceControllerBase<1> *local_2280;
  TSharedRef<SWidget,1> local_2278;
  TSharedRef<UE::PropertyViewer::SFieldName,1> local_2268;
  TAttribute<FText> local_2258;
  TAttribute<FText> local_2228;
  T4RequiredArgs<TSharedRef<UE::PropertyViewer::Private::FPropertyViewerImpl,1>_&&,TSharedRef<STableViewBase,1>_const_&,TSharedRef<UE::PropertyViewer::Private::FTreeNode,1>_&&,TSharedRef<SWidget,1>_&>
  local_21f8;
  FDestructionSentinel local_21d8;
  undefined1 *local_21c0;
  TAttribute<FMargin> local_21b8;
  TAttribute<FMargin> local_2188;
  TAttribute<FMargin> local_2158;
  TSharedPtr<UE::PropertyViewer::SFieldName,1> local_2128;
  TSharedRef<UE::PropertyViewer::Private::FPropertyViewerImpl,1> local_2118;
  TSharedRef<UE::PropertyViewer::Private::FPropertyViewerImpl,1> local_2108;
  TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1> local_20f8;
  TSharedRef<SHorizontalBox,1> local_20e8;
  SWidget *local_20d8;
  TReferenceControllerBase<1> *pTStack_20d0;
  TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1> local_20c8;
  FReadAccessScope local_20b8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_20a0;
  TSharedRef<UE::PropertyViewer::SFieldName,1> local_2088;
  FFieldVariant *local_2078;
  undefined8 uStack_2070;
  TArray<FFieldVariant,TSizedDefaultAllocator<32>_> local_2068;
  TSharedRef<UE::PropertyViewer::SFieldName,1> local_2058;
  TSharedPtr<UE::PropertyViewer::SFieldName,1> local_2048;
  FReadAccessScope local_2038;
  TSlateDecl<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  local_2020;
  TSlateDecl<_private:_class_TSharedRef<ITableRow,1>___cdecl_UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGenerateRow(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<STableViewBase,1>_const_&)_::_2_::SMultiRowType,RequiredArgs::T4RequiredArgs<TSharedRef<UE::PropertyViewer::Private::FPropertyViewerImpl,1>_&&,TSharedRef<STableViewBase,1>_const_&,TSharedRef<UE::PropertyViewer::Private::FTreeNode,1>_&&,TSharedRef<SWidget,1>_&>_>
  local_2008;
  FReadAccessScope local_1ff0;
  TSlateDecl<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  local_1fd8;
  FReadAccessScope local_1fc0;
  TArrayView<FFieldVariant_const_,int> local_1fa8;
  TOptional<FText> local_1f98;
  TOptional<FText> local_1f88;
  TOptional<FText> local_1f78;
  TOptional<FText> local_1f68;
  FSlotArguments local_1f58;
  FArguments local_1e70;
  FSlotArguments local_1c68;
  TOptional<UE::PropertyViewer::FFieldColorSettings_const_> local_1b80;
  TOptional<UE::PropertyViewer::FFieldColorSettings_const_> local_1a58;
  TOptional<UE::PropertyViewer::FFieldColorSettings_const_> local_1930;
  TOptional<UE::PropertyViewer::FFieldColorSettings_const_> local_1808;
  FArguments local_16e0;
  FArguments local_13e8;
  FArguments local_10f0;
  FArguments local_df8;
  FArguments local_a90;
  FArguments local_728;
  FArguments local_3c0;
  undefined8 uStack_48;
  
  uStack_48 = 0x14d86e528;
  plVar38 = (longlong *)0x0;
  local_res8 = 0;
  pTVar2 = (this->SearchFilter).Object;
  local_res10 = __return_storage_ptr__;
  local_res20 = param_2;
  if (pTVar2 == (TTextFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) {
    pFVar16 = FText::GetEmpty();
    pIVar40 = (pFVar16->TextData).Reference;
    local_2388 = pIVar40;
    if (pIVar40 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar40 + 8))(pIVar40,local_23b8);
    }
    puVar44 = local_2380;
    bVar8 = false;
    bVar12 = true;
    local_2380[0] = pFVar16->Flags;
    TVar43.Reference = pIVar40;
  }
  else {
    FTextFilterExpressionEvaluator::GetFilterText
              (&pTVar2->TextFilterExpressionEvaluator,&local_24d8);
    puVar44 = &local_24d8.Flags;
    bVar8 = true;
    bVar12 = false;
    pIVar40 = local_2388;
    TVar43.Reference = local_24d8.TextData.Reference;
  }
  if (TVar43.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar43.Reference + 8))(TVar43.Reference,local_23a8);
  }
  local_2538 = (FTreeNode *)CONCAT44(local_2538._4_4_,*puVar44);
  if ((bVar12) && (pIVar40 != (ITextData *)0x0)) {
    (**(code **)((longlong)*pIVar40 + 0x10))(pIVar40);
  }
  if ((bVar8) && (local_24d8.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_24d8.TextData.Reference + 0x10))();
  }
  local_24f8 = (SWidget *)0x0;
  FStack_24f0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGetPreSlot,
             &local_2038);
  if (((*(int *)&(this->OnGetPreSlot).field_0x10 == 0) ||
      (plVar3 = *(longlong **)&(this->OnGetPreSlot).field_0x8, plVar3 == (longlong *)0x0)) ||
     (cVar11 = (**(code **)(*plVar3 + 0x38))(), cVar11 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_2038);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_2038);
    if ((param_1->Object == (FTreeNode *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      pTVar17 = (TSharedRef<ITableRow,1> *)(*pcVar5)();
      return pTVar17;
    }
    Private::FTreeNode::GetOwnerContainer(param_1->Object,&local_2378);
    if ((param_1->Object == (FTreeNode *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      pTVar17 = (TSharedRef<ITableRow,1> *)(*pcVar5)();
      return pTVar17;
    }
    pTVar18 = Private::FTreeNode::GetFieldPath(param_1->Object,&local_2068);
    pTVar19 = TArrayView<FFieldVariant_const_,int>::
              TArrayView<FFieldVariant_const_,int><TArray<FFieldVariant,TSizedDefaultAllocator<32>_>,TArray<FFieldVariant,TSizedDefaultAllocator<32>_>_>
                        (&local_1fa8,pTVar18);
    pFVar6 = pTVar19->DataPtr;
    uVar7 = *(undefined8 *)&pTVar19->ArrayNum;
    if (((local_2378.Object != (FContainer *)0x0) && (local_2378.Object == (FContainer *)0x0)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      pTVar17 = (TSharedRef<ITableRow,1> *)(*pcVar5)();
      return pTVar17;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGetPreSlot,
               &local_1fc0);
    if (*(int *)&(this->OnGetPreSlot).field_0x10 != 0) {
      plVar38 = *(longlong **)&(this->OnGetPreSlot).field_0x8;
    }
    local_2078 = pFVar6;
    uStack_2070 = uVar7;
    (**(code **)(*plVar38 + 0x60))(plVar38,&local_2468);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1fc0);
    local_24f8 = local_2468;
    local_2468 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_24f0,&local_2460);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2460.ReferenceController);
    if (local_2068.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2068.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2378.SharedReferenceCount.ReferenceController);
  }
  local_2548 = (SFieldName *)0x0;
  FStack_2540.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((param_1->Object == (FTreeNode *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    pTVar17 = (TSharedRef<ITableRow,1> *)(*pcVar5)();
    return pTVar17;
  }
  pFVar20 = param_1->Object;
  pTVar45 = (pFVar20->Container).WeakReferenceCount.ReferenceController;
  if (pTVar45 == (TReferenceControllerBase<1> *)0x0) {
LAB_14d86e826:
    if ((param_1->Object == (FTreeNode *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      pTVar17 = (TSharedRef<ITableRow,1> *)(*pcVar5)();
      return pTVar17;
    }
    Private::FTreeNode::GetOwnerContainer(param_1->Object,&local_22f8);
    if (local_22f8.Object != (FContainer *)0x0) {
      if ((local_22f8.Object == (FContainer *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar5 = (code *)swi(3);
        pTVar17 = (TSharedRef<ITableRow,1> *)(*pcVar5)();
        return pTVar17;
      }
      bVar12 = FContainer::IsValid(local_22f8.Object);
      if (bVar12) {
        pFVar20 = TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>::operator->(param_1);
        Private::FTreeNode::GetField(pFVar20);
        if ((local_2528.Unknown & 0xfffffffffffffffe) != 0) {
          pFVar21 = FProperty::StaticClass();
          bVar12 = FFieldVariant::IsA((FFieldVariant *)&local_2528,pFVar21);
          local_2428.Field = (FField *)0x0;
          if (bVar12) {
            local_2428 = local_2528;
          }
          if (local_2428.Field == (FField *)0x0) {
            pUVar27 = Z_Construct_UClass_UFunction_NoRegister();
            bVar12 = FFieldVariant::IsA((FFieldVariant *)&local_2528,pUVar27);
            local_2410 = (UFunction *)0x0;
            if (bVar12) {
              local_2410 = (UFunction *)(local_2528.Unknown & 0xfffffffffffffffe);
            }
            if (local_2410 == (UFunction *)0x0) goto LAB_14d86f3de;
            pFVar22 = SFieldName::FArguments::FArguments(&local_3c0);
            pFVar22->_bShowIcon = this->bShowFieldIcon;
            pFVar22->_bSanitizeName = this->bSanitizeName;
            pFVar20 = TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>::operator->(param_1);
            pTVar23 = Private::FTreeNode::GetOverrideDisplayName(pFVar20,&local_1f78);
            pFVar22 = SFieldName::FArguments::OverrideDisplayName(pFVar22,pTVar23);
            pTVar24 = TOptional<UE::PropertyViewer::FFieldColorSettings_const_>::
                      TOptional<UE::PropertyViewer::FFieldColorSettings_const_>
                                (&local_1808,&this->OverrideIconColorSettings);
            pFVar22 = SFieldName::FArguments::OverrideIconColorSettings(pFVar22,pTVar24);
            local_2228.Value.TextData.Reference = TVar43.Reference;
            if (TVar43.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*TVar43.Reference + 8))(TVar43.Reference,local_239c);
            }
            local_2228.Value.Flags = (uint)local_2538;
            local_2228.bIsSet = true;
            local_2228.Getter._16_8_ = 0;
            local_2228.Getter._0_8_ = 0;
            local_2228.Getter._8_8_ = 0;
            pFVar22 = SFieldName::FArguments::HighlightText(pFVar22,&local_2228);
            local_2400.Arg0 = &local_2410;
            FLLMScope::FLLMScope
                      (&local_2518,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
            local_2408 = LLMTagDeclaration_UI_Slate.UniqueName;
            FMemScope::FMemScope(&local_23f8,&local_2408,true);
            TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UFunction_*_&>_>
            ::
            TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UFunction_*_&>_>
                      (&local_2480,"SFieldName",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SPropertyViewerImpl.cpp"
                       ,0x407,&local_2400);
            FMemScope::~FMemScope(&local_23f8);
            FLLMScope::~FLLMScope(&local_2518);
            pSVar25 = TSharedPtr<UE::PropertyViewer::SFieldName,1>::operator->(&local_2480._Widget);
            SWidget::SWidgetConstruct((SWidget *)pSVar25,(FSlateBaseNamedArgs *)pFVar22);
            SFieldName::Construct
                      (local_2480._Widget.Object,pFVar22,*(local_2480._RequiredArgs)->Arg0);
            pSVar25 = TSharedPtr<UE::PropertyViewer::SFieldName,1>::operator->(&local_2480._Widget);
            SWidget::CacheVolatility((SWidget *)pSVar25);
            pSVar25 = TSharedPtr<UE::PropertyViewer::SFieldName,1>::operator->(&local_2480._Widget);
            pbVar1 = (byte *)((longlong)&pSVar25->_padding_ + 1);
            *pbVar1 = *pbVar1 | 4;
            TSharedPtr<UE::PropertyViewer::SFieldName,1>::ToSharedRef
                      (&local_2480._Widget,&local_2088);
            local_2128.Object = local_2088.Object;
            local_2128.SharedReferenceCount.ReferenceController =
                 local_2088.SharedReferenceCount.ReferenceController;
            if (local_2088.SharedReferenceCount.ReferenceController ==
                (TReferenceControllerBase<1> *)0x0) {
              paVar41 = (atomic<int> *)&DAT_00000008;
            }
            else {
              paVar41 = &(local_2088.SharedReferenceCount.ReferenceController)->SharedReferenceCount
              ;
              LOCK();
              *paVar41 = (atomic<int>)((int)*paVar41 + 1);
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_2088.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_2480._Widget.SharedReferenceCount.ReferenceController);
            SFieldName::FArguments::~FArguments(&local_3c0);
            pFVar20 = TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>::operator->(param_1);
            TWeakPtr<UE::PropertyViewer::SFieldName,1>::operator=<UE::PropertyViewer::SFieldName>
                      (&pFVar20->PropertyWidget,&local_2128);
            local_2300.ReferenceController = local_2088.SharedReferenceCount.ReferenceController;
            if (local_2088.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              *paVar41 = (atomic<int>)((int)*paVar41 + 1);
              UNLOCK();
            }
            local_2548 = local_2088.Object;
            local_2308 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_2540,&local_2300);
            FVar39.ReferenceController = local_2300.ReferenceController;
          }
          else {
            pFVar22 = SFieldName::FArguments::FArguments(&local_728);
            pFVar22->_bShowIcon = this->bShowFieldIcon;
            pFVar22->_bSanitizeName = this->bSanitizeName;
            pFVar20 = TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>::operator->(param_1);
            pTVar23 = Private::FTreeNode::GetOverrideDisplayName(pFVar20,&local_1f68);
            pFVar22 = SFieldName::FArguments::OverrideDisplayName(pFVar22,pTVar23);
            pTVar24 = TOptional<UE::PropertyViewer::FFieldColorSettings_const_>::
                      TOptional<UE::PropertyViewer::FFieldColorSettings_const_>
                                (&local_1930,&this->OverrideIconColorSettings);
            pFVar22 = SFieldName::FArguments::OverrideIconColorSettings(pFVar22,pTVar24);
            local_2258.Value.TextData.Reference = TVar43.Reference;
            if (TVar43.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*TVar43.Reference + 8))(TVar43.Reference,local_23a0);
            }
            local_2258.Value.Flags = (uint)local_2538;
            local_2258.bIsSet = true;
            local_2258.Getter._16_8_ = 0;
            local_2258.Getter._0_8_ = 0;
            local_2258.Getter._8_8_ = 0;
            pFVar22 = SFieldName::FArguments::HighlightText(pFVar22,&local_2258);
            local_23e8.Arg0 = (FProperty **)&local_2428;
            FLLMScope::FLLMScope
                      (&local_251c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
            local_2420 = LLMTagDeclaration_UI_Slate.UniqueName;
            FMemScope::FMemScope(&local_2418,&local_2420,true);
            TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<FProperty_*_&>_>
            ::
            TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<FProperty_*_&>_>
                      (&local_2498,"SFieldName",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SPropertyViewerImpl.cpp"
                       ,0x3fc,&local_23e8);
            FMemScope::~FMemScope(&local_2418);
            FLLMScope::~FLLMScope(&local_251c);
            pSVar25 = TSharedPtr<UE::PropertyViewer::SFieldName,1>::operator->(&local_2498._Widget);
            SWidget::SWidgetConstruct((SWidget *)pSVar25,(FSlateBaseNamedArgs *)pFVar22);
            SFieldName::Construct
                      (local_2498._Widget.Object,pFVar22,*(local_2498._RequiredArgs)->Arg0);
            pSVar25 = TSharedPtr<UE::PropertyViewer::SFieldName,1>::operator->(&local_2498._Widget);
            if ((pSVar25->_padding_ & 0x10) == 0) {
              cVar11 = (**(code **)(pSVar25->_padding_ + 0x228))(pSVar25);
              bVar13 = 0;
              if (cVar11 != '\0') goto LAB_14d86eaa5;
            }
            else {
LAB_14d86eaa5:
              bVar13 = 0x20;
            }
            *(byte *)&pSVar25->_padding_ = (byte)pSVar25->_padding_ & 0xdf;
            *(byte *)&pSVar25->_padding_ = (byte)pSVar25->_padding_ | bVar13;
            pSVar25 = TSharedPtr<UE::PropertyViewer::SFieldName,1>::operator->(&local_2498._Widget);
            pbVar1 = (byte *)((longlong)&pSVar25->_padding_ + 1);
            *pbVar1 = *pbVar1 | 4;
            TSharedPtr<UE::PropertyViewer::SFieldName,1>::ToSharedRef
                      (&local_2498._Widget,&local_2058);
            local_2048.Object = local_2058.Object;
            local_2048.SharedReferenceCount.ReferenceController =
                 local_2058.SharedReferenceCount.ReferenceController;
            if (local_2058.SharedReferenceCount.ReferenceController ==
                (TReferenceControllerBase<1> *)0x0) {
              paVar41 = (atomic<int> *)&DAT_00000008;
            }
            else {
              paVar41 = &(local_2058.SharedReferenceCount.ReferenceController)->SharedReferenceCount
              ;
              LOCK();
              *paVar41 = (atomic<int>)((int)*paVar41 + 1);
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_2058.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_2498._Widget.SharedReferenceCount.ReferenceController);
            SFieldName::FArguments::~FArguments(&local_728);
            pFVar20 = TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>::operator->(param_1);
            TWeakPtr<UE::PropertyViewer::SFieldName,1>::operator=<UE::PropertyViewer::SFieldName>
                      (&pFVar20->PropertyWidget,&local_2048);
            local_2310.ReferenceController = local_2058.SharedReferenceCount.ReferenceController;
            if (local_2058.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              *paVar41 = (atomic<int>)((int)*paVar41 + 1);
              UNLOCK();
            }
            local_2548 = local_2058.Object;
            local_2318 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_2540,&local_2310);
            FVar39.ReferenceController = local_2310.ReferenceController;
            local_2088.SharedReferenceCount.ReferenceController =
                 local_2058.SharedReferenceCount.ReferenceController;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar39.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2088.SharedReferenceCount.ReferenceController);
        }
      }
    }
LAB_14d86f3de:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_22f8.SharedReferenceCount.ReferenceController);
  }
  else {
    aVar9 = pTVar45->SharedReferenceCount;
    do {
      if (aVar9 == (atomic<int>)0x0) {
        pTVar45 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d86e826;
      }
      LOCK();
      aVar15 = pTVar45->SharedReferenceCount;
      bVar12 = aVar9 == aVar15;
      if (bVar12) {
        pTVar45->SharedReferenceCount = (atomic<int>)((int)aVar9 + 1);
        aVar15 = aVar9;
      }
      UNLOCK();
      aVar9 = aVar15;
    } while (!bVar12);
    this_00 = (pFVar20->Container).Object;
    local_2530 = pTVar45;
    if (this_00 == (FContainer *)0x0) goto LAB_14d86e826;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGenerateContainer,
               &local_20b8);
    if (((*(int *)&(this->OnGenerateContainer).field_0x10 == 0) ||
        (plVar38 = *(longlong **)&(this->OnGenerateContainer).field_0x8, plVar38 == (longlong *)0x0)
        ) || (cVar11 = (**(code **)(*plVar38 + 0x38))(), cVar11 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20b8);
      bVar12 = FContainer::IsValid(this_00);
      if (bVar12) {
        pUVar26 = (UStruct *)FWeakObjectPtr::Get(&(this_00->Container).WeakPtr);
        local_2398 = Cast<UClass_const_,UStruct_const_>(pUVar26);
        if (local_2398 == (UClass *)0x0) {
          pFVar20 = (FTreeNode *)&this->bSanitizeName;
        }
        else {
          pFVar22 = SFieldName::FArguments::FArguments(&local_df8);
          local_2538 = (FTreeNode *)&this->bSanitizeName;
          pFVar22->_bShowIcon = true;
          pFVar22->_bSanitizeName = *(bool *)local_2538;
          pFVar20 = TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>::operator->(param_1);
          pTVar23 = Private::FTreeNode::GetOverrideDisplayName(pFVar20,&local_1f98);
          pFVar22 = SFieldName::FArguments::OverrideDisplayName(pFVar22,pTVar23);
          pTVar24 = TOptional<UE::PropertyViewer::FFieldColorSettings_const_>::
                    TOptional<UE::PropertyViewer::FFieldColorSettings_const_>
                              (&local_1b80,&this->OverrideIconColorSettings);
          pFVar22 = SFieldName::FArguments::OverrideIconColorSettings(pFVar22,pTVar24);
          local_22d8.Arg0 = &local_2398;
          FLLMScope::FLLMScope
                    (local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
          local_2390 = LLMTagDeclaration_UI_Slate.UniqueName;
          FMemScope::FMemScope(&local_22d0,&local_2390,true);
          TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UClass_const_*_&>_>
          ::
          TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UClass_const_*_&>_>
                    (&local_24c8,"SFieldName",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SPropertyViewerImpl.cpp"
                     ,0x3e4,&local_22d8);
          FMemScope::~FMemScope(&local_22d0);
          FLLMScope::~FLLMScope(local_res18);
          pSVar25 = TSharedPtr<UE::PropertyViewer::SFieldName,1>::operator->(&local_24c8._Widget);
          SWidget::SWidgetConstruct((SWidget *)pSVar25,(FSlateBaseNamedArgs *)pFVar22);
          SFieldName::Construct(local_24c8._Widget.Object,pFVar22,*(local_24c8._RequiredArgs)->Arg0)
          ;
          pSVar25 = TSharedPtr<UE::PropertyViewer::SFieldName,1>::operator->(&local_24c8._Widget);
          if ((pSVar25->_padding_ & 0x10) == 0) {
            cVar11 = (**(code **)(pSVar25->_padding_ + 0x228))(pSVar25);
            bVar13 = 0;
            if (cVar11 != '\0') goto LAB_14d86ee36;
          }
          else {
LAB_14d86ee36:
            local_2538 = (FTreeNode *)&this->bSanitizeName;
            bVar13 = 0x20;
          }
          *(byte *)&pSVar25->_padding_ = (byte)pSVar25->_padding_ & 0xdf;
          *(byte *)&pSVar25->_padding_ = (byte)pSVar25->_padding_ | bVar13;
          pSVar25 = TSharedPtr<UE::PropertyViewer::SFieldName,1>::operator->(&local_24c8._Widget);
          pbVar1 = (byte *)((longlong)&pSVar25->_padding_ + 1);
          *pbVar1 = *pbVar1 | 4;
          TSharedPtr<UE::PropertyViewer::SFieldName,1>::ToSharedRef(&local_24c8._Widget,&local_2268)
          ;
          local_2330.ReferenceController = local_2268.SharedReferenceCount.ReferenceController;
          if (local_2268.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_2268.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_2268.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          local_2548 = local_2268.Object;
          local_2338 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_2540,&local_2330);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2330.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2268.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_24c8._Widget.SharedReferenceCount.ReferenceController);
          SFieldName::FArguments::~FArguments(&local_df8);
          pFVar20 = local_2538;
        }
        pUVar26 = (UStruct *)FWeakObjectPtr::Get(&(this_00->Container).WeakPtr);
        local_22c8 = Cast<UScriptStruct_const_,UStruct_const_>(pUVar26);
        pTVar45 = local_2530;
        if (local_22c8 != (UScriptStruct *)0x0) {
          pFVar22 = SFieldName::FArguments::FArguments(&local_a90);
          pFVar22->_bShowIcon = true;
          pFVar22->_bSanitizeName = *(bool *)&pFVar20->_padding_;
          pFVar20 = TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>::operator->(param_1);
          pTVar23 = Private::FTreeNode::GetOverrideDisplayName(pFVar20,&local_1f88);
          TOptional<FText>::operator=(&pFVar22->_OverrideDisplayName,pTVar23);
          if (*(longlong **)&pTVar23->field0_0x0 != (longlong *)0x0) {
            (**(code **)(**(longlong **)&pTVar23->field0_0x0 + 0x10))();
          }
          pTVar24 = TOptional<UE::PropertyViewer::FFieldColorSettings_const_>::
                    TOptional<UE::PropertyViewer::FFieldColorSettings_const_>
                              (&local_1a58,&this->OverrideIconColorSettings);
          pFVar22 = SFieldName::FArguments::OverrideIconColorSettings(pFVar22,pTVar24);
          local_2438.Arg0 = &local_22c8;
          FLLMScope::FLLMScope
                    (&local_2520,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
          local_22c0 = LLMTagDeclaration_UI_Slate.UniqueName;
          FMemScope::FMemScope(&local_2430,&local_22c0,true);
          TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UScriptStruct_const_*_&>_>
          ::
          TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UScriptStruct_const_*_&>_>
                    (&local_24b0,"SFieldName",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SPropertyViewerImpl.cpp"
                     ,0x3ec,&local_2438);
          FMemScope::~FMemScope(&local_2430);
          FLLMScope::~FLLMScope(&local_2520);
          pSVar25 = TSharedPtr<UE::PropertyViewer::SFieldName,1>::operator->(&local_24b0._Widget);
          SWidget::SWidgetConstruct((SWidget *)pSVar25,(FSlateBaseNamedArgs *)pFVar22);
          SFieldName::Construct(local_24b0._Widget.Object,pFVar22,*(local_24b0._RequiredArgs)->Arg0)
          ;
          pSVar25 = TSharedPtr<UE::PropertyViewer::SFieldName,1>::operator->(&local_24b0._Widget);
          if ((pSVar25->_padding_ & 0x10) == 0) {
            cVar11 = (**(code **)(pSVar25->_padding_ + 0x228))(pSVar25);
            bVar13 = 0;
            if (cVar11 != '\0') goto LAB_14d86f04d;
          }
          else {
LAB_14d86f04d:
            bVar13 = 0x20;
          }
          *(byte *)&pSVar25->_padding_ = (byte)pSVar25->_padding_ & 0xdf;
          *(byte *)&pSVar25->_padding_ = (byte)pSVar25->_padding_ | bVar13;
          pSVar25 = TSharedPtr<UE::PropertyViewer::SFieldName,1>::operator->(&local_24b0._Widget);
          pbVar1 = (byte *)((longlong)&pSVar25->_padding_ + 1);
          *pbVar1 = *pbVar1 | 4;
          TSharedPtr<UE::PropertyViewer::SFieldName,1>::ToSharedRef(&local_24b0._Widget,&local_2298)
          ;
          local_2320.ReferenceController = local_2298.SharedReferenceCount.ReferenceController;
          if (local_2298.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_2298.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_2298.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          local_2548 = local_2298.Object;
          local_2328 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_2540,&local_2320);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2320.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2298.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_24b0._Widget.SharedReferenceCount.ReferenceController);
          SFieldName::FArguments::~FArguments(&local_a90);
        }
      }
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20b8);
      if ((param_1->Object == (FTreeNode *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar5 = (code *)swi(3);
        pTVar17 = (TSharedRef<ITableRow,1> *)(*pcVar5)();
        return pTVar17;
      }
      pFVar20 = param_1->Object;
      local_24e8.TextData.Reference = (ITextData *)0x0;
      local_24e8.Flags = 0;
      if ((pFVar20->OverrideDisplayName).field0_0x0.TypedValue.TextData.Reference !=
          (ITextData *)0x0) {
        local_24e8.TextData.Reference = *(ITextData **)&(pFVar20->OverrideDisplayName).field0_0x0;
        (**(code **)((longlong)*local_24e8.TextData.Reference + 8))
                  (local_24e8.TextData.Reference,local_23a4);
        local_24e8.Flags = (pFVar20->OverrideDisplayName).field0_0x0.TypedValue.Flags;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnGenerateContainer,&local_1ff0);
      if (*(int *)&(this->OnGenerateContainer).field_0x10 == 0) {
        plVar38 = (longlong *)0x0;
      }
      else {
        plVar38 = *(longlong **)&(this->OnGenerateContainer).field_0x8;
      }
      pcVar5 = *(code **)(*plVar38 + 0x60);
      local_2368.TextData.Reference = (ITextData *)0x0;
      local_2368.Flags = 0;
      if (local_24e8.TextData.Reference != (ITextData *)0x0) {
        FText::FText(&local_2368,&local_24e8);
      }
      (*pcVar5)(plVar38,&local_2348);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_1ff0);
      if (local_24e8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_24e8.TextData.Reference + 0x10))();
      }
      local_2350.ReferenceController = local_2340;
      if (local_2340 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_2340->SharedReferenceCount = (atomic<int>)((int)local_2340->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_2548 = local_2348;
      local_2358 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_2540,&local_2350);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2350.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2340);
      pTVar45 = local_2530;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar45);
  local_2510.SharedReferenceCount = SNullWidget::NullWidget.SharedReferenceCount;
  pSVar10 = SNullWidget::NullWidget.Object;
  if (local_2548 == (SFieldName *)0x0) {
    bVar8 = false;
    bVar12 = true;
    local_2288 = SNullWidget::NullWidget.Object;
    local_2280 = SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    local_2548 = (SFieldName *)pSVar10;
    if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  else {
    bVar8 = true;
    bVar12 = false;
    if ((local_2548 == (SFieldName *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), bVar14)) {
      pcVar5 = (code *)swi(3);
      pTVar17 = (TSharedRef<ITableRow,1> *)(*pcVar5)();
      return pTVar17;
    }
    local_22e8 = local_2548;
    pTStack_22e0 = FStack_2540.ReferenceController;
    if (FStack_2540.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_2540.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_2540.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_2510.SharedReferenceCount.ReferenceController = FStack_2540.ReferenceController;
    if ((local_2548 == (SFieldName *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""),
       local_2510.SharedReferenceCount.ReferenceController = pTStack_22e0, local_2548 = local_22e8,
       bVar14)) {
      pcVar5 = (code *)swi(3);
      pTVar17 = (TSharedRef<ITableRow,1> *)(*pcVar5)();
      return pTVar17;
    }
  }
  pTVar45 = pTStack_22e0;
  if (local_2510.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2510.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2510.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2510.Object = (SWidget *)local_2548;
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2280);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar45);
  }
  pSVar10 = local_24f8;
  bVar14 = false;
  bVar8 = false;
  bVar12 = false;
  if (this->bUseRows == false) {
    bVar12 = local_24f8 == (SWidget *)0x0;
    if (local_24f8 != (SWidget *)0x0) {
      pFVar28 = STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::FArguments::
                FArguments(&local_13e8);
      local_2158.bIsSet = true;
      local_2158.Getter._16_8_ = 0;
      local_2158.Value.Left = 0.0;
      local_2158.Value.Top = 0.0;
      local_2158.Value.Right = 0.0;
      local_2158.Value.Bottom = 0.0;
      local_2158.Getter._0_8_ = 0;
      local_2158.Getter._8_8_ = 0;
      pFVar28 = STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::FArguments::
                Padding(pFVar28,&local_2158);
      pFVar33 = SHorizontalBox::FArguments::FArguments(&local_1e70);
      this_01 = ::operator_new(0x58);
      local_23e0 = (FSlot *)0x0;
      if (this_01 != (FSlot *)0x0) {
        *(undefined8 *)this_01 = 0;
        *(undefined8 *)&this_01->field_0x8 = 0;
        *(undefined8 *)&this_01->field_0x10 = 0;
        *(undefined8 *)&this_01->field_0x18 = 0;
        *(undefined8 *)&this_01->field_0x20 = 0;
        *(undefined8 *)&this_01->field_0x28 = 0;
        *(undefined8 *)&this_01->field_0x30 = 0;
        *(undefined8 *)&this_01->field_0x38 = 0;
        *(undefined8 *)&this_01->field_0x40 = 0;
        *(undefined8 *)&this_01->field_0x48 = 0;
        *(undefined8 *)&this_01->field_0x50 = 0;
        local_23e0 = SHorizontalBox::FSlot::FSlot(this_01);
      }
      SHorizontalBox::FSlot::FSlotArguments::FSlotArguments(&local_1f58,(FSlot *)&local_23e0);
      pFVar34 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(&local_1f58);
      if ((bVar12) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x408,L""), bVar12)) {
        pcVar5 = (code *)swi(3);
        pTVar17 = (TSharedRef<ITableRow,1> *)(*pcVar5)();
        return pTVar17;
      }
      FVar39.ReferenceController = FStack_24f0.ReferenceController;
      local_2278.Object = local_24f8;
      local_2278.SharedReferenceCount.ReferenceController = FStack_24f0.ReferenceController;
      if (FStack_24f0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FStack_24f0.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FStack_24f0.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pSVar10 == (SWidget *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x25d,L""), bVar12)) {
        pcVar5 = (code *)swi(3);
        pTVar17 = (TSharedRef<ITableRow,1> *)(*pcVar5)();
        return pTVar17;
      }
      pFVar34 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                          ((FSlotArguments *)pFVar34,&local_2278);
      pFVar33 = SHorizontalBox::FArguments::operator+(pFVar33,pFVar34);
      pFVar34 = SHorizontalBox::Slot(&local_1c68);
      local_22b8.Value = 1.0;
      local_22b8.Getter._16_8_ = 0;
      local_22b8.bIsSet = true;
      local_22b8.Getter._0_8_ = 0;
      local_22b8.Getter._8_8_ = 0;
      pFVar34 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(pFVar34,&local_22b8);
      pFVar34 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                          ((FSlotArguments *)pFVar34,&local_2510);
      pFVar33 = SHorizontalBox::FArguments::operator+(pFVar33,pFVar34);
      FLLMScope::FLLMScope
                (&local_2514,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
      local_23d8 = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope(&local_23d0,&local_23d8,true);
      TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
      TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                (&local_20a0,"SHorizontalBox",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SPropertyViewerImpl.cpp"
                 ,0x4a8,(T0RequiredArgs *)&local_res8);
      FMemScope::~FMemScope(&local_23d0);
      FLLMScope::~FLLMScope(&local_2514);
      pTVar35 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                          (&local_20a0,&local_20e8,pFVar33);
      pTVar45 = (pTVar35->SharedReferenceCount).ReferenceController;
      local_2448 = pTVar35->Object;
      if (pTVar45 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar45->SharedReferenceCount = (atomic<int>)((int)pTVar45->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar45->SharedReferenceCount = (atomic<int>)((int)pTVar45->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar42 = (pFVar28->_Content).Widget.SharedReferenceCount.ReferenceController;
      (pFVar28->_Content).Widget.Object = (SWidget *)local_2448;
      (pFVar28->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar45;
      pTStack_2440 = pTVar45;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar42);
      local_23c8.Arg0 = local_res20;
      pTVar36 = MakeTDecl<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                          (&local_2020,"SSimpleRowType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SPropertyViewerImpl.cpp"
                           ,0x4a4,&local_23c8);
      pTVar37 = TSlateDecl<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                ::operator<<=(pTVar36,&local_20f8,pFVar28);
      pTVar17 = local_res10;
      local_res10->Object = (ITableRow *)pTVar37->Object;
      pTVar42 = (pTVar37->SharedReferenceCount).ReferenceController;
      (local_res10->SharedReferenceCount).ReferenceController = pTVar42;
      if (pTVar42 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar42->SharedReferenceCount = (atomic<int>)((int)pTVar42->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_20f8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2020._Widget.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar45);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_20e8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_20a0._Widget.SharedReferenceCount.ReferenceController);
      SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1c68);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2278.SharedReferenceCount.ReferenceController);
      SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1f58);
      DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
                ((FSlotArguments *)local_1e70._Slots.AllocatorInstance.Data,
                 local_1e70._Slots.ArrayNum);
      if ((FSlotArguments *)local_1e70._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
        FMemory::Free(local_1e70._Slots.AllocatorInstance.Data);
      }
      FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1e70);
      STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::FArguments::~FArguments
                (&local_13e8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2510.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_2540.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar39.ReferenceController);
      if (TVar43.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*TVar43.Reference + 0x10))(TVar43.Reference);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return pTVar17;
    }
    pFVar28 = STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::FArguments::
              FArguments(&local_10f0);
    local_2188.bIsSet = true;
    local_2188.Getter._16_8_ = 0;
    local_2188.Value.Left = 0.0;
    local_2188.Value.Top = 0.0;
    local_2188.Value.Right = 0.0;
    local_2188.Value.Bottom = 0.0;
    local_2188.Getter._0_8_ = 0;
    local_2188.Getter._8_8_ = 0;
    pFVar28 = STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::FArguments::Padding
                        (pFVar28,&local_2188);
    if (local_2510.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_2510.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_2510.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_20d8 = (pFVar28->_Content).Widget.Object;
    pTStack_20d0 = (pFVar28->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar28->_Content).Widget.Object = local_2510.Object;
    (pFVar28->_Content).Widget.SharedReferenceCount.ReferenceController =
         local_2510.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (pTStack_20d0);
    local_23c0.Arg0 = local_res20;
    pTVar36 = MakeTDecl<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                        (&local_1fd8,"SSimpleRowType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SPropertyViewerImpl.cpp"
                         ,0x4b6,&local_23c0);
    pTVar37 = TSlateDecl<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
              ::operator<<=(pTVar36,&local_20c8,pFVar28);
    pTVar17 = local_res10;
    local_res10->Object = (ITableRow *)pTVar37->Object;
    pTVar45 = (pTVar37->SharedReferenceCount).ReferenceController;
    (local_res10->SharedReferenceCount).ReferenceController = pTVar45;
    if (pTVar45 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar45->SharedReferenceCount = (atomic<int>)((int)pTVar45->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20c8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1fd8._Widget.SharedReferenceCount.ReferenceController);
    pFVar28 = &local_10f0;
    goto LAB_14d86fde6;
  }
  pFVar28 = STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::FArguments::FArguments
                      (&local_16e0);
  pTVar45 = (param_1->SharedReferenceCount).ReferenceController;
  local_2538 = param_1->Object;
  if (pTVar45 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar45->SharedReferenceCount = (atomic<int>)((int)pTVar45->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_23b0 = pFVar28;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar28->_OnDragDetected,
             (FWriteAccessScope *)&local_21d8);
  local_21c0 = &(pFVar28->_OnDragDetected).field_0x8;
  puVar29 = Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_21c0);
  if (puVar29 == (undefined8 *)0x0) {
    pTVar42 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    pTVar30 = TSharedFromThis<UE::PropertyViewer::Private::FPropertyViewerImpl,1>::AsShared
                        ((TSharedFromThis<UE::PropertyViewer::Private::FPropertyViewerImpl,1> *)this
                         ,&local_2118);
    pTVar42 = (pTVar30->SharedReferenceCount).ReferenceController;
    local_23f0 = pTVar30->Object;
    if (pTVar42 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar42->SharedReferenceCount = (atomic<int>)((int)pTVar42->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar42->SharedReferenceCount = (atomic<int>)((int)pTVar42->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar14 = true;
    bVar8 = true;
    bVar12 = true;
    *puVar29 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy__V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00____6B_
    ;
    puVar29[1] = local_2538;
    puVar29[2] = pTVar45;
    if (pTVar45 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar45->SharedReferenceCount = (atomic<int>)((int)pTVar45->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_2530 = pTVar42;
    uVar31 = FDelegateHandle::GenerateNewID();
    puVar29[3] = uVar31;
    *puVar29 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VFPropertyViewerImpl_Private_PropertyViewer_UE___00__A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy__V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00____6B_
    ;
    puVar29[4] = local_23f0;
    puVar29[5] = pTVar42;
    if (pTVar42 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar42->WeakReferenceCount = (atomic<int>)((int)pTVar42->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar29[6] = HandleDragDetected;
    pTVar42 = local_2530;
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar42);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar42);
  }
  if (bVar14) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2118.SharedReferenceCount.ReferenceController);
  }
  if (local_21d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_21d8.Accessor,&local_21d8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar45);
  local_21b8.bIsSet = true;
  local_21b8.Getter._16_8_ = 0;
  local_21b8.Value.Left = 0.0;
  local_21b8.Value.Top = 0.0;
  local_21b8.Value.Right = 0.0;
  local_21b8.Value.Bottom = 0.0;
  local_21b8.Getter._0_8_ = 0;
  local_21b8.Getter._8_8_ = 0;
  pFVar28 = STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::FArguments::Padding
                      (local_23b0,&local_21b8);
  if ((param_1->Object == (FTreeNode *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    pTVar17 = (TSharedRef<ITableRow,1> *)(*pcVar5)();
    return pTVar17;
  }
  local_2458.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  local_2458.Object = param_1->Object;
  if (local_2458.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2458.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2458.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_2458.Object == (FTreeNode *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    pTVar17 = (TSharedRef<ITableRow,1> *)(*pcVar5)();
    return pTVar17;
  }
  local_21f8.Arg0 =
       TSharedFromThis<UE::PropertyViewer::Private::FPropertyViewerImpl,1>::AsShared
                 ((TSharedFromThis<UE::PropertyViewer::Private::FPropertyViewerImpl,1> *)this,
                  &local_2108);
  local_21f8.Arg1 = local_res20;
  local_21f8.Arg2 = &local_2458;
  local_21f8.Arg3 = &local_2510;
  pTVar32 = MakeTDecl<_UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGenerateRow_::__l2::SMultiRowType,RequiredArgs::T4RequiredArgs<TSharedRef<UE::PropertyViewer::Private::FPropertyViewerImpl,1>_&&,TSharedRef<STableViewBase,1>_const_&,TSharedRef<UE::PropertyViewer::Private::FTreeNode,1>_&&,TSharedRef<SWidget,1>_&>_>
                      (&local_2008,"SMultiRowType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SPropertyViewerImpl.cpp"
                       ,0x49b,&local_21f8);
  if (((pTVar32->_Widget).Object == (SMultiRowType *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    pTVar17 = (TSharedRef<ITableRow,1> *)(*pcVar5)();
    return pTVar17;
  }
  SWidget::SWidgetConstruct
            ((SWidget *)&((pTVar32->_Widget).Object)->_padding_,(FSlateBaseNamedArgs *)pFVar28);
  RequiredArgs::
  T4RequiredArgs<TSharedRef<UE::PropertyViewer::Private::FPropertyViewerImpl,1>_&&,TSharedRef<STableViewBase,1>_const_&,TSharedRef<UE::PropertyViewer::Private::FTreeNode,1>_&&,TSharedRef<SWidget,1>_&>
  ::
  CallConstruct<_UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGenerateRow_::__l2::SMultiRowType>
            (pTVar32->_RequiredArgs,(pTVar32->_Widget).Object,pFVar28);
  if (((pTVar32->_Widget).Object == (SMultiRowType *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    pTVar17 = (TSharedRef<ITableRow,1> *)(*pcVar5)();
    return pTVar17;
  }
  pSVar4 = (pTVar32->_Widget).Object;
  if ((pSVar4->_padding_ & 0x10) == 0) {
    cVar11 = (**(code **)(pSVar4->_padding_ + 0x228))(&pSVar4->_padding_);
    bVar13 = 0;
    if (cVar11 != '\0') goto LAB_14d86f818;
  }
  else {
LAB_14d86f818:
    bVar13 = 0x20;
  }
  *(byte *)&pSVar4->_padding_ = (byte)pSVar4->_padding_ & 0xdf;
  *(byte *)&pSVar4->_padding_ = (byte)pSVar4->_padding_ | bVar13;
  if (((pTVar32->_Widget).Object == (SMultiRowType *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    pTVar17 = (TSharedRef<ITableRow,1> *)(*pcVar5)();
    return pTVar17;
  }
  pbVar1 = (byte *)((longlong)&((pTVar32->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (((pTVar32->_Widget).Object == (SMultiRowType *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    pTVar17 = (TSharedRef<ITableRow,1> *)(*pcVar5)();
    return pTVar17;
  }
  pSVar4 = (pTVar32->_Widget).Object;
  pTVar45 = (pTVar32->_Widget).SharedReferenceCount.ReferenceController;
  (pTVar32->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pTVar32->_Widget).Object = (SMultiRowType *)0x0;
  if ((pSVar4 == (SMultiRowType *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    pTVar17 = (TSharedRef<ITableRow,1> *)(*pcVar5)();
    return pTVar17;
  }
  pTVar17 = local_res10;
  local_res10->Object = (ITableRow *)pSVar4;
  (local_res10->SharedReferenceCount).ReferenceController = pTVar45;
  if (pTVar45 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar45->SharedReferenceCount = (atomic<int>)((int)pTVar45->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar45);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2008._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2108.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2458.SharedReferenceCount.ReferenceController);
  pFVar28 = &local_16e0;
LAB_14d86fde6:
  STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::FArguments::~FArguments(pFVar28)
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2510.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_2540.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_24f0.ReferenceController);
  if (TVar43.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar43.Reference + 0x10))(TVar43.Reference);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return pTVar17;
}

// HandleGetChildren @ 14d86fe40

void __thiscall
UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGetChildren
          (FPropertyViewerImpl *this,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *param_1,
          TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  TArray<UE::PropertyViewer::Private::FTreeNode::FNodeReference,TSizedDefaultAllocator<32>_> *pTVar1
  ;
  TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pTVar2;
  FTreeNode *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> FVar7;
  longlong lVar8;
  TArray<UE::PropertyViewer::Private::FTreeNode::FNodeReference,TSizedDefaultAllocator<32>_>
  local_18;
  
  if (param_1->Object == (FTreeNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((param_1->Object->bChildGenerated == false) &&
     ((pTVar2 = (this->FilterHandler).Object,
      pTVar2 == (TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0 ||
      (pTVar2->bIsEnabled == false)))) {
    pTVar1 = &this->NodeReferences;
    if (param_1->Object == (FTreeNode *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    Private::FTreeNode::BuildChildNodesRecursive
              (param_1->Object,this->FieldIterator,this->FieldExpander,this->bSortChildNode,2,
               &local_18);
    if (pTVar1 == &local_18) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x986,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar8 = (longlong)local_18.ArrayNum;
    if (local_18.ArrayNum != 0) {
      iVar6 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,local_18.ArrayNum,&pTVar1->AllocatorInstance,
                         &(this->NodeReferences).ArrayNum,&(this->NodeReferences).ArrayMax);
      memmove((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x18,
              local_18.AllocatorInstance.Data,lVar8 * 0x18);
      local_18._8_8_ = local_18._8_8_ & 0xffffffff00000000;
    }
    DestructItems<UE::PropertyViewer::Private::FTreeNode::FNodeReference,int>
              ((FNodeReference *)local_18.AllocatorInstance.Data,0);
    if ((FNodeReference *)local_18.AllocatorInstance.Data != (FNodeReference *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  if (param_1->Object == (FTreeNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = param_1->Object;
  DestructItems<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,int>
            ((TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *)
             (param_2->AllocatorInstance).Data,param_2->ArrayNum);
  FVar7 = (pFVar3->ChildNodes).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>)0x0) {
    FVar7 = (ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>)
            &pFVar3->ChildNodes;
  }
  TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>::
  CopyToEmpty<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,int>
            (param_2,(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *)FVar7,
             (pFVar3->ChildNodes).ArrayNum,param_2->ArrayMax);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// HandleGetFilterStrings @ 14d870050

void __thiscall
UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGetFilterStrings
          (FPropertyViewerImpl *this,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1->Object == (FTreeNode *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  Private::FTreeNode::GetFilterStrings(param_1->Object,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// HandleSearchChanged @ 14d870240

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::PropertyViewer::Private::FPropertyViewerImpl::HandleSearchChanged
          (FPropertyViewerImpl *this,FText *param_1)

{
  SSearchBox *this_00;
  FText *pFVar1;
  FText local_18;
  
  this_00 = (this->SearchBoxWidget).Object;
  if (this_00 != (SSearchBox *)0x0) {
    pFVar1 = SetRawFilterTextInternal(this,&local_18,param_1);
    SEditableTextBox::SetError((SEditableTextBox *)this_00,pFVar1);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  return;
}

// HandleSelectionChanged @ 14d870290

void __thiscall
UE::PropertyViewer::Private::FPropertyViewerImpl::HandleSelectionChanged
          (FPropertyViewerImpl *this,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *param_1,
          Type param_2)

{
  TDelegate<void___cdecl(UE::PropertyViewer::SPropertyViewer::FHandle,TArrayView<FFieldVariant_const_,int>,ESelectInfo::Type),FDefaultDelegateUserPolicy>
  *this_00;
  code *pcVar1;
  FFieldVariant *pFVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  TArray<FFieldVariant,TSizedDefaultAllocator<32>_> *pTVar6;
  TArrayView<FFieldVariant_const_,int> *pTVar7;
  longlong *plVar8;
  FReadAccessScope *this_01;
  int iVar9;
  TSharedPtr<UE::PropertyViewer::Private::FContainer,1> local_d8;
  TArray<FFieldVariant,TSizedDefaultAllocator<32>_> local_c8;
  FFieldVariant *local_b8;
  undefined8 uStack_b0;
  TArray<FFieldVariant,TSizedDefaultAllocator<32>_> local_a8;
  FFieldVariant *local_98;
  undefined8 uStack_90;
  FReadAccessScope local_88;
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  TArrayView<FFieldVariant_const_,int> local_40;
  TArrayView<FFieldVariant_const_,int> local_30 [2];
  
  this_00 = &this->OnSelectionChanged;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_88);
  if (((*(int *)&(this->OnSelectionChanged).field_0x10 == 0) ||
      (plVar8 = *(longlong **)&(this->OnSelectionChanged).field_0x8, plVar8 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*plVar8 + 0x38))(), cVar4 == '\0')) {
    this_01 = &local_88;
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
    if (param_1->Object != (FTreeNode *)0x0) {
      Private::FTreeNode::GetOwnerContainer(param_1->Object,&local_d8);
      if ((param_1->Object == (FTreeNode *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pTVar6 = Private::FTreeNode::GetFieldPath(param_1->Object,&local_a8);
      pTVar7 = TArrayView<FFieldVariant_const_,int>::
               TArrayView<FFieldVariant_const_,int><TArray<FFieldVariant,TSizedDefaultAllocator<32>_>,TArray<FFieldVariant,TSizedDefaultAllocator<32>_>_>
                         (&local_40,pTVar6);
      pFVar2 = pTVar7->DataPtr;
      uVar3 = *(undefined8 *)&pTVar7->ArrayNum;
      plVar8 = (longlong *)0x0;
      iVar9 = 0;
      if (local_d8.Object != (FContainer *)0x0) {
        if ((local_d8.Object == (FContainer *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar9 = ((local_d8.Object)->Identifier).Id;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_70);
      if (*(int *)&(this->OnSelectionChanged).field_0x10 != 0) {
        plVar8 = *(longlong **)&(this->OnSelectionChanged).field_0x8;
      }
      local_b8 = pFVar2;
      uStack_b0 = uVar3;
      (**(code **)(*plVar8 + 0x60))(plVar8,iVar9,&local_b8,param_2);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_70);
      if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.SharedReferenceCount.ReferenceController);
      goto LAB_14d870470;
    }
    plVar8 = (longlong *)0x0;
    local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.ArrayNum = 0;
    local_c8.ArrayMax = 0;
    pTVar7 = TArrayView<FFieldVariant_const_,int>::
             TArrayView<FFieldVariant_const_,int><TArray<FFieldVariant,TSizedDefaultAllocator<32>_>,TArray<FFieldVariant,TSizedDefaultAllocator<32>_>_>
                       (local_30,&local_c8);
    pFVar2 = pTVar7->DataPtr;
    uVar3 = *(undefined8 *)&pTVar7->ArrayNum;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_58);
    if (*(int *)&(this->OnSelectionChanged).field_0x10 != 0) {
      plVar8 = *(longlong **)&(this->OnSelectionChanged).field_0x8;
    }
    local_98 = pFVar2;
    uStack_90 = uVar3;
    (**(code **)(*plVar8 + 0x60))(plVar8,0,&local_98,param_2);
    this_01 = &local_58;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (this_01);
LAB_14d870470:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Remove @ 14d884660

void __thiscall
UE::PropertyViewer::Private::FPropertyViewerImpl::Remove(FPropertyViewerImpl *this,FHandle param_1)

{
  longlong lVar1;
  int *piVar2;
  TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *this_00;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  atomic<int> aVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  TReferenceControllerBase<1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  uint uVar15;
  TReferenceControllerBase<1> *pTVar16;
  
  pTVar12 = (TReferenceControllerBase<1> *)0x0;
  bVar6 = false;
  pTVar13 = pTVar12;
  pTVar16 = pTVar12;
  if (0 < (this->TreeSource).ArrayNum) {
    do {
      uVar15 = (uint)pTVar13;
      uVar11 = ~uVar15 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar15 < (this->TreeSource).ArrayNum) {
        uVar7 = uVar11;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar10 = (this->TreeSource).AllocatorInstance.Data;
      if ((*(longlong *)((longlong)&pTVar16->_padding_ + (longlong)pFVar10) == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar1 = *(longlong *)((longlong)&pTVar16->_padding_ + (longlong)pFVar10);
      pTVar13 = *(TReferenceControllerBase<1> **)(lVar1 + 0x28);
      pTVar14 = pTVar13;
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        aVar4 = pTVar13->SharedReferenceCount;
        do {
          pTVar14 = pTVar12;
          if (aVar4 == (atomic<int>)0x0) goto LAB_14d884751;
          LOCK();
          aVar8 = pTVar13->SharedReferenceCount;
          bVar5 = aVar4 == aVar8;
          if (bVar5) {
            pTVar13->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
            aVar8 = aVar4;
          }
          UNLOCK();
          aVar4 = aVar8;
        } while (!bVar5);
        piVar2 = *(int **)(lVar1 + 0x20);
        pTVar14 = pTVar13;
        if ((piVar2 != (int *)0x0) && (*piVar2 == param_1.Id)) {
          uVar7 = 0;
          if ((int)uVar15 < (this->TreeSource).ArrayNum) {
            uVar7 = uVar11;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar10 = (this->TreeSource).AllocatorInstance.Data + (longlong)(int)uVar15 * 0x10;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<1> **)(pFVar10 + 8));
          iVar9 = ~uVar15 + (this->TreeSource).ArrayNum;
          if (iVar9 != 0) {
            memmove(pFVar10,pFVar10 + 0x10,(longlong)iVar9 << 4);
          }
          piVar2 = &(this->TreeSource).ArrayNum;
          *piVar2 = *piVar2 + -1;
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,&(this->TreeSource).AllocatorInstance,(this->TreeSource).ArrayNum,
                     &(this->TreeSource).ArrayMax);
          bVar6 = true;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar13);
          break;
        }
      }
LAB_14d884751:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
      pTVar13 = (TReferenceControllerBase<1> *)(ulonglong)(uVar15 + 1);
      pTVar16 = pTVar16 + 1;
    } while ((int)(uVar15 + 1) < (this->TreeSource).ArrayNum);
  }
  pTVar13 = pTVar12;
  if (0 < (this->Containers).ArrayNum) {
    do {
      uVar11 = (uint)pTVar13;
      uVar15 = ~uVar11 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar11 < (this->Containers).ArrayNum) {
        uVar7 = uVar15;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar10 = (this->Containers).AllocatorInstance.Data;
      if ((*(longlong *)((longlong)&pTVar12->_padding_ + (longlong)pFVar10) == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (**(int **)((longlong)&pTVar12->_padding_ + (longlong)pFVar10) == param_1.Id) {
        uVar7 = 0;
        if ((int)uVar11 < (this->Containers).ArrayNum) {
          uVar7 = uVar15;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar10 = (this->Containers).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x10;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (*(TReferenceControllerBase<1> **)(pFVar10 + 8));
        iVar9 = (this->Containers).ArrayNum + ~uVar11;
        if (iVar9 != 0) {
          memmove(pFVar10,pFVar10 + 0x10,(longlong)iVar9 << 4);
        }
        piVar2 = &(this->Containers).ArrayNum;
        *piVar2 = *piVar2 + -1;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&(this->Containers).AllocatorInstance,(this->Containers).ArrayNum,
                   &(this->Containers).ArrayMax);
        break;
      }
      pTVar12 = pTVar12 + 1;
      pTVar13 = (TReferenceControllerBase<1> *)(ulonglong)(uVar11 + 1);
    } while ((int)(uVar11 + 1) < (this->Containers).ArrayNum);
  }
  if (!bVar6) {
    return;
  }
  this_00 = (this->FilterHandler).Object;
  if (this_00 != (TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) {
    TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::RefreshAndFilterTree
              (this_00);
    return;
  }
  if (((this->TreeWidget).Object ==
       (STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014d8849f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(this->TreeWidget).Object + 0x248))();
  return;
}

// RemoveAll @ 14d884a70

void __thiscall
UE::PropertyViewer::Private::FPropertyViewerImpl::RemoveAll(FPropertyViewerImpl *this)

{
  int *piVar1;
  int iVar2;
  TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *pTVar3;
  TSharedPtr<UE::PropertyViewer::Private::FContainer,1> *pTVar4;
  TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *this_00;
  code *pcVar5;
  bool bVar6;
  
  iVar2 = (this->TreeSource).ArrayNum;
  if ((iVar2 < 1) && ((this->Containers).ArrayNum < 1)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  piVar1 = &(this->TreeSource).ArrayMax;
  pTVar3 = (TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *)
           (this->TreeSource).AllocatorInstance.Data;
  if ((this->TreeSource).ArrayMax < 0) {
    DestructItems<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,int>(pTVar3,iVar2);
    (this->TreeSource).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->TreeSource).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,int>(pTVar3,iVar2);
    (this->TreeSource).ArrayNum = 0;
  }
  piVar1 = &(this->Containers).ArrayMax;
  pTVar4 = (TSharedPtr<UE::PropertyViewer::Private::FContainer,1> *)
           (this->Containers).AllocatorInstance.Data;
  iVar2 = (this->Containers).ArrayNum;
  if ((this->Containers).ArrayMax < 0) {
    DestructItems<TSharedPtr<UE::PropertyViewer::Private::FContainer,1>,int>(pTVar4,iVar2);
    (this->Containers).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->Containers).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedPtr<UE::PropertyViewer::Private::FContainer,1>,int>(pTVar4,iVar2);
    (this->Containers).ArrayNum = 0;
  }
  if (bVar6) {
    this_00 = (this->FilterHandler).Object;
    if (this_00 != (TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0)
    {
      TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::RefreshAndFilterTree
                (this_00);
      return;
    }
    if ((this->TreeWidget).Object ==
        (STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014d884b9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(this->TreeWidget).Object + 0x248))();
    return;
  }
  return;
}

// SetHighlightTextRecursive @ 14d886e70

void __thiscall
UE::PropertyViewer::Private::FPropertyViewerImpl::SetHighlightTextRecursive
          (FPropertyViewerImpl *this,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *param_1,
          FText *param_2)

{
  int iVar1;
  FTreeNode *pFVar2;
  SFieldName *pSVar3;
  STextBlock *this_00;
  code *pcVar4;
  atomic<int> aVar5;
  bool bVar6;
  atomic<int> aVar7;
  TReferenceControllerBase<1> *pTVar8;
  ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> FVar9;
  ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> FVar10;
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  FDestructionSentinel local_a8;
  FText local_90;
  undefined1 local_80;
  undefined1 local_78 [8];
  ForAnyElementType FStack_70;
  ulonglong local_68;
  TAttribute<FText> local_60;
  
  if ((param_1->Object == (FTreeNode *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = param_1->Object;
  pTVar8 = (pFVar2->PropertyWidget).WeakReferenceCount.ReferenceController;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar8->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d886ee4;
      }
      LOCK();
      aVar7 = pTVar8->SharedReferenceCount;
      bVar6 = aVar5 == aVar7;
      if (bVar6) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar7 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar7;
    } while (!bVar6);
    pSVar3 = (pFVar2->PropertyWidget).Object;
    if (pSVar3 != (SFieldName *)0x0) {
      local_90.TextData.Reference = (param_2->TextData).Reference;
      if (local_90.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_90.TextData.Reference + 8))
                  (local_90.TextData.Reference,local_res20);
      }
      local_90.Flags = param_2->Flags;
      local_68 = 0;
      local_80 = 1;
      local_78 = (undefined1  [8])0x0;
      FStack_70.Data = (FScriptContainerElement *)0x0;
      this_00 = (pSVar3->NameBlock).Object;
      if (this_00 != (STextBlock *)0x0) {
        FText::FText(&local_60.Value,&local_90);
        local_60.bIsSet = (bool)local_80;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_60.Getter,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_78);
        STextBlock::SetHighlightText(this_00,&local_60);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
                 (FWriteAccessScope *)&local_a8);
      if (((int)local_68 != 0) && (FStack_70.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_70.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_70,0,0,0x10);
        local_68 = local_68 & 0xffffffff00000000;
      }
      if (local_a8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
      }
      if (FStack_70.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_70.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_78);
      if (local_90.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
      }
    }
  }
LAB_14d886ee4:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((param_1->Object == (FTreeNode *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (param_1->Object->bChildGenerated != false) {
    if ((param_1->Object == (FTreeNode *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2 = param_1->Object;
    FVar9 = (pFVar2->ChildNodes).AllocatorInstance.SecondaryData;
    iVar1 = (pFVar2->ChildNodes).ArrayNum;
    if (FVar9 == (ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>)0x0) {
      FVar9 = (ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>)
              &pFVar2->ChildNodes;
    }
    FVar10 = (ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>)
             ((longlong)FVar9 + (longlong)iVar1 * 0x10);
    while( true ) {
      if ((pFVar2->ChildNodes).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (FVar9 == FVar10) break;
      SetHighlightTextRecursive
                (this,(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *)FVar9,param_2);
      FVar9 = (ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>)
              ((longlong)FVar9 + 0x10);
    }
  }
  return;
}

// SetRawFilterText @ 14d8878b0

void __thiscall
UE::PropertyViewer::Private::FPropertyViewerImpl::SetRawFilterText
          (FPropertyViewerImpl *this,FText *param_1)

{
  FText local_18;
  
  SetRawFilterTextInternal(this,&local_18,param_1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// SetRawFilterTextInternal @ 14d887960

FText * __thiscall
UE::PropertyViewer::Private::FPropertyViewerImpl::SetRawFilterTextInternal
          (FPropertyViewerImpl *this,FText *__return_storage_ptr__,FText *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  TTextFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pTVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  FText *pFVar11;
  uint uVar12;
  TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *pTVar13;
  longlong lVar14;
  TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *pTVar15;
  undefined1 local_res8 [8];
  FDestructionSentinel local_48;
  
  bVar7 = FText::IsEmpty(param_1);
  if (((this->FilterHandler).Object ==
       (TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar11 = (FText *)(*pcVar6)();
    return pFVar11;
  }
  ((this->FilterHandler).Object)->bIsEnabled = !bVar7;
  if (((this->SearchFilter).Object ==
       (TTextFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar11 = (FText *)(*pcVar6)();
    return pFVar11;
  }
  pTVar3 = (this->SearchFilter).Object;
  bVar7 = FTextFilterExpressionEvaluator::SetFilterText
                    (&pTVar3->TextFilterExpressionEvaluator,param_1);
  if (bVar7) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pTVar3->ChangedEvent,
               (FWriteAccessScope *)&local_48);
    puVar1 = &(pTVar3->ChangedEvent).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar7 = false;
    uVar12 = *(int *)&(pTVar3->ChangedEvent).field_0x10 - 1;
    if (-1 < (int)uVar12) {
      lVar14 = (longlong)(int)uVar12 << 4;
      bVar7 = false;
      do {
        uVar10 = 0;
        if ((int)uVar12 < *(int *)&(pTVar3->ChangedEvent).field_0x10) {
          uVar10 = ~uVar12 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          pFVar11 = (FText *)(*pcVar6)();
          return pFVar11;
        }
        lVar4 = *(longlong *)&(pTVar3->ChangedEvent).field_0x8;
        if (((*(int *)(lVar4 + 8 + lVar14) == 0) ||
            (plVar5 = *(longlong **)(lVar4 + lVar14), plVar5 == (longlong *)0x0)) ||
           (cVar9 = (**(code **)(*plVar5 + 0x68))(), cVar9 == '\0')) {
          bVar7 = true;
        }
        lVar14 = lVar14 + -0x10;
        uVar12 = uVar12 - 1;
      } while (-1 < (int)uVar12);
    }
    puVar1 = &(pTVar3->ChangedEvent).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar7) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pTVar3->ChangedEvent,false);
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
  }
  if (((this->FilterHandler).Object ==
       (TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar11 = (FText *)(*pcVar6)();
    return pFVar11;
  }
  TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::RefreshAndFilterTree
            ((this->FilterHandler).Object);
  iVar2 = (this->FilteredTreeSource).ArrayNum;
  pTVar13 = (TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *)
            (this->FilteredTreeSource).AllocatorInstance.Data;
  pTVar15 = pTVar13 + iVar2;
  while( true ) {
    if ((this->FilteredTreeSource).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pTVar13 == pTVar15) break;
    SetHighlightTextRecursive(this,pTVar13,param_1);
    pTVar13 = pTVar13 + 1;
  }
  if (((this->SearchFilter).Object ==
       (TTextFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar11 = (FText *)(*pcVar6)();
    return pFVar11;
  }
  FTextFilterExpressionEvaluator::GetFilterErrorText
            (&((this->SearchFilter).Object)->TextFilterExpressionEvaluator,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// SetSelection @ 14d887d10

void __thiscall
UE::PropertyViewer::Private::FPropertyViewerImpl::SetSelection
          (FPropertyViewerImpl *this,FHandle param_1,TArrayView<FFieldVariant_const_,int> *param_2)

{
  int iVar1;
  STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pSVar2;
  FTreeNode *pFVar3;
  FContainer *pFVar4;
  code *pcVar5;
  atomic<int> aVar6;
  bool bVar7;
  atomic<int> aVar8;
  Type *pTVar9;
  TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *pTVar12;
  undefined1 local_res8 [8];
  TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> local_58;
  TArrayView<FFieldVariant_const_,int> local_48;
  FTreeNode *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  
  if (((this->TreeWidget).Object ==
       (STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pSVar2 = (this->TreeWidget).Object;
  pTVar9 = TAttribute<enum_ESelectionMode::Type>::Get(&pSVar2->field_0x3e8);
  if ((*pTVar9 != None) && (*(int *)&pSVar2->field_0x810 != *(int *)&pSVar2->field_0x83c)) {
    (**(code **)(*(longlong *)&pSVar2->field_0x588 + 0x30))(&pSVar2->field_0x588);
    (**(code **)(*(longlong *)&pSVar2->field_0x588 + 0x40))(&pSVar2->field_0x588,3);
  }
  iVar1 = (this->TreeSource).ArrayNum;
  pTVar10 = (TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *)
            (this->TreeSource).AllocatorInstance.Data;
  pTVar12 = pTVar10 + iVar1;
  do {
    while( true ) {
      if ((this->TreeSource).ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pTVar10 == pTVar12) {
        return;
      }
      if ((pTVar10->Object == (FTreeNode *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar3 = pTVar10->Object;
      pTVar11 = (pFVar3->Container).WeakReferenceCount.ReferenceController;
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) break;
LAB_14d887e30:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
      pTVar10 = pTVar10 + 1;
    }
    aVar6 = pTVar11->SharedReferenceCount;
    do {
      if (aVar6 == (atomic<int>)0x0) {
        pTVar11 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d887e30;
      }
      LOCK();
      aVar8 = pTVar11->SharedReferenceCount;
      bVar7 = aVar6 == aVar8;
      if (bVar7) {
        pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar8 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar8;
    } while (!bVar7);
    pFVar4 = (pFVar3->Container).Object;
    if ((pFVar4 == (FContainer *)0x0) || ((pFVar4->Identifier).Id != param_1.Id))
    goto LAB_14d887e30;
    local_48.DataPtr = param_2->DataPtr;
    local_48.ArrayNum = param_2->ArrayNum;
    local_48._12_4_ = *(undefined4 *)&param_2->field_0xc;
    FindExistingChild(this,&local_58,pTVar10,&local_48);
    if (local_58.Object != (FTreeNode *)0x0) {
      if (((this->TreeWidget).Object ==
           (STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pSVar2 = (this->TreeWidget).Object;
      pTVar9 = TAttribute<enum_ESelectionMode::Type>::Get(&pSVar2->field_0x3e8);
      if (*pTVar9 != None) {
        local_38 = local_58.Object;
        pTStack_30 = local_58.SharedReferenceCount.ReferenceController;
        pcVar5 = *(code **)(*(longlong *)&pSVar2->field_0x588 + 0x28);
        if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        (*pcVar5)(&pSVar2->field_0x588,&local_38,1,0);
        (**(code **)(*(longlong *)&pSVar2->field_0x588 + 0x40))(&pSVar2->field_0x588,3);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    pTVar10 = pTVar10 + 1;
  } while( true );
}

// Tick @ 14d88ab40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UE::PropertyViewer::Private::FPropertyViewerImpl::Tick(FPropertyViewerImpl *this)

{
  TArray<UE::PropertyViewer::Private::FTreeNode::FNodeReference,TSizedDefaultAllocator<32>_>
  *this_00;
  TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  FTreeNode *pFVar6;
  code *pcVar7;
  atomic<int> aVar8;
  bool bVar9;
  uint uVar10;
  atomic<int> aVar11;
  UObject *pUVar12;
  FFieldVariant this_01;
  FFieldClass *pFVar13;
  void *pvVar14;
  UObject *pUVar15;
  ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> FVar16;
  longlong lVar17;
  TReferenceControllerBase<1> *pTVar18;
  FPropertyViewerImpl *pFVar19;
  uint uVar20;
  uint uVar21;
  undefined1 auStackY_c8 [32];
  undefined1 local_98 [8];
  longlong local_90;
  FPropertyViewerImpl *local_88;
  TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> local_80;
  FPropertyPath local_68;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  uVar21 = (this->NodeReferences).ArrayNum - 1;
  if (-1 < (int)uVar21) {
    this_00 = &this->NodeReferences;
    lVar17 = (longlong)(int)uVar21 * 0x18;
    pFVar19 = this;
    local_88 = this;
    do {
      uVar20 = ~uVar21 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar21 < (this->NodeReferences).ArrayNum) {
        uVar10 = uVar20;
      }
      local_90 = lVar17;
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)((this_00->AllocatorInstance).Data + lVar17));
      uVar10 = 0;
      if ((int)uVar21 < (this->NodeReferences).ArrayNum) {
        uVar10 = uVar20;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar4 = (this_00->AllocatorInstance).Data;
      local_80.Object = (FTreeNode *)0x0;
      local_80.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(pFVar4 + lVar17 + 0x10);
      if (local_80.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        aVar8 = (local_80.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        do {
          if (aVar8 == (atomic<int>)0x0) {
            local_80.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14d88ac96;
          }
          LOCK();
          aVar11 = (local_80.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
          bVar9 = aVar8 == aVar11;
          if (bVar9) {
            (local_80.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)aVar8 + 1);
            aVar11 = aVar8;
          }
          UNLOCK();
          aVar8 = aVar11;
        } while (!bVar9);
      }
      if (local_80.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        local_80.Object = *(FTreeNode **)(pFVar4 + lVar17 + 8);
      }
LAB_14d88ac96:
      pFVar6 = local_80.Object;
      if (local_80.Object == (FTreeNode *)0x0) {
LAB_14d88ae2b:
        uVar10 = 0;
        if ((int)uVar21 < (this->NodeReferences).ArrayNum) {
          uVar10 = uVar20;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        TArray<UE::PropertyViewer::Private::FTreeNode::FNodeReference,TSizedDefaultAllocator<32>_>::
        RemoveAtSwapImpl(this_00,uVar21);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,&this_00->AllocatorInstance,(this->NodeReferences).ArrayNum,
                   &(this->NodeReferences).ArrayMax);
      }
      else {
        if (pUVar12 == (UObject *)0x0) {
          pTVar18 = ((local_80.Object)->ParentNode).WeakReferenceCount.ReferenceController;
          if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
            aVar8 = pTVar18->SharedReferenceCount;
            do {
              if (aVar8 == (atomic<int>)0x0) {
                pTVar18 = (TReferenceControllerBase<1> *)0x0;
                goto LAB_14d88ade4;
              }
              LOCK();
              aVar11 = pTVar18->SharedReferenceCount;
              bVar9 = aVar8 == aVar11;
              if (bVar9) {
                pTVar18->SharedReferenceCount = (atomic<int>)((int)aVar8 + 1);
                aVar11 = aVar8;
              }
              UNLOCK();
              aVar8 = aVar11;
            } while (!bVar9);
            pFVar6 = ((local_80.Object)->ParentNode).Object;
            if (pFVar6 != (FTreeNode *)0x0) {
              pTVar1 = &pFVar6->ChildNodes;
              piVar2 = &(pFVar6->ChildNodes).ArrayMax;
              FVar16 = (pFVar6->ChildNodes).AllocatorInstance.SecondaryData;
              iVar3 = (pFVar6->ChildNodes).ArrayNum;
              if ((pFVar6->ChildNodes).ArrayMax < 0) {
                if (FVar16 == (ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
                              )0x0) {
                  FVar16 = (ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>)
                           pTVar1;
                }
                DestructItems<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,int>
                          ((TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *)FVar16,iVar3);
                (pFVar6->ChildNodes).ArrayNum = 0;
                if (*piVar2 != 0) {
                  Core::Private::
                  ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_>
                            (0x10,8,0,&pTVar1->AllocatorInstance,0,piVar2);
                }
                pFVar6->bChildGenerated = false;
                pFVar19 = local_88;
              }
              else {
                if (FVar16 == (ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
                              )0x0) {
                  FVar16 = (ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>)
                           pTVar1;
                }
                DestructItems<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,int>
                          ((TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *)FVar16,iVar3);
                (pFVar6->ChildNodes).ArrayNum = 0;
                pFVar6->bChildGenerated = false;
                pFVar19 = local_88;
              }
            }
          }
LAB_14d88ade4:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar18);
          if (((pFVar19->TreeWidget).Object ==
               (STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          (**(code **)(*(longlong *)(pFVar19->TreeWidget).Object + 0x248))();
          lVar17 = local_90;
          goto LAB_14d88ae2b;
        }
        pUVar15 = (UObject *)0x0;
        this_01 = Private::FTreeNode::GetField(local_80.Object);
        pFVar13 = FProperty::StaticClass();
        bVar9 = FFieldVariant::IsA((FFieldVariant *)this_01.Container,pFVar13);
        if (((bVar9) && (plVar5 = *(longlong **)this_01.Container, plVar5 != (longlong *)0x0)) &&
           ((*(uint *)(plVar5[1] + 0x18) >> 0x1a & 1) != 0)) {
          Private::FTreeNode::GetPropertyPath(pFVar6,&local_68);
          pvVar14 = FPropertyPath::GetContainerPtr(&local_68);
          if (pvVar14 != (void *)0x0) {
            pUVar15 = (UObject *)(**(code **)(*plVar5 + 0x208))(plVar5,pvVar14,0);
          }
          if (local_68.Properties.AllocatorInstance.SecondaryData !=
              (ForElementType<FProperty_const_*>)0x0) {
            FMemory::Free((void *)local_68.Properties.AllocatorInstance.SecondaryData);
          }
          lVar17 = local_90;
          pFVar19 = local_88;
          if (pUVar15 != pUVar12) goto LAB_14d88ad34;
        }
        else {
LAB_14d88ad34:
          pFVar19 = local_88;
          `UE::PropertyViewer::Private::FPropertyViewerImpl::Tick'::__l2::<lambda_1>::operator()
                    (local_98,&local_88->TreeWidget,&local_80);
          uVar10 = 0;
          if ((int)uVar21 < (this->NodeReferences).ArrayNum) {
            uVar10 = uVar20;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          TArray<UE::PropertyViewer::Private::FTreeNode::FNodeReference,TSizedDefaultAllocator<32>_>
          ::RemoveAtSwapImpl(this_00,uVar21);
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,&this_00->AllocatorInstance,(this->NodeReferences).ArrayNum,
                     &(this->NodeReferences).ArrayMax);
          lVar17 = local_90;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_80.SharedReferenceCount.ReferenceController);
      lVar17 = lVar17 + -0x18;
      uVar21 = uVar21 - 1;
    } while (-1 < (int)uVar21);
  }
  return;
}

