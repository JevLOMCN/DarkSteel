// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 21

// StaticClass @ 1468d9420

UClass * __cdecl UUMGSequenceTickManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUMGSequenceTickManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"UMGSequenceTickManager",
               &Z_Registration_Info_UClass_UUMGSequenceTickManager.InnerSingleton,
               StaticRegisterNativesUUMGSequenceTickManager,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UUMGSequenceTickManager>,
               InternalVTableHelperCtorCaller<UUMGSequenceTickManager>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUMGSequenceTickManager.InnerSingleton;
}

// UUMGSequenceTickManager @ 1469022d0

/* WARNING: Enum "Type": Some values do not have unique names */

UUMGSequenceTickManager * __thiscall
UUMGSequenceTickManager::UUMGSequenceTickManager
          (UUMGSequenceTickManager *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UUMGSequenceTickManager__6B_;
  *(undefined8 *)&this->WeakUserWidgetData = 0;
  *(undefined8 *)&(this->WeakUserWidgetData).field_0x8 = 0;
  *(undefined8 *)&(this->WeakUserWidgetData).field_0x20 = 0;
  *(undefined4 *)&(this->WeakUserWidgetData).field_0x28 = 0;
  *(undefined4 *)&(this->WeakUserWidgetData).field_0x2c = 0x80;
  *(undefined4 *)&(this->WeakUserWidgetData).field_0x34 = 0;
  *(undefined4 *)&(this->WeakUserWidgetData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->WeakUserWidgetData).field_0x40 = 0;
  *(undefined4 *)&(this->WeakUserWidgetData).field_0x48 = 0;
  (this->PendingUserWidgets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingUserWidgets).ArrayNum = 0;
  (this->PendingUserWidgets).ArrayMax = 0;
  (this->Linker).field0_0x0.DebugPtr = (UMovieSceneEntitySystemLinker *)0x0;
  (this->Runner).Object = (FMovieSceneEntitySystemRunner *)0x0;
  (this->Runner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->SlateApplicationPreTickHandle).ID = 0;
  (this->SlateApplicationPostTickHandle).ID = 0;
  (this->LatentActionManager).LatentActions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LatentActionManager).LatentActions.ArrayNum = 0;
  (this->LatentActionManager).LatentActions.ArrayMax = 0;
  (this->LatentActionManager).bIsRunningLatentActions = false;
  this->TickTimeSeconds = 0.0;
  return this;
}

// UUMGSequenceTickManager @ 146902370

/* WARNING: Enum "Type": Some values do not have unique names */

UUMGSequenceTickManager * __thiscall
UUMGSequenceTickManager::UUMGSequenceTickManager
          (UUMGSequenceTickManager *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UUMGSequenceTickManager__6B_;
  *(undefined8 *)&this->WeakUserWidgetData = 0;
  *(undefined8 *)&(this->WeakUserWidgetData).field_0x8 = 0;
  *(undefined8 *)&(this->WeakUserWidgetData).field_0x20 = 0;
  *(undefined4 *)&(this->WeakUserWidgetData).field_0x28 = 0;
  *(undefined4 *)&(this->WeakUserWidgetData).field_0x2c = 0x80;
  *(undefined4 *)&(this->WeakUserWidgetData).field_0x34 = 0;
  *(undefined4 *)&(this->WeakUserWidgetData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->WeakUserWidgetData).field_0x40 = 0;
  *(undefined4 *)&(this->WeakUserWidgetData).field_0x48 = 0;
  (this->PendingUserWidgets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingUserWidgets).ArrayNum = 0;
  (this->PendingUserWidgets).ArrayMax = 0;
  (this->Linker).field0_0x0.DebugPtr = (UMovieSceneEntitySystemLinker *)0x0;
  (this->Runner).Object = (FMovieSceneEntitySystemRunner *)0x0;
  (this->Runner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->SlateApplicationPreTickHandle).ID = 0;
  (this->SlateApplicationPostTickHandle).ID = 0;
  (this->LatentActionManager).LatentActions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LatentActionManager).LatentActions.ArrayNum = 0;
  (this->LatentActionManager).LatentActions.ArrayMax = 0;
  (this->LatentActionManager).bIsRunningLatentActions = false;
  this->bIsTicking = false;
  this->TickTimeSeconds = 0.0;
  return this;
}

// ~UUMGSequenceTickManager @ 146904df0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UUMGSequenceTickManager::~UUMGSequenceTickManager(UUMGSequenceTickManager *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UUMGSequenceTickManager__6B_;
  DestructItems<TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,int>
            ((TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
             (this->LatentActionManager).LatentActions.AllocatorInstance.Data,
             (this->LatentActionManager).LatentActions.ArrayNum);
  pFVar1 = (this->LatentActionManager).LatentActions.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Runner).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->PendingUserWidgets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->WeakUserWidgetData).field_0x48 = 0;
  pvVar2 = *(void **)&(this->WeakUserWidgetData).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->WeakUserWidgetData);
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 146905d90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UUMGSequenceTickManager::RunLatentActions'::__l5::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x90) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = FMovieSceneEntitySystemRunner::GetQueuedUpdateCount
                    (*(FMovieSceneEntitySystemRunner **)(lVar1 + 0x90));
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)this + 0x88) + 0x2a0);
  if ((iVar4 != **(int **)((longlong)this + 0x10)) || (lVar1 != **(longlong **)((longlong)this + 8))
     ) {
    **(int **)((longlong)this + 0x10) = iVar4;
    **(longlong **)((longlong)this + 8) = lVar1;
    lVar1 = *(longlong *)this;
    if (*(longlong *)(lVar1 + 0x90) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FMovieSceneEntitySystemRunner::Flush(*(FMovieSceneEntitySystemRunner **)(lVar1 + 0x90),0.0,None)
    ;
  }
  return;
}

// AddLatentAction @ 14690a680

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UUMGSequenceTickManager::AddLatentAction
          (UUMGSequenceTickManager *this,
          TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *param_1)

