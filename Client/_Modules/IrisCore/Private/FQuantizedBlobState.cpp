// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 5

// FQuantizedBlobState @ 144229940

FQuantizedBlobState * __thiscall
UE::Net::FNetBlob::FQuantizedBlobState::FQuantizedBlobState
          (FQuantizedBlobState *this,uint param_1,uint param_2,EMemoryAllocationFlags param_3)

{
  int iVar1;
  uchar *puVar2;
  FGenericPlatformMemoryConstants *pFVar3;
  uint uVar4;
  
  this->MemoryAllocationFlags = param_3;
  this->StateBuffer = (uchar *)0x0;
  this->AllocationSize = 0;
  if (param_3 == None) {
    puVar2 = FMemory::MallocZeroed((ulonglong)param_1,param_2);
    this->AllocationSize = param_1;
  }
  else {
    pFVar3 = FWindowsPlatformMemory::GetConstants();
    iVar1 = (int)pFVar3->PageSize;
    uVar4 = (param_1 - 1) + iVar1 & -iVar1;
    this->AllocationSize = uVar4;
    puVar2 = FMemory::MallocZeroed((ulonglong)uVar4,iVar1 + -1 + param_2 & -iVar1);
  }
  this->StateBuffer = puVar2;
  return this;
}

// ~FQuantizedBlobState @ 14422b300

void __thiscall
UE::Net::FNetBlob::FQuantizedBlobState::~FQuantizedBlobState(FQuantizedBlobState *this)

{
  if (this->StateBuffer != (uchar *)0x0) {
    if (this->MemoryAllocationFlags == Protectable) {
      FWindowsPlatformMemory::PageProtect
                (this->StateBuffer,(ulonglong)this->AllocationSize,true,true);
    }
    FMemory::Free(this->StateBuffer);
    return;
  }
  return;
}

// Protect @ 144249aa0

void __thiscall UE::Net::FNetBlob::FQuantizedBlobState::Protect(FQuantizedBlobState *this)

{
  if (this->MemoryAllocationFlags == Protectable) {
    FWindowsPlatformMemory::PageProtect
              (this->StateBuffer,(ulonglong)this->AllocationSize,true,false);
    return;
  }
  return;
}

// Unprotect @ 144255b60

void __thiscall UE::Net::FNetBlob::FQuantizedBlobState::Unprotect(FQuantizedBlobState *this)

{
  if (this->MemoryAllocationFlags == Protectable) {
    FWindowsPlatformMemory::PageProtect(this->StateBuffer,(ulonglong)this->AllocationSize,true,true)
    ;
    return;
  }
  return;
}

// operator= @ 1442698a0

FQuantizedBlobState * __thiscall
UE::Net::FNetBlob::FQuantizedBlobState::operator=
          (FQuantizedBlobState *this,FQuantizedBlobState *param_1)

{
  if (this->StateBuffer != (uchar *)0x0) {
    Unprotect(this);
    FMemory::Free(this->StateBuffer);
  }
  this->StateBuffer = param_1->StateBuffer;
  this->MemoryAllocationFlags = param_1->MemoryAllocationFlags;
  this->AllocationSize = param_1->AllocationSize;
  param_1->StateBuffer = (uchar *)0x0;
  param_1->MemoryAllocationFlags = None;
  param_1->AllocationSize = 0;
  return this;
}

