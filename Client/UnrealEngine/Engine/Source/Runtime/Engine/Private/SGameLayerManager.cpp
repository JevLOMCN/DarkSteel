// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 41

// SGameLayerManager @ 148696240

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

SGameLayerManager * __thiscall SGameLayerManager::SGameLayerManager(SGameLayerManager *this)

{
  SCompoundWidget::SCompoundWidget((SCompoundWidget *)this);
  this->_padding_ = (longlong)&_vftable__for__SCompoundWidget__;
  this->_padding_ = (longlong)&_vftable__for__IGameLayerManager__;
  FGeometry::FGeometry(&this->CachedGeometry);
  *(undefined8 *)&this->PlayerLayers = 0;
  *(undefined8 *)&(this->PlayerLayers).field_0x8 = 0;
  *(undefined8 *)&(this->PlayerLayers).field_0x20 = 0;
  *(undefined4 *)&(this->PlayerLayers).field_0x28 = 0;
  *(undefined4 *)&(this->PlayerLayers).field_0x2c = 0x80;
  *(undefined4 *)&(this->PlayerLayers).field_0x34 = 0;
  *(undefined4 *)&(this->PlayerLayers).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PlayerLayers).field_0x40 = 0;
  *(undefined4 *)&(this->PlayerLayers).field_0x48 = 0;
  (this->GameLayers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameLayers).ArrayNum = 0;
  (this->GameLayers).ArrayMax = 0;
  (this->SceneViewport).Value = (FSceneViewport *)0x0;
  (this->SceneViewport).bIsSet = false;
  *(undefined8 *)&(this->SceneViewport).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->SceneViewport).Getter = 0;
  *(undefined8 *)&(this->SceneViewport).Getter.field_0x8 = 0;
  (this->WidgetHost).Object = (SVerticalBox *)0x0;
  (this->WidgetHost).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->PlayerCanvas).Object = (SCanvas *)0x0;
  (this->PlayerCanvas).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->DebugCanvas).Object = (SDebugCanvas *)0x0;
  (this->DebugCanvas).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->ViewportSlotContainer).Object = (SBox *)0x0;
  (this->ViewportSlotContainer).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->TooltipPresenter).Object = (STooltipPresenter *)0x0;
  (this->TooltipPresenter).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->TitleBarAreaOverlay).Object = (SWindowTitleBarArea *)0x0;
  (this->TitleBarAreaOverlay).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->TitleBarAreaVerticalBox).Object = (SWindowTitleBarArea *)0x0;
  (this->TitleBarAreaVerticalBox).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->WindowTitleBarVerticalBox).Object = (SBox *)0x0;
  (this->WindowTitleBarVerticalBox).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->WindowTitleBarOverlay).Object = (SBox *)0x0;
  (this->WindowTitleBarOverlay).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->WindowOverlay).Object = (SOverlay *)0x0;
  (this->WindowOverlay).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->WindowTitleBarState).ContentWidget.Object = (SWidget *)0x0;
  (this->WindowTitleBarState).ContentWidget.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->WindowTitleBarState).Mode = Overlay;
  (this->WindowTitleBarState).bTitleBarDragEnabled = false;
  (this->WindowTitleBarState).bWindowButtonsVisible = false;
  (this->WindowTitleBarState).bTitleBarVisible = false;
  (this->DefaultTitleBarContentWidget).Object = (SWidget *)0x0;
  (this->DefaultTitleBarContentWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bIsGameUsingBorderlessWindow = false;
  this->bUseScaledDPI = false;
  this->CachedInverseDPIScale = 0.0;
  this->DefaultWindowTitleBarHeight = 64.0;
  return this;
}

