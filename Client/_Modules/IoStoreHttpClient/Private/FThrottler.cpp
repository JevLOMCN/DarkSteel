// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreHttpClient
// Functions: 5

// FThrottler @ 14456b670

FThrottler * __thiscall UE::IoStore::HTTP::FThrottler::FThrottler(FThrottler *this)

{
  code *pcVar1;
  bool bVar2;
  FThrottler *pFVar3;
  double dVar4;
  
  dVar4 = __real_3ff0000000000000;
  this->CycleLast = 0;
  this->CyclePeriod = 0;
  this->Limit = 0;
  dVar4 = dVar4 / FGenericPlatformTime::SecondsPerCycle64;
  this->CycleFreq = (longlong)dVar4;
  if (((longlong)dVar4 & 0xffffffffffffffe0U) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CycleFreq >> SLICES_POW2",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                       ,0x20f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FThrottler *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

// GetAllowance @ 144573600

int __thiscall UE::IoStore::HTTP::FThrottler::GetAllowance(FThrottler *this,long64 param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (this->Limit == 0) {
    return 0x7fffffff;
  }
  lVar2 = this->CycleFreq >> 5;
  lVar1 = lVar2;
  if (param_1 < lVar2) {
    lVar1 = param_1;
  }
  lVar1 = this->CyclePeriod - lVar1;
  this->CyclePeriod = lVar1;
  if (0 < lVar1) {
    return (int)((lVar1 * -1000) / this->CycleFreq);
  }
  this->CyclePeriod = lVar1 + lVar2;
  return this->Limit >> 5;
}

// GetAllowance @ 144573660

int __thiscall UE::IoStore::HTTP::FThrottler::GetAllowance(FThrottler *this)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  lVar1 = local_res8[0].QuadPart - this->CycleLast;
  this->CycleLast = (long64)local_res8[0];
  if (this->Limit == 0) {
    return 0x7fffffff;
  }
  lVar3 = this->CycleFreq >> 5;
  lVar2 = lVar3;
  if (lVar1 < lVar3) {
    lVar2 = lVar1;
  }
  lVar2 = this->CyclePeriod - lVar2;
  this->CyclePeriod = lVar2;
  if (0 < lVar2) {
    return (int)((lVar2 * -1000) / this->CycleFreq);
  }
  this->CyclePeriod = lVar2 + lVar3;
  return this->Limit >> 5;
}

// ReturnUnused @ 144580740

void __thiscall UE::IoStore::HTTP::FThrottler::ReturnUnused(FThrottler *this,int param_1)

{
  if ((this->Limit != 0) && (param_1 != 0)) {
    this->CycleLast =
         this->CycleLast - ((longlong)param_1 * this->CycleFreq) / (longlong)(ulonglong)this->Limit;
  }
  return;
}

// SetLimit @ 1445819d0

void __thiscall UE::IoStore::HTTP::FThrottler::SetLimit(FThrottler *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if (param_1 < 0x80000) {
    uVar1 = param_1;
  }
  uVar2 = uVar1;
  if ((uVar1 != 0) && (uVar2 = 0x20, 0x20 < uVar1)) {
    uVar2 = uVar1;
  }
  this->Limit = uVar2 << 10;
  return;
}

