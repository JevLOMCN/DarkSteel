// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 5

// StaticStruct @ 1436c7f50

UScriptStruct * __cdecl FChaosVDConstraintDataWrapperBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDConstraintDataWrapperBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UScriptStruct_FChaosVDConstraintDataWrapperBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDConstraintDataWrapperBase,
                         (UObject *)pUVar1,L"ChaosVDConstraintDataWrapperBase");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDConstraintDataWrapperBase.OuterSingleton;
}

// GetSolverID @ 1436c7fd0

int __thiscall
FChaosVDConstraintDataWrapperBase::GetSolverID(FChaosVDConstraintDataWrapperBase *this)

{
  return -1;
}

// GetParticleIDAtSlot @ 1436c7fe0

int __thiscall
FChaosVDConstraintDataWrapperBase::GetParticleIDAtSlot
          (FChaosVDConstraintDataWrapperBase *this,EChaosVDParticlePairIndex param_1)

{
  return -1;
}

// GetConstraintIndex @ 1436c7ff0

int __thiscall
FChaosVDConstraintDataWrapperBase::GetConstraintIndex(FChaosVDConstraintDataWrapperBase *this)

{
  return -1;
}

// ~FChaosVDConstraintDataWrapperBase @ 1436d57a0

void __thiscall
FChaosVDConstraintDataWrapperBase::~FChaosVDConstraintDataWrapperBase
          (FChaosVDConstraintDataWrapperBase *this)

{
  return;
}