{
  ForAnyElementType FVar1;
  int iVar2;
  ForAnyElementType local_38;
  int local_30;
  FScriptContainerElement *local_28;
  int local_20;
  
  local_28 = (FScriptContainerElement *)0x0;
  local_20 = 0;
  if (param_1 ==
      (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)&local_28)
  goto LAB_14690a790;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  FVar1.Data = (FScriptContainerElement *)0x0;
  iVar2 = 0;
  if ((*(int *)&param_1->field_0x8 != 0) &&
     (FVar1.Data = (FScriptContainerElement *)0x0, *(longlong **)param_1 != (longlong *)0x0)) {
    (**(code **)(**(longlong **)param_1 + 0x48))();
    FVar1.Data = local_38.Data;
    iVar2 = local_30;
  }
  local_30 = 0;
  local_38.Data = (FScriptContainerElement *)0x0;
  if (local_20 == 0) {
LAB_14690a736:
    if (local_28 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28);
    }
  }
  else if (local_28 != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_28)(local_28);
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_28,0,0,0x10);
    local_20 = 0;
    goto LAB_14690a736;
  }
  local_28 = FVar1.Data;
  local_20 = iVar2;
  if (local_30 != 0) {
    if (local_38.Data == (FScriptContainerElement *)0x0) goto LAB_14690a790;
    (*(code *)**(undefined8 **)local_38.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_38,0,0,0x10);
    local_30 = 0;
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
LAB_14690a790:
  FMovieSceneLatentActionManager::AddLatentAction
            (&this->LatentActionManager,
             (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)&local_28);
  if ((*(int *)&param_1->field_0x8 != 0) && (*(undefined8 **)param_1 != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)param_1)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)param_1,0,0,0x10);
    *(undefined4 *)&param_1->field_0x8 = 0;
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// AddWidget @ 14690ba30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UUMGSequenceTickManager::AddWidget(UUMGSequenceTickManager *this,UUserWidget *param_1)

{
  int *piVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined2 local_res8 [4];
  TPairInitializer<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>_const_&,FSequenceTickManagerWidgetData_&&>
  local_res10;
  UUserWidget *local_res20;
  UUserWidget *local_48;
  FWeakObjectPtr local_40;
  FSequenceTickManagerWidgetData **local_38;
  undefined2 *local_30;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UUserWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res10.Value = (FSequenceTickManagerWidgetData *)0x0;
  local_res20 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UUserWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res10.Value,(FObjectPtr)&local_res20);
  local_40 = (FWeakObjectPtr)local_res10.Value;
  iVar6 = TSet<TTuple<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<UUserWidget_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData,0>,FDefaultSetAllocator>
                      *)&this->WeakUserWidgetData,
                     (uint)((ulonglong)local_res10.Value >> 0x20) ^ (uint)local_res10.Value,
                     (TWeakObjectPtr<UUserWidget_const_,FWeakObjectPtr> *)&local_40);
  if (iVar6 != -1) {
    lVar2 = *(longlong *)&this->WeakUserWidgetData + (longlong)iVar6 * 0x14;
    puVar7 = (undefined1 *)(lVar2 + 8);
    if (lVar2 == 0) {
      puVar7 = (undefined1 *)0x0;
    }
    if (puVar7 != (undefined1 *)0x0) {
      *puVar7 = 1;
      return;
    }
  }
  if (this->bIsTicking == false) {
    local_38 = &local_res10.Value;
    local_res8[0] = 1;
    local_30 = local_res8;
    TSet<TTuple<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>_const_&,FSequenceTickManagerWidgetData_&&>_>
              ((TSet<TTuple<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData,0>,FDefaultSetAllocator>
                *)&this->WeakUserWidgetData,&local_res10,(bool *)&local_38);
  }
  else {
    local_48 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UUserWidget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pFVar3 = (this->PendingUserWidgets).AllocatorInstance.Data;
    if ((pFVar3 <= (FScriptContainerElement *)&local_48) &&
       ((FScriptContainerElement *)&local_48 <
        pFVar3 + (longlong)(this->PendingUserWidgets).ArrayMax * 8)) {
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
    iVar6 = (this->PendingUserWidgets).ArrayNum;
    piVar1 = &(this->PendingUserWidgets).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->PendingUserWidgets).AllocatorInstance,piVar1);
    }
    (this->PendingUserWidgets).ArrayNum = iVar6 + 1;
    *(UUserWidget **)((this->PendingUserWidgets).AllocatorInstance.Data + (longlong)iVar6 * 8) =
         local_48;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48 != (UUserWidget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_48);
      return;
    }
  }
  return;
}

// BeginDestroy @ 14690c6e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UUMGSequenceTickManager::BeginDestroy(UUMGSequenceTickManager *this)

{
  FDelegateHandle FVar1;
  FSlateApplication *pFVar2;
  
  if (((this->SlateApplicationPreTickHandle).ID != 0) &&
     (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0)) {
    pFVar2 = FSlateApplication::Get();
    FVar1.ID = (this->SlateApplicationPreTickHandle).ID;
    if (FVar1.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pFVar2->PreTickEvent,FVar1);
    }
    FVar1.ID = (this->SlateApplicationPostTickHandle).ID;
    (this->SlateApplicationPreTickHandle).ID = 0;
    if (FVar1.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pFVar2->PostTickEvent,FVar1)
      ;
    }
    (this->SlateApplicationPostTickHandle).ID = 0;
  }
  UObject::BeginDestroy((UObject *)this);
  return;
}

// ClearLatentActions @ 146910480

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UUMGSequenceTickManager::ClearLatentActions(UUMGSequenceTickManager *this,UObject *param_1)

{
  FMovieSceneLatentActionManager::ClearLatentActions(&this->LatentActionManager,param_1);
  return;
}

// ForceFlush @ 14691caa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UUMGSequenceTickManager::ForceFlush(UUMGSequenceTickManager *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->Runner).Object == (FMovieSceneEntitySystemRunner *)0x0) {
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
  FMovieSceneEntitySystemRunner::Flush
            ((this->Runner).Object,(double)UE::UMG::GAnimationBudgetMs,None);
  RunLatentActions(this);
  return;
}

