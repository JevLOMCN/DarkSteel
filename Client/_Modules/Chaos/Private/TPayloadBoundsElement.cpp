// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// Serialize @ 1437ab140

void __thiscall
Chaos::TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double>::Serialize
          (TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double> *this,
          FChaosArchive *param_1)

{
  longlong *plVar1;
  TGeometryParticleHandleImp<double,3,1> *pTVar2;
  TGeometryParticle<double,3> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FUniqueIdx *pFVar7;
  uint local_res8 [2];
  
  FChaosArchive::SerializePtr<Chaos::TGeometryParticle<double,3>_>
            (param_1,(TSerializablePtr<Chaos::TGeometryParticle<double,3>_> *)this);
  FChaosArchive::SerializePtr<Chaos::TGeometryParticleHandleImp<double,3,1>_>
            (param_1,(TSerializablePtr<Chaos::TGeometryParticleHandleImp<double,3,1>_> *)
                     &(this->Payload).GeometryParticleHandle);
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  iVar6 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  if (0xd < iVar6) {
    iVar6 = FArchiveState::CustomVer
                      ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
    if (iVar6 < 0x22) {
      plVar1 = (longlong *)param_1->_padding_;
      if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
        if ((param_1->_padding_ & 0x10000) == 0) {
          (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_res8);
        }
      }
      else {
        local_res8[0] = *(uint *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
    }
  }
  pTVar2 = (this->Payload).GeometryParticleHandle;
  if (pTVar2 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    pTVar3 = (this->Payload).ExternalGeometryParticle;
    if (pTVar3 != (TGeometryParticle<double,3> *)0x0) {
      (this->Payload).CachedUniqueIdx.Idx = (pTVar3->MNonFrequentData).Property.MUniqueIdx.Idx;
    }
  }
  else {
    pFVar7 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                       ((TGeometryParticlesImp<double,3,0> *)pTVar2->_padding_,
                        (int)pTVar2->_padding_);
    (this->Payload).CachedUniqueIdx.Idx = pFVar7->Idx;
  }
  pTVar2 = (this->Payload).GeometryParticleHandle;
  if ((pTVar2 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
     ((this->Payload).ExternalGeometryParticle != (TGeometryParticle<double,3> *)0x0)) {
    pFVar7 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                       ((TGeometryParticlesImp<double,3,0> *)pTVar2->_padding_,
                        (int)pTVar2->_padding_);
    if (pFVar7->Idx !=
        (((this->Payload).ExternalGeometryParticle)->MNonFrequentData).Property.MUniqueIdx.Idx) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3133560516564217912>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                         ,0xfc8,
                         "GeometryParticleHandle->UniqueIdx() == ExternalGeometryParticle->UniqueIdx()"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  if (((this->Payload).GeometryParticleHandle != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
     ((this->Payload).CachedUniqueIdx.Idx == -1)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3133560516564217909>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                       ,0xfcb,"!GeometryParticleHandle || CachedUniqueIdx.IsValid()");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (((this->Payload).ExternalGeometryParticle != (TGeometryParticle<double,3> *)0x0) &&
     ((this->Payload).CachedUniqueIdx.Idx == -1)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3133560516564217908>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                       ,0xfcc,"!ExternalGeometryParticle || CachedUniqueIdx.IsValid()");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TBox<double,3>::SerializeAsAABB((FArchive *)param_1,&this->Bounds);
  return;
}

