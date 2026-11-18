// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 7

// ReleaseRHI @ 145ddaf30

void __thiscall FIndexBuffer::ReleaseRHI(FIndexBuffer *this)

{
  FRHIBuffer *this_00;
  
  this_00 = (this->IndexBufferRHI).Reference;
  if (this_00 != (FRHIBuffer *)0x0) {
    (this->IndexBufferRHI).Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
    return;
  }
  return;
}

// GetFriendlyName @ 145ddaf50

FString * __thiscall
FIndexBuffer::GetFriendlyName(FIndexBuffer *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FIndexBuffer");
  return __return_storage_ptr__;
}

// FIndexBuffer @ 145ded390

FIndexBuffer * __thiscall FIndexBuffer::FIndexBuffer(FIndexBuffer *this,FIndexBuffer *param_1)

{
  FRHIBuffer *this_00;
  
  this->_padding_ = (longlong)&___7FRenderResource__6B_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 4);
  *(undefined1 *)((longlong)&this->_padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 5);
  *(undefined1 *)((longlong)&this->_padding_ + 6) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 6);
  this->_padding_ = (longlong)&___7FIndexBuffer__6B_;
  (this->IndexBufferRHI).Reference = (FRHIBuffer *)0x0;
  this_00 = (param_1->IndexBufferRHI).Reference;
  (this->IndexBufferRHI).Reference = this_00;
  if (this_00 != (FRHIBuffer *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  return this;
}

// FIndexBuffer @ 145ded410

FIndexBuffer * __thiscall FIndexBuffer::FIndexBuffer(FIndexBuffer *this)

{
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FIndexBuffer__6B_;
  this->_padding_ = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0x105;
  *(undefined1 *)((longlong)&this->_padding_ + 6) = 0;
  (this->IndexBufferRHI).Reference = (FRHIBuffer *)0x0;
  return this;
}

// ~FIndexBuffer @ 145df0a80

void __thiscall FIndexBuffer::~FIndexBuffer(FIndexBuffer *this)

{
  FRHIBuffer *this_00;
  
  this->_padding_ = (longlong)&___7FIndexBuffer__6B_;
  this_00 = (this->IndexBufferRHI).Reference;
  if (this_00 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// operator= @ 145df22c0

FIndexBuffer * __thiscall FIndexBuffer::operator=(FIndexBuffer *this,FIndexBuffer *param_1)

{
  FRHIBuffer *this_00;
  FRHIBuffer *this_01;
  
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 4);
  *(undefined1 *)((longlong)&this->_padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 5);
  *(undefined1 *)((longlong)&this->_padding_ + 6) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 6);
  this_00 = (param_1->IndexBufferRHI).Reference;
  this_01 = (this->IndexBufferRHI).Reference;
  if (this_01 != this_00) {
    (this->IndexBufferRHI).Reference = this_00;
    if (this_00 != (FRHIBuffer *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    if (this_01 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
  }
  return this;
}

// SetRHI @ 145e26350

void __thiscall FIndexBuffer::SetRHI(FIndexBuffer *this,TRefCountPtr<FRHIBuffer> *param_1)

{
  FRHIBuffer *this_00;
  FRHIBuffer *this_01;
  
  this_00 = param_1->Reference;
  this_01 = (this->IndexBufferRHI).Reference;
  if (this_01 != this_00) {
    (this->IndexBufferRHI).Reference = this_00;
    if (this_00 != (FRHIBuffer *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    if (this_01 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
      return;
    }
  }
  return;
}

