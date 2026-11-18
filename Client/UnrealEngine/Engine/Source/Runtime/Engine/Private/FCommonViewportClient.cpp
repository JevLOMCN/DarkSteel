// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// FCommonViewportClient @ 14850b710

FCommonViewportClient * __thiscall
FCommonViewportClient::FCommonViewportClient(FCommonViewportClient *this)

{
  TNode *pTVar1;
  TNode *pTVar2;
  
  *(undefined ***)this = &___7FCommonViewportClient__6B_;
  pTVar1 = ::operator_new(0x18);
  pTVar2 = (TNode *)0x0;
  if (pTVar1 != (TNode *)0x0) {
    pTVar1->NextNode = (TNode *)0x0;
    (pTVar1->Item).Object = (FWN_SceneTexturesCaptureInfo *)0x0;
    (pTVar1->Item).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar1->NextNode = (TNode *)0x0;
    (pTVar1->Item).Object = (FWN_SceneTexturesCaptureInfo *)0x0;
    (pTVar1->Item).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar2 = pTVar1;
  }
  (this->PendingSceneTexturesCaptureInfos).Tail = pTVar2;
  (this->PendingSceneTexturesCaptureInfos).Head = pTVar2;
  (this->QueuedSceneTexturesCaptureInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueuedSceneTexturesCaptureInfos).ArrayNum = 0;
  (this->QueuedSceneTexturesCaptureInfos).ArrayMax = 0;
  this->CachedDPIScale = 1.0;
  this->bShouldUpdateDPIScale = true;
  return this;
}

// ~FCommonViewportClient @ 14890de20

void __thiscall FCommonViewportClient::~FCommonViewportClient(FCommonViewportClient *this)

{
  FScriptContainerElement *pFVar1;
  TNode *pTVar2;
  
  *(undefined ***)this = &___7FCommonViewportClient__6B_;
  if (GStatProcessingViewportClient == this) {
    GStatProcessingViewportClient = (FCommonViewportClient *)0x0;
  }
  DestructItems<TSharedPtr<FWN_SceneTexturesCaptureInfo,1>,int>
            ((TSharedPtr<FWN_SceneTexturesCaptureInfo,1> *)
             (this->QueuedSceneTexturesCaptureInfos).AllocatorInstance.Data,
             (this->QueuedSceneTexturesCaptureInfos).ArrayNum);
  pFVar1 = (this->QueuedSceneTexturesCaptureInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pTVar2 = (this->PendingSceneTexturesCaptureInfos).Tail;
  while (pTVar2 != (TNode *)0x0) {
    (this->PendingSceneTexturesCaptureInfos).Tail = pTVar2->NextNode;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar2->Item).SharedReferenceCount.ReferenceController);
    ::operator_delete(pTVar2,0x18);
    pTVar2 = (this->PendingSceneTexturesCaptureInfos).Tail;
  }
  *(undefined ***)this = &___7FViewportClient__6B_;
  return;
}

// CaptureSceneTexturesAsync @ 14891cbc0

void __thiscall
FCommonViewportClient::CaptureSceneTexturesAsync
          (FCommonViewportClient *this,FString *param_1,bool param_2,FEngineShowFlags *param_3)

