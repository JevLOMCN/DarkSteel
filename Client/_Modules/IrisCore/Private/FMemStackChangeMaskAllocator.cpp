// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// FMemStackChangeMaskAllocator @ 144229030

FMemStackChangeMaskAllocator * __thiscall
UE::Net::Private::FMemStackChangeMaskAllocator::FMemStackChangeMaskAllocator
          (FMemStackChangeMaskAllocator *this,FMemStackBase *param_1)

{
  this->MemStack = param_1;
  return this;
}

// Alloc @ 14422f6b0

void * __thiscall
UE::Net::Private::FMemStackChangeMaskAllocator::Alloc
          (FMemStackChangeMaskAllocator *this,uint param_1,uint param_2)

{
  void *pvVar1;
  
  pvVar1 = FMemStackBase::Alloc(this->MemStack,(ulonglong)param_1,(ulonglong)param_2);
  return pvVar1;
}

// Free @ 14423a780

void __thiscall
UE::Net::Private::FMemStackChangeMaskAllocator::Free
          (FMemStackChangeMaskAllocator *this,void *param_1)

{
  return;
}

