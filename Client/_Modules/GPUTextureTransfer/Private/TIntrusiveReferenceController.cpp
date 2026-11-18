// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GPUTextureTransfer
// Functions: 3

// DestroyObject @ 14d7591c0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::GPUTextureTransfer::Private::FD3D11TextureTransfer,1>::
DestroyObject(TIntrusiveReferenceController<UE::GPUTextureTransfer::Private::FD3D11TextureTransfer,1>
              *this)

{
  UE::GPUTextureTransfer::Private::FTextureTransferBase::~FTextureTransferBase
            ((FTextureTransferBase *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d7591d0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::GPUTextureTransfer::Private::FD3D12TextureTransfer,1>::
DestroyObject(TIntrusiveReferenceController<UE::GPUTextureTransfer::Private::FD3D12TextureTransfer,1>
              *this)

{
  UE::GPUTextureTransfer::Private::FTextureTransferBase::~FTextureTransferBase
            ((FTextureTransferBase *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d7591e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::GPUTextureTransfer::Private::FVulkanTextureTransfer,1>::
DestroyObject(TIntrusiveReferenceController<UE::GPUTextureTransfer::Private::FVulkanTextureTransfer,1>
              *this)

{
  UE::GPUTextureTransfer::Private::FTextureTransferBase::~FTextureTransferBase
            ((FTextureTransferBase *)&this->ObjectStorage);
  return;
}

