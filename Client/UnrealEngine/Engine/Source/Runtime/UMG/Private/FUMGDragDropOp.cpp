// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 12

// FUMGDragDropOp @ 146a55b00

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FUMGDragDropOp * __thiscall FUMGDragDropOp::FUMGDragDropOp(FUMGDragDropOp *this)

{
  FSlateApplicationBase *pFVar1;
  double dVar2;
  undefined8 local_res8;
  
  FGameDragDropOperation::FGameDragDropOperation((FGameDragDropOperation *)this);
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__FGameDragDropOperation__;
  (this->DragOperation).field0_0x0.DebugPtr = (UDragDropOperation *)0x0;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  (this->SourceUserWidget).Object = (SObjectWidget *)0x0;
  (this->SourceUserWidget).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->GameViewport).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->GameViewport).WeakPtr,(FObjectPtr)&local_res8);
  (this->DecoratorWidget).Object = (SWidget *)0x0;
  (this->DecoratorWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pFVar1 = FSlateApplicationBase::Get();
  dVar2 = (double)(**(code **)(*(longlong *)pFVar1 + 0x60))(pFVar1);
  this->StartTime = dVar2;
  return this;
}

// AddReferencedObjects @ 146a5d4c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FUMGDragDropOp::AddReferencedObjects(FUMGDragDropOp *this,FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146a5d4d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->_padding_,0,0);
  return;
}

// AffectedByPointerEvent @ 146a5de80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FUMGDragDropOp::AffectedByPointerEvent(FUMGDragDropOp *this,FPointerEvent *param_1)

{
  if (((this->DragOperation).field0_0x0.DebugPtr != (UDragDropOperation *)0x0) &&
     (param_1->PointerIndex == this->PointerIndex)) {
    return true;
  }
  return false;
}

// Construct @ 146a61f00

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FUMGDragDropOp::Construct(FUMGDragDropOp *this)

{
  return;
}

// GetDefaultDecorator @ 146a74780

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWidget,1> * __thiscall
FUMGDragDropOp::GetDefaultDecorator
          (FUMGDragDropOp *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->DecoratorWidget).Object;
  pTVar1 = (this->DecoratorWidget).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetReferencerName @ 146a78cc0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
FUMGDragDropOp::GetReferencerName(FUMGDragDropOp *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FUMGDragDropOp");
  return __return_storage_ptr__;
}

// GetTypeId @ 146a795d0

