// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 4

// ~FD3D12StagingBuffer @ 1459f9920

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall FD3D12StagingBuffer::~FD3D12StagingBuffer(FD3D12StagingBuffer *this)

{
  this->_padding_ = (longlong)&___7FD3D12StagingBuffer__6B_;
  FD3D12ResourceLocation::Clear(&this->ResourceLocation);
  FD3D12ResourceLocation::~FD3D12ResourceLocation(&this->ResourceLocation);
  this->_padding_ = (longlong)&___7FRHIStagingBuffer__6B_;
  FRHIResource::~FRHIResource((FRHIResource *)this);
  return;
}

// GetGPUSizeBytes @ 145a19100

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

ulong64 __thiscall FD3D12StagingBuffer::GetGPUSizeBytes(FD3D12StagingBuffer *this)

{
  return (ulonglong)this->ShadowBufferSize;
}

// Lock @ 145a1fdb0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void * __thiscall FD3D12StagingBuffer::Lock(FD3D12StagingBuffer *this,uint param_1,uint param_2)

{
  ResourceLocationType RVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  if ((char)this->_padding_ != '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bIsLocked",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DirectCommandListManager.cpp"
                       ,0x7a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  RVar1 = (this->ResourceLocation).Type;
  *(undefined1 *)&this->_padding_ = 1;
  if (RVar1 != eUndefined) {
    return (void *)((ulonglong)param_1 + (longlong)(this->ResourceLocation).MappedBaseAddress);
  }
  return (void *)0x0;
}

// Unlock @ 145a36090

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall FD3D12StagingBuffer::Unlock(FD3D12StagingBuffer *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((char)this->_padding_ != '\0') {
    *(undefined1 *)&this->_padding_ = 0;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("bIsLocked",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DirectCommandListManager.cpp"
                     ,0x89,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined1 *)&this->_padding_ = 0;
  return;
}