// Get @ 14691d190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UUMGSequenceTickManager * __cdecl UUMGSequenceTickManager::Get(UObject *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UUMGSequenceTickManager *pUVar4;
  longlong lVar5;
  UEngine *pUVar6;
  UClass *pUVar7;
  pmf_199df8f0 pVar8;
  FName *pFVar9;
  UMovieSceneEntitySystemLinker *pUVar10;
  TSharedRef<FMovieSceneEntitySystemRunner,1> *pTVar11;
  FSlateApplication *pFVar12;
  longlong *plVar13;
  undefined1 auStackY_128 [32];
  undefined1 local_f8 [16];
  FMovieSceneEntitySystemRunner *local_e8;
  FSharedReferencer<1> local_e0;
  wchar_t *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  FName local_c8 [2];
  TStringView<wchar_t> local_b8;
  TSharedRef<FMovieSceneEntitySystemRunner,1> local_a8;
  undefined1 local_98 [80];
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_128;
  pUVar6 = GEngine;
  if (GEngine != (UEngine *)0x0) goto LAB_14691d23c;
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2608828754100747897>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Animation\\UMGSequenceTickManager.cpp"
                     ,0x187,"Owner");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pUVar4 = (UUMGSequenceTickManager *)(*pcVar2)();
    return pUVar4;
  }
  if (param_1 == (UObject *)0x0) {
LAB_14691d207:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PlaybackContext != nullptr && PlaybackContext->GetWorld() != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Animation\\UMGSequenceTickManager.cpp"
                       ,0x18b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UUMGSequenceTickManager *)(*pcVar2)();
      return pUVar4;
    }
  }
  else {
    lVar5 = (**(code **)(*(longlong *)param_1 + 0x180))(param_1);
    if (lVar5 == 0) goto LAB_14691d207;
  }
  pUVar6 = (UEngine *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
LAB_14691d23c:
  iStack_d0 = 0x1c;
  local_d8 = L"GlobalUMGSequenceTickManager";
  pUVar7 = StaticClass();
  local_b8._12_4_ = uStack_cc;
  local_b8.Size = iStack_d0;
  local_b8.DataPtr = local_d8;
  pVar8 = (pmf_199df8f0)StaticFindObject(pUVar7,(UObject *)pUVar6,&local_b8,None);
  if (pVar8 == (pmf_199df8f0)0x0) {
    pFVar9 = ::FName::FName(local_c8,L"GlobalUMGSequenceTickManager");
    FVar1 = *pFVar9;
    if (FVar1 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pUVar6,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar7 = StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar7);
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._24_4_ = RF_NoFlags;
    local_98._40_8_ = (UMovieSceneEntitySystemLinker *)0x0;
    local_98[0x20] = false;
    local_98._8_8_ = pUVar6;
    local_98._16_8_ = FVar1;
    pVar8 = (pmf_199df8f0)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar13 = local_48;
      if (local_30 != (longlong *)0x0) {
        plVar13 = local_30;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    pUVar10 = UMovieSceneEntitySystemLinker::FindOrCreateLinker
                        ((UObject *)pUVar6,UMG,L"UMGAnimationEntitySystemLinker");
    if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
       (pUVar10 == (UMovieSceneEntitySystemLinker *)0x0)) {
      *(UMovieSceneEntitySystemLinker **)((longlong)pVar8 + 0x88) = pUVar10;
      if (pUVar10 == (UMovieSceneEntitySystemLinker *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Linker",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Animation\\UMGSequenceTickManager.cpp"
                           ,0x34,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pUVar4 = (UUMGSequenceTickManager *)(*pcVar2)();
          return pUVar4;
        }
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
      *(UMovieSceneEntitySystemLinker **)((longlong)pVar8 + 0x88) = pUVar10;
    }
    pTVar11 = UMovieSceneEntitySystemLinker::GetRunner
                        (*(UMovieSceneEntitySystemLinker **)((longlong)pVar8 + 0x88),&local_a8);
    local_e0.ReferenceController = (pTVar11->SharedReferenceCount).ReferenceController;
    local_e8 = pTVar11->Object;
    if (local_e0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_e0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_e0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((FMovieSceneEntitySystemRunner **)((longlong)pVar8 + 0x90) != &local_e8) {
      *(FMovieSceneEntitySystemRunner **)((longlong)pVar8 + 0x90) = local_e8;
      local_e8 = (FMovieSceneEntitySystemRunner *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)((longlong)pVar8 + 0x98),&local_e0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
    pFVar12 = FSlateApplication::Get();
    TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>::
    AddUObject<UUMGSequenceTickManager>
              ((TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy> *)
               &pFVar12->PreTickEvent,(UUMGSequenceTickManager *)local_f8,pVar8);
    if (local_f8._0_8_ == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PreTickHandle.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Animation\\UMGSequenceTickManager.cpp"
                         ,0x39,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar4 = (UUMGSequenceTickManager *)(*pcVar2)();
        return pUVar4;
      }
    }
    *(undefined8 *)((longlong)pVar8 + 0xa0) = local_f8._0_8_;
    TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>::
    AddUObject<UUMGSequenceTickManager>
              ((TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy> *)
               &pFVar12->PostTickEvent,(UUMGSequenceTickManager *)(local_f8 + 8),pVar8);
    if (local_f8._8_8_ == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PostTickHandle.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Animation\\UMGSequenceTickManager.cpp"
                         ,0x3d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar4 = (UUMGSequenceTickManager *)(*pcVar2)();
        return pUVar4;
      }
    }
    *(undefined8 *)((longlong)pVar8 + 0xa8) = local_f8._8_8_;
  }
  return (UUMGSequenceTickManager *)pVar8;
}

// GetPrivateStaticClass @ 146922c80

UClass * __cdecl UUMGSequenceTickManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUMGSequenceTickManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"UMGSequenceTickManager",
               &Z_Registration_Info_UClass_UUMGSequenceTickManager.InnerSingleton,
               StaticRegisterNativesUUMGSequenceTickManager,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UUMGSequenceTickManager>,
               InternalVTableHelperCtorCaller<UUMGSequenceTickManager>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUMGSequenceTickManager.InnerSingleton;
}