FString * __cdecl FUMGDragDropOp::GetTypeId(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FString_const&___ptr64___cdecl_FUMGDragDropOp::GetTypeId(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FString_const&___ptr64___cdecl_FUMGDragDropOp::GetTypeId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FString_const&___ptr64___cdecl_FUMGDragDropOp::GetTypeId(void)'::__l2
        ::_thread_safe_static_guard_0__ == -1) {
      ::FString::FString(&`public:_static_class_FString_const&___ptr64___cdecl_FUMGDragDropOp::GetTypeId(void)'
                          ::__l2::Type,L"FUMGDragDropOp");
      atexit(`FUMGDragDropOp::GetTypeId'::__l2::_dynamic_atexit_destructor_for__Type__);
      _Init_thread_footer(&`public:_static_class_FString_const&___ptr64___cdecl_FUMGDragDropOp::GetTypeId(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FString_const&___ptr64___cdecl_FUMGDragDropOp::GetTypeId(void)'
              ::__l2::Type;
    }
  }
  return &`public:_static_class_FString_const&___ptr64___cdecl_FUMGDragDropOp::GetTypeId(void)'::
          __l2::Type;
}

// IsOfTypeImpl @ 146a7c4a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FUMGDragDropOp::IsOfTypeImpl(FUMGDragDropOp *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  bool bVar4;
  
  pFVar3 = GetTypeId();
  iVar2 = (param_1->Data).ArrayNum;
  iVar1 = (pFVar3->Data).ArrayNum;
  if (iVar1 == iVar2) {
    if (iVar1 < 2) {
      return true;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                       (wchar_t *)(param_1->Data).AllocatorInstance.Data);
    bVar4 = iVar2 == 0;
  }
  else {
    bVar4 = iVar2 + iVar1 == 1;
  }
  if (!bVar4) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_class_FString_const&___ptr64___cdecl_FGameDragDropOperation::GetTypeId(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_FString_const&___ptr64___cdecl_FGameDragDropOperation::GetTypeId(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_FString_const&___ptr64___cdecl_FGameDragDropOperation::GetTypeId(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`public:_static_class_FString_const&___ptr64___cdecl_FGameDragDropOperation::GetTypeId(void)'
                          ::__l2::Type,L"FGameDragDropOperation");
      atexit(`FGameDragDropOperation::GetTypeId'::__l2::_dynamic_atexit_destructor_for__Type__);
      _Init_thread_footer(&`public:_static_class_FString_const&___ptr64___cdecl_FGameDragDropOperation::GetTypeId(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    iVar2 = (param_1->Data).ArrayNum;
    if (`public:_static_class_FString_const&___ptr64___cdecl_FGameDragDropOperation::GetTypeId(void)'
        ::__l2::Type.Data.ArrayNum == iVar2) {
      if (`public:_static_class_FString_const&___ptr64___cdecl_FGameDragDropOperation::GetTypeId(void)'
          ::__l2::Type.Data.ArrayNum < 2) {
        return true;
      }
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)
                         `public:_static_class_FString_const&___ptr64___cdecl_FGameDragDropOperation::GetTypeId(void)'
                         ::__l2::Type.Data.AllocatorInstance.Data,
                         (wchar_t *)(param_1->Data).AllocatorInstance.Data);
      bVar4 = iVar2 == 0;
    }
    else {
      bVar4 = `public:_static_class_FString_const&___ptr64___cdecl_FGameDragDropOperation::GetTypeId(void)'
              ::__l2::Type.Data.ArrayNum + iVar2 == 1;
    }
    if (!bVar4) {
      return false;
    }
  }
  return true;
}

// New @ 146a80b20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedRef<FUMGDragDropOp,1> * __cdecl
FUMGDragDropOp::New(TSharedRef<FUMGDragDropOp,1> *__return_storage_ptr__,UDragDropOperation *param_1
                   ,int param_2,TVector2<double> *param_3,TVector2<double> *param_4,float param_5,
                   TSharedPtr<SObjectWidget,1> *param_6)

{
  atomic<int> *paVar1;
  byte *pbVar2;
  atomic<int> aVar3;
  double dVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  UWidget *this;
  code *pcVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  FSharedReferencer<1> FVar12;
  SDPIScaler *pSVar13;
  FSharedReferencer<1> FVar14;
  bool bVar15;
  char cVar16;
  byte bVar17;
  TSharedRef<FUMGDragDropOp,1> *pTVar18;
  FUMGDragDropOp *pFVar19;
  FSlateApplicationBase *pFVar20;
  UWorld *this_00;
  FArguments *pFVar21;
  FText *pFVar22;
  TSharedRef<SWidget,1> *pTVar23;
  FArguments *pFVar24;
  TSharedPtr<SWidget,1> *pTVar25;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  T0RequiredArgs local_res18 [8];
  FLLMScope local_res20 [2];
  STextBlock *local_8f8;
  FSharedReferencer<1> local_8f0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_8e8;
  TSlateDecl<SDPIScaler,RequiredArgs::T0RequiredArgs> local_8d0;
  SDPIScaler *local_8b8;
  FSharedReferencer<1> local_8b0;
  float local_8a8;
  undefined1 local_8a4;
  undefined1 local_8a0 [8];
  void *pvStack_898;
  undefined8 local_890;
  FText local_888;
  bool local_878;
  undefined1 local_870 [8];
  void *pvStack_868;
  undefined8 local_860;
  undefined8 local_858;
  TRawPtrProxy<FUMGDragDropOp> local_850;
  UGameViewportClient *local_848;
  FName local_840;
  FMemScope local_838;
  FName local_830;
  FMemScope local_828;
  undefined8 local_820;
  FSharedReferencer<1> local_818;
  undefined8 local_810;
  FSharedReferencer<1> local_808;
  FText local_800;
  TSharedRef<SWidget,1> local_7f0;
  SWidget *local_7e0;
  TReferenceControllerBase<1> *pTStack_7d8;
  undefined1 local_7d0 [512];
  undefined1 local_5d0 [32];
  FSharedReferencer<1> local_5b0;
  FArguments local_5a8;
  
  if (param_1 == (UDragDropOperation *)0x0) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("InOperation",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Slate\\UMGDragDropOp.cpp"
                        ,0xac,L"");
    if (bVar15) {
      pcVar7 = (code *)swi(3);
      pTVar18 = (TSharedRef<FUMGDragDropOp,1> *)(*pcVar7)();
      return pTVar18;
    }
  }
  if (param_6->Object == (SObjectWidget *)0x0) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("SourceUserWidget",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Slate\\UMGDragDropOp.cpp"
                        ,0xad,L"");
    if (bVar15) {
      pcVar7 = (code *)swi(3);
      pTVar18 = (TSharedRef<FUMGDragDropOp,1> *)(*pcVar7)();
      return pTVar18;
    }
  }
  pFVar19 = ::operator_new(0xc0);
  if (pFVar19 == (FUMGDragDropOp *)0x0) {
    pFVar19 = (FUMGDragDropOp *)0x0;
  }
  else {
    FGameDragDropOperation::FGameDragDropOperation((FGameDragDropOperation *)pFVar19);
    *(undefined2 *)&pFVar19->_padding_ = 0;
    pFVar19->_padding_ = (longlong)&___7FGCObject__6B_;
    FGCObject::RegisterGCObject((FGCObject *)&pFVar19->_padding_);
    pFVar19->_padding_ = (longlong)&_vftable__for__FGameDragDropOperation__;
    (pFVar19->DragOperation).field0_0x0.DebugPtr = (UDragDropOperation *)0x0;
    pFVar19->_padding_ = (longlong)&_vftable__for__FGCObject__;
    (pFVar19->SourceUserWidget).Object = (SObjectWidget *)0x0;
    (pFVar19->SourceUserWidget).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (pFVar19->GameViewport).WeakPtr = (FWeakObjectPtr)0x0;
    local_858 = 0;
    FWeakObjectPtr::operator=(&(pFVar19->GameViewport).WeakPtr,(FObjectPtr)&local_858);
    (pFVar19->DecoratorWidget).Object = (SWidget *)0x0;
    (pFVar19->DecoratorWidget).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar20 = FSlateApplicationBase::Get();
    dVar8 = (double)(**(code **)(*(longlong *)pFVar20 + 0x60))(pFVar20);
    pFVar19->StartTime = dVar8;
    if (((pFVar19->_padding_ != 0) && (pFVar19->_padding_ != 0)) &&
       (0 < *(int *)(pFVar19->_padding_ + 8))) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("!InObject || !InObject->DoesSharedInstanceExist()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x7a5,L"Trying to share an already-shared object");
      if (bVar15) {
        pcVar7 = (code *)swi(3);
        pTVar18 = (TSharedRef<FUMGDragDropOp,1> *)(*pcVar7)();
        return pTVar18;
      }
    }
  }
  local_850.Object = pFVar19;
  TSharedRef<FUMGDragDropOp,1>::TSharedRef<FUMGDragDropOp,1><FUMGDragDropOp>
            (__return_storage_ptr__,&local_850);
  __return_storage_ptr__->Object->PointerIndex = param_2;
  dVar8 = (param_4->field0_0x0)._s_0.Y;
  pFVar19 = __return_storage_ptr__->Object;
  dVar4 = (param_3->field0_0x0)._s_0.Y;
  (pFVar19->MouseDownOffset).field0_0x0._s_0.X =
       (param_4->field0_0x0)._s_0.X - (param_3->field0_0x0)._s_0.X;
  (pFVar19->MouseDownOffset).field0_0x0._s_0.Y = dVar8 - dVar4;
  pFVar19 = __return_storage_ptr__->Object;
  uVar9 = *(undefined4 *)((longlong)&param_4->field0_0x0 + 4);
  uVar10 = *(undefined4 *)((longlong)&param_4->field0_0x0 + 8);
  uVar11 = *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc);
  *(undefined4 *)&(pFVar19->StartingScreenPos).field0_0x0 = *(undefined4 *)&param_4->field0_0x0;
  *(undefined4 *)((longlong)&(pFVar19->StartingScreenPos).field0_0x0 + 4) = uVar9;
  *(undefined4 *)((longlong)&(pFVar19->StartingScreenPos).field0_0x0 + 8) = uVar10;
  *(undefined4 *)((longlong)&(pFVar19->StartingScreenPos).field0_0x0 + 0xc) = uVar11;
  pFVar19 = __return_storage_ptr__->Object;
  (pFVar19->SourceUserWidget).Object = param_6->Object;
  pTVar5 = (param_6->SharedReferenceCount).ReferenceController;
  if (pTVar5 != (pFVar19->SourceUserWidget).WeakReferenceCount.ReferenceController) {
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = (pFVar19->SourceUserWidget).WeakReferenceCount.ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar6->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
      }
    }
    (pFVar19->SourceUserWidget).WeakReferenceCount.ReferenceController = pTVar5;
  }
  if (param_6->Object == (SObjectWidget *)0x0) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar15) {
      pcVar7 = (code *)swi(3);
      pTVar18 = (TSharedRef<FUMGDragDropOp,1> *)(*pcVar7)();
      return pTVar18;
    }
  }
  this_00 = (UWorld *)
            (**(code **)(((param_6->Object->WidgetObject).field0_0x0.DebugPtr)->_padding_ + 0x180))
                      ();
  local_848 = UWorld::GetGameViewport(this_00);
  pFVar19 = __return_storage_ptr__->Object;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_848 != (UGameViewportClient *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_848);
  }
  FWeakObjectPtr::operator=(&(pFVar19->GameViewport).WeakPtr,(FObjectPtr)&local_848);
  pFVar19 = __return_storage_ptr__->Object;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDragDropOperation *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (pFVar19->DragOperation).field0_0x0.DebugPtr = param_1;
  this = (param_1->DefaultDragVisual).field0_0x0.DebugPtr;
  local_8f0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (this == (UWidget *)0x0) {
    pFVar21 = STextBlock::FArguments::FArguments(&local_5a8);
    pFVar22 = FText::FromString(&local_800,&param_1->Tag);
    FText::FText(&local_888,pFVar22);
    local_878 = true;
    local_860 = 0;
    local_870 = (undefined1  [8])0x0;
    pvStack_868 = (void *)0x0;
    FText::operator=(&(pFVar21->_Text).Value,&local_888);
    (pFVar21->_Text).bIsSet = local_878;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar21->_Text).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_870);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_870);
    if (pvStack_868 != (void *)0x0) {
      FMemory::Free(pvStack_868);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_870);
    if (local_888.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_888.TextData.Reference + 0x10))();
    }
    FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_840 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_838,&local_840,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_8e8,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Slate\\UMGDragDropOp.cpp"
               ,0xba,local_res18);
    FMemScope::~FMemScope(&local_838);
    FLLMScope::~FLLMScope(local_res10);
    local_8f8 = local_8e8._Widget.Object;
    if (local_8e8._Widget.Object == (STextBlock *)0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar15) {
        pcVar7 = (code *)swi(3);
        pTVar18 = (TSharedRef<FUMGDragDropOp,1> *)(*pcVar7)();
        return pTVar18;
      }
    }
    SWidget::SWidgetConstruct((SWidget *)local_8e8._Widget.Object,(FSlateBaseNamedArgs *)pFVar21);
    STextBlock::Construct(local_8e8._Widget.Object,pFVar21);
    if (local_8e8._Widget.Object == (STextBlock *)0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar15) {
        pcVar7 = (code *)swi(3);
        pTVar18 = (TSharedRef<FUMGDragDropOp,1> *)(*pcVar7)();
        return pTVar18;
      }
    }
    if (((local_8e8._Widget.Object)->_padding_ & 0x10) == 0) {
      cVar16 = (**(code **)((local_8e8._Widget.Object)->_padding_ + 0x228))
                         (local_8e8._Widget.Object);
      bVar17 = 0;
      if (cVar16 != '\0') goto LAB_146a80f6b;
    }
    else {
LAB_146a80f6b:
      bVar17 = 0x20;
    }
    *(byte *)&(local_8e8._Widget.Object)->_padding_ =
         (byte)(local_8e8._Widget.Object)->_padding_ & 0xdf;
    *(byte *)&(local_8e8._Widget.Object)->_padding_ =
         (byte)(local_8e8._Widget.Object)->_padding_ | bVar17;
    if (local_8e8._Widget.Object == (STextBlock *)0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar15) {
        pcVar7 = (code *)swi(3);
        pTVar18 = (TSharedRef<FUMGDragDropOp,1> *)(*pcVar7)();
        return pTVar18;
      }
    }
    pbVar2 = (byte *)((longlong)&(local_8e8._Widget.Object)->_padding_ + 1);
    *pbVar2 = *pbVar2 | 4;
    if (local_8e8._Widget.Object == (STextBlock *)0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L"");
      if (bVar15) {
        pcVar7 = (code *)swi(3);
        pTVar18 = (TSharedRef<FUMGDragDropOp,1> *)(*pcVar7)();
        return pTVar18;
      }
    }
    FVar12.ReferenceController = local_8e8._Widget.SharedReferenceCount.ReferenceController;
    local_8e8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_8e8._Widget.Object = (STextBlock *)0x0;
    if (local_8f8 == (STextBlock *)0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L"");
      if (bVar15) {
        pcVar7 = (code *)swi(3);
        pTVar18 = (TSharedRef<FUMGDragDropOp,1> *)(*pcVar7)();
        return pTVar18;
      }
    }
    local_818.ReferenceController = FVar12.ReferenceController;
    if (FVar12.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar12.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_820 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_8f0,&local_818);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_818.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar12.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (local_800.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_800.TextData.Reference + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_5a8);
  }
  else {
    pTVar23 = UWidget::TakeWidget(this,&local_7f0);
    local_808.ReferenceController = (pTVar23->SharedReferenceCount).ReferenceController;
    local_8f8 = (STextBlock *)pTVar23->Object;
    if (local_808.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_808.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_808.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_810 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_8f0,&local_808);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_808.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7f0.SharedReferenceCount.ReferenceController);
  }
  pFVar24 = SDPIScaler::FArguments::FArguments((FArguments *)local_7d0);
  local_8a4 = 1;
  local_8a8 = param_5;
  local_890 = 0;
  local_8a0 = (undefined1  [8])0x0;
  pvStack_898 = (void *)0x0;
  (pFVar24->_DPIScale).Value = param_5;
  (pFVar24->_DPIScale).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar24->_DPIScale).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_8a0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_8a0);
  if (pvStack_898 != (void *)0x0) {
    FMemory::Free(pvStack_898);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_8a0);
  if (local_8f8 == (STextBlock *)0x0) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x408,L"");
    if (bVar15) {
      pcVar7 = (code *)swi(3);
      pTVar18 = (TSharedRef<FUMGDragDropOp,1> *)(*pcVar7)();
      return pTVar18;
    }
  }
  FVar12.ReferenceController = local_8f0.ReferenceController;
  if (local_8f0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_8f0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_8f0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_8f8 == (STextBlock *)0x0) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x25d,L"");
    if (bVar15) {
      pcVar7 = (code *)swi(3);
      pTVar18 = (TSharedRef<FUMGDragDropOp,1> *)(*pcVar7)();
      return pTVar18;
    }
  }
  if (FVar12.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar12.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_7e0 = (pFVar24->_Content).Widget.Object;
  pTStack_7d8 = (pFVar24->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar24->_Content).Widget.Object = (SWidget *)local_8f8;
  (pFVar24->_Content).Widget.SharedReferenceCount.ReferenceController = FVar12.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_7d8);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_830 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_828,&local_830,true);
  TSlateDecl<SDPIScaler,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SDPIScaler,RequiredArgs::T0RequiredArgs>
            (&local_8d0,"SDPIScaler",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Slate\\UMGDragDropOp.cpp"
             ,0xc4,local_res8);
  FMemScope::~FMemScope(&local_828);
  FLLMScope::~FLLMScope(local_res20);
  pSVar13 = local_8d0._Widget.Object;
  if (local_8d0._Widget.Object == (SDPIScaler *)0x0) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar15) {
      pcVar7 = (code *)swi(3);
      pTVar18 = (TSharedRef<FUMGDragDropOp,1> *)(*pcVar7)();
      return pTVar18;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_8d0._Widget.Object,(FSlateBaseNamedArgs *)pFVar24);
  SDPIScaler::Construct(local_8d0._Widget.Object,pFVar24);
  if (local_8d0._Widget.Object == (SDPIScaler *)0x0) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar15) {
      pcVar7 = (code *)swi(3);
      pTVar18 = (TSharedRef<FUMGDragDropOp,1> *)(*pcVar7)();
      return pTVar18;
    }
  }
  if (((local_8d0._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar16 = (**(code **)((local_8d0._Widget.Object)->_padding_ + 0x228))(local_8d0._Widget.Object);
    bVar17 = 0;
    if (cVar16 == '\0') goto LAB_146a812d5;
  }
  bVar17 = 0x20;
LAB_146a812d5:
  *(byte *)&(local_8d0._Widget.Object)->_padding_ =
       (byte)(local_8d0._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_8d0._Widget.Object)->_padding_ =
       (byte)(local_8d0._Widget.Object)->_padding_ | bVar17;
  if (local_8d0._Widget.Object == (SDPIScaler *)0x0) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar15) {
      pcVar7 = (code *)swi(3);
      pTVar18 = (TSharedRef<FUMGDragDropOp,1> *)(*pcVar7)();
      return pTVar18;
    }
  }
  pbVar2 = (byte *)((longlong)&(local_8d0._Widget.Object)->_padding_ + 1);
  *pbVar2 = *pbVar2 | 4;
  if (local_8d0._Widget.Object == (SDPIScaler *)0x0) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar15) {
      pcVar7 = (code *)swi(3);
      pTVar18 = (TSharedRef<FUMGDragDropOp,1> *)(*pcVar7)();
      return pTVar18;
    }
  }
  FVar14.ReferenceController = local_8d0._Widget.SharedReferenceCount.ReferenceController;
  local_8d0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_8d0._Widget.Object = (SDPIScaler *)0x0;
  if (pSVar13 == (SDPIScaler *)0x0) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar15) {
      pcVar7 = (code *)swi(3);
      pTVar18 = (TSharedRef<FUMGDragDropOp,1> *)(*pcVar7)();
      return pTVar18;
    }
  }
  local_8b8 = pSVar13;
  local_8b0.ReferenceController = FVar14.ReferenceController;
  if (FVar14.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar14.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar19 = __return_storage_ptr__->Object;
  pTVar25 = &pFVar19->DecoratorWidget;
  if (pTVar25 != (TSharedPtr<SWidget,1> *)&local_8b8) {
    pTVar25->Object = (SWidget *)pSVar13;
    local_8b8 = (SDPIScaler *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar19->DecoratorWidget).SharedReferenceCount,&local_8b0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8b0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar14.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5b0.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_5d0);
  if ((void *)local_5d0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_5d0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5d0);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_7d0);
  pFVar19 = __return_storage_ptr__->Object;
  if ((pFVar19->DecoratorWidget).Object == (SWidget *)0x0) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar15) {
      pcVar7 = (code *)swi(3);
      pTVar18 = (TSharedRef<FUMGDragDropOp,1> *)(*pcVar7)();
      return pTVar18;
    }
  }
  SWidget::SlatePrepass((pFVar19->DecoratorWidget).Object);
  (**(code **)(__return_storage_ptr__->Object->_padding_ + 0x58))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8f0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_6->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// OnCursorQuery @ 146a81e20

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FCursorReply * __thiscall
FUMGDragDropOp::OnCursorQuery(FUMGDragDropOp *this,FCursorReply *__return_storage_ptr__)

{
  SWindow *pSVar1;
  SObjectWidget *pSVar2;
  UUserWidget *this_00;
  code *pcVar3;
  atomic<int> aVar4;
  int iVar5;
  SWidget *pSVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  int iVar9;
  atomic<int> aVar10;
  UObject *pUVar11;
  FCursorReply *pFVar12;
  SWindow *pSVar13;
  SWindow *pSVar14;
  SWindow *pSVar15;
  SWidget *local_d8;
  TReferenceControllerBase<1> *local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  FSharedReferencer<1> FStack_b8;
  SWindow *local_b0;
  FSharedReferencer<1> FStack_a8;
  SWidget *local_a0;
  FSharedReferencer<1> FStack_98;
  Type local_90;
  undefined1 local_88;
  undefined8 local_80;
  FSharedReferencer<1> FStack_78;
  SWindow *local_70;
  FSharedReferencer<1> FStack_68;
  SWidget *local_60;
  FSharedReferencer<1> FStack_58;
  Type local_50;
  SWindow *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  SWidget *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  
  FDragDropOperation::OnCursorQuery((FDragDropOperation *)this,__return_storage_ptr__);
  pSVar15 = (SWindow *)0x0;
  if ((char)__return_storage_ptr__->_padding_ == '\0') {
    local_c8 = 1;
    local_90 = Default;
    *(undefined1 *)&__return_storage_ptr__->_padding_ = 1;
    local_c0 = 0;
    FStack_b8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_b0 = (SWindow *)0x0;
    FStack_a8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_a0 = (SWidget *)0x0;
    FStack_98.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&__return_storage_ptr__->_padding_ != &local_c0) {
      __return_storage_ptr__->_padding_ = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&__return_storage_ptr__->_padding_,&FStack_b8);
    }
    if (&__return_storage_ptr__->CursorWindow != (TSharedPtr<SWindow,1> *)&local_b0) {
      (__return_storage_ptr__->CursorWindow).Object = local_b0;
      local_b0 = (SWindow *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(__return_storage_ptr__->CursorWindow).SharedReferenceCount,&FStack_a8);
    }
    if (&__return_storage_ptr__->CursorWidget != (TSharedPtr<SWidget,1> *)&local_a0) {
      (__return_storage_ptr__->CursorWidget).Object = local_a0;
      local_a0 = (SWidget *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(__return_storage_ptr__->CursorWidget).SharedReferenceCount,&FStack_98);
    }
    __return_storage_ptr__->MouseCursor = local_90;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_98.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_a8.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_b8.ReferenceController);
  }
  pUVar11 = FWeakObjectPtr::Get(&(this->GameViewport).WeakPtr);
  if (pUVar11 != (UObject *)0x0) {
    (**(code **)(*(longlong *)&pUVar11[1].field_0x8 + 0xd0))
              (&pUVar11[1].field_0x8,&local_d8,0,__return_storage_ptr__);
    if (local_d8 != (SWidget *)0x0) {
      if ((local_d8 == (SWidget *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        pFVar12 = (FCursorReply *)(*pcVar3)();
        return pFVar12;
      }
      pTVar7 = local_d0;
      pSVar6 = local_d8;
      if (local_d0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_d0->SharedReferenceCount = (atomic<int>)((int)local_d0->SharedReferenceCount + 1);
        UNLOCK();
      }
      pSVar1 = *(SWindow **)&pUVar11[8].field_0x8;
      pSVar13 = pSVar15;
      pSVar14 = pSVar1;
      if (pSVar1 != (SWindow *)0x0) {
        iVar5 = (int)pSVar1->_padding_;
        do {
          pSVar14 = pSVar15;
          if (iVar5 == 0) goto LAB_146a81fc5;
          LOCK();
          iVar9 = (int)pSVar1->_padding_;
          bVar8 = iVar5 == iVar9;
          if (bVar8) {
            *(int *)&pSVar1->_padding_ = iVar5 + 1;
            iVar9 = iVar5;
          }
          UNLOCK();
          iVar5 = iVar9;
        } while (!bVar8);
        pSVar13 = *(SWindow **)(pUVar11 + 8);
        LOCK();
        *(int *)&pSVar1->_padding_ = (int)pSVar1->_padding_ + 1;
        UNLOCK();
        pSVar14 = pSVar1;
      }
LAB_146a81fc5:
      local_48 = (__return_storage_ptr__->CursorWindow).Object;
      pTStack_40 = (__return_storage_ptr__->CursorWindow).SharedReferenceCount.ReferenceController;
      (__return_storage_ptr__->CursorWindow).Object = pSVar13;
      (__return_storage_ptr__->CursorWindow).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)pSVar14;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_40);
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_38 = (__return_storage_ptr__->CursorWidget).Object;
      pTStack_30 = (__return_storage_ptr__->CursorWidget).SharedReferenceCount.ReferenceController;
      (__return_storage_ptr__->CursorWidget).Object = pSVar6;
      (__return_storage_ptr__->CursorWidget).SharedReferenceCount.ReferenceController = pTVar7;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_30);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar14);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      if (local_d8 != (SWidget *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d0);
      }
    }
  }
  pSVar1 = (SWindow *)(this->SourceUserWidget).WeakReferenceCount.ReferenceController;
  pSVar13 = pSVar1;
  if (pSVar1 != (SWindow *)0x0) {
    aVar4 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar13 = pSVar15;
      if (aVar4 == (atomic<int>)0x0) goto LAB_146a82061;
      LOCK();
      aVar10 = *(atomic<int> *)&pSVar1->_padding_;
      bVar8 = aVar4 == aVar10;
      if (bVar8) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar4 + 1);
        aVar10 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar10;
    } while (!bVar8);
    pSVar2 = (this->SourceUserWidget).Object;
    pSVar13 = pSVar1;
    if (((pSVar2 != (SObjectWidget *)0x0) &&
        (this_00 = (pSVar2->WidgetObject).field0_0x0.DebugPtr, this_00 != (UUserWidget *)0x0)) &&
       (ZPULL(*(undefined1 *)((longlong)&this_00->_padding_ + 1),3,1) != '\0')) {
      local_88 = 1;
      local_80 = 0;
      FStack_78.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_70 = (SWindow *)0x0;
      FStack_68.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_60 = (SWidget *)0x0;
      FStack_58.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_50 = UWidget::GetCursor((UWidget *)this_00);
      *(undefined1 *)&__return_storage_ptr__->_padding_ = 1;
      if (&__return_storage_ptr__->_padding_ != &local_80) {
        __return_storage_ptr__->_padding_ = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)&__return_storage_ptr__->_padding_,&FStack_78);
      }
      if (&__return_storage_ptr__->CursorWindow != (TSharedPtr<SWindow,1> *)&local_70) {
        (__return_storage_ptr__->CursorWindow).Object = local_70;
        local_70 = (SWindow *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(__return_storage_ptr__->CursorWindow).SharedReferenceCount,&FStack_68);
      }
      if (&__return_storage_ptr__->CursorWidget != (TSharedPtr<SWidget,1> *)&local_60) {
        (__return_storage_ptr__->CursorWidget).Object = local_60;
        local_60 = (SWidget *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(__return_storage_ptr__->CursorWidget).SharedReferenceCount,&FStack_58);
      }
      __return_storage_ptr__->MouseCursor = local_50;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_58.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_68.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_78.ReferenceController);
    }
  }
LAB_146a82061:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar13);
  return __return_storage_ptr__;
}

// OnDragged @ 146a82bc0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FUMGDragDropOp::OnDragged(FUMGDragDropOp *this,FDragDropEvent *param_1)

{
  double dVar1;
  UDragDropOperation *pUVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  bool bVar7;
  UFunction *this_00;
  UClass *pUVar8;
  FDeprecateSlateVector2D FVar9;
  FSlateApplicationBase *pFVar10;
  double dVar11;
  double dVar12;
  FPointerEvent local_a8;
  
  pUVar2 = (this->DragOperation).field0_0x0.DebugPtr;
  if (pUVar2 == (UDragDropOperation *)0x0) {
    return;
  }
  if ((int)param_1->_padding_ != this->PointerIndex) {
    return;
  }
  this_00 = UObject::FindFunctionChecked((UObject *)pUVar2,NAME_UDragDropOperation_Dragged);
  pUVar8 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar8->ClassFlags & CLASS_Native) == CLASS_None) {
    FPointerEvent::FPointerEvent(&local_a8);
    FPointerEvent::operator=(&local_a8,(FPointerEvent *)param_1);
    (**(code **)(pUVar2->_padding_ + 0x260))(pUVar2,this_00,&local_a8);
    FPointerEvent::~FPointerEvent(&local_a8);
  }
  else {
    (**(code **)(pUVar2->_padding_ + 0x2b0))(pUVar2,param_1);
  }
  if (((this->DecoratorWidget).Object == (SWidget *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FVar9 = SWidget::GetDesiredSize((this->DecoratorWidget).Object);
  pUVar2 = (this->DragOperation).field0_0x0.DebugPtr;
  dVar12 = (double)*(float *)FVar9;
  dVar11 = (double)*(float *)((longlong)FVar9 + 4);
  dVar5 = dVar12 * (pUVar2->Offset).field0_0x0._s_0.X + (double)*(float *)&param_1->_padding_;
  dVar6 = dVar11 * (pUVar2->Offset).field0_0x0._s_0.Y +
          (double)*(float *)((longlong)&param_1->_padding_ + 4);
  switch(pUVar2->Pivot) {
  case MouseDown:
    dVar5 = dVar5 + (this->MouseDownOffset).field0_0x0._s_0.X;
    dVar6 = dVar6 + (this->MouseDownOffset).field0_0x0._s_0.Y;
  default:
    goto switchD_146a82d10_caseD_1;
  case TopCenter:
    dVar12 = dVar12 * __real_3fe0000000000000;
  case TopRight:
    goto switchD_146a82d10_caseD_3;
  case CenterLeft:
    dVar11 = dVar11 * __real_3fe0000000000000;
  case BottomLeft:
    dVar6 = dVar6 - dVar11;
    goto switchD_146a82d10_caseD_1;
  case CenterCenter:
    dVar12 = dVar12 * __real_3fe0000000000000;
  case CenterRight:
    dVar11 = dVar11 * __real_3fe0000000000000;
    break;
  case BottomCenter:
    dVar12 = dVar12 * __real_3fe0000000000000;
    break;
  case BottomRight:
    break;
  }
  dVar6 = dVar6 - dVar11;
switchD_146a82d10_caseD_3:
  dVar5 = dVar5 - dVar12;
switchD_146a82d10_caseD_1:
  pFVar10 = FSlateApplicationBase::Get();
  dVar11 = (double)(**(code **)(*(longlong *)pFVar10 + 0x60))(pFVar10);
  dVar11 = dVar11 - this->StartTime;
  if (___real_3fc3333333333333 <= dVar11) {
    auVar4._8_4_ = SUB84(dVar6,0);
    auVar4._0_8_ = dVar5;
    auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    this->_padding_ = (longlong)dVar5;
    this->_padding_ = auVar4._8_8_;
  }
  else {
    dVar12 = (this->StartingScreenPos).field0_0x0._s_0.X;
    dVar1 = (this->StartingScreenPos).field0_0x0._s_0.Y;
    dVar11 = dVar11 * ___real_401aaaaaaaaaaaab;
    this->_padding_ = (longlong)((dVar5 - dVar12) * dVar11 + dVar12);
    this->_padding_ = (longlong)((dVar6 - dVar1) * dVar11 + dVar1);
  }
  return;
}

// OnDrop @ 146a82e20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FUMGDragDropOp::OnDrop(FUMGDragDropOp *this,bool param_1,FPointerEvent *param_2)

{
  SObjectWidget *pSVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDragDropOperation *pFVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  UFunction *this_00;
  UClass *pUVar7;
  TSharedRef<FDragDropOperation,1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  UDragDropOperation *pUVar10;
  bool bVar11;
  FPointerEvent local_c8;
  FDragDropOperation *local_48;
  TReferenceControllerBase<1> *local_40;
  TSharedRef<FDragDropOperation,1> local_38;
  
  pUVar10 = (this->DragOperation).field0_0x0.DebugPtr;
  if (pUVar10 != (UDragDropOperation *)0x0) {
    if ((param_1) && (param_2->PointerIndex == this->PointerIndex)) {
      this_00 = UObject::FindFunctionChecked((UObject *)pUVar10,NAME_UDragDropOperation_Drop);
      pUVar7 = UField::GetOwnerClass((UField *)this_00);
      if ((pUVar7->ClassFlags & CLASS_Native) != CLASS_None) {
        (**(code **)(pUVar10->_padding_ + 0x2c0))(pUVar10,param_2);
        goto LAB_146a83044;
      }
    }
    else {
      pTVar9 = (this->SourceUserWidget).WeakReferenceCount.ReferenceController;
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        aVar5 = pTVar9->SharedReferenceCount;
        do {
          if (aVar5 == (atomic<int>)0x0) {
            pTVar9 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_146a82fc4;
          }
          LOCK();
          aVar6 = pTVar9->SharedReferenceCount;
          bVar11 = aVar5 == aVar6;
          if (bVar11) {
            pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
            aVar6 = aVar5;
          }
          UNLOCK();
          aVar5 = aVar6;
        } while (!bVar11);
        pSVar1 = (this->SourceUserWidget).Object;
        pUVar10 = (this->DragOperation).field0_0x0.DebugPtr;
        if (pSVar1 != (SObjectWidget *)0x0) {
          pcVar2 = *(code **)(pSVar1->_padding_ + 0x248);
          pTVar8 = TSharedFromThis<FDragDropOperation,1>::AsShared
                             ((TSharedFromThis<FDragDropOperation,1> *)&this->_padding_,&local_38);
          pTVar3 = (pTVar8->SharedReferenceCount).ReferenceController;
          pFVar4 = pTVar8->Object;
          if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
            FPointerEvent::FPointerEvent(&local_c8,param_2);
          }
          else {
            LOCK();
            pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
            UNLOCK();
            FPointerEvent::FPointerEvent(&local_c8,param_2);
            LOCK();
            pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_c8._padding_ = (longlong)&___7FDragDropEvent__6B_;
          local_48 = pFVar4;
          local_40 = pTVar3;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar3);
          (*pcVar2)(pSVar1,&local_c8,pUVar10);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_40);
          FPointerEvent::~FPointerEvent(&local_c8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_38.SharedReferenceCount.ReferenceController);
        }
      }
LAB_146a82fc4:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      pUVar10 = (this->DragOperation).field0_0x0.DebugPtr;
      this_00 = UObject::FindFunctionChecked
                          ((UObject *)pUVar10,NAME_UDragDropOperation_DragCancelled);
      pUVar7 = UField::GetOwnerClass((UField *)this_00);
      if ((pUVar7->ClassFlags & CLASS_Native) != CLASS_None) {
        (**(code **)(pUVar10->_padding_ + 0x2b8))(pUVar10,param_2);
        goto LAB_146a83044;
      }
    }
    FPointerEvent::FPointerEvent(&local_c8);
    FPointerEvent::operator=(&local_c8,param_2);
    (**(code **)(pUVar10->_padding_ + 0x260))(pUVar10,this_00,&local_c8);
    FPointerEvent::~FPointerEvent(&local_c8);
  }
LAB_146a83044:
  FDragDropOperation::OnDrop((FDragDropOperation *)this,param_1,param_2);
  return;
}

