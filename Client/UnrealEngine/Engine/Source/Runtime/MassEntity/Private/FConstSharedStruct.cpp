// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 1

// CompareStructValues<FConstSharedStruct> @ 1471c0a20

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
FConstSharedStruct::CompareStructValues<FConstSharedStruct>
          (FConstSharedStruct *this,FConstSharedStruct *param_1,uint param_2)

{
  FStructSharedMemory *pFVar1;
  FStructSharedMemory *pFVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  longlong lVar5;
  UScriptStruct *pUVar6;
  UScriptStruct *this_00;
  
  pFVar1 = (this->StructMemoryPtr).Object;
  pUVar6 = (UScriptStruct *)0x0;
  this_00 = pUVar6;
  if (pFVar1 != (FStructSharedMemory *)0x0) {
    this_00 = (pFVar1->ScriptStruct).field0_0x0.DebugPtr;
  }
  pFVar2 = (param_1->StructMemoryPtr).Object;
  pUVar4 = pUVar6;
  if (pFVar2 != (FStructSharedMemory *)0x0) {
    pUVar4 = (pFVar2->ScriptStruct).field0_0x0.DebugPtr;
  }
  if (this_00 == pUVar4) {
    if (this_00 != (UScriptStruct *)0x0) {
      pUVar4 = pUVar6;
      if (pFVar2 != (FStructSharedMemory *)0x0) {
        lVar5 = (longlong)
                *(short *)((longlong)&((pFVar2->ScriptStruct).field0_0x0.DebugPtr)->_padding_ + 4);
        pUVar4 = (UScriptStruct *)
                 ((longlong)&(pFVar2->ScriptStruct).field0_0x0 + lVar5 + 7 & -lVar5);
      }
      if (pFVar1 != (FStructSharedMemory *)0x0) {
        lVar5 = (longlong)
                *(short *)((longlong)&((pFVar1->ScriptStruct).field0_0x0.DebugPtr)->_padding_ + 4);
        pUVar6 = (UScriptStruct *)
                 ((longlong)&(pFVar1->ScriptStruct).field0_0x0 + lVar5 + 7 & -lVar5);
      }
      bVar3 = UScriptStruct::CompareScriptStruct(this_00,pUVar6,pUVar4,param_2);
      if (!bVar3) {
        return false;
      }
    }
    return true;
  }
  return false;
}

