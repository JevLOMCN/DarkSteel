// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 2

// ~FTransientUniformBufferAllocator @ 1459ad010

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FTransientUniformBufferAllocator::~FTransientUniformBufferAllocator
          (FTransientUniformBufferAllocator *this)

{
  this->_padding_ = (longlong)&_vftable_;
  if (this->Adapter != (FD3D12Adapter *)0x0) {
    FD3D12Adapter::ReleaseTransientUniformBufferAllocator(this->Adapter,this);
  }
  TThreadSingleton<FTransientUniformBufferAllocator>::
  ~TThreadSingleton<FTransientUniformBufferAllocator>
            ((TThreadSingleton<FTransientUniformBufferAllocator> *)this);
  FD3D12ResourceLocation::~FD3D12ResourceLocation((FD3D12ResourceLocation *)&this->_padding_);
  return;
}

// Cleanup @ 1459b5eb0

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FTransientUniformBufferAllocator::Cleanup(FTransientUniformBufferAllocator *this)

{
  FD3D12ResourceLocation::Clear((FD3D12ResourceLocation *)&this->_padding_);
  this->Adapter = (FD3D12Adapter *)0x0;
  return;
}

