// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// FVirtualShadowMapPerLightCacheEntry @ 1457c37a0

FVirtualShadowMapPerLightCacheEntry * __thiscall
FVirtualShadowMapPerLightCacheEntry::FVirtualShadowMapPerLightCacheEntry
          (FVirtualShadowMapPerLightCacheEntry *this,int param_1,uint param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  uint *puVar1;
  int iVar2;
  ForElementType<unsigned_int> FVar3;
  uint uVar4;
  uint uVar5;
  
  this_00 = &this->RenderedPrimitives;
  this->RenderedFrameNumber = -1;
  this->ScheduledFrameNumber = -1;
  this->PrevVirtualShadowMapId = -1;
  this->VirtualShadowMapId = -1;
  this->bIsUncached = false;
  this->bIsDistantLight = false;
  this->bUseReceiverMask = false;
  this->bReferencedThisRender = false;
  this->LastReferencedFrameNumber = 0;
  (this->RenderedPrimitives).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  uVar5 = param_1 + 0x1fU >> 5;
  (this->RenderedPrimitives).MaxBits = 0x80;
  (this->RenderedPrimitives).NumBits = param_1;
  if (param_1 + 0x1fU >> 5 != 0) {
    if (4 < uVar5) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&this_00->AllocatorInstance,0,uVar5,4);
      (this->RenderedPrimitives).MaxBits = uVar5 << 5;
    }
    FVar3 = (this->RenderedPrimitives).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<unsigned_int>)0x0) {
      FVar3 = (ForElementType<unsigned_int>)this_00;
    }
    memset((void *)FVar3,0,(ulonglong)uVar5 << 2);
    iVar2 = (this->RenderedPrimitives).NumBits;
    uVar4 = iVar2 >> 0x1f & 0x1f;
    uVar5 = iVar2 + uVar4;
    iVar2 = (uVar5 & 0x1f) - uVar4;
    if (iVar2 != 0) {
      FVar3 = (this->RenderedPrimitives).AllocatorInstance.SecondaryData;
      if (FVar3 == (ForElementType<unsigned_int>)0x0) {
        FVar3 = (ForElementType<unsigned_int>)this_00;
      }
      puVar1 = (uint *)((longlong)FVar3 + (longlong)((int)uVar5 >> 5) * 4);
      *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar2 & 0x1f);
    }
  }
  (this->ShadowMapEntries).ArrayNum = 0;
  (this->ShadowMapEntries).ArrayMax = 0;
  (this->ShadowMapEntries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrimitiveInstancesToInvalidate).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrimitiveInstancesToInvalidate).ArrayNum = 0;
  (this->PrimitiveInstancesToInvalidate).ArrayMax = 0;
  (this->LightOrigin).field0_0x0._s_0.X = 0.0;
  (this->LightOrigin).field0_0x0._s_0.Y = 0.0;
  (this->LightOrigin).field0_0x0._s_0.Z = 0.0;
  this->LightRadius = -1.0;
  if ((int)param_2 < 1) {
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)param_2);
    }
  }
  else {
    iVar2 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x12b0,0x10,param_2,&(this->ShadowMapEntries).AllocatorInstance,
                       &(this->ShadowMapEntries).ArrayNum,&(this->ShadowMapEntries).ArrayMax);
    DefaultConstructItems<FVirtualShadowMapCacheEntry,int>
              ((this->ShadowMapEntries).AllocatorInstance.Data + (longlong)iVar2 * 0x12b0,param_2);
  }
  return this;
}

// OnPrimitiveRendered @ 145803f90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FVirtualShadowMapPerLightCacheEntry::OnPrimitiveRendered
          (FVirtualShadowMapPerLightCacheEntry *this,FPrimitiveSceneInfo *param_1,bool param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined1 uVar6;
  int local_18;
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  uVar6 = 1;
  if (((GVSMCacheDeformableMeshesInvalidate == 0) || (!(bool)param_1->Proxy->bHasDeformableMesh)) ||
     (param_1->Proxy->ShadowCacheInvalidationBehavior != Auto)) {
    if (!param_2) {
      return;
    }
    if (GVSMCacheDebugSkipRevealedPrimitivesInvalidate != 0) {
      return;
    }
    uVar6 = 0;
  }
  local_18 = (param_1->PersistentIndex).Index;
  iStack_14 = param_1->InstanceSceneDataOffset;
  iStack_10 = param_1->NumInstanceSceneDataEntries;
  pFVar2 = (this->PrimitiveInstancesToInvalidate).AllocatorInstance.Data;
  uStack_c = CONCAT31(uStack_c._1_3_,uVar6);
  if (((pFVar2 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 <
       pFVar2 + (longlong)(this->PrimitiveInstancesToInvalidate).ArrayMax * 0x10)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (this->PrimitiveInstancesToInvalidate).ArrayNum;
  piVar1 = &(this->PrimitiveInstancesToInvalidate).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&(this->PrimitiveInstancesToInvalidate).AllocatorInstance,piVar1);
  }
  (this->PrimitiveInstancesToInvalidate).ArrayNum = iVar5 + 1;
  pFVar2 = (this->PrimitiveInstancesToInvalidate).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
  *(ulonglong *)pFVar2 = CONCAT44(iStack_14,local_18);
  *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_c,iStack_10);
  return;
}

