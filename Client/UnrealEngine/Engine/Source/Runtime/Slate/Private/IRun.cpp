// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 3

// ~IRun @ 14284a1f0

void __thiscall IRun::~IRun(IRun *this)

{
  *this = (IRun)&___7IRun__6B_;
  return;
}

// GetOutlineSize @ 142878a00

TVector2<double> * __thiscall
IRun::GetOutlineSize
          (IRun *this,TVector2<double> *__return_storage_ptr__,int param_1,int param_2,float param_3
          )

{
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  return __return_storage_ptr__;
}

// GetShadowSize @ 14287a450

TVector2<double> * __thiscall
IRun::GetShadowSize(IRun *this,TVector2<double> *__return_storage_ptr__,int param_1,int param_2,
                   float param_3)

{
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  return __return_storage_ptr__;
}

