// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 2

// FGameInstance @ 1441d17b0

FGameInstance * __thiscall
FNetTraceInternal::FGameInstance::FGameInstance(FGameInstance *this,FGameInstance *param_1)

{
  TMap<unsigned___int64,FNetTraceInternal::FNetObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNetTraceInternal::FNetObject,0>_>
  *pTVar1;
  TMap<unsigned___int64,FNetTraceInternal::FNetObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNetTraceInternal::FNetObject,0>_>
  *pTVar2;
  undefined1 *_Dst;
  undefined1 *_Src;
  void *pvVar3;
  
  TSet<TTuple<unsigned_int,FNetTraceInternal::FConnection>,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FConnection,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<unsigned_int,FNetTraceInternal::FConnection>,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FConnection,0>,FDefaultSetAllocator>
            ((TSet<TTuple<unsigned_int,FNetTraceInternal::FConnection>,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FConnection,0>,FDefaultSetAllocator>
              *)this,(TSet<TTuple<unsigned_int,FNetTraceInternal::FConnection>,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FConnection,0>,FDefaultSetAllocator>
                      *)param_1);
  pTVar1 = &this->Objects;
  *(undefined8 *)pTVar1 = 0;
  pTVar2 = &param_1->Objects;
  *(undefined8 *)&(this->Objects).field_0x8 = 0;
  *(undefined8 *)&(this->Objects).field_0x20 = 0;
  *(undefined4 *)&(this->Objects).field_0x28 = 0;
  *(undefined4 *)&(this->Objects).field_0x2c = 0x80;
  *(undefined4 *)&(this->Objects).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Objects).field_0x34 = 0;
  *(undefined8 *)&(this->Objects).field_0x40 = 0;
  *(undefined4 *)&(this->Objects).field_0x48 = 0;
  if (pTVar1 != pTVar2) {
    *(undefined8 *)pTVar1 = *(undefined8 *)pTVar2;
    *(undefined8 *)pTVar2 = 0;
    _Dst = &(this->Objects).field_0x10;
    *(undefined4 *)&(this->Objects).field_0x8 = *(undefined4 *)&(param_1->Objects).field_0x8;
    _Src = &(param_1->Objects).field_0x10;
    *(undefined4 *)&(this->Objects).field_0xc = *(undefined4 *)&(param_1->Objects).field_0xc;
    *(undefined8 *)&(param_1->Objects).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->Objects).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar3 = *(void **)&(this->Objects).field_0x20;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      *(undefined8 *)&(this->Objects).field_0x20 = *(undefined8 *)&(param_1->Objects).field_0x20;
      *(undefined8 *)&(param_1->Objects).field_0x20 = 0;
      *(undefined4 *)&(this->Objects).field_0x28 = *(undefined4 *)&(param_1->Objects).field_0x28;
      *(undefined4 *)&(this->Objects).field_0x2c = *(undefined4 *)&(param_1->Objects).field_0x2c;
      *(undefined8 *)&(param_1->Objects).field_0x28 = 0;
    }
    *(undefined4 *)&(this->Objects).field_0x30 = *(undefined4 *)&(param_1->Objects).field_0x30;
    *(undefined4 *)&(this->Objects).field_0x34 = *(undefined4 *)&(param_1->Objects).field_0x34;
    *(undefined4 *)&(param_1->Objects).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Objects).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->Objects).field_0x40 == 0) {
    *(undefined4 *)&(this->Objects).field_0x38 = *(undefined4 *)&(param_1->Objects).field_0x38;
  }
  pvVar3 = *(void **)&(this->Objects).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  *(undefined8 *)&(this->Objects).field_0x40 = *(undefined8 *)&(param_1->Objects).field_0x40;
  *(undefined8 *)&(param_1->Objects).field_0x40 = 0;
  *(undefined4 *)&(this->Objects).field_0x48 = *(undefined4 *)&(param_1->Objects).field_0x48;
  *(undefined4 *)&(param_1->Objects).field_0x48 = 0;
  (this->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.AllocatorInstance.Data = (param_1->Name).Data.AllocatorInstance.Data;
  (param_1->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.ArrayNum = (param_1->Name).Data.ArrayNum;
  (this->Name).Data.ArrayMax = (param_1->Name).Data.ArrayMax;
  (param_1->Name).Data.ArrayNum = 0;
  (param_1->Name).Data.ArrayMax = 0;
  this->bIsServer = param_1->bIsServer;
  return this;
}

// ~FGameInstance @ 1441d3ad0

void __thiscall FNetTraceInternal::FGameInstance::~FGameInstance(FGameInstance *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->Objects).field_0x48 = 0;
  pvVar2 = *(void **)&(this->Objects).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNetTraceInternal::FNetObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNetTraceInternal::FNetObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNetTraceInternal::FNetObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Objects);
  *(undefined4 *)&(this->Connections).field_0x48 = 0;
  pvVar2 = *(void **)&(this->Connections).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FNetTraceInternal::FConnection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FNetTraceInternal::FConnection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FNetTraceInternal::FConnection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

