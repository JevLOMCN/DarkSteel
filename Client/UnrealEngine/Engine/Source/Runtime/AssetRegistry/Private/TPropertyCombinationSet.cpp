// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 5

// Add @ 142b53b20

void __thiscall TPropertyCombinationSet<4>::Add(TPropertyCombinationSet<4> *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if ((0xf < param_1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PropertyCombination <= MaxValue",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                         ,0x54,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar3 = this[param_1 >> 5].Storage[0];
  uVar5 = 1 << ((byte)param_1 & 0x1f);
  if ((uVar5 & uVar3) == 0) {
    uVar4 = 1;
    do {
      if (((param_1 & uVar4) == 0) &&
         (bVar2 = IsRedundantPropertyCombinationRecursive(this,uVar4 | param_1,2), bVar2)) {
        return;
      }
      uVar4 = uVar4 * 2;
    } while (uVar4 < 0x10);
    this[param_1 >> 5].Storage[0] = uVar3 | uVar5;
    uVar3 = 1;
    do {
      uVar5 = uVar3 * 2;
      if ((param_1 & uVar3) != 0) {
        uVar3 = ~uVar3 & param_1;
        this[uVar3 >> 5].Storage[0] = this[uVar3 >> 5].Storage[0] & ~(1 << ((byte)uVar3 & 0x1f));
        RemoveRedundantPropertyCombinationsRecursive(this,uVar3,uVar5);
      }
      uVar3 = uVar5;
    } while (uVar5 < 0x10);
  }
  return;
}

// IsRedundantPropertyCombinationRecursive @ 142b5a110

bool __thiscall
TPropertyCombinationSet<4>::IsRedundantPropertyCombinationRecursive
          (TPropertyCombinationSet<4> *this,uint param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = param_2;
  if ((this[param_1 >> 5].Storage[0] >> (param_1 & 0x1f) & 1) == 0) {
    for (; uVar1 < 0x10; uVar1 = uVar1 * 2) {
      if (((param_1 & uVar1) == 0) &&
         (bVar2 = IsRedundantPropertyCombinationRecursive(this,uVar1 | param_1,param_2 * 2), bVar2))
      goto LAB_142b5a173;
    }
    bVar2 = false;
  }
  else {
LAB_142b5a173:
    bVar2 = true;
  }
  return bVar2;
}

// IsRedundantPropertyCombinationRecursive @ 142b5a1a0

bool __thiscall
TPropertyCombinationSet<0>::IsRedundantPropertyCombinationRecursive
          (TPropertyCombinationSet<0> *this,uint param_1,uint param_2)

{
  bool bVar1;
  
  if ((this[param_1 >> 5].Storage[0] >> (param_1 & 0x1f) & 1) == 0) {
    while (param_2 == 0) {
      bVar1 = IsRedundantPropertyCombinationRecursive(this,param_1,0);
      if (bVar1) goto LAB_142b5a203;
      param_2 = 0;
    }
    bVar1 = false;
  }
  else {
LAB_142b5a203:
    bVar1 = true;
  }
  return bVar1;
}

// RemoveRedundantPropertyCombinationsRecursive @ 142b642d0

void __thiscall
TPropertyCombinationSet<4>::RemoveRedundantPropertyCombinationsRecursive
          (TPropertyCombinationSet<4> *this,uint param_1,uint param_2)

{
  uint uVar1;
  
  while (uVar1 = param_2, uVar1 < 0x10) {
    param_2 = uVar1 * 2;
    if ((param_1 & uVar1) != 0) {
      uVar1 = ~uVar1 & param_1;
      this[uVar1 >> 5].Storage[0] = this[uVar1 >> 5].Storage[0] & ~(1 << ((byte)uVar1 & 0x1f));
      RemoveRedundantPropertyCombinationsRecursive(this,uVar1,param_2);
    }
  }
  return;
}

// RemoveRedundantPropertyCombinationsRecursive @ 142b64350

/* WARNING: Removing unreachable block (ram,0x000142b64379) */
/* WARNING: Removing unreachable block (ram,0x000142b643ae) */

void __thiscall
TPropertyCombinationSet<0>::RemoveRedundantPropertyCombinationsRecursive
          (TPropertyCombinationSet<0> *this,uint param_1,uint param_2)

{
  if (param_2 == 0) {
    do {
    } while( true );
  }
  return;
}

