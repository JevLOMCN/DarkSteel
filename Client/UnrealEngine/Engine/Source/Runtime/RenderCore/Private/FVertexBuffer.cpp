// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 7

// ReleaseRHI @ 145ddaee0

void __thiscall FVertexBuffer::ReleaseRHI(FVertexBuffer *this)

{
  FRHIBuffer *this_00;
  
  this_00 = (this->VertexBufferRHI).Reference;
  if (this_00 != (FRHIBuffer *)0x0) {
    (this->VertexBufferRHI).Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
    return;
  }
  return;
}

// GetFriendlyName @ 145ddaf00

FString * __thiscall
FVertexBuffer::GetFriendlyName(FVertexBuffer *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FVertexBuffer");
  return __return_storage_ptr__;
}

// FVertexBuffer @ 145defd20

FVertexBuffer * __thiscall FVertexBuffer::FVertexBuffer(FVertexBuffer *this,FVertexBuffer *param_1)

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
  this->_padding_ = (longlong)&___7FVertexBuffer__6B_;
  (this->VertexBufferRHI).Reference = (FRHIBuffer *)0x0;
  this_00 = (param_1->VertexBufferRHI).Reference;
  (this->VertexBufferRHI).Reference = this_00;
  if (this_00 != (FRHIBuffer *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  return this;
}

// FVertexBuffer @ 145defda0

FVertexBuffer * __thiscall FVertexBuffer::FVertexBuffer(FVertexBuffer *this)

{
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FVertexBuffer__6B_;
  this->_padding_ = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0x105;
  *(undefined1 *)((longlong)&this->_padding_ + 6) = 0;
  (this->VertexBufferRHI).Reference = (FRHIBuffer *)0x0;
  return this;
}

// ~FVertexBuffer @ 145df2190

void __thiscall FVertexBuffer::~FVertexBuffer(FVertexBuffer *this)

{
  FRHIBuffer *this_00;
  
  this->_padding_ = (longlong)&___7FVertexBuffer__6B_;
  this_00 = (this->VertexBufferRHI).Reference;
  if (this_00 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// operator= @ 145df26d0

FVertexBuffer * __thiscall FVertexBuffer::operator=(FVertexBuffer *this,FVertexBuffer *param_1)

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
  this_00 = (param_1->VertexBufferRHI).Reference;
  this_01 = (this->VertexBufferRHI).Reference;
  if (this_01 != this_00) {
    (this->VertexBufferRHI).Reference = this_00;
    if (this_00 != (FRHIBuffer *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    if (this_01 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
  }
  return this;
}

// SetRHI @ 145e263a0

void __thiscall FVertexBuffer::SetRHI(FVertexBuffer *this,TRefCountPtr<FRHIBuffer> *param_1)

{
  FRHIBuffer *this_00;
  FRHIBuffer *this_01;
  
  this_00 = param_1->Reference;
  this_01 = (this->VertexBufferRHI).Reference;
  if (this_01 != this_00) {
    (this->VertexBufferRHI).Reference = this_00;
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

