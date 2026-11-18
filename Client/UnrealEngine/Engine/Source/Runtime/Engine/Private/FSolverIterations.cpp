// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 1482c9880

UScriptStruct * __cdecl FSolverIterations::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSolverIterations.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSolverIterations.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSolverIterations,(UObject *)pUVar1,
                         L"SolverIterations");
  }
  return Z_Registration_Info_UScriptStruct_FSolverIterations.OuterSingleton;
}

// FSolverIterations @ 1482dab00

FSolverIterations * __thiscall FSolverIterations::FSolverIterations(FSolverIterations *this)

{
  this->SolverIterations = 3;
  this->JointIterations = 2;
  this->CollisionIterations = 2;
  this->SolverPushOutIterations = 1;
  this->JointPushOutIterations = 1;
  this->CollisionPushOutIterations = 0;
  return this;
}

