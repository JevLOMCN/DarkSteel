// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 2

// ~TFunctionRefBase<UE::Core::Private::Function::FFunctionRefStoragePolicy,float___cdecl(UE::Math::TVector2<float>_const_&)> @ 14d8bb6b0

void __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::FFunctionRefStoragePolicy,float___cdecl(UE::Math::TVector2<float>_const_&)>
::
~TFunctionRefBase<UE::Core::Private::Function::FFunctionRefStoragePolicy,float___cdecl(UE::Math::TVector2<float>_const_&)>
          (TFunctionRefBase<UE::Core::Private::Function::FFunctionRefStoragePolicy,float___cdecl(UE::Math::TVector2<float>_const_&)>
           *this)

{
  return;
}

// operator() @ 14d8cf860

float __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::FFunctionRefStoragePolicy,float___cdecl(UE::Math::TVector2<float>_const_&)>
::operator()(TFunctionRefBase<UE::Core::Private::Function::FFunctionRefStoragePolicy,float___cdecl(UE::Math::TVector2<float>_const_&)>
             *this,TVector2<float> *param_1)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014d8cf867. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (*this->Callable)((this->Storage).Ptr,param_1);
  return fVar1;
}

