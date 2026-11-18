// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 2

// GetRenderPassInfo @ 145db9c20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FRHIRenderPassInfo * __thiscall
FRDGParameterStruct::GetRenderPassInfo
          (FRDGParameterStruct *this,FRHIRenderPassInfo *__return_storage_ptr__)

{
  longlong lVar1;
  byte bVar2;
  Type TVar3;
  FRDGResource *pFVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  FRHIRenderPassInfo *pFVar8;
  FRHITexture *pFVar9;
  FRHITexture *pFVar10;
  FRHITexture *this_00;
  EDepthStencilTargetActions EVar11;
  FColorEntry *pFVar12;
  FRDGResource *pFVar13;
  longlong *plVar14;
  ERenderTargetActions EVar15;
  EDepthStencilTargetActions EVar16;
  EDepthStencilTargetActions EVar17;
  longlong *plVar18;
  longlong local_res8;
  char local_48;
  uchar uStack_47;
  short sStack_46;
  
  if ((((this->Layout).Reference)->RenderTargetsOffset == 0xffff) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("HasRenderTargets()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphParameter.h"
                         ,0xff,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FRHIRenderPassInfo *)(*pcVar5)();
    return pFVar8;
  }
  plVar14 = (longlong *)(this->Contents + ((this->Layout).Reference)->RenderTargetsOffset);
  FRHIRenderPassInfo::FRHIRenderPassInfo(__return_storage_ptr__);
  this_00 = (FRHITexture *)0x0;
  local_res8 = 0;
  pFVar10 = this_00;
  plVar18 = plVar14;
  do {
    if (*plVar18 == 0) break;
    pFVar4 = (FRDGResource *)*plVar18;
    pFVar13 = (FRDGResource *)plVar18[1];
    lVar1 = plVar18[2];
    EVar15 = ~(byte)((uint)pFVar4[4]._padding_ >> 0xc) & DontLoad_Store;
    if ((pFVar13 == (FRDGResource *)0x0) || (pFVar13 == pFVar4)) {
      pFVar12 = (__return_storage_ptr__->ColorRenderTargets).Elements + (longlong)pFVar10;
      pFVar9 = (FRHITexture *)FRDGResource::GetRHI(pFVar4);
      pFVar12->RenderTarget = pFVar9;
      pFVar9 = this_00;
    }
    else {
      pFVar12 = (__return_storage_ptr__->ColorRenderTargets).Elements + (longlong)pFVar10;
      EVar15 = LoadOpMask;
      pFVar9 = (FRHITexture *)FRDGResource::GetRHI(pFVar4);
      pFVar12->RenderTarget = pFVar9;
      pFVar9 = (FRHITexture *)FRDGResource::GetRHI(pFVar13);
    }
    pFVar12->ResolveTarget = pFVar9;
    sStack_46 = (short)((ulonglong)lVar1 >> 0x10);
    pFVar12->ArraySlice = (int)sStack_46;
    uStack_47 = (uchar)((ulonglong)lVar1 >> 8);
    pFVar12->MipIndex = uStack_47;
    local_48 = (char)lVar1;
    pFVar12->Action = local_48 << 2 | EVar15;
    (**(code **)(pFVar12->RenderTarget->_padding_ + 0x20))();
    pFVar10 = (FRHITexture *)(ulonglong)((int)pFVar10 + 1);
    local_res8 = local_res8 + 1;
    plVar18 = plVar18 + 3;
  } while (local_res8 < 8);
  pFVar4 = (FRDGResource *)plVar14[0x18];
  if (pFVar4 != (FRDGResource *)0x0) {
    pFVar13 = (FRDGResource *)plVar14[0x19];
    TVar3 = *(Type *)((longlong)plVar14 + 0xd4);
    EVar11 = ~(byte)((uint)pFVar4[4]._padding_ >> 0xc) & DontLoad_StoreStencilNotDepth;
    if (pFVar13 != (FRDGResource *)0x0) {
      if (pFVar13 == pFVar4) {
        pFVar13 = (FRDGResource *)0x0;
      }
      else {
        EVar11 = 2;
      }
    }
    EVar16 = DontLoad_DontStore;
    if ((TVar3 & DepthMask) != DepthNop) {
      EVar16 = EVar11;
    }
    EVar17 = DontLoad_DontStore;
    if ((TVar3 & StencilMask) != DepthNop) {
      EVar17 = EVar11;
    }
    pFVar10 = (FRHITexture *)FRDGResource::GetRHI(pFVar4);
    (__return_storage_ptr__->DepthStencilRenderTarget).DepthStencilTarget = pFVar10;
    pFVar10 = this_00;
    if (pFVar13 != (FRDGResource *)0x0) {
      pFVar10 = (FRHITexture *)FRDGResource::GetRHI(pFVar13);
    }
    pFVar9 = (__return_storage_ptr__->DepthStencilRenderTarget).DepthStencilTarget;
    (__return_storage_ptr__->DepthStencilRenderTarget).ResolveTarget = pFVar10;
    lVar1 = plVar14[0x1a];
    bVar2 = *(byte *)((longlong)plVar14 + 0xd1);
    (__return_storage_ptr__->DepthStencilRenderTarget).ExclusiveDepthStencil.Value = TVar3;
    (__return_storage_ptr__->DepthStencilRenderTarget).Action =
         (((char)lVar1 << 2 | EVar16) << 2 | bVar2) << 2 | EVar17;
    (**(code **)(pFVar9->_padding_ + 0x20))();
  }
  lVar1 = plVar14[0x1b];
  lVar6 = plVar14[0x1c];
  (__return_storage_ptr__->ResolveRect).X1 = (int)lVar1;
  (__return_storage_ptr__->ResolveRect).Y1 = (int)((ulonglong)lVar1 >> 0x20);
  (__return_storage_ptr__->ResolveRect).X2 = (int)lVar6;
  (__return_storage_ptr__->ResolveRect).Y2 = (int)((ulonglong)lVar6 >> 0x20);
  __return_storage_ptr__->NumOcclusionQueries = *(uint *)(plVar14 + 0x1d);
  __return_storage_ptr__->SubpassHint = *(ESubpassHint *)((longlong)plVar14 + 0xec);
  __return_storage_ptr__->MultiViewCount = *(uchar *)((longlong)plVar14 + 0xed);
  if ((FRDGResource *)plVar14[0x1e] != (FRDGResource *)0x0) {
    this_00 = (FRHITexture *)FRDGResource::GetRHI((FRDGResource *)plVar14[0x1e]);
  }
  pFVar10 = (__return_storage_ptr__->ShadingRateTexture).Reference;
  if (pFVar10 != this_00) {
    (__return_storage_ptr__->ShadingRateTexture).Reference = this_00;
    if (this_00 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    if (pFVar10 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar10);
    }
  }
  __return_storage_ptr__->ShadingRateTextureCombiner =
       -((__return_storage_ptr__->ShadingRateTexture).Reference != (FRHITexture *)0x0) & VRSRB_Max;
  return __return_storage_ptr__;
}

