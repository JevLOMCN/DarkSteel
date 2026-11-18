// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 109

// ResizeAllocation @ 14478d590

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<FCompositionLighting::FAOConfig>::ResizeAllocation
          (ForElementType<FCompositionLighting::FAOConfig> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FCompositionLighting::FAOConfig> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FCompositionLighting::FAOConfig>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FCompositionLighting::FAOConfig>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14478d7f0

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FRenderTargetBinding>::
ResizeAllocation(ForElementType<FRenderTargetBinding> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FRenderTargetBinding> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<FRenderTargetBinding>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x18);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FRenderTargetBinding>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x18);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14478d920

void __thiscall
TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::
ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>::ResizeAllocation
          (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 4) {
    if (_Src == (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14478da50

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_ELightMapPolicyType>::
ResizeAllocation(void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)this + 8);
  if ((uint)param_2 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(this,_Src,(longlong)param_1 << 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (void *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 8),0,param_2,param_3);
    memmove(*(void **)((longlong)this + 8),this,(longlong)param_1 << 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)((longlong)this + 8),param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14482e5d0

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGTexture_*>::
ResizeAllocation(ForElementType<FRDGTexture_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FRDGTexture_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<FRDGTexture_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FRDGTexture_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14482e7a0

void __thiscall
TSizedInlineAllocator<9,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>
::ResizeAllocation(ForElementType<UE::Math::TVector<double>_> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  ForElementType<UE::Math::TVector<double>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 10) {
    if (_Src == (ForElementType<UE::Math::TVector<double>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x18);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Math::TVector<double>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x18);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14482e840

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FConvexVolume>::
ResizeAllocation(ForElementType<FConvexVolume> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FConvexVolume> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<FConvexVolume>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 9);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FConvexVolume>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 9);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14482e980

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FScreenPassTexture>::
ResizeAllocation(ForElementType<FScreenPassTexture> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FScreenPassTexture> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<FScreenPassTexture>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x18);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FScreenPassTexture>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x18);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14482eab0

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<TPipelineState<FDeferredShadingSceneRenderer::FPerViewPipelineState>_>::
ResizeAllocation(ForElementType<TPipelineState<FDeferredShadingSceneRenderer::FPerViewPipelineState>_>
                 *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TPipelineState<FDeferredShadingSceneRenderer::FPerViewPipelineState>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<TPipelineState<FDeferredShadingSceneRenderer::FPerViewPipelineState>_>
                 )0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 5);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TPipelineState<FDeferredShadingSceneRenderer::FPerViewPipelineState>_>
                    )0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 5);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14482ed00

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::Tasks::Private::FTaskHandle>::ResizeAllocation
          (ForElementType<UE::Tasks::Private::FTaskHandle> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<UE::Tasks::Private::FTaskHandle> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<UE::Tasks::Private::FTaskHandle>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Tasks::Private::FTaskHandle>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14489d160

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FLightSceneInfo_*>::
ResizeAllocation(ForElementType<FLightSceneInfo_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FLightSceneInfo_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FLightSceneInfo_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FLightSceneInfo_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14489d1f0

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
ForElementType<`FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic>::Build'::__l2::FCreateNode>
::ResizeAllocation(void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)this + 0x180);
  if ((uint)param_2 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(this,_Src,(longlong)param_1 * 0xc);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (void *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0x180),0,param_2,param_3);
    memmove(*(void **)((longlong)this + 0x180),this,(longlong)param_1 * 0xc);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)((longlong)this + 0x180),param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14489d370

void __thiscall
TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::
ForElementType<FTextureLayout3d::FTextureLayoutNode3d>::ResizeAllocation
          (ForElementType<FTextureLayout3d::FTextureLayoutNode3d> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FTextureLayout3d::FTextureLayoutNode3d> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 6) {
    if (_Src == (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x1c);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x1c);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14489d410

void __thiscall
TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FDistanceFieldAssetMipState>
::ResizeAllocation(ForElementType<FDistanceFieldAssetMipState> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  ForElementType<FDistanceFieldAssetMipState> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 4) {
    if (_Src == (ForElementType<FDistanceFieldAssetMipState>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 6);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FDistanceFieldAssetMipState>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 6);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14492fbd0

void __thiscall
TSizedInlineAllocator<128,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
ForElementType<FGPUScenePrimitiveCollector::FUploadData_*>::ResizeAllocation
          (ForElementType<FGPUScenePrimitiveCollector::FUploadData_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FGPUScenePrimitiveCollector::FUploadData_*> *this_00;
  FUploadData **_Src;
  
  this_00 = &this->SecondaryData;
  _Src = this_00->Data;
  if ((uint)param_2 < 0x81) {
    if (_Src != (FUploadData **)0x0) {
      memmove(this,_Src,(longlong)param_1 << 3);
      if (0x7ffffffe < param_3 - 1) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(0,param_3);
      }
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(this_00->Data);
      this_00->Data = (FUploadData **)0x0;
    }
  }
  else if (_Src == (FUploadData **)0x0) {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FGPUScenePrimitiveCollector::FUploadData_*>::ResizeAllocation
              (this_00,0,param_2,param_3);
    memmove(this_00->Data,this,(longlong)param_1 << 3);
  }
  else {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FGPUScenePrimitiveCollector::FUploadData_*>::ResizeAllocation
              (this_00,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 14492fd30

void __thiscall
TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::
ForElementType<FGlobalDistanceFieldPackedClipmap>::ResizeAllocation
          (ForElementType<FGlobalDistanceFieldPackedClipmap> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FGlobalDistanceFieldPackedClipmap> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 7) {
    if (_Src == (ForElementType<FGlobalDistanceFieldPackedClipmap>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x390);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FGlobalDistanceFieldPackedClipmap>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x390);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14492fe70

void __thiscall
TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
ForElementType<FInstanceUploadBatch>::ResizeAllocation
          (ForElementType<FInstanceUploadBatch> *this,int param_1,int param_2,ulong64 param_3)

{
  FInstanceUploadBatch *_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 2) {
    if (_Src != (FInstanceUploadBatch *)0x0) {
      memmove(this,_Src,(longlong)param_1 << 3);
      if (0x7ffffffe < param_3 - 1) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(0,param_3);
      }
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free((this->SecondaryData).Data);
      (this->SecondaryData).Data = (FInstanceUploadBatch *)0x0;
    }
  }
  else if (_Src == (FInstanceUploadBatch *)0x0) {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FInstanceUploadBatch>::ResizeAllocation(&this->SecondaryData,0,param_2,param_3);
    memmove((this->SecondaryData).Data,this,(longlong)param_1 << 3);
  }
  else {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FInstanceUploadBatch>::ResizeAllocation
              (&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 14492ffc0

void __thiscall
TSizedInlineAllocator<256,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
ForElementType<FInstanceUploadBatch::FItem>::ResizeAllocation
          (ForElementType<FInstanceUploadBatch::FItem> *this,int param_1,int param_2,ulong64 param_3
          )

{
  ForElementType<FInstanceUploadBatch::FItem> *this_00;
  FItem *_Src;
  
  this_00 = &this->SecondaryData;
  _Src = this_00->Data;
  if ((uint)param_2 < 0x101) {
    if (_Src != (FItem *)0x0) {
      memmove(this,_Src,(longlong)param_1 * 0xc);
      if (0x7ffffffe < param_3 - 1) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(0,param_3);
      }
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(this_00->Data);
      this_00->Data = (FItem *)0x0;
    }
  }
  else if (_Src == (FItem *)0x0) {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FInstanceUploadBatch::FItem>::ResizeAllocation(this_00,0,param_2,param_3);
    memmove(this_00->Data,this,(longlong)param_1 * 0xc);
  }
  else {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FInstanceUploadBatch::FItem>::ResizeAllocation(this_00,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 144930070

void __thiscall
TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::
ForElementType<FSpanAllocator::FLinearAllocation>::ResizeAllocation
          (ForElementType<FSpanAllocator::FLinearAllocation> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FSpanAllocator::FLinearAllocation> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0xb) {
    if (_Src == (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 144930240

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData>::ResizeAllocation
          (ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData> *this,int param_1,int param_2
          ,ulong64 param_3)

{
  ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x68);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x68);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1449304d0

void __thiscall
TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FClipmapUpdateBounds>::
ResizeAllocation(ForElementType<FClipmapUpdateBounds> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FClipmapUpdateBounds> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x41) {
    if (_Src == (ForElementType<FClipmapUpdateBounds>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x38);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FClipmapUpdateBounds>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x38);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1449fe050

void __thiscall
TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>::
ResizeAllocation(ForElementType<UE::Math::TPlane<double>_> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<UE::Math::TPlane<double>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 7) {
    if (_Src == (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 5);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 5);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 144aad870

void __thiscall
TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FLightSceneInfoCompact>::
ResizeAllocation(ForElementType<FLightSceneInfoCompact> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<FLightSceneInfoCompact> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x41) {
    if (_Src == (ForElementType<FLightSceneInfoCompact>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 6);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FLightSceneInfoCompact>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 6);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 144b45bc0

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<FAsyncLumenIndirectLightingOutputs::FViewOutputs>::ResizeAllocation
          (ForElementType<FAsyncLumenIndirectLightingOutputs::FViewOutputs> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<FAsyncLumenIndirectLightingOutputs::FViewOutputs> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<FAsyncLumenIndirectLightingOutputs::FViewOutputs>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x340);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FAsyncLumenIndirectLightingOutputs::FViewOutputs>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x340);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 144be0340

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
ForElementType<FForwardLightUniformParameters_*>::ResizeAllocation
          (ForElementType<FForwardLightUniformParameters_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FForwardLightUniformParameters_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<FForwardLightUniformParameters_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FForwardLightUniformParameters_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 144be05b0

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>::
ResizeAllocation(ForElementType<UE::Math::TPlane<double>_> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<UE::Math::TPlane<double>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 5);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 5);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 144be0650

void __thiscall
TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<float>_>
::ResizeAllocation(ForElementType<UE::Math::TVector4<float>_> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  ForElementType<UE::Math::TVector4<float>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 6) {
    if (_Src == (ForElementType<UE::Math::TVector4<float>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Math::TVector4<float>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 144be06e0

void __thiscall
TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<float>_>
::ResizeAllocation(ForElementType<UE::Math::TVector4<float>_> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  ForElementType<UE::Math::TVector4<float>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0xe) {
    if (_Src == (ForElementType<UE::Math::TVector4<float>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Math::TVector4<float>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 144be0780

void __thiscall
TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<float>_>
::ResizeAllocation(ForElementType<UE::Math::TVector<float>_> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  ForElementType<UE::Math::TVector<float>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0xe) {
    if (_Src == (ForElementType<UE::Math::TVector<float>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0xc);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Math::TVector<float>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0xc);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 144c5c3d0

void __thiscall
TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
ForElementType<unsigned_int>::ResizeAllocation
          (ForElementType<unsigned_int> *this,int param_1,int param_2,ulong64 param_3)

{
  uint *_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 5) {
    if (_Src != (uint *)0x0) {
      memmove(this,_Src,(longlong)param_1 << 2);
      if (0x7ffffffe < param_3 - 1) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(0,param_3);
      }
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free((this->SecondaryData).Data);
      (this->SecondaryData).Data = (uint *)0x0;
    }
  }
  else if (_Src == (uint *)0x0) {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>::
    ResizeAllocation(&this->SecondaryData,0,param_2,param_3);
    memmove((this->SecondaryData).Data,this,(longlong)param_1 << 2);
  }
  else {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>::
    ResizeAllocation(&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 144c5c520

void __thiscall
TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>::ForElementType<FLightSceneInfoCompact>::
ResizeAllocation(ForElementType<FLightSceneInfoCompact> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<FLightSceneInfoCompact> FVar1;
  ulong64 uVar2;
  
  FVar1 = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (FVar1 != (ForElementType<FLightSceneInfoCompact>)0x0) {
      memmove(this,(void *)FVar1,(longlong)param_1 << 6);
      FVar1 = this->SecondaryData;
      if (FVar1 != (ForElementType<FLightSceneInfoCompact>)0x0) {
        if (0x7ffffffe < param_3 - 1) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidAlignedHeapAllocatorNum(0,param_3);
        }
        uVar2 = 0;
LAB_144c5c5eb:
        FVar1 = (ForElementType<FLightSceneInfoCompact>)FMemory::Realloc((void *)FVar1,uVar2,0x10);
        this->SecondaryData = FVar1;
        return;
      }
    }
  }
  else {
    if (FVar1 != (ForElementType<FLightSceneInfoCompact>)0x0) {
      if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
        uVar2 = (longlong)param_2 * param_3;
        goto LAB_144c5c5eb;
      }
LAB_144c5c60d:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidAlignedHeapAllocatorNum(param_2,param_3);
    }
    FVar1 = (ForElementType<FLightSceneInfoCompact>)0x0;
    if (param_2 != 0) {
      if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) goto LAB_144c5c60d;
      FVar1 = (ForElementType<FLightSceneInfoCompact>)
              FMemory::Realloc((void *)0x0,(longlong)param_2 * param_3,0x10);
      this->SecondaryData = FVar1;
    }
    memmove((void *)FVar1,this,(longlong)param_1 << 6);
  }
  return;
}

// ResizeAllocation @ 144c5c630

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
ForElementType<LumenRadianceCache::FUpdateInputs>::ResizeAllocation
          (ForElementType<LumenRadianceCache::FUpdateInputs> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<LumenRadianceCache::FUpdateInputs> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<LumenRadianceCache::FUpdateInputs>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0xb0);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<LumenRadianceCache::FUpdateInputs>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0xb0);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 144c5c6d0

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
ForElementType<LumenRadianceCache::FUpdateOutputs>::ResizeAllocation
          (ForElementType<LumenRadianceCache::FUpdateOutputs> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<LumenRadianceCache::FUpdateOutputs> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<LumenRadianceCache::FUpdateOutputs>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<LumenRadianceCache::FUpdateOutputs>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 144d98b80

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FPrimitiveSceneInfo_*>::
ResizeAllocation(ForElementType<FPrimitiveSceneInfo_*> *this,int param_1,int param_2,ulong64 param_3
                )

{
  ForElementType<FPrimitiveSceneInfo_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<FPrimitiveSceneInfo_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FPrimitiveSceneInfo_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 144d98cb0

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>
::ResizeAllocation(ForElementType<UE::Math::TVector<double>_> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  ForElementType<UE::Math::TVector<double>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<UE::Math::TVector<double>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x18);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Math::TVector<double>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x18);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 144d98e80

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FLumenPackedLight>::
ResizeAllocation(ForElementType<FLumenPackedLight> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FLumenPackedLight> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<FLumenPackedLight>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x90);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FLumenPackedLight>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x90);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 144d99240

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
ForElementType<FLumenSurfaceCacheAllocator::FPageBinAllocation>::ResizeAllocation
          (ForElementType<FLumenSurfaceCacheAllocator::FPageBinAllocation> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<FLumenSurfaceCacheAllocator::FPageBinAllocation> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<FLumenSurfaceCacheAllocator::FPageBinAllocation>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x48);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FLumenSurfaceCacheAllocator::FPageBinAllocation>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x48);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 144d992e0

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FViewBatchedLightParameters>
::ResizeAllocation(ForElementType<FViewBatchedLightParameters> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  ForElementType<FViewBatchedLightParameters> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<FViewBatchedLightParameters>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 6);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FViewBatchedLightParameters>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 6);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 144d99370

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
ForElementType<TUniformBufferRef<FDeferredLightUniformStruct>_>::ResizeAllocation
          (ForElementType<TUniformBufferRef<FDeferredLightUniformStruct>_> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<TUniformBufferRef<FDeferredLightUniformStruct>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<TUniformBufferRef<FDeferredLightUniformStruct>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TUniformBufferRef<FDeferredLightUniformStruct>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 144d99550

void __thiscall
TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FLumenGatheredLight>::
ResizeAllocation(ForElementType<FLumenGatheredLight> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FLumenGatheredLight> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x41) {
    if (_Src == (ForElementType<FLumenGatheredLight>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x60);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FLumenGatheredLight>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x60);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 144eaa090

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<IPooledRenderTarget_*>::
ResizeAllocation(ForElementType<IPooledRenderTarget_*> *this,int param_1,int param_2,ulong64 param_3
                )

{
  ForElementType<IPooledRenderTarget_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<IPooledRenderTarget_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<IPooledRenderTarget_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 144eaa120

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGTexture_*>::
ResizeAllocation(ForElementType<FRDGTexture_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FRDGTexture_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FRDGTexture_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FRDGTexture_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 144eaa1b0

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIShaderResourceView_*>::
ResizeAllocation(ForElementType<FRHIShaderResourceView_*> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<FRHIShaderResourceView_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FRHIShaderResourceView_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FRHIShaderResourceView_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 144eaa240

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
ForElementType<FMaterialRenderProxy_const_*>::ResizeAllocation
          (ForElementType<FMaterialRenderProxy_const_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FMaterialRenderProxy_const_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<FMaterialRenderProxy_const_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FMaterialRenderProxy_const_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 144eaa4b0

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialCacheLayer>::
ResizeAllocation(ForElementType<FMaterialCacheLayer> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FMaterialCacheLayer> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FMaterialCacheLayer>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x18);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FMaterialCacheLayer>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x18);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 144eaa870

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialCacheStackEntry>::
ResizeAllocation(ForElementType<FMaterialCacheStackEntry> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<FMaterialCacheStackEntry> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FMaterialCacheStackEntry>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x30);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FMaterialCacheStackEntry>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x30);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 144eaaa50

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FVTProduceTargetLayer>::
ResizeAllocation(ForElementType<FVTProduceTargetLayer> *this,int param_1,int param_2,ulong64 param_3
                )

{
  ForElementType<FVTProduceTargetLayer> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FVTProduceTargetLayer>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 5);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FVTProduceTargetLayer>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 5);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 144f23950

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshBatchElement>::
ResizeAllocation(ForElementType<FMeshBatchElement> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FMeshBatchElement> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<FMeshBatchElement>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x98);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FMeshBatchElement>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x98);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 144f239f0

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
ForElementType<FMeshDrawShaderBindingsLayout>::ResizeAllocation
          (ForElementType<FMeshDrawShaderBindingsLayout> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FMeshDrawShaderBindingsLayout> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 144f23a80

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_ELightMapPolicyType>::
ResizeAllocation(void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)this + 0x10);
  if ((uint)param_2 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(this,_Src,(longlong)param_1 << 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (void *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0x10),0,param_2,param_3);
    memmove(*(void **)((longlong)this + 0x10),this,(longlong)param_1 << 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)((longlong)this + 0x10),param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 144fe3570

void __thiscall
TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGTexture_*>::
ResizeAllocation(ForElementType<FRDGTexture_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FRDGTexture_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 7) {
    if (_Src == (ForElementType<FRDGTexture_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FRDGTexture_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 144fe3600

void __thiscall
TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGTextureUAV_*>::
ResizeAllocation(ForElementType<FRDGTextureUAV_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FRDGTextureUAV_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 4) {
    if (_Src == (ForElementType<FRDGTextureUAV_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FRDGTextureUAV_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 144fe3870

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
ForElementType<FRenderViewContext>::ResizeAllocation
          (ForElementType<FRenderViewContext> *this,int param_1,int param_2,ulong64 param_3)

{
  FRenderViewContext *_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 3) {
    if (_Src != (FRenderViewContext *)0x0) {
      memmove(this,_Src,(longlong)param_1 << 4);
      if (0x7ffffffe < param_3 - 1) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(0,param_3);
      }
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free((this->SecondaryData).Data);
      (this->SecondaryData).Data = (FRenderViewContext *)0x0;
    }
  }
  else if (_Src == (FRenderViewContext *)0x0) {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FRenderViewContext>::ResizeAllocation(&this->SecondaryData,0,param_2,param_3);
    memmove((this->SecondaryData).Data,this,(longlong)param_1 << 4);
  }
  else {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FRenderViewContext>::ResizeAllocation
              (&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 1450760f0

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>::
ResizeAllocation(ForElementType<unsigned_char> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<unsigned_char> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<unsigned_char>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<unsigned_char>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145076180

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FNaniteVisibilityQuery_*>::
ResizeAllocation(ForElementType<FNaniteVisibilityQuery_*> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<FNaniteVisibilityQuery_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<FNaniteVisibilityQuery_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FNaniteVisibilityQuery_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1450764a0

void __thiscall
TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::
ForElementType<FNaniteRasterPipelines::FFixedFunctionBin>::ResizeAllocation
          (ForElementType<FNaniteRasterPipelines::FFixedFunctionBin> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FNaniteRasterPipelines::FFixedFunctionBin> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 7) {
    if (_Src == (ForElementType<FNaniteRasterPipelines::FFixedFunctionBin>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0xc);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FNaniteRasterPipelines::FFixedFunctionBin>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0xc);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1450765d0

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<FNaniteVisibility::FRasterBin>::ResizeAllocation
          (ForElementType<FNaniteVisibility::FRasterBin> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FNaniteVisibility::FRasterBin> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<FNaniteVisibility::FRasterBin>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FNaniteVisibility::FRasterBin>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145076660

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<`FNaniteShadingPipelines::ComputeRelevance'::__l2::FRelevanceContext>::
ResizeAllocation(void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)this + 0x40);
  if ((uint)param_2 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(this,_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (void *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0x40),0,param_2,param_3);
    memmove(*(void **)((longlong)this + 0x40),this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)((longlong)this + 0x40),param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1450766f0

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<FNaniteVisibility::FShadingBin>::ResizeAllocation
          (ForElementType<FNaniteVisibility::FShadingBin> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FNaniteVisibility::FShadingBin> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<FNaniteVisibility::FShadingBin>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FNaniteVisibility::FShadingBin>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145076780

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<Nanite::FVisualizeResult>::
ResizeAllocation(ForElementType<Nanite::FVisualizeResult> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<Nanite::FVisualizeResult> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<Nanite::FVisualizeResult>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x18);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<Nanite::FVisualizeResult>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x18);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145076960

void __thiscall
TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
::ForElementType<FSetElementId>::ResizeAllocation
          (ForElementType<FSetElementId> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FSetElementId> *this_00;
  FSetElementId *pFVar1;
  ForElementType<FSetElementId> *pFVar2;
  
  pFVar2 = (ForElementType<FSetElementId> *)(this->SecondaryData).SecondaryData.Data;
  this_00 = &this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (pFVar2 == (ForElementType<FSetElementId> *)0x0) {
      pFVar2 = this_00;
    }
    if (pFVar2 != (ForElementType<FSetElementId> *)0x0) {
      memmove(this,pFVar2,(longlong)param_1 << 2);
      pFVar1 = (this->SecondaryData).SecondaryData.Data;
      if (pFVar1 != (FSetElementId *)0x0) {
        if (0x7ffffffe < param_3 - 1) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(0,param_3);
        }
        TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar1);
        (this->SecondaryData).SecondaryData.Data = (FSetElementId *)0x0;
      }
    }
  }
  else {
    if (pFVar2 == (ForElementType<FSetElementId> *)0x0) {
      pFVar2 = this_00;
    }
    if (pFVar2 == (ForElementType<FSetElementId> *)0x0) {
      TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
      ForElementType<FSetElementId>::ResizeAllocation(this_00,0,param_2,param_3);
      pFVar2 = (ForElementType<FSetElementId> *)(this->SecondaryData).SecondaryData.Data;
      if (pFVar2 == (ForElementType<FSetElementId> *)0x0) {
        pFVar2 = this_00;
      }
      memmove(pFVar2,this,(longlong)param_1 << 2);
    }
    else {
      TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
      ForElementType<FSetElementId>::ResizeAllocation(this_00,param_1,param_2,param_3);
    }
  }
  return;
}