// UpdateClipmap @ 145816570

void __thiscall
FVirtualShadowMapPerLightCacheEntry::UpdateClipmap
          (FVirtualShadowMapPerLightCacheEntry *this,TVector<double> *param_1,int param_2,
          bool param_3,bool param_4)

{
  double dVar1;
  bool bVar2;
  int iVar3;
  
  if ((((param_3) ||
       ((this->ClipmapCacheKey).LightDirection.field0_0x0._s_0.X != (param_1->field0_0x0)._s_0.X))
      || ((this->ClipmapCacheKey).LightDirection.field0_0x0._s_0.Y != (param_1->field0_0x0)._s_0.Y))
     || (((this->ClipmapCacheKey).LightDirection.field0_0x0._s_0.Z != (param_1->field0_0x0)._s_0.Z
         || (param_2 != (this->ClipmapCacheKey).FirstLevel)))) {
    this->RenderedFrameNumber = -1;
    dVar1 = (param_1->field0_0x0)._s_0.Y;
    (this->ClipmapCacheKey).LightDirection.field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
    (this->ClipmapCacheKey).LightDirection.field0_0x0._s_0.Y = dVar1;
    iVar3 = -1;
    (this->ClipmapCacheKey).LightDirection.field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    (this->ClipmapCacheKey).FirstLevel = param_2;
  }
  else {
    iVar3 = this->RenderedFrameNumber;
  }
  if (param_4 != this->bUseReceiverMask) {
    this->RenderedFrameNumber = -1;
    iVar3 = -1;
    this->bUseReceiverMask = param_4;
  }
  bVar2 = (bool)-(char)(iVar3 >> 0x1f);
  if (bVar2 != this->bIsUncached) {
    this->bIsUncached = bVar2;
    this->RenderedFrameNumber = -1;
    (this->LightOrigin).field0_0x0._s_0.X = 0.0;
    (this->LightOrigin).field0_0x0._s_0.Y = 0.0;
    (this->LightOrigin).field0_0x0._s_0.Z = 0.0;
    this->LightRadius = -1.0;
    this->PrevVirtualShadowMapId = -1;
    this->VirtualShadowMapId = -1;
    return;
  }
  (this->LightOrigin).field0_0x0._s_0.X = 0.0;
  (this->LightOrigin).field0_0x0._s_0.Y = 0.0;
  (this->LightOrigin).field0_0x0._s_0.Z = 0.0;
  this->LightRadius = -1.0;
  if (iVar3 < 0) {
    this->PrevVirtualShadowMapId = -1;
    this->VirtualShadowMapId = -1;
  }
  return;
}

// UpdateLocal @ 145817aa0

void __thiscall
FVirtualShadowMapPerLightCacheEntry::UpdateLocal
          (FVirtualShadowMapPerLightCacheEntry *this,FProjectedShadowInitializer *param_1,
          TVector<double> *param_2,float param_3,bool param_4,bool param_5,bool param_6,bool param_7
          )

