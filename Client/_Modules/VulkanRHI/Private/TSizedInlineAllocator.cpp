// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 31

// ResizeAllocation @ 145af3b30

void __thiscall
TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<TStatId>::ResizeAllocation
          (ForElementType<TStatId> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TStatId> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 4) {
    if (_Src == (ForElementType<TStatId>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TStatId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145af3bc0

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkImageMemoryBarrier2>::
ResizeAllocation(ForElementType<VkImageMemoryBarrier2> *this,int param_1,int param_2,ulong64 param_3
                )

{
  ForElementType<VkImageMemoryBarrier2> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<VkImageMemoryBarrier2>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x60);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<VkImageMemoryBarrier2>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x60);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145af3c60

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkImageMemoryBarrier>::
ResizeAllocation(ForElementType<VkImageMemoryBarrier> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<VkImageMemoryBarrier> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<VkImageMemoryBarrier>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x48);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<VkImageMemoryBarrier>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x48);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145af3d00

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<VkMemoryBarrier2>::
ResizeAllocation(ForElementType<VkMemoryBarrier2> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<VkMemoryBarrier2> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<VkMemoryBarrier2>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x30);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<VkMemoryBarrier2>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x30);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145af3d90

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<VkMemoryBarrier>::
ResizeAllocation(ForElementType<VkMemoryBarrier> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<VkMemoryBarrier> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<VkMemoryBarrier>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x18);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<VkMemoryBarrier>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x18);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145af3e20

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkRect2D>::ResizeAllocation
          (ForElementType<VkRect2D> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<VkRect2D> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<VkRect2D>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<VkRect2D>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145af3eb0

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkViewport>::
ResizeAllocation(ForElementType<VkViewport> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<VkViewport> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<VkViewport>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x18);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<VkViewport>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x18);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145af3f40

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_VkDescriptorType>::
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

// ResizeAllocation @ 145b31f90

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_VkTimeDomainKHR>::
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

// ResizeAllocation @ 145b7a230

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
ForElementType<VkAccelerationStructureBuildRangeInfoKHR_*>::ResizeAllocation
          (ForElementType<VkAccelerationStructureBuildRangeInfoKHR_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<VkAccelerationStructureBuildRangeInfoKHR_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<VkAccelerationStructureBuildRangeInfoKHR_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<VkAccelerationStructureBuildRangeInfoKHR_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145b7a2d0

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext>
::ResizeAllocation(void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)this + 8);
  if ((uint)param_2 < 2) {
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

// ResizeAllocation @ 145b7a360

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FVkRtBLASBuildData>::
ResizeAllocation(ForElementType<FVkRtBLASBuildData> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FVkRtBLASBuildData> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<FVkRtBLASBuildData>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x108);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FVkRtBLASBuildData>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x108);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145b7a400

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
ForElementType<VkAccelerationStructureBuildGeometryInfoKHR>::ResizeAllocation
          (ForElementType<VkAccelerationStructureBuildGeometryInfoKHR> *this,int param_1,int param_2
          ,ulong64 param_3)

{
  ForElementType<VkAccelerationStructureBuildGeometryInfoKHR> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<VkAccelerationStructureBuildGeometryInfoKHR>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x50);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<VkAccelerationStructureBuildGeometryInfoKHR>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x50);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145b7a4a0

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<VkAccelerationStructureBuildRangeInfoKHR>::ResizeAllocation
          (ForElementType<VkAccelerationStructureBuildRangeInfoKHR> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<VkAccelerationStructureBuildRangeInfoKHR> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<VkAccelerationStructureBuildRangeInfoKHR>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<VkAccelerationStructureBuildRangeInfoKHR>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145b7a530

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<VkAccelerationStructureGeometryKHR>::ResizeAllocation
          (ForElementType<VkAccelerationStructureGeometryKHR> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<VkAccelerationStructureGeometryKHR> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<VkAccelerationStructureGeometryKHR>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x60);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<VkAccelerationStructureGeometryKHR>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x60);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145b7a5c0

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<VkSparseBufferMemoryBindInfo>::ResizeAllocation
          (ForElementType<VkSparseBufferMemoryBindInfo> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<VkSparseBufferMemoryBindInfo> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<VkSparseBufferMemoryBindInfo>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x18);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<VkSparseBufferMemoryBindInfo>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x18);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145b7a650

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<VkSparseImageOpaqueMemoryBindInfo>::ResizeAllocation
          (ForElementType<VkSparseImageOpaqueMemoryBindInfo> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<VkSparseImageOpaqueMemoryBindInfo> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<VkSparseImageOpaqueMemoryBindInfo>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x18);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<VkSparseImageOpaqueMemoryBindInfo>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x18);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145b7a6e0

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
ForElementType<VkVertexInputAttributeDescription2EXT>::ResizeAllocation
          (ForElementType<VkVertexInputAttributeDescription2EXT> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<VkVertexInputAttributeDescription2EXT> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<VkVertexInputAttributeDescription2EXT>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 5);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<VkVertexInputAttributeDescription2EXT>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 5);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145b7a780

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
ForElementType<VkVertexInputAttributeDescription>::ResizeAllocation
          (ForElementType<VkVertexInputAttributeDescription> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<VkVertexInputAttributeDescription> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<VkVertexInputAttributeDescription>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<VkVertexInputAttributeDescription>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145b7a820

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
ForElementType<VkVertexInputBindingDescription2EXT>::ResizeAllocation
          (ForElementType<VkVertexInputBindingDescription2EXT> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<VkVertexInputBindingDescription2EXT> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<VkVertexInputBindingDescription2EXT>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 5);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<VkVertexInputBindingDescription2EXT>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 5);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145b7a8c0

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
ForElementType<VkVertexInputBindingDescription>::ResizeAllocation
          (ForElementType<VkVertexInputBindingDescription> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<VkVertexInputBindingDescription> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<VkVertexInputBindingDescription>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0xc);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<VkVertexInputBindingDescription>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0xc);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145b7a960

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<TArray<VkSparseMemoryBind,TSizedDefaultAllocator<32>_>_>::ResizeAllocation
          (ForElementType<TArray<VkSparseMemoryBind,TSizedDefaultAllocator<32>_>_> *this,int param_1
          ,int param_2,ulong64 param_3)

