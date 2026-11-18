// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 4

// InitRHI @ 145d41730

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TDynamicBuffer<FIndexBuffer>::InitRHI
          (TDynamicBuffer<FIndexBuffer> *this,FRHICommandListBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<FRHIBuffer> TVar3;
  FRHIResource *local_res8;
  
  if ((this->_padding_ != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsValidRef(BufferType::GetRHI())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\GlobalRenderResources.cpp"
                         ,0x349,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  TVar3 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&local_res8);
  FIndexBuffer::SetRHI((FIndexBuffer *)this,(TRefCountPtr<FRHIBuffer> *)TVar3.Reference);
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  this->AllocatedByteCount = 0;
  this->MappedBuffer = (uchar *)0x0;
  return;
}

// InitRHI @ 145d41860

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TDynamicBuffer<FVertexBuffer>::InitRHI
          (TDynamicBuffer<FVertexBuffer> *this,FRHICommandListBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<FRHIBuffer> TVar3;
  FRHIResource *local_res8;
  
  if ((this->_padding_ != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsValidRef(BufferType::GetRHI())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\GlobalRenderResources.cpp"
                         ,0x349,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  TVar3 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&local_res8);
  FVertexBuffer::SetRHI((FVertexBuffer *)this,(TRefCountPtr<FRHIBuffer> *)TVar3.Reference);
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  this->AllocatedByteCount = 0;
  this->MappedBuffer = (uchar *)0x0;
  return;
}

// ReleaseRHI @ 145d482e0

void __thiscall TDynamicBuffer<FIndexBuffer>::ReleaseRHI(TDynamicBuffer<FIndexBuffer> *this)

{
  FIndexBuffer::ReleaseRHI((FIndexBuffer *)this);
  this->MappedBuffer = (uchar *)0x0;
  this->AllocatedByteCount = 0;
  return;
}

// ReleaseRHI @ 145d48310

void __thiscall TDynamicBuffer<FVertexBuffer>::ReleaseRHI(TDynamicBuffer<FVertexBuffer> *this)

{
  FVertexBuffer::ReleaseRHI((FVertexBuffer *)this);
  this->MappedBuffer = (uchar *)0x0;
  this->AllocatedByteCount = 0;
  return;
}

