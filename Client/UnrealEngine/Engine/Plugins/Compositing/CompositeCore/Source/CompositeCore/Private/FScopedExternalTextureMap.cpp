// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CompositeCore
// Functions: 2

// FScopedExternalTextureMap @ 14ea76750

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FScopedExternalTextureMap * __thiscall
UE::CompositeCore::FScopedExternalTextureMap::FScopedExternalTextureMap
          (FScopedExternalTextureMap *this,FCompositeCoreSceneViewExtension *param_1,
          FRDGBuilder *param_2,FSceneView *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  FRenderTarget *pFVar4;
  FRDGTexture **ppFVar5;
  code *pcVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  int iVar9;
  FPassTexture *pFVar10;
  FRDGTexture *pFVar11;
  TRefCountPtr<IPooledRenderTarget> *pTVar12;
  longlong *plVar13;
  FScopedExternalTextureMap *pFVar14;
  TIntPoint<int>_u_0 TVar15;
  longlong lVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  undefined1 local_res8 [8];
  int local_res10 [2];
  int local_res18 [2];
  FSceneView *local_res20;
  FRDGTexture *local_a8;
  int local_a0 [2];
  FScriptContainerElement *local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  undefined8 uStack_50;
  
  this->GraphBuilder = param_2;
  piVar1 = &(this->Textures).Pairs.ArrayMax;
  piVar2 = &(this->RestoreToExternal).ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->Textures).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Textures).Pairs.ArrayNum = 0;
  (this->RestoreToExternal).AllocatorInstance.Data = (FRDGViewableResource **)0x0;
  (this->RestoreToExternal).ArrayNum = 0;
  uVar17 = (param_1->ExternalInputs_RenderThread).Pairs.ArrayNum + 2;
  local_res20 = param_3;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  if (0 < (int)uVar17) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,uVar17,(ForAnyElementType *)&this->Textures,0,piVar1);
  }
  local_res10[0] = 2;
  pFVar10 = TSortedMap<int,UE::CompositeCore::FPassTexture,TSizedDefaultAllocator<32>,TLess<int_const_>_>
            ::Emplace<int>(&this->Textures,local_res10);
  pFVar11 = FSystemTextures::GetBlackDummy((FSystemTextures *)&GSystemTextures,this->GraphBuilder);
  local_88 = 0;
  uStack_80 = 0;
  if (pFVar11 == (FRDGTexture *)0x0) {
    TVar15 = (TIntPoint<int>_u_0)0x0;
  }
  else {
    TVar15 = *(TIntPoint<int>_u_0 *)&(pFVar11->Desc).field_0x24;
  }
  (pFVar10->Texture).Texture = pFVar11;
  (pFVar10->Texture).ViewRect.field0_0x0._s_0.Max.field0_0x0 = TVar15;
  (pFVar10->Texture).ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  uVar17 = FSceneView::GetViewKey(param_3);
  pTVar12 = TSortedMap<unsigned_int,TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>
            ::Find(&param_1->CustomRenderTargetPerView_RenderThread,uVar17);
  if (pTVar12 != (TRefCountPtr<IPooledRenderTarget> *)0x0) {
    local_res18[0] = 1;
    pFVar10 = TSortedMap<int,UE::CompositeCore::FPassTexture,TSizedDefaultAllocator<32>,TLess<int_const_>_>
              ::Emplace<int>(&this->Textures,local_res18);
    pFVar11 = FRDGBuilder::RegisterExternalTexture(this->GraphBuilder,pTVar12,None);
    local_70 = 0;
    uStack_68 = 0;
    if (pFVar11 == (FRDGTexture *)0x0) {
      TVar15 = (TIntPoint<int>_u_0)0x0;
    }
    else {
      TVar15 = *(TIntPoint<int>_u_0 *)&(pFVar11->Desc).field_0x24;
    }
    (pFVar10->Texture).Texture = pFVar11;
    (pFVar10->Texture).ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
    (pFVar10->Texture).ViewRect.field0_0x0._s_0.Max.field0_0x0 = TVar15;
    (pFVar10->Metadata).bInvertedAlpha = true;
  }
  uVar17 = (param_1->ExternalInputs_RenderThread).Pairs.ArrayNum;
  if (-1 < (int)uVar17) {
    if (*piVar2 < (int)uVar17) {
      Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRDGViewableResource_*>_>
                (8,8,uVar17,&(this->RestoreToExternal).AllocatorInstance,
                 (this->RestoreToExternal).ArrayNum,piVar2);
    }
    iVar3 = (param_1->ExternalInputs_RenderThread).Pairs.ArrayNum;
    pFVar18 = (param_1->ExternalInputs_RenderThread).Pairs.AllocatorInstance.Data;
    local_98 = pFVar18 + (longlong)iVar3 * 0x18;
    while( true ) {
      pFVar7 = local_98;
      if ((param_1->ExternalInputs_RenderThread).Pairs.ArrayNum != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TTuple<unsigned_int,UE::CompositeCore::FExternalRenderTarget>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar18 == pFVar7) break;
      local_a0[0] = *(int *)pFVar18;
      pFVar10 = TSortedMap<int,UE::CompositeCore::FPassTexture,TSizedDefaultAllocator<32>,TLess<int_const_>_>
                ::Emplace<int>(&this->Textures,local_a0);
      pFVar11 = FRDGBuilder::RegisterExternalTexture
                          (this->GraphBuilder,(TRefCountPtr<IPooledRenderTarget> *)(pFVar18 + 8),
                           None);
      local_58 = 0;
      uStack_50 = 0;
      if (pFVar11 == (FRDGTexture *)0x0) {
        TVar15 = (TIntPoint<int>_u_0)0x0;
      }
      else {
        TVar15 = *(TIntPoint<int>_u_0 *)&(pFVar11->Desc).field_0x24;
      }
      (pFVar10->Texture).Texture = pFVar11;
      (pFVar10->Texture).ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
      (pFVar10->Texture).ViewRect.field0_0x0._s_0.Max.field0_0x0 = TVar15;
      pFVar10->Metadata = *(FResourceMetadata *)(pFVar18 + 0x10);
      pFVar4 = local_res20->Family->RenderTarget;
      if (pFVar4 == (FRenderTarget *)0x0) {
        lVar16 = 0;
      }
      else {
        plVar13 = (longlong *)(**(code **)(pFVar4->_padding_ + 0x10))();
        lVar16 = *plVar13;
      }
      if (pFVar11 != (FRDGTexture *)0x0) {
        FRDGResource::ValidateRHIAccess((FRDGResource *)pFVar11);
        if (pFVar11->_padding_ != lVar16) {
          FRDGBuilder::UseInternalAccessMode(this->GraphBuilder,(FRDGViewableResource *)pFVar11);
          ppFVar5 = (FRDGTexture **)(this->RestoreToExternal).AllocatorInstance.Data;
          local_a8 = pFVar11;
          if ((ppFVar5 <= &local_a8) && (&local_a8 < ppFVar5 + *piVar2)) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar8) {
              pcVar6 = (code *)swi(3);
              pFVar14 = (FScopedExternalTextureMap *)(*pcVar6)();
              return pFVar14;
            }
          }
          iVar9 = (this->RestoreToExternal).ArrayNum;
          if (iVar9 == *piVar2) {
            iVar9 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRDGViewableResource_*>_>
                              (0x808,&(this->RestoreToExternal).AllocatorInstance,piVar2);
          }
          (this->RestoreToExternal).ArrayNum = iVar9 + 1;
          (this->RestoreToExternal).AllocatorInstance.Data[iVar9] = (FRDGViewableResource *)local_a8
          ;
        }
      }
      pFVar18 = pFVar18 + 0x18;
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
}

// ~FScopedExternalTextureMap @ 14ea77560

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::CompositeCore::FScopedExternalTextureMap::~FScopedExternalTextureMap
          (FScopedExternalTextureMap *this)

{
  int iVar1;
  FRDGViewableResource **ppFVar2;
  FScriptContainerElement *pFVar3;
  FRDGViewableResource **ppFVar4;
  undefined1 local_res8 [8];
  
  ppFVar4 = (this->RestoreToExternal).AllocatorInstance.Data;
  iVar1 = (this->RestoreToExternal).ArrayNum;
  ppFVar2 = ppFVar4 + iVar1;
  while( true ) {
    if ((this->RestoreToExternal).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FRDGViewableResource_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (ppFVar4 == ppFVar2) break;
    FRDGBuilder::UseExternalAccessMode(this->GraphBuilder,*ppFVar4,SRVMask,Graphics);
    ppFVar4 = ppFVar4 + 1;
  }
  ppFVar2 = (this->RestoreToExternal).AllocatorInstance.Data;
  if (ppFVar2 != (FRDGViewableResource **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar2);
  }
  pFVar3 = (this->Textures).Pairs.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

