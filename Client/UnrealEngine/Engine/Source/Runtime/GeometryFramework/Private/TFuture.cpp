// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryFramework
// Functions: 1

// operator= @ 1496fb6c0

TFuture<void> * __thiscall TFuture<void>::operator=(TFuture<void> *this,TFuture<void> *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (this == param_1) {
    return this;
  }
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = 0;
  plVar3 = *(longlong **)&param_1->field_0x8;
  plVar4 = *(longlong **)&this->field_0x8;
  if (plVar3 != plVar4) {
    *(undefined8 *)&param_1->field_0x8 = 0;
    *(longlong **)&this->field_0x8 = plVar3;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar4 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      return this;
    }
  }
  return this;
}

