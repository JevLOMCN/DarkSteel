// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 1481b9a90

UScriptStruct * __cdecl FBodyInstanceAsyncPhysicsTickHandle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBodyInstanceAsyncPhysicsTickHandle.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FBodyInstanceAsyncPhysicsTickHandle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBodyInstanceAsyncPhysicsTickHandle,
                         (UObject *)pUVar1,L"BodyInstanceAsyncPhysicsTickHandle");
  }
  return Z_Registration_Info_UScriptStruct_FBodyInstanceAsyncPhysicsTickHandle.OuterSingleton;
}

// operator-> @ 1481c9c70

FRigidBodyHandle_Internal * __thiscall
FBodyInstanceAsyncPhysicsTickHandle::operator->(FBodyInstanceAsyncPhysicsTickHandle *this)

{
  FSingleParticlePhysicsProxy *pFVar1;
  
  pFVar1 = this->Proxy;
  if (this->Proxy->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    pFVar1 = (FSingleParticlePhysicsProxy *)0x0;
  }
  return (FRigidBodyHandle_Internal *)pFVar1;
}

// IsValid @ 148205e20

bool __thiscall
FBodyInstanceAsyncPhysicsTickHandle::IsValid(FBodyInstanceAsyncPhysicsTickHandle *this)

{
  FSingleParticlePhysicsProxy *pFVar1;
  
  pFVar1 = this->Proxy;
  if (pFVar1 != (FSingleParticlePhysicsProxy *)0x0) {
    if (pFVar1->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      pFVar1 = (FSingleParticlePhysicsProxy *)0x0;
    }
    if (pFVar1 != (FSingleParticlePhysicsProxy *)0x0) {
      return true;
    }
  }
  return false;
}

