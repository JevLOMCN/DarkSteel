// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetComponentFromPhysicsObject @ 148307ec0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPrimitiveComponent * __cdecl
FPhysicsObjectExternalInterface::GetComponentFromPhysicsObject
          (UWorld *param_1,FPhysicsObject *param_2)

{
  IPhysicsProxyBase *pIVar1;
  UPrimitiveComponent *pUVar2;
  FPhysicsObject *local_res10 [3];
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_18;
  
  if ((param_2 != (FPhysicsObject *)0x0) && (param_1 != (UWorld *)0x0)) {
    local_18.ArrayNum = 1;
    local_18.DataPtr = local_res10;
    local_res10[0] = param_2;
    pIVar1 = Chaos::FPhysicsObjectInterface::GetProxy(&local_18);
    if ((param_1->PhysicsScene != (FPhysScene_Chaos *)0x0) && (pIVar1 != (IPhysicsProxyBase *)0x0))
    {
      pUVar2 = FPhysScene_Chaos::GetOwningComponent<UPrimitiveComponent>
                         (param_1->PhysicsScene,pIVar1);
      return pUVar2;
    }
  }
  return (UPrimitiveComponent *)0x0;
}

// GetRead_AssumesLocked @ 14830d030

FReadPhysicsObjectInterface<0> __cdecl FPhysicsObjectExternalInterface::GetRead_AssumesLocked(void)

{
  undefined1 local_res8;
  
  return local_res8;
}

// GetWrite_AssumesLocked @ 14830e0a0

FWritePhysicsObjectInterface<0> __cdecl
FPhysicsObjectExternalInterface::GetWrite_AssumesLocked(void)

{
  FWritePhysicsObjectInterface<0> in_CL;
  
  return in_CL;
}

// LockRead @ 148310dc0

FLockedPhysicsObjectExternalInterface<0> * __cdecl
FPhysicsObjectExternalInterface::LockRead
          (FLockedPhysicsObjectExternalInterface<0> *__return_storage_ptr__,FChaosScene *param_1)

{
  FScopedSceneLock_Chaos::FScopedSceneLock_Chaos(&__return_storage_ptr__->Lock,param_1,Read);
  return __return_storage_ptr__;
}

// LockRead @ 148310de0

FLockedPhysicsObjectExternalInterface<0> * __cdecl
FPhysicsObjectExternalInterface::LockRead
          (FLockedPhysicsObjectExternalInterface<0> *__return_storage_ptr__,FPhysicsObject *param_1)

{
  FChaosScene *pFVar1;
  
  pFVar1 = PhysicsObjectPhysicsCoreInterface::GetScene(param_1);
  FScopedSceneLock_Chaos::FScopedSceneLock_Chaos(&__return_storage_ptr__->Lock,pFVar1,Read);
  return __return_storage_ptr__;
}

// LockRead @ 148310e10

FLockedPhysicsObjectExternalInterface<0> * __cdecl
FPhysicsObjectExternalInterface::LockRead
          (FLockedPhysicsObjectExternalInterface<0> *__return_storage_ptr__,
          TArrayView<Chaos::FPhysicsObject_const_*_const,int> *param_1)

{
  FChaosScene *pFVar1;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar1 = PhysicsObjectPhysicsCoreInterface::GetScene(&local_18);
  FScopedSceneLock_Chaos::FScopedSceneLock_Chaos(&__return_storage_ptr__->Lock,pFVar1,Read);
  return __return_storage_ptr__;
}

// LockWrite @ 148310e50

FLockedPhysicsObjectExternalInterface<1> * __cdecl
FPhysicsObjectExternalInterface::LockWrite
          (FLockedPhysicsObjectExternalInterface<1> *__return_storage_ptr__,FChaosScene *param_1)

{
  FScopedSceneLock_Chaos::FScopedSceneLock_Chaos(&__return_storage_ptr__->Lock,param_1,Write);
  return __return_storage_ptr__;
}

// LockWrite @ 148310e70

FLockedPhysicsObjectExternalInterface<1> * __cdecl
FPhysicsObjectExternalInterface::LockWrite
          (FLockedPhysicsObjectExternalInterface<1> *__return_storage_ptr__,
          TArrayView<Chaos::FPhysicsObject_*_const,int> *param_1)

{
  FChaosScene *pFVar1;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  pFVar1 = PhysicsObjectPhysicsCoreInterface::GetScene(&local_18);
  FScopedSceneLock_Chaos::FScopedSceneLock_Chaos(&__return_storage_ptr__->Lock,pFVar1,Write);
  return __return_storage_ptr__;
}

