// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// TFunctionRef<int___cdecl(int,int,int)><TFunction<int___cdecl(int,int,int)>_&> @ 149904d70

TFunctionRef<int___cdecl(int,int,int)> * __thiscall
TFunctionRef<int___cdecl(int,int,int)>::
TFunctionRef<int___cdecl(int,int,int)><TFunction<int___cdecl(int,int,int)>_&>
          (TFunctionRef<int___cdecl(int,int,int)> *this,TFunction<int___cdecl(int,int,int)> *param_1
          )

{
  code *pcVar1;
  bool bVar2;
  TFunctionRef<int___cdecl(int,int,int)> *pTVar3;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  if (*(longlong *)param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsBound(InFunc)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                       ,0x1d0,L"Cannot bind a null/unbound callable to a TFunctionRef");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TFunctionRef<int___cdecl(int,int,int)> *)(*pcVar1)();
      return pTVar3;
    }
  }
  *(TFunction<int___cdecl(int,int,int)> **)&this->field_0x8 = param_1;
  *(code **)this =
       UE::Core::Private::Function::
       TFunctionRefCaller<TFunction<int___cdecl(int,int,int)>,int,int,int,int>::Call;
  return this;
}