// ~SGameLayerManager @ 14869b070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall SGameLayerManager::~SGameLayerManager(SGameLayerManager *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ForAnyElementType FVar8;
  
  this->_padding_ = (longlong)&_vftable__for__SCompoundWidget__;
  this->_padding_ = (longlong)&_vftable__for__IGameLayerManager__;
  FVar8 = CanvasVisibility::GameLayerManagerInstances.AllocatorInstance;
  do {
    if (FVar8.Data ==
        CanvasVisibility::GameLayerManagerInstances.AllocatorInstance.Data +
        (longlong)CanvasVisibility::GameLayerManagerInstances.ArrayNum * 8) {
LAB_14869b19e:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((this->DefaultTitleBarContentWidget).SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((this->WindowTitleBarState).ContentWidget.SharedReferenceCount.ReferenceController)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((this->WindowOverlay).SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((this->WindowTitleBarOverlay).SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((this->WindowTitleBarVerticalBox).SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((this->TitleBarAreaVerticalBox).SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((this->TitleBarAreaOverlay).SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((this->TooltipPresenter).SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((this->ViewportSlotContainer).SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((this->DebugCanvas).SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((this->PlayerCanvas).SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((this->WidgetHost).SharedReferenceCount.ReferenceController);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SceneViewport).Getter);
      DestructItems<TWeakPtr<SWidget,1>,int>
                ((TWeakPtr<SWidget,1> *)(this->GameLayers).AllocatorInstance.Data,
                 (this->GameLayers).ArrayNum);
      pFVar1 = (this->GameLayers).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      *(undefined4 *)&(this->PlayerLayers).field_0x48 = 0;
      pvVar2 = *(void **)&(this->PlayerLayers).field_0x40;
      if (pvVar2 != (void *)0x0) {
        FMemory::Free(pvVar2);
      }
      TSparseArray<TSparseSetElement<TTuple<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&this->PlayerLayers);
      SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
      return;
    }
    if (*(SGameLayerManager **)FVar8.Data == this) {
      uVar7 = (uint)((longlong)FVar8.Data -
                     (longlong)CanvasVisibility::GameLayerManagerInstances.AllocatorInstance.Data >>
                    3);
      if (uVar7 != 0xffffffff) {
        uVar5 = 0;
        if ((int)(uVar7 + 1) <= CanvasVisibility::GameLayerManagerInstances.ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = (CanvasVisibility::GameLayerManagerInstances.ArrayNum - uVar7) + -1;
        if (1 < iVar6) {
          iVar6 = 1;
        }
        if (iVar6 != 0) {
          memmove(CanvasVisibility::GameLayerManagerInstances.AllocatorInstance.Data +
                  (longlong)(int)uVar7 * 8,
                  CanvasVisibility::GameLayerManagerInstances.AllocatorInstance.Data +
                  (longlong)(CanvasVisibility::GameLayerManagerInstances.ArrayNum - iVar6) * 8,
                  (longlong)iVar6 << 3);
        }
        CanvasVisibility::GameLayerManagerInstances.ArrayNum =
             CanvasVisibility::GameLayerManagerInstances.ArrayNum + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&CanvasVisibility::GameLayerManagerInstances.AllocatorInstance,
                   CanvasVisibility::GameLayerManagerInstances.ArrayNum,
                   &CanvasVisibility::GameLayerManagerInstances.ArrayMax);
      }
      goto LAB_14869b19e;
    }
    FVar8.Data = FVar8.Data + 8;
  } while( true );
}

// operator() @ 14869f6b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`SGameLayerManager::Construct'::__l14::<lambda_1>::operator()
          (void *this,IConsoleVariable *param_1,CanvasType param_2)

{
  SGameLayerManager *this_00;
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  bVar2 = (bool)(**(code **)(*(longlong *)param_1 + 0xc0))(param_1);
  uVar5 = 0;
  if (0 < CanvasVisibility::GameLayerManagerInstances.ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < CanvasVisibility::GameLayerManagerInstances.ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = *(SGameLayerManager **)
                 (CanvasVisibility::GameLayerManagerInstances.AllocatorInstance.Data + lVar6);
      if (this_00 != (SGameLayerManager *)0x0) {
        if (param_2 == PlayerCanvas) {
          SGameLayerManager::ShowPlayerCanvas(this_00,bVar2);
        }
        else if (param_2 == DebugCanvas) {
          SGameLayerManager::ShowDebugCanvas(this_00,bVar2);
        }
        else if (param_2 == Viewport) {
          SGameLayerManager::ShowViewportSlot(this_00,bVar2);
        }
        else if (param_2 == AllCanvases) {
          SGameLayerManager::ShowViewportSlot(this_00,bVar2);
          SGameLayerManager::ShowDebugCanvas(this_00,bVar2);
          SGameLayerManager::ShowPlayerCanvas(this_00,bVar2);
          CanvasVisibility::ViewportSlotVisibilityConsoleValue = bVar2;
          CanvasVisibility::DebugCanvasVisibilityConsoleValue = bVar2;
          CanvasVisibility::PlayerCanvasVisibilityConsoleValue = bVar2;
        }
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < CanvasVisibility::GameLayerManagerInstances.ArrayNum);
  }
  return;
}

// AddGameLayer @ 1486a4e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
SGameLayerManager::AddGameLayer(SGameLayerManager *this,TSharedRef<SWidget,1> *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScopedWidgetSlotArguments *pFVar6;
  undefined8 *puVar7;
  undefined1 auStackY_138 [32];
  SWidget *local_e8;
  TReferenceControllerBase<1> *local_e0;
  SWidget *local_d8;
  FSharedReferencer<1> local_d0;
  FScopedWidgetSlotArguments local_c8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_e8 = param_1->Object;
  plVar2 = &this->_padding_;
  local_e0 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_e0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_e0->WeakReferenceCount = (atomic<int>)((int)local_e0->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (((SWidget **)*plVar2 <= &local_e8) &&
     (&local_e8 < (SWidget **)*plVar2 + (longlong)*(int *)((longlong)&this->_padding_ + 4) * 2)) {
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
  iVar5 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)plVar2,piVar1);
  }
  *(int *)&this->_padding_ = iVar5 + 1;
  puVar7 = (undefined8 *)(*plVar2 + (longlong)iVar5 * 0x10);
  *puVar7 = local_e8;
  puVar7[1] = local_e0;
  local_e0 = (TReferenceControllerBase<1> *)0x0;
  local_e8 = (SWidget *)0x0;
  if (this->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  bVar4 = SOverlay::HasSlotWithZOrder((SOverlay *)this->_padding_,param_2);
  if (bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5241678508668748175>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SGameLayerManager.cpp"
                       ,399,"!WindowOverlay->HasSlotWithZOrder(ZOrder)");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (this->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar6 = SOverlay::AddSlot((SOverlay *)this->_padding_,&local_c8,param_2);
  local_d0.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  local_d8 = param_1->Object;
  if (local_d0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_d0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_d0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SWidget **)&pFVar6->_padding_ != &local_d8) {
    pFVar6->_padding_ = (longlong)local_d8;
    local_d8 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar6->_padding_,&local_d0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d0.ReferenceController);
  TPanelChildren<SOverlay::FOverlaySlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// AddLayerForPlayer @ 1486a5060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
SGameLayerManager::AddLayerForPlayer
          (SGameLayerManager *this,ULocalPlayer *param_1,FName *param_2,
          TSharedRef<IGameLayer,1> *param_3,int param_4)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TTuple<FName,TSharedPtr<IGameLayer,1>_> *pTVar5;
  FScopedWidgetSlotArguments *this_00;
  TSharedRef<SWidget,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  undefined1 auStack_148 [32];
  TSharedPtr<SGameLayerManager::FPlayerLayer,1> local_128;
  TPairInitializer<FName_const_&,TSharedPtr<IGameLayer,1>_&&> local_118;
  TReferenceControllerBase<1> *local_108;
  FName *local_100;
  TSharedPtr<IGameLayer,1> **local_f8;
  undefined1 local_f0 [8];
  TReferenceControllerBase<1> *local_e8;
  FScopedWidgetSlotArguments local_d8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  FindOrCreatePlayerLayer((SGameLayerManager *)&this[-1]._padding_,&local_128,param_1);
  if (local_128.Object == (FPlayerLayer *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_128.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_3->SharedReferenceCount).ReferenceController);
    bVar3 = false;
  }
  else {
    if ((local_128.Object == (FPlayerLayer *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pTVar5 = TSet<TTuple<FName,TSharedPtr<IGameLayer,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IGameLayer,1>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,TSharedPtr<IGameLayer,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IGameLayer,1>,0>,FDefaultSetAllocator>
                     *)&(local_128.Object)->Layers,*param_2);
    if (pTVar5 == (TTuple<FName,TSharedPtr<IGameLayer,1>_> *)0x0) {
      pTVar7 = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pTVar7 = *(TReferenceControllerBase<1> **)&pTVar5->field_0x10;
      lVar1 = *(longlong *)&pTVar5->field_0x8;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (lVar1 != 0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_128.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_3->SharedReferenceCount).ReferenceController);
        return false;
      }
    }
    if ((local_128.Object == (FPlayerLayer *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    local_118.Value = (TSharedPtr<IGameLayer,1> *)param_3->Object;
    local_108 = (param_3->SharedReferenceCount).ReferenceController;
    if (local_108 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_108->SharedReferenceCount = (atomic<int>)((int)local_108->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_f8 = &local_118.Value;
    local_100 = param_2;
    TSet<TTuple<FName,TSharedPtr<IGameLayer,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IGameLayer,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,TSharedPtr<IGameLayer,1>_&&>_>
              ((TSet<TTuple<FName,TSharedPtr<IGameLayer,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IGameLayer,1>,0>,FDefaultSetAllocator>
                *)&(local_128.Object)->Layers,&local_118,(bool *)&local_100);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_108);
    if ((local_128.Object == (FPlayerLayer *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if ((((local_128.Object)->Widget).Object == (SOverlay *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    this_00 = SOverlay::AddSlot(((local_128.Object)->Widget).Object,&local_d8,param_4);
    pTVar6 = (TSharedRef<SWidget,1> *)
             (*(code *)**(undefined8 **)param_3->Object)(param_3->Object,local_f0);
    TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]((FSlotArguments *)this_00,pTVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e8);
    TPanelChildren<SOverlay::FOverlaySlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
              (&local_d8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_128.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_3->SharedReferenceCount).ReferenceController);
    bVar3 = true;
  }
  return bVar3;
}

// AddOrUpdatePlayerLayers @ 1486a52c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
SGameLayerManager::AddOrUpdatePlayerLayers
          (SGameLayerManager *this,FGeometry *param_1,UGameViewportClient *param_2,
          TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_> *param_3)

{
  byte bVar1;
  ULocalPlayer *pUVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  float *pfVar5;
  FSlot *pFVar6;
  code *pcVar7;
  double dVar8;
  uint uVar9;
  FPlayerLayer *pFVar10;
  bool bVar11;
  uint uVar12;
  UClass *this_00;
  FDeprecateSlateVector2D FVar13;
  TTuple<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>_> *pTVar14;
  FSharedReferencer<1> FVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  TVector2<double>_u_0 local_218;
  uint local_208;
  FWeakObjectPtr local_200;
  FObjectKey local_1f8;
  longlong local_1f0;
  TVector2<double>_u_0 local_1e8;
  undefined8 local_1d8;
  float local_1d0;
  float fStack_1cc;
  undefined8 local_1c8;
  float local_1c0;
  float fStack_1bc;
  undefined8 local_1b8;
  FDeprecateSlateVector2D local_1b0;
  float local_1a8;
  float fStack_1a4;
  undefined8 local_1a0;
  float local_198;
  float fStack_194;
  undefined8 local_190;
  longlong local_188;
  TVector2<double>_u_0 local_180;
  undefined1 local_170;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_168;
  ForAnyElementType FStack_160;
  ulonglong local_158;
  TVector2<double>_u_0 local_150;
  undefined1 local_140;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_138;
  ForAnyElementType FStack_130;
  ulonglong local_128;
  ULocalPlayer *local_120;
  TSharedPtr<SGameLayerManager::FPlayerLayer,1> local_118;
  FDestructionSentinel local_108;
  FDestructionSentinel local_f0;
  TVector2<double>_u_0 local_d8;
  undefined1 local_c8;
  TDelegateBase<FNotThreadSafeDelegateMode> local_c0;
  TVector2<double>_u_0 local_a8;
  undefined1 local_98;
  TDelegateBase<FNotThreadSafeDelegateMode> local_90 [3];
  
  if (param_3->ArrayNum != 0) {
    bVar1 = (param_2->ActiveSplitscreenType).Value;
    uVar16 = (ulonglong)bVar1;
    local_208 = (uint)bVar1;
    fVar20 = __real_3f800000;
    if (param_2->Viewport != (FViewport *)0x0) {
      fVar20 = GetGameViewportDPIScale(this);
      fVar20 = __real_3f800000 / fVar20;
    }
    if (fVar20 != this->CachedInverseDPIScale) {
      SWidget::Invalidate((SWidget *)this,Prepass);
      this->CachedInverseDPIScale = fVar20;
    }
    uVar9 = __xmm_80000000800000008000000080000000;
    iVar17 = param_3->ArrayNum;
    uVar19 = 0;
    if (0 < iVar17) {
      local_188 = 0;
      local_1f0 = 0;
      uVar18 = uVar16;
      do {
        lVar4 = local_188;
        uVar12 = 0;
        if ((int)uVar19 < iVar17) {
          uVar12 = ~uVar19 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pUVar2 = *(ULocalPlayer **)((param_3->AllocatorInstance).Data + lVar4);
        iVar17 = (int)uVar18;
        if (iVar17 < (param_2->SplitscreenInfo).ArrayNum) {
          local_1e8._s_0.X = 0.0;
          local_1e8._s_0.Y = 0.0;
          local_218._s_0.X = 0.0;
          local_218._s_0.Y = 0.0;
          FindOrCreatePlayerLayer(this,&local_118,pUVar2);
          if (((param_2->SplitscreenInfo).ArrayNum <= iVar17) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if ((int)uVar19 <
              *(int *)((param_2->SplitscreenInfo).AllocatorInstance.Data + uVar16 * 0x10 + 8)) {
            if (((param_2->SplitscreenInfo).ArrayNum <= iVar17) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar3 = (param_2->SplitscreenInfo).AllocatorInstance.Data;
            uVar12 = 0;
            if ((int)uVar19 < *(int *)(pFVar3 + uVar16 * 0x10 + 8)) {
              uVar12 = ~uVar19 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            lVar4 = *(longlong *)(pFVar3 + uVar16 * 0x10);
            uVar18 = (ulonglong)local_208;
            fVar21 = *(float *)(local_1f0 + lVar4);
            fVar22 = *(float *)(local_1f0 + 4 + lVar4);
LAB_1486a55ea:
            local_218._s_0.Y = (double)fVar22;
            local_218._s_0.X = (double)fVar21;
          }
          else if (iVar17 == 0) {
            this_00 = Z_Construct_UClass_UGameMapsSettings_NoRegister();
            if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
              UClass::InternalCreateDefaultObjectWrapper(this_00);
            }
            if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr[2].field_0xc != '\0') {
              if (((param_2->SplitscreenInfo).ArrayNum < 1) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pFVar3 = (param_2->SplitscreenInfo).AllocatorInstance.Data;
              if ((*(int *)(pFVar3 + uVar16 * 0x10 + 8) < 1) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pfVar5 = *(float **)(pFVar3 + uVar16 * 0x10);
              fVar21 = *pfVar5;
              fVar22 = pfVar5[1];
              goto LAB_1486a55ea;
            }
          }
          GetNormalizeRect(this,pUVar2,(TVector2<double> *)&local_1e8._s_0,
                           (TVector2<double> *)&local_218._s_0);
          local_1d8 = param_1->Size;
          local_1d0 = (float)local_218._s_0.X * (float)local_1d8;
          fStack_1cc = (float)local_218._s_0.Y * local_1d8._4_4_;
          local_1c8 = CONCAT44(fStack_1cc,local_1d0);
          local_1c0 = local_1d0 * fVar20;
          fStack_1bc = fStack_1cc * fVar20;
          local_1b8 = CONCAT44(fStack_1bc,local_1c0);
          fStack_1a4 = (float)local_1e8._s_0.Y * local_1d8._4_4_;
          local_218._s_0.X = (double)local_1c0;
          dVar8 = (double)fStack_1bc;
          local_1a8 = (float)local_1e8._s_0.X * (float)local_1d8;
          local_1a0 = CONCAT44(fStack_1a4,local_1a8);
          local_198 = local_1a8 * fVar20;
          fStack_194 = fStack_1a4 * fVar20;
          local_190 = CONCAT44(fStack_194,local_198);
          local_1e8._s_0.X = (double)local_198;
          local_1e8._s_0.Y = (double)fStack_194;
          local_218._s_0.Y = dVar8;
          local_1b0 = local_1d8;
          if ((this->WindowTitleBarState).Mode == VerticalBox) {
            if (((this->WindowTitleBarVerticalBox).Object == (SBox *)0x0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar11)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            FVar13 = SWidget::GetDesiredSize((SWidget *)(this->WindowTitleBarVerticalBox).Object);
            if ((double)*(float *)((longlong)FVar13 + 4) < dVar8) {
              if (((this->WindowTitleBarVerticalBox).Object == (SBox *)0x0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar11)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              FVar13 = SWidget::GetDesiredSize((SWidget *)(this->WindowTitleBarVerticalBox).Object);
              local_218._s_0.Y = dVar8 + (double)(float)(*(uint *)((longlong)FVar13 + 4) ^ uVar9);
            }
          }
          pFVar10 = local_118.Object;
          if ((local_118.Object == (FPlayerLayer *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar6 = pFVar10->Slot;
          local_170 = 1;
          local_180._s_0.X = local_218._s_0.X;
          local_180._s_0.Y = local_218._s_0.Y;
          local_158 = 0;
          local_168.AccessDetector.State =
               (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
          FStack_160.Data = (FScriptContainerElement *)0x0;
          SlateAttributePrivate::
          TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
          ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
                    *)&pFVar6->Size,(ISlateAttributeContainer *)&pFVar6->_padding_,
                   (TAttribute<UE::Math::TVector2<double>_> *)&local_180._s_0,None);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_168,(FWriteAccessScope *)&local_108);
          if (((int)local_158 != 0) && (FStack_160.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)FStack_160.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&FStack_160,0,0,0x10);
            local_158 = local_158 & 0xffffffff00000000;
          }
          if (local_108.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
          }
          if (FStack_160.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_160.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_168.AccessDetector);
          pFVar6 = pFVar10->Slot;
          local_140 = 1;
          local_150._s_0.X = local_1e8._s_0.X;
          local_150._s_0.Y = local_1e8._s_0.Y;
          local_128 = 0;
          local_138.AccessDetector.State =
               (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
          FStack_130.Data = (FScriptContainerElement *)0x0;
          SlateAttributePrivate::
          TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
          ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
                    *)&pFVar6->Position,(ISlateAttributeContainer *)&pFVar6->_padding_,
                   (TAttribute<UE::Math::TVector2<double>_> *)&local_150._s_0,None);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_138,(FWriteAccessScope *)&local_f0);
          if (((int)local_128 != 0) && (FStack_130.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)FStack_130.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&FStack_130,0,0,0x10);
            local_128 = local_128 & 0xffffffff00000000;
          }
          if (local_f0.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f0.Accessor,&local_f0);
          }
          if (FStack_130.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_130.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_138.AccessDetector);
          FVar15.ReferenceController = local_118.SharedReferenceCount.ReferenceController;
        }
        else {
          FVar15.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          local_1f8.ObjectIndex = 0;
          local_1f8.ObjectSerialNumber = 0;
          if (pUVar2 != (ULocalPlayer *)0x0) {
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar2);
            }
            local_200.ObjectIndex = 0;
            local_200.ObjectSerialNumber = 0;
            local_120 = pUVar2;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar2);
            }
            FWeakObjectPtr::operator=(&local_200,(FObjectPtr)&local_120);
            local_1f8.ObjectIndex = local_200.ObjectIndex;
            local_1f8.ObjectSerialNumber = local_200.ObjectSerialNumber;
          }
          pTVar14 = TSet<TTuple<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>,0>,FDefaultSetAllocator>
                            *)&this->PlayerLayers,&local_1f8);
          if (pTVar14 != (TTuple<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>_> *)0x0) {
            FVar15.ReferenceController = *(TReferenceControllerBase<1> **)&pTVar14->field_0x10;
            lVar4 = *(longlong *)&pTVar14->field_0x8;
            if (FVar15.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (FVar15.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)(FVar15.ReferenceController)->SharedReferenceCount + 1);
              UNLOCK();
            }
            if (lVar4 != 0) {
              local_c8 = 1;
              local_c0._16_8_ = 0;
              local_d8._s_0.X = 0.0;
              local_d8._s_0.Y = 0.0;
              local_c0._0_8_ = 0;
              local_c0._8_8_ = 0;
              SlateAttributePrivate::
              TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
              ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
                        *)(*(longlong *)(lVar4 + 0x20) + 0x40),
                       (ISlateAttributeContainer *)(*(longlong *)(lVar4 + 0x20) + 0x20),
                       (TAttribute<UE::Math::TVector2<double>_> *)&local_d8._s_0,None);
              TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                        (&local_c0);
              local_98 = 1;
              local_90[0]._16_8_ = 0;
              local_a8._s_0.X = 0.0;
              local_a8._s_0.Y = 0.0;
              local_90[0]._0_8_ = 0;
              local_90[0]._8_8_ = 0;
              SlateAttributePrivate::
              TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
              ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
                        *)(*(longlong *)(lVar4 + 0x20) + 0x30),
                       (ISlateAttributeContainer *)(*(longlong *)(lVar4 + 0x20) + 0x20),
                       (TAttribute<UE::Math::TVector2<double>_> *)&local_a8._s_0,None);
              TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                        (local_90);
            }
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar15.ReferenceController);
        uVar19 = uVar19 + 1;
        local_188 = local_188 + 8;
        local_1f0 = local_1f0 + 0x18;
        uVar16 = (ulonglong)(int)uVar18;
        iVar17 = param_3->ArrayNum;
      } while ((int)uVar19 < iVar17);
    }
  }
  return;
}

// AddWidgetForPlayer @ 1486a6060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
SGameLayerManager::AddWidgetForPlayer
          (SGameLayerManager *this,ULocalPlayer *param_1,TSharedRef<SWidget,1> *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  FScopedWidgetSlotArguments *pFVar3;
  undefined1 auStack_108 [32];
  SWidget *local_e8;
  FSharedReferencer<1> local_e0;
  TSharedPtr<SGameLayerManager::FPlayerLayer,1> local_d8;
  FScopedWidgetSlotArguments local_c8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  FindOrCreatePlayerLayer((SGameLayerManager *)&this[-1]._padding_,&local_d8,param_1);
  if (local_d8.Object == (FPlayerLayer *)0x0) {
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
  if (((local_d8.Object)->Widget).Object == (SOverlay *)0x0) {
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
  pFVar3 = SOverlay::AddSlot(((local_d8.Object)->Widget).Object,&local_c8,param_3);
  local_e0.ReferenceController = (param_2->SharedReferenceCount).ReferenceController;
  local_e8 = param_2->Object;
  if (local_e0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_e0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_e0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SWidget **)&pFVar3->_padding_ != &local_e8) {
    pFVar3->_padding_ = (longlong)local_e8;
    local_e8 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar3->_padding_,&local_e0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e0.ReferenceController);
  TPanelChildren<SOverlay::FOverlaySlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// ClearWidgets @ 1486a8c30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall SGameLayerManager::ClearWidgets(SGameLayerManager *this)

{
  int iVar1;
  uint uVar2;
  SWidget *pSVar3;
  SOverlay *this_00;
  longlong lVar4;
  code *pcVar5;
  atomic<int> aVar6;
  bool bVar7;
  atomic<int> aVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  longlong *plVar13;
  TReferenceControllerBase<1> *pTVar14;
  longlong *plVar15;
  uint uVar16;
  longlong *plVar17;
  undefined1 local_res8 [8];
  uint in_stack_ffffffffffffff78;
  int *in_stack_ffffffffffffff80;
  int *piVar18;
  TSharedRef<SWidget,1> local_78;
  undefined8 local_68;
  TReferenceControllerBase<1> *pTStack_60;
  TIterator local_58;
  
  if ((this->_padding_ == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  SCanvas::ClearChildren((SCanvas *)this->_padding_);
  plVar13 = &this->_padding_;
  iVar1 = (int)this->_padding_;
  plVar15 = (longlong *)*plVar13;
  plVar17 = plVar15 + (longlong)iVar1 * 2;
LAB_1486a8cb0:
  do {
    if ((int)this->_padding_ != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TWeakPtr<SWidget,1>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (plVar15 == plVar17) {
      DestructItems<TWeakPtr<SWidget,1>,int>((TWeakPtr<SWidget,1> *)*plVar13,(int)this->_padding_);
      iVar1 = *(int *)((longlong)&this->_padding_ + 4);
      piVar18 = (int *)((longlong)&this->_padding_ + 4);
      *(undefined4 *)&this->_padding_ = 0;
      if (iVar1 != 0) {
        in_stack_ffffffffffffff78 = 0;
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)plVar13,0,piVar18);
        in_stack_ffffffffffffff80 = piVar18;
      }
      if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
        do {
          TSet<TTuple<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>,0>,FDefaultSetAllocator>
          ::TIterator::TIterator
                    (&local_58,
                     (TSet<TTuple<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>,0>,FDefaultSetAllocator>
                      *)&this->_padding_);
          lVar10 = (longlong)(int)((ulonglong)local_58._padding_ >> 0x20) * 0x20;
          pTVar14 = *(TReferenceControllerBase<1> **)
                     (*(longlong *)local_58._padding_ + 0x10 + lVar10);
          lVar4 = *(longlong *)(*(longlong *)local_58._padding_ + 8 + lVar10);
          if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
            UNLOCK();
          }
          if (lVar4 != 0) {
            *(undefined8 *)(lVar4 + 0x20) = 0;
          }
          if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
            uVar2 = *(uint *)(*(longlong *)local_58._padding_ + 4 + lVar10);
            iVar1 = *(int *)(*(longlong *)local_58._padding_ + lVar10);
            uVar11 = iVar1 - uVar2 ^ uVar2 >> 0xd;
            uVar9 = (-0x61c88647 - uVar11) - uVar2 ^ uVar11 << 8;
            uVar16 = (uVar2 - uVar9) - uVar11 ^ uVar9 >> 0xd;
            uVar11 = (uVar11 - uVar16) - uVar9 ^ uVar16 >> 0xc;
            uVar9 = (uVar9 - uVar11) - uVar16 ^ uVar11 << 0x10;
            uVar16 = (uVar16 - uVar9) - uVar11 ^ uVar9 >> 5;
            uVar11 = (uVar11 - uVar16) - uVar9 ^ uVar16 >> 3;
            uVar9 = (uVar9 - uVar11) - uVar16 ^ uVar11 << 10;
            plVar13 = &this->_padding_;
            if ((longlong *)this->_padding_ != (longlong *)0x0) {
              plVar13 = (longlong *)this->_padding_;
            }
            iVar12 = *(int *)((longlong)plVar13 +
                             ((longlong)(int)this->_padding_ - 1U &
                             (longlong)(int)((uVar16 - uVar9) - uVar11 ^ uVar9 >> 0xf)) * 4);
            if (iVar12 != -1) {
              lVar4 = this->_padding_;
              do {
                lVar10 = (longlong)iVar12 * 0x20;
                if ((*(int *)(lVar10 + lVar4) == iVar1) && (*(uint *)(lVar10 + 4 + lVar4) == uVar2))
                {
                  TSet<TTuple<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>,0>,FDefaultSetAllocator>
                  ::RemoveByIndex((TSet<TTuple<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>,0>,FDefaultSetAllocator>
                                   *)&this->_padding_,iVar12);
                  break;
                }
                iVar12 = *(int *)(lVar10 + 0x18 + lVar4);
              } while (iVar12 != -1);
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar14);
        } while ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4));
      }
      local_68 = 0;
      pTStack_60 = (TReferenceControllerBase<1> *)0x0;
      (**(code **)(this->_padding_ + 0x78))
                (this,&local_68,0,0,in_stack_ffffffffffffff78 & 0xffffff00,
                 (ulonglong)in_stack_ffffffffffffff80 & 0xffffffffffffff00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_60);
      return;
    }
    pTVar14 = (TReferenceControllerBase<1> *)plVar15[1];
    if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
LAB_1486a8cf4:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
      plVar15 = plVar15 + 2;
      goto LAB_1486a8cb0;
    }
    aVar6 = pTVar14->SharedReferenceCount;
    do {
      if (aVar6 == (atomic<int>)0x0) {
        pTVar14 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1486a8cf4;
      }
      LOCK();
      aVar8 = pTVar14->SharedReferenceCount;
      bVar7 = aVar6 == aVar8;
      if (bVar7) {
        pTVar14->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar8 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar8;
    } while (!bVar7);
    pSVar3 = (SWidget *)*plVar15;
    if (pSVar3 == (SWidget *)0x0) goto LAB_1486a8cf4;
    if ((this->_padding_ == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    this_00 = (SOverlay *)this->_padding_;
    LOCK();
    pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
    UNLOCK();
    local_78.Object = pSVar3;
    local_78.SharedReferenceCount.ReferenceController = pTVar14;
    if ((pSVar3 == (SWidget *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    SOverlay::RemoveSlot(this_00,&local_78);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
    plVar15 = plVar15 + 2;
  } while( true );
}

// ClearWidgetsForPlayer @ 1486a8fa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
SGameLayerManager::ClearWidgetsForPlayer(SGameLayerManager *this,ULocalPlayer *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TTuple<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>_> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FWeakObjectPtr local_res8;
  FObjectKey local_res10;
  ULocalPlayer *local_res18 [2];
  
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  if (param_1 != (ULocalPlayer *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
    local_res10.ObjectIndex = local_res8.ObjectIndex;
    local_res10.ObjectSerialNumber = local_res8.ObjectSerialNumber;
  }
  pTVar4 = TSet<TTuple<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>,0>,FDefaultSetAllocator>
                   *)&this->_padding_,&local_res10);
  if (pTVar4 != (TTuple<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>_> *)0x0) {
    pTVar5 = *(TReferenceControllerBase<1> **)&pTVar4->field_0x10;
    lVar1 = *(longlong *)&pTVar4->field_0x8;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (lVar1 != 0) {
      if (*(longlong *)(lVar1 + 0x10) == 0) {
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
      SOverlay::ClearChildren(*(SOverlay **)(lVar1 + 0x10));
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return;
}

// Construct @ 1486a9cd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall SGameLayerManager::Construct(SGameLayerManager *this,FArguments *param_1)

{
  byte *pbVar1;
  int *piVar2;
  SWidget *pSVar3;
  SBox *pSVar4;
  SVerticalBox *pSVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  FSharedReferencer<1> FVar9;
  FSharedReferencer<1> FVar10;
  FSharedReferencer<1> FVar11;
  SCanvas *pSVar12;
  FSharedReferencer<1> FVar13;
  bool bVar14;
  char cVar15;
  byte bVar16;
  int iVar17;
  FArguments *pFVar18;
  undefined8 *puVar19;
  TSharedRef<SWidget_const_,1> *pTVar20;
  ulong64 uVar21;
  FArguments *pFVar22;
  FSlotArguments *pFVar23;
  FArguments *pFVar24;
  FArguments *pFVar25;
  TSharedRef<SBox,1> *pTVar26;
  TSharedRef<SWindowTitleBarArea,1> *pTVar27;
  FArguments *pFVar28;
  FSlotArguments *pFVar29;
  FArguments *pFVar30;
  TSharedRef<SVerticalBox,1> *pTVar31;
  FArguments *pFVar32;
  FArguments *pFVar33;
  STooltipPresenter *pSVar34;
  STooltipPresenter *pSVar35;
  SPopup *pSVar36;
  SPopup *pSVar37;
  FArguments *pFVar38;
  SDebugCanvas *pSVar39;
  SDebugCanvas *pSVar40;
  SOverlay *pSVar41;
  SOverlay *pSVar42;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *pTVar43;
  SDPIScaler *pSVar44;
  SDPIScaler *pSVar45;
  UGameEngine *pUVar46;
  SWindowTitleBarArea *pSVar47;
  TSharedPtr<SWindow,1> *pTVar48;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *this_00;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar49;
  UGeneralProjectSettings *pUVar50;
  TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *pTVar51;
  longlong lVar52;
  longlong *plVar53;
  TReferenceControllerBase<1> *pTVar54;
  undefined4 local_res8;
  undefined4 uStackX_c;
  T0RequiredArgs local_res10 [8];
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  T0RequiredArgs *pTVar55;
  undefined8 in_stack_ffffffffffffcf40;
  undefined7 uVar60;
  undefined8 uVar56;
  TReferenceControllerBase<1> **ppTVar57;
  TReferenceControllerBase<1> **ppTVar58;
  ulonglong uVar59;
  T0RequiredArgs local_3098;
  T0RequiredArgs local_3097;
  T0RequiredArgs local_3096;
  T0RequiredArgs local_3095;
  T0RequiredArgs local_3094;
  T0RequiredArgs local_3093;
  T0RequiredArgs local_3092;
  T0RequiredArgs local_3091;
  T0RequiredArgs local_3090;
  T0RequiredArgs local_308f;
  T0RequiredArgs local_308e;
  T0RequiredArgs local_308d [5];
  FArguments *local_3088;
  TReferenceControllerBase<1> *local_3078;
  undefined4 uStack_3070;
  uint uStack_306c;
  FLLMScope local_3068;
  FLLMScope local_3064;
  FLLMScope local_3060;
  FLLMScope local_305c;
  FLLMScope local_3058;
  FLLMScope local_3054;
  FLLMScope local_3050;
  FLLMScope local_304c;
  FLLMScope local_3048;
  FLLMScope local_3044;
  FLLMScope local_3040;
  FLLMScope local_303c;
  SGameLayerManager *local_3038;
  TReferenceControllerBase<1> *local_3030;
  TReferenceControllerBase<1> *pTStack_3028;
  TSharedPtr<SWindow,1> local_3020;
  CanvasType local_3010 [2];
  SWindowTitleBarArea *local_3008;
  FSharedReferencer<1> local_3000;
  CanvasType local_2ff8 [2];
  SCanvas *local_2ff0;
  FSharedReferencer<1> local_2fe8;
  SBox *local_2fe0;
  FSharedReferencer<1> local_2fd8;
  SWindowTitleBarArea *local_2fd0;
  FSharedReferencer<1> local_2fc8;
  SVerticalBox *local_2fc0;
  FSharedReferencer<1> local_2fb8;
  CanvasType local_2fb0 [2];
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_2fa8;
  TSlateDecl<SDebugCanvas,RequiredArgs::T0RequiredArgs> local_2f90;
  TSlateDecl<STooltipPresenter,RequiredArgs::T0RequiredArgs> local_2f78;
  TSlateDecl<SCanvas,RequiredArgs::T0RequiredArgs> local_2f60;
  TSlateDecl<SDPIScaler,RequiredArgs::T0RequiredArgs> local_2f48;
  TSlateDecl<SPopup,RequiredArgs::T0RequiredArgs> local_2f30;
  SWidget *local_2f18;
  TReferenceControllerBase<1> *pTStack_2f10;
  SWidget *local_2f08;
  TReferenceControllerBase<1> *pTStack_2f00;
  longlong local_2ef8;
  TReferenceControllerBase<1> *pTStack_2ef0;
  SWidget *local_2ee8;
  TReferenceControllerBase<1> *pTStack_2ee0;
  FName local_2ed8;
  FMemScope local_2ed0;
  FName local_2ec8;
  FMemScope local_2ec0;
  FName local_2eb8;
  FMemScope local_2eb0;
  FName local_2ea8;
  FMemScope local_2ea0;
  FName local_2e98;
  FMemScope local_2e90;
  FName local_2e88;
  FMemScope local_2e80;
  FName local_2e78;
  FMemScope local_2e70;
  FArguments *local_2e68;
  FName local_2e60;
  FMemScope local_2e58;
  FSlotArguments *local_2e50;
  FArguments *local_2e48;
  FArguments *local_2e40;
  FName local_2e38;
  FMemScope local_2e30;
  TReferenceControllerBase<1> *local_2e28;
  TReferenceControllerBase<1> *local_2e20;
  TReferenceControllerBase<1> *local_2e18;
  TReferenceControllerBase<1> *local_2e10;
  TReferenceControllerBase<1> *local_2e08;
  TReferenceControllerBase<1> *local_2e00;
  TReferenceControllerBase<1> *local_2df8;
  TSharedRef<SWidget,1> local_2df0;
  TSharedRef<SWidget,1> local_2de0;
  TSharedRef<SWidget,1> local_2dd0;
  FName local_2dc0;
  FMemScope local_2db8;
  FName local_2db0;
  FMemScope local_2da8;
  FName local_2da0;
  FMemScope local_2d98;
  FSceneViewport *local_2d90;
  bool local_2d88;
  TDelegate<FSceneViewport_*___cdecl(void),FDefaultDelegateUserPolicy> local_2d80;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_2d68;
  TSlateDecl<SWindowTitleBarArea,RequiredArgs::T0RequiredArgs> local_2d50;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_2d38;
  TSlateDecl<SWindowTitleBarArea,RequiredArgs::T0RequiredArgs> local_2d20;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_2d08;
  TSharedPtr<SWidget,1> local_2cf0;
  TSharedRef<SWidget,1> local_2ce0;
  undefined8 local_2cd0;
  TReferenceControllerBase<1> *pTStack_2cc8;
  code *local_2cb8;
  longlong lStack_2cb0;
  FDestructionSentinel local_2ca8;
  undefined1 *local_2c90;
  SCanvas *local_2c88;
  TReferenceControllerBase<1> *pTStack_2c80;
  SWidget *local_2c78;
  TReferenceControllerBase<1> *pTStack_2c70;
  SBox *local_2c68;
  TReferenceControllerBase<1> *pTStack_2c60;
  SBox *local_2c58;
  TReferenceControllerBase<1> *pTStack_2c50;
  SWindowTitleBarArea *local_2c48;
  TReferenceControllerBase<1> *pTStack_2c40;
  STooltipPresenter *local_2c38;
  TReferenceControllerBase<1> *pTStack_2c30;
  SWidget *local_2c28;
  TReferenceControllerBase<1> *pTStack_2c20;
  SDebugCanvas *local_2c18;
  TReferenceControllerBase<1> *pTStack_2c10;
  SOverlay *local_2c08;
  TReferenceControllerBase<1> *pTStack_2c00;
  SVerticalBox *local_2bf8;
  TReferenceControllerBase<1> *pTStack_2bf0;
  TSharedRef<SVerticalBox,1> local_2be8;
  TSharedRef<SVerticalBox,1> local_2bd8;
  TSharedRef<SWindowTitleBarArea,1> local_2bc8;
  TSharedRef<SBox,1> local_2bb8;
  TSharedRef<SBox,1> local_2ba8;
  TSharedRef<SWindowTitleBarArea,1> local_2b98;
  TSharedRef<SBox,1> local_2b88;
  code *local_2b78;
  longlong lStack_2b70;
  TSharedRef<SVerticalBox,1> local_2b68;
  TSharedRef<SBox,1> local_2b58;
  code *local_2b48;
  longlong lStack_2b40;
  TSharedRef<SWidget_const_,1> local_2b38;
  SBox *local_2b28;
  TReferenceControllerBase<1> *pTStack_2b20;
  SWindowTitleBarArea *local_2b18;
  TReferenceControllerBase<1> *pTStack_2b10;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_2b08;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_2af0;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_2ad8;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_2ac0;
  TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> local_2aa8;
  TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> local_2a90;
  TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> local_2a78;
  TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> local_2a60;
  TSharedPtr<SWindow,1> local_2a48;
  TSharedPtr<SWindow,1> local_2a38;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_2a28;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_2a10;
  undefined1 local_29f8 [96];
  undefined1 local_2998 [96];
  undefined1 local_2938 [96];
  undefined1 local_28d8 [96];
  undefined1 local_2878 [96];
  FSlotArguments local_2818;
  FSlotArguments local_2730;
  FSlotArguments local_2648;
  FSlotArguments local_2560;
  FArguments local_2478;
  FArguments local_2220;
  FArguments local_1fc8;
  FArguments local_1da0;
  FArguments local_1b98;
  FArguments local_1990;
  FArguments local_1788;
  FArguments local_1580;
  FArguments local_1360;
  FArguments local_1158;
  FArguments local_f50;
  FArguments local_d48;
  FArguments local_a08;
  FArguments local_6c8;
  FArguments local_388;
  undefined8 uStack_48;
  
  uStack_48 = 0x1486a9cef;
  bVar8 = false;
  bVar7 = false;
  bVar14 = false;
  local_res8 = 0;
  (this->SceneViewport).Value = (param_1->_SceneViewport).Value;
  (this->SceneViewport).bIsSet = (param_1->_SceneViewport).bIsSet;
  TDelegate<FSceneViewport_*___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->SceneViewport).Getter,&(param_1->_SceneViewport).Getter);
  pFVar18 = SDPIScaler::FArguments::FArguments(&local_1fc8);
  (pFVar18->_DPIScale).bIsSet = true;
  local_2e40 = pFVar18;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar18->_DPIScale).Getter,
             (FWriteAccessScope *)&local_2ca8);
  local_2c90 = &(pFVar18->_DPIScale).Getter.field_0x8;
  puVar19 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_2c90);
  if (puVar19 == (undefined8 *)0x0) {
    pTVar54 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    local_3020.SharedReferenceCount.ReferenceController._4_4_ = lStack_2cb0._4_4_;
    local_3020.Object = (SWindow *)GetGameViewportDPIScale;
    local_3020.SharedReferenceCount.ReferenceController._0_4_ = 0;
    pTVar20 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2b38);
    pTVar54 = (pTVar20->SharedReferenceCount).ReferenceController;
    pSVar3 = pTVar20->Object;
    if (pTVar54 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar54->SharedReferenceCount = (atomic<int>)((int)pTVar54->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar54->SharedReferenceCount = (atomic<int>)((int)pTVar54->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar19 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar21 = FDelegateHandle::GenerateNewID();
    puVar19[2] = uVar21;
    *puVar19 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSGameLayerManager___00__A6AMXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar19[3] = pSVar3;
    puVar19[4] = pTVar54;
    if (pTVar54 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar54->WeakReferenceCount = (atomic<int>)((int)pTVar54->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar8 = true;
    bVar7 = true;
    bVar14 = true;
    puVar19[5] = local_3020.Object;
    puVar19[6] = CONCAT44(local_3020.SharedReferenceCount.ReferenceController._4_4_,
                          local_3020.SharedReferenceCount.ReferenceController._0_4_);
  }
  if (bVar14) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar54);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar54);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2b38.SharedReferenceCount.ReferenceController);
  }
  if (local_2ca8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2ca8.Accessor,&local_2ca8);
  }
  pFVar22 = SVerticalBox::FArguments::FArguments(&local_1788);
  pFVar23 = SVerticalBox::Slot(&local_2648);
  pFVar23 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar23);
  pFVar24 = SWindowTitleBarArea::FArguments::FArguments(&local_2220);
  pFVar25 = SBox::FArguments::FArguments(&local_6c8);
  uVar60 = (undefined7)((ulonglong)in_stack_ffffffffffffcf40 >> 8);
  FLLMScope::FLLMScope(&local_303c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2dc0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2db8,&local_2dc0,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_2d38,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SGameLayerManager.cpp"
             ,0x78,local_res10);
  FMemScope::~FMemScope(&local_2db8);
  FLLMScope::~FLLMScope(&local_303c);
  if (local_2d38._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2d38._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2d38._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_2b28 = (this->WindowTitleBarVerticalBox).Object;
  pTStack_2b20 = (this->WindowTitleBarVerticalBox).SharedReferenceCount.ReferenceController;
  (this->WindowTitleBarVerticalBox).Object = local_2d38._Widget.Object;
  (this->WindowTitleBarVerticalBox).SharedReferenceCount.ReferenceController =
       local_2d38._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2b20);
  pTVar26 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2d38,&local_2b88,pFVar25);
  pSVar4 = pTVar26->Object;
  local_3078 = (pTVar26->SharedReferenceCount).ReferenceController;
  if (local_3078 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_3078->SharedReferenceCount = (atomic<int>)((int)local_3078->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    local_3078->SharedReferenceCount = (atomic<int>)((int)local_3078->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2ee8 = (pFVar24->_Content).Widget.Object;
  pTStack_2ee0 = (pFVar24->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar24->_Content).Widget.Object = (SWidget *)pSVar4;
  (pFVar24->_Content).Widget.SharedReferenceCount.ReferenceController = local_3078;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2ee0);
  uVar56 = CONCAT71(uVar60,1);
  FLLMScope::FLLMScope(&local_3068,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2db0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2da8,&local_2db0,true);
  TSlateDecl<SWindowTitleBarArea,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SWindowTitleBarArea,RequiredArgs::T0RequiredArgs>
            (&local_2d50,"SWindowTitleBarArea",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SGameLayerManager.cpp"
             ,0x76,local_res18);
  FMemScope::~FMemScope(&local_2da8);
  FLLMScope::~FLLMScope(&local_3068);
  if (local_2d50._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2d50._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2d50._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_2b18 = (this->TitleBarAreaVerticalBox).Object;
  pTStack_2b10 = (this->TitleBarAreaVerticalBox).SharedReferenceCount.ReferenceController;
  (this->TitleBarAreaVerticalBox).Object = local_2d50._Widget.Object;
  (this->TitleBarAreaVerticalBox).SharedReferenceCount.ReferenceController =
       local_2d50._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2b10);
  pTVar27 = TSlateDecl<SWindowTitleBarArea,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2d50,&local_2b98,pFVar24);
  local_3008 = pTVar27->Object;
  local_3000.ReferenceController = (pTVar27->SharedReferenceCount).ReferenceController;
  if (local_3000.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3000.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_3000.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_3000.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_3000.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2df8 = local_3000.ReferenceController;
  if ((SWindowTitleBarArea **)&pFVar23->field_0x8 != &local_3008) {
    *(SWindowTitleBarArea **)&pFVar23->field_0x8 = local_3008;
    local_3008 = (SWindowTitleBarArea *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar23->field_0x10,&local_3000);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3000.ReferenceController);
  local_2e48 = SVerticalBox::FArguments::operator+(pFVar22,pFVar23);
  local_2e50 = SVerticalBox::Slot(&local_2730);
  pFVar28 = SOverlay::FArguments::FArguments(&local_1990);
  pFVar29 = SOverlay::Slot((FSlotArguments *)local_2878,100);
  pFVar30 = SCanvas::FArguments::FArguments(&local_1b98);
  uVar56 = CONCAT71((int7)((ulonglong)uVar56 >> 8),1);
  FLLMScope::FLLMScope(&local_3064,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2da0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2d98,&local_2da0,true);
  TSlateDecl<SCanvas,RequiredArgs::T0RequiredArgs>::TSlateDecl<SCanvas,RequiredArgs::T0RequiredArgs>
            (&local_2f60,"SCanvas",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SGameLayerManager.cpp"
             ,0x82,local_res20);
  FMemScope::~FMemScope(&local_2d98);
  FLLMScope::~FLLMScope(&local_3064);
  if (local_2f60._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2f60._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2f60._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_2c88 = (this->PlayerCanvas).Object;
  pTStack_2c80 = (this->PlayerCanvas).SharedReferenceCount.ReferenceController;
  (this->PlayerCanvas).Object = local_2f60._Widget.Object;
  (this->PlayerCanvas).SharedReferenceCount.ReferenceController =
       local_2f60._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2c80);
  pSVar12 = local_2f60._Widget.Object;
  if ((local_2f60._Widget.Object == (SCanvas *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_2f60._Widget.Object,(FSlateBaseNamedArgs *)pFVar30);
  SCanvas::Construct(local_2f60._Widget.Object,pFVar30);
  if ((local_2f60._Widget.Object == (SCanvas *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((local_2f60._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar15 = (**(code **)((local_2f60._Widget.Object)->_padding_ + 0x228))
                       (local_2f60._Widget.Object);
    bVar16 = 0;
    if (cVar15 != '\0') goto LAB_1486aa2a2;
  }
  else {
LAB_1486aa2a2:
    bVar16 = 0x20;
  }
  *(byte *)&(local_2f60._Widget.Object)->_padding_ =
       (byte)(local_2f60._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_2f60._Widget.Object)->_padding_ =
       (byte)(local_2f60._Widget.Object)->_padding_ | bVar16;
  if ((local_2f60._Widget.Object == (SCanvas *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pbVar1 = (byte *)((longlong)&(local_2f60._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_2f60._Widget.Object == (SCanvas *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FVar11.ReferenceController = local_2f60._Widget.SharedReferenceCount.ReferenceController;
  local_2e00 = local_2f60._Widget.SharedReferenceCount.ReferenceController;
  local_2f60._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_2f60._Widget.Object = (SCanvas *)0x0;
  if ((pSVar12 == (SCanvas *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_2ff0 = pSVar12;
  local_2fe8.ReferenceController = FVar11.ReferenceController;
  if (FVar11.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar11.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar11.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar11.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar11.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SCanvas **)&pFVar29->_padding_ != &local_2ff0) {
    pFVar29->_padding_ = (longlong)pSVar12;
    local_2ff0 = (SCanvas *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar29->_padding_,&local_2fe8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2fe8.ReferenceController);
  pFVar28 = SOverlay::FArguments::operator+(pFVar28,pFVar29);
  pFVar29 = SOverlay::Slot((FSlotArguments *)local_28d8,200);
  pFVar25 = SBox::FArguments::FArguments(&local_a08);
  pTVar54 = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  pSVar3 = (param_1->_Content).Widget.Object;
  if (pTVar54 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar54->SharedReferenceCount = (atomic<int>)((int)pTVar54->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2c78 = (pFVar25->_Content).Widget.Object;
  pTStack_2c70 = (pFVar25->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar25->_Content).Widget.Object = pSVar3;
  (pFVar25->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar54;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2c70);
  uVar56 = CONCAT71((int7)((ulonglong)uVar56 >> 8),1);
  FLLMScope::FLLMScope(&local_3060,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2ed8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2ed0,&local_2ed8,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_2d68,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SGameLayerManager.cpp"
             ,0x87,&local_3098);
  FMemScope::~FMemScope(&local_2ed0);
  FLLMScope::~FLLMScope(&local_3060);
  if (local_2d68._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2d68._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2d68._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_2c68 = (this->ViewportSlotContainer).Object;
  pTStack_2c60 = (this->ViewportSlotContainer).SharedReferenceCount.ReferenceController;
  (this->ViewportSlotContainer).Object = local_2d68._Widget.Object;
  (this->ViewportSlotContainer).SharedReferenceCount.ReferenceController =
       local_2d68._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2c60);
  pTVar26 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2d68,&local_2ba8,pFVar25);
  local_2fe0 = pTVar26->Object;
  local_2fd8.ReferenceController = (pTVar26->SharedReferenceCount).ReferenceController;
  if (local_2fd8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2fd8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_2fd8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_2fd8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_2fd8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2e08 = local_2fd8.ReferenceController;
  if ((SBox **)&pFVar29->_padding_ != &local_2fe0) {
    pFVar29->_padding_ = (longlong)local_2fe0;
    local_2fe0 = (SBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar29->_padding_,&local_2fd8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2fd8.ReferenceController);
  local_3088 = SOverlay::FArguments::operator+(pFVar28,pFVar29);
  pFVar29 = SOverlay::Slot((FSlotArguments *)local_2938,300);
  pFVar22 = SVerticalBox::FArguments::FArguments(&local_1da0);
  pFVar23 = SVerticalBox::Slot(&local_2818);
  pFVar23 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar23);
  pFVar24 = SWindowTitleBarArea::FArguments::FArguments(&local_2478);
  pFVar25 = SBox::FArguments::FArguments(&local_d48);
  uVar60 = (undefined7)((ulonglong)uVar56 >> 8);
  FLLMScope::FLLMScope(&local_305c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2ec8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2ec0,&local_2ec8,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_2d08,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SGameLayerManager.cpp"
             ,0x96,&local_3097);
  FMemScope::~FMemScope(&local_2ec0);
  FLLMScope::~FLLMScope(&local_305c);
  if (local_2d08._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2d08._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2d08._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_2c58 = (this->WindowTitleBarOverlay).Object;
  pTStack_2c50 = (this->WindowTitleBarOverlay).SharedReferenceCount.ReferenceController;
  (this->WindowTitleBarOverlay).Object = local_2d08._Widget.Object;
  (this->WindowTitleBarOverlay).SharedReferenceCount.ReferenceController =
       local_2d08._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2c50);
  pTVar26 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2d08,&local_2bb8,pFVar25);
  pSVar4 = pTVar26->Object;
  local_2e10 = (pTVar26->SharedReferenceCount).ReferenceController;
  if (local_2e10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_2e10->SharedReferenceCount = (atomic<int>)((int)local_2e10->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    local_2e10->SharedReferenceCount = (atomic<int>)((int)local_2e10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2f18 = (pFVar24->_Content).Widget.Object;
  pTStack_2f10 = (pFVar24->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar24->_Content).Widget.Object = (SWidget *)pSVar4;
  (pFVar24->_Content).Widget.SharedReferenceCount.ReferenceController = local_2e10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2f10);
  uVar56 = CONCAT71(uVar60,1);
  FLLMScope::FLLMScope(&local_3058,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2eb8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2eb0,&local_2eb8,true);
  TSlateDecl<SWindowTitleBarArea,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SWindowTitleBarArea,RequiredArgs::T0RequiredArgs>
            (&local_2d20,"SWindowTitleBarArea",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SGameLayerManager.cpp"
             ,0x94,&local_3096);
  FMemScope::~FMemScope(&local_2eb0);
  FLLMScope::~FLLMScope(&local_3058);
  if (local_2d20._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2d20._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2d20._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_2c48 = (this->TitleBarAreaOverlay).Object;
  pTStack_2c40 = (this->TitleBarAreaOverlay).SharedReferenceCount.ReferenceController;
  (this->TitleBarAreaOverlay).Object = local_2d20._Widget.Object;
  (this->TitleBarAreaOverlay).SharedReferenceCount.ReferenceController =
       local_2d20._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2c40);
  pTVar27 = TSlateDecl<SWindowTitleBarArea,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2d20,&local_2bc8,pFVar24);
  local_2fd0 = pTVar27->Object;
  local_2fc8.ReferenceController = (pTVar27->SharedReferenceCount).ReferenceController;
  if (local_2fc8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2fc8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_2fc8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_2fc8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_2fc8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2e18 = local_2fc8.ReferenceController;
  if ((SWindowTitleBarArea **)&pFVar23->field_0x8 != &local_2fd0) {
    *(SWindowTitleBarArea **)&pFVar23->field_0x8 = local_2fd0;
    local_2fd0 = (SWindowTitleBarArea *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar23->field_0x10,&local_2fc8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2fc8.ReferenceController);
  pFVar22 = SVerticalBox::FArguments::operator+(pFVar22,pFVar23);
  uVar56 = CONCAT71((int7)((ulonglong)uVar56 >> 8),1);
  FLLMScope::FLLMScope(&local_3040,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2ea8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2ea0,&local_2ea8,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_2b08,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SGameLayerManager.cpp"
             ,0x8f,&local_3095);
  FMemScope::~FMemScope(&local_2ea0);
  FLLMScope::~FLLMScope(&local_3040);
  pTVar31 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2b08,&local_2bd8,pFVar22);
  local_2fc0 = pTVar31->Object;
  local_2fb8.ReferenceController = (pTVar31->SharedReferenceCount).ReferenceController;
  if (local_2fb8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2fb8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_2fb8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_2fb8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_2fb8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2e20 = local_2fb8.ReferenceController;
  if ((SVerticalBox **)&pFVar29->_padding_ != &local_2fc0) {
    pFVar29->_padding_ = (longlong)local_2fc0;
    local_2fc0 = (SVerticalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar29->_padding_,&local_2fb8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2fb8.ReferenceController);
  pFVar28 = SOverlay::FArguments::operator+(local_3088,pFVar29);
  local_3088 = (FArguments *)SOverlay::Slot((FSlotArguments *)local_2998,400);
  pFVar32 = SPopup::FArguments::FArguments(&local_1158);
  pFVar33 = STooltipPresenter::FArguments::FArguments(&local_1360);
  uVar56 = CONCAT71((int7)((ulonglong)uVar56 >> 8),1);
  FLLMScope::FLLMScope(&local_3054,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2e98 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2e90,&local_2e98,true);
  TSlateDecl<STooltipPresenter,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STooltipPresenter,RequiredArgs::T0RequiredArgs>
            (&local_2f78,"STooltipPresenter",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SGameLayerManager.cpp"
             ,0x9f,&local_3094);
  FMemScope::~FMemScope(&local_2e90);
  FLLMScope::~FLLMScope(&local_3054);
  if (local_2f78._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2f78._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2f78._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_2c38 = (this->TooltipPresenter).Object;
  pTStack_2c30 = (this->TooltipPresenter).SharedReferenceCount.ReferenceController;
  (this->TooltipPresenter).Object = local_2f78._Widget.Object;
  (this->TooltipPresenter).SharedReferenceCount.ReferenceController =
       local_2f78._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2c30);
  pSVar34 = TSharedPtr<STooltipPresenter,1>::operator->(&local_2f78._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar34,(FSlateBaseNamedArgs *)pFVar33);
  pSVar34 = local_2f78._Widget.Object;
  STooltipPresenter::Construct(local_2f78._Widget.Object,pFVar33);
  pSVar35 = TSharedPtr<STooltipPresenter,1>::operator->(&local_2f78._Widget);
  if ((pSVar35->_padding_ & 0x10) == 0) {
    cVar15 = (**(code **)(pSVar35->_padding_ + 0x228))(pSVar35);
    bVar16 = 0;
    if (cVar15 != '\0') goto LAB_1486aaa38;
  }
  else {
LAB_1486aaa38:
    bVar16 = 0x20;
  }
  *(byte *)&pSVar35->_padding_ = (byte)pSVar35->_padding_ & 0xdf;
  *(byte *)&pSVar35->_padding_ = (byte)pSVar35->_padding_ | bVar16;
  pSVar35 = TSharedPtr<STooltipPresenter,1>::operator->(&local_2f78._Widget);
  pbVar1 = (byte *)((longlong)&pSVar35->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_2f78._Widget.Object == (STooltipPresenter *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FVar11.ReferenceController = local_2f78._Widget.SharedReferenceCount.ReferenceController;
  local_2f78._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_2f78._Widget.Object = (STooltipPresenter *)0x0;
  if ((pSVar34 == (STooltipPresenter *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (FVar11.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar11.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar11.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar11.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar11.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2c28 = (pFVar32->_Content).Widget.Object;
  pTStack_2c20 = (pFVar32->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar32->_Content).Widget.Object = (SWidget *)pSVar34;
  (pFVar32->_Content).Widget.SharedReferenceCount.ReferenceController = FVar11.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2c20);
  ppTVar57 = (TReferenceControllerBase<1> **)CONCAT71((int7)((ulonglong)uVar56 >> 8),1);
  FLLMScope::FLLMScope(&local_3050,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2e88 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2e80,&local_2e88,true);
  TSlateDecl<SPopup,RequiredArgs::T0RequiredArgs>::TSlateDecl<SPopup,RequiredArgs::T0RequiredArgs>
            (&local_2f30,"SPopup",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SGameLayerManager.cpp"
             ,0x9d,&local_3093);
  FMemScope::~FMemScope(&local_2e80);
  FLLMScope::~FLLMScope(&local_3050);
  pSVar36 = TSharedPtr<SPopup,1>::operator->(&local_2f30._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar36,(FSlateBaseNamedArgs *)pFVar32);
  pSVar36 = local_2f30._Widget.Object;
  SPopup::Construct(local_2f30._Widget.Object,pFVar32);
  pSVar37 = TSharedPtr<SPopup,1>::operator->(&local_2f30._Widget);
  if ((pSVar37->field_0x30 & 0x10) == 0) {
    cVar15 = (**(code **)(*(longlong *)pSVar37 + 0x228))(pSVar37);
    bVar16 = 0;
    if (cVar15 == '\0') goto LAB_1486aabc4;
  }
  bVar16 = 0x20;
LAB_1486aabc4:
  pSVar37->field_0x30 = pSVar37->field_0x30 & 0xdf;
  pSVar37->field_0x30 = pSVar37->field_0x30 | bVar16;
  pSVar37 = TSharedPtr<SPopup,1>::operator->(&local_2f30._Widget);
  pSVar37->field_0x31 = pSVar37->field_0x31 | 4;
  if ((local_2f30._Widget.Object == (SPopup *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FVar10.ReferenceController = local_2f30._Widget.SharedReferenceCount.ReferenceController;
  pTVar54 = (TReferenceControllerBase<1> *)0x0;
  local_2e28 = local_2f30._Widget.SharedReferenceCount.ReferenceController;
  local_2f30._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_2f30._Widget.Object = (SPopup *)0x0;
  if ((pSVar36 == (SPopup *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_2dd0.Object = (SWidget *)pSVar36;
  local_2dd0.SharedReferenceCount.ReferenceController = FVar10.ReferenceController;
  if (FVar10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar29 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_3088,&local_2dd0);
  local_2e68 = SOverlay::FArguments::operator+(pFVar28,pFVar29);
  local_3088 = (FArguments *)SOverlay::Slot((FSlotArguments *)local_29f8,500);
  pFVar38 = SDebugCanvas::FArguments::FArguments(&local_1580);
  local_2d90 = (param_1->_SceneViewport).Value;
  local_2d88 = (param_1->_SceneViewport).bIsSet;
  local_2d80._0_8_ = 0;
  local_2d80._8_8_ = 0;
  local_2d80._16_4_ = 0;
  TDelegate<FSceneViewport_*___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&local_2d80,&(param_1->_SceneViewport).Getter);
  (pFVar38->_SceneViewport).Value = local_2d90;
  (pFVar38->_SceneViewport).bIsSet = local_2d88;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar38->_SceneViewport).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2d80);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2d80);
  plVar53 = &pFVar38->_padding_;
  pTStack_3028 = ::operator_new(0x18);
  if (pTStack_3028 == (TReferenceControllerBase<1> *)0x0) {
    local_3030 = ___xmm_00000000000000000000000000000010;
    pTStack_3028 = _UNK_150651568;
  }
  else {
    pTStack_3028->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_3028->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_3028->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFInvisibleToWidgetReflectorMetaData___00_SharedPointerInternals__6B_
    ;
    pTStack_3028[1]._padding_ = (longlong)&___7FInvisibleToWidgetReflectorMetaData__6B_;
    if ((pTStack_3028 + 1 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar14)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    LOCK();
    pTStack_3028->SharedReferenceCount = (atomic<int>)((int)pTStack_3028->SharedReferenceCount + 1);
    UNLOCK();
    pTVar54 = pTStack_3028;
    local_3030 = pTStack_3028 + 1;
  }
  ppTVar58 = (TReferenceControllerBase<1> **)*plVar53;
  if (((ppTVar58 <= &local_3030) &&
      (&local_3030 < ppTVar58 + (longlong)*(int *)((longlong)&pFVar38->_padding_ + 4) * 2)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), ppTVar57 = ppTVar58, bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar17 = (int)pFVar38->_padding_;
  piVar2 = (int *)((longlong)&pFVar38->_padding_ + 4);
  if (iVar17 == *piVar2) {
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,(ForAnyElementType *)plVar53,piVar2);
  }
  plVar53 = (longlong *)(*plVar53 + (longlong)iVar17 * 0x10);
  *(int *)&pFVar38->_padding_ = iVar17 + 1;
  *plVar53 = (longlong)local_3030;
  plVar53[1] = (longlong)pTStack_3028;
  if (pTStack_3028 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_3028->SharedReferenceCount = (atomic<int>)((int)pTStack_3028->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_3028);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar54);
  uVar56 = CONCAT71((int7)((ulonglong)ppTVar57 >> 8),1);
  FLLMScope::FLLMScope(&local_304c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2e78 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2e70,&local_2e78,true);
  TSlateDecl<SDebugCanvas,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SDebugCanvas,RequiredArgs::T0RequiredArgs>
            (&local_2f90,"SDebugCanvas",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SGameLayerManager.cpp"
             ,0xa4,&local_3092);
  FMemScope::~FMemScope(&local_2e70);
  FLLMScope::~FLLMScope(&local_304c);
  if (local_2f90._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2f90._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2f90._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_2c18 = (this->DebugCanvas).Object;
  pTStack_2c10 = (this->DebugCanvas).SharedReferenceCount.ReferenceController;
  (this->DebugCanvas).Object = local_2f90._Widget.Object;
  (this->DebugCanvas).SharedReferenceCount.ReferenceController =
       local_2f90._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2c10);
  pSVar39 = TSharedPtr<SDebugCanvas,1>::operator->(&local_2f90._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar39,(FSlateBaseNamedArgs *)pFVar38);
  pSVar39 = local_2f90._Widget.Object;
  ((local_2f90._Widget.Object)->SceneViewport).Value = (pFVar38->_SceneViewport).Value;
  ((local_2f90._Widget.Object)->SceneViewport).bIsSet = (pFVar38->_SceneViewport).bIsSet;
  TDelegate<FSceneViewport_*___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&((local_2f90._Widget.Object)->SceneViewport).Getter,&(pFVar38->_SceneViewport).Getter)
  ;
  pSVar40 = TSharedPtr<SDebugCanvas,1>::operator->(&local_2f90._Widget);
  SWidget::CacheVolatility((SWidget *)pSVar40);
  pSVar40 = TSharedPtr<SDebugCanvas,1>::operator->(&local_2f90._Widget);
  pbVar1 = (byte *)((longlong)&pSVar40->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_2f90._Widget.Object == (SDebugCanvas *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FVar10.ReferenceController = local_2f90._Widget.SharedReferenceCount.ReferenceController;
  local_2f90._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_2f90._Widget.Object = (SDebugCanvas *)0x0;
  if ((pSVar39 == (SDebugCanvas *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_2de0.Object = (SWidget *)pSVar39;
  local_2de0.SharedReferenceCount.ReferenceController = FVar10.ReferenceController;
  if (FVar10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar29 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_3088,&local_2de0);
  pFVar28 = SOverlay::FArguments::operator+(local_2e68,pFVar29);
  uVar56 = CONCAT71((int7)((ulonglong)uVar56 >> 8),1);
  FLLMScope::FLLMScope(&local_3048,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2e60 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2e58,&local_2e60,true);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
            (&local_2fa8,"SOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SGameLayerManager.cpp"
             ,0x7e,&local_3091);
  FMemScope::~FMemScope(&local_2e58);
  FLLMScope::~FLLMScope(&local_3048);
  if (local_2fa8._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2fa8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2fa8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_2c08 = (this->WindowOverlay).Object;
  pTStack_2c00 = (this->WindowOverlay).SharedReferenceCount.ReferenceController;
  (this->WindowOverlay).Object = local_2fa8._Widget.Object;
  (this->WindowOverlay).SharedReferenceCount.ReferenceController =
       local_2fa8._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2c00);
  pSVar41 = TSharedPtr<SOverlay,1>::operator->(&local_2fa8._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar41,(FSlateBaseNamedArgs *)pFVar28);
  pSVar41 = local_2fa8._Widget.Object;
  SOverlay::Construct(local_2fa8._Widget.Object,pFVar28);
  pSVar42 = TSharedPtr<SOverlay,1>::operator->(&local_2fa8._Widget);
  SWidget::CacheVolatility((SWidget *)pSVar42);
  pSVar42 = TSharedPtr<SOverlay,1>::operator->(&local_2fa8._Widget);
  pbVar1 = (byte *)((longlong)&pSVar42->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_2fa8._Widget.Object == (SOverlay *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FVar9.ReferenceController = local_2fa8._Widget.SharedReferenceCount.ReferenceController;
  local_2fa8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_2fa8._Widget.Object = (SOverlay *)0x0;
  if ((pSVar41 == (SOverlay *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_2df0.Object = (SWidget *)pSVar41;
  local_2df0.SharedReferenceCount.ReferenceController = FVar9.ReferenceController;
  if (FVar9.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar9.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar9.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar23 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_2e50,&local_2df0);
  pFVar22 = SVerticalBox::FArguments::operator+(local_2e48,pFVar23);
  pTVar43 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_2af0,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SGameLayerManager.cpp"
                       ,0x71,&local_3090);
  pSVar5 = (pTVar43->_Widget).Object;
  pTVar54 = (pTVar43->_Widget).SharedReferenceCount.ReferenceController;
  if (pTVar54 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar54->SharedReferenceCount = (atomic<int>)((int)pTVar54->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2bf8 = (this->WidgetHost).Object;
  pTStack_2bf0 = (this->WidgetHost).SharedReferenceCount.ReferenceController;
  (this->WidgetHost).Object = pSVar5;
  (this->WidgetHost).SharedReferenceCount.ReferenceController = pTVar54;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2bf0);
  pTVar31 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar43,&local_2be8,pFVar22);
  pFVar18 = local_2e40;
  pTVar54 = (pTVar31->SharedReferenceCount).ReferenceController;
  pSVar5 = pTVar31->Object;
  if (pTVar54 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar54->SharedReferenceCount = (atomic<int>)((int)pTVar54->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar54->SharedReferenceCount = (atomic<int>)((int)pTVar54->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2f08 = (local_2e40->_Content).Widget.Object;
  pTStack_2f00 = (local_2e40->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_2e40->_Content).Widget.Object = (SWidget *)pSVar5;
  (local_2e40->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar54;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2f00);
  uVar59 = CONCAT71((int7)((ulonglong)uVar56 >> 8),1);
  FLLMScope::FLLMScope(&local_3044,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2e38 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2e30,&local_2e38,true);
  TSlateDecl<SDPIScaler,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SDPIScaler,RequiredArgs::T0RequiredArgs>
            (&local_2f48,"SDPIScaler",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SGameLayerManager.cpp"
             ,0x6d,&local_308f);
  FMemScope::~FMemScope(&local_2e30);
  FLLMScope::~FLLMScope(&local_3044);
  pSVar44 = TSharedPtr<SDPIScaler,1>::operator->(&local_2f48._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar44,(FSlateBaseNamedArgs *)pFVar18);
  pSVar44 = local_2f48._Widget.Object;
  SDPIScaler::Construct(local_2f48._Widget.Object,pFVar18);
  pSVar45 = TSharedPtr<SDPIScaler,1>::operator->(&local_2f48._Widget);
  SWidget::CacheVolatility((SWidget *)pSVar45);
  pSVar45 = TSharedPtr<SDPIScaler,1>::operator->(&local_2f48._Widget);
  pbVar1 = (byte *)((longlong)&pSVar45->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_2f48._Widget.Object == (SDPIScaler *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FVar13.ReferenceController = local_2f48._Widget.SharedReferenceCount.ReferenceController;
  local_2f48._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_2f48._Widget.Object = (SDPIScaler *)0x0;
  if ((pSVar44 == (SDPIScaler *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f48._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar54);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2be8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2af0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2df0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar9.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2fa8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2de0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f90._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1580._SceneViewport.Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1580);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_29f8 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_29f8._16_8_);
  if ((undefined8 *)local_29f8._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_29f8._0_8_)(local_29f8._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2dd0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2e28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f30._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar11.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar11.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f78._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1360._Content.Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1360);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1158._Content.Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1158);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_2998 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_2998._16_8_);
  if ((undefined8 *)local_2998._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_2998._0_8_)(local_2998._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2e20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2bd8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2b08._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2e18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2bc8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2d20._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2e10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2bb8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2d08._Widget.SharedReferenceCount.ReferenceController);
  SBox::FArguments::~FArguments(&local_d48);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2478._RequestToggleFullscreen);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2478._Content.Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2478._Padding.Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_2478);
  SBoxPanel::TSlot<SVerticalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_2818);
  TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_1da0._Slots);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1da0);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_2938 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_2938._16_8_);
  if ((undefined8 *)local_2938._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_2938._0_8_)(local_2938._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2e08);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2ba8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2d68._Widget.SharedReferenceCount.ReferenceController);
  SBox::FArguments::~FArguments(&local_a08);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_28d8 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_28d8._16_8_);
  if ((undefined8 *)local_28d8._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_28d8._0_8_)(local_28d8._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2e00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2e00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f60._Widget.SharedReferenceCount.ReferenceController);
  TArray<SCanvas::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SCanvas::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_1b98._Slots);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1b98);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_2878 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_2878._16_8_);
  if ((undefined8 *)local_2878._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_2878._0_8_)(local_2878._0_8_,1);
  }
  TArray<SOverlay::FOverlaySlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SOverlay::FOverlaySlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_1990._Slots);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1990);
  SBoxPanel::TSlot<SVerticalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_2730);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2df8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2b98.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2d50._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3078);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2b88.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2d38._Widget.SharedReferenceCount.ReferenceController);
  SBox::FArguments::~FArguments(&local_6c8);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2220._RequestToggleFullscreen);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2220._Content.Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2220._Padding.Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_2220);
  SBoxPanel::TSlot<SVerticalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_2648);
  TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_1788._Slots);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1788);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1fc8._Content.Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1fc8._DPIScale.Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1fc8);
  plVar53 = &this->_padding_;
  if (FVar13.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar53);
  }
  else {
    LOCK();
    (FVar13.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar13.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar53);
    LOCK();
    (FVar13.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar13.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2ef8 = this->_padding_;
  pTStack_2ef0 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar44;
  this->_padding_ = (longlong)FVar13.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2ef0);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)plVar53);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar13.ReferenceController);
  pUVar46 = Cast<UGameEngine,UEngine>(GEngine);
  if (pUVar46 != (UGameEngine *)0x0) {
    TSharedPtr<SWindow,1>::TSharedPtr<SWindow,1><SWindow>(&local_3020,&pUVar46->GameViewportWindow);
    if (local_3020.Object != (SWindow *)0x0) {
      pSVar47 = TSharedPtr<SWindowTitleBarArea,1>::operator->(&this->TitleBarAreaOverlay);
      pTVar48 = TSharedPtr<SWindow,1>::TSharedPtr<SWindow,1>(&local_2a38,&local_3020);
      SWindowTitleBarArea::SetGameWindow(pSVar47,pTVar48);
      pSVar47 = TSharedPtr<SWindowTitleBarArea,1>::operator->(&this->TitleBarAreaVerticalBox);
      pTVar48 = TSharedPtr<SWindow,1>::TSharedPtr<SWindow,1>(&local_2a48,&local_3020);
      SWindowTitleBarArea::SetGameWindow(pSVar47,pTVar48);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_3020.SharedReferenceCount.ReferenceController._4_4_,
                        local_3020.SharedReferenceCount.ReferenceController._0_4_));
  }
  pFVar22 = SVerticalBox::FArguments::FArguments(&local_f50);
  pFVar23 = SVerticalBox::Slot(&local_2560);
  pFVar23 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar23);
  pFVar25 = SBox::FArguments::FArguments(&local_388);
  local_3078 = (TReferenceControllerBase<1> *)GetDefaultWindowTitleBarHeight;
  uStack_3070 = 0;
  lStack_2b70 = (ulonglong)uStack_306c << 0x20;
  local_2b78 = GetDefaultWindowTitleBarHeight;
  pFVar25 = SBox::FArguments::HeightOverride<SGameLayerManager>
                      (pFVar25,this,(pmf_8b77ca6c *)&local_2b78);
  this_00 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                      (&local_2ac0,"SBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SGameLayerManager.cpp"
                       ,0xc0,&local_308e);
  pTVar26 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=(this_00,&local_2b58,pFVar25);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>(&local_2ce0,pTVar26);
  pFVar23 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar23,&local_2ce0);
  pFVar22 = SVerticalBox::FArguments::operator+(pFVar22,pFVar23);
  pTVar55 = local_308d;
  pTVar43 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_2ad8,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SGameLayerManager.cpp"
                       ,0xbc,pTVar55);
  pTVar31 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar43,&local_2b68,pFVar22);
  TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1><SVerticalBox>(&local_2cf0,pTVar31);
  TSharedPtr<SWidget,1>::operator=(&this->DefaultTitleBarContentWidget,&local_2cf0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2cf0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2b68.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2ad8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2ce0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2b58.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2ac0._Widget.SharedReferenceCount.ReferenceController);
  SBox::FArguments::~FArguments(&local_388);
  SBoxPanel::TSlot<SVerticalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_2560);
  SVerticalBox::FArguments::~FArguments(&local_f50);
  pSVar47 = TSharedPtr<SWindowTitleBarArea,1>::operator->(&this->TitleBarAreaOverlay);
  local_3078 = (TReferenceControllerBase<1> *)RequestToggleFullscreen;
  uStack_3070 = 0;
  lStack_2b40 = (ulonglong)uStack_306c << 0x20;
  local_2b48 = RequestToggleFullscreen;
  pTVar49 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CreateSP<SGameLayerManager>
                      (&local_2a28,this,(pmf_a05f518d *)&local_2b48);
  SWindowTitleBarArea::SetRequestToggleFullscreenCallback(pSVar47,pTVar49);
  pSVar47 = TSharedPtr<SWindowTitleBarArea,1>::operator->(&this->TitleBarAreaVerticalBox);
  local_3078 = (TReferenceControllerBase<1> *)RequestToggleFullscreen;
  uStack_3070 = 0;
  lStack_2cb0 = (ulonglong)uStack_306c << 0x20;
  local_2cb8 = RequestToggleFullscreen;
  pTVar49 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CreateSP<SGameLayerManager>
                      (&local_2a10,this,(pmf_a05f518d *)&local_2cb8);
  SWindowTitleBarArea::SetRequestToggleFullscreenCallback(pSVar47,pTVar49);
  local_2cd0 = 0;
  pTStack_2cc8 = (TReferenceControllerBase<1> *)0x0;
  (**(code **)(this->_padding_ + 0x78))
            (&this->_padding_,&local_2cd0,0,0,(ulonglong)pTVar55 & 0xffffffffffffff00,
             uVar59 & 0xffffffffffffff00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2cc8);
  pUVar50 = GetDefault<UGeneralProjectSettings>();
  this->bIsGameUsingBorderlessWindow = pUVar50->bUseBorderlessWindow != false;
  local_3038 = this;
  if (((CanvasVisibility::GameLayerManagerInstances.AllocatorInstance.Data <=
        (FScriptContainerElement *)&local_3038) &&
      ((FScriptContainerElement *)&local_3038 <
       CanvasVisibility::GameLayerManagerInstances.AllocatorInstance.Data +
       (longlong)CanvasVisibility::GameLayerManagerInstances.ArrayMax * 8)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (CanvasVisibility::GameLayerManagerInstances.ArrayNum ==
      CanvasVisibility::GameLayerManagerInstances.ArrayMax) {
    CanvasVisibility::GameLayerManagerInstances.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&CanvasVisibility::GameLayerManagerInstances.AllocatorInstance,
                    &CanvasVisibility::GameLayerManagerInstances.ArrayMax);
  }
  bVar14 = CanvasVisibility::CanvasVisibilityCVarOnChangedBound == false;
  lVar52 = (longlong)CanvasVisibility::GameLayerManagerInstances.ArrayNum;
  CanvasVisibility::GameLayerManagerInstances.ArrayNum =
       CanvasVisibility::GameLayerManagerInstances.ArrayNum + 1;
  *(SGameLayerManager **)
   (CanvasVisibility::GameLayerManagerInstances.AllocatorInstance.Data + lVar52 * 8) = local_3038;
  if (bVar14) {
    plVar53 = (longlong *)(**(code **)(*(longlong *)CVarShowAllCanvases._padding_ + 0x38))();
    local_2ff8[0] = AllCanvases;
    pcVar6 = *(code **)(*plVar53 + 0xe0);
    pTVar51 = TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>::
              CreateLambda<_SGameLayerManager::Construct_::__l14::<lambda_1>_&,enum_CanvasVisibility::CanvasType>
                        (&local_2aa8,(<lambda_1> *)&local_res8,local_2ff8);
    (*pcVar6)(plVar53,pTVar51);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2aa8);
    plVar53 = (longlong *)(**(code **)(*(longlong *)CVarShowPlayerCanvas._8_8_ + 0x38))();
    local_2fb0[0] = PlayerCanvas;
    pcVar6 = *(code **)(*plVar53 + 0xe0);
    pTVar51 = TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>::
              CreateLambda<_SGameLayerManager::Construct_::__l14::<lambda_1>_&,enum_CanvasVisibility::CanvasType>
                        (&local_2a90,(<lambda_1> *)&local_res8,local_2fb0);
    (*pcVar6)(plVar53,pTVar51);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2a90);
    plVar53 = (longlong *)(**(code **)(*(longlong *)CVarShowDebugCanvas._8_8_ + 0x38))();
    local_3010[0] = DebugCanvas;
    pcVar6 = *(code **)(*plVar53 + 0xe0);
    pTVar51 = TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>::
              CreateLambda<_SGameLayerManager::Construct_::__l14::<lambda_1>_&,enum_CanvasVisibility::CanvasType>
                        (&local_2a78,(<lambda_1> *)&local_res8,local_3010);
    (*pcVar6)(plVar53,pTVar51);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2a78);
    plVar53 = (longlong *)(**(code **)(*(longlong *)CVarShowViewportSlot._8_8_ + 0x38))();
    local_3010[1] = 2;
    pcVar6 = *(code **)(*plVar53 + 0xe0);
    pTVar51 = TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>::
              CreateLambda<_SGameLayerManager::Construct_::__l14::<lambda_1>_&,enum_CanvasVisibility::CanvasType>
                        (&local_2a60,(<lambda_1> *)&local_res8,local_3010 + 1);
    (*pcVar6)(plVar53,pTVar51);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2a60);
    CanvasVisibility::CanvasVisibilityCVarOnChangedBound = true;
  }
  ShowViewportSlot(this,CanvasVisibility::ViewportSlotVisibilityConsoleValue);
  ShowDebugCanvas(this,CanvasVisibility::DebugCanvasVisibilityConsoleValue);
  ShowPlayerCanvas(this,CanvasVisibility::PlayerCanvasVisibilityConsoleValue);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar13.ReferenceController);
  return;
}

// FindLayerForPlayer @ 1486b6d90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedPtr<IGameLayer,1> * __thiscall
SGameLayerManager::FindLayerForPlayer
          (SGameLayerManager *this,TSharedPtr<IGameLayer,1> *__return_storage_ptr__,
          ULocalPlayer *param_1,FName *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  TTuple<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>_> *pTVar3;
  TTuple<FName,TSharedPtr<IGameLayer,1>_> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FWeakObjectPtr local_res8;
  ULocalPlayer *local_res18;
  
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if (param_1 != (ULocalPlayer *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
  }
  pTVar3 = TSet<TTuple<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>,0>,FDefaultSetAllocator>
                   *)&this->_padding_,(FObjectKey *)&local_res8);
  if (pTVar3 == (TTuple<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>_> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar5 = *(TReferenceControllerBase<1> **)&pTVar3->field_0x10;
    lVar1 = *(longlong *)&pTVar3->field_0x8;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (lVar1 != 0) {
      pTVar4 = TSet<TTuple<FName,TSharedPtr<IGameLayer,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IGameLayer,1>,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FName,TSharedPtr<IGameLayer,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IGameLayer,1>,0>,FDefaultSetAllocator>
                       *)(lVar1 + 0x28),*param_2);
      if (pTVar4 != (TTuple<FName,TSharedPtr<IGameLayer,1>_> *)0x0) {
        __return_storage_ptr__->Object = *(IGameLayer **)&pTVar4->field_0x8;
        pTVar2 = *(TReferenceControllerBase<1> **)&pTVar4->field_0x10;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        goto LAB_1486b6e61;
      }
    }
  }
  __return_storage_ptr__->Object = (IGameLayer *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
LAB_1486b6e61:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return __return_storage_ptr__;
}

// FindOrCreatePlayerLayer @ 1486b6ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TSharedPtr<SGameLayerManager::FPlayerLayer,1> * __thiscall
SGameLayerManager::FindOrCreatePlayerLayer
          (SGameLayerManager *this,
          TSharedPtr<SGameLayerManager::FPlayerLayer,1> *__return_storage_ptr__,
          ULocalPlayer *param_1)

{
  FWeakReferencer<1> *pFVar1;
  TDelegate<TSharedPtr<SWidget,1>___cdecl(EUINavigation),FDefaultDelegateUserPolicy> *pTVar2;
  undefined1 *puVar3;
  SPlayerLayer *pSVar4;
  SOverlay *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  ULocalPlayer *pUVar8;
  bool bVar9;
  int iVar10;
  TTuple<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>_> *pTVar11;
  FNavigationMetaData *pFVar12;
  FArguments *pFVar13;
  TSharedPtr<SGameLayerManager::FPlayerLayer,1> *pTVar14;
  TSharedRef<SPlayerLayer,1> *pTVar15;
  undefined8 *puVar16;
  FNavigationMetaData *pFVar17;
  FNavigationMetaData *pFVar18;
  undefined1 auStackY_478 [32];
  FLLMScope local_428 [2];
  TSharedPtr<SGameLayerManager::FPlayerLayer,1> local_420;
  TPairInitializer<FObjectKey_&&,TSharedPtr<SGameLayerManager::FPlayerLayer,1>_const_&> local_410;
  FObjectKey local_400;
  FWeakObjectPtr local_3f8;
  FWeakObjectPtr local_3f0;
  SOverlay *local_3e8;
  FSharedReferencer<1> local_3e0;
  FNavigationMetaData *local_3d8;
  TReferenceControllerBase<1> *pTStack_3d0;
  SPlayerLayer *local_3c8;
  FSharedReferencer<1> local_3c0;
  ULocalPlayer *local_3b8 [2];
  TSharedRef<FNavigationMetaData,1> local_3a8;
  undefined4 local_398 [2];
  undefined8 local_390;
  ULocalPlayer *local_388;
  TRawPtrProxy<FNavigationMetaData> local_380;
  TRawPtrProxy<SGameLayerManager::FPlayerLayer> local_378;
  FName local_370;
  T1RequiredArgs<ULocalPlayer_*_&> local_368;
  FMemScope local_360;
  ULocalPlayer *local_358;
  FWeakObjectPtr *local_350;
  TSharedPtr<SGameLayerManager::FPlayerLayer,1> *local_348;
  TSharedRef<SPlayerLayer,1> local_340;
  TSlateDecl<SPlayerLayer,RequiredArgs::T1RequiredArgs<ULocalPlayer_*_&>_> local_330;
  FSlateBaseNamedArgs local_318;
  FScopedWidgetSlotArguments local_118;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_478;
  pFVar18 = (FNavigationMetaData *)0x0;
  local_400.ObjectIndex = 0;
  local_400.ObjectSerialNumber = 0;
  local_3b8[0] = param_1;
  if (param_1 != (ULocalPlayer *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_410.Value = (TSharedPtr<SGameLayerManager::FPlayerLayer,1> *)0x0;
    local_388 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_410.Value,(FObjectPtr)&local_388);
    local_400 = (FObjectKey)local_410.Value;
  }
  pTVar11 = TSet<TTuple<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>,0>,FDefaultSetAllocator>
                    *)&this->PlayerLayers,&local_400);
  pFVar12 = (FNavigationMetaData *)&pTVar11->field_0x8;
  if (pTVar11 == (TTuple<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>_> *)0x0) {
    pFVar12 = pFVar18;
  }
  if (pFVar12 == (FNavigationMetaData *)0x0) {
    pFVar12 = ::operator_new(0x140);
    local_380.Object = pFVar18;
    if (pFVar12 != (FNavigationMetaData *)0x0) {
      local_380.Object = FNavigationMetaData::FNavigationMetaData(pFVar12);
    }
    TSharedRef<FNavigationMetaData,1>::TSharedRef<FNavigationMetaData,1><FNavigationMetaData>
              (&local_3a8,&local_380);
    pFVar12 = local_3a8.Object;
    FNavigationMetaData::SetNavigationStop(local_3a8.Object,Up);
    FNavigationMetaData::SetNavigationStop(pFVar12,Down);
    FNavigationMetaData::SetNavigationStop(pFVar12,Left);
    FNavigationMetaData::SetNavigationStop(pFVar12,Right);
    FNavigationMetaData::SetNavigationStop(pFVar12,Previous);
    FNavigationMetaData::SetNavigationStop(pFVar12,Next);
    pFVar12 = ::operator_new(0x78);
    local_378.Object = (FPlayerLayer *)pFVar18;
    if (pFVar12 != (FNavigationMetaData *)0x0) {
      pFVar12->_padding_ = 0;
      *(undefined8 *)pFVar12->Rules = 0;
      pFVar12->Rules[0].FocusRecipient.Object = (SWidget *)0x0;
      pFVar12->Rules[0].FocusRecipient.WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      *(undefined8 *)&pFVar12->Rules[0].FocusDelegate = 0;
      *(undefined8 *)&pFVar12->Rules[0].FocusDelegate.field_0x8 = 0;
      *(undefined8 *)&pFVar12->Rules[0].FocusDelegate.field_0x10 = 0;
      pFVar12->Rules[1].FocusRecipient.WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      *(undefined4 *)&pFVar12->Rules[1].FocusDelegate = 0;
      *(undefined4 *)&pFVar12->Rules[1].FocusDelegate.field_0x4 = 0x80;
      *(undefined4 *)&pFVar12->Rules[1].FocusDelegate.field_0x8 = 0xffffffff;
      *(undefined4 *)&pFVar12->Rules[1].FocusDelegate.field_0xc = 0;
      *(undefined8 *)(pFVar12->Rules + 2) = 0;
      *(undefined4 *)&pFVar12->Rules[2].FocusRecipient.Object = 0;
      local_378.Object = (FPlayerLayer *)pFVar12;
    }
    TSharedPtr<SGameLayerManager::FPlayerLayer,1>::
    TSharedPtr<SGameLayerManager::FPlayerLayer,1><SGameLayerManager::FPlayerLayer>
              (&local_420,&local_378);
    pFVar13 = SPlayerLayer::FArguments::FArguments((FArguments *)&local_318);
    local_3d8 = local_3a8.Object;
    pTStack_3d0 = local_3a8.SharedReferenceCount.ReferenceController;
    if (local_3a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_3a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_3a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    puVar3 = &pFVar13->field_0x1e8;
    if (((*(FNavigationMetaData ***)puVar3 <= &local_3d8) &&
        (&local_3d8 < *(FNavigationMetaData ***)puVar3 + (longlong)*(int *)&pFVar13->field_0x1f4 * 2
        )) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar9)) {
      pcVar7 = (code *)swi(3);
      pTVar14 = (TSharedPtr<SGameLayerManager::FPlayerLayer,1> *)(*pcVar7)();
      return pTVar14;
    }
    iVar10 = *(int *)&pFVar13->field_0x1f0;
    if (iVar10 == *(int *)&pFVar13->field_0x1f4) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,(ForAnyElementType *)puVar3,(int *)&pFVar13->field_0x1f4);
    }
    *(int *)&pFVar13->field_0x1f0 = iVar10 + 1;
    puVar16 = (undefined8 *)(*(longlong *)puVar3 + (longlong)iVar10 * 0x10);
    *puVar16 = local_3d8;
    puVar16[1] = pTStack_3d0;
    if (pTStack_3d0 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_3d0->SharedReferenceCount = (atomic<int>)((int)pTStack_3d0->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_3d0)
    ;
    pFVar13->field_0xca = 3;
    local_368.Arg0 = local_3b8;
    FLLMScope::FLLMScope(local_428,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_370 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_360,&local_370,true);
    TSlateDecl<SPlayerLayer,RequiredArgs::T1RequiredArgs<ULocalPlayer_*_&>_>::
    TSlateDecl<SPlayerLayer,RequiredArgs::T1RequiredArgs<ULocalPlayer_*_&>_>
              (&local_330,"SPlayerLayer",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SGameLayerManager.cpp"
               ,0x23e,&local_368);
    FMemScope::~FMemScope(&local_360);
    FLLMScope::~FLLMScope(local_428);
    pTVar15 = TSlateDecl<SPlayerLayer,RequiredArgs::T1RequiredArgs<ULocalPlayer_*_&>_>::operator<<=
                        (&local_330,&local_340,pFVar13);
    local_3c0.ReferenceController = (pTVar15->SharedReferenceCount).ReferenceController;
    pSVar4 = pTVar15->Object;
    if (local_3c0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_3c0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_3c0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_3c8 = pSVar4;
    if ((local_420.Object == (FPlayerLayer *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      pTVar14 = (TSharedPtr<SGameLayerManager::FPlayerLayer,1> *)(*pcVar7)();
      return pTVar14;
    }
    if (&(local_420.Object)->Widget != (TSharedPtr<SOverlay,1> *)&local_3c8) {
      ((local_420.Object)->Widget).Object = (SOverlay *)pSVar4;
      local_3c8 = (SPlayerLayer *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&((local_420.Object)->Widget).SharedReferenceCount,&local_3c0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3c0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_340.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_330._Widget.SharedReferenceCount.ReferenceController);
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_318);
    if (((this->PlayerCanvas).Object == (SCanvas *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      pTVar14 = (TSharedPtr<SGameLayerManager::FPlayerLayer,1> *)(*pcVar7)();
      return pTVar14;
    }
    pFVar12 = (FNavigationMetaData *)SCanvas::AddSlot((this->PlayerCanvas).Object,&local_118);
    pFVar1 = &pFVar12->Rules[0].FocusRecipient.WeakReferenceCount;
    if ((FWeakReferencer<1> *)local_398 != pFVar1) {
      *(undefined4 *)&pFVar1->ReferenceController = 0;
      *(undefined1 *)
       ((longlong)&pFVar12->Rules[0].FocusRecipient.WeakReferenceCount.ReferenceController + 4) = 1;
    }
    pFVar17 = pFVar18;
    if (pFVar1 != (FWeakReferencer<1> *)0x0) {
      pFVar17 = pFVar12;
    }
    pTVar2 = &pFVar17->Rules[0].FocusDelegate;
    if ((TDelegate<TSharedPtr<SWidget,1>___cdecl(EUINavigation),FDefaultDelegateUserPolicy> *)
        &local_390 != pTVar2) {
      *(undefined4 *)pTVar2 = 0;
      pFVar17->Rules[0].FocusDelegate.field_0x4 = 1;
    }
    if (pFVar17 != (FNavigationMetaData *)0xffffffffffffffe8) {
      pFVar18 = pFVar17;
    }
    if ((local_420.Object == (FPlayerLayer *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      pTVar14 = (TSharedPtr<SGameLayerManager::FPlayerLayer,1> *)(*pcVar7)();
      return pTVar14;
    }
    (local_420.Object)->Slot = (FSlot *)pFVar18->_padding_;
    if ((local_420.Object == (FPlayerLayer *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      pTVar14 = (TSharedPtr<SGameLayerManager::FPlayerLayer,1> *)(*pcVar7)();
      return pTVar14;
    }
    if ((((local_420.Object)->Widget).Object == (SOverlay *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      pTVar14 = (TSharedPtr<SGameLayerManager::FPlayerLayer,1> *)(*pcVar7)();
      return pTVar14;
    }
    pSVar5 = ((local_420.Object)->Widget).Object;
    pTVar6 = ((local_420.Object)->Widget).SharedReferenceCount.ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pSVar5 == (SOverlay *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      pTVar14 = (TSharedPtr<SGameLayerManager::FPlayerLayer,1> *)(*pcVar7)();
      return pTVar14;
    }
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_3e8 = pSVar5;
    local_3e0.ReferenceController = pTVar6;
    if (pFVar18->Rules != (SNavData *)&local_3e8) {
      *(SOverlay **)pFVar18->Rules = pSVar5;
      local_3e8 = (SOverlay *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar18->Rules[0].FocusRecipient,&local_3e0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3e0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    TPanelChildren<SCanvas::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
              (&local_118);
    pUVar8 = local_3b8[0];
    local_3f0.ObjectIndex = 0;
    local_3f0.ObjectSerialNumber = 0;
    if (local_3b8[0] != (ULocalPlayer *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)local_3b8[0]);
      }
      local_3f8.ObjectIndex = 0;
      local_3f8.ObjectSerialNumber = 0;
      local_358 = pUVar8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (ULocalPlayer *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      FWeakObjectPtr::operator=(&local_3f8,(FObjectPtr)&local_358);
      local_3f0 = local_3f8;
    }
    local_350 = &local_3f0;
    local_348 = &local_420;
    TSet<TTuple<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FObjectKey_&&,TSharedPtr<SGameLayerManager::FPlayerLayer,1>_const_&>_>
              ((TSet<TTuple<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>,0>,FDefaultSetAllocator>
                *)&this->PlayerLayers,&local_410,(bool *)&local_350);
    pFVar12 = (FNavigationMetaData *)
              (*(longlong *)&this->PlayerLayers + (longlong)(int)local_410.Key * 0x20 + 8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_420.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3a8.SharedReferenceCount.ReferenceController);
  }
  __return_storage_ptr__->Object = (FPlayerLayer *)pFVar12->_padding_;
  pTVar6 = *(TReferenceControllerBase<1> **)pFVar12->Rules;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetDefaultWindowTitleBarHeight @ 1486bd5b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FOptionalSize __thiscall SGameLayerManager::GetDefaultWindowTitleBarHeight(SGameLayerManager *this)

{
  float *in_RDX;
  
  *in_RDX = this->DefaultWindowTitleBarHeight;
  return (FOptionalSize)SUB84(in_RDX,0);
}

// GetGameViewportDPIScale @ 1486bea70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

float __thiscall SGameLayerManager::GetGameViewportDPIScale(SGameLayerManager *this)

{
  FSceneViewport *pFVar1;
  UUserInterfaceSettings *this_00;
  TIntPoint<int> TVar2;
  FSceneViewport **ppFVar3;
  UClass *this_01;
  float fVar4;
  float fVar5;
  float fVar6;
  int local_res8;
  int iStackX_c;
  
  ppFVar3 = TAttribute<FSceneViewport_*>::Get(&this->SceneViewport);
  pFVar1 = *ppFVar3;
  if (pFVar1 == (FSceneViewport *)0x0) {
    return __real_3f800000;
  }
  this_01 = Z_Construct_UClass_UUserInterfaceSettings_NoRegister();
  if ((this_01->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_01);
  }
  this_00 = (UUserInterfaceSettings *)(this_01->ClassDefaultObject).field0_0x0.DebugPtr;
  (**(code **)(pFVar1->_padding_ + 0x10))(&pFVar1->_padding_,&local_res8);
  if (this->bUseScaledDPI == false) {
    TVar2.field0_0x0._s_0.Y = iStackX_c;
    TVar2.field0_0x0._s_0.X = local_res8;
    fVar6 = UUserInterfaceSettings::GetDPIScaleBasedOnSize(this_00,TVar2);
  }
  else {
    fVar4 = UUserInterfaceSettings::GetDPIScaleBasedOnSize
                      (this_00,(TIntPoint<int>)(this->ScaledDPIViewportReference).field0_0x0._s_0);
    fVar6 = (float)iStackX_c / (float)(this->ScaledDPIViewportReference).field0_0x0._s_0.Y;
    fVar5 = (float)local_res8 / (float)(this->ScaledDPIViewportReference).field0_0x0._s_0.X;
    if (fVar5 <= fVar6) {
      fVar6 = fVar5;
    }
    fVar6 = fVar6 * fVar4;
  }
  return fVar6 / (pFVar1->CachedGeometry).Scale;
}

// GetNormalizeRect @ 1486c2310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
SGameLayerManager::GetNormalizeRect
          (SGameLayerManager *this,ULocalPlayer *param_1,TVector2<double> *param_2,
          TVector2<double> *param_3)

{
  int *piVar1;
  FViewport *pFVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<_private:_bool___cdecl_SGameLayerManager::GetNormalizeRect(ULocalPlayer_*,UE::Math::TVector2<double>_&,UE::Math::TVector2<double>_&)const_::_2_::FStat_STAT_SGameLayerManager_GetAspectRatioInset>
  FVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  bool bVar14;
  FNameEntryId FVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  undefined1 auStackY_288 [32];
  FName local_228;
  LARGE_INTEGER local_220;
  FName local_218;
  FStatMessage local_208;
  TVector2<double> *local_1f8;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_288;
  bVar14 = false;
  FVar15.Value = 0;
  local_220 = (LARGE_INTEGER)param_3;
  local_1f8 = param_2;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_SGameLayerManager_GetAspectRatioInset ==
          (FThreadSafeStaticStat<_private:_bool___cdecl_SGameLayerManager::GetNormalizeRect(ULocalPlayer_*,UE::Math::TVector2<double>_&,UE::Math::TVector2<double>_&)const_::_2_::FStat_STAT_SGameLayerManager_GetAspectRatioInset>
           )0x0) {
        pFVar9 = ::FName::FName(&local_228,"STAT_SGameLayerManager_GetAspectRatioInset");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SGameLayerManager_GetAspectRatioInset,
                   *pFVar9,L"STAT_SGameLayerManager_GetAspectRatioInset","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar10 = StatPtr_STAT_SGameLayerManager_GetAspectRatioInset;
  if (StatPtr_STAT_SGameLayerManager_GetAspectRatioInset ==
      (FThreadSafeStaticStat<_private:_bool___cdecl_SGameLayerManager::GetNormalizeRect(ULocalPlayer_*,UE::Math::TVector2<double>_&,UE::Math::TVector2<double>_&)const_::_2_::FStat_STAT_SGameLayerManager_GetAspectRatioInset>
       )0x0) {
    pFVar9 = ::FName::FName((FName *)&local_208,"STAT_SGameLayerManager_GetAspectRatioInset");
    FVar10 = (FThreadSafeStaticStat<_private:_bool___cdecl_SGameLayerManager::GetNormalizeRect(ULocalPlayer_*,UE::Math::TVector2<double>_&,UE::Math::TVector2<double>_&)const_::_2_::FStat_STAT_SGameLayerManager_GetAspectRatioInset>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_SGameLayerManager_GetAspectRatioInset,*pFVar9,
                          L"STAT_SGameLayerManager_GetAspectRatioInset","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar10;
  bVar3 = false;
  bVar5 = false;
  local_218.ComparisonIndex.Value = 0;
  local_218.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_228.ComparisonIndex.Value = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_228,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_228.ComparisonIndex.Value = FVar12.Value;
        local_228.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_228,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SGameLayerManager.cpp"
                   ,0x2b3);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_228.ComparisonIndex.Value = FVar12.Value;
      local_228.Number = uVar11;
      local_218 = FVar13;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar4 = true;
      FVar15.Value = local_218.ComparisonIndex.Value;
      goto LAB_1486c24a5;
    }
  }
  bVar4 = false;
  FVar13 = local_218;
LAB_1486c24a5:
  if (param_1 != (ULocalPlayer *)0x0) {
    local_158 = UE::Math::TMatrix<double>::Identity.M[3][2];
    dStack_150 = UE::Math::TMatrix<double>::Identity.M[3][3];
    local_d8 = UE::Math::TMatrix<double>::Identity.M[3][2];
    dStack_d0 = UE::Math::TMatrix<double>::Identity.M[3][3];
    local_a0 = 0;
    local_1d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_1e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_1e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_1c8 = UE::Math::TMatrix<double>::Identity.M[0][0];
    dStack_1c0 = UE::Math::TMatrix<double>::Identity.M[0][1];
    local_1b8 = UE::Math::TMatrix<double>::Identity.M[0][2];
    dStack_1b0 = UE::Math::TMatrix<double>::Identity.M[0][3];
    local_1a8 = UE::Math::TMatrix<double>::Identity.M[1][0];
    dStack_1a0 = UE::Math::TMatrix<double>::Identity.M[1][1];
    local_198 = UE::Math::TMatrix<double>::Identity.M[1][2];
    dStack_190 = UE::Math::TMatrix<double>::Identity.M[1][3];
    local_188 = UE::Math::TMatrix<double>::Identity.M[2][0]._0_4_;
    uStack_184 = UE::Math::TMatrix<double>::Identity.M[2][0]._4_4_;
    uStack_180 = UE::Math::TMatrix<double>::Identity.M[2][1]._0_4_;
    uStack_17c = UE::Math::TMatrix<double>::Identity.M[2][1]._4_4_;
    local_178 = UE::Math::TMatrix<double>::Identity.M[2][2]._0_4_;
    uStack_174 = UE::Math::TMatrix<double>::Identity.M[2][2]._4_4_;
    uStack_170 = UE::Math::TMatrix<double>::Identity.M[2][3]._0_4_;
    uStack_16c = UE::Math::TMatrix<double>::Identity.M[2][3]._4_4_;
    local_168 = UE::Math::TMatrix<double>::Identity.M[3][0];
    dStack_160 = UE::Math::TMatrix<double>::Identity.M[3][1];
    local_148 = UE::Math::TMatrix<double>::Identity.M[0][0];
    dStack_140 = UE::Math::TMatrix<double>::Identity.M[0][1];
    local_138 = UE::Math::TMatrix<double>::Identity.M[0][2];
    dStack_130 = UE::Math::TMatrix<double>::Identity.M[0][3];
    local_128 = UE::Math::TMatrix<double>::Identity.M[1][0];
    dStack_120 = UE::Math::TMatrix<double>::Identity.M[1][1];
    local_118 = UE::Math::TMatrix<double>::Identity.M[1][2];
    dStack_110 = UE::Math::TMatrix<double>::Identity.M[1][3];
    local_108 = UE::Math::TMatrix<double>::Identity.M[2][0]._0_4_;
    uStack_104 = UE::Math::TMatrix<double>::Identity.M[2][0]._4_4_;
    uStack_100 = UE::Math::TMatrix<double>::Identity.M[2][1]._0_4_;
    uStack_fc = UE::Math::TMatrix<double>::Identity.M[2][1]._4_4_;
    local_f8 = UE::Math::TMatrix<double>::Identity.M[2][2]._0_4_;
    uStack_f4 = UE::Math::TMatrix<double>::Identity.M[2][2]._4_4_;
    uStack_f0 = UE::Math::TMatrix<double>::Identity.M[2][3]._0_4_;
    uStack_ec = UE::Math::TMatrix<double>::Identity.M[2][3]._4_4_;
    local_e8 = UE::Math::TMatrix<double>::Identity.M[3][0];
    dStack_e0 = UE::Math::TMatrix<double>::Identity.M[3][1];
    local_c8 = 0;
    uStack_c0 = 0;
    local_a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_98 = 0;
    cVar8 = (**(code **)(param_1->_padding_ + 0x368))
                      (param_1,((param_1->ViewportClient).field0_0x0.DebugPtr)->Viewport,&local_1e8,
                       0xffffffff);
    uVar7 = local_98;
    uVar6 = local_a0;
    if (cVar8 != '\0') {
      pFVar2 = ((param_1->ViewportClient).field0_0x0.DebugPtr)->Viewport;
      (**(code **)(pFVar2->_padding_ + 0x28))(pFVar2,&local_228);
      fVar18 = __real_3f800000 / (float)(int)local_228.ComparisonIndex.Value;
      fVar19 = __real_3f800000 / (float)(int)local_228.Number;
      iVar16 = (int)uVar6;
      (local_1f8->field0_0x0)._s_0.X = (double)((float)iVar16 * fVar18);
      iVar17 = (int)((ulonglong)uVar6 >> 0x20);
      (local_1f8->field0_0x0)._s_0.Y = (double)((float)iVar17 * fVar19);
      *(double *)local_220 = (double)((float)((int)uVar7 - iVar16) * fVar18);
      bVar14 = true;
      *(double *)(local_220.QuadPart + 8) =
           (double)((float)((int)((ulonglong)uVar7 >> 0x20) - iVar17) * fVar19);
    }
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_208.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      local_208.NameAndInfo.Index.Value = FVar15.Value;
      QueryPerformanceCounter(&local_220);
      local_208.StatData.Pad = (uchar  [8])(local_220.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,&local_208);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return bVar14;
}

// GetPlayerWidgetHostGeometry @ 1486c38c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FGeometry * __thiscall
SGameLayerManager::GetPlayerWidgetHostGeometry
          (SGameLayerManager *this,FGeometry *__return_storage_ptr__,ULocalPlayer *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  TTuple<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>_> *pTVar7;
  FGeometry *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  FWeakObjectPtr local_res8;
  FObjectKey local_res18;
  ULocalPlayer *local_res20;
  
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  if (param_1 != (ULocalPlayer *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res20 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
    local_res18.ObjectIndex = local_res8.ObjectIndex;
    local_res18.ObjectSerialNumber = local_res8.ObjectSerialNumber;
  }
  pTVar7 = TSet<TTuple<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>,0>,FDefaultSetAllocator>
                   *)&this->_padding_,&local_res18);
  if (pTVar7 != (TTuple<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>_> *)0x0) {
    pTVar9 = *(TReferenceControllerBase<1> **)&pTVar7->field_0x10;
    lVar2 = *(longlong *)&pTVar7->field_0x8;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (lVar2 != 0) {
      if (*(longlong *)(lVar2 + 0x10) == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          pFVar8 = (FGeometry *)(*pcVar3)();
          return pFVar8;
        }
      }
      pFVar8 = SWidget::GetTickSpaceGeometry(*(SWidget **)(lVar2 + 0x10));
      uVar1 = *(undefined8 *)&pFVar8->Scale;
      uVar4 = *(undefined8 *)((longlong)&(pFVar8->AbsolutePosition).field0_0x0 + 4);
      uVar5 = *(undefined8 *)((longlong)&(pFVar8->Position).field0_0x0 + 4);
      __return_storage_ptr__->Size = pFVar8->Size;
      *(undefined8 *)&__return_storage_ptr__->Scale = uVar1;
      fVar10 = (pFVar8->AccumulatedRenderTransform).M.M[0][1];
      fVar11 = (pFVar8->AccumulatedRenderTransform).M.M[1][0];
      fVar12 = (pFVar8->AccumulatedRenderTransform).M.M[1][1];
      uVar13 = (pFVar8->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
      *(undefined8 *)((longlong)&(__return_storage_ptr__->AbsolutePosition).field0_0x0 + 4) = uVar4;
      *(undefined8 *)((longlong)&(__return_storage_ptr__->Position).field0_0x0 + 4) = uVar5;
      uVar1 = *(undefined8 *)&(pFVar8->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
      uVar14 = (undefined4)uVar1;
      uVar15 = (undefined4)((ulonglong)uVar1 >> 0x20);
      goto LAB_1486c39e9;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FGeometry::FGeometry(&::Identity);
      _Init_thread_footer(&::_TSS0);
    }
  }
  uVar5 = ::Identity._24_8_;
  uVar4 = ::Identity._16_8_;
  uVar1 = ::Identity._8_8_;
  __return_storage_ptr__->Size = ::Identity.Size;
  *(undefined8 *)&__return_storage_ptr__->Scale = uVar1;
  uVar13 = ::Identity.AccumulatedRenderTransform.Trans.field0_0x0._s_0.X;
  fVar12 = ::Identity.AccumulatedRenderTransform.M.M[1][1];
  fVar11 = ::Identity.AccumulatedRenderTransform.M.M[1][0];
  fVar10 = ::Identity.AccumulatedRenderTransform.M.M[0][1];
  *(undefined8 *)((longlong)&(__return_storage_ptr__->AbsolutePosition).field0_0x0 + 4) = uVar4;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->Position).field0_0x0 + 4) = uVar5;
  uVar14 = ::Identity.AccumulatedRenderTransform.Trans.field0_0x0._4_4_;
  uVar15 = ::Identity._52_4_;
LAB_1486c39e9:
  (__return_storage_ptr__->AccumulatedRenderTransform).M.M[0][1] = fVar10;
  (__return_storage_ptr__->AccumulatedRenderTransform).M.M[1][0] = fVar11;
  (__return_storage_ptr__->AccumulatedRenderTransform).M.M[1][1] = fVar12;
  (__return_storage_ptr__->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X = (float)uVar13;
  *(ulonglong *)
   ((longlong)&(__return_storage_ptr__->AccumulatedRenderTransform).Trans.field0_0x0 + 4) =
       CONCAT44(uVar15,uVar14);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// GetViewportWidgetHostGeometry @ 1486c98e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FGeometry * __thiscall
SGameLayerManager::GetViewportWidgetHostGeometry
          (SGameLayerManager *this,FGeometry *__return_storage_ptr__)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  FGeometry *pFVar8;
  
  if (this->_padding_ == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FGeometry *)(*pcVar2)();
      return pFVar8;
    }
  }
  pFVar8 = SWidget::GetTickSpaceGeometry((SWidget *)this->_padding_);
  uVar1 = *(undefined8 *)&pFVar8->Scale;
  uVar3 = *(undefined8 *)((longlong)&(pFVar8->AbsolutePosition).field0_0x0 + 4);
  uVar4 = *(undefined8 *)((longlong)&(pFVar8->Position).field0_0x0 + 4);
  __return_storage_ptr__->Size = pFVar8->Size;
  *(undefined8 *)&__return_storage_ptr__->Scale = uVar1;
  uVar5 = *(undefined8 *)((pFVar8->AccumulatedRenderTransform).M.M[0] + 1);
  uVar6 = *(undefined8 *)((pFVar8->AccumulatedRenderTransform).M.M[1] + 1);
  *(undefined8 *)((longlong)&(__return_storage_ptr__->AbsolutePosition).field0_0x0 + 4) = uVar3;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->Position).field0_0x0 + 4) = uVar4;
  uVar1 = *(undefined8 *)((longlong)&(pFVar8->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
  *(undefined8 *)((__return_storage_ptr__->AccumulatedRenderTransform).M.M[0] + 1) = uVar5;
  *(undefined8 *)((__return_storage_ptr__->AccumulatedRenderTransform).M.M[1] + 1) = uVar6;
  *(undefined8 *)
   ((longlong)&(__return_storage_ptr__->AccumulatedRenderTransform).Trans.field0_0x0 + 4) = uVar1;
  return __return_storage_ptr__;
}

// GetViewportWidgetHostPaintGeometry @ 1486c9960

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FGeometry * __thiscall
SGameLayerManager::GetViewportWidgetHostPaintGeometry
          (SGameLayerManager *this,FGeometry *__return_storage_ptr__)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  FGeometry *pFVar8;
  
  if (this->_padding_ == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FGeometry *)(*pcVar2)();
      return pFVar8;
    }
  }
  pFVar8 = SWidget::GetPaintSpaceGeometry((SWidget *)this->_padding_);
  uVar1 = *(undefined8 *)&pFVar8->Scale;
  uVar3 = *(undefined8 *)((longlong)&(pFVar8->AbsolutePosition).field0_0x0 + 4);
  uVar4 = *(undefined8 *)((longlong)&(pFVar8->Position).field0_0x0 + 4);
  __return_storage_ptr__->Size = pFVar8->Size;
  *(undefined8 *)&__return_storage_ptr__->Scale = uVar1;
  uVar5 = *(undefined8 *)((pFVar8->AccumulatedRenderTransform).M.M[0] + 1);
  uVar6 = *(undefined8 *)((pFVar8->AccumulatedRenderTransform).M.M[1] + 1);
  *(undefined8 *)((longlong)&(__return_storage_ptr__->AbsolutePosition).field0_0x0 + 4) = uVar3;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->Position).field0_0x0 + 4) = uVar4;
  uVar1 = *(undefined8 *)((longlong)&(pFVar8->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
  *(undefined8 *)((__return_storage_ptr__->AccumulatedRenderTransform).M.M[0] + 1) = uVar5;
  *(undefined8 *)((__return_storage_ptr__->AccumulatedRenderTransform).M.M[1] + 1) = uVar6;
  *(undefined8 *)
   ((longlong)&(__return_storage_ptr__->AccumulatedRenderTransform).Trans.field0_0x0 + 4) = uVar1;
  return __return_storage_ptr__;
}

// IsUsingFixedDPIValue @ 1486d24c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall SGameLayerManager::IsUsingFixedDPIValue(SGameLayerManager *this)

{
  return this->bUseScaledDPI;
}

// NotifyPlayerAdded @ 1486d32c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
SGameLayerManager::NotifyPlayerAdded(SGameLayerManager *this,int param_1,ULocalPlayer *param_2)

{
  UpdateLayout((SGameLayerManager *)&this[-1]._padding_);
  return;
}

// NotifyPlayerRemoved @ 1486d32e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
SGameLayerManager::NotifyPlayerRemoved(SGameLayerManager *this,int param_1,ULocalPlayer *param_2)

{
  UpdateLayout((SGameLayerManager *)&this[-1]._padding_);
  return;
}

// OnPaint @ 1486d6720

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

int __thiscall
SGameLayerManager::OnPaint
          (SGameLayerManager *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  int iVar1;
  bool bVar2;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"Paint: Game UI");
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId423,"Paint: Game UI",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SGameLayerManager.cpp"
               ,0x1a7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId423);
  }
  FSlateWindowElementList::SetIsInGameLayer(param_4,true);
  iVar1 = SCompoundWidget::OnPaint
                    ((SCompoundWidget *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7
                    );
  FSlateWindowElementList::SetIsInGameLayer(param_4,false);
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return iVar1;
}

// OnVisualizeTooltip @ 1486d7d30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
SGameLayerManager::OnVisualizeTooltip(SGameLayerManager *this,TSharedPtr<SWidget,1> *param_1)

{
  STooltipPresenter *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedPtr<SWidget,1> local_18;
  
  if ((this->TooltipPresenter).Object == (STooltipPresenter *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_18.Object = param_1->Object;
  this_00 = (this->TooltipPresenter).Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  STooltipPresenter::SetContent(this_00,&local_18);
  return true;
}

// RemoveGameLayer @ 1486e8660

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
SGameLayerManager::RemoveGameLayer(SGameLayerManager *this,TSharedRef<SWidget,1> *param_1)

{
  SOverlay *this_00;
  code *pcVar1;
  bool bVar2;
  TSharedRef<SWidget,1> local_18;
  
  if (this->_padding_ == 0) {
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
  local_18.Object = param_1->Object;
  this_00 = (SOverlay *)this->_padding_;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SOverlay::RemoveSlot(this_00,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// RemoveMissingPlayerLayers @ 1486e86f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
SGameLayerManager::RemoveMissingPlayerLayers
          (SGameLayerManager *this,TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  SCanvas *this_00;
  SWidget *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  longlong *plVar8;
  bool bVar9;
  int iVar10;
  UObject *pUVar11;
  UClass *pUVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  uint uVar15;
  FWeakObjectPtr local_res8;
  TSharedRef<SWidget,1> local_a8;
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>,0>,FDefaultSetAllocator>
  *pTStack_70;
  longlong *local_68;
  undefined1 auStack_60 [16];
  uint uStack_50;
  int iStack_4c;
  longlong local_48;
  TSet<TTuple<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>,0>,FDefaultSetAllocator>
  *pTStack_40;
  TSet<TTuple<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>,0>,FDefaultSetAllocator>
  *local_38;
  undefined2 local_30;
  
  TSet<TTuple<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_98,
             (TSet<TTuple<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>,0>,FDefaultSetAllocator>
              *)&this->PlayerLayers);
  local_30 = 0;
  stack0xffffffffffffffa8 = local_98._16_16_;
  local_68 = (longlong *)local_98._0_8_;
  auStack_60._0_8_ = local_98._8_8_;
  local_48 = local_78;
  pTStack_40 = pTStack_70;
  local_38 = (TSet<TTuple<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>,0>,FDefaultSetAllocator>
              *)&this->PlayerLayers;
  if (local_98._28_4_ < *(int *)(local_98._16_8_ + 0x18)) {
    do {
      plVar8 = local_68;
      lVar14 = (longlong)iStack_4c * 0x20;
      local_res8.ObjectIndex = *(int *)(*local_68 + lVar14);
      local_res8.ObjectSerialNumber = *(int *)(*local_68 + 4 + lVar14);
      pUVar11 = FWeakObjectPtr::Get(&local_res8);
      if (pUVar11 != (UObject *)0x0) {
        pUVar12 = Z_Construct_UClass_ULocalPlayer_NoRegister();
        iVar10 = (int)pUVar12->_padding_;
        if ((iVar10 <= *(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) + (longlong)iVar10 * 8) ==
            &pUVar12->_padding_)) {
          pFVar13 = (param_1->AllocatorInstance).Data;
          pFVar1 = pFVar13 + (longlong)param_1->ArrayNum * 8;
          for (; pFVar13 != pFVar1; pFVar13 = pFVar13 + 8) {
            if (*(UObject **)pFVar13 == pUVar11) goto LAB_1486e891b;
          }
        }
      }
      lVar3 = *(longlong *)(lVar14 + 8 + *plVar8);
      pTVar4 = *(TReferenceControllerBase<1> **)(lVar14 + 0x10 + *plVar8);
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (((this->PlayerCanvas).Object == (SCanvas *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      this_00 = (this->PlayerCanvas).Object;
      if ((lVar3 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((*(longlong *)(lVar3 + 0x10) == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pSVar5 = *(SWidget **)(lVar3 + 0x10);
      pTVar6 = *(TReferenceControllerBase<1> **)(lVar3 + 0x18);
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pSVar5 == (SWidget *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_a8.Object = pSVar5;
      local_a8.SharedReferenceCount.ReferenceController = pTVar6;
      SCanvas::RemoveSlot(this_00,&local_a8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      TSet<TTuple<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>,0>,FDefaultSetAllocator>
      ::RemoveByIndex(pTStack_40,iStack_4c);
      local_30 = CONCAT11(local_30._1_1_,1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
LAB_1486e891b:
      uStack_50 = uStack_50 & ~auStack_60._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_60);
    } while (iStack_4c < *(int *)(auStack_60._8_8_ + 0x18));
    if (((char)local_30 != '\0') && (local_30._1_1_ != '\0')) {
      uVar15 = *(int *)&(local_38->Elements).field_0x8 - *(int *)&(local_38->Elements).field_0x34;
      if (uVar15 < 4) {
        iVar10 = 1;
      }
      else {
        uVar2 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
        lVar14 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar10 = 1 << ((byte)lVar14 & 0x1f);
      }
      if (((0 < (int)uVar15) && (local_38->HashSize < iVar10)) || (iVar10 < local_38->HashSize)) {
        local_38->HashSize = iVar10;
        TSet<TTuple<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>,0>,FDefaultSetAllocator>
        ::Rehash(local_38);
      }
    }
  }
  return;
}

// RemovePlayerWidgets @ 1486e89d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
SGameLayerManager::RemovePlayerWidgets(SGameLayerManager *this,ULocalPlayer *param_1)

{
  longlong lVar1;
  SCanvas *this_00;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  FWeakObjectPtr local_res8;
  ULocalPlayer *local_res10;
  longlong local_28;
  FSharedReferencer<1> FStack_20;
  TSharedRef<SWidget,1> local_18;
  
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  iVar13 = 0;
  uVar12 = 0;
  if (param_1 != (ULocalPlayer *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    iVar13 = local_res8.ObjectIndex;
    uVar12 = local_res8.ObjectSerialNumber;
  }
  uVar8 = iVar13 - uVar12 ^ uVar12 >> 0xd;
  uVar7 = (-0x61c88647 - uVar8) - uVar12 ^ uVar8 << 8;
  uVar14 = (uVar12 - uVar7) - uVar8 ^ uVar7 >> 0xd;
  uVar8 = (uVar8 - uVar14) - uVar7 ^ uVar14 >> 0xc;
  uVar7 = (uVar7 - uVar14) - uVar8 ^ uVar8 << 0x10;
  uVar14 = (uVar14 - uVar7) - uVar8 ^ uVar7 >> 5;
  uVar8 = (uVar8 - uVar14) - uVar7 ^ uVar14 >> 3;
  uVar7 = (uVar7 - uVar8) - uVar14 ^ uVar8 << 10;
  if (*(int *)&(this->PlayerLayers).field_0x8 != *(int *)&(this->PlayerLayers).field_0x34) {
    puVar9 = *(undefined1 **)&(this->PlayerLayers).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->PlayerLayers).field_0x38;
    }
    iVar11 = *(int *)(puVar9 + (ulonglong)
                               (*(int *)&(this->PlayerLayers).field_0x48 - 1U &
                               ((uVar14 - uVar7) - uVar8 ^ uVar7 >> 0xf)) * 4);
    if (iVar11 != -1) {
      lVar1 = *(longlong *)&(this->PlayerLayers).field_0x0;
      do {
        lVar6 = (longlong)iVar11 * 0x20;
        if ((*(int *)(lVar6 + lVar1) == iVar13) && (*(uint *)(lVar6 + 4 + lVar1) == uVar12)) {
          if (iVar11 != -1) {
            plVar10 = (longlong *)(lVar1 + 8 + lVar6);
            if (&local_28 != plVar10) {
              local_28 = *plVar10;
              *plVar10 = 0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        (&FStack_20,(FSharedReferencer<1> *)(plVar10 + 1));
            }
            TSet<TTuple<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>,0>,FDefaultSetAllocator>
            ::RemoveByIndex((TSet<TTuple<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>,0>,FDefaultSetAllocator>
                             *)&this->PlayerLayers,iVar11);
            if (((this->PlayerCanvas).Object == (SCanvas *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            lVar1 = local_28;
            this_00 = (this->PlayerCanvas).Object;
            if ((local_28 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if ((*(longlong *)(lVar1 + 0x10) == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x408,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pSVar2 = *(SWidget **)(lVar1 + 0x10);
            pTVar3 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
            if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
              UNLOCK();
            }
            if ((pSVar2 == (SWidget *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x25d,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_18.Object = pSVar2;
            local_18.SharedReferenceCount.ReferenceController = pTVar3;
            SCanvas::RemoveSlot(this_00,&local_18);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_18.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar3);
          }
          break;
        }
        iVar11 = *(int *)(lVar6 + 0x18 + lVar1);
      } while (iVar11 != -1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  return;
}

// RemoveWidgetForPlayer @ 1486e96e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
SGameLayerManager::RemoveWidgetForPlayer
          (SGameLayerManager *this,ULocalPlayer *param_1,TSharedRef<SWidget,1> *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  SOverlay *pSVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  TTuple<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>_> *pTVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  TReferenceControllerBase<1> *pTVar12;
  uint uVar13;
  uint uVar14;
  TReferenceControllerBase<1> *pTVar15;
  longlong *plVar16;
  TReferenceControllerBase<1> *pTVar17;
  undefined1 local_res8 [8];
  int local_res10;
  FWeakObjectPtr local_d8;
  FObjectKey local_d0;
  longlong *local_c8;
  uint uStack_c0;
  uint uStack_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  uint uStack_ac;
  uint local_a8;
  uint uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  ULocalPlayer *local_98;
  longlong *local_90;
  longlong *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  TSharedRef<SWidget,1> local_58;
  TSharedRef<SWidget,1> local_48;
  
  pTVar12 = (TReferenceControllerBase<1> *)0x0;
  uVar10 = 0;
  plVar1 = &this->_padding_;
  local_d0.ObjectIndex = 0;
  local_d0.ObjectSerialNumber = 0;
  local_90 = plVar1;
  if (param_1 != (ULocalPlayer *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_d8.ObjectIndex = 0;
    local_d8.ObjectSerialNumber = 0;
    local_98 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_d8,(FObjectPtr)&local_98);
    local_d0.ObjectIndex = local_d8.ObjectIndex;
    local_d0.ObjectSerialNumber = local_d8.ObjectSerialNumber;
  }
  pTVar8 = TSet<TTuple<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>,0>,FDefaultSetAllocator>
                   *)plVar1,&local_d0);
  pTVar17 = pTVar12;
  if (pTVar8 != (TTuple<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>_> *)0x0) {
    pTVar17 = *(TReferenceControllerBase<1> **)&pTVar8->field_0x10;
    lVar9 = *(longlong *)&pTVar8->field_0x8;
    if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (lVar9 != 0) {
      if ((*(longlong *)(lVar9 + 0x10) == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_58.Object = param_2->Object;
      pSVar4 = *(SOverlay **)(lVar9 + 0x10);
      local_58.SharedReferenceCount.ReferenceController =
           (param_2->SharedReferenceCount).ReferenceController;
      if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SOverlay::RemoveSlot(pSVar4,&local_58);
LAB_1486e97dc:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_2->SharedReferenceCount).ReferenceController);
      return;
    }
  }
  uVar14 = (uint)this->_padding_;
  plVar2 = &this->_padding_;
  uStack_bc = 1;
  local_a8 = 0;
  uStack_ac = uVar10;
  if (uVar14 != 0) {
    plVar16 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar16 = plVar2;
    }
    uVar7 = (uint)*plVar16;
    pTVar15 = pTVar12;
    local_a8 = 0;
    uVar10 = 0;
    while (uVar7 == 0) {
      iVar11 = (int)pTVar12;
      local_a8 = (int)pTVar15 + 0x20;
      pTVar15 = (TReferenceControllerBase<1> *)(ulonglong)local_a8;
      uVar10 = iVar11 + 1;
      pTVar12 = (TReferenceControllerBase<1> *)(ulonglong)uVar10;
      uStack_ac = uVar14;
      if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar10)
      goto LAB_1486e9880;
      uVar7 = *(uint *)((longlong)plVar16 + (longlong)iVar11 * 4 + 4);
    }
    uStack_bc = -uVar7 & uVar7;
    uVar3 = (ulonglong)uStack_bc * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    uStack_ac = (local_a8 - 1) + local_res10;
    if ((int)uVar14 < (int)uStack_ac) {
      uStack_ac = uVar14;
    }
  }
LAB_1486e9880:
  TStack_80._padding_ = CONCAT44(uStack_bc,uVar10);
  iStack_a0 = (int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4);
  uVar7 = (uint)this->_padding_;
  uStack_b0 = 0xffffffff;
  uVar13 = uVar7 & 0xffffffe0;
  TStack_80.CurrentBitIndex = uStack_ac;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar7 >> 5;
  TStack_80._28_4_ = uStack_ac;
  TStack_80.BaseBitIndex = local_a8;
  uStack_60 = CONCAT44(uStack_9c,iStack_a0);
  local_c8 = plVar1;
  uStack_c0 = uVar10;
  local_b8 = plVar2;
  uStack_a4 = uStack_ac;
  local_88 = plVar1;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar2;
  if ((((int)uVar7 < 0) || ((int)uVar14 < (int)uVar7)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  plVar1 = local_90;
  uVar10 = (uint)this->_padding_;
  if (uVar7 != uVar10) {
    plVar16 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar16 = plVar2;
    }
    uVar14 = -1 << ((byte)uVar7 & 0x1f) & *(uint *)((longlong)plVar16 + (longlong)iVar11 * 4);
    while (uVar14 == 0) {
      lVar9 = (longlong)iVar11;
      uVar13 = uVar13 + 0x20;
      iVar11 = iVar11 + 1;
      uVar7 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
      goto LAB_1486e9981;
      uVar14 = *(uint *)((longlong)plVar16 + lVar9 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar7 = (int)lVar9 + -1 + uVar13;
    if ((int)uVar10 < (int)uVar7) {
      uVar7 = uVar10;
    }
  }
LAB_1486e9981:
  do {
    plVar16 = local_88;
    if ((int)local_88[1] - *(int *)((longlong)local_88 + 0x34) != (int)uStack_60) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_80.CurrentBitIndex == uVar7) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)plVar2)) && (plVar16 == plVar1))
    goto LAB_1486e97dc;
    lVar9 = *plVar16 + (longlong)TStack_80.CurrentBitIndex * 0x20;
    if ((*(longlong *)(lVar9 + 8) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar9 = *(longlong *)(lVar9 + 8);
    if ((*(longlong *)(lVar9 + 0x10) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_48.Object = param_2->Object;
    pSVar4 = *(SOverlay **)(lVar9 + 0x10);
    local_48.SharedReferenceCount.ReferenceController =
         (param_2->SharedReferenceCount).ReferenceController;
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = SOverlay::RemoveSlot(pSVar4,&local_48);
    if (bVar6) goto LAB_1486e97dc;
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  } while( true );
}

// RequestToggleFullscreen @ 1486e9a70

/* WARNING: Removing unreachable block (ram,0x0001486e9b67) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall SGameLayerManager::RequestToggleFullscreen(SGameLayerManager *this)

{
  int *piVar1;
  code *pcVar2;
  UEngine *pUVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar7;
  FString local_18;
  
  pUVar3 = GEngine;
  if (GEngine != (UEngine *)0x0) {
    pTVar7 = &GEngine->DeferredCommands;
    ::FString::FString(&local_18,L"TOGGLE_FULLSCREEN");
    pFVar6 = (pTVar7->AllocatorInstance).Data;
    if (((pFVar6 <= (FScriptContainerElement *)&local_18) &&
        ((FScriptContainerElement *)&local_18 <
         pFVar6 + (longlong)(pUVar3->DeferredCommands).ArrayMax * 0x10)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = (pUVar3->DeferredCommands).ArrayNum;
    piVar1 = &(pUVar3->DeferredCommands).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar7->AllocatorInstance,piVar1);
    }
    (pUVar3->DeferredCommands).ArrayNum = iVar5 + 1;
    pFVar6 = (pTVar7->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(undefined8 *)pFVar6 = 0;
    *(FScriptContainerElement **)pFVar6 = local_18.Data.AllocatorInstance.Data;
    *(int *)(pFVar6 + 8) = local_18.Data.ArrayNum;
    *(int *)(pFVar6 + 0xc) = local_18.Data.ArrayMax;
  }
  return;
}

// RestorePreviousWindowTitleBarState @ 1486eb860

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall SGameLayerManager::RestorePreviousWindowTitleBarState(SGameLayerManager *this)

{
  undefined8 local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  local_18 = 0;
  pTStack_10 = (TReferenceControllerBase<1> *)0x0;
  (**(code **)(this->_padding_ + 0x78))(0,&local_18,0,0,0,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  return;
}

// SetDefaultWindowTitleBarHeight @ 1486ee240

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
SGameLayerManager::SetDefaultWindowTitleBarHeight(SGameLayerManager *this,float param_1)

{
  *(float *)&this->_padding_ = param_1;
  return;
}

// SetSceneViewport @ 1486ef750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall SGameLayerManager::SetSceneViewport(SGameLayerManager *this,FSceneViewport *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  SDebugCanvas *pSVar3;
  code *pcVar4;
  bool bVar5;
  FSceneViewport **ppFVar6;
  TSharedRef<SWidget,1> *pTVar7;
  undefined1 local_a8 [8];
  ForAnyElementType FStack_a0;
  ulonglong local_98;
  FSceneViewport *local_90;
  undefined1 local_88;
  undefined1 local_80 [8];
  ForAnyElementType FStack_78;
  ulonglong local_70;
  TSharedPtr<SDebugCanvas,1> local_68;
  TSharedRef<SWidget,1> local_58;
  FDestructionSentinel local_48;
  FDestructionSentinel local_30;
  TSharedPtr<SDebugCanvas,1> local_18;
  
  this->_padding_ = (longlong)param_1;
  *(undefined1 *)&this->_padding_ = 1;
  local_98 = 0;
  local_a8 = (undefined1  [8])0x0;
  FStack_a0.Data = (FScriptContainerElement *)0x0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
             (FWriteAccessScope *)&local_48);
  if (((int)local_98 != 0) && (FStack_a0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_a0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_a0,0,0,0x10);
    local_98 = local_98 & 0xffffffff00000000;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a8);
  if (this->_padding_ == 0) {
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
  lVar1 = this->_padding_;
  ppFVar6 = TAttribute<FSceneViewport_*>::Get((TAttribute<FSceneViewport_*> *)(lVar1 + 0x218));
  if (*ppFVar6 != (FSceneViewport *)0x0) {
    local_18.Object = (SDebugCanvas *)0x0;
    local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FSceneViewport::SetDebugCanvas(*ppFVar6,&local_18);
  }
  local_70 = 0;
  local_88 = 1;
  local_80 = (undefined1  [8])0x0;
  FStack_78.Data = (FScriptContainerElement *)0x0;
  *(FSceneViewport **)(lVar1 + 0x218) = param_1;
  *(undefined1 *)(lVar1 + 0x220) = 1;
  local_90 = param_1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x228),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_80);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_80,
             (FWriteAccessScope *)&local_30);
  if (((int)local_70 != 0) && (FStack_78.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_78.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_78,0,0,0x10);
    local_70 = local_70 & 0xffffffff00000000;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (FStack_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_80);
  if (param_1 != (FSceneViewport *)0x0) {
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)(lVar1 + 8),&local_58);
    pTVar2 = (pTVar7->SharedReferenceCount).ReferenceController;
    pSVar3 = (SDebugCanvas *)pTVar7->Object;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
    }
    else {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_68.Object = pSVar3;
    local_68.SharedReferenceCount.ReferenceController = pTVar2;
    FSceneViewport::SetDebugCanvas(param_1,&local_68);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  return;
}

// SetUseFixedDPIValue @ 1486f0600

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
SGameLayerManager::SetUseFixedDPIValue(SGameLayerManager *this,bool param_1,TIntPoint<int> param_2)

{
  this->bUseScaledDPI = param_1;
  (this->ScaledDPIViewportReference).field0_0x0._s_0 = (TIntPoint<int>_u_0_s_0)param_2.field0_0x0;
  return;
}

// SetWindowTitleBarState @ 1486f0ae0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
SGameLayerManager::SetWindowTitleBarState
          (SGameLayerManager *this,TSharedPtr<SWidget,1> *param_1,EWindowTitleBarMode param_2,
          bool param_3,bool param_4,bool param_5)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined1 uVar3;
  SWidget *pSVar4;
  
  if (4 < (byte)LogSlate._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  pSVar4 = param_1->Object;
  if (pSVar4 == (SWidget *)0x0) {
    param_1 = (TSharedPtr<SWidget,1> *)&this->_padding_;
    pSVar4 = *(SWidget **)param_1;
  }
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar4;
  this->_padding_ = (longlong)pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  *(EWindowTitleBarMode *)&this->_padding_ = param_2;
  *(bool *)((longlong)&this->_padding_ + 1) = param_3;
  *(bool *)((longlong)&this->_padding_ + 2) = param_4;
  if ((param_5) && (*(char *)((longlong)&this->_padding_ + 4) != '\0')) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  *(undefined1 *)((longlong)&this->_padding_ + 3) = uVar3;
  UpdateWindowTitleBar((SGameLayerManager *)&this[-1]._padding_);
  return;
}

// SetWindowTitleBarVisibility @ 1486f0c20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall SGameLayerManager::SetWindowTitleBarVisibility(SGameLayerManager *this,bool param_1)

{
  undefined1 uVar1;
  
  if ((param_1) && (*(char *)((longlong)&this->_padding_ + 4) != '\0')) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  *(undefined1 *)((longlong)&this->_padding_ + 3) = uVar1;
  UpdateWindowTitleBarVisibility((SGameLayerManager *)&this[-1]._padding_);
  return;
}

// ShowDebugCanvas @ 1486f11e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall SGameLayerManager::ShowDebugCanvas(SGameLayerManager *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  TAttribute<EVisibility> local_28;
  
  if ((this->DebugCanvas).Object == (SDebugCanvas *)0x0) {
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
  local_28.bIsSet = true;
  local_28.Value.Value.Value = EVisibility::Collapsed.Value.Value;
  if (param_1) {
    local_28.Value.Value.Value = EVisibility::SelfHitTestInvisible.Value.Value;
  }
  local_28.Getter._16_8_ = 0;
  local_28.Getter._0_8_ = 0;
  local_28.Getter._8_8_ = 0;
  SLeafWidget::SetVisibility((SLeafWidget *)(this->DebugCanvas).Object,&local_28);
  return;
}

// ShowPlayerCanvas @ 1486f1280

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall SGameLayerManager::ShowPlayerCanvas(SGameLayerManager *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  TAttribute<EVisibility> local_28;
  
  if ((this->PlayerCanvas).Object == (SCanvas *)0x0) {
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
  local_28.bIsSet = true;
  local_28.Value.Value.Value = EVisibility::Collapsed.Value.Value;
  if (param_1) {
    local_28.Value.Value.Value = EVisibility::SelfHitTestInvisible.Value.Value;
  }
  local_28.Getter._16_8_ = 0;
  local_28.Getter._0_8_ = 0;
  local_28.Getter._8_8_ = 0;
  SPanel::SetVisibility((SPanel *)(this->PlayerCanvas).Object,&local_28);
  return;
}

// ShowViewportSlot @ 1486f1330

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall SGameLayerManager::ShowViewportSlot(SGameLayerManager *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  TAttribute<EVisibility> local_28;
  
  if ((this->ViewportSlotContainer).Object == (SBox *)0x0) {
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
  local_28.bIsSet = true;
  local_28.Value.Value.Value = EVisibility::Collapsed.Value.Value;
  if (param_1) {
    local_28.Value.Value.Value = EVisibility::SelfHitTestInvisible.Value.Value;
  }
  local_28.Getter._16_8_ = 0;
  local_28.Getter._0_8_ = 0;
  local_28.Getter._8_8_ = 0;
  SPanel::SetVisibility((SPanel *)(this->ViewportSlotContainer).Object,&local_28);
  return;
}

// Tick @ 1486f26d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
SGameLayerManager::Tick(SGameLayerManager *this,FGeometry *param_1,double param_2,float param_3)

{
  FGeometry::operator=(&this->CachedGeometry,param_1);
  UpdateLayout(this);
  return;
}

// UpdateLayout @ 1486f59d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall SGameLayerManager::UpdateLayout(SGameLayerManager *this)

{
  bool bVar1;
  FSceneViewport **ppFVar2;
  UWorld *this_00;
  UGameViewportClient *pUVar3;
  TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_> *pTVar4;
  
  ppFVar2 = TAttribute<FSceneViewport_*>::Get(&this->SceneViewport);
  if ((*ppFVar2 != (FSceneViewport *)0x0) &&
     (this_00 = (UWorld *)(**(code **)(*(longlong *)(*ppFVar2)->_padding_ + 0x30))(),
     this_00 != (UWorld *)0x0)) {
    bVar1 = UWorld::IsGameWorld(this_00);
    if (!bVar1) {
      TSet<TTuple<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<SGameLayerManager::FPlayerLayer,1>,0>,FDefaultSetAllocator>
               *)&this->PlayerLayers);
      return;
    }
    pUVar3 = UWorld::GetGameViewport(this_00);
    if (pUVar3 != (UGameViewportClient *)0x0) {
      pTVar4 = UEngine::GetGamePlayers(GEngine,this_00);
      RemoveMissingPlayerLayers(this,pTVar4);
      AddOrUpdatePlayerLayers(this,&this->CachedGeometry,pUVar3,pTVar4);
    }
  }
  return;
}

// UpdateWindowTitleBar @ 1486f7a90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall SGameLayerManager::UpdateWindowTitleBar(SGameLayerManager *this)

{
  EWindowTitleBarMode EVar1;
  code *pcVar2;
  bool bVar3;
  SBox *pSVar4;
  TSharedRef<SWidget,1> *pTVar5;
  SWindowTitleBarArea *this_00;
  TSharedRef<SWidget,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  if ((this->WindowTitleBarState).ContentWidget.Object != (SWidget *)0x0) {
    EVar1 = (this->WindowTitleBarState).Mode;
    if (EVar1 == Overlay) {
      if (((this->WindowTitleBarOverlay).Object == (SBox *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pSVar4 = (this->WindowTitleBarOverlay).Object;
      if (((this->WindowTitleBarState).ContentWidget.Object == (SWidget *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_28.SharedReferenceCount.ReferenceController =
           (this->WindowTitleBarState).ContentWidget.SharedReferenceCount.ReferenceController;
      local_28.Object = (this->WindowTitleBarState).ContentWidget.Object;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_28.Object == (SWidget *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      SBox::SetContent(pSVar4,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      if (((this->TitleBarAreaOverlay).Object == (SWindowTitleBarArea *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = (this->TitleBarAreaOverlay).Object;
    }
    else {
      if (EVar1 != VerticalBox) goto LAB_1486f7c20;
      pSVar4 = TSharedPtr<SBox,1>::operator->(&this->WindowTitleBarVerticalBox);
      pTVar5 = TSharedPtr<SWidget,1>::ToSharedRef
                         (&(this->WindowTitleBarState).ContentWidget,&local_18);
      SBox::SetContent(pSVar4,pTVar5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      this_00 = TSharedPtr<SWindowTitleBarArea,1>::operator->(&this->TitleBarAreaVerticalBox);
    }
    SWindowTitleBarArea::SetWindowButtonsVisibility
              (this_00,(this->WindowTitleBarState).bWindowButtonsVisible);
  }
LAB_1486f7c20:
  UpdateWindowTitleBarVisibility(this);
  return;
}

// UpdateWindowTitleBarVisibility @ 1486f7c40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall SGameLayerManager::UpdateWindowTitleBarVisibility(SGameLayerManager *this)

{
  EWindowTitleBarMode EVar1;
  code *pcVar2;
  EVisibility EVar3;
  bool bVar4;
  TAttribute<EVisibility> *pTVar5;
  TAttribute<EVisibility> local_88;
  TAttribute<EVisibility> local_68;
  TAttribute<EVisibility> local_48;
  TAttribute<EVisibility> local_28;
  
  EVar3.Value.Value = EVisibility::SelfHitTestInvisible.Value.Value;
  if ((this->WindowTitleBarState).bTitleBarDragEnabled != false) {
    EVar3.Value.Value = EVisibility::Visible.Value.Value;
  }
  EVar1 = (this->WindowTitleBarState).Mode;
  if (EVar1 == Overlay) {
    if (((this->TitleBarAreaOverlay).Object == (SWindowTitleBarArea *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_88.Value.Value.Value = EVisibility::Collapsed.Value.Value;
    if ((this->WindowTitleBarState).bTitleBarVisible != false) {
      local_88.Value.Value.Value = EVar3.Value.Value;
    }
    local_88.bIsSet = true;
    local_88.Getter._16_8_ = 0;
    local_88.Getter._0_8_ = 0;
    local_88.Getter._8_8_ = 0;
    SPanel::SetVisibility((SPanel *)(this->TitleBarAreaOverlay).Object,&local_88);
    if (((this->TitleBarAreaVerticalBox).Object == (SWindowTitleBarArea *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_68.Value = (EVisibility)EVisibility::Collapsed.Value.Value;
    pTVar5 = &local_68;
    local_68.bIsSet = true;
    local_68.Getter._16_8_ = 0;
    local_68.Getter._0_8_ = 0;
    local_68.Getter._8_8_ = 0;
  }
  else {
    if (EVar1 != VerticalBox) {
      return;
    }
    if (((this->TitleBarAreaOverlay).Object == (SWindowTitleBarArea *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_48.Value = (EVisibility)EVisibility::Collapsed.Value.Value;
    local_48.Getter._16_8_ = 0;
    local_48.bIsSet = true;
    local_48.Getter._0_8_ = 0;
    local_48.Getter._8_8_ = 0;
    SPanel::SetVisibility((SPanel *)(this->TitleBarAreaOverlay).Object,&local_48);
    if (((this->TitleBarAreaVerticalBox).Object == (SWindowTitleBarArea *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pTVar5 = &local_28;
    local_28.Value.Value.Value = EVisibility::Collapsed.Value.Value;
    if ((this->WindowTitleBarState).bTitleBarVisible != false) {
      local_28.Value.Value.Value = EVar3.Value.Value;
    }
    local_28.bIsSet = true;
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
  }
  SPanel::SetVisibility((SPanel *)(this->TitleBarAreaVerticalBox).Object,pTVar5);
  return;
}