{
  ForElementType<TArray<VkSparseMemoryBind,TSizedDefaultAllocator<32>_>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<TArray<VkSparseMemoryBind,TSizedDefaultAllocator<32>_>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TArray<VkSparseMemoryBind,TSizedDefaultAllocator<32>_>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145bbc0f0

void __thiscall
TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<VkFence_T_*>::
ResizeAllocation(ForElementType<VkFence_T_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<VkFence_T_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 4) {
    if (_Src == (ForElementType<VkFence_T_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<VkFence_T_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145bbc180

void __thiscall
TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FVulkanSyncPoint_*>::
ResizeAllocation(ForElementType<FVulkanSyncPoint_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FVulkanSyncPoint_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 4) {
    if (_Src == (ForElementType<FVulkanSyncPoint_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FVulkanSyncPoint_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145bbc210

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
ForElementType<FRHILockTracker::FTextureLockParams>::ResizeAllocation
          (ForElementType<FRHILockTracker::FTextureLockParams> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FRHILockTracker::FTextureLockParams> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<FRHILockTracker::FTextureLockParams>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x30);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FRHILockTracker::FTextureLockParams>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x30);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145bbc2b0

void __thiscall
TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::
ForElementType<TUniquePtr<FVulkanTiming,TDefaultDelete<FVulkanTiming>_>_>::ResizeAllocation
          (ForElementType<TUniquePtr<FVulkanTiming,TDefaultDelete<FVulkanTiming>_>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TUniquePtr<FVulkanTiming,TDefaultDelete<FVulkanTiming>_>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 4) {
    if (_Src == (ForElementType<TUniquePtr<FVulkanTiming,TDefaultDelete<FVulkanTiming>_>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TUniquePtr<FVulkanTiming,TDefaultDelete<FVulkanTiming>_>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145bbc340

void __thiscall
TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::RHI::GPUProfiler::FEventStream>::ResizeAllocation
          (ForElementType<UE::RHI::GPUProfiler::FEventStream> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<UE::RHI::GPUProfiler::FEventStream> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 4) {
    if (_Src == (ForElementType<UE::RHI::GPUProfiler::FEventStream>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x18);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::RHI::GPUProfiler::FEventStream>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x18);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145bbc3d0

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_VkFormat>::
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

// ResizeAllocation @ 145bd53f0

void __thiscall
TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<FVulkanSemaphore_*>::
ResizeAllocation(ForElementType<FVulkanSemaphore_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FVulkanSemaphore_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 7) {
    if (_Src == (ForElementType<FVulkanSemaphore_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FVulkanSemaphore_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145bd5480

void __thiscall
TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<void_*>::ResizeAllocation
          (ForElementType<void_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<void_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 7) {
    if (_Src == (ForElementType<void_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<void_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145bd5510

void __thiscall
TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::
ForElementType<TRefCountPtr<FVulkanTexture>_>::ResizeAllocation
          (ForElementType<TRefCountPtr<FVulkanTexture>_> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<TRefCountPtr<FVulkanTexture>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 7) {
    if (_Src == (ForElementType<TRefCountPtr<FVulkanTexture>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TRefCountPtr<FVulkanTexture>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

