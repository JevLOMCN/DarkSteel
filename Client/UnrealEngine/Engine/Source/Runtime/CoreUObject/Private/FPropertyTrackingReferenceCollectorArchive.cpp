// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// operator<< @ 14225a340

FArchive * __thiscall
FPropertyTrackingReferenceCollectorArchive::operator<<
          (FPropertyTrackingReferenceCollectorArchive *this,UObject **param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*param_1 != (UObject *)0x0) {
    plVar1 = *(longlong **)&this->field_0xa0;
    uVar2 = (**(code **)(*plVar1 + 0x60))(plVar1);
    (**(code **)(*plVar1 + 0x58))(plVar1,*(undefined8 *)&this->field_0x70);
    (**(code **)(*plVar1 + 0x88))
              (plVar1,param_1,*(undefined8 *)&this->field_0x90,*(undefined8 *)&this->field_0x70);
    (**(code **)(*plVar1 + 0x58))(plVar1,uVar2);
  }
  return (FArchive *)this;
}

// operator<< @ 14225a3d0

FArchive * __thiscall
FPropertyTrackingReferenceCollectorArchive::operator<<
          (FPropertyTrackingReferenceCollectorArchive *this,FObjectPtr *param_1)

{
  if ((param_1->field0_0x0).Handle != (UObject *)0x0) {
    (**(code **)(*(longlong *)this + 0x168))();
  }
  return (FArchive *)this;
}