{
  TNode *pTVar1;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  TNode *pTVar6;
  FWN_SceneTexturesCaptureInfo *pFVar7;
  
  pTVar5 = ::operator_new(0xe8);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    pFVar7 = (FWN_SceneTexturesCaptureInfo *)&DAT_00000010;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    ::FString::operator=((FString *)&DAT_00000058,param_1);
    DAT_00000010 = param_2;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFWN_SceneTexturesCaptureInfo___00_SharedPointerInternals__6B_
    ;
    FWN_SceneTexturesCaptureInfo::FWN_SceneTexturesCaptureInfo
              ((FWN_SceneTexturesCaptureInfo *)(pTVar5 + 1));
    pFVar7 = (FWN_SceneTexturesCaptureInfo *)(pTVar5 + 1);
    if (pFVar7 == (FWN_SceneTexturesCaptureInfo *)0x0) {
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
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    if (pFVar7 == (FWN_SceneTexturesCaptureInfo *)0x0) {
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
    ::FString::operator=((FString *)&pTVar5[5].SharedReferenceCount,param_1);
    if (pFVar7 == (FWN_SceneTexturesCaptureInfo *)0x0) {
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
    pFVar7->bOverrideEngineShowFlags = param_2;
    if (pFVar7 == (FWN_SceneTexturesCaptureInfo *)0x0) {
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
  }
  FEngineShowFlags::operator=(&pFVar7->EngineShowFlags,param_3);
  pTVar6 = ::operator_new(0x18);
  if (pTVar6 != (TNode *)0x0) {
    pTVar6->NextNode = (TNode *)0x0;
    (pTVar6->Item).Object = pFVar7;
    (pTVar6->Item).SharedReferenceCount.ReferenceController = pTVar5;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar1 = (this->PendingSceneTexturesCaptureInfos).Head;
    (this->PendingSceneTexturesCaptureInfos).Head = pTVar6;
    pTVar1->NextNode = pTVar6;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  FVar2 = (param_3->CustomShowFlags).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  return;
}

// Draw @ 14892d050

void __thiscall
FCommonViewportClient::Draw(FCommonViewportClient *this,FViewport *param_1,FCanvas *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<unsigned_int> FVar3;
  TNode *pTVar4;
  ulong64 uVar5;
  TUniquePtr<FWN_SceneTexturesCaptureController,TDefaultDelete<FWN_SceneTexturesCaptureController>_>
  TVar6;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  TVar6.Ptr = GWN_SceneTexturesCaptureControllerPtr.Ptr;
  if (GWN_SceneTexturesCaptureControllerPtr.Ptr == (FWN_SceneTexturesCaptureController *)0x0)
  goto LAB_14892d0a0;
  GWN_SceneTexturesCaptureControllerPtr.Ptr = (FWN_SceneTexturesCaptureController *)0x0;
  pFVar2 = ((TVar6.Ptr)->BaseDirPath).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FVar3 = ((TVar6.Ptr)->EngineShowFlags).CustomShowFlags.AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  uVar5 = 0x80;
  do {
    ::operator_delete(TVar6.Ptr,uVar5);
LAB_14892d0a0:
    do {
      pTVar4 = ((this->PendingSceneTexturesCaptureInfos).Tail)->NextNode;
      if (pTVar4 == (TNode *)0x0) {
        DestructItems<TSharedPtr<FWN_SceneTexturesCaptureInfo,1>,int>
                  ((TSharedPtr<FWN_SceneTexturesCaptureInfo,1> *)
                   (this->QueuedSceneTexturesCaptureInfos).AllocatorInstance.Data,
                   (this->QueuedSceneTexturesCaptureInfos).ArrayNum);
        piVar1 = &(this->QueuedSceneTexturesCaptureInfos).ArrayMax;
        (this->QueuedSceneTexturesCaptureInfos).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&(this->QueuedSceneTexturesCaptureInfos).AllocatorInstance,0,piVar1);
        }
        return;
      }
      TVar6.Ptr = (FWN_SceneTexturesCaptureController *)
                  (this->PendingSceneTexturesCaptureInfos).Tail;
      (this->PendingSceneTexturesCaptureInfos).Tail = pTVar4;
      local_18 = 0;
      FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (&pTVar4->Item != (TSharedPtr<FWN_SceneTexturesCaptureInfo,1> *)&local_18) {
        (pTVar4->Item).Object = (FWN_SceneTexturesCaptureInfo *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(pTVar4->Item).SharedReferenceCount,&FStack_10);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_10.ReferenceController);
    } while (TVar6.Ptr == (FWN_SceneTexturesCaptureController *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&((TVar6.Ptr)->EngineShowFlags).field_0x8);
    uVar5 = 0x18;
  } while( true );
}

// DrawHighResScreenshotCaptureRegion @ 14892e050

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FCommonViewportClient::DrawHighResScreenshotCaptureRegion
          (FCommonViewportClient *this,FCanvas *param_1)

{
  FLinearColor FVar1;
  FHighResScreenshotConfig *pFVar2;
  undefined1 local_98 [24];
  longlong local_80;
  undefined1 local_78;
  longlong local_70;
  FLinearColor_u_0 local_68;
  TVector<double>_u_0 local_58;
  TVector<double>_u_0 local_40;
  float local_28;
  
  FVar1.field0_0x0 = FLinearColor::Red.field0_0x0;
  pFVar2 = GetHighResScreenshotConfig();
  local_28 = 0.0;
  local_68 = FVar1.field0_0x0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_58._s_0.Z = 0.0;
  local_40._s_0.Z = 0.0;
  local_98._8_16_ = (undefined1  [16])UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  local_98._0_8_ = &___7FCanvasLineItem__6B_;
  local_58._s_0.Y = (double)*(int *)((longlong)&(pFVar2->UnscaledCaptureRegion).field0_0x0 + 4);
  local_40._s_0.X = (double)*(int *)((longlong)&(pFVar2->UnscaledCaptureRegion).field0_0x0 + 8);
  local_58._s_0.X = (double)*(int *)&(pFVar2->UnscaledCaptureRegion).field0_0x0;
  local_40._s_0.Y = local_58._s_0.Y;
  FCanvasLineItem::Draw((FCanvasLineItem *)local_98,param_1);
  local_58._s_0.X = (double)*(int *)((longlong)&(pFVar2->UnscaledCaptureRegion).field0_0x0 + 8);
  local_40._s_0.Y = (double)*(int *)((longlong)&(pFVar2->UnscaledCaptureRegion).field0_0x0 + 0xc);
  local_58._s_0.Y = (double)*(int *)((longlong)&(pFVar2->UnscaledCaptureRegion).field0_0x0 + 4);
  local_40._s_0.X = local_58._s_0.X;
  if (*(code **)(local_98._0_8_ + 0x18) == FCanvasLineItem::Draw) {
    FCanvasLineItem::Draw((FCanvasLineItem *)local_98,param_1);
  }
  else {
    (**(code **)(local_98._0_8_ + 0x18))();
  }
  local_58._s_0.Y = (double)*(int *)((longlong)&(pFVar2->UnscaledCaptureRegion).field0_0x0 + 0xc);
  local_40._s_0.X = (double)*(int *)&(pFVar2->UnscaledCaptureRegion).field0_0x0;
  local_58._s_0.X = (double)*(int *)((longlong)&(pFVar2->UnscaledCaptureRegion).field0_0x0 + 8);
  local_40._s_0.Y = local_58._s_0.Y;
  if (*(code **)(local_98._0_8_ + 0x18) == FCanvasLineItem::Draw) {
    FCanvasLineItem::Draw((FCanvasLineItem *)local_98,param_1);
  }
  else {
    (**(code **)(local_98._0_8_ + 0x18))();
  }
  local_58._s_0.X = (double)*(int *)&(pFVar2->UnscaledCaptureRegion).field0_0x0;
  local_40._s_0.Y = (double)*(int *)((longlong)&(pFVar2->UnscaledCaptureRegion).field0_0x0 + 4);
  local_58._s_0.Y = (double)*(int *)((longlong)&(pFVar2->UnscaledCaptureRegion).field0_0x0 + 0xc);
  local_40._s_0.X = local_58._s_0.X;
  if (*(code **)(local_98._0_8_ + 0x18) == FCanvasLineItem::Draw) {
    FCanvasLineItem::Draw((FCanvasLineItem *)local_98,param_1);
  }
  else {
    (**(code **)(local_98._0_8_ + 0x18))();
  }
  return;
}

// GetDPIDerivedResolutionFraction @ 148957a60

float __thiscall FCommonViewportClient::GetDPIDerivedResolutionFraction(FCommonViewportClient *this)

{
  return __real_3f800000;
}

// GetDPIScale @ 148957a70

float __thiscall FCommonViewportClient::GetDPIScale(FCommonViewportClient *this)

{
  float fVar1;
  
  if (this->bShouldUpdateDPIScale != false) {
    fVar1 = (float)(**(code **)(*(longlong *)this + 0x1f0))();
    this->CachedDPIScale = fVar1;
    this->bShouldUpdateDPIScale = false;
    return fVar1;
  }
  return this->CachedDPIScale;
}

// RequestUpdateDPIScale @ 148979860

void __thiscall FCommonViewportClient::RequestUpdateDPIScale(FCommonViewportClient *this)

{
  this->bShouldUpdateDPIScale = true;
  return;
}

// TrySaveSceneTexturesCaptureInfos @ 148984db0

void __thiscall FCommonViewportClient::TrySaveSceneTexturesCaptureInfos(FCommonViewportClient *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  uint uVar10;
  TSharedPtr<FWN_SceneTexturesCaptureInfo,1> local_38;
  
  uVar7 = 0;
  if (0 < (this->QueuedSceneTexturesCaptureInfos).ArrayNum) {
    lVar9 = 0;
    do {
      uVar10 = ~uVar7 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar7 < (this->QueuedSceneTexturesCaptureInfos).ArrayNum) {
        uVar4 = uVar10;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar8 = (this->QueuedSceneTexturesCaptureInfos).AllocatorInstance.Data + lVar9;
      if (*(longlong *)pFVar8 == 0) {
LAB_148984e97:
        uVar4 = 0;
        if ((int)uVar7 < (this->QueuedSceneTexturesCaptureInfos).ArrayNum) {
          uVar4 = uVar10;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar8 = (this->QueuedSceneTexturesCaptureInfos).AllocatorInstance.Data + lVar9;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (*(TReferenceControllerBase<1> **)(pFVar8 + 8));
        iVar6 = (this->QueuedSceneTexturesCaptureInfos).ArrayNum + ~uVar7;
        if (iVar6 != 0) {
          memmove(pFVar8,pFVar8 + 0x10,(longlong)iVar6 << 4);
        }
        piVar1 = &(this->QueuedSceneTexturesCaptureInfos).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&(this->QueuedSceneTexturesCaptureInfos).AllocatorInstance,
                   (this->QueuedSceneTexturesCaptureInfos).ArrayNum,
                   &(this->QueuedSceneTexturesCaptureInfos).ArrayMax);
        uVar7 = uVar7 - 1;
        lVar9 = lVar9 + -0x10;
      }
      else {
        iVar6 = *(int *)(*(longlong *)pFVar8 + 0x50);
        iVar5 = iVar6 + -1;
        if (iVar6 == 0) {
          iVar5 = 0;
        }
        if (iVar5 == 0) goto LAB_148984e97;
        bVar3 = FWN_SceneTexturesCaptureInfo::IsComplete(*(FWN_SceneTexturesCaptureInfo **)pFVar8);
        if (bVar3) {
          local_38.Object = *(FWN_SceneTexturesCaptureInfo **)pFVar8;
          local_38.SharedReferenceCount.ReferenceController =
               *(TReferenceControllerBase<1> **)(pFVar8 + 8);
          if (local_38.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          WN_SaveSceneTexturesAsync(&local_38);
          goto LAB_148984e97;
        }
      }
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 0x10;
    } while ((int)uVar7 < (this->QueuedSceneTexturesCaptureInfos).ArrayNum);
  }
  return;
}

