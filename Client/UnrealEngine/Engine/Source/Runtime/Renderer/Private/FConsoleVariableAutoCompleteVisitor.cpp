// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// OnConsoleVariable @ 1454fd3d0

void __cdecl
FConsoleVariableAutoCompleteVisitor::OnConsoleVariable
          (wchar_t *param_1,IConsoleObject *param_2,uint *param_3)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined4 local_res10 [2];
  
  plVar3 = (longlong *)(**(code **)(param_2->_padding_ + 0x38))(param_2);
  if (plVar3 != (longlong *)0x0) {
    uVar4 = (**(code **)(param_2->_padding_ + 0x18))(param_2);
    if (((uVar4 & 0x40) == 0) &&
       (cVar1 = (**(code **)(param_2->_padding_ + 0x18))(param_2), -1 < cVar1)) {
      return;
    }
    local_res10[0] = (**(code **)(*plVar3 + 0xd0))(plVar3);
    uVar2 = (*FCrc::MemCrc32Func)(local_res10,4,*param_3);
    *param_3 = uVar2;
  }
  return;
}

