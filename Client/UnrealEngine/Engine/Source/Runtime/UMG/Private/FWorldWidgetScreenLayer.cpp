// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 2

// ~FWorldWidgetScreenLayer @ 146a582e0

void __thiscall FWorldWidgetScreenLayer::~FWorldWidgetScreenLayer(FWorldWidgetScreenLayer *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong *plVar7;
  
  this->_padding_ = (longlong)&___7FWorldWidgetScreenLayer__6B_;
  pFVar5 = (this->Components).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pTVar6 = (this->ScreenLayerPtr).WeakReferenceCount.ReferenceController;
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
  this->_padding_ = (longlong)&___7IGameLayer__6B_;
  plVar7 = (longlong *)this->_padding_;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar7 + 8))(plVar7,1);
    }
  }
  return;
}

// AsWidget @ 146a5e3b0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
FWorldWidgetScreenLayer::AsWidget
          (FWorldWidgetScreenLayer *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  atomic<int> *paVar2;
  VectorRegister4Double *this_00;
  FWeakObjectPtr *pFVar3;
  atomic<int> aVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  UWidget *this_01;
  SWorldWidgetScreenLayer *pSVar7;
  code *pcVar8;
  FSharedReferencer<1> FVar9;
  char cVar10;
  byte bVar11;
  atomic<int> aVar12;
  FSlateBaseNamedArgs *pFVar13;
  TSharedRef<SWidget,1> *pTVar14;
  USceneComponent *pUVar15;
  TReferenceControllerBase<1> *pTVar16;
  FWeakObjectPtr *this_02;
  bool bVar17;
  undefined1 local_res8 [8];
  TSharedRef<SWidget,1> *local_res10;
  FLLMScope local_res18 [2];
  FName local_res20;
  TSlateDecl<SWorldWidgetScreenLayer,RequiredArgs::T1RequiredArgs<FLocalPlayerContext_&>_> local_288
  ;
  T1RequiredArgs<FLocalPlayerContext_&> local_270;
  FMemScope local_268;
  TSharedRef<SWidget,1> local_260;
  TSharedRef<SWidget,1> local_250;
  FSlateBaseNamedArgs local_240;
  
  pTVar6 = (this->ScreenLayerPtr).WeakReferenceCount.ReferenceController;
  pTVar16 = pTVar6;
  local_res10 = __return_storage_ptr__;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar6->SharedReferenceCount;
    do {
      pTVar16 = (TReferenceControllerBase<1> *)0x0;
      if (aVar4 == (atomic<int>)0x0) goto LAB_146a5e405;
      LOCK();
      aVar12 = pTVar6->SharedReferenceCount;
      bVar17 = aVar4 == aVar12;
      if (bVar17) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar12 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar12;
    } while (!bVar17);
    pSVar7 = (this->ScreenLayerPtr).Object;
    pTVar16 = pTVar6;
    if (pSVar7 != (SWorldWidgetScreenLayer *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      __return_storage_ptr__->Object = (SWidget *)pSVar7;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar6;
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      return __return_storage_ptr__;
    }
  }
LAB_146a5e405:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  pFVar13 = (FSlateBaseNamedArgs *)
            SWorldWidgetScreenLayer::FArguments::FArguments((FArguments *)&local_240);
  local_270.Arg0 = &this->OwningPlayer;
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_268,&local_res20,true);
  TSlateDecl<SWorldWidgetScreenLayer,RequiredArgs::T1RequiredArgs<FLocalPlayerContext_&>_>::
  TSlateDecl<SWorldWidgetScreenLayer,RequiredArgs::T1RequiredArgs<FLocalPlayerContext_&>_>
            (&local_288,"SWorldWidgetScreenLayer",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\WidgetComponent.cpp"
             ,0x77,&local_270);
  FMemScope::~FMemScope(&local_268);
  FLLMScope::~FLLMScope(local_res18);
  pSVar7 = local_288._Widget.Object;
  if ((local_288._Widget.Object == (SWorldWidgetScreenLayer *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar8 = (code *)swi(3);
    pTVar14 = (TSharedRef<SWidget,1> *)(*pcVar8)();
    return pTVar14;
  }
  SWidget::SWidgetConstruct((SWidget *)local_288._Widget.Object,pFVar13);
  SWorldWidgetScreenLayer::Construct
            (local_288._Widget.Object,(FArguments *)pFVar13,(local_288._RequiredArgs)->Arg0);
  if ((local_288._Widget.Object == (SWorldWidgetScreenLayer *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar8 = (code *)swi(3);
    pTVar14 = (TSharedRef<SWidget,1> *)(*pcVar8)();
    return pTVar14;
  }
  if (((local_288._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar10 = (**(code **)((local_288._Widget.Object)->_padding_ + 0x228))(local_288._Widget.Object);
    bVar11 = 0;
    if (cVar10 == '\0') goto LAB_146a5e559;
  }
  bVar11 = 0x20;
LAB_146a5e559:
  *(byte *)&(local_288._Widget.Object)->_padding_ =
       (byte)(local_288._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_288._Widget.Object)->_padding_ =
       (byte)(local_288._Widget.Object)->_padding_ | bVar11;
  if ((local_288._Widget.Object == (SWorldWidgetScreenLayer *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar8 = (code *)swi(3);
    pTVar14 = (TSharedRef<SWidget,1> *)(*pcVar8)();
    return pTVar14;
  }
  pbVar1 = (byte *)((longlong)&(local_288._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_288._Widget.Object == (SWorldWidgetScreenLayer *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar17)) {
    pcVar8 = (code *)swi(3);
    pTVar14 = (TSharedRef<SWidget,1> *)(*pcVar8)();
    return pTVar14;
  }
  FVar9.ReferenceController = local_288._Widget.SharedReferenceCount.ReferenceController;
  local_288._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_288._Widget.Object = (SWorldWidgetScreenLayer *)0x0;
  if ((pSVar7 == (SWorldWidgetScreenLayer *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar17)) {
    pcVar8 = (code *)swi(3);
    pTVar14 = (TSharedRef<SWidget,1> *)(*pcVar8)();
    return pTVar14;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_240);
  (this->ScreenLayerPtr).Object = pSVar7;
  if (FVar9.ReferenceController != (this->ScreenLayerPtr).WeakReferenceCount.ReferenceController) {
    if (FVar9.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar9.ReferenceController)->WeakReferenceCount =
           (atomic<int>)((int)(FVar9.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = (this->ScreenLayerPtr).WeakReferenceCount.ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &pTVar6->WeakReferenceCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
      }
    }
    (this->ScreenLayerPtr).WeakReferenceCount.ReferenceController = FVar9.ReferenceController;
  }
  this_02 = (FWeakObjectPtr *)(this->Components).AllocatorInstance.Data;
  iVar5 = (this->Components).ArrayNum;
  pFVar3 = this_02 + iVar5;
  do {
    if ((this->Components).ArrayNum != iVar5) {
      `TCheckedPointerIterator<TWeakObjectPtr<UWidgetComponent,FWeakObjectPtr>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    pTVar14 = local_res10;
    if (this_02 == pFVar3) {
      local_res10->Object = (SWidget *)pSVar7;
      (local_res10->SharedReferenceCount).ReferenceController = FVar9.ReferenceController;
      if (FVar9.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar9.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar9.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar9.ReferenceController);
      return pTVar14;
    }
    pUVar15 = (USceneComponent *)FWeakObjectPtr::Get(this_02);
    if (pUVar15 != (USceneComponent *)0x0) {
      this_01 = (UWidget *)pUVar15[2].ComponentToWorld.Translation.ZW.m128d_f64[1];
      if (this_01 == (UWidget *)0x0) {
        this_00 = &pUVar15[2].ComponentToWorld.Scale3D;
        if ((this_00->XY).m128d_f64[0] == 0.0) goto LAB_146a5e6f6;
        pTVar14 = TSharedPtr<SWidget,1>::ToSharedRef((TSharedPtr<SWidget,1> *)this_00,&local_250);
      }
      else {
        pTVar14 = UWidget::TakeWidget(this_01,&local_260);
      }
      SWorldWidgetScreenLayer::AddComponent(pSVar7,pUVar15,pTVar14);
    }
LAB_146a5e6f6:
    this_02 = this_02 + 1;
  } while( true );
}

