// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// GetPhysicsBodyInstandeOwnerFromHitResult @ 14830b7a0

IPhysicsBodyInstanceOwner * __cdecl
IPhysicsBodyInstanceOwner::GetPhysicsBodyInstandeOwnerFromHitResult(FHitResult *param_1)

{
  UObject *this;
  UClass *pUVar1;
  longlong *plVar2;
  IPhysicsBodyInstanceOwner *pIVar3;
  
  if (param_1->PhysicsObject != (FPhysicsObject *)0x0) {
    this = FWeakObjectPtr::Get(&(param_1->PhysicsObjectOwner).WeakPtr);
    if (this == (UObject *)0x0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      pUVar1 = UPhysicsBodyInstanceOwnerResolver::StaticClass();
      plVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar1);
    }
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014830b7fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pIVar3 = (IPhysicsBodyInstanceOwner *)
               (**(code **)(*plVar2 + 0x10))(plVar2,param_1->PhysicsObject);
      return pIVar3;
    }
  }
  return (IPhysicsBodyInstanceOwner *)0x0;
}

// GetPhysicsBodyInstandeOwnerFromOverlapResult @ 14830b810

IPhysicsBodyInstanceOwner * __cdecl
IPhysicsBodyInstanceOwner::GetPhysicsBodyInstandeOwnerFromOverlapResult(FOverlapResult *param_1)

{
  UObject *this;
  UClass *pUVar1;
  longlong *plVar2;
  IPhysicsBodyInstanceOwner *pIVar3;
  
  if (param_1->PhysicsObject != (FPhysicsObject *)0x0) {
    this = FWeakObjectPtr::Get(&(param_1->PhysicsObjectOwner).WeakPtr);
    if (this == (UObject *)0x0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      pUVar1 = UPhysicsBodyInstanceOwnerResolver::StaticClass();
      plVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar1);
    }
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014830b863. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pIVar3 = (IPhysicsBodyInstanceOwner *)
               (**(code **)(*plVar2 + 0x10))(plVar2,param_1->PhysicsObject);
      return pIVar3;
    }
  }
  return (IPhysicsBodyInstanceOwner *)0x0;
}

