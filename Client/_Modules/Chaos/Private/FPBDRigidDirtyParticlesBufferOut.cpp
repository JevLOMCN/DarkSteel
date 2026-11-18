// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// FPBDRigidDirtyParticlesBufferOut @ 144067eb0

FPBDRigidDirtyParticlesBufferOut * __thiscall
Chaos::FPBDRigidDirtyParticlesBufferOut::FPBDRigidDirtyParticlesBufferOut
          (FPBDRigidDirtyParticlesBufferOut *this)

{
  (this->DirtyGameThreadParticles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DirtyGameThreadParticles).ArrayNum = 0;
  (this->DirtyGameThreadParticles).ArrayMax = 0;
  *(undefined8 *)&(this->PhysicsParticleProxies).Elements = 0;
  *(undefined8 *)&(this->PhysicsParticleProxies).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PhysicsParticleProxies).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PhysicsParticleProxies).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PhysicsParticleProxies).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PhysicsParticleProxies).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->PhysicsParticleProxies).Elements.field_0x30 = 0xffffffff;
  (this->PhysicsParticleProxies).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PhysicsParticleProxies).HashSize = 0;
  return this;
}

// ~FPBDRigidDirtyParticlesBufferOut @ 14406b280

void __thiscall
Chaos::FPBDRigidDirtyParticlesBufferOut::~FPBDRigidDirtyParticlesBufferOut
          (FPBDRigidDirtyParticlesBufferOut *this)

{
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  
  (this->PhysicsParticleProxies).HashSize = 0;
  FVar1 = (this->PhysicsParticleProxies).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<IPhysicsProxyBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<IPhysicsProxyBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PhysicsParticleProxies).Elements);
  pFVar2 = (this->DirtyGameThreadParticles).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

