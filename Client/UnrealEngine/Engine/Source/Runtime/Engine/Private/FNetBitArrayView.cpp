// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// SetBitValue @ 147c00fd0

void __thiscall
UE::Net::FNetBitArrayView::SetBitValue(FNetBitArrayView *this,uint param_1,bool param_2)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  puVar1 = this->Storage;
  if (this->BitCount <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2ac,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar5 = 1 << ((byte)param_1 & 0x1f);
  uVar4 = 0;
  if (param_2) {
    uVar4 = uVar5;
  }
  puVar1[param_1 >> 5] = ~uVar5 & puVar1[param_1 >> 5] | uVar4;
  return;
}

