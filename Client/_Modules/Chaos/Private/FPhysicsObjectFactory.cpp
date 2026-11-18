// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// CreatePhysicsObject @ 143da3fa0

TUniquePtr<Chaos::FPhysicsObject,Chaos::FPhysicsObjectDeleter> __cdecl
Chaos::FPhysicsObjectFactory::CreatePhysicsObject
          (IPhysicsProxyBase *param_1,int param_2,FName *param_3)

{
  undefined8 *puVar1;
  undefined4 in_register_00000014;
  undefined8 *in_R9;
  
  puVar1 = ::operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    param_1->_padding_ = 0;
  }
  else {
    *puVar1 = CONCAT44(in_register_00000014,param_2);
    *(int *)(puVar1 + 1) = (int)param_3;
    *(undefined8 *)((longlong)puVar1 + 0xc) = *in_R9;
    param_1->_padding_ = (longlong)puVar1;
  }
  return (TUniquePtr<Chaos::FPhysicsObject,Chaos::FPhysicsObjectDeleter>)(FPhysicsObject *)param_1;
}