// HandleSlatePostTick @ 146928870

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UUMGSequenceTickManager::HandleSlatePostTick(UUMGSequenceTickManager *this,float param_1)

{
  int *piVar1;
  TSharedPtr<FMovieSceneEntitySystemRunner,1> *this_00;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uint *puVar6;
  FTlsAutoCleanup *pFVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_MovieSceneEval_FlushEndOfFrameAnimations> FVar9;
  FMovieSceneEntitySystemRunner *pFVar10;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  FNameEntryId FVar14;
  bool bVar15;
  uint local_res18;
  uint uStackX_1c;
  FColor_u_0 local_res20 [2];
  FName local_78;
  LARGE_INTEGER local_70;
  FName local_68;
  FName local_60;
  FStatMessage local_50;
  code *local_40;
  uint *local_38;
  
  puVar6 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_38 = &local_res18;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar7 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_40,puVar6);
  if ((*(char *)(pFVar7 + 4) == '\0') && (UE::UMG::GFlushUMGAnimationsAtEndOfFrame != 0)) {
    this_00 = &this->Runner;
    if ((this_00->Object == (FMovieSceneEntitySystemRunner *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar5 = FMovieSceneEntitySystemRunner::HasQueuedUpdates(this_00->Object);
    if (bVar5) {
      if ((this_00->Object == (FMovieSceneEntitySystemRunner *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar5 = FMovieSceneEntitySystemRunner::IsCurrentlyEvaluating(this_00->Object);
      if (!bVar5) {
        FVar14.Value = 0;
        FVar9 = StatPtr_MovieSceneEval_FlushEndOfFrameAnimations;
        if (StatPtr_MovieSceneEval_FlushEndOfFrameAnimations ==
            (FThreadSafeStaticStat<FStat_MovieSceneEval_FlushEndOfFrameAnimations>)0x0) {
          pFVar8 = ::FName::FName(&local_68,"MovieSceneEval_FlushEndOfFrameAnimations");
          FVar9 = (FThreadSafeStaticStat<FStat_MovieSceneEval_FlushEndOfFrameAnimations>)
                  FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)
                             &StatPtr_MovieSceneEval_FlushEndOfFrameAnimations,*pFVar8,
                             L"Flush End of Frame Animations","STATGROUP_MovieSceneEval",
                             "STATCAT_Advanced",L"Movie Scene Evaluation",true,true,ST_int64,true,
                             false,MCR_Invalid);
        }
        FVar2 = *(FName *)FVar9;
        bVar5 = false;
        bVar4 = false;
        local_60.ComparisonIndex.Value = 0;
        local_60.Number = 0;
        FVar12 = FVar2.ComparisonIndex.Value;
        uVar11 = FVar2.Number;
        if ((FVar12.Value == 0) && (uVar11 == 0)) {
          pFVar10 = TSharedPtr<FMovieSceneEntitySystemRunner,1>::operator->(this_00);
          FMovieSceneEntitySystemRunner::Flush(pFVar10,0.0,None);
          RunLatentActions(this);
        }
        else {
          if (GCycleStatsShouldEmitNamedEvents != 0) {
            local_res20[0].Bits = 0;
            FGenericPlatformMisc::BeginNamedEvent
                      ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
            bVar5 = false;
            bVar4 = true;
            if (-1 < CpuChannel->Enabled) {
              local_78.ComparisonIndex.Value = FVar12.Value;
              local_78.Number = uVar11;
              FCpuProfilerTrace::OutputBeginDynamicEventWithId
                        (&local_78,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Animation\\UMGSequenceTickManager.cpp"
                         ,0x157);
              bVar5 = true;
              bVar4 = true;
            }
          }
          bVar15 = FThreadStats::bPrimaryEnable != false;
          FVar13 = local_60;
          if (bVar15) {
            local_res18 = FVar12.Value;
            uStackX_1c = uVar11;
            local_60 = FVar2;
            FThreadStats::AddMessage(FVar2,CycleScopeStart);
            FVar13 = FVar2;
            FVar14.Value = local_60.ComparisonIndex.Value;
          }
          pFVar10 = TSharedPtr<FMovieSceneEntitySystemRunner,1>::operator->(this_00);
          FMovieSceneEntitySystemRunner::Flush(pFVar10,0.0,None);
          RunLatentActions(this);
          if (bVar4) {
            FGenericPlatformMisc::EndNamedEvent();
          }
          if (bVar5) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          if ((((bVar15) && (FVar13 != (FName)0x0)) &&
              (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            this_01 = TlsGetValue(FThreadStats::TlsSlot);
            if (this_01 == (FThreadStats *)0x0) {
              this_02 = FThreadStatsPool::Get();
              this_01 = FThreadStatsPool::GetFromPool(this_02);
            }
            if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
              local_50.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
              local_50.NameAndInfo.Index.Value = FVar14.Value;
              QueryPerformanceCounter(&local_70);
              local_50.StatData.Pad[4] = '\0';
              local_50.StatData.Pad[5] = '\0';
              local_50.StatData.Pad[6] = '\0';
              local_50.StatData.Pad[7] = '\0';
              local_50.StatData.Pad[0] = local_70.s.LowPart._0_1_;
              local_50.StatData.Pad[1] = local_70.s.LowPart._1_1_;
              local_50.StatData.Pad[2] = local_70.s.LowPart._2_1_;
              local_50.StatData.Pad[3] = local_70.s.LowPart._3_1_;
              FThreadStats::AddStatMessage(this_01,&local_50);
              piVar1 = &this_01->ScopeCount;
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                FThreadStats::Flush(this_01,false,false);
              }
              else if (FThreadStats::bIsRawStatsActive != false) {
                FThreadStats::FlushRawStats(this_01,false,false);
              }
            }
          }
        }
      }
    }
  }
  return;
}

// Initialize @ 14692ab70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UUMGSequenceTickManager::Initialize(UUMGSequenceTickManager *this,UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  UMovieSceneEntitySystemLinker *pUVar3;
  TSharedRef<FMovieSceneEntitySystemRunner,1> *pTVar4;
  FSlateApplication *pFVar5;
  ulong64 local_res8;
  ulong64 local_res18;
  FMovieSceneEntitySystemRunner *local_28;
  FSharedReferencer<1> local_20;
  TSharedRef<FMovieSceneEntitySystemRunner,1> local_18;
  
  pUVar3 = UMovieSceneEntitySystemLinker::FindOrCreateLinker
                     (param_1,UMG,L"UMGAnimationEntitySystemLinker");
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (pUVar3 == (UMovieSceneEntitySystemLinker *)0x0)) {
    (this->Linker).field0_0x0.DebugPtr = pUVar3;
    if (pUVar3 == (UMovieSceneEntitySystemLinker *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Linker",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Animation\\UMGSequenceTickManager.cpp"
                         ,0x34,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
    (this->Linker).field0_0x0.DebugPtr = pUVar3;
  }
  pTVar4 = UMovieSceneEntitySystemLinker::GetRunner((this->Linker).field0_0x0.DebugPtr,&local_18);
  local_20.ReferenceController = (pTVar4->SharedReferenceCount).ReferenceController;
  local_28 = pTVar4->Object;
  if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_20.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->Runner != (TSharedPtr<FMovieSceneEntitySystemRunner,1> *)&local_28) {
    (this->Runner).Object = local_28;
    local_28 = (FMovieSceneEntitySystemRunner *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Runner).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  pFVar5 = FSlateApplication::Get();
  TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>::
  AddUObject<UUMGSequenceTickManager>
            ((TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy> *)
             &pFVar5->PreTickEvent,(UUMGSequenceTickManager *)&local_res8,(pmf_199df8f0)this);
  if (local_res8 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PreTickHandle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Animation\\UMGSequenceTickManager.cpp"
                       ,0x39,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->SlateApplicationPreTickHandle).ID = local_res8;
  TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>::
  AddUObject<UUMGSequenceTickManager>
            ((TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy> *)
             &pFVar5->PostTickEvent,(UUMGSequenceTickManager *)&local_res18,(pmf_199df8f0)this);
  if (local_res18 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PostTickHandle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Animation\\UMGSequenceTickManager.cpp"
                       ,0x3d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->SlateApplicationPostTickHandle).ID = local_res18;
  return;
}

// OnWidgetTicked @ 146930d90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UUMGSequenceTickManager::OnWidgetTicked(UUMGSequenceTickManager *this,UUserWidget *param_1)

{
  int *piVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined2 local_res8 [4];
  TPairInitializer<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>_&&,FSequenceTickManagerWidgetData_&&>
  local_res10;
  FWeakObjectPtr local_res20;
  UUserWidget *local_58;
  UUserWidget *local_50;
  FWeakObjectPtr local_48;
  UUserWidget *local_40;
  FWeakObjectPtr *local_38;
  undefined2 *local_30;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UUserWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res10.Value = (FSequenceTickManagerWidgetData *)0x0;
  local_50 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UUserWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res10.Value,(FObjectPtr)&local_50);
  local_48 = (FWeakObjectPtr)local_res10.Value;
  iVar6 = TSet<TTuple<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<UUserWidget_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData,0>,FDefaultSetAllocator>
                      *)&this->WeakUserWidgetData,
                     (uint)((ulonglong)local_res10.Value >> 0x20) ^ (uint)local_res10.Value,
                     (TWeakObjectPtr<UUserWidget_const_,FWeakObjectPtr> *)&local_48);
  if (iVar6 != -1) {
    lVar2 = *(longlong *)&this->WeakUserWidgetData + (longlong)iVar6 * 0x14;
    puVar7 = (undefined1 *)(lVar2 + 8);
    if (lVar2 == 0) {
      puVar7 = (undefined1 *)0x0;
    }
    if (puVar7 != (undefined1 *)0x0) {
      *puVar7 = 1;
      return;
    }
  }
  if (this->bIsTicking == false) {
    local_res8[0] = 1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UUserWidget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_40 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UUserWidget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_40);
    local_38 = &local_res20;
    local_30 = local_res8;
    TSet<TTuple<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>_&&,FSequenceTickManagerWidgetData_&&>_>
              ((TSet<TTuple<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData,0>,FDefaultSetAllocator>
                *)&this->WeakUserWidgetData,&local_res10,(bool *)&local_38);
  }
  else {
    local_58 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UUserWidget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pFVar3 = (this->PendingUserWidgets).AllocatorInstance.Data;
    if ((pFVar3 <= (FScriptContainerElement *)&local_58) &&
       ((FScriptContainerElement *)&local_58 <
        pFVar3 + (longlong)(this->PendingUserWidgets).ArrayMax * 8)) {
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
    iVar6 = (this->PendingUserWidgets).ArrayNum;
    piVar1 = &(this->PendingUserWidgets).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->PendingUserWidgets).AllocatorInstance,piVar1);
    }
    (this->PendingUserWidgets).ArrayNum = iVar6 + 1;
    *(UUserWidget **)((this->PendingUserWidgets).AllocatorInstance.Data + (longlong)iVar6 * 8) =
         local_58;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_58 != (UUserWidget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_58);
      return;
    }
  }
  return;
}

