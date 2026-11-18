// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreHttpClient
// Functions: 7

// FBase @ 14456ab60

FBase * __thiscall UE::IoStore::HTTP::DetailOne::FBase::FBase(FBase *this)

{
  (this->Buffer).Max = 0x100;
  (this->Buffer).Data = (ulong64)this->Data;
  (this->Buffer).field2_0xc.UsedInline = 0x80000000;
  return this;
}

// FBase @ 14456ab80

FBase * __thiscall UE::IoStore::HTTP::DetailTwo::FBase::FBase(FBase *this,FDriverNg *param_1)

{
  this->Driver = param_1;
  return this;
}

// AdvanceUsed @ 14456f4e0

void __thiscall UE::IoStore::HTTP::DetailOne::FBase::AdvanceUsed(FBase *this,uint param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  
  uVar1 = (this->Buffer).field2_0xc.UsedInline;
  (this->Buffer).field2_0xc.UsedInline = (uVar1 + param_1 ^ uVar1) & 0x7fffffff ^ uVar1;
  if ((this->Buffer).Max < (uVar1 + param_1 & 0x7fffffff)) {
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

// GetData @ 144573e80

char * __thiscall UE::IoStore::HTTP::DetailOne::FBase::GetData(FBase *this)

{
  return (char *)(this->Buffer).Data;
}

// GetDriver @ 144573ec0

FDriverNg * __thiscall UE::IoStore::HTTP::DetailTwo::FBase::GetDriver(FBase *this)

{
  return this->Driver;
}

// GetMutableFree @ 1445742d0

FMutableSection * __thiscall
UE::IoStore::HTTP::DetailOne::FBase::GetMutableFree
          (FBase *this,FMutableSection *__return_storage_ptr__,uint param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_1 == 0) && (((this->Buffer).field2_0xc.UsedInline & 0x7fffffff) == (this->Buffer).Max))
  {
    param_1 = param_2;
  }
  uVar1 = ((this->Buffer).field2_0xc.UsedInline & 0x7fffffff) + param_1;
  if ((this->Buffer).Max < uVar1) {
    FBuffer::Extend(&this->Buffer,uVar1,param_2);
  }
  uVar1 = (this->Buffer).field2_0xc.UsedInline;
  __return_storage_ptr__->Data = (char *)((ulonglong)(uVar1 & 0x7fffffff) + (this->Buffer).Data);
  __return_storage_ptr__->Size = (this->Buffer).Max - (uVar1 & 0x7fffffff);
  return __return_storage_ptr__;
}

// GetSize @ 1445747d0

uint __thiscall UE::IoStore::HTTP::DetailOne::FBase::GetSize(FBase *this)

{
  return (this->Buffer).field2_0xc.UsedInline & 0x7fffffff;
}