// GetStaticUniformBuffers @ 145dbb2a0

FUniformBufferStaticBindings * __thiscall
FRDGParameterStruct::GetStaticUniformBuffers
          (FRDGParameterStruct *this,FUniformBufferStaticBindings *__return_storage_ptr__)

{
  uint uVar1;
  FRHIUniformBufferLayout *pFVar2;
  FRHIUniformBuffer *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FUniformBufferStaticBindings *pFVar7;
  ulonglong uVar8;
  uint uVar9;
  
  uVar9 = 0;
  (__return_storage_ptr__->Slots).AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_char>)0x0;
  (__return_storage_ptr__->Slots).ArrayNum = 0;
  (__return_storage_ptr__->Slots).ArrayMax = 8;
  (__return_storage_ptr__->UniformBuffers).AllocatorInstance.SecondaryData =
       (ForElementType<FRHIUniformBuffer_*>)0x0;
  (__return_storage_ptr__->UniformBuffers).ArrayNum = 0;
  *(undefined8 *)&(__return_storage_ptr__->UniformBuffers).ArrayMax = 8;
  __return_storage_ptr__->ShaderBindingLayout = (FRHIShaderBindingLayout *)0x0;
  uVar1 = (((this->Layout).Reference)->UniformBuffers).ArrayNum;
  if (uVar1 != 0) {
    do {
      pFVar2 = (this->Layout).Reference;
      uVar6 = 0;
      if ((int)uVar9 < (pFVar2->UniformBuffers).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FUniformBufferStaticBindings *)(*pcVar4)();
        return pFVar7;
      }
      uVar8 = (ulonglong)
              *(ushort *)
               ((pFVar2->UniformBuffers).AllocatorInstance.Data + (longlong)(int)uVar9 * 4);
      pFVar3 = *(FRHIUniformBuffer **)(this->Contents + uVar8);
      if ((pFVar3 != (FRHIUniformBuffer *)0x0) && ((this->Contents[uVar8 + 8] & 2) != 0)) {
        FUniformBufferStaticBindings::AddUniformBuffer(__return_storage_ptr__,pFVar3);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar1);
  }
  EnumerateUniformBuffers<_FRDGParameterStruct::GetStaticUniformBuffers_::__l2::<lambda_1>_>
            (this,(<lambda_1>)__return_storage_ptr__);
  return __return_storage_ptr__;
}

