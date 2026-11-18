// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// SetHZBViewParams @ 14580f7f0

void __thiscall
FVirtualShadowMapCacheEntry::SetHZBViewParams
          (FVirtualShadowMapCacheEntry *this,FPackedViewParams *param_1)

{
  param_1->PrevTargetLayerIndex = (this->PrevHZBMetadata).TargetLayerIndex;
  memcpy(&param_1->PrevViewMatrices,this,0x880);
  param_1->Flags = param_1->Flags | 1;
  return;
}

// Update @ 145815420

void __thiscall
FVirtualShadowMapCacheEntry::Update
          (FVirtualShadowMapCacheEntry *this,FVirtualShadowMapPerLightCacheEntry *param_1)

{
  (this->PrevHZBMetadata).TargetLayerIndex = (this->CurrentHZBMetadata).TargetLayerIndex;
  (this->PrevHZBMetadata).ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (this->CurrentHZBMetadata).ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->PrevHZBMetadata).ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (this->CurrentHZBMetadata).ViewRect.field0_0x0._s_0.Max.field0_0x0;
  if ((this->CurrentHZBMetadata).bMatricesDirty != false) {
    memcpy(this,&this->CurrentHZBMetadata,0x880);
  }
  if (-1 < param_1->RenderedFrameNumber) {
    (this->NextData).PageAddressOffset.field0_0x0 = (TIntVector2<int>_u_0)0x0;
    (this->NextData).Flags = 1;
    return;
  }
  (this->NextData).Flags = 0;
  return;
}

// UpdateClipmapLevel @ 145816660

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVirtualShadowMapCacheEntry::UpdateClipmapLevel
          (FVirtualShadowMapCacheEntry *this,FVirtualShadowMapPerLightCacheEntry *param_1,
          TIntPoint<__int64> *param_2,double param_3,double param_4,double param_5,double param_6)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  long64 lVar5;
  TIntVector2<int>_u_0 TVar6;
  TConsoleVariableData<int> *pTVar7;
  bool bVar8;
  uint uVar9;
  
  (this->PrevHZBMetadata).TargetLayerIndex = (this->CurrentHZBMetadata).TargetLayerIndex;
  (this->PrevHZBMetadata).ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (this->CurrentHZBMetadata).ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->PrevHZBMetadata).ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (this->CurrentHZBMetadata).ViewRect.field0_0x0._s_0.Max.field0_0x0;
  if ((this->CurrentHZBMetadata).bMatricesDirty != false) {
    memcpy(this,&this->CurrentHZBMetadata,0x880);
  }
  pTVar7 = CVarClipmapWPODisableDistanceInvalidate.Ref;
  uVar9 = 0;
  if (((-1 < param_1->RenderedFrameNumber) &&
      (dVar1 = (this->Clipmap).ViewRadiusZ, param_5 == dVar1)) &&
     (bVar4 = true, dVar3 = param_4 - (this->Clipmap).ViewCenterZ,
     (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) + param_3 <=
     dVar1 * __real_3feccccccccccccd)) {
    bVar8 = IsInParallelRenderingThread();
    if ((!bVar8) &&
       (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007955>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6d3,"IsInParallelRenderingThread()"), bVar8)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((pTVar7->ShadowedValue[1] != 0) &&
       (param_6 != (this->Clipmap).WPODistanceDisableThresholdSquared)) {
      bVar4 = false;
      if (((param_1->ShadowMapEntries).ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((FVirtualShadowMapCacheEntry *)(param_1->ShadowMapEntries).AllocatorInstance.Data == this
          ) && (3 < (byte)LogRenderer._0_1_)) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
        goto LAB_145816821;
      }
    }
    if (bVar4) {
      uVar9 = 1;
      TVar6._s_0.Y = (int)(param_2->field0_0x0)._s_0.Y -
                     (int)(this->Clipmap).PageSpaceLocation.field0_0x0._s_0.Y;
      TVar6._s_0.X = (int)(param_2->field0_0x0)._s_0.X -
                     (int)(this->Clipmap).PageSpaceLocation.field0_0x0._s_0.X;
      (this->NextData).PageAddressOffset.field0_0x0 = TVar6;
      goto LAB_145816834;
    }
  }
LAB_145816821:
  (this->Clipmap).ViewCenterZ = param_4;
  (this->Clipmap).ViewRadiusZ = param_5;
  (this->Clipmap).WPODistanceDisableThresholdSquared = param_6;
LAB_145816834:
  (this->NextData).Flags = uVar9;
  lVar5 = (param_2->field0_0x0)._s_0.Y;
  (this->Clipmap).PageSpaceLocation.field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
  (this->Clipmap).PageSpaceLocation.field0_0x0._s_0.Y = lVar5;
  return;
}

// UpdateHZBMetadata @ 1458179d0

void __thiscall
FVirtualShadowMapCacheEntry::UpdateHZBMetadata
          (FVirtualShadowMapCacheEntry *this,FViewMatrices *param_1,TIntRect<int> *param_2,
          uint param_3)

{
  longlong lVar1;
  TMatrix<double> *pTVar2;
  longlong lVar3;
  TMatrix<double> *pTVar4;
  longlong lVar5;
  
  (this->CurrentHZBMetadata).ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_2->field0_0x0)._s_0.Min.field0_0x0;
  (this->CurrentHZBMetadata).ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_2->field0_0x0)._s_0.Max.field0_0x0;
  (this->CurrentHZBMetadata).TargetLayerIndex = param_3;
  if ((((this->CurrentHZBMetadata).ViewMatrices.PreViewTranslation.field0_0x0._s_0.X ==
        (param_1->PreViewTranslation).field0_0x0._s_0.X) &&
      ((this->CurrentHZBMetadata).ViewMatrices.PreViewTranslation.field0_0x0._s_0.Y ==
       (param_1->PreViewTranslation).field0_0x0._s_0.Y)) &&
     ((this->CurrentHZBMetadata).ViewMatrices.PreViewTranslation.field0_0x0._s_0.Z ==
      (param_1->PreViewTranslation).field0_0x0._s_0.Z)) {
    pTVar4 = &(this->CurrentHZBMetadata).ViewMatrices.TranslatedViewProjectionMatrix;
    lVar5 = 0;
    lVar1 = 0x600 - (longlong)pTVar4;
    do {
      lVar3 = 0;
      pTVar2 = pTVar4;
      do {
        if (pTVar2->M[0][0] != *(double *)((longlong)pTVar2 + (longlong)param_1 + lVar1))
        goto LAB_145817a73;
        lVar3 = lVar3 + 1;
        pTVar2 = (TMatrix<double> *)(pTVar2->M[0] + 1);
      } while (lVar3 < 4);
      lVar5 = lVar5 + 1;
      pTVar4 = (TMatrix<double> *)(pTVar4->M + 1);
      if (3 < lVar5) {
        (this->CurrentHZBMetadata).bMatricesDirty = false;
        return;
      }
    } while( true );
  }
LAB_145817a73:
  (this->CurrentHZBMetadata).bMatricesDirty = true;
  memcpy(&this->CurrentHZBMetadata,param_1,0x880);
  return;
}

