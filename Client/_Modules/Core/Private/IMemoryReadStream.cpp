// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// ~IMemoryReadStream @ 14158a470

void __thiscall IMemoryReadStream::~IMemoryReadStream(IMemoryReadStream *this)

{
  this->_padding_ = (longlong)&___7IMemoryReadStream__6B_;
  return;
}

// EnsureReadNonBlocking @ 1415c0aa0

void __thiscall IMemoryReadStream::EnsureReadNonBlocking(IMemoryReadStream *this)

{
  return;
}

// CopyTo @ 1418d2c60

void __thiscall
IMemoryReadStream::CopyTo(IMemoryReadStream *this,void *param_1,long64 param_2,long64 param_3)

{
  void *_Src;
  longlong lVar1;
  size_t local_res20;
  
  if (0 < param_3) {
    lVar1 = 0;
    local_res20 = 0;
    do {
      _Src = (void *)(**(code **)this->_padding_)(this,&local_res20,lVar1 + param_2,param_3 - lVar1)
      ;
      memcpy((void *)(lVar1 + (longlong)param_1),_Src,local_res20);
      lVar1 = lVar1 + local_res20;
    } while (lVar1 < param_3);
  }
  return;
}

// CreateFromBuffer @ 1418d43d0

TRefCountPtr<IMemoryReadStream> __cdecl
IMemoryReadStream::CreateFromBuffer(void *param_1,long64 param_2,bool param_3)

{
  undefined8 *puVar1;
  undefined7 in_register_00000081;
  undefined1 in_R9B;
  
  puVar1 = ::operator_new(0x28);
  if (puVar1 == (undefined8 *)0x0) {
    *(undefined8 *)param_1 = 0;
  }
  else {
    puVar1[2] = param_2;
    *puVar1 = &___7IMemoryReadStream__6B_;
    *puVar1 = &___7FMemoryReadStreamBuffer__6B_;
    *(undefined4 *)(puVar1 + 1) = 0;
    puVar1[3] = CONCAT71(in_register_00000081,param_3);
    *(undefined1 *)(puVar1 + 4) = in_R9B;
    *(undefined8 **)param_1 = puVar1;
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  return (TRefCountPtr<IMemoryReadStream>)param_1;
}

// CreateFromCopy @ 1418d4460

TRefCountPtr<IMemoryReadStream> __cdecl
IMemoryReadStream::CreateFromCopy(IMemoryReadStream *param_1)

{
  ulong64 uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  longlong *in_RDX;
  
  if (in_RDX != (longlong *)0x0) {
    uVar1 = (**(code **)(*in_RDX + 8))();
    pvVar2 = FMemory::Malloc(uVar1,0);
    (**(code **)(*in_RDX + 0x10))();
    puVar3 = ::operator_new(0x28);
    if (puVar3 == (undefined8 *)0x0) {
      param_1->_padding_ = 0;
    }
    else {
      puVar3[2] = pvVar2;
      *puVar3 = &___7IMemoryReadStream__6B_;
      *puVar3 = &___7FMemoryReadStreamBuffer__6B_;
      *(undefined4 *)(puVar3 + 1) = 0;
      puVar3[3] = uVar1;
      *(undefined1 *)(puVar3 + 4) = 1;
      param_1->_padding_ = (longlong)puVar3;
      LOCK();
      *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
      UNLOCK();
    }
    return (TRefCountPtr<IMemoryReadStream>)param_1;
  }
  param_1->_padding_ = 0;
  return (TRefCountPtr<IMemoryReadStream>)param_1;
}

// CreateFromCopy @ 1418d4530

TRefCountPtr<IMemoryReadStream> __cdecl
IMemoryReadStream::CreateFromCopy(void *param_1,long64 param_2)

{
  void *_Dst;
  undefined8 *puVar1;
  ulong64 in_R8;
  
  _Dst = FMemory::Malloc(in_R8,0);
  memcpy(_Dst,(void *)param_2,in_R8);
  puVar1 = ::operator_new(0x28);
  if (puVar1 == (undefined8 *)0x0) {
    *(undefined8 *)param_1 = 0;
  }
  else {
    puVar1[2] = _Dst;
    *puVar1 = &___7IMemoryReadStream__6B_;
    *puVar1 = &___7FMemoryReadStreamBuffer__6B_;
    *(undefined4 *)(puVar1 + 1) = 0;
    puVar1[3] = in_R8;
    *(undefined1 *)(puVar1 + 4) = 1;
    *(undefined8 **)param_1 = puVar1;
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  return (TRefCountPtr<IMemoryReadStream>)param_1;
}