// RemoveWidget @ 14693c520

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UUMGSequenceTickManager::RemoveWidget(UUMGSequenceTickManager *this,UUserWidget *param_1)

{
  longlong lVar1;
  FWeakObjectPtr FVar2;
  bool bVar3;
  undefined1 *puVar4;
  int iVar5;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  
  FMovieSceneLatentActionManager::ClearLatentActions(&this->LatentActionManager,(UObject *)param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UUserWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = (FWeakObjectPtr)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UUserWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  FVar2 = local_res8;
  if (*(int *)&(this->WeakUserWidgetData).field_0x8 !=
      *(int *)&(this->WeakUserWidgetData).field_0x34) {
    puVar4 = *(undefined1 **)&(this->WeakUserWidgetData).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->WeakUserWidgetData).field_0x38;
    }
    iVar5 = *(int *)(puVar4 + ((longlong)(local_res8.ObjectSerialNumber ^ local_res8.ObjectIndex) &
                              (longlong)*(int *)&(this->WeakUserWidgetData).field_0x48 - 1U) * 4);
    if (iVar5 != -1) {
      while( true ) {
        local_res10 = FVar2;
        lVar1 = *(longlong *)&this->WeakUserWidgetData;
        local_res18 = *(FWeakObjectPtr *)(lVar1 + (longlong)iVar5 * 0x14);
        bVar3 = TWeakObjectPtr<UUserWidget_const_,FWeakObjectPtr>::
                UEOpEquals<UUserWidget_const_,bool>
                          ((TWeakObjectPtr<UUserWidget_const_,FWeakObjectPtr> *)&local_res18,
                           (TWeakObjectPtr<UUserWidget_const_,FWeakObjectPtr> *)&local_res10);
        if (bVar3) break;
        iVar5 = *(int *)(lVar1 + (longlong)iVar5 * 0x14 + 0xc);
        if (iVar5 == -1) {
          return;
        }
      }
      TSet<TTuple<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData,0>,FDefaultSetAllocator>
      ::RemoveByIndex((TSet<TTuple<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData,0>,FDefaultSetAllocator>
                       *)&this->WeakUserWidgetData,iVar5);
    }
  }
  return;
}

