// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 18

// AddRef @ 145b9ddb0

FReturnedRefCountValue __thiscall
TVulkanBaseShader<FRHIAmplificationShader,2>::AddRef
          (TVulkanBaseShader<FRHIAmplificationShader,2> *this)

{
  uint uVar1;
  uint *in_RDX;
  
  uVar1 = FRHIResource::AddRef((FRHIResource *)&this[-1].field_0x130);
  *in_RDX = uVar1;
  return (FReturnedRefCountValue)(uint)in_RDX;
}

// AddRef @ 145b9dde0

FReturnedRefCountValue __thiscall
TVulkanBaseShader<FRHIComputeShader,5>::AddRef(TVulkanBaseShader<FRHIComputeShader,5> *this)

{
  uint uVar1;
  uint *in_RDX;
  
  uVar1 = FRHIResource::AddRef((FRHIResource *)&this[-1].field_0x130);
  *in_RDX = uVar1;
  return (FReturnedRefCountValue)(uint)in_RDX;
}

// AddRef @ 145b9de10

FReturnedRefCountValue __thiscall
TVulkanBaseShader<FRHIGeometryShader,4>::AddRef(TVulkanBaseShader<FRHIGeometryShader,4> *this)

{
  uint uVar1;
  uint *in_RDX;
  
  uVar1 = FRHIResource::AddRef((FRHIResource *)&this[-1].field_0x130);
  *in_RDX = uVar1;
  return (FReturnedRefCountValue)(uint)in_RDX;
}

// AddRef @ 145b9de40

FReturnedRefCountValue __thiscall
TVulkanBaseShader<FRHIMeshShader,1>::AddRef(TVulkanBaseShader<FRHIMeshShader,1> *this)

{
  uint uVar1;
  uint *in_RDX;
  
  uVar1 = FRHIResource::AddRef((FRHIResource *)&this[-1].field_0x130);
  *in_RDX = uVar1;
  return (FReturnedRefCountValue)(uint)in_RDX;
}

// AddRef @ 145b9de70

FReturnedRefCountValue __thiscall
TVulkanBaseShader<FRHIPixelShader,3>::AddRef(TVulkanBaseShader<FRHIPixelShader,3> *this)

{
  uint uVar1;
  uint *in_RDX;
  
  uVar1 = FRHIResource::AddRef((FRHIResource *)&this[-1].field_0x130);
  *in_RDX = uVar1;
  return (FReturnedRefCountValue)(uint)in_RDX;
}

// AddRef @ 145b9dea0

FReturnedRefCountValue __thiscall
TVulkanBaseShader<FRHIVertexShader,0>::AddRef(TVulkanBaseShader<FRHIVertexShader,0> *this)

{
  uint uVar1;
  uint *in_RDX;
  
  uVar1 = FRHIResource::AddRef((FRHIResource *)&this[-1].field_0x130);
  *in_RDX = uVar1;
  return (FReturnedRefCountValue)(uint)in_RDX;
}

// GetRefCount @ 145bac750

uint __thiscall
TVulkanBaseShader<FRHIAmplificationShader,2>::GetRefCount
          (TVulkanBaseShader<FRHIAmplificationShader,2> *this)

{
  return *(uint *)&this[-1].field_0x138 & 0x3fffffff;
}

// GetRefCount @ 145bac770

uint __thiscall
TVulkanBaseShader<FRHIComputeShader,5>::GetRefCount(TVulkanBaseShader<FRHIComputeShader,5> *this)

{
  return *(uint *)&this[-1].field_0x138 & 0x3fffffff;
}

// GetRefCount @ 145bac790

uint __thiscall
TVulkanBaseShader<FRHIGeometryShader,4>::GetRefCount(TVulkanBaseShader<FRHIGeometryShader,4> *this)

{
  return *(uint *)&this[-1].field_0x138 & 0x3fffffff;
}

// GetRefCount @ 145bac7b0

uint __thiscall
TVulkanBaseShader<FRHIMeshShader,1>::GetRefCount(TVulkanBaseShader<FRHIMeshShader,1> *this)

{
  return *(uint *)&this[-1].field_0x138 & 0x3fffffff;
}

// GetRefCount @ 145bac7d0

uint __thiscall
TVulkanBaseShader<FRHIPixelShader,3>::GetRefCount(TVulkanBaseShader<FRHIPixelShader,3> *this)

{
  return *(uint *)&this[-1].field_0x138 & 0x3fffffff;
}

// GetRefCount @ 145bac7f0

uint __thiscall
TVulkanBaseShader<FRHIVertexShader,0>::GetRefCount(TVulkanBaseShader<FRHIVertexShader,0> *this)

{
  return *(uint *)&this[-1].field_0x138 & 0x3fffffff;
}

// Release @ 145bbb6a0

uint __thiscall
TVulkanBaseShader<FRHIAmplificationShader,2>::Release
          (TVulkanBaseShader<FRHIAmplificationShader,2> *this)

{
  uint uVar1;
  
  uVar1 = FRHIResource::Release((FRHIResource *)&this[-1].field_0x130);
  return uVar1;
}

// Release @ 145bbb6c0

uint __thiscall
TVulkanBaseShader<FRHIComputeShader,5>::Release(TVulkanBaseShader<FRHIComputeShader,5> *this)

{
  uint uVar1;
  
  uVar1 = FRHIResource::Release((FRHIResource *)&this[-1].field_0x130);
  return uVar1;
}

// Release @ 145bbb6e0

uint __thiscall
TVulkanBaseShader<FRHIGeometryShader,4>::Release(TVulkanBaseShader<FRHIGeometryShader,4> *this)

{
  uint uVar1;
  
  uVar1 = FRHIResource::Release((FRHIResource *)&this[-1].field_0x130);
  return uVar1;
}

// Release @ 145bbb700

uint __thiscall
TVulkanBaseShader<FRHIMeshShader,1>::Release(TVulkanBaseShader<FRHIMeshShader,1> *this)

{
  uint uVar1;
  
  uVar1 = FRHIResource::Release((FRHIResource *)&this[-1].field_0x130);
  return uVar1;
}

// Release @ 145bbb720

uint __thiscall
TVulkanBaseShader<FRHIPixelShader,3>::Release(TVulkanBaseShader<FRHIPixelShader,3> *this)

{
  uint uVar1;
  
  uVar1 = FRHIResource::Release((FRHIResource *)&this[-1].field_0x130);
  return uVar1;
}

// Release @ 145bbb740

uint __thiscall
TVulkanBaseShader<FRHIVertexShader,0>::Release(TVulkanBaseShader<FRHIVertexShader,0> *this)

{
  uint uVar1;
  
  uVar1 = FRHIResource::Release((FRHIResource *)&this[-1].field_0x130);
  return uVar1;
}

