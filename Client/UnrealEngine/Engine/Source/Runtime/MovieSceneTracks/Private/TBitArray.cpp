// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// Assign<TFixedAllocator<1>_> @ 1467d4150

void __thiscall
TBitArray<TFixedAllocator<1>_>::Assign<TFixedAllocator<1>_>
          (TBitArray<TFixedAllocator<1>_> *this,TBitArray<TFixedAllocator<1>_> *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_1->NumBits + 0x1fU & 0xffffffe0;
  this->NumBits = 0;
  if ((this->MaxBits < (int)uVar3) || (0x20 < this->MaxBits)) {
    uVar2 = 0x20;
    if (0x20 < (int)uVar3) {
      uVar2 = uVar3;
    }
    this->MaxBits = uVar2;
    Realloc(this,0);
  }
  iVar1 = param_1->NumBits;
  this->NumBits = iVar1;
  if (iVar1 != 0) {
    memcpy(this,param_1,(ulonglong)(iVar1 + 0x1fU >> 5) << 2);
  }
  return;
}

// Realloc @ 146859890

void __thiscall
TBitArray<TFixedAllocator<1>_>::Realloc(TBitArray<TFixedAllocator<1>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (0x20 < (this->MaxBits + 0x1fU & 0xffffffe0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewMax >= 0 && NewMax <= NumInlineElements",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                       ,0x524,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar5 = this->NumBits >> 0x1f & 0x1f;
  uVar3 = this->NumBits + uVar5;
  iVar4 = (uVar3 & 0x1f) - uVar5;
  if (iVar4 != 0) {
    *(uint *)(&this->AllocatorInstance)[(int)uVar3 >> 5].InlineData[0].Pad =
         *(uint *)(&this->AllocatorInstance)[(int)uVar3 >> 5].InlineData[0].Pad &
         0xffffffffU >> (0x20U - (char)iVar4 & 0x1f);
  }
  return;
}