// RunLatentActions @ 14693ff30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UUMGSequenceTickManager::RunLatentActions(UUMGSequenceTickManager *this)

{
  code *pcVar1;
  bool bVar2;
  int local_res8 [2];
  ulong64 local_res10 [3];
  code *local_38;
  UUMGSequenceTickManager **local_30;
  UUMGSequenceTickManager *local_28;
  ulong64 *local_20;
  int *local_18;
  
  if ((this->Runner).Object == (FMovieSceneEntitySystemRunner *)0x0) {
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
  bVar2 = FMovieSceneEntitySystemRunner::IsCurrentlyEvaluating((this->Runner).Object);
  if (!bVar2) {
    if ((this->Runner).Object == (FMovieSceneEntitySystemRunner *)0x0) {
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
    local_res8[0] = FMovieSceneEntitySystemRunner::GetQueuedUpdateCount((this->Runner).Object);
    local_res10[0] = (((this->Linker).field0_0x0.DebugPtr)->EntityManager).SystemSerialNumber;
    local_20 = local_res10;
    local_18 = local_res8;
    local_30 = &local_28;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`UUMGSequenceTickManager::RunLatentActions'::__l5::<lambda_1>,void>
               ::Call;
    local_28 = this;
    FMovieSceneLatentActionManager::RunLatentActions
              (&this->LatentActionManager,(TFunctionRef<void___cdecl(void)> *)&local_38);
  }
  return;
}

// StaticRegisterNativesUUMGSequenceTickManager @ 146945aa0

void __cdecl UUMGSequenceTickManager::StaticRegisterNativesUUMGSequenceTickManager(void)

{
  return;
}

// TickWidgetAnimations @ 146948a10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UUMGSequenceTickManager::TickWidgetAnimations(UUMGSequenceTickManager *this,float param_1)

{
  TMap<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData,0>_>
  *this_00;
  bool bVar1;
  UMovieSceneEntitySystemLinker *pUVar2;
  longlong lVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  undefined4 uVar6;
  longlong *plVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  FUObjectItem *pFVar11;
  uint *puVar12;
  FTlsAutoCleanup *pFVar13;
  FMovieSceneEntitySystemRunner *pFVar14;
  UUserWidget *pUVar15;
  TSharedPtr<FMovieSceneEntitySystemRunner,1> *this_01;
  ulonglong uVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  int iVar19;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FSequenceTickManagerWidgetData local_178 [2];
  FWeakObjectPtr local_174;
  FName local_168;
  byte local_160;
  longlong *local_158;
  undefined1 auStack_150 [16];
  uint uStack_140;
  uint uStack_13c;
  longlong local_138;
  TSet<TTuple<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData,0>,FDefaultSetAllocator>
  *pTStack_130;
  TSet<TTuple<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData,0>,FDefaultSetAllocator>
  *local_128;
  undefined2 local_120;
  longlong *local_118;
  undefined1 auStack_110 [16];
  uint uStack_100;
  uint uStack_fc;
  longlong local_f8;
  TSet<TTuple<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData,0>,FDefaultSetAllocator>
  *pTStack_f0;
  TSet<TTuple<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData,0>,FDefaultSetAllocator>
  *local_e8;
  char local_e0;
  char cStack_df;
  undefined4 local_d8;
  undefined1 local_d4 [12];
  undefined1 local_c8 [16];
  FWeakObjectPtr *local_b8;
  FSequenceTickManagerWidgetData *local_b0;
  undefined1 local_a8 [32];
  longlong local_88;
  TSet<TTuple<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData,0>,FDefaultSetAllocator>
  *pTStack_80;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData,0>,FDefaultSetAllocator>
  *pTStack_50;
  
  if ((((this->bIsTicking == false) &&
       (pFVar11 = FUObjectArray::IndexToObject
                            (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4)),
       ((uint)((ulonglong)(pFVar11->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) &&
      (((uint)this->_padding_ >> 0xf & 1) == 0)) &&
     (((pUVar2 = (this->Linker).field0_0x0.DebugPtr, pUVar2 != (UMovieSceneEntitySystemLinker *)0x0
       && (pFVar11 = FUObjectArray::IndexToObject
                               (&GUObjectArray,*(int *)((longlong)&pUVar2->_padding_ + 4)),
          ((uint)((ulonglong)(pFVar11->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) &&
      (((uint)((this->Linker).field0_0x0.DebugPtr)->_padding_ >> 0xf & 1) == 0)))) {
    puVar12 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
    local_c8._8_8_ = local_res18;
    local_c8._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
         ::Call;
    pFVar13 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)local_c8,puVar12);
    if (*(char *)(pFVar13 + 4) == '\0') {
      bVar1 = this->bIsTicking;
      this->bIsTicking = true;
      this->TickTimeSeconds = (double)param_1 + this->TickTimeSeconds;
      pFVar14 = TSharedPtr<FMovieSceneEntitySystemRunner,1>::operator->(&this->Runner);
      bVar8 = FMovieSceneEntitySystemRunner::IsCurrentlyEvaluating(pFVar14);
      FScopeCycleCounterUObject::FScopeCycleCounterUObject
                ((FScopeCycleCounterUObject *)&local_168,(UObjectBaseUtility *)this);
      this_00 = &this->WeakUserWidgetData;
      TSet<TTuple<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData,0>,FDefaultSetAllocator>
      ::TIterator::TIterator
                ((TIterator *)local_a8,
                 (TSet<TTuple<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData,0>,FDefaultSetAllocator>
                  *)this_00);
      local_e0 = '\0';
      cStack_df = '\0';
      stack0xfffffffffffffef8 = local_a8._16_16_;
      local_118 = (longlong *)local_a8._0_8_;
      auStack_110._0_8_ = local_a8._8_8_;
      local_f8 = local_88;
      pTStack_f0 = pTStack_80;
      uVar16 = local_a8._24_8_ >> 0x20;
      local_e8 = (TSet<TTuple<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData,0>,FDefaultSetAllocator>
                  *)this_00;
      if (local_a8._28_4_ < *(int *)(local_a8._16_8_ + 0x18)) {
        do {
          plVar7 = local_118;
          iVar10 = (int)uVar16;
          pUVar15 = (UUserWidget *)
                    FWeakObjectPtr::Get((FWeakObjectPtr *)(*local_118 + (longlong)iVar10 * 0x14));
          bVar9 = TickWidgetAnimations
                            (this,param_1,pUVar15,
                             (FSequenceTickManagerWidgetData *)
                             (*plVar7 + 8 + (longlong)iVar10 * 0x14),bVar8);
          if (bVar9) {
            TSet<TTuple<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData,0>,FDefaultSetAllocator>
            ::RemoveByIndex(pTStack_f0,iVar10);
            local_e0 = '\x01';
          }
          uStack_100 = uStack_100 & ~auStack_110._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_110);
          uVar16 = (ulonglong)uStack_fc;
        } while ((int)uStack_fc < *(int *)(auStack_110._8_8_ + 0x18));
        if ((local_e0 != '\0') && (cStack_df != '\0')) {
          uVar18 = *(int *)&(local_e8->Elements).field_0x8 -
                   *(int *)&(local_e8->Elements).field_0x34;
          if (uVar18 < 4) {
            iVar10 = 1;
          }
          else {
            uVar16 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
            lVar3 = 0x3f;
            if (uVar16 != 0) {
              for (; uVar16 >> lVar3 == 0; lVar3 = lVar3 + -1) {
              }
            }
            local_d8 = (undefined4)lVar3;
            iVar10 = 1 << ((byte)lVar3 & 0x1f);
          }
          if (((0 < (int)uVar18) && (local_e8->HashSize < iVar10)) || (iVar10 < local_e8->HashSize))
          {
            local_e8->HashSize = iVar10;
            TSet<TTuple<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData,0>,FDefaultSetAllocator>
            ::Rehash(local_e8);
          }
        }
      }
      if ((local_160 & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((local_160 & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((local_160 & 4) != 0) {
        FThreadStats::AddMessage(local_168,CycleScopeEnd);
      }
      iVar10 = (this->PendingUserWidgets).ArrayNum;
      local_160 = 0;
      while (0 < iVar10) {
        pFVar5 = (this->PendingUserWidgets).AllocatorInstance.Data;
        uVar6 = (this->PendingUserWidgets).ArrayNum;
        (this->PendingUserWidgets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this->PendingUserWidgets).ArrayNum = 0;
        (this->PendingUserWidgets).ArrayMax = 0;
        for (pFVar17 = pFVar5; pFVar17 != pFVar5 + (longlong)(int)uVar6 * 8; pFVar17 = pFVar17 + 8)
        {
          pUVar15 = *(UUserWidget **)pFVar17;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar15 != (UUserWidget *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar15);
          }
          local_178[0].bIsTicking = true;
          local_178[0].bActionsAndAnimationTicked = false;
          bVar9 = TickWidgetAnimations(this,param_1,pUVar15,local_178,bVar8);
          if (!bVar9) {
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              if (pUVar15 != (UUserWidget *)0x0) {
                UE::GC::MarkAsReachable((UObject *)pUVar15);
              }
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar15 != (UUserWidget *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)pUVar15);
              }
            }
            local_174.ObjectIndex = 0;
            local_174.ObjectSerialNumber = 0;
            local_d4._4_8_ = pUVar15;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar15 != (UUserWidget *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar15);
            }
            FWeakObjectPtr::operator=(&local_174,(FObjectPtr)((longlong)local_d4 + 4));
            local_b8 = &local_174;
            local_b0 = local_178;
            TSet<TTuple<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData,0>,FDefaultSetAllocator>
            ::
            Emplace<TPairInitializer<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>_&&,FSequenceTickManagerWidgetData_const_&>_>
                      ((TSet<TTuple<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData,0>,FDefaultSetAllocator>
                        *)this_00,
                       (TPairInitializer<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>_&&,FSequenceTickManagerWidgetData_const_&>
                        *)local_d4,(bool *)&local_b8);
          }
        }
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        iVar10 = (this->PendingUserWidgets).ArrayNum;
      }
      this_01 = &this->Runner;
      iVar19 = 1;
      if ((iVar10 != 0) &&
         (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_2608828754100748092>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Animation\\UMGSequenceTickManager.cpp"
                             ,0xc4,"PendingUserWidgets.IsEmpty()"), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((this_01->Object == (FMovieSceneEntitySystemRunner *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FMovieSceneEntitySystemRunner::Flush(this_01->Object,(double)UE::UMG::GAnimationBudgetMs,None)
      ;
      RunLatentActions(this);
      pFVar14 = TSharedPtr<FMovieSceneEntitySystemRunner,1>::operator->(this_01);
      bVar8 = FMovieSceneEntitySystemRunner::IsCurrentlyEvaluating(pFVar14);
      if (!bVar8) {
        TSet<TTuple<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData,0>,FDefaultSetAllocator>
        ::TIterator::TIterator
                  ((TIterator *)local_78,
                   (TSet<TTuple<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData,0>,FDefaultSetAllocator>
                    *)this_00);
        local_120 = 0;
        stack0xfffffffffffffeb8 = local_78._16_16_;
        local_158 = (longlong *)local_78._0_8_;
        auStack_150._0_8_ = local_78._8_8_;
        local_138 = local_58;
        pTStack_130 = pTStack_50;
        uVar16 = local_78._24_8_ >> 0x20;
        local_128 = (TSet<TTuple<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData,0>,FDefaultSetAllocator>
                     *)this_00;
        if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
          do {
            pUVar15 = (UUserWidget *)
                      FWeakObjectPtr::Get((FWeakObjectPtr *)
                                          (*local_158 + (longlong)(int)uVar16 * 0x14));
            if (pUVar15 == (UUserWidget *)0x0) {
              `UUMGSequenceTickManager::TickWidgetAnimations'::__l31::<lambda_1>::operator()
                        (local_res20);
LAB_146948f50:
              TSet<TTuple<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData,0>,FDefaultSetAllocator>
              ::RemoveByIndex(pTStack_130,(int)uVar16);
              local_120 = CONCAT11(local_120._1_1_,1);
            }
            else {
              bVar8 = UUserWidget::IsAnyAnimationPlaying(pUVar15);
              if (!bVar8) {
                UUserWidget::UpdateCanTick(pUVar15);
                (pUVar15->AnimationTickManager).field0_0x0.DebugPtr = (UUMGSequenceTickManager *)0x0
                ;
                pUVar15->LastAnimationTime = 0.0;
                goto LAB_146948f50;
              }
            }
            uStack_140 = uStack_140 & ~auStack_150._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_150);
            uVar16 = (ulonglong)uStack_13c;
          } while ((int)uStack_13c < *(int *)(auStack_150._8_8_ + 0x18));
          if (((char)local_120 != '\0') && (local_120._1_1_ != '\0')) {
            uVar18 = *(int *)&(local_128->Elements).field_0x8 -
                     *(int *)&(local_128->Elements).field_0x34;
            if (3 < uVar18) {
              uVar16 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
              lVar3 = 0x3f;
              if (uVar16 != 0) {
                for (; uVar16 >> lVar3 == 0; lVar3 = lVar3 + -1) {
                }
              }
              iVar19 = 1 << ((byte)lVar3 & 0x1f);
            }
            if (((0 < (int)uVar18) && (local_128->HashSize < iVar19)) ||
               (iVar19 < local_128->HashSize)) {
              local_128->HashSize = iVar19;
              TSet<TTuple<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData,0>,FDefaultSetAllocator>
              ::Rehash(local_128);
            }
          }
        }
      }
      TSet<TTuple<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData,0>,FDefaultSetAllocator>
      ::Shrink((TSet<TTuple<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData,0>,FDefaultSetAllocator>
                *)this_00);
      this->bIsTicking = bVar1;
    }
  }
  return;
}

