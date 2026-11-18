// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreHttpClient
// Functions: 8

// FTransactRef @ 14456b8a0

FTransactRef * __thiscall
UE::IoStore::HTTP::FTransactRef::FTransactRef(FTransactRef *this,ulong64 param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  FTransactRef *pFVar3;
  
  this->Self = param_2 == 2 | param_1;
  if ((param_1 & 1) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Ptr & 1) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionOne.inl"
                       ,0x3c8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FTransactRef *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

// ~FTransactRef @ 14456c0f0

void __thiscall UE::IoStore::HTTP::FTransactRef::~FTransactRef(FTransactRef *this)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)this->Self;
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  if (((ulonglong)puVar1 & 1) == 0) {
    if (((void *)*puVar1 != (void *)0x0) && (-1 < *(int *)((longlong)puVar1 + 0xc))) {
      FMemory::Free((void *)*puVar1);
    }
  }
  else {
    puVar1 = (undefined8 *)((ulonglong)puVar1 ^ 1);
    DestructItems<UE::IoStore::HTTP::DetailTwo::FHeaderNg,int>
              ((FHeaderNg *)puVar1[4],*(int *)(puVar1 + 5));
    if ((void *)puVar1[4] != (void *)0x0) {
      FMemory::Free((void *)puVar1[4]);
    }
    if ((void *)puVar1[1] != (void *)0x0) {
      FMemory::Free((void *)puVar1[1]);
      FMemory::Free(puVar1);
      return;
    }
  }
  FMemory::Free(puVar1);
  return;
}

// operator= @ 14456c230

void __thiscall UE::IoStore::HTTP::FTransactRef::operator=(FTransactRef *this,FTransactRef *param_1)

{
  ulong64 uVar1;
  
  uVar1 = this->Self;
  this->Self = param_1->Self;
  param_1->Self = uVar1;
  return;
}

// operator-> @ 14456c310

FTransaction * __thiscall UE::IoStore::HTTP::FTransactRef::operator->(FTransactRef *this)

{
  return (FTransaction *)this->Self;
}

// operator-> @ 14456c320

FTransaction * __thiscall UE::IoStore::HTTP::FTransactRef::operator->(FTransactRef *this)

{
  return (FTransaction *)this->Self;
}

// Get @ 1445734e0

FTransaction * __thiscall UE::IoStore::HTTP::FTransactRef::Get(FTransactRef *this)

{
  return (FTransaction *)this->Self;
}

// Get @ 1445734f0

FTransaction * __thiscall UE::IoStore::HTTP::FTransactRef::Get(FTransactRef *this)

{
  return (FTransaction *)this->Self;
}

// IsValid @ 144578b90

bool __thiscall UE::IoStore::HTTP::FTransactRef::IsValid(FTransactRef *this)

{
  return this->Self != 0;
}

