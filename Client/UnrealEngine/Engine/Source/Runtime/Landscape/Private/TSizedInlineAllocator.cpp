// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 18

// ResizeAllocation @ 145f1d230

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGTexture_*>::
ResizeAllocation(ForElementType<FRDGTexture_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FRDGTexture_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
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

// ResizeAllocation @ 145f1d2c0

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
ForElementType<FPSOPrecacheVertexFactoryData>::ResizeAllocation
          (ForElementType<FPSOPrecacheVertexFactoryData> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FPSOPrecacheVertexFactoryData> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145f1d350

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>::
ResizeAllocation(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                 *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                 )0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                    )0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145f32bf0

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FSceneView_const_*>::
ResizeAllocation(ForElementType<FSceneView_const_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FSceneView_const_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<FSceneView_const_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FSceneView_const_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145f32c80

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FSceneView_const_*>::
ResizeAllocation(ForElementType<FSceneView_const_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FSceneView_const_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FSceneView_const_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FSceneView_const_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145f32d10

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TIntPoint<int>_>::
ResizeAllocation(ForElementType<UE::Math::TIntPoint<int>_> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<UE::Math::TIntPoint<int>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<UE::Math::TIntPoint<int>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Math::TIntPoint<int>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145f32da0

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::Landscape::Culling::FDispatchIntermediates>::ResizeAllocation
          (ForElementType<UE::Landscape::Culling::FDispatchIntermediates> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<UE::Landscape::Culling::FDispatchIntermediates> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<UE::Landscape::Culling::FDispatchIntermediates>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Landscape::Culling::FDispatchIntermediates>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145f32e30

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeSection>::
ResizeAllocation(ForElementType<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeSection>
                 *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeSection> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeSection>
                 )0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x60);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeSection>
                    )0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x60);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145f32ed0

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeView>::ResizeAllocation
          (ForElementType<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeView> *this,
          int param_1,int param_2,ulong64 param_3)

{
  ForElementType<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeView> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeView>)
                0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0xa0);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeView>
                    )0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0xa0);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145f32f70

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FViewMatrices>::
ResizeAllocation(ForElementType<FViewMatrices> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FViewMatrices> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<FViewMatrices>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x880);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FViewMatrices>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x880);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145f33010

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::Landscape::Culling::FViewStateIntermediateData>::ResizeAllocation
          (ForElementType<UE::Landscape::Culling::FViewStateIntermediateData> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<UE::Landscape::Culling::FViewStateIntermediateData> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<UE::Landscape::Culling::FViewStateIntermediateData>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x58);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Landscape::Culling::FViewStateIntermediateData>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x58);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145f5d380

void __thiscall
TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::
ForElementType<UHierarchicalInstancedStaticMeshComponent_*>::ResizeAllocation
          (ForElementType<UHierarchicalInstancedStaticMeshComponent_*> *this,int param_1,int param_2
          ,ulong64 param_3)

{
  ForElementType<UHierarchicalInstancedStaticMeshComponent_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x19) {
    if (_Src == (ForElementType<UHierarchicalInstancedStaticMeshComponent_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UHierarchicalInstancedStaticMeshComponent_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145f5d420

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransitionInfo>::
ResizeAllocation(ForElementType<FRHITransitionInfo> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FRHITransitionInfo> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FRHITransitionInfo>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x30);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FRHITransitionInfo>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x30);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145fa1080

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FLightCacheInterface_*>::
ResizeAllocation(ForElementType<FLightCacheInterface_*> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<FLightCacheInterface_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FLightCacheInterface_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FLightCacheInterface_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145fa1260

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>::ResizeAllocation
          (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x18);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x18);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145fa12f0

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<FLandscapeGrassWeightExporter_RenderThread::FComponentInfo>::ResizeAllocation
          (ForElementType<FLandscapeGrassWeightExporter_RenderThread::FComponentInfo> *this,
          int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FLandscapeGrassWeightExporter_RenderThread::FComponentInfo> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<FLandscapeGrassWeightExporter_RenderThread::FComponentInfo>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 6);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FLandscapeGrassWeightExporter_RenderThread::FComponentInfo>)0x0)
  {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 6);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145fc7b80

void __thiscall
TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<float>_>
::ResizeAllocation(ForElementType<UE::Math::TVector<float>_> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  ForElementType<UE::Math::TVector<float>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x201) {
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

// ResizeAllocation @ 145fc7c20

void __thiscall
TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>::
ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>::ResizeAllocation
          (ForElementType<FLandscapeTextureStorageMipProvider::FIORequest> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<FLandscapeTextureStorageMipProvider::FIORequest> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x10) {
    if (_Src == (ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x18);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x18);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

