// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 2

// FRDGTexture @ 145d8cf40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FRDGTexture * __thiscall
FRDGTexture::FRDGTexture
          (FRDGTexture *this,wchar_t *param_1,FRDGTextureDesc *param_2,ERDGTextureFlags param_3)

{
  int *piVar1;
  int *piVar2;
  TArray<TRHIPipelineArray<FRDGProducerState>,TRDGArrayAllocator<0>_> *pTVar3;
  short sVar4;
  ushort uVar5;
  FRDGTextureSubresourceLayout FVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FRDGTexture *pFVar10;
  TRHIPipelineArray<FRDGProducerState> *_Dst;
  short sVar11;
  int iVar12;
  uint uVar13;
  byte bVar14;
  
  if (((param_3 & ForceImmediateFirstBarrier) == None) && ((*(uint *)param_2 >> 0x12 & 1) == 0)) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  FRDGViewableResource::FRDGViewableResource
            ((FRDGViewableResource *)this,param_1,Texture,(bool)(param_3 >> 1 & 1),bVar8);
  this->_padding_ = (longlong)&___7FRDGTexture__6B_;
  FRHITextureDesc::FRHITextureDesc((FRHITextureDesc *)&this->Desc,(FRHITextureDesc *)param_2);
  this->Flags = param_3;
  this->Handle = 0xffffffff;
  this->PreviousOwner = 0xffffffff;
  (this->NextOwner).Index = 0xffffffff;
  if ((param_2->field_0x33 == '\v') || (bVar14 = 1, param_2->field_0x33 == ',')) {
    bVar14 = 2;
  }
  sVar11 = 1;
  bVar8 = false;
  if ((param_2->field_0x32 == '\x03') || (param_2->field_0x32 == '\x04')) {
    bVar8 = true;
  }
  sVar4 = *(short *)&param_2->field_0x2e;
  pTVar3 = &this->LastProducers;
  piVar1 = &(this->LastProducers).ArrayNum;
  (this->Layout).NumMips = param_2->field_0x30;
  piVar2 = &(this->LastProducers).ArrayMax;
  (this->Layout).NumPlaneSlices = bVar14;
  if (bVar8) {
    sVar11 = 6;
  }
  (this->Layout).NumArraySlices = sVar11 * sVar4;
  FVar6 = this->Layout;
  (this->WholeRange).NumMips = FVar6.NumMips;
  (this->WholeRange).MipIndex = 0;
  (this->WholeRange).PlaneSlice = 0;
  (this->WholeRange).ArraySlice = 0;
  (this->WholeRange).NumPlaneSlices = FVar6.NumPlaneSlices;
  (this->WholeRange).NumArraySlices = FVar6.NumArraySlices;
  FVar6 = this->Layout;
  this->RenderTarget = (IPooledRenderTarget *)0x0;
  this->TransientTexture = (FRHITransientTexture *)0x0;
  this->ViewCache = (FRHITextureViewCache *)0x0;
  uVar13 = *(uint *)&this->Desc;
  this->SubresourceCount = (FVar6._1_2_ & 0xff) * FVar6.NumArraySlices * (FVar6._0_2_ & 0xff);
  (this->State).AllocatorInstance.Data = (FRDGSubresourceState **)0x0;
  (this->State).ArrayNum = 0;
  (this->State).ArrayMax = 0;
  (this->FirstState).AllocatorInstance.Data = (FRDGSubresourceState **)0x0;
  (this->FirstState).ArrayNum = 0;
  (this->FirstState).ArrayMax = 0;
  (this->MergeState).AllocatorInstance.Data = (FRDGSubresourceState **)0x0;
  (this->MergeState).ArrayNum = 0;
  (this->MergeState).ArrayMax = 0;
  (pTVar3->AllocatorInstance).Data = (TRHIPipelineArray<FRDGProducerState> *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->Allocation).Reference = (IPooledRenderTarget *)0x0;
  (this->VisualizeTextureExtent).field0_0x0 = (TIntPoint<int>_u_0)0x0;
  if ((uVar13 >> 10 & 1) != 0) {
    *(undefined4 *)&this->_padding_ = 0x80000;
  }
  TArray<FRDGSubresourceState_*,TRDGArrayAllocator<0>_>::SetNum
            (&this->State,(uint)this->SubresourceCount,Default);
  TArray<FRDGSubresourceState_*,TRDGArrayAllocator<0>_>::SetNum
            (&this->FirstState,(uint)this->SubresourceCount,Default);
  TArray<FRDGSubresourceState_*,TRDGArrayAllocator<0>_>::SetNum
            (&this->MergeState,(uint)this->SubresourceCount,Default);
  iVar12 = *piVar1;
  uVar5 = this->SubresourceCount;
  uVar13 = (uint)uVar5;
  if (iVar12 < (int)(uint)uVar5) {
    iVar9 = UE::Core::Private::
            ReallocGrow<0,TRDGArrayAllocator<0>::ForElementType<TRHIPipelineArray<FRDGProducerState>_>_>
                      (0x40,8,uVar13 - iVar12,&pTVar3->AllocatorInstance,piVar1,piVar2);
    DefaultConstructItems<TRHIPipelineArray<FRDGProducerState>,int>
              ((pTVar3->AllocatorInstance).Data + iVar9,uVar13 - iVar12);
  }
  else if ((int)(uint)uVar5 < iVar12) {
    iVar12 = iVar12 - uVar13;
    if (iVar12 < 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pFVar10 = (FRDGTexture *)(*pcVar7)();
        return pFVar10;
      }
    }
    else if (iVar12 == 0) {
      return this;
    }
    _Dst = (pTVar3->AllocatorInstance).Data + uVar5;
    iVar9 = ((this->LastProducers).ArrayNum - iVar12) - uVar13;
    if (iVar9 != 0) {
      memmove(_Dst,_Dst + iVar12,(longlong)iVar9 << 6);
    }
    iVar12 = (this->LastProducers).ArrayNum - iVar12;
    (this->LastProducers).ArrayNum = iVar12;
    UE::Core::Private::
    ReallocShrink<0,TRDGArrayAllocator<0>::ForElementType<TRHIPipelineArray<FRDGProducerState>_>_>
              (0x40,8,&pTVar3->AllocatorInstance,iVar12,piVar2);
  }
  return this;
}

// GetSubresourceRangeSRV @ 145dbbba0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGTextureSubresourceRange __thiscall FRDGTexture::GetSubresourceRangeSRV(FRDGTexture *this)

{
  FRDGTextureSubresourceRange in_RDX;
  
  *(FRDGTextureSubresourceRange *)in_RDX = this->WholeRange;
  *(undefined1 *)((longlong)in_RDX + 1) = 0;
  *(undefined1 *)((longlong)in_RDX + 5) = 1;
  return in_RDX;
}

