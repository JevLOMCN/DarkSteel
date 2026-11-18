// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// AllowEliminatingReferences @ 141edca30

void __thiscall
`FArchiveReplaceObjectRefBase::SerializeObject'::__l2::FReplaceObjectRefCollector::
AllowEliminatingReferences(void *this,bool param_1)

{
  *(bool *)((longlong)this + 0x18) = param_1;
  return;
}

// HandleObjectReference @ 141efaaf0

void __thiscall
`FArchiveReplaceObjectRefBase::SerializeObject'::__l2::FReplaceObjectRefCollector::
HandleObjectReference(void *this,UObject **param_1,UObject *param_2,FProperty *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(char *)((longlong)this + 0x18) != '\0') {
    plVar1 = *(longlong **)((longlong)this + 0x10);
    if ((param_3 == (FProperty *)0x0) &&
       (param_3 = (FProperty *)plVar1[0xe], param_3 == (FProperty *)0x0)) {
      (**(code **)(*plVar1 + 0x168))(plVar1);
    }
    else {
      (**(code **)(*plVar1 + 0x240))
                (plVar1,param_3,param_3->PropertyFlags >> 0x23 & 0xffffffffffffff01);
      plVar2 = *(longlong **)((longlong)this + 0x10);
      (**(code **)(*plVar2 + 0x168))(plVar2,param_1);
      if (param_3 != (FProperty *)0x0) {
        (**(code **)(*plVar1 + 0x248))
                  (plVar1,param_3,param_3->PropertyFlags >> 0x23 & 0xffffffffffffff01);
      }
    }
  }
  return;
}

// IsIgnoringArchetypeRef @ 141efbf40

bool __thiscall
`FArchiveReplaceObjectRefBase::SerializeObject'::__l2::FReplaceObjectRefCollector::
IsIgnoringArchetypeRef(void *this)

{
  return (bool)(*(byte *)(*(longlong *)((longlong)this + 0x10) + 0x2a) >> 1 & 1);
}

// IsIgnoringTransient @ 141efbf70

bool __thiscall
`FArchiveReplaceObjectRefBase::SerializeObject'::__l2::FReplaceObjectRefCollector::
IsIgnoringTransient(void *this)

{
  return false;
}

