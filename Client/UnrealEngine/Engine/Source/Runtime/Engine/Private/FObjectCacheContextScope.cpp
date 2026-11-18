// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FObjectCacheContextScope @ 14808a210

FObjectCacheContextScope * __thiscall
FObjectCacheContextScope::FObjectCacheContextScope(FObjectCacheContextScope *this)

{
  longlong lVar1;
  void *pvVar2;
  FObjectCacheContext *pFVar3;
  FObjectCacheContext *pFVar4;
  ulonglong uVar5;
  
  pvVar2 = ThreadLocalStoragePointer;
  uVar5 = (ulonglong)_tls_index;
  this->bIsOwner = false;
  lVar1 = *(longlong *)((longlong)pvVar2 + uVar5 * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (*(longlong *)(lVar1 + 0x8ff8) == 0) {
    if (*(char *)(lVar1 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar3 = ::operator_new(0x310);
    pFVar4 = (FObjectCacheContext *)0x0;
    if (pFVar3 != (FObjectCacheContext *)0x0) {
      memset(pFVar3,0,0x310);
      pFVar4 = FObjectCacheContext::FObjectCacheContext(pFVar3);
    }
    pFVar3 = *(FObjectCacheContext **)(lVar1 + 0x8ff8);
    if ((pFVar3 != pFVar4) &&
       (*(FObjectCacheContext **)(lVar1 + 0x8ff8) = pFVar4, pFVar3 != (FObjectCacheContext *)0x0)) {
      FObjectCacheContext::~FObjectCacheContext(pFVar3);
      ::operator_delete(pFVar3,0x310);
    }
    this->bIsOwner = true;
  }
  return this;
}

// ~FObjectCacheContextScope @ 14808eec0

void __thiscall FObjectCacheContextScope::~FObjectCacheContextScope(FObjectCacheContextScope *this)

{
  longlong lVar1;
  FObjectCacheContext *this_00;
  undefined8 *puVar2;
  
  if (this->bIsOwner != false) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar1 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    puVar2 = (undefined8 *)(lVar1 + 0x8ff8);
    this_00 = (FObjectCacheContext *)*puVar2;
    if (this_00 != (FObjectCacheContext *)0x0) {
      *puVar2 = 0;
      FObjectCacheContext::~FObjectCacheContext(this_00);
      ::operator_delete(this_00,0x310);
      return;
    }
  }
  return;
}

// GetContext @ 1480a4350

FObjectCacheContext * __thiscall
FObjectCacheContextScope::GetContext(FObjectCacheContextScope *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  return *(FObjectCacheContext **)(lVar1 + 0x8ff8);
}

