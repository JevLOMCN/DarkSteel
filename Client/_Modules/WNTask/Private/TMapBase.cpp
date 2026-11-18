// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WNTask
// Functions: 1

// Find @ 14a6adb60

/* WARNING: Enum "Type": Some values do not have unique names */

FWN_Task ** __thiscall
TMapBase<FWN_TaskHandle,FWN_Task_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWN_TaskHandle,FWN_Task_*,0>_>
::Find(TMapBase<FWN_TaskHandle,FWN_Task_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWN_TaskHandle,FWN_Task_*,0>_>
       *this,FWN_TaskHandle *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  FWN_Task **ppFVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar2 = param_1->Identifier;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    ((uVar2 >> 0x20) * 0x17 + uVar2 & (ulonglong)((this->Pairs).HashSize - 1)) * 4);
    if (iVar4 != -1) {
      lVar3 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar3 + (longlong)iVar4 * 0x18;
        if (*(ulonglong *)(lVar3 + (longlong)iVar4 * 0x18) == uVar2) {
          ppFVar5 = (FWN_Task **)0x0;
          if (lVar1 != 0) {
            ppFVar5 = (FWN_Task **)(lVar1 + 8);
          }
          return ppFVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return (FWN_Task **)0x0;
}

