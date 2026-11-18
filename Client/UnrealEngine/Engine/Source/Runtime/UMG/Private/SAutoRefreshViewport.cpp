// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 2

// Construct @ 1469ad740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall SAutoRefreshViewport::Construct(SAutoRefreshViewport *this,FArguments *param_1)

{
  SViewport *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FUMGViewportClient *this_00;
  FUMGViewportClient *pFVar5;
  FSceneViewport *pFVar6;
  TSharedRef<SWidget,1> *pTVar7;
  TRawPtrProxy<FUMGViewportClient> TVar8;
  FUMGViewportClient *pFVar9;
  TRawPtrProxy<FUMGViewportClient> local_res8;
  TRawPtrProxy<FSceneViewport> local_res18 [2];
  TSharedPtr<SViewport,1> local_2d8;
  TSharedRef<SWidget,1> local_2c8;
  TSharedRef<ISlateViewport,1> local_2b8;
  undefined1 local_2a8 [528];
  undefined1 local_98 [27];
  bool local_7d;
  bool local_7a;
  FSharedReferencer<1> local_70;
  undefined1 local_50 [24];
  
  pFVar9 = (FUMGViewportClient *)0x0;
  local_res8.Object = local_res8.Object & 0xffffffff00000000;
  SViewport::FArguments::FArguments((FArguments *)local_2a8);
  local_7a = false;
  local_7d = false;
  SViewport::Construct((SViewport *)this,(FArguments *)local_2a8);
  this_00 = ::operator_new(0xac0);
  pFVar5 = pFVar9;
  if (this_00 != (FUMGViewportClient *)0x0) {
    pFVar5 = FUMGViewportClient::FUMGViewportClient(this_00,&this->PreviewScene);
  }
  local_res8.Object = pFVar5;
  TSharedPtr<FUMGViewportClient,1>::operator=<FUMGViewportClient>(&this->ViewportClient,&local_res8)
  ;
  pFVar6 = ::operator_new(0x328);
  local_res18[0].Object = (FSceneViewport *)pFVar9;
  TVar8.Object = local_res8.Object;
  pFVar5 = pFVar9;
  if (pFVar6 != (FSceneViewport *)0x0) {
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2c8);
    TVar8.Object = (FUMGViewportClient *)(pTVar7->SharedReferenceCount).ReferenceController;
    pSVar1 = (SViewport *)pTVar7->Object;
    if (TVar8.Object == (FUMGViewportClient *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2c8.SharedReferenceCount.ReferenceController);
    }
    else {
      LOCK();
      *(int *)&(TVar8.Object)->_padding_ = (int)(TVar8.Object)->_padding_ + 1;
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2c8.SharedReferenceCount.ReferenceController);
      LOCK();
      *(int *)&(TVar8.Object)->_padding_ = (int)(TVar8.Object)->_padding_ + 1;
      UNLOCK();
    }
    local_2d8.Object = pSVar1;
    local_2d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)TVar8.Object
    ;
    local_res18[0].Object =
         FSceneViewport::FSceneViewport
                   (pFVar6,(FViewportClient *)(this->ViewportClient).Object,&local_2d8);
    pFVar5 = (FUMGViewportClient *)&DAT_00000001;
  }
  TSharedPtr<FSceneViewport,1>::operator=<FSceneViewport>(&this->Viewport,local_res18);
  if (pFVar5 != (FUMGViewportClient *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)TVar8.Object);
  }
  if (((this->Viewport).Object == (FSceneViewport *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar2 = (this->Viewport).SharedReferenceCount.ReferenceController;
  pFVar6 = (this->Viewport).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar6 == (FSceneViewport *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_2b8.Object = (ISlateViewport *)&pFVar6->_padding_;
  if (pFVar6 == (FSceneViewport *)0x0) {
    local_2b8.Object = (ISlateViewport *)pFVar9;
  }
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2b8.SharedReferenceCount.ReferenceController = pTVar2;
  SViewport::SetViewportInterface((SViewport *)this,&local_2b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_50);
  if ((void *)local_50._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_50._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_50);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_70.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_98);
  if ((void *)local_98._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_98._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_2a8._512_8_);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_2a8);
  return;
}

// Tick @ 146a29c80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
SAutoRefreshViewport::Tick
          (SAutoRefreshViewport *this,FGeometry *param_1,double param_2,float param_3)

{
  FUMGViewportClient *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  
  if ((this->Viewport).Object == (FSceneViewport *)0x0) {
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
  FViewport::Invalidate((FViewport *)&((this->Viewport).Object)->_padding_);
  if ((this->Viewport).Object == (FSceneViewport *)0x0) {
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
  plVar4 = &((this->Viewport).Object)->_padding_;
  (**(code **)(*plVar4 + 0x48))(plVar4,param_1,SUB84(param_2,0),param_3);
  if ((this->ViewportClient).Object == (FUMGViewportClient *)0x0) {
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
  pFVar1 = (this->ViewportClient).Object;
                    /* WARNING: Could not recover jumptable at 0x000146a29d7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pFVar1->_padding_ + 0x1f8))(pFVar1,param_3);
  return;
}