// TickWidgetAnimations @ 146949030

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
UUMGSequenceTickManager::TickWidgetAnimations
          (UUMGSequenceTickManager *this,float param_1,UUserWidget *param_2,
          FSequenceTickManagerWidgetData *param_3,bool param_4)

{
  bool bVar1;
  float fVar2;
  FName local_28;
  byte local_20;
  
  param_3->bActionsAndAnimationTicked = false;
  if (param_2 == (UUserWidget *)0x0) {
LAB_1469490a0:
    bVar1 = true;
  }
  else {
    bVar1 = UWidget::IsConstructed((UWidget *)param_2);
    if (bVar1) {
      if (param_3->bIsTicking == false) {
        if (!param_4) {
          UUserWidget::DisableAnimations(param_2);
          return true;
        }
      }
      else {
        FScopeCycleCounterUObject::FScopeCycleCounterUObject
                  ((FScopeCycleCounterUObject *)&local_28,(UObjectBaseUtility *)param_2);
        bVar1 = UWidget::IsVisible((UWidget *)param_2);
        if (bVar1) {
          if (param_2->bUseCullingDeltaTime == false) {
            UUserWidget::TickActionsAndAnimation(param_2,param_1);
          }
          else {
            fVar2 = (float)param_2->LastAnimationTime;
            if (fVar2 == 0.0) {
              fVar2 = (float)(this->TickTimeSeconds - (double)param_1);
            }
            UUserWidget::TickActionsAndAnimation
                      (param_2,(float)(this->TickTimeSeconds - (double)fVar2));
            param_2->LastAnimationTime = this->TickTimeSeconds;
          }
          param_3->bActionsAndAnimationTicked = true;
        }
        param_3->bIsTicking = false;
        if ((local_20 & 1) != 0) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if ((local_20 & 2) != 0) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if ((local_20 & 4) != 0) {
          FThreadStats::AddMessage(local_28,CycleScopeEnd);
        }
      }
    }
    else if (!param_4) {
      UUserWidget::ConditionalTearDownAnimations(param_2);
      UUserWidget::UpdateCanTick(param_2);
      bVar1 = UUserWidget::IsAnyAnimationPlaying(param_2);
      if (!bVar1) {
        (param_2->AnimationTickManager).field0_0x0.DebugPtr = (UUMGSequenceTickManager *)0x0;
        param_2->LastAnimationTime = 0.0;
        goto LAB_1469490a0;
      }
    }
    bVar1 = false;
  }
  return bVar1;
}

// operator() @ 1504f6230

bool __thiscall
`UUMGSequenceTickManager::TickWidgetAnimations'::__l31::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2608828754100748083>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2608828754100748083>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

