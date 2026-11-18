// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UniversalObjectLocator
// Functions: 1

// Resolve @ 144349a80

UScriptStruct * __thiscall
UE::UniversalObjectLocator::FParameterTypeHandle::Resolve
          (FParameterTypeHandle *this,UScriptStruct *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FRegistry *pFVar4;
  UScriptStruct *pUVar5;
  
  if (this->Handle == 0xff) {
    return (UScriptStruct *)0x0;
  }
  pFVar4 = FRegistry::Get();
  bVar1 = this->Handle;
  if ((pFVar4->ParameterTypes).ArrayNum <= (int)(uint)bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar5 = (UScriptStruct *)(*pcVar2)();
      return pUVar5;
    }
  }
  pUVar5 = *(UScriptStruct **)
            ((pFVar4->ParameterTypes).AllocatorInstance.Data + (ulonglong)bVar1 * 8);
  if ((param_1 != (UScriptStruct *)0x0) && (pUVar5 != param_1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Expected || Result == Expected",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocatorParameterTypeHandle.cpp"
                       ,0x12,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar5 = (UScriptStruct *)(*pcVar2)();
      return pUVar5;
    }
  }
  return pUVar5;
}