// ResizeAllocation @ 145076a30

void __thiscall
TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
ForElementType<FSetElementId>::ResizeAllocation
          (ForElementType<FSetElementId> *this,int param_1,int param_2,ulong64 param_3)

{
  FSetElementId *_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 5) {
    if (_Src != (FSetElementId *)0x0) {
      memmove(this,_Src,(longlong)param_1 << 2);
      if (0x7ffffffe < param_3 - 1) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(0,param_3);
      }
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free((this->SecondaryData).Data);
      (this->SecondaryData).Data = (FSetElementId *)0x0;
    }
  }
  else if (_Src == (FSetElementId *)0x0) {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSetElementId>::
    ResizeAllocation(&this->SecondaryData,0,param_2,param_3);
    memmove((this->SecondaryData).Data,this,(longlong)param_1 << 2);
  }
  else {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSetElementId>::
    ResizeAllocation(&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 14515fc50

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
ForElementType<`DiaphragmDOF::AddPasses'::__l155::FDOFPassDescriptor>::ResizeAllocation
          (void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)this + 0x100);
  if ((uint)param_2 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(this,_Src,(longlong)param_1 << 6);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (void *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0x100),0,param_2,param_3);
    memmove(*(void **)((longlong)this + 0x100),this,(longlong)param_1 << 6);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)((longlong)this + 0x100),param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1451e30c0

void __thiscall
TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<UMaterialInterface_const_*>
::ResizeAllocation(ForElementType<UMaterialInterface_const_*> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  ForElementType<UMaterialInterface_const_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0xb) {
    if (_Src == (ForElementType<UMaterialInterface_const_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UMaterialInterface_const_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1451e3150

void __thiscall
TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FPostProcessMaterialNode>::
ResizeAllocation(ForElementType<FPostProcessMaterialNode> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<FPostProcessMaterialNode> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0xb) {
    if (_Src == (ForElementType<FPostProcessMaterialNode>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x18);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FPostProcessMaterialNode>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x18);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1452d28f0

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FNaniteRasterPipeline>::
ResizeAllocation(ForElementType<FNaniteRasterPipeline> *this,int param_1,int param_2,ulong64 param_3
                )

{
  ForElementType<FNaniteRasterPipeline> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<FNaniteRasterPipeline>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 5);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FNaniteRasterPipeline>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 5);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1452d2990

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FNaniteShadingPipeline>::
ResizeAllocation(ForElementType<FNaniteShadingPipeline> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<FNaniteShadingPipeline> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<FNaniteShadingPipeline>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x58);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FNaniteShadingPipeline>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x58);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1452d2a30

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<FPrimitiveSceneInfo::FRayTracingLODData>::ResizeAllocation
          (ForElementType<FPrimitiveSceneInfo::FRayTracingLODData> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FPrimitiveSceneInfo::FRayTracingLODData> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<FPrimitiveSceneInfo::FRayTracingLODData>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x50);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FPrimitiveSceneInfo::FRayTracingLODData>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x50);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1452d2ac0

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>::
ResizeAllocation(ForElementType<TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>
                 *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>
                 )0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x18);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>
                    )0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x18);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1452d2b50

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FNaniteMaterialListContext>
::ResizeAllocation(ForElementType<FNaniteMaterialListContext> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  ForElementType<FNaniteMaterialListContext> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FNaniteMaterialListContext>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x30);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FNaniteMaterialListContext>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x30);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14544e0b0

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FLightSceneInfo_*>::
ResizeAllocation(ForElementType<FLightSceneInfo_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FLightSceneInfo_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<FLightSceneInfo_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FLightSceneInfo_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14544e1e0

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIRenderQuery_*>::
ResizeAllocation(ForElementType<FRHIRenderQuery_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FRHIRenderQuery_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<FRHIRenderQuery_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FRHIRenderQuery_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14544e270

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<USceneComponent_*>::
ResizeAllocation(ForElementType<USceneComponent_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<USceneComponent_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<USceneComponent_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<USceneComponent_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14544e800

void __thiscall
TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::
ForElementType<FTextureLayout::FTextureLayoutNode>::ResizeAllocation
          (ForElementType<FTextureLayout::FTextureLayoutNode> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FTextureLayout::FTextureLayoutNode> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 6) {
    if (_Src == (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x14);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x14);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14544e890

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
ForElementType<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>_>
::ResizeAllocation(ForElementType<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>_>
                   *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>_>
  _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>_>
                 )0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x50);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>_>
                    )0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x50);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14544e930

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FPrimitiveComponentId>::
ResizeAllocation(ForElementType<FPrimitiveComponentId> *this,int param_1,int param_2,ulong64 param_3
                )

{
  ForElementType<FPrimitiveComponentId> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<FPrimitiveComponentId>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FPrimitiveComponentId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1454b70f0

void __thiscall
TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
ResizeAllocation(ForElementType<unsigned_int> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<unsigned_int> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 4) {
    if (_Src == (ForElementType<unsigned_int>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<unsigned_int>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1454b7180

void __thiscall
TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
ForElementType<unsigned_int>::ResizeAllocation
          (ForElementType<unsigned_int> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<unsigned_int> *this_00;
  uint *_Src;
  
  this_00 = &this->SecondaryData;
  _Src = this_00->Data;
  if ((uint)param_2 < 0x21) {
    if (_Src != (uint *)0x0) {
      memmove(this,_Src,(longlong)param_1 << 2);
      if (0x7ffffffe < param_3 - 1) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(0,param_3);
      }
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(this_00->Data);
      this_00->Data = (uint *)0x0;
    }
  }
  else if (_Src == (uint *)0x0) {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>::
    ResizeAllocation(this_00,0,param_2,param_3);
    memmove(this_00->Data,this,(longlong)param_1 << 2);
  }
  else {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>::
    ResizeAllocation(this_00,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 1454b7870

void __thiscall
TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::
ForElementType<FOcclusionFeedback::FOcclusionBatch>::ResizeAllocation
          (ForElementType<FOcclusionFeedback::FOcclusionBatch> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FOcclusionFeedback::FOcclusionBatch> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 4) {
    if (_Src == (ForElementType<FOcclusionFeedback::FOcclusionBatch>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 5);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FOcclusionFeedback::FOcclusionBatch>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 5);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1454b7d60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
ForElementType<FViewOcclusionQueries>::ResizeAllocation
          (ForElementType<FViewOcclusionQueries> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FViewOcclusionQueries> *this_00;
  FViewOcclusionQueries *_Src;
  
  this_00 = &this->SecondaryData;
  _Src = this_00->Data;
  if ((uint)param_2 < 2) {
    if (_Src != (FViewOcclusionQueries *)0x0) {
      memmove(this,_Src,(longlong)param_1 * 0x88);
      if (0x7ffffffe < param_3 - 1) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(0,param_3);
      }
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(this_00->Data);
      this_00->Data = (FViewOcclusionQueries *)0x0;
    }
  }
  else if (_Src == (FViewOcclusionQueries *)0x0) {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FViewOcclusionQueries>::ResizeAllocation(this_00,0,param_2,param_3);
    memmove(this_00->Data,this,(longlong)param_1 * 0x88);
  }
  else {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FViewOcclusionQueries>::ResizeAllocation(this_00,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 1455048f0

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
ForElementType<DynamicRenderScaling::TMap<float>::FItem>::ResizeAllocation
          (ForElementType<DynamicRenderScaling::TMap<float>::FItem> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<DynamicRenderScaling::TMap<float>::FItem> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14554fc60

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FSceneViewFamily_const_*>::
ResizeAllocation(ForElementType<FSceneViewFamily_const_*> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<FSceneViewFamily_const_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<FSceneViewFamily_const_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FSceneViewFamily_const_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14554fd90

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TIntRect<int>_>::
ResizeAllocation(ForElementType<UE::Math::TIntRect<int>_> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<UE::Math::TIntRect<int>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<UE::Math::TIntRect<int>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Math::TIntRect<int>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1455506e0

void __thiscall
TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::
ForElementType<FSSDConstantPixelDensityViewSettings>::ResizeAllocation
          (ForElementType<FSSDConstantPixelDensityViewSettings> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FSSDConstantPixelDensityViewSettings> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 7) {
    if (_Src == (ForElementType<FSSDConstantPixelDensityViewSettings>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x60);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FSSDConstantPixelDensityViewSettings>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x60);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1455508c0

void __thiscall
TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
ForElementType<FVisibilityTaskConfig::FOcclusionCull::FView>::ResizeAllocation
          (ForElementType<FVisibilityTaskConfig::FOcclusionCull::FView> *this,int param_1,
          int param_2,ulong64 param_3)

{
  FView *_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 3) {
    if (_Src != (FView *)0x0) {
      memmove(this,_Src,(longlong)param_1 << 2);
      if (0x7ffffffe < param_3 - 1) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(0,param_3);
      }
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free((this->SecondaryData).Data);
      (this->SecondaryData).Data = (FView *)0x0;
    }
  }
  else if (_Src == (FView *)0x0) {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FVisibilityTaskConfig::FOcclusionCull::FView>::ResizeAllocation
              (&this->SecondaryData,0,param_2,param_3);
    memmove((this->SecondaryData).Data,this,(longlong)param_1 << 2);
  }
  else {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FVisibilityTaskConfig::FOcclusionCull::FView>::ResizeAllocation
              (&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 145550970

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<FDynamicMeshElementContext::FViewFamilyGroup>::ResizeAllocation
          (ForElementType<FDynamicMeshElementContext::FViewFamilyGroup> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<FDynamicMeshElementContext::FViewFamilyGroup> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<FDynamicMeshElementContext::FViewFamilyGroup>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FDynamicMeshElementContext::FViewFamilyGroup>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145550a00

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
ForElementType<FDynamicMeshElementContext::FViewMeshArrays>::ResizeAllocation
          (ForElementType<FDynamicMeshElementContext::FViewMeshArrays> *this,int param_1,int param_2
          ,ulong64 param_3)

{
  ForElementType<FDynamicMeshElementContext::FViewMeshArrays> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<FDynamicMeshElementContext::FViewMeshArrays>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x2c0);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FDynamicMeshElementContext::FViewMeshArrays>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x2c0);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145550be0

void __thiscall
TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::
ForElementType<`anonymous_namespace'::FSSDCommonParameters>::ResizeAllocation
          (ForElementType<_anonymous_namespace_::FSSDCommonParameters> *this,int param_1,int param_2
          ,ulong64 param_3)

{
  ForElementType<_anonymous_namespace_::FSSDCommonParameters> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 7) {
    if (_Src == (ForElementType<_anonymous_namespace_::FSSDCommonParameters>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x150);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<_anonymous_namespace_::FSSDCommonParameters>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x150);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145550c80

void __thiscall
TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::
ForElementType<`anonymous_namespace'::FSSDConvolutionMetaData>::ResizeAllocation
          (ForElementType<_anonymous_namespace_::FSSDConvolutionMetaData> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<_anonymous_namespace_::FSSDConvolutionMetaData> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 7) {
    if (_Src == (ForElementType<_anonymous_namespace_::FSSDConvolutionMetaData>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0xa0);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<_anonymous_namespace_::FSSDConvolutionMetaData>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0xa0);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145550d20

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FViewCommands>::
ResizeAllocation(ForElementType<FViewCommands> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FViewCommands> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<FViewCommands>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x7f0);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FViewCommands>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x7f0);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1456428f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
ForElementType<FProjectedShadowInfo_*>::ResizeAllocation
          (ForElementType<FProjectedShadowInfo_*> *this,int param_1,int param_2,ulong64 param_3)

{
  FProjectedShadowInfo **_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 3) {
    if (_Src != (FProjectedShadowInfo **)0x0) {
      memmove(this,_Src,(longlong)param_1 << 3);
      if (0x7ffffffe < param_3 - 1) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(0,param_3);
      }
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free((this->SecondaryData).Data);
      (this->SecondaryData).Data = (FProjectedShadowInfo **)0x0;
    }
  }
  else if (_Src == (FProjectedShadowInfo **)0x0) {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FProjectedShadowInfo_*>::ResizeAllocation(&this->SecondaryData,0,param_2,param_3)
    ;
    memmove((this->SecondaryData).Data,this,(longlong)param_1 << 3);
  }
  else {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FProjectedShadowInfo_*>::ResizeAllocation
              (&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 145642a40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
ForElementType<FShadowMeshCollector_*>::ResizeAllocation
          (ForElementType<FShadowMeshCollector_*> *this,int param_1,int param_2,ulong64 param_3)

{
  FShadowMeshCollector **_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 2) {
    if (_Src != (FShadowMeshCollector **)0x0) {
      memmove(this,_Src,(longlong)param_1 << 3);
      if (0x7ffffffe < param_3 - 1) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(0,param_3);
      }
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free((this->SecondaryData).Data);
      (this->SecondaryData).Data = (FShadowMeshCollector **)0x0;
    }
  }
  else if (_Src == (FShadowMeshCollector **)0x0) {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FShadowMeshCollector_*>::ResizeAllocation(&this->SecondaryData,0,param_2,param_3)
    ;
    memmove((this->SecondaryData).Data,this,(longlong)param_1 << 3);
  }
  else {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FShadowMeshCollector_*>::ResizeAllocation
              (&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 145642af0

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<FSimpleMeshDrawCommandPass_*>::ResizeAllocation
          (ForElementType<FSimpleMeshDrawCommandPass_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FSimpleMeshDrawCommandPass_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FSimpleMeshDrawCommandPass_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FSimpleMeshDrawCommandPass_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145642b80

void __thiscall
TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<FBoxEdge>::ResizeAllocation
          (ForElementType<FBoxEdge> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FBoxEdge> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0xd) {
    if (_Src == (ForElementType<FBoxEdge>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FBoxEdge>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145642c10

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FConvexVolume>::
ResizeAllocation(ForElementType<FConvexVolume> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FConvexVolume> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FConvexVolume>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 9);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FConvexVolume>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 9);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145642d50

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
ForElementType<FFirstPersonSelfShadowInputs::FDownsampledTextures>::ResizeAllocation
          (ForElementType<FFirstPersonSelfShadowInputs::FDownsampledTextures> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<FFirstPersonSelfShadowInputs::FDownsampledTextures> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<FFirstPersonSelfShadowInputs::FDownsampledTextures>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x18);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FFirstPersonSelfShadowInputs::FDownsampledTextures>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x18);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1456432e0

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
ForElementType<TRefCountPtr<IPooledRenderTarget>_>::ResizeAllocation
          (ForElementType<TRefCountPtr<IPooledRenderTarget>_> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<TRefCountPtr<IPooledRenderTarget>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<TRefCountPtr<IPooledRenderTarget>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TRefCountPtr<IPooledRenderTarget>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14569da10

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<FSkinningTransformProvider::FProviderRange>::ResizeAllocation
          (ForElementType<FSkinningTransformProvider::FProviderRange> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FSkinningTransformProvider::FProviderRange> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FSkinningTransformProvider::FProviderRange>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x18);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FSkinningTransformProvider::FProviderRange>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x18);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14569dab0

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
ForElementType<FSkyAtmospherePendingRDGResources::FViewRDGResources>::ResizeAllocation
          (ForElementType<FSkyAtmospherePendingRDGResources::FViewRDGResources> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<FSkyAtmospherePendingRDGResources::FViewRDGResources> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<FSkyAtmospherePendingRDGResources::FViewRDGResources>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FSkyAtmospherePendingRDGResources::FViewRDGResources>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1457200d0

void __thiscall
TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<FDynamicEmitterDataBase_*>
::ResizeAllocation(ForElementType<FDynamicEmitterDataBase_*> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  ForElementType<FDynamicEmitterDataBase_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0xd) {
    if (_Src == (ForElementType<FDynamicEmitterDataBase_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FDynamicEmitterDataBase_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14578b5f0

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
ForElementType<TStaticArray<FTranslucencyPassResources,7,4294967295>_>::ResizeAllocation
          (ForElementType<TStaticArray<FTranslucencyPassResources,7,4294967295>_> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<TStaticArray<FTranslucencyPassResources,7,4294967295>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<TStaticArray<FTranslucencyPassResources,7,4294967295>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x1f8);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TStaticArray<FTranslucencyPassResources,7,4294967295>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x1f8);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14580eda0

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<float>::ResizeAllocation
          (ForElementType<float> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<float> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<float>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<float>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14580eed0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TSizedInlineAllocator<16,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
ForElementType<FRDGBuffer_*>::ResizeAllocation
          (ForElementType<FRDGBuffer_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FRDGBuffer_*> *this_00;
  FRDGBuffer **_Src;
  
  this_00 = &this->SecondaryData;
  _Src = this_00->Data;
  if ((uint)param_2 < 0x11) {
    if (_Src != (FRDGBuffer **)0x0) {
      memmove(this,_Src,(longlong)param_1 << 3);
      if (0x7ffffffe < param_3 - 1) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(0,param_3);
      }
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(this_00->Data);
      this_00->Data = (FRDGBuffer **)0x0;
    }
  }
  else if (_Src == (FRDGBuffer **)0x0) {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRDGBuffer_*>::
    ResizeAllocation(this_00,0,param_2,param_3);
    memmove(this_00->Data,this,(longlong)param_1 << 3);
  }
  else {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRDGBuffer_*>::
    ResizeAllocation(this_00,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 14580f160

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
ForElementType<FVirtualShadowMapClipmap::FLevelData>::ResizeAllocation
          (ForElementType<FVirtualShadowMapClipmap::FLevelData> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FVirtualShadowMapClipmap::FLevelData> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<FVirtualShadowMapClipmap::FLevelData>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0xc0);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FVirtualShadowMapClipmap::FLevelData>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0xc0);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145887c70

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<float>_>
::ResizeAllocation(ForElementType<UE::Math::TVector4<float>_> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  ForElementType<UE::Math::TVector4<float>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<UE::Math::TVector4<float>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Math::TVector4<float>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145887d10

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
ForElementType<`FSceneRenderer::ComputeVolumetricFog'::__l2::FLightsToInject>::ResizeAllocation
          (void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)this + 0x60);
  if ((uint)param_2 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(this,_Src,(longlong)param_1 * 0x30);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (void *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0x60),0,param_2,param_3);
    memmove(*(void **)((longlong)this + 0x60),this,(longlong)param_1 * 0x30);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)((longlong)this + 0x60),param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145887da0

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
ForElementType<`FSceneRenderer::RenderVolumetricCloud'::__l15::FLocalCloudView>::ResizeAllocation
          (void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)this + 0x20);
  if ((uint)param_2 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(this,_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (void *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0x20),0,param_2,param_3);
    memmove(*(void **)((longlong)this + 0x20),this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)((longlong)this + 0x20),param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145942220

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGViewableResource_*>::
ResizeAllocation(ForElementType<FRDGViewableResource_*> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<FRDGViewableResource_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<FRDGViewableResource_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FRDGViewableResource_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1459422b0

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t_const_*>::
ResizeAllocation(ForElementType<wchar_t_const_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<wchar_t_const_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<wchar_t_const_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<wchar_t_const_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