{
  double dVar1;
  int iVar2;
  FLocalLightCacheKey *pFVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  FLocalLightCacheKey *pFVar7;
  
  if ((((param_1->PreShadowTranslation).field0_0x0._s_0.X ==
        (this->LocalCacheKey).PreShadowTranslation.field0_0x0._s_0.X) &&
      ((param_1->PreShadowTranslation).field0_0x0._s_0.Y ==
       (this->LocalCacheKey).PreShadowTranslation.field0_0x0._s_0.Y)) &&
     ((param_1->PreShadowTranslation).field0_0x0._s_0.Z ==
      (this->LocalCacheKey).PreShadowTranslation.field0_0x0._s_0.Z)) {
    lVar6 = 0;
    pFVar7 = &this->LocalCacheKey;
    do {
      lVar5 = 0;
      pFVar3 = pFVar7;
      do {
        if (*(double *)
             ((longlong)pFVar3 + (longlong)param_1 + (0x20 - (longlong)&this->LocalCacheKey)) !=
            (pFVar3->WorldToLight).M[0][0]) goto LAB_145817b2e;
        lVar5 = lVar5 + 1;
        pFVar3 = (FLocalLightCacheKey *)((pFVar3->WorldToLight).M[0] + 1);
      } while (lVar5 < 4);
      lVar6 = lVar6 + 1;
      pFVar7 = (FLocalLightCacheKey *)((pFVar7->WorldToLight).M + 1);
    } while (lVar6 < 4);
    bVar4 = false;
  }
  else {
LAB_145817b2e:
    bVar4 = true;
  }
  dVar1 = (param_1->PreShadowTranslation).field0_0x0._s_0.Y;
  (this->LocalCacheKey).PreShadowTranslation.field0_0x0._s_0.X =
       (param_1->PreShadowTranslation).field0_0x0._s_0.X;
  (this->LocalCacheKey).PreShadowTranslation.field0_0x0._s_0.Y = dVar1;
  (this->LocalCacheKey).PreShadowTranslation.field0_0x0._s_0.Z =
       (param_1->PreShadowTranslation).field0_0x0._s_0.Z;
  dVar1 = (param_1->WorldToLight).M[0][1];
  (this->LocalCacheKey).WorldToLight.M[0][0] = (param_1->WorldToLight).M[0][0];
  (this->LocalCacheKey).WorldToLight.M[0][1] = dVar1;
  dVar1 = (param_1->WorldToLight).M[0][3];
  (this->LocalCacheKey).WorldToLight.M[0][2] = (param_1->WorldToLight).M[0][2];
  (this->LocalCacheKey).WorldToLight.M[0][3] = dVar1;
  dVar1 = (param_1->WorldToLight).M[1][1];
  (this->LocalCacheKey).WorldToLight.M[1][0] = (param_1->WorldToLight).M[1][0];
  (this->LocalCacheKey).WorldToLight.M[1][1] = dVar1;
  dVar1 = (param_1->WorldToLight).M[1][3];
  (this->LocalCacheKey).WorldToLight.M[1][2] = (param_1->WorldToLight).M[1][2];
  (this->LocalCacheKey).WorldToLight.M[1][3] = dVar1;
  dVar1 = (param_1->WorldToLight).M[2][1];
  (this->LocalCacheKey).WorldToLight.M[2][0] = (param_1->WorldToLight).M[2][0];
  (this->LocalCacheKey).WorldToLight.M[2][1] = dVar1;
  dVar1 = (param_1->WorldToLight).M[2][3];
  (this->LocalCacheKey).WorldToLight.M[2][2] = (param_1->WorldToLight).M[2][2];
  (this->LocalCacheKey).WorldToLight.M[2][3] = dVar1;
  dVar1 = (param_1->WorldToLight).M[3][1];
  (this->LocalCacheKey).WorldToLight.M[3][0] = (param_1->WorldToLight).M[3][0];
  (this->LocalCacheKey).WorldToLight.M[3][1] = dVar1;
  dVar1 = (param_1->WorldToLight).M[3][3];
  (this->LocalCacheKey).WorldToLight.M[3][2] = (param_1->WorldToLight).M[3][2];
  (this->LocalCacheKey).WorldToLight.M[3][3] = dVar1;
  if ((param_5) || ((param_6 && (bVar4)))) {
    this->RenderedFrameNumber = -1;
  }
  if (param_7 != this->bUseReceiverMask) {
    this->RenderedFrameNumber = -1;
    this->bUseReceiverMask = param_7;
  }
  iVar2 = this->RenderedFrameNumber;
  bVar4 = SUB41((uint)iVar2 >> 0x1f,0);
  if (bVar4 != this->bIsUncached) {
    this->RenderedFrameNumber = -1;
    iVar2 = -1;
    this->bIsUncached = bVar4;
  }
  if (param_4 != this->bIsDistantLight) {
    this->RenderedFrameNumber = -1;
    iVar2 = -1;
    this->bIsDistantLight = param_4;
  }
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  (this->LightOrigin).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
  (this->LightOrigin).field0_0x0._s_0.Y = dVar1;
  (this->LightOrigin).field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  this->LightRadius = param_3;
  if (iVar2 < 0) {
    this->PrevVirtualShadowMapId = -1;
    this->VirtualShadowMapId = -1;
  }
  return;
}

// UpdateVirtualShadowMapId @ 1458188e0

void __thiscall
FVirtualShadowMapPerLightCacheEntry::UpdateVirtualShadowMapId
          (FVirtualShadowMapPerLightCacheEntry *this,int param_1)

{
  this->PrevVirtualShadowMapId = this->VirtualShadowMapId;
  this->VirtualShadowMapId = param_1;
  return;
}

