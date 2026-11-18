// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// CreateBuffer @ 144085560

TUniquePtr<Chaos::IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut>,TDefaultDelete<Chaos::IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut>_>_>
 __cdecl Chaos::FMultiBufferFactory<Chaos::FPBDRigidDirtyParticlesBufferOut>::CreateBuffer
                   (EMultiBufferMode param_1)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<Chaos::IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut>,TDefaultDelete<Chaos::IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut>_>_>
  TVar3;
  FGuardedTripleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut> *this;
  IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut> IVar4;
  FTripleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut> *this_00;
  undefined7 in_register_00000009;
  IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut> *pIVar5;
  char in_DL;
  
  pIVar5 = (IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut> *)
           CONCAT71(in_register_00000009,param_1);
  if (in_DL == '\x01') {
    IVar4 = (IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut>)::operator_new(0x68);
    if (IVar4 != (IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut>)0x0) {
      *(undefined8 *)((longlong)IVar4 + 8) = 0;
      *(undefined ***)IVar4 =
           &___7__FSingleBuffer_UFPBDRigidDirtyParticlesBufferOut_Chaos___Chaos__6B_;
      *(undefined8 *)((longlong)IVar4 + 0x10) = 0;
      *(undefined8 *)((longlong)IVar4 + 0x18) = 0;
      *(undefined8 *)((longlong)IVar4 + 0x20) = 0;
      *(undefined8 *)((longlong)IVar4 + 0x38) = 0;
      *(undefined4 *)((longlong)IVar4 + 0x40) = 0;
      *(undefined4 *)((longlong)IVar4 + 0x44) = 0x80;
      *(undefined4 *)((longlong)IVar4 + 0x48) = 0xffffffff;
      *(undefined4 *)((longlong)IVar4 + 0x4c) = 0;
      *(undefined8 *)((longlong)IVar4 + 0x58) = 0;
      *(undefined4 *)((longlong)IVar4 + 0x60) = 0;
      *pIVar5 = IVar4;
      return (TUniquePtr<Chaos::IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut>,TDefaultDelete<Chaos::IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut>_>_>
              )pIVar5;
    }
    *pIVar5 = (IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut>)0x0;
    return (TUniquePtr<Chaos::IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut>,TDefaultDelete<Chaos::IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut>_>_>
            )pIVar5;
  }
  if (in_DL != '\x02') {
    if (in_DL == '\x03') {
      this_00 = ::operator_new(0x130);
      if (this_00 != (FTripleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut> *)0x0) {
        IVar4 = (IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut>)
                FTripleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut>::
                FTripleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut>(this_00);
        *pIVar5 = IVar4;
        return (TUniquePtr<Chaos::IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut>,TDefaultDelete<Chaos::IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut>_>_>
                )pIVar5;
      }
    }
    else if (in_DL == '\x04') {
      this = ::operator_new(0x50);
      if (this != (FGuardedTripleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut> *)0x0) {
        IVar4 = (IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut>)
                FGuardedTripleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut>::
                FGuardedTripleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut>(this);
        *pIVar5 = IVar4;
        return (TUniquePtr<Chaos::IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut>,TDefaultDelete<Chaos::IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut>_>_>
                )pIVar5;
      }
    }
    else {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\MultiBufferResource.h"
                         ,0x154,L"FMultiBufferFactory Unexpected buffer mode");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar3.Ptr = (IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut> *)(*pcVar1)();
        return (TUniquePtr<Chaos::IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut>,TDefaultDelete<Chaos::IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut>_>_>
                )TVar3.Ptr;
      }
    }
    *pIVar5 = (IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut>)0x0;
    return (TUniquePtr<Chaos::IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut>,TDefaultDelete<Chaos::IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut>_>_>
            )pIVar5;
  }
  IVar4 = (IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut>)::operator_new(0xd8);
  if (IVar4 != (IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut>)0x0) {
    *(undefined8 *)((longlong)IVar4 + 8) = 0;
    *(undefined8 *)((longlong)IVar4 + 0x10) = 0;
    *(undefined ***)IVar4 =
         &___7__FDoubleBuffer_UFPBDRigidDirtyParticlesBufferOut_Chaos___Chaos__6B_;
    *(undefined8 *)((longlong)IVar4 + 0x18) = 0;
    *(undefined8 *)((longlong)IVar4 + 0x20) = 0;
    *(undefined8 *)((longlong)IVar4 + 0x38) = 0;
    *(undefined4 *)((longlong)IVar4 + 0x40) = 0;
    *(undefined4 *)((longlong)IVar4 + 0x44) = 0x80;
    *(undefined4 *)((longlong)IVar4 + 0x48) = 0xffffffff;
    *(undefined4 *)((longlong)IVar4 + 0x4c) = 0;
    *(undefined8 *)((longlong)IVar4 + 0x58) = 0;
    *(undefined4 *)((longlong)IVar4 + 0x60) = 0;
    *(undefined8 *)((longlong)IVar4 + 0x68) = 0;
    *(undefined8 *)((longlong)IVar4 + 0x70) = 0;
    *(undefined8 *)((longlong)IVar4 + 0x78) = 0;
    *(undefined8 *)((longlong)IVar4 + 0x80) = 0;
    *(undefined8 *)((longlong)IVar4 + 0x98) = 0;
    *(undefined4 *)((longlong)IVar4 + 0xa0) = 0;
    *(undefined4 *)((longlong)IVar4 + 0xa4) = 0x80;
    *(undefined4 *)((longlong)IVar4 + 0xa8) = 0xffffffff;
    *(undefined4 *)((longlong)IVar4 + 0xac) = 0;
    *(undefined8 *)((longlong)IVar4 + 0xb8) = 0;
    *(undefined4 *)((longlong)IVar4 + 0xc0) = 0;
    *(undefined8 **)((longlong)IVar4 + 0xd0) = (undefined8 *)((longlong)IVar4 + 0x68);
    *(undefined8 **)((longlong)IVar4 + 200) = (undefined8 *)((longlong)IVar4 + 8);
    *pIVar5 = IVar4;
    return (TUniquePtr<Chaos::IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut>,TDefaultDelete<Chaos::IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut>_>_>
            )pIVar5;
  }
  *pIVar5 = (IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut>)0x0;
  return (TUniquePtr<Chaos::IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut>,TDefaultDelete<Chaos::IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut>_>_>
          )pIVar5;
}

