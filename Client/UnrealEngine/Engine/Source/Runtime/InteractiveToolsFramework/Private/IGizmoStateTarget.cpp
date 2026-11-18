// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 4

// ~IGizmoStateTarget @ 1496893a0

void __thiscall IGizmoStateTarget::~IGizmoStateTarget(IGizmoStateTarget *this)

{
  *this = (IGizmoStateTarget)&___7IGizmoStateTarget__6B_;
  return;
}

// _getUObject @ 1496ca750

UObject * __thiscall IGizmoStateTarget::_getUObject(IGizmoStateTarget *this)

{
  return (UObject *)0x0;
}

// execBeginUpdate @ 1496ca930

void __cdecl IGizmoStateTarget::execBeginUpdate(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0001496ca948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x10))();
  return;
}

// execEndUpdate @ 1496ca9c0

void __cdecl IGizmoStateTarget::execEndUpdate(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0001496ca9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x18))();
  return;
}

