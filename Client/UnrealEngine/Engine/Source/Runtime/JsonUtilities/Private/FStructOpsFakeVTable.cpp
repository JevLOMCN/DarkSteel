// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: JsonUtilities
// Functions: 1

// GetHandlingFuncImpl @ 14462d470

_func___cdecl_void * __thiscall
UE::CoreUObject::Private::FStructOpsFakeVTable::GetHandlingFuncImpl
          (FStructOpsFakeVTable *this,EStructOpsFakeVTableFlags param_1)

{
  code *pcVar1;
  bool bVar2;
  EStructOpsFakeVTableFlags EVar3;
  _func___cdecl_void *p_Var4;
  ulonglong uVar5;
  
  if (((this->Flags & param_1) == None) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!!(this->Flags & FuncFlag)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0x660,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    p_Var4 = (_func___cdecl_void *)(*pcVar1)();
    return p_Var4;
  }
  uVar5 = 0;
  for (EVar3 = param_1 - Construct & this->Flags; EVar3 != None; EVar3 = EVar3 & EVar3 - Construct)
  {
    uVar5 = (ulonglong)((int)uVar5 + 1);
  }
  return *(_func___cdecl_void **)(&this[1].Flags + uVar5 * 2);
}

