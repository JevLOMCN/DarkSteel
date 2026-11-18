// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreHttpClient
// Functions: 12

// Alloc<char> @ 1445697e0

char * __thiscall UE::IoStore::HTTP::FBuffer::Alloc<char>(FBuffer *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = ((this->field2_0xc).UsedInline & 0x7fffffff) + param_1;
  if (this->Max < uVar2) {
    Extend(this,uVar2,0x100);
  }
  uVar1 = (this->field2_0xc).UsedInline;
  (this->field2_0xc).UsedInline = (uVar1 ^ uVar2) & 0x7fffffff ^ uVar1;
  return (char *)((ulonglong)(uVar1 & 0x7fffffff) + this->Data);
}

// Alloc<unsigned_short> @ 144569830

ushort * __thiscall UE::IoStore::HTTP::FBuffer::Alloc<unsigned_short>(FBuffer *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (int)this->Data + (this->field2_0xc).UsedInline & 1;
  uVar2 = 2 - uVar3;
  if (uVar3 == 0) {
    uVar2 = 0;
  }
  uVar3 = uVar2 + ((this->field2_0xc).UsedInline & 0x7fffffff) + param_1 * 2;
  if (this->Max < uVar3) {
    Extend(this,uVar3,0x100);
  }
  uVar1 = (this->field2_0xc).UsedInline;
  (this->field2_0xc).UsedInline = (uVar1 ^ uVar3) & 0x7fffffff ^ uVar1;
  return (ushort *)((ulonglong)(uVar1 & 0x7fffffff) + (ulonglong)uVar2 + this->Data);
}

// FBuffer @ 14456ab90

FBuffer * __thiscall UE::IoStore::HTTP::FBuffer::FBuffer(FBuffer *this,char *param_1,uint param_2)

{
  this->Data = (ulong64)param_1;
  this->Max = param_2;
  (this->field2_0xc).UsedInline = 0x80000000;
  return this;
}

// ~FBuffer @ 14456bd50

void __thiscall UE::IoStore::HTTP::FBuffer::~FBuffer(FBuffer *this)

{
  if (((void *)this->Data != (void *)0x0) && (-1 < (int)(this->field2_0xc).UsedInline)) {
    FMemory::Free((void *)this->Data);
    return;
  }
  return;
}

// AdvanceUsed @ 14456f540

void __thiscall UE::IoStore::HTTP::FBuffer::AdvanceUsed(FBuffer *this,uint param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  
  uVar1 = (this->field2_0xc).UsedInline;
  (this->field2_0xc).UsedInline = (uVar1 + param_1 ^ uVar1) & 0x7fffffff ^ uVar1;
  if (this->Max < (uVar1 + param_1 & 0x7fffffff)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Used <= Max",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                       ,0x1d6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// Extend @ 144572de0

void __thiscall UE::IoStore::HTTP::FBuffer::Extend(FBuffer *this,uint param_1,uint param_2)

{
  void *pvVar1;
  void *_Dst;
  uint uVar2;
  
  uVar2 = (param_2 - 1) + param_1 & -param_2;
  pvVar1 = (void *)this->Data;
  this->Max = uVar2;
  if (-1 < (int)(this->field2_0xc).UsedInline) {
    pvVar1 = FMemory::Realloc(pvVar1,(ulonglong)uVar2,8);
    this->Data = (ulong64)pvVar1;
    return;
  }
  _Dst = FMemory::Malloc((ulonglong)uVar2,8);
  this->Data = (ulong64)_Dst;
  memcpy(_Dst,pvVar1,(ulonglong)((this->field2_0xc).UsedInline & 0x7fffffff));
  (this->field2_0xc).UsedInline = (this->field2_0xc).UsedInline & 0x7fffffff;
  return;
}

// GetCapacity @ 144573710

uint __thiscall UE::IoStore::HTTP::FBuffer::GetCapacity(FBuffer *this)

{
  return this->Max;
}

// GetData @ 144573e90

char * __thiscall UE::IoStore::HTTP::FBuffer::GetData(FBuffer *this)

{
  return (char *)this->Data;
}

// GetDataPtr @ 144573ea0

char * __thiscall UE::IoStore::HTTP::FBuffer::GetDataPtr(FBuffer *this)

{
  return (char *)this->Data;
}

// GetMutableFree @ 144574340

FMutableSection * __thiscall
UE::IoStore::HTTP::FBuffer::GetMutableFree
          (FBuffer *this,FMutableSection *__return_storage_ptr__,uint param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_1 == 0) && (((this->field2_0xc).UsedInline & 0x7fffffff) == this->Max)) {
    param_1 = param_2;
  }
  uVar1 = ((this->field2_0xc).UsedInline & 0x7fffffff) + param_1;
  if (this->Max < uVar1) {
    Extend(this,uVar1,param_2);
  }
  uVar1 = (this->field2_0xc).UsedInline;
  __return_storage_ptr__->Data = (char *)((ulonglong)(uVar1 & 0x7fffffff) + this->Data);
  __return_storage_ptr__->Size = this->Max - (uVar1 & 0x7fffffff);
  return __return_storage_ptr__;
}

// GetSize @ 1445747e0

uint __thiscall UE::IoStore::HTTP::FBuffer::GetSize(FBuffer *this)

{
  return (this->field2_0xc).UsedInline & 0x7fffffff;
}

// Resize @ 144580520

void __thiscall UE::IoStore::HTTP::FBuffer::Resize(FBuffer *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Max < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Size <= Max",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                       ,0x193,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->field2_0xc).UsedInline =
       (this->field2_0xc).UsedInline ^ ((this->field2_0xc).UsedInline ^ param_1) & 0x7fffffff;
  return;
}

